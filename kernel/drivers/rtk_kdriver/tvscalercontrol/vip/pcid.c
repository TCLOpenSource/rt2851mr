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

#define TAG_NAME "VPQ"
#include "rtk_vip_logger.h"
#include <mach/rtk_log.h>
#include <linux/semaphore.h>

#include <tvscalercontrol/io/ioregdrv.h>
#include <tvscalercontrol/vip/pcid.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#include <tvscalercontrol/vip/vip_reg_def.h>

#include <rbus/pcid_reg.h>
#include <rbus/lg_pod_reg.h>


#else

#include <unistd.h>			// 'close()'
#include <fcntl.h>			// 'open()'
#include <stdio.h>
#include <sys/ioctl.h>

#include <Platform_Lib/TVScalerControl/io/ioRegDrv.h>
#include <Platform_Lib/TVScalerControl/vip/VIP_reg_def.h>
#include <Platform_Lib/TVScalerControl/vip/gibi_od.h>
#include <Platform_Lib/TVScalerControl/vip/pcid.h>

#include <ppoverlay_reg.h>
#endif

/*================================ Global Variables ==============================*/
unsigned int RgnMappingTbl[16][4] =
{
	/* 0*/ { RGN_NA, RGN_NA, RGN_NA,      0 },
	/* 1*/ { RGN_NA, RGN_NA,      0,      1 },
	/* 2*/ { RGN_NA, RGN_NA,      1,      2 },
	/* 3*/ { RGN_NA, RGN_NA,      2, RGN_NA },
	/* 4*/ { RGN_NA,      0, RGN_NA,      3 },
	/* 5*/ {      0,      1,      3,      4 },
	/* 6*/ {      1,      2,      4,      5 },
	/* 7*/ {      2, RGN_NA,      5, RGN_NA },
	/* 8*/ { RGN_NA,      3, RGN_NA,      6 },
	/* 9*/ {      3,      4,      6,      7 },
	/*10*/ {      4,      5,      7,      8 },
	/*11*/ {      5, RGN_NA,      8, RGN_NA },
	/*12*/ { RGN_NA,      6, RGN_NA, RGN_NA },
	/*13*/ {      6,      7, RGN_NA, RGN_NA },
	/*14*/ {      7,      8, RGN_NA, RGN_NA },
	/*15*/ {      8, RGN_NA, RGN_NA, RGN_NA }
};

unsigned char pcidRgnTbl[16][3][PCID_TBL_LEN] = {{{0}}};

/*================================ Definitions ==============================*/
#if CONFIG_FIRMWARE_IN_KERNEL
#undef VIPprintf
#define VIPprintf(fmt, args...)	VIPprintfPrivate(VIP_LOGLEVEL_DEBUG,VIP_LOGMODULE_VIP_PCID_DEBUG,fmt,##args)
#else
#define VIPprintf(fmt, args...)	printf(fmt, ##args)
#endif

