/*******************************************************************************
* @file    scalerColorLib_AIPQ.cpp
* @brief
* @note    Copyright (c) 2014 RealTek Technology Co., Ltd.
*		   All rights reserved.
*		   No. 2, Innovation Road II,
*		   Hsinchu Science Park,
*		   Hsinchu 300, Taiwan
*
* @log
* Revision 0.1	2020/07/06
* create
*******************************************************************************/
/*******************************************************************************
 * Header include
******************************************************************************/
#include <tvscalercontrol/io/ioregdrv.h>
#include <tvscalercontrol/scaler/scalercolorlib_AIPQ.h>
#include <tvscalercontrol/vip/ai_pq.h>
#include <tvscalercontrol/vip/nr.h>
#include "vgip_isr/scalerAI.h"

#define TAG_NAME "VPQ"

/*******************************************************************************
* 
******************************************************************************/
#if defined(CONFIG_RTK_AI_DRV)

void Scaler_set_AI_iEdgeSmooth_offset(unsigned char TableIdx)
{
	extern iEdgeSmooth_Offset_table iEdgeSmooth_Offset[VIP_ICM_TBL_X];
	extern unsigned char Ori_IESM_Mixer_Weight;
	extern unsigned char Ori_IESM_3tap_gain;
	extern unsigned char Ori_IESM_5tap_gain;

	unsigned char ai_iEdgeSmooth_calMode=0;
	
	int mixer_weight=0;
	unsigned char IESM_3tap_gain=0;
	unsigned char IESM_5tap_gain=0;

	iedge_smooth_dejagging_ctrl0_RBUS iedge_smooth_dejagging_ctrl0;
	iedge_smooth_dejagging_ctrl0.regValue = IoReg_Read32(IEDGE_SMOOTH_dejagging_ctrl0_reg);

	ai_iEdgeSmooth_calMode=iEdgeSmooth_Offset[TableIdx].ai_iEdgeSmooth_calMode;

	if(ai_iEdgeSmooth_calMode==ai_calMode_gain){
		mixer_weight =Ori_IESM_Mixer_Weight * iEdgeSmooth_Offset[TableIdx].mixer_weight;

		IESM_3tap_gain=Ori_IESM_3tap_gain * iEdgeSmooth_Offset[TableIdx].IESM_3tap_gain;
		IESM_5tap_gain=Ori_IESM_5tap_gain * iEdgeSmooth_Offset[TableIdx].IESM_5tap_gain;
	}else{
		mixer_weight =Ori_IESM_Mixer_Weight + iEdgeSmooth_Offset[TableIdx].mixer_weight;

		IESM_3tap_gain=Ori_IESM_3tap_gain + iEdgeSmooth_Offset[TableIdx].IESM_3tap_gain;
		IESM_5tap_gain=Ori_IESM_5tap_gain + iEdgeSmooth_Offset[TableIdx].IESM_5tap_gain;
	}

	drvif_color_Mixer_ctrl_iedge(SLR_MAIN_DISPLAY,mixer_weight);
	
	iedge_smooth_dejagging_ctrl0.i_dejag_delta_gain3= IESM_3tap_gain;
	iedge_smooth_dejagging_ctrl0.i_dejag_delta_gain5= IESM_5tap_gain;
	IoReg_Write32(IEDGE_SMOOTH_dejagging_ctrl0_reg, iedge_smooth_dejagging_ctrl0.regValue);

}
void Scaler_set_AI_TNR_offset(unsigned char TableIdx)
{
	extern RTNR_Offset_table RTNR_Offset[VIP_ICM_TBL_X];
	unsigned char RTNR_y_enable=0;
	unsigned char RTNR_c_enable=0;
	
	RTNR_y_enable = RTNR_Offset[TableIdx].ai_TNR_Offset_Ctrl.RTNR_y_enable;
	RTNR_c_enable = RTNR_Offset[TableIdx].ai_TNR_Offset_Ctrl.RTNR_c_enable;

	if(RTNR_y_enable){
		fwif_color_set_AI_TNR_Y_K_offset(TableIdx);
		fwif_color_set_AI_TNR_Y_th_offset(TableIdx);
	}
	
	if(RTNR_c_enable){
		fwif_color_set_AI_TNR_C_K_offset(TableIdx);
		fwif_color_set_AI_TNR_C_th_offset(TableIdx);
	}

	drvif_color_DRV_RTNR_enable(RTNR_y_enable,RTNR_c_enable);

}

