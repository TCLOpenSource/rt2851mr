/***************************************************************************
	scalerRPCCommon.h  -  description
	-------------------
    begin                :  July 18 2017
    copyright           : (C) 2017 by csFanChiang
    email                : csFanChiang@realtek.com
 ***************************************************************************/

#ifndef _RPCCOMMON_VIP_H__
#define _RPCCOMMON_VIP_H__

#include <scaler/vipCommon.h>

/*===================================*/
/*======== PQ by Pass for Power Saving =========*/
/*===================================*/
#define VIP_PQ_ByPass_TBL_Max 10
typedef enum _VIP_PQ_ByPass_ITEMS {
	/*===============I Domain===========*/
	/*Main*/
	PQ_ByPass_Iedge_Smooth = 0,		/*0*/
	PQ_ByPass_MPEG_NR,
	PQ_ByPass_HSD_DITHER,
	PQ_ByPass_HSD_DITHER_Temporal,
	PQ_ByPass_RTNR_Y,
	PQ_ByPass_RTNR_C,				/*5*/
	PQ_ByPass_MCNR,
	PQ_ByPass_I_DCTI,
	PQ_ByPass_ImpulseNR,
	PQ_ByPass_SNR_C,
	PQ_ByPass_SNR_Y,				/*10*/
	PQ_ByPass_MosquiutoNR,
	PQ_ByPass_I_Peaking,
	PQ_ByPass_MB_Peaking,

	/*Sub*/
	PQ_ByPass_HSD_DITHER_Sub,
	PQ_ByPass_HSD_DITHER_Temporal_Sub,		/*15*/
	PQ_ByPass_I_Peaking_Sub,

	/*===============D Domain===========*/
	/*Main*/
	PQ_ByPass_USM,
	PQ_ByPass_SU_Peaking,
	PQ_ByPass_SHP_DLTI,
	PQ_ByPass_DCC,			/*20*/
	PQ_ByPass_DCTI,
	PQ_ByPass_ICM,
	PQ_ByPass_SHP,
	PQ_ByPass_Dedge_Smooth,
	PQ_ByPass_CDS,			/*25*/
	PQ_ByPass_UV_Offset,
	PQ_ByPass_V_CTI,
	PQ_ByPass_sRGB,
	PQ_ByPass_Gamma,
	PQ_ByPass_InvGamma,	/*30*/
	PQ_ByPass_ColorTemp,
	PQ_ByPass_DITHER,
	PQ_ByPass_DITHER_Temporal,

	/*Sub*/
	PQ_ByPass_DCTI_Sub,
	PQ_ByPass_ICM_Sub,		/*35*/
	PQ_ByPass_SHP_Sub,
	PQ_ByPass_sRGB_Sub,
	PQ_ByPass_Gamma_Gamma,
	PQ_ByPass_InvGamma_Sub,

	/* new */
	PQ_ByPass_I_DI_IP_Enable,	/*40*/
	PQ_ByPass_I_DI,	/* force 2D*/


	/* new */
	/*===============I Domain===========*/
	PQ_ByPass_De_XCXL,
	PQ_ByPass_De_Contour,

	/*===============D Domain===========*/
	PQ_ByPass_SU_PEAKING,
	PQ_ByPass_LC,			/*45*/
	PQ_ByPass_UV_Delay,
	PQ_ByPass_UVC_CONTROL,
	PQ_ByPass_DEMURA,
	PQ_ByPass_CONBRI,

	PQ_ByPass_OUT_GAMMA,		/*50*/
	PQ_ByPass_INV_OUT_GAMMA,
	PQ_ByPass_BS_CONTROL,
	PQ_ByPass_3DLUT_CTRL,
	PQ_ByPass_COLOR_MAP,
	PQ_ByPass_COLOR_MAP_Sub,            /*55*/

	VIP_PQ_ByPass_ITEMS_Max,

} VIP_PQ_ByPass_ITEMS;

typedef struct _VIP_PQ_ByPass_Struct{
	unsigned char VIP_PQ_ByPass_TBL[VIP_PQ_ByPass_ITEMS_Max];
} VIP_PQ_ByPass_Struct;

