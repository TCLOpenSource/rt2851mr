/*==========================================================================
  * Copyright (c)      Realtek Semiconductor Corporation, 2006
  * All rights reserved.
  * ========================================================================*/

/*================= File Description =======================================*/
/**
 * @file
 * 	This file is for color related functions.
 *
 * @author 	$Author$
 * @date 	$Date$
 * @version $Revision$
 */

/**
 * @addtogroup color
 * @{
 */

#ifndef _VIP_COLOR_H
#define _VIP_COLOR_H

/*================================ Definitions ==============================*/

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 * Header include
 ******************************************************************************/
#if CONFIG_FIRMWARE_IN_KERNEL
#include <scaler/vipCommon.h>
#include <scaler/vipRPCCommon.h>

#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
#include <scaler/scalerCommon.h>
#else
#include <scalercommon/scalerCommon.h>
#endif


#else
#include <rtd_types.h>
#include <scaler/vipCommon.h>
#include <scaler/scalerCommon.h>
#endif
/*******************************************************************************
 * Marco
 ******************************************************************************/
#define ENABLE_HDR_DM_26b_PATH 1

/*******************************************************************************
 * Variable
 ******************************************************************************/


/*******************************************************************************
* Constant
******************************************************************************/

#define _RGB2YUV_m11					0x00
#define _RGB2YUV_m12					0x01
#define _RGB2YUV_m13					0x02
#define _RGB2YUV_m21					0x03
#define _RGB2YUV_m22					0x04
#define _RGB2YUV_m23					0x05
#define _RGB2YUV_m31					0x06
#define _RGB2YUV_m32					0x07
#define _RGB2YUV_m33					0x08
#define _RGB2YUV_Yo_even				0x09
#define _RGB2YUV_Yo_odd					0x0a
#define _RGB2YUV_Y_gain					0x0b
#define _RGB2YUV_sel_RGB				0x0c
#define _RGB2YUV_set_Yin_offset			0x0d
#define _RGB2YUV_set_UV_out_offset		0x0e
#define _RGB2YUV_sel_UV_off				0x0f
#define _RGB2YUV_Matrix_bypass			0x10
#define _RGB2YUV_Enable_Y_gain			0x11


#define _YUV2RGB_k11					0x00
#define _YUV2RGB_k12					0x01
#define _YUV2RGB_k13					0x02
#define _YUV2RGB_k22					0x03
#define _YUV2RGB_k23		 			0x04
#define _YUV2RGB_k32					0x05
#define _YUV2RGB_k33					0x06
#define _YUV2RGB_Roffset	 			0x07
#define _YUV2RGB_Goffset				0x08
#define _YUV2RGB_Boffset				0x09
#define _YUV2RGB_Y_Clamp				0x0a
#define _YUV2RGB_UV_Clamp				0x0b


#define _Gamma_Full						0x01
#define _Gamma_Compact					0x00

#define _ICM_ALL_DATA_HUE 				0
#define _ICM_ALL_DATA_SAT 				2
#define _ICM_ALL_DATA_ITN 				4
#define _ICM_ALL_DATA_SOFTCLAMP_CTRL 	6
#define _ICM_ALL_DATA_SOFTCLAMP_SLOPE 	7
#define _SOFTCLAMP_SAT_SLOP_EN			2
#define _SOFTCLAMP_ITN_SLOP_EN			1

#define _SRGB_TABLE_BYPASS				0
#define _SRGB_TABLE_COEFF1				1
#define _SRGB_TABLE_COEFF2				2
#define _SRGB_TABLE_RESERVED			3

#define _SRGB_MAIN_TABLE_SEL			_SRGB_TABLE_COEFF1
#define _SRGB_SUB_TABLE_SEL				_SRGB_TABLE_COEFF1

/*hsinyi 20090617*/
/* Definitions of Digital Filter===============*/
#define _DISABLE_PORT                   0
#define _PHASE_ACCESS_PORT              1
#define _NEG_SMEAR_ACCESS_PORT     		2
#define _POS_SMEAR_ACCESS_PORT			3
#define _NEG_RING_ACCESS_PORT        	4
#define _POS_RING_ACCESS_PORT			5
#define _MISMATCH_ACCESS_PORT			6
#define _YPBPR_ACCESS_PORT              7
#define _NOISE_REDUCTION_PORT        	8

#define _YPBPR_DISABLE                  0
#define _YPBPR_ENABLE                   7

#define _PHASE_THD_0                    0
#define _PHASE_THD_1                    1
#define _PHASE_THD_2                    2
#define _PHASE_THD_3                    3
#define _PHASE_THD_4                    4
#define _PHASE_THD_5                    5
#define _PHASE_THD_6                    6
#define _PHASE_THD_7                    7

#define _SMEAR_RING_THD_0               0
#define _SMEAR_RING_THD_1               1
#define _SMEAR_RING_THD_2               2
#define _SMEAR_RING_THD_3               3
#define _SMEAR_RING_THD_4               4
#define _SMEAR_RING_THD_5               5
#define _SMEAR_RING_THD_6               6
#define _SMEAR_RING_THD_7               7

#define _MISMATCH_THD_0                 0
#define _MISMATCH_THD_1                 1

#define _NOISE_REDUCTION_THD_0          0
#define _NOISE_REDUCTION_THD_1          1
#define _NOISE_REDUCTION_THD_2          2
#define _NOISE_REDUCTION_THD_3          3
#define _NOISE_REDUCTION_THD_4          4
#define _NOISE_REDUCTION_THD_5          5
#define _NOISE_REDUCTION_THD_6          6
#define _NOISE_REDUCTION_THD_7          7

#define _DIV_VALUE_0                    0
#define _DIV_VALUE_1                    1
#define _DIV_VALUE_2                    2
#define _DIV_VALUE_3                    3

#define VIP_DITHERLUT_ROW_MAX			3
#define VIP_DITHERLUT_COL_MAX			16
#define VIP_DITHERLUT_DEP_MAX			4

#define VIP_HDMI_DITHERLUT_COL_MAX		4
#define VIP_HDMI_DITHERLUT_DEP_MAX		4

#define _YUV2RGB_UVOFFSET_BY_Y_UOFFSET	0x00
#define _YUV2RGB_UVOFFSET_BY_Y_VOFFSET	0x01
#define _YUV2RGB_UVOFFSET_BY_Y_USTEP	0x02
#define _YUV2RGB_UVOFFSET_BY_Y_VSTEP	0x03

#define _YUV2RGB_COEF_BY_Y_M0			0x00
#define _YUV2RGB_COEF_BY_Y_M1			0x01
#define _YUV2RGB_COEF_BY_Y_M2			0x02
#define _YUV2RGB_COEF_BY_Y_M3			0x03
#define _YUV2RGB_COEF_BY_Y_M4			0x04
#define _YUV2RGB_COEF_BY_Y_M5			0x05
#define _YUV2RGB_COEF_BY_Y_M6			0x06
#define _YUV2RGB_COEF_BY_Y_M7			0x07
#define _YUV2RGB_COEF_BY_Y_M8			0x08
#define _YUV2RGB_COEF_BY_Y_M9			0x09
#define _YUV2RGB_COEF_BY_Y_M10			0x0a
#define _YUV2RGB_COEF_BY_Y_M11			0x0b
#define _YUV2RGB_COEF_BY_Y_M12			0x0c
#define _YUV2RGB_COEF_BY_Y_M13			0x0d
#define _YUV2RGB_COEF_BY_Y_M14			0x0e
#define _YUV2RGB_COEF_BY_Y_M15			0x0f
#define _YUV2RGB_COEF_BY_Y_M16			0x10

#define _YUV2RGB_COEF_BY_Y_k11			0x00
#define _YUV2RGB_COEF_BY_Y_k12			0x01
#define _YUV2RGB_COEF_BY_Y_k13			0x02
#define _YUV2RGB_COEF_BY_Y_k22			0x03
#define _YUV2RGB_COEF_BY_Y_k23			0x04
#define _YUV2RGB_COEF_BY_Y_k32			0x05
#define _YUV2RGB_COEF_BY_Y_k33			0x06

#define VIP_DYNAMIC_DITHERING_TABLE_MAX	2

#define Bin_Num_sRGB 					128	/* Mac2=32, Sirius=128 (jyyang_2013/12/28)*/

#define IRE_PATTERN_USE_3D_PTG	1
typedef enum _HDR_SUB_YUV2RGB_TABLE {
	HDR_SUB_YUV2RGB_BT709_255_to_255=0,
	HDR_SUB_YUV2RGB_BT709_Limted_235_240_to_255 ,
	HDR_SUB_YUV2RGB_BT709_235_240_to_235,
	HDR_SUB_YUV2RGB_BT2020_255_to_255,
	HDR_SUB_YUV2RGB_BT2020_Limted_235_240_to_255 ,
	HDR_SUB_YUV2RGB_BT2020_235_240_to_235,
	HDR_SUB_YUV2RGB_601_255_to_255,
	HDR_SUB_YUV2RGB_601_Limted_235_240_to_255 ,
	HDR_SUB_YUV2RGB_601_235_240_to_235,

	HDR_SUB_YUV2RGB_ByPass_255_to_255,
	HDR_SUB_YUV2RGB_ByPass_Limted_235_to_255,

	HDR_SUB_YUV2RGB_TABLE_Max,

} HDR_SUB_YUV2RGB_TABLE;


