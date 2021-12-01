/*********************************************************
*
*   Copyright(c) 2016 Realtek Semiconductor Corp. All rights reserved.
*
*   @author realtek.com
*
**********************************************************/
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/interrupt.h>
#include <linux/errno.h>
#include <linux/platform_device.h>
#include <linux/spi/spi.h>
#include <linux/io.h>
#include <linux/of.h>
#include <linux/of_address.h>
#include <linux/delay.h>
#include <mach/rtk_log.h>
#include <linux/dma-direction.h>
#include <linux/dma-mapping.h>
#include <md/rtk_md.h>
#include <asm/cacheflush.h>

#include <rbus/sb2_reg.h>
#include <rbus/md_reg.h>

#include "spi-rtk.h"
#include "../spi/rtk_spinor.h"

/*********************************************************
*
*	macro define
*
*********************************************************/
#define DRV_NAME "rtk_spi_master"

//#define __SPI_MASTER_DEBUG_ENABLE_
#ifdef __SPI_MASTER_DEBUG_ENABLE_
#define spi_debug(fmt, args...)	rtd_printk(KERN_DEBUG, DRV_NAME, fmt, ## args)
#define spi_info(fmt, args...)	rtd_printk(KERN_INFO, DRV_NAME, fmt, ## args)
#define spi_warn(fmt, args...)	rtd_printk(KERN_WARNING, DRV_NAME, fmt, ## args)
#define spi_err(fmt, args...)	rtd_printk(KERN_ERR, DRV_NAME, fmt, ## args)
#else
#define spi_debug(fmt, args...)
#define spi_info(fmt, args...)	rtd_printk(KERN_INFO, DRV_NAME, fmt, ## args)
#define spi_warn(fmt, args...)	rtd_printk(KERN_WARNING, DRV_NAME, fmt, ## args)
#define spi_err(fmt, args...)	rtd_printk(KERN_ERR, DRV_NAME, fmt, ## args)
#endif

/*********************************************************
*
*	var define
*
*********************************************************/
static unsigned int enable_cpu_mode = 1;
static unsigned int enable_spi_flash = 0;
static unsigned int enable_fcic_module = 1;

struct spi_master_clk_t spi_master_clock_match[] = 
{
	{0x1E, 0x00}, // 16.12MHZ
	{0x20, 0x00}, // 15.1515MHz
	{0x21, 0x00}, // 14.71MHz
	{0x25, 0x00}, // 13.16MHz
	{0x27, 0x00}, // 12.50MHz
	{0x2B, 0x00}, // 11.36MHz
	{0x31, 0x00}, // 10MHz
};


/*********************************************************
*
*	function
*
*********************************************************/
static unsigned int swap_endian(unsigned int input)
{
	unsigned int output;

	output = (input & 0xff000000) >> 24 |
			(input & 0x00ff0000) >> 8 |
			(input & 0x0000ff00) << 8 |
			(input & 0x000000ff) << 24;

	return output;
}

static void rtk_spi_master_flash_read_id(struct rtk_spi_master *drv_data, unsigned int* id)
{
	rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(CMD_READ_ID));
	rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(1) | SB2_SFC_CTL_adren(0) | SB2_SFC_CTL_dmycnt(0)); /* dataen = 1, adren = 0, dmycnt = 0 */
	SN_SYNC;
	
	udelay(SFC_DELAY/10);
	
	*id = rtd_inl(drv_data->base_addr);
	SN_SYNC;
	*id = swap_endian(*id);
	(*id) = (*id) >> 8;
	
	return;
}

static int rtk_spi_master_flash_id_verify(struct rtk_spi_master *drv_data, unsigned int *id)
{
	unsigned int tmp_id = 0;
	unsigned int i  =0;
	unsigned int cmp_cnt = 0x3;

	rtk_spi_master_flash_read_id(drv_data, id);

	for(i = 0; i < cmp_cnt; i++){
		rtk_spi_master_flash_read_id(drv_data, &tmp_id);
		if(tmp_id != *id){
			spi_info("[SPINOR-INFO] ID verify fail, cmp_id = 0x%x id = 0x%x \r\n", tmp_id, *id);
			return -1;
		}
	}

	return 0;
}

static void rtd_part_outl(unsigned int reg_addr, unsigned int endBit, unsigned int startBit, unsigned int value)
{
    unsigned int X,A,result;
    X=(1<<(endBit-startBit+1))-1;
    A=rtd_inl(reg_addr);
    result = (A & (~(X<<startBit))) | (value<<startBit);
    rtd_outl(reg_addr,result);
}

static void rtk_spi_master_pinmux_check(void)
{
	volatile unsigned int regval1 = 0;
	volatile unsigned int regval2 = 0;

	if(enable_fcic_module){
#ifndef CONFIG_CUSTOMER_TV006
	//Pinshare setting
	rtd_part_outl(0xb8000810,7,4,0x0);  //FCIC_DI 
	rtd_part_outl(0xb8000810,31,28,0x0);//FCIC_CS_N  
	rtd_part_outl(0xb8000810,23,20,0x0);//FCIC_SCLK 
	rtd_part_outl(0xb8000810,15,12,0x0);//FCIC_DO 
#endif
		regval1 = rtd_inl(0xb8000810);

		spi_info("SPI FCIC pinmux setting info, reg-0x%x: 0x%x !\r\n", \
				0xb8000810, regval1);

	}else{

#ifndef CONFIG_CUSTOMER_TV006	
	regval1 = (rtd_inl(0xb8000850) & 0x0f0f0f0f) | 0x20202020;
	rtd_outl(0xb8000850, regval1);
	regval2 = (rtd_inl(0xb8000854) & 0x0f0fffff) | 0x20200000;
	rtd_outl(0xb8000854, regval2);
#endif

	regval1 = rtd_inl(0xb8000850);
	regval2 = rtd_inl(0xb8000854);

	SPI_INFO("SPI Flash pinmux setting check, reg-0x%x: 0x%x , reg-0x%x: 0x%x!\r\n", \
		0xb8000850, regval1, 0xb8000854, regval2);
	}
}

