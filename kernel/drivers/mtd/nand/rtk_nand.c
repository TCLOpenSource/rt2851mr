#include <linux/mtd/mtd.h>
#include <linux/mtd/partitions.h>
#include <linux/slab.h>
#include <linux/sysctl.h>
#include <linux/sched.h>
#include <linux/list.h>
#include <linux/pm.h>
#include <linux/module.h>
#include <mach/io.h>
#include <linux/bitops.h>
#include <mtd/mtd-abi.h>
#include <linux/jiffies.h>
#include <linux/delay.h>
#include <linux/time.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/string.h>
#include <linux/platform_device.h>
#include <linux/interrupt.h>
#include <linux/dma-mapping.h>
#include "../mtdcore.h"
#include <mach/platform.h>
#include <linux/device.h>
#include "rtk_nand.h"
#include "nand_reg.h"
#include "../../base/base.h"
#include "../../rtk_kdriver/include/rtk_kdriver/rtk_crt.h"

NF_DEBUG_SET_LEVEL(NF_DEBUG_LEVEL_INFO);

#define BANNER  "Realtek NAND Flash Driver"
#define VERSION  "$Id: rtk_nand.c RTK_287O 2018-06-11 14:00 $"

#define MTDSIZE	(sizeof (struct mtd_info) + sizeof (struct nand_chip))
#define MAX_PARTITIONS		16
#define BOOTCODE		16*1024*1024	//16MB
#define FACT_PARAM_SIZE 	4*1024*1024 //4MB for TV factory parameter use.
#define DRIVER_NAME 		"rtkNF"

//#define MTD_NAND_RTK_NAND_TEST
#ifdef MTD_NAND_RTK_NAND_TEST
int test_erase_fail_remap = 0;
int test_write_fail_remap = 0;
int test_read_warning_remap = 0;
int test_read_fail_remap  = 0;
#endif

/*proc fs entry*/
static struct proc_dir_entry *rtk_nand_proc_entry;
extern int pcb_mgr_get_enum_info_byname(char *enum_name, unsigned long long *value);
extern int nf_init_table(struct mtd_info *mtd);

unsigned int g_BootcodeSize = 0;
unsigned int g_Factory_param_size = 0;
unsigned int g_Factory_RO_Start = 0;
unsigned int g_Factory_RO_Size = 0;
unsigned char g_edo_mode_enable = 0;

const char *ptypes[] = {"cmdlinepart", NULL};

/* Global Variables */
struct mtd_info *rtk_mtd;

static void NF_CKSEL(char *PartNum, unsigned int value)
{
	struct NF_CLK_INFO nf_clk;
	//set clk info
	nf_clk.nf_clksel = value;
	nf_clk.clk_is_on = 0;
	nf_clk.clk_set_or_get = NF_CLK_SET;	//set clksel

	//change NF freq divider (need to disabled NF clock when change divider) 
	CRT_CLK_OnOff(NAND, CLK_ON, &nf_clk);
	NAND_INFO("%s is set to nf clock: 0x%x\n",PartNum, value);
}


//-----------------------------random mode setting------------------------------
static unsigned char nf_is_random_mode(void)
{
	return REG_READ_U32(REG_RND_EN) & 0x1;
}

static void nf_set_random_read(unsigned int pagesize,unsigned int spare_col)
{
	REG_WRITE_U32(REG_RND_CMD1, RND_CMD1_rnd_cmd1(0x5));
	REG_WRITE_U32(REG_RND_CMD2, RND_CMD2_rnd_cmd2(0xe0));
	REG_WRITE_U32(REG_RND_DATA_STR_COL_H, RND_DATA_STR_COL_H_data_col_msb(0));	// data start address MSB (always 0)
	REG_WRITE_U32(REG_RND_SPR_STR_COL_H, RND_SPR_STR_COL_H_spr_col_msb((spare_col+ pagesize) >> 8));	// spare start address MSB
	REG_WRITE_U32(REG_RND_SPR_STR_COL_L, REG_RND_SPR_STR_COL_L_spr_col_lsb((spare_col+ pagesize) & 0xff));	// spare start address LSB
}

static void nf_set_random_write(unsigned int pagesize,unsigned int spare_col)
{
	REG_WRITE_U32(REG_RND_CMD1, RND_CMD1_rnd_cmd1(0x85));
	REG_WRITE_U32(REG_RND_DATA_STR_COL_H, RND_DATA_STR_COL_H_data_col_msb(0));	// data start address MSB (always 0)
	REG_WRITE_U32(REG_RND_SPR_STR_COL_H, RND_SPR_STR_COL_H_spr_col_msb((spare_col+ pagesize) >> 8));	// spare start address MSB
	REG_WRITE_U32(REG_RND_SPR_STR_COL_L, REG_RND_SPR_STR_COL_L_spr_col_lsb((spare_col+ pagesize) & 0xff));	// spare start address LSB
}

 //----------------------------------------------------------------------------

//----------------------------------------------------------------------------

/*
	parse_token can parse a string and extract the value of designated token.
		parsed_string: The string to be parsed.
		token: the name of the token
		return value: If return value is NULL, it means that the token is not found.
			If return value is "non zero", it means that the token is found, and return value will be a string that contains the value of that token.
			If the token doesn't have a value, return value will be a string that contains empty string ("\0").
			If return value is "non zero", "BE SURE" TO free it after you donot need it.

		Exp:
			char *value=parse_token("A1 A2=222 A3=\"333 333\"", "A0");
				=> value=NULL
			char *value=parse_token("A1 A2=222 A3=\"333 333\"", "A1");
				=> value points to a string of "\0"
			char *value=parse_token("A1 A2=222 A3=\"333 333\"", "A2");
				=> value points to a string of "222"
			char *value=parse_token("A1 A2=222 A3=\"333 333\"", "A3");
				=> value points to a string of "333 333"
*/
 char *rtkNF_parse_token(const char *parsed_string, const char *token)
{
	const char *ptr = parsed_string;
	const char *start, *end, *value_start, *value_end;
	char *ret_str;

	while(1) {
		value_start = value_end = 0;
		for(;*ptr == ' ' || *ptr == '\t'; ptr++)	;
		if(*ptr == '\0')	break;
		start = ptr;
		for(;*ptr != ' ' && *ptr != '\t' && *ptr != '=' && *ptr != '\0'; ptr++) ;
		end = ptr;
		if(*ptr == '=') {
			ptr++;
			if(*ptr == '"') {
				ptr++;
				value_start = ptr;
				for(; *ptr != '"' && *ptr != '\0'; ptr++)	;
				if(*ptr != '"' || (*(ptr+1) != '\0' && *(ptr+1) != ' ' && *(ptr+1) != '\t')) {
					printk("system_parameters error! Check your parameters.");
					break;
				}
			} else {
				value_start = ptr;
				for(;*ptr != ' ' && *ptr != '\t' && *ptr != '\0' && *ptr != '"'; ptr++) ;
				if(*ptr == '"') {
					printk("system_parameters error! Check your parameters.");
					break;
				}
			}
			value_end = ptr;
		}

		if(!strncmp(token, start, end-start)) {
			if(value_start) {
				ret_str = kmalloc(value_end-value_start+1, GFP_KERNEL);
				if(ret_str)
				{
					strncpy(ret_str, value_start, value_end-value_start);
					ret_str[value_end-value_start] = '\0';
				}
				return ret_str;
			} else {
				if(ret_str)
				{
					ret_str = kmalloc(1, GFP_KERNEL);
					strcpy(ret_str, "");
				}
				return ret_str;
			}
		}
	}

	return (char*)NULL;
}