typedef struct _VIP_PQ_ByPass_Ctrl{
	unsigned char table_idx;
	VIP_PQ_ByPass_Struct PQ_ByPass_Struct[VIP_PQ_ByPass_TBL_Max];
} VIP_PQ_ByPass_Ctrl;
/*===================================*/
/*======== PQ by Pass for Power Saving =========*/
/*===================================*/

typedef struct {
	int Apply_Curve[DCC_Curve_Node_MAX];
} RPC_Adapt_DCC_Info_Item;

typedef struct {
	unsigned char hist_init_flag;
	unsigned char TimingChange_flag_for_RTNR;
	unsigned char MPEG_BLK_init;
	unsigned char m_film;
	unsigned char g_fw_film_en;
	unsigned char m_film_clear;
	unsigned char smooth_toggle_update_flag;
} _VIP_NetFlix_smooth_Toggle_info;


typedef struct {
	unsigned int Netflix_CapWid;
	unsigned int Netflix_CapLen;
	unsigned int Netflix_Enable;
	_VIP_NetFlix_smooth_Toggle_info	NetFlix_smooth_Toggle_info;
} VIP_NetFlix_info;

typedef struct {
	unsigned char VCPU_DTV_SD_p2i;
	int decode_bit_rate;
	int inputplugin_bit_rate;
}VIP_VCPU_setting_info;

typedef struct {
	unsigned char is_me_dead;
	int vo_channel_speed;
	unsigned char m_VOSeek;
	unsigned char m_MiraCast;
	unsigned char bZoomAction;
	unsigned char bShiftAction;
	unsigned char DC_offon_flg;
}VIP_MEMC_VCPU_setting_info;


/************************************************************/
/*********** RPC_SmartPIC_Clue START ****  SmartPIC_Clue START *****/
/************************************************************/
typedef struct _RPC_CLUES {
	RPC_Adapt_DCC_Info_Item RPC_Adapt_DCC_Info;
	VIP_NetFlix_info S_NetFlix_info;
	VIP_VCPU_setting_info VCPU_setting_info;
	VIP_MEMC_VCPU_setting_info MEMC_VCPU_setting_info;
	unsigned int Y_Main_D_Hist[COLOR_D_HISTOGRAM_LEVEL];
	unsigned int D_Hist_Peak_White_Pixel_value;
	unsigned int D_Hist_Peak_White_IRE_Value;
	unsigned int D_Hist_Peak_Dark_Pixel_value;
	unsigned int D_Hist_Peak_Dark_IRE_Value;
	unsigned int D_Hist_Y_Total_sum;
	unsigned int D_Hist_Y_Mean_Value;
	unsigned int D_Hist_Y_MAX_bin_ratio;
	unsigned int D_Hist_Y_MAX_bin_index;
	unsigned int D_Hist_Final_Bin_Mode;
	unsigned int D_Hist_Y_APL_Exact;

	unsigned int SceneChange;
	unsigned int D_SceneChange;
	unsigned char prePowerSaveStatus;
} _RPC_clues;
/************************************************************/
/*********** RPC_SmartPIC_Clue END *******  SmartPIC_Clue END ******/
/************************************************************/
#define MAX_FILM_BUFF 4

typedef enum {
	EMPTY  = 0,
	DETECT = 1,
	OUTPUT = 2
} PIC_STATUS;

typedef struct {
	unsigned int  SeqBufAddr_Prev;
	unsigned int  SeqBufAddr_Curr;
	unsigned int  Width;
	unsigned int  Height;
	unsigned char Film_Mode;
	unsigned char Film_ID;
	unsigned char status;
	unsigned char is_output;
	unsigned int SeqBufAddr_Curr_UV;
	unsigned int pitch_y;
	unsigned int pitch_c;
} SE_FilmDetectPic;

