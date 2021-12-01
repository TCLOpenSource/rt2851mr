/*==========================================================================
  * Copyright (c)      Realtek Semiconductor Corporation, 2014
  * All rights reserved.
  * ========================================================================*/
  /*================= File Description =======================================*/
  /**
   * @file
   *  This file is for Local Contrast related functions.
   *
   * @author  $Author$
   * @date	  $Date$
   * @version	  $Revision$
   */

  /*============================ Module dependency	===========================*/
#if CONFIG_FIRMWARE_IN_KERNEL
#include <linux/string.h>
#include <tvscalercontrol/io/ioregdrv.h>
#include <linux/kernel.h>
#include <mach/io.h>

#include "tvscalercontrol/vip/localcontrast.h"
#include <tvscalercontrol/scaler/vipinclude.h> // for typedef that used in VIP_reg_def.h
#include <tvscalercontrol/vip/vip_reg_def.h>
#include <mach/rtk_log.h>
#include "rtk_vip_logger.h"
#define TAG_NAME "VPQ"
#else
#include <unistd.h>			// 'close()'
#include <fcntl.h>			// 'open()'
#include <stdio.h>
#include <sys/ioctl.h>

#include <Platform_Lib/TVScalerControl/io/ioRegDrv.h>
#include <Platform_Lib/TVScalerControl/vip/localcontrast.h>
#include <Platform_Lib/TVScalerControl/vip/VIP_reg_def.h>
#endif

#if CONFIG_FIRMWARE_IN_KERNEL
#undef VIPprintf
#define VIPprintf(fmt, args...)	VIPprintfPrivate(VIP_LOGLEVEL_DEBUG,VIP_LOGMODULE_VIP_LC_DEBUG,fmt,##args)
#else
#define VIPprintf(fmt, args...)	printf(fmt, ##args)
#endif

#if 0
/* SET FUNCTIONS */
#endif

#if defined(CONFIG_RTK_AI_DRV)
extern unsigned char lc_gainbyy_offset[33];
extern unsigned char lc_gainbyydiff_offset[33];
#endif
static unsigned char u1_SizeValid = 0; // 0:size invalid, 1:size valid

// Function Description : This function is for LC enable
void drvif_color_set_LC_Enable(unsigned char enable)
{
	lc_lc_global_ctrl1_RBUS lc_lc_global_ctrl1_reg;

	color_d_vc_global_ctrl_RBUS color_d_vc_global_ctrl;

	color_d_vc_global_ctrl.regValue = IoReg_Read32(COLOR_D_VC_Global_CTRL_reg);

	color_d_vc_global_ctrl.m_lc_comp_en = enable;
	color_d_vc_global_ctrl.write_enable_12 = 1;


	/* from jimmy */ //only for demo
	/*IoReg_Write32(0xB802E1BC, 0x05);
	IoReg_Write32(0xB802E03C, 0x3a3c3f3f);
	IoReg_Write32(0xB802E040, 0x28303438);
	IoReg_Write32(0xB802E044, 0x08101820);
	IoReg_Write32(0xB802E1CC, 0);*/

	//IoReg_Write32(LC_LC_Decontour_ctrl_reg, 0x05);
	//IoReg_Write32(LC_LC_Decontour_alpha_0_reg, 0x242c343f);
	//IoReg_Write32(LC_LC_Decontour_alpha_1_reg, 0x0c12181e);
	//IoReg_Write32(LC_LC_Decontour_alpha_2_reg, 0x01020408);
	//IoReg_Write32(LC_LC_Decontour_alpha_3_reg, 0x00000000);

	IoReg_Write32(COLOR_D_VC_Global_CTRL_reg, color_d_vc_global_ctrl.regValue);

	lc_lc_global_ctrl1_reg.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);
	lc_lc_global_ctrl1_reg.lc_db_apply = 1;
	IoReg_Write32(LC_LC_Global_Ctrl1_reg, lc_lc_global_ctrl1_reg.regValue);

}

void drvif_color_set_LC_Global_Ctrl(DRV_LC_Global_Ctrl *ptr)
{
	lc_lc_global_ctrl0_RBUS blu_lc_global_ctrl0;
	lc_lc_global_ctrl1_RBUS blu_lc_global_ctrl1;
	lc_lc_global_ctrl2_RBUS blu_lc_global_ctrl2;
	lc_lc_global_ctrl3_RBUS blu_lc_global_ctrl3;
	blu_lc_global_ctrl0.regValue = IoReg_Read32(LC_LC_Global_Ctrl0_reg);
	blu_lc_global_ctrl1.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);
	blu_lc_global_ctrl2.regValue = IoReg_Read32(LC_LC_Global_Ctrl2_reg);
	blu_lc_global_ctrl3.regValue = IoReg_Read32(LC_LC_Global_Ctrl3_reg);

	blu_lc_global_ctrl0.lc_local_sharp_en = ptr->lc_local_sharp_en;
	blu_lc_global_ctrl0.lc_tone_mapping_en = ptr->lc_tone_mapping_en;
	blu_lc_global_ctrl1.lc_db_en = ptr->lc_db_en;
	blu_lc_global_ctrl1.lc_db_apply = ptr->lc_db_apply;
	blu_lc_global_ctrl1.lc_db_read_level = ptr->lc_db_read_level;
	//blu_lc_global_ctrl2.lc_3d_mode = ptr->lc_3d_mode;/*merlin5, delete*/
	//juwen, 1028, set blk num/size and factor
	//blu_lc_global_ctrl2.lc_blk_hnum = ptr->lc_blk_hnum;
	//blu_lc_global_ctrl2.lc_blk_vnum = ptr->lc_blk_vnum;
	//blu_lc_global_ctrl2.lc_subblk_mode = ptr->lc_subblk_mode;
	//blu_lc_global_ctrl2.lc_gcon_mode = ptr->lc_gcon_mode;/*merlin5, delete*/
	blu_lc_global_ctrl2.lc_hist_mode = ptr->lc_hist_mode;
	blu_lc_global_ctrl2.lc_tenable = ptr->lc_tenable;
	blu_lc_global_ctrl2.lc_valid = ptr->lc_valid;

	//juwen, 1028, set blk num/size and factor
	//blu_lc_global_ctrl3.lc_blk_hsize = ptr->lc_blk_hsize;
	//blu_lc_global_ctrl3.lc_blk_vsize = ptr->lc_blk_vsize;
	blu_lc_global_ctrl1.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);
	blu_lc_global_ctrl1.lc_db_apply = 1;

	IoReg_Write32(LC_LC_Global_Ctrl0_reg, blu_lc_global_ctrl0.regValue);
	IoReg_Write32(LC_LC_Global_Ctrl1_reg, blu_lc_global_ctrl1.regValue);
	IoReg_Write32(LC_LC_Global_Ctrl2_reg, blu_lc_global_ctrl2.regValue);
	IoReg_Write32(LC_LC_Global_Ctrl3_reg, blu_lc_global_ctrl3.regValue);

}

void drvif_color_set_LC_Temporal_Filter(DRV_LC_Temporal_Filter *ptr)
{
	lc_lc_temporal_ctrl1_RBUS blu_lc_temporal_ctrl1;
	lc_lc_temporal_ctrl2_RBUS blu_lc_temporal_ctrl2;
	lc_lc_temporal_ctrl3_RBUS blu_lc_temporal_ctrl3;

	blu_lc_temporal_ctrl1.regValue = IoReg_Read32(LC_LC_Temporal_Ctrl1_reg);
	blu_lc_temporal_ctrl2.regValue = IoReg_Read32(LC_LC_Temporal_Ctrl2_reg);
	blu_lc_temporal_ctrl3.regValue = IoReg_Read32(LC_LC_Temporal_Ctrl3_reg);

	blu_lc_temporal_ctrl1.lc_tmp_pos0thd = ptr->lc_tmp_pos0thd;
	blu_lc_temporal_ctrl1.lc_tmp_pos1thd = ptr->lc_tmp_pos1thd;
	blu_lc_temporal_ctrl1.lc_tmp_posmingain = ptr->lc_tmp_posmingain;
	blu_lc_temporal_ctrl1.lc_tmp_posmaxgain = ptr->lc_tmp_posmaxgain;
	blu_lc_temporal_ctrl2.lc_tmp_neg0thd = ptr->lc_tmp_neg0thd;
	blu_lc_temporal_ctrl2.lc_tmp_neg1thd = ptr->lc_tmp_neg1thd;
	blu_lc_temporal_ctrl2.lc_tmp_negmingain = ptr->lc_tmp_negmingain;
	blu_lc_temporal_ctrl2.lc_tmp_negmaxgain = ptr->lc_tmp_negmaxgain;
	blu_lc_temporal_ctrl3.lc_tmp_maxdiff = ptr->lc_tmp_maxdiff;
	blu_lc_temporal_ctrl3.lc_tmp_scenechangegain1 = ptr->lc_tmp_scenechangegain1;

	IoReg_Write32(LC_LC_Temporal_Ctrl1_reg, blu_lc_temporal_ctrl1.regValue);
	IoReg_Write32(LC_LC_Temporal_Ctrl2_reg, blu_lc_temporal_ctrl2.regValue);
	IoReg_Write32(LC_LC_Temporal_Ctrl3_reg, blu_lc_temporal_ctrl3.regValue);
}


void drvif_color_set_LC_Backlight_Profile_Interpolation(DRV_LC_Backlight_Profile_Interpolation *ptr)
{
	lc_lc_inter_hctrl1_RBUS blu_lc_inter_hctrl1;
	lc_lc_inter_hctrl2_RBUS blu_lc_inter_hctrl2;
	lc_lc_inter_vctrl1_RBUS blu_lc_inter_vctrl1;
	lc_lc_inter_vctrl2_RBUS blu_lc_inter_vctrl2;

	lc_lc_sram_ctrl_RBUS blu_lc_sram_ctrl;
	//* by table
	lc_lc_blight_ap_RBUS blu_lc_blight_ap;
	lc_lc_blight_dp_RBUS blu_lc_blight_dp;
	//*/

	blu_lc_inter_hctrl1.regValue = IoReg_Read32(LC_LC_Inter_HCtrl1_reg);
	blu_lc_inter_hctrl2.regValue = IoReg_Read32(LC_LC_Inter_HCtrl2_reg);
	blu_lc_inter_vctrl1.regValue = IoReg_Read32(LC_LC_Inter_VCtrl1_reg);
	blu_lc_inter_vctrl2.regValue = IoReg_Read32(LC_LC_Inter_VCtrl2_reg);

	blu_lc_sram_ctrl.regValue = IoReg_Read32(LC_LC_SRAM_CTRL_reg);
	//*
	blu_lc_blight_ap.regValue = IoReg_Read32(LC_LC_BLIGHT_AP_reg);
	blu_lc_blight_dp.regValue = IoReg_Read32(LC_LC_BLIGHT_DP_reg);
	//*/

	blu_lc_inter_hctrl1.lc_tab_hsize = ptr->lc_tab_hsize;
	//blu_lc_inter_hctrl1.lc_hfactor = ptr->lc_hfactor;//juwen, 1028, set blk num/size and factor by driver computation
	//blu_lc_inter_hctrl2.lc_hinitphase3_right = ptr->lc_hinitphase3_right;/*merlin5, delete*/
	blu_lc_inter_hctrl2.lc_hboundary = ptr->lc_hboundary;
	blu_lc_inter_hctrl2.lc_hinitphase1 = ptr->lc_hinitphase1;
	blu_lc_inter_hctrl2.lc_hinitphase2 = ptr->lc_hinitphase2;
	blu_lc_inter_hctrl2.lc_hinitphase3_left = ptr->lc_hinitphase3_left;
	blu_lc_inter_vctrl1.lc_tab_vsize = ptr->lc_tab_vsize;
	//blu_lc_inter_vctrl1.lc_vfactor = ptr->lc_vfactor;//juwen, 1028, set blk num/size and factor by driver computation
	//blu_lc_inter_vctrl2.lc_vinitphase3_right = ptr->lc_vinitphase3_right;/*merlin5, delete*/
	blu_lc_inter_vctrl2.lc_vboundary = ptr->lc_vboundary;
	blu_lc_inter_vctrl2.lc_vinitphase1 = ptr->lc_vinitphase1;
	blu_lc_inter_vctrl2.lc_vinitphase2 = ptr->lc_vinitphase2;
	blu_lc_inter_vctrl2.lc_vinitphase3_left = ptr->lc_vinitphase3_left;

	blu_lc_sram_ctrl.lc_blight_update_en = ptr->lc_blight_update_en;
	blu_lc_sram_ctrl.lc_blight_sw_mode = ptr->lc_blight_sw_mode;

	IoReg_Write32(LC_LC_SRAM_CTRL_reg, blu_lc_sram_ctrl.regValue);
	IoReg_Write32(LC_LC_Inter_HCtrl1_reg, blu_lc_inter_hctrl1.regValue);
	IoReg_Write32(LC_LC_Inter_HCtrl2_reg, blu_lc_inter_hctrl2.regValue);
	IoReg_Write32(LC_LC_Inter_VCtrl1_reg, blu_lc_inter_vctrl1.regValue);
	IoReg_Write32(LC_LC_Inter_VCtrl2_reg, blu_lc_inter_vctrl2.regValue);

	IoReg_Write32(LC_LC_BLIGHT_AP_reg, blu_lc_blight_ap.regValue);
	IoReg_Write32(LC_LC_BLIGHT_DP_reg, blu_lc_blight_dp.regValue);

}