unsigned int rtkNF_getWPSettingval(void)
{
    unsigned char *param;
    unsigned int retWPval = 0 ;
	
    param=(char *)rtkNF_parse_token(platform_info.system_parameters,"WP_PIN_EN");

    if(param)
		retWPval = simple_strtoul(param, (char**)&retWPval, 16);
	else
		retWPval = 0;
    return retWPval;
}

unsigned char* rtkNF_getBootType(void)
{
    unsigned char *param;

    param=(char *)rtkNF_parse_token(platform_info.system_parameters,"boot_flash");

     return param;
}

unsigned int rtkNF_getBootcodeSize(void)
{
    unsigned char *param;
    unsigned int retBootcodeSize = -1 ;

    param=(char *)rtkNF_parse_token(platform_info.system_parameters,"bootcode_size");

    if(param)
		retBootcodeSize = simple_strtoul(param, (char**)&retBootcodeSize, 16);
    return retBootcodeSize;
}

unsigned int rtkNF_getFactParaSize(void)
{
    unsigned char *param;
    unsigned int retFactParaSize = -1 ;

    param=(char *)rtkNF_parse_token(platform_info.system_parameters,"factory_size");

    if(param)
		retFactParaSize = simple_strtoul(param, (char**)&retFactParaSize, 16);
    return retFactParaSize;
}

unsigned int rtkNF_getFactRoParaStart(void)
{
    unsigned char *param;
    unsigned int retFactRoParaStart = -1 ;

    param=(char *)rtkNF_parse_token(platform_info.system_parameters,"factory_ro_start");

    if(param)
		retFactRoParaStart = simple_strtoul(param, (char**)&retFactRoParaStart, 16);
    return retFactRoParaStart;
}

unsigned int rtkNF_getFactRoParaSize(void)
{
    unsigned char *param;
    unsigned int retFactRoParaSize = -1 ;

    param=(char *)rtkNF_parse_token(platform_info.system_parameters,"factory_ro_size");

    if(param)
		retFactRoParaSize = simple_strtoul(param, (char**)&retFactRoParaSize, 16);
    return retFactRoParaSize;
}

void WAIT_DONE(unsigned int addr, unsigned int mask, unsigned int value)
{
	while ( (REG_READ_U32(addr) & mask) != value )
	{
		asm("nop");
	}
}

static void rtk_nand_edo_setting(void)
{
	unsigned int  t2 = 0,t3 = 0,nd_clk = 0;
	unsigned int sys_clk = 0,div_num = 0,rate = 0;
	struct NF_CLK_INFO nf_clk;

	//set clk info
	nf_clk.nf_clksel = 0;
	nf_clk.clk_is_on = 0;
	nf_clk.clk_set_or_get = NF_CLK_GET;

	t2 = REG_READ_U32(REG_TIME_PARA2) & 0xff;
	t3 = REG_READ_U32(REG_TIME_PARA3) & 0xff;

	sys_clk = 295;	//295MHz
	CRT_CLK_OnOff(NAND, CLK_ON, &nf_clk);
	nd_clk = nf_clk.nf_clksel;
	div_num = nd_clk+3;
	rate =  sys_clk/(div_num*((t2+1) +(t3+1)));

	if(rate >= 33){
		NAND_INFO("Clk = %dMhz, Enable edo mode!\n", rate);
		g_edo_mode_enable = 1;
	}else{
		NAND_INFO("Clk = %dMhz, Disable edo mode!\n", rate);
		g_edo_mode_enable = 0;
	}
		
	return ;
}

static void rtk_nand_resumeReg(void)
{
	struct NF_CLK_INFO nf_clk;

	//set clk info
	nf_clk.nf_clksel = 0x1;
	nf_clk.clk_is_on = 0;
	nf_clk.clk_set_or_get = NF_CLK_SET;
	
	REG_WRITE_U32( 0xb801032c,0x01);	//Enable NAND/CardReader arbitrator

	//change NF freq divider (need to disabled NF clock when change divider) 
	CRT_CLK_OnOff(NAND, CLK_ON, &nf_clk);

	REG_WRITE_U32(REG_SPR_DDR_CTL,NF_SPR_DDR_CTL_cr_nf_hw_pinmux_ena(1) |
		NF_SPR_DDR_CTL_spare_ddr_ena(1) | NF_SPR_DDR_CTL_per_2k_spr_ena(1)|
		NF_SPR_DDR_CTL_spare_dram_sa(0)); //set spare2ddr func. 4=>0.5k spe2ddr_ena at A000F000
	REG_WRITE_U32( REG_PD,~(0x1 << 0) );
	REG_WRITE_U32( REG_ND_CMD,CMD_RESET );
	REG_WRITE_U32( REG_ND_CTL,(0x80 | 0x00));
	WAIT_DONE(REG_ND_CTL,0x80,0);
	WAIT_DONE(REG_ND_CTL,0x40,0x40);

	REG_WRITE_U32( REG_TIME_PARA1,NF_TIME_PARA1_T1(0x1));
	REG_WRITE_U32( REG_TIME_PARA2,NF_TIME_PARA2_T2(0x1));
	REG_WRITE_U32( REG_TIME_PARA3,NF_TIME_PARA3_T3(0x1));

	//reinit edo setting
	rtk_nand_edo_setting();
	
	if(g_edo_mode_enable)
		REG_WRITE_U32(REG_MULTI_CHNL_MODE,NF_MULTI_CHNL_MODE_edo(1));
	else
		REG_WRITE_U32(REG_MULTI_CHNL_MODE,NF_MULTI_CHNL_MODE_edo(0));
	
	REG_WRITE_U32( REG_ECC_STOP,NF_ECC_STOP_ecc_n_stop(0x01));
}

static void rtk_nand_suspend (struct mtd_info *mtd)
{
	WAIT_DONE(REG_AUTO_TRIG,0x80,0);
	WAIT_DONE(REG_DMA_CTL3,0x01,0);
	NAND_INFO("Exit..\n");
}

static int platform_rtk_nand_suspend (struct platform_device *pdev, pm_message_t state)
{
	return 0;
}

static void rtk_nand_resume (struct mtd_info *mtd)
{
	rtk_nand_resumeReg();
}

static int platform_rtk_nand_resume (struct platform_device *pdev)
{
	return 0;
}

static void rtk_read_oob_from_SRAM(struct mtd_info *mtd, __u8 *r_oobbuf)
{
	struct nand_chip *this = (struct nand_chip *) mtd->priv;
	unsigned int reg_num = 0,sram_base_addr = 0;
	unsigned int increment = 0, len = 0, cnt = 0, sram_oob_size=0;
	unsigned int count_temp=0, j =0;
	int i = 0;
	sram_base_addr = REG_NF_BASE_ADDR + 0x400;
	//sanity check
	if((this->ecc_select == 0x18)||(this->ecc_select == 0x28)){
		NAND_ERR("Not support 24/40bit-ecc dump!!!\n");
		return;
	}
	
	// ecc-bit select
	switch (this->ecc_select) {
		case 0x0c:			// 26B/512B (6B for software)
			increment = 0x20;
			len = 26;
			cnt =this->page_size/512;
			break;
		case 0x0:			// 16B/512B (6B for software)
		default:
			increment = 0x10;
			len = 16;
			cnt = this->page_size/512;
			break;
	}
	
	sram_oob_size = 256;
	
	for (i = 0,count_temp =0; (i < sram_oob_size) && (count_temp<cnt); i += increment,count_temp++)
	{
		for(j =0 ; j<len; j++){
			reg_num = sram_base_addr + j +i;
			r_oobbuf[i+j] = REG_READ_U8(reg_num);
		}
	}
}

