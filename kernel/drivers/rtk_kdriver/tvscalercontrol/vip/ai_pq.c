/*==========================================================================
    * Copyright (c)      Realtek Semiconductor Corporation, 2006
  * All rights reserved.
  * ========================================================================*/

/*================= File Description =======================================*/
/**
 * @file
 * 	This file is for AI related functions.
 *
 * @author 	$Author$
 * @date 	$Date$
 * @version $Revision$
 */

/*============================ Module dependency  ===========================*/
#include <tvscalercontrol/vip/ai_pq.h>
//#include "vgip_isr/scalerVIP.h"
#include <scaler/vipRPCCommon.h>
//#include "gal/rtk_kadp_se.h"

#include <rbus/color_sharp_reg.h>
#include <rbus/color_dcc_reg.h>
#include <rbus/color_icm_reg.h>
#include <rbus/gamma_reg.h>
#include <rbus/color_reg.h>
#include <rbus/di_reg.h>
#include <rbus/lc_reg.h>
#include "vgip_isr/scalerAI.h"
#include <rbus/scaleup_reg.h>

#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerCommon.h>
	#include <scaler/scalerDrvCommon.h>
#else
	#include <scalercommon/scalerCommon.h>
	#include <scalercommon/scalerDrvCommon.h>
#endif

#include <tvscalercontrol/io/ioregdrv.h>
//#include <linux/v4l2-ext/videodev2-ext.h> // V4L2_ERR
#include <tvscalercontrol/vip/scalerColor.h>
#include <tvscalercontrol/vip/ultrazoom.h>
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include <tvscalercontrol/scaler/scalercolorlib_tv001.h>
#include <tvscalercontrol/scaler/scalercolorlib_IPQ.h>
#include <tvscalercontrol/scaler/scalercolorlib_AIPQ.h>

#if defined(CONFIG_RTK_AI_DRV)
/*================================== Variables ==============================*/
#define c_cds_region_smooth 16
DRV_AI_Ctrl_table ai_ctrl;
// for scene_detection
DRV_AI_SCENE_Ctrl_table ai_scene_ctrl;
//0506 lsy
DRV_AI_PQ_Ctrl_table ai_pq_ctrl;
//end 0506 lsy
unsigned int CDS_control[4][3] = {
// 0:color_conti, 1:conti_area, 2:smooth_area
{1,14,0}, // green rectangle for sport and landscape pq
{1,14,0}, // for animation pq
{0,0,0}, // not set
{0,0,0}, // not set
};
int CDS_uv_range[3][8] = {
// 0:U_c, 1:V_c, 2:U_lb, 3:U_ub, 4:V_lb, 5:V_ub, 6:UV_rad, 7:cm_mode
{275,275, 0,500, 0,480, 276, 0}, // green rectangle for sports and landscape pq
{512,512, -14,14, -14,14, 241, 2}, // black white for animation pq
{0,0, 0,0, 0,0, 0, 0}, // not set
};
unsigned int mosnrEdgTh[8] = {0};
unsigned int oldRtnrK[2] = {0};
unsigned int oldRtnrC[1] = {0};
unsigned int oldRtnrK_yth[4] = {0};
unsigned int oldRtnrK_cth[2] = {0};
unsigned int oldSnr_w1h[3] = {0};
unsigned int oldSnr_w2h[3] = {0};
unsigned int mosquitonr_nlevel[7] = {0};
unsigned int dirsu_angmagconf[7] = {0};
unsigned int dirsu_angletransition[8] = {0};
unsigned int dlti_h_offset[15] = {0};
unsigned int dlti_v_offset[7] = {0};
unsigned char lc_gainbyy_offset[33]= {0};
unsigned char lc_gainbyydiff_offset[33]= {0};
extern int cur_temp_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM];
extern unsigned char ic_version; 
extern UI_color AI_PQ_UI_color;
/*================================== Functions ==============================*/
#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif
#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

// 0506 lsy
#define clip(min, max, num)	((num<min) ? (min) : ((num>max)?(max):(num)))
// end 0506 lsy

void demo_20CES_tv030(void)
{

	color_d_vc_global_ctrl_RBUS d_vc_global_ctrl_Reg;
		
	/* disable gamma */
	IoReg_ClearBits(GAMMA_GAMMA_CTRL_2_reg, GAMMA_GAMMA_CTRL_2_gamma_m_tab_sel_mask);//_BIT6|_BIT7

	/* disable DCC */
	d_vc_global_ctrl_Reg.regValue = IoReg_Read32(COLOR_D_VC_Global_CTRL_reg);
	d_vc_global_ctrl_Reg.dcc_en = 0;/*dcc curve off*/
	d_vc_global_ctrl_Reg.write_enable_1 =1;
	IoReg_Write32(COLOR_D_VC_Global_CTRL_reg, d_vc_global_ctrl_Reg.regValue);

	/* Setting local contrast */
	// hack in scalercolorlib.c
	//fwif_color_set_LC_ToneMappingSlopePoint(0, 6);
	//fwif_color_set_LC_saturation(0, 4);	

	/* sharpness double buffer for CDS */
	IoReg_ClearBits(COLOR_SHARP_DM_NR_SHP_CTRL_reg, COLOR_SHARP_DM_NR_SHP_CTRL_db_en_mask);
}

void demo_20CES_tv030_NR(int enable)
{
	if(enable)
	{
		IoReg_Write32(DI_IM_DI_RTNR_Y_16_K0_K7_reg, 0x76543210);
		IoReg_Write32(DI_IM_DI_RTNR_Y_16_K8_K15_reg, 0xfedcba98);
		IoReg_SetBits(0xb8024688, _BIT0); // masnr in rtnr
	}
	else
	{
		IoReg_Write32(DI_IM_DI_RTNR_Y_16_K0_K7_reg, 0xffffffff);
		IoReg_Write32(DI_IM_DI_RTNR_Y_16_K8_K15_reg, 0xffffffff);
		IoReg_ClearBits(0xb8024688, _BIT0);
	}
}

// for face effect to init dcc function
void drvif_color_AI_obj_dcc_init(unsigned char enable)
{
	#if 1 // old skin, for global dcc
	color_dcc_d_dcc_skin_tone_en_RBUS d_dcc_skin_tone_en_reg;
	color_dcc_d_dcc_cds_skin_0_RBUS   color_dcc_d_dcc_cds_skin_0_reg;

	d_dcc_skin_tone_en_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_EN_reg);
	color_dcc_d_dcc_cds_skin_0_reg.regValue    = IoReg_Read32(COLOR_DCC_D_DCC_CDS_SKIN_0_reg);
	
	d_dcc_skin_tone_en_reg.y_blending_en = enable;
    d_dcc_skin_tone_en_reg.colorspace_sel = 0;
    d_dcc_skin_tone_en_reg.region_ratio_blending_en = 1;
	d_dcc_skin_tone_en_reg.y_blending_reg0_en = enable;
	//d_dcc_skin_tone_en_reg.y_blending_0_enhance_en = 1; 
	color_dcc_d_dcc_cds_skin_0_reg.cds_skin_en = 0;
	
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_EN_reg, d_dcc_skin_tone_en_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_CDS_SKIN_0_reg, color_dcc_d_dcc_cds_skin_0_reg.regValue);

	#else // CDS skin
	color_dcc_d_dcc_cds_skin_0_RBUS color_dcc_d_dcc_cds_skin_0_reg;
	color_dcc_d_dcc_skin_tone_en_RBUS color_dcc_d_dcc_skin_tone_en_reg;
	color_dcc_d_dcc_ai_0_RBUS color_dcc_d_dcc_ai_0_reg;
	color_dcc_d_dcc_ai_6_RBUS color_dcc_d_dcc_ai_6_reg;
	color_dcc_d_dcc_cds_skin_1_RBUS color_dcc_d_dcc_cds_skin_1_reg;
	color_dcc_d_dcc_cds_skin_2_RBUS color_dcc_d_dcc_cds_skin_2_reg;
	color_dcc_d_dcc_cds_skin_3_RBUS color_dcc_d_dcc_cds_skin_3_reg;

	color_dcc_d_dcc_cds_skin_0_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_CDS_SKIN_0_reg);
	color_dcc_d_dcc_skin_tone_en_reg.regValue =IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_EN_reg);
	color_dcc_d_dcc_ai_0_reg.regValue =IoReg_Read32(COLOR_DCC_D_DCC_AI_0_reg);
	color_dcc_d_dcc_ai_6_reg.regValue =IoReg_Read32(COLOR_DCC_D_DCC_AI_6_reg);
	color_dcc_d_dcc_cds_skin_1_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_CDS_SKIN_1_reg);
	color_dcc_d_dcc_cds_skin_2_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_CDS_SKIN_2_reg);
	color_dcc_d_dcc_cds_skin_3_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_CDS_SKIN_3_reg);

	color_dcc_d_dcc_cds_skin_0_reg.cds_skin_en = 1;
	color_dcc_d_dcc_skin_tone_en_reg.y_blending_en = 1; // this register is controled by handler
	color_dcc_d_dcc_ai_0_reg.ai_ros_en = 1;
	color_dcc_d_dcc_ai_6_reg.ai_adjust_en = 1;
	color_dcc_d_dcc_ai_6_reg.ai_control_value = 128;
	color_dcc_d_dcc_ai_6_reg.ai_detect_value = 255;
	color_dcc_d_dcc_cds_skin_1_reg.cds_uv_range_0 = 500;
	color_dcc_d_dcc_cds_skin_1_reg.cds_uv_range_1 = 500;
	color_dcc_d_dcc_cds_skin_2_reg.cds_uv_range_2 = 500;
	color_dcc_d_dcc_cds_skin_2_reg.cds_uv_range_3 = 500;
	color_dcc_d_dcc_cds_skin_3_reg.cds_uv_range_4 = 500;
	color_dcc_d_dcc_cds_skin_3_reg.cds_uv_range_5 = 500;

	IoReg_Write32(COLOR_DCC_D_DCC_CDS_SKIN_0_reg, color_dcc_d_dcc_cds_skin_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_EN_reg, color_dcc_d_dcc_skin_tone_en_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_0_reg, color_dcc_d_dcc_ai_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_6_reg, color_dcc_d_dcc_ai_6_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_CDS_SKIN_1_reg, color_dcc_d_dcc_cds_skin_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_CDS_SKIN_2_reg, color_dcc_d_dcc_cds_skin_2_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_CDS_SKIN_3_reg, color_dcc_d_dcc_cds_skin_3_reg.regValue);
	#endif
}

// for face effect to init icm function
void drvif_color_AI_obj_icm_init(unsigned char enable)
{
	color_icm_d_icm_cds_skin_0_RBUS color_icm_d_icm_cds_skin_0_reg;
	color_icm_d_icm_ai_0_RBUS color_icm_d_icm_ai_0_reg;

	color_icm_d_icm_cds_skin_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_CDS_SKIN_0_reg);
	color_icm_d_icm_ai_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_0_reg);

	color_icm_d_icm_cds_skin_0_reg.cds_skin_en = enable;
	color_icm_d_icm_ai_0_reg.ai_ros_en = enable;

	IoReg_Write32(COLOR_ICM_D_ICM_CDS_SKIN_0_reg, color_icm_d_icm_cds_skin_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_0_reg, color_icm_d_icm_ai_0_reg.regValue);
}

// for face & scene effect to init shp cds function
void drvif_color_AI_cds_init(unsigned char enable)
{
	color_sharp_dm_cds_cm0_u_bound_0_RBUS color_sharp_dm_cds_cm0_u_bound_0_reg;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_RBUS color_sharp_dm_cds_peaking_gain_bound_ctrl_reg;

	color_sharp_dm_cds_cm0_u_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_reg);
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg);

	color_sharp_dm_cds_cm0_u_bound_0_reg.cds_enable = enable;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.cds_edg_enable = enable;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.cds_tex_enable = enable;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.cds_v_enable = enable;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.cds_v_edg_enable = enable;

	IoReg_Write32(COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_reg, color_sharp_dm_cds_cm0_u_bound_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg,color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue);

}

// Cmodel name: AI_ICM_reg_setting(face_icm_apply);
void drvif_color_AI_obj_icm_set(AI_ICM_apply face_icm_apply_f[6])
{
	// chen 0417
	color_icm_d_icm_ai_0_RBUS  	 icm_d_icm_ai_0_reg;
	color_icm_d_icm_ai_1_RBUS	 icm_d_icm_ai_1_reg;
	color_icm_d_icm_ai_2_RBUS	 icm_d_icm_ai_2_reg;
	color_icm_d_icm_ai_3_RBUS	 icm_d_icm_ai_3_reg;
	color_icm_d_icm_ai_4_RBUS	 icm_d_icm_ai_4_reg;
	color_icm_d_icm_ai_5_RBUS	 icm_d_icm_ai_5_reg;
	color_icm_d_icm_ai_6_RBUS	 icm_d_icm_ai_6_reg;
	color_icm_d_icm_ai_7_RBUS	 icm_d_icm_ai_7_reg;
	color_icm_d_icm_ai_offset_0_RBUS  icm_d_icm_ai_offset_0_reg;
	color_icm_d_icm_ai_offset_1_RBUS  icm_d_icm_ai_offset_1_reg;
	color_icm_d_icm_ai_offset_2_RBUS  icm_d_icm_ai_offset_2_reg;
	color_icm_d_icm_ai_offset_3_RBUS  icm_d_icm_ai_offset_3_reg;
	color_icm_d_icm_ai_offset_4_RBUS  icm_d_icm_ai_offset_4_reg;
	color_icm_d_icm_ai_offset_5_RBUS  icm_d_icm_ai_offset_5_reg;
	color_icm_d_icm_ai_offset_6_RBUS  icm_d_icm_ai_offset_6_reg;
	color_icm_d_icm_ai_offset_7_RBUS  icm_d_icm_ai_offset_7_reg;
	color_icm_d_icm_ai_offset_8_RBUS  icm_d_icm_ai_offset_8_reg;
	color_icm_d_icm_ai_offset_9_RBUS  icm_d_icm_ai_offset_9_reg;
	color_icm_d_icm_ai_offset_10_RBUS  icm_d_icm_ai_offset_10_reg;
	color_icm_d_icm_ai_offset_11_RBUS  icm_d_icm_ai_offset_11_reg;

	// chen 0524
	color_icm_d_icm_skin_tone_segment_c0_0_RBUS	icm_d_icm_skin_tone_segment_c0_0_reg;
	color_icm_d_icm_skin_tone_segment_c0_1_RBUS	icm_d_icm_skin_tone_segment_c0_1_reg;
	color_icm_d_icm_skin_tone_segment_c1_0_RBUS	icm_d_icm_skin_tone_segment_c1_0_reg;
	color_icm_d_icm_skin_tone_segment_c1_1_RBUS	icm_d_icm_skin_tone_segment_c1_1_reg;
	color_icm_d_icm_skin_tone_segment_c2_0_RBUS	icm_d_icm_skin_tone_segment_c2_0_reg;
	color_icm_d_icm_skin_tone_segment_c2_1_RBUS	icm_d_icm_skin_tone_segment_c2_1_reg;
	color_icm_d_icm_skin_tone_segment_c3_0_RBUS	icm_d_icm_skin_tone_segment_c3_0_reg;
	color_icm_d_icm_skin_tone_segment_c3_1_RBUS	icm_d_icm_skin_tone_segment_c3_1_reg;
	color_icm_d_icm_skin_tone_segment_c4_0_RBUS	icm_d_icm_skin_tone_segment_c4_0_reg;
	color_icm_d_icm_skin_tone_segment_c4_1_RBUS	icm_d_icm_skin_tone_segment_c4_1_reg;
	color_icm_d_icm_skin_tone_segment_c5_0_RBUS	icm_d_icm_skin_tone_segment_c5_0_reg;
	color_icm_d_icm_skin_tone_segment_c5_1_RBUS	icm_d_icm_skin_tone_segment_c5_1_reg;
	//end chen 0524

	// share with dcc
	color_dcc_d_dcc_ai_7_RBUS    dcc_d_dcc_ai_7_reg;
	color_dcc_d_dcc_ai_8_RBUS	 dcc_d_dcc_ai_8_reg;
	color_dcc_d_dcc_ai_9_RBUS	 dcc_d_dcc_ai_9_reg;

	color_dcc_d_dcc_ai_10_RBUS	dcc_d_dcc_ai_10_reg;
	color_dcc_d_dcc_ai_11_RBUS	dcc_d_dcc_ai_11_reg;
	color_dcc_d_dcc_ai_12_RBUS	dcc_d_dcc_ai_12_reg;
	color_dcc_d_dcc_ai_13_RBUS	dcc_d_dcc_ai_13_reg;
	color_dcc_d_dcc_ai_14_RBUS	dcc_d_dcc_ai_14_reg;
	color_dcc_d_dcc_ai_15_RBUS	dcc_d_dcc_ai_15_reg;
	color_dcc_d_dcc_ai_16_RBUS	dcc_d_dcc_ai_16_reg;
	color_dcc_d_dcc_ai_17_RBUS	dcc_d_dcc_ai_17_reg;
	color_dcc_d_dcc_ai_18_RBUS	dcc_d_dcc_ai_18_reg;
	color_dcc_d_dcc_ai_19_RBUS	dcc_d_dcc_ai_19_reg;
	color_dcc_d_dcc_ai_20_RBUS	dcc_d_dcc_ai_20_reg;
	color_dcc_d_dcc_ai_21_RBUS	dcc_d_dcc_ai_21_reg;

	icm_d_icm_ai_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_0_reg);
	icm_d_icm_ai_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_1_reg);
	icm_d_icm_ai_2_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_2_reg);
	icm_d_icm_ai_3_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_3_reg);
	icm_d_icm_ai_4_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_4_reg);
	icm_d_icm_ai_5_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_5_reg);
	icm_d_icm_ai_6_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_6_reg);
	icm_d_icm_ai_7_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_7_reg);
	icm_d_icm_ai_offset_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_0_reg);
	icm_d_icm_ai_offset_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_1_reg);
	icm_d_icm_ai_offset_2_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_2_reg);
	icm_d_icm_ai_offset_3_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_3_reg);
	icm_d_icm_ai_offset_4_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_4_reg);
	icm_d_icm_ai_offset_5_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_5_reg);
	icm_d_icm_ai_offset_6_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_6_reg);
	icm_d_icm_ai_offset_7_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_7_reg);
	icm_d_icm_ai_offset_8_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_8_reg);
	icm_d_icm_ai_offset_9_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_9_reg);
	icm_d_icm_ai_offset_10_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_10_reg);
	icm_d_icm_ai_offset_11_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_11_reg);

	// chen 0524
	icm_d_icm_skin_tone_segment_c0_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C0_0_reg);
	icm_d_icm_skin_tone_segment_c0_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C0_1_reg);
	icm_d_icm_skin_tone_segment_c1_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C1_0_reg);
	icm_d_icm_skin_tone_segment_c1_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C1_1_reg);
	icm_d_icm_skin_tone_segment_c2_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C2_0_reg);
	icm_d_icm_skin_tone_segment_c2_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C2_1_reg);
	icm_d_icm_skin_tone_segment_c3_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C3_0_reg);
	icm_d_icm_skin_tone_segment_c3_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C3_1_reg);
	icm_d_icm_skin_tone_segment_c4_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C4_0_reg);
	icm_d_icm_skin_tone_segment_c4_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C4_1_reg);
	icm_d_icm_skin_tone_segment_c5_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C5_0_reg);
	icm_d_icm_skin_tone_segment_c5_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C5_1_reg);
	//end chen 0524

	dcc_d_dcc_ai_7_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_7_reg);
	dcc_d_dcc_ai_8_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_8_reg);
	dcc_d_dcc_ai_9_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_9_reg);

	dcc_d_dcc_ai_10_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_10_reg);
	dcc_d_dcc_ai_11_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_11_reg);
	dcc_d_dcc_ai_12_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_12_reg);
	dcc_d_dcc_ai_13_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_13_reg);
	dcc_d_dcc_ai_14_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_14_reg);
	dcc_d_dcc_ai_15_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_15_reg);
	dcc_d_dcc_ai_16_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_16_reg);
	dcc_d_dcc_ai_17_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_17_reg);
	dcc_d_dcc_ai_18_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_18_reg);
	dcc_d_dcc_ai_19_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_19_reg);
	dcc_d_dcc_ai_20_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_20_reg);
	dcc_d_dcc_ai_21_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_21_reg);


	//face0
	// win_pos
	dcc_d_dcc_ai_10_reg.ai_center_x_0 = face_icm_apply_f[0].pos_x_s;
	dcc_d_dcc_ai_10_reg.ai_center_y_0 = face_icm_apply_f[0].pos_y_s;
	dcc_d_dcc_ai_16_reg.ai_center_u_0 = face_icm_apply_f[0].center_u_s;
	dcc_d_dcc_ai_16_reg.ai_center_v_0 = face_icm_apply_f[0].center_v_s;
	dcc_d_dcc_ai_7_reg.ai_range_0 = face_icm_apply_f[0].range_s;
	//icm_d_icm_ai_7_reg.ai_octa_tang_dir0 = face_icm_apply_f[0].intercept_dir;
	//icm_d_icm_ai_7_reg.ai_octa_tang_mode0 = face_icm_apply_f[0].intercept_mode;

	// blending ratio
/*
	icm_d_icm_ai_0_reg.ai_blending_0_inside_ratio=face_icm_apply_f[0].ai_blending_inside_s;
	icm_d_icm_ai_0_reg.ai_blending_0_ratio_0	 =face_icm_apply_f[0].ai_blending_0_s;
	icm_d_icm_ai_0_reg.ai_blending_0_ratio_1	 =face_icm_apply_f[0].ai_blending_1_s;
	icm_d_icm_ai_0_reg.ai_blending_0_ratio_2	 =face_icm_apply_f[0].ai_blending_2_s;
	icm_d_icm_ai_0_reg.ai_blending_0_ratio_3	 =face_icm_apply_f[0].ai_blending_3_s;
*/
	// chen 0524
	icm_d_icm_skin_tone_segment_c0_0_reg.c_blending_0_ratio_0=face_icm_apply_f[0].uv_blending_0;
	icm_d_icm_skin_tone_segment_c0_0_reg.c_blending_0_ratio_1=face_icm_apply_f[0].uv_blending_1;
	icm_d_icm_skin_tone_segment_c0_0_reg.c_blending_0_ratio_2=face_icm_apply_f[0].uv_blending_2;
	icm_d_icm_skin_tone_segment_c0_0_reg.c_blending_0_ratio_3=face_icm_apply_f[0].uv_blending_3;
	icm_d_icm_skin_tone_segment_c0_1_reg.c_blending_0_ratio_4=face_icm_apply_f[0].uv_blending_4;
	icm_d_icm_skin_tone_segment_c0_1_reg.c_blending_0_ratio_5=face_icm_apply_f[0].uv_blending_5;
	icm_d_icm_skin_tone_segment_c0_1_reg.c_blending_0_ratio_6=face_icm_apply_f[0].uv_blending_6;
	icm_d_icm_skin_tone_segment_c0_1_reg.c_blending_0_ratio_7=face_icm_apply_f[0].uv_blending_7;
	//end chen 0524

	//hue, sat adjust
	icm_d_icm_ai_offset_1_reg.ai_h_offset0=face_icm_apply_f[0].hue_adj_s;
	icm_d_icm_ai_offset_0_reg.ai_s_offset0=face_icm_apply_f[0].sat_adj_s;
	// lesley 0808
	icm_d_icm_ai_offset_0_reg.ai_i_offset0=face_icm_apply_f[0].int_adj_s;
	// end lesley 0808


	//face1
	dcc_d_dcc_ai_11_reg.ai_center_x_1 = face_icm_apply_f[1].pos_x_s;
	dcc_d_dcc_ai_11_reg.ai_center_y_1 = face_icm_apply_f[1].pos_y_s;
	dcc_d_dcc_ai_17_reg.ai_center_u_1 = face_icm_apply_f[1].center_u_s;
	dcc_d_dcc_ai_17_reg.ai_center_v_1 = face_icm_apply_f[1].center_v_s;
	dcc_d_dcc_ai_7_reg.ai_range_1 = face_icm_apply_f[1].range_s;
	//icm_d_icm_ai_7_reg.ai_octa_tang_dir1 = face_icm_apply_f[1].intercept_dir;
	//icm_d_icm_ai_7_reg.ai_octa_tang_mode1 = face_icm_apply_f[1].intercept_mode;
/*
	icm_d_icm_ai_1_reg.ai_blending_1_inside_ratio=face_icm_apply_f[1].ai_blending_inside_s;
	icm_d_icm_ai_1_reg.ai_blending_1_ratio_0	 =face_icm_apply_f[1].ai_blending_0_s;
	icm_d_icm_ai_1_reg.ai_blending_1_ratio_1	 =face_icm_apply_f[1].ai_blending_1_s;
	icm_d_icm_ai_1_reg.ai_blending_1_ratio_2	 =face_icm_apply_f[1].ai_blending_2_s;
	icm_d_icm_ai_1_reg.ai_blending_1_ratio_3	 =face_icm_apply_f[1].ai_blending_3_s;
*/
// chen 0524
	icm_d_icm_skin_tone_segment_c1_0_reg.c_blending_1_ratio_0=face_icm_apply_f[1].uv_blending_0;
	icm_d_icm_skin_tone_segment_c1_0_reg.c_blending_1_ratio_1=face_icm_apply_f[1].uv_blending_1;
	icm_d_icm_skin_tone_segment_c1_0_reg.c_blending_1_ratio_2=face_icm_apply_f[1].uv_blending_2;
	icm_d_icm_skin_tone_segment_c1_0_reg.c_blending_1_ratio_3=face_icm_apply_f[1].uv_blending_3;
	icm_d_icm_skin_tone_segment_c1_1_reg.c_blending_1_ratio_4=face_icm_apply_f[1].uv_blending_4;
	icm_d_icm_skin_tone_segment_c1_1_reg.c_blending_1_ratio_5=face_icm_apply_f[1].uv_blending_5;
	icm_d_icm_skin_tone_segment_c1_1_reg.c_blending_1_ratio_6=face_icm_apply_f[1].uv_blending_6;
	icm_d_icm_skin_tone_segment_c1_1_reg.c_blending_1_ratio_7=face_icm_apply_f[1].uv_blending_7;
	//end chen 0524

	//hue, sat adjust
	icm_d_icm_ai_offset_3_reg.ai_h_offset1=face_icm_apply_f[1].hue_adj_s;
	icm_d_icm_ai_offset_2_reg.ai_s_offset1=face_icm_apply_f[1].sat_adj_s;
	// lesley 0808
	icm_d_icm_ai_offset_2_reg.ai_i_offset1=face_icm_apply_f[1].int_adj_s;
	// end lesley 0808


	//face2
	dcc_d_dcc_ai_12_reg.ai_center_x_2 = face_icm_apply_f[2].pos_x_s;
	dcc_d_dcc_ai_12_reg.ai_center_y_2 = face_icm_apply_f[2].pos_y_s;
	dcc_d_dcc_ai_18_reg.ai_center_u_2 = face_icm_apply_f[2].center_u_s;
	dcc_d_dcc_ai_18_reg.ai_center_v_2 = face_icm_apply_f[2].center_v_s;
	dcc_d_dcc_ai_8_reg.ai_range_2 = face_icm_apply_f[2].range_s;
	//icm_d_icm_ai_7_reg.ai_octa_tang_dir2 = face_icm_apply_f[2].intercept_dir;
	//icm_d_icm_ai_7_reg.ai_octa_tang_mode2 = face_icm_apply_f[2].intercept_mode;
/*
	icm_d_icm_ai_2_reg.ai_blending_2_inside_ratio=face_icm_apply_f[2].ai_blending_inside_s;
	icm_d_icm_ai_2_reg.ai_blending_2_ratio_0	 =face_icm_apply_f[2].ai_blending_0_s;
	icm_d_icm_ai_2_reg.ai_blending_2_ratio_1	 =face_icm_apply_f[2].ai_blending_1_s;
	icm_d_icm_ai_2_reg.ai_blending_2_ratio_2	 =face_icm_apply_f[2].ai_blending_2_s;
	icm_d_icm_ai_2_reg.ai_blending_2_ratio_3	 =face_icm_apply_f[2].ai_blending_3_s;
*/
// chen 0524
	icm_d_icm_skin_tone_segment_c2_0_reg.c_blending_2_ratio_0=face_icm_apply_f[2].uv_blending_0;
	icm_d_icm_skin_tone_segment_c2_0_reg.c_blending_2_ratio_1=face_icm_apply_f[2].uv_blending_1;
	icm_d_icm_skin_tone_segment_c2_0_reg.c_blending_2_ratio_2=face_icm_apply_f[2].uv_blending_2;
	icm_d_icm_skin_tone_segment_c2_0_reg.c_blending_2_ratio_3=face_icm_apply_f[2].uv_blending_3;
	icm_d_icm_skin_tone_segment_c2_1_reg.c_blending_2_ratio_4=face_icm_apply_f[2].uv_blending_4;
	icm_d_icm_skin_tone_segment_c2_1_reg.c_blending_2_ratio_5=face_icm_apply_f[2].uv_blending_5;
	icm_d_icm_skin_tone_segment_c2_1_reg.c_blending_2_ratio_6=face_icm_apply_f[2].uv_blending_6;
	icm_d_icm_skin_tone_segment_c2_1_reg.c_blending_2_ratio_7=face_icm_apply_f[2].uv_blending_7;
	//end chen 0524

	//hue, sat adjust
	icm_d_icm_ai_offset_5_reg.ai_h_offset2=face_icm_apply_f[2].hue_adj_s;
	icm_d_icm_ai_offset_4_reg.ai_s_offset2=face_icm_apply_f[2].sat_adj_s;
	// lesley 0808
	icm_d_icm_ai_offset_4_reg.ai_i_offset2=face_icm_apply_f[2].int_adj_s;
	// end lesley 0808


	//face3
	dcc_d_dcc_ai_13_reg.ai_center_x_3 = face_icm_apply_f[3].pos_x_s;
	dcc_d_dcc_ai_13_reg.ai_center_y_3 = face_icm_apply_f[3].pos_y_s;
	dcc_d_dcc_ai_19_reg.ai_center_u_3 = face_icm_apply_f[3].center_u_s;
	dcc_d_dcc_ai_19_reg.ai_center_v_3 = face_icm_apply_f[3].center_v_s;
	dcc_d_dcc_ai_8_reg.ai_range_3 = face_icm_apply_f[3].range_s;
	//icm_d_icm_ai_7_reg.ai_octa_tang_dir3 = face_icm_apply_f[3].intercept_dir;
	//icm_d_icm_ai_7_reg.ai_octa_tang_mode3 = face_icm_apply_f[3].intercept_mode;
/*
	icm_d_icm_ai_3_reg.ai_blending_3_inside_ratio=face_icm_apply_f[3].ai_blending_inside_s;
	icm_d_icm_ai_3_reg.ai_blending_3_ratio_0	 =face_icm_apply_f[3].ai_blending_0_s;
	icm_d_icm_ai_3_reg.ai_blending_3_ratio_1	 =face_icm_apply_f[3].ai_blending_1_s;
	icm_d_icm_ai_3_reg.ai_blending_3_ratio_2	 =face_icm_apply_f[3].ai_blending_2_s;
	icm_d_icm_ai_3_reg.ai_blending_3_ratio_3	 =face_icm_apply_f[3].ai_blending_3_s;
*/
// chen 0524
	icm_d_icm_skin_tone_segment_c3_0_reg.c_blending_3_ratio_0=face_icm_apply_f[3].uv_blending_0;
	icm_d_icm_skin_tone_segment_c3_0_reg.c_blending_3_ratio_1=face_icm_apply_f[3].uv_blending_1;
	icm_d_icm_skin_tone_segment_c3_0_reg.c_blending_3_ratio_2=face_icm_apply_f[3].uv_blending_2;
	icm_d_icm_skin_tone_segment_c3_0_reg.c_blending_3_ratio_3=face_icm_apply_f[3].uv_blending_3;
	icm_d_icm_skin_tone_segment_c3_1_reg.c_blending_3_ratio_4=face_icm_apply_f[3].uv_blending_4;
	icm_d_icm_skin_tone_segment_c3_1_reg.c_blending_3_ratio_5=face_icm_apply_f[3].uv_blending_5;
	icm_d_icm_skin_tone_segment_c3_1_reg.c_blending_3_ratio_6=face_icm_apply_f[3].uv_blending_6;
	icm_d_icm_skin_tone_segment_c3_1_reg.c_blending_3_ratio_7=face_icm_apply_f[3].uv_blending_7;
	//end chen 0524

	//hue, sat adjust
	icm_d_icm_ai_offset_7_reg.ai_h_offset3=face_icm_apply_f[3].hue_adj_s;
	icm_d_icm_ai_offset_6_reg.ai_s_offset3=face_icm_apply_f[3].sat_adj_s;
	// lesley 0808
	icm_d_icm_ai_offset_6_reg.ai_i_offset3=face_icm_apply_f[3].int_adj_s;
	// end lesley 0808



	//face4
	dcc_d_dcc_ai_14_reg.ai_center_x_4 = face_icm_apply_f[4].pos_x_s;
	dcc_d_dcc_ai_14_reg.ai_center_y_4 = face_icm_apply_f[4].pos_y_s;
	dcc_d_dcc_ai_20_reg.ai_center_u_4 = face_icm_apply_f[4].center_u_s;
	dcc_d_dcc_ai_20_reg.ai_center_v_4 = face_icm_apply_f[4].center_v_s;
	dcc_d_dcc_ai_9_reg.ai_range_4 = face_icm_apply_f[4].range_s;
	//icm_d_icm_ai_7_reg.ai_octa_tang_dir4 = face_icm_apply_f[4].intercept_dir;
	//icm_d_icm_ai_7_reg.ai_octa_tang_mode4 = face_icm_apply_f[4].intercept_mode;
/*
	icm_d_icm_ai_4_reg.ai_blending_4_inside_ratio=face_icm_apply_f[4].ai_blending_inside_s;
	icm_d_icm_ai_4_reg.ai_blending_4_ratio_0	 =face_icm_apply_f[4].ai_blending_0_s;
	icm_d_icm_ai_4_reg.ai_blending_4_ratio_1	 =face_icm_apply_f[4].ai_blending_1_s;
	icm_d_icm_ai_4_reg.ai_blending_4_ratio_2	 =face_icm_apply_f[4].ai_blending_2_s;
	icm_d_icm_ai_4_reg.ai_blending_4_ratio_3	 =face_icm_apply_f[4].ai_blending_3_s;
*/
// chen 0524
	icm_d_icm_skin_tone_segment_c4_0_reg.c_blending_4_ratio_0=face_icm_apply_f[4].uv_blending_0;
	icm_d_icm_skin_tone_segment_c4_0_reg.c_blending_4_ratio_1=face_icm_apply_f[4].uv_blending_1;
	icm_d_icm_skin_tone_segment_c4_0_reg.c_blending_4_ratio_2=face_icm_apply_f[4].uv_blending_2;
	icm_d_icm_skin_tone_segment_c4_0_reg.c_blending_4_ratio_3=face_icm_apply_f[4].uv_blending_3;
	icm_d_icm_skin_tone_segment_c4_1_reg.c_blending_4_ratio_4=face_icm_apply_f[4].uv_blending_4;
	icm_d_icm_skin_tone_segment_c4_1_reg.c_blending_4_ratio_5=face_icm_apply_f[4].uv_blending_5;
	icm_d_icm_skin_tone_segment_c4_1_reg.c_blending_4_ratio_6=face_icm_apply_f[4].uv_blending_6;
	icm_d_icm_skin_tone_segment_c4_1_reg.c_blending_4_ratio_7=face_icm_apply_f[4].uv_blending_7;
	//end chen 0524

	//hue, sat adjust
	icm_d_icm_ai_offset_9_reg.ai_h_offset4=face_icm_apply_f[4].hue_adj_s;
	icm_d_icm_ai_offset_8_reg.ai_s_offset4=face_icm_apply_f[4].sat_adj_s;
	// lesley 0808
	icm_d_icm_ai_offset_8_reg.ai_i_offset4=face_icm_apply_f[4].int_adj_s;
	// end lesley 0808


	//face5
	dcc_d_dcc_ai_15_reg.ai_center_x_5 = face_icm_apply_f[5].pos_x_s;
	dcc_d_dcc_ai_15_reg.ai_center_y_5 = face_icm_apply_f[5].pos_y_s;
	dcc_d_dcc_ai_21_reg.ai_center_u_5 = face_icm_apply_f[5].center_u_s;
	dcc_d_dcc_ai_21_reg.ai_center_v_5 = face_icm_apply_f[5].center_v_s;
	dcc_d_dcc_ai_9_reg.ai_range_5 = face_icm_apply_f[5].range_s;
	//icm_d_icm_ai_7_reg.ai_octa_tang_dir5 = face_icm_apply_f[5].intercept_dir;
	//icm_d_icm_ai_7_reg.ai_octa_tang_mode5 = face_icm_apply_f[5].intercept_mode;
/*
	icm_d_icm_ai_5_reg.ai_blending_5_inside_ratio=face_icm_apply_f[5].ai_blending_inside_s;
	icm_d_icm_ai_5_reg.ai_blending_5_ratio_0	 =face_icm_apply_f[5].ai_blending_0_s;
	icm_d_icm_ai_5_reg.ai_blending_5_ratio_1	 =face_icm_apply_f[5].ai_blending_1_s;
	icm_d_icm_ai_5_reg.ai_blending_5_ratio_2	 =face_icm_apply_f[5].ai_blending_2_s;
	icm_d_icm_ai_5_reg.ai_blending_5_ratio_3	 =face_icm_apply_f[5].ai_blending_3_s;
*/
// chen 0524
	icm_d_icm_skin_tone_segment_c5_0_reg.c_blending_5_ratio_0=face_icm_apply_f[5].uv_blending_0;
	icm_d_icm_skin_tone_segment_c5_0_reg.c_blending_5_ratio_1=face_icm_apply_f[5].uv_blending_1;
	icm_d_icm_skin_tone_segment_c5_0_reg.c_blending_5_ratio_2=face_icm_apply_f[5].uv_blending_2;
	icm_d_icm_skin_tone_segment_c5_0_reg.c_blending_5_ratio_3=face_icm_apply_f[5].uv_blending_3;
	icm_d_icm_skin_tone_segment_c5_1_reg.c_blending_5_ratio_4=face_icm_apply_f[5].uv_blending_4;
	icm_d_icm_skin_tone_segment_c5_1_reg.c_blending_5_ratio_5=face_icm_apply_f[5].uv_blending_5;
	icm_d_icm_skin_tone_segment_c5_1_reg.c_blending_5_ratio_6=face_icm_apply_f[5].uv_blending_6;
	icm_d_icm_skin_tone_segment_c5_1_reg.c_blending_5_ratio_7=face_icm_apply_f[5].uv_blending_7;
	//end chen 0524

	//hue, sat adjust
	icm_d_icm_ai_offset_11_reg.ai_h_offset5=face_icm_apply_f[5].hue_adj_s;
	icm_d_icm_ai_offset_10_reg.ai_s_offset5=face_icm_apply_f[5].sat_adj_s;
	// lesley 0808
	icm_d_icm_ai_offset_10_reg.ai_i_offset5=face_icm_apply_f[5].int_adj_s;
	// end lesley 0808


//	icm_d_icm_ai_6_reg.ai_detect_value=255;


	IoReg_Write32(COLOR_ICM_D_ICM_AI_0_reg, icm_d_icm_ai_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_1_reg, icm_d_icm_ai_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_2_reg, icm_d_icm_ai_2_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_3_reg, icm_d_icm_ai_3_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_4_reg, icm_d_icm_ai_4_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_5_reg, icm_d_icm_ai_5_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_6_reg, icm_d_icm_ai_6_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_7_reg, icm_d_icm_ai_7_reg.regValue);

	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_0_reg, icm_d_icm_ai_offset_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_1_reg, icm_d_icm_ai_offset_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_2_reg, icm_d_icm_ai_offset_2_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_3_reg, icm_d_icm_ai_offset_3_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_4_reg, icm_d_icm_ai_offset_4_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_5_reg, icm_d_icm_ai_offset_5_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_6_reg, icm_d_icm_ai_offset_6_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_7_reg, icm_d_icm_ai_offset_7_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_8_reg, icm_d_icm_ai_offset_8_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_9_reg, icm_d_icm_ai_offset_9_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_10_reg, icm_d_icm_ai_offset_10_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_11_reg, icm_d_icm_ai_offset_11_reg.regValue);

	IoReg_Write32(COLOR_DCC_D_DCC_AI_7_reg, dcc_d_dcc_ai_7_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_8_reg, dcc_d_dcc_ai_8_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_9_reg, dcc_d_dcc_ai_9_reg.regValue);

	IoReg_Write32(COLOR_DCC_D_DCC_AI_10_reg, dcc_d_dcc_ai_10_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_11_reg, dcc_d_dcc_ai_11_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_12_reg, dcc_d_dcc_ai_12_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_13_reg, dcc_d_dcc_ai_13_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_14_reg, dcc_d_dcc_ai_14_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_15_reg, dcc_d_dcc_ai_15_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_16_reg, dcc_d_dcc_ai_16_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_17_reg, dcc_d_dcc_ai_17_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_18_reg, dcc_d_dcc_ai_18_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_19_reg, dcc_d_dcc_ai_19_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_20_reg, dcc_d_dcc_ai_20_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_21_reg, dcc_d_dcc_ai_21_reg.regValue);
	// end chen 0417

		// chen 0524
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C0_0_reg, icm_d_icm_skin_tone_segment_c0_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C0_1_reg, icm_d_icm_skin_tone_segment_c0_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C1_0_reg, icm_d_icm_skin_tone_segment_c1_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C1_1_reg, icm_d_icm_skin_tone_segment_c1_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C2_0_reg, icm_d_icm_skin_tone_segment_c2_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C2_1_reg, icm_d_icm_skin_tone_segment_c2_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C3_0_reg, icm_d_icm_skin_tone_segment_c3_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C3_1_reg, icm_d_icm_skin_tone_segment_c3_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C4_0_reg, icm_d_icm_skin_tone_segment_c4_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C4_1_reg, icm_d_icm_skin_tone_segment_c4_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C5_0_reg, icm_d_icm_skin_tone_segment_c5_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C5_1_reg, icm_d_icm_skin_tone_segment_c5_1_reg.regValue);

	//end chen 0524


}

void drvif_color_AI_obj_dcc_set(AI_DCC_apply face_dcc_apply_f[6])
{
	// chen 0429
	color_dcc_d_dcc_ai_0_RBUS	dcc_d_dcc_ai_0_reg;
	color_dcc_d_dcc_ai_1_RBUS	dcc_d_dcc_ai_1_reg;
	color_dcc_d_dcc_ai_2_RBUS	dcc_d_dcc_ai_2_reg;
	color_dcc_d_dcc_ai_3_RBUS	dcc_d_dcc_ai_3_reg;
	color_dcc_d_dcc_ai_4_RBUS	dcc_d_dcc_ai_4_reg;
	color_dcc_d_dcc_ai_5_RBUS	dcc_d_dcc_ai_5_reg;
	color_dcc_d_dcc_ai_6_RBUS	dcc_d_dcc_ai_6_reg;


	// icm share with dcc
	color_dcc_d_dcc_ai_7_RBUS    dcc_d_dcc_ai_7_reg;
	color_dcc_d_dcc_ai_8_RBUS	 dcc_d_dcc_ai_8_reg;
	color_dcc_d_dcc_ai_9_RBUS	 dcc_d_dcc_ai_9_reg;

	color_dcc_d_dcc_ai_10_RBUS	dcc_d_dcc_ai_10_reg;
	color_dcc_d_dcc_ai_11_RBUS	dcc_d_dcc_ai_11_reg;
	color_dcc_d_dcc_ai_12_RBUS	dcc_d_dcc_ai_12_reg;
	color_dcc_d_dcc_ai_13_RBUS	dcc_d_dcc_ai_13_reg;
	color_dcc_d_dcc_ai_14_RBUS	dcc_d_dcc_ai_14_reg;
	color_dcc_d_dcc_ai_15_RBUS	dcc_d_dcc_ai_15_reg;
	color_dcc_d_dcc_ai_16_RBUS	dcc_d_dcc_ai_16_reg;
	color_dcc_d_dcc_ai_17_RBUS	dcc_d_dcc_ai_17_reg;
	color_dcc_d_dcc_ai_18_RBUS	dcc_d_dcc_ai_18_reg;
	color_dcc_d_dcc_ai_19_RBUS	dcc_d_dcc_ai_19_reg;
	color_dcc_d_dcc_ai_20_RBUS	dcc_d_dcc_ai_20_reg;
	color_dcc_d_dcc_ai_21_RBUS	dcc_d_dcc_ai_21_reg;

	// chen 0524
	color_dcc_d_dcc_skin_tone_segment_c0_0_RBUS dcc_d_dcc_skin_tone_segment_c0_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c0_1_RBUS dcc_d_dcc_skin_tone_segment_c0_1_reg;
	color_dcc_d_dcc_skin_tone_segment_c1_0_RBUS dcc_d_dcc_skin_tone_segment_c1_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c1_1_RBUS dcc_d_dcc_skin_tone_segment_c1_1_reg;
	color_dcc_d_dcc_skin_tone_segment_c2_0_RBUS dcc_d_dcc_skin_tone_segment_c2_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c2_1_RBUS dcc_d_dcc_skin_tone_segment_c2_1_reg;
	color_dcc_d_dcc_skin_tone_segment_c3_0_RBUS dcc_d_dcc_skin_tone_segment_c3_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c3_1_RBUS dcc_d_dcc_skin_tone_segment_c3_1_reg;
	color_dcc_d_dcc_skin_tone_segment_c4_0_RBUS dcc_d_dcc_skin_tone_segment_c4_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c4_1_RBUS dcc_d_dcc_skin_tone_segment_c4_1_reg;
	color_dcc_d_dcc_skin_tone_segment_c5_0_RBUS dcc_d_dcc_skin_tone_segment_c5_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c5_1_RBUS dcc_d_dcc_skin_tone_segment_c5_1_reg;

	//end chen 0524

	// lesley 0910
	color_dcc_d_dcc_skin_tone_en_RBUS d_dcc_skin_tone_en_reg;
	// end lesley 0910

	dcc_d_dcc_ai_0_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_0_reg);
	dcc_d_dcc_ai_1_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_1_reg);
	dcc_d_dcc_ai_2_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_2_reg);
	dcc_d_dcc_ai_3_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_3_reg);
	dcc_d_dcc_ai_4_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_4_reg);
	dcc_d_dcc_ai_5_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_5_reg);

	dcc_d_dcc_ai_6_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_6_reg);


	dcc_d_dcc_ai_7_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_7_reg);
	dcc_d_dcc_ai_8_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_8_reg);
	dcc_d_dcc_ai_9_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_9_reg);

	dcc_d_dcc_ai_10_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_10_reg);
	dcc_d_dcc_ai_11_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_11_reg);
	dcc_d_dcc_ai_12_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_12_reg);
	dcc_d_dcc_ai_13_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_13_reg);
	dcc_d_dcc_ai_14_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_14_reg);
	dcc_d_dcc_ai_15_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_15_reg);
	dcc_d_dcc_ai_16_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_16_reg);
	dcc_d_dcc_ai_17_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_17_reg);
	dcc_d_dcc_ai_18_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_18_reg);
	dcc_d_dcc_ai_19_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_19_reg);
	dcc_d_dcc_ai_20_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_20_reg);
	dcc_d_dcc_ai_21_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_21_reg);

	// chen 0524
	dcc_d_dcc_skin_tone_segment_c0_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg);
	dcc_d_dcc_skin_tone_segment_c0_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg);
	dcc_d_dcc_skin_tone_segment_c1_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg);
	dcc_d_dcc_skin_tone_segment_c1_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg);
	dcc_d_dcc_skin_tone_segment_c2_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg);
	dcc_d_dcc_skin_tone_segment_c2_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg);
	dcc_d_dcc_skin_tone_segment_c3_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg);
	dcc_d_dcc_skin_tone_segment_c3_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg);
	dcc_d_dcc_skin_tone_segment_c4_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg);
	dcc_d_dcc_skin_tone_segment_c4_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg);
	dcc_d_dcc_skin_tone_segment_c5_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg);
	dcc_d_dcc_skin_tone_segment_c5_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg);
	//end chen 0524

	// lesley 0910
	d_dcc_skin_tone_en_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_EN_reg);
	// end lesley 0910

	//face0
	// win_pos
	dcc_d_dcc_ai_10_reg.ai_center_x_0 = face_dcc_apply_f[0].pos_x_s;
	dcc_d_dcc_ai_10_reg.ai_center_y_0 = face_dcc_apply_f[0].pos_y_s;
	dcc_d_dcc_ai_16_reg.ai_center_u_0 = face_dcc_apply_f[0].center_u_s;
	dcc_d_dcc_ai_16_reg.ai_center_v_0 = face_dcc_apply_f[0].center_v_s;
	dcc_d_dcc_ai_7_reg.ai_range_0 = face_dcc_apply_f[0].range_s;
	//dcc_d_dcc_ai_8_reg.ai_octa_tang_dir0 = face_dcc_apply_f[0].octa_tang_dir;
	//dcc_d_dcc_ai_6_reg.ai_octa_tang_mode0 = face_dcc_apply_f[0].octa_tang_mode;

	// blending ratio
	/*
	dcc_d_dcc_ai_0_reg.ai_blending_0_inside_ratio=face_dcc_apply_f[0].ai_blending_inside_s;
	dcc_d_dcc_ai_0_reg.ai_blending_0_ratio_0	 =face_dcc_apply_f[0].ai_blending_0_s;
	dcc_d_dcc_ai_0_reg.ai_blending_0_ratio_1	 =face_dcc_apply_f[0].ai_blending_1_s;
	dcc_d_dcc_ai_0_reg.ai_blending_0_ratio_2	 =face_dcc_apply_f[0].ai_blending_2_s;
	dcc_d_dcc_ai_0_reg.ai_blending_0_ratio_3	 =face_dcc_apply_f[0].ai_blending_3_s;
*/
// chen 0524
	dcc_d_dcc_skin_tone_segment_c0_0_reg.c_blending_0_ratio_0=face_dcc_apply_f[0].uv_blending_0;
	dcc_d_dcc_skin_tone_segment_c0_0_reg.c_blending_0_ratio_1=face_dcc_apply_f[0].uv_blending_1;
	dcc_d_dcc_skin_tone_segment_c0_0_reg.c_blending_0_ratio_2=face_dcc_apply_f[0].uv_blending_2;
	dcc_d_dcc_skin_tone_segment_c0_0_reg.c_blending_0_ratio_3=face_dcc_apply_f[0].uv_blending_3;
	dcc_d_dcc_skin_tone_segment_c0_1_reg.c_blending_0_ratio_4=face_dcc_apply_f[0].uv_blending_4;
	dcc_d_dcc_skin_tone_segment_c0_1_reg.c_blending_0_ratio_5=face_dcc_apply_f[0].uv_blending_5;
	dcc_d_dcc_skin_tone_segment_c0_1_reg.c_blending_0_ratio_6=face_dcc_apply_f[0].uv_blending_6;
	dcc_d_dcc_skin_tone_segment_c0_1_reg.c_blending_0_ratio_7=face_dcc_apply_f[0].uv_blending_7;
//end chen 0524


	//face1
	dcc_d_dcc_ai_11_reg.ai_center_x_1 = face_dcc_apply_f[1].pos_x_s;
	dcc_d_dcc_ai_11_reg.ai_center_y_1 = face_dcc_apply_f[1].pos_y_s;
	dcc_d_dcc_ai_17_reg.ai_center_u_1 = face_dcc_apply_f[1].center_u_s;
	dcc_d_dcc_ai_17_reg.ai_center_v_1 = face_dcc_apply_f[1].center_v_s;
	dcc_d_dcc_ai_7_reg.ai_range_1 = face_dcc_apply_f[1].range_s;
	//dcc_d_dcc_ai_8_reg.ai_octa_tang_dir1 = face_dcc_apply_f[1].octa_tang_dir;
	//dcc_d_dcc_ai_6_reg.ai_octa_tang_mode1 = face_dcc_apply_f[1].octa_tang_mode;
/*
	dcc_d_dcc_ai_1_reg.ai_blending_1_inside_ratio=face_dcc_apply_f[1].ai_blending_inside_s;
	dcc_d_dcc_ai_1_reg.ai_blending_1_ratio_0	 =face_dcc_apply_f[1].ai_blending_0_s;
	dcc_d_dcc_ai_1_reg.ai_blending_1_ratio_1	 =face_dcc_apply_f[1].ai_blending_1_s;
	dcc_d_dcc_ai_1_reg.ai_blending_1_ratio_2	 =face_dcc_apply_f[1].ai_blending_2_s;
	dcc_d_dcc_ai_1_reg.ai_blending_1_ratio_3	 =face_dcc_apply_f[1].ai_blending_3_s;
*/
// chen 0524
	dcc_d_dcc_skin_tone_segment_c1_0_reg.c_blending_1_ratio_0=face_dcc_apply_f[1].uv_blending_0;
	dcc_d_dcc_skin_tone_segment_c1_0_reg.c_blending_1_ratio_1=face_dcc_apply_f[1].uv_blending_1;
	dcc_d_dcc_skin_tone_segment_c1_0_reg.c_blending_1_ratio_2=face_dcc_apply_f[1].uv_blending_2;
	dcc_d_dcc_skin_tone_segment_c1_0_reg.c_blending_1_ratio_3=face_dcc_apply_f[1].uv_blending_3;
	dcc_d_dcc_skin_tone_segment_c1_1_reg.c_blending_1_ratio_4=face_dcc_apply_f[1].uv_blending_4;
	dcc_d_dcc_skin_tone_segment_c1_1_reg.c_blending_1_ratio_5=face_dcc_apply_f[1].uv_blending_5;
	dcc_d_dcc_skin_tone_segment_c1_1_reg.c_blending_1_ratio_6=face_dcc_apply_f[1].uv_blending_6;
	dcc_d_dcc_skin_tone_segment_c1_1_reg.c_blending_1_ratio_7=face_dcc_apply_f[1].uv_blending_7;
//end chen 0524


	//face2
	dcc_d_dcc_ai_12_reg.ai_center_x_2 = face_dcc_apply_f[2].pos_x_s;
	dcc_d_dcc_ai_12_reg.ai_center_y_2 = face_dcc_apply_f[2].pos_y_s;
	dcc_d_dcc_ai_18_reg.ai_center_u_2 = face_dcc_apply_f[2].center_u_s;
	dcc_d_dcc_ai_18_reg.ai_center_v_2 = face_dcc_apply_f[2].center_v_s;
	dcc_d_dcc_ai_8_reg.ai_range_2 = face_dcc_apply_f[2].range_s;
	//dcc_d_dcc_ai_8_reg.ai_octa_tang_dir2 = face_dcc_apply_f[2].octa_tang_dir;
	//dcc_d_dcc_ai_6_reg.ai_octa_tang_mode2 = face_dcc_apply_f[2].octa_tang_mode;
/*
	dcc_d_dcc_ai_2_reg.ai_blending_2_inside_ratio=face_dcc_apply_f[2].ai_blending_inside_s;
	dcc_d_dcc_ai_2_reg.ai_blending_2_ratio_0	 =face_dcc_apply_f[2].ai_blending_0_s;
	dcc_d_dcc_ai_2_reg.ai_blending_2_ratio_1	 =face_dcc_apply_f[2].ai_blending_1_s;
	dcc_d_dcc_ai_2_reg.ai_blending_2_ratio_2	 =face_dcc_apply_f[2].ai_blending_2_s;
	dcc_d_dcc_ai_2_reg.ai_blending_2_ratio_3	 =face_dcc_apply_f[2].ai_blending_3_s;
*/
// chen 0524
	dcc_d_dcc_skin_tone_segment_c2_0_reg.c_blending_2_ratio_0=face_dcc_apply_f[2].uv_blending_0;
	dcc_d_dcc_skin_tone_segment_c2_0_reg.c_blending_2_ratio_1=face_dcc_apply_f[2].uv_blending_1;
	dcc_d_dcc_skin_tone_segment_c2_0_reg.c_blending_2_ratio_2=face_dcc_apply_f[2].uv_blending_2;
	dcc_d_dcc_skin_tone_segment_c2_0_reg.c_blending_2_ratio_3=face_dcc_apply_f[2].uv_blending_3;
	dcc_d_dcc_skin_tone_segment_c2_1_reg.c_blending_2_ratio_4=face_dcc_apply_f[2].uv_blending_4;
	dcc_d_dcc_skin_tone_segment_c2_1_reg.c_blending_2_ratio_5=face_dcc_apply_f[2].uv_blending_5;
	dcc_d_dcc_skin_tone_segment_c2_1_reg.c_blending_2_ratio_6=face_dcc_apply_f[2].uv_blending_6;
	dcc_d_dcc_skin_tone_segment_c2_1_reg.c_blending_2_ratio_7=face_dcc_apply_f[2].uv_blending_7;
//end chen 0524


	//face3
	dcc_d_dcc_ai_13_reg.ai_center_x_3 = face_dcc_apply_f[3].pos_x_s;
	dcc_d_dcc_ai_13_reg.ai_center_y_3 = face_dcc_apply_f[3].pos_y_s;
	dcc_d_dcc_ai_19_reg.ai_center_u_3 = face_dcc_apply_f[3].center_u_s;
	dcc_d_dcc_ai_19_reg.ai_center_v_3 = face_dcc_apply_f[3].center_v_s;
	dcc_d_dcc_ai_8_reg.ai_range_3 = face_dcc_apply_f[3].range_s;
	//dcc_d_dcc_ai_8_reg.ai_octa_tang_dir3 = face_dcc_apply_f[3].octa_tang_dir;
	//dcc_d_dcc_ai_6_reg.ai_octa_tang_mode3 = face_dcc_apply_f[3].octa_tang_mode;
/*
	dcc_d_dcc_ai_3_reg.ai_blending_3_inside_ratio=face_dcc_apply_f[3].ai_blending_inside_s;
	dcc_d_dcc_ai_3_reg.ai_blending_3_ratio_0	 =face_dcc_apply_f[3].ai_blending_0_s;
	dcc_d_dcc_ai_3_reg.ai_blending_3_ratio_1	 =face_dcc_apply_f[3].ai_blending_1_s;
	dcc_d_dcc_ai_3_reg.ai_blending_3_ratio_2	 =face_dcc_apply_f[3].ai_blending_2_s;
	dcc_d_dcc_ai_3_reg.ai_blending_3_ratio_3	 =face_dcc_apply_f[3].ai_blending_3_s;
*/
// chen 0524
	dcc_d_dcc_skin_tone_segment_c3_0_reg.c_blending_3_ratio_0=face_dcc_apply_f[3].uv_blending_0;
	dcc_d_dcc_skin_tone_segment_c3_0_reg.c_blending_3_ratio_1=face_dcc_apply_f[3].uv_blending_1;
	dcc_d_dcc_skin_tone_segment_c3_0_reg.c_blending_3_ratio_2=face_dcc_apply_f[3].uv_blending_2;
	dcc_d_dcc_skin_tone_segment_c3_0_reg.c_blending_3_ratio_3=face_dcc_apply_f[3].uv_blending_3;
	dcc_d_dcc_skin_tone_segment_c3_1_reg.c_blending_3_ratio_4=face_dcc_apply_f[3].uv_blending_4;
	dcc_d_dcc_skin_tone_segment_c3_1_reg.c_blending_3_ratio_5=face_dcc_apply_f[3].uv_blending_5;
	dcc_d_dcc_skin_tone_segment_c3_1_reg.c_blending_3_ratio_6=face_dcc_apply_f[3].uv_blending_6;
	dcc_d_dcc_skin_tone_segment_c3_1_reg.c_blending_3_ratio_7=face_dcc_apply_f[3].uv_blending_7;
//end chen 0524


	//face4
	dcc_d_dcc_ai_14_reg.ai_center_x_4 = face_dcc_apply_f[4].pos_x_s;
	dcc_d_dcc_ai_14_reg.ai_center_y_4 = face_dcc_apply_f[4].pos_y_s;
	dcc_d_dcc_ai_20_reg.ai_center_u_4 = face_dcc_apply_f[4].center_u_s;
	dcc_d_dcc_ai_20_reg.ai_center_v_4 = face_dcc_apply_f[4].center_v_s;
	dcc_d_dcc_ai_9_reg.ai_range_4 = face_dcc_apply_f[4].range_s;
	//dcc_d_dcc_ai_8_reg.ai_octa_tang_dir4 = face_dcc_apply_f[4].octa_tang_dir;
	//dcc_d_dcc_ai_6_reg.ai_octa_tang_mode4 = face_dcc_apply_f[4].octa_tang_mode;
/*
	dcc_d_dcc_ai_4_reg.ai_blending_4_inside_ratio=face_dcc_apply_f[4].ai_blending_inside_s;
	dcc_d_dcc_ai_4_reg.ai_blending_4_ratio_0	 =face_dcc_apply_f[4].ai_blending_0_s;
	dcc_d_dcc_ai_4_reg.ai_blending_4_ratio_1	 =face_dcc_apply_f[4].ai_blending_1_s;
	dcc_d_dcc_ai_4_reg.ai_blending_4_ratio_2	 =face_dcc_apply_f[4].ai_blending_2_s;
	dcc_d_dcc_ai_4_reg.ai_blending_4_ratio_3	 =face_dcc_apply_f[4].ai_blending_3_s;
*/
// chen 0524
	dcc_d_dcc_skin_tone_segment_c4_0_reg.c_blending_4_ratio_0=face_dcc_apply_f[4].uv_blending_0;
	dcc_d_dcc_skin_tone_segment_c4_0_reg.c_blending_4_ratio_1=face_dcc_apply_f[4].uv_blending_1;
	dcc_d_dcc_skin_tone_segment_c4_0_reg.c_blending_4_ratio_2=face_dcc_apply_f[4].uv_blending_2;
	dcc_d_dcc_skin_tone_segment_c4_0_reg.c_blending_4_ratio_3=face_dcc_apply_f[4].uv_blending_3;
	dcc_d_dcc_skin_tone_segment_c4_1_reg.c_blending_4_ratio_4=face_dcc_apply_f[4].uv_blending_4;
	dcc_d_dcc_skin_tone_segment_c4_1_reg.c_blending_4_ratio_5=face_dcc_apply_f[4].uv_blending_5;
	dcc_d_dcc_skin_tone_segment_c4_1_reg.c_blending_4_ratio_6=face_dcc_apply_f[4].uv_blending_6;
	dcc_d_dcc_skin_tone_segment_c4_1_reg.c_blending_4_ratio_7=face_dcc_apply_f[4].uv_blending_7;
//end chen 0524



	//face5
	dcc_d_dcc_ai_15_reg.ai_center_x_5 = face_dcc_apply_f[5].pos_x_s;
	dcc_d_dcc_ai_15_reg.ai_center_y_5 = face_dcc_apply_f[5].pos_y_s;
	dcc_d_dcc_ai_21_reg.ai_center_u_5 = face_dcc_apply_f[5].center_u_s;
	dcc_d_dcc_ai_21_reg.ai_center_v_5 = face_dcc_apply_f[5].center_v_s;
	dcc_d_dcc_ai_9_reg.ai_range_5 = face_dcc_apply_f[5].range_s;
	//dcc_d_dcc_ai_8_reg.ai_octa_tang_dir5 = face_dcc_apply_f[5].octa_tang_dir;
	//dcc_d_dcc_ai_7_reg.ai_octa_tang_mode5 = face_dcc_apply_f[5].octa_tang_mode;
/*
	dcc_d_dcc_ai_5_reg.ai_blending_5_inside_ratio=face_dcc_apply_f[5].ai_blending_inside_s;
	dcc_d_dcc_ai_5_reg.ai_blending_5_ratio_0	 =face_dcc_apply_f[5].ai_blending_0_s;
	dcc_d_dcc_ai_5_reg.ai_blending_5_ratio_1	 =face_dcc_apply_f[5].ai_blending_1_s;
	dcc_d_dcc_ai_5_reg.ai_blending_5_ratio_2	 =face_dcc_apply_f[5].ai_blending_2_s;
	dcc_d_dcc_ai_5_reg.ai_blending_5_ratio_3	 =face_dcc_apply_f[5].ai_blending_3_s;
*/
// chen 0524
	dcc_d_dcc_skin_tone_segment_c5_0_reg.c_blending_5_ratio_0=face_dcc_apply_f[5].uv_blending_0;
	dcc_d_dcc_skin_tone_segment_c5_0_reg.c_blending_5_ratio_1=face_dcc_apply_f[5].uv_blending_1;
	dcc_d_dcc_skin_tone_segment_c5_0_reg.c_blending_5_ratio_2=face_dcc_apply_f[5].uv_blending_2;
	dcc_d_dcc_skin_tone_segment_c5_0_reg.c_blending_5_ratio_3=face_dcc_apply_f[5].uv_blending_3;
	dcc_d_dcc_skin_tone_segment_c5_1_reg.c_blending_5_ratio_4=face_dcc_apply_f[5].uv_blending_4;
	dcc_d_dcc_skin_tone_segment_c5_1_reg.c_blending_5_ratio_5=face_dcc_apply_f[5].uv_blending_5;
	dcc_d_dcc_skin_tone_segment_c5_1_reg.c_blending_5_ratio_6=face_dcc_apply_f[5].uv_blending_6;
	dcc_d_dcc_skin_tone_segment_c5_1_reg.c_blending_5_ratio_7=face_dcc_apply_f[5].uv_blending_7;
//end chen 0524



//	dcc_d_dcc_ai_6_reg.ai_detect_value=255;

	// lesley 0910
		d_dcc_skin_tone_en_reg.y_blending_0_enhance_en = face_dcc_apply_f[0].enhance_en;
		d_dcc_skin_tone_en_reg.y_blending_1_enhance_en = face_dcc_apply_f[1].enhance_en;
		d_dcc_skin_tone_en_reg.y_blending_2_enhance_en = face_dcc_apply_f[2].enhance_en;
		d_dcc_skin_tone_en_reg.y_blending_3_enhance_en = face_dcc_apply_f[3].enhance_en;
		d_dcc_skin_tone_en_reg.y_blending_4_enhance_en = face_dcc_apply_f[4].enhance_en;
		d_dcc_skin_tone_en_reg.y_blending_5_enhance_en = face_dcc_apply_f[5].enhance_en;
	// end lesley 0910

	IoReg_Write32(COLOR_DCC_D_DCC_AI_0_reg, dcc_d_dcc_ai_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_1_reg, dcc_d_dcc_ai_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_2_reg, dcc_d_dcc_ai_2_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_3_reg, dcc_d_dcc_ai_3_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_4_reg, dcc_d_dcc_ai_4_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_5_reg, dcc_d_dcc_ai_5_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_6_reg, dcc_d_dcc_ai_6_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_7_reg, dcc_d_dcc_ai_7_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_8_reg, dcc_d_dcc_ai_8_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_9_reg, dcc_d_dcc_ai_9_reg.regValue);

	IoReg_Write32(COLOR_DCC_D_DCC_AI_10_reg, dcc_d_dcc_ai_10_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_11_reg, dcc_d_dcc_ai_11_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_12_reg, dcc_d_dcc_ai_12_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_13_reg, dcc_d_dcc_ai_13_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_14_reg, dcc_d_dcc_ai_14_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_15_reg, dcc_d_dcc_ai_15_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_16_reg, dcc_d_dcc_ai_16_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_17_reg, dcc_d_dcc_ai_17_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_18_reg, dcc_d_dcc_ai_18_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_19_reg, dcc_d_dcc_ai_19_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_20_reg, dcc_d_dcc_ai_20_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_21_reg, dcc_d_dcc_ai_21_reg.regValue);
	// end chen 0429

	// chen 0524
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg, dcc_d_dcc_skin_tone_segment_c0_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg, dcc_d_dcc_skin_tone_segment_c0_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg, dcc_d_dcc_skin_tone_segment_c1_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg, dcc_d_dcc_skin_tone_segment_c1_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg, dcc_d_dcc_skin_tone_segment_c2_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg, dcc_d_dcc_skin_tone_segment_c2_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg, dcc_d_dcc_skin_tone_segment_c3_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg, dcc_d_dcc_skin_tone_segment_c3_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg, dcc_d_dcc_skin_tone_segment_c4_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg, dcc_d_dcc_skin_tone_segment_c4_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg, dcc_d_dcc_skin_tone_segment_c5_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg, dcc_d_dcc_skin_tone_segment_c5_1_reg.regValue);

	//end chen 0524

	// lesley 0910
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_EN_reg ,  d_dcc_skin_tone_en_reg.regValue );
	// end lesley 0910

}

// chen 0527
void drvif_color_AI_obj_sharp_set(AI_sharp_apply face_sharp_apply_f[6])
{
	AI_sharp_apply* z_cds_AIInfo;
// yush 190815
	AI_sharp_apply* z_cds_AIInso;// original face info
	AI_sharp_apply a_cds_AIInfo[1];// modified face info
	int shp_face_adjust_en=0;
// end yush 190815
	int y_cb=0;
	int y_cr=0;
	int y_face_count=0;
	int y_face_max=0;
	int z_face_weight=0;
	color_sharp_shp_cds_region_enable_RBUS reg_color_sharp_shp_cds_region_enable_reg;
	reg_color_sharp_shp_cds_region_enable_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg);
	z_cds_AIInfo=face_sharp_apply_f;

// yush 190815
	shp_face_adjust_en = ai_ctrl.ai_shp_tune.shp_face_adjust_en;
	
	if(shp_face_adjust_en)
	{
		z_cds_AIInso=face_sharp_apply_f;
		memcpy(a_cds_AIInfo,z_cds_AIInso,sizeof(a_cds_AIInfo));
		z_cds_AIInfo=a_cds_AIInfo;
	}
// end yush 190815
	z_face_weight=z_cds_AIInfo->pv8;

	if(z_face_weight>0)
	{
		color_sharp_shp_cds_region0_0_RBUS reg_color_sharp_shp_cds_region0_0_reg;
		color_sharp_shp_cds_region0_1_RBUS reg_color_sharp_shp_cds_region0_1_reg;
		color_sharp_shp_cds_region0_2_RBUS reg_color_sharp_shp_cds_region0_2_reg;
		color_sharp_shp_cds_region0_3_RBUS reg_color_sharp_shp_cds_region0_3_reg;
		color_sharp_shp_cds_region0_4_RBUS reg_color_sharp_shp_cds_region0_4_reg;
		if(y_face_max<z_face_weight){y_face_max=z_face_weight;}
// yush 190815
		if(shp_face_adjust_en)
		{
			if(z_face_weight<128)
			{
				// workaround because 6 faces share one confidence in the end
				z_cds_AIInfo->h12=(z_cds_AIInfo->h12*z_face_weight+64)>>7;
				z_cds_AIInfo->w12=(z_cds_AIInfo->w12*z_face_weight+64)>>7;
			}
		}
// end yush 190815
		reg_color_sharp_shp_cds_region0_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_0_reg);
		reg_color_sharp_shp_cds_region0_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_1_reg);
		reg_color_sharp_shp_cds_region0_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_2_reg);
		reg_color_sharp_shp_cds_region0_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_3_reg);
		reg_color_sharp_shp_cds_region0_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_4_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_0=1;
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_smooth=c_cds_region_smooth;
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_start_i=max(0,z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_end_i=min(2159,z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region0_1_reg.cds_region_0_start_j=max(0,z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region0_1_reg.cds_region_0_end_j=min(3839,z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region0_2_reg.cds_region_0_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region0_2_reg.cds_region_0_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region0_2_reg.cds_region_0_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region0_2_reg.cds_region_0_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region0_3_reg.cds_region_0_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region0_3_reg.cds_region_0_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region0_3_reg.cds_region_0_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region0_3_reg.cds_region_0_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_jrdm=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_jrum=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_irdm=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_irum=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_jldm=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_jlum=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_ildm=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_ilum=0;
		y_cb=y_cb+(1+z_cds_AIInfo->cb_med12*2)*z_face_weight;
		y_cr=y_cr+(1+z_cds_AIInfo->cr_med12*2)*z_face_weight;
		y_face_count=y_face_count+z_face_weight;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_0_reg,reg_color_sharp_shp_cds_region0_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_1_reg,reg_color_sharp_shp_cds_region0_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_2_reg,reg_color_sharp_shp_cds_region0_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_3_reg,reg_color_sharp_shp_cds_region0_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_4_reg,reg_color_sharp_shp_cds_region0_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region0_0_RBUS reg_color_sharp_shp_cds_region0_0_reg;
		color_sharp_shp_cds_region0_1_RBUS reg_color_sharp_shp_cds_region0_1_reg;
		reg_color_sharp_shp_cds_region0_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_0_reg);
		reg_color_sharp_shp_cds_region0_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_0=0;
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_smooth=c_cds_region_smooth;
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_start_i=2159;
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_end_i=0;
		reg_color_sharp_shp_cds_region0_1_reg.cds_region_0_start_j=3839;
		reg_color_sharp_shp_cds_region0_1_reg.cds_region_0_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_0_reg,reg_color_sharp_shp_cds_region0_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_1_reg,reg_color_sharp_shp_cds_region0_1_reg.regValue);
	}
	z_cds_AIInfo=face_sharp_apply_f+1;
// yush 190815
	if(shp_face_adjust_en)
	{
		z_cds_AIInso=face_sharp_apply_f+1;
		memcpy(a_cds_AIInfo,z_cds_AIInso,sizeof(a_cds_AIInfo));
		z_cds_AIInfo=a_cds_AIInfo;
	}
// end yush 190815
		z_face_weight=z_cds_AIInfo->pv8;
	if(z_face_weight>0)
	{
		color_sharp_shp_cds_region1_0_RBUS reg_color_sharp_shp_cds_region1_0_reg;
		color_sharp_shp_cds_region1_1_RBUS reg_color_sharp_shp_cds_region1_1_reg;
		color_sharp_shp_cds_region1_2_RBUS reg_color_sharp_shp_cds_region1_2_reg;
		color_sharp_shp_cds_region1_3_RBUS reg_color_sharp_shp_cds_region1_3_reg;
		color_sharp_shp_cds_region1_4_RBUS reg_color_sharp_shp_cds_region1_4_reg;
		if(y_face_max<z_face_weight){y_face_max=z_face_weight;}
// yush 190815
		if(shp_face_adjust_en)
		{
			if(z_face_weight<128)
			{
				// workaround because 6 faces share one confidence in the end
				z_cds_AIInfo->h12=(z_cds_AIInfo->h12*z_face_weight+64)>>7;
				z_cds_AIInfo->w12=(z_cds_AIInfo->w12*z_face_weight+64)>>7;
			}
		}
// end yush 190815
		reg_color_sharp_shp_cds_region1_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_0_reg);
		reg_color_sharp_shp_cds_region1_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_1_reg);
		reg_color_sharp_shp_cds_region1_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_2_reg);
		reg_color_sharp_shp_cds_region1_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_3_reg);
		reg_color_sharp_shp_cds_region1_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_4_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_1=1;
		reg_color_sharp_shp_cds_region1_0_reg.cds_region_1_start_i=max(0,z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region1_0_reg.cds_region_1_end_i=min(2159,z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region1_1_reg.cds_region_1_start_j=max(0,z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region1_1_reg.cds_region_1_end_j=min(3839,z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region1_2_reg.cds_region_1_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region1_2_reg.cds_region_1_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region1_2_reg.cds_region_1_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region1_2_reg.cds_region_1_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region1_3_reg.cds_region_1_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region1_3_reg.cds_region_1_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region1_3_reg.cds_region_1_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region1_3_reg.cds_region_1_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_jrdm=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_jrum=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_irdm=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_irum=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_jldm=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_jlum=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_ildm=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_ilum=0;
		y_cb=y_cb+(1+z_cds_AIInfo->cb_med12*2)*z_face_weight;
		y_cr=y_cr+(1+z_cds_AIInfo->cr_med12*2)*z_face_weight;
		y_face_count=y_face_count+z_face_weight;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_0_reg,reg_color_sharp_shp_cds_region1_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_1_reg,reg_color_sharp_shp_cds_region1_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_2_reg,reg_color_sharp_shp_cds_region1_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_3_reg,reg_color_sharp_shp_cds_region1_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_4_reg,reg_color_sharp_shp_cds_region1_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region1_0_RBUS reg_color_sharp_shp_cds_region1_0_reg;
		color_sharp_shp_cds_region1_1_RBUS reg_color_sharp_shp_cds_region1_1_reg;
		reg_color_sharp_shp_cds_region1_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_0_reg);
		reg_color_sharp_shp_cds_region1_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_1=0;
		reg_color_sharp_shp_cds_region1_0_reg.cds_region_1_start_i=2159;
		reg_color_sharp_shp_cds_region1_0_reg.cds_region_1_end_i=0;
		reg_color_sharp_shp_cds_region1_1_reg.cds_region_1_start_j=3839;
		reg_color_sharp_shp_cds_region1_1_reg.cds_region_1_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_0_reg,reg_color_sharp_shp_cds_region1_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_1_reg,reg_color_sharp_shp_cds_region1_1_reg.regValue);
	}
		z_cds_AIInfo=face_sharp_apply_f+2;
// yush 190815
	if(shp_face_adjust_en)
	{
		z_cds_AIInso=face_sharp_apply_f+2;
		memcpy(a_cds_AIInfo,z_cds_AIInso,sizeof(a_cds_AIInfo));
		z_cds_AIInfo=a_cds_AIInfo;
	}
// end yush 190815
	z_face_weight=z_cds_AIInfo->pv8;
	if(z_face_weight>0)
	{
		color_sharp_shp_cds_region2_0_RBUS reg_color_sharp_shp_cds_region2_0_reg;
		color_sharp_shp_cds_region2_1_RBUS reg_color_sharp_shp_cds_region2_1_reg;
		color_sharp_shp_cds_region2_2_RBUS reg_color_sharp_shp_cds_region2_2_reg;
		color_sharp_shp_cds_region2_3_RBUS reg_color_sharp_shp_cds_region2_3_reg;
		color_sharp_shp_cds_region2_4_RBUS reg_color_sharp_shp_cds_region2_4_reg;
		if(y_face_max<z_face_weight){y_face_max=z_face_weight;}
// yush 190815
		if(shp_face_adjust_en)
		{
			if(z_face_weight<128)
			{
				// workaround because 6 faces share one confidence in the end
				z_cds_AIInfo->h12=(z_cds_AIInfo->h12*z_face_weight+64)>>7;
				z_cds_AIInfo->w12=(z_cds_AIInfo->w12*z_face_weight+64)>>7;
			}
		}
// end yush 190815
		reg_color_sharp_shp_cds_region2_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_0_reg);
		reg_color_sharp_shp_cds_region2_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_1_reg);
		reg_color_sharp_shp_cds_region2_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_2_reg);
		reg_color_sharp_shp_cds_region2_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_3_reg);
		reg_color_sharp_shp_cds_region2_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_4_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_2=1;
		reg_color_sharp_shp_cds_region2_0_reg.cds_region_2_start_i=max(0,z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region2_0_reg.cds_region_2_end_i=min(2159,z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region2_1_reg.cds_region_2_start_j=max(0,z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region2_1_reg.cds_region_2_end_j=min(3839,z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region2_2_reg.cds_region_2_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region2_2_reg.cds_region_2_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region2_2_reg.cds_region_2_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region2_2_reg.cds_region_2_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region2_3_reg.cds_region_2_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region2_3_reg.cds_region_2_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region2_3_reg.cds_region_2_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region2_3_reg.cds_region_2_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_jrdm=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_jrum=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_irdm=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_irum=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_jldm=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_jlum=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_ildm=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_ilum=0;
		y_cb=y_cb+(1+z_cds_AIInfo->cb_med12*2)*z_face_weight;
		y_cr=y_cr+(1+z_cds_AIInfo->cr_med12*2)*z_face_weight;
		y_face_count=y_face_count+z_face_weight;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_0_reg,reg_color_sharp_shp_cds_region2_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_1_reg,reg_color_sharp_shp_cds_region2_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_2_reg,reg_color_sharp_shp_cds_region2_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_3_reg,reg_color_sharp_shp_cds_region2_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_4_reg,reg_color_sharp_shp_cds_region2_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region2_0_RBUS reg_color_sharp_shp_cds_region2_0_reg;
		color_sharp_shp_cds_region2_1_RBUS reg_color_sharp_shp_cds_region2_1_reg;
		reg_color_sharp_shp_cds_region2_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_0_reg);
		reg_color_sharp_shp_cds_region2_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_2=0;
		reg_color_sharp_shp_cds_region2_0_reg.cds_region_2_start_i=2159;
		reg_color_sharp_shp_cds_region2_0_reg.cds_region_2_end_i=0;
		reg_color_sharp_shp_cds_region2_1_reg.cds_region_2_start_j=3839;
		reg_color_sharp_shp_cds_region2_1_reg.cds_region_2_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_0_reg,reg_color_sharp_shp_cds_region2_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_1_reg,reg_color_sharp_shp_cds_region2_1_reg.regValue);
	}
	z_cds_AIInfo=face_sharp_apply_f+3;
// yush 190815
	if(shp_face_adjust_en)
	{
		z_cds_AIInso=face_sharp_apply_f+3;
		memcpy(a_cds_AIInfo,z_cds_AIInso,sizeof(a_cds_AIInfo));
		z_cds_AIInfo=a_cds_AIInfo;
	}
// end yush 190815
	z_face_weight=z_cds_AIInfo->pv8;
	if(z_face_weight>0)
	{
		color_sharp_shp_cds_region3_0_RBUS reg_color_sharp_shp_cds_region3_0_reg;
		color_sharp_shp_cds_region3_1_RBUS reg_color_sharp_shp_cds_region3_1_reg;
		color_sharp_shp_cds_region3_2_RBUS reg_color_sharp_shp_cds_region3_2_reg;
		color_sharp_shp_cds_region3_3_RBUS reg_color_sharp_shp_cds_region3_3_reg;
		color_sharp_shp_cds_region3_4_RBUS reg_color_sharp_shp_cds_region3_4_reg;
		if(y_face_max<z_face_weight){y_face_max=z_face_weight;}
// yush 190815
		if(shp_face_adjust_en)
		{
			if(z_face_weight<128)
			{
				// workaround because 6 faces share one confidence in the end
				z_cds_AIInfo->h12=(z_cds_AIInfo->h12*z_face_weight+64)>>7;
				z_cds_AIInfo->w12=(z_cds_AIInfo->w12*z_face_weight+64)>>7;
			}
		}
// end yush 190815
		reg_color_sharp_shp_cds_region3_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_0_reg);
		reg_color_sharp_shp_cds_region3_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_1_reg);
		reg_color_sharp_shp_cds_region3_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_2_reg);
		reg_color_sharp_shp_cds_region3_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_3_reg);
		reg_color_sharp_shp_cds_region3_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_4_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_3=1;
		reg_color_sharp_shp_cds_region3_0_reg.cds_region_3_start_i=max(0,z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region3_0_reg.cds_region_3_end_i=min(2159,z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region3_1_reg.cds_region_3_start_j=max(0,z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region3_1_reg.cds_region_3_end_j=min(3839,z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region3_2_reg.cds_region_3_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region3_2_reg.cds_region_3_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region3_2_reg.cds_region_3_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region3_2_reg.cds_region_3_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region3_3_reg.cds_region_3_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region3_3_reg.cds_region_3_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region3_3_reg.cds_region_3_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region3_3_reg.cds_region_3_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_jrdm=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_jrum=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_irdm=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_irum=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_jldm=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_jlum=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_ildm=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_ilum=0;
		y_cb=y_cb+(1+z_cds_AIInfo->cb_med12*2)*z_face_weight;
		y_cr=y_cr+(1+z_cds_AIInfo->cr_med12*2)*z_face_weight;
		y_face_count=y_face_count+z_face_weight;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_0_reg,reg_color_sharp_shp_cds_region3_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_1_reg,reg_color_sharp_shp_cds_region3_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_2_reg,reg_color_sharp_shp_cds_region3_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_3_reg,reg_color_sharp_shp_cds_region3_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_4_reg,reg_color_sharp_shp_cds_region3_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region3_0_RBUS reg_color_sharp_shp_cds_region3_0_reg;
		color_sharp_shp_cds_region3_1_RBUS reg_color_sharp_shp_cds_region3_1_reg;
		reg_color_sharp_shp_cds_region3_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_0_reg);
		reg_color_sharp_shp_cds_region3_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_3=0;
		reg_color_sharp_shp_cds_region3_0_reg.cds_region_3_start_i=2159;
		reg_color_sharp_shp_cds_region3_0_reg.cds_region_3_end_i=0;
		reg_color_sharp_shp_cds_region3_1_reg.cds_region_3_start_j=3839;
		reg_color_sharp_shp_cds_region3_1_reg.cds_region_3_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_0_reg,reg_color_sharp_shp_cds_region3_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_1_reg,reg_color_sharp_shp_cds_region3_1_reg.regValue);
	}
	z_cds_AIInfo=face_sharp_apply_f+4;
// yush 190815
	if(shp_face_adjust_en)
	{
		z_cds_AIInso=face_sharp_apply_f+4;
		memcpy(a_cds_AIInfo,z_cds_AIInso,sizeof(a_cds_AIInfo));
		z_cds_AIInfo=a_cds_AIInfo;
	}
// end yush 190815
	z_face_weight=z_cds_AIInfo->pv8;
	if(z_face_weight>0)
	{
		color_sharp_shp_cds_region4_0_RBUS reg_color_sharp_shp_cds_region4_0_reg;
		color_sharp_shp_cds_region4_1_RBUS reg_color_sharp_shp_cds_region4_1_reg;
		color_sharp_shp_cds_region4_2_RBUS reg_color_sharp_shp_cds_region4_2_reg;
		color_sharp_shp_cds_region4_3_RBUS reg_color_sharp_shp_cds_region4_3_reg;
		color_sharp_shp_cds_region4_4_RBUS reg_color_sharp_shp_cds_region4_4_reg;
		if(y_face_max<z_face_weight){y_face_max=z_face_weight;}
// yush 190815
		if(shp_face_adjust_en)
		{
			if(z_face_weight<128)
			{
				// workaround because 6 faces share one confidence in the end
				z_cds_AIInfo->h12=(z_cds_AIInfo->h12*z_face_weight+64)>>7;
				z_cds_AIInfo->w12=(z_cds_AIInfo->w12*z_face_weight+64)>>7;
			}
		}
// end yush 190815
		reg_color_sharp_shp_cds_region4_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_0_reg);
		reg_color_sharp_shp_cds_region4_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_1_reg);
		reg_color_sharp_shp_cds_region4_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_2_reg);
		reg_color_sharp_shp_cds_region4_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_3_reg);
		reg_color_sharp_shp_cds_region4_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_4_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_4=1;
		reg_color_sharp_shp_cds_region4_0_reg.cds_region_4_start_i=max(0,z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region4_0_reg.cds_region_4_end_i=min(2159,z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region4_1_reg.cds_region_4_start_j=max(0,z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region4_1_reg.cds_region_4_end_j=min(3839,z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region4_2_reg.cds_region_4_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region4_2_reg.cds_region_4_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region4_2_reg.cds_region_4_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region4_2_reg.cds_region_4_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region4_3_reg.cds_region_4_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region4_3_reg.cds_region_4_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region4_3_reg.cds_region_4_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region4_3_reg.cds_region_4_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_jrdm=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_jrum=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_irdm=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_irum=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_jldm=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_jlum=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_ildm=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_ilum=0;
		y_cb=y_cb+(1+z_cds_AIInfo->cb_med12*2)*z_face_weight;
		y_cr=y_cr+(1+z_cds_AIInfo->cr_med12*2)*z_face_weight;
		y_face_count=y_face_count+z_face_weight;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_0_reg,reg_color_sharp_shp_cds_region4_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_1_reg,reg_color_sharp_shp_cds_region4_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_2_reg,reg_color_sharp_shp_cds_region4_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_3_reg,reg_color_sharp_shp_cds_region4_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_4_reg,reg_color_sharp_shp_cds_region4_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region4_0_RBUS reg_color_sharp_shp_cds_region4_0_reg;
		color_sharp_shp_cds_region4_1_RBUS reg_color_sharp_shp_cds_region4_1_reg;
		reg_color_sharp_shp_cds_region4_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_0_reg);
		reg_color_sharp_shp_cds_region4_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_4=0;
		reg_color_sharp_shp_cds_region4_0_reg.cds_region_4_start_i=2159;
		reg_color_sharp_shp_cds_region4_0_reg.cds_region_4_end_i=0;
		reg_color_sharp_shp_cds_region4_1_reg.cds_region_4_start_j=3839;
		reg_color_sharp_shp_cds_region4_1_reg.cds_region_4_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_0_reg,reg_color_sharp_shp_cds_region4_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_1_reg,reg_color_sharp_shp_cds_region4_1_reg.regValue);
	}
	z_cds_AIInfo=face_sharp_apply_f+5;
// yush 190815
	if(shp_face_adjust_en)
	{
		z_cds_AIInso=face_sharp_apply_f+5;
		memcpy(a_cds_AIInfo,z_cds_AIInso,sizeof(a_cds_AIInfo));
		z_cds_AIInfo=a_cds_AIInfo;
	}
// end yush 190815
	z_face_weight=z_cds_AIInfo->pv8;
	if(z_face_weight>0)
	{
		color_sharp_shp_cds_region5_0_RBUS reg_color_sharp_shp_cds_region5_0_reg;
		color_sharp_shp_cds_region5_1_RBUS reg_color_sharp_shp_cds_region5_1_reg;
		color_sharp_shp_cds_region5_2_RBUS reg_color_sharp_shp_cds_region5_2_reg;
		color_sharp_shp_cds_region5_3_RBUS reg_color_sharp_shp_cds_region5_3_reg;
		color_sharp_shp_cds_region5_4_RBUS reg_color_sharp_shp_cds_region5_4_reg;
		if(y_face_max<z_face_weight){y_face_max=z_face_weight;}
// yush 190815
		if(shp_face_adjust_en)
		{
			if(z_face_weight<128)
			{
				// workaround because 6 faces share one confidence in the end
				z_cds_AIInfo->h12=(z_cds_AIInfo->h12*z_face_weight+64)>>7;
				z_cds_AIInfo->w12=(z_cds_AIInfo->w12*z_face_weight+64)>>7;
			}
		}
// end yush 190815
		reg_color_sharp_shp_cds_region5_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_0_reg);
		reg_color_sharp_shp_cds_region5_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_1_reg);
		reg_color_sharp_shp_cds_region5_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_2_reg);
		reg_color_sharp_shp_cds_region5_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_3_reg);
		reg_color_sharp_shp_cds_region5_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_4_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_5=1;
		reg_color_sharp_shp_cds_region5_0_reg.cds_region_5_start_i=max(0,z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region5_0_reg.cds_region_5_end_i=min(2159,z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1));
		reg_color_sharp_shp_cds_region5_1_reg.cds_region_5_start_j=max(0,z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region5_1_reg.cds_region_5_end_j=min(3839,z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1));
		reg_color_sharp_shp_cds_region5_2_reg.cds_region_5_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region5_2_reg.cds_region_5_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region5_2_reg.cds_region_5_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region5_2_reg.cds_region_5_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region5_3_reg.cds_region_5_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region5_3_reg.cds_region_5_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region5_3_reg.cds_region_5_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region5_3_reg.cds_region_5_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_jrdm=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_jrum=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_irdm=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_irum=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_jldm=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_jlum=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_ildm=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_ilum=0;
		y_cb=y_cb+(1+z_cds_AIInfo->cb_med12*2)*z_face_weight;
		y_cr=y_cr+(1+z_cds_AIInfo->cr_med12*2)*z_face_weight;
		y_face_count=y_face_count+z_face_weight;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_0_reg,reg_color_sharp_shp_cds_region5_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_1_reg,reg_color_sharp_shp_cds_region5_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_2_reg,reg_color_sharp_shp_cds_region5_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_3_reg,reg_color_sharp_shp_cds_region5_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_4_reg,reg_color_sharp_shp_cds_region5_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region5_0_RBUS reg_color_sharp_shp_cds_region5_0_reg;
		color_sharp_shp_cds_region5_1_RBUS reg_color_sharp_shp_cds_region5_1_reg;
		reg_color_sharp_shp_cds_region5_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_0_reg);
		reg_color_sharp_shp_cds_region5_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_5=0;
		reg_color_sharp_shp_cds_region5_0_reg.cds_region_5_start_i=2159;
		reg_color_sharp_shp_cds_region5_0_reg.cds_region_5_end_i=0;
		reg_color_sharp_shp_cds_region5_1_reg.cds_region_5_start_j=3839;
		reg_color_sharp_shp_cds_region5_1_reg.cds_region_5_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_0_reg,reg_color_sharp_shp_cds_region5_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_1_reg,reg_color_sharp_shp_cds_region5_1_reg.regValue);
	}
	if(y_face_count>0)
	{
		color_sharp_dm_cds_cm0_u_bound_1_RBUS reg_color_sharp_dm_cds_cm0_u_bound_1_reg;
		color_sharp_shp_cds_predict_RBUS reg_color_sharp_shp_cds_predict_reg;
		reg_color_sharp_dm_cds_cm0_u_bound_1_reg.regValue=IoReg_Read32(COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_reg);
		reg_color_sharp_shp_cds_predict_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_PREDICT_reg);
		y_cb=y_cb*4/(y_face_count<<3);
		y_cr=y_cr*4/(y_face_count<<3);
		y_cb=y_cb/4;
		y_cr=y_cr/4;
		reg_color_sharp_dm_cds_cm0_u_bound_1_reg.cu_0=y_cb;
		reg_color_sharp_dm_cds_cm0_u_bound_1_reg.cv_0=y_cr;
		reg_color_sharp_shp_cds_predict_reg.cds_region_predict_2=y_face_max;
		reg_color_sharp_shp_cds_predict_reg.cds_region_predict_1=y_face_max;

		IoReg_Write32(COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_reg,reg_color_sharp_dm_cds_cm0_u_bound_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_PREDICT_reg,reg_color_sharp_shp_cds_predict_reg.regValue);
	}
	IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg,reg_color_sharp_shp_cds_region_enable_reg.regValue);
	{
		color_sharp_dm_nr_shp_ctrl_3_RBUS reg_color_sharp_dm_nr_shp_ctrl_3_reg;
		reg_color_sharp_dm_nr_shp_ctrl_3_reg.regValue=IoReg_Read32(COLOR_SHARP_DM_NR_SHP_CTRL_3_reg);
		reg_color_sharp_dm_nr_shp_ctrl_3_reg.db_load=1;
		IoReg_Write32(COLOR_SHARP_DM_NR_SHP_CTRL_3_reg,reg_color_sharp_dm_nr_shp_ctrl_3_reg.regValue);
	}
}
//end chen 0527

/*void drvif_color_AI_obj_cds_set(unsigned char enable)
{
	// for 2020 CES show 
	// force cds enable when face detected
	
	color_sharp_dm_cds_peaking_gain_bound_ctrl_RBUS color_sharp_dm_cds_peaking_gain_bound_ctrl_reg;
	
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg);

	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.cds_edg_enable = enable;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.cds_tex_enable = enable;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.cds_v_enable = enable;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.cds_v_edg_enable = enable;

	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg,color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue);
}*/

#if 0
void drvif_color_AI_obj_sharpness_set(void)
{
	AIInfo* todo_cds_AIInfo=(AIInfo*)0;
	AIInfo* z_cds_AIInfo;
	int y_cb=0;
	int y_cr=0;
	int y_face_count=0;
	color_sharp_shp_cds_region_enable_RBUS reg_color_sharp_shp_cds_region_enable_reg;
	reg_color_sharp_shp_cds_region_enable_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg);
	if(!todo_cds_AIInfo){return;}
	if(sizeof(todo_cds_AIInfo)>=sizeof(AIInfo))
	{
		color_sharp_shp_cds_region0_0_RBUS reg_color_sharp_shp_cds_region0_0_reg;
		color_sharp_shp_cds_region0_1_RBUS reg_color_sharp_shp_cds_region0_1_reg;
		color_sharp_shp_cds_region0_2_RBUS reg_color_sharp_shp_cds_region0_2_reg;
		color_sharp_shp_cds_region0_3_RBUS reg_color_sharp_shp_cds_region0_3_reg;
		color_sharp_shp_cds_region0_4_RBUS reg_color_sharp_shp_cds_region0_4_reg;
		reg_color_sharp_shp_cds_region0_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_0_reg);
		reg_color_sharp_shp_cds_region0_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_1_reg);
		reg_color_sharp_shp_cds_region0_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_2_reg);
		reg_color_sharp_shp_cds_region0_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_3_reg);
		reg_color_sharp_shp_cds_region0_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_4_reg);
		z_cds_AIInfo=todo_cds_AIInfo;
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_0=1;
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_smooth=c_cds_region_smooth;
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_start_i=z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_end_i=z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region0_1_reg.cds_region_0_start_j=z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region0_1_reg.cds_region_0_end_j=z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region0_2_reg.cds_region_0_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region0_2_reg.cds_region_0_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region0_2_reg.cds_region_0_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region0_2_reg.cds_region_0_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region0_3_reg.cds_region_0_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region0_3_reg.cds_region_0_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region0_3_reg.cds_region_0_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region0_3_reg.cds_region_0_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_jrdm=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_jrum=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_irdm=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_irum=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_jldm=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_jlum=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_ildm=0;
		reg_color_sharp_shp_cds_region0_4_reg.cds_region_0_ilum=0;
		y_cb=y_cb+1+z_cds_AIInfo->cb_med12*2;
		y_cr=y_cr+1+z_cds_AIInfo->cr_med12*2;
		y_face_count=y_face_count+1;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_0_reg,reg_color_sharp_shp_cds_region0_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_1_reg,reg_color_sharp_shp_cds_region0_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_2_reg,reg_color_sharp_shp_cds_region0_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_3_reg,reg_color_sharp_shp_cds_region0_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_4_reg,reg_color_sharp_shp_cds_region0_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region0_0_RBUS reg_color_sharp_shp_cds_region0_0_reg;
		color_sharp_shp_cds_region0_1_RBUS reg_color_sharp_shp_cds_region0_1_reg;
		reg_color_sharp_shp_cds_region0_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_0_reg);
		reg_color_sharp_shp_cds_region0_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION0_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_0=0;
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_smooth=c_cds_region_smooth;
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_start_i=2159;
		reg_color_sharp_shp_cds_region0_0_reg.cds_region_0_end_i=0;
		reg_color_sharp_shp_cds_region0_1_reg.cds_region_0_start_j=3839;
		reg_color_sharp_shp_cds_region0_1_reg.cds_region_0_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_0_reg,reg_color_sharp_shp_cds_region0_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION0_1_reg,reg_color_sharp_shp_cds_region0_1_reg.regValue);
	}
	if(sizeof(todo_cds_AIInfo)>=sizeof(AIInfo)*2)
	{
		color_sharp_shp_cds_region1_0_RBUS reg_color_sharp_shp_cds_region1_0_reg;
		color_sharp_shp_cds_region1_1_RBUS reg_color_sharp_shp_cds_region1_1_reg;
		color_sharp_shp_cds_region1_2_RBUS reg_color_sharp_shp_cds_region1_2_reg;
		color_sharp_shp_cds_region1_3_RBUS reg_color_sharp_shp_cds_region1_3_reg;
		color_sharp_shp_cds_region1_4_RBUS reg_color_sharp_shp_cds_region1_4_reg;
		reg_color_sharp_shp_cds_region1_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_0_reg);
		reg_color_sharp_shp_cds_region1_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_1_reg);
		reg_color_sharp_shp_cds_region1_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_2_reg);
		reg_color_sharp_shp_cds_region1_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_3_reg);
		reg_color_sharp_shp_cds_region1_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_4_reg);
		z_cds_AIInfo=todo_cds_AIInfo+1;
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_1=1;
		reg_color_sharp_shp_cds_region1_0_reg.cds_region_1_start_i=z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region1_0_reg.cds_region_1_end_i=z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region1_1_reg.cds_region_1_start_j=z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region1_1_reg.cds_region_1_end_j=z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region1_2_reg.cds_region_1_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region1_2_reg.cds_region_1_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region1_2_reg.cds_region_1_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region1_2_reg.cds_region_1_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region1_3_reg.cds_region_1_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region1_3_reg.cds_region_1_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region1_3_reg.cds_region_1_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region1_3_reg.cds_region_1_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_jrdm=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_jrum=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_irdm=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_irum=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_jldm=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_jlum=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_ildm=0;
		reg_color_sharp_shp_cds_region1_4_reg.cds_region_1_ilum=0;
		y_cb=y_cb+1+z_cds_AIInfo->cb_med12*2;
		y_cr=y_cr+1+z_cds_AIInfo->cr_med12*2;
		y_face_count=y_face_count+1;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_0_reg,reg_color_sharp_shp_cds_region1_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_1_reg,reg_color_sharp_shp_cds_region1_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_2_reg,reg_color_sharp_shp_cds_region1_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_3_reg,reg_color_sharp_shp_cds_region1_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_4_reg,reg_color_sharp_shp_cds_region1_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region1_0_RBUS reg_color_sharp_shp_cds_region1_0_reg;
		color_sharp_shp_cds_region1_1_RBUS reg_color_sharp_shp_cds_region1_1_reg;
		reg_color_sharp_shp_cds_region1_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_0_reg);
		reg_color_sharp_shp_cds_region1_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_1=0;
		reg_color_sharp_shp_cds_region1_0_reg.cds_region_1_start_i=2159;
		reg_color_sharp_shp_cds_region1_0_reg.cds_region_1_end_i=0;
		reg_color_sharp_shp_cds_region1_1_reg.cds_region_1_start_j=3839;
		reg_color_sharp_shp_cds_region1_1_reg.cds_region_1_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_0_reg,reg_color_sharp_shp_cds_region1_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_1_reg,reg_color_sharp_shp_cds_region1_1_reg.regValue);
	}
	if(sizeof(todo_cds_AIInfo)>=sizeof(AIInfo)*3)
	{
		color_sharp_shp_cds_region2_0_RBUS reg_color_sharp_shp_cds_region2_0_reg;
		color_sharp_shp_cds_region2_1_RBUS reg_color_sharp_shp_cds_region2_1_reg;
		color_sharp_shp_cds_region2_2_RBUS reg_color_sharp_shp_cds_region2_2_reg;
		color_sharp_shp_cds_region2_3_RBUS reg_color_sharp_shp_cds_region2_3_reg;
		color_sharp_shp_cds_region2_4_RBUS reg_color_sharp_shp_cds_region2_4_reg;
		reg_color_sharp_shp_cds_region2_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_0_reg);
		reg_color_sharp_shp_cds_region2_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_1_reg);
		reg_color_sharp_shp_cds_region2_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_2_reg);
		reg_color_sharp_shp_cds_region2_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_3_reg);
		reg_color_sharp_shp_cds_region2_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_4_reg);
		z_cds_AIInfo=todo_cds_AIInfo+2;
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_2=1;
		reg_color_sharp_shp_cds_region2_0_reg.cds_region_2_start_i=z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region2_0_reg.cds_region_2_end_i=z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region2_1_reg.cds_region_2_start_j=z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region2_1_reg.cds_region_2_end_j=z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region2_2_reg.cds_region_2_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region2_2_reg.cds_region_2_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region2_2_reg.cds_region_2_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region2_2_reg.cds_region_2_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region2_3_reg.cds_region_2_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region2_3_reg.cds_region_2_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region2_3_reg.cds_region_2_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region2_3_reg.cds_region_2_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_jrdm=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_jrum=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_irdm=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_irum=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_jldm=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_jlum=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_ildm=0;
		reg_color_sharp_shp_cds_region2_4_reg.cds_region_2_ilum=0;
		y_cb=y_cb+1+z_cds_AIInfo->cb_med12*2;
		y_cr=y_cr+1+z_cds_AIInfo->cr_med12*2;
		y_face_count=y_face_count+1;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_0_reg,reg_color_sharp_shp_cds_region2_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_1_reg,reg_color_sharp_shp_cds_region2_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_2_reg,reg_color_sharp_shp_cds_region2_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_3_reg,reg_color_sharp_shp_cds_region2_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_4_reg,reg_color_sharp_shp_cds_region2_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region2_0_RBUS reg_color_sharp_shp_cds_region2_0_reg;
		color_sharp_shp_cds_region2_1_RBUS reg_color_sharp_shp_cds_region2_1_reg;
		reg_color_sharp_shp_cds_region2_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_0_reg);
		reg_color_sharp_shp_cds_region2_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_2=0;
		reg_color_sharp_shp_cds_region2_0_reg.cds_region_2_start_i=2159;
		reg_color_sharp_shp_cds_region2_0_reg.cds_region_2_end_i=0;
		reg_color_sharp_shp_cds_region2_1_reg.cds_region_2_start_j=3839;
		reg_color_sharp_shp_cds_region2_1_reg.cds_region_2_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_0_reg,reg_color_sharp_shp_cds_region2_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_1_reg,reg_color_sharp_shp_cds_region2_1_reg.regValue);
	}
	if(sizeof(todo_cds_AIInfo)>=sizeof(AIInfo)*4)
	{
		color_sharp_shp_cds_region3_0_RBUS reg_color_sharp_shp_cds_region3_0_reg;
		color_sharp_shp_cds_region3_1_RBUS reg_color_sharp_shp_cds_region3_1_reg;
		color_sharp_shp_cds_region3_2_RBUS reg_color_sharp_shp_cds_region3_2_reg;
		color_sharp_shp_cds_region3_3_RBUS reg_color_sharp_shp_cds_region3_3_reg;
		color_sharp_shp_cds_region3_4_RBUS reg_color_sharp_shp_cds_region3_4_reg;
		reg_color_sharp_shp_cds_region3_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_0_reg);
		reg_color_sharp_shp_cds_region3_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_1_reg);
		reg_color_sharp_shp_cds_region3_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_2_reg);
		reg_color_sharp_shp_cds_region3_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_3_reg);
		reg_color_sharp_shp_cds_region3_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_4_reg);
		z_cds_AIInfo=todo_cds_AIInfo+3;
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_3=1;
		reg_color_sharp_shp_cds_region3_0_reg.cds_region_3_start_i=z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region3_0_reg.cds_region_3_end_i=z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region3_1_reg.cds_region_3_start_j=z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region3_1_reg.cds_region_3_end_j=z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region3_2_reg.cds_region_3_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region3_2_reg.cds_region_3_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region3_2_reg.cds_region_3_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region3_2_reg.cds_region_3_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region3_3_reg.cds_region_3_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region3_3_reg.cds_region_3_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region3_3_reg.cds_region_3_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region3_3_reg.cds_region_3_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_jrdm=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_jrum=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_irdm=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_irum=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_jldm=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_jlum=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_ildm=0;
		reg_color_sharp_shp_cds_region3_4_reg.cds_region_3_ilum=0;
		y_cb=y_cb+1+z_cds_AIInfo->cb_med12*2;
		y_cr=y_cr+1+z_cds_AIInfo->cr_med12*2;
		y_face_count=y_face_count+1;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_0_reg,reg_color_sharp_shp_cds_region3_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_1_reg,reg_color_sharp_shp_cds_region3_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_2_reg,reg_color_sharp_shp_cds_region3_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_3_reg,reg_color_sharp_shp_cds_region3_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_4_reg,reg_color_sharp_shp_cds_region3_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region3_0_RBUS reg_color_sharp_shp_cds_region3_0_reg;
		color_sharp_shp_cds_region3_1_RBUS reg_color_sharp_shp_cds_region3_1_reg;
		reg_color_sharp_shp_cds_region3_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_0_reg);
		reg_color_sharp_shp_cds_region3_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION3_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_3=0;
		reg_color_sharp_shp_cds_region3_0_reg.cds_region_3_start_i=2159;
		reg_color_sharp_shp_cds_region3_0_reg.cds_region_3_end_i=0;
		reg_color_sharp_shp_cds_region3_1_reg.cds_region_3_start_j=3839;
		reg_color_sharp_shp_cds_region3_1_reg.cds_region_3_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_0_reg,reg_color_sharp_shp_cds_region3_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION3_1_reg,reg_color_sharp_shp_cds_region3_1_reg.regValue);
	}
	if(sizeof(todo_cds_AIInfo)>=sizeof(AIInfo)*5)
	{
		color_sharp_shp_cds_region4_0_RBUS reg_color_sharp_shp_cds_region4_0_reg;
		color_sharp_shp_cds_region4_1_RBUS reg_color_sharp_shp_cds_region4_1_reg;
		color_sharp_shp_cds_region4_2_RBUS reg_color_sharp_shp_cds_region4_2_reg;
		color_sharp_shp_cds_region4_3_RBUS reg_color_sharp_shp_cds_region4_3_reg;
		color_sharp_shp_cds_region4_4_RBUS reg_color_sharp_shp_cds_region4_4_reg;
		reg_color_sharp_shp_cds_region4_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_0_reg);
		reg_color_sharp_shp_cds_region4_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_1_reg);
		reg_color_sharp_shp_cds_region4_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_2_reg);
		reg_color_sharp_shp_cds_region4_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_3_reg);
		reg_color_sharp_shp_cds_region4_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_4_reg);
		z_cds_AIInfo=todo_cds_AIInfo+4;
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_4=1;
		reg_color_sharp_shp_cds_region4_0_reg.cds_region_4_start_i=z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region4_0_reg.cds_region_4_end_i=z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region4_1_reg.cds_region_4_start_j=z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region4_1_reg.cds_region_4_end_j=z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region4_2_reg.cds_region_4_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region4_2_reg.cds_region_4_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region4_2_reg.cds_region_4_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region4_2_reg.cds_region_4_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region4_3_reg.cds_region_4_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region4_3_reg.cds_region_4_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region4_3_reg.cds_region_4_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region4_3_reg.cds_region_4_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_jrdm=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_jrum=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_irdm=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_irum=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_jldm=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_jlum=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_ildm=0;
		reg_color_sharp_shp_cds_region4_4_reg.cds_region_4_ilum=0;
		y_cb=y_cb+1+z_cds_AIInfo->cb_med12*2;
		y_cr=y_cr+1+z_cds_AIInfo->cr_med12*2;
		y_face_count=y_face_count+1;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_0_reg,reg_color_sharp_shp_cds_region4_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_1_reg,reg_color_sharp_shp_cds_region4_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_2_reg,reg_color_sharp_shp_cds_region4_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_3_reg,reg_color_sharp_shp_cds_region4_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_4_reg,reg_color_sharp_shp_cds_region4_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region4_0_RBUS reg_color_sharp_shp_cds_region4_0_reg;
		color_sharp_shp_cds_region4_1_RBUS reg_color_sharp_shp_cds_region4_1_reg;
		reg_color_sharp_shp_cds_region4_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_0_reg);
		reg_color_sharp_shp_cds_region4_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION4_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_4=0;
		reg_color_sharp_shp_cds_region4_0_reg.cds_region_4_start_i=2159;
		reg_color_sharp_shp_cds_region4_0_reg.cds_region_4_end_i=0;
		reg_color_sharp_shp_cds_region4_1_reg.cds_region_4_start_j=3839;
		reg_color_sharp_shp_cds_region4_1_reg.cds_region_4_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_0_reg,reg_color_sharp_shp_cds_region4_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION4_1_reg,reg_color_sharp_shp_cds_region4_1_reg.regValue);
	}
	if(sizeof(todo_cds_AIInfo)>=sizeof(AIInfo)*6)
	{
		color_sharp_shp_cds_region5_0_RBUS reg_color_sharp_shp_cds_region5_0_reg;
		color_sharp_shp_cds_region5_1_RBUS reg_color_sharp_shp_cds_region5_1_reg;
		color_sharp_shp_cds_region5_2_RBUS reg_color_sharp_shp_cds_region5_2_reg;
		color_sharp_shp_cds_region5_3_RBUS reg_color_sharp_shp_cds_region5_3_reg;
		color_sharp_shp_cds_region5_4_RBUS reg_color_sharp_shp_cds_region5_4_reg;
		reg_color_sharp_shp_cds_region5_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_0_reg);
		reg_color_sharp_shp_cds_region5_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_1_reg);
		reg_color_sharp_shp_cds_region5_2_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_2_reg);
		reg_color_sharp_shp_cds_region5_3_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_3_reg);
		reg_color_sharp_shp_cds_region5_4_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_4_reg);
		z_cds_AIInfo=todo_cds_AIInfo+5;
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_5=1;
		reg_color_sharp_shp_cds_region5_0_reg.cds_region_5_start_i=z_cds_AIInfo->cy12-(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region5_0_reg.cds_region_5_end_i=z_cds_AIInfo->cy12+(z_cds_AIInfo->h12>>1);
		reg_color_sharp_shp_cds_region5_1_reg.cds_region_5_start_j=z_cds_AIInfo->cx12-(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region5_1_reg.cds_region_5_end_j=z_cds_AIInfo->cx12+(z_cds_AIInfo->w12>>1);
		reg_color_sharp_shp_cds_region5_2_reg.cds_region_5_ilu=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region5_2_reg.cds_region_5_jlu=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region5_2_reg.cds_region_5_ild=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region5_2_reg.cds_region_5_jld=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region5_3_reg.cds_region_5_iru=z_cds_AIInfo->h12>>3;
		reg_color_sharp_shp_cds_region5_3_reg.cds_region_5_jru=z_cds_AIInfo->w12>>3;
		reg_color_sharp_shp_cds_region5_3_reg.cds_region_5_ird=z_cds_AIInfo->h12>>2;
		reg_color_sharp_shp_cds_region5_3_reg.cds_region_5_jrd=z_cds_AIInfo->w12>>2;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_jrdm=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_jrum=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_irdm=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_irum=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_jldm=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_jlum=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_ildm=0;
		reg_color_sharp_shp_cds_region5_4_reg.cds_region_5_ilum=0;
		y_cb=y_cb+1+z_cds_AIInfo->cb_med12*2;
		y_cr=y_cr+1+z_cds_AIInfo->cr_med12*2;
		y_face_count=y_face_count+1;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_0_reg,reg_color_sharp_shp_cds_region5_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_1_reg,reg_color_sharp_shp_cds_region5_1_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_2_reg,reg_color_sharp_shp_cds_region5_2_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_3_reg,reg_color_sharp_shp_cds_region5_3_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_4_reg,reg_color_sharp_shp_cds_region5_4_reg.regValue);
	}
	else
	{
		color_sharp_shp_cds_region5_0_RBUS reg_color_sharp_shp_cds_region5_0_reg;
		color_sharp_shp_cds_region5_1_RBUS reg_color_sharp_shp_cds_region5_1_reg;
		reg_color_sharp_shp_cds_region5_0_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_0_reg);
		reg_color_sharp_shp_cds_region5_1_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION5_1_reg);
		reg_color_sharp_shp_cds_region_enable_reg.cds_region_0_enable_5=0;
		reg_color_sharp_shp_cds_region5_0_reg.cds_region_5_start_i=2159;
		reg_color_sharp_shp_cds_region5_0_reg.cds_region_5_end_i=0;
		reg_color_sharp_shp_cds_region5_1_reg.cds_region_5_start_j=3839;
		reg_color_sharp_shp_cds_region5_1_reg.cds_region_5_end_j=0;
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_0_reg,reg_color_sharp_shp_cds_region5_0_reg.regValue);
		IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION5_1_reg,reg_color_sharp_shp_cds_region5_1_reg.regValue);
	}
	if(y_face_count>0)
	{
		color_sharp_dm_cds_cm0_u_bound_1_RBUS reg_color_sharp_dm_cds_cm0_u_bound_1_reg;
		reg_color_sharp_dm_cds_cm0_u_bound_1_reg.regValue=IoReg_Read32(COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_reg);
		y_cb=y_cb*4/(y_face_count<<3);
		y_cr=y_cr*4/(y_face_count<<3);
		y_cb=y_cb/4;
		y_cr=y_cr/4;
		reg_color_sharp_dm_cds_cm0_u_bound_1_reg.cu_0=y_cb;
		reg_color_sharp_dm_cds_cm0_u_bound_1_reg.cv_0=y_cr;
		IoReg_Write32(COLOR_SHARP_DM_CDS_CM0_U_BOUND_1_reg,reg_color_sharp_dm_cds_cm0_u_bound_1_reg.regValue);
	}
	IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg,reg_color_sharp_shp_cds_region_enable_reg.regValue);
}
#endif
// chen 0429
// vip table 1260 set, for face detect
void scaler_AI_obj_Ctrl_Set(DRV_AI_Ctrl_table *ptr) // read from sharing memory
{	
    if (ptr==NULL)
		return;

//(1) global setting ///////////////
    ai_ctrl.ai_global.frame_drop_num = ptr->ai_global.frame_drop_num;
    ai_ctrl.ai_global.frame_delay = ptr->ai_global.frame_delay;

	ai_ctrl.ai_global.AI_icm_en = ptr->ai_global.AI_icm_en;
	ai_ctrl.ai_global.AI_dcc_en= ptr->ai_global.AI_dcc_en;
	ai_ctrl.ai_global.AI_sharp_en= ptr->ai_global.AI_sharp_en;

	ai_ctrl.ai_global.sc_count_th= ptr->ai_global.sc_count_th;
	ai_ctrl.ai_global.ratio_max_th= ptr->ai_global.ratio_max_th;
	ai_ctrl.ai_global.range_gain= ptr->ai_global.range_gain;

	ai_ctrl.ai_global.iir_weight= ptr->ai_global.iir_weight;
	ai_ctrl.ai_global.iir_weight2= ptr->ai_global.iir_weight2;
	ai_ctrl.ai_global.iir_weight3= ptr->ai_global.iir_weight3;

	ai_ctrl.ai_global.icm_ai_blend_inside_ratio= ptr->ai_global.icm_ai_blend_inside_ratio;
	ai_ctrl.ai_global.icm_ai_blend_ratio0= ptr->ai_global.icm_ai_blend_ratio0;
	ai_ctrl.ai_global.icm_ai_blend_ratio1= ptr->ai_global.icm_ai_blend_ratio1;
	ai_ctrl.ai_global.icm_ai_blend_ratio2= ptr->ai_global.icm_ai_blend_ratio2;
	ai_ctrl.ai_global.icm_ai_blend_ratio3= ptr->ai_global.icm_ai_blend_ratio3;

	ai_ctrl.ai_global.dcc_ai_blend_inside_ratio= ptr->ai_global.dcc_ai_blend_inside_ratio;
	ai_ctrl.ai_global.dcc_ai_blend_ratio0= ptr->ai_global.dcc_ai_blend_ratio0;
	ai_ctrl.ai_global.dcc_ai_blend_ratio1= ptr->ai_global.dcc_ai_blend_ratio1;
	ai_ctrl.ai_global.dcc_ai_blend_ratio2= ptr->ai_global.dcc_ai_blend_ratio2;
	ai_ctrl.ai_global.dcc_ai_blend_ratio3= ptr->ai_global.dcc_ai_blend_ratio3;

	// chen 0524
	ai_ctrl.ai_global.icm_uv_blend_ratio0=ptr->ai_global.icm_uv_blend_ratio0;
	ai_ctrl.ai_global.icm_uv_blend_ratio1=ptr->ai_global.icm_uv_blend_ratio1;
	ai_ctrl.ai_global.icm_uv_blend_ratio2=ptr->ai_global.icm_uv_blend_ratio2;
	ai_ctrl.ai_global.icm_uv_blend_ratio3=ptr->ai_global.icm_uv_blend_ratio3;
	ai_ctrl.ai_global.icm_uv_blend_ratio4=ptr->ai_global.icm_uv_blend_ratio4;
	ai_ctrl.ai_global.icm_uv_blend_ratio5=ptr->ai_global.icm_uv_blend_ratio5;
	ai_ctrl.ai_global.icm_uv_blend_ratio6=ptr->ai_global.icm_uv_blend_ratio6;
	ai_ctrl.ai_global.icm_uv_blend_ratio7=ptr->ai_global.icm_uv_blend_ratio7;

	//end chen 0524

	// lesley 0718
	ai_ctrl.ai_global.demo_draw_en=ptr->ai_global.demo_draw_en;
	//end lesley 0718


	//(2) icm_blending_setting ///////////

	ai_ctrl.ai_icm_blend.d_change_speed_default = ptr->ai_icm_blend.d_change_speed_default;
	ai_ctrl.ai_icm_blend.change_speed_default = ptr->ai_icm_blend.change_speed_default;

	// disappear //////
	ai_ctrl.ai_icm_blend.val_diff_loth = ptr->ai_icm_blend.val_diff_loth;
	ai_ctrl.ai_icm_blend.d_change_speed_val_loth = ptr->ai_icm_blend.d_change_speed_val_loth;
	ai_ctrl.ai_icm_blend.d_change_speed_val_hith = ptr->ai_icm_blend.d_change_speed_val_hith;
	ai_ctrl.ai_icm_blend.d_change_speed_val_slope = ptr->ai_icm_blend.d_change_speed_val_slope;
	ai_ctrl.ai_icm_blend.IOU_diff_loth = ptr->ai_icm_blend.IOU_diff_loth;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_loth = ptr->ai_icm_blend.d_change_speed_IOU_loth;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_hith = ptr->ai_icm_blend.d_change_speed_IOU_hith;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_slope = ptr->ai_icm_blend.d_change_speed_IOU_slope;
	ai_ctrl.ai_icm_blend.IOU_diff_loth2 = ptr->ai_icm_blend.IOU_diff_loth2;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_loth2 = ptr->ai_icm_blend.d_change_speed_IOU_loth2;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_hith2 = ptr->ai_icm_blend.d_change_speed_IOU_hith2;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_slope2 = ptr->ai_icm_blend.d_change_speed_IOU_slope2;
	ai_ctrl.ai_icm_blend.size_diff_loth = ptr->ai_icm_blend.size_diff_loth;
	ai_ctrl.ai_icm_blend.d_change_speed_size_loth = ptr->ai_icm_blend.d_change_speed_size_loth;
	ai_ctrl.ai_icm_blend.d_change_speed_size_hith = ptr->ai_icm_blend.d_change_speed_size_hith;
	ai_ctrl.ai_icm_blend.d_change_speed_size_slope = ptr->ai_icm_blend.d_change_speed_size_slope;



	// appear //////

	ai_ctrl.ai_icm_blend.val_diff_loth_a = ptr->ai_icm_blend.val_diff_loth_a;
	ai_ctrl.ai_icm_blend.d_change_speed_val_loth_a = ptr->ai_icm_blend.d_change_speed_val_loth_a;
	ai_ctrl.ai_icm_blend.d_change_speed_val_hith_a = ptr->ai_icm_blend.d_change_speed_val_hith_a;
	ai_ctrl.ai_icm_blend.d_change_speed_val_slope_a = ptr->ai_icm_blend.d_change_speed_val_slope_a;
	ai_ctrl.ai_icm_blend.IOU_diff_loth_a = ptr->ai_icm_blend.IOU_diff_loth_a;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_loth_a = ptr->ai_icm_blend.d_change_speed_IOU_loth_a;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_hith_a = ptr->ai_icm_blend.d_change_speed_IOU_hith_a;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_slope_a = ptr->ai_icm_blend.d_change_speed_IOU_slope_a;
	ai_ctrl.ai_icm_blend.IOU_diff_loth_a2 = ptr->ai_icm_blend.IOU_diff_loth_a2;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_loth_a2 = ptr->ai_icm_blend.d_change_speed_IOU_loth_a2;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_hith_a2 = ptr->ai_icm_blend.d_change_speed_IOU_hith_a2;
	ai_ctrl.ai_icm_blend.d_change_speed_IOU_slope_a2 = ptr->ai_icm_blend.d_change_speed_IOU_slope_a2;
	ai_ctrl.ai_icm_blend.size_diff_loth_a = ptr->ai_icm_blend.size_diff_loth_a;
	ai_ctrl.ai_icm_blend.d_change_speed_size_loth_a = ptr->ai_icm_blend.d_change_speed_size_loth_a;
	ai_ctrl.ai_icm_blend.d_change_speed_size_hith_a = ptr->ai_icm_blend.d_change_speed_size_hith_a;
	ai_ctrl.ai_icm_blend.d_change_speed_size_slope_a = ptr->ai_icm_blend.d_change_speed_size_slope_a;
	ai_ctrl.ai_icm_blend.blend_hith = ptr->ai_icm_blend.blend_hith;


	//(3) dcc_blending_setting ///////////

	ai_ctrl.ai_dcc_blend.d_change_speed_default = ptr->ai_dcc_blend.d_change_speed_default;
	ai_ctrl.ai_dcc_blend.change_speed_default = ptr->ai_dcc_blend.change_speed_default;

	// disappear //////
	ai_ctrl.ai_dcc_blend.val_diff_loth = ptr->ai_dcc_blend.val_diff_loth;
	ai_ctrl.ai_dcc_blend.d_change_speed_val_loth = ptr->ai_dcc_blend.d_change_speed_val_loth;
	ai_ctrl.ai_dcc_blend.d_change_speed_val_hith = ptr->ai_dcc_blend.d_change_speed_val_hith;
	ai_ctrl.ai_dcc_blend.d_change_speed_val_slope = ptr->ai_dcc_blend.d_change_speed_val_slope;
	ai_ctrl.ai_dcc_blend.IOU_diff_loth = ptr->ai_dcc_blend.IOU_diff_loth;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_loth = ptr->ai_dcc_blend.d_change_speed_IOU_loth;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_hith = ptr->ai_dcc_blend.d_change_speed_IOU_hith;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_slope = ptr->ai_dcc_blend.d_change_speed_IOU_slope;
	ai_ctrl.ai_dcc_blend.IOU_diff_loth2 = ptr->ai_dcc_blend.IOU_diff_loth2;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_loth2 = ptr->ai_dcc_blend.d_change_speed_IOU_loth2;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_hith2 = ptr->ai_dcc_blend.d_change_speed_IOU_hith2;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_slope2 = ptr->ai_dcc_blend.d_change_speed_IOU_slope2;
	ai_ctrl.ai_dcc_blend.size_diff_loth = ptr->ai_dcc_blend.size_diff_loth;
	ai_ctrl.ai_dcc_blend.d_change_speed_size_loth = ptr->ai_dcc_blend.d_change_speed_size_loth;
	ai_ctrl.ai_dcc_blend.d_change_speed_size_hith = ptr->ai_dcc_blend.d_change_speed_size_hith;
	ai_ctrl.ai_dcc_blend.d_change_speed_size_slope = ptr->ai_dcc_blend.d_change_speed_size_slope;



	// appear //////
	ai_ctrl.ai_dcc_blend.val_diff_loth_a = ptr->ai_dcc_blend.val_diff_loth_a;
	ai_ctrl.ai_dcc_blend.d_change_speed_val_loth_a = ptr->ai_dcc_blend.d_change_speed_val_loth_a;
	ai_ctrl.ai_dcc_blend.d_change_speed_val_hith_a = ptr->ai_dcc_blend.d_change_speed_val_hith_a;
	ai_ctrl.ai_dcc_blend.d_change_speed_val_slope_a = ptr->ai_dcc_blend.d_change_speed_val_slope_a;
	ai_ctrl.ai_dcc_blend.IOU_diff_loth_a = ptr->ai_dcc_blend.IOU_diff_loth_a;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_loth_a = ptr->ai_dcc_blend.d_change_speed_IOU_loth_a;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_hith_a = ptr->ai_dcc_blend.d_change_speed_IOU_hith_a;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_slope_a = ptr->ai_dcc_blend.d_change_speed_IOU_slope_a;
	ai_ctrl.ai_dcc_blend.IOU_diff_loth_a2 = ptr->ai_dcc_blend.IOU_diff_loth_a2;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_loth_a2 = ptr->ai_dcc_blend.d_change_speed_IOU_loth_a2;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_hith_a2 = ptr->ai_dcc_blend.d_change_speed_IOU_hith_a2;
	ai_ctrl.ai_dcc_blend.d_change_speed_IOU_slope_a2 = ptr->ai_dcc_blend.d_change_speed_IOU_slope_a2;
	ai_ctrl.ai_dcc_blend.size_diff_loth_a = ptr->ai_dcc_blend.size_diff_loth_a;
	ai_ctrl.ai_dcc_blend.d_change_speed_size_loth_a = ptr->ai_dcc_blend.d_change_speed_size_loth_a;
	ai_ctrl.ai_dcc_blend.d_change_speed_size_hith_a = ptr->ai_dcc_blend.d_change_speed_size_hith_a;
	ai_ctrl.ai_dcc_blend.d_change_speed_size_slope_a = ptr->ai_dcc_blend.d_change_speed_size_slope_a;
	ai_ctrl.ai_dcc_blend.blend_hith = ptr->ai_dcc_blend.blend_hith;

	//(4) sharpness_blending_setting ///////////

	ai_ctrl.ai_sharp_blend.d_change_speed_default = ptr->ai_sharp_blend.d_change_speed_default;
	ai_ctrl.ai_sharp_blend.change_speed_default = ptr->ai_sharp_blend.change_speed_default;

	// disappear //////
	ai_ctrl.ai_sharp_blend.val_diff_loth = ptr->ai_sharp_blend.val_diff_loth;
	ai_ctrl.ai_sharp_blend.d_change_speed_val_loth = ptr->ai_sharp_blend.d_change_speed_val_loth;
	ai_ctrl.ai_sharp_blend.d_change_speed_val_hith = ptr->ai_sharp_blend.d_change_speed_val_hith;
	ai_ctrl.ai_sharp_blend.d_change_speed_val_slope = ptr->ai_sharp_blend.d_change_speed_val_slope;
	ai_ctrl.ai_sharp_blend.IOU_diff_loth = ptr->ai_sharp_blend.IOU_diff_loth;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_loth = ptr->ai_sharp_blend.d_change_speed_IOU_loth;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_hith = ptr->ai_sharp_blend.d_change_speed_IOU_hith;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_slope = ptr->ai_sharp_blend.d_change_speed_IOU_slope;
	ai_ctrl.ai_sharp_blend.IOU_diff_loth2 = ptr->ai_sharp_blend.IOU_diff_loth2;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_loth2 = ptr->ai_sharp_blend.d_change_speed_IOU_loth2;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_hith2 = ptr->ai_sharp_blend.d_change_speed_IOU_hith2;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_slope2 = ptr->ai_sharp_blend.d_change_speed_IOU_slope2;
	ai_ctrl.ai_sharp_blend.size_diff_loth = ptr->ai_sharp_blend.size_diff_loth;
	ai_ctrl.ai_sharp_blend.d_change_speed_size_loth = ptr->ai_sharp_blend.d_change_speed_size_loth;
	ai_ctrl.ai_sharp_blend.d_change_speed_size_hith = ptr->ai_sharp_blend.d_change_speed_size_hith;
	ai_ctrl.ai_sharp_blend.d_change_speed_size_slope = ptr->ai_sharp_blend.d_change_speed_size_slope;

	// appear //////
	ai_ctrl.ai_sharp_blend.val_diff_loth_a = ptr->ai_sharp_blend.val_diff_loth_a;
	ai_ctrl.ai_sharp_blend.d_change_speed_val_loth_a = ptr->ai_sharp_blend.d_change_speed_val_loth_a;
	ai_ctrl.ai_sharp_blend.d_change_speed_val_hith_a = ptr->ai_sharp_blend.d_change_speed_val_hith_a;
	ai_ctrl.ai_sharp_blend.d_change_speed_val_slope_a = ptr->ai_sharp_blend.d_change_speed_val_slope_a;
	ai_ctrl.ai_sharp_blend.IOU_diff_loth_a = ptr->ai_sharp_blend.IOU_diff_loth_a;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_loth_a = ptr->ai_sharp_blend.d_change_speed_IOU_loth_a;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_hith_a = ptr->ai_sharp_blend.d_change_speed_IOU_hith_a;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_slope_a = ptr->ai_sharp_blend.d_change_speed_IOU_slope_a;
	ai_ctrl.ai_sharp_blend.IOU_diff_loth_a2 = ptr->ai_sharp_blend.IOU_diff_loth_a2;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_loth_a2 = ptr->ai_sharp_blend.d_change_speed_IOU_loth_a2;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_hith_a2 = ptr->ai_sharp_blend.d_change_speed_IOU_hith_a2;
	ai_ctrl.ai_sharp_blend.d_change_speed_IOU_slope_a2 = ptr->ai_sharp_blend.d_change_speed_IOU_slope_a2;
	ai_ctrl.ai_sharp_blend.size_diff_loth_a = ptr->ai_sharp_blend.size_diff_loth_a;
	ai_ctrl.ai_sharp_blend.d_change_speed_size_loth_a = ptr->ai_sharp_blend.d_change_speed_size_loth_a;
	ai_ctrl.ai_sharp_blend.d_change_speed_size_hith_a = ptr->ai_sharp_blend.d_change_speed_size_hith_a;
	ai_ctrl.ai_sharp_blend.d_change_speed_size_slope_a = ptr->ai_sharp_blend.d_change_speed_size_slope_a;
	ai_ctrl.ai_sharp_blend.blend_hith = ptr->ai_sharp_blend.blend_hith;


	//(4) icm_tune_setting	///////////
	//ICM dynamic tuning
	ai_ctrl.ai_icm_tune.hue_target_hi1 = ptr->ai_icm_tune.hue_target_hi1;
	ai_ctrl.ai_icm_tune.hue_target_hi2 = ptr->ai_icm_tune.hue_target_hi2;
	ai_ctrl.ai_icm_tune.hue_target_hi3 = ptr->ai_icm_tune.hue_target_hi3;
	ai_ctrl.ai_icm_tune.hue_target_lo1 = ptr->ai_icm_tune.hue_target_lo1;
	ai_ctrl.ai_icm_tune.hue_target_lo2 = ptr->ai_icm_tune.hue_target_lo2;
	ai_ctrl.ai_icm_tune.hue_target_lo3 = ptr->ai_icm_tune.hue_target_lo3;
	ai_ctrl.ai_icm_tune.sat_target_hi1 = ptr->ai_icm_tune.sat_target_hi1;
	ai_ctrl.ai_icm_tune.sat_target_hi2 = ptr->ai_icm_tune.sat_target_hi2;
	ai_ctrl.ai_icm_tune.sat_target_hi3 = ptr->ai_icm_tune.sat_target_hi3;
	ai_ctrl.ai_icm_tune.sat_target_lo1 = ptr->ai_icm_tune.sat_target_lo1;
	ai_ctrl.ai_icm_tune.sat_target_lo2 = ptr->ai_icm_tune.sat_target_lo2;
	ai_ctrl.ai_icm_tune.sat_target_lo3 = ptr->ai_icm_tune.sat_target_lo3;
	ai_ctrl.ai_icm_tune.s_adj_th_p = ptr->ai_icm_tune.s_adj_th_p;
	ai_ctrl.ai_icm_tune.s_adj_th_n = ptr->ai_icm_tune.s_adj_th_n;
	ai_ctrl.ai_icm_tune.h_adj_th_p = ptr->ai_icm_tune.h_adj_th_p;
	ai_ctrl.ai_icm_tune.h_adj_th_n = ptr->ai_icm_tune.h_adj_th_n;
	ai_ctrl.ai_icm_tune.sat3x3_gain = ptr->ai_icm_tune.sat3x3_gain;
	ai_ctrl.ai_icm_tune.bri_3x3_delta = ptr->ai_icm_tune.bri_3x3_delta;

	// chen 0528
	ai_ctrl.ai_icm_tune.icm_table_nouse = ptr->ai_icm_tune.icm_table_nouse;
	ai_ctrl.ai_icm_tune.icm_sat_hith_nomax = ptr->ai_icm_tune.icm_sat_hith_nomax;
	//end chen 0528

	//(5) info_setting //////////////
	// face0
	ai_ctrl.ai_info_manul_0.AIPQ_dy_en = ptr->ai_info_manul_0.AIPQ_dy_en;
	ai_ctrl.ai_info_manul_0.info_manual_en = ptr->ai_info_manul_0.info_manual_en;
	ai_ctrl.ai_info_manul_0.scene_change = ptr->ai_info_manul_0.scene_change;
	ai_ctrl.ai_info_manul_0.pv8 = ptr->ai_info_manul_0.pv8;
	ai_ctrl.ai_info_manul_0.cx12 = ptr->ai_info_manul_0.cx12;
	ai_ctrl.ai_info_manul_0.cy12 = ptr->ai_info_manul_0.cy12;
	ai_ctrl.ai_info_manul_0.w12 = ptr->ai_info_manul_0.w12;
	ai_ctrl.ai_info_manul_0.h12 = ptr->ai_info_manul_0.h12;
	ai_ctrl.ai_info_manul_0.range12 = ptr->ai_info_manul_0.range12;
	ai_ctrl.ai_info_manul_0.cb_med12 = ptr->ai_info_manul_0.cb_med12;
	ai_ctrl.ai_info_manul_0.cr_med12 = ptr->ai_info_manul_0.cr_med12;
	ai_ctrl.ai_info_manul_0.hue_med12 = ptr->ai_info_manul_0.hue_med12;
	ai_ctrl.ai_info_manul_0.sat_med12 = ptr->ai_info_manul_0.sat_med12;
	ai_ctrl.ai_info_manul_0.val_med12 = ptr->ai_info_manul_0.val_med12;

	// face1
	ai_ctrl.ai_info_manul_1.AIPQ_dy_en = ptr->ai_info_manul_1.AIPQ_dy_en;
	ai_ctrl.ai_info_manul_1.info_manual_en = ptr->ai_info_manul_1.info_manual_en;
	ai_ctrl.ai_info_manul_1.scene_change = ptr->ai_info_manul_1.scene_change;
	ai_ctrl.ai_info_manul_1.pv8 = ptr->ai_info_manul_1.pv8;
	ai_ctrl.ai_info_manul_1.cx12 = ptr->ai_info_manul_1.cx12;
	ai_ctrl.ai_info_manul_1.cy12 = ptr->ai_info_manul_1.cy12;
	ai_ctrl.ai_info_manul_1.w12 = ptr->ai_info_manul_1.w12;
	ai_ctrl.ai_info_manul_1.h12 = ptr->ai_info_manul_1.h12;
	ai_ctrl.ai_info_manul_1.range12 = ptr->ai_info_manul_1.range12;
	ai_ctrl.ai_info_manul_1.cb_med12 = ptr->ai_info_manul_1.cb_med12;
	ai_ctrl.ai_info_manul_1.cr_med12 = ptr->ai_info_manul_1.cr_med12;
	ai_ctrl.ai_info_manul_1.hue_med12 = ptr->ai_info_manul_1.hue_med12;
	ai_ctrl.ai_info_manul_1.sat_med12 = ptr->ai_info_manul_1.sat_med12;
	ai_ctrl.ai_info_manul_1.val_med12 = ptr->ai_info_manul_1.val_med12;

	// face2
	ai_ctrl.ai_info_manul_2.AIPQ_dy_en = ptr->ai_info_manul_2.AIPQ_dy_en;
	ai_ctrl.ai_info_manul_2.info_manual_en = ptr->ai_info_manul_2.info_manual_en;
	ai_ctrl.ai_info_manul_2.scene_change = ptr->ai_info_manul_2.scene_change;
	ai_ctrl.ai_info_manul_2.pv8 = ptr->ai_info_manul_2.pv8;
	ai_ctrl.ai_info_manul_2.cx12 = ptr->ai_info_manul_2.cx12;
	ai_ctrl.ai_info_manul_2.cy12 = ptr->ai_info_manul_2.cy12;
	ai_ctrl.ai_info_manul_2.w12 = ptr->ai_info_manul_2.w12;
	ai_ctrl.ai_info_manul_2.h12 = ptr->ai_info_manul_2.h12;
	ai_ctrl.ai_info_manul_2.range12 = ptr->ai_info_manul_2.range12;
	ai_ctrl.ai_info_manul_2.cb_med12 = ptr->ai_info_manul_2.cb_med12;
	ai_ctrl.ai_info_manul_2.cr_med12 = ptr->ai_info_manul_2.cr_med12;
	ai_ctrl.ai_info_manul_2.hue_med12 = ptr->ai_info_manul_2.hue_med12;
	ai_ctrl.ai_info_manul_2.sat_med12 = ptr->ai_info_manul_2.sat_med12;
	ai_ctrl.ai_info_manul_2.val_med12 = ptr->ai_info_manul_2.val_med12;
	// face3
	ai_ctrl.ai_info_manul_3.AIPQ_dy_en = ptr->ai_info_manul_3.AIPQ_dy_en;
	ai_ctrl.ai_info_manul_3.info_manual_en = ptr->ai_info_manul_3.info_manual_en;
	ai_ctrl.ai_info_manul_3.scene_change = ptr->ai_info_manul_3.scene_change;
	ai_ctrl.ai_info_manul_3.pv8 = ptr->ai_info_manul_3.pv8;
	ai_ctrl.ai_info_manul_3.cx12 = ptr->ai_info_manul_3.cx12;
	ai_ctrl.ai_info_manul_3.cy12 = ptr->ai_info_manul_3.cy12;
	ai_ctrl.ai_info_manul_3.w12 = ptr->ai_info_manul_3.w12;
	ai_ctrl.ai_info_manul_3.h12 = ptr->ai_info_manul_3.h12;
	ai_ctrl.ai_info_manul_3.range12 = ptr->ai_info_manul_3.range12;
	ai_ctrl.ai_info_manul_3.cb_med12 = ptr->ai_info_manul_3.cb_med12;
	ai_ctrl.ai_info_manul_3.cr_med12 = ptr->ai_info_manul_3.cr_med12;
	ai_ctrl.ai_info_manul_3.hue_med12 = ptr->ai_info_manul_3.hue_med12;
	ai_ctrl.ai_info_manul_3.sat_med12 = ptr->ai_info_manul_3.sat_med12;
	ai_ctrl.ai_info_manul_3.val_med12 = ptr->ai_info_manul_3.val_med12;
	// face4
	ai_ctrl.ai_info_manul_4.AIPQ_dy_en = ptr->ai_info_manul_4.AIPQ_dy_en;
	ai_ctrl.ai_info_manul_4.info_manual_en = ptr->ai_info_manul_4.info_manual_en;
	ai_ctrl.ai_info_manul_4.scene_change = ptr->ai_info_manul_4.scene_change;
	ai_ctrl.ai_info_manul_4.pv8 = ptr->ai_info_manul_4.pv8;
	ai_ctrl.ai_info_manul_4.cx12 = ptr->ai_info_manul_4.cx12;
	ai_ctrl.ai_info_manul_4.cy12 = ptr->ai_info_manul_4.cy12;
	ai_ctrl.ai_info_manul_4.w12 = ptr->ai_info_manul_4.w12;
	ai_ctrl.ai_info_manul_4.h12 = ptr->ai_info_manul_4.h12;
	ai_ctrl.ai_info_manul_4.range12 = ptr->ai_info_manul_4.range12;
	ai_ctrl.ai_info_manul_4.cb_med12 = ptr->ai_info_manul_4.cb_med12;
	ai_ctrl.ai_info_manul_4.cr_med12 = ptr->ai_info_manul_4.cr_med12;
	ai_ctrl.ai_info_manul_4.hue_med12 = ptr->ai_info_manul_4.hue_med12;
	ai_ctrl.ai_info_manul_4.sat_med12 = ptr->ai_info_manul_4.sat_med12;
	ai_ctrl.ai_info_manul_4.val_med12 = ptr->ai_info_manul_4.val_med12;
	// face5
	ai_ctrl.ai_info_manul_5.AIPQ_dy_en = ptr->ai_info_manul_5.AIPQ_dy_en;
	ai_ctrl.ai_info_manul_5.info_manual_en = ptr->ai_info_manul_5.info_manual_en;
	ai_ctrl.ai_info_manul_5.scene_change = ptr->ai_info_manul_5.scene_change;
	ai_ctrl.ai_info_manul_5.pv8 = ptr->ai_info_manul_5.pv8;
	ai_ctrl.ai_info_manul_5.cx12 = ptr->ai_info_manul_5.cx12;
	ai_ctrl.ai_info_manul_5.cy12 = ptr->ai_info_manul_5.cy12;
	ai_ctrl.ai_info_manul_5.w12 = ptr->ai_info_manul_5.w12;
	ai_ctrl.ai_info_manul_5.h12 = ptr->ai_info_manul_5.h12;
	ai_ctrl.ai_info_manul_5.range12 = ptr->ai_info_manul_5.range12;
	ai_ctrl.ai_info_manul_5.cb_med12 = ptr->ai_info_manul_5.cb_med12;
	ai_ctrl.ai_info_manul_5.cr_med12 = ptr->ai_info_manul_5.cr_med12;
	ai_ctrl.ai_info_manul_5.hue_med12 = ptr->ai_info_manul_5.hue_med12;
	ai_ctrl.ai_info_manul_5.sat_med12 = ptr->ai_info_manul_5.sat_med12;
	ai_ctrl.ai_info_manul_5.val_med12 = ptr->ai_info_manul_5.val_med12;

	// lesley 0808
	//(11) ICM dynamic tuning2
	ai_ctrl.ai_icm_tune2.val_target_hi2_ratio = ptr->ai_icm_tune2.val_target_hi2_ratio;
	ai_ctrl.ai_icm_tune2.val_target_hi1 = ptr->ai_icm_tune2.val_target_hi1;
	ai_ctrl.ai_icm_tune2.val_target_lo1 = ptr->ai_icm_tune2.val_target_lo1;
	ai_ctrl.ai_icm_tune2.val_target_lo2_ratio = ptr->ai_icm_tune2.val_target_lo2_ratio;
	ai_ctrl.ai_icm_tune2.v_adj_th_max_p = ptr->ai_icm_tune2.v_adj_th_max_p;
		ai_ctrl.ai_icm_tune2.v_adj_th_max_n = ptr->ai_icm_tune2.v_adj_th_max_n;

	// lesley 1007
	ai_ctrl.ai_icm_tune2.hue_target_hi2_ratio = ptr->ai_icm_tune2.hue_target_hi2_ratio;
	ai_ctrl.ai_icm_tune2.hue_target_lo2_ratio = ptr->ai_icm_tune2.hue_target_lo2_ratio;
	ai_ctrl.ai_icm_tune2.sat_target_hi2_ratio = ptr->ai_icm_tune2.sat_target_hi2_ratio;
	ai_ctrl.ai_icm_tune2.sat_target_lo2_ratio = ptr->ai_icm_tune2.sat_target_lo2_ratio;
	// end lesley 1007

	ai_ctrl.ai_icm_tune2.h_adj_th_p_norm = ptr->ai_icm_tune2.h_adj_th_p_norm;
	ai_ctrl.ai_icm_tune2.h_adj_th_n_norm = ptr->ai_icm_tune2.h_adj_th_n_norm;
	ai_ctrl.ai_icm_tune2.s_adj_th_p_norm = ptr->ai_icm_tune2.s_adj_th_p_norm;
	ai_ctrl.ai_icm_tune2.s_adj_th_n_norm = ptr->ai_icm_tune2.s_adj_th_n_norm;
	ai_ctrl.ai_icm_tune2.v_adj_th_p_norm = ptr->ai_icm_tune2.v_adj_th_p_norm;
	ai_ctrl.ai_icm_tune2.v_adj_th_n_norm = ptr->ai_icm_tune2.v_adj_th_n_norm;


	ai_ctrl.ai_icm_tune2.h_adj_step = ptr->ai_icm_tune2.h_adj_step;
	ai_ctrl.ai_icm_tune2.s_adj_step = ptr->ai_icm_tune2.s_adj_step;
	ai_ctrl.ai_icm_tune2.v_adj_step = ptr->ai_icm_tune2.v_adj_step;

	// lesley 0821
	ai_ctrl.ai_icm_tune2.icm_global_en = ptr->ai_icm_tune2.icm_global_en;
	// end lesley 0821

	// lesley 0822
	ai_ctrl.ai_icm_tune2.center_uv_step = ptr->ai_icm_tune2.center_uv_step;
	// end lesley 0822


	// lesley 0826
	ai_ctrl.ai_icm_tune2.keep_gray_mode = ptr->ai_icm_tune2.keep_gray_mode;
	ai_ctrl.ai_icm_tune2.uv_range0_lo = ptr->ai_icm_tune2.uv_range0_lo;
	ai_ctrl.ai_icm_tune2.uv_range0_up = ptr->ai_icm_tune2.uv_range0_up;
	// end lesley 0826

	// lesley 0902
	ai_ctrl.ai_icm_tune2.center_u_init = ptr->ai_icm_tune2.center_u_init;
	ai_ctrl.ai_icm_tune2.center_v_init = ptr->ai_icm_tune2.center_v_init;
	ai_ctrl.ai_icm_tune2.center_u_lo = ptr->ai_icm_tune2.center_u_lo;
	ai_ctrl.ai_icm_tune2.center_u_up = ptr->ai_icm_tune2.center_u_up;
	ai_ctrl.ai_icm_tune2.center_v_lo = ptr->ai_icm_tune2.center_v_lo;
	ai_ctrl.ai_icm_tune2.center_v_up = ptr->ai_icm_tune2.center_v_up;
	// end lesley 0902



	//(12) global2 setting (for dcc)
	ai_ctrl.ai_global2.dcc_uv_blend_ratio0=ptr->ai_global2.dcc_uv_blend_ratio0;
	ai_ctrl.ai_global2.dcc_uv_blend_ratio1=ptr->ai_global2.dcc_uv_blend_ratio1;
	ai_ctrl.ai_global2.dcc_uv_blend_ratio2=ptr->ai_global2.dcc_uv_blend_ratio2;
	ai_ctrl.ai_global2.dcc_uv_blend_ratio3=ptr->ai_global2.dcc_uv_blend_ratio3;
	ai_ctrl.ai_global2.dcc_uv_blend_ratio4=ptr->ai_global2.dcc_uv_blend_ratio4;
	ai_ctrl.ai_global2.dcc_uv_blend_ratio5=ptr->ai_global2.dcc_uv_blend_ratio5;
	ai_ctrl.ai_global2.dcc_uv_blend_ratio6=ptr->ai_global2.dcc_uv_blend_ratio6;
	ai_ctrl.ai_global2.dcc_uv_blend_ratio7=ptr->ai_global2.dcc_uv_blend_ratio7;

	ai_ctrl.ai_global2.dcc_global_en=ptr->ai_global2.dcc_global_en;
	ai_ctrl.ai_global2.dcc_old_skin_en = ptr->ai_global2.dcc_old_skin_en;

	// lesley 0904
	ai_ctrl.ai_global2.dcc_old_skin_y_range = ptr->ai_global2.dcc_old_skin_y_range;
	ai_ctrl.ai_global2.dcc_old_skin_u_range = ptr->ai_global2.dcc_old_skin_u_range;
	ai_ctrl.ai_global2.dcc_old_skin_v_range = ptr->ai_global2.dcc_old_skin_v_range;
	ai_ctrl.ai_global2.dcc_keep_gray_mode = ptr->ai_global2.dcc_keep_gray_mode;
	// end lesley 0904

	// lesley 0910
	ai_ctrl.ai_global2.dcc_enhance_en = ptr->ai_global2.dcc_enhance_en;
	// end lesley 0910

	ai_ctrl.ai_global2.center_y_step = ptr->ai_global2.center_y_step;
	ai_ctrl.ai_global2.center_uv_step = ptr->ai_global2.center_uv_step;
	//(13) shp tuning
	// lesley 0814
	ai_ctrl.ai_shp_tune.edg_gain_level = ptr->ai_shp_tune.edg_gain_level;
	ai_ctrl.ai_shp_tune.tex_gain_level = ptr->ai_shp_tune.tex_gain_level;
	ai_ctrl.ai_shp_tune.vpk_gain_level = ptr->ai_shp_tune.vpk_gain_level;
	ai_ctrl.ai_shp_tune.vpk_edg_gain_level = ptr->ai_shp_tune.vpk_edg_gain_level;
	// end lesley 0814

	// chen 0815_2
	ai_ctrl.ai_shp_tune.AI_face_sharp_dynamic_en = ptr->ai_shp_tune.AI_face_sharp_dynamic_en;
	// end chen 0815_2

	// lesley 0815
	ai_ctrl.ai_shp_tune.AI_face_sharp_mode = ptr->ai_shp_tune.AI_face_sharp_mode;
	// end lesley 0815

	// yush 190815
	ai_ctrl.ai_shp_tune.shp_face_adjust_en = ptr->ai_shp_tune.shp_face_adjust_en;
	// end yush 190815

	// lesley 0819
	ai_ctrl.ai_shp_tune.edg_lv = ptr->ai_shp_tune.edg_lv;
	ai_ctrl.ai_shp_tune.tex_lv = ptr->ai_shp_tune.tex_lv;
	ai_ctrl.ai_shp_tune.vpk_lv = ptr->ai_shp_tune.vpk_lv;
	ai_ctrl.ai_shp_tune.vpk_edg_lv = ptr->ai_shp_tune.vpk_edg_lv;
	ai_ctrl.ai_shp_tune.shp_gain_en = ptr->ai_shp_tune.shp_gain_en;
	ai_ctrl.ai_shp_tune.shp_lv_en = ptr->ai_shp_tune.shp_lv_en;
	// end lesley 0819

	// lesley 0910
	ai_ctrl.ai_shp_tune.edg_gain_neg_level = ptr->ai_shp_tune.edg_gain_neg_level;
	ai_ctrl.ai_shp_tune.tex_gain_neg_level = ptr->ai_shp_tune.tex_gain_neg_level;
	ai_ctrl.ai_shp_tune.vpk_gain_neg_level = ptr->ai_shp_tune.vpk_gain_neg_level;
	ai_ctrl.ai_shp_tune.vpk_edg_gain_neg_level = ptr->ai_shp_tune.vpk_edg_gain_neg_level;
	// end lesley 0910

	// (14) global3 setting
	ai_ctrl.ai_global3.ai_sc_y_diff_th = ptr->ai_global3.ai_sc_y_diff_th;
	ai_ctrl.ai_global3.ai_sc_count_th = ptr->ai_global3.ai_sc_count_th;
	// chen 0808
	ai_ctrl.ai_global3.IOU_select = ptr->ai_global3.IOU_select;
	ai_ctrl.ai_global3.sum_count_num = ptr->ai_global3.sum_count_num;
	// end chen 0808

	// chen 0812
	ai_ctrl.ai_global3.disappear_between_faces_new_en = ptr->ai_global3.disappear_between_faces_new_en;
	// end chen 0812

	// lesley 0813
	ai_ctrl.ai_global3.debug_face_info_mode = ptr->ai_global3.debug_face_info_mode;
	// end lesley 0813

	// chen 0815_2
	ai_ctrl.ai_global3.sc_y_diff_th = ptr->ai_global3.sc_y_diff_th;
	// end chen 0815_2

	// lesley 0820_2
	ai_ctrl.ai_global3.IOU_decay_en = ptr->ai_global3.IOU_decay_en;
	ai_ctrl.ai_global3.IOU_decay = ptr->ai_global3.IOU_decay;
	// end lesley 0820_2

	// lesley 0823
	ai_ctrl.ai_global3.blend_size_en = ptr->ai_global3.blend_size_en;
	ai_ctrl.ai_global3.blend_size_loth = ptr->ai_global3.blend_size_loth;
	ai_ctrl.ai_global3.blend_size_hith = ptr->ai_global3.blend_size_hith;
	// end lesley 0823

	// lesley 0829
	ai_ctrl.ai_global3.keep_still_mode = ptr->ai_global3.keep_still_mode;
	ai_ctrl.ai_global3.still_ratio_th = ptr->ai_global3.still_ratio_th;
	ai_ctrl.ai_global3.still_ratio_th1 = ptr->ai_global3.still_ratio_th1;
	ai_ctrl.ai_global3.still_ratio_th2 = ptr->ai_global3.still_ratio_th2;
	ai_ctrl.ai_global3.still_ratio_th3 = ptr->ai_global3.still_ratio_th3;
	ai_ctrl.ai_global3.still_ratio_clamp = ptr->ai_global3.still_ratio_clamp;
	// end lesley 0829

	// lesley 0904
	ai_ctrl.ai_global3.scene_change_en = ptr->ai_global3.scene_change_en;
	// end lesley 0904

	// lesley 0906_2
	ai_ctrl.ai_global3.ai_sc_y_diff_th1 = ptr->ai_global3.ai_sc_y_diff_th1;
	ai_ctrl.ai_global3.ai_sc_hue_ratio_th = ptr->ai_global3.ai_sc_hue_ratio_th;
	ai_ctrl.ai_global3.ai_sc_hue_ratio_th1 = ptr->ai_global3.ai_sc_hue_ratio_th1;
	// end lesley 0906_2

	// lesley 0920
	ai_ctrl.ai_global3.signal_cnt_th = ptr->ai_global3.signal_cnt_th;
	// end lesley 0920

	// lesley 0928
	ai_ctrl.ai_global3.IOU2_mode = ptr->ai_global3.IOU2_mode;
	ai_ctrl.ai_global3.IOU2_mode1_offset = ptr->ai_global3.IOU2_mode1_offset;
	ai_ctrl.ai_global3.IOU2_mode1_range_gain = ptr->ai_global3.IOU2_mode1_range_gain;
	ai_ctrl.ai_global3.IOU2_mode1_range_ratio = ptr->ai_global3.IOU2_mode1_range_ratio;
	// end lesley 0928

	ai_ctrl.ai_global3.draw_blend_en = ptr->ai_global3.draw_blend_en;
	ai_ctrl.ai_global3.apply_delay = ptr->ai_global3.apply_delay;

	ai_ctrl.ai_global3.ip_isr_ctrl = ptr->ai_global3.ip_isr_ctrl;
// end lesley 0808
}
// end chen 0429

// vip table 1260 get, for face detect
void scaler_AI_obj_Ctrl_Get(DRV_AI_Ctrl_table *ptr) // read from sharing memory
{
        if (ptr==NULL) return;

		memset(ptr, 0, sizeof(DRV_AI_Ctrl_table));

//(1) global setting ///////////////
        ptr->ai_global.frame_drop_num =ai_ctrl.ai_global.frame_drop_num;
        ptr->ai_global.frame_delay =ai_ctrl.ai_global.frame_delay;

        ptr->ai_global.AI_icm_en = ai_ctrl.ai_global.AI_icm_en;
        ptr->ai_global.AI_dcc_en = ai_ctrl.ai_global.AI_dcc_en;
        ptr->ai_global.AI_sharp_en = ai_ctrl.ai_global.AI_sharp_en;

        ptr->ai_global.sc_count_th = ai_ctrl.ai_global.sc_count_th;
        ptr->ai_global.ratio_max_th = ai_ctrl.ai_global.ratio_max_th;
        ptr->ai_global.range_gain = ai_ctrl.ai_global.range_gain;

        ptr->ai_global.iir_weight = ai_ctrl.ai_global.iir_weight;
        ptr->ai_global.iir_weight2 = ai_ctrl.ai_global.iir_weight2;
        ptr->ai_global.iir_weight3 = ai_ctrl.ai_global.iir_weight3;

        ptr->ai_global.icm_ai_blend_inside_ratio = ai_ctrl.ai_global.icm_ai_blend_inside_ratio;
        ptr->ai_global.icm_ai_blend_ratio0 = ai_ctrl.ai_global.icm_ai_blend_ratio0;
        ptr->ai_global.icm_ai_blend_ratio1 = ai_ctrl.ai_global.icm_ai_blend_ratio1;
        ptr->ai_global.icm_ai_blend_ratio2 = ai_ctrl.ai_global.icm_ai_blend_ratio2;
        ptr->ai_global.icm_ai_blend_ratio3 = ai_ctrl.ai_global.icm_ai_blend_ratio3;

        ptr->ai_global.dcc_ai_blend_inside_ratio = ai_ctrl.ai_global.dcc_ai_blend_inside_ratio;
        ptr->ai_global.dcc_ai_blend_ratio0 = ai_ctrl.ai_global.dcc_ai_blend_ratio0;
        ptr->ai_global.dcc_ai_blend_ratio1 = ai_ctrl.ai_global.dcc_ai_blend_ratio1;
        ptr->ai_global.dcc_ai_blend_ratio2 = ai_ctrl.ai_global.dcc_ai_blend_ratio2;
        ptr->ai_global.dcc_ai_blend_ratio3 = ai_ctrl.ai_global.dcc_ai_blend_ratio3;


        // chen 0524
        ptr->ai_global.icm_uv_blend_ratio0=ai_ctrl.ai_global.icm_uv_blend_ratio0;
        ptr->ai_global.icm_uv_blend_ratio1=ai_ctrl.ai_global.icm_uv_blend_ratio1;
        ptr->ai_global.icm_uv_blend_ratio2=ai_ctrl.ai_global.icm_uv_blend_ratio2;
        ptr->ai_global.icm_uv_blend_ratio3=ai_ctrl.ai_global.icm_uv_blend_ratio3;
        ptr->ai_global.icm_uv_blend_ratio4=ai_ctrl.ai_global.icm_uv_blend_ratio4;
        ptr->ai_global.icm_uv_blend_ratio5=ai_ctrl.ai_global.icm_uv_blend_ratio5;
        ptr->ai_global.icm_uv_blend_ratio6=ai_ctrl.ai_global.icm_uv_blend_ratio6;
        ptr->ai_global.icm_uv_blend_ratio7=ai_ctrl.ai_global.icm_uv_blend_ratio7;
        //end chen 0524

        // lesley 0718
        ptr->ai_global.demo_draw_en=ai_ctrl.ai_global.demo_draw_en;
        //end lesley 0718


//(2) icm_blending_setting ///////////

        ptr->ai_icm_blend.d_change_speed_default = ai_ctrl.ai_icm_blend.d_change_speed_default;
        ptr->ai_icm_blend.change_speed_default = ai_ctrl.ai_icm_blend.change_speed_default;

	// disappear //////
        ptr->ai_icm_blend.val_diff_loth = ai_ctrl.ai_icm_blend.val_diff_loth;
        ptr->ai_icm_blend.d_change_speed_val_loth = ai_ctrl.ai_icm_blend.d_change_speed_val_loth;
        ptr->ai_icm_blend.d_change_speed_val_hith = ai_ctrl.ai_icm_blend.d_change_speed_val_hith;
        ptr->ai_icm_blend.d_change_speed_val_slope = ai_ctrl.ai_icm_blend.d_change_speed_val_slope;
        ptr->ai_icm_blend.IOU_diff_loth = ai_ctrl.ai_icm_blend.IOU_diff_loth;
        ptr->ai_icm_blend.d_change_speed_IOU_loth = ai_ctrl.ai_icm_blend.d_change_speed_IOU_loth;
        ptr->ai_icm_blend.d_change_speed_IOU_hith = ai_ctrl.ai_icm_blend.d_change_speed_IOU_hith;
        ptr->ai_icm_blend.d_change_speed_IOU_slope = ai_ctrl.ai_icm_blend.d_change_speed_IOU_slope;
        ptr->ai_icm_blend.IOU_diff_loth2 = ai_ctrl.ai_icm_blend.IOU_diff_loth2;
        ptr->ai_icm_blend.d_change_speed_IOU_loth2 = ai_ctrl.ai_icm_blend.d_change_speed_IOU_loth2;
        ptr->ai_icm_blend.d_change_speed_IOU_hith2 = ai_ctrl.ai_icm_blend.d_change_speed_IOU_hith2;
        ptr->ai_icm_blend.d_change_speed_IOU_slope2 = ai_ctrl.ai_icm_blend.d_change_speed_IOU_slope2;
        ptr->ai_icm_blend.size_diff_loth = ai_ctrl.ai_icm_blend.size_diff_loth;
        ptr->ai_icm_blend.d_change_speed_size_loth = ai_ctrl.ai_icm_blend.d_change_speed_size_loth;
        ptr->ai_icm_blend.d_change_speed_size_hith = ai_ctrl.ai_icm_blend.d_change_speed_size_hith;
        ptr->ai_icm_blend.d_change_speed_size_slope = ai_ctrl.ai_icm_blend.d_change_speed_size_slope;



	// appear //////

        ptr->ai_icm_blend.val_diff_loth_a = ai_ctrl.ai_icm_blend.val_diff_loth_a;
        ptr->ai_icm_blend.d_change_speed_val_loth_a = ai_ctrl.ai_icm_blend.d_change_speed_val_loth_a;
        ptr->ai_icm_blend.d_change_speed_val_hith_a = ai_ctrl.ai_icm_blend.d_change_speed_val_hith_a;
        ptr->ai_icm_blend.d_change_speed_val_slope_a = ai_ctrl.ai_icm_blend.d_change_speed_val_slope_a;
        ptr->ai_icm_blend.IOU_diff_loth_a = ai_ctrl.ai_icm_blend.IOU_diff_loth_a;
        ptr->ai_icm_blend.d_change_speed_IOU_loth_a = ai_ctrl.ai_icm_blend.d_change_speed_IOU_loth_a;
        ptr->ai_icm_blend.d_change_speed_IOU_hith_a = ai_ctrl.ai_icm_blend.d_change_speed_IOU_hith_a;
        ptr->ai_icm_blend.d_change_speed_IOU_slope_a = ai_ctrl.ai_icm_blend.d_change_speed_IOU_slope_a;
        ptr->ai_icm_blend.IOU_diff_loth_a2 = ai_ctrl.ai_icm_blend.IOU_diff_loth_a2;
        ptr->ai_icm_blend.d_change_speed_IOU_loth_a2 = ai_ctrl.ai_icm_blend.d_change_speed_IOU_loth_a2;
        ptr->ai_icm_blend.d_change_speed_IOU_hith_a2 = ai_ctrl.ai_icm_blend.d_change_speed_IOU_hith_a2;
        ptr->ai_icm_blend.d_change_speed_IOU_slope_a2 = ai_ctrl.ai_icm_blend.d_change_speed_IOU_slope_a2;
        ptr->ai_icm_blend.size_diff_loth_a = ai_ctrl.ai_icm_blend.size_diff_loth_a;
        ptr->ai_icm_blend.d_change_speed_size_loth_a = ai_ctrl.ai_icm_blend.d_change_speed_size_loth_a;
        ptr->ai_icm_blend.d_change_speed_size_hith_a = ai_ctrl.ai_icm_blend.d_change_speed_size_hith_a;
        ptr->ai_icm_blend.d_change_speed_size_slope_a = ai_ctrl.ai_icm_blend.d_change_speed_size_slope_a;
        ptr->ai_icm_blend.blend_hith = ai_ctrl.ai_icm_blend.blend_hith;



        //(3) dcc_blending_setting ///////////

        ptr->ai_dcc_blend.d_change_speed_default = ai_ctrl.ai_dcc_blend.d_change_speed_default;
        ptr->ai_dcc_blend.change_speed_default = ai_ctrl.ai_dcc_blend.change_speed_default;

	// disappear //////
        ptr->ai_dcc_blend.val_diff_loth = ai_ctrl.ai_dcc_blend.val_diff_loth;
        ptr->ai_dcc_blend.d_change_speed_val_loth = ai_ctrl.ai_dcc_blend.d_change_speed_val_loth;
        ptr->ai_dcc_blend.d_change_speed_val_hith = ai_ctrl.ai_dcc_blend.d_change_speed_val_hith;
        ptr->ai_dcc_blend.d_change_speed_val_slope = ai_ctrl.ai_dcc_blend.d_change_speed_val_slope;
        ptr->ai_dcc_blend.IOU_diff_loth = ai_ctrl.ai_dcc_blend.IOU_diff_loth;
        ptr->ai_dcc_blend.d_change_speed_IOU_loth = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_loth;
        ptr->ai_dcc_blend.d_change_speed_IOU_hith = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_hith;
        ptr->ai_dcc_blend.d_change_speed_IOU_slope = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_slope;
        ptr->ai_dcc_blend.IOU_diff_loth2 = ai_ctrl.ai_dcc_blend.IOU_diff_loth2;
        ptr->ai_dcc_blend.d_change_speed_IOU_loth2 = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_loth2;
        ptr->ai_dcc_blend.d_change_speed_IOU_hith2 = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_hith2;
        ptr->ai_dcc_blend.d_change_speed_IOU_slope2 = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_slope2;
        ptr->ai_dcc_blend.size_diff_loth = ai_ctrl.ai_dcc_blend.size_diff_loth;
        ptr->ai_dcc_blend.d_change_speed_size_loth = ai_ctrl.ai_dcc_blend.d_change_speed_size_loth;
        ptr->ai_dcc_blend.d_change_speed_size_hith = ai_ctrl.ai_dcc_blend.d_change_speed_size_hith;
        ptr->ai_dcc_blend.d_change_speed_size_slope = ai_ctrl.ai_dcc_blend.d_change_speed_size_slope;



	// appear //////

        ptr->ai_dcc_blend.val_diff_loth_a = ai_ctrl.ai_dcc_blend.val_diff_loth_a;
        ptr->ai_dcc_blend.d_change_speed_val_loth_a = ai_ctrl.ai_dcc_blend.d_change_speed_val_loth_a;
        ptr->ai_dcc_blend.d_change_speed_val_hith_a = ai_ctrl.ai_dcc_blend.d_change_speed_val_hith_a;
        ptr->ai_dcc_blend.d_change_speed_val_slope_a = ai_ctrl.ai_dcc_blend.d_change_speed_val_slope_a;
        ptr->ai_dcc_blend.IOU_diff_loth_a = ai_ctrl.ai_dcc_blend.IOU_diff_loth_a;
        ptr->ai_dcc_blend.d_change_speed_IOU_loth_a = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_loth_a;
        ptr->ai_dcc_blend.d_change_speed_IOU_hith_a = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_hith_a;
        ptr->ai_dcc_blend.d_change_speed_IOU_slope_a = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_slope_a;
        ptr->ai_dcc_blend.IOU_diff_loth_a2 = ai_ctrl.ai_dcc_blend.IOU_diff_loth_a2;
        ptr->ai_dcc_blend.d_change_speed_IOU_loth_a2 = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_loth_a2;
        ptr->ai_dcc_blend.d_change_speed_IOU_hith_a2 = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_hith_a2;
        ptr->ai_dcc_blend.d_change_speed_IOU_slope_a2 = ai_ctrl.ai_dcc_blend.d_change_speed_IOU_slope_a2;
        ptr->ai_dcc_blend.size_diff_loth_a = ai_ctrl.ai_dcc_blend.size_diff_loth_a;
        ptr->ai_dcc_blend.d_change_speed_size_loth_a = ai_ctrl.ai_dcc_blend.d_change_speed_size_loth_a;
        ptr->ai_dcc_blend.d_change_speed_size_hith_a = ai_ctrl.ai_dcc_blend.d_change_speed_size_hith_a;
        ptr->ai_dcc_blend.d_change_speed_size_slope_a = ai_ctrl.ai_dcc_blend.d_change_speed_size_slope_a;
        ptr->ai_dcc_blend.blend_hith = ai_ctrl.ai_dcc_blend.blend_hith;


        //(4) sharpness_blending_setting ///////////

        ptr->ai_sharp_blend.d_change_speed_default = ai_ctrl.ai_sharp_blend.d_change_speed_default;
        ptr->ai_sharp_blend.change_speed_default = ai_ctrl.ai_sharp_blend.change_speed_default;

	// disappear //////
        ptr->ai_sharp_blend.val_diff_loth = ai_ctrl.ai_sharp_blend.val_diff_loth;
        ptr->ai_sharp_blend.d_change_speed_val_loth = ai_ctrl.ai_sharp_blend.d_change_speed_val_loth;
        ptr->ai_sharp_blend.d_change_speed_val_hith = ai_ctrl.ai_sharp_blend.d_change_speed_val_hith;
        ptr->ai_sharp_blend.d_change_speed_val_slope = ai_ctrl.ai_sharp_blend.d_change_speed_val_slope;
        ptr->ai_sharp_blend.IOU_diff_loth = ai_ctrl.ai_sharp_blend.IOU_diff_loth;
        ptr->ai_sharp_blend.d_change_speed_IOU_loth = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_loth;
        ptr->ai_sharp_blend.d_change_speed_IOU_hith = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_hith;
        ptr->ai_sharp_blend.d_change_speed_IOU_slope = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_slope;
        ptr->ai_sharp_blend.IOU_diff_loth2 = ai_ctrl.ai_sharp_blend.IOU_diff_loth2;
        ptr->ai_sharp_blend.d_change_speed_IOU_loth2 = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_loth2;
        ptr->ai_sharp_blend.d_change_speed_IOU_hith2 = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_hith2;
        ptr->ai_sharp_blend.d_change_speed_IOU_slope2 = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_slope2;
        ptr->ai_sharp_blend.size_diff_loth = ai_ctrl.ai_sharp_blend.size_diff_loth;
        ptr->ai_sharp_blend.d_change_speed_size_loth = ai_ctrl.ai_sharp_blend.d_change_speed_size_loth;
        ptr->ai_sharp_blend.d_change_speed_size_hith = ai_ctrl.ai_sharp_blend.d_change_speed_size_hith;
        ptr->ai_sharp_blend.d_change_speed_size_slope = ai_ctrl.ai_sharp_blend.d_change_speed_size_slope;


	// appear //////

        ptr->ai_sharp_blend.val_diff_loth_a = ai_ctrl.ai_sharp_blend.val_diff_loth_a;
        ptr->ai_sharp_blend.d_change_speed_val_loth_a = ai_ctrl.ai_sharp_blend.d_change_speed_val_loth_a;
        ptr->ai_sharp_blend.d_change_speed_val_hith_a = ai_ctrl.ai_sharp_blend.d_change_speed_val_hith_a;
        ptr->ai_sharp_blend.d_change_speed_val_slope_a = ai_ctrl.ai_sharp_blend.d_change_speed_val_slope_a;
        ptr->ai_sharp_blend.IOU_diff_loth_a = ai_ctrl.ai_sharp_blend.IOU_diff_loth_a;
        ptr->ai_sharp_blend.d_change_speed_IOU_loth_a = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_loth_a;
        ptr->ai_sharp_blend.d_change_speed_IOU_hith_a = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_hith_a;
        ptr->ai_sharp_blend.d_change_speed_IOU_slope_a = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_slope_a;
        ptr->ai_sharp_blend.IOU_diff_loth_a2 = ai_ctrl.ai_sharp_blend.IOU_diff_loth_a2;
        ptr->ai_sharp_blend.d_change_speed_IOU_loth_a2 = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_loth_a2;
        ptr->ai_sharp_blend.d_change_speed_IOU_hith_a2 = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_hith_a2;
        ptr->ai_sharp_blend.d_change_speed_IOU_slope_a2 = ai_ctrl.ai_sharp_blend.d_change_speed_IOU_slope_a2;
        ptr->ai_sharp_blend.size_diff_loth_a = ai_ctrl.ai_sharp_blend.size_diff_loth_a;
        ptr->ai_sharp_blend.d_change_speed_size_loth_a = ai_ctrl.ai_sharp_blend.d_change_speed_size_loth_a;
        ptr->ai_sharp_blend.d_change_speed_size_hith_a = ai_ctrl.ai_sharp_blend.d_change_speed_size_hith_a;
        ptr->ai_sharp_blend.d_change_speed_size_slope_a = ai_ctrl.ai_sharp_blend.d_change_speed_size_slope_a;
        ptr->ai_sharp_blend.blend_hith = ai_ctrl.ai_sharp_blend.blend_hith;



//(4) icm_tune_setting	///////////
	//ICM dynamic tuning
        ptr->ai_icm_tune.hue_target_hi1 = ai_ctrl.ai_icm_tune.hue_target_hi1;
        ptr->ai_icm_tune.hue_target_hi2 = ai_ctrl.ai_icm_tune.hue_target_hi2;
        ptr->ai_icm_tune.hue_target_hi3 = ai_ctrl.ai_icm_tune.hue_target_hi3;
        ptr->ai_icm_tune.hue_target_lo1 = ai_ctrl.ai_icm_tune.hue_target_lo1;
        ptr->ai_icm_tune.hue_target_lo2 = ai_ctrl.ai_icm_tune.hue_target_lo2;
        ptr->ai_icm_tune.hue_target_lo3 = ai_ctrl.ai_icm_tune.hue_target_lo3;
        ptr->ai_icm_tune.sat_target_hi1 = ai_ctrl.ai_icm_tune.sat_target_hi1;
        ptr->ai_icm_tune.sat_target_hi2 = ai_ctrl.ai_icm_tune.sat_target_hi2;
        ptr->ai_icm_tune.sat_target_hi3 = ai_ctrl.ai_icm_tune.sat_target_hi3;
        ptr->ai_icm_tune.sat_target_lo1 = ai_ctrl.ai_icm_tune.sat_target_lo1;
        ptr->ai_icm_tune.sat_target_lo2 = ai_ctrl.ai_icm_tune.sat_target_lo2;
        ptr->ai_icm_tune.sat_target_lo3 = ai_ctrl.ai_icm_tune.sat_target_lo3;

        ptr->ai_icm_tune.s_adj_th_p = ai_ctrl.ai_icm_tune.s_adj_th_p;
        ptr->ai_icm_tune.s_adj_th_n = ai_ctrl.ai_icm_tune.s_adj_th_n;
        ptr->ai_icm_tune.h_adj_th_p = ai_ctrl.ai_icm_tune.h_adj_th_p;
        ptr->ai_icm_tune.h_adj_th_n = ai_ctrl.ai_icm_tune.h_adj_th_n;
        ptr->ai_icm_tune.sat3x3_gain = ai_ctrl.ai_icm_tune.sat3x3_gain;
        ptr->ai_icm_tune.bri_3x3_delta = ai_ctrl.ai_icm_tune.bri_3x3_delta;

	  // chen 0528
	 ptr->ai_icm_tune.icm_table_nouse = ai_ctrl.ai_icm_tune.icm_table_nouse;
	 ptr->ai_icm_tune.icm_sat_hith_nomax = ai_ctrl.ai_icm_tune.icm_sat_hith_nomax;
 	//end chen 0528



//(5) info_setting //////////////
	// face0
        ptr->ai_info_manul_0.AIPQ_dy_en = ai_ctrl.ai_info_manul_0.AIPQ_dy_en ;
        ptr->ai_info_manul_0.info_manual_en = ai_ctrl.ai_info_manul_0.info_manual_en;
        ptr->ai_info_manul_0.scene_change = ai_ctrl.ai_info_manul_0.scene_change;
        ptr->ai_info_manul_0.pv8 = ai_ctrl.ai_info_manul_0.pv8;
        ptr->ai_info_manul_0.cx12 = ai_ctrl.ai_info_manul_0.cx12;
        ptr->ai_info_manul_0.cy12 = ai_ctrl.ai_info_manul_0.cy12;
        ptr->ai_info_manul_0.w12 = ai_ctrl.ai_info_manul_0.w12;
        ptr->ai_info_manul_0.h12 = ai_ctrl.ai_info_manul_0.h12;
        ptr->ai_info_manul_0.range12 = ai_ctrl.ai_info_manul_0.range12;
        ptr->ai_info_manul_0.cb_med12 = ai_ctrl.ai_info_manul_0.cb_med12;
        ptr->ai_info_manul_0.cr_med12 = ai_ctrl.ai_info_manul_0.cr_med12;
        ptr->ai_info_manul_0.hue_med12 = ai_ctrl.ai_info_manul_0.hue_med12;
        ptr->ai_info_manul_0.sat_med12 = ai_ctrl.ai_info_manul_0.sat_med12;
        ptr->ai_info_manul_0.val_med12 = ai_ctrl.ai_info_manul_0.val_med12;

	// face1
        ptr->ai_info_manul_1.AIPQ_dy_en = ai_ctrl.ai_info_manul_1.AIPQ_dy_en ;
        ptr->ai_info_manul_1.info_manual_en = ai_ctrl.ai_info_manul_1.info_manual_en;
        ptr->ai_info_manul_1.scene_change = ai_ctrl.ai_info_manul_1.scene_change;
        ptr->ai_info_manul_1.pv8 = ai_ctrl.ai_info_manul_1.pv8;
        ptr->ai_info_manul_1.cx12 = ai_ctrl.ai_info_manul_1.cx12;
        ptr->ai_info_manul_1.cy12 = ai_ctrl.ai_info_manul_1.cy12;
        ptr->ai_info_manul_1.w12 = ai_ctrl.ai_info_manul_1.w12;
        ptr->ai_info_manul_1.h12 = ai_ctrl.ai_info_manul_1.h12;
        ptr->ai_info_manul_1.range12 = ai_ctrl.ai_info_manul_1.range12;
        ptr->ai_info_manul_1.cb_med12 = ai_ctrl.ai_info_manul_1.cb_med12;
        ptr->ai_info_manul_1.cr_med12 = ai_ctrl.ai_info_manul_1.cr_med12;
        ptr->ai_info_manul_1.hue_med12 = ai_ctrl.ai_info_manul_1.hue_med12;
        ptr->ai_info_manul_1.sat_med12 = ai_ctrl.ai_info_manul_1.sat_med12;
        ptr->ai_info_manul_1.val_med12 = ai_ctrl.ai_info_manul_1.val_med12;


	// face2
        ptr->ai_info_manul_2.AIPQ_dy_en = ai_ctrl.ai_info_manul_2.AIPQ_dy_en ;
        ptr->ai_info_manul_2.info_manual_en = ai_ctrl.ai_info_manul_2.info_manual_en;
        ptr->ai_info_manul_2.scene_change = ai_ctrl.ai_info_manul_2.scene_change;
        ptr->ai_info_manul_2.pv8 = ai_ctrl.ai_info_manul_2.pv8;
        ptr->ai_info_manul_2.cx12 = ai_ctrl.ai_info_manul_2.cx12;
        ptr->ai_info_manul_2.cy12 = ai_ctrl.ai_info_manul_2.cy12;
        ptr->ai_info_manul_2.w12 = ai_ctrl.ai_info_manul_2.w12;
        ptr->ai_info_manul_2.h12 = ai_ctrl.ai_info_manul_2.h12;
        ptr->ai_info_manul_2.range12 = ai_ctrl.ai_info_manul_2.range12;
        ptr->ai_info_manul_2.cb_med12 = ai_ctrl.ai_info_manul_2.cb_med12;
        ptr->ai_info_manul_2.cr_med12 = ai_ctrl.ai_info_manul_2.cr_med12;
        ptr->ai_info_manul_2.hue_med12 = ai_ctrl.ai_info_manul_2.hue_med12;
        ptr->ai_info_manul_2.sat_med12 = ai_ctrl.ai_info_manul_2.sat_med12;
        ptr->ai_info_manul_2.val_med12 = ai_ctrl.ai_info_manul_2.val_med12;
	// face3
        ptr->ai_info_manul_3.AIPQ_dy_en = ai_ctrl.ai_info_manul_3.AIPQ_dy_en ;
        ptr->ai_info_manul_3.info_manual_en = ai_ctrl.ai_info_manul_3.info_manual_en;
        ptr->ai_info_manul_3.scene_change = ai_ctrl.ai_info_manul_3.scene_change;
        ptr->ai_info_manul_3.pv8 = ai_ctrl.ai_info_manul_3.pv8;
        ptr->ai_info_manul_3.cx12 = ai_ctrl.ai_info_manul_3.cx12;
        ptr->ai_info_manul_3.cy12 = ai_ctrl.ai_info_manul_3.cy12;
        ptr->ai_info_manul_3.w12 = ai_ctrl.ai_info_manul_3.w12;
        ptr->ai_info_manul_3.h12 = ai_ctrl.ai_info_manul_3.h12;
        ptr->ai_info_manul_3.range12 = ai_ctrl.ai_info_manul_3.range12;
        ptr->ai_info_manul_3.cb_med12 = ai_ctrl.ai_info_manul_3.cb_med12;
        ptr->ai_info_manul_3.cr_med12 = ai_ctrl.ai_info_manul_3.cr_med12;
        ptr->ai_info_manul_3.hue_med12 = ai_ctrl.ai_info_manul_3.hue_med12;
        ptr->ai_info_manul_3.sat_med12 = ai_ctrl.ai_info_manul_3.sat_med12;
        ptr->ai_info_manul_3.val_med12 = ai_ctrl.ai_info_manul_3.val_med12;
	// face4
        ptr->ai_info_manul_4.AIPQ_dy_en = ai_ctrl.ai_info_manul_4.AIPQ_dy_en ;
        ptr->ai_info_manul_4.info_manual_en = ai_ctrl.ai_info_manul_4.info_manual_en;
        ptr->ai_info_manul_4.scene_change = ai_ctrl.ai_info_manul_4.scene_change;
        ptr->ai_info_manul_4.pv8 = ai_ctrl.ai_info_manul_4.pv8;
        ptr->ai_info_manul_4.cx12 = ai_ctrl.ai_info_manul_4.cx12;
        ptr->ai_info_manul_4.cy12 = ai_ctrl.ai_info_manul_4.cy12;
        ptr->ai_info_manul_4.w12 = ai_ctrl.ai_info_manul_4.w12;
        ptr->ai_info_manul_4.h12 = ai_ctrl.ai_info_manul_4.h12;
        ptr->ai_info_manul_4.range12 = ai_ctrl.ai_info_manul_4.range12;
        ptr->ai_info_manul_4.cb_med12 = ai_ctrl.ai_info_manul_4.cb_med12;
        ptr->ai_info_manul_4.cr_med12 = ai_ctrl.ai_info_manul_4.cr_med12;
        ptr->ai_info_manul_4.hue_med12 = ai_ctrl.ai_info_manul_4.hue_med12;
        ptr->ai_info_manul_4.sat_med12 = ai_ctrl.ai_info_manul_4.sat_med12;
        ptr->ai_info_manul_4.val_med12 = ai_ctrl.ai_info_manul_4.val_med12;
	// face5
        ptr->ai_info_manul_5.AIPQ_dy_en = ai_ctrl.ai_info_manul_5.AIPQ_dy_en ;
        ptr->ai_info_manul_5.info_manual_en = ai_ctrl.ai_info_manul_5.info_manual_en;
        ptr->ai_info_manul_5.scene_change = ai_ctrl.ai_info_manul_5.scene_change;
        ptr->ai_info_manul_5.pv8 = ai_ctrl.ai_info_manul_5.pv8;
        ptr->ai_info_manul_5.cx12 = ai_ctrl.ai_info_manul_5.cx12;
        ptr->ai_info_manul_5.cy12 = ai_ctrl.ai_info_manul_5.cy12;
        ptr->ai_info_manul_5.w12 = ai_ctrl.ai_info_manul_5.w12;
        ptr->ai_info_manul_5.h12 = ai_ctrl.ai_info_manul_5.h12;
        ptr->ai_info_manul_5.range12 = ai_ctrl.ai_info_manul_5.range12;
        ptr->ai_info_manul_5.cb_med12 = ai_ctrl.ai_info_manul_5.cb_med12;
        ptr->ai_info_manul_5.cr_med12 = ai_ctrl.ai_info_manul_5.cr_med12;
        ptr->ai_info_manul_5.hue_med12 = ai_ctrl.ai_info_manul_5.hue_med12;
        ptr->ai_info_manul_5.sat_med12 = ai_ctrl.ai_info_manul_5.sat_med12;
        ptr->ai_info_manul_5.val_med12 = ai_ctrl.ai_info_manul_5.val_med12;

// lesley 0808
//(11) ICM dynamic tuning
        ptr->ai_icm_tune2.val_target_lo2_ratio = ai_ctrl.ai_icm_tune2.val_target_lo2_ratio;
        ptr->ai_icm_tune2.val_target_lo1 = ai_ctrl.ai_icm_tune2.val_target_lo1;
        ptr->ai_icm_tune2.val_target_hi1 = ai_ctrl.ai_icm_tune2.val_target_hi1;
        ptr->ai_icm_tune2.val_target_hi2_ratio = ai_ctrl.ai_icm_tune2.val_target_hi2_ratio;
        ptr->ai_icm_tune2.v_adj_th_max_p = ai_ctrl.ai_icm_tune2.v_adj_th_max_p;
        ptr->ai_icm_tune2.v_adj_th_max_n = ai_ctrl.ai_icm_tune2.v_adj_th_max_n;

		// lesley 1007
		ptr->ai_icm_tune2.hue_target_hi2_ratio = ai_ctrl.ai_icm_tune2.hue_target_hi2_ratio;
		ptr->ai_icm_tune2.hue_target_lo2_ratio = ai_ctrl.ai_icm_tune2.hue_target_lo2_ratio;
		ptr->ai_icm_tune2.sat_target_hi2_ratio = ai_ctrl.ai_icm_tune2.sat_target_hi2_ratio;
		ptr->ai_icm_tune2.sat_target_lo2_ratio = ai_ctrl.ai_icm_tune2.sat_target_lo2_ratio;
		// end lesley 1007

        ptr->ai_icm_tune2.h_adj_th_p_norm = ai_ctrl.ai_icm_tune2.h_adj_th_p_norm;
 		ptr->ai_icm_tune2.h_adj_th_n_norm = ai_ctrl.ai_icm_tune2.h_adj_th_n_norm;
        ptr->ai_icm_tune2.s_adj_th_p_norm = ai_ctrl.ai_icm_tune2.s_adj_th_p_norm;
 		ptr->ai_icm_tune2.s_adj_th_n_norm = ai_ctrl.ai_icm_tune2.s_adj_th_n_norm;
        ptr->ai_icm_tune2.v_adj_th_p_norm = ai_ctrl.ai_icm_tune2.v_adj_th_p_norm;
 		ptr->ai_icm_tune2.v_adj_th_n_norm = ai_ctrl.ai_icm_tune2.v_adj_th_n_norm;

        ptr->ai_icm_tune2.h_adj_step = ai_ctrl.ai_icm_tune2.h_adj_step;
        ptr->ai_icm_tune2.s_adj_step = ai_ctrl.ai_icm_tune2.s_adj_step;
		ptr->ai_icm_tune2.v_adj_step = ai_ctrl.ai_icm_tune2.v_adj_step;

		// lesley 0821
        ptr->ai_icm_tune2.icm_global_en = ai_ctrl.ai_icm_tune2.icm_global_en;
		// end lesley 0821

		// lesley 0822
        ptr->ai_icm_tune2.center_uv_step = ai_ctrl.ai_icm_tune2.center_uv_step;
		// end lesley 0822

		// lesley 0826
		ptr->ai_icm_tune2.keep_gray_mode = ai_ctrl.ai_icm_tune2.keep_gray_mode;
		ptr->ai_icm_tune2.uv_range0_lo = ai_ctrl.ai_icm_tune2.uv_range0_lo;
		ptr->ai_icm_tune2.uv_range0_up = ai_ctrl.ai_icm_tune2.uv_range0_up;
		// end lesley 0826

		// lesley 0902
	    ptr->ai_icm_tune2.center_u_init = ai_ctrl.ai_icm_tune2.center_u_init;
	    ptr->ai_icm_tune2.center_v_init = ai_ctrl.ai_icm_tune2.center_v_init;
		ptr->ai_icm_tune2.center_u_lo = ai_ctrl.ai_icm_tune2.center_u_lo;
		ptr->ai_icm_tune2.center_u_up = ai_ctrl.ai_icm_tune2.center_u_up;
		ptr->ai_icm_tune2.center_v_lo = ai_ctrl.ai_icm_tune2.center_v_lo;
		ptr->ai_icm_tune2.center_v_up = ai_ctrl.ai_icm_tune2.center_v_up;
		// end lesley 0902

//(12) dcc setting
        ptr->ai_global2.dcc_uv_blend_ratio0=ai_ctrl.ai_global2.dcc_uv_blend_ratio0;
        ptr->ai_global2.dcc_uv_blend_ratio1=ai_ctrl.ai_global2.dcc_uv_blend_ratio1;
        ptr->ai_global2.dcc_uv_blend_ratio2=ai_ctrl.ai_global2.dcc_uv_blend_ratio2;
        ptr->ai_global2.dcc_uv_blend_ratio3=ai_ctrl.ai_global2.dcc_uv_blend_ratio3;
        ptr->ai_global2.dcc_uv_blend_ratio4=ai_ctrl.ai_global2.dcc_uv_blend_ratio4;
        ptr->ai_global2.dcc_uv_blend_ratio5=ai_ctrl.ai_global2.dcc_uv_blend_ratio5;
        ptr->ai_global2.dcc_uv_blend_ratio6=ai_ctrl.ai_global2.dcc_uv_blend_ratio6;
        ptr->ai_global2.dcc_uv_blend_ratio7=ai_ctrl.ai_global2.dcc_uv_blend_ratio7;

        ptr->ai_global2.dcc_global_en = ai_ctrl.ai_global2.dcc_global_en;
        ptr->ai_global2.dcc_old_skin_en = ai_ctrl.ai_global2.dcc_old_skin_en;

		// lesley 0904
        ptr->ai_global2.dcc_old_skin_y_range = ai_ctrl.ai_global2.dcc_old_skin_y_range;
        ptr->ai_global2.dcc_old_skin_u_range = ai_ctrl.ai_global2.dcc_old_skin_u_range;
        ptr->ai_global2.dcc_old_skin_v_range = ai_ctrl.ai_global2.dcc_old_skin_v_range;
        ptr->ai_global2.dcc_keep_gray_mode = ai_ctrl.ai_global2.dcc_keep_gray_mode;
		// end lesley 0904

		// lesley 0910
        ptr->ai_global2.dcc_enhance_en = ai_ctrl.ai_global2.dcc_enhance_en;
		// end lesley 0910

        ptr->ai_global2.center_y_step = ai_ctrl.ai_global2.center_y_step;
        ptr->ai_global2.center_uv_step = ai_ctrl.ai_global2.center_uv_step;
//(13) shp tuning
		// lesley 0814
        ptr->ai_shp_tune.edg_gain_level = ai_ctrl.ai_shp_tune.edg_gain_level;
        ptr->ai_shp_tune.tex_gain_level = ai_ctrl.ai_shp_tune.tex_gain_level;
        ptr->ai_shp_tune.vpk_gain_level = ai_ctrl.ai_shp_tune.vpk_gain_level;
        ptr->ai_shp_tune.vpk_edg_gain_level = ai_ctrl.ai_shp_tune.vpk_edg_gain_level;
		// end lesley 0814

		// chen 0815_2
        ptr->ai_shp_tune.AI_face_sharp_dynamic_en = ai_ctrl.ai_shp_tune.AI_face_sharp_dynamic_en;
		// end chen 0815_2

		// lesley 0815
        ptr->ai_shp_tune.AI_face_sharp_mode = ai_ctrl.ai_shp_tune.AI_face_sharp_mode;
		// end lesley 0815

		// yush 190815
        ptr->ai_shp_tune.shp_face_adjust_en = ai_ctrl.ai_shp_tune.shp_face_adjust_en;
		// end yush 0815

		// lesley 0819
        ptr->ai_shp_tune.edg_lv = ai_ctrl.ai_shp_tune.edg_lv;
        ptr->ai_shp_tune.tex_lv = ai_ctrl.ai_shp_tune.tex_lv;
        ptr->ai_shp_tune.vpk_lv = ai_ctrl.ai_shp_tune.vpk_lv;
        ptr->ai_shp_tune.vpk_edg_lv = ai_ctrl.ai_shp_tune.vpk_edg_lv;
        ptr->ai_shp_tune.shp_gain_en = ai_ctrl.ai_shp_tune.shp_gain_en;
        ptr->ai_shp_tune.shp_lv_en = ai_ctrl.ai_shp_tune.shp_lv_en;
		// end lesley 0819

		// lesley 0910
        ptr->ai_shp_tune.edg_gain_neg_level = ai_ctrl.ai_shp_tune.edg_gain_neg_level;
        ptr->ai_shp_tune.tex_gain_neg_level = ai_ctrl.ai_shp_tune.tex_gain_neg_level;
        ptr->ai_shp_tune.vpk_gain_neg_level = ai_ctrl.ai_shp_tune.vpk_gain_neg_level;
        ptr->ai_shp_tune.vpk_edg_gain_neg_level = ai_ctrl.ai_shp_tune.vpk_edg_gain_neg_level;
		// end lesley 0910

// (14) global3 setting
        ptr->ai_global3.ai_sc_y_diff_th = ai_ctrl.ai_global3.ai_sc_y_diff_th;
        ptr->ai_global3.ai_sc_count_th = ai_ctrl.ai_global3.ai_sc_count_th;
		// chen 0808
        ptr->ai_global3.IOU_select = ai_ctrl.ai_global3.IOU_select;
        ptr->ai_global3.sum_count_num = ai_ctrl.ai_global3.sum_count_num;
		// end chen 0808

		// chen 0812
        ptr->ai_global3.disappear_between_faces_new_en = ai_ctrl.ai_global3.disappear_between_faces_new_en;
		// end chen 0812

		// lesley 0813
        ptr->ai_global3.debug_face_info_mode = ai_ctrl.ai_global3.debug_face_info_mode;
		// end lesley 0813

		// chen 0815_2
        ptr->ai_global3.sc_y_diff_th = ai_ctrl.ai_global3.sc_y_diff_th;
		// end chen 0815_2

		// lesley 0820_2
        ptr->ai_global3.IOU_decay_en = ai_ctrl.ai_global3.IOU_decay_en;
        ptr->ai_global3.IOU_decay = ai_ctrl.ai_global3.IOU_decay;
		// end lesley 0820_2

		// lesley 0823
        ptr->ai_global3.blend_size_en = ai_ctrl.ai_global3.blend_size_en;
        ptr->ai_global3.blend_size_loth = ai_ctrl.ai_global3.blend_size_loth;
        ptr->ai_global3.blend_size_hith = ai_ctrl.ai_global3.blend_size_hith;
		// end lesley 0823

		// lesley 0829
        ptr->ai_global3.keep_still_mode = ai_ctrl.ai_global3.keep_still_mode;
        ptr->ai_global3.still_ratio_th = ai_ctrl.ai_global3.still_ratio_th;
        ptr->ai_global3.still_ratio_th1 = ai_ctrl.ai_global3.still_ratio_th1;
        ptr->ai_global3.still_ratio_th2 = ai_ctrl.ai_global3.still_ratio_th2;
        ptr->ai_global3.still_ratio_th3 = ai_ctrl.ai_global3.still_ratio_th3;
        ptr->ai_global3.still_ratio_clamp = ai_ctrl.ai_global3.still_ratio_clamp;
		// end lesley 0829

		// lesley 0904
        ptr->ai_global3.scene_change_en = ai_ctrl.ai_global3.scene_change_en;
		// end lesley 0904

		// lesley 0906_2
		ptr->ai_global3.ai_sc_y_diff_th1 = ai_ctrl.ai_global3.ai_sc_y_diff_th1;
		ptr->ai_global3.ai_sc_hue_ratio_th = ai_ctrl.ai_global3.ai_sc_hue_ratio_th;
		ptr->ai_global3.ai_sc_hue_ratio_th1 = ai_ctrl.ai_global3.ai_sc_hue_ratio_th1;
		// end lesley 0906_2
		
		// lesley 0920
		ptr->ai_global3.signal_cnt_th = ai_ctrl.ai_global3.signal_cnt_th;
		// end lesley 0920

		// lesley 0928
		ptr->ai_global3.IOU2_mode = ai_ctrl.ai_global3.IOU2_mode;
		ptr->ai_global3.IOU2_mode1_offset = ai_ctrl.ai_global3.IOU2_mode1_offset;
		ptr->ai_global3.IOU2_mode1_range_gain = ai_ctrl.ai_global3.IOU2_mode1_range_gain;
		ptr->ai_global3.IOU2_mode1_range_ratio = ai_ctrl.ai_global3.IOU2_mode1_range_ratio;
		// end lesley 0928

		ptr->ai_global3.draw_blend_en = ai_ctrl.ai_global3.draw_blend_en;
		ptr->ai_global3.apply_delay = ai_ctrl.ai_global3.apply_delay;

		ptr->ai_global3.ip_isr_ctrl = ai_ctrl.ai_global3.ip_isr_ctrl;
// end lesley 0808
}

// lesley 0808
// for face PQ set shp cds cm0
void drvif_color_AI_Ctrl_shp(void)
{
	/*Set Edge Gain*/
	color_sharp_dm_segpk_edgpk3_RBUS color_sharp_dm_segpk_edgpk3;
	color_sharp_dm_segpk_edgpk4_RBUS color_sharp_dm_segpk_edgpk4;
	/*Set Texture Gain*/
	color_sharp_dm_peaking_gain_RBUS color_sharp_dm_peaking_gain_reg;
	color_sharp_dm_peaking_bound_1_RBUS color_sharp_dm_peaking_bound_1_reg;
	/* vertical gain*/
	color_sharp_dm_segpk_vpk2_RBUS color_sharp_dm_segpk_vpk2;
	color_sharp_dm_segpk_vpk3_RBUS color_sharp_dm_segpk_vpk3;
	
	/* vertical edge gain*/
	color_sharp_dm_segpk_vpk5_RBUS color_sharp_dm_segpk_vpk5;
	color_sharp_dm_segpk_vpk6_RBUS color_sharp_dm_segpk_vpk6;

	/* cm0 */
	color_sharp_dm_cds_peaking_gain_cm0_tex_RBUS	color_sharp_dm_cds_peaking_gain_cm0_tex_reg;
	color_sharp_dm_cds_peaking_gain_cm0_edge_RBUS	color_sharp_dm_cds_peaking_gain_cm0_edge_reg;
	color_sharp_dm_cds_peaking_gain_cm0_v_RBUS		color_sharp_dm_cds_peaking_gain_cm0_v_reg;
	color_sharp_dm_cds_peaking_gain_cm0_v_edg_RBUS	color_sharp_dm_cds_peaking_gain_cm0_v_edg_reg;	

	color_sharp_dm_cds_peaking_bound_cm0_tex_RBUS	color_sharp_dm_cds_peaking_bound_cm0_tex_reg;
	color_sharp_dm_cds_peaking_bound_cm0_edge_RBUS	color_sharp_dm_cds_peaking_bound_cm0_edge_reg;
	color_sharp_dm_cds_peaking_bound_cm0_v_RBUS		color_sharp_dm_cds_peaking_bound_cm0_v_reg;
	color_sharp_dm_cds_peaking_bound_cm0_v_edg_RBUS	color_sharp_dm_cds_peaking_bound_cm0_v_edg_reg;

	color_sharp_shp_cds_predict_RBUS reg_color_sharp_shp_cds_predict_reg;

	/* */
	short edg_gain_pos, edg_gain_neg, edg_lv, edg_hv_pos, edg_hv_neg;
	short tex_gain_pos, tex_gain_neg, tex_lv, tex_hv_pos, tex_hv_neg;
	short vpk_gain_pos, vpk_gain_neg, vpk_lv, vpk_hv_pos, vpk_hv_neg;
	short vpk_edg_gain_pos, vpk_edg_gain_neg, vpk_edg_lv, vpk_edg_hv_pos, vpk_edg_hv_neg;
	unsigned char blendw;

	int edg_gain_level, tex_gain_level, vpk_gain_level, vpk_edg_gain_level;
	int edg_gain_neg_level, tex_gain_neg_level, vpk_gain_neg_level, vpk_edg_gain_neg_level;
	int edg_lv_cm0, tex_lv_cm0, v_lv_cm0, v_edg_lv_cm0, shp_gain_en, shp_lv_en;

	edg_gain_level = ai_ctrl.ai_shp_tune.edg_gain_level;
	tex_gain_level = ai_ctrl.ai_shp_tune.tex_gain_level;
	vpk_gain_level = ai_ctrl.ai_shp_tune.vpk_gain_level;
	vpk_edg_gain_level = ai_ctrl.ai_shp_tune.vpk_edg_gain_level;

	edg_gain_neg_level = ai_ctrl.ai_shp_tune.edg_gain_neg_level;
	tex_gain_neg_level = ai_ctrl.ai_shp_tune.tex_gain_neg_level;
	vpk_gain_neg_level = ai_ctrl.ai_shp_tune.vpk_gain_neg_level;
	vpk_edg_gain_neg_level = ai_ctrl.ai_shp_tune.vpk_edg_gain_neg_level;

	edg_lv_cm0 = ai_ctrl.ai_shp_tune.edg_lv;
	tex_lv_cm0 = ai_ctrl.ai_shp_tune.tex_lv;
	v_lv_cm0 = ai_ctrl.ai_shp_tune.vpk_lv;
	v_edg_lv_cm0 = ai_ctrl.ai_shp_tune.vpk_edg_lv;
	shp_gain_en = ai_ctrl.ai_shp_tune.shp_gain_en;
	shp_lv_en = ai_ctrl.ai_shp_tune.shp_lv_en;

	/*Set Edge Gain*/
	color_sharp_dm_segpk_edgpk3.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_EDGPK3_reg);
	edg_gain_pos = color_sharp_dm_segpk_edgpk3.gain_pos;
	edg_gain_neg = color_sharp_dm_segpk_edgpk3.gain_neg;
	color_sharp_dm_segpk_edgpk4.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_EDGPK4_reg);
	edg_lv = color_sharp_dm_segpk_edgpk4.lv;
	edg_hv_pos = color_sharp_dm_segpk_edgpk4.hv_pos;
	edg_hv_neg = color_sharp_dm_segpk_edgpk4.hv_neg;

	/*Set Texture Gain*/
	color_sharp_dm_peaking_gain_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_GAIN_reg);
	tex_gain_pos = color_sharp_dm_peaking_gain_reg.gain_pos;
	tex_gain_neg = color_sharp_dm_peaking_gain_reg.gain_neg;
	color_sharp_dm_peaking_bound_1_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_BOUND_1_reg);
	tex_lv = color_sharp_dm_peaking_bound_1_reg.lv;
	tex_hv_pos = color_sharp_dm_peaking_bound_1_reg.hv_pos;
	tex_hv_neg = color_sharp_dm_peaking_bound_1_reg.hv_neg;

	/* vertical gain*/
	color_sharp_dm_segpk_vpk2.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_VPK2_reg);
	vpk_gain_pos = color_sharp_dm_segpk_vpk2.vpk_gain_pos;
	vpk_gain_neg = color_sharp_dm_segpk_vpk2.vpk_gain_neg;
	vpk_lv = color_sharp_dm_segpk_vpk2.vpk_lv;
	color_sharp_dm_segpk_vpk3.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_VPK3_reg);
	vpk_hv_pos = color_sharp_dm_segpk_vpk3.vpk_hv_pos;
	vpk_hv_neg = color_sharp_dm_segpk_vpk3.vpk_hv_neg;

	/* vertical edge gain*/
	color_sharp_dm_segpk_vpk5.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_VPK5_reg);
	vpk_edg_gain_pos = color_sharp_dm_segpk_vpk5.vpk_edg_gain_pos;
	vpk_edg_gain_neg = color_sharp_dm_segpk_vpk5.vpk_edg_gain_neg;
	vpk_edg_lv = color_sharp_dm_segpk_vpk5.vpk_edg_lv;
	color_sharp_dm_segpk_vpk6.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_VPK6_reg);
	vpk_edg_hv_pos = color_sharp_dm_segpk_vpk6.vpk_edg_hv_pos;
	vpk_edg_hv_neg = color_sharp_dm_segpk_vpk6.vpk_edg_hv_neg;
	
	/* cm0 */
	color_sharp_dm_cds_peaking_gain_cm0_tex_reg.regValue	= IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_reg);
	color_sharp_dm_cds_peaking_gain_cm0_edge_reg.regValue	= IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_reg);
	color_sharp_dm_cds_peaking_gain_cm0_v_reg.regValue		= IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_reg);
	color_sharp_dm_cds_peaking_gain_cm0_v_edg_reg.regValue	= IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_reg);
	
	color_sharp_dm_cds_peaking_bound_cm0_tex_reg.regValue	= IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_reg);
	color_sharp_dm_cds_peaking_bound_cm0_edge_reg.regValue	= IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_reg);
	color_sharp_dm_cds_peaking_bound_cm0_v_reg.regValue		= IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_reg);
	color_sharp_dm_cds_peaking_bound_cm0_v_edg_reg.regValue	= IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_reg);

	reg_color_sharp_shp_cds_predict_reg.regValue=IoReg_Read32(COLOR_SHARP_SHP_CDS_PREDICT_reg);	
	blendw = (reg_color_sharp_shp_cds_predict_reg.cds_region_predict_sel)?(reg_color_sharp_shp_cds_predict_reg.cds_region_predict_1):(reg_color_sharp_shp_cds_predict_reg.cds_region_predict_2);

	if(shp_gain_en)
	{
		tex_gain_pos = tex_gain_pos*tex_gain_level/100;
		tex_gain_neg = tex_gain_neg*tex_gain_neg_level/100;
		edg_gain_pos = edg_gain_pos*edg_gain_level/100;
		edg_gain_neg = edg_gain_neg*edg_gain_neg_level/100;
		vpk_gain_pos = vpk_gain_pos*vpk_gain_level/100;
		vpk_gain_neg = vpk_gain_neg*vpk_gain_neg_level/100;
		vpk_edg_gain_pos = vpk_edg_gain_pos*vpk_edg_gain_level/100;
		vpk_edg_gain_neg = vpk_edg_gain_neg*vpk_edg_gain_neg_level/100;

		if(tex_gain_pos>255) tex_gain_pos = 255;
		if(tex_gain_neg>255) tex_gain_neg = 255;
		if(edg_gain_pos>255) edg_gain_pos = 255;
		if(edg_gain_neg>255) edg_gain_neg = 255;
		if(vpk_gain_pos>255) vpk_gain_pos = 255;
		if(vpk_gain_neg>255) vpk_gain_neg = 255;
		if(vpk_edg_gain_pos>255) vpk_edg_gain_pos = 255;
		if(vpk_edg_gain_neg>255) vpk_edg_gain_neg = 255;

		color_sharp_dm_cds_peaking_gain_cm0_tex_reg.gain_pos = tex_gain_pos;
		color_sharp_dm_cds_peaking_gain_cm0_tex_reg.gain_neg = tex_gain_neg;

		color_sharp_dm_cds_peaking_gain_cm0_edge_reg.gain_pos = edg_gain_pos;
		color_sharp_dm_cds_peaking_gain_cm0_edge_reg.gain_neg = edg_gain_neg;

		color_sharp_dm_cds_peaking_gain_cm0_v_reg.gain_pos = vpk_gain_pos;
		color_sharp_dm_cds_peaking_gain_cm0_v_reg.gain_neg = vpk_gain_neg;

		color_sharp_dm_cds_peaking_gain_cm0_v_edg_reg.gain_pos = vpk_edg_gain_pos;
		color_sharp_dm_cds_peaking_gain_cm0_v_edg_reg.gain_neg = vpk_edg_gain_neg;

		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_TEX_reg,		color_sharp_dm_cds_peaking_gain_cm0_tex_reg.regValue);
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_EDGE_reg,		color_sharp_dm_cds_peaking_gain_cm0_edge_reg.regValue);
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_reg,		color_sharp_dm_cds_peaking_gain_cm0_v_reg.regValue);
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM0_V_EDG_reg,	color_sharp_dm_cds_peaking_gain_cm0_v_edg_reg.regValue);

		color_sharp_dm_cds_peaking_bound_cm0_tex_reg.hv_pos	 = tex_hv_pos;
		color_sharp_dm_cds_peaking_bound_cm0_edge_reg.hv_pos = edg_hv_pos;
		color_sharp_dm_cds_peaking_bound_cm0_v_reg.hv_pos 	 = vpk_hv_pos;
		color_sharp_dm_cds_peaking_bound_cm0_v_edg_reg.hv_pos= vpk_edg_hv_pos;
		color_sharp_dm_cds_peaking_bound_cm0_tex_reg.hv_neg	 = tex_hv_neg;
		color_sharp_dm_cds_peaking_bound_cm0_edge_reg.hv_neg = edg_hv_neg;
		color_sharp_dm_cds_peaking_bound_cm0_v_reg.hv_neg 	 = vpk_hv_neg;
		color_sharp_dm_cds_peaking_bound_cm0_v_edg_reg.hv_neg= vpk_edg_hv_neg;
		
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_reg, 	color_sharp_dm_cds_peaking_bound_cm0_tex_reg.regValue);
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_reg, 	color_sharp_dm_cds_peaking_bound_cm0_edge_reg.regValue);
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_reg, 		color_sharp_dm_cds_peaking_bound_cm0_v_reg.regValue);
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_reg,	color_sharp_dm_cds_peaking_bound_cm0_v_edg_reg.regValue);		

	}

	if(shp_lv_en)
	{
		edg_lv 	   = (blendw * edg_lv_cm0   + (255-blendw) * edg_lv)/255;
		tex_lv 	   = (blendw * tex_lv_cm0   + (255-blendw) * tex_lv)/255;
		vpk_lv 	   = (blendw * v_lv_cm0     + (255-blendw) * vpk_lv)/255;
		vpk_edg_lv = (blendw * v_edg_lv_cm0 + (255-blendw) * vpk_edg_lv)/255;
		
		color_sharp_dm_cds_peaking_bound_cm0_tex_reg.lv	 = tex_lv;
		color_sharp_dm_cds_peaking_bound_cm0_edge_reg.lv = edg_lv;
		color_sharp_dm_cds_peaking_bound_cm0_v_reg.lv 	 = vpk_lv;
		color_sharp_dm_cds_peaking_bound_cm0_v_edg_reg.lv= vpk_edg_lv;
		
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_TEX_reg, 	color_sharp_dm_cds_peaking_bound_cm0_tex_reg.regValue);
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_EDGE_reg, 	color_sharp_dm_cds_peaking_bound_cm0_edge_reg.regValue);
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_reg, 		color_sharp_dm_cds_peaking_bound_cm0_v_reg.regValue);
		IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM0_V_EDG_reg,	color_sharp_dm_cds_peaking_bound_cm0_v_edg_reg.regValue);		
	}

}

// for face PQ set dcc old skin
void drvif_color_old_skin_dcc_set(AI_OLD_DCC_apply old_dcc_apply)
{
	color_dcc_d_dcc_skin_tone_segment0_0_RBUS d_dcc_skin_tone_segment0_0_reg;
	color_dcc_d_dcc_skin_tone_segment0_1_RBUS d_dcc_skin_tone_segment0_1_reg;
	color_dcc_d_dcc_skin_tone_yuv_center_0_RBUS d_dcc_skin_tone_yuv_center_0_reg;
	color_dcc_d_dcc_skin_tone_yuv_range_0_RBUS d_dcc_skin_tone_yuv_range_0_reg;

	d_dcc_skin_tone_segment0_0_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg);
	d_dcc_skin_tone_segment0_1_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg);
	d_dcc_skin_tone_yuv_center_0_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg);
	d_dcc_skin_tone_yuv_range_0_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg);

	d_dcc_skin_tone_segment0_0_reg.y_blending_0_ratio_0 = old_dcc_apply.uv_blend_0;
	d_dcc_skin_tone_segment0_0_reg.y_blending_0_ratio_1 = old_dcc_apply.uv_blend_1;
	d_dcc_skin_tone_segment0_0_reg.y_blending_0_ratio_2 = old_dcc_apply.uv_blend_2;
	d_dcc_skin_tone_segment0_0_reg.y_blending_0_ratio_3 = old_dcc_apply.uv_blend_3;
	d_dcc_skin_tone_segment0_1_reg.y_blending_0_ratio_4 = old_dcc_apply.uv_blend_4;
	d_dcc_skin_tone_segment0_1_reg.y_blending_0_ratio_5 = old_dcc_apply.uv_blend_5;
	d_dcc_skin_tone_segment0_1_reg.y_blending_0_ratio_6 = old_dcc_apply.uv_blend_6;
	d_dcc_skin_tone_segment0_1_reg.y_blending_0_ratio_7 = old_dcc_apply.uv_blend_7;

	{
		d_dcc_skin_tone_yuv_range_0_reg.y_blending_0_y_center = old_dcc_apply.y_center;
		d_dcc_skin_tone_yuv_center_0_reg.y_blending_0_u_center = old_dcc_apply.u_center;
		d_dcc_skin_tone_yuv_center_0_reg.y_blending_0_v_center = old_dcc_apply.v_center;

		d_dcc_skin_tone_yuv_range_0_reg.y_blending_0_y_range = old_dcc_apply.y_range;
		d_dcc_skin_tone_yuv_range_0_reg.y_blending_0_u_range = old_dcc_apply.u_range;
		d_dcc_skin_tone_yuv_range_0_reg.y_blending_0_v_range = old_dcc_apply.v_range;
	}

	// lesley 0910
	{
		color_dcc_d_dcc_skin_tone_en_RBUS d_dcc_skin_tone_en_reg;
		d_dcc_skin_tone_en_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_EN_reg);
		d_dcc_skin_tone_en_reg.y_blending_0_enhance_en = old_dcc_apply.enhance_en;
		IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_EN_reg ,  d_dcc_skin_tone_en_reg.regValue );
	}
	// end lesley 0910	

	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_0_reg, d_dcc_skin_tone_segment0_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT0_1_reg, d_dcc_skin_tone_segment0_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_YUV_CENTER_0_reg, d_dcc_skin_tone_yuv_center_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_YUV_RANGE_0_reg, d_dcc_skin_tone_yuv_range_0_reg.regValue);

}
// end lesley 0808

// same as drvif_color_AI_obj_icm_init()
/*void drvif_color_AI_ICM_mode(unsigned char mode)
{
	color_icm_d_icm_cds_skin_0_RBUS   icm_d_icm_cds_skin_0_reg;
	color_icm_d_icm_ai_0_RBUS     icm_d_icm_ai_0_reg;

	icm_d_icm_cds_skin_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_CDS_SKIN_0_reg);
	icm_d_icm_ai_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_0_reg);
	
	if(mode == 0)
	{
		icm_d_icm_cds_skin_0_reg.cds_skin_en = 0;
		icm_d_icm_ai_0_reg.ai_ros_en = 0;
		
	}
	else
	{
		icm_d_icm_cds_skin_0_reg.cds_skin_en = 1;
		icm_d_icm_ai_0_reg.ai_ros_en = 1;
	}

	IoReg_Write32(COLOR_ICM_D_ICM_CDS_SKIN_0_reg, icm_d_icm_cds_skin_0_reg.regValue);
}*/

// for face icm init default table
void drvif_color_AI_ICM_table_set(AI_ICM_Ctrl_table *ptr) // read from sharing memory
{
	color_icm_d_icm_ai_offset_0_RBUS  icm_d_icm_ai_offset_0_reg;
	color_icm_d_icm_ai_offset_1_RBUS  icm_d_icm_ai_offset_1_reg;
	color_icm_d_icm_ai_offset_2_RBUS  icm_d_icm_ai_offset_2_reg;
	color_icm_d_icm_ai_offset_3_RBUS  icm_d_icm_ai_offset_3_reg;
	color_icm_d_icm_ai_offset_4_RBUS  icm_d_icm_ai_offset_4_reg;
	color_icm_d_icm_ai_offset_5_RBUS  icm_d_icm_ai_offset_5_reg;
	color_icm_d_icm_ai_offset_6_RBUS  icm_d_icm_ai_offset_6_reg;
	color_icm_d_icm_ai_offset_7_RBUS  icm_d_icm_ai_offset_7_reg;
	color_icm_d_icm_ai_offset_8_RBUS  icm_d_icm_ai_offset_8_reg;
	color_icm_d_icm_ai_offset_9_RBUS  icm_d_icm_ai_offset_9_reg;
	color_icm_d_icm_ai_offset_10_RBUS  icm_d_icm_ai_offset_10_reg;
	color_icm_d_icm_ai_offset_11_RBUS  icm_d_icm_ai_offset_11_reg;
	color_icm_d_icm_ai_6_RBUS  icm_d_icm_ai_6_reg;
	color_icm_d_icm_ai_7_RBUS  icm_d_icm_ai_7_reg;
	color_icm_d_icm_cds_skin_0_RBUS   icm_d_icm_cds_skin_0_reg;
	color_icm_d_icm_cds_skin_1_RBUS   icm_d_icm_cds_skin_1_reg;
	color_icm_d_icm_cds_skin_2_RBUS   icm_d_icm_cds_skin_2_reg;
	color_icm_d_icm_cds_skin_3_RBUS   icm_d_icm_cds_skin_3_reg;
	color_icm_d_icm_skin_tone_segment_c0_0_RBUS    icm_d_icm_skin_tone_segment_c0_0_reg;
	color_icm_d_icm_skin_tone_segment_c0_1_RBUS    icm_d_icm_skin_tone_segment_c0_1_reg;
	color_icm_d_icm_skin_tone_segment_c1_0_RBUS    icm_d_icm_skin_tone_segment_c1_0_reg;
	color_icm_d_icm_skin_tone_segment_c1_1_RBUS    icm_d_icm_skin_tone_segment_c1_1_reg;
	color_icm_d_icm_skin_tone_segment_c2_0_RBUS    icm_d_icm_skin_tone_segment_c2_0_reg;
	color_icm_d_icm_skin_tone_segment_c2_1_RBUS    icm_d_icm_skin_tone_segment_c2_1_reg;
	color_icm_d_icm_skin_tone_segment_c3_0_RBUS    icm_d_icm_skin_tone_segment_c3_0_reg;
	color_icm_d_icm_skin_tone_segment_c3_1_RBUS    icm_d_icm_skin_tone_segment_c3_1_reg;
	color_icm_d_icm_skin_tone_segment_c4_0_RBUS    icm_d_icm_skin_tone_segment_c4_0_reg;
	color_icm_d_icm_skin_tone_segment_c4_1_RBUS    icm_d_icm_skin_tone_segment_c4_1_reg;
	color_icm_d_icm_skin_tone_segment_c5_0_RBUS    icm_d_icm_skin_tone_segment_c5_0_reg;
	color_icm_d_icm_skin_tone_segment_c5_1_RBUS    icm_d_icm_skin_tone_segment_c5_1_reg;
	color_icm_d_icm_ai_0_RBUS     icm_d_icm_ai_0_reg;
	color_icm_d_icm_ai_1_RBUS     icm_d_icm_ai_1_reg;
	color_icm_d_icm_ai_2_RBUS     icm_d_icm_ai_2_reg;
	color_icm_d_icm_ai_3_RBUS     icm_d_icm_ai_3_reg;
	color_icm_d_icm_ai_4_RBUS     icm_d_icm_ai_4_reg;
	color_icm_d_icm_ai_5_RBUS     icm_d_icm_ai_5_reg;

	// lesley 0815
	color_icm_dm_icm_ctrl_RBUS color_icm_dm_icm_ctrl_reg;
	// end lesley 0815

        if (ptr==NULL)
                return;

	icm_d_icm_ai_offset_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_0_reg);
	icm_d_icm_ai_offset_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_1_reg);
	icm_d_icm_ai_offset_2_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_2_reg);
	icm_d_icm_ai_offset_3_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_3_reg);
	icm_d_icm_ai_offset_4_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_4_reg);
	icm_d_icm_ai_offset_5_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_5_reg);
	icm_d_icm_ai_offset_6_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_6_reg);
	icm_d_icm_ai_offset_7_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_7_reg);
	icm_d_icm_ai_offset_8_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_8_reg);
	icm_d_icm_ai_offset_9_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_9_reg);
	icm_d_icm_ai_offset_10_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_10_reg);
	icm_d_icm_ai_offset_11_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_OFFSET_11_reg);
	icm_d_icm_ai_6_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_6_reg);
	icm_d_icm_ai_7_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_7_reg);
	icm_d_icm_cds_skin_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_CDS_SKIN_0_reg);
	icm_d_icm_cds_skin_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_CDS_SKIN_1_reg);
	icm_d_icm_cds_skin_2_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_CDS_SKIN_2_reg);
	icm_d_icm_cds_skin_3_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_CDS_SKIN_3_reg);
	icm_d_icm_skin_tone_segment_c0_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C0_0_reg);
	icm_d_icm_skin_tone_segment_c0_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C0_1_reg);
	icm_d_icm_skin_tone_segment_c1_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C1_0_reg);
	icm_d_icm_skin_tone_segment_c1_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C1_1_reg);
	icm_d_icm_skin_tone_segment_c2_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C2_0_reg);
	icm_d_icm_skin_tone_segment_c2_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C2_1_reg);
	icm_d_icm_skin_tone_segment_c3_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C3_0_reg);
	icm_d_icm_skin_tone_segment_c3_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C3_1_reg);
	icm_d_icm_skin_tone_segment_c4_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C4_0_reg);
	icm_d_icm_skin_tone_segment_c4_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C4_1_reg);
	icm_d_icm_skin_tone_segment_c5_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C5_0_reg);
	icm_d_icm_skin_tone_segment_c5_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C5_1_reg);
	icm_d_icm_ai_0_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_0_reg);
	icm_d_icm_ai_1_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_1_reg);
	icm_d_icm_ai_2_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_2_reg);
	icm_d_icm_ai_3_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_3_reg);
	icm_d_icm_ai_4_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_4_reg);
	icm_d_icm_ai_5_reg.regValue = IoReg_Read32(COLOR_ICM_D_ICM_AI_5_reg);

	// lesley 0815
	color_icm_dm_icm_ctrl_reg.regValue = IoReg_Read32(COLOR_ICM_DM_ICM_CTRL_reg);
	// end lesley 0815

	icm_d_icm_ai_offset_0_reg.ai_i_offset0	=	ptr->ai_ioffsetcdRatio0.ai_i_offset0;
	icm_d_icm_ai_offset_0_reg.ai_s_offset0	=	ptr->ai_uvRangHoffset.ai_s_offset0;
	icm_d_icm_ai_offset_1_reg.ai_h_offset0	=	ptr->ai_uvRangHoffset.ai_h_offset0;

	icm_d_icm_ai_offset_2_reg.ai_i_offset1	=	ptr->ai_ioffsetcdRatio0.ai_i_offset1;
	icm_d_icm_ai_offset_2_reg.ai_s_offset1	=	ptr->ai_uvRangHoffset.ai_s_offset1;
	icm_d_icm_ai_offset_3_reg.ai_h_offset1	=	ptr->ai_uvRangHoffset.ai_h_offset1;

	icm_d_icm_ai_offset_4_reg.ai_i_offset2	=	ptr->ai_ioffsetcdRatio0.ai_i_offset2;
	icm_d_icm_ai_offset_4_reg.ai_s_offset2	=	ptr->ai_uvRangHoffset.ai_s_offset2;
	icm_d_icm_ai_offset_5_reg.ai_h_offset2	=	ptr->ai_uvRangHoffset.ai_h_offset2;

	icm_d_icm_ai_offset_6_reg.ai_i_offset3	=	ptr->ai_ioffsetcdRatio0.ai_i_offset3;
	icm_d_icm_ai_offset_6_reg.ai_s_offset3	=	ptr->ai_uvRangHoffset.ai_s_offset3;
	icm_d_icm_ai_offset_7_reg.ai_h_offset3	=	ptr->ai_uvRangHoffset.ai_h_offset3;

	icm_d_icm_ai_offset_8_reg.ai_i_offset4	=	ptr->ai_ioffsetcdRatio0.ai_i_offset4;
	icm_d_icm_ai_offset_8_reg.ai_s_offset4	=	ptr->ai_uvRangHoffset.ai_s_offset4;
	icm_d_icm_ai_offset_9_reg.ai_h_offset4	=	ptr->ai_uvRangHoffset.ai_h_offset4;

	icm_d_icm_ai_offset_10_reg.ai_i_offset5	=	ptr->ai_ioffsetcdRatio0.ai_i_offset5;
	icm_d_icm_ai_offset_10_reg.ai_s_offset5	=	ptr->ai_uvRangHoffset.ai_s_offset5;
	icm_d_icm_ai_offset_11_reg.ai_h_offset5	=	ptr->ai_uvRangHoffset.ai_h_offset5;

	icm_d_icm_ai_6_reg.ai_adjust_en		=	ptr->ai_global.AI_adjust_en;
	icm_d_icm_ai_6_reg.ai_detect_value	=	ptr->ai_global.AI_detect_value;
	icm_d_icm_ai_6_reg.ai_control_value	=	ptr->ai_global.AI_control_value;
	icm_d_icm_ai_0_reg.ai_ros_en		= 	ptr->ai_global.AI_ros_en;

	icm_d_icm_ai_7_reg.ai_octa_tang_dir0	=	ptr->ai_global.ai_octa_tang_dir0;
	icm_d_icm_ai_7_reg.ai_octa_tang_dir1	=	ptr->ai_global.ai_octa_tang_dir1;
	icm_d_icm_ai_7_reg.ai_octa_tang_dir2	=	ptr->ai_global.ai_octa_tang_dir2;
	icm_d_icm_ai_7_reg.ai_octa_tang_dir3	=	ptr->ai_global.ai_octa_tang_dir3;
	icm_d_icm_ai_7_reg.ai_octa_tang_dir4	=	ptr->ai_global.ai_octa_tang_dir4;
	icm_d_icm_ai_7_reg.ai_octa_tang_dir5	=	ptr->ai_global.ai_octa_tang_dir5;

	icm_d_icm_ai_7_reg.ai_octa_tang_mode0	=	ptr->ai_global.ai_octa_tang_mode0;
	icm_d_icm_ai_7_reg.ai_octa_tang_mode1	=	ptr->ai_global.ai_octa_tang_mode1;
	icm_d_icm_ai_7_reg.ai_octa_tang_mode2	=	ptr->ai_global.ai_octa_tang_mode2;
	icm_d_icm_ai_7_reg.ai_octa_tang_mode3	=	ptr->ai_global.ai_octa_tang_mode3;
	icm_d_icm_ai_7_reg.ai_octa_tang_mode4	=	ptr->ai_global.ai_octa_tang_mode4;
	icm_d_icm_ai_7_reg.ai_octa_tang_mode5	=	ptr->ai_global.ai_octa_tang_mode5;

	icm_d_icm_cds_skin_0_reg.cds_skin_en= ptr->ai_global.CDS_skin_en;
	icm_d_icm_cds_skin_1_reg.cds_uv_range_0= ptr->ai_uvRangHoffset.cds_uv_range_0;
	icm_d_icm_cds_skin_1_reg.cds_uv_range_1= ptr->ai_uvRangHoffset.cds_uv_range_1;
	icm_d_icm_cds_skin_2_reg.cds_uv_range_2= ptr->ai_uvRangHoffset.cds_uv_range_2;
	icm_d_icm_cds_skin_2_reg.cds_uv_range_3= ptr->ai_uvRangHoffset.cds_uv_range_3;
	icm_d_icm_cds_skin_3_reg.cds_uv_range_4= ptr->ai_uvRangHoffset.cds_uv_range_4;
	icm_d_icm_cds_skin_3_reg.cds_uv_range_5= ptr->ai_uvRangHoffset.cds_uv_range_5;

	icm_d_icm_skin_tone_segment_c0_0_reg.c_blending_0_ratio_0= ptr->ai_ioffsetcdRatio0.c_blending_0_ratio_0;
	icm_d_icm_skin_tone_segment_c0_0_reg.c_blending_0_ratio_1= ptr->ai_ioffsetcdRatio0.c_blending_0_ratio_1;
	icm_d_icm_skin_tone_segment_c0_0_reg.c_blending_0_ratio_2= ptr->ai_ioffsetcdRatio0.c_blending_0_ratio_2;
	icm_d_icm_skin_tone_segment_c0_0_reg.c_blending_0_ratio_3= ptr->ai_ioffsetcdRatio0.c_blending_0_ratio_3;

	icm_d_icm_skin_tone_segment_c0_1_reg.c_blending_0_ratio_4= ptr->ai_ioffsetcdRatio0.c_blending_0_ratio_4;
	icm_d_icm_skin_tone_segment_c0_1_reg.c_blending_0_ratio_5= ptr->ai_ioffsetcdRatio0.c_blending_0_ratio_5;
	icm_d_icm_skin_tone_segment_c0_1_reg.c_blending_0_ratio_6= ptr->ai_ioffsetcdRatio0.c_blending_0_ratio_6;
	icm_d_icm_skin_tone_segment_c0_1_reg.c_blending_0_ratio_7= ptr->ai_ioffsetcdRatio0.c_blending_0_ratio_7;

	icm_d_icm_skin_tone_segment_c1_0_reg.c_blending_1_ratio_0= ptr->ai_cdRatio12.c_blending_1_ratio_0;
	icm_d_icm_skin_tone_segment_c1_0_reg.c_blending_1_ratio_1= ptr->ai_cdRatio12.c_blending_1_ratio_1;
	icm_d_icm_skin_tone_segment_c1_0_reg.c_blending_1_ratio_2= ptr->ai_cdRatio12.c_blending_1_ratio_2;
	icm_d_icm_skin_tone_segment_c1_0_reg.c_blending_1_ratio_3= ptr->ai_cdRatio12.c_blending_1_ratio_3;

	icm_d_icm_skin_tone_segment_c1_1_reg.c_blending_1_ratio_4= ptr->ai_cdRatio12.c_blending_1_ratio_4;
	icm_d_icm_skin_tone_segment_c1_1_reg.c_blending_1_ratio_5= ptr->ai_cdRatio12.c_blending_1_ratio_5;
	icm_d_icm_skin_tone_segment_c1_1_reg.c_blending_1_ratio_6= ptr->ai_cdRatio12.c_blending_1_ratio_6;
	icm_d_icm_skin_tone_segment_c1_1_reg.c_blending_1_ratio_7= ptr->ai_cdRatio12.c_blending_1_ratio_7;

	icm_d_icm_skin_tone_segment_c2_0_reg.c_blending_2_ratio_0= ptr->ai_cdRatio12.c_blending_2_ratio_0;
	icm_d_icm_skin_tone_segment_c2_0_reg.c_blending_2_ratio_1= ptr->ai_cdRatio12.c_blending_2_ratio_1;
	icm_d_icm_skin_tone_segment_c2_0_reg.c_blending_2_ratio_2= ptr->ai_cdRatio12.c_blending_2_ratio_2;
	icm_d_icm_skin_tone_segment_c2_0_reg.c_blending_2_ratio_3= ptr->ai_cdRatio12.c_blending_2_ratio_3;

	icm_d_icm_skin_tone_segment_c2_1_reg.c_blending_2_ratio_4= ptr->ai_cdRatio12.c_blending_2_ratio_4;
	icm_d_icm_skin_tone_segment_c2_1_reg.c_blending_2_ratio_5= ptr->ai_cdRatio12.c_blending_2_ratio_5;
	icm_d_icm_skin_tone_segment_c2_1_reg.c_blending_2_ratio_6= ptr->ai_cdRatio12.c_blending_2_ratio_6;
	icm_d_icm_skin_tone_segment_c2_1_reg.c_blending_2_ratio_7= ptr->ai_cdRatio12.c_blending_2_ratio_7;

	icm_d_icm_skin_tone_segment_c3_0_reg.c_blending_3_ratio_0= ptr->ai_cdRatio34.c_blending_3_ratio_0;
	icm_d_icm_skin_tone_segment_c3_0_reg.c_blending_3_ratio_1= ptr->ai_cdRatio34.c_blending_3_ratio_1;
	icm_d_icm_skin_tone_segment_c3_0_reg.c_blending_3_ratio_2= ptr->ai_cdRatio34.c_blending_3_ratio_2;
	icm_d_icm_skin_tone_segment_c3_0_reg.c_blending_3_ratio_3= ptr->ai_cdRatio34.c_blending_3_ratio_3;

	icm_d_icm_skin_tone_segment_c3_1_reg.c_blending_3_ratio_4= ptr->ai_cdRatio34.c_blending_3_ratio_4;
	icm_d_icm_skin_tone_segment_c3_1_reg.c_blending_3_ratio_5= ptr->ai_cdRatio34.c_blending_3_ratio_5;
	icm_d_icm_skin_tone_segment_c3_1_reg.c_blending_3_ratio_6= ptr->ai_cdRatio34.c_blending_3_ratio_6;
	icm_d_icm_skin_tone_segment_c3_1_reg.c_blending_3_ratio_7= ptr->ai_cdRatio34.c_blending_3_ratio_7;

	icm_d_icm_skin_tone_segment_c4_0_reg.c_blending_4_ratio_0= ptr->ai_cdRatio34.c_blending_4_ratio_0;
	icm_d_icm_skin_tone_segment_c4_0_reg.c_blending_4_ratio_1= ptr->ai_cdRatio34.c_blending_4_ratio_1;
	icm_d_icm_skin_tone_segment_c4_0_reg.c_blending_4_ratio_2= ptr->ai_cdRatio34.c_blending_4_ratio_2;
	icm_d_icm_skin_tone_segment_c4_0_reg.c_blending_4_ratio_3= ptr->ai_cdRatio34.c_blending_4_ratio_3;

	icm_d_icm_skin_tone_segment_c4_1_reg.c_blending_4_ratio_4= ptr->ai_cdRatio34.c_blending_4_ratio_4;
	icm_d_icm_skin_tone_segment_c4_1_reg.c_blending_4_ratio_5= ptr->ai_cdRatio34.c_blending_4_ratio_5;
	icm_d_icm_skin_tone_segment_c4_1_reg.c_blending_4_ratio_6= ptr->ai_cdRatio34.c_blending_4_ratio_6;
	icm_d_icm_skin_tone_segment_c4_1_reg.c_blending_4_ratio_7= ptr->ai_cdRatio34.c_blending_4_ratio_7;

	icm_d_icm_skin_tone_segment_c5_0_reg.c_blending_5_ratio_0= ptr->ai_cdRatio5aiRatio0.c_blending_5_ratio_0;
	icm_d_icm_skin_tone_segment_c5_0_reg.c_blending_5_ratio_1= ptr->ai_cdRatio5aiRatio0.c_blending_5_ratio_1;
	icm_d_icm_skin_tone_segment_c5_0_reg.c_blending_5_ratio_2= ptr->ai_cdRatio5aiRatio0.c_blending_5_ratio_2;
	icm_d_icm_skin_tone_segment_c5_0_reg.c_blending_5_ratio_3= ptr->ai_cdRatio5aiRatio0.c_blending_5_ratio_3;

	icm_d_icm_skin_tone_segment_c5_1_reg.c_blending_5_ratio_4= ptr->ai_cdRatio5aiRatio0.c_blending_5_ratio_4;
	icm_d_icm_skin_tone_segment_c5_1_reg.c_blending_5_ratio_5= ptr->ai_cdRatio5aiRatio0.c_blending_5_ratio_5;
	icm_d_icm_skin_tone_segment_c5_1_reg.c_blending_5_ratio_6= ptr->ai_cdRatio5aiRatio0.c_blending_5_ratio_6;
	icm_d_icm_skin_tone_segment_c5_1_reg.c_blending_5_ratio_7= ptr->ai_cdRatio5aiRatio0.c_blending_5_ratio_7;

	// lesley 0815
	color_icm_dm_icm_ctrl_reg.ai_inside_ratio0_bit5 = (ptr->ai_cdRatio5aiRatio0.ai_blending_0_inside_ratio)>>5;
	icm_d_icm_ai_0_reg.ai_blending_0_inside_ratio= (ptr->ai_cdRatio5aiRatio0.ai_blending_0_inside_ratio)&0x1f;
	// end lesley 0815
	icm_d_icm_ai_0_reg.ai_blending_0_ratio_0= ptr->ai_cdRatio5aiRatio0.ai_blending_0_ratio_0;
	icm_d_icm_ai_0_reg.ai_blending_0_ratio_1= ptr->ai_cdRatio5aiRatio0.ai_blending_0_ratio_1;
	icm_d_icm_ai_0_reg.ai_blending_0_ratio_2= ptr->ai_cdRatio5aiRatio0.ai_blending_0_ratio_2;
	icm_d_icm_ai_0_reg.ai_blending_0_ratio_3= ptr->ai_cdRatio5aiRatio0.ai_blending_0_ratio_3;

	// lesley 0815
	color_icm_dm_icm_ctrl_reg.ai_inside_ratio1_bit5 = (ptr->ai_cdRatio5aiRatio0.ai_blending_1_inside_ratio)>>5;
	icm_d_icm_ai_1_reg.ai_blending_1_inside_ratio= (ptr->ai_cdRatio5aiRatio0.ai_blending_1_inside_ratio)&0x1f;
	// end lesley 0815
	icm_d_icm_ai_1_reg.ai_blending_1_ratio_0= ptr->ai_icm_ratio15.ai_blending_1_ratio_0;
	icm_d_icm_ai_1_reg.ai_blending_1_ratio_1= ptr->ai_icm_ratio15.ai_blending_1_ratio_1;
	icm_d_icm_ai_1_reg.ai_blending_1_ratio_2= ptr->ai_icm_ratio15.ai_blending_1_ratio_2;
	icm_d_icm_ai_1_reg.ai_blending_1_ratio_3= ptr->ai_icm_ratio15.ai_blending_1_ratio_3;

	// lesley 0815
	color_icm_dm_icm_ctrl_reg.ai_inside_ratio2_bit5 = (ptr->ai_cdRatio5aiRatio0.ai_blending_2_inside_ratio)>>5;
	icm_d_icm_ai_2_reg.ai_blending_2_inside_ratio= (ptr->ai_cdRatio5aiRatio0.ai_blending_2_inside_ratio)&0x1f;
	// end lesley 0815
	icm_d_icm_ai_2_reg.ai_blending_2_ratio_0= ptr->ai_icm_ratio15.ai_blending_2_ratio_0;
	icm_d_icm_ai_2_reg.ai_blending_2_ratio_1= ptr->ai_icm_ratio15.ai_blending_2_ratio_1;
	icm_d_icm_ai_2_reg.ai_blending_2_ratio_2= ptr->ai_icm_ratio15.ai_blending_2_ratio_2;
	icm_d_icm_ai_2_reg.ai_blending_2_ratio_3= ptr->ai_icm_ratio15.ai_blending_2_ratio_3;

	// lesley 0815
	color_icm_dm_icm_ctrl_reg.ai_inside_ratio3_bit5 = (ptr->ai_cdRatio5aiRatio0.ai_blending_3_inside_ratio)>>5;
	icm_d_icm_ai_3_reg.ai_blending_3_inside_ratio= (ptr->ai_cdRatio5aiRatio0.ai_blending_3_inside_ratio)&0x1f;
	// end lesley 0815
	icm_d_icm_ai_3_reg.ai_blending_3_ratio_0= ptr->ai_icm_ratio15.ai_blending_3_ratio_0;
	icm_d_icm_ai_3_reg.ai_blending_3_ratio_1= ptr->ai_icm_ratio15.ai_blending_3_ratio_1;
	icm_d_icm_ai_3_reg.ai_blending_3_ratio_2= ptr->ai_icm_ratio15.ai_blending_3_ratio_2;
	icm_d_icm_ai_3_reg.ai_blending_3_ratio_3= ptr->ai_icm_ratio15.ai_blending_3_ratio_3;

	// lesley 0815
	color_icm_dm_icm_ctrl_reg.ai_inside_ratio4_bit5 = (ptr->ai_cdRatio5aiRatio0.ai_blending_4_inside_ratio)>>5;
	icm_d_icm_ai_4_reg.ai_blending_4_inside_ratio= (ptr->ai_cdRatio5aiRatio0.ai_blending_4_inside_ratio)&0x1f;
	// end lesley 0815
	icm_d_icm_ai_4_reg.ai_blending_4_ratio_0= ptr->ai_icm_ratio15.ai_blending_4_ratio_0;
	icm_d_icm_ai_4_reg.ai_blending_4_ratio_1= ptr->ai_icm_ratio15.ai_blending_4_ratio_1;
	icm_d_icm_ai_4_reg.ai_blending_4_ratio_2= ptr->ai_icm_ratio15.ai_blending_4_ratio_2;
	icm_d_icm_ai_4_reg.ai_blending_4_ratio_3= ptr->ai_icm_ratio15.ai_blending_4_ratio_3;

	// lesley 0815
	color_icm_dm_icm_ctrl_reg.ai_inside_ratio5_bit5 = (ptr->ai_cdRatio5aiRatio0.ai_blending_5_inside_ratio)>>5;
	icm_d_icm_ai_5_reg.ai_blending_5_inside_ratio= (ptr->ai_cdRatio5aiRatio0.ai_blending_5_inside_ratio)&0x1f;
	// end lesley 0815
	icm_d_icm_ai_5_reg.ai_blending_5_ratio_0= ptr->ai_icm_ratio15.ai_blending_5_ratio_0;
	icm_d_icm_ai_5_reg.ai_blending_5_ratio_1= ptr->ai_icm_ratio15.ai_blending_5_ratio_1;
	icm_d_icm_ai_5_reg.ai_blending_5_ratio_2= ptr->ai_icm_ratio15.ai_blending_5_ratio_2;
	icm_d_icm_ai_5_reg.ai_blending_5_ratio_3= ptr->ai_icm_ratio15.ai_blending_5_ratio_3;

	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_0_reg,icm_d_icm_ai_offset_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_1_reg,icm_d_icm_ai_offset_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_2_reg,icm_d_icm_ai_offset_2_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_3_reg,icm_d_icm_ai_offset_3_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_4_reg,icm_d_icm_ai_offset_4_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_5_reg,icm_d_icm_ai_offset_5_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_6_reg,icm_d_icm_ai_offset_6_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_7_reg,icm_d_icm_ai_offset_7_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_8_reg,icm_d_icm_ai_offset_8_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_9_reg,icm_d_icm_ai_offset_9_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_10_reg,icm_d_icm_ai_offset_10_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_OFFSET_11_reg,icm_d_icm_ai_offset_11_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_6_reg,icm_d_icm_ai_6_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_7_reg,icm_d_icm_ai_7_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_CDS_SKIN_0_reg,icm_d_icm_cds_skin_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_CDS_SKIN_1_reg,icm_d_icm_cds_skin_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_CDS_SKIN_2_reg,icm_d_icm_cds_skin_2_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_CDS_SKIN_3_reg,icm_d_icm_cds_skin_3_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C0_0_reg,icm_d_icm_skin_tone_segment_c0_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C0_1_reg,icm_d_icm_skin_tone_segment_c0_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C1_0_reg,icm_d_icm_skin_tone_segment_c1_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C1_1_reg,icm_d_icm_skin_tone_segment_c1_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C2_0_reg,icm_d_icm_skin_tone_segment_c2_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C2_1_reg,icm_d_icm_skin_tone_segment_c2_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C3_0_reg,icm_d_icm_skin_tone_segment_c3_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C3_1_reg,icm_d_icm_skin_tone_segment_c3_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C4_0_reg,icm_d_icm_skin_tone_segment_c4_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C4_1_reg,icm_d_icm_skin_tone_segment_c4_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C5_0_reg,icm_d_icm_skin_tone_segment_c5_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_SKIN_TONE_SEGMENT_C5_1_reg,icm_d_icm_skin_tone_segment_c5_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_0_reg,icm_d_icm_ai_0_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_1_reg,icm_d_icm_ai_1_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_2_reg,icm_d_icm_ai_2_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_3_reg,icm_d_icm_ai_3_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_4_reg,icm_d_icm_ai_4_reg.regValue);
	IoReg_Write32(COLOR_ICM_D_ICM_AI_5_reg,icm_d_icm_ai_5_reg.regValue);


	// lesley 0815
	IoReg_Write32(COLOR_ICM_DM_ICM_CTRL_reg,color_icm_dm_icm_ctrl_reg.regValue);
	// end lesley 0815

}

// for face dcc init default table
void drvif_color_AI_DCC_table_set(AI_DCC_Ctrl_table *ptr1, CDS_skin_DCC_Ctrl_table *ptr2)
{
	color_dcc_d_dcc_ai_0_RBUS	dcc_d_dcc_ai_0_reg;
	color_dcc_d_dcc_ai_1_RBUS	dcc_d_dcc_ai_1_reg;
	color_dcc_d_dcc_ai_2_RBUS	dcc_d_dcc_ai_2_reg;
	color_dcc_d_dcc_ai_3_RBUS	dcc_d_dcc_ai_3_reg;
	color_dcc_d_dcc_ai_4_RBUS	dcc_d_dcc_ai_4_reg;
	color_dcc_d_dcc_ai_5_RBUS	dcc_d_dcc_ai_5_reg;
	color_dcc_d_dcc_ai_6_RBUS	dcc_d_dcc_ai_6_reg;


	color_dcc_d_dcc_ai_7_RBUS    dcc_d_dcc_ai_7_reg;
	color_dcc_d_dcc_ai_8_RBUS	 dcc_d_dcc_ai_8_reg;
	color_dcc_d_dcc_ai_9_RBUS	 dcc_d_dcc_ai_9_reg;

	color_dcc_d_dcc_ai_10_RBUS	dcc_d_dcc_ai_10_reg;
	color_dcc_d_dcc_ai_11_RBUS	dcc_d_dcc_ai_11_reg;
	color_dcc_d_dcc_ai_12_RBUS	dcc_d_dcc_ai_12_reg;
	color_dcc_d_dcc_ai_13_RBUS	dcc_d_dcc_ai_13_reg;
	color_dcc_d_dcc_ai_14_RBUS	dcc_d_dcc_ai_14_reg;
	color_dcc_d_dcc_ai_15_RBUS	dcc_d_dcc_ai_15_reg;
	color_dcc_d_dcc_ai_16_RBUS	dcc_d_dcc_ai_16_reg;
	color_dcc_d_dcc_ai_17_RBUS	dcc_d_dcc_ai_17_reg;
	color_dcc_d_dcc_ai_18_RBUS	dcc_d_dcc_ai_18_reg;
	color_dcc_d_dcc_ai_19_RBUS	dcc_d_dcc_ai_19_reg;
	color_dcc_d_dcc_ai_20_RBUS	dcc_d_dcc_ai_20_reg;
	color_dcc_d_dcc_ai_21_RBUS	dcc_d_dcc_ai_21_reg;

	color_dcc_d_dcc_skin_tone_segment_c0_0_RBUS dcc_d_dcc_skin_tone_segment_c0_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c0_1_RBUS dcc_d_dcc_skin_tone_segment_c0_1_reg;
	color_dcc_d_dcc_skin_tone_segment_c1_0_RBUS dcc_d_dcc_skin_tone_segment_c1_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c1_1_RBUS dcc_d_dcc_skin_tone_segment_c1_1_reg;
	color_dcc_d_dcc_skin_tone_segment_c2_0_RBUS dcc_d_dcc_skin_tone_segment_c2_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c2_1_RBUS dcc_d_dcc_skin_tone_segment_c2_1_reg;
	color_dcc_d_dcc_skin_tone_segment_c3_0_RBUS dcc_d_dcc_skin_tone_segment_c3_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c3_1_RBUS dcc_d_dcc_skin_tone_segment_c3_1_reg;
	color_dcc_d_dcc_skin_tone_segment_c4_0_RBUS dcc_d_dcc_skin_tone_segment_c4_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c4_1_RBUS dcc_d_dcc_skin_tone_segment_c4_1_reg;
	color_dcc_d_dcc_skin_tone_segment_c5_0_RBUS dcc_d_dcc_skin_tone_segment_c5_0_reg;
	color_dcc_d_dcc_skin_tone_segment_c5_1_RBUS dcc_d_dcc_skin_tone_segment_c5_1_reg;

       color_dcc_d_dcc_skin_tone_en_RBUS d_dcc_skin_tone_en_reg;
	//color_dcc_d_dcc_cds_skin_0_RBUS color_dcc_d_dcc_cds_skin_0_reg; //cds en
	color_dcc_d_dcc_cds_skin_1_RBUS color_dcc_d_dcc_cds_skin_1_reg;
	color_dcc_d_dcc_cds_skin_2_RBUS color_dcc_d_dcc_cds_skin_2_reg;
 	color_dcc_d_dcc_cds_skin_3_RBUS color_dcc_d_dcc_cds_skin_3_reg;

	// lesley 0815
	color_dcc_d_dcc_ctrl_RBUS color_dcc_d_dcc_ctrl_reg;
	// end lesley 0815

	// lesley 0815
	color_dcc_d_dcc_ctrl_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_CTRL_reg);
	// end lesley 0815

	color_dcc_d_dcc_cds_skin_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_CDS_SKIN_1_reg  );
	color_dcc_d_dcc_cds_skin_2_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_CDS_SKIN_2_reg   );
	color_dcc_d_dcc_cds_skin_3_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_CDS_SKIN_3_reg   );
	d_dcc_skin_tone_en_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_EN_reg);

	dcc_d_dcc_ai_0_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_0_reg);
	dcc_d_dcc_ai_1_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_1_reg);
	dcc_d_dcc_ai_2_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_2_reg);
	dcc_d_dcc_ai_3_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_3_reg);
	dcc_d_dcc_ai_4_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_4_reg);
	dcc_d_dcc_ai_5_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_5_reg);

	dcc_d_dcc_ai_6_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_6_reg);


	dcc_d_dcc_ai_7_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_7_reg);
	dcc_d_dcc_ai_8_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_8_reg);
	dcc_d_dcc_ai_9_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_9_reg);

	dcc_d_dcc_ai_10_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_10_reg);
	dcc_d_dcc_ai_11_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_11_reg);
	dcc_d_dcc_ai_12_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_12_reg);
	dcc_d_dcc_ai_13_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_13_reg);
	dcc_d_dcc_ai_14_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_14_reg);
	dcc_d_dcc_ai_15_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_15_reg);
	dcc_d_dcc_ai_16_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_16_reg);
	dcc_d_dcc_ai_17_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_17_reg);
	dcc_d_dcc_ai_18_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_18_reg);
	dcc_d_dcc_ai_19_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_19_reg);
	dcc_d_dcc_ai_20_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_20_reg);
	dcc_d_dcc_ai_21_reg.regValue = IoReg_Read32(COLOR_DCC_D_DCC_AI_21_reg);


	dcc_d_dcc_skin_tone_segment_c0_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg);
	dcc_d_dcc_skin_tone_segment_c0_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg);
	dcc_d_dcc_skin_tone_segment_c1_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg);
	dcc_d_dcc_skin_tone_segment_c1_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg);
	dcc_d_dcc_skin_tone_segment_c2_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg);
	dcc_d_dcc_skin_tone_segment_c2_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg);
	dcc_d_dcc_skin_tone_segment_c3_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg);
	dcc_d_dcc_skin_tone_segment_c3_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg);
	dcc_d_dcc_skin_tone_segment_c4_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg);
	dcc_d_dcc_skin_tone_segment_c4_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg);
	dcc_d_dcc_skin_tone_segment_c5_0_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg);
	dcc_d_dcc_skin_tone_segment_c5_1_reg.regValue=IoReg_Read32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg);

        if (ptr1==NULL||ptr2==NULL)
                return;

	//global  settings
	dcc_d_dcc_ai_0_reg.ai_ros_en = ptr1->dcc_ai_global.AI_ros_en ;
	dcc_d_dcc_ai_6_reg.ai_adjust_en = ptr1->dcc_ai_global.AI_adjust_en;
	dcc_d_dcc_ai_6_reg.ai_detect_value = 	ptr1->dcc_ai_global.AI_detect_value;
        dcc_d_dcc_ai_6_reg.ai_control_value =  ptr1->dcc_ai_global.AI_control_value;
        d_dcc_skin_tone_en_reg.y_blending_0_enhance_en = ptr2->dcc_cds_skin_face0_info.region0_enhance_en;
        d_dcc_skin_tone_en_reg.y_blending_1_enhance_en = ptr2->dcc_cds_skin_face1_info.region1_enhance_en;
        d_dcc_skin_tone_en_reg.y_blending_2_enhance_en = ptr2->dcc_cds_skin_face2_info.region2_enhance_en;
        d_dcc_skin_tone_en_reg.y_blending_3_enhance_en = ptr2->dcc_cds_skin_face3_info.region3_enhance_en;
        d_dcc_skin_tone_en_reg.y_blending_4_enhance_en = ptr2->dcc_cds_skin_face4_info.region4_enhance_en;
        d_dcc_skin_tone_en_reg.y_blending_5_enhance_en = ptr2->dcc_cds_skin_face5_info.region5_enhance_en;

	//face 0
	dcc_d_dcc_ai_10_reg.ai_center_x_0 = ptr1->dcc_ai_face0_info.ai_x_center_0;
	dcc_d_dcc_ai_10_reg.ai_center_y_0 = ptr1->dcc_ai_face0_info.ai_y_center_0;
	dcc_d_dcc_ai_7_reg.ai_range_0 = ptr1->dcc_ai_face0_info.ai_range_0;

	// lesley 0815
	color_dcc_d_dcc_ctrl_reg.ai_blending_0_inside_ratio_msb = (ptr1->dcc_ai_face0_info.ai_blending_0_inside_ratio)>>5;
	dcc_d_dcc_ai_0_reg.ai_blending_0_inside_ratio= (ptr1->dcc_ai_face0_info.ai_blending_0_inside_ratio)&0x1f;
	// end lesley 0815
	dcc_d_dcc_ai_0_reg.ai_blending_0_ratio_0	 =   ptr1->dcc_ai_face0_info.ai_blending_0_ratio_0;
	dcc_d_dcc_ai_0_reg.ai_blending_0_ratio_1	 =   ptr1->dcc_ai_face0_info.ai_blending_0_ratio_1;
	dcc_d_dcc_ai_0_reg.ai_blending_0_ratio_2	 =   ptr1->dcc_ai_face0_info.ai_blending_0_ratio_2;
	dcc_d_dcc_ai_0_reg.ai_blending_0_ratio_3	 =   ptr1->dcc_ai_face0_info.ai_blending_0_ratio_3;
        dcc_d_dcc_ai_6_reg.ai_octa_tang_mode0       =   ptr1->dcc_ai_face0_info.ai_octa_tang_mode0;
	dcc_d_dcc_ai_8_reg.ai_octa_tang_dir0          	 =   ptr1->dcc_ai_face0_info.ai_octa_tang_dir0;

	dcc_d_dcc_ai_16_reg.ai_center_u_0 = ptr2->dcc_cds_skin_face0_info.cds_u_center_0;
	dcc_d_dcc_ai_16_reg.ai_center_v_0 = ptr2->dcc_cds_skin_face0_info.cds_v_center_0;
	color_dcc_d_dcc_cds_skin_1_reg.cds_uv_range_0 = ptr2->dcc_cds_skin_face0_info.cds_uv_range_0;
	dcc_d_dcc_skin_tone_segment_c0_0_reg.c_blending_0_ratio_0=ptr2->dcc_cds_skin_face0_info.c_blending_0_ratio_0;
	dcc_d_dcc_skin_tone_segment_c0_0_reg.c_blending_0_ratio_1=ptr2->dcc_cds_skin_face0_info.c_blending_0_ratio_1;
	dcc_d_dcc_skin_tone_segment_c0_0_reg.c_blending_0_ratio_2=ptr2->dcc_cds_skin_face0_info.c_blending_0_ratio_2;
	dcc_d_dcc_skin_tone_segment_c0_0_reg.c_blending_0_ratio_3=ptr2->dcc_cds_skin_face0_info.c_blending_0_ratio_3;
	dcc_d_dcc_skin_tone_segment_c0_1_reg.c_blending_0_ratio_4=ptr2->dcc_cds_skin_face0_info.c_blending_0_ratio_4;
	dcc_d_dcc_skin_tone_segment_c0_1_reg.c_blending_0_ratio_5=ptr2->dcc_cds_skin_face0_info.c_blending_0_ratio_5;
	dcc_d_dcc_skin_tone_segment_c0_1_reg.c_blending_0_ratio_6=ptr2->dcc_cds_skin_face0_info.c_blending_0_ratio_6;
	dcc_d_dcc_skin_tone_segment_c0_1_reg.c_blending_0_ratio_7=ptr2->dcc_cds_skin_face0_info.c_blending_0_ratio_7;
        //face 1
	dcc_d_dcc_ai_11_reg.ai_center_x_1 = ptr1->dcc_ai_face1_info.ai_x_center_1;
	dcc_d_dcc_ai_11_reg.ai_center_y_1 = ptr1->dcc_ai_face1_info.ai_y_center_1;
	dcc_d_dcc_ai_7_reg.ai_range_1 = ptr1->dcc_ai_face1_info.ai_range_1;
	// lesley 0815
	color_dcc_d_dcc_ctrl_reg.ai_blending_1_inside_ratio_msb = (ptr1->dcc_ai_face1_info.ai_blending_1_inside_ratio)>>5;
	dcc_d_dcc_ai_1_reg.ai_blending_1_inside_ratio= (ptr1->dcc_ai_face1_info.ai_blending_1_inside_ratio)&0x1f;
	// end lesley 0815
	dcc_d_dcc_ai_1_reg.ai_blending_1_ratio_0	 = ptr1->dcc_ai_face1_info.ai_blending_1_ratio_0;
	dcc_d_dcc_ai_1_reg.ai_blending_1_ratio_1	 = ptr1->dcc_ai_face1_info.ai_blending_1_ratio_1;
	dcc_d_dcc_ai_1_reg.ai_blending_1_ratio_2	 = ptr1->dcc_ai_face1_info.ai_blending_1_ratio_2;
	dcc_d_dcc_ai_1_reg.ai_blending_1_ratio_3	 = ptr1->dcc_ai_face1_info.ai_blending_1_ratio_3;
        dcc_d_dcc_ai_6_reg.ai_octa_tang_mode1       =   ptr1->dcc_ai_face1_info.ai_octa_tang_mode1;
	dcc_d_dcc_ai_8_reg.ai_octa_tang_dir1          	 =   ptr1->dcc_ai_face1_info.ai_octa_tang_dir1;

	dcc_d_dcc_ai_17_reg.ai_center_u_1 = ptr2->dcc_cds_skin_face1_info.cds_u_center_1;
	dcc_d_dcc_ai_17_reg.ai_center_v_1 = ptr2->dcc_cds_skin_face1_info.cds_v_center_1;
	color_dcc_d_dcc_cds_skin_1_reg.cds_uv_range_1 = ptr2->dcc_cds_skin_face1_info.cds_uv_range_1;
	dcc_d_dcc_skin_tone_segment_c1_0_reg.c_blending_1_ratio_0=ptr2->dcc_cds_skin_face1_info.c_blending_1_ratio_0;
	dcc_d_dcc_skin_tone_segment_c1_0_reg.c_blending_1_ratio_1=ptr2->dcc_cds_skin_face1_info.c_blending_1_ratio_1;
	dcc_d_dcc_skin_tone_segment_c1_0_reg.c_blending_1_ratio_2=ptr2->dcc_cds_skin_face1_info.c_blending_1_ratio_2;
	dcc_d_dcc_skin_tone_segment_c1_0_reg.c_blending_1_ratio_3=ptr2->dcc_cds_skin_face1_info.c_blending_1_ratio_3;
	dcc_d_dcc_skin_tone_segment_c1_1_reg.c_blending_1_ratio_4=ptr2->dcc_cds_skin_face1_info.c_blending_1_ratio_4;
	dcc_d_dcc_skin_tone_segment_c1_1_reg.c_blending_1_ratio_5=ptr2->dcc_cds_skin_face1_info.c_blending_1_ratio_5;
	dcc_d_dcc_skin_tone_segment_c1_1_reg.c_blending_1_ratio_6=ptr2->dcc_cds_skin_face1_info.c_blending_1_ratio_6;
	dcc_d_dcc_skin_tone_segment_c1_1_reg.c_blending_1_ratio_7=ptr2->dcc_cds_skin_face1_info.c_blending_1_ratio_7;
	//face2
	dcc_d_dcc_ai_12_reg.ai_center_x_2 = ptr1->dcc_ai_face2_info.ai_x_center_2;
	dcc_d_dcc_ai_12_reg.ai_center_y_2 = ptr1->dcc_ai_face2_info.ai_y_center_2;
	dcc_d_dcc_ai_8_reg.ai_range_2 = ptr1->dcc_ai_face2_info.ai_range_2;
	// lesley 0815
	color_dcc_d_dcc_ctrl_reg.ai_blending_2_inside_ratio_msb = (ptr1->dcc_ai_face2_info.ai_blending_2_inside_ratio)>>5;
	dcc_d_dcc_ai_2_reg.ai_blending_2_inside_ratio= (ptr1->dcc_ai_face2_info.ai_blending_2_inside_ratio)&0x1f;
	// end lesley 0815
	dcc_d_dcc_ai_2_reg.ai_blending_2_ratio_0	 =ptr1->dcc_ai_face2_info.ai_blending_2_ratio_0;
	dcc_d_dcc_ai_2_reg.ai_blending_2_ratio_1	 =ptr1->dcc_ai_face2_info.ai_blending_2_ratio_1;
	dcc_d_dcc_ai_2_reg.ai_blending_2_ratio_2	 =ptr1->dcc_ai_face2_info.ai_blending_2_ratio_2;
	dcc_d_dcc_ai_2_reg.ai_blending_2_ratio_3	 =ptr1->dcc_ai_face2_info.ai_blending_2_ratio_3;
	dcc_d_dcc_ai_6_reg.ai_octa_tang_mode2       =   ptr1->dcc_ai_face2_info.ai_octa_tang_mode2;
	dcc_d_dcc_ai_8_reg.ai_octa_tang_dir2          	 =   ptr1->dcc_ai_face2_info.ai_octa_tang_dir2;

	dcc_d_dcc_ai_18_reg.ai_center_u_2 = ptr2->dcc_cds_skin_face2_info.cds_u_center_2;
	dcc_d_dcc_ai_18_reg.ai_center_v_2 = ptr2->dcc_cds_skin_face2_info.cds_v_center_2;
	color_dcc_d_dcc_cds_skin_2_reg.cds_uv_range_2 = ptr2->dcc_cds_skin_face2_info.cds_uv_range_2;
	dcc_d_dcc_skin_tone_segment_c2_0_reg.c_blending_2_ratio_0=ptr2->dcc_cds_skin_face2_info.c_blending_2_ratio_0;
	dcc_d_dcc_skin_tone_segment_c2_0_reg.c_blending_2_ratio_1=ptr2->dcc_cds_skin_face2_info.c_blending_2_ratio_1;
	dcc_d_dcc_skin_tone_segment_c2_0_reg.c_blending_2_ratio_2=ptr2->dcc_cds_skin_face2_info.c_blending_2_ratio_2;
	dcc_d_dcc_skin_tone_segment_c2_0_reg.c_blending_2_ratio_3=ptr2->dcc_cds_skin_face2_info.c_blending_2_ratio_3;
	dcc_d_dcc_skin_tone_segment_c2_1_reg.c_blending_2_ratio_4=ptr2->dcc_cds_skin_face2_info.c_blending_2_ratio_4;
	dcc_d_dcc_skin_tone_segment_c2_1_reg.c_blending_2_ratio_5=ptr2->dcc_cds_skin_face2_info.c_blending_2_ratio_5;
	dcc_d_dcc_skin_tone_segment_c2_1_reg.c_blending_2_ratio_6=ptr2->dcc_cds_skin_face2_info.c_blending_2_ratio_6;
	dcc_d_dcc_skin_tone_segment_c2_1_reg.c_blending_2_ratio_7=ptr2->dcc_cds_skin_face2_info.c_blending_2_ratio_7;

	//face3
	dcc_d_dcc_ai_13_reg.ai_center_x_3 = ptr1->dcc_ai_face3_info.ai_x_center_3;
	dcc_d_dcc_ai_13_reg.ai_center_y_3 = ptr1->dcc_ai_face3_info.ai_y_center_3;
	dcc_d_dcc_ai_8_reg.ai_range_3 = ptr1->dcc_ai_face3_info.ai_range_3;
	// lesley 0815, rtl bug, the register not work, use inside2 
	dcc_d_dcc_ai_3_reg.ai_blending_3_inside_ratio= (ptr1->dcc_ai_face3_info.ai_blending_3_inside_ratio)&0x1f;
	// end lesley 0815
	dcc_d_dcc_ai_3_reg.ai_blending_3_ratio_0	 =ptr1->dcc_ai_face3_info.ai_blending_3_ratio_0;
	dcc_d_dcc_ai_3_reg.ai_blending_3_ratio_1	 =ptr1->dcc_ai_face3_info.ai_blending_3_ratio_1;
	dcc_d_dcc_ai_3_reg.ai_blending_3_ratio_2	 =ptr1->dcc_ai_face3_info.ai_blending_3_ratio_2;
	dcc_d_dcc_ai_3_reg.ai_blending_3_ratio_3	 =ptr1->dcc_ai_face3_info.ai_blending_3_ratio_3;
	dcc_d_dcc_ai_6_reg.ai_octa_tang_mode3       =   ptr1->dcc_ai_face3_info.ai_octa_tang_mode3;
	dcc_d_dcc_ai_8_reg.ai_octa_tang_dir3          	 =   ptr1->dcc_ai_face3_info.ai_octa_tang_dir3;

	dcc_d_dcc_ai_19_reg.ai_center_u_3 = ptr2->dcc_cds_skin_face3_info.cds_u_center_3;
	dcc_d_dcc_ai_19_reg.ai_center_v_3 = ptr2->dcc_cds_skin_face3_info.cds_v_center_3;
	color_dcc_d_dcc_cds_skin_2_reg.cds_uv_range_3 = ptr2->dcc_cds_skin_face3_info.cds_uv_range_3;
	dcc_d_dcc_skin_tone_segment_c3_0_reg.c_blending_3_ratio_0=ptr2->dcc_cds_skin_face3_info.c_blending_3_ratio_0;
	dcc_d_dcc_skin_tone_segment_c3_0_reg.c_blending_3_ratio_1=ptr2->dcc_cds_skin_face3_info.c_blending_3_ratio_1;
	dcc_d_dcc_skin_tone_segment_c3_0_reg.c_blending_3_ratio_2=ptr2->dcc_cds_skin_face3_info.c_blending_3_ratio_2;
	dcc_d_dcc_skin_tone_segment_c3_0_reg.c_blending_3_ratio_3=ptr2->dcc_cds_skin_face3_info.c_blending_3_ratio_3;
	dcc_d_dcc_skin_tone_segment_c3_1_reg.c_blending_3_ratio_4=ptr2->dcc_cds_skin_face3_info.c_blending_3_ratio_4;
	dcc_d_dcc_skin_tone_segment_c3_1_reg.c_blending_3_ratio_5=ptr2->dcc_cds_skin_face3_info.c_blending_3_ratio_5;
	dcc_d_dcc_skin_tone_segment_c3_1_reg.c_blending_3_ratio_6=ptr2->dcc_cds_skin_face3_info.c_blending_3_ratio_6;
	dcc_d_dcc_skin_tone_segment_c3_1_reg.c_blending_3_ratio_7=ptr2->dcc_cds_skin_face3_info.c_blending_3_ratio_7;

	//face4
	dcc_d_dcc_ai_14_reg.ai_center_x_4 = ptr1->dcc_ai_face4_info.ai_x_center_4;
	dcc_d_dcc_ai_14_reg.ai_center_y_4 = ptr1->dcc_ai_face4_info.ai_y_center_4;
   	dcc_d_dcc_ai_9_reg.ai_range_4 = ptr1->dcc_ai_face4_info.ai_range_4;
	// lesley 0815, rtl bug, the register not work, use inside2
	dcc_d_dcc_ai_4_reg.ai_blending_4_inside_ratio= (ptr1->dcc_ai_face4_info.ai_blending_4_inside_ratio)&0x1f;
	// end lesley 0815
	dcc_d_dcc_ai_4_reg.ai_blending_4_ratio_0	 = ptr1->dcc_ai_face4_info.ai_blending_4_ratio_0;
	dcc_d_dcc_ai_4_reg.ai_blending_4_ratio_1	 = ptr1->dcc_ai_face4_info.ai_blending_4_ratio_1;
	dcc_d_dcc_ai_4_reg.ai_blending_4_ratio_2	 = ptr1->dcc_ai_face4_info.ai_blending_4_ratio_2;
	dcc_d_dcc_ai_4_reg.ai_blending_4_ratio_3	 = ptr1->dcc_ai_face4_info.ai_blending_4_ratio_3;
	dcc_d_dcc_ai_6_reg.ai_octa_tang_mode4       =   ptr1->dcc_ai_face4_info.ai_octa_tang_mode4;
	dcc_d_dcc_ai_8_reg.ai_octa_tang_dir4          	 =   ptr1->dcc_ai_face4_info.ai_octa_tang_dir4;

	dcc_d_dcc_ai_20_reg.ai_center_u_4 = ptr2->dcc_cds_skin_face4_info.cds_u_center_4;
	dcc_d_dcc_ai_20_reg.ai_center_v_4 = ptr2->dcc_cds_skin_face4_info.cds_v_center_4;
	color_dcc_d_dcc_cds_skin_3_reg.cds_uv_range_4 = ptr2->dcc_cds_skin_face4_info.cds_uv_range_4;
	dcc_d_dcc_skin_tone_segment_c4_0_reg.c_blending_4_ratio_0=ptr2->dcc_cds_skin_face4_info.c_blending_4_ratio_0;
	dcc_d_dcc_skin_tone_segment_c4_0_reg.c_blending_4_ratio_1=ptr2->dcc_cds_skin_face4_info.c_blending_4_ratio_1;
	dcc_d_dcc_skin_tone_segment_c4_0_reg.c_blending_4_ratio_2=ptr2->dcc_cds_skin_face4_info.c_blending_4_ratio_2;
	dcc_d_dcc_skin_tone_segment_c4_0_reg.c_blending_4_ratio_3=ptr2->dcc_cds_skin_face4_info.c_blending_4_ratio_3;
	dcc_d_dcc_skin_tone_segment_c4_1_reg.c_blending_4_ratio_4=ptr2->dcc_cds_skin_face4_info.c_blending_4_ratio_4;
	dcc_d_dcc_skin_tone_segment_c4_1_reg.c_blending_4_ratio_5=ptr2->dcc_cds_skin_face4_info.c_blending_4_ratio_5;
	dcc_d_dcc_skin_tone_segment_c4_1_reg.c_blending_4_ratio_6=ptr2->dcc_cds_skin_face4_info.c_blending_4_ratio_6;
	dcc_d_dcc_skin_tone_segment_c4_1_reg.c_blending_4_ratio_7=ptr2->dcc_cds_skin_face4_info.c_blending_4_ratio_7;

	//face5
	dcc_d_dcc_ai_15_reg.ai_center_x_5 = ptr1->dcc_ai_face5_info.ai_x_center_5;
	dcc_d_dcc_ai_15_reg.ai_center_y_5 = ptr1->dcc_ai_face5_info.ai_y_center_5;
	dcc_d_dcc_ai_9_reg.ai_range_5 =ptr1->dcc_ai_face5_info.ai_range_5;
	// lesley 0815, rtl bug, the register not work, use inside2 
	dcc_d_dcc_ai_5_reg.ai_blending_5_inside_ratio= (ptr1->dcc_ai_face5_info.ai_blending_5_inside_ratio)&0x1f;
	// end lesley 0815
	dcc_d_dcc_ai_5_reg.ai_blending_5_ratio_0	 = ptr1->dcc_ai_face5_info.ai_blending_5_ratio_0;
	dcc_d_dcc_ai_5_reg.ai_blending_5_ratio_1	 = ptr1->dcc_ai_face5_info.ai_blending_5_ratio_1;
	dcc_d_dcc_ai_5_reg.ai_blending_5_ratio_2	 = ptr1->dcc_ai_face5_info.ai_blending_5_ratio_2;
	dcc_d_dcc_ai_5_reg.ai_blending_5_ratio_3	 = ptr1->dcc_ai_face5_info.ai_blending_5_ratio_3;
	dcc_d_dcc_ai_7_reg.ai_octa_tang_mode5       =   ptr1->dcc_ai_face5_info.ai_octa_tang_mode5;
	dcc_d_dcc_ai_8_reg.ai_octa_tang_dir5          	 =   ptr1->dcc_ai_face5_info.ai_octa_tang_dir5;

	dcc_d_dcc_ai_21_reg.ai_center_u_5 = ptr2->dcc_cds_skin_face5_info.cds_u_center_5;
	dcc_d_dcc_ai_21_reg.ai_center_v_5 = ptr2->dcc_cds_skin_face5_info.cds_v_center_5;
	color_dcc_d_dcc_cds_skin_3_reg.cds_uv_range_5 = ptr2->dcc_cds_skin_face5_info.cds_uv_range_5;
	dcc_d_dcc_skin_tone_segment_c5_0_reg.c_blending_5_ratio_0=ptr2->dcc_cds_skin_face5_info.c_blending_5_ratio_0;
	dcc_d_dcc_skin_tone_segment_c5_0_reg.c_blending_5_ratio_1=ptr2->dcc_cds_skin_face5_info.c_blending_5_ratio_1;
	dcc_d_dcc_skin_tone_segment_c5_0_reg.c_blending_5_ratio_2=ptr2->dcc_cds_skin_face5_info.c_blending_5_ratio_2;
	dcc_d_dcc_skin_tone_segment_c5_0_reg.c_blending_5_ratio_3=ptr2->dcc_cds_skin_face5_info.c_blending_5_ratio_3;
	dcc_d_dcc_skin_tone_segment_c5_1_reg.c_blending_5_ratio_4=ptr2->dcc_cds_skin_face5_info.c_blending_5_ratio_4;
	dcc_d_dcc_skin_tone_segment_c5_1_reg.c_blending_5_ratio_5=ptr2->dcc_cds_skin_face5_info.c_blending_5_ratio_5;
	dcc_d_dcc_skin_tone_segment_c5_1_reg.c_blending_5_ratio_6=ptr2->dcc_cds_skin_face5_info.c_blending_5_ratio_6;
	dcc_d_dcc_skin_tone_segment_c5_1_reg.c_blending_5_ratio_7=ptr2->dcc_cds_skin_face5_info.c_blending_5_ratio_7;


	IoReg_Write32(COLOR_DCC_D_DCC_AI_0_reg, dcc_d_dcc_ai_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_1_reg, dcc_d_dcc_ai_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_2_reg, dcc_d_dcc_ai_2_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_3_reg, dcc_d_dcc_ai_3_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_4_reg, dcc_d_dcc_ai_4_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_5_reg, dcc_d_dcc_ai_5_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_6_reg ,  dcc_d_dcc_ai_6_reg.regValue );

	IoReg_Write32(COLOR_DCC_D_DCC_AI_7_reg, dcc_d_dcc_ai_7_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_8_reg, dcc_d_dcc_ai_8_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_9_reg, dcc_d_dcc_ai_9_reg.regValue);

	IoReg_Write32(COLOR_DCC_D_DCC_AI_10_reg, dcc_d_dcc_ai_10_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_11_reg, dcc_d_dcc_ai_11_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_12_reg, dcc_d_dcc_ai_12_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_13_reg, dcc_d_dcc_ai_13_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_14_reg, dcc_d_dcc_ai_14_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_15_reg, dcc_d_dcc_ai_15_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_16_reg, dcc_d_dcc_ai_16_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_17_reg, dcc_d_dcc_ai_17_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_18_reg, dcc_d_dcc_ai_18_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_19_reg, dcc_d_dcc_ai_19_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_20_reg, dcc_d_dcc_ai_20_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_AI_21_reg, dcc_d_dcc_ai_21_reg.regValue);


	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_0_reg, dcc_d_dcc_skin_tone_segment_c0_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C0_1_reg, dcc_d_dcc_skin_tone_segment_c0_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_0_reg, dcc_d_dcc_skin_tone_segment_c1_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C1_1_reg, dcc_d_dcc_skin_tone_segment_c1_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_0_reg, dcc_d_dcc_skin_tone_segment_c2_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C2_1_reg, dcc_d_dcc_skin_tone_segment_c2_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_0_reg, dcc_d_dcc_skin_tone_segment_c3_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C3_1_reg, dcc_d_dcc_skin_tone_segment_c3_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_0_reg, dcc_d_dcc_skin_tone_segment_c4_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C4_1_reg, dcc_d_dcc_skin_tone_segment_c4_1_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_0_reg, dcc_d_dcc_skin_tone_segment_c5_0_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_SEGMENT_C5_1_reg, dcc_d_dcc_skin_tone_segment_c5_1_reg.regValue);

	IoReg_Write32(COLOR_DCC_D_DCC_CDS_SKIN_1_reg ,  color_dcc_d_dcc_cds_skin_1_reg.regValue);
        IoReg_Write32(COLOR_DCC_D_DCC_CDS_SKIN_2_reg ,  color_dcc_d_dcc_cds_skin_2_reg.regValue);
	IoReg_Write32(COLOR_DCC_D_DCC_CDS_SKIN_3_reg ,  color_dcc_d_dcc_cds_skin_3_reg.regValue );

	IoReg_Write32(COLOR_DCC_D_DCC_SKIN_TONE_EN_reg ,  d_dcc_skin_tone_en_reg.regValue );

	// lesley 0815
	IoReg_Write32(COLOR_DCC_D_DCC_CTRL_reg ,  color_dcc_d_dcc_ctrl_reg.regValue );
	// end lesley 0815

}

// vip tabe 1270 set, for scene_detection
void scaler_AI_Scene_Ctrl_Set(DRV_AI_SCENE_Ctrl_table *ptr) // read from sharing memory
{
		int ip, i;
		
        if (ptr==NULL)
			return;

//(0) global setting
        ai_scene_ctrl.ai_scene_global.scene_en = ptr->ai_scene_global.scene_en;
        ai_scene_ctrl.ai_scene_global.scene_cnt_method = ptr->ai_scene_global.scene_cnt_method;

        ai_scene_ctrl.ai_scene_global.bdtop_th = ptr->ai_scene_global.bdtop_th;
        ai_scene_ctrl.ai_scene_global.bdbot_th = ptr->ai_scene_global.bdbot_th;

        ai_scene_ctrl.ai_scene_global.osd_pq_scene_cnt_th = ptr->ai_scene_global.osd_pq_scene_cnt_th;

		ai_scene_ctrl.ai_scene_global.crop_top = ptr->ai_scene_global.crop_top;
		ai_scene_ctrl.ai_scene_global.crop_bot = ptr->ai_scene_global.crop_bot;
		ai_scene_ctrl.ai_scene_global.crop_left = ptr->ai_scene_global.crop_left;
		ai_scene_ctrl.ai_scene_global.crop_right = ptr->ai_scene_global.crop_right;
		ai_scene_ctrl.ai_scene_global.adj_top_en = ptr->ai_scene_global.adj_top_en;
//(1) change speed
		for(ip=0; ip<PQ_IP_TYPE_NUM; ip++)
		{
			for(i=0; i<PQ_TUNING_NUM; i++)
			{
				ai_scene_ctrl.change_speed[ip][i] = ptr->change_speed[ip][i];
			}
		}
			
}

// vip tabe 1270 get, for scene_detection
void scaler_AI_Scene_Ctrl_Get(DRV_AI_SCENE_Ctrl_table *ptr) // read from sharing memory
{
		int ip, i;
		
        if (ptr==NULL)
			return;

		memset(ptr, 0, sizeof(DRV_AI_SCENE_Ctrl_table));

//(0) global setting
        ptr->ai_scene_global.scene_en = ai_scene_ctrl.ai_scene_global.scene_en;
        ptr->ai_scene_global.scene_cnt_method = ai_scene_ctrl.ai_scene_global.scene_cnt_method;

        ptr->ai_scene_global.bdtop_th = ai_scene_ctrl.ai_scene_global.bdtop_th;
        ptr->ai_scene_global.bdbot_th = ai_scene_ctrl.ai_scene_global.bdbot_th;

        ptr->ai_scene_global.osd_pq_scene_cnt_th = ai_scene_ctrl.ai_scene_global.osd_pq_scene_cnt_th;
		
		ptr->ai_scene_global.crop_top = ai_scene_ctrl.ai_scene_global.crop_top;
		ptr->ai_scene_global.crop_bot = ai_scene_ctrl.ai_scene_global.crop_bot;
		ptr->ai_scene_global.crop_left = ai_scene_ctrl.ai_scene_global.crop_left;
		ptr->ai_scene_global.crop_right = ai_scene_ctrl.ai_scene_global.crop_right;
		ptr->ai_scene_global.adj_top_en = ai_scene_ctrl.ai_scene_global.adj_top_en;
//(1) change speed
		for(ip=0; ip<PQ_IP_TYPE_NUM; ip++)
		{
			for(i=0; i<PQ_TUNING_NUM; i++)
			{
				ptr->change_speed[ip][i] = ai_scene_ctrl.change_speed[ip][i];
			}
		}
}

// for face effect to set shp cds cm0.
void drvif_color_AI_obj_srp_init(unsigned char enable_cm0)
{
	color_sharp_dm_cds_cm0_u_bound_0_RBUS color_sharp_dm_cds_cm0_u_bound_0_reg;
	//color_sharp_shp_cds_region_enable_RBUS color_sharp_shp_cds_region_enable_reg;

	color_sharp_dm_cds_cm0_u_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_reg);
	//color_sharp_shp_cds_region_enable_reg.regValue = IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg);

	color_sharp_dm_cds_cm0_u_bound_0_reg.cds_cm0_enable = enable_cm0;
	//color_sharp_shp_cds_region_enable_reg.cds_region_0_enable = enable_cm0; // [0] region condition, dynamic control(AI_Ctrl_TBL(34-4,34-5): (0,2):global, (0,0)(0,1):region, (1,x):dynamic)

	IoReg_Write32(COLOR_SHARP_DM_CDS_CM0_U_BOUND_0_reg, color_sharp_dm_cds_cm0_u_bound_0_reg.regValue);
	//IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg, color_sharp_shp_cds_region_enable_reg.regValue);
}
void drvif_color_AI_scene_cdsharp_reset_gain(int *cds_gain, int cm)
{
	/* reset by getting cds gain */
	
	if(cm==1)
	{
		color_sharp_dm_cds_peaking_gain_cm1_edge_RBUS color_sharp_dm_cds_peaking_gain_cm1_edge_reg;
		color_sharp_dm_cds_peaking_gain_cm1_v_edg_RBUS color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg;
		
		color_sharp_dm_cds_peaking_gain_cm1_edge_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg);
		color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg);
		
		cds_gain[0] = color_sharp_dm_cds_peaking_gain_cm1_edge_reg.gain_pos;
		cds_gain[1] = color_sharp_dm_cds_peaking_gain_cm1_edge_reg.gain_neg;
		cds_gain[5] = color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.gain_pos;
		cds_gain[6] = color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.gain_neg;
	}
	else if(cm==2)
	{
		color_sharp_dm_cds_peaking_gain_cm2_edge_RBUS color_sharp_dm_cds_peaking_gain_cm2_edge_reg;
		color_sharp_dm_cds_peaking_gain_cm2_v_edg_RBUS color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg;
		
		color_sharp_dm_cds_peaking_gain_cm2_edge_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg);
		color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg);
		
		cds_gain[0] = color_sharp_dm_cds_peaking_gain_cm2_edge_reg.gain_pos;
		cds_gain[1] = color_sharp_dm_cds_peaking_gain_cm2_edge_reg.gain_neg;
		cds_gain[5] = color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.gain_pos;
		cds_gain[6] = color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.gain_neg;
	}
}
void drvif_color_AI_scene_cdsharp_get(int *cds_gain)
{
	/* get setting from peaking gain as basic table*/
	
    color_sharp_dm_segpk_edgpk3_RBUS color_sharp_dm_segpk_edgpk3;
    color_sharp_dm_segpk_edgpk4_RBUS color_sharp_dm_segpk_edgpk4;
    color_sharp_dm_segpk_vpk5_RBUS color_sharp_dm_segpk_vpk5;
    color_sharp_dm_segpk_vpk6_RBUS color_sharp_dm_segpk_vpk6;
	color_sharp_dm_segpk_edgpk3.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_EDGPK3_reg);
	color_sharp_dm_segpk_edgpk4.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_EDGPK4_reg);
    color_sharp_dm_segpk_vpk5.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_VPK5_reg);
    color_sharp_dm_segpk_vpk6.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_VPK6_reg);
	
	cds_gain[0] = color_sharp_dm_segpk_edgpk3.gain_pos;
	cds_gain[1] = color_sharp_dm_segpk_edgpk3.gain_neg;
	cds_gain[2] = color_sharp_dm_segpk_edgpk4.hv_pos;
	cds_gain[3] = color_sharp_dm_segpk_edgpk4.hv_neg;
	cds_gain[4] = color_sharp_dm_segpk_edgpk4.lv;
	cds_gain[5] = color_sharp_dm_segpk_vpk5.vpk_edg_gain_pos;
	cds_gain[6] = color_sharp_dm_segpk_vpk5.vpk_edg_gain_neg;
	cds_gain[7] = color_sharp_dm_segpk_vpk6.vpk_edg_hv_pos;
	cds_gain[8] = color_sharp_dm_segpk_vpk6.vpk_edg_hv_neg;
	cds_gain[9] = color_sharp_dm_segpk_vpk5.vpk_edg_lv;
}
// for dynamic scene detect to set shp cds cm1, cm2.
void drvif_color_AI_scene_cdsharp_en(unsigned char enable_cm1, unsigned char enable_cm2)
{
	/* scene detect PQ using cm1 and cm2 */
	color_sharp_dm_cds_cm1_u_bound_0_RBUS color_sharp_dm_cds_cm1_u_bound_0_reg;
	color_sharp_shp_cds_region_enable_RBUS color_sharp_shp_cds_region_enable_reg;
	color_sharp_dm_cds_cm2_u_bound_0_RBUS color_sharp_dm_cds_cm2_u_bound_0_reg;
	
	color_sharp_dm_cds_cm1_u_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg);
	color_sharp_shp_cds_region_enable_reg.regValue = IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg);
	color_sharp_dm_cds_cm2_u_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg);

	color_sharp_dm_cds_cm1_u_bound_0_reg.cds_cm1_enable = enable_cm1;
	color_sharp_shp_cds_region_enable_reg.cds_region_1_enable = 0; // [1] cm1 region condition
	color_sharp_dm_cds_cm2_u_bound_0_reg.cds_cm2_enable = enable_cm2;
	color_sharp_shp_cds_region_enable_reg.cds_region_2_enable = 0; // [2] cm2 region condition

	IoReg_Write32(COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg, color_sharp_dm_cds_cm1_u_bound_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION_ENABLE_reg, color_sharp_shp_cds_region_enable_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg, color_sharp_dm_cds_cm2_u_bound_0_reg.regValue);
}
void drvif_color_AI_scene_cdsharp_set_cm1(unsigned char mode, unsigned int cds_gain[15])
{	
	/* for scene PQ use cm1, and doesn't need region function */
	color_sharp_dm_peaking_gain_RBUS color_sharp_dm_peaking_gain_reg;
	color_sharp_dm_peaking_bound_1_RBUS color_sharp_dm_peaking_bound_1_reg;
	color_sharp_dm_cds_cm1_u_bound_0_RBUS color_sharp_dm_cds_cm1_u_bound_0_reg;
	color_sharp_dm_cds_cm1_v_bound_0_RBUS color_sharp_dm_cds_cm1_v_bound_0_reg;
	color_sharp_dm_cds_cm1_u_bound_1_RBUS color_sharp_dm_cds_cm1_u_bound_1_reg;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_RBUS color_sharp_dm_cds_peaking_gain_bound_ctrl_reg;
	color_sharp_shp_cds_region1_0_RBUS color_sharp_shp_cds_region1_0_reg;
	color_sharp_dm_cds_peaking_gain_cm1_edge_RBUS color_sharp_dm_cds_peaking_gain_cm1_edge_reg;
	color_sharp_dm_cds_peaking_bound_cm1_edge_RBUS color_sharp_dm_cds_peaking_bound_cm1_edge_reg;
	color_sharp_dm_cds_peaking_gain_cm1_tex_RBUS color_sharp_dm_cds_peaking_gain_cm1_tex_reg;
	color_sharp_dm_cds_peaking_bound_cm1_tex_RBUS color_sharp_dm_cds_peaking_bound_cm1_tex_reg;
	color_sharp_dm_cds_peaking_gain_cm1_v_RBUS color_sharp_dm_cds_peaking_gain_cm1_v_reg;
	color_sharp_dm_cds_peaking_bound_cm1_v_RBUS color_sharp_dm_cds_peaking_bound_cm1_v_reg;
	color_sharp_dm_cds_peaking_gain_cm1_v_edg_RBUS color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg;
	color_sharp_dm_cds_peaking_bound_cm1_v_edg_RBUS color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg;
	
	color_sharp_dm_peaking_gain_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_GAIN_reg);
	color_sharp_dm_peaking_bound_1_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_BOUND_1_reg);
	color_sharp_dm_cds_cm1_u_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg);
	color_sharp_dm_cds_cm1_v_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_reg);
	color_sharp_dm_cds_cm1_u_bound_1_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_reg);
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg);
	color_sharp_shp_cds_region1_0_reg.regValue = IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_0_reg);
	color_sharp_dm_cds_peaking_gain_cm1_edge_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg);
	color_sharp_dm_cds_peaking_bound_cm1_edge_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_reg);
	color_sharp_dm_cds_peaking_gain_cm1_tex_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_reg);
	color_sharp_dm_cds_peaking_bound_cm1_tex_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_reg);
	color_sharp_dm_cds_peaking_gain_cm1_v_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_reg);
	color_sharp_dm_cds_peaking_bound_cm1_v_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_reg);
	color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg);
	color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_reg);
	// uv range
	color_sharp_dm_cds_cm1_u_bound_1_reg.cu_1 = CDS_uv_range[mode][0];
	color_sharp_dm_cds_cm1_u_bound_1_reg.cv_1 = CDS_uv_range[mode][1];
	color_sharp_dm_cds_cm1_u_bound_0_reg.u_lb_1 = CDS_uv_range[mode][2];
	color_sharp_dm_cds_cm1_u_bound_0_reg.u_ub_1 = CDS_uv_range[mode][3];
	color_sharp_dm_cds_cm1_v_bound_0_reg.v_lb_1 = CDS_uv_range[mode][4];
	color_sharp_dm_cds_cm1_v_bound_0_reg.v_ub_1 = CDS_uv_range[mode][5];
	color_sharp_dm_cds_cm1_u_bound_1_reg.uv_rad_1 = CDS_uv_range[mode][6];
	color_sharp_dm_cds_cm1_v_bound_0_reg.cm1_mode = CDS_uv_range[mode][7];
	// control mode
	color_sharp_dm_cds_cm1_v_bound_0_reg.cm1_conti_enable = CDS_control[mode][0];
	color_sharp_dm_cds_cm1_v_bound_0_reg.cm1_conti_area = CDS_control[mode][1];
	color_sharp_shp_cds_region1_0_reg.cds_region_1_smooth = CDS_control[mode][2];
	// Edge
	color_sharp_dm_cds_peaking_gain_cm1_edge_reg.gain_pos = cds_gain[0];
	color_sharp_dm_cds_peaking_gain_cm1_edge_reg.gain_neg = cds_gain[1];
	color_sharp_dm_cds_peaking_bound_cm1_edge_reg.hv_pos = cds_gain[2];
	color_sharp_dm_cds_peaking_bound_cm1_edge_reg.hv_neg = cds_gain[3];
	color_sharp_dm_cds_peaking_bound_cm1_edge_reg.lv = cds_gain[4];
	// text
	color_sharp_dm_cds_peaking_gain_cm1_tex_reg.gain_pos = color_sharp_dm_peaking_gain_reg.gain_pos;
	color_sharp_dm_cds_peaking_gain_cm1_tex_reg.gain_neg = color_sharp_dm_peaking_gain_reg.gain_neg;
	color_sharp_dm_cds_peaking_bound_cm1_tex_reg.hv_pos = color_sharp_dm_peaking_bound_1_reg.hv_pos;
	color_sharp_dm_cds_peaking_bound_cm1_tex_reg.hv_neg = color_sharp_dm_peaking_bound_1_reg.hv_neg;
	color_sharp_dm_cds_peaking_bound_cm1_tex_reg.lv = color_sharp_dm_peaking_bound_1_reg.lv;
	// vertical
	color_sharp_dm_cds_peaking_gain_cm1_v_reg.gain_pos = cds_gain[5]+80;
	color_sharp_dm_cds_peaking_gain_cm1_v_reg.gain_neg = cds_gain[6]+30;
	color_sharp_dm_cds_peaking_bound_cm1_v_reg.hv_pos = 30;
	color_sharp_dm_cds_peaking_bound_cm1_v_reg.hv_neg = 50;
	color_sharp_dm_cds_peaking_bound_cm1_v_reg.lv = 0;
	// vertical edge
	color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.gain_pos = cds_gain[5];
	color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.gain_neg = cds_gain[6];
	color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg.hv_pos = 5;
	color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg.hv_neg = 5;
	color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg.lv = cds_gain[9];
	
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg,color_sharp_dm_cds_cm1_u_bound_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_reg,color_sharp_dm_cds_cm1_v_bound_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_reg,color_sharp_dm_cds_cm1_u_bound_1_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg,color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_0_reg,color_sharp_shp_cds_region1_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg,color_sharp_dm_cds_peaking_gain_cm1_edge_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_reg,color_sharp_dm_cds_peaking_bound_cm1_edge_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_reg,color_sharp_dm_cds_peaking_gain_cm1_tex_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_reg,color_sharp_dm_cds_peaking_bound_cm1_tex_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_reg,color_sharp_dm_cds_peaking_gain_cm1_v_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_reg,color_sharp_dm_cds_peaking_bound_cm1_v_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg,color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_reg,color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg.regValue);
}
void drvif_color_AI_scene_cdsharp_set_cm2(unsigned char mode, unsigned int cds_gain[15])
{	
	/* for scene PQ use cm1, and doesn't need region function */
	
	color_sharp_dm_peaking_gain_RBUS color_sharp_dm_peaking_gain_reg;
	color_sharp_dm_peaking_bound_1_RBUS color_sharp_dm_peaking_bound_1_reg;
	color_sharp_dm_cds_cm2_u_bound_0_RBUS color_sharp_dm_cds_cm2_u_bound_0_reg;
	color_sharp_dm_cds_cm2_v_bound_0_RBUS color_sharp_dm_cds_cm2_v_bound_0_reg;
	color_sharp_dm_cds_cm2_u_bound_1_RBUS color_sharp_dm_cds_cm2_u_bound_1_reg;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_RBUS color_sharp_dm_cds_peaking_gain_bound_ctrl_reg;
	color_sharp_shp_cds_region2_0_RBUS color_sharp_shp_cds_region2_0_reg;
	color_sharp_dm_cds_peaking_gain_cm2_edge_RBUS color_sharp_dm_cds_peaking_gain_cm2_edge_reg;
	color_sharp_dm_cds_peaking_bound_cm2_edge_RBUS color_sharp_dm_cds_peaking_bound_cm2_edge_reg;
	color_sharp_dm_cds_peaking_gain_cm2_tex_RBUS color_sharp_dm_cds_peaking_gain_cm2_tex_reg;
	color_sharp_dm_cds_peaking_bound_cm2_tex_RBUS color_sharp_dm_cds_peaking_bound_cm2_tex_reg;
	color_sharp_dm_cds_peaking_gain_cm2_v_RBUS color_sharp_dm_cds_peaking_gain_cm2_v_reg;
	color_sharp_dm_cds_peaking_bound_cm2_v_RBUS color_sharp_dm_cds_peaking_bound_cm2_v_reg;
	color_sharp_dm_cds_peaking_gain_cm2_v_edg_RBUS color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg;
	color_sharp_dm_cds_peaking_bound_cm2_v_edg_RBUS color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg;
	
	
	color_sharp_dm_peaking_gain_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_GAIN_reg);
	color_sharp_dm_peaking_bound_1_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_BOUND_1_reg);
	color_sharp_dm_cds_cm2_u_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg);
	color_sharp_dm_cds_cm2_v_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_reg);
	color_sharp_dm_cds_cm2_u_bound_1_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_reg);
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg);
	color_sharp_shp_cds_region2_0_reg.regValue = IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_0_reg);
	color_sharp_dm_cds_peaking_gain_cm2_edge_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg);
	color_sharp_dm_cds_peaking_bound_cm2_edge_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_reg);
	color_sharp_dm_cds_peaking_gain_cm2_tex_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_reg);
	color_sharp_dm_cds_peaking_bound_cm2_tex_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_reg);
	color_sharp_dm_cds_peaking_gain_cm2_v_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_reg);
	color_sharp_dm_cds_peaking_bound_cm2_v_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_reg);
	color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg);
	color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_reg);
	// uv range
	color_sharp_dm_cds_cm2_u_bound_1_reg.cu_2 = CDS_uv_range[mode][0];
	color_sharp_dm_cds_cm2_u_bound_1_reg.cv_2 = CDS_uv_range[mode][1];
	color_sharp_dm_cds_cm2_u_bound_0_reg.u_lb_2 = CDS_uv_range[mode][2];
	color_sharp_dm_cds_cm2_u_bound_0_reg.u_ub_2 = CDS_uv_range[mode][3];
	color_sharp_dm_cds_cm2_v_bound_0_reg.v_lb_2 = CDS_uv_range[mode][4];
	color_sharp_dm_cds_cm2_v_bound_0_reg.v_ub_2 = CDS_uv_range[mode][5];
	color_sharp_dm_cds_cm2_u_bound_1_reg.uv_rad_2 = CDS_uv_range[mode][6];
	color_sharp_dm_cds_cm2_v_bound_0_reg.cm2_mode = CDS_uv_range[mode][7];
	// control mode
	color_sharp_dm_cds_cm2_v_bound_0_reg.cm2_conti_enable = CDS_control[mode][0];
	color_sharp_dm_cds_cm2_v_bound_0_reg.cm2_conti_area = CDS_control[mode][1];
	color_sharp_shp_cds_region2_0_reg.cds_region_2_smooth = CDS_control[mode][2];

	// Edge
	color_sharp_dm_cds_peaking_gain_cm2_edge_reg.gain_pos = cds_gain[0];
	color_sharp_dm_cds_peaking_gain_cm2_edge_reg.gain_neg = cds_gain[1];
	color_sharp_dm_cds_peaking_bound_cm2_edge_reg.hv_pos = 100;
	color_sharp_dm_cds_peaking_bound_cm2_edge_reg.hv_neg = 1023;
	color_sharp_dm_cds_peaking_bound_cm2_edge_reg.lv = cds_gain[4];
	// text
	color_sharp_dm_cds_peaking_gain_cm2_tex_reg.gain_pos = color_sharp_dm_peaking_gain_reg.gain_pos;
	color_sharp_dm_cds_peaking_gain_cm2_tex_reg.gain_neg = color_sharp_dm_peaking_gain_reg.gain_neg;
	color_sharp_dm_cds_peaking_bound_cm2_tex_reg.hv_pos = color_sharp_dm_peaking_bound_1_reg.hv_pos;
	color_sharp_dm_cds_peaking_bound_cm2_tex_reg.hv_neg = color_sharp_dm_peaking_bound_1_reg.hv_neg;
	color_sharp_dm_cds_peaking_bound_cm2_tex_reg.lv = color_sharp_dm_peaking_bound_1_reg.lv;
	// vertical
	color_sharp_dm_cds_peaking_gain_cm2_v_reg.gain_pos = 0;
	color_sharp_dm_cds_peaking_gain_cm2_v_reg.gain_neg = 0;
	color_sharp_dm_cds_peaking_bound_cm2_v_reg.hv_pos = 0;
	color_sharp_dm_cds_peaking_bound_cm2_v_reg.hv_neg = 0;
	color_sharp_dm_cds_peaking_bound_cm2_v_reg.lv = 0;
	// vertical edge
	color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.gain_pos = cds_gain[5];
	color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.gain_neg = cds_gain[6];
	color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg.hv_pos = 120;
	color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg.hv_neg = 120;
	color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg.lv = cds_gain[9];
	
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg,color_sharp_dm_cds_cm2_u_bound_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_reg,color_sharp_dm_cds_cm2_v_bound_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_reg,color_sharp_dm_cds_cm2_u_bound_1_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg,color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_0_reg,color_sharp_shp_cds_region2_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg,color_sharp_dm_cds_peaking_gain_cm2_edge_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_reg,color_sharp_dm_cds_peaking_bound_cm2_edge_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_reg,color_sharp_dm_cds_peaking_gain_cm2_tex_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_reg,color_sharp_dm_cds_peaking_bound_cm2_tex_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_reg,color_sharp_dm_cds_peaking_gain_cm2_v_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_reg,color_sharp_dm_cds_peaking_bound_cm2_v_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg,color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_reg,color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg.regValue);
}
void drvif_color_AI_scene_TNR_reset_gain(unsigned int *K)
{
	int i = 0;
	unsigned int reg_setting[2] = {0};

	reg_setting[0] = IoReg_Read32(DI_IM_DI_RTNR_Y_16_K0_K7_reg);
	reg_setting[1] = IoReg_Read32(DI_IM_DI_RTNR_Y_16_K8_K15_reg);

	for(i=0;i<8;i++)
		K[i] = (reg_setting[0]>>(i*4) & 0xf);
	for(i=8;i<16;i++)
		K[i] = (reg_setting[1]>>((i-8)*4) & 0xf);
	
}
void drvif_color_AI_scene_TNR_get(unsigned int *K)
{
	/* get old rtnr y th from pq table */
	int i = 0;
	
	for(i=0;i<8;i++)
		K[i] = (oldRtnrK[0]>>(i*4) & 0xf);
	for(i=8;i<16;i++)
		K[i] = (oldRtnrK[1]>>((i-8)*4) & 0xf);
}

void drvif_color_AI_scene_TNR_set(unsigned int *K)
{	
	int i = 0;
	unsigned int reg_setting[2] = {0};
	
	for(i=0;i<8;i++)
		reg_setting[0] += (K[i] << (i*4));
	for(i=8;i<16;i++)
		reg_setting[1] += (K[i] << ((i-8)*4));
	
	IoReg_Write32(DI_IM_DI_RTNR_Y_16_K0_K7_reg, reg_setting[0]);
	IoReg_Write32(DI_IM_DI_RTNR_Y_16_K8_K15_reg, reg_setting[1]);
}

void drvif_color_AI_scene_TNR_get_c(unsigned int *K)
{
	int i = 0;
	
	for(i=0;i<8;i++)
		K[i] = (oldRtnrC[0]>>(i*4) & 0x7);
}

void drvif_color_AI_scene_TNR_set_c(unsigned int *K)
{	
	int i = 0;
	unsigned int reg_setting[1] = {0};
	
	for(i=0;i<8;i++)
		reg_setting[0] += (K[i] << (i*4));
	
	IoReg_Write32(DI_IM_DI_RTNR_C_K_reg, reg_setting[0]);
}

void drvif_color_AI_scene_TNR_get_yth(unsigned int *K)
{
	/* get old rtnr y th from pq table */
	int i = 0;
	
	for(i=0;i<4;i++)
		K[i] = (oldRtnrK_yth[0]>>((i-0)*8) & 0xff);
	for(i=4;i<8;i++)
		K[i] = (oldRtnrK_yth[1]>>((i-4)*8) & 0xff);
	for(i=8;i<12;i++)
		K[i] = (oldRtnrK_yth[2]>>((i-8)*8) & 0xff);
	for(i=12;i<15;i++)
		K[i] = (oldRtnrK_yth[3]>>((i-12)*8) & 0xff);	
}

void drvif_color_AI_scene_TNR_set_yth(unsigned int *K)
{	
	int i = 0;
	unsigned int reg_setting[4] = {0};
	
	for(i=0;i<4;i++)
		reg_setting[0] += (K[i] << ((i-0)*8));
	for(i=4;i<8;i++)
		reg_setting[1] += (K[i] << ((i-4)*8));
	for(i=8;i<12;i++)
		reg_setting[2] += (K[i] << ((i-8)*8));
	for(i=12;i<15;i++)
		reg_setting[3] += (K[i] << ((i-12)*8));

	IoReg_Write32(DI_IM_DI_RTNR_Y_16_TH0_TH3_reg, reg_setting[0]);
	IoReg_Write32(DI_IM_DI_RTNR_Y_16_TH4_TH7_reg, reg_setting[1]);
	IoReg_Write32(DI_IM_DI_RTNR_Y_16_TH8_TH11_reg, reg_setting[2]);
	IoReg_Write32(DI_IM_DI_RTNR_Y_16_TH12_TH14_reg, reg_setting[3]);	
}
void drvif_color_AI_scene_TNR_get_cth(unsigned int *K)
{
	/* get old rtnr y th from pq table */
	int i = 0;
	
	for(i=0;i<4;i++)
		K[i] = (oldRtnrK_cth[0]>>((i-0)*8) & 0xff);
	for(i=4;i<7;i++)
		K[i] = (oldRtnrK_cth[1]>>((i-4)*8) & 0xff);	
}

void drvif_color_AI_scene_TNR_set_cth(unsigned int *K)
{	
	int i = 0;
	unsigned int reg_setting[2] = {0};
	
	for(i=0;i<4;i++)
		reg_setting[0] += (K[i] << ((i-0)*8));
	for(i=4;i<7;i++)
		reg_setting[1] += (K[i] << ((i-4)*8));

	IoReg_Write32(DI_IM_DI_RTNR_C_TH0_TH3_reg, reg_setting[0]);
	IoReg_Write32(DI_IM_DI_RTNR_C_TH4_TH6_reg, reg_setting[1]);	
}

void drvif_color_AI_scene_SNR_get_w1(unsigned int *K)
{
	/* get old rtnr y th from pq table */
	int i = 0;
	
	for(i=0;i<4;i++)
		K[i] = (oldSnr_w1h[0]>>((i-0)*8) & 0x1f);
	for(i=4;i<8;i++)
		K[i] = (oldSnr_w1h[1]>>((i-4)*8) & 0x1f);
	for(i=8;i<9;i++)
		K[i] = (oldSnr_w1h[2]>>((i-8)*8) & 0x1f);
}

void drvif_color_AI_scene_SNR_set_w1(unsigned int *K)
{	
	int i = 0;
	unsigned int reg_setting[3] = {0};
	
	for(i=0;i<4;i++)
		reg_setting[0] += (K[i] << ((i-0)*8));
	for(i=4;i<8;i++)
		reg_setting[1] += (K[i] << ((i-4)*8));
	for(i=8;i<9;i++)
		reg_setting[2] += (K[i] << ((i-8)*8));

	IoReg_Write32(NR_CURVE_MAPPING_W1_1_reg, reg_setting[0]);
	IoReg_Write32(NR_CURVE_MAPPING_W1_2_reg, reg_setting[1]);
	IoReg_Write32(NR_CURVE_MAPPING_W1_3_reg, reg_setting[2]);
}

void drvif_color_AI_scene_SNR_get_w2(unsigned int *K)
{
	/* get old rtnr y th from pq table */
	int i = 0;
	
	for(i=0;i<4;i++)
		K[i] = (oldSnr_w2h[0]>>((i-0)*8) & 0x1f);
	for(i=4;i<8;i++)
		K[i] = (oldSnr_w2h[1]>>((i-4)*8) & 0x1f);
	for(i=8;i<9;i++)
		K[i] = (oldSnr_w2h[2]>>((i-8)*8) & 0x1f);
}

void drvif_color_AI_scene_SNR_set_w2(unsigned int *K)
{	
	int i = 0;
	unsigned int reg_setting[3] = {0};
	
	for(i=0;i<4;i++)
		reg_setting[0] += (K[i] << ((i-0)*8));
	for(i=4;i<8;i++)
		reg_setting[1] += (K[i] << ((i-4)*8));
	for(i=8;i<9;i++)
		reg_setting[2] += (K[i] << ((i-8)*8));

	IoReg_Write32(NR_CURVE_MAPPING_W2_1_reg, reg_setting[0]);
	IoReg_Write32(NR_CURVE_MAPPING_W2_2_reg, reg_setting[1]);
	IoReg_Write32(NR_CURVE_MAPPING_W2_3_reg, reg_setting[2]);
}

void drvif_color_AI_scene_mosquitonr_nlevel_set(unsigned int *gain)
{	
	nr_mosquito_nr_level_ctrl_RBUS nr_mosquito_nr_level_ctrl_RBUS_reg;
	nr_mosquito_nr_oneside_ctrl_RBUS nr_mosquito_nr_oneside_ctrl_reg;
	
	nr_mosquito_nr_level_ctrl_RBUS_reg.regValue = IoReg_Read32(NR_MOSQUITO_NR_LEVEL_CTRL_reg);
	nr_mosquito_nr_oneside_ctrl_reg.regValue = IoReg_Read32(NR_MOSQUITO_NR_ONESIDE_CTRL_reg);
	
	nr_mosquito_nr_level_ctrl_RBUS_reg.mosquitonr_nlevel_positive_offset 	= gain[0];
	nr_mosquito_nr_level_ctrl_RBUS_reg.mosquitonr_nlevel_positive_shift 	= gain[1];
	nr_mosquito_nr_level_ctrl_RBUS_reg.mosquitonr_nlevel_negative_offset 	= gain[2];
	nr_mosquito_nr_level_ctrl_RBUS_reg.mosquitonr_nlevel_negative_shift 	= gain[3];
	nr_mosquito_nr_level_ctrl_RBUS_reg.mnr_nlevel_maxfrac_mode 		= gain[4];

	nr_mosquito_nr_oneside_ctrl_reg.mnr_nlevel_mid_offset = gain[5];
	nr_mosquito_nr_oneside_ctrl_reg.mnr_nlevel_mid_shift = gain[6];
	
	IoReg_Write32(NR_MOSQUITO_NR_LEVEL_CTRL_reg, nr_mosquito_nr_level_ctrl_RBUS_reg.regValue);
	IoReg_Write32(NR_MOSQUITO_NR_ONESIDE_CTRL_reg, nr_mosquito_nr_oneside_ctrl_reg.regValue);
	
}

void drvif_color_AI_scene_dirsu_angmagconf_set(unsigned int *gain)
{	
	scaleup_dm_dir_uzu_angmagscore_RBUS dm_dir_uzu_angmagscore_Reg;
	scaleup_dm_dir_uzu_conf_RBUS dm_dir_uzu_conf_Reg;
	
	dm_dir_uzu_angmagscore_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_AngMagScore_reg);
	dm_dir_uzu_conf_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_Conf_reg);


	dm_dir_uzu_angmagscore_Reg.angdiff_lowbnd =gain[0];
	dm_dir_uzu_angmagscore_Reg.angdiff_step=gain[1];
	dm_dir_uzu_angmagscore_Reg.mag_lowbnd=gain[2];
	dm_dir_uzu_angmagscore_Reg.mag_step=gain[3];
	
	dm_dir_uzu_conf_Reg.conf_step=gain[4];
	dm_dir_uzu_conf_Reg.conf_offset=gain[5];
	dm_dir_uzu_conf_Reg.conf_lowbnd=gain[6];

	
	IoReg_Write32(SCALEUP_DM_DIR_UZU_AngMagScore_reg, dm_dir_uzu_angmagscore_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_DIR_UZU_Conf_reg, dm_dir_uzu_conf_Reg.regValue);
}

void drvif_color_AI_scene_dirsu_angletransition_set(unsigned int *gain)
{	
	scaleup_dm_dir_uzu_transang1_RBUS dm_dir_uzu_transang1_Reg;
	scaleup_dm_dir_uzu_transang2_RBUS dm_dir_uzu_transang2_Reg;

	dm_dir_uzu_transang1_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_TransAng1_reg);
	dm_dir_uzu_transang2_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_TransAng2_reg);

	dm_dir_uzu_transang1_Reg.transang_sec0 = gain[0];
	dm_dir_uzu_transang1_Reg.transang_sec1 = gain[1];
	dm_dir_uzu_transang1_Reg.transang_sec2 = gain[2];
	dm_dir_uzu_transang1_Reg.transang_sec3 = gain[3];

	dm_dir_uzu_transang2_Reg.transang_step0 = gain[4];
	dm_dir_uzu_transang2_Reg.transang_step1 = gain[5];
	dm_dir_uzu_transang2_Reg.transang_step2 = gain[6];
	dm_dir_uzu_transang2_Reg.transang_step3 = gain[7];


	IoReg_Write32(SCALEUP_DM_DIR_UZU_TransAng1_reg, dm_dir_uzu_transang1_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_DIR_UZU_TransAng2_reg, dm_dir_uzu_transang2_Reg.regValue);

}

void drvif_color_AI_scene_DDLTI_en_set(unsigned char dlti_en,unsigned char dlti_v_en,unsigned char dlti_h_en)
{	
	color_sharp_shp_dlti_ctrl_1_RBUS color_sharp_shp_dlti_ctrl_1;
	color_sharp_shp_dlti_v_ctrl_1_RBUS color_sharp_shp_dlti_v_ctrl_1;
	
	color_sharp_shp_dlti_ctrl_1.regValue = IoReg_Read32(COLOR_SHARP_SHP_DLTI_CTRL_1_reg);
	color_sharp_shp_dlti_v_ctrl_1.regValue = IoReg_Read32(COLOR_SHARP_SHP_DLTI_V_CTRL_1_reg);

	color_sharp_shp_dlti_ctrl_1.dlti_en = dlti_en;

	color_sharp_shp_dlti_v_ctrl_1.dlti_v_en = dlti_v_en;
	color_sharp_shp_dlti_v_ctrl_1.dlti_h_en = dlti_h_en;

	IoReg_Write32(COLOR_SHARP_SHP_DLTI_CTRL_1_reg, color_sharp_shp_dlti_ctrl_1.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_DLTI_V_CTRL_1_reg, color_sharp_shp_dlti_v_ctrl_1.regValue);
}

void drvif_color_AI_scene_dlti_h_set(unsigned int *gain)
{	
	color_sharp_shp_dlti_gain_offset_1_RBUS color_sharp_shp_dlti_gain_offset_1;
	color_sharp_shp_dlti_gain_offset_2_RBUS color_sharp_shp_dlti_gain_offset_2;
	color_sharp_shp_dlti_gain_offset_3_RBUS color_sharp_shp_dlti_gain_offset_3;
	color_sharp_shp_dlti_gain_offset_4_RBUS color_sharp_shp_dlti_gain_offset_4;
	color_sharp_shp_dlti_gain_offset_5_RBUS color_sharp_shp_dlti_gain_offset_5;

	color_sharp_shp_dlti_gain_offset_1.regValue = IoReg_Read32(COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_reg);
	color_sharp_shp_dlti_gain_offset_2.regValue = IoReg_Read32(COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_reg);
	color_sharp_shp_dlti_gain_offset_3.regValue = IoReg_Read32(COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_reg);
	color_sharp_shp_dlti_gain_offset_4.regValue = IoReg_Read32(COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_reg);
	color_sharp_shp_dlti_gain_offset_5.regValue = IoReg_Read32(COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_reg);

	color_sharp_shp_dlti_gain_offset_1.tnoff0 = gain[0];
	color_sharp_shp_dlti_gain_offset_1.tnoff1 = gain[1];
	color_sharp_shp_dlti_gain_offset_1.tnoff2 = gain[2];
	color_sharp_shp_dlti_gain_offset_2.tnoff3 = gain[3];
	color_sharp_shp_dlti_gain_offset_2.tnoff4 = gain[4];
	color_sharp_shp_dlti_gain_offset_2.tnoff5 = gain[5];
	color_sharp_shp_dlti_gain_offset_3.tnoff6 = gain[6];
	color_sharp_shp_dlti_gain_offset_3.tnoff7 = gain[7];
	color_sharp_shp_dlti_gain_offset_3.tnoff8 = gain[8];
	color_sharp_shp_dlti_gain_offset_4.tnoff9 = gain[9];
	color_sharp_shp_dlti_gain_offset_4.tnoff10 = gain[10];
	color_sharp_shp_dlti_gain_offset_4.tnoff11 = gain[11];
	color_sharp_shp_dlti_gain_offset_5.tnoff12 = gain[12];
	color_sharp_shp_dlti_gain_offset_5.tnoff13 = gain[13];
	color_sharp_shp_dlti_gain_offset_5.tnoff14 = gain[14];

	IoReg_Write32(COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_1_reg, color_sharp_shp_dlti_gain_offset_1.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_2_reg, color_sharp_shp_dlti_gain_offset_2.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_3_reg, color_sharp_shp_dlti_gain_offset_3.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_4_reg, color_sharp_shp_dlti_gain_offset_4.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_DLTI_GAIN_OFFSET_5_reg, color_sharp_shp_dlti_gain_offset_5.regValue);
}

void drvif_color_AI_scene_dlti_v_set(unsigned int *gain)
{	
	color_sharp_shp_dlti_v_gain_offset_0_RBUS color_sharp_shp_dlti_v_gain_offset_0;
	color_sharp_shp_dlti_v_gain_offset_1_RBUS color_sharp_shp_dlti_v_gain_offset_1;

	color_sharp_shp_dlti_v_gain_offset_0.regValue = IoReg_Read32(COLOR_SHARP_SHP_DLTI_V_GAIN_OFFSET_0_reg);
	color_sharp_shp_dlti_v_gain_offset_1.regValue = IoReg_Read32(COLOR_SHARP_SHP_DLTI_V_GAIN_OFFSET_1_reg);

	color_sharp_shp_dlti_v_gain_offset_0.tnoff0 = gain[0];
	color_sharp_shp_dlti_v_gain_offset_0.tnoff1 = gain[1];
	color_sharp_shp_dlti_v_gain_offset_0.tnoff2 = gain[2];
	color_sharp_shp_dlti_v_gain_offset_1.tnoff3 = gain[3];
	color_sharp_shp_dlti_v_gain_offset_1.tnoff4 = gain[4];
	color_sharp_shp_dlti_v_gain_offset_1.tnoff5 = gain[5];
	color_sharp_shp_dlti_v_gain_offset_1.tnoff6 = gain[6];

	IoReg_Write32(COLOR_SHARP_SHP_DLTI_V_GAIN_OFFSET_0_reg, color_sharp_shp_dlti_v_gain_offset_0.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_DLTI_V_GAIN_OFFSET_1_reg, color_sharp_shp_dlti_v_gain_offset_1.regValue);
}

void drvif_color_AI_scene_LC_en_set(unsigned char lc_local_sharp_en,unsigned char lc_tone_mapping_en)
{
	lc_lc_global_ctrl0_RBUS blu_lc_global_ctrl0;
	lc_lc_global_ctrl1_RBUS blu_lc_global_ctrl1;
	blu_lc_global_ctrl0.regValue = IoReg_Read32(LC_LC_Global_Ctrl0_reg);
	blu_lc_global_ctrl1.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);

	blu_lc_global_ctrl0.lc_local_sharp_en = lc_local_sharp_en;
	blu_lc_global_ctrl0.lc_tone_mapping_en = lc_tone_mapping_en;

	blu_lc_global_ctrl1.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);
	blu_lc_global_ctrl1.lc_db_apply = 1;

	IoReg_Write32(LC_LC_Global_Ctrl0_reg, blu_lc_global_ctrl0.regValue);
	IoReg_Write32(LC_LC_Global_Ctrl1_reg, blu_lc_global_ctrl1.regValue);

}

void drvif_color_AI_scene_LC_Shpnr_Gain1st_set(unsigned int *gain)
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

	shpnr_1st_gain_0.lc_gain_by_yin_0 = gain[0];
	shpnr_1st_gain_0.lc_gain_by_yin_1 = gain[1];
	shpnr_1st_gain_0.lc_gain_by_yin_2 = gain[2];
	shpnr_1st_gain_0.lc_gain_by_yin_3 = gain[3];
	shpnr_1st_gain_1.lc_gain_by_yin_4 = gain[4];
	shpnr_1st_gain_1.lc_gain_by_yin_5 = gain[5];
	shpnr_1st_gain_1.lc_gain_by_yin_6 = gain[6];
	shpnr_1st_gain_1.lc_gain_by_yin_7 = gain[7];
	shpnr_1st_gain_2.lc_gain_by_yin_8 = gain[8];
	shpnr_1st_gain_2.lc_gain_by_yin_9 = gain[9];
	shpnr_1st_gain_2.lc_gain_by_yin_10 = gain[10];
	shpnr_1st_gain_2.lc_gain_by_yin_11 = gain[11];
	shpnr_1st_gain_3.lc_gain_by_yin_12 = gain[12];
	shpnr_1st_gain_3.lc_gain_by_yin_13 = gain[13];
	shpnr_1st_gain_3.lc_gain_by_yin_14 = gain[14];
	shpnr_1st_gain_3.lc_gain_by_yin_15 = gain[15];
	shpnr_1st_gain_4.lc_gain_by_yin_16 = gain[16];
	shpnr_1st_gain_4.lc_gain_by_yin_17 = gain[17];
	shpnr_1st_gain_4.lc_gain_by_yin_18 = gain[18];
	shpnr_1st_gain_4.lc_gain_by_yin_19 = gain[19];
	shpnr_1st_gain_5.lc_gain_by_yin_20 = gain[20];
	shpnr_1st_gain_5.lc_gain_by_yin_21 = gain[21];
	shpnr_1st_gain_5.lc_gain_by_yin_22 = gain[22];
	shpnr_1st_gain_5.lc_gain_by_yin_23 = gain[23];
	shpnr_1st_gain_6.lc_gain_by_yin_24 = gain[24];
	shpnr_1st_gain_6.lc_gain_by_yin_25 = gain[25];
	shpnr_1st_gain_6.lc_gain_by_yin_26 = gain[26];
	shpnr_1st_gain_6.lc_gain_by_yin_27 = gain[27];
	shpnr_1st_gain_7.lc_gain_by_yin_28 = gain[28];
	shpnr_1st_gain_7.lc_gain_by_yin_29 = gain[29];
	shpnr_1st_gain_7.lc_gain_by_yin_30 = gain[30];
	shpnr_1st_gain_7.lc_gain_by_yin_31 = gain[31];
	shpnr_1st_gain_8.lc_gain_by_yin_32 = gain[32];

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

void drvif_color_AI_scene_LC_Shpnr_Gain2nd_set(unsigned int *gain)
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

	shpnr_2nd_gain_0.lc_gain_by_ydiff_0 = gain[0];
	shpnr_2nd_gain_0.lc_gain_by_ydiff_1 = gain[1];
	shpnr_2nd_gain_0.lc_gain_by_ydiff_2 = gain[2];
	shpnr_2nd_gain_0.lc_gain_by_ydiff_3 = gain[3];
	shpnr_2nd_gain_1.lc_gain_by_ydiff_4 = gain[4];
	shpnr_2nd_gain_1.lc_gain_by_ydiff_5 = gain[5];
	shpnr_2nd_gain_1.lc_gain_by_ydiff_6 = gain[6];
	shpnr_2nd_gain_1.lc_gain_by_ydiff_7 = gain[7];
	shpnr_2nd_gain_2.lc_gain_by_ydiff_8 = gain[8];
	shpnr_2nd_gain_2.lc_gain_by_ydiff_9 = gain[9];
	shpnr_2nd_gain_2.lc_gain_by_ydiff_10 = gain[10];
	shpnr_2nd_gain_2.lc_gain_by_ydiff_11 = gain[11];
	shpnr_2nd_gain_3.lc_gain_by_ydiff_12 = gain[12];
	shpnr_2nd_gain_3.lc_gain_by_ydiff_13 = gain[13];
	shpnr_2nd_gain_3.lc_gain_by_ydiff_14 = gain[14];
	shpnr_2nd_gain_3.lc_gain_by_ydiff_15 = gain[15];
	shpnr_2nd_gain_4.lc_gain_by_ydiff_16 = gain[16];
	shpnr_2nd_gain_4.lc_gain_by_ydiff_17 = gain[17];
	shpnr_2nd_gain_4.lc_gain_by_ydiff_18 = gain[18];
	shpnr_2nd_gain_4.lc_gain_by_ydiff_19 = gain[19];
	shpnr_2nd_gain_5.lc_gain_by_ydiff_20 = gain[20];
	shpnr_2nd_gain_5.lc_gain_by_ydiff_21 = gain[21];
	shpnr_2nd_gain_5.lc_gain_by_ydiff_22 = gain[22];
	shpnr_2nd_gain_5.lc_gain_by_ydiff_23 = gain[23];
	shpnr_2nd_gain_6.lc_gain_by_ydiff_24 = gain[24];
	shpnr_2nd_gain_6.lc_gain_by_ydiff_25 = gain[25];
	shpnr_2nd_gain_6.lc_gain_by_ydiff_26 = gain[26];
	shpnr_2nd_gain_6.lc_gain_by_ydiff_27 = gain[27];
	shpnr_2nd_gain_7.lc_gain_by_ydiff_28 = gain[28];
	shpnr_2nd_gain_7.lc_gain_by_ydiff_29 = gain[29];
	shpnr_2nd_gain_7.lc_gain_by_ydiff_30 = gain[30];
	shpnr_2nd_gain_7.lc_gain_by_ydiff_31 = gain[31];
	shpnr_2nd_gain_8.lc_gain_by_ydiff_32 = gain[32];
	
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


void drvif_color_AI_scene_Color_reset_gain(unsigned int *gain)
{
extern TV001_COLOR_TEMP_DATA_S vpqex_color_temp;
	
	gain[0] = cur_temp_val[PQ_IP_COLOR][0];
	gain[1] = cur_temp_val[PQ_IP_COLOR][1];
	gain[2] = cur_temp_val[PQ_IP_COLOR][2];
	
	if(ic_version == 0)
	{
		// color tempaurate contrast
		gain[3] = 2048;//vpqex_color_temp.redGain;
		gain[4] = 2048;//vpqex_color_temp.greenGain;
		gain[5] = 2048;//vpqex_color_temp.blueGain;
		// color tempaurate brightness
		gain[6] = 0;//vpqex_color_temp.redOffset;
		gain[7] = 0;//vpqex_color_temp.greenOffset;
		gain[8] = 0;//vpqex_color_temp.blueOffset;
	}
	else if(ic_version == 1)
	{
		// color tempaurate contrast
		gain[3] = vpqex_color_temp.redGain;
		gain[4] = vpqex_color_temp.greenGain;
		gain[5] = vpqex_color_temp.blueGain;
		// color tempaurate brightness
		gain[6] = vpqex_color_temp.redOffset;
		gain[7] = vpqex_color_temp.greenOffset;
		gain[8] = vpqex_color_temp.blueOffset;
	}
}
void drvif_color_AI_scene_Color_get(unsigned int *gain)
{
	
extern TV001_COLOR_TEMP_DATA_S vpqex_color_temp;
extern unsigned int osd_con;
extern unsigned int osd_bri;
extern unsigned int osd_sat;
	gain[0] = osd_con;
	gain[1] = osd_bri;
	gain[2] = osd_sat;
	
	if(ic_version == 0)
	{
		// color tempaurate contrast
		gain[3] = 2048;//vpqex_color_temp.redGain;
		gain[4] = 2048;//vpqex_color_temp.greenGain;
		gain[5] = 2048;//vpqex_color_temp.blueGain;
		// color tempaurate brightness
		gain[6] = 0;//vpqex_color_temp.redOffset;
		gain[7] = 0;//vpqex_color_temp.greenOffset;
		gain[8] = 0;//vpqex_color_temp.blueOffset;
	}
	else if(ic_version == 1)
	{
		// color tempaurate contrast
		gain[3] = vpqex_color_temp.redGain;
		gain[4] = vpqex_color_temp.greenGain;
		gain[5] = vpqex_color_temp.blueGain;
		// color tempaurate brightness
		gain[6] = vpqex_color_temp.redOffset;
		gain[7] = vpqex_color_temp.greenOffset;
		gain[8] = vpqex_color_temp.blueOffset;
	}
}
void drvif_color_AI_scene_LC_reset_gain(unsigned int *gain)
{
	lc_lc_tonemapping_blending_RBUS lc_lc_tonemapping_blending_reg;

	lc_lc_tonemapping_blending_reg.regValue = IoReg_Read32(LC_LC_ToneMapping_blending_reg);

	gain[0] = lc_lc_tonemapping_blending_reg.lc_tmap_blend_factor;
}
void drvif_color_AI_scene_LC_set(unsigned int *gain)
{
	lc_lc_tonemapping_blending_RBUS lc_lc_tonemapping_blending_reg;
	lc_lc_global_ctrl1_RBUS lc_lc_global_ctrl1_reg;

	lc_lc_tonemapping_blending_reg.regValue = IoReg_Read32(LC_LC_ToneMapping_blending_reg);

	lc_lc_tonemapping_blending_reg.lc_tmap_blend_factor = gain[0];
	lc_lc_tonemapping_blending_reg.lc_tmap_slope_unit = gain[1];

	IoReg_Write32(LC_LC_ToneMapping_blending_reg, lc_lc_tonemapping_blending_reg.regValue);


	lc_lc_global_ctrl1_reg.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);
	lc_lc_global_ctrl1_reg.lc_db_apply = 1;
	IoReg_Write32(LC_LC_Global_Ctrl1_reg, lc_lc_global_ctrl1_reg.regValue);
	
}
void drvif_color_AI_scene_MosNR_reset_gain(unsigned int *gain)
{
	nr_mosquito_nr_edge_thd_ctrl_1_RBUS nr_mosquito_nr_edge_thd_ctrl_1_reg;
	nr_mosquito_nr_edge_thd_ctrl_RBUS nr_mosquito_nr_edge_thd_ctrl_reg;
		
	nr_mosquito_nr_edge_thd_ctrl_1_reg.regValue = IoReg_Read32(NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg);
	nr_mosquito_nr_edge_thd_ctrl_reg.regValue = IoReg_Read32(NR_MOSQUITO_NR_EDGE_THD_CTRL_reg);
#if 1	
	gain[0] = nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd1;
	gain[1] = nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd2;
	gain[2] = nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd3;
	gain[3] = nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd4;
	gain[4] = nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd5;
	gain[5] = nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd6;
	gain[6] = nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd7;
	gain[7] = nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd8;
#else // 20CES show
	gain[0] = 255;
	gain[1] = 255;
	gain[2] = 255;
	gain[3] = 255;
	gain[4] = 255;
	gain[5] = 255;
	gain[6] = 255;
	gain[7] = 255;
#endif
}
void drvif_color_AI_scene_MosNR_get(unsigned int *gain)
{
	/* get edge th from pq table */
	int i = 0;

	for(i=0;i<8;i++)
		gain[i] = mosnrEdgTh[i];
}
void drvif_color_AI_scene_MosNR_set(unsigned int *gain)
{
	nr_mosquito_nr_edge_thd_ctrl_RBUS nr_mosquito_nr_edge_thd_ctrl_reg;
	nr_mosquito_nr_edge_thd_ctrl_1_RBUS nr_mosquito_nr_edge_thd_ctrl_1_reg;
	
	nr_mosquito_nr_edge_thd_ctrl_reg.regValue = IoReg_Read32(NR_MOSQUITO_NR_EDGE_THD_CTRL_reg);
	nr_mosquito_nr_edge_thd_ctrl_1_reg.regValue = IoReg_Read32(NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg);

    /*edge_th*/
	nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd1 = gain[0];
	nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd2	= gain[1];
	nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd3	= gain[2];
	nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd4	= gain[3];
	nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd5	= gain[4];
	nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd6	= gain[5];
	nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd7	= gain[6];
	nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd8	= gain[7];

	IoReg_Write32(NR_MOSQUITO_NR_EDGE_THD_CTRL_reg, nr_mosquito_nr_edge_thd_ctrl_reg.regValue);
	IoReg_Write32(NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg, nr_mosquito_nr_edge_thd_ctrl_1_reg.regValue);
	//rtd_printk(KERN_EMERG, TAG_NAME, "lsy, nr %d %d %d %d %d %d %d %d\n",setting[0],setting[1],setting[2],setting[3],setting[4],setting[5],setting[6],setting[7],setting[8]);

}
int drvif_color_AI_scene_PQ_reset_check(int *curGain, int *tarGain)
{
	int i = 0;
	int theSame = 1;

	for(i=0;i<PQ_TUNING_NUM;i++)
	{
		if(curGain[i] != tarGain[i])
		{
			theSame = 0;
			break;
		}
	}

	return theSame;
}

#if 1
// 0506 lsy
// vip tabe 1270 set, for scene_detection
void scaler_AI_PQ_Ctrl_Set(DRV_AI_PQ_Ctrl_table *ptr) // read from sharing memory
{
		int ip, i;
		
        if (ptr==NULL)
			return;

//(0) scene global setting
        ai_pq_ctrl.ai_scene_global.scene_en = ptr->ai_scene_global.scene_en;
        ai_pq_ctrl.ai_scene_global.scene_cnt_method = ptr->ai_scene_global.scene_cnt_method;

        ai_pq_ctrl.ai_scene_global.bdtop_th = ptr->ai_scene_global.bdtop_th;
        ai_pq_ctrl.ai_scene_global.bdbot_th = ptr->ai_scene_global.bdbot_th;

        ai_pq_ctrl.ai_scene_global.osd_pq_scene_cnt_th = ptr->ai_scene_global.osd_pq_scene_cnt_th;

		ai_pq_ctrl.ai_scene_global.crop_top = ptr->ai_scene_global.crop_top;
		ai_pq_ctrl.ai_scene_global.crop_bot = ptr->ai_scene_global.crop_bot;
		ai_pq_ctrl.ai_scene_global.crop_left = ptr->ai_scene_global.crop_left;
		ai_pq_ctrl.ai_scene_global.crop_right = ptr->ai_scene_global.crop_right;
		ai_pq_ctrl.ai_scene_global.adj_top_en = ptr->ai_scene_global.adj_top_en;
//(1) change speed
		for(ip=0; ip<PQ_IP_TYPE_NUM; ip++)
		{
			for(i=0; i<PQ_TUNING_NUM; i++)
			{
				ai_pq_ctrl.change_speed[ip][i] = ptr->change_speed[ip][i];
			}
		}
			
//(2) sqm global setting
        ai_pq_ctrl.ai_sqm_global.sqm_en = ptr->ai_sqm_global.sqm_en;
}

// vip tabe 1270 get, for scene_detection
void scaler_AI_PQ_Ctrl_Get(DRV_AI_PQ_Ctrl_table *ptr) // read from sharing memory
{
		int ip, i;
		
        if (ptr==NULL)
			return;

		memset(ptr, 0, sizeof(DRV_AI_PQ_Ctrl_table));

//(0) scene global setting
        ptr->ai_scene_global.scene_en = ai_pq_ctrl.ai_scene_global.scene_en;
        ptr->ai_scene_global.scene_cnt_method = ai_pq_ctrl.ai_scene_global.scene_cnt_method;

        ptr->ai_scene_global.bdtop_th = ai_pq_ctrl.ai_scene_global.bdtop_th;
        ptr->ai_scene_global.bdbot_th = ai_pq_ctrl.ai_scene_global.bdbot_th;

        ptr->ai_scene_global.osd_pq_scene_cnt_th = ai_pq_ctrl.ai_scene_global.osd_pq_scene_cnt_th;

		ptr->ai_scene_global.crop_top = ai_pq_ctrl.ai_scene_global.crop_top;
		ptr->ai_scene_global.crop_bot = ai_pq_ctrl.ai_scene_global.crop_bot;
		ptr->ai_scene_global.crop_left = ai_pq_ctrl.ai_scene_global.crop_left;
		ptr->ai_scene_global.crop_right = ai_pq_ctrl.ai_scene_global.crop_right;
		ptr->ai_scene_global.adj_top_en = ai_pq_ctrl.ai_scene_global.adj_top_en;
//(1) change speed
		for(ip=0; ip<PQ_IP_TYPE_NUM; ip++)
		{
			for(i=0; i<PQ_TUNING_NUM; i++)
			{
				ptr->change_speed[ip][i] = ai_pq_ctrl.change_speed[ip][i];
			}
		}
//(2) sqm global setting
        ptr->ai_sqm_global.sqm_en = ai_pq_ctrl.ai_sqm_global.sqm_en;
}

void drvif_color_AI_PQ_set_cm1(int basic_pq_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM], int pq_offset[PQ_IP_TYPE_NUM][PQ_TUNING_NUM])
{	
	/* for scene PQ use cm1, and doesn't need region function */
	color_sharp_dm_peaking_gain_RBUS color_sharp_dm_peaking_gain_reg;
	color_sharp_dm_peaking_bound_1_RBUS color_sharp_dm_peaking_bound_1_reg;
	color_sharp_dm_cds_cm1_u_bound_0_RBUS color_sharp_dm_cds_cm1_u_bound_0_reg;
	color_sharp_dm_cds_cm1_v_bound_0_RBUS color_sharp_dm_cds_cm1_v_bound_0_reg;
	color_sharp_dm_cds_cm1_u_bound_1_RBUS color_sharp_dm_cds_cm1_u_bound_1_reg;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_RBUS color_sharp_dm_cds_peaking_gain_bound_ctrl_reg;
	color_sharp_shp_cds_region1_0_RBUS color_sharp_shp_cds_region1_0_reg;
	color_sharp_dm_cds_peaking_gain_cm1_edge_RBUS color_sharp_dm_cds_peaking_gain_cm1_edge_reg;
	color_sharp_dm_cds_peaking_bound_cm1_edge_RBUS color_sharp_dm_cds_peaking_bound_cm1_edge_reg;
	color_sharp_dm_cds_peaking_gain_cm1_tex_RBUS color_sharp_dm_cds_peaking_gain_cm1_tex_reg;
	color_sharp_dm_cds_peaking_bound_cm1_tex_RBUS color_sharp_dm_cds_peaking_bound_cm1_tex_reg;
	color_sharp_dm_cds_peaking_gain_cm1_v_RBUS color_sharp_dm_cds_peaking_gain_cm1_v_reg;
	color_sharp_dm_cds_peaking_bound_cm1_v_RBUS color_sharp_dm_cds_peaking_bound_cm1_v_reg;
	color_sharp_dm_cds_peaking_gain_cm1_v_edg_RBUS color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg;
	color_sharp_dm_cds_peaking_bound_cm1_v_edg_RBUS color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg;
	
	color_sharp_dm_peaking_gain_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_GAIN_reg);
	color_sharp_dm_peaking_bound_1_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_BOUND_1_reg);
	color_sharp_dm_cds_cm1_u_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg);
	color_sharp_dm_cds_cm1_v_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_reg);
	color_sharp_dm_cds_cm1_u_bound_1_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_reg);
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg);
	color_sharp_shp_cds_region1_0_reg.regValue = IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION1_0_reg);
	color_sharp_dm_cds_peaking_gain_cm1_edge_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg);
	color_sharp_dm_cds_peaking_bound_cm1_edge_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_reg);
	color_sharp_dm_cds_peaking_gain_cm1_tex_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_reg);
	color_sharp_dm_cds_peaking_bound_cm1_tex_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_reg);
	color_sharp_dm_cds_peaking_gain_cm1_v_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_reg);
	color_sharp_dm_cds_peaking_bound_cm1_v_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_reg);
	color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg);
	color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_reg);
	// uv range
	color_sharp_dm_cds_cm1_u_bound_1_reg.cu_1 = CDS_uv_range[0][0];
	color_sharp_dm_cds_cm1_u_bound_1_reg.cv_1 = CDS_uv_range[0][1];
	color_sharp_dm_cds_cm1_u_bound_0_reg.u_lb_1 = CDS_uv_range[0][2];
	color_sharp_dm_cds_cm1_u_bound_0_reg.u_ub_1 = CDS_uv_range[0][3];
	color_sharp_dm_cds_cm1_v_bound_0_reg.v_lb_1 = CDS_uv_range[0][4];
	color_sharp_dm_cds_cm1_v_bound_0_reg.v_ub_1 = CDS_uv_range[0][5];
	color_sharp_dm_cds_cm1_u_bound_1_reg.uv_rad_1 = CDS_uv_range[0][6];
	color_sharp_dm_cds_cm1_v_bound_0_reg.cm1_mode = CDS_uv_range[0][7];
	// control mode
	color_sharp_dm_cds_cm1_v_bound_0_reg.cm1_conti_enable = CDS_control[0][0];
	color_sharp_dm_cds_cm1_v_bound_0_reg.cm1_conti_area = CDS_control[0][1];
	color_sharp_shp_cds_region1_0_reg.cds_region_1_smooth = CDS_control[0][2];
	// Edge
	color_sharp_dm_cds_peaking_gain_cm1_edge_reg.gain_pos	= clip(0, 255, basic_pq_val[PQ_IP_SHP][0]+pq_offset[PQ_IP_SHP][0]);
	color_sharp_dm_cds_peaking_gain_cm1_edge_reg.gain_neg	= clip(0, 255, basic_pq_val[PQ_IP_SHP][1]+pq_offset[PQ_IP_SHP][0]);
	color_sharp_dm_cds_peaking_bound_cm1_edge_reg.hv_pos	= clip(0,1023, basic_pq_val[PQ_IP_SHP][2]+pq_offset[PQ_IP_SHP][1]);
	color_sharp_dm_cds_peaking_bound_cm1_edge_reg.hv_neg	= clip(0,1023, basic_pq_val[PQ_IP_SHP][3]+pq_offset[PQ_IP_SHP][1]);
	color_sharp_dm_cds_peaking_bound_cm1_edge_reg.lv		= clip(0, 255, basic_pq_val[PQ_IP_SHP][4]+pq_offset[PQ_IP_SHP][2]);
	// text
	color_sharp_dm_cds_peaking_gain_cm1_tex_reg.gain_pos = color_sharp_dm_peaking_gain_reg.gain_pos;
	color_sharp_dm_cds_peaking_gain_cm1_tex_reg.gain_neg = color_sharp_dm_peaking_gain_reg.gain_neg;
	color_sharp_dm_cds_peaking_bound_cm1_tex_reg.hv_pos = color_sharp_dm_peaking_bound_1_reg.hv_pos;
	color_sharp_dm_cds_peaking_bound_cm1_tex_reg.hv_neg = color_sharp_dm_peaking_bound_1_reg.hv_neg;
	color_sharp_dm_cds_peaking_bound_cm1_tex_reg.lv = color_sharp_dm_peaking_bound_1_reg.lv;
	// vertical
	color_sharp_dm_cds_peaking_gain_cm1_v_reg.gain_pos	= clip(0, 255, basic_pq_val[PQ_IP_SHP][10]+pq_offset[PQ_IP_SHP][0]);
	color_sharp_dm_cds_peaking_gain_cm1_v_reg.gain_neg	= clip(0, 255, basic_pq_val[PQ_IP_SHP][11]+pq_offset[PQ_IP_SHP][0]);
	color_sharp_dm_cds_peaking_bound_cm1_v_reg.hv_pos	= clip(0, 255, basic_pq_val[PQ_IP_SHP][12]+pq_offset[PQ_IP_SHP][1]);
	color_sharp_dm_cds_peaking_bound_cm1_v_reg.hv_neg	= clip(0, 255, basic_pq_val[PQ_IP_SHP][13]+pq_offset[PQ_IP_SHP][1]);
	color_sharp_dm_cds_peaking_bound_cm1_v_reg.lv		= clip(0, 255, basic_pq_val[PQ_IP_SHP][14]+pq_offset[PQ_IP_SHP][2]);
	// vertical edge
	color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.gain_pos	= clip(0, 255, basic_pq_val[PQ_IP_SHP][15]+pq_offset[PQ_IP_SHP][0]);
	color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.gain_neg	= clip(0, 255, basic_pq_val[PQ_IP_SHP][16]+pq_offset[PQ_IP_SHP][0]);
	color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg.hv_pos	= clip(0, 255, basic_pq_val[PQ_IP_SHP][17]+pq_offset[PQ_IP_SHP][1]);
	color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg.hv_neg	= clip(0, 255, basic_pq_val[PQ_IP_SHP][18]+pq_offset[PQ_IP_SHP][1]);
	color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg.lv		= clip(0, 255, basic_pq_val[PQ_IP_SHP][19]+pq_offset[PQ_IP_SHP][2]);
	
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM1_U_BOUND_0_reg,color_sharp_dm_cds_cm1_u_bound_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM1_V_BOUND_0_reg,color_sharp_dm_cds_cm1_v_bound_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM1_U_BOUND_1_reg,color_sharp_dm_cds_cm1_u_bound_1_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg,color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION1_0_reg,color_sharp_shp_cds_region1_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_EDGE_reg,color_sharp_dm_cds_peaking_gain_cm1_edge_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_EDGE_reg,color_sharp_dm_cds_peaking_bound_cm1_edge_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_TEX_reg,color_sharp_dm_cds_peaking_gain_cm1_tex_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_TEX_reg,color_sharp_dm_cds_peaking_bound_cm1_tex_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_reg,color_sharp_dm_cds_peaking_gain_cm1_v_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_reg,color_sharp_dm_cds_peaking_bound_cm1_v_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM1_V_EDG_reg,color_sharp_dm_cds_peaking_gain_cm1_v_edg_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM1_V_EDG_reg,color_sharp_dm_cds_peaking_bound_cm1_v_edg_reg.regValue);
}

void drvif_color_AI_PQ_set_cm2(int basic_pq_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM], int pq_offset[PQ_IP_TYPE_NUM][PQ_TUNING_NUM])
{	
	/* for scene PQ use cm1, and doesn't need region function */
	
	color_sharp_dm_peaking_gain_RBUS color_sharp_dm_peaking_gain_reg;
	color_sharp_dm_peaking_bound_1_RBUS color_sharp_dm_peaking_bound_1_reg;
	color_sharp_dm_cds_cm2_u_bound_0_RBUS color_sharp_dm_cds_cm2_u_bound_0_reg;
	color_sharp_dm_cds_cm2_v_bound_0_RBUS color_sharp_dm_cds_cm2_v_bound_0_reg;
	color_sharp_dm_cds_cm2_u_bound_1_RBUS color_sharp_dm_cds_cm2_u_bound_1_reg;
	color_sharp_dm_cds_peaking_gain_bound_ctrl_RBUS color_sharp_dm_cds_peaking_gain_bound_ctrl_reg;
	color_sharp_shp_cds_region2_0_RBUS color_sharp_shp_cds_region2_0_reg;
	color_sharp_dm_cds_peaking_gain_cm2_edge_RBUS color_sharp_dm_cds_peaking_gain_cm2_edge_reg;
	color_sharp_dm_cds_peaking_bound_cm2_edge_RBUS color_sharp_dm_cds_peaking_bound_cm2_edge_reg;
	color_sharp_dm_cds_peaking_gain_cm2_tex_RBUS color_sharp_dm_cds_peaking_gain_cm2_tex_reg;
	color_sharp_dm_cds_peaking_bound_cm2_tex_RBUS color_sharp_dm_cds_peaking_bound_cm2_tex_reg;
	color_sharp_dm_cds_peaking_gain_cm2_v_RBUS color_sharp_dm_cds_peaking_gain_cm2_v_reg;
	color_sharp_dm_cds_peaking_bound_cm2_v_RBUS color_sharp_dm_cds_peaking_bound_cm2_v_reg;
	color_sharp_dm_cds_peaking_gain_cm2_v_edg_RBUS color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg;
	color_sharp_dm_cds_peaking_bound_cm2_v_edg_RBUS color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg;
	
	
	color_sharp_dm_peaking_gain_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_GAIN_reg);
	color_sharp_dm_peaking_bound_1_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_BOUND_1_reg);
	color_sharp_dm_cds_cm2_u_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg);
	color_sharp_dm_cds_cm2_v_bound_0_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_reg);
	color_sharp_dm_cds_cm2_u_bound_1_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_reg);
	color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg);
	color_sharp_shp_cds_region2_0_reg.regValue = IoReg_Read32(COLOR_SHARP_SHP_CDS_REGION2_0_reg);
	color_sharp_dm_cds_peaking_gain_cm2_edge_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg);
	color_sharp_dm_cds_peaking_bound_cm2_edge_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_reg);
	color_sharp_dm_cds_peaking_gain_cm2_tex_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_reg);
	color_sharp_dm_cds_peaking_bound_cm2_tex_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_reg);
	color_sharp_dm_cds_peaking_gain_cm2_v_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_reg);
	color_sharp_dm_cds_peaking_bound_cm2_v_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_reg);
	color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg);
	color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_reg);
	// uv range
	color_sharp_dm_cds_cm2_u_bound_1_reg.cu_2 = CDS_uv_range[1][0];
	color_sharp_dm_cds_cm2_u_bound_1_reg.cv_2 = CDS_uv_range[1][1];
	color_sharp_dm_cds_cm2_u_bound_0_reg.u_lb_2 = CDS_uv_range[1][2];
	color_sharp_dm_cds_cm2_u_bound_0_reg.u_ub_2 = CDS_uv_range[1][3];
	color_sharp_dm_cds_cm2_v_bound_0_reg.v_lb_2 = CDS_uv_range[1][4];
	color_sharp_dm_cds_cm2_v_bound_0_reg.v_ub_2 = CDS_uv_range[1][5];
	color_sharp_dm_cds_cm2_u_bound_1_reg.uv_rad_2 = CDS_uv_range[1][6];
	color_sharp_dm_cds_cm2_v_bound_0_reg.cm2_mode = CDS_uv_range[1][7];
	// control mode
	color_sharp_dm_cds_cm2_v_bound_0_reg.cm2_conti_enable = CDS_control[1][0];
	color_sharp_dm_cds_cm2_v_bound_0_reg.cm2_conti_area = CDS_control[1][1];
	color_sharp_shp_cds_region2_0_reg.cds_region_2_smooth = CDS_control[1][2];

	// Edge
	color_sharp_dm_cds_peaking_gain_cm2_edge_reg.gain_pos	= clip(0, 255, basic_pq_val[PQ_IP_SHP][0]+pq_offset[PQ_IP_SHP][3]);
	color_sharp_dm_cds_peaking_gain_cm2_edge_reg.gain_neg	= clip(0, 255, basic_pq_val[PQ_IP_SHP][1]+pq_offset[PQ_IP_SHP][3]);
	color_sharp_dm_cds_peaking_bound_cm2_edge_reg.hv_pos	= clip(0,1023, basic_pq_val[PQ_IP_SHP][2]+pq_offset[PQ_IP_SHP][4]);
	color_sharp_dm_cds_peaking_bound_cm2_edge_reg.hv_neg	= clip(0,1023, basic_pq_val[PQ_IP_SHP][3]+pq_offset[PQ_IP_SHP][4]);
	color_sharp_dm_cds_peaking_bound_cm2_edge_reg.lv		= clip(0, 255, basic_pq_val[PQ_IP_SHP][4]+pq_offset[PQ_IP_SHP][5]);
	// text
	color_sharp_dm_cds_peaking_gain_cm2_tex_reg.gain_pos = color_sharp_dm_peaking_gain_reg.gain_pos;
	color_sharp_dm_cds_peaking_gain_cm2_tex_reg.gain_neg = color_sharp_dm_peaking_gain_reg.gain_neg;
	color_sharp_dm_cds_peaking_bound_cm2_tex_reg.hv_pos = color_sharp_dm_peaking_bound_1_reg.hv_pos;
	color_sharp_dm_cds_peaking_bound_cm2_tex_reg.hv_neg = color_sharp_dm_peaking_bound_1_reg.hv_neg;
	color_sharp_dm_cds_peaking_bound_cm2_tex_reg.lv = color_sharp_dm_peaking_bound_1_reg.lv;
	// vertical
	color_sharp_dm_cds_peaking_gain_cm2_v_reg.gain_pos	= clip(0, 255, basic_pq_val[PQ_IP_SHP][10]+pq_offset[PQ_IP_SHP][3]);
	color_sharp_dm_cds_peaking_gain_cm2_v_reg.gain_neg	= clip(0, 255, basic_pq_val[PQ_IP_SHP][11]+pq_offset[PQ_IP_SHP][3]);
	color_sharp_dm_cds_peaking_bound_cm2_v_reg.hv_pos	= clip(0, 255, basic_pq_val[PQ_IP_SHP][12]+pq_offset[PQ_IP_SHP][4]);
	color_sharp_dm_cds_peaking_bound_cm2_v_reg.hv_neg	= clip(0, 255, basic_pq_val[PQ_IP_SHP][13]+pq_offset[PQ_IP_SHP][4]);
	color_sharp_dm_cds_peaking_bound_cm2_v_reg.lv		= clip(0, 255, basic_pq_val[PQ_IP_SHP][14]+pq_offset[PQ_IP_SHP][5]);
	// vertical edge
	color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.gain_pos	= clip(0, 255, basic_pq_val[PQ_IP_SHP][15]+pq_offset[PQ_IP_SHP][3]);
	color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.gain_neg	= clip(0, 255, basic_pq_val[PQ_IP_SHP][16]+pq_offset[PQ_IP_SHP][3]);
	color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg.hv_pos	= clip(0, 255, basic_pq_val[PQ_IP_SHP][17]+pq_offset[PQ_IP_SHP][4]);
	color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg.hv_neg	= clip(0, 255, basic_pq_val[PQ_IP_SHP][18]+pq_offset[PQ_IP_SHP][4]);
	color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg.lv		= clip(0, 255, basic_pq_val[PQ_IP_SHP][19]+pq_offset[PQ_IP_SHP][5]);
	
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM2_U_BOUND_0_reg,color_sharp_dm_cds_cm2_u_bound_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM2_V_BOUND_0_reg,color_sharp_dm_cds_cm2_v_bound_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_CM2_U_BOUND_1_reg,color_sharp_dm_cds_cm2_u_bound_1_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_BOUND_CTRL_reg,color_sharp_dm_cds_peaking_gain_bound_ctrl_reg.regValue);
	IoReg_Write32(COLOR_SHARP_SHP_CDS_REGION2_0_reg,color_sharp_shp_cds_region2_0_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_EDGE_reg,color_sharp_dm_cds_peaking_gain_cm2_edge_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_EDGE_reg,color_sharp_dm_cds_peaking_bound_cm2_edge_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_TEX_reg,color_sharp_dm_cds_peaking_gain_cm2_tex_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_TEX_reg,color_sharp_dm_cds_peaking_bound_cm2_tex_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_reg,color_sharp_dm_cds_peaking_gain_cm2_v_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_reg,color_sharp_dm_cds_peaking_bound_cm2_v_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_GAIN_CM2_V_EDG_reg,color_sharp_dm_cds_peaking_gain_cm2_v_edg_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_CDS_PEAKING_BOUND_CM2_V_EDG_reg,color_sharp_dm_cds_peaking_bound_cm2_v_edg_reg.regValue);
}

void drvif_color_AI_PQ_set_2dpk(int basic_pq_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM], int pq_offset[PQ_IP_TYPE_NUM][PQ_TUNING_NUM])
{
    color_sharp_dm_segpk_edgpk3_RBUS color_sharp_dm_segpk_edgpk3;
    color_sharp_dm_segpk_edgpk4_RBUS color_sharp_dm_segpk_edgpk4;
	color_sharp_dm_peaking_gain_RBUS color_sharp_dm_peaking_gain_reg;
	color_sharp_dm_peaking_bound_1_RBUS color_sharp_dm_peaking_bound_1_reg;
 	color_sharp_dm_segpk_vpk2_RBUS	color_sharp_dm_segpk_vpk2;
	color_sharp_dm_segpk_vpk3_RBUS	color_sharp_dm_segpk_vpk3;
   	color_sharp_dm_segpk_vpk5_RBUS color_sharp_dm_segpk_vpk5;
    color_sharp_dm_segpk_vpk6_RBUS color_sharp_dm_segpk_vpk6;

	color_sharp_dm_segpk_edgpk3.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_EDGPK3_reg);
	color_sharp_dm_segpk_edgpk4.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_EDGPK4_reg);
	color_sharp_dm_peaking_gain_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_GAIN_reg);
	color_sharp_dm_peaking_bound_1_reg.regValue = IoReg_Read32(COLOR_SHARP_DM_PEAKING_BOUND_1_reg);
	color_sharp_dm_segpk_vpk2.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_VPK2_reg);
	color_sharp_dm_segpk_vpk3.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_VPK3_reg);
    color_sharp_dm_segpk_vpk5.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_VPK5_reg);
    color_sharp_dm_segpk_vpk6.regValue = IoReg_Read32(COLOR_SHARP_DM_SEGPK_VPK6_reg);

	// edge
	color_sharp_dm_segpk_edgpk3.gain_pos 	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][0]+pq_offset[PQ_IP_SHP][6]);
	color_sharp_dm_segpk_edgpk3.gain_neg 	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][1]+pq_offset[PQ_IP_SHP][6]);
	color_sharp_dm_segpk_edgpk4.hv_pos 		= clip( 0,1023, basic_pq_val[PQ_IP_SHP][2]+pq_offset[PQ_IP_SHP][7]);
	color_sharp_dm_segpk_edgpk4.hv_neg 		= clip( 0,1023, basic_pq_val[PQ_IP_SHP][3]+pq_offset[PQ_IP_SHP][7]);
	color_sharp_dm_segpk_edgpk4.lv 			= clip( 0, 255, basic_pq_val[PQ_IP_SHP][4]+pq_offset[PQ_IP_SHP][8]);

	// text
	color_sharp_dm_peaking_gain_reg.gain_pos 	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][5]+pq_offset[PQ_IP_SHP][9]);
	color_sharp_dm_peaking_gain_reg.gain_neg 	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][6]+pq_offset[PQ_IP_SHP][9]);
	color_sharp_dm_peaking_bound_1_reg.hv_pos 	= clip( 0,1023, basic_pq_val[PQ_IP_SHP][7]+pq_offset[PQ_IP_SHP][10]);
	color_sharp_dm_peaking_bound_1_reg.hv_neg 	= clip( 0,1023, basic_pq_val[PQ_IP_SHP][8]+pq_offset[PQ_IP_SHP][10]);
	color_sharp_dm_peaking_bound_1_reg.lv 		= clip( 0, 255, basic_pq_val[PQ_IP_SHP][9]+pq_offset[PQ_IP_SHP][11]);

	// v text
	color_sharp_dm_segpk_vpk2.vpk_gain_pos	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][10]+pq_offset[PQ_IP_SHP][12]);
	color_sharp_dm_segpk_vpk2.vpk_gain_neg	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][11]+pq_offset[PQ_IP_SHP][12]);
	color_sharp_dm_segpk_vpk3.vpk_hv_pos 	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][12]+pq_offset[PQ_IP_SHP][13]);
	color_sharp_dm_segpk_vpk3.vpk_hv_neg	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][13]+pq_offset[PQ_IP_SHP][13]);
	color_sharp_dm_segpk_vpk2.vpk_lv		= clip( 0, 255, basic_pq_val[PQ_IP_SHP][14]+pq_offset[PQ_IP_SHP][14]);

	
	// v edge
	color_sharp_dm_segpk_vpk5.vpk_edg_gain_pos	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][15]+pq_offset[PQ_IP_SHP][15]);
	color_sharp_dm_segpk_vpk5.vpk_edg_gain_neg	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][16]+pq_offset[PQ_IP_SHP][15]);
	color_sharp_dm_segpk_vpk6.vpk_edg_hv_pos 	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][17]+pq_offset[PQ_IP_SHP][16]);
	color_sharp_dm_segpk_vpk6.vpk_edg_hv_neg	= clip( 0, 255, basic_pq_val[PQ_IP_SHP][18]+pq_offset[PQ_IP_SHP][16]);
	color_sharp_dm_segpk_vpk5.vpk_edg_lv		= clip( 0, 255, basic_pq_val[PQ_IP_SHP][19]+pq_offset[PQ_IP_SHP][17]);

	
	IoReg_Write32(COLOR_SHARP_DM_SEGPK_EDGPK3_reg, color_sharp_dm_segpk_edgpk3.regValue);
	IoReg_Write32(COLOR_SHARP_DM_SEGPK_EDGPK4_reg, color_sharp_dm_segpk_edgpk4.regValue);
	IoReg_Write32(COLOR_SHARP_DM_PEAKING_GAIN_reg, color_sharp_dm_peaking_gain_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_PEAKING_BOUND_1_reg, color_sharp_dm_peaking_bound_1_reg.regValue);
	IoReg_Write32(COLOR_SHARP_DM_SEGPK_VPK2_reg, color_sharp_dm_segpk_vpk2.regValue);
	IoReg_Write32(COLOR_SHARP_DM_SEGPK_VPK3_reg, color_sharp_dm_segpk_vpk3.regValue);
	IoReg_Write32(COLOR_SHARP_DM_SEGPK_VPK5_reg, color_sharp_dm_segpk_vpk5.regValue);
	IoReg_Write32(COLOR_SHARP_DM_SEGPK_VPK6_reg, color_sharp_dm_segpk_vpk6.regValue);

}

void drvif_color_AI_PQ_set_tnr(int basic_pq_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM], int pq_offset[PQ_IP_TYPE_NUM][PQ_TUNING_NUM])
{
}

void drvif_color_AI_PQ_set_tnr_noise_level(signed char *value)
{
	int tmp;
	tmp = *value + scalerAI_PQ_offset_get(PQ_IP_TNR, 0);	
	*value = clip(0, 9, tmp);
}

void drvif_color_AI_PQ_set_color(int basic_pq_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM], int pq_offset[PQ_IP_TYPE_NUM][PQ_TUNING_NUM])
{
	int con_gain, bri_gain, sat_gain, ct_r, ct_g, ct_b;
	_system_setting_info *system_info_struct = NULL;
	extern short bri_10bit;

	system_info_struct = (_system_setting_info *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_system_info_structure);
	if (system_info_struct == NULL) {
		return;
	}

	con_gain =  clip( 0, 255, basic_pq_val[PQ_IP_COLOR][0]+pq_offset[PQ_IP_COLOR][0]);
	bri_gain =  clip( 0, 255, basic_pq_val[PQ_IP_COLOR][1]+pq_offset[PQ_IP_COLOR][1]);
	sat_gain =  clip( 0, 255, basic_pq_val[PQ_IP_COLOR][2]+pq_offset[PQ_IP_COLOR][2]);
	ct_r	 =  clip( 0,512, basic_pq_val[PQ_IP_COLOR][3]+pq_offset[PQ_IP_COLOR][3]);
	ct_g	 =  clip( 0,512, basic_pq_val[PQ_IP_COLOR][4]+pq_offset[PQ_IP_COLOR][4]);
	ct_b	 =  clip( 0,512, basic_pq_val[PQ_IP_COLOR][5]+pq_offset[PQ_IP_COLOR][5]);
	
	bri_10bit =  bri_gain << 2;
	system_info_struct->OSD_Info.Contrast_Gain = fwif_color_ChangeOneUINT16Endian(con_gain, 0);
	system_info_struct->OSD_Info.Brightness_Gain = fwif_color_ChangeOneUINT16Endian(bri_gain, 0);
	system_info_struct->OSD_Info.Saturation_Gain = fwif_color_ChangeOneUINT16Endian(sat_gain, 0);
	fwif_color_setCon_Bri_Color_Tint_inYUV2RGB_from_OSD_Gain_AI(0, SLR_MAIN_DISPLAY, system_info_struct);

	//drvif_color_set_color_temp(1, ct_r, ct_g, ct_b, 0, 0, 0);
	fwif_color_setrgbcontrast_By_Table(ct_r, ct_g, ct_b, 0);
}

void drvif_color_AI_PQ_set_LC(int basic_pq_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM], int pq_offset[PQ_IP_TYPE_NUM][PQ_TUNING_NUM])
{
	lc_lc_tonemapping_blending_RBUS lc_lc_tonemapping_blending_reg;
	lc_lc_global_ctrl1_RBUS lc_lc_global_ctrl1_reg;

	lc_lc_tonemapping_blending_reg.regValue = IoReg_Read32(LC_LC_ToneMapping_blending_reg);
	lc_lc_global_ctrl1_reg.regValue = IoReg_Read32(LC_LC_Global_Ctrl1_reg);

	lc_lc_tonemapping_blending_reg.lc_tmap_blend_factor = clip( 0, 255, basic_pq_val[PQ_IP_LC][0]+pq_offset[PQ_IP_LC][0]);
	lc_lc_global_ctrl1_reg.lc_db_apply = 1;
	
	IoReg_Write32(LC_LC_ToneMapping_blending_reg, lc_lc_tonemapping_blending_reg.regValue);
	IoReg_Write32(LC_LC_Global_Ctrl1_reg, lc_lc_global_ctrl1_reg.regValue);
}

void drvif_color_AI_PQ_set_mnr(int basic_pq_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM], int pq_offset[PQ_IP_TYPE_NUM][PQ_TUNING_NUM])
{
	nr_mosquito_nr_edge_thd_ctrl_RBUS nr_mosquito_nr_edge_thd_ctrl_reg;
	nr_mosquito_nr_edge_thd_ctrl_1_RBUS nr_mosquito_nr_edge_thd_ctrl_1_reg;
	
	nr_mosquito_nr_edge_thd_ctrl_reg.regValue = IoReg_Read32(NR_MOSQUITO_NR_EDGE_THD_CTRL_reg);
	nr_mosquito_nr_edge_thd_ctrl_1_reg.regValue = IoReg_Read32(NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg);

	nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd1 = clip( 0, 255, basic_pq_val[PQ_IP_NR][0]+pq_offset[PQ_IP_NR][0]);
	nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd2	= clip( 0, 255, basic_pq_val[PQ_IP_NR][1]+pq_offset[PQ_IP_NR][1]);
	nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd3	= clip( 0, 255, basic_pq_val[PQ_IP_NR][2]+pq_offset[PQ_IP_NR][2]);
	nr_mosquito_nr_edge_thd_ctrl_1_reg.mnr_edgethd4	= clip( 0, 255, basic_pq_val[PQ_IP_NR][3]+pq_offset[PQ_IP_NR][3]);
	nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd5	= clip( 0, 255, basic_pq_val[PQ_IP_NR][4]+pq_offset[PQ_IP_NR][4]);
	nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd6	= clip( 0, 255, basic_pq_val[PQ_IP_NR][5]+pq_offset[PQ_IP_NR][5]);
	nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd7	= clip( 0, 255, basic_pq_val[PQ_IP_NR][6]+pq_offset[PQ_IP_NR][6]);
	nr_mosquito_nr_edge_thd_ctrl_reg.mnr_edgethd8	= clip( 0, 255, basic_pq_val[PQ_IP_NR][7]+pq_offset[PQ_IP_NR][7]);

	IoReg_Write32(NR_MOSQUITO_NR_EDGE_THD_CTRL_reg, nr_mosquito_nr_edge_thd_ctrl_reg.regValue);
	IoReg_Write32(NR_MOSQUITO_NR_EDGE_THD_CTRL_1_reg, nr_mosquito_nr_edge_thd_ctrl_1_reg.regValue);


}

void drvif_color_AI_PQ_set_decontour(int basic_pq_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM], int pq_offset[PQ_IP_TYPE_NUM][PQ_TUNING_NUM])
{
}

void drvif_color_AI_PQ_set_decontour_lowbd(unsigned int *value)
{
	int tmp;
	tmp = *value + scalerAI_PQ_offset_get(PQ_IP_NR, 8);	
	*value = clip(0, 255, tmp);
}

void drvif_color_AI_PQ_set(int basic_pq_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM], int pq_offset[PQ_IP_TYPE_NUM][PQ_TUNING_NUM])
{
// (1) shp
//	cm1
	drvif_color_AI_PQ_set_cm1(basic_pq_val, pq_offset);
//	cm2
	drvif_color_AI_PQ_set_cm2(basic_pq_val, pq_offset);
//	2dpk
	drvif_color_AI_PQ_set_2dpk(basic_pq_val, pq_offset);
	
// (2) tnr
//	noise level
	drvif_color_AI_PQ_set_tnr(basic_pq_val, pq_offset);

// (3) color
//	osd, ct
	drvif_color_AI_PQ_set_color(basic_pq_val, pq_offset);

// (4) LC
	drvif_color_AI_PQ_set_LC(basic_pq_val, pq_offset);

// (5) nr
//	mnr
	drvif_color_AI_PQ_set_mnr(basic_pq_val, pq_offset);
//	decontour
	drvif_color_AI_PQ_set_decontour(basic_pq_val, pq_offset);

}

void drvif_color_AI_PQ_get_shp(int (*pq_val)[PQ_TUNING_NUM])
{
/*
[0]edge gain_pos [1]edge gain_neg [2]edge hv_pos [3]edge hv_neg [4]edge lv 
[5]text gain_pos [6]text gain_neg [7]text hv_pos [8]text hv_neg [9]text lv 
[10]vtext gain_pos [11]vtext gain_neg [12]vtext hv_pos [13]vtext hv_neg [14]vtext lv 
[15]vedge gain_pos [16]vedge gain_neg [17]vedge hv_pos [18]vedge hv_neg [19]vedge lv

	ex: pq_val[PQ_IP_SHP][0]=1;
*/

	pq_val[PQ_IP_SHP][0]=120;
	pq_val[PQ_IP_SHP][1]=120;
	pq_val[PQ_IP_SHP][2]=200;
	pq_val[PQ_IP_SHP][3]=200;
	pq_val[PQ_IP_SHP][4]=3;
	pq_val[PQ_IP_SHP][5]=75;
	pq_val[PQ_IP_SHP][6]=75;
	pq_val[PQ_IP_SHP][7]=100;
	pq_val[PQ_IP_SHP][8]=100;
	pq_val[PQ_IP_SHP][9]=1;
	pq_val[PQ_IP_SHP][10]=50;
	pq_val[PQ_IP_SHP][11]=50;
	pq_val[PQ_IP_SHP][12]=64;
	pq_val[PQ_IP_SHP][13]=64;
	pq_val[PQ_IP_SHP][14]=0;
	pq_val[PQ_IP_SHP][15]=40;
	pq_val[PQ_IP_SHP][16]=40;
	pq_val[PQ_IP_SHP][17]=100;
	pq_val[PQ_IP_SHP][18]=100;
	pq_val[PQ_IP_SHP][19]=0;

}
void drvif_color_AI_PQ_get_tnr(int (*pq_val)[PQ_TUNING_NUM])
{
/*
[0] noise level

	ex: pq_val[PQ_IP_TNR][0]=2;
*/
	pq_val[PQ_IP_TNR][0]=2;
}
void drvif_color_AI_PQ_get_color(int (*pq_val)[PQ_TUNING_NUM])
{
/*
[0]osd contrast [1]osd brightness [2]osd saturation 
[3]color temp contrast_r [4]color temp contrast_g [5]color temp contrast_b

	ex: pq_val[PQ_IP_COLOR][0]=3;
*/
	pq_val[PQ_IP_COLOR][0]=AI_PQ_UI_color.osd_contrast;//128;
	pq_val[PQ_IP_COLOR][1]=AI_PQ_UI_color.osd_brightness;//118;
	pq_val[PQ_IP_COLOR][2]=AI_PQ_UI_color.osd_saturation;//140;
	pq_val[PQ_IP_COLOR][3]=AI_PQ_UI_color.osd_colortempcontrast_r;//2048;
	pq_val[PQ_IP_COLOR][4]=AI_PQ_UI_color.osd_colortempcontrast_g;//2048;
	pq_val[PQ_IP_COLOR][5]=AI_PQ_UI_color.osd_colortempcontrast_b;//2048;
}
void drvif_color_AI_PQ_get_lc(int (*pq_val)[PQ_TUNING_NUM])
{
/*
[0]blend factor
	ex: pq_val[PQ_IP_LC][0]=4;
*/
	pq_val[PQ_IP_LC][0]=0;
}
void drvif_color_AI_PQ_get_nr(int (*pq_val)[PQ_TUNING_NUM])
{
/*
[0]mnr_edge1 [1]mnr_edge2 [2]mnr_edge3 [3]mnr_edge4 [4]mnr_edge5 [5]mnr_edge6 [6]mnr_edge7 [7]mnr_edge8
[8]decontour_lowblend

	ex: pq_val[PQ_IP_NR][0]=5;
*/
	pq_val[PQ_IP_NR][0]=73;	
	pq_val[PQ_IP_NR][1]=78;	
	pq_val[PQ_IP_NR][2]=83;	
	pq_val[PQ_IP_NR][3]=88;	
	pq_val[PQ_IP_NR][4]=93;	
	pq_val[PQ_IP_NR][5]=98;	
	pq_val[PQ_IP_NR][6]=103;	
	pq_val[PQ_IP_NR][7]=108;	
	pq_val[PQ_IP_NR][8]=128;	
}

void drvif_color_AI_PQ_get(int (*pq_val)[PQ_TUNING_NUM])
{	
	drvif_color_AI_PQ_get_shp(pq_val);
	drvif_color_AI_PQ_get_tnr(pq_val);
	drvif_color_AI_PQ_get_color(pq_val);
	drvif_color_AI_PQ_get_lc(pq_val);
	drvif_color_AI_PQ_get_nr(pq_val);
}


// end 0506 lsy
#endif

#endif // end AI config