static void rtk_spi_master_controler_init(void)
{
	if(enable_fcic_module)
		rtd_outl(SB2_SFC_WP_reg, SB2_SFC_WP_ce_n(1) | SB2_SFC_WP_write_en2(1));
	else
		rtd_outl(SB2_SFC_WP_reg, SB2_SFC_WP_ce_n(0) | SB2_SFC_WP_write_en2(1));

	/*set spi mode0*/
	rtd_maskl(SB2_SFC_SCK_reg, ~SB2_SFC_SCK_mode_mask, SB2_SFC_SCK_mode(0));

	/*set phcnt value to 0x19*/
	rtd_maskl(SB2_SFC_CE_reg, ~SB2_SFC_CE_phcnt_mask, SB2_SFC_CE_phcnt(0x19));		

	if(enable_spi_flash){
		/*set auto cmd*/
		rtd_outl(SB2_SFC_EN_WR_reg, SB2_SFC_EN_WR_wt_prog_en(1) | SB2_SFC_EN_WR_wr_en_op(CMD_WRITE_ENABLE));
		rtd_outl(SB2_SFC_WAIT_WR_reg, SB2_SFC_WAIT_WR_wt_prog_done(1) | SB2_SFC_WAIT_WR_rdsr_op(CMD_READ_STATUS1));
	}
}

static int rtk_spi_master_clk_auto_tune(struct rtk_spi_master *drv_data)
{
	int ret = -1;
	unsigned int id = 0;

	unsigned int clock_index = 0;
	unsigned int delay_sel = 0;
	unsigned int i = 0;

	unsigned int delay_sel_min = 0;
	unsigned int delay_sel_max = 0;
	unsigned int invalid_delay_sel_flag = 0;
	unsigned int valid_delay_sel_cnt_gate = DELAY_SEL_STEP_GATE_CNT;

retry_sacn:
	// scan the clock
	for(clock_index = 0; clock_index < sizeof(spi_master_clock_match)/sizeof(struct spi_master_clk_t); clock_index++)
	{
		spi_master_clock_match[clock_index].delay_sel = 0;
		
		// set current scan clock
		rtd_outl(SB2_SFC_SCK_reg, SB2_SFC_SCK_fdiv(spi_master_clock_match[clock_index].clock_div) | SB2_SFC_SCK_clk_duty50_en(1)); // SCK  500M/10 = 50M
		
		// scan the delay_sel
		for(delay_sel = 0; delay_sel < DELAY_SEL_STEP_TOTAL_CNT; delay_sel++)
		{
			unsigned int valid_delay_sel = 0;

			rtd_outl(SB2_SFC_POS_LATCH_reg, SB2_SFC_POS_LATCH_delay_sel(delay_sel) | SB2_SFC_POS_LATCH_pos_latch(POS_LATCH_RISE));

			ret = rtk_spi_master_flash_id_verify(drv_data, &id);
			if(ret < 0 ){
				spi_master_clock_match[clock_index].delay_sel |= (0<<delay_sel);
				valid_delay_sel = 0;
			}else{
				for (i = 0; i < DEV_SIZE_S; i++) {
					/* find the match flash brand */
					if (id != s_device[i].id)
						continue;
					break;
				}

				if (i == DEV_SIZE_S){ 
					spi_master_clock_match[clock_index].delay_sel |= (0<<delay_sel);
					valid_delay_sel = 0;
				}else{
					spi_master_clock_match[clock_index].delay_sel |= (1<<delay_sel);
					valid_delay_sel = 1;
				}
			}

			spi_debug("[SPINOR-INFO] ID: 0x%x, clk_div:0x%x, delay_sel:0x%x %s !\n", \
					id, spi_master_clock_match[clock_index].clock_div, delay_sel, valid_delay_sel ? "valid": "invalid"); 
		}

		delay_sel_min = 0;
		delay_sel_max = 0;
		invalid_delay_sel_flag = 0;

		// find the min delay_sel
		for(delay_sel = 0; delay_sel < DELAY_SEL_STEP_TOTAL_CNT; delay_sel++){
			if(spi_master_clock_match[clock_index].delay_sel & (1<<delay_sel)){
				delay_sel_min = delay_sel;
				break;
			}
		}

		// find the max delay sel
		for(delay_sel = (DELAY_SEL_STEP_TOTAL_CNT - 1); ((delay_sel >= 0) && (delay_sel < DELAY_SEL_STEP_TOTAL_CNT)); delay_sel--){
			if(spi_master_clock_match[clock_index].delay_sel & (1<<delay_sel)){
				delay_sel_max = delay_sel;
				break;
			}
		}

		// sanity check
		for(delay_sel = delay_sel_min; delay_sel <= delay_sel_max; delay_sel++ ){
			if((spi_master_clock_match[clock_index].delay_sel & (1<<delay_sel)) == 0){
				spi_err("min delay_sel = %d, max delay_sel = %d , invalid delay_sel = %d\r\n", 
						delay_sel_min, delay_sel_max, delay_sel);
				invalid_delay_sel_flag = 1;
				break;
			}
		}


		if(invalid_delay_sel_flag == 0){
			if((delay_sel_max - delay_sel_min + 1) >= valid_delay_sel_cnt_gate)
			{
				drv_data->current_delay_sel = (delay_sel_max + delay_sel_min)/2;
				drv_data->current_clock_div = spi_master_clock_match[clock_index].clock_div;
				break;
			}
		}

		spi_info("[SPINOR-INFO]cannot find available clk_div and delay_sel from clock_match(0x%x, 0x%x)\n", 
			spi_master_clock_match[clock_index].clock_div, spi_master_clock_match[clock_index].delay_sel);
	}

	if(clock_index  == sizeof(spi_master_clock_match)/sizeof(struct spi_master_clk_t)){
		if(valid_delay_sel_cnt_gate > (DELAY_SEL_STEP_TOTAL_CNT/2)){
			valid_delay_sel_cnt_gate = valid_delay_sel_cnt_gate -2;
			goto retry_sacn;
		}

		spi_err("[SPINOR-INFO]Cannot find available clk_div and delay_sel\n");
		goto end;
	}else{
		spi_info("[SPINOR-INFO]find available clk_div(0x%x) and delay_sel(0x%x) from clock_match(0x%x, 0x%x)\n", 
		drv_data->current_clock_div, drv_data->current_delay_sel, spi_master_clock_match[clock_index].clock_div, spi_master_clock_match[clock_index].delay_sel);
	}

	// set clock and delay_sel
	rtd_outl(SB2_SFC_SCK_reg, SB2_SFC_SCK_fdiv(drv_data->current_clock_div) | SB2_SFC_SCK_clk_duty50_en(1));
	rtd_outl(SB2_SFC_POS_LATCH_reg, SB2_SFC_POS_LATCH_delay_sel(drv_data->current_delay_sel) | SB2_SFC_POS_LATCH_pos_latch(POS_LATCH_RISE));

	// record max support clock
	drv_data->current_clock = (500/(drv_data->current_clock_div + 1)) * 1000000;
	drv_data->max_clock = drv_data->current_clock ;

	spi_info("current spi device max support clock is %d \r\n", drv_data->max_clock);

	return 0;

end:
	return -1;
}

