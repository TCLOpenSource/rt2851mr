/*==========================================================================
  * Copyright (c)      Realtek Semiconductor Corporation, 2009
  * All rights reserved.
  * ========================================================================*/

/*================= File Description =======================================*/
/**
 * @file
 * 	This file is for color related functions.
 *
 * @author 	$Author$
 * @date 	$Date$
 * @version 	$Revision$
 */

/**
 * @addtogroup color
 * @{
 */

/*============================ Module dependency  ===========================*/
#if CONFIG_FIRMWARE_IN_KERNEL
#include <linux/mtd/mtd.h>
#include <linux/uaccess.h>
#include <asm/cacheflush.h>
#include <linux/pageremap.h>
#include <uapi/linux/const.h>
#include <linux/mm.h>
#include <linux/auth.h>
#include <linux/semaphore.h>//for semaphore
#include <linux/version.h>
#include <tvscalercontrol/io/ioregdrv.h>
#include <tvscalercontrol/scaler/scalerstruct.h>
#include <tvscalercontrol/scalerdrv/mode.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/scaler/source.h>
#include <tvscalercontrol/scalerdrv/scalerdrv.h>
#include <tvscalercontrol/vip/vip_reg_def.h>
#include <tvscalercontrol/vip/gibi_od.h>
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#include <mach/rtk_log.h>
#include <rbus/lgd_dither_reg.h>
#include <rbus/pcid_reg.h>
#include <rbus/od_dma_reg.h>
#include "rtk_vip_logger.h"
#else
#include <unistd.h>			// 'close()'
#include <fcntl.h>			// 'open()'
#include <stdio.h>
#include <sys/ioctl.h>
//#include "rtd_regs.h"
#include <Platform_Lib/TVScalerControl/io/ioRegDrv.h>
//#include <Application/AppClass/TvControl/Utils/RtSystem.h>
#include <Platform_Lib/TVScalerControl/scaler/scalerStruct.h>
#include <Platform_Lib/TVScalerControl/scalerDrv/mode.h>
#include <Platform_Lib/TVScalerControl/scalerDrv/scalerMemory.h>
#include <Platform_Lib/TVScalerControl/scaler/source.h>
#include <Platform_Lib/panel/panelAPI.h>
//#include <kernel/scaler/scalerDrv.h>	// kernel space
#include <Platform_Lib/TVScalerControl/scalerDrv/scalerDrv.h>
#include <Platform_Lib/TVScalerControl/vip/VIP_reg_def.h>
#include <Platform_Lib/TVScalerControl/vip/gibi_od.h>
#include "Platform_Lib/TVScalerControl/scalerDrv/scalerMemory.h"
//#include "rtd_struct.h"
//#include <rbusPpOverlayReg.h>
#include <ppoverlay_reg.h>
#include <lgd_dither_reg.h>
#endif

/*===================================  Types ================================*/

/*================================== Variables ==============================*/
unsigned char bODMemCheck = 0;

/*================================ Definitions ==============================*/
#if CONFIG_FIRMWARE_IN_KERNEL
#define TAG_NAME "VPQ_OD"
#undef VIPprintf
#define VIPprintf(fmt, args...)	VIPprintfPrivate(VIP_LOGLEVEL_DEBUG,VIP_LOGMODULE_VIP_GIBI_OD_DEBUG,fmt,##args)
#else
#define VIPprintf(fmt, args...)	printf(fmt, ##args)
#endif

#define TAG_OD_MEM "OD_MEM"
#define OD_TABLE_LEN	17

/*================================== Functions ===============================*/
extern unsigned int Get_DISPLAY_REFRESH_RATE(void);
unsigned int drvifget_align_value(unsigned int input, unsigned int align_value)
{
	if(align_value != 0){
		return (input + (align_value - (input % align_value)));
	}
	else{
		return input;
	}
}
unsigned char drvif_color_od_enable_get(void)
{
	od_od_ctrl_RBUS od_od_ctrl_reg;
	od_od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
	rtd_printk(KERN_EMERG, TAG_NAME, "od_od_ctrl_reg.od_en = %d\n", od_od_ctrl_reg.od_en);
	return od_od_ctrl_reg.od_en;
}
void drvif_color_od_enable_set(unsigned char od_enable)
{
	int timeoutcnt = 0x032500;
	od_od_ctrl_RBUS od_od_ctrl_reg;
	od_od_ctrl1_RBUS od_od_ctrl1_reg;
	
	od_od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
	od_od_ctrl1_reg.regValue = IoReg_Read32(OD_OD_CTRL1_reg);
		
	/* OD function db on */
	IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_en_dbf_en_mask); //_BIT24
	
	/* OD function db read sel: reg */
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_read_level_mask); //_BIT25
	
	/* OD enable */
	od_od_ctrl_reg.od_en = od_enable;
	IoReg_Write32(OD_OD_CTRL_reg, od_od_ctrl_reg.regValue);
	
	/* db apply */
	IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_apply_mask); //_BIT26 
	
	/* check */
	while(drvif_color_od_enable_get() != od_enable && (timeoutcnt--) > 0) {
		rtd_printk(KERN_EMERG, TAG_NAME, "%s, wait db apply success, timeout cnt = %d", __func__, timeoutcnt);
	}
	if(timeoutcnt == 0)	{
		od_od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
		rtd_printk(KERN_EMERG, TAG_NAME, "%s, time out 0, timeout cnt = %d, od_ctrl_reg.regValue=%x,\n", __func__, timeoutcnt, od_od_ctrl_reg.od_en);
	}
	else {
		rtd_printk(KERN_EMERG, TAG_NAME, "%s, timeout cnt = %d, set od_enable %d done", __func__, timeoutcnt, od_enable);
	}

	/* OD function db off */
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_en_dbf_en_mask); //_BIT24
	
	/* OD function db read sel: temp */
	IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_read_level_mask); //_BIT25
}
DRV_od_ymode drvif_color_od_Ymode_get(void)
{
	DRV_od_ymode ymode;
	od_ymode_ctrl_RBUS od_ymode_ctrl_reg;
	
	od_ymode_ctrl_reg.regValue = IoReg_Read32(OD_YMODE_CTRL_reg);
	ymode.ymode_en = od_ymode_ctrl_reg.od_ymode_en;
	ymode.ymode_sat_en = od_ymode_ctrl_reg.od_ymode_sat_en;
	ymode.ymode_coef_r = od_ymode_ctrl_reg.r_coeff;
	ymode.ymode_coef_g = od_ymode_ctrl_reg.g_coeff;
	ymode.ymode_coef_b = od_ymode_ctrl_reg.b_coeff;

	return ymode;
}
void drvif_color_od_Ymode_set(DRV_od_ymode arg)
{
	od_ymode_ctrl_RBUS od_ymode_ctrl_reg;
	
	od_ymode_ctrl_reg.od_ymode_en = arg.ymode_en;
	od_ymode_ctrl_reg.od_ymode_sat_en = arg.ymode_sat_en;
	od_ymode_ctrl_reg.r_coeff = arg.ymode_coef_r;
	od_ymode_ctrl_reg.g_coeff = arg.ymode_coef_g;
	od_ymode_ctrl_reg.b_coeff = arg.ymode_coef_b;
	IoReg_Write32(OD_YMODE_CTRL_reg, od_ymode_ctrl_reg.regValue);
}
unsigned char drvif_color_od_gain_get(void)
{
	//od_od_ctrl2_RBUS od_od_ctrl2_reg;

	return 0;
}
void drvif_color_od_gain_set(unsigned char gain)
{
	/* od gain only works on delta table */
	
	od_od_ctrl2_RBUS od_od_ctrl2_reg;
	
	if (gain > 127)
		gain = 127;

	od_od_ctrl2_reg.regValue = IoReg_Read32(OD_OD_CTRL2_reg);
	od_od_ctrl2_reg.od_delta_gain_r = gain;
	od_od_ctrl2_reg.od_delta_gain_g = gain;
	od_od_ctrl2_reg.od_delta_gain_b = gain;
	od_od_ctrl2_reg.od_delta_gain_w = gain;
	IoReg_Write32(OD_OD_CTRL2_reg, od_od_ctrl2_reg.regValue);
}
void drvif_color_od_freeze(unsigned char freeze)
{
	int timeoutcnt = 0x032500;
	od_dma_oddma_wr_ctrl_RBUS od_dma_oddma_wr_ctrl_reg;
		
	if(freeze)
	{
		/* force pre */
		IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_force_pre_out_mask); //_BIT20
		/* enable cap en db */
		IoReg_SetBits(OD_DMA_OD_DMA_DB_EN_reg, OD_DMA_OD_DMA_DB_EN_cap_db_en_mask); //_BIT0
		/* disable dma cap*/
		IoReg_ClearBits(OD_DMA_ODDMA_WR_Ctrl_reg, OD_DMA_ODDMA_WR_Ctrl_cap_en_mask); //_BIT0
		/* apply cap en db */
		IoReg_SetBits(OD_DMA_OD_DMA_DB_EN_reg, OD_DMA_OD_DMA_DB_EN_cap_db_apply_mask); //_BIT2
		/* check */
		od_dma_oddma_wr_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_Ctrl_reg);
		while(od_dma_oddma_wr_ctrl_reg.cap_en != freeze && (timeoutcnt--) > 0) {
			rtd_printk(KERN_EMERG, TAG_NAME, "%s, wait db apply success, timeout cnt = %d", __func__, timeoutcnt);
			od_dma_oddma_wr_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_Ctrl_reg);
		}
		if(timeoutcnt == 0)	{
			rtd_printk(KERN_EMERG, TAG_NAME, "%s, time out 0, timeout cnt = %d, cap_en = %d,\n", __func__, timeoutcnt, od_dma_oddma_wr_ctrl_reg.cap_en);
		}
		else {
			rtd_printk(KERN_EMERG, TAG_NAME, "%s, timeout cnt = %d, freeze done", __func__, timeoutcnt);
		}
		
		/* disable cap en db */
		IoReg_ClearBits(OD_DMA_OD_DMA_DB_EN_reg, OD_DMA_OD_DMA_DB_EN_cap_db_en_mask); //_BIT0
	}
	else
	{
		/* enable cap en db */
		IoReg_SetBits(OD_DMA_OD_DMA_DB_EN_reg, OD_DMA_OD_DMA_DB_EN_cap_db_en_mask); //_BIT0
		/* enable dma cap*/
		IoReg_SetBits(OD_DMA_ODDMA_WR_Ctrl_reg, OD_DMA_ODDMA_WR_Ctrl_cap_en_mask); //_BIT0
		/* apply cap en db */
		IoReg_SetBits(OD_DMA_OD_DMA_DB_EN_reg, OD_DMA_OD_DMA_DB_EN_cap_db_apply_mask); //_BIT2
		/* check */
		od_dma_oddma_wr_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_Ctrl_reg);
		while(od_dma_oddma_wr_ctrl_reg.cap_en != freeze && (timeoutcnt--) > 0) {
			rtd_printk(KERN_EMERG, TAG_NAME, "%s, wait db apply success, timeout cnt = %d", __func__, timeoutcnt);
			od_dma_oddma_wr_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_Ctrl_reg);
		}
		if(timeoutcnt == 0)	{
			rtd_printk(KERN_EMERG, TAG_NAME, "%s, time out 0, timeout cnt = %d, cap_en = %d,\n", __func__, timeoutcnt, od_dma_oddma_wr_ctrl_reg.cap_en);
		}
		else {
			rtd_printk(KERN_EMERG, TAG_NAME, "%s, timeout cnt = %d, unfreeze done", __func__, timeoutcnt);
			
			/* disable force pre */
			IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_force_pre_out_mask); //_BIT20
		}
		
		/* disable cap en db */
		IoReg_ClearBits(OD_DMA_OD_DMA_DB_EN_reg, OD_DMA_OD_DMA_DB_EN_cap_db_en_mask); //_BIT0
	}
}
/* default y mode */
void drvif_color_od_Ymode(void)
{
	// 170524 henry Merlin3
	od_ymode_ctrl_RBUS od_ymode_ctrl_reg;
	od_ymode_ctrl_reg.regValue = IoReg_Read32(OD_YMODE_CTRL_reg);
	od_ymode_ctrl_reg.od_ymode_en = 1;
	od_ymode_ctrl_reg.od_ymode_sat_en = 0;
	od_ymode_ctrl_reg.r_coeff = 0x4D;
	od_ymode_ctrl_reg.g_coeff = 0x96;
	od_ymode_ctrl_reg.b_coeff = 0x1D;
	IoReg_Write32(OD_YMODE_CTRL_reg, od_ymode_ctrl_reg.regValue);
}

