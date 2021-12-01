#ifndef _VSC_DEVICE_ID_H_
#define _VSC_DEVICE_ID_H_

#ifndef BOOLEAN
#ifndef _EMUL_WIN
typedef	unsigned int			__BOOLEAN;
#define BOOLEAN __BOOLEAN
#else
typedef	unsigned char			__BOOLEAN;
#define BOOLEAN __BOOLEAN
#endif
#endif

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

/*-----------------------------------------------------------------------------
	Macro Definitions
------------------------------------------------------------------------------*/
#if !defined(BIT0) && !defined(BIT1)
#define		BIT0		0x00000001
#define		BIT1		0x00000002
#define		BIT2		0x00000004
#define		BIT3		0x00000008
#define		BIT4		0x00000010
#define		BIT5		0x00000020
#define		BIT6		0x00000040
#define		BIT7		0x00000080
#define		BIT8		0x00000100
#endif

#define AVD_DI_5A_WIDTH 960
#define AVD_27M_VGIP_WIDTH 1440
#define AVD_NORMAL_WIDTH 720

#define FRC_MUTE_MASK (BIT7)
#define VIDEO_DDI_RECT_T VIDEO_RECT_T

//Frame delay boundary
#define MODE_480I_FRAME_DELAY_LOWER_BOUNDARY 	0
#define MODE_480I_FRAME_DELAY_UPPER_BOUNDARY 	65
#define MODE_576I_FRAME_DELAY_LOWER_BOUNDARY 	0
#define MODE_576I_FRAME_DELAY_UPPER_BOUNDARY 	64
#define MODE_480P_FRAME_DELAY_LOWER_BOUNDARY 	0
#define MODE_480P_FRAME_DELAY_UPPER_BOUNDARY 	78
#define MODE_576P_FRAME_DELAY_LOWER_BOUNDARY 	0
#define MODE_576P_FRAME_DELAY_UPPER_BOUNDARY 	46
#define MODE_720P50_FRAME_DELAY_LOWER_BOUNDARY 	0
#define MODE_720P50_FRAME_DELAY_UPPER_BOUNDARY 	98
#define MODE_720P60_FRAME_DELAY_LOWER_BOUNDARY 	0
#define MODE_720P60_FRAME_DELAY_UPPER_BOUNDARY 	30
#define MODE_1080P24_FRAME_DELAY_LOWER_BOUNDARY 0
#define MODE_1080P24_FRAME_DELAY_UPPER_BOUNDARY 30
#define MODE_1080P30_FRAME_DELAY_LOWER_BOUNDARY 540
#define MODE_1080P30_FRAME_DELAY_UPPER_BOUNDARY 600
#define MODE_1080P30_FRAME_DELAY_LOWER_BOUNDARY_60HZ_PANEL 270
#define MODE_1080P30_FRAME_DELAY_UPPER_BOUNDARY_60HZ_PANEL 300
#define MODE_1080P50_FRAME_DELAY_LOWER_BOUNDARY 0
#define MODE_1080P50_FRAME_DELAY_UPPER_BOUNDARY 30
#define MODE_1080P60_FRAME_DELAY_LOWER_BOUNDARY 0
#define MODE_1080P60_FRAME_DELAY_UPPER_BOUNDARY 30
#define MODE_1080I50_FRAME_DELAY_LOWER_BOUNDARY 0
#define MODE_1080I50_FRAME_DELAY_UPPER_BOUNDARY 30
#define MODE_1080I60_FRAME_DELAY_LOWER_BOUNDARY 0
#define MODE_1080I60_FRAME_DELAY_UPPER_BOUNDARY 30
#define MODE_4K2K24_FRAME_DELAY_LOWER_BOUNDARY 	1620
#define MODE_4K2K24_FRAME_DELAY_UPPER_BOUNDARY 	2160
#define MODE_4K2K30_FRAME_DELAY_LOWER_BOUNDARY 	1620
#define MODE_4K2K30_FRAME_DELAY_UPPER_BOUNDARY 	2160
#define MODE_4K2K50_FRAME_DELAY_LOWER_BOUNDARY 	1080
#define MODE_4K2K50_FRAME_DELAY_UPPER_BOUNDARY 	1142
#define MODE_4K2K60_FRAME_DELAY_LOWER_BOUNDARY 	1080
#define MODE_4K2K60_FRAME_DELAY_UPPER_BOUNDARY 	1142



/**
 * Video Window Rect.
 *
 * @see DDI Implementation Guide
*/
#ifndef VIDEO_WID_T
		typedef enum
		{
			VIDEO_WID_MIN	= 0,				/**< WID min */
			VIDEO_WID_0 	= VIDEO_WID_MIN,	/**< WID main window */
			VIDEO_WID_1,						/**< WID sub window */
			VIDEO_WID_2,
			VIDEO_WID_3,
			VIDEO_WID_MAX	= VIDEO_WID_3,		/**< WID max */
			VIDEO_WID_MAXN, 					/**< WID max number */
		} __VIDEO_WID_T;
#define VIDEO_WID_T __VIDEO_WID_T
#endif
	/**
	 * Video Window Rect.
	 *
	 * @see DDI Implementation Guide
	*/
#ifndef VIDEO_RECT_T
	typedef struct
	{
		unsigned short		x;	/**< horizontal Start Position in pixel [0,].*/
		unsigned short		y;	/**< vertical	Start Position in pixel [0,].*/
		unsigned short		w;	/**< horizontal Size(Width)    in pixel [0,].*/
		unsigned short		h;	/**< vertical	Size(Height)   in pixel [0,].*/
	} __VIDEO_RECT_T;
#define VIDEO_RECT_T __VIDEO_RECT_T
#endif

#ifndef TRIDTV_SC_OUTPUT_TYPE_T
typedef enum
{
	SC_OUT_SINGLE_2D  = 0 ,///< single nomal
	SC_OUT_SINGLE_TB      ,///< top and bottom
	SC_OUT_SINGLE_SS      ,///< side by side
	SC_OUT_SINGLE_FS      ,///< Frame Sequential(Interleaving)

	SC_OUT_DUAL_FHD       ,///< dual screen
	SC_OUT_DUAL_TB        ,///< dual top and bottom for H13 internal type
	SC_OUT_DUAL_SS        ,///< dual side by side for H13 internal type
	SC_OUT_SINGLE_T       ,//<H13 DRIVE 요청 SINGLE TOP ONLY>
	SC_OUT_SINGLE_LA     ,
	SC_OUT_MAX            ,//MAX
}__TRIDTV_SC_OUTPUT_TYPE_T;
#define TRIDTV_SC_OUTPUT_TYPE_T __TRIDTV_SC_OUTPUT_TYPE_T
#endif

#ifndef TRIDTV_INPUT_TYPE_T
typedef enum
{
	/*	Drive에서 아래 value 사용 안함.	*/
	INPUT_TYPE_3DOFF = 0,			//VIDEO_3D_FORMAT_2D,

	//interim format - half
	INPUT_TYPE_TOPNBOTTOM,		//VIDEO_3D_FORMAT_TOP_BOTTOM,
	INPUT_TYPE_SIDEBYSIDE,		//VIDEO_3D_FORMAT_SIDEBYSIDE_HALF,
	INPUT_TYPE_CHECKERBOARD,	//VIDEO_3D_FORMAT_CHECKER_BOARD,
	INPUT_TYPE_FRAMESEQ,		//VIDEO_3D_FORMAT_FRAME_SEQ
	INPUT_TYPE_COLUMN_INTERLEAVE,	/**< for H.264*/
	INPUT_TYPE_LINE_INTERLEAVE_HALF,	/**< for H.264*/

	//Full format
	INPUT_TYPE_FRAMEPAC,			//VIDEO_3D_FORMAT_FRAME_PACKING
	INPUT_TYPE_FIELD_ALTERNATIVE,	//VIDEO_3D_FORMAT_FIELD_ALTERNATIVE
	INPUT_TYPE_LINE_ALTERNATIVE,	//VIDEO_3D_FORMAT_LINE_ALTERNATIVE
	INPUT_TYPE_SIDEBYSIDE_FULL,		//VIDEO_3D_FORMAT_SIDEBYSIDE_FULL,
	INPUT_TYPE_DUALSTREAM, 	/**< Full format*/

	/*	Drive에서 아래 value 사용 안함. */
	INPUT_TYPE_2DTO3D,			//VIDEO_3D_FORMAT_2DTO3D,

	INPUT_TYPE_MAX,
}__TRIDTV_INPUT_TYPE_T;
#define TRIDTV_INPUT_TYPE_T __TRIDTV_INPUT_TYPE_T
#endif
/**
 * Define 3D Input LR Type.
 */
#ifndef  TRIDTV_INPUT_LR_SEQ_T
typedef enum
{
	INPUT_LR_SEQ = 0,
	INPUT_RL_SEQ,
	INPUT_LR_MAX,
} __TRIDTV_INPUT_LR_SEQ_T;
#define TRIDTV_INPUT_LR_SEQ_T __TRIDTV_INPUT_LR_SEQ_T
#endif

#ifndef TRIDTV_3DMODE_FLAG_T
typedef enum
{
	TRIDTV_3DMODE_OFF= 0,
	TRIDTV_3DMODE_ON 	,
	TRIDTV_3DMODE_2DTO3D,
	TRIDTV_3DMODE_3DTO2D,
	TRIDTV_3DMODE_MAX,
} __TRIDTV_3DMODE_FLAG_T;
#define TRIDTV_3DMODE_FLAG_T __TRIDTV_3DMODE_FLAG_T
#endif