/*================================== Function ===============================*/
void drvif_color_set_pcid_regional_table_setting(DRV_pcid2_RgnTbl_t* pRgnTbl)
{
	pcid_pcid_regionaltable_ctrl_RBUS pcid_pcid_regionaltable_ctrl_reg;
	pcid_pcid_regionaltable_index_h_RBUS pcid_pcid_regionaltable_index_h_reg;
	pcid_pcid_regionaltable_index_v_RBUS pcid_pcid_regionaltable_index_v_reg;
	pcid_pcid_regionaltable_step_RBUS pcid_pcid_regionaltable_step_reg;

	pcid_pcid_regionaltable_ctrl_reg.regValue = IoReg_Read32(PCID_PCID_RegionalTable_Ctrl_reg);
	pcid_pcid_regionaltable_index_h_reg.regValue = IoReg_Read32(PCID_PCID_RegionalTable_Index_H_reg);
	pcid_pcid_regionaltable_index_v_reg.regValue = IoReg_Read32(PCID_PCID_RegionalTable_Index_V_reg);
	pcid_pcid_regionaltable_step_reg.regValue = IoReg_Read32(PCID_PCID_RegionalTable_Step_reg);

	pcid_pcid_regionaltable_ctrl_reg.regional_table_en = pRgnTbl->RgnTblEnable;

	pcid_pcid_regionaltable_index_h_reg.rt_hor_index0 = pRgnTbl->HorIdx[0];
	pcid_pcid_regionaltable_index_h_reg.rt_hor_index1 = pRgnTbl->HorIdx[1];
	pcid_pcid_regionaltable_index_h_reg.rt_hor_index2 = pRgnTbl->HorIdx[2];

	pcid_pcid_regionaltable_index_v_reg.rt_ver_index0 = pRgnTbl->VerIdx[0];
	pcid_pcid_regionaltable_index_v_reg.rt_ver_index1 = pRgnTbl->VerIdx[1];
	pcid_pcid_regionaltable_index_v_reg.rt_ver_index2 = pRgnTbl->VerIdx[2];

	pcid_pcid_regionaltable_step_reg.rt_hor_step0 = pRgnTbl->HorBldStep[0];
	pcid_pcid_regionaltable_step_reg.rt_hor_step1 = pRgnTbl->HorBldStep[1];
	pcid_pcid_regionaltable_step_reg.rt_hor_step2 = pRgnTbl->HorBldStep[2];
	pcid_pcid_regionaltable_step_reg.rt_ver_step0 = pRgnTbl->VerBldStep[0];
	pcid_pcid_regionaltable_step_reg.rt_ver_step1 = pRgnTbl->VerBldStep[1];
	pcid_pcid_regionaltable_step_reg.rt_ver_step2 = pRgnTbl->VerBldStep[2];

	IoReg_Write32(PCID_PCID_RegionalTable_Ctrl_reg, pcid_pcid_regionaltable_ctrl_reg.regValue);
	IoReg_Write32(PCID_PCID_RegionalTable_Index_H_reg, pcid_pcid_regionaltable_index_h_reg.regValue);
	IoReg_Write32(PCID_PCID_RegionalTable_Index_V_reg, pcid_pcid_regionaltable_index_v_reg.regValue);
	IoReg_Write32(PCID_PCID_RegionalTable_Step_reg, pcid_pcid_regionaltable_step_reg.regValue);
}

void drvif_color_set_pcid_regional_table_valuetable(unsigned int *pTblValue, unsigned int RgnSel, DRV_pcid2_channel_t Channel)
{
	int i=0;
	pcid_pcid_lut_addr_RBUS pcid_lut_addr_reg;
	pcid_pcid_lut_data_RBUS pcid_pcid_lut_data_reg;

	if(!pTblValue)
	{
		VIPprintf("[Error][%s][%s] Table Ptr is null!\n", __FILE__, __func__);
		return;
	}

	// Setup table access setting
	pcid_lut_addr_reg.regValue = IoReg_Read32(PCID_PCID_LUT_ADDR_reg);
	pcid_lut_addr_reg.pcid_lut_sel = Channel;
	pcid_lut_addr_reg.pcid_regional_lut_sel = RgnSel;
	pcid_lut_addr_reg.pcid_regional_lut_ax_en = 1;

	IoReg_Write32(PCID_PCID_LUT_ADDR_reg, pcid_lut_addr_reg.regValue);

	// Write the value into table
	for(i=0; i<PCID_TBL_LEN; i++)
	{
		pcid_pcid_lut_data_reg.pcid_lut_data = pTblValue[i];
		IoReg_Write32(PCID_PCID_LUT_DATA_reg, pcid_pcid_lut_data_reg.regValue);
		VIPprintf("[VPQ][POD]Table[%d]=0x%x\n",i,pTblValue[i]);
	}

	// Disable the table access
	pcid_lut_addr_reg.regValue = IoReg_Read32(PCID_PCID_LUT_ADDR_reg);
	pcid_lut_addr_reg.pcid_regional_lut_ax_en = 0;
	IoReg_Write32(PCID_PCID_LUT_ADDR_reg, pcid_lut_addr_reg.regValue);
}