// 160615 added by henry
// 160805 modified by henry
// 160810 modified by henry - add the static memory address
// 170524 modified by henry - Merlin3 driver
// 190327 modified by henry - Merlin5 PQC setting
// === Argument Explanation ===
//
// width & height: 4K - 3840x2160, 2K - 1920x1080
//
// bit_sel: dma input bit depth = 0 : 6 bits
//   						 	= 1 : 8 bits
//   						 	= 2 : 10 bits
//
// dma_mode = 1: frame mode
//        	  0: line mode
//
// FrameLimitBit: compression ratio
//
// dataColor = 0: RGB Compression
//			 = 1: YUV Compression
//
// dataFormat = 0: 444
//			  = 1: 422
//			  = 2: 420 --> not support RGB compression
//			  = 3: 400 --> not support RGB compression
//
// === Example of using OD PQ compression function ===
//
// Video Resolution   : 4K
// bit_sel            : 6
// DMA Mode           : line mode
// FrameLimitBit      : 8
// Compression Color  : RGB
// Compression Format : 422
//
// drvif_color_od_pqc(2160, 3840, 0, 0, 8, 0, 1)
//
bool drvif_color_od_pqc(UINT16 height, UINT16 width, UINT8 bit_sel, UINT8 dma_mode, UINT8 FrameLimitBit, int dataColor, int dataFormat)
{
	unsigned int od_size = 0;
	unsigned int od_addr = 0;
	unsigned int align_value =0;
	unsigned int pqc_line_sum_bit = 0;
	unsigned int burst_length = 0x20;

	od_dma_od_dma_ctrl_RBUS od_dma_od_dma_ctrl_reg;
	od_dma_od_dma_ctrl_2_RBUS od_dma_od_dma_ctrl_2_reg;
	od_dma_oddma_pq_cmp_allocate_RBUS od_dma_oddma_pq_cmp_allocate_reg;
	od_dma_oddma_pq_cmp_RBUS oddma_pq_cmp_reg;
	od_dma_oddma_pq_decmp_RBUS oddma_pq_decmp_reg;
	od_dma_oddma_pq_decmp_sat_en_RBUS oddma_pq_decmp_sat_en_reg;
	od_dma_oddma_wr_num_bl_wrap_ctl_RBUS od_dma_oddma_wr_num_bl_wrap_ctl_reg;
	od_dma_oddma_pq_cmp_enable_RBUS od_dma_oddma_pq_cmp_enable_reg;
 	od_dma_oddma_pq_cmp_balance_RBUS od_dma_oddma_pq_cmp_balance_reg;
	od_dma_oddma_pq_cmp_pair_RBUS oddma_pq_cmp_pair_reg;
	od_dma_oddma_pq_decmp_pair_RBUS oddma_pq_decmp_pair_reg;
	od_dma_oddma_pq_cmp_bit_RBUS oddma_pq_cmp_bit_reg;
	od_dma_oddma_rd_num_bl_wrap_ctl_RBUS od_dma_oddma_rd_num_bl_wrap_ctl_reg;
	od_dma_oddma_wr_num_bl_wrap_rolling_RBUS od_dma_oddma_wr_num_bl_wrap_rolling_reg;
	od_dma_oddma_rd_num_bl_wrap_rolling_RBUS od_dma_oddma_rd_num_bl_wrap_rolling_reg;
	od_dma_oddma_wr_num_bl_wrap_word_RBUS od_dma_oddma_wr_num_bl_wrap_word_reg;
	od_dma_oddma_rd_num_bl_wrap_word_RBUS od_dma_oddma_rd_num_bl_wrap_word_reg;
	od_dma_oddma_wr_num_bl_wrap_line_step_RBUS od_dma_oddma_cap_linestep_reg;
	od_dma_oddma_rd_num_bl_wrap_line_step_RBUS od_dma_oddma_rd_num_bl_wrap_line_step_reg;
	od_dma_oddma_pqc_pqdc_compensation_RBUS od_dma_oddma_pqc_pqdc_compensation_reg;
	od_dma_oddma_wr_ctrl_RBUS od_dma_oddma_wr_ctrl_reg;
	od_dma_oddma_rd_ctrl_RBUS od_dma_oddma_rd_ctrl_reg;

	VIPprintf("[OD] Gibi_od.cpp::drvif_color_od_pqc() calling...\n");

#ifdef CONFIG_OPTEE_SECURE_SVP_PROTECTION
	od_size = carvedout_buf_query_secure(CARVEDOUT_SCALER_OD,(void*) &od_addr);
#else
	od_size = carvedout_buf_query(CARVEDOUT_SCALER_OD,(void*) &od_addr);
#endif
	if (od_addr == 0 || od_size == 0) {
		VIPprintf("[%s %d] ERR : %x %x\n", __func__, __LINE__, od_addr, od_size);
                return false;
	}
	
	// dataFormat = 0: 444
	//	 		  = 1: 422
	//	 		  = 2: 420 --> not support RGB compression
	//	 		  = 3: 400 --> not support RGB compression
	//
	// dataColor = 0: RGB Compression
	// 			 = 1: YUV Compression
	//
	if (dataColor == 0 && (dataFormat == 2 || dataFormat == 3))
	{
		VIPprintf("[OD] Gibi_od.cpp::input value conflict...");
		VIPprintf("420 or 400 doesn't support RGB compression\n");
		return false;
	}

	rtd_printk(KERN_INFO, TAG_OD_MEM, "phy addr=%x,get size=%d,h=%d,w=%d,mode=%d,Bit=%d,dataColor=%d,dataFMT=%d,\n",
		od_addr, od_size, height, width, dma_mode, FrameLimitBit, dataColor, dataFormat);

	// b802cde4 dma ctrl
	od_dma_od_dma_ctrl_reg.regValue = IoReg_Read32(OD_DMA_OD_DMA_CTRL_reg);
	od_dma_od_dma_ctrl_reg.bit_sel = 2; // Merlin5 constraint: comp_bypass=0, bit_sel=2
	od_dma_od_dma_ctrl_reg.pixel_encoding = 0; // Merlin5 constraint: comp_bypass=0, pixel_encoding=0
	od_dma_od_dma_ctrl_reg.oddma_mode_sel = dma_mode; // 0: line mode, 1: frame mode
	IoReg_Write32(OD_DMA_OD_DMA_CTRL_reg, od_dma_od_dma_ctrl_reg.regValue);

	// b802cde8 vact and hact
	od_dma_od_dma_ctrl_2_reg.regValue = IoReg_Read32(OD_DMA_OD_DMA_CTRL_2_reg);
	od_dma_od_dma_ctrl_2_reg.hact = width;
	od_dma_od_dma_ctrl_2_reg.vact = height;
	IoReg_Write32(OD_DMA_OD_DMA_CTRL_2_reg, od_dma_od_dma_ctrl_2_reg.regValue);

	// b802cd14 PQC constraint
	od_dma_oddma_pq_cmp_allocate_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_ALLOCATE_reg);
	od_dma_oddma_pq_cmp_allocate_reg.dynamic_allocate_ratio_max = 16;
	od_dma_oddma_pq_cmp_allocate_reg.dynamic_allocate_ratio_min = 13;
	// Merlin5
	od_dma_oddma_pq_cmp_allocate_reg.dynamic_allocate_line = 4;
	od_dma_oddma_pq_cmp_allocate_reg.dynamic_allocate_less = 2;
	od_dma_oddma_pq_cmp_allocate_reg.dynamic_allocate_more = 2;
	// end Merlin5
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_ALLOCATE_reg, od_dma_oddma_pq_cmp_allocate_reg.regValue);

	// b802cd0c g_ratio
	od_dma_oddma_pq_cmp_enable_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg);
	od_dma_oddma_pq_cmp_enable_reg.g_ratio = 14;
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg, od_dma_oddma_pq_cmp_enable_reg.regValue);

	// b802CD00 PQ_CMP enable
	oddma_pq_cmp_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_reg);
	oddma_pq_cmp_reg.cmp_en = 1;
	oddma_pq_cmp_reg.cmp_width_div32 = width >> 5;
	oddma_pq_cmp_reg.cmp_height = height;
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_reg, oddma_pq_cmp_reg.regValue);

	// b802cd08 Compression ratio
	oddma_pq_cmp_bit_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_BIT_reg);
	oddma_pq_cmp_bit_reg.frame_limit_bit = FrameLimitBit;
	oddma_pq_cmp_bit_reg.block_limit_bit = 0x3F;

	// DMA buffer line limit clamp
	if(dma_mode == 0)
		oddma_pq_cmp_bit_reg.line_limit_bit = oddma_pq_cmp_bit_reg.frame_limit_bit;
	else if(dma_mode == 1)
		oddma_pq_cmp_bit_reg.line_limit_bit = FrameLimitBit + 6;
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_BIT_reg, oddma_pq_cmp_bit_reg.regValue);

	// b802cd80 PQ_DECMP enable
	oddma_pq_decmp_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_DECMP_reg);
	oddma_pq_decmp_reg.decmp_en = 1;
	oddma_pq_decmp_reg.decmp_width_div32 = width >> 5;
	oddma_pq_decmp_reg.decmp_height = height;
	IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_reg, oddma_pq_decmp_reg.regValue);

	// cmp pair b802cd04, decmp pair b802cd84 setting
	oddma_pq_cmp_pair_reg.regValue =  IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_PAIR_reg);
	oddma_pq_decmp_pair_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_DECMP_PAIR_reg);
	oddma_pq_cmp_pair_reg.cmp_data_format = dataFormat;
	oddma_pq_decmp_pair_reg.decmp_data_format = dataFormat;
	oddma_pq_cmp_pair_reg.cmp_data_color = dataColor;
	oddma_pq_decmp_pair_reg.decmp_data_color = dataColor;

	if(FrameLimitBit <= 6) {
		oddma_pq_cmp_pair_reg.cmp_data_bit_width = 0;
		oddma_pq_decmp_pair_reg.decmp_data_bit_width = 0;
	} else {
		oddma_pq_cmp_pair_reg.cmp_data_bit_width = 1;
		oddma_pq_decmp_pair_reg.decmp_data_bit_width = 1;
	}

	// Merlin5
	oddma_pq_cmp_pair_reg.cmp_dic_mode_en = 1;
	oddma_pq_cmp_pair_reg.cmp_jump4_en = 1;
	oddma_pq_decmp_pair_reg.decmp_dic_mode_en = 1;
	oddma_pq_decmp_pair_reg.decmp_jump4_en = 1;
	od_dma_oddma_pq_cmp_enable_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg);
	od_dma_oddma_pq_cmp_enable_reg.first_predict_nc_mode = 1;
	od_dma_oddma_pq_cmp_enable_reg.variation_maxmin_en = 1;
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg, od_dma_oddma_pq_cmp_enable_reg.regValue);
	od_dma_oddma_pq_cmp_balance_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_BALANCE_reg);
	od_dma_oddma_pq_cmp_balance_reg.balance_rb_ov_th = 0;
	od_dma_oddma_pq_cmp_balance_reg.balance_rb_ud_th = 3;
	od_dma_oddma_pq_cmp_balance_reg.balance_rb_give = 3;
	od_dma_oddma_pq_cmp_balance_reg.balance_g_ov_th = 0;
	od_dma_oddma_pq_cmp_balance_reg.balance_g_ud_th = 3;
	od_dma_oddma_pq_cmp_balance_reg.balance_g_give = 3;
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_BALANCE_reg, od_dma_oddma_pq_cmp_balance_reg.regValue);
	// end Merlin5

	pqc_line_sum_bit = (width * oddma_pq_cmp_bit_reg.line_limit_bit + 256) / 128;