#ifndef TRIDTV_SCALER_CTRL_T
typedef struct {

	TRIDTV_3DMODE_FLAG_T     mode;		///< select formatter operation mode. it controls 3D mode ON/OFF.
	TRIDTV_INPUT_TYPE_T		 in_fmt;	///< input image format(top/bottom, sidebyside, checkboard, frame, field seq, dual 2d)
	TRIDTV_SC_OUTPUT_TYPE_T  out_fmt;	///< output image format(top/bottom, sidebyside, checkboard, frame, field seq)
	TRIDTV_INPUT_LR_SEQ_T    lr;		///< output left/right first order
}__TRIDTV_SCALER_CTRL_T;
#define TRIDTV_SCALER_CTRL_T __TRIDTV_SCALER_CTRL_T
#endif

typedef enum {
	VIDEO_SEAMLESS_OFF,
	VIDEO_SEAMLESS_AUTO,      ///< Neflix
	VIDEO_SEAMLESS_EXTERNAL,  ///< BBC
	VIDEO_SEAMLESS_INTERNAL,  ///< Amazon
	VIDEO_SEAMLESS_MAX
} VIDEO_SEAMLESS_MODE_T;

typedef enum _KADP_VO_VSC_SRC_TYPE {
	KADP_VO_VSC_SRC_VDEC = 0,
	KADP_VO_VSC_SRC_JPEG,
	KADP_VO_VSC_SRC_HDMI,
	KADP_VO_VSC_SRC_AVD,
	KADP_VO_VSC_SRC_ADC,
} KADP_VO_VSC_SRC_TYPE_T;

/**
 * Video Window Rect.
 *
 * @see DDI Implementation Guide
*/
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


/**
 * Scaler Output Mode.
 *
 * @see HAL Implementation Guide
*/
typedef enum KADP_VSC_OUTPUT_MODE
{
	KADP_VSC_OUTPUT_DISPLAY_MODE = 0,
	KADP_VSC_OUTPUT_VENC_MODE,
	KADP_VSC_OUTPUT_MEMORY_MODE,
	KADP_VSC_OUTPUT_AVE_MODE,
	KADP_VSC_OUTPUT_MAX = KADP_VSC_OUTPUT_AVE_MODE,
	KADP_VSC_OUTPUT_MAXN,
} KADP_VSC_OUTPUT_MODE_T;


/**
 * Color of Video Window.
 *
 * @see DDI Implementation Guide
*/
typedef enum
{
	KADP_VIDEO_DDI_WIN_COLOR_BLACK,		/**< window color black */
	KADP_VIDEO_DDI_WIN_COLOR_BLUE,		/**< window color blue */
	KADP_VIDEO_DDI_WIN_COLOR_GRAY,		/**< window color gray */
	KADP_VIDEO_DDI_WIN_COLOR_COLOR_RGB_API,		/**< window color form RGB API VBE_IOC_SET_FORCEBG_COLOR*/
} KADP_VIDEO_DDI_WIN_COLOR_T;


	/**
	 * Video Window Rect.
	 *
	 * @see DDI Implementation Guide
	*/
#ifndef KADP_VIDEO_RECT_T
	typedef struct
	{
		UINT16		x;	/**< horizontal Start Position in pixel [0,].*/
		UINT16		y;	/**< vertical	Start Position in pixel [0,].*/
		UINT16		w;	/**< horizontal Size(Width)    in pixel [0,].*/
		UINT16		h;	/**< vertical	Size(Height)   in pixel [0,].*/
	} __KADP_VIDEO_RECT_T;
#define KADP_VIDEO_RECT_T __KADP_VIDEO_RECT_T
#endif


/**
 * standard pixel color.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
	UINT16 pixelStandardCb;	/**< standard pixel color Cb */
	UINT16 pixelStandardY;	/**< standard pixel color Y */
	UINT16 pixelStandardCr;	/**< standard pixel color Cr */
}KADP_VIDEO_DDI_PIXEL_STANDARD_COLOR_T;


/**
 * color standard.
 *
 * @see DDI Implementation Guide
*/
typedef enum
{
	KADP_VIDEO_DDI_COLOR_STANDARD_YUV = 0,
	KADP_VIDEO_DDI_COLOR_STANDARD_RGB,
} KADP_VIDEO_DDI_COLOR_STANDARD_T;

/**
 * color standard.
 *
 * @see DDI Implementation Guide
*/
typedef enum
{
	KADP_VIDEO_DDI_PIXEL_8BIT = 0,
	KADP_VIDEO_DDI_PIXEL_10BIT,
} KADP_VIDEO_DDI_PIXEL_COLOR_FORMAT_T;

/**
 * capture location
 *
 * @see DDI Implementation Guide
*/
typedef enum
{
	KADP_VIDEO_DDI_SCALER_OUTPUT = 0,
	KADP_VIDEO_DDI_DISPLAY_OUTPUT,
}KADP_VIDEO_DDI_CAPTURE_PLACE_T;


/**
 * Video Pixel format
 *
 */
typedef enum
{
	KADP_VIDEO_DDI_PIXEL_FORMAT_RGB10,
	KADP_VIDEO_DDI_PIXEL_FORMAT_RGB8,
	KADP_VIDEO_DDI_PIXEL_FORMAT_YCBCR444_10,
	KADP_VIDEO_DDI_PIXEL_FORMAT_YCBCR444_8,
	KADP_VIDEO_DDI_PIXEL_FORMAT_YCBCR422_10,
	KADP_VIDEO_DDI_PIXEL_FORMAT_YCBCR422_8,
	KADP_VIDEO_DDI_PIXEL_FORMAT_YCBCR420_10,
	KADP_VIDEO_DDI_PIXEL_FORMAT_YCBCR420_8,
	KADP_VIDEO_DDI_PIXEL_FORMAT_ARGB8,
	KADP_VIDEO_DDI_PIXEL_FORMAT_ARGB10,
   	KADP_VIDEO_DDI_PIXEL_FORMAT_YCSEPARATED,
}KADP_VIDEO_DDI_PIXEL_FORMAT_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
/**
 * Video Capture Info
 *
 */
typedef struct
{
	UINT16 width;
	UINT16 height;
	KADP_VIDEO_DDI_PIXEL_FORMAT_T pixelFormat;
	unsigned int pData;
	unsigned int pCbCr;
	unsigned int pScanTypeCapImg; // 0:I, 1:P
}KADP_VIDEO_DDI_CAPTURE_INFO_T;
#else
/**
 * Video Capture Info
 *
 */
typedef struct
{
	UINT16 width;
	UINT16 height;
	KADP_VIDEO_DDI_PIXEL_FORMAT_T pixelFormat;
	const UINT8* pData;
	const UINT8* pCbCr;
	UINT16* pScanTypeCapImg; // 0:I, 1:P
}KADP_VIDEO_DDI_CAPTURE_INFO_T;
#endif

/**
 * 3D Video Full Timing Information.
 *
 * @see DDI Implementation Guide
*/
/*  have to refer timing info, doesn't refer 3D tag or header info */
typedef enum
{
	/*     아래 enum value는 관리 안함.  */
	KADP_VIDEO_DDI_3D_FORMAT_2D,					/**< for No 3D (OFF)..... INPUT_TYPE_2DTO3D */

	/*      From UI, 3D ON이면서 아래 Format이 넘어오면 일반 3D ON이 됨.    */
	//interim format - half
	KADP_VIDEO_DDI_3D_FORMAT_TOP_BOTTOM,			/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_TOPNBOTTOM*/
	KADP_VIDEO_DDI_3D_FORMAT_SIDEBYSIDE_HALF,	/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_SIDEBYSIDE*/
	KADP_VIDEO_DDI_3D_FORMAT_CHECKER_BOARD,		/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_CHECKERBOARD*/
	KADP_VIDEO_DDI_3D_FORMAT_FRAME_SEQ,			/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_FRAMESEQ*/
	KADP_VIDEO_DDI_3D_FORMAT_COLUMN_INTERLEAVE,	/**< for H.264*/
	KADP_VIDEO_DDI_3D_FORMAT_LINE_INTERLEAVE_HALF,	/**< for H.264*/

	//Full format
	KADP_VIDEO_DDI_3D_FORMAT_FRAME_PACKING,			/**< Full format*/
	KADP_VIDEO_DDI_3D_FORMAT_FIELD_ALTERNATIVE,		/**< Full format*/
	KADP_VIDEO_DDI_3D_FORMAT_LINE_ALTERNATIVE,		/**< Full format (row interleave)*/
	KADP_VIDEO_DDI_3D_FORMAT_SIDEBYSIDE_FULL,		/**< Full format*/
	KADP_VIDEO_DDI_3D_FORMAT_DUALSTREAM,		/**< Full format*/
	/*    From UI, 3D ON이면서 아래 Format이 넘어오면 2D to 3D 가 됨    */
	KADP_VIDEO_DDI_3D_FORMAT_2DTO3D,					/**< for2D TO  3D..... INPUT_TYPE_2DTO3D */
	KADP_VIDEO_DDI_3D_FORMAT_MAX,
}KADP_VIDEO_DDI_3D_FORMAT_TYPE_T;


