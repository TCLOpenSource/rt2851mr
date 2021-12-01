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
#include <tvscalercontrol/vip/valc.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#include <tvscalercontrol/vip/vip_reg_def.h>

#include <rbus/valc_reg.h>

#else

#include <unistd.h>			// 'close()'
#include <fcntl.h>			// 'open()'
#include <stdio.h>
#include <sys/ioctl.h>

#include <Platform_Lib/TVScalerControl/io/ioRegDrv.h>
#include <Platform_Lib/TVScalerControl/vip/VIP_reg_def.h>

#include <Platform_Lib/TVScalerControl/vip/valc.h>
#endif

/*================================ Global Variables ==============================*/
unsigned int valcTbl[3][2][VALC_TBL_LEN] = {{{0}}};

/*================================ Definitions ==============================*/
#if CONFIG_FIRMWARE_IN_KERNEL
#undef VIPprintf
#define VIPprintf(fmt, args...)	VIPprintfPrivate(VIP_LOGLEVEL_DEBUG,VIP_LOGMODULE_VIP_PCID_DEBUG,fmt,##args)
#else
#define VIPprintf(fmt, args...)	printf(fmt, ##args)
#endif

/*================================== Function ===============================*/

void drvif_color_set_valc_enable(unsigned char bEnable)
{
	// put the block at the front position
	unsigned long flags;//for spin_lock_irqsave
	valc_pcid_valc_ctrl_RBUS valc_pcid_valc_ctrl_reg;
	ppoverlay_display_timing_ctrl2_RBUS display_timing_ctrl2_reg;

	display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	if( bEnable != 0 && (display_timing_ctrl2_reg.hcic_enable != 0 || display_timing_ctrl2_reg.valc_en == 0) )
	{
		// hcic and valc cannot be enabled at the same time
		rtd_printk(KERN_INFO, TAG_NAME, "[Warning][%s][%s] DTG hcic/valc = %d/%d, force disable hcic and enable valc\n",
			__FILE__, __func__, display_timing_ctrl2_reg.hcic_enable, display_timing_ctrl2_reg.valc_en);

		display_timing_ctrl2_reg.hcic_enable = 0;
		display_timing_ctrl2_reg.valc_en = 1;
		IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, display_timing_ctrl2_reg.regValue);

		down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
		spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
		IoReg_SetBits(PPOVERLAY_Double_Buffer_CTRL_reg, PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_set_mask); // Set double buffer apply bit
		spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
		up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	}

	valc_pcid_valc_ctrl_reg.regValue = IoReg_Read32(VALC_PCID_VALC_CTRL_reg);
	valc_pcid_valc_ctrl_reg.valc_func_en = bEnable;
	IoReg_Write32(VALC_PCID_VALC_CTRL_reg, valc_pcid_valc_ctrl_reg.regValue);

}

void drvif_color_set_valc_SpatialPattern(unsigned char PatternSel)
{
	valc_pcid_valc_ctrl_RBUS valc_pcid_valc_ctrl_reg;
	valc_pcid_valc_ctrl_reg.regValue = IoReg_Read32(VALC_PCID_VALC_CTRL_reg);
	valc_pcid_valc_ctrl_reg.valc_spatial_sel = PatternSel;
	IoReg_Write32(VALC_PCID_VALC_CTRL_reg, valc_pcid_valc_ctrl_reg.regValue);
}

