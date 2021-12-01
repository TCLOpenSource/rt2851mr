#ifndef _VBE_DEVICE_ID_H_
#define _VBE_DEVICE_ID_H_

#ifndef SUINT8
typedef signed char    SINT8;
#endif
#ifndef SUINT16
typedef signed short   SINT16;
#endif
#ifndef SUINT32
typedef signed int     SINT32;
#endif


#ifndef UINT8
typedef unsigned char  UINT8;
#endif
#ifndef UINT16
typedef unsigned short UINT16;
#endif
#ifndef UINT32
typedef unsigned int   UINT32;
#endif

#ifndef BOOLEAN
#ifndef _EMUL_WIN
 typedef unsigned int			 __BOOLEAN;
#define BOOLEAN __BOOLEAN
#else
 typedef unsigned char		 __BOOLEAN;
#define BOOLEAN __BOOLEAN
#endif
#endif

/************************************************************************
 *  Definitions
 ************************************************************************/

/**
  * Panel interface
  */
 typedef enum {
	KADP_DISP_PANEL_EPI = 0,
	KADP_DISP_PANEL_LVDS,
	KADP_DISP_PANEL_Vx1,
	KADP_DISP_PANEL_CEDS,
	KADP_DISP_PANEL_INTERFACE_MAX
 }KADP_DISP_PANEL_INTERFACE_T;

 /*** EPI Panel type*/
 typedef enum {
 	KADP_DISP_EPI_PANEL_V12 = 0,
 	KADP_DISP_EPI_PANEL_V13,
 	KADP_DISP_EPI_PANEL_V14,
 	KADP_DISP_EPI_PANEL_MAX
 } KADP_DISP_EPI_PANEL_TYPE_T;

 /** * Panel size Enum.*/
 typedef enum {
     KADP_DISP_PANEL_INCH_22 = 0,
     KADP_DISP_PANEL_INCH_23,
     KADP_DISP_PANEL_INCH_24,
     KADP_DISP_PANEL_INCH_26,
     KADP_DISP_PANEL_INCH_27,
     KADP_DISP_PANEL_INCH_28,
     KADP_DISP_PANEL_INCH_32,
     KADP_DISP_PANEL_INCH_39,
     KADP_DISP_PANEL_INCH_40,
     KADP_DISP_PANEL_INCH_42,
     KADP_DISP_PANEL_INCH_43,
     KADP_DISP_PANEL_INCH_47,
     KADP_DISP_PANEL_INCH_49,
     KADP_DISP_PANEL_INCH_50,
     KADP_DISP_PANEL_INCH_55,
     KADP_DISP_PANEL_INCH_58,
     KADP_DISP_PANEL_INCH_60,
     KADP_DISP_PANEL_INCH_65,
     KADP_DISP_PANEL_INCH_70,
     KADP_DISP_PANEL_INCH_75,
     KADP_DISP_PANEL_INCH_77,
     KADP_DISP_PANEL_INCH_79,
     KADP_DISP_PANEL_INCH_84,
     KADP_DISP_PANEL_INCH_86,
     KADP_DISP_PANEL_INCH_98,
     KADP_DISP_PANEL_INCH_105,
     KADP_DISP_PANEL_INCH_BASE
 } KADP_DISP_PANEL_INCH_T;

 /** * Backlight Type Enum.*/
 typedef enum {
	KADP_DISP_BL_DIRECT_M = 0,
 	KADP_DISP_BL_DIRECT_L,
 	KADP_DISP_BL_EDGE_LED,
 	KADP_DISP_BL_ALEF_LED,
 	KADP_DISP_BL_OLED,
 	KADP_DISP_BL_END
} KADP_DISP_BACKLIGHT_TYPE_T;

 typedef enum {
	KADP_DISP_LCD_PANEL_MAKER_LGD = 0,
	KADP_DISP_LCD_PANEL_MAKER_CMI,
	KADP_DISP_LCD_PANEL_MAKER_AUO,
	KADP_DISP_LCD_PANEL_MAKER_SHARP,
	KADP_DISP_LCD_PANEL_MAKER_IPS,
	KADP_DISP_LCD_PANEL_MAKER_BOE,
	KADP_DISP_LCD_PANEL_MAKER_CSOT,
	KADP_DISP_LCD_PANEL_MAKER_INNOLUX,
	KADP_DISP_LCD_PANEL_MAKER_LGD_M,
	KADP_DISP_PDP_PANEL_MAKER_LGE,
	KADP_DISP_PANEL_MAKER_NUM,
 }KADP_DISP_PANEL_MAKER_T;

 /*** Panel Led_bar Type Enum.*/
 typedef enum {
	 KADP_DISP_LED_BAR_6 = 0,
	 KADP_DISP_LED_BAR_12,
	 KADP_DISP_LED_BAR_16,
	 KADP_DISP_LED_BAR_20,
	 KADP_DISP_LED_BAR_240,
	 KADP_DISP_LED_BAR_320,
	 KADP_DISP_LED_BAR_24,
	 KADP_DISP_LED_BAR_V8,
	 KADP_DISP_LED_BAR_MAX,
 } KADP_DISP_LED_BAR_TYPE_T;

  typedef enum {
	  KADP_DISP_PANEL_RESOLUTION_1024X768 = 0,
	  KADP_DISP_PANEL_RESOLUTION_1280X720,
	  KADP_DISP_PANEL_RESOLUTION_1366X768,
	  KADP_DISP_PANEL_RESOLUTION_1920X1080,
	  KADP_DISP_PANEL_RESOLUTION_2560X1080,
	  KADP_DISP_PANEL_RESOLUTION_3840X2160,
	  KADP_DISP_PANEL_RESOLUTION_5120X2160,
	  KADP_DISP_PANEL_RESOLUTION_7680X4320,
	  KADP_DISP_PANEL_RESOLUTION_MAX
 } KADP_DISP_PANEL_RESOLUTION_T;

  typedef enum {
	 KADP_DISP_PANEL_NONE  = 0,
	 KADP_DISP_PANEL_V12,
	 KADP_DISP_PANEL_V13,
	 KADP_DISP_PANEL_V14,
	 KADP_DISP_PANEL_V14_32inch,
	 KADP_DISP_PANEL_V15,
	 KADP_DISP_PANEL_V16,
	 KADP_DISP_PANEL_V17,
	 KADP_DISP_PANEL_MAX,
 } KADP_DISP_PANEL_VERSION_T;

  typedef enum {
	 KADP_DISP_FRC_CHIP_NONE   = 0,
	 KADP_DISP_FRC_CHIP_INTERNAL,
	 KADP_DISP_FRC_CHIP_UD_BE_URSA9,
	 KADP_DISP_FRC_CHIP_UD_BE_URSA9P,
	 KADP_DISP_FRC_CHIP_UD_BE_URSA11,
	 KADP_DISP_FRC_CHIP_UD_BE_URSA11P,
	 KADP_DISP_FRC_CHIP_UD_BE_F16,
	 KADP_DISP_FRC_CHIP_UD_BE_MAX,
 } KADP_DISP_FRC_CHIP_TYPE_T ;

  typedef enum {
	  KADP_DISP_CELL_TYPE_RGB=0,
	  KADP_DISP_CELL_TYPE_RGBW,
	  KADP_DISP_CELL_TYPE_MAX
 }KADP_DISP_CELL_TYPE_T;

 /**
  * panel type.
  *
  * @see
 */
 typedef enum
 {
	 KADP_DISP_PANEL_TYPE_LCD,
	 KADP_DISP_PANEL_TYPE_LCD_TCON,	 // shjang_090904
	 KADP_DISP_PANEL_TYPE_LCD_FRC,

	 KADP_DISP_PANEL_TYPE_PDP,
	 KADP_DISP_PANEL_TYPE_LED,
	 KADP_DISP_PANEL_TYPE_OLED,

	 KADP_DISP_PANEL_TYPE_NUM,
 }KADP_DISP_PANEL_TYPE_T;

 /**
  * LVDS bit depth.
  *
  * @see
 */
 typedef enum
 {
	 KADP_DISP_COLOR_DEPTH_8BIT,
	 KADP_DISP_COLOR_DEPTH_10BIT,
	 KADP_DISP_COLOR_DEPTH_NUM,
 } KADP_DISP_COLOR_DEPTH_T;

 /**
  * LVDS chanel info.
  *
  * @see
 */
 typedef enum
 {
	 KADP_DISP_LVDS_PIXEL_SINGLE,  //HD 60hz
	 KADP_DISP_LVDS_PIXEL_DUAL,	 //FHD 60hz
	 KADP_DISP_LVDS_PIXEL_QUAD,	 //FHD 120hz
	 KADP_DISP_LVDS_PIXEL_NUM,
 } KADP_DISP_LVDS_PIXEL_T;

 /**
  * LVDS type.
  *
  * @see
 */
 typedef enum
 {
	 KADP_DISP_LVDS_SELECT_VESA,
	 KADP_DISP_LVDS_SELECT_JEIDA,
	 KADP_DISP_LVDS_SELECT_NUM,
 } KADP_DISP_LVDS_SELECT_T;

 typedef enum
 {
	 KADP_DISP_OUTPUT_LANE_BANDWIDTH_DEFAULT = 0,
	 KADP_DISP_OUTPUT_LANE_BANDWIDTH_1_5G,
	 KADP_DISP_OUTPUT_LANE_BANDWIDTH_2_1G,
	 KADP_DISP_OUTPUT_LANE_BANDWIDTH_3_0G,
	 KADP_DISP_OUTPUT_LANE_BANDWIDTH_MAX,
 } KADP_DISP_OUTPUT_LANE_BANDWIDTH_T;

 typedef enum
 {
	 KADP_DISP_PANEL_FRAMERATE_60Hz = 0,
	 KADP_DISP_PANEL_FRAMERATE_120Hz
 }KADP_DISP_PANEL_FRAMERATE_T;

 /**
 * Display User Option
 */
 typedef union {
	UINT32 all;
	struct
	{
	   UINT32
	   SocOptionBIT0 :1,
	   SocOptionBIT1 :1,
	   SocOptionBIT2 :1,
	   SocOptionBIT3 :1,
	   SocOptionBIT4 :1,
	   SocOptionBIT5 :1,
	   SocOptionBIT6 :1,
	   SocOptionBIT7 :1,
	   SocOptionBIT8 :1,
	   SocOptionBIT9 :1,
	   SocOptionBIT10	 :1,
	   SocOptionBIT11	 :1,
	   SocOptionBIT12	 :1,
	   SocOptionBIT13	 :1,
	   SocOptionBIT14	 :1,
	   SocOptionBIT15	 :1,
	   SocOptionBIT16	 :1,
	   SocOptionBIT17	 :1,
	   SocOptionBIT18	 :1,
	   SocOptionBIT19	 :1,
	   SocOptionBIT20	 :1,
	   SocOptionBIT21	 :1,
	   SocOptionBIT22	 :1,
	   SocOptionBIT23	 :1,
	   SocOptionBIT24	 :1,
	   SocOptionBIT25	 :1,
	   SocOptionBIT26	 :1,
	   SocOptionBIT27	 :1,
	   SocOptionBIT28	 :1,
	   SocOptionBIT29	 :1,
	   SocOptionBIT30	 :1,
	   SocOptionBIT31	 :1;
	} flags;
 } KADP_DISP_USER_OPTION_T;

 /**
* Display Output Resolution
*/
typedef struct {
 	UINT32 video_width;
 	UINT32 video_height;
 	UINT32 osd_width;
 	UINT32 osd_height;
} KADP_DISP_OUTPUT_RESOLUTION_T;

 /*** Panel information*/
typedef struct
{
	KADP_DISP_PANEL_INCH_T  panel_inch;
	KADP_DISP_BACKLIGHT_TYPE_T panel_bl_type;
	KADP_DISP_PANEL_MAKER_T  panel_maker;
	KADP_DISP_LED_BAR_TYPE_T led_bar_type;
    KADP_DISP_PANEL_INTERFACE_T panelInterface;
    KADP_DISP_PANEL_RESOLUTION_T panelResolution;
	KADP_DISP_PANEL_VERSION_T panel_version;
	KADP_DISP_FRC_CHIP_TYPE_T frc_type;
    KADP_DISP_CELL_TYPE_T cell_type;
	KADP_DISP_OUTPUT_RESOLUTION_T disp_out_resolution;
	KADP_DISP_COLOR_DEPTH_T lvds_bit_mode;
	KADP_DISP_LVDS_SELECT_T lvds_type;
    KADP_DISP_OUTPUT_LANE_BANDWIDTH_T disp_out_lane_bw;
    KADP_DISP_PANEL_FRAMERATE_T panelFrameRate;
    KADP_DISP_USER_OPTION_T user_specific_option;
}KADP_DISP_PANEL_INFO_T;


 /**
  * panel attribute.
  *
  * @see
 */
 typedef struct
 {
	 KADP_DISP_PANEL_TYPE_T	 ePanelType; /**PANEL_TYPE_T */
	 KADP_DISP_COLOR_DEPTH_T	 eColorDepth;	 /**COLOR_DEPTH_T */
	 KADP_DISP_LVDS_SELECT_T	 eLVDSSelect;	 /**LVDS_SELECT_T */
	 KADP_DISP_LVDS_PIXEL_T	 eLVDSPixel; /**LVDS_PIXEL_T */
	 KADP_DISP_PANEL_INTERFACE_T	 ePanelInterface;/**PANEL_INTERFACE_T*/
	 UINT8 eFRCType;/**FRC_CHIP_TYPE_T*/

	 SINT32 panelResolution;	 /** */
	 UINT8 ePanelInch;		 /** */
	 //------------ signal timing -----------------
	 //UINT16 TypDclkHz;		 /** panel D clock*/
	 UINT16 horizTypPeriod; 	 /** panel Horizon Period */
	 UINT16 vertTypPeriod60Hz;	 /** panel Vertical Period for NTSC*/
	 UINT8 vertSyncWidth60Hz;	 /** panel Vertical Sync Width for NTSC*/
	 UINT8 vertBackPorch60Hz;	 /** panel Vertical Back Porch for NTSC*/
	 UINT8 horizSyncWidth60Hz;	 /** panel Horizontal Sync Width for NTSC*/
	 UINT8 horizBackPorch60Hz;	 /** panel Horizontal Back Porch for NTSC*/
	 UINT16 vertTypPeriod50Hz;	 /** panel Vertical Period for PAL*/
	 UINT8 vertSyncWidth50Hz;	 /** panel Vertical Sync Width for PAL*/
	 UINT8 vertBackPorch50Hz;	 /** panel Vertical Back Porch for PAL*/
	 UINT8 horizSyncWidth50Hz;	 /** panel Horizontal Sync Width for PAL*/
	 UINT8 horizBackPorch50Hz;	 /** panel Horizontal Back Porch for PAL*/
	 UINT16 vertTypPeriod48Hz;	 /** panel Vertical Period for 48Hz*/
	 UINT8 vertSyncWidth48Hz;	 /** panel Vertical Sync Width for 48Hz*/
	 UINT8 vertBackPorch48Hz;	 /** panel Vertical Back Porch for 48Hz*/
	 UINT8 horizSyncWidth48Hz;	 /** panel Horizontal Sync Width for 48Hz*/
	 UINT8 horizBackPorch48Hz;	 /** panel Horizontal Back Porch for 48Hz*/
 }KADP_DISP_PANEL_ATTRIBUTE_T;


/*-----------------------------------------------------------------------------
	Global Variables & Function Prototypes Declarations
------------------------------------------------------------------------------*/

/**
 * type of file index.
 *
*/
typedef enum
{
	KADP_VBE_FD_DISP = 0,
	KADP_VBE_FD_DISP_SR,
	KADP_VBE_FD_DISP_TCON,
	KADP_VBE_FD_DISP_AVE,
	KADP_VBE_FD_DISP_TRIDFMT,
	KADP_VBE_FD_MAX,
}KADP_VBE_FD_T;

 typedef enum
{
	KADP_DISP_WINDOW_0,
	KADP_DISP_WINDOW_1,
} KADP_DISP_WINDOW_T;

 typedef enum
{
	KADP_DISP_TCON_DITHER_TRUNC		= 0,
	KADP_DISP_TCON_DITHER_ROUND,
	KADP_DISP_TCON_DITHER_RANDOM
} KADP_DISP_TCON_DITHER_T;

typedef enum
{
	KADP_VBE_DISP_TCON_LVDS_JEIDA = 0,
	KADP_VBE_DISP_TCON_LVDS_VESA,
	KADP_VBE_DISP_TCON_LVDS_MAXNUM
} KADP_VBE_DISP_TCON_LVDS_TYPE_T;