#ifdef CONFIG_BW_96B_ALIGNED
	// for cap/disp line_step (128 bits unit)
    align_value = drvifget_align_value(pqc_line_sum_bit, 6);
            burst_length = 0x30; //must be check 96 alignment,

#else
    align_value = pqc_line_sum_bit;
            burst_length = 0x20;
#endif
	if(dma_mode == 0) {
		oddma_pq_cmp_pair_reg.cmp_line_sum_bit = pqc_line_sum_bit;
		oddma_pq_decmp_pair_reg.decmp_line_sum_bit = pqc_line_sum_bit;
	}
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_PAIR_reg, oddma_pq_cmp_pair_reg.regValue);
	IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_PAIR_reg, oddma_pq_decmp_pair_reg.regValue);

	// b802cd88 Saturation enable
	oddma_pq_decmp_sat_en_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_DECMP_SAT_EN_reg);
	oddma_pq_decmp_sat_en_reg.saturation_en = 1;
	IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_SAT_EN_reg, oddma_pq_decmp_sat_en_reg.regValue);

	// b802ce3c b802cebc cap disp line_num, burst_length //must be check 96 alignment
	od_dma_oddma_wr_num_bl_wrap_ctl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg);
	od_dma_oddma_wr_num_bl_wrap_ctl_reg.cap_burst_len = burst_length;
	od_dma_oddma_wr_num_bl_wrap_ctl_reg.cap_line_num = height;
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg, od_dma_oddma_wr_num_bl_wrap_ctl_reg.regValue);
	od_dma_oddma_rd_num_bl_wrap_ctl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg);
	od_dma_oddma_rd_num_bl_wrap_ctl_reg.disp_burst_len = burst_length;
	od_dma_oddma_rd_num_bl_wrap_ctl_reg.disp_line_num = height;
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg, od_dma_oddma_rd_num_bl_wrap_ctl_reg.regValue);

	od_dma_oddma_wr_num_bl_wrap_rolling_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg);
	od_dma_oddma_rd_num_bl_wrap_rolling_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg);
	od_dma_oddma_wr_num_bl_wrap_word_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_word_reg);
	od_dma_oddma_rd_num_bl_wrap_word_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_word_reg);

	if(dma_mode == 0) { // LINE MODE
		// b802cd0c Merlin3 first_line_more_en = 0 when line mode
		od_dma_oddma_pq_cmp_enable_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg);
		od_dma_oddma_pq_cmp_enable_reg.fisrt_line_more_en = 0;
		//od_dma_oddma_pq_cmp_enable_reg.force_last2blk_pe_mode0 = 0;
		od_dma_oddma_pq_cmp_enable_reg.guarantee_max_qp_en = 0;
		IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg, od_dma_oddma_pq_cmp_enable_reg.regValue);

		// b802ce38 Cap LineStep //must be check 96 alignment
		od_dma_oddma_cap_linestep_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg);
		od_dma_oddma_cap_linestep_reg.cap_line_step = align_value; // 128 bits
		IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg, od_dma_oddma_cap_linestep_reg.regValue);

		// b802ceb8 Disp LineStep //must be check 96 alignment
		od_dma_oddma_rd_num_bl_wrap_line_step_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg);
		od_dma_oddma_rd_num_bl_wrap_line_step_reg.disp_line_step = align_value; // 128 bits
		IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg, od_dma_oddma_rd_num_bl_wrap_line_step_reg.regValue);

		// b802ce44 cap_line_128_num
		od_dma_oddma_wr_num_bl_wrap_word_reg.cap_line_128_num = pqc_line_sum_bit;

		// b802cec4 disp_line_128_num
		od_dma_oddma_rd_num_bl_wrap_word_reg.disp_line_128_num = pqc_line_sum_bit;

		// b802ce40 b802cec0 cap disp line rolling space
		od_dma_oddma_wr_num_bl_wrap_rolling_reg.cap_rolling_space = height + 2;
		od_dma_oddma_rd_num_bl_wrap_rolling_reg.disp_rolling_space = height + 2;
		IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg, od_dma_oddma_wr_num_bl_wrap_rolling_reg.regValue);
		IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg, od_dma_oddma_rd_num_bl_wrap_rolling_reg.regValue);

		// b802ce40 b802cec0 cap disp line rolling enable
		od_dma_oddma_wr_num_bl_wrap_rolling_reg.cap_rolling_enable = 1;
		od_dma_oddma_rd_num_bl_wrap_rolling_reg.disp_rolling_enable = 1;

		// b802cd04 b802cd84 cmp decmp line mode en
		oddma_pq_cmp_pair_reg.regValue =  IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_PAIR_reg);
		oddma_pq_decmp_pair_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_DECMP_PAIR_reg);
		oddma_pq_cmp_pair_reg.cmp_line_mode = 1;
		oddma_pq_decmp_pair_reg.decmp_line_mode = 1;
		oddma_pq_cmp_pair_reg.cmp_400_old_mode_en = 0;
		oddma_pq_decmp_pair_reg.decmp_400_old_mode_en = 0;
		oddma_pq_cmp_pair_reg.two_line_prediction_en = 1;
		oddma_pq_decmp_pair_reg.decmp_two_line_prediction_en = 1;
		IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_PAIR_reg, oddma_pq_cmp_pair_reg.regValue);
		IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_PAIR_reg, oddma_pq_decmp_pair_reg.regValue);
	}
	else if(dma_mode == 1) { // FRAME MODE
		// b802ce40 cap line rolling space and enable
		od_dma_oddma_wr_num_bl_wrap_rolling_reg.cap_rolling_enable = 0;

		// b802cec0 disp line rolling space and enable
		od_dma_oddma_rd_num_bl_wrap_rolling_reg.disp_rolling_enable = 0;

		// b802ce44 cap_line_128_num = 0xffff
		od_dma_oddma_wr_num_bl_wrap_word_reg.cap_line_128_num = 0xffff;

		// b802cec4 disp_line_128_num = 0xffff
		od_dma_oddma_rd_num_bl_wrap_word_reg.disp_line_128_num = 0xffff;

	}
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg, od_dma_oddma_wr_num_bl_wrap_rolling_reg.regValue);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg, od_dma_oddma_rd_num_bl_wrap_rolling_reg.regValue);
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_word_reg, od_dma_oddma_wr_num_bl_wrap_word_reg.regValue);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_word_reg, od_dma_oddma_rd_num_bl_wrap_word_reg.regValue);



#ifdef CONFIG_BW_96B_ALIGNED
    align_value = dvr_memory_alignment((unsigned long)od_addr, dvr_size_alignment(height*width*FrameLimitBit)); //96 Alignment for Bandwidth Request
    if (align_value == 0)
        BUG();