void drvif_color_set_valc_HPF_protect(DRV_valc_hpf_ctrl_t* pHPFCtrl)
{
	valc_pcid_valc_ctrl_RBUS valc_pcid_valc_ctrl_reg;
	valc_pcid_valc_hpf_0_RBUS valc_pcid_valc_hpf_0_reg;
	valc_pcid_valc_hpf_1_RBUS valc_pcid_valc_hpf_1_reg;

	valc_pcid_valc_ctrl_reg.regValue = IoReg_Read32(VALC_PCID_VALC_CTRL_reg);
	valc_pcid_valc_hpf_0_reg.regValue = IoReg_Read32(VALC_PCID_VALC_HPF_0_reg);
	valc_pcid_valc_hpf_1_reg.regValue = IoReg_Read32(VALC_PCID_VALC_HPF_1_reg);

	valc_pcid_valc_ctrl_reg.valc_hpf_clip = pHPFCtrl->ClipSel;

	valc_pcid_valc_hpf_1_reg.valc_hpf_w0  = pHPFCtrl->Weight[0];
	valc_pcid_valc_hpf_1_reg.valc_hpf_w1  = pHPFCtrl->Weight[1];
	valc_pcid_valc_hpf_1_reg.valc_hpf_w2  = pHPFCtrl->Weight[2];
	valc_pcid_valc_hpf_1_reg.valc_hpf_w3  = pHPFCtrl->Weight[3];
	valc_pcid_valc_hpf_1_reg.valc_hpf_w4  = pHPFCtrl->Weight[4];
	valc_pcid_valc_hpf_1_reg.valc_hpf_w5  = pHPFCtrl->Weight[5];
	valc_pcid_valc_hpf_1_reg.valc_hpf_w6  = pHPFCtrl->Weight[6];
	valc_pcid_valc_hpf_1_reg.valc_hpf_w7  = pHPFCtrl->Weight[7];

	valc_pcid_valc_hpf_0_reg.valc_hpf_w8  = pHPFCtrl->Weight[8];
	valc_pcid_valc_hpf_0_reg.valc_hpf_w9  = pHPFCtrl->Weight[9];
	valc_pcid_valc_hpf_0_reg.valc_hpf_w10 = pHPFCtrl->Weight[10];
	valc_pcid_valc_hpf_0_reg.valc_hpf_w11 = pHPFCtrl->Weight[11];
	valc_pcid_valc_hpf_0_reg.valc_hpf_w12 = pHPFCtrl->Weight[12];
	valc_pcid_valc_hpf_0_reg.valc_hpf_w13 = pHPFCtrl->Weight[13];
	valc_pcid_valc_hpf_0_reg.valc_hpf_w14 = pHPFCtrl->Weight[14];
	valc_pcid_valc_hpf_0_reg.valc_hpf_w15 = pHPFCtrl->Weight[15];

	IoReg_Write32(VALC_PCID_VALC_CTRL_reg, valc_pcid_valc_ctrl_reg.regValue);
	IoReg_Write32(VALC_PCID_VALC_HPF_0_reg, valc_pcid_valc_hpf_0_reg.regValue);
	IoReg_Write32(VALC_PCID_VALC_HPF_1_reg, valc_pcid_valc_hpf_1_reg.regValue);
}

void drvif_color_set_valc_SAT_protect(DRV_valc_sat_ctrl_t* pSATCtrl)
{
	valc_pcid_valc_sat_0_RBUS valc_pcid_valc_sat_0_reg;
	valc_pcid_valc_sat_1_RBUS valc_pcid_valc_sat_1_reg;

	valc_pcid_valc_sat_0_reg.regValue = IoReg_Read32(VALC_PCID_VALC_SAT_0_reg);
	valc_pcid_valc_sat_1_reg.regValue = IoReg_Read32(VALC_PCID_VALC_SAT_1_reg);

	valc_pcid_valc_sat_1_reg.valc_sat_w0  = pSATCtrl->Weight[0];
	valc_pcid_valc_sat_1_reg.valc_sat_w1  = pSATCtrl->Weight[1];
	valc_pcid_valc_sat_1_reg.valc_sat_w2  = pSATCtrl->Weight[2];
	valc_pcid_valc_sat_1_reg.valc_sat_w3  = pSATCtrl->Weight[3];
	valc_pcid_valc_sat_1_reg.valc_sat_w4  = pSATCtrl->Weight[4];
	valc_pcid_valc_sat_1_reg.valc_sat_w5  = pSATCtrl->Weight[5];
	valc_pcid_valc_sat_1_reg.valc_sat_w6  = pSATCtrl->Weight[6];
	valc_pcid_valc_sat_1_reg.valc_sat_w7  = pSATCtrl->Weight[7];

	valc_pcid_valc_sat_0_reg.valc_sat_w8  = pSATCtrl->Weight[8];
	valc_pcid_valc_sat_0_reg.valc_sat_w9  = pSATCtrl->Weight[9];
	valc_pcid_valc_sat_0_reg.valc_sat_w10 = pSATCtrl->Weight[10];
	valc_pcid_valc_sat_0_reg.valc_sat_w11 = pSATCtrl->Weight[11];
	valc_pcid_valc_sat_0_reg.valc_sat_w12 = pSATCtrl->Weight[12];
	valc_pcid_valc_sat_0_reg.valc_sat_w13 = pSATCtrl->Weight[13];
	valc_pcid_valc_sat_0_reg.valc_sat_w14 = pSATCtrl->Weight[14];
	valc_pcid_valc_sat_0_reg.valc_sat_w15 = pSATCtrl->Weight[15];

	IoReg_Write32(VALC_PCID_VALC_SAT_0_reg, valc_pcid_valc_sat_0_reg.regValue);
	IoReg_Write32(VALC_PCID_VALC_SAT_1_reg, valc_pcid_valc_sat_1_reg.regValue);
}