void fwif_color_set_AI_TNR_Y_K_offset(unsigned char TableIdx)
{
	extern RTNR_Offset_table RTNR_Offset[VIP_ICM_TBL_X];
	int Ori_oldY_K[PQ_TUNING_NUM]={0};
	int setting[PQ_TUNING_NUM]={0};
	unsigned char ai_Y_K_Offset_calMode=0;
	
	drvif_color_AI_scene_TNR_get(&Ori_oldY_K[0]);
	ai_Y_K_Offset_calMode=RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.ai_rtnr_y_k_calMode;

	if(ai_Y_K_Offset_calMode==ai_calMode_gain){
		setting[0]=Ori_oldY_K[0]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k0;
		setting[1]=Ori_oldY_K[1]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k1;
		setting[2]=Ori_oldY_K[2]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k2;
		setting[3]=Ori_oldY_K[3]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k3;
		setting[4]=Ori_oldY_K[4]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k4;
		setting[5]=Ori_oldY_K[5]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k5;
		setting[6]=Ori_oldY_K[6]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k6;
		setting[7]=Ori_oldY_K[7]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k7;
		setting[8]=Ori_oldY_K[8]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k8;
		setting[9]=Ori_oldY_K[9]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k9;
		setting[10]=Ori_oldY_K[10]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k10;
		setting[11]=Ori_oldY_K[11]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k11;
		setting[12]=Ori_oldY_K[12]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k12;
		setting[13]=Ori_oldY_K[13]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k13;
		setting[14]=Ori_oldY_K[14]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k14;
		setting[15]=Ori_oldY_K[15]*RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k15;

	}else{
		setting[0]=Ori_oldY_K[0]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k0;
		setting[1]=Ori_oldY_K[1]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k1;
		setting[2]=Ori_oldY_K[2]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k2;
		setting[3]=Ori_oldY_K[3]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k3;
		setting[4]=Ori_oldY_K[4]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k4;
		setting[5]=Ori_oldY_K[5]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k5;
		setting[6]=Ori_oldY_K[6]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k6;
		setting[7]=Ori_oldY_K[7]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k7;
		setting[8]=Ori_oldY_K[8]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k8;
		setting[9]=Ori_oldY_K[9]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k9;
		setting[10]=Ori_oldY_K[10]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k10;
		setting[11]=Ori_oldY_K[11]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k11;
		setting[12]=Ori_oldY_K[12]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k12;
		setting[13]=Ori_oldY_K[13]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k13;
		setting[14]=Ori_oldY_K[14]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k14;
		setting[15]=Ori_oldY_K[15]+RTNR_Offset[TableIdx].ai_RTNR_y_k_Offset_TBL.k15;
	}
	drvif_color_AI_scene_TNR_set(setting);

}

void fwif_color_set_AI_TNR_C_K_offset(unsigned char TableIdx)
{
	extern RTNR_Offset_table RTNR_Offset[VIP_ICM_TBL_X];
	int Ori_oldC_K[PQ_TUNING_NUM]={0};
	int setting[PQ_TUNING_NUM]={0};
	unsigned char ai_C_K_Offset_calMode=0;
	
	drvif_color_AI_scene_TNR_get_c(&Ori_oldC_K[0]);
	
	ai_C_K_Offset_calMode=RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.ai_rtnr_c_k_calMode;

	if(ai_C_K_Offset_calMode==ai_calMode_gain){
		setting[0]=Ori_oldC_K[0]*RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k0;
		setting[1]=Ori_oldC_K[1]*RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k1;
		setting[2]=Ori_oldC_K[2]*RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k2;
		setting[3]=Ori_oldC_K[3]*RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k3;
		setting[4]=Ori_oldC_K[4]*RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k4;
		setting[5]=Ori_oldC_K[5]*RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k5;
		setting[6]=Ori_oldC_K[6]*RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k6;
		setting[7]=Ori_oldC_K[7]*RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k7;
	}else{
		setting[0]=Ori_oldC_K[0]+RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k0;
		setting[1]=Ori_oldC_K[1]+RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k1;
		setting[2]=Ori_oldC_K[2]+RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k2;
		setting[3]=Ori_oldC_K[3]+RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k3;
		setting[4]=Ori_oldC_K[4]+RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k4;
		setting[5]=Ori_oldC_K[5]+RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k5;
		setting[6]=Ori_oldC_K[6]+RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k6;
		setting[7]=Ori_oldC_K[7]+RTNR_Offset[TableIdx].ai_RTNR_c_k_Offset_TBL.cp_temporal_c_k7;
	}
	drvif_color_AI_scene_TNR_set_c(setting);

}

void fwif_color_set_AI_TNR_Y_th_offset(unsigned char TableIdx)
{
	extern RTNR_Offset_table RTNR_Offset[VIP_ICM_TBL_X];
	int Ori_oldY_th[PQ_TUNING_NUM]={0};
	int setting[PQ_TUNING_NUM]={0};
	unsigned char ai_rtnr_Y_th_calMode=0;
	
	drvif_color_AI_scene_TNR_get_yth(&Ori_oldY_th[0]);
	
	ai_rtnr_Y_th_calMode=RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.ai_rtnr_Y_th_calMode;

	if(ai_rtnr_Y_th_calMode==ai_calMode_gain){
		setting[0]=Ori_oldY_th[0]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly0;
		setting[1]=Ori_oldY_th[1]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly1;
		setting[2]=Ori_oldY_th[2]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly2;
		setting[3]=Ori_oldY_th[3]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly3;
		setting[4]=Ori_oldY_th[4]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly4;
		setting[5]=Ori_oldY_th[5]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly5;
		setting[6]=Ori_oldY_th[6]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly6;
		setting[7]=Ori_oldY_th[7]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly7;
		setting[8]=Ori_oldY_th[8]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly8;
		setting[9]=Ori_oldY_th[9]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly9;
		setting[10]=Ori_oldY_th[10]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly10;
		setting[11]=Ori_oldY_th[11]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly11;
		setting[12]=Ori_oldY_th[12]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly12;
		setting[13]=Ori_oldY_th[13]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly13;
		setting[14]=Ori_oldY_th[14]*RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly14;

	}else{
		setting[0]=Ori_oldY_th[0]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly0;
		setting[1]=Ori_oldY_th[1]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly1;
		setting[2]=Ori_oldY_th[2]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly2;
		setting[3]=Ori_oldY_th[3]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly3;
		setting[4]=Ori_oldY_th[4]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly4;
		setting[5]=Ori_oldY_th[5]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly5;
		setting[6]=Ori_oldY_th[6]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly6;
		setting[7]=Ori_oldY_th[7]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly7;
		setting[8]=Ori_oldY_th[8]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly8;
		setting[9]=Ori_oldY_th[9]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly9;
		setting[10]=Ori_oldY_th[10]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly10;
		setting[11]=Ori_oldY_th[11]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly11;
		setting[12]=Ori_oldY_th[12]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly12;
		setting[13]=Ori_oldY_th[13]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly13;
		setting[14]=Ori_oldY_th[14]+RTNR_Offset[TableIdx].ai_RTNR_th_Offset_TBL.cp_temporalthly14;
	}
	drvif_color_AI_scene_TNR_set_yth(setting);

}