typedef enum
{
	KADP_VBE_AVE_VBI_PAL_TELETEXT = 0, /**< VBI teletxet */
	KADP_VBE_AVE_VBI_PAL_WSS,			/**< VBI wss */
	KADP_VBE_AVE_VBI_PAL_VPS,			/**< VBI vps */
	KADP_VBE_AVE_VBI_NTSC_CC608,		/**< VBI cc608 */
	KADP_VBE_AVE_VBI_NTSC_WSS, 		/**< VBI NTSC wss */ // 2013.04.25. yongsu.yoo
//	VIDEO_DDI_VBI_DVB_TELETEXT,
//	VIDEO_DDI_VBI_DVB_SUBTITLE,
//	VIDEO_DDI_VBI_ATSC_CC608,
//	VIDEO_DDI_VBI_ATSC_CC708,
	KADP_VBE_AVE_VBI_ALL,
	KADP_VBE_AVE_VBI_MAX_SERVICE,		/**< VBI max */
} KADP_VBE_AVE_VBI_TYPE_T;

typedef enum
{
    KADP_VSC_SCALER0,
	KADP_VSC_SCALER1,
	KADP_TUNER_OUTPUT,
	KADP_VDEC0,	//LM15U
	KADP_VDEC1,	//LM15U
}KADP_VBE_AVE_INPUT_INDEX;

typedef enum
{
	KADP_ATV_MODE_WATCHING,	///< Watching ATV or Recording (CVD Clamping ON)
	KADP_ATV_MODE_NOT_WATCHING,	///< CVD powerdown or ATV is not selected. (Buffer Clamping ON)
	KADP_ATV_MODE_NOT_DEFINED,	///< ATV Mode not defined
	KADP_ATV_MODE_MAX,
}KADP_VBE_ATV_Mode_t;

/**
 * Define 3D Input LR Type.
 */
#ifndef KADP_TRIDTV_INPUT_LR_SEQ_T
typedef enum
{
	KADP_VBE_INPUT_LR_SEQ = 0,
	KADP_VBE_INPUT_RL_SEQ,
	KADP_VBE_INPUT_LR_MAX,
} KADP_TRIDTV_INPUT_LR_SEQ_T;
#endif

#ifndef KADP_TRIDTV_INPUT_TYPE_T
typedef enum
{
	/*	Drive?? ?? value ?? ??.	*/
	KADP_VBE_INPUT_TYPE_3DOFF = 0,			//VIDEO_3D_FORMAT_2D,

	//interim format - half
	KADP_VBE_INPUT_TYPE_TOPNBOTTOM,		//VIDEO_3D_FORMAT_TOP_BOTTOM,
	KADP_VBE_INPUT_TYPE_SIDEBYSIDE,		//VIDEO_3D_FORMAT_SIDEBYSIDE_HALF,
	KADP_VBE_INPUT_TYPE_CHECKERBOARD,	//VIDEO_3D_FORMAT_CHECKER_BOARD,
	KADP_VBE_INPUT_TYPE_FRAMESEQ,		//VIDEO_3D_FORMAT_FRAME_SEQ
	KADP_VBE_INPUT_TYPE_COLUMN_INTERLEAVE,	/**< for H.264*/
	KADP_VBE_INPUT_TYPE_LINE_INTERLEAVE_HALF,	/**< for H.264*/

	//Full format
	KADP_VBE_INPUT_TYPE_FRAMEPAC,			//VIDEO_3D_FORMAT_FRAME_PACKING
	KADP_VBE_INPUT_TYPE_FIELD_ALTERNATIVE,	//VIDEO_3D_FORMAT_FIELD_ALTERNATIVE
	KADP_VBE_INPUT_TYPE_LINE_ALTERNATIVE,	//VIDEO_3D_FORMAT_LINE_ALTERNATIVE
	KADP_VBE_INPUT_TYPE_SIDEBYSIDE_FULL,		//VIDEO_3D_FORMAT_SIDEBYSIDE_FULL,
	KADP_VBE_INPUT_TYPE_DUALSTREAM, 	/**< Full format*/

	/*	Drive?? ?? value ?? ??. */
	KADP_VBE_INPUT_TYPE_2DTO3D,			//VIDEO_3D_FORMAT_2DTO3D,

	KADP_VBE_INPUT_TYPE_MAX,
}KADP_TRIDTV_INPUT_TYPE_T;
#endif

/**
 * Define 3D Input Freq. (MAIN SOC OUTPUT FREQ TYPE= FORMATTER INPUT FREQ TYPE)
 */

typedef enum
{
	//scaler output frame rate.
	KADP_VBE_INPUT_FREQ_24HZ = 0,
	KADP_VBE_INPUT_FREQ_30HZ,
	KADP_VBE_INPUT_FREQ_48HZ,
	KADP_VBE_INPUT_FREQ_50HZ,
	KADP_VBE_INPUT_FREQ_60HZ,

	KADP_VBE_INPUT_FREQ_MAX,

} KADP_TRIDTV_INPUT_FREQ_T;


/**
 * Define 3D Output LR Type.
 */
typedef enum
{
	KADP_VBE_OUTPUT_RL_SEQ = 0,
	KADP_VBE_OUTPUT_LR_SEQ,
	KADP_VBE_OUTPUT_LR_MAX,
} KADP_TRIDTV_OUTPUT_LR_SEQ_T;


/**
 * Define 3D Output Type.
 */
typedef enum
{
	KADP_VBE_OUTPUT_TYPE_DUAL = 0,
	KADP_VBE_OUTPUT_TYPE_INTERIM,
	KADP_VBE_OUTPUT_TYPE_FRAMESEQ,
	KADP_VBE_OUTPUT_TYPE_FRAMESEQ_LRLR, //60Hz/120Hz/240Hz output
	KADP_VBE_OUTPUT_TYPE_FRAMESEQ_LLRR, //120Hz/240Hz output
	KADP_VBE_OUTPUT_TYPE_FRAMESEQ_LBRB, //240Hz
	KADP_VBE_OUTPUT_TYPE_FRAMESEQ_LURU, //240Hz
	KADP_VBE_OUTPUT_TYPE_LINEINTERLEAVED,
	KADP_VBE_OUTPUT_TYPE_MAX,
} KADP_TRIDTV_OUTPUT_TYPE_T;


/**
 * Define 3D Output Freq.
 */
typedef enum
{
	KADP_VBE_OUTPUT_FREQ_60HZ = 0,
	KADP_VBE_OUTPUT_FREQ_100HZ,
	KADP_VBE_OUTPUT_FREQ_120HZ,
	KADP_VBE_OUTPUT_FREQ_240HZ,
	KADP_VBE_OUTPUT_FREQ_50HZ,
	KADP_VBE_OUTPUT_FREQ_BYPASS,
	KADP_VBE_OUTPUT_FREQ_MAX,
} KADP_TRIDTV_OUTPUT_FREQ_T;


/**
 * Define 3D Cfg items.
 */
typedef enum
{
	KADP_VBE_TRIDTV_3DMODE_STATUS = 0,
	KADP_VBE_TRIDTV_3D_INPUT_TYPE,
	KADP_VBE_TRIDTV_3D_INPUT_LR_SEQ,
//	TRIDTV_3D_INPUT_FREQ,
#if 0
	TRIDTV_3D_OUTPUT_TYPE,
	TRIDTV_3D_OUTPUT_LR_SEQ,
	TRIDTV_3D_OUTPUT_FREQ,
#endif
	KADP_VBE_TRIDTV_CFG_ITEMS_MAX,
} KADP_TRIDTV_CFG_ITEMS_T;


 /**
 * Video Main SOC output type
 *
 */
#ifndef KADP_TRIDTV_3DMODE_FLAG_T
typedef enum
{
	KADP_VBE_TRIDTV_3DMODE_OFF= 0,
	KADP_VBE_TRIDTV_3DMODE_ON 	,
	KADP_VBE_TRIDTV_3DMODE_2DTO3D,
	KADP_VBE_TRIDTV_3DMODE_3DTO2D,
	KADP_VBE_TRIDTV_3DMODE_MAX,
} KADP_TRIDTV_3DMODE_FLAG_T;
#endif

#ifndef KADP_TRIDTV_SC_OUTPUT_TYPE_T
typedef enum
{
    KADP_VBE_SC_OUT_SINGLE_2D  = 0 ,///< single nomal
    KADP_VBE_SC_OUT_SINGLE_TB      ,///< top and bottom
    KADP_VBE_SC_OUT_SINGLE_SS      ,///< side by side
    KADP_VBE_SC_OUT_SINGLE_FS      ,///< Frame Sequential(Interleaving)

    KADP_VBE_SC_OUT_DUAL_FHD       ,///< dual screen
    KADP_VBE_SC_OUT_DUAL_TB        ,///< dual top and bottom for H13 internal type
    KADP_VBE_SC_OUT_DUAL_SS        ,///< dual side by side for H13 internal type
    KADP_VBE_SC_OUT_SINGLE_T       ,//<H13 DRIVE ?? SINGLE TOP ONLY>
    KADP_VBE_SC_OUT_MAX            ,//MAX
}KADP_TRIDTV_SC_OUTPUT_TYPE_T; // WebOS 1.0
#endif

typedef enum
{
    KADP_VBE_FMT_SINGLE_2D  = 0 ,///< single nomal
    KADP_VBE_FMT_SINGLE_TB      ,///< top and bottom
    KADP_VBE_FMT_SINGLE_SS      ,///< side by side
    KADP_VBE_FMT_SINGLE_FS      ,///< Frame Sequential(Interleaving)
    KADP_VBE_FMT_DUAL_FHD       ,///< dual screen
    KADP_VBE_FMT_DUAL_TB        ,///< dual top and bottom for H13 internal type
    KADP_VBE_FMT_DUAL_SS        ,///< dual side by side for H13 internal type
    KADP_VBE_FMT_SINGLE_T       ,//<H13 DRIVE ?? SINGLE TOP ONLY>
    KADP_VBE_FMT_SINGLE_LA	  ,///< line alternative >
    KADP_VBE_FMT_MAX            ,//MAX
}KADP_TRIDTV_FMT_IF_TYPE_T; // 3D formatter interface type (WebOS 1.5)

typedef enum
{
	KADP_VBE_KADP_WIN_MODE_MIN = 0,
	KADP_VBE_KADP_WIN_MODE_FULLSIZE = KADP_VBE_KADP_WIN_MODE_MIN,
	KADP_VBE_KADP_WIN_MODE_RESIZE,
	KADP_VBE_KADP_WIN_MODE_4BY3,
	KADP_VBE_KADP_WIN_MODE_MAXN,
} KADP_VBE_WIN_MODE_T;

 typedef struct {
	UINT8 b0; // Romcode_B0 or Version_B0
	UINT8 b1; // Romcode_B1 or Version_B1
	UINT8 b2; // Romcode_B2 or Version_B2
 } KADP_DISP_BOE_VERSION_T;

typedef enum{
	KADP_DISP_INNER_PTG_BLOCK_VGIP = 0,
	KADP_DISP_INNER_PTG_BLOCK_UZU,
	KADP_DISP_INNER_PTG_BLOCK_MTG,
	KADP_DISP_INNER_PTG_BLOCK_MEMC_INPUTMUX,
	KADP_DISP_INNER_PTG_BLOCK_MEMC_OUTPUTMUX,
	KADP_DISP_INNER_PTG_BLOCK_SFG,
	KADP_DISP_INNER_PTG_BLOCK_MAX,
} KADP_DISP_INNER_PTG_BLOCK_T;

typedef enum{
	KADP_DISP_INNER_PTG_TYPE_COLOR_R = 0,
	KADP_DISP_INNER_PTG_TYPE_COLOR_G,
	KADP_DISP_INNER_PTG_TYPE_COLOR_B,
	KADP_DISP_INNER_PTG_TYPE_COLOR_WHITE,
	KADP_DISP_INNER_PTG_TYPE_COLOR_BLACK,
	KADP_DISP_INNER_PTG_TYPE_RANDOM_GEN,
	KADP_DISP_INNER_PTG_TYPE_COLOR_BAR,
	KADP_DISP_INNER_PTG_TYPE_COLOR_MAX,
} KADP_DISP_INNER_PTG_TYPE_T;

 typedef struct {
	UINT8 bOnOff;
	KADP_DISP_INNER_PTG_BLOCK_T block;
	KADP_DISP_INNER_PTG_TYPE_T type;
 } KADP_DISP_INNER_PATTERN_CTRL_T;

 /*-----------------------------------------------------------------------------
	Global Type Definitions
------------------------------------------------------------------------------*/
typedef struct {
	BOOLEAN bEnable;
	UINT16 Percenct;
	UINT16 Period;
}KADP_VBE_DISP_SpreadSpectrum_T;

typedef struct{
	BOOLEAN bIsH;
	BOOLEAN bIsV;
}KADP_VBE_DISP_VideoMirror_T;

typedef enum{
	KADP_DISP_LOGO_LUMY_ADJUST_OFF = 0,
	KADP_DISP_LOGO_LUMY_ADJUST_LIGHT,
	KADP_DISP_LOGO_LUMY_ADJUST_STRONG,
	KADP_DISP_LOGO_LUMY_ADJUST_MAX
}KADP_DISP_LSR_ADJUST_MODE_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	KADP_DISP_LSR_ADJUST_MODE_T nStep;
	unsigned int pLSRTbl;
}KADP_LSR_ADJ_MODE_T;
#else
typedef struct
{
	KADP_DISP_LSR_ADJUST_MODE_T nStep;
	UINT32* pLSRTbl;
}KADP_LSR_ADJ_MODE_T;
#endif

/**
 * TSCIC data structure
 **/
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct {
	unsigned int u8pControlTbl;
	UINT32 u32Ctrlsize;
	unsigned int u32pTSCICTbl;
	UINT32 u32Tscicsize;
}KADP_DISP_PANEL_TSCIC_T;
#else
typedef struct {
	UINT8 *u8pControlTbl;
	UINT32 u32Ctrlsize;
	UINT32 *u32pTSCICTbl;
	UINT32 u32Tscicsize;
}KADP_DISP_PANEL_TSCIC_T;
#endif

typedef struct
{
	void* pRegisterSet;
	UINT8 nPanelMaker;
}KADP_MPLUS_REGISTER_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	unsigned int pAlphaTbl;
	UINT32 size;
}KADP_OSD_ALPHA_APL_T;
#else
typedef struct
{
	UINT32* pAlphaTbl;
	UINT32 size;
}KADP_OSD_ALPHA_APL_T;
#endif

typedef struct
{
	BOOLEAN bOnOff;
	UINT32* pLvlTbl;
	UINT32 size;
}KADP_OSD_RGB_LEVEL_T;

/**
 * panel attribute.
 *
 * @see
*/
typedef struct
{
   // Panel Signal Timing
   UINT32 MinDclkHz;			 /** Panel Min Dclk [KHz] */
   UINT32 TypDclkHz;			 /** Panel Typ Dclk [KHz] */
   UINT32 MaxDclkHz;			 /** Panel Max Dclk [KHz] */
   UINT16 horizTypPeriod;	 /** panel Horizon Period */
   UINT16 vertTypPeriod60Hz;	 /** panel Vertical Period for NTSC*/
   UINT8 vertSyncWidth60Hz; 	 /** panel Vertical Sync Width for NTSC*/
   UINT8 vertBackPorch60Hz; 	 /** panel Vertical Back Porch for NTSC*/
   UINT8 horizSyncWidth60Hz;	 /** panel Horizontal Sync Width for NTSC*/
   UINT8 horizBackPorch60Hz;	 /** panel Horizontal Back Porch for NTSC*/
   UINT16 vertTypPeriod50Hz;	 /** panel Vertical Period for PAL*/
   UINT8 vertSyncWidth50Hz; 	 /** panel Vertical Sync Width for PAL*/
   UINT8 vertBackPorch50Hz; 	 /** panel Vertical Back Porch for PAL*/
   UINT8 horizSyncWidth50Hz;	 /** panel Horizontal Sync Width for PAL*/
   UINT8 horizBackPorch50Hz;	 /** panel Horizontal Back Porch for PAL*/
   UINT16 vertTypPeriod48Hz;	 /** panel Vertical Period for 48Hz*/
   UINT8 vertSyncWidth48Hz; 	 /** panel Vertical Sync Width for 48Hz*/
   UINT8 vertBackPorch48Hz; 	 /** panel Vertical Back Porch for 48Hz*/
   UINT8 horizSyncWidth48Hz;	 /** panel Horizontal Sync Width for 48Hz*/
   UINT8 horizBackPorch48Hz;	 /** panel Horizontal Back Porch for 48Hz*/
}KADP_DISP_PANEL_SIGNAL_TIMING_T;