void drvif_color_set_LC_BL_Profile_Interpolation_Table(unsigned int *ptr, unsigned char mode ,unsigned char tab_size)
{
	int i = 0;
	unsigned char tab_hsize = 0, tab_vsize = 0;

	lc_lc_inter_hctrl1_RBUS blu_lc_inter_hctrl1;
	lc_lc_inter_vctrl1_RBUS blu_lc_inter_vctrl1;

	lc_lc_sram_ctrl_RBUS blu_lc_sram_ctrl;

	//* by table
	lc_lc_vtab_ap_RBUS blu_lc_vtab_ap;
	lc_lc_vtab_dp_RBUS blu_lc_vtab_dp;
	lc_lc_htab_ap_RBUS blu_lc_htab_ap;
	lc_lc_htab_dp_RBUS blu_lc_htab_dp;
	//*/
	blu_lc_inter_hctrl1.regValue= IoReg_Read32(LC_LC_Inter_HCtrl1_reg);
	blu_lc_inter_vctrl1.regValue = IoReg_Read32(LC_LC_Inter_VCtrl1_reg);

	tab_hsize = blu_lc_inter_hctrl1.lc_tab_hsize;
	tab_vsize = blu_lc_inter_vctrl1.lc_tab_vsize;

	if(mode == 0)
	{
		//* by table
		blu_lc_htab_ap.regValue = IoReg_Read32(LC_LC_HTAB_AP_reg);
		blu_lc_htab_dp.regValue = IoReg_Read32(LC_LC_HTAB_DP_reg);
		//*/
		blu_lc_sram_ctrl.regValue = IoReg_Read32(LC_LC_SRAM_CTRL_reg);

		blu_lc_sram_ctrl.lc_table_sw_mode = 1; // software mode enable
		IoReg_Write32(LC_LC_SRAM_CTRL_reg, blu_lc_sram_ctrl.regValue);

		blu_lc_htab_ap.lc_htab_adr = 0;
		IoReg_Write32(LC_LC_HTAB_AP_reg, blu_lc_htab_ap.regValue);

		for(i=0;i<(tab_size/2+tab_size%2);i++)
		{
			blu_lc_htab_dp.lc_htab_dat_msb= *(ptr+i*2+1);//ptr->ld_htab_dat_msb;
			blu_lc_htab_dp.lc_htab_dat_lsb = *(ptr+i*2);//ptr->ld_htab_dat_lsb;
			IoReg_Write32(LC_LC_HTAB_DP_reg, blu_lc_htab_dp.regValue);
		}
	}
	else
	{
		//* by table
		blu_lc_vtab_ap.regValue = IoReg_Read32(LC_LC_VTAB_AP_reg);
		blu_lc_vtab_dp.regValue = IoReg_Read32(LC_LC_VTAB_DP_reg);
		//*/
		blu_lc_sram_ctrl.regValue = IoReg_Read32(LC_LC_SRAM_CTRL_reg);

		blu_lc_sram_ctrl.lc_table_sw_mode = 1; // software mode enable
		IoReg_Write32(LC_LC_SRAM_CTRL_reg, blu_lc_sram_ctrl.regValue);

		blu_lc_vtab_ap.lc_vtab_adr = 0;
		IoReg_Write32(LC_LC_VTAB_AP_reg, blu_lc_vtab_ap.regValue);

		for(i=0;i<(tab_size/2+tab_size%2);i++)
		{
			blu_lc_vtab_dp.lc_vtab_dat_msb = *(ptr+i*2+1);//ptr->ld_vtab_dat_msb;
			blu_lc_vtab_dp.lc_vtab_dat_lsb = *(ptr+i*2);//ptr->ld_vtab_dat_lsb;
			IoReg_Write32(LC_LC_VTAB_DP_reg, blu_lc_vtab_dp.regValue);
		}

	}
	blu_lc_sram_ctrl.lc_table_sw_mode = 0; // software mode disable
	IoReg_Write32(LC_LC_SRAM_CTRL_reg, blu_lc_sram_ctrl.regValue);

}



void drvif_color_set_LC_Demo_Window(DRV_LC_Demo_Window *ptr)
{
	lc_lc_demo_window_ctrl0_RBUS blu_lc_demo_window_ctrl0;
	lc_lc_demo_window_ctrl1_RBUS blu_lc_demo_window_ctrl1;

	blu_lc_demo_window_ctrl0.regValue = IoReg_Read32(LC_LC_Demo_window_ctrl0_reg);
	blu_lc_demo_window_ctrl1.regValue = IoReg_Read32(LC_LC_Demo_window_ctrl1_reg);

	blu_lc_demo_window_ctrl0.lc_demo_en = ptr->lc_demo_en;
	blu_lc_demo_window_ctrl0.lc_demo_mode = ptr->lc_demo_mode;
	blu_lc_demo_window_ctrl0.lc_demo_top = ptr->lc_demo_top;
	blu_lc_demo_window_ctrl0.lc_demo_bottom = ptr->lc_demo_bottom;
	blu_lc_demo_window_ctrl1.lc_demo_left = ptr->lc_demo_left;
	blu_lc_demo_window_ctrl1.lc_demo_right = ptr->lc_demo_right;

	IoReg_Write32(LC_LC_Demo_window_ctrl0_reg, blu_lc_demo_window_ctrl0.regValue);
	IoReg_Write32(LC_LC_Demo_window_ctrl1_reg, blu_lc_demo_window_ctrl1.regValue);

}

void drvif_color_set_LC_ToneMapping_Grid0(DRV_LC_ToneMapping_Grid0 *ptr)
{
	lc_lc_tonemapping_grid0_0_RBUS lc_tonemapping_grid0_0;
	lc_lc_tonemapping_grid0_1_RBUS lc_tonemapping_grid0_1;
	lc_lc_tonemapping_grid0_2_RBUS lc_tonemapping_grid0_2;
	lc_lc_tonemapping_grid0_3_RBUS lc_tonemapping_grid0_3;
	lc_lc_tonemapping_grid0_4_RBUS lc_tonemapping_grid0_4;
	lc_lc_tonemapping_grid0_5_RBUS lc_tonemapping_grid0_5;
	lc_lc_tonemapping_grid0_6_RBUS lc_tonemapping_grid0_6;
	lc_lc_tonemapping_grid0_7_RBUS lc_tonemapping_grid0_7;
	lc_lc_tonemapping_grid0_8_RBUS lc_tonemapping_grid0_8;
	lc_lc_tonemapping_grid0_9_RBUS lc_tonemapping_grid0_9;
	lc_lc_tonemapping_grid0_10_RBUS lc_tonemapping_grid0_10;
	lc_lc_tonemapping_grid0_11_RBUS lc_tonemapping_grid0_11;
	lc_lc_tonemapping_grid0_12_RBUS lc_tonemapping_grid0_12;
	lc_lc_tonemapping_grid0_13_RBUS lc_tonemapping_grid0_13;
	lc_lc_tonemapping_grid0_14_RBUS lc_tonemapping_grid0_14;
	lc_lc_tonemapping_grid0_15_RBUS lc_tonemapping_grid0_15;

	lc_tonemapping_grid0_0.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_0_reg);
	lc_tonemapping_grid0_1.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_1_reg);
	lc_tonemapping_grid0_2.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_2_reg);
	lc_tonemapping_grid0_3.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_3_reg);
	lc_tonemapping_grid0_4.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_4_reg);
	lc_tonemapping_grid0_5.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_5_reg);
	lc_tonemapping_grid0_6.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_6_reg);
	lc_tonemapping_grid0_7.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_7_reg);
	lc_tonemapping_grid0_8.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_8_reg);
	lc_tonemapping_grid0_9.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_9_reg);
	lc_tonemapping_grid0_10.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_10_reg);
	lc_tonemapping_grid0_11.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_11_reg);
	lc_tonemapping_grid0_12.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_12_reg);
	lc_tonemapping_grid0_13.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_13_reg);
	lc_tonemapping_grid0_14.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_14_reg);
	lc_tonemapping_grid0_15.regValue = IoReg_Read32(LC_LC_ToneMapping_grid0_15_reg);

	lc_tonemapping_grid0_0.lc_tmap_g0_th1 = ptr->lc_tmap_g0_th1;
	lc_tonemapping_grid0_1.lc_tmap_g0_th2 = ptr->lc_tmap_g0_th2;
	lc_tonemapping_grid0_1.lc_tmap_g0_th3 = ptr->lc_tmap_g0_th3;
	lc_tonemapping_grid0_2.lc_tmap_g0_th4 = ptr->lc_tmap_g0_th4;
	lc_tonemapping_grid0_2.lc_tmap_g0_th5 = ptr->lc_tmap_g0_th5;
	lc_tonemapping_grid0_3.lc_tmap_g0_th6 = ptr->lc_tmap_g0_th6;
	lc_tonemapping_grid0_3.lc_tmap_g0_th7 = ptr->lc_tmap_g0_th7;
	lc_tonemapping_grid0_4.lc_tmap_g0_th8 = ptr->lc_tmap_g0_th8;
	lc_tonemapping_grid0_4.lc_tmap_g0_th9 = ptr->lc_tmap_g0_th9;
	lc_tonemapping_grid0_5.lc_tmap_g0_th10 = ptr->lc_tmap_g0_th10;
	lc_tonemapping_grid0_5.lc_tmap_g0_th11 = ptr->lc_tmap_g0_th11;
	lc_tonemapping_grid0_6.lc_tmap_g0_th12 = ptr->lc_tmap_g0_th12;
	lc_tonemapping_grid0_6.lc_tmap_g0_th13 = ptr->lc_tmap_g0_th13;
	lc_tonemapping_grid0_7.lc_tmap_g0_th14 = ptr->lc_tmap_g0_th14;
	lc_tonemapping_grid0_7.lc_tmap_g0_th15 = ptr->lc_tmap_g0_th15;
	lc_tonemapping_grid0_8.lc_tmap_g0_th16 = ptr->lc_tmap_g0_th16;
	lc_tonemapping_grid0_8.lc_tmap_g0_th17 = ptr->lc_tmap_g0_th17;
	lc_tonemapping_grid0_9.lc_tmap_g0_th18 = ptr->lc_tmap_g0_th18;
	lc_tonemapping_grid0_9.lc_tmap_g0_th19 = ptr->lc_tmap_g0_th19;
	lc_tonemapping_grid0_10.lc_tmap_g0_th20 = ptr->lc_tmap_g0_th20;
	lc_tonemapping_grid0_10.lc_tmap_g0_th21 = ptr->lc_tmap_g0_th21;
	lc_tonemapping_grid0_11.lc_tmap_g0_th22 = ptr->lc_tmap_g0_th22;
	lc_tonemapping_grid0_11.lc_tmap_g0_th23 = ptr->lc_tmap_g0_th23;
	lc_tonemapping_grid0_12.lc_tmap_g0_th24 = ptr->lc_tmap_g0_th24;
	lc_tonemapping_grid0_12.lc_tmap_g0_th25 = ptr->lc_tmap_g0_th25;
	lc_tonemapping_grid0_13.lc_tmap_g0_th26 = ptr->lc_tmap_g0_th26;
	lc_tonemapping_grid0_13.lc_tmap_g0_th27 = ptr->lc_tmap_g0_th27;
	lc_tonemapping_grid0_14.lc_tmap_g0_th28 = ptr->lc_tmap_g0_th28;
	lc_tonemapping_grid0_14.lc_tmap_g0_th29 = ptr->lc_tmap_g0_th29;
	lc_tonemapping_grid0_15.lc_tmap_g0_th30 = ptr->lc_tmap_g0_th30;
	lc_tonemapping_grid0_15.lc_tmap_g0_th31 = ptr->lc_tmap_g0_th31;

	IoReg_Write32(LC_LC_ToneMapping_grid0_0_reg, lc_tonemapping_grid0_0.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_1_reg, lc_tonemapping_grid0_1.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_2_reg, lc_tonemapping_grid0_2.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_3_reg, lc_tonemapping_grid0_3.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_4_reg, lc_tonemapping_grid0_4.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_5_reg, lc_tonemapping_grid0_5.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_6_reg, lc_tonemapping_grid0_6.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_7_reg, lc_tonemapping_grid0_7.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_8_reg, lc_tonemapping_grid0_8.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_9_reg, lc_tonemapping_grid0_9.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_10_reg, lc_tonemapping_grid0_10.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_11_reg, lc_tonemapping_grid0_11.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_12_reg, lc_tonemapping_grid0_12.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_13_reg, lc_tonemapping_grid0_13.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_14_reg, lc_tonemapping_grid0_14.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid0_15_reg, lc_tonemapping_grid0_15.regValue);


}