#else
    align_value = od_addr; //origin value
#endif

	rtd_printk(KERN_INFO, TAG_OD_MEM, "aligned phy addr=%x,\n", align_value);

    //burst_length = burst_length << 4; // match register reserved issue
    //od_size = od_size << 4; // match register reserved issue
	// b802ce30 b802ce34 b802ced4 b802ced8 start address
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg, align_value + burst_length); //must be check 96 alignment
	IoReg_Write32(OD_DMA_ODDMA_WR_Rule_check_up_reg, od_addr + od_size - burst_length);
	IoReg_Write32(OD_DMA_ODDMA_WR_Rule_check_low_reg, od_addr);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg, align_value + burst_length);//must be check 96 alignment
	IoReg_Write32(OD_DMA_ODDMA_RD_Rule_check_up_reg, od_addr + od_size - burst_length);
	IoReg_Write32(OD_DMA_ODDMA_RD_Rule_check_low_reg, od_addr);

	// pqc pqdc bypass disable
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_cur_422_en_mask);
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_pre_422_en_mask);
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_pdest_en_mask);
	od_dma_oddma_pqc_pqdc_compensation_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg);
	od_dma_oddma_pqc_pqdc_compensation_reg.comp_de_comp_bypass = 0;
	IoReg_Write32(OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg, od_dma_oddma_pqc_pqdc_compensation_reg.regValue);

	// b802ce08 cap enable
	od_dma_oddma_wr_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_Ctrl_reg);
	od_dma_oddma_wr_ctrl_reg.cap_en = 1;
	od_dma_oddma_wr_ctrl_reg.cap_max_outstanding = 3;
	IoReg_Write32(OD_DMA_ODDMA_WR_Ctrl_reg, od_dma_oddma_wr_ctrl_reg.regValue);

	// b802ce88 disp enable
	od_dma_oddma_rd_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_Ctrl_reg);
	od_dma_oddma_rd_ctrl_reg.disp_en = 1;
	od_dma_oddma_rd_ctrl_reg.disp_max_outstanding = 3; // Merlin4 - add for better performance of od dma bandwidth
	IoReg_Write32(OD_DMA_ODDMA_RD_Ctrl_reg, od_dma_oddma_rd_ctrl_reg.regValue);

	od_dma_oddma_pqc_pqdc_compensation_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg);
	od_dma_oddma_pqc_pqdc_compensation_reg.tr_en = 1;
	IoReg_Write32(OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg, od_dma_oddma_pqc_pqdc_compensation_reg.regValue);
	// end henry

	VIPprintf("[OD] Gibi_od.cpp::drvif_color_od_pqc() finished...\n");

	return true;
}
// 190417 added by henry - Merlin5 120hz PQC setting
// 120hz only support y mode, 422
bool drvif_color_od_pqc_120hz(UINT16 height, UINT16 width, UINT8 bit_sel, UINT8 dma_mode, UINT8 FrameLimitBit, int dataColor, int dataFormat)
{
	unsigned int od_size = 0;
	unsigned int od_addr = 0;
	unsigned int align_value =0;
	unsigned int pqc_line_sum_bit = 0;
	unsigned int burst_length = 0x20;

	od_dma_od_dma_ctrl_RBUS od_dma_od_dma_ctrl_reg;
	od_dma_od_dma_ctrl_2_RBUS od_dma_od_dma_ctrl_2_reg;
	od_dma_oddma_pq_cmp_allocate_RBUS od_dma_oddma_pq_cmp_allocate_reg;
	od_dma_oddma_pq_cmp_RBUS oddma_pq_cmp_reg;
	od_dma_oddma_pq_decmp_RBUS oddma_pq_decmp_reg;
	od_dma_oddma_pq_decmp_sat_en_RBUS oddma_pq_decmp_sat_en_reg;
	od_dma_oddma_wr_num_bl_wrap_ctl_RBUS od_dma_oddma_wr_num_bl_wrap_ctl_reg;
	od_dma_oddma_pq_cmp_enable_RBUS od_dma_oddma_pq_cmp_enable_reg;
	od_dma_oddma_pq_cmp_balance_RBUS od_dma_oddma_pq_cmp_balance_reg;
	od_dma_oddma_pq_cmp_pair_RBUS oddma_pq_cmp_pair_reg;
	od_dma_oddma_pq_decmp_pair_RBUS oddma_pq_decmp_pair_reg;
	od_dma_oddma_pq_cmp_bit_RBUS oddma_pq_cmp_bit_reg;
	od_dma_oddma_rd_num_bl_wrap_ctl_RBUS od_dma_oddma_rd_num_bl_wrap_ctl_reg;
	od_dma_oddma_wr_num_bl_wrap_rolling_RBUS od_dma_oddma_wr_num_bl_wrap_rolling_reg;
	od_dma_oddma_rd_num_bl_wrap_rolling_RBUS od_dma_oddma_rd_num_bl_wrap_rolling_reg;
	od_dma_oddma_wr_num_bl_wrap_word_RBUS od_dma_oddma_wr_num_bl_wrap_word_reg;
	od_dma_oddma_rd_num_bl_wrap_word_RBUS od_dma_oddma_rd_num_bl_wrap_word_reg;
	od_dma_oddma_wr_num_bl_wrap_line_step_RBUS od_dma_oddma_cap_linestep_reg;
	od_dma_oddma_rd_num_bl_wrap_line_step_RBUS od_dma_oddma_rd_num_bl_wrap_line_step_reg;
	od_dma_oddma_pqc_pqdc_compensation_RBUS od_dma_oddma_pqc_pqdc_compensation_reg;
	od_dma_oddma_wr_ctrl_RBUS od_dma_oddma_wr_ctrl_reg;
	od_dma_oddma_rd_ctrl_RBUS od_dma_oddma_rd_ctrl_reg;

	VIPprintf("[OD] Gibi_od.cpp::drvif_color_od_pqc_120hz() calling...\n");

#ifdef CONFIG_OPTEE_SECURE_SVP_PROTECTION
	od_size = carvedout_buf_query_secure(CARVEDOUT_SCALER_OD,(void*) &od_addr);
#else
	od_size = carvedout_buf_query(CARVEDOUT_SCALER_OD,(void*) &od_addr);
#endif
	if (od_addr == 0 || od_size == 0) {
		VIPprintf("[%s %d] ERR : %x %x\n", __func__, __LINE__, od_addr, od_size);
				return false;
	}
	
	// dataFormat = 0: 444
	//			  = 1: 422 --> 120hz only support this format
	//			  = 2: 420 
	//			  = 3: 400
	//
	// dataColor = 0: RGB Compression
	//			 = 1: YUV Compression --> 120hz only support this format
	if (dataColor != 1 || dataFormat != 1)
	{
		VIPprintf("[OD] Gibi_od.cpp::input value conflict...");
		VIPprintf("OD 120hz only support y mode, 422 !\n");
		return false;
	}

	rtd_printk(KERN_INFO, TAG_OD_MEM, "phy addr=%x,get size=%d,h=%d,w=%d,mode=%d,Bit=%d,dataColor=%d,dataFMT=%d,\n",
		od_addr, od_size, height, width, dma_mode, FrameLimitBit, dataColor, dataFormat);

	// b802cde4 dma ctrl
	od_dma_od_dma_ctrl_reg.regValue = IoReg_Read32(OD_DMA_OD_DMA_CTRL_reg);
	od_dma_od_dma_ctrl_reg.bit_sel = 2; // Merlin5 constraint: comp_bypass=0, bit_sel=2
	od_dma_od_dma_ctrl_reg.pixel_encoding = 0; // Merlin5 constraint: comp_bypass=0, pixel_encoding=0
	od_dma_od_dma_ctrl_reg.oddma_mode_sel = dma_mode; // 0: line mode, 1: frame mode
	IoReg_Write32(OD_DMA_OD_DMA_CTRL_reg, od_dma_od_dma_ctrl_reg.regValue);

	// b802cde8 vact and hact
	od_dma_od_dma_ctrl_2_reg.regValue = IoReg_Read32(OD_DMA_OD_DMA_CTRL_2_reg);
	od_dma_od_dma_ctrl_2_reg.hact = width;
	od_dma_od_dma_ctrl_2_reg.vact = height;
	IoReg_Write32(OD_DMA_OD_DMA_CTRL_2_reg, od_dma_od_dma_ctrl_2_reg.regValue);

	// b802cd14 PQC constraint
	od_dma_oddma_pq_cmp_allocate_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_ALLOCATE_reg);
	od_dma_oddma_pq_cmp_allocate_reg.dynamic_allocate_ratio_max = 16;
	od_dma_oddma_pq_cmp_allocate_reg.dynamic_allocate_ratio_min = 13;
	// Merlin5
	od_dma_oddma_pq_cmp_allocate_reg.dynamic_allocate_line = 4;
	od_dma_oddma_pq_cmp_allocate_reg.dynamic_allocate_less = 2;
	od_dma_oddma_pq_cmp_allocate_reg.dynamic_allocate_more = 2;
	// end Merlin5
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_ALLOCATE_reg, od_dma_oddma_pq_cmp_allocate_reg.regValue);

	// b802cd0c g_ratio
	od_dma_oddma_pq_cmp_enable_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg);
	od_dma_oddma_pq_cmp_enable_reg.g_ratio = 14;
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg, od_dma_oddma_pq_cmp_enable_reg.regValue);

	// b802CD00 PQ_CMP enable
	oddma_pq_cmp_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_reg);
	oddma_pq_cmp_reg.cmp_en = 1;
	oddma_pq_cmp_reg.cmp_width_div32 = width >> 5;
	oddma_pq_cmp_reg.cmp_height = height;
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_reg, oddma_pq_cmp_reg.regValue);

	// b802cd08 Compression ratio
	oddma_pq_cmp_bit_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_BIT_reg);
	oddma_pq_cmp_bit_reg.frame_limit_bit = FrameLimitBit;
	oddma_pq_cmp_bit_reg.block_limit_bit = 0x3F;

	// DMA buffer line limit clamp
	if(dma_mode == 0)
		oddma_pq_cmp_bit_reg.line_limit_bit = oddma_pq_cmp_bit_reg.frame_limit_bit;
	else if(dma_mode == 1)
		oddma_pq_cmp_bit_reg.line_limit_bit = FrameLimitBit + 6;
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_BIT_reg, oddma_pq_cmp_bit_reg.regValue);

	// b802cd80 PQ_DECMP enable
	oddma_pq_decmp_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_DECMP_reg);
	oddma_pq_decmp_reg.decmp_en = 1;
	oddma_pq_decmp_reg.decmp_width_div32 = width >> 5;
	oddma_pq_decmp_reg.decmp_height = height;
	IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_reg, oddma_pq_decmp_reg.regValue);
	
	// cmp pair b802cd04, decmp pair b802cd84 setting
	oddma_pq_cmp_pair_reg.regValue =  IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_PAIR_reg);
	oddma_pq_decmp_pair_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_DECMP_PAIR_reg);
	oddma_pq_cmp_pair_reg.cmp_data_format = dataFormat; // 120hz 
	oddma_pq_decmp_pair_reg.decmp_data_format = dataFormat; // 120hz 
	oddma_pq_cmp_pair_reg.cmp_data_color = dataColor; // 120hz 
	oddma_pq_decmp_pair_reg.decmp_data_color = dataColor; // 120hz 
	oddma_pq_cmp_pair_reg.cmp_data_bit_width = 1; // 120hz 
	oddma_pq_decmp_pair_reg.decmp_data_bit_width = 1; // 120hz 
	oddma_pq_cmp_pair_reg.cmp_qp_mode = 1; // 120hz 
	oddma_pq_decmp_pair_reg.decmp_qp_mode= 1; // 120hz
	
	// Merlin5
	oddma_pq_cmp_pair_reg.cmp_dic_mode_en = 1;
	oddma_pq_cmp_pair_reg.cmp_jump4_en = 1;
	oddma_pq_decmp_pair_reg.decmp_dic_mode_en = 1;
	oddma_pq_decmp_pair_reg.decmp_jump4_en = 1;
	od_dma_oddma_pq_cmp_enable_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg);
	od_dma_oddma_pq_cmp_enable_reg.first_predict_nc_mode = 1;
	od_dma_oddma_pq_cmp_enable_reg.variation_maxmin_en = 1;
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg, od_dma_oddma_pq_cmp_enable_reg.regValue);
	od_dma_oddma_pq_cmp_balance_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_BALANCE_reg);
	od_dma_oddma_pq_cmp_balance_reg.balance_rb_ov_th = 0;
	od_dma_oddma_pq_cmp_balance_reg.balance_rb_ud_th = 3;
	od_dma_oddma_pq_cmp_balance_reg.balance_rb_give = 3;
	od_dma_oddma_pq_cmp_balance_reg.balance_g_ov_th = 0;
	od_dma_oddma_pq_cmp_balance_reg.balance_g_ud_th = 3;
	od_dma_oddma_pq_cmp_balance_reg.balance_g_give = 3;
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_BALANCE_reg, od_dma_oddma_pq_cmp_balance_reg.regValue);
	// end Merlin5

	pqc_line_sum_bit = (width * oddma_pq_cmp_bit_reg.line_limit_bit + 256) / 128 + ((width * oddma_pq_cmp_bit_reg.line_limit_bit + 256)%128!=0);

