/***************************************************************************
                          scalerDrv.c  -  description
                             -------------------
    begin                : Mon Dec 12 2008
    copyright            : (C) 2008 by Joshlin
    email                : joshlin@realtek.com
 ***************************************************************************/

#ifndef _COMMON_SCALERDRV_H__
#define _COMMON_SCALERDRV_H__
#include <VideoRPC_System.h>




#ifdef CONFIG_KDRIVER_USE_NEW_COMMON

#include <scaler/scalerCommon.h>
#ifdef CONFIG_RTK_KDRIVER_SUPPORT
#include <mach/rtk_platform.h>
#endif

#define SPEEDUP_NEW_SCALER_FLOW//For new scaler flow for non atv condtion
#ifdef SPEEDUP_NEW_SCALER_FLOW
#define SPEEDUP_NEW_SCALER_FLOW_FOR_ATV//For new scaler flow for atv condition
#endif
#define NEW_SCALER_FLOW_FOR_HDR10//For HDR10 new scaler flow

#endif

#define NEW_INPUT_OUTPUT_BUFFER_FLOW_CONFIG
#ifdef NEW_INPUT_OUTPUT_BUFFER_FLOW_CONFIG
#define NEW_INPUT_OUTPUT_BUFFER_FLOW_SUPPORT_SUB
#endif
#define INPUT_OUTPUT_SHAREMEM_RING_BUFFER_SIZE 10

//#define ENABLE_IMD_PST_SMOOTHTOGGLE  // enable imd pst smoothtoggle
#define PST_CMD_NUMBER 4 //hw setting + 1

#define CONFIG_DATA_FRAMESYNC_FORCE_422_CAP

#define CONFIG_ENABLE_HDMI_NN 1
#define NN_CAP_BUFFER_NUM 3     //i3ddma capture buffer num
#define TOTAL_NN_CAP_BUFFER_NUM (NN_CAP_BUFFER_NUM * 2)


