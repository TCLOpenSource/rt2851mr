/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright 2012 by Chuck Chen <ycchen@realtek.com>
 *
 * Code common to all OMAP2+ machines.
 */
#include <asm/sections.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/io.h>
#include <linux/memblock.h>
#include <linux/reboot.h>
#ifdef CONFIG_CMA_RTK_ALLOCATOR
#include <linux/rtkblueprint.h>
#endif
#ifdef CONFIG_REALTEK_OF
#include <linux/irqchip.h>
#endif
#include <linux/irqchip/arm-gic.h>
#include <include/mach/pcbMgr.h>

#include <asm/hardware/cache-l2x0.h>
#include <mach/common.h>
#include <mach/rtk_platform.h>
#include <mach/system.h>
#include <mach/io.h>
#ifdef CONFIG_RTK_KDRV_RECOVERY_KERNEL
#include <linux/fs.h>
#endif
#ifdef CONFIG_LG_SNAPSHOT_BOOT
#include "power.h"
#endif
#include <asm/cacheflush.h>
#include <linux/delay.h>
#include <rbus/stb_reg.h>


#define VBM_start_address_alignment  (16*1024)

volatile unsigned int l2x0_ctrl;
volatile unsigned int l2x0_aux_ctrl;
volatile unsigned int l2x0_prefetch_ctrl;
volatile unsigned int l2x0_tag_latency;
volatile unsigned int l2x0_data_latency;
int resPartIdx = 0;

#ifdef CONFIG_RTK_KDRV_SB2
extern void rtk_sb2_setup(void);
#endif

#ifdef CONFIG_LG_SNAPSHOT_BOOT
extern unsigned int snapshot_enable;
extern bool reserve_boot_memory;
#endif

extern int is_ddr_swap(void);

#ifndef CONFIG_ARM64
void __init rtk_map_io(void)
{
	rtk_map_common_io();
}
#ifdef CONFIG_REALTEK_LOGBUF
__attribute__((weak)) unsigned long rtdlog_get_buffer_size(void)
{
        return 0;
}
#endif
void __init rtk_reserve(void)
{
	unsigned int ret = 0;
	unsigned long size, addr;
	unsigned int layout_idx = MM_LAYOUT_DEFAULT;
	if (DRAM_size == 0x40000) {
		layout_idx = MM_LAYOUT_1GB;
	}


	/* M6PRTANOM-100, Reserved to avoid STR resume secondary_core text section be allocated.*/
	memblock_reserve(__pa(&_text), PAGE_SIZE);

	printk("[MEM]rtk_reserve, DRAM_size = 0x%x, layout_idx = 0x%x\n", (unsigned int)DRAM_size, layout_idx);

	/* for bootcode data */
	memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_BOOTCODE][0], carvedout_buf[layout_idx][CARVEDOUT_BOOTCODE][1]);
#if defined(CONFIG_REALTEK_RPC) ||defined(CONFIG_RTK_KDRV_RPC)
	/* for RPC temporarily */
	memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_MAP_RPC][0], carvedout_buf[layout_idx][CARVEDOUT_MAP_RPC][1]);
#endif
	/* for demod fw */
	ret |= add_ban_info(carvedout_buf[layout_idx][CARVEDOUT_DEMOD][0], carvedout_buf[layout_idx][CARVEDOUT_DEMOD][1], BAN_NOT_USED);

	/* for rbus & nor flash*/
	memblock_remove(carvedout_buf[layout_idx][CARVEDOUT_MAP_RBUS][0], carvedout_buf[layout_idx][CARVEDOUT_MAP_RBUS][1]);

#ifdef CONFIG_REALTEK_SECURE_DDK
	/* for GPU FW */
	memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_GPU_FW][0], carvedout_buf[layout_idx][CARVEDOUT_GPU_FW][1]);
#endif//

	/*for A1/A2/V1/V2 fw*/
	memblock_remove(carvedout_buf[layout_idx][CARVEDOUT_AV_OS][0], carvedout_buf[layout_idx][CARVEDOUT_AV_OS][1]);