typedef enum _HDR_SUB_COLOR_MAP_TABLE{
	HDR_SUB_disable_colorMap = 0,
	HDR_SUB_bt2020_2_bt709,
	HDR_SUB_bt709_2_bt2020,
	HDR_SUB_dcip3_2_bt709  ,
	HDR_SUB_bt709_2_dcip3  ,
	HDR_SUB_dcip3_2_bt2020 ,
	HDR_SUB_bt2020_2_dcip3 ,

	HDR_SUB_TABLE_NUM,
} HDR_SUB_COLOR_MAP_TABLE;


typedef enum _VIP_HDR_DM_CSC1_YUV2RGB_TABLE {
	HDR_DM_CSC1_YUV2RGB_BT709_Limted_235_240_to_255 = 0,
	HDR_DM_CSC1_YUV2RGB_BT709_255_to_255,
	HDR_DM_CSC1_YUV2RGB_BT2020_Limted_235_to_255,
	HDR_DM_CSC1_YUV2RGB_BT2020_255_to_255,
	HDR_DM_CSC1_YUV2RGB_ByPass_255_to_255,
	HDR_DM_CSC1_YUV2RGB_ByPass_Limted_235_to_255,

	HDR_DM_CSC1_YUV2RGB_BT601_Limted_235_240_to_255,
	HDR_DM_CSC1_YUV2RGB_BT601_255_to_255,

	HDR_DM_CSC1_YUV2RGB_ByPass_GBRtoRGB_255_to_255,
	HDR_DM_CSC1_YUV2RGB_ByPass_GBRtoRGB_Limted_235_to_255,

	VIP_HDR_DM_CSC1_YUV2RGB_TABLE_Max,

} VIP_HDR_DM_CSC1_YUV2RGB_TABLE;

#define HDR_TABLE_NUM 5
/*#define HDR_RGB2YUV_TABLE_NUM 5*/

typedef enum {
	HDR_RGB2OPT_709_TO_2020 = 0,
	HDR_RGB2OPT_2020_TO_709,
	HDR_RGB2OPT_DCI_TO_709,
	HDR_RGB2OPT_DCI_TO_2020,
	HDR_RGB2OPT_2020_TO_DCI,
	HDR_RGB2OPT_RGB_TO_Y,
	HDR_RGB2OPT_TABLE_NUM,
} HDR_RGB2OPT_TABLE;


typedef union
{
	unsigned char IPCtrlBits;	// IP control bits
	struct{
		unsigned char reserve_bit:5;
		unsigned char i2run_run:1;	/* in i2run flow, IP set or not */
		unsigned char seamless_run:1;	/* in seamless flow, IP set or not	*/
		unsigned char control_by_PQ:1;	/* 1:control by PQ flow, 0: conctrol by AP/scaler/...	*/
	};
} HDR_IP_ctrl_bits;


#define HFC_control_by_PQ 0x01
#define HFC_seamless_run 0x02
#define HFC_i2run_run 0x04
#define HFC_OETF_CTRL_BY_MAXCLL 250
#define HFC_RGB2OPT_OFF 255
#define HFC_EOTF_OFF 255
#define HFC_OETF_OFF 255
#define HFC_CSC3_OFF 255

typedef struct{
/*0*/	HDR_IP_ctrl_bits V_TOP_ctrl;
/*1*/	unsigned int V_TOP_reg_table;
/*2*/	HDR_IP_ctrl_bits swap_ctrl;
/*3*/	unsigned char swap_value;
/*4*/	HDR_IP_ctrl_bits HDR_420_to_422_ctrl;
/*5*/	unsigned char HDR_420_to_422_value;
/*6*/	HDR_IP_ctrl_bits HDR_422_to_444_ctrl;
/*7*/	unsigned char HDR_422_to_444_value;
/*8*/	HDR_IP_ctrl_bits CSC1_ctrl;
/*9*/	unsigned char CSC1_table;
/*10*/	HDR_IP_ctrl_bits CSC3_ctrl;
/*11*/	unsigned char CSC3_table;
/*12*/	HDR_IP_ctrl_bits HDR_33_1_ctrl;
/*13*/	unsigned char HDR_33_1_SPtable;		/*define special index: HFC_RGB2OPT_OFF*/
/*14*/	HDR_IP_ctrl_bits HDR_33_2_ctrl;
/*15*/	unsigned char HDR_33_2_table;
/*16*/	HDR_IP_ctrl_bits EOTF_ctrl;
/*17*/	unsigned char EOTF_SPtable;			/*define special index: HFC_EOTF_OFF*/
/*18*/	HDR_IP_ctrl_bits OETF_ctrl;
/*19*/	unsigned char OETF_SPtable;			/*define special index: HFC_OETF_CTRL_BY_MAXCLL, HFC_OETF_OFF*/
/*20*/	HDR_IP_ctrl_bits tone_mapping_ctrl;
/*21*/	unsigned char tone_mapping_table;
/*22*/	HDR_IP_ctrl_bits I3DDMA_33_ctrl;
/*23*/	unsigned char I3DDMA_33_table;
/*24*/	HDR_IP_ctrl_bits I3DDMA_422_to_444_ctrl;
/*25*/	unsigned char I3DDMA_422_to_444_value;
/*26*/	HDR_IP_ctrl_bits I_domain_R2Y_ctrl;
/*27*/	unsigned char I_domain_R2Y_table;
/*28*/	HDR_IP_ctrl_bits I_domain_422_to_444_ctrl;
/*29*/	unsigned char I_domain_422_to_444_value;
/*30*/	HDR_IP_ctrl_bits D_domain_Y2R_ctrl;
/*31*/	unsigned char D_domain_Y2R_table;
/*32*/	HDR_IP_ctrl_bits ST2094_ctrl;
/*33*/	unsigned char ST2094_enbale;
/*34*/	HDR_IP_ctrl_bits TC_ctrl;
/*35*/	unsigned char TC_enbale;
/*36*/	HDR_IP_ctrl_bits DM2_gamma_ctrl;
/*37*/	unsigned char DM2_gamma_enable;
/*38*/	HDR_IP_ctrl_bits reserve_38_ctrl;
/*39*/	unsigned char reserve_39Value;
} HDR_flow_control;


typedef enum _HDR_flow_control_timing {
	HFC_SDR_YUV = 0,
	HFC_SDR_RGB,
	HFC_DOLBY,
	HFC_USB_HDR10_YUV444_HD,
	HFC_USB_HDR10_YUV444_UHD,
	HFC_USB_HDR10_YUV422_HD,		/*5*/
	HFC_USB_HDR10_YUV422_UHD,
	HFC_USB_HDR10_YUV420_HD,
	HFC_USB_HDR10_YUV420_UHD,
	HFC_USB_HDR10_RGB_HD,
	HFC_USB_HDR10_RGB_UHD,			/*10*/
	HFC_USB_HLG_YUV444_HD,
	HFC_USB_HLG_YUV444_UHD,
	HFC_USB_HLG_YUV422_HD,
	HFC_USB_HLG_YUV422_UHD,
	HFC_USB_HLG_YUV420_HD,			/*15*/
	HFC_USB_HLG_YUV420_UHD,
	HFC_USB_HLG_RGB_HD,
	HFC_USB_HLG_RGB_UHD,
	HFC_DTV_HDR10_YUV444_HD,
	HFC_DTV_HDR10_YUV444_UHD,		/*20*/
	HFC_DTV_HDR10_YUV422_HD,
	HFC_DTV_HDR10_YUV422_UHD,
	HFC_DTV_HDR10_YUV420_HD,
	HFC_DTV_HDR10_YUV420_UHD,
	HFC_DTV_HDR10_RGB_HD,			/*25*/
	HFC_DTV_HDR10_RGB_UHD,
	HFC_DTV_HLG_YUV444_HD,
	HFC_DTV_HLG_YUV444_UHD,
	HFC_DTV_HLG_YUV422_HD,
	HFC_DTV_HLG_YUV422_UHD,			/*30*/
	HFC_DTV_HLG_YUV420_HD,
	HFC_DTV_HLG_YUV420_UHD,
	HFC_DTV_HLG_RGB_HD,
	HFC_DTV_HLG_RGB_UHD,
	HFC_NET_HDR10_YUV444,			/*35*/
	HFC_NET_HDR10_YUV422,
	HFC_NET_HDR10_YUV420,
	HFC_NET_HDR10_RGB,
	HFC_NET_HLG_YUV444,
	HFC_NET_HLG_YUV422,				/*40*/
	HFC_NET_HLG_YUV420,
	HFC_NET_HLG_RGB,
	HFC_HDMI_HDR10_YUV444_HD,
	HFC_HDMI_HDR10_YUV444_UHD,
	HFC_HDMI_HDR10_YUV422_HD,		/*45*/
	HFC_HDMI_HDR10_YUV422_UHD,
	HFC_HDMI_HDR10_YUV420_HD,
	HFC_HDMI_HDR10_YUV420_UHD,
	HFC_HDMI_HDR10_RGB_HD,
	HFC_HDMI_HDR10_RGB_UHD,			/*50*/
	HFC_HDMI_HLG_YUV444_HD,
	HFC_HDMI_HLG_YUV444_UHD,
	HFC_HDMI_HLG_YUV422_HD,
	HFC_HDMI_HLG_YUV422_UHD,
	HFC_HDMI_HLG_YUV420_HD,			/*55*/
	HFC_HDMI_HLG_YUV420_UHD,
	HFC_HDMI_HLG_RGB_HD,
	HFC_HDMI_HLG_RGB_UHD,

	HFC_TC,
	HFC_ST2094,						/*60*/

	HFC_HDR10_YUV444_DEBUG,
	HFC_HDR10_YUV422_DEBUG,
	HFC_HDR10_YUV420_DEBUG,
	HFC_HDR10_RGB_DEBUG,
	HFC_HLG_YUV444_DEBUG,			/*65*/
	HFC_HLG_YUV422_DEBUG,
	HFC_HLG_YUV420_DEBUG,
	HFC_HLG_RGB_DEBUG,
	HFC_SDR_YUV_DEBUG,
	HFC_SDR_RGB_DEBUG,				/*70*/
	HFC_BOOT_INIT,
	HFC_SOURCE_INIT,

	HFC_SDR_MAX_RGB,

	HFC_SDR_TIMING_NUM,

} HDR_flow_control_timing;

