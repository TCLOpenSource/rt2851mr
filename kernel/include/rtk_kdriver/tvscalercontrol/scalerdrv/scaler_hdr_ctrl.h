#ifndef _SCALER_HDR_CTRL_H
#define _SCALER_HDR_CTRL_H

#include <linux/types.h>
#include <rtd_types.h>

#define DV_CRC_ERR_THRESH	30
#define DV_CRC_RDY_THRESH	6

typedef enum _SCALER_HDR_DOLBY_VISION_HDMI_MODE{
	SLR_DV_HDMI_DETECT_OFF			= 0,
	SLR_DV_HDMI_DETECT_ON			= 1,
	SLR_DV_HDMI_DETECT_FOUND_CRC	= 2,
	SLR_DV_HDMI_DOLBY_MODE_ENABLED	= 3
}SCALER_HDR_DOLBY_VISION_HDMI_MODE;

typedef enum _SCALER_HDR10_HDMI_MODE{
	SLR_HDR10_HDMI_DETECT_OFF			= 0,
	SLR_HDR10_HDMI_DETECT_ON			= 1,
	SLR_HDR10_HDMI_DETECT_FOUND_MD		= 2,
	SLR_HDR10_HDMI_HDR_OPEN				= 3,
	SLR_HDR10_HDMI_HDR_MODE_ENABLED	= 4
}SCALER_HDR10_HDMI_MODE;


typedef enum _SCALER_HDMI_DM_STATUS{
	SLR_HDMI_DM_CLOSE	=0,
	SLR_HDMI_DM_OPEN	=1,
	SLR_HDMI_DM_CONNECT	=2
}SCALER_HDMI_DM_STATUS;

#if defined(CONFIG_ENABLE_HDR10_HDMI_AUTO_DETECT)|| defined(CONFIG_ENABLE_DOLBY_VISION_HDMI_AUTO_DETECT)
// Dolby Vision HDR
int Scaler_HDR_DolbyVision_Hdmi_SetDetectEnable(unsigned char detectEn, unsigned char dispEn);
int Scaler_HDR_DolbyVision_Hdmi_Get_Detect_Info(unsigned int *result);
int Scaler_HDR_DolbyVision_Hdmi_SetDisplaytEnable(unsigned char dispEn);


#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerDrvCommon.h>
#else
	#include <scalercommon/scalerDrvCommon.h>
#endif

#define MERLIN5_MDOMAIN 0
#define MERLIN5_MEMC 1
#define H5X_MDOMAIN 2
#define FREEZE_MUTE_IMPLEMENT_STATE MERLIN5_MDOMAIN

typedef enum _DOLBY_HDMI_MODE {
     DOLBY_HDMI_OFF		= 0x0,
     DOLBY_HDMI_IDMA_INIT	= 0x1,
     DOLBY_HDMI_CAPTURE	= 0x2,
     DOLBY_HDMI_VO_RUN		= 0x3
} DOLBY_HDMI_MODE;

typedef enum _HDR_DISP_MODE {
    HDR_DISP_DISABLE	= 0x0,
    HDR_DISP_SHOW_HDR	= 0x1,
    HDR_DISP_AUTO_HDR	= 0x2
} HDR_DISP_MODE;

#if FREEZE_MUTE_IMPLEMENT_STATE == H5X_MDOMAIN && defined(CONFIG_RTK_8KCODEC_INTERFACE)
typedef enum _DOLBY_CRC_STATE {
    NO_CRC_REQUEST	= 0x0,
    CRC_FREEZE		= 0x1,
    CRC_MUTE		= 0x2,
    CRC_UNFREEZE	= 0x4,
    CRC_UNMUTE		= 0x8
} DOLBY_CRC_STATE;
#endif

typedef struct _HDR_STATE{
	HDR_MODE hdrDolbyMode;
	DOLBY_HDMI_MODE hdrHdmiMode;
	HDR_DISP_MODE hdrDispMode;
}HDR_STATE;

// [Little Endian] define for little endian platform (ARM)
typedef union
{
    RBus_UInt8 regValue;
    struct{
    RBus_UInt8 no_md:1;
    RBus_UInt8 metadata_version:3;
    RBus_UInt8 metadata_type:2;
	RBus_UInt8 packet_type:2;
    };
}DOLBYVISION_HDR_BYTE0;

// [Little Endian] define for little endian platform (ARM)
typedef union
{
    RBus_UInt8 regValue;
    struct{
    RBus_UInt8 current_metadata_id:4;
	RBus_UInt8 affected_metadata_id:4;
    };
}DOLBYVISION_HDR_BYTE1;

// [Little Endian] define for little endian platform (ARM)
typedef union
{
    RBus_UInt8 regValue;
    struct{
    RBus_UInt8 EOS:1;
	RBus_UInt8 reserved_Byte2:7;
    };
}DOLBYVISION_HDR_BYTE2;