/**
 * 3D Video Full Timing Information.
 *
 * @see DDI Implementation Guide
*/
/*  have to refer timing info, doesn't refer 3D tag or header info */
typedef enum
{
	/* */
//	VIDEO_DDI_3D_PATTERN_2D			        = BIT0 << VIDEO_DDI_3D_FORMAT_2D                ,

	/*      From UI, 3D ON*/
	//interim format - half
	KADP_VIDEO_DDI_3D_PATTERN_TOP_BOTTOM         = BIT0 << KADP_VIDEO_DDI_3D_FORMAT_TOP_BOTTOM        ,
	KADP_VIDEO_DDI_3D_PATTERN_SIDEBYSIDE_HALF    = BIT0 << KADP_VIDEO_DDI_3D_FORMAT_SIDEBYSIDE_HALF   ,
	KADP_VIDEO_DDI_3D_PATTERN_CHECKER_BOARD      = BIT0 << KADP_VIDEO_DDI_3D_FORMAT_CHECKER_BOARD     ,
	KADP_VIDEO_DDI_3D_PATTERN_FRAME_SEQ          = BIT0 << KADP_VIDEO_DDI_3D_FORMAT_FRAME_SEQ         ,
	KADP_VIDEO_DDI_3D_PATTERN_COLUMN_INTERLEAVE  = BIT0 << KADP_VIDEO_DDI_3D_FORMAT_COLUMN_INTERLEAVE ,
	KADP_VIDEO_DDI_3D_PATTERN_LINE_INTERLEAVE_HALF	= BIT0 << KADP_VIDEO_DDI_3D_FORMAT_LINE_INTERLEAVE_HALF ,

	//Full format
	KADP_VIDEO_DDI_3D_PATTERN_FRAME_PACKING       = BIT0 << KADP_VIDEO_DDI_3D_FORMAT_FRAME_PACKING     ,
	KADP_VIDEO_DDI_3D_PATTERN_FIELD_ALTERNATIVE   = BIT0 << KADP_VIDEO_DDI_3D_FORMAT_FIELD_ALTERNATIVE ,
	KADP_VIDEO_DDI_3D_PATTERN_LINE_ALTERNATIVE    = BIT0 << KADP_VIDEO_DDI_3D_FORMAT_LINE_ALTERNATIVE  ,
	KADP_VIDEO_DDI_3D_PATTERN_SIDEBYSIDE_FULL     = BIT0 << KADP_VIDEO_DDI_3D_FORMAT_SIDEBYSIDE_FULL   ,
	KADP_VIDEO_DDI_3D_PATTERN_DUALSTREAM          = BIT0 << KADP_VIDEO_DDI_3D_FORMAT_DUALSTREAM        ,

}KADP_VIDEO_DDI_3D_PATTERN_TYPE_T;

/*-----------------------------------------------------------------------------
	Definition of struct for IO ctrl cmd(all parameters include in the same struct)
------------------------------------------------------------------------------*/



/*
VSC_IOC_SET_WINBLANK
*/
typedef struct
{
	KADP_VIDEO_WID_T winblankwid;
	bool winblankbonoff;
	KADP_VIDEO_DDI_WIN_COLOR_T winblankcolor;
}VSC_WINBLANK_PARA_T;

/*
VSC_IOC_GET_INPUTREGION

VSC_IOC_GET_OUTPUTREGION
VSC_IOC_SET_OUTPUTREGION
*/
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	KADP_VIDEO_WID_T setframewid;
	unsigned int pinregion;
}VSC_GET_FRAME_REGION_T;
#else
typedef struct
{
	KADP_VIDEO_WID_T setframewid;
	KADP_VIDEO_RECT_T * pinregion;
}VSC_GET_FRAME_REGION_T;
#endif

/*
VSC_IOC_SET_INPUTREGION
VSC_IOC_SET_OUTPUTREGION
*/
typedef struct
{
	KADP_VIDEO_WID_T setframewid;
	KADP_VIDEO_RECT_T inregion;
}VSC_SET_FRAME_REGION_T;

typedef struct
{
	KADP_VIDEO_WID_T setframewid;
	VIDEO_DDI_RECT_T inregion;
	VIDEO_DDI_RECT_T originalInput;
}VSC_SET_FRAME_REGION_EX_T;


/*
VSC_IOC_SET_WINFREEZE
VSC_IOC_FREEZE_VIDEOFRAMEBUFFER
*/
typedef struct
{
	KADP_VIDEO_WID_T freezewid;
	bool freezeonoff;
	bool bAll;
}VSC_FREEZE_ACTION_T;


/*
VSC_IOC_READ_VIDEOFRAMEBUFFER
*/
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	KADP_VIDEO_WID_T bufferwid;//in
	unsigned int pinregion;//in
	unsigned int pRead;
	unsigned int pcolor_standard;
	unsigned int ppixelcolorformat;
}VSC_READ_BUFFER_ACTION_T;
#else
typedef struct
{
	KADP_VIDEO_WID_T bufferwid;//in
	KADP_VIDEO_RECT_T * pinregion;//in
	KADP_VIDEO_DDI_PIXEL_STANDARD_COLOR_T * pRead;
	KADP_VIDEO_DDI_COLOR_STANDARD_T * pcolor_standard;
	KADP_VIDEO_DDI_PIXEL_COLOR_FORMAT_T * ppixelcolorformat;
}VSC_READ_BUFFER_ACTION_T;
#endif

/*
VSC_IOC_WRITE_VIDEOFRAMEBUFFER
*/
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	KADP_VIDEO_WID_T bufferwid;//in
	unsigned int pinregion;//in
	unsigned int pWrite;//in
}VSC_WRITE_BUFFER_ACTION_T;
#else
typedef struct
{
	KADP_VIDEO_WID_T bufferwid;//in
	KADP_VIDEO_RECT_T * pinregion;//in
	KADP_VIDEO_DDI_PIXEL_STANDARD_COLOR_T * pWrite;//in
}VSC_WRITE_BUFFER_ACTION_T;
#endif

/*
VSC_IOC_CAPTURE_VIDEOFRAME
*/
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	KADP_VIDEO_DDI_CAPTURE_PLACE_T place;
	unsigned int pcaptureinfo;
}VSC_CAPTURE_FRAME_ACTION_T;
#else
typedef struct
{
	KADP_VIDEO_DDI_CAPTURE_PLACE_T place;
	KADP_VIDEO_DDI_CAPTURE_INFO_T * pcaptureinfo;
}VSC_CAPTURE_FRAME_ACTION_T;
#endif

/*
VSC_IOC_GET_3DAUTODETECTMODE
*/
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	KADP_VIDEO_WID_T wid;//in
	unsigned int pvideo3dtype;
}VSC_3DAUTODET_ACTION_T;
#else
typedef struct
{
	KADP_VIDEO_WID_T wid;//in
	KADP_VIDEO_DDI_3D_FORMAT_TYPE_T * pvideo3dtype;
}VSC_3DAUTODET_ACTION_T;
#endif

/*
VSC_IOC_SET_3DPATTERNMODE

*/
typedef struct
{
	KADP_VIDEO_WID_T wid;//in
	KADP_VIDEO_DDI_3D_PATTERN_TYPE_T video3dtype;
}VSC_3DPATTERNMODE_ACTION_T;

/*
VSC_IOC_SET_VENCMODE
*/
typedef struct
{
	unsigned short framerate;
	unsigned short scantype;
}VSC_SET_VENCMODE_ACTION_T;

/*
VSC_IOC_GET_V2GFRAMEBUFFER
*/
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	KADP_VIDEO_WID_T wid;//in
	unsigned int pCaptureInfo;
}VSC_GET_V2GFRAMEBUFFER_T;
#else
typedef struct
{
	KADP_VIDEO_WID_T wid;//in
	KADP_VIDEO_DDI_CAPTURE_INFO_T* pCaptureInfo;
}VSC_GET_V2GFRAMEBUFFER_T;
#endif

/*
VSC_IOC_GET_VIDEODELAYEDTIME
*/
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	KADP_VIDEO_WID_T wid;//in
	unsigned int pDelayedTime;
}VSC_GET_VIDEODELAYEDTIME_T;
#else
typedef struct
{
	KADP_VIDEO_WID_T wid;//in
	unsigned short * pDelayedTime;
}VSC_GET_VIDEODELAYEDTIME_T;
#endif

typedef struct SCALER_INPUT_INFO{
	unsigned int inputWid;
	unsigned int inputLen;
	unsigned int capWid;
	unsigned int capLen;
	unsigned int inputFramerate;
	unsigned int interlace;
}SCALER_INPUT_INFO;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct VSC_GET_INPUT_INFO{
	KADP_VIDEO_WID_T wid;//in
	unsigned int inputInfo;
}VSC_GET_INPUT_INFO;
#else
typedef struct VSC_GET_INPUT_INFO{
	KADP_VIDEO_WID_T wid;//in
	SCALER_INPUT_INFO *inputInfo;
}VSC_GET_INPUT_INFO;
#endif

/*
VSC_IOC_SET_TILEMAXROWVAL
*/
typedef struct
{
	unsigned char uMaxRow;
	unsigned char  uMaxCol;
}VSC_SET_TILEMAXROWVAL_T;

/*
VSC_IOC_GET_VIDEODELAYEDTIME
*/
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	KADP_VIDEO_WID_T wid;//in
	unsigned int bMVOPEnable;
}VSC_GET_GETMVOPSTATUS_T;
#else
typedef struct
{
	KADP_VIDEO_WID_T wid;//in
	unsigned char* bMVOPEnable;
}VSC_GET_GETMVOPSTATUS_T;
#endif

typedef struct
{
	unsigned int display_wid;
	unsigned int  display_len;
}VSC_PANEL_SIZE_T;

typedef struct VSC_SET_ZORDER_T{
	unsigned char uZorder; // 0: bottom, 1: bottom+1,..
	unsigned char uAlpha; // 0 ~ 255
}VSC_SET_ZORDER_T;

typedef struct
{
	VIDEO_WID_T magnifierWid;
	KADP_VIDEO_RECT_T magnifierinregion;
	KADP_VIDEO_RECT_T magnifierinputTiming;
	KADP_VIDEO_RECT_T magnifieroutregion;
	unsigned short W;
	unsigned short H;
	unsigned short inputType;
}VSC_MAGNIGIER_PARA_T;

typedef enum
{
	KADP_VSC_VIDEO_COLOR_OFF,
	KADP_VSC_VIDEO_COLOR_WHITE,
}KADP_VSC_VIDEO_COLOR_TYPE_T;

typedef struct
{
	short port;
	unsigned short width;
	unsigned short height;
}VSC_ADAPTIVE_STREAM_INFO_FROM_APP;