#ifdef CONFIG_REALTEK_LOGBUF
	carvedout_buf[layout_idx][CARVEDOUT_LOGBUF][1] = rtdlog_get_buffer_size();
	memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_LOGBUF][0], carvedout_buf[layout_idx][CARVEDOUT_LOGBUF][1]);
#endif

	/* for rom code */
	memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_ROMCODE][0], carvedout_buf[layout_idx][CARVEDOUT_ROMCODE][1]);

#ifdef CONFIG_PSTORE
	/* for ramoops */
	memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_RAMOOPS][0], carvedout_buf[layout_idx][CARVEDOUT_RAMOOPS][1]);
#endif

	/* for ib boundary */
	if (carvedout_buf[layout_idx][CARVEDOUT_IR_TABLE][1])
		memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_IR_TABLE][0], carvedout_buf[layout_idx][CARVEDOUT_IR_TABLE][1]);

	/* for ddr boundary */
	size = carvedout_buf_query(CARVEDOUT_DDR_BOUNDARY, (void *)&addr);
	if (size > 0) {
		if (is_ddr_swap()) {
			// Reserve a page at the end of lowmem
			memblock_remove(addr, size);
			// Reserve 16KB for 3DDR start address as 192 bytes alignment and VBM address 16KB alignment
			memblock_reserve(addr+size, VBM_start_address_alignment);
		} else {
			// Reserve 4MB in CMA
			ret |= add_ban_info(addr, size, BAN_NOT_USED);
		}
	}

	/* for ddr boundary 2 */
	if ((DRAM_size == 0x80000) && (carvedout_buf[layout_idx][CARVEDOUT_DDR_BOUNDARY_2][1]))
		ret |= add_ban_info(carvedout_buf[layout_idx][CARVEDOUT_DDR_BOUNDARY_2][0], carvedout_buf[layout_idx][CARVEDOUT_DDR_BOUNDARY_2][1], BAN_NOT_USED);

	/* for audio & video DMEM */
	if (carvedout_buf[layout_idx][CARVEDOUT_AV_DMEM][1])
		ret |= add_ban_info(carvedout_buf[layout_idx][CARVEDOUT_AV_DMEM][0], carvedout_buf[layout_idx][CARVEDOUT_AV_DMEM][1], BAN_NORMAL);

	memblock_remove(carvedout_buf[layout_idx][CARVEDOUT_VDEC_RINGBUF][0], carvedout_buf[layout_idx][CARVEDOUT_VDEC_RINGBUF][1]);   // need content protection
	memblock_remove(carvedout_buf[layout_idx][CARVEDOUT_DTV_VDEC_RINGBUF][0], carvedout_buf[layout_idx][CARVEDOUT_DTV_VDEC_RINGBUF][1]);   // need content protection


#ifdef CONFIG_REALTEK_SECURE
	/* for secure boot */
	memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_K_BOOT][0], carvedout_buf[layout_idx][CARVEDOUT_K_BOOT][1]);
	/* for secure OS */
#ifdef CONFIG_OPTEE
	memblock_remove(carvedout_buf[layout_idx][CARVEDOUT_K_OS][0], carvedout_buf[layout_idx][CARVEDOUT_K_OS][1]);
#else
	ret |= add_ban_info(carvedout_buf[layout_idx][CARVEDOUT_K_OS][0], carvedout_buf[layout_idx][CARVEDOUT_K_OS][1], BAN_NOT_USED);
#endif
#endif

#if 0
    ret |= add_ban_info(carvedout_buf[layout_idx][CARVEDOUT_KASAN][0], carvedout_buf[layout_idx][CARVEDOUT_KASAN][1], BAN_NOT_USED);
#endif


#ifdef CONFIG_CUSTOMER_TV006
{
	ret |= add_ban_info(carvedout_buf[layout_idx][CARVEDOUT_GAL][0], carvedout_buf[layout_idx][CARVEDOUT_GAL][1], BAN_NOT_USED);
}
#endif

#ifdef CONFIG_LG_SNAPSHOT_BOOT
	if (snapshot_enable) {
		if (!add_ban_info(carvedout_buf[layout_idx][CARVEDOUT_SNAPSHOT][0], carvedout_buf[layout_idx][CARVEDOUT_SNAPSHOT][1], BAN_NOT_USED))
			reserve_boot_memory = 1;
	}