void fwif_color_set_AI_TNR_C_th_offset(unsigned char TableIdx)
{
	extern RTNR_Offset_table RTNR_Offset[VIP_ICM_TBL_X];
	int Ori_oldC_th[PQ_TUNING_NUM]={0};
	int setting[PQ_TUNING_NUM]={0};
	unsigned char ai_RTNR_C_th_calMode=0;
	
	drvif_color_AI_scene_TNR_get_cth(&Ori_oldC_th[0]);
	
	ai_RTNR_C_th_calMode=RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.ai_RTNR_C_th_calMode;

	if(ai_RTNR_C_th_calMode==ai_calMode_gain){
		setting[0]=Ori_oldC_th[0]*RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc0;
		setting[1]=Ori_oldC_th[1]*RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc1;
		setting[2]=Ori_oldC_th[2]*RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc2;
		setting[3]=Ori_oldC_th[3]*RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc3;
		setting[4]=Ori_oldC_th[4]*RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc4;
		setting[5]=Ori_oldC_th[5]*RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc5;
		setting[6]=Ori_oldC_th[6]*RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc6;
	}else{
		setting[0]=Ori_oldC_th[0]+RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc0;
		setting[1]=Ori_oldC_th[1]+RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc1;
		setting[2]=Ori_oldC_th[2]+RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc2;
		setting[3]=Ori_oldC_th[3]+RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc3;
		setting[4]=Ori_oldC_th[4]+RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc4;
		setting[5]=Ori_oldC_th[5]+RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc5;
		setting[6]=Ori_oldC_th[6]+RTNR_Offset[TableIdx].ai_RTNR_C_th_Offset_TBL.cp_temporalthlc6;
	}
	drvif_color_AI_scene_TNR_set_cth(setting);

}

void Scaler_set_AI_SNR_offset(unsigned char TableIdx)
{
	extern SNR_Offset_table SNR_Offset[VIP_ICM_TBL_X];
	unsigned char cp_spatialenablec_enable=0;
	unsigned char cp_spatialenabley_enable=0;
	unsigned char curvemappingmode_en=0;
	
	cp_spatialenablec_enable = SNR_Offset[TableIdx].ai_SNR_Offset_Ctrl.cp_spatialenablec;
	cp_spatialenabley_enable = SNR_Offset[TableIdx].ai_SNR_Offset_Ctrl.cp_spatialenabley;
	curvemappingmode_en = SNR_Offset[TableIdx].ai_SNR_Offset_Ctrl.curvemappingmode_en;

	drvif_color_DRV_SNR_enable(cp_spatialenabley_enable,cp_spatialenablec_enable);
	drvif_color_nr_Curvemapping_En(curvemappingmode_en,0);
	
	if(curvemappingmode_en){
		fwif_color_set_AI_SNR_w1_Offset(TableIdx);
		fwif_color_set_AI_SNR_w2_Offset(TableIdx);
		
	}
	

}

void fwif_color_set_AI_SNR_w1_Offset(unsigned char TableIdx)
{
	extern SNR_Offset_table SNR_Offset[VIP_ICM_TBL_X];
	int Ori_oldw1_tbl[PQ_TUNING_NUM]={0};
	int setting[PQ_TUNING_NUM]={0};
	unsigned char ai_RTNR_w1_calMode=0;
	
	drvif_color_AI_scene_SNR_get_w1(&Ori_oldw1_tbl[0]);

	ai_RTNR_w1_calMode=SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.ai_SNR_Curve_Mapping_calMode;
	
	if(ai_RTNR_w1_calMode==ai_calMode_gain){
		setting[0]=Ori_oldw1_tbl[0]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_3;
		setting[1]=Ori_oldw1_tbl[1]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_2;
		setting[2]=Ori_oldw1_tbl[2]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_1;
		setting[3]=Ori_oldw1_tbl[3]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_0;
		setting[4]=Ori_oldw1_tbl[4]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_7;
		setting[5]=Ori_oldw1_tbl[5]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_6;
		setting[6]=Ori_oldw1_tbl[6]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_5;
		setting[7]=Ori_oldw1_tbl[7]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_4;
		setting[8]=Ori_oldw1_tbl[8]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_8;
	}else{
		setting[0]=Ori_oldw1_tbl[0]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_3;
		setting[1]=Ori_oldw1_tbl[1]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_2;
		setting[2]=Ori_oldw1_tbl[2]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_1;
		setting[3]=Ori_oldw1_tbl[3]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_0;
		setting[4]=Ori_oldw1_tbl[4]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_7;
		setting[5]=Ori_oldw1_tbl[5]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_6;
		setting[6]=Ori_oldw1_tbl[6]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_5;
		setting[7]=Ori_oldw1_tbl[7]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_4;
		setting[8]=Ori_oldw1_tbl[8]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w1_Offset_TBL.w_8;
	}
	drvif_color_AI_scene_SNR_set_w1(&setting[0]);
}