typedef struct
{
	short display;
	unsigned short width;
	unsigned short height;
	unsigned short update_flag;
}SCALER_ADAPTIVE_STREAM_INFO;//This data is for scaler flow

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	short port;
	unsigned int update_flag;
}VSC_NOTICE_GST_VO_UPDATE_INFO;//This is for adaptive stream sync vo ready
#else
typedef struct
{
	short port;
	unsigned char *update_flag;
}VSC_NOTICE_GST_VO_UPDATE_INFO;//This is for adaptive stream sync vo ready
#endif

typedef struct
{
	short port;
	unsigned char enable;
}VSC_APP_CONTROL_FORCEBG_TYPE;

/*New HAL_VSC function*/
//add vsc pattern @Crixus 20170419
typedef enum
{
       VSC_VIDEO_PATTERN_MUX = 0,
       VSC_VIDEO_PATTERN_DI_NR,
       VSC_VIDEO_PATTERN_SCALER,
       VSC_VIDEO_PATTERN_MEMC,
       VSC_VIDEO_PATTERN_DISPLAY,
       VSC_VIDEO_PATTERN_RESERVED0,
       VSC_VIDEO_PATTERN_RESERVED1,
       VSC_VIDEO_PATTERN_RESERVED2,
       VSC_VIDEO_PATTERN_RESERVED3,
       VSC_VIDEO_PATTERN_MAX,
}VSC_VIDEO_PATTERN_LOCATION_T;

typedef struct
{
       unsigned char window;
       unsigned char on_off;
       VSC_VIDEO_PATTERN_LOCATION_T pattern_location;
} VSC_VIDEO_PATTERN_LOCATION_TYPE;

typedef enum VSC_I2RND_STAGE_TYPE
{
	I2RND_STAGE_DISABLE = 0,
	I2RND_STAGE_DETECT_SOURCE,
	I2RND_STAGE_SUB_VO_RPC,
	I2RND_STAGE_TRIGGER_RUN_MAIN,
	I2RND_STAGE_MAIN_GET_RPC,
	I2RND_STAGE_MAIN_I2RND_DONE,
	I2RND_STAGE_MAIN_I2RND_FINISH,
	I2RND_STAGE_MAXN,
} VSC_I2RND_STAGE_TYPE_T;


typedef enum VSC_I2RND_ATV_RERUN_MAIN_STAGE_TYPE
{
	I2RND_ATV_STAGE_DISABLE = 0,
	I2RND_ATV_STAGE_TRIGGER_RUN_MAIN,
	I2RND_ATV_STAGE_I3DDMA_RPC,
	I2RND_ATV_STAGE_RERUN_MAIN_DONE,
	I2RND_ATV_STAGE_MAXN,
} VSC_I2RND_ATV_RERUN_MAIN_STAGE_TYPE_T;

typedef enum VSC_I2RND_DUALVO_SUB_STAGE_TYPE
{
	I2RND_DUALVO_STAGE_SUB_DISABLE = 0,
	I2RND_DUALVO_STAGE_SUB_CONNECT,
	I2RND_DUALVO_STAGE_RERUN_MAIN_FOR_S1,
	I2RND_DUALVO_STAGE_RERUN_MAIN_DONE,
	I2RND_DUALVO_STAGE_RERUN_MAIN_FINISH,
	I2RND_DUALVO_STAGE_SUB_MAXN,
} VSC_I2RND_DUALVO_SUB_STAGE_TYPE_T;

#if 0
typedef enum VSC_SUB_PURPOSE
{
   VSC_SUB_PURPOSE_NONE =0,      // in case PBP enter/exit or PIP(live zoom or magnifier) exit.
   VSC_SUB_PURPOSE_LIVE_ZOOM, // in case live zoom enter
   VSC_SUB_PURPOSE_MAGNIFIER, // in case magnifier enter
   VSC_SUB_PURPOSE_MAX = VSC_SUB_PURPOSE_MAGNIFIER,
   VSC_SUB_PURPOSE_MAXN
} VSC_SUB_PURPOSE_T;
#endif

typedef enum VSC_SUB_MODE_EX{
       VSC_SUB_MODE_EX_NONE = 0,
       VSC_SUB_MODE_EX_PIP,                                       //picture in picture, ?sub window is overlapped main window
       VSC_SUB_MODE_EX_PBP,                                       //picture by picture, sub window isn!|t overlapped main window
       VSC_SUB_MODE_EX_RESERVED1,
       VSC_SUB_MODE_EX_RESERVED2,
       VSC_SUB_MODE_EX_MAX = VSC_SUB_MODE_EX_RESERVED2,
       VSC_SUB_MODE_EX_MAXN
} VSC_SUB_MODE_EX_T;

typedef struct
{
       unsigned int mode;
       unsigned int connectType;
       unsigned int memoryUse;
}VSC_SET_SUB_WINDOW_MODE_TYPE;

typedef struct
{
	unsigned char window;
	unsigned char buffer;
} VSC_SET_DELAY_BUFFER_TYPE;

/*
VSC_IOC_SET_ADAPTIVESTREAM
*/
typedef struct
{
	KADP_VIDEO_WID_T adaptivestreamwid;
	bool  adaptivestreambonoff;
}VSC_ADAPTIVESTREAM_PARA_T;

struct VIDEO_RPC_VOUT_VSCCONNECT_STRUCT {
    unsigned char wid;
    unsigned char vsc_source;
    unsigned char vdo_port;
    unsigned char hdr_mode;
};
typedef struct VIDEO_RPC_VOUT_VSCCONNECT_STRUCT VIDEO_RPC_VOUT_VSCCONNECT_STRUCT;

typedef enum {
     KADP_VSC_PATTERN_BLACK,
     KADP_VSC_PATTERN_WHITE
} KADP_VSC_PATTERN_TYPE_T;

typedef struct VSC_VIDEO_LATENCY_PATTERN{
	BOOLEAN bOnOff;
	KADP_VSC_PATTERN_TYPE_T bPatternType;
	KADP_VIDEO_RECT_T overlayWindow;
}VSC_VIDEO_LATENCY_PATTERN_T;


typedef struct VSC_UZD_CRC{
	KADP_VIDEO_WID_T wid;
	unsigned int CRC_Result;
}VSC_UZD_CRC;

typedef enum{//for mute off callback use
	WIN_MAIN_ONLY = 0x1,//only call main callback
	WIN_SUB_ONLY = 0x2,//only call sub callback
	WIN_MAIN_SUB_BOTH = WIN_MAIN_ONLY | WIN_SUB_ONLY,//call both main and sub callback
} WIN_CALLBACK_INFO;

/*-----------------------------------------------------------------------------
	Constant Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Macro Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Definition of struct for IO ctrl cmd(all parameters include in the same struct) From Hal_vsc.h
------------------------------------------------------------------------------*/



typedef enum KADP_VSC_INPUT_TYPE
{
	KADP_VSC_INPUTSRC_AVD = 0,
	KADP_VSC_INPUTSRC_ADC,
	KADP_VSC_INPUTSRC_HDMI,
	KADP_VSC_INPUTSRC_VDEC,
	KADP_VSC_INPUTSRC_JPEG,
	KADP_VSC_INPUTSRC_MAX = KADP_VSC_INPUTSRC_JPEG,
	KADP_VSC_INPUTSRC_MAXN,
} KADP_VSC_INPUT_TYPE_T;

//Evance@20160721
typedef enum KADP_VSC_SUB_SHAPE
{
	KADP_VSC_MGF_TYPE_CIRCLE = 0,
	KADP_VSC_MGF_TYPE_RECTANGLE,
	KADP_VSC_MGF_TYPE_MAX = KADP_VSC_MGF_TYPE_RECTANGLE,
	KADP_VSC_MGF_TYPE_MAXN,
} KADP_VSC_SUB_SHAPE_T;

typedef struct KADP_VSC_SUB_SHAPE_INFO
{
	KADP_VSC_SUB_SHAPE_T shapeinfo;
	KADP_VIDEO_RECT_T rect;
} KADP_VSC_SUB_SHAPE_INFO_T;

typedef struct KADP_VSC_INPUT_SRC_INFO
{
	KADP_VSC_INPUT_TYPE_T type;
	UINT8 attr;
	UINT8 resourceIndex;
} KADP_VSC_INPUT_SRC_INFO_T;


typedef enum _DI_RTNR_Mode_By_AP{
    DI_RTNR_OFF = 0,
    DI_RTNR_422 = 1,
    DI_RTNR_420 = 2,
    DI_RTNR_400 = 3,

} DI_RTNR_Mode_By_AP;

/*
VSC_IOC_CONNECT
VSC_IOC_DISCONNECT
*/
typedef struct
{
	KADP_VIDEO_WID_T connectwid;
	KADP_VSC_INPUT_SRC_INFO_T vsc_input;
	KADP_VSC_OUTPUT_MODE_T outputmode;
}VSC_CONNECT_PARA_T;
/**
 * Multi Window Mode.
 *
*/
typedef enum
{
	KADP_VIDEO_MULTI_WIN_MODE_MIN = 0,
	KADP_VIDEO_MULTI_WIN_MODE_OFF = KADP_VIDEO_MULTI_WIN_MODE_MIN,
	KADP_VIDEO_MULTI_WIN_MODE_PIP,
	KADP_VIDEO_MULTI_WIN_MODE_TRANSCODING,
	KADP_VIDEO_MULTI_WIN_MODE_2ND_TV,
	KADP_VIDEO_MULTI_WIN_MODE_CAPTURE,
	KADP_VIDEO_MULTI_WIN_MODE_MAXN,
} KADP_VIDEO_MULTI_WIN_MODE_T;

/**
 * Video Input source Information.
 *
 */
typedef struct KADP_VIDEO_SRC_INFO
{
	UINT32	Type:8;		/**< ... */
	UINT32	Index:8;	/**< ... */
	UINT32	Attr:8;		/**< ... */
	UINT32	Resv:8;		/**< ... */
} KADP_VIDEO_SRC_INFO_T;




