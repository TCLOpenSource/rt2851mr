#ifndef _VFE_DEVICE_ID_MERLIN3_H_
#define _VFE_DEVICE_ID_MERLIN3_H_

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

#if defined(CONFIG_ARM64) && defined(CONFIG_COMPAT)
#define PBYTES              UINT32
#else
#define PBYTES              UINT8*
#endif

#define 	BIT0_VFE_AVD	0x00000001
#define 	KADP_BIT0_VFE_AVD	0x00000001
/*
#define BIT0 0x00000001
#define BIT1 0x00000002
#define BIT2 0x00000004
#define BIT3 0x00000008
#define BIT4 0x00000010
#define BIT5 0x00000020
#define BIT6 0x00000040
#define BIT7 0x00000080
#define BIT8 0x00000100
*/
#define AFEC_REG_BASE               0x3500  // 0x3500 - 0x35FF
#define VBI_REG_BASE                0x3700  // 0x3700 - 0x37FF

#define BK_AFEC_99  (AFEC_REG_BASE+0x99)
#define BK_AFEC_CB  (AFEC_REG_BASE+0xCB)

#define BK_VBI_70  (VBI_REG_BASE+0x70)
#define BK_VBI_CE  (VBI_REG_BASE+0xCE)
#define BK_VBI_CD  (VBI_REG_BASE+0xCD)
//=====================================?????????????????????????????????????????????========================
#ifndef OSA_MSGQ_T
typedef unsigned long OSA_MSGQ_T;
#endif
typedef enum
{
	KADP_VIDEO_AVDEC_MODE_NTSC		 = 0,
	KADP_VIDEO_AVDEC_MODE_PAL			,
	KADP_VIDEO_AVDEC_MODE_PAL_NC_358		,
	KADP_VIDEO_AVDEC_MODE_PAL_M			,
	KADP_VIDEO_AVDEC_MODE_SECAM			,
	KADP_VIDEO_AVDEC_MODE_NTSC_443		,
	KADP_VIDEO_AVDEC_MODE_PAL_60 		,
	KADP_VIDEO_AVDEC_MODE_UNKNOWN_525	,
	KADP_VIDEO_AVDEC_MODE_UNKNOWN_625	,
	KADP_VIDEO_AVDEC_MODE_UNKNOWN		,
}KADP_VFE_AVD_AVDECODER_VIDEO_MODE_T;

typedef enum
{
	 KADP_COLOR_SYSTEM_NTSC_M		 = KADP_BIT0_VFE_AVD << KADP_VIDEO_AVDEC_MODE_NTSC 	,
	 KADP_COLOR_SYSTEM_PAL_G 		= KADP_BIT0_VFE_AVD << KADP_VIDEO_AVDEC_MODE_PAL		,
	 KADP_COLOR_SYSTEM_PAL_NC_358	= KADP_BIT0_VFE_AVD << KADP_VIDEO_AVDEC_MODE_PAL_NC_358	,
	 KADP_COLOR_SYSTEM_PAL_M 		= KADP_BIT0_VFE_AVD << KADP_VIDEO_AVDEC_MODE_PAL_M	,
	 KADP_COLOR_SYSTEM_SECAM 		= KADP_BIT0_VFE_AVD << KADP_VIDEO_AVDEC_MODE_SECAM	,
	 KADP_COLOR_SYSTEM_NTSC_443		= KADP_BIT0_VFE_AVD << KADP_VIDEO_AVDEC_MODE_NTSC_443 ,
	 KADP_COLOR_SYSTEM_PAL_60		= KADP_BIT0_VFE_AVD << KADP_VIDEO_AVDEC_MODE_PAL_60	,
	 KADP_COLOR_SYSTEM_PAL_N 										,  /* TBD should be remove */
	 KADP_COLOR_SYSTEM_UNKNOWN										,  /* TBD should be remove */

}KADP_VFE_AVD_COLOR_SYSTEM_T;

typedef enum
{
	KADP_AVD_SRC_TYPE_ATV	   ,
	KADP_AVD_SRC_TYPE_AV 	   ,
	KADP_AVD_SRC_TYPE_SCART ,
	KADP_AVD_SRC_TYPE_MAX	   ,
} KADP_VFE_AVD_SRC_TYPE_T;


typedef enum
{
	KADP_AVD_PORT_FIRST	   ,
	KADP_AVD_PORT_SECOND 	   ,
	KADP_AVD_PORT_THIRD ,
	KADP_AVD_PORT_FOURTH	   ,
} KADP_VFE_AVD_PORT_TYPE_T;

typedef struct
{
	UINT16		w;	/**< horizontal Size(Width)    in pixel [0,].*/
	UINT16		h;	/**< vertical	Size(Height)   in pixel [0,].*/
	UINT16		x;	/**< horizontal Start Position in pixel [0,].*/
	UINT16		y;	/**< vertical	Start Position in pixel [0,].*/
} KADP_VFE_AVD_RECT_T;

/**
 * Video Timing Information.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
	SINT32 format;
	UINT16 hFreq;	/**< ... */
	UINT16 vFreq;	/**< ... */
	UINT16 hTotal;	/**< ... */
	UINT16 vTotal;	/**< ... */
	UINT16 hPorch;	/**< ... */
	UINT16 vPorch;	/**< ... */
	KADP_VFE_AVD_RECT_T	active; /**< ... */
	UINT8 scanType; /**< ... */
	BOOLEAN  vdLock;	/**< for ATV */
	BOOLEAN  HLock;
	BOOLEAN  VLock;
	KADP_VFE_AVD_AVDECODER_VIDEO_MODE_T	standard;
} KADP_VFE_AVD_TIMING_INFO_T;

/**
 * Video Timing Information Extend.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
	SINT32 format;
	UINT16 hFreq;	/**< ... */
	UINT16 vFreq;	/**< ... */
	UINT16 hTotal;	/**< ... */
	UINT16 vTotal;	/**< ... */
	UINT16 hPorch;	/**< ... */
	UINT16 vPorch;	/**< ... */
	KADP_VFE_AVD_RECT_T	active; /**< ... */
	UINT8 scanType; /**< ... */
	BOOLEAN  vdLock;	/**< for ATV */
	BOOLEAN  HLock;
	BOOLEAN  VLock;
	KADP_VFE_AVD_AVDECODER_VIDEO_MODE_T	standard;
	UINT16       color_space;/**< ... */
    UINT16       color_depth;/**< ... */
} KADP_VFE_AVD_TIMING_INFO_EX_T;



/**
For VRR frame rate form hdmi or scaler or error
*/
typedef enum
{
    VRR_FRAMERATE_FROM_SCALER = 0, //VRR frame rate is form Scaler	
    VRR_FRAMERATE_DISABLE,//Can't get vtem infoframe or get VRR_EN = 0.
    VRR_FRAMERATE_ERROR, //Not HDMI port, not current connected port, or etc.
} VRR_FRAMERATE_INFO_TYPE;
#if 0
typedef struct _SLR_VOINFO_2 {
	VO_VIDEO_PLANE						plane;			///< vo plane
	unsigned int						port;			///< vsc port
	unsigned int						mode;			///< current mode
	unsigned int						h_start;		///< horizontal start
	unsigned int						v_start;		///< veritical start
	unsigned int						h_width;		///< horizontal size
	unsigned int						v_length;		///< vertical size
	unsigned int						h_total;		///< total horizontal size
	unsigned int						v_total;		///< total horizontal size
	VODMA_DDOMAIN_CHROMA_FMT				chroma_fmt;		///< chroma format
	unsigned int						progressive;		///< progressive or interlace
	unsigned int						h_freq;			///< horizontal frequency
	unsigned int						v_freq;			///< vertical frequency
	unsigned int						pixel_clk;		///< pixel clock
	unsigned int						i_ratio;		///< aspect ratio of input source, 1) 4:3, 0) 16:9 (use panel's definition)
	unsigned int						source;			///< 0) DTV, 1) JPEG, 2)GAME, 3) DirectVO
	unsigned int						isJPEG;			///< 0) VIDEO, 1) JPEG // add for vip temporally, should use ""source" if scaler jpeg flow is fixed
	VO_3D_MODE_TYPE						mode_3d ;		///< 0) 2D, 1) Side-by-side, 2)top and bot, 3) frame packing
	VO_FORCE2D_MODE						force2d ;		///< 0) disable, 1) force left, 2) force right
	SLR_AFD_TYPE						afd;			///< active format description
	unsigned int						pixelAR_hor;		///< pixel aspect ratio - horizontal
	unsigned int						pixelAR_ver;		///< pixel aspect ratio - vertical
	unsigned int 						se_pre_width; 		//FixedME clamp for AP side
	unsigned int 						se_pre_height;
	unsigned int						set_se_blank;
	unsigned int 						src_h_wid;      	///< added for tcl api to keep original src_size
	unsigned int 						src_v_len;	   	///< added for tcl api to keep original src_size without crop
	unsigned int						video_full_range_flag;
	unsigned int						xvYCC;          	///< xvYCC color space
	unsigned int						transfer_characteristics;	///< information for xvYCC/HDR content
	unsigned int						matrix_coefficiets;	///< information for HDR content
	unsigned int						colour_primaries;	///< information for HDR content
	unsigned int						MaxCLL;
	unsigned int						MaxFALL;
	unsigned int						security;		///< information for security
	unsigned int						vdec_source;
	unsigned int						colorspace;
	unsigned int						lowdelay;		///<vo lowdelay mode
	unsigned int						isVP9;			//for VP9 source, mdomain go 8bit,and vo don't overscan for fs
	// keep "launcher" last for avoid compare in equal timing decesion (Scaler_DO_VO_timing_Equal())
	unsigned int						launcher;		///< 0) VO, 1) scaler request, keep last for avoid compare in equal timing decesion
} SLR_VOINFO_2;

#endif

/**
 * VDEC fine tune info
 *
 */
typedef struct
{
	UINT8 nVBICCLine;	/* for VBI parsing line select */

	UINT8 nHPLLEnable;	/* for enable HPLL tune */
	SINT8 nHPLLTune1;	/* for tunning HPLL */
	SINT8 nHPLLTune2;	/* for tunning HPLL */
	SINT8 nHPLLTune3;	/* for tunning HPLL */
	SINT8 nHPLLTune4;	/* for tunning HPLL */

	UINT8 nColorKillEnable;
	SINT8 nColorKillTune1;	/* for tunning Color Kill Level */
	SINT8 nColorKillTune2;	/* for tunning Color Kill Level */
	SINT8 nColorKillTune3;	/* for tunning Color Kill Level */
	SINT8 nColorKillTune4;	/* for tunning Color Kill Level */

	SINT8 nLockThreshold1;	/* for tunning Lock sensitivity */
	SINT8 nLockThreshold2;	/* for tunning Lock sensitivity */

}KADP_VFE_AVD_VDEC_TUNE_T;

typedef enum
{
	KADP_VIDEO_DDI_VBI_PAL_TELETEXT = 0, /**< VBI teletxet */
	KADP_VIDEO_DDI_VBI_PAL_WSS,			/**< VBI wss */
	KADP_VIDEO_DDI_VBI_PAL_VPS,			/**< VBI vps */
	KADP_VIDEO_DDI_VBI_NTSC_CC608,		/**< VBI cc608 */
	KADP_VIDEO_DDI_VBI_NTSC_WSS,
	KADP_VIDEO_DDI_VBI_ALL,
	KADP_VIDEO_DDI_VBI_MAX_SERVICE,		/**< VBI max */
} KADP_VFE_AVD_VBI_TYPE_T;

/**
*	VBI Line
*/
typedef enum
{
	KADP_VBI_18_LINE = 0,
	KADP_VBI_21_LINE,
	KADP_VBI_22_LINE,
	KADP_VBI_MULTI_LINE,
}KADP_VFE_AVD_VBI_LINE_T;

typedef enum {
	KADP_CVBS_INDEX_1 = 0,
	KADP_CVBS_INDEX_2,
	KADP_CVBS_INDEX_3,
	KADP_CVBS_INDEX_4,
	KADP_CVBS_INDEX_5,
	KADP_NUM_CVBS_INPUTS
} KADP_VIDEO_CVBS_INDEX_T;

/**
 * PAL WSS Aspect Ratio.
 *
 * @see DDI Implementation Guide
*/
typedef enum
{
	KADP_VIDEO_DDI_WSS_FULLFORMAT_4_3			= 0x8,	/**< wss info*/
	KADP_VIDEO_DDI_WSS_LETTERBOX_14_9_CENT		= 0x1,	/**< wss info*/
	KADP_VIDEO_DDI_WSS_LETTERBOX_14_9_TOP		= 0x2,	/**< wss info*/
	KADP_VIDEO_DDI_WSS_LETTERBOX_16_9_CENT		= 0xb,	/**< wss info*/
	KADP_VIDEO_DDI_WSS_LETTERBOX_16_9_TOP		= 0x4,	/**< wss info*/
	KADP_VIDEO_DDI_WSS_LETTERBOX_16_9_ZOOM		= 0xd,	/**< wss info*/
	KADP_VIDEO_DDI_WSS_FULLFORMAT_14_9			= 0xe,	/**< wss info*/
	KADP_VIDEO_DDI_WSS_FULLFORMAT_16_9			= 0x7,	/**< wss info*/
	KADP_VIDEO_DDI_WSS_INVALID					= 0x0	/**< wss info*/
} KADP_VFE_AVD_WSS_ARC_MODE_T;

typedef enum
{
	KADP_VFE_AVD_PSP_OFF,
	KADP_VFE_AVD_PSP_ON_2_LINE_SPLIT_BURST_ON,
	KADP_VFE_AVD_PSP_ON_SPLIT_BURST_OFF,
	KADP_VFE_AVD_PSP_ON_4LINE_SPLIT_BURST_ON,
} KADP_VFE_AVD_PHYSICAL_COPY_PROTECT;

typedef enum
{
	KADP_VIDEO_DDI_SCART_AR_16_9,	/**< scart aspect ratio [5 ~ 8V] */
	KADP_VIDEO_DDI_SCART_AR_4_3, 	/**< scart aspect ratio [9.5 ~ 12V] */
	KADP_VIDEO_DDI_SCART_AR_INVALID
}KADP_VFE_AVD_SCART_AR_T;

typedef enum
{
	KADP_VIDEO_DDI_FB_STATUS_CVBS,		/**< scart RF status info*/
	KADP_VIDEO_DDI_FB_STATUS_RGB,		/**< scart RF status info*/
}KADP_VFE_AVD_SCART_FB_STATUS_T;

typedef enum
{
    KADP_VFE_AVD_NOTHING_IS_SUPPORTED,
    KADP_VFE_AVD_CC_IS_SUPPORTED,
    KADP_VFE_AVD_TTX_IS_SUPPORTED,
    KADP_VFE_AVD_CC_AND_TTX_ARE_SUPPORTED,
} KADP_VFE_AVD_CC_TTX_STATUS_T;

typedef enum
{
	KADP_AVD_INTERNAL_DEMOD,
	KADP_AVD_EXTERNAL_DEMOD,
} KADP_VFE_AVD_DEMOD_TYPE;

typedef enum 
{
	KADP_AVD_AV_CONFIG_0, //for resistor   75 ohm & capacitor   47 nF
	KADP_AVD_AV_CONFIG_1, //for resistor 110 ohm & capacitor 100 nF
} KADP_VFE_AVD_AV_COEF_T;

typedef struct {
	UINT8	data1;		///< CC data1
	UINT8	data2;		///< CC data2
	UINT8	field;		///< odd/even field indication(0:Even field, 1:Odd filed)
	UINT8	status; 	///< status(reserved)
	UINT16	line_number; ///< sliced vbi line number
} KADP_VFE_AVD_CC_DATA_T;

#if defined(CONFIG_ARM64) && defined(CONFIG_COMPAT)
typedef struct {
	unsigned int pbuffer;	// ttx data
	UINT32 length;	// data length
} KADP_VFE_AVD_TTX_DATA_T;
#else
typedef struct {
	UINT8 *pbuffer;	// ttx data
	UINT32 length;	// data length
} KADP_VFE_AVD_TTX_DATA_T;
#endif

#if defined(CONFIG_ARM64) && defined(CONFIG_COMPAT)
typedef struct {
	unsigned int pbuffer;	// vps data
	UINT32 length;	// data length
}KADP_VFE_AVD_VPS_DATA_T;
#else
typedef struct {
	UINT8 *pbuffer;	// vps data
	UINT32 length;	// data length
}KADP_VFE_AVD_VPS_DATA_T;
#endif

#if defined(CONFIG_ARM64) && defined(CONFIG_COMPAT)
typedef struct {
	unsigned int pbuffer;	// wss data
	UINT32 length;	// data length
}KADP_VFE_AVD_WSS_DATA_T;
#else
typedef struct {
	UINT8 *pbuffer;	// wss data
	UINT32 length;	// data length
}KADP_VFE_AVD_WSS_DATA_T;
#endif