static int rtk_spi_master_set_clk_for_flash(struct rtk_spi_master *drv_data, unsigned int clk)
{
	int ret = -1;
	unsigned int id = 0;
	unsigned int i = 0;

	unsigned int clk_div = 0;

	unsigned int clk_div_save = 0;
	unsigned int delay_sel_save = 0;

	unsigned int delay_sel = 0;
	unsigned int delay_sel_flag = 0;

	unsigned int delay_sel_min = 0;
	unsigned int delay_sel_max = 0;
	unsigned int invalid_delay_sel_flag = 0;

	if((clk ==0) || (clk >100)){
		spi_err("set spi clock 0x%x fail\n", clk);
		return -1;
	}

	clk_div  = 500 / clk - 1;

	/*save current clock setting*/
	clk_div_save = SB2_SFC_SCK_get_fdiv(rtd_inl(SB2_SFC_SCK_reg));
	delay_sel_save = SB2_SFC_POS_LATCH_get_delay_sel(rtd_inl(SB2_SFC_POS_LATCH_reg));

	if(clk <= drv_data->max_clock){
		// set current scan clock
		rtd_outl(SB2_SFC_SCK_reg, SB2_SFC_SCK_fdiv(clk_div) | SB2_SFC_SCK_clk_duty50_en(1));

		// scan the delay_sel
		for(delay_sel = 0; delay_sel < DELAY_SEL_STEP_TOTAL_CNT; delay_sel++)
		{
			unsigned int valid_delay_sel = 0;

			rtd_outl(SB2_SFC_POS_LATCH_reg, SB2_SFC_POS_LATCH_delay_sel(delay_sel) | SB2_SFC_POS_LATCH_pos_latch(POS_LATCH_RISE));

			ret = rtk_spi_master_flash_id_verify(drv_data, &id);
			if(ret < 0 ){
				delay_sel_flag |= (0<<delay_sel);
				valid_delay_sel = 0;
			}else{
				for (i = 0; i < DEV_SIZE_S; i++) {
					/* find the match flash brand */
					if (id != s_device[i].id)
						continue;
					break;
				}

				if (i == DEV_SIZE_S){ 
					delay_sel_flag |= (0<<delay_sel);
					valid_delay_sel = 0;
				}else{
					delay_sel_flag |= (1<<delay_sel);
					valid_delay_sel = 1;
				}
			}

			spi_info("[SPINOR-INFO] ID: 0x%x, clk_div:0x%x, delay_sel:0x%x %s !\n", \
					id, clk_div, delay_sel, valid_delay_sel ? "valid": "invalid"); 
		}

		spi_info("[SPINOR-INFO]find available delay_sel_flag(0x%x) for clock(0x%x)\n", delay_sel_flag, clk_div);

		// find the available delay_sel
		delay_sel_min = 0;
		delay_sel_max = 0;
		invalid_delay_sel_flag = 0;

		// find the min delay_sel
		for(delay_sel=0; delay_sel < DELAY_SEL_STEP_TOTAL_CNT; delay_sel++){
			if(delay_sel_flag & (1<<delay_sel)){
				delay_sel_min = delay_sel;
				break;
			}
		}

		// find the max delay sel
		for(delay_sel=(DELAY_SEL_STEP_TOTAL_CNT - 1); ((delay_sel >= 0) && (delay_sel < DELAY_SEL_STEP_TOTAL_CNT)); delay_sel--){
			if(delay_sel_flag & (1<<delay_sel)){
				delay_sel_max = delay_sel;
				break;
			}
		}

		// sanity check
		for(delay_sel = delay_sel_min; delay_sel <= delay_sel_max; delay_sel++ ){
			if((delay_sel_flag & (1<<delay_sel)) == 0){
				SPI_ERR("min delay_sel = %d, max delay_sel = %d , invalid delay_sel = %d\r\n", 
					delay_sel_min, delay_sel_max, delay_sel);
				invalid_delay_sel_flag = 1;
				break;
			}
		}

		if(invalid_delay_sel_flag == 0){
			if((delay_sel_max - delay_sel_min + 1) >= DELAY_SEL_STEP_GATE_CNT)
			{
				drv_data->current_delay_sel = (delay_sel_max + delay_sel_min)/2;
				drv_data->current_clock_div = clk_div;
			}else{
				invalid_delay_sel_flag = 1;
			}
		}

		if(invalid_delay_sel_flag == 0){
			spi_info("[SPINOR-INFO]find available delay_sel(0x%x) for clock_div(0x%x), the delay_sel_flag is (0x%x)\n", \
				drv_data->current_delay_sel, drv_data->current_clock_div, delay_sel_flag);
			rtd_outl(SB2_SFC_SCK_reg, SB2_SFC_SCK_fdiv(drv_data->current_clock_div) | SB2_SFC_SCK_clk_duty50_en(1));
			rtd_outl(SB2_SFC_POS_LATCH_reg, SB2_SFC_POS_LATCH_delay_sel(drv_data->current_delay_sel) | SB2_SFC_POS_LATCH_pos_latch(POS_LATCH_RISE));
		}else{
			SPI_INFO("[SPINOR-INFO]cannot find available delay_sel_flag(0x%x) for clock_div(0x%x)\n", delay_sel_flag, clk_div);
			rtd_outl(SB2_SFC_SCK_reg, SB2_SFC_SCK_fdiv(clk_div_save) | SB2_SFC_SCK_clk_duty50_en(1));
			rtd_outl(SB2_SFC_POS_LATCH_reg, SB2_SFC_POS_LATCH_delay_sel(delay_sel_save) | SB2_SFC_POS_LATCH_pos_latch(POS_LATCH_RISE));
		}
		ret = 0;
	}else{
		spi_err("set clock %d , current spi max support clock %d \r\n", clk, drv_data->max_clock);
		ret = 0;
	}

	return ret;
}