#endif

#ifdef BOOT_MEMORY_END
	BUG_ON(SCLAER_MODULE_START != BOOT_MEMORY_END);
#endif

	/* for scaler (memc/mdomain/vip/OD) */
	if (carvedout_buf[layout_idx][CARVEDOUT_SCALER][1])
		memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_SCALER][0], carvedout_buf[layout_idx][CARVEDOUT_SCALER][1]);

    /* for vdec framebuffer */
    if (carvedout_buf[layout_idx][CARVEDOUT_VDEC_VBM][1])
	    memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_VDEC_VBM][0], carvedout_buf[layout_idx][CARVEDOUT_VDEC_VBM][1]);

#ifdef CONFIG_RTK_KDRV_DEMUX
	/* for demux */
	if (carvedout_buf[layout_idx][CARVEDOUT_TP][1])
		memblock_reserve(carvedout_buf[layout_idx][CARVEDOUT_TP][0], carvedout_buf[layout_idx][CARVEDOUT_TP][1]);
#endif

	if (ret)
		panic("add_ban_info fail\n");

#if 1 //debug
    {
        unsigned long size, addr;
        size = carvedout_buf_query(CARVEDOUT_SCALER_MEMC, (void *)&addr);
        pr_info("carvedout memc start(%lx)..(%lx), size(%ld_MB))\n", addr, addr + size, (size/1024/1024));
        size = carvedout_buf_query(CARVEDOUT_SCALER_MDOMAIN, (void *)&addr);
        pr_info("carvedout mdomain start(%lx)..(%lx), size(%ld_MB))\n", addr, addr + size, (size/1024/1024));
        size = carvedout_buf_query(CARVEDOUT_SCALER_DI_NR, (void *)&addr);
        pr_info("carvedout di_nr start(%lx)..(%lx), size(%ld_MB))\n", addr, addr + size, (size/1024/1024));
        size = carvedout_buf_query(CARVEDOUT_SCALER_NN, (void *)&addr);
        pr_info("carvedout nn start(%lx)..(%lx), size(%ld_MB))\n", addr, addr + size, (size/1024/1024));
        size = carvedout_buf_query(CARVEDOUT_SCALER_VIP, (void *)&addr);
        pr_info("carvedout vip start(%lx)..(%lx), size(%ld_KB))\n", addr, addr + size, (size/1024));
        size = carvedout_buf_query(CARVEDOUT_SCALER_OD, (void *)&addr);
        pr_info("carvedout od start(%lx)..(%lx), size(%ld_KB))\n", addr, addr + size, (size/1024));
        size = carvedout_buf_query(CARVEDOUT_VDEC_VBM, (void *)&addr);
        pr_info("carvedout vbm start(%lx)..(%lx), size(%ld_KB))\n", addr, addr + size, (size/1024));
        size = carvedout_buf_query(CARVEDOUT_TP, (void *)&addr);
        pr_info("carvedout tp start(%lx)..(%lx), size(%ld_MB))\n", addr, addr + size, (size/1024/1024));
    }
#endif
}
#endif

void __init gic_init_irq(void)
{
#ifndef CONFIG_REALTEK_OF
    void __iomem *cpu_irq_base;
    void __iomem *gic_dist_base_addr;

    /* Static mapping, never released */
    gic_dist_base_addr = (void __iomem *)SYSTEM_GIC_DIST_BASE;
    BUG_ON(!gic_dist_base_addr);

    /* Static mapping, never released */
    cpu_irq_base = (void __iomem *)SYSTEM_GIC_CPU_BASE;
    BUG_ON(!cpu_irq_base);
    gic_init(0, 16, gic_dist_base_addr, cpu_irq_base);
#else
    irqchip_init();
#endif
}

/* Resets clock rates and reboots the system. Only calle */
extern void msleep(unsigned int msecs);
extern int kill_watchdog (void);

#define WDOG_STATUS_MAGIC_NUM       0x12348765

