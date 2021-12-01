#ifndef __SCALERCOLOR_LIB_IPQ_H__
#define __SCALERCOLOR_LIB_IPQ_H__

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 * Header include
******************************************************************************/


#include <tvscalercontrol/vip/icm.h>
#include <tvscalercontrol/scaler/source.h>
#include <tvscalercontrol/scaler/vipinclude.h>
#include <tvscalercontrol/vip/color.h>
#include <tvscalercontrol/vip/scalerColor.h>


/*******************************************************************************
 * Structure
 ******************************************************************************/
/*typedef struct*/
/*{*/
/*} MID_example_Param_t;*/

typedef struct _INTERNAL_PARTTEN
{
	unsigned char enable;
	unsigned short r_Val;
	unsigned short g_Val;
	unsigned short b_Val;

}INTERNAL_PARTTEN;

typedef enum{
		PQ_MODE_BYPASS=0,
		PQ_MODE_NORMAL,
		PQ_MODE_xvycc,
		PQ_MODE_HDR,
		PQ_MODE_SDR2HDR,
		PQ_MODE_FOOTBALL,
		PQ_MODE_DOLBY,
		PQ_MODE_FILM,
		PQ_MODE_DCIP3,
		PQ_MODE_ENHANCE_WIDE,
		PQ_MODE_HDR_ENHANCE_WIDE,
		PQ_MODE_SHOP_DEMO,
		PQ_MODE_MAX = 0xff,
}RTK_VPQ_MODE_TYPE_TV030;

typedef struct _BRIGHTNESS_LUT_OETF {
	unsigned short	   un16_length;
	unsigned short	   pf_LUT[256];
}BRIGHTNESS_LUT_OETF;

typedef struct
{
	 short	 BT709Target[3][3];
	 short	 BT2020Target[3][3];
	 short	 DCIP3Target[3][3];
	 short	 ADOBERGBTarget[3][3];	 
}RTK_VPQ_sRGB_Matrix;

typedef struct _RTK_TableSize_Gamma {
	unsigned short nTableSize;
	unsigned short pu16Gamma_r[256];
	unsigned short pu16Gamma_g[256];
	unsigned short pu16Gamma_b[256];
} RTK_TableSize_Gamma;

typedef struct _GammaCurve {
   // unsigned short  length;
    unsigned int  tGammaTable[512*4];
} GammaCurve;
typedef struct {
    UINT32 version;//Version = 0 wild card(default data
    UINT32 length;//pData Length
    UINT8  wId;//0 : main
    UINT32* pData;
} HAL_VPQ_DATA_T_TV030;