typedef struct {
	unsigned char DI_ma_horicomen;
	unsigned char DI_ma_3aenable;
	unsigned char DI_film_status;
	unsigned int  DI_gama_mode;
	unsigned int  DI_VCPU_stop_SMD_flag;
	unsigned int  DI_info_reverse_2;
	unsigned int  DI_info_reverse_3;
	unsigned int  DI_info_reverse_4;
	unsigned int  DI_info_reverse_5;
	unsigned int  DI_info_reverse_6;
	unsigned int  DI_info_reverse_7;
	unsigned int  DI_info_reverse_8;
	unsigned int  DI_info_reverse_9;
} DI_system_info;

typedef struct {
	unsigned char DCC_Curve_apply_flag;
	unsigned char VGIP_ISR_IN_VCPU_flag;
	unsigned char AutoMA_Running_flag;
	unsigned char HDMI_color_space;
	unsigned char se_film_mode[18];
	unsigned char se_phase_idx[18];
	unsigned char SeqBufAddr;
	unsigned char SeqBufAddr_2;
	unsigned char se_info_width;
	unsigned char se_info_height;
	unsigned char rdPtr;
	unsigned char wrPtr;
	unsigned char outPtr;
	unsigned char reset_flag;
	unsigned char flush_flag;
	unsigned char bad_edit_flag;
	unsigned int input_frame_rate;
	SE_FilmDetectPic pic[MAX_FILM_BUFF];
	DI_system_info DI_info;
	unsigned char en_film;
	unsigned char en_nn;
	unsigned char en_vt;
} DRV_RPC_SCPU_ISR_INFO_TO_VCPU;

typedef struct {
	unsigned char memc_cadence;
	unsigned char memc_avdelay;
	unsigned char memc_FrameRepeat;
	unsigned char memc_LowDelay;
} DRV_RPC_MEMC_ISR_INFO_TO_VCPU;

typedef struct _DRV_ScalingDown_COEF_TAB {
	signed short FIR_Coef_Table[SDFIR64_MAXNUM][SD_FIR_Coef_MAXNUM];

} DRV_ScalingDown_COEF_TAB;


typedef struct _VIP_ScalingDown_Setting_INFO {
	DRV_ScalingDown_COEF_TAB ScalingDown_COEF_TAB;
	unsigned char SD_H_Coeff_Sel[VIP_ScalingDown_FIR_Level_Max];
	unsigned char SD_V_Coeff_Sel[VIP_ScalingDown_FIR_Level_Max];
	unsigned char SDFH444To422Sel;
	unsigned char SDFHSel;
	unsigned char SDFVSel;
	unsigned char IsHScalerDown;
	unsigned char IsVScalerDown;
	unsigned char IsH444To422;

	unsigned char isCutHor4Line;
	unsigned char isCutVer2Line;

} VIP_ScalingDown_Setting_INFO;

/*===================================*/
/*======== I de_XC  ====================*/
/*===================================*/
#define I_De_XC_TBL_Max 10

typedef struct _VIP_I_De_XC_TBL {
	unsigned char dexc_en;
	unsigned char Dexc_spatial_correction_en;
	unsigned char dexc_detect_type;
        unsigned char dexc_sat_th;
        unsigned char dexc_smooth_th;
        unsigned char dexc_spatial_corr_imp_cancel;

	unsigned char dexc_y_error_th1_ntsc;
	unsigned char dexc_y_error_th2_ntsc;
	unsigned char dexc_y_amp_th_ntsc;
	unsigned char dexc_c_error_th1_ntsc;
	unsigned char dexc_c_error_th2_ntsc;
	unsigned char dexc_c_amp_th_ntsc;
	unsigned char dexc_step_lv1_ntsc;
	unsigned char dexc_step_lv2_ntsc;
	unsigned char dexc_step_still_ntsc;
	unsigned char dexc_step_notxc_ntsc;
	unsigned char dexc_hold_th_ntsc;

	unsigned char dexc_y_error_th1_pal;
	unsigned char dexc_y_error_th2_pal;
	unsigned char dexc_y_amp_th_pal;
	unsigned char dexc_c_error_th1_pal;
	unsigned char dexc_c_error_th2_pal;
	unsigned char dexc_c_amp_th_pal;
	unsigned char dexc_step_lv1_pal;
	unsigned char dexc_step_lv2_pal;
	unsigned char dexc_step_still_pal;
	unsigned char dexc_step_notxc_pal;
	unsigned char dexc_hold_th_pal;

	unsigned char dexc_blending_table_0;
	unsigned char dexc_blending_table_1;
	unsigned char dexc_blending_table_2;
	unsigned char dexc_blending_table_3;
	unsigned char dexc_blending_table_4;
	unsigned char dexc_blending_table_5;
	unsigned char dexc_blending_table_6;
	unsigned char dexc_blending_table_7;

} VIP_I_De_XC_TBL;