void rtk_machine_restart(enum reboot_mode mode, const char *cmd)
{
	volatile unsigned int iRegVal;
#ifdef CONFIG_RTK_KDRV_WATCHDOG
	kill_watchdog ();
#endif
	printk(KERN_EMERG"reboot argu=%s\n", cmd);

	rtd_outl(0xb8060110, 0);

	//printk(KERN_EMERG"wait...(0/2)\n");
	//mdelay(1000);
	//printk(KERN_EMERG"wait...(1/2)\n");
	//mdelay(1000);
	printk(KERN_EMERG"wait finish, reboot...(2/2)\n");

#ifdef CONFIG_CUSTOMER_TV043
        rtd_outl(STB_WDOG_DATA9_reg,WDOG_STATUS_MAGIC_NUM);
#endif

	// disable all interrupt, ?
	// retart system
	// enable the dog
	rtd_clearbits(WDOG_TCWCR_reg, 0xff);

	iRegVal = rtd_inl(WDOG_TCWCR_reg);
	iRegVal |= (1<<WDOG_TCWCR_im_wdog_rst_shift); // bit 31 in rtd294x
	rtd_outl(WDOG_TCWCR_reg, iRegVal);

	// KWarning: checked ok by eaton.chiou@realtek.com
	while(1) {
		printk("while 1\n");
		;
	}
}

void rtk_post_processing(void)
{
#ifdef CONFIG_RTK_KDRV_RECOVERY_KERNEL
    int retval;
    char dev_name[32];
//    char test_name[128];
    sprintf(dev_name, "/dev/mmcblk0p%d", resPartIdx);
    printk("Enter rtk_post_processing(respart:%d)\n", resPartIdx);

    if (resPartIdx > 0) {
        retval = do_mount(dev_name, "/res", "ext4",
                               32768, NULL);
        if (retval == 0) {
            printk("mount res partition(%d) done!\n", resPartIdx);
        } else {
            printk("mount res partition(%d) fail!(%d)\n", resPartIdx, retval);
            sprintf(dev_name, "/dev/block/mmcblk0p%d", resPartIdx);
            retval = do_mount(dev_name, "/res", "ext4", 32768, NULL);
            if (retval == 0) {
                printk("mount res block_part(%d) done!\n", resPartIdx);
            } else {
                printk("mount res block_part(%d) fail!(%d)\n", resPartIdx, retval);
            }
        }
    }

#endif
}

void rtk_flush_range(const void *virt_start, const void *virt_end){
	dmac_flush_range(virt_start, virt_end);
//   outer_flush_range(phys_addr, phys_addr+size);
}

void rtk_inv_range(const void *virt_start, const void *virt_end){
	dmac_inv_range(virt_start, virt_end);
//	outer_inv_range(phys_addr, phys_addr+size);
}

EXPORT_SYMBOL(rtk_flush_range);
EXPORT_SYMBOL(rtk_inv_range);

#ifdef CONFIG_CACHE_L2X0