void drvif_color_set_LC_ToneMapping_Grid2(DRV_LC_ToneMapping_Grid2 *ptr)
{
	lc_lc_tonemapping_grid2_0_RBUS lc_tonemapping_grid2_0;
	lc_lc_tonemapping_grid2_1_RBUS lc_tonemapping_grid2_1;
	lc_lc_tonemapping_grid2_2_RBUS lc_tonemapping_grid2_2;
	lc_lc_tonemapping_grid2_3_RBUS lc_tonemapping_grid2_3;
	lc_lc_tonemapping_grid2_4_RBUS lc_tonemapping_grid2_4;
	lc_lc_tonemapping_grid2_5_RBUS lc_tonemapping_grid2_5;
	lc_lc_tonemapping_grid2_6_RBUS lc_tonemapping_grid2_6;
	lc_lc_tonemapping_grid2_7_RBUS lc_tonemapping_grid2_7;
	lc_lc_tonemapping_grid2_8_RBUS lc_tonemapping_grid2_8;
	lc_lc_tonemapping_grid2_9_RBUS lc_tonemapping_grid2_9;
	lc_lc_tonemapping_grid2_10_RBUS lc_tonemapping_grid2_10;
	lc_lc_tonemapping_grid2_11_RBUS lc_tonemapping_grid2_11;
	lc_lc_tonemapping_grid2_12_RBUS lc_tonemapping_grid2_12;
	lc_lc_tonemapping_grid2_13_RBUS lc_tonemapping_grid2_13;
	lc_lc_tonemapping_grid2_14_RBUS lc_tonemapping_grid2_14;
	lc_lc_tonemapping_grid2_15_RBUS lc_tonemapping_grid2_15;

	lc_tonemapping_grid2_0.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_0_reg);
	lc_tonemapping_grid2_1.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_1_reg);
	lc_tonemapping_grid2_2.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_2_reg);
	lc_tonemapping_grid2_3.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_3_reg);
	lc_tonemapping_grid2_4.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_4_reg);
	lc_tonemapping_grid2_5.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_5_reg);
	lc_tonemapping_grid2_6.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_6_reg);
	lc_tonemapping_grid2_7.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_7_reg);
	lc_tonemapping_grid2_8.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_8_reg);
	lc_tonemapping_grid2_9.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_9_reg);
	lc_tonemapping_grid2_10.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_10_reg);
	lc_tonemapping_grid2_11.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_11_reg);
	lc_tonemapping_grid2_12.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_12_reg);
	lc_tonemapping_grid2_13.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_13_reg);
	lc_tonemapping_grid2_14.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_14_reg);
	lc_tonemapping_grid2_15.regValue = IoReg_Read32(LC_LC_ToneMapping_grid2_15_reg);

	lc_tonemapping_grid2_0.lc_tmap_g2_th1 = ptr->lc_tmap_g2_th1;
	lc_tonemapping_grid2_1.lc_tmap_g2_th2 = ptr->lc_tmap_g2_th2;
	lc_tonemapping_grid2_1.lc_tmap_g2_th3 = ptr->lc_tmap_g2_th3;
	lc_tonemapping_grid2_2.lc_tmap_g2_th4 = ptr->lc_tmap_g2_th4;
	lc_tonemapping_grid2_2.lc_tmap_g2_th5 = ptr->lc_tmap_g2_th5;
	lc_tonemapping_grid2_3.lc_tmap_g2_th6 = ptr->lc_tmap_g2_th6;
	lc_tonemapping_grid2_3.lc_tmap_g2_th7 = ptr->lc_tmap_g2_th7;
	lc_tonemapping_grid2_4.lc_tmap_g2_th8 = ptr->lc_tmap_g2_th8;
	lc_tonemapping_grid2_4.lc_tmap_g2_th9 = ptr->lc_tmap_g2_th9;
	lc_tonemapping_grid2_5.lc_tmap_g2_th10 = ptr->lc_tmap_g2_th10;
	lc_tonemapping_grid2_5.lc_tmap_g2_th11 = ptr->lc_tmap_g2_th11;
	lc_tonemapping_grid2_6.lc_tmap_g2_th12 = ptr->lc_tmap_g2_th12;
	lc_tonemapping_grid2_6.lc_tmap_g2_th13 = ptr->lc_tmap_g2_th13;
	lc_tonemapping_grid2_7.lc_tmap_g2_th14 = ptr->lc_tmap_g2_th14;
	lc_tonemapping_grid2_7.lc_tmap_g2_th15 = ptr->lc_tmap_g2_th15;
	lc_tonemapping_grid2_8.lc_tmap_g2_th16 = ptr->lc_tmap_g2_th16;
	lc_tonemapping_grid2_8.lc_tmap_g2_th17 = ptr->lc_tmap_g2_th17;
	lc_tonemapping_grid2_9.lc_tmap_g2_th18 = ptr->lc_tmap_g2_th18;
	lc_tonemapping_grid2_9.lc_tmap_g2_th19 = ptr->lc_tmap_g2_th19;
	lc_tonemapping_grid2_10.lc_tmap_g2_th20 = ptr->lc_tmap_g2_th20;
	lc_tonemapping_grid2_10.lc_tmap_g2_th21 = ptr->lc_tmap_g2_th21;
	lc_tonemapping_grid2_11.lc_tmap_g2_th22 = ptr->lc_tmap_g2_th22;
	lc_tonemapping_grid2_11.lc_tmap_g2_th23 = ptr->lc_tmap_g2_th23;
	lc_tonemapping_grid2_12.lc_tmap_g2_th24 = ptr->lc_tmap_g2_th24;
	lc_tonemapping_grid2_12.lc_tmap_g2_th25 = ptr->lc_tmap_g2_th25;
	lc_tonemapping_grid2_13.lc_tmap_g2_th26 = ptr->lc_tmap_g2_th26;
	lc_tonemapping_grid2_13.lc_tmap_g2_th27 = ptr->lc_tmap_g2_th27;
	lc_tonemapping_grid2_14.lc_tmap_g2_th28 = ptr->lc_tmap_g2_th28;
	lc_tonemapping_grid2_14.lc_tmap_g2_th29 = ptr->lc_tmap_g2_th29;
	lc_tonemapping_grid2_15.lc_tmap_g2_th30 = ptr->lc_tmap_g2_th30;
	lc_tonemapping_grid2_15.lc_tmap_g2_th31 = ptr->lc_tmap_g2_th31;

	IoReg_Write32(LC_LC_ToneMapping_grid2_0_reg, lc_tonemapping_grid2_0.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_1_reg, lc_tonemapping_grid2_1.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_2_reg, lc_tonemapping_grid2_2.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_3_reg, lc_tonemapping_grid2_3.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_4_reg, lc_tonemapping_grid2_4.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_5_reg, lc_tonemapping_grid2_5.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_6_reg, lc_tonemapping_grid2_6.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_7_reg, lc_tonemapping_grid2_7.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_8_reg, lc_tonemapping_grid2_8.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_9_reg, lc_tonemapping_grid2_9.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_10_reg, lc_tonemapping_grid2_10.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_11_reg, lc_tonemapping_grid2_11.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_12_reg, lc_tonemapping_grid2_12.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_13_reg, lc_tonemapping_grid2_13.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_14_reg, lc_tonemapping_grid2_14.regValue);
	IoReg_Write32(LC_LC_ToneMapping_grid2_15_reg, lc_tonemapping_grid2_15.regValue);


}

void drvif_color_set_LC_ToneMapping_CurveSelect(DRV_LC_ToneMapping_CurveSelect *ptr)
{
	lc_lc_tonemapping_curve_sel_0_RBUS curve_sel_0;
	lc_lc_tonemapping_curve_sel_1_RBUS curve_sel_1;
	lc_lc_tonemapping_curve_sel_2_RBUS curve_sel_2;
	lc_lc_tonemapping_curve_sel_3_RBUS curve_sel_3;

	curve_sel_0.regValue = IoReg_Read32(LC_LC_ToneMapping_Curve_sel_0_reg);
	curve_sel_1.regValue = IoReg_Read32(LC_LC_ToneMapping_Curve_sel_1_reg);
	curve_sel_2.regValue = IoReg_Read32(LC_LC_ToneMapping_Curve_sel_2_reg);
	curve_sel_3.regValue = IoReg_Read32(LC_LC_ToneMapping_Curve_sel_3_reg);

	curve_sel_0.lc_tmap_curve0_grid = ptr->lc_tmap_curve0_grid;
	curve_sel_0.lc_tmap_curve0_tone = ptr->lc_tmap_curve0_tone;
	curve_sel_0.lc_tmap_curve1_grid = ptr->lc_tmap_curve1_grid;
	curve_sel_0.lc_tmap_curve1_tone = ptr->lc_tmap_curve1_tone;
	curve_sel_1.lc_tmap_curve2_grid = ptr->lc_tmap_curve2_grid;
	curve_sel_1.lc_tmap_curve2_tone = ptr->lc_tmap_curve2_tone;
	curve_sel_1.lc_tmap_curve3_grid = ptr->lc_tmap_curve3_grid;
	curve_sel_1.lc_tmap_curve3_tone = ptr->lc_tmap_curve3_tone;
	curve_sel_2.lc_tmap_curve4_grid = ptr->lc_tmap_curve4_grid;
	curve_sel_2.lc_tmap_curve4_tone = ptr->lc_tmap_curve4_tone;
	curve_sel_2.lc_tmap_curve5_grid = ptr->lc_tmap_curve5_grid;
	curve_sel_2.lc_tmap_curve5_tone = ptr->lc_tmap_curve5_tone;
	curve_sel_3.lc_tmap_curve6_grid = ptr->lc_tmap_curve6_grid;
	curve_sel_3.lc_tmap_curve6_tone = ptr->lc_tmap_curve6_tone;
	curve_sel_3.lc_tmap_curve7_grid = ptr->lc_tmap_curve7_grid;
	curve_sel_3.lc_tmap_curve7_tone = ptr->lc_tmap_curve7_tone;

	IoReg_Write32(LC_LC_ToneMapping_Curve_sel_0_reg, curve_sel_0.regValue);
	IoReg_Write32(LC_LC_ToneMapping_Curve_sel_1_reg, curve_sel_1.regValue);
	IoReg_Write32(LC_LC_ToneMapping_Curve_sel_2_reg, curve_sel_2.regValue);
	IoReg_Write32(LC_LC_ToneMapping_Curve_sel_3_reg, curve_sel_3.regValue);


}