void fwif_color_set_AI_SNR_w2_Offset(unsigned char TableIdx)
{
	extern SNR_Offset_table SNR_Offset[VIP_ICM_TBL_X];
	int Ori_oldw2_tbl[PQ_TUNING_NUM]={0};
	int setting[PQ_TUNING_NUM]={0};
	unsigned char ai_RTNR_w2_calMode=0;
	
	drvif_color_AI_scene_SNR_get_w2(&Ori_oldw2_tbl[0]);

	ai_RTNR_w2_calMode=SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.ai_SNR_Curve_Mapping_calMode;

	if(ai_RTNR_w2_calMode==ai_calMode_gain){
		setting[0]=Ori_oldw2_tbl[0]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_3;
		setting[1]=Ori_oldw2_tbl[1]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_2;
		setting[2]=Ori_oldw2_tbl[2]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_1;
		setting[3]=Ori_oldw2_tbl[3]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_0;
		setting[4]=Ori_oldw2_tbl[4]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_7;
		setting[5]=Ori_oldw2_tbl[5]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_6;
		setting[6]=Ori_oldw2_tbl[6]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_5;
		setting[7]=Ori_oldw2_tbl[7]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_4;
		setting[8]=Ori_oldw2_tbl[8]*SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_8;
	}else{
		setting[0]=Ori_oldw2_tbl[0]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_3;
		setting[1]=Ori_oldw2_tbl[1]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_2;
		setting[2]=Ori_oldw2_tbl[2]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_1;
		setting[3]=Ori_oldw2_tbl[3]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_0;
		setting[4]=Ori_oldw2_tbl[4]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_7;
		setting[5]=Ori_oldw2_tbl[5]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_6;
		setting[6]=Ori_oldw2_tbl[6]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_5;
		setting[7]=Ori_oldw2_tbl[7]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_4;
		setting[8]=Ori_oldw2_tbl[8]+SNR_Offset[TableIdx].ai_SNR_Curve_Mapping_w2_Offset_TBL.w_8;
	}
	drvif_color_AI_scene_SNR_set_w2(&setting[0]);
}

void Scaler_set_AI_MNR_offset(unsigned char TableIdx)
{
	extern MNR_Offset_table MNR_Offset[VIP_ICM_TBL_X];
	unsigned char mosquito_detect_en=0;
	unsigned char mosquitonr_vertical_en=0;
	unsigned char edge_lpf_en=0;
	unsigned char SNR_maxmin_range=0;	
	
	//set ctrl
	mosquito_detect_en = MNR_Offset[TableIdx].ai_MNR_Offset_Ctrl.mosquito_detect_en;
	mosquitonr_vertical_en = MNR_Offset[TableIdx].ai_MNR_Offset_Ctrl.mosquitonr_vertical_en;
	edge_lpf_en = MNR_Offset[TableIdx].ai_MNR_Offset_Ctrl.edge_lpf_en;
	SNR_maxmin_range = MNR_Offset[TableIdx].ai_MNR_Offset_Ctrl.SNR_maxmin_range;

	drvif_color_DRV_SNR_Mosquito_NR_En(mosquito_detect_en);
	drvif_color_DRV_SNR_Mosquito_vertical_en(mosquitonr_vertical_en,edge_lpf_en);
	drvif_color_DRV_SNR_maxmin_range_sel(SNR_maxmin_range);

	//set offset tbl
	fwif_color_set_AI_mnr_edgethd_Offset(TableIdx);
	fwif_color_set_AI_mnr_nlevel_Offset(TableIdx);
}

void fwif_color_set_AI_mnr_edgethd_Offset(unsigned char TableIdx)
{
	extern MNR_Offset_table MNR_Offset[VIP_ICM_TBL_X];
	int Ori_mnr_edgethd[PQ_TUNING_NUM]={0};
	int setting[PQ_TUNING_NUM]={0};
	unsigned char ai_SNR_mnr_calMode=0;
	
	drvif_color_AI_scene_MosNR_get(&Ori_mnr_edgethd[0]);
	
	ai_SNR_mnr_calMode=MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.ai_SNR_mnr_calMode;
	
	if(ai_SNR_mnr_calMode==ai_calMode_gain){
		setting[0]=Ori_mnr_edgethd[0]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd1;
		setting[1]=Ori_mnr_edgethd[1]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd2;
		setting[2]=Ori_mnr_edgethd[2]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd3;
		setting[3]=Ori_mnr_edgethd[3]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd4;
		setting[4]=Ori_mnr_edgethd[4]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd5;
		setting[5]=Ori_mnr_edgethd[5]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd6;
		setting[6]=Ori_mnr_edgethd[6]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd7;
		setting[7]=Ori_mnr_edgethd[7]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd8;
	}else{
		setting[0]=Ori_mnr_edgethd[0]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd1;
		setting[1]=Ori_mnr_edgethd[1]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd2;
		setting[2]=Ori_mnr_edgethd[2]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd3;
		setting[3]=Ori_mnr_edgethd[3]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd4;
		setting[4]=Ori_mnr_edgethd[4]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd5;
		setting[5]=Ori_mnr_edgethd[5]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd6;
		setting[6]=Ori_mnr_edgethd[6]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd7;
		setting[7]=Ori_mnr_edgethd[7]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_edgethd8;
	}
	drvif_color_AI_scene_MosNR_set(&setting[0]);
}

