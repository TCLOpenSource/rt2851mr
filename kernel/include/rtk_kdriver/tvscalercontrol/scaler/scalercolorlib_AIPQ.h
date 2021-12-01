#ifndef __SCALERCOLOR_LIB_AIPQ_H__
#define __SCALERCOLOR_LIB_AIPQ_H__

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 * Header include
******************************************************************************/
#include <tvscalercontrol/vip/localcontrast.h>
#include <scaler/vipCommon.h>
#include <tvscalercontrol/vip/ai_pq.h>
#include "vgip_isr/scalerAI.h"

/*******************************************************************************
 * Structure
 ******************************************************************************/
 #if defined(CONFIG_RTK_AI_DRV)

#define ai_calMode_offset 0
#define ai_calMode_gain 1

typedef struct {
	unsigned char ai_iEdgeSmooth_calMode;
	int mixer_weight;
	 char IESM_3tap_gain;// Merlin4
	 char IESM_5tap_gain;// Merlin4

} iEdgeSmooth_Offset_table;
//-------------------------------------
typedef struct {
	unsigned char RTNR_y_enable;
	unsigned char RTNR_c_enable;
} RTNR_Offset_Ctrl;
typedef struct {
	unsigned char ai_rtnr_y_k_calMode;
	char k0;
	char k1;
	char k2;
	char k3;
	char k4;
	char k5;
	char k6;
	char k7;
	char k8;
	char k9;
	char k10;
	char k11;
	char k12;
	char k13;
	char k14;
	char k15;	
} RTNR_y_k_Offset_TBL;
typedef struct {
	unsigned char ai_rtnr_c_k_calMode;	
        char  cp_temporal_c_k0:3;
        char  cp_temporal_c_k1:3;
        char  cp_temporal_c_k2:3;
        char  cp_temporal_c_k3:3;
        char  cp_temporal_c_k4:3;
        char  cp_temporal_c_k5:3;
        char  cp_temporal_c_k6:3;
        char  cp_temporal_c_k7:3;	
} RTNR_c_k_Offset_TBL;
typedef struct {
	unsigned char ai_rtnr_Y_th_calMode;	
	 char cp_temporalthly0; 
	 char cp_temporalthly1; 
	 char cp_temporalthly2; 
	 char cp_temporalthly3; 
	 char cp_temporalthly4; 
	 char cp_temporalthly5; 
	 char cp_temporalthly6; 
	 char cp_temporalthly7; 
	 char cp_temporalthly8; 
	 char cp_temporalthly9; 
	 char cp_temporalthly10;
	 char cp_temporalthly11;
	 char cp_temporalthly12;
	 char cp_temporalthly13;
	 char cp_temporalthly14;
} RTNR_Y_th_Offset_TBL;
typedef struct {
	unsigned char ai_RTNR_C_th_calMode;	
	 char cp_temporalthlc0;
	 char cp_temporalthlc1;
	 char cp_temporalthlc2;
	 char cp_temporalthlc3;
	 char cp_temporalthlc4;
	 char cp_temporalthlc5;
	 char cp_temporalthlc6;
} RTNR_C_th_Offset_TBL;
typedef struct {
	RTNR_Offset_Ctrl ai_TNR_Offset_Ctrl;
	RTNR_y_k_Offset_TBL ai_RTNR_y_k_Offset_TBL;
	RTNR_c_k_Offset_TBL ai_RTNR_c_k_Offset_TBL;	
	RTNR_Y_th_Offset_TBL ai_RTNR_th_Offset_TBL;
	RTNR_C_th_Offset_TBL ai_RTNR_C_th_Offset_TBL;
} RTNR_Offset_table;
//-------------------------------------
typedef struct {
	unsigned char cp_spatialenablec;
	unsigned char cp_spatialenabley;
	unsigned char curvemappingmode_en;
} SNR_Offset_Ctrl;