typedef enum KADP_VFE_NSTD_ITEMID{
	KADP_VFE_ATVNSTD0 = 0,
	KADP_VFE_ATVNSTD1 ,
	KADP_VFE_ATVNSTD2 ,
	KADP_VFE_ATVNSTD3 ,
	KADP_VFE_ATVNSTD4 ,
	KADP_VFE_ATVNSTD5 ,
	KADP_VFE_ATVNSTD6 ,
	KADP_VFE_ATVNSTD7 ,
	KADP_VFE_ATVNSTD8 ,
	KADP_VFE_ATVNSTD9 ,
	KADP_VFE_AVNSTD0 ,
	KADP_VFE_AVNSTD1 ,
	KADP_VFE_AVNSTD2 ,
	KADP_VFE_AVNSTD3 ,
	KADP_VFE_AVNSTD4 ,
	KADP_VFE_AVNSTD5 ,
	KADP_VFE_AVNSTD6 ,
	KADP_VFE_AVNSTD7 ,
	KADP_VFE_AVNSTD8 ,
	KADP_VFE_AVNSTD9 ,
    }KADP_VFE_NSTD_ITEMID;

    typedef enum KADP_VFE_ATV_NSTD_FLAG{
	KADP_VFE_ATVNSTNFLAG0 = 0x0001,
	KADP_VFE_ATVNSTNFLAG1 = 0x0002,
	KADP_VFE_ATVNSTNFLAG2 = 0x0004,
	KADP_VFE_ATVNSTNFLAG3 = 0x0008,
	KADP_VFE_ATVNSTNFLAG4 = 0x0010,
	KADP_VFE_ATVNSTNFLAG5 = 0x0020,
	KADP_VFE_ATVNSTNFLAG6 = 0x0040,
	KADP_VFE_ATVNSTNFLAG7 = 0x0080,
	KADP_VFE_ATVNSTNFLAG8 = 0x0100,
	KADP_VFE_ATVNSTNFLAG9 = 0x0200,
    }KADP_VFE_ATV_NSTD_FLAG;

    typedef enum KADP_VFE_AV_NSTD_FLAG{
	KADP_VFE_AVNSTDFLAG0 = 0x00010000,
	KADP_VFE_AVNSTDFLAG1 = 0x00020000,
	KADP_VFE_AVNSTDFLAG2 = 0x00040000,
	KADP_VFE_AVNSTDFLAG3 = 0x00080000,
	KADP_VFE_AVNSTDFLAG4 = 0x00100000,
	KADP_VFE_AVNSTDFLAG5 = 0x00200000,
	KADP_VFE_AVNSTDFLAG6 = 0x00400000,
	KADP_VFE_AVNSTDFLAG7 = 0x00800000,
	KADP_VFE_AVNSTDFLAG8 = 0x01000000,
	KADP_VFE_AVNSTDFLAG9 = 0x02000000,
	}KADP_VFE_AV_NSTD_FLAG;

//==================================================================
//============================ADC willychou copy form hal_vfe_adc.h======================
/**
 * type of adc adjusting.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
    UINT16  rGain  ;
    UINT16  gGain  ;
    UINT16  bGain  ;
    UINT16  rOffset;
    UINT16  gOffset;
    UINT16  bOffset;

} KADP_ADC_CAL_DATA_T;

/**
 * Adjust ADC Calibration Type
 *
 * @see DIL Implementation Guide
*/
typedef enum{
    KADP_ADC_CAL_TYPE_OTP      = 0,
    KADP_ADC_CAL_TYPE_EXTERNAL    ,
    KADP_ADC_CAL_TYPE_INTERNAL    ,
    KADP_ADC_CAL_TYPE_USER        ,
    KADP_ADC_CAL_TYPE_MAX         ,
}KADP_ADC_CAL_TYPE_T;


/**
 * type of adc  input source
*/
typedef enum
{
    KADP_ADC_SRC_TYPE_COMP      ,     /**< adc input*/
    KADP_ADC_SRC_TYPE_SCART     ,     /**< adc input*/
    KADP_ADC_SRC_TYPE_VGA       ,     /**< adc input*/
    KADP_ADC_SRC_TYPE_MAX       ,     /**< adc input*/
}KADP_ADC_SRC_TYPE_T;


/**
 * type of adc adjusting.
 *
 * @see DDI Implementation Guide
*/
typedef enum
{
    KADP_ADC_PORT_FIRST   = 0,     /**< adc input*/
    KADP_ADC_PORT_SECOND     ,     /**< adc input*/
    KADP_ADC_PORT_THIRD      ,
    KADP_ADC_PORT_MAX        ,     /**< adc input*/
}KADP_ADC_PORT_T;


/**
 * Video Window Rect.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
    KADP_ADC_SRC_TYPE_T srcType;
    KADP_ADC_PORT_T srcPort;
}KADP_ADC_SRC_T;

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
 * Video Timing Information.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
   	SINT32       format  ;/**< ... */
	UINT16       hFreq   ;/**< ... */
	UINT16       vFreq   ;/**< ... */
	UINT16       hTotal  ;/**< ... */
	UINT16       vTotal  ;/**< ... */
	UINT16       hPorch  ;/**< ... */
	UINT16       vPorch  ;/**< ... */
	KADP_VIDEO_RECT_T active  ;/**< ... */
	UINT16       scanType;/**< ... */
	UINT16       phase   ;/**< ... */
}KADP_ADC_TIMING_INFO_T;

/**
 * Video Timing Information Extend.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
   	SINT32       format  ;/**< ... */
	UINT16       hFreq   ;/**< ... */
	UINT16       vFreq   ;/**< ... */
	UINT16       hTotal  ;/**< ... */
	UINT16       vTotal  ;/**< ... */
	UINT16       hPorch  ;/**< ... */
	UINT16       vPorch  ;/**< ... */
	KADP_VIDEO_RECT_T active  ;/**< ... */
	UINT16       scanType;/**< ... */
	UINT16       phase   ;/**< ... */
	UINT16       color_space;/**< ... */
    UINT16       color_depth;/**< ... */
}KADP_ADC_TIMING_INFO_EX_T;

typedef struct
{
	UINT32 cgmsAPS               : 4 ;  // Header[6-bits] + {PayLoad + CRC}[14-bits]
										// CGMS-A 2-bits = CGMS20BitsVBI & (BIT6 | BIT7) >> 6
										// APS        2-bits = CGMS20BitsVBI & (BIT8 | BIT9) >> 8
	UINT32 copyRight             : 2 ;  // Copy Right		 	= CopyInfo576i576p >> 0
										// Copy Protection		= CopyInfo576i576p >> 1
	UINT32 PseudosyncColorStripe : 2 ;  // 00:no apps, 01:PSP on,cstripe off, 10:PSP on,2-line cstripe on, 11:PSP on,4-line cstripe on
	UINT32 ACPReserved           : 24;  // not used
}KADP_ADC_COPY_PROTECT_T;

typedef enum
{
	KADP_ADJ_PC_AUTO = 0,		// PC Auto
	KADP_ADJ_PC_H_POS,			// PC H Position
	KADP_ADJ_PC_V_POS,			// PC V Position
	KADP_ADJ_PC_HV_POS,
	KADP_ADJ_PC_CLOCK,			// PC Clock
	KADP_ADJ_PC_PHASE,			// PC Phase
} KADP_ADJ_PC_MODE_T;

typedef struct
{
	KADP_ADJ_PC_MODE_T mode;
	UINT16 value;
}KADP_ADJ_PC_T;

#if defined(CONFIG_ARM64) && defined(CONFIG_COMPAT)
typedef struct
{
	unsigned int pData;
	UINT8 len;
}KADP_ADC_PC_EDID_T;
#else
typedef struct
{
	UINT8 *pData;
	UINT8 len;
}KADP_ADC_PC_EDID_T;
#endif


//==================================================================
//==========================willychou copy form hal_vfe_hdmi.h===================================
#define HAL_VFE_HDMI_PACKET_DATA_LENGTH 28
#define HAL_VFE_HDMI_INFOFRAME_PACKET_LEN 28
#define HAL_VFE_HDMI_VENDOR_SPECIFIC_REGID_LEN 3
#define HAL_VFE_HDMI_VENDOR_SPECIFIC_PAYLOAD_LEN \
    (HAL_VFE_HDMI_INFOFRAME_PACKET_LEN - HAL_VFE_HDMI_VENDOR_SPECIFIC_REGID_LEN)

#define HAL_VFE_HDMI_SPD_IF_VENDOR_LEN          8
#define HAL_VFE_HDMI_SPD_IF_DESC_LEN            16
#define MAX_NUMBER_OF_CHANNEL 4
#define MAX_LENGTH_OF_DRIVER_VERSION 32
#define MAX_LENGTH_OF_DEBUG_MESSAGE 128

#define HAL_VFE_HDMI_CURRENT_PORT 0x7F    //driver can identify using current channel from User HAL,

/**
 * HDMI or DVI mode.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
    KADP_VFE_HDMI_DVI,		/**< DVI signal */
    KADP_VFE_HDMI_HDMI,	/**< HDMI signal */
} KADP_HAL_VFE_HDMI_MODE_T;

/**
 * HDMI packet status.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
    KADP_VFE_HDMI_PACKET_STATUS_NOT_RECEIVED = 0,		/**< HDMI packet status */
    KADP_VFE_HDMI_PACKET_STATUS_STOPPED,				/**< HDMI packet status */
    KADP_VFE_HDMI_PACKET_STATUS_UPDATED,				/**< HDMI packet status */
    KADP_VFE_HDMI_PACKET_STATUS_MAX					/**< HDMI packet status */
} KADP_HAL_VFE_HDMI_PACKET_STATUS_T;



/**
 * HDMI AVI CSC Info.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
    KADP_VFE_HDMI_AVI_CSC_RGB = 0,		/**< HDMI CSC info */
    KADP_VFE_HDMI_AVI_CSC_YCBCR422,	/**< HDMI CSC info */
    KADP_VFE_HDMI_AVI_CSC_YCBCR444,	/**< HDMI CSC info */
    KADP_VFE_HDMI_AVI_CSC_YCBCR420		/**< HDMI CSC info */
} KADP_HAL_VFE_HDMI_AVI_CSC_T;


/**
 * HDMI AVI ACTIVE Info.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
    KADP_VFE_HDMI_AVI_ACTIVE_INFO_INVALID = 0,		/**< HDMI info */
    KADP_VFE_HDMI_AVI_ACTIVE_INFO_VALID			/**< HDMI info */
} KADP_HAL_VFE_HDMI_AVI_ACTIVE_INFO_T;


/**
 * HDMI AVI BAR Info.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
    KADP_VFE_HDMI_AVI_BAR_INFO_INVALID,			/**< HDMI info */
    KADP_VFE_HDMI_AVI_BAR_INFO_VERTICALVALID,		/**< HDMI info */
    KADP_VFE_HDMI_AVI_BAR_INFO_HORIZVALID,			/**< HDMI info */
    KADP_VFE_HDMI_AVI_BAR_INFO_VERTHORIZVALID		/**< HDMI info */
} KADP_HAL_VFE_HDMI_AVI_BAR_INFO_T;


/**
 * HDMI AVI SCAN Info.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
    KADP_VFE_HDMI_AVI_SCAN_INFO_NODATA,			/**< HDMI info */
    KADP_VFE_HDMI_AVI_SCAN_INFO_OVERSCANNED,		/**< HDMI info */
    KADP_VFE_HDMI_AVI_SCAN_INFO_UNDERSCANNED,		/**< HDMI info */
    KADP_VFE_HDMI_AVI_SCAN_INFO_FUTURE		= 3
} KADP_HAL_VFE_HDMI_AVI_SCAN_INFO_T;


/**
 * HDMI Colorimetry.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
    KADP_VFE_HDMI_AVI_COLORIMETRY_NODATA =  0,		/**< HDMI info */
    KADP_VFE_HDMI_AVI_COLORIMETRY_SMPTE170,		/**< HDMI info */
    KADP_VFE_HDMI_AVI_COLORIMETRY_ITU709,			/**< HDMI info */
    KADP_VFE_HDMI_AVI_COLORIMETRY_FUTURE,			/**< HDMI info */
    KADP_VFE_HDMI_AVI_COLORIMETRY_EXTENDED = KADP_VFE_HDMI_AVI_COLORIMETRY_FUTURE

} KADP_HAL_VFE_HDMI_AVI_COLORIMETRY_T;


/**
 * HDMI AVI Picture ARC.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
	KADP_VFE_HDMI_AVI_PICTURE_ARC_NODATA = 0,		/**< HDMI info */
	KADP_VFE_HDMI_AVI_PICTURE_ARC_4_3,				/**< HDMI info */
	KADP_VFE_HDMI_AVI_PICTURE_ARC_16_9,			/**< HDMI info */
	KADP_VFE_HDMI_AVI_PICTURE_ARC_FUTURE			/**< HDMI info */
} KADP_HAL_VFE_HDMI_AVI_PICTURE_ARC_T;


/**
 * HDMI AVI ACTIVE FORMAT ARC.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
	KADP_VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_PICTURE    =  8,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_4_3CENTER  =  9,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_16_9CENTER = 10,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_14_9CENTER = 11,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_OTHER      =  0	/**< HDMI info */
} KADP_HAL_VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_T;


/**
 * HDMI AVI Scaling info.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
	KADP_VFE_HDMI_AVI_SCALING_NOSCALING = 0,		/**< HDMI info */
	KADP_VFE_HDMI_AVI_SCALING_HSCALING,			/**< HDMI info */
	KADP_VFE_HDMI_AVI_SCALING_VSCALING,			/**< HDMI info */
	KADP_VFE_HDMI_AVI_SCALING_HVSCALING			/**< HDMI info */
} KADP_HAL_VFE_HDMI_AVI_SCALING_T;


/**
 * HDMI AVI IT Content.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
	KADP_VFE_HDMI_AVI_IT_CONTENT_NODATA    =  0,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_IT_CONTENT_ITCONTENT  =  1	/**< HDMI info */
} KADP_HAL_VFE_HDMI_AVI_IT_CONTENT_T;


/**
 * HDMI Extended Colorimetry.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
	KADP_VFE_HDMI_AVI_EXT_COLORIMETRY_XVYCC601              = 0,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_EXT_COLORIMETRY_XVYCC709              = 1 ,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_EXT_COLORIMETRY_sYCC601               = 2 ,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_EXT_COLORIMETRY_AdobeYCC601          = 3 ,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_EXT_COLORIMETRY_AdobeRGB              = 4 ,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_EXT_COLORIMETRY_ITURBT2020YCCBCCRC   = 5,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_EXT_COLORIMETRY_ITURBT2020RGBorYCBCR = 6,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_EXT_COLORIMETRY_RESERVED		/**< HDMI info */

} KADP_HAL_VFE_HDMI_AVI_EXT_COLORIMETRY_T;


/**
 * HDMI AVI RGB Quantization range.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
	KADP_VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_DEFAULT    =  0,		/**< HDMI info */
	KADP_VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_LIMITEDRANGE  =  1,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_FULLRANGE = 2,		/**< HDMI info */
	KADP_VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_RESERVED = 3			/**< HDMI info */
} KADP_HAL_VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_T;


/**
 * HDMI AVI YCC Quantization range.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
	KADP_VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_LIMITEDRANGE  =  0,	/**< HDMI info */
	KADP_VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_FULLRANGE = 1,		/**< HDMI info */
	KADP_VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_RESERVED = 2			/**< HDMI info */
} KADP_HAL_VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_T;


/**
 * HDMI AVI Content Type.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef enum
{
	KADP_VFE_HDMI_AVI_CONTENT_TYPE_GRAPHICS = 0,
	KADP_VFE_HDMI_AVI_CONTENT_TYPE_PHOTO,
	KADP_VFE_HDMI_AVI_CONTENT_TYPE_CINEMA,
	KADP_VFE_HDMI_AVI_CONTENT_TYPE_GAME,
	KADP_VFE_HDMI_AVI_CONTENT_TYPE_MAX
} KADP_HAL_VFE_HDMI_AVI_CONTENT_TYPE_T;

/**
 * HDMI Additional Colorimetry.
 *
 * @see CTA861G or above, ACE3ACE0
*/
typedef enum
{
	KADP_VFE_HDMI_AVI_ADDITIONAL_COLORIMETRY_DCI_P3_D65 = 0,
	KADP_VFE_HDMI_AVI_ADDITIONAL_COLORIMETRY_DCI_P3_THEATER,
	KADP_VFE_HDMI_AVI_ADDITIONAL_COLORIMETRY_RESERVED,
	KADP_VFE_HDMI_AVI_ADDITIONAL_COLORIMETRY_MAX
} KADP_HAL_VFE_HDMI_AVI_ADDITIONAL_COLORIMETRY_T;

/**
 * group of HDMI info.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef struct
{
	//int		prt_num;				/// < port selection information(-1: use previous selected port)
	UINT8 type;            /**< packet type */
	UINT8 version;         /**< packet version */
	UINT8 length;          /**< packet length */
	UINT8 dataBytes[HAL_VFE_HDMI_PACKET_DATA_LENGTH]; /**< packet data */
} KADP_HAL_VFE_HDMI_IN_PACKET_T;

//=============================================================
//							 HDMI AVI Info.
//=============================================================

