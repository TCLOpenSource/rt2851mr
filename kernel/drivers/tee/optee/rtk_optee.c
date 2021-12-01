#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/slab.h>
#include <mach/platform.h>  /* platform_info*/
#include <linux/mm.h>
//#include "rtk_optee.h"
//#include <rtk_kdriver/rtk_mcp.h> // MCP info
#include <linux/pageremap.h> // dvr_malloc_specific
#include <mach/rtk_log.h>
#include <mach/io.h>
#include <asm/cacheflush.h>
#include <mach/rtk_platform.h>
#include <linux/parser.h>

#define TAG_RTK_OPTEE "RTK_OPTEE"
#define optee_debug(format, args...)   rtd_printk(KERN_DEBUG, TAG_RTK_OPTEE, format, ## args)
#define optee_info(format, args...)    rtd_printk(KERN_INFO, TAG_RTK_OPTEE, format, ## args)
#define optee_notice(format, args...)  rtd_printk(KERN_NOTICE, TAG_RTK_OPTEE, format, ## args)
#define optee_warning(format, args...) rtd_printk(KERN_WARNING, TAG_RTK_OPTEE, format, ## args)
#define optee_err(format, args...)     rtd_printk(KERN_ERR, TAG_RTK_OPTEE, format, ## args)
#define optee_crit(format, args...)    rtd_printk(KERN_CRIT, TAG_RTK_OPTEE, format, ## args)
#define optee_alert(format, args...)   rtd_printk(KERN_ALERT, TAG_RTK_OPTEE, format, ## args)
#define optee_emerg(format, args...)   rtd_printk(KERN_EMERG, TAG_RTK_OPTEE, format, ## args)

#define EMMC_BLOCK_SIZE                 512
#define FW_TABLE_OFFSET                 0x2000000

#define  STB_WDOG_DATA6_reg    0xB8060114

#define FIRMWARE_DESCRIPTION_TABLE_SIGNATURE    "VERONA__" /* 8 bytes signature. */

#define FW_DESC_TABLE_V1_T_VERSION_1		0x1
#define FW_DESC_TABLE_V1_T_VERSION_11		0x11
#define FW_DESC_TABLE_V1_T_VERSION_21		0x21

typedef enum {
        FW_TYPE_RESERVED = 0,
        FW_TYPE_BOOTCODE,
        FW_TYPE_KERNEL,
        FW_TYPE_AUDIO,
        FW_TYPE_VIDEO,
        FW_TYPE_AUDIO_2,
        FW_TYPE_VIDEO_2,
        FW_TYPE_ECPU,
        FW_TYPE_JFFS2,
        FW_TYPE_SQUASH,
        FW_TYPE_EXT3,
        FW_TYPE_ODD,
        FW_TYPE_YAFFS2,
        FW_TYPE_AUDIO_FILE,
        FW_TYPE_VIDEO_FILE,
        FW_TYPE_IMAGE_FILE,
        FW_TYPE_ISO, //15
        FW_TYPE_SWAP,
        FW_TYPE_NTFS,
        FW_TYPE_RESCUE2,
        FW_TYPE_KCPU,
        FW_TYPE_UNKNOWN
} fw_type_code_t;

typedef struct {
        u8                      signature[8];
        u32                     checksum;
        u8                      version;        //0x00
        u8                      reserved[15];
        u32                     length;
} __attribute__((packed)) fw_desc_table_t;

typedef struct {
        u8                      signature[8];
        u32                     checksum;
        u8                      version;        //0x01
        u8                      reserved[7];
        u32                     paddings;
        u32                     part_list_len;
        u32                     fw_list_len;
} __attribute__((packed)) fw_desc_table_v1_t;

typedef struct {
        u8                      type;
        u8                      reserved: 7,
        ro: 1;
        u32                     length;
        u8                      fw_count;
        u8                      reserved_1[9];
        u8                      mount_point[32];
} __attribute__((packed)) part_desc_entry_v1_t;

typedef struct {
        u8                      type;
        u8                      reserved: 6,
        lzma: 1,
        ro: 1;
        u32                     version;
        u32                     target_addr;
        u32                     offset;
        u32                     length;
        u32                     paddings;
        u32                     checksum;
        u8                      reserved_1[6];
} __attribute__((packed)) fw_desc_entry_v1_t;