typedef enum
{
	KADP_VIDEO_COLOR_OFF,
	KADP_VIDEO_COLOR_WHITE,
}KADP_VIDEO_COLOR_TYPE_T;





/**
 * 3D L/R selection
 * .
*/
typedef enum
{
	KADP_VIDEO_DDI_3D_LR,	//Driver와 일치.
	KADP_VIDEO_DDI_3D_RL,
}KADP_VIDEO_DDI_3D_LR_TYPE_T;

/**
 * 3D Dual Mode Information.
 *
 * @see DDI Implementation Guide
*/
typedef enum
{
	KADP_VIDEO_DDI_DUAL_2D,			/**< for No Dual (OFF) */
	KADP_VIDEO_DDI_DUAL_TOP_BOTTOM,	/**< for T/B Dual Mode */
	KADP_VIDEO_DDI_DUAL_SIDEBYSIDE,	/**< for S/S Dual Mode */
}KADP_VIDEO_DDI_DUAL_TYPE_T;

/**
 * Video Timing Information.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
   	SINT32 format;	/**< update by LG */
	UINT16 hFreq;	/**< ... */
	UINT16 vFreq;	/**< ... */
	UINT16 hTotal;	/**< ... */
	UINT16 vTotal;	/**< ... */
	UINT16 hPorch;	/**< ... */
	UINT16 vPorch;	/**< ... */
	KADP_VIDEO_RECT_T	active;	/**< ... */
	UINT16 scanType;	/**< ... */
	UINT16 phase;	    /**< ... */  // need to check UINT16
	UINT8  mode;	    /**< update by LG */
//	VFE_AVD_AVDECODER_VIDEO_MODE_T  standard;	/**< for color standard*/ // 2012.10.31 yongsu.yoo change this for Late-return of analog color system
	UINT8  vdLock;	/**< for ATV */
	/* 3D restructuring by seongcheoll.kim 2011.07.01 */
	KADP_VIDEO_DDI_3D_FORMAT_TYPE_T full_3d_timing;
	KADP_VIDEO_DDI_3D_LR_TYPE_T	video_LR_order;
} KADP_VIDEO_TIMING_INFO_T;

#if 1
/**
 * pixel grab color.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
	UINT8 pixelGrabCb;	/**< Cb */
	UINT8 pixelGrabY;	/**< Y */
	UINT8 pixelGrabCr;	/**< CR */
}KADP_VIDEO_DDI_PIXEL_GRAB_COLOR_T;

/**
 * pixel grab region.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
	KADP_VIDEO_WID_T wID;	/**< select main or sub window */
	UINT32 pixelGrabX;	/**< x position */
	UINT32 pixelGrabY;	/**< y position */
	UINT32 pixelGrabW;	/**< capture width */
	UINT32 pixelGrabH;	/**< capture h */

	UINT32 realPixelGrabW;	/**< real W in memory */
	UINT32 realPixelGrabH;	/**< real H in memory */
	UINT8 colorSpace;	/**< 0: YUV 1:RGB */
}KADP_VIDEO_DDI_PIXEL_GRAB_REGION_T;








#endif

/**
 * Video output format type for UD display
 */
typedef struct {
	bool isUD;
	UINT16 fr_rate;						///< display frame rate
	UINT16 h_total;						///< pixels per line
	UINT16 v_total;						///< lines per frame
}KADP_VIDEO_DDI_DIS_FMT_T;

/**
 * Video UD format
 * 2011.11.08 by daegun.park
 */
typedef enum
{
	KADP_UD_MODE_FHD,
	KADP_UD_MODE_UD,
	KADP_UD_MODE_UD_HALF,
}KADP_VIDEO_UD_MODE_T;


/**
 * Video Component Index
 *
 */
typedef enum {
	KADP_COMP_INDEX_1 = 0,
	KADP_COMP_INDEX_2,
	KADP_COMP_INDEX_3,	// 20091111 drmyung : add
	KADP_NUM_COMP_INPUTS
} KADP_VIDEO_COMP_INDEX_T;

/**
 * Video Input signal source definition.
 *
 */
typedef enum KADP_VIDEO_SRC_TYPE
{
	KADP_VIDEO_SRC_TV	= 0,	/**< TV Input */
	KADP_VIDEO_SRC_SCART,		/**< Scart Input */
	KADP_VIDEO_SRC_AV,			/**< AV Input */
	KADP_VIDEO_SRC_AUTOAV,		/**< Auto AV(SCART) Input */
	KADP_VIDEO_SRC_COMP,			/**< Component(YPbPr) Input */
	KADP_VIDEO_SRC_RGB,			/**< RGB Input */
	KADP_VIDEO_SRC_HDMI,			/**< HDMI Input */
#ifdef INCLUDE_DVR_READY
	KADP_VIDEO_SRC_PLAYHDD,		/**< PVR : Recorded Playback mode */
#endif
	KADP_VIDEO_SRC_USB,			/**< ... */
	KADP_VIDEO_SRC_BT,			/**< ... */
	KADP_VIDEO_SRC_MEDIASHARE,	/**< ... */
	KADP_VIDEO_SRC_PICWIZARD,	/**< ... */
	KADP_VIDEO_SRC_SUPPORT,		/**< ... */
	KADP_VIDEO_SRC_BB,			/**< ... */
	KADP_VIDEO_SRC_FLASH,		/**< ... */
	KADP_VIDEO_SRC_VCS,			/**< ... */
	KADP_VIDEO_SRC_INVALID,		/**< Invalid Source Input */
	KADP_VIDEO_SRC_MAX = KADP_VIDEO_SRC_INVALID,	/**< MAX Input Number */
} KADP_VIDEO_SRC_TYPE_T;

/**
 * TV Src Attribute definition.
 *
 */
typedef enum KADP_VIDEO_TV_SRC_ATTR
{
	KADP_VIDEO_TV_ATTR_ANALOG = 0,	/**< ... */
	KADP_VIDEO_TV_ATTR_DIGITAL		/**< ... */

} KADP_VIDEO_TV_SRC_ATTR_T;

/**
 * EMF attribute definitions.
 *
 */
typedef enum KADP_VIDEO_EMF_SRC_ATTR
{
	KADP_VIDEO_EMF_ATTR_PHOTO_MUSIC		= 0,	/**< ... */
	KADP_VIDEO_EMF_ATTR_MOVIE,					/**< ... */
	KADP_VIDEO_EMF_ATTR_VCS, 	/**< ... */

} KADP_VIDEO_EMF_SRC_ATTR_T;

#ifndef KADP_TRIDTV_SC_OUTPUT_TYPE_T
typedef enum
{
	KADP_SC_OUT_SINGLE_2D  = 0 ,///< single nomal
	KADP_SC_OUT_SINGLE_TB      ,///< top and bottom
	KADP_SC_OUT_SINGLE_SS      ,///< side by side
	KADP_SC_OUT_SINGLE_FS      ,///< Frame Sequential(Interleaving)

	KADP_SC_OUT_DUAL_FHD       ,///< dual screen
	KADP_SC_OUT_DUAL_TB        ,///< dual top and bottom for H13 internal type
	KADP_SC_OUT_DUAL_SS        ,///< dual side by side for H13 internal type
	KADP_SC_OUT_SINGLE_T       ,//<H13 DRIVE 요청 SINGLE TOP ONLY>
	KADP_SC_OUT_SINGLE_LA     ,
	KADP_SC_OUT_MAX            ,//MAX
}__KADP_TRIDTV_SC_OUTPUT_TYPE_T;
#define KADP_TRIDTV_SC_OUTPUT_TYPE_T __KADP_TRIDTV_SC_OUTPUT_TYPE_T
#endif

#ifndef KADP_TRIDTV_INPUT_TYPE_T
typedef enum
{
	/*	Drive에서 아래 value 사용 안함.	*/
	KADP_INPUT_TYPE_3DOFF = 0,			//VIDEO_3D_FORMAT_2D,

	//interim format - half
	KADP_INPUT_TYPE_TOPNBOTTOM,		//VIDEO_3D_FORMAT_TOP_BOTTOM,
	KADP_INPUT_TYPE_SIDEBYSIDE,		//VIDEO_3D_FORMAT_SIDEBYSIDE_HALF,
	KADP_INPUT_TYPE_CHECKERBOARD,	//VIDEO_3D_FORMAT_CHECKER_BOARD,
	KADP_INPUT_TYPE_FRAMESEQ,		//VIDEO_3D_FORMAT_FRAME_SEQ
	KADP_INPUT_TYPE_COLUMN_INTERLEAVE,	/**< for H.264*/
	KADP_INPUT_TYPE_LINE_INTERLEAVE_HALF,	/**< for H.264*/

	//Full format
	KADP_INPUT_TYPE_FRAMEPAC,			//VIDEO_3D_FORMAT_FRAME_PACKING
	KADP_INPUT_TYPE_FIELD_ALTERNATIVE,	//VIDEO_3D_FORMAT_FIELD_ALTERNATIVE
	KADP_INPUT_TYPE_LINE_ALTERNATIVE,	//VIDEO_3D_FORMAT_LINE_ALTERNATIVE
	KADP_INPUT_TYPE_SIDEBYSIDE_FULL,		//VIDEO_3D_FORMAT_SIDEBYSIDE_FULL,
	KADP_INPUT_TYPE_DUALSTREAM, 	/**< Full format*/

	/*	Drive에서 아래 value 사용 안함. */
	KADP_INPUT_TYPE_2DTO3D,			//VIDEO_3D_FORMAT_2DTO3D,

	KADP_INPUT_TYPE_MAX,
}__KADP_TRIDTV_INPUT_TYPE_T;
#define KADP_TRIDTV_INPUT_TYPE_T __KADP_TRIDTV_INPUT_TYPE_T
#endif
/**
 * Define 3D Input LR Type.
 */