/**
 * HDMI AVI RGB INFO.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef struct
{
	KADP_HAL_VFE_HDMI_MODE_T eHDMIMode;				/**< HDMI info */

	KADP_HAL_VFE_HDMI_AVI_CSC_T ePixelEncoding;			/**< HDMI info */

	KADP_HAL_VFE_HDMI_AVI_ACTIVE_INFO_T eActiveInfo;		/**< HDMI info */	/* A0 */
	KADP_HAL_VFE_HDMI_AVI_BAR_INFO_T   eBarInfo;			/**< HDMI info */   /* B1B0 */
	KADP_HAL_VFE_HDMI_AVI_SCAN_INFO_T   eScanInfo;			/**< HDMI info */   /* S1S0 */

	KADP_HAL_VFE_HDMI_AVI_COLORIMETRY_T eColorimetry;		/**< HDMI info */	/* C1C0 */

	KADP_HAL_VFE_HDMI_AVI_PICTURE_ARC_T ePictureAspectRatio;	/**< HDMI info */	/* M1M0 */

	KADP_HAL_VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_T eActiveFormatAspectRatio;/**< HDMI info */	/* R3R0 */

	KADP_HAL_VFE_HDMI_AVI_SCALING_T eScaling;						/**< HDMI info */	/* SC1SC0 */

	UINT8 VideoIdCode;								/**< HDMI info */	/* VICn */

	UINT8 PixelRepeat;								/**< HDMI info */

	KADP_HAL_VFE_HDMI_AVI_IT_CONTENT_T eITContent;			/**< HDMI info */	/*ITC */

	KADP_HAL_VFE_HDMI_AVI_EXT_COLORIMETRY_T eExtendedColorimetry;	/**< HDMI info */	/* EC2EC1EC0 */

	KADP_HAL_VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_T eRGBQuantizationRange;	/**< HDMI info */	/* Q1Q0 */

	KADP_HAL_VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_T eYCCQuantizationRange;	/**< HDMI info */	/* YQ1YQ0 */

	KADP_HAL_VFE_HDMI_AVI_CONTENT_TYPE_T eContentType;			/**< HDMI info */	/* Contents Type */

	/* bar info */
	UINT16 TopBarEndLineNumber;				/**< HDMI info */
	UINT16 BottomBarStartLineNumber;		/**< HDMI info */
	UINT16 LeftBarEndPixelNumber;			/**< HDMI info */
	UINT16 RightBarEndPixelNumber;			/**< HDMI info */

	KADP_HAL_VFE_HDMI_AVI_ADDITIONAL_COLORIMETRY_T eAdditionalColorimetry;		/**< HDMI info */ /*ACE3ACE0*/

	UINT8 f14;		/**< HDMI info */  /*F143F140*/

	KADP_HAL_VFE_HDMI_PACKET_STATUS_T packetStatus;	/**< HDMI info */

	KADP_HAL_VFE_HDMI_IN_PACKET_T packet;					/**< HDMI info */
} KADP_HAL_VFE_HDMI_AVI_T;


//=============================================================
//							 HDMI SPD Info.
//=============================================================


/**
 *
 * HDMI SPD Info.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef struct
{
    UINT8 VendorName[HAL_VFE_HDMI_SPD_IF_VENDOR_LEN+1];  /* add space for NULL */
    UINT8 ProductDescription[HAL_VFE_HDMI_SPD_IF_DESC_LEN+1];
    UINT8 SourceDeviceInfo;
    KADP_HAL_VFE_HDMI_PACKET_STATUS_T packetStatus;				/**< HDMI VSI info */
    KADP_HAL_VFE_HDMI_IN_PACKET_T packet;								/**< HDMI VSI info */
} KADP_HAL_VFE_HDMI_SPD_T;

//=============================================================
//							 HDMI VSI Info.
//=============================================================

/*
  HDMI video format

*/
typedef enum
{
	KADP_VFE_HDMI_VSI_VIDEO_FORMAT_NO_ADDITIONAL_FORMAT, //2D
	KADP_VFE_HDMI_VSI_VIDEO_FORMAT_EXTENDED_RESOLUTION_FORMAT,
	KADP_VFE_HDMI_VSI_VIDEO_FORMAT_3D_FORMAT,
}KADP_HAL_VFE_HDMI_VSI_VIDEO_FORMAT_T;

/**
 * HDMI Video VSI 3D Info
 * see HDMI Spec. v1.4a
*/
typedef enum
{
	KADP_VFE_HDMI_VSI_3D_STRUCTURE_FRAME_PACKING,			//*0

	KADP_VFE_HDMI_VSI_3D_STRUCTURE_FIELD_ALTERNATIVE,		//*1
	KADP_VFE_HDMI_VSI_3D_STRUCTURE_LINE_ALTERNATIVE,		//*2
	KADP_VFE_HDMI_VSI_3D_STRUCTURE_SIDEBYSIDE_FULL,		//*3
	KADP_VFE_HDMI_VSI_3D_STRUCTURE_L_DEPTH,				//*4
	KADP_VFE_HDMI_VSI_3D_STRUCTURE_L_DEPTH_GRAPHICS,		//*5

	KADP_VFE_HDMI_VSI_3D_STRUCTURE_TOP_BOTTOM,			//*6
	/*reserved 7*/
	KADP_VFE_HDMI_VSI_3D_STRUCTURE_SIDEBYSIDE_HALF	=	0x08,
	KADP_VFE_HDMI_VSI_3D_STRUCTURE_TOP_BOTTOM_DIRECTV =	0x09,

}KADP_HAL_VFE_HDMI_VSI_3D_STRUCTURE_T;


/**
 * HDMI Video VSI 3D Info
 * see HDMI Spec. v1.4a
*/
typedef enum
{
	KADP_VFE_HDMI_VSI_3D_EXT_DATA_HOR_SUB_SAMPL_0,
	KADP_VFE_HDMI_VSI_3D_EXT_DATA_HOR_SUB_SAMPL_1,
	KADP_VFE_HDMI_VSI_3D_EXT_DATA_HOR_SUB_SAMPL_2,
	KADP_VFE_HDMI_VSI_3D_EXT_DATA_HOR_SUB_SAMPL_3,

	KADP_VFE_HDMI_VSI_3D_EXT_DATA_QUINCUNX_MATRIX_0 = 0x04,
	KADP_VFE_HDMI_VSI_3D_EXT_DATA_QUINCUNX_MATRIX_1,
	KADP_VFE_HDMI_VSI_3D_EXT_DATA_QUINCUNX_MATRIX_2,
	KADP_VFE_HDMI_VSI_3D_EXT_DATA_QUINCUNX_MATRIX_3,

}KADP_HAL_VFE_HDMI_VSI_3D_EXT_DATA_T;


/**
 * HDMI Video Format Identification Code for extended resolution 0~ff
 *
*/
typedef enum
{
	KADP_VFE_HDMI_RESERVED,
	KADP_VFE_HDMI_VSI_VIC_4K2K_30HZ,
	KADP_VFE_HDMI_VSI_VIC_4K2K_25HZ,
	KADP_VFE_HDMI_VSI_VIC_4K2K_24HZ,
	KADP_VFE_HDMI_VSI_VIC_4K2K_24HZ_SMPTE,
}KADP_HAL_VFE_HDMI_VSI_VIC_T;




/**
 * HDMI VSI Info.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef struct
{
	KADP_HAL_VFE_HDMI_VSI_VIDEO_FORMAT_T eVideoFormat;	/**< HDMI VSI info */
	KADP_HAL_VFE_HDMI_VSI_3D_STRUCTURE_T e3DStructure;	/**< HDMI VSI info */
	KADP_HAL_VFE_HDMI_VSI_3D_EXT_DATA_T e3DExtData;		/**< HDMI VSI info */

	KADP_HAL_VFE_HDMI_VSI_VIC_T eVSiVIC;					/**< HDMI VSI info */

    UINT8 IEERegId[HAL_VFE_HDMI_VENDOR_SPECIFIC_REGID_LEN];	/**< HDMI VSI info */
    UINT8 PayLoad[HAL_VFE_HDMI_VENDOR_SPECIFIC_PAYLOAD_LEN];	/**< HDMI VSI info */
    KADP_HAL_VFE_HDMI_PACKET_STATUS_T packetStatus;				/**< HDMI VSI info */
    KADP_HAL_VFE_HDMI_IN_PACKET_T packet;								/**< HDMI VSI info */
} KADP_HAL_VFE_HDMI_VSI_T;


typedef enum
{
KADP_HAL_HDMI_DRM_EOTF_SDR_LUMINANCE_RANGE,
KADP_HAL_HDMI_DRM_EOTF_HDR_LUMINANCE_RANGE,
KADP_HAL_HDMI_DRM_EOTF_SMPTE_ST_2084,
KADP_HAL_HDMI_DRM_EOTF_FUTURE_EOTF,
KADP_HAL_HDMI_DRM_EOTF_RESERVED_4,
KADP_HAL_HDMI_DRM_EOTF_RESERVED_5,
KADP_HAL_HDMI_DRM_EOTF_RESERVED_6,
KADP_HAL_HDMI_DRM_EOTF_RESERVED_7,
KADP_HAL_HDMI_DRM_EOTF_MAX,
}KADP_HAL_HDMI_DRM_EOTF_T;

typedef enum
{
KADP_HAL_HDMI_DRM_META_TYPE1,
KADP_HAL_HDMI_DRM_META_RESERVED1,
KADP_HAL_HDMI_DRM_META_RESERVED2,
KADP_HAL_HDMI_DRM_META_RESERVED3,
KADP_HAL_HDMI_DRM_META_RESERVED4,
KADP_HAL_HDMI_DRM_META_RESERVED5,
KADP_HAL_HDMI_DRM_META_RESERVED6,
KADP_HAL_HDMI_DRM_META_RESERVED7,
}KADP_HAL_HDMI_DRM_META_DESC_T;


typedef struct{
 UINT8 nVersion;
 UINT8 nLength;
 KADP_HAL_HDMI_DRM_EOTF_T eEOTFtype;
 KADP_HAL_HDMI_DRM_META_DESC_T eMeta_Desc;
 UINT16 display_primaries_x0;
 UINT16 display_primaries_y0;
 UINT16 display_primaries_x1;
 UINT16 display_primaries_y1;
 UINT16 display_primaries_x2;
 UINT16 display_primaries_y2;
 UINT16 white_point_x;
 UINT16 white_point_y;
 UINT16 max_display_mastering_luminance;
 UINT16 min_display_mastering_luminance;
 UINT16 maximum_content_light_level;
 UINT16 maximum_frame_average_light_level;
}KADP_HAL_VFE_HDMI_DRM_INFO_T;

typedef enum
{
	KADP_VD_27M_OFF=0x0000,
	KADP_VD_27M_HSD960_DI5A=0x0001,
	KADP_VD_27M_HSD1440_DI3A=0x0002,
} KADP_VFE_AVD_27M_MODE;

//=============================================================
//							 HDMI PACKET Info.
//=============================================================


/**
 * HDMI PACKET Info.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef struct
{

	KADP_HAL_VFE_HDMI_MODE_T eHDMIMode;				/**< HDMI info */
	KADP_HAL_VFE_HDMI_AVI_T	stAVI;		/**< HDMI AVI info */
	KADP_HAL_VFE_HDMI_SPD_T	stSPD;		/**< HDMI SPD info */
	KADP_HAL_VFE_HDMI_VSI_T	stVSI;		/**< HDMI VSI info */

} KADP_HAL_VFE_HDMI_ALL_PACKET_T;

#if 0

/**
 * HDMI GCP Info.
 *
 * @see HDMI Spec.
*/
typedef enum
{
  HAL_VFE_HDMI_GCP_NOT_INDICATED = 0,
  HAL_VFE_HDMI_GCP_24BITS_PER_PIXEL = 4,
  HAL_VFE_HDMI_GCP_30BITS_PER_PIXEL = 5,
  HAL_VFE_HDMI_GCP_36BITS_PER_PIXEL = 6,
  HAL_VFE_HDMI_GCP_48BITS_PER_PIXEL = 7,
} HAL_VFE_HDMI_GCP_COLOR_DEPTH;

/**
 * HDMI GCP Info.
 *
 * @see HDMI Spec.
*/
typedef enum
{
    HAL_VFE_HDMI_GCP_PP_PHASE4 = 0,
    HAL_VFE_HDMI_GCP_PP_PHASE1 = 1,
    HAL_VFE_HDMI_GCP_PP_PHASE2 = 2,
    HAL_VFE_HDMI_GCP_PP_PHASE3 = 3,
    HAL_VFE_HDMI_GCP_PP_RESERVED = 4,
} HAL_VFE_HDMI_GCP_PIXEL_PACKING_PHASE;

/**
 *
 * HDMI GCP Packet Info.
 *
 * @see HDMI Spec. v1.3a or above
*/
typedef struct
{
    HAL_VFE_HDMI_GCP_COLOR_DEPTH e_CD;
    HAL_VFE_HDMI_GCP_PIXEL_PACKING_PHASE e_PP;
    BOOLEAN bSet_AVMUTE;
    BOOLEAN bDefault_Phase;

} HAL_VFE_HDMI_GCP_T;

#endif

/**
 * HDMI Rect.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
	UINT16		x;	/**< horizontal Start Position in pixel [0,].*/
	UINT16		y;	/**< vertical   Start Position in pixel [0,].*/
	UINT16		w;	/**< horizontal Size(Width)    in pixel [0,].*/
	UINT16		h;	/**< vertical   Size(Height)   in pixel [0,].*/
} KADP_HAL_VFE_HDMI_RECT_T;

/**
 * 3D Video Full Timing Information.
 *
 * @see DDI Implementation Guide
*/
/*  have to refer timing info, doesn't refer 3D tag or header info */
typedef enum
{
	/*     아래 enum value는 관리 안함.  */
	KADP_VFE_HDMI_3D_FORMAT_2D,					/**< for No 3D (OFF)..... INPUT_TYPE_2DTO3D */

	/*      From UI, 3D ON이면서 아래 Format이 넘어오면 일반 3D ON이 됨.    */
	//interim format - half
	KADP_VFE_HDMI_3D_FORMAT_TOP_BOTTOM,			/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_TOPNBOTTOM*/
	KADP_VFE_HDMI_3D_FORMAT_SIDEBYSIDE_HALF,	/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_SIDEBYSIDE*/
	KADP_VFE_HDMI_3D_FORMAT_CHECKER_BOARD,		/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_CHECKERBOARD*/
	KADP_VFE_HDMI_3D_FORMAT_FRAME_SEQ,			/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_FRAMESEQ*/
	KADP_VFE_HDMI_3D_FORMAT_COLUMN_INTERLEAVE,	/**< for H.264*/
	KADP_VFE_HDMI_3D_FORMAT_LINE_INTERLEAVE_HALF,	/**< for H.264*/

	//Full format
	KADP_VFE_HDMI_3D_FORMAT_FRAME_PACKING,			/**< Full format*/
	KADP_VFE_HDMI_3D_FORMAT_FIELD_ALTERNATIVE,		/**< Full format*/
	KADP_VFE_HDMI_3D_FORMAT_LINE_ALTERNATIVE,		/**< Full format (row interleave)*/
	KADP_VFE_HDMI_3D_FORMAT_SIDEBYSIDE_FULL,		/**< Full format*/
	KADP_VFE_HDMI_3D_FORMAT_DUALSTREAM,		/**< Full format*/
	/*    From UI, 3D ON이면서 아래 Format이 넘어오면 2D to 3D 가 됨    */
	KADP_VFE_HDMI_3D_FORMAT_2DTO3D,					/**< for2D TO  3D..... INPUT_TYPE_2DTO3D */
	KADP_VFE_HDMI_3D_FORMAT_MAX,

}KADP_HAL_VFE_HDMI_3D_FORMAT_TYPE_T;


/**
 * 3D L/R selection
 * .
*/
typedef enum
{
	KADP_VFE_HDMI_3D_LR,	//Driver와 일치.
	KADP_VFE_HDMI_3D_RL,
}KADP_HAL_VFE_HDMI_3D_LR_TYPE_T;


//=============================================================
//							 HDMI TIMING Info.
//=============================================================

/**
 * HDMI Timing Information.
 *
 * @see DDI Implementation Guide
*/
typedef struct
{
   	UINT32 format;	/**< update by LG */
	UINT16 hFreq;	/**< ... */
	UINT16 vFreq;	/**< ... */
	UINT16 hTotal;	/**< ... */
	UINT16 vTotal;	/**< ... */
	UINT16 hPorch;	/**< ... */
	UINT16 vPorch;	/**< ... */
	KADP_HAL_VFE_HDMI_RECT_T	active;	/**< ... */
	UINT16 scanType;	/**< ... */
	UINT8  mode;	    /**< update by LG */
	UINT8  isDolbyHDR;
	unsigned char mode_table_index;

	KADP_HAL_VFE_HDMI_3D_FORMAT_TYPE_T full_3d_timing;	// 3D format information base on timing info
	KADP_HAL_VFE_HDMI_3D_LR_TYPE_T	video_LR_order;

	UINT8 isALLM;
} KADP_HAL_VFE_HDMI_TIMING_INFO_T;