typedef enum _HFC_VTop_reg {
	HFC_VTOP_REG_NORMAL = 0,
	HFC_VTOP_REG_COMPRESS,
	HFC_VTOP_REG_MAX,
} HFC_VTop_reg;

/* DM2 */
#define EOTF_size 1025
#define OETF_size 1025
#define OETF_prog_idx_tbl_num 2
#define ToneMapping_size 129
#define HDR_Histogram_size 128
#define HDR_24x24x24_size (24*24*24)

typedef enum _VIP_DM2_Hist_Mode {
	DM2_Hist_Y_Mode = 0,
	DM2_Hist_RGB_MAX_Mode,
	DM2_Hist_MODE_MAX,
} VIP_DM2_Hist_Mode;

typedef struct _VIP_HDR10_OETF_ByLuminace_TBL {
	unsigned short panel_Luminace;

	unsigned short  OETF_100N[OETF_size];
	unsigned short  OETF_150N[OETF_size];
	unsigned short  OETF_200N[OETF_size];
	unsigned short  OETF_250B[OETF_size];
	unsigned short  OETF_300B[OETF_size];
	unsigned short  OETF_350B[OETF_size];
	unsigned short  OETF_400B[OETF_size];
	unsigned short  OETF_400N6[OETF_size];
	unsigned short  OETF_500N6[OETF_size];
	unsigned short  OETF_600N6[OETF_size];
	unsigned short  OETF_660N6[OETF_size];
	unsigned short  OETF_700N6[OETF_size];
	unsigned short  OETF_800N6[OETF_size];
	unsigned short  OETF_1000N6[OETF_size];
	unsigned short  OETF_1000Over[OETF_size];

} VIP_HDR10_OETF_ByLuminace_TBL;

/*******************************************************************************
 * Structure
 ******************************************************************************/
typedef struct {
	unsigned char Data_sel;
	unsigned char maxlen;
	unsigned char psmth;
	unsigned char lpmode;
	unsigned char EngDiv;
	unsigned char offDiv;
	unsigned char uvGain;
	unsigned char Dcti_mode;
	unsigned char cur_sel;
	unsigned char Dcti_en;
} DRV_VipSHDIDcti_t;

typedef struct {
	unsigned char u_delay;
	unsigned char v_delay;

} DRV_VipUV_Delay;


typedef struct {
	unsigned char yc_delay;
	unsigned char cb_delay;
	unsigned char cr_delay;
	unsigned char new_crldelay_en;
	unsigned char new_cbldelay_en;
	unsigned char new_yldelay_en;
	unsigned char crldelay_en;
	unsigned char cbldelay_en;
	unsigned char yldelay_en;
	unsigned char crl_delay;
	unsigned char cbl_delay;
	unsigned char yl_delay;

} DRV_VipUV_Delay_TOP;

typedef struct {
	DRV_VipUV_Delay_TOP VipUV_Delay_TOP;
} DRV_VipUV_Delay_TOP_Table;


typedef struct {
	unsigned int BSum;
	unsigned int GSum;
	unsigned int RSum;
	unsigned char BMax;
	unsigned char BMin;
	unsigned char GMax;
	unsigned char GMin;
	unsigned char RMax;
	unsigned char RMin;
} RGB_pixel_info;

typedef struct  {
	unsigned char HDR10_EN;
	unsigned char HDR10_420_2_422;
	unsigned char HDR10_422_2_444;
	unsigned char HDR10_YUV2RGB;
	unsigned char HDR10_EOTF;
	unsigned char HDR10_CMT;
	unsigned char HDR10_OETF;
	unsigned char HDR10_RGB2OPT;
	unsigned char HDR10_DITHER;
} DRV_HDR10_submodule_CTL;

typedef struct  {
	unsigned int dolby_mode;
	unsigned int hdmi_in_mux;
	unsigned int dolby_hsize;
	unsigned int dolby_vsize;
	unsigned int dolby_h_total;
	unsigned int dolby_h_den_sta;
	unsigned int dolby_v_den_sta;
} DRV_HDR10_top_init_CTL;

typedef struct  {

	unsigned char wpr_on;
	unsigned char opc_on;
	unsigned char mce_on;
	//unsigned char type_sel; merlin3 remove
	//unsigned char mode_3d; merlin4 remove
	//unsigned char test_mode; merlin4 remove
	unsigned char mode_sel;


} DRV_Mplus_ModeChange;

typedef enum _VIP_RGBW_MODE {
	VIP_RGBW_MODE_DISABLE = 0,
	VIP_RGBW_MODE_LGDMPLUS,
	VIP_RGBW_MODE_RTKRGBW,
	VIP_RGBW_MODE_SIW,
	VIP_RGBW_MODE_YYG,
	VIP_RGBW_MODE_MAX,
} VIP_RGBW_MODE;

typedef struct _yuvdata
{
	unsigned short y;
	unsigned short u;
	unsigned short v;
} yuvdata;


/*******************************************************************************
* enumeration
******************************************************************************/

typedef enum _VIP_GAMMA_TYPE {
	VIP_GAMMA_MODE1_R = 0,
	VIP_GAMMA_MODE1_G,
	VIP_GAMMA_MODE1_B,
	VIP_GAMMA_MODE2_R,
	VIP_GAMMA_MODE2_G,
	VIP_GAMMA_MODE2_B,
	VIP_GAMMA_MODE3_R,
	VIP_GAMMA_MODE3_G,
	VIP_GAMMA_MODE3_B,
	VIP_GAMMA_MODE4_R,
	VIP_GAMMA_MODE4_G,
	VIP_GAMMA_MODE4_B,
	VIP_GAMMA_MODE5_R,
	VIP_GAMMA_MODE5_G,
	VIP_GAMMA_MODE5_B,
	VIP_GAMMA_MODE6_R,
	VIP_GAMMA_MODE6_G,
	VIP_GAMMA_MODE6_B,
	VIP_GAMMA_MODE7_R,
	VIP_GAMMA_MODE7_G,
	VIP_GAMMA_MODE7_B,
	VIP_GAMMA_MODE8_R,
	VIP_GAMMA_MODE8_G,
	VIP_GAMMA_MODE8_B,
	VIP_GAMMA_MODE9_R,
	VIP_GAMMA_MODE9_G,
	VIP_GAMMA_MODE9_B,
	VIP_GAMMA_MODE10_R,
	VIP_GAMMA_MODE10_G,
	VIP_GAMMA_MODE10_B,
	VIP_GAMMA_MODE11_R,
	VIP_GAMMA_MODE11_G,
	VIP_GAMMA_MODE11_B,
	VIP_GAMMA_MODE12_R,
	VIP_GAMMA_MODE12_G,
	VIP_GAMMA_MODE12_B,

} VIP_GAMMA_TYPE;

typedef enum _VIP_PANEL_BIT {
	VIP_PANEL_BIT6 = 0,
	VIP_PANEL_BIT8,
	VIP_PANEL_BIT10,
	VIP_PANEL_BIT_OTHERS,
} VIP_PANEL_BIT;

typedef enum _VIP_DITHER_IP {
	VIP_DITHER_IP_MAIN = 0,
	VIP_DITHER_IP_HDMI,
	VIP_DITHER_IP_MEMC_MUX,
	VIP_DITHER_IP_LGD,
	VIP_DITHER_IP_PANEL,
	VIP_DITHER_IP_MAX,
} VIP_DITHER_IP;