typedef struct {
        fw_desc_entry_v1_t      v1;
        u32                     act_size;
        u8                      hash[32];
        u8                      part_num;
        u8                      reserved[27];
} __attribute__((packed)) fw_desc_entry_v11_t;

typedef struct {
        fw_desc_entry_v1_t v1;
        u32                     act_size;
        u8                      part_num;
        u8                      RSA_sign[256];
        u8                      reserved[27];
} __attribute__((packed)) fw_desc_entry_v21_t;


extern int mmc_fast_read(unsigned int, unsigned int, unsigned char *);
#ifdef CONFIG_REALTEK_SECURE
__attribute__((weak)) void dcmt_clear_kcpu_text(void)
{
	return;
}
__attribute__((weak)) void dcmt_restore_kcpu_text(void)
{
	return;
}

__attribute__((weak)) void arm_wrapper_clear_kcpu_text(void)
{
	return;
}
__attribute__((weak)) void arm_wrapper_restore_kcpu_text(void)
{
	return;
}
#endif

enum {
	Opt_bootcode_size,
	Opt_factory_ro_size,
	Opt_eeprom_size,
	Opt_factory_size,
	Opt_ss_size,
	Opt_reserved_size,
	Opt_err
};
static const match_table_t fw_table_tokens = {
	{Opt_bootcode_size, "bootcode_size=%s"},
	{Opt_factory_ro_size, "factory_ro_size=%s"},
	{Opt_eeprom_size, "eeprom_size=%s"},
	{Opt_factory_size, "factory_size=%s"},
	{Opt_ss_size, "ss_size=%s"},
	{Opt_reserved_size, "reserved_size=%s"},
	{Opt_err, NULL}
};
static unsigned long rtk_get_fw_table_addr(void)
{
	char *ptr = NULL;
	const char delim[] = " ";
	unsigned long bootcode_size = 0, factory_ro_size = 0, eeprom_size = 0,
	  	factory_size = 0, ss_size = 0, reserved_size = 0;
	char *s_dup = NULL, *s_size = NULL , *tmp_size = NULL;
	int table_idx =-1, err = -1;
	ptr = platform_info.system_parameters;
	s_dup = kstrdup(ptr, GFP_KERNEL);
	while((s_size = strsep(&s_dup, delim)) != NULL){
		substring_t args[MAX_OPT_ARGS];
		table_idx = match_token(s_size, fw_table_tokens, args);
		switch(table_idx){
		case Opt_bootcode_size:
			tmp_size = match_strdup(args);
			err = kstrtoul(tmp_size, 16, &bootcode_size);
			if(err){
				optee_err("get size bootcode fail\n");
				goto out;
			}
			break;
		case Opt_factory_ro_size:
			tmp_size = match_strdup(args);
			err = kstrtoul(tmp_size, 16, &factory_ro_size);
			if(err){
				optee_err("get size factory_ro_size fail\n");
				goto out;
			}
			break;
		case Opt_eeprom_size:
			tmp_size = match_strdup(args);
			err = kstrtoul(tmp_size, 16, &eeprom_size);
			if(err){
				optee_err("get size eeprom_size fail\n");
				goto out;
			}
			break;
		case Opt_factory_size:
			tmp_size = match_strdup(args);
			err = kstrtoul(tmp_size, 16, &factory_size);
			if(err){
				optee_err("get size factory_size fail\n");
				goto out;
			}
			break;
		case Opt_ss_size:
			tmp_size = match_strdup(args);
			err = kstrtoul(tmp_size, 16, &ss_size);
			if(err){
				optee_err("get size ss_size fail\n");
				goto out;
			}
			break;
		case Opt_reserved_size:
			tmp_size = match_strdup(args);
			err = kstrtoul(tmp_size, 16, &reserved_size);
			if(err){
				optee_err("get size reserved fail\n");
				goto out;
			}
			break;

		default:
			break;
		}
		if(tmp_size){
			kfree(tmp_size);
			tmp_size = NULL;
		}
	}


out:
	if(tmp_size){
		kfree(tmp_size);
		tmp_size = NULL;
	}
	if(s_dup){
		kfree(s_dup);
		s_dup = NULL;
	}

	optee_debug("bootcode_size: %lx factory_ro_size: %lx eeprom_size:%lx factory_size: %lx ss_size: %lx reserved_size:%lx\n", \
                    bootcode_size, factory_ro_size, eeprom_size, factory_size, ss_size, reserved_size);


	return (bootcode_size +  factory_ro_size+ eeprom_size + factory_size + ss_size + reserved_size);

}