#ifdef CONFIG_BW_96B_ALIGNED
	// for cap line_step (128 bits unit)
    align_value = drvifget_align_value(pqc_line_sum_bit, 6);
	burst_length = 0x30; //must be check 96 alignment,

#else
    align_value = pqc_line_sum_bit;
	burst_length = 0x20;
#endif
	if(dma_mode == 0) {
		oddma_pq_cmp_pair_reg.cmp_line_sum_bit = align_value;
		oddma_pq_decmp_pair_reg.decmp_line_sum_bit = align_value;
	}
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_PAIR_reg, oddma_pq_cmp_pair_reg.regValue);
	IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_PAIR_reg, oddma_pq_decmp_pair_reg.regValue);

	// b802cd88 Saturation enable
	oddma_pq_decmp_sat_en_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_DECMP_SAT_EN_reg);
	oddma_pq_decmp_sat_en_reg.saturation_en = 1;
	IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_SAT_EN_reg, oddma_pq_decmp_sat_en_reg.regValue);

	// b802ce3c b802cebc cap disp line_num, burst_length //must be check 96 alignment
	od_dma_oddma_wr_num_bl_wrap_ctl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg);
	od_dma_oddma_wr_num_bl_wrap_ctl_reg.cap_burst_len = burst_length;
	od_dma_oddma_wr_num_bl_wrap_ctl_reg.cap_line_num = height;
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg, od_dma_oddma_wr_num_bl_wrap_ctl_reg.regValue);
	od_dma_oddma_rd_num_bl_wrap_ctl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg);
	od_dma_oddma_rd_num_bl_wrap_ctl_reg.disp_burst_len = burst_length;
	od_dma_oddma_rd_num_bl_wrap_ctl_reg.disp_line_num = height;
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg, od_dma_oddma_rd_num_bl_wrap_ctl_reg.regValue);

	od_dma_oddma_wr_num_bl_wrap_rolling_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg);
	od_dma_oddma_rd_num_bl_wrap_rolling_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg);
	od_dma_oddma_wr_num_bl_wrap_word_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_word_reg);
	od_dma_oddma_rd_num_bl_wrap_word_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_word_reg);

	if(dma_mode == 0) { // LINE MODE
		// b802cd0c Merlin3 first_line_more_en = 0 when line mode
		od_dma_oddma_pq_cmp_enable_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg);
		od_dma_oddma_pq_cmp_enable_reg.fisrt_line_more_en = 0;
		//od_dma_oddma_pq_cmp_enable_reg.force_last2blk_pe_mode0 = 0;
		od_dma_oddma_pq_cmp_enable_reg.guarantee_max_qp_en = 0;
		IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_ENABLE_reg, od_dma_oddma_pq_cmp_enable_reg.regValue);

		// b802ce38 Cap LineStep //must be check 96 alignment
		od_dma_oddma_cap_linestep_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg);
		od_dma_oddma_cap_linestep_reg.cap_line_step = align_value; // 128 bits
		IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg, od_dma_oddma_cap_linestep_reg.regValue);

		// b802ceb8 Disp LineStep //must be check 96 alignment
		od_dma_oddma_rd_num_bl_wrap_line_step_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg);
		od_dma_oddma_rd_num_bl_wrap_line_step_reg.disp_line_step = align_value; // 128 bits
		IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg, od_dma_oddma_rd_num_bl_wrap_line_step_reg.regValue);

		// b802ce44 cap_line_128_num
		od_dma_oddma_wr_num_bl_wrap_word_reg.cap_line_128_num = align_value;

		// b802cec4 disp_line_128_num
		od_dma_oddma_rd_num_bl_wrap_word_reg.disp_line_128_num = align_value;

		// b802ce40 b802cec0 cap disp line rolling space
		od_dma_oddma_wr_num_bl_wrap_rolling_reg.cap_rolling_space = height + 1;
		od_dma_oddma_rd_num_bl_wrap_rolling_reg.disp_rolling_space = height + 1;
		IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg, od_dma_oddma_wr_num_bl_wrap_rolling_reg.regValue);
		IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg, od_dma_oddma_rd_num_bl_wrap_rolling_reg.regValue);

		// b802ce40 b802cec0 cap disp line rolling enable
		od_dma_oddma_wr_num_bl_wrap_rolling_reg.cap_rolling_enable = 1;
		od_dma_oddma_rd_num_bl_wrap_rolling_reg.disp_rolling_enable = 1;

		// b802cd04 b802cd84 cmp decmp line mode en
		oddma_pq_cmp_pair_reg.regValue =  IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_PAIR_reg);
		oddma_pq_decmp_pair_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_DECMP_PAIR_reg);
		oddma_pq_cmp_pair_reg.cmp_line_mode = 1;
		oddma_pq_decmp_pair_reg.decmp_line_mode = 1;
		oddma_pq_cmp_pair_reg.cmp_400_old_mode_en = 0;
		oddma_pq_decmp_pair_reg.decmp_400_old_mode_en = 0;
		oddma_pq_cmp_pair_reg.two_line_prediction_en = 1;
		oddma_pq_decmp_pair_reg.decmp_two_line_prediction_en = 1;
		IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_PAIR_reg, oddma_pq_cmp_pair_reg.regValue);
		IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_PAIR_reg, oddma_pq_decmp_pair_reg.regValue);
	}
	else if(dma_mode == 1) { // FRAME MODE
		// b802ce40 cap line rolling space and enable
		od_dma_oddma_wr_num_bl_wrap_rolling_reg.cap_rolling_enable = 0;

		// b802cec0 disp line rolling space and enable
		od_dma_oddma_rd_num_bl_wrap_rolling_reg.disp_rolling_enable = 0;

		// b802ce44 cap_line_128_num = 0xffff
		od_dma_oddma_wr_num_bl_wrap_word_reg.cap_line_128_num = 0xffff;

		// b802cec4 disp_line_128_num = 0xffff
		od_dma_oddma_rd_num_bl_wrap_word_reg.disp_line_128_num = 0xffff;

	}
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg, od_dma_oddma_wr_num_bl_wrap_rolling_reg.regValue);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg, od_dma_oddma_rd_num_bl_wrap_rolling_reg.regValue);
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_word_reg, od_dma_oddma_wr_num_bl_wrap_word_reg.regValue);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_word_reg, od_dma_oddma_rd_num_bl_wrap_word_reg.regValue);



#ifdef CONFIG_BW_96B_ALIGNED
    align_value = dvr_memory_alignment((unsigned long)od_addr, dvr_size_alignment(height*width*FrameLimitBit)); //96 Alignment for Bandwidth Request
    if (align_value == 0)
        BUG();
#else
    align_value = od_addr; //origin value