#ifndef  KADP_TRIDTV_INPUT_LR_SEQ_T
typedef enum
{
	KADP_INPUT_LR_SEQ = 0,
	KADP_INPUT_RL_SEQ,
	KADP_INPUT_LR_MAX,
} __KADP_TRIDTV_INPUT_LR_SEQ_T;
#define KADP_TRIDTV_INPUT_LR_SEQ_T __KADP_TRIDTV_INPUT_LR_SEQ_T
#endif

#ifndef KADP_TRIDTV_3DMODE_FLAG_T
typedef enum
{
	KADP_TRIDTV_3DMODE_OFF= 0,
	KADP_TRIDTV_3DMODE_ON 	,
	KADP_TRIDTV_3DMODE_2DTO3D,
	KADP_TRIDTV_3DMODE_3DTO2D,
	KADP_TRIDTV_3DMODE_MAX,
} __KADP_TRIDTV_3DMODE_FLAG_T;
#define KADP_TRIDTV_3DMODE_FLAG_T __KADP_TRIDTV_3DMODE_FLAG_T
#endif

#ifndef KADP_TRIDTV_SCALER_CTRL_T
typedef struct {

	KADP_TRIDTV_3DMODE_FLAG_T     mode;		///< select formatter operation mode. it controls 3D mode ON/OFF.
	KADP_TRIDTV_INPUT_TYPE_T		 in_fmt;	///< input image format(top/bottom, sidebyside, checkboard, frame, field seq, dual 2d)
	KADP_TRIDTV_SC_OUTPUT_TYPE_T  out_fmt;	///< output image format(top/bottom, sidebyside, checkboard, frame, field seq)
	KADP_TRIDTV_INPUT_LR_SEQ_T    lr;		///< output left/right first order
}__KADP_TRIDTV_SCALER_CTRL_T;
#define KADP_TRIDTV_SCALER_CTRL_T __KADP_TRIDTV_SCALER_CTRL_T
#endif

#ifndef KADP_VSC_ZORDER_T
typedef struct
{
	UINT8 uZorder; // 0: bottom, 1: bottom+1,..
	UINT8 uAlpha; // 0 ~ 255
} __KADP_VSC_ZORDER_T;
#define KADP_VSC_ZORDER_T __KADP_VSC_ZORDER_T
#endif

typedef enum {
	KADP_VIDEO_SEAMLESS_OFF,
	KADP_VIDEO_SEAMLESS_AUTO,      ///< Neflix
	KADP_VIDEO_SEAMLESS_EXTERNAL,  ///< BBC
	KADP_VIDEO_SEAMLESS_INTERNAL,  ///< Amazon
	KADP_VIDEO_SEAMLESS_MAX
} KADP_VIDEO_SEAMLESS_MODE_T;

typedef enum {
	KADP_VSC_HDR_HDR10,
	KADP_VSC_HDR_DOLBY,
	KADP_VSC_HDR_VP9,
	KADP_VSC_HDR_HLG,
	KADP_VSC_HDR_PRIME,
	KADP_VSC_HDR_DOLBY_LL,
	KADP_VSC_HDR_HDR10_PLUS,
	KADP_VSC_HDR_AUTO,//old dm connect parameter. decide dolby or hdr
	KADP_VSC_HDR_MAX = KADP_VSC_HDR_AUTO,
	KADP_VSC_HDR_MAXN,
} KADP_VSC_HDR_TYPE_T;


typedef struct
{
	unsigned char winid;//main or sub
	KADP_VSC_HDR_TYPE_T hdrtype;//hdr type
}KADP_VSC_HDR_INFO_T;

/*
- PIP: Live zoom, magnifire
- PBP: Multiview
- default mode is pip
*/
typedef enum KADP_VSC_SUB_MODE
{
	KADP_VSC_SUB_MODE_PIP,
	KADP_VSC_SUB_MODE_PBP,
	KADP_VSC_SUB_MODE_MAX = KADP_VSC_SUB_MODE_PIP,
	KADP_VSC_SUB_MODE_MAXN
} KADP_VSC_SUB_MODE_T;

#ifndef VIDEO_DDI_RECT_T
#define VIDEO_DDI_RECT_T KADP_VIDEO_RECT_T
#endif

typedef enum {
     KADP_VSC_ROTATE_0,
     KADP_VSC_ROTATE_90,
     KADP_VSC_ROTATE_180,
     KADP_VSC_ROTATE_270
}KADP_VSC_ROTATE_T;

typedef struct KADP_VSC_ACTIVE_VIDEO_WINDOW {
	KADP_VIDEO_RECT_T original;
	KADP_VIDEO_RECT_T active;
} KADP_VSC_ACTIVE_VIDEO_WINDOW_T;

typedef struct
{
    VIDEO_WID_T connectwid;
    KADP_VSC_ACTIVE_VIDEO_WINDOW_T window;
    unsigned char ready_flag;
} VSC_GET_BLACDETECTION_INFO_T;

typedef struct
{
	VIDEO_WID_T connectwid;
	unsigned char enable;
} VSC_SET_BLACDETECTION_INFO_T;


//k4lp new HAL function
/*New HAL_VSC function*/
typedef enum KADP_VSC_SUB_MODE_EX{
       KADP_VSC_SUB_MODE_EX_NONE = 0,
       KADP_VSC_SUB_MODE_EX_PIP,                                  //picture in picture, ?sub window is overlapped main window
       KADP_VSC_SUB_MODE_EX_PBP,                                  //picture by picture, sub window isn!|t overlapped main window
       KADP_VSC_SUB_MODE_EX_RESERVED1,
       KADP_VSC_SUB_MODE_EX_RESERVED2,
       KADP_VSC_SUB_MODE_EX_MAX = KADP_VSC_SUB_MODE_EX_RESERVED2,
       KADP_VSC_SUB_MODE_EX_MAXN
} KADP_VSC_SUB_MODE_EX_T;

typedef enum KADP_VSC_SUB_CONNECT_TYPE{
       KADP_VSC_SUB_CONNECT_TYPE_NONE = 0,             //no use sub window mode
       KADP_VSC_SUB_CONNECT_TYPE_MIRROR,               //sub window is the same as main input
       KADP_VSC_SUB_CONNECT_TYPE_NON_MIRROR,   //it!|s different input source between main and sub
       KADP_VSC_SUB_CONNECT_TYPE_RESERVED1,
       KADP_VSC_SUB_CONNECT_TYPE_RESERVED2,
       KADP_VSC_SUB_CONNECT_TYPE_MAX = KADP_VSC_SUB_CONNECT_TYPE_RESERVED2,
       KADP_VSC_SUB_CONNECT_TYPE_MAXN
} KADP_VSC_SUB_CONNECT_TYPE_T;

typedef enum KADP_VSC_SUB_MEMORY_USE {
       KADP_VSC_SUB_MEMORY_USE_NONE = 0,       //no use sub window mode
       KADP_VSC_SUB_MEMORY_USE_SINGLE,         //You don!|t need to allocate memory for sub window. You can get video data from main video. This parameter is optional. If you have enough memory, you don!|t need this mode.
       KADP_VSC_SUB_MEMORY_USE_MULTI,          //This parameter is mandatory. You can!|t get video data from main window. You have to allocate memory for sub window.
       KADP_VSC_SUB_MEMORY_USE_RESERVED1,
       KADP_VSC_SUB_MEMORY_USE_RESERVED2,
       KADP_VSC_SUB_MEMORY_USE_MAX = KADP_VSC_SUB_MEMORY_USE_RESERVED2,
       KADP_VSC_SUB_MEMORY_USE_MAXN
} KADP_VSC_SUB_MEMORY_USE_T;

typedef enum KADP_VSC_SUB_PURPOSE
{
   KADP_VSC_SUB_PURPOSE_NONE =0,      // in case PBP enter/exit or PIP(live zoom or magnifier) exit.
   KADP_VSC_SUB_PURPOSE_LIVE_ZOOM, // in case live zoom enter
   KADP_VSC_SUB_PURPOSE_MAGNIFIER, // in case magnifier enter
   KADP_VSC_SUB_PURPOSE_MAX =  KADP_VSC_SUB_PURPOSE_MAGNIFIER,
   KADP_VSC_SUB_PURPOSE_MAXN
} KADP_VSC_SUB_PURPOSE_T;

//add vsc pattern @Crixus 20170419
typedef enum
{
       KADP_VSC_VIDEO_PATTERN_MUX = 0,
       KADP_VSC_VIDEO_PATTERN_DI_NR,
       KADP_VSC_VIDEO_PATTERN_SCALER,
       KADP_VSC_VIDEO_PATTERN_MEMC,
       KADP_VSC_VIDEO_PATTERN_DISPLAY,
       KADP_VSC_VIDEO_PATTERN_RESERVED0,
       KADP_VSC_VIDEO_PATTERN_RESERVED1,
       KADP_VSC_VIDEO_PATTERN_RESERVED2,
       KADP_VSC_VIDEO_PATTERN_RESERVED3,
       KADP_VSC_VIDEO_PATTERN_MAX,
}KADP_VSC_VIDEO_PATTERN_LOCATION_T;

typedef struct
{
       unsigned char window;
       unsigned char on_off;
       KADP_VSC_VIDEO_PATTERN_LOCATION_T pattern_location;
} KADP_VSC_VIDEO_PATTERN_LOCATION_TYPE;

typedef struct KADP_VSC_SCALER_RATIO
{
    int h_scaleup_ratio;
    int v_scaleup_ratio;
    int h_scaledown_ratio;
    int v_scaledown_ratio;
}KADP_VSC_SCALER_RATIO_T;

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct VSC_GET_LIMIT_WINDOW{
	VIDEO_WID_T wid;
	unsigned int limit_window;
}VSC_GET_LIMIT_WINDOW_T;
#else
typedef struct VSC_GET_LIMIT_WINDOW{
	VIDEO_WID_T wid;
	KADP_VSC_SCALER_RATIO_T *limit_window;
}VSC_GET_LIMIT_WINDOW_T;
#endif