static int read_emmc_data(unsigned int blk_offset, size_t size, void *buf)
{
    int ret = 0;

    size = (size + (EMMC_BLOCK_SIZE - 1)) & ~(EMMC_BLOCK_SIZE - 1);
    //optee_debug("%s offset: %x, size: %lx, buf: %p \n", __FUNCTION__, blk_offset, size / EMMC_BLOCK_SIZE, buf);
#ifdef CONFIG_MMC_RTKEMMC_PLUS
#ifdef CONFIG_MMC_RTKSD
    ret = mmc_fast_read(blk_offset, size / EMMC_BLOCK_SIZE, buf);
#endif
#else
    panic("Please enable mmc support !!\n");
#endif
    return ret;
}

static int rtk_load_fw_table_from_emmc (unsigned long fw_table_buf)
{
    int ret = 0;
    unsigned long fw_table_flash_addr = 0;
    fw_desc_table_v1_t *fw_desc_table_v1 = NULL;

    fw_table_flash_addr = rtk_get_fw_table_addr();

    ret = read_emmc_data(fw_table_flash_addr / EMMC_BLOCK_SIZE, PAGE_SIZE, (void *)fw_table_buf);
    if (ret < 0)
    {
        optee_err("read fw_table failed... [%s][%d][%s]\n", __FILE__ , __LINE__ , __func__);
        return -1;
    }

    fw_desc_table_v1 = (fw_desc_table_v1_t *)fw_table_buf;

    if (strncmp(fw_desc_table_v1->signature, FIRMWARE_DESCRIPTION_TABLE_SIGNATURE,
                sizeof(fw_desc_table_v1->signature)) != 0)
    {
        optee_err("[%s][%d][%s]Verify Signature(%s) error!... \n",  __FILE__ , __LINE__ , __func__, fw_desc_table_v1->signature);
        return -1;
    }

    //dump fw_table
    optee_debug("dump fw_table info... [%s][%d][%s]\n", __FILE__ , __LINE__ , __func__);
    optee_debug("fw_desc_table_v1->signature = %s \n", fw_desc_table_v1->signature);
    optee_debug("fw_desc_table_v1->version = 0x%x \n", fw_desc_table_v1->version);
    optee_debug("fw_desc_table_v1->part_list_len = 0x%x \n", fw_desc_table_v1->part_list_len);
    optee_debug("fw_desc_table_v1->fw_list_len = 0x%x \n", fw_desc_table_v1->fw_list_len);

    return 0;
}

#if 0
static void hexdump (const void *buf, unsigned int length)
{
    unsigned int i;
    unsigned char *ptr = (unsigned char *)buf;

    if ((buf == NULL) || (length == 0))
    {
        printk("NULL\n");
        return;
    }

    printk("===> %s(0x%x, 0x%x):\n", __FUNCTION__, (unsigned int)buf, length);
    for (i = 0; i < length; i++)
    {
        printk("%02X ", ptr[i]);

        if ((i & 0xf) == 0xf)
        {
            printk("\n");
        }
    }
    printk("\n");
}
#endif