enum
{
	SCALERIOC_INIT = 0,
	SCALERIOC_DEINIT,
	SCALERIOC_ALLOBUFFER,
	SCALERIOC_FREEBUFFER,
	SCALERIOC_GETCOLORHISTOGRAM,
	SCALERIOC_GETCOLORHISTOGRAM_SUB,


SCALERIOC_SETADAPTIVE3D,
SCALERIOC_GETYCSEP,
SCALERIOC_SETYCSEP,
SCALERIOC_CLRMOTIONCNT,
SCALERIOC_SETDISPINFO,
SCALERIOC_SETSRCINFO,
SCALERIOC_SETTVSCANMODE,
SCALERIOC_GETFH1DFLAG,
SCALERIOC_GETPRINT3DFLAG,
SCALERIOC_SETPRINT3DFLAG,
// oliver-
//#if NEW_VOINFO_INTERFACE
SCALERIOC_SETVOINFOADDR,
SCALERIOC_GETVOINFO,
SCALERIOC_NEWVOINFO,
SCALERIOC_REQUESTVOINFO,
SCALERIOC_SENDASPECTRATIO,
SCALERIOC_GET3DDETECTINFO,

SCALERIOC_SENDRATIOSMOOTHTOGGLEINFO,
SCALERIOC_SENDSMOOTHTOGGLESTATE,
SCALERIOC_SENDSCALERDATAMODE,
SCALERIOC_SENDSMOOTHTOGGLEUPDATEFLAG,
SCALERIOC_SENDVGIPRATIO,
SCALERIOC_SENDPANELPARAMTERINFO,
SCALERIOC_GETSMOOTHTOGGLEUPDATEFLAG,
SCALERIOC_SENDSCALERMEMORYINFO,

// oliver-
//#else
SCALERIOC_GETMVDINFO,
SCALERIOC_SETMVDINFO,
// oliver-
//#endif
SCALERIOC_SETHISTFLAG,
SCALERIOC_GETHISTFLAG,
SCALERIOC_SETRTNR_Y,
SCALERIOC_SETRTNR_C,
SCALERIOC_UPDATERTNR_Y,
SCALERIOC_UPDATERTNR_C,
SCALERIOC_CLEARMPEGNRDATA,
SCALERIOC_GET3DTABLEINDEX,
SCALERIOC_SET3DTABLEINDEX,
SCALERIOC_SETAUTOMAFLAG,
SCALERIOC_GETAUTOMAFLAG,
//#ifdef CONFIG_VBI_CC
SCALERIOC_VBICCPLAY,
SCALERIOC_VBICCSTOP,
SCALERIOC_VBICCSETBUF,
SCALERIOC_VBITTXSETBUF,
SCALERIOC_VBI_GETWSS,
//#endif // #ifdef CONFIG_VBI_CC
SCALERIOC_SET_MPEGNR,
SCALERIOC_GET_MPEGNR,
SCALERIOC_GETAUTONR,
SCALERIOC_SETAUTONR,
SCALERIOC_GETAUTONR_by_Low_Mid_High,
SCALERIOC_SETAUTONR_by_Low_Mid_High,
SCALERIOC_GETAUTONR_Low_Mid_High,
SCALERIOC_SETAUTONR_Low_Mid_High,
SCALERIOC_SETDNR,
SCALERIOC_UPDATEDNR,
SCALERIOC_SETBRIGHTNESS,
SCALERIOC_SETCONTRAST,
SCALERIOC_SET_TABLENRSPATIAL,
SCALERIOC_GET_TABLENRSPATIAL,
SCALERIOC_SET_PICTURE_MODE,
SCALERIOC_SET_RGB2YUV_GAIN,
SCALERIOC_SET_RGB2YUV_OFFSET,
SCALERIOC_CORINGLV,
SCALERIOC_SEND_DISP_READY_IRC,
// Erin add for AT engineer mode 100414
SCALERIOC_VIP_TABLE_STRUCT,

SCALERIOC_SET_CORRECTIONBIT1_DUTY_DEBUG,
SCALERIOC_SETAUTOMA_VD_3D,
SCALERIOC_GETAUTOMA_VD_3D,

SCALERIOC_GETVONOSIGNALFLAG,

// Erin 100624
SCALERIOC_SETAUTOMADBFLAG,
SCALERIOC_GETAUTOMADBFLAG,
SCALERIOC_MAIN_TOTAL_PIXEL_INV,

//===============planck add for TV AutoNR==============
SCALERIOC_GET_TABLENRTEMPORAL,
SCALERIOC_GET_TABLE_RTNR_Y,
SCALERIOC_GET_TABLE_RTNR_C,

SCALERIOC_GET_TABLE_UnShpMask,
SCALERIOC_GET_TABLE_SCALEPK,
SCALERIOC_GET_TABLE_SHP1D2D_EGSM,
SCALERIOC_SENDVFLIP,
SCALERIOC_SETVOINFO,
//==============================================
SCALERIOC_SET_MMAP_MODE,
SCALERIOC_FREE_MMAP_ALLOBUF,
SCALERIOC_GETBUFFER,
SCALERIOC_VBITT_DUMP_DMA,
SCALERIOC_VBITT_FUNCTION,

SCALERIOC_GET_TABLE_SNR_Y,
SCALERIOC_GET_TABLE_SNR_C,
//SCALERIOC_SET_TABLE_TV_AutoNR_Signal_Status,

SCALERIOC_VO_ROTATE_ENABLE,
SCALERIOC_VIDEO_DELAY_ENABLE,
SCALERIOC_VIDEO_FILMMODE_ENABLE,

SCALERIOC_VBI_ENABLE,
SCALERIOC_VO_SE_SCALING_ENABLE,

//===============================================
SCALERIOC_SET_DNR_LEVEL_TABLE,
SCALERIOC_SENDZOOM,
SCALERIOC_SENDPOSFINETUNE,
SCALERIOC_SET_DOUBLEBUF,
SCALERIOC_SETKBFLAG,
SCALERIOC_SETKBINFO,

SCALERIOC_SETDISP3DINFO,

SCALERIOC_PIN_BL_ADJ,
SCALERIOC_PIN_BL_ON_OFF,
SCALERIOC_BACKLIGHT_ON,
SCALERIOC_IS_INCREASE_MODE,
SCALERIOC_DCR_MAX_VALUE,
SCALERIOC_DCR_TABLE,
SCALERIOC_DCR_ON_OFF,
SCALERIOC_BL_LV_FROM_USER,
SCALERIOC_BL_LV_ACT_MAX,
SCALERIOC_BL_LV_ACT_MIN,
SCALERIOC_INIT3DFMTDETECT,
SCALERIOC_GET3DDETECTFMT,
SCALERIOC_SET_MPEGNR_H,
SCALERIOC_SET_MPEGNR_V,
SCALERIOC_SET_TABLE_NTSC_3D,
SCALERIOC_SET_TABLE_PAL_3D,

SCALERIOC_SET_TV_SCAN_STATUS,

SCALERIOC_GET_TABLEDCTI,
//SCALERIOC_GET_INTRA_RANGE,

SCALERIOC_SET_2D3D_CVT_MODE,
SCALERIOC_SET_2D3D_HORI_DEC_MODE,
SCALERIOC_SET_3D_PR_ENTER_3DDMA,

SCALERIOC_GETTVCHECK3DFLAG,
SCALERIOC_SETTVCHECK3DFLAG,


SCALERIOC_GET_ICM_Global_Sat,
SCALERIOC_GET_Scaler_FIR_H,
SCALERIOC_GET_Scaler_FIR_V,

SCALERIOC_SET_PANEL_INFO,

SCALERIOC_GET_Peaking_POS_RANGE_MAX,
SCALERIOC_GET_Peaking_NEG_RANGE_MAX,
SCALERIOC_GET_Peaking_Coring,
SCALERIOC_GET_Peaking_Level,


SCALERIOC_SET_TVAUTONR_Mode,
SCALERIOC_GET_TVAUTONR_Mode,

SCALERIOC_SET_NRAVGCOUNT,
SCALERIOC_GET_NRAVGCOUNT,
SCALERIOC_GETDNR_log,
SCALERIOC_SETDNR_log,
SCALERIOC_GETRTNR_log,
SCALERIOC_SETRTNR_log,
SCALERIOC_GETSNR_log,
SCALERIOC_SETSNR_log,
SCALERIOC_GETINR_log,
SCALERIOC_SETINR_log,

SCALERIOC_GET_TABLE_HMCNR,
SCALERIOC_GET_TABLE_VerticalNR,

//SCALERIOC_GETDNRTABLE,		// move to system info and replace by PQA table, elieli
//SCALERIOC_SETDNRTABLE,		// move to system info and replace by PQA table, elieli

SCALERIOC_UPDATE_ACTIVE_BACKLIGHT_TABLE,
SCALERIOC_SET_COEFF_BY_Y,
SCALERIOC_SET_NR_TABLE32,
SCALERIOC_SET_NR_TABLE8,
 //SCALERIOC_SET_PQA_TABLE_OFFSET_TEMP,     // move to share memory access struct, elieli
SCALERIOC_SET_TSB_style_ON,		//20120426 roger
SCALERIOC_GET_NR_style,
SCALERIOC_SET_NR_style,		//rock :: NR style

SCALERIOC_SET_OPEN_CELL_PANEL_OD_ON,
SCALERIOC_SET_YC2D3D,
SCALERIOC_Set_New_DCCmode,

SCALERIOC_VIP_ICM_TABLE,

SCALERIOC_Set_Dcr_Panasonic,


SCALERIOC_GET_DEBUG_AUTO_NR,
SCALERIOC_SET_DEBUG_AUTO_NR,

SCALERIOC_GET_DEBUG_VD_NOISE,
SCALERIOC_SET_DEBUG_VD_NOISE,
SCALERIOC_GET_DEBUG_RTNR_MAD,
SCALERIOC_SET_DEBUG_RTNR_MAD,
SCALERIOC_GET_DEBUG_HISTOGRAM_MEAN,
SCALERIOC_SET_DEBUG_HISTOGRAM_MEAN,

SCALERIOC_SET_MDOM_VI_WH,//bit 31:16 wiwth, bit15:0 height

//20130706 added by Diane for Dynamic Peaking Display
SCALERIOC_SET_Mem_Edge_AutoPk_data,//yuan::add Edge_peaking
SCALERIOC_GET_RTNR_MAD_count_Y_sum_avg,
SCALERIOC_GET_DCC_Histogram_Mean_value,

//20130820 Elsie: add for RTNR K force
SCALERIOC_SET_RTNR_K_FORCE,
SCALERIOC_SET_SRGB_HUE_SAT,

//SCALERIOC_SET_DisplayInformation_table,

//======TPV ambiligh sensor=======
SCALERIOC_Set_Profile_RGB_Data_Flag_V,
SCALERIOC_Get_Profile_RGB_Data_Flag_V,
SCALERIOC_Get_Profile_R_Data_V,
SCALERIOC_Get_Profile_G_Data_V,
SCALERIOC_Get_Profile_B_Data_V,
SCALERIOC_Set_Profile_RGB_Data_Flag_H,
SCALERIOC_Get_Profile_RGB_Data_Flag_H,
SCALERIOC_Get_Profile_R_Data_H,
SCALERIOC_Get_Profile_G_Data_H,
SCALERIOC_Get_Profile_B_Data_H,
//===================================
//======= TPV new DCR=========
SCALERIOC_SET_DCR_DEFAULT,
//=================================

SCALERIOC_SET_VIP_QUALITY_INIT,
SCALERIOC_SET_VIP_PICMODE_INIT,

SCALERIOC_GET_Scaler_FIR_H_8TAP,
SCALERIOC_GET_Scaler_FIR_V_6TAP,

SCALERIOC_VIP_TV003_share_memory_table,

SCALERIOC_VIP_system_info_structure,//VIP for video fw system fw info, CSFC
SCALERIOC_VIP_SMARTPIC_CLUS, // VIP for SMARTPIC_CLUS

SCALERIOC_VIP_TABLE_CUSTOM_STRUCT,
SCALERIOC_SENDZOOMINFO,//rika 20140627 added for fpp tcl zoom api
SCALERIOC_GETZOOMSTATE,//rika 20140714 added for fpp tcl zoom api
//#ifdef ENABLE_SE_ROTATE_M_DOMAIN_BLOCK_MODE
SCALERIOC_SEND_ROTATE_INFO_VI_BLOCK_READ,
//#endif
SCALERIOC_GET_V_UZD_BUFFER_MODE,//rika 20141021 added for uzd buffer_mode
SCALERIOC_VBIVPSSETBUF,
SCALERIOC_VBICGMSENABLE,
SCALERIOC_GAMMA_ENABLE_PATCH,
SCALERIOC_SETSMOOTHENABLE,//rika 20150109 added
SCALERIOC_SET_MDOMAIN_COMPRESSION_ENABLE,
SCALERIOC_SET_DC2H_SWMODE_ENABLE,
SCALERIOC_SET_VT_SE_CAPTURE_ENABLE,

SCALERIOC_SET_VODMADI_FREEZE_ENABLE,
//#ifdef RUN_MERLIN_MEMC_ENABLE
//======MEMC RPC======
SCALERIOC_MEMC_INITIALIZATION,
SCALERIOC_MEMC_SETMOTIONCOMP,
SCALERIOC_MEMC_SETBLURLEVEL,
SCALERIOC_MEMC_SETJUDDERLEVEL,
SCALERIOC_MEMC_MOTIONCOMPONOFF,
SCALERIOC_MEMC_LOWDELAYMODE,
SCALERIOC_MEMC_SETRGBYUVMode,
SCALERIOC_MEMC_GETFRAMEDELAY,
SCALERIOC_MEMC_SETVIDEOBLOCK,
SCALERIOC_MEMC_SETTRUEMOTIONDEMO,
SCALERIOC_MEMC_GETFIRMWAREVERSION,
SCALERIOC_MEMC_SETBYPASSREGION,
SCALERIOC_MEMC_SETREVERSECONTROL,
SCALERIOC_MEMC_FREEZE,
SCALERIOC_MEMC_SETDEMOBAR,
SCALERIOC_MEMC_SETINOUTUSECASE,
SCALERIOC_MEMC_SETINPUTOUTPUTFORMAT,
SCALERIOC_MEMC_SETINPUTOUTPUTRESOLUTION,
//SCALERIOC_MEMC_SETINPUTFRAMERATE,
//SCALERIOC_MEMC_SETOUTPUTFRAMERATE,
SCALERIOC_MEMC_SETINOUTPUTFRAMERATE,
SCALERIOC_MEMC_SETMEMCFRAMEREPEATENABLE,
SCALERIOC_MEMC_SETMEMCINOUTMODE,
SCALERIOC_MEMC_SETCINEMAMODE,
SCALERIOC_MEMC_INSTANBOOT_INITPHASETABLE,
//===== HDR DolbuVision ===
SCALERIOC_GET_HDMI_HDR_FRAMEINFO,
SCALERIOC_GET_OTT_HDR_FRAMEINFO,
//=====END HDR DolbuVision  RPC====
SCALERIOC_SEND_VO_OVERSCAN_INFO,
//#endif
SCALERIOC_SET_RGB2YUV_TRIGGER,
SCALERIOC_SENDZORDER,
SCALERIOC_SMOOTHTOGGLE_SHARE_INFO,
SCALERIOC_SET_GAMMA,
/* === checksum ========== */
SCALERIOC_VIP_TABLE_CRC_STRUCT,
/*==========================*/
SCALERIOC_VIP_FW_FILM,
SCALERIOC_ADAPTIVE_STREAM_FLAG,
SCALERIOC_VIP_SET_DCC_FORCE_UPDATE,
SCALERIOC_I2RND_SET_BUFFER,
SCALERIOC_I2RND_SET_APVR_INFO,
SCALERIOC_PST_SET_BUFFER,
SCALERIOC_WB_MODE_FLAG,	//Send white balance mdoe to video //WOSQRTK-7731
SCALERIOC_I2RND_SEND_TABLE_IDX,
SCALERIOC_SMOOTHTOGGLE_SHAREMEMORY_SYNC_FALG,//This is for vo smooth toggle share memory sync finish flag
SCALERIOC_SMOOTHTOGGLE_SHIFTXY_SHAREMEMORY_SYNC_FALG,
SCALERIOC_PST_RERUN_VO_FLAG,
VO_RUN_SCALER_FLAG,
SCALERIOC_DM_CONNECT_FLAG,
SCALERIOC_SEAMLESS_CHANGE_SHAREMEMORY_INFO_SYNC_FLAG,//For seamless change condition
SCALERIOC_VBI_SHAREMEMORY_DATA,
SCALERIOC_SET_IV2PV_DELAY,
SCALERIOC_PHOTO_UPDATE_SHAREMEM_FALG,//PHOTO
SCALERIOC_PHOTO_SHIFT_SHAREMEM_INFO,//PHOTO
//=====Dump Register=====
SCALERIOC_DUMP_REGISTER_COUNTER,
SCALERIOC_DUMP_REGISTER_INFO,

SCALERIOC_VIP_RPC_TABLE_STRUCT,
SCALERIOC_VIP_RPC_system_info_structure,
SCALERIOC_VIP_RPC_SMARTPIC_CLUS,

SCALERIOC_DRIVER_CONFIG_INFO,//driver config

HDMI_DOLBY_VSIF_FLAG,//0: no dolby vsif  1: dolby vsif enable

SCALERIOC_SET_PANORAMA,
SCALERIOC_AV_SYNC_READY_FLAG,//for av sync ready check

//i2r sub hdr info
SCALERIOC_SUB_SEAMLESS_CHANGE_SHAREMEMORY_INFO_SYNC_FLAG,//For seamless change condition
SCALERIOC_MAIN_INPUT_OUTPUT_BUFFER_INFO,//For new input output hal flow. Main path share memory ring buffer
SCALERIOC_SUB_INPUT_OUTPUT_BUFFER_INFO,//For new input output hal flow. SUB path share memory ring buffer
SCALERIOC_MULTIBUFFER_NUMBER,
FILM_MODE_CHANGE_TYPE,
SCALERIOC_WIN_CALLBACK_DELAY_INFO,
SCALERIOC_VO_FORCE_V_TOP,
DYNAMIC_FRAMERATE_CHANGE_INFO,
SCALERIOC_SETUP_DI_DONE,
SCALERIOC_PC_MODE_INFO,//
SCALERIOC_SUB_ADAPTIVE_STREAM_FLAG,
SCALERIOC_ORBIT_SHIFT_INFO,

SCALERIOC_DUAL_CHANNEL_FLAG,  //hbbtv dual channel flag

SCALERIOC_DTATA_FS_ALGO_RESULT,  //data fs algo result
SCALER_SEND_DISP_SIZE_RERUN_VO,
SCALERIOC_VIP_RPC_BFI_ENABLE,
SCALER_AIRMODE_SEND_DISP_SIZE,
SCALERIOC_CINEMA_MODE_ENABLE,
SCALERIOC_VO_TRACK_ENABLE,
SCALERIOC_GAMEMODE_FORCE_VO_FRAMERATE_FLAG,
SCALERIOC_FULL_GATTING_ENABLE,
SCALERIOC_NN_CAP_MODE_SWITCH_EABLE,
SCALERIOC_VO_FORCE_60_FRAMERATE_STATE,
SCALERIOC_LATESTITEM,
/***** keep SCALERIOC_LATESTITEM be the lastest one!*****/
};

