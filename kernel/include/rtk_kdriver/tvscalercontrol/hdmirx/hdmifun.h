#ifndef _HDMI_FUN_H
#define _HDMI_FUN_H

#include <ioctrl/scaler/vfe_cmd_id.h> // for vfe_hdmi_vsi_t


/**********************************************************************************************
*
*   Marco or Definitions
*
**********************************************************************************************/

#define NEWBASE_FUNC //need to check
#define HDR10_MD_INFO_CHECK		1
#define HDMI_MEASURE_I3DDMA_SMART_FIT	1
#define HDMI_PI_ERR_DET	1

#define USE_DEFAULT_HDCP14      1//Enable HDCP temp tey for bring up

#define HDMI_WD_VIDEO_COND      _BIT0
#define HDMI_WD_AUDIO_COND      _BIT1
#define HDMI_WD_VSC_COND        _BIT2
#define HDMI_WD_ALL_COND        (HDMI_WD_VIDEO_COND | HDMI_WD_AUDIO_COND | HDMI_WD_VSC_COND)



/**********************************************************************************************
*
*   Enumerations or Structures
*
**********************************************************************************************/
typedef enum {
    HVF_NO,
    HVF_EXT,
    HVF_3D,
    HVF_RESERVED
}HDMI_HVF_E;

typedef enum {

    HDMI3D_FRAME_PACKING = 0,
    HDMI3D_FIELD_ALTERNATIVE = 1,
    HDMI3D_LINE_ALTERNATIVE = 2,
    HDMI3D_SIDE_BY_SIDE_FULL = 3,
    HDMI3D_L_DEPTH = 4,
    HDMI3D_L_DEPTH_GPX = 5,
    HDMI3D_TOP_AND_BOTTOM =6,
    HDMI3D_FRAMESEQUENCE=7,
    HDMI3D_SIDE_BY_SIDE_HALF = 8,
    // --- new 3D format ---
    HDMI3D_LINE_BY_LINE = 9,
    HDMI3D_VERTICAL_STRIPE = 10,
    HDMI3D_CHECKER_BOARD = 11,
    HDMI3D_REALID = 12,
    HDMI3D_SENSIO = 13,
    // -------------------
    HDMI3D_RSV1,
    HDMI3D_2D_ONLY,
    HDMI3D_UNKOWN = 0xFFFFFFFF
} HDMI_3D_T;

#if 0
typedef enum {

    HDMI_PTG_MODE_BACKGROUD_ONLY,
    HDMI_PTG_MODE_H_COLOR_BAR,
    HDMI_PTG_MODE_V_COLOR_BAR,
    HDMI_PTG_MODE_H_GREDIENT,
    HDMI_PTG_MODE_V_GREDIENT,
    HDMI_PTG_MODE_HV_GREDIENT,
    HDMI_PTG_MODE_BITMAP,
    HDMI_PTG_CROSS_COLOR_SEQ0,
    HDMI_PTG_CROSS_COLOR_SEQ1,
    HDMI_PTG_CROSS_COLOR_SEQ2,
    HDMI_PTG_CROSS_COLOR_SEQ3,

} HDMI_PTG_MODE_T;
#endif
typedef enum _HDMI_TABLE_TYPE{
              HDMI_CHANNEL0 ,
    HDMI_CHANNEL1,
    HDMI_CHANNEL2,
    HDMI_CHANNEL3,
    HDMI_CHANNEL,
    HDMI_HDCP_KEY_TABLE,
    CBUS_TABLE,
}HDMI_TABLE_TYPE;

//typedef void (*HDMI_MUX_ADVANCED_FUNCTION)(unsigned char index, unsigned int Value_1, unsigned int Value_2, unsigned int Value_3);


typedef  unsigned char HDMI_bool;

typedef enum {
    MODE_DVI    = 0x0,    // DVI mode
    MODE_HDMI   = 0x1,    // HDMI 1.4/2.0
    MODE_HDMI21 = 0x2,    // HDMI 2.1
    MODE_UNKNOW = 0x3,
} HDMI_DVI_MODE_T;