typedef enum _VIP_DITHER_SEQUENCE {
	VIP_DITHER_SEQUENCE_MAIN = 0,
	VIP_DITHER_SEQUENCE_PANEL,
	VIP_DITHER_SEQUENCE_MAX,
} VIP_DITHER_SEQUENCE;

typedef enum _VIP_DITHER_MAINTABLE {
	/*        12to10       */
	VIP_DITHER_MAINTABLE_DEFAULT_12to10= 0,
	VIP_DITHER_MAINTABLE_LGD_12to10,
	VIP_DITHER_MAINTABLE_HDR10_12to10,
	/*        12to8       */
	VIP_DITHER_MAINTABLE_DEFAULT_12to8,
	VIP_DITHER_MAINTABLE_BLANCE_12to8,
	VIP_DITHER_MAINTABLE_CP_12to8,
	VIP_DITHER_MAINTABLE_MAX,
} VIP_DITHER_MAINTABLE;

typedef enum _VIP_DITHER_PANELTABLE {
	VIP_DITHER_PANELTABLE_DEFAULT = 0,
	VIP_DITHER_PANELTABLE_BLANCE,
	VIP_DITHER_PANELTABLE_BLANCE_ROLL_15,
	VIP_DITHER_PANELTABLE_MAX,
} VIP_DITHER_PANELTABLE;

typedef enum _VIP_DITHER_TEMPORAL {
	VIP_DITHER_TEMPORAL_MAIN_GENERAL = 0,
	VIP_DITHER_TEMPORAL_HSD,     //  HSD hw default
	VIP_DITHER_TEMPORAL_MEMC,  // HIGH FREQ.
	VIP_DITHER_TEMPORAL_MAX,
} VIP_DITHER_TEMPORAL;

typedef enum _VIP_UV_DELAY_ENABLE {
	VIP_UV_DELAY_OFF = 0,
	VIP_UV_DELAY_ON,
} VIP_UV_DELAY_ENABLE;

typedef enum _VIP_GAMMA_CHANNEL_RGB {
	GAMMA_CHANNEL_R = 0,
	GAMMA_CHANNEL_G,
	GAMMA_CHANNEL_B,
	VIP_GAMMA_CHANNEL_RGB_MAX,
	GAMMA_CHANNEL_W,
} VIP_GAMMA_CHANNEL_RGB;

typedef enum _VIP_RGB2YUV_OUT_DATA_Ctrl {
	RGB2YUV_OUT_DATA_Old_Mode = 0,
	RGB2YUV_OUT_DATA_16_235,
	RGB2YUV_OUT_DATA_0_255,
	RGB2YUV_OUT_DATA_newTable_newPath_Mode,
	RGB2YUV_OUT_DATA_0_255_HDR10_Mode,

	RGB2YUV_OUT_DATA__Max,
} VIP_RGB2YUV_OUT_DATA_Ctrl;

typedef enum _VIP_RGB2YUV_COEF_MATRIX_MODE {
	RGB2YUV_COEF_BYPASS_NORMAL_GAIN = 0,
	RGB2YUV_COEF_BYPASS_0_255_TO_16_235,
	RGB2YUV_COEF_RGB_0_255_TO_YCC601_16_235,
	RGB2YUV_COEF_RGB_16_235_TO_YCC601_16_235,
	RGB2YUV_COEF_RGB_0_255_TO_YCC709_16_235,
	RGB2YUV_COEF_RGB_16_235_TO_YCC709_16_235,
	RGB2YUV_COEF_RGB_0_255_TO_YCC709_0_255,
	RGB2YUV_COEF_TV006_YPP_LOW,
	RGB2YUV_COEF_RGB_0_255_TO_YCC2020_16_235,
	RGB2YUV_COEF_RGB_0_255_TO_YCC2020_0_255,

	RGB2YUV_COEF_YCC601_0_255_TO_YCC709_0_255,

	RGB2YUV_COEF_YCC2020_16_235_TO_YCC709_16_235,
	RGB2YUV_COEF_YCC2020_0_255_TO_YCC709_16_235,

	RGB2YUV_COEF_YCC709_16_235_TO_YCC601_16_235,
	RGB2YUV_COEF_YCC709_0_255_TO_YCC601_16_235,
	RGB2YUV_COEF_YCC2020_16_235_TO_YCC601_16_235,
	RGB2YUV_COEF_YCC2020_0_255_TO_YCC601_16_235,
	RGB2YUV_COEF_RGB709_16_235_TO_YCC601_16_235,
	RGB2YUV_COEF_RGB709_0_255_TO_YCC601_16_235,
	RGB2YUV_COEF_RGB2020_16_235_TO_YCC601_16_235,
	RGB2YUV_COEF_RGB2020_0_255_TO_YCC601_16_235,

	RGB2YUV_COEF_MATRIX_MODE_Max,

} VIP_RGB2YUV_COEF_MATRIX_MODE;

typedef enum _VIP_RGB2YUV_COEF_MATRIX_ITEMS {
	RGB2YUV_COEF_M11 = 0,
	RGB2YUV_COEF_M12,
	RGB2YUV_COEF_M13,
	RGB2YUV_COEF_M21,
	RGB2YUV_COEF_M22,
	RGB2YUV_COEF_M23,
	RGB2YUV_COEF_M31,
	RGB2YUV_COEF_M32,
	RGB2YUV_COEF_M33,
	RGB2YUV_COEF_Yo_Even,
	RGB2YUV_COEF_Yo_Odd,
	RGB2YUV_COEF_Yo_Gain,
	RGB2YUV_COEF_Sel_RGB,
	RGB2YUV_COEF_Sel_Yin_Offset,
	RGB2YUV_COEF_Sel_UV_Out_Offset,
	RGB2YUV_COEF_Sel_UV_Off,
	RGB2YUV_COEF_Matrix_Bypass,
	RGB2YUV_COEF_Enable_Y_Gain,

	RGB2YUV_COEF_MATRIX_ITEMS_Max,

} VIP_RGB2YUV_COEF_MATRIX_ITEMS;

typedef enum _COLOR_FUN_BYPASS {
	BYPASS_VIVID_COLOR = 0,
	BYPASS_RGB_CON,
	BYPASS_RGB_BRI,
	BYPASS_GAMMA,
	BYPASS_D_DITHER,
	BYPASS_SRGB,
	BYPASS_RGB2YUV_MATRIX,
	BYPASS_YUV2RGB_MATRIX,
} COLOR_FUN_BYPASS;

typedef enum _BYPASS_FLAG {
	IP_BYPASS = 0,
	IP_NO_BYPASS
} BYPASS_FLAG;

#if CONFIG_FIRMWARE_IN_KERNEL
typedef enum _HDR_table_item {
	HDR_EN = 0,
	HDR_420_2_422,
	HDR_422_2_444,
	HDR_DITHER,

	HDR_ITEM_MAX,
} HDR_table_item;
#else
typedef enum _HDR_table_item {
	HDR_YUV2RGB_t_sel,
	HDR_RGB2OPT_t_sel,
	HDR_LUT_t_sel,

	HDR_ITEM_MAX,
} HDR_table_item;
#endif

typedef enum _VIP_8VERTEX_RGB {
	VIP_8VERTEX_R = 0,
	VIP_8VERTEX_G,
	VIP_8VERTEX_B,

	VIP_8VERTEX_RGB_MAX
} VIP_8VERTEX_RGB;


/*******************************************************************************
 * Structure
 ******************************************************************************/
typedef struct {
	unsigned char gamma_adapt_en;
	unsigned short sat_thl;
	unsigned short sat_thl_mul;
} DRV_Adaptive_Gamma_Ctrl;

typedef struct {
	COLOR_FUN_BYPASS idIP;
	unsigned char bypass_switch;
} Color_Fun_Bypass;
#if 0
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

	VIP_PQ_ByPass_ITEMS_Max,

} VIP_PQ_ByPass_ITEMS;

typedef struct _VIP_PQ_ByPass_Struct{
	unsigned char VIP_PQ_ByPass_TBL[VIP_PQ_ByPass_ITEMS_Max];

} VIP_PQ_ByPass_Struct;
#endif
#define Bin_Num_Output_Gamma 1024
#define Bin_Num_InvOutput_Gamma 256
#define Output_Gamma_TBL_MAX 5
#define InvOutput_Gamma_TBL_MAX 5

typedef struct _VIP_Output_InvOutput_Gamma_CTRL_ITEM{
	unsigned char output_Gamma_En;
	unsigned char output_Location;

} VIP_Output_InvOutput_Gamma_CTRL_ITEM;

typedef struct _VIP_Output_Gamma_TBL{
	unsigned int TBL_R[Bin_Num_Output_Gamma/2];
	unsigned int TBL_G[Bin_Num_Output_Gamma/2];
	unsigned int TBL_B[Bin_Num_Output_Gamma/2];
	unsigned int TBL_W[Bin_Num_Output_Gamma/2];

} VIP_Output_Gamma_TBL;