static int rtk_spi_master_set_clk_for_general(struct rtk_spi_master *drv_data, unsigned int clk)
{
	unsigned int clk_div  = 0;
	unsigned int delay_sel = 0;

	clk_div = 500 / clk - 1;	
	delay_sel = (DELAY_SEL_STEP_TOTAL_CNT -1) / 2;
	
	rtd_maskl(SB2_SFC_SCK_reg, ~SB2_SFC_SCK_fdiv_mask, SB2_SFC_SCK_fdiv(clk_div));
	rtd_maskl(SB2_SFC_POS_LATCH_reg, ~SB2_SFC_POS_LATCH_delay_sel_mask, SB2_SFC_POS_LATCH_delay_sel(delay_sel));

	drv_data->current_clock = clk;

	return 0;
}

static int rtk_spi_master_clock_init(struct rtk_spi_master *drv_data)
{
	if(enable_spi_flash)
		return rtk_spi_master_clk_auto_tune(drv_data);
	else
		return rtk_spi_master_set_clk_for_general(drv_data, drv_data->max_clock);
}

static int rtk_spi_master_get_device(struct rtk_spi_master *master, int new_state)
{
	DECLARE_WAITQUEUE(wait, current);

	/*Grab the lock and see if the device is available*/
	while (1) {
		spin_lock(&master->spi_lock);
		if (master->state == SM_READY) {
			master->state = new_state;
			spin_unlock(&master->spi_lock);
			break;
		}

		if (new_state == SM_SUSPEND) {
			spin_unlock(&master->spi_lock);
			return (master->state == SM_SUSPEND) ? 0 : -EAGAIN;
		}

		set_current_state(TASK_UNINTERRUPTIBLE);
		add_wait_queue(&master->wq, &wait);
		spin_unlock(&master->spi_lock);
		schedule();
		remove_wait_queue(&master->wq, &wait);
	}
	return 0;
}

static void rtk_spi_master_release_device(struct rtk_spi_master *master)
{
	/* Release the chip */
	spin_lock(&master->spi_lock);
	master->state = SM_READY;
	wake_up(&master->wq);
	spin_unlock(&master->spi_lock);
}

/*rtk spi master priv interface*/
static void rtk_spi_master_read_md(unsigned long from, unsigned int len, const unsigned char *buf)
{
	smd_checkComplete();

	// set DDR and flash addr
	rtd_outl(MD_MD_FDMA_DDR_SADDR_reg, (unsigned int)virt_to_phys(buf));
	rtd_outl(MD_MD_FDMA_FL_SADDR_reg, MD_MD_FDMA_FL_SADDR_fdma_fl_saddr((unsigned int)from));
	rtd_outl(MD_MD_FDMA_CTRL2_reg, MD_MD_FDMA_CTRL2_fdma_length(len) | MD_MD_FDMA_CTRL2_fdma_dir(FLASH_2_DDR) | \
		MD_MD_FDMA_CTRL2_fdma_max_xfer(SET_DMA_LEN_512) | MD_MD_FDMA_CTRL2_fdma_swap(0) | \
		MD_MD_FDMA_CTRL2_fl_mapping_mode(1)); // forward map, no_swap, DMA LEN, FLASH to DDR

	dmac_flush_range(buf, buf + len);
	outer_flush_range(virt_to_phys(buf), virt_to_phys(buf + len));

	SN_SYNC;
	rtd_outl(MD_MD_FDMA_CTRL1_reg, MD_MD_FDMA_CTRL1_write_en1(1) | MD_MD_FDMA_CTRL1_fdma_go(1));

	while(rtd_inl(MD_MD_FDMA_CTRL1_reg) & MD_MD_FDMA_CTRL1_fdma_go_mask); // wait for MD done its operation

	rtd_outl(MD_MD_SMQ_INT_STATUS_reg, MD_MD_SMQ_INT_STATUS_fdma_done(1));	// clear flash done bit

	return;
}