typedef struct
{//for seamless change sync info use
	unsigned int input422_pc_mode;
	unsigned int input444_pc_mode;
} pc_mode_sync_info;

typedef struct
{//for SCALERIOC_MAIN_INPUT_OUTPUT_BUFFER_INFO and SCALERIOC_SUB_INPUT_OUTPUT_BUFFER_INFO
	unsigned short input_x;//input region x
	unsigned short input_y;//input region y
	unsigned short input_w;//input region width
	unsigned short input_h;//input region height
	unsigned short ori_input_w;//input timing resolution width
	unsigned short ori_input_h;//input timing resolution height
	unsigned short output_x;//output region x
	unsigned short output_y;//output region y
	unsigned short output_w;//output region width
	unsigned short output_h;//output region height
} INPUT_OUTPUT_INFO_T;

typedef struct
{//for SCALERIOC_MAIN_INPUT_OUTPUT_BUFFER_INFO and SCALERIOC_SUB_INPUT_OUTPUT_BUFFER_INFO
	unsigned short pst_active_state;//True: can run pst    False: can not run pst. not ready
	unsigned short read_idx;//update at video
	unsigned short write_idx;//update at kernel
	INPUT_OUTPUT_INFO_T in_out_data[INPUT_OUTPUT_SHAREMEM_RING_BUFFER_SIZE];
} INPUT_OUTPUT_RINGBUFFER_INFO_T;


typedef struct _SEAMLESS_CHANGE_SYNC_INFO
{//for seamless change sync info use
    unsigned int hdmi_target_hdr_info;//hdmi want to hdr enable or not for bit0 = enable/disable. bit1-9 hdr type
	unsigned int hdmi_target_color_format;//hdmi seamless change want target format

//This is i3ddma change to vo info
	unsigned int hdmi_trigger_vo_change_flag;//for i3dddma change and vo change
	unsigned int hdmi_trigger_vo_color_format;//when change_flag is true. It is color format
	unsigned int hdmi_trigger_vo_hdr_mode;//when change_flag is true. It is current hdr 10 mode or not // bit0 = enable/disable bit1-9 hdr type
	unsigned int hdmi_trigger_vo_color_format_change_flag;//for i3dddma change vo color format also change flag. VO postisr set
														//This is for hdmi sdr hdr seamless change. 444 or 422
	unsigned int hdmi_not_ready;//hdmi seamless change finish. 1 : not finish. 0: finish

//This is for vdec mode seamless info
    unsigned int vdec_change_flag;//vdec seamless change
    unsigned int vdec_target_hdr_enable;//vdec want to hdr enable or not
    unsigned int vdec_cur_hdr_type;//vdec current hdr enable HLG or hdr10 or SDR
	unsigned int hdr_active_state;//scaler hdr ready
} seamless_change_sync_info;