static int rtk_get_optee_fw_entry(unsigned long fw_table_buf, fw_desc_entry_v1_t ** optee_fw_desc_entry)
{
    fw_desc_table_v1_t *fw_desc_table_v1 = (fw_desc_table_v1_t *)fw_table_buf;
    fw_desc_entry_v1_t * fw_desc_entry = NULL;
    unsigned long fw_desc_entry_num = 0;
    unsigned long i = 0;
    fw_desc_entry_v1_t *this_entry;
    unsigned long fw_desc_entry_size = 0;

    fw_desc_entry = (fw_desc_entry_v1_t *)(fw_table_buf +sizeof(fw_desc_table_v1_t) +  fw_desc_table_v1->part_list_len);

    switch (fw_desc_table_v1->version)
    {
        case FW_DESC_TABLE_V1_T_VERSION_1:
            optee_debug("FW_DESC_TABLE_V1_T_VERSION_1\n");

            fw_desc_entry_num = fw_desc_table_v1->fw_list_len / sizeof(fw_desc_entry_v1_t);
            fw_desc_entry_size = sizeof(fw_desc_entry_v1_t);
            break;

        case FW_DESC_TABLE_V1_T_VERSION_11:
            optee_debug("FW_DESC_TABLE_V1_T_VERSION_11\n");
            fw_desc_entry_num = fw_desc_table_v1->fw_list_len / sizeof(fw_desc_entry_v11_t);
            fw_desc_entry_size = sizeof(fw_desc_entry_v11_t);
            break;
        case FW_DESC_TABLE_V1_T_VERSION_21:
            optee_debug("FW_DESC_TABLE_V1_T_VERSION_21\n");
            fw_desc_entry_num = fw_desc_table_v1->fw_list_len / sizeof(fw_desc_entry_v21_t);
            fw_desc_entry_size = sizeof(fw_desc_entry_v21_t);
            break;

        default:
            optee_err("[%s][%d][%s]: fw_desc_table_v1.version is unkown: %x\n", __FILE__, __LINE__, __FUNCTION__, fw_desc_table_v1->version);
            goto error;
    }

    *optee_fw_desc_entry = NULL;
    for(i = 0; i<fw_desc_entry_num; i++)
    {
        this_entry = (fw_desc_entry_v1_t *)((void *)fw_desc_entry+ fw_desc_entry_size * i);
        optee_debug("i:%ld :fw_desc_entry_size: %lx this_entry->type: %x\n", i, fw_desc_entry_size, this_entry->type);
        // hexdump((void *)this_entry, 0x20);
        if(this_entry->type == FW_TYPE_KCPU)
        {

            *optee_fw_desc_entry = this_entry;
            break;
        }
    }

    if(*optee_fw_desc_entry == NULL)
    {
        optee_err("[%s][%d][%s]: can not find optee fw desc entry\n", __FILE__, __LINE__, __FUNCTION__);
        goto error;
    }

    return 0;

error:
    return -1;
}

static unsigned int rtk_get_checksum(unsigned char *p, unsigned int len)
{
    unsigned int checksum = 0;
    unsigned int i;

    for(i = 0; i < len; i++)
    {
        checksum += *(p + i);
    }
    return checksum;

}

static int rtk_load_fw_from_emmc(void *ddr_addr, fw_desc_entry_v1_t *fw_desc_entry)
{
    int ret = 0;
    unsigned int fw_checksum = 0;

    if((fw_desc_entry == NULL) || (ddr_addr == NULL))
    {
        optee_err("[%s][%d][%s]: the param is error... \n", __FILE__ , __LINE__ , __FUNCTION__);
        optee_debug("[%s][%d][%s]:  fw_desc_entry: %lx\n", __FILE__ , __LINE__ , __FUNCTION__, (unsigned long)fw_desc_entry);
        return -1;
    }

    optee_debug("[%s][%d][%s]: fw_desc_entry->offset / EMMC_BLOCK_SIZE: %x, : fw_desc_entry->length,:%x, ddr_addr: %lx\n", __FILE__ , __LINE__ , __FUNCTION__,
                fw_desc_entry->offset / EMMC_BLOCK_SIZE,  fw_desc_entry->length, (unsigned long)ddr_addr);
    ret = read_emmc_data(fw_desc_entry->offset / EMMC_BLOCK_SIZE, fw_desc_entry->length, (void *)ddr_addr);
    if (ret < 0)
    {
        optee_err("[%s][%d][%s]: read fw image error... \n", __FILE__ , __LINE__ , __FUNCTION__);
        return -1;
    }

    fw_checksum = rtk_get_checksum((unsigned char *)ddr_addr, fw_desc_entry->length);
    if (fw_desc_entry->checksum != fw_checksum)
    {
        optee_err("[%s][%d][%s]: FW Image checksum failed...\n", __FILE__ , __LINE__ , __FUNCTION__);
        optee_err("\t FW Image entry  checksum=0x%08x\n", fw_desc_entry->checksum);
        optee_err("\t FW Image result checksum=0x%08x\n", fw_checksum);
        return -1;
    }

    return 0;
}