static void rtk_nand_read_id(struct mtd_info *mtd, u_char id[6])
{
	int id_chain = 0;
	/*Set data transfer count*/
	REG_WRITE_U32(REG_DATA_TL0,NF_DATA_TL0_length0(0x06) );
	REG_WRITE_U32(REG_DATA_TL1,NF_DATA_TL1_access_mode(0x01));

	/*Set PP Not through PP*/
	REG_WRITE_U32(REG_READ_BY_PP,NF_READ_BY_PP_read_by_pp(0x0));
	REG_WRITE_U32(REG_PP_CTL0,NF_PP_CTL0_pp_enable(0x01));
	REG_WRITE_U32(REG_PP_CTL1,NF_PP_CTL1_pp_start_addr(0));

	/*set read id command*/
	REG_WRITE_U32(REG_ND_CMD,NF_ND_CMD_cmd(CMD_READ_ID));
	
	/*set address, Page Address = Page Address [7:0] (Only one address cycle)*/
	REG_WRITE_U32(REG_ND_PA0,NF_ND_PA0_page_addr0(0));
	REG_WRITE_U32(REG_ND_PA2,NF_ND_PA2_addr_mode(0x07));

	/*set auto triger,CMD1 + Address + T_WHR_ADL delay*/
	REG_WRITE_U32(REG_AUTO_TRIG,NF_AUTO_TRIG_auto_trig(1)|
		NF_AUTO_TRIG_spec_auto_case(1)| NF_AUTO_TRIG_auto_case(1));
	WAIT_DONE(REG_AUTO_TRIG,0x80,0);

	/*Transfer address Transfer Start When set,Multiple bytes of Data read*/
	REG_WRITE_U32(REG_ND_CTL,NF_ND_CTL_xfer(1)|NF_ND_CTL_tran_mode(4));
	WAIT_DONE(REG_ND_CTL,0x80,0);

	/*reset the Ping-Pong.*/
	REG_WRITE_U32(REG_PP_CTL0,NF_PP_CTL0_pp_reset(1));

	/*Move data to DRAM from PP*/
	REG_WRITE_U32(REG_SRAM_CTL,NF_SRAM_CTL_map_sel(1)|
		NF_SRAM_CTL_access_en(1)|NF_SRAM_CTL_mem_region(0));
	id_chain = REG_READ_U32(REG_SRAM_BASE);
	
	id[0] = id_chain & 0xff;
	id[1] = (id_chain >> 8) & 0xff;
	id[2] = (id_chain >> 16) & 0xff;
	id[3] = (id_chain >> 24) & 0xff;
	id_chain = REG_READ_U32(REG_SRAM_BASE+4);
	
	id[4] = id_chain & 0xff;
	id[5] = (id_chain >> 8) & 0xff;
	/*disablae sram*/
	REG_WRITE_U32(REG_SRAM_CTL,0x0);	//# no omitted
}
//----------------------------------------------------------------------------
static void reverse_to_Tags(char *r_oobbuf, int eccBits)
{
	int k = 0,j = 0;
	if((eccBits==0)||(eccBits==0xc)){
		for ( k=0; k<4; k++)
			r_oobbuf[5+k] = r_oobbuf[8+k];

		memcpy(&r_oobbuf[9],&r_oobbuf[16],4);
		memcpy(&r_oobbuf[13],&r_oobbuf[24],4);
	}else if((eccBits==0x18)||(eccBits==0x28)){
		for(k=0,j=1;k<28;k+=4,j++)
			memcpy(&r_oobbuf[1+k],&r_oobbuf[8*j],4);
	}
}

static int rtk_erase_block(struct mtd_info *mtd, u16 chipnr, int page)
{
	struct nand_chip *this = (struct nand_chip *) mtd->priv;;
#ifdef MTD_NAND_RTK_NAND_TEST
	if(test_erase_fail_remap != 0){
		NAND_ERR("page %d  block %d enter erase remap test mode!!\n", 
			page,page/this->ppb);
		test_erase_fail_remap = 0;
		return -1;
	}
#endif
	//NAND_ERR("enter page %d block %d !\n",page,page/this->ppb);
	//dump_stack();
	if (page & (this->ppb-1) ){
		NAND_ERR("page %d is not block alignment !!\n", page);
		return -1;
	}

	if(g_edo_mode_enable){
		REG_WRITE_U32(REG_MULTI_CHNL_MODE,NF_MULTI_CHNL_MODE_edo(1));
	}else{
		REG_WRITE_U32(REG_MULTI_CHNL_MODE,NF_MULTI_CHNL_MODE_edo(0));
	}
	
	/*set erase command*/
	REG_WRITE_U32( REG_ND_CMD,NF_ND_CMD_cmd(CMD_BLK_ERASE_C1));
	REG_WRITE_U32( REG_CMD2,NF_CMD2_cmd2(CMD_BLK_ERASE_C2));
	REG_WRITE_U32( REG_CMD3,NF_CMD3_cmd3(CMD_BLK_ERASE_C3));

	/*Set address : Page Address [7:0] + Page Address [15:8] + Page Address [23:16]
	//note. page_addr[5:0] is ignored to be truncated as block*/
	REG_WRITE_U32( REG_ND_PA0,NF_ND_PA0_page_addr0(page));
	REG_WRITE_U32( REG_ND_PA1,NF_ND_PA1_page_addr1(page>>8));
	REG_WRITE_U32( REG_ND_PA2,NF_ND_PA2_addr_mode(0x04)|NF_ND_PA2_page_addr2(page>>16) );
	REG_WRITE_U32( REG_ND_PA3,NF_ND_PA3_page_addr3((page>> 21)&0x7));
	REG_WRITE_U32(REG_ND_CA0,NF_ND_CA0_col_addr0(0));
	REG_WRITE_U32(REG_ND_CA1,NF_ND_CA1_col_addr1(0));

	/*set command/addess enbale Set and enable auto mode and wait until auto mode done  
		Spec_auto case=01 & auto_case=010 CMD1 + Address + CMD2 + T_WHR_ADL delay*/
	REG_WRITE_U32(REG_AUTO_TRIG,NF_AUTO_TRIG_auto_trig(1)|
		NF_AUTO_TRIG_spec_auto_case(1)|NF_AUTO_TRIG_auto_case(2));
	/*wait command done*/
	WAIT_DONE(REG_AUTO_TRIG,0x80,0);

	/*execute command3 register and wait for executed completion*/
	REG_WRITE_U32(REG_POLL_FSTS,NF_POLL_FSTS_bit_sel(6)|NF_POLL_FSTS_trig_poll(1));
	/*wait polling done*/
	WAIT_DONE(REG_POLL_FSTS,0x01,0x0);

	/*This bit reflects the level of the ready/busy signal (pin 19) of NAND flash*/
	WAIT_DONE(REG_ND_CTL,0x40,0x40);//add by alexchang 0416-2010
	if (REG_READ_U32(REG_ND_DAT) & 0x01){
		NAND_ERR("erase is not completed at block %d\n", page/this->ppb);
		return -1;
	}
	return 0;
}