typedef struct _PANEL_INFO
{
	unsigned int ulVTotal;
	unsigned int ulDEN_STA_VPOS;
	unsigned int ulDEN_END_VPOS;
	unsigned int ul3DPanelType;		// 3D panel type: 0:2D only, 1:SG, 2:PR
	unsigned int ulPanelVflip;
} PANEL_INFO;



typedef struct _VIDEO_SCALER_MESSAGE
{
	unsigned int msgType;
	unsigned int msgSubType;
	unsigned int msgIntData;
	unsigned int msgBodyByteSize;
	unsigned int msgDataPtrAddr;
	unsigned int isValidate;
	unsigned int isSmoothtoggle;
} VIDEO_SCALER_MESSAGE;


enum PresetModeDef
{
	_MODE_640x350_70HZ = 0,			// Mode 00:
	_MODE_640x350_85HZ,				// Mode 01:
	_MODE_640x400_56HZ,				// Mode 02:
	_MODE_640x400_70HZ,				// Mode 03:
	_MODE_640x400_85HZ,				// Mode 04:
	_MODE_720x400_50HZ,				// Mode 05:
	_MODE_720x400_70HZ,				// Mode 06:
	_MODE_720x400_85HZ,				// Mode 07:
	_MODE_720x480_60HZ,				// Mode 08:
	_MODE_640x480_50HZ,				// Mode 09:
	_MODE_640x480_60HZ,				// Mode 10:
	_MODE_640x480_67HZ,				// Mode 11:
	_MODE_640x480_70HZ,				// Mode 12:
	_MODE_640x480_72HZ,				// Mode 13:
	_MODE_640x480_75HZ,				// Mode 14:
	_MODE_640x480_85HZ,				// Mode 15:
	_MODE_800x600_50HZ,				// Mode 16:
	_MODE_800x600_56HZ,				// Mode 17:
	_MODE_800x600_60HZ,				// Mode 18:
	_MODE_800x600_72HZ,				// Mode 19:
	_MODE_800x600_75HZ,				// Mode 20:
	_MODE_800x600_85HZ,				// Mode 21:
	_MODE_832x624_75HZ,				// Mode 22:
	_MODE_1024x768_50HZ,				// Mode 23:
	_MODE_1024x768_60HZ,				// Mode 24:
	_MODE_1024x768_66HZ,				// Mode 25:
	_MODE_1024x768_70HZ,				// Mode 26:
	_MODE_1024x768_75HZ,				// Mode 27:
	_MODE_1024x768_85HZ,				// Mode 28:
	_MODE_1152x864_60HZ,				// Mode 29:
	_MODE_1152x864_75HZ,				// Mode 30:
	_MODE_1152x870_75HZ,				// Mode 31:
	_MODE_1152x900_66HZ,				// Mode 32:
	_MODE_1280x720_50HZ,				// Mode 33:
	_MODE_1280x720_60HZ,				// Mode 34:
	_MODE_1280x720_60HZ_RB,			// Mode 35:
	_MODE_1280x720_85HZ,				// Mode 36:
	_MODE_1280x768_50HZ,				// Mode 37:
	_MODE_1280x768_60HZ,				// Mode 38:
	_MODE_1280x768_60HZ_RB,			// Mode 39:
	_MODE_1280x768_75HZ,				// Mode 40:
	_MODE_1280x768_85HZ,				// Mode 41:
	_MODE_1280x800_60HZ,				// Mode 42:
	_MODE_1280x800_60HZ_RB,			// Mode 43:
	_MODE_1280x800_75HZ,				// Mode 44:
	_MODE_1280x960_50HZ,				// Mode 45:
	_MODE_1280x960_60HZ,				// Mode 46:
	_MODE_1280x960_75HZ,				// Mode 47:
	_MODE_1280x960_85HZ,				// Mode 48:
	_MODE_1280x1024_50HZ,			// Mode 49:
	_MODE_1280x1024_60HZ,			// Mode 50:
	_MODE_1280x1024_60HZ_RB,			// Mode 51:
	_MODE_1280x1024_72HZ,			// Mode 52:
	_MODE_1280x1024_75HZ,			// Mode 53:
	_MODE_1280x1024_85HZ,			// Mode 54:
	_MODE_1360x768_60HZ,				// Mode 55:
	_MODE_1360x768_60HZ_RB,			// Mode 56:
	_MODE_1366x768_60HZ,				// Mode 57:	//VGA1366x768@60
	_MODE_1400x1050_50HZ,			// Mode 58:
	_MODE_1400x1050_60RHZ,			// Mode 59:(Reduced Blanking)
	_MODE_1400x1050_60HZ,			// Mode 60:
	_MODE_1400x1050_75HZ,			// Mode 61:
	_MODE_1440x900_60HZ,				// Mode 62:
	_MODE_1440x900_60RHZ,			// Mode 63:(Reduced Blanking)
	_MODE_1440x900_75HZ,				// Mode 64:
	_MODE_1440x900_85HZ,				// Mode 65:
	_MODE_1600x1200_50HZ,			// Mode 66:
	_MODE_1600x1200_60HZ,			// Mode 67:
	_MODE_1600x1200_65HZ,			// Mode 68:
	_MODE_1600x1200_70HZ,			// Mode 69:
	_MODE_1600x1200_75HZ,			// Mode 70:
	_MODE_1600x1200_85HZ,			// Mode 71:
	_MODE_1680x1050_50HZ,			// Mode 72:
	_MODE_1680x1050_60HZ,			// Mode 73:
	_MODE_1680x1050_60RHZ,			// Mode 74:(Reduced Blanking)
	_MODE_1680x1050_75HZ,			// Mode 75:
	_MODE_1680x1050_85HZ,			// Mode 76:
	_MODE_1920x1080_50HZ,			// Mode 77:
	_MODE_1920x1080_60HZ,			// Mode 78:
	_MODE_1920x1080_60HZ_138,		// Mode 79:(Reduced Blanking)
	_MODE_1920x1080_60HZ_148,		// Mode 80:(Reduced Blanking)
	_MODE_1920x1080_75HZ,			// Mode 81:
	_MODE_VGA_480I,					// Mode 82: RGB 480i
	_MODE_VGA_576I,					// Mode 83: RGB 576i
	_MODE_VGA_480P,					// Mode 84: RGB 480p
	_MODE_VGA_576P,					// Mode 85: RGB 576p
	_MODE_VGA_720P50,					// Mode 86: RGB 720px50Hz
	_MODE_VGA_720P60,					// Mode 87: RGB 720px60Hz
	_MODE_VGA_1080I25,				// Mode 88: RGB 1080ix50Hz
	_MODE_VGA_1080I30,				// Mode 89: RGB 1080ix60Hz
	_MODE_VGA_1080P50,   				// Mode 90: VGA 1920x1080ix50HZ (802R) //CSW+ 0971001
	_MODE_VGA_1080P60,	 			// Mode 91: VGA 1920x1080ix60HZ (802R) //CSW+ 0971001
	_MODE_848x480_60HZ,
	_MODE_1600x900_60HZ_RB,
	_MODE_1024x576_60HZ,				// Mode 92:for MAC
	_MODE_1024x768I_43HZ,
	_MODE_1280x1024_60HZ_MSPG,
	_MODE_1280x768_50HZ_MSPG,
	_MODE_1280x768_60HZ_MSPG,
	_MODE_1280x768_75HZ_MSPG,
	_MODE_1280x768_85HZ_MSPG,
	_MODE_1920x1080_60Hz_173MAC,	// Mode 93:for MAC
	_MODE_PC_TIMING_END = _MODE_1920x1080_60Hz_173MAC,	//93 By Gilbert(2009/6/19) Set the end point of PC Timing

//for YPbPr & Video8
	_MODE_480I,						// Mode 94:
	_MODE_576I,						// Mode 95:
	_MODE_480P,						// Mode 96: YPbPr  720x 480px50HZ (802R)
	_MODE_576P,						// Mode 97: YPbPr  720x 576px50HZ (802R)
	_MODE_720P50,						// Mode 98: YPbPr 1280x 720px50HZ
	_MODE_720P60,						// Mode 99: YPbPr 1280x 720px60HZ (802R)
	_MODE_1080I25,						// Mode 100: YPbPr 1920x1080ix50HZ (802R)
	_MODE_1080I30,						// Mode 101: YPbPr 1920x1080ix60HZ (802R)
	_MODE_1080P50,					// Mode 102: YPbPr 1920x1080px50HZ (802R)
	_MODE_1080P60,					// Mode 103:  YPbPr 1920x1080px60HZ (802R)
	_MODE_720P25,
	_MODE_720P30,
	// CSW+ 0971225 Add YPbPr timing 1080P/25HZ/24HZ/23.97HZ/29.97HZ/30HZ
	_MODE_1080P23,					// Mode 104: YPbPr 1920x1080px23.976HZ (802R)
	_MODE_1080P24,					// Mode 105: YPbPr 1920x1080px24HZ (802R)
	_MODE_1080P25,					// Mode 106: YPbPr 1920x1080px25HZ (802R)
	_MODE_1080P29,					// Mode 107: YPbPr 1920x1080px29.976HZ (802R)
	_MODE_1080P30,					// Mode 108 YPbPr 1920x1080px30HZ (802R)};
// for HDMI :Justin
	_MODE_1080PM50,					// Mode 109:  HDMI 960x1080px50HZ (802R) //forster modified 050823
	_MODE_1080PM60,					// Mode 110:  HDMI 960x1080px60HZ (802R) //forster modified 050823
	_MODE_480I_DH,          // Mode 111
	_MODE_576I_DH,          // Mode 112
	_MODE_VIDEO_TIMING_END = _MODE_576I_DH, //112 for API have same video timing condition