typedef enum _HOST_VIP_SOURCE_TIMING {
	VBY1_VIP_QUALITY_CVBS_NTSC = 0,
	VBY1_VIP_QUALITY_CVBS_PAL,
	VBY1_VIP_QUALITY_CVBS_S_NTSC,
	VBY1_VIP_QUALITY_CVBS_S_PAL,
	VBY1_VIP_QUALITY_TV_NTSC ,
	VBY1_VIP_QUALITY_TV_PAL,
	VBY1_VIP_QUALITY_YPbPr_480I,
	VBY1_VIP_QUALITY_YPbPr_576I,
	VBY1_VIP_QUALITY_YPbPr_480P,
	VBY1_VIP_QUALITY_YPbPr_576P,
	VBY1_VIP_QUALITY_YPbPr_720P,
	VBY1_VIP_QUALITY_YPbPr_1080I,
	VBY1_VIP_QUALITY_YPbPr_1080P,
	VBY1_VIP_QUALITY_HDMI_480I,
	VBY1_VIP_QUALITY_HDMI_576I,
	VBY1_VIP_QUALITY_HDMI_480P,
	VBY1_VIP_QUALITY_HDMI_576P,
	VBY1_VIP_QUALITY_HDMI_720P,
	VBY1_VIP_QUALITY_HDMI_1080I,
	VBY1_VIP_QUALITY_HDMI_1080P,
	VBY1_VIP_QUALITY_HDMI_4k2kI_30,
	VBY1_VIP_QUALITY_HDMI_4k2kP_30,
	VBY1_VIP_QUALITY_HDMI_4k2kP_60,
	VBY1_VIP_QUALITY_VGA,

	VBY1_VIP_QUALITY_DTV_480I,
	VBY1_VIP_QUALITY_DTV_576I,
	VBY1_VIP_QUALITY_DTV_480P,
	VBY1_VIP_QUALITY_DTV_576P,
	VBY1_VIP_QUALITY_DTV_720P,
	VBY1_VIP_QUALITY_DTV_1080I,
	VBY1_VIP_QUALITY_DTV_1080P,
	VBY1_VIP_QUALITY_DTV_4k2kI_30,
	VBY1_VIP_QUALITY_DTV_4k2kP_30,
	VBY1_VIP_QUALITY_DTV_4k2kP_60,
	VBY1_VIP_QUALITY_PVR_480I,
	VBY1_VIP_QUALITY_PVR_576I,
	VBY1_VIP_QUALITY_PVR_480P,
	VBY1_VIP_QUALITY_PVR_576P,
	VBY1_VIP_QUALITY_PVR_720P,
	VBY1_VIP_QUALITY_PVR_1080I,
	VBY1_VIP_QUALITY_PVR_1080P,
	VBY1_VIP_QUALITY_PVR_4k2kI_30,
	VBY1_VIP_QUALITY_PVR_4k2kP_30,
	VBY1_VIP_QUALITY_PVR_4k2kP_60,

	VBY1_VIP_QUALITY_DTV_JPEG, /* Erin '100920 , add DTV_JPEG source*/

	VBY1_VIP_QUALITY_CVBS_SECAN,
	VBY1_VIP_QUALITY_CVBS_S_SECAN,
	VBY1_VIP_QUALITY_TV_SECAN,

	VBY1_VIP_QUALITY_SCART_NTSC,
	VBY1_VIP_QUALITY_SCART_PAL,
	VBY1_VIP_QUALITY_SCART_SECAN,

	VBY1_VIP_QUALITY_SCART_RGB_NTSC,
	VBY1_VIP_QUALITY_SCART_RGB_PAL,
	VBY1_VIP_QUALITY_SCART_RGB_SECAN,

	VBY1_VIP_QUALITY_CVBS_PAL_M,
	VBY1_VIP_QUALITY_CVBS_S_PAL_M,
	VBY1_VIP_QUALITY_TV_PAL_M,

	VBY1_VIP_QUALITY_TV_NTSC443, /*young timing433*/
	VBY1_VIP_QUALITY_HDR_HDMI_1080p,
	VBY1_VIP_QUALITY_HDR_HDMI_4k2kP_30,
	VBY1_VIP_QUALITY_HDR_HDMI_4k2kP_60,
	VBY1_VIP_QUALITY_HDR_DTV_1080p,
	VBY1_VIP_QUALITY_HDR_DTV_4k2kP_30,
	VBY1_VIP_QUALITY_HDR_DTV_4k2kP_60,
	VBY1_VIP_QUALITY_HDR_PVR_1080p,
	VBY1_VIP_QUALITY_HDR_PVR_4k2kP_30,
	VBY1_VIP_QUALITY_HDR_PVR_4k2kP_60,

	VBY1_VIP_QUALITY_DolbyHDR_HDMI_1080P,
	VBY1_VIP_QUALITY_DolbyHDR_HDMI_4k2kP,
	VBY1_VIP_QUALITY_DolbyHDR_DTV_1080P,
	VBY1_VIP_QUALITY_DolbyHDR_DTV_4k2kP,
	VBY1_VIP_QUALITY_DolbyHDR_PVR_1080P,
	VBY1_VIP_QUALITY_DolbyHDR_PVR_4k2kP,

	VBY1_VIP_QUALITY_CVBS_NTSC443,
	VBY1_VIP_QUALITY_CVBS_PAL60,
	VBY1_VIP_QUALITY_CVBS_PALN,
	VBY1_VIP_QUALITY_CVBS_NTSC50,

	VBY1_VIP_QUALITY_TV_PAL60,
	VBY1_VIP_QUALITY_TV_NTSC50,
	VBY1_VIP_QUALITY_TV_PALN,

	VBY1_VIP_QUALITY_ST2094_HDMI_1080p,
	VBY1_VIP_QUALITY_ST2094_HDMI_4k2kP_30,
	VBY1_VIP_QUALITY_ST2094_HDMI_4k2kP_60,
	VBY1_VIP_QUALITY_ST2094_DTV_1080p,
	VBY1_VIP_QUALITY_ST2094_DTV_4k2kP_30,
	VBY1_VIP_QUALITY_ST2094_DTV_4k2kP_60,
	VBY1_VIP_QUALITY_ST2094_PVR_1080p,
	VBY1_VIP_QUALITY_ST2094_PVR_4k2kP_30,
	VBY1_VIP_QUALITY_ST2094_PVR_4k2kP_60,
} HOST_VIP_SOURCE_TIMING;