typedef struct _VIP_InvOutput_Gamma_TBL{
	unsigned int TBL_R[Bin_Num_InvOutput_Gamma/2];
	unsigned int TBL_G[Bin_Num_InvOutput_Gamma/2];
	unsigned int TBL_B[Bin_Num_InvOutput_Gamma/2];

} VIP_InvOutput_Gamma_TBL;

typedef struct _VIP_Output_Gamma{
	VIP_Output_InvOutput_Gamma_CTRL_ITEM Output_InvOutput_Gamma_CTRL_ITEM;
	VIP_Output_Gamma_TBL Output_Gamma_TBL;
}VIP_Output_Gamma;

typedef struct _VIP_InvOutput_Gamma{
	unsigned char InvOutput_Gamma_En;
	VIP_InvOutput_Gamma_TBL InvOutput_Gamma_TBL;
}VIP_InvOutput_Gamma;

/* demura DRV*/
#define VIP_Demura_Adaptive_Scale_LV_NUM 10
#define VIP_Demura_Encode_TBL_ROW 271/*136*/
#define VIP_Demura_Encode_TBL_COL 3312/*1680*/
#define VIP_DemuraTBL_LineSize_RGB_481x271 3312
#define VIP_DemuraTBL_LineSize_Y_481x271 1104
#define VIP_DemuraTBL_LineSize_RGB_241x136 1680
#define VIP_DemuraTBL_LineSize_Y_241x136 560

typedef enum _VIP_DeMura_TBL_Mode {
	DeMura_TBL_241x136 = 0,
	DeMura_TBL_481x271,

	VIP_DeMura_TBL_Mode_MAX,
} VIP_DeMura_TBL_Mode;

typedef enum _VIP_DeMura_Channel_Mode {
	DeMura_Ch_Y_Mode = 0,
	DeMura_Ch_RGB_Separate,

	VIP_DeMura_Channel_Mode_MAX,
} VIP_DeMura_Channel_Mode;

typedef struct  _DRV_DeMura_Adaptive_TBL {
	unsigned char adaptiveScale_En;
	unsigned char adaptiveScale[VIP_Demura_Adaptive_Scale_LV_NUM];
	unsigned char adaptiveScale_APL_th[VIP_Demura_Adaptive_Scale_LV_NUM];

} DRV_DeMura_Adaptive_TBL;

typedef struct  _DRV_DeMura_CTRL_TBL {
	unsigned char demura_table_scale;
	unsigned char demura_block_size;
	unsigned char demura_rgb_table_seperate;
	unsigned char demura_en;

	unsigned short demura_r_upper_cutoff;
	unsigned short demura_r_lower_cutoff;
	unsigned short demura_r_m_level;
	unsigned short demura_r_l_level;
	unsigned short demura_r_h_level;
	unsigned short r_div_factor_l_m;
	unsigned short r_div_factor_l;
	unsigned short r_div_factor_h;
	unsigned short r_div_factor_m_h;

	unsigned short demura_g_upper_cutoff;
	unsigned short demura_g_lower_cutoff;
	unsigned short demura_g_m_level;
	unsigned short demura_g_l_level;
	unsigned short demura_g_h_level;
	unsigned short g_div_factor_l_m;
	unsigned short g_div_factor_l;
	unsigned short g_div_factor_h;
	unsigned short g_div_factor_m_h;

	unsigned short demura_b_upper_cutoff;
	unsigned short demura_b_lower_cutoff;
	unsigned short demura_b_m_level;
	unsigned short demura_b_l_level;
	unsigned short demura_b_h_level;
	unsigned short b_div_factor_l_m;
	unsigned short b_div_factor_l;
	unsigned short b_div_factor_h;
	unsigned short b_div_factor_m_h;

	unsigned char demura_table_scale_H;//juwen, k5lp
	unsigned char demura_table_scale_M;//juwen, k5lp
	unsigned char demura_table_scale_L;//juwen, k5lp

	unsigned short demura_r_h_keep_level;/*k6lp, add*/
	unsigned short demura_g_h_keep_level;/*k6lp, add*/
	unsigned short demura_b_h_keep_level;/*k6lp, add*/

} DRV_DeMura_CTRL_TBL;

typedef struct  _VIP_DeMura_TBL {
	DRV_DeMura_CTRL_TBL DeMura_CTRL_TBL;
	unsigned char TBL[VIP_Demura_Encode_TBL_ROW*VIP_Demura_Encode_TBL_COL];
	unsigned char table_mode;
	DRV_DeMura_Adaptive_TBL DeMura_Adaptive_TBL;

} VIP_DeMura_TBL;

typedef struct  _DRV_DeMura_DMA_TBL {
	unsigned int burst_len;
	unsigned int line_128_num;
	unsigned int line_step;
	unsigned int table_height;
	unsigned int table_width;

} DRV_DeMura_DMA_TBL;

typedef struct  {
	unsigned short h_sta;
	unsigned short h_end;
	unsigned short v_sta;
	unsigned short v_end;
} Drvif_SCALER_DISPLAY_DATA;

#if 1
typedef struct {
	//ctl1  data_sel, maxlen, psmth, lpmode, engdiv, offdiv, uvgain, dcti_mode, cul_sel, dcti_en
	unsigned char data_sel;
	unsigned char maxlen;
	unsigned char psmth;
	unsigned char lp_mode;
	unsigned char engdiv;
	unsigned char offdiv;
	unsigned char uvgain;
	unsigned char dcti_mode;
	unsigned char cur_sel;
	unsigned char dcti_en;

} DRV_VipIDcti_ctl1;

typedef struct {
	//ctl2  uvsync_en, tran_mode, rate_steep, th_steep, th_coring, steep_mode, hp_mode, vlp_mode, median_mode, blending_mode
	unsigned char uvsync_en;
	unsigned char tran_mode;
	unsigned char rate_steep;
	unsigned char th_steep;
	unsigned char th_coring;
	unsigned char steep_mode;
	unsigned char hp_mode;
	unsigned char vlp_mode;
	unsigned char median_mode;
	unsigned char blending_mode;

} DRV_VipIDcti_ctl2;

typedef struct {
	//ctl3  maxminlen, rate_tran, th_tran, region_mode, rate_smooth, th_smooth
	unsigned char maxminlen;
	unsigned char rate_tran;
	unsigned char th_tran;
	unsigned char region_mode;
	unsigned char rate_smooth;
	unsigned char th_smooth;

} DRV_VipIDcti_ctl3;


typedef struct {
	//ctl4  th_gtran
	unsigned char th_gtran;

} DRV_VipIDcti_ctl4;

typedef struct {
	//ctl5  statistic_en, th_uvMinDiff, rate_stair2, rate_stair1, th_stair
	unsigned char statistic_en;
	unsigned char th_uvmindiff;
	unsigned char rate_stair2;
	unsigned char rate_stair1;
	unsigned char th_stair;

} DRV_VipIDcti_ctl5;

typedef struct {
	//ctl6  statistic_hist, rate_engsync, rate_uvmindiff, th_engsync
	unsigned int  statistic_hist;
	unsigned char rate_engsync;
	unsigned char rate_uvmindiff;
	unsigned char th_engsync;

} DRV_VipIDcti_ctl6;

typedef struct {
	//ctl7  debug_shiftbit, debug_mode, high_bound, low_bound	
	unsigned char debug_shiftbit;
	unsigned char debug_mode;
	unsigned char high_bound;
	unsigned char low_bound;

} DRV_VipIDcti_ctl7;

typedef struct {
	//ctl1_v  uvgain_v, offdiv_v, engdiv_v	
	unsigned char uvgain_v;
	unsigned char offdiv_v;
	unsigned char engdiv_v;

} DRV_VipIDcti_ctl1_v;

typedef struct {
	//ctl2_v  steep_mode_v, th_steep_v, rate_steep_v, tran_mode_v	
	unsigned char steep_mode_v;
	unsigned char th_steep_v;
	unsigned char rate_steep_v;
	unsigned char tran_mode_v;

} DRV_VipIDcti_ctl2_v;

typedef struct {
	/*ctl3_v	th_smooth_v, rate_smooth_v, region_mode_v, th_tran_v, rate_tran_v*/
	unsigned char th_smooth_v;
	unsigned char rate_smooth_v;
	unsigned char region_mode_v;
	unsigned char th_tran_v;
	unsigned char rate_tran_v;

} DRV_VipIDcti_ctl3_v;

typedef struct {
	//ctl4_v  th_gtran_v, rate_stair1_v, rate_stair2_v, th_stair_v
	unsigned char th_gtran_v;
	unsigned char rate_stair1_v;
	unsigned char rate_stair2_v;
	unsigned char th_stair_v;

} DRV_VipIDcti_ctl4_v;