static int rtk_read_ecc_page (struct mtd_info *mtd, u16 chipnr, unsigned int page, 
	unsigned char *data_buf, unsigned char *oob_buf)
{
	struct nand_chip *this = (struct nand_chip *) mtd->priv;
	int rc = 0,dram_sa = 0, dma_len = 0, spare_dram_sa = 0;
	int blank_all_one = 0,page_len = 0;
	unsigned int dma_addr_databuf = 0,dma_addr_oobbuf =0;
	unsigned char auto_trigger_mode = 2,addr_mode = 1;
	this->ecc_err_flag = 0;
#ifdef MTD_NAND_RTK_NAND_TEST
	if(test_read_fail_remap == 1){
		test_read_fail_remap = 0;
		NAND_ERR("enter page %d read fail ecc error case!\n",page);
		return -1;
	}
#endif
	if(!virt_addr_valid(data_buf)){
		memcpy(this->drv_page_buffer,data_buf,this->page_size);
		data_buf = this->drv_page_buffer;
	}
        if(((unsigned int)data_buf&0x7)!=0){
                NAND_ERR("data_buf 0x%x must 8 byte alignmemt!!\n",(unsigned int)data_buf);
                BUG();
        }

	/*set random mode*/
	if (nf_is_random_mode()){
		nf_set_random_read(this->page_size, 0);
	}

	/*set edo mode*/
	if(g_edo_mode_enable){
		REG_WRITE_U32(REG_MULTI_CHNL_MODE,NF_MULTI_CHNL_MODE_edo(1));
	}else{
		REG_WRITE_U32(REG_MULTI_CHNL_MODE,NF_MULTI_CHNL_MODE_edo(0));
	}

	/*Set data transfer count*/
	REG_WRITE_U32(REG_DATA_TL0,NF_DATA_TL0_length0(0));
	if((this->ecc_select == 0x18)||(this->ecc_select==0x28)){
		page_len = this->page_size >> 10;
		REG_WRITE_U32(REG_DATA_TL1,NF_DATA_TL1_access_mode(1)|NF_DATA_TL1_length1(4));
	}else{
		page_len = this->page_size >> 9;
		REG_WRITE_U32(REG_DATA_TL1,NF_DATA_TL1_access_mode(1)|NF_DATA_TL1_length1(2));
	}
	REG_WRITE_U32(REG_PAGE_LEN,NF_PAGE_LEN_page_len(page_len));

	/* set PP NAND --> PP --> DRAM */
	REG_WRITE_U32(REG_READ_BY_PP,NF_READ_BY_PP_read_by_pp(1));//Data read to DRAM from NAND through by Ping-Pong buffer
	REG_WRITE_U32(REG_PP_CTL0,0);
	REG_WRITE_U32(REG_PP_CTL1,NF_PP_CTL1_pp_start_addr(0));

	/*enable blank check*/
	REG_WRITE_U32(REG_BLANK_CHK,NF_BLANK_CHK_blank_ena(1));

	/*set ecc Data read from NAND to SRAM don't stop transfer when ECC error occurs*/
	REG_WRITE_U32( REG_ECC_STOP,NF_ECC_STOP_ecc_n_stop(0x01));
	/*set ecc select*/
 	if ( this->ecc_select == 0xc){	//setting for 12bits ecc.
 		REG_WRITE_U32(REG_ECC_SEL,NF_ECC_SEL_ecc_bch_40b_ena(0)|NF_ECC_SEL_ecc_bch_24b_ena(0)|NF_ECC_SEL_ecc_bch_12b_ena(1));
	}else if( this->ecc_select == 0x18){ //setting for 24bits ecc.
		REG_WRITE_U32(REG_ECC_SEL,NF_ECC_SEL_ecc_bch_40b_ena(0)|NF_ECC_SEL_ecc_bch_24b_ena(1)|NF_ECC_SEL_ecc_bch_12b_ena(0));
	}else if(this->ecc_select == 0x28){	//setting for 40bits ecc.
		REG_WRITE_U32(REG_ECC_SEL,NF_ECC_SEL_ecc_bch_40b_ena(1)|NF_ECC_SEL_ecc_bch_24b_ena(0)|NF_ECC_SEL_ecc_bch_12b_ena(0));
	}else{
		REG_WRITE_U32(REG_ECC_SEL,NF_ECC_SEL_ecc_bch_40b_ena(0)|NF_ECC_SEL_ecc_bch_24b_ena(0)|NF_ECC_SEL_ecc_bch_12b_ena(0));
	}
	
	/*set read command*/
	REG_WRITE_U32(REG_ND_CMD,NF_ND_CMD_cmd(CMD_PG_READ_C1));
	REG_WRITE_U32(REG_CMD2,NF_CMD2_cmd2(CMD_PG_READ_C2));
	REG_WRITE_U32(REG_CMD3,NF_CMD3_cmd3(CMD_PG_READ_C3));

	/*set address command:Set address Column Address [7:0] + Column Address [15:8] 
		+ Page Address [7:0] + Page Address [15:8] + Page Address [23:16]*/
	REG_WRITE_U32( REG_ND_PA0,NF_ND_PA0_page_addr0(page));
	REG_WRITE_U32( REG_ND_PA1,NF_ND_PA1_page_addr1(page>>8));
	REG_WRITE_U32( REG_ND_PA2,NF_ND_PA2_addr_mode(addr_mode)|NF_ND_PA2_page_addr2(page>>16));
	REG_WRITE_U32( REG_ND_PA3,NF_ND_PA3_page_addr3((page>>21)&0x7));
	REG_WRITE_U32(REG_ND_CA0,NF_ND_CA0_col_addr0(0));
	REG_WRITE_U32(REG_ND_CA1,NF_ND_CA1_col_addr1(0));

	/*set page buffer dma*/
	dma_len = this->page_size >> 9;
	REG_WRITE_U32(REG_DMA_CTL2,NF_DMA_CTL2_dma_len(dma_len));
	dma_addr_databuf = dma_map_single(NULL, data_buf,this->page_size,DMA_FROM_DEVICE);
	dram_sa = (((unsigned int)virt_to_phys(data_buf)) >> 3);
	REG_WRITE_U32(REG_DMA_CTL1,NF_DMA_CTL1_dram_sa(dram_sa));
	/*set oob buffer dma*/
	if (oob_buf){
		dma_addr_oobbuf = dma_map_single(NULL,oob_buf, this->oob_size,  DMA_FROM_DEVICE);
		spare_dram_sa = (((unsigned int)virt_to_phys(oob_buf)) >> 3);
	}else{
		dma_addr_oobbuf = dma_map_single(NULL,this->g_oobbuf, this->oob_size,  DMA_FROM_DEVICE);
		spare_dram_sa = (((unsigned int)virt_to_phys(this->g_oobbuf)) >> 3);
	}
	REG_WRITE_U32(REG_SPR_DDR_CTL,NF_SPR_DDR_CTL_cr_nf_hw_pinmux_ena(1)
		|NF_SPR_DDR_CTL_spare_ddr_ena(1)|NF_SPR_DDR_CTL_per_2k_spr_ena(1)
		|NF_SPR_DDR_CTL_spare_dram_sa(spare_dram_sa));
	/*set DMA Move data from DMA buffer to DDR*/
	REG_WRITE_U32(REG_DMA_CTL3,NF_DMA_CTL3_cp_enable(0)|NF_DMA_CTL3_cp_first(0)
		|NF_DMA_CTL3_ddr_wr(0x1)|NF_DMA_CTL3_dma_xfer(0x1));

	/*set command/address/data auto trigger,Enable Auto mode read in 2K page size*/
	REG_WRITE_U32( REG_AUTO_TRIG,NF_AUTO_TRIG_auto_trig(1)
		|NF_AUTO_TRIG_spec_auto_case(0)| NF_AUTO_TRIG_auto_case(auto_trigger_mode));
	/*wait trigger done*/
	WAIT_DONE(REG_AUTO_TRIG,0x80,0);

	/*Wait DMA done,Move data from DMA buffer to DDR*/
	WAIT_DONE(REG_DMA_CTL3,0x01,0);

	/*This bit reflects the level of the ready/busy signal (pin 19) of NAND flash*/
	WAIT_DONE(REG_ND_CTL,0x40,0x40);

	dma_unmap_single(NULL, dma_addr_databuf, this->page_size,  DMA_FROM_DEVICE);
	if ( oob_buf ){
		dma_unmap_single(NULL, dma_addr_oobbuf, this->oob_size,  DMA_FROM_DEVICE);			
	}else{
		dma_unmap_single(NULL, dma_addr_oobbuf, this->oob_size,  DMA_FROM_DEVICE);
	}

	if(oob_buf){
		if(this->ecc_select==0x18||this->ecc_select==0x0c){
			REG_WRITE_U32(REG_READ_BY_PP,0x00);
			REG_WRITE_U32(REG_SRAM_CTL, 0x30 | 0x04);
			rtk_read_oob_from_SRAM(mtd, oob_buf);
			REG_WRITE_U32(REG_SRAM_CTL, 0x00);
			REG_WRITE_U32(REG_READ_BY_PP,0x80);
		}else{
			REG_WRITE_U32(REG_READ_BY_PP,0x00);
			REG_WRITE_U32(REG_SRAM_CTL, 0x30 | 0x04);
			rtk_read_oob_from_SRAM(mtd, oob_buf);
			REG_WRITE_U32(REG_SRAM_CTL, 0x00);
			REG_WRITE_U32(REG_READ_BY_PP,0x80);
			reverse_to_Tags(oob_buf,this->ecc_select);
		}
	}

	/*check page 0xff or not*/
	blank_all_one = (REG_READ_U32(REG_BLANK_CHK)>>1) & 0x01;
	if (blank_all_one){
		return 0;	// return OK if all data bit is 1 (page is not written yet)
	}

	//mtd->nEccMaxValue = REG_MAX_ECC_NUM_max_ecc_num(REG_READ_U32(REG_MAX_ECC_NUM));
	/*indicates ECC Error Occur or ECC is not correctable*/
	if (REG_READ_U32(REG_ND_ECC) & 0x0C){
		/*ECC is not correctable*/
		if (REG_READ_U32(REG_ND_ECC) & 0x08){
			NAND_ERR("blk %d, read page %d not correctable!\n",
				page/this->ppb,page%this->ppb);
			return -1;
		}
		/*ECC Error Occur,can correctable*/
		if(REG_READ_U32(REG_ND_ECC) & 0x04){
			/*get max ecc bit and ecc bit*/
			if((REG_READ_U32(REG_MAX_ECC_NUM) & 0x3F) > this->ecc_safe_value){
				NAND_ERR("blk %d, page %d ecc error warning, "
					"ecc_num = 0x%x\n",page/this->ppb,page%this->ppb,
					REG_READ_U32(REG_RSECC_NUM));
				this->ecc_err_flag = 1;
			}
		}
	}
#ifdef MTD_NAND_RTK_NAND_TEST
	if(test_read_warning_remap != 0){
		NAND_ERR("enter test_read_warning_remap page %d block %d test mode!!\n"
			,page,page/this->ppb);
		this->ecc_err_flag = 1;
		test_read_warning_remap = 0;
	}
#endif
	return rc;
}