/*-----------------------------------------------------------------------------
	Constant Definitions
------------------------------------------------------------------------------*/
#define VFE_HDMI_PACKET_DATA_LENGTH			28
#define VFE_HDMI_INFOFRAME_PACKET_LEN		28
#define VFE_HDMI_VENDOR_SPECIFIC_REGID_LEN	3
#define VFE_HDMI_VENDOR_SPECIFIC_PAYLOAD_LEN \
    (VFE_HDMI_INFOFRAME_PACKET_LEN - VFE_HDMI_VENDOR_SPECIFIC_REGID_LEN)

#define VFE_HDMI_SPD_IF_VENDOR_LEN			8
#define VFE_HDMI_SPD_IF_DESC_LEN				16

#define VFE_HDMI_PORT_NUM						4///3
#define HDCP_AKSV_SIZE_BYTES					5

#define SIZE_OF_EM_PACKET						31

/*-----------------------------------------------------------------------------
	(Extern Variables & Function Prototype Declarations)
------------------------------------------------------------------------------*/
/**
 * type of file index.
 *
*/
typedef enum
{
	VFE_FD_ADC = 0,
	VFE_FD_AVD,
	VFE_FD_HDMI,
	VFE_FD_MAX,
}VFE_FD_T;

typedef enum
{
	VFE_STATE_UNKNOW = 0,
	VFE_STATE_INIT,
	VFE_STATE_OPEN,
	VFE_STATE_CONNECT,
	VFE_STATE_DISCONNECT,
	VFE_STATE_CLOSE,
	VFE_STATE_UNINIT,
	VFE_STATE_NORMAL_RUN,
	VFE_STATE_OFFLINE_RUN,
	VFE_STATE_MAX,
}VFE_STATE_T;

/**
 * vfe_hdmi_vsi_video_format_e
 *
 * vsi info : video format
*/
/*  have to refer timing info, doesn't refer 3D tag or header info */
typedef enum
{
	VFE_HDMI_VSI_VIDEO_FORMAT_NO_ADDITIONAL_FORMAT, //2D
	VFE_HDMI_VSI_VIDEO_FORMAT_EXTENDED_RESOLUTION_FORMAT,
	VFE_HDMI_VSI_VIDEO_FORMAT_3D_FORMAT,
} vfe_hdmi_vsi_video_format_e;

/**
 * vfe_hdmi_3d_format_type_e
 *
 * 3D Video Full Timing Information.
*/
/*  have to refer timing info, doesn't refer 3D tag or header info */
typedef enum
{
	VFE_HDMI_3D_FORMAT_2D,					/**< for No 3D (OFF)..... INPUT_TYPE_2DTO3D */

	//interim format - half
	VFE_HDMI_3D_FORMAT_TOP_BOTTOM,			/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_TOPNBOTTOM*/
	VFE_HDMI_3D_FORMAT_SIDEBYSIDE_HALF,	/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_SIDEBYSIDE*/
	VFE_HDMI_3D_FORMAT_CHECKER_BOARD,		/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_CHECKERBOARD*/
	VFE_HDMI_3D_FORMAT_FRAME_SEQ,			/**< for T/B, S/S, Checker, Frame Seq...INPUT_TYPE_FRAMESEQ*/
	VFE_HDMI_3D_FORMAT_COLUMN_INTERLEAVE,	/**< for H.264*/
	VFE_HDMI_3D_FORMAT_LINE_INTERLEAVE_HALF,	/**< for H.264*/

	//Full format
	VFE_HDMI_3D_FORMAT_FRAME_PACKING,			/**< Full format*/
	VFE_HDMI_3D_FORMAT_FIELD_ALTERNATIVE,		/**< Full format*/
	VFE_HDMI_3D_FORMAT_LINE_ALTERNATIVE,		/**< Full format (row interleave)*/
	VFE_HDMI_3D_FORMAT_SIDEBYSIDE_FULL,		/**< Full format*/
	VFE_HDMI_3D_FORMAT_DUALSTREAM,		/**< Full format*/

	//
	VFE_HDMI_3D_FORMAT_2DTO3D,					/**< for2D TO  3D..... INPUT_TYPE_2DTO3D */
	VFE_HDMI_3D_FORMAT_MAX,
} vfe_hdmi_3d_format_type_e;

/**
 * vfe_hdmi_vsi_3d_structure_e
 *
 * 3D struct format, see HDMI Spec. v1.4a
*/
typedef enum
{
	VFE_HDMI_VSI_3D_STRUCTURE_FRAME_PACKING,		//*0
	VFE_HDMI_VSI_3D_STRUCTURE_FIELD_ALTERNATIVE,	//*1
	VFE_HDMI_VSI_3D_STRUCTURE_LINE_ALTERNATIVE,		//*2
	VFE_HDMI_VSI_3D_STRUCTURE_SIDEBYSIDE_FULL,		//*3
	VFE_HDMI_VSI_3D_STRUCTURE_L_DEPTH,				//*4
	VFE_HDMI_VSI_3D_STRUCTURE_L_DEPTH_GRAPHICS,		//*5
	VFE_HDMI_VSI_3D_STRUCTURE_TOP_BOTTOM,			//*6
	/*reserved 7*/
	VFE_HDMI_VSI_3D_STRUCTURE_SIDEBYSIDE_HALF	=	0x08,
	VFE_HDMI_VSI_3D_STRUCTURE_TOP_BOTTOM_DIRECTV =	0x09,

} vfe_hdmi_vsi_3d_structure_e;

/**
 * vfe_hdmi_3d_lr_type_e
 *
 * 3D L/R selection
*/
typedef enum
{
	VFE_HDMI_3D_LR,
	VFE_HDMI_3D_RL,
}vfe_hdmi_3d_lr_type_e;

/**
 * vfe_hdmi_vsi_3d_extdata_e
 *
 * 3D struct format, see HDMI Spec. v1.4a
*/
typedef enum
{

        	VFE_HDMI_VSI_3D_EXT_DATA_HOR_SUB_SAMPL_0,
	VFE_HDMI_VSI_3D_EXT_DATA_HOR_SUB_SAMPL_1,
	VFE_HDMI_VSI_3D_EXT_DATA_HOR_SUB_SAMPL_2,
	VFE_HDMI_VSI_3D_EXT_DATA_HOR_SUB_SAMPL_3,

	VFE_HDMI_VSI_3D_EXT_DATA_QUINCUNX_MATRIX_0 = 0x04,
	VFE_HDMI_VSI_3D_EXT_DATA_QUINCUNX_MATRIX_1,
	VFE_HDMI_VSI_3D_EXT_DATA_QUINCUNX_MATRIX_2,
	VFE_HDMI_VSI_3D_EXT_DATA_QUINCUNX_MATRIX_3,

} vfe_hdmi_vsi_3d_extdata_e;

/**
 * HDMI Video Format Identification Code for extended resolution 0~ff
 *
*/
typedef enum
{
	VFE_HDMI_RESERVED,
	VFE_HDMI_VSI_VIC_4K2K_30HZ,
	VFE_HDMI_VSI_VIC_4K2K_25HZ,
	VFE_HDMI_VSI_VIC_4K2K_24HZ,
	VFE_HDMI_VSI_VIC_4K2K_24HZ_SMPTE,
}vfe_hdmi_vsi_vic_e;

/**
 * vfe_hdmi_mode_e
 *
 * HDMI or DVI mode., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_DVI,	/**< DVI signal */
	VFE_HDMI_HDMI,	/**< HDMI signal */
} vfe_hdmi_mode_e;

/**
 * vfe_hdmi_packet_status_e
 *
 * HDMI packet status, see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_PACKET_STATUS_NOT_RECEIVED = 0,	/**< HDMI packet status */
	VFE_HDMI_PACKET_STATUS_STOPPED,				/**< HDMI packet status */
	VFE_HDMI_PACKET_STATUS_UPDATED,				/**< HDMI packet status */
	VFE_HDMI_PACKET_STATUS_MAX					/**< HDMI packet status */
} vfe_hdmi_packet_status_e;

/**
 * vfe_hdmi_avi_csc_e
 *
 * HDMI AVI CSC Info., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_CSC_RGB = 0,	/**< HDMI CSC info */
	VFE_HDMI_AVI_CSC_YCBCR422,	/**< HDMI CSC info */
	VFE_HDMI_AVI_CSC_YCBCR444,	/**< HDMI CSC info */
	VFE_HDMI_AVI_CSC_FUTURE		/**< HDMI CSC info */
} vfe_hdmi_avi_csc_e;

/**
 * vfe_hdmi_avi_active_info_e
 *
 * HDMI AVI ACTIVE Info., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_ACTIVE_INFO_INVALID = 0,		/**< HDMI info */
	VFE_HDMI_AVI_ACTIVE_INFO_VALID			/**< HDMI info */
} vfe_hdmi_avi_active_info_e;

/**
 * vfe_hdmi_avi_bar_info_e
 *
 * HDMI AVI BAR Info., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_BAR_INFO_INVALID,			/**< HDMI info */
	VFE_HDMI_AVI_BAR_INFO_VERTICALVALID,		/**< HDMI info */
	VFE_HDMI_AVI_BAR_INFO_HORIZVALID,			/**< HDMI info */
	VFE_HDMI_AVI_BAR_INFO_VERTHORIZVALID		/**< HDMI info */
} vfe_hdmi_avi_bar_info_e;

/**
 * vfe_hdmi_avi_scan_info_e
 *
 * HDMI AVI SCAN Info., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_SCAN_INFO_NODATA,			/**< HDMI info */
	VFE_HDMI_AVI_SCAN_INFO_OVERSCANNED,		/**< HDMI info */
	VFE_HDMI_AVI_SCAN_INFO_UNDERSCANNED,		/**< HDMI info */
	VFE_HDMI_AVI_SCAN_INFO_FUTURE		= 3
} vfe_hdmi_avi_scan_info_e;

/**
 * vfe_hdmi_avi_colorimetry_e
 *
 * HDMI Colorimetry., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_COLORIMETRY_NODATA =  0,		/**< HDMI info */
	VFE_HDMI_AVI_COLORIMETRY_SMPTE170,		/**< HDMI info */
	VFE_HDMI_AVI_COLORIMETRY_ITU709,			/**< HDMI info */
	VFE_HDMI_AVI_COLORIMETRY_FUTURE,			/**< HDMI info */
	VFE_HDMI_AVI_COLORIMETRY_EXTENDED = VFE_HDMI_AVI_COLORIMETRY_FUTURE
} vfe_hdmi_avi_colorimetry_e;

/**
 * vfe_hdmi_avi_picture_arc_e
 *
 * HDMI AVI Picture ARC., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_PICTURE_ARC_NODATA = 0,		/**< HDMI info */
	VFE_HDMI_AVI_PICTURE_ARC_4_3,				/**< HDMI info */
	VFE_HDMI_AVI_PICTURE_ARC_16_9,			/**< HDMI info */
	VFE_HDMI_AVI_PICTURE_ARC_FUTURE			/**< HDMI info */
} vfe_hdmi_avi_picture_arc_e;

/**
 * vfe_hdmi_avi_active_format_arc_e
 *
 * HDMI AVI ACTIVE FORMAT ARC., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_PICTURE    =  8,	/**< HDMI info */
	VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_4_3CENTER  =  9,	/**< HDMI info */
	VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_16_9CENTER = 10,	/**< HDMI info */
	VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_14_9CENTER = 11,	/**< HDMI info */
	VFE_HDMI_AVI_ACTIVE_FORMAT_ARC_OTHER      =  0	/**< HDMI info */
} vfe_hdmi_avi_active_format_arc_e;

/**
 * vfe_hdmi_avi_scaling_e
 *
 * HDMI AVI Scaling info., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_SCALING_NOSCALING = 0,		/**< HDMI info */
	VFE_HDMI_AVI_SCALING_HSCALING,			/**< HDMI info */
	VFE_HDMI_AVI_SCALING_VSCALING,			/**< HDMI info */
	VFE_HDMI_AVI_SCALING_HVSCALING			/**< HDMI info */
} vfe_hdmi_avi_scaling_e;

/**
 * vfe_hdmi_avi_it_content_e
 *
 * HDMI AVI IT Content., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_IT_CONTENT_NODATA    =  0,	/**< HDMI info */
	VFE_HDMI_AVI_IT_CONTENT_ITCONTENT  =  1	/**< HDMI info */
} vfe_hdmi_avi_it_content_e;

/**
 * vfe_hdmi_avi_ext_colorimetry_e
 *
 * HDMI Extended Colorimetry., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_EXT_COLORIMETRY_XVYCC601              = 0,	/**< HDMI info */
	VFE_HDMI_AVI_EXT_COLORIMETRY_XVYCC709              = 1 ,		/**< HDMI info */
	VFE_HDMI_AVI_EXT_COLORIMETRY_sYCC601               = 2 ,		/**< HDMI info */
	VFE_HDMI_AVI_EXT_COLORIMETRY_AdobeYCC601          = 3 ,	/**< HDMI info */
	VFE_HDMI_AVI_EXT_COLORIMETRY_AdobeRGB              = 4 ,		/**< HDMI info */
	VFE_HDMI_AVI_EXT_COLORIMETRY_ITURBT2020YCCBCCRC   = 5,		/**< HDMI info */
	VFE_HDMI_AVI_EXT_COLORIMETRY_ITURBT2020RGBorYCBCR = 6,		/**< HDMI info */
	VFE_HDMI_AVI_EXT_COLORIMETRY_RESERVED		/**< HDMI info */

} vfe_hdmi_avi_ext_colorimetry_e;

/**
 * vfe_hdmi_avi_rgb_quantization_range_e
 *
 * HDMI AVI RGB Quantization range., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_DEFAULT    =  0,		/**< HDMI info */
	VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_LIMITEDRANGE  =  1,	/**< HDMI info */
	VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_FULLRANGE = 2,		/**< HDMI info */
	VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_RESERVED = 3			/**< HDMI info */
} vfe_hdmi_avi_rgb_quantization_range_e;

/**
 * vfe_hdmi_avi_ycc_quantization_range_e
 *
 * HDMI AVI YCC Quantization range., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_LIMITEDRANGE  =  0,	/**< HDMI info */
	VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_FULLRANGE = 1,		/**< HDMI info */
	VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_RESERVED = 2			/**< HDMI info */
} vfe_hdmi_avi_ycc_quantization_range_e;

/**
 * vfe_hdmi_avi_content_type_e
 *
 * HDMI AVI Content Type., see HDMI Spec. v1.3a or above
*/
typedef enum
{
	VFE_HDMI_AVI_CONTENT_TYPE_GRAPHICS = 0,
	VFE_HDMI_AVI_CONTENT_TYPE_PHOTO,
	VFE_HDMI_AVI_CONTENT_TYPE_CINEMA,
	VFE_HDMI_AVI_CONTENT_TYPE_GAME,
	VFE_HDMI_AVI_CONTENT_TYPE_MAX
} vfe_hdmi_avi_content_type_e;

/**
 * vfe_hdmi_avi_additional_colorimetry_e
 *
 * HDMI AVI additional colorimetry., see HDMI CTA 861G or above
*/
typedef enum
{
	VFE_HDMI_AVI_ADDITIONAL_COLORIMETRY_DCI_P3_D65 = 0,
	VFE_HDMI_AVI_ADDITIONAL_COLORIMETRY_DCI_P3_THEATER,
	VFE_HDMI_AVI_ADDITIONAL_COLORIMETRY_RESERVED,
	VFE_HDMI_AVI_ADDITIONAL_COLORIMETRY_MAX
} vfe_hdmi_avi_additional_colorimetry_e;

/**
 * vfe_hdmi_access_edid_path_e
 *
 * select access edid path
*/
typedef enum
{
	VFE_HDMI_ACCESS_EDID_FROM_INTERNAL,
	VFE_HDMI_ACCESS_EDID_FROM_EXTERNAL,
} vfe_hdmi_access_edid_path_e;

/**
 * vfe_hdmi_mhl_msc_type_e
 *
 * mhl msc type selection
*/
typedef enum
{
	VFE_HDMI_MHL_MSC_MSG_MSGE = 0x02,
	VFE_HDMI_MHL_MSC_MSG_RCP  = 0x10,
	VFE_HDMI_MHL_MSC_MSG_RCPK = 0x11,
	VFE_HDMI_MHL_MSC_MSG_RCPE = 0x12,
	VFE_HDMI_MHL_MSC_MSG_RAP  = 0x20,
	VFE_HDMI_MHL_MSC_MSG_RAPK = 0x21,
	VFE_HDMI_MHL_MSC_MSG_UCP  = 0x30,
	VFE_HDMI_MHL_MSC_MSG_UCPK = 0x31,
	VFE_HDMI_MHL_MSC_MSG_UCPE = 0x32,
} vfe_hdmi_mhl_msc_type_e;


enum vfe_hdmi_color_space_e
{
	VFE_HDMI_COLOR_RGB 	= 0X00,
	VFE_HDMI_COLOR_YUV422,
	VFE_HDMI_COLOR_YUV444,
	VFE_HDMI_COLOR_YUV411,
	VFE_HDMI_COLOR_UNKNOW
};