void fwif_color_set_AI_mnr_nlevel_Offset(unsigned char TableIdx)
{
	extern MNR_Offset_table MNR_Offset[VIP_ICM_TBL_X];
	extern unsigned int mosquitonr_nlevel[7];
	unsigned char ai_SNR_mnr_calMode=0;
	int setting[PQ_TUNING_NUM]={0};
	
	ai_SNR_mnr_calMode=MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.ai_SNR_mnr_calMode;
	
	if(ai_SNR_mnr_calMode==ai_calMode_gain){
		setting[0]=mosquitonr_nlevel[0]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_positive_offset;
		setting[1]=mosquitonr_nlevel[1]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_positive_shift;
		setting[2]=mosquitonr_nlevel[2]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_negative_offset;
		setting[3]=mosquitonr_nlevel[3]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_negative_shift;
		setting[4]=mosquitonr_nlevel[4]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_nlevel_maxfrac_mode;
		setting[5]=mosquitonr_nlevel[5]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_mid_offset;
		setting[6]=mosquitonr_nlevel[6]*MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_mid_shift;
	}else{
		setting[0]=mosquitonr_nlevel[0]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_positive_offset;
		setting[1]=mosquitonr_nlevel[1]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_positive_shift;
		setting[2]=mosquitonr_nlevel[2]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_negative_offset;
		setting[3]=mosquitonr_nlevel[3]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_negative_shift;
		setting[4]=mosquitonr_nlevel[4]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mnr_nlevel_maxfrac_mode;
		setting[5]=mosquitonr_nlevel[5]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_mid_offset;
		setting[6]=mosquitonr_nlevel[6]+MNR_Offset[TableIdx].ai_SNR_mnr_edgeth_Offset_TBL.SNR_mosquitonr_nlevel_mid_shift;
	}
	drvif_color_AI_scene_mosquitonr_nlevel_set(&setting[0]);
}

void Scaler_set_AI_Directional_SU_Offset(unsigned char TableIdx)
{
	fwif_color_set_AI_Dirsu_pixel_Offset(TableIdx);
	fwif_color_set_AI_Dirsu_Angle_transition_Offset(TableIdx);	
}

void fwif_color_set_AI_Dirsu_pixel_Offset(unsigned char TableIdx)
{
	extern Directional_SU_Offset_table Directional_SU_Offset[VIP_ICM_TBL_X];
	extern unsigned int dirsu_angmagconf[7];
	unsigned char ai_Dirsu_pixel_calMode=0;
	int setting[PQ_TUNING_NUM]={0};

	ai_Dirsu_pixel_calMode=Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.ai_Dirsu_pixel_calMode;
	
	if(ai_Dirsu_pixel_calMode==ai_calMode_gain){
		setting[0]=dirsu_angmagconf[0]*Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.AngDiff_Lowbnd;
		setting[1]=dirsu_angmagconf[1]*Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.AngDiff_Step;
		setting[2]=dirsu_angmagconf[2]*Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.Mag_Lowbnd;
		setting[3]=dirsu_angmagconf[3]*Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.Mag_Step;
		setting[4]=dirsu_angmagconf[4]*Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.Conf_Step;
		setting[5]=dirsu_angmagconf[5]*Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.Conf_Offset;
		setting[6]=dirsu_angmagconf[6]*Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.Conf_Lowbnd;
	}else{
		setting[0]=dirsu_angmagconf[0]+Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.AngDiff_Lowbnd;
		setting[1]=dirsu_angmagconf[1]+Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.AngDiff_Step;
		setting[2]=dirsu_angmagconf[2]+Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.Mag_Lowbnd;
		setting[3]=dirsu_angmagconf[3]+Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.Mag_Step;
		setting[4]=dirsu_angmagconf[4]+Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.Conf_Step;
		setting[5]=dirsu_angmagconf[5]+Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.Conf_Offset;
		setting[6]=dirsu_angmagconf[6]+Directional_SU_Offset[TableIdx].ai_Dirsu_pixel_Offset_Ctrl.Conf_Lowbnd;
	}
	drvif_color_AI_scene_dirsu_angmagconf_set(&setting[0]);
}

void fwif_color_set_AI_Dirsu_Angle_transition_Offset(unsigned char TableIdx)
{
	extern Directional_SU_Offset_table Directional_SU_Offset[VIP_ICM_TBL_X];
	int setting[PQ_TUNING_NUM]={0};
	unsigned char ai_Dirsu_Angle_transition_calMode=0;
	extern unsigned int dirsu_angletransition[8];
	
	ai_Dirsu_Angle_transition_calMode=Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.ai_Dirsu_Angle_transition_calMode;
	
	if(ai_Dirsu_Angle_transition_calMode==ai_calMode_gain){
		setting[0]=dirsu_angletransition[0]*Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_sec0;
		setting[1]=dirsu_angletransition[1]*Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_sec1;
		setting[2]=dirsu_angletransition[2]*Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_sec2;
		setting[3]=dirsu_angletransition[3]*Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_sec3;
		
		setting[4]=dirsu_angletransition[4]*Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_step0;
		setting[5]=dirsu_angletransition[5]*Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_step1;
		setting[6]=dirsu_angletransition[6]*Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_step2;
		setting[7]=dirsu_angletransition[7]*Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_step3;
	}else{
		setting[0]=dirsu_angletransition[0]+Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_sec0;
		setting[1]=dirsu_angletransition[1]+Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_sec1;
		setting[2]=dirsu_angletransition[2]+Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_sec2;
		setting[3]=dirsu_angletransition[3]+Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_sec3;
		
		setting[4]=dirsu_angletransition[4]+Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_step0;
		setting[5]=dirsu_angletransition[5]+Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_step1;
		setting[6]=dirsu_angletransition[6]+Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_step2;
		setting[7]=dirsu_angletransition[7]+Directional_SU_Offset[TableIdx].ai_Dirsu_Angle_transition_Offset_TBL.UZU_TransANG_step3;
	}
	drvif_color_AI_scene_dirsu_angletransition_set(&setting[0]);	
}