static int rtk_read_oob (struct mtd_info *mtd, unsigned short chipnr, int page, 
	int len, unsigned char *oob_buf)
{
	struct nand_chip *this = (struct nand_chip *) mtd->priv;
	if ( len>this->oob_size || !oob_buf ){
		NAND_ERR("len %d >oob_size %d OR oob_buf is NULL!\n", 
			len,this->oob_size);
		return -1;
	}
	return rtk_read_ecc_page(mtd,chipnr,page,this->g_databuf,oob_buf);
}

static int rtk_write_ecc_page (struct mtd_info *mtd, u16 chipnr, unsigned int page,
			const u_char *data_buf, const  u_char *oob_buf)
{
	struct nand_chip *this = (struct nand_chip *) mtd->priv;
	int rc = 0;
	unsigned char auto_trigger_mode = 1,addr_mode = 1;
	unsigned int page_len = 0, dram_sa = 0, dma_len = 0, spare_dram_sa =0;
	unsigned char nf_oob_buf[this->oob_size];
#ifdef MTD_NAND_RTK_NAND_TEST
	if(test_write_fail_remap != 0){
		NAND_ERR("page %d block %d enter write remap test mode!!\n",
			page,page/this->ppb);
		test_write_fail_remap = 0;
		return -1;
	}
#endif
	if(!virt_addr_valid(data_buf)){
		memcpy(this->drv_page_buffer,data_buf,this->page_size);
		data_buf = this->drv_page_buffer;
	}
	
        if(((unsigned int)data_buf&0x7)!=0){
                NAND_ERR("data_buf 0x%x must 8 byte alignmemt!!\n",(unsigned int)data_buf);
                BUG();
        }
        if(((unsigned int)oob_buf&0x7)!=0){
                NAND_ERR("oob_buf 0x%x must 8 byte alignmemt!!\n",(unsigned int)oob_buf);
                BUG();
        }
	/*set random mode*/
	if (nf_is_random_mode()){
		nf_set_random_write(this->page_size,0);
	}
	
	/*set edo mode*/
	if(g_edo_mode_enable){
		REG_WRITE_U32(REG_MULTI_CHNL_MODE,NF_MULTI_CHNL_MODE_edo(1));
	}else{
		REG_WRITE_U32(REG_MULTI_CHNL_MODE,NF_MULTI_CHNL_MODE_edo(0));
	}

	REG_WRITE_U32(REG_SRAM_CTL,0x00);

	/*Set data transfer count*/
	REG_WRITE_U32(REG_DATA_TL0,NF_DATA_TL0_length0(0));
 	if((this->ecc_select == 0x18)||(this->ecc_select == 0x28)){
		page_len = this->page_size >> 10;
		REG_WRITE_U32(REG_DATA_TL1,NF_DATA_TL1_length1(4));
	}else{
		page_len = this->page_size >> 9;
		REG_WRITE_U32(REG_DATA_TL1,NF_DATA_TL1_length1(2));
	}
	REG_WRITE_U32( REG_PAGE_LEN,NF_PAGE_LEN_page_len(page_len));

	/*Set PP Not through PP*/
	REG_WRITE_U32(REG_READ_BY_PP,NF_READ_BY_PP_read_by_pp(0));
	REG_WRITE_U32(REG_PP_CTL0,0);
	REG_WRITE_U32(REG_PP_CTL1,NF_PP_CTL1_pp_start_addr(0));

	/*set Data read from NAND to SRAM don't stop transfer when ECC error occurs*/
	REG_WRITE_U32(REG_ECC_STOP,NF_ECC_STOP_ecc_n_stop(0x01));
	/*set ECC select*/
 	if ( this->ecc_select == 0xc){	//setting for 12bits ecc.
 		REG_WRITE_U32(REG_ECC_SEL,NF_ECC_SEL_ecc_bch_40b_ena(0)|NF_ECC_SEL_ecc_bch_24b_ena(0)|NF_ECC_SEL_ecc_bch_12b_ena(1));
	}else if( this->ecc_select == 0x18){ //setting for 24bits ecc.
		REG_WRITE_U32(REG_ECC_SEL,NF_ECC_SEL_ecc_bch_40b_ena(0)|NF_ECC_SEL_ecc_bch_24b_ena(1)|NF_ECC_SEL_ecc_bch_12b_ena(0));
	}else if(this->ecc_select == 0x28){//setting for 40bits ecc.
		REG_WRITE_U32(REG_ECC_SEL,NF_ECC_SEL_ecc_bch_40b_ena(1)|NF_ECC_SEL_ecc_bch_24b_ena(0)|NF_ECC_SEL_ecc_bch_12b_ena(0));
	}else{
		REG_WRITE_U32(REG_ECC_SEL,NF_ECC_SEL_ecc_bch_40b_ena(0)|NF_ECC_SEL_ecc_bch_24b_ena(0)|NF_ECC_SEL_ecc_bch_12b_ena(0));
	}
	
	/*Set write command*/
 	REG_WRITE_U32(REG_ND_CMD,NF_ND_CMD_cmd(CMD_PG_WRITE_C1));
	REG_WRITE_U32(REG_CMD2,NF_CMD2_cmd2(CMD_PG_WRITE_C2));
	REG_WRITE_U32(REG_CMD3,NF_CMD3_cmd3(CMD_PG_WRITE_C3));

	/*set address:Set address Column Address [7:0] + Column Address [15:8] 
	 + Page Address [7:0] + Page Address [15:8] + Page Address [23:16]*/
	REG_WRITE_U32( REG_ND_PA0,NF_ND_PA0_page_addr0(page));
	REG_WRITE_U32( REG_ND_PA1,NF_ND_PA1_page_addr1(page>>8));
	REG_WRITE_U32( REG_ND_PA2,NF_ND_PA2_addr_mode(addr_mode)
			|NF_ND_PA2_page_addr2(page>>16));
	REG_WRITE_U32( REG_ND_PA3,NF_ND_PA3_page_addr3((page>>21)&0x7));
	REG_WRITE_U32(REG_ND_CA0,NF_ND_CA0_col_addr0(0));
	REG_WRITE_U32(REG_ND_CA1,NF_ND_CA1_col_addr1(0));

	/*set page buffer dma*/
	dma_len = this->page_size >> 9;
	REG_WRITE_U32(REG_DMA_CTL2,NF_DMA_CTL2_dma_len(dma_len));
	dma_map_single(&(mtd->dev), (char *)data_buf, this->page_size, DMA_TO_DEVICE);
	dram_sa = (((unsigned int)virt_to_phys(data_buf)) >> 3);
	REG_WRITE_U32(REG_DMA_CTL1,NF_DMA_CTL1_dram_sa(dram_sa));
	/*set oob buffer dma*/
	memset(nf_oob_buf,0xFF,this->oob_size);
	if ( oob_buf ){
		int i,j;
		memcpy(nf_oob_buf,oob_buf,this->oob_size);
		if((this->ecc_select == 0x18)||(this->ecc_select == 0x28)){
			for(i=1,j=0; i<8; i++)
			{
				nf_oob_buf[8*i] = oob_buf[j];
				nf_oob_buf[8*i+1] = oob_buf[j+1];
				nf_oob_buf[8*i+2] = oob_buf[j+2];
				nf_oob_buf[8*i+3] = oob_buf[j+3];
				j+=4;
			}
		}else{
			for(i=2,j=4; i<8; i+=2)
			{
				nf_oob_buf[4*i] = oob_buf[j];
				nf_oob_buf[4*i+1] = oob_buf[j+1];
				nf_oob_buf[4*i+2] = oob_buf[j+2];
				nf_oob_buf[4*i+3] = oob_buf[j+3];
				j+=4;
			}
		}
	}
	dma_map_single(&(mtd->dev),nf_oob_buf, this->oob_size, DMA_TO_DEVICE);
	spare_dram_sa = (((unsigned int)virt_to_phys(nf_oob_buf)) >> 3);
	REG_WRITE_U32(REG_SPR_DDR_CTL,NF_SPR_DDR_CTL_cr_nf_hw_pinmux_ena(1)|
		NF_SPR_DDR_CTL_spare_ddr_ena(1)|NF_SPR_DDR_CTL_per_2k_spr_ena(1)|
		NF_SPR_DDR_CTL_spare_dram_sa(spare_dram_sa));
	/*Set DMA Move data from DDR to DMA Buffer*/
	REG_WRITE_U32(REG_DMA_CTL3,NF_DMA_CTL3_ddr_wr(0)|NF_DMA_CTL3_dma_xfer(0x1));
	
	/*Enable Auto mode write in 2K page size, enable command/address/data auto triger*/
	REG_WRITE_U32(REG_AUTO_TRIG,NF_AUTO_TRIG_auto_trig(1)
		|NF_AUTO_TRIG_spec_auto_case(0)| NF_AUTO_TRIG_auto_case(auto_trigger_mode));
	WAIT_DONE(REG_AUTO_TRIG,0x80,0);

	/*Wait DMA done,Move data from DDR to DMA*/
	WAIT_DONE(REG_DMA_CTL3,0x01,0);
	
	/*execute command3 register and wait for executed completion*/
	REG_WRITE_U32(REG_POLL_FSTS,NF_POLL_FSTS_bit_sel(6)|NF_POLL_FSTS_trig_poll(1) );
	WAIT_DONE(REG_POLL_FSTS,0x01,0x0);

	/*This bit reflects the level of the ready/busy signal (pin 19) of NAND flash*/
	WAIT_DONE(REG_ND_CTL,0x40,0x40);

	/*read staus*/
	if ( REG_READ_U32(REG_ND_DAT) & 0x01 ){
		NAND_ERR("write is not completed at page %d!\n", page);
		rc =  -1;
	}
	dma_unmap_single(&(mtd->dev), virt_to_phys(data_buf), this->page_size, DMA_TO_DEVICE);
	dma_unmap_single(&(mtd->dev), virt_to_phys(nf_oob_buf), this->oob_size, DMA_TO_DEVICE);
	return rc;
}