void drvif_color_set_LC_ToneMapping_Blend(DRV_LC_ToneMapping_Blend *ptr)
{
	lc_lc_tonemapping_blending_RBUS blending;

	blending.regValue = IoReg_Read32(LC_LC_ToneMapping_blending_reg);

	blending.lc_tmap_blend_factor = ptr->lc_tmap_blend_factor;
	blending.lc_tmap_slope_unit = ptr->lc_tmap_slope_unit;

	IoReg_Write32(LC_LC_ToneMapping_blending_reg, blending.regValue);
}


void drvif_color_set_LC_Shpnr_Gain1st(DRV_LC_Shpnr_Gain1st *ptr)
{
	lc_lc_local_shpnr_1st_gain_0_RBUS shpnr_1st_gain_0;
	lc_lc_local_shpnr_1st_gain_1_RBUS shpnr_1st_gain_1;
	lc_lc_local_shpnr_1st_gain_2_RBUS shpnr_1st_gain_2;
	lc_lc_local_shpnr_1st_gain_3_RBUS shpnr_1st_gain_3;
	lc_lc_local_shpnr_1st_gain_4_RBUS shpnr_1st_gain_4;
	lc_lc_local_shpnr_1st_gain_5_RBUS shpnr_1st_gain_5;
	lc_lc_local_shpnr_1st_gain_6_RBUS shpnr_1st_gain_6;
	lc_lc_local_shpnr_1st_gain_7_RBUS shpnr_1st_gain_7;
	lc_lc_local_shpnr_1st_gain_8_RBUS shpnr_1st_gain_8;

	shpnr_1st_gain_0.regValue = IoReg_Read32(LC_LC_Local_Shpnr_1st_gain_0_reg);
	shpnr_1st_gain_1.regValue = IoReg_Read32(LC_LC_Local_Shpnr_1st_gain_1_reg);
	shpnr_1st_gain_2.regValue = IoReg_Read32(LC_LC_Local_Shpnr_1st_gain_2_reg);
	shpnr_1st_gain_3.regValue = IoReg_Read32(LC_LC_Local_Shpnr_1st_gain_3_reg);
	shpnr_1st_gain_4.regValue = IoReg_Read32(LC_LC_Local_Shpnr_1st_gain_4_reg);
	shpnr_1st_gain_5.regValue = IoReg_Read32(LC_LC_Local_Shpnr_1st_gain_5_reg);
	shpnr_1st_gain_6.regValue = IoReg_Read32(LC_LC_Local_Shpnr_1st_gain_6_reg);
	shpnr_1st_gain_7.regValue = IoReg_Read32(LC_LC_Local_Shpnr_1st_gain_7_reg);
	shpnr_1st_gain_8.regValue = IoReg_Read32(LC_LC_Local_Shpnr_1st_gain_8_reg);

	shpnr_1st_gain_0.lc_gain_by_yin_0 = ptr->lc_gain_by_yin_0;
	shpnr_1st_gain_0.lc_gain_by_yin_1 = ptr->lc_gain_by_yin_1;
	shpnr_1st_gain_0.lc_gain_by_yin_2 = ptr->lc_gain_by_yin_2;
	shpnr_1st_gain_0.lc_gain_by_yin_3 = ptr->lc_gain_by_yin_3;
	shpnr_1st_gain_1.lc_gain_by_yin_4 = ptr->lc_gain_by_yin_4;
	shpnr_1st_gain_1.lc_gain_by_yin_5 = ptr->lc_gain_by_yin_5;
	shpnr_1st_gain_1.lc_gain_by_yin_6 = ptr->lc_gain_by_yin_6;
	shpnr_1st_gain_1.lc_gain_by_yin_7 = ptr->lc_gain_by_yin_7;
	shpnr_1st_gain_2.lc_gain_by_yin_8 = ptr->lc_gain_by_yin_8;
	shpnr_1st_gain_2.lc_gain_by_yin_9 = ptr->lc_gain_by_yin_9;
	shpnr_1st_gain_2.lc_gain_by_yin_10 = ptr->lc_gain_by_yin_10;
	shpnr_1st_gain_2.lc_gain_by_yin_11 = ptr->lc_gain_by_yin_11;
	shpnr_1st_gain_3.lc_gain_by_yin_12 = ptr->lc_gain_by_yin_12;
	shpnr_1st_gain_3.lc_gain_by_yin_13 = ptr->lc_gain_by_yin_13;
	shpnr_1st_gain_3.lc_gain_by_yin_14 = ptr->lc_gain_by_yin_14;
	shpnr_1st_gain_3.lc_gain_by_yin_15 = ptr->lc_gain_by_yin_15;
	shpnr_1st_gain_4.lc_gain_by_yin_16 = ptr->lc_gain_by_yin_16;
	shpnr_1st_gain_4.lc_gain_by_yin_17 = ptr->lc_gain_by_yin_17;
	shpnr_1st_gain_4.lc_gain_by_yin_18 = ptr->lc_gain_by_yin_18;
	shpnr_1st_gain_4.lc_gain_by_yin_19 = ptr->lc_gain_by_yin_19;
	shpnr_1st_gain_5.lc_gain_by_yin_20 = ptr->lc_gain_by_yin_20;
	shpnr_1st_gain_5.lc_gain_by_yin_21 = ptr->lc_gain_by_yin_21;
	shpnr_1st_gain_5.lc_gain_by_yin_22 = ptr->lc_gain_by_yin_22;
	shpnr_1st_gain_5.lc_gain_by_yin_23 = ptr->lc_gain_by_yin_23;
	shpnr_1st_gain_6.lc_gain_by_yin_24 = ptr->lc_gain_by_yin_24;
	shpnr_1st_gain_6.lc_gain_by_yin_25 = ptr->lc_gain_by_yin_25;
	shpnr_1st_gain_6.lc_gain_by_yin_26 = ptr->lc_gain_by_yin_26;
	shpnr_1st_gain_6.lc_gain_by_yin_27 = ptr->lc_gain_by_yin_27;
	shpnr_1st_gain_7.lc_gain_by_yin_28 = ptr->lc_gain_by_yin_28;
	shpnr_1st_gain_7.lc_gain_by_yin_29 = ptr->lc_gain_by_yin_29;
	shpnr_1st_gain_7.lc_gain_by_yin_30 = ptr->lc_gain_by_yin_30;
	shpnr_1st_gain_7.lc_gain_by_yin_31 = ptr->lc_gain_by_yin_31;
	shpnr_1st_gain_8.lc_gain_by_yin_32 = ptr->lc_gain_by_yin_32;
	shpnr_1st_gain_8.lc_gain_by_yin_divisor = ptr->lc_gain_by_yin_divisor;
	#if defined(CONFIG_RTK_AI_DRV)
		lc_gainbyy_offset[0]=ptr->lc_gain_by_yin_0;
		lc_gainbyy_offset[1]=ptr->lc_gain_by_yin_1;
		lc_gainbyy_offset[2]=ptr->lc_gain_by_yin_2;	
		lc_gainbyy_offset[3]=ptr->lc_gain_by_yin_3;
		lc_gainbyy_offset[4]=ptr->lc_gain_by_yin_4;
		lc_gainbyy_offset[5]=ptr->lc_gain_by_yin_5;	
		lc_gainbyy_offset[6]=ptr->lc_gain_by_yin_6;
		lc_gainbyy_offset[7]=ptr->lc_gain_by_yin_7;
		lc_gainbyy_offset[8]=ptr->lc_gain_by_yin_8;	
		lc_gainbyy_offset[9]=ptr->lc_gain_by_yin_9;
		lc_gainbyy_offset[10]= ptr->lc_gain_by_yin_10;
		lc_gainbyy_offset[11]= ptr->lc_gain_by_yin_11;		
		lc_gainbyy_offset[12]= ptr->lc_gain_by_yin_12;
		lc_gainbyy_offset[13]= ptr->lc_gain_by_yin_13;
		lc_gainbyy_offset[14]= ptr->lc_gain_by_yin_14;
		lc_gainbyy_offset[15]= ptr->lc_gain_by_yin_15;
		lc_gainbyy_offset[16]= ptr->lc_gain_by_yin_16;
		lc_gainbyy_offset[17]= ptr->lc_gain_by_yin_17;
		lc_gainbyy_offset[18]= ptr->lc_gain_by_yin_18;		
		lc_gainbyy_offset[19]= ptr->lc_gain_by_yin_19;
		lc_gainbyy_offset[20]= ptr->lc_gain_by_yin_20;
		lc_gainbyy_offset[21]= ptr->lc_gain_by_yin_21;		
		lc_gainbyy_offset[22]= ptr->lc_gain_by_yin_22;
		lc_gainbyy_offset[23]= ptr->lc_gain_by_yin_23;
		lc_gainbyy_offset[24]= ptr->lc_gain_by_yin_24;		
		lc_gainbyy_offset[25]= ptr->lc_gain_by_yin_25;
		lc_gainbyy_offset[26]= ptr->lc_gain_by_yin_26;
		lc_gainbyy_offset[27]= ptr->lc_gain_by_yin_27;		
		lc_gainbyy_offset[28]= ptr->lc_gain_by_yin_28;
		lc_gainbyy_offset[29]= ptr->lc_gain_by_yin_29;
		lc_gainbyy_offset[30]= ptr->lc_gain_by_yin_30;
		lc_gainbyy_offset[31]= ptr->lc_gain_by_yin_31;
		lc_gainbyy_offset[32]= ptr->lc_gain_by_yin_32;	
	#endif

	IoReg_Write32(LC_LC_Local_Shpnr_1st_gain_0_reg, shpnr_1st_gain_0.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_1st_gain_1_reg, shpnr_1st_gain_1.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_1st_gain_2_reg, shpnr_1st_gain_2.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_1st_gain_3_reg, shpnr_1st_gain_3.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_1st_gain_4_reg, shpnr_1st_gain_4.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_1st_gain_5_reg, shpnr_1st_gain_5.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_1st_gain_6_reg, shpnr_1st_gain_6.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_1st_gain_7_reg, shpnr_1st_gain_7.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_1st_gain_8_reg, shpnr_1st_gain_8.regValue);

}