static void rtk_spi_master_write_md(unsigned long to, unsigned int len, const unsigned char *buf)
{
	smd_checkComplete();

	/* set DDR and flash addr */
	rtd_outl(MD_MD_FDMA_DDR_SADDR_reg, (unsigned int)virt_to_phys(buf));
	rtd_outl(MD_MD_FDMA_FL_SADDR_reg, MD_MD_FDMA_FL_SADDR_fdma_fl_saddr((unsigned int)to));
	rtd_outl(MD_MD_FDMA_CTRL2_reg, MD_MD_FDMA_CTRL2_fdma_length(len) | MD_MD_FDMA_CTRL2_fdma_dir(DDR_2_FLASH) | \
		MD_MD_FDMA_CTRL2_fdma_max_xfer(SET_DMA_LEN_512) | MD_MD_FDMA_CTRL2_fdma_swap(0) | \
		MD_MD_FDMA_CTRL2_fl_mapping_mode(1)); // forward map, no_swap, DMA LEN, FLASH to DDR

	dmac_flush_range(buf, buf + len);
	outer_flush_range(virt_to_phys(buf), virt_to_phys(buf + len));

	SN_SYNC;
	rtd_outl(MD_MD_FDMA_CTRL1_reg, MD_MD_FDMA_CTRL1_write_en1(1) | MD_MD_FDMA_CTRL1_fdma_go(1));

	while(rtd_inl(MD_MD_FDMA_CTRL1_reg) & MD_MD_FDMA_CTRL1_fdma_go_mask); // wait for MD done its operation
	
	rtd_outl(MD_MD_SMQ_INT_STATUS_reg, MD_MD_SMQ_INT_STATUS_fdma_done(1));  // clear flash done bit

	SN_SYNC;

	return;
}

static void rtk_spi_master_md_process(unsigned long flash_addr, unsigned int len, const unsigned char *buf, unsigned char is_read)
{
	unsigned int processed_len = 0;
	unsigned int cur_process_len = 0;
	unsigned int total_len = len;

	while(processed_len < total_len){
		if((total_len - processed_len) >= MD_PP_DATA_SIZE)
			cur_process_len = MD_PP_DATA_SIZE;
		else
			cur_process_len = (total_len - processed_len);

		if(is_read)
			rtk_spi_master_read_md(flash_addr, cur_process_len, buf);
		else
			rtk_spi_master_write_md(flash_addr, cur_process_len, buf);

		processed_len += cur_process_len;
		flash_addr += cur_process_len;
		buf += cur_process_len;
	}

	return ;
}

static void rtk_spi_master_read_cpu(unsigned long base_addr, unsigned long from, unsigned int len, const unsigned long buf)
{
	unsigned int i = 0;

	for (i = 0; i < len; i++)
		rtd_outb((buf + i), rtd_inb(base_addr + from + i));

	return;
}

static void rtk_spi_master_write_cpu(unsigned long base_addr, unsigned long to, unsigned int len, const unsigned long buf)
{
	unsigned int i = 0;
	
	for (i = 0; i < len; i++)
		rtd_outb((base_addr + to + i), rtd_inb(buf + i));

	return;
}

static void rtk_spi_master_switch_read_mode(unsigned char read_cmd, unsigned int *addr_mode_enable)
{
	if(enable_spi_flash){
		switch(read_cmd & 0xFF) {	
			case CMD_READ_NORMAL:
				rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(CMD_READ_NORMAL) | SB2_SFC_OPCODE_dual_quad_mode(0)); //switch flash to read mode
				rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(1) | SB2_SFC_CTL_adren(1) | SB2_SFC_CTL_dmycnt(0)); //data_en=1 addr_en=1 dmy_en=0
				*addr_mode_enable = 1;
				break;
			case CMD_READ_NORMAL_FAST:
				rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(CMD_READ_NORMAL_FAST) | SB2_SFC_OPCODE_dual_quad_mode(0)); //switch flash to read mode
				rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(1) | SB2_SFC_CTL_adren(1) | SB2_SFC_CTL_dmycnt(1));  //data_en=1 addr_en=1 dmy_en=1
				*addr_mode_enable = 1;
				break;
			case CMD_READ_DUAL_FAST:
				rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(CMD_READ_DUAL_FAST) | SB2_SFC_OPCODE_dual_quad_mode(1));  //switch flash to read mode
				rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(1) | SB2_SFC_CTL_adren(1) | SB2_SFC_CTL_dmycnt(1)); //data_en=1 addr_en=1 dmy_en=1
				*addr_mode_enable = 1;
				break;
			case CMD_READ_QUAD_FAST:
				rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(CMD_READ_QUAD_FAST) | SB2_SFC_OPCODE_dual_quad_mode(0x5));  //switch flash to read mode
				rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(1) | SB2_SFC_CTL_adren(1) | SB2_SFC_CTL_dmycnt(1)); //data_en=1 addr_en=1 dmy_en=1
				*addr_mode_enable = 1;
				break;		
			default:
				rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(read_cmd) | SB2_SFC_OPCODE_dual_quad_mode(0)); //switch flash to read mode
				rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(1) | SB2_SFC_CTL_adren(0) | SB2_SFC_CTL_dmycnt(0)); //data_en=1 addr_en=1 dmy_en=0
				*addr_mode_enable = 0;
				break;
		}
	}else{
		rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(read_cmd) | SB2_SFC_OPCODE_dual_quad_mode(0)); //switch flash to read mode
		rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(1) | SB2_SFC_CTL_adren(0) | SB2_SFC_CTL_dmycnt(0)); //data_en=1 addr_en=1 dmy_en=0
		*addr_mode_enable = 0;
	}
	

	SN_SYNC;
}