static int rtk_write_oob(struct mtd_info *mtd, u16 chipnr, int page, int len, 
	const u_char *oob_buf)
{
	struct nand_chip *this = (struct nand_chip *) mtd->priv;
	if ( len>this->oob_size || !oob_buf ){
		NAND_ERR("len %d >oob_size %d OR oob_buf is NULL!\n", 
			len,this->oob_size);
		return -1;
	}
	return rtk_write_ecc_page(mtd,chipnr,page,this->g_databuf,oob_buf);
}

static void nand_select_chip(struct mtd_info *mtd, int chip)
{
	switch(chip) {
		case -1:
			REG_WRITE_U32(REG_PD,0xff);
			break;			
		case 0:
		case 1:
		case 2:
		case 3:
			REG_WRITE_U32(REG_PD, ~(1 << chip));
			break;
		default:
			REG_WRITE_U32(REG_PD, ~(1 << 0));
	}
}

void nand_chip_function_init(struct mtd_info *mtd)
{
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	this->read_id		= rtk_nand_read_id;
	this->read_ecc_page 	= rtk_read_ecc_page;
	this->read_oob 		= rtk_read_oob;
	this->write_ecc_page	= rtk_write_ecc_page;
	this->write_oob		= rtk_write_oob;
	this->erase_block 	= rtk_erase_block;
	this->suspend		= rtk_nand_suspend;
	this->resume		= rtk_nand_resume;
	this->sync		= NULL;
	this->edo_setting 	= rtk_nand_edo_setting;
	this->scan_bbt 		= nf_init_table;
	this->select_chip	= nand_select_chip;
	this->clock_select	= NF_CKSEL;
}