typedef struct _VIP_I_De_XC_CTRL {
	unsigned char table_select;
	VIP_I_De_XC_TBL De_XC_TBL[I_De_XC_TBL_Max];
	unsigned char isDisable_by_SMT;
	unsigned char isMemory_support_inSMT;

} VIP_I_De_XC_CTRL;
/*===================================*/
/*======== I de_XC   ====================*/
/*===================================*/

typedef struct _VIP_ScalingUp_Ctrl{
	unsigned char Two_Step_Mode;
	unsigned char UZU_Vertical_Mode;
	unsigned char UZU_Dir_Phase_En;

} VIP_ScalingUp_Ctrl;

/************************************************************************************************************/
/********************* HDR START ************ HDR START ***** HDR START *************************************/
/************************************************************************************************************/
typedef enum _VIP_HDR_DM_MATRIX_ITEMS {
	matrix_COEF_m11 = 0,
	matrix_COEF_m12,
	matrix_COEF_m13,
	matrix_COEF_m21,
	matrix_COEF_m22,
	matrix_COEF_m23,
	matrix_COEF_m31,
	matrix_COEF_m32,
	matrix_COEF_m33,
	matrix3x3_COEF__Items_Max,
	matrix_COEF_R_Offset = matrix3x3_COEF__Items_Max,
	matrix_COEF_G_Offset,
	matrix_COEF_B_Offset,

	matrix_COEF_Items_Max,

} VIP_HDR_DM_MATRIX_ITEMS;

typedef enum _VIP_HDR_DM_EOTF_OETF_ITEMS {
	oetf_eotf_reverse_0 = 0,
	oetf_eotf_reverse_1,
	oetf_eotf_reverse_2,
	oetf_eotf_reverse_3,
	oetf_eotf_reverse_4,
	oetf_eotf_reverse_5,
	oetf_eotf_reverse_6,
	oetf_eotf_reverse_7,
	oetf_eotf_reverse_8,
	oetf_eotf_reverse_9,
	oetf_eotf_Items_Max,

} VIP_HDR_DM_EOTF_OETF_ITEMS;

typedef enum _VIP_HDR_DM_CTRL_ITEMS {
	TV006_HDR_En,
	TV006_HDR_DEMO_EN,
	TV006_HDR_HDR10_set,
	TV006_HDR_HDR10_display_check,
	TV006_HDR_HDR10_apply_check,
	TV006_HDR_HDR10_enable_Coef,
	CTRL_reverse_6,
	TV006_HDR_Seamless_Freeze_Status,
	TV006_HDR_Seamless_Freeze_Cnt,
	TV006_HDR_Seamless_Freeze_Force_Disable,
	CTRL_reverse_10,
	CTRL_reverse_11,
	CTRL_reverse_12,
	CTRL_reverse_13,
	CTRL_reverse_14,

	CTRL_Items_Max,

} VIP_HDR_DM_CTRL_ITEMS;

typedef struct _VIP_HDR_OETF_Prog_Idx_TBL {
	unsigned short oetf_step[8];
	unsigned short oetf_grid_num_th[7];
} VIP_HDR_OETF_Prog_Idx_TBL;

typedef struct _VIP_HDR_PQModeInfo {
	unsigned int version;//Version = 0 wild card(default data
	unsigned int length;//pData Length
	unsigned char  wId;//0 : main
	unsigned int* pData;

} VIP_HDR_PQModeInfo;	/* same as HAL_VPQ_DATA_T*/