typedef struct
{
	KADP_VIDEO_WID_T wid;
	unsigned int status;/*true:means smoothtoggle finish,false:means smoothtoggle still need do or doing*/
}KADP_VSC_GET_SMTFINISHSTATUS_T;


typedef struct
{
	KADP_VIDEO_WID_T wid;
	unsigned int onoff;/*true(1): means doing cobalt resize testing;false(0):not doing cobalt resize testing */
}KADP_VSC_SET_CobaltResizeAction_T;

/*-----------------------------------------------------------------------------
	Definition of struct for IO ctrl cmd(all parameters include in the same struct)
------------------------------------------------------------------------------*/
/*
VSC_IOC_SET_INPUTREGION
VSC_IOC_SET_OUTPUTREGION
*/
typedef struct
{
	KADP_VSC_SUB_SHAPE_T mode;
	VIDEO_DDI_RECT_T inregion;
}VSC_SET_Subwin_REGION_T;

/*
VSC_IOC_FREEZE_VIDEOFRAMEBUFFER
*/
typedef struct
{
	KADP_VIDEO_WID_T freezewid;
	bool freezeonoff;
}VSC_FREEZE_BUFFER_ACTION_T;

typedef struct _VSC_OVERSCAN_INFO{
	KADP_VIDEO_WID_T wid;
	UINT8 ucInput_H_Overscan;
	UINT8 ucInput_V_Overscan;
	UINT8 ucInput_H_Shift;
	UINT8 ucInput_V_Shift;
	UINT8 ucOutput_H_Overscan;
	UINT8 ucOutput_V_Overscan;
	UINT8 ucOutput_H_Shift;
	UINT8 ucOutput_V_Shift;
}VSC_OVERSCAN_INFO;

/*-----------------------------------------------------------------------------
	Extern Variables & Function Prototype Declarations
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Local Constant Definitions
------------------------------------------------------------------------------*/
typedef enum
{
	VSC_STATE_UNKNOW = 0,
	VSC_STATE_INIT,
	VSC_STATE_OPEN,
	VSC_STATE_CONNECT,
	VSC_STATE_DISCONNECT,
	VSC_STATE_CLOSE,
	VSC_STATE_UNINIT,
	VSC_STATE_NORMAL_RUN,
	VSC_STATE_OFFLINE_RUN,
	VSC_STATE_MAX,
}VSC_STATE_T;

typedef enum {
     GRAPHICS_MODE  ,
     VIDEO_MODE
} ROKU_MODE_TYPE;

typedef enum {
	_RED,
	_GREEN,
	_BLUE,
	_WHITE,
	_BLACK,
	_IRE20,
	_IRE80,
	_IRE100,
} ROKU_COLOR_TYPE;

typedef struct
{
       bool enable;
       unsigned int color;
       unsigned int mode;
}VSC_TESTPATTERN_PARA_T;

typedef struct
{
       bool enable;
       unsigned int R;
       unsigned int G;
       unsigned int B;
       unsigned int mode;
}VSC_RGB_PATTERN_PARA_T;

typedef enum _KADP_DISPD_CAP_SRC{
	KADP_CAP_SRC_UZU,
	KADP_CAP_SRC_SUBTITLE,
	KADP_CAP_SRC_OSD,
	KADP_CAP_SRC_DITHER
}KADP_DISPD_CAP_SRC;

typedef enum _KADP_DISPD_CAP_MODE{
	KADP_CAP_MODE_SEQ,
	KADP_CAP_MODE_BLOCK
}KADP_DISPD_CAP_MODE;

typedef enum _KADP_DISPD_CAP_FMT{
	KADP_CAP_420,
	KADP_CAP_422
}KADP_DISPD_CAP_FMT;

typedef struct _KADP_IDMA_DISPD_CAPTURE_INFO{
	unsigned char enable;
	KADP_DISPD_CAP_SRC capSrc;
	KADP_DISPD_CAP_MODE capMode;
	KADP_DISPD_CAP_FMT capFmt;
	unsigned int capWid;
	unsigned int capLen;
}KADP_IDMA_DISPD_CAPTURE_INFO;

typedef struct{
	KADP_VIDEO_WID_T		wid;//window path
	KADP_VSC_ROTATE_T       rotation;//rotate info
	KADP_VIDEO_RECT_T		input;//input region
	KADP_VIDEO_RECT_T		original_input;//input source resolution
	KADP_VIDEO_RECT_T		ouput;//output region
	unsigned char null_input;//mean input null pointer
	unsigned char null_output;//mean output null pointer
} KADP_ARC_INFO_T;


typedef enum
{
	KADP_HAL_VSC_SPLIT_MODE_NONE = 0,  // normal HDMI signal
	KADP_HAL_VSC_SPLIT_MODE_1_2, // 1:2 split mode
	KADP_HAL_VSC_SPLIT_MODE_1_4, // 1:4 split mode
	KADP_HAL_VSC_SPLIT_MODE_DUPLICATE, // DUPLICATE MODE 
}KADP_HAL_VSC_SPLIT_MODE_T; // HDMI split mode enum value

typedef struct
{
	KADP_HAL_VSC_SPLIT_MODE_T splitMode; // HDMI 2.1 switch split mode
	UINT16 overlapSize; // overlap pixel size when split the HDMI video.
	KADP_VIDEO_RECT_T resolution; // resolution.
	UINT16 vFreq; // v frequency
}KADP_HAL_VSC_SPLIT_INFO_T ; // HFR info structure

typedef struct KADP_SCALER_WIN_CALLBACK_DELAY_INFO {//for scaler to check av sync
	KADP_VIDEO_WID_T wid;
	UINT16 delayTime;
	KADP_VIDEO_RECT_T  OutputRegion;
} KADP_SCALER_WIN_CALLBACK_DELAY_INFO;

/*-----------------------------------------------------------------------------
	System call
------------------------------------------------------------------------------*/
#define VSC_DEVICE_NUM							   1
#define VSC_DEVICE_NAME							"vscdev"
#define VSC_IOC_MAGIC							  'q'

#define VSC_MAJOR 0   /* dynamic major by default */
#define VSC_NR_DEVS 1    /* se0 through se3 */

//index range
//0 ~ 255
#define VSC_IOC_START_INDEX 0
enum vsc_ioc_idx
{
	VSC_IOC_IDX_0 = VSC_IOC_START_INDEX,//0
	VSC_IOC_IDX_1,
	VSC_IOC_IDX_2,
	VSC_IOC_IDX_3,
	VSC_IOC_IDX_4,
	VSC_IOC_IDX_5,
	VSC_IOC_IDX_6,
	VSC_IOC_IDX_7,
	VSC_IOC_IDX_8,
	VSC_IOC_IDX_9,
	VSC_IOC_IDX_10,
	VSC_IOC_IDX_11,
	VSC_IOC_IDX_12,
	VSC_IOC_IDX_13,
	VSC_IOC_IDX_14,
	VSC_IOC_IDX_15,
	VSC_IOC_IDX_16,
	VSC_IOC_IDX_17,
	VSC_IOC_IDX_18,
	VSC_IOC_IDX_19,
	VSC_IOC_IDX_20,
	VSC_IOC_IDX_21,
	VSC_IOC_IDX_22,
	VSC_IOC_IDX_23,
	VSC_IOC_IDX_24,
	VSC_IOC_IDX_25,
	VSC_IOC_IDX_26,
	VSC_IOC_IDX_27,
	VSC_IOC_IDX_28,
	VSC_IOC_IDX_29,
	VSC_IOC_IDX_30,
	VSC_IOC_IDX_31,
	VSC_IOC_IDX_32,
	VSC_IOC_IDX_33,
	VSC_IOC_IDX_34,
	VSC_IOC_IDX_35,
	VSC_IOC_IDX_36,
	VSC_IOC_IDX_37,
	VSC_IOC_IDX_38,
	VSC_IOC_IDX_39,
	VSC_IOC_IDX_40,
	VSC_IOC_IDX_41,
	VSC_IOC_IDX_42,
	VSC_IOC_IDX_43,
	VSC_IOC_IDX_44,
	VSC_IOC_IDX_45,
	VSC_IOC_IDX_46,
	VSC_IOC_IDX_47,
	VSC_IOC_IDX_48,
	VSC_IOC_IDX_49,
	VSC_IOC_IDX_50,
	VSC_IOC_IDX_51,
	VSC_IOC_IDX_52,
	VSC_IOC_IDX_53,
	VSC_IOC_IDX_54,
	VSC_IOC_IDX_55,
	VSC_IOC_IDX_56,
	VSC_IOC_IDX_57,
	VSC_IOC_IDX_58,
	VSC_IOC_IDX_59,
	VSC_IOC_IDX_60,
	VSC_IOC_IDX_61,
	VSC_IOC_IDX_62,
	VSC_IOC_IDX_63,
	VSC_IOC_IDX_64,
	VSC_IOC_IDX_65,
	VSC_IOC_IDX_66,
	VSC_IOC_IDX_67,
	VSC_IOC_IDX_68,
	VSC_IOC_IDX_69,
	VSC_IOC_IDX_70,
	VSC_IOC_IDX_71,
	VSC_IOC_IDX_72,
	VSC_IOC_IDX_73,
	VSC_IOC_IDX_74,
	VSC_IOC_IDX_75,
	VSC_IOC_IDX_76,
	VSC_IOC_IDX_77,
	VSC_IOC_IDX_78,
	VSC_IOC_IDX_79,
	VSC_IOC_IDX_80,
	VSC_IOC_IDX_81,
	VSC_IOC_IDX_82,
	VSC_IOC_IDX_83,
	VSC_IOC_IDX_84,
	VSC_IOC_IDX_85,
	VSC_IOC_IDX_86,
	VSC_IOC_IDX_87,
	VSC_IOC_IDX_88,
	VSC_IOC_IDX_89,
	VSC_IOC_IDX_90,
	VSC_IOC_IDX_91,
	VSC_IOC_IDX_92,
	VSC_IOC_MAXNR,
};