enum vfe_hdmi_color_depth_e
{
	VFE_HDMI_COLOR_DEPTH_8B =0,
	VFE_HDMI_COLOR_DEPTH_10B,
	VFE_HDMI_COLOR_DEPTH_12B,
	VFE_HDMI_COLOR_DEPTH_16B,
};

enum vfe_hdmi_color_imetry_e
{
	VFE_HDMI_COLORIMETRY_NOSPECIFIED = 0,
	VFE_HDMI_COLORIMETRY_601,
	VFE_HDMI_COLORIMETRY_709,
	VFE_HDMI_COLORIMETRY_XYYCC601,
	VFE_HDMI_COLORIMETRY_XYYCC709,
	VFE_HDMI_COLORIMETRY_SYCC601,
	VFE_HDMI_COLORIMETRY_ADOBE_YCC601,
	VFE_HDMI_COLORIMETRY_ADOBE_RGB,
};

enum vfe_hdmi_audio_coding_type_e
{
	VFE_HDMI_AUDIO_HDMI_DVI         = 0,
	VFE_HDMI_AUDIO_HDMI_NO_AUDIO    = 1,
	VFE_HDMI_AUDIO_HDMI_PCM         = 2,
	VFE_HDMI_AUDIO_HDMI_AC3         = 3,
	VFE_HDMI_AUDIO_HDMI_DTS         = 4,
	VFE_HDMI_AUDIO_HDMI_AAC         = 5,
	VFE_HDMI_AUDIO_HDMI_DEFAULT     = 6,
	VFE_HDMI_AUDIO_HDMI_MPEG        = 10,
	VFE_HDMI_AUDIO_HDMI_DTS_HD_MA   = 11,
	VFE_HDMI_AUDIO_HDMI_DTS_EXPRESS = 12,
	VFE_HDMI_AUDIO_HDMI_DTS_CD      = 13,
	VFE_HDMI_AUDIO_HDMI_EAC3        = 14,
	VFE_HDMI_AUDIO_HDMI_EAC3_ATMOS  = 15,
	VFE_HDMI_AUDIO_HDMI_MAT         = 16,
	VFE_HDMI_AUDIO_HDMI_MAT_ATMOS   = 17,
	VFE_HDMI_AUDIO_HDMI_TRUEHD      = 18,
	VFE_HDMI_AUDIO_HDMI_TRUEHD_ATMOS = 19,
};

/**
 * vfe_hdcp_mode_e
 *
 * HDCP 1.4 / HDCP 2.2
*/
typedef enum
{
    VFE_NO_HDCP,
    VFE_HDCP_1P4,
    VFE_HDCP_2P2,
    VFE_HDCP_2P3,
    VFE_HDCP_MAX,
} vfe_hdcp_mode_e;

typedef enum
{
    VFE_HDCP_STATUS_AUTH_FAIL      = 0,
    VFE_HDCP_STATUS_IDLE           = 1,
    VFE_HDCP_STATUS_AUTH_PASS      = 2,
} vfe_hdcp_status;


typedef enum {
	KADP_VFE_HDMI_EMP_VSEMDS = 0,	/*vendor specific EM data set*/
	KADP_VFE_HDMI_EMP_HDRDM,		/*HDR Dynamic Metadata*/
	KADP_VFE_HDMI_EMP_VTEM,		/*Video Timing Extended Metadata*/
	KADP_VFE_HDMI_EMP_CVTEM,		/*Compressed Video Transport Extended Metadata*/
	KADP_VFE_HDMI_EMP_UNKNOW,
} vfe_hdmi_em_type_e;

/********************************************************************************************


	HDMI sturcture definitions


********************************************************************************************/
/**
 * vfe_hdmi_infoframe_header_t
 *
 * HDMI info-frame header, see HDMI Spec. v1.3a or above
*/
typedef struct
{
	unsigned char type;            /**< packet type */
	unsigned char version;         /**< packet version */
	unsigned char length;          /**< packet length */
} vfe_hdmi_infoframe_header_t;


/**
 * vfe_hdmi_avi_t
 * @param [IN] port, hdmi port selection
 * @param [OUT] others, avi infoframe
 *
 * HDMI AVI RGB INFO., see HDMI Spec. v1.3a or above
*/
typedef struct
{
	unsigned char port;

	vfe_hdmi_infoframe_header_t header;

	vfe_hdmi_mode_e mode;				/**< HDMI info */

	vfe_hdmi_avi_csc_e pixel_encoding;			/**< HDMI info */

	vfe_hdmi_avi_active_info_e active_info;		/**< HDMI info */	/* A0 */

	vfe_hdmi_avi_bar_info_e  bar_info;			/**< HDMI info */   /* B1B0 */

	vfe_hdmi_avi_scan_info_e  scan_info;			/**< HDMI info */   /* S1S0 */

	vfe_hdmi_avi_colorimetry_e colorimetry;		/**< HDMI info */	/* C1C0 */

	vfe_hdmi_avi_picture_arc_e picture_aspect_ratio;	/**< HDMI info */	/* M1M0 */

	vfe_hdmi_avi_active_format_arc_e active_format_aspect_ratio;/**< HDMI info */	/* R3R0 */

	vfe_hdmi_avi_scaling_e scaling;						/**< HDMI info */	/* SC1SC0 */

	unsigned char video_id_code;								/**< HDMI info */	/* VICn */

	unsigned char pixel_repeat;								/**< HDMI info */

	vfe_hdmi_avi_it_content_e it_content;			/**< HDMI info */	/*ITC */

	vfe_hdmi_avi_ext_colorimetry_e extended_colorimetry;	/**< HDMI info */	/* EC2EC1EC0 */

	vfe_hdmi_avi_rgb_quantization_range_e rgb_quantization_range;	/**< HDMI info */	/* Q1Q0 */

	vfe_hdmi_avi_ycc_quantization_range_e ycc_quantization_range;	/**< HDMI info */	/* YQ1YQ0 */

	vfe_hdmi_avi_content_type_e content_type;			/**< HDMI info */	/* Contents Type */

	/* bar info */
	unsigned short TopBarEndLineNumber;				/**< HDMI info */
	unsigned short BottomBarStartLineNumber;		/**< HDMI info */
	unsigned short LeftBarEndPixelNumber;			/**< HDMI info */
	unsigned short RightBarEndPixelNumber;			/**< HDMI info */

	vfe_hdmi_avi_additional_colorimetry_e additional_colorimetry;		/**< HDMI info */ /*ACE3ACE0*/


	unsigned char f14;		/**< HDMI info */  /*F143F140*/

	vfe_hdmi_packet_status_e packetStatus;	/**< HDMI info */
} vfe_hdmi_avi_t;


/**
 * vfe_hdmi_spd_t
 * @param [IN] port, hdmi port selection
 * @param [OUT] others, sdp infoframe
 *
 * HDMI SPD Info.
 * see HDMI Spec. v1.3a or above
*/
typedef struct
{
	unsigned char port;
	vfe_hdmi_infoframe_header_t header;
	unsigned char  vendor_name[VFE_HDMI_SPD_IF_VENDOR_LEN];
	unsigned char  product_desc[VFE_HDMI_SPD_IF_DESC_LEN];
	unsigned char  src_dev_info;
	vfe_hdmi_packet_status_e packetStatus;
} vfe_hdmi_spd_t;

/**
 * vfe_hdmi_vsi_t
 * @param [IN] port, hdmi port selection
 * @param [OUT] others, vsi infoframe
 *
 * HDMI VSI Info., see HDMI Spec. v1.3a or above
*/
typedef struct
{
	unsigned char port;
	vfe_hdmi_infoframe_header_t header;
	unsigned char	checksum;
	unsigned char	ieee_reg_id[VFE_HDMI_VENDOR_SPECIFIC_REGID_LEN];
	unsigned char	payload[VFE_HDMI_VENDOR_SPECIFIC_PAYLOAD_LEN];
	vfe_hdmi_packet_status_e packetStatus;				/**< HDMI VSI info */

//willychou add
	vfe_hdmi_vsi_video_format_e vidoe_fmt;
	vfe_hdmi_vsi_3d_structure_e struct_3d;
			  vfe_hdmi_vsi_3d_extdata_e extdata_3d;
			  vfe_hdmi_vsi_vic_e vic;
} vfe_hdmi_vsi_t;

/**
 * vfe_hdmi_all_packet_t
 * @param [IN] port, hdmi port selection
 * @param [OUT] others, avi spd vsi infoframe
 *
 * HDMI AVI SPD VSI Info., see HDMI Spec. v1.3a or above
*/
typedef struct
{
    vfe_hdmi_mode_e mode;
    vfe_hdmi_avi_t stAVI;
    vfe_hdmi_spd_t   stSPD;
    vfe_hdmi_vsi_t   stVSI;
    vfe_hdmi_packet_status_e packetStatus;
} vfe_hdmi_all_packet_t;

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
}__attribute__((packed)) vfe_hdmi_drm_t;


/**
 * vfe_hdmi_rect_t
 *
 * video timing rect. info
*/
typedef struct
{
	unsigned short	x;	/**< horizontal Start Position in pixel [0,].*/
	unsigned short	y;	/**< vertical   Start Position in pixel [0,].*/
	unsigned short	w;	/**< horizontal Size(Width)    in pixel [0,].*/
	unsigned short	h;	/**< vertical   Size(Height)   in pixel [0,].*/
} vfe_hdmi_rect_t;

/**
 * vfe_hdmi_timing_info_t
 * @param [IN] port, hdmi port selection
 * @param [OUT] others, timing info
 *
 * update hdmi timing info
*/
typedef struct
{
	unsigned char port;
	unsigned short h_freq;	/**< ... */
	unsigned short v_freq;	/**< ... */
	unsigned short h_total;	/**< ... */
	unsigned short v_total;	/**< ... */
	unsigned short h_porch;	/**< ... */
	unsigned short v_porch;	/**< ... */
	vfe_hdmi_rect_t	active;	/**< */
	unsigned short scan_type;	/**< 1:progressive; 0:interlace */
	unsigned char isDolbyHDR;

	vfe_hdmi_3d_format_type_e full_3d_timing;// 3D format information base on timing info
	vfe_hdmi_3d_lr_type_e	video_lr_order;
	vfe_hdmi_vsi_video_format_e vidoe_fmt;
	vfe_hdmi_vsi_3d_structure_e struct_3d;

	/* extra info that VSC needs */
	int x_offset; /* diff. of w start position betweet off-line and on-line measure */
	int y_offset; /* diff. of h start position betweet off-line and on-line measure */
	unsigned short hsync; /* equal to h_total */
	unsigned short vsync; /* equal to v_total */
	unsigned char mode_id;
	unsigned char mode_table_index;
	unsigned char polarity;
	enum vfe_hdmi_color_space_e color_space;
	enum vfe_hdmi_color_depth_e color_depth;
	enum vfe_hdmi_color_imetry_e color_imetry;
	unsigned char pixel_repeat;
	unsigned short IVSyncPulseCount;
	unsigned char isALLM;
	unsigned char dvi_hdmi;
} vfe_hdmi_timing_info_t;

/**
 * vfe_hdmi_connect_state_t
 * @param [IN] port, hdmi port selection
 * @param [OUT] others, connect state
 *
 * hdmi connect state
*/
typedef struct
{
	unsigned char port;
	unsigned char state; /**< 1:connect; 0:disconnect */
} vfe_hdmi_connect_state_t;

/**
 * vfe_hdmi_hdcp_data_t
 * @param [IN/OUT] *pksv,  ksv data when read, it is a output param;
 *                         otherwise it is a input param.
 * @param [IN/OUT] *pdevice_key, device key when read, it is a output param;
 *                               otherwise it is a input param.
 * hdmi hdcp key table
*/
typedef struct
{
	PBYTES  pksv;
	PBYTES  pdevice_key;
} vfe_hdmi_hdcp_data_t;

/**
 * vfe_hdmi_ksv_data_t
 * @param [IN] port, hdmi port selection
 * @param [IN/OUT] *pksv, ksv data when read, it is a output param;
 *                        otherwise it is a input param.
 *
 * hdmi ksv table
*/
typedef struct
{
	unsigned char port;
	PBYTES        pksv;
} vfe_hdmi_ksv_data_t;


typedef struct
{
	unsigned char port;
	bool bClockStatus;
}vfe_hdmi_clockstatus_t;

/**
 * vfe_hdmi_hdcp_data_apply_t
 * @param [IN/OUT] *pksv,  ksv data when read, it is a output param;
 *                         otherwise it is a input param.
 * @param [IN/OUT] *pdevice_key, device key when read, it is a output param;
 *                               otherwise it is a input param.
 * hdmi hdcp key table
*/
#if defined(CONFIG_ARM64) && defined(CONFIG_COMPAT)
typedef struct
{
	unsigned char  version;
	unsigned int pksv;
	unsigned char apply;
} vfe_hdmi_hdcp_data_apply_t;
#else
typedef struct
{
	unsigned char  version;
	unsigned char *pksv;
	unsigned char apply;
} vfe_hdmi_hdcp_data_apply_t;
#endif

typedef struct
{
	unsigned char port;
	unsigned char hdmi_ver; // [bit 0] : HDMI 1.4, [Bit 1] : HDMI 2.0
}vfe_hdmi_support_ver_t;

typedef struct
{
	unsigned char port;
	unsigned char hdcp_ver;
}vfe_hdmi_hdcp_ver_t;

typedef struct
{
	unsigned char port;
	unsigned char hpd_ctl;
}vfe_hdmi_hpd_t;

typedef struct
{
	vfe_hdcp_mode_e hdcp_ver;
	unsigned char key_load;
}vfe_hdcp_table_t;

/**
 * vfe_hdmi_emp_size_t
 * @param [IN] port, hdmi port selection
 * @param [IN] PacketType;
 * @param [OUT] Data_Set_Length, emp data size (byte)
*/
typedef struct
{
	unsigned char port;
	vfe_hdmi_em_type_e PacketType;
	unsigned short Data_Set_Length;
} vfe_hdmi_emp_size_t;

/**
 * vfe_hdmi_emp_size_t
 * @param [IN] port, hdmi port selection
 * @param [IN] PacketType;
 * @param [OUT] pEmPacket
*/
typedef struct
{
	unsigned char port;
	vfe_hdmi_em_type_e PacketType;
	PBYTES pEmPacket;
} vfe_hdmi_emp_t;

#if 0
/*===========================      VFE FUNCTION FOR DDTS DEMOAP  ===========================*/
    typedef enum {
	MAIN_FSM_HDMI_INIT = 0,
        MAIN_FSM_HDMI_DISCONNECT_VSC,
	MAIN_FSM_HDMI_DETECT,
	MAIN_FSM_HDMI_DISPLAY_ON,
} HDMI_MAIN_FSM_T;
#endif
/**
 * Video Timing Information.
 *
 * @see DDI Implementation Guide
*/

typedef enum
{
	SRC_NOTHING =0,		//Source don't do anything yet
	SRC_INIT_DONE,			//Source after initial
	SRC_OPEN_DONE,		//Source after open
	SRC_CONNECT_DONE,		//Source after connect

	SRC_UNINIT,				//Source uninitial
	SRC_CLOSE, 				// Source close
	SRC_DISCONNECT, 		//Source disconnect
} SOURCE_STATUS;


#ifndef VIDEO_RECT_T /*BLK*/
typedef struct
{
	unsigned short		x;	/**< horizontal Start Position in pixel [0,].*/
	unsigned short		y;	/**< vertical	Start Position in pixel [0,].*/
	unsigned short		w;	/**< horizontal Size(Width)    in pixel [0,].*/
	unsigned short		h;	/**< vertical	Size(Height)   in pixel [0,].*/

} __VIDEO_RECT_T;
#define VIDEO_RECT_T __VIDEO_RECT_T/*BLK*/
#endif /*BLK*/

typedef struct __VO_VOINFO{
	unsigned int maxcll;
	unsigned int maxfall;

	unsigned int color_transf;
	unsigned int coeffs_overscan;
	unsigned int dispX0;
	unsigned int dispX1;
	unsigned int dispX2;
	unsigned int dispY0;
	unsigned int dispY1;
	unsigned int dispY2;
	unsigned int whitePointX;
	unsigned int whitePointY;
	unsigned int maxL;
	unsigned int minL;
	unsigned int dolbyVision;
} VO_VOINFO;

typedef struct __VO_VOINFO_EXT_A0{
	unsigned int maxcll;
	unsigned int maxfall;

	unsigned int color_transf;
	unsigned int coeffs_overscan;
	unsigned int dispX0;
	unsigned int dispX1;
	unsigned int dispX2;
	unsigned int dispY0;
	unsigned int dispY1;
	unsigned int dispY2;
	unsigned int whitePointX;
	unsigned int whitePointY;
	unsigned int maxL;
	unsigned int minL;
	unsigned int dolbyVision;
	unsigned int transfer_characteristics;	///< information for xvYCC/HDR content
	unsigned int colour_primaries;	///< information for HDR content
	unsigned int depth;                                                             // Y/C pixel total length
        unsigned int src_fmt; /// input source format
} VO_VOINFO_EXT_A0;