typedef enum {
    MODE_RAG_DEFAULT    = 0x0,
    MODE_RAG_LIMIT  ,
    MODE_RAG_FULL  ,
    MODE_RAG_UNKNOW
} HDMI_RGB_YUV_RANGE_MODE_T;

typedef enum {
    COLOR_RGB   = 0x00,
    COLOR_YUV422,
    COLOR_YUV444,
    COLOR_YUV420,
    COLOR_UNKNOW
} HDMI_COLOR_SPACE_T;

typedef enum {

    HDMI_COLOR_DEPTH_8B =0,
    HDMI_COLOR_DEPTH_10B,
    HDMI_COLOR_DEPTH_12B,
    HDMI_COLOR_DEPTH_16B,

} HDMI_COLOR_DEPTH_T;


typedef enum _HDMI_OSD_MODE{
    HDMI_OSD_MODE_AUTO= 0,
    HDMI_OSD_MODE_HDMI,
    HDMI_OSD_MODE_DVI,
    HDMI_OSD_MODE_NO_SETTING
} HDMI_OSD_MODE;


typedef enum {
    HDMI_COLORIMETRY_NOSPECIFIED = 0,
    HDMI_COLORIMETRY_601,
    HDMI_COLORIMETRY_709,
    HDMI_COLORIMETRY_XYYCC601,
    HDMI_COLORIMETRY_XYYCC709,
    HDMI_COLORIMETRY_SYCC601,
    HDMI_COLORIMETRY_ADOBE_YCC601,
    HDMI_COLORIMETRY_ADOBE_RGB,
} HDMI_COLORIMETRY_T;


typedef struct  {
    char *name;
    int progressive;
    unsigned int h_act_len;
    unsigned int v_act_len;
    unsigned int lr_v_act_len;
    unsigned int v_active_space1;
    unsigned int v_active_space2;
}HDMI_ACTIVE_SPACE_TABLE_T;



typedef struct
{
    unsigned char   VSIF_TypeCode;
    unsigned char   VSIF_Version;
    unsigned char   Length;
    unsigned char   Checksum;
    unsigned char   Reg_ID[HAL_VFE_HDMI_VENDOR_SPECIFIC_REGID_LEN];
    unsigned char   Payload[HAL_VFE_HDMI_VENDOR_SPECIFIC_PAYLOAD_LEN];
}HDMI_VSI_T;

typedef struct
{
    unsigned char type_code;
    unsigned char ver;
    unsigned char len;
    unsigned int    S:2;
    unsigned int    B:2;
    unsigned int    A:1;
    unsigned int    Y:3;
    unsigned int    R:4;
    unsigned int    M:2;
    unsigned int    C:2;
    unsigned int    SC:2;
    unsigned int    Q:2;
    unsigned int    EC:3;
    unsigned int    ITC:1;
    unsigned int    VIC:8;
    unsigned int    PR:4;
    unsigned int    CN:2;
    unsigned int    YQ:2;
    unsigned char   ETB07_00;
    unsigned char   ETB15_08;
    unsigned char   SBB07_00;
    unsigned char   SBB15_08;
    unsigned char   ELB07_00;
    unsigned char   ELB15_08;
    unsigned char   SRB07_00;
    unsigned char   SRB15_08;
}HDMI_AVI_T;

typedef struct
{
    unsigned char   type_code;
    unsigned char   ver;
    unsigned char   len;
    unsigned char   VendorName[8];
    unsigned char   ProductDesc[16];
    unsigned char   SourceInfo;
}HDMI_SPD_T;

typedef struct
{
    unsigned char type_code;
    unsigned char ver;
    unsigned char len;
    unsigned int    CC:3;
    unsigned int    F13:1;
    unsigned int    CT:4;
    unsigned int    SS:2;
    unsigned int    SF:3;
    unsigned int    F27_25:3;
    unsigned int    CXT:5;
    unsigned int    F37_35:3;
    unsigned int    CA:8;
    unsigned int    LFEPBL:2;
    unsigned int    F52:1;
    unsigned int    LSV:4;
    unsigned int    DM_INH:1;
    unsigned char   F67_60;
    unsigned char   F77_70;
    unsigned char   F87_80;
    unsigned char   F97_90;
    unsigned char   F107_100;
}HDMI_AUDIO_T;