typedef struct{
	KADP_DISP_PANEL_SIGNAL_TIMING_T panel_signal_timing;
	KADP_DISP_PANEL_INFO_T panel_info;
	KADP_DISP_PANEL_ATTRIBUTE_T panel_attribute;
	UINT8 framerate;
}KADP_VBE_DISP_FORMAT_T;

typedef struct{
	BOOLEAN isForceFreeRun;
	UINT8 framerate;
}KADP_VBE_DISP_Framerate_T;

typedef struct{
	UINT8 red;
	UINT8 green;
	UINT8 blue;
}KADP_VBE_DISP_BGColor_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct{
	unsigned int pFwData;
	UINT32 size;
}KADP_VBE_DISP_BOE_MODE_T;
#else
typedef struct{
	UINT8 *pFwData;
	UINT32 size;
}KADP_VBE_DISP_BOE_MODE_T;
#endif

typedef struct{
	KADP_DISP_BOE_VERSION_T stRomVer;
	KADP_DISP_BOE_VERSION_T stFwVer;
}KADP_VBE_DISP_BOE_VERSION_T;


typedef struct{
	UINT32 RedGammaTable;
	UINT32 GreenGammaTable;
	UINT32 BlueGammaTable;
}KADP_VBE_DISP_TCON_GAMMA_T;

typedef struct{
	KADP_VBE_AVE_INPUT_INDEX AVEInput;
	BOOLEAN bIsATVWatching;
}KADP_VBE_AVE_SetATVWatching_T;

typedef struct{
	KADP_VBE_AVE_VBI_TYPE_T type;
	UINT8 OnOff;
}KADP_VBE_AVE_VBI_SetInsert_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct{
	KADP_VBE_AVE_VBI_TYPE_T type;
	UINT32 nrLine;
	unsigned int pLines;
	UINT32 size;
	unsigned int pData;
}KADP_VBE_AVE_VBI_InsertData_T;
#else
typedef struct{
	KADP_VBE_AVE_VBI_TYPE_T type;
	UINT32 nrLine;
	UINT32 *pLines;
	UINT32 size;
	UINT8 *pData;
}KADP_VBE_AVE_VBI_InsertData_T;
#endif

typedef struct
{
	KADP_TRIDTV_3DMODE_FLAG_T n3Dmode;
	UINT8 u8DepthLevel;
}KADP_VBE_TRIDFMT_CTRL_DEPTH_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	KADP_TRIDTV_CFG_ITEMS_T n3DCfgItems;
	unsigned int nCurCfgInfo;
}KADP_VBE_TRIDFMT_3D_CFG_INFO_T;
#else
typedef struct
{
	KADP_TRIDTV_CFG_ITEMS_T n3DCfgItems;
	UINT8 *nCurCfgInfo;
}KADP_VBE_TRIDFMT_3D_CFG_INFO_T;
#endif

typedef struct{
	UINT32 reg_address;
	UINT32 reg_data;
}KADP_VBE_DISP_TCON_WRITE_REGISTERS;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct{
	UINT32 reg_address;
	unsigned int reg_data;
}KADP_VBE_DISP_TCON_READ_REGISTERS;
#else
typedef struct{
	UINT32 reg_address;
	UINT32 *reg_data;
}KADP_VBE_DISP_TCON_READ_REGISTERS;
#endif

typedef struct
{
	UINT8 enable;					///< enable
	UINT8 DB_grade; 				///< DB_grade
	UINT8 Mode_ls;					///<Mode_ls
	UINT8 SR_a_local_scale; 		///<SR_a local scale
	UINT8 SR_b_local_scale ;		///<SR_b local scale
	UINT8 PP_X_filter_coefficient ; ///<PP_X filter coefficient
	UINT8 PP_Y_filter_coefficient ; ///<PP_Y filter coefficient
	UINT8 PP_global_scale;			///<PP_global scale
	UINT8 PP_local_scale;			///<PP_local scale
}KADP_VBE_SR_CMN_T;

typedef struct
{
	UINT8 command;					///< cotrol 0 : OFF, 1 :low , 2: midium, 3:high
	UINT8 SR_a_global_scale;			///<PP_global scale
	UINT8 SR_b_global_scale;			///<PP_local scale
}KADP_VBE_SR_CON_T;

typedef enum
{
	KADP_VBE_OUT_SINGLE_2D = 0 ,///< single nomal
	KADP_VBE_OUT_SINGLE_TB     ,///< top and bottom
	KADP_VBE_OUT_SINGLE_SS     ,///< side by side
	KADP_VBE_OUT_SINGLE_FS     ,///< Frame Sequential(Interleaving)

	KADP_VBE_OUT_DUAL_FHD      ,///< dual screen
	KADP_VBE_OUT_DUAL_TB       ,///< dual top and bottom for H13 internal type
	KADP_VBE_OUT_DUAL_SS       ,///< dual side by side for H13 internal type
	KADP_VBE_OUT_SINGLE_T      ,//<H13 DRIVE <BF><E4>Ã» SINGLE TOP ONLY>
	KADP_VBE_OUT_SINGLE_LA     ,//line alternative
	KADP_VBE_OUT_SINGLE_2D3D         ,//line al2D->3D
	KADP_VBE_OUT_SINGLE_3D2D         ,//line al3D->2D
	KADP_VBE_OUT_MAX                   ,//MAX
}KADP_VBE_3D_OUTPUT;

typedef struct {
	KADP_TRIDTV_3DMODE_FLAG_T	 mode;		///< select formatter operation mode. it controls 3D mode ON/OFF.
	KADP_TRIDTV_INPUT_TYPE_T   in_fmt;    ///< output image format(top/bottom, sidebyside, checkboard, frame, field seq)
	KADP_VBE_3D_OUTPUT out_fmt;
	KADP_TRIDTV_INPUT_LR_SEQ_T    lr;		///< output left/right first order
	UINT8                    depthCtrl; //0~20
      SINT8                    convCtrl;  //-10~10
	BOOLEAN					bAutoConvMode;	/* TRUE: 3D auto convergence, FALSE: 3D manual convergence */
}KADP_TRIDTV_FMT_CTRL_T; // WebOS 1.0

typedef struct {
	KADP_TRIDTV_3DMODE_FLAG_T	mode;		///< select formatter operation mode. it controls 3D mode ON/OFF.
	KADP_TRIDTV_FMT_IF_TYPE_T  	n3DIfFmtInput;    ///< 3D formatter input
	KADP_TRIDTV_FMT_IF_TYPE_T  	n3DIfFmtOutput;    ///< 3D formatter output
	KADP_TRIDTV_INPUT_LR_SEQ_T    lr;		///< output left/right first order
	UINT8                    depthCtrl; //0~20
	SINT8                    convCtrl;  //-10~10
	BOOLEAN					bAutoConvMode;	/* TRUE: 3D auto convergence, FALSE: 3D manual convergence */
}KADP_TRIDTV_FORMAT_CTRL_T; // WebOS 1.5


#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	unsigned int pRegisterSet;
	UINT8 nPanelMaker;
}VBE_DISP_MPLUS_REGISTER_T;
typedef struct
{
	unsigned int pAlphaTbl;
	UINT32 size;
}VBE_DISP_OSD_ALPHA_APL_T;

typedef struct
{
	BOOLEAN bOnOff;
	unsigned int pLvlTbl;
	UINT32 size;
}VBE_DISP_OSD_RGB_LEVEL_T;
#else
typedef struct
{
	void* pRegisterSet;
	UINT8 nPanelMaker;
}VBE_DISP_MPLUS_REGISTER_T;
typedef struct
{
	UINT32* pAlphaTbl;
	UINT32 size;
}VBE_DISP_OSD_ALPHA_APL_T;

typedef struct
{
	BOOLEAN bOnOff;
	UINT32* pLvlTbl;
	UINT32 size;
}VBE_DISP_OSD_RGB_LEVEL_T;
#endif

typedef struct KADP_TRIDTV_INPUT_CONFIG_INFO
{
	KADP_TRIDTV_3DMODE_FLAG_T	n3DInputMode;	// 0: 3D ON, 1:3D OFF, 2:2DTO3D, 3:3DTO2D
	KADP_TRIDTV_INPUT_TYPE_T 	n3DInputType;	// 1:TNB 2:SBS, 3:
	KADP_TRIDTV_INPUT_LR_SEQ_T	n3DInputLRSeq;	// 0:LR, 1:RL
//	TRIDTV_INPUT_FREQ_T 	n3DInputFreq;	// NOT USED.

	UINT8					n3DInputDepthCtrl;		// 0~10
	SINT8					n3DInputConvertCtrl;	//-10~10
//	UINT16					nVerticalSize;			//
	BOOLEAN					bPositiveDepth;	/* TRUE: Positive depth, FALSE: Negative depth */
	BOOLEAN					bAutoConvMode;	/* TRUE: 3D auto convergence, FALSE: 3D manual convergence */
} KADP_TRIDTV_INPUT_CONFIG_INFO_T;


typedef struct
{
	UINT16		w;	/**< horizontal Size(Width)    in pixel [0,].*/
	UINT16		h;	/**< vertical	Size(Height)   in pixel [0,].*/
	UINT16		x;	/**< horizontal Start Position in pixel [0,].*/
	UINT16		y;	/**< vertical	Start Position in pixel [0,].*/
} KADP_WIN_T;

#ifndef KADP_VIDEO_WID_T
	typedef enum
	{
		KADP_VIDEO_WID_MIN	= 0,				/**< WID min */
		KADP_VIDEO_WID_0 	= KADP_VIDEO_WID_MIN,	/**< WID main window */
		KADP_VIDEO_WID_1,						/**< WID sub window */
		KADP_VIDEO_WID_MAX	= KADP_VIDEO_WID_1,		/**< WID max */
		KADP_VIDEO_WID_MAXN, 					/**< WID max number */
	} __KADP_VIDEO_WID_T;
#define KADP_VIDEO_WID_T __KADP_VIDEO_WID_T
#endif

typedef struct
{
	KADP_VIDEO_WID_T wId;
	KADP_TRIDTV_FMT_CTRL_T *TriFRC;
}KADP_TRIDFMT_FMT_MODE_T;

typedef enum {
   KADP_DISP_HIGH_LUM1_MSE_ON,
   KADP_DISP_HIGH_LUM2,
   KADP_DISP_LOW_POWER1,
   KADP_DISP_MLE_MODE_OFF,
   KADP_DISP_HIGH_LUM1_MSE_OFF,
   KADP_DISP_LOW_POWER2,
   KADP_DISP_LOW_POWER2_SC_OFF,
   KADP_DISP_MLE_MODE_MAX,
} KADP_DISP_MPLUS_MODE_T;

/**
 * LSR tunning factor
 **/
typedef struct{
	UINT8	IIR;
	UINT8	APL_LUT[8];
	UINT16	GB_LUT[8];
	UINT16	OFFSET[15];
	UINT32	COUNT[3];
}KADP_DISP_LSR_TUNNING_VAL_T;

/**
 * CPC tunning factor
 **/
typedef struct{
	UINT16	APL_LUT[4];
	UINT16	EDGE_LUT[4];
	UINT8	STEP[2];
}KADP_DISP_CPC_TUNNING_VAL_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct {
   UINT16 nSize;
   UINT16 *u16pVcomPattern;
}KADP_DISP_VCOM_PATTERN_DRAW_T;
#else
typedef struct {
   UINT16 nSize;
   UINT16 *u16pVcomPattern;
}KADP_DISP_VCOM_PATTERN_DRAW_T;
#endif


typedef enum{
	KADP_DISP_PANEL_VCOM_PAT_CTRL_OFF=0,
	KADP_DISP_PANEL_VCOM_PAT_CTRL_ON,
	KADP_DISP_PANEL_VCOM_PAT_CTRL_VCOM1,
	KADP_DISP_PANEL_VCOM_PAT_CTRL_VCOM2,
	KADP_DISP_PANEL_VCOM_PAT_CTRL_VCOM3,
	KADP_DISP_PANEL_VCOM_PAT_CTRL_VCOM4,
	KADP_DISP_PANEL_VCOM_PAT_CTRL_VCOM5,
	KADP_DISP_PANEL_VCOM_PAT_CTRL_VCOM6,
	KADP_DISP_PANEL_VCOM_PAT_CTRL_VCOM7,
	KADP_DISP_PANEL_VCOM_PAT_CTRL_VCOM8,
	KADP_DISP_PANEL_VCOM_PAT_CTRL_MAX
} KADP_DISP_PANEL_VCOM_PAT_CTRL_T;
/*-----------------------------------------------------------------------------
	Constant Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Macro Definitions
------------------------------------------------------------------------------*/
#define DISP_RES_WIDTH(_v)			((_v & 0xffff) << 12  )
#define DISP_RES_HEIGHT(_v)			((_v & 0xfff)         )

#define DISP_RES_1920X1080			( DISP_RES_WIDTH(1920) | DISP_RES_HEIGHT(1080) )
#define DISP_RES_1366X768			( DISP_RES_WIDTH(1366) | DISP_RES_HEIGHT(768) )
#define DISP_RES_1365X768			( DISP_RES_WIDTH(1365) | DISP_RES_HEIGHT(768) )
#define DISP_RES_1024X768			( DISP_RES_WIDTH(1024) | DISP_RES_HEIGHT(768) )

/*-----------------------------------------------------------------------------
	Extern Variables & Function Prototype Declarations
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Local Constant Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Local Type Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Global Type Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Static Variables & Function Prototypes Declarations
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Global Variables & Function Prototypes Declarations
------------------------------------------------------------------------------*/

 //dtg master to golden vsync delay line & pixel, depends on memc internel delay
#define DTGM_2_GOLDEN_VSYNC_DELAY_LINE 0x86
#define DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL 0x98
 //  2nd uzu on/off ip delay line & pixel
#define TWO_STEP_UZU_ON_OFF_DELAY_LINE 0x7
#define TWO_STEP_UZU_ON_OFF_DELAY_PIXEL 0x49 //memc bypass, stage1 & stage2 Fifo margin (fifo length/2)
#define STAGE1_STAGE2_FIFO_MARGIN 1

#define _UZUDLY_FRONT_PORCH_BOUNDARY 0x41  //uzudtg delay apply will let uzudtg vsync a period use old clock,
                                           //which may cut data enable, we need to define check boundary

 typedef struct {
	 BOOLEAN bEnable;
	 UINT16 Percenct;
	 UINT16 Period;
 }VBE_DISP_SpreadSpectrum_T;

 typedef struct{
	 BOOLEAN bIsH;
	 BOOLEAN bIsV;
 }VBE_DISP_VideoMirror_T;

 typedef struct{
	 KADP_DISP_PANEL_ATTRIBUTE_T panel_attribute;
	 UINT8 framerate;
 }VBE_DISP_FORMAT_T;

 typedef struct{
	 BOOLEAN isForceFreeRun;
	 UINT8 framerate;
 }VBE_DISP_Framerate_T;

 typedef struct{
	 UINT8 red;
	 UINT8 green;
	 UINT8 blue;
 }VBE_DISP_BGColor_T;

 typedef enum
 {
	 VBE_DISP_NOTHING =0,		 //Source don't do anything yet
	 VBE_DISP_INIT_DONE,		 //Source after initial
	 VBE_DISP_CONNECT_DONE, 	 //Source after connect
	 VBE_DISP_DISCONNECT,		 //Source disconnect
 } VBE_DISP_STATUS;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct{
	 unsigned int pFwData;
	 UINT32 size;
 }VBE_DISP_BOE_MODE_T;
#else
 typedef struct{
	 UINT8 *pFwData;
	 UINT32 size;
 }VBE_DISP_BOE_MODE_T;