typedef struct __KADP_VO_VOINFO{
	unsigned int maxcll;
	unsigned int maxfall;

	unsigned int color_transf;
	unsigned int coeffs_overscan;
	unsigned int dispX0;
	unsigned int dispX1;
	unsigned int dispX2;
	unsigned int dispY0;
	unsigned int dispY1;
	unsigned int dispY2;
	unsigned int whitePointX;
	unsigned int whitePointY;
	unsigned int maxL;
	unsigned int minL;
	unsigned int dolbyVision;
	} KADP_VO_VOINFO;


typedef struct __KADP_VO_VOINFO_EXT_A0{
	unsigned int maxcll;
	unsigned int maxfall;

	unsigned int color_transf;
	unsigned int coeffs_overscan;
	unsigned int dispX0;
	unsigned int dispX1;
	unsigned int dispX2;
	unsigned int dispY0;
	unsigned int dispY1;
	unsigned int dispY2;
	unsigned int whitePointX;
	unsigned int whitePointY;
	unsigned int maxL;
	unsigned int minL;
	unsigned int dolbyVision;
	unsigned int transfer_characteristics;	///< information for xvYCC/HDR content
	unsigned int colour_primaries;	///< information for HDR content
	unsigned int depth;                                                             // Y/C pixel total length
        unsigned int src_fmt; /// input source format
	} KADP_VO_VOINFO_EXT_A0;

typedef enum __KADP_VO_VIDEO_PLANE {
	KADP_VO_VIDEO_PLANE_V1 = 0,
	KADP_VO_VIDEO_PLANE_V2 = 1,
	KADP_VO_VIDEO_PLANE_V3 = 2,
	KADP_VO_VIDEO_PLANE_SUB1 = 3,
	KADP_VO_VIDEO_PLANE_NONE = 255,
}KADP_VO_VIDEO_PLANE;

typedef enum {
	KADP_SLR_AFD_RESERVE1= 0,
	KADP_SLR_AFD_RESERVE2,
	KADP_SLR_AFD_BOX_16X9,
	KADP_SLR_AFD_BOX_14X9,
	KADP_SLR_AFD_BOX_G16X9,
	KADP_SLR_AFD_RESERVE3,
	KADP_SLR_AFD_RESERVE4,
	KADP_SLR_AFD_RESERVE5,
	KADP_SLR_AFD_SAME_AS_FRAME,	//same as code frame
	KADP_SLR_AFD_4X3,
	KADP_SLR_AFD_16X9,
	KADP_SLR_AFD_14X9,
	KADP_SLR_AFD_RESERVE6,
	KADP_SLR_AFD_4X3_SP,			//4:3(with shoot&protect 14:9 center)
	KADP_SLR_AFD_16X9_SP,		//16:9(with shoot&protect 14:9 center)
	KADP_SLR_AFD_16X9_SP_4X3,	//16:9(with shoot&protect 4:3 center)
} KADP_SLR_AFD_TYPE;


typedef struct __KADP_DRB_VOINFO{
	KADP_VO_VIDEO_PLANE						plane;			///< vo plane
	unsigned int						port;			///< vsc port
	unsigned int						mode;			///< current mode
	unsigned int h_freq;
	unsigned int v_freq;
	unsigned int h_total;
	unsigned int v_total;
	unsigned int h_width;
	unsigned int v_length;
	unsigned int h_start;
	unsigned int v_start;
	unsigned int src_h_wid;
	unsigned int src_v_len;
	unsigned int	progressive;		///< progressive or interlace
	unsigned int	pixelAR_hor;		///< pixel aspect ratio - horizontal
	unsigned int	pixelAR_ver;		///< pixel aspect ratio - vertical
	unsigned int	i_ratio;		///< aspect ratio of input source, 1) 4:3, 0) 16:9 (use panel's definition)
	KADP_SLR_AFD_TYPE  afd;
	unsigned int	 voinfo_state;

	// keep "launcher" last for avoid compare in equal timing decesion (Scaler_DO_VO_timing_Equal())
	unsigned int						launcher;		///< 0) VO, 1) scaler request, keep last for avoid compare in equal timing decesion
} KADP_DRB_VOINFO;

typedef enum
{
	ADC_ADJ_PC_AUTO = 0,		// PC Auto
	ADC_ADJ_PC_H_POS,			// PC H Position
	ADC_ADJ_PC_V_POS,			// PC V Position
	ADC_ADJ_PC_HV_POS,
	ADC_ADJ_PC_CLOCK,			// PC Clock
	ADC_ADJ_PC_PHASE,			// PC Phase
} ADC_ADJ_PC_MODE_T;

typedef struct
{
	ADC_ADJ_PC_MODE_T mode;
	UINT16 value;
}ADC_ADJ_PC_T;

//======================================================
typedef enum
{
	KADP_VFE_HDMI_COLOR_DEPTH_8B =0,
	KADP_VFE_HDMI_COLOR_DEPTH_10B,
	KADP_VFE_HDMI_COLOR_DEPTH_12B,
	KADP_VFE_HDMI_COLOR_DEPTH_16B,
}KADP_HAL_VFE_HDMI_COLOR_DEPTH_T;

typedef enum
{
	KADP_VFE_HDMI_COLORIMETRY_NOSPECIFIED = 0,
	KADP_VFE_HDMI_COLORIMETRY_601,
	KADP_VFE_HDMI_COLORIMETRY_709,
	KADP_VFE_HDMI_COLORIMETRY_XYYCC601,
	KADP_VFE_HDMI_COLORIMETRY_XYYCC709,
	KADP_VFE_HDMI_COLORIMETRY_SYCC601,
	KADP_VFE_HDMI_COLORIMETRY_ADOBE_YCC601,
	KADP_VFE_HDMI_COLORIMETRY_ADOBE_RGB,
}KADP_HAL_VFE_HDMI_COLOR_IMETRY_T;

typedef struct
{
   	UINT32 format;	/**< update by LG */
	UINT16 hFreq;	/**< ... */
	UINT16 vFreq;	/**< ... */
	UINT16 hTotal;	/**< ... */
	UINT16 vTotal;	/**< ... */
	UINT16 hPorch;	/**< ... */
	UINT16 vPorch;	/**< ... */
	KADP_HAL_VFE_HDMI_RECT_T	active;	/**< ... */
	UINT16 scanType;	/**< ... */
	UINT8  mode;	    /**< update by LG */
	UINT8  isDolbyHDR;
	unsigned char mode_table_index;

	KADP_HAL_VFE_HDMI_3D_FORMAT_TYPE_T full_3d_timing;	// 3D format information base on timing info
	KADP_HAL_VFE_HDMI_3D_LR_TYPE_T	video_LR_order;
	KADP_HAL_VFE_HDMI_AVI_CSC_T color_space;
	KADP_HAL_VFE_HDMI_COLOR_DEPTH_T color_depth;
	KADP_HAL_VFE_HDMI_COLOR_IMETRY_T color_imetry;
    UINT8  pixel_repeat;
	UINT16 IVSyncPulseCount;
} KADP_HAL_VFE_HDMI_DISPLAY_TIMING_INFO_T;

typedef enum
{
	KADP_VFE_HDMI_3G,
	KADP_VFE_HDMI_6G,
} KADP_HAL_VFE_HDMI_CHANNEL_BANDWIDTH_T;

typedef enum
{
    KADP_VFE_HDMI_HDCP_VERSION_NO_HDCP  = 0x00,
    KADP_VFE_HDMI_HDCP_VERSION_1_4 = 0x14,
    KADP_VFE_HDMI_HDCP_VERSION_2_2 = 0x22,
    KADP_VFE_HDMI_HDCP_VERSION_2_3 = 0x23,
} KADP_HAL_VFE_HDMI_HDCP_VERSION_T;


typedef enum
{
    KADP_VFE_HDMI_HDCP_STATUS_AUTH_FAIL = -1,
    KADP_VFE_HDMI_HDCP_STATUS_IDLE      = 0,
    KADP_VFE_HDMI_HDCP_STATUS_AUTH_PASS = 1,
} KADP_HAL_VFE_HDMI_HDCP_STATUS_T;

typedef struct{
    KADP_HAL_VFE_HDMI_HDCP_VERSION_T hdcp_version;
    KADP_HAL_VFE_HDMI_HDCP_STATUS_T status;
}KADP_HAL_VFE_HDMI_HDCP_STATUS;


typedef enum
{
	KADP_AUDIO_HDMI_DVI			= 0,
	KADP_AUDIO_HDMI_NO_AUDIO		= 1,
	KADP_AUDIO_HDMI_PCM			= 2,
	KADP_AUDIO_HDMI_AC3			= 3,
	KADP_AUDIO_HDMI_DTS			= 4,
	KADP_AUDIO_HDMI_AAC			= 5,
	KADP_AUDIO_HDMI_DEFAULT		= 6,
	KADP_AUDIO_HDMI_MPEG			= 10,
	KADP_AUDIO_HDMI_DTS_HD_MA	= 11,
	KADP_AUDIO_HDMI_DTS_EXPRESS	= 12,
	KADP_AUDIO_HDMI_DTS_CD		= 13,
	KADP_AUDIO_HDMI_EAC3			= 14,
	KADP_AUDIO_HDMI_EAC3_ATMOS	= 15,
	KADP_AUDIO_HDMI_MAT		    = 16,
	KADP_AUDIO_HDMI_MAT_ATMOS    = 17,
	KADP_AUDIO_HDMI_TRUEHD       = 18,
	KADP_AUDIO_HDMI_TRUEHD_ATMOS = 19,
} KADP_HAL_AUDIO_HDMI_TYPE_T;

typedef enum
{
	KADP_AUDIO_SAMPLING_FREQ_NONE		=	     0,
	KADP_AUDIO_SAMPLING_FREQ_4_KHZ		=	  4000,
	KADP_AUDIO_SAMPLING_FREQ_8_KHZ		=	  8000,
	KADP_AUDIO_SAMPLING_FREQ_11_025KHZ	=	 11025,
	KADP_AUDIO_SAMPLING_FREQ_12_KHZ		=	 12000,
	KADP_AUDIO_SAMPLING_FREQ_16_KHZ		=	 16000,
	KADP_AUDIO_SAMPLING_FREQ_22_05KHZ	=	 22050,
	KADP_AUDIO_SAMPLING_FREQ_24_KHZ		=	 24000,
	KADP_AUDIO_SAMPLING_FREQ_32_KHZ		=	 32000,
	KADP_AUDIO_SAMPLING_FREQ_44_1KHZ		=	 44100,
	KADP_AUDIO_SAMPLING_FREQ_48_KHZ		=	 48000,
	KADP_AUDIO_SAMPLING_FREQ_64_KHZ		=	 64000,
	KADP_AUDIO_SAMPLING_FREQ_88_2KHZ		=	 88200,
	KADP_AUDIO_SAMPLING_FREQ_96_KHZ		=	 96000,
	KADP_AUDIO_SAMPLING_FREQ_128_KHZ		=	128000,
	KADP_AUDIO_SAMPLING_FREQ_176_4KHZ	=	176400,
	KADP_AUDIO_SAMPLING_FREQ_192_KHZ		=	192000,
	KADP_AUDIO_SAMPLING_FREQ_768_KHZ		=	768000,
	KADP_AUDIO_SAMPLING_FREQ_DEFAULT		=	999000,
} KADP_HAL_AUDIO_SAMPLING_FREQ_T;


typedef enum
{
    KADP_VFE_HDMI_HDR_TYPE_SDR = 0,
    KADP_VFE_HDMI_HDR_TYPE_HDR10,
    KADP_VFE_HDMI_HDR_TYPE_HLG,
    KADP_VFE_HDMI_HDR_TYPE_DOLBYVISION,
    KADP_VFE_HDMI_HDR_TYPE_DOLBYVISION_LL,
} KADP_HAL_VFE_HDMI_HDR_TYPE_T;



typedef struct
{
	UINT8 port;
	BOOLEAN hpd;
	BOOLEAN hdmi_5v;
	BOOLEAN RxSense;
	UINT16 video_width;
	UINT16 video_height;
	UINT32 frame_rate_x100_hz;
	KADP_HAL_VFE_HDMI_AVI_CSC_T color_space;
	KADP_HAL_VFE_HDMI_COLOR_DEPTH_T color_depth;
	KADP_HAL_VFE_HDMI_AVI_EXT_COLORIMETRY_T colorimetry;//diffs with lg
	KADP_HAL_AUDIO_HDMI_TYPE_T audio_format;
	UINT32 sampling_freq;
	UINT8 audio_channel_number;
	KADP_HAL_VFE_HDMI_MODE_T eHDMIMode;
	KADP_HAL_VFE_HDMI_HDR_TYPE_T hdr_type;
} KADP_HAL_VFE_HDMI_GENERAL_INFO_T;

typedef struct
{
	BOOLEAN lockStaus;
	UINT32 tmdsClockKHz;
	UINT32 tmdsBandwidthMbps;
	UINT32 phyCtleEQMinRage[MAX_NUMBER_OF_CHANNEL];
	UINT32 phyCtleEQMaxRage[MAX_NUMBER_OF_CHANNEL];
	UINT32 phyCtleEQResult[MAX_NUMBER_OF_CHANNEL];
	UINT32 phyError[MAX_NUMBER_OF_CHANNEL];
} KADP_HAL_VFE_HDMI_PHY_INFO_T;


typedef struct
{
	UINT16 video_width_real;
	UINT16 video_htotal_real;
	UINT16 video_height_real;
	UINT16 video_vtotal_real;
	UINT32 video_pixel_clock;
 } KADP_HAL_VFE_HDMI_LINK_INFO_T;

typedef struct
{
	UINT32 pcm_N;
	UINT32 pcm_CTS;
	UINT8 LayoutBitValue;
	UINT8 ChannelStatusBits;
} KADP_HAL_VFE_HDMI_AUDIO_INFO_T;

typedef struct
{
	BOOLEAN encEn_14;
	UINT8 status;
	UINT8 An[8];
	UINT8 Aksv[5];
	UINT8 Bksv[5];
	UINT8 Ri[2];
	UINT8 Bcaps;
	UINT8 Bstatus[2];
} KADP_HAL_VFE_HDMI_HDCP14_INFO_T;

typedef struct
{
	BOOLEAN encEn_22;
	UINT8 status;
} KADP_HAL_VFE_HDMI_HDCP22_INFO_T;

typedef struct
{
	BOOLEAN scramble_enable;
	UINT8 bit_ratio;
	BOOLEAN scramble_status;
	BOOLEAN clock_detect;
	BOOLEAN ch_locked[MAX_NUMBER_OF_CHANNEL];
	BOOLEAN FLT_Ready;
	UINT16 ch_error_count[MAX_NUMBER_OF_CHANNEL];
	UINT32 RS_Counter_Bits;
	BOOLEAN DSCFailed;
	UINT8 LTP_req[MAX_NUMBER_OF_CHANNEL];
	UINT8 FRLMode;
	UINT8 FFELevel;
	BOOLEAN FRL_Start;
	BOOLEAN FLT_Update;
} KADP_HAL_VFE_HDMI_SCDC_INFO_T;

typedef struct
{
	KADP_HAL_VFE_HDMI_GENERAL_INFO_T general;
	KADP_HAL_VFE_HDMI_PHY_INFO_T phy;
	KADP_HAL_VFE_HDMI_LINK_INFO_T link;
	KADP_HAL_VFE_HDMI_AUDIO_INFO_T audio;
	KADP_HAL_VFE_HDMI_HDCP14_INFO_T hdcp14;
	KADP_HAL_VFE_HDMI_HDCP22_INFO_T hdcp22;
	KADP_HAL_VFE_HDMI_SCDC_INFO_T scdc;
} KADP_HAL_VFE_HDMI_DIAGNOSTICS_INFO_T;

typedef enum
{
	KADP_HDMI_ERROR_GCP_ERROR,		// 0x00000001
	KADP_HDMI_ERROR_HDCP22_REAUTH,	// 0x00000002
	KADP_HDMI_ERROR_TMDS_ERROR,		// 0x00000004
	KADP_HDMI_ERROR_PHY_LOW_RANGE,	// 0x00000008
	KADP_HDMI_ERROR_PHY_ABNORMAL,	// 0x00000010
	KADP_HDMI_ERROR_CED_ERROR,		// 0x00000020
	KADP_HDMI_ERROR_AUDIO_BUFFER,	// 0x00000040
	KADP_HDMI_ERROR_UNSTABLE_SYNC,	// 0x00000080
	KADP_HDMI_ERROR_MAXNUM,
	KADP_HDMI_ERROR_FAILED = 0xFF,
} KADP_HDMI_ERROR_TYPE_T;


typedef struct
{
	UINT32 errorVal;
	UINT32 param_A;
	UINT32 param_B;
} KADP_HDMI_ERROR_T;

/*==========VBI flow==============*/
typedef struct {
    unsigned int    bytes;
    unsigned char    *sliced_data_byte;
}VBI_SLICED_DATA_T;

typedef struct{
unsigned long message_acc;
unsigned int oddMsg;
unsigned int evenMsg;
unsigned int mainSrcID;
unsigned int subSrcID;
}ACC_MessageID;