typedef struct {
	unsigned char ai_SNR_Curve_Mapping_calMode;
	 char w_0; 
	 char w_1; 
	 char w_2; 
	 char w_3; 
	 char w_4; 
	 char w_5; 
	 char w_6; 
	 char w_7; 
	 char w_8; 
} SNR_Curve_Mapping_Offset_TBL;
typedef struct {
	SNR_Offset_Ctrl ai_SNR_Offset_Ctrl;	
	SNR_Curve_Mapping_Offset_TBL ai_SNR_Curve_Mapping_w1_Offset_TBL;
	SNR_Curve_Mapping_Offset_TBL ai_SNR_Curve_Mapping_w2_Offset_TBL;
} SNR_Offset_table;
//-------------------------------------
typedef struct {
	unsigned char mosquito_detect_en;
	unsigned char mosquitonr_vertical_en;
	unsigned char edge_lpf_en;
	unsigned char SNR_maxmin_range;
} MNR_Offset_Ctrl;
typedef struct {
	unsigned char ai_SNR_mnr_calMode;
	char SNR_mnr_edgethd1;
	char SNR_mnr_edgethd2;
	char SNR_mnr_edgethd3;
	char SNR_mnr_edgethd4;
	char SNR_mnr_edgethd5;
	char SNR_mnr_edgethd6;
	char SNR_mnr_edgethd7;
	char SNR_mnr_edgethd8;
	char SNR_mosquitonr_nlevel_positive_offset;	
	char SNR_mosquitonr_nlevel_positive_shift;
	char SNR_mosquitonr_nlevel_negative_offset;
	char SNR_mosquitonr_nlevel_negative_shift;
	char SNR_mnr_nlevel_maxfrac_mode; 
	char SNR_mosquitonr_nlevel_mid_offset;
	char SNR_mosquitonr_nlevel_mid_shift;	
} SNR_mnr_edgeth_Offset_TBL;
typedef struct {
	MNR_Offset_Ctrl ai_MNR_Offset_Ctrl;	
	SNR_mnr_edgeth_Offset_TBL ai_SNR_mnr_edgeth_Offset_TBL;

} MNR_Offset_table;
//-------------------------------------
typedef struct {
	unsigned char ai_Dirsu_pixel_calMode;
	
	 char AngDiff_Lowbnd;
	 char AngDiff_Step;
	 char Mag_Lowbnd;
	 char Mag_Step;

	 char Conf_Step;
	 char Conf_Offset;
	 char Conf_Lowbnd;	 	
} Dirsu_pixel_Offset_table;
typedef struct {
	unsigned char ai_Dirsu_Angle_transition_calMode;
	
	 char UZU_TransANG_sec0;
	 char UZU_TransANG_sec1;
	 char UZU_TransANG_sec2;
	 char UZU_TransANG_sec3;

	 char UZU_TransANG_step0;
	 char UZU_TransANG_step1;
	 char UZU_TransANG_step2;
	 char UZU_TransANG_step3;
	
} Dirsu_Angle_transition_Offset_table;
typedef struct {
	Dirsu_pixel_Offset_table ai_Dirsu_pixel_Offset_Ctrl;	
	Dirsu_Angle_transition_Offset_table ai_Dirsu_Angle_transition_Offset_TBL;
} Directional_SU_Offset_table;
//-------------------------------------
typedef struct {
	unsigned char dlti_en;	
	unsigned char dlti_v_en;
	unsigned char dlti_h_en;
	unsigned char ai_DLTI_calMode;
} DLTI_Ctrl_Offset_table;
typedef struct {
	 char Tnoff0;
	 char Tnoff1;
	 char Tnoff2;
	 char Tnoff3;
	 char Tnoff4;
	 char Tnoff5;
	 char Tnoff6;
	 char Tnoff7;
	 char Tnoff8;
	 char Tnoff9;
	 char Tnoff10;
	 char Tnoff11;
	 char Tnoff12;
	 char Tnoff13;
	 char Tnoff14;
} DLTI_Tnoff;
typedef struct {
	DLTI_Ctrl_Offset_table ai_DLTI_Ctrl_Offset_Ctrl;	
	DLTI_Tnoff DLTI_H_Tnoff;
	DLTI_Tnoff DLTI_V_Tnoff;
} DLTI_Offset_table;
//-------------------------------------
typedef struct {
	 int lc_tmap_slope_unit;
	 int lc_tmap_blend_factor;
} LC_ToneMapping_Blend_offset;
typedef struct {
	unsigned char m_lc_comp_en;
	LC_ToneMapping_Blend_offset LC_ToneMapping_Blend;
	unsigned char lc_local_sharp_en;
	unsigned char lc_tone_mapping_en;
} LC_Global_Ctrl_Offset_table;
typedef struct {
	unsigned char ai_LC_Gain_Curve_calMode;
	DRV_LC_Shpnr_Gain1st LC_Shpnr_Gain1st;
	DRV_LC_Shpnr_Gain2nd LC_Shpnr_Gain2nd;	
} LC_Gain_Curve_Offset_table;
typedef struct {
	LC_Global_Ctrl_Offset_table ai_LC_Ctrl_Offset_Ctrl;	
	LC_Gain_Curve_Offset_table ai_LC_Gain_Curve_Offset_table;
} LC_Offset_table;


//Scaler-------------------------------------
void Scaler_set_AI_iEdgeSmooth_offset(unsigned char TableIdx);
void Scaler_set_AI_TNR_offset(unsigned char TableIdx);
void Scaler_set_AI_SNR_offset(unsigned char TableIdx);
void Scaler_set_AI_MNR_offset(unsigned char TableIdx);
void Scaler_set_AI_Directional_SU_Offset(unsigned char TableIdx);
void Scaler_set_AI_DLTI_Offset(unsigned char TableIdx);
void Scaler_set_AI_LC_Offset(unsigned char TableIdx);

//fwif-------------------------------------
void fwif_color_set_AI_TNR_Y_K_offset(unsigned char TableIdx);
void fwif_color_set_AI_TNR_C_K_offset(unsigned char TableIdx);
void fwif_color_set_AI_TNR_Y_th_offset(unsigned char TableIdx);
void fwif_color_set_AI_TNR_C_th_offset(unsigned char TableIdx);
void fwif_color_set_AI_SNR_w1_Offset(unsigned char TableIdx);
void fwif_color_set_AI_SNR_w2_Offset(unsigned char TableIdx);
void fwif_color_set_AI_mnr_edgethd_Offset(unsigned char TableIdx);
void fwif_color_set_AI_mnr_nlevel_Offset(unsigned char TableIdx);
void fwif_color_set_AI_Dirsu_pixel_Offset(unsigned char TableIdx);
void fwif_color_set_AI_Dirsu_Angle_transition_Offset(unsigned char TableIdx);
void fwif_color_set_AI_Dlti_h_Offset(unsigned char TableIdx);
void fwif_color_set_AI_Dlti_v_Offset(unsigned char TableIdx);
void fwif_color_set_AI_LC_GainbyY_Offset(unsigned char TableIdx);
void fwif_color_set_AI_LC_GainbyYDiff_Offset(unsigned char TableIdx);

#endif
#ifdef __cplusplus
}
#endif

#endif /* __SCALER_LIB_H__*/