typedef struct _UI_color{
	unsigned int osd_contrast; 	
	unsigned int osd_brightness;
	unsigned int osd_saturation;
	unsigned int osd_colortempcontrast_r;
	unsigned int osd_colortempcontrast_g;
	unsigned int osd_colortempcontrast_b;
}UI_color;

/*==================== Definitions ================= */
void Scaler_Set_Partten4AutoGamma(unsigned char  Enable, unsigned short  r_Val,unsigned short  g_Val,unsigned short  b_Val);
void Scaler_Set_PictureMode_PQsetting(RTK_VPQ_MODE_TYPE_TV030 mode);

UINT8 fwif_color_get_DM2_HDR_histogram_MaxRGB(UINT32* HDR_info);
UINT8 fwif_color_get_DM2_HDR_histogram_TV030(UINT32* HDR_info);
unsigned char fwif_color_get_HDR_YUV2RGB_SDR_MAX_RGB_by_HFC_TV043(unsigned char color_format);
void Scaler_SetBrightness_LUT_OETF(unsigned short *Out_T , BRIGHTNESS_LUT_OETF *pData);
void Scaler_SetOETF2Gamma(BRIGHTNESS_LUT_OETF *pData);
void Scaler_SetIPQ_EN(unsigned char value);
unsigned char Scaler_GetIPQ_EN(void);
void Scaler_SetIPQCurve_EN(unsigned char value);
unsigned char Scaler_GetIPQCurve_EN(void);
unsigned char fwif_color_get_colorspacergb2yuvtransfer_table_SDR_MAX_RGB_TV043(unsigned char channel, unsigned char nSrcType, unsigned char nSD_HD, bool bUse_HDMI_Range_Detect);
unsigned char fwif_color_get_I3DDMA_colorspacergb2yuvtransfer_table_SDR_MAX_RGB_TV043(unsigned char channel, unsigned char nSrcType, unsigned char nSD_HD, bool bUse_HDMI_Range_Detect);
unsigned char fwif_color_get_colorspacergb2yuvtransfer_table_TV043(unsigned char channel, unsigned char nSrcType, unsigned char nSD_HD, bool bUse_HDMI_Range_Detect);

void fwif_color_set_OutputGamma_System(void);
void fwif_color_gamma_encode_TableSize_2(RTK_TableSize_Gamma *pData);
unsigned char fwif_color_get_Decide_YUV2RGB_TBL_Index_nogain(unsigned char src_idx, unsigned char display, unsigned char Input_Data_Mode);
void Scaler_SetGammaCurveMode(unsigned char value);
unsigned char Scaler_GetGammaCurveMode(void);
void Scaler_Setdata_Extend(UINT16 *Out_R, UINT16 *Out_G, UINT16 *Out_B);
void fwif_set_gamma_multiply_remap_Tcon(UINT16 *final_R, UINT16 *final_G, UINT16 *final_B, UINT16 *Out_R, UINT16 *Out_G, UINT16 *Out_B);
void fwif_set_gamma_System(void);

#ifdef __cplusplus
}
#endif

#endif /* __SCALER_LIB_H__*/