#if defined(CONFIG_ARM64) && defined(CONFIG_COMPAT)
typedef struct
{
	unsigned char vbi_type;
	unsigned int vbi_status;
	unsigned int vbi_buffer;
	unsigned int  vbi_size;
}VBI_STATUS_INFO_T;
#else
typedef struct
{
	unsigned char vbi_type;
	unsigned char *vbi_status;
	unsigned char *vbi_buffer;
	unsigned int  *vbi_size;
}VBI_STATUS_INFO_T;
#endif

//==================================================================
typedef struct
{
	KADP_VFE_AVD_CC_TTX_STATUS_T vbi_support_type;
	unsigned int cc_phyaddr;
	unsigned int ttx_phyaddr;
	unsigned int vps_phyaddr;
}VBI_INIT_MOUDLE_T;

typedef struct
{
	KADP_VFE_AVD_VBI_TYPE_T vbi_type;
	unsigned char enable;
}VBI_REGISTER_CALLBACK_T;

typedef struct _KADP_MW_SRC_E_BOOL
{
	unsigned char rtk_mw_src_e;
	unsigned char hal_bool;
}KADP_MW_SRC_E_BOOL;

/*-----------------------------------------------------------------------------
	System call
------------------------------------------------------------------------------*/
#define VFE_DEVICE_NUM							1
#define VFE_DEVICE_NAME						"vfedev"
#define VFE_IOC_MAGIC							'w'

//index range
//ADC: 0 -49
//AVD: 50 - 109
//HDMI 110 - 189
//customer 200-255


// 0~49, ADC releated
#define VFE_IOC_ADC_START_INDEX 0
enum vfe_ioc_adc_idx
{
	VFE_IOC_ADC_IDX_0 = VFE_IOC_ADC_START_INDEX,//0
	VFE_IOC_ADC_IDX_1,//1
	VFE_IOC_ADC_IDX_2,//2
	VFE_IOC_ADC_IDX_3,//3
	VFE_IOC_ADC_IDX_4,//4
	VFE_IOC_ADC_IDX_5,//5
	VFE_IOC_ADC_IDX_6,//6
	VFE_IOC_ADC_IDX_7,//7
	VFE_IOC_ADC_IDX_8,//8
	VFE_IOC_ADC_IDX_9,//9
	VFE_IOC_ADC_IDX_10,//10
	VFE_IOC_ADC_IDX_11,//11
	VFE_IOC_ADC_IDX_12,//12
	VFE_IOC_ADC_IDX_13,//13
	VFE_IOC_ADC_IDX_14,//14
	VFE_IOC_ADC_IDX_15,//15
	VFE_IOC_ADC_IDX_16,//16
	VFE_IOC_ADC_IDX_17,//17
	VFE_IOC_ADC_IDX_18,//18
	VFE_IOC_ADC_IDX_19,//19
	VFE_IOC_ADC_IDX_20,//20
	VFE_IOC_ADC_IDX_21,//21
	VFE_IOC_ADC_IDX_22,//22
	VFE_IOC_ADC_IDX_23,//23
	VFE_IOC_ADC_IDX_24,//24
	VFE_IOC_ADC_IDX_25,//25
	VFE_IOC_ADC_IDX_26,//26
	VFE_IOC_ADC_IDX_27,//27
	VFE_IOC_ADC_IDX_28,//28
	VFE_IOC_ADC_IDX_29,//29
	VFE_IOC_ADC_IDX_30,//30
	VFE_IOC_ADC_IDX_31,//31
	VFE_IOC_ADC_IDX_32,//32
	VFE_IOC_ADC_IDX_33,//33
	VFE_IOC_ADC_IDX_34,//34
	VFE_IOC_ADC_IDX_35,//35
	VFE_IOC_ADC_IDX_36,//36
	VFE_IOC_ADC_IDX_37,//37
	VFE_IOC_ADC_IDX_38,//38
	VFE_IOC_ADC_IDX_39,//39
	VFE_IOC_ADC_IDX_40,//40
	VFE_IOC_ADC_IDX_MAX = 49,
};

#define VFE_IOC_ADC_INIT						_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_0)
#define VFE_IOC_ADC_UNINIT						_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_1)
#define VFE_IOC_ADC_OPEN						_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_2)
#define VFE_IOC_ADC_CLOSE						_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_3)
#define VFE_IOC_ADC_YPP_CONNECT					_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_4)
#define VFE_IOC_ADC_VGA_CONNECT					_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_5)
#define VFE_IOC_ADC_SCARTRGB_CONNECT			_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_6)
#define VFE_IOC_ADC_YPP_DISCONNECT				_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_7)
#define VFE_IOC_ADC_VGA_DISCONNECT				_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_8)
#define VFE_IOC_ADC_SCARTRGB_DISCONNECT			_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_9)
#define VFE_IOC_ADC_GET_TIMINGINFO				_IOR(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_10, KADP_ADC_TIMING_INFO_T)
#define VFE_IOC_ADC_CALIBRATION_EXTERNAL		_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_11)
#define VFE_IOC_ADC_CALIBRATION_INTERNAL		_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_12)
#define VFE_IOC_ADC_CALIBRATION_OTP				_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_13)
#define VFE_IOC_ADC_GET_ADCVALUE				_IOR(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_14, KADP_ADC_CAL_DATA_T)
#define VFE_IOC_ADC_SET_ADCVALUE				_IOW(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_15, KADP_ADC_CAL_DATA_T)
#define VFE_IOC_ADC_GET_OTPDATA					_IOR(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_16, KADP_ADC_CAL_DATA_T)
#define VFE_IOC_ADC_RESET_CALIBRATION			_IOR(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_17, KADP_ADC_CAL_DATA_T)
#define VFE_IOC_ADC_FAST_MODE					_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_18)
#define VFE_IOC_ADC_ADJ_PC						_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_19)
#define VFE_IOC_ADC_ADJ_PC_AUTO					_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_20)
#define VFE_IOC_ADC_PC_GET_VALUE				_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_21)
#define VFE_IOC_ADC_GET_TARTGET_DIFF			_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_22)
#define VFE_IOC_ADC_GET_TIMINGINFO_EX			_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_23) //IOR KADP_ADC_TIMING_INFO_EX_T
#define VFE_IOC_ADC_PC_READ_EDID				_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_24)
#define VFE_IOC_ADC_PC_WRITE_EDID				_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_25)
#define VFE_IOC_ADC_PC_ENABLE_DDC				_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_26)
#define VFE_IOC_ADC_GET_CGMS					_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_27)
#define VFE_IOC_ADC_GET_480IWSS					_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_28)
#define VFE_IOC_ADC_GET_576IWSS					_IO(VFE_IOC_MAGIC, VFE_IOC_ADC_IDX_29)

// 50~109, AVD releated
#define VFE_IOC_AVD_START_INDEX (VFE_IOC_ADC_IDX_MAX+1)
enum vfe_ioc_avd_idx
{
	VFE_IOC_AVD_IDX_0 = VFE_IOC_AVD_START_INDEX,//50
	VFE_IOC_AVD_IDX_1,//51
	VFE_IOC_AVD_IDX_2,//52
	VFE_IOC_AVD_IDX_3,//53
	VFE_IOC_AVD_IDX_4,//54
	VFE_IOC_AVD_IDX_5,//55
	VFE_IOC_AVD_IDX_6,//56
	VFE_IOC_AVD_IDX_7,//57
	VFE_IOC_AVD_IDX_8,//58
	VFE_IOC_AVD_IDX_9,//59
	VFE_IOC_AVD_IDX_10,//60
	VFE_IOC_AVD_IDX_11,//61
	VFE_IOC_AVD_IDX_12,//62
	VFE_IOC_AVD_IDX_13,//63
	VFE_IOC_AVD_IDX_14,//64
	VFE_IOC_AVD_IDX_15,//65
	VFE_IOC_AVD_IDX_16,//66
	VFE_IOC_AVD_IDX_17,//67
	VFE_IOC_AVD_IDX_18,//68
	VFE_IOC_AVD_IDX_19,//69
	VFE_IOC_AVD_IDX_20,//70
	VFE_IOC_AVD_IDX_21,//71
	VFE_IOC_AVD_IDX_22,//72
	VFE_IOC_AVD_IDX_23,//73
	VFE_IOC_AVD_IDX_24,//74
	VFE_IOC_AVD_IDX_25,//75
	VFE_IOC_AVD_IDX_26,//76
	VFE_IOC_AVD_IDX_27,//77
	VFE_IOC_AVD_IDX_28,//78
	VFE_IOC_AVD_IDX_29,//79
	VFE_IOC_AVD_IDX_30,//80
	VFE_IOC_AVD_IDX_31,//81
	VFE_IOC_AVD_IDX_32,//82
	VFE_IOC_AVD_IDX_33,//83
	VFE_IOC_AVD_IDX_34,//84
	VFE_IOC_AVD_IDX_35,//85
	VFE_IOC_AVD_IDX_36,//86
	VFE_IOC_AVD_IDX_37,//87
	VFE_IOC_AVD_IDX_38,//88
	VFE_IOC_AVD_IDX_39,//89
	VFE_IOC_AVD_IDX_MAX = 109,
};

#define VFE_IOC_AVD_INIT							_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_0, KADP_VFE_AVD_CC_TTX_STATUS_T)
#define VFE_IOC_AVD_UNINIT							_IO(VFE_IOC_MAGIC,  VFE_IOC_AVD_IDX_1)
#define VFE_IOC_AVD_OPEN							_IO(VFE_IOC_MAGIC,  VFE_IOC_AVD_IDX_2)
#define VFE_IOC_AVD_CLOSE							_IO(VFE_IOC_MAGIC,  VFE_IOC_AVD_IDX_3)
#define VFE_IOC_AVD_ATV_CONNECT						_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_4, int)
#define VFE_IOC_AVD_AV_CONNECT						_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_5, int)
#define VFE_IOC_AVD_SCART_CONNECT					_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_6, int)
#define VFE_IOC_AVD_ATV_DISCONNECT					_IO(VFE_IOC_MAGIC,  VFE_IOC_AVD_IDX_7)
#define VFE_IOC_AVD_AV_DISCONNECT					_IO(VFE_IOC_MAGIC,  VFE_IOC_AVD_IDX_8)
#define VFE_IOC_AVD_SCART_DISCONNECT				_IO(VFE_IOC_MAGIC,  VFE_IOC_AVD_IDX_9)
#define VFE_IOC_AVD_SET_SYNC_DETECTION_FOR_TUNING 	_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_10, unsigned char)
#define VFE_IOC_AVD_DOES_SYNC_EXIST					_IO(VFE_IOC_MAGIC,  VFE_IOC_AVD_IDX_11)
#define VFE_IOC_AVD_SET_COLOR_SYSTEM				_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_12, KADP_VFE_AVD_COLOR_SYSTEM_T)
#define VFE_IOC_AVD_GET_COLOR_SYSTEM				_IOR(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_13, KADP_VFE_AVD_AVDECODER_VIDEO_MODE_T)
#define VFE_IOC_AVD_GET_TIMINGINFO					_IOR(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_14, KADP_VFE_AVD_TIMING_INFO_T)
#define VFE_IOC_AVD_GET_SCART_ID					_IOR(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_15, KADP_VFE_AVD_SCART_AR_T)
#define VFE_IOC_AVD_GET_SCART_FAST_BLANKING_STATUS	_IOR(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_16, KADP_VFE_AVD_SCART_FB_STATUS_T)
#define VFE_IOC_AVD_SET_DEMOD_TYPE					_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_17, KADP_VFE_AVD_DEMOD_TYPE)
#define VFE_IOC_AVD_GET_PHYSICALSIGNAL_COPYPROETCT	_IOR(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_18, KADP_VFE_AVD_PHYSICAL_COPY_PROTECT)
#define VFE_IOC_AVD_INIT_VBI_MODULE					_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_19, VBI_INIT_MOUDLE_T)
#define VFE_IOC_AVD_ENABLE_VBI						_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_20, KADP_VFE_AVD_CC_TTX_STATUS_T)
#define VFE_IOC_AVD_DISABLE_VBI						_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_21, KADP_VFE_AVD_CC_TTX_STATUS_T)
#define VFE_IOC_AVD_GET_480I_WSS_20BITS				_IOR(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_22, unsigned int)
#define VFE_IOC_AVD_GET_576I_WSS_14BITS				_IOR(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_23, unsigned short)
#define VFE_IOC_AVD_VBI_CALLBACK					_IOWR(VFE_IOC_MAGIC,VFE_IOC_AVD_IDX_24, VBI_REGISTER_CALLBACK_T)
#define VFE_IOC_AVD_IFD_SET_AUDIO_BP				_IOWR(VFE_IOC_MAGIC,VFE_IOC_AVD_IDX_25, unsigned char)
#define VFE_IOC_AVD_DRV_SET_AUDIO_BP				_IOWR(VFE_IOC_MAGIC,VFE_IOC_AVD_IDX_26, unsigned int)
#define VFE_IOC_AVD_CHANGE_DEMOD_SYSTEM				_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_27, unsigned char)
#define VFE_IOC_AVD_Auto_Tune_Mode					_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_28, unsigned char)//sync from hal
#define VFE_IOC_AVD_ATV_SET_CH_CHANGE				_IO(VFE_IOC_MAGIC,  VFE_IOC_AVD_IDX_29)//For K4L
#define VFE_IOC_GET_AV_OFFLINE_SIGTATUS				_IOR(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_30, unsigned char)
#define VFE_IOC_AVD_27M_MODE						_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_31, unsigned char)
#define VFE_IOC_AVD_GET_TIMINGINFO_EX				_IO(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_32) //IOR KADP_VFE_AVD_TIMING_INFO_EX_T
#define VFE_IOC_AVD_DETECT_TIMING_IN_AUTOSCAN		_IO(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_33)
#define VFE_IOC_AVD_SOFT_RESET          		    			_IO(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_34)
#define VFE_IOC_AVD_ADC_AND_FDF_SETTING			_IOW(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_35, KADP_VFE_AVD_AV_COEF_T)
#define VFE_IOC_AVD_CHECK_ATV_STABLE				_IO(VFE_IOC_MAGIC, VFE_IOC_AVD_IDX_36) //IOR unsigned char

/* hdmi rx ioctrl cmd definitions start */
// 110~189, HDMI releated
#define VFE_IOC_HDMI_CMD_BASE_NUM  (VFE_IOC_AVD_IDX_MAX+1)
enum vfe_ioc_hdmi_cmd_idx_e
{
	VFE_IOC_HDMI_IDX_0 = VFE_IOC_HDMI_CMD_BASE_NUM,//110
	VFE_IOC_HDMI_IDX_1,//111
	VFE_IOC_HDMI_IDX_2,//112
	VFE_IOC_HDMI_IDX_3,//113
	VFE_IOC_HDMI_IDX_4,//114
	VFE_IOC_HDMI_IDX_5,//115
	VFE_IOC_HDMI_IDX_6,//116
	VFE_IOC_HDMI_IDX_7,//117
	VFE_IOC_HDMI_IDX_8,//118
	VFE_IOC_HDMI_IDX_9,//119
	VFE_IOC_HDMI_IDX_10,//120
	VFE_IOC_HDMI_IDX_11,//121
	VFE_IOC_HDMI_IDX_12,//122
	VFE_IOC_HDMI_IDX_13,//123
	VFE_IOC_HDMI_IDX_14,//124
	VFE_IOC_HDMI_IDX_15,//125
	VFE_IOC_HDMI_IDX_16,//126
	VFE_IOC_HDMI_IDX_17,//127
	VFE_IOC_HDMI_IDX_18,//128
	VFE_IOC_HDMI_IDX_19,//129
	VFE_IOC_HDMI_IDX_20,//130
	VFE_IOC_HDMI_IDX_21,//131
	VFE_IOC_HDMI_IDX_22,//132
	VFE_IOC_HDMI_IDX_23,//133
	VFE_IOC_HDMI_IDX_24,//134
	VFE_IOC_HDMI_IDX_25,//135
	VFE_IOC_HDMI_IDX_26,//136
	VFE_IOC_HDMI_IDX_27,//137
	VFE_IOC_HDMI_IDX_28,//138
	VFE_IOC_HDMI_IDX_29,//139
	VFE_IOC_HDMI_IDX_30,//140
	VFE_IOC_HDMI_IDX_31,//141
	VFE_IOC_HDMI_IDX_32,//142
	VFE_IOC_HDMI_IDX_33,//143
	VFE_IOC_HDMI_IDX_34,//144
	VFE_IOC_HDMI_IDX_35,//145
	VFE_IOC_HDMI_IDX_36,//146
	VFE_IOC_HDMI_IDX_37,//147
	VFE_IOC_HDMI_IDX_38,//148
	VFE_IOC_HDMI_IDX_39,//149
	VFE_IOC_HDMI_IDX_40,//150
	VFE_IOC_HDMI_IDX_41,//151
	VFE_IOC_HDMI_IDX_42,//152
	VFE_IOC_HDMI_IDX_43,//153
	VFE_IOC_HDMI_IDX_44,//154
	VFE_IOC_HDMI_IDX_45,//155
	VFE_IOC_HDMI_IDX_46,//156
	VFE_IOC_HDMI_IDX_47,//157
	VFE_IOC_HDMI_IDX_48,//158
	VFE_IOC_HDMI_IDX_49,//159
	VFE_IOC_HDMI_IDX_50,//160
	VFE_IOC_HDMI_IDX_51,//161
	VFE_IOC_HDMI_IDX_52,//162
	VFE_IOC_HDMI_IDX_53,//163
	VFE_IOC_HDMI_IDX_54,//164
	VFE_IOC_HDMI_IDX_55,//165
	VFE_IOC_HDMI_IDX_56,//166
	VFE_IOC_HDMI_IDX_57,//167
	VFE_IOC_HDMI_IDX_58,//168
	VFE_IOC_HDMI_IDX_59,//169
	VFE_IOC_HDMI_IDX_60,//170
	VFE_IOC_HDMI_IDX_61,//171
	VFE_IOC_HDMI_IDX_62,//172
	VFE_IOC_HDMI_IDX_63,//173
	VFE_IOC_HDMI_IDX_64,//174
	VFE_IOC_HDMI_IDX_65,//175
	VFE_IOC_HDMI_IDX_66,//176
	VFE_IOC_HDMI_IDX_67,//177
	VFE_IOC_HDMI_IDX_68,//178
	VFE_IOC_HDMI_IDX_69,//179
	VFE_IOC_HDMI_IDX_70,//180
	VFE_IOC_HDMI_IDX_71,//181
	VFE_IOC_HDMI_IDX_72,//182
	VFE_IOC_HDMI_IDX_73,//183
	VFE_IOC_HDMI_IDX_74,//184
	VFE_IOC_HDMI_IDX_75,//185
	VFE_IOC_HDMI_IDX_76,//186
	VFE_IOC_HDMI_IDX_77,//187
	VFE_IOC_HDMI_IDX_78,//188
	VFE_IOC_HDMI_CMD_IDX_MAXUM=189,
};
#define VFE_IOC_HDMI_CMD_ITEM_NUM                 (VFE_IOC_HDMI_CMD_IDX_MAX_NUM - VFE_IOC_HDMI_CMD_BASE_NUM)