	_MODE_1920x1200_60HZ,			// Mode 113
	_MODE_4k2kI30,					// Mode 114
	_MODE_4k2kP30,					// Mode 115
	_MODE_4k2kP24,					// Mode 116
	_MODE_4k2kP25,					// Mode 117
	_MODE_4k2kP48,					// Mode 118
	_MODE_4k2kP50,					// Mode 119
	_MODE_4k2kP60,					// Mode 120
	_MODE_3840_540_60P,//4k 0.5k verify mode timng
	_MODE_1080_1920_60P,//1k 2k verify mode timng

	_MODE_NEW
};


typedef enum
{
	MODE_2D3D_DISABLED = 0,
	MODE_2D3D_TYPE_VO, // VO double frame rate
	MODE_2D3D_TYPE_IM, // I/M double clock
} MODE_2D3D_TYPE;


typedef enum _VO_FR_CTRL_OPCODE{
	_OPCODE_TABLE_CHANGE=0,
	_OPCODE_MODE_CHANGE=1,
	_OPCODE_NUM=2,
}VO_FR_CTRL_OPCODE;

#define DATAFS_DISABLE_GATTING_WIDTH 1920
#define DATAFS_DISABLE_GATTING_HEIGHT 1080

// VO frame rate control
#define DEFAULT_ENABLE_FORCE_FRAMERATE 	FALSE
#define DEFAULT_FORCE_FRAMERATE 		59940
#define DEFAULT_ENABLE_DOUBLE_DVS 		FALSE
#define DEFAULT_DOUBLE_DVS_THRESHOLD 	31000
#define DEFAULT_ENABLE_HIGH_BOUND 		TRUE
#define DEFAULT_HIGH_BOUND 				60000
#define DEFAULT_HIGH_ADJUST 			60000
#define DEFAULT_ENABLE_LOW_BOUND 		TRUE
#if 0
#define DEFAULT_LOW_BOUND			50000
#define DEFAULT_LOW_BOUND_FOR_MEMC		47900
#define DEFAULT_LOW_ADJUST			59940
#else
#define DEFAULT_LOW_BOUND			50000
#define DEFAULT_LOW_BOUND_FOR_MEMC		23500
#define DEFAULT_LOW_ADJUST			60000
#endif


#define VO_FR_CTRL_FORCE_FRAMERATE_MAX	120000

#define SMOOTH_TOGGLE_DATAFRCFS_TEST


// over capture for 4k2k video RTNR boundary issue
#define VO_4K2K_OVER_CAP_PIXEL	2


#define DDR_IN2_BLOCK_SELECT_BIT_START	6
#define DDR_IN2_BLOCK_SELECT_MASK			(0x3 << DDR_IN2_BLOCK_SELECT_BIT_START)


#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
#if 1   // k5lp mc buffer & 96 alignment
//KME memory size
#define MEMC_KME_00_TOTAL_SIZE (0x7E900 * 8)
#define MEMC_KME_00_SHIFT 0x7E900

//#define MEMC_KME_04_TOTAL_SIZE (0x100000 * 2)
//#define MEMC_KME_04_SHIFT 0x100000

//#define MEMC_KME_05_TOTAL_SIZE (0x60000 * 2)
//#define MEMC_KME_05_SHIFT 0x60000

#define MEMC_KME_08_TOTAL_SIZE (0x7E900 * 1)
#define MEMC_KME_08_SHIFT 0x7E900

#define MEMC_KME_10_TOTAL_SIZE (0x3F480 * 1)
#define MEMC_KME_10_SHIFT 0x3F480

#define MEMC_KME_12_TOTAL_SIZE (0x19500 * 1)
#define MEMC_KME_12_SHIFT 0x19500

#define MEMC_KME_14_TOTAL_SIZE (0x6540 * 1)
#define MEMC_KME_14_SHIFT 0x6540

#define MEMC_KMV_01_TOTAL_SIZE (0x58980 * 1)
#define MEMC_KMV_01_SHIFT 0x58980

#define MEMC_KMV_02_TOTAL_SIZE (0x29220 * 1)
#define MEMC_KMV_02_SHIFT 0x29220

#define MEMC_KMV_04_TOTAL_SIZE (0x22CE0 * 3)
#define MEMC_KMV_04_SHIFT 0x22CE0

#define MEMC_KMV_05_TOTAL_SIZE (0x3F480 * 2)
#define MEMC_KMV_05_SHIFT 0x3F480

#define MEMC_KME1_RPT_PPFV_TOTAL_SIZE (0x6540 * 2)
#define MEMC_KME1_RPT_PPFV_SHIFT 0x6540

#define MEMC_KME1_RPT_PFV_TOTAL_SIZE (0x6540 * 3)
#define MEMC_KME1_RPT_PFV_SHIFT 0x6540

#define MEMC_IPME_TOTAL_SIZE (0x32A0 * 8)
#define MEMC_IPME_SHIFT 0x32A0


//KMC memory size
#if 1 //IC_K6LP
#define MEMC_KMC_00_START_TOTAL_SIZE (0x524400 * 6) // MC HF
#define MEMC_KMC_00_START_SHIFT 0x524400

#define MEMC_KMC_01_START_TOTAL_SIZE (0x4A5B00 * 6) // MC LF
#define MEMC_KMC_01_START_SHIFT 0x4A5B00
#else //IC_K5LP
#define MEMC_KMC_00_START_TOTAL_SIZE (0x50AF00 * 6)  // MC HF
#define MEMC_KMC_00_START_SHIFT 0x50AF00

#define MEMC_KMC_01_START_TOTAL_SIZE (0x48C600 * 6)   //  MC LF
#define MEMC_KMC_01_START_SHIFT 0x48C600
#endif