static int rtk_nand_profile (void)
{
	int maxchips = 4;
	char *ptype;
	int pnum = 0;
	struct mtd_partitions mtd_parts = {0};
	struct nand_chip *this = (struct nand_chip *)rtk_mtd->priv;
	if (rtk_nand_scan (rtk_mtd, maxchips) < 0 || rtk_mtd->size == 0){
		NAND_ERR("Error, cannot do nand_scan(on-board)!\n");
		return -ENODEV;
	}
	if (!(this->page_size&(0x200-1))){
		REG_WRITE_U32( REG_PAGE_LEN,this->page_size >> 9);
	}else{
		NAND_ERR("Error: pagesize is not 512B Multiple!");
		return -1;
	}

#ifdef CONFIG_MTD_CMDLINE_PARTS
	ptype = (char *)ptypes[0];
	pnum = parse_mtd_partitions (rtk_mtd, ptypes, &mtd_parts, NULL);
#endif
	if ((pnum == 0)&&(mtd_parts.nr_parts == 0)) {
		NAND_INFO("RTK: using the whole nand as a partitoin!\n");
		if(add_mtd_device(rtk_mtd)) {
			NAND_ERR("RTK: Failed to register new nand device!\n");
			return -EAGAIN;
		}
	}else if((pnum == 0)&&(mtd_parts.nr_parts > 0)) {
		NAND_INFO("RTK: using dynamic nand partition\n");
		if (add_mtd_partitions (rtk_mtd, mtd_parts.parts,
			mtd_parts.nr_parts)) {
			NAND_ERR("Error, cannot add %s device\n",rtk_mtd->name);
			rtk_mtd->size = 0;
			return -EAGAIN;
		}
	}else{
		NAND_ERR("no exist device!\n");
			return -EAGAIN;
	}
	/*build bbt table*/
	return this->scan_bbt(rtk_mtd);;
}

/*********************proc fs relative function************************/
int rtk_nand_proc_read(char *buf, void *private_ptr)
{
	struct nand_chip *this = (struct nand_chip *) rtk_mtd->priv;
	int wlen = 0;
	wlen += sprintf(buf+wlen,"nand_name:%s\n", this->nand_name);
	wlen += sprintf(buf+wlen,"nand_size:%llu\n", (uint64_t)this->device_size);
	wlen += sprintf(buf+wlen,"chip_size:%llu\n", (uint64_t)this->chipsize);
	wlen += sprintf(buf+wlen,"block_size:%u\n", this->block_size);
	wlen += sprintf(buf+wlen,"page_size:%u\n", this->page_size);
	wlen += sprintf(buf+wlen,"oob_size:%u\n", this->oob_size);
	wlen += sprintf(buf+wlen,"ppb:%u\n", this->ppb);
	return wlen;
}

static int rtk_nand_proc_show(struct seq_file *m, void *v)
{
	char buffer[1024];
	int len;

	len = rtk_nand_proc_read(buffer, NULL);
	seq_puts(m, buffer);
	return 0;
}

static int rtk_nand_proc_open(struct inode *inode, struct file *file)
{
	return single_open(file, rtk_nand_proc_show, NULL);
}

static struct file_operations rtk_nand_procfs_ops = {
	.owner = THIS_MODULE,
	.open  = rtk_nand_proc_open,
	.read  = seq_read,
	.llseek  = seq_lseek,
	.release = single_release,
};

static int rtk_nand_procfs_init(void)
{
	/* Install the proc_fs entries */
	rtk_nand_proc_entry = proc_create("nandinfo",S_IRUGO | S_IFREG,
				    NULL,&rtk_nand_procfs_ops);
	if (rtk_nand_proc_entry) {
		return 0;
	} else {
		return -ENOMEM;
	}
}

/*********************display version************************/
static void display_version (void)
{
	const __u8 *revision;
	const __u8 *date;
	const __u8 *time;
	char *running = (__u8 *)VERSION;
	
	strsep(&running, " ");
	strsep(&running, " ");
	
	revision = strsep(&running, " ");
	date = strsep(&running, " ");
	time = strsep(&running, " ");
	
	NAND_INFO(BANNER " Rev:%s (%s %s)\n", revision, date, time);
	//NAND_INFO("Realtek_NF: build at %s %s\n", __DATE__, __TIME__);
}

void endian_swap(unsigned int* x)
{
	*x = (*x>>24) |((*x<<8) & 0x00FF0000) |((*x>>8) & 0x0000FF00) |(*x<<24);
}


// init global params
static void rtk_nand_params_init(void)
{
	g_BootcodeSize = rtkNF_getBootcodeSize();
	if(g_BootcodeSize == -1){
		g_BootcodeSize = 0x1400000; 	//20M
	}
	
	g_Factory_param_size = rtkNF_getFactParaSize();
	if(g_Factory_param_size == -1){
		g_Factory_param_size = 0x800000;		//8M
	}
	
	g_Factory_RO_Start = rtkNF_getFactRoParaStart();
	if(g_Factory_RO_Start == -1){
		g_Factory_RO_Start = 0x3D00000;
	}
			
	g_Factory_RO_Size = rtkNF_getFactRoParaSize();
	if(g_Factory_RO_Size == -1){
		g_Factory_RO_Size = 0x200000;		//2M
	}

	NAND_INFO("Bootcode Area [0x%x ~ 0x%x]\n",0,g_BootcodeSize);
	NAND_INFO("Factory Area [0x%x ~ 0x%x]\n",
		(g_BootcodeSize),(g_BootcodeSize+g_Factory_param_size));
	NAND_INFO("Factory_ro Area [0x%x ~ 0x%x]\n",
		g_Factory_RO_Start,g_Factory_RO_Start+g_Factory_RO_Size);
}

static void rtk_nand_ctrler_init(void)
{
	struct NF_CLK_INFO nf_clk;

	//set clk info
	nf_clk.nf_clksel = 0x1;
	nf_clk.clk_is_on = 0;
	nf_clk.clk_set_or_get = NF_CLK_SET;

	//change NF freq divider (need to disabled NF clock when change divider) 
	CRT_CLK_OnOff(NAND, CLK_ON, &nf_clk);

	//enable spare DMA to DDR
	REG_WRITE_U32(REG_SPR_DDR_CTL,NF_SPR_DDR_CTL_cr_nf_hw_pinmux_ena(1)
		| NF_SPR_DDR_CTL_spare_ddr_ena(1) | NF_SPR_DDR_CTL_per_2k_spr_ena(1)|
		NF_SPR_DDR_CTL_spare_dram_sa(0)); //set spare2ddr func. 4=>0.5k spe2ddr_ena at A000F000

	//reset nand flash
	REG_WRITE_U32( REG_PD,~(0x1 << 0) );
	REG_WRITE_U32( REG_ND_CMD,CMD_RESET);
	REG_WRITE_U32( REG_ND_CTL,(0x80 | 0x00));
	WAIT_DONE(REG_ND_CTL,0x80,0);
	WAIT_DONE(REG_ND_CTL,0x40,0x40);

	//setting low timing for read id
	//REG_WRITE_U32( REG_MULTI_CHNL_MODE,0x00);
	REG_WRITE_U32( REG_TIME_PARA1,NF_TIME_PARA1_T1(0x1)); //0x2-->0x1
	REG_WRITE_U32( REG_TIME_PARA2,NF_TIME_PARA2_T2(0x1));//0x2-->0x1
	REG_WRITE_U32( REG_TIME_PARA3,NF_TIME_PARA3_T3(0x1));//0x2-->0x1
	REG_WRITE_U32( REG_DELAY_CTL,NF_DELAY_CTL_T_WHR_ADL(0x09));

	REG_WRITE_U32( REG_MULTI_CHNL_MODE,NF_MULTI_CHNL_MODE_edo(0x00));
	/*set ecc Data read from NAND to SRAM don't stop transfer when ECC error occurs*/
	REG_WRITE_U32( REG_ECC_STOP,NF_ECC_STOP_ecc_n_stop(0x01));

	//init colnum address
	REG_WRITE_U32( REG_ND_CA0,0);
	REG_WRITE_U32( REG_ND_CA1,0);
}