void drvif_color_set_LC_Shpnr_Gain2nd(DRV_LC_Shpnr_Gain2nd *ptr)
{
	lc_lc_local_shpnr_2nd_gain_0_RBUS shpnr_2nd_gain_0;
	lc_lc_local_shpnr_2nd_gain_1_RBUS shpnr_2nd_gain_1;
	lc_lc_local_shpnr_2nd_gain_2_RBUS shpnr_2nd_gain_2;
	lc_lc_local_shpnr_2nd_gain_3_RBUS shpnr_2nd_gain_3;
	lc_lc_local_shpnr_2nd_gain_4_RBUS shpnr_2nd_gain_4;
	lc_lc_local_shpnr_2nd_gain_5_RBUS shpnr_2nd_gain_5;
	lc_lc_local_shpnr_2nd_gain_6_RBUS shpnr_2nd_gain_6;
	lc_lc_local_shpnr_2nd_gain_7_RBUS shpnr_2nd_gain_7;
	lc_lc_local_shpnr_2nd_gain_8_RBUS shpnr_2nd_gain_8;

	shpnr_2nd_gain_0.regValue = IoReg_Read32(LC_LC_Local_Shpnr_2nd_gain_0_reg);
	shpnr_2nd_gain_1.regValue = IoReg_Read32(LC_LC_Local_Shpnr_2nd_gain_1_reg);
	shpnr_2nd_gain_2.regValue = IoReg_Read32(LC_LC_Local_Shpnr_2nd_gain_2_reg);
	shpnr_2nd_gain_3.regValue = IoReg_Read32(LC_LC_Local_Shpnr_2nd_gain_3_reg);
	shpnr_2nd_gain_4.regValue = IoReg_Read32(LC_LC_Local_Shpnr_2nd_gain_4_reg);
	shpnr_2nd_gain_5.regValue = IoReg_Read32(LC_LC_Local_Shpnr_2nd_gain_5_reg);
	shpnr_2nd_gain_6.regValue = IoReg_Read32(LC_LC_Local_Shpnr_2nd_gain_6_reg);
	shpnr_2nd_gain_7.regValue = IoReg_Read32(LC_LC_Local_Shpnr_2nd_gain_7_reg);
	shpnr_2nd_gain_8.regValue = IoReg_Read32(LC_LC_Local_Shpnr_2nd_gain_8_reg);

	shpnr_2nd_gain_0.lc_gain_by_ydiff_0 = ptr->lc_gain_by_ydiff_0;
	shpnr_2nd_gain_0.lc_gain_by_ydiff_1 = ptr->lc_gain_by_ydiff_1;
	shpnr_2nd_gain_0.lc_gain_by_ydiff_2 = ptr->lc_gain_by_ydiff_2;
	shpnr_2nd_gain_0.lc_gain_by_ydiff_3 = ptr->lc_gain_by_ydiff_3;
	shpnr_2nd_gain_1.lc_gain_by_ydiff_4 = ptr->lc_gain_by_ydiff_4;
	shpnr_2nd_gain_1.lc_gain_by_ydiff_5 = ptr->lc_gain_by_ydiff_5;
	shpnr_2nd_gain_1.lc_gain_by_ydiff_6 = ptr->lc_gain_by_ydiff_6;
	shpnr_2nd_gain_1.lc_gain_by_ydiff_7 = ptr->lc_gain_by_ydiff_7;
	shpnr_2nd_gain_2.lc_gain_by_ydiff_8 = ptr->lc_gain_by_ydiff_8;
	shpnr_2nd_gain_2.lc_gain_by_ydiff_9 = ptr->lc_gain_by_ydiff_9;
	shpnr_2nd_gain_2.lc_gain_by_ydiff_10 = ptr->lc_gain_by_ydiff_10;
	shpnr_2nd_gain_2.lc_gain_by_ydiff_11 = ptr->lc_gain_by_ydiff_11;
	shpnr_2nd_gain_3.lc_gain_by_ydiff_12 = ptr->lc_gain_by_ydiff_12;
	shpnr_2nd_gain_3.lc_gain_by_ydiff_13 = ptr->lc_gain_by_ydiff_13;
	shpnr_2nd_gain_3.lc_gain_by_ydiff_14 = ptr->lc_gain_by_ydiff_14;
	shpnr_2nd_gain_3.lc_gain_by_ydiff_15 = ptr->lc_gain_by_ydiff_15;
	shpnr_2nd_gain_4.lc_gain_by_ydiff_16 = ptr->lc_gain_by_ydiff_16;
	shpnr_2nd_gain_4.lc_gain_by_ydiff_17 = ptr->lc_gain_by_ydiff_17;
	shpnr_2nd_gain_4.lc_gain_by_ydiff_18 = ptr->lc_gain_by_ydiff_18;
	shpnr_2nd_gain_4.lc_gain_by_ydiff_19 = ptr->lc_gain_by_ydiff_19;
	shpnr_2nd_gain_5.lc_gain_by_ydiff_20 = ptr->lc_gain_by_ydiff_20;
	shpnr_2nd_gain_5.lc_gain_by_ydiff_21 = ptr->lc_gain_by_ydiff_21;
	shpnr_2nd_gain_5.lc_gain_by_ydiff_22 = ptr->lc_gain_by_ydiff_22;
	shpnr_2nd_gain_5.lc_gain_by_ydiff_23 = ptr->lc_gain_by_ydiff_23;
	shpnr_2nd_gain_6.lc_gain_by_ydiff_24 = ptr->lc_gain_by_ydiff_24;
	shpnr_2nd_gain_6.lc_gain_by_ydiff_25 = ptr->lc_gain_by_ydiff_25;
	shpnr_2nd_gain_6.lc_gain_by_ydiff_26 = ptr->lc_gain_by_ydiff_26;
	shpnr_2nd_gain_6.lc_gain_by_ydiff_27 = ptr->lc_gain_by_ydiff_27;
	shpnr_2nd_gain_7.lc_gain_by_ydiff_28 = ptr->lc_gain_by_ydiff_28;
	shpnr_2nd_gain_7.lc_gain_by_ydiff_29 = ptr->lc_gain_by_ydiff_29;
	shpnr_2nd_gain_7.lc_gain_by_ydiff_30 = ptr->lc_gain_by_ydiff_30;
	shpnr_2nd_gain_7.lc_gain_by_ydiff_31 = ptr->lc_gain_by_ydiff_31;
	shpnr_2nd_gain_8.lc_gain_by_ydiff_32 = ptr->lc_gain_by_ydiff_32;
	shpnr_2nd_gain_8.lc_gain_by_ydiff_divisor = ptr->lc_gain_by_ydiff_divisor;
	
	#if defined(CONFIG_RTK_AI_DRV)
		lc_gainbyydiff_offset[0]=ptr->lc_gain_by_ydiff_0;
		lc_gainbyydiff_offset[1]=ptr->lc_gain_by_ydiff_1;
		lc_gainbyydiff_offset[2]=ptr->lc_gain_by_ydiff_2;	
		lc_gainbyydiff_offset[3]=ptr->lc_gain_by_ydiff_3;
		lc_gainbyydiff_offset[4]=ptr->lc_gain_by_ydiff_4;
		lc_gainbyydiff_offset[5]=ptr->lc_gain_by_ydiff_5;	
		lc_gainbyydiff_offset[6]=ptr->lc_gain_by_ydiff_6;
		lc_gainbyydiff_offset[7]=ptr->lc_gain_by_ydiff_7;
		lc_gainbyydiff_offset[8]=ptr->lc_gain_by_ydiff_8;	
		lc_gainbyydiff_offset[9]=ptr->lc_gain_by_ydiff_9;
		lc_gainbyydiff_offset[10]= ptr->lc_gain_by_ydiff_10;
		lc_gainbyydiff_offset[11]= ptr->lc_gain_by_ydiff_11;		
		lc_gainbyydiff_offset[12]= ptr->lc_gain_by_ydiff_12;
		lc_gainbyydiff_offset[13]= ptr->lc_gain_by_ydiff_13;
		lc_gainbyydiff_offset[14]= ptr->lc_gain_by_ydiff_14;
		lc_gainbyydiff_offset[15]= ptr->lc_gain_by_ydiff_15;
		lc_gainbyydiff_offset[16]= ptr->lc_gain_by_ydiff_16;
		lc_gainbyydiff_offset[17]= ptr->lc_gain_by_ydiff_17;
		lc_gainbyydiff_offset[18]= ptr->lc_gain_by_ydiff_18;		
		lc_gainbyydiff_offset[19]= ptr->lc_gain_by_ydiff_19;
		lc_gainbyydiff_offset[20]= ptr->lc_gain_by_ydiff_20;
		lc_gainbyydiff_offset[21]= ptr->lc_gain_by_ydiff_21;		
		lc_gainbyydiff_offset[22]= ptr->lc_gain_by_ydiff_22;
		lc_gainbyydiff_offset[23]= ptr->lc_gain_by_ydiff_23;
		lc_gainbyydiff_offset[24]= ptr->lc_gain_by_ydiff_24;		
		lc_gainbyydiff_offset[25]= ptr->lc_gain_by_ydiff_25;
		lc_gainbyydiff_offset[26]= ptr->lc_gain_by_ydiff_26;
		lc_gainbyydiff_offset[27]= ptr->lc_gain_by_ydiff_27;		
		lc_gainbyydiff_offset[28]= ptr->lc_gain_by_ydiff_28;
		lc_gainbyydiff_offset[29]= ptr->lc_gain_by_ydiff_29;
		lc_gainbyydiff_offset[30]= ptr->lc_gain_by_ydiff_30;
		lc_gainbyydiff_offset[31]= ptr->lc_gain_by_ydiff_31;
		lc_gainbyydiff_offset[32]= ptr->lc_gain_by_ydiff_32;	
	#endif

	IoReg_Write32(LC_LC_Local_Shpnr_2nd_gain_0_reg, shpnr_2nd_gain_0.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_2nd_gain_1_reg, shpnr_2nd_gain_1.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_2nd_gain_2_reg, shpnr_2nd_gain_2.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_2nd_gain_3_reg, shpnr_2nd_gain_3.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_2nd_gain_4_reg, shpnr_2nd_gain_4.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_2nd_gain_5_reg, shpnr_2nd_gain_5.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_2nd_gain_6_reg, shpnr_2nd_gain_6.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_2nd_gain_7_reg, shpnr_2nd_gain_7.regValue);
	IoReg_Write32(LC_LC_Local_Shpnr_2nd_gain_8_reg, shpnr_2nd_gain_8.regValue);

}


void drvif_color_set_LC_Diff_Ctrl0(DRV_LC_Diff_Ctrl0 *ptr)
{
	lc_lc_diff_ctrl0_RBUS diff_ctrl0;

	diff_ctrl0.regValue = IoReg_Read32(LC_LC_diff_ctrl0_reg);

	diff_ctrl0.lc_ydiff_measure_en = ptr->lc_ydiff_measure_en;
	diff_ctrl0.lc_ydiff_abs_th = ptr->lc_ydiff_abs_th;

	IoReg_Write32(LC_LC_diff_ctrl0_reg, diff_ctrl0.regValue);
}

//juwen, add LC : tone mapping curve
void drvif_color_set_LC_ToneMappingSlopePoint(unsigned int *ptr)
{
	int i = 0;
	lc_lc_tonemapping_sram_addr_RBUS lc_tmap_curve_address;//0xb802E130
	lc_lc_tonemapping_sram_data_RBUS lc_tmap_slope_point;//0xb802E134
	lc_lc_global_ctrl1_RBUS blu_lc_global_ctrl1;

	lc_tmap_curve_address.regValue = IoReg_Read32(LC_LC_ToneMapping_SRAM_Addr_reg);//
	lc_tmap_slope_point.regValue = IoReg_Read32(LC_LC_ToneMapping_SRAM_Data_reg);//

	lc_tmap_curve_address.regValue = 0; //
	IoReg_Write32(LC_LC_ToneMapping_SRAM_Addr_reg, lc_tmap_curve_address.regValue);

	for(i=0;i<LC_Curve_ToneM_PointSlope;i++)
	{
		lc_tmap_slope_point.regValue = *(ptr+i);
		IoReg_Write32(LC_LC_ToneMapping_SRAM_Data_reg, lc_tmap_slope_point.regValue);
	}

	blu_lc_global_ctrl1.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);
	blu_lc_global_ctrl1.lc_db_apply = 1;
	IoReg_Write32(LC_LC_Global_Ctrl1_reg, blu_lc_global_ctrl1.regValue);

}

void drvif_color_set_LC_DebugMode(unsigned char DebugMode)
{
	lc_lc_global_ctrl0_RBUS blu_lc_global_ctrl0;
	blu_lc_global_ctrl0.regValue = IoReg_Read32(LC_LC_Global_Ctrl0_reg);
	blu_lc_global_ctrl0.lc_debugmode = DebugMode;
	IoReg_Write32(LC_LC_Global_Ctrl0_reg, blu_lc_global_ctrl0.regValue);
}