typedef struct {
	DRV_VipIDcti_ctl1 VipNewIDcti_ctl1;
	DRV_VipIDcti_ctl2 VipNewIDcti_ctl2;
	DRV_VipIDcti_ctl3 VipNewIDcti_ctl3;
	DRV_VipIDcti_ctl4 VipNewIDcti_ctl4;
	DRV_VipIDcti_ctl5 VipNewIDcti_ctl5;
	DRV_VipIDcti_ctl6 VipNewIDcti_ctl6;
	DRV_VipIDcti_ctl7 VipNewIDcti_ctl7;
	DRV_VipIDcti_ctl1_v VipNewIDcti_ctl1_v;
	DRV_VipIDcti_ctl2_v VipNewIDcti_ctl2_v;
	DRV_VipIDcti_ctl3_v VipNewIDcti_ctl3_v;
	DRV_VipIDcti_ctl4_v VipNewIDcti_ctl4_v;

} DRV_VipIDcti_Table;

typedef enum _PANELDITHER_BIT {
	Dither_BIT6 = 0,
	Dither_BIT7,
	Dither_BIT8,
	Dither_BIT9,
	Dither_BIT10,
} PANELDITHER_BIT;

#endif

/*******************************************************************************
 * Program
 ******************************************************************************/
 /* ====  Dither ======*/
void drvif_color_Setditherbit(VIP_PANEL_BIT default_vip_panel_bit);  // for panel dither
void drvif_color_set_Main_Dither_Enable(unsigned char enable);
void drvif_color_set_HDMI_Dither_Enable(unsigned char enable);
void drvif_color_Panel_Dither_mode(unsigned char mode);
void drvif_color_set_Panel_Dither_Enable(unsigned char enable);
void drvif_color_set_LGD_Dither_Enable(unsigned char enable);

void drvif_color_set_MainType_Sequence(unsigned char DitherIP,unsigned char  (*pDITHER_SEQUENCE)[16]);
void drvif_color_set_PanelType_Sequence(unsigned char DitherIP,unsigned char (*pDITHER_SEQUENCE)[16]);
void drvif_color_set_MainType_Dither_Table(unsigned char DitherIP,unsigned char (*pDITHER_TABLE)[4][4]);
void drvif_color_set_PanelType_Dither_Table(unsigned char DitherIP,unsigned char  (*pDITHER_TABLE)[16][4]);
void drvif_color_set_Dither_Sequence(unsigned char DitherIP,unsigned char (*pDITHER_SEQUENCE)[16]);
void drvif_color_set_Dither_Temporal(unsigned char DitherIP,unsigned char * pDITHER_TEMPORAL);
/* ===============================*/
void drvif_color_set_BOE_RGBW(unsigned short *ptr_tab, int w_rate);

void drvif_color_set_Panel_Bit(VIP_PANEL_BIT bit);

void drvif_color_digital_filtering_init(SCALER_DISP_CHANNEL display);


void drvif_color_setydlti(unsigned char display, unsigned char Level);
void drvif_color_setgamma(unsigned char display, unsigned char Mode, VIP_Gamma *ptr);
void drvif_color_setycontrastbrightness_new(unsigned char display, unsigned char Contrast, unsigned char Brightness, unsigned char csp_control);
/* driver for YUV2RGB, sub channel is same as main now. fix this driver for sub channel if necessary.*/
void drvif_color_setYUV2RGB_CSMatrix(DRV_VIP_YUV2RGB_CSMatrix *ptr, VIP_CSMatrix_WriteType WriteMode, VIP_YUV2RGB_Y_SEG idx, unsigned char display, VIP_Table_Select tbl);


/*void drvif_color_handler(void);	*/ /* move to scalerColor*/
/*void drvif_color_setdataformathandler(void);	*/ /* move to scalerLib*/

void drvif_color_setrgbcontrast(unsigned char display, unsigned short Red, unsigned short Green, unsigned short Blue, unsigned char  BlendRatio, unsigned char Overlay);
void drvif_color_setrgbbrightness(unsigned char display, unsigned short Red, unsigned short Green, unsigned short Blue);
void drvif_color_gamma_control_front(unsigned char display);
void drvif_color_gamma_control_back(unsigned char display, unsigned char ucWriteEnable);

void drvif_color_colorwrite_output_gamma(unsigned int *pArray, VIP_GAMMA_CHANNEL_RGB RGB_chanel_idx);
void drvif_color_colorwrite_inv_output_gamma(unsigned int *pArray, VIP_GAMMA_CHANNEL_RGB RGB_chanel_idx);
void drvif_color_colorwrite_inv_output_gamma_Enable(unsigned char Enable);
void drvif_color_colorwrite_mixer_gamma1(unsigned int *pArray, VIP_GAMMA_CHANNEL_RGB RGB_chanel_idx);
void drvif_color_colorwrite_mixer_gamma1_Enable(unsigned char Enable);
void drvif_color_colorwrite_mixer_gamma2(unsigned int *pArray, VIP_GAMMA_CHANNEL_RGB RGB_chanel_idx);
void drvif_color_colorwrite_mixer_gamma2_Enable(unsigned char Enable);
void drvif_color_set_output_gamma_format(unsigned char Enable, unsigned char fmt, unsigned char loc, unsigned char ch_order);
unsigned char drvif_color_Get_RGBW_Mode(void);
void drvif_color_set_RGBW(void);
void drvif_color_set_RGBW_cpc_be(unsigned char level1, unsigned char level2);
void drvif_color_set_RGBW_deoversat(unsigned char level);
void drvif_color_set_RGBW_hfreq(unsigned char level);
void drvif_color_set_RGBW_newCM_sprOffset(unsigned char level);
void drvif_color_set_RGBW_spr_coef(unsigned char mode, unsigned char ch_order);

void drvif_color_sub_huesat(unsigned char display, short Hue, short Sat);
void drvif_color_set422to444(unsigned char channel, unsigned char bEnable);
void drvif_color_sethighlightwindowstep(unsigned short hstep, unsigned short wstep, unsigned short vstep, unsigned short lstep);
void drvif_color_set_sethighlightwindowmin(unsigned short minwidth, unsigned short minlen);
void drvif_color_sethighlightwindowborder(unsigned char Border, unsigned char BorderType);
unsigned char drvif_color_gethighlightwindow_enable(void);
void drvif_color_sethighlightwindow(unsigned char Ena_bit, unsigned short HSTA, unsigned short VSTA, unsigned short HEND, unsigned short VEND, unsigned short Border);

void drvif_color_colorspacergb2yuvtransfer(unsigned char channel, unsigned short *table_index);

void drvif_color_setpiprgbcontrastbrightness(unsigned char BlendRatio);
void drvif_color_setBrightnessDualplayOverlay(unsigned int mainBlendFactor,unsigned int subBlendFactor);

void drvif_color_setuv_sat(unsigned char display, unsigned char Sat);
void drvif_sRGB_SetGrid(unsigned char display, signed int *sRGB_grid);
void scalerVIP_sRGB_Write_FullfSize_rgbChange(int color_change);
void scalerVIP_sRGB_Write_HalfSize_rgbChange(int table_sel, int color_change);

void scalerVIP_sRGB_Read_FullSize(void);

void drvif_color_chroma_coring(unsigned char display, unsigned char domain, unsigned char Level);
void drvif_color_profile_init(unsigned char display);


void wait_for_sRGB_fifo_empty(void);

void drvif_color_UV_Delay_Enable(VIP_UV_DELAY_ENABLE on_off);
void drvif_color_Set_UV_Delay(DRV_VipUV_Delay *ptr);
void drvif_color_Set_UV_Delay_TOP(DRV_VipUV_Delay_TOP_Table *ptr);

void drvif_color_Get_UV_Delay(DRV_VipUV_Delay *ptr);


void drvif_color_Gamma_Curve_Write(unsigned int *Gamma_Encode, VIP_GAMMA_CHANNEL_RGB RGB_chanel_idx);
unsigned char drvif_color_Gamma_Read_Write_Check(void);

void drvif_color_dnewdcti_table(DRV_VipNewDDcti_Table *ptr);
void drvif_color_get_dnewdcti_table(DRV_VipNewDDcti_Table *ptr);

void drvif_color_inewdcti_table(DRV_VipIDcti_Table *ptr);
void drvif_color_get_inewdcti_table(DRV_VipNewIDcti_Table *ptr);

/* 2013.07.07 Diane add for Gamma Log*/
void drvif_Gamma_Encode_Log_Setting(unsigned char value);
void drvif_Gamma_Decode_Log_Setting(unsigned char value);
void drvif_Gamma_Calculated_Log_Setting(unsigned char value);
void drvif_Gamma_Final_Table_Log_Setting(unsigned char value);
void drvif_Output_Gamma_Encode_Log_Setting(unsigned char value);
void drvif_Output_Gamma_Decode_Log_Setting(unsigned char value);
void drvif_Output_Gamma_Calculated_Log_Setting(unsigned char value);
void drvif_Output_Gamma_Final_Table_Log_Setting(unsigned char value);

unsigned char drvif_Gamma_Encode_Log_Getting(void);
unsigned char drvif_Gamma_Decode_Log_Getting(void);
unsigned char drvif_Gamma_Calculated_Log_Getting(void);
unsigned char drvif_Gamma_Final_Table_Log_Getting(void);
unsigned char drvif_Output_Gamma_Encode_Log_Getting(void);
unsigned char drvif_Output_Gamma_Decode_Log_Getting(void);
unsigned char drvif_Output_Gamma_Calculated_Log_Getting(void);
unsigned char drvif_Output_Gamma_Final_Table_Log_Getting(void);