#endif

	rtd_printk(KERN_INFO, TAG_OD_MEM, "aligned phy addr=%x,\n", align_value);

    //burst_length = burst_length << 4; // match register reserved issue
    //od_size = od_size << 4; // match register reserved issue
	// b802ce30 b802ce34 b802ced4 b802ced8 start address
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg, align_value + burst_length); //must be check 96 alignment
	IoReg_Write32(OD_DMA_ODDMA_WR_Rule_check_up_reg, od_addr + od_size - burst_length);
	IoReg_Write32(OD_DMA_ODDMA_WR_Rule_check_low_reg, od_addr);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg, align_value + burst_length);//must be check 96 alignment
	IoReg_Write32(OD_DMA_ODDMA_RD_Rule_check_up_reg, od_addr + od_size - burst_length);
	IoReg_Write32(OD_DMA_ODDMA_RD_Rule_check_low_reg, od_addr);

	// pqc pqdc bypass disable
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_cur_422_en_mask);
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_pre_422_en_mask);
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_pdest_en_mask);
	od_dma_oddma_pqc_pqdc_compensation_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg);
	od_dma_oddma_pqc_pqdc_compensation_reg.comp_de_comp_bypass = 0;
	IoReg_Write32(OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg, od_dma_oddma_pqc_pqdc_compensation_reg.regValue);

	// b802ce08 cap enable
	od_dma_oddma_wr_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_Ctrl_reg);
	od_dma_oddma_wr_ctrl_reg.cap_en = 1;
	od_dma_oddma_wr_ctrl_reg.cap_max_outstanding = 3;
	IoReg_Write32(OD_DMA_ODDMA_WR_Ctrl_reg, od_dma_oddma_wr_ctrl_reg.regValue);

	// b802ce88 disp enable
	od_dma_oddma_rd_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_Ctrl_reg);
	od_dma_oddma_rd_ctrl_reg.disp_en = 1;
	od_dma_oddma_rd_ctrl_reg.disp_max_outstanding = 3; // Merlin4 - add for better performance of od dma bandwidth
	IoReg_Write32(OD_DMA_ODDMA_RD_Ctrl_reg, od_dma_oddma_rd_ctrl_reg.regValue);

	od_dma_oddma_pqc_pqdc_compensation_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg);
	od_dma_oddma_pqc_pqdc_compensation_reg.tr_en = 1;
	IoReg_Write32(OD_DMA_ODDMA_PQC_PQDC_COMPENSATION_reg, od_dma_oddma_pqc_pqdc_compensation_reg.regValue);
	// end henry

	VIPprintf("[OD] Gibi_od.cpp::drvif_color_od_pqc_120hz() finished...\n");

	return true;
}

// OD IP enable
void drvif_color_od(unsigned char bOD)
{
	od_od_ctrl_RBUS od_ctrl_reg;
	od_od_ctrl2_RBUS od_ctrl2_reg;
	od_od_noise_reduction_ctrl_RBUS noise_reduction_ctrl_reg;


	od_ctrl2_reg.regValue = IoReg_Read32(OD_OD_CTRL2_reg);
	od_ctrl2_reg.od_delta_gain_b = 64;
	od_ctrl2_reg.od_delta_gain_g = 64;
	od_ctrl2_reg.od_delta_gain_r = 64;
	od_ctrl2_reg.od_delta_gain_w = 64;
	IoReg_Write32(OD_OD_CTRL2_reg, od_ctrl2_reg.regValue);


	od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
	if (bOD == 0) {
		//od_ctrl_reg.od_fun_sel = 0; //mac6p removed
		od_ctrl_reg.od_en = 0;
	} else {
		//od_ctrl_reg.od_fun_sel = 1; //mac6p removed
		od_ctrl_reg.od_en = 1;
	}
	IoReg_Write32(OD_OD_CTRL_reg, od_ctrl_reg.regValue);

	/* default nr*/
	noise_reduction_ctrl_reg.regValue = IoReg_Read32(OD_od_Noise_reduction_ctrl_reg);
	noise_reduction_ctrl_reg.od_nr_mode = 0;
	noise_reduction_ctrl_reg.od_b_nr_en = 1;
	noise_reduction_ctrl_reg.od_g_nr_en = 1;
	noise_reduction_ctrl_reg.od_r_nr_en = 1;
	noise_reduction_ctrl_reg.od_b_nr_thd = 3;
	noise_reduction_ctrl_reg.od_g_nr_thd = 3;
	noise_reduction_ctrl_reg.od_r_nr_thd = 3;
	IoReg_Write32(OD_od_Noise_reduction_ctrl_reg, noise_reduction_ctrl_reg.regValue);

}


// henry 180209
// === arguement ===
// tableType, 0:delta table, 1:target table
// color channel, 0:red, 1:green, 2:blue, 3:rgb, 4:white
//void drvif_color_od_table_seperate(unsigned int *pODtable, unsigned char tableType, unsigned char colorChannel)
void drvif_color_od_table_seperate(unsigned int *pODtable, unsigned char tableType, unsigned char colorChannel)
{
	od_od_ctrl_RBUS OD_OD_CTRL_rbus;
	int tmp;
	int i ;//, count = 30;
	od_od_lut_addr_RBUS lut_addr_reg;

	OD_OD_CTRL_rbus.regValue = IoReg_Read32(OD_OD_CTRL_reg);
	tmp = OD_OD_CTRL_rbus.od_en;
	OD_OD_CTRL_rbus.od_en = 0;
	IoReg_Write32(OD_OD_CTRL_reg, OD_OD_CTRL_rbus.regValue);

	lut_addr_reg.regValue = IoReg_Read32(OD_OD_LUT_ADDR_reg);
	lut_addr_reg.table_type = tableType;
	lut_addr_reg.od_lut_ax_en = 1;
	lut_addr_reg.od_lut_ax_mode = 0;
	lut_addr_reg.od_lut_adr_mode = 0; //col(cur) indexfirst
	lut_addr_reg.od_lut_column_addr = 0;
	lut_addr_reg.od_lut_row_addr = 0;
	// 180209 henry
	// 255 means called by rtice, and rtice's button will set this item
	if(colorChannel!=255)
		lut_addr_reg.od_lut_sel = colorChannel;
	IoReg_Write32(OD_OD_LUT_ADDR_reg, lut_addr_reg.regValue);

	for (i = 0; i < OD_table_length; i++) {
		if(i%17!=16) {
			VIPprintf("[OD][write] pre:%d cur:%d %d\n",i/17,i%17,*(pODtable+i)+(i%17)*16);
		}
		else {
			VIPprintf("[OD][write] pre:%d cur:%d %d\n",i/17,i%17,*(pODtable+i)+255);
		}
		IoReg_Write32(OD_OD_LUT_DATA_reg, *(pODtable+i));
	}
	IoReg_ClearBits(OD_OD_LUT_ADDR_reg, OD_OD_LUT_ADDR_od_lut_ax_en_mask); // _BIT16

	if(tmp==1)
		OD_OD_CTRL_rbus.od_en = 1;
	else
		OD_OD_CTRL_rbus.od_en = 0;
	IoReg_Write32(OD_OD_CTRL_reg, OD_OD_CTRL_rbus.regValue);
}
unsigned int od_table_transformed[OD_table_length];
void drvif_color_od_table_seperate_write(unsigned int *pODtable, unsigned char tableType, char channel)
{
	int i;//, count = 30;
	od_od_lut_addr_RBUS lut_addr_reg;
	lut_addr_reg.regValue = IoReg_Read32(OD_OD_LUT_ADDR_reg);
	lut_addr_reg.table_type = tableType;
	lut_addr_reg.od_lut_sel = channel;
	lut_addr_reg.od_lut_ax_en = 1;
	lut_addr_reg.od_lut_ax_mode = 0;
	lut_addr_reg.od_lut_adr_mode = 0; //col(cur) indexfirst
	lut_addr_reg.od_lut_column_addr = 0;
	lut_addr_reg.od_lut_row_addr = 0;
	IoReg_Write32(OD_OD_LUT_ADDR_reg, lut_addr_reg.regValue);
	//rtd_printk(KERN_EMERG, TAG_NAME, "drvif_color_od_table_seperate_write, channel = %d\n", channel);
	for (i = 0; i < OD_table_length; i++)
		od_table_transformed[i] = *(pODtable+i);

	for (i = 0; i < OD_table_length; i++) {
		IoReg_Write32(OD_OD_LUT_DATA_reg, od_table_transformed[i]);
		
		//rtd_printk(KERN_EMERG, TAG_NAME, "drvif_color_od_table_seperate_write, od_do_resume = %d\n", *(pODtable+i));
	}
	IoReg_ClearBits(OD_OD_LUT_ADDR_reg, _BIT16);
}
void drvif_color_od_table_seperate_read(unsigned char *pODtable, unsigned char channel)
{
	od_od_lut_addr_RBUS lut_addr_reg;
	int i;
	unsigned int ODtable_tmp[OD_table_length];
	char ODtable_sign[OD_table_length];
	unsigned char remain;

	lut_addr_reg.regValue = IoReg_Read32(OD_OD_LUT_ADDR_reg);
	lut_addr_reg.od_lut_row_addr = 0;
	lut_addr_reg.table_type = 0;
	lut_addr_reg.od_lut_column_addr = 0;
	lut_addr_reg.od_lut_sel = channel;
	lut_addr_reg.od_lut_ax_en = 1; // auto rolling index
	lut_addr_reg.od_lut_adr_mode = 0; //cur index first
	IoReg_Write32(OD_OD_LUT_ADDR_reg, lut_addr_reg.regValue);

	// target table
	if(lut_addr_reg.table_type)
	{
		for (i = 0; i < OD_table_length; i++){
			RBus_UInt32 regValue_tmp = IoReg_Read32(OD_OD_LUT_DATA_reg);
			// 33 to 17 table
			//*(pODtable+i) = ( regValue_tmp >> 24);

			/* henry merlin3 OD table only 17x17 */
			*(pODtable+i) = regValue_tmp;
		}
	}
	// delta table
	else
	{

		for (i = 0; i < OD_table_length; i++) {
			ODtable_tmp[i] = IoReg_Read32(OD_OD_LUT_DATA_reg);

			remain = i%17;

			// 33 to 17 table
			//ODtable_sign[i] = (char)(ODtable_tmp[i] >> 24);

			/* henry merlin3 OD table only 17x17 */
			ODtable_sign[i] = (char)(ODtable_tmp[i]);

			// add cur pixel value (to target table)
			if(remain != 16)
				*(pODtable+i) = ODtable_sign[i] + 16 * remain;
			else
				*(pODtable+i) = ODtable_sign[i] + 255;

		}

	}
	IoReg_ClearBits(OD_OD_LUT_ADDR_reg, _BIT16);
}