#endif

 typedef struct{
	 KADP_DISP_BOE_VERSION_T stRomVer;
	 KADP_DISP_BOE_VERSION_T stFwVer;
 }VBE_DISP_BOE_VERSION_T;

 typedef enum
 {
	 BOE_ROM_VERSION = 0,
	 BOE_FW_VERSION
 }VBE_DISP_BOE_VERSION_TYPE_T;

 typedef enum
 {
	 VBE_DISP_HIGH_LUM1_MSE_ON = 0,
	 VBE_DISP_HIGH_LUM2,
	 VBE_DISP_LOW_POWER1,
	 VBE_DISP_MLE_MODE_OFF,
	 VBE_DISP_HIGH_LUM1_MSE_OFF,
	 VBE_DISP_LOW_POWER2,
	 VBE_DISP_LOW_POWER2_SC_OFF,
	 VBE_DISP_MLE_MODE_MAX,
 } VBE_DISP_MLE_MODE_T;

 typedef enum
 {
	 VBE_DISP_INNER_PTG_BLOCK_VGIP = 0,
	 VBE_DISP_INNER_PTG_BLOCK_UZU,
	 VBE_DISP_INNER_PTG_BLOCK_MTG,
	 VBE_DISP_INNER_PTG_BLOCK_MEMC_INPUTMUX,
	 VBE_DISP_INNER_PTG_BLOCK_MEMC_OUTPUTMUX,
	 VBE_DISP_INNER_PTG_BLOCK_SFG,
	 VBE_DISP_INNER_PTG_BLOCK_MAX,
 } VBE_DISP_INNER_PTG_BLOCK_T;

 typedef enum
 {
	 VBE_DISP_INNER_PTG_TYPE_COLOR_R = 0,
	 VBE_DISP_INNER_PTG_TYPE_COLOR_G,
	 VBE_DISP_INNER_PTG_TYPE_COLOR_B,
	 VBE_DISP_INNER_PTG_TYPE_COLOR_WHITE,
	 VBE_DISP_INNER_PTG_TYPE_COLOR_BLACK,
	 VBE_DISP_INNER_PTG_TYPE_RANDOM_GEN,
	 VBE_DISP_INNER_PTG_TYPE_COLOR_BAR,
	 VBE_DISP_INNER_PTG_TYPE_COLOR_MAX,
 } VBE_DISP_INNER_PTG_TYPE_T;

 typedef enum{
	 VBE_DISP_LOGO_LUMY_ADJUST_OFF = 0,
	 VBE_DISP_LOGO_LUMY_ADJUST_LIGHT,
	 VBE_DISP_LOGO_LUMY_ADJUST_STRONG,
	 VBE_DISP_LOGO_LUMY_ADJUST_MAX
 }VBE_DISP_LSR_ADJUST_MODE_T;

 /**
  * LSR tunning factor
  **/
 typedef struct{
	 UINT8	 IIR;
	 UINT8	 APL_LUT[8];
	 UINT16  GB_LUT[8];
	 UINT16  OFFSET[15];
	 UINT32  COUNT[3];
 }VBE_DISP_LSR_TUNNING_VAL_T;

 /**
  * CPC tunning factor
  **/
 typedef struct{
	 UINT16  APL_LUT[4];
	 UINT16  EDGE_LUT[4];
	 UINT8	 STEP[2];
 }VBE_DISP_CPC_TUNNING_VAL_T;

 typedef struct {
	UINT8 bOnOff;
	VBE_DISP_INNER_PTG_BLOCK_T block;
	VBE_DISP_INNER_PTG_TYPE_T type;
 } VBE_DISP_INNER_PATTERN_CTRL_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
 typedef struct
 {
	 VBE_DISP_LSR_ADJUST_MODE_T nStep;
	 unsigned int pLSRTbl;
 }VBE_LSR_ADJ_MODE_T;

 /**
  * TSCIC data structure
  **/
 typedef struct {
	 unsigned int u8pControlTbl;
	 UINT32 u32Ctrlsize;
	 unsigned int u32pTSCICTbl;
	 UINT32 u32Tscicsize;
 }VBE_DISP_PANEL_TSCIC_T;


 typedef struct {
	UINT16 nSize;
	unsigned int u16pVcomPattern;
 }VBE_DISP_VCOM_PATTERN_DRAW_T;
#else
 typedef struct
 {
	 VBE_DISP_LSR_ADJUST_MODE_T nStep;
	 UINT32* pLSRTbl;
 }VBE_LSR_ADJ_MODE_T;

 /**
  * TSCIC data structure
  **/
 typedef struct {
	 UINT8 *u8pControlTbl;
	 UINT32 u32Ctrlsize;
	 UINT32 *u32pTSCICTbl;
	 UINT32 u32Tscicsize;
 }VBE_DISP_PANEL_TSCIC_T;


 typedef struct {
	UINT16 nSize;
	UINT16 *u16pVcomPattern;
 }VBE_DISP_VCOM_PATTERN_DRAW_T;
 #endif
 /******************************************************************************
 VBE_DISP_TCON (Global Type Definitions)
 ******************************************************************************/
 typedef struct{
	 UINT32 reg_address;
	 UINT32 reg_data;
 }HAL_VBE_DISP_TCON_WRITE_REGISTERS;
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
 typedef struct{
	 UINT32 reg_address;
	 unsigned int reg_data;
 }HAL_VBE_DISP_TCON_READ_REGISTERS;
#else
 typedef struct{
	 UINT32 reg_address;
	 UINT32 *reg_data;
 }HAL_VBE_DISP_TCON_READ_REGISTERS;
#endif


 /*-----------------------------------------------------------------------------
	 Local Type Definitions
	 VBE_AVE (Global Type Definitions)
 ------------------------------------------------------------------------------*/
 typedef enum
 {
	 WSS_FULLFORMAT_4_3_MST 			 = 0x08,
		 WSS_LETTRBOX_14_9_CENT_MST 		 = 0x01,
		 WSS_LETTRBOX_14_9_TOP_MST			 = 0x02,
		 WSS_LETTRBOX_16_9_CENT_MST 		 = 0x0b,
		 WSS_LETTRBOX_16_9_TOP_MST			 = 0x04,
		 WSS_LETTRBOX_16_9_ZOOM_MST 	 = 0x0d,
		 WSS_FULLFORMAT_14_9_MST			 = 0x0e,
		 WSS_FULLFORMAT_16_9_MST			 = 0x07,
		 WSS_INVALD_MST
 }WSS_ART_MODE_T_MST;

 typedef struct{
	 KADP_VBE_AVE_VBI_TYPE_T type;
	 UINT8 OnOff;
 }VBE_AVE_VBI_SET_INSERT_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
 typedef struct{
	 KADP_VBE_AVE_VBI_TYPE_T type;
	 UINT32 nrLine;
	 unsigned int pLines;
	 UINT32 size;
	 unsigned int pData;
 }VBE_AVE_VBI_INSERT_DATA_T;
#else
 typedef struct{
	 KADP_VBE_AVE_VBI_TYPE_T type;
	 UINT32 nrLine;
	 UINT32 *pLines;
	 UINT32 size;
	 UINT8 *pData;
 }VBE_AVE_VBI_INSERT_DATA_T;
#endif

 typedef enum
 {
	 DISP_TIMING_DEFAULT=0,
	 DISP_FREE_RUN,
	 DISP_FRAMESYNC,
 }DISP_TIMING_INFO;


 typedef enum
 {
	 DISP_TCON_TOGGLE_STATE_NONE=0,
	 DISP_TCON_TOGGLE_STATE_INIT,
	 DISP_TCON_TOGGLE_STATE_ACTIVE1,
	 DISP_TCON_TOGGLE_STATE_ACTIVE2,
 }_TCON_28S_TOGGLES_State;

 typedef struct{
	 KADP_VBE_AVE_INPUT_INDEX AVEInput;
	 BOOLEAN bIsATVWatching;
 }VBE_AVE_SET_ATVWATCHING_T;

 typedef enum
 {
	 VBE_AVE_NOTHING =0,	 //Source don't do anything yet
	 VBE_AVE_INIT_DONE, 		 //Source after initial
	 VBE_AVE_OPEN_DONE, 	 //Source after open
	 VBE_AVE_CONNECT_DONE,		 //Source after connect

	 VBE_AVE_UNINIT,			 //Source uninitial
	 VBE_AVE_CLOSE, 			 // Source close
	 VBE_AVE_DISCONNECT,		 //Source disconnect
 } VBE_AVE_STATUS;

#ifdef CONFIG_PM
 typedef enum
 {
	 VBE_AVE_SUSPEND_RESUME_DISABLE,
		 VBE_AVE_SUSPEND_RESUME_VSC_SCALER,
	 VBE_AVE_SUSPEND_RESUME_TUNER_OUTPUT,
	 VBE_AVE_SUSPEND_RESUME_VDEC0,	 //LM15U
	 VBE_AVE_SUSPEND_RESUME_VDEC1,	 //LM15U
 }VBE_AVE_INPUT_INDEX_SUSPEND_RESUME;
#endif

 /*-----------------------------------------------------------------------------
	 Global Type Definitions
	 VBE_TRIDTV (Global Type Definitions)
 ------------------------------------------------------------------------------*/

 /**
  * Define 3D Input LR Type.
  */
#ifndef VIDEO_WID_T
	 typedef enum
	 {
		 VIDEO_WID_MIN	 = 0,				 /**< WID min */
		 VIDEO_WID_0	 = VIDEO_WID_MIN,	 /**< WID main window */
		 VIDEO_WID_1,						 /**< WID sub window */
		 VIDEO_WID_MAX	 = VIDEO_WID_1, 	 /**< WID max */
		 VIDEO_WID_MAXN,					 /**< WID max number */
	 } __VIDEO_WID_T;
#define VIDEO_WID_T __VIDEO_WID_T
#endif

 typedef struct {
	 KADP_TRIDTV_3DMODE_FLAG_T	  mode; 	 ///< select formatter operation mode. it controls 3D mode ON/OFF.
	 KADP_TRIDTV_INPUT_TYPE_T  in_fmt;	 ///< input image format(top/bottom, sidebyside, checkboard, frame, field seq)
	 KADP_VBE_3D_OUTPUT	out_fmt;	///< output image format(top/bottom, sidebyside, checkboard, frame, field seq)
	 KADP_TRIDTV_INPUT_LR_SEQ_T	  lr;		 ///< output left/right first order
	 UINT8					  depthCtrl; //0~20
	 char					 convCtrl;	//-10~10
	 BOOLEAN				  bAutoConvMode; /* TRUE: 3D auto convergence, FALSE: 3D manual convergence */
 }HAL_TRIDTV_FMT_CTRL_TEMP_T;




 typedef enum
 {
	 V3D_FMT_2D = 0,
	 V3D_FMT_TOPNBOTTOM,
	 V3D_FMT_SIDEBYSIDE,
	 V3D_FMT_CHECKERBOARD,
	 V3D_FMT_FRAMESEQ,
	 V3D_FMT_COLUMN_INTERLEAVE,
	 V3D_FMT_LINE_INTERLEAVE_HALF,
	 V3D_FMT_FRAMEPAC,
	 V3D_FMT_FIELD_ALTERNATIVE,
	 V3D_FMT_LINE_ALTERNATIVE,
	 V3D_FMT_SIDEBYSIDE_FULL,
	 V3D_FMT_DUALSTREAM,
	 V3D_FMT_MAX
 } V3D_FMT_TYPE_T;

 typedef enum{
	 V3D_LR_SEQ = 0,
	 V3D_RL_SEQ ,
	 V3D_LR_MAX
 } V3D_LR_SEQ_T ;

 //#define BIT0 0x01
 typedef enum {
	 V3D_FORMAT_TOP_BOTTOM = 0x01 << 1,
	 V3D_FORMAT_SIDEBYSIDE_HALF = 0x01 << 2,
	 V3D_FORMAT_CHECKER_BOARD = 0x01 << 3,
	 V3D_FORMAT_FRAME_SEQ = 0x01 << 4,
	 V3D_FORMAT_COLUMN_INTERLEAVE = 0x01 << 5,
	 V3D_FORMAT_LINE_INTERLEAVE_HALF = 0x01 << 6,
	 V3D_FORMAT_FRAME_PACKING = 0x01 << 7,
	 V3D_FORMAT_FIELD_ALTERNATIVE = 0x01 << 8,
	 V3D_FORMAT_LINE_ALTERNATIVE = 0x01 << 9,
	 V3D_FORMAT_SIDEBYSIDE_FULL = 0x01 << 10,
	 V3D_FORMAT_DUAL_STREAM = 0x01 << 11,
 } V3D_FORMAT_TYPE_T;

 typedef struct
 {
	 VIDEO_WID_T	 wid;
	 V3D_FMT_TYPE_T  in_fmt;
	 V3D_FMT_TYPE_T  out_fmt;
 }V3D_Set3DFMT_T;

 typedef enum
 {
   VBE_DISP_VRR_1_1 = 0,
   VBE_DISP_VRR_1_2,
   VBE_DISP_VRR_2_5,
   VBE_DISP_VRR_MAX,
 }VBE_DISP_VRR_FRACTIONAL_TIMING_MODE_T;

 /*-----------------------------------------------------------------------------
	 Local Type Definitions
	 VBE_TRIDTV (Local Type Definitions)
 ------------------------------------------------------------------------------*/
 #if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
  typedef struct
 {
	 VIDEO_WID_T wId;
	 unsigned int TriFRC;
 }VBE_TRIDFMT_FMT_MODE_T;

 typedef struct
 {
	 VIDEO_WID_T wId;
	 unsigned int TriFRC;
 }VBE_TRIDFMT_FMT_MODE_TEMP_T;
 #else
 typedef struct
 {
	 VIDEO_WID_T wId;
	 KADP_TRIDTV_FMT_CTRL_T *TriFRC;
 }VBE_TRIDFMT_FMT_MODE_T;

 typedef struct
 {
	 VIDEO_WID_T wId;
	 HAL_TRIDTV_FMT_CTRL_TEMP_T *TriFRC;
 }VBE_TRIDFMT_FMT_MODE_TEMP_T;
 #endif

 typedef struct
 {
	 KADP_TRIDTV_3DMODE_FLAG_T n3Dmode;
	 UINT8 u8DepthLevel;
 }VBE_TRIDFMT_CTRL_DEPTH_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
 typedef struct
 {
	 KADP_TRIDTV_CFG_ITEMS_T n3DCfgItems;
	 unsigned int nCurCfgInfo;
 }VBE_TRIDFMT_3D_CFG_INFO_T;
#else
 typedef struct
 {
	 KADP_TRIDTV_CFG_ITEMS_T n3DCfgItems;
	 UINT8 *nCurCfgInfo;
 }VBE_TRIDFMT_3D_CFG_INFO_T;
#endif

 typedef enum
 {
	 VBE_TRIDFMT_NOTHING =0,	 //Source don't do anything yet
	 VBE_TRIDFMT_INIT_DONE, 		 //Source after initial
	 VBE_TRIDFMT_OPEN_DONE, 	 //Source after open
	 VBE_TRIDFMT_CONNECT_DONE,		 //Source after connect

	 VBE_TRIDFMT_UNINIT,			 //Source uninitial
	 VBE_TRIDFMT_CLOSE, 			 // Source close
	 VBE_TRIDFMT_DISCONNECT,		 //Source disconnect
 } VBE_TRIDFMT_STATUS;

typedef enum{
	KADP_DISP_PANEL_POWER_ONOFF = 0,
	KADP_DISP_PANEL_LVDS_SSC,
	KADP_DISP_PANEL_STR_BACKLIGHT_CTRL_BY_AP,
	KADP_DISP_PANEL_CTRL_MAX,
} KADP_DISP_PANEL_CTRL_T;

typedef struct
{
	unsigned char panel_type;
	unsigned char power_enable;
	KADP_DISP_PANEL_CTRL_T ctrl_set;
}KADP_PANEL_MODE_SET_T;

typedef struct {
	UINT32 DISP_WIDTH;
	UINT32 DISP_HEIGHT;
} KADP_DISP_PANEL_SIZE_T;

 typedef struct
 {
	 unsigned int wid;//main sub
	 unsigned int COLORRGB;// color rgb format
 }FORCEBG_COLOR_CTRL_TYPE;

 /*-----------------------------------------------------------------------------
	 Suspend & Resume
 ------------------------------------------------------------------------------*/