typedef struct
{
        unsigned char type_code;
        unsigned char ver;
        unsigned char len;
        unsigned char  eEOTFtype;
        unsigned char  eMeta_Desc;
        unsigned short display_primaries_x0;
        unsigned short display_primaries_y0;
        unsigned short display_primaries_x1;
        unsigned short display_primaries_y1;
        unsigned short display_primaries_x2;
        unsigned short display_primaries_y2;
        unsigned short white_point_x;
        unsigned short white_point_y;
        unsigned short max_display_mastering_luminance;
        unsigned short min_display_mastering_luminance;
        unsigned short maximum_content_light_level;
        unsigned short maximum_frame_average_light_level;
        unsigned char  reserved;
}__attribute__((packed)) HDMI_DRM_T;

typedef struct
{
    unsigned char   type_code;          //HB0[7:0]
    unsigned char   First;              //HB1[7]
    unsigned char   Last;               //HB1[6]
    unsigned char   Sequence_Index;	//HB2[7:0]
    unsigned char   New;                //PB0[7]
    unsigned char   End;                //PB0[6]
    unsigned char   DS_Type;            //PB0[5:4]
    unsigned char   AFR;                //PB0[3]
    unsigned char   VFR;                //PB0[2]
    unsigned char   Sync;               //PB0[1]
    unsigned char   Organization_ID;    //PB2[7:0]
    unsigned short  Data_Set_Tag;       //PB3[7:0]:MSB, PB4[7:0]:LSB
    unsigned short  Data_Set_Length;    //PB5[7:0]:MSB, PB6[7:0]:LSB
    unsigned char   MD[273];            //size = 21 + (Sequence_Index - 1)*28
                                        //Max will have 7133 byte
                                        //if Sequence_Index = 0, First = 1, PB27[7:0] PB7[7:0], MD[20] ~ MD[0]
                                        //if First = 0, PB27[7:0] PB0[7:0], MD[27] ~ MD[0]
                                        //The 273 is short time patch, need to discuss
}__attribute__((packed)) HDMI_EM_T;

typedef struct
{
    unsigned short   Extended_InfoFrame;                //Data_Set_Tag
    unsigned char    Extended_InfoFrame_Data[21];       //MD0 ~ MD20
    unsigned char    reserved;
}__attribute__((packed)) HDMI_EM_HDR_DYNAMIC_T;

typedef struct
{
    unsigned char    FVA_Factor_M1;     //MD0[7:4]
    unsigned char    M_CONST;           //MD0[1]
    unsigned char    VRR_EN;            //MD0[0]
    unsigned char    Base_Vfront;       //MD1[7:0]
    unsigned char    RB;                //MD2[2]
    unsigned short   Base_Refresh_Rate; //MD2[1:0] ~ MD3[7:0]
    unsigned char    reserved;
}__attribute__((packed)) HDMI_EM_VTEM_T;

typedef struct
{
    unsigned char version;          // version 1 / version 2

    // PB6
    unsigned char freesync_supported : 1;
    unsigned char freesync_enabled : 1;
    unsigned char freesync_activate : 1;
    unsigned char native_color_space_active : 1;    // version==2 (PB9 present)
    unsigned char brightness_control_active : 1;    // version==2 (PB10 present)
    unsigned char local_diming_disalbe : 1;         // version==2
    unsigned char reserved_pb6 : 2;
    unsigned char min_refresh_rate;                 // PB7
    unsigned char max_refresh_rate;                 // PB8

    // PB9 : only valid when native_color_space_active is 1  (version==2)
    unsigned char srgb_eotf_active : 1;
    unsigned char bt709_eotf_active : 1;
    unsigned char gamma_2p2_eotf_active : 1;
    unsigned char gamma_2p6_eotf_active : 1;
    unsigned char reserved_pb9 : 4;

    // PB10 : only valid when native_color_space_active is 1  (version==2)
    unsigned char brightness_control;

}__attribute__((packed)) HDMI_AMD_FREE_SYNC_INFO;