void drvif_color_set_pcid_pixel_setting(DRV_pcid2_data_t* pPcid2Setting)
{
	pcid_pcid_ctrl_RBUS pcid_ctrl_reg;
	pcid_pcid_ctrl_2_RBUS pcid_ctrl2_reg;
	pcid_pcid_line_1_RBUS pcid_line1_reg;
	pcid_pcid_line_2_RBUS pcid_line2_reg;
	pcid_pcid_line_3_RBUS pcid_line3_reg;
	pcid_pcid_line_4_RBUS pcid_line4_reg;

	pcid_ctrl_reg.regValue = IoReg_Read32(PCID_PCID_CTRL_reg);
	pcid_ctrl2_reg.regValue = IoReg_Read32(PCID_PCID_CTRL_2_reg);
	pcid_line1_reg.regValue = IoReg_Read32(PCID_PCID_LINE_1_reg);
	pcid_line2_reg.regValue = IoReg_Read32(PCID_PCID_LINE_2_reg);
	pcid_line3_reg.regValue = IoReg_Read32(PCID_PCID_LINE_3_reg);
	pcid_line4_reg.regValue = IoReg_Read32(PCID_PCID_LINE_4_reg);

	/* Enable control */
	pcid_ctrl_reg.boundary_mode = pPcid2Setting->boundary_mode;

	pcid_ctrl2_reg.pcid_thd_en      = pPcid2Setting->pcid_thd_en;
	pcid_ctrl2_reg.pcid_thd_mode    = pPcid2Setting->pcid_thd_mode;
	pcid_ctrl2_reg.pcid_tab1_r_thd  = pPcid2Setting->pcid_tbl1_r_th;
	pcid_ctrl2_reg.pcid_tab1_g_thd  = pPcid2Setting->pcid_tbl1_g_th;
	pcid_ctrl2_reg.pcid_tab1_b_thd  = pPcid2Setting->pcid_tbl1_b_th;
	pcid_ctrl2_reg.pcid_tab1_xtr_en = pPcid2Setting->xtr_tbl1_en;

	/* LINE 1 EVEN PIXEL */
	pcid_line1_reg.line1_even_r_line_select  = pPcid2Setting->pixel_ref.line1.even_r.line_sel;
	pcid_line1_reg.line1_even_r_point_select = pPcid2Setting->pixel_ref.line1.even_r.point_sel;
	pcid_line1_reg.line1_even_r_color_select = pPcid2Setting->pixel_ref.line1.even_r.color_sel;
	pcid_line1_reg.line1_even_g_line_select  = pPcid2Setting->pixel_ref.line1.even_g.line_sel;
	pcid_line1_reg.line1_even_g_point_select = pPcid2Setting->pixel_ref.line1.even_g.point_sel;
	pcid_line1_reg.line1_even_g_color_select = pPcid2Setting->pixel_ref.line1.even_g.color_sel;
	pcid_line1_reg.line1_even_b_line_select  = pPcid2Setting->pixel_ref.line1.even_b.line_sel;
	pcid_line1_reg.line1_even_b_point_select = pPcid2Setting->pixel_ref.line1.even_b.point_sel;
	pcid_line1_reg.line1_even_b_color_select = pPcid2Setting->pixel_ref.line1.even_b.color_sel;

	/* LINE 1 ODD PIXEL */
	pcid_line1_reg.line1_odd_r_line_select  = pPcid2Setting->pixel_ref.line1.odd_r.line_sel;
	pcid_line1_reg.line1_odd_r_point_select = pPcid2Setting->pixel_ref.line1.odd_r.point_sel;
	pcid_line1_reg.line1_odd_r_color_select = pPcid2Setting->pixel_ref.line1.odd_r.color_sel;
	pcid_line1_reg.line1_odd_g_line_select  = pPcid2Setting->pixel_ref.line1.odd_g.line_sel;
	pcid_line1_reg.line1_odd_g_point_select = pPcid2Setting->pixel_ref.line1.odd_g.point_sel;
	pcid_line1_reg.line1_odd_g_color_select = pPcid2Setting->pixel_ref.line1.odd_g.color_sel;
	pcid_line1_reg.line1_odd_b_line_select  = pPcid2Setting->pixel_ref.line1.odd_b.line_sel;
	pcid_line1_reg.line1_odd_b_point_select = pPcid2Setting->pixel_ref.line1.odd_b.point_sel;
	pcid_line1_reg.line1_odd_b_color_select = pPcid2Setting->pixel_ref.line1.odd_b.color_sel;

	/* LINE 2 EVEN PIXEL */
	pcid_line2_reg.line2_even_r_line_select  = pPcid2Setting->pixel_ref.line2.even_r.line_sel;
	pcid_line2_reg.line2_even_r_point_select = pPcid2Setting->pixel_ref.line2.even_r.point_sel;
	pcid_line2_reg.line2_even_r_color_select = pPcid2Setting->pixel_ref.line2.even_r.color_sel;
	pcid_line2_reg.line2_even_g_line_select  = pPcid2Setting->pixel_ref.line2.even_g.line_sel;
	pcid_line2_reg.line2_even_g_point_select = pPcid2Setting->pixel_ref.line2.even_g.point_sel;
	pcid_line2_reg.line2_even_g_color_select = pPcid2Setting->pixel_ref.line2.even_g.color_sel;
	pcid_line2_reg.line2_even_b_line_select  = pPcid2Setting->pixel_ref.line2.even_b.line_sel;
	pcid_line2_reg.line2_even_b_point_select = pPcid2Setting->pixel_ref.line2.even_b.point_sel;
	pcid_line2_reg.line2_even_b_color_select = pPcid2Setting->pixel_ref.line2.even_b.color_sel;

	/* LINE 2 ODD PIXEL */
	pcid_line2_reg.line2_odd_r_line_select  = pPcid2Setting->pixel_ref.line2.odd_r.line_sel;
	pcid_line2_reg.line2_odd_r_point_select = pPcid2Setting->pixel_ref.line2.odd_r.point_sel;
	pcid_line2_reg.line2_odd_r_color_select = pPcid2Setting->pixel_ref.line2.odd_r.color_sel;
	pcid_line2_reg.line2_odd_g_line_select  = pPcid2Setting->pixel_ref.line2.odd_g.line_sel;
	pcid_line2_reg.line2_odd_g_point_select = pPcid2Setting->pixel_ref.line2.odd_g.point_sel;
	pcid_line2_reg.line2_odd_g_color_select = pPcid2Setting->pixel_ref.line2.odd_g.color_sel;
	pcid_line2_reg.line2_odd_b_line_select  = pPcid2Setting->pixel_ref.line2.odd_b.line_sel;
	pcid_line2_reg.line2_odd_b_point_select = pPcid2Setting->pixel_ref.line2.odd_b.point_sel;
	pcid_line2_reg.line2_odd_b_color_select = pPcid2Setting->pixel_ref.line2.odd_b.color_sel;

	/* LINE 3 EVEN PIXEL */
	pcid_line3_reg.line3_even_r_line_select  = pPcid2Setting->pixel_ref.line3.even_r.line_sel;
	pcid_line3_reg.line3_even_r_point_select = pPcid2Setting->pixel_ref.line3.even_r.point_sel;
	pcid_line3_reg.line3_even_r_color_select = pPcid2Setting->pixel_ref.line3.even_r.color_sel;
	pcid_line3_reg.line3_even_g_line_select  = pPcid2Setting->pixel_ref.line3.even_g.line_sel;
	pcid_line3_reg.line3_even_g_point_select = pPcid2Setting->pixel_ref.line3.even_g.point_sel;
	pcid_line3_reg.line3_even_g_color_select = pPcid2Setting->pixel_ref.line3.even_g.color_sel;
	pcid_line3_reg.line3_even_b_line_select  = pPcid2Setting->pixel_ref.line3.even_b.line_sel;
	pcid_line3_reg.line3_even_b_point_select = pPcid2Setting->pixel_ref.line3.even_b.point_sel;
	pcid_line3_reg.line3_even_b_color_select = pPcid2Setting->pixel_ref.line3.even_b.color_sel;

	/* LINE 3 ODD PIXEL */
	pcid_line3_reg.line3_odd_r_line_select  = pPcid2Setting->pixel_ref.line3.odd_r.line_sel;
	pcid_line3_reg.line3_odd_r_point_select = pPcid2Setting->pixel_ref.line3.odd_r.point_sel;
	pcid_line3_reg.line3_odd_r_color_select = pPcid2Setting->pixel_ref.line3.odd_r.color_sel;
	pcid_line3_reg.line3_odd_g_line_select  = pPcid2Setting->pixel_ref.line3.odd_g.line_sel;
	pcid_line3_reg.line3_odd_g_point_select = pPcid2Setting->pixel_ref.line3.odd_g.point_sel;
	pcid_line3_reg.line3_odd_g_color_select = pPcid2Setting->pixel_ref.line3.odd_g.color_sel;
	pcid_line3_reg.line3_odd_b_line_select  = pPcid2Setting->pixel_ref.line3.odd_b.line_sel;
	pcid_line3_reg.line3_odd_b_point_select = pPcid2Setting->pixel_ref.line3.odd_b.point_sel;
	pcid_line3_reg.line3_odd_b_color_select = pPcid2Setting->pixel_ref.line3.odd_b.color_sel;

	/* LINE 4 EVEN PIXEL */
	pcid_line4_reg.line4_even_r_line_select  = pPcid2Setting->pixel_ref.line4.even_r.line_sel;
	pcid_line4_reg.line4_even_r_point_select = pPcid2Setting->pixel_ref.line4.even_r.point_sel;
	pcid_line4_reg.line4_even_r_color_select = pPcid2Setting->pixel_ref.line4.even_r.color_sel;
	pcid_line4_reg.line4_even_g_line_select  = pPcid2Setting->pixel_ref.line4.even_g.line_sel;
	pcid_line4_reg.line4_even_g_point_select = pPcid2Setting->pixel_ref.line4.even_g.point_sel;
	pcid_line4_reg.line4_even_g_color_select = pPcid2Setting->pixel_ref.line4.even_g.color_sel;
	pcid_line4_reg.line4_even_b_line_select  = pPcid2Setting->pixel_ref.line4.even_b.line_sel;
	pcid_line4_reg.line4_even_b_point_select = pPcid2Setting->pixel_ref.line4.even_b.point_sel;
	pcid_line4_reg.line4_even_b_color_select = pPcid2Setting->pixel_ref.line4.even_b.color_sel;

	/* LINE 4 ODD PIXEL */
	pcid_line4_reg.line4_odd_r_line_select  = pPcid2Setting->pixel_ref.line4.odd_r.line_sel;
	pcid_line4_reg.line4_odd_r_point_select = pPcid2Setting->pixel_ref.line4.odd_r.point_sel;
	pcid_line4_reg.line4_odd_r_color_select = pPcid2Setting->pixel_ref.line4.odd_r.color_sel;
	pcid_line4_reg.line4_odd_g_line_select  = pPcid2Setting->pixel_ref.line4.odd_g.line_sel;
	pcid_line4_reg.line4_odd_g_point_select = pPcid2Setting->pixel_ref.line4.odd_g.point_sel;
	pcid_line4_reg.line4_odd_g_color_select = pPcid2Setting->pixel_ref.line4.odd_g.color_sel;
	pcid_line4_reg.line4_odd_b_line_select  = pPcid2Setting->pixel_ref.line4.odd_b.line_sel;
	pcid_line4_reg.line4_odd_b_point_select = pPcid2Setting->pixel_ref.line4.odd_b.point_sel;
	pcid_line4_reg.line4_odd_b_color_select = pPcid2Setting->pixel_ref.line4.odd_b.color_sel;

	IoReg_Write32(PCID_PCID_CTRL_reg  , pcid_ctrl_reg.regValue);
	IoReg_Write32(PCID_PCID_CTRL_2_reg, pcid_ctrl2_reg.regValue);
	IoReg_Write32(PCID_PCID_LINE_1_reg, pcid_line1_reg.regValue);
	IoReg_Write32(PCID_PCID_LINE_2_reg, pcid_line2_reg.regValue);
	IoReg_Write32(PCID_PCID_LINE_3_reg, pcid_line3_reg.regValue);
	IoReg_Write32(PCID_PCID_LINE_4_reg, pcid_line4_reg.regValue);
}