#define VSC_IOC_INITIALIZE						_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_1)
#define VSC_IOC_UNINITIALIZE					_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_2)
#define VSC_IOC_OPEN							_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_3, KADP_VIDEO_WID_T)
#define VSC_IOC_CLOSE							_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_4, KADP_VIDEO_WID_T)
#define VSC_IOC_CONNECT							_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_5, VSC_CONNECT_PARA_T)
#define VSC_IOC_DISCONNECT						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_6, VSC_CONNECT_PARA_T)
#define VSC_IOC_SET_WINBLANK					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_7, VSC_WINBLANK_PARA_T)
#define VSC_IOC_GET_INPUTREGION					_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_8, VSC_GET_FRAME_REGION_T)
#define VSC_IOC_SET_INPUTREGION					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_9, VSC_SET_FRAME_REGION_T)
#define VSC_IOC_GET_OUTPUTREGION				_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_10, VSC_GET_FRAME_REGION_T)
#define VSC_IOC_SET_OUTPUTREGION				_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_11, VSC_SET_FRAME_REGION_T)
#define VSC_IOC_SET_VENCMODE					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_12,VSC_SET_VENCMODE_ACTION_T)
#define VSC_IOC_SET_WINFREEZE					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_13, VSC_FREEZE_ACTION_T)
#define VSC_IOC_CAPTURE_VIDEOFRAME				_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_14, VSC_CAPTURE_FRAME_ACTION_T)
#define VSC_IOC_FREEZE_VIDEOFRAMEBUFFER			_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_15, VSC_FREEZE_ACTION_T)
#define VSC_IOC_READ_VIDEOFRAMEBUFFER			_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_16, VSC_READ_BUFFER_ACTION_T)
#define VSC_IOC_WRITE_VIDEOFRAMEBUFFER			_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_17, VSC_WRITE_BUFFER_ACTION_T)
#define VSC_IOC_SET_RGB444MODE					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_18, bool)
#define VSC_IOC_SET_3DFORSCALER					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_19, unsigned int)
#define VSC_IOC_GET_3DAUTODETECTMODE			_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_20, VSC_3DAUTODET_ACTION_T)
#define VSC_IOC_SET_3DPATTERNMODE				_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_21,VSC_3DPATTERNMODE_ACTION_T)
#define VSC_IOC_OPENV2G							_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_22, KADP_VIDEO_WID_T)
#define VSC_IOC_CLOSEV2G						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_23, KADP_VIDEO_WID_T)
#define VSC_IOC_GET_V2GFRAMEBUFFER				_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_24, VSC_GET_V2GFRAMEBUFFER_T)
#define VSC_IOC_SET_UDINPUT						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_25, KADP_VIDEO_UD_MODE_T)
#define VSC_IOC_SET_UDOUTPUT					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_26, KADP_VIDEO_DDI_DIS_FMT_T)
#define VSC_IOC_GET_VIDEODELAYEDTIME			_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_27, VSC_GET_VIDEODELAYEDTIME_T)
#define VSC_IOC_SET_TITLEMODE					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_28, bool)
#define VSC_IOC_SET_TILEMAXROWVAL				_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_29, VSC_SET_TILEMAXROWVAL_T)
#define VSC_IOC_SET_TILEID						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_30, unsigned char)
#define VSC_IOC_SET_ADAPTIVESTREAM				_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_31, bool)
#define VSC_IOC_SET_SOCOUTPUTFMT				_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_32, unsigned short)
#define VSC_IOC_SET_FRCTYPE						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_33, unsigned short)
#define VSC_IOC_GET_FRCTYPE						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_34, unsigned short)
#define VSC_IOC_GET_GETMVOPSTATUS				_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_35, unsigned short)
#define VSC_IOC_SET_VENCI3DDMA					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_36, KADP_IDMA_DISPD_CAPTURE_INFO)
#define VSC_IOC_STOPVO							_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_37)
#define VSC_IOC_GETINPUTINFO				    _IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_38, VSC_GET_INPUT_INFO)
#define VSC_IOC_SHOWOSDSAMPLE					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_39, unsigned char)
#define VSC_IOC_GETPANELSIZE					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_40, VSC_PANEL_SIZE_T)
#define VSC_IOC_SET_DOLBYVISION_IDMA_ENABLE		_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_41, unsigned char)
#define VSC_IOC_SETZORDER						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_42, VSC_SET_ZORDER_T)
#define VSC_IOC_MAKECOLOREDVIDEO				_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_43, KADP_VIDEO_COLOR_TYPE_T)
#define VSC_IOC_DM_OPEN							_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_44, unsigned char)
#define VSC_IOC_DM_CLOSE						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_45, unsigned char)
#define VSC_IOC_DM_CONNECT						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_46, unsigned char)
#define VSC_IOC_DM_DISCONNECT					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_47, unsigned char)
#define VSC_IOC_ISDOLBYHDR						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_48, unsigned char)
#define VSC_IOC_UPDATE_ADAPTIVE_STREAMING_INFO	_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_49, VSC_ADAPTIVE_STREAM_INFO_FROM_APP)
#define VSC_IOC_NOTICE_GST_VO_UPDATE			_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_50, VSC_NOTICE_GST_VO_UPDATE_INFO)
#define VSC_IOC_APP_CONTRO_FORCEBG   			_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_51, VSC_APP_CONTROL_FORCEBG_TYPE)
#define VSC_IOC_HDR_OPEN						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_52, unsigned char)
#define VSC_IOC_HDR_CLOSE						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_53, unsigned char)
#define VSC_IOC_HDR_CONNECT						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_54, unsigned char)
#define VSC_IOC_HDR_DISCONNECT					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_55, unsigned char)
#define VSC_IOC_GET_ADAPTIVE_INPUTREGION		_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_56, VSC_GET_FRAME_REGION_T)
#define VSC_IOC_SET_ADAPTIVE_INPUTREGION		_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_57, VSC_SET_FRAME_REGION_T)
#define VSC_IOC_SET_SubWinShape					_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_58)
#define VSC_IOC_SET_SetSubWinMode				_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_59)
#define VSC_IOC_SET_SetSubWinPurpose			_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_60)
#define VSC_IOC_SET_SetDelayBuffer 				_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_61)
#define VSC_IOC_GET_BLACDETECTION_INFO_T   		_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_62, VSC_GET_BLACDETECTION_INFO_T)
#define VSC_IOC_SET_BLACDETECTION_EN			_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_63, unsigned char)
#define VSC_IOC_RotateVideo						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_64, unsigned char)
#define VSC_IOC_SET_SetSubWinModeEx				_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_65)
#define VSC_IOC_SetVideoPattern					_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_66)
#define VSC_IOC_GetLimitedWindow				_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_67)
#define VSC_IOC_SET_INPUTREGION_EX				_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_68)
#define VSC_IOC_SET_ADAPTIVESTREAMEX			_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_69, VSC_ADAPTIVESTREAM_PARA_T)
#define VSC_IOC_WAIT_MUTEOFF_QUEUE              _IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_70)
#define VSC_IOC_VDO_CONNECT						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_71, VSC_CONNECT_PARA_T)
#define VSC_IOC_VDO_DISCONNECT					_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_72, VSC_CONNECT_PARA_T)
#define VSC_IOC_SetVideoLatencyPattern			_IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_73)
#define VSC_IOC_Set_VD_PTG						_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_74, unsigned char)
#define VSC_IOC_GET_UZD_CRC						_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_75, VSC_UZD_CRC)
#define VSC_IOC_Mdom_switch_mem_block			_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_76, unsigned char)
#define VSC_IOC_Mdom_Get_map_addr				_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_77, unsigned char)
#define VSC_IOC_Mdom_Get_phy_addr				_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_78, unsigned char)
#define VSC_IOC_SET_UZD_PATH					_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_79, unsigned char)
#define VSC_IOC_SET_DRIVER_PATTERN				_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_80, unsigned char)
#define VSC_IOC_SET_DRIVER_TABLE				_IOR(VSC_IOC_MAGIC, VSC_IOC_IDX_81, unsigned char)
#define VSC_IOC_SET_TestPatternColor            _IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_82,unsigned char)
#define VSC_IOC_SET_TestPatternRGBColor         _IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_83,unsigned char)
#define VSC_IOC_SET_TestPatternIRE              _IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_84,unsigned char)
#define VSC_IOC_SET_WINBLANK_SYNC_MEMC	        _IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_85)
#define VSC_IOC_SET_INPUT_OUTPUT	            _IO(VSC_IOC_MAGIC,  VSC_IOC_IDX_86)
#define VSC_IOC_SetSplitInfoForHDMI				_IOW(VSC_IOC_MAGIC,  VSC_IOC_IDX_87, KADP_HAL_VSC_SPLIT_INFO_T)
#define VSC_IOC_GET_SMTFinishStatus             _IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_88,unsigned char)
#define VSC_IOC_SET_CobaltResizeAction          _IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_88,unsigned char)
#define VSC_IOC_WAIT_NOTIFY_WIN_DELAY           _IOW(VSC_IOC_MAGIC,  VSC_IOC_IDX_90, KADP_SCALER_WIN_CALLBACK_DELAY_INFO)
#define VSC_IOC_SET_HFRMode          			_IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_91,unsigned char)
#define VSC_IOC_SET_DUALDECODER                 _IOW(VSC_IOC_MAGIC, VSC_IOC_IDX_92, unsigned char)
 
#endif