#ifdef CONFIG_PM
 typedef struct
 {
	 UINT8 ENALE_SUSPEND_RESUME;
 }VBE_DISP_TCON_SUSPEND_RESUME_T;

 typedef struct
 {
	 UINT8 ENALE_SUSPEND_RESUME;
	 UINT8 VBI_DATA_ENALE_SUSPEND_RESUME;
	 UINT8 VBI_DATA_TYPE_SUSPEND_RESUME;

	 //TVEDMA
	 UINT32 TVE_DMA_TVE_VDDMA_S_R;
	 UINT32 TVE_DMA_TVEVDDMA_SATRT0_S_R;
	 UINT32 TVE_DMA_TVEVDDMA_SATRT1_S_R;
	 UINT32 TVE_DMA_TVEVDDMA_SATRT2_S_R;
	 UINT32 TVE_DMA_TVEVDDMA_LINESTEP_S_R;

	 //VDAC
	 UINT32 IFD_ANALOG_VDAC_VDBSO_S_R;
	 UINT32 IFD_ANALOG_VDAC_S_R;
	 UINT32 IFD_ANALOG_VADC_IDACO_CTRL1_S_R;
	 UINT32 IFD_ANALOG_VDAC_IDACO_CTRL2_S_R;
	 UINT32 IFD_ANALOG_VDAC_SRC_SEL_S_R;

	 //DMA VGIP
	 UINT32 DMA_VGIP_DMA_VGIP_CTRL_S_R;
	 UINT32 DMA_VGIP_DMA_VGIP_ACT_HSTA_WIDTH_S_R;
	 UINT32 DMA_VGIP_DMA_VGIP_ACT_VSTA_LENGTH_S_R;
	 UINT32 DMA_VGIP_DMA_VGIP_DELAY_S_R;
	 UINT32 DMA_VGIP_DMA_VGIP_CTS_FIFO_CTL_S_R;

	 //I3DDMA color space
	 UINT32 I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_CTRL_S_R;
	 UINT32 I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M1_S_R;
	 UINT32 I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M2_S_R;
	 UINT32 I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M3_S_R;
	 UINT32 I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_Y_S_R;

	 //I3DDMA UZD
	 UINT32 I3DDMA_SCALEDOWN_HSD_CTRL0_S_R;
	 UINT32 I3DDMA_SCALEDOWN_VSD_CTRL0_S_R;
	 UINT32 I3DDMA_SCALEDOWN_UZD_FIR_COEF_TAB1_C0_S_R;
	 UINT32 I3DDMA_SCALEDOWN_UZD_FIR_COEF_TAB2_C0_S_R;
	 UINT32 I3DDMA_SCALEDOWN_HSD_SCALE_HOR_FACTOR_S_R;
	 UINT32 I3DDMA_SCALEDOWN_VSD_SCALE_VER_FACTOR_S_R;
	 UINT32 I3DDMA_SCALEDOWN_HSD_HOR_SEGMENT_S_R;
	 UINT32 I3DDMA_SCALEDOWN_HSD_HOR_DELTA1_S_R;
	 UINT32 I3DDMA_SCALEDOWN_VSD_INITIAL_VALUE_S_R;
	 UINT32 I3DDMA_SCALEDOWN_HSD_INITIAL_VALUE_S_R;

	 //I3DDMA Cap
	 UINT32 I3DDMA_CAP_BOUNDARYADDR2_S_R;
	 UINT32 I3DDMA_CAP_BOUNDARYADDR1_S_R;
	 UINT32 I3DDMA_LR_SEPARATE_CTRL1_S_R;
		UINT32 I3DDMA_LR_SEPARATE_CTRL2_S_R;
	 UINT32 I3DDMA_CAP_CTL1_S_R;
	 UINT32 I3DDMA_CAP_CTL0_S_R;
	 UINT32 I3DDMA_TG_V1_END_S_R;
	 UINT32 I3DDMA_I3DDMA_ENABLE_S_R;
	 UINT32 I3DDMA_BYTE_CHANNEL_SWAP_S_R;
	 UINT32 I3DDMA_CAP_L1_START_S_R;
	 UINT32 I3DDMA_CAP_L2_START_S_R;
	 UINT32 I3DDMA_CAP_L3_START_S_R;

	 //VBI DATA - TT
	 UINT32 TT_CTRL_S_R;
	 UINT32 TT_VPOS_S_R;
	 UINT32 TVE_DMA_TVEVBIDMA_CTRL_S_R;
	 UINT32 TVE_DMA_TVEVBIDMA_START_S_R;
	 UINT32 TVE_DMA_TVEVBIDMA_READ_WINDOW_S_R;

	 //VBI DATA - WSS
	 UINT32 WSS_CTRL_S_R;
	 UINT32 WSS_POS_S_R;

	 //VBI DATA - VPS
	 UINT32 VPS_CTRL_S_R;
	 UINT32 VPS_DATA_0_S_R;
	 UINT32 VPS_DATA_1_S_R;
	 UINT32 VPS_DATA_2_S_R;
	 UINT32 VPS_DATA_3_S_R;

	 //VBI DATA - CC
	 UINT32 IP_CCD_ENBL_S_R;
	 UINT32 IP_CCD_ODD_0_S_R;
	 UINT32 IP_CCD_ODD_1_S_R;
	 UINT32 IP_CCD_EVEN_0_S_R;
	 UINT32 IP_CCD_EVEN_1_S_R;
 }VBE_AVE_SUSPEND_RESUME_T;
 typedef struct {
	 UINT8 ENALE_SUSPEND_RESUME;
	 UINT8 VBI_DATA_ENALE_SUSPEND_RESUME;
	 UINT8 VBI_DATA_TYPE_SUSPEND_RESUME;

	 /*VBE DISP*/
	 UINT32 PPOVERLAY_DISPLAY_TIMING_CTRL1_S_R;
	 UINT32 PPOVERLAY_DISPLAY_TIMING_CTRL2_S_R;
	 UINT32 PPOVERLAY_DV_LENGTH_S_R;
	 UINT32 PPOVERLAY_DV_TOTAL_S_R;
	 UINT32 PPOVERLAY_DTG_PENDING_STATUS_S_R;
	 UINT32 PPOVERLAY_DISPLAY_BACKGROUND_COLOR_S_R;
	 UINT32 PPOVERLAY_DH_WIDTH_S_R;
	 UINT32 PPOVERLAY_DH_TOTAL_LAST_LINE_LENGTH_S_R;
	 UINT32 PPOVERLAY_DTG_IE_S_R;
	 UINT32 PPOVERLAY_DTG_IE_2_S_R;
	 UINT32 PPOVERLAY_DH_DEN_START_END_S_R;
	 UINT32 PPOVERLAY_DV_DEN_START_END_S_R;
	 UINT32 SYS_DISPCLKSEL_S_R;
	 UINT32 PPOVERLAY_FS_IV_DV_FINE_TUNING2_S_R;
	 UINT32 PPOVERLAY_FS_IV_DV_FINE_TUNING5_S_R;
	 UINT32 PPOVERLAY_FS_IV_DV_FINE_TUNING1_S_R;
	 UINT32 PPOVERLAY_DOUBLE_BUFFER_CTRL_S_R;

	 UINT32 PPOVERLAY_uzudtg_DV_TOTAL_S_R;
	 UINT32 PPOVERLAY_uzudtg_DH_TOTAL_S_R;
	 UINT32 PPOVERLAY_DH_DEN_Start_End_S_R;
	 UINT32 PPOVERLAY_DV_DEN_Start_End_S_R;
	 UINT32 PPOVERLAY_UZUDTG_COUNTROL_S_R;
	 UINT32 PPOVERLAY_memcdtg_DV_TOTAL_S_R;
	 UINT32 PPOVERLAY_memcdtg_DH_TOTAL_S_R;
	 UINT32 PPOVERLAY_memcdtg_DH_DEN_Start_End_S_R;
	 UINT32 PPOVERLAY_memcdtg_DV_DEN_Start_End_S_R;
	 UINT32 PPOVERLAY_MEMCDTG_CONTROL_S_R;
	 UINT32 PPOVERLAY_MEMC_MUX_CTRL_S_R;
	 UINT32 PPOVERLAY_UZUDTG_FRACTIONAL_FSYNC_S_R;
	 UINT32 PPOVERLAY_DTG_M_REMOVE_INPUT_VSYNC_S_R;
	 //OSD SPLIT
	 UINT32 PPOVERLAY_osddtg_DV_TOTAL_S_R; 
	 UINT32 PPOVERLAY_osddtg_DH_TOTAL_S_R;
	 UINT32 PPOVERLAY_osddtg_DV_DEN_Start_End_S_R;
	 UINT32 PPOVERLAY_osddtg_DH_DEN_Start_End_S_R;
	 UINT32 PPOVERLAY_OSDDTG_CONTROL_S_R;
	 UINT32 PPOVERLAY_OSDDTG_CONTROL2_S_R;
	 UINT32 PPOVERLAY_osddtg_fractional_fsync_S_R;
	 UINT32 PPOVERLAY_osd_dtg_dh_width_S_R;
	 UINT32 PPOVERLAY_osd_dtg_dv_length_S_R;


	 /*GoldenVsyn & twoStepUzu delay*/
	 UINT32 PPOVERLAY_MEMCDTG_CONTROL2_S_R;
	 UINT32 PPOVERLAY_MEMCDTG_CONTROL3_S_R;
	 UINT32 PPOVERLAY_uzudtg_control1_S_R;
	 UINT32 PPOVERLAY_uzudtg_control2_S_R;

	 /*Clk*/
	 UINT32 CRT_PLL_SSC0_S_R;
		 UINT32 CRT_PLL_SSC3_S_R;
	 UINT32 CRT_PLL_SSC4_S_R;
	 UINT32 CRT_SYS_DCLKSS_S_R;
	 UINT32 CRT_SYS_PLL_DISP1_S_R;
	 UINT32 CRT_SYS_PLL_DISP2_S_R;
	 UINT32 CRT_SYS_PLL_DISP3_S_R;
	 UINT32 CRT_SYS_DISPCLKSEL_S_R;
	 UINT32 CRT_DCLK_GATE_SEL0_S_R;
	 UINT32 CRT_DCLK_GATE_SEL1_S_R;

	 //panel driver
	 UINT32 PPOVERLAY_FS_IV_DV_Fine_Tuning1_S_R;
	 UINT32 PPOVERLAY_FS_IV_DV_Fine_Tuning2_S_R;
	 UINT32 PPOVERLAY_FS_IV_DV_Fine_Tuning3_S_R;
	 UINT32 PPOVERLAY_FS_IV_DV_Fine_Tuning4_S_R;
	 UINT32 PPOVERLAY_FS_IV_DV_Fine_Tuning5_S_R;

	 UINT32 PPOVERLAY_Display_Background_Color_S_R;
	 UINT32 PPOVERLAY_Display_Background_Color_2_S_R;
	 UINT32 PPOVERLAY_Main_Display_Control_RSV_S_R;
	 UINT32 PPOVERLAY_Main_Border_Highlight_Border_Color1_S_R;
	 UINT32 PPOVERLAY_Main_Border_Highlight_Border_Color2_S_R;
	 UINT32 PPOVERLAY_Main_Border_Highlight_Border_Color3_S_R;
	 UINT32 PPOVERLAY_MAIN_DEN_H_Start_End_S_R;
	 UINT32 PPOVERLAY_MAIN_DEN_V_Start_End_S_R;
	 UINT32 PPOVERLAY_MAIN_Background_H_Start_End_S_R;
	 UINT32 PPOVERLAY_MAIN_Background_V_Start_End_S_R;
	 UINT32 PPOVERLAY_MAIN_Active_H_Start_End_S_R;
	 UINT32 PPOVERLAY_MAIN_Active_V_Start_End_S_R;

	 //sfg
	 UINT32 SFG_SFG_ZZ_shift_dbg_CTRL_S_R;
	 UINT32 SFG_SFG_SWAP_CTRL0_S_R;
	 UINT32 SFG_SFG_CRC_CTRL_S_R;
	 UINT32 SFG_SFG_CRC_RESULT_S_R;
	 UINT32 SFG_SFG_CRC_R_RESULT_S_R;
	 UINT32 SFG_SFG_L_DES_CRC_S_R;
	 UINT32 SFG_SFG_R_DES_CRC_S_R;
	 UINT32 SFG_SFG_CRC_ERR_CNT_S_R;
	 UINT32 SFG_SFG_FORCE_BG_AT_DIF_S_R;
	 UINT32 SFG_ZZ_CTRL_S_R;
	 UINT32 SFG_SFG_DUMMY_CTRL_0A_S_R;
	 UINT32 SFG_SFG_DUMMY_CTRL_0B_S_R;
	 UINT32 SFG_SFG_DUMMY_CTRL_1A_S_R;
	 UINT32 SFG_SFG_DUMMY_CTRL_1B_S_R;
	 UINT32 SFG_SFG_DUMMY_CTRL_8_S_R;
	 UINT32 SFG_SFG_DUMMY_CTRL_10_S_R;
	 UINT32 SFG_SFG_CTRL_13_S_R;
	 UINT32 SFG_SFG_CTRL_24_S_R;
	 UINT32 SFG_SFG_CTRL_25_S_R;
	 UINT32 SFG_SFG_CTRL_26_S_R;
	 UINT32 SFG_SFG_CTRL_0_S_R;
	 UINT32 SFG_SFG_CTRL_1_S_R;
	 UINT32 SFG_SFG_CTRL_2_S_R;
	 UINT32 SFG_SFG_CTRL_3_S_R;
	 UINT32 SFG_SFG_CTRL_4_S_R;
	 UINT32 SFG_SFG_START_CTRL_8_S_R;
	 UINT32 SFG_SFG_START_CTRL_10_S_R;
	 UINT32 SFG_SFG_CTRL_11_S_R;
	 UINT32 SFG_SFG_CTRL_12_S_R;
	 UINT32 SFG_SFG_CTRL_6_S_R;
	 UINT32 SFG_SFG_CTRL_7_S_R;
	 UINT32 SFG_SFG_CTRL_8_S_R;
	 UINT32 SFG_SFG_CTRL_9_S_R;
	 UINT32 SFG_SFG_CTRL_5_S_R;
	 UINT32 SFG_SFG_CTRL_A_S_R;
	 UINT32 SFG_SFG_CTRL_B_S_R;
	 UINT32 SFG_SFG_CTRL_C_S_R;
	 UINT32 SFG_SFG_TG_AUTO_1_S_R;
	 UINT32 SFG_SFG_TG_AUTO_2_S_R;
	 UINT32 SFG_SFG_TG_AUTO_3_S_R;
	 UINT32 SFG_SFG_TG_AUTO_4_S_R;
	 UINT32 SFG_SFG_DUMMY_S_R;
	 UINT32 SFG_SFG_BIST_MODE_S_R;
	 UINT32 SFG_SFG_BIST_DONE_S_R;
	 UINT32 SFG_SFG_BIST_FAIL_GROUP_S_R;
	 UINT32 SFG_SFG_BIST_FAIL_S_R;
	 UINT32 SFG_SFG_DRF_MODE_S_R;
	 UINT32 SFG_SFG_DRF_RESUME_S_R;
	 UINT32 SFG_SFG_DRF_DONE_S_R;
	 UINT32 SFG_SFG_DRF_PAUSE_S_R;
	 UINT32 SFG_SFG_DRF_FAIL_GROUP_S_R;
	 UINT32 SFG_SFG_DRF_FAI_S_R;
	 UINT32 SFG_SFG_BIST_OTHER_S_R;
	 UINT32 SFG_SFG_MID_DUMMY_0_S_R;
	 UINT32 SFG_SFG_MID_DUMMY_1_S_R;
	 UINT32 SFG_SFG_MID_DUMMY_2_S_R;
	 UINT32 SFG_SFG_MID_DUMMY_3_S_R;
	 UINT32 SFG_SFG_MID_DUMMY_8_S_R;
	 UINT32 SFG_SFG_MID_DUMMY_10_S_R;
	 UINT32 SFG_SFG_CTRL_DUM_LINE_S_R;
	 UINT32 SFG_SFG_data_after_den_S_R;
	 UINT32 SFG_SFG_insert_subpixel_0_S_R;
	 UINT32 SFG_SFG_insert_subpixel_1_S_R;
	 UINT32 SFG_SFG_insert_subpixel_2_S_R;
	 UINT32 SFG_SFG_insert_subpixel_3_S_R;
	 UINT32 SFG_SFG_ctrl_10_S_R;
	 UINT32 SFG_SFG_Last_ext_pixel_last_flip_S_R;
	 UINT32 SFG_SFG_CTRL_14_S_R;
	 UINT32 SFG_SFG_CTRL_15_S_R;
	 UINT32 SFG_SFG_MID_DUMMY_11_S_R;
	 UINT32 SFG_SFG_MID_DUMMY_12_S_R;
	 UINT32 SFG_SFG_debug_S_R;
	 UINT32 SFG_SFG_data_capture_vh_S_R;
	 UINT32 SFG_SFG_data_capture_src_S_R;
	 UINT32 SFG_SFG_data_capture_read_data_S_R;
	 UINT32 SFG_SFG_last_seg_0_S_R;
	 UINT32 SFG_SFG_last_seg_1_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_0_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_1_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_2_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_6_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_7_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_8_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_12_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_13_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_14_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_18_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_19_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_20_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_3_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_4_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_5_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_9_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_10_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_11_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_15_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_16_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_17_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_21_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_22_S_R;
	 UINT32 SFG_SFG_DRD_CTRL_23_S_R;
	 UINT32 SFG_SFG_START_CTRL_27_S_R;
	 UINT32 SFG_SFG_START_CTRL_28_S_R;
	 UINT32 SFG_SFG_DUMMY_CTRL_29_S_R;
	 UINT32 SFG_SFG_DUMMY_CTRL_30_S_R;
	 UINT32 SFG_SFG1_fw_ext_SUBPIXEL_S_R;
	 UINT32 SFG_SFG1_fw_ext_SUBPIXEL2_S_R;
	 UINT32 SFG_SFG1_DUM_DATA_LINE_0_S_R;
	 UINT32 SFG_SFG1_DUM_DATA_LINE_1_S_R;
	 UINT32 SFG_SFG1_DUM_DATA_LINE_2_S_R;
	 UINT32 SFG_SFG1_DUM_DATA_LINE_3_S_R;
	 UINT32 SFG_SFG1_DUM_DATA_LINE_4_S_R;
	 UINT32 SFG_SFG1_DUM_DATA_LINE_5_S_R;
	 UINT32 SFG_SFG1_DUM_DATA_LINE_6_S_R;
	 UINT32 SFG_SFG1_DUM_DATA_LINE_7_S_R;
	 UINT32 SFG_ZZ_CTRL_2_S_R;
	 UINT32 SFG_SFG_insert_subpixel_4_S_R;
	 UINT32 SFG_SFG_insert_subpixel_5_S_R;
	 UINT32 SFG_SFG_insert_subpixel_6_S_R;
	 UINT32 SFG_SFG_insert_subpixel_7_S_R;
	 UINT32 SFG_SFG_Last_ext_pixel_last_flip_2_S_R;
	 UINT32 SFG_SFG_last_seg_2_S_R;
	 UINT32 SFG_SFG_last_seg_3_S_R;
	 UINT32 SFG_SFG_patgen_ctrl_S_R;
	 UINT32 SFG_SFG_patgen_0_S_R;
	 UINT32 SFG_SFG_patgen_1_S_R;
	 UINT32 SFG_SFG_patgen_2_S_R;
	 UINT32 SFG_SFG_patgen_3_S_R;
	 UINT32 SFG_SFG_patgen_4_S_R;
	 UINT32 SFG_SFG_patgen_5_S_R;
	 UINT32 SFG_SFG_patgen_6_S_R;
	 UINT32 SFG_SFG_patgen_7_S_R;
	 UINT32 SFG_SFG_patgen_8_S_R;
	 UINT32 SFG_SFG_patgen_9_S_R;
	 UINT32 SFG_SFG_patgen_10_S_R;
	 UINT32 SFG_SFG_patgen_11_S_R;
	 UINT32 SFG_SFG_patgen_12_S_R;
	 UINT32 SFG_SFG_irq_ctrl_0_S_R;
	 UINT32 SFG_SFG_irq_ctrl_1_S_R;
	 UINT32 SFG_Pat_det_window_H_ini_sta_width_S_R;
	 UINT32 SFG_Pat_det_window_V_ini_sta_height_S_R;
	 UINT32 SFG_Pattern_detect_CTRL_S_R;
	 UINT32 SFG_Pat_det_ctrl_1_S_R;
	 UINT32 SFG_Pat_det_ctrl_2_S_R;
	 UINT32 SFG_Pat_det_ctrl_3_S_R;
	 UINT32 SFG_Pat_det_ctrl_4_S_R;
	 UINT32 SFG_Pat_det_ctrl_5_S_R;
	 UINT32 SFG_Pat_det_ctrl_7_S_R;
	 UINT32 SFG_Pat_det_ctrl_6_S_R;
	 UINT32 SFG_Pat_det_acc1_S_R;
	 UINT32 SFG_Pat_det_acc2_S_R;
	 UINT32 SFG_Pat_det_acc3_S_R;
	 UINT32 SFG_Pat_det_acc4_S_R;
	 UINT32 SFG_Pat_det_acc5_S_R;
	 UINT32 SFG_Pat_det_acc6_S_R;
	 UINT32 SFG_Pat_det_acc7_S_R;
	 UINT32 SFG_Pat_det_acc8_S_R;
	 UINT32 SFG_Pat_det_acc9_S_R;
	 UINT32 SFG_Pat_det_acc10_S_R;
	 UINT32 SFG_Pat_det_acc11_S_R;
	 UINT32 SFG_Pat_det_acc12_S_R;
	 UINT32 SFG_Pat_det_acc13_S_R;
	 UINT32 SFG_Debug_pin_S_R;
	 UINT32 SFG_SFG2_CTRL_0_S_R;
	 UINT32 SFG_SFG2_PORT_SWAP_S_R;
	 UINT32 SFG_SFG2_FORCE_0_S_R;
	 UINT32 SFG_SFG2_FORCE_1_S_R;
	 UINT32 SFG_SFG2_CRC_CTRL_S_R;
	 UINT32 SFG_SFG2_CRC_RESULT_S_R;
	 UINT32 SFG_SFG2_CRC_R_RESULT_S_R;
	 UINT32 SFG_SFG2_CRC_L_DES_CRC_S_R;
	 UINT32 SFG_SFG2_CRC_R_DES_CRC_S_R;
	 UINT32 SFG_SFG2_CRC_ERR_CNT_S_R;
	 UINT32 SFG_SFG2_TIME_CTRL_0_S_R;
	 UINT32 SFG_SFG2_TIME_CTRL_1_S_R;
	 UINT32 SFG_SFG2_TIME_CTRL_2_S_R;
	 UINT32 SFG_SFG2_DEN_CTRL_S_R;
	 UINT32 SFG_SFG2_TIME_CTRL_AUTO_0_S_R;
	 UINT32 SFG_SFG2_TIME_CTRL_AUTO_1_S_R;
	 UINT32 SFG_SFG2_TIME_CTRL_AUTO_2_S_R;
	 UINT32 SFG_PIF_FIFO_CTRL0_S_R;
	 UINT32 SFG_PIF_FIFO_CTRL1_S_R;
	 UINT32 SFG_PIF_FIFO_CTRL2_S_R;
	 UINT32 SFG_PIF_FIFO_CTRL3_S_R;
	 UINT32 SFG_PIF_FIFO_CTRL4_S_R;
	 UINT32 SFG_PIF_FIFO_CTRL5_S_R;
	 UINT32 SFG_PIF_FIFO_CTRL6_S_R;
	 UINT32 SFG_PIF_FIFO_OSD_CTRL0_S_R;
	 UINT32 SFG_PIF_FIFO_OSD_CTRL1_S_R;
	 UINT32 SFG_PIF_FIFO_OSD_CTRL2_S_R;
	 UINT32 SFG_PIF_FIFO_OSD_CTRL3_S_R;
	 UINT32 SFG_PIF_FIFO_OSD_CTRL4_S_R;
	 UINT32 SFG_PIF_FIFO_OSD_CTRL5_S_R;
	 UINT32 SFG_PIF_FIFO_MUX_CTRL0_S_R;
	 UINT32 SFG_PIF_FIFO_MUX_CTRL1_S_R;
	 UINT32 SFG_PIF_FIFO_MUX_CTRL2_S_R;
	 UINT32 SFG_PIF_MISC_S_R;

	 //interface common
	 UINT32 PIF_LVDS_CTRL1_S_R;
	 UINT32 PIF_LVDS_CTRL2_S_R;
	 UINT32 PIF_LVDS_CTRL3_S_R;
	 UINT32 PIF_LVDS_CTRL4_S_R;
	 UINT32 PIF_LVDS_CTRL5_S_R;
	 UINT32 PIF_MLVDS_CTRL0_S_R;
	 UINT32 PIF_MLVDS_Reset_Pul_CTRL_S_R;
	 UINT32 PIF_MLVDS_CTRL1_S_R;
	 UINT32 PIF_MLVDS_CTRL2_S_R;
	 UINT32 PIF_MLVDS_CTRL3_S_R;
	 UINT32 PIF_MLVDS_CTRL4_S_R;

 /* need confirm @k4l ===> */
	 //local dimming
	 UINT32 LDSPI_LD_SPI_H_TOTAL_S_R;
	 UINT32 LDSPI_LD_SPI_V_TOTAL_S_R;
	 UINT32 LDSPI_LD_SPI_REPRODUCE_S_R;
 /* need confirm @k4l  <=== */

	 //vby_tx
	 UINT32 VBY1_VIDEO_FORMAT_S_R;
	 UINT32 VBY1_LANE_STATUS_S_R;
	 UINT32 VBY1_CTL_S_R;
	 UINT32 VBY1_TRANSMIT_CONTROL_S_R;
	 UINT32 VBY1_TRANSMIT_STATUS_S_R;
	 UINT32 VBY1_THREE_FLAG_S_R;
	 UINT32 VBY1_CRC_CONTROL_S_R;
	 UINT32 VBY1_CRC_RESULT_S_R;
	 UINT32 VBY1_CRC_DES_S_R;
	 UINT32 VBY1_CRC_ERROR_CNT_S_R;
	 UINT32 VBY1_ASYNC_FIFO_RST_S_R;
	 UINT32 VBY1_VBY1_DEBUG_S_R;
	 UINT32 VBY1_VBY1_STATUS_FW_CTRL_S_R;
	 UINT32 VBY1_DATA_CAPTURE_S_R;
	 UINT32 VBY1_DATA_CAPTURE_1_S_R;
	 UINT32 VBY1_DATA_CAPTURE_2_S_R;
	 UINT32 VBY1_DBG_EN_S_R;
	 UINT32 VBY1_DBG_DATA_S_R;
	 UINT32 VBY1_DPHY_CTL_S_R;
	 UINT32 VBY1_DPHY_RD_S_R;
	 UINT32 VBY1_META_CTL_S_R;
	 UINT32 VBY1_META_CTL_1_S_R;
	 UINT32 VBY1_META_DATA_0_S_R;
	 UINT32 VBY1_META_DATA_1_S_R;
	 UINT32 VBY1_META_DATA_2_S_R;
	 UINT32 VBY1_META_DATA_3_S_R;
	 UINT32 VBY1_META_DATA_4_S_R;
	 UINT32 VBY1_META_DATA_5_S_R;
	 UINT32 VBY1_META_DATA_6_S_R;
	 UINT32 VBY1_META_DATA_7_S_R;
	 UINT32 VBY1_META_DATA_8_S_R;
	 UINT32 VBY1_META_DATA_9_S_R;
	 UINT32 VBY1_META_DATA_10_S_R;
	 UINT32 VBY1_META_DATA_11_S_R;
	 UINT32 VBY1_META_DATA_12_S_R;
	 UINT32 VBY1_META_DATA_13_S_R;
	 UINT32 VBY1_META_DATA_14_S_R;
	 UINT32 VBY1_META_DATA_15_S_R;
	 UINT32 VBY1_META_DATA_16_S_R;
	 UINT32 VBY1_META_DATA_17_S_R;
	 UINT32 VBY1_META_DATA_18_S_R;
	 UINT32 VBY1_META_DATA_19_S_R;
	 UINT32 VBY1_META_DATA_20_S_R;
	 UINT32 VBY1_META_DATA_21_S_R;
	 UINT32 VBY1_META_DATA_22_S_R;
	 UINT32 VBY1_META_DATA_23_S_R;
	 UINT32 VBY1_META_DATA_24_S_R;
	 UINT32 VBY1_META_DATA_25_S_R;
	 UINT32 VBY1_META_DATA_26_S_R;
	 UINT32 VBY1_META_DATA_27_S_R;
	 UINT32 VBY1_META_DATA_28_S_R;
	 UINT32 VBY1_META_DATA_29_S_R;
	 
	 //vby1 osd
	 UINT32 VBY1_OSD_OSD_VIDEO_FORMAT_S_R;
	 UINT32 VBY1_OSD_OSD_LANE_STATUS_S_R;
	 UINT32 VBY1_OSD_OSD_CTL_S_R;
	 UINT32 VBY1_OSD_OSD_TRANSMIT_CONTROL_S_R;
	 UINT32 VBY1_OSD_OSD_THREE_FLAG_S_R;
	 UINT32 VBY1_OSD_OSD_CRC_CONTROL_S_R;
	 UINT32 VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_S_R;
	 UINT32 VBY1_OSD_OSD_DPHY_CTL_S_R;


	 UINT32 PINMUX_LVDSPHY_PIF_3_S_R;
	 UINT32 PINMUX_LVDSPHY_PIF_4_S_R;
	 UINT32 PINMUX_LVDSPHY_PIF_5_S_R;
	 UINT32 PINMUX_LVDSPHY_PIF_6_S_R;
	 UINT32 PINMUX_LVDSPHY_Pin_Mux_LVDS_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_S_R;
	 UINT32 PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_S_R;
 } VBE_DISP_SUSPEND_RESUME_T;

 typedef struct {
	 UINT32 EPI_EPI_PACKET_CTR1_0_0_S_R;
	 UINT32 EPI_EPI_PACKET_CTRL_S_R;
	 UINT32 EPI_EPI_CLOCK_CTRL0_S_R;
	 UINT32 EPI_EPI_DGB_READ_S_R;
	 UINT32 EPI_EPI_PORT_OPTION_CTRL_S_R;
	 UINT32 EPI_EPI_CMPI_FRONT_S_R;
	 UINT32 EPI_CMPI_DUMMY_COLOR_0_S_R;
	 UINT32 EPI_CMPI_DUMMY_COLOR_1_S_R;
	 UINT32 EPI_CMPI_DUMMY_COLOR_2_S_R;
	 UINT32 EPI_CMPI_DUMMY_COLOR_3_S_R;
	 UINT32 EPI_EPI_CRC_CTRL_0_S_R;
	 UINT32 EPI_EPI_CRC_CTRL_1_S_R;
	 UINT32 EPI_EPI_CRC_CTRL_2_S_R;
	 UINT32 EPI_EPI_DATA_SRC_S_R;
	 UINT32 EPI_EPI_PACKET_CTR1_INV_S_R;
	 UINT32 EPI_EPI_PACKET_CTR1_INV_TABLE_1_S_R;
	 UINT32 EPI_EPI_PACKET_CTR1_INV_TABLE_2_S_R;
	 UINT32 EPI_EPI_CMPI_RLC_S_R;
	 UINT32 EPI_EPI_CMPI_VBT_S_R;
	 UINT32 EPI_EPI_CMPI_VBT_OPT_S_R;
	 UINT32 EPI_EPI_SCR_TCON_RST_S_R;
	 UINT32 EPI_EPI_SCR8_CTRL_S_R;
	 UINT32 EPI_EPI_SCR8_INI_VAL_S_R;
	 UINT32 EPI_EPI_SCR10_CTRL_S_R;
	 UINT32 EPI_EPI_SCR10_INI_VAL_S_R;
	 UINT32 EPI_EPI_SCR8CM_CTRL_S_R;
	 UINT32 EPI_EPI_SCR8CM_INI_VAL_S_R;
	 UINT32 EPI_EPI_SCR10CM_CTRL_S_R;
	 UINT32 EPI_EPI_SCR10CM_INI_VAL_S_R;
	 UINT32 EPI_EPI_CMPI_PG_CTRL_S_R;
	 UINT32 EPI_EPI_CMPI_PG_CMD_ST_S_R;
	 UINT32 EPI_EPI_CMPI_PG_CMD_CMD1_S_R;
	 UINT32 EPI_EPI_CMPI_PG_CMD_CMD2_S_R;
	 UINT32 EPI_EPI_CMPI_PG_CMD_CMD3_S_R;
	 UINT32 EPI_EPI_CMPI_PG_CMD_CMD4_S_R;
	 UINT32 EPI_EPI_CMPI_PG_CMD_CMD5_S_R;
	 UINT32 EPI_EPI_CMPI_PG_START_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA0_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA1_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA2_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA3_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA4_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA5_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA6_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA7_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA8_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA9_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA10_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA11_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA12_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA13_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA14_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA15_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA16_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA17_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA18_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA19_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA20_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA21_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA22_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA23_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA24_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA25_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA26_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA27_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA28_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA29_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA30_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA31_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA32_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA33_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA34_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA35_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA36_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA37_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA38_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA39_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA40_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA41_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA42_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA43_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA44_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA45_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA46_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA47_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA48_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA49_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA50_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA51_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA52_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA53_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA54_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA55_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA56_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA57_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA58_S_R;
	 UINT32 EPI_EPI_CMPI_PG_DATA59_S_R;
	 UINT32 EPI_EPI_CMPI_PG_END_S_R;
	 UINT32 EPI_EPI_LS_PORT_EN_S_R;
	 UINT32 EPI_EPI_FSM_SEL_S_R;
	 UINT32 EPI_EPI_DATA_PORT_EN_S_R;
	 UINT32 EPI_EPI_DEN_FALL_LOCA_S_R;
	 UINT32 EPI_EPI_LOCK_DEBOUNCE_CTL_S_R;
	 UINT32 EPI_EPI_DBG_REG_FLAG_S_R;
	 UINT32 EPI_EPI_DBG_REG_CTL_S_R;
	 UINT32 EPI_EPI_SOE_CONTROL_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE0_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE0_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE0_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE0_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE1_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE1_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE1_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE1_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE2_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE2_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE2_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE2_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE3_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE3_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE3_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE3_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE4_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE4_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE4_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE4_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE5_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE5_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE5_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE5_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE6_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE6_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE6_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE6_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE7_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE7_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE7_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE7_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE8_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE8_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE8_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE8_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE9_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE9_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE9_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE9_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE10_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE10_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE10_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE10_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE11_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE11_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE11_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE11_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE12_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE12_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE12_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE12_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE13_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE13_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE13_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE13_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE14_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE14_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE14_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE14_S_R;
	 UINT32 EPI_EPI_SOE_LINE0_LANE15_S_R;
	 UINT32 EPI_EPI_SOE_LINE1_LANE15_S_R;
	 UINT32 EPI_EPI_SOE_LINE2_LANE15_S_R;
	 UINT32 EPI_EPI_SOE_LINE3_LANE15_S_R;
	 UINT32 EPI_EPI_LANE_DST_MUX0_S_R;
	 UINT32 EPI_EPI_LANE_DST_MUX1_S_R;
	 UINT32 EPI_EPI_LANE_DST_MUX2_S_R;
	 UINT32 EPI_EPI_LANE_DST_MUX3_S_R;
	 UINT32 EPI_EPI_LANE_DST_MUX4_S_R;
	 UINT32 EPI_EPI_LANE_DST_MUX5_S_R;
	 UINT32 EPI_EPI_LANE_CST_MUX0_S_R;
	 UINT32 EPI_EPI_LANE_CST_MUX1_S_R;
	 UINT32 EPI_EPI_LANE_CST_MUX2_S_R;
	 UINT32 EPI_EPI_LANE_CST_MUX3_S_R;
	 UINT32 EPI_EPI_LANE_CST_MUX4_S_R;
	 UINT32 EPI_EPI_LANE_CST_MUX5_S_R;
	 UINT32 EPI_EPI_LANE_CTR1_MUX0_S_R;
	 UINT32 EPI_EPI_LANE_CTR1_MUX1_S_R;
	 UINT32 EPI_EPI_LANE_CTR1_MUX2_S_R;
	 UINT32 EPI_EPI_LANE_CTR1_MUX3_S_R;
	 UINT32 EPI_EPI_LANE_CTR1_MUX4_S_R;
	 UINT32 EPI_EPI_LANE_CTR1_MUX5_S_R;
	 UINT32 EPI_EPI_LANE_CTR2_MUX0_S_R;
	 UINT32 EPI_EPI_LANE_CTR2_MUX1_S_R;
	 UINT32 EPI_EPI_LANE_CTR2_MUX2_S_R;
	 UINT32 EPI_EPI_LANE_CTR2_MUX3_S_R;
	 UINT32 EPI_EPI_LANE_CTR2_MUX4_S_R;
	 UINT32 EPI_EPI_LANE_CTR2_MUX5_S_R;
	 UINT32 EPI_EPI_LANE_CTR3_MUX0_S_R;
	 UINT32 EPI_EPI_LANE_CTR3_MUX1_S_R;
	 UINT32 EPI_EPI_LANE_CTR3_MUX2_S_R;
	 UINT32 EPI_EPI_LANE_CTR3_MUX3_S_R;
	 UINT32 EPI_EPI_LANE_CTR3_MUX4_S_R;
	 UINT32 EPI_EPI_LANE_CTR3_MUX5_S_R;
	 UINT32 EPI_EPI_TCON_MUX_S_R;
	 UINT32 EPI_EPI_TCON_MUX1_S_R;
	 UINT32 EPI_EPI_TCON_MUX2_S_R;
	 UINT32 EPI_EPI_TCON_MUX3_S_R;
	 UINT32 EPI_EPI_DUMMY_REG_S_R;
	 UINT32 EPI_EPI_HW_DUMMY0_REG_S_R;
	 UINT32 EPI_EPI_HW_DUMMY1_REG_S_R;
	 UINT32 EPI_EPI_HW_DUMMY2_REG_S_R;
	 UINT32 EPI_EPI_HW_DUMMY3_REG_S_R;
	 UINT32 EPI_EPI_CEDS_POL_REG_S_R;
	 UINT32 EPI_EPI_LANE_DST_DATA_S_R;
	 UINT32 EPI_EPI_LANE_CST_DATA_S_R;
	 UINT32 EPI_EPI_LANE_CTR4_DATA_S_R;
	 UINT32 EPI_EPI_LANE_CTR5_DATA_S_R;
	 UINT32 EPI_EPI_LANE0_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE1_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE2_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE3_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE4_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE5_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE6_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE7_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE8_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE9_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE10_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE11_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE12_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE13_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE14_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE15_CTR1_ODATA_S_R;
	 UINT32 EPI_EPI_LANE0_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE1_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE2_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE3_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE4_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE5_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE6_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE7_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE8_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE9_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE10_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE11_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE12_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE13_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE14_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE15_CTR2_ODATA_S_R;
	 UINT32 EPI_EPI_LANE0_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE1_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE2_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE3_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE4_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE5_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE6_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE7_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE8_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE9_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE10_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE11_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE12_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE13_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE14_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_LANE15_CTR3_ODATA_S_R;
	 UINT32 EPI_EPI_GPLUT_CONTROL_S_R;
	 UINT32 EPI_EPI_GPLUT_LINE_01_S_R;
	 UINT32 EPI_EPI_GPLUT_LINE_23_S_R;
	 UINT32 EPI_EPI_GPLUT_LINE_45_S_R;
	 UINT32 EPI_EPI_GPLUT_LINE_67_S_R;
 }VBE_DISP_PANEL_EPI_SUSPEND_RESUME_T;
 typedef struct {
	 UINT32 ISP_ISP_EN_S_R;
	 UINT32 ISP_ISP_TCON_SEL_S_R;
	 UINT32 ISP_ISP_TD_S_R;
	 UINT32 ISP_ISP_VD_SD_SET_FRM_S_R;
	 UINT32 ISP_ISP_TBK_S_R;
	 UINT32 ISP_ISP_BAC_S_R;
	 UINT32 ISP_ISP_EOL_S_R;
	 UINT32 ISP_ISP_BKPOL_S_R;
	 UINT32 ISP_ISP_POLP_S_R;
	 UINT32 ISP_ISP_POLN_S_R;
	 UINT32 ISP_ISP_SETTING00_00_S_R;
	 UINT32 ISP_ISP_SETTING00_04_S_R;
	 UINT32 ISP_ISP_SETTING00_08_S_R;
	 UINT32 ISP_ISP_SETTING01_00_S_R;
	 UINT32 ISP_ISP_SETTING01_04_S_R;
	 UINT32 ISP_ISP_SETTING01_08_S_R;
	 UINT32 ISP_ISP_SETTING02_00_S_R;
	 UINT32 ISP_ISP_SETTING02_04_S_R;
	 UINT32 ISP_ISP_SETTING02_08_S_R;
	 UINT32 ISP_ISP_SETTING03_00_S_R;
	 UINT32 ISP_ISP_SETTING03_04_S_R;
	 UINT32 ISP_ISP_SETTING03_08_S_R;
	 UINT32 ISP_ISP_SETTING04_S_R;
	 UINT32 ISP_ISP_SETTING08_S_R;
	 UINT32 ISP_ISP_SETTING12_S_R;
	 UINT32 ISP_ISP_SETTING16_S_R;
	 UINT32 ISP_ISP_SETTING20_S_R;
	 UINT32 ISP_ISP_SETTING24_S_R;
	 UINT32 ISP_ISP_SETTING28_S_R;
	 UINT32 ISP_ISP_SETTING32_S_R;
	 UINT32 ISP_ISP_SETTING36_S_R;
	 UINT32 ISP_ISP_SETTING40_S_R;
	 UINT32 ISP_ISP_SETTING44_S_R;
	 UINT32 ISP_ISP_SETTING48_S_R;
	 UINT32 ISP_ISP_SETTING52_S_R;
	 UINT32 ISP_ISP_SETTING56_S_R;
	 UINT32 ISP_ISP_CHPORT00_S_R;
	 UINT32 ISP_ISP_CHPORT08_S_R;
	 UINT32 ISP_ISP_Dummy0_S_R;
	 UINT32 ISP_ISP_Dummy1_S_R;
	 UINT32 ISP_ISP_CRC_CTRL_S_R;
	 UINT32 ISP_ISP_CRC_RESULT_S_R;
	 UINT32 ISP_ISP_CRC_GOLDEN_S_R;
 } VBE_DISP_PANEL_ISP_SUSPEND_RESUME_T;

 typedef struct {
	 UINT32 TCON_TCON_CTRL_S_R;
	 UINT32 TCON_TCON_IP_EN_S_R;
	 UINT32 TCON_TCON0_HSE_S_R;
	 UINT32 TCON_TCON0_VSE_S_R;
	 UINT32 TCON_TCON0_Ctrl_S_R;
	 UINT32 TCON_TCON0_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON0_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON0_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON1_HSE_S_R;
	 UINT32 TCON_TCON1_VSE_S_R;
	 UINT32 TCON_TCON1_Ctrl_S_R;
	 UINT32 TCON_TCON1_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON1_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON1_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON2_HSE_S_R;
	 UINT32 TCON_TCON2_VSE_S_R;
	 UINT32 TCON_TCON2_Ctrl_S_R;
	 UINT32 TCON_TCON2_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON2_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON2_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON3_HSE_S_R;
	 UINT32 TCON_TCON3_VSE_S_R;
	 UINT32 TCON_TCON3_Ctrl_S_R;
	 UINT32 TCON_TCON3_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON3_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON3_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON4_HSE_S_R;
	 UINT32 TCON_TCON4_VSE_S_R;
	 UINT32 TCON_TCON4_Ctrl_S_R;
	 UINT32 TCON_TCON4_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON4_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON4_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON5_HSE_S_R;
	 UINT32 TCON_TCON5_VSE_S_R;
	 UINT32 TCON_TCON5_Ctrl_S_R;
	 UINT32 TCON_TCON5_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON5_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON5_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON6_HSE_S_R;
	 UINT32 TCON_TCON6_VSE_S_R;
	 UINT32 TCON_TCON6_Ctrl_S_R;
	 UINT32 TCON_TCON6_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON6_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON6_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON7_HSE_S_R;
	 UINT32 TCON_TCON7_VSE_S_R;
	 UINT32 TCON_TCON7_Ctrl_S_R;
	 UINT32 TCON_TCON7_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON7_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON7_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON8_HSE_S_R;
	 UINT32 TCON_TCON8_VSE_S_R;
	 UINT32 TCON_TCON8_Ctrl_S_R;
	 UINT32 TCON_TCON8_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON8_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON8_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON9_HSE_S_R;
	 UINT32 TCON_TCON9_VSE_S_R;
	 UINT32 TCON_TCON9_Ctrl_S_R;
	 UINT32 TCON_TCON9_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON9_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON9_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON10_HSE_S_R;
	 UINT32 TCON_TCON10_VSE_S_R;
	 UINT32 TCON_TCON10_Ctrl_S_R;
	 UINT32 TCON_TCON10_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON10_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON10_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON11_HSE_S_R;
	 UINT32 TCON_TCON11_VSE_S_R;
	 UINT32 TCON_TCON11_Ctrl_S_R;
	 UINT32 TCON_TCON11_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON11_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON11_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON12_HSE_S_R;
	 UINT32 TCON_TCON12_VSE_S_R;
	 UINT32 TCON_TCON12_Ctrl_S_R;
	 UINT32 TCON_TCON12_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON12_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON12_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON13_HSE_S_R;
	 UINT32 TCON_TCON13_VSE_S_R;
	 UINT32 TCON_TCON13_Ctrl_S_R;
	 UINT32 TCON_TCON13_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON13_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON13_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON14_HSE_S_R;
	 UINT32 TCON_TCON14_VSE_S_R;
	 UINT32 TCON_TCON14_Ctrl_S_R;
	 UINT32 TCON_TCON14_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON14_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON14_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON15_HSE_S_R;
	 UINT32 TCON_TCON15_VSE_S_R;
	 UINT32 TCON_TCON15_Ctrl_S_R;
	 UINT32 TCON_TCON15_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON15_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON15_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON16_HSE_S_R;
	 UINT32 TCON_TCON16_VSE_S_R;
	 UINT32 TCON_TCON16_Ctrl_S_R;
	 UINT32 TCON_TCON16_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON16_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON16_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON17_HSE_S_R;
	 UINT32 TCON_TCON17_VSE_S_R;
	 UINT32 TCON_TCON17_Ctrl_S_R;
	 UINT32 TCON_TCON17_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON17_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON17_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON18_HSE_S_R;
	 UINT32 TCON_TCON18_VSE_S_R;
	 UINT32 TCON_TCON18_Ctrl_S_R;
	 UINT32 TCON_TCON18_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON18_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON18_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON19_HSE_S_R;
	 UINT32 TCON_TCON19_VSE_S_R;
	 UINT32 TCON_TCON19_Ctrl_S_R;
	 UINT32 TCON_TCON19_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON19_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON19_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON20_HSE_S_R;
	 UINT32 TCON_TCON20_VSE_S_R;
	 UINT32 TCON_TCON20_Ctrl_S_R;
	 UINT32 TCON_TCON20_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON20_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON20_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON21_HSE_S_R;
	 UINT32 TCON_TCON21_VSE_S_R;
	 UINT32 TCON_TCON21_Ctrl_S_R;
	 UINT32 TCON_TCON21_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON21_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON21_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON22_HSE_S_R;
	 UINT32 TCON_TCON22_VSE_S_R;
	 UINT32 TCON_TCON22_Ctrl_S_R;
	 UINT32 TCON_TCON22_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON22_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON22_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON23_HSE_S_R;
	 UINT32 TCON_TCON23_VSE_S_R;
	 UINT32 TCON_TCON23_Ctrl_S_R;
	 UINT32 TCON_TCON23_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON23_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON23_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON24_HSE_S_R;
	 UINT32 TCON_TCON24_VSE_S_R;
	 UINT32 TCON_TCON24_Ctrl_S_R;
	 UINT32 TCON_TCON24_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON24_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON24_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON25_HSE_S_R;
	 UINT32 TCON_TCON25_VSE_S_R;
	 UINT32 TCON_TCON25_Ctrl_S_R;
	 UINT32 TCON_TCON25_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON25_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON25_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON26_HSE_S_R;
	 UINT32 TCON_TCON26_VSE_S_R;
	 UINT32 TCON_TCON26_Ctrl_S_R;
	 UINT32 TCON_TCON26_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON26_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON26_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON27_HSE_S_R;
	 UINT32 TCON_TCON27_VSE_S_R;
	 UINT32 TCON_TCON27_Ctrl_S_R;
	 UINT32 TCON_TCON27_ACROSS_LINE_CONTROL3_S_R;
	 UINT32 TCON_TCON27_ACROSS_FRAME_CONTROL_S_R;
	 UINT32 TCON_TCON27_FRAME_HL_CONTROL_S_R;
	 UINT32 TCON_TCON_PWM0_CONTROL0_S_R;
	 UINT32 TCON_TCON_PWM0_CONTROL1_S_R;
	 UINT32 TCON_TCON_PWM0_CONTROL2_S_R;
	 UINT32 TCON_TCON_PWM1_CONTROL0_S_R;
	 UINT32 TCON_TCON_PWM1_CONTROL1_S_R;
	 UINT32 TCON_TCON_PWM1_CONTROL2_S_R;
	 UINT32 TCON_TCON_PWM_DB_SEL_S_R;
 }VBE_DISP_PANEL_TCON_SUSPEND_RESUME_T;