void drvif_color_enable_LGD_POD_CLK()
{
	if ((IoReg_Read32(0xb800011c) & _BIT14) == 0)	// LGD POD clk not enable
	{
		IoReg_Write32(0xb800011c, 0x00004001);	 //LGD POD CLK
		IoReg_Write32(0xb800010c, 0x00004001);	 //LGD POD reset
	}
}


void drvif_color_set_LGD_POD(unsigned char* pTblValue)
{
	unsigned int i = 0;
	unsigned int reg = 0;

	// 0xb802BB04 ~ 0xb802BCFC
	for(i=0; i<(508/4); i++){
		reg = (pTblValue[i*4+0]<<24) + (pTblValue[i*4+1]<<16) + (pTblValue[i*4+2]<<8) + (pTblValue[i*4+3]<<0);
		IoReg_Write32(LG_POD_POD_reg00_reg+(i*4), reg);
	}

	// 0xb8026C00 ~ 0xb8026FFC
	for(i=0; i<((1532-508)/4); i++){
		reg = (pTblValue[i*4+508+0]<<24) + (pTblValue[i*4+508+1]<<16) + (pTblValue[i*4+508+2]<<8) + (pTblValue[i*4+508+3]<<0);
		IoReg_Write32(LG_POD_POD_reg1fc_reg+(i*4), reg);
	}

	// 0xb802F000 ~ 0xb802F138
	for(i=0; i<((LGE_POD_TBL_LEN-1532)/4); i++){
		reg = (pTblValue[i*4+1532+0]<<24) + (pTblValue[i*4+1532+1]<<16) + (pTblValue[i*4+1532+2]<<8) + (pTblValue[i*4+1532+3]<<0);
		IoReg_Write32(LG_POD_POD_reg5fc_reg+(i*4), reg);
	}

}