static void rtk_spi_master_switch_write_mode(unsigned char write_cmd, unsigned int data_len, unsigned int *addr_mode_enable)
{
	if(enable_spi_flash){
		switch(write_cmd & 0xFF) {	
			case CMD_PAGE_PROGRAM:
				rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(CMD_PAGE_PROGRAM) | SB2_SFC_OPCODE_dual_quad_mode(0)); //switch flash to normal mode
				rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(1) | SB2_SFC_CTL_adren(1) | SB2_SFC_CTL_dmycnt(0)); //data_en=1 addr_en=1 dmy_en=0
				*addr_mode_enable = 1;
				break;
			case CMD_ERASE_BLOCK_64K:
			case CMD_ERASE_BLOCK_32K:
			case CMD_ERASE_SECTOR_4K:
				rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(write_cmd));
				rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(0) | SB2_SFC_CTL_adren(1) | SB2_SFC_CTL_dmycnt(0));
				*addr_mode_enable = 1;
				break;		
			default:
				rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(write_cmd) | SB2_SFC_OPCODE_dual_quad_mode(0));
				if(data_len == 1)
					rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(0) | SB2_SFC_CTL_adren(0) | SB2_SFC_CTL_dmycnt(0)); //data_en=1 addr_en=1 dmy_en=0
				else
					rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(1) | SB2_SFC_CTL_adren(0) | SB2_SFC_CTL_dmycnt(0)); //data_en=1 addr_en=1 dmy_en=0
				*addr_mode_enable = 0;
				break;
		}
	}else{
		rtd_outl(SB2_SFC_OPCODE_reg, SB2_SFC_OPCODE_opc(write_cmd) | SB2_SFC_OPCODE_dual_quad_mode(0));
		if(data_len == 1)
			rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(0) | SB2_SFC_CTL_adren(0) | SB2_SFC_CTL_dmycnt(0)); //data_en=1 addr_en=1 dmy_en=0
		else
			rtd_outl(SB2_SFC_CTL_reg, SB2_SFC_CTL_dataen(1) | SB2_SFC_CTL_adren(0) | SB2_SFC_CTL_dmycnt(0)); //data_en=1 addr_en=1 dmy_en=0
		*addr_mode_enable = 0;
	}

	SN_SYNC;
}

static int rtk_spi_master_is_only_addr_cmd(unsigned char cmd)
{
	if(cmd == CMD_ERASE_BLOCK_64K || cmd == CMD_ERASE_BLOCK_32K || cmd == CMD_ERASE_SECTOR_4K )
		return 1;

	return 0;
}

static int	rtk_spi_master_transfer_priv(struct rtk_spi_master *master, 
										const unsigned char *tx_data, 
										unsigned char *rx_data, 
										unsigned int len)
{
	unsigned long base_addr = 0;
	unsigned int addr_mode_enable = 0;
	
	/*parameter sanity check*/
	if( master == NULL || tx_data == NULL || len < 1 ){
		spi_err("transfer func parameter check fail, data len = %d \r\n", len);
		return -1;
	}

	base_addr = master->base_addr;

	/* set cmd */
	rtk_spi_master_switch_write_mode(tx_data[0], len, &addr_mode_enable);

	if(addr_mode_enable){
		unsigned long addr = 0;

		if(len < 4){
			spi_err("cannot get addr information, len = %d \r\n", len);
		}else{
			addr = tx_data[1] << 16 | tx_data[2] << 8| tx_data[3];
		}

		if(rtk_spi_master_is_only_addr_cmd(tx_data[0])){
			volatile unsigned char tmp = 0;

			udelay(SFC_DELAY);
			tmp = rtd_inb(addr + base_addr);
			udelay(SFC_DELAY);			
		}else{
			if(enable_cpu_mode){
				rtk_spi_master_write_cpu(base_addr, addr, len -4, (unsigned long)&tx_data[4]);
			}else{
				/*md mode*/	
				rtk_spi_master_md_process(addr, len-4, &tx_data[4], 0);
			}
		}
	}else{
		if(len < 2){
			volatile unsigned char tmp = 0;
			
			udelay(SFC_DELAY);
			tmp = rtd_inb(base_addr);
			udelay(SFC_DELAY);
		}else if(len == 2){
			/*cpu mode*/
			rtd_outb(base_addr, tx_data[1]);       // write one bytes data
		}else{
			/*md mode*/
			rtk_spi_master_md_process(0x0, len-1, &tx_data[1], 0);
		}
	}
	
	return 0;
}

static int rtk_spi_master_receive_priv(struct rtk_spi_master *master, 
										const unsigned char *tx_data, 
										unsigned char *rx_data, 
										unsigned int len)
{
	unsigned long base_addr = 0;
	unsigned int addr_mode_enable = 0;

	/*parameter sanity check*/
	if(master == NULL || tx_data == NULL || rx_data == NULL || len < 1){
		spi_err("receive func parameter check fail, data len = %d \r\n", len);
		return -1;
	}

	base_addr =  master->base_addr;

	/*set cmd*/
	rtk_spi_master_switch_read_mode(tx_data[0], &addr_mode_enable);

	spi_debug("[receive] reg 0x%x(0x%x), reg 0x%x(0x%x) \r\n", \
			SB2_SFC_OPCODE_reg, rtd_inl(SB2_SFC_OPCODE_reg), SB2_SFC_CTL_reg, rtd_inl(SB2_SFC_CTL_reg));

	if(addr_mode_enable){
		unsigned long addr = tx_data[1] << 16 | tx_data[2] << 8| tx_data[3];

#ifdef CONFIG_CUSTOMER_TV006
		/*for customer tv006 use case*/
		memcpy(rx_data, tx_data, 4);	/*1bytes cmd + 3bytes addr */
	
		if(enable_cpu_mode){
			rtk_spi_master_read_cpu(base_addr, addr, len-4, (unsigned long)&rx_data[4]);
		}else{
			rtk_spi_master_md_process(addr, len-4, &rx_data[4], 1);
		}
#else
		if(enable_cpu_mode){
			rtk_spi_master_read_cpu(base_addr, addr, len, (unsigned long)rx_data);
		}else{
			rtk_spi_master_md_process(addr, len, rx_data, 1);
		}
#endif
	}else{		
		if(len == 1){
			/*cpu mode*/
			rx_data[0] = rtd_inb(base_addr);       // read one bytes data
		}else{
			/*md mode*/
			rtk_spi_master_md_process(0x0, len, rx_data, 1);
		}
	}

	return 0;
}