#endif

/*-----------------------------------------------------------------------------
	System call
------------------------------------------------------------------------------*/
#define VBE_DEVICE_NUM							1
#define VBE_DEVICE_NAME						"vbedev"
#define VBE_IOC_MAGIC						   'e'

#define VBE_MAJOR 0   /* dynamic major by default */
#define VBE_NR_DEVS 1    /* se0 through se3 */

//index range
//0 ~ 255
#define VBE_IOC_START_INDEX 0

enum VBE_ioc_idx
{
	VBE_IOC_IDX_0 = VBE_IOC_START_INDEX,//0
	VBE_IOC_IDX_1,
	VBE_IOC_IDX_2,
	VBE_IOC_IDX_3,
	VBE_IOC_IDX_4,
	VBE_IOC_IDX_5,
	VBE_IOC_IDX_6,
	VBE_IOC_IDX_7,
	VBE_IOC_IDX_8,
	VBE_IOC_IDX_9,
	VBE_IOC_IDX_10,
	VBE_IOC_IDX_11,
	VBE_IOC_IDX_12,
	VBE_IOC_IDX_13,
	VBE_IOC_IDX_14,
	VBE_IOC_IDX_15,
	VBE_IOC_IDX_16,
	VBE_IOC_IDX_17,
	VBE_IOC_IDX_18,
	VBE_IOC_IDX_19,
	VBE_IOC_IDX_20,
	VBE_IOC_IDX_21,
	VBE_IOC_IDX_22,
	VBE_IOC_IDX_23,
	VBE_IOC_IDX_24,
	VBE_IOC_IDX_25,
	VBE_IOC_IDX_26,
	VBE_IOC_IDX_27,
	VBE_IOC_IDX_28,
	VBE_IOC_IDX_29,
	VBE_IOC_IDX_30,
	VBE_IOC_IDX_31,
	VBE_IOC_IDX_32,
	VBE_IOC_IDX_33,
	VBE_IOC_IDX_34,
	VBE_IOC_IDX_35,
	VBE_IOC_IDX_36,
	VBE_IOC_IDX_37,
	VBE_IOC_IDX_38,
	VBE_IOC_IDX_39,
	VBE_IOC_IDX_40,
	VBE_IOC_IDX_41,
	VBE_IOC_IDX_42,
	VBE_IOC_IDX_43,
	VBE_IOC_IDX_44,
	VBE_IOC_IDX_45,
	VBE_IOC_IDX_46,
	VBE_IOC_IDX_47,
	VBE_IOC_IDX_48,
	VBE_IOC_IDX_49,
	VBE_IOC_IDX_50,
	VBE_IOC_IDX_51,
	VBE_IOC_IDX_52,
	VBE_IOC_IDX_53,
	VBE_IOC_IDX_54,
	VBE_IOC_IDX_55,
	VBE_IOC_IDX_56,
	VBE_IOC_IDX_57,
	VBE_IOC_IDX_58,
	VBE_IOC_IDX_59,
	VBE_IOC_IDX_60,
	VBE_IOC_IDX_61,
	VBE_IOC_IDX_62,
	VBE_IOC_IDX_63,
	VBE_IOC_IDX_64,
	VBE_IOC_IDX_65,
	VBE_IOC_IDX_66,
	VBE_IOC_IDX_67,
	VBE_IOC_IDX_68,
	VBE_IOC_IDX_69,
	VBE_IOC_IDX_70,
	VBE_IOC_IDX_71,
	VBE_IOC_IDX_72,
	VBE_IOC_IDX_73,
	VBE_IOC_IDX_74,
	VBE_IOC_IDX_75,
	VBE_IOC_IDX_76,
	VBE_IOC_IDX_77,
	VBE_IOC_IDX_78,
	VBE_IOC_IDX_79,
	VBE_IOC_IDX_80,
	VBE_IOC_IDX_81,
	VBE_IOC_IDX_82,
	VBE_IOC_IDX_83,
	VBE_IOC_IDX_84,
	VBE_IOC_IDX_85,
	VBE_IOC_IDX_86,
	VBE_IOC_IDX_87,
	VBE_IOC_IDX_88,
	VBE_IOC_IDX_89,
	VBE_IOC_IDX_90,
	VBE_IOC_IDX_91,
	VBE_IOC_IDX_92,
	VBE_IOC_IDX_93,
	VBE_IOC_IDX_94,
	VBE_IOC_IDX_95,
	VBE_IOC_IDX_96,
	VBE_IOC_IDX_97,
	VBE_IOC_IDX_98,
	VBE_IOC_IDX_99,
	VBE_IOC_IDX_100,
	VBE_IOC_IDX_101,
	VBE_IOC_IDX_102,
	VBE_IOC_IDX_103,
	VBE_IOC_IDX_104,
	VBE_IOC_IDX_105,
	VBE_IOC_IDX_106,
	VBE_IOC_IDX_107,
	VBE_IOC_IDX_108,
	VBE_IOC_IDX_109,
	VBE_IOC_IDX_110,
	VBE_IOC_IDX_111,
	VBE_IOC_IDX_112,
	VBE_IOC_IDX_113,
	VBE_IOC_MAXNR,
};