void drvif_color_set_pcid_enable(unsigned char bEnable)
{
	// put the block at the front position
	unsigned long flags;//for spin_lock_irqsave
	ppoverlay_display_timing_ctrl2_RBUS display_timing_ctrl2_reg;

	display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	display_timing_ctrl2_reg.lineod_en = bEnable;
	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, display_timing_ctrl2_reg.regValue);

	down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
	IoReg_SetBits(PPOVERLAY_Double_Buffer_CTRL_reg, PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_set_mask); // Set double buffer apply bit
	spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
	up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
}

void drvif_color_set_pcid2_enable(unsigned char bEnable)
{
	// put the block at the back position
	unsigned long flags;//for spin_lock_irqsave
	ppoverlay_display_timing_ctrl2_RBUS display_timing_ctrl2_reg;

	display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	display_timing_ctrl2_reg.lineod2_en = bEnable;
	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, display_timing_ctrl2_reg.regValue);

	down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
	IoReg_SetBits(PPOVERLAY_Double_Buffer_CTRL_reg, PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_set_mask); // Set double buffer apply bit
	spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
	up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
}

void drvif_color_set_LGD_POD_enable(unsigned char blgdpod)
{
	unsigned long flags;//for spin_lock_irqsave
	ppoverlay_display_timing_ctrl2_RBUS display_timing_ctrl2_reg;

	if(blgdpod)
		IoReg_SetBits(LG_POD_POD_enable_reg,LG_POD_POD_enable_pod_on_mask);
	else
		IoReg_ClearBits(LG_POD_POD_enable_reg,LG_POD_POD_enable_pod_on_mask);

	display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	display_timing_ctrl2_reg.pod_enable= blgdpod;
	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, display_timing_ctrl2_reg.regValue);

	down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
	IoReg_SetBits(PPOVERLAY_Double_Buffer_CTRL_reg, PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_set_mask); // Set double buffer apply bit
	spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
	up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
}