/*spi master interface*/
static int rtk_spi_master_setup(struct spi_device *spi)
{
	struct rtk_spi_master *drv_data = spi_master_get_devdata(spi->master);
	int ret = 0;

	rtk_spi_master_get_device(drv_data, SM_WORKING);

	/*set spi bits_per_word*/
	if(drv_data->current_bits_per_word != spi->bits_per_word){
		if(spi->bits_per_word != 8){
			spi_err("Only support bits_per_word is 8 , %d!\r\n", spi->bits_per_word);
			ret = -1;
			goto final;
		}
		drv_data->current_bits_per_word = spi->bits_per_word;
	}
	
	/* set spi work mode*/
	if((drv_data->current_mode & (SPI_CPHA | SPI_CPOL)) != (spi->mode & (SPI_CPHA | SPI_CPOL))){
		switch (spi->mode & (SPI_CPHA | SPI_CPOL)) {
			case SPI_MODE_0:
				rtd_maskl(SB2_SFC_SCK_reg, ~SB2_SFC_SCK_mode_mask, SB2_SFC_SCK_mode(0));
				spi_info("set mode0, reg: 0x%x value: 0x%x!\r\n", SB2_SFC_SCK_reg, rtd_inl(SB2_SFC_SCK_reg));
				break;
			case SPI_MODE_3:
				rtd_maskl(SB2_SFC_SCK_reg, ~SB2_SFC_SCK_mode_mask, SB2_SFC_SCK_mode(1));
				spi_info("set mode3, reg: 0x%x value: 0x%x!\r\n", SB2_SFC_SCK_reg, rtd_inl(SB2_SFC_SCK_reg));
				break;
			default:
				spi_err("Not support this spi mode: 0x%x \r\n", spi->mode);
				ret = -1;
				goto final;
		}
		
		drv_data->current_mode = spi->mode;
	}

	if(spi->max_speed_hz > drv_data->max_clock){
		spi_err("set clock %d , current spi max support clock %d \r\n", spi->max_speed_hz, drv_data->max_clock);
		ret = -1;
		goto final;
	}

	if(drv_data->current_clock != spi->max_speed_hz){
		if(enable_spi_flash)
			rtk_spi_master_set_clk_for_flash(drv_data, spi->max_speed_hz / 1000000);
		else
			rtk_spi_master_set_clk_for_general(drv_data, spi->max_speed_hz / 1000000);
		
		drv_data->current_clock = spi->max_speed_hz;
	}

	ret = 0;

final:
	rtk_spi_master_release_device(drv_data);
	
	return ret;
}

static void rtk_spi_master_cleanup(struct spi_device *spi)
{
	spi_info("%s enter...\r\n", __func__);
}

static int rtk_spi_master_transfer_one_message(struct spi_master *master,
						struct spi_message *msg)
{
	struct rtk_spi_master *drv_data = spi_master_get_devdata(master);
	struct spi_transfer *t;
	int status = 0;
	
	msg->state = NULL;
	msg->actual_length = 0;
	
	list_for_each_entry(t, &msg->transfers, transfer_list) {
		msg->state = t;

		rtk_spi_master_get_device(drv_data, SM_WORKING);
       
		if(t->rx_buf == NULL){
			/* transfer data to spi device */
			status = drv_data->transfer(drv_data, t->tx_buf, NULL, t->len); 
			if(status < 0){
				rtk_spi_master_release_device(drv_data);
				spi_err("transfer data fail!\r\n");
				break;
			}
		}else{
			/* receive data from spi device*/
			status = drv_data->receive(drv_data, t->tx_buf, t->rx_buf, t->len);
			if(status < 0){
				rtk_spi_master_release_device(drv_data);
				spi_err("receive data fail!\r\n");
				break;
			}
		}

		rtk_spi_master_release_device(drv_data);
		
		msg->actual_length += t->len;
		if (t->delay_usecs)
			udelay(t->delay_usecs);
	}

	/*send message to core that transfer done*/
	msg->status = status;
	spi_finalize_current_message(master);

	return status;
}

#ifdef CONFIG_OF
static int rtk_spi_master_of_probe(struct platform_device *pdev)
{
	struct spi_master *master = platform_get_drvdata(pdev);
	struct rtk_spi_master *drv_data = spi_master_get_devdata(master);
	void __iomem *virt_base;
	
	virt_base =  of_iomap(pdev->dev.of_node, 0);

	WARN(!virt_base, "unable to map rtk-spi area\n");
	
	if(IS_ERR(virt_base))
		return -EIO;
	else
		drv_data->base_addr  = (unsigned long)virt_base;
	
	return 0;
}
#else /* !CONFIG_OF */
static int rtk_spi_master_of_probe(struct platform_device *pdev)
{
	return 0;
}
#endif /* CONFIG_OF */