void rtk_l2_cache_init(void)
{
	u32 aux_ctrl = 0;
	u32 tag_latency;
	u32 data_latency;

	void __iomem *l2cache_base;

	l2x0_ctrl = 0;
	l2x0_aux_ctrl = 0;
	l2x0_prefetch_ctrl = 0;
	l2x0_tag_latency = 0;
	l2x0_data_latency = 0;
	/* Static mapping, never released */
	l2cache_base = (void __iomem *)SYSTEM_PL310_BASE;

#if 0 // 0x7e470000
	aux_ctrl = /*0x7e470000*/
		(0x1 << L2X0_AUX_CTRL_ASSOCIATIVITY_SHIFT) |
		(0x2 << L2X0_AUX_CTRL_WAY_SIZE_SHIFT) |
		(0x1 << L2X0_AUX_CTRL_CACHE_REPLACE_ALGO) |
		(0x1 << L2X0_AUX_CTRL_NS_LOCKDOWN_SHIFT) |
		(0x1 << L2X0_AUX_CTRL_NS_INT_CTRL_SHIFT) |
		(0x3 << L2X0_AUX_CTRL_WAY_SIZE_SHIFT) |
		(0x1 << L2X0_AUX_CTRL_SHARE_OVERRIDE_SHIFT) |
		(0x1 << L2X0_AUX_CTRL_DATA_PREFETCH_SHIFT) |
		(0x1 << L2X0_AUX_CTRL_INSTR_PREFETCH_SHIFT) |
		(0x1 << L2X0_AUX_CTRL_EARLY_BRESP_SHIFT);
#else
	aux_ctrl = 0x02050000; // conservatism
#endif

	// please fix me for better performance in latency setting
	tag_latency = readl_relaxed(l2cache_base + L2X0_TAG_LATENCY_CTRL);
	data_latency = readl_relaxed(l2cache_base + L2X0_DATA_LATENCY_CTRL);
	//printk("*** l2x0 tag laten. = 0x%08x\n", tag_latency);
	//printk("*** l2x0 data laten.= 0x%08x\n", data_latency);
	//writel_relaxed(0x010, l2cache_base + L2X0_TAG_LATENCY_CTRL);
	writel_relaxed(0x121, l2cache_base + L2X0_DATA_LATENCY_CTRL);
	tag_latency = readl_relaxed(l2cache_base + L2X0_TAG_LATENCY_CTRL);
	data_latency = readl_relaxed(l2cache_base + L2X0_DATA_LATENCY_CTRL);
	//printk("*** l2x0 tag laten. = 0x%08x\n", tag_latency);
	//printk("*** l2x0 data laten.= 0x%08x\n", data_latency);

	l2x0_init(l2cache_base, aux_ctrl, L2X0_AUX_CTRL_MASK);

	// dirty patch - save L2X status for resume from disk
	l2x0_ctrl = readl_relaxed(l2cache_base + L2X0_CTRL);
	l2x0_aux_ctrl = readl_relaxed(l2cache_base + L2X0_AUX_CTRL);
	l2x0_prefetch_ctrl = readl_relaxed(l2cache_base + L2X0_PREFETCH_CTRL);
	l2x0_tag_latency = readl_relaxed(l2cache_base + L2X0_TAG_LATENCY_CTRL);
	l2x0_data_latency = readl_relaxed(l2cache_base + L2X0_DATA_LATENCY_CTRL);

	printk("*** l2x0_ctrl          = 0x%08x\n", l2x0_ctrl);
	printk("*** l2x0_aux_ctrl      = 0x%08x\n", l2x0_aux_ctrl);
	printk("*** l2x0_tag_latency   = 0x%08x\n", l2x0_tag_latency);
	printk("*** l2x0_data_latency  = 0x%08x\n", l2x0_data_latency);
	printk("*** l2x0_prefetch_ctrl = 0x%08x\n", l2x0_prefetch_ctrl);

	return;
}
#endif

#define K2L             (0x01000000)

#define LG_PCB_TYPE1    (0x00001000)
#define LG_PCB_TYPE2    (0x00002000)
#define LG_PCB_TYPE3    (0x00003000)

#define LG_PCB_VER1     (0x00000001)
#define LG_PCB_VER2     (0x00000002)
#define LG_PCB_VER3     (0x00000003)

#define LG_K2L_MASK     (K2L | LG_PCB_TYPE1)
#define LG_K2LP_MASK    (K2L | LG_PCB_TYPE2)

#define IS_MERLIN(A)  (A&K2L)
#define IS_K2L(A)   (A&LG_PCB_TYPE1)
#define IS_K2LP(A)   (A&LG_PCB_TYPE2)

int is_RTD_K2L(void)
{
#if defined(CONFIG_REALTEK_PCBMGR)
       unsigned long long pcb_info_val;

       if(pcb_mgr_get_enum_info_byname("LG_PCB_INFO",&pcb_info_val)==0)
       {
               if(IS_MERLIN(pcb_info_val)) {
                       if(IS_K2L(pcb_info_val)) {
                               //printk("K2L platform\n");
                               return 1;
                       }
                       if(IS_K2LP(pcb_info_val)) {
                               //printk("K2LP platform\n");
                               return 0;
                       }
               }
       }
#endif
       return -1;
}
EXPORT_SYMBOL(is_RTD_K2L);