void Scaler_set_AI_DLTI_Offset(unsigned char TableIdx)
{
	extern DLTI_Offset_table DLTI_Offset[VIP_ICM_TBL_X];
	unsigned char dlti_en=0;	
	unsigned char dlti_v_en=0;
	unsigned char dlti_h_en=0;

	//set ctrl
	dlti_en=DLTI_Offset[TableIdx].ai_DLTI_Ctrl_Offset_Ctrl.dlti_en;
	dlti_v_en=DLTI_Offset[TableIdx].ai_DLTI_Ctrl_Offset_Ctrl.dlti_v_en;
	dlti_h_en=DLTI_Offset[TableIdx].ai_DLTI_Ctrl_Offset_Ctrl.dlti_h_en;
	drvif_color_AI_scene_DDLTI_en_set(dlti_en,dlti_v_en,dlti_h_en);

	//set offset
	fwif_color_set_AI_Dlti_h_Offset(TableIdx);
	fwif_color_set_AI_Dlti_v_Offset(TableIdx);
}

void fwif_color_set_AI_Dlti_h_Offset(unsigned char TableIdx)
{
	extern DLTI_Offset_table DLTI_Offset[VIP_ICM_TBL_X];
	int setting[PQ_TUNING_NUM]={0};
	unsigned char ai_DLTI_calMode=0;
	extern unsigned int dlti_h_offset[15];

	
	ai_DLTI_calMode=DLTI_Offset[TableIdx].ai_DLTI_Ctrl_Offset_Ctrl.ai_DLTI_calMode;
	
	if(ai_DLTI_calMode==ai_calMode_gain){
		setting[0]=dlti_h_offset[0]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff0;
		setting[1]=dlti_h_offset[1]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff1;
		setting[2]=dlti_h_offset[2]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff2;
		
		setting[3]=dlti_h_offset[3]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff3;		
		setting[4]=dlti_h_offset[4]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff4;
		setting[5]=dlti_h_offset[5]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff5;
		
		setting[6]=dlti_h_offset[6]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff6;
		setting[7]=dlti_h_offset[7]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff7;
		setting[8]=dlti_h_offset[8]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff8;
		
		setting[9]=dlti_h_offset[9]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff9;
		setting[10]=dlti_h_offset[10]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff10;
		setting[11]=dlti_h_offset[11]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff11;
		
		setting[12]=dlti_h_offset[12]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff12;
		setting[13]=dlti_h_offset[13]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff13;
		setting[14]=dlti_h_offset[14]*DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff14;
	}else{
		setting[0]=dlti_h_offset[0]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff0;
		setting[1]=dlti_h_offset[1]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff1;
		setting[2]=dlti_h_offset[2]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff2;
		
		setting[3]=dlti_h_offset[3]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff3;		
		setting[4]=dlti_h_offset[4]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff4;
		setting[5]=dlti_h_offset[5]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff5;
		
		setting[6]=dlti_h_offset[6]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff6;
		setting[7]=dlti_h_offset[7]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff7;
		setting[8]=dlti_h_offset[8]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff8;
		
		setting[9]=dlti_h_offset[9]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff9;
		setting[10]=dlti_h_offset[10]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff10;
		setting[11]=dlti_h_offset[11]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff11;
		
		setting[12]=dlti_h_offset[12]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff12;
		setting[13]=dlti_h_offset[13]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff13;
		setting[14]=dlti_h_offset[14]+DLTI_Offset[TableIdx].DLTI_H_Tnoff.Tnoff14;
	}
	drvif_color_AI_scene_dlti_h_set(&setting[0]);	
}

void fwif_color_set_AI_Dlti_v_Offset(unsigned char TableIdx)
{
	extern DLTI_Offset_table DLTI_Offset[VIP_ICM_TBL_X];
	int setting[PQ_TUNING_NUM]={0};
	unsigned char ai_DLTI_calMode=0;
	extern unsigned int dlti_v_offset[15];

	
	ai_DLTI_calMode=DLTI_Offset[TableIdx].ai_DLTI_Ctrl_Offset_Ctrl.ai_DLTI_calMode;
	
	if(ai_DLTI_calMode==ai_calMode_gain){
		setting[0]=dlti_v_offset[0]*DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff0;
		setting[1]=dlti_v_offset[1]*DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff1;
		setting[2]=dlti_v_offset[2]*DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff2;
		
		setting[3]=dlti_v_offset[3]*DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff3;		
		setting[4]=dlti_v_offset[4]*DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff4;
		setting[5]=dlti_v_offset[5]*DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff5;		
		setting[6]=dlti_v_offset[6]*DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff6;
	}else{
		setting[0]=dlti_v_offset[0]+DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff0;
		setting[1]=dlti_v_offset[1]+DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff1;
		setting[2]=dlti_v_offset[2]+DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff2;
		
		setting[3]=dlti_v_offset[3]+DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff3;		
		setting[4]=dlti_v_offset[4]+DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff4;
		setting[5]=dlti_v_offset[5]+DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff5;		
		setting[6]=dlti_v_offset[6]+DLTI_Offset[TableIdx].DLTI_V_Tnoff.Tnoff6;
	}
	drvif_color_AI_scene_dlti_v_set(&setting[0]);	
}

void Scaler_set_AI_LC_Offset(unsigned char TableIdx)
{
	extern LC_Offset_table LC_Offset[VIP_ICM_TBL_X];
	int setting[PQ_TUNING_NUM]={0};
	unsigned char m_lc_comp_en=0;
	unsigned char lc_local_sharp_en=0;
	unsigned char lc_tone_mapping_en=0;
	
	//set ctrl
	m_lc_comp_en 		= LC_Offset[TableIdx].ai_LC_Ctrl_Offset_Ctrl.m_lc_comp_en;
	setting[0]				= LC_Offset[TableIdx].ai_LC_Ctrl_Offset_Ctrl.LC_ToneMapping_Blend.lc_tmap_slope_unit;
	setting[1]				= LC_Offset[TableIdx].ai_LC_Ctrl_Offset_Ctrl.LC_ToneMapping_Blend.lc_tmap_blend_factor;
	lc_local_sharp_en		= LC_Offset[TableIdx].ai_LC_Ctrl_Offset_Ctrl.lc_local_sharp_en;
	lc_tone_mapping_en	= LC_Offset[TableIdx].ai_LC_Ctrl_Offset_Ctrl.lc_tone_mapping_en;
	
	drvif_color_set_LC_Enable(m_lc_comp_en);
	drvif_color_AI_scene_LC_set(&setting[0]);
	drvif_color_AI_scene_LC_en_set(lc_local_sharp_en,lc_tone_mapping_en);

	//set offset
	fwif_color_set_AI_LC_GainbyY_Offset(TableIdx);
	fwif_color_set_AI_LC_GainbyYDiff_Offset(TableIdx);
}