typedef struct _TC_HDR_metadata_variables {
	int tmInputSignalBlackLevelOffset;
	int tmInputSignalWhiteLevelOffset;
	int shadowGain;
	int highlightGain;
	int midToneWidthAdjFactor;
	int tmOutputFineTuningNumVal;
	int tmOutputFineTuningX[10];
	int tmOutputFineTuningY[10];
	int saturationGainNumVal;
	int saturationGainX[6];
	int saturationGainY[6];
} TC_HDR_metadata_variables;

typedef struct _TC_HDR_metadata_tables {
	int luminanceMappingNumVal;
	int luminanceMappingX[33];
	int luminanceMappingY[33];
	int colourCorrectionNumVal;
	int colourCorrectionX[33];
	int colourCorrectionY[33];
	int chromaToLumaInjectionMuA;
	int chromaToLumaInjectionMuB;
} TC_HDR_metadata_tables;

typedef struct _TC_HDR_metadata {
	int specVersion;
	int payloadMode;
	int hdrPicColourSpace;
	int hdrMasterDisplayColourSpace;
	int hdrMasterDisplayMaxLuminance;
	int hdrMasterDisplayMinLuminance;
	int sdrPicColourSpace;
	int sdrMasterDisplayColourSpace;
	TC_HDR_metadata_variables variables;
	TC_HDR_metadata_tables tables;
} TC_HDR_metadata;

typedef struct _TC_HDR_metadata_variables_140 {
	int tmInputSignalBlackLevelOffset;
	int tmInputSignalWhiteLevelOffset;
	int shadowGain;
	int highlightGain;
	int midToneWidthAdjFactor;
	int tmOutputFineTuningNumVal;
	int tmOutputFineTuningX[10];
	int tmOutputFineTuningY[10];
	int saturationGainNumVal;
	int saturationGainX[6];
	int saturationGainY[6];
} TC_HDR_metadata_variables_140;

typedef struct _TC_HDR_metadata_tables_140 {
	int luminanceMappingNumVal;
	int luminanceMappingX[65];
	int luminanceMappingY[65];
	int colourCorrectionNumVal;
	int colourCorrectionX[65];
	int colourCorrectionY[65];
} TC_HDR_metadata_tables_140;

typedef struct _TC_HDR_metadata_140 {
	int partID;
	int majorSpecVersionID;
	int minorSpecVersionID;
	int payloadMode;
	int hdrPicColourSpace;
	int hdrDisplayColourSpace;
	int hdrDisplayMaxLuminance;
	int hdrDisplayMinLuminance;
	int sdrPicColourSpace;
	int sdrDisplayColourSpace;
	int sdrDisplayMaxLuminance;
	int sdrDisplayMinLuminance;
	int matrixCoefficient[4];
	int chromaToLumaInjection[2];
	int kCoefficient[3];
	TC_HDR_metadata_variables_140 variables;
	//TC_HDR_metadata_tables_140 tables;

}TC_HDR_metadata_140;

typedef struct _HDR_ST2094_metadata
{
	unsigned int application_version;
	unsigned int targeted_system_display_maximum_luminance;
	unsigned short maxscl[3];
	unsigned int average_maxrgb;
	unsigned short num_distribution_maxrgb_percentiles;
	unsigned short distribution_maxrgb_percentages[10];
	unsigned int distribution_maxrgb_percentiles[10];
	unsigned char tone_mapping_flag;
	unsigned int knee_point_x;
	unsigned int knee_point_y;
	unsigned int num_bezier_curve_anchors;
	unsigned int bezier_curve_anchors[15];

} HDR_ST2094_metadata, HDR_HDR10PLUS_metadata;