#define KME_TOTAL_SIZE (MEMC_KME_00_TOTAL_SIZE + MEMC_KME_08_TOTAL_SIZE + MEMC_KME_10_TOTAL_SIZE + MEMC_KME_12_TOTAL_SIZE + MEMC_KME_14_TOTAL_SIZE + MEMC_KMV_01_TOTAL_SIZE + MEMC_KMV_02_TOTAL_SIZE + MEMC_KMV_04_TOTAL_SIZE + MEMC_KMV_05_TOTAL_SIZE)
#define KMC_TOTAL_SIZE (MEMC_KMC_00_START_TOTAL_SIZE + MEMC_KMC_01_START_TOTAL_SIZE)
#define KME1_RPT_TOTAL_SIZE (MEMC_KME1_RPT_PPFV_TOTAL_SIZE + MEMC_KME1_RPT_PFV_TOTAL_SIZE)
#define KMEMC_TOTAL_SIZE (KME_TOTAL_SIZE + KMC_TOTAL_SIZE + MEMC_IPME_TOTAL_SIZE + KME1_RPT_TOTAL_SIZE)
#else   //  k4lp memory setting
//KME memory size
#define MEMC_KME_00_TOTAL_SIZE (0x80000 * 8)
#define MEMC_KME_00_SHIFT 0x80000

//#define MEMC_KME_04_TOTAL_SIZE (0x100000 * 2)
//#define MEMC_KME_04_SHIFT 0x100000

//#define MEMC_KME_05_TOTAL_SIZE (0x60000 * 2)
//#define MEMC_KME_05_SHIFT 0x60000

#define MEMC_KME_08_TOTAL_SIZE (0x80000 * 1)
#define MEMC_KME_08_SHIFT 0x80000

#define MEMC_KME_10_TOTAL_SIZE (0x40000 * 1)
#define MEMC_KME_10_SHIFT 0x40000

#define MEMC_KME_12_TOTAL_SIZE (0x11000 * 1)
#define MEMC_KME_12_SHIFT 0x11000

#define MEMC_KME_14_TOTAL_SIZE (0x5000 * 1)
#define MEMC_KME_14_SHIFT 0x5000

#define MEMC_KMV_01_TOTAL_SIZE (0x55000 * 1)
#define MEMC_KME_01_SHIFT 0x55000

#define MEMC_KMV_02_TOTAL_SIZE (0x2b000 * 1)
#define MEMC_KME_02_SHIFT 0x2b000

#define MEMC_KMV_04_TOTAL_SIZE (0x22000 * 3)
#define MEMC_KME_04_SHIFT 0x22000

#define MEMC_KMV_05_TOTAL_SIZE (0x44000 * 2)
#define MEMC_KME_05_SHIFT 0x44000

//KMC memory size
#define MEMC_KMC_00_START_TOTAL_SIZE (0x548800 * 6)
#define MEMC_KMC_00_START_SHIFT 0x548800

#define MEMC_KMC_01_START_TOTAL_SIZE (0x4c1400 * 6)
#define MEMC_KMC_01_START_SHIFT 0x4c1400

#define KME_TOTAL_SIZE (MEMC_KME_00_TOTAL_SIZE + MEMC_KME_08_TOTAL_SIZE + MEMC_KME_10_TOTAL_SIZE + MEMC_KME_12_TOTAL_SIZE + MEMC_KME_14_TOTAL_SIZE + MEMC_KMV_01_TOTAL_SIZE + MEMC_KMV_02_TOTAL_SIZE + MEMC_KMV_04_TOTAL_SIZE + MEMC_KMV_05_TOTAL_SIZE)
#define KMC_TOTAL_SIZE (MEMC_KMC_00_START_TOTAL_SIZE + MEMC_KMC_01_START_TOTAL_SIZE)
#define KMEMC_TOTAL_SIZE (KME_TOTAL_SIZE + KMC_TOTAL_SIZE)
#endif
#if ( SCALER_MEMC_SIZE && (KMEMC_TOTAL_SIZE > SCALER_MEMC_SIZE) )
#error "Scaler MEMC reserved memory size is large than before!"
#endif
#endif


//Modify to use panel size define @Crixus 20170517
#define MDOMAIN_MAIN_SUB_BUFFER_SUM_SIZE (1024 * 1024 * 12)
#define MDOMAIN_MAIN_BUFFER_SIZE_30BITS (_DISP_WID * _DISP_LEN * 30 / 8)

//#define MDOMAIN_MAIN_BUFFER_SIZE_12BITS ((_DISP_WID * 12 + 256) / 128 * _DISP_LEN * 16)//Update M-domain 4k2k 12bits for PQDC align @Crixus 20170620
#ifdef CONFIG_BW_96B_ALIGNED
//	#define MDOMAIN_MAIN_BUFFER_SIZE_12BITS (drvif_memory_get_data_align((_DISP_WID * 12 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * _DISP_LEN)//Update M-domain 4k2k 12bits for PQDC align @Crixus 20170620
#ifdef CONFIG_RTK_KDRV_DV_IDK_DUMP
	#define MDOMAIN_MAIN_BUFFER_SIZE_12BITS (drvif_memory_get_data_align((_DISP_WID * 12 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * _DISP_LEN)//Update M-domain 2k1k 12bits for PQDC align
#else
	#define MDOMAIN_MAIN_BUFFER_SIZE_12BITS (drvif_memory_get_data_align((1920 * 12 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * 1080)//Update M-domain 2k1k 12bits for PQDC align
#endif

	#define MDOMAIN_MAIN_BUFFER_SIZE_12BITS_HDMI (drvif_memory_get_data_align((_DISP_WID * 12 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * _DISP_LEN)//Update M-domain 2k1k 12bits for PQDC align
#else
#ifdef BRING_UP_I2RND
	#define MDOMAIN_MAIN_BUFFER_SIZE_12BITS ((((720 * 12) + 256) / 8) * 576)	//I2rnd bringup use 720*576 video to verify
#else
	#define MDOMAIN_MAIN_BUFFER_SIZE_12BITS ((_DISP_WID * 12 + 256) / 128 * _DISP_LEN * 16)
#endif
#endif

#define MDOMAIN_MAIN_BUFFER_SIZE_24BITS (_DISP_WID * _DISP_LEN * 24 / 8) //M-domain RGB444 mode
#ifdef CONFIG_BW_96B_ALIGNED
//#define MDOMAIN_MAIN_BUFFER_SIZE_20BITS (drvif_memory_get_data_align((_DISP_WID * 20 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * _DISP_LEN) //M-domain RGB444 mode 20bits
//#define MDOMAIN_MAIN_BUFFER_SIZE_16BITS (drvif_memory_get_data_align((_DISP_WID * 16 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * _DISP_LEN)//livezoomcase
#ifdef CONFIG_RTK_KDRV_DV_IDK_DUMP
#define MDOMAIN_MAIN_BUFFER_SIZE_20BITS (drvif_memory_get_data_align((_DISP_WID * 20 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * _DISP_LEN) //M-domain RGB444 mode 20bits
#define MDOMAIN_MAIN_BUFFER_SIZE_16BITS (drvif_memory_get_data_align((_DISP_WID * 16 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * _DISP_LEN)//livezoomcase
#else
#define MDOMAIN_MAIN_BUFFER_SIZE_20BITS (drvif_memory_get_data_align((1920 * 20 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * 1080) //M-domain RGB444 mode 20bits
#define MDOMAIN_MAIN_BUFFER_SIZE_16BITS (drvif_memory_get_data_align((1920 * 16 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * 1080)//livezoomcase
#endif

#define MDOMAIN_MAIN_BUFFER_SIZE_20BITS_HDMI (drvif_memory_get_data_align((_DISP_WID * 20 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * _DISP_LEN) //M-domain RGB444 mode 20bits
#define MDOMAIN_MAIN_BUFFER_SIZE_16BITS_HDMI (drvif_memory_get_data_align((_DISP_WID * 16 + 256) / 8, DMA_SPEEDUP_ALIGN_VALUE) * _DISP_LEN)//livezoomcase
#else
#define MDOMAIN_MAIN_BUFFER_SIZE_20BITS (_DISP_WID * _DISP_LEN * 20 / 8) //M-domain RGB444 mode 20bits
#define MDOMAIN_MAIN_BUFFER_SIZE_16BITS (_DISP_WID * _DISP_LEN * 16 / 8)//livezoomcase
#endif
#define MDOMAIN_MAIN_BUFFER_SIZE_10BITS ((_DISP_WID + (32 - (_DISP_WID % 32))) *  _DISP_LEN * 10 / 8 + CONFIG_MDOMAIN_BURST_SIZE)//all data fs flow
#ifdef CONFIG_RTK_KDRV_DV_IDK_DUMP
#define MDOMAIN_MAIN_BUFFER_SIZE  MDOMAIN_MAIN_BUFFER_SIZE_16BITS//+0x40000//MDOMAIN_MAIN_BUFFER_SIZE_12BITS//(3840 * 2160 * 30 / 8) //4k2k 30 bits
#else
#define MDOMAIN_MAIN_BUFFER_SIZE  MDOMAIN_MAIN_BUFFER_SIZE_16BITS+0x40000//MDOMAIN_MAIN_BUFFER_SIZE_12BITS//(3840 * 2160 * 30 / 8) //4k2k 30 bits
#endif