#define VFE_IOC_HDMI_INIT								_IO(VFE_IOC_MAGIC,  VFE_IOC_HDMI_IDX_0)
#define VFE_IOC_HDMI_UNINIT								_IO(VFE_IOC_MAGIC,  VFE_IOC_HDMI_IDX_1)
#define VFE_IOC_HDMI_OPEN								_IO(VFE_IOC_MAGIC,  VFE_IOC_HDMI_IDX_2)
#define VFE_IOC_HDMI_CLOSE								_IO(VFE_IOC_MAGIC,  VFE_IOC_HDMI_IDX_3)
#define VFE_IOC_HDMI_CONNECT							_IOW(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_4, unsigned char)
#define VFE_IOC_HDMI_DISCONNECT							_IOW(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_5, unsigned char)
#define VFE_IOC_HDMI_GET_PORT_TIMINGINFO				_IOWR(VFE_IOC_MAGIC,VFE_IOC_HDMI_IDX_6, vfe_hdmi_timing_info_t)
#define VFE_IOC_HDMI_GET_PORT_VSIINFO					_IOWR(VFE_IOC_MAGIC,VFE_IOC_HDMI_IDX_7, vfe_hdmi_vsi_t)
#define VFE_IOC_HDMI_GET_PORT_SPDINFO					_IOWR(VFE_IOC_MAGIC,VFE_IOC_HDMI_IDX_8, vfe_hdmi_spd_t)
#define VFE_IOC_HDMI_GET_PORT_AVIINFO					_IOWR(VFE_IOC_MAGIC,VFE_IOC_HDMI_IDX_9, vfe_hdmi_avi_t)
#define VFE_IOC_HDMI_GET_PORT_ALLPACKET                 _IOWR(VFE_IOC_MAGIC,VFE_IOC_HDMI_IDX_10, vfe_hdmi_all_packet_t)
#define VFE_IOC_HDMI_GET_CONNECTION_STATE				_IOWR(VFE_IOC_MAGIC,VFE_IOC_HDMI_IDX_12, vfe_hdmi_connect_state_t)
#define VFE_IOC_HDMI_ENABLE_HPD							_IO(VFE_IOC_MAGIC,  VFE_IOC_HDMI_IDX_13)
#define VFE_IOC_HDMI_DISABLE_HPD						_IO(VFE_IOC_MAGIC,  VFE_IOC_HDMI_IDX_14)
#define VFE_IOC_HDMI_RESTART_HPD						_IOWR(VFE_IOC_MAGIC,  VFE_IOC_HDMI_IDX_15, unsigned char)
#define VFE_IOC_HDMI_DISABLE_INTERNAL_EDID_ACCESS		_IOW(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_16, unsigned char)
#define VFE_IOC_HDMI_WRITE_HDCP							_IOW(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_19, vfe_hdmi_hdcp_data_t)
#define VFE_IOC_HDMI_READ_HDCP							_IOWR(VFE_IOC_MAGIC,VFE_IOC_HDMI_IDX_20, vfe_hdmi_hdcp_data_t)
#define VFE_IOC_HDMI_GET_SOURCE_KSVDATA					_IOWR(VFE_IOC_MAGIC,VFE_IOC_HDMI_IDX_21, vfe_hdmi_ksv_data_t)
#define VFE_IOC_HDMI_GET_CLOCKSTATUS					_IOR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_27, vfe_hdmi_clockstatus_t)
#define VFE_IOC_HDMI_GET_AUDIO_CODING_TYPE        		_IOR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_30, unsigned char)
#define VFE_IOC_HDMI_SET_HPD_LOW_DELAY                  _IOW(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_31, unsigned int)
#define VFE_IOC_HDMI_GET_DRM_INFO            			_IOWR(VFE_IOC_MAGIC,VFE_IOC_HDMI_IDX_32, vfe_hdmi_drm_t)
#define VFE_IOC_HDMI_SET_ARC_SPDIF_ENABLE				_IOW(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_33, unsigned int)
#define VFE_IOC_HDMI_GET_AVMUTE             			_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_34, unsigned char)
#define VFE_IOC_HDMI_WRITE_HDCP_APPLY					_IOW(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_36, vfe_hdmi_hdcp_data_apply_t)

#define VFE_IOC_HDMI_GET_RX_PORT_CNT					_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_37, unsigned char)
#define VFE_IOC_HDMI_GET_HDMI_SUPPORT_VER				_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_38, vfe_hdmi_support_ver_t)
#define VFE_IOC_HDMI_GET_HDCP_VERSION					_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_39, vfe_hdmi_hdcp_ver_t)
#define VFE_IOC_HDMI_GET_SRUPPORT_HDCP_VER				_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_40, vfe_hdcp_table_t)
#define VFE_IOC_HDMI_GET_RECEIVER_ID					_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_41, unsigned char)
#define VFE_IOC_HDMI_SET_HPD_CONTROL					_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_42, vfe_hdmi_hpd_t)
#define VFE_IOC_HDMI_GET_LOGICAL_PORT					_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_43, unsigned char)
#define VFE_IOC_HDMI_GET_ARC_CHANNEL              		_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_44, char)
#define VFE_IOC_HDMI_GET_EARC_CHANNEL              		_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_45, char)

typedef struct
{
	UINT8   port;	        // HDMI Port
	PBYTES  p_edid;         // EDID
	UINT16  len;            // length of edid
	UINT32  flags;          // control flags
	#define	APPLY_EDID_IMMEDIATELY  0x80    // when this flag is set, the EDID will be written to SRAM immedately
}vfe_hdmi_edid_read_write_ex;

#define VFE_IOC_HDMI_READ_EDID_EX			_IOR(VFE_IOC_MAGIC,  VFE_IOC_HDMI_IDX_45, vfe_hdmi_edid_read_write_ex)
#define VFE_IOC_HDMI_WRITE_EDID_EX			_IOW(VFE_IOC_MAGIC,  VFE_IOC_HDMI_IDX_46, vfe_hdmi_edid_read_write_ex)

#if defined(CONFIG_ARM64) && defined(CONFIG_COMPAT)
#define PKADP_HAL_VFE_HDMI_IN_PACKET_T   PBYTES
#else	
#define PKADP_HAL_VFE_HDMI_IN_PACKET_T   KADP_HAL_VFE_HDMI_IN_PACKET_T*
#endif

typedef struct
{
	UINT8   port;          // HDMI Port
	UINT8   n_vsif;        // number of vsif
	PKADP_HAL_VFE_HDMI_IN_PACKET_T  p_vsif;  // vsif output array
}vfe_hdmi_multi_vsif;

#define VFE_IOC_HDMI_READ_MULTI_VSIF		_IOR(VFE_IOC_MAGIC,  VFE_IOC_HDMI_IDX_47, vfe_hdmi_multi_vsif)
#define VFE_IOC_HDMI_GET_EM_PACKET_SIZE		_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_48, vfe_hdmi_emp_size_t)
typedef struct
{
	UINT8               port;
	vfe_hdmi_em_type_e  type;
	PBYTES              p_buff;
	UINT16              n_buff;
} vfe_hdmi_get_emp_t;

#define VFE_IOC_HDMI_GET_EM_PACKET			_IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_49, vfe_hdmi_get_emp_t)

typedef struct
{
    UINT16   ctrl;           // command id
    UINT16   rw:1;           // 0 : write, 1 : read 
    UINT16   port:7;         // port id
    UINT16   reserved:8;     // reserved for command specific usage
    UINT32   param;          // parameter 1
}vfe_hdmi_ctrl;

typedef enum
{
    VFE_IOC_HDMI_GROUP_GENERAL = 0,
    VFE_IOC_HDMI_GROUP_HPD = 1,
    VFE_IOC_HDMI_GROUP_DIA_SET_ERR = 2,
    VFE_IOC_HDMI_GROUP_VRR = 3, 
    VFE_IOC_HDMI_GROUP_PHY = 4, 
    VFE_IOC_HDMI_GROUP_HDCP = 5,
    VFE_IOC_HDMI_GROUP_SCDC = 6,
}vfe_ioc_hdmi_ctrl_group;

#define VFE_HDMI_CTRL_CMD(group, id)      (((group & 0xFF) <<8) | (id & 0xFF))

#define VFE_HDMI_GENERAL_CMD(id)          VFE_HDMI_CTRL_CMD(VFE_IOC_HDMI_GROUP_GENERAL, id)

#define VFE_HDMI_HPD_CMD(id)              VFE_HDMI_CTRL_CMD(VFE_IOC_HDMI_GROUP_HPD, id)
#define VFE_HDMI_HPD_LOW_DELAY            VFE_HDMI_HPD_CMD(0)

#define VFE_HDMI_HDCP_CMD(id)             VFE_HDMI_CTRL_CMD(VFE_IOC_HDMI_GROUP_HDCP, id)
#define VFE_HDMI_HDCP22_ENABLE            VFE_HDMI_HDCP_CMD(0)
#define VFE_HDMI_HDCP22_REAUTH            VFE_HDMI_HDCP_CMD(1)
#define VFE_HDMI_HDCP_STATUS              VFE_HDMI_HDCP_CMD(2)

#define VFE_HDMI_DIA_SET_ERR_CMD(id)      VFE_HDMI_CTRL_CMD(VFE_IOC_HDMI_GROUP_DIA_SET_ERR, id)
#define VFE_HDMI_GCP_ERROR                VFE_HDMI_DIA_SET_ERR_CMD(KADP_HDMI_ERROR_GCP_ERROR)
#define VFE_HDMI_HDCP22_ERROR             VFE_HDMI_DIA_SET_ERR_CMD(KADP_HDMI_ERROR_HDCP22_REAUTH)
#define VFE_HDMI_TMDS_ERROR               VFE_HDMI_DIA_SET_ERR_CMD(KADP_HDMI_ERROR_TMDS_ERROR)
#define VFE_HDMI_PHY_LOW_ERROR            VFE_HDMI_DIA_SET_ERR_CMD(KADP_HDMI_ERROR_PHY_LOW_RANGE)
#define VFE_HDMI_PHY_ABN_ERROR            VFE_HDMI_DIA_SET_ERR_CMD(KADP_HDMI_ERROR_PHY_ABNORMAL)
#define VFE_HDMI_CED_ERROR                VFE_HDMI_DIA_SET_ERR_CMD(KADP_HDMI_ERROR_CED_ERROR)
#define VFE_HDMI_AUDIO_BUF_ERROR          VFE_HDMI_DIA_SET_ERR_CMD(KADP_HDMI_ERROR_AUDIO_BUFFER)
#define VFE_HDMI_UNSTABLE_SYNC_ERROR      VFE_HDMI_DIA_SET_ERR_CMD(KADP_HDMI_ERROR_UNSTABLE_SYNC)

#define VFE_HDMI_VRR_CMD(id)              VFE_HDMI_CTRL_CMD(VFE_IOC_HDMI_GROUP_VRR, id) 
#define VFE_HDMI_VRR_GET_VFREQ            VFE_HDMI_VRR_CMD(0) 

#define VFE_HDMI_PHY_CMD(id)              VFE_HDMI_CTRL_CMD(VFE_IOC_HDMI_GROUP_PHY, id) 
#define VFE_HDMI_PHY_MANUAL_EQ_EN         VFE_HDMI_PHY_CMD(0)
#define VFE_HDMI_PHY_MANUAL_EQ_PARM       VFE_HDMI_PHY_CMD(1)
#define VFE_HDMI_PHY_TMDS_STATUS          VFE_HDMI_PHY_CMD(2)

#define VFE_HDMI_SCDC_CMD(id)             VFE_HDMI_CTRL_CMD(VFE_IOC_HDMI_GROUP_SCDC, id)
#define VFE_HDMI_SCDC_GET_STATUS          VFE_HDMI_SCDC_CMD(0)

#define VFE_IOC_HDMI_CONTROL              _IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_50, vfe_hdmi_ctrl)
typedef enum
{
    GENERAL_INFO = 0,
    SET_ERR_INIT_VAL = 1,
    GET_ERR_INFO = 2,
}DIAGNOSTIC_ID;

typedef struct
{
   unsigned char port;
   DIAGNOSTIC_ID id;
   PBYTES pdata;
   unsigned int data_len;
} vfe_hdmi_diagnostic_data;

#define VFE_IOC_HDMI_GET_DATA             _IOWR(VFE_IOC_MAGIC, VFE_IOC_HDMI_IDX_51, vfe_hdmi_diagnostic_data)

//customer range is 200-255
#define VFE_IOC_CUSTOMER_START_INDEX 200
enum vfe_ioc_sustomer_idx
{
	VFE_IOC_CUSTOMER_IDX_0 = VFE_IOC_CUSTOMER_START_INDEX,//200
	VFE_IOC_CUSTOMER_IDX_1,//201
	VFE_IOC_CUSTOMER_IDX_2,//202
	VFE_IOC_CUSTOMER_IDX_3,//203
	VFE_IOC_CUSTOMER_IDX_4,//204
	VFE_IOC_CUSTOMER_IDX_5,//205
	VFE_IOC_CUSTOMER_IDX_6,//206
	VFE_IOC_CUSTOMER_IDX_7,//207
	VFE_IOC_CUSTOMER_IDX_8,//208
	VFE_IOC_CUSTOMER_IDX_9,//209
	VFE_IOC_CUSTOMER_IDX_10,//210
	VFE_IOC_CUSTOMER_IDX_11,//211
	VFE_IOC_CUSTOMER_IDX_12,//212
	VFE_IOC_CUSTOMER_IDX_13,//213
	VFE_IOC_CUSTOMER_IDX_MAX = 255,
};

#define VO_GET_TIMINGINFO						  	_IO(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_0)
#define VFE_IOC_AVD_VBI_TTX_SINGAL			      	_IOWR(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_1,  unsigned char)
// TODO, Merlin3 tv010 sync, need modify index according to merlin3 status
#define VFE_IOC_AVD_Coarse_Lock						_IO(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_2) // TO-DO, original is 59

#define VFE_AVD_EXTERN_IOC_GET625MODE				_IOR(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_3, unsigned int)
#define VFE_AVD_EXTERN_IOC_GET_MACROVISION			_IOR(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_4, unsigned int)
#define VFE_AVD_EXTERN_IOC_OPEN_AV_OUT_BYPASS		_IO(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_5)
#define VFE_AVD_EXTERN_IOC_CLOSE_AV_OUT_BYPASS		_IO(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_6)
#define VFE_EXTERN_IOC_GET_OFFLINE_SIGTATUS			_IOR(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_7, KADP_MW_SRC_E_BOOL)
#define VFE_IOC_SETNSTDVALUE         				_IOR(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_8, unsigned int)
#define VFE_IOC_AVD_GET_NOISE_STATUS				_IOR(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_9, unsigned char)
#define VO_GET_USBVOINFO							_IOR(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_10, VO_VOINFO)
#define VFE_IOC_AVD_SET_AV_OUT						_IO(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_11) //IOW unsigned char
#define VO_GET_USBVOINFO_EXTA0                      _IO(VFE_IOC_MAGIC, VFE_IOC_CUSTOMER_IDX_13) //IOR VO_VOINFO_EXT_A0
#endif