void drvif_color_od_table_read(unsigned char *pODtable)
{
    int i;
	od_od_ctrl_RBUS OD_OD_CTRL_rbus;
	int tmp;
	unsigned char remain;
	od_od_lut_addr_RBUS lut_addr_reg;
	unsigned int ODtable_tmp[OD_table_length];
	char ODtable_sign[OD_table_length];

	OD_OD_CTRL_rbus.regValue = IoReg_Read32(OD_OD_CTRL_reg);
	tmp = OD_OD_CTRL_rbus.od_en;
	OD_OD_CTRL_rbus.od_en = 0;
	IoReg_Write32(OD_OD_CTRL_reg, OD_OD_CTRL_rbus.regValue);

	lut_addr_reg.regValue = IoReg_Read32(OD_OD_LUT_ADDR_reg);
	lut_addr_reg.od_lut_row_addr = 0;
	lut_addr_reg.od_lut_column_addr = 0;
	lut_addr_reg.od_lut_ax_en = 1; // auto rolling index
	lut_addr_reg.od_lut_adr_mode = 0; //cur index first
	IoReg_Write32(OD_OD_LUT_ADDR_reg, lut_addr_reg.regValue);

	// target table
	if(lut_addr_reg.table_type)
	{
		for (i = 0; i < OD_table_length; i++){
			RBus_UInt32 regValue_tmp = IoReg_Read32(OD_OD_LUT_DATA_reg);
			// 33 to 17 table
			//*(pODtable+i) = ( regValue_tmp >> 24);

			/* henry merlin3 OD table only 17x17 */
			*(pODtable+i) = regValue_tmp;
		}
	}
	// delta table
	else
	{

		for (i = 0; i < OD_table_length; i++) {
			ODtable_tmp[i] = IoReg_Read32(OD_OD_LUT_DATA_reg);

			remain = i%17;

			// 33 to 17 table
			//ODtable_sign[i] = (char)(ODtable_tmp[i] >> 24);

			/* henry merlin3 OD table only 17x17 */
			ODtable_sign[i] = (char)(ODtable_tmp[i]);

			// add cur pixel value (to target table)
			if(remain != 16)
				*(pODtable+i) = ODtable_sign[i] + 16 * remain;
			else
				*(pODtable+i) = ODtable_sign[i] + 255;

			VIPprintf("[OD][read]%d %d %d %d\n",i/17,i%17,*(pODtable+i), IoReg_Read32(OD_OD_LUT_DATA_reg));
		}

	}
	IoReg_ClearBits(OD_OD_LUT_ADDR_reg, OD_OD_LUT_ADDR_od_lut_ax_en_mask); // _BIT16

	  if(tmp==1)
	    OD_OD_CTRL_rbus.od_en = 1;
	  else
	    OD_OD_CTRL_rbus.od_en = 0;
	  IoReg_Write32(OD_OD_CTRL_reg, OD_OD_CTRL_rbus.regValue);
}
// end henry

void drvif_color_od_table(unsigned int *pODtable, unsigned char targetmode)
{
	int i;
	od_od_lut_addr_RBUS lut_addr_reg;
	
/*	Henry Merlin5 doesn't share sram with PCID after merlin2
	int count = 30;
	ppoverlay_display_timing_ctrl2_RBUS display_timing_ctrl2_reg;
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
	struct timespec64 timeout;
	timeout = timespec_to_timespec64( ns_to_timespec(1000 * 1000));
#else
	struct timespec timeout;
	timeout = ns_to_timespec(1000 * 1000);
#endif

	display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	while((display_timing_ctrl2_reg.pcid2_en || display_timing_ctrl2_reg.pcid_en) && count-- > 0)
	{
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
		hrtimer_nanosleep(&timeout, HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#else
		hrtimer_nanosleep(&timeout, NULL, HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#endif
		display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	}
*/
	lut_addr_reg.regValue = IoReg_Read32(OD_OD_LUT_ADDR_reg);
	lut_addr_reg.table_type = targetmode;
	lut_addr_reg.od_lut_sel = 3;
	lut_addr_reg.od_lut_ax_en = 1;
	lut_addr_reg.od_lut_ax_mode = 0;
	lut_addr_reg.od_lut_adr_mode = 0; //col(cur) indexfirst
	//lut_addr_reg.od_lut_adr_mode = 1; //row(pre) indexfirst
	lut_addr_reg.od_lut_column_addr = 0;
	lut_addr_reg.od_lut_row_addr = 0;
	IoReg_Write32(OD_OD_LUT_ADDR_reg, lut_addr_reg.regValue);

	for (i = 0; i < OD_table_length; i++) {
		IoReg_Write32(OD_OD_LUT_DATA_reg, *(pODtable+i));
		VIPprintf("[VPQ][OD]Table[%d]=0x%x\n",i,*(pODtable+i));
	}

	/* disable table access*/
	IoReg_ClearBits(OD_OD_LUT_ADDR_reg, OD_OD_LUT_ADDR_od_lut_ax_en_mask); // _BIT16   
}

void drvif_color_od_gain(unsigned char ucGain)
{
	od_od_ctrl2_RBUS od_ctrl2_reg;

	if (ucGain > 127)
		ucGain = 127;

	od_ctrl2_reg.regValue = IoReg_Read32(OD_OD_CTRL2_reg);
	od_ctrl2_reg.od_delta_gain_r = ucGain;
	od_ctrl2_reg.od_delta_gain_g = ucGain;
	od_ctrl2_reg.od_delta_gain_b = ucGain;
	od_ctrl2_reg.od_delta_gain_w = ucGain;

	IoReg_Write32(OD_OD_CTRL1_reg, od_ctrl2_reg.regValue);
}

unsigned char drvif_color_get_od_gain(unsigned char channel)
{

	od_od_ctrl2_RBUS od_ctrl2_reg;
	od_ctrl2_reg.regValue = IoReg_Read32(OD_OD_CTRL2_reg);

	switch(channel)
	{
		case 0:
		default:
			return od_ctrl2_reg.od_delta_gain_r;
		case 1:
			return od_ctrl2_reg.od_delta_gain_g;
		case 2:
			return od_ctrl2_reg.od_delta_gain_b;
		case 3:
			return od_ctrl2_reg.od_delta_gain_w;
	}
}

void drvif_color_safe_od_enable(unsigned char bEnable, unsigned char bOD_OnOff_Switch)
{
	// henry Merlin3 has fixed hw bug
	return;
#if 0

	UINT32 timeoutcnt = 0x032500;
	od_od_ctrl_RBUS od_ctrl_reg;

	// OD function db on
	IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_en_dbf_en_mask); //_BIT24
	// OD function db read sel: reg
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_read_level_mask); //_BIT25

	if (!bEnable) { // OD Disable
		if (bOD_OnOff_Switch) {
			// OD off
			IoReg_ClearBits(OD_OD_CTRL_reg, OD_OD_CTRL_od_en_mask|OD_OD_CTRL_od_fun_sel_mask); //_BIT0|_BIT1

			// OD function db apply
			IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_apply_mask); //_BIT26

			// wait vsync
			od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
			while((od_ctrl_reg.regValue & 0x3) != 0 && timeoutcnt-- != 0) {
				od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
			}
		}

		IoReg_Write32(OD_DMA_ODDMA_Cap_BoundaryAddr1_reg, IoReg_Read32(OD_DMA_ODDMA_Cap_BoundaryAddr2_reg));
	} else { // OD Enable
		od_od_ctrl1_RBUS od_ctrl1_reg;

		IoReg_Write32(OD_DMA_ODDMA_Cap_BoundaryAddr1_reg, IoReg_Read32(OD_DMA_ODDMA_Cap_L2_Start_reg)+0x800000-0x20);

		IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_apply_mask); //_BIT26
		od_ctrl1_reg.regValue = IoReg_Read32(OD_OD_CTRL1_reg);
		while(od_ctrl1_reg.db_apply == 0x1 && timeoutcnt-- != 0) {
			od_ctrl1_reg.regValue = IoReg_Read32(OD_OD_CTRL1_reg);
		}

		if (bOD_OnOff_Switch) {
			// OD on
			IoReg_SetBits(OD_OD_CTRL_reg, OD_OD_CTRL_od_en_mask|OD_OD_CTRL_od_fun_sel_mask); //_BIT0|_BIT1

			// OD function db apply
			IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_apply_mask); //_BIT26

			// wait vsync
			timeoutcnt = 0x032500;
			od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
			while((od_ctrl_reg.regValue & 0x3) != 0x3 && timeoutcnt-- != 0) {
				od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
			}
		}
	}

	// OD function db off
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_en_dbf_en_mask); //_BIT24
	// OD function db read sel: temp
	IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_read_level_mask); //_BIT25
#endif
}