typedef struct _HDR_DOLBY_VISION_METADATA_PACKET{
	DOLBYVISION_HDR_BYTE0 hdrByte0;
	DOLBYVISION_HDR_BYTE1 hdrByte1;
	DOLBYVISION_HDR_BYTE2 hdrByte2;
	unsigned char body_byte[121];
	unsigned int CRC32;
}HDR_DOLBY_VISION_METADATA_PACKET;


typedef struct HDR_SZIE{
	unsigned int	nWidth;
	unsigned int	nLength;
} HDR_SZIE;

typedef struct
{
    HDR_SZIE inSize;
    HDR_SZIE capSize;
} HDR_IDMA_HANDLER ;

void hdr_idma_color_colorspacergb2yuvtransfer(void);
void drvif_hdr_idma_ultrazoom_config_scaling_down(HDR_SZIE* in_Size, HDR_SZIE* out_Size, unsigned char panorama);
void drvif_hdr_idma_capture_config(HDR_SZIE capSize);
void drvif_hdr_idma_enable(unsigned char enable);
void HDR_DolbyVision_HDMI_handler(void);
HDR_MODE HDR_DolbyVision_Get_CurDolbyMode(void);
DOLBY_HDMI_MODE HDR_DolbyVision_Get_CurHdmiMode(void);
HDR_DISP_MODE HDR_DolbyVision_Get_CurHdrDispMode(void);
//int HDR_DOLBY_VISION_HDMI_Set_Detect_Enable(VIDEO_RPC_DOLBY_VISION_HDMI_SET_DETECT_ENABLE *detectInfo);
//int HDR_DOLBY_VISION_HDMI_Get_Detect_Info(VIDEO_RPC_DOLBY_VISION_HDMI_GET_DETECT_INFO *detectInfo);
//int HDR_DOLBY_VISION_HDMI_Set_Display_Enable(VIDEO_RPC_DOLBY_VISION_HDMI_SET_DISPLAY_ENABLE *detectInfo);
unsigned int HDR_DOLBY_VISION_HDMI_Get_Write_Index(void);
unsigned int HDR_DOLBY_VISION_HDMI_Get_Read_Index(void);
int HDR_DOLBY_VISION_HDMI_Send_Write_Index_RPC(void);
int HDR_DOLBY_VISION_Set_DM_Disable(void);
void HDR_DolbyVision_Set_CurHdmiMode(DOLBY_HDMI_MODE hdmiMode);
void HDR_DolbyVision_Set_CurHdrDispMode(HDR_DISP_MODE dispMode);

void drvif_hdr_idma_color_colorspacergb2yuvtransfer(void);
void drvif_hdr_idma_ultrazoom_config_scaling_down(HDR_SZIE* in_Size, HDR_SZIE* out_Size, unsigned char panorama);

#endif

void Scaler_HDR_DolbyVision_Hdmi_Set_Detect_Result(unsigned char result);
unsigned char Scaler_HDR_DolbyVision_Hdmi_Get_Detect_Result(void);
SCALER_HDR_DOLBY_VISION_HDMI_MODE Scaler_HDR_DolbyVision_Hdmi_Get_Detect_Status(void);
void Scaler_HDR_DolbyVision_Hdmi_Set_Detect_Status(SCALER_HDR_DOLBY_VISION_HDMI_MODE detectStatus);

//20171228, pinyen modify for Dolby HDMI to avoid pink gabage when the begining from SDR to DolbyHDR
unsigned char HDR_DolbyVision_HDMI_check_mode(void);

// HDR10
SCALER_HDR10_HDMI_MODE Scaler_HDR10_Hdmi_Get_Detect_Status(void);
void Scaler_HDR10_Hdmi_Set_Detect_Status(SCALER_HDR10_HDMI_MODE detectStatus);

unsigned int Scaler_HDR10_Hdmi_Get_Input_ACT_WID_info(void);
void Scaler_HDR10_Hdmi_Set_Input_ACT_WID_info(unsigned int ACT_WID);
#ifdef CONFIG_HDR_SDR_SEAMLESS
void initial_i3ddma_reg_Semaphore(void);
void i3ddma_cap1_interrupt_ctrl(unsigned char enable);
#endif

SCALER_HDMI_DM_STATUS Scaler_Hdmi_DM_Get_Status(void);
void Scaler_Hdmi_DM_Set_Status(SCALER_HDMI_DM_STATUS status);
void reset_dolby_md_crc_error_cnt(void);

#if FREEZE_MUTE_IMPLEMENT_STATE == H5X_MDOMAIN && defined(CONFIG_RTK_8KCODEC_INTERFACE)
void resetH5XFreezeMuteStatus(void);
#endif


//20180222 , fix [ML3RTANDN-1194]
typedef enum _DOLBY_HDMI_HDR_CRC_STATUS{
    hdmi_crc_status_init = 0X0,
	hdmi_crc_status_freeze = 0X1,
	hdmi_crc_status_unfreeze = 0X2	
}DOLBY_HDMI_HDR_CRC_STATUS;

#endif