static int rtk_nand_boot_type_getting(void)
{
	unsigned char *ptr = NULL;
 	if((ptr = rtkNF_getBootType()) == NULL){
		NAND_INFO("[Warning]Can't get boot type!Nand flash driver "
			" init continue....\n");
		return 0;
	}else{
		if(memcmp(ptr,"nand",strlen(ptr))!=0){
			NAND_INFO("Boottype %s!Nand flash driver init exit....\n",ptr);
			return -1;
		}else{
			NAND_INFO("Boottype %s!Nand flash driver init continue....\n",ptr);
		}
	}
	return 0;
}

static int rtk_nand_init_condition_check(void)
{
	struct NF_CLK_INFO nf_clk;

	//get clk info
	nf_clk.nf_clksel = 0;
	nf_clk.clk_is_on = 0;
	nf_clk.clk_set_or_get = NF_CLK_GET;	//get nf_clksel
	
	//step1: boot type check
	if(rtk_nand_boot_type_getting()!=0){
		NAND_INFO("Boottype is not nand. Installing fails.\n");
		return -1;
	}
	
	//step2: clock enable check
	CRT_CLK_OnOff(NAND, CLK_ON, &nf_clk);
	if(nf_clk.clk_is_on == 0){
		NAND_ERR("Nand Flash Clock is NOT Open. Installing fails.\n");
		return -1;
	}

	//step3: nand info print
	display_version();
	return 0;
}

static int __init rtknand_probe(struct platform_device *pdev);

static struct platform_driver rtknand_driver = {
	.driver = {
		.name	 = "rtk_nand",
	},
	.probe		   = rtknand_probe,
	.remove 	   = __exit_p(rtk_nand_exit),
#ifdef CONFIG_PM
	.suspend	   = platform_rtk_nand_suspend,
	.resume 	   = platform_rtk_nand_resume,
#endif
};

#ifdef MTD_NAND_RTK_NAND_TEST
static ssize_t rtk_nand_str_show(struct kobject *kobj, struct kobj_attribute *attr, char *buf)
{
	return sprintf(buf, "test_erase_fail_remap:%u test_write_fail_remap:%u test_read_warning_remap:%u test_read_fail_remap:%u\n", 
		test_erase_fail_remap,test_write_fail_remap,test_read_warning_remap,test_read_fail_remap );
}
extern void dump_nf_bbt(struct mtd_info *mtd);
extern void dump_nf_rbt(struct mtd_info *mtd);

static ssize_t rtk_nand_str_store(struct kobject *kobj, struct kobj_attribute *attr, const char *buf, size_t count)
{	
	switch (buf[0]) {
	case '0':
		NAND_INFO("do nothing \n");
		
		break;
	case '1':
		test_erase_fail_remap = 1;
		NAND_INFO("set 1 to test_erase_fail_remap %d \n",test_erase_fail_remap);
		break;
	case '2':
		test_write_fail_remap = 1;
		NAND_INFO("set 1 to test_write_fail_remap %d \n",test_write_fail_remap);
		break;
	case '3':
		test_read_warning_remap = 1;
		NAND_INFO("set 1 to test_read_warning_remap %d \n",test_read_warning_remap);
		break;
	case '4':
		test_read_fail_remap = 1;
		NAND_INFO("set 1 to test_read_fail_remap %d \n",test_read_fail_remap);
		break;

	case '5':
		NAND_INFO("dump bbt \n");
		dump_nf_bbt(rtk_mtd);
		break;
	case '6':
		NAND_INFO("dump rbt \n");
		dump_nf_rbt(rtk_mtd);
		break;
	default:
		break;
	}
	return count;
}

static struct kobj_attribute rtk_nand_test_attr = 
	__ATTR(nand_test, 0755, rtk_nand_str_show, rtk_nand_str_store);

static int rtk_nand_sysfs_init(void)
{
	int ret = 0;
	struct kobject *kobj = NULL;
	/* Install the proc_fs entries */
	if((kobj = kobject_create_and_add("nand_test",&(rtknand_driver.driver.p->kobj)))!= NULL){
		ret = sysfs_create_file(kobj,&rtk_nand_test_attr.attr);
	}
	return ret;
}
#endif
static int __init rtknand_probe(struct platform_device *pdev)
{
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_lock();
#endif	
	struct nand_chip *this=NULL;
	int rc = 0;
	NAND_INFO("*********Nand flash init starting....\n");

	if(rtk_nand_init_condition_check() != 0){
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
		rtk_spin_unlock();
#endif
		return -1;
	}

#ifdef CONFIG_ARM64
	if (!pdev->dev.dma_mask)
		pdev->dev.dma_mask = &pdev->dev.coherent_dma_mask;
	if (!pdev->dev.coherent_dma_mask)
		pdev->dev.coherent_dma_mask = DMA_BIT_MASK(32);
#endif
	//polling or interrupt mechanism
	//rtk_nand_access_mechanism_init();	

	//init global params
	rtk_nand_params_init();
	
	//setting wp
	//rtk_nand_wp_setting(REG_GPIO_DIR_BASE, REG_GPIO_OUT_BASE);

	//init nand ctrler
	rtk_nand_ctrler_init();
	
	if((rtk_mtd = kmalloc (MTDSIZE, GFP_KERNEL)) == NULL){
		NAND_ERR(" no enough memory for rtk_mtd!\n");
		rc = -ENOMEM;
		goto EXIT;
	}
	memset ( (char *)rtk_mtd, 0, MTDSIZE);
	rtk_mtd->priv = this = (struct nand_chip *)(rtk_mtd+1);

	nand_chip_function_init(rtk_mtd);
	if( rtk_nand_profile() < 0 ){
		rc = -1;
		goto EXIT;
	}
	if(rtk_nand_procfs_init()<0)
		NAND_ERR("Register procfs nandinfo file failed!\n");
#ifdef MTD_NAND_RTK_NAND_TEST
	rtk_nand_sysfs_init();
#endif
EXIT:
	if (rc < 0) {
		if (rtk_mtd){
			del_mtd_partitions (rtk_mtd);
			if (this->g_databuf)
				kfree(this->g_databuf);
			if(this->g_oobbuf)
				kfree(this->g_oobbuf);
			kfree(rtk_mtd);
		}
		//remove_proc_entry("nandinfo", NULL);
		NAND_ERR("Realtek Nand Flash Driver install fail!\n");
	}else
		NAND_INFO("Realtek Nand Flash Driver is successfully installing.\n");
		
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_unlock();
#endif
	return rc;
}

static int __init rtk_nand_init (void)
{
	int rc = 0;
	if((rc = platform_driver_probe(&rtknand_driver, rtknand_probe)) < 0){
		NAND_INFO( "Realtek Nand Controller Driver installation fails.\n\n");
	}else{
		NAND_INFO("Realtek Nand Controller Driver is successfully installing.\n\n");
	}
	return rc;
}
//----------------------------------------------------------------------------
void __exit rtk_nand_exit (void)
{
	struct nand_chip *this = NULL; 
	if (rtk_mtd){
		del_mtd_partitions (rtk_mtd);
		this = (struct nand_chip *)rtk_mtd->priv;
		if (this->g_databuf)
			kfree(this->g_databuf);
		if(this->g_oobbuf)
			kfree(this->g_oobbuf);
		kfree(rtk_mtd);

	}
	remove_proc_entry("nandinfo", NULL);
}
//----------------------------------------------------------------------------
module_init(rtk_nand_init);
module_exit(rtk_nand_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("rtk");
MODULE_DESCRIPTION("Realtek NAND Flash Controller Driver");