void drvif_color_set_od_bits(unsigned char FrameLimitBit, unsigned char input_bit_sel)
{
	od_od_ctrl_RBUS od_ctrl_reg;
	od_od_ctrl1_RBUS od_ctrl1_reg;
	od_dma_od_dma_ctrl_RBUS od_dma_od_dma_ctrl_reg;
	od_dma_od_dma_ctrl_2_RBUS od_dma_od_dma_ctrl_2_reg;
	od_dma_oddma_pq_cmp_bit_RBUS oddma_pq_cmp_bit_reg;
	od_dma_oddma_wr_num_bl_wrap_word_RBUS od_dma_oddma_wr_num_bl_wrap_word_reg;
	od_dma_oddma_rd_num_bl_wrap_word_RBUS od_dma_oddma_rd_num_bl_wrap_word_reg;
	od_dma_oddma_wr_num_bl_wrap_line_step_RBUS od_dma_oddma_cap_linestep_reg;
	od_dma_oddma_rd_num_bl_wrap_line_step_RBUS od_dma_oddma_rd_num_bl_wrap_line_step_reg;
	od_dma_oddma_pq_cmp_pair_RBUS oddma_pq_cmp_pair_reg;
	od_dma_oddma_pq_decmp_pair_RBUS oddma_pq_decmp_pair_reg;

	int timeoutcnt = 0x032500;
	unsigned char dma_mode;
	unsigned char od_enable_status = 0;
	unsigned short width;
	unsigned int align_value = 0;
	unsigned int pqc_line_sum_bit = 0;

	od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
	od_enable_status = (od_ctrl_reg.regValue & OD_OD_CTRL_od_en_mask)?1:0; // _BIT0

	oddma_pq_cmp_bit_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_BIT_reg);
	if (oddma_pq_cmp_bit_reg.frame_limit_bit == FrameLimitBit && (od_enable_status == (FrameLimitBit?1:0)))
        return;

	// disable OD
	if (od_enable_status) {
		// OD function db on
		IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_en_dbf_en_mask); //_BIT24
		// OD function db read sel: reg
		IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_read_level_mask); //_BIT25

		IoReg_ClearBits(OD_OD_CTRL_reg, OD_OD_CTRL_od_en_mask); //_BIT0
		IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_apply_mask); //_BIT26
		od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
		while((od_ctrl_reg.regValue & OD_OD_CTRL_od_en_mask) != 0 && (timeoutcnt--) > 0) {
			od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
		}
	}
	if (timeoutcnt <= 0) {
		rtd_printk(KERN_EMERG, TAG_OD_MEM, "drvif_color_set_od_bits, time out 0, timeout cnt = %d, od_ctrl_reg.regValue=%x,\n", timeoutcnt, od_ctrl_reg.regValue);
	}
	
	if (FrameLimitBit > 0) {
		// pqc hw performance limitation
		if (Get_DISPLAY_REFRESH_RATE()==120 && FrameLimitBit < 8)
			FrameLimitBit = 8;
		else if (Get_DISPLAY_REFRESH_RATE()==60 && FrameLimitBit < 2)
			FrameLimitBit = 2;
		
		// b802cdc0 dma ctrl
		od_dma_od_dma_ctrl_reg.regValue = IoReg_Read32(OD_DMA_OD_DMA_CTRL_reg);
		dma_mode = od_dma_od_dma_ctrl_reg.oddma_mode_sel;
		od_dma_od_dma_ctrl_reg.bit_sel = input_bit_sel;
		if (Get_DISPLAY_REFRESH_RATE()==120)
			od_dma_od_dma_ctrl_reg.bit_sel = 2;
		IoReg_Write32(OD_DMA_OD_DMA_CTRL_reg, od_dma_od_dma_ctrl_reg.regValue);

		od_dma_od_dma_ctrl_2_reg.regValue = IoReg_Read32(OD_DMA_OD_DMA_CTRL_2_reg);
		width = od_dma_od_dma_ctrl_2_reg.hact;

		// b802cd08 Compression ratio
		//oddma_pq_cmp_bit_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_BIT_reg);
		oddma_pq_cmp_bit_reg.frame_limit_bit = FrameLimitBit;

		// DMA buffer line limit clamp
		if(dma_mode == 0)
			oddma_pq_cmp_bit_reg.line_limit_bit = oddma_pq_cmp_bit_reg.frame_limit_bit;
		else if(dma_mode == 1)
			oddma_pq_cmp_bit_reg.line_limit_bit = FrameLimitBit + 6;
		IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_BIT_reg, oddma_pq_cmp_bit_reg.regValue);
		oddma_pq_cmp_pair_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_PAIR_reg);
		oddma_pq_decmp_pair_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_DECMP_PAIR_reg);

		if(FrameLimitBit <= 6) {
			// 8 bit
			oddma_pq_cmp_pair_reg.cmp_data_bit_width = 0;
			oddma_pq_decmp_pair_reg.decmp_data_bit_width = 0;
		}
		else {
			// 10 bit
			oddma_pq_cmp_pair_reg.cmp_data_bit_width = 1;
			oddma_pq_decmp_pair_reg.decmp_data_bit_width = 1;
		}
		if (Get_DISPLAY_REFRESH_RATE()==120)  // 120 hz
		{
			oddma_pq_cmp_pair_reg.cmp_data_bit_width = 1;
			oddma_pq_decmp_pair_reg.decmp_data_bit_width = 1;
		}

		pqc_line_sum_bit = (width * oddma_pq_cmp_bit_reg.line_limit_bit + 256) / 128 + ((width * oddma_pq_cmp_bit_reg.line_limit_bit + 256)%128!=0);

#ifdef CONFIG_BW_96B_ALIGNED
		// for cap/disp line_step (128 bits unit)
        align_value = drvifget_align_value(pqc_line_sum_bit, 6);
#else
		align_value = pqc_line_sum_bit; //origin value
#endif
		if(dma_mode == 0) {
			oddma_pq_cmp_pair_reg.cmp_line_sum_bit = align_value;
			oddma_pq_decmp_pair_reg.decmp_line_sum_bit = align_value;
		}

		IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_PAIR_reg, oddma_pq_cmp_pair_reg.regValue);
		IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_PAIR_reg, oddma_pq_decmp_pair_reg.regValue);

		od_dma_oddma_wr_num_bl_wrap_word_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_word_reg);
		od_dma_oddma_rd_num_bl_wrap_word_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_word_reg);

		if(dma_mode == 0) { // LINE MODE
			// b802ce38 Cap LineStep //must be check 96 alignment
			od_dma_oddma_cap_linestep_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg);
			od_dma_oddma_cap_linestep_reg.cap_line_step = align_value; // 128bit
			IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg, od_dma_oddma_cap_linestep_reg.regValue);

			// b802ceac Disp LineStep //must be check 96 alignment
			od_dma_oddma_rd_num_bl_wrap_line_step_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg);
			od_dma_oddma_rd_num_bl_wrap_line_step_reg.disp_line_step = align_value; // 128bit
			IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg, od_dma_oddma_rd_num_bl_wrap_line_step_reg.regValue);

			// b802ce44 cap_line_128_num
			od_dma_oddma_wr_num_bl_wrap_word_reg.cap_line_128_num = align_value;

			// b802cec4 disp_line_128_num
			od_dma_oddma_rd_num_bl_wrap_word_reg.disp_line_128_num = align_value;
		} else if(dma_mode == 1) { // FRAME MODE
			// b802ce44 cap_line_128_num = 0xffff
			od_dma_oddma_wr_num_bl_wrap_word_reg.cap_line_128_num = 0xffff;

			// b802cec4 disp_line_128_num = 0xffff
			od_dma_oddma_rd_num_bl_wrap_word_reg.disp_line_128_num = 0xffff;
		}

		IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_word_reg, od_dma_oddma_wr_num_bl_wrap_word_reg.regValue);
		IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_word_reg, od_dma_oddma_rd_num_bl_wrap_word_reg.regValue);

		drvif_color_set_od_dma_enable(1);

		IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_apply_mask); //_BIT26
		od_ctrl1_reg.regValue = IoReg_Read32(OD_OD_CTRL1_reg);
		while(od_ctrl1_reg.db_apply == 0x1 && (timeoutcnt--) > 0) {
			od_ctrl1_reg.regValue = IoReg_Read32(OD_OD_CTRL1_reg);
		}
		if (timeoutcnt <= 0) {
			rtd_printk(KERN_EMERG, TAG_OD_MEM, "drvif_color_set_od_bits, time out 0, timeout cnt = %d, od_ctrl_reg.regValue=%x,\n", timeoutcnt, od_ctrl_reg.regValue);
		}
		// OD on
		drvif_color_od(1);

		// OD function db apply
		IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_apply_mask); //_BIT26

		// wait vsync
		timeoutcnt = 0x032500;
		od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
		/*while((od_ctrl_reg.regValue & 0x3) != 0x3 && timeoutcnt-- != 0) {
			od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
		}*/
	} else {
		drvif_color_set_od_dma_enable(0);
	}

	// OD function db off
	IoReg_ClearBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_od_en_dbf_en_mask); //_BIT24
	// OD function db read sel: temp
	IoReg_SetBits(OD_OD_CTRL1_reg, OD_OD_CTRL1_db_read_level_mask); //_BIT25
}


unsigned char drvif_color_get_od_bits(void)
{
	od_dma_oddma_pq_cmp_bit_RBUS oddma_pq_cmp_bit_reg;
	oddma_pq_cmp_bit_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_BIT_reg);

	return oddma_pq_cmp_bit_reg.frame_limit_bit;
}

unsigned char drvif_color_get_od_en(void)
{
	od_od_ctrl_RBUS od_ctrl_reg;
	od_ctrl_reg.regValue = IoReg_Read32(OD_OD_CTRL_reg);
	return od_ctrl_reg.od_en;
}

unsigned char drvif_color_get_od_dma_mode(void)
{
	od_dma_od_dma_ctrl_RBUS od_dma_od_dma_ctrl_reg;
	od_dma_od_dma_ctrl_reg.regValue = IoReg_Read32(OD_DMA_OD_DMA_CTRL_reg);

	return od_dma_od_dma_ctrl_reg.oddma_mode_sel;
}

unsigned char drvif_color_set_od_dma_enable(unsigned char enable)
{
	od_dma_oddma_wr_ctrl_RBUS od_dma_oddma_wr_ctrl_reg;
	od_dma_oddma_rd_ctrl_RBUS od_dma_oddma_rd_ctrl_reg;

	if (!enable && drvif_color_get_od_en())
		drvif_color_od(0);

	// b802ce08 cap enable
	od_dma_oddma_wr_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_Ctrl_reg);
	od_dma_oddma_wr_ctrl_reg.cap_en = enable;
	IoReg_Write32(OD_DMA_ODDMA_WR_Ctrl_reg, od_dma_oddma_wr_ctrl_reg.regValue);

	// b802ce88 disp enable
	od_dma_oddma_rd_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_Ctrl_reg);
	od_dma_oddma_rd_ctrl_reg.disp_en = enable;
	IoReg_Write32(OD_DMA_ODDMA_RD_Ctrl_reg, od_dma_oddma_rd_ctrl_reg.regValue);

	return TRUE;
}

unsigned char drvif_color_get_od_dma_enable(void)
{
	od_dma_oddma_wr_ctrl_RBUS od_dma_oddma_wr_ctrl_reg;
	od_dma_oddma_rd_ctrl_RBUS od_dma_oddma_rd_ctrl_reg;

	od_dma_oddma_wr_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_Ctrl_reg);
	od_dma_oddma_rd_ctrl_reg.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_Ctrl_reg);

	if (od_dma_oddma_wr_ctrl_reg.cap_en && od_dma_oddma_rd_ctrl_reg.disp_en)
		return TRUE;
	else
		return FALSE;
}