void fwif_color_set_AI_LC_GainbyY_Offset(unsigned char TableIdx)
{
	extern LC_Offset_table LC_Offset[VIP_ICM_TBL_X];
	int setting[33]={0};
	unsigned char ai_LC_Gain_Curve_calMode=0;
	extern unsigned char lc_gainbyy_offset[33];
	
	ai_LC_Gain_Curve_calMode=LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.ai_LC_Gain_Curve_calMode;
	
	if(ai_LC_Gain_Curve_calMode==ai_calMode_gain){
		setting[0]=lc_gainbyy_offset[0]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_0;
		setting[1]=lc_gainbyy_offset[1]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_1;
		setting[2]=lc_gainbyy_offset[2]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_2;		
		setting[3]=lc_gainbyy_offset[3]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_3;		

		setting[4]=lc_gainbyy_offset[4]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_4;
		setting[5]=lc_gainbyy_offset[5]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_5;		
		setting[6]=lc_gainbyy_offset[6]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_6;
		setting[7]=lc_gainbyy_offset[7]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_7;

		setting[8]=lc_gainbyy_offset[8]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_8;		
		setting[9]=lc_gainbyy_offset[9]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_9;
		setting[10]=lc_gainbyy_offset[10]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_10;
		setting[11]=lc_gainbyy_offset[11]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_11;
		
		setting[12]=lc_gainbyy_offset[12]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_12;
		setting[13]=lc_gainbyy_offset[13]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_13;
		setting[14]=lc_gainbyy_offset[14]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_14;
		setting[15]=lc_gainbyy_offset[15]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_15;

		setting[16]=lc_gainbyy_offset[16]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_16;
		setting[17]=lc_gainbyy_offset[17]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_17;
		setting[18]=lc_gainbyy_offset[18]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_18;		
		setting[19]=lc_gainbyy_offset[19]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_19;		

		setting[20]=lc_gainbyy_offset[20]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_20;
		setting[21]=lc_gainbyy_offset[21]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_21;		
		setting[22]=lc_gainbyy_offset[22]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_22;
		setting[23]=lc_gainbyy_offset[23]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_23;

		setting[24]=lc_gainbyy_offset[24]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_24;		
		setting[25]=lc_gainbyy_offset[25]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_25;
		setting[26]=lc_gainbyy_offset[26]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_26;
		setting[27]=lc_gainbyy_offset[27]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_27;
		
		setting[28]=lc_gainbyy_offset[28]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_28;
		setting[29]=lc_gainbyy_offset[29]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_29;
		setting[30]=lc_gainbyy_offset[30]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_30;
		setting[31]=lc_gainbyy_offset[31]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_31;

		setting[32]=lc_gainbyy_offset[32]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_32;
		
	}else{
		setting[0]=lc_gainbyy_offset[0]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_0;
		setting[1]=lc_gainbyy_offset[1]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_1;
		setting[2]=lc_gainbyy_offset[2]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_2;		
		setting[3]=lc_gainbyy_offset[3]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_3;		

		setting[4]=lc_gainbyy_offset[4]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_4;
		setting[5]=lc_gainbyy_offset[5]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_5;		
		setting[6]=lc_gainbyy_offset[6]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_6;
		setting[7]=lc_gainbyy_offset[7]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_7;

		setting[8]=lc_gainbyy_offset[8]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_8;		
		setting[9]=lc_gainbyy_offset[9]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_9;
		setting[10]=lc_gainbyy_offset[10]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_10;
		setting[11]=lc_gainbyy_offset[11]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_11;
		
		setting[12]=lc_gainbyy_offset[12]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_12;
		setting[13]=lc_gainbyy_offset[13]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_13;
		setting[14]=lc_gainbyy_offset[14]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_14;
		setting[15]=lc_gainbyy_offset[15]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_15;

		setting[16]=lc_gainbyy_offset[16]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_16;
		setting[17]=lc_gainbyy_offset[17]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_17;
		setting[18]=lc_gainbyy_offset[18]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_18;		
		setting[19]=lc_gainbyy_offset[19]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_19;		

		setting[20]=lc_gainbyy_offset[20]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_20;
		setting[21]=lc_gainbyy_offset[21]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_21;		
		setting[22]=lc_gainbyy_offset[22]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_22;
		setting[23]=lc_gainbyy_offset[23]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_23;

		setting[24]=lc_gainbyy_offset[24]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_24;		
		setting[25]=lc_gainbyy_offset[25]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_25;
		setting[26]=lc_gainbyy_offset[26]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_26;
		setting[27]=lc_gainbyy_offset[27]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_27;
		
		setting[28]=lc_gainbyy_offset[28]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_28;
		setting[29]=lc_gainbyy_offset[29]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_29;
		setting[30]=lc_gainbyy_offset[30]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_30;
		setting[31]=lc_gainbyy_offset[31]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_31;

		setting[32]=lc_gainbyy_offset[32]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain1st.lc_gain_by_yin_32;
		
	}
	drvif_color_AI_scene_LC_Shpnr_Gain1st_set(&setting[0]);	
}
void fwif_color_set_AI_LC_GainbyYDiff_Offset(unsigned char TableIdx)
{
	extern LC_Offset_table LC_Offset[VIP_ICM_TBL_X];
	int setting[33]={0};
	unsigned char ai_LC_Gain_Curve_calMode=0;
	extern unsigned char lc_gainbyydiff_offset[33];
	
	ai_LC_Gain_Curve_calMode=LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.ai_LC_Gain_Curve_calMode;
	
	if(ai_LC_Gain_Curve_calMode==ai_calMode_gain){
		setting[0]=lc_gainbyydiff_offset[0]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_0;
		setting[1]=lc_gainbyydiff_offset[1]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_1;
		setting[2]=lc_gainbyydiff_offset[2]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_2;		
		setting[3]=lc_gainbyydiff_offset[3]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_3;		

		setting[4]=lc_gainbyydiff_offset[4]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_4;
		setting[5]=lc_gainbyydiff_offset[5]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_5;		
		setting[6]=lc_gainbyydiff_offset[6]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_6;
		setting[7]=lc_gainbyydiff_offset[7]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_7;

		setting[8]=lc_gainbyydiff_offset[8]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_8;		
		setting[9]=lc_gainbyydiff_offset[9]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_9;
		setting[10]=lc_gainbyydiff_offset[10]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_10;
		setting[11]=lc_gainbyydiff_offset[11]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_11;
		
		setting[12]=lc_gainbyydiff_offset[12]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_12;
		setting[13]=lc_gainbyydiff_offset[13]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_13;
		setting[14]=lc_gainbyydiff_offset[14]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_14;
		setting[15]=lc_gainbyydiff_offset[15]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_15;

		setting[16]=lc_gainbyydiff_offset[16]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_16;
		setting[17]=lc_gainbyydiff_offset[17]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_17;
		setting[18]=lc_gainbyydiff_offset[18]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_18;		
		setting[19]=lc_gainbyydiff_offset[19]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_19;		

		setting[20]=lc_gainbyydiff_offset[20]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_20;
		setting[21]=lc_gainbyydiff_offset[21]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_21;		
		setting[22]=lc_gainbyydiff_offset[22]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_22;
		setting[23]=lc_gainbyydiff_offset[23]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_23;

		setting[24]=lc_gainbyydiff_offset[24]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_24;		
		setting[25]=lc_gainbyydiff_offset[25]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_25;
		setting[26]=lc_gainbyydiff_offset[26]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_26;
		setting[27]=lc_gainbyydiff_offset[27]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_27;
		
		setting[28]=lc_gainbyydiff_offset[28]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_28;
		setting[29]=lc_gainbyydiff_offset[29]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_29;
		setting[30]=lc_gainbyydiff_offset[30]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_30;
		setting[31]=lc_gainbyydiff_offset[31]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_31;

		setting[32]=lc_gainbyydiff_offset[32]*LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_32;
		
	}else{
		setting[0]=lc_gainbyydiff_offset[0]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_0;
		setting[1]=lc_gainbyydiff_offset[1]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_1;
		setting[2]=lc_gainbyydiff_offset[2]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_2;		
		setting[3]=lc_gainbyydiff_offset[3]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_3;		

		setting[4]=lc_gainbyydiff_offset[4]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_4;
		setting[5]=lc_gainbyydiff_offset[5]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_5;		
		setting[6]=lc_gainbyydiff_offset[6]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_6;
		setting[7]=lc_gainbyydiff_offset[7]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_7;

		setting[8]=lc_gainbyydiff_offset[8]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_8;		
		setting[9]=lc_gainbyydiff_offset[9]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_9;
		setting[10]=lc_gainbyydiff_offset[10]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_10;
		setting[11]=lc_gainbyydiff_offset[11]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_11;
		
		setting[12]=lc_gainbyydiff_offset[12]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_12;
		setting[13]=lc_gainbyydiff_offset[13]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_13;
		setting[14]=lc_gainbyydiff_offset[14]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_14;
		setting[15]=lc_gainbyydiff_offset[15]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_15;

		setting[16]=lc_gainbyydiff_offset[16]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_16;
		setting[17]=lc_gainbyydiff_offset[17]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_17;
		setting[18]=lc_gainbyydiff_offset[18]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_18;		
		setting[19]=lc_gainbyydiff_offset[19]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_19;		

		setting[20]=lc_gainbyydiff_offset[20]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_20;
		setting[21]=lc_gainbyydiff_offset[21]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_21;		
		setting[22]=lc_gainbyydiff_offset[22]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_22;
		setting[23]=lc_gainbyydiff_offset[23]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_23;

		setting[24]=lc_gainbyydiff_offset[24]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_24;		
		setting[25]=lc_gainbyydiff_offset[25]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_25;
		setting[26]=lc_gainbyydiff_offset[26]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_26;
		setting[27]=lc_gainbyydiff_offset[27]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_27;
		
		setting[28]=lc_gainbyydiff_offset[28]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_28;
		setting[29]=lc_gainbyydiff_offset[29]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_29;
		setting[30]=lc_gainbyydiff_offset[30]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_30;
		setting[31]=lc_gainbyydiff_offset[31]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_31;

		setting[32]=lc_gainbyydiff_offset[32]+LC_Offset[TableIdx].ai_LC_Gain_Curve_Offset_table.LC_Shpnr_Gain2nd.lc_gain_by_ydiff_32;
		
	}
	
	drvif_color_AI_scene_LC_Shpnr_Gain2nd_set(&setting[0]);
}

#endif