void drvif_color_set_valc_table(unsigned int* pTbl, DRV_valc_channel_t ChannelSel)
{
	int i=0;
	valc_valc_lut_addr_RBUS valc_valc_lut_addr_reg;
	valc_valc_lut_data_RBUS valc_valc_lut_data_reg;

	if(!pTbl)
	{
		VIPprintf("[Error][%s][%s] Table Ptr is null!\n", __FILE__, __func__);
		return;
	}

	// setup table access setting
	valc_valc_lut_addr_reg.regValue = IoReg_Read32(VALC_VALC_LUT_ADDR_reg);
	valc_valc_lut_addr_reg.valc_lut_sel = ChannelSel;
	valc_valc_lut_addr_reg.valc_lut_ax_en = 1;

	IoReg_Write32(VALC_VALC_LUT_ADDR_reg, valc_valc_lut_addr_reg.regValue);

	for(i=0; i<VALC_TBL_LEN; i++)
	{
		valc_valc_lut_data_reg.valc_lut_data = pTbl[i];
		IoReg_Write32(VALC_VALC_LUT_DATA_reg, valc_valc_lut_data_reg.regValue);
		VIPprintf("[VPQ][VALC][W]Table[%d]=0x%x\n", i, pTbl[i]);
	}

	// Disable the table access
	valc_valc_lut_addr_reg.regValue = IoReg_Read32(VALC_VALC_LUT_ADDR_reg);
	valc_valc_lut_addr_reg.valc_lut_ax_en = 0;
	IoReg_Write32(VALC_VALC_LUT_ADDR_reg, valc_valc_lut_addr_reg.regValue);

}

void drvif_color_get_valc_table(unsigned int* pTbl, DRV_valc_channel_t ChannelSel)
{
	int i=0;
	valc_valc_lut_addr_RBUS valc_valc_lut_addr_reg;
	valc_valc_lut_data_RBUS valc_valc_lut_data_reg;

	if(!pTbl)
	{
		VIPprintf("[Error][%s][%s] Table Ptr is null!\n", __FILE__, __func__);
		return;
	}

	// setup table access setting
	valc_valc_lut_addr_reg.regValue = IoReg_Read32(VALC_VALC_LUT_ADDR_reg);
	valc_valc_lut_addr_reg.valc_lut_sel = ChannelSel;
	valc_valc_lut_addr_reg.valc_lut_ax_en = 1;

	IoReg_Write32(VALC_VALC_LUT_ADDR_reg, valc_valc_lut_addr_reg.regValue);

	for(i=0; i<VALC_TBL_LEN; i++)
	{
		valc_valc_lut_data_reg.regValue = IoReg_Read32(VALC_VALC_LUT_DATA_reg);
		pTbl[i] = valc_valc_lut_data_reg.valc_lut_data;
		VIPprintf("[VPQ][VALC][R]Table[%d]=0x%x\n", i, pTbl[i]);
	}

	// Disable the table access
	valc_valc_lut_addr_reg.regValue = IoReg_Read32(VALC_VALC_LUT_ADDR_reg);
	valc_valc_lut_addr_reg.valc_lut_ax_en = 0;
	IoReg_Write32(VALC_VALC_LUT_ADDR_reg, valc_valc_lut_addr_reg.regValue);
}

unsigned char driver_color_get_valc_enable(void)
{
	valc_pcid_valc_ctrl_RBUS valc_pcid_valc_ctrl_reg;
	valc_pcid_valc_ctrl_reg.regValue = IoReg_Read32(VALC_PCID_VALC_CTRL_reg);
	if( valc_pcid_valc_ctrl_reg.valc_func_en != 0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