#define MDOMAIN_MAIN_BUFFER_SIZE_HDMI  MDOMAIN_MAIN_BUFFER_SIZE_16BITS_HDMI//MDOMAIN_MAIN_BUFFER_SIZE_12BITS//(3840 * 2160 * 30 / 8) //4k2k 30 bits

//#define MDOMAIN_MAIN_BUFFER_SIZE_VO (_DISP_WID * _DISP_LEN * 20 / 8) //4k2k 16 bits for playback case

/* apvr and livezoom sub size*/
#define MDOMAIN_SUB_BUFFER_SIZE (1920 * 1080 * 2) //2k1k 16 bits

#define MDOMAIN_SUB_TWO_PIXEL_BUFFER_SIZE (MDOMAIN_MAIN_BUFFER_SIZE_12BITS_HDMI/2)
#define MDOMAIN_SUB_TWO_PIXEL_BUFFER_SIZE_PC_MODE (MDOMAIN_MAIN_BUFFER_SIZE_16BITS_HDMI/2)
//I2rnd mcap2 memory size for PQC
#ifdef BRING_UP_I2RND
#define MDOMAIN_MAIN_I2R_BUFFER_SIZE ((((720 * 12) + 256) / 8) * 576)	//I2rnd bringup use 720*576 video to verify
#else
#define MDOMAIN_MAIN_I2R_BUFFER_SIZE ((1920 * 12 + 256) / 128 * 1080 * 16)
#endif

//DI memory size
#define VIP_DI_1_BUFFER_SIZE (1024 * 1024 * 12) // DI 1 : 12M
#define VIP_DI_2_BUFFER_SIZE (1024 * 1024 * 0) //  DI 2 : 0M
#define VIP_NN_BUFFER_SIZE (1024 * 1024 * 1) // NN  : 1M
#define VIP_DMAto3DTable_BUFFER_SIZE (800 * 1024) //k5lp DMAto3DTable 800k
#define VIP_DeMura_BUFFER_SIZE (1024 * 1024 * 1) //k5lp DeMura 1M


#define CONFIG_HDR_SDR_SEAMLESS//If define to support HDR to SDR SEAMLESS

void VPScaler_RPC_SendMessage(VIDEO_SCALER_MESSAGE *a_ptMsg);

int scalerDrv_ioctl(unsigned int cmd, unsigned long arg);

int scalerDrv_Init(SCALER_RPC_SHARE_MEM *a_ptShareMem);
unsigned int VODMA_2D3D_Get_curFrameCount(VO_VIDEO_PLANE VideoPlane);
void VODMA_2D3D_Set_DoubleIndex  (VO_VIDEO_PLANE, unsigned int) ;
void VODMA_2D3D_Set_newVIsrTimestamp(VO_VIDEO_PLANE, unsigned int) ;
void VODMA_2D3D_Set_fieldSignal(VO_VIDEO_PLANE VideoPlane, unsigned int fieldSignalLevel);
unsigned int VO_2d3d_cvt_getCurrntSubCapBuffIdx(void);
unsigned int VO_2d3d_cvt_getCurrntSubVgipFieldStatus(void);
unsigned int VO_2d3d_cvt_getCurrntSubVgipInterlaceMode(void);
int VO_2D3D_cvt_configVOInit(VO_2D3D_CONFIG *config_data);
int VO_Capture_configVOInit(VO_CAPTURE_CONFIG *config_data);
void VO_SetScalerDisplayReady	  (short isReady) ;

typedef enum
{
	VBI_PAL_TELETEXT = 0,
	VBI_PAL_WSS,
	VBI_PAL_VPS,
	VBI_NTSC_CC,
	VBI_NTSC_WSS,
	VBI_CGMS,
	VBI_TYPE_ALL
}VBI_TYPE_T;


typedef enum _HDR_MODE {
    HDR_MODE_DISABLE 		= 0x0,
    HDR_DOLBY_HDMI			= 0x1,
    HDR_DOLBY_COMPOSER		= 0x2,
    HDR_DOLBY_CERT_DM422		= 0x4,
    HDR_DOLBY_CERT_DM420		= 0x5,
    HDR_DOLBY_CERT_COMPOSER	= 0x6,
    HDR_HDR10_HDMI			= 0x10,
    HDR_HDR10_VDEC	= 0x11
} HDR_MODE;

typedef enum
{
    DOLBY_HDMI_VSIF_DISABLE = 0,
    DOLBY_HDMI_VSIF_STD = 1,//dolby vsif standard foramt
    DOLBY_HDMI_VSIF_LL = 2,//dolby vsif low latecy foramt
    DOLBY_HDMI_h14B_VSIF = 3,//hdmi 1.4 vsif dolby format
}DOLBY_HDMI_VSIF_T;

typedef enum {
    HDR_DM_MODE_NONE = 0x0,
    HDR_DM_HDR10,
    HDR_DM_HLG,
    HDR_DM_DOLBY,
    HDR_DM_TECHNICOLOR,
    HDR_DM_ST2094,
    HDR_DM_HDR10PLUS = HDR_DM_ST2094,
    HDR_DM_SDR_MAX_RGB,
    HDR_DM_MODE_DEFAULT = 0xff,//for vdec start
} PQ_HDR_TYPE;//This is for dm update flow using. Video trigger the timer6 to update

typedef enum {
    SEAMLESS_NONE = 0x0,//no seamless
	SEAMLESS_WITH_FREEZE = 0x1,//seamless with freeze
	SEAMLESS_WITHOUT_FREEZE = 0x2,//seamless without freeze for DTV switch
} HDR_SEAMLESS_CONTROL_TYPE;//for seamless need freeze or not

typedef struct _VO_FORCE_V_TOP_DATA {
	int  vo_force_v_top_enable;
} VO_FORCE_V_TOP_DATA;

typedef enum {
	support_sdr_max_rgb = 0x1,
} VO_FORCE_V_TOP_FLAG;

typedef struct _VBI_UPDATE_DATA_INFO{
	unsigned int vbi_valid[VBI_TYPE_ALL];
	unsigned int vbi_data[VBI_TYPE_ALL];
}VBI_UPDATE_DATA_INFO;

typedef enum {
     HDMI_2K1K_30 = 0,    	//hdmi timimng<=2k1k framerate<=30
     HDMI_2K1K_60,	  	//hdmi timimng<=2K1K  30<framerate<=60
     HDMI_2K1K_120,	  	//hdmi timimng<=2K1K  framerate iss 100 or 120
     HDMI_4K2K_30,	 	//hdmi 2k1k<timimng<=4K2K  framerate<=30
     HDMI_4K2K_60,		//hdmi 2k1k<timimng<=4K2K  30<framerate<=60
     HDMI_4K2K_120,	  	//hdmi timimng<=2K1K  framerate iss 100  or 120
     VO_2K1K_30,		//vo timimng<=2k1k framerate<=30
     VO_2K1K_60,		//vo timimng<=2K1K  30<framerate<=60
     VO_2K1K_120,		//vo timimng<=2K1K  framerate iss 100 or 120
     VO_4K2K_30,		//vo 2k1k<timimng<=4K2K  framerate<=30
     VO_4K2K_60,		//vo 2k1k<timimng<=4K2K  30<framerate<=60
     HDMI_HDR_4K2K_60,	//hdmi hdr 2k1k<timimng<=4K2K  30<framerate<=60
     JPEG_2K1K_30,      //jpeg timimng<=2K1K framerate=30
     JPEG_4K2K_30,      //jpeg 2k1k<timimng<=4K2K framerate=30
     TIMING_INVAILD
} INPUT_TIMING_INDEX;