void drvif_color_set_HV_Num_Fac_Size(VIP_DRV_Local_Contrast_Region_Num_Size *LC_Region_Num_Size)
{
	lc_lc_global_ctrl2_RBUS blu_lc_global_ctrl2;
	lc_lc_global_ctrl3_RBUS blu_lc_global_ctrl3;
	lc_lc_inter_hctrl1_RBUS blu_lc_inter_hctrl1;
	lc_lc_inter_vctrl1_RBUS blu_lc_inter_vctrl1;
	lc_lc_global_ctrl1_RBUS blu_lc_global_ctrl1;

	blu_lc_global_ctrl2.regValue = IoReg_Read32(LC_LC_Global_Ctrl2_reg);
	blu_lc_global_ctrl3.regValue = IoReg_Read32(LC_LC_Global_Ctrl3_reg);
	blu_lc_inter_hctrl1.regValue = IoReg_Read32(LC_LC_Inter_HCtrl1_reg);
	blu_lc_inter_vctrl1.regValue = IoReg_Read32(LC_LC_Inter_VCtrl1_reg);

	blu_lc_global_ctrl2.lc_valid = 1;
	blu_lc_global_ctrl2.lc_blk_hnum = LC_Region_Num_Size->nBlk_Hnum;
	blu_lc_global_ctrl2.lc_blk_vnum = LC_Region_Num_Size->nBlk_Vnum;
	blu_lc_global_ctrl3.lc_blk_hsize = LC_Region_Num_Size->nBlk_Hsize;
	blu_lc_global_ctrl3.lc_blk_vsize = LC_Region_Num_Size->nBlk_Vsize;
	blu_lc_inter_hctrl1.lc_hfactor = LC_Region_Num_Size->lc_hfactor;
	blu_lc_inter_vctrl1.lc_vfactor = LC_Region_Num_Size->lc_vfactor;

	printk("LC,A,%d,%d\n",blu_lc_inter_hctrl1.lc_hfactor,blu_lc_inter_vctrl1.lc_vfactor);

	IoReg_Write32(LC_LC_Global_Ctrl2_reg, blu_lc_global_ctrl2.regValue);
	IoReg_Write32(LC_LC_Global_Ctrl3_reg, blu_lc_global_ctrl3.regValue);
	IoReg_Write32(LC_LC_Inter_HCtrl1_reg, blu_lc_inter_hctrl1.regValue);
	IoReg_Write32(LC_LC_Inter_VCtrl1_reg, blu_lc_inter_vctrl1.regValue);

	/*merlin5, num, size, factor apply double buffer*/
	blu_lc_global_ctrl1.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);
	blu_lc_global_ctrl1.lc_db_apply = 1;
	IoReg_Write32(LC_LC_Global_Ctrl1_reg, blu_lc_global_ctrl1.regValue);

}

#if 1//juwen, LC, APL
void drvif_color_get_LC_APL_GSR(unsigned short *ptr_out)
{

        int i=0, num_hblk=0, num_vblk=0, num_allBlk=0, read_times=0;
        static int count=0;
//declare
        lc_lc_global_ctrl0_RBUS        lc_global_ctrl0;
       // lc_lc_apl_read_addr_RBUS   lc_apl_read_addr;
        lc_lc_apl_read_data_RBUS    lc_apl_read_data;
        lc_lc_apl_write_addr_RBUS  lc_apl_write_addr;
        lc_lc_global_ctrl1_RBUS         blu_lc_global_ctrl1;


        lc_lc_global_ctrl2_RBUS blu_lc_global_ctrl2;

//IoReg_Read32
        lc_global_ctrl0.regValue         = IoReg_Read32(LC_LC_Global_Ctrl0_reg);//
        //lc_apl_read_addr.regValue     = IoReg_Read32(LC_LC_APL_READ_ADDR_reg);//
        lc_apl_read_data.regValue     = IoReg_Read32(LC_LC_APL_READ_DATA_reg);//
        lc_apl_write_addr.regValue    = IoReg_Read32(LC_LC_APL_write_addr_reg);//
        blu_lc_global_ctrl1.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);


        blu_lc_global_ctrl2.regValue   = IoReg_Read32(LC_LC_Global_Ctrl2_reg);

        num_hblk = blu_lc_global_ctrl2.lc_blk_hnum + 1 ;
        num_vblk = blu_lc_global_ctrl2.lc_blk_vnum + 1;
        num_allBlk = num_hblk * num_vblk;
        read_times = (num_allBlk % 2) ? (num_allBlk/2)+1 : (num_allBlk/2)  ;

        if(read_times > (((num_hblk*num_vblk)/2))){//juwen, 170705, to avoid crash

               // VIPprintf("[!!juwen!!]drvif_color_get_LC_APL : error read_times\n");
//           printk(KERN_EMERG "[!!juwen!!]drvif_color_get_LC_APL : error read_times\n");
                return;
        }


//set register value
        lc_global_ctrl0.lc_apl_en = 1;
       //lc_apl_read_data.lc_apl_sram_read_addr = 0;//auto mode & apl address start at 0
        lc_apl_write_addr.lc_apl_addr= 0;/*merlin5, set lc_apl_addr*/
        blu_lc_global_ctrl1.lc_db_apply=1;


        IoReg_Write32(LC_LC_Global_Ctrl0_reg, lc_global_ctrl0.regValue );
        IoReg_Write32(LC_LC_APL_write_addr_reg, lc_apl_read_data.regValue );
        IoReg_Write32(LC_LC_Global_Ctrl1_reg, blu_lc_global_ctrl1.regValue);




        for(i=0;i<read_times;i++)
        {
                lc_apl_read_data.regValue = IoReg_Read32(LC_LC_APL_READ_DATA_reg);

                ptr_out[(i*2)]     =  lc_apl_read_data.lc_apl_dat_lsb;/*merlin5, apl 11 bit*/
                ptr_out[(i*2)+1] =  lc_apl_read_data.lc_apl_dat_msb;/*merlin5, apl 11 bit*/

#if 1//not print log
                   if(lc_global_ctrl0.dummy1802e000_31 == 1){// lc_global_ctrl0.dummy1802e000_31 == 1  -> print log
                           if(count%1000==0){
                                       //printk(KERN_EMERG "[!!juwen!!]lsb = %d, msb = %d, address = %d\n",lc_apl_read_data.lc_apl_dat_lsb, lc_apl_read_data.lc_apl_dat_msb,lc_apl_read_data.lc_apl_sram_read_addr);
                           }
                   }
#endif

        }

        count++;
        if(count > 65535){//juwen, 170705, to avoid crash
                count = 0;
        }
}

#endif//juwen, LC, APL



void drvif_color_set_LC_saturation(DRV_LC_saturation *ptr)
{
	lc_lc_saturation_ctrl_RBUS saturation_ctrl;
	lc_lc_saturation_gain_RBUS saturation_gain;
	lc_lc_saturation_rgb2yuv_0_RBUS saturation_rgb2yuv_0;
	lc_lc_saturation_rgb2yuv_1_RBUS saturation_rgb2yuv_1;
	lc_lc_saturation_rgb2yuv_2_RBUS saturation_rgb2yuv_2;
	lc_lc_saturation_rgb2yuv_3_RBUS saturation_rgb2yuv_3;
	lc_lc_saturation_rgb2yuv_4_RBUS saturation_rgb2yuv_4;
	lc_lc_saturation_yuv2rgb_0_RBUS saturation_yuv2rgb_0;
	lc_lc_saturation_yuv2rgb_1_RBUS saturation_yuv2rgb_1;
	lc_lc_saturation_yuv2rgb_2_RBUS saturation_yuv2rgb_2;
	lc_lc_saturation_yuv2rgb_3_RBUS saturation_yuv2rgb_3;
	DRV_LC_saturation_r2y LC_saturation_r2y_tmp;
	DRV_LC_saturation_y2r LC_saturation_y2r_tmp;

	saturation_ctrl.regValue = IoReg_Read32(LC_LC_Saturation_ctrl_reg);
	saturation_gain.regValue = IoReg_Read32(LC_LC_Saturation_Gain_reg);
	saturation_rgb2yuv_0.regValue = IoReg_Read32(LC_LC_Saturation_rgb2yuv_0_reg);
	saturation_rgb2yuv_1.regValue = IoReg_Read32(LC_LC_Saturation_rgb2yuv_1_reg);
	saturation_rgb2yuv_2.regValue = IoReg_Read32(LC_LC_Saturation_rgb2yuv_2_reg);
	saturation_rgb2yuv_3.regValue = IoReg_Read32(LC_LC_Saturation_rgb2yuv_3_reg);
	saturation_rgb2yuv_4.regValue = IoReg_Read32(LC_LC_Saturation_rgb2yuv_4_reg);
	saturation_yuv2rgb_0.regValue = IoReg_Read32(LC_LC_Saturation_yuv2rgb_0_reg);
	saturation_yuv2rgb_1.regValue = IoReg_Read32(LC_LC_Saturation_yuv2rgb_1_reg);
	saturation_yuv2rgb_2.regValue = IoReg_Read32(LC_LC_Saturation_yuv2rgb_2_reg);
	saturation_yuv2rgb_3.regValue = IoReg_Read32(LC_LC_Saturation_yuv2rgb_3_reg);

	saturation_ctrl.lc_saturation_en = ptr->LC_saturation_en;
	saturation_ctrl.lc_no_saturation_enhance_thl = ptr->LC_no_saturation_enhance_thl;
	saturation_ctrl.lc_saturation_blend_factor = ptr->LC_saturation_blend_factor;
	saturation_gain.lc_saturation_gain = ptr->LC_saturation_Gain;

	LC_saturation_r2y_tmp = ptr->LC_saturation_r2y;//wrong ??????
	saturation_rgb2yuv_0.lc_saturation_rgb2yuv_m11 = LC_saturation_r2y_tmp.LC_saturation_rgb2yuv_m11;
	saturation_rgb2yuv_0.lc_saturation_rgb2yuv_m12 = LC_saturation_r2y_tmp.LC_saturation_rgb2yuv_m12;
	saturation_rgb2yuv_1.lc_saturation_rgb2yuv_m13 = LC_saturation_r2y_tmp.LC_saturation_rgb2yuv_m13;
	saturation_rgb2yuv_1.lc_saturation_rgb2yuv_m21 = LC_saturation_r2y_tmp.LC_saturation_rgb2yuv_m21;
	saturation_rgb2yuv_2.lc_saturation_rgb2yuv_m22 = LC_saturation_r2y_tmp.LC_saturation_rgb2yuv_m22;
	saturation_rgb2yuv_2.lc_saturation_rgb2yuv_m23 = LC_saturation_r2y_tmp.LC_saturation_rgb2yuv_m23;
	saturation_rgb2yuv_3.lc_saturation_rgb2yuv_m31 = LC_saturation_r2y_tmp.LC_saturation_rgb2yuv_m31;
	saturation_rgb2yuv_3.lc_saturation_rgb2yuv_m32 = LC_saturation_r2y_tmp.LC_saturation_rgb2yuv_m32;
	saturation_rgb2yuv_4.lc_saturation_rgb2yuv_m33 = LC_saturation_r2y_tmp.LC_saturation_rgb2yuv_m33;

	LC_saturation_y2r_tmp = ptr->LC_saturation_y2r;//wrong ??????
	saturation_yuv2rgb_0.lc_saturation_yuv2rgb_k11 = LC_saturation_y2r_tmp.LC_saturation_yuv2rgb_k11;
	saturation_yuv2rgb_0.lc_saturation_yuv2rgb_k12 = LC_saturation_y2r_tmp.LC_saturation_yuv2rgb_k12;
	saturation_yuv2rgb_1.lc_saturation_yuv2rgb_k13 = LC_saturation_y2r_tmp.LC_saturation_yuv2rgb_k13;
	saturation_yuv2rgb_1.lc_saturation_yuv2rgb_k22 = LC_saturation_y2r_tmp.LC_saturation_yuv2rgb_k22;
	saturation_yuv2rgb_2.lc_saturation_yuv2rgb_k23 = LC_saturation_y2r_tmp.LC_saturation_yuv2rgb_k23;
	saturation_yuv2rgb_2.lc_saturation_yuv2rgb_k32 = LC_saturation_y2r_tmp.LC_saturation_yuv2rgb_k32;
	saturation_yuv2rgb_3.lc_saturation_yuv2rgb_k33 = LC_saturation_y2r_tmp.LC_saturation_yuv2rgb_k33;

	IoReg_Write32(LC_LC_Saturation_ctrl_reg, saturation_ctrl.regValue );
	IoReg_Write32(LC_LC_Saturation_Gain_reg, saturation_gain.regValue );
	IoReg_Write32(LC_LC_Saturation_rgb2yuv_0_reg, saturation_rgb2yuv_0.regValue );
	IoReg_Write32(LC_LC_Saturation_rgb2yuv_1_reg, saturation_rgb2yuv_1.regValue );
	IoReg_Write32(LC_LC_Saturation_rgb2yuv_2_reg, saturation_rgb2yuv_2.regValue );
	IoReg_Write32(LC_LC_Saturation_rgb2yuv_3_reg, saturation_rgb2yuv_3.regValue );
	IoReg_Write32(LC_LC_Saturation_rgb2yuv_4_reg, saturation_rgb2yuv_4.regValue );
	IoReg_Write32(LC_LC_Saturation_yuv2rgb_0_reg, saturation_yuv2rgb_0.regValue );
	IoReg_Write32(LC_LC_Saturation_yuv2rgb_1_reg, saturation_yuv2rgb_1.regValue );
	IoReg_Write32(LC_LC_Saturation_yuv2rgb_2_reg, saturation_yuv2rgb_2.regValue );
	IoReg_Write32(LC_LC_Saturation_yuv2rgb_3_reg, saturation_yuv2rgb_3.regValue );


}