void drvif_color_get_pcid_regional_table_valuetable(unsigned int *pRetTbl, unsigned int RgnSel, DRV_pcid2_channel_t Channel)
{
	int i=0;
	pcid_pcid_lut_addr_RBUS pcid_lut_addr_reg;
	pcid_pcid_lut_data_RBUS pcid_pcid_lut_data_reg;

	// Setup table access setting
	pcid_lut_addr_reg.regValue = IoReg_Read32(PCID_PCID_LUT_ADDR_reg);
	pcid_lut_addr_reg.pcid_lut_sel = Channel;
	pcid_lut_addr_reg.pcid_regional_lut_sel = RgnSel;
	pcid_lut_addr_reg.pcid_regional_lut_ax_en = 1;

	IoReg_Write32(PCID_PCID_LUT_ADDR_reg, pcid_lut_addr_reg.regValue);

	// Read the value from
	for(i=0; i<PCID_TBL_LEN; i++)
	{
		pcid_pcid_lut_data_reg.regValue = IoReg_Read32(PCID_PCID_LUT_DATA_reg);
		pRetTbl[i] = pcid_pcid_lut_data_reg.pcid_lut_data;
		VIPprintf("[VPQ][POD]Table[%d]=0x%x\n",i,pRetTbl[i]);
	}

	// Disable the table access
	pcid_lut_addr_reg.regValue = IoReg_Read32(PCID_PCID_LUT_ADDR_reg);
	pcid_lut_addr_reg.pcid_regional_lut_ax_en = 0;
	IoReg_Write32(PCID_PCID_LUT_ADDR_reg, pcid_lut_addr_reg.regValue);
}


char drvif_color_get_pcid2_enable(void)
{
	ppoverlay_display_timing_ctrl2_RBUS display_timing_ctrl2_reg;
	display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	return display_timing_ctrl2_reg.lineod2_en;
}