typedef enum {
	DRIVER_RTNR_PATTERN,
	DRIVER_OD_PATTERN,
	DRIVER_DEXC_PATTERN,
	DRIVER_FREERUN_PATTERN,
	DRIVER_VECOMP_PATTERN,
	DRIVER_DIPQC_BIT_PATTERN,
	DRIVER_MASNR_PATTERN,
}DRIVER_LIST_INFO;

typedef struct VT_SE_CAPTURE_INFO  /*for VT function use SE driver by sending rpc*/
{
	unsigned int enable;
	unsigned int capSrc;
	unsigned int capMode;
	unsigned int capWid;
	unsigned int capLen;
}VT_SE_CAPTURE_INFO_T;

typedef struct VSC_DRIVER_PATTERN{
	INPUT_TIMING_INDEX	timing_index;
	unsigned int			rtnr_mode; //0:rtnr off , 1:422,  2:420, 3:400
	unsigned int			od_en;     //0:od off,   1:3bit   2:4bit
	unsigned int			dexc_en;   //0:dexc off,1:dexc on
	unsigned int			free_run;  //0:frc,       1:frame sync
	unsigned int			ve_comp;   //0:off        1:on
	unsigned int 			dipqc_bit; //0:6bit      1:10bit
	unsigned int			ma_snr;	   //0:off,	1:on
}VSC_DRIVER_PATTERN;

typedef struct _DRIVER_CONFIG_DATA_INFO{
	VSC_DRIVER_PATTERN vsc_driver[TIMING_INVAILD];
}DRIVER_CONFIG_DATA_INFO;

//=============i2r, pst relatedr============================

typedef struct _I2RND_START_ADDR {
	unsigned int	s0_vo_st_addr;
	unsigned int	s1_vo_st_addr;
	unsigned int	s0_vo_cur_addr;
	unsigned int	s1_vo_cur_addr;
	unsigned int	i2rnd_enable_addr;//in2rnd enable flag
	unsigned int	write_cmd_num_addr;
	unsigned int	read_cmd_num_addr;
	unsigned int	cmd_buffer_size;
	unsigned int	force_write_cmd_addr;
	unsigned int	s1_write_cmd_num_addr;
	unsigned int	s1_read_cmd_num_addr;
} I2RND_START_ADDR;

typedef struct _I2RND_APVR_INFO {
	unsigned int	i2rnd_enable;
	unsigned int	s1_buf_addr1;
	unsigned int	s1_buf_addr2;
	unsigned int	s1_buf_addr3;
} I2RND_APVR_INFO;


typedef struct _PST_START_ADDR {
    unsigned int	i_m_st_addr;
    unsigned int	i_s_st_addr;
    unsigned int	dispm_st_addr;
    unsigned int	disps_st_addr;
    unsigned int	gdma_st_addr;
    unsigned int	i_m_cur_addr;
    unsigned int	i_s_cur_addr;
    unsigned int	dispm_cur_addr;
    unsigned int	disps_cur_addr;
    unsigned int	gdma_cur_addr;

    unsigned int	pst_enable_addr;//d domain pst enable flag
    unsigned int	write_dispm_cmd_num_addr;
    unsigned int	read_dispm_cmd_num_addr;

    unsigned int	idom_pst_enable_addr;//i domain pst enable flag
    unsigned int	write_idom_cmd_num_addr;
    unsigned int	read_idom_cmd_num_addr;

    unsigned int	pst_mode;

    unsigned int	dispm_cmd_buffer_size;
	unsigned int	idom_cmd_buffer_size;

	unsigned int	pst_sub_enable_addr;
    unsigned int	write_disps_cmd_num_addr;
    unsigned int	read_disps_cmd_num_addr;

	unsigned int    idos_pst_enable_addr;
	unsigned int	write_idos_cmd_num_addr;
    unsigned int	read_idos_cmd_num_addr;
} PST_START_ADDR;

typedef enum{
	I2RND_TABLE_OFF = 0,
	I2RND_MAIN_S0_TABLE,
	I2RND_SUB_S1_TABLE,
	I2RND_TABLE_MAX,
}_I2RND_DISPLAY_TABLE_T;

typedef enum{
	MAIN_PST_TOP_CTRL_STAGE_DISABLE = 0,
	MAIN_PST_TOP_CTRL_STAGE_CHECK_RW_PTR,
	MAIN_PST_TOP_CTRL_STAGE_RW_PTR_DONE,
	MAIN_PST_TOP_CTRL_STAGE_1ST_PIC,
	MAIN_PST_TOP_CTRL_STAGE_2ND_PIC,
	MAIN_PST_TOP_CTRL_STAGE_3RD_PIC,
}_MAIN_PST_TOP_CTRL_TABLE_T;

typedef enum{
	SUB_PST_TOP_CTRL_STAGE_DISABLE = 0,
	SUB_PST_TOP_CTRL_STAGE_CHECK_RW_PTR,
	SUB_PST_TOP_CTRL_STAGE_RW_PTR_DONE,
	SUB_PST_TOP_CTRL_STAGE_1ST_PIC,
	SUB_PST_TOP_CTRL_STAGE_2ND_PIC,
	SUB_PST_TOP_CTRL_STAGE_3RD_PIC,
}_SUB_PST_TOP_CTRL_TABLE_T;

typedef enum VSC_I2RND_SUB_VO_STAGE_TYPE
{
	I2RND_SUB_VO_STAGE_DISABLE = 0,
	I2RND_SUB_VO_STAGE_NEW_SUB_CONNECT,
	I2RND_SUB_VO_STAGE_UPDATE_TEMPORAL_DONE,
	I2RND_SUB_VO_STAGE_TRIGGER_UPDATE_PERIOD,
	I2RND_SUB_VO_STAGE_MAXN,
} VSC_I2RND_VO_STAGE_TYPE_T;

typedef enum VSC_I2RND_TIMING_STAGE_TYPE
{
	I2RND_TIMING_STAGE_OFF = 0,
	I2RND_TIMING_STAGE_RESET_POINTER,
	I2RND_TIMING_STAGE_TRIGGER_SET_1_0,
	I2RND_TIMING_STAGE_SET_1_0_DONE,
	I2RND_TIMING_STAGE_MAXN,
} VSC_I2RND_TIMING_STAGE_TYPE_T;

typedef enum{
	_1_MAIN_0_SUB = 0,
	_1_MAIN_1_SUB,
	_1_MAIN_2_SUB,
	_1_MAIN_3_SUB,
	TIMING_MODE_MAX,
}_I2RND_TIMING_MODE_T;

typedef enum{
	I2RND_VO1_REFINE_OFF = 0,
	I2RND_S0_CONNECTED,
	I2RND_S1_REFINE_VO1,
	I2RND_VO1_REFINE_MAX,
}_I2RND_VO1_REFINE_STATUS_T;

typedef enum{
	I2RND_S0_IDOMAIN_STAGE_OFF = 0,
	I2RND_S0_IDOMAIN_STAGE_START,
	I2RND_S0_IDOMAIN_STAGE_DONE,
	I2RND_S0_IDOMAIN_STAGE_MAX,
}_I2RND_S0_IDOMAIN_STAGE_T;


typedef enum{
	ADAPTIVE_STREAM_OFF = 0,
	ADAPTIVE_STREAM_ON = 1,
	ADAPTIVE_AIR_MODE = 2,
	ADAPTIVE_MODE_MAX,
}_ADAPTIVE_MODE_TYPE_T;


typedef enum{
	HDMI_NON_4K120 = 0, //non 4k120
	HDMI_4K120_2_1 = 1,//two pixel mode hdmi2.1
	HDMI_4K120_2_0 = 2,//4k2k120 hdmi 2.0
}_HDMI_4K120_TYPE_T;

typedef struct _CINEMA_MODE_INFO{
	unsigned int cinema_mode_enable;
	unsigned int run_vo_cinema;
}CINEMA_MODE_INFO;

#endif