/**********************************************************************************************
*
*   Variables
*
**********************************************************************************************/
// Should Not declare variables here






/**********************************************************************************************
*
*   External Funtion Declarations
*
**********************************************************************************************/

// Generic
extern HDMI_DVI_MODE_T           drvif_Hdmi_GetHDMIMode(void);            // Get HDMI mode
extern HDMI_bool                 drvif_Hdmi_WatchDogApply(unsigned char Enable, unsigned char Condition);
extern HDMI_bool                 drvif_Hdmi_CheckMode(void);
extern unsigned char             drvif_Hdmi_GetCurrentPhysicalPort(void);
extern void                      drvif_Hdmi_OutputDisable(unsigned char on_off);
extern char                      drvif_Hdmi_get_pcb_earc_port_index(void);

// MISC
extern void                      drvif_Hdmi_SetNoPolarityInverse(unsigned char on_off);
extern HDMI_bool                 drvif_Hdmi_IsHpdHigh(unsigned char port);
extern HDMI_bool                 drvif_Hdmi_Is5VHigh(unsigned char port);

// Video Related
extern HDMI_bool                 drvif_Hdmi_GetInterlace(void);
extern HDMI_COLOR_SPACE_T        drvif_Hdmi_GetColorSpace(void);
extern HDMI_COLORIMETRY_T        drvif_Hdmi_GetColorimetry(void);
extern HDMI_COLOR_DEPTH_T        drvif_Hdmi_GetColorDepth(void);
extern HDMI_RGB_YUV_RANGE_MODE_T drvif_Hdmi_GetRgbYuvRangeMode(void);
extern HDMI_3D_T                 drvif_Hdmi_GetReal3DFomat(void);
extern HDMI_bool                 drvif_Hdmi_CheckStableBeforeDisplay(void);
extern HDMI_bool                 drvif_Hdmi_IsAvmute(void);

// Audio Related
extern char                      drvif_Hdmi_IsAudioLock(void);


// Info Packet Related
extern HDMI_bool                 drvif_Hdmi_GetVsInfoFrame(HDMI_VSI_T *pVsInfo);
extern HDMI_bool                 drvif_Hdmi_GetDolbyVsInfoFrame(vfe_hdmi_vsi_t *info_frame);
extern HDMI_bool                 drvif_Hdmi_GetHDR10pVsInfoFrame(vfe_hdmi_vsi_t *info_frame);
extern HDMI_bool                 drvif_Hdmi_GetAviInfoFrame(HDMI_AVI_T *pAviInfo);
extern HDMI_bool                 drvif_Hdmi_GetSpdInfoFrame(HDMI_SPD_T *pSpdInfo);
extern HDMI_bool                 drvif_Hdmi_GetDrmInfoFrame(HDMI_DRM_T *pDrmInfo);
extern HDMI_bool                 drvif_Hdmi_GetAudioInfoFrame(HDMI_AUDIO_T *pAudioInfo);
extern HDMI_bool                 drvif_Hdmi_IsDRMInfoReady(void);
extern HDMI_bool                 drvif_Hdmi_GetVRREnable(void);
extern HDMI_bool                 drvif_Hdmi_GetALLMEnable(void);
extern HDMI_bool                 drvif_Hdmi_GetAMDFreeSyncStatus(HDMI_AMD_FREE_SYNC_INFO* p_info);
extern HDMI_bool                 drvif_Hdmi_GetAMDFreeSyncEnable(void);

// HDCP related
extern HDMI_bool                 drvif_Hdmi_HdcpEnabled(void);


/**********************************************************************************************
*
*   Leagacy API wrapper (The following API was still in-used, so we add io wrapper to covert it to new APIs)
*
**********************************************************************************************/

#define drvif_IsHDMI()            ((drvif_Hdmi_GetHDMIMode()==MODE_DVI) ? MODE_DVI : MODE_HDMI)  // for backward compatible
#define drvif_IsRGB_YUV_RANGE()   drvif_Hdmi_GetRgbYuvRangeMode()
#define hdmi_is_drm_info_ready()  drvif_Hdmi_IsDRMInfoReady()


#endif //_HDMI_FUN_H