typedef struct _VIP_HDR_INFO {
	unsigned char HDR_Setting_Status;
	unsigned char Ctrl_Item[CTRL_Items_Max];
	unsigned int CSC1_YUV2RGB_Coef[matrix_COEF_Items_Max];
	unsigned int Matrix_3x3[matrix_COEF_Items_Max];
	unsigned int EOTF_OETF[oetf_eotf_Items_Max];
	//VIP_HDR_PQModeInfo HDR_PQModeInfo;	// remove this, can't use point in videoFW
	TC_HDR_metadata tc_hdr_metadata;
	TC_HDR_metadata_140 tc_hdr_metadata_140;
	union {
	HDR_ST2094_metadata hdr_ST2094_metadata;
	HDR_HDR10PLUS_metadata hdr_HDR10PLUS_metadata;
	};
	unsigned char Debug_Log_Delay_Frame;
	unsigned char Debug_Log_0;
	unsigned char Debug_Log_1;
	unsigned char Debug_Log_2;	/* for TC */
	unsigned char Debug_Log_3;	/* for HDR10+ */
	unsigned char Debug_Log_4;
	unsigned char Debug_Log_5;
	unsigned char Debug_Log_6;
	unsigned char Debug_Log_7;

} VIP_HDR_INFO;

/************************************************************************************************************/
/************************ HDR End ******* HDR End ***** HDR End ***********************************************/
/************************************************************************************************************/

/*===================================*/
/*============= De-XC ===================*/
/*===================================*/

typedef enum _VIP_I_De_XC_MEM_BORROW_MODE{
	De_XC_MEM_UNKNOW = 0,
	De_XC_MEM_From_VBM_Directly,
	De_XC_MEM_From_I3D_DMA,	/* memory will release by itself in i3ddma*/
	I_De_XC_MEM_BORROW_MODE_Max,

} VIP_I_De_XC_MEM_BORROW_MODE;

typedef struct _VIP_I_De_XC_MEM {
	unsigned int phyaddr;
	/*unsigned int size;*/
	unsigned int getsize;
	unsigned char Borrow_Mode;
	unsigned char DMA_Status[5];
} VIP_I_De_XC_MEM;

/*===================================*/
/*============= De-XC ===================*/
/*===================================*/
typedef enum _VIP_PQ_SOURCE_TYPE_From_AP_Item {
	PQ_SRC_From_AP_UNKNOW = 0,
	PQ_SRC_From_AP_AVD,
	PQ_SRC_From_AP_ADC,
	PQ_SRC_From_AP_HDMI,
	PQ_SRC_From_AP_JPEG,
	PQ_SRC_From_AP_DTV,
	PQ_SRC_From_AP_USB,
	PQ_SRC_From_AP_OTT,

	PQ_SRC_From_AP_ITEM_MAX,
} VIP_PQ_SOURCE_TYPE_From_AP_Item;

/*============= LC ===================*/
/*===================================*/
typedef struct _VIP_DRV_Local_Contrast_Region_Num_Size {
        unsigned char nBlk_Hnum;
        unsigned char nBlk_Vnum;
        unsigned short  nBlk_Hsize;
        unsigned short  nBlk_Vsize;
	  unsigned int lc_hfactor;
	  unsigned int lc_vfactor;
} VIP_DRV_Local_Contrast_Region_Num_Size;

typedef struct _VIP_Local_Contrast_Ctrl{
	unsigned char LC_Table_Idx;
	unsigned char BL_Profile_Interpolation_lc_tab_hsize;
	unsigned char BL_Profile_Interpolation_lc_tab_vsize;

	VIP_DRV_Local_Contrast_Region_Num_Size Local_Contrast_Region_Num_Size;

} VIP_Local_Contrast_Ctrl;

/*===================================*/
/*============= LC ===================*/
/*===================================*/

/*===================================*/
/*============= MA-SNR ===================*/
/*===================================*/
typedef struct _VIP_MASNR_Ctrl{
	unsigned char RTNR_isnr_Get_Motion_En;
	unsigned char nr_motion_en;
	unsigned char IESM_Motion_En;
	unsigned char AVLPF_Motion_En;

} VIP_MASNR_Ctrl;
/*===================================*/
/*============= MA-SNR ===================*/
/*===================================*/