static int rtk_spi_master_probe(struct platform_device *pdev)
{
	struct spi_master *master = NULL;
	struct rtk_spi_master *drv_data = NULL;
	int err = -ENODEV;

	spi_info("spi master init ... version 1.0\r\n");

	/*print pinmux info for check*/
	rtk_spi_master_pinmux_check();

	/*init spi master controler*/
	rtk_spi_master_controler_init();

	/* allocate master with space for drv_data */
	master = spi_alloc_master(&pdev->dev, sizeof(struct rtk_spi_master));
	if(!master) {
		spi_err("can not alloc spi_master\n");
		return -ENOMEM;
	}

	/* setup the master state. */
	master->dev.of_node = pdev->dev.of_node;
	master->bus_num = pdev->id;
	master->num_chipselect = 1;
	master->mode_bits = SPI_CPOL | SPI_CPHA;
	master->max_speed_hz = 16000000;	/*max freq, 16MHZ*/
	master->min_speed_hz = 1000000;
	master->setup = rtk_spi_master_setup;
	master->cleanup = rtk_spi_master_cleanup;
	master->transfer_one_message = rtk_spi_master_transfer_one_message;

	platform_set_drvdata(pdev, master);

	drv_data = spi_master_get_devdata(master);
	drv_data->master = master;

	/* probe spi master base address */
	err = rtk_spi_master_of_probe(pdev);
	if (err){
		spi_err("get spi master base address fail!\r\n");
		goto exit;
	}

	drv_data->current_mode = SPI_MODE_0;
	drv_data->current_bits_per_word = 8;
	drv_data->max_clock = master->max_speed_hz;

	/*set init clock, tune flow*/
	err = rtk_spi_master_clock_init(drv_data);
	if(err < 0){
		spi_err("init spi master clock fail!\r\n");
		goto exit;
	}

	/*use detect max clock*/
	master->max_speed_hz = drv_data->max_clock;

	/*set spi master init status */
	spin_lock_init(&drv_data->spi_lock);
	drv_data->state = SM_READY;
	init_waitqueue_head(&drv_data->wq);
	
	/* register transfer and receive callback */
	drv_data->transfer = rtk_spi_master_transfer_priv;
	drv_data->receive = rtk_spi_master_receive_priv;
	
	/* register spi master  and add spi device*/
	err = spi_register_master(spi_master_get(master));
	if (err){
		spi_err("register spi master fail!\r\n");
		goto exit;
	}

	spi_info("spi master init ... finish!\r\n");
	return 0;
	
exit:
	spi_master_put(master);
	spi_info("spi master init ... fail!\r\n");
	return err;	
}

static int rtk_spi_master_remove(struct platform_device *pdev)
{
	struct spi_master *master = platform_get_drvdata(pdev);

	spi_master_put(master);
	
	spi_info("spi master remove ... finish!\r\n");
	return 0;
}

#ifdef CONFIG_PM
static int rtk_spi_master_suspend(struct device *dev)
{
	struct spi_master *master = dev_get_drvdata(dev);
	struct rtk_spi_master *drv_data = spi_master_get_devdata(master);
	int ret = 0;
	int i = 0;
	
	ret = rtk_spi_master_get_device(drv_data, SM_SUSPEND);
	if(ret < 0){
		spi_err("Set spi master status to suspend mode fail!\r\n");
		return ret;	
	}

	// wait FDMA DONE
	while(rtd_inl(MD_MD_FDMA_CTRL1_reg) & MD_MD_FDMA_CTRL1_fdma_go_mask); // wait for MD done its operation

	if(drv_data->reg_array == NULL){
		drv_data->reg_array = (unsigned int *)kmalloc(SPI_REG_NUM * sizeof(unsigned int), GFP_KERNEL);
		if(drv_data->reg_array == NULL){
			spi_err("malloc buffer to store register status fail!\r\n");
			ret = -ENOMEM;
			goto final;
		}
	}

	/*dump all spi master register */
	for(i = 0; i < SPI_REG_NUM; i++)
		drv_data->reg_array[i] = rtd_inl(SPI_REG_BASE + i * sizeof(unsigned int));

	ret = 0;
	
final:
	rtk_spi_master_release_device(drv_data);
	return ret;	
}

static int rtk_spi_master_resume(struct device *dev)
{
	struct spi_master *master = dev_get_drvdata(dev);
	struct rtk_spi_master *drv_data = spi_master_get_devdata(master);
	int ret = 0;
	int i = 0;

	ret = rtk_spi_master_get_device(drv_data, SM_SUSPEND);
	if(ret < 0){
		spi_err("Set spi master status to suspend/resume mode fail!\r\n");

		if(drv_data->reg_array) {
			kfree(drv_data->reg_array);
			drv_data->reg_array = NULL;
		}
		return ret;	
	}

	if(drv_data->reg_array != NULL) {
		/*restore all spi master register */
		for(i = 0; i < SPI_REG_NUM; i++)
			rtd_outl(SPI_REG_BASE + i * sizeof(unsigned int), drv_data->reg_array[i]);

		/*special register, need set write enable bit to write value*/
		if(drv_data->reg_array[4] & SB2_SFC_WP_ce_n_mask)
			rtd_outl(SB2_SFC_WP_reg,  drv_data->reg_array[4] | SB2_SFC_WP_ce_n(1) | SB2_SFC_WP_write_en2(1));

		kfree(drv_data->reg_array);
		drv_data->reg_array = NULL;
		ret = 0;
	} else {
		spi_err("restore spi master register fail!\n");
		ret = -1;
	}

	rtk_spi_master_release_device(drv_data);
	return ret;
}

static const struct dev_pm_ops rtk_spi_master_pm_ops = {
		.suspend = rtk_spi_master_suspend,
		.resume = rtk_spi_master_resume,
		
#ifdef CONFIG_HIBERNATION
		.restore = rtk_spi_master_resume,
		.freeze = rtk_spi_master_suspend,
		.thaw = rtk_spi_master_resume,
#endif		
};
#define RTK_SPI_MASTER_PM_OPS	(&rtk_spi_master_pm_ops)
#else
#define RTK_SPI_MASTER_PM_OPS	NULL
#endif


#ifdef CONFIG_OF
static const struct of_device_id rtk_spi_master_match[] = {
	{ .compatible = "realtek,rtk_spi_master", },
	{},
};
MODULE_DEVICE_TABLE(of, rtk_spi_master_match);
#endif /* CONFIG_OF */

static struct platform_driver rtk_spi_master_driver = {
	.probe = rtk_spi_master_probe,
	.remove = rtk_spi_master_remove,
	.driver = {
		.name = DRV_NAME,
		.pm = RTK_SPI_MASTER_PM_OPS,
		.of_match_table = of_match_ptr(rtk_spi_master_match),
	},
};
module_platform_driver(rtk_spi_master_driver);


MODULE_DESCRIPTION("Realtek SPI master controler driver");
MODULE_AUTHOR("Realtek <xxxx@apowertec.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