unsigned char drvif_color_Get_Color_UV_Delay(void);
unsigned char drvif_color_Get_Color_UV_Delay_Enable(void);
/*unsigned char drvif_color_regDitherLUT(unsigned char *table);*/
/*void drvif_color_digital_filtering_init(void);*/



/*for xvYvv*/
void drvif_color_inv_gamma_control_front(unsigned char display);
void drvif_color_inv_gamma_control_back(unsigned char display, unsigned char ucWriteEnable);
void drvif_color_Inv_Gamma_Curve_Write(unsigned int *Gamma_Encode, VIP_GAMMA_CHANNEL_RGB RGB_chanel_idx);
void drvif_color_sRGB_ByPass(void);
void drvif_color_xvYcc_colorspaceyuv2rgbtransfer(unsigned char display, unsigned char xvYcc_en_flag);

void fwif_color_set_TSB_rgbbrightness(unsigned char display, unsigned short Red, unsigned short Green, unsigned short Blue);

//void drvif_color_set_Adaptive_Gamma(DRV_Adaptive_Gamma_Ctrl *ptr);

/*using drvif_color_setYUV2RGB_CSMatrix instead, elieli*/
#if 0
void drvif_color_colorspaceyuv2rgbtransfer_coef_by_y(unsigned char display, unsigned char which_table, unsigned int tYUV2RGB_COEF_BY_Y_table[][YUV2RGB_COEF_BY_Y_Seg_Num]);
void drvif_color_colorspaceyuv2rgbtransfer_uv_offset_by_y(unsigned char display, unsigned char which_table, unsigned int tYUV2RGB_UV_OFFSET_BY_Y_table[][YUV2RGB_UV_OFFSET_BY_Y_Seg_Num]);
void drvif_color_colorspaceyuv2rgbtransfer(unsigned char display, unsigned short *table_index);

void drvif_color_reg_YUV2RGB_COEF_BY_Y_Table(unsigned int *table);
void drvif_color_reg_YUV2RGB_UV_OFFSET_BY_Y_Table(unsigned int *table);
#endif

//int drvif_color_get_rgb_pixel_info(RGB_pixel_info *data);
void drvif_color_bypass(Color_Fun_Bypass *ptr, unsigned char ipNum);
void drvif_color_set_WB_pattern_setup(void);
void drvif_color_set_WB_pattern_off(unsigned char bForceBG, unsigned char b422Format);
void drvif_color_set_WB_pattern_RGB(unsigned char R, unsigned char G, unsigned char B);
unsigned char drvif_color_get_WB_pattern_on(void);

void drvif_color_setrgbcolortemp_contrast(unsigned short Red, unsigned short Green, unsigned short Blue);
void drvif_color_setrgbcolortemp_bright(unsigned short Red, unsigned short Green, unsigned short Blue);
void drvif_color_setrgbcolortemp_en(unsigned char enable);
void drvif_color_set_new_uvc(DRV_NEW_UVC *ptr);
void drvif_color_set_de_contour(DRV_De_CT_1D *ptr);
void drvif_color_set_Blue_Stretch(DRV_Gamma_BS *ptr);

void drvif_color_set_Color_Mapping(unsigned char display ,DRV_Color_Mapping *ptr);
void drvif_color_inv_gamma_init(void);

void drvif_color_D_3dLUT(unsigned char LUT_Ctrl, unsigned int *pArray);//flora@20150617
void drvif_color_D_3dLUT_By_DMA(unsigned char LUT_Ctrl, unsigned int *pArray, unsigned int addr, unsigned int* vir_addr);
void drvif_color_Read_D_3dLUT(unsigned char *LUT_Ctrl, unsigned int *pArray);

void drvif_color_set_Vivid_Color_Enable(unsigned char ucEnable);
void drvif_color_set_sub_Vivid_Color_Enable(unsigned char ucEnable);

void drvif_color_disable_VIP(void);

void drvif_color_set_color_temp(unsigned char enable, unsigned short Red_Con, unsigned short Green_Con, unsigned short Blue_Con,
	short Red_Bri, short Green_Bri, short Blue_Bri);
void drvif_color_inv_gamma_enable(unsigned char display, unsigned char enable, unsigned char useRPC);
void drvif_color_gamma_enable(unsigned char display, unsigned char enable, unsigned char useRPC);
void drvif_DM_B05_Set(unsigned short *lutMap);
void drvif_DM_HDR_3dLUT(unsigned char enable, unsigned int *pArray);/*flora@20150617, modify by juwen*/
#ifdef CONFIG_I2RND_B05_ENABLE
void drvif_DM_HDR_3dLUT_16_i2run(unsigned char enable, unsigned short *pArray);
#endif
void drvif_DM_HDR_3dLUT_16(unsigned char enable, unsigned short *pArray);/*flora@20150617, modify by juwen*/

unsigned int drvif_Get_90k_Lo_clk(void);
char drvif_Wait_VO_start(short delay0, short delay1, unsigned int timeout);
char drvif_Get_VO_Active_Info(unsigned short *v_sta, unsigned short *v_end, unsigned short *line_cnt);
char drvif_Wait_VGIP_start(short delay0, short delay1, unsigned int timeout);
char drvif_Get_VGIP_Active_Info(unsigned short *v_sta, unsigned short *v_len, unsigned short *line_cnt);
char drvif_Wait_UZUDTG_start(short delay_st, short delay_end);
char drvif_Wait_UZUDTG_END(short delay_st, short delay_end);
char drvif_Get_UZUDTG_Info(unsigned short *v_sta, unsigned short *v_end, unsigned short *line_cnt);
void drvif_Read_DM_HDR_3dLUT(unsigned char *enable, unsigned int *pArray);
void drvif_HDR_YUV2RGB(unsigned char enable, unsigned int *pArray);
void drvif_HDR_RGB2OPT(unsigned char enable, unsigned int *pArray);
void drvif_HDMI_HDR_I3DDMA_RGB2YUV422(unsigned char enable, unsigned short *pArray, unsigned char enable_444_to_422);
void drvif_HDMI_HDR_I3DDMA_RGB2YUV_only_Matrix(unsigned short *pArray);
char drvif_Set_DM_HDR_3dLUT_24x24x24_16(unsigned char enable, unsigned short *pArray);
char drvif_Set_DM_HDR_3dLUT_24x24x24_16_By_DMA(unsigned char enable, unsigned short *pArray, unsigned int addr, unsigned int* vir_addr, unsigned int flush_size);
char drvif_Set_DM_HDR_3dLUT_Dimension(unsigned char dimension);
char drvif_Get_DM_HDR_3dLUT_24x24x24_16(unsigned short *pArray);
void drvif_Set_DM_HDR_CLK(void);

void drvif_color_disable_VIP(void);

unsigned char drvif_color_set_BBC_Enable(unsigned char enable);
void drvif_color_set_BBC_shift_bit( unsigned char shiftBit );

#if CONFIG_FIRMWARE_IN_KERNEL
unsigned char drvif_color_set_HDR10_Enable(unsigned char* enable);
#else
void drvif_HDR10_init(DRV_HDR10_submodule_CTL *pmoduleArray, DRV_HDR10_top_init_CTL *ptopArray);
#endif
#ifdef CONFIG_HDR_SDR_SEAMLESS
unsigned char drvif_color_set_HDR10_Enable_Seamless(unsigned char* enable);
unsigned char drvif_color_set_HDR10_Enable_Seamless_hdmi_position(unsigned char* enable);
unsigned char drvif_color_set_HDR10_Enable_Seamless_hdmi_finish(unsigned char* enable);
#endif
void drvif_HDR_EOTF_OETF(unsigned char Mode);

unsigned char drvif_HDR_get_VO_Decompress_Status(unsigned char ch);

char drvif_M_Plus_Status_Check(void);

char drvif_color_set_PQ_ByPass(unsigned char bypass_item, unsigned char isInterlaceMode);
//char drvif_color_set_PQ_ByPass_Resort(unsigned char Resort_item);
void drvif_color_set_video_fw_irq(void);


char WaitDOLBY_DB_Apply_Clean(void);
char WaitDM_DB_Apply_Clean(void);
//char drvif_color_SET_DM_DB_En(unsigned char en);

void drvif_color_HDR10_DM_setting(void);
void drvif_color_D_3dLUT_Enable(unsigned char LUT_Ctrl);
void drvif_color_get_rgb2yuvtransfer(unsigned char channel, unsigned short *table_index);