typedef struct _VIP_PQ_IP_Enable_Monitor_2 {
	char CNT;
	unsigned char hdrType;
	unsigned char DM_in_fmt;
	unsigned char I_CSC;
	unsigned char DI_Thr;
	unsigned char RTNR_Thr;

} VIP_PQ_IP_Enable_Monitor_2;

typedef struct _VIP_PQ_DI_RTNR_PQC_CTRL {
	unsigned char PQC_Mode;
	unsigned char cmp_alpha_en;

} VIP_PQ_DI_RTNR_PQC_CTRL;

/************************************************************/
/***** _RPC_system_setting_info START ** system_setting_info START ******/
/************************************************************/
typedef struct {
	DRV_RPC_SCPU_ISR_INFO_TO_VCPU SCPU_ISRIINFO_TO_VCPU;
	DRV_RPC_MEMC_ISR_INFO_TO_VCPU MEMC_ISRIINFO_TO_VCPU;
	VIP_PQ_ByPass_Ctrl PQ_ByPass_Ctrl;
	VIP_ScalingDown_Setting_INFO ScalingDown_Setting_INFO;
	VIP_I_De_XC_CTRL I_De_XC_CTRL;
	VIP_I_De_XC_MEM DE_XCXL_Memory_CTRL[2];
	VIP_ScalingUp_Ctrl ScalingUp_Ctrl;
	VIP_HDR_INFO	HDR_info;
	VIP_Local_Contrast_Ctrl Local_Contrast_Ctrl;
	VIP_MASNR_Ctrl MASNR_Ctrl;
	unsigned char Project_ID;
	unsigned char PQ_demo_flag;
	unsigned char DCC_hist_shift_bit;
	unsigned char DCC_D_hist_shift_bit;
	unsigned char D_Histogram_Bin_Mode;
	unsigned char VIP_source;
	unsigned char PQ_source_type_from_AP;
	unsigned int Dram_Size;
	unsigned char Skip_dmaStatusCheck_Enable_inD_ISR;	// only tool will change this Variables
	VIP_PQ_IP_Enable_Monitor_2 PQ_IP_Enable_Monitor_2;
	VIP_PQ_DI_RTNR_PQC_CTRL PQ_DI_RTNR_PQC_CTRL;
} _RPC_system_setting_info;
/************************************************************/
/****** _RPC_system_setting_info END ****  system_setting_info END *******/
/************************************************************/


/************************************************************/
/*****RPC_SLR_VIP_TABLE  START ** system_setting_info START ******/
/************************************************************/

typedef struct {
	unsigned char chromaerror_en;
	unsigned char chromaerror_all;
	unsigned char chromaerror_th;
	unsigned char chromaerror_framemotionc_th;
	unsigned char di444to422Lowpass;
} RPC_VIP_MA_ChromaError;

#define	CHIP_CM_HUE_SEG	60
#define	CHIP_CM_SAT_SEG	12
#define	CHIP_CM_ITN_SEG	8

typedef struct {
	unsigned short chip_hue_idx[CHIP_CM_HUE_SEG];
	unsigned short chip_sat_idx[CHIP_CM_SAT_SEG];
	unsigned short chip_itn_idx[CHIP_CM_ITN_SEG];
	unsigned char hue_section_pillar_num;
	unsigned char sat_section_pillar_num;
	unsigned char itn_section_pillar_num;
	unsigned char update_ICM_Pillar_Offset;

} RPC_ICM_WRITE_TABLE;

typedef struct {
	unsigned char VIP_QUALITY_Coef[VIP_QUALITY_SOURCE_NUM][VIP_QUALITY_Coef_MAX];
	RPC_VIP_MA_ChromaError MA_Chroma_Error_Table[t_MA_Chroma_Error_MAX];
	RPC_ICM_WRITE_TABLE ICM_WRITE_TABLE;
} RPC_SLR_VIP_TABLE;


/************************************************************/
/***** RPC_SLR_VIP_TABLE START ** system_setting_info START ******/
/************************************************************/



#endif