#define VBE_IOC_DISP_INITIALIZE					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_0, KADP_DISP_PANEL_INFO_T)
#define VBE_IOC_DISP_UNINITIALIZE 	    		_IO(VBE_IOC_MAGIC,  VBE_IOC_IDX_1)
#define VBE_IOC_DISP_WRITE_DIAPLAYOUTPUT 		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_2, BOOLEAN)
#define VBE_IOC_DISP_WRITE_MUTE					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_3, BOOLEAN)
#define VBE_IOC_DISP_WRITE_SPREADSPECTRUM 		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_4, KADP_VBE_DISP_SpreadSpectrum_T)
#define VBE_IOC_DISP_WRITE_VIDEO_MIRROR			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_5, KADP_VBE_DISP_VideoMirror_T)
#define VBE_IOC_DISP_WRITE_DISPLAY_FORMAT 		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_6, KADP_VBE_DISP_FORMAT_T)
#define VBE_IOC_DISP_WRITE_FRAMERATE 			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_7, KADP_VBE_DISP_Framerate_T)
#define VBE_IOC_DISP_READ_OUTPUTFRAMERATE 		_IOR(VBE_IOC_MAGIC, VBE_IOC_IDX_8, unsigned char)
#define VBE_IOC_DISP_WRITE_BGCOLOR 				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_9, KADP_VBE_DISP_BGColor_T)
#define VBE_IOC_DISP_OD_WRITE_TABLE 			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_10, int)
#define VBE_IOC_DISP_OD_ENABLE					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_11, BOOLEAN)
#define VBE_IOC_DISP_PCID_WRITE_TABLE 			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_12, int)
#define VBE_IOC_DISP_PCID_ENABLE				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_13, BOOLEAN)
#define VBE_IOC_DISP_SR_INITIALIZE 				_IO(VBE_IOC_MAGIC,  VBE_IOC_IDX_14)
#define VBE_IOC_DISP_SR_UNINITIALIZE 			_IO(VBE_IOC_MAGIC,  VBE_IOC_IDX_15)
#define VBE_IOC_DISP_SR_WRITE_CONTROL 			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_16, int)
#define VBE_IOC_DISP_TCON_INITILIZE  			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_17, int)
#define VBE_IOC_DISP_TCON_UNINITILIZE  			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_18, int)
#define VBE_IOC_DISP_TCON_ENABLE_TCON  			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_19, int)
#define VBE_IOC_DISP_TCON_EABLE_COLORTEMP  		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_20, int)
#define VBE_IOC_DISP_TCON_EABLE_DGA  			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_21, int)
#define VBE_IOC_DISP_TCON_ENABLE_DITHER  		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_22, int)
#define VBE_IOC_DISP_TCON_SET_DITHER_MODE  		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_23, int)
#define VBE_IOC_DISP_TCON_SET_GAMMA_TABLE  		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_24, int)
#define VBE_IOC_DISP_TCON_H_REVERSE  			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_25, int)
#define VBE_IOC_DISP_TCON_SET_CLOCK  			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_26, int)
#define VBE_IOC_DISP_TCON_WRITE_REGISTER  		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_27, int)
#define VBE_IOC_DISP_TCON_READ_REGISTER  		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_28, int)
#define VBE_IOC_DISP_TCON_SET_LVDS_FORMAT  		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_29, int)
#define VBE_IOC_DISP_TCON_DEBUG  				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_30, int)
#define VBE_IOC_AVE_INITILIZE  					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_31, int)
#define VBE_IOC_AVE_UNINITILIZE  				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_32, int)
#define VBE_IOC_AVE_OPEN  						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_33, int)
#define VBE_IOC_AVE_CLOSE  						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_34, int)
#define VBE_IOC_AVE_CONNECT  					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_35, int)
#define VBE_IOC_AVE_DISCONNECT  				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_36, int)
#define VBE_IOC_AVE_IS_ATV_WATCHING  			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_37, int)
#define VBE_IOC_AVE_SET_ATV_WATCHING  			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_38, int)
#define VBE_IOC_AVE_VBI_SET_INSERT  			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_39, int)
#define VBE_IOC_AVE_VBI_INSERT_DATA   			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_40, int)
#define VBE_IOC_AVE_SET_VCR_WIN_BLANK  			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_41, int)
#define VBE_IOC_DISP_RESUME						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_42, KADP_DISP_PANEL_INFO_T)
#define VBE_IOC_DISP_CONNECT					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_43, KADP_DISP_WINDOW_T)
#define VBE_IOC_DISP_DISCONNECT					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_44, KADP_DISP_WINDOW_T)
#define VBI_IOC_DISP_LVDS_TO_HDMI				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_45, KADP_VBE_DISP_FORMAT_T)
#define VBE_IOC_TRIDFMT_INITIALIZE				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_46, int)
#define VBE_IOC_TRIDFMT_UNINITIALIZE			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_47, int)
#define VBE_IOC_TRIDFMT_OPEN					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_48, int)
#define VBE_IOC_TRIDFMT_CLOSE					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_49, int)
#define VBE_IOC_TRIDFMT_SETSCREENONOFF			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_50, int)
#define VBE_IOC_TRIDFMT_SETFMTMODE				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_51, int)
#define VBE_IOC_TRIDFMT_SETFMTMODE_TEMP			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_52, int)
#define VBE_IOC_TRIDFMT_SET3DMODEONOFF			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_53, int)
#define VBE_IOC_TRIDFMT_TOGGLEINPUTLRFRAME		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_54, int)
#define VBE_IOC_TRIDFMT_SELECTINPUTFORMAT		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_55, int)
#define VBE_IOC_TRIDFMT_SETINPUTFRAMERATE		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_56, int)
#define VBE_IOC_TRIDFMT_TOGGLEOUTPUTLRFRAME		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_57, int)
#define VBE_IOC_TRIDFMT_SELECTOUTPUTFORMAT		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_58, int)
#define VBE_IOC_TRIDFMT_SETOUTPUTFRAMERATE		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_59, int)
#define VBE_IOC_TRIDFMT_GET3DCFGINFO			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_60, int)
#define VBE_IOC_TRIDFMT_SET3DCFGINFO			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_61, int)
#define VBE_IOC_TRIDFMT_SETCONVVALUE			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_62, int)
#define VBE_IOC_TRIDFMT_CTRLDEPTH				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_63, int)
#define VBE_IOC_TRIDFMT_AUTOCONVERGENCEENABLE	_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_64, int)
#define VBE_IOC_TRIDFMT_SET3DVIDEOOUTPUTMODE	_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_65, int)
#define VBE_IOC_TRIDFMT_SET3DDEPTHCONTROLLER	_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_66, int)
#define VBE_IOC_TRIDFMT_DEBUG					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_67, int)
#define V3D_IOC_INITIALIZE						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_68, int)
#define V3D_IOC_SET3DFMT						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_69, int)
#define V3D_IOC_SETLRSEQ						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_70, int)
#define V3D_IOC_CTRLCONVERGENCE					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_71, int)
#define V3D_IOC_CTRLDEPTH						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_72, int)
#define V3D_IOC_SETAUTOCONVENABLE				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_73, int)
#define V3D_IOC_GETAUTODETECTINGRESULT			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_74, int)
#define V3D_IOC_SETAUTODETECTINGTYPE			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_75, int)
#define VBE_IOC_SETORBIT						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_76, int)
#define VBE_IOC_SETBOEMODE						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_77, int)
#define VBE_IOC_GETBOEVERSION					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_78, int)
#define VBE_IOC_SETMLEMODE						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_79, int)
#define VBE_IOC_SETINNERPATTERN					_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_80, int)
#define VBE_IOC_SETDGA4CH						_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_81, int)
#define VBE_IOC_SETBOERGBWBYPASS				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_82, int)
#define VBE_IOC_SETFRAMEGAINLIMIT				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_83, int)
#define VBE_IOC_GETFRAMEGAINLIMIT				_IOR(VBE_IOC_MAGIC, VBE_IOC_IDX_84, int)
#define VBE_IOC_SETPIXELGAINLIMIT				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_85, int)
#define VBE_IOC_GETPIXELGAINLIMIT				_IOR(VBE_IOC_MAGIC, VBE_IOC_IDX_86, int)
#define VBE_IOC_GETPANELDISPSIZE           		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_87, int)
#define VBE_IOC_TSCIC_LOAD                      _IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_88, int)
#define VBE_IOC_SETOLEDLSR                      _IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_89, int)
#define VBE_IOC_SETEPIDATASCRAMBLE              _IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_90, int)
#define VBE_IOC_SETADVANCED10BIT                _IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_91, int)
#define VBE_IOC_SETOLEDLSRTUNNING               _IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_92, int)
#define VBE_IOC_SETOLEDCPCTUNNING               _IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_93, int)
#define VBE_IOC_DISP_DATAFRAMESYNC				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_94, BOOLEAN)
#define VBE_IOC_DISP_SETPAUSE					_IO(VBE_IOC_MAGIC,  VBE_IOC_IDX_95)
#define VBE_IOC_DISP_ADAPTIVESTREAM_FRAMERATE	_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_96, int)
#define VBE_IOC_PANEL_MODE_SET                  _IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_97, KADP_PANEL_MODE_SET_T)
#define VBE_IOC_SET_FORCEBG_COLOR			    _IO(VBE_IOC_MAGIC,  VBE_IOC_IDX_98)
#define VBE_IOC_SET_PANEL_SFG			        _IO(VBE_IOC_MAGIC,  VBE_IOC_IDX_99)
#define VBE_IOC_SETOLEDGSR                  	_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_100, int)
#define VBE_IOC_MPLUSSET                  		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_101, int)
#define VBE_IOC_MPLUSGET                  		_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_102, int)
#define VBE_IOC_GET_OSD_ALPHA_APL               _IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_103, int)
#define VBE_IOC_SET_OSD_RGB_LEVEL               _IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_104, int)
#define VBE_IOC_SET_PANEL_FORCEBG_COLOR	 		_IO(VBE_IOC_MAGIC, VBE_IOC_IDX_105)
#define VBE_IOC_SET_PANEL_TI_MODE 	 			_IO(VBE_IOC_MAGIC, VBE_IOC_IDX_106)
#define VBE_IOC_SET_PANEL_BIT_MODE	    		_IO(VBE_IOC_MAGIC, VBE_IOC_IDX_107)
#define VBE_IOC_SET_PANEL_SWAP_MODE	    		_IO(VBE_IOC_MAGIC, VBE_IOC_IDX_108)
#define VBE_IOC_DISP_READ_SPREADSPECTRUM		_IOR(VBE_IOC_MAGIC, VBE_IOC_IDX_109, KADP_VBE_DISP_SpreadSpectrum_T*)
#define VBE_IOC_SET_LANE_POWER_ENABLE			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_110, int)
#define VBE_IOC_SET_LVDS_CURRENT				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_111, int)
#define VBE_IOC_SET_VCOMPatternDraw				_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_112, int)
#define VBE_IOC_SET_VCOMPatternCtrl 			_IOW(VBE_IOC_MAGIC, VBE_IOC_IDX_113, int)
#endif