/*juwen, k5lp, add*/
void drvif_color_set_LC_avoid_flicker(DRV_LC_avoid_flicker *ptr)
{

	DRV_LC_avoid_flicker_diff_thl LC_avoid_flicker_diff_thl_tmp;
	DRV_LC_avoid_flicker_ratio_thl LC_avoid_flicker_ratio_thl_tmp;

	lc_lc_tmap_flicker_diff_counter_RBUS tmap_flicker_diff_counter;
	lc_lc_tmap_flicker_slow_add_thl_RBUS tmap_flicker_slow_add_thl;

	lc_lc_tmap_flicker_blend_factor_0_RBUS tmap_flicker_blend_factor_0;
	lc_lc_tmap_flicker_blend_factor_1_RBUS tmap_flicker_blend_factor_1;
	lc_lc_tmap_flicker_blend_factor_2_RBUS tmap_flicker_blend_factor_2;
	lc_lc_tmap_flicker_blend_factor_3_RBUS tmap_flicker_blend_factor_3;
	lc_lc_tmap_flicker_blend_factor_4_RBUS tmap_flicker_blend_factor_4;
	lc_lc_tmap_flicker_blend_factor_5_RBUS tmap_flicker_blend_factor_5;
	lc_lc_tmap_flicker_blend_factor_6_RBUS tmap_flicker_blend_factor_6;
	lc_lc_tmap_flicker_blend_factor_7_RBUS tmap_flicker_blend_factor_7;

	lc_lc_tmap_flicker_diff_thl_0_RBUS tmap_flicker_diff_thl_0;
	lc_lc_tmap_flicker_diff_thl_1_RBUS tmap_flicker_diff_thl_1;
	lc_lc_tmap_flicker_diff_thl_2_RBUS tmap_flicker_diff_thl_2;
	lc_lc_tmap_flicker_diff_thl_3_RBUS tmap_flicker_diff_thl_3;
	lc_lc_tmap_flicker_diff_thl_4_RBUS tmap_flicker_diff_thl_4;
	lc_lc_tmap_flicker_diff_thl_5_RBUS tmap_flicker_diff_thl_5;

	tmap_flicker_diff_counter.regValue   = IoReg_Read32(LC_LC_Tmap_flicker_diff_counter_reg);
	tmap_flicker_slow_add_thl.regValue   = IoReg_Read32(LC_LC_Tmap_flicker_slow_add_thl_reg);
	tmap_flicker_blend_factor_0.regValue = IoReg_Read32(LC_LC_Tmap_flicker_blend_factor_0_reg);
	tmap_flicker_blend_factor_1.regValue = IoReg_Read32(LC_LC_Tmap_flicker_blend_factor_1_reg);
	tmap_flicker_blend_factor_2.regValue = IoReg_Read32(LC_LC_Tmap_flicker_blend_factor_2_reg);
	tmap_flicker_blend_factor_3.regValue = IoReg_Read32(LC_LC_Tmap_flicker_blend_factor_3_reg);
	tmap_flicker_blend_factor_4.regValue = IoReg_Read32(LC_LC_Tmap_flicker_blend_factor_4_reg);
	tmap_flicker_blend_factor_5.regValue = IoReg_Read32(LC_LC_Tmap_flicker_blend_factor_5_reg);
	tmap_flicker_blend_factor_6.regValue = IoReg_Read32(LC_LC_Tmap_flicker_blend_factor_6_reg);
	tmap_flicker_blend_factor_7.regValue = IoReg_Read32(LC_LC_Tmap_flicker_blend_factor_7_reg);

	tmap_flicker_diff_thl_0.regValue = IoReg_Read32(LC_LC_Tmap_flicker_diff_thl_0_reg);
	tmap_flicker_diff_thl_1.regValue = IoReg_Read32(LC_LC_Tmap_flicker_diff_thl_1_reg);
	tmap_flicker_diff_thl_2.regValue = IoReg_Read32(LC_LC_Tmap_flicker_diff_thl_2_reg);
	tmap_flicker_diff_thl_3.regValue = IoReg_Read32(LC_LC_Tmap_flicker_diff_thl_3_reg);
	tmap_flicker_diff_thl_4.regValue = IoReg_Read32(LC_LC_Tmap_flicker_diff_thl_4_reg);
	tmap_flicker_diff_thl_5.regValue = IoReg_Read32(LC_LC_Tmap_flicker_diff_thl_5_reg);

	tmap_flicker_diff_counter.lc_tmap_avoid_flicker_en= ptr->lc_tmap_avoid_flicker_en;
	//tmap_flicker_diff_counter.lc_tmap_diff_counter   = ptr->lc_tmap_diff_counter;//read only
	tmap_flicker_slow_add_thl.lc_tmap_slow_add_thl = ptr->lc_tmap_slow_add_thl;

	LC_avoid_flicker_diff_thl_tmp = ptr->LC_avoid_flicker_diff_thl;
	LC_avoid_flicker_ratio_thl_tmp = ptr->LC_avoid_flicker_ratio_thl;

	tmap_flicker_diff_thl_0.lc_tmap_diff_thl_0 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_0;
	tmap_flicker_diff_thl_0.lc_tmap_diff_thl_1 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_1;
	tmap_flicker_diff_thl_0.lc_tmap_diff_thl_2 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_2;

	tmap_flicker_diff_thl_1.lc_tmap_diff_thl_3 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_3;
	tmap_flicker_diff_thl_1.lc_tmap_diff_thl_4 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_4;
	tmap_flicker_diff_thl_1.lc_tmap_diff_thl_5 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_5;

	tmap_flicker_diff_thl_2.lc_tmap_diff_thl_6 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_6;
	tmap_flicker_diff_thl_2.lc_tmap_diff_thl_7 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_7;
	tmap_flicker_diff_thl_2.lc_tmap_diff_thl_8 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_8;

	tmap_flicker_diff_thl_3.lc_tmap_diff_thl_9 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_9;
	tmap_flicker_diff_thl_3.lc_tmap_diff_thl_10 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_10;
	tmap_flicker_diff_thl_3.lc_tmap_diff_thl_11 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_11;

	tmap_flicker_diff_thl_4.lc_tmap_diff_thl_12 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_12;
	tmap_flicker_diff_thl_4.lc_tmap_diff_thl_13 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_13;
	tmap_flicker_diff_thl_4.lc_tmap_diff_thl_14 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_14;

	tmap_flicker_diff_thl_5.lc_tmap_diff_thl_15 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_15;
	tmap_flicker_diff_thl_5.lc_tmap_diff_thl_16 = LC_avoid_flicker_diff_thl_tmp.lc_tmap_diff_thl_16;

	tmap_flicker_blend_factor_0.lc_tmap_blend_factor_ratio_0 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_ratio_0;
	tmap_flicker_blend_factor_0.lc_tmap_blend_factor_thl_0 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_thl_0;

	tmap_flicker_blend_factor_1.lc_tmap_blend_factor_ratio_1 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_ratio_1;
	tmap_flicker_blend_factor_1.lc_tmap_blend_factor_thl_1 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_thl_1;

	tmap_flicker_blend_factor_2.lc_tmap_blend_factor_ratio_2 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_ratio_2;
	tmap_flicker_blend_factor_2.lc_tmap_blend_factor_thl_2 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_thl_2;

	tmap_flicker_blend_factor_3.lc_tmap_blend_factor_ratio_3 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_ratio_3;
	tmap_flicker_blend_factor_3.lc_tmap_blend_factor_thl_3 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_thl_3;

	tmap_flicker_blend_factor_4.lc_tmap_blend_factor_ratio_4 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_ratio_4;
	tmap_flicker_blend_factor_4.lc_tmap_blend_factor_thl_4 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_thl_4;

	tmap_flicker_blend_factor_5.lc_tmap_blend_factor_ratio_5 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_ratio_5;
	tmap_flicker_blend_factor_5.lc_tmap_blend_factor_thl_5 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_thl_5;

	tmap_flicker_blend_factor_6.lc_tmap_blend_factor_ratio_6 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_ratio_6;
	tmap_flicker_blend_factor_6.lc_tmap_blend_factor_thl_6 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_thl_6;

	tmap_flicker_blend_factor_7.lc_tmap_blend_factor_ratio_7 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_ratio_7;
	tmap_flicker_blend_factor_7.lc_tmap_blend_factor_thl_7 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_thl_7;
	tmap_flicker_blend_factor_7.lc_tmap_blend_factor_ratio_8 = LC_avoid_flicker_ratio_thl_tmp.lc_tmap_blend_factor_ratio_8;

	//IoReg_Write32(LC_LC_Tmap_flicker_diff_counter_reg, tmap_flicker_diff_counter.regValue);//readonly
	IoReg_Write32(LC_LC_Tmap_flicker_slow_add_thl_reg, tmap_flicker_slow_add_thl.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_blend_factor_0_reg, tmap_flicker_blend_factor_0.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_blend_factor_1_reg, tmap_flicker_blend_factor_1.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_blend_factor_2_reg, tmap_flicker_blend_factor_2.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_blend_factor_3_reg, tmap_flicker_blend_factor_3.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_blend_factor_4_reg, tmap_flicker_blend_factor_4.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_blend_factor_5_reg, tmap_flicker_blend_factor_5.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_blend_factor_6_reg, tmap_flicker_blend_factor_6.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_blend_factor_7_reg, tmap_flicker_blend_factor_7.regValue);

	IoReg_Write32(LC_LC_Tmap_flicker_diff_thl_0_reg, tmap_flicker_diff_thl_0.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_diff_thl_1_reg, tmap_flicker_diff_thl_1.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_diff_thl_2_reg, tmap_flicker_diff_thl_2.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_diff_thl_3_reg, tmap_flicker_diff_thl_3.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_diff_thl_4_reg, tmap_flicker_diff_thl_4.regValue);
	IoReg_Write32(LC_LC_Tmap_flicker_diff_thl_5_reg, tmap_flicker_diff_thl_5.regValue);

}