void drvif_color_out_gamma_control_front(void);
void drvif_color_out_gamma_control_back(void);
void drvif_color_out_gamma_control_enable(unsigned char enable);
void drvif_color_colorwrite_outGamma(unsigned int *pArray);
void drvif_color_Out_Gamma_Curve_Write(unsigned int *Gamma_Encode, VIP_GAMMA_CHANNEL_RGB RGB_chanel_idx);
void drvif_color_colorRead_outGamma(unsigned int *pArray, VIP_GAMMA_CHANNEL_RGB RGB_chanel_idx);
short drvif_DM2_EOTF_OETF_3DLUT_DMA_Err_Check(void);
void drvif_DM2_EOTF_OETF_3DLUT_DMA_Err_Reset(void);
char drvif_DM2_Wait_for_DMA_Apply_Done(void);
char drvif_DM2_EOTF_Set(unsigned int *EOTF_table32_R, unsigned int *EOTF_table32_G, unsigned int *EOTF_table32_B);
char drvif_DM2_EOTF_Set_By_DMA(unsigned int *EOTF_table32_R, unsigned int *EOTF_table32_G, unsigned int *EOTF_table32_B, unsigned int addr, unsigned int* vir_addr);
void drvif_DM2_EOTF_Get(unsigned int *EOTF_table32_R, unsigned int *EOTF_table32_G, unsigned int *EOTF_table32_B);
void drvif_DM2_EOTF_Enable(unsigned char En, unsigned char sel);
char drvif_DM2_OETF_Set(unsigned short *OETF_table16_R, unsigned short *OETF_table16_G, unsigned short *OETF_table16_B);
void drvif_DM2_OETF_Set_Prog_Index( VIP_HDR_OETF_Prog_Idx_TBL* OETF_prog_idx_tbl );
char drvif_DM2_OETF_Set_Prog_Index_th(unsigned int *OETF_Prog_Idx_th_TBL);
char drvif_DM2_OETF_Set_By_DMA(unsigned short *OETF_table16_R, unsigned short *OETF_table16_G, unsigned short *OETF_table16_B, unsigned int addr, unsigned int* vir_addr);
void drvif_DM2_OETF_Get(unsigned short *OETF_table16_R, unsigned short *OETF_table16_G, unsigned short *OETF_table16_B);
void drvif_DM2_OETF_Enable(unsigned char En, unsigned char sel);
void drvif_DM2_B0203_noSram_Enable(unsigned char En, unsigned char noDB_flag);
void drvif_DM2_OETF_EOTF_Path_Sel(unsigned char sel);

char drvif_Get_DM2_DB_Status(unsigned char *db_en, unsigned char *db_lv, unsigned char *db_apply);
char drvif_Get_DM2_OETF_Enable_Status(unsigned char *oetf_lut_enable, unsigned char *b0105_or_oetf, unsigned char *b02b03_no_sram_mode);
char drvif_Get_DM2_EOTF_Enable_Status(unsigned char *eotf_lut_enable, unsigned char *b0103_or_eotf, unsigned char *b02b03_no_sram_mode);
char drvif_Get_DM2_B05_Enable_Status(unsigned char *b05_En, unsigned char *dimension);
unsigned char drvif_Get_DM2_B05_Dimension_clk_flip_flop(void);
unsigned char drvif_Get_DM2_B0203_noSram_clk_flip_flop(void);

char drvif_DM2_ToneMapping_Set(short *TM_table12_R, short *TM_table12_G, short *TM_table12_B);
char drvif_DM2_ToneMapping_Get(short *TM_table12_R, short *TM_table12_G, short *TM_table12_B);
char drvif_DM2_ToneMapping_Enable(unsigned char En, unsigned char sel);
void drvif_DM2_GAMMA_Enable(unsigned char En);
void drvif_DM2_GAMMA_out_shift_Enable(unsigned char En);

void drvif_DM2_HDR_histogram_Auto_Mode_Init(unsigned char autoMode_en);
unsigned char drvif_DM2_HDR_histogram_IRQ_Status_Get_ISR(void);
void drvif_DM2_HDR_histogram_IRQ_Status_Set_ISR(unsigned char hist_irq_staus);
void drvif_Set_dm_hdr_path_sel_reg_ISR(unsigned int dm_hdr_path_sel_reg);
unsigned int drvif_Get_dm_hdr_path_sel_reg_ISR(void);
unsigned char drvif_DM2_HDR_histogram_Mode_Get_ISR(void);
char drvif_DM2_HDR_histogram_Get_ISR(unsigned int *histogram_table24);

unsigned char drvif_DM2_HDR_histogram_Get(unsigned int *histogram_table24);
void drvif_DM2_HDR_RGB_max_Get(unsigned int *RGB_max);
void drvif_color_MplusSet(unsigned short *pRegisterSet, unsigned short regSize, unsigned char regStep);
void drvif_color_MplusGet(unsigned short *pRegisterSet, unsigned short regSize, unsigned char regStep);
void drvif_color_set_SiW_ModeChange(unsigned char  mode);
void drvif_color_set_Mplus_ModeChange(DRV_Mplus_ModeChange *ptr);
void drvif_color_SetFrameGainLimit(unsigned short nFrameGainLimit);
void drvif_color_GetFrameGainLimit (unsigned short *nFrameGainLimit);
void drvif_color_SetPixelGainLimit(unsigned short nPixelGainLimit);
void drvif_color_GetPixelGainLimit(unsigned short *nPixelGainLimit);

void drvif_DM_HDR_Vtop_set(unsigned char dolbyMode, unsigned char en_422to444_1, unsigned char en_TC_422to444_1);
void drvif_color_set_RGBW_Curcuit(VIP_RGBW_MODE mode);
unsigned char drvif_DM_HDR10_enable_Get(void);
unsigned char drvif_DM_HDR10_porch_check(void);
unsigned int drvif_DM_HDR10_I_V_sta_check(void);
void drvif_color_get_YUV2RGB_nonliner_index(unsigned short *pYidx);

void drvif_color_set_dm_in_sel(unsigned char in_sel, unsigned char inbits_sel);
void drvif_color_set_HDR_RGB_swap(unsigned char swap);

void drvif_color_set_mixer_osd3x3(unsigned int *array);
void drvif_color_set_mixer_osd3x3_Enable(unsigned char Enable);
char drvif_color_Get_main_den_h_v_start_end(unsigned short *H_STA, unsigned short *H_END, unsigned short *V_STA, unsigned short *V_END);
char drvif_color_set_DeMura(DRV_DeMura_DMA_TBL* pDMA_TBL, DRV_DeMura_CTRL_TBL *ptr, unsigned char *pArray, unsigned int addr, unsigned int *vir_addr, unsigned int TBL_Line_size);
char drvif_color_Get_DeMura_CTRL(DRV_DeMura_CTRL_TBL *ptr);
void drvif_color_set_DeMura_En(unsigned char enable);
unsigned char drvif_color_get_DeMura_En(void);

unsigned char drvif_color_VPQ_Disable_init(unsigned char enable);
unsigned char drvif_color_Disable_HDR(unsigned char enable);
unsigned char drvif_color_VPQ_ByPass(unsigned char enable);
unsigned char drvif_color_Disable_MEMC(unsigned char enable);
void drvif_color_Stop_VGIP_isr(unsigned char bStop);
unsigned char drvif_color_set_PIP_overlap_area_color_selection(unsigned char sel);

void drvif_color_set_HDR_sub_en(unsigned char bEnable);
void drvif_color_HDR_sub_set422to444(unsigned char bEnable);
void drvif_color_subHDR_set_Color_Mapping(DRV_Color_Mapping *ptr);
void drvif_color_subHDR_setYUV2RGB(DRV_subHDR_YUV2RGB_CSMatrix *ptr, subHDR_CSMatrix_WriteType WriteMode);
void drvif_color_HDR_Sub_Gamma1_Enable( unsigned char en );
void drvif_color_HDR_Sub_Gamma2_Enable( unsigned char en );
void drvif_color_HDR_Sub_write_Gamma1(unsigned int *pArray , unsigned Channel);
void drvif_color_HDR_Sub_write_Gamma2(unsigned int *pArray , unsigned Channel);
void drvif_color_HDR_Sub_double_buffer_apply(void);

void drvif_color_set_Partten4AutoGamma(unsigned char  Enable, unsigned short  r_Val,unsigned short  g_Val,unsigned short  b_Val);
void drvif_color_set_Color_Mapping_Enable(unsigned char display, unsigned char enable);
void drvif_DM2_HDR_Hist_Position(unsigned char hdr_hist_position);
void drvif_color_set_Partten4AutoGamma_mute(unsigned char mute_flag, unsigned char display_flag,Drvif_SCALER_DISPLAY_DATA* sdp_info);

void drvif_color_set_PanelDitherBit_Table(unsigned char DitherIP,unsigned char  (*pDITHER_TABLE)[16][4]);
void drvif_color_set_Panel_Dither_FunEnable(unsigned char enable);
void drvif_color_set_Panel_Dither_TemEnable(unsigned char enable);
void drvif_color_Setdither_bit(PANELDITHER_BIT default_vip_panel_bit);
void drvif_color_colorwrite_mixer_gamma_position(unsigned char position);
char drvif_color_Set_PIP_for_SHP_mute(unsigned char mute_en);

#ifdef __cplusplus
}
#endif


#endif
/* 100312 Erin*/