#define OPTEE_OS_OFFSET 0x8000
int rtk_optee_reload (void)
{
    int ret = 0;
    unsigned long fw_table_ddr_addr = 0;
    void* k_os_phy_addr =  NULL;
    void* k_os_virt_addr =  NULL;
    unsigned long k_os_size = 0;
    void* optee_phy_addr =  NULL;
    void* optee_virt_addr =  NULL;
    void* tmp_image_buffer = NULL;
    fw_desc_entry_v1_t *optee_fw_entry = NULL;

    k_os_size = carvedout_buf_query(CARVEDOUT_K_OS, &k_os_phy_addr);

    k_os_virt_addr = dvr_remap_uncached_memory((unsigned long)k_os_phy_addr, k_os_size, __builtin_return_address(0));

    if(!k_os_virt_addr)
    {
        goto error;
    }

    // optee_info("[%s][%d][%s]: remap Success,address = 0x%lx, phy = 0x%x\n", __FILE__, __LINE__, __FUNCTION__, k_os_virt_addr, k_os_phy_addr);

    optee_virt_addr = k_os_virt_addr + OPTEE_OS_OFFSET;
    optee_phy_addr = k_os_phy_addr + OPTEE_OS_OFFSET;

    optee_info("start %s\n", __FUNCTION__);

    fw_table_ddr_addr = (unsigned long) __get_free_page(GFP_KERNEL);
    if (!fw_table_ddr_addr)
    {
        optee_err("[%s][%d][%s]: can not allocate enough memory... \n", __FILE__ , __LINE__ , __FUNCTION__);
        goto error;
    }

    // get fw table offset and load fw tabel
    ret = rtk_load_fw_table_from_emmc(fw_table_ddr_addr);
    if(ret < 0)
    {
        optee_err("[%s][%d][%s]: get fw_table failed... \n", __FILE__ , __LINE__ , __FUNCTION__);
        goto error;
    }

    // parse the optee fw entry
    ret = rtk_get_optee_fw_entry(fw_table_ddr_addr , &optee_fw_entry);
    if(ret < 0)
    {
        optee_err("[%s][%d][%s]: get optee fw_entry failed... \n", __FILE__ , __LINE__ , __FUNCTION__);
        goto error;
    }

     //get optee.bin from emmc
     tmp_image_buffer = dvr_malloc_specific(optee_fw_entry->length, GFP_DCU1);
     if (!tmp_image_buffer) {
            optee_err("[%s][%d][%s]: can not allocate enough memory to store the encrypted optee.bin ...\n", __FILE__, __LINE__, __FUNCTION__);
            goto error;
     } else {
            optee_info("[%s][%d][%s]: do malloc Success,address = 0x%lx(0x%lx), size = 0x%x\n", __FILE__, __LINE__, __FUNCTION__, (unsigned long)tmp_image_buffer, dvr_to_phys(tmp_image_buffer), optee_fw_entry->length);
     }
	 
    // load optee fw
    ret = rtk_load_fw_from_emmc(tmp_image_buffer, optee_fw_entry);
    if(ret < 0)
    {
        optee_err("[%s][%d][%s]: load optee image failed... \n", __FILE__ , __LINE__ , __FUNCTION__);
        goto error;
    }

#ifdef CONFIG_REALTEK_SECURE
    // dcmt_clear_kcpu_text();
    arm_wrapper_clear_kcpu_text();
#endif

    // hexdump(tmp_image_buffer, 0x20);
    memcpy(optee_virt_addr, tmp_image_buffer, optee_fw_entry->length);	
    rtd_outl(STB_WDOG_DATA6_reg, optee_fw_entry->length);
    dmac_flush_range(optee_virt_addr, optee_virt_addr+optee_fw_entry->length);
    outer_flush_range((phys_addr_t)(uintptr_t)optee_phy_addr, (phys_addr_t)(uintptr_t)optee_phy_addr+optee_fw_entry->length);

    // hexdump(optee_virt_addr, 0x20);
#ifdef CONFIG_REALTEK_SECURE
   // dcmt_restore_kcpu_text();
    arm_wrapper_restore_kcpu_text();
#endif

    if(k_os_virt_addr)
	 dvr_unmap_memory(k_os_virt_addr, k_os_size);
	
    if(fw_table_ddr_addr)
        free_page(fw_table_ddr_addr);

    if(tmp_image_buffer)
        dvr_free(tmp_image_buffer);
    return 0;

error:
    if(k_os_virt_addr)
        dvr_unmap_memory(k_os_virt_addr, k_os_size);
	
    if(fw_table_ddr_addr)
        free_page(fw_table_ddr_addr);
	
    if(tmp_image_buffer)
        dvr_free(tmp_image_buffer);
    panic("optee reload fail\n");
    
    return -1;
}