// jimmy, LC decontour, k5lp
void drvif_color_set_LC_decontour(DRV_LC_decontour *ptr)
{
    lc_lc_decontour_alpha_0_RBUS lc_decontour_alpha_0;
    lc_lc_decontour_alpha_1_RBUS lc_decontour_alpha_1;
    lc_lc_decontour_alpha_2_RBUS lc_decontour_alpha_2;
    lc_lc_decontour_alpha_3_RBUS lc_decontour_alpha_3;

    lc_decontour_alpha_0.regValue = IoReg_Read32(LC_LC_Decontour_alpha_0_reg);
    lc_decontour_alpha_1.regValue = IoReg_Read32(LC_LC_Decontour_alpha_1_reg);
    lc_decontour_alpha_2.regValue = IoReg_Read32(LC_LC_Decontour_alpha_2_reg);
    lc_decontour_alpha_3.regValue = IoReg_Read32(LC_LC_Decontour_alpha_3_reg);

    lc_decontour_alpha_0.lc_decontour_en				= ptr->LC_decont_en;
    lc_decontour_alpha_0.lc_decont_ydiff_shif			= ptr->LC_decont_shift;
    lc_decontour_alpha_0.lc_decont_alpha_by_ydiff_0		= ptr->LC_decont_alpha_0;
    lc_decontour_alpha_0.lc_decont_alpha_by_ydiff_1		= ptr->LC_decont_alpha_1;
    lc_decontour_alpha_0.lc_decont_alpha_by_ydiff_2		= ptr->LC_decont_alpha_2;
    lc_decontour_alpha_0.lc_decont_alpha_by_ydiff_3		= ptr->LC_decont_alpha_3;
    lc_decontour_alpha_1.lc_decont_alpha_by_ydiff_4		= ptr->LC_decont_alpha_4;
    lc_decontour_alpha_1.lc_decont_alpha_by_ydiff_5		= ptr->LC_decont_alpha_5;
    lc_decontour_alpha_1.lc_decont_alpha_by_ydiff_6		= ptr->LC_decont_alpha_6;
    lc_decontour_alpha_1.lc_decont_alpha_by_ydiff_7		= ptr->LC_decont_alpha_7;
    lc_decontour_alpha_2.lc_decont_alpha_by_ydiff_8		= ptr->LC_decont_alpha_8;
    lc_decontour_alpha_2.lc_decont_alpha_by_ydiff_9		= ptr->LC_decont_alpha_9;
    lc_decontour_alpha_2.lc_decont_alpha_by_ydiff_10	= ptr->LC_decont_alpha_10;
    lc_decontour_alpha_2.lc_decont_alpha_by_ydiff_11	= ptr->LC_decont_alpha_11;
    lc_decontour_alpha_3.lc_decont_alpha_by_ydiff_12	= ptr->LC_decont_alpha_12;
    lc_decontour_alpha_3.lc_decont_alpha_by_ydiff_13	= ptr->LC_decont_alpha_13;
    lc_decontour_alpha_3.lc_decont_alpha_by_ydiff_14	= ptr->LC_decont_alpha_14;
    lc_decontour_alpha_3.lc_decont_alpha_by_ydiff_15	= ptr->LC_decont_alpha_15;

    IoReg_Write32(LC_LC_Decontour_alpha_0_reg, lc_decontour_alpha_0.regValue);
    IoReg_Write32(LC_LC_Decontour_alpha_1_reg, lc_decontour_alpha_1.regValue);
    IoReg_Write32(LC_LC_Decontour_alpha_2_reg, lc_decontour_alpha_2.regValue);
    IoReg_Write32(LC_LC_Decontour_alpha_3_reg, lc_decontour_alpha_3.regValue);
}


#if 0
/*GET FUNCTIONS*/
#endif

void drvif_color_get_LC_ToneMappingSlopePoint(unsigned int *ptr_out)
{
	int i = 0;

	lc_lc_tonemapping_sram_addr_RBUS lc_tmap_curve_address;//0xb802E130
	lc_lc_tonemapping_sram_data_RBUS lc_tmap_slope_point;//0xb802E134

	lc_tmap_curve_address.regValue = IoReg_Read32(LC_LC_ToneMapping_SRAM_Addr_reg);//
	lc_tmap_slope_point.regValue     = IoReg_Read32(LC_LC_ToneMapping_SRAM_Data_reg);//

	lc_tmap_curve_address.regValue = 0; //
	IoReg_Write32(LC_LC_ToneMapping_SRAM_Addr_reg, lc_tmap_curve_address.regValue);

	for(i=0;i<LC_Curve_ToneM_PointSlope;i++)
	{
		ptr_out[i]=IoReg_Read32(LC_LC_ToneMapping_SRAM_Data_reg);
	}

}

char drvif_color_get_LC_Enable(void)
{
	color_d_vc_global_ctrl_RBUS color_d_vc_global_ctrl;
	color_d_vc_global_ctrl.regValue = IoReg_Read32(COLOR_D_VC_Global_CTRL_reg);
	return color_d_vc_global_ctrl.m_lc_comp_en;
}

char drvif_color_get_LC_DebugMode(void)
{
	lc_lc_global_ctrl0_RBUS blu_lc_global_ctrl0;
	blu_lc_global_ctrl0.regValue = IoReg_Read32(LC_LC_Global_Ctrl0_reg);
	return blu_lc_global_ctrl0.lc_debugmode;
}

void drvif_color_get_LC_APL(unsigned int *APL)
{
	int i = 0;
	int num_hblk = 0, num_vblk = 0, num_allBlk = 0, read_times = 0;

	lc_lc_global_ctrl0_RBUS lc_global_ctrl0;
	lc_lc_apl_read_data_RBUS lc_apl_read_data;
	lc_lc_apl_write_addr_RBUS lc_apl_write_addr;
	lc_lc_global_ctrl1_RBUS blu_lc_global_ctrl1;
	lc_lc_global_ctrl2_RBUS blu_lc_global_ctrl2;

	lc_global_ctrl0.regValue = IoReg_Read32(LC_LC_Global_Ctrl0_reg);
	lc_apl_read_data.regValue = IoReg_Read32(LC_LC_APL_READ_DATA_reg);
	lc_apl_write_addr.regValue = IoReg_Read32(LC_LC_APL_write_addr_reg);
	blu_lc_global_ctrl1.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);
	blu_lc_global_ctrl2.regValue = IoReg_Read32(LC_LC_Global_Ctrl2_reg);

	num_hblk = blu_lc_global_ctrl2.lc_blk_hnum + 1 ;
	num_vblk = blu_lc_global_ctrl2.lc_blk_vnum + 1;
	num_allBlk = num_hblk * num_vblk;
	read_times = (num_allBlk%2) ? (num_allBlk/2) + 1 : (num_allBlk/2);

	//set register value
	lc_global_ctrl0.lc_apl_en = 1;
	lc_apl_write_addr.lc_apl_addr = 0;
	blu_lc_global_ctrl1.lc_db_apply = 1;

	IoReg_Write32(LC_LC_Global_Ctrl0_reg, lc_global_ctrl0.regValue);
	IoReg_Write32(LC_LC_APL_write_addr_reg, lc_apl_write_addr.regValue);
	IoReg_Write32(LC_LC_Global_Ctrl1_reg, blu_lc_global_ctrl1.regValue);

	for(i=0;i<read_times;i++)
	{
		lc_apl_read_data.regValue = IoReg_Read32(LC_LC_APL_READ_DATA_reg);
		APL[(i*2)]   = lc_apl_read_data.lc_apl_dat_lsb; /*merlin5, apl 11 bit*/
		APL[(i*2)+1] = lc_apl_read_data.lc_apl_dat_msb; /*merlin5, apl 11 bit*/
	}
}

void drvif_color_get_LC_decontour(DRV_LC_decontour *ptr)
{
    lc_lc_decontour_alpha_0_RBUS lc_decontour_alpha_0;
    lc_lc_decontour_alpha_1_RBUS lc_decontour_alpha_1;
    lc_lc_decontour_alpha_2_RBUS lc_decontour_alpha_2;
    lc_lc_decontour_alpha_3_RBUS lc_decontour_alpha_3;

    lc_decontour_alpha_0.regValue = IoReg_Read32(LC_LC_Decontour_alpha_0_reg);
    lc_decontour_alpha_1.regValue = IoReg_Read32(LC_LC_Decontour_alpha_1_reg);
    lc_decontour_alpha_2.regValue = IoReg_Read32(LC_LC_Decontour_alpha_2_reg);
    lc_decontour_alpha_3.regValue = IoReg_Read32(LC_LC_Decontour_alpha_3_reg);

    ptr->LC_decont_en       = lc_decontour_alpha_0.lc_decontour_en;
    ptr->LC_decont_shift    = lc_decontour_alpha_0.lc_decont_ydiff_shif;
    ptr->LC_decont_alpha_0  = lc_decontour_alpha_0.lc_decont_alpha_by_ydiff_0;
    ptr->LC_decont_alpha_1  = lc_decontour_alpha_0.lc_decont_alpha_by_ydiff_1;
    ptr->LC_decont_alpha_2  = lc_decontour_alpha_0.lc_decont_alpha_by_ydiff_2;
    ptr->LC_decont_alpha_3  = lc_decontour_alpha_0.lc_decont_alpha_by_ydiff_3;
    ptr->LC_decont_alpha_4  = lc_decontour_alpha_1.lc_decont_alpha_by_ydiff_4;
    ptr->LC_decont_alpha_5  = lc_decontour_alpha_1.lc_decont_alpha_by_ydiff_5;
    ptr->LC_decont_alpha_6  = lc_decontour_alpha_1.lc_decont_alpha_by_ydiff_6;
    ptr->LC_decont_alpha_7  = lc_decontour_alpha_1.lc_decont_alpha_by_ydiff_7;
    ptr->LC_decont_alpha_8  = lc_decontour_alpha_2.lc_decont_alpha_by_ydiff_8;
    ptr->LC_decont_alpha_9  = lc_decontour_alpha_2.lc_decont_alpha_by_ydiff_9;
    ptr->LC_decont_alpha_10 = lc_decontour_alpha_2.lc_decont_alpha_by_ydiff_10;
    ptr->LC_decont_alpha_11 = lc_decontour_alpha_2.lc_decont_alpha_by_ydiff_11;
    ptr->LC_decont_alpha_12 = lc_decontour_alpha_3.lc_decont_alpha_by_ydiff_12;
    ptr->LC_decont_alpha_13 = lc_decontour_alpha_3.lc_decont_alpha_by_ydiff_13;
    ptr->LC_decont_alpha_14 = lc_decontour_alpha_3.lc_decont_alpha_by_ydiff_14;
    ptr->LC_decont_alpha_15 = lc_decontour_alpha_3.lc_decont_alpha_by_ydiff_15;
}

void drvif_color_get_LC_Histogram(unsigned int *plc_out)
{

//declare
	lc_lc_global_hist1_RBUS  lc_global_hist1;
	lc_lc_global_hist2_RBUS  lc_global_hist2;
	lc_lc_global_hist3_RBUS  lc_global_hist3;
	lc_lc_global_hist4_RBUS  lc_global_hist4;
	lc_lc_global_hist5_RBUS  lc_global_hist5;
	lc_lc_global_hist6_RBUS  lc_global_hist6;
	lc_lc_global_hist7_RBUS  lc_global_hist7;
	lc_lc_global_hist8_RBUS  lc_global_hist8;

//IoReg_Read32
	lc_global_hist1.regValue = IoReg_Read32(LC_LC_Global_Hist1_reg);
	lc_global_hist2.regValue = IoReg_Read32(LC_LC_Global_Hist2_reg);
	lc_global_hist3.regValue = IoReg_Read32(LC_LC_Global_Hist3_reg);
	lc_global_hist4.regValue = IoReg_Read32(LC_LC_Global_Hist4_reg);
	lc_global_hist5.regValue = IoReg_Read32(LC_LC_Global_Hist5_reg);
	lc_global_hist6.regValue = IoReg_Read32(LC_LC_Global_Hist6_reg);
	lc_global_hist7.regValue = IoReg_Read32(LC_LC_Global_Hist7_reg);
	lc_global_hist8.regValue = IoReg_Read32(LC_LC_Global_Hist8_reg);

	plc_out[0]= lc_global_hist1.lc_global_hist0;
	plc_out[1]= lc_global_hist1.lc_global_hist1;

	plc_out[2]= lc_global_hist2.lc_global_hist2;
	plc_out[3]= lc_global_hist2.lc_global_hist3;

	plc_out[4]= lc_global_hist3.lc_global_hist4;
	plc_out[5]= lc_global_hist3.lc_global_hist5;

	plc_out[6]= lc_global_hist4.lc_global_hist6;
	plc_out[7]= lc_global_hist4.lc_global_hist7;

	plc_out[8]= lc_global_hist5.lc_global_hist8;
	plc_out[9]= lc_global_hist5.lc_global_hist9;

	plc_out[10]= lc_global_hist6.lc_global_hist10;
	plc_out[11]= lc_global_hist6.lc_global_hist11;

	plc_out[12]= lc_global_hist7.lc_global_hist12;
	plc_out[13]= lc_global_hist7.lc_global_hist13;

	plc_out[14]= lc_global_hist8.lc_global_hist14;
	plc_out[15]= lc_global_hist8.lc_global_hist15;

}

unsigned char drvif_color_get_LC_size_support()
{
	return u1_SizeValid;
}

void drvif_color_set_LC_size_support(unsigned char u1_support)
{
	u1_SizeValid = u1_support;
}
