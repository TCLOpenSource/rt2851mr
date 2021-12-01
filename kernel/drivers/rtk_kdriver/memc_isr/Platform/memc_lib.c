/**
 * @file memc_lib.c
 * @brief This file implements all memc exported api.
 * @date August.24.2014
 * @version V0.0.1
 * @author Lixiangjun
 * @par MEMC Library V0.0.1 - Copyright (C) 2014 Real-Image Co. LTD
 * @par History:
 *			Version: 0.0.1
*/

#ifdef WIN32
#define DLL_IMPLEMENT
#endif

#if 0//#ifdef RTK_MEMC
#include <string.h>

#include <stdio.h>
#include <stdlib.h>

#include <../../../common/rtio.h>
#endif

#ifdef CONFIG_ARM64 //ARM32 compatible
#include <linux/kernel.h>
#endif

#include <linux/wait.h>//For wake_up and wait
#include <linux/spinlock_types.h>/*For spinlock*/
#include "memc_isr/Common/kw_common.h"
#include "memc_isr/Common/kw_uart.h"
#include "memc_isr/include/memc_lib.h"
#include "memc_isr/Common/kw_debug.h"

#include "memc_isr/MID/mid_memc.h"
#include "memc_isr/MID/mid_mode.h"
#include "memc_isr/MID/mid_dm.h"
#include "memc_isr/MID/mid_sys.h"
#include "memc_isr/MID/mid_crtc.h"
#include "memc_isr/MID/mid_misc.h"
#include "memc_isr/MID/mid_ambl.h"
#include "memc_isr/HAL/hal_hdf.h"
#include "memc_isr/HAL/hal_mc.h"
#include "memc_isr/HAL/hal_me.h"

#include "memc_isr/include/PQLAPI.h"
#include "memc_isr/Platform/version.h"

#include "memc_isr/PQL/PQLPlatformDefs.h"
#include "memc_isr/PQL/PQLContext.h"
#include "memc_isr/Driver/regio.h"
#include <memc_isr/scalerMEMC.h>

#include "rtk_vgip_isr.h"
#ifdef CONFIG_ARM64 //ARM32 compatible
//#include "io.h"

// for register dump
#include <tvscalercontrol/io/ioregdrv.h>

#undef rtd_outl
#define rtd_outl(x, y)     								IoReg_Write32(x,y)
#undef rtd_inl
#define rtd_inl(x)     									IoReg_Read32(x)
#undef rtd_maskl
#define rtd_maskl(x, y, z)     							IoReg_Mask32(x,y,z)
#undef rtd_setbits
#define rtd_setbits(offset, Mask) rtd_outl(offset, (rtd_inl(offset) | Mask))
#undef rtd_clearbits
#define rtd_clearbits(offset, Mask) rtd_outl(offset, ((rtd_inl(offset) & ~(Mask))))
#else
#include "io.h"
#endif
#include <scaler/vipCommon.h>
#include <scaler/vipRPCCommon.h>
#include <tvscalercontrol/scalerdrv/scalerdrv.h>
#include <tvscalercontrol/scaler_vpqmemcdev.h>

/* ! add for VS debug purpose */
#ifdef WIN32
#include "regio.h"
#include <stdlib.h>
#include <string.h>
#endif

//#include "drv_i2c.h"

/*! Default debug level of this module */
#define DEFAULT_DBG_LEVEL	DBG_WARNING

#define TAG_NAME "MEMC_LIB"


//temp for debug
#define REAL_CHIP
#include <tvscalercontrol/io/ioregdrv.h>
#undef rtd_outl
#define rtd_outl(x, y)     								IoReg_Write32(x,y)
#undef rtd_inl
#define rtd_inl(x)     									IoReg_Read32(x)
#undef rtd_maskl
#define rtd_maskl(x, y, z)     							IoReg_Mask32(x,y,z)
#undef rtd_setbits
#define rtd_setbits(offset, Mask) rtd_outl(offset, (rtd_inl(offset) | Mask))
#undef rtd_clearbits
#define rtd_clearbits(offset, Mask) rtd_outl(offset, ((rtd_inl(offset) & ~(Mask))))
//#define BIT(x)               (1 <<x)   // re-defined

/*! define mode data structure */
typedef struct
{
	MEMC_INOUT_MODE			enInOutMode;			///< APP inout mode enum
	MEMC_INPUT_FORMAT		enInputFormat;			///< APP input format
	MEMC_OUTPUT_FORMAT		enOutputFormat;			///< APP output format
	MEMC_INPUT_RESOLUTION	enInputRes;				///< APP input resolution
	MEMC_OUTPUT_RESOLUTION	enOutputRes;			///< APP output resolution
	MEMC_INPUT_FRAMERATE	enInputFrameRate;		///< APP input frame rate
	MEMC_OUTPUT_FRAMERATE	enOutputFrameRate;		///< APP output frame rate
	BOOL					bVflip;					///< APP vflip
}MODE_DATA_ST;

/*! define memc data structure */
typedef struct
{
	MEMC_MODE				enMemcMode;				///< APP memc mode
	BOOL					bFrameRepeat;			///< APP frame repeat mode
	BOOL					bFrameRepeat_QRPC;			///< APP frame repeat mode
	BOOL					bPCMode;			///< APP PC mode
	BOOL					bPCMode_QRPC;			///< APP PC mode
	BOOL					bLowDelay;			///< APP low delay mode
	BOOL					bLowDelay_QRPC;			///< APP low delay mode
	UINT32					uiDeblurLevel;			///< APP memc deblur level
	UINT32					uiDejudderLevel;		///< APP memc dejudder level
	UINT32					uiFallbackLevel;		///< APP memc fallback level
	UINT32					uiTop;					///< APP rim window top
	UINT32					uiBottom;				///< APP rim window bottom
	UINT32					uiLeft;					///< APP rim window left
	UINT32					uiRight;				///< APP rim window right
	BOOL					input422_pc_mode;		///< APP rim window right
	BOOL					input422_pc_mode_QRPC;	///< APP rim window right
}MEMC_DATA_ST;

/*! define sys data structure */
typedef struct
{
	BOOL					bMute;					///< APP mute state
	MEMC_DEMO_MODE			enDemoMode;				///< APP demo mode
}SYS_DATA_ST;

/*! define app data structure */
typedef struct
{
	MODE_DATA_ST			stModeData;				///< APP mode data
	MEMC_DATA_ST			stMEMCData;				///< APP memc data
	SYS_DATA_ST				stSysData;				///< APP system data
	UINT32					uiVer;					///< structure version
	SINT32					iMEMCDbgLevel;			///< APP Debug level variable define
	SINT32					iErrCode;				///< APP error code
	BOOL					bSyncCMD;				///< CMD work sync mode, TRUE sync, FALSE async
	BOOL 					bCtrcSlaveMode;			///< APP CRTC Slave Mode
	UBYTE					bCinemaMode;			///< Cinema Mode, related to stMEMCData.enMemcMode
	UBYTE					bCinemaModeUpdateFR;	///< Cinema Mode, final update frame rate
}MEMC_APP_DATA_ST;

typedef struct
{
	BOOL 	bSRC_VO;	///< ScalerVIP status
	BOOL 	bHDR_Chg;	///< ScalerVIP status
	UINT16	mBrightness;	///< ScalerVIP status
	UINT16  mContrast;		///< ScalerVIP status
	SINT16 	mSpeed;		///< ScalerVIP status
	BOOL	bZoomAction;	///< ScalerVIP status
	BOOL    bShiftAction;	///< ScalerVIP status
	UINT16	source_type;
	UBYTE	mVOSeek;	///< VO Status
	UINT16	MEMCMode;	///< MEMC mode
	UBYTE   mDarkLevel; ///< Hist dark level
	BOOL	Hist_SC_flg;
	UBYTE	mSoccer_holdfrm;
	BOOL	PictureMode_Chg;
	BOOL	bVIP_Still;	// from RTNR MAD Y counter info
	UBYTE	m_MiraCast;	///< m_MiraCast Status
	UINT16	Forbes_flg;
	UINT32 DTL_Step_Hist_sum_ratio[5];
}MEMC_SCALER_VIP_INFO;

/*! Global variable section */
static MEMC_APP_DATA_ST		gstAppData = {
											{
												MEMC_INOUT_MODE_MAX,		///< APP inout mode enum
												INPUT_FORMAT_MAX, 			///< APP input format
												OUTPUT_FORMAT_MAX, 			///< APP output format
												INPUT_RESOLUTION_MAX,		///< APP input resolution
												OUTPUT_RESOLUTION_MAX, 		///< APP output resolution
												INPUT_FRAME_MAX, 			///< APP input frame rate
												OUTPUT_FRAME_MAX, 			///< APP output frame rate
												0, 							///< APP vflip
											},	///< Mode data
											{
												MEMC_MODE_MAX, 				///< APP memc mode
												FALSE,						///< APP frame repeat mode
												FALSE,						///< APP frame repeat mode Q
												FALSE,						///< APP PC mode
												FALSE,						///< APP PC mode Q
												FALSE,						///< APP low delay mode
												FALSE,						///< APP low delay mode Q
												0,						///< APP memc deblur level
												0,						///< APP memc dejudder level
												0,						///< APP memc fallback level
												0x10, 						///< APP rim window top
												0x2150, 					///< APP rim window bottom
												0, 							///< APP rim window left
												3840,						///< APP rim window right
											},	///< MEMC data
											{
												FALSE,						///< APP mute state
												DEMO_MODE_OFF,				///< APP demo mode
											},	///< Sys data
											0x01000000, 					///< structure version
											(SINT32)DEFAULT_DBG_LEVEL, 				///< APP Debug level variable define   // (SINT32) for fix warning message
											0, 								///< APP error code
											FALSE,							///< CMD work sync mode, TRUE sync, FALSE async
											TRUE,							///< APP CRTC Slave Mode
											FALSE							///< Cinema Mode, related to stMEMCData.enMemcMode
										};				///< app data

static MEMC_SCALER_VIP_INFO	gstScalerVIPInfo = {0};

static PANEL_DATA_ST	gstPanelData;					///< Panel data
#if 1  // k4lp
static DM_Start_ADDRESS_ST 	gstDMStartAddr;
static UBYTE gu8DM_Mode = 0;
#endif
static ME_DM_ADDRESS_ST gstMEDMAddr;
static MV_DM_ADDRESS_ST gstMVDMAddr;
static MC_DM_ADDRESS_ST gstMCDMAddr;
static ME1RPT_DM_ADDRESS_ST gstME1RPTDMAddr;
static IPME_DM_ADDRESS_ST gstIPMEDMAddr;

static DM_ADDR_ALLOCATE_ST gstDMAddrAllocate = {0};

static UINT32 u32OutIntCount = 0;
static UBYTE  InputVSXral_FrameRepeatMode = 0;
static UBYTE  InputVSXral_PCMode = 0;
static UBYTE  InputVSXral_PCMode_422_change = 0;

static unsigned char g_memc_ivsync_cnt = 0;

static UBYTE Ready_For_SetMCBlendMode = 1;

UBYTE u8_MEMCMode = 0;
UINT32 dejudder = 0;
UINT32 deblur = 0;
extern unsigned char VR360_en;
extern unsigned char VR360_stage;
extern unsigned char VR360_wait_flag;

extern void Scaler_MEMC_SetInitFlag(unsigned char val);
extern unsigned char Scaler_MEMC_GetInitFlag(void);

extern MEMC_SCALER_VIP_INFO scalerVIP_Get_Info_fromScaler(void);
extern _system_setting_info* scaler_GetShare_Memory_system_setting_info_Struct(void);

VOID MEMC_LibGetScalerVIPInfo(VOID);
VOID MEMC_LibInputVSXral(VOID);
static DEFINE_SPINLOCK(memc_freeze_ctrl_spinlock);/* This spinlock is for memc freeze use */
// for debug purpose to get printf info
#ifdef WIN32
static int iBufSize = 1024;
static char *pRead = NULL;
static char *pWrite = NULL;

static char *pgPrintBuf = NULL;

static VOID InitPrintLoopBuffer()
{
	pgPrintBuf = (char *)malloc(iBufSize);
	pRead = pgPrintBuf;
	pWrite = pgPrintBuf;
}

static VOID PrintfBufFill(char ch)
{
	if (pWrite >= (pgPrintBuf + iBufSize))
	{
		pWrite = pgPrintBuf;
	}

	*pWrite = ch;
	pWrite++;
}

VOID InitPrintf(VOID)
{
	InitPrintLoopBuffer();
	kw_SetPrintfCallback(PrintfBufFill);
}

int DebugReadPrintf(char *buf)
{
	int iLen = 0;
	char *pEnd = NULL;

	if (pRead < pWrite)
	{
		pEnd = pWrite;
	}
	else if (pRead > pWrite)
	{
		pEnd = pgPrintBuf + iBufSize;
	}
	else
	{
		// read is at same place as write, no more data
		// just return
		return 0;
	}

	iLen = pEnd - pRead;
	if (iLen == 0)
		return iLen;

	strncpy(buf, pRead, iLen);
	pRead += iLen;
	if (pRead >= pgPrintBuf + iBufSize)
		pRead = pgPrintBuf;

	return iLen;
}
#endif

#ifndef REAL_CHIP	//FPGA
#define ME_START_ADDR 0
#else
#define ME_START_ADDR 0x30000000
#endif

#define MV_START_ADDR gstMEDMAddr.stBuf_14_1.u32StartAddress + 0x5000
//#define MC_START_ADDR gstMVDMAddr.stBuf_12_7.u32StartAddress + gstMVDMAddr.u32Buf_12_LROffset * 2

#ifndef REAL_CHIP	//FPGA
#define PC_MODE_KMC_LR_OFFSET_ADDR 0x010E0000
#define PC_MODE_KMC_LINE_OFFSET_ADDR 0x4000

#define VD_MODE_KMC_LR_OFFSET_ADDR 0x00CA8000
#define VD_MODE_KMC_LINE_OFFSET_ADDR 0x3000
#else
#define PC_MODE_KMC_LR_OFFSET_ADDR 0x00438000
#define PC_MODE_KMC_LINE_OFFSET_ADDR 0x2000

#define VD_MODE_KMC_LR_OFFSET_ADDR 0x002C4C00
#define VD_MODE_KMC_LINE_OFFSET_ADDR 0x1500
#endif

#if 1
/**
 * @brief This function set memc dm start address
 * @param [in] UINT32		u32DMAddr
 * @retval void
*/
VOID MEMC_LibSetDMStartAddr(UINT32 u32DMAddr)
{
	gstDMStartAddr.u32ME_StartAddress = u32DMAddr;
}
VOID MEMC_LibSetMEShareDMStartAddr(UINT32 u32ME1RPTDMAddr,UINT32 u32IPMEDMAddr)
{
	gstDMStartAddr.u32MERPT_StartAddress= u32ME1RPTDMAddr;
	gstDMStartAddr.u32IPME_StartAddress= u32IPMEDMAddr;
}
#if (IC_K5LP || IC_K6LP)
#define WRITE_DM_VACT	1080
#else
#define WRITE_DM_VACT	1082
#endif
/**
 * @brief This function set DM mode.
 * @param [in] u8Mode 		0:more cpr, 1: less cpr.
 * @retval VOID
*/
VOID MEMC_LibSetDMMode(UBYTE u8Mode)
{
	gu8DM_Mode = u8Mode;
	if(gu8DM_Mode == 0)	// cpr:2.29
	{
		gstMCDMAddr.u32LineOffset_VDHF 	= 0x1220;
		gstMCDMAddr.u32LineOffset_VDLF 	= 0x1080;
		gstMCDMAddr.u32LROffset_VDHF 	= gstMCDMAddr.u32LineOffset_VDHF * WRITE_DM_VACT / 2;	//0x00264DA0;
		gstMCDMAddr.u32LROffset_VDLF 	= gstMCDMAddr.u32LineOffset_VDLF * WRITE_DM_VACT / 2;	//0x0022DE80;
	}
	else	// cpr:2.14
	{
		#if ( IC_K5LP || IC_K6LP)
			#if IC_K6LP
			gstMCDMAddr.u32LineOffset_VDLF 	= 0x11a0;//0x00246300;
			gstMCDMAddr.u32LineOffset_VDHF 	= 0x1380;//0x00285780;
			#else
			gstMCDMAddr.u32LineOffset_VDHF 	= 0x1140;//0x00246300;
			gstMCDMAddr.u32LineOffset_VDLF 	= 0x1320;//0x00285780;
			#endif
		#else
		gstMCDMAddr.u32LineOffset_VDHF 	= 0x1400;//0x002A4400;
		gstMCDMAddr.u32LineOffset_VDLF 	= 0x1200;//0x00260A00;
		#endif
		gstMCDMAddr.u32LROffset_VDHF 	= gstMCDMAddr.u32LineOffset_VDHF * WRITE_DM_VACT / 2;	//0x002A4400;
		gstMCDMAddr.u32LROffset_VDLF 	= gstMCDMAddr.u32LineOffset_VDLF * WRITE_DM_VACT / 2;	//0x00260A00;
	}
	#if (IC_K5LP || IC_K6LP)
	gstMCDMAddr.u32LineOffset_PC	= 0x2000;
	gstMCDMAddr.u32LineOffset_HF_PC	= (0x1140)*2;
	gstMCDMAddr.u32LineOffset_LF_PC	= (0x1320)*2;
	#else
	gstMCDMAddr.u32LineOffset_PC	= 0x2000;
	#endif
	gstMCDMAddr.u32LROffset_PC		= gstMCDMAddr.u32LineOffset_PC * WRITE_DM_VACT / 2;	//0x00438000;
	gstMCDMAddr.u32LROffset_HF_PC		= gstMCDMAddr.u32LineOffset_HF_PC * WRITE_DM_VACT / 2;	//0x00438000;
	gstMCDMAddr.u32LROffset_LF_PC		= gstMCDMAddr.u32LineOffset_LF_PC * WRITE_DM_VACT / 2;	//0x00438000;
}
#endif

/*! MEMC Library exported api list */
/**
 * @brief This function must be invoked when boot up.(boot sequence: MEMC_LibDMAllocate -> MEMC_LibInit)
*/
VOID MEMC_LibDMAllocate(UINT32 uiMC0Start, UINT32 uiMC1Start, UINT32 uiMEStart)
{
	gstDMAddrAllocate.u32MC0Start = uiMC0Start;
	gstDMAddrAllocate.u32MC1Start = uiMC1Start;
	gstDMAddrAllocate.u32MEStart = uiMEStart;
	#if (IC_K5LP || IC_K6LP)
	gstDMAddrAllocate.u32ME1RPTStart= uiMC1Start+MEMC_KMC_01_START_TOTAL_SIZE;
	gstDMAddrAllocate.u32IPMEStart= gstDMAddrAllocate.u32ME1RPTStart+KME1_RPT_TOTAL_SIZE;
	#else
	gstDMAddrAllocate.u32ME1RPTStart= uiMC1Start;
	gstDMAddrAllocate.u32IPMEStart= uiMC1Start;
	#endif
}


static VOID _MEMC_LibSetMEDMAddress(UINT32 u32MEStartAddr)
{
	gstMEDMAddr.u32Buf_00_LineOffset = 0x3C0;
#if (IC_K6LP)
	gstMEDMAddr.u32Buf_00_LROffset = 0x3F480; // 0x40000;
#elif (IC_K5LP)
	gstMEDMAddr.u32Buf_00_LROffset = 0x3F480;
#elif IC_K4LP
	gstMEDMAddr.u32Buf_00_LROffset = 0x40000;
#else
	gstMEDMAddr.u32Buf_00_LROffset = 0x80000;
#endif
	gstMEDMAddr.stBuf_00_0.u32StartAddress = u32MEStartAddr;
	gstMEDMAddr.stBuf_00_1.u32StartAddress = gstMEDMAddr.stBuf_00_0.u32StartAddress + gstMEDMAddr.u32Buf_00_LROffset * 2;
	gstMEDMAddr.stBuf_00_2.u32StartAddress = gstMEDMAddr.stBuf_00_1.u32StartAddress + gstMEDMAddr.u32Buf_00_LROffset * 2;
	gstMEDMAddr.stBuf_00_3.u32StartAddress = gstMEDMAddr.stBuf_00_2.u32StartAddress + gstMEDMAddr.u32Buf_00_LROffset * 2;
	gstMEDMAddr.stBuf_00_4.u32StartAddress = gstMEDMAddr.stBuf_00_3.u32StartAddress + gstMEDMAddr.u32Buf_00_LROffset * 2;
	gstMEDMAddr.stBuf_00_5.u32StartAddress = gstMEDMAddr.stBuf_00_4.u32StartAddress + gstMEDMAddr.u32Buf_00_LROffset * 2;
	gstMEDMAddr.stBuf_00_6.u32StartAddress = gstMEDMAddr.stBuf_00_5.u32StartAddress + gstMEDMAddr.u32Buf_00_LROffset * 2;
	gstMEDMAddr.stBuf_00_7.u32StartAddress = gstMEDMAddr.stBuf_00_6.u32StartAddress + gstMEDMAddr.u32Buf_00_LROffset * 2;

	gstMEDMAddr.u32Buf_08_LineOffset = 0x3C0;
#if 1
	gstMEDMAddr.stBuf_08_0.u32StartAddress = gstMEDMAddr.stBuf_00_7.u32StartAddress + gstMEDMAddr.u32Buf_00_LROffset * 2;
#else
	gstMEDMAddr.stBuf_08_0.u32StartAddress = gstMEDMAddr.stBuf_00_5.u32StartAddress + gstMEDMAddr.u32Buf_00_LROffset * 2;
#endif
	gstMEDMAddr.stBuf_08_1.u32StartAddress = gstMEDMAddr.stBuf_08_0.u32StartAddress;

	gstMEDMAddr.u32Buf_10_LineOffset = 0x1E0;
	gstMEDMAddr.stBuf_10_0.u32StartAddress = gstMEDMAddr.stBuf_08_1.u32StartAddress + MEMC_KME_08_SHIFT * 1;
	gstMEDMAddr.stBuf_10_1.u32StartAddress = gstMEDMAddr.stBuf_10_0.u32StartAddress;

	#if (IC_K5LP || IC_K6LP)
	gstMEDMAddr.u32Buf_12_LineOffset = 0xC0;
	#else
	gstMEDMAddr.u32Buf_12_LineOffset = 0x80;
	#endif
	gstMEDMAddr.stBuf_12_0.u32StartAddress = gstMEDMAddr.stBuf_10_0.u32StartAddress + MEMC_KME_10_SHIFT * 1;
	gstMEDMAddr.stBuf_12_1.u32StartAddress = gstMEDMAddr.stBuf_12_0.u32StartAddress;

	#if IC_K6LP
	gstMEDMAddr.u32Buf_14_LineOffset = 0xC0;
	#elif IC_K5LP
	gstMEDMAddr.u32Buf_14_LineOffset = 0xC0;
	#else
	gstMEDMAddr.u32Buf_14_LineOffset = 0x80;
	#endif
	gstMEDMAddr.stBuf_14_0.u32StartAddress = gstMEDMAddr.stBuf_12_1.u32StartAddress + MEMC_KME_12_SHIFT * 1;
	gstMEDMAddr.stBuf_14_1.u32StartAddress = gstMEDMAddr.stBuf_14_0.u32StartAddress;

#if 1
	gstDMStartAddr.u32MV_StartAddress = gstMEDMAddr.stBuf_14_1.u32StartAddress + MEMC_KME_14_SHIFT * 1;
#endif
	Mid_DM_SetKMEStartAddress(&gstMEDMAddr);
	Mid_DM_SetKMEOffsetAddress(&gstMEDMAddr);
	Mid_DM_SetKMEEndAddress(&gstMEDMAddr);
}

//#define ME1_480X270

static VOID _MEMC_LibSetMVDMAddress(UINT32 u32MVStartAddr)
{
#if IC_K6LP
	gstMVDMAddr.u32Buf_01_LineOffset = 0x540;
	gstMVDMAddr.u32Buf_01_LROffset = 0x2C4C0; // 0x2A800;
#elif IC_K5LP
	gstMVDMAddr.u32Buf_01_LineOffset = 0x540;
	gstMVDMAddr.u32Buf_01_LROffset = 0x2C4C0;
#elif IC_K4LP
	gstMVDMAddr.u32Buf_01_LineOffset = 0x500;
	gstMVDMAddr.u32Buf_01_LROffset = 0x2A800;
#else
	gstMVDMAddr.u32Buf_01_LineOffset = 0x300;
	gstMVDMAddr.u32Buf_01_LROffset = 0x10000;	//0x20000
#endif
	gstMVDMAddr.stBuf_01_0.u32StartAddress = u32MVStartAddr;

#if IC_K6LP
	gstMVDMAddr.u32Buf_02_LineOffset = 0x4E0;
	gstMVDMAddr.u32Buf_02_LROffset = 0x14910; // 0x15800;
#elif IC_K5LP
	gstMVDMAddr.u32Buf_02_LineOffset = 0x4E0;
	gstMVDMAddr.u32Buf_02_LROffset = 0x14910;
#elif IC_K4LP
	#ifdef ME1_480X270
	gstMVDMAddr.u32Buf_02_LineOffset = 0xA00;
	gstMVDMAddr.u32Buf_02_LROffset = 0x54600;
	#else
	gstMVDMAddr.u32Buf_02_LineOffset = 0x500;
	gstMVDMAddr.u32Buf_02_LROffset = 0x15800;
	#endif
#else
	gstMVDMAddr.u32Buf_02_LineOffset = 0x500;
	gstMVDMAddr.u32Buf_02_LROffset = 0x15800;
#endif
	gstMVDMAddr.stBuf_02_0.u32StartAddress = gstMVDMAddr.stBuf_01_0.u32StartAddress + gstMVDMAddr.u32Buf_01_LROffset * 2;

#if (IC_K6LP)
	gstMVDMAddr.u32Buf_04_LineOffset = 0x420;
	gstMVDMAddr.u32Buf_04_LROffset = 0x11670; // 0x11000;
#elif (IC_K5LP)
	gstMVDMAddr.u32Buf_04_LineOffset = 0x420;
	gstMVDMAddr.u32Buf_04_LROffset = 0x11670;
#elif IC_K4LP
	#ifdef ME1_480X270
	gstMVDMAddr.u32Buf_04_LineOffset = 0x800;
	gstMVDMAddr.u32Buf_04_LROffset = 0x43800;
	#else
	gstMVDMAddr.u32Buf_04_LineOffset = 0x400;
	gstMVDMAddr.u32Buf_04_LROffset = 0x11000;
	#endif
#else
	gstMVDMAddr.u32Buf_04_LineOffset = 0x400;
	gstMVDMAddr.u32Buf_04_LROffset = 0x11000;
#endif
	gstMVDMAddr.stBuf_04_0.u32StartAddress = gstMVDMAddr.stBuf_02_0.u32StartAddress + gstMVDMAddr.u32Buf_02_LROffset * 2;
	gstMVDMAddr.stBuf_04_1.u32StartAddress = gstMVDMAddr.stBuf_04_0.u32StartAddress + gstMVDMAddr.u32Buf_04_LROffset * 2;
	gstMVDMAddr.stBuf_04_2.u32StartAddress = gstMVDMAddr.stBuf_04_1.u32StartAddress + gstMVDMAddr.u32Buf_04_LROffset * 2;


#if (IC_K6LP)
	gstMVDMAddr.u32Buf_05_LineOffset = 0x780;
	gstMVDMAddr.u32Buf_05_LROffset = 0x1FA40; // 0x22000;
#elif (IC_K5LP)
	gstMVDMAddr.u32Buf_05_LineOffset = 0x780;
	gstMVDMAddr.u32Buf_05_LROffset = 0x1FA40;
#elif IC_K4LP
	#ifdef ME1_480X270
	gstMVDMAddr.u32Buf_05_LineOffset = 0xF00;
	gstMVDMAddr.u32Buf_05_LROffset = 0x80000;
	#else
	gstMVDMAddr.u32Buf_05_LineOffset = 0x800;
	gstMVDMAddr.u32Buf_05_LROffset = 0x22000;
	#endif
#else
	gstMVDMAddr.u32Buf_05_LineOffset = 0x800;
	gstMVDMAddr.u32Buf_05_LROffset = 0x22000;
#endif
	gstMVDMAddr.stBuf_05_0.u32StartAddress = gstMVDMAddr.stBuf_04_2.u32StartAddress + gstMVDMAddr.u32Buf_04_LROffset * 2;
	gstMVDMAddr.stBuf_05_1.u32StartAddress = gstMVDMAddr.stBuf_05_0.u32StartAddress + gstMVDMAddr.u32Buf_05_LROffset * 2;

#ifdef LBME2_DM_BUF
	gstMVDMAddr.u32Buf_12_LineOffset = 0x1E0;
	gstMVDMAddr.u32Buf_12_LROffset = 0x20000;
	gstMVDMAddr.stBuf_12_0.u32StartAddress = gstMVDMAddr.stBuf_05_1.u32StartAddress + gstMVDMAddr.u32Buf_05_LROffset * 2;
	gstMVDMAddr.stBuf_12_1.u32StartAddress = gstMVDMAddr.stBuf_12_0.u32StartAddress + gstMVDMAddr.u32Buf_12_LROffset * 2;
	gstMVDMAddr.stBuf_12_2.u32StartAddress = gstMVDMAddr.stBuf_12_1.u32StartAddress + gstMVDMAddr.u32Buf_12_LROffset * 2;
	gstMVDMAddr.stBuf_12_3.u32StartAddress = gstMVDMAddr.stBuf_12_2.u32StartAddress + gstMVDMAddr.u32Buf_12_LROffset * 2;
	gstMVDMAddr.stBuf_12_4.u32StartAddress = gstMVDMAddr.stBuf_12_3.u32StartAddress + gstMVDMAddr.u32Buf_12_LROffset * 2;
	gstMVDMAddr.stBuf_12_5.u32StartAddress = gstMVDMAddr.stBuf_12_4.u32StartAddress + gstMVDMAddr.u32Buf_12_LROffset * 2;
	#ifdef REAL_CHIP
		gstMVDMAddr.stBuf_12_6.u32StartAddress = gstMVDMAddr.stBuf_12_5.u32StartAddress;
		gstMVDMAddr.stBuf_12_7.u32StartAddress = gstMVDMAddr.stBuf_12_5.u32StartAddress;
	#else
		gstMVDMAddr.stBuf_12_6.u32StartAddress = gstMVDMAddr.stBuf_12_5.u32StartAddress + gstMVDMAddr.u32Buf_12_LROffset * 2;
		gstMVDMAddr.stBuf_12_7.u32StartAddress = gstMVDMAddr.stBuf_12_6.u32StartAddress + gstMVDMAddr.u32Buf_12_LROffset * 2;
	#endif
#endif

#ifdef LBME2_DM_BUF
	gstDMStartAddr.u32MC_StartAddress = gstMVDMAddr.stBuf_12_7.u32StartAddress + gstMVDMAddr.u32Buf_12_LROffset * 2;
#else
	gstDMStartAddr.u32MC_StartAddress = gstMVDMAddr.stBuf_05_1.u32StartAddress + gstMVDMAddr.u32Buf_05_LROffset * 2;
#endif

	Mid_DM_SetKMVStartAddress(&gstMVDMAddr);
	Mid_DM_SetKMVOffsetAddress(&gstMVDMAddr);
	Mid_DM_SetKMVEndAddress(&gstMVDMAddr);
}

static VOID _MEMC_LibSetMCDMAddress(UINT32 u32MCStartAddr)
{
	if((gstAppData.stModeData.enInOutMode == MEMC_RGB_IN_VIDEO_OUT) ||
		(gstAppData.stModeData.enInOutMode == MEMC_YUV_IN_VIDEO_OUT))
	{
#if 0
		gstMCDMAddr.stBuf_HF_0.u32StartAddress = u32MCStartAddr;
		//gstMCDMAddr.stBuf_HF_0.u32StartAddress += 0x548800;  // mc_offset
	#if 1  // k4lp
		gstMCDMAddr.stBuf_HF_1.u32StartAddress = gstMCDMAddr.stBuf_HF_0.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_HF_2.u32StartAddress = gstMCDMAddr.stBuf_HF_1.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_HF_3.u32StartAddress = gstMCDMAddr.stBuf_HF_2.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_HF_4.u32StartAddress = gstMCDMAddr.stBuf_HF_3.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_HF_5.u32StartAddress = gstMCDMAddr.stBuf_HF_4.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
	#else
		gstMCDMAddr.stBuf_HF_1.u32StartAddress = gstMCDMAddr.stBuf_HF_0.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_HF_2.u32StartAddress = gstMCDMAddr.stBuf_HF_1.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_HF_3.u32StartAddress = gstMCDMAddr.stBuf_HF_2.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_HF_4.u32StartAddress = gstMCDMAddr.stBuf_HF_3.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_HF_5.u32StartAddress = gstMCDMAddr.stBuf_HF_4.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;
	#endif

#ifdef REAL_CHIP
		gstMCDMAddr.stBuf_HF_6.u32StartAddress = gstMCDMAddr.stBuf_HF_5.u32StartAddress;
		gstMCDMAddr.stBuf_HF_7.u32StartAddress = gstMCDMAddr.stBuf_HF_5.u32StartAddress;
#else
		gstMCDMAddr.stBuf_HF_6.u32StartAddress = gstMCDMAddr.stBuf_HF_5.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_HF_7.u32StartAddress = gstMCDMAddr.stBuf_HF_6.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
#endif

	#if 1  // k4lp
		gstMCDMAddr.stBuf_LF_0.u32StartAddress = gstMCDMAddr.stBuf_HF_7.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_LF_1.u32StartAddress = gstMCDMAddr.stBuf_LF_0.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_LF_2.u32StartAddress = gstMCDMAddr.stBuf_LF_1.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_LF_3.u32StartAddress = gstMCDMAddr.stBuf_LF_2.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_LF_4.u32StartAddress = gstMCDMAddr.stBuf_LF_3.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_LF_5.u32StartAddress = gstMCDMAddr.stBuf_LF_4.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
	#else
		gstMCDMAddr.stBuf_LF_0.u32StartAddress = gstMCDMAddr.stBuf_HF_7.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_LF_1.u32StartAddress = gstMCDMAddr.stBuf_LF_0.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_LF_2.u32StartAddress = gstMCDMAddr.stBuf_LF_1.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_LF_3.u32StartAddress = gstMCDMAddr.stBuf_LF_2.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_LF_4.u32StartAddress = gstMCDMAddr.stBuf_LF_3.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_LF_5.u32StartAddress = gstMCDMAddr.stBuf_LF_4.u32StartAddress + VD_MODE_KMC_LR_OFFSET_ADDR * 2;

		gstMCDMAddr.u32LineOffset = VD_MODE_KMC_LINE_OFFSET_ADDR;
		gstMCDMAddr.u32LROffset = VD_MODE_KMC_LR_OFFSET_ADDR;
	#endif

#ifdef REAL_CHIP
		gstMCDMAddr.stBuf_LF_6.u32StartAddress = gstMCDMAddr.stBuf_LF_5.u32StartAddress;
		gstMCDMAddr.stBuf_LF_7.u32StartAddress = gstMCDMAddr.stBuf_LF_5.u32StartAddress;
#else
		gstMCDMAddr.stBuf_LF_6.u32StartAddress = gstMCDMAddr.stBuf_LF_5.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_LF_7.u32StartAddress = gstMCDMAddr.stBuf_LF_6.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
#endif

		Mid_DM_SetKMCStartAddress(&gstMCDMAddr);
		Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset_VDHF, gstMCDMAddr.u32LROffset_VDHF,
								   gstMCDMAddr.u32LineOffset_VDLF, gstMCDMAddr.u32LROffset_VDLF);
#else
	#if IC_K6LP
		gstMCDMAddr.stBuf_LF_0.u32StartAddress = u32MCStartAddr;
		gstMCDMAddr.stBuf_HF_0.u32StartAddress = gstMCDMAddr.stBuf_LF_0.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;//u32LROffset_VDHF & u32LROffset_VDLF is reversed

		gstMCDMAddr.stBuf_LF_1.u32StartAddress = gstMCDMAddr.stBuf_HF_0.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_HF_1.u32StartAddress = gstMCDMAddr.stBuf_LF_1.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;

		gstMCDMAddr.stBuf_LF_2.u32StartAddress = gstMCDMAddr.stBuf_HF_1.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_HF_2.u32StartAddress = gstMCDMAddr.stBuf_LF_2.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;

		gstMCDMAddr.stBuf_LF_3.u32StartAddress = gstMCDMAddr.stBuf_HF_2.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_HF_3.u32StartAddress = gstMCDMAddr.stBuf_LF_3.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;

		gstMCDMAddr.stBuf_LF_4.u32StartAddress = gstMCDMAddr.stBuf_HF_3.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_HF_4.u32StartAddress = gstMCDMAddr.stBuf_LF_4.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;

		gstMCDMAddr.stBuf_LF_5.u32StartAddress = gstMCDMAddr.stBuf_HF_4.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
		gstMCDMAddr.stBuf_HF_5.u32StartAddress = gstMCDMAddr.stBuf_LF_5.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
	#else  // k4lp
		gstMCDMAddr.stBuf_LF_0.u32StartAddress = u32MCStartAddr;
		gstMCDMAddr.stBuf_HF_0.u32StartAddress = gstMCDMAddr.stBuf_LF_0.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;//u32LROffset_VDHF & u32LROffset_VDLF is reversed

		gstMCDMAddr.stBuf_LF_1.u32StartAddress = gstMCDMAddr.stBuf_HF_0.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_HF_1.u32StartAddress = gstMCDMAddr.stBuf_LF_1.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;

		gstMCDMAddr.stBuf_LF_2.u32StartAddress = gstMCDMAddr.stBuf_HF_1.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_HF_2.u32StartAddress = gstMCDMAddr.stBuf_LF_2.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;

		gstMCDMAddr.stBuf_LF_3.u32StartAddress = gstMCDMAddr.stBuf_HF_2.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_HF_3.u32StartAddress = gstMCDMAddr.stBuf_LF_3.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;

		gstMCDMAddr.stBuf_LF_4.u32StartAddress = gstMCDMAddr.stBuf_HF_3.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_HF_4.u32StartAddress = gstMCDMAddr.stBuf_LF_4.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;

		gstMCDMAddr.stBuf_LF_5.u32StartAddress = gstMCDMAddr.stBuf_HF_4.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_HF_5.u32StartAddress = gstMCDMAddr.stBuf_LF_5.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
	#endif

#ifdef REAL_CHIP
		gstMCDMAddr.stBuf_LF_6.u32StartAddress = gstMCDMAddr.stBuf_LF_5.u32StartAddress;
		gstMCDMAddr.stBuf_HF_6.u32StartAddress = gstMCDMAddr.stBuf_HF_5.u32StartAddress;

		gstMCDMAddr.stBuf_LF_7.u32StartAddress = gstMCDMAddr.stBuf_LF_5.u32StartAddress;
		gstMCDMAddr.stBuf_HF_7.u32StartAddress = gstMCDMAddr.stBuf_HF_5.u32StartAddress;
#else
		gstMCDMAddr.stBuf_LF_6.u32StartAddress = gstMCDMAddr.stBuf_HF_5.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_HF_6.u32StartAddress = gstMCDMAddr.stBuf_LF_6.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;

		gstMCDMAddr.stBuf_LF_7.u32StartAddress = gstMCDMAddr.stBuf_HF_6.u32StartAddress + gstMCDMAddr.u32LROffset_VDLF * 2;
		gstMCDMAddr.stBuf_HF_7.u32StartAddress = gstMCDMAddr.stBuf_LF_7.u32StartAddress + gstMCDMAddr.u32LROffset_VDHF * 2;
#endif

		Mid_DM_SetKMCStartAddress(&gstMCDMAddr);
		Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset_VDHF, gstMCDMAddr.u32LROffset_VDHF,
								   gstMCDMAddr.u32LineOffset_VDLF, gstMCDMAddr.u32LROffset_VDLF);
#endif
	}
	else
	{
	#if 1  // k4lp
		gstMCDMAddr.stBuf_HF_0.u32StartAddress = u32MCStartAddr;
//		gstMCDMAddr.stBuf_HF_0.u32StartAddress += 0x548800;  // mc_offset
//		gstMCDMAddr.stBuf_HF_0.u32StartAddress = gstDMStartAddr.u32ME_StartAddress;
		gstMCDMAddr.stBuf_HF_1.u32StartAddress = gstMCDMAddr.stBuf_HF_0.u32StartAddress + gstMCDMAddr.u32LROffset_HF_PC * 2;
		gstMCDMAddr.stBuf_HF_2.u32StartAddress = gstMCDMAddr.stBuf_HF_1.u32StartAddress + gstMCDMAddr.u32LROffset_HF_PC * 2;
	#else
		gstMCDMAddr.stBuf_HF_0.u32StartAddress = u32MCStartAddr;
		gstMCDMAddr.stBuf_HF_1.u32StartAddress = gstMCDMAddr.stBuf_HF_0.u32StartAddress + PC_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_HF_2.u32StartAddress = gstMCDMAddr.stBuf_HF_1.u32StartAddress + PC_MODE_KMC_LR_OFFSET_ADDR * 2;
	#endif
		gstMCDMAddr.stBuf_HF_3.u32StartAddress = gstMCDMAddr.stBuf_HF_2.u32StartAddress;
		gstMCDMAddr.stBuf_HF_4.u32StartAddress = gstMCDMAddr.stBuf_HF_3.u32StartAddress;
		gstMCDMAddr.stBuf_HF_5.u32StartAddress = gstMCDMAddr.stBuf_HF_4.u32StartAddress;
		gstMCDMAddr.stBuf_HF_6.u32StartAddress = gstMCDMAddr.stBuf_HF_5.u32StartAddress;
		gstMCDMAddr.stBuf_HF_7.u32StartAddress = gstMCDMAddr.stBuf_HF_6.u32StartAddress;

	#if 1  // k4lp
		gstMCDMAddr.stBuf_LF_0.u32StartAddress = gstMCDMAddr.stBuf_HF_5.u32StartAddress + gstMCDMAddr.u32LROffset_HF_PC * 2;
		gstMCDMAddr.stBuf_LF_1.u32StartAddress = gstMCDMAddr.stBuf_LF_0.u32StartAddress + gstMCDMAddr.u32LROffset_LF_PC * 2;
		gstMCDMAddr.stBuf_LF_2.u32StartAddress = gstMCDMAddr.stBuf_LF_1.u32StartAddress + gstMCDMAddr.u32LROffset_LF_PC * 2;
	#else
		gstMCDMAddr.stBuf_LF_0.u32StartAddress = gstMCDMAddr.stBuf_HF_5.u32StartAddress + PC_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_LF_1.u32StartAddress = gstMCDMAddr.stBuf_LF_0.u32StartAddress + PC_MODE_KMC_LR_OFFSET_ADDR * 2;
		gstMCDMAddr.stBuf_LF_2.u32StartAddress = gstMCDMAddr.stBuf_LF_1.u32StartAddress + PC_MODE_KMC_LR_OFFSET_ADDR * 2;

		gstMCDMAddr.u32LineOffset = PC_MODE_KMC_LINE_OFFSET_ADDR;
		gstMCDMAddr.u32LROffset = PC_MODE_KMC_LR_OFFSET_ADDR;
	#endif
		gstMCDMAddr.stBuf_LF_3.u32StartAddress = gstMCDMAddr.stBuf_LF_2.u32StartAddress;
		gstMCDMAddr.stBuf_LF_4.u32StartAddress = gstMCDMAddr.stBuf_LF_3.u32StartAddress;
		gstMCDMAddr.stBuf_LF_5.u32StartAddress = gstMCDMAddr.stBuf_LF_4.u32StartAddress;
		gstMCDMAddr.stBuf_LF_6.u32StartAddress = gstMCDMAddr.stBuf_LF_5.u32StartAddress;
		gstMCDMAddr.stBuf_LF_7.u32StartAddress = gstMCDMAddr.stBuf_LF_6.u32StartAddress;

		Mid_DM_SetKMCStartAddress(&gstMCDMAddr);
		/*Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset_PC, gstMCDMAddr.u32LROffset_PC,
								   gstMCDMAddr.u32LineOffset_PC, gstMCDMAddr.u32LROffset_PC);*/
		Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset_HF_PC, gstMCDMAddr.u32LROffset_HF_PC,
								   gstMCDMAddr.u32LineOffset_LF_PC, gstMCDMAddr.u32LROffset_LF_PC);
	}

	//Mid_DM_SetKMCStartAddress(&gstMCDMAddr);
	//Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset, gstMCDMAddr.u32LROffset);

	if(Scaler_MEMC_GetInitFlag() == 0){
		Mid_DM_SetKMCEngineEnable(TRUE);
		MEMC_LibSetMEMCFrameRepeatEnable((gstAppData.stMEMCData.enMemcMode==MEMC_OFF ||gstAppData.stMEMCData.enMemcMode==MEMC_MODE_MAX), 1);
	}
}
#if (IC_K5LP || IC_K6LP)
static VOID _MEMC_LibSetME1RPTDMAddress(UINT32 u32ME1RPTStartAddr)
{
	#if (IC_K6LP)
	gstME1RPTDMAddr.u32Buf_PPFV_LineOffset= 0xC0;
	gstME1RPTDMAddr.u32Buf_PFV_LineOffset= 0xC0;
	#else
	//====== only for k5lp memory bug
	gstME1RPTDMAddr.u32Buf_PPFV_LineOffset= 0x00;
	gstME1RPTDMAddr.u32Buf_PFV_LineOffset= 0x00;
	//================
	#endif

	gstME1RPTDMAddr.stBuf_PPFV_0.u32StartAddress= u32ME1RPTStartAddr;
	gstME1RPTDMAddr.stBuf_PPFV_1.u32StartAddress = gstME1RPTDMAddr.stBuf_PPFV_0.u32StartAddress + MEMC_KME1_RPT_PPFV_SHIFT;
	gstME1RPTDMAddr.stBuf_PFV_0.u32StartAddress = gstME1RPTDMAddr.stBuf_PPFV_1.u32StartAddress + MEMC_KME1_RPT_PPFV_SHIFT;
	gstME1RPTDMAddr.stBuf_PFV_1.u32StartAddress = gstME1RPTDMAddr.stBuf_PFV_0.u32StartAddress + MEMC_KME1_RPT_PFV_SHIFT;
	gstME1RPTDMAddr.stBuf_PFV_2.u32StartAddress = gstME1RPTDMAddr.stBuf_PFV_1.u32StartAddress + MEMC_KME1_RPT_PFV_SHIFT;

	gstME1RPTDMAddr.stBuf_PPFV_0.u32EndAddress = gstME1RPTDMAddr.stBuf_PPFV_0.u32StartAddress + MEMC_KME1_RPT_PPFV_SHIFT;
	gstME1RPTDMAddr.stBuf_PPFV_1.u32EndAddress = gstME1RPTDMAddr.stBuf_PPFV_1.u32StartAddress + MEMC_KME1_RPT_PPFV_SHIFT;
	gstME1RPTDMAddr.stBuf_PFV_0.u32EndAddress =  gstME1RPTDMAddr.stBuf_PFV_0.u32StartAddress + MEMC_KME1_RPT_PFV_SHIFT;
	gstME1RPTDMAddr.stBuf_PFV_1.u32EndAddress = gstME1RPTDMAddr.stBuf_PFV_1.u32StartAddress + MEMC_KME1_RPT_PFV_SHIFT;
	gstME1RPTDMAddr.stBuf_PFV_2.u32EndAddress = gstME1RPTDMAddr.stBuf_PFV_2.u32StartAddress + MEMC_KME1_RPT_PFV_SHIFT;



	Mid_DM_SetKME1RPTStartAddress(&gstME1RPTDMAddr);
	Mid_DM_SetKME1RPTEndAddress(&gstME1RPTDMAddr);
	Mid_DM_SetKME1RPTOffsetAddress(&gstME1RPTDMAddr);
}

static VOID _MEMC_LibSetIPMEDMAddress(UINT32 u32IPMEStartAddr)
{
	gstIPMEDMAddr.u32Buf_IPME_LineOffset= 0x60;
	//====== only for k5lp memory bug
	gstIPMEDMAddr.u32Buf_IPME_LineOffset= 0x00;
	//================

	gstIPMEDMAddr.stBuf_IPME_0.u32StartAddress = u32IPMEStartAddr;
	gstIPMEDMAddr.stBuf_IPME_1.u32StartAddress = gstIPMEDMAddr.stBuf_IPME_0.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_2.u32StartAddress = gstIPMEDMAddr.stBuf_IPME_1.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_3.u32StartAddress = gstIPMEDMAddr.stBuf_IPME_2.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_4.u32StartAddress = gstIPMEDMAddr.stBuf_IPME_3.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_5.u32StartAddress = gstIPMEDMAddr.stBuf_IPME_4.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_6.u32StartAddress = gstIPMEDMAddr.stBuf_IPME_5.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_7.u32StartAddress = gstIPMEDMAddr.stBuf_IPME_6.u32StartAddress + MEMC_IPME_SHIFT;

	gstIPMEDMAddr.stBuf_IPME_0.u32EndAddress= gstIPMEDMAddr.stBuf_IPME_0.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_1.u32EndAddress = gstIPMEDMAddr.stBuf_IPME_1.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_2.u32EndAddress = gstIPMEDMAddr.stBuf_IPME_2.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_3.u32EndAddress =  gstIPMEDMAddr.stBuf_IPME_3.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_4.u32EndAddress = gstIPMEDMAddr.stBuf_IPME_4.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_5.u32EndAddress = gstIPMEDMAddr.stBuf_IPME_5.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_6.u32EndAddress = gstIPMEDMAddr.stBuf_IPME_6.u32StartAddress + MEMC_IPME_SHIFT;
	gstIPMEDMAddr.stBuf_IPME_7.u32EndAddress = gstIPMEDMAddr.stBuf_IPME_7.u32StartAddress + MEMC_IPME_SHIFT;


	Mid_DM_SetIPMEStartAddress(&gstIPMEDMAddr);
	Mid_DM_SetIPMEEndAddress(&gstIPMEDMAddr);
	Mid_DM_SetIPMEOffsetAddress(&gstIPMEDMAddr);
}
#endif
/**
 * @brief This function must be invoked when boot up.(boot sequence: MEMC_LibPanel_Init -> MEMC_LibSetPanelParameters -> MEMC_LibInit)
 * @retval VOID
*/
VOID MEMC_LibPanel_Init(VOID)
{
	UINT16 u16Idx = 0;
#ifndef REAL_CHIP	// FPGA
	#if 0  // k4lp
		PANEL_PARAMETERS_ST stPanel_Para;
	#else
		PANEL_PARA_ST stPanel_Para;
	#endif
#endif
	for(u16Idx = 0; u16Idx < OUTPUT_FRAMERATE_MAX; u16Idx++)
	{
		gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate = OUTPUT_FRAMERATE_INVALID;
	}
#ifndef REAL_CHIP	// FPGA
	stPanel_Para.enOutputFrameRate = OUTPUT_120HZ;
	stPanel_Para.u32Htotal = Get_DISP_HORIZONTAL_TOTAL()/2;
	stPanel_Para.u32HtotalMax = 2400;
	stPanel_Para.u32HtotalMin = 2000;
	stPanel_Para.u32Hactive = 1920;
	stPanel_Para.u32HSWidth = 64;
	stPanel_Para.u32HSBPorch = 168;
	stPanel_Para.u32Vtotal = 1125;
	stPanel_Para.u32VtotalMax = 1150;
	stPanel_Para.u32VtotalMin = 1100;
	stPanel_Para.u32Vactive = 1080;
	stPanel_Para.u32VSWidth = 8;
	stPanel_Para.u32VSBPorch = 35;

	MEMC_LibSetPanelParameters(&stPanel_Para);

	stPanel_Para.enOutputFrameRate = OUTPUT_60HZ;
	stPanel_Para.u32Htotal = Get_DISP_HORIZONTAL_TOTAL();
	stPanel_Para.u32HtotalMax = 4800;
	stPanel_Para.u32HtotalMin = 4000;
	stPanel_Para.u32Hactive = 3840;
	stPanel_Para.u32HSWidth = 64;
	stPanel_Para.u32HSBPorch = 168;
	stPanel_Para.u32Vtotal = 1125;
	stPanel_Para.u32VtotalMax = 1150;
	stPanel_Para.u32VtotalMin = 1100;
	stPanel_Para.u32Vactive = 1080;
	stPanel_Para.u32VSWidth = 8;
	stPanel_Para.u32VSBPorch = 35;

#if 1  // k4lp
	MEMC_LibSetPanelParameters(&stPanel_Para);

	stPanel_Para.enOutputFrameRate = OUTPUT_FRAMERATE_FPGA30HZ;
	stPanel_Para.u32Htotal = Get_DISP_HORIZONTAL_TOTAL();
	stPanel_Para.u32HtotalMax = 4800;
	stPanel_Para.u32HtotalMin = 4000;
	stPanel_Para.u32Hactive = 3840;
	stPanel_Para.u32HSWidth = 64;
	stPanel_Para.u32HSBPorch = 168;
	stPanel_Para.u32Vtotal = 2250;
	stPanel_Para.u32VtotalMax = 2500;
	stPanel_Para.u32VtotalMin = 2000;
	stPanel_Para.u32Vactive = 2160;
	stPanel_Para.u32VSWidth = 8;
	stPanel_Para.u32VSBPorch = 35;
#endif

	MEMC_LibSetPanelParameters(&stPanel_Para);

#endif
}

/*! MEMC Library exported api list */
/**
 * @brief This function must be invoked when boot up.(boot sequence: MEMC_LibPanel_Init -> MEMC_LibSetPanelParameters -> MEMC_LibInit)
 * @retval TRUE 		indicates success
 * @retval FALSE		indicates fail.
*/
unsigned char MEMC_BRING_UP_InitDone_flag = 0;
extern unsigned int Get_DISPLAY_REFRESH_RATE(void);

BOOL MEMC_LibInit(VOID)
{
	BOOL	bRet = TRUE;

#if 1

#if 0  // kiwi_k4lp
	//SCHAR 	scBuf[60];
#else
	SCHAR 	scBuf[60];
#endif

#ifdef WIN32
	InitPrintf();
#endif
	MEMC_LibGetVersionInfo(scBuf, 60, MODULE_ID_APP);
	//LogPrintf(DBG_MSG,"%s\r\n", scBuf);
	MEMC_LibGetVersionInfo(scBuf, 60, MODULE_ID_FRC);
	//LogPrintf(DBG_MSG,"%s\r\n", scBuf);
	//LogPrintf(DBG_MSG, "MEMC lib init...\r\n");
	/* Load app data */
	// do later
	/* Load default table */
#ifdef REAL_CHIP	// real chip
	#ifdef USE_LOAD_HDF
		Mid_DM_SetKMEVbufEnable(FALSE); // rtd_clearbits(0xb809B210,_BIT0); // vbuf_en
		HAL_HDF_Load();
//		MEMC_Lib_LoadBringUpScript_HDF();
	#else
		#include "memc_isr/include/hdf.tbl"
	#endif
	MEMC_SetRTKhdf();
	// enable LBMC DB
	//MEMC_LibSet_MCDMA_DB_en(1);
	//====

	if( Get_DISPLAY_REFRESH_RATE() == 60 )
	{
		Mid_Mode_Driver_SetME1_Candidate(_ME1_Candidate_Table_60Hz);
		Mid_Mode_Driver_SetME2_Candidate(_ME2_Candidate_Table_60Hz);
	}
	else
	{
		Mid_Mode_Driver_SetME1_Candidate(_ME1_Candidate_Table_120Hz);
		Mid_Mode_Driver_SetME2_Candidate(_ME2_Candidate_Table_120Hz);
	}

	MEMC_LibRTK_init_PQL_0();
	MEMC_LibRTK_init_PQL_1();
	MEMC_LibRTK_init_software();

#endif
	/* Init FRC library */
	PQL_Init();
#ifndef REAL_CHIP	// FPGA
	MEMC_LibPanel_Init();
#endif
	if( Get_DISPLAY_REFRESH_RATE() == 60 ){
		MEMC_LibSetInOutFrameRate(INPUT_60HZ, OUTPUT_60HZ);
	}
	else{
		MEMC_LibSetInOutFrameRate(INPUT_60HZ, OUTPUT_120HZ);
	}
	
	Scaler_MEMC_DMA_DB_Check();
#if 1  // kiwi_k4lp	
	MEMC_LibSetDMStartAddr(gstDMAddrAllocate.u32MEStart);	//set memc dm start address	
	printk(KERN_EMERG"[jerry_MEMC_LibSetDM][%s][%d][MC0Start]=[,%x,]\n", __FUNCTION__, __LINE__, gstDMAddrAllocate.u32MC0Start);
	printk(KERN_EMERG"[jerry_MEMC_LibSetDM][%s][%d][MC1Start]=[,%x,]\n", __FUNCTION__, __LINE__, gstDMAddrAllocate.u32MC1Start);
	printk(KERN_EMERG"[jerry_MEMC_LibSetDM][%s][%d][MEStart]=[,%x,]\n", __FUNCTION__, __LINE__, gstDMAddrAllocate.u32MEStart);
	
	MEMC_LibSetDMMode(1);	// more cpr and 3d disable
	Scaler_MEMC_Set_ME_MEMBoundary(gstDMStartAddr.u32ME_StartAddress, (gstDMStartAddr.u32ME_StartAddress+KME_TOTAL_SIZE));	
	_MEMC_LibSetMEDMAddress(gstDMStartAddr.u32ME_StartAddress);
	_MEMC_LibSetMVDMAddress(gstDMStartAddr.u32MV_StartAddress);

	#if (IC_K5LP || IC_K6LP)
	MEMC_LibSetMEShareDMStartAddr(gstDMAddrAllocate.u32ME1RPTStart,gstDMAddrAllocate.u32IPMEStart);
	_MEMC_LibSetME1RPTDMAddress(gstDMStartAddr.u32MERPT_StartAddress);
	_MEMC_LibSetIPMEDMAddress(gstDMStartAddr.u32IPME_StartAddress);
	#endif

	MEMC_LibSetInOutMode(MEMC_RGB_IN_VIDEO_OUT,TRUE);
#else
	_MEMC_LibSetMEDMAddress(gstDMAddrAllocate.u32MEStart);
	_MEMC_LibSetMVDMAddress(MV_START_ADDR);

	MEMC_LibSetInOutMode(MEMC_RGB_IN_VIDEO_OUT,TRUE);
#endif

#ifdef REAL_CHIP	// real chip
	MEMC_LibSetInOutUseCase(INPUT_3840X2160, OUTPUT_3840X2160, INPUT_2D, OUTPUT_2D);
#else
	MEMC_LibSetInOutUseCase(INPUT_1920X1080, OUTPUT_1920X1080, INPUT_2D, OUTPUT_2D);
#endif

#ifdef REAL_CHIP	// real chip
	#if !IC_K6LP
	// Use mute sync
	Mid_MISC_SetUseMuteSyncEnable(TRUE);
	// Enable mute detect
	Mid_MISC_SetMuteDetectEnable(TRUE);
	#endif
#endif
	// Enable in/out Hsync interrupt
	Mid_MISC_SetInINTEnable(INT_TYPE_HSYNC, FALSE);
	Mid_MISC_SetOutINTEnable(INT_TYPE_HSYNC, FALSE);
	// Enable in/out Vsync interrupt
	//Mid_MISC_SetInINTEnable(INT_TYPE_VSYNC, TRUE);
	//Mid_MISC_SetOutINTEnable(INT_TYPE_VSYNC, TRUE);
	MEMC_LibSetMEMCMode(MEMC_SMOOTH);

	// fix me  // load phase table
	//MEMC_LoadPhase();
//	MEMC_LoadScript();
	MEMC_SYS_Delay(3);
//	MEMC_LoadScriptDMA();

	if( Get_DISPLAY_REFRESH_RATE() == 60 ){
		MEMC_Lib_LoadBringUpScript_cs_2x2_all_on_60hz();
	}else{
		//============  120Hz setting!! =======================
		//MEMC_Lib_LoadBringUp_cadidate_setting_120hz();
		MEMC_Lib_LoadBringUpScript_cs_2x2_all_on_120hz();
	}
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_cs_2x2_all_on][%s][%d][%x]\n",__FUNCTION__, __LINE__, rtd_inl(0xb809d100));

	MEMC_Lib_LoadBringUpScript_Enable_DMA();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_Enable_DMA][%s][%d][%x]\n",__FUNCTION__, __LINE__, rtd_inl(0xb809d100));
	MEMC_LibSet_LBMC_DB_en(1);
	MEMC_LibSet_PQC_DB_en(1);
	MEMC_LibSet_MCDMA_DB_en(1);

#else
	MEMC_Lib_LoadBringUpScript_HDF();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_HDF]\n");

	MEMC_Lib_LoadBringUpScript_PhaseTable();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_PhaseTable]\n");

	MEMC_Lib_LoadBringUpScript_MemoryAddress();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_MemoryAddress]\n");

	MEMC_Lib_LoadBringUpScript_Disable_DMA();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_Disable_DMA]\n");

	MEMC_Lib_LoadBringUpScript_LineStep();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_LineStep]\n");

	MEMC_Lib_LoadBringUpScript_cs_2x2_all_on();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_cs_2x2_all_on]\n");

	MEMC_Lib_LoadBringUpScript_Enable_DMA();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_Enable_DMA]\n");

#endif

	MEMC_BRING_UP_InitDone_flag = 1; // 1;

	return bRet;
}

/**
 * @brief This function must be last invoked api. No api should be invoked after library deinit. This function deinit MEMC library stack.
 * @retval TRUE 		indicates success
 * @retval FALSE		indicates fail.
*/
BOOL MEMC_LibDeInit(VOID)
{
	BOOL	bRet = TRUE;

	//bRet = Drv_IIC_Close();
	return bRet;
}

/**
 * @brief This function defines operation during input HS SINT32errupt procedure. Must be invoked after input HS SINT32errupt happened.
 *
*/
VOID MEMC_LibInputHSInterrupt(VOID)
{
}

/**
 * @brief This function defines input hsync interrput line num.
 * @param [in] u32LineNum	   Specify hsync interrupt line num.
 *
*/
VOID MEMC_LibInputHSInterruptLineNum(UINT32 u32LineNum)
{
	Mid_MISC_SetInINTHnum(u32LineNum);
}

/**
 * @brief This function defines input hsync interrput enable or not.
 * @param [in] bEnable		enable or disable the input hync interrupt
 *
*/
VOID MEMC_LibInputHSInterruptEnable(BOOL bEnable)
{
	Mid_MISC_SetInINTEnable(INT_TYPE_HSYNC, bEnable);
}

/**
 * @brief This function defines operation during input vsync procedure.
 *
*/
#ifdef CONFIG_MEMC_ISR_CNT_MAX

typedef enum{
	MONITOR_STATUS_NORMAL = 0,
	MONITOR_STATUS_ERROR
}ENUM_MEMC_MONITOR_STATUS;

static ENUM_MEMC_MONITOR_STATUS g_memc_in_status = MONITOR_STATUS_NORMAL;
static ENUM_MEMC_MONITOR_STATUS g_memc_out_status = MONITOR_STATUS_NORMAL;
static int64_t s_memc_in_dis_tm = 0;
static int64_t s_memc_out_dis_tm = 0;
extern int64_t MEMC_GetPTS(void);
static int g_memc_mear_cnt = 0;
static void start_tm_mear(void)
{
	unsigned int v = 0;
	/*enable kmc measure*/
	v = rtd_inl(0xb8099018);
	v = (v & 0xfff80007) | 0x4078;//en =1,sel=7,vtotal=0x80
	rtd_outl(0xb8099018,v);
	/*enable kpost measure*/
	v = rtd_inl(0xb809d004);
	v = (v & 0x0000ffff) | 0x080f0000;//en =1,sel=7,vtotal=0x80
	rtd_outl(0xb809d004,v);
	if(g_memc_mear_cnt < 0)
		g_memc_mear_cnt = 0;
	g_memc_mear_cnt++;
}

static void stop_tm_mear(void)
{
	unsigned int v = 0,sKmcTotalH = 0,sKmcActH = 0,sKmcTotalV = 0,sKmcActV = 0,sPostTotalH = 0,sPostActH = 0,sPostTotalV = 0,sPostActV = 0;

	if(g_memc_mear_cnt <= 0){
		g_memc_mear_cnt = 0;
		return;
	}
	/*read measure result*/
	rtd_outl(0xb8099018,rtd_inl(0xb8099018) & ~_BIT6);
	v = rtd_inl(0xb80990f4);
	sKmcActH = v & 0xfff;
	sKmcActV = (v >> 12) & 0xfff;
	v = rtd_inl(0xb80990f8);
	sKmcTotalH = v & 0xfff;
	sKmcTotalV = (v >> 12) & 0xfff;
	rtd_outl(0xb809d004,rtd_inl(0xb809d004) & ~_BIT19);
	v = rtd_inl(0xb809d0ec);
	sPostActH = v & 0xfff;
	sPostActV = (v >> 12) & 0xfff;
	v = rtd_inl(0xb809d0f0);
	sPostTotalH = v & 0xfff;
	sPostTotalV = (v >> 12) & 0xfff;
	/*print timing measure*/
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "Timing[in:Act(V=%d,H=%d),Total(V=%d,H=%d);out:Act(V=%d,H=%d),Total(V=%d,H=%d)]\n",\
		sKmcActV,sKmcActH,sKmcTotalV,sKmcTotalH,sPostActV,sPostActH,sPostTotalV,sPostTotalH);
	g_memc_mear_cnt--;
}

static void print_monitor_debug(int fInIsr)
{
	if(fInIsr){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "==============In ISR Debug info==============\n");
	}else{
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "==============Out ISR Debug info==============\n");
	}
	/*dtg settings*/
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "DTG[Master:V=0x%08x,H=0x%08x;UZU:V=0x%08x,H=0x%08x;MEMC:V=0x%08x,H=0x%08x]\n",\
			rtd_inl(0xb8028014),rtd_inl(0xb802800c),\
			rtd_inl(0xb8028504),rtd_inl(0xb8028508),\
			rtd_inl(0xb8028604),rtd_inl(0xb8028608));
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "DTG[0xB8028000=0x%08x,0xB8028248=0x%08x]\n",rtd_inl(0xB8028000),rtd_inl(0xb8028248));
	/*memc interrupt*/
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "ISR[0xB8099018=0x%08x,0xB809d008=0x%08x,0xB80991f4=0x%08x,0xb80990f8=0x%08x,0xb809d0f0=0x%08x]\n",\
				rtd_inl(0xB8099018),rtd_inl(0xB809d008),rtd_inl(0xB80991f4),rtd_inl(0xb80990f8),rtd_inl(0xb809d0f0));
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "FrameRate[in=%d,out=%d]\n",rtd_inl(0xB80282e4),rtd_inl(0xB80282ec));
}
#endif
UINT32 loadscript_cnt = 0;
UINT32 loadscript_cnt_2 = 0;
unsigned char u1_DoPowerSaving = 0;
extern unsigned char MEMC_instanboot_resume_done_jerry;
extern unsigned char MEMC_isr_resume_done_jerry;
VOID MEMC_LibInputVSInterrupt(VOID)
{
#ifdef MEMC_BRING_UP // bring_up_test
	static unsigned int test_cnt = 0;
	unsigned int test_en = 0;
	test_en = (rtd_inl(0xb809d700)>>31)&0x1;
//	if(test_en == 1){
	if(MEMC_BRING_UP_InitDone_flag == 1){
		//rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][%s][%x][90k=%x]\n", __FUNCTION__, rtd_inl(0xB809b210), rtd_inl(0xB801B6B8));
		test_cnt = 0; // 1;
//		rtd_clearbits(0xb809d700, _BIT31);
		MEMC_BRING_UP_InitDone_flag = 2;
	}

	if(test_cnt > 0){
		test_cnt++;
		if(test_cnt > 100000){
			test_cnt = 0;
		}
		if(test_cnt <= 300){
//		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][%s][%d][90k=%x]\n", __FUNCTION__, test_cnt, rtd_inl(0xB801B6B8));
		}
	}

	if(test_cnt == 300){
//		MEMC_Lib_LoadBringUpScript_HDF();
//		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_HDF]\n");
	}
	if(test_cnt == 330){
//		MEMC_Lib_LoadBringUpScript_PhaseTable();
//		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_PhaseTable]\n");
	}
	if(test_cnt == 360){
//		MEMC_Lib_LoadBringUpScript_MemoryAddress();
//		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_MemoryAddress]\n");
	}
	if(test_cnt == 539){
//		MEMC_Lib_LoadBringUpScript_Disable_DMA();
//		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_Disable_DMA]\n");
	}
	if(test_cnt == 540){
//		MEMC_Lib_LoadBringUpScript_LineStep();
//		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_LineStep]\n");
	}
	if(test_cnt == 570){
//		MEMC_Lib_LoadBringUpScript_cs_2x2_all_on();
//		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_cs_2x2_all_on]\n");
	}
	if(test_cnt == 600){
//		MEMC_Lib_LoadBringUpScript_Enable_DMA();
//		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_Enable_DMA]\n");
//		MEMC_BRING_UP_InitDone_flag = 3; // 3;
	}
#endif
	loadscript_cnt_2 ++;

	if(loadscript_cnt_2 == 100){
		// enable isr
//		rtd_setbits(0xb809d5fc, BIT(29));
//		rtd_setbits(0xb809d5fc, BIT(30));
//		rtd_setbits(0xb809d5fc, BIT(31));
	}

	if(loadscript_cnt_2 % 6000 == 1){
		//printk(KERN_EMERG"[jerry_MEMC_LibInputVSInterrupt][%s][%d][,%d,]\n", __FUNCTION__, __LINE__, loadscript_cnt_2);
	}

	if(loadscript_cnt_2 == 800){
		u1_DoPowerSaving = 1;
	}

	if(MEMC_isr_resume_done_jerry == 1){
		u1_DoPowerSaving = 0;
	}
	if(MEMC_instanboot_resume_done_jerry == 1){
		u1_DoPowerSaving = 0;
	}

	if(loadscript_cnt_2 > 800000000){
		loadscript_cnt_2 = 800000000;
	}

#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
//====================================================
	unsigned int time1,time2,time3, time_stamp;
	static unsigned int time1s_set=0;
	static unsigned int time1s_start=0;
	static unsigned int time1s_end=0;
	static unsigned int time1s_cnt=0;
	static unsigned int exe_count=0;
	static unsigned int exe_count_out=0;
	static unsigned int time_stamp_pre = 0;

	unsigned int reg_value = 0;
	reg_value = rtd_inl(0xb802e4f8);

	if((reg_value & BIT(31))){
		time1 = rtd_inl(0xB801B6A8);
		if(time1s_set==0) {
			time1s_start = time1;
			time1s_set=1;
			time1s_cnt=0;
		}
		time1s_end = rtd_inl(0xB801B6A8);
	}
//====================================================
#endif
	//LogPrintf(DBG_MSG, "In vs interrupt\r\n");
	if(Mid_MISC_GetInINTStatus(INT_TYPE_VSYNC))
	{
		//LogPrintf(DBG_MSG,"IV\n");
		Mid_MISC_IntINTLock(INT_TYPE_VSYNC);
//#ifndef debug_MEMC_ISR
#if 1
		if(Mid_MISC_GetInINTEnable(INT_TYPE_VSYNC)/* && (MEMC_BRING_UP_InitDone_flag > 1)*/){
			MEMC_LibInputVSXral();
			MEMC_LibGetScalerVIPInfo();
			PQL_InputInterrupt_Proc(0);
		}
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
		if((reg_value & BIT(31))){
			do{
				time3=rtd_inl(0xB801B6A8);
			}while((time3-time1)<=5);
		}
#endif

#endif

		Mid_MISC_IntINTUnLock(INT_TYPE_VSYNC);
		Mid_MISC_IntINTCLear(INT_TYPE_VSYNC);
#ifdef CONFIG_MEMC_ISR_CNT_MAX
		if(Mid_MISC_GetInINTEnable(INT_TYPE_VSYNC)){
			static unsigned int sEnterCnt = 0;
			static int64_t sLastPts_1s = 0;
			int64_t currentPts = MEMC_GetPTS();

			sEnterCnt++;
			if(currentPts < sLastPts_1s){
				sLastPts_1s = currentPts;
				sEnterCnt = 0;
			}
			if(currentPts - sLastPts_1s > 90090){
				//LogPrintf(DBG_WARNING,"in(cnt:%d,%d,%d)'\n", sEnterCnt,g_memc_in_status,g_memc_out_status);
				if(sEnterCnt >= CONFIG_MEMC_IN_ISR_CNT_MAX){
					g_memc_in_status = MONITOR_STATUS_ERROR;
					rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[Warning]Enter 'MEMC_LibInputVSInterrupt' Count:[%d/s]\n", sEnterCnt);
					/*start time measure*/
					start_tm_mear();
					/*print debug infomation*/
					print_monitor_debug(1);
					/*disable isr*/
					Mid_MISC_SetInINTEnable(INT_TYPE_VSYNC,FALSE);
					s_memc_in_dis_tm = currentPts;
				}else{
					g_memc_in_status = MONITOR_STATUS_NORMAL;
				}
				sLastPts_1s = currentPts;
				sEnterCnt = 0;
			}
			if(g_memc_out_status == MONITOR_STATUS_ERROR){
				/*stop time measre and print tm info*/
				if(currentPts - s_memc_out_dis_tm > 3003)
					stop_tm_mear();
				/*resume isr while current flow is not at dc off*/
				if(currentPts - s_memc_out_dis_tm > 90090){
					Mid_MISC_SetOutINTEnable(INT_TYPE_VSYNC,TRUE);
					g_memc_out_status = MONITOR_STATUS_NORMAL;
					rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "Enable out isr.\n");
				}
			}
		}
#endif
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
if((reg_value & BIT(31))){

	//====================================================
	time2=rtd_inl(0xB801B6A8);
	time_stamp = rtd_inl(0xB801B6A8);
	if((exe_count%300==0)) {
		printk("[Input]MEMC timestamp %d(%d - %d)\n",(time_stamp - time_stamp_pre),time_stamp,time_stamp_pre);
		printk("[Input]MEMC flow time %d\n",time2-time1);
		exe_count = 0;
	}
	time_stamp_pre = time_stamp;
}
	//====================================================
#endif
	}

#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
if((reg_value & BIT(31))){

	//====================================================
	if((time1s_end-time1s_start)>=90000) {
		printk("[Input]MEMC isr %d times(%d CLK)\n",time1s_cnt, (time1s_end-time1s_start));
		time1s_set=0;
	}
}
#endif


}

/**
 * @brief This function defines input vsync interrupt enable or not.
 * @param [in] bEnable	   enable or disable the input vsync interrupt
*/
VOID MEMC_LibInputVSInterruptEnable(BOOL bEnable)
{
	Mid_MISC_SetInINTEnable(INT_TYPE_VSYNC, bEnable);
}

/**
 * @brief This function defines operation during output HS SINT32errupt procedure.
 *
*/
VOID MEMC_LibOutpuHSInterrupt(VOID)
{
}

/**
 * @brief This function defines output hsync interrupt line num.
 * @param [in] u32LineNum	   Specify hsync interrupt line num.
*/
VOID MEMC_LibOutpuHSInterruptLineNum(UINT32 u32LineNum)
{
	Mid_MISC_SetOutINTHnum(u32LineNum);
}

/**
 * @brief This function defines output hsync interrupt enable or not.
 * @param [in] bEnable	   enable or disable the out hync interrupt
*/
VOID MEMC_LibOutpuHSInterruptEnable(BOOL bEnable)
{
	Mid_MISC_SetOutINTEnable(INT_TYPE_HSYNC, bEnable);
}

//static UINT32 gu32VspllLockCount = 0;
/**
 * @brief This function defines operation during output VS procedure.
 *
*/
VOID MEMC_LibOutputVSInterrupt(VOID)
{
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	//====================================================
		unsigned int time1,time2, time3, time_stamp;
		static unsigned int time1s_set=0;
		static unsigned int time1s_start=0;
		static unsigned int time1s_end=0;
		static unsigned int time1s_cnt=0;
		static unsigned int exe_count=0;
		static unsigned int exe_count_out=0;
		static unsigned int time_stamp_pre = 0;

		unsigned int reg_value = 0;
		reg_value = rtd_inl(0xb802e4f8);

		if((reg_value & BIT(31))){
			time_stamp=rtd_inl(0xB801B6A8);
			time1 = rtd_inl(0xB801B6A8);
			if(time1s_set==0) {
				time1s_start = time1;
				time1s_set=1;
				time1s_cnt=0;
			}
			time1s_end = rtd_inl(0xB801B6A8);
		}
	//====================================================
#endif


	//LogPrintf(DBG_MSG, "Out vs interrupt\r\n");
	if(Mid_MISC_GetOutINTStatus(INT_TYPE_VSYNC))
	{
		//printk("[Output]memc_jimmy_test:MEMC_LibOutputVSInterrupt \n");
		//LogPrintf(DBG_MSG,"OV\n");
		Mid_MISC_OutINTLock(INT_TYPE_VSYNC);
#ifndef debug_MEMC_ISR
		if(Mid_MISC_GetInINTEnable(INT_TYPE_VSYNC) && Mid_MISC_GetOutINTEnable(INT_TYPE_VSYNC)/* && (MEMC_BRING_UP_InitDone_flag > 1)*/){
			u32OutIntCount++;
			if(u32OutIntCount == 1)
			{
				PQL_oneFifth_OutputInterrupt_Proc(0);
				PQL_OutputInterrupt_Proc(0);
			}
			else if(u32OutIntCount == 2)
			{
				PQL_oneFifth_OutputInterrupt_Proc(1);
				PQL_OutputInterrupt_Proc(1);
			}
			else if(u32OutIntCount == 3)
			{
				PQL_oneFifth_OutputInterrupt_Proc(2);
				PQL_OutputInterrupt_Proc(2);
			}
			else if(u32OutIntCount == 4)
			{
				PQL_oneFifth_OutputInterrupt_Proc(3);
				PQL_OutputInterrupt_Proc(3);
			}
			else if(u32OutIntCount == 5)
			{
				//printk("[Output]memc_jimmy_test:u32OutIntCount == 5 \n");
				PQL_oneFifth_OutputInterrupt_Proc(4);
				PQL_OutputInterrupt_Proc(4);
				u32OutIntCount = 0;
			}
			else // for quickstart or STR reason, must confirm u32OutIntCount is less than 5, LearnRPG@20151010
			{
				u32OutIntCount = 0;
			}
			//PQL_OutputInterrupt_Proc();
		}
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
		if((reg_value & BIT(31))){
			do{
				time3=rtd_inl(0xB801B6A8);
			}while((time3-time1)<=5);
		}
#endif


#endif
		Mid_MISC_OutINTUnLock(INT_TYPE_VSYNC);
		Mid_MISC_OutINTCLear(INT_TYPE_VSYNC);
#ifdef CONFIG_MEMC_ISR_CNT_MAX
		if(Mid_MISC_GetOutINTEnable(INT_TYPE_VSYNC)){
			static unsigned int sEnterCnt = 0;
			static int64_t sLastPts_1s = 0;
			int64_t currentPts = MEMC_GetPTS();

			sEnterCnt++;
			if(currentPts < sLastPts_1s){
				sLastPts_1s = currentPts;
				sEnterCnt = 0;
			}
			if(currentPts - sLastPts_1s > 90090){
				//LogPrintf(DBG_WARNING,"out(cnt:%d,%d,%d)'\n", sEnterCnt,g_memc_in_status,g_memc_out_status);
				if(sEnterCnt >= CONFIG_MEMC_OUT_ISR_CNT_MAX){
					/*start time measure*/
					start_tm_mear();
					g_memc_out_status = MONITOR_STATUS_ERROR;
					rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[Warning]Enter 'MEMC_LibOutputVSInterrupt' Count:[%d/s]\n", sEnterCnt);
					/*print debug infomation*/
					print_monitor_debug(0);
					/*disable isr*/
					Mid_MISC_SetOutINTEnable(INT_TYPE_VSYNC,FALSE);
					s_memc_out_dis_tm = currentPts;
				}else{
					g_memc_out_status = MONITOR_STATUS_NORMAL;
				}
				sLastPts_1s = currentPts;
				sEnterCnt = 0;
			}
			if(g_memc_in_status == MONITOR_STATUS_ERROR){
				/*stop time measre and print tm info*/
				if(currentPts - s_memc_in_dis_tm > 3003)
					stop_tm_mear();
				/*resume isr while current flow is not at dc off*/
				if(currentPts - s_memc_in_dis_tm > 90090){
					Mid_MISC_SetInINTEnable(INT_TYPE_VSYNC,TRUE);
					g_memc_in_status = MONITOR_STATUS_NORMAL;
					rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "Enable in isr.\n");
				}
			}
		}
#endif
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	//====================================================
if((reg_value & BIT(31))){
	time2=rtd_inl(0xB801B6A8);
	if(exe_count%300==0) {
		printk("[Output]MEMC timestamp %d(%d - %d)\n",(time_stamp - time_stamp_pre),time_stamp,time_stamp_pre);
		printk("[Output]MEMC flow time %d\n",time2-time1);
		exe_count = 0;
	}
	time_stamp_pre = time_stamp;
}
	//====================================================
#endif
	}

#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
if((reg_value & BIT(31))){
//====================================================
	if((time1s_end-time1s_start)>=90000) {
		printk("[Output]MEMC isr %d times(%d CLK)\n",time1s_cnt, (time1s_end-time1s_start));
		time1s_set=0;
	}
}
//====================================================
#endif


}

/**
 * @brief This function defines output vsync interrupt enable or not.
 * @param [in] bEnable	  enable or disable the out hync interrupt
*/
VOID MEMC_LibOutputVSInterruptEnable(BOOL bEnable)
{
	Mid_MISC_SetOutINTEnable(INT_TYPE_VSYNC, bEnable);
}

/**
 * @brief This function defines operation during Abnormal SINT32errupt procedure. Must be invoked after Abnormal SINT32errupt happened.
 *
*/
VOID MEMC_LibAbnormalInterrupt(VOID)
{
}

/**
 * @brief This function defines abnormal interrupt enable or not.
 * @param [in] bEnable	 enable or disable the abnormal interrupt
*/
VOID MEMC_LibAbnormalInterruptEnable(BOOL bEnable)
{
	Mid_MISC_SetInINTEnable(INT_TYPE_ABNORMAL, bEnable);
}

/**
 * @brief This function set MEMC in/out mode. (please add almost 25ms mute to avoid garbage)
 * @param [in] emom 		Specify in/out MEMC mode.
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibSetInOutMode(MEMC_INOUT_MODE emom,BOOL bForce)
{
	_PQL_Command Command;
	static unsigned char output_mode_pre = 0;
	if(bForce == TRUE || emom != gstAppData.stModeData.enInOutMode)
	{
		gstAppData.stModeData.enInOutMode = emom;

	#if 0
		Mid_Mode_SetInOutMode((INOUT_MODE)emom);
		Mid_Mode_SetMCBlend((INOUT_MODE)emom);
		Mid_Mode_ForceLBMCIdx((INOUT_MODE)emom, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);

		Mid_DM_SetKMCEngineEnable(FALSE);
		_MEMC_LibSetMCDMAddress(gstDMAddrAllocate.u32MC0Start);
		Mid_DM_SetKMCEndAddress(&gstMCDMAddr);
		Mid_DM_SetKMCEngineEnable(TRUE);

		Mid_DM_SetKMEEngineEnable(TRUE,
								  (INOUT_MODE)emom,
								  (INPUT_FORMAT)gstAppData.stModeData.enInputFormat,
								  (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
	#endif

		if((emom == MEMC_RGB_IN_VIDEO_OUT) || (emom == MEMC_YUV_IN_VIDEO_OUT))
		{
			Command._output_mode = _PQL_OUT_VIDEO_MODE;
		}
		else
		{
			Command._output_mode = _PQL_OUT_PC_MODE;
		}
		PQL_Command(PQL_CMD_OUTPUT_MODE, &Command);

	#if 1  // k4lp
		//kw_Delay_ms(20);
		#if !(IC_K5LP || IC_K6LP)
		Mid_DM_SetKMCEngineEnable(FALSE);
		#endif
		//kw_Delay_ms(20);
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[Mid_DM_SetKMC][%s][%d][StartAddress]=[,%x,]\n", __FUNCTION__, __LINE__, gstDMStartAddr.u32MC_StartAddress);
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[Mid_DM_SetKMC][%s][%d][EndAddress]=[,%x,]\n", __FUNCTION__, __LINE__, (gstDMStartAddr.u32MC_StartAddress + KMC_TOTAL_SIZE));		
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[Mid_DM_SetKMC][%s][%d][LineOffset_H,LROffset_H ]=[,%x,%x,]\n", __FUNCTION__, __LINE__, gstMCDMAddr.u32LineOffset_VDHF, gstMCDMAddr.u32LROffset_VDHF);
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[Mid_DM_SetKMC][%s][%d][LineOffset_L,LROffset_L ]=[,%x,%x,]\n", __FUNCTION__, __LINE__, gstMCDMAddr.u32LineOffset_VDLF, gstMCDMAddr.u32LROffset_VDLF);
		Scaler_MEMC_Set_MC_MEMBoundary(gstDMStartAddr.u32MC_StartAddress,(gstDMStartAddr.u32MC_StartAddress + KMC_TOTAL_SIZE));

		//-----------
		if(Command._output_mode != output_mode_pre){
			pr_notice("[%s] MEMC kpost mute cause out mode change !!(,%d,)->(,%d,)\n\r", __FUNCTION__, output_mode_pre, Command._output_mode);
			MEMC_LibBlueScreen(1);
		}
		//-----------
		_MEMC_LibSetMCDMAddress(gstDMStartAddr.u32MC_StartAddress);
		Mid_DM_SetKMCEndAddress(&gstMCDMAddr);
		//Scaler_MEMC_Set_MC_MEMBoundary(gstDMStartAddr.u32MC_StartAddress,(gstDMStartAddr.u32MC_StartAddress + KMC_TOTAL_SIZE));
		//kw_Delay_ms(20);
		//rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC_LibSetInOutMode => %d, %d\r\n", emom,gu8DM_Mode);
		Mid_Mode_SetInOutMode((INOUT_MODE)emom, gu8DM_Mode);
		Mid_Mode_SetMCBlend((INOUT_MODE)emom);
		Mid_Mode_ForceLBMCIdx((INOUT_MODE)emom, gstAppData.stModeData.enOutputFormat);
		Mid_Mode_SetMCPolyEnable((INOUT_MODE)emom, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
		//kw_Delay_ms(20);
		#if !(IC_K5LP || IC_K6LP)
		Mid_DM_SetKMEEngineEnable(TRUE,
								  emom,
								  gstAppData.stModeData.enInputFormat,
								  gstAppData.stModeData.enOutputFormat);
		Mid_DM_SetKMVEngineEnable(TRUE, (INOUT_MODE)emom);
		Mid_DM_SetKMCEngineEnable(TRUE);
		#endif
	#endif
		output_mode_pre = Command._output_mode;

		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function returns current MEMC In/Out mode.
 * @retval MEMC_INOUT_MODE		enum type value
*/
MEMC_INOUT_MODE MEMC_LibGetInOutMode(VOID)
{
	return (gstAppData.stModeData.enInOutMode);
}

/**
 * @brief This function set input/output format.
 * @param [in] emif 		Specify input format.
 * @param [in] emof 		Specify output format.
 * @param [in] bForce 		force to change the format or not.
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
extern UINT8 MEMC_First_Run_force_SetInOutUseCase_Done;
static BOOL _MEMC_LibSetInOutUseCase(MEMC_INPUT_RESOLUTION emir, MEMC_OUTPUT_RESOLUTION emor,
												MEMC_INPUT_FORMAT emif, MEMC_OUTPUT_FORMAT emof, BOOL bForce)
{
	BOOL	bRet = FALSE;
#if 0  // k4lp
	PANEL_PARAMETERS_ST stPanelPara;
#else
	PANEL_PARA_ST stPanelPara;
#endif
	PANEL_PARAMETERS_ST stPanelParamertes;
	_PQL_Command Command;
	MEMC_OUTPUT_FORMAT emOutput_Format;

#if 1  // k4lp
	UBYTE  u8_in_me1_pix_hsft, u8_in_me1_pix_vsft, u8_in_me1_blk_hsft, u8_in_me1_blk_vsft;
	UBYTE  u8_in_me2_pix_hsft, u8_in_me2_pix_vsft, u8_in_me2_blk_hsft, u8_in_me2_blk_vsft;
	UBYTE  u8_in_dh_blk_hsft, u8_in_dh_blk_vsft;
	UBYTE  u8_in_logo_pix_hsft, u8_in_logo_pix_vsft, u8_in_logo_blk_hsft, u8_in_logo_blk_vsft;
#else
	UBYTE u8_in_me1_pix_sft = 0;
	UBYTE u8_in_me1_blk_sft = 0;
	UBYTE u8_in_me2_pix_sft = 0;
	UBYTE u8_in_me2_blk_sft = 0;
#endif
#if 0
	if(MEMC_First_Run_force_SetInOutUseCase_Done==0){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "*****************_MEMC_LibSetInOutUseCase[%d]*****************\r\n",MEMC_First_Run_force_SetInOutUseCase_Done);
	}
#endif
	if(!bForce)
	{
		if ((emir == gstAppData.stModeData.enInputRes) && (emor == gstAppData.stModeData.enOutputRes) &&
			(emif == gstAppData.stModeData.enInputFormat) && (emof == gstAppData.stModeData.enOutputFormat)&&MEMC_First_Run_force_SetInOutUseCase_Done==1)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "*****************Same use case[%d]*****************\r\n",MEMC_First_Run_force_SetInOutUseCase_Done);
			return FALSE;
		}
	}
	

	emOutput_Format = emof;

	if(emof == OUTPUT_3D_SG_LLRR)
	{
		emof = OUTPUT_3D_SG;
	}
	bRet = Mid_Mode_UpdateParameters((INPUT_RESOLUTION)emir, (OUTPUT_RESOLUTION)emor, (INPUT_FORMAT)emif, (OUTPUT_FORMAT)emof);

	if(!bRet)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "*****************Invalid use case*****************\r\n");

		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib set in/out resolution = %d / %d\r\n", (UINT32)emir, (UINT32)emor);
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib set in/out format = %d / %d\r\n",(UINT32)emif, (UINT32)emof);

		return FALSE;
	}
	else
	{
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "******************Valid use case******************\r\n");

		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib set in/out resolution = %d / %d\r\n", (UINT32)emir, (UINT32)emor);
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib set in/out format = %d / %d\r\n",(UINT32)emif, (UINT32)emof);
	}

	Mid_Mode_Set_InputTimingParameters((INPUT_RESOLUTION)emir);
	Mid_Mode_Set_OutputTimingParameters((OUTPUT_RESOLUTION)emor);
	Mid_Mode_Set_VideoPath((INPUT_RESOLUTION)emir,
							(OUTPUT_RESOLUTION)emor,
							(INPUT_FORMAT)emif,
							(OUTPUT_FORMAT)emof,
							gstAppData.stModeData.bVflip);

#if 1  // k4lp
	Mid_Mode_GetMEMCModuleSft(&u8_in_me1_pix_hsft, &u8_in_me1_pix_vsft, &u8_in_me1_blk_hsft, &u8_in_me1_blk_vsft,
							  &u8_in_me2_pix_hsft, &u8_in_me2_pix_vsft, &u8_in_me2_blk_hsft, &u8_in_me2_blk_vsft,
							  &u8_in_dh_blk_hsft, &u8_in_dh_blk_vsft,
							  &u8_in_logo_pix_hsft, &u8_in_logo_pix_vsft, &u8_in_logo_blk_hsft, &u8_in_logo_blk_vsft);
	Mid_MEMC_SetMEMCModuleRatio(u8_in_me1_pix_hsft, u8_in_me1_pix_vsft, u8_in_me1_blk_hsft, u8_in_me1_blk_vsft,
								u8_in_me2_pix_hsft, u8_in_me2_pix_vsft, u8_in_me2_blk_hsft, u8_in_me2_blk_vsft,
								u8_in_dh_blk_hsft, u8_in_dh_blk_vsft,
								u8_in_logo_pix_hsft, u8_in_logo_pix_vsft, u8_in_logo_blk_hsft, u8_in_logo_blk_vsft);
#else
	Mid_Mode_GetMEMCModuleSft(&u8_in_me1_pix_sft,&u8_in_me1_blk_sft,&u8_in_me2_pix_sft,&u8_in_me2_blk_sft);
	Mid_MEMC_SetMEMCModuleRatio(u8_in_me1_pix_sft,u8_in_me1_blk_sft,u8_in_me2_pix_sft,u8_in_me2_blk_sft);
#endif

	gstAppData.stModeData.enInputRes = emir;
	gstAppData.stModeData.enOutputRes = emor;
	gstAppData.stModeData.enInputFormat = emif;
	gstAppData.stModeData.enOutputFormat = emOutput_Format;

	Mid_Mode_LastLineEnable(gstAppData.stModeData.bVflip, (INPUT_FORMAT)emif, (OUTPUT_FORMAT)emof);

	if((gstAppData.stModeData.enOutputFrameRate == OUTPUT_50HZ) ||
		(gstAppData.stModeData.enOutputFrameRate == OUTPUT_60HZ))
	{
		#if IC_K6LP
		Mid_Mode_SetMEWorkMode(1);	// 1:1
//		Mid_Mode_SetMEWorkMode(0);	// 1:2
		Mid_Mode_SetPPFVIDX(1, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
//		Mid_Mode_SetPPFVIDX(0, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
		#else
		Mid_Mode_SetMEWorkMode(0);	// 1:2
		Mid_Mode_SetPPFVIDX(0, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
		#endif
	}
	else
	{
		Mid_Mode_SetMEWorkMode(1);	// 1:1
		Mid_Mode_SetPPFVIDX(1, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
	}

	Mid_Mode_ForceLBMCIdx((INOUT_MODE)gstAppData.stModeData.enInOutMode, (OUTPUT_FORMAT)emof);

#if 1  // k4lp
	Mid_Mode_SetMCPolyEnable((INOUT_MODE)gstAppData.stModeData.enInOutMode, (OUTPUT_FORMAT)emof);
#endif
	#if !(IC_K5LP || IC_K6LP)
	Mid_DM_SetKMCEngineEnable(FALSE);
	Mid_DM_SetKMEEngineEnable(FALSE,
							 (INOUT_MODE)gstAppData.stModeData.enInOutMode,
							 (INPUT_FORMAT)emif, (OUTPUT_FORMAT)emof);
	Mid_DM_SetKMVEngineEnable(FALSE, (INOUT_MODE)gstAppData.stModeData.enInOutMode);
	#endif
	if(emif == INPUT_3D_SBS)
	{

	#if 1  // k4lp
		if((gstAppData.stModeData.enInOutMode == MEMC_RGB_IN_VIDEO_OUT) || (gstAppData.stModeData.enInOutMode == MEMC_YUV_IN_VIDEO_OUT))
		{
			Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset_VDHF / 2, gstMCDMAddr.u32LROffset_VDHF,
								   	   gstMCDMAddr.u32LineOffset_VDLF / 2, gstMCDMAddr.u32LROffset_VDLF);
		}
		else
		{
			/*Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset_PC / 2, gstMCDMAddr.u32LROffset_PC,
								   	   gstMCDMAddr.u32LineOffset_PC / 2, gstMCDMAddr.u32LROffset_PC);*/
			Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset_HF_PC / 2, gstMCDMAddr.u32LROffset_LF_PC,
								   	   gstMCDMAddr.u32LineOffset_HF_PC / 2, gstMCDMAddr.u32LROffset_LF_PC);
		}
	#else
		Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset / 2, gstMCDMAddr.u32LROffset);
	#endif
	}
	else
	{
	#if 1  // k4lp
		if((gstAppData.stModeData.enInOutMode == MEMC_RGB_IN_VIDEO_OUT) || (gstAppData.stModeData.enInOutMode == MEMC_YUV_IN_VIDEO_OUT))
		{
			Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset_VDHF, gstMCDMAddr.u32LROffset_VDHF,
									   gstMCDMAddr.u32LineOffset_VDLF, gstMCDMAddr.u32LROffset_VDLF);
		}
		else
		{
			/*Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset_PC, gstMCDMAddr.u32LROffset_PC,
								   	   gstMCDMAddr.u32LineOffset_PC, gstMCDMAddr.u32LROffset_PC);*/
			Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset_HF_PC, gstMCDMAddr.u32LROffset_LF_PC,
								   	   gstMCDMAddr.u32LineOffset_HF_PC, gstMCDMAddr.u32LROffset_LF_PC);
		}
	#else
		Mid_DM_SetKMCOffsetAddress(gstMCDMAddr.u32LineOffset, gstMCDMAddr.u32LROffset);
	#endif
	}

	Mid_DM_SetKMEEndAddress(&gstMEDMAddr);
	Mid_DM_SetKMVEndAddress(&gstMVDMAddr);
	Mid_DM_SetKMCEndAddress(&gstMCDMAddr);
	#if !(IC_K5LP || IC_K6LP)
	Mid_DM_SetKMCEngineEnable(TRUE);
	Mid_DM_SetKMEEngineEnable(TRUE,
							 (INOUT_MODE)gstAppData.stModeData.enInOutMode,
							 (INPUT_FORMAT)emif, (OUTPUT_FORMAT)emof);
	Mid_DM_SetKMVEngineEnable(TRUE, (INOUT_MODE)gstAppData.stModeData.enInOutMode);
	//Mid_DM_SetKMVEngineEnable(TRUE);
	#endif

	bRet = MEMC_LibGetCurrentPanelParameters(&stPanelPara);

	if(bRet)
	{
		stPanelParamertes.enOutputFrameRate = (OUTPUT_FRAMERATE)stPanelPara.enOutputFrameRate;
		stPanelParamertes.u32Htotal = stPanelPara.u32Htotal;
		stPanelParamertes.u32HtotalMax = stPanelPara.u32HtotalMax;
		stPanelParamertes.u32HtotalMin = stPanelPara.u32HtotalMin;
		stPanelParamertes.u32Hactive = stPanelPara.u32Hactive;
		stPanelParamertes.u32HSWidth = stPanelPara.u32HSWidth;
		stPanelParamertes.u32HSBPorch = stPanelPara.u32HSBPorch;
		stPanelParamertes.u32Vtotal = stPanelPara.u32Vtotal;
		stPanelParamertes.u32VtotalMax = stPanelPara.u32VtotalMax;
		stPanelParamertes.u32VtotalMin = stPanelPara.u32VtotalMin;
		stPanelParamertes.u32Vactive = stPanelPara.u32Vactive;
		stPanelParamertes.u32VSWidth = stPanelPara.u32VSWidth;
		stPanelParamertes.u32VSBPorch = stPanelPara.u32VSBPorch;

		Mid_CRTC_SetFRCTiming((OUTPUT_FORMAT)emof, stPanelParamertes);
		Mid_CRTC_SetPanelTiming((OUTPUT_FORMAT)emof, stPanelParamertes);
	}

#ifndef REAL_CHIP	// FPGA
	Mid_CRTC_SetLbmcTrigDly((OUTPUT_RESOLUTION)emor);
#endif

	if(gstAppData.stModeData.enOutputFormat == OUTPUT_3D_SG)
	{
		Mid_CRTC_Set3DLR(TRUE, 1, 1);
		Mid_Mode_SetME3DLR(FALSE, 0, 0);
	}
	else if(gstAppData.stModeData.enOutputFormat == OUTPUT_3D_SG_LLRR)
	{
		Mid_CRTC_Set3DLR(TRUE, 3, 3);
		Mid_Mode_SetME3DLR(TRUE, 4, 3);
	}
	else
	{
		Mid_CRTC_Set3DLR(FALSE, 0, 0);
		Mid_Mode_SetME3DLR(FALSE, 0, 0);
	}
	bRet = Mid_CRTC_SetN2M((INPUT_FRAMERATE)gstAppData.stModeData.enInputFrameRate,
							(OUTPUT_FRAMERATE)gstAppData.stModeData.enOutputFrameRate,
							(INPUT_FORMAT)gstAppData.stModeData.enInputFormat,
							(OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);

	Command._input_resolution = (PQL_INPUT_RESOLUTION)emir;
	PQL_Command(PQL_CMD_INPUT_RESOLUTION, &Command);
	Command._output_resolution = (PQL_OUTPUT_RESOLUTION)emor;
	PQL_Command(PQL_CMD_OUTPUT_RESOLUTION, &Command);
	Command._input_3dFormat = (PQL_INPUT_3D_FORMAT)emif;
	PQL_Command(PQL_CMD_INPUT_FORMAT, &Command);
	Command._output_3dFormat = (PQL_OUTPUT_3D_FORMAT)emOutput_Format;
	PQL_Command(PQL_CMD_OUTPUT_FORMAT, &Command);

	return bRet;
}

/**
 * @brief This function set input/output use case. (please add almost 25ms mute to avoid garbage)
 * @param [in] emir 		Specify input resolution.
 * @param [in] emor 		Specify output resolution.
 * @param [in] emif 		Specify input MEMC format.
 * @param [in] emof 		Specify output MEMC format.
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibSetInOutUseCase(MEMC_INPUT_RESOLUTION emir, MEMC_OUTPUT_RESOLUTION emor, MEMC_INPUT_FORMAT emif, MEMC_OUTPUT_FORMAT emof)
{
	return _MEMC_LibSetInOutUseCase(emir, emor, emif, emof, FALSE);
}

/**
 * @brief This function get input/output use case. (please add almost 25ms mute to avoid garbage)
 * @param [out] 	pemir 	return current input signal resolution.
 * @param [out] 	pemor 	return current output signal resolution.
 * @param [out] 	pemif 	return current input format mode.
 * @param [out] 	pemof	return current output format mode.
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibGetInOutUseCase(MEMC_INPUT_RESOLUTION *pemir, MEMC_OUTPUT_RESOLUTION *pemor, MEMC_INPUT_FORMAT *pemif, MEMC_OUTPUT_FORMAT *pemof)
{
	if (pemir == NULL || pemor == NULL || pemif == NULL || pemof == NULL)
	{
		return FALSE;
	}

	*pemir = gstAppData.stModeData.enInputRes;
	*pemor = gstAppData.stModeData.enOutputRes;
	*pemif = gstAppData.stModeData.enInputFormat;
	*pemof = gstAppData.stModeData.enOutputFormat;
	return TRUE;
}

/**
 * @brief This function set input/output frame rate.
 * @param [in] emifr 		Specify input frame rate.
 * @param [in] emofr 		Specify output frame rate.
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibSetInOutFrameRate(MEMC_INPUT_FRAMERATE emifr, MEMC_OUTPUT_FRAMERATE emofr)
{
	BOOL bRet = TRUE;
	_PQL_Command Command;

	if((gstAppData.stModeData.enInputFrameRate != emifr) || (gstAppData.stModeData.enOutputFrameRate != emofr))
	{
		Mid_CRTC_SetN2M((INPUT_FRAMERATE)emifr,(OUTPUT_FRAMERATE)emofr,
						(INPUT_FORMAT)gstAppData.stModeData.enInputFormat,
						(OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
	}
	else
	{
		bRet = FALSE;
	}

	if(gstAppData.stModeData.enInputFrameRate != emifr)
	{
		gstAppData.stModeData.enInputFrameRate = emifr;
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC Lib set input frame rate =  %d\r\n", emifr);
		Command._input_frameRate = (PQL_INPUT_FRAME_RATE)emifr;
		PQL_Command(PQL_CMD_INPUT_FRAME_RATE, &Command);

		if(gstAppData.bCinemaModeUpdateFR != gstAppData.stModeData.enInputFrameRate)
		{
			gstAppData.bCinemaModeUpdateFR = gstAppData.stModeData.enInputFrameRate;
			Mid_MEMC_SetPullDownMode((INPUT_FRAMERATE)gstAppData.stModeData.enInputFrameRate, \
									(OUTPUT_FRAMERATE)gstAppData.stModeData.enOutputFrameRate, \
									(UBYTE)(gstAppData.stMEMCData.enMemcMode != MEMC_OFF && gstAppData.stMEMCData.enMemcMode != MEMC_MODE_MAX), \
									(UBYTE)gstAppData.bCinemaMode);
		}
	}
	if(gstAppData.stModeData.enOutputFrameRate != emofr)
	{
		gstAppData.stModeData.enOutputFrameRate = emofr;
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC Lib set output frame rate =  %d\r\n", emofr);
		MEMC_LibApplyPanelParameters(gstAppData.stModeData.enOutputFrameRate);
		Command._output_frameRate = (PQL_OUTPUT_FRAME_RATE)emofr;
		PQL_Command(PQL_CMD_OUTPUT_FRAME_RATE, &Command);

		if((gstAppData.stModeData.enOutputFrameRate == OUTPUT_50HZ) ||
			(gstAppData.stModeData.enOutputFrameRate == OUTPUT_60HZ))
		{
#ifndef REAL_CHIP	// FPGA
			Mid_Mode_SetTOPA2PortEnable(TRUE);
	#if 1  // k4lp
			Mid_Mode_SetTOPASH13Ramp(1);
			Mid_Mode_SetTOPBFRMTrigPosition(0x116);
			Mid_Mode_SetTOPBForceFreerun(0);
	#endif
#endif
			#if IC_K6LP
			Mid_Mode_SetMEWorkMode(1);	// 1:1
			Mid_Mode_SetPPFVIDX(1, gstAppData.stModeData.enOutputFormat);
//			Mid_Mode_SetMEWorkMode(0);	// 1:2
//			Mid_Mode_SetPPFVIDX(0, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
			#else
			Mid_Mode_SetMEWorkMode(0);	// 1:2
			Mid_Mode_SetPPFVIDX(0, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
			#endif
//			Mid_Mode_SetDMPFVPPFVInterval(0x60);
		}
#ifndef REAL_CHIP	// FPGA
	#if 1  // k4lp
		else if(gstAppData.stModeData.enOutputFrameRate == OUTPUT_FRAMERATE_FPGA30HZ)
		{
			Mid_Mode_SetTOPA2PortEnable(FALSE);
			Mid_Mode_SetTOPASH13Ramp(0);
			Mid_Mode_SetTOPBFRMTrigPosition(0x16);
			Mid_Mode_SetTOPBForceFreerun(1);

			Mid_Mode_SetMEWorkMode(1);	// 1:1
			Mid_Mode_SetPPFVIDX(1, gstAppData.stModeData.enOutputFormat);
			//Mid_Mode_SetDMPFVPPFVInterval(0x30);
		}
	#endif
#endif
		else
		{
#ifndef REAL_CHIP	// FPGA
			Mid_Mode_SetTOPA2PortEnable(FALSE);
	#if 1  // k4lp
			Mid_Mode_SetTOPASH13Ramp(1);
			Mid_Mode_SetTOPBFRMTrigPosition(0x116);
			Mid_Mode_SetTOPBForceFreerun(0);
	#endif
#endif
			Mid_Mode_SetMEWorkMode(1);	// 1:1
			Mid_Mode_SetPPFVIDX(1, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
//			Mid_Mode_SetDMPFVPPFVInterval(0x30);
		}
	}

	return bRet;
}

BOOL MEMC_LibSetInputFrameRate(MEMC_INPUT_FRAMERATE emifr)
{
	BOOL bRet = TRUE;
	_PQL_Command Command;

	if(gstAppData.stModeData.enInputFrameRate != emifr)
	{
		Mid_CRTC_SetN2M(emifr,(OUTPUT_FRAMERATE)gstAppData.stModeData.enOutputFrameRate,
						(INPUT_FORMAT)gstAppData.stModeData.enInputFormat,
						(OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
	}
	else
	{
		bRet = FALSE;
	}

	if(gstAppData.stModeData.enInputFrameRate != emifr)
	{
		gstAppData.stModeData.enInputFrameRate = emifr;
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC Lib set input frame rate =  %d\r\n", emifr);
		Command._input_frameRate = (PQL_INPUT_FRAME_RATE)emifr;
		PQL_Command(PQL_CMD_INPUT_FRAME_RATE, &Command);

		if(gstAppData.bCinemaModeUpdateFR != gstAppData.stModeData.enInputFrameRate)
		{
			gstAppData.bCinemaModeUpdateFR = gstAppData.stModeData.enInputFrameRate;
			Mid_MEMC_SetPullDownMode((INPUT_FRAMERATE)gstAppData.stModeData.enInputFrameRate, \
									(OUTPUT_FRAMERATE)gstAppData.stModeData.enOutputFrameRate, \
									(UBYTE)(gstAppData.stMEMCData.enMemcMode != MEMC_OFF && gstAppData.stMEMCData.enMemcMode != MEMC_MODE_MAX), \
									(UBYTE)gstAppData.bCinemaMode);
		}
	}

	return bRet;

}

BOOL MEMC_LibSetOutputFrameRate(MEMC_OUTPUT_FRAMERATE emofr)
{
	BOOL bRet = TRUE;
	_PQL_Command Command;

	if(gstAppData.stModeData.enOutputFrameRate != emofr)
	{
		Mid_CRTC_SetN2M((INPUT_FRAMERATE)gstAppData.stModeData.enInputFrameRate, emofr,
						(INPUT_FORMAT)gstAppData.stModeData.enInputFormat,
						(OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
	}
	else
	{
		bRet = FALSE;
	}
	if(gstAppData.stModeData.enOutputFrameRate != emofr)
	{
		gstAppData.stModeData.enOutputFrameRate = emofr;
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC Lib set output frame rate =  %d\r\n", emofr);
		MEMC_LibApplyPanelParameters(gstAppData.stModeData.enOutputFrameRate);
		Command._output_frameRate = (PQL_OUTPUT_FRAME_RATE)emofr;
		PQL_Command(PQL_CMD_OUTPUT_FRAME_RATE, &Command);

		if((gstAppData.stModeData.enOutputFrameRate == OUTPUT_50HZ) ||
			(gstAppData.stModeData.enOutputFrameRate == OUTPUT_60HZ))
		{
#ifndef REAL_CHIP	// FPGA
			Mid_Mode_SetTOPA2PortEnable(TRUE);
#endif
			#if IC_K6LP
			Mid_Mode_SetMEWorkMode(1);	// 1:1
			Mid_Mode_SetPPFVIDX(1, gstAppData.stModeData.enOutputFormat);
//			Mid_Mode_SetMEWorkMode(0);	// 1:2
//			Mid_Mode_SetPPFVIDX(0, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
			#else
			Mid_Mode_SetMEWorkMode(0);	// 1:2
			Mid_Mode_SetPPFVIDX(0, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
			#endif
//			Mid_Mode_SetDMPFVPPFVInterval(0x60);
		}
		else
		{
#ifndef REAL_CHIP	// FPGA
			Mid_Mode_SetTOPA2PortEnable(FALSE);
#endif
			Mid_Mode_SetMEWorkMode(1);	// 1:1
			Mid_Mode_SetPPFVIDX(1, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
//			Mid_Mode_SetDMPFVPPFVInterval(0x30);
		}
	}

	return bRet;

}


/**
 * @brief This function get input/output frame rate.
 * @param [out] 	pemifr 	return current input frame rate.
 * @param [out] 	pemofr 	return current output frame rate.
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibGetInOutFrameRate(MEMC_INPUT_FRAMERATE *pemifr, MEMC_OUTPUT_FRAMERATE *pemofr)
{
	if (pemifr == NULL || pemofr == NULL)
	{
		return FALSE;
	}

	*pemifr = gstAppData.stModeData.enInputFrameRate;
	*pemofr = gstAppData.stModeData.enOutputFrameRate;
	return TRUE;
}

/**
 * @brief This function set vertical flip.
 * @param [in] bVflip 		enable or disable vflip.
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibSetVflip(BOOL bVflip)
{
	if(gstAppData.stModeData.bVflip != bVflip)
	{
		gstAppData.stModeData.bVflip = bVflip;
#if 0
		Mid_DM_SetKMEEngineEnable(FALSE,
								  (INOUT_MODE)gstAppData.stModeData.enInOutMode,
								  (INPUT_FORMAT)gstAppData.stModeData.enInputFormat,
								  (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
		Mid_DM_SetKMVEngineEnable(FALSE);
		Mid_DM_SetKMCEngineEnable(FALSE);

		Mid_DM_SetKMEEndAddress(&gstMEDMAddr);
		Mid_DM_SetKMVEndAddress(&gstMVDMAddr);
		Mid_DM_SetKMCEndAddress(&gstMCDMAddr);

		Mid_DM_SetKMEEngineEnable(TRUE,
								  (INOUT_MODE)gstAppData.stModeData.enInOutMode,
								  (INPUT_FORMAT)gstAppData.stModeData.enInputFormat,
								  (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
		Mid_DM_SetKMVEngineEnable(TRUE);
		Mid_DM_SetKMCEngineEnable(TRUE);
#endif
		Mid_Mode_LastLineEnable(gstAppData.stModeData.bVflip,
								(INPUT_FORMAT)gstAppData.stModeData.enInputFormat,
								(OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
		Mid_Mode_SetVFlip(gstAppData.stModeData.bVflip, (OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat);
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function get Vflip status.
 * @retval TRUE			vflip is enable
 * @retval FALSE		vflip is disable
*/
BOOL MEMC_LibGetVflip(VOID)
{
	return (gstAppData.stModeData.bVflip);
}

#if 1  // k4lp
static UBYTE ubyWinID = 0;

/**
 * @brief This function set demo window ID
 * @param [in] ubyWinID		demo window ID(range 0~7)
 * @retval void
*/
VOID MEMC_LibSetDemoWindowID(UBYTE ubyWindowID)
{
	ubyWinID = ubyWindowID;
}

/**
 * @brief This function get demo window ID
 * @retval demo window ID(range 0~7)
*/
UBYTE MEMC_LibGetDemoWindowID(VOID)
{
	return ubyWinID;
}
#endif

/**
 * @brief This function set demo window Enable
 * @param [in] ubyWinID		demo window ID(range 0~7)
 * @param [in] bEnable		enable or disable the demo window
 * @retval TRUE				success
 * @retval FALSE			fail
*/
BOOL MEMC_LibSetDemoWindowEnable(UBYTE ubyWinID, BOOL bEnable)
{
	return (Mid_MISC_SetDemoWindowEnable(ubyWinID, bEnable));
}

/**
 * @brief This function get demo window Enable
 * @param [in] ubyWinID		demo window ID(range 0~7)
 * @retval TRUE				The demo window is enabled
 * @retval FALSE			The demo window is disabled
*/
BOOL MEMC_LibGetDemoWindowEnable(UBYTE ubyWinID)
{
	return(Mid_MISC_GetDemoWindowEnable(ubyWinID));
}

/**
 * @brief This function set demo window mode
 * @param [in] bMode		demo window mode
 * 							FALSE: inside MEMC OFF
 * 							TRUE: outside MEMC OFF
*/
VOID MEMC_LibSetDemoWindowMode(BOOL bMode)
{
	Mid_MISC_SetDemoWindowMode(bMode);
}

/**
 * @brief This function get demo window mode
 * @retval FALSE			inside MEMC OFF
 * @retval TRUE				outside MEMC OFF
*/
BOOL MEMC_LibGetDemoWindowMode(VOID)
{
	return(Mid_MISC_GetDemoWindowMode());
}

/**
 * @brief This function set demo window settings
 * @param [in] ubyWinID		Range 0~7
 * @param [in] u32Left		position left
 * @param [in] u32Right		position right
 * @param [in] u32Top 		position top
 * @param [in] u32Bottom 	position bottom
 * @retval TRUE				success
 * @retval FALSE			fail
*/
BOOL MEMC_LibSetDemoWindowSettings(UBYTE ubyWinID, UINT32 u32Left, UINT32 u32Right, UINT32 u32Top, UINT32 u32Bottom)
{
	return Mid_MISC_SetDemoWindowSettings(ubyWinID, u32Left, u32Right, u32Top, u32Bottom);
}

/**
 * @brief This function get demo window settings
 * @param [in] ubyWinID			range 0~7
 * @param [out] *pu32Left		position left
 * @param [out] *pu32Right		position right
 * @param [out] *pu32Top 		position top
 * @param [out] *pu32Bottom 	position bottom
*/
VOID MEMC_LibGetDemoWindowSettings(UBYTE ubyWinID, UINT32 *pu32Left, UINT32 *pu32Right, UINT32 *pu32Top, UINT32 *pu32Bottom)
{
	Mid_MISC_GetDemoWindowSettings(ubyWinID, pu32Left, pu32Right, pu32Top, pu32Bottom);
}

/**
 * @brief This function set MEMC deblur level, when MEMC mode is user mode.
 * @param [in] uiLevel 		Specify memc deblur level (0~16).
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibSetMEMCDeblurLevel(UINT32 uiLevel)
{
	if(gstAppData.stMEMCData.uiDeblurLevel != uiLevel)
	{
		if(gstAppData.stMEMCData.enMemcMode == MEMC_USER)
		{
			//LogPrintf(DBG_MSG, "MEMC lib set deblur level = %d\r\n", uiLevel);
			gstAppData.stMEMCData.uiDeblurLevel = uiLevel;
			return (Mid_MEMC_SetMEMCDeblurLevel((UINT16)gstAppData.stMEMCData.uiDeblurLevel));
		}
		else
		{
			return FALSE;
		}
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function get MEMC deblur level.
 * @return Return 		MEMC deblur level currently set.
*/
UINT32 MEMC_LibGetMEMCDeblurLevel(VOID)
{
	return gstAppData.stMEMCData.uiDeblurLevel;
}

/**
* @brief This function set MEMC dejudder level, when MEMC mode is user mode.
 * @param [in] uiLevel		Specify memc dejudder level (0~16).
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibSetMEMCDejudderLevel(UINT32 uiLevel)
{
	if(gstAppData.stMEMCData.uiDejudderLevel != uiLevel)
	{
		if(gstAppData.stMEMCData.enMemcMode == MEMC_USER)
		{
			//LogPrintf(DBG_MSG, "MEMC lib set dejudder level = %d\r\n", uiLevel);
			gstAppData.stMEMCData.uiDejudderLevel = uiLevel;
			return (Mid_MEMC_SetMEMCDejudderLevel((UINT16)gstAppData.stMEMCData.uiDejudderLevel));
		}
		else
		{
			return FALSE;
		}
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function get MEMC dejudder level.
 * @return Return 		MEMC dejudder level currently set.
*/
UINT32 MEMC_LibGetMEMCDejudderLevel(VOID)
{
	return (gstAppData.stMEMCData.uiDejudderLevel);
}

/**
 * @brief This function reset MEMC mode.
 * @for STR init
*/
VOID MEMC_LibResetMEMCMode(VOID)
{
	gstAppData.stMEMCData.enMemcMode = MEMC_MODE_MAX;
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "memc mode reset to %d!!!\r\n", gstAppData.stMEMCData.enMemcMode);
}
/**
* @brief This function set MEMC fallback level, when MEMC mode is user mode.
 * @param [in] uiLevel		Specify memc fallback level (0~255).
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibSetMEMCFallbackLevel(UINT32 uiLevel)
{
	if(gstAppData.stMEMCData.uiFallbackLevel != uiLevel)
	{
		if(gstAppData.stMEMCData.enMemcMode == MEMC_USER)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib set fallback level = %d\r\n", uiLevel);
			gstAppData.stMEMCData.uiFallbackLevel = uiLevel;
			return (Mid_MEMC_SetMEMCFBLevel((UINT16)gstAppData.stMEMCData.uiFallbackLevel));
		}
		else
		{
			return FALSE;
		}
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function get MEMC fallback level.
 * @return Return 		MEMC fallback level currently set.
*/
UINT32 MEMC_LibGetMEMCFallbackLevel(VOID)
{
	return (gstAppData.stMEMCData.uiFallbackLevel);
}

/**
 * @brief This function set MEMC mode.
 * @param [in] emm 			Specify MEMC mode.
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibSetMEMCMode(MEMC_MODE emm)
{
	_PQL_Command PQLCommand;

	if(gstAppData.stMEMCData.enMemcMode != emm)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib set memc mode = %d\r\n", emm);
		gstAppData.stMEMCData.enMemcMode = emm;

		PQLCommand.u3_memcMode = emm;
		PQL_Command(PQL_CMD_MEMC_MODE, &PQLCommand);

		if(emm == MEMC_SMOOTH)
		{
			gstAppData.stMEMCData.uiDejudderLevel = 128;
			gstAppData.stMEMCData.uiDeblurLevel = 128;
			gstAppData.stMEMCData.uiFallbackLevel = 80;
		}
		else if(emm == MEMC_CLEAR)
		{
			gstAppData.stMEMCData.uiDejudderLevel = 94;
			gstAppData.stMEMCData.uiDeblurLevel = 128; // 94;
			gstAppData.stMEMCData.uiFallbackLevel = 48;
		}
		else if(emm == MEMC_NORMAL)
		{
			gstAppData.stMEMCData.uiDejudderLevel = 16;
			gstAppData.stMEMCData.uiDeblurLevel = 128; // 8;
			gstAppData.stMEMCData.uiFallbackLevel = 64;
		}
		else if(emm == MEMC_OFF)
		{
			gstAppData.stMEMCData.uiDejudderLevel = 0;
			gstAppData.stMEMCData.uiDeblurLevel = 0;
			gstAppData.stMEMCData.uiFallbackLevel = 0;
		}
		else if(emm == MEMC_MEDIUM)
		{
			gstAppData.stMEMCData.uiDejudderLevel = 42;
			gstAppData.stMEMCData.uiDeblurLevel = 128;
			gstAppData.stMEMCData.uiFallbackLevel = 80;
		}
		else if(emm == MEMC_USER)
		{
		}
		else
		{
			return FALSE;
		}

		if(emm != MEMC_USER)
		{
			Mid_MEMC_SetMEMCDejudderLevel((UINT16)gstAppData.stMEMCData.uiDejudderLevel);
			Mid_MEMC_SetMEMCDeblurLevel((UINT16)gstAppData.stMEMCData.uiDeblurLevel);
			Mid_MEMC_SetMEMCFBLevel((UINT16)gstAppData.stMEMCData.uiFallbackLevel);
		}

	#if 1  // k4lp
		//rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "1.MEMC_LibSetMEMCMode=%d,pcmode=%d\n",emm,MEMC_LibGetMEMC_PCModeEnable() );
		if(emm == MEMC_OFF)
		{
			Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
		}
		else
		{
			if(MEMC_LibGetMEMC_PCModeEnable() == TRUE){
				Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
			}else{
				Mid_Mode_SetMCBlend(RGB_IN_VIDEO_OUT);
			}
		}

		Mid_MEMC_SetPullDownMode((INPUT_FRAMERATE)gstAppData.stModeData.enInputFrameRate, \
								(OUTPUT_FRAMERATE)gstAppData.stModeData.enOutputFrameRate, \
								(UBYTE)(gstAppData.stMEMCData.enMemcMode != MEMC_OFF && gstAppData.stMEMCData.enMemcMode != MEMC_MODE_MAX), \
								(UBYTE)gstAppData.bCinemaMode);
	#endif

		if(emm == MEMC_CLEAR || emm == MEMC_NORMAL || emm == MEMC_MEDIUM || emm == MEMC_USER)
			PQLCommand.u1_osd_force_mode = 1;
		else
			PQLCommand.u1_osd_force_mode = 0;
		PQL_Command(PQL_CMD_OSD_FORCE_MODE, &PQLCommand);

		return TRUE;
	}
	else
	{
		//rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "2.MEMC_LibSetMEMCMode=%d\n",emm);
		return FALSE;
	}
}

/**
 * @brief This function get MEMC mode setting.
 * @retval MEMC_MODE enum type currently set.
*/
MEMC_MODE MEMC_LibGetMEMCMode(VOID)
{
	return (gstAppData.stMEMCData.enMemcMode);
}

/**
 * @brief This function set Cinema mode.
 * @param [in] emm 		Specify CinemaMode(0:disable;1:enable).
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibSetCinemaMode(UBYTE bEnable)
{
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[Cinema]in = %d, gst = %d\r\n", bEnable, gstAppData.bCinemaMode);

	if(gstAppData.bCinemaMode != bEnable || gstAppData.bCinemaModeUpdateFR != gstAppData.stModeData.enInputFrameRate)
	{
		gstAppData.bCinemaMode = bEnable;
		gstAppData.bCinemaModeUpdateFR = gstAppData.stModeData.enInputFrameRate;
		Mid_MEMC_SetPullDownMode((INPUT_FRAMERATE)gstAppData.stModeData.enInputFrameRate, \
								(OUTPUT_FRAMERATE)gstAppData.stModeData.enOutputFrameRate, \
								(UBYTE)(gstAppData.stMEMCData.enMemcMode != MEMC_OFF && gstAppData.stMEMCData.enMemcMode != MEMC_MODE_MAX), \
								(UBYTE)gstAppData.bCinemaMode);

		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function get CinemaMode setting.
 * @retval TRUE 			Enable
 * @retval FALSE			Disable
*/
UBYTE MEMC_LibGetCinemaMode(VOID)
{
	return (gstAppData.bCinemaMode);
}

/**
 * @brief This function set MEMC frame repeat mode.
 * @param [in] bEnable 		true for enable, false for disalbe.
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail.
*/
BOOL MEMC_LibSetMEMCFrameRepeatEnable(BOOL bEnable, BOOL bForce)
{
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RepeatMode]memcM=%d,bEn=%d, bF=%d (%d,%d)\r\n", gstAppData.stMEMCData.enMemcMode, bEnable, bForce,
		gstAppData.stMEMCData.bFrameRepeat, gstAppData.stMEMCData.bFrameRepeat_QRPC);

	/*Force to set target mode(bEnable) while current flow is changing status*/
	if(gstAppData.stMEMCData.bFrameRepeat != gstAppData.stMEMCData.bFrameRepeat_QRPC)
        	bForce = TRUE;

	if(bForce)// force repeatmode
	{
		gstAppData.stMEMCData.bFrameRepeat = (!bEnable);
		gstAppData.stMEMCData.bFrameRepeat_QRPC = bEnable;

		return TRUE;
	}

	gstAppData.stMEMCData.bFrameRepeat_QRPC = gstAppData.stMEMCData.bFrameRepeat;

	if(gstAppData.stMEMCData.bFrameRepeat != bEnable)
	{
		gstAppData.stMEMCData.bFrameRepeat_QRPC = bEnable;

		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

unsigned char g_PCMode_flag = 0;
BOOL MEMC_LibSetMEMC_PCModeEnable(BOOL bEnable)
{
	gstAppData.stMEMCData.bPCMode_QRPC = gstAppData.stMEMCData.bPCMode;
	gstAppData.stMEMCData.input422_pc_mode_QRPC = gstAppData.stMEMCData.input422_pc_mode;

	if( (gstAppData.stMEMCData.bPCMode!= bEnable) || (gstAppData.stMEMCData.input422_pc_mode != MEMC_Lib_get_INPUT_COLOR_SPACE_Mode()))
	{
		gstAppData.stMEMCData.bPCMode_QRPC = bEnable;
		gstAppData.stMEMCData.input422_pc_mode_QRPC = MEMC_Lib_get_INPUT_COLOR_SPACE_Mode();
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

BOOL MEMC_LibSetMEMCLowDelayModeEnable(BOOL bEnable)
{
	gstAppData.stMEMCData.bLowDelay_QRPC = gstAppData.stMEMCData.bLowDelay;

	if(gstAppData.stMEMCData.bLowDelay!= bEnable)
	{
		gstAppData.stMEMCData.bLowDelay_QRPC = bEnable;
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function get MEMC frame repeat mode.
 * @retval TRUE 			Enable
 * @retval FALSE			Disable
*/
BOOL MEMC_LibGetMEMCFrameRepeatEnable(VOID)
{
	return (gstAppData.stMEMCData.bFrameRepeat);
}

BOOL MEMC_LibGetMEMCLowDelayModeEnable(VOID)
{
	return (gstAppData.stMEMCData.bLowDelay);
}

BOOL MEMC_LibGetMEMC_PCModeEnable(VOID)
{
	return (gstAppData.stMEMCData.bPCMode);
}

/**
 * @brief This function returns current library version info. The version format is like "V0.0.1 SVN: 1232 2015.01.30 16:01:19".
 * @param [out] pBuf		Buffer to save version info.
 * @param [in] iLen			Buffer length(iLen <= 128 bytes)
 * @param [in] enModID		Module ID want to get version
*/
#define VER_MAX_LENGTH	128
VOID MEMC_LibGetVersionInfo(SCHAR *pBuf, UINT32 uiLen, MODULE_ID enModID)
{
	UINT32	uiRealLen = 0;
	SCHAR scBuf[VER_MAX_LENGTH];
	_PQL_Request PQL_Req;
	UINT32 i = 0;
	/* check input parameter */
	if ((pBuf != NULL) && (uiLen > 0) && (uiLen <= VER_MAX_LENGTH))
	{
		switch (enModID)
		{
			case MODULE_ID_APP:
				for(i = 0; i < VER_MAX_LENGTH; i++)
				{
					scBuf[i] = ' ';
				}

				// get real length to avoid buffer overflow
				uiRealLen = kw_strlen(APP_VERSION) + kw_strlen(SVNVER) + 1;
				uiLen = uiRealLen > uiLen ? uiLen : uiRealLen;

				// copy string
				kw_strcpy(scBuf, APP_VERSION, kw_strlen(APP_VERSION), 0);
				kw_strcat(scBuf, VER_MAX_LENGTH, " ");
				kw_strcat(scBuf, VER_MAX_LENGTH, SVNVER);
				for(i = 0; i < uiLen; i++)
				{
					*pBuf = scBuf[i];
					pBuf++;
				}
				//LogPrintf(DBG_MSG,"pBuf_APP = %s\r\n", *pBuf);
				break;

			case MODULE_ID_FRC:
				PQL_Request(PQL_VER, &PQL_Req);

				// get real length to avoid buffer overflow
				uiRealLen = kw_strlen(PQL_Req._Version);
				uiLen = uiRealLen > uiLen ? uiLen : uiRealLen;

				for(i = 0; i < uiLen; i++)
				{
					*pBuf = PQL_Req._Version[i];
					pBuf++;
				}
				//LogPrintf(DBG_MSG,"pBuf_FRC = %s\r\n", *pBuf);
				break;

			default:
				break;
		}
	}
}

/**
 * @brief This function set MEMC output mute or unmute.
 *			This function is mostly used before/after signal change to avoid mess screen.
 * @param [in] bMute		Input mute state want to set
 * @retval VOID
*/
VOID MEMC_LibSetMute(BOOL bMute)
{
	if(gstAppData.stSysData.bMute != bMute)
	{
		gstAppData.stSysData.bMute = bMute;
		Mid_Sys_SetMute(bMute);
	}
}

/**
 * @brief This function get MEMC output mute state.
 * @retval TRUE 		indicates currently is mute state
 * @retval FALSE		indicates currently is unmute state
*/
BOOL MEMC_LibGetMute(VOID)
{
	return gstAppData.stSysData.bMute;
}

/**
 * @brief This function set MEMC output mute color
 * @param [in] bREnable		color r enable or not
 * @param [in] bGEnable		color g enable or not
 * @param [in] bBEnable		color b enable or not
*/
VOID MEMC_LibSetMuteColor(BOOL bREnable, BOOL bGEnable, BOOL bBEnable)
{
	Mid_Sys_SetMuteColor(bREnable, bGEnable, bBEnable);
}

/**
 * @brief This function set MEMC output LR inverse.
 * @param [in] bEnable		output LR inverse or not
 * @retval VOID
*/
VOID MEMC_LibSetOutputLRInverse(BOOL bEnable)
{
	_PQL_Command Command;

	if(gstAppData.stModeData.enOutputFormat == OUTPUT_3D_PR)
	{
		Mid_MISC_SetPROutLRInverse(bEnable);
	}
	else if(gstAppData.stModeData.enOutputFormat == OUTPUT_3D_SG)
	{
		//Mid_MISC_SetSGOutLRInverse(bEnable);
		Command.u1_LR_swap = (UBYTE)bEnable;
		PQL_Command(PQL_CMD_LR_SWAP, &Command);
	}
}

/**
 * @brief This function set MEMC slave mode enable
 * @param [in] bEnable		Slave mode enable or not
 * @retval VOID
*/
VOID MEMC_LibSetSlaveModeEnable(BOOL bEnable)
{
	Mid_CRTC_SetSlaveModeEnable(bEnable);
}

/**
 * @brief This function set MEMC RIM window. The rim window defines out black region while on film scene.
 * @param [in] uiTop		rim window position left
 * @param [in] uiBottom	rim window position right
 * @param [in] uiLeft 		rim window position top
 * @param [in]u iRight	rim window position bottom
 * @retval TRUE 			indicates success
 * @retval FALSE			indicates fail
*/
BOOL MEMC_LibSetRimWindow(UINT32 uiTop, UINT32 uiBottom, UINT32 uiLeft, UINT32 uiRight)
{
	if (uiTop != gstAppData.stMEMCData.uiTop || uiBottom != gstAppData.stMEMCData.uiBottom ||
		uiLeft != gstAppData.stMEMCData.uiLeft || uiRight != gstAppData.stMEMCData.uiRight)
	{
		gstAppData.stMEMCData.uiTop = uiTop;
		gstAppData.stMEMCData.uiBottom = uiBottom;
		gstAppData.stMEMCData.uiLeft = uiLeft;
		gstAppData.stMEMCData.uiRight = uiRight;
		return (Mid_MEMC_SetRimWindow(uiTop, uiBottom, uiLeft, uiRight));
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function get MEMC RIM window.
 * @param [out] *puiTop			return rim position left
 * @param [out] *puiBottom		return rim position right
 * @param [out] *puiLeft 		return rim  position top
 * @param [out] *puiRight		return rim position bottom
 * @retval TRUE 				indicates success
 * @retval FALSE				indicates fail
*/
BOOL MEMC_LibGetRimWindow(UINT32 *puiTop, UINT32 *puiBottom, UINT32 *puiLeft, UINT32 *puiRight)
{
	BOOL	bRet = FALSE;

	if (puiTop != NULL && puiBottom != NULL && puiLeft != NULL && puiRight != NULL)
	{
		*puiTop = gstAppData.stMEMCData.uiTop;
		*puiBottom = gstAppData.stMEMCData.uiBottom;
		*puiLeft = gstAppData.stMEMCData.uiLeft;
		*puiRight= gstAppData.stMEMCData.uiRight;
	}

	return bRet;
}

/**
 * @brief This function set panel parameters.
 * @param [in] stPanelPara 		structure for panel parameters
 * @retval TRUE 				indicates success
 * @retval FALSE				indicates fail
*/
#if 0  // k4lp
BOOL MEMC_LibSetPanelParameters(PANEL_PARAMETERS_ST *pstPanelPara)
#else
BOOL MEMC_LibSetPanelParameters(PANEL_PARA_ST *pstPanelPara)
#endif
{
	UINT16 u16Idx = 0;
	for(u16Idx = 0; u16Idx < OUTPUT_FRAME_MAX; u16Idx++)
	{
		if(((gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate != OUTPUT_FRAMERATE_INVALID) &&
		   ((int)gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate == (int)pstPanelPara->enOutputFrameRate)) ||
		   (gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate == OUTPUT_FRAMERATE_INVALID))
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib set panel parameters = %d\r\n", (UINT32)pstPanelPara->enOutputFrameRate);

			gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate = (OUTPUT_FRAMERATE)pstPanelPara->enOutputFrameRate;
			gstPanelData.stPanelParamertes[u16Idx].u32Htotal = pstPanelPara->u32Htotal;
			gstPanelData.stPanelParamertes[u16Idx].u32HtotalMax = pstPanelPara->u32HtotalMax;
			gstPanelData.stPanelParamertes[u16Idx].u32HtotalMin = pstPanelPara->u32HtotalMin;
			gstPanelData.stPanelParamertes[u16Idx].u32Hactive = pstPanelPara->u32Hactive;
			gstPanelData.stPanelParamertes[u16Idx].u32HSWidth = pstPanelPara->u32HSWidth;
			gstPanelData.stPanelParamertes[u16Idx].u32HSBPorch = pstPanelPara->u32HSBPorch;
			gstPanelData.stPanelParamertes[u16Idx].u32Vtotal = pstPanelPara->u32Vtotal;
			gstPanelData.stPanelParamertes[u16Idx].u32VtotalMax = pstPanelPara->u32VtotalMax;
			gstPanelData.stPanelParamertes[u16Idx].u32VtotalMin = pstPanelPara->u32VtotalMin;
			gstPanelData.stPanelParamertes[u16Idx].u32Vactive = pstPanelPara->u32Vactive;
			gstPanelData.stPanelParamertes[u16Idx].u32VSWidth = pstPanelPara->u32VSWidth;
			gstPanelData.stPanelParamertes[u16Idx].u32VSBPorch = pstPanelPara->u32VSBPorch;

			return TRUE;
		}
	}
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib set panel parameters fail!\r\n");
	return FALSE;
}

/**
 * @brief This function get panel parameters.
 * @param [in] enOutputFrameRate		which panel parameters will you want to get
 * @param [out] pstPanelPara 			structure for panel parameters
 * @retval TRUE 						indicates success
 * @retval FALSE						indicates fail
*/
#if 0  // k4lp
BOOL MEMC_LibGetPanelParameters(PANEL_PARAMETERS_ST *pstPanelPara, OUTPUT_FRAMERATE enOutputFrameRate)
#else
BOOL MEMC_LibGetPanelParameters(PANEL_PARA_ST *pstPanelPara, MEMC_OUTPUT_FRAMERATE enOutputFrameRate)
#endif
{
	UINT16 u16Idx = 0;
	for(u16Idx = 0; u16Idx < OUTPUT_FRAME_MAX; u16Idx++)
	{
		if((int)gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate == (int)enOutputFrameRate)  //(int) for fix warning message
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib get panel parameters = %d\r\n", (UINT32)gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate);

			pstPanelPara->enOutputFrameRate = (MEMC_OUTPUT_FRAMERATE)gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate;
			pstPanelPara->u32Htotal = gstPanelData.stPanelParamertes[u16Idx].u32Htotal;
			pstPanelPara->u32HtotalMax = gstPanelData.stPanelParamertes[u16Idx].u32HtotalMax;
			pstPanelPara->u32HtotalMin = gstPanelData.stPanelParamertes[u16Idx].u32HtotalMin;
			pstPanelPara->u32Hactive = gstPanelData.stPanelParamertes[u16Idx].u32Hactive;
			pstPanelPara->u32HSWidth = gstPanelData.stPanelParamertes[u16Idx].u32HSWidth;
			pstPanelPara->u32HSBPorch = gstPanelData.stPanelParamertes[u16Idx].u32HSBPorch;
			pstPanelPara->u32Vtotal = gstPanelData.stPanelParamertes[u16Idx].u32Vtotal;
			pstPanelPara->u32VtotalMax = gstPanelData.stPanelParamertes[u16Idx].u32VtotalMax;
			pstPanelPara->u32VtotalMin = gstPanelData.stPanelParamertes[u16Idx].u32VtotalMin;
			pstPanelPara->u32Vactive = gstPanelData.stPanelParamertes[u16Idx].u32Vactive;
			pstPanelPara->u32VSWidth = gstPanelData.stPanelParamertes[u16Idx].u32VSWidth;
			pstPanelPara->u32VSBPorch = gstPanelData.stPanelParamertes[u16Idx].u32VSBPorch;

			return TRUE;
		}
	}
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib get panel parameters fail!\r\n");
	return FALSE;
}

/**
 * @brief This function get current panel parameters.
 * @param [out] pstPanelPara 		structure for panel parameters
 * @retval TRUE 					indicates success
 * @retval FALSE					indicates fail
*/
#if 0  // kiwi_k4lp
BOOL MEMC_LibGetCurrentPanelParameters(PANEL_PARAMETERS_ST *pstPanelPara)
#else
BOOL MEMC_LibGetCurrentPanelParameters(PANEL_PARA_ST *pstPanelPara)
#endif
{
	UINT16 u16Idx = 0;
	for(u16Idx = 0; u16Idx < OUTPUT_FRAMERATE_MAX; u16Idx++)
	{
		if(gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate == (OUTPUT_FRAMERATE)gstAppData.stModeData.enOutputFrameRate)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib get current panel parameters = %d\r\n", (UINT32)gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate);

			pstPanelPara->enOutputFrameRate = (MEMC_OUTPUT_FRAMERATE)gstPanelData.stPanelParamertes[u16Idx].enOutputFrameRate;
			pstPanelPara->u32Htotal = gstPanelData.stPanelParamertes[u16Idx].u32Htotal;
			pstPanelPara->u32HtotalMax = gstPanelData.stPanelParamertes[u16Idx].u32HtotalMax;
			pstPanelPara->u32HtotalMin = gstPanelData.stPanelParamertes[u16Idx].u32HtotalMin;
			pstPanelPara->u32Hactive = gstPanelData.stPanelParamertes[u16Idx].u32Hactive;
			pstPanelPara->u32HSWidth = gstPanelData.stPanelParamertes[u16Idx].u32HSWidth;
			pstPanelPara->u32HSBPorch = gstPanelData.stPanelParamertes[u16Idx].u32HSBPorch;
			pstPanelPara->u32Vtotal = gstPanelData.stPanelParamertes[u16Idx].u32Vtotal;
			pstPanelPara->u32VtotalMax = gstPanelData.stPanelParamertes[u16Idx].u32VtotalMax;
			pstPanelPara->u32VtotalMin = gstPanelData.stPanelParamertes[u16Idx].u32VtotalMin;
			pstPanelPara->u32Vactive = gstPanelData.stPanelParamertes[u16Idx].u32Vactive;
			pstPanelPara->u32VSWidth = gstPanelData.stPanelParamertes[u16Idx].u32VSWidth;
			pstPanelPara->u32VSBPorch = gstPanelData.stPanelParamertes[u16Idx].u32VSBPorch;

			return TRUE;
		}
	}
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib get current panel parameters fail!\r\n");
	return FALSE;
}

/**
 * @brief This function apply panel parameters.
 * @param [in] enOutputFrameRate		which panel parameters will you want to apply
 * @retval TRUE 						indicates success
 * @retval FALSE						indicates fail
*/
BOOL MEMC_LibApplyPanelParameters(MEMC_OUTPUT_FRAMERATE enOutputFrameRate)
{
	PANEL_PARA_ST stPanelPara;
	PANEL_PARAMETERS_ST stPanelParamertes;
	if(MEMC_LibGetPanelParameters(&stPanelPara, enOutputFrameRate))
	{
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib apply panel parameters = %d\r\n", (UINT32)stPanelPara.enOutputFrameRate);

		stPanelParamertes.enOutputFrameRate = (OUTPUT_FRAMERATE)stPanelPara.enOutputFrameRate;
		stPanelParamertes.u32Htotal = stPanelPara.u32Htotal;
		stPanelParamertes.u32HtotalMax = stPanelPara.u32HtotalMax;
		stPanelParamertes.u32HtotalMin = stPanelPara.u32HtotalMin;
		stPanelParamertes.u32Hactive = stPanelPara.u32Hactive;
		stPanelParamertes.u32HSWidth = stPanelPara.u32HSWidth;
		stPanelParamertes.u32HSBPorch = stPanelPara.u32HSBPorch;
		stPanelParamertes.u32Vtotal = stPanelPara.u32Vtotal;
		stPanelParamertes.u32VtotalMax = stPanelPara.u32VtotalMax;
		stPanelParamertes.u32VtotalMin = stPanelPara.u32VtotalMin;
		stPanelParamertes.u32Vactive = stPanelPara.u32Vactive;
		stPanelParamertes.u32VSWidth = stPanelPara.u32VSWidth;
		stPanelParamertes.u32VSBPorch = stPanelPara.u32VSBPorch;
		Mid_CRTC_SetFRCTiming((OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat, stPanelParamertes);
		Mid_CRTC_SetPanelTiming((OUTPUT_FORMAT)gstAppData.stModeData.enOutputFormat, stPanelParamertes);
		return TRUE;
	}
	else
	{
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC lib apply panel parameters failed!\r\n");
		return FALSE;
	}
}

/**
 * @brief This function get MEMC library error code.
 * @return  return 	error code.
*/
UINT32 MEMC_LibGetErrorCode(VOID)
{
	return gstAppData.iErrCode;
}

/**
 * @brief This function set MEMC debug level.
 * @param [in] iLevel Specify library debug level. (range: 1~3)
 *			1: show all print messages.
 *			2: show warning and error messages.
 *			3: show error messages.
 * @retval TRUE 						indicates success
 * @retval FALSE						indicates fail
*/
BOOL MEMC_LibSetDebugLevel(UINT32 u32Level)
{
	if(u32Level != MEMC_LibGetDebugLevel())
	{
		COM_SetDebugLevel(u32Level);
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function get MEMC current debug level.
 * @return Return 	library current debug level.
*/
UINT32 MEMC_LibGetDebugLevel(VOID)
{
	return COM_GetDebugLevel();
}

/**
 * @brief This function set input data mapping
 * @param [in] u32Data_Mapping 	data mapping index(range: 0~5)
 *			0: 012 -> 012
 *			1: 012 -> 021
 *			2: 012 -> 102
 *			3: 012 -> 120
 *			4: 012 -> 201
 *			5: 012 -> 210
 * @retval VOID
*/
VOID MEMC_LibSetInputDataMapping(UINT32 u32Data_Mapping)
{
	Mid_MISC_SetInputDataMapping(u32Data_Mapping);
}

/**
 * @brief This function get input data mapping
 * @param [in] VOID
 * @retval u32Data_Mapping 		data mapping index(range: 0~5)
*/
UINT32 MEMC_LibGetInputDataMapping(VOID)
{
	return (Mid_MISC_GetInputDataMapping());
}

/**
 * @brief This function set nr data mapping
 * @param [in] u32Data_Mapping 	data mapping index(range: 0~5)
 *			0: 012 -> 012
 *			1: 012 -> 021
 *			2: 012 -> 102
 *			3: 012 -> 120
 *			4: 012 -> 201
 *			5: 012 -> 210
 * @retval VOID
*/
VOID MEMC_LibSetNRDataMapping(UINT32 u32Data_Mapping)
{
	Mid_MISC_SetNRDataMapping(u32Data_Mapping);
}

/**
 * @brief This function get nr data mapping
 * @param [in] VOID
 * @retval data mapping 		data mapping index(range: 0~5)
*/
UINT32 MEMC_LibGetNRDataMapping(VOID)
{
	return (Mid_MISC_GetNRDataMapping());
}

/**
 * @brief This function set output data mapping
 * @param [in] u32Data_Mapping 	data mapping index(range: 0~5)
 *			0: 012 -> 012
 *			1: 012 -> 021
 *			2: 012 -> 102
 *			3: 012 -> 120
 *			4: 012 -> 201
 *			5: 012 -> 210
 * @retval VOID
*/
VOID MEMC_LibSetOutputDataMapping(UINT32 u32Data_Mapping)
{
	Mid_MISC_SetOutputDataMapping(u32Data_Mapping);
}

/**
 * @brief This function get output data mapping
 * @param [in] VOID
 * @retval data mapping 		data mapping index(range: 0~5)
*/
UINT32 MEMC_LibGetOutputDataMapping(VOID)
{
	return (Mid_MISC_GetOutputDataMapping());
}

/**
 * @brief This function set black insert line mode enable
 * @param [in] bEnable		enable or disable black insert line mode
 * @retval VOID
*/
VOID MEMC_LibSetBlackInsertLineModeEnable(BOOL bEnable)
{
	Mid_MISC_SetBlackInsertLineModeEnable(bEnable);
}

/**
 * @brief This function set black insert line mode pattern number
 * @param [in] u32PatternNum  	black insert line mode  pattern number(range: 0~15 stand for 1~16)
 * @retval VOID
*/
VOID MEMC_LibSetBlackInsertLineModePatternNum(UINT32 u32PatternNum)
{
	Mid_MISC_SetBlackInsertLineModePatternNum(u32PatternNum);
}

/**
 * @brief This function set black insert line mode L pattern
 * @param [in] u32Pattern		black insert line mode L pattern
 *								(if pattern number = 2, range: 0x0~0x3)
 *                              (if pattern number = 4, range: 0x0~0xF)
 *                              (if pattern number = 8, range: 0x00~0xFF)
 *                              (if pattern number = 16, range: 0x00~0xFFFF)
 * @retval VOID
*/
VOID MEMC_LibSetBlackInsertLineModeLPattern(UINT32 u32Pattern)
{
	Mid_MISC_SetBlackInsertLineModeLPattern(u32Pattern);
}

/**
 * @brief This function set black insert line mode R pattern
 * @param [in] u32Pattern 		black insert line mode R pattern
 * 								(if pattern number = 2, range: 0x0~0x3)
 *                              (if pattern number = 4, range: 0x0~0xF)
 *                              (if pattern number = 8, range: 0x00~0xFF)
 *                              (if pattern number = 16, range: 0x00~0xFFFF)
 * @retval VOID
*/
VOID MEMC_LibSetBlackInsertLineModeRPattern(UINT32 u32Pattern)
{
	Mid_MISC_SetBlackInsertLineModeRPattern(u32Pattern);
}

/**
 * @brief This function set black insert frame mode enable
 * @param [in] bEnable			Enable or disable black insert frame mode
 * @retval VOID
*/
VOID MEMC_LibSetBlackInsertFrameModeEnable(BOOL bEnable)
{
	_PQL_Command Command;

	if(gstAppData.stModeData.enOutputFormat != OUTPUT_3D_SG)
	{
		return;
	}
	Command.u1_InsertBlack = (UBYTE)bEnable;
	PQL_Command(PQL_CMD_INSERT_BLACK, &Command);
	Mid_MISC_SetBlackInsertFrameModeEnable(bEnable);
}

#define SPLITBAR_WIDTH	14	// make sure even
/**
 * @brief This function set MEMC demo mode
 * @param [in] emMode			Specify MEMC demo mode
 * @retval TRUE 				indicates success
 * @retval FALSE				indicates fail
*/
BOOL MEMC_LibSetMEMCDemoMode(MEMC_DEMO_MODE emMode)
{
	if(gstAppData.stSysData.enDemoMode != emMode)
	{
		if(gstAppData.stModeData.enOutputRes == OUTPUT_1920X1080)
		{
			Mid_MISC_SetPostCursorPosition(959 - (SPLITBAR_WIDTH / 2), 1081);
			Mid_MISC_SetDemoWindowSettings(0, 0, 959, 0, 1079);
		}
		else if(gstAppData.stModeData.enOutputRes == OUTPUT_3840X2160)
		{
			Mid_MISC_SetPostCursorPosition(1919 - (SPLITBAR_WIDTH / 2), 2161);
			Mid_MISC_SetDemoWindowSettings(0, 0, 1919, 0, 2159);
		}
		else if(gstAppData.stModeData.enOutputRes == OUTPUT_3840X1080)
		{
			Mid_MISC_SetPostCursorPosition(1919 - (SPLITBAR_WIDTH / 2), 1081);
			Mid_MISC_SetDemoWindowSettings(0, 0, 1919, 0, 1079);
		}

		Mid_MISC_SetPostCursorWidth(SPLITBAR_WIDTH);
		Mid_MISC_SetPostCursorColor(0);
		Mid_MISC_SetPostCursorEnable((emMode == DEMO_MODE_OFF)?FALSE:TRUE);
		Mid_MISC_SetPostCursorShow((emMode == DEMO_MODE_OFF)?FALSE:TRUE);

		if(emMode == DEMO_MODE_LEFT)
		{
			Mid_MISC_SetDemoWindowMode(FALSE);
		}
		else if(emMode == DEMO_MODE_RIGHT)
		{
			Mid_MISC_SetDemoWindowMode(TRUE);
		}

		Mid_Mode_SetPTZeroType1((emMode == DEMO_MODE_OFF)?3:1);
		Mid_MISC_SetDemoWindowEnable(0, (emMode == DEMO_MODE_OFF)?FALSE:TRUE);

		gstAppData.stSysData.enDemoMode = emMode;
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function set MEMC demo mode
 * @retval MEMC_DEMO_MODE enum type currently set.
*/
MEMC_DEMO_MODE MEMC_LibGetMEMCDemoMode(VOID)
{
	return gstAppData.stSysData.enDemoMode;
}

#if 1  // k4lp
/**
 * @brief This function set ME2 mode
 * @param [in] UINT32 uiME2_Mode: 0: 240 x 135, 1: 480 x 135, 2: 480 x 270
 * @retval VOID
*/
VOID MEMC_LibSetME2Mode(UINT32 uiME2_Mode)
{
	Mid_Mode_SetME2Mode(uiME2_Mode);
	_MEMC_LibSetInOutUseCase(gstAppData.stModeData.enInputRes, gstAppData.stModeData.enOutputRes,
							gstAppData.stModeData.enInputFormat, gstAppData.stModeData.enOutputFormat, TRUE);
}

/**
 * @brief This function get ME2 Mode.
 * @param [in] VOID.
 * @retval ME2 Mode. 0: 240 x 135, 1: 480 x 135, 2: 480 x 270
*/
UINT32 MEMC_LibGetME2Mode(VOID)
{
	return Mid_Mode_GetME2Mode();
}

/**
 * @brief This function set ME2 double scan
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID MEMC_LibSetME2DoubleScan(BOOL bEnable)
{
	Mid_Mode_SetME2DoubleScan(bEnable);
	MEMC_LibApplyPanelParameters(gstAppData.stModeData.enOutputFrameRate);
}

/**
 * @brief This function get ME2 double status.
 * @param [in] VOID.
 * @retval ME2 double status
*/
BOOL MEMC_LibGetME2DoubleScan(VOID)
{
	return Mid_Mode_GetME2DoubleScan();
}
#endif

VOID MEMC_LibForcePhaseTableInit(VOID)
{
	PQL_PhaseTable_Init();
}

extern int PictureMode_flg;
VOID MEMC_LibGetScalerVIPInfo(VOID)
{
	_PQL_Info Info;
	MEMC_SCALER_VIP_INFO	curScalerVIPInfo;
	int mSpeed;
	_RPC_clues* RPC_SmartPic_clue = NULL ;

	curScalerVIPInfo = scalerVIP_Get_Info_fromScaler();


	if(curScalerVIPInfo.bSRC_VO != gstScalerVIPInfo.bSRC_VO)
	{
		gstScalerVIPInfo.bSRC_VO = curScalerVIPInfo.bSRC_VO;
		Info.u1_SRC_VO = curScalerVIPInfo.bSRC_VO;
		PQL_Info(PQL_INFO_SRC_VO, &Info);
	}

	if(curScalerVIPInfo.bHDR_Chg!= gstScalerVIPInfo.bHDR_Chg)
	{
		gstScalerVIPInfo.bHDR_Chg = curScalerVIPInfo.bHDR_Chg;
		Info.u1_HDR_Chg = curScalerVIPInfo.bHDR_Chg;
		PQL_Info(PQL_INFO_HDR_CHG, &Info);
	}

	if(curScalerVIPInfo.mBrightness!= gstScalerVIPInfo.mBrightness)
	{
		gstScalerVIPInfo.mBrightness = curScalerVIPInfo.mBrightness;
		Info.u16_mBrightness = curScalerVIPInfo.mBrightness;
		PQL_Info(PQL_INFO_BRIGHTNESS, &Info);

	}

	if(curScalerVIPInfo.mContrast!= gstScalerVIPInfo.mContrast)
	{
		gstScalerVIPInfo.mContrast = curScalerVIPInfo.mContrast;
		Info.u16_mContrast = curScalerVIPInfo.mContrast;
		PQL_Info(PQL_INFO_CONTRAST, &Info);

	}

	mSpeed = 256;
	RPC_SmartPic_clue  = (_RPC_clues *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_RPC_SMARTPIC_CLUS);
	if(RPC_SmartPic_clue ==NULL){
		return;
	} else {
		int m_voseek = 0, m_miracast = 0;

		mSpeed = RPC_SmartPic_clue->MEMC_VCPU_setting_info.vo_channel_speed;
		curScalerVIPInfo.mSpeed = (short)Scaler_ChangeUINT32Endian(mSpeed);
		if(curScalerVIPInfo.mSpeed!= gstScalerVIPInfo.mSpeed)
		{
			gstScalerVIPInfo.mSpeed = curScalerVIPInfo.mSpeed;
			Info.s16_mSpeed = curScalerVIPInfo.mSpeed;
		PQL_Info(PQL_INFO_SPEED, &Info);

		}

		m_voseek = RPC_SmartPic_clue->MEMC_VCPU_setting_info.m_VOSeek;
		curScalerVIPInfo.mVOSeek = m_voseek;
		if(curScalerVIPInfo.mVOSeek!= gstScalerVIPInfo.mVOSeek){
			gstScalerVIPInfo.mVOSeek = curScalerVIPInfo.mVOSeek;
			Info.u1_mVOSeek = curScalerVIPInfo.mVOSeek;
			PQL_Info(PQL_INFO_VOSEEK, &Info);
			//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 0, 7, gstScalerVIPInfo.mVOSeek);
		}

		m_miracast = RPC_SmartPic_clue->MEMC_VCPU_setting_info.m_MiraCast;
		curScalerVIPInfo.m_MiraCast = m_miracast;
		if(curScalerVIPInfo.m_MiraCast!= gstScalerVIPInfo.m_MiraCast){
			gstScalerVIPInfo.m_MiraCast = curScalerVIPInfo.m_MiraCast;
			Info.u1_mMiraCast= curScalerVIPInfo.m_MiraCast;
			PQL_Info(PQL_INFO_MIRACAST, &Info);
		}

	}



	if(curScalerVIPInfo.bZoomAction!= gstScalerVIPInfo.bZoomAction)
	{
		gstScalerVIPInfo.bZoomAction = curScalerVIPInfo.bZoomAction;
		Info.u1_ZoomAction = curScalerVIPInfo.bZoomAction;
		PQL_Info(PQL_INFO_ZOOM, &Info);

	}

	if(curScalerVIPInfo.bShiftAction!= gstScalerVIPInfo.bShiftAction)
	{
		gstScalerVIPInfo.bShiftAction = curScalerVIPInfo.bShiftAction;
		Info.u1_ShiftAction = curScalerVIPInfo.bShiftAction;
		PQL_Info(PQL_INFO_SHIFT, &Info);

	}

	if(curScalerVIPInfo.source_type != gstScalerVIPInfo.source_type){
		gstScalerVIPInfo.source_type = curScalerVIPInfo.source_type;
		Info.u16_source_type = curScalerVIPInfo.source_type;
		PQL_Info(PQL_INFO_SOURCE_TYPE, &Info);
	}

	curScalerVIPInfo.MEMCMode = gstAppData.stMEMCData.enMemcMode;
	if(curScalerVIPInfo.MEMCMode!= gstScalerVIPInfo.MEMCMode){
		gstScalerVIPInfo.MEMCMode = curScalerVIPInfo.MEMCMode;
		Info.u16_MEMCMode = curScalerVIPInfo.MEMCMode;
		PQL_Info(PQL_INFO_MEMC_MODE, &Info);
	}

	if(curScalerVIPInfo.mDarkLevel != gstScalerVIPInfo.mDarkLevel){
		gstScalerVIPInfo.mDarkLevel = curScalerVIPInfo.mDarkLevel;
		Info.u8_mDarkLevel= curScalerVIPInfo.mDarkLevel;
		PQL_Info(PQL_INFO_DARKLEVEL, &Info);
	}

	if(curScalerVIPInfo.Hist_SC_flg!= gstScalerVIPInfo.Hist_SC_flg){
		gstScalerVIPInfo.Hist_SC_flg= curScalerVIPInfo.Hist_SC_flg;
		Info.u1_hist_sc_flg= curScalerVIPInfo.Hist_SC_flg;
		PQL_Info(PQL_INFO_HIST_SC, &Info);
	}

	if(curScalerVIPInfo.mSoccer_holdfrm != gstScalerVIPInfo.mSoccer_holdfrm){
		gstScalerVIPInfo.mSoccer_holdfrm = curScalerVIPInfo.mSoccer_holdfrm;
		Info.u8_mSoccer_holdfrm= curScalerVIPInfo.mSoccer_holdfrm;
		PQL_Info(PQL_INFO_SOCCER_Patch, &Info);
	}

	//PictureMode_Chg
	if(curScalerVIPInfo.PictureMode_Chg != gstScalerVIPInfo.PictureMode_Chg){
		gstScalerVIPInfo.PictureMode_Chg = curScalerVIPInfo.PictureMode_Chg;
		Info.u1_PictureMode_Chg= curScalerVIPInfo.PictureMode_Chg;
		PQL_Info(PQL_INFO_PICTUREMODE_CHG, &Info);
	}

	if(curScalerVIPInfo.bVIP_Still != gstScalerVIPInfo.bVIP_Still){
		gstScalerVIPInfo.bVIP_Still = curScalerVIPInfo.bVIP_Still;
		Info.u1_mVIP_Still= curScalerVIPInfo.bVIP_Still;
		PQL_Info(PQL_INFO_VIP_STILL, &Info);
	}

	if(curScalerVIPInfo.Forbes_flg!= gstScalerVIPInfo.Forbes_flg){
		gstScalerVIPInfo.Forbes_flg = curScalerVIPInfo.Forbes_flg;
		Info.u1_Forbes_flg= curScalerVIPInfo.Forbes_flg;
		PQL_Info(PQL_INFO_FORBES, &Info);
	}

	if( curScalerVIPInfo.DTL_Step_Hist_sum_ratio[0] != gstScalerVIPInfo.DTL_Step_Hist_sum_ratio[0] ||
		curScalerVIPInfo.DTL_Step_Hist_sum_ratio[1] != gstScalerVIPInfo.DTL_Step_Hist_sum_ratio[1] ||
		curScalerVIPInfo.DTL_Step_Hist_sum_ratio[2] != gstScalerVIPInfo.DTL_Step_Hist_sum_ratio[2] ||
		curScalerVIPInfo.DTL_Step_Hist_sum_ratio[3] != gstScalerVIPInfo.DTL_Step_Hist_sum_ratio[3] ||
		curScalerVIPInfo.DTL_Step_Hist_sum_ratio[4] != gstScalerVIPInfo.DTL_Step_Hist_sum_ratio[4]	){

		gstScalerVIPInfo.DTL_Step_Hist_sum_ratio[0] = curScalerVIPInfo.DTL_Step_Hist_sum_ratio[0];
		gstScalerVIPInfo.DTL_Step_Hist_sum_ratio[1] = curScalerVIPInfo.DTL_Step_Hist_sum_ratio[1];
		gstScalerVIPInfo.DTL_Step_Hist_sum_ratio[2] = curScalerVIPInfo.DTL_Step_Hist_sum_ratio[2];
		gstScalerVIPInfo.DTL_Step_Hist_sum_ratio[3] = curScalerVIPInfo.DTL_Step_Hist_sum_ratio[3];
		gstScalerVIPInfo.DTL_Step_Hist_sum_ratio[4] = curScalerVIPInfo.DTL_Step_Hist_sum_ratio[4];

		Info.DTL_Step_Hist_sum_ratio[0] = curScalerVIPInfo.DTL_Step_Hist_sum_ratio[0];
		Info.DTL_Step_Hist_sum_ratio[1] = curScalerVIPInfo.DTL_Step_Hist_sum_ratio[1];
		Info.DTL_Step_Hist_sum_ratio[2] = curScalerVIPInfo.DTL_Step_Hist_sum_ratio[2];
		Info.DTL_Step_Hist_sum_ratio[3] = curScalerVIPInfo.DTL_Step_Hist_sum_ratio[3];
		Info.DTL_Step_Hist_sum_ratio[4] = curScalerVIPInfo.DTL_Step_Hist_sum_ratio[4];
		PQL_Info(PQL_INFO_STEP_HIST_SUM_RATIO, &Info);
	}

}

VOID MEMC_MidSetPCOff(VOID)
{
	MEMC_MODE motion = gstAppData.stMEMCData.enMemcMode;

	if(motion == MEMC_OFF || motion >= MEMC_MODE_MAX){
		MEMC_LibSetMEMCFrameRepeatEnable(1, 1);
	}
	else{
		MEMC_LibSetMEMCFrameRepeatEnable(0, 1);
	}
}

VOID MEMC_LibInputVSXral(VOID)
{
	_PQL_Command PQLCommand;

	//ac off->on, dma enable 2 vsync delay than slavemode=1.
	//default mastermode=1, change to dtg timing when slavemode=1, wait until stable.
	//do not move into outvsync => need to act in lower framerate.
	//only valid when ac off->on

//	const	_PQLCONTEXT	*s_pContext = GetPQLContext();
//	PQL_INPUT_FRAME_RATE u8_inFrameRate = s_pContext->_external_data._input_frameRate;
//	PQL_OUTPUT_FRAME_RATE u8_outFrameRate = s_pContext->_external_data._output_frameRate;

	if(Scaler_MEMC_GetInitFlag()==1){
		g_memc_ivsync_cnt++;
		if(g_memc_ivsync_cnt>=3){
			g_memc_ivsync_cnt = 0;
			MEMC_LibSetMEMCFrameRepeatEnable((gstAppData.stMEMCData.enMemcMode==MEMC_OFF ||gstAppData.stMEMCData.enMemcMode==MEMC_MODE_MAX), 1);
			Scaler_MEMC_SetInitFlag(0);
		}
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]AC ON INIT!!!(trig=%d,vscnt=%d,mode=%d)\r\n", Scaler_MEMC_GetInitFlag(), g_memc_ivsync_cnt,gstAppData.stMEMCData.enMemcMode);
		return;
	}

	if(!Scaler_MEMC_GetMEMC_Enable())
			return;

	if((gstAppData.stMEMCData.bFrameRepeat != gstAppData.stMEMCData.bFrameRepeat_QRPC))
	{
		Mid_Mode_SetMEMCFrameRepeatEnable(gstAppData.stMEMCData.bFrameRepeat_QRPC, &Ready_For_SetMCBlendMode);
		gstAppData.stMEMCData.bFrameRepeat = gstAppData.stMEMCData.bFrameRepeat_QRPC;
		InputVSXral_FrameRepeatMode = (gstAppData.stMEMCData.bFrameRepeat == FALSE)? 5:0;
	} else {

		if( (Ready_For_SetMCBlendMode == 0) && Mid_Mode_GetMC_DMA_Ready_flag()== 1){
			Mid_Mode_SetMEMCFrameRepeatEnable(gstAppData.stMEMCData.bFrameRepeat_QRPC, &Ready_For_SetMCBlendMode);
		}
	}


	if(InputVSXral_FrameRepeatMode > 0 && (!gstAppData.stMEMCData.bFrameRepeat))
	{
		InputVSXral_FrameRepeatMode--;
		PQLCommand.u8_InputVSXral_FrameRepeatMode = InputVSXral_FrameRepeatMode;
		PQL_Command(PQL_CMD_INPUTVSXRAL_FRAMEREPEAT_MODE, &PQLCommand);
	}
	else
		InputVSXral_FrameRepeatMode = 0;


	if(gstAppData.stMEMCData.bLowDelay != gstAppData.stMEMCData.bLowDelay_QRPC)
	{
		//Mid_Mode_SetMEMCFrameRepeatEnable(gstAppData.stMEMCData.bLowDelay_QRPC);
		gstAppData.stMEMCData.bLowDelay = gstAppData.stMEMCData.bLowDelay_QRPC;

		PQLCommand.u1_lowDelayMode = gstAppData.stMEMCData.bLowDelay;
		PQL_Command(PQL_CMD_LOWDELAYMODE, &PQLCommand);
	}

	if(gstAppData.stMEMCData.input422_pc_mode != MEMC_Lib_get_INPUT_COLOR_SPACE_Mode()){
		gstAppData.stMEMCData.input422_pc_mode_QRPC = MEMC_Lib_get_INPUT_COLOR_SPACE_Mode();
		InputVSXral_PCMode_422_change = 1;
	}

 	if((gstAppData.stMEMCData.bPCMode != gstAppData.stMEMCData.bPCMode_QRPC) || (gstAppData.stMEMCData.input422_pc_mode != gstAppData.stMEMCData.input422_pc_mode_QRPC))
 	{
 		gstAppData.stMEMCData.bPCMode = gstAppData.stMEMCData.bPCMode_QRPC;
		gstAppData.stMEMCData.input422_pc_mode = gstAppData.stMEMCData.input422_pc_mode_QRPC;
		g_PCMode_flag = gstAppData.stMEMCData.bPCMode;

		//first to 7th frame: just mute, 8th to 18th frame: change out mode and fill buffer
		InputVSXral_PCMode = 18;
		MEMC_LibSetMuteColor(FALSE, FALSE, FALSE);// force black
		MEMC_LibSetMute(TRUE);
	}

	//change output mode
	if(InputVSXral_PCMode == 11)
	{
		if(gstAppData.stMEMCData.bPCMode == TRUE)
		{
			if(InputVSXral_PCMode_422_change){
				MEMC_LibSetInOutMode(MEMC_RGB_IN_PC_OUT,TRUE);
				InputVSXral_PCMode_422_change = 0;
			} else {
				MEMC_LibSetInOutMode(MEMC_RGB_IN_PC_OUT,FALSE);
			}
		}
		else
		{
			MEMC_LibSetInOutMode(MEMC_RGB_IN_VIDEO_OUT,FALSE);
			MEMC_MidSetPCOff();
		}

 		Mid_Mode_SetMEMC_PCModeEnable(gstAppData.stMEMCData.bPCMode);
 	}
	else if(InputVSXral_PCMode == 1)
	{
//		MEMC_LibSetMute(FALSE);
		if(gstAppData.stSysData.bMute != FALSE)
		{
			gstAppData.stSysData.bMute = FALSE;
		}

		InputVSXral_PCMode_422_change = 0;
	}

	if(InputVSXral_PCMode > 0)
 	{
		InputVSXral_PCMode--;
 	}
}

#ifdef WIN32
BOOL ReadRegSetCallback(ReadRegCallback cb)
{
	return RegIOReadRegSetCallback(cb);
}

BOOL WriteRegSetCallback(WriteRegCallback cb)
{
	return RegIOWriteRegSetCallback(cb);
}
#endif
extern unsigned int Get_DISP_HORIZONTAL_TOTAL(void);
VOID MEMC_SetRTKhdf(VOID)
{
#if PQL_DYNAMIC_ADJUST_FIX_ISSUE

	//											0		1		2		3		4		5		6		7		8		9		10		11		12		13		14
	const unsigned char LogoBlkSmeThr_a[15] = {	 90,	100,	100,	100,	 90,	102,	102,	102,	102,	102,	 90,	 86,	 86,	 86,	 90 };
	const unsigned char LogoBlkSmeThr_l[15] = {	 32,	 80,	 80,	 80,	 32,	 80,	 80,	 80,	 80,	 80,	0x20,	 32,	 32,	 32,	 32 };
	const unsigned char LogoBlkSmeThr_h[15] = {	190,	190,	190,	190,	190,	190,	190,	190,	190,	190,	190,	190,	190,	190,	190	};
	//											0		1		2		3		4		5		6		7		8		9		10		11		12		13		14
	const unsigned char LogoPxldf_th_a[15]  = {	0xa,	0x7,	0x7,	0x7,	0xa,	0x7,	0x7,	0x7,	0x7,	0x7,	0xa,	0x8,	0x8,	0x8,	0xa	 };
	const unsigned char LogoPxlHsty_pth[15] = { 0x7,	0x7,	0x8,	0x7,	0x7,	0x8,	0x8,	0x8,	0x8,	0x8,	0x7,	0x7,	0x8,	0x7,	0x7	 };
	const unsigned char LogoPxlHsty_nth[15] = { 0x6,	0x7,	0x8,	0x7,	0x6,	0x8,	0x8,	0x8,	0x8,	0x8,	0x6,	0x7,	0x7,	0x7,	0x6	 };


	// phase 0 [ coef0_02 coef0_01 coef0_00 coef0_01 coef0_02 ] = [ 1 2 6 2 1 ]
	// phase 1 [        0 coef1_01 coef1_00 coef1_00 coef1_01 ] = [ 0 2 4 4 2 ]
	const unsigned char u8_mcLogoSelfLpfCoef[3][5] =
	{
		{ 4, 4, 2, 4, 2 }, // K5 origianl
		{ 5, 3, 2, 4, 3 }, // adjust
		{ 6, 2, 1, 4, 2 }  // sharp
	};

	// pos/coef : c1*p0 c0*p1 c3*p2 c2*p3
	const unsigned char u8_logoScaleCoef_h[2][4] =
	{
		// cur, cur+1, cur+2, cur+3
		{ 128, 0, 0, 0 },
		{ 21, 43, 43, 21}
	};

	const unsigned char u8_logoScaleCoef_v[2][4] =
	{
		// cur, cur+1, cur+2, cur+3
		{ 128, 0, 0, 0 },
		{ 21, 43, 43, 21}
	};

	// dehalo logo process
	const unsigned char u4_dhLogo_bypass[5][15] =
	{
		//			0		1		2		3		4		5		6		7		8		9		10		11		12		13		14
		/*hor*/	{	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7	},
		/*ver*/	{	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7	},
		/*mvd*/	{	0x4,	0x4,	0x4,	0x4,	0x4,	0x4,	0x4,	0x4,	0x4,	0x4,	0x4,	0x4,	0x4,	0x4,	0x4	},
		/*smv*/	{	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7,	0x7	},
		/*tmv*/	{	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0,	0x0	}
	};

	const unsigned char u8_dhLogo_RgnThr[7][3] =
	{
		//						0		1		2
		/*================= mvd related*/
		/*sad_d*/			{	0xff,	0xff,	0xff	}, // mvd
		/*mv_d_d*/			{	0x4,	0x4,	0x2		}, // mvd
		/*mv_d_diff*/		{	0x3,	0x14,	0x8		}, // mvd
		/* ================ tmv related*/
		/*sad_t*/			{	0x10,	0x10,	0x40	}, // tmv
		/*mv_t*/			{	0x10,	0x10,	0x7		}, // tmv
		/*tmv_num[pi:ip]*/	{	0x64,	0x64,	0x56	}, // tmv
		/*tmv_mode*/		{	0x0,	0x0,	0x0		}  // tmv
	};

	//WriteRegister(FRC_TOP__PQL_0__pql_debug_info_Show_en_ADDR, 28, 28, 0x0);
	//WriteRegister(FRC_TOP__MC__mc_show_gain_ADDR, FRC_TOP__MC__mc_show_gain_BITSTART, FRC_TOP__MC__mc_show_gain_BITEND, 0x3); // mc show gain
	//WriteRegister(FRC_TOP__PQL_1__pql_rb_ctrl_dummy_b4_ADDR, 0, 0, 0x1);

	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 3, 3, 0x1);//u1_simple_scene_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 4, 4, 0x1);//u1_DSR_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 5, 5, 0x1);//u1_RepeatPattern_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 6, 6, 0x1);//u1_Natural_HighFreq_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 7, 7, 0x1);//u1_localfb_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 8, 8, 0x1);//u1_ME_Cost_Ctrl
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 9, 9, 0x1);//u1_MEUpdStgh_wrt_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 10, 10, 0x1);//u1_Unsharp_Mask_wrt_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 11, 11, 0x1); // u1_MCSobj_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 12, 12, 0x1); // u1_ME2Sobj_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 13, 13, 0x1); // u1_MECandOfst_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 14, 14, 0x1); // u1_scCtrl_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 15, 15, 0x1);// u1_MECand_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 16, 16, 0x1);// u1_MECandPnt_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 17, 17, 0x1);//u1_mc2_var_lpf_wrt_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 18, 18, 0x1);// u1_ME_ipme_flp_alp_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 19, 19, 0x1);// u1_ME_mvd_cuv_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 20, 20, 0x1);// u1_ME_AdptPnt_rnd_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 21, 21, 0x1);//u1_panning_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 22, 22, 0x1);// Ph_delay_calc_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 23, 23, 0x1);// u1_patch_highFreq_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 24, 24, 0x1);// u1_ME1_DRP_en;    only k5lp
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 25, 25, 0x1);// u1_MEacdcBld_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 26, 26, 0x1);// u1_ME_vst_en;    only k5lp
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 27, 27, 0x1);// u1_special_scfb_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 28, 28, 0x1);// u1_Identification_Pattern_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 29, 29, 0x1);// u1_logoCtrl_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 30, 30, 0x1);// u1_patch_M_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 31, 31, 0x1);// u1_Wrt_ComReg_Proc_en;

	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 0, 0, 0x1);  // u1_HDMI_powerSaving_en
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 1, 1, 0x1);  // u1_jerry_PanAct_en
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 2, 2, 0x0);  // u1_forcePhTable_Regen
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 3, 3, 0x0);  // u1_ResetFlow_en
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 4, 4, 0x0);  // u1_force_cadence_en
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 5, 8, 0x0);  // u4_force_cadence_type[5:8]
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 9, 9, 0x0);  // u1_SEFilm_fixCadence_flag
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 10, 10, 0x0);  // u1_SEFilm_powerSaving_flag
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 11, 14, 0x0);  // u4_SEFilm_force_cadence_type
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 15, 22, 0x24);  // u8_SEFilm_flush_protect_cnt
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 23, 23, 0x1);  // u8_SEFilm_BadEdit_en
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 24, 24, 0x1);  // Repeat_PureVideo_wrtAction_en
	WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 25, 25, 0x0);  // Freeze_en

	WriteRegister(FRC_TOP__software1__reg_software_08_ADDR, 0, 3, 0x8);	//BadEdit_Th_1
	WriteRegister(FRC_TOP__software1__reg_software_08_ADDR, 4, 7, 0x4);	//BadEdit_Th_2
	WriteRegister(FRC_TOP__software1__reg_software_08_ADDR, 8, 19, 0x0ff);	//GoodEdit_Th

	WriteRegister(FRC_TOP__software1__reg_software_12_ADDR, 0, 3, 0x0);	//Film_force_cadence_type
	WriteRegister(FRC_TOP__software1__reg_software_12_ADDR, 4, 4, 0x0);	//Film_force_cadence_en
	WriteRegister(FRC_TOP__software1__reg_software_12_ADDR, 5, 12, 0x32);	//PowerSavingJudge_log_en
	WriteRegister(FRC_TOP__software1__reg_software_12_ADDR, 14, 14, 0x0);	//PowerSavingJudge_log_en
	WriteRegister(FRC_TOP__software1__reg_software_12_ADDR, 15, 15, 0x1);	//PowerSavingJudge_en
	WriteRegister(FRC_TOP__software1__reg_software_12_ADDR, 16, 31, 0x708);	//PowerSavingJudge_Th

	//==========================================DBG repeat
	WriteRegister(FRC_TOP__software1__reg_software_01_ADDR, 0, 31, 0x55730);  // u28_tc_th
	WriteRegister(FRC_TOP__software1__reg_software_02_ADDR, 0, 31, 0x76c);  // u19_PRD_th0
	WriteRegister(FRC_TOP__software1__reg_software_03_ADDR, 0, 31, 0x200);//u32_mc_HVDTL_thl

	WriteRegister(FRC_TOP__software1__reg_software_04_ADDR, 0, 31, 30000);//u32_rDTL_th_1
	WriteRegister(FRC_TOP__software1__reg_software_05_ADDR, 0, 31, 45000);//u32_rDTL_th_2
	WriteRegister(FRC_TOP__software1__reg_software_06_ADDR, 0, 31, 60000);//u32_rDTL_th_3
	WriteRegister(FRC_TOP__software1__reg_software_07_ADDR, 0, 31, 150);//u32_rPRD_th_1
	WriteRegister(FRC_TOP__software1__reg_software_09_ADDR, 0, 31, 100000);//u32_rDTL_th_1
	WriteRegister(FRC_TOP__software1__reg_software_10_ADDR, 0, 31, 1500000);//u32_aDTL_th_1
	WriteRegister(FRC_TOP__software1__reg_software_11_ADDR, 0, 31, 90000);//u32_rDTL_Square_th_1

	WriteRegister(FRC_TOP__software1__reg_software_13_ADDR, 0, 31, 3);//u32_rMV_th_min
	WriteRegister(FRC_TOP__software1__reg_software_14_ADDR, 0, 31, 20);//u32_rMV_diff_th
	WriteRegister(FRC_TOP__software1__reg_software_15_ADDR, 0, 31, 16);//u32_rMV_th
	WriteRegister(FRC_TOP__software1__reg_software_16_ADDR, 0, 31, 890);//u32_rmv_cnt_avg_th

	WriteRegister(FRC_TOP__software1__reg_software_17_ADDR, 0, 31, 75000);//u32_rDTL_th_2
	WriteRegister(FRC_TOP__software1__reg_software_18_ADDR, 0, 31, 70000);//u32_rDTL_Square_th_2
	WriteRegister(FRC_TOP__software1__reg_software_19_ADDR, 0, 31, 20);//u8_rDTL_ThreeSquare_cnt_thl




	//=====           for mixed mode             ==================
	//ReadRegister(FRC_TOP__software1__reg_software_41_ADDR, 0, 7, &badCad_cond1_weighting[0]);//all
	//ReadRegister(FRC_TOP__software1__reg_software_41_ADDR, 8, 15, &badCad_cond1_weighting[1]);//top
	//ReadRegister(FRC_TOP__software1__reg_software_41_ADDR, 16, 23, &badCad_cond1_weighting[2]);//bottom
	//ReadRegister(FRC_TOP__software1__reg_software_41_ADDR, 24, 31, &badCad_cond1_weighting[3]);//left
	//ReadRegister(FRC_TOP__software1__reg_software_42_ADDR, 0, 7,  &badCad_cond1_weighting[4]);//right
	//ReadRegister(FRC_TOP__software1__reg_software_42_ADDR, 8, 15 , &badCad_cond1_weighting[5]);//center
	//ReadRegister(FRC_TOP__software1__reg_software_42_ADDR, 16, 23, &badCad_cond1_weighting[6]);//region1_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_42_ADDR, 24, 31, &badCad_cond1_weighting[7]);//region2_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_43_ADDR, 0, 7 , &badCad_cond1_weighting[8]);//region3_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_43_ADDR, 8, 15 , &badCad_cond1_weighting[9]);//region4_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_43_ADDR, 16, 23, &badCad_cond1_weighting[10]);//region5_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_43_ADDR, 24, 31, &badCad_cond1_weighting[11]);//region6_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_44_ADDR, 0, 7,  &badCad_cond1_weighting[12]);//region7_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_44_ADDR, 8, 15, &badCad_cond1_weighting[13]);//region8_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_44_ADDR, 16, 23, &badCad_cond1_weighting[14]);//region9_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_44_ADDR, 24, 31, &badCad_cond1_weighting[15]);//region10_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_45_ADDR, 0,  7, &badCad_cond1_weighting[16]);//region11_of_12regions
	//ReadRegister(FRC_TOP__software1__reg_software_45_ADDR, 8, 15, &badCad_cond1_weighting[17]);//region12_of_12regions
	//==========================================

	//++ YE Test DejudderByMotion ===========================
	WriteRegister(FRC_TOP__software1__reg_software_21_ADDR, 0, 0, 0x0);	// YE Test for DejudderByMotion switch

	//WriteRegister(FRC_TOP__software1__reg_software_22_ADDR, 0, 30, 0x0);	// YE Test reserve
	WriteRegister(FRC_TOP__software1__reg_software_22_ADDR, 31, 31, 0x1);	// YE Test for DejudderByMotion switch
	WriteRegister(FRC_TOP__software1__reg_software_22_ADDR, 0, 0, 0x0);		// YE Test for test_bit0
	WriteRegister(FRC_TOP__software1__reg_software_22_ADDR, 1, 1, 0x0);		// YE Test for test_bit1
	WriteRegister(FRC_TOP__software1__reg_software_22_ADDR, 2, 2, 0x0);		// YE Test for test_bit2
	WriteRegister(FRC_TOP__software1__reg_software_22_ADDR, 3, 3, 0x0);		// YE Test for test_bit3
	WriteRegister(FRC_TOP__software1__reg_software_22_ADDR, 4, 4, 0x0);		// YE Test for test_bit4

	WriteRegister(FRC_TOP__software1__reg_software_22_ADDR, 8, 15, 0x0);	// YE Test for GMV simulate value

	WriteRegister(FRC_TOP__software1__reg_software_45_ADDR, 24, 31, 0x14);	// YE Test for dejudder_0
	WriteRegister(FRC_TOP__software1__reg_software_46_ADDR, 0, 7, 0x14);	// YE Test for dejudder_1
	WriteRegister(FRC_TOP__software1__reg_software_46_ADDR, 8, 15, 0x14);	// YE Test for dejudder_2
	WriteRegister(FRC_TOP__software1__reg_software_46_ADDR, 16, 23, 0x14);	// YE Test for dejudder_3
	WriteRegister(FRC_TOP__software1__reg_software_46_ADDR, 24, 31, 0x14);	// YE Test for dejudder_4

	WriteRegister(FRC_TOP__software1__reg_software_58_ADDR, 0, 15,  0x0);	// YE Test for gmv_0
	WriteRegister(FRC_TOP__software1__reg_software_58_ADDR, 16, 31,0x5);	// YE Test for gmv_1
	WriteRegister(FRC_TOP__software1__reg_software_59_ADDR, 0, 10,  0x14);	// YE Test for gmv_2
	WriteRegister(FRC_TOP__software1__reg_software_59_ADDR, 11, 20,0x23);	// YE Test for gmv_3
	WriteRegister(FRC_TOP__software1__reg_software_59_ADDR, 21, 30,  0x32);	// YE Test for gmv_4


	//-- YE Test DejudderByMotion ===========================
	
	//=====           for dynamic PhTable crtl             ==================
	WriteRegister(FRC_TOP__software1__reg_software_60_ADDR, 16, 26, 0);
//	WriteRegister(FRC_TOP__software1__reg_software_60_ADDR, 25, 25, 1);
	WriteRegister(FRC_TOP__software1__reg_software_60_ADDR, 27, 27, 1); // phase_idx_cal_en
	WriteRegister(FRC_TOP__software1__reg_software_60_ADDR, 28, 28, 0); // CadenceChangeCtrl_bypass_en
	WriteRegister(FRC_TOP__software1__reg_software_60_ADDR, 29, 29, 1); // 32322_BadEdit_en
	WriteRegister(FRC_TOP__software1__reg_software_60_ADDR, 30, 30, 0); // CadenceChangeCtrl_log_en
	WriteRegister(FRC_TOP__software1__reg_software_60_ADDR, 31, 31, 1); // CadenceChangeDetect_en
	//==========================================
	//=================for DTV cadence detection control========================================
	WriteRegister(FRC_TOP__software1__reg_software_60_ADDR, 14, 14,0x1);//for DTV DW fmdet_4region en control
	WriteRegister(FRC_TOP__software1__reg_software_60_ADDR, 15, 15,0x0);//for small motion detection En
	//=======================================================================

	//=====           for power saving             ==================
	WriteRegister(FRC_TOP__software1__reg_software_61_ADDR, 0, 31, 0x1f040000);
	WriteRegister(FRC_TOP__software1__reg_software_62_ADDR, 0, 31, 0x44000000);//0x18cd0007; //0x18ef0008; //0x18890002
	WriteRegister(FRC_TOP__software1__reg_software_63_ADDR, 0, 31, 0x50141404);// power_saving_en[30:29], mute_ctrl_en[28], SE_CadenceDetect_dbg_en[27];
	//==========================================

	//=====           kmc_blend              ================
	WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, 0xff);// 0xf0
	WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, 0x20);// 0x30;
	WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, 0xf0);// 0xf0
	//==========================================
#if (IC_K5LP || IC_K6LP)
	//============  me1 drp===============
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_en_ADDR, 31, 31, 0x0);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_x2_ADDR, 20, 29, 0x190);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_x1_ADDR, 10, 19, 0xfa);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_x0_ADDR, 0, 9, 0x68);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y2_ADDR, 20, 29, 0x384);  //0x280 0x200
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y1_ADDR, 10, 19, 0x320);  //0x1a0 0x100
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y0_ADDR, 0, 9, 0x2bc);   //0x100 0x0
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_sad_th_ADDR, 16, 31, 0x7ff);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_slp1_ADDR, 8, 15, 0x1b);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_slp0_ADDR, 0, 7, 0x1b);
	//===========================
#endif
	//===  film speed up  cycle
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_quit_sml_mot_wgt), 0x5);// ox5
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_enter_22_cnt_gain), 0x2);// ox2
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_enter_32_cnt_gain), 0x3);  // ox3
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_enter_else_cnt_gain), 0x2);// ox3
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_quit_prd_th), 0x8); // 0x8
	//=========================
	//=======   FB
	MEMC_LibRTK_init_FB();
	//=======  local FB
	MEMC_LibRTK_init_LFB();
	//===============

#if 1
	//============  RS shimmer & fast motion broken
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_nums_ADDR, 21, 25, 0x5);  // 0x6
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_nums_ADDR, 0, 4, 0x2);  // 0x1
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_nums_ADDR, 8, 12, 0x1); // 0x1
	//remove. Control by ME2 init table
	//WriteRegister(FRC_TOP__PQL_0__pql_dh_close_bypass_ADDR, 5, 9, 0x2);  // 0x1   u5_phfv0_candi_num
	//WriteRegister(FRC_TOP__PQL_0__pql_dh_close_bypass_ADDR, 10, 14, 0x1); // 0x1   u5_phfv1_candi_num
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_nums_ADDR, 0, 4, 0x2);  // u5_phfv0_candi_num
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_nums_ADDR, 8, 12,0x1);	 // u5_phfv1_candi_num

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_nums_ADDR, 18, 23, 0x2); // 0x4
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_nums_ADDR, 27, 31, 0x4);  // 0x5
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_offset_nums_ADDR, 8, 10, 0x1);  // 0x1
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_offset_nums_ADDR, 16, 18, 0x0); // 0x1
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_nums_ADDR, 3, 7, 0x1);  // 0x0
	//WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_nums_ADDR, 11, 15, 0x1); // 0x0  K2_E10 fast motion broken
	WriteRegister(FRC_TOP__KME_ME2_CALC0__me2_fst_multimin2_sad_th_ADDR, 0, 12, 0x10);  // 0x0
#endif

#if 0
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sad_th_ADDR, 17, 29, 0x80); // 0x200
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ip_pi_mvdiff_gain_ADDR, 10, 15, 0x10); // 0x28
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_fst_small_object_en_ADDR, 0, 0, 0x0);
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_fst_small_object_ip_pi_mvdiff_gain_ADDR, 14, 19, 0x28); // 0x20
	//===================
#endif
	// ============BBD setting============
	WriteRegister(FRC_TOP__BBD__BBD_black_th_ADDR, 0, 7, 0x40);
	//===================

	//============  RS ME1/ME2 improve halo
	WriteRegister(FRC_TOP__KME_ME1_TOP2__me1_multimin2_sad_th_ADDR, 1, 13, 0x100);  // 0x0
	WriteRegister(FRC_TOP__KME_ME2_CALC0__me2_sec_multimin2_sad_th_ADDR, 14, 26, 0x100); // 0x0
	WriteRegister(FRC_TOP__KME_ME2_CALC0__me2_fst_multimin2_sad_th_ADDR, 0, 12, 0x100); // 0x10
	//===================

	//============  me1 adptpnt rnd curve not consistency
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y4_ADDR,20, 25, 0xE);  // 0xa
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_slope2_ADDR, 9, 17, 0x1fe); // 0x1fd
	//===================

	//============  improve default dehalo setting
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_glb_glb_gain_switch_ADDR, 18, 24, 0x60);  // 0x40
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pfv_conf_gen_curve_sel_ADDR, 1, 1, 0x0); // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_occl_gen_dif_slp_ADDR, 0, 11, 0x38); // 0x2b -> 0x60 -> 0x38
	WriteRegister(FRC_TOP__KME_DEHALO__dh_occl_gen_dif_thr_ADDR, 12, 19, 0x27); // 0x20 -> 0x50 -> 0x27
	WriteRegister(FRC_TOP__KME_DEHALO__dh_occl_gen_dif_trans_ADDR, 20, 22, 0x1);//0x0 -> 0x4 -> 0x1
	WriteRegister(FRC_TOP__KME_DEHALO__dh_occl_gen_sim_slp_ADDR, 0, 11, 0x38); // 0x20
	WriteRegister(FRC_TOP__KME_DEHALO__dh_occl_gen_sim_thr_ADDR, 12, 19, 0x4); // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pfv_check_dif_gain_p_ADDR, 12, 18, 0x10); // 0x10
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pfv_check_dif_limit_ADDR, 19, 28, 0xff); // 0x3ff
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pfv_chk_diff_win_mode_ADDR, FRC_TOP__KME_DEHALO__dh_pfv_chk_diff_win_mode_BITSTART, FRC_TOP__KME_DEHALO__dh_pfv_chk_diff_win_mode_BITEND, 0x0); // 0x1
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pfv_chk_pedal_shf_ADDR, 2, 4, 0x2); // 0x3
	WriteRegister(FRC_TOP__KME_DEHALO__dh_post_flt_en_ADDR, 23, 24, 0x3);//0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pst_medflt9_mvdf_cnt_thr_ADDR, 16, 19, 0x3);
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pst_medflt_mod_ADDR, 15, 17, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pst_medflt_sad_valu_th_ADDR, 5, 18, 0x10);
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pst_medflt_mvdif_th_ADDR,    0,7,    0x14);
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pfv_gen_diff_slp0_ADDR, 20, 23, 0x2); // 0x4
	WriteRegister(FRC_TOP__KME_DEHALO__dh_post_flt_apl_dif_gain_ADDR, 3, 8, 0x0); // 0x20
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pstoccl_sel_ADDR, 30, 31, 0x2); // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pstflt_occl_mv_accord_ADDR, 29, 29, 0x0); // 0x1
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pst_occl_fir_major_th_ADDR, 1, 3, 0x1); // 0x3
	WriteRegister(FRC_TOP__PQL_0__pql_dh_meAllDtl_th0_ADDR, 0, 24, 0x19000); // 0x20000
	// for 50 Ogasawara_Dark10_ContDM.mp4 pattern setting ----------------- start
	// WriteRegister(FRC_TOP__PQL_0__pql_SA_good_rgn_num_th_ADDR, 15, 20, 0x4);   //0x4  u6_mv_accord_mvx_thr
	// WriteRegister(FRC_TOP__PQL_0__pql_SA_good_rgn_num_th_ADDR, 26, 31, 0x32);   //0x30  u6_mv_accord_gmv_ratio_thr
	WriteRegister(FRC_TOP__PQL_0__pql_SA_good_rgn_num_th_ADDR, 15, 20, 0x10);   //0x10  u6_mv_accord_mvx_thr
	WriteRegister(FRC_TOP__PQL_0__pql_SA_good_rgn_num_th_ADDR, 21, 25, 0x10);   //0x10  u6_mv_accord_mvx_thr
	WriteRegister(FRC_TOP__PQL_0__pql_SA_good_rgn_num_th_ADDR, 26, 31, 0x22);   //0x22  u6_mv_accord_gmv_ratio_thr
	// for 50 Ogasawara_Dark10_ContDM.mp4 pattern setting ----------------- end
	//=================   dehalo shift address
	WriteRegister(FRC_TOP__KME_DEHALO__dh_rt1_c_xrounding0_ADDR, 7, 15, 0x40);  // 0x50
	WriteRegister(FRC_TOP__KME_DEHALO__dh_rt1_c_xrounding1_ADDR, 9, 17, 0x70); // 0x40
	WriteRegister(FRC_TOP__KME_DEHALO__dh_rt1_xsec_shft_ADDR, 3, 5, 0x3); // 0x2
	WriteRegister(FRC_TOP__KME_DEHALO__dh_rt2_xsec_shft_ADDR, 3, 5, 0x2); // 0x2
	WriteRegister(FRC_TOP__KME_DEHALO__dh_rt1_c_yrounding0_ADDR, 0, 8, 0x40); // 0x80
	WriteRegister(FRC_TOP__KME_DEHALO__dh_rt1_c_yrounding1_ADDR, 18, 26, 0xc0); // 0x40
	WriteRegister(FRC_TOP__KME_DEHALO__dh_rt1_ysec_shft_ADDR, 12, 14, 0x3); // 0x2

	//===================
	//====  improve dehalo_close  small region mv
	WriteRegister(FRC_TOP__PQL_0__pql_dh_sml_rgnActive_gmv_x_thr_ADDR, 16, 23, 0x12); // 0xf
	WriteRegister(FRC_TOP__PQL_0__pql_dh_sml_rgnActive_goodpfv_diff_thr_ADDR, 0, 18, 0x1a000); // 0x1f800
	WriteRegister(FRC_TOP__PQL_0__pql_dh_sml_rgnActive_apl_thr_ADDR, 19, 26, 0x66); // 0x50
	WriteRegister(FRC_TOP__PQL_0__pql_dh_sml_rgnActive_goodRgn_cnt_thr_ADDR, 0, 4, 0x7); // 0xa
	WriteRegister(FRC_TOP__PQL_0__pql_dh_sml_rgnActive_goodrgn_sad_thr_ADDR, 5, 14, 0x40); // 0x30
	WriteRegister(FRC_TOP__PQL_0__pql_dh_sml_rgnActive_gmv_cnt_ADDR, 20, 31, 0x360); // 0x3c0
	WriteRegister(FRC_TOP__PQL_0__pql_dh_sml_rgnActive_gmv_ucof_ADDR, 0, 11, 0xF); // 0x8
	WriteRegister(FRC_TOP__PQL_0__pql_dh_sml_rgnActive_badpfv_diff_thr_ADDR, 12, 31, 0x13600); // 0x1d000
	WriteRegister(FRC_TOP__PQL_0__pql_dh_sml_rgnActive_badRgn_sad_thr_ADDR, 0, 9, 0x30); // 0x40
	WriteRegister(FRC_TOP__PQL_0__pql_dh_sml_rgnAction_bad_gmv_cnt_thr_ADDR, 10, 21, 0x360); // 0x3e0


	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_x0_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_x0_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_x0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_x1_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_x1_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_x1_BITEND, 0x28);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_x2_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_x2_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_x2_BITEND, 0x64);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_y0_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_y0_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_y0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_y1_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_y1_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_y1_BITEND, 0x3);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_y2_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_y2_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_y2_BITEND, 0x5);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_slp0_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_slp0_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_slp0_BITEND, 0x4);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_slp1_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_slp1_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_slp1_BITEND, 0x2);

	//====
	WriteRegister(FRC_TOP__PQL_0__pql_dh_pfvconf_en_ADDR, 1, 20, 0x8000); // org : 0x20000 	
	//=====================

	//=====  me2 lfsr_mask dyn
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_lfsr_x_mask_ADDR, 9, 12, 0x3); // 0x7
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_lfsr_y_mask_ADDR, 13, 16, 0x3); // 0x7

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_lfsr_mask_dyn_en_ADDR ,0 ,0 ,0x1);// 0x 1
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_lfsr_x_mask_curve_x0_ADDR ,17 ,26 ,0x120);// 0x10
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_lfsr_x_mask_curve_x1_ADDR ,0 ,9 ,0x300);// 0x20
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_lfsr_x_mask_curve_x2_ADDR ,10 ,19 ,0x3c0);// 0x30
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_lfsr_y_mask_curve_x0_ADDR ,20,29 ,0x120);// 0x1ff
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_lfsr_y_mask_curve_x1_ADDR ,0 ,9 ,0x300);// 0x1ff
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_lfsr_y_mask_curve_x2_ADDR ,10 ,19 ,0x3c0);// 0x1ff
	//=====  me2  small_object
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_fst_small_object_en_ADDR ,FRC_TOP__KME_ME2_CALC0__kme_me2_fst_small_object_en_BITSTART ,FRC_TOP__KME_ME2_CALC0__kme_me2_fst_small_object_en_BITEND ,0x1);
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_en_ADDR ,FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_en_BITSTART ,FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_en_BITEND ,0x1);

	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sad_th_ADDR, 17, 29, 0x200); //0xc0// 0x200
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sm_mv_th_ADDR, 0, 9, 0x20); //0xe// 0x20
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ip_pi_mvdiff_gain_ADDR, 10, 15, 0x20);//0x6 // 0x20
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ph_mvdiff_gain_ADDR, 16, 21, 0x10); //0x0// 0x10

	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_fst_small_object_sad_th_ADDR, 1, 13, 0x200); //0xc0// 0x200
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_fst_small_object_sm_mv_th_ADDR, 22, 31, 0x20); //0xe// 0x20
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_fst_small_object_ip_pi_mvdiff_gain_ADDR, 14, 19, 0x20); //0x6// 0x20
	WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_fst_small_object_ph_mvdiff_gain_ADDR, 20, 25, 0x10); //0x0// 0x10
	//=================   fix mc logo
	WriteRegister(FRC_TOP__MC__mc_blklogo_erosion_en_ADDR, FRC_TOP__MC__mc_blklogo_erosion_en_BITSTART, FRC_TOP__MC__mc_blklogo_erosion_en_BITEND, 0x1);
	WriteRegister(FRC_TOP__MC__mc_blklogo_ern_sel_ADDR, FRC_TOP__MC__mc_blklogo_ern_sel_BITSTART, FRC_TOP__MC__mc_blklogo_ern_sel_BITEND, 0x1);

	WriteRegister(FRC_TOP__MC2__mc_logo_vlpf_level_ADDR, 19, 25, 0x30);  // 0x7f
	WriteRegister(FRC_TOP__KME_LOGO2__km_logo_blklogopostdlt_th_ADDR, 9, 14, 0x4);  // 0x3
	WriteRegister(FRC_TOP__MC__mc_pt_logo_th_ADDR, 4, 7, 0x3);  // 0x6

#if 0
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx0_ADDR, 0, 7, 0x45);  // 0x50
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx1_ADDR, 8,  15, 0x25);  // 0x30
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx2_ADDR, 16, 23, 0x25);  // 0x30
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx3_ADDR, 24, 31, 0x25);  // 0x50
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx4_ADDR, 0, 7, 0x25);  // 0x30
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx5_ADDR, 8, 15, 0x25);  // 0x30
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx6_ADDR, 16, 23, 0x25);  // 0x30
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx7_ADDR, 24, 31, 0x25);  // 0x30
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx8_ADDR, 0, 7, 0x25);  // 0x30
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx9_ADDR, 8, 15, 0x25);  // 0x50
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx10_ADDR, 16, 23, 0x40); // 0x30
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx11_ADDR, 24, 31, 0x25); // 0x30
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx12_ADDR, 0, 7, 0x25); // 0x30
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx13_ADDR, 8, 15, 0x25); // 0x40
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx14_ADDR, 24, 31, 0x30); // 0x30
#endif
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_m_ADDR, 0, 7, 0x30); // 0x40
	WriteRegister(FRC_TOP__MC__mc_pt_z_type1_ADDR, 8, 10, 0x3);  // 0x4
	WriteRegister(FRC_TOP__MC__mc_pt_z_type2_ADDR, 12, 14, 0x3); // 0x4
	WriteRegister(FRC_TOP__MC__mc_blklogo_thr_ADDR, 17, 20, 0x6);

	WriteRegister(FRC_TOP__PQL_1__pql_logo_clr_half_thr_ADDR,16, 23, 0x60);// 0x6

	//logo and logo broken
	WriteRegister(FRC_TOP__MC2__mc_logo_self_alpha_slp_ADDR,8, 15, 0x4);// 0x6
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_grddiffrs_bit_ADDR,20, 21, 0x1);// 0x1
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y0_ADDR,0, 3, 0x0);// 0x0
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y1_ADDR,4, 7, 0x2);// 0x3
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y2_ADDR,8, 11, 0x4);// 0x5

	//for static condition
	WriteRegister(FRC_TOP__PQL_1__pql_logo_dummy_c8_ADDR, 1, 1, 0x1);//u1_GlbHstyClr_en
	WriteRegister(FRC_TOP__PQL_1__pql_logo_dummy_cc_ADDR, 0, 15, 0x3);//u16_RgHstyClr_Gmv_thr
	WriteRegister(FRC_TOP__PQL_1__pql_logo_dummy_d0_ADDR, 0, 15, 0x71e8);//~8_RgHstyClr_Gmv_cnt_thr, ~90% (total : 32400)
	WriteRegister(FRC_TOP__PQL_1__pql_logo_dummy_d4_ADDR, 0, 15, 0x3);//u12_RgHstyClr_Gmv_unconf_thr
	WriteRegister(FRC_TOP__PQL_1__pql_logo_dummy_d8_ADDR, 0, 15, 0x3);//u10_RgHstyClr_Gsad_thr
	//===================


	//=================   Rim Ctrl
	WriteRegister(FRC_TOP__PQL_0__pql_rim_diffth_ADDR, 1, 12, 0x5a);  // 0x64
	WriteRegister(FRC_TOP__PQL_0__pql_rim_me_pixrim_shrink_ADDR, 8, 15, 0x0);  // 0x1
	WriteRegister(FRC_TOP__PQL_0__pql_rim_me1_pixrim_offset_ADDR, 16, 23, 0x0);  // 0x1
	WriteRegister(FRC_TOP__PQL_0__pql_dummy_c4_ADDR, 18, 25, 0x3);
	WriteRegister(FRC_TOP__PQL_0__pql_dummy_c4_ADDR, 26, 30, 0x1);
	//===================
	//=================   acdc_bld
	// ---- fadeInOut----
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_fadeInOut_en_ADDR, 0, 0, 0x1); //u1_fadeInOut_en
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_fdIO_dh_close_thr_ADDR, 7, 11, 0xD); //u1_fdh_close_thr
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_fdIO_apl_diff_thr_low_ADDR, 12, 21, 0x5); //u1_diff_thr_low
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_fdIO_apl_diff_thr_hig_ADDR, 22, 31, 0x30); //u1_fdiff_thr_hig

	WriteRegister(FRC_TOP__PQL_0__pql_scAls_fdIO_acdc_cnt_alpha_low_ADDR, 0, 7, 0xa0); //u1_fadeInOut_en
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_fdIO_acdc_cnt_alpha_hig_ADDR, 8, 15, 0xfa); //u1_fdh_close_thr
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_fdIO_acdc_sad_ratio_low_ADDR, 16, 23, 0x0); //u1_difff_thr_low
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_fdIO_acdc_sad_ratio_hig_ADDR, 24, 31, 0x0); //u1_fdiff_thr_hig
	// ---- fadeInOut----

	WriteRegister(FRC_TOP__PQL_1__pql_wr_dyn_me_acdc_bld_wrt_en_ADDR, 7, 7, 0x1); //u1_dynME_acdcBld_wrt_en (for fade in/out)FRC_TOP__KME_ME1_TOP2__me1_dc_psad_bld_mode_ADDR
	WriteRegister(FRC_TOP__KME_ME1_TOP2__me1_dc_psad_bld_mode_ADDR, 0, 1, 0x2); //0x0   need DC_AC_BLD ,then pass me1_psad_alp curve

	WriteRegister(FRC_TOP__PQL_0__pql_scAls_fdIO_conf_iir_alpha_ADDR, 0, 3, 0x8); //pql_scAls_fdIO_conf_iir_alpha        merlin2(0x4)
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_holdfrm_ADDR, 4, 7, 0x0); //pql_scAls_dynMe_acdc_bld_holdfrm
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_x_com1_ADDR, 8, 15, 0x0); //pql_scAls_dynMe_acdc_bld_x_com1
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_x_com2_ADDR, 16, 23, 0x17); //pql_scAls_dynMe_acdc_bld_x_com2
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_x_com3_ADDR, 24, 31, 0x45); //pql_scAls_dynMe_acdc_bld_x_com3

	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_y_com1_ADDR, 0, 7, 0xd); //pql_scAls_dynMe_acdc_bld_y_com1
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_y_com2_ADDR, 8, 15, 0x6); //pql_scAls_dynMe_acdc_bld_y_com2
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_y_com3_ADDR, 16, 23, 0x0); //pql_scAls_dynMe_acdc_bld_y_com3
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_x_fdIO1_ADDR, 24, 31, 0x0); //pql_scAls_dynMe_acdc_bld_x_fdIO1

	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_x_fdIO2_ADDR, 0, 7, 0x17); //pql_scAls_dynMe_acdc_bld_x_fdIO2
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_x_fdIO3_ADDR, 8, 15, 0x45); //pql_scAls_dynMe_acdc_bld_x_fdIO3
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_y_fdIO1_ADDR, 16, 23, 0x1f); //pql_scAls_dynMe_acdc_bld_y_fdIO1
	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_y_fdIO2_ADDR, 24, 31, 0x1d); //pql_scAls_dynMe_acdc_bld_y_fdIO2

	WriteRegister(FRC_TOP__PQL_0__pql_scAls_dynMe_acdc_bld_y_fdIO3_ADDR, 0, 7, 0x0); //pql_scAls_dynMe_acdc_bld_y_fdIO3
	WriteRegister(FRC_TOP__PQL_0__pql_dynME_ac_dc_bld_apl_holdfrm_ADDR, 0, 7,0xc);    // pql_dynME_ac_dc_bld_apl_holdfrm
	//===================
	//============  mc
	WriteRegister(FRC_TOP__MC__mc_bld_mvd_y_min_ADDR,16, 23, 0x68);  // 0xe0
	WriteRegister(FRC_TOP__MC__mc_bld_mvd_y_max_ADDR, 24, 31, 0xc0); // 0xff
	//===================
	//============  me vbuf   =====
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_gmv_en_ADDR,15, 15, 0x1);  // 0x0
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_zmv_en_ADDR, 16, 16, 0x0); // 0x1
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_gmv_en_ADDR,14, 14, 0x1);  // 0x0
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_zmv_en_ADDR, 15, 15, 0x0); // 0x1
	//===================

	//=====              sync me1 top0 =================

	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_dc_pix_cor_thd_ADDR, 16, 23, 0x3); //0x2
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_dc_pix_sad_limt_ADDR, 0, 7, 0x80); // 0xff
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_ac_pix_cor_thd_ADDR, 8, 15, 0x10); //0x2

	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_mvd_cost_limt_ADDR, 16, 28, 0x14); //0x10
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_gmvd_cost_limt_ADDR, 0, 12, 0x06); //0x80
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_adpt_cor_gain0_ADDR, 0, 7, 0x40); //0x8
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_adpt_cor_gain1_ADDR, 8, 15, 0x40); //0x8
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_adpt_cor_gain2_ADDR, 16, 23, 0x40); //0x8
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_adpt_cor_limt_ADDR, 4, 13, 0x30); //0x60
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_adptpnt_zmv_en_ADDR, 0, 0, 0x0); //0x1

	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_ADDR, 16, 23, 0x30); //0x28
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_zmv_ADDR, 16, 28, 0x400); //0x180
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_mm_psad_norm_en_ADDR, 1, 1, 0x0); //0x1
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_mm_psad_norm_thd_ADDR, 2, 14, 0x12c); //0x20

	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_dc_pix_cor_thd_ADDR, 16, 23, 0x3); //0x2
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_dc_pix_sad_limt_ADDR, 0, 7, 0x80); //0xff
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_ac_pix_cor_thd_ADDR, 8, 15, 0x10); //0x2
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_ac_pix_ad_data_ADDR, 16, 23, 0x3f); //0x40
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_mvd_cost_limt_ADDR, 16, 23, 0x14); //0x10
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_gmvd_cost_limt_ADDR, 0, 12, 0x06); //0x80
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_adpt_cor_gain0_ADDR, 0, 7, 0x40); //0x8
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_adpt_cor_gain1_ADDR, 8, 15, 0x40); //0x8
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_adpt_cor_gain2_ADDR, 16, 23, 0x40); //0x8
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_adpt_cor_limt_ADDR, 4, 13, 0x30); //0x60
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_adptpnt_zmv_en_ADDR, 0, 0, 0x0); //0x1

	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_ADDR, 16, 23, 0x30); //0x28
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_zmv_ADDR, 16, 28, 0x400); //0x180
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_mm_psad_norm_en_ADDR, 1, 1, 0x0); //0x1
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_mm_psad_norm_thd_ADDR, 2, 14, 0x12c); //0x20
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_dtl_hf_cor_ADDR, 8, 15, 0x12); //0x8

	//============  deHalo  occl ===============
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_post_cddpnt_ppi_ADDR, 8, 15, 0x10); //0x20
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_post_flagpnt_ppi_ADDR, 16, 23, 0x80); //0x80
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_post_flagpnt_ip_ADDR, 24, 31, 0x20); //0x0

	//===========================
	//=========  PRD
	#if Pro_TCL
	WriteRegister(FRC_TOP__KME_ME1_TOP2__me1_prd_mvdiff_th_ADDR, 1, 10, 0x5); //0x8
	WriteRegister(FRC_TOP__KME_ME1_TOP2__me1_prd_apl_thr_high_ADDR, 8, 15, 0xb0); //0xff
	#else
	WriteRegister(FRC_TOP__KME_ME1_TOP2__me1_prd_mvdiff_th_ADDR, 1, 10, 0x2); //0x8
	WriteRegister(FRC_TOP__KME_ME1_TOP2__me1_prd_apl_thr_high_ADDR, 8, 15, 0xff); //0xff
	#endif

	WriteRegister(FRC_TOP__KME_ME1_TOP2__me1_prd_sad_diff_th_ADDR, 11, 23, 0x400); //0x80
	WriteRegister(FRC_TOP__KME_ME1_TOP2__me1_prd_dtl_thr_low_ADDR, 16, 23, 0x40); //0x40
	WriteRegister(FRC_TOP__KME_ME1_TOP2__me1_prd_dtl_thr_high_ADDR, 24, 31, 0xA0); //0xC0
	//===================
	//=====              sync me1 top1 =================

	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_alp_x2_ADDR, 8, 15, 0x25); //0x27
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_alp_x3_ADDR, 16, 23, 0x60); //0x62
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_alp_x4_ADDR, 24, 31, 0x8c); //0x90
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_alp_y1_ADDR, 8, 13, 0xa); //0x12
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_alp_y2_ADDR, 14, 19, 0xa); //0x12
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_alp_y3_ADDR, 20, 25, 0xa); //0x12
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_alp_y4_ADDR, 26, 31, 0xa); //0x12
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_alp_y5_ADDR, 0, 5, 0xa); //0x12

	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_x2_ADDR, 8, 15, 0x8); //0xd
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_x3_ADDR, 16, 23, 0x64); //0x20
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_x4_ADDR, 24, 31, 0x9c); //0x3a
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_x5_ADDR, 0, 7, 0xd3); //0x63
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_y1_ADDR, 8, 17, 0x0); //0xbe
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_y2_ADDR, 18, 27, 0x0); //0x7f
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_y3_ADDR, 0, 9, 0x10); //0x4c
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_y4_ADDR, 10, 19, 0xa); //0x20
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_y5_ADDR, 20, 29, 0x8); //0x0
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_slope1_ADDR, 0, 15, 0x0); //0xff66
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_slope2_ADDR, 16, 31, 0x5); //0xffa8
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_slope3_ADDR, 0, 15, 0xfffc); //0xffca
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_dgain_slope4_ADDR, 16, 31, 0xfffe); //0xffe7
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_pgain_x2_ADDR, 10, 19, 0xa1); //0x86
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_pgain_x3_ADDR, 20, 29, 0x23b); //0x1e5
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_pgain_y1_ADDR, 0, 5, 0x20); //0x7
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_pgain_y2_ADDR, 6, 11, 0xe); //0x7
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_pgain_y3_ADDR, 12, 17, 0x3); //0x1f
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_pgain_slope1_ADDR, 18, 26, 0x1fe); //0x0
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_pgain_slope2_ADDR, 0, 8, 0x1ff); //0x1

	// Modify for casino card inside edge broken
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITEND, 0x0); // 0x0
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITEND, 0x4); //0x2 // 0x4
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITEND, 0x41); //0x8 // 0x41
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITEND, 0x6); //0x16 // 0xc
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITEND, 0x2); //0x16 // 0x3
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITEND, 0x0); //0x16 // 0x0
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITEND, 0x7f0); //0x763 // 0x7fb
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITEND, 0x7ff); //0x7f8 // 0x7fe

	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITEND, 0x0); //0x39b
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITEND, 0x1e4); //0x39b
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITEND, 0x39c); //0x4c7
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITEND, 0x2); //0x40 // 0x5
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITEND, 0x19); //0xff // 0x33
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITEND, 0x0); // 0x0
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITEND, 0x0); //0xa // 0x0

	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_x1_ADDR, 0, 7, 0x0); //0x15
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_x2_ADDR, 8, 15, 0x8); //0x47
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_x3_ADDR, 16, 23, 0x44); //0x98
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_x4_ADDR, 24, 31, 0xc1); //0xdf
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_slope1_ADDR, 0, 8, 0x1ea); //0x1fe
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_slope3_ADDR, 18, 26, 0x0); //0x1fe

	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mm_psad_norm_x2_ADDR, 22, 31, 0x148); //0xff
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mm_psad_norm_x3_ADDR, 0, 9, 0x288); //0x26e
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mm_psad_norm_x4_ADDR, 10, 19, 0x37f); //0x3ff
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mm_psad_norm_y1_ADDR, 20, 29, 0x3ff); //0x133
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mm_psad_norm_y2_ADDR, 0, 9, 0x3ff); //0x2e3
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mm_psad_norm_y3_ADDR, 10, 19, 0x34d); //0x3ff
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mm_psad_norm_y4_ADDR, 20, 29, 0x26f); //0x3ff
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mm_psad_norm_slope1_ADDR, 0, 14, 0x0); //0xd8
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mm_psad_norm_slope2_ADDR, 16, 30, 0x7fb5); //0x63
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mm_psad_norm_slope3_ADDR, 0, 14, 0x7fd2); //0x0

	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_x2_ADDR, 16, 28, 0x0); //0x173
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_x3_ADDR, 0, 12, 0x1fbe); //0x1fff
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_y2_ADDR, 0, 12, 0x410); //0x1fff
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_y3_ADDR, 16, 28, 0x426); //0x1fff
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_slope1_ADDR, 0, 15, 0x0); //0xae

	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me2_hold_cnt_ADDR, 8, 15, 0x1); //0x2

	//====================================
	//==========  sc  ==========
	WriteRegister(FRC_TOP__PQL_0__pql_dyn_SAD_Diff_sadAll_th_l_ADDR, 0, 27, 0x180000); //0x140000
	WriteRegister(FRC_TOP__PQL_0__pql_dyn_SAD_Diff_sadAll_th_h_ADDR, 0, 27, 0x700000); //0x500000
	WriteRegister(FRC_TOP__PQL_0__pql_dyn_SAD_Diff_rmv_ratio_th_l_ADDR, 28, 31, 0xa); //0xb
	WriteRegister(FRC_TOP__PQL_0__pql_dyn_SAD_Diff_rmv_ratio_th_h_ADDR, 28, 31, 0xd); //0xd
	WriteRegister(FRC_TOP__PQL_0__pql_dyn_SAD_Diff_gmv_ratio_th_ADDR, 24, 29, 0x1c); //0x1c
	//=====================================

#if (IC_K5LP || IC_K6LP)
	//==== mv search range =====
	WriteRegister(FRC_TOP__PQL_0__pql_dynSR_mvy_range0_ADDR, 24, 31, 0x88); // 0x70
	//=======================
	//=====              fblvl filter ======
	WriteRegister(FRC_TOP__MC__mc_fblvl_filter_cut_ADDR,0, 7, 0x1e);
	WriteRegister(FRC_TOP__MC__mc_fblvl_filter_th_ADDR,8, 15, 0x0c);
	WriteRegister(FRC_TOP__MC__mc_fblvl_filter_avg_th_ADDR, 16, 23, 0x04);
	WriteRegister(FRC_TOP__MC__mc_fblvl_filter_en_ADDR,0, 0, 0x1);
	WriteRegister(FRC_TOP__MC__mc_fblvl_filter_num_ADDR,1, 6, 0xf);
	WriteRegister(FRC_TOP__MC__mc_fblvl_filter_mode_ADDR, 8, 9, 0x0);
	//====================================
	//=====          dh_fadeInOut  ======
	WriteRegister(FRC_TOP__PQL_0__pql_dh_fadeInOut_holdfrm_ADDR,9,13,0x8);  // u5_dh_fadeInOut_holdfrm
	//====================================
	//==========  sc  ==========
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_mot_th_ADDR, 0, 30, 0x5000); //0xc000
	//=====================================
	//==========rim ctrl ==========
	WriteRegister(FRC_TOP__PQL_0__pql_rim_diffth_ADDR, 1, 12, 0x1c);  // 0x64   //  k5lp hw sad bug
	//=====================================


	MEMC_LibRTK_init_VST();

	//===== Logo debug show ======   only k5lp
	WriteRegister(FRC_TOP__KME_LOGO1__cadnewfrm_blklogo_en_sel_ADDR, FRC_TOP__KME_LOGO1__cadnewfrm_blklogo_en_sel_BITSTART, FRC_TOP__KME_LOGO1__cadnewfrm_blklogo_en_sel_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_LOGO1__cadnewfrm_blklogo_en_ADDR, FRC_TOP__KME_LOGO1__cadnewfrm_blklogo_en_BITSTART, FRC_TOP__KME_LOGO1__cadnewfrm_blklogo_en_BITEND, 0x1);
	//====================================
	//WriteRegister(FRC_TOP__PQL_0__pql_rim_logopixrim_hoffset_ADDR, 0, 7, 0x0);//u8_rim_logopixrim_h_comp
	//WriteRegister(FRC_TOP__PQL_0__pql_rim_logopixrim_voffset_ADDR, 8, 15, 0x0);//u8_rim_logopixrim_v_comp
	WriteRegister(FRC_TOP__PQL_0__pql_rim_me1_blkrim_offset_ADDR, 24, 31, 0x0);//u8_lbme_pixRim_comp
#if 0
	//-----for shimmer -----
	//#page23
	WriteRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_shm_det_en_ADDR,0,0,0x1);
	WriteRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_me1_shm_ac_alpha_ADDR,2,7,0x3f);
	WriteRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_shm_dtl_h_ADDR,16,23,0x10);
	WriteRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_shm_min_sad_th_ADDR,0,7,0xa);
	WriteRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_shm_max_sad_th_ADDR,8,19,0x320);
	//#page2A
	WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_vbuf_shm_en_ADDR,0,0,0x1);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_vbuf_shm_dtl_l_ADDR,2,7,0x0);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_vbuf_shm_dtl_h_ADDR,8,15,0x10);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_vbuf_shm_avg_ac0_ADDR,16,21,0xa);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_vbuf_shm_min_sad_th_ADDR,24,31,0xa);

	WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_vbuf_shm_dyn_SAD_th0_ADDR,0,9,0xc8);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_vbuf_shm_dyn_SAD_th1_ADDR,16,25,0x190);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_vbuf_shm_ac_alpha_ADDR,26,31,0x7f);
#endif

#endif // (IC_K5LP || IC_K6LP)
#endif // PQL_DYNAMIC_ADJUST_FIX_ISSUE

#if RTK_ADJUST_HDF
	WriteRegister(FRC_TOP__PQL_1__pql_phT_dejudder_lvl_ADDR, 1, 5, 0x0);//dejudder_lvl
	WriteRegister(FRC_TOP__PQL_1__pql_phT_deblur_lvl_ADDR, 6, 10, 0x0);// deblur_lvl;
	WriteRegister(FRC_TOP__IPPRE__ippre_retiming_dummy_num_ADDR, 24, 27, 0x6);// ippre_retiming_dummy_num;
	WriteRegister(FRC_TOP__PQL_1__pql_film_det_cadence_en_ADDR, 1, 31, 0x2000ffff);// pql_film_det_cadence_en;

	// 20170705 robin :set dec_vtrig_dly
//MERLIN5_BRING_UP//	WriteRegister(FRC_TOP__CRTC1__crtc1_dec_vtrig_dly_ADDR, 6, 18, 0x5d0);
	WriteRegister(FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_ADDR, 25, 28, 0x9);

	//==== logo default setting ======
	//WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_logo_limit_en_ADDR, 0, 0, 0x1);
	//WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_logo_searchx_ADDR, 2, 6, 0xf);
	//WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_logo_searchy_ADDR, 7, 11, 0x11);

	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkgrdhor_th_ADDR, 0, 7, 0x3);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkgrdver_th_ADDR, 16, 23, 0x4);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkgrdp45_th_ADDR, 8, 15, 0x6);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkgrdn45_th_ADDR, 24, 31, 0xb);

	WriteRegister(FRC_TOP__KME_LOGO2__km_logo_blklogopostdlt_th_ADDR, 9, 14, 0x3);
	//====================================
	//WriteRegister(FRC_TOP__PQL_1__pql_wr_mc_lbmc_mode_en_ADDR, 16, 16, 0x1);
#endif // RTK_ADJUST_HDF

#if 0//PQL_DYNAMIC_ADJUST // apply K3L default defined  ==> 0

	//----------------PQL_0(0x45)----------------
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 0, 0, 0x1);//u1_zoom_detect_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 1, 1, 0x1);//u1_mc2_var_lpf_wrt_en

	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 5, 5, 0x1);//u1_LightSword_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 6, 6, 0x1);//u1_patch_casino_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 7, 7, 0x1);//u1_BigAPLDiff_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 8, 8, 0x1);//u1_casino_RP_DetCtrl
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 9, 9, 0x0);//u1_FB_pan_apply_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 10, 10, 0x0);//u1_FB_cross_apply_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 11, 11, 0x1);//u1_patch_soccer_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 12, 12, 0x1);//u1_fastmotion_det_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 13, 13, 0x1);//u1_localfb_wrt_en
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 14, 14, 0x1); // u1_scCtrl_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 15, 15, 0x1);// u1_MECand_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 16, 16, 0x1);// u1_MECandPnt_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 17, 17, 0x1);// u1_GMV_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 18, 18, 0x1);// u1_MEScan_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 19, 19, 0x1);// u1_MEUpdStgh_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 20, 20, 0x1);// u1_logoCtrl_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 21, 21, 0x1);// u1_lg_UXN_patch_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 23, 23, 0x1);// u1_patch_highFreq_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 24, 24, 0x1);// u8_EPG_apply;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 25, 25, 0x1);// u1_MEacdcBld_wrt_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 26, 26, 0x1);// u1_simple_scene_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 27, 27, 0x1);// u1_special_scfb_en;
	WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 28, 28, 0x1);// u1_Forbes_en;

	WriteRegister(FRC_TOP__PQL_0__pql_scAls_fadeInOut_en_ADDR, 0, 0, 0x1); //u1_fadeInOut_en
	WriteRegister(FRC_TOP__PQL_0__pql_dynME_ac_dc_bld_apl_holdfrm_ADDR, 0, 7, 0xC); //u6_dynME_ac_dc_bld_apl_holdfrm
	//----------------PQL_1(0x46)----------------
	WriteRegister(FRC_TOP__PQL_1__pql_film_det_bypass_ADDR, 28, 28, 0x1); //u1_BadEditSlowOut_En
	WriteRegister(FRC_TOP__PQL_1__pql_film_det_bypass_ADDR, 29, 29, 0x1); //u1_QuickSwitch_En
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_quit_sml_mot_wgt), 0x5);
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_enter_22_cnt_gain), 0x2);
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_enter_32_cnt_gain), 0x2);
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_enter_else_cnt_gain), 0x2);
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_quit_prd_th), 0x8);

	WriteRegister(FRC_TOP__PQL_1__pql_wr_dyn_me_acdc_bld_wrt_en_ADDR, 7, 7, 0x1); //u1_dynME_acdcBld_wrt_en (for fade in/out)

	//--start--mixmode setting, set here first, move to hdf.h&hdf.tbl if they are stable.
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_mix_mode_det_en), 0x1);
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_mix_mode_rgn5_en), 0x1);
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_mix_mode_enter_cnt_th), 0xE);
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_mix_mode_rgn_move_min_mot), 0x220);
	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_film_mix_mode_rgn_move_mot_wgt), 0xA);
	//--end--mixmode setting
	WriteRegister(FRC_TOP__PQL_1__pql_film_det_bypass_ADDR, 26, 26, 0x1);//u1_powerSaving_en
	WriteRegister(FRC_TOP__PQL_1__pql_film_det_bypass_ADDR, 27, 27, 0x1);//u1_RepeatPattern_en

	WriteRegister(KIWI_REG(FRC_TOP__PQL_1__pql_rb_ctrl_dummy_b0), 0x5f32);// UXN Patch

#endif

#if 0    // k3lp setting
	//----------------kmc_top(0x00)----------------
	// for repeat pattern
	WriteRegister(FRC_TOP__kmc_top__reg_vhdtl_h_th_ADDR, 0, 9, 0x20);//reg_vhdtl_h_th
	WriteRegister(FRC_TOP__kmc_top__reg_vhdtl_v_th_ADDR, 10, 19, 0x20);//reg_vhdtl_v_th
	//----------------MC(0x06)----------------
	WriteRegister(FRC_TOP__MC__mc_show_scene_chg_ADDR, 28, 28, 0x0);
	//----------------KPOST_TOP(0x40)----------------
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_enable_0_ADDR, 24, 27, 0x0);
	//----------------CRTC1(0x41)----------------
	//WriteRegister(FRC_TOP__CRTC1__crtc1_dec_vtrig_dly_ADDR, 6, 18, 0x80);//strange judder
	//----------------KME_ME1_TOP1(0x35)----------------
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_hold_cnt_ADDR, 0, 7, 0x1);
	WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me2_hold_cnt_ADDR, 8, 15, 0x1);
#endif

	//mixmode entering count thershold and max_limit
	WriteRegister(FRC_TOP__PQL_1__pql_film_mix_mode_enter_cnt_th_ADDR, 0,7, 0x1C);//entering threshold
	WriteRegister(FRC_TOP__PQL_1__pql_film_mix_mode_enter_cnt_th_ADDR, 8,15, 0x22);//counter_max_limit

	//small region weighting of entering mixmode counting
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 0, 1, 1);//all
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 2, 3, 2);//top
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 4, 5, 2);//bottom
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 6, 7, 1);//left
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 8, 9, 1);//right
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 10, 11,	2);//center
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 12, 13, 2);//region1_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 14, 15, 2);//region2_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 16, 17, 2);//region3_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 18, 19, 2);//region4_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 20, 21, 2);//region5_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 22, 23, 2);//region6_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 24, 25,  2);//region7_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 26, 27, 2);//region8_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 28, 29, 2);//region9_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_41_ADDR, 30, 31, 2);//region10_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_42_ADDR, 0, 1,  2);//region11_of_12regions
	WriteRegister(FRC_TOP__software1__reg_software_42_ADDR, 2, 3, 1);//region12_of_12regions
	
	WriteRegister(FRC_TOP__software1__reg_software_42_ADDR, 4, 4, 1);//mixmode_debug1
	WriteRegister(FRC_TOP__software1__reg_software_42_ADDR, 5, 5, 1);//mixmode_debug2
#if MIX_MODE_REGION_17
	//----------------KME_IPME(0x2c)----------------
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region1_v0),  0x4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region1_v1),  0x5a);  //0x58
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region2_v0),  0x19b);  // 0x1c2
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region2_v1),  0x218);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region3_h0),  0x2);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region3_h1),  0x28);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region4_h0),  0x1b8);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region4_h1),  0x1de);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region5_h0),  0x28);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region5_h1),  0x1b8);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region5_v0),  0x5a);  //0x58
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region5_v1),  0x14a); //0xb1

	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_h0), 0x28);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_h1), 0x8c);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_h2), 0xf0);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_h3), 0x154);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_h4), 0x1b8);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_v0), 0x5a);    //0xb1
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_v1), 0xd2);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_v2), 0x14a);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_v3), 0x19b); //0x1c2
	//for 16 region
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_16region_v4), 0x19b); // 0x1c2
	//for 9-horizontal area
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_fmdet_9region1_v0), 0x4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_fmdet_9region1_v1), 0x3c);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_fmdet_9region1_v2), 0x78);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_fmdet_9region1_v3), 0xb4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_fmdet_9region1_v4), 0xf0);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_fmdet_9region1_v5), 0x12c);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_fmdet_9region1_v6), 0x168);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_fmdet_9region1_v7), 0x1a4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_fmdet_9region1_v8), 0x1e0);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_fmdet_9region1_v9), 0x218);

	WriteRegister(FRC_TOP__PQL_1__pql_film_mix_mode_rgn5_en_ADDR,31,31,0x0);  // pql_film_mix_mode_rgn5_en

	//for 4 region
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region1_enable_ADDR, 0, 0, 0x1);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region1_h0_ADDR, 1, 10, 0x8);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region1_h1_ADDR, 11, 20, 0x60);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region1_v0_ADDR, 0, 9, 0x10);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region1_v1_ADDR, 10, 19, 0x70);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region2_enable_ADDR, 0, 0, 0x1);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region2_h0_ADDR, 1, 10, 0x180);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region2_h1_ADDR, 11, 20, 0x1d8);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region2_v0_ADDR, 0, 9, 0x10);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region2_v1_ADDR, 10, 19, 0x9E);
	//for DTV issue
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region3_enable_ADDR, 0, 0, 0x0);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region3_h0_ADDR, 1, 10, 0x11B);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region3_h1_ADDR, 11, 20, 0x147);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region3_v0_ADDR, 0, 9, 0x36);
	WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region3_v1_ADDR, 10, 19, 0x64);
	//WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region4_enable_ADDR, 0, 0, 0x1);
	//WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region4_h0_ADDR, 1, 10, 0x180);
	//WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region4_h1_ADDR, 11, 20, 0x1d8);
	//WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region4_v0_ADDR, 0, 9, 0x1bc);
	//WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region4_v1_ADDR, 10, 19, 0x20d);

#else
	//----------------KME_IPME(0x2c)----------------
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region1_v0),  0x4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region1_v1),  0x58);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region2_v0),  0x1bc);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region2_v1),  0x20d);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region3_h0),  0x2);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region3_h1),  0x60);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region4_h0),  0x140);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region4_h1),  0x1d4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region5_h0),  0xb0);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region5_h1),  0x137);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region5_v0),  0x32);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_5region5_v1),  0x1b0);

	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_h0), 0x2);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_h1), 0x60);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_h2), 0xd0);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_h3), 0x140);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_h4), 0x1d4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_v0), 0x4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_v1), 0x58);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_v2), 0x1bc);
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_12region_v3), 0x20d);
#endif
	//------mv scan order for patter:#93----
//	WriteRegister(FRC_TOP__KME_TOP__reg_kme_system_vflip_enable_ADDR,30,30,0x0);
	//------for #23 bottom black line-----
	WriteRegister(FRC_TOP__PQL_0__pql_rim_ctrl_en_ADDR,18,23,0x30);
	//------for #96\#154 bottom line issue ------
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_invalid_cnt_th_ADDR,6,10,0x18);
	WriteRegister(FRC_TOP__KME_ME2_CALC0__me2_ac_invalid_sel_ADDR,31,31,0x1);

	//------Logo blk same threshold------
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0_BITEND,  LogoBlkSmeThr_l[0]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx1_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx1_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx1_BITEND,  LogoBlkSmeThr_l[1]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx2_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx2_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx2_BITEND,  LogoBlkSmeThr_l[2]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx3_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx3_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx3_BITEND,  LogoBlkSmeThr_l[3]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx4_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx4_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx4_BITEND,  LogoBlkSmeThr_l[4]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx5_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx5_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx5_BITEND,  LogoBlkSmeThr_l[5]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx6_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx6_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx6_BITEND,  LogoBlkSmeThr_l[6]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx7_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx7_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx7_BITEND,  LogoBlkSmeThr_l[7]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx8_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx8_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx8_BITEND,  LogoBlkSmeThr_l[8]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx9_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx9_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx9_BITEND,  LogoBlkSmeThr_l[9]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx10_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx10_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx10_BITEND, LogoBlkSmeThr_l[10]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx11_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx11_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx11_BITEND, LogoBlkSmeThr_l[11]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx12_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx12_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx12_BITEND, LogoBlkSmeThr_l[12]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx13_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx13_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx13_BITEND, LogoBlkSmeThr_l[13]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx14_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx14_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx14_BITEND, LogoBlkSmeThr_l[14]);

	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0_BITEND,  LogoBlkSmeThr_a[0]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx1_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx1_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx1_BITEND,  LogoBlkSmeThr_a[1]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx2_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx2_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx2_BITEND,  LogoBlkSmeThr_a[2]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx3_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx3_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx3_BITEND,  LogoBlkSmeThr_a[3]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_BITEND,  LogoBlkSmeThr_a[4]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx5_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx5_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx5_BITEND,  LogoBlkSmeThr_a[5]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx6_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx6_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx6_BITEND,  LogoBlkSmeThr_a[6]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx7_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx7_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx7_BITEND,  LogoBlkSmeThr_a[7]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx8_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx8_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx8_BITEND,  LogoBlkSmeThr_a[8]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx9_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx9_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx9_BITEND,  LogoBlkSmeThr_a[9]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_BITEND, LogoBlkSmeThr_a[10]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx11_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx11_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx11_BITEND, LogoBlkSmeThr_a[11]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_BITEND, LogoBlkSmeThr_a[12]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx13_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx13_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx13_BITEND, LogoBlkSmeThr_a[13]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx14_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx14_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx14_BITEND, LogoBlkSmeThr_a[14]);

	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx0_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx0_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx0_BITEND,  LogoBlkSmeThr_h[0]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx1_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx1_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx1_BITEND,  LogoBlkSmeThr_h[1]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx2_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx2_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx2_BITEND,  LogoBlkSmeThr_h[2]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx3_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx3_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx3_BITEND,  LogoBlkSmeThr_h[3]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_BITEND,  LogoBlkSmeThr_h[4]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx5_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx5_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx5_BITEND,  LogoBlkSmeThr_h[5]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx6_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx6_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx6_BITEND,  LogoBlkSmeThr_h[6]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx7_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx7_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx7_BITEND,  LogoBlkSmeThr_h[7]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx8_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx8_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx8_BITEND,  LogoBlkSmeThr_h[8]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx9_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx9_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx9_BITEND,  LogoBlkSmeThr_h[9]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_BITEND, LogoBlkSmeThr_h[10]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx11_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx11_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx11_BITEND, LogoBlkSmeThr_h[11]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_BITEND, LogoBlkSmeThr_h[12]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx13_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx13_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx13_BITEND, LogoBlkSmeThr_h[13]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx14_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx14_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx14_BITEND, LogoBlkSmeThr_h[14]);

	//------logo blkhsty negative threshold mapping curve------
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_x0_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_x0_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_x0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_x1_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_x1_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_x1_BITEND, 0x3c);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_x2_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_x2_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_x2_BITEND, 0xa0);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y0_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y0_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y1_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y1_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y1_BITEND, 0x7);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y2_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y2_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y2_BITEND, 0xf);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp0_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp0_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp0_BITEND, 0x5);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp1_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp1_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp1_BITEND, 0x4);

	//------logo iir alpha default value------
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_iir_alpha_ADDR, FRC_TOP__KME_LOGO0__km_logo_iir_alpha_BITSTART, FRC_TOP__KME_LOGO0__km_logo_iir_alpha_BITEND, 0x1a);
	WriteRegister(FRC_TOP__PQL_1__pql_logo_pql_en_ADDR, 26, 31, 0x1c);
	WriteRegister(FRC_TOP__PQL_1__pql_logo_pql_en_ADDR, 16, 21, 0x8);

	//------logo fast detection after sc control------
	WriteRegister(FRC_TOP__PQL_1__pql_logo_dummy_c0_ADDR, 0, 7, 0x34);  // u8_logo_sc_FastDet_rstholdfrm
	WriteRegister(FRC_TOP__PQL_1__pql_logo_dummy_c0_ADDR, 30, 30, 0x1); // u1_logo_sc_FastDet_en
	WriteRegister(FRC_TOP__PQL_1__pql_logo_dummy_c0_ADDR, 31, 31, 0x1); // u1_logo_sc_FastDet_wrt_en

	//------logo dh region index adjsut
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_rgn_v0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_rgn_v0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_rgn_v0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_rgn_v1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_rgn_v1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_rgn_v1_BITEND, 0x16);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_rgn_v2_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_rgn_v2_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_rgn_v2_BITEND, 0x70);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_rgn_v3_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_rgn_v3_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_rgn_v3_BITEND, 0x87);

	WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h1_BITEND, 0x42);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h2_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h2_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h2_BITEND, 0x77);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h3_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h3_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h3_BITEND, 0x90);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h4_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h4_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h4_BITEND, 0xc2);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h5_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h5_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_rgn_h5_BITEND, 0xf0);

	//----for fix dehalo and broken---
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_post_flagpnt_ppi_ADDR ,FRC_TOP__KME_ME1_TOP0__me1_post_flagpnt_ppi_BITSTART ,FRC_TOP__KME_ME1_TOP0__me1_post_flagpnt_ppi_BITEND ,0x0);

	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y1_ADDR ,FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y1_BITSTART ,FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y1_BITEND ,0x5);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y2_ADDR ,FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y2_BITSTART ,FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_y2_BITEND ,0x8);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp0_ADDR ,FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp0_BITSTART ,FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp0_BITEND ,0x5);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp1_ADDR ,FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp1_BITSTART ,FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_slp1_BITEND ,0x3);

	//====================
	//input size measure setting
	WriteRegister(FRC_TOP__KMC_TOP__kmc_int_en_ADDR ,26 ,26 ,0x0);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_vact), 0x870);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_hact), 0x780);

	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_hact_max), 0x780);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_hact_min), 0x780);

	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_htotal_max), ((Get_DISP_HORIZONTAL_TOTAL()/2)+1));

	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_vact_min), 0x870);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_vact_max), 0x871);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_vblank_max), 0x5a);

	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_det_function_en), 0x1);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_clk_det_en), 0x1);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_hact_min_det_en), 0x1);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_hact_max_det_en), 0x1);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_htotal_max_det_en), 0x1);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_vblank_det_en), 0x1);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_vact_min_det_en), 0x1);
	WriteRegister(KIWI_REG(FRC_TOP__IPPRE__ippre_mute_vact_max_det_en), 0x1);
	//====================

	//====================
	// logo module scale coefficient 20190411 willy
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_h1_ration_ADDR, FRC_TOP__KME_LOGO0__km_logo_h1_ration_BITSTART, FRC_TOP__KME_LOGO0__km_logo_h1_ration_BITEND, u8_logoScaleCoef_h[1][0]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_h0_ration_ADDR, FRC_TOP__KME_LOGO0__km_logo_h0_ration_BITSTART, FRC_TOP__KME_LOGO0__km_logo_h0_ration_BITEND, u8_logoScaleCoef_h[1][1]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_h3_ration_ADDR, FRC_TOP__KME_LOGO0__km_logo_h3_ration_BITSTART, FRC_TOP__KME_LOGO0__km_logo_h3_ration_BITEND, u8_logoScaleCoef_h[1][2]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_h2_ration_ADDR, FRC_TOP__KME_LOGO0__km_logo_h2_ration_BITSTART, FRC_TOP__KME_LOGO0__km_logo_h2_ration_BITEND, u8_logoScaleCoef_h[1][3]);

	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_v1_ration_ADDR, FRC_TOP__KME_LOGO0__km_logo_v1_ration_BITSTART, FRC_TOP__KME_LOGO0__km_logo_v1_ration_BITEND, u8_logoScaleCoef_v[1][0]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_v0_ration_ADDR, FRC_TOP__KME_LOGO0__km_logo_v0_ration_BITSTART, FRC_TOP__KME_LOGO0__km_logo_v0_ration_BITEND, u8_logoScaleCoef_v[1][1]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_v3_ration_ADDR, FRC_TOP__KME_LOGO0__km_logo_v3_ration_BITSTART, FRC_TOP__KME_LOGO0__km_logo_v3_ration_BITEND, u8_logoScaleCoef_v[1][2]);
	WriteRegister(FRC_TOP__KME_LOGO0__km_logo_v2_ration_ADDR, FRC_TOP__KME_LOGO0__km_logo_v2_ration_BITSTART, FRC_TOP__KME_LOGO0__km_logo_v2_ration_BITEND, u8_logoScaleCoef_v[1][3]);
	//====================

	//====================
	// MC self logo alpha coefficient 20190411 willy
	WriteRegister(FRC_TOP__MC2__mc_logo_self_lpf_en_ADDR, FRC_TOP__MC2__mc_logo_self_lpf_en_BITSTART, FRC_TOP__MC2__mc_logo_self_lpf_en_BITEND, 0x1);
	WriteRegister(FRC_TOP__MC2__mc_logo_lpf_coef0_00_ADDR, FRC_TOP__MC2__mc_logo_lpf_coef0_00_BITSTART, FRC_TOP__MC2__mc_logo_lpf_coef0_00_BITEND, u8_mcLogoSelfLpfCoef[1][0]);
	WriteRegister(FRC_TOP__MC2__mc_logo_lpf_coef0_01_ADDR, FRC_TOP__MC2__mc_logo_lpf_coef0_01_BITSTART, FRC_TOP__MC2__mc_logo_lpf_coef0_01_BITEND, u8_mcLogoSelfLpfCoef[1][1]);
	WriteRegister(FRC_TOP__MC2__mc_logo_lpf_coef0_02_ADDR, FRC_TOP__MC2__mc_logo_lpf_coef0_02_BITSTART, FRC_TOP__MC2__mc_logo_lpf_coef0_02_BITEND, u8_mcLogoSelfLpfCoef[1][2]);
	WriteRegister(FRC_TOP__MC2__mc_logo_lpf_coef1_00_ADDR, FRC_TOP__MC2__mc_logo_lpf_coef1_00_BITSTART, FRC_TOP__MC2__mc_logo_lpf_coef1_00_BITEND, u8_mcLogoSelfLpfCoef[1][3]);
	WriteRegister(FRC_TOP__MC2__mc_logo_lpf_coef1_01_ADDR, FRC_TOP__MC2__mc_logo_lpf_coef1_01_BITSTART, FRC_TOP__MC2__mc_logo_lpf_coef1_01_BITEND, u8_mcLogoSelfLpfCoef[1][4]);
	//====================

	//====================
	// MC logo alpha curve mapping 20190411 willy
	WriteRegister(FRC_TOP__MC2__mc_logo_self_alpha_th_ADDR, FRC_TOP__MC2__mc_logo_self_alpha_th_BITSTART, FRC_TOP__MC2__mc_logo_self_alpha_th_BITEND, 0x20);
	WriteRegister(FRC_TOP__MC2__mc_logo_self_alpha_slp_ADDR, FRC_TOP__MC2__mc_logo_self_alpha_slp_BITSTART, FRC_TOP__MC2__mc_logo_self_alpha_slp_BITEND, 0x4);
	WriteRegister(FRC_TOP__MC2__mc_logo_self_alpha_min_ADDR, FRC_TOP__MC2__mc_logo_self_alpha_min_BITSTART, FRC_TOP__MC2__mc_logo_self_alpha_min_BITEND, 0x0);
	WriteRegister(FRC_TOP__MC2__mc_logo_self_alpha_max_ADDR, FRC_TOP__MC2__mc_logo_self_alpha_max_BITSTART, FRC_TOP__MC2__mc_logo_self_alpha_max_BITEND, 0xf);
	//====================

	//====================
	// Pixel logo adjust
	WriteRegister(FRC_TOP__KME_LOGO2__km_logo_pxllogopost_ero_th_ADDR, FRC_TOP__KME_LOGO2__km_logo_pxllogopost_ero_th_BITSTART, FRC_TOP__KME_LOGO2__km_logo_pxllogopost_ero_th_BITEND, 0x5);
	WriteRegister(FRC_TOP__KME_LOGO2__km_logo_pxllogopostdlt_th_ADDR, FRC_TOP__KME_LOGO2__km_logo_pxllogopostdlt_th_BITSTART, FRC_TOP__KME_LOGO2__km_logo_pxllogopostdlt_th_BITEND, 0x4);

	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_x0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_x0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_x0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_x1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_x1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_x1_BITEND, 0xa);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_x2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_x2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_x2_BITEND, 0x28);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_y0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_y0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_y0_BITEND, 0xa);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_y1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_y1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_y1_BITEND, 0x18);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_y2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_y2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_y2_BITEND, 0x30);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_slop0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_slop0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_slop0_BITEND, 0xa);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_slop1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_slop1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_pos_slop1_BITEND, 0x10);

	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_x0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_x0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_x0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_x1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_x1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_x1_BITEND, 0x1e);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_x2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_x2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_x2_BITEND, 0x30);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_y0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_y0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_y0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_y1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_y1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_y1_BITEND, 0x3);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_y2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_y2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_y2_BITEND, 0x5);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_slop0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_slop0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_slop0_BITEND, 0x2);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_slop1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_slop1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_hsty_neg_slop1_BITEND, 0x3);

	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_x0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_x0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_x0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_x1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_x1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_x1_BITEND, 0x3c);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_x2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_x2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_x2_BITEND, 0x6e);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_y0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_y0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_y0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_y1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_y1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_y1_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_y2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_y2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_y2_BITEND, 0x3);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_slop0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_slop0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_slop0_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_slop1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_slop1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldfth_blksame_neg_slop1_BITEND, 0x2);

	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx0_BITEND, LogoPxldf_th_a[0]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx1_BITEND, LogoPxldf_th_a[1]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx2_BITEND, LogoPxldf_th_a[2]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx3_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx3_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx3_BITEND, LogoPxldf_th_a[3]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx4_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx4_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx4_BITEND, LogoPxldf_th_a[4]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx5_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx5_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx5_BITEND, LogoPxldf_th_a[5]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx6_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx6_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx6_BITEND, LogoPxldf_th_a[6]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx7_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx7_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx7_BITEND, LogoPxldf_th_a[7]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx8_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx8_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx8_BITEND, LogoPxldf_th_a[8]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx9_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx9_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx9_BITEND, LogoPxldf_th_a[9]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx10_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx10_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx10_BITEND, LogoPxldf_th_a[10]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx11_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx11_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx11_BITEND, LogoPxldf_th_a[11]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx12_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx12_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx12_BITEND, LogoPxldf_th_a[12]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx13_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx13_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx13_BITEND, LogoPxldf_th_a[13]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx14_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx14_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx14_BITEND, LogoPxldf_th_a[14]);

	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx0_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx0_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx0_BITEND , LogoPxlHsty_nth[0 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx1_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx1_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx1_BITEND , LogoPxlHsty_nth[1 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx2_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx2_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx2_BITEND , LogoPxlHsty_nth[2 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx3_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx3_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx3_BITEND , LogoPxlHsty_nth[3 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx4_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx4_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx4_BITEND , LogoPxlHsty_nth[4 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx5_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx5_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx5_BITEND , LogoPxlHsty_nth[5 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx6_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx6_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx6_BITEND , LogoPxlHsty_nth[6 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx7_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx7_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx7_BITEND , LogoPxlHsty_nth[7 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx8_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx8_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx8_BITEND , LogoPxlHsty_nth[8 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx9_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx9_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx9_BITEND , LogoPxlHsty_nth[9 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx10_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx10_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx10_BITEND, LogoPxlHsty_nth[10]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx11_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx11_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx11_BITEND, LogoPxlHsty_nth[11]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx12_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx12_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx12_BITEND, LogoPxlHsty_nth[12]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx13_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx13_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx13_BITEND, LogoPxlHsty_nth[13]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx14_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx14_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_nth_pidx14_BITEND, LogoPxlHsty_nth[14]);

	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx0_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx0_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx0_BITEND , LogoPxlHsty_pth[0 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx1_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx1_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx1_BITEND , LogoPxlHsty_pth[1 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx2_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx2_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx2_BITEND , LogoPxlHsty_pth[2 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx3_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx3_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx3_BITEND , LogoPxlHsty_pth[3 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx4_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx4_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx4_BITEND , LogoPxlHsty_pth[4 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx5_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx5_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx5_BITEND , LogoPxlHsty_pth[5 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx6_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx6_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx6_BITEND , LogoPxlHsty_pth[6 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx7_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx7_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx7_BITEND , LogoPxlHsty_pth[7 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx8_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx8_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx8_BITEND , LogoPxlHsty_pth[8 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx9_ADDR , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx9_BITSTART , FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx9_BITEND , LogoPxlHsty_pth[9 ]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx10_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx10_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx10_BITEND, LogoPxlHsty_pth[10]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx11_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx11_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx11_BITEND, LogoPxlHsty_pth[11]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx12_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx12_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx12_BITEND, LogoPxlHsty_pth[12]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx13_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx13_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx13_BITEND, LogoPxlHsty_pth[13]);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx14_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx14_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pth_pidx14_BITEND, LogoPxlHsty_pth[14]);

	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_x0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_x0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_x0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_x1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_x1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_x1_BITEND, 0xa);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_x2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_x2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_x2_BITEND, 0xf);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_y0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_y0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_y0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_y1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_y1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_y1_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_y2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_y2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_y2_BITEND, 0x2);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_slp0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_slp0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_slp0_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_slp1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_slp1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_nstep_slp1_BITEND, 0x0);

	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_x0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_x0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_x0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_x1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_x1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_x1_BITEND, 0xd);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_x2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_x2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_x2_BITEND, 0xf);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_y0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_y0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_y0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_y1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_y1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_y1_BITEND, 0x2);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_y2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_y2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_y2_BITEND, 0x3);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_slp0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_slp0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_slp0_BITEND, 0x7);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_slp1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_slp1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pxldf_pstep_slp1_BITEND, 0x7);

	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_x0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_x0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_x0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_x1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_x1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_x1_BITEND, 0x5a);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_x2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_x2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_x2_BITEND, 0x96);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_y0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_y0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_y0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_y1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_y1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_y1_BITEND, 0x3);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_y2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_y2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_y2_BITEND, 0x5);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_slp0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_slp0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_slp0_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_slp1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_slp1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_nstep_slp1_BITEND, 0x1);

	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_x0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_x0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_x0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_x1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_x1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_x1_BITEND, 0x64);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_x2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_x2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_x2_BITEND, 0xa0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_y0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_y0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_y0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_y1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_y1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_y1_BITEND, 0x3);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_y2_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_y2_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_y2_BITEND, 0x5);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_slp0_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_slp0_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_slp0_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_slp1_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_slp1_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlhsty_blksame_pstep_slp1_BITEND, 0x1);
	//====================

	//====================
	// Logo protection
	// WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_bvlogoprotecten_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_bvlogoprotecten_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_bvlogoprotecten_BITEND, 0x1);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC1__reg_me2_bvlogoprotecten), 0x0); // disable first because sticking pattern [020 / 047 / 048 / 330 / 173 / 062 / 093 / 181 / 182 / 291]
	//====================

	//====================
	// DCNew and SATD
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_dctype_sel_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_dctype_sel_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_dctype_sel_BITEND, 0x0); // 0x1
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dc_bld_mode_sel_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dc_bld_mode_sel_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dc_bld_mode_sel_BITEND, 0x4);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_coef_4x4_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_coef_4x4_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_coef_4x4_BITEND, 0x8); // 0x20
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dc_bld_en_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dc_bld_en_BITEND, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dc_bld_en_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_x1_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_x1_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_x1_BITEND, 0xc);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_x2_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_x2_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_x2_BITEND, 0x32);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_x3_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_x3_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_x3_BITEND, 0x50);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_y1_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_y1_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_y1_BITEND, 0x7);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_y2_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_y2_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_y2_BITEND, 0x8); // 0x6
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_y3_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_y3_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_y3_BITEND, 0x8); // 0x8
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_slope1_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_slope1_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_slope1_BITEND, 0x0); // 0x9
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_slope2_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_slope2_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_bldapl_slope2_BITEND, 0x0); // 0x4
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_mode_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_mode_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_mode_BITEND, 0x4);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_x1_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_x1_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_x1_BITEND, 0xa);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_x2_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_x2_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_x2_BITEND, 0x28);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_x3_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_x3_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_x3_BITEND, 0x38);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_y1_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_y1_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_y1_BITEND, 0x7); // 0x4 // 0x0
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_y2_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_y2_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_y2_BITEND, 0x8); // 0x6
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_y3_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_y3_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_y3_BITEND, 0x8); // 0x8
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_slope1_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_slope1_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_slope1_BITEND, 0x0); // 0xb
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_slope2_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_slope2_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_satd_dcn_blddtl_slope2_BITEND, 0x0); // 0x4
	//====================

	//====================
	// Rejudge
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_apply_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_apply_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_apply_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_mvdiff_en_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_mvdiff_en_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_mvdiff_en_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_range_en_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_range_en_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_range_en_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_en_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_en_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_en_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_en_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_en_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_en_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_force_cond_en_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_force_cond_en_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_force_cond_en_BITEND, 0x1);

	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_bv_th_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_bv_th_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_bv_th_BITEND, 0x32);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_ppi_th_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_ppi_th_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_ppi_th_BITEND, 0x32);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_diff_th_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_diff_th_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_sad_diff_th_BITEND, 40);

	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_bv_th_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_bv_th_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_bv_th_BITEND, 40);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_ppi_th_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_ppi_th_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_ppi_th_BITEND, 70);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_diff_th_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_diff_th_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_puresad_diff_th_BITEND, 70);

	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_range_x_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_range_x_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_range_x_BITEND, 15);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_range_y_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_range_y_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_range_y_BITEND, 7);

	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_force_cond_mvdiff_th_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_force_cond_mvdiff_th_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_force_cond_mvdiff_th_BITEND, 30);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_force_cond_sad_th_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_force_cond_sad_th_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_force_cond_sad_th_BITEND, 10);

	WriteRegister(FRC_TOP__KME_ME1_TOP10__me1_rejudge_mvdiff_th_ADDR, FRC_TOP__KME_ME1_TOP10__me1_rejudge_mvdiff_th_BITSTART, FRC_TOP__KME_ME1_TOP10__me1_rejudge_mvdiff_th_BITEND, 30);
	//====================

	//====================
	// Edge detection , default value from FPGA
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edgefromppfv_enable_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edgefromppfv_enable_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edgefromppfv_enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edgefrompfv_enable_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edgefrompfv_enable_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edgefrompfv_enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edgefromppfv_modifypos_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edgefromppfv_modifypos_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edgefromppfv_modifypos_BITEND, 0x1b0);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edgefrompfv_modifypos_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edgefrompfv_modifypos_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edgefrompfv_modifypos_BITEND, 0x1b0);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edgeretimer_yrange_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edgeretimer_yrange_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edgeretimer_yrange_BITEND, 0x5); // 0x7 // 0x2

	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_thr_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_thr_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_thr_BITEND, 0x96);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_aplratio_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_aplratio_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_aplratio_BITEND, 0x1c); // 0x18 // 0xd
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_ratio_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_ratio_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_ratio_BITEND, 0x6); // 0x7 // 0x4 // 0x5
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edge_hv_ratio_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edge_hv_ratio_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edge_hv_ratio_BITEND, 0x2);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_adpthr_modesel_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_adpthr_modesel_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edge_eng_adpthr_modesel_BITEND, 0x1);

	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_edgepostproc_enable_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_edgepostproc_enable_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_edgepostproc_enable_BITEND, 0x1);
	//====================

	//====================
	// ME1/2 compare
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC1__reg_me2_me1_pfv_sad_th), 0x20);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC1__reg_me2_me1_ppfv_sad_th), 0x20);
	//====================

	//====================
	// Dehalo occl prediction
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_occpred_diff_th_gain), 0x3);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_occpred_range), 0x8);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_occpred_diff_th_shift), 0x0);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_occpred_diff_th_min), 0x0);
	//====================

	//====================
	// Occl post processing
	WriteRegister(FRC_TOP__KME_DEHALO2__PostCorr_MVABDiff_Enable_ADDR, FRC_TOP__KME_DEHALO2__PostCorr_MVABDiff_Enable_BITSTART, FRC_TOP__KME_DEHALO2__PostCorr_MVABDiff_Enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__PostCorr_SmallDTL_Enable_ADDR, FRC_TOP__KME_DEHALO2__PostCorr_SmallDTL_Enable_BITSTART, FRC_TOP__KME_DEHALO2__PostCorr_SmallDTL_Enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__PostCorr_SmallAPL_Enable_ADDR, FRC_TOP__KME_DEHALO2__PostCorr_SmallAPL_Enable_BITSTART, FRC_TOP__KME_DEHALO2__PostCorr_SmallAPL_Enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__PostCorr_NeiOccl_Enable_ADDR, FRC_TOP__KME_DEHALO2__PostCorr_NeiOccl_Enable_BITSTART, FRC_TOP__KME_DEHALO2__PostCorr_NeiOccl_Enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__PostCorr_SmallAPLThr_ADDR, FRC_TOP__KME_DEHALO2__PostCorr_SmallAPLThr_BITSTART, FRC_TOP__KME_DEHALO2__PostCorr_SmallAPLThr_BITEND, 0x10); // 0x8 // 0x34
	WriteRegister(FRC_TOP__KME_DEHALO2__PostCorr_SmallDTLThr_ADDR, FRC_TOP__KME_DEHALO2__PostCorr_SmallDTLThr_BITSTART, FRC_TOP__KME_DEHALO2__PostCorr_SmallDTLThr_BITEND, 0x10); // 0x8 // 0x18
	WriteRegister(FRC_TOP__KME_DEHALO2__PostCorr_MVAB_Ratio_ADDR, FRC_TOP__KME_DEHALO2__PostCorr_MVAB_Ratio_BITSTART, FRC_TOP__KME_DEHALO2__PostCorr_MVAB_Ratio_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__PostCorr_OcclCntThr_ADDR, FRC_TOP__KME_DEHALO2__PostCorr_OcclCntThr_BITSTART, FRC_TOP__KME_DEHALO2__PostCorr_OcclCntThr_BITEND, 0xa); // 0x6
	//====================

	//====================
	// Occl post processing from ME12 Compare flag
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_cov_cnt), 0xc);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_ucov_cnt), 0xc);
	//====================

	//====================
	// Occl extension / stop / check, default value from FPGA
	// extend setting
	WriteRegister(FRC_TOP__KME_DEHALO2__occl_extend_mv_sync_en_ADDR, FRC_TOP__KME_DEHALO2__occl_extend_mv_sync_en_BITSTART, FRC_TOP__KME_DEHALO2__occl_extend_mv_sync_en_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__occl_extend_mode_ADDR, FRC_TOP__KME_DEHALO2__occl_extend_mode_BITSTART, FRC_TOP__KME_DEHALO2__occl_extend_mode_BITEND, 0x3);

	WriteRegister(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_y_range_ADDR, FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_y_range_BITSTART, FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_y_range_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_x_range_ADDR, FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_x_range_BITSTART, FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_x_range_BITEND, 0x3);
	WriteRegister(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_y_range_ADDR, FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_y_range_BITSTART, FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_y_range_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_x_range_ADDR, FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_x_range_BITSTART, FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_x_range_BITEND, 0x3); // 0x6
	WriteRegister(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_y_range_ADDR, FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_y_range_BITSTART, FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_y_range_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_x_range_ADDR, FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_x_range_BITSTART, FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_x_range_BITEND, 0x1); // 0x2 // 0x0 // 0x4
	WriteRegister(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_y_range_ADDR, FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_y_range_BITSTART, FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_y_range_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_x_range_ADDR, FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_x_range_BITSTART, FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_x_range_BITEND, 0x1); // 0x0 // 0x6
	// check setting
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Enable_ADDR, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Enable_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Enable_ADDR, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Enable_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Enable_ADDR, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Enable_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Enable_BITEND, 0x1);

	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_GmvSel_ADDR, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_GmvSel_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_GmvSel_BITEND, 0x0); // 0x1

	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Ratio_ADDR, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Ratio_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Ratio_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Ratio_ADDR, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Ratio_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Ratio_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Ratio_ADDR, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Ratio_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Ratio_BITEND, 0x1);
	// stop setting
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_APLProt_Enable_ADDR, FRC_TOP__KME_DEHALO2__occlExt_APLProt_Enable_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_APLProt_Enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_OcclProt_Enable_ADDR, FRC_TOP__KME_DEHALO2__occlExt_OcclProt_Enable_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_OcclProt_Enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_SADProt_Enable_ADDR, FRC_TOP__KME_DEHALO2__occlExt_SADProt_Enable_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_SADProt_Enable_BITEND, 0x1);
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_EdgProt_Enable_ADDR, FRC_TOP__KME_DEHALO2__occlExt_EdgProt_Enable_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_EdgProt_Enable_BITEND, 0x1);

	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_APLLargeThr_ADDR, FRC_TOP__KME_DEHALO2__occlExt_APLLargeThr_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_APLLargeThr_BITEND, 0x28); // 0xa // 0x14
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_SADSmallThr_ADDR, FRC_TOP__KME_DEHALO2__occlExt_SADSmallThr_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_SADSmallThr_BITEND, 0x20); // 0x78 // 0x50
	WriteRegister(FRC_TOP__KME_DEHALO2__occlExt_ExtMvSel_ADDR, FRC_TOP__KME_DEHALO2__occlExt_ExtMvSel_BITSTART, FRC_TOP__KME_DEHALO2__occlExt_ExtMvSel_BITEND, 0x1);
	//====================

	//====================
	// LocalFallBack
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_post_mvd_thd_ADDR, FRC_TOP__KME_ME1_TOP0__me1_post_mvd_thd_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_post_mvd_thd_BITEND, 0x20);

	WriteRegister(FRC_TOP__MC2__mc_dia_cnt_coef1_ADDR, FRC_TOP__MC2__mc_dia_cnt_coef1_BITSTART, FRC_TOP__MC2__mc_dia_cnt_coef1_BITEND, 0x3);
	WriteRegister(FRC_TOP__MC2__mc_dia_cnt_coef2_ADDR, FRC_TOP__MC2__mc_dia_cnt_coef2_BITSTART, FRC_TOP__MC2__mc_dia_cnt_coef2_BITEND, 0x2);
	WriteRegister(FRC_TOP__MC2__mc_dia_cnt_coef3_ADDR, FRC_TOP__MC2__mc_dia_cnt_coef3_BITSTART, FRC_TOP__MC2__mc_dia_cnt_coef3_BITEND, 0x0);

	WriteRegister(FRC_TOP__MC2__mc_dia_v_th0_ADDR, FRC_TOP__MC2__mc_dia_v_th0_BITSTART, FRC_TOP__MC2__mc_dia_v_th0_BITEND, 0xc);
	WriteRegister(FRC_TOP__MC2__mc_dia_v_th1_ADDR, FRC_TOP__MC2__mc_dia_v_th1_BITSTART, FRC_TOP__MC2__mc_dia_v_th1_BITEND, 0xc);
	WriteRegister(FRC_TOP__MC2__mc_dia_c_th0_ADDR, FRC_TOP__MC2__mc_dia_c_th0_BITSTART, FRC_TOP__MC2__mc_dia_c_th0_BITEND, 0x10);
	WriteRegister(FRC_TOP__MC2__mc_dia_c_th1_ADDR, FRC_TOP__MC2__mc_dia_c_th1_BITSTART, FRC_TOP__MC2__mc_dia_c_th1_BITEND, 0x10);
	WriteRegister(FRC_TOP__MC2__mc_dia_h_th0_ADDR, FRC_TOP__MC2__mc_dia_h_th0_BITSTART, FRC_TOP__MC2__mc_dia_h_th0_BITEND, 0x10);
	WriteRegister(FRC_TOP__MC2__mc_dia_h_th1_ADDR, FRC_TOP__MC2__mc_dia_h_th1_BITSTART, FRC_TOP__MC2__mc_dia_h_th1_BITEND, 0x10);

	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_x1_ADDR, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_x1_BITSTART, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_x1_BITEND, 0x10);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_x2_ADDR, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_x2_BITSTART, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_x2_BITEND, 0x40);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_y1_ADDR, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_y1_BITSTART, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_y1_BITEND, 0x40);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_y2_ADDR, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_y2_BITSTART, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_y2_BITEND, 0x100);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s1_ADDR, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s1_BITSTART, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s1_BITEND, 0xff);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s2_ADDR, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s2_BITSTART, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s2_BITEND, 0xff);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s3_ADDR, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s3_BITSTART, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s3_BITEND, 0xff);
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_cut_thr_ADDR, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_cut_thr_BITSTART, FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_cut_thr_BITEND, 0x10);

	WriteRegister(FRC_TOP__KME_DEHALO__dh_pst_fblvl_fbgen_max_ADDR, FRC_TOP__KME_DEHALO__dh_pst_fblvl_fbgen_max_BITSTART, FRC_TOP__KME_DEHALO__dh_pst_fblvl_fbgen_max_BITEND, 0x3ff);
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pst_occl_dtl_fb_th0_ADDR, FRC_TOP__KME_DEHALO__dh_pst_occl_dtl_fb_th0_BITSTART, FRC_TOP__KME_DEHALO__dh_pst_occl_dtl_fb_th0_BITEND, 0x8);
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pst_occl_dtl_fb_th1_ADDR, FRC_TOP__KME_DEHALO__dh_pst_occl_dtl_fb_th1_BITSTART, FRC_TOP__KME_DEHALO__dh_pst_occl_dtl_fb_th1_BITEND, 0x20);
	WriteRegister(FRC_TOP__KME_DEHALO__dh_pst_occl_dtl_fb_th2_ADDR, FRC_TOP__KME_DEHALO__dh_pst_occl_dtl_fb_th2_BITSTART, FRC_TOP__KME_DEHALO__dh_pst_occl_dtl_fb_th2_BITEND, 0x8);
	//====================

	//====================
	// LBMC logo currently disable
	WriteRegister(FRC_TOP__MC2__lbmc_logo_dil_th_ADDR, FRC_TOP__MC2__lbmc_logo_dil_th_BITSTART, FRC_TOP__MC2__lbmc_logo_dil_th_BITEND, 0x7f);
	WriteRegister(FRC_TOP__MC2__lbmc_logo_dil_coef0_ADDR, FRC_TOP__MC2__lbmc_logo_dil_coef0_BITSTART, FRC_TOP__MC2__lbmc_logo_dil_coef0_BITEND, 0x0);
	WriteRegister(FRC_TOP__MC2__lbmc_logo_dil_coef1_ADDR, FRC_TOP__MC2__lbmc_logo_dil_coef1_BITSTART, FRC_TOP__MC2__lbmc_logo_dil_coef1_BITEND, 0x0);
	WriteRegister(FRC_TOP__MC2__lbmc_logo_dil_coef2_ADDR, FRC_TOP__MC2__lbmc_logo_dil_coef2_BITSTART, FRC_TOP__MC2__lbmc_logo_dil_coef2_BITEND, 0x0);
	//====================

	//====================
	// Broken improve
	WriteRegister(FRC_TOP__software1__reg_software_50_ADDR, 0, 1, 0x0); // u2_rFB_alpha_mode
	WriteRegister(FRC_TOP__software1__reg_software_50_ADDR, 2, 2, 0x0); // u1_rFB_panning_en
	WriteRegister(FRC_TOP__software1__reg_software_50_ADDR, 3, 3, 0x0); //u1_rFB_show_en
	WriteRegister(FRC_TOP__software1__reg_software_50_ADDR, 8, 15, 0x40); // u8_rFB_alpha_curve_gain, 0x45
	WriteRegister(FRC_TOP__software1__reg_software_50_ADDR, 16, 23, 0x6); // u8_rFB_alpha_curve_slp
	//WriteRegister(FRC_TOP__software1__reg_software_50_ADDR, 24, 31, 0x5); // u8_rFB_alpha_curve_th0
	WriteRegister(FRC_TOP__software1__reg_software_50_ADDR, 24, 31, 0x3d); // u8_rFB_alpha_curve_th0 oldvalue 5

	WriteRegister(FRC_TOP__software1__reg_software_51_ADDR, 0, 7, 0x40); // u8_rFB_alpha_curve_min, 0
	//WriteRegister(FRC_TOP__software1__reg_software_51_ADDR, 8, 15, 0xff); // u8_rFB_alpha_curve_max
	WriteRegister(FRC_TOP__software1__reg_software_51_ADDR, 8, 15, 0xa5); // u8_rFB_alpha_curve_max oldvalue 3f
	WriteRegister(FRC_TOP__software1__reg_software_51_ADDR, 16, 23, 0x30); // u8_rFB_alpha_force_value
	WriteRegister(FRC_TOP__software1__reg_software_51_ADDR, 24, 31, 0xf8); // u8_rFB_level_force_value

	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 0, 0, 0x1); // u1_rFB_alpha_auto
	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 1, 1, 0x1); // u1_rFB_level_auto
	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 4, 4, 0x0); // u1_rFB_alpha_by_dtl_en, 1
	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 5, 5, 0x1); // u1_rFB_alpha_by_rMV_cnt_en
	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 6, 6, 0x1); // u1_rFB_big_rMV_en
	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 7, 7, 0x1); // u1_rFB_big_rTC_en

	//WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 8, 15, 0x30); // u8_rFB_level_curve_gain
	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 8, 15, 0x20); // u8_rFB_level_curve_gain oldvalue 30
	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 16, 23, 0x6); // u8_rFB_level_curve_slp
	//WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 24, 31, 0x5); // u8_rFB_level_curve_th0
	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 24, 31, 0x3d); // u8_rFB_level_curve_th0 oldvalue 5

	WriteRegister(FRC_TOP__software1__reg_software_53_ADDR, 0, 7, 0x03); // u8_rFB_level_curve_min, 0
	//WriteRegister(FRC_TOP__software1__reg_software_53_ADDR, 8, 15, 0xff); // u8_rFB_level_curve_max
	WriteRegister(FRC_TOP__software1__reg_software_53_ADDR, 8, 15, 0x06); // u8_rFB_level_curve_max oldvalue, 3f
	WriteRegister(FRC_TOP__software1__reg_software_53_ADDR, 24, 31, 0x40); // u8_rFB_big_rMV_thl

	WriteRegister(FRC_TOP__software1__reg_software_54_ADDR, 0, 1, 0x2); // u2_rmv_alpha_mode
	WriteRegister(FRC_TOP__software1__reg_software_54_ADDR, 2, 2, 0x0); // u1_gmv_alpha_auto
	WriteRegister(FRC_TOP__software1__reg_software_54_ADDR, 8, 15, 0x10); // u8_rmv_alpha_curve_gain
	WriteRegister(FRC_TOP__software1__reg_software_54_ADDR, 16, 23, 0x6); // u8_rmv_alpha_curve_slp
	WriteRegister(FRC_TOP__software1__reg_software_54_ADDR, 24, 31, 0x5); // u8_rmv_alpha_curve_th0

	WriteRegister(FRC_TOP__software1__reg_software_55_ADDR, 0, 7, 0x0); // u8_rmv_alpha_curve_min
	WriteRegister(FRC_TOP__software1__reg_software_55_ADDR, 8, 15, 0xff); // u8_rmv_alpha_curve_max
	WriteRegister(FRC_TOP__software1__reg_software_55_ADDR, 16, 23, 0x64); // u8_gmv_alpha_force_value
	WriteRegister(FRC_TOP__software1__reg_software_55_ADDR, 24, 31, 0x10); // u8_regioonal_unconf_cnt_th

	WriteRegister(FRC_TOP__software1__reg_software_56_ADDR, 0, 15, 0x3e8); // u12_regional_cnt_thl
	//WriteRegister(FRC_TOP__software1__reg_software_56_ADDR, 16, 31, 0x5); // u12_regional_unconf_thl
	WriteRegister(FRC_TOP__software1__reg_software_56_ADDR, 16, 23, 0x0a); // u8_rFB_panning_unconf_thl
	WriteRegister(FRC_TOP__software1__reg_software_56_ADDR, 24, 31, 0xc7); // u8_rFB_panning_cnt_thl

	WriteRegister(FRC_TOP__KMC_BI__bi_fb_fix_en_ADDR, FRC_TOP__KMC_BI__bi_fb_fix_en_BITSTART, FRC_TOP__KMC_BI__bi_fb_fix_en_BITEND, 0x1);
	WriteRegister(FRC_TOP__KMC_BI__bi_fb_statistics_en_ADDR, FRC_TOP__KMC_BI__bi_fb_statistics_en_BITSTART, FRC_TOP__KMC_BI__bi_fb_statistics_en_BITEND, 0x1);
	WriteRegister(FRC_TOP__KMC_BI__bi_fb_mode_ADDR, FRC_TOP__KMC_BI__bi_fb_mode_BITSTART, FRC_TOP__KMC_BI__bi_fb_mode_BITEND, 0x1);
	WriteRegister(FRC_TOP__KMC_BI__bifb_statistic_thl_ADDR, FRC_TOP__KMC_BI__bifb_statistic_thl_BITSTART, FRC_TOP__KMC_BI__bifb_statistic_thl_BITEND, 0x20);
	//====================

	//====================
	// Over search range
	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 2, 2, 0x0);    // u1_over_searchrange_en
	WriteRegister(FRC_TOP__software1__reg_software_52_ADDR, 3, 3, 0x0);    // u1_force_panning
	WriteRegister(FRC_TOP__software1__reg_software_53_ADDR, 16, 23, 0x5f); //u8_over_searchrange_thl
	//====================

	//====================
	// Occl extension software control setting
	WriteRegister(FRC_TOP__software1__reg_software_47_ADDR,  0,  7, 0x18); // u8_MainObjectMove_dtl_thl
	WriteRegister(FRC_TOP__software1__reg_software_47_ADDR,  8, 11, 0xd ); // u4_MainObjectMove_bgMv_thl
	WriteRegister(FRC_TOP__software1__reg_software_47_ADDR, 12, 15, 0x4 ); // u4_MainObjectMove_objBgMvDiff_thl
	WriteRegister(FRC_TOP__software1__reg_software_48_ADDR,  0,  7, 0x15); // u8_MainObjectMove_thl_1
	WriteRegister(FRC_TOP__software1__reg_software_48_ADDR,  8, 15, 0xd ); // u8_MainObjectMove_thl_2
	WriteRegister(FRC_TOP__software1__reg_software_48_ADDR, 16, 23, 0x22); // u8_MainObjectMove_1st_uconf_thr
	WriteRegister(FRC_TOP__software1__reg_software_48_ADDR, 24, 31, 0x26); // u8_MainObjectMove_2nd_uconf_thr
	//====================

	//====================
	// Occl extension software control setting
	WriteRegister(FRC_TOP__software1__reg_software_49_ADDR,  0,  7, 0xb); // u8_occl_ext_bg_mv_diff_thl;
	WriteRegister(FRC_TOP__software1__reg_software_49_ADDR,  8, 11, 0x9); // u4_occl_ext_2nd_gmv_uconf_en_thl;
	WriteRegister(FRC_TOP__software1__reg_software_49_ADDR, 12, 15, 0xb); // u4_occl_ext_2nd_gmv_uconf_dis_thl;
	WriteRegister(FRC_TOP__software1__reg_software_49_ADDR, 16, 19, 0xc); // u4_occl_ext_rgn_thl
	WriteRegister(FRC_TOP__software1__reg_software_49_ADDR, 20, 22, 0x0); // u3_occl_ext_force_lvl
	WriteRegister(FRC_TOP__software1__reg_software_49_ADDR, 23, 23, 0x0); // u1_occl_ext_force_lvl_en
	WriteRegister(FRC_TOP__software1__reg_software_49_ADDR, 28, 28, 0x0); // u1_occl_ext_force_protection_off
	WriteRegister(FRC_TOP__software1__reg_software_49_ADDR, 29, 29, 0x1); // u1_occl_type2_enable
	WriteRegister(FRC_TOP__software1__reg_software_49_ADDR, 30, 30, 0x0); // u1_occl_ext_gmv_weight_mode, 0: fix 1:adpt
	WriteRegister(FRC_TOP__software1__reg_software_49_ADDR, 31, 31, 0x1); // u1_OcclExt_wrt_en;
	//====================
	#if 0 // LG TV006 493813 temp mark to sync
	// Occl extension software control setting
	WriteRegister(FRC_TOP__software1__reg_software_47_ADDR,  0,  7, 0x18); // u8_MainObjectMove_dtl_thl
	WriteRegister(FRC_TOP__software1__reg_software_47_ADDR,  8, 11, 0xd); // u4_MainObjectMove_bgMv_thl
	WriteRegister(FRC_TOP__software1__reg_software_47_ADDR, 12, 15, 0x4); // u4_MainObjectMove_objBgMvDiff_thl
	WriteRegister(FRC_TOP__software1__reg_software_47_ADDR, 16, 23, 0x4); // u8_occl_ext_LogoCount_thr
	WriteRegister(FRC_TOP__software1__reg_software_47_ADDR, 31, 31, 0x0); // u1_occl_ext_avoidLogo_en

	WriteRegister(FRC_TOP__software1__reg_software_48_ADDR,  0,  7, 0x16); // u8_MainObjectMove_thl_1
	WriteRegister(FRC_TOP__software1__reg_software_48_ADDR,  8, 15, 0xe ); // u8_MainObjectMove_thl_2
	WriteRegister(FRC_TOP__software1__reg_software_48_ADDR, 16, 23, 0x22); // u8_MainObjectMove_1st_uconf_thr
	WriteRegister(FRC_TOP__software1__reg_software_48_ADDR, 24, 31, 0x26); // u8_MainObjectMove_2nd_uconf_thr
	//====================
	#endif

	//====================
	// dehalo post correction software control setting
#if 0 // conflict with other func, need fine other software control register
	WriteRegister(FRC_TOP__PQL_0__pql_dummy_c8_ADDR,  0,  7, 0x19); // u8_dh_postcorr_LogoCount_thr
	WriteRegister(FRC_TOP__PQL_0__pql_dummy_c8_ADDR,  8, 15, 0x14); // u8_dh_postcorr_GmvMvy_thr
	WriteRegister(FRC_TOP__PQL_0__pql_dummy_c8_ADDR, 16, 18, 0x0 ); // u3_dh_postcorr_force_lvl
	WriteRegister(FRC_TOP__PQL_0__pql_dummy_c8_ADDR, 19, 19, 0x0 ); // u1_dh_postcorr_force_lvl_en
	WriteRegister(FRC_TOP__PQL_0__pql_dummy_c8_ADDR, 30, 30, 0x0 ); // u1_dh_postcorr_log_en
	WriteRegister(FRC_TOP__PQL_0__pql_dummy_c8_ADDR, 31, 31, 0x1 ); // u1_dh_postcorrt_dyn_calc_en
#endif
#if 0 // conflict with other func, need fine other software control register
	WriteRegister(FRC_TOP__software1__reg_software_38_ADDR, 0,   7, 0xc8); // u8_dh_postcorr_y2x_ratio_x0
	WriteRegister(FRC_TOP__software1__reg_software_38_ADDR, 8,  15, 0x7d); // u8_dh_postcorr_y2x_ratio_x1
	WriteRegister(FRC_TOP__software1__reg_software_38_ADDR, 16, 23, 0x80); // u8_dh_postcorr_y2x_ratio_y0
	WriteRegister(FRC_TOP__software1__reg_software_38_ADDR, 24, 31, 0x4c); // u8_dh_postcorr_y2x_ratio_y1
#endif
	//====================


	//====================
	// Dehalo logo process
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0), u4_dhLogo_bypass[0][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0), u4_dhLogo_bypass[1][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0), u4_dhLogo_bypass[2][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0), u4_dhLogo_bypass[3][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0), u4_dhLogo_bypass[4][0]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg1), u4_dhLogo_bypass[0][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg1), u4_dhLogo_bypass[1][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1), u4_dhLogo_bypass[2][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg1), u4_dhLogo_bypass[3][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1), u4_dhLogo_bypass[4][1]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rg2), u4_dhLogo_bypass[0][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rg2), u4_dhLogo_bypass[1][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rg2), u4_dhLogo_bypass[2][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rg2), u4_dhLogo_bypass[3][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rg2), u4_dhLogo_bypass[4][2]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rg3), u4_dhLogo_bypass[0][3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rg3), u4_dhLogo_bypass[1][3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rg3), u4_dhLogo_bypass[2][3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rg3), u4_dhLogo_bypass[3][3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rg3), u4_dhLogo_bypass[4][3]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rg4), u4_dhLogo_bypass[0][4]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rg4), u4_dhLogo_bypass[1][4]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rg4), u4_dhLogo_bypass[2][4]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rg4), u4_dhLogo_bypass[3][4]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rg4), u4_dhLogo_bypass[4][4]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rg5), u4_dhLogo_bypass[0][5]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rg5), u4_dhLogo_bypass[1][5]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rg5), u4_dhLogo_bypass[2][5]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rg5), u4_dhLogo_bypass[3][5]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rg5), u4_dhLogo_bypass[4][5]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rg6), u4_dhLogo_bypass[0][6]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rg6), u4_dhLogo_bypass[1][6]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rg6), u4_dhLogo_bypass[2][6]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rg6), u4_dhLogo_bypass[3][6]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rg6), u4_dhLogo_bypass[4][6]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rg7), u4_dhLogo_bypass[0][7]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rg7), u4_dhLogo_bypass[1][7]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rg7), u4_dhLogo_bypass[2][7]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rg7), u4_dhLogo_bypass[3][7]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rg7), u4_dhLogo_bypass[4][7]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rg8), u4_dhLogo_bypass[0][8]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rg8), u4_dhLogo_bypass[1][8]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rg8), u4_dhLogo_bypass[2][8]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rg8), u4_dhLogo_bypass[3][8]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rg8), u4_dhLogo_bypass[4][8]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rg9), u4_dhLogo_bypass[0][9]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rg9), u4_dhLogo_bypass[1][9]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rg9), u4_dhLogo_bypass[2][9]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rg9), u4_dhLogo_bypass[3][9]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rg9), u4_dhLogo_bypass[4][9]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rga), u4_dhLogo_bypass[0][10]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rga), u4_dhLogo_bypass[1][10]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rga), u4_dhLogo_bypass[2][10]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rga), u4_dhLogo_bypass[3][10]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rga), u4_dhLogo_bypass[4][10]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rgb), u4_dhLogo_bypass[0][11]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rgb), u4_dhLogo_bypass[1][11]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rgb), u4_dhLogo_bypass[2][11]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rgb), u4_dhLogo_bypass[3][11]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rgb), u4_dhLogo_bypass[4][11]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rgc), u4_dhLogo_bypass[0][12]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rgc), u4_dhLogo_bypass[1][12]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rgc), u4_dhLogo_bypass[2][12]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rgc), u4_dhLogo_bypass[3][12]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rgc), u4_dhLogo_bypass[4][12]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rgd), u4_dhLogo_bypass[0][13]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rgd), u4_dhLogo_bypass[1][13]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rgd), u4_dhLogo_bypass[2][13]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rgd), u4_dhLogo_bypass[3][13]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rgd), u4_dhLogo_bypass[4][13]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__hor_bypass_rge), u4_dhLogo_bypass[0][14]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__ver_bypass_rge), u4_dhLogo_bypass[1][14]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mvd_bypass_rge), u4_dhLogo_bypass[2][14]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__smv_bypass_rge), u4_dhLogo_bypass[3][14]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_bypass_rge), u4_dhLogo_bypass[4][14]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_d_th_rg0), u8_dhLogo_RgnThr[0][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_th_rg0), u8_dhLogo_RgnThr[1][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_diff_th_rg0), u8_dhLogo_RgnThr[2][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_t_th_rg0), u8_dhLogo_RgnThr[3][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_t_th_rg0), u8_dhLogo_RgnThr[4][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_num_rg0), u8_dhLogo_RgnThr[5][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_mode_rg0), u8_dhLogo_RgnThr[6][0]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_d_th_rg1), u8_dhLogo_RgnThr[0][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_th_rg1), u8_dhLogo_RgnThr[1][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_diff_th_rg1), u8_dhLogo_RgnThr[2][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_t_th_rg1), u8_dhLogo_RgnThr[3][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_t_th_rg1), u8_dhLogo_RgnThr[4][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_num_rg1), u8_dhLogo_RgnThr[5][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_mode_rg1), u8_dhLogo_RgnThr[6][1]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__sad_d_th_rg2), u8_dhLogo_RgnThr[0][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mv_d_th_rg2), u8_dhLogo_RgnThr[1][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mv_d_diff_th_rg2), u8_dhLogo_RgnThr[2][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__sad_t_th_rg2), u8_dhLogo_RgnThr[3][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__mv_t_th_rg2), u8_dhLogo_RgnThr[4][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_num_rg2), u8_dhLogo_RgnThr[5][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__tmv_mode_rg2), u8_dhLogo_RgnThr[6][2]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_y_diff_th), 0x6);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_y_ratio), 0x4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_y_th), 0x2);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_y_th), 0x6);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_y_num_th), 0x1ff);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_logo_y_th), 0xa);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_smv_mv_y_th), 0x4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_smv_mv_x_th), 0x4);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_smv_sad_th), 0x64);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_smv_num), 0x238e3);

	//====================


}

void MEMC_LibSetKMVEngineEnable(unsigned char enable, MEMC_INOUT_MODE emom)
{
	Mid_DM_SetKMVEngineEnable((BOOL)enable, (INOUT_MODE)emom);
}

BOOL MEMC_GetInOutISREnable(VOID)
{
	return Mid_MISC_GetInINTEnable(INT_TYPE_VSYNC) && Mid_MISC_GetOutINTEnable(INT_TYPE_VSYNC);

}

UINT32 sram_ipme1, sram_lbme, sram_lbme2, sram_me1_vbuf, sram_me2_vbuf, sram_logo, sram_me, sram_dehalo;
UINT32 me1, me2, in_isr, out_isr, dehalo, candn;
BOOL MEMC_LibPowerSaveOn(VOID)
{

	UINT32 powerSaving_en = 0;
	ReadRegister(FRC_TOP__PQL_1__pql_film_det_bypass_ADDR, 26, 26, &powerSaving_en);

	if(powerSaving_en)
	{
		const _PQLCONTEXT *s_pContext = GetPQLContext();
		_PQL_Command PQLCommand;

		if(s_pContext->_output_filmDetectctrl.u8_cur_cadence_Id[_FILM_ALL]!=_CAD_VIDEO){
			return 1;
		}

		WriteRegister(FRC_TOP__PQL_0__pql_onefifth_intp_en_ADDR, 29, 31, 0x0);

		{// save current status ----------------------------------------------------

			//SRAM LS Setting
			ReadRegister(FRC_TOP__KME_IPME1__kme_ipme_sram_ls_en_ADDR, 25, 26, &sram_ipme1);
			ReadRegister(FRC_TOP__KME_LBME_TOP__kme_lbme_sram_ls_en_ADDR, 22, 23, &sram_lbme);
//			ReadRegister(FRC_TOP__KME_LBME_TOP__kme2_lbme_sram_ls_en_ADDR, 20, 21, &sram_lbme2);
			ReadRegister(FRC_TOP__KME_VBUF_TOP__kme_vbuf_sram_ls_en_ADDR, 22, 23, &sram_me1_vbuf);
			ReadRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_sram_ls_en_ADDR, 17, 18, &sram_me2_vbuf);
			ReadRegister(FRC_TOP__KME_LOGO2__kme_logo_sram_ls_en_ADDR, 22, 23, &sram_logo);
			ReadRegister(FRC_TOP__KME_DM_TOP0__kme_sram_ls_en_ADDR, 10, 11, &sram_me);
			ReadRegister(FRC_TOP__KME_DEHALO__dh_sram_ls_ADDR, 25, 25, &sram_dehalo);

			//set me1/me2 vbuf state machine don't work, reduce cand num
			ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_en_ADDR, 0, 15, &me1);
			ReadRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_en_ADDR, 8, 8, &me2);

			//disable dehalo
			ReadRegister(FRC_TOP__KME_DEHALO__dh_en_ADDR, 0, 0, &dehalo);

			//reduce cand num
			ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_en_ADDR, 0, 14, &candn);

			//disable memc isr en
			//ReadRegister(FRC_TOP__KMC_TOP__kmc_int_en_ADDR, 24, 27, &in_isr);
			ReadRegister(FRC_TOP__KPOST_TOP__post_int_en_ADDR, 5, 8, &out_isr);
		}

		{// do power save ----------------------------------------------------

			//SRAM LS Setting
			WriteRegister(FRC_TOP__KME_IPME1__kme_ipme_sram_ls_en_ADDR, 25, 26, 0x2);
			WriteRegister(FRC_TOP__KME_LBME_TOP__kme_lbme_sram_ls_en_ADDR, 22, 23, 0x2);
//			WriteRegister(FRC_TOP__KME_LBME_TOP__kme2_lbme_sram_ls_en_ADDR, 20, 21, 0x2);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__kme_vbuf_sram_ls_en_ADDR, 22, 23, 0x2);
			WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_sram_ls_en_ADDR, 17, 18, 0x2);
			WriteRegister(FRC_TOP__KME_LOGO2__kme_logo_sram_ls_en_ADDR, 22, 23, 0x2);
			WriteRegister(FRC_TOP__KME_DM_TOP0__kme_sram_ls_en_ADDR, 10, 11, 0x2);
			WriteRegister(FRC_TOP__KME_DEHALO__dh_sram_ls_ADDR, 25, 25, 0x1);

			//set me1/me2 vbuf state machine don't work, reduce cand num
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_en_ADDR, 0, 15, 0x0);
			WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_en_ADDR, 8, 8, 0x0);

			//disable dehalo
			WriteRegister(FRC_TOP__KME_DEHALO__dh_en_ADDR, 0, 0, 0x0);//to here ng

			//reduce cand num
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_en_ADDR, 0, 14, 0x0);

			//disable memc isr en
			//WriteRegister(FRC_TOP__KMC_TOP__kmc_int_en_ADDR, 24, 27, 0x0);
			WriteRegister(FRC_TOP__KPOST_TOP__post_int_en_ADDR, 5, 8, 0x0);
		}

		PQLCommand.u1_powerSaving = 1;
		PQL_Command(PQL_CMD_POWERSAVING, &PQLCommand);

		WriteRegister(FRC_TOP__PQL_0__pql_onefifth_intp_en_ADDR, 29, 31, 0x7);

		return 0;
	}
	else
	{
		return 1;
	}
}

BOOL MEMC_LibPowerSaveOff(VOID)
{


	UINT32 powerSaving_en = 0;
	ReadRegister(FRC_TOP__PQL_1__pql_film_det_bypass_ADDR, 26, 26, &powerSaving_en);

	if(powerSaving_en)
	{
		const _PQLCONTEXT *s_pContext = GetPQLContext();
		_PQL_Command PQLCommand;

		if(s_pContext->_output_filmDetectctrl.u8_cur_cadence_Id[_FILM_ALL]!=_CAD_VIDEO){
			return 1;
		}

		WriteRegister(FRC_TOP__PQL_0__pql_onefifth_intp_en_ADDR, 29, 31, 0x0);

		{// disable power save ----------------------------------------------------

			//SRAM LS Setting
			WriteRegister(FRC_TOP__KME_IPME1__kme_ipme_sram_ls_en_ADDR, 25, 26, sram_ipme1);
			WriteRegister(FRC_TOP__KME_LBME_TOP__kme_lbme_sram_ls_en_ADDR, 22, 23, sram_lbme);
//			WriteRegister(FRC_TOP__KME_ME2_LBME_TOP__reg_me2_lbme_sram_ls_en_ADDR, 20, 21, sram_lbme2);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__kme_vbuf_sram_ls_en_ADDR, 22, 23, sram_me1_vbuf);
			WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_sram_ls_en_ADDR, 17, 18, sram_me2_vbuf);
			WriteRegister(FRC_TOP__KME_LOGO2__kme_logo_sram_ls_en_ADDR, 22, 23, sram_logo);
			WriteRegister(FRC_TOP__KME_DM_TOP0__kme_sram_ls_en_ADDR, 10, 11, sram_me);
			WriteRegister(FRC_TOP__KME_DEHALO__dh_sram_ls_ADDR, 25, 25, sram_dehalo);

			//set me1/me2 vbuf state machine don't work, reduce cand num
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_en_ADDR, 0, 15, me1);
			WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_en_ADDR, 8, 8, me2);

			//disable dehalo
			WriteRegister(FRC_TOP__KME_DEHALO__dh_en_ADDR, 0, 0, dehalo);

			//reduce cand num
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_en_ADDR, 0, 14, candn);

			//disable memc isr en
			//WriteRegister(FRC_TOP__KMC_TOP__kmc_int_en_ADDR, 24, 27, in_isr);
			WriteRegister(FRC_TOP__KPOST_TOP__post_int_en_ADDR, 5, 8, out_isr);
		}

		PQLCommand.u1_powerSaving = 0;
		PQL_Command(PQL_CMD_POWERSAVING, &PQLCommand);

		WriteRegister(FRC_TOP__PQL_0__pql_onefifth_intp_en_ADDR, 29, 31, 0x7);

		return 0;
	}
	else
	{
		return 1;
	}
}

VOID MEMC_LibDisableDMA(VOID)
{
#if 1
	rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC_LibDisableDMA_01][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));

	//rtd_outl(0xb80994F0,0x00000001); //db_en
	//rtd_outl(0xb809AEA8,0x00000001); //db_en

	rtd_clearbits(0xb8099200, _BIT31); //[31], PQC
	rtd_clearbits(0xb8099800, _BIT31); //[31], PQDC

	rtd_clearbits(0xb8099460, _BIT0); //[0], dma_off mc w
	rtd_clearbits(0xb80994dc, _BIT0); //[0], dma_off mc w
	rtd_clearbits(0xb809ae1c, _BIT0); //[0], dma_off mc r
	rtd_clearbits(0xb809ae3c, _BIT0); //[0], dma_off mc r
	rtd_clearbits(0xb809ae5c, _BIT0); //[0], dma_off mc r
	rtd_clearbits(0xb809ae7c, _BIT0); //[0], dma_off mc r

	rtd_outl(0xb809B720,0x00000000); //[2:0], dma_off me_new
	rtd_outl(0xb809B7B0,0x00000000); //[5:0], dma_off me_new
	rtd_clearbits(0xb809B794, _BIT0); //[0], dma_off me share w
	rtd_clearbits(0xb809B7E0, _BIT0); //[0], dma_off me share r
	rtd_clearbits(0xb809c038, _BIT20); //[20], kme_00_write_en
	rtd_clearbits(0xb809c040, _BIT20); //[20], kme_01_read_en
	rtd_clearbits(0xb809c048, _BIT20); //[20], kme_02_read_en
	rtd_clearbits(0xb809c050, _BIT20); //[20], kme_03_read_en
	rtd_clearbits(0xb809c098, _BIT20); //[20], kme_06_read_en
	rtd_clearbits(0xb809c0a0, _BIT20); //[20], kme_07_read_en
	rtd_clearbits(0xb809c114, _BIT20); //[20], kme_08_write_en
	rtd_clearbits(0xb809c11c, _BIT20); //[20], kme_09_read_en
	rtd_clearbits(0xb809c138, _BIT20); //[20], kme_10_write_en
	rtd_clearbits(0xb809c140, _BIT20); //[20], kme_11_read_en
	rtd_clearbits(0xb809c15c, _BIT20); //[20], kme_12_write_en
	rtd_clearbits(0xb809c164, _BIT20); //[20], kme_13_read_en
	rtd_clearbits(0xb809c180, _BIT20); //[20], kme_14_write_en
	rtd_clearbits(0xb809c188, _BIT20); //[20], kme_15_read_en

	rtd_clearbits(0xb809c210, _BIT20);  //[20], mv01_write_en
	rtd_clearbits(0xb809c224, _BIT20);  //[20], mv02_write_en
	rtd_clearbits(0xb809c228, _BIT20);  //[20], mv03_read_en
	rtd_clearbits(0xb809c244, _BIT20);  //[20], mv04_write_en
	rtd_clearbits(0xb809c260, _BIT20);  //[20], mv05_write_en
	rtd_clearbits(0xb809c264, _BIT20);  //[20], mv06_read_en
	rtd_clearbits(0xb809c268, _BIT20);  //[20], mv07_read_en
	rtd_clearbits(0xb809c26c, _BIT20);  //[20], mv08_read_en
	rtd_clearbits(0xb809c270, _BIT20);  //[20], mv09_read_en
	rtd_clearbits(0xb809c274, _BIT20);  //[20], mv10_read_en
	rtd_clearbits(0xb809c278, _BIT20);  //[20], mv11_read_en

	//rtd_outl(0xb80994F0,0x00000004); //db_apply
	//rtd_outl(0xb809AEA8,0x00000004); //db_apply

	//rtd_outl(0xb80994F0,0x00000000); //db_off
	//rtd_outl(0xb809AEA8,0x00000000); //db_off
	rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC_LibDisableDMA_02][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));
#endif

}

VOID MEMC_LibDisableMEDMA(VOID)
{
#if 1
	rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC_LibDisableMEDMA_01][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));
	//rtd_outl(0xb80994F0,0x00000001); //db_en
	//rtd_outl(0xb809AEA8,0x00000001); //db_en

	rtd_setbits(0xb8099200, _BIT31); //[31], PQC
	rtd_setbits(0xb8099800, _BIT31); //[31], PQDC

#if 1
	if(MEMC_LibGetMEMC_PCModeEnable()){
		rtd_setbits(0xb8099460, _BIT0); //[0], dma_off mc w
		rtd_setbits(0xb80994dc, _BIT0); //[0], dma_off mc w
		rtd_setbits(0xb809ae1c, _BIT0); //[0], dma_off mc r_i
		rtd_setbits(0xb809ae3c, _BIT0); //[0], dma_off mc r_i
		rtd_clearbits(0xb809ae5c, _BIT0); //[0], dma_off mc r_p
		rtd_clearbits(0xb809ae7c, _BIT0); //[0], dma_off mc r_p
	}else{
		if(VR360_en){
			rtd_setbits(0xb8099460, _BIT0); //[0], dma_off mc w
			rtd_setbits(0xb80994dc, _BIT0); //[0], dma_off mc w
			rtd_setbits(0xb809ae1c, _BIT0); //[0], dma_off mc r_i
			rtd_setbits(0xb809ae3c, _BIT0); //[0], dma_off mc r_i
			rtd_clearbits(0xb809ae5c, _BIT0); //[0], dma_off mc r_p
			rtd_clearbits(0xb809ae7c, _BIT0); //[0], dma_off mc r_p
			pr_notice("[MEMC_LibDisableMEDMA][AA][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));
		}else{
			rtd_setbits(0xb8099460, _BIT0); //[0], dma_off mc w
			rtd_setbits(0xb80994dc, _BIT0); //[0], dma_off mc w
			rtd_setbits(0xb809ae1c, _BIT0); //[0], dma_off mc r_i
			rtd_setbits(0xb809ae3c, _BIT0); //[0], dma_off mc r_i
			rtd_setbits(0xb809ae5c, _BIT0); //[0], dma_off mc r_p
			rtd_setbits(0xb809ae7c, _BIT0); //[0], dma_off mc r_p
			pr_notice("[MEMC_LibDisableMEDMA][BB2][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));
		}
	}
#else
	rtd_clearbits(0xb8099460, _BIT0); //[0], dma_off mc w
	rtd_clearbits(0xb80994dc, _BIT0); //[0], dma_off mc w
	rtd_clearbits(0xb809ae1c, _BIT0); //[0], dma_off mc r
	rtd_clearbits(0xb809ae3c, _BIT0); //[0], dma_off mc r
	rtd_clearbits(0xb809ae5c, _BIT0); //[0], dma_off mc r
	rtd_clearbits(0xb809ae7c, _BIT0); //[0], dma_off mc r
#endif

	rtd_outl(0xb809B720,0x00000000); //[2:0], dma_off me_new
	rtd_outl(0xb809B7B0,0x00000000); //[5:0], dma_off me_new
	rtd_clearbits(0xb809B794, _BIT0); //[0], dma_off me share w
	rtd_clearbits(0xb809B7E0, _BIT0); //[0], dma_off me share r
	rtd_setbits(0xb809c038, _BIT20); //[20], kme_00_write_en
	rtd_setbits(0xb809c040, _BIT20); //[20], kme_01_read_en
	rtd_clearbits(0xb809c048, _BIT20); //[20], kme_02_read_en
	rtd_clearbits(0xb809c050, _BIT20); //[20], kme_03_read_en
	rtd_clearbits(0xb809c098, _BIT20); //[20], kme_06_read_en
	rtd_clearbits(0xb809c0a0, _BIT20); //[20], kme_07_read_en
	rtd_clearbits(0xb809c114, _BIT20); //[20], kme_08_write_en
	rtd_clearbits(0xb809c11c, _BIT20); //[20], kme_09_read_en
	rtd_clearbits(0xb809c138, _BIT20); //[20], kme_10_write_en
	rtd_clearbits(0xb809c140, _BIT20); //[20], kme_11_read_en
	rtd_clearbits(0xb809c15c, _BIT20); //[20], kme_12_write_en
	rtd_clearbits(0xb809c164, _BIT20); //[20], kme_13_read_en
	rtd_clearbits(0xb809c180, _BIT20); //[20], kme_14_write_en
	rtd_clearbits(0xb809c188, _BIT20); //[20], kme_15_read_en

	rtd_clearbits(0xb809c210, _BIT20);  //[20], mv01_write_en
	rtd_clearbits(0xb809c224, _BIT20);  //[20], mv02_write_en
	rtd_clearbits(0xb809c228, _BIT20);  //[20], mv03_read_en
	rtd_clearbits(0xb809c244, _BIT20);  //[20], mv04_write_en
	rtd_clearbits(0xb809c260, _BIT20);  //[20], mv05_write_en
	rtd_clearbits(0xb809c264, _BIT20);  //[20], mv06_read_en
	rtd_clearbits(0xb809c268, _BIT20);  //[20], mv07_read_en
	rtd_clearbits(0xb809c26c, _BIT20);  //[20], mv08_read_en
	rtd_clearbits(0xb809c270, _BIT20);  //[20], mv09_read_en
	rtd_clearbits(0xb809c274, _BIT20);  //[20], mv10_read_en
	rtd_clearbits(0xb809c278, _BIT20);  //[20], mv11_read_en

	//rtd_setbits(0xb80994F0, _BIT2); //db_apply
	//rtd_setbits(0xb809AEA8, _BIT2); //db_apply

	//rtd_outl(0xb80994F0,0x00000000); //db_off
	//rtd_outl(0xb809AEA8,0x00000000); //db_off
	rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC_LibDisableMEDMA_02][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));
#endif

}

extern int LowDelay_mode;
extern VOID Mid_Mode_SetMEMC_PCModeEnable(BOOL bEnable);
VOID MEMC_LibEnableDMA(VOID)
{
#if 1
	pr_notice("[MEMC_LibEnableDMA_00][,%d,%d,][,%d,%d,][%d]\n\r", gstAppData.stMEMCData.bPCMode, LowDelay_mode, u8_MEMCMode, dejudder, ((rtd_inl(0xb8028100)>>13)&0x1));
	if(gstAppData.stMEMCData.bPCMode == TRUE)
	{
		rtd_setbits(0xb8099200, _BIT31); //[31], PQC
		rtd_setbits(0xb8099800, _BIT31); //[31], PQDC

		rtd_setbits(0xb8099460, _BIT0); //[0], mc_hf w
		rtd_setbits(0xb80994dc, _BIT0); //[0], mc_lf w

		Mid_Mode_SetMEMC_PCModeEnable(TRUE);
		pr_notice("[MEMC_LibEnableDMA_01][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));
//		return;//set by pc mode flow
	}else if((LowDelay_mode == 1) /*(u8_MEMCMode == 0) || (u8_MEMCMode == 4 && dejudder == 0)*/){
		rtd_setbits(0xb8099200, _BIT31); //[31], PQC
		rtd_setbits(0xb8099800, _BIT31); //[31], PQDC

		rtd_setbits(0xb8099460, _BIT0); //[0], mc_hf w
		rtd_setbits(0xb80994dc, _BIT0); //[0], mc_lf w
		rtd_setbits(0xb809ae1c, _BIT0); //[0], mc_hf_i r
		rtd_setbits(0xb809ae3c, _BIT0); //[0], mc_lf_i r
		rtd_setbits(0xb809ae5c, _BIT0); //[0], mc_hf_p r
		rtd_setbits(0xb809ae7c, _BIT0); //[0], mc_lf_p r

		rtd_outl(0xb809B720,0x00000000); //[2:0], dma_off me_new
		rtd_outl(0xb809B7B0,0x00000000); //[5:0], dma_off me_new
		rtd_clearbits(0xb809B794, _BIT0); //[0], dma_off me share w
		rtd_clearbits(0xb809B7E0, _BIT0); //[0], dma_off me share r
		rtd_setbits(0xb809c038, _BIT20); //[20], kme_00_write_en
		rtd_setbits(0xb809c040, _BIT20); //[20], kme_01_read_en
		rtd_clearbits(0xb809c048, _BIT20); //[20], kme_02_read_en
		rtd_clearbits(0xb809c050, _BIT20); //[20], kme_03_read_en
		rtd_setbits(0xb809c098, _BIT20); //[20], kme_06_read_en
		rtd_setbits(0xb809c0a0, _BIT20); //[20], kme_07_read_en
		rtd_clearbits(0xb809c114, _BIT20); //[20], kme_08_write_en
		rtd_clearbits(0xb809c11c, _BIT20); //[20], kme_09_read_en
		rtd_clearbits(0xb809c138, _BIT20); //[20], kme_10_write_en
		rtd_clearbits(0xb809c140, _BIT20); //[20], kme_11_read_en
		rtd_clearbits(0xb809c15c, _BIT20); //[20], kme_12_write_en
		rtd_clearbits(0xb809c164, _BIT20); //[20], kme_13_read_en
		rtd_clearbits(0xb809c180, _BIT20); //[20], kme_14_write_en
		rtd_clearbits(0xb809c188, _BIT20); //[20], kme_15_read_en

		rtd_clearbits(0xb809c210, _BIT20);  //[20], mv01_write_en
		rtd_clearbits(0xb809c224, _BIT20);  //[20], mv02_write_en
		rtd_clearbits(0xb809c228, _BIT20);  //[20], mv03_read_en
		rtd_clearbits(0xb809c244, _BIT20);  //[20], mv04_write_en
		rtd_clearbits(0xb809c260, _BIT20);  //[20], mv05_write_en
		rtd_clearbits(0xb809c264, _BIT20);  //[20], mv06_read_en
		rtd_clearbits(0xb809c268, _BIT20);  //[20], mv07_read_en
		rtd_clearbits(0xb809c26c, _BIT20);  //[20], mv08_read_en
		rtd_clearbits(0xb809c270, _BIT20);  //[20], mv09_read_en
		rtd_clearbits(0xb809c274, _BIT20);  //[20], mv10_read_en
		rtd_clearbits(0xb809c278, _BIT20);  //[20], mv11_read_en
		pr_notice("[MEMC_LibEnableDMA_02][,%x, %x, %x, %x, %x, %x, %x,]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c), rtd_inl(0xb809c098));
	}else{
		rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_MEMC_LibEnableDMA_03][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));
		pr_notice("[MEMC_LibEnableDMA_03][%d][%x, %x, %x, %x, %x]\n\r", ((rtd_inl(0xb8028100)>>13)&0x1), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));
		//rtd_outl(0xb80994F0,0x00000001); //db_en
		//rtd_outl(0xb809AEA8,0x00000001); //db_en

		rtd_setbits(0xb8099200, _BIT31); //[31], PQC
		rtd_setbits(0xb8099800, _BIT31); //[31], PQDC

		rtd_setbits(0xb8099460, _BIT0); //[0], mc_hf w
		rtd_setbits(0xb80994dc, _BIT0); //[0], mc_lf w
		rtd_setbits(0xb809ae1c, _BIT0); //[0], mc_hf_i r
		rtd_setbits(0xb809ae3c, _BIT0); //[0], mc_lf_i r
		rtd_setbits(0xb809ae5c, _BIT0); //[0], mc_hf_p r
		rtd_setbits(0xb809ae7c, _BIT0); //[0], mc_lf_p r

		rtd_outl(0xb809B720,0x00000007); //[0], dma_off me_new
		rtd_outl(0xb809B7B0,0x0000003f); //[0], dma_off me_new
		rtd_setbits(0xb809B794, _BIT0); //[0], dma_off me share w
		rtd_setbits(0xb809B7E0, _BIT0); //[0], dma_off me share r
		rtd_setbits(0xb809c038, _BIT20); //[20], kme_00_write_en
		rtd_setbits(0xb809c040, _BIT20); //[20], kme_01_read_en
		rtd_setbits(0xb809c048, _BIT20); //[20], kme_02_read_en
		rtd_setbits(0xb809c050, _BIT20); //[20], kme_03_read_en
		rtd_setbits(0xb809c098, _BIT20); //[20], kme_06_read_en
		rtd_setbits(0xb809c0a0, _BIT20); //[20], kme_07_read_en
		rtd_setbits(0xb809c114, _BIT20); //[20], kme_08_write_en
		rtd_setbits(0xb809c11c, _BIT20); //[20], kme_09_read_en
		rtd_setbits(0xb809c138, _BIT20); //[20], kme_10_write_en
		rtd_setbits(0xb809c140, _BIT20); //[20], kme_11_read_en
		rtd_setbits(0xb809c15c, _BIT20); //[20], kme_12_write_en
		rtd_setbits(0xb809c164, _BIT20); //[20], kme_13_read_en
		rtd_setbits(0xb809c180, _BIT20); //[20], kme_14_write_en
		rtd_setbits(0xb809c188, _BIT20); //[20], kme_15_read_en

		rtd_setbits(0xb809c210, _BIT20);  //[20], mv01_write_en
		rtd_setbits(0xb809c224, _BIT20);  //[20], mv02_write_en
		rtd_setbits(0xb809c228, _BIT20);  //[20], mv03_read_en
		rtd_setbits(0xb809c244, _BIT20);  //[20], mv04_write_en
		rtd_setbits(0xb809c260, _BIT20);  //[20], mv05_write_en
		rtd_setbits(0xb809c264, _BIT20);  //[20], mv06_read_en
		rtd_setbits(0xb809c268, _BIT20);  //[20], mv07_read_en
		rtd_setbits(0xb809c26c, _BIT20);  //[20], mv08_read_en
		rtd_setbits(0xb809c270, _BIT20);  //[20], mv09_read_en
		rtd_setbits(0xb809c274, _BIT20);  //[20], mv10_read_en
		rtd_setbits(0xb809c278, _BIT20);  //[20], mv11_read_en

		//rtd_outl(0xb80994F0,0x00000004); //db_apply
		//rtd_outl(0xb809AEA8,0x00000004); //db_apply

		//rtd_outl(0xb80994F0,0x00000000); //db_off
		//rtd_outl(0xb809AEA8,0x00000000); //db_off
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC_LibEnableDMA_04][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));
	}
#endif
}

unsigned char glb_memc_bypass_to_enable_flag = 0;
VOID MEMC_Lib_set_memc_bypass_to_enable_flag(unsigned char u1_enable)
{
	glb_memc_bypass_to_enable_flag = u1_enable;
}

unsigned char MEMC_Lib_get_memc_bypass_to_enable_flag(VOID)
{
	return glb_memc_bypass_to_enable_flag;
}

unsigned char glb_memc_enable_to_bypass_flag = 0;
VOID MEMC_Lib_set_memc_enable_to_bypass_flag(unsigned char u1_enable)
{
	glb_memc_enable_to_bypass_flag = u1_enable;
}

unsigned char MEMC_Lib_get_memc_enable_to_bypass_flag(VOID)
{
	return glb_memc_enable_to_bypass_flag;
}

unsigned char glb_memc_freeze_status_flag = 0;
VOID MEMC_Lib_set_memc_freeze_status_flag(unsigned char u1_enable)
{
	glb_memc_freeze_status_flag = u1_enable;
}

unsigned char MEMC_Lib_get_memc_freeze_status_flag(VOID)
{
	return glb_memc_freeze_status_flag;
}

unsigned char glb_HDMI_memc_bypass_to_enable_flag = 0;
VOID MEMC_Lib_HDMI_set_memc_bypass_to_enable_flag(unsigned char u1_enable)
{
	glb_HDMI_memc_bypass_to_enable_flag = u1_enable;
}

unsigned char MEMC_Lib_HDMI_get_memc_bypass_to_enable_flag(VOID)
{
	return glb_HDMI_memc_bypass_to_enable_flag;
}

unsigned char glb_memc_do_power_saving_flag = 0;
VOID MEMC_Lib_set_memc_do_power_saving_flag(unsigned char u1_enable)
{
	glb_memc_do_power_saving_flag = u1_enable;
}

unsigned char MEMC_Lib_get_memc_do_power_saving_flag(VOID)
{
	return glb_memc_do_power_saving_flag;
}

unsigned char glb_memc_PowerSaving_Mode = 0;
VOID MEMC_Lib_set_memc_PowerSaving_Mode(unsigned char u1_mode)
{
	glb_memc_PowerSaving_Mode = u1_mode;
}

unsigned char MEMC_Lib_get_memc_PowerSaving_Mode(VOID)
{
	return glb_memc_PowerSaving_Mode;
}

unsigned char glb_INPUT_COLOR_SPACE_Mode = 0;
VOID MEMC_Lib_set_INPUT_COLOR_SPACE_Mode(unsigned char u1_mode)
{
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]INPUT_COLOR_SPACE_Mode = %d,%d,%d\n",u1_mode, gstAppData.stMEMCData.input422_pc_mode, gstAppData.stMEMCData.input422_pc_mode_QRPC);
	glb_INPUT_COLOR_SPACE_Mode = u1_mode;//I3DDMA_COLOR_SPACE_T
}

unsigned char MEMC_Lib_get_INPUT_COLOR_SPACE_Mode(VOID)
{
	return glb_INPUT_COLOR_SPACE_Mode;//I3DDMA_COLOR_SPACE_T
}

unsigned char glb_Input_Src_Type = 0;
unsigned char MEMC_Lib_get_Input_Src_Type(VOID)
{
	_system_setting_info* system_info_structure_table = NULL;
	system_info_structure_table = scaler_GetShare_Memory_system_setting_info_Struct();
	if(system_info_structure_table == NULL){
		return 0;
	}
	glb_Input_Src_Type = system_info_structure_table->Input_src_Type;
	pr_notice("[input_src_type][%d]", glb_Input_Src_Type);

	return glb_Input_Src_Type;//I-domain input src type
}

unsigned char glb_adaptive_stream_flag = 0;
extern unsigned char vsc_get_adaptivestream_flag(unsigned char display);
unsigned char MEMC_Lib_get_Adaptive_Stream_Flag(VOID)
{
	glb_adaptive_stream_flag = vsc_get_adaptivestream_flag(SLR_MAIN_DISPLAY);
	return glb_adaptive_stream_flag;//I-domain input src type
}

unsigned char glb_get_display_mode_src = 0;
extern VSC_INPUT_TYPE_T Get_DisplayMode_Src(unsigned char display);
unsigned char MEMC_Lib_get_DisplayMode_Src(VOID)
{
	glb_get_display_mode_src = Get_DisplayMode_Src(0); //SLR_MAIN_DISPLAY
	return glb_get_display_mode_src;
}

unsigned char glb_vpq_lowdelay_flag = 0;
void MEMC_Lib_set_Vpq_LowDelay_to_MEMC_flag(unsigned char u1_mode)
{
	glb_vpq_lowdelay_flag = u1_mode;
}

unsigned char MEMC_Lib_get_Vpq_LowDelay_to_MEMC_flag(VOID)
{
	return glb_vpq_lowdelay_flag;
}

#define  PPOVERLAY_Double_Buffer_CTRL2_reg		0xB802847C
#define  PPOVERLAY_MEMC_MUX_CTRL_reg			0xB8028100
#define  MEMC_MUX_MEMC_MUX_FUNC_CTRL_reg	0xB802E800
UINT32 frm_cnt_test1 = 0;
UINT32 PS_state = 0;
extern unsigned char g_MEMC_powersaving_on;
extern UINT32 HDMI_PowerSaving_stage;
extern int g_memc_hdmi_switch_state;
extern void Scaler_MEMC_HDMI_ME_CLK_OnOff(unsigned char is_clk_on, unsigned char mode);
extern void Scaler_MEMC_Bypass_On(unsigned char b_isBypass);
extern unsigned int vbe_get_HDMI_dynamic_film_mode_flag(void);
UINT32 tmp_val = 0;
UINT32 tmp_crtc1_frc_hact = 0;
UINT32 tmp_crtc1_mc_vact = 0;
VOID MEMC_LibPowerSaveing(VOID)
{
#if 1
	UINT32 height = 0;
	UINT32 width = 0;
	UINT32 PowerSaving_en = 0;
	UINT32 cadence = 0;
	UINT32 Input_src_Type = 0;
	UINT32 ME_clock_state = 0;
	UINT32 MEMC_clock_state = 0;
	UINT32 MEMC_mux_state = 0;
	UINT32 crtc1_frc_hact_state = 0;
	UINT32 MEMC_drvif_mux_state = 0;
	UINT32 MC_sram_state = 0;
	UINT32 PowerSavingJudge_log_en = 0;
	PQL_INPUT_FRAME_RATE in_fmRate = 0;
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_system_setting_info* system_info_structure_table = NULL;
	static UINT32 u1_instanboot_resume_done_cnt = 0;

#ifdef MEMC_BRING_UP
	return;
#endif

	system_info_structure_table = scaler_GetShare_Memory_system_setting_info_Struct();
	if((system_info_structure_table == NULL) || (s_pContext == NULL)){
		return;
	}

	height = system_info_structure_table->I_Height;
	width = system_info_structure_table->I_Width;
	cadence = s_pContext->_output_filmDetectctrl.u8_cur_cadence_Id[_FILM_ALL];
	in_fmRate = s_pContext->_external_data._input_frameRate;
	Input_src_Type = system_info_structure_table->Input_src_Type;
	PowerSaving_en = (rtd_inl(SOFTWARE1__SOFTWARE1_00_ADDR)>>0)&0x1;
	ME_clock_state = (rtd_inl(0xb800011c)>>30)&0x1;
	MEMC_clock_state = (rtd_inl(0xb800011c)>>31)&0x1;
	MEMC_mux_state = (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1;
	crtc1_frc_hact_state = rtd_inl(CRTC1__CRTC1_14_ADDR)&0xfff;
	MEMC_drvif_mux_state = rtd_inl(MEMC_MUX_MEMC_MUX_FUNC_CTRL_reg)&0x1;
	MC_sram_state = (rtd_inl(MC__MC_34_ADDR)>>28)&0x1;
	ReadRegister(FRC_TOP__software1__reg_software_12_ADDR, 14, 14, &PowerSavingJudge_log_en);

	if(MEMC_instanboot_resume_done_jerry == 1 || MEMC_isr_resume_done_jerry == 1){
		MEMC_instanboot_resume_done_jerry = 0;
		MEMC_isr_resume_done_jerry = 0;
		u1_instanboot_resume_done_cnt = 1;
	}

	if(u1_instanboot_resume_done_cnt > 0){
		u1_instanboot_resume_done_cnt++;
		u1_DoPowerSaving = 0;
	}
	else{
		u1_instanboot_resume_done_cnt = 0;
	}

	if(u1_instanboot_resume_done_cnt == 420){
		u1_DoPowerSaving = 1;
		u1_instanboot_resume_done_cnt = 0;
		pr_notice("[MEMC_LibHDMIPowerSaving][AA][status print][,%d,%d,%d,%d,][,%d,%d,][,%d,%d,]\n\r", cadence, in_fmRate, height, width, u8_MEMCMode, u1_DoPowerSaving, Input_src_Type, ME_clock_state);
       }

#if 1
	if(Input_src_Type == _SRC_HDMI && (vbe_get_HDMI_dynamic_film_mode_flag() == 1)){
		if((PowerSaving_en == 1) /*&& (u1_DoPowerSaving == 1)*/){
	//		if(vbe_get_HDMI_dynamic_film_mode_flag() == 1){
				if((MEMC_Lib_get_memc_do_power_saving_flag() == 1) /*|| (LowDelay_mode == 1) || (MEMC_LibGetMEMC_PCModeEnable() == 1)*/){
				//if((cadence == _CAD_VIDEO)/* || (LowDelay_mode == 1) || (MEMC_LibGetMEMC_PCModeEnable() == 1)*/){
					//turn off
					if((ME_clock_state == 1) && (g_memc_hdmi_switch_state == 0)){
						Scaler_MEMC_HDMI_ME_CLK_OnOff(0,0);
						pr_notice("[MEMC_LibHDMIPowerSaving][BBB][,%d,%d,%d,%d,][,%d,%d,][,%d,%d,][%d,%d]\n\r", cadence, in_fmRate, height, width, u8_MEMCMode, u1_DoPowerSaving, Input_src_Type, ME_clock_state, ((rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1), tmp_crtc1_mc_vact);
					}
				}else{ // if((cadence != 0) && (LowDelay_mode == 0) && (MEMC_LibGetMEMC_PCModeEnable() == 0))
					//turn on
					if((ME_clock_state == 0) || (MC_sram_state == 1) || (MEMC_drvif_mux_state == 0) || (HDMI_PowerSaving_stage != 0)){// && ((Input_src_Type != _SRC_USB) && (Input_src_Type == _SRC_VO))){
						Scaler_MEMC_HDMI_ME_CLK_OnOff(1,0);
						MEMC_Lib_HDMI_set_memc_bypass_to_enable_flag(1);
						pr_notice("[MEMC_LibHDMIPowerSaving][CCC][,%d,%d,%d,%d,][,%d,%d,][,%d,%d,][%d,%d]\n\r", cadence, in_fmRate, height, width, u8_MEMCMode, u1_DoPowerSaving, Input_src_Type, ME_clock_state, ((rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1), tmp_crtc1_mc_vact);
					}
				}
	//		}else{
	//			//turn on
	//			if((ME_clock_state == 0) || (MC_sram_state == 1) || (MEMC_drvif_mux_state == 0) || (HDMI_PowerSaving_stage != 0)){
	//				Scaler_MEMC_ME_CLK_OnOff(1,0);
	//				MEMC_Lib_HDMI_set_memc_bypass_to_enable_flag(1);
	//				pr_notice("[jerry_HDMI_PS][DDD][,%d,%d,%d,%d,][,%d,%d,][,%d,%d,][%d,%d]\n\r", cadence, in_fmRate, height, width, u8_MEMCMode, u1_DoPowerSaving, Input_src_Type, ME_clock_state, ((rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1), tmp_crtc1_mc_vact);
	//			}
	//		}
		}
		else{
			//turn on
			if((ME_clock_state == 0) || (MC_sram_state == 1) || (MEMC_drvif_mux_state == 0) || (HDMI_PowerSaving_stage != 0)){// && ((Input_src_Type != _SRC_USB) && (Input_src_Type == _SRC_VO))){
				Scaler_MEMC_HDMI_ME_CLK_OnOff(1,0);
				MEMC_Lib_HDMI_set_memc_bypass_to_enable_flag(1);
				pr_notice("[MEMC_LibHDMIPowerSaving][EEE][,%d,%d,%d,%d,][,%d,%d,][,%d,%d,][%d,%d]\n\r", cadence, in_fmRate, height, width, u8_MEMCMode, u1_DoPowerSaving, Input_src_Type, ME_clock_state, ((rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1), tmp_crtc1_mc_vact);
			}
		}
	}
	else{
		HDMI_PowerSaving_stage = 0;
		g_memc_hdmi_switch_state = 0;
	}

	if(PowerSavingJudge_log_en){
		pr_notice("[MEMC_LibHDMIPowerSaving][,%d,%d,%d,%d,][,%d,%d,][,%d,%d,][%d,%d]\n\r", cadence, in_fmRate, height, width,
			u8_MEMCMode, vbe_get_HDMI_dynamic_film_mode_flag(), Input_src_Type, ME_clock_state,
			((rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1), tmp_crtc1_mc_vact);
	}
#else
if(Input_src_Type == _SRC_HDMI){
	if((PowerSaving_en == 1) && (u1_DoPowerSaving == 1)){
		if(vbe_get_HDMI_dynamic_film_mode_flag() == 1){
			if((MEMC_Lib_get_memc_do_power_saving_flag() == 1) || (LowDelay_mode == 1) || (MEMC_LibGetMEMC_PCModeEnable() == 1)){
				//turn off
				if(ME_clock_state == 1 || MEMC_mux_state == 1){
					rtd_clearbits(PPOVERLAY_Double_Buffer_CTRL2_reg, _BIT18);
					rtd_clearbits(PPOVERLAY_MEMC_MUX_CTRL_reg, _BIT13);
					Scaler_MEMC_HDMI_ME_CLK_OnOff(0);
					pr_notice("[jerry_HDMI_PS][BBB][,%d,%d,%d,%d,][,%d,%d,][,%d,%d,][%d,%d]\n\r", cadence, in_fmRate, height, width, u8_MEMCMode, u1_DoPowerSaving, Input_src_Type, ME_clock_state, ((rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1), tmp_crtc1_mc_vact);
				}
			}else{ // if((cadence != 0) && (LowDelay_mode == 0) && (MEMC_LibGetMEMC_PCModeEnable() == 0))
				//turn on
				if((ME_clock_state == 0) || (crtc1_frc_hact_state == 0) || (MEMC_drvif_mux_state == 0)){// && ((Input_src_Type != _SRC_USB) && (Input_src_Type == _SRC_VO))){
					Scaler_MEMC_HDMI_ME_CLK_OnOff(1);
					MEMC_Lib_HDMI_set_memc_bypass_to_enable_flag(1);
					pr_notice("[jerry_HDMI_PS][CCC][,%d,%d,%d,%d,][,%d,%d,][,%d,%d,][%d,%d]\n\r", cadence, in_fmRate, height, width, u8_MEMCMode, u1_DoPowerSaving, Input_src_Type, ME_clock_state, ((rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1), tmp_crtc1_mc_vact);
				}
			}
		}else{
			//turn on
			if((ME_clock_state == 0) || (crtc1_frc_hact_state == 0) || (MEMC_drvif_mux_state == 0)){
				Scaler_MEMC_HDMI_ME_CLK_OnOff(1);
				MEMC_Lib_HDMI_set_memc_bypass_to_enable_flag(1);
				pr_notice("[jerry_HDMI_PS][DDD][,%d,%d,%d,%d,][,%d,%d,][,%d,%d,][%d,%d]\n\r", cadence, in_fmRate, height, width, u8_MEMCMode, u1_DoPowerSaving, Input_src_Type, ME_clock_state, ((rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1), tmp_crtc1_mc_vact);
			}
		}
	}
	else{
		//turn on
		if((ME_clock_state == 0) || (crtc1_frc_hact_state == 0) || (MEMC_drvif_mux_state == 0)){// && ((Input_src_Type != _SRC_USB) && (Input_src_Type == _SRC_VO))){
			Scaler_MEMC_HDMI_ME_CLK_OnOff(1);
			MEMC_Lib_HDMI_set_memc_bypass_to_enable_flag(1);
			pr_notice("[jerry_HDMI_PS][EEE][,%d,%d,%d,%d,][,%d,%d,][,%d,%d,][%d,%d]\n\r", cadence, in_fmRate, height, width, u8_MEMCMode, u1_DoPowerSaving, Input_src_Type, ME_clock_state, ((rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1), tmp_crtc1_mc_vact);
		}
	}
}

#endif
#endif
}

VOID MEMC_LoadScript(VOID)
{
	rtd_outl(0xb8099200, 0x80780438); //W,H
	rtd_outl(0xb8099204, 0x01100155); //LF   04380788 ?
	//rtd_outl(0xb8099284, 0x012e0119); //HF
	//rtd_outl(0xb8099454, 0x00000040);
	//rtd_outl(0xb80994c4, 0x00000040);
	//rtd_outl(0xb8099800, 0x80780438); //W,H
	//rtd_outl(0xb8099804, 0x01100155); //=9204
	//rtd_outl(0xb8099884, 0x012e0119); //=9208

	//rtd_maskl(0xb809d118,0xffffff00,0x0000002a);
	//rtd_outl(0xb8028644, 0x004106F3);   //line&pixel delay to golden_post_vs_delay   004106db
#if 0

	rtd_outl(0xb809d410,0x8bff6800);  //reg_kphase_in_me_index_bsize   reg_kphase_dec_length  reg_kphase_logo_frame_hold    bit 16 reg_kphase_lut_sel
#endif

	IoReg_Mask32(0xb809e008, ~0xffff0000, 0x00010000); //priority
	IoReg_Mask32(0xb809e00c, ~0xffff0000, 0x00010000); //priority
	IoReg_Mask32(0xb809e018, ~0xffff0000, 0x00010000); //priority
	IoReg_Mask32(0xb809e01c, ~0xffff0000, 0x00010000); //priority
	IoReg_Mask32(0xb809e020, ~0xffff0000, 0x00010000); //priority
	IoReg_Mask32(0xb809e024, ~0xffff0000, 0x00010000); //priority
	IoReg_Mask32(0xb809e104, ~0xffff0000, 0x00010000); //priority
	IoReg_Mask32(0xb809e108, ~0xffff0000, 0x00010000); //priority
	rtd_outl(0xb809e010, 0x0); //priority
	rtd_outl(0xb809e014, 0x0); //priority

}
VOID MEMC_LoadPhase(VOID)
{
	//merlin2 phase table);
	rtd_outl(0xb809df00, 0x00000000);
	rtd_outl(0xb809df00, 0x80000000);
	rtd_outl(0xb809df04, 0x2b5a2002);
	rtd_outl(0xb809df08, 0x0080a204);
	rtd_outl(0xb809df04, 0x447a3014);
	rtd_outl(0xb809df08, 0x01002301);
	rtd_outl(0xb809df04, 0x233b4002);
	rtd_outl(0xb809df08, 0x2080b404);
	rtd_outl(0xb809df04, 0x233b4802);
	rtd_outl(0xb809df08, 0x2100b480);
	rtd_outl(0xb809df04, 0x4a1a3014);
	rtd_outl(0xb809df08, 0x2082a301);
	rtd_outl(0xb809df04, 0x635a3826);
	rtd_outl(0xb809df08, 0x21022382);
	rtd_outl(0xb809df04, 0x2b5a2002);
	rtd_outl(0xb809df08, 0x0180a204);
	rtd_outl(0xb809df04, 0x447a3014);
	rtd_outl(0xb809df08, 0x02002301);
	rtd_outl(0xb809df04, 0x233b4002);
	rtd_outl(0xb809df08, 0x2180b404);
	rtd_outl(0xb809df04, 0x233b4802);
	rtd_outl(0xb809df08, 0x2200b480);
	rtd_outl(0xb809df00, 0x00000000);
	rtd_outl(0xb809df00, 0x80000000);
	rtd_outl(0xb809d410, 0x88216600);

	//phase_table_m3_fpga

	rtd_outl(0xb809df00,0x00000000);
	rtd_outl(0xb809df00,0x80000000);
	rtd_outl(0xb809df04,0x15634681);
	rtd_outl(0xb809df08,0x4080b26c);//
	rtd_outl(0xb809df04,0x35634693);
	rtd_outl(0xb809df08,0x4100b269);//
	rtd_outl(0xb809df04,0x5d635355);
	rtd_outl(0xb809df08,0x4082b331);//
	rtd_outl(0xb809df04,0x76a35367);
	rtd_outl(0xb809df08,0x41023332);//
	rtd_outl(0xb809df04,0x15834001);
	rtd_outl(0xb809df08,0x4084c404);//
	rtd_outl(0xb809df04,0x15834001);
	rtd_outl(0xb809df08,0x4104c400);//
	rtd_outl(0xb809df04,0x35634cd3);
	rtd_outl(0xb809df08,0x4086b2d1);//
	rtd_outl(0xb809df04,0x55634cd5);
	rtd_outl(0xb809df08,0x4106b2d1);//
	rtd_outl(0xb809df04,0x7c4239a7);
	rtd_outl(0xb809df08,0x4088a19a);//
	rtd_outl(0xb809df04,0x15823981);
	rtd_outl(0xb809df08,0x41082198);//

	rtd_outl(0xb809df04,0x1c610001);
	rtd_outl(0xb809df08,0x0080b404);
	rtd_outl(0xb809df04,0x45811014);
	rtd_outl(0xb809df08,0x01003501);
	rtd_outl(0xb809df04,0x25634802);
	rtd_outl(0xb809df08,0x2080b284);//
	rtd_outl(0xb809df04,0x45634814);
	rtd_outl(0xb809df08,0x2100b281);//
	rtd_outl(0xb809df04,0x7c423827);
	rtd_outl(0xb809df08,0x2082a182);//
	rtd_outl(0xb809df04,0x15823801);
	rtd_outl(0xb809df08,0x21022180);//

	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);//
	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);//
	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);//
	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);//
	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);//
	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);
	rtd_maskl(0xb809d410, 0xfffeffff, 0x00000000);
	rtd_outl(0xb809df00,0x00000000);
	rtd_outl(0xb809df00,0x80000000);

    rtd_outl(0xb809df04,0x15634681);
	rtd_outl(0xb809df08,0x4080b26c);//
	rtd_outl(0xb809df04,0x35634693);
	rtd_outl(0xb809df08,0x4100b269);//
	rtd_outl(0xb809df04,0x5d635355);
	rtd_outl(0xb809df08,0x4082b331);//
	rtd_outl(0xb809df04,0x76a35367);
	rtd_outl(0xb809df08,0x41023332);//
	rtd_outl(0xb809df04,0x15834001);
	rtd_outl(0xb809df08,0x4084c404);//
	rtd_outl(0xb809df04,0x15834001);
	rtd_outl(0xb809df08,0x4104c400);//
	rtd_outl(0xb809df04,0x35634cd3);
	rtd_outl(0xb809df08,0x4086b2d1);//
	rtd_outl(0xb809df04,0x55634cd5);
	rtd_outl(0xb809df08,0x4106b2d1);//
	rtd_outl(0xb809df04,0x7c4239a7);
	rtd_outl(0xb809df08,0x4088a19a);//
	rtd_outl(0xb809df04,0x15823981);
	rtd_outl(0xb809df08,0x41082198);//

	rtd_outl(0xb809df04,0x1c610001);
	rtd_outl(0xb809df08,0x0080b404);
	rtd_outl(0xb809df04,0x45811014);
	rtd_outl(0xb809df08,0x01003501);
	rtd_outl(0xb809df04,0x25634802);
	rtd_outl(0xb809df08,0x2080b284);//
	rtd_outl(0xb809df04,0x45634814);
	rtd_outl(0xb809df08,0x2100b281);//
	rtd_outl(0xb809df04,0x7c423827);
	rtd_outl(0xb809df08,0x2082a182);//
	rtd_outl(0xb809df04,0x15823801);
	rtd_outl(0xb809df08,0x21022180);//

	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);//
	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);//
	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);//
	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);//
	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);//
	rtd_outl(0xb809df04,0x00000000);
	rtd_outl(0xb809df08,0x00000000);
	rtd_maskl(0xb809d410, 0xfffeffff, 0x00010000);




rtd_outl(0xb809E0B4, 0x4363AB00);
rtd_outl(0xb809e0B8, 0x43000000);

rtd_outl(0xb809d40c,0x08140000);  // [24] sw_film_en=0


}

unsigned char g_BlueScreen_recall_flag = 0;
VOID MEMC_Lib_set_BlueScreen_Recall_flag(unsigned char u1_enable)
{
	g_BlueScreen_recall_flag = u1_enable;
}

unsigned char MEMC_Lib_get_BlueScreen_Recall_flag(VOID)
{
	return g_BlueScreen_recall_flag;
}

VOID MEMC_LibBlueScreen(unsigned char is_BlueScreen)
{
	static unsigned char is_BlueScreen_pre = 0;
	unsigned int mute_ctrl_en = 0;

#ifdef CONFIG_MEMC_BYPASS
	return;
#endif

	ReadRegister(FRC_TOP__software1__reg_software_63_ADDR, 28, 28, &mute_ctrl_en); //0xb809d7fc[28]
	if(mute_ctrl_en == 0){
		return;
	}

	if(is_BlueScreen != is_BlueScreen_pre){
		pr_notice("[MEMC_LibBlueScreen][%d -> %d]\n\r", is_BlueScreen_pre, is_BlueScreen);
	}

	is_BlueScreen_pre = is_BlueScreen;
	if(is_BlueScreen){
		//MEMC_kpost_mute
		WriteRegister(FRC_TOP__KPOST_TOP__bluescreen_ADDR, FRC_TOP__KPOST_TOP__bluescreen_BITSTART, FRC_TOP__KPOST_TOP__bluescreen_BITEND, 0x1);
		MEMC_Lib_set_BlueScreen_Recall_flag(1);
	}
	else{
		//MEMC_kpost_unmute
		WriteRegister(FRC_TOP__KPOST_TOP__bluescreen_ADDR, FRC_TOP__KPOST_TOP__bluescreen_BITSTART, FRC_TOP__KPOST_TOP__bluescreen_BITEND, 0x0);
		MEMC_Lib_set_BlueScreen_Recall_flag(0);
	}
}

VOID MEMC_LibSetMCBlend(unsigned int u32Mode)
{

	static unsigned int log_u32Mode_pre = 255;	
	static unsigned int debug_log_cnt = 0;

	if(log_u32Mode_pre!=u32Mode){
		debug_log_cnt=0;
	}else{
		debug_log_cnt++;		
	}

#if IC_K6LP // merlin4_blend_mode
	if(u32Mode == 1){
		//WriteRegister(FRC_TOP__LBMC__lbmc_db_en_ADDR, FRC_TOP__LBMC__lbmc_db_en_BITSTART, FRC_TOP__LBMC__lbmc_db_en_BITEND, 0x1); // lbmc_db_en
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_ADDR, FRC_TOP__LBMC__lbmcpc_mode_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_BITEND, 0x1); //0xb8099924[4]
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITEND, 0x0); //0xb8099924[13] //IZ mode
		WriteRegister(FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_ADDR, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITSTART, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITEND, 0); //0xb8099924[10]
//		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 0); // lbmc_db_apply
		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 1); // lbmc_db_apply
		if(debug_log_cnt==0){
			pr_notice("[MEMC_LibSetMCBlend][Repeat mode][IZ][PC mode,%x,][90k=%x]\n\r", rtd_inl(0xB8099924), rtd_inl(0xB801B6B8));
		}
	}
	else if(u32Mode == 2){
		//WriteRegister(FRC_TOP__LBMC__lbmc_db_en_ADDR, FRC_TOP__LBMC__lbmc_db_en_BITSTART, FRC_TOP__LBMC__lbmc_db_en_BITEND, 0x1); // lbmc_db_en
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_ADDR, FRC_TOP__LBMC__lbmcpc_mode_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_BITEND, 0x1); //0xb8099924[4]
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITEND, 0x1); //0xb8099924[13] //PZ mode
		WriteRegister(FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_ADDR, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITSTART, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITEND, 0); //0xb8099924[10]
//		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 0); // lbmc_db_apply
		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 1); // lbmc_db_apply
		if(debug_log_cnt==0){
			pr_notice("[MEMC_LibSetMCBlend][Repeat mode][PZ][PC mode,%x,][90k=%x]\n\r", rtd_inl(0xB8099924), rtd_inl(0xB801B6B8));
		}
	}
	else{
		//WriteRegister(FRC_TOP__LBMC__lbmc_db_en_ADDR, FRC_TOP__LBMC__lbmc_db_en_BITSTART, FRC_TOP__LBMC__lbmc_db_en_BITEND, 0x1); // lbmc_db_en
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_ADDR, FRC_TOP__LBMC__lbmcpc_mode_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_BITEND, 0x0); //0xb8099924[4]
		WriteRegister(FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_ADDR, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITSTART, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITEND, 1); //0xb8099924[10]
//		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 0); // lbmc_db_apply
		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 1); // lbmc_db_apply
		if(debug_log_cnt==0){
			pr_notice("[MEMC_LibSetMCBlend][Blending mode][PC mode,%x,][90k=%x]\n\r", rtd_inl(0xB8099924), rtd_inl(0xB801B6B8));
		}	
	}
#else // IC_K5LP
	if((u32Mode == 1) || (u32Mode == 2)){
		WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 1, 1, 0x0); //0xb809d700[1]
		WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_en_ADDR, 14, 14, 0x1); //rtd_setbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
		WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 14, 14, 0x0); // u1_scCtrl_wrt_en;
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_en_ADDR, 9, 13, 0x0);
		WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 17, 17, 0x0);//u1_mc2_var_lpf_wrt_en
		WriteRegister(FRC_TOP__MC2__mc_var_lpf_en_ADDR, 0, 1, 0x0);
		WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 29, 29, 0x0);// u1_logoCtrl_wrt_en;
		WriteRegister(FRC_TOP__MC2__mc_logo_vlpf_en_ADDR, 8, 8, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_en_ADDR, 0, 0, 0x0);
		if(debug_log_cnt==0){	
			pr_notice("[MEMC_LibSetMCBlend][Repeat mode][90k=%x]\n\r", rtd_inl(0xB801B6B8));
		}		
	}else{
		WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 1, 1, 0x1); //0xb809d700[1]
		WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_en_ADDR, 14, 14, 0x0); //rtd_clearbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
		WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 14, 14, 0x1); // u1_scCtrl_wrt_en;
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_en_ADDR, 9, 13, 0x1f);
		WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 17, 17, 0x1);//u1_mc2_var_lpf_wrt_en
		//WriteRegister(FRC_TOP__MC2__mc_var_lpf_en_ADDR, 0, 1, 0x3);
		WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 29, 29, 0x1);// u1_logoCtrl_wrt_en;
		WriteRegister(FRC_TOP__MC2__mc_logo_vlpf_en_ADDR, 8, 8, 0x1);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_en_ADDR, 0, 0, 0x1);
		if(debug_log_cnt==0){
		pr_notice("[MEMC_LibSetMCBlend][Blending mode][90k=%x]\n\r", rtd_inl(0xB801B6B8));
		}	
	}
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_bld_bypass),u32Mode);
	if(debug_log_cnt%120 == 0){
		pr_notice("[MEMC_LibSetMCBlend]Blending mode keep = u32Mode[cnt=%d][90k=%x]\n\r",debug_log_cnt, rtd_inl(0xB801B6B8));		
	}
	log_u32Mode_pre = u32Mode;

#endif
}

VOID MEMC_LibSet_LBMC_DB_en(unsigned int u1_enable)
{
	WriteRegister(FRC_TOP__LBMC__lbmc_db_en_ADDR, FRC_TOP__LBMC__lbmc_db_en_BITSTART, FRC_TOP__LBMC__lbmc_db_en_BITEND, u1_enable); // lbmc_db_en
	pr_notice("[MEMC_LibSet_LBMC_DB_en][%d][90k=%x]\n", u1_enable, rtd_inl(0xB801B6B8));
}

VOID MEMC_LibSet_PQC_DB_en(unsigned int u1_enable)
{
	WriteRegister(FRC_TOP__pqc_pqdc__CMP_DB_EN_ADDR, FRC_TOP__pqc_pqdc__CMP_DB_EN_BITSTART, FRC_TOP__pqc_pqdc__CMP_DB_EN_BITEND, u1_enable);
	pr_notice("[MEMC_LibSet_PQC_DB_en]\n");
}

VOID MEMC_LibSet_PQC_DB_apply(void)
{
	WriteRegister(FRC_TOP__pqc_pqdc__CMP_DB_APPLY_ADDR, FRC_TOP__pqc_pqdc__CMP_DB_APPLY_BITSTART, FRC_TOP__pqc_pqdc__CMP_DB_APPLY_BITEND, 1);
	pr_notice("[MEMC_LibSet_PQC_DB_apply]\n");
}

VOID MEMC_LibSet_MCDMA_DB_en(unsigned int u1_enable)
{
	WriteRegister(FRC_TOP__MC_DMA__MC_WDMA_DB_EN_ADDR, FRC_TOP__MC_DMA__MC_WDMA_DB_EN_BITSTART, FRC_TOP__MC_DMA__MC_WDMA_DB_EN_BITEND, u1_enable);
	WriteRegister(FRC_TOP__MC_DMA__MC_RDMA_DB_EN_ADDR, FRC_TOP__MC_DMA__MC_RDMA_DB_EN_BITSTART, FRC_TOP__MC_DMA__MC_RDMA_DB_EN_BITEND, u1_enable);
	pr_notice("[MEMC_LibSet_MCDMA_DB_en]\n");
}
VOID MEMC_LibSet_MCDMA_DB_apply(VOID)
{
	WriteRegister(FRC_TOP__MC_DMA__MC_WDMA_DB_RD_SEL_ADDR, FRC_TOP__MC_DMA__MC_WDMA_DB_RD_SEL_BITSTART, FRC_TOP__MC_DMA__MC_WDMA_DB_RD_SEL_BITEND, 1);
	WriteRegister(FRC_TOP__MC_DMA__MC_RDMA_DB_RD_SEL_ADDR, FRC_TOP__MC_DMA__MC_RDMA_DB_RD_SEL_BITSTART, FRC_TOP__MC_DMA__MC_RDMA_DB_RD_SEL_BITEND, 1);
	WriteRegister(FRC_TOP__MC_DMA__MC_WDMA_DB_APPLY_ADDR, FRC_TOP__MC_DMA__MC_WDMA_DB_APPLY_BITSTART, FRC_TOP__MC_DMA__MC_WDMA_DB_APPLY_BITEND, 1);
	WriteRegister(FRC_TOP__MC_DMA__MC_RDMA_DB_APPLY_ADDR, FRC_TOP__MC_DMA__MC_RDMA_DB_APPLY_BITSTART, FRC_TOP__MC_DMA__MC_RDMA_DB_APPLY_BITEND, 1);
}

VOID MEMC_LibRTK_init_VST(VOID)
{
	#if (IC_K5LP || IC_K6LP)
	//===== ME1 vertical scrolling text statistic ======   only k5lp
	// region
	WriteRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_MaxMinDiff_ADDR, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_MaxMinDiff_BITSTART, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_MaxMinDiff_BITEND, 0x19); // 25
	WriteRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_CoreAPL_ADDR, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_CoreAPL_BITSTART, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_CoreAPL_BITEND, 0x14); // 20
	WriteRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_MaxValue_ADDR, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_MaxValue_BITSTART, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_MaxValue_BITEND, 0x50); // 80
	WriteRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_APL2MaxValue_Ratio_ADDR, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_APL2MaxValue_Ratio_BITSTART, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_APL2MaxValue_Ratio_BITEND, 0x2);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_APL2MaxMinDiff_Ratio_ADDR, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_APL2MaxMinDiff_Ratio_BITSTART, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_APL2MaxMinDiff_Ratio_BITEND, 0x4);

	// boundary
	WriteRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X0_ADDR, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X0_BITSTART, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X0_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X1_ADDR, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X1_BITSTART, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X1_BITEND, 0x3c);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X2_ADDR, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X2_BITSTART, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X2_BITEND, 0x78);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X3_ADDR, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X3_BITSTART, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X3_BITEND, 0xb4);
	WriteRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X4_ADDR, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X4_BITSTART, FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X4_BITEND, 0xf0);
	//====================================

	//===== ME2 vertical scrolling text apply ======   only k5lp
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Enable_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Enable_BITSTART,FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Enable_BITEND, 0x0);
	// apply parameter
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_MvDiff_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_MvDiff_BITSTART,FRC_TOP__KME_ME2_CALC1__reg_me2_VST_MvDiff_BITEND, 0x4); // 4
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Penalty_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Penalty_BITSTART,FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Penalty_BITEND, 0xdc); // 220
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_TargetY_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_TargetY_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_TargetY_BITEND, 0x3b); // -5
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_TargetX_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_TargetX_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_TargetX_BITEND, 0x0); // 0
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_acdcpk_spatial_mvd_shiftbit_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_acdcpk_spatial_mvd_shiftbit_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_acdcpk_spatial_mvd_shiftbit_BITEND, 0x3);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_acdcpk_mvd_shiftbit_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_acdcpk_mvd_shiftbit_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_acdcpk_mvd_shiftbit_BITEND, 0x3);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_acdcpk_SAD_shiftbit_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_acdcpk_SAD_shiftbit_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_acdcpk_SAD_shiftbit_BITEND, 0x3);
	// apply region
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_MaxMinDiff_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_MaxMinDiff_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_MaxMinDiff_BITEND, 0x3c); // 30
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_CoreAPL_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_CoreAPL_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_CoreAPL_BITEND, 0x1e); // 30
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_MaxValue_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_MaxValue_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_MaxValue_BITEND, 0x55); // 85
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_APL2MaxValue_Ratio_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_APL2MaxValue_Ratio_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_APL2MaxValue_Ratio_BITEND, 0x8);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_APL2MaxMinDiff_Ratio_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_APL2MaxMinDiff_Ratio_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_APL2MaxMinDiff_Ratio_BITEND, 0x2);
	// apply boundary
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XSta_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XSta_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XSta_BITEND, 0x0);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XEnd_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XEnd_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XEnd_BITEND, 0xef);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_Offset_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_Offset_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_Offset_BITEND, 0x10);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_GainCurve_Slope2_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_GainCurve_Slope2_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_GainCurve_Slope2_BITEND, 0x3c);
	WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_GainCurve_Slope1_ADDR, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_GainCurve_Slope1_BITSTART, FRC_TOP__KME_ME2_CALC1__reg_me2_VST_GainCurve_Slope1_BITEND, 0x3c);
	//====================================
	#endif
}
VOID MEMC_LibRTK_init_LFB(VOID)
{
	//=================   correct localFB
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvxfb_s1_ADDR, 0, 7, 0x2a);  // 0x10
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvxfb_s2_ADDR, 8, 15, 0x80);  // 0x20
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvxfb_s3_ADDR, 16, 23, 0x3d);  // 0x40
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s2_ADDR, 8, 15, 0xff);  // 0x80
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvyfb_s3_ADDR, 16, 23, 0x24);  // 0xff
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mvxfb_cut_thr_ADDR, 24, 31, 0x10);  // 0xff
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_rt1_mvxfb_s1_ADDR, 0, 7, 0x20);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_rt1_mvxfb_s2_ADDR, 8, 15, 0x40);  // 0x20
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_rt1_mvxfb_s3_ADDR, 16, 23, 0x44);  // 0x20
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_rt1_mvyfb_s1_ADDR, 0, 7, 0x80);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_rt1_mvyfb_s2_ADDR, 8, 15, 0xc0);  // 0x80
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_rt1_mvyfb_s3_ADDR, 16, 23, 0x27);  // 0x80
	//===================
	//=================   adjust localFB
	WriteRegister(FRC_TOP__KME_DEHALO__dh_ph_fb_gen_mod_ADDR, 27, 28, 0x0);  // 0x1
	WriteRegister(FRC_TOP__KME_DEHALO__dh_rt1_fb_gen_mod_ADDR, 29, 30, 0x0);  // 0x1
	//WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mv_bld_coef_ADDR, 8, 15, 0x0);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_all_fblvl_bld_coef_ADDR,24, 29, 0x3f);  // 0x18
	WriteRegister(FRC_TOP__KME_DEHALO__dh_fblvl_mvdiff_gain_en_ADDR, 0, 0, 0x1);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_mvdiff_fblvl_shift_ADDR, 15, 18, 0x5);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_fblvl_mvdiff_x1_ADDR, 0, 11, 0x500);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_fblvl_mvdiff_x2_ADDR, 12, 23, 0xa00);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_fblvl_mvdiff_x3_ADDR, 0, 11, 0xd00);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_fblvl_mvdiff_y1_ADDR, 12, 23, 0x200);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_fblvl_mvdiff_y2_ADDR, 0, 11, 0x900);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_fblvl_mvdiff_y3_ADDR, 12, 23, 0xf00);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO__dh_fblvl_mvdiff_s1_ADDR, 3, 8, 0x16);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_rt1_mvyfb_s2_ADDR, 8, 15, 0xc0);  // 0x0
	//===================
	//============  local FB dtl curve
	WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_x2_ADDR,24, 31, 0x60);  // 0x50
	WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0xa);  // 0x50
	WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR, 0, 7, 0x80); // 0x0
	//====================================
	//use bv mvx
	WriteRegister(FRC_TOP__KME_DEHALO__dh_phflt_med9flt_data_sel_ADDR,8, 9, 0x2);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_mv_bld_coef_ADDR,8, 15, 0x80);  // 0x0
	WriteRegister(FRC_TOP__KME_DEHALO2__dh_phflt_sadmv_bld_coef_ADDR, 16, 23, 0x6); // 0x6
	//=====================
}
VOID MEMC_LibRTK_init_FB(VOID)
{
	//==  FB
	WriteRegister(FRC_TOP__PQL_1__pql_fblvl_map_y2_good_ADDR, 4, 11, 0xb0);// oxa0
	WriteRegister(FRC_TOP__PQL_1__pql_fb_lvl_map_y2_ADDR, 8, 15,0xf0);  // oxeo
	WriteRegister(FRC_TOP__PQL_1__pql_fb_tc_th_h_ADDR, 0, 26, 0x1d7e20);// ox160000      3ff*1e*10= 77e20    77e20+160000 =1d7e20
	WriteRegister(FRC_TOP__PQL_1__pql_fb_tc_th_l_ADDR, 0, 26, 0x177e20);// ox100000   3ff*1e*10= 77e20		77e20+100000 = dce20
	WriteRegister(FRC_TOP__PQL_1__pql_fb_tc_iir_up_ADDR, 0, 7, 0x30);// ox40
	WriteRegister(FRC_TOP__PQL_1__pql_fb_tc_iir_down_ADDR, 8, 15, 0x30);// ox40
	WriteRegister(FRC_TOP__PQL_1__pql_fb_lvl_iir_up_ADDR, 0, 11, 0x300);// ox200
	WriteRegister(FRC_TOP__PQL_1__pql_fb_lvl_iir_down_ADDR, 12, 23, 0xf40);// oxf80
	//=== fb  sc
	WriteRegister(FRC_TOP__PQL_1__pql_fb_sc_gain_ADDR, 24, 31,0x6);  // ox8
	WriteRegister(FRC_TOP__PQL_1__pql_fb_sc_hold_cnt_ADDR, 8, 15, 0x2);// ox4
	WriteRegister(FRC_TOP__PQL_1__pql_fb_sc_norm_cnt_ADDR, 16, 23, 0x4);// ox8

	//=== fb  bad region
	WriteRegister(FRC_TOP__PQL_1__pql_fb_dummy_ac_ADDR, 0, 7,0x0e);   //u16_badRgn_dtl_thr1
	WriteRegister(FRC_TOP__PQL_1__pql_fb_dummy_ac_ADDR, 8, 15,0x28);   //u16_badRgn_dtl_thr2
	WriteRegister(FRC_TOP__PQL_1__pql_fb_dummy_ac_ADDR, 16, 23,0xf0);   //u8_badRgn_dtl_gain2
	WriteRegister(FRC_TOP__PQL_1__pql_fb_dummy_ac_ADDR, 24, 31,0x020); //original:0x20  //u8_badRgn_dtl_gain1
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badrgn_sad_iirA_down_ADDR, 0, 7,0x60);  // 0xc0
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badrgn_center_gain_ADDR, 8, 15,0x20);  // 0x10
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badrgn_sad_th_ADDR, 0, 31,0xBE98);  //0x12000//0x800000// ox10000
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badrgn_sad_th_m_ADDR, 0, 31, 0x1a000);//0x40000//0x1000000// ox20000
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badrgn_sad_th_h_ADDR, 0, 31, 0x48000);//0x80000//0x2000000// ox38000

	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain2_ADDR, 10, 14, 0xf);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain3_ADDR, 15, 19, 0xf);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain4_ADDR, 20, 24, 0xe);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain5_ADDR, 25, 29, 0xe);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain6_ADDR, 0, 4, 0xd);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain7_ADDR, 5, 9, 0xd);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain8_ADDR, 10, 14, 0xc);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain9_ADDR, 15, 19, 0xc);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain10_ADDR, 20, 24, 0xb);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain11_ADDR, 25, 29, 0xb);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain12_ADDR, 0, 4, 0xa);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain13_ADDR, 5, 9, 0xa);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain14_ADDR, 10, 14, 0x9);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain15_ADDR, 15, 19, 0x9);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain16_ADDR, 20, 24, 0x8);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain17_ADDR, 25, 29, 0x8);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain18_ADDR, 0, 4, 0x7);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain19_ADDR, 5, 9, 0x7);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain20_ADDR, 10, 14, 0x6);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain21_ADDR, 15, 19, 0x6);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain22_ADDR, 20, 24, 0x5);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain23_ADDR, 25, 29, 0x5);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain24_ADDR, 0, 4, 0x4);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain25_ADDR, 5, 9, 0x4);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain26_ADDR, 10, 14, 0x3);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain27_ADDR, 15, 19, 0x3);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain28_ADDR, 20, 24, 0x2);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_badregion_gain29_ADDR, 25, 29, 0x2);
	//=== fb  bad region
	//=== fb  gmv
	WriteRegister(FRC_TOP__PQL_1__pql_fb_gmv_ratio_th_h_ADDR, 10, 16, 0x60);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_gmv_ratio_th_l_ADDR, 17, 23, 0x46);
	WriteRegister(FRC_TOP__PQL_1__pql_fb_gmv_rng_cnt_th_ADDR, 20, 31, 0x3b4);
	//=== fb  gmv

	//=== good scene
	WriteRegister(FRC_TOP__PQL_1__pql_fb_good_rng_sad_th_ADDR, 0, 19, 0x1D000);//0x10000
	WriteRegister(FRC_TOP__PQL_1__pql_fb_good_rng_sad_th_ADDR, 20, 31, 0x9);//0xf //0x4
	//============

}

VOID MEMC_LibRTK_init_PQL_0(VOID){

	UINT32 u32_RB_val;

	//dh control
	ReadRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_nums_ADDR, 0, 4, &u32_RB_val);
	WriteRegister(FRC_TOP__PQL_0__pql_dh_close_bypass_ADDR, 5, 9, u32_RB_val);  // 0x1   u5_phfv0_candi_num

	ReadRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_nums_ADDR, 8, 12, &u32_RB_val);
	WriteRegister(FRC_TOP__PQL_0__pql_dh_close_bypass_ADDR, 10, 14, u32_RB_val); // 0x1   u5_phfv1_candi_num



}

VOID MEMC_LibRTK_init_PQL_1(VOID){

}

VOID MEMC_LibRTK_init_software(VOID){

}

VOID MEMC_Lib_MC_IndexCheck(VOID)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 mc_write = 0, mc_read_i = 0, mc_read_p = 0;
	UBYTE pulldown_mode = 0;
	FRC_CADENCE_ID u8_cadence_id = 0;

	ReadRegister(FRC_TOP__KPHASE__in_mc_index_ADDR, FRC_TOP__KPHASE__in_mc_index_BITSTART, FRC_TOP__KPHASE__in_mc_index_BITEND, &mc_write);
	ReadRegister(FRC_TOP__KPHASE__lbmc_i_index_ADDR, FRC_TOP__KPHASE__lbmc_i_index_BITSTART, FRC_TOP__KPHASE__lbmc_i_index_BITEND, &mc_read_i);
	ReadRegister(FRC_TOP__KPHASE__lbmc_p_index_ADDR, FRC_TOP__KPHASE__lbmc_p_index_BITSTART, FRC_TOP__KPHASE__lbmc_p_index_BITEND, &mc_read_p);
	pulldown_mode = s_pContext->_external_data.u8_pulldown_mode;
	u8_cadence_id = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];

	// phase table protect
	if(pulldown_mode == _PQL_IN24HZ_TRUMOTOFF_CINEMAOFF ||
		((u8_cadence_id == _CAD_32 || u8_cadence_id == _CAD_2224) && pulldown_mode == _PQL_IN60HZ_TRUMOTOFF_CINEMAOFF)){
		
	}
	else{
		if(mc_write > 5 || mc_read_i > 5 || mc_read_p > 5){
			pr_notice("[%s][Warning!!!MC index is out of range][Re-gen phase table!!!]\n\r", __FUNCTION__);
			WriteRegister(FRC_TOP__PQL_1__pql_phT_autoGen_en_ADDR, 27, 27, 1);
		}
	}
}

extern void Scaler_MEMC_Bypass_CLK_OnOff(unsigned char is_clk_on);
VOID MEMC_LibResetFlow(VOID)
{
	UINT32 ResetFlow_en = 0;
//	UINT32 ME_clock_state = 0;
//	UINT32 MEMC_clock_state = 0;
	static UBYTE reset_flow_cnt = 0;

#ifdef CONFIG_MEMC_BYPASS
	return;
#endif

	ReadRegister(FRC_TOP__software1__reg_software_00_ADDR, 0, 31, &ResetFlow_en);
	ResetFlow_en = (ResetFlow_en>>3) & 0x1;
//	ME_clock_state = (rtd_inl(0xb800011c)>>30)&0x1;
//	MEMC_clock_state = (rtd_inl(0xb800011c)>>31)&0x1;

	if(ResetFlow_en == 1){
		reset_flow_cnt = 5;

		//disable Power Saving
		WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 0, 0, 0x0);
//		WriteRegister(FRC_TOP__software1__reg_software_63_ADDR, 29, 29, 0x1);

		WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 3, 3, 0x0);
		pr_notice("[jerry_reset_flow][AAA]\n\r");
	}

	if(reset_flow_cnt == 2){
		//turn on DMA & clock
/*
		if(MEMC_clock_state == 0){
			pr_notice("[jerry_reset_flow][BBB]\n\r");
			Scaler_MEMC_Bypass_CLK_OnOff(1);
			MEMC_Lib_set_memc_bypass_to_enable_flag(1);
		}
		else if(ME_clock_state == 0){
			pr_notice("[jerry_reset_flow][CCC]\n\r");
			Scaler_MEMC_HDMI_ME_CLK_OnOff(1);
			MEMC_Lib_HDMI_set_memc_bypass_to_enable_flag(1);
			//
			rtd_outl(0xb809f004, tmp_val);
			rtd_outl(CRTC1__CRTC1_14_ADDR, tmp_crtc1_frc_hact);
			rtd_outl(CRTC1__CRTC1_44_ADDR, tmp_crtc1_mc_vact);
		}
*/
		//reload MEMC setting
		Scaler_MEMC_Handler();

		//disable mute
		MEMC_LibBlueScreen(0);

		//disable Power Saving
		WriteRegister(FRC_TOP__software1__reg_software_00_ADDR, 0, 0, 0x0);
//		WriteRegister(FRC_TOP__software1__reg_software_63_ADDR, 29, 29, 0x1);

		//WriteRegister(FRC_TOP__PQL_0__pql_debug_info_Show_en_ADDR, 28, 28, 0x1);
	}

	if(reset_flow_cnt > 0){
		reset_flow_cnt--;
	}
}

extern void MEMC_LoadScriptDMADisable(void);
extern void MEMC_ChangeMCBufferAddr(unsigned char u1_is_changed_to_6_buffer);
VOID MEMC_Lib_VR360_Flow(VOID)
{
#if 1
	UINT32 height = 0;
	UINT32 width = 0;
	UINT32 PowerSaving_en = 0;
	UINT32 cadence = 0;
	UINT32 Input_src_Type = 0;
	UINT32 ME_clock_state = 0;
	UINT32 MEMC_clock_state = 0;
	UINT32 MEMC_mux_state = 0;
	UINT32 crtc1_frc_hact_state = 0;
	UINT32 MEMC_drvif_mux_state = 0;
	UINT32 MC_DMA_read_p_state = 0;
	UINT32 blending_mode = 0;
	UINT8 test_en = 0;
	static UINT32 ipme_aMot_rb_pre = 0;
	PQL_INPUT_FRAME_RATE in_fmRate = 0;
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_system_setting_info* system_info_structure_table = NULL;

	system_info_structure_table = scaler_GetShare_Memory_system_setting_info_Struct();
	if((system_info_structure_table == NULL) || (s_pContext == NULL)){
		return;
	}

	height = system_info_structure_table->I_Height;
	width = system_info_structure_table->I_Width;
	cadence = s_pContext->_output_filmDetectctrl.u8_cur_cadence_Id[_FILM_ALL];
	in_fmRate = s_pContext->_external_data._input_frameRate;
	Input_src_Type = system_info_structure_table->Input_src_Type;
	PowerSaving_en = (rtd_inl(SOFTWARE1__SOFTWARE1_00_ADDR)>>0)&0x1;
	ME_clock_state = (rtd_inl(0xb800011c)>>30)&0x1;
	MEMC_clock_state = (rtd_inl(0xb800011c)>>31)&0x1;
	MEMC_mux_state = (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1;
	crtc1_frc_hact_state = rtd_inl(CRTC1__CRTC1_14_ADDR)&0xfff;
	MEMC_drvif_mux_state = rtd_inl(MEMC_MUX_MEMC_MUX_FUNC_CTRL_reg)&0x1;
	MC_DMA_read_p_state = (rtd_inl(KMC_DM_METER_TOP__METER_TIMER0_ADDR)>>0)&0x1;
	ReadRegister(FRC_TOP__MC__mc_bld_bypass_ADDR, 0, 2, &blending_mode);
	test_en = (rtd_inl(SOFTWARE1__SOFTWARE1_00_ADDR)>>25)&0x1;
#endif

	if(VR360_en == 1){
		if(VR360_stage == 1){
//			if(MEMC_mux_state == 1)
//				Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);
//			else
//				Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
			//off FRC, disable DMA
//			MEMC_LoadScriptDMADisable();
			MEMC_LibDisableMEDMA();
//			MEMC_ChangeMCBufferAddr(FALSE);
			VR360_stage = 2;
		}
		else if(VR360_stage == 2){
			if(MC_DMA_read_p_state == 0)
				VR360_wait_flag = 0;
			VR360_stage = 0;
		}
	}
	else{
		VR360_wait_flag = 0;
		VR360_stage = 0;
	}

	if(test_en&&(ipme_aMot_rb_pre!=s_pContext->_output_read_comreg.u27_ipme_aMot_rb)){
		ipme_aMot_rb_pre = s_pContext->_output_read_comreg.u27_ipme_aMot_rb;
		pr_notice("[phasetable][,%d,%d,][,%d,%d,][,%x,%x,%x,%x,%x,%x,][,%d,%d,%d,%d,][phase,%d,][Motion,%d,][Seq,%d,][FrameRate,%d,][Time,%d,]\n\r", s_pContext->_output_filmDetectctrl.u8_det_cadence_Id[_FILM_ALL], s_pContext->_output_filmDetectctrl.u8_cur_cadence_Id[_FILM_ALL],
			s_pContext->_output_filmDetectctrl.u8_phT_phase_Idx_out[_FILM_ALL], blending_mode,
			rtd_inl(0xb809aea8), (rtd_inl(0xb8099628)>>14)&0x1, rtd_inl(0xb8099750)&0x3, (rtd_inl(0xb8099798)>>8)&0x1, rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c),
			(rtd_inl(0xb809d490)>>12)&0xf, (rtd_inl(0xb809d490)>>8)&0xf, (rtd_inl(0xb809d490)>>4)&0xf, (rtd_inl(0xb809d490)>>0)&0xf,
			(rtd_inl(0xb80996f8)>>0)&0x7f, s_pContext->_output_read_comreg.u27_ipme_aMot_rb, s_pContext->_output_filmDetectctrl.u32_Mot_sequence[_FILM_ALL]&0x1, rtd_inl(0xB80282e4), rtd_inl(0xB801B6B8));
	}
}

VOID MEMC_Lib_SetKphaseME1IndexBsize(UINT32 u32Bsize)
{
	HAL_MC_SetKphaseME1IndexBsize(u32Bsize);
}

VOID MEMC_Lib_SetKphaseME2IndexBsize(UINT32 u32Bsize)
{
	HAL_MC_SetKphaseME2IndexBsize(u32Bsize);
}

VOID MEMC_Lib_SetKphaseMCIndexBsize(UINT32 u32Bsize)
{
	HAL_MC_SetKphaseMCIndexBsize(u32Bsize);
}

static IDX_DYNAMIC_CTRL_OFFSET_TABLE Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[_CASE_NUM][IDC_Total_Frm_cnt] =
{ // 1.me_wrt_oft   2.me1_rd_i_oft   3.me1_rd_p_oft   4.me2_rd_i_oft   5.me2_rd_p_oft   6.mc_wrt_oft   7.mc_rd_i_oft   8.mc_rd_p_oft   9.me_phase   10.mc_phase
	{ // _CASE_NULL
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
	},

	{ // _CASE_22_TO_32
		#if 1
		{2,2,2, 4,4, 1,2,2, 1,1}, // 1
		{0,1,2, 1,1, 0,1,1, 17,33},
		{0,1,2, 1,1, 0,1,1, 33,65},
		{0,4,2, 1,1, 0,1,1, 49,97},
		{0,1,1, 4,4, 0,3,3, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // test
		{1,0,0, 0,0, 1,0,0, 14,27}, // 1
		{0,3,3, 0,0, 0,0,0, 39,78},
		{0,1,1, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		#endif
	},

	{ // _CASE_32_TO_22
		#if 1
		{1,1,1, 3,3, 1,2,2, 1,1}, // 1
		{0,1,2, 1,1, 0,1,1, 27,52},
		{0,3,2, 1,1, 0,1,1, 52,103},
		{0,1,2, 3,3, 0,2,2, 0,0},
		{0,3,2, 1,1, 0,1,1, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{1,1,1, 3,3, 1,2,2, 14,27}, // 1
		{0,1,2, 1,1, 0,1,1, 31,61},
		{0,3,2, 1,1, 0,1,1, 48,95},
		{0,1,2, 3,3, 0,2,2, 0,0},
		{0,3,2, 1,1, 0,1,1, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		#endif
	},

	{ // _CASE_11_TO_22
		#if 1
		{0,4,5, 3,4, 0,1,1, 27,52}, // 1
		{0,3,2, 1,1, 0,1,1, 52,103},
		{0,1,2, 3,3, 0,3,4, 14,27},
		{0,3,2, 1,1, 0,1,1, 40,78},
		{0,1,2, 3,3, 0,3,2, 1,1},
		{0,1,1, 1,1, 0,1,1, 27,52}, // 6
		{0,3,2, 1,1, 0,1,1, 52,103},
		{0,1,2, 3,3, 0,2,2, 14,27},
		{0,0,0, 1,1, 0,1,1, 40,78},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,0,0, 0,0, 1,1,1, 1,1}, // 1
		{0,0,0, 0,0, 2,1,1, 33,65},
		{0,0,0, 0,0, 2,3,3, 1,1},
		{0,0,0, 0,0, 1,1,1, 33,65},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		#endif
	},

	{ // _CASE_22_TO_11
		#if 1
		{0,1,2, 3,3, 2,2,2, 1,1}, // 1
		{0,2,1, 1,1, 2,1,1, 33,65},
		{0,1,1, 3,2, 2,2,2, 1,1},
		{0,2,2, 2,2, 2,2,2, 1,1},
		{0,2,2, 2,2, 0,2,2, 1,1},
		{0,0,0, 0,0, 0,2,2, 1,1}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,3,3, 0,0, 2,0,0, 1,1}, // 1
		{0,1,2, 3,3, 2,2,2, 1,1},
		{0,3,2, 1,1, 2,1,1, 33,65},
		{0,1,2, 3,3, 2,2,2, 33,65},
		{0,0,0, 0,0, 0,2,2, 1,1},
		{0,0,0, 0,0, 0,2,2, 1,1}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_32
		#if 1
		{2,5,5, 5,5, 1,3,4, 14,27}, // 1
		{1,2,2, 1,2, 1,1,1, 27,52},
		{2,1,1, 1,1, 2,1,1, 40,78},
		{2,2,2, 1,1, 1,1,1, 52,103},
		{2,2,2, 3,3, 2,3,2, 1,1},
		{2,1,1, 1,1, 1,1,1, 17,33}, // 6
		{1,1,2, 1,1, 1,1,1, 33,65},
		{1,3,2, 1,1, 2,1,1, 49,97},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,5,5, 4,5, 1,3,3, 1,1}, // 1
		{0,2,2, 1,1, 1,1,1, 17,33},
		{0,1,1, 2,2, 2,1,1, 33,65},
		{0,2,2, 1,1, 1,1,1, 49,97},
		{0,2,2, 3,3, 2,3,3, 1,1},
		{0,1,2, 1,1, 1,1,1, 17,33}, // 6
		{0,1,1, 1,1, 1,1,1, 33,65},
		{0,3,2, 1,1, 2,1,1, 49,97},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		#endif
	},

	{ // _CASE_32_TO_11
		#if 1 // slow out
		{0,0,0, 0,0, 2,2,2, 1,1}, // 1
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,1,1, 33,65},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1}, // 6
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1}, // 11
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // fast out
		{0,1,2, 0,0, 2,0,0, 0,0}, // 1
		{0,3,2, 3,3, 0,2,2, 1,1},
		{0,1,1, 1,1, 2,0,0, 33,65},
		{0,0,0, 0,0, 0,2,2, 1,1},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		#endif
	},
};

static IDX_DYNAMIC_CTRL_OFFSET_TABLE Idx_Dynamic_Ctrl_Oft_Table_60HzOut[_CASE_NUM][IDC_Total_Frm_cnt] =
{ // 1.me_wrt_oft   2.me1_rd_i_oft   3.me1_rd_p_oft   4.me2_rd_i_oft   5.me2_rd_p_oft   6.mc_wrt_oft   7.mc_rd_i_oft   8.mc_rd_p_oft   9.me_phase   10.mc_phase
	{ // _CASE_NULL
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
	},

	{ // _CASE_22_TO_32
		#if 1 // after
		{0,6,7, 1,3, 0,2,3, 49,96}, // 1
		{0,5,7, 4,5, 0,4,5, 1,1},
		{0,5,7, 4,5, 0,4,5, 17,33},
		{0,4,6, 3,4, 0,3,4, 33,65},
		{0,6,7, 2,3, 0,3,4, 49,97},
		{0,5,6, 3,5, 0,3,4, 1,1}, // 6
		{0,4,6, 2,4, 0,3,4, 24,46},
		{0,6,7, 2,4, 0,3,4, 46,91},
		{0,5,6, 3,5, 0,3,4, 5,8},
		{0,4,6, 2,4, 0,3,4, 28,55},
		{0,0,0, 1,3, 0,2,3, 53,104}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{2,2,2, 4,4, 1,2,2, 1,1}, // 1
		{0,1,2, 1,1, 0,1,1, 17,33},
		{0,1,2, 1,1, 0,1,1, 33,65},
		{0,4,2, 1,1, 0,1,1, 49,97},
		{0,1,1, 4,4, 0,3,3, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TO_22
		#if 1
		{0,4,6, 2,4, 0,3,4, 27,52}, // 1
		{0,5,6, 1,3, 0,2,3, 52,103},
		{0,4,6, 2,4, 0,3,4, 14,27},
		{0,5,6, 1,3, 0,2,3, 40,78},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{1,1,1, 3,3, 1,2,2, 14,27}, // 1
		{0,1,2, 1,1, 0,1,1, 31,61},
		{0,3,2, 1,1, 0,1,1, 48,95},
		{0,1,2, 3,3, 0,2,2, 0,0},
		{0,3,2, 1,1, 0,1,1, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		#endif
	},

	{ // _CASE_11_TO_22_TYPE1
		#if 1
		{0,5,7, 3,5, 0,1,3, 27,52}, // 1
		{0,6,7, 2,4, 0,1,3, 52,103},
		{0,5,7, 3,5, 0,2,4, 14,27},
		{0,6,7, 2,4, 0,2,4, 40,78},
		{0,5,7, 3,5, 0,3,4, 1,1},
		{0,4,6, 2,4, 0,3,4, 27,52}, // 6
		{0,5,6, 1,3, 0,2,3, 52,103},
		{0,4,6, 2,4, 0,3,4, 14,27},
		{0,0,0, 1,3, 0,2,3, 40,78},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,5,5, 4,5, 1,2,3, 1,1}, // 1
		{0,1,2, 1,1, 1,1,1, 27,52},
		{0,3,2, 1,1, 2,1,1, 52,103},
		{0,1,2, 3,3, 1,3,2, 14,27},
		{0,3,2, 1,1, 2,1,1, 40,78},
		{0,1,2, 3,3, 1,2,2, 1,1}, // 6
		{0,1,1, 1,1, 2,1,1, 27,52},
		{0,3,2, 1,1, 1,1,1, 52,103},
		{0,1,2, 3,3, 0,2,2, 14,27},
		{0,3,2, 1,1, 0,1,1, 40,78},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_22_TYPE2
		#if 1
		{0,6,7, 4,6, 1,2,4, 1,1}, // 1
		{0,5,7, 3,5, 1,2,4, 27,52},
		{0,6,7, 2,4, 0,2,4, 52,103},
		{0,5,7, 3,5, 0,3,4, 14,27},
		{0,6,7, 2,4, 0,3,4, 40,78},
		{0,5,7, 3,5, 0,3,4, 1,1}, // 6
		{0,4,6, 2,4, 0,3,4, 27,52},
		{0,5,6, 1,3, 0,2,3, 52,103},
		{0,4,6, 2,4, 0,3,4, 14,27},
		{0,0,0, 1,3, 0,2,3, 40,78},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,5,5, 4,5, 1,2,3, 1,1}, // 1
		{0,1,2, 1,1, 1,1,1, 27,52},
		{0,3,2, 1,1, 2,1,1, 52,103},
		{0,1,2, 3,3, 1,3,2, 14,27},
		{0,3,2, 1,1, 2,1,1, 40,78},
		{0,1,2, 3,3, 1,2,2, 1,1}, // 6
		{0,1,1, 1,1, 2,1,1, 27,52},
		{0,3,2, 1,1, 1,1,1, 52,103},
		{0,1,2, 3,3, 0,2,2, 14,27},
		{0,3,2, 1,1, 0,1,1, 40,78},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_22_TO_11
		#if 1
		{0,6,7, 2,4, 0,3,4, 17,33}, // 1
		{0,5,6, 3,5, 0,3,4, 1,1},
		{0,6,7, 2,4, 0,2,3, 49,97},
		{0,6,7, 3,5, 0,2,3, 33,65},
		{0,5,6, 4,5, 0,2,3, 17,33},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,1,2, 3,3, 2,2,2, 1,1}, // 1
		{0,2,1, 1,1, 2,1,1, 33,65},
		{0,1,1, 3,2, 2,2,2, 1,1},
		{0,2,2, 2,2, 2,2,2, 1,1},
		{0,2,2, 2,2, 0,2,2, 1,1},
		{0,0,0, 0,0, 0,2,2, 1,1}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_32_TYPE1
		#if 1
		{1,5,6, 3,5, 1,1,3, 21,40}, // 1
		{2,5,7, 3,5, 1,1,3, 40,79},
		{2,6,7, 2,4, 2,1,3, 60,118},
		{0,5,7, 3,5, 0,2,4, 15,29},
		{0,4,6, 2,4, 0,2,4, 35,68},
		{0,6,7, 2,4, 0,2,4, 54,107}, // 6
		{0,5,7, 3,5, 0,3,4, 10,19},
		{0,4,6, 2,4, 0,3,4, 35,68},
		{0,0,0, 1,3, 0,2,3, 59,117},
		{0,0,0, 0,0, 0,0,0, 20,39},
		{0,0,0, 0,0, 0,0,0, 45,88}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{1,5,6, 3,5, 1,1,3, 1,75}, // 1
		{2,5,7, 3,5, 1,1,3, 1,96},
		{2,6,7, 2,4, 2,1,3, 1,118},
		{2,5,6, 3,5, 1,2,4, 12,21},
		{1,4,6, 2,4, 1,2,4, 33,65},
		{0,0,0, 2,4, 0,2,4, 54,108}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_32_TYPE5
		#if 1 // after
		{0,6,7, 4,6, 1,2,4, 1,17}, // 1
		{0,6,7, 4,6, 1,2,4, 1,49},
		{0,5,7, 3,5, 1,2,4, 1,81},
		{0,6,7, 2,4, 0,2,4, 1,113},
		{0,0,0, 0,0, 0,0,0, 1,22},
		{0,0,0, 0,0, 0,0,0, 1,65}, // 6
		{0,0,0, 0,0, 0,0,0, 1,109},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TO_11_TYPE1
		#if 1
		{0,5,7, 3,5, 0,3,4, 5,9}, // 1
		{0,6,7, 2,4, 0,2,3, 47,93},
		{0,5,7, 3,5, 0,2,3, 17,33},
		{0,5,6, 2,4, 0,1,2, 45,89},
		{0,5,6, 3,4, 0,1,2, 25,49},
		{0,5,6, 3,4, 0,1,2, 45,89}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // slow out
		{0,0,0, 0,0, 2,2,2, 1,1}, // 1
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,1,1, 33,65},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1}, // 6
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1}, // 11
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 2,2,2, 1,1},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TO_11_TYPE2
		#if 1
		{0,6,7, 2,4, 0,3,4, 1,97}, // 1
		{0,5,7, 3,5, 0,3,4, 1,33},
		{0,6,7, 2,4, 0,2,3, 1,97},
		{0,5,6, 3,5, 0,2,3, 1,33},
		{0,0,0, 2,4, 0,1,2, 1,97},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TO_11_TYPE4
		#if 1
		{0,4,6, 2,4, 0,3,4, 1,65}, // 1
		{0,5,7, 3,5, 0,3,4, 1,1},
		{0,4,6, 2,4, 0,2,3, 1,65},
		{0,5,6, 3,5, 0,2,3, 1,1},
		{0,5,6, 2,4, 0,1,2, 1,103},
		{0,0,0, 0,0, 0,0,0, 1,78}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_2224_TYPE1
		#if 1 // after
		{0,6,8, 5,6, 0,3,4, 0,1}, // 1
		{0,5,7, 4,5, 0,3,4, 0,33},
		{0,4,6, 3,4, 0,2,3, 0,65},
		{0,6,7, 2,3, 0,2,3, 0,97},
		{0,5,7, 3,5, 0,3,4, 0,1},
		{0,4,6, 2,4, 0,3,4, 0,33}, // 6
		{0,4,6, 2,4, 0,3,4, 0,65},
		{0,6,7, 2,4, 0,3,4, 0,97},
		{0,0,0, 3,5, 0,3,4, 0,1},
		{0,0,0, 0,0, 0,0,0, 0,44},
		{0,0,0, 0,0, 0,0,0, 0,86}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_2224_TYPE2
		#if 1 // after
		{1,5,6, 4,5, 1,2,3, 0,18}, // 1
		{0,5,6, 4,5, 1,2,3, 0,56},
		{0,4,5, 3,4, 0,2,3, 0,93},
		{0,5,7, 3,5, 0,3,4, 0,1},
		{0,4,6, 2,4, 0,3,4, 0,38},
		{0,4,6, 2,4, 0,3,4, 0,74}, // 6
		{0,6,7, 2,4, 0,3,4, 0,111},
		{0,0,0, 3,5, 0,3,4, 0,22},
		{0,0,0, 0,0, 0,0,0, 0,65},
		{0,0,0, 0,0, 0,0,0, 0,108},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_2224_TYPE3
		#if 1 // after
		{0,5,6, 3,4, 0,1,2, 0,97}, // 1
		{0,5,7, 4,5, 0,3,4, 0,1},
		{0,4,6, 3,4, 0,2,3, 0,33},
		{0,3,5, 2,3, 0,2,3, 0,65},
		{0,3,5, 2,3, 0,2,3, 0,97},
		{0,6,7, 4,6, 0,4,5, 0,1}, // 6
		{0,5,6, 3,5, 0,3,4, 0,38},
		{0,4,6, 2,4, 0,3,4, 0,74},
		{0,0,0, 1,3, 0,2,3, 0,111},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_2224_TYPE4
		#if 1 // after
		{0,5,7, 4,5, 1,2,3, 0,19}, // 1
		{0,4,7, 3,4, 1,2,3, 0,56},
		{0,3,6, 2,3, 1,2,3, 0,92},
		{0,6,7, 4,6, 1,4,5, 0,1},
		{0,6,7, 4,6, 1,4,5, 0,38},
		{0,5,7, 3,5, 0,3,4, 0,74}, // 6
		{0,6,7, 2,4, 0,3,4, 0,111},
		{0,0,0, 3,5, 0,3,4, 0,19},
		{0,0,0, 0,0, 0,0,0, 0,56},
		{0,0,0, 0,0, 0,0,0, 0,92},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_2224_TYPE5
		#if 1 // after
		{0,5,6, 4,5, 0,0,0, 0,33}, // 1
		{0,5,6, 3,4, 0,0,0, 0,97},
		{0,5,6, 4,5, 0,0,0, 0,0},
		{0,5,6, 4,5, 0,0,0, 0,0},
		{0,5,6, 4,5, 0,0,0, 0,0},
		{0,4,6, 3,4, 0,0,0, 0,0}, // 6
		{0,0,0, 2,3, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE1
		#if 1
		{0,4,6, 2,4, 0,3,4, 1,44}, // 1
		{0,5,7, 3,5, 0,3,4, 1,1},
		{0,0,0, 2,4, 0,0,0, 1,88},
		{0,0,0, 3,5, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE3
		#if 1
		{0,4,6, 2,4, 0,3,4, 0,1}, // 1
		{0,4,5, 1,3, 0,2,3, 0,64},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE5
		#if 1
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,5,7, 1,3, 0,0,0, 0,0},
		{0,6,7, 2,4, 0,0,0, 0,0},
		{0,0,0, 3,5, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE7
		#if 1 // after
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,5,6, 4,5, 0,3,4, 1,1},
		{0,0,0, 0,0, 0,0,0, 1,88},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE8
		#if 0 // after
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,5,7, 3,4, 0,3,4, 0,1},
		{0,6,7, 2,3, 0,2,3, 0,65},
		{0,5,7, 3,4, 0,3,4, 0,1},
		{0,0,0, 2,3, 0,2,3, 0,65},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE9
		#if 1 // after
		{0,6,7, 4,6, 0,4,5, 0,1}, // 1
		{0,5,7, 3,5, 0,3,4, 0,52},
		{0,6,7, 2,4, 0,2,3, 0,103},
		{0,0,0, 3,5, 0,2,3, 0,65},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_22_TYPE1_TO_2224_TYPE6
		#if 1 // after
		{0,4,6, 2,4, 0,3,4, 0,19}, // 1
		{0,0,0, 0,0, 0,0,0, 0,56},
		{0,0,0, 0,0, 0,0,0, 0,93},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TYPE1_TO_22_TYPE0
		#if 1 // after
		{0,4,6, 2,4, 0,3,4, 0,33}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TYPE4_TO_2224_TYPE1
		#if 1 // after
		{0,4,6, 2,4, 0,3,4, 0,33}, // 1
		{0,3,6, 1,3, 0,3,4, 0,65},
		{0,2,5, 8,2, 0,0,0, 0,97},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TYPE8_TO_32_TYPE3
		#if 1 // after
		{1,5,7, 3,5, 1,3,4, 0,27}, // 1
		{0,5,7, 3,5, 1,3,4, 0,78},
		{0,6,7, 4,6, 1,4,5, 0,1},
		{0,6,7, 4,6, 0,4,5, 0,33},
		{0,0,0, 0,0, 0,0,0, 0,65},
		{0,0,0, 0,0, 0,0,0, 0,97}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_22_TO_MIX
		#if 1
		{0,6,7, 2,4, 0,3,4, 17,33}, // 1
		{0,5,6, 3,5, 0,3,4, 1,1},
		{0,6,7, 2,4, 0,2,3, 49,97},
		{0,6,7, 3,5, 0,2,3, 33,65},
		{0,5,6, 4,5, 0,2,3, 17,33},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,1,2, 3,3, 0,2,2, 1,1}, // 1
		{0,1,1, 1,1, 0,1,1, 17,33},
		{0,1,1, 1,1, 0,1,1, 33,65},
		{0,3,2, 1,1, 0,1,1, 49,97},
		{0,1,2, 3,3, 0,2,2, 1,1},
		{0,1,1, 1,1, 0,1,1, 17,33}, // 6
		{0,1,1, 1,1, 0,1,1, 33,65},
		{0,0,0, 1,1, 0,1,1, 49,97},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TO_MIX
		#if 1
		{0,5,7, 3,5, 0,3,4, 5,9}, // 1
		{0,6,7, 2,4, 0,2,3, 47,93},
		{0,5,7, 3,5, 0,2,3, 17,33},
		{0,5,6, 2,4, 0,1,2, 45,89},
		{0,5,6, 3,4, 0,1,2, 25,49},
		{0,5,6, 3,4, 0,1,2, 45,89}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,1,1, 3,3, 0,0,0, 14,27}, // 1
		{0,1,1, 1,1, 0,0,0, 52,103},
		{0,1,1, 0,0, 0,0,0, 27,52},
		{0,0,0, 0,0, 0,0,0, 1,1},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},
};

static IDX_DYNAMIC_CTRL_OFFSET_TABLE Idx_Dynamic_Ctrl_Oft_Table_120HzOut[_CASE_NUM][IDC_Total_Frm_cnt] =
{ // 1.me_wrt_oft   2.me1_rd_i_oft   3.me1_rd_p_oft   4.me2_rd_i_oft   5.me2_rd_p_oft   6.mc_wrt_oft   7.mc_rd_i_oft   8.mc_rd_p_oft   9.me_phase   10.mc_phase
	{ // _CASE_NULL
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
	},

	{ // _CASE_22_TO_32
		#if 1 // after
		{0,4,6, 2,4, 1,2,3, 54,106}, // 1
		{0,4,6, 2,4, 2,2,3, 59,117},
		{0,5,7, 1,3, 1,1,2, 64,127},
		{0,5,7, 3,5, 1,3,4, 7,13},
		{0,5,7, 3,5, 1,3,4, 15,29},
		{0,5,7, 3,5, 1,3,4, 24,46}, // 6
		{0,4,6, 2,4, 1,3,4, 32,63},
		{0,4,6, 2,4, 1,3,4, 41,80},
		{0,3,5, 1,3, 1,3,4, 49,97},
		{0,5,7, 1,3, 0,3,4, 58,114},
		{0,4,6, 2,4, 0,3,4, 3,5}, // 11
		{0,4,6, 2,4, 0,3,4, 12,23},
		{0,3,5, 1,3, 0,3,4, 23,44},
		{0,3,5, 1,3, 0,3,4, 33,65},
		{0,3,5, 1,3, 0,3,4, 44,86},
		{0,0,0, 1,3, 0,3,4, 55,108}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{0,2,3, 4,4, 0,2,2, 1,1}, // 1
		{0,1,1, 1,1, 0,1,1, 12,22},
		{0,1,1, 1,1, 0,1,1, 23,44},
		{0,1,1, 1,1, 0,1,1, 33,65},
		{0,1,1, 1,1, 0,1,1, 44,86},
		{0,3,3, 1,1, 0,1,1, 54,107}, // 6
		{0,1,1, 3,3, 0,3,3, 1,1},
		{0,1,1, 1,1, 0,1,1, 12,22},
		{0,1,1, 1,1, 0,1,1, 23,44},
		{0,1,1, 1,1, 0,1,1, 33,65},
		{0,1,1, 1,1, 0,1,1, 44,86}, // 11
		{0,4,3, 1,1, 0,1,1, 54,107},
		{0,1,1, 4,4, 0,2,2, 1,1},
		{0,1,1, 1,1, 0,1,1, 12,22},
		{0,1,2, 1,1, 0,1,1, 23,44},
		{0,1,1, 1,1, 0,1,1, 33,65}, // 16
		{0,1,1, 1,1, 0,1,1, 44,86},
		{0,0,0, 1,1, 0,1,1, 54,107},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TO_22
		#if 1 // after
		{0,4,6, 2,4, 0,3,4, 27,52}, // 1
		{0,4,6, 2,4, 0,3,4, 40,78},
		{0,5,6, 1,3, 0,2,3, 52,103},
		{0,5,6, 3,5, 0,3,4, 1,1},
		{0,5,7, 2,4, 0,3,4, 14,27},
		{0,5,7, 2,4, 0,3,4, 27,52}, // 6
		{0,5,7, 1,3, 0,2,3, 40,78},
		{0,0,0, 1,3, 0,2,3, 52,103},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{0,1,2, 1,1, 0,1,1, 1,1}, // 1
		{0,1,1, 1,1, 0,1,1, 10,19},
		{0,1,1, 1,1, 0,1,1, 19,38},
		{0,1,1, 1,1, 0,1,1, 28,56},
		{0,1,1, 1,1, 0,1,1, 38,74},
		{0,3,2, 1,1, 0,1,1, 56,111}, // 6
		{0,1,2, 3,3, 0,2,2, 1,1},
		{0,1,1, 1,1, 0,1,1, 17,33},
		{0,1,1, 1,1, 0,1,1, 33,65},
		{0,3,2, 1,1, 0,1,1, 49,97},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_22_TYPE1
		#if 1 // after
		{0,5,6, 3,5, 0,1,3, 0,1}, // 1
		{0,5,7, 3,5, 0,1,3, 0,51},
		{0,4,6, 2,4, 0,1,3, 0,91},
		{0,6,7, 2,4, 0,1,3, 0,125},
		{0,5,6, 3,5, 0,2,4, 0,26},
		{0,5,7, 3,5, 0,2,4, 0,49}, // 6
		{0,4,6, 2,4, 0,2,4, 0,73},
		{0,4,6, 2,4, 0,2,4, 0,97},
		{0,5,6, 1,3, 0,1,3, 0,121},
		{0,5,6, 3,5, 0,3,4, 0,21},
		{0,4,6, 2,4, 0,3,4, 0,41}, // 11
		{0,4,6, 2,4, 0,3,4, 0,65},
		{0,3,5, 1,3, 0,2,3, 0,89},
		{0,5,6, 1,3, 0,2,3, 0,113},
		{0,0,0, 2,4, 0,3,4, 0,11},
		{0,0,0, 0,0, 0,0,0, 0,39}, // 16
		{0,0,0, 0,0, 0,0,0, 0,71},
		{0,0,0, 0,0, 0,0,0, 0,101},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{0,3,3, 3,4, 1,3,4, 1,1}, // 1
		{0,1,1, 1,1, 1,1,1, 14,27},
		{0,1,1, 1,1, 1,1,1, 27,52},
		{0,1,1, 1,1, 1,1,1, 40,78},
		{0,2,3, 1,1, 1,1,1, 52,103},
		{0,1,1, 3,2, 2,3,2, 1,1}, // 6
		{0,1,1, 1,1, 1,1,1, 14,27},
		{0,1,1, 1,1, 1,1,1, 27,52},
		{0,1,1, 1,1, 1,1,1, 40,78},
		{0,4,3, 1,1, 2,1,1, 52,103},
		{0,1,1, 3,4, 1,2,2, 1,1}, // 11
		{0,1,2, 1,1, 1,1,1, 14,27},
		{0,1,1, 1,1, 1,1,1, 27,52},
		{0,1,1, 1,1, 2,1,1, 40,78},
		{0,3,2, 1,1, 1,1,1, 52,103},
		{0,1,1, 3,3, 1,2,2, 1,1}, // 16
		{0,1,2, 1,1, 1,1,1, 14,27},
		{0,1,1, 1,1, 2,1,1, 27,52},
		{0,1,1, 1,1, 1,1,1, 40,78},
		{0,3,3, 1,1, 1,1,1, 52,103},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_22_TYPE2
		#if 1 // after
		{0,6,7, 4,6, 1,2,4, 1,1}, // 1
		{0,6,7, 4,6, 1,2,4, 14,27},
		{0,5,7, 3,5, 1,2,4, 27,52},
		{0,5,7, 3,5, 1,2,4, 40,78},
		{0,6,7, 2,4, 0,2,4, 52,103},
		{0,6,7, 4,6, 0,4,5, 1,1}, // 6
		{0,5,6, 3,5, 0,3,4, 14,27},
		{0,5,7, 3,5, 0,3,4, 27,52},
		{0,4,6, 2,4, 0,3,4, 40,78},
		{0,6,7, 2,4, 0,3,4, 52,103},
		{0,5,6, 3,5, 0,3,4, 1,1}, // 11
		{0,5,7, 3,5, 0,3,4, 14,27},
		{0,4,6, 2,4, 0,3,4, 27,52},
		{0,4,6, 2,4, 0,3,4, 40,78},
		{0,5,6, 1,3, 0,2,3, 52,103},
		{0,5,6, 3,5, 0,3,4, 1,1}, // 16
		{0,4,5, 2,4, 0,3,4, 14,27},
		{0,4,6, 2,4, 0,3,4, 27,52},
		{0,3,5, 1,3, 0,2,3, 40,78},
		{0,0,0, 1,3, 0,2,3, 52,103},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{0,3,3, 3,4, 1,3,4, 1,1}, // 1
		{0,1,1, 1,1, 1,1,1, 14,27},
		{0,1,1, 1,1, 1,1,1, 27,52},
		{0,1,1, 1,1, 1,1,1, 40,78},
		{0,2,3, 1,1, 1,1,1, 52,103},
		{0,1,1, 3,2, 2,3,2, 1,1}, // 6
		{0,1,1, 1,1, 1,1,1, 14,27},
		{0,1,1, 1,1, 1,1,1, 27,52},
		{0,1,1, 1,1, 1,1,1, 40,78},
		{0,4,3, 1,1, 2,1,1, 52,103},
		{0,1,1, 3,4, 1,2,2, 1,1}, // 11
		{0,1,2, 1,1, 1,1,1, 14,27},
		{0,1,1, 1,1, 1,1,1, 27,52},
		{0,1,1, 1,1, 2,1,1, 40,78},
		{0,3,2, 1,1, 1,1,1, 52,103},
		{0,1,1, 3,3, 1,2,2, 1,1}, // 16
		{0,1,2, 1,1, 1,1,1, 14,27},
		{0,1,1, 1,1, 2,1,1, 27,52},
		{0,1,1, 1,1, 1,1,1, 40,78},
		{0,3,3, 1,1, 1,1,1, 52,103},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_22_TO_11
		#if 1 // after
		{0,4,6, 2,4, 0,3,4, 3,5}, // 1
		{0,4,6, 2,4, 0,3,4, 21,41},
		{0,3,5, 1,3, 0,2,3, 39,77},
		{0,5,6, 1,3, 0,2,3, 57,113},
		{0,4,6, 2,4, 0,2,3, 13,25},
		{0,4,6, 2,4, 0,2,3, 33,65}, // 6
		{0,5,6, 1,3, 0,1,2, 56,110},
		{0,5,6, 3,5, 0,2,3, 14,27},
		{0,5,6, 2,4, 0,1,2, 40,78},
		{0,5,6, 4,5, 0,2,3, 1,1},
		{0,4,5, 3,4, 0,1,2, 27,52}, // 11
		{0,0,0, 3,4, 0,1,2, 52,103},
		{0,0,0, 0,0, 0,0,0, 14,27},
		{0,0,0, 0,0, 0,0,0, 40,78},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{0,1,2, 3,3, 0,2,2, 1,1}, // 1
		{0,1,1, 1,1, 0,1,1, 17, 33},
		{0,1,1, 1,1, 0,1,1, 33,65},
		{0,3,2, 1,1, 0,1,1, 49,97},
		{0,1,2, 3,3, 0,2,2, 1,1},
		{0,1,1, 1,1, 0,1,1, 23,44}, // 6
		{0,3,2, 1,1, 0,1,1, 44,87},
		{0,1,2, 3,3, 0,2,2, 1,1},
		{0,1,1, 1,1, 0,1,1, 23,44},
		{0,2,1, 1,1, 0,1,1, 44,87},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_32_TYPE1
		#if 0 // after
		{1,5,6, 3,5, 1,1,3, 1,1}, // 1
		{1,5,6, 3,5, 1,1,3, 12,21},
		{1,5,7, 3,5, 1,1,3, 22,44},
		{2,5,7, 3,5, 1,1,3, 33,65},
		{1,4,6, 2,4, 1,1,3, 44,86},
		{2,6,7, 2,4, 2,1,3, 54,108}, // 6
		{1,5,6, 3,5, 1,2,4, 1,1},
		{2,5,6, 3,5, 1,2,4, 12,21},
		{1,4,6, 2,4, 1,2,4, 22,44},
		{1,4,6, 2,4, 1,2,4, 33,65},
		{1,4,6, 2,4, 1,2,4, 44,86}, // 11
		{0,0,0, 2,4, 0,2,4, 54,108},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{1,5,6, 3,5, 1,1,3, 1,65}, // 1
		{1,5,6, 3,5, 1,1,3, 1,75},
		{1,5,7, 3,5, 1,1,3, 1,85},
		{2,5,7, 3,5, 1,1,3, 1,96},
		{1,4,6, 2,4, 1,1,3, 1,108},
		{2,6,7, 2,4, 2,1,3, 1,118}, // 6
		{1,5,6, 3,5, 1,2,4, 1,1},
		{2,5,6, 3,5, 1,2,4, 12,21},
		{1,4,6, 2,4, 1,2,4, 22,44},
		{1,4,6, 2,4, 1,2,4, 33,65},
		{1,4,6, 2,4, 1,2,4, 44,86}, // 11
		{0,0,0, 2,4, 0,2,4, 54,108},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_32_TYPE5
		#if 1 // after
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,6,7, 4,6, 1,2,4, 1,17},
		{0,6,7, 4,6, 1,2,4, 1,33},
		{0,6,7, 4,6, 1,2,4, 1,49},
		{0,5,6, 3,5, 1,2,4, 1,65},
		{0,5,7, 3,5, 1,2,4, 1,81}, // 6
		{0,4,6, 2,4, 1,2,4, 1,97},
		{0,6,7, 2,4, 0,2,4, 1,113},
		{0,5,6, 3,5, 0,3,4, 1,1},
		{0,0,0, 0,0, 0,0,0, 1,22},
		{0,0,0, 0,0, 0,0,0, 1,44}, // 11
		{0,0,0, 0,0, 0,0,0, 1,65},
		{0,0,0, 0,0, 0,0,0, 1,86},
		{0,0,0, 0,0, 0,0,0, 1,109},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TO_11_TYPE1
		#if 1 // after
		{0,5,7, 3,5, 0,3,4, 6,11}, // 1
		{0,5,7, 3,5, 0,3,4, 22,43},
		{0,4,6, 2,4, 0,2,3, 38,75},
		{0,6,7, 2,4, 0,2,3, 54,107},
		{0,5,7, 3,5, 0,2,3, 10,19},
		{0,5,7, 3,5, 0,2,3, 26,51}, // 6
		{0,4,6, 2,4, 0,1,2, 42,83},
		{0,0,0, 2,4, 0,1,2, 58,115},
		{0,0,0, 0,0, 0,0,0, 16,31},
		{0,0,0, 0,0, 0,0,0, 43,85},
		{0,0,0, 0,0, 0,0,0, 6,11}, // 11
		{0,0,0, 0,0, 0,0,0, 36,71},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{0,1,1, 3,3, 0,2,2, 1,1}, // 1
		{0,1,2, 1,1, 0,1,1, 17,33},
		{0,1,1, 1,1, 0,1,1, 33,65},
		{0,3,2, 1,1, 0,1,1, 49,97},
		{0,1,1, 3,3, 0,2,2, 1,1},
		{0,1,2, 1,1, 0,1,1, 17,33}, // 6
		{0,1,1, 1,1, 0,1,1, 33,65},
		{0,0,0, 1,1, 0,1,1, 49,97},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TO_11_TYPE2
		#if 1
		{0,4,6, 2,4, 0,3,4, 1,65}, // 1
		{0,6,7, 2,4, 0,3,4, 1,97},
		{0,5,7, 3,5, 0,3,4, 1,1},
		{0,5,7, 3,5, 0,3,4, 1,33},
		{0,4,6, 2,4, 0,2,3, 1,65},
		{0,6,7, 2,4, 0,2,3, 1,97}, // 6
		{0,5,6, 3,5, 0,2,3, 1,1},
		{0,5,6, 3,5, 0,2,3, 1,33},
		{0,4,5, 2,4, 0,1,2, 1,65},
		{0,0,0, 2,4, 0,1,2, 1,97},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TO_11_TYPE4
		#if 1
		{0,4,6, 2,4, 0,3,4, 1,33}, // 1
		{0,4,6, 2,4, 0,3,4, 1,65},
		{0,5,6, 1,3, 0,2,3, 1,97},
		{0,5,7, 3,5, 0,3,4, 1,1},
		{0,4,6, 2,4, 0,2,3, 1,33},
		{0,4,6, 2,4, 0,2,3, 1,65}, // 6
		{0,5,6, 1,3, 0,1,2, 1,97},
		{0,5,6, 3,5, 0,2,3, 1,1},
		{0,4,5, 2,4, 0,1,2, 1,52},
		{0,5,6, 2,4, 0,1,2, 1,103},
		{0,0,0, 0,0, 0,0,0, 1,27}, // 11
		{0,0,0, 0,0, 0,0,0, 1,78},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_2224_TYPE1
		#if 1 // after
		{0,6,8, 5,6, 0,3,4, 0,1}, // 1
		{0,6,8, 5,6, 0,3,4, 0,17},
		{0,5,7, 4,5, 0,3,4, 0,33},
		{0,5,7, 4,5, 0,3,4, 0,49},
		{0,4,6, 3,4, 0,2,3, 0,65},
		{0,4,6, 3,4, 0,2,3, 0,81}, // 6
		{0,3,5, 2,3, 0,2,3, 0,97},
		{0,6,7, 2,3, 0,2,3, 0,113},
		{0,5,6, 3,5, 0,3,4, 0,1},
		{0,5,7, 3,5, 0,3,4, 0,17},
		{0,4,6, 2,4, 0,3,4, 0,33}, // 11
		{0,4,6, 2,4, 0,3,4, 0,49},
		{0,4,6, 2,4, 0,3,4, 0,65},
		{0,4,6, 2,4, 0,3,4, 0,81},
		{0,4,6, 2,4, 0,3,4, 0,97},
		{0,6,7, 2,4, 0,3,4, 0,113}, // 16
		{0,5,6, 3,5, 0,3,4, 0,1},
		{0,0,0, 3,5, 0,3,4, 0,22},
		{0,0,0, 0,0, 0,0,0, 0,44},
		{0,0,0, 0,0, 0,0,0, 0,65},
		{0,0,0, 0,0, 0,0,0, 0,86}, // 21
		{0,0,0, 0,0, 0,0,0, 0,108},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_2224_TYPE2
		#if 1 // after
		{1,5,6, 4,5, 1,2,3, 0,1}, // 1
		{1,5,6, 4,5, 1,2,3, 0,18},
		{0,5,6, 4,5, 1,2,3, 0,38},
		{0,5,6, 4,5, 1,2,3, 0,56},
		{0,4,5, 3,4, 0,2,3, 0,74},
		{0,4,5, 3,4, 0,2,3, 0,93}, // 6
		{0,5,6, 2,3, 0,1,2, 0,111},
		{0,5,7, 3,5, 0,3,4, 0,1},
		{0,4,6, 2,4, 0,3,4, 0,18},
		{0,4,6, 2,4, 0,3,4, 0,38},
		{0,4,6, 2,4, 0,3,4, 0,56}, // 11
		{0,4,6, 2,4, 0,3,4, 0,74},
		{0,4,6, 2,4, 0,3,4, 0,93},
		{0,6,7, 2,4, 0,3,4, 0,111},
		{0,5,6, 3,5, 0,3,4, 0,1},
		{0,0,0, 3,5, 0,3,4, 0,22}, // 16
		{0,0,0, 0,0, 0,0,0, 0,44},
		{0,0,0, 0,0, 0,0,0, 0,65},
		{0,0,0, 0,0, 0,0,0, 0,86},
		{0,0,0, 0,0, 0,0,0, 0,108},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_2224_TYPE3
		#if 1 // after
		{0,5,6, 3,4, 0,1,2, 0,81}, // 1
		{0,5,6, 3,4, 0,1,2, 0,97},
		{0,5,7, 2,3, 0,1,2, 0,113},
		{0,5,7, 4,5, 0,3,4, 0,1},
		{0,4,6, 3,4, 0,2,3, 0,17},
		{0,4,6, 3,4, 0,2,3, 0,33}, // 6
		{0,3,5, 2,3, 0,2,3, 0,49},
		{0,3,5, 2,3, 0,2,3, 0,65},
		{0,3,5, 2,3, 0,2,3, 0,81},
		{0,3,5, 2,3, 0,2,3, 0,97},
		{0,6,7, 2,3, 0,2,3, 0,113}, // 11
		{0,6,7, 4,6, 0,4,5, 0,1},
		{0,5,6, 3,5, 0,3,4, 0,19},
		{0,5,6, 3,5, 0,3,4, 0,38},
		{0,4,6, 2,4, 0,3,4, 0,56},
		{0,4,6, 2,4, 0,3,4, 0,74}, // 16
		{0,3,5, 1,3, 0,2,3, 0,93},
		{0,0,0, 1,3, 0,2,3, 0,111},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_2224_TYPE4
		#if 1 // after
		{0,5,7, 4,5, 1,2,3, 0,1}, // 1
		{0,5,7, 4,5, 1,2,3, 0,19},
		{0,4,6, 3,4, 1,2,3, 0,38},
		{0,4,7, 3,4, 1,2,3, 0,56},
		{0,3,6, 2,3, 1,2,3, 0,74},
		{0,3,6, 2,3, 1,2,3, 0,92}, // 6
		{0,6,7, 2,3, 1,2,3, 0,111},
		{0,6,7, 4,6, 1,4,5, 0,1},
		{0,6,7, 4,6, 2,4,5, 0,19},
		{0,6,7, 4,6, 1,4,5, 0,38},
		{0,5,6, 3,5, 0,3,4, 0,56}, // 11
		{0,5,7, 3,5, 0,3,4, 0,74},
		{0,4,6, 2,4, 0,3,4, 0,92},
		{0,6,7, 2,4, 0,3,4, 0,111},
		{0,5,6, 3,5, 0,3,4, 0,1},
		{0,0,0, 3,5, 0,3,4, 0,19}, // 16
		{0,0,0, 0,0, 0,0,0, 0,38},
		{0,0,0, 0,0, 0,0,0, 0,56},
		{0,0,0, 0,0, 0,0,0, 0,74},
		{0,0,0, 0,0, 0,0,0, 0,92},
		{0,0,0, 0,0, 0,0,0, 0,111}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_11_TO_2224_TYPE5
		#if 1 // after
		{0,5,6, 4,5, 0,0,0, 0,1}, // 1
		{0,5,6, 4,5, 0,0,0, 0,33},
		{0,4,5, 3,4, 0,0,0, 0,65},
		{0,5,6, 3,4, 0,0,0, 0,97},
		{0,5,6, 4,5, 0,0,0, 0,0},
		{0,5,6, 4,5, 0,0,0, 0,0}, // 6
		{0,5,6, 4,5, 0,0,0, 0,0},
		{0,5,6, 4,5, 0,0,0, 0,0},
		{0,5,6, 3,4, 0,0,0, 0,0},
		{0,5,6, 4,5, 0,0,0, 0,0},
		{0,4,6, 3,4, 0,0,0, 0,0}, // 11
		{0,4,6, 3,4, 0,0,0, 0,0},
		{0,4,6, 2,3, 0,0,0, 0,0},
		{0,0,0, 2,3, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE1
		#if 1
		{0,4,6, 2,4, 0,3,4, 1,1}, // 1
		{0,4,6, 2,4, 0,3,4, 1,44},
		{0,5,6, 1,3, 0,2,3, 1,88},
		{0,5,7, 3,5, 0,3,4, 1,1},
		{0,4,6, 2,4, 0,0,0, 1,44},
		{0,0,0, 2,4, 0,0,0, 1,88}, // 6
		{0,0,0, 3,5, 0,0,0, 0,0},
		{0,0,0, 3,5, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE3
		#if 1
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,4,6, 2,4, 0,3,4, 0,1},
		{0,3,5, 1,3, 0,2,3, 0,44},
		{0,5,6, 1,3, 0,2,3, 0,86},
		{0,4,6, 2,4, 0,2,3, 0,1},
		{0,4,6, 2,4, 0,2,3, 0,44}, // 6
		{0,5,6, 1,3, 0,1,2, 0,86},
		{0,5,7, 3,5, 0,2,3, 0,1},
		{0,4,6, 2,4, 0,1,2, 0,44},
		{0,0,0, 2,4, 0,1,2, 0,86},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE5
		#if 1
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,3,5, 1,3, 0,0,0, 0,0},
		{0,5,7, 1,3, 0,0,0, 0,0},
		{0,4,6, 2,4, 0,0,0, 0,0},
		{0,6,7, 2,4, 0,0,0, 0,0}, // 6
		{0,0,0, 3,5, 0,0,0, 0,0},
		{0,0,0, 3,5, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE7
		#if 1 // after
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,5,6, 1,3, 0,2,3, 1,102},
		{0,5,6, 4,5, 0,3,4, 1,1},
		{0,0,0, 0,0, 0,0,0, 1,44},
		{0,0,0, 0,0, 0,0,0, 1,88}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE8
		#if 1 // after
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,5,7, 3,4, 0,3,4, 0,1},
		{0,4,6, 2,3, 0,2,3, 0,44},
		{0,6,7, 2,3, 0,2,3, 0,86},
		{0,5,7, 3,4, 0,2,3, 0,1},
		{0,5,7, 3,4, 0,2,3, 0,33}, // 6
		{0,4,6, 2,3, 0,1,2, 0,65},
		{0,0,0, 2,3, 0,1,2, 0,97},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else // before
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TO_11_TYPE9
		#if 1 // after
		{0,6,7, 2,4, 0,3,4, 0,65}, // 1
		{0,6,7, 4,6, 0,4,5, 0,1},
		{0,5,7, 3,5, 0,3,4, 0,27},
		{0,5,7, 3,5, 0,3,4, 0,52},
		{0,4,6, 2,4, 0,2,3, 0,78},
		{0,6,7, 2,4, 0,2,3, 0,103}, // 6
		{0,5,6, 3,5, 0,2,3, 0,1},
		{0,0,0, 3,5, 0,2,3, 0,65},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_22_TYPE1_TO_2224_TYPE6
		#if 1 // after
		{0,4,6, 2,4, 0,3,4, 0,1}, // 1
		{0,4,6, 2,4, 0,3,4, 0,19},
		{0,0,0, 0,0, 0,0,0, 0,38},
		{0,0,0, 0,0, 0,0,0, 0,56},
		{0,0,0, 0,0, 0,0,0, 0,74},
		{0,0,0, 0,0, 0,0,0, 0,93}, // 6
		{0,0,0, 0,0, 0,0,0, 0,111},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TYPE1_TO_22_TYPE0
		#if 1 // after
		{0,4,6, 2,4, 0,3,4, 0,1}, // 1
		{0,4,6, 2,4, 0,3,4, 0,33},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TYPE4_TO_2224_TYPE1
		#if 1 // after
		{0,4,6, 2,4, 0,3,4, 0,17}, // 1
		{0,4,6, 2,4, 0,3,4, 0,33},
		{0,3,6, 1,3, 0,3,4, 0,49},
		{0,3,6, 1,3, 0,3,4, 0,65},
		{0,2,5, 8,2, 0,0,0, 0,81},
		{0,2,5, 8,2, 0,0,0, 0,97}, // 6
		{0,0,0, 7,1, 0,0,0, 0,113},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_2224_TYPE8_TO_32_TYPE3
		#if 1 // after
		{1,5,7, 3,5, 1,3,4, 0,1}, // 1
		{1,5,7, 3,5, 1,3,4, 0,27},
		{2,5,7, 3,5, 1,3,4, 0,56},
		{0,5,7, 3,5, 1,3,4, 0,78},
		{0,6,7, 2,4, 1,3,4, 0,103},
		{0,6,7, 4,6, 1,4,5, 0,1}, // 6
		{0,6,7, 4,6, 2,4,5, 0,17},
		{0,6,7, 4,6, 0,4,5, 0,33},
		{0,0,0, 0,0, 0,0,0, 0,49},
		{0,0,0, 0,0, 0,0,0, 0,65},
		{0,0,0, 0,0, 0,0,0, 0,81}, // 11
		{0,0,0, 0,0, 0,0,0, 0,97},
		{0,0,0, 0,0, 0,0,0, 0,113},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_22_TO_MIX
		#if 1
		{0,4,6, 2,4, 0,3,4, 3,5}, // 1
		{0,4,6, 2,4, 0,3,4, 21,41},
		{0,3,5, 1,3, 0,2,3, 39,77},
		{0,5,6, 1,3, 0,2,3, 57,113},
		{0,4,6, 2,4, 0,2,3, 13,25},
		{0,4,6, 2,4, 0,2,3, 33,65}, // 6
		{0,5,6, 1,3, 0,1,2, 56,110},
		{0,5,6, 3,5, 0,2,3, 14,27},
		{0,5,6, 2,4, 0,1,2, 40,78},
		{0,5,6, 4,5, 0,2,3, 1,1},
		{0,4,5, 3,4, 0,1,2, 27,52}, // 11
		{0,0,0, 3,4, 0,1,2, 52,103},
		{0,0,0, 0,0, 0,0,0, 14,27},
		{0,0,0, 0,0, 0,0,0, 40,78},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,1,2, 3,3, 0,2,2, 1,1}, // 1
		{0,1,1, 1,1, 0,1,1, 17,33},
		{0,1,1, 1,1, 0,1,1, 33,65},
		{0,3,2, 1,1, 0,1,1, 49,97},
		{0,1,2, 3,3, 0,2,2, 1,1},
		{0,1,1, 1,1, 0,1,1, 17,33}, // 6
		{0,1,1, 1,1, 0,1,1, 33,65},
		{0,0,0, 1,1, 0,1,1, 49,97},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},

	{ // _CASE_32_TO_MIX
		#if 1
		{0,5,7, 3,5, 0,3,4, 6,11}, // 1
		{0,5,7, 3,5, 0,3,4, 22,43},
		{0,4,6, 2,4, 0,2,3, 38,75},
		{0,6,7, 2,4, 0,2,3, 54,107},
		{0,5,7, 3,5, 0,2,3, 10,19},
		{0,5,7, 3,5, 0,2,3, 26,51}, // 6
		{0,4,6, 2,4, 0,1,2, 42,83},
		{0,0,0, 2,4, 0,1,2, 58,115},
		{0,0,0, 0,0, 0,0,0, 16,31},
		{0,0,0, 0,0, 0,0,0, 43,85},
		{0,0,0, 0,0, 0,0,0, 6,11}, // 11
		{0,0,0, 0,0, 0,0,0, 36,71},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#else
		{0,0,0, 0,0, 0,0,0, 0,0}, // 1
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 6
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 11
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 16
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 21
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0},
		{0,0,0, 0,0, 0,0,0, 0,0}, // 26
		#endif
	},
};

extern unsigned char g_cadence_change_flag;
VOID MEMC_Lib_CadenceChangeCtrl(VOID)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();
	const UBYTE me_bsize = 8, mc_bsize = 6;
	UINT32 dejudder_lvl = 0;
	UINT32 cur_cadence = 0, cur_cadence_out = 0;
	UINT32 me_write = 0, me1_read_i = 0, me1_read_p = 0, me2_read_i = 0, me2_read_p = 0;
	UINT32 mc_write = 0, mc_read_i = 0, mc_read_p = 0;
	UINT32 me2_phase = 0, mc_phase = 0;
	UINT32 me_wptr_tmp = 0, me1_rptr_p_tmp = 0, me1_rptr_i_tmp = 0, me2_rptr_p_tmp = 0, me2_rptr_i_tmp = 0;
	UINT32 mc_wptr_tmp = 0, mc_rptr_p_tmp = 0, mc_rptr_i_tmp = 0;
	static UINT32 Idx_Lock_state = 0, cadence_pre = 0, cadence_change_case = 0, frm_ctrl_cnt = 0, frame_hold = 0;
	UINT32 log_en = 0, gmv_rb = 0, CadenceChangeCtrl_bypass_en = 0;
	PQL_OUTPUT_FRAME_RATE  out_fmRate = 0;

	dejudder_lvl = s_pContext->_output_frc_phtable.u8_dejudder_lvl_pre;
	cur_cadence = s_pContext->_output_filmDetectctrl.u8_cur_cadence_Id[_FILM_ALL];
	cur_cadence_out = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];
	ReadRegister(FRC_TOP__KPHASE__in_me_index_ADDR, FRC_TOP__KPHASE__in_me_index_BITSTART, FRC_TOP__KPHASE__in_me_index_BITEND, &me_write);
	ReadRegister(FRC_TOP__KPHASE__lbme_i_index_ADDR, FRC_TOP__KPHASE__lbme_i_index_BITSTART, FRC_TOP__KPHASE__lbme_i_index_BITEND, &me1_read_i);
	ReadRegister(FRC_TOP__KPHASE__lbme_p_index_ADDR, FRC_TOP__KPHASE__lbme_p_index_BITSTART, FRC_TOP__KPHASE__lbme_p_index_BITEND, &me1_read_p);
	ReadRegister(FRC_TOP__KPHASE__lbme2_i_index_ADDR, FRC_TOP__KPHASE__lbme2_i_index_BITSTART, FRC_TOP__KPHASE__lbme2_i_index_BITEND, &me2_read_i);
	ReadRegister(FRC_TOP__KPHASE__lbme2_p_index_ADDR, FRC_TOP__KPHASE__lbme2_p_index_BITSTART, FRC_TOP__KPHASE__lbme2_p_index_BITEND, &me2_read_p);
	ReadRegister(FRC_TOP__KPHASE__in_mc_index_ADDR, FRC_TOP__KPHASE__in_mc_index_BITSTART, FRC_TOP__KPHASE__in_mc_index_BITEND, &mc_write);
	ReadRegister(FRC_TOP__KPHASE__lbmc_i_index_ADDR, FRC_TOP__KPHASE__lbmc_i_index_BITSTART, FRC_TOP__KPHASE__lbmc_i_index_BITEND, &mc_read_i);
	ReadRegister(FRC_TOP__KPHASE__lbmc_p_index_ADDR, FRC_TOP__KPHASE__lbmc_p_index_BITSTART, FRC_TOP__KPHASE__lbmc_p_index_BITEND, &mc_read_p);
	ReadRegister(FRC_TOP__MC__regr_mc_phase_ADDR, FRC_TOP__MC__regr_mc_phase_BITSTART, FRC_TOP__MC__regr_mc_phase_BITEND, &me2_phase);
	ReadRegister(FRC_TOP__MC__regr_mc_phase_ADDR, FRC_TOP__MC__regr_mc_phase_BITSTART, FRC_TOP__MC__regr_mc_phase_BITEND, &mc_phase);
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 30, 30, &log_en);
	ReadRegister(FRC_TOP__software1__reg_software_60_ADDR, 28, 28, &CadenceChangeCtrl_bypass_en);
	gmv_rb = (SINT16)s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb;
	out_fmRate = s_pContext->_external_data._output_frameRate;
#if 1
	if(Idx_Lock_state == 0){
		if(g_cadence_change_flag == _CASE_22_TO_32){
			cadence_change_case = _CASE_22_TO_32;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 11 : 16;
			//mc_in_frame_hold_func_en
			WriteRegister(FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_ADDR, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITSTART, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITEND, 0x8);
			pr_notice("[phasetable][%s][%d][22 to 32]\n\r", __FUNCTION__, _CASE_22_TO_32);
		}
		else if(g_cadence_change_flag == _CASE_32_TO_22){
			cadence_change_case = _CASE_32_TO_22;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 4 : 8;
			//mc_in_frame_hold_func_en
			WriteRegister(FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_ADDR, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITSTART, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITEND, 0x8);
			pr_notice("[phasetable][%s][%d][32 to 22]\n\r", __FUNCTION__, _CASE_32_TO_22);
		}
		else if(g_cadence_change_flag == _CASE_11_TO_22_TYPE1){
			cadence_change_case = _CASE_11_TO_22_TYPE1;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 9 : 18;
			pr_notice("[phasetable][%s][%d][video to 22 type1]\n\r", __FUNCTION__, _CASE_11_TO_22_TYPE1);
		}
		else if(g_cadence_change_flag == _CASE_11_TO_22_TYPE2){
			cadence_change_case = _CASE_11_TO_22_TYPE2;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 10 : 20;
			pr_notice("[phasetable][%s][%d][video to 22 type2]\n\r", __FUNCTION__, _CASE_11_TO_22_TYPE2);
		}
		else if(g_cadence_change_flag == _CASE_22_TO_11){
			cadence_change_case = _CASE_22_TO_11; // _CASE_NULL; //
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 5 : 14;
			//mc_in_frame_hold_func_en
			WriteRegister(FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_ADDR, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITSTART, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITEND, 0x8);
			pr_notice("[phasetable][%s][%d][22 to video]\n\r", __FUNCTION__, _CASE_22_TO_11);
		}
		else if(g_cadence_change_flag == _CASE_11_TO_32_TYPE1){
			cadence_change_case = _CASE_11_TO_32_TYPE1;
			#if 1
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 11 : 12;
			#else
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 6 : 12;
			#endif
			pr_notice("[phasetable][%s][%d][_CASE_11_TO_32_TYPE1]\n\r", __FUNCTION__, _CASE_11_TO_32_TYPE1);
		}
		else if(g_cadence_change_flag == _CASE_11_TO_32_TYPE5){
			cadence_change_case = _CASE_11_TO_32_TYPE5;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 7 : 14;
			pr_notice("[phasetable][%s][%d][_CASE_11_TO_32_TYPE5]\n\r", __FUNCTION__, _CASE_11_TO_32_TYPE5);
		}
		else if(g_cadence_change_flag == _CASE_32_TO_11_TYPE1){
			cadence_change_case = _CASE_32_TO_11_TYPE1; // _CASE_NULL; //
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 6 : 12;
			//mc_in_frame_hold_func_en
			WriteRegister(FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_ADDR, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITSTART, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITEND, 0x8);
			pr_notice("[phasetable][%s][%d][_CASE_32_TO_11_TYPE1]\n\r", __FUNCTION__, _CASE_32_TO_11_TYPE1);
		}
		else if(g_cadence_change_flag == _CASE_32_TO_11_TYPE2){
			cadence_change_case = _CASE_32_TO_11_TYPE2;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 5 : 10;
			pr_notice("[phasetable][%s][%d][_CASE_32_TO_11_TYPE2]\n\r", __FUNCTION__, _CASE_32_TO_11_TYPE2);
		}
		else if(g_cadence_change_flag == _CASE_32_TO_11_TYPE4){
			cadence_change_case = _CASE_32_TO_11_TYPE4;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 6 : 12;
			//mc_in_frame_hold_func_en
			//WriteRegister(FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_ADDR, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITSTART, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITEND, 0x8);
			pr_notice("[phasetable][%s][%d][_CASE_32_TO_11_TYPE4]\n\r", __FUNCTION__, _CASE_32_TO_11_TYPE4);
		}
		else if(g_cadence_change_flag == _CASE_11_TO_2224_TYPE1){
			cadence_change_case = _CASE_11_TO_2224_TYPE1;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 11 : 22;
			pr_notice("[phasetable][%s][%d][_CASE_11_TO_2224_TYPE1]\n\r", __FUNCTION__, _CASE_11_TO_2224_TYPE1);
		}
		else if(g_cadence_change_flag == _CASE_11_TO_2224_TYPE2){
			cadence_change_case = _CASE_11_TO_2224_TYPE2;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 10 : 20;
			pr_notice("[phasetable][%s][%d][_CASE_11_TO_2224_TYPE2]\n\r", __FUNCTION__, _CASE_11_TO_2224_TYPE2);
		}
		else if(g_cadence_change_flag == _CASE_11_TO_2224_TYPE3){
			cadence_change_case = _CASE_11_TO_2224_TYPE3;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 6 : 13;
			pr_notice("[phasetable][%s][%d][_CASE_11_TO_2224_TYPE3]\n\r", __FUNCTION__, _CASE_11_TO_2224_TYPE3);
		}
		else if(g_cadence_change_flag == _CASE_11_TO_2224_TYPE4){
			cadence_change_case = _CASE_11_TO_2224_TYPE4;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 10 : 21;
			pr_notice("[phasetable][%s][%d][_CASE_11_TO_2224_TYPE4]\n\r", __FUNCTION__, _CASE_11_TO_2224_TYPE4);
		}
		else if(g_cadence_change_flag == _CASE_11_TO_2224_TYPE5){
			cadence_change_case = _CASE_11_TO_2224_TYPE5;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 7 : 14;
			pr_notice("[phasetable][%s][%d][_CASE_11_TO_2224_TYPE5]\n\r", __FUNCTION__, _CASE_11_TO_2224_TYPE5);
		}
		else if(g_cadence_change_flag == _CASE_2224_TO_11_TYPE1){
			cadence_change_case = _CASE_2224_TO_11_TYPE1; // _CASE_NULL; //
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 4 : 8;
			pr_notice("[phasetable][%s][%d][_CASE_2224_TO_11_TYPE1]\n\r", __FUNCTION__, _CASE_2224_TO_11_TYPE1);
		}
		else if(g_cadence_change_flag == _CASE_2224_TO_11_TYPE3){
			cadence_change_case = _CASE_2224_TO_11_TYPE3; // _CASE_NULL; //
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 2 : 10;
			pr_notice("[phasetable][%s][%d][_CASE_2224_TO_11_TYPE3]\n\r", __FUNCTION__, _CASE_2224_TO_11_TYPE3);
		}
		else if(g_cadence_change_flag == _CASE_2224_TO_11_TYPE5){
			cadence_change_case = _CASE_2224_TO_11_TYPE5;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 4 : 8;
			pr_notice("[phasetable][%s][%d][_CASE_2224_TO_11_TYPE5]\n\r", __FUNCTION__, _CASE_2224_TO_11_TYPE5);
		}
		else if(g_cadence_change_flag == _CASE_2224_TO_11_TYPE7){
			cadence_change_case = _CASE_2224_TO_11_TYPE7;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 3 : 6;
			pr_notice("[phasetable][%s][%d][_CASE_2224_TO_11_TYPE7]\n\r", __FUNCTION__, _CASE_2224_TO_11_TYPE7);
		}
		else if(g_cadence_change_flag == _CASE_2224_TO_11_TYPE8){
			cadence_change_case = _CASE_2224_TO_11_TYPE8;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 4 : 8;
			pr_notice("[phasetable][%s][%d][_CASE_2224_TO_11_TYPE8]\n\r", __FUNCTION__, _CASE_2224_TO_11_TYPE8);
		}
		else if(g_cadence_change_flag == _CASE_2224_TO_11_TYPE9){
			cadence_change_case = _CASE_2224_TO_11_TYPE9;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 4 : 8;
			pr_notice("[phasetable][%s][%d][_CASE_2224_TO_11_TYPE9]\n\r", __FUNCTION__, _CASE_2224_TO_11_TYPE9);
		}
		else if(g_cadence_change_flag == _CASE_22_TYPE1_TO_2224_TYPE6){
			cadence_change_case = _CASE_22_TYPE1_TO_2224_TYPE6;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 3 : 7;
			pr_notice("[phasetable][%s][%d][_CASE_22_TYPE1_TO_2224_TYPE6]\n\r", __FUNCTION__, _CASE_22_TYPE1_TO_2224_TYPE6);
		}
		else if(g_cadence_change_flag == _CASE_2224_TYPE1_TO_22_TYPE0){
			cadence_change_case = _CASE_2224_TYPE1_TO_22_TYPE0;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 1 : 2;
			pr_notice("[phasetable][%s][%d][_CASE_2224_TYPE1_TO_22_TYPE0]\n\r", __FUNCTION__, _CASE_2224_TYPE1_TO_22_TYPE0);
		}
		else if(g_cadence_change_flag == _CASE_32_TYPE4_TO_2224_TYPE1){
			cadence_change_case = _CASE_32_TYPE4_TO_2224_TYPE1;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 3 : 7;
			pr_notice("[phasetable][%s][%d][_CASE_32_TYPE4_TO_2224_TYPE1]\n\r", __FUNCTION__, _CASE_32_TYPE4_TO_2224_TYPE1);
		}
		else if(g_cadence_change_flag == _CASE_2224_TYPE8_TO_32_TYPE3){
			cadence_change_case = _CASE_2224_TYPE8_TO_32_TYPE3;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 6 : 13;
			pr_notice("[phasetable][%s][%d][_CASE_2224_TYPE8_TO_32_TYPE3]\n\r", __FUNCTION__, _CASE_2224_TYPE8_TO_32_TYPE3);
		}
		else if(g_cadence_change_flag == _CASE_22_TO_MIX){
			cadence_change_case = _CASE_22_TO_MIX;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 5 : 14;
			pr_notice("[phasetable][%s][%d][22 to Mixed_Mode]\n\r", __FUNCTION__, _CASE_22_TO_MIX);
		}
		else if(g_cadence_change_flag == _CASE_32_TO_MIX){
			cadence_change_case = _CASE_32_TO_MIX;
			frame_hold = (out_fmRate <= _PQL_OUT_60HZ) ? 6 : 12;
			pr_notice("[phasetable][%s][%d][32 to Mixed_Mode]\n\r", __FUNCTION__, _CASE_32_TO_MIX);
		}
	}

	if(CadenceChangeCtrl_bypass_en)
		cadence_change_case = _CASE_NULL;

	if(cadence_change_case > _CASE_NULL){
		unsigned char me_wrt_oft = 0;
		unsigned char me1_rd_i_oft = 0;
		unsigned char me1_rd_p_oft = 0;
		unsigned char me2_rd_i_oft = 0;
		unsigned char me2_rd_p_oft = 0;
		unsigned char mc_wrt_oft = 0;
		unsigned char mc_rd_i_oft = 0;
		unsigned char mc_rd_p_oft = 0;
		unsigned char me_phase_oft = 0;
		unsigned char mc_phase_oft = 0;
		unsigned char mc_phase = 0;

		if(frm_ctrl_cnt < frame_hold/*IDC_Total_Frm_cnt*/){
			if(out_fmRate <= _PQL_OUT_60HZ){
				if(0){
					me_wrt_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[cadence_change_case][frm_ctrl_cnt].me_wrt_oft;
					me1_rd_i_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[cadence_change_case][frm_ctrl_cnt].me1_rd_i_oft;
					me1_rd_p_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[cadence_change_case][frm_ctrl_cnt].me1_rd_p_oft;
					me2_rd_i_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[cadence_change_case][frm_ctrl_cnt].me2_rd_i_oft;
					me2_rd_p_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[cadence_change_case][frm_ctrl_cnt].me2_rd_p_oft;
					mc_wrt_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[cadence_change_case][frm_ctrl_cnt].mc_wrt_oft;
					mc_rd_i_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[cadence_change_case][frm_ctrl_cnt].mc_rd_i_oft;
					mc_rd_p_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[cadence_change_case][frm_ctrl_cnt].mc_rd_p_oft;
					//me_phase = Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[cadence_change_case][frm_ctrl_cnt].me_phase;
					mc_phase_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut_test1[cadence_change_case][frm_ctrl_cnt].mc_phase;
				}else{
					me_wrt_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut[cadence_change_case][frm_ctrl_cnt].me_wrt_oft;
					me1_rd_i_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut[cadence_change_case][frm_ctrl_cnt].me1_rd_i_oft;
					me1_rd_p_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut[cadence_change_case][frm_ctrl_cnt].me1_rd_p_oft;
					me2_rd_i_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut[cadence_change_case][frm_ctrl_cnt].me2_rd_i_oft;
					me2_rd_p_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut[cadence_change_case][frm_ctrl_cnt].me2_rd_p_oft;
					mc_wrt_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut[cadence_change_case][frm_ctrl_cnt].mc_wrt_oft;
					mc_rd_i_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut[cadence_change_case][frm_ctrl_cnt].mc_rd_i_oft;
					mc_rd_p_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut[cadence_change_case][frm_ctrl_cnt].mc_rd_p_oft;
					//me_phase = Idx_Dynamic_Ctrl_Oft_Table_60HzOut[cadence_change_case][frm_ctrl_cnt].me_phase;
					mc_phase_oft = Idx_Dynamic_Ctrl_Oft_Table_60HzOut[cadence_change_case][frm_ctrl_cnt].mc_phase;
				}
			}
			else{
				me_wrt_oft = Idx_Dynamic_Ctrl_Oft_Table_120HzOut[cadence_change_case][frm_ctrl_cnt].me_wrt_oft;
				me1_rd_i_oft = Idx_Dynamic_Ctrl_Oft_Table_120HzOut[cadence_change_case][frm_ctrl_cnt].me1_rd_i_oft;
				me1_rd_p_oft = Idx_Dynamic_Ctrl_Oft_Table_120HzOut[cadence_change_case][frm_ctrl_cnt].me1_rd_p_oft;
				me2_rd_i_oft = Idx_Dynamic_Ctrl_Oft_Table_120HzOut[cadence_change_case][frm_ctrl_cnt].me2_rd_i_oft;
				me2_rd_p_oft = Idx_Dynamic_Ctrl_Oft_Table_120HzOut[cadence_change_case][frm_ctrl_cnt].me2_rd_p_oft;
				mc_wrt_oft = Idx_Dynamic_Ctrl_Oft_Table_120HzOut[cadence_change_case][frm_ctrl_cnt].mc_wrt_oft;
				mc_rd_i_oft = Idx_Dynamic_Ctrl_Oft_Table_120HzOut[cadence_change_case][frm_ctrl_cnt].mc_rd_i_oft;
				mc_rd_p_oft = Idx_Dynamic_Ctrl_Oft_Table_120HzOut[cadence_change_case][frm_ctrl_cnt].mc_rd_p_oft;
				//me_phase = Idx_Dynamic_Ctrl_Oft_Table_120HzOut[cadence_change_case][frm_ctrl_cnt].me_phase;
				mc_phase_oft = Idx_Dynamic_Ctrl_Oft_Table_120HzOut[cadence_change_case][frm_ctrl_cnt].mc_phase;
			}

			// me_write
			if(me_wrt_oft > 0){
				me_wptr_tmp = (me_write + me_wrt_oft -1)%me_bsize;
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_me_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_me_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_me_index_en_BITEND, 1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_me_index_ADDR, FRC_TOP__KPHASE__kphase_force_in_me_index_BITSTART, FRC_TOP__KPHASE__kphase_force_in_me_index_BITEND, me_wptr_tmp);
				if(out_fmRate <= _PQL_OUT_60HZ){
					WriteRegister(FRC_TOP__KPHASE__kphase_force_in_me2_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_me2_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_me2_index_en_BITEND, 1);
					WriteRegister(FRC_TOP__KPHASE__kphase_force_in_me2_index_ADDR, FRC_TOP__KPHASE__kphase_force_in_me2_index_BITSTART, FRC_TOP__KPHASE__kphase_force_in_me2_index_BITEND, me_wptr_tmp);
				}
			}
			else{
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_me_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_me_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_me_index_en_BITEND, 0);
				if(out_fmRate <= _PQL_OUT_60HZ){
					WriteRegister(FRC_TOP__KPHASE__kphase_force_in_me2_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_me2_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_me2_index_en_BITEND, 0);
				}
			}
			// me1_read
			if(me1_rd_i_oft > 0 || me1_rd_p_oft > 0){
				me1_rptr_i_tmp = (me_write + me1_rd_i_oft)%me_bsize;
				me1_rptr_p_tmp = (me_write + me1_rd_p_oft)%me_bsize;
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me_dts_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_me_dts_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me_dts_index_en_BITEND, 1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me_dts_i_index_ADDR, FRC_TOP__KPHASE__kphase_force_me_dts_i_index_BITSTART, FRC_TOP__KPHASE__kphase_force_me_dts_i_index_BITEND, me1_rptr_i_tmp);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me_dts_p_index_ADDR, FRC_TOP__KPHASE__kphase_force_me_dts_p_index_BITSTART, FRC_TOP__KPHASE__kphase_force_me_dts_p_index_BITEND, me1_rptr_p_tmp);
			}
			else
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me_dts_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_me_dts_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me_dts_index_en_BITEND, 0);
			// me2_read
			if(me2_rd_i_oft > 0 || me2_rd_p_oft > 0){
				me2_rptr_i_tmp = (me_write + me2_rd_i_oft)%me_bsize;
				me2_rptr_p_tmp = (me_write + me2_rd_p_oft)%me_bsize;
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_BITEND, 1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_lbme_i_index_ADDR, FRC_TOP__KPHASE__kphase_force_me2_lbme_i_index_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_lbme_i_index_BITEND, me2_rptr_i_tmp);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_lbme_p_index_ADDR, FRC_TOP__KPHASE__kphase_force_me2_lbme_p_index_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_lbme_p_index_BITEND, me2_rptr_p_tmp);
			}
			else
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_BITEND, 0);
			// mc_write
			if(mc_wrt_oft > 0){
				mc_wptr_tmp = (mc_write + mc_wrt_oft -1)%mc_bsize;
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_mc_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITEND, 1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_mc_index_ADDR, FRC_TOP__KPHASE__kphase_force_in_mc_index_BITSTART, FRC_TOP__KPHASE__kphase_force_in_mc_index_BITEND, mc_wptr_tmp);
			}
			else
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_mc_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITEND, 0);
			// mc_read
			if(mc_rd_i_oft > 0 || mc_rd_p_oft > 0){
				mc_rptr_i_tmp = (mc_write + mc_rd_i_oft)%mc_bsize;
				mc_rptr_p_tmp = (mc_write + mc_rd_p_oft)%mc_bsize;
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITEND, 1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_cts_i_index_ADDR, FRC_TOP__KPHASE__kphase_force_mc_cts_i_index_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_cts_i_index_BITEND, mc_rptr_i_tmp);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_cts_p_index_ADDR, FRC_TOP__KPHASE__kphase_force_mc_cts_p_index_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_cts_p_index_BITEND, mc_rptr_p_tmp);
			}
			else
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITEND, 0);
			// phase
			if(me_phase_oft > 0 || mc_phase_oft > 0){
				mc_phase_oft = (((mc_phase_oft*dejudder_lvl)>>7) < 1) ? 1 : ((mc_phase_oft*dejudder_lvl)>>7);
				if((cadence_change_case == _CASE_11_TO_32_TYPE1) && (out_fmRate > _PQL_OUT_60HZ) && (frm_ctrl_cnt < 6)){
					if(mc_phase_oft < mc_phase+1){
						mc_phase_oft = mc_phase+1;
					}
				}
				me_phase_oft = (((mc_phase_oft+1)>>1) < 1) ? 1 : ((mc_phase_oft+1)>>1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_phase_en_ADDR, FRC_TOP__KPHASE__kphase_force_me2_phase_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_phase_en_BITEND, 1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_phase_ADDR, FRC_TOP__KPHASE__kphase_force_me2_phase_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_phase_BITEND, me_phase_oft-1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_phase_en_ADDR, FRC_TOP__KPHASE__kphase_force_mc_phase_en_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_phase_en_BITEND, 1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_phase_ADDR, FRC_TOP__KPHASE__kphase_force_mc_phase_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_phase_BITEND, mc_phase_oft-1);
			}
			else{
				WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_phase_en_ADDR, FRC_TOP__KPHASE__kphase_force_me2_phase_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_phase_en_BITEND, 0);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_phase_en_ADDR, FRC_TOP__KPHASE__kphase_force_mc_phase_en_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_phase_en_BITEND, 0);
			}

			frm_ctrl_cnt++;

			if((log_en) && (me_wrt_oft > 0 || me1_rd_i_oft > 0 || me1_rd_p_oft > 0 || me2_rd_i_oft > 0 || me2_rd_p_oft > 0 || mc_wrt_oft > 0 || mc_rd_i_oft > 0 || mc_rd_p_oft > 0 || me_phase_oft > 0 || mc_phase_oft > 0))
			{
				pr_notice("[phasetable][%s][CaseNum,%d,][,%d,][,%d,%d,%d,%d,%d,][,%d,%d,%d,][,%d,%d,]\n\r", __FUNCTION__, cadence_change_case, frm_ctrl_cnt,
					me_wptr_tmp, me1_rptr_i_tmp, me1_rptr_p_tmp, me2_rptr_i_tmp, me2_rptr_p_tmp, mc_wptr_tmp, mc_rptr_i_tmp, mc_rptr_p_tmp, me_phase_oft, mc_phase_oft);
			}
			#endif
		}
		else{
			WriteRegister(FRC_TOP__KPHASE__kphase_force_in_me_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_me_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_me_index_en_BITEND, 0x0);
			if(out_fmRate <= _PQL_OUT_60HZ){
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_me2_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_me2_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_me2_index_en_BITEND, 0);
			}
			WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_BITEND, 0x0);
			WriteRegister(FRC_TOP__KPHASE__kphase_force_me_dts_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_me_dts_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me_dts_index_en_BITEND, 0x0);

			WriteRegister(FRC_TOP__KPHASE__kphase_force_in_mc_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITEND, 0x0);
			WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITEND, 0x0);

			WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_phase_en_ADDR, FRC_TOP__KPHASE__kphase_force_me2_phase_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_phase_en_BITEND, 0x0);
			WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_phase_en_ADDR, FRC_TOP__KPHASE__kphase_force_mc_phase_en_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_phase_en_BITEND, 0x0);
			//mc_in_frame_hold_func_en
			WriteRegister(FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_ADDR, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITSTART, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITEND, 0x9);
			pr_notice("[phasetable][%s][CaseNum,%d,][,%d,]\n\r", __FUNCTION__, cadence_change_case, frm_ctrl_cnt);
			cadence_change_case = _CASE_NULL;
			frm_ctrl_cnt = 0;
		}
		Idx_Lock_state = 1;
	}
	else{
		if(Idx_Lock_state == 1){
			WriteRegister(FRC_TOP__KPHASE__kphase_force_in_me_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_me_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_me_index_en_BITEND, 0x0);
			if(out_fmRate <= _PQL_OUT_60HZ){
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_me2_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_me2_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_me2_index_en_BITEND, 0);
			}
			WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_lbme_index_en_BITEND, 0x0);
			WriteRegister(FRC_TOP__KPHASE__kphase_force_me_dts_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_me_dts_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me_dts_index_en_BITEND, 0x0);

			WriteRegister(FRC_TOP__KPHASE__kphase_force_in_mc_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITEND, 0x0);
			WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITEND, 0x0);

			WriteRegister(FRC_TOP__KPHASE__kphase_force_me2_phase_en_ADDR, FRC_TOP__KPHASE__kphase_force_me2_phase_en_BITSTART, FRC_TOP__KPHASE__kphase_force_me2_phase_en_BITEND, 0x0);
			WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_phase_en_ADDR, FRC_TOP__KPHASE__kphase_force_mc_phase_en_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_phase_en_BITEND, 0x0);
			//mc_in_frame_hold_func_en
			WriteRegister(FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_ADDR, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITSTART, FRC_TOP__KPHASE__kphase_in_frame_hold_func_en_BITEND, 0x9);
			cadence_change_case = _CASE_NULL;
			frm_ctrl_cnt = 0;
		}
		Idx_Lock_state = 0;
	}

	cadence_pre = cur_cadence;

	if(log_en){
		pr_notice("[phasetable][%s][,%d,%d,%d,][,%d,%d,][mixed_mode,%d,][ME1_idx,%d,%d,%d,ME2_idx,%d,%d,][MC_idx,%d,%d,%d,][phase,%d,%d,][Motion,%d,][Seq,%d,][FrameRate,%d,][Time,%d,]\n\r", __FUNCTION__,
			s_pContext->_output_filmDetectctrl.u8_det_cadence_Id[_FILM_ALL], cur_cadence, cur_cadence_out,
			s_pContext->_output_filmDetectctrl.u8_phT_phase_Idx_out[_FILM_ALL], s_pContext->_output_filmDetectctrl.u8_phase_Idx_tmp[_FILM_ALL],
			s_pContext->_output_filmDetectctrl.u1_mixMode,
			me_write, me1_read_i, me1_read_p, me2_read_i, me2_read_p,
			mc_write, mc_read_i, mc_read_p, me2_phase, mc_phase,
			s_pContext->_output_read_comreg.u27_ipme_aMot_rb, s_pContext->_output_filmDetectctrl.u32_Mot_sequence[_FILM_ALL]&0x1, rtd_inl(0xB80282e4), rtd_inl(0xB801B6B8));
	}
}
unsigned char MEMC_Freeze_flag = 0;
VOID MEMC_Lib_set_memc_Freeze_flag(unsigned char u1_enable)
{
	MEMC_Freeze_flag = u1_enable;
}
unsigned char MEMC_Lib_get_memc_Freeze_flag(VOID)
{
	return MEMC_Freeze_flag;
}
void MEMC_Lib_Freeze(unsigned char enable)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();
	unsigned long flags;
	UINT32 mc_write = 0, mc_read_i = 0, mc_read_p = 0;
	static UBYTE Freeze_status = 0;
	UBYTE pulldown_mode = 0;
	FRC_CADENCE_ID u8_cadence_id = 0;

	ReadRegister(FRC_TOP__KPHASE__in_mc_index_ADDR, FRC_TOP__KPHASE__in_mc_index_BITSTART, FRC_TOP__KPHASE__in_mc_index_BITEND, &mc_write);
	ReadRegister(FRC_TOP__KPHASE__lbmc_i_index_ADDR, FRC_TOP__KPHASE__lbmc_i_index_BITSTART, FRC_TOP__KPHASE__lbmc_i_index_BITEND, &mc_read_i);
	ReadRegister(FRC_TOP__KPHASE__lbmc_p_index_ADDR, FRC_TOP__KPHASE__lbmc_p_index_BITSTART, FRC_TOP__KPHASE__lbmc_p_index_BITEND, &mc_read_p);
	pulldown_mode = s_pContext->_external_data.u8_pulldown_mode;
	u8_cadence_id = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];
	pr_notice("[%s][pulldown_mode,%d,][u8_cadence_id,%d,]\n\r", __FUNCTION__, pulldown_mode, u8_cadence_id);

#if 1
	if(enable != Freeze_status)
	{
	printk(KERN_EMERG "\r#### will test func:%s line:%d enable:%d Freeze_status:%d ####\r\n",__FUNCTION__,__LINE__, enable, Freeze_status);
		spin_lock_irqsave(&memc_freeze_ctrl_spinlock, flags);
		if(enable == 1){
			if(Freeze_status == 0){
				WriteRegister(FRC_TOP__MC_DMA__MC_LF_DMA_WR_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_LF_DMA_WR_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_LF_DMA_WR_DMA_enable_BITEND, 0);
				WriteRegister(FRC_TOP__MC_DMA__MC_HF_DMA_WR_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_HF_DMA_WR_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_HF_DMA_WR_DMA_enable_BITEND, 0);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_mc_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITEND, 1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_mc_index_ADDR, FRC_TOP__KPHASE__kphase_force_in_mc_index_BITSTART, FRC_TOP__KPHASE__kphase_force_in_mc_index_BITEND, mc_write);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITEND, 1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_cts_i_index_ADDR, FRC_TOP__KPHASE__kphase_force_mc_cts_i_index_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_cts_i_index_BITEND, mc_read_i);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_cts_p_index_ADDR, FRC_TOP__KPHASE__kphase_force_mc_cts_p_index_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_cts_p_index_BITEND, mc_read_p);

				// set PC mode I frame
				if(pulldown_mode == _PQL_IN24HZ_TRUMOTOFF_CINEMAOFF ||
					((u8_cadence_id == _CAD_32 || u8_cadence_id == _CAD_2224) && pulldown_mode == _PQL_IN60HZ_TRUMOTOFF_CINEMAOFF)){
					MEMC_LibSetMCBlend(2);
				}
				else{
					MEMC_LibSetMCBlend(1);
				}
				MEMC_Lib_set_memc_Freeze_flag(1);
			}
			Freeze_status = 1;
		}
		else{
			if(Freeze_status == 1){
				WriteRegister(FRC_TOP__MC_DMA__MC_LF_DMA_WR_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_LF_DMA_WR_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_LF_DMA_WR_DMA_enable_BITEND, 1);
				WriteRegister(FRC_TOP__MC_DMA__MC_HF_DMA_WR_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_HF_DMA_WR_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_HF_DMA_WR_DMA_enable_BITEND, 1);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_in_mc_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_in_mc_index_en_BITEND, 0);
				WriteRegister(FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_ADDR, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITSTART, FRC_TOP__KPHASE__kphase_force_mc_cts_index_en_BITEND, 0x0);
				if((MEMC_LibGetMEMC_PCModeEnable()) || (u8_MEMCMode == 0) || (u8_MEMCMode == 4 && dejudder == 0)){
					if(pulldown_mode == _PQL_IN24HZ_TRUMOTOFF_CINEMAOFF ||
						((u8_cadence_id == _CAD_32 || u8_cadence_id == _CAD_2224) && pulldown_mode == _PQL_IN60HZ_TRUMOTOFF_CINEMAOFF)){
						MEMC_LibSetMCBlend(2);
					}
					else{
						MEMC_LibSetMCBlend(1);
					}
				}
				else{
					MEMC_LibSetMCBlend(0);
				}
				MEMC_Lib_set_memc_Freeze_flag(0);
			}
			Freeze_status = 0;
		}
		spin_unlock_irqrestore(&memc_freeze_ctrl_spinlock, flags);
	}
#endif
}

VOID MEMC_Lib_SetLineMode(unsigned char u1_enable)
{
	pr_notice("[%s][%d]", __FUNCTION__, u1_enable);
	if(u1_enable){ // line mode
		//db_off
		MEMC_LibSet_PQC_DB_en(0);
		MEMC_LibSet_MCDMA_DB_en(0);

		// disable read DMA
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_I_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_LF_I_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_LF_I_DMA_RD_DMA_enable_BITEND, 0x0);
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_BITEND, 0x0);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_I_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_HF_I_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_HF_I_DMA_RD_DMA_enable_BITEND, 0x0);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_BITEND, 0x0);

		//LFL
		//MC_LFL_PQ_CMP_PAIR
		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_cmp_line_sum_bit_ADDR, FRC_TOP__pqc_pqdc__MC_LF_cmp_line_sum_bit_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_cmp_line_sum_bit_BITEND, 0x110);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_decmp_line_sum_bit_ADDR, FRC_TOP__pqc_pqdc__MC_LF_decmp_line_sum_bit_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_decmp_line_sum_bit_BITEND, 0x110);

		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_cmp_line_mode_ADDR, FRC_TOP__pqc_pqdc__MC_LF_cmp_line_mode_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_cmp_line_mode_BITEND, 0x1);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_decmp_line_mode_ADDR, FRC_TOP__pqc_pqdc__MC_LF_decmp_line_mode_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_decmp_line_mode_BITEND, 0x1);
		//rtd_maskl(0xb8099204,0x0000ffdf, 0x01100020);//pqc
		//rtd_maskl(0xb8099804,0x0000ffdf, 0x01100020);//pqdc
		//
		//HF
		//MC_LFH_PQ_CMP_PAIR
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_cmp_line_sum_bit_ADDR, FRC_TOP__pqc_pqdc__MC_HF_cmp_line_sum_bit_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_cmp_line_sum_bit_BITEND, 0x12e);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_line_sum_bit_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_line_sum_bit_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_line_sum_bit_BITEND, 0x12e);

		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_cmp_line_mode_ADDR, FRC_TOP__pqc_pqdc__MC_HF_cmp_line_mode_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_cmp_line_mode_BITEND, 0x1);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_line_mode_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_line_mode_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_line_mode_BITEND, 0x1);
		//rtd_maskl(0xb8099284,0x0000ffdf, 0x012e0020);//pqc                  
		//rtd_maskl(0xb8099884,0x0000ffdf, 0x012e0020);//pqdc                  

		//dma lfl
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_WDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_LF_WDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_LF_WDMA_remain_BITEND, 32);
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_WDMA_num_ADDR, FRC_TOP__MC_DMA__MC_LF_WDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_LF_WDMA_num_BITEND, 4);

		WriteRegister(FRC_TOP__MC_DMA__MC_LF_I_RDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_LF_I_RDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_LF_I_RDMA_remain_BITEND, 32);
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_I_RDMA_num_ADDR, FRC_TOP__MC_DMA__MC_LF_I_RDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_LF_I_RDMA_num_BITEND, 4);

		WriteRegister(FRC_TOP__MC_DMA__MC_LF_P_RDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_LF_P_RDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_LF_P_RDMA_remain_BITEND, 32);
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_P_RDMA_num_ADDR, FRC_TOP__MC_DMA__MC_LF_P_RDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_LF_P_RDMA_num_BITEND, 4);

		WriteRegister(FRC_TOP__MC_DMA__MC_LF_WDMA_Line_offset_addr_ADDR, FRC_TOP__MC_DMA__MC_LF_WDMA_Line_offset_addr_BITSTART, FRC_TOP__MC_DMA__MC_LF_WDMA_Line_offset_addr_BITEND, 0x0000110);
		//rtd_maskl(0xb8099410, 0x00000000, 0x00047840);
		//rtd_maskl(0xb809ae10, 0x00000000, 0x00047840);
		//rtd_maskl(0xb809ae50, 0x00000000, 0x00047840);
		//rtd_maskl(0xb8099454, 0x00000000, 0x00001100);
		//dma hf
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_WDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_HF_WDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_HF_WDMA_remain_BITEND, 2);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_WDMA_num_ADDR, FRC_TOP__MC_DMA__MC_HF_WDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_HF_WDMA_num_BITEND, 5);

		WriteRegister(FRC_TOP__MC_DMA__MC_HF_I_RDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_HF_I_RDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_HF_I_RDMA_remain_BITEND, 2);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_I_RDMA_num_ADDR, FRC_TOP__MC_DMA__MC_HF_I_RDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_HF_I_RDMA_num_BITEND, 5);

		WriteRegister(FRC_TOP__MC_DMA__MC_HF_P_RDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_HF_P_RDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_HF_P_RDMA_remain_BITEND, 2);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_P_RDMA_num_ADDR, FRC_TOP__MC_DMA__MC_HF_P_RDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_HF_P_RDMA_num_BITEND, 5);

		WriteRegister(FRC_TOP__MC_DMA__MC_HF_WDMA_Line_offset_addr_ADDR, FRC_TOP__MC_DMA__MC_HF_WDMA_Line_offset_addr_BITSTART, FRC_TOP__MC_DMA__MC_HF_WDMA_Line_offset_addr_BITEND, 0x000012e);
		//rtd_maskl(0xb8099480, 0x00000000, 0x00057804);
		//rtd_maskl(0xb809ae30, 0x00000000, 0x00057804);
		//rtd_maskl(0xb809ae70, 0x00000000, 0x00057804);
		//rtd_maskl(0xb80994c4, 0x00000000, 0x000012e0);
		//MEMC_LibSet_PQC_DB_apply();
		//MEMC_LibSet_MCDMA_DB_apply();
		MEMC_LibSet_PQC_DB_en(1);
		MEMC_LibSet_MCDMA_DB_en(1);
	}
	else{ // frame mode
		//db_off
		MEMC_LibSet_PQC_DB_en(0);
		MEMC_LibSet_MCDMA_DB_en(0);

		// disable read DMA
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_I_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_LF_I_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_LF_I_DMA_RD_DMA_enable_BITEND, 0x0);
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_BITEND, 0x0);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_I_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_HF_I_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_HF_I_DMA_RD_DMA_enable_BITEND, 0x0);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_BITEND, 0x0);

		//LFL
		//MC_LFL_PQ_CMP_PAIR
		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_cmp_line_sum_bit_ADDR, FRC_TOP__pqc_pqdc__MC_LF_cmp_line_sum_bit_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_cmp_line_sum_bit_BITEND, 0x110);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_decmp_line_sum_bit_ADDR, FRC_TOP__pqc_pqdc__MC_LF_decmp_line_sum_bit_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_decmp_line_sum_bit_BITEND, 0x110);

		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_cmp_line_mode_ADDR, FRC_TOP__pqc_pqdc__MC_LF_cmp_line_mode_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_cmp_line_mode_BITEND, 0x0);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_decmp_line_mode_ADDR, FRC_TOP__pqc_pqdc__MC_LF_decmp_line_mode_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_decmp_line_mode_BITEND, 0x0);

		//HF
		//MC_LFH_PQ_CMP_PAIR
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_cmp_line_sum_bit_ADDR, FRC_TOP__pqc_pqdc__MC_HF_cmp_line_sum_bit_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_cmp_line_sum_bit_BITEND, 0x12e);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_line_sum_bit_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_line_sum_bit_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_line_sum_bit_BITEND, 0x12e);

		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_cmp_line_mode_ADDR, FRC_TOP__pqc_pqdc__MC_HF_cmp_line_mode_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_cmp_line_mode_BITEND, 0x0);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_line_mode_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_line_mode_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_line_mode_BITEND, 0x0);

		//dma lfl
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_WDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_LF_WDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_LF_WDMA_remain_BITEND, 32);
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_WDMA_num_ADDR, FRC_TOP__MC_DMA__MC_LF_WDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_LF_WDMA_num_BITEND, 4);

		WriteRegister(FRC_TOP__MC_DMA__MC_LF_I_RDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_LF_I_RDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_LF_I_RDMA_remain_BITEND, 32);
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_I_RDMA_num_ADDR, FRC_TOP__MC_DMA__MC_LF_I_RDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_LF_I_RDMA_num_BITEND, 4);

		WriteRegister(FRC_TOP__MC_DMA__MC_LF_P_RDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_LF_P_RDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_LF_P_RDMA_remain_BITEND, 32);
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_P_RDMA_num_ADDR, FRC_TOP__MC_DMA__MC_LF_P_RDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_LF_P_RDMA_num_BITEND, 4);

		WriteRegister(FRC_TOP__MC_DMA__MC_LF_WDMA_Line_offset_addr_ADDR, FRC_TOP__MC_DMA__MC_LF_WDMA_Line_offset_addr_BITSTART, FRC_TOP__MC_DMA__MC_LF_WDMA_Line_offset_addr_BITEND, 0x0000110);

		//dma hf
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_WDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_HF_WDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_HF_WDMA_remain_BITEND, 2);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_WDMA_num_ADDR, FRC_TOP__MC_DMA__MC_HF_WDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_HF_WDMA_num_BITEND, 5);

		WriteRegister(FRC_TOP__MC_DMA__MC_HF_I_RDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_HF_I_RDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_HF_I_RDMA_remain_BITEND, 2);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_I_RDMA_num_ADDR, FRC_TOP__MC_DMA__MC_HF_I_RDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_HF_I_RDMA_num_BITEND, 5);

		WriteRegister(FRC_TOP__MC_DMA__MC_HF_P_RDMA_remain_ADDR, FRC_TOP__MC_DMA__MC_HF_P_RDMA_remain_BITSTART, FRC_TOP__MC_DMA__MC_HF_P_RDMA_remain_BITEND, 2);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_P_RDMA_num_ADDR, FRC_TOP__MC_DMA__MC_HF_P_RDMA_num_BITSTART, FRC_TOP__MC_DMA__MC_HF_P_RDMA_num_BITEND, 5);

		WriteRegister(FRC_TOP__MC_DMA__MC_HF_WDMA_Line_offset_addr_ADDR, FRC_TOP__MC_DMA__MC_HF_WDMA_Line_offset_addr_BITSTART, FRC_TOP__MC_DMA__MC_HF_WDMA_Line_offset_addr_BITEND, 0x000012e);
		//MEMC_LibSet_PQC_DB_apply();
		//MEMC_LibSet_MCDMA_DB_apply();
		MEMC_LibSet_PQC_DB_en(1);
		MEMC_LibSet_MCDMA_DB_en(1);
	}
}

unsigned char g_LineMode_flag = 0;
VOID MEMC_Lib_set_LineMode_flag(unsigned char u1_enable){
	//pr_notice("[%s][%d]", __FUNCTION__, u1_enable);
	g_LineMode_flag = u1_enable;
}

unsigned char MEMC_Lib_get_LineMode_flag(VOID){
	//pr_notice("[%s][%d]", __FUNCTION__, g_LineMode_flag);
	return g_LineMode_flag;
}

VOID MEMC_Lib_LoadBringUpScript_HDF(VOID)
{
#if 1
rtd_outl(0xb8099000,0x04650898);
rtd_outl(0xb8099004,0x04380780);
rtd_outl(0xb8099008,0x2d460810);
rtd_outl(0xb809900c,0x00000050);
rtd_outl(0xb8099010,0x0fffffff);
rtd_outl(0xb8099014,0x0000000a);
//rtd_outl(0xb8099018,0x000a3284); //skyredd, 0x0200403f
rtd_outl(0xb809901c,0x00000000);
rtd_outl(0xb8099020,0x48438780);
rtd_outl(0xb8099024,0x00000000);
rtd_outl(0xb8099028,0x00000000);
rtd_outl(0xb809902c,0x00000000);
rtd_outl(0xb8099030,0x0021c08c);
rtd_outl(0xb8099034,0x000003c0);
rtd_outl(0xb8099038,0x00000000);
rtd_outl(0xb809903c,0x00403fc0);
rtd_outl(0xb8099040,0x00438780);
rtd_outl(0xb8099044,0x00000000);
rtd_outl(0xb8099048,0x00000000);
rtd_outl(0xb809904c,0x00000000);
rtd_outl(0xb8099050,0x00000000);
rtd_outl(0xb8099054,0x00000000);
rtd_outl(0xb8099058,0x00000000);
rtd_outl(0xb809905c,0x00000000);
rtd_outl(0xb80990a0,0x00000000);
rtd_outl(0xb80990a4,0x00000000);
rtd_outl(0xb80990a8,0x00000000);
rtd_outl(0xb80990ac,0x00000000);
rtd_outl(0xb80990b0,0x00000000);
rtd_outl(0xb80990b4,0x00000000);
rtd_outl(0xb80990b8,0x00000000);
rtd_outl(0xb80990bc,0xfa31fb4c);
rtd_outl(0xb80990c0,0x1ef79df5);
rtd_outl(0xb80990c4,0x1f67e5f5);
rtd_outl(0xb80990c8,0x0007d5f5);
rtd_outl(0xb80990cc,0x1f37c9f6);
rtd_outl(0xb80990d0,0x1f67e5f0);
rtd_outl(0xb80990d4,0x0007d5f6);
rtd_outl(0xb80990d8,0x1f67d9f6);
rtd_outl(0xb80990dc,0x1f67d5e6);
rtd_outl(0xb80990e0,0x0007d5f5);
rtd_outl(0xb80990e4,0x1f67d9f6);
rtd_outl(0xb80990e8,0x1f67e9e7);
rtd_outl(0xb80990ec,0x0007d5f5);
rtd_outl(0xb80990f0,0x00000000);
rtd_outl(0xb80990f4,0x00000000);
rtd_outl(0xb80990f8,0x05000000);
rtd_outl(0xb80990fc,0x77000000);
rtd_outl(0xb8099100,0x8430009e);
rtd_outl(0xb8099104,0x02204f04);
//rtd_outl(0xb8099108,0x04780870);
rtd_outl(0xb8099108,0x06780870);
rtd_outl(0xb809910c,0x000420f0);
rtd_outl(0xb8099110,0x08700780);
rtd_outl(0xb8099114,0x08ca0898);
rtd_outl(0xb8099118,0x402400fc);
rtd_outl(0xb809911c,0x00fc0024);
rtd_outl(0xb8099120,0x00000700);
rtd_outl(0xb8099124,0x00000000);
rtd_outl(0xb8099128,0x00af4cfd);
rtd_outl(0xb809912c,0x87644439);
rtd_outl(0xb8099130,0x00000000);
rtd_outl(0xb8099134,0x00000000);
rtd_outl(0xb8099138,0x00000000);
rtd_outl(0xb809913c,0x00000000);
rtd_outl(0xb8099140,0x00000000);
rtd_outl(0xb8099144,0x00000000);
rtd_outl(0xb8099148,0x00000000);
rtd_outl(0xb809914c,0x00000000);
rtd_outl(0xb8099150,0x20320a50);
rtd_outl(0xb8099154,0x2012109d);
rtd_outl(0xb8099158,0x3ffffc00);
rtd_outl(0xb809915c,0x00000000);
rtd_outl(0xb8099160,0x2501fa40);
rtd_outl(0xb8099164,0x00000000);
rtd_outl(0xb8099168,0x00000000);
rtd_outl(0xb809916c,0x00000000);
rtd_outl(0xb8099170,0x00000014);
rtd_outl(0xb8099174,0x06025aa0);
rtd_outl(0xb8099178,0x00000032);
rtd_outl(0xb809917c,0x00000000);
rtd_outl(0xb8099180,0x00000000);
rtd_outl(0xb8099184,0x00000000);
rtd_outl(0xb8099188,0x00000000);
rtd_outl(0xb809918c,0x00000000);
rtd_outl(0xb8099190,0x00000000);
rtd_outl(0xb8099194,0x0d000000);
rtd_outl(0xb8099198,0x00000000);
rtd_outl(0xb809919c,0x00000000);
rtd_outl(0xb80991a0,0x00000000);
rtd_outl(0xb80991a4,0x00000000);
rtd_outl(0xb80991a8,0x00000000);
rtd_outl(0xb80991ac,0x00000000);
rtd_outl(0xb80991b0,0x0d000000);
//rtd_outl(0xb80991b4,0x09030900);
rtd_outl(0xb80991b4,0x01030900);// mute_vs=0
rtd_outl(0xb80991b8,0x00878868);
rtd_outl(0xb80991bc,0x00000000);
rtd_outl(0xb80991c0,0x00000000);
rtd_outl(0xb80991c4,0x00000000);
rtd_outl(0xb80991c8,0x00000000);
rtd_outl(0xb80991cc,0x00000000);
rtd_outl(0xb80991d0,0x00000000);
rtd_outl(0xb80991d4,0x00000000);
rtd_outl(0xb80991d8,0x00000000);
rtd_outl(0xb80991dc,0x00000000);
rtd_outl(0xb80991e0,0x01870780);
rtd_outl(0xb80991e4,0x88788778);
rtd_outl(0xb80991e8,0x00000000);
rtd_outl(0xb80991ec,0x00000000);
rtd_outl(0xb80991f0,0x87078000);
rtd_outl(0xb80991f4,0x00000fff);
rtd_outl(0xb80991f8,0x00000000);
rtd_outl(0xb80991fc,0x00000000);
// rtd_outl(0xb8099200,0x00201f06);
// rtd_outl(0xb8099204,0x04380788);
// rtd_outl(0xb8099208,0x10000100);
// rtd_outl(0xb809920c,0x11111111);
// rtd_outl(0xb8099210,0x11111111);
// rtd_outl(0xb8099214,0x004d0045);
// rtd_outl(0xb8099218,0x02000200);
// rtd_outl(0xb809921c,0x02000200);
// rtd_outl(0xb8099220,0xf4f0f4f0);
// rtd_outl(0xb8099224,0xfcf8fcf8);
// rtd_outl(0xb8099228,0x04000400);
// rtd_outl(0xb809922c,0x0c080c08);
// rtd_outl(0xb8099230,0x08880777);
// rtd_outl(0xb8099234,0x07770777);
// rtd_outl(0xb8099238,0x06670667);
// rtd_outl(0xb809923c,0x06660666);
// rtd_outl(0xb8099240,0x05560556);
// rtd_outl(0xb8099244,0x05550555);
// rtd_outl(0xb8099248,0x04450445);
// rtd_outl(0xb809924c,0x04440444);
// rtd_outl(0xb8099250,0x00000111);
// rtd_outl(0xb8099254,0x01110222);
// rtd_outl(0xb8099258,0x02210222);
// rtd_outl(0xb809925c,0x02220222);
// rtd_outl(0xb8099260,0x03320332);
// rtd_outl(0xb8099264,0x03330333);
// rtd_outl(0xb8099268,0x04430443);
// rtd_outl(0xb809926c,0x04440444);
// rtd_outl(0xb8099270,0x00000222);
// rtd_outl(0xb8099274,0x02210332);
// rtd_outl(0xb8099278,0x03320332);
// rtd_outl(0xb809927c,0x03330333);
// rtd_outl(0xb8099280,0x03330333);
// rtd_outl(0xb8099284,0x03330333);
// rtd_outl(0xb8099288,0x04430443);
// rtd_outl(0xb809928c,0x04440444);
// rtd_outl(0xb8099290,0x00000333);
// rtd_outl(0xb8099294,0x03320333);
// rtd_outl(0xb8099298,0x03330333);
// rtd_outl(0xb809929c,0x03330333);
// rtd_outl(0xb80992a0,0x04430443);
// rtd_outl(0xb80992a4,0x04440444);
// rtd_outl(0xb80992a8,0x05540554);
// rtd_outl(0xb80992ac,0x05550555);
// rtd_outl(0xb80992b0,0x00000000);
// rtd_outl(0xb80992b4,0x00000000);
// rtd_outl(0xb80992b8,0x00000000);
// rtd_outl(0xb80992bc,0x00000000);
// rtd_outl(0xb80992c0,0x00000000);
// rtd_outl(0xb80992c4,0x20201010);
// rtd_outl(0xb80992c8,0x20201010);
// rtd_outl(0xb80992cc,0x00000000);
// rtd_outl(0xb80992d0,0x00000000);
// rtd_outl(0xb80992d4,0x00000000);
// rtd_outl(0xb80992d8,0x00000000);
// rtd_outl(0xb80992dc,0x00000000);
// rtd_outl(0xb80992e0,0x00000000);
// rtd_outl(0xb80992e4,0x00000000);
// rtd_outl(0xb80992e8,0x00000000);
// rtd_outl(0xb80992ec,0x00000000);
// rtd_outl(0xb80992f0,0x00000000);
// rtd_outl(0xb80992f4,0x00000000);
// rtd_outl(0xb80992f8,0x00000000);
// rtd_outl(0xb80992fc,0x00000000);
// rtd_outl(0xb8099300,0x00000000);
// rtd_outl(0xb8099304,0x0012c12c);
// rtd_outl(0xb8099308,0x00258258);
// rtd_outl(0xb809930c,0x0012c12c);
// rtd_outl(0xb8099310,0x00258258);
// rtd_outl(0xb8099314,0x0000025a);
// rtd_outl(0xb8099318,0x00000000);
// rtd_outl(0xb809931c,0x00000000);
// rtd_outl(0xb8099320,0x00000000);
// rtd_outl(0xb8099324,0x0012c12c);
// rtd_outl(0xb8099328,0x00258258);
// rtd_outl(0xb809932c,0x00000000);
// rtd_outl(0xb8099330,0x00000000);
// rtd_outl(0xb8099334,0x00000000);
// rtd_outl(0xb8099338,0x00000000);
// rtd_outl(0xb809933c,0x00000000);
// rtd_outl(0xb8099340,0x00000000);
// rtd_outl(0xb8099344,0x00000000);
// rtd_outl(0xb8099348,0x00000000);
// rtd_outl(0xb809934c,0x00000000);
// rtd_outl(0xb8099350,0x00000000);
// rtd_outl(0xb8099354,0x00000000);
// rtd_outl(0xb8099358,0x00000000);
// rtd_outl(0xb809935c,0x00000000);
// rtd_outl(0xb8099360,0x00000000);
// rtd_outl(0xb8099364,0x0000e0e0);
// rtd_outl(0xb8099368,0x00000000);
// rtd_outl(0xb809936c,0x00000000);
// rtd_outl(0xb8099370,0x00000000);
// rtd_outl(0xb8099374,0x03cf3cf0);
// rtd_outl(0xb8099378,0x03cf3cf0);
// rtd_outl(0xb809937c,0x004372cd);
// rtd_outl(0xb8099380,0x03cf3cf0);
// rtd_outl(0xb8099384,0x03cf3cf0);
// rtd_outl(0xb8099388,0x00437251);
// rtd_outl(0xb809938c,0x00000000);
// rtd_outl(0xb8099390,0x00000000);
// rtd_outl(0xb8099394,0x00000000);
// rtd_outl(0xb8099398,0x00000000);
// rtd_outl(0xb809939c,0x00000000);
// rtd_outl(0xb80993a0,0x00000000);
// rtd_outl(0xb80993a4,0x00000000);
// rtd_outl(0xb80993a8,0x00000000);
// rtd_outl(0xb80993ac,0x00000000);
// rtd_outl(0xb80993b0,0x00000000);
// rtd_outl(0xb80993b4,0x00000000);
// rtd_outl(0xb80993b8,0x00000000);
// rtd_outl(0xb80993bc,0x00000000);
// rtd_outl(0xb80993c0,0x00000000);
// rtd_outl(0xb80993c4,0x00000000);
// rtd_outl(0xb80993c8,0x00000000);
// rtd_outl(0xb80993cc,0x00000000);
// rtd_outl(0xb80993d0,0x00000000);
// rtd_outl(0xb80993d4,0x00000000);
// rtd_outl(0xb80993d8,0x00000000);
// rtd_outl(0xb80993dc,0x00000000);
// rtd_outl(0xb80993e0,0x00000000);
// rtd_outl(0xb80993e4,0x00000000);
// rtd_outl(0xb80993e8,0x00000000);
// rtd_outl(0xb80993ec,0x00000000);
// rtd_outl(0xb80993f0,0x00000000);
// rtd_outl(0xb80993f4,0x00000000);
// rtd_outl(0xb80993f8,0x00000000);
// rtd_outl(0xb80993fc,0x0000003f);
// rtd_outl(0xb8099400,0x0238c800);
// rtd_outl(0xb8099404,0x028d5000);
// rtd_outl(0xb8099408,0x02e1d800);
// rtd_outl(0xb809940c,0x03366000);
// rtd_outl(0xb8099410,0x038ae800);
// rtd_outl(0xb8099414,0x03df7000);
// rtd_outl(0xb8099418,0x028d2800);
// rtd_outl(0xb809941c,0x02e1b000);
// rtd_outl(0xb8099420,0x03363800);
// rtd_outl(0xb8099424,0x038ac000);
// rtd_outl(0xb8099428,0x03df4800);
// rtd_outl(0xb809942c,0x0433d000);
// rtd_outl(0xb8099430,0x002a4400);
// rtd_outl(0xb8099434,0x00001400);
// rtd_outl(0xb8099438,0x0031101f);
// rtd_outl(0xb809943c,0x00000000);
// rtd_outl(0xb8099440,0x0433f800);
// rtd_outl(0xb8099444,0x04800c00);
// rtd_outl(0xb8099448,0x04cc2000);
// rtd_outl(0xb809944c,0x05183400);
// rtd_outl(0xb8099450,0x05644800);
// rtd_outl(0xb8099454,0x05b05c00);
// rtd_outl(0xb8099458,0x047fe800);
// rtd_outl(0xb809945c,0x04cbfc00);
// rtd_outl(0xb8099460,0x05181000);
// rtd_outl(0xb8099464,0x05642400);
// rtd_outl(0xb8099468,0x05b03800);
// rtd_outl(0xb809946c,0x05fc4c00);
// rtd_outl(0xb8099470,0x00260a00);
// rtd_outl(0xb8099474,0x00001200);
// rtd_outl(0xb8099478,0x0031001f);
// rtd_outl(0xb809947c,0x00000000);
// rtd_outl(0xb8099480,0x0001001f);
// rtd_outl(0xb8099484,0x00000000);
// rtd_outl(0xb8099488,0x0001001f);
// rtd_outl(0xb809948c,0x00000000);
// rtd_outl(0xb8099490,0x0011001f);
// rtd_outl(0xb8099494,0x00000000);
// rtd_outl(0xb8099498,0x0011001f);
// rtd_outl(0xb809949c,0x00000000);
// rtd_outl(0xb80994a0,0x0011001f);
// rtd_outl(0xb80994a4,0x00000000);
// rtd_outl(0xb80994a8,0x0011001f);
// rtd_outl(0xb80994ac,0x00000000);
// rtd_outl(0xb80994b0,0x00000438);
// rtd_outl(0xb80994b4,0x0000f0f0);
// rtd_outl(0xb80994b8,0x10101020);
// rtd_outl(0xb80994bc,0x00100401);
// rtd_outl(0xb80994c0,0x00000000);
// rtd_outl(0xb80994c4,0x00000000);
// rtd_outl(0xb80994c8,0x00000000);
// rtd_outl(0xb80994cc,0x00000000);
// rtd_outl(0xb80994d0,0x03df7000);
// rtd_outl(0xb80994d4,0x0433d000);
// rtd_outl(0xb80994d8,0x03df7000);
// rtd_outl(0xb80994dc,0x0433d000);
// rtd_outl(0xb80994e0,0x05b05c00);
// rtd_outl(0xb80994e4,0x05fc4c00);
// rtd_outl(0xb80994e8,0x05b05c00);
// rtd_outl(0xb80994ec,0x05fc4c00);
// rtd_outl(0xb80994f0,0x0043a43a);
// rtd_outl(0xb80994f4,0x00000000);
// rtd_outl(0xb80994f8,0x08186000);
// rtd_outl(0xb80994fc,0x0003c3c8);
rtd_outl(0xb8099200,0x003c0078);
rtd_outl(0xb8099204,0x00000055);
rtd_outl(0xb8099284,0x00000019);
rtd_outl(0xb8099800,0x003c0078);
rtd_outl(0xb8099804,0x00000055);
rtd_outl(0xb8099884,0x00000019);
rtd_outl(0xb8099400,0x00000004);
rtd_outl(0xb8099404,0x00f00f00);
rtd_outl(0xb8099410,0x0004f0f0);
rtd_outl(0xb8099480,0x0005f078);
rtd_outl(0xb8099454,0x00002580);
rtd_outl(0xb80994c4,0x00002940);
//rtd_outl(0xb8099414,0x00644000);
//rtd_outl(0xb8099418,0x01f94000);
//rtd_outl(0xb809941c,0x038e4000);
//rtd_outl(0xb8099420,0x05234000);
//rtd_outl(0xb8099424,0x06b84000);
//rtd_outl(0xb8099428,0x084d4000);
//rtd_outl(0xb809942c,0x084d4000);
//rtd_outl(0xb8099430,0x084d4000);
//rtd_outl(0xb8099434,0x00c98000);
//rtd_outl(0xb8099438,0x025e8000);
//rtd_outl(0xb809943c,0x03f38000);
//rtd_outl(0xb8099440,0x05888000);
//rtd_outl(0xb8099444,0x071d8000);
//rtd_outl(0xb8099448,0x08b28000);
//rtd_outl(0xb809944c,0x08b28000);
//rtd_outl(0xb8099450,0x08b28000);
//rtd_outl(0xb8099484,0x09e24000);
//rtd_outl(0xb8099488,0x0b774000);
//rtd_outl(0xb809948c,0x0d0c4000);
//rtd_outl(0xb8099490,0x0ea14000);
//rtd_outl(0xb8099494,0x10364000);
//rtd_outl(0xb8099498,0x11cb4000);
//rtd_outl(0xb809949c,0x11cb4000);
//rtd_outl(0xb80994a0,0x11cb4000);
//rtd_outl(0xb80994a4,0x0a478000);
//rtd_outl(0xb80994a8,0x0bdc8000);
//rtd_outl(0xb80994ac,0x0d718000);
//rtd_outl(0xb80994b0,0x0f068078);
//rtd_outl(0xb80994b4,0x109b8000);
//rtd_outl(0xb80994b8,0x12308000);
//rtd_outl(0xb80994bc,0x12308000);
//rtd_outl(0xb80994c0,0x12308000);
rtd_outl(0xb809ae00,0x00000004);
rtd_outl(0xb809ae04,0x00f00f00);
rtd_outl(0xb809ae10,0x0004f0f0);
rtd_outl(0xb809aeb8,0x00f00f00);
rtd_outl(0xb809ae30,0x0005f078);
rtd_outl(0xb809ae50,0x0004f0f0);
rtd_outl(0xb809ae70,0x0005f078);
//skyredd//rtd_outl(0xb8099460,0x00000301); // lfl  wdma enable
//skyredd//rtd_outl(0xb80994dc,0x00000701); // hf   wdma enable
//skyredd//rtd_outl(0xb809ae1c,0x00000301); // lfli rdma enable
//skyredd//rtd_outl(0xb809ae3c,0x00000701); // hfi  rdma enable
//skyredd//rtd_outl(0xb809ae5c,0x00000301); // lflp rdma enable
//skyredd//rtd_outl(0xb809ae7c,0x00000701); // hfp  rdma enable
rtd_outl(0xb8099500,0x00000000);
rtd_outl(0xb8099504,0x00000000);
//notfound//rtd_outl(0xb8099508,0x00000000);
//notfound//rtd_outl(0xb809950c,0x00000000);
//notfound//rtd_outl(0xb8099510,0x00000000);
//notfound//rtd_outl(0xb8099514,0x00000000);
//notfound//rtd_outl(0xb8099518,0x00000000);
//notfound//rtd_outl(0xb809951c,0x00000000);
//notfound//rtd_outl(0xb8099520,0x00000000);
//notfound//rtd_outl(0xb8099524,0x00000000);
//notfound//rtd_outl(0xb8099528,0x00000000);
//notfound//rtd_outl(0xb809952c,0x00000000);
//notfound//rtd_outl(0xb8099530,0x00000000);
//notfound//rtd_outl(0xb8099534,0x00000000);
//notfound//rtd_outl(0xb8099538,0x00000000);
//notfound//rtd_outl(0xb809953c,0x00000000);
//notfound//rtd_outl(0xb8099540,0x00000000);
//notfound//rtd_outl(0xb8099544,0x00000000);
//notfound//rtd_outl(0xb8099548,0x00000000);
//notfound//rtd_outl(0xb809954c,0x00000000);
//notfound//rtd_outl(0xb8099550,0x00000000);
//notfound//rtd_outl(0xb8099554,0x00000000);
//notfound//rtd_outl(0xb8099558,0x00000000);
//notfound//rtd_outl(0xb809955c,0x00000000);
//notfound//rtd_outl(0xb8099560,0x00000000);
//notfound//rtd_outl(0xb8099564,0x00000000);
//notfound//rtd_outl(0xb8099568,0x00000000);
//notfound//rtd_outl(0xb809956c,0x00000000);
//notfound//rtd_outl(0xb8099570,0x00000000);
//notfound//rtd_outl(0xb8099574,0x00000000);
//notfound//rtd_outl(0xb8099578,0x00000000);
//notfound//rtd_outl(0xb809957c,0x00000000);
//notfound//rtd_outl(0xb8099580,0x00000000);
//notfound//rtd_outl(0xb8099584,0x00000000);
//notfound//rtd_outl(0xb8099588,0x00000000);
//notfound//rtd_outl(0xb809958c,0x00000000);
//notfound//rtd_outl(0xb8099590,0x00000000);
//notfound//rtd_outl(0xb8099594,0x00000000);
//notfound//rtd_outl(0xb8099598,0x00000000);
//notfound//rtd_outl(0xb809959c,0x00000000);
//notfound//rtd_outl(0xb80995a0,0x00000000);
//notfound//rtd_outl(0xb80995a4,0x00000000);
//notfound//rtd_outl(0xb80995a8,0x00000000);
//notfound//rtd_outl(0xb80995ac,0x00000000);
//notfound//rtd_outl(0xb80995b0,0x00000000);
//notfound//rtd_outl(0xb80995b4,0x00000000);
//notfound//rtd_outl(0xb80995b8,0x00000000);
//notfound//rtd_outl(0xb80995bc,0x00000000);
//notfound//rtd_outl(0xb80995c0,0x00000000);
//notfound//rtd_outl(0xb80995c4,0x00000000);
//notfound//rtd_outl(0xb80995c8,0x00000000);
//notfound//rtd_outl(0xb80995cc,0x00000000);
//notfound//rtd_outl(0xb80995d0,0x00000000);
//notfound//rtd_outl(0xb80995d4,0x00000000);
//notfound//rtd_outl(0xb80995d8,0x00000000);
//notfound//rtd_outl(0xb80995dc,0x00000000);
rtd_outl(0xb80995e0,0x357d1599);
rtd_outl(0xb80995e4,0x00000000);
rtd_outl(0xb80995e8,0x00000000);
rtd_outl(0xb80995ec,0x00000000);
rtd_outl(0xb80995f0,0x00000000);
rtd_outl(0xb80995f4,0x00000000);
rtd_outl(0xb80995f8,0x00000000);
rtd_outl(0xb80995fc,0x00000000);
//notfound//rtd_outl(0xb8099600,0x00000000);
//notfound//rtd_outl(0xb8099604,0x00000000);
//notfound//rtd_outl(0xb8099608,0x00000000);
rtd_outl(0xb809960c,0xe1000000);
rtd_outl(0xb8099610,0x00000000);
rtd_outl(0xb8099614,0x70f01130);
rtd_outl(0xb8099618,0x00718740);
rtd_outl(0xb809961c,0x00040006);
rtd_outl(0xb8099620,0x00000400);
rtd_outl(0xb8099624,0x043bc083);
rtd_outl(0xb8099628,0x24001003);
rtd_outl(0xb809962c,0x0010ef01);
rtd_outl(0xb8099630,0x00000500);
rtd_outl(0xb8099634,0x08700780);
rtd_outl(0xb8099638,0x000000a5);
rtd_outl(0xb809963c,0x010e01e0);
rtd_outl(0xb8099640,0x000008cf);
rtd_outl(0xb8099644,0x00ff00ff);
rtd_outl(0xb8099648,0x00240024);
rtd_outl(0xb809964c,0x000003ff);
rtd_outl(0xb8099650,0x086f0000);
rtd_outl(0xb8099654,0x0eff0000);
rtd_outl(0xb8099658,0x086f0000);
rtd_outl(0xb809965c,0x0eff0000);
rtd_outl(0xb8099660,0x00000000);
rtd_outl(0xb8099664,0x04380000);
rtd_outl(0xb8099668,0x03c00000);
rtd_outl(0xb809966c,0x00000000);
rtd_outl(0xb8099670,0x00000000);
rtd_outl(0xb8099674,0x00000000);
rtd_outl(0xb8099678,0x00000000);
rtd_outl(0xb809967c,0x00000000);
rtd_outl(0xb8099680,0x00000000);
rtd_outl(0xb8099684,0x00000000);
rtd_outl(0xb8099688,0x00000000);
rtd_outl(0xb809968c,0x00000000);
rtd_outl(0xb8099690,0x00000000);
rtd_outl(0xb8099694,0x00000000);
rtd_outl(0xb8099698,0x00000000);
rtd_outl(0xb809969c,0x00000000);
rtd_outl(0xb80996a0,0x00000000);
rtd_outl(0xb80996a4,0x7f004463);
rtd_outl(0xb80996a8,0x007c0403);
rtd_outl(0xb80996ac,0x00000000);
rtd_outl(0xb80996b0,0x00033300);
rtd_outl(0xb80996b4,0xffc04008);
rtd_outl(0xb80996b8,0x000f4f04);
rtd_outl(0xb80996bc,0x0af43f04);
rtd_outl(0xb80996c0,0x034b07d2);
rtd_outl(0xb80996c4,0x00ffffff);
rtd_outl(0xb80996c8,0x00000000);
rtd_outl(0xb80996cc,0x00000000);
rtd_outl(0xb80996d0,0x00000000);
rtd_outl(0xb80996d4,0x00000000);
rtd_outl(0xb80996d8,0x00000000);
rtd_outl(0xb80996dc,0x00007600);
rtd_outl(0xb80996e0,0x00000200);
rtd_outl(0xb80996e4,0x00000000);
rtd_outl(0xb80996e8,0x00000000);
//notfound//rtd_outl(0xb80996ec,0x00000000);
rtd_outl(0xb80996f0,0x00000000);
rtd_outl(0xb80996f4,0x020c0000);
rtd_outl(0xb80996f8,0xffc20200);
rtd_outl(0xb80996fc,0x00000000);
rtd_outl(0xb8099700,0x55555432);
rtd_outl(0xb8099704,0x44445432);
rtd_outl(0xb8099708,0x33335432);
rtd_outl(0xb809970c,0x22225432);
rtd_outl(0xb8099710,0x00000000);
rtd_outl(0xb8099714,0x00000000);
rtd_outl(0xb8099718,0x00000000);
rtd_outl(0xb809971c,0x00000000);
rtd_outl(0xb8099720,0x0000003f);
rtd_outl(0xb8099724,0x000087f0);
rtd_outl(0xb8099728,0x021c03c0);
rtd_outl(0xb809972c,0x00035334);
rtd_outl(0xb8099730,0x00f00400);
//notfound//rtd_outl(0xb8099734,0x00000000);
//notfound//rtd_outl(0xb8099738,0x00000000);
//notfound//rtd_outl(0xb809973c,0x00000000);
//notfound//rtd_outl(0xb8099740,0x00000000);
//notfound//rtd_outl(0xb8099744,0x00000000);
//notfound//rtd_outl(0xb8099748,0x00000000);
//notfound//rtd_outl(0xb809974c,0x00000000);
rtd_outl(0xb8099750,0x00040c0f);
rtd_outl(0xb8099754,0x7f003004);
rtd_outl(0xb8099758,0x000f8420);
rtd_outl(0xb809975c,0x00033444);
rtd_outl(0xb8099760,0x02829397);
rtd_outl(0xb8099764,0x0000180c);
rtd_outl(0xb8099768,0x0004180c);
rtd_outl(0xb809976c,0x11121200);
rtd_outl(0xb8099770,0x0c0d0e10);
rtd_outl(0xb8099774,0xc0f0050b);
//notfound//rtd_outl(0xb8099778,0x00000000);
rtd_outl(0xb809977c,0x05410003);
rtd_outl(0xb8099780,0x01e00000);
rtd_outl(0xb8099784,0x05a003c0);
rtd_outl(0xb8099788,0x40000780);
rtd_outl(0xb809978c,0x28140050);
rtd_outl(0xb8099790,0x0f0000f0);
rtd_outl(0xb8099794,0x6db24fff);
rtd_outl(0xb8099798,0x00000007);
rtd_outl(0xb809979c,0x0003c000);
rtd_outl(0xb80997a0,0x04020087);
rtd_outl(0xb80997a4,0x000f0000);
rtd_outl(0xb80997a8,0x0808021c);
//notfound//rtd_outl(0xb80997ac,0x00000000);
rtd_outl(0xb80997b0,0x00000000);
rtd_outl(0xb80997b4,0x00000000);
rtd_outl(0xb80997b8,0x00000000);
rtd_outl(0xb80997bc,0x00000000);
rtd_outl(0xb80997c0,0x00000000);
rtd_outl(0xb80997c4,0x00000000);
rtd_outl(0xb80997c8,0x00000000);
rtd_outl(0xb80997cc,0x00000000);
rtd_outl(0xb80997d0,0x00000000);
rtd_outl(0xb80997d4,0x00000000);
rtd_outl(0xb80997d8,0x00000000);
rtd_outl(0xb80997dc,0x00000000);
rtd_outl(0xb80997e0,0x00000000);
//notfound//rtd_outl(0xb80997e4,0x00000000);
//notfound//rtd_outl(0xb80997e8,0x00000000);
//notfound//rtd_outl(0xb80997ec,0x00000000);
rtd_outl(0xb80997f0,0x0052303c);
rtd_outl(0xb80997f4,0x00000003);
//notfound//rtd_outl(0xb80997f8,0x00000000);
//notfound//rtd_outl(0xb80997fc,0x00000000);
rtd_outl(0xb8099900,0x133cb1c3);
rtd_outl(0xb8099904,0x008df6d7);
rtd_outl(0xb8099908,0x20161008);
rtd_outl(0xb809990c,0x24242424);
rtd_outl(0xb8099910,0x36db6db6);
rtd_outl(0xb8099914,0x49310475);
rtd_outl(0xb8099918,0x00000000);
rtd_outl(0xb809991c,0x00000000);
rtd_outl(0xb8099920,0x88700f00);
rtd_outl(0xb8099924,0x11000102);
rtd_outl(0xb8099928,0x07740096);
rtd_outl(0xb809992c,0x02234485);
rtd_outl(0xb8099930,0x04274c95);
rtd_outl(0xb8099934,0x00000025);
rtd_outl(0xb8099938,0x032750a5);
rtd_outl(0xb809993c,0x01234895);
rtd_outl(0xb8099940,0x00000005);
rtd_outl(0xb8099944,0x05790975);
rtd_outl(0xb8099948,0x03048502);
rtd_outl(0xb809994c,0x04c99322);
rtd_outl(0xb8099950,0x00000026);
rtd_outl(0xb8099954,0x01020408);
rtd_outl(0xb8099958,0x01020408);
rtd_outl(0xb809995c,0x00000008);
rtd_outl(0xb8099960,0x10843946);
//notfound//rtd_outl(0xb8099964,0x00000000);
//notfound//rtd_outl(0xb8099968,0x00000000);
//notfound//rtd_outl(0xb809996c,0x00000000);
//notfound//rtd_outl(0xb8099970,0x00000000);
//notfound//rtd_outl(0xb8099974,0x00000000);
//notfound//rtd_outl(0xb8099978,0x00000000);
//notfound//rtd_outl(0xb809997c,0x00000000);
rtd_outl(0xb8099980,0x00520520);
rtd_outl(0xb8099984,0x00538538);
rtd_outl(0xb8099988,0x00000000);
//notfound//rtd_outl(0xb809998c,0x00000000);
//notfound//rtd_outl(0xb8099990,0x00000000);
//notfound//rtd_outl(0xb8099994,0x00000000);
//notfound//rtd_outl(0xb8099998,0x00000000);
//notfound//rtd_outl(0xb809999c,0x00000000);
rtd_outl(0xb80999a0,0x043800f0);
rtd_outl(0xb80999a4,0x043800f0);
rtd_outl(0xb80999a8,0x043800f0);
rtd_outl(0xb80999ac,0x043800f0);
rtd_outl(0xb80999b0,0x00f00897);
rtd_outl(0xb80999b4,0x00438117);
rtd_outl(0xb80999b8,0x0025c3f7);
rtd_outl(0xb80999bc,0x00300000);
rtd_outl(0xb80999c0,0xf03183ce);
rtd_outl(0xb80999c4,0x03015e57);
rtd_outl(0xb80999c8,0x000175c4);
rtd_outl(0xb80999cc,0x00000002);
//notfound//rtd_outl(0xb80999d0,0x00000000);
//notfound//rtd_outl(0xb80999d4,0x00000000);
//notfound//rtd_outl(0xb80999d8,0x00000000);
//notfound//rtd_outl(0xb80999dc,0x00000000);
//notfound//rtd_outl(0xb80999e0,0x00000000);
//notfound//rtd_outl(0xb80999e4,0x00000000);
//notfound//rtd_outl(0xb80999e8,0x00000000);
//notfound//rtd_outl(0xb80999ec,0x00000000);
//notfound//rtd_outl(0xb80999f0,0x00000000);
//notfound//rtd_outl(0xb80999f4,0x00000000);
//notfound//rtd_outl(0xb80999f8,0x00000000);
//notfound//rtd_outl(0xb80999fc,0x00000000);
rtd_outl(0xb8099a00,0x00000020);
rtd_outl(0xb8099a04,0x00800200);
rtd_outl(0xb8099a08,0x00400100);
rtd_outl(0xb8099a0c,0x00000000);
rtd_outl(0xb8099a10,0x077f086f);
rtd_outl(0xb8099a14,0x20002000);
rtd_outl(0xb8099a18,0x286f286f);
rtd_outl(0xb8099a1c,0x277f2077);
rtd_outl(0xb8099a20,0x20002000);
rtd_outl(0xb8099a24,0x07800780);
rtd_outl(0xb8099a28,0x07800780);
rtd_outl(0xb8099a2c,0x084504db);
rtd_outl(0xb8099a30,0x08708700);
//notfound//rtd_outl(0xb8099a34,0x00000000);
//notfound//rtd_outl(0xb8099a38,0x00000000);
//notfound//rtd_outl(0xb8099a3c,0x00000000);
//notfound//rtd_outl(0xb8099a40,0x00000000);
//notfound//rtd_outl(0xb8099a44,0x00000000);
//notfound//rtd_outl(0xb8099a48,0x00000000);
//notfound//rtd_outl(0xb8099a4c,0x00000000);
//notfound//rtd_outl(0xb8099a50,0x00000000);
//notfound//rtd_outl(0xb8099a54,0x00000000);
//notfound//rtd_outl(0xb8099a58,0x00000000);
//notfound//rtd_outl(0xb8099a5c,0x00000000);
//notfound//rtd_outl(0xb8099a60,0x00000000);
//notfound//rtd_outl(0xb8099a64,0x00000000);
//notfound//rtd_outl(0xb8099a68,0x00000000);
//notfound//rtd_outl(0xb8099a6c,0x00000000);
//notfound//rtd_outl(0xb8099a70,0x00000000);
//notfound//rtd_outl(0xb8099a74,0x00000000);
//notfound//rtd_outl(0xb8099a78,0x00000000);
//notfound//rtd_outl(0xb8099a7c,0x00000000);
//notfound//rtd_outl(0xb8099a80,0x00000000);
//notfound//rtd_outl(0xb8099a84,0x00000000);
//notfound//rtd_outl(0xb8099a88,0x00000000);
//notfound//rtd_outl(0xb8099a8c,0x00000000);
//notfound//rtd_outl(0xb8099a90,0x00000000);
//notfound//rtd_outl(0xb8099a94,0x00000000);
//notfound//rtd_outl(0xb8099a98,0x00000000);
//notfound//rtd_outl(0xb8099a9c,0x00000000);
//notfound//rtd_outl(0xb8099aa0,0x00000000);
//notfound//rtd_outl(0xb8099aa4,0x00000000);
//notfound//rtd_outl(0xb8099aa8,0x00000000);
//notfound//rtd_outl(0xb8099aac,0x00000000);
//notfound//rtd_outl(0xb8099ab0,0x00000000);
//notfound//rtd_outl(0xb8099ab4,0x00000000);
//notfound//rtd_outl(0xb8099ab8,0x00000000);
//notfound//rtd_outl(0xb8099abc,0x00000000);
//notfound//rtd_outl(0xb8099ac0,0x00000000);
//notfound//rtd_outl(0xb8099ac4,0x00000000);
//notfound//rtd_outl(0xb8099ac8,0x00000000);
//notfound//rtd_outl(0xb8099acc,0x00000000);
//notfound//rtd_outl(0xb8099ad0,0x00000000);
//notfound//rtd_outl(0xb8099ad4,0x00000000);
//notfound//rtd_outl(0xb8099ad8,0x00000000);
//notfound//rtd_outl(0xb8099adc,0x00000000);
//notfound//rtd_outl(0xb8099ae0,0x00000000);
//notfound//rtd_outl(0xb8099ae4,0x00000000);
//notfound//rtd_outl(0xb8099ae8,0x00000000);
//notfound//rtd_outl(0xb8099aec,0x00000000);
//notfound//rtd_outl(0xb8099af0,0x00000000);
//notfound//rtd_outl(0xb8099af4,0x00000000);
//notfound//rtd_outl(0xb8099af8,0x00000000);
//notfound//rtd_outl(0xb8099afc,0x00000000);
rtd_outl(0xb8099b00,0x00000000);
rtd_outl(0xb8099b04,0x00000000);
rtd_outl(0xb8099b08,0x00000000);
rtd_outl(0xb8099b0c,0x00000000);
rtd_outl(0xb8099b10,0x00000000);
rtd_outl(0xb8099b14,0x00000000);
rtd_outl(0xb8099b18,0x00000000);
rtd_outl(0xb8099b1c,0x00000000);
rtd_outl(0xb8099b20,0x00000000);
rtd_outl(0xb8099b24,0x00000000);
rtd_outl(0xb8099b28,0x00000000);
rtd_outl(0xb8099b2c,0x00000000);
rtd_outl(0xb8099b30,0x00000000);
rtd_outl(0xb8099b34,0x00000000);
rtd_outl(0xb8099b38,0x00000000);
rtd_outl(0xb8099b3c,0x00000000);
rtd_outl(0xb8099b40,0x00000000);
rtd_outl(0xb8099b44,0x00000000);
rtd_outl(0xb8099b48,0x00000000);
rtd_outl(0xb8099b4c,0x00000000);
rtd_outl(0xb8099b50,0x00000000);
rtd_outl(0xb8099b54,0x00000000);
rtd_outl(0xb8099b58,0x00000000);
rtd_outl(0xb8099b5c,0x00000000);
rtd_outl(0xb8099b60,0x00000000);
rtd_outl(0xb8099b64,0x00000000);
rtd_outl(0xb8099b68,0x00000000);
rtd_outl(0xb8099b6c,0x00000000);
rtd_outl(0xb8099b70,0x00000002);
rtd_outl(0xb8099b74,0x00000000);
rtd_outl(0xb8099b78,0x00000000);
rtd_outl(0xb8099b7c,0x00000000);
rtd_outl(0xb8099b80,0x00000000);
rtd_outl(0xb8099b84,0x00000000);
rtd_outl(0xb8099b88,0x00000000);
rtd_outl(0xb8099b8c,0x00000000);
rtd_outl(0xb8099b90,0x00000000);
rtd_outl(0xb8099b94,0x00000000);
rtd_outl(0xb8099b98,0x00000000);
rtd_outl(0xb8099b9c,0x00000000);
rtd_outl(0xb8099ba0,0x00000000);
rtd_outl(0xb8099ba4,0x00000000);
rtd_outl(0xb8099ba8,0x00000001);
rtd_outl(0xb8099bac,0x00000001);
rtd_outl(0xb8099bb0,0x00000000);
rtd_outl(0xb8099bb4,0x00000000);
rtd_outl(0xb8099bb8,0x00000000);
rtd_outl(0xb8099bbc,0x00000000);
rtd_outl(0xb8099bc0,0x00000000);
rtd_outl(0xb8099bc4,0x00000000);
rtd_outl(0xb8099bc8,0x00000000);
rtd_outl(0xb8099bcc,0x00000000);
rtd_outl(0xb8099bd0,0x00000000);
rtd_outl(0xb8099bd4,0x00000000);
rtd_outl(0xb8099bd8,0x00000000);
rtd_outl(0xb8099bdc,0x00000000);
rtd_outl(0xb8099be0,0x00000000);
rtd_outl(0xb8099be4,0x00000000);
rtd_outl(0xb8099be8,0x00000000);
rtd_outl(0xb8099bec,0x00000000);
rtd_outl(0xb8099bf0,0x00000000);
rtd_outl(0xb8099bf4,0x00000000);
rtd_outl(0xb8099bf8,0x00000000);
rtd_outl(0xb8099bfc,0x00000000);
// rtd_outl(0xb809ae00,0x00000000);
// rtd_outl(0xb809ae04,0x00000000);
// rtd_outl(0xb809ae08,0x00000000);
// rtd_outl(0xb809ae0c,0x00000000);
// rtd_outl(0xb809ae10,0x00000000);
// rtd_outl(0xb809ae14,0x00000000);
// rtd_outl(0xb809ae18,0x00000000);
// rtd_outl(0xb809ae1c,0x00000000);
// rtd_outl(0xb809ae20,0x00000000);
// rtd_outl(0xb809ae24,0x00000000);
// rtd_outl(0xb809ae28,0x00000000);
// rtd_outl(0xb809ae2c,0x00000000);
// rtd_outl(0xb809ae30,0x00000000);
// rtd_outl(0xb809ae34,0x00000000);
// rtd_outl(0xb809ae38,0x00000000);
// rtd_outl(0xb809ae3c,0x12666000);
// rtd_outl(0xb809ae40,0x000fa43a);
// rtd_outl(0xb809ae44,0x0012e000);
// rtd_outl(0xb809ae48,0x00000000);
// rtd_outl(0xb809ae4c,0x00000000);
// rtd_outl(0xb809ae50,0x00000000);
// rtd_outl(0xb809ae54,0x00000000);
// rtd_outl(0xb809ae58,0x00000000);
// rtd_outl(0xb809ae5c,0x00049ba7);
// rtd_outl(0xb809ae60,0x000fb438);
// rtd_outl(0xb809ae64,0x00217122);
// rtd_outl(0xb809ae68,0x00000000);
// rtd_outl(0xb809ae6c,0x000498f0);
// rtd_outl(0xb809ae70,0x000fa438);
// rtd_outl(0xb809ae74,0x00217120);
// rtd_outl(0xb809ae78,0x00000000);
// rtd_outl(0xb809ae7c,0x000002ea);
// rtd_outl(0xb809ae80,0x000005bf);
// rtd_outl(0xb809ae84,0x000000bb);
// rtd_outl(0xb809ae88,0x004251c7);
// rtd_outl(0xb809ae8c,0x000002e3);
// rtd_outl(0xb809ae90,0x00000000);
// rtd_outl(0xb809ae94,0x00000000);
// rtd_outl(0xb809ae98,0xffffffff);
// rtd_outl(0xb809ae9c,0x00000000);
// rtd_outl(0xb809aea0,0x00000000);
// rtd_outl(0xb809aea4,0x00000410);
// rtd_outl(0xb809aea8,0x00000a23);
// rtd_outl(0xb809aeac,0x00000077);
// rtd_outl(0xb809aeb0,0x001d8017);
// rtd_outl(0xb809aeb4,0x00000000);
// rtd_outl(0xb809aeb8,0x00000000);
// rtd_outl(0xb809aebc,0x00000001);
// rtd_outl(0xb809aec0,0x000003f6);
// rtd_outl(0xb809aec4,0x00000b20);
// rtd_outl(0xb809aec8,0x00000077);
// rtd_outl(0xb809aecc,0x00404345);
// rtd_outl(0xb809aed0,0x00636001);
// rtd_outl(0xb809aed4,0x00000000);
// rtd_outl(0xb809aed8,0x00000000);
// rtd_outl(0xb809aedc,0x00000000);
// rtd_outl(0xb809aee0,0x00000000);
// rtd_outl(0xb809aee4,0x00000000);
// rtd_outl(0xb809aee8,0x00000000);
// rtd_outl(0xb809aeec,0x00000000);
// rtd_outl(0xb809aef0,0x00000000);
// rtd_outl(0xb809aef4,0x00000000);
// rtd_outl(0xb809aef8,0x00000000);
// rtd_outl(0xb809aefc,0x00000000);
//notfound//rtd_outl(0xb809b000,0x00000000);
//rtd_outl(0xb809b004,0x20a00000);
rtd_outl(0xb809b004,0x20a00000);   // disable me1 meander //skyredd_meander
rtd_outl(0xb809b008,0x1421d800);
//notfound//rtd_outl(0xb809b00c,0x00000000);
rtd_outl(0xb809b010,0x00000000);
rtd_outl(0xb809b014,0x00000000);
rtd_outl(0xb809b018,0x00000000);
rtd_outl(0xb809b01c,0x00000000);
rtd_outl(0xb809b020,0x00000000);
rtd_outl(0xb809b024,0x00000000);
rtd_outl(0xb809b028,0x00000000);
rtd_outl(0xb809b02c,0x00000000);
rtd_outl(0xb809b030,0x0000021b); //skyredd_meander
rtd_outl(0xb809b034,0x00000000);
rtd_outl(0xb809b038,0x00000000);
rtd_outl(0xb809b03c,0x00000000);
rtd_outl(0xb809b040,0x000000b0);
rtd_outl(0xb809b044,0x000000c1);
rtd_outl(0xb809b048,0x000001c3);
rtd_outl(0xb809b04c,0x00000116);
rtd_outl(0xb809b050,0x00000194);
rtd_outl(0xb809b054,0x00000129);
rtd_outl(0xb809b058,0x000001ab);
rtd_outl(0xb809b05c,0x00000152);
rtd_outl(0xb809b060,0x000001d0);
rtd_outl(0xb809b064,0x00000105);
rtd_outl(0xb809b068,0x00000187);
rtd_outl(0xb809b06c,0x0000013a);
rtd_outl(0xb809b070,0x000001b8);
rtd_outl(0xb809b074,0x00000141);
rtd_outl(0xb809b078,0x000001c3);
rtd_outl(0xb809b07c,0x00000116);
rtd_outl(0xb809b080,0x00000194);
rtd_outl(0xb809b084,0x00000129);
rtd_outl(0xb809b088,0x000001ab);
rtd_outl(0xb809b08c,0x00000152);
rtd_outl(0xb809b090,0x000061d0);
rtd_outl(0xb809b094,0x00006105);
rtd_outl(0xb809b098,0x00002187);
rtd_outl(0xb809b09c,0x0000203a);
rtd_outl(0xb809b0a0,0x00000000);
rtd_outl(0xb809b0a4,0x00000000);
rtd_outl(0xb809b0a8,0x00000000);
rtd_outl(0xb809b0ac,0x00000000);
rtd_outl(0xb809b0b0,0x00000000);
rtd_outl(0xb809b0b4,0x00000000);
rtd_outl(0xb809b0b8,0x00000000);
rtd_outl(0xb809b0bc,0x00000000);
rtd_outl(0xb809b0c0,0x00000000);
rtd_outl(0xb809b0c4,0x00000000);
rtd_outl(0xb809b0c8,0x00000000);
rtd_outl(0xb809b0cc,0x00000000);
//notfound//rtd_outl(0xb809b0d0,0x00000000);
//notfound//rtd_outl(0xb809b0d4,0x00000000);
//notfound//rtd_outl(0xb809b0d8,0x00000000);
//notfound//rtd_outl(0xb809b0dc,0x00000000);
//notfound//rtd_outl(0xb809b0e0,0x00000000);
//notfound//rtd_outl(0xb809b0e4,0x00000000);
//notfound//rtd_outl(0xb809b0e8,0x00000000);
//notfound//rtd_outl(0xb809b0ec,0x00000000);
//notfound//rtd_outl(0xb809b0f0,0x00000000);
//notfound//rtd_outl(0xb809b0f4,0x00000000);
//notfound//rtd_outl(0xb809b0f8,0x00000000);
//notfound//rtd_outl(0xb809b0fc,0x00000000);
rtd_outl(0xb809b200,0x07850ef0);
rtd_outl(0xb809b204,0xaa0e2cee);
rtd_outl(0xb809b208,0xcceeaacc);
rtd_outl(0xb809b20c,0x37373737);
rtd_outl(0xb809b210,0x000139fe);
rtd_outl(0xb809b214,0x00009cff);
rtd_outl(0xb809b218,0x011f9e3f);
rtd_outl(0xb809b21c,0x00012416);
rtd_outl(0xb809b220,0x00e79e3f);
rtd_outl(0xb809b224,0x011f9e3f);
rtd_outl(0xb809b228,0x00012416);
rtd_outl(0xb809b22c,0x00239e3f);
rtd_outl(0xb809b230,0x00000084);
rtd_outl(0xb809b234,0x00002ff8);
rtd_outl(0xb809b238,0x00002af8);
rtd_outl(0xb809b23c,0x00006040);
rtd_outl(0xb809b240,0x0219de00);
rtd_outl(0xb809b244,0x00086c00);
rtd_outl(0xb809b248,0x003efc00);
rtd_outl(0xb809b24c,0x00000610);
rtd_outl(0xb809b250,0x00000000);
rtd_outl(0xb809b254,0x0006fffc);
rtd_outl(0xb809b258,0x00000202);
rtd_outl(0xb809b25c,0x37373737);
rtd_outl(0xb809b260,0x00000040);
rtd_outl(0xb809b264,0x00000000);
rtd_outl(0xb809b268,0x00000000);
rtd_outl(0xb809b26c,0x00000000);
rtd_outl(0xb809b270,0x00fffffe);
rtd_outl(0xb809b274,0x00000040);
rtd_outl(0xb809b278,0x00000000);
rtd_outl(0xb809b27c,0x77777777);
rtd_outl(0xb809b280,0x77777777);
rtd_outl(0xb809b284,0x00010c00); //skyredd_meander
rtd_outl(0xb809b288,0x00000000);
rtd_outl(0xb809b28c,0x05140000);
//notfound//rtd_outl(0xb809b290,0x00000000);
//notfound//rtd_outl(0xb809b294,0x00000000);
//notfound//rtd_outl(0xb809b298,0x00000000);
//notfound//rtd_outl(0xb809b29c,0x00000000);
//notfound//rtd_outl(0xb809b2a4,0x00000000);
//notfound//rtd_outl(0xb809b2a8,0x00000000);
//notfound//rtd_outl(0xb809b2ac,0x00000000);
//notfound//rtd_outl(0xb809b2b0,0x00000000);
//notfound//rtd_outl(0xb809b2b4,0x00000000);
//notfound//rtd_outl(0xb809b2b8,0x00000000);
//notfound//rtd_outl(0xb809b2bc,0x00000000);
//notfound//rtd_outl(0xb809b2c0,0x00000000);
//notfound//rtd_outl(0xb809b2c4,0x00000000);
//notfound//rtd_outl(0xb809b2c8,0x00000000);
//notfound//rtd_outl(0xb809b2cc,0x00000000);
//notfound//rtd_outl(0xb809b2d0,0x00000000);
//notfound//rtd_outl(0xb809b2d4,0x00000000);
//notfound//rtd_outl(0xb809b2d8,0x00000000);
//notfound//rtd_outl(0xb809b2dc,0x00000000);
//notfound//rtd_outl(0xb809b2e0,0x00000000);
//notfound//rtd_outl(0xb809b2e4,0x00000000);
//notfound//rtd_outl(0xb809b2e8,0x00000000);
rtd_outl(0xb809b2ec,0x001ff800);
rtd_outl(0xb809b2f0,0x0000f7f8);
rtd_outl(0xb809b2f4,0x00007e90);
rtd_outl(0xb809b2f8,0x00007e90);
rtd_outl(0xb809b2fc,0x0000cd04);
rtd_outl(0xb809b300,0x00000001);
rtd_outl(0xb809b304,0x00010ef0);
rtd_outl(0xb809b308,0x012c0000);
rtd_outl(0xb809b30c,0x00003204);
rtd_outl(0xb809b310,0x00800000);
rtd_outl(0xb809b314,0x00000fff);
rtd_outl(0xb809b318,0x00003200);
rtd_outl(0xb809b31c,0x00000006);
rtd_outl(0xb809b320,0x00002204);
rtd_outl(0xb809b324,0x00800000);
rtd_outl(0xb809b328,0x00000fff);
rtd_outl(0xb809b32c,0x00003200);
rtd_outl(0xb809b330,0x00100096);
rtd_outl(0xb809b334,0x00040041);
rtd_outl(0xb809b338,0x00200010);
rtd_outl(0xb809b33c,0x80402080);
rtd_outl(0xb809b340,0x00000000);
rtd_outl(0xb809b344,0x00000000);
rtd_outl(0xb809b348,0x00000000);
rtd_outl(0xb809b34c,0x00000000);
rtd_outl(0xb809b350,0x08000000);
rtd_outl(0xb809b354,0x00101010);
rtd_outl(0xb809b358,0x00000080);
rtd_outl(0xb809b35c,0x00000000);
rtd_outl(0xb809b360,0x00000000);
rtd_outl(0xb809b364,0x00000000);
//notfound//rtd_outl(0xb809b368,0x00000000);
//notfound//rtd_outl(0xb809b36c,0x00000000);
//notfound//rtd_outl(0xb809b370,0x00000000);
//notfound//rtd_outl(0xb809b374,0x00000000);
//notfound//rtd_outl(0xb809b378,0x00000000);
//notfound//rtd_outl(0xb809b37c,0x00000000);
rtd_outl(0xb809b380,0x00000000);
rtd_outl(0xb809b384,0x00000000);
rtd_outl(0xb809b388,0x00000000);
rtd_outl(0xb809b38c,0x00040011);
rtd_outl(0xb809b390,0xc040ff00);
//notfound//rtd_outl(0xb809b394,0x00000000);
//notfound//rtd_outl(0xb809b398,0x00000000);
//notfound//rtd_outl(0xb809b39c,0x00000000);
//notfound//rtd_outl(0xb809b3a0,0x00000000);
//notfound//rtd_outl(0xb809b3a4,0x00000000);
//notfound//rtd_outl(0xb809b3a8,0x00000000);
//notfound//rtd_outl(0xb809b3ac,0x00000000);
rtd_outl(0xb809b3b0,0x00000000);
rtd_outl(0xb809b3b4,0x00000000);
//notfound//rtd_outl(0xb809b3b8,0x00000000);
rtd_outl(0xb809b3bc,0x00fff000);
rtd_outl(0xb809b3c0,0x00007e90);
rtd_outl(0xb809b3c4,0x00000000);
rtd_outl(0xb809b3c8,0x00000000);
rtd_outl(0xb809b3cc,0x00000000);
rtd_outl(0xb809b3d0,0x00000000);
rtd_outl(0xb809b3d4,0x00000000);
rtd_outl(0xb809b3d8,0x00000000);
rtd_outl(0xb809b3dc,0x00000000);
//notfound//rtd_outl(0xb809b3e0,0x00000000);
//notfound//rtd_outl(0xb809b3e4,0x00000000);
//notfound//rtd_outl(0xb809b3e8,0x00000000);
//notfound//rtd_outl(0xb809b3ec,0x00000000);
//notfound//rtd_outl(0xb809b3f0,0x00000000);
//notfound//rtd_outl(0xb809b3f4,0x00000000);
//notfound//rtd_outl(0xb809b3f8,0x00000000);
//notfound//rtd_outl(0xb809b3fc,0x00000000);
rtd_outl(0xb809b400,0x00000000);
rtd_outl(0xb809b404,0x00000000);
rtd_outl(0xb809b408,0x00000000);
rtd_outl(0xb809b40c,0x00000000);
rtd_outl(0xb809b410,0x00000000);
rtd_outl(0xb809b414,0x00000000);
rtd_outl(0xb809b418,0x00000000);
rtd_outl(0xb809b41c,0x00000000);
rtd_outl(0xb809b420,0x00000000);
rtd_outl(0xb809b424,0x00000000);
rtd_outl(0xb809b428,0x00000000);
rtd_outl(0xb809b42c,0x00000000);
rtd_outl(0xb809b430,0x00000000);
rtd_outl(0xb809b434,0x00000000);
rtd_outl(0xb809b438,0x00000000);
rtd_outl(0xb809b43c,0x00000000);
rtd_outl(0xb809b440,0x00000000);
rtd_outl(0xb809b444,0x00000000);
rtd_outl(0xb809b448,0x00000000);
rtd_outl(0xb809b44c,0x00000000);
rtd_outl(0xb809b450,0x00000000);
rtd_outl(0xb809b454,0x00000000);
rtd_outl(0xb809b458,0x00000000);
rtd_outl(0xb809b45c,0x00000000);
rtd_outl(0xb809b460,0x00000000);
rtd_outl(0xb809b464,0x00000000);
rtd_outl(0xb809b468,0x00000000);
rtd_outl(0xb809b46c,0x00000000);
rtd_outl(0xb809b470,0x00000000);
rtd_outl(0xb809b474,0x00000000);
rtd_outl(0xb809b478,0x00000000);
rtd_outl(0xb809b47c,0x00000000);
rtd_outl(0xb809b480,0x00000000);
rtd_outl(0xb809b484,0x00000000);
rtd_outl(0xb809b488,0x00000000);
rtd_outl(0xb809b48c,0x00000000);
rtd_outl(0xb809b490,0x00000000);
rtd_outl(0xb809b494,0x00000000);
rtd_outl(0xb809b498,0x00000000);
rtd_outl(0xb809b49c,0x00000000);
rtd_outl(0xb809b4a0,0x00000000);
rtd_outl(0xb809b4a4,0x00000000);
rtd_outl(0xb809b4a8,0x00000000);
rtd_outl(0xb809b4ac,0x00000000);
rtd_outl(0xb809b4b0,0x00000000);
rtd_outl(0xb809b4b4,0x00000000);
rtd_outl(0xb809b4b8,0x00000000);
rtd_outl(0xb809b4bc,0x00000000);
rtd_outl(0xb809b4c0,0x00000000);
rtd_outl(0xb809b4c4,0x00000000);
rtd_outl(0xb809b4c8,0x00000000);
rtd_outl(0xb809b4cc,0x00000000);
rtd_outl(0xb809b4d0,0x00000000);
rtd_outl(0xb809b4d4,0x00000000);
rtd_outl(0xb809b4d8,0x00000000);
rtd_outl(0xb809b4dc,0x00000000);
rtd_outl(0xb809b4e0,0x00000000);
rtd_outl(0xb809b4e4,0x00000000);
rtd_outl(0xb809b4e8,0x00000000);
rtd_outl(0xb809b4ec,0x00000000);
rtd_outl(0xb809b4f0,0x00000000);
rtd_outl(0xb809b4f4,0x00000000);
rtd_outl(0xb809b4f8,0x00000000);
rtd_outl(0xb809b4fc,0x00000000);
rtd_outl(0xb809b500,0x00000000);
rtd_outl(0xb809b504,0x00000000);
rtd_outl(0xb809b508,0x00000000);
rtd_outl(0xb809b50c,0x00000000);
rtd_outl(0xb809b510,0x00000000);
rtd_outl(0xb809b514,0x00000000);
rtd_outl(0xb809b518,0x00000000);
rtd_outl(0xb809b51c,0x00000000);
rtd_outl(0xb809b520,0x00000000);
rtd_outl(0xb809b524,0x00000000);
rtd_outl(0xb809b528,0x00000000);
rtd_outl(0xb809b52c,0x00000000);
rtd_outl(0xb809b530,0x00000000);
rtd_outl(0xb809b534,0x00000000);
rtd_outl(0xb809b538,0x00000000);
rtd_outl(0xb809b53c,0x00000000);
rtd_outl(0xb809b540,0x00000000);
rtd_outl(0xb809b544,0x00000000);
rtd_outl(0xb809b548,0x00000000);
rtd_outl(0xb809b54c,0x00000000);
rtd_outl(0xb809b550,0x00000000);
rtd_outl(0xb809b554,0x00000000);
rtd_outl(0xb809b558,0x00000000);
rtd_outl(0xb809b55c,0x00000000);
rtd_outl(0xb809b560,0x00000000);
rtd_outl(0xb809b564,0x00000000);
rtd_outl(0xb809b568,0x00000000);
rtd_outl(0xb809b56c,0x00000000);
rtd_outl(0xb809b570,0x00000000);
rtd_outl(0xb809b574,0x00000000);
rtd_outl(0xb809b578,0x00000000);
rtd_outl(0xb809b57c,0x00000000);
rtd_outl(0xb809b580,0x00000000);
rtd_outl(0xb809b584,0x00000000);
rtd_outl(0xb809b588,0x00000000);
rtd_outl(0xb809b58c,0x00000000);
rtd_outl(0xb809b590,0x00000000);
rtd_outl(0xb809b594,0x00000000);
rtd_outl(0xb809b598,0x00000000);
rtd_outl(0xb809b59c,0x00000000);
rtd_outl(0xb809b5a0,0x00000000);
rtd_outl(0xb809b5a4,0x00000000);
rtd_outl(0xb809b5a8,0x00000000);
rtd_outl(0xb809b5ac,0x00000000);
rtd_outl(0xb809b5b0,0x00000000);
rtd_outl(0xb809b5b4,0x00000000);
rtd_outl(0xb809b5b8,0x00000000);
rtd_outl(0xb809b5bc,0x00000000);
rtd_outl(0xb809b5c0,0x00000000);
rtd_outl(0xb809b5c4,0x00000000);
rtd_outl(0xb809b5c8,0x00000000);
rtd_outl(0xb809b5cc,0x00000000);
rtd_outl(0xb809b5d0,0x00000000);
rtd_outl(0xb809b5d4,0x00000000);
rtd_outl(0xb809b5d8,0x00000000);
rtd_outl(0xb809b5dc,0x00000000);
rtd_outl(0xb809b5e0,0x00000000);
rtd_outl(0xb809b5e4,0x00000000);
rtd_outl(0xb809b5e8,0x00000000);
rtd_outl(0xb809b5ec,0x00000000);
rtd_outl(0xb809b5f0,0x00000000);
rtd_outl(0xb809b5f4,0x00000000);
rtd_outl(0xb809b5f8,0x00000000);
rtd_outl(0xb809b5fc,0x00000000);
rtd_outl(0xb809b600,0x000003fc);
rtd_outl(0xb809b604,0x000003fc);
rtd_outl(0xb809b608,0x000003fc);
rtd_outl(0xb809b60c,0x000003fc);
rtd_outl(0xb809b610,0x000003fc);
rtd_outl(0xb809b614,0x000003fc);
rtd_outl(0xb809b618,0x000003fc);
rtd_outl(0xb809b61c,0x000003fc);
rtd_outl(0xb809b620,0x000003fc);
rtd_outl(0xb809b624,0x000003fc);
rtd_outl(0xb809b628,0x000003fc);
rtd_outl(0xb809b62c,0x000003fc);
rtd_outl(0xb809b630,0x000003fc);
rtd_outl(0xb809b634,0x000003fc);
rtd_outl(0xb809b638,0x000003fc);
rtd_outl(0xb809b63c,0x000003fc);
rtd_outl(0xb809b640,0x000003fc);
rtd_outl(0xb809b644,0x000003fc);
rtd_outl(0xb809b648,0x000003fc);
rtd_outl(0xb809b64c,0x000003fc);
rtd_outl(0xb809b650,0x000003fc);
rtd_outl(0xb809b654,0x000003fc);
rtd_outl(0xb809b658,0x000003fc);
rtd_outl(0xb809b65c,0x000003fc);
rtd_outl(0xb809b660,0x000003de);
rtd_outl(0xb809b664,0x000003de);
rtd_outl(0xb809b668,0x000003de);
rtd_outl(0xb809b66c,0x000003de);
rtd_outl(0xb809b670,0x000003db);
rtd_outl(0xb809b674,0x000003de);
rtd_outl(0xb809b678,0x000003de);
rtd_outl(0xb809b67c,0x000003de);
rtd_outl(0xb809b680,0x00fff000);
rtd_outl(0xb809b684,0x00fff000);
rtd_outl(0xb809b688,0x00fff000);
rtd_outl(0xb809b68c,0x00fff000);
rtd_outl(0xb809b690,0x00fff000);
rtd_outl(0xb809b694,0x00fff000);
rtd_outl(0xb809b698,0x00fff000);
rtd_outl(0xb809b69c,0x00fff000);
rtd_outl(0xb809b6a0,0x00fff000);
rtd_outl(0xb809b6a4,0x00fff000);
rtd_outl(0xb809b6a8,0x00fff000);
rtd_outl(0xb809b6ac,0x00fff000);
rtd_outl(0xb809b6b0,0x00fff000);
rtd_outl(0xb809b6b4,0x00fff000);
rtd_outl(0xb809b6b8,0x00fff000);
rtd_outl(0xb809b6bc,0x00fff000);
rtd_outl(0xb809b6c0,0x00fff000);
rtd_outl(0xb809b6c4,0x00fff000);
rtd_outl(0xb809b6c8,0x00fff000);
rtd_outl(0xb809b6cc,0x00fff000);
rtd_outl(0xb809b6d0,0x00fff000);
rtd_outl(0xb809b6d4,0x00fff000);
rtd_outl(0xb809b6d8,0x00fff000);
rtd_outl(0xb809b6dc,0x00fff000);
rtd_outl(0xb809b6e0,0x00fff000);
rtd_outl(0xb809b6e4,0x00fff000);
rtd_outl(0xb809b6e8,0x00fff000);
rtd_outl(0xb809b6ec,0x00fff000);
rtd_outl(0xb809b6f0,0x00fff000);
rtd_outl(0xb809b6f4,0x00fff000);
rtd_outl(0xb809b6f8,0x00fff000);
rtd_outl(0xb809b6fc,0x00fff000);
rtd_outl(0xb809b900,0x001df800);
rtd_outl(0xb809b904,0x0010d800);
rtd_outl(0xb809b908,0x001bc1a4);
rtd_outl(0xb809b90c,0x00000000);
rtd_outl(0xb809b910,0x1f086000);
rtd_outl(0xb809b914,0x000f021c);
rtd_outl(0xb809b918,0x0c3c2e60);
rtd_outl(0xb809b91c,0x001df800);
rtd_outl(0xb809b920,0x0010d800); //skyredd_meander
rtd_outl(0xb809b924,0x00000001);
rtd_outl(0xb809b928,0x00000000);
rtd_outl(0xb809b92c,0x00000000);
rtd_outl(0xb809b930,0x00000000);
rtd_outl(0xb809b934,0x00000000);
rtd_outl(0xb809b938,0x00000000);
rtd_outl(0xb809b93c,0x00000000);
rtd_outl(0xb809b940,0x00000000);
rtd_outl(0xb809b944,0x00000000);
rtd_outl(0xb809b948,0x00000000);
rtd_outl(0xb809b94c,0x00000000);
rtd_outl(0xb809b950,0x00000000);
rtd_outl(0xb809b954,0x00000000);
rtd_outl(0xb809b958,0x00000000);
rtd_outl(0xb809b95c,0x00000000);
rtd_outl(0xb809b960,0x00000000);
rtd_outl(0xb809b964,0x00000000);
rtd_outl(0xb809b968,0x00000000);
rtd_outl(0xb809b96c,0x00000000);
rtd_outl(0xb809b970,0x000a0ac8);
//notfound//rtd_outl(0xb809b974,0x00000000);
//notfound//rtd_outl(0xb809b978,0x00000000);
//notfound//rtd_outl(0xb809b97c,0x00000000);
//notfound//rtd_outl(0xb809b980,0x00000000);
//notfound//rtd_outl(0xb809b984,0x00000000);
//notfound//rtd_outl(0xb809b988,0x00000000);
//notfound//rtd_outl(0xb809b98c,0x00000000);
//notfound//rtd_outl(0xb809b990,0x00000000);
//notfound//rtd_outl(0xb809b994,0x00000000);
//notfound//rtd_outl(0xb809b998,0x00000000);
//notfound//rtd_outl(0xb809b99c,0x00000000);
//notfound//rtd_outl(0xb809b9a0,0x00000000);
//notfound//rtd_outl(0xb809b9a4,0x00000000);
//notfound//rtd_outl(0xb809b9a8,0x00000000);
//notfound//rtd_outl(0xb809b9ac,0x00000000);
//notfound//rtd_outl(0xb809b9b0,0x00000000);
//notfound//rtd_outl(0xb809b9b4,0x00000000);
//notfound//rtd_outl(0xb809b9b8,0x00000000);
//notfound//rtd_outl(0xb809b9bc,0x00000000);
//notfound//rtd_outl(0xb809b9c0,0x00000000);
//notfound//rtd_outl(0xb809b9c4,0x00000000);
//notfound//rtd_outl(0xb809b9c8,0x00000000);
//notfound//rtd_outl(0xb809b9cc,0x00000000);
//notfound//rtd_outl(0xb809b9d0,0x00000000);
//notfound//rtd_outl(0xb809b9d4,0x00000000);
//notfound//rtd_outl(0xb809b9d8,0x00000000);
//notfound//rtd_outl(0xb809b9dc,0x00000000);
//notfound//rtd_outl(0xb809b9e0,0x00000000);
//notfound//rtd_outl(0xb809b9e4,0x00000000);
//notfound//rtd_outl(0xb809b9e8,0x00000000);
//notfound//rtd_outl(0xb809b9ec,0x00000000);
//notfound//rtd_outl(0xb809b9f0,0x00000000);
//notfound//rtd_outl(0xb809b9f4,0x00000000);
//notfound//rtd_outl(0xb809b9f8,0x00000000);
//notfound//rtd_outl(0xb809b9fc,0x00000000);
rtd_outl(0xb809ba00,0x06c08010);
rtd_outl(0xb809ba04,0xb4501400);
rtd_outl(0xb809ba08,0x3fdf00c6);
rtd_outl(0xb809ba0c,0x000001ff);
rtd_outl(0xb809ba10,0x00000000);
rtd_outl(0xb809ba14,0x00000000);
rtd_outl(0xb809ba18,0x00000000);
rtd_outl(0xb809ba1c,0x00000000);
rtd_outl(0xb809ba20,0x00000000);
rtd_outl(0xb809ba24,0x00000000);
rtd_outl(0xb809ba28,0x00000000);
rtd_outl(0xb809ba2c,0x00488049);
rtd_outl(0xb809ba30,0x000fc421);
rtd_outl(0xb809ba34,0x002dc0eb);
rtd_outl(0xb809ba38,0x00020001);
rtd_outl(0xb809ba3c,0x00000000);
rtd_outl(0xb809ba40,0x00000000);
//notfound//rtd_outl(0xb809ba44,0x00000000);
//notfound//rtd_outl(0xb809ba48,0x00000000);
//notfound//rtd_outl(0xb809ba4c,0x00000000);
rtd_outl(0xb809ba50,0x00000000);
rtd_outl(0xb809ba54,0x00000000);
rtd_outl(0xb809ba58,0x00000000);
rtd_outl(0xb809ba5c,0x00000000);
rtd_outl(0xb809ba60,0x00000000);
rtd_outl(0xb809ba64,0x00000000);
rtd_outl(0xb809ba68,0x00008000);
rtd_outl(0xb809ba6c,0x00000000);
rtd_outl(0xb809ba70,0x00000000);
rtd_outl(0xb809ba74,0x00000000);
rtd_outl(0xb809ba78,0x00000000);
//notfound//rtd_outl(0xb809ba7c,0x00000000);
//notfound//rtd_outl(0xb809ba80,0x00000000);
//notfound//rtd_outl(0xb809ba84,0x00000000);
//notfound//rtd_outl(0xb809ba88,0x00000000);
//notfound//rtd_outl(0xb809ba8c,0x00000000);
//notfound//rtd_outl(0xb809ba90,0x00000000);
//notfound//rtd_outl(0xb809ba94,0x00000000);
//notfound//rtd_outl(0xb809ba98,0x00000000);
//notfound//rtd_outl(0xb809ba9c,0x00000000);
//notfound//rtd_outl(0xb809baa0,0x00000000);
//notfound//rtd_outl(0xb809baa4,0x00000000);
//notfound//rtd_outl(0xb809baa8,0x00000000);
//notfound//rtd_outl(0xb809baac,0x00000000);
//notfound//rtd_outl(0xb809bab0,0x00000000);
//notfound//rtd_outl(0xb809bab4,0x00000000);
//notfound//rtd_outl(0xb809bab8,0x00000000);
rtd_outl(0xb809babc,0x0e903a40);
rtd_outl(0xb809bac0,0x00000000);
rtd_outl(0xb809bac4,0x00000000);
rtd_outl(0xb809bac8,0x00000000);
rtd_outl(0xb809bacc,0x0e903a40);
rtd_outl(0xb809bad0,0x00000000);
rtd_outl(0xb809bad4,0x00000000);
rtd_outl(0xb809bad8,0x00000000);
rtd_outl(0xb809badc,0x00000000);
rtd_outl(0xb809bae0,0x00000000);
rtd_outl(0xb809bae4,0x00000000);
rtd_outl(0xb809bae8,0x00000000);
rtd_outl(0xb809baec,0x00000000);
rtd_outl(0xb809baf0,0x00000000);
rtd_outl(0xb809baf4,0x00000000);
rtd_outl(0xb809baf8,0x00000000);
rtd_outl(0xb809bafc,0x00000000);
rtd_outl(0xb809bb00,0xb4b4b4b4);
rtd_outl(0xb809bb04,0xb4b4b4b4);
rtd_outl(0xb809bb08,0xb4b4b4b4);
rtd_outl(0xb809bb0c,0xb4b4b4b4);
rtd_outl(0xb809bb10,0xb4b4b4b4);
rtd_outl(0xb809bb14,0xb4b4b4b4);
rtd_outl(0xb809bb18,0xb4b4b4b4);
rtd_outl(0xb809bb1c,0xb4b4b4b4);
rtd_outl(0xb809bb20,0x00000078);
rtd_outl(0xb809bb24,0xffffffff);
rtd_outl(0xb809bb28,0x3ffffe49);
rtd_outl(0xb809bb2c,0x70f3fe4a);
rtd_outl(0xb809bb30,0x00060a1c);
rtd_outl(0xb809bb34,0x0030e780);
rtd_outl(0xb809bb38,0x0001fa40);
rtd_outl(0xb809bb3c,0x0000625b);
rtd_outl(0xb809bb40,0x0fd23f48);
rtd_outl(0xb809bb44,0x0fd23f48);
rtd_outl(0xb809bb48,0x0fd23f48);
rtd_outl(0xb809bb4c,0x0fd23f48);
rtd_outl(0xb809bb50,0x0fd23f48);
rtd_outl(0xb809bb54,0x0fd23f48);
rtd_outl(0xb809bb58,0x0fd23f48);
rtd_outl(0xb809bb5c,0x0fd23f48);
rtd_outl(0xb809bb60,0x0fd23f48);
rtd_outl(0xb809bb64,0x0fd23f48);
rtd_outl(0xb809bb68,0x0fd23f48);
rtd_outl(0xb809bb6c,0x0fd23f48);
rtd_outl(0xb809bb70,0x0fd23f48);
rtd_outl(0xb809bb74,0x0fd23f48);
rtd_outl(0xb809bb78,0x0fd23f48);
rtd_outl(0xb809bb7c,0x0fd23f48);
rtd_outl(0xb809bb80,0x30461f54);
rtd_outl(0xb809bb84,0x3747a40a);
rtd_outl(0xb809bb88,0x3f762f39);
rtd_outl(0xb809bb8c,0x3f86a1b7);
rtd_outl(0xb809bb90,0x3fc6215f);
rtd_outl(0xb809bb94,0x3fc60f0c);
rtd_outl(0xb809bb98,0x3d160350);
rtd_outl(0xb809bb9c,0x3f960424);
rtd_outl(0xb809bba0,0x30461e31);
rtd_outl(0xb809bba4,0x2946201e);
rtd_outl(0xb809bba8,0x35861f1b);
rtd_outl(0xb809bbac,0x3b588fc5);
rtd_outl(0xb809bbb0,0x3d662534);
rtd_outl(0xb809bbb4,0x3dc60d3d);
rtd_outl(0xb809bbb8,0x3fc6038d);
rtd_outl(0xb809bbbc,0x3fc60262);
rtd_outl(0xb809bbc0,0x32461c7a);
rtd_outl(0xb809bbc4,0x2c761c6e);
rtd_outl(0xb809bbc8,0x2c761b14);
rtd_outl(0xb809bbcc,0x3a5887e7);
rtd_outl(0xb809bbd0,0x3ba63535);
rtd_outl(0xb809bbd4,0x3b460c5e);
rtd_outl(0xb809bbd8,0x3fc60125);
rtd_outl(0xb809bbdc,0x3fc60315);
rtd_outl(0xb809bbe0,0x32261606);
rtd_outl(0xb809bbe4,0x2f561624);
rtd_outl(0xb809bbe8,0x2fc61445);
rtd_outl(0xb809bbec,0x35466093);
rtd_outl(0xb809bbf0,0x357608ba);
rtd_outl(0xb809bbf4,0x3aa897a0);
rtd_outl(0xb809bbf8,0x3de5fbba);
rtd_outl(0xb809bbfc,0x3ac5fcbe);
rtd_outl(0xb809bc00,0x00000a90);
rtd_outl(0xb809bc04,0x00000000);
rtd_outl(0xb809bc08,0x00000000);
rtd_outl(0xb809bc0c,0x000003c0);
rtd_outl(0xb809bc10,0x2468bc01);
rtd_outl(0xb809bc14,0x00000011);
rtd_outl(0xb809bc18,0x00000000);
rtd_outl(0xb809bc1c,0x00000000);
//rtd_outl(0xb809bc20,0x00000000);
rtd_outl(0xb809bc20,0x00000100);  //iir disable
rtd_outl(0xb809bc24,0x00000870);
rtd_outl(0xb809bc28,0x0001110c);
rtd_outl(0xb809bc2c,0x00044042);
rtd_outl(0xb809bc30,0x0083ff25);
rtd_outl(0xb809bc34,0x00008888);
rtd_outl(0xb809bc38,0x00008888);
rtd_outl(0xb809bc3c,0x0ff22288);
rtd_outl(0xb809bc40,0x00016004);
rtd_outl(0xb809bc44,0x000835bc);
rtd_outl(0xb809bc48,0x00018002);
rtd_outl(0xb809bc4c,0x00075140);
rtd_outl(0xb809bc50,0x0004dcb0);
rtd_outl(0xb809bc54,0x0006c032);
rtd_outl(0xb809bc58,0x00018002);
rtd_outl(0xb809bc5c,0x000500d0);
rtd_outl(0xb809bc60,0x000011d4);
rtd_outl(0xb809bc64,0x0006f058);
rtd_outl(0xb809bc68,0x0000020d);
rtd_outl(0xb809bc6c,0x00028020);
rtd_outl(0xb809bc70,0x00014010);
rtd_outl(0xb809bc74,0x001a8600);
rtd_outl(0xb809bc78,0x00014010);
rtd_outl(0xb809bc7c,0x00028020);
rtd_outl(0xb809bc80,0x00080180);
rtd_outl(0xb809bc84,0x00028020);
rtd_outl(0xb809bc88,0x000801d0);
rtd_outl(0xb809bc8c,0x00806040);
rtd_outl(0xb809bc90,0x00000010);
rtd_outl(0xb809bc94,0x00c08000);
rtd_outl(0xb809bc98,0x00002020);
rtd_outl(0xb809bc9c,0x00077402);
rtd_outl(0xb809bca0,0x00086402);
rtd_outl(0xb809bca4,0x00000000);
rtd_outl(0xb809bca8,0x00000000);
rtd_outl(0xb809bcac,0x00000000);
rtd_outl(0xb809bcb0,0x00000000);
rtd_outl(0xb809bcb4,0x00000000);
rtd_outl(0xb809bcb8,0x00000000);
rtd_outl(0xb809bcbc,0x00000000);
rtd_outl(0xb809bcc0,0x00000000);
rtd_outl(0xb809bcc4,0x00000000);
rtd_outl(0xb809bcc8,0x00000000);
rtd_outl(0xb809bccc,0x00000000);
rtd_outl(0xb809bcd0,0x00000000);
rtd_outl(0xb809bcd4,0x00000000);
rtd_outl(0xb809bcd8,0x00000000);
rtd_outl(0xb809bcdc,0x00000000);
rtd_outl(0xb809bce0,0x00000000);
rtd_outl(0xb809bce4,0x00000000);
rtd_outl(0xb809bce8,0x00000000);
rtd_outl(0xb809bcec,0x00000000);
rtd_outl(0xb809bcf0,0x00000000);
rtd_outl(0xb809bcf4,0x00000008);
rtd_outl(0xb809bcf8,0x00000000);
rtd_outl(0xb809bcfc,0x00000000);
rtd_outl(0xb809bd00,0x010873c0);
rtd_outl(0xb809bd04,0x00000000);
rtd_outl(0xb809bd08,0x00004080);
rtd_outl(0xb809bd0c,0x00000000);
rtd_outl(0xb809bd10,0x00000000);
rtd_outl(0xb809bd14,0x00000000);
rtd_outl(0xb809bd18,0x0000402c);
rtd_outl(0xb809bd1c,0x00000000);
rtd_outl(0xb809bd20,0x00004026);
rtd_outl(0xb809bd24,0x00000000);
rtd_outl(0xb809bd28,0x00000000);
rtd_outl(0xb809bd2c,0x0000402a);
rtd_outl(0xb809bd30,0x00000000);
rtd_outl(0xb809bd34,0x00004022);
rtd_outl(0xb809bd38,0x00000000);
rtd_outl(0xb809bd3c,0x00000000);
rtd_outl(0xb809bd40,0x00000000);
rtd_outl(0xb809bd44,0x00000000);
rtd_outl(0xb809bd48,0x00000000);
rtd_outl(0xb809bd4c,0x00000000);
rtd_outl(0xb809bd50,0x00000000);
rtd_outl(0xb809bd54,0x00000000);
rtd_outl(0xb809bd58,0x00000000);
rtd_outl(0xb809bd5c,0x00000000);
rtd_outl(0xb809bd60,0x00000000);
rtd_outl(0xb809bd64,0x00000000);
rtd_outl(0xb809bd68,0x00000000);
rtd_outl(0xb809bd6c,0x00000000);
rtd_outl(0xb809bd70,0x00000000);
rtd_outl(0xb809bd74,0x00000000);
rtd_outl(0xb809bd78,0x00000000);
rtd_outl(0xb809bd7c,0x00000000);
rtd_outl(0xb809bd80,0x00000000);
rtd_outl(0xb809bd84,0x00000000);
rtd_outl(0xb809bd88,0x00000000);
rtd_outl(0xb809bd8c,0x00000000);
rtd_outl(0xb809bd90,0x00000000);
rtd_outl(0xb809bd94,0x00000000);
rtd_outl(0xb809bd98,0x00000000);
rtd_outl(0xb809bd9c,0x00000000);
rtd_outl(0xb809bda0,0xc3c5cede);
rtd_outl(0xb809bda4,0x00000000);
rtd_outl(0xb809bda8,0xc4c6edc8);
rtd_outl(0xb809bdac,0x00000000);
rtd_outl(0xb809bdb0,0xc4c7edc7);
rtd_outl(0xb809bdb4,0x00000000);
rtd_outl(0xb809bdb8,0xc3edcbc7);
rtd_outl(0xb809bdbc,0x00000000);
rtd_outl(0xb809bdc0,0xd3b3d484);
rtd_outl(0xb809bdc4,0x9ca191a7);
rtd_outl(0xb809bdc8,0xda414263);
rtd_outl(0xb809bdcc,0x5e585298);
rtd_outl(0xb809bdd0,0xd93c4060);
rtd_outl(0xb809bdd4,0x555c4687);
rtd_outl(0xb809bdd8,0xa5959a95);
rtd_outl(0xb809bddc,0x9d9fd49c);
//notfound//rtd_outl(0xb809bde0,0x00000000);
//notfound//rtd_outl(0xb809bde4,0x00000000);
//notfound//rtd_outl(0xb809bde8,0x00000000);
//notfound//rtd_outl(0xb809bdec,0x00000000);
//notfound//rtd_outl(0xb809bdf0,0x00000000);
//notfound//rtd_outl(0xb809bdf4,0x00000000);
//notfound//rtd_outl(0xb809bdf8,0x00000000);
//notfound//rtd_outl(0xb809bdfc,0x00000000);
rtd_outl(0xb809be00,0x8708000a);
rtd_outl(0xb809be04,0x00000000);
rtd_outl(0xb809be08,0x00000080);
rtd_outl(0xb809be0c,0x00000000);
rtd_outl(0xb809be10,0x0000001f);
rtd_outl(0xb809be14,0xffffffff);
rtd_outl(0xb809be18,0xffffffff);
rtd_outl(0xb809be1c,0xffffffff);
rtd_outl(0xb809be20,0xffffffff);
rtd_outl(0xb809be24,0x00000000);
rtd_outl(0xb809be28,0x00000000);
rtd_outl(0xb809be2c,0x00000000);
rtd_outl(0xb809be30,0x00000000);
rtd_outl(0xb809be34,0x00000000);
rtd_outl(0xb809be38,0x00000000);
rtd_outl(0xb809be3c,0x00000000);
rtd_outl(0xb809be40,0x00000000);
rtd_outl(0xb809be44,0x00000000);
rtd_outl(0xb809be48,0x00000000);
rtd_outl(0xb809be4c,0x00000000);
rtd_outl(0xb809be50,0x00000000);
rtd_outl(0xb809be54,0x00000000);
rtd_outl(0xb809be58,0x00000000);
rtd_outl(0xb809be5c,0x00000000);
rtd_outl(0xb809be60,0x00000000);
rtd_outl(0xb809be64,0x03030303);
rtd_outl(0xb809be68,0x00001806);
rtd_outl(0xb809be6c,0x0013fc03);
rtd_outl(0xb809be70,0x03081000);
rtd_outl(0xb809be74,0x1544c1c4);
rtd_outl(0xb809be78,0x1f79d6d8);
rtd_outl(0xb809be7c,0x0c41001f);
rtd_outl(0xb809be80,0x18b520c5);
rtd_outl(0xb809be84,0x018b524f);
rtd_outl(0xb809be88,0x00100e64);
rtd_outl(0xb809be8c,0x00a02800);
rtd_outl(0xb809be90,0x003c2800);
rtd_outl(0xb809be94,0x000000ce);
rtd_outl(0xb809be98,0x012c4a00);
rtd_outl(0xb809be9c,0x005f3f00);
rtd_outl(0xb809bea0,0x00000110);
rtd_outl(0xb809bea4,0x22222222);
rtd_outl(0xb809bea8,0x22222222);
rtd_outl(0xb809beac,0x22222222);
rtd_outl(0xb809beb0,0x00222222);
rtd_outl(0xb809beb4,0xbebebebe);
rtd_outl(0xb809beb8,0xbebebebe);
rtd_outl(0xb809bebc,0xbebebebe);
rtd_outl(0xb809bec0,0x00bebebe);
rtd_outl(0xb809bec4,0x50505050);
rtd_outl(0xb809bec8,0x50505050);
rtd_outl(0xb809becc,0x50505050);
rtd_outl(0xb809bed0,0x00505050);
rtd_outl(0xb809bed4,0x00875f00);
rtd_outl(0xb809bed8,0x00000d60);
rtd_outl(0xb809bedc,0x00000144);
rtd_outl(0xb809bee0,0x00873c00);
rtd_outl(0xb809bee4,0x00000420);
rtd_outl(0xb809bee8,0x00000083);
rtd_outl(0xb809beec,0x003d1512);
rtd_outl(0xb809bef0,0x000087f0);
rtd_outl(0xb809bef4,0x00001928);
rtd_outl(0xb809bef8,0x00000000);
rtd_outl(0xb809befc,0x00000003);
rtd_outl(0xb809bf00,0x00101028);
rtd_outl(0xb809bf04,0x8600ef00);
rtd_outl(0xb809bf08,0xc0906030);
rtd_outl(0xb809bf0c,0x00006e19);
rtd_outl(0xb809bf10,0x88888888);
rtd_outl(0xb809bf14,0x08888888);
rtd_outl(0xb809bf18,0x77777777);
rtd_outl(0xb809bf1c,0x87777777);
rtd_outl(0xb809bf20,0x00007fff);
//notfound//rtd_outl(0xb809bf24,0x00000000);
//notfound//rtd_outl(0xb809bf28,0x00000000);
rtd_outl(0xb809bf2c,0x00a286c6);
rtd_outl(0xb809bf30,0x00040200);
rtd_outl(0xb809bf34,0x000000c9);
rtd_outl(0xb809bf38,0x00ff7d14);
rtd_outl(0xb809bf3c,0x000a0700);
rtd_outl(0xb809bf40,0x00000084);
rtd_outl(0xb809bf44,0x00964b00);
rtd_outl(0xb809bf48,0x00040200);
rtd_outl(0xb809bf4c,0x00000082);
rtd_outl(0xb809bf50,0x006e320a);
rtd_outl(0xb809bf54,0x00060500);
rtd_outl(0xb809bf58,0x00000048);
rtd_outl(0xb809bf5c,0x006e3c00);
rtd_outl(0xb809bf60,0x00060400);
rtd_outl(0xb809bf64,0x000000c4);
rtd_outl(0xb809bf68,0x000600c0);
rtd_outl(0xb809bf6c,0x000c0240);
rtd_outl(0xb809bf70,0x0006e064);
rtd_outl(0xb809bf74,0x88877877);
rtd_outl(0xb809bf78,0x07787788);
rtd_outl(0xb809bf7c,0x88866866);
rtd_outl(0xb809bf80,0x06676688);
rtd_outl(0xb809bf84,0x40404040);
rtd_outl(0xb809bf88,0x40404040);
rtd_outl(0xb809bf8c,0x40404040);
rtd_outl(0xb809bf90,0x00404040);
rtd_outl(0xb809bf94,0x00000040);
rtd_outl(0xb809bf98,0x00000190);
rtd_outl(0xb809bf9c,0x00070701);
rtd_outl(0xb809bfa0,0x00020ff3);
rtd_outl(0xb809bfa4,0x00050500);
rtd_outl(0xb809bfa8,0x00013441);
rtd_outl(0xb809bfac,0x0064640a);
rtd_outl(0xb809bfb0,0x00007aa0);
rtd_outl(0xb809bfb4,0x00505000);
rtd_outl(0xb809bfb8,0x00002220);
rtd_outl(0xb809bfbc,0x00000021);
rtd_outl(0xb809bfc0,0x3fffffff);
rtd_outl(0xb809bfc4,0x00000000);
rtd_outl(0xb809bfc8,0x00000000);
rtd_outl(0xb809bfcc,0x15555555);
rtd_outl(0xb809bfd0,0x3fffffff);
rtd_outl(0xb809bfd4,0x3fffffff);
rtd_outl(0xb809bfd8,0x000efc00);
rtd_outl(0xb809bfdc,0x00086c00);
rtd_outl(0xb809bfe0,0x000873c0);
rtd_outl(0xb809bfe4,0xffffffff);
rtd_outl(0xb809bfe8,0x00000000);
rtd_outl(0xb809bfec,0x00000000);
rtd_outl(0xb809bff0,0x76543210);
rtd_outl(0xb809bff4,0xfedcba98);
rtd_outl(0xb809bff8,0x88888888);
rtd_outl(0xb809bffc,0x08888888);
//rtd_outl(0xb809c000,0x01800000);
//rtd_outl(0xb809c004,0x01880000);
//rtd_outl(0xb809c008,0x01900000);
//rtd_outl(0xb809c00c,0x01980000);
//rtd_outl(0xb809c010,0x01a00000);
//rtd_outl(0xb809c014,0x01a80000);
//rtd_outl(0xb809c018,0x0187e900);
//rtd_outl(0xb809c01c,0x018fe900);
//rtd_outl(0xb809c020,0x0197e900);
//rtd_outl(0xb809c024,0x019fe900);
//rtd_outl(0xb809c028,0x01a7e900);
//rtd_outl(0xb809c02c,0x01afe900);
rtd_outl(0xb809c030,0x00040000);
rtd_outl(0xb809c034,0x000003c0);
rtd_outl(0xb809c038,0x0021001f);
rtd_outl(0xb809c03c,0x00000000);
rtd_outl(0xb809c040,0x0001001f);
rtd_outl(0xb809c044,0x00000000);
rtd_outl(0xb809c048,0x0001001f);
rtd_outl(0xb809c04c,0x00000000);
rtd_outl(0xb809c050,0x0001001f);
rtd_outl(0xb809c054,0x00000000);
rtd_outl(0xb809c058,0x00000000);
rtd_outl(0xb809c05c,0x00000000);
rtd_outl(0xb809c060,0x00000000);
rtd_outl(0xb809c064,0x00000000);
rtd_outl(0xb809c068,0x00000000);
rtd_outl(0xb809c06c,0x00000f00);
rtd_outl(0xb809c070,0x0021001f);
rtd_outl(0xb809c074,0x00000000);
rtd_outl(0xb809c078,0x00000000);
rtd_outl(0xb809c07c,0x00000000);
rtd_outl(0xb809c080,0x00000000);
rtd_outl(0xb809c084,0x00000000);
rtd_outl(0xb809c088,0x00000000);
rtd_outl(0xb809c08c,0x00000530);
rtd_outl(0xb809c090,0x0021001f);
rtd_outl(0xb809c094,0x00000000);
rtd_outl(0xb809c098,0x0011001f);
rtd_outl(0xb809c09c,0x00000000);
rtd_outl(0xb809c0a0,0x0011001f);
rtd_outl(0xb809c0a4,0x00000000);
rtd_outl(0xb809c0a8,0x0021c3c0);
rtd_outl(0xb809c0ac,0x000870f0);
rtd_outl(0xb809c0b0,0x00001080);
rtd_outl(0xb809c0b4,0x0053f03c);
rtd_outl(0xb809c0b8,0x00000000);
rtd_outl(0xb809c0bc,0xffffffff);
rtd_outl(0xb809c0c0,0x00000000);
rtd_outl(0xb809c0c4,0x00000000);
rtd_outl(0xb809c0c8,0x00000000);
rtd_outl(0xb809c0cc,0x00000000);
rtd_outl(0xb809c0d0,0x00000000);
rtd_outl(0xb809c0d4,0x00000000);
//rtd_outl(0xb809c0d8,0x01d9a000);  //mv04_2
//rtd_outl(0xb809c0dc,0x01dbbc00);
rtd_outl(0xb809c0e0,0x000005fd);
rtd_outl(0xb809c0e4,0x00000948);
rtd_outl(0xb809c0e8,0x00000000);
rtd_outl(0xb809c0ec,0x000e600f);
rtd_outl(0xb809c0f0,0x00000000);
rtd_outl(0xb809c0f4,0x00000601);
rtd_outl(0xb809c0f8,0x02101de7);
//notfound//rtd_outl(0xb809c0fc,0x00000000);
//rtd_outl(0xb809c100,0x01c00000);
//rtd_outl(0xb809c104,0x01c00000);
//rtd_outl(0xb809c108,0x00000000);
//rtd_outl(0xb809c10c,0x00000000);
rtd_outl(0xb809c110,0x000003c0);
rtd_outl(0xb809c114,0x0021001f);
rtd_outl(0xb809c118,0x00000000);
rtd_outl(0xb809c11c,0x0001001f);
rtd_outl(0xb809c120,0x00000000);
//rtd_outl(0xb809c124,0x01c80000);
//rtd_outl(0xb809c128,0x01c80000);
//rtd_outl(0xb809c12c,0x00000000);
//rtd_outl(0xb809c130,0x00000000);
rtd_outl(0xb809c134,0x000001e0);
rtd_outl(0xb809c138,0x0021001f);
rtd_outl(0xb809c13c,0x00000000);
rtd_outl(0xb809c140,0x0001001f);
rtd_outl(0xb809c144,0x00000000);
//rtd_outl(0xb809c148,0x01cc0000);
//rtd_outl(0xb809c14c,0x01cc0000);
//rtd_outl(0xb809c150,0x01cd0e00);
//rtd_outl(0xb809c154,0x01cd0e00);
rtd_outl(0xb809c158,0x00000080);
rtd_outl(0xb809c15c,0x0021001f);
rtd_outl(0xb809c160,0x00000000);
rtd_outl(0xb809c164,0x0001001f);
rtd_outl(0xb809c168,0x00000000);
//rtd_outl(0xb809c16c,0x01cd1000);
//rtd_outl(0xb809c170,0x01cd1000);
//rtd_outl(0xb809c174,0x00000000);
//rtd_outl(0xb809c178,0x00000000);
rtd_outl(0xb809c17c,0x00000080);
rtd_outl(0xb809c180,0x0021001f);
rtd_outl(0xb809c184,0x00000000);
rtd_outl(0xb809c188,0x0001001f);
rtd_outl(0xb809c18c,0x00000000);
rtd_outl(0xb809c190,0x0021c0f0);
rtd_outl(0xb809c194,0x0021c0f0);
rtd_outl(0xb809c198,0x0021c03c);
rtd_outl(0xb809c19c,0x000870f0);
rtd_outl(0xb809c1a0,0x08081e3c);
rtd_outl(0xb809c1a4,0x00000000);
rtd_outl(0xb809c1a8,0x00000000);
rtd_outl(0xb809c1ac,0x00000000);
rtd_outl(0xb809c1b0,0x00000000);
rtd_outl(0xb809c1b4,0x00000000);
rtd_outl(0xb809c1b8,0x00000000);
rtd_outl(0xb809c1bc,0x0000c072);
rtd_outl(0xb809c1c0,0x00000415);
rtd_outl(0xb809c1c4,0x00000000);
rtd_outl(0xb809c1c8,0x00000000);
rtd_outl(0xb809c1cc,0x00181800);
rtd_outl(0xb809c1d0,0x00007e54);
rtd_outl(0xb809c1d4,0x0003c21b);
rtd_outl(0xb809c1d8,0x0003c03c);
rtd_outl(0xb809c1dc,0x00f000f0);
rtd_outl(0xb809c1e0,0x00007e90);
rtd_outl(0xb809c1e4,0x0003c21c);
rtd_outl(0xb809c1e8,0x0003c000);
rtd_outl(0xb809c1ec,0x00f000b4);
rtd_outl(0xb809c1f0,0x0000082b);
rtd_outl(0xb809c1f4,0x000005df);
rtd_outl(0xb809c1f8,0x001dd070);
rtd_outl(0xb809c1fc,0x000000e6);
//rtd_outl(0xb809c200,0x01cd6000);
//rtd_outl(0xb809c204,0x01d00300);
rtd_outl(0xb809c208,0x00000500);
rtd_outl(0xb809c20c,0x0002a800);
rtd_outl(0xb809c210,0x13e1001f);
//rtd_outl(0xb809c214,0x01d2b000);
//rtd_outl(0xb809c218,0x01d55300);
rtd_outl(0xb809c21c,0x00000500);
rtd_outl(0xb809c220,0x00015800);
rtd_outl(0xb809c224,0x12e1001f);
rtd_outl(0xb809c228,0x0001001f);
//rtd_outl(0xb809c22c,0x01d56000);
//rtd_outl(0xb809c230,0x01d78000);
//rtd_outl(0xb809c234,0x01d77c00);
//rtd_outl(0xb809c238,0x01d99c00);
rtd_outl(0xb809c23c,0x00000400);
rtd_outl(0xb809c240,0x00011000);
rtd_outl(0xb809c244,0x0fa1001f);
//rtd_outl(0xb809c248,0x01dbc000);
//rtd_outl(0xb809c24c,0x01e00000);
//rtd_outl(0xb809c250,0x01dff800);
//rtd_outl(0xb809c254,0x01e43800);
rtd_outl(0xb809c258,0x00000800);
rtd_outl(0xb809c25c,0x00022000);
rtd_outl(0xb809c260,0x1e21001f);
rtd_outl(0xb809c264,0x0001001f);
rtd_outl(0xb809c268,0x0001001f);
rtd_outl(0xb809c26c,0x0001001f);
rtd_outl(0xb809c270,0x0001001f);
rtd_outl(0xb809c274,0x0001001f);
rtd_outl(0xb809c278,0x0001001f);
//rtd_outl(0xb809c27c,0x01b00000);
//rtd_outl(0xb809c280,0x01b80000);
//rtd_outl(0xb809c284,0x01b7e900);
//rtd_outl(0xb809c288,0x01bfe900);
rtd_outl(0xb809c28c,0x00000000);
rtd_outl(0xb809c290,0x00000000);
rtd_outl(0xb809c294,0x00000000);
rtd_outl(0xb809c298,0x00000000);
rtd_outl(0xb809c29c,0x00000000);
rtd_outl(0xb809c2a0,0x00000000);
rtd_outl(0xb809c2a4,0x00000000);
rtd_outl(0xb809c2a8,0x00000000);
rtd_outl(0xb809c2ac,0x00000000);
rtd_outl(0xb809c2b0,0x00000000);
rtd_outl(0xb809c2b4,0x00000000);
rtd_outl(0xb809c2b8,0x00000000);
rtd_outl(0xb809c2bc,0x0010e1e0);
rtd_outl(0xb809c2c0,0x000870f0);
rtd_outl(0xb809c2c4,0x000870f0);
rtd_outl(0xb809c2c8,0x000870f0);
rtd_outl(0xb809c2cc,0x00000000);
rtd_outl(0xb809c2d0,0x00000000);
rtd_outl(0xb809c2d4,0x00000000);
rtd_outl(0xb809c2d8,0x00000000);
rtd_outl(0xb809c2dc,0x00000000);
rtd_outl(0xb809c2e0,0x00000000);
rtd_outl(0xb809c2e4,0x00000000);
rtd_outl(0xb809c2e8,0x00000000);
rtd_outl(0xb809c2ec,0x00000000);
rtd_outl(0xb809c2f0,0x00000000);
rtd_outl(0xb809c2f4,0x00000000);
rtd_outl(0xb809c2f8,0x0040e0ff);
//notfound//rtd_outl(0xb809c2fc,0x00000000);
//notfound//rtd_outl(0xb809c300,0x00000000);
//notfound//rtd_outl(0xb809c304,0x00000000);
//notfound//rtd_outl(0xb809c308,0x00000000);
rtd_outl(0xb809c30c,0x00000082);
rtd_outl(0xb809c310,0x00000000);
rtd_outl(0xb809c314,0x00000000);
rtd_outl(0xb809c318,0x00000000);
rtd_outl(0xb809c31c,0x00000000);
rtd_outl(0xb809c320,0x00000000);
rtd_outl(0xb809c324,0x00000000);
rtd_outl(0xb809c328,0x00000000);
rtd_outl(0xb809c32c,0x00000000);
rtd_outl(0xb809c330,0x00000000);
rtd_outl(0xb809c334,0x00000000);
rtd_outl(0xb809c338,0x00000000);
rtd_outl(0xb809c33c,0x00000000);
rtd_outl(0xb809c340,0x00000000);
rtd_outl(0xb809c344,0x00000000);
rtd_outl(0xb809c348,0x00000000);
rtd_outl(0xb809c34c,0x00000000);
rtd_outl(0xb809c350,0x11300000);
rtd_outl(0xb809c354,0x0f000000);
rtd_outl(0xb809c358,0x10e00000);
rtd_outl(0xb809c35c,0x1e000000);
rtd_outl(0xb809c360,0x10e00000);
rtd_outl(0xb809c364,0x1e000000);
rtd_outl(0xb809c368,0x10e00000);
rtd_outl(0xb809c36c,0x1e000000);
rtd_outl(0xb809c370,0x10e00000);
rtd_outl(0xb809c374,0x1e000000);
rtd_outl(0xb809c378,0x00000000);
rtd_outl(0xb809c37c,0x00000000);
rtd_outl(0xb809c380,0x00000000);
rtd_outl(0xb809c384,0x00000000);
rtd_outl(0xb809c388,0x00000000);
rtd_outl(0xb809c38c,0x00000000);
rtd_outl(0xb809c390,0x00000000);
//notfound//rtd_outl(0xb809c394,0x00000000);
rtd_outl(0xb809c398,0x00000000);
//notfound//rtd_outl(0xb809c39c,0x00000000);
rtd_outl(0xb809c3a0,0x00000000);
rtd_outl(0xb809c3a4,0x00000000);
//notfound//rtd_outl(0xb809c3a8,0x00000000);
//notfound//rtd_outl(0xb809c3ac,0x00000000);
rtd_outl(0xb809c3b0,0x00020006);
rtd_outl(0xb809c3b4,0x000003b4);
rtd_outl(0xb809c3b8,0x00000000);
rtd_outl(0xb809c3bc,0x00000000);
rtd_outl(0xb809c3c0,0x00000000);
rtd_outl(0xb809c3c4,0x00000000);
rtd_outl(0xb809c3c8,0x00000190);
rtd_outl(0xb809c3cc,0x00000000);
rtd_outl(0xb809c3d0,0x00010cf0);
rtd_outl(0xb809c3d4,0x0007810e);
rtd_outl(0xb809c3d8,0x00000000);
rtd_outl(0xb809c3dc,0x00000000);
rtd_outl(0xb809c3e0,0x00000000);
rtd_outl(0xb809c3e4,0x00000000);
rtd_outl(0xb809c3e8,0x00000000);
rtd_outl(0xb809c3ec,0x00000000);
rtd_outl(0xb809c3f0,0x00000000);
rtd_outl(0xb809c3f4,0x00000000);
//notfound//rtd_outl(0xb809c3f8,0x00000000);
//notfound//rtd_outl(0xb809c3fc,0x00000000);
rtd_outl(0xb809c400,0x40043200);
rtd_outl(0xb809c404,0x404008ff);
rtd_outl(0xb809c408,0x00142024);
rtd_outl(0xb809c40c,0x00000004);
rtd_outl(0xb809c410,0x00402010);
rtd_outl(0xb809c414,0x00000600);
rtd_outl(0xb809c418,0x0003ff26);
rtd_outl(0xb809c41c,0x281d241c);
rtd_outl(0xb809c420,0x30303028);
rtd_outl(0xb809c424,0x80802928);
rtd_outl(0xb809c428,0x04006080);
rtd_outl(0xb809c42c,0x0020012c);
rtd_outl(0xb809c430,0x00000000);
rtd_outl(0xb809c434,0x0007017a);
rtd_outl(0xb809c438,0x00000083);
//notfound//rtd_outl(0xb809c43c,0x00000000);
rtd_outl(0xb809c440,0x40043200);
rtd_outl(0xb809c444,0x404008ff);
rtd_outl(0xb809c448,0x00142134);
rtd_outl(0xb809c44c,0x00000004);
rtd_outl(0xb809c450,0x00402010);
rtd_outl(0xb809c454,0x00000601);
rtd_outl(0xb809c458,0x0003ff36);
rtd_outl(0xb809c45c,0x281d241c);
rtd_outl(0xb809c460,0x30303028);
rtd_outl(0xb809c464,0x80802928);
rtd_outl(0xb809c468,0x04008080);
rtd_outl(0xb809c46c,0x0000012c);
rtd_outl(0xb809c470,0x00000000);
rtd_outl(0xb809c474,0x0007017c);
rtd_outl(0xb809c478,0x00000083);
rtd_outl(0xb809c47c,0x00000080);
rtd_outl(0xb809c480,0x00800801);
rtd_outl(0xb809c484,0x00800a01);
rtd_outl(0xb809c488,0x08080040);
rtd_outl(0xb809c48c,0x04008020);
rtd_outl(0xb809c490,0x00000000);
rtd_outl(0xb809c494,0x00040000);
rtd_outl(0xb809c498,0x00000000);
rtd_outl(0xb809c49c,0x00000000);
rtd_outl(0xb809c4a0,0x00040000);
rtd_outl(0xb809c4a4,0x00000000);
//notfound//rtd_outl(0xb809c4a8,0x00000000);
//notfound//rtd_outl(0xb809c4ac,0x00000000);
rtd_outl(0xb809c4b0,0x30202221);
rtd_outl(0xb809c4b4,0x27263030);
rtd_outl(0xb809c4b8,0x00002928);
rtd_outl(0xb809c4bc,0x30202221);
rtd_outl(0xb809c4c0,0x27263030);
rtd_outl(0xb809c4c4,0x00002928);
//notfound//rtd_outl(0xb809c4c8,0x00000000);
rtd_outl(0xb809c4cc,0x00000000);
rtd_outl(0xb809c4d0,0x00000000);
rtd_outl(0xb809c4d4,0x00000000);
rtd_outl(0xb809c4d8,0x00000000);
rtd_outl(0xb809c4dc,0x00000000);
rtd_outl(0xb809c4e0,0x00000000);
//notfound//rtd_outl(0xb809c4e4,0x00000000);
//notfound//rtd_outl(0xb809c4e8,0x00000000);
rtd_outl(0xb809c4e4,0x00000000);
rtd_outl(0xb809c4f0,0x00003101);
rtd_outl(0xb809c4f4,0x00000000);
rtd_outl(0xb809c4f8,0x00000000);
rtd_outl(0xb809c4fc,0x00000000);
rtd_outl(0xb809c500,0x18280800);
rtd_outl(0xb809c504,0x3fdd6003);
rtd_outl(0xb809c508,0x8c602500);
rtd_outl(0xb809c50c,0x28a28ac5);
rtd_outl(0xb809c510,0x0000000a);
rtd_outl(0xb809c514,0x00000000);
rtd_outl(0xb809c518,0x32179400);
rtd_outl(0xb809c51c,0x04e09800);
rtd_outl(0xb809c520,0x00010005);
rtd_outl(0xb809c524,0x9c640800);
rtd_outl(0xb809c528,0x000000d3);
rtd_outl(0xb809c52c,0x00802810);
rtd_outl(0xb809c530,0x00050000);
rtd_outl(0xb809c534,0xfffefffc);
rtd_outl(0xb809c538,0x23b28400);
rtd_outl(0xb809c53c,0x07f833a0);
rtd_outl(0xb809c540,0x028001ff);
rtd_outl(0xb809c544,0x030c000f);
rtd_outl(0xb809c548,0x7f67f100);
rtd_outl(0xb809c54c,0x00367195);
rtd_outl(0xb809c550,0x1c000448);
rtd_outl(0xb809c554,0x0030004f);
rtd_outl(0xb809c558,0xdf984715);
rtd_outl(0xb809c55c,0x00a41a20);
rtd_outl(0xb809c560,0x07fbfbfe);
rtd_outl(0xb809c564,0x30c14000);
rtd_outl(0xb809c568,0x0001ffd1);
rtd_outl(0xb809c56c,0x003f4060);
rtd_outl(0xb809c570,0x3fc00007);
rtd_outl(0xb809c574,0x133ffe6e);
rtd_outl(0xb809c578,0x3ffffee3);
rtd_outl(0xb809c57c,0x006300d8);
rtd_outl(0xb809c580,0x00000000);
rtd_outl(0xb809c584,0x00c10000);
rtd_outl(0xb809c588,0x00d50174);
rtd_outl(0xb809c58c,0x0206016e);
rtd_outl(0xb809c590,0x00060006);
rtd_outl(0xb809c594,0x01730000);
rtd_outl(0xb809c598,0x00531fff);
rtd_outl(0xb809c59c,0x1fff1fff);
rtd_outl(0xb809c5a0,0x000000ae);
//notfound//rtd_outl(0xb809c5a4,0x00000000);
//notfound//rtd_outl(0xb809c5a8,0x00000000);
//notfound//rtd_outl(0xb809c5ac,0x00000000);
//notfound//rtd_outl(0xb809c5b0,0x00000000);
//notfound//rtd_outl(0xb809c5b4,0x00000000);
//notfound//rtd_outl(0xb809c5b8,0x00000000);
//notfound//rtd_outl(0xb809c5bc,0x00000000);
rtd_outl(0xb809c5c0,0x0000bf04);
rtd_outl(0xb809c5c4,0x00000000);
rtd_outl(0xb809c5c8,0x18040101);
rtd_outl(0xb809c5cc,0x41c00202);
rtd_outl(0xb809c5d0,0x00000000);
rtd_outl(0xb809c5d4,0x00000000);
rtd_outl(0xb809c5d8,0x00000000);
rtd_outl(0xb809c5dc,0x000c0000);
rtd_outl(0xb809c5e0,0x00000000);
rtd_outl(0xb809c5e4,0x00000000);
rtd_outl(0xb809c5e8,0x0000c000);
rtd_outl(0xb809c5ec,0x00000000);
rtd_outl(0xb809c5f0,0x00000000);
rtd_outl(0xb809c5f4,0x00000000);
rtd_outl(0xb809c5f8,0x00000000);
rtd_outl(0xb809c5fc,0x00000000);
rtd_outl(0xb809c600,0x001df800);
rtd_outl(0xb809c604,0x0110d800);
rtd_outl(0xb809c608,0x000005d2);
rtd_outl(0xb809c60c,0x00000000);
rtd_outl(0xb809c610,0x00000000);
rtd_outl(0xb809c614,0x000f021c);
rtd_outl(0xb809c618,0x0c3c2e60);
//notfound//rtd_outl(0xb809c61c,0x00000000);
rtd_outl(0xb809c620,0x00000000);
rtd_outl(0xb809c624,0x00000000);
//notfound//rtd_outl(0xb809c628,0x00000000);
//notfound//rtd_outl(0xb809c62c,0x00000000);
//notfound//rtd_outl(0xb809c630,0x00000000);
//notfound//rtd_outl(0xb809c634,0x00000000);
//notfound//rtd_outl(0xb809c638,0x00000000);
//notfound//rtd_outl(0xb809c63c,0x00000000);
//notfound//rtd_outl(0xb809c640,0x00000000);
//notfound//rtd_outl(0xb809c644,0x00000000);
//notfound//rtd_outl(0xb809c648,0x00000000);
//notfound//rtd_outl(0xb809c64c,0x00000000);
//notfound//rtd_outl(0xb809c650,0x00000000);
//notfound//rtd_outl(0xb809c654,0x00000000);
//notfound//rtd_outl(0xb809c658,0x00000000);
//notfound//rtd_outl(0xb809c65c,0x00000000);
//notfound//rtd_outl(0xb809c660,0x00000000);
//notfound//rtd_outl(0xb809c664,0x00000000);
rtd_outl(0xb809c668,0x00000000);
rtd_outl(0xb809c66c,0x00000000);
rtd_outl(0xb809c670,0x00047e90);
//notfound//rtd_outl(0xb809c674,0x00000000);
//notfound//rtd_outl(0xb809c678,0x00000000);
//notfound//rtd_outl(0xb809c67c,0x00000000);
//notfound//rtd_outl(0xb809c680,0x00000000);
//notfound//rtd_outl(0xb809c684,0x00000000);
//notfound//rtd_outl(0xb809c688,0x00000000);
//notfound//rtd_outl(0xb809c68c,0x00000000);
//notfound//rtd_outl(0xb809c690,0x00000000);
//notfound//rtd_outl(0xb809c694,0x00000000);
//notfound//rtd_outl(0xb809c698,0x00000000);
//notfound//rtd_outl(0xb809c69c,0x00000000);
//notfound//rtd_outl(0xb809c6a0,0x00000000);
//notfound//rtd_outl(0xb809c6a4,0x00000000);
//notfound//rtd_outl(0xb809c6a8,0x00000000);
//notfound//rtd_outl(0xb809c6ac,0x00000000);
//notfound//rtd_outl(0xb809c6b0,0x00000000);
//notfound//rtd_outl(0xb809c6b4,0x00000000);
//notfound//rtd_outl(0xb809c6b8,0x00000000);
//notfound//rtd_outl(0xb809c6bc,0x00000000);
//notfound//rtd_outl(0xb809c6c0,0x00000000);
//notfound//rtd_outl(0xb809c6c4,0x00000000);
//notfound//rtd_outl(0xb809c6c8,0x00000000);
//notfound//rtd_outl(0xb809c6cc,0x00000000);
//notfound//rtd_outl(0xb809c6d0,0x00000000);
//notfound//rtd_outl(0xb809c6d4,0x00000000);
//notfound//rtd_outl(0xb809c6d8,0x00000000);
//notfound//rtd_outl(0xb809c6dc,0x00000000);
//notfound//rtd_outl(0xb809c6e0,0x00000000);
//notfound//rtd_outl(0xb809c6e4,0x00000000);
//notfound//rtd_outl(0xb809c6e8,0x00000000);
//notfound//rtd_outl(0xb809c6ec,0x00000000);
//notfound//rtd_outl(0xb809c6f0,0x00000000);
//notfound//rtd_outl(0xb809c6f4,0x00000000);
//notfound//rtd_outl(0xb809c6f8,0x00000000);
//notfound//rtd_outl(0xb809c6fc,0x00000000);
rtd_outl(0xb809c700,0x00043d41);
rtd_outl(0xb809c704,0x140c0701);
rtd_outl(0xb809c708,0x00048c42);
rtd_outl(0xb809c70c,0x002d8c07);
rtd_outl(0xb809c710,0x0c040000);
rtd_outl(0xb809c714,0x00000010);
rtd_outl(0xb809c718,0x0017ec03);
rtd_outl(0xb809c71c,0x07810ef0);
rtd_outl(0xb809c720,0x077c010e);
rtd_outl(0xb809c724,0x00021a00);
rtd_outl(0xb809c728,0x043401df);
//rtd_outl(0xb809c72c,0x04a1a094);  //disable me2 double scan for 2x2
rtd_outl(0xb809c72c,0x0461a094);
rtd_outl(0xb809c730,0x18112222);
rtd_outl(0xb809c734,0x00690101);
rtd_outl(0xb809c738,0x00f00407);
rtd_outl(0xb809c73c,0x54321234);
rtd_outl(0xb809c740,0x00206666);
rtd_outl(0xb809c744,0x1ff0c020);
rtd_outl(0xb809c748,0x0007fdff);
rtd_outl(0xb809c74c,0x490e7f40);
rtd_outl(0xb809c750,0x09000416);
rtd_outl(0xb809c754,0x10081200);
rtd_outl(0xb809c758,0x09201000);
rtd_outl(0xb809c75c,0x00010080);
rtd_outl(0xb809c760,0x60438e7f);
rtd_outl(0xb809c764,0x18202080);
rtd_outl(0xb809c768,0x30303030);
rtd_outl(0xb809c76c,0x60608030);
rtd_outl(0xb809c770,0x60606060);
rtd_outl(0xb809c774,0x60806060);
rtd_outl(0xb809c778,0x60606060);
rtd_outl(0xb809c77c,0x80606060);
rtd_outl(0xb809c780,0x80808080);
rtd_outl(0xb809c784,0x21cfe040);
rtd_outl(0xb809c788,0x00000416);
rtd_outl(0xb809c78c,0x00000000);
rtd_outl(0xb809c790,0x00000000);
rtd_outl(0xb809c794,0x00000000);
rtd_outl(0xb809c798,0x00400000);
rtd_outl(0xb809c79c,0x20208060);
rtd_outl(0xb809c7a0,0x20202020);
rtd_outl(0xb809c7a4,0x30802020);
rtd_outl(0xb809c7a8,0x30303030);
rtd_outl(0xb809c7ac,0x80303030);
rtd_outl(0xb809c7b0,0x30303030);
rtd_outl(0xb809c7b4,0x30303030);
rtd_outl(0xb809c7b8,0x80808080);
rtd_outl(0xb809c7bc,0x00ffff80);
rtd_outl(0xb809c7c0,0x00080402);
rtd_outl(0xb809c7c4,0x00011421);
rtd_outl(0xb809c7c8,0x00002800);
rtd_outl(0xb809c7cc,0x00000000);
rtd_outl(0xb809c7d0,0x00000000);
rtd_outl(0xb809c7d4,0xefc00a00);
rtd_outl(0xb809c7d8,0xf3e86c00);
rtd_outl(0xb809c7dc,0x7ce88971);
rtd_outl(0xb809c7e0,0x04002840);
rtd_outl(0xb809c7e4,0x0001fa40);
rtd_outl(0xb809c7e8,0x0001fa40);
rtd_outl(0xb809c7ec,0x007e9027);
rtd_outl(0xb809c7f0,0x007e9028);
rtd_outl(0xb809c7f4,0x00fa4028);
//notfound//rtd_outl(0xb809c7f8,0x00000000);
//notfound//rtd_outl(0xb809c7fc,0x00000000);
rtd_outl(0xb809c800,0x1e280041);
rtd_outl(0xb809c804,0x00100041);
rtd_outl(0xb809c808,0xcf851c0c);
rtd_outl(0xb809c80c,0x20820716);
rtd_outl(0xb809c810,0x00000608);
rtd_outl(0xb809c814,0x03700000);
rtd_outl(0xb809c818,0x10f003eb);
rtd_outl(0xb809c81c,0x00027755);
rtd_outl(0xb809c820,0x0000a029);
rtd_outl(0xb809c824,0x82592900);
rtd_outl(0xb809c828,0x07920fa6);
rtd_outl(0xb809c82c,0x05f489c3);
rtd_outl(0xb809c830,0xffeaffde);
rtd_outl(0xb809c834,0xff52ff82);
rtd_outl(0xb809c838,0x20a55402);
rtd_outl(0xb809c83c,0x07f40039);
rtd_outl(0xb809c840,0x00000000);
rtd_outl(0xb809c844,0x503e71f3);
rtd_outl(0xb809c848,0x00000008);
rtd_outl(0xb809c84c,0x00000000);
rtd_outl(0xb809c850,0x00845200);
rtd_outl(0xb809c854,0x002012c6);
//notfound//rtd_outl(0xb809c858,0x00000000);
//notfound//rtd_outl(0xb809c85c,0x00000000);
rtd_outl(0xb809c860,0x0140a005);
rtd_outl(0xb809c864,0x00000000);
rtd_outl(0xb809c868,0x02003c00);
rtd_outl(0xb809c86c,0x00000208);
rtd_outl(0xb809c870,0x003ff7f9);
rtd_outl(0xb809c874,0x43bc0000);
rtd_outl(0xb809c878,0x00002c00);
rtd_outl(0xb809c87c,0x02010082);
rtd_outl(0xb809c880,0x00000040);
rtd_outl(0xb809c884,0x034c3fc0);
rtd_outl(0xb809c888,0x161001d1);
rtd_outl(0xb809c88c,0x0a8133ff);
rtd_outl(0xb809c890,0x05500000);
rtd_outl(0xb809c894,0x00000000);
rtd_outl(0xb809c898,0x00000000);
rtd_outl(0xb809c89c,0x80000000);
rtd_outl(0xb809c8a0,0x0010ff00);
rtd_outl(0xb809c8a4,0x00008100);
rtd_outl(0xb809c8a8,0x00004008);
rtd_outl(0xb809c8ac,0x06100100);
rtd_outl(0xb809c8b0,0x00000004);
rtd_outl(0xb809c8b4,0x84024008);
rtd_outl(0xb809c8b8,0x00000008);
rtd_outl(0xb809c8bc,0x00000000);
rtd_outl(0xb809c8c0,0x08084000);
rtd_outl(0xb809c8c4,0x20040030);
rtd_outl(0xb809c8c8,0x00000000);
rtd_outl(0xb809c8cc,0x08000000);
rtd_outl(0xb809c8d0,0x00301010);
rtd_outl(0xb809c8d4,0x01018010);
rtd_outl(0xb809c8d8,0x04104010);
rtd_outl(0xb809c8dc,0x01040101);
rtd_outl(0xb809c8e0,0x00000000);
rtd_outl(0xb809c8e4,0x00000000);
rtd_outl(0xb809c8e8,0x00000000);
rtd_outl(0xb809c8ec,0x00000000);
rtd_outl(0xb809c8f0,0x00000000);
rtd_outl(0xb809c8f4,0x00000000);
rtd_outl(0xb809c8f8,0x04000000);
//notfound//rtd_outl(0xb809c8fc,0x00000000);
rtd_outl(0xb809c900,0x00010ef0);
rtd_outl(0xb809c904,0x00000000);
rtd_outl(0xb809c908,0x00f00800);
rtd_outl(0xb809c90c,0x00000000);
rtd_outl(0xb809c910,0x00000000);
rtd_outl(0xb809c914,0x00000000);
rtd_outl(0xb809c918,0x00000000);
rtd_outl(0xb809c91c,0x00000000);
rtd_outl(0xb809c920,0x00000000);
//notfound//rtd_outl(0xb809c924,0x00000000);
//notfound//rtd_outl(0xb809c928,0x00000000);
//notfound//rtd_outl(0xb809c92c,0x00000000);
//notfound//rtd_outl(0xb809c930,0x00000000);
rtd_outl(0xb809c934,0x00000000);
rtd_outl(0xb809c938,0x00000002);
rtd_outl(0xb809c93c,0x00000000);
rtd_outl(0xb809c940,0x00007e88);
rtd_outl(0xb809c944,0x00007b95);
rtd_outl(0xb809c948,0x00000000);
rtd_outl(0xb809c94c,0x00000000);
rtd_outl(0xb809c950,0x00007e87);
rtd_outl(0xb809c954,0x00007e87);
rtd_outl(0xb809c958,0x00000000);
rtd_outl(0xb809c95c,0x00000000);
rtd_outl(0xb809c960,0x00000009);
rtd_outl(0xb809c964,0x0000000e);
rtd_outl(0xb809c968,0x03b66b14);
rtd_outl(0xb809c96c,0x00001aaf);
rtd_outl(0xb809c970,0x00007e90);
rtd_outl(0xb809c974,0x00007e90);
rtd_outl(0xb809c978,0x00000000);
rtd_outl(0xb809c97c,0x00000000);
rtd_outl(0xb809c980,0x00000000);
rtd_outl(0xb809c984,0x000000f0);
rtd_outl(0xb809c988,0x00008cef);
rtd_outl(0xb809c98c,0x00000000);
rtd_outl(0xb809c990,0x00007e90);
rtd_outl(0xb809c994,0x00007e90);
rtd_outl(0xb809c998,0x00007e90);
rtd_outl(0xb809c99c,0x0000000b);
rtd_outl(0xb809c9a0,0x0000000b);
rtd_outl(0xb809c9a4,0x0000000b);
rtd_outl(0xb809c9a8,0x00000000);
rtd_outl(0xb809c9ac,0x00000000);
rtd_outl(0xb809c9b0,0x00000000);
rtd_outl(0xb809c9b4,0x00000000);
rtd_outl(0xb809c9b8,0x00000000);
rtd_outl(0xb809c9bc,0x00000000);
rtd_outl(0xb809c9c0,0x00000000);
rtd_outl(0xb809c9c4,0x00000000);
rtd_outl(0xb809c9c8,0x00000000);
rtd_outl(0xb809c9cc,0x00000000);
rtd_outl(0xb809c9d0,0x00000000);
rtd_outl(0xb809c9d4,0x00000022);
rtd_outl(0xb809c9d8,0x000d10b5);
rtd_outl(0xb809c9dc,0x0000002c);
rtd_outl(0xb809c9e0,0x0000000c);
rtd_outl(0xb809c9e4,0x00340a7e);
rtd_outl(0xb809c9e8,0x00341329);
rtd_outl(0xb809c9ec,0x00000000);
rtd_outl(0xb809c9f0,0x00004003);
rtd_outl(0xb809c9f4,0x00000000);
rtd_outl(0xb809c9f8,0x00000000);
rtd_outl(0xb809c9fc,0x00000000);
rtd_outl(0xb809ca00,0x00000000);
rtd_outl(0xb809ca04,0x00000000);
rtd_outl(0xb809ca08,0x00000000);
rtd_outl(0xb809ca0c,0x00000000);
rtd_outl(0xb809ca10,0x00000000);
rtd_outl(0xb809ca14,0x00000000);
rtd_outl(0xb809ca18,0x00000000);
rtd_outl(0xb809ca1c,0x00000000);
rtd_outl(0xb809ca20,0x00000000);
rtd_outl(0xb809ca24,0x00000000);
rtd_outl(0xb809ca28,0x00000000);
rtd_outl(0xb809ca2c,0x00000000);
rtd_outl(0xb809ca30,0x00000000);
rtd_outl(0xb809ca34,0x00000000);
rtd_outl(0xb809ca38,0x00000000);
rtd_outl(0xb809ca3c,0x00000000);
rtd_outl(0xb809ca40,0x00000000);
rtd_outl(0xb809ca44,0x00000000);
rtd_outl(0xb809ca48,0x00000000);
rtd_outl(0xb809ca4c,0x00000000);
rtd_outl(0xb809ca50,0x00000000);
rtd_outl(0xb809ca54,0x00000000);
rtd_outl(0xb809ca58,0x00000000);
rtd_outl(0xb809ca5c,0x00000000);
rtd_outl(0xb809ca60,0x00000011);
rtd_outl(0xb809ca64,0x00000887);
rtd_outl(0xb809ca68,0x00000047);
rtd_outl(0xb809ca6c,0x00000000);
rtd_outl(0xb809ca70,0x00000000);
rtd_outl(0xb809ca74,0x00000000);
rtd_outl(0xb809ca78,0x00000000);
rtd_outl(0xb809ca7c,0x00000000);
rtd_outl(0xb809ca80,0x00004de5);
rtd_outl(0xb809ca84,0x0000b9c9);
rtd_outl(0xb809ca88,0x000081d4);
rtd_outl(0xb809ca8c,0x00006924);
rtd_outl(0xb809ca90,0x00005662);
rtd_outl(0xb809ca94,0x00004c2c);
rtd_outl(0xb809ca98,0x000049ec);
rtd_outl(0xb809ca9c,0x000049d0);
rtd_outl(0xb809caa0,0x000051c5);
rtd_outl(0xb809caa4,0x00004df1);
rtd_outl(0xb809caa8,0x00004b6e);
rtd_outl(0xb809caac,0x0000f080);
rtd_outl(0xb809cab0,0x00007301);
rtd_outl(0xb809cab4,0x00004ff0);
rtd_outl(0xb809cab8,0x00004dcc);
rtd_outl(0xb809cabc,0x000051d5);
rtd_outl(0xb809cac0,0x00005053);
rtd_outl(0xb809cac4,0x00004f8b);
rtd_outl(0xb809cac8,0x00004d1d);
rtd_outl(0xb809cacc,0x0000ef8c);
rtd_outl(0xb809cad0,0x000075f6);
rtd_outl(0xb809cad4,0x00004da5);
rtd_outl(0xb809cad8,0x00004e7f);
rtd_outl(0xb809cadc,0x00005179);
rtd_outl(0xb809cae0,0x00005813);
rtd_outl(0xb809cae4,0x000057de);
rtd_outl(0xb809cae8,0x00005411);
rtd_outl(0xb809caec,0x000072f0);
rtd_outl(0xb809caf0,0x000061cc);
rtd_outl(0xb809caf4,0x0000e48b);
rtd_outl(0xb809caf8,0x00005608);
rtd_outl(0xb809cafc,0x00005624);
rtd_outl(0xb809cb00,0x00000000);
rtd_outl(0xb809cb04,0x00000000);
rtd_outl(0xb809cb08,0x00000000);
rtd_outl(0xb809cb0c,0x00000000);
rtd_outl(0xb809cb10,0x00000000);
rtd_outl(0xb809cb14,0x00000000);
rtd_outl(0xb809cb18,0x00000000);
rtd_outl(0xb809cb1c,0x00000000);
rtd_outl(0xb809cb20,0x00000000);
rtd_outl(0xb809cb24,0x00000000);
rtd_outl(0xb809cb28,0x00000000);
rtd_outl(0xb809cb2c,0x00000000);
rtd_outl(0xb809cb30,0x00000000);
rtd_outl(0xb809cb34,0x00000000);
rtd_outl(0xb809cb38,0x00000000);
rtd_outl(0xb809cb3c,0x00000000);
rtd_outl(0xb809cb40,0x00000000);
rtd_outl(0xb809cb44,0x00000000);
rtd_outl(0xb809cb48,0x00000000);
rtd_outl(0xb809cb4c,0x00000000);
rtd_outl(0xb809cb50,0x00000000);
rtd_outl(0xb809cb54,0x00000000);
rtd_outl(0xb809cb58,0x00000000);
rtd_outl(0xb809cb5c,0x00000000);
rtd_outl(0xb809cb60,0x00000014);
rtd_outl(0xb809cb64,0x00000000);
rtd_outl(0xb809cb68,0x0000006e);
rtd_outl(0xb809cb6c,0x0000013a);
rtd_outl(0xb809cb70,0x00000018);
rtd_outl(0xb809cb74,0x00000000);
rtd_outl(0xb809cb78,0x00000000);
rtd_outl(0xb809cb7c,0x0000000e);
rtd_outl(0xb809cb80,0x00000000);
rtd_outl(0xb809cb84,0x00000000);
rtd_outl(0xb809cb88,0x00000000);
rtd_outl(0xb809cb8c,0x00000000);
rtd_outl(0xb809cb90,0x00000000);
rtd_outl(0xb809cb94,0x00000000);
rtd_outl(0xb809cb98,0x00000000);
rtd_outl(0xb809cb9c,0x00000000);
rtd_outl(0xb809cba0,0x00000000);
rtd_outl(0xb809cba4,0x00000000);
rtd_outl(0xb809cba8,0x00000000);
rtd_outl(0xb809cbac,0x00000000);
rtd_outl(0xb809cbb0,0x00000000);
rtd_outl(0xb809cbb4,0x00000000);
rtd_outl(0xb809cbb8,0x00000000);
rtd_outl(0xb809cbbc,0x00000000);
rtd_outl(0xb809cbc0,0x00000000);
rtd_outl(0xb809cbc4,0x00000000);
rtd_outl(0xb809cbc8,0x00000000);
rtd_outl(0xb809cbcc,0x00000000);
rtd_outl(0xb809cbd0,0x00000000);
rtd_outl(0xb809cbd4,0x00000000);
rtd_outl(0xb809cbd8,0x00000000);
rtd_outl(0xb809cbdc,0x00000000);
rtd_outl(0xb809cbe0,0x00000000);
rtd_outl(0xb809cbe4,0x00000000);
rtd_outl(0xb809cbe8,0x00000002);
rtd_outl(0xb809cbec,0x00000027);
rtd_outl(0xb809cbf0,0x0000005f);
rtd_outl(0xb809cbf4,0x00000004);
rtd_outl(0xb809cbf8,0x00000000);
rtd_outl(0xb809cbfc,0x00000000);
rtd_outl(0xb809cc00,0x000194a6);
rtd_outl(0xb809cc04,0x0001f2d1);
rtd_outl(0xb809cc08,0x00019661);
rtd_outl(0xb809cc0c,0x0001b5f6);
rtd_outl(0xb809cc10,0x00019424);
rtd_outl(0xb809cc14,0x00018f1b);
rtd_outl(0xb809cc18,0x00018d5b);
rtd_outl(0xb809cc1c,0x00018c7e);
rtd_outl(0xb809cc20,0x000193c3);
rtd_outl(0xb809cc24,0x00019388);
rtd_outl(0xb809cc28,0x00019222);
rtd_outl(0xb809cc2c,0x00022f4d);
rtd_outl(0xb809cc30,0x000193da);
rtd_outl(0xb809cc34,0x00018e78);
rtd_outl(0xb809cc38,0x00018d7b);
rtd_outl(0xb809cc3c,0x00018c27);
rtd_outl(0xb809cc40,0x000192e6);
rtd_outl(0xb809cc44,0x00019287);
rtd_outl(0xb809cc48,0x00019105);
rtd_outl(0xb809cc4c,0x000229bc);
rtd_outl(0xb809cc50,0x000197fa);
rtd_outl(0xb809cc54,0x00018dc0);
rtd_outl(0xb809cc58,0x00018cae);
rtd_outl(0xb809cc5c,0x00018bf6);
rtd_outl(0xb809cc60,0x00018406);
rtd_outl(0xb809cc64,0x0001838d);
rtd_outl(0xb809cc68,0x000182d5);
rtd_outl(0xb809cc6c,0x00019246);
rtd_outl(0xb809cc70,0x00017f33);
rtd_outl(0xb809cc74,0x0002211d);
rtd_outl(0xb809cc78,0x00017d79);
rtd_outl(0xb809cc7c,0x00017ca8);
rtd_outl(0xb809cc80,0x000194a6);
rtd_outl(0xb809cc84,0x0001f2d1);
rtd_outl(0xb809cc88,0x00019661);
rtd_outl(0xb809cc8c,0x0001b5f6);
rtd_outl(0xb809cc90,0x00019424);
rtd_outl(0xb809cc94,0x00018f1b);
rtd_outl(0xb809cc98,0x00018d5b);
rtd_outl(0xb809cc9c,0x00018c7e);
rtd_outl(0xb809cca0,0x000193c3);
rtd_outl(0xb809cca4,0x00019388);
rtd_outl(0xb809cca8,0x00019222);
rtd_outl(0xb809ccac,0x00022f4d);
rtd_outl(0xb809ccb0,0x000193da);
rtd_outl(0xb809ccb4,0x00018e78);
rtd_outl(0xb809ccb8,0x00018d7b);
rtd_outl(0xb809ccbc,0x00018c27);
rtd_outl(0xb809ccc0,0x000192e6);
rtd_outl(0xb809ccc4,0x00019287);
rtd_outl(0xb809ccc8,0x00019105);
rtd_outl(0xb809cccc,0x000229bc);
rtd_outl(0xb809ccd0,0x000197fa);
rtd_outl(0xb809ccd4,0x00018dc0);
rtd_outl(0xb809ccd8,0x00018cae);
rtd_outl(0xb809ccdc,0x00018bf6);
rtd_outl(0xb809cce0,0x00018406);
rtd_outl(0xb809cce4,0x0001838d);
rtd_outl(0xb809cce8,0x00018214);
rtd_outl(0xb809ccec,0x0001930a);
rtd_outl(0xb809ccf0,0x00017f33);
rtd_outl(0xb809ccf4,0x0002211d);
rtd_outl(0xb809ccf8,0x00017d79);
rtd_outl(0xb809ccfc,0x00017ca8);
rtd_outl(0xb809cd00,0x00000000);
rtd_outl(0xb809cd04,0x00000000);
rtd_outl(0xb809cd08,0x00000000);
rtd_outl(0xb809cd0c,0x00000000);
rtd_outl(0xb809cd10,0xf0430b8b);
rtd_outl(0xb809cd14,0x0a1de10e);
rtd_outl(0xb809cd18,0x78000000);
rtd_outl(0xb809cd1c,0x10000000);
rtd_outl(0xb809cd20,0x10000000);
rtd_outl(0xb809cd24,0x00000000);
rtd_outl(0xb809cd28,0x0ff3fe20);
rtd_outl(0xb809cd2c,0x00008400);
rtd_outl(0xb809cd30,0x00001c00);
rtd_outl(0xb809cd34,0x00be1de0);
rtd_outl(0xb809cd38,0x23320204);
rtd_outl(0xb809cd3c,0x00200002);
rtd_outl(0xb809cd40,0x02008020);
rtd_outl(0xb809cd44,0x00102400);
rtd_outl(0xb809cd48,0x000ffc00);
rtd_outl(0xb809cd4c,0x008da492);
rtd_outl(0xb809cd50,0x00020052);
rtd_outl(0xb809cd54,0x02010080);
rtd_outl(0xb809cd58,0x00000000);
rtd_outl(0xb809cd5c,0x10102024);
rtd_outl(0xb809cd60,0x00000036);
rtd_outl(0xb809cd64,0x0080f8ff);
rtd_outl(0xb809cd68,0x00000205);
rtd_outl(0xb809cd6c,0x3f8003ff);
rtd_outl(0xb809cd70,0x20020008);
rtd_outl(0xb809cd74,0x00000000);
rtd_outl(0xb809cd78,0x00000402);
rtd_outl(0xb809cd7c,0x480da492);
rtd_outl(0xb809cd80,0x00000006);
rtd_outl(0xb809cd84,0x03008040);
rtd_outl(0xb809cd88,0x000000c0);
rtd_outl(0xb809cd8c,0x44466081);
rtd_outl(0xb809cd90,0x3ff00000);
rtd_outl(0xb809cd94,0x00000004);
rtd_outl(0xb809cd98,0x00000000);
rtd_outl(0xb809cd9c,0x00000000);
rtd_outl(0xb809cda0,0x00000000);
rtd_outl(0xb809cda4,0x00000000);
rtd_outl(0xb809cda8,0x1ff9c210);
rtd_outl(0xb809cdac,0x0000000d);
rtd_outl(0xb809cdb0,0x00508020);
rtd_outl(0xb809cdb4,0x09d10020);
rtd_outl(0xb809cdb8,0x061e10a3);
rtd_outl(0xb809cdbc,0x0021e100);
rtd_outl(0xb809cdc0,0x88222041);
rtd_outl(0xb809cdc4,0x2c005010);
rtd_outl(0xb809cdc8,0x00020527);
rtd_outl(0xb809cdcc,0x00233030);
rtd_outl(0xb809cdd0,0x00000101);
rtd_outl(0xb809cdd4,0x0080003f);
rtd_outl(0xb809cdd8,0x00000888);
rtd_outl(0xb809cddc,0x000ffc00);
rtd_outl(0xb809cde0,0x0003be00);
rtd_outl(0xb809cde4,0x00021a00);
rtd_outl(0xb809cde8,0x00000082);
rtd_outl(0xb809cdec,0x00000000);
rtd_outl(0xb809cdf0,0x00000000);
rtd_outl(0xb809cdf4,0x20000000);
rtd_outl(0xb809cdf8,0x00000000);
rtd_outl(0xb809cdfc,0x00f10080);
//notfound//rtd_outl(0xb809ce00,0x00000000);
//notfound//rtd_outl(0xb809ce04,0x00000000);
rtd_outl(0xb809ce08,0x00000000);
//notfound//rtd_outl(0xb809ce0c,0x00000000);
rtd_outl(0xb809ce10,0x00000000);
rtd_outl(0xb809ce14,0x0fff0fff);
rtd_outl(0xb809ce18,0x0fff0fff);
rtd_outl(0xb809ce1c,0x0fff0fff);
rtd_outl(0xb809ce20,0x0fff0fff);
rtd_outl(0xb809ce24,0x0fff0fff);
rtd_outl(0xb809ce28,0x0fff0fff);
rtd_outl(0xb809ce2c,0x00000000);
rtd_outl(0xb809ce30,0x3d008679);
rtd_outl(0xb809ce34,0x00000043);
rtd_outl(0xb809ce38,0x00000000);
rtd_outl(0xb809ce3c,0x00000000);
rtd_outl(0xb809ce40,0x00000000);
rtd_outl(0xb809ce44,0x00000000);
rtd_outl(0xb809ce48,0x00000000);
rtd_outl(0xb809ce4c,0x00000000);
rtd_outl(0xb809ce50,0x00000000);
rtd_outl(0xb809ce54,0x00000000);
rtd_outl(0xb809ce58,0x00000000);
rtd_outl(0xb809ce5c,0x00000000);
//notfound//rtd_outl(0xb809ce60,0x00000000);
//notfound//rtd_outl(0xb809ce64,0x00000000);
//notfound//rtd_outl(0xb809ce68,0x00000000);
//notfound//rtd_outl(0xb809ce6c,0x00000000);
//notfound//rtd_outl(0xb809ce70,0x00000000);
rtd_outl(0xb809ce74,0x00060906);
rtd_outl(0xb809ce78,0x000015ff);
rtd_outl(0xb809ce7c,0x00060906);
rtd_outl(0xb809ce80,0x000015ff);
rtd_outl(0xb809ce84,0x00005090);
rtd_outl(0xb809ce88,0x00064104);
rtd_outl(0xb809ce8c,0x00000000);
rtd_outl(0xb809ce90,0x00007444);
rtd_outl(0xb809ce94,0x84741600);
rtd_outl(0xb809ce98,0x90774000);
rtd_outl(0xb809ce9c,0x0001eec4);
rtd_outl(0xb809cea0,0x00050010);
rtd_outl(0xb809cea4,0x04050006);
rtd_outl(0xb809cea8,0x00001e7e);
rtd_outl(0xb809ceac,0x00010084);
rtd_outl(0xb809ceb0,0x04030080);
rtd_outl(0xb809ceb4,0x00000080);
rtd_outl(0xb809ceb8,0x00202000);
rtd_outl(0xb809cebc,0x0100c020);
rtd_outl(0xb809cec0,0x00000100);
rtd_outl(0xb809cec4,0x40808000);
rtd_outl(0xb809cec8,0x00052020);
rtd_outl(0xb809cecc,0x04028060);
rtd_outl(0xb809ced0,0x000000c0);
rtd_outl(0xb809ced4,0x00402000);
rtd_outl(0xb809ced8,0x0100a010);
rtd_outl(0xb809cedc,0x00000100);
rtd_outl(0xb809cee0,0x20808000);
rtd_outl(0xb809cee4,0x00062020);
rtd_outl(0xb809cee8,0x00000000);
rtd_outl(0xb809ceec,0x00000000);
rtd_outl(0xb809cef0,0x00000000);
rtd_outl(0xb809cef4,0x00000000);
//notfound//rtd_outl(0xb809cef8,0x00000000);
//notfound//rtd_outl(0xb809cefc,0x00000000);
rtd_outl(0xb809d000,0xc2e4019f);
rtd_outl(0xb809d004,0x0807e002);
//rtd_outl(0xb809d008,0x00000801);//skyredd, 0x00000040
rtd_outl(0xb809d00c,0x00000000);
rtd_outl(0xb809d010,0x08ca044c);
rtd_outl(0xb809d014,0x087003c0);
rtd_outl(0xb809d018,0x08700000);
rtd_outl(0xb809d01c,0x00000050);
rtd_outl(0xb809d020,0x00000000);
rtd_outl(0xb809d024,0x00000000);
rtd_outl(0xb809d028,0x003c0780);
//notfound//rtd_outl(0xb809d02c,0x00000000);
rtd_outl(0xb809d04c,0x00000000);
rtd_outl(0xb809d050,0x00000000);
//notfound//rtd_outl(0xb809d054,0x00000000);
//notfound//rtd_outl(0xb809d058,0x00000000);
//notfound//rtd_outl(0xb809d05c,0x00000000);
rtd_outl(0xb809d060,0x00000000);
rtd_outl(0xb809d064,0x00000000);
rtd_outl(0xb809d068,0x00000000);
rtd_outl(0xb809d06c,0x00000000);
//notfound//rtd_outl(0xb809d070,0x00000000);
//notfound//rtd_outl(0xb809d074,0x00000000);
//notfound//rtd_outl(0xb809d078,0x00000000);
//notfound//rtd_outl(0xb809d07c,0x00000000);
rtd_outl(0xb809d080,0x00000000);
rtd_outl(0xb809d084,0x00000000);
rtd_outl(0xb809d088,0x00000000);
rtd_outl(0xb809d08c,0x00000000);
rtd_outl(0xb809d090,0x00000000);
rtd_outl(0xb809d094,0x0f000000);
//notfound//rtd_outl(0xb809d098,0x00000000);
//notfound//rtd_outl(0xb809d09c,0x00000000);
rtd_outl(0xb809d0a0,0x1000ff00);
rtd_outl(0xb809d0a4,0x60010000);
rtd_outl(0xb809d0a8,0x00c8cc8c);
rtd_outl(0xb809d0ac,0x20008080);
rtd_outl(0xb809d0b0,0x0400826a);
rtd_outl(0xb809d0b4,0x0400843a);
rtd_outl(0xb809d0b8,0x000085bc);
rtd_outl(0xb809d0bc,0x00c8cc8c);
//notfound//rtd_outl(0xb809d0c0,0x00000000);
//notfound//rtd_outl(0xb809d0c4,0x00000000);
//notfound//rtd_outl(0xb809d0c8,0x00000000);
//notfound//rtd_outl(0xb809d0cc,0x00000000);
//notfound//rtd_outl(0xb809d0d0,0x00000000);
//notfound//rtd_outl(0xb809d0d4,0x00000000);
//notfound//rtd_outl(0xb809d0d8,0x00000000);
//notfound//rtd_outl(0xb809d0dc,0x00000000);
rtd_outl(0xb809d0e0,0x00000000);
rtd_outl(0xb809d0e4,0x00001000);
rtd_outl(0xb809d0e8,0x0000044b);
rtd_outl(0xb809d0ec,0x00000000);
rtd_outl(0xb809d0f0,0x05000000);
rtd_outl(0xb809d0f4,0x00000000);
rtd_outl(0xb809d0f8,0x00000000);
rtd_outl(0xb809d0fc,0x00000000);
rtd_outl(0xb809d100,0x8c8ca898);
rtd_outl(0xb809d104,0x108703c0);
rtd_outl(0xb809d108,0x7f02302a);
rtd_outl(0xb809d10c,0x004381e0);
rtd_outl(0xb809d110,0x0000801f);
rtd_outl(0xb809d114,0x32870780);
rtd_outl(0xb809d118,0x00023046);
rtd_outl(0xb809d11c,0x04004010);//vtrig240
rtd_outl(0xb809d120,0x07604037);//vtrig240
//rtd_outl(0xb809d124,0x07582a95);//vtrig240
rtd_outl(0xb809d124,0x43591a95);
rtd_outl(0xb809d128,0x28348838);
rtd_outl(0xb809d12c,0x24242424);
rtd_outl(0xb809d130,0x24242424);
rtd_outl(0xb809d134,0x31323224);
rtd_outl(0xb809d138,0x16706c25);
rtd_outl(0xb809d13c,0x021ca00a);
//rtd_outl(0xb809d140,0x148708a0);  // me2 row trig  =8
rtd_outl(0xb809d140,0x15110888);
rtd_outl(0xb809d144,0x00380438);
rtd_outl(0xb809d148,0x8715521b);
//notfound//rtd_outl(0xb809d14c,0x00000000);
//notfound//rtd_outl(0xb809d150,0x00000000);
//notfound//rtd_outl(0xb809d154,0x00000000);
//notfound//rtd_outl(0xb809d158,0x00000000);
//notfound//rtd_outl(0xb809d15c,0x00000000);
rtd_outl(0xb809d160,0x00010103);
rtd_outl(0xb809d164,0x008989c4);
rtd_outl(0xb809d168,0x00008010);
rtd_outl(0xb809d16c,0x80808030);
rtd_outl(0xb809d170,0x10103060);
rtd_outl(0xb809d174,0x44444444);
rtd_outl(0xb809d178,0x30364044);
rtd_outl(0xb809d17c,0x46463228);
rtd_outl(0xb809d180,0x00004646);
rtd_outl(0xb809d184,0x00000000);
rtd_outl(0xb809d188,0x435aa002);
rtd_outl(0xb809d18c,0x00010888);
rtd_outl(0xb809d190,0x00000000);
rtd_outl(0xb809d194,0x40603020);
//notfound//rtd_outl(0xb809d198,0x00000000);
//notfound//rtd_outl(0xb809d19c,0x00000000);
//notfound//rtd_outl(0xb809d1a0,0x00000000);
//notfound//rtd_outl(0xb809d1a4,0x00000000);
//notfound//rtd_outl(0xb809d1a8,0x00000000);
//notfound//rtd_outl(0xb809d1ac,0x00000000);
//notfound//rtd_outl(0xb809d1b0,0x00000000);
//notfound//rtd_outl(0xb809d1b4,0x00000000);
//notfound//rtd_outl(0xb809d1b8,0x00000000);
//notfound//rtd_outl(0xb809d1bc,0x00000000);
//notfound//rtd_outl(0xb809d1c0,0x00000000);
//notfound//rtd_outl(0xb809d1c4,0x00000000);
//notfound//rtd_outl(0xb809d1c8,0x00000000);
//notfound//rtd_outl(0xb809d1cc,0x00000000);
//notfound//rtd_outl(0xb809d1d0,0x00000000);
//notfound//rtd_outl(0xb809d1d4,0x00000000);
//notfound//rtd_outl(0xb809d1d8,0x00000000);
//notfound//rtd_outl(0xb809d1dc,0x00000000);
//notfound//rtd_outl(0xb809d1e0,0x00000000);
//notfound//rtd_outl(0xb809d1e4,0x00000000);
//notfound//rtd_outl(0xb809d1e8,0x00000000);
//notfound//rtd_outl(0xb809d1ec,0x00000000);
rtd_outl(0xb809d1f0,0x00004657);
rtd_outl(0xb809d1f4,0x02358000);
rtd_outl(0xb809d1f8,0x000008ca);
//notfound//rtd_outl(0xb809d1fc,0x00000000);
rtd_outl(0xb809d400,0x00004003);
rtd_outl(0xb809d404,0x00054000);
rtd_outl(0xb809d408,0x01832000);
rtd_outl(0xb809d40c,0x09040000);
rtd_outl(0xb809d410,0x8bff6800);
rtd_outl(0xb809d414,0xa001a001);
rtd_outl(0xb809d418,0x01a001be);
rtd_outl(0xb809d41c,0xaeaeaea0);
rtd_outl(0xb809d420,0x000001ae);
rtd_outl(0xb809d424,0x000001aa);
rtd_outl(0xb809d428,0x00000000);
rtd_outl(0xb809d42c,0x00000000);
rtd_outl(0xb809d430,0x00000000);
rtd_outl(0xb809d434,0x00000000);
rtd_outl(0xb809d438,0x00000000);
rtd_outl(0xb809d43c,0x00000000);
rtd_outl(0xb809d440,0x00000000);
rtd_outl(0xb809d444,0x00000000);
rtd_outl(0xb809d448,0x00000000);
rtd_outl(0xb809d44c,0x00000000);
rtd_outl(0xb809d450,0x00000000);
rtd_outl(0xb809d454,0x0000ff00);
rtd_outl(0xb809d458,0x00070000);
rtd_outl(0xb809d45c,0x00077770);
rtd_outl(0xb809d460,0x00000005);
rtd_outl(0xb809d464,0x00000000);
rtd_outl(0xb809d468,0x00000000);
rtd_outl(0xb809d46c,0x00000000);
rtd_outl(0xb809d470,0x00000000);
rtd_outl(0xb809d474,0x00000000);
rtd_outl(0xb809d478,0x1e003000);
//notfound//rtd_outl(0xb809d47c,0x00000000);
//notfound//rtd_outl(0xb809d480,0x00000000);
//notfound//rtd_outl(0xb809d484,0x00000000);
//notfound//rtd_outl(0xb809d488,0x00000000);
//notfound//rtd_outl(0xb809d48c,0x00000000);
//notfound//rtd_outl(0xb809d490,0x00000000);
rtd_outl(0xb809d494,0x00000000);
rtd_outl(0xb809d498,0x00000000);
rtd_outl(0xb809d49c,0x00800001);
rtd_outl(0xb809d4a0,0x80424001);
rtd_outl(0xb809d4a4,0x7c02a005);
rtd_outl(0xb809d4a8,0x808ad001);
rtd_outl(0xb809d4ac,0x600ac008);
rtd_outl(0xb809d4b0,0x80d06001);
rtd_outl(0xb809d4b4,0x6412e011);
rtd_outl(0xb809d4b8,0x8118f001);
rtd_outl(0xb809d4bc,0x681a001a);
rtd_outl(0xb809d4c0,0x81610001);
rtd_outl(0xb809d4c4,0x6c222023);
rtd_outl(0xb809d4c8,0x81a99001);
rtd_outl(0xb809d4cc,0x702a402c);
rtd_outl(0xb809d4d0,0x81f22001);
rtd_outl(0xb809d4d4,0x74326005);
rtd_outl(0xb809d4d8,0x6032b041);
rtd_outl(0xb809d4dc,0x70329811);
rtd_outl(0xb809d4e0,0xa082c001);
rtd_outl(0xb809d4e4,0x5802a81a);
rtd_outl(0xb809d4e8,0x60805041);
rtd_outl(0xb809d4ec,0x7802d81a);
rtd_outl(0xb809d4f0,0xa1106001);
rtd_outl(0xb809d4f4,0x4012e823);
rtd_outl(0xb809d4f8,0x6110f041);
rtd_outl(0xb809d4fc,0x60121823);
rtd_outl(0xb8099400,0x00000004);
rtd_outl(0xb8099404,0x08700f00);
rtd_outl(0xb8099410,0x00097878);
rtd_outl(0xb8099480,0x000a7878);
rtd_outl(0xb8099454,0x00002580);
rtd_outl(0xb80994c4,0x00002940);
//rtd_outl(0xb8099414,0x006ffc00);
//rtd_outl(0xb8099418,0x010e3000);
//rtd_outl(0xb809941c,0x01ac6400);
//rtd_outl(0xb8099420,0x024a9800);
//rtd_outl(0xb8099424,0x02e8cc00);
//rtd_outl(0xb8099428,0x03870000);
//rtd_outl(0xb809942c,0x03870000);
//rtd_outl(0xb8099430,0x03870000);
//rtd_outl(0xb8099434,0x010e3000);
//rtd_outl(0xb8099438,0x01ac6400);
//rtd_outl(0xb809943c,0x024a9800);
//rtd_outl(0xb8099440,0x02e8cc00);
//rtd_outl(0xb8099444,0x03870000);
//rtd_outl(0xb8099448,0x04253400);
//rtd_outl(0xb809944c,0x04253400);
//rtd_outl(0xb8099450,0x04253400);
//rtd_outl(0xb8099484,0x04253400);
//rtd_outl(0xb8099488,0x04d33a00);
//rtd_outl(0xb809948c,0x05814000);
//rtd_outl(0xb8099490,0x062f4600);
//rtd_outl(0xb8099494,0x06dd4c00);
//rtd_outl(0xb8099498,0x078b5200);
//rtd_outl(0xb809949c,0x078b5200);
//rtd_outl(0xb80994a0,0x078b5200);
//rtd_outl(0xb80994a4,0x04d33a00);
//rtd_outl(0xb80994a8,0x05814000);
//rtd_outl(0xb80994ac,0x062f4600);
//rtd_outl(0xb80994b0,0x06dd4c00);
//rtd_outl(0xb80994b4,0x078b5200);
//rtd_outl(0xb80994b8,0x08395800);
//rtd_outl(0xb80994bc,0x08395800);
//rtd_outl(0xb80994c0,0x08395800);
rtd_outl(0xb809ae00,0x00000004);
rtd_outl(0xb809ae04,0x08700f00);
rtd_outl(0xb809ae10,0x00097878);
rtd_outl(0xb809ae30,0x000a7878);
rtd_outl(0xb809ae50,0x00097878);
rtd_outl(0xb809ae70,0x000a7878);
//skyredd//rtd_outl(0xb8099460,0x00000701);
//skyredd//rtd_outl(0xb80994dc,0x00000701);
//skyredd//rtd_outl(0xb809ae1c,0x00000701);
//skyredd//rtd_outl(0xb809ae3c,0x00000701);
//skyredd//rtd_outl(0xb809ae5c,0x00000701);
//skyredd//rtd_outl(0xb809ae7c,0x00000701);
rtd_outl(0xb8099200,0x80780438);
rtd_outl(0xb8099204,0x014c0155);
rtd_outl(0xb8099208,0x083f0b09);
rtd_outl(0xb809920c,0x000eb74f);
rtd_outl(0xb8099284,0x016a0119);
rtd_outl(0xb8099288,0x083f0c0a);
rtd_outl(0xb809928c,0x000eb74f);
rtd_outl(0xb8099800,0x80780438);
rtd_outl(0xb8099804,0x014c0155);
rtd_outl(0xb8099884,0x016a0119);
rtd_outl(0xb809d500,0x808060c9);
rtd_outl(0xb809d504,0x02020002);
rtd_outl(0xb809d508,0x00000808);
rtd_outl(0xb809d50c,0xf00ae001);
rtd_outl(0xb809d510,0xf00ae014);
rtd_outl(0xb809d514,0x00000014);
rtd_outl(0xb809d518,0x0000000a);
rtd_outl(0xb809d51c,0x00408020);
rtd_outl(0xb809d520,0x00000000);
rtd_outl(0xb809d524,0x00000000);
rtd_outl(0xb809d528,0x12040001);
rtd_outl(0xb809d52c,0x0f0fca41);
rtd_outl(0xb809d530,0x0a000300);
rtd_outl(0xb809d534,0x3d080a0b);
rtd_outl(0xb809d538,0x02000006);
rtd_outl(0xb809d53c,0x000f003c);
rtd_outl(0xb809d540,0x0ed88003);
rtd_outl(0xb809d544,0x0060c808);
rtd_outl(0xb809d548,0x00000000);
rtd_outl(0xb809d54c,0x00000000);
rtd_outl(0xb809d550,0x00000000);
rtd_outl(0xb809d554,0x00000000);
rtd_outl(0xb809d558,0x00000000);
rtd_outl(0xb809d55c,0x00000000);
rtd_outl(0xb809d560,0x00000000);
rtd_outl(0xb809d564,0x00080100);
rtd_outl(0xb809d568,0x000000fa);
rtd_outl(0xb809d56c,0x004001f4);
rtd_outl(0xb809d570,0x02802336);
rtd_outl(0xb809d574,0x0000faa0);
rtd_outl(0xb809d578,0x00000000);
rtd_outl(0xb809d57c,0x00000000);
rtd_outl(0xb809d580,0x45170004);
rtd_outl(0xb809d584,0x0000060d);
rtd_outl(0xb809d588,0x1d1f4517);
rtd_outl(0xb809d58c,0x00000000);
rtd_outl(0xb809d590,0x10020130);
rtd_outl(0xb809d594,0x901450c8);
rtd_outl(0xb809d598,0x600322ee);
rtd_outl(0xb809d59c,0x14160028);
rtd_outl(0xb809d5a0,0x003082c7);
rtd_outl(0xb809d5a4,0x00040000);
rtd_outl(0xb809d5a8,0x000a0000);
rtd_outl(0xb809d5ac,0x00300000);
rtd_outl(0xb809d5b0,0x00800000);
rtd_outl(0xb809d5b4,0xff20ff20);
rtd_outl(0xb809d5b8,0x00169050);
rtd_outl(0xb809d5bc,0x0020202f);
rtd_outl(0xb809d5c0,0x00000900);
rtd_outl(0xb809d5c4,0x00001500);
rtd_outl(0xb809d5c8,0x00010000);
rtd_outl(0xb809d5cc,0x001f1f01);
rtd_outl(0xb809d5d0,0x0fc0ffff);
rtd_outl(0xb809d5d4,0x7c289c03);
rtd_outl(0xb809d5d8,0x00000013);
rtd_outl(0xb809d5dc,0x00002000);
rtd_outl(0xb809d5e0,0x1008ff00);
rtd_outl(0xb809d5e4,0x00280103);
rtd_outl(0xb809d5e8,0x00000004);
rtd_outl(0xb809d5ec,0x00060002);
rtd_outl(0xb809d5f0,0x00000af0);
rtd_outl(0xb809d5f4,0x00000bb8);
rtd_outl(0xb809d5f8,0x000008fc);
rtd_outl(0xb809d5fc,0xe00009c4);
rtd_outl(0xb809d600,0x00003ffe);
rtd_outl(0xb809d604,0x0000c855);
rtd_outl(0xb809d608,0xfc153222);
rtd_outl(0xb809d60c,0x0804800e);
rtd_outl(0xb809d610,0xa0000220);
rtd_outl(0xb809d614,0x00000000);
rtd_outl(0xb809d618,0x00000000);
rtd_outl(0xb809d61c,0x00000000);
rtd_outl(0xb809d620,0x02000c63);
rtd_outl(0xb809d624,0x000f4002);
rtd_outl(0xb809d628,0x40818a06);
rtd_outl(0xb809d62c,0x00070000);
rtd_outl(0xb809d630,0x00006000);
rtd_outl(0xb809d634,0x00204040);
rtd_outl(0xb809d638,0x00140000);
rtd_outl(0xb809d63c,0x06f40400);
rtd_outl(0xb809d640,0x10040201);
rtd_outl(0xb809d644,0x20013060);
rtd_outl(0xb809d648,0x0000e000);
rtd_outl(0xb809d64c,0x00014000);
rtd_outl(0xb809d650,0x00028000);
rtd_outl(0xb809d654,0x1ef7c210);
rtd_outl(0xb809d658,0x18d6b9ce);
rtd_outl(0xb809d65c,0x12a52d6c);
rtd_outl(0xb809d660,0x0c73a109);
rtd_outl(0xb809d664,0x064214a6);
rtd_outl(0xb809d668,0x28618043);
rtd_outl(0xb809d66c,0x3b460110);
rtd_outl(0xb809d670,0xc020e018);
rtd_outl(0xb809d674,0x00000000);
rtd_outl(0xb809d678,0x00000000);
rtd_outl(0xb809d67c,0x00000000);
rtd_outl(0xb809d680,0x00000000);
rtd_outl(0xb809d684,0x00000000);
rtd_outl(0xb809d688,0x00000000);
rtd_outl(0xb809d68c,0x00000000);
rtd_outl(0xb809d690,0x00000000);
rtd_outl(0xb809d694,0x010a8703);
rtd_outl(0xb809d698,0x00804040);
rtd_outl(0xb809d69c,0x00000000);
rtd_outl(0xb809d6a0,0x00000000);
rtd_outl(0xb809d6a4,0x00040000);
rtd_outl(0xb809d6a8,0x00816000);
rtd_outl(0xb809d6ac,0x00000000);
rtd_outl(0xb809d6b0,0x00000000);
rtd_outl(0xb809d6b4,0x00000000);
rtd_outl(0xb809d6b8,0x0016b608);
rtd_outl(0xb809d6bc,0x7c000000);
rtd_outl(0xb809d6c0,0x603030b4);
rtd_outl(0xb809d6c4,0x016000c9);
rtd_outl(0xb809d6c8,0x70f00bef);
rtd_outl(0xb809d6cc,0x05500300);
rtd_outl(0xb809d6d0,0x02660304);
rtd_outl(0xb809d6d4,0x000a0df0);
rtd_outl(0xb809d6d8,0x00000000);
rtd_outl(0xb809d6dc,0x00027000);
rtd_outl(0xb809d6e0,0x00000008);
rtd_outl(0xb809d6e4,0x00080000);
rtd_outl(0xb809d6e8,0x000f0008);
rtd_outl(0xb809d6ec,0x0020001a);
rtd_outl(0xb809d6f0,0x6445201a);
rtd_outl(0xb809d6f4,0x07060706);
rtd_outl(0xb809d6f8,0x64502020);
rtd_outl(0xb809d6fc,0x08070706);
rtd_outl(0xb809d700,0x00000000);
rtd_outl(0xb809d704,0x00000001);
rtd_outl(0xb809d708,0x00000002);
rtd_outl(0xb809d70c,0x00000003);
rtd_outl(0xb809d710,0x00000004);
rtd_outl(0xb809d714,0x00000005);
rtd_outl(0xb809d718,0x00000006);
rtd_outl(0xb809d71c,0x00000007);
rtd_outl(0xb809d720,0x00000008);
rtd_outl(0xb809d724,0x00000009);
rtd_outl(0xb809d728,0x00000010);
rtd_outl(0xb809d72c,0x00000011);
rtd_outl(0xb809d730,0x00000000);
rtd_outl(0xb809d734,0x00000013);
rtd_outl(0xb809d738,0x00000014);
rtd_outl(0xb809d73c,0x00000015);
rtd_outl(0xb809d740,0x00000016);
rtd_outl(0xb809d744,0x00000017);
rtd_outl(0xb809d748,0x00000018);
rtd_outl(0xb809d74c,0x00000019);
rtd_outl(0xb809d750,0x00000020);
rtd_outl(0xb809d754,0x00000021);
rtd_outl(0xb809d758,0x00000022);
rtd_outl(0xb809d75c,0x00000023);
rtd_outl(0xb809d760,0x00000024);
rtd_outl(0xb809d764,0x00000025);
rtd_outl(0xb809d768,0x00000026);
rtd_outl(0xb809d76c,0x00000027);
rtd_outl(0xb809d770,0x00000028);
rtd_outl(0xb809d774,0x00000029);
rtd_outl(0xb809d778,0x00000030);
rtd_outl(0xb809d77c,0x00000031);
rtd_outl(0xb809d780,0x00000032);
rtd_outl(0xb809d784,0x00000033);
rtd_outl(0xb809d788,0x00000034);
rtd_outl(0xb809d78c,0x00000035);
rtd_outl(0xb809d790,0x00000036);
rtd_outl(0xb809d794,0x00000037);
rtd_outl(0xb809d798,0x00000038);
rtd_outl(0xb809d79c,0x00000039);
rtd_outl(0xb809d7a0,0x00000040);
rtd_outl(0xb809d7a4,0x00000041);
rtd_outl(0xb809d7a8,0x00000042);
rtd_outl(0xb809d7ac,0x00000043);
rtd_outl(0xb809d7b0,0x00000044);
rtd_outl(0xb809d7b4,0x00000045);
rtd_outl(0xb809d7b8,0x00000046);
rtd_outl(0xb809d7bc,0x00000047);
rtd_outl(0xb809d7c0,0x00000048);
rtd_outl(0xb809d7c4,0x00000049);
rtd_outl(0xb809d7c8,0x00000050);
rtd_outl(0xb809d7cc,0x00000051);
rtd_outl(0xb809d7d0,0x00000052);
rtd_outl(0xb809d7d4,0x00000053);
rtd_outl(0xb809d7d8,0x00000054);
rtd_outl(0xb809d7dc,0x00000055);
rtd_outl(0xb809d7e0,0x00000056);
rtd_outl(0xb809d7e4,0x00000057);
rtd_outl(0xb809d7e8,0x00000058);
rtd_outl(0xb809d7ec,0x00000059);
rtd_outl(0xb809d7f0,0x00000060);
rtd_outl(0xb809d7f4,0x00000061);
rtd_outl(0xb809d7f8,0x00000062);
rtd_outl(0xb809d7fc,0x00000063);
rtd_outl(0xb809df00,0x00000000);
rtd_outl(0xb809df00,0x80000000);
rtd_outl(0xb809df04,0x2b5a2002);
rtd_outl(0xb809df08,0x0080a204);
rtd_outl(0xb809df04,0x447a3014);
rtd_outl(0xb809df08,0x01002301);
rtd_outl(0xb809df04,0x233b4002);
rtd_outl(0xb809df08,0x2080b404);
rtd_outl(0xb809df04,0x233b4802);
rtd_outl(0xb809df08,0x2100b480);
rtd_outl(0xb809df04,0x4a1a3014);
rtd_outl(0xb809df08,0x2082a301);
rtd_outl(0xb809df04,0x635a3826);
rtd_outl(0xb809df08,0x21022382);
rtd_outl(0xb809df04,0x2b5a2002);
rtd_outl(0xb809df08,0x0180a204);
rtd_outl(0xb809df04,0x447a3014);
rtd_outl(0xb809df08,0x02002301);
rtd_outl(0xb809df04,0x233b4002);
rtd_outl(0xb809df08,0x2180b404);
rtd_outl(0xb809df04,0x233b4802);
rtd_outl(0xb809df08,0x2200b480);
//cpu_write(0x00004f04,0x1c610001);
//cpu_write(0x00004f08,0x0080b404);
//cpu_write(0x00004f04,0x45811014);
//cpu_write(0x00004f08,0x01003501);
//cpu_write(0x00004f04,0x25634802);
//cpu_write(0x00004f08,0x2080b284);
//cpu_write(0x00004f04,0x45634814);
//cpu_write(0x00004f08,0x2100b281);
//cpu_write(0x00004f04,0x7c423827);
//cpu_write(0x00004f08,0x2082a182);
//cpu_write(0x00004f04,0x15823801);
//cpu_write(0x00004f08,0x21022180);
//cpu_write(0x00004f04,0x15634681);
//cpu_write(0x00004f08,0x4080b26c);
//cpu_write(0x00004f04,0x35634693);
//cpu_write(0x00004f08,0x4100b269);
//cpu_write(0x00004f04,0x5d635355);
//cpu_write(0x00004f08,0x4082b331);
//cpu_write(0x00004f04,0x76a35367);
//cpu_write(0x00004f08,0x41023332);
//cpu_write(0x00004f04,0x15834001);
//cpu_write(0x00004f08,0x4084c404);
//cpu_write(0x00004f04,0x15834001);
//cpu_write(0x00004f08,0x4104c400);
//cpu_write(0x00004f04,0x35634cd3);
//cpu_write(0x00004f08,0x4086b2d1);
//cpu_write(0x00004f04,0x55634cd5);
//cpu_write(0x00004f08,0x4106b2d1);
//cpu_write(0x00004f04,0x7c4239a7);
//cpu_write(0x00004f08,0x4088a19a);
//cpu_write(0x00004f04,0x15823981);
//cpu_write(0x00004f08,0x41082198);
//cpu_write(0x00004f04,0x00000000);
//cpu_write(0x00004f08,0x00000000);
//cpu_write(0x00004f04,0x00000000);
//cpu_write(0x00004f08,0x00000000);
//cpu_write(0x00004f04,0x00000000);
//cpu_write(0x00004f08,0x00000000);
//cpu_write(0x00004f04,0x00000000);
//cpu_write(0x00004f08,0x00000000);
//cpu_write(0x00004f04,0x00000000);
//cpu_write(0x00004f08,0x00000000);
//cpu_write(0x00004f04,0x00000000);
//cpu_write(0x00004f08,0x00000000);
//cpu_write(0x00004f04,0x00000000);
//cpu_write(0x00004f08,0x00000000);
rtd_outl(0xb809df00,0x00000000);
rtd_outl(0xb809df00,0x80000000);
rtd_outl(0xb809d410,0x88216600);  // change phase table sel
rtd_outl(0xb809d408,0x02080000);

//----------Set Limit----------//
rtd_outl(0xB8099458,0x480F7560); //[31:4], MC_LFL_DMA_WR_Rule_check_up
rtd_outl(0xB809945C,0x4463BB60); //[31:4], MC_LFL_DMA_WR_Rule_check_low
rtd_outl(0xB80994D0,0x480F7560); //[31:4], MC_HF_DMA_WR_Rule_check_up
rtd_outl(0xB80994D8,0x4463BB60); //[31:4], MC_HF_DMA_WR_Rule_check_low

rtd_outl(0xB809AE14,0x480F7560); //[31:4], MC_LFL_I_DMA_RD_Rule_check_up
rtd_outl(0xB809AE18,0x4463BB60); //[31:4], MC_LFL_I_DMA_RD_Rule_check_low
rtd_outl(0xB809AE34,0x480F7560); //[31:4], MC_HF_I_DMA_RD_Rule_check_up
rtd_outl(0xB809AE38,0x4463BB60); //[31:4], MC_HF_I_DMA_RD_Rule_check_low
rtd_outl(0xB809AE54,0x480F7560); //[31:4], MC_LFL_P_DMA_RD_Rule_check_up
rtd_outl(0xB809AE58,0x4463BB60); //[31:4], MC_LFL_P_DMA_RD_Rule_check_low
rtd_outl(0xB809AE74,0x480F7560); //[31:4], MC_HF_P_DMA_RD_Rule_check_up
rtd_outl(0xB809AE78,0x4463BB60); //[31:4], MC_HF_P_DMA_RD_Rule_check_low

//----------4k2k_core_performance_setting.tbl----------//
//H5X_MEMC_IPPRE.db:
rtd_outl(0xb8099104,0x02204ff4);
//rtd_outl(0xb8099108,0x67800870);
rtd_outl(0xb80991b4,0x09030900);
rtd_outl(0xb80991b8,0x5a871870);
rtd_outl(0xb80991bc,0x00000899);
rtd_outl(0xb80991e0,0xff870780);
rtd_outl(0xb80991e4,0x88780780);
rtd_outl(0xb80991f0,0x21c1e040);
rtd_outl(0xb80991f4,0x00097fff);
//H5X_MEMC_IPPRE1.db:
rtd_outl(0xb80995e0,0x034d94fe);
//H5X_MEMC_MC.db:
rtd_outl(0xb8099604,0x0000000c);
rtd_outl(0xb8099608,0x20606000);
rtd_outl(0xb809960c,0x02000000);
rtd_outl(0xb8099614,0x70f00898);
rtd_outl(0xb8099618,0x00358740);
rtd_outl(0xb8099628,0x24001803);
//rtd_outl(0xb809962c,0x0010ef01);
rtd_outl(0xb8099630,0x00000100);
//rtd_outl(0xb8099634,0x08700780);
rtd_outl(0xb8099638,0x000000a5);
rtd_outl(0xb809963c,0x010e01e0);
rtd_outl(0xb8099650,0x086f0002);
rtd_outl(0xb8099654,0x0eff0006);
rtd_outl(0xb8099658,0x086f0000);
rtd_outl(0xb809965c,0x0eff0000);
rtd_outl(0xb80996a4,0x7f003363);
rtd_outl(0xb80996b4,0xc0688002);
rtd_outl(0xb80996b8,0x000f2d04);
rtd_outl(0xb80996bc,0x0af03f14);
rtd_outl(0xb80996dc,0x10007600);
rtd_outl(0xb80996e4,0x00040c1e);
rtd_outl(0xb80996e8,0x7fe1001f);
rtd_outl(0xb80996f4,0x00000000);
rtd_outl(0xb80996f8,0x0000021a);
//H5X_MEMC_MC2.db:
rtd_outl(0xb8099720,0x0800043f);
rtd_outl(0xb8099728,0x521c03c0);
rtd_outl(0xb809972c,0x09035334);
rtd_outl(0xb8099750,0x09040c0f);
rtd_outl(0xb8099758,0x090f8420);
rtd_outl(0xb809975c,0x09033444);
rtd_outl(0xb8099764,0x0880180c);
rtd_outl(0xb8099768,0x0004180c);
rtd_outl(0xb8099798,0x0183cd00);
rtd_outl(0xb809979c,0x0003c000);
rtd_outl(0xb80997a0,0x00000087);
rtd_outl(0xb80997e0,0x08040000);
rtd_outl(0xb80997f0,0x00422c3c);
rtd_outl(0xb80997f4,0x07038000);
rtd_outl(0xb80997f8,0x00301a0d);
rtd_outl(0xb80997fc,0x002c160c);
//H5X_MEMC_BBD.db:
rtd_outl(0xb8099a00,0x00000027);
//H5X_MEMC_KME_TOP.db:
rtd_outl(0xb809b004,0x20a00000);
rtd_outl(0xb809b008,0x1421f800);
rtd_outl(0xb809b00c,0x00000000);
rtd_outl(0xb809b030,0x0000021b);
//H5X_MEMC_KME_VBUF_TOP.db:
rtd_outl(0xb809b20c,0x77777777);
rtd_outl(0xb809b210,0x0000b9fe); //vbuf enable open
rtd_outl(0xb809b214,0x00005cff);
rtd_outl(0xb809b248,0x003efc01);
rtd_outl(0xb809b25c,0x77777777);
rtd_outl(0xb809b284,0x00010c00);
rtd_outl(0xb809b2b0,0x00000000);
rtd_outl(0xb809b2b4,0x00000000);
rtd_outl(0xb809b2b8,0x00000000);
rtd_outl(0xb809b2ec,0x001ffff7);
rtd_outl(0xb809b2f0,0x00008b9b);
rtd_outl(0xb809b2f4,0x00000000);
rtd_outl(0xb809b2f8,0x00000000);
rtd_outl(0xb809b2fc,0x00000000);
//H5X_MEMC_KME_ME1_TOP2.db:
rtd_outl(0xb809b300,0x00000002);
rtd_outl(0xb809b354,0x00401010);
rtd_outl(0xb809b358,0x00004200);
rtd_outl(0xb809b38c,0x00200005);
rtd_outl(0xb809b390,0xa040ff00);
rtd_outl(0xb809b3bc,0x00000000);
rtd_outl(0xb809b3c0,0x00000000);
rtd_outl(0xb809b3d0,0x4a000583);
rtd_outl(0xb809b3d4,0x00028a00);
rtd_outl(0xb809b3d8,0x03ff0000);
rtd_outl(0xb809b3e0,0x00000000);
rtd_outl(0xb809b3e4,0x280003b6);
rtd_outl(0xb809b3e8,0x00961e1e);
//H5X_MEMC_KME_ME1_TOP3.db:
rtd_outl(0xb809b920,0x0010d800);
//H5X_MEMC_KME_ME2_CALC1  .db:
rtd_outl(0xb809ba00,0x06c0801f);
rtd_outl(0xb809ba2c,0x00180000);
rtd_outl(0xb809ba30,0x000fc1a0);
rtd_outl(0xb809ba34,0x03ffee5b);
rtd_outl(0xb809ba38,0x00a10093);
rtd_outl(0xb809ba3c,0x3c000000);
rtd_outl(0xb809ba40,0x0000010e);
rtd_outl(0xb809ba68,0x00000000);
rtd_outl(0xb809ba7c,0x0050320b);
rtd_outl(0xb809ba80,0x00000000);
rtd_outl(0xb809ba84,0x00000000);
rtd_outl(0xb809ba88,0x00000000);
rtd_outl(0xb809ba8c,0x00000000);
rtd_outl(0xb809ba90,0x960d0521);
rtd_outl(0xb809ba94,0xe2092092);
rtd_outl(0xb809ba98,0x00038432);
rtd_outl(0xb809ba9c,0x00038432);
rtd_outl(0xb809babc,0x0e923a48);
//H5X_MEMC_KME_LOGO2.db:
rtd_outl(0xb809bb28,0x01438649);
rtd_outl(0xb809bb2c,0x70f20c4a);
//H5X_MEMC_KME_IPME.db:
rtd_outl(0xb809bc00,0x00000a90);
rtd_outl(0xb809bc0c,0x000003c0);
rtd_outl(0xb809bc20,0x00000000);
rtd_outl(0xb809bc24,0x00000878);
rtd_outl(0xb809bc40,0x00016804);
rtd_outl(0xb809bc44,0x0008619b);
rtd_outl(0xb809bc48,0x0000a002);
rtd_outl(0xb809bc4c,0x000779b8);
rtd_outl(0xb809bc50,0x0006e028);
rtd_outl(0xb809bc54,0x0005285a);
rtd_outl(0xb809bc58,0x00023028);
rtd_outl(0xb809bc5c,0x000550f0);
rtd_outl(0xb809bc60,0x000169b8);
rtd_outl(0xb809bc64,0x000528d2);
rtd_outl(0xb809bc68,0x0000019b);
rtd_outl(0xb809bc6c,0x00030011);
rtd_outl(0xb809bc70,0x0001c010);
rtd_outl(0xb809bc74,0x000ec301);
rtd_outl(0xb809bc78,0x0001c010);
rtd_outl(0xb809bde0,0x0780f000);
rtd_outl(0xb809bde4,0x12c3c0b4);
rtd_outl(0xb809bde8,0x1e069168);
rtd_outl(0xb809bdec,0x0000021c);
rtd_outl(0xb809bdf0,0x00000000);
rtd_outl(0xb809bdf4,0x00000000);
rtd_outl(0xb809bdf8,0x00000000);
rtd_outl(0xb809bdfc,0x00000000);
//H5X_MEMC_KME_LOGO0.db:
rtd_outl(0xb809be00,0x8702b15a);
rtd_outl(0xb809be04,0x0000152b);
rtd_outl(0xb809be08,0x00002b15);
rtd_outl(0xb809be0c,0x0000152b);
rtd_outl(0xb809be10,0x0870001c);
rtd_outl(0xb809be64,0x0b040603);
rtd_outl(0xb809be6c,0x001fa003);
rtd_outl(0xb809be70,0x02041000);
rtd_outl(0xb809be74,0x1544c184);
rtd_outl(0xb809be84,0x038b524f);
rtd_outl(0xb809be88,0x00242864);
rtd_outl(0xb809be8c,0x00902000);
rtd_outl(0xb809be90,0x00322400);
rtd_outl(0xb809be98,0x01405000);
rtd_outl(0xb809be9c,0x003c2800);
rtd_outl(0xb809bea4,0x50505020);
rtd_outl(0xb809bea8,0x64646420);
rtd_outl(0xb809beac,0x20206464);
rtd_outl(0xb809beb0,0x00202020);
rtd_outl(0xb809bec4,0x64646464);
rtd_outl(0xb809bec8,0x70707064);
rtd_outl(0xb809becc,0x60647070);
rtd_outl(0xb809bed0,0x00646060);
rtd_outl(0xb809bed4,0x00a03c00);
rtd_outl(0xb809bed8,0x00000850);
rtd_outl(0xb809bedc,0x000000c5);
rtd_outl(0xb809bee0,0x00642800);
rtd_outl(0xb809bee4,0x00000530);
rtd_outl(0xb809bee8,0x00000084);
rtd_outl(0xb809beec,0x003d1512);
//H5X_MEMC_KME_LOGO1.db:
rtd_outl(0xb809bf0c,0x00005b19);
rtd_outl(0xb809bf10,0x99988997);
rtd_outl(0xb809bf14,0x07888799);
rtd_outl(0xb809bf18,0x99988997);
rtd_outl(0xb809bf1c,0x87777799);
rtd_outl(0xb809bf38,0x00280a00);
rtd_outl(0xb809bf3c,0x0030180a);
rtd_outl(0xb809bf40,0x0000040a);
rtd_outl(0xb809bf44,0x00301e00);
rtd_outl(0xb809bf48,0x00050300);
rtd_outl(0xb809bf4c,0x000000c2);
rtd_outl(0xb809bf60,0x00030100);
rtd_outl(0xb809bf64,0x00000081);
rtd_outl(0xb809bf78,0x07787766);
rtd_outl(0xb809bf7c,0x88888866);
rtd_outl(0xb809bf80,0x06676666);
rtd_outl(0xb809bf84,0x0707070a);
rtd_outl(0xb809bf88,0x0707070a);
rtd_outl(0xb809bf8c,0x080a0707);
rtd_outl(0xb809bf90,0x000a0808);
rtd_outl(0xb809bf94,0x00000130);
rtd_outl(0xb809bf98,0x00000590);
rtd_outl(0xb809bf9c,0x000a0703);
rtd_outl(0xb809bfa0,0x001c6531);
rtd_outl(0xb809bfa4,0x00010100);
rtd_outl(0xb809bfa8,0x00015861);
rtd_outl(0xb809bfc4,0x3fffffff);
rtd_outl(0xb809bfd0,0x15555555);
rtd_outl(0xb809bfd4,0x00000000);
rtd_outl(0xb809bfd8,0x000f0000);
rtd_outl(0xb809bfdc,0x00087000);
rtd_outl(0xb809bfe0,0x030873c0);
//H5X_MEMC_KME_ME1_TOP0.db:
rtd_outl(0xb809c400,0x40033200);
rtd_outl(0xb809c404,0x90401080);
rtd_outl(0xb809c40c,0x00000006);
rtd_outl(0xb809c410,0x00404040);
rtd_outl(0xb809c420,0x30302828);
rtd_outl(0xb809c438,0x000004b1);
rtd_outl(0xb809c440,0x3f033200);
rtd_outl(0xb809c444,0x40901080);
rtd_outl(0xb809c44c,0x00000006);
rtd_outl(0xb809c450,0x00404040);
rtd_outl(0xb809c454,0x00000301);
rtd_outl(0xb809c478,0x000004b3);
rtd_outl(0xb809c480,0x00801201);
rtd_outl(0xb809c488,0x38003840);
rtd_outl(0xb809c48c,0x04008060);
rtd_outl(0xb809c4cc,0x1903e868);
rtd_outl(0xb809c4d0,0x384440f8);
rtd_outl(0xb809c4fc,0x00000001);
//H5X_MEMC_KME_ME1_TOP1.db:
rtd_outl(0xb809c500,0x0d451700);
rtd_outl(0xb809c504,0x3fdfc006);
rtd_outl(0xb809c518,0x0630ec00);
rtd_outl(0xb809c51c,0x02005400);
rtd_outl(0xb809c520,0x00022016);
rtd_outl(0xb809c540,0x010001ff);
rtd_outl(0xb809c544,0x02060041);
rtd_outl(0xb809c548,0x7ff7f000);
rtd_outl(0xb809c54c,0x001e4000);
rtd_outl(0xb809c550,0x0200039c);
rtd_outl(0xb809c554,0x00000019);
rtd_outl(0xb809c558,0xc1440815);
rtd_outl(0xb809c55c,0x00e41a20);
rtd_outl(0xb809c560,0x0003fdfa);
rtd_outl(0xb809c570,0x52000007);
rtd_outl(0xb809c574,0x3ffdfe88);
rtd_outl(0xb809c578,0x26fd37ff);
rtd_outl(0xb809c57c,0x7fb50000);
rtd_outl(0xb809c580,0x00007fd2);
rtd_outl(0xb809c594,0x00000000);
rtd_outl(0xb809c598,0x00a01fbe);
rtd_outl(0xb809c59c,0x04260410);
rtd_outl(0xb809c5a0,0x00001b80);
rtd_outl(0xb809c5c0,0x0000bf04);
rtd_outl(0xb809c5c8,0x18040102);
rtd_outl(0xb809c5dc,0x0048a88a);
rtd_outl(0xb809c5e8,0x00005000);
//H5X_MEMC_KME_ME2_VBUF_TOP .db:
rtd_outl(0xb809c704,0x140c0801);
rtd_outl(0xb809c70c,0x002d8c08);
rtd_outl(0xb809c72c,0x04a1a094);
rtd_outl(0xb809c730,0x20082122);
rtd_outl(0xb809c734,0x00400109);
rtd_outl(0xb809c740,0x024067ff);
rtd_outl(0xb809c744,0x120f0300);
rtd_outl(0xb809c748,0x000f0300);
rtd_outl(0xb809c74c,0x5b9e3f82);
rtd_outl(0xb809c750,0x09000490);
rtd_outl(0xb809c764,0x20202080);
rtd_outl(0xb809c768,0x30301c30);
rtd_outl(0xb809c784,0x2c073fc2);
rtd_outl(0xb809c788,0x00000492);
rtd_outl(0xb809c798,0x00400e7f);
rtd_outl(0xb809c7a0,0x20202010);
rtd_outl(0xb809c7d8,0xf2086c00);
rtd_outl(0xb809c7dc,0x7ce8897d);
rtd_outl(0xb809c7e0,0x04002240);
//H5X_MEMC_KME_ME2_CALC0 .db:
rtd_outl(0xb809c800,0x1e080041);
rtd_outl(0xb809c808,0xcb802913);
rtd_outl(0xb809c80c,0x10410410);
rtd_outl(0xb809c810,0x00000000);
rtd_outl(0xb809c814,0x01600000);
rtd_outl(0xb809c818,0x01000057);
rtd_outl(0xb809c81c,0x00005c20);
rtd_outl(0xb809c820,0x0000a017);
rtd_outl(0xb809c824,0x49260d00);
rtd_outl(0xb809c828,0x01f0a56b);
rtd_outl(0xb809c82c,0x0000804c);
rtd_outl(0xb809c830,0xffc1ff9b);
rtd_outl(0xb809c834,0xffe1ffd8);
rtd_outl(0xb809c838,0x22c39000);
rtd_outl(0xb809c83c,0x000201c7);
rtd_outl(0xb809c840,0x00077201);
rtd_outl(0xb809c844,0x504983b9);
rtd_outl(0xb809c848,0x00ff2000);
rtd_outl(0xb809c84c,0x00007800);
rtd_outl(0xb809c850,0x0f220b00);
rtd_outl(0xb809c854,0x3f9f858e);
rtd_outl(0xb809c868,0x00800800);
rtd_outl(0xb809c86c,0x00000210);
rtd_outl(0xb809c870,0x003fd78f);
rtd_outl(0xb809c874,0x43bc0010);
rtd_outl(0xb809c878,0x00202c00);
rtd_outl(0xb809c87c,0x00808082);
rtd_outl(0xb809c880,0x0008c808);
rtd_outl(0xb809c884,0x003000ff);
rtd_outl(0xb809c888,0x000000c7);
rtd_outl(0xb809c88c,0x15e003ff);
rtd_outl(0xb809c89c,0x80020000);
rtd_outl(0xb809c8a0,0x0010ff02);
rtd_outl(0xb809c8a4,0x00008300);
rtd_outl(0xb809c8b0,0x00402005);
rtd_outl(0xb809c8b8,0x00080008);
rtd_outl(0xb809c8bc,0x00060020);
rtd_outl(0xb809c8c0,0x08084008);
rtd_outl(0xb809c8c4,0x20400010);
rtd_outl(0xb809c8d0,0x00101010);
rtd_outl(0xb809c8d4,0x04018100);
rtd_outl(0xb809c8d8,0x08108020);
rtd_outl(0xb809c8dc,0x01080401);
//H5X_MEMC_KME_DEHALO.db:
rtd_outl(0xb809cd10,0xf0430b8b);
rtd_outl(0xb809cd28,0x0ff3fe20);
rtd_outl(0xb809cd34,0x00be1de0);
rtd_outl(0xb809cd38,0x23320200);
rtd_outl(0xb809cd44,0x00082900);
rtd_outl(0xb809cd4c,0x004db49a);
rtd_outl(0xb809cd50,0x00012052);
rtd_outl(0xb809cd54,0x0300e040);
rtd_outl(0xb809cd6c,0x3f8003ff);
rtd_outl(0xb809cd70,0x20208008);
rtd_outl(0xb809cd78,0x00000000);
rtd_outl(0xb809cd90,0x0ff00000);
rtd_outl(0xb809cda8,0x1ff90210);
rtd_outl(0xb809cdac,0x00000008);
rtd_outl(0xb809cdb0,0x00304038);
rtd_outl(0xb809cdb4,0xa9927038);
rtd_outl(0xb809cdb8,0x061e10a2);
rtd_outl(0xb809cdbc,0x0021e000);
rtd_outl(0xb809cdc0,0x88222089);
rtd_outl(0xb809cdc4,0x04005040);
rtd_outl(0xb809cdc8,0x00008523);
rtd_outl(0xb809cdcc,0x00200214);
rtd_outl(0xb809cde0,0x0003be00);
rtd_outl(0xb809cde4,0x00021a00);
rtd_outl(0xb809cde8,0x00000282);
rtd_outl(0xb809cdec,0x000280b1);
rtd_outl(0xb809cdf0,0x08a00500);
rtd_outl(0xb809cdf4,0x60200d00);
rtd_outl(0xb809cdf8,0x0af00900);
rtd_outl(0xb809cdfc,0x00f39d80);
rtd_outl(0xb809cd00,0x00000000);
rtd_outl(0xb809cd04,0x00000000);
rtd_outl(0xb809cd08,0x00000000);
rtd_outl(0xb809cd0c,0x00000000);
rtd_outl(0xb809cd98,0x00000000);
rtd_outl(0xb809cd9c,0x0000020e);
rtd_outl(0xb809cda0,0x00014eb0);
rtd_outl(0xb809cda4,0xffff0000);
//H5X_MEMC_KME_DEHALO2.db:
rtd_outl(0xb809ce08,0x00001c50);
rtd_outl(0xb809ce10,0x00004056);
rtd_outl(0xb809ce14,0x0f3f0f3f);
rtd_outl(0xb809ce18,0x0f3f0f3f);
rtd_outl(0xb809ce1c,0x0f3f0f3f);
rtd_outl(0xb809ce20,0x0f3f0f3f);
rtd_outl(0xb809ce24,0x0f3f0f3f);
rtd_outl(0xb809ce28,0x0f3f0f3f);
rtd_outl(0xb809ce74,0x80060906);
rtd_outl(0xb809ce78,0x000015ff);
rtd_outl(0xb809ce7c,0x00060906);
rtd_outl(0xb809ce80,0x000015ff);
rtd_outl(0xb809ce84,0x00050106);
rtd_outl(0xb809ce88,0x00064104);
rtd_outl(0xb809ce8c,0x000238e3);
rtd_outl(0xb809ce90,0x00007444);
rtd_outl(0xb809ce94,0x87701600);
rtd_outl(0xb809ce98,0x90774200);
rtd_outl(0xb809ce9c,0x0001f0c2);
rtd_outl(0xb809cea0,0x04106410);
rtd_outl(0xb809cea4,0x00454510);
rtd_outl(0xb809cea8,0x00001e7e);
rtd_outl(0xb809ceac,0x00079114);
rtd_outl(0xb809cee8,0x00110f3f);
rtd_outl(0xb809ceec,0x783f6450);
rtd_outl(0xb809cef0,0xa4a10fa2);
rtd_outl(0xb809cef4,0x0a494743);
rtd_outl(0xb809ce5c,0x00000000);
rtd_outl(0xb809ce60,0x04050917);
rtd_outl(0xb809ce64,0x1518206f);
rtd_outl(0xb809ce68,0x0000112f);
rtd_outl(0xb809ce6c,0x1400501f);
rtd_outl(0xb809ce70,0x00000144);
#else
rtd_outl(0xb8099000,0x04650898);
rtd_outl(0xb8099004,0x04380780);
rtd_outl(0xb8099008,0x2d460810);
rtd_outl(0xb809900c,0x00000050);
rtd_outl(0xb8099010,0x0fffffff);
rtd_outl(0xb8099014,0x0000000a);
//rtd_outl(0xb8099018,0x0000407f); //skyredd, 0x0200403f  // 0x000a3284
rtd_outl(0xb809901c,0x00000000);
rtd_outl(0xb8099020,0x48438780);
rtd_outl(0xb8099024,0x00000000);
rtd_outl(0xb8099028,0x00000000);
rtd_outl(0xb809902c,0x00000000);
rtd_outl(0xb8099030,0x0021c08c);
rtd_outl(0xb8099034,0x000003c0);
rtd_outl(0xb8099038,0x00000000);
rtd_outl(0xb809903c,0x00403fc0);
rtd_outl(0xb8099040,0x00438780);
rtd_outl(0xb8099044,0x00000000);
rtd_outl(0xb8099048,0x00000000);
rtd_outl(0xb809904c,0x00000000);
rtd_outl(0xb8099050,0x00000000);
rtd_outl(0xb8099054,0x00000000);
rtd_outl(0xb8099058,0x00000000);
rtd_outl(0xb809905c,0x00000000);
rtd_outl(0xb80990a0,0x00000000);
rtd_outl(0xb80990a4,0x00000000);
rtd_outl(0xb80990a8,0x00000000);
rtd_outl(0xb80990ac,0x00000000);
rtd_outl(0xb80990b0,0x00000000);
rtd_outl(0xb80990b4,0x00000000);
rtd_outl(0xb80990b8,0x00000000);
rtd_outl(0xb80990bc,0xfa31fb4c);
rtd_outl(0xb80990c0,0x1ef79df5);
rtd_outl(0xb80990c4,0x1f67e5f5);
rtd_outl(0xb80990c8,0x0007d5f5);
rtd_outl(0xb80990cc,0x1f37c9f6);
rtd_outl(0xb80990d0,0x1f67e5f0);
rtd_outl(0xb80990d4,0x0007d5f6);
rtd_outl(0xb80990d8,0x1f67d9f6);
rtd_outl(0xb80990dc,0x1f67d5e6);
rtd_outl(0xb80990e0,0x0007d5f5);
rtd_outl(0xb80990e4,0x1f67d9f6);
rtd_outl(0xb80990e8,0x1f67e9e7);
rtd_outl(0xb80990ec,0x0007d5f5);
rtd_outl(0xb80990f0,0x00000000);
rtd_outl(0xb80990f4,0x00000000);
rtd_outl(0xb80990f8,0x05000000);
rtd_outl(0xb80990fc,0x77000000);
rtd_outl(0xb8099100,0x8430009e);
rtd_outl(0xb8099104,0x02204f04);
//rtd_outl(0xb8099108,0x04780870);
rtd_outl(0xb8099108,0x06780870);
rtd_outl(0xb809910c,0x000420f0);
rtd_outl(0xb8099110,0x08700780);
rtd_outl(0xb8099114,0x08ca0898);
rtd_outl(0xb8099118,0x402400fc);
rtd_outl(0xb809911c,0x00fc0024);
rtd_outl(0xb8099120,0x00000700);
rtd_outl(0xb8099124,0x00000000);
rtd_outl(0xb8099128,0x00af4cfd);
rtd_outl(0xb809912c,0x87644439);
rtd_outl(0xb8099130,0x00000000);
rtd_outl(0xb8099134,0x00000000);
rtd_outl(0xb8099138,0x00000000);
rtd_outl(0xb809913c,0x00000000);
rtd_outl(0xb8099140,0x00000000);
rtd_outl(0xb8099144,0x00000000);
rtd_outl(0xb8099148,0x00000000);
rtd_outl(0xb809914c,0x00000000);
rtd_outl(0xb8099150,0x20320a50);
rtd_outl(0xb8099154,0x2012109d);
rtd_outl(0xb8099158,0x3ffffc00);
rtd_outl(0xb809915c,0x00000000);
rtd_outl(0xb8099160,0x2501fa40);
rtd_outl(0xb8099164,0x00000000);
rtd_outl(0xb8099168,0x00000000);
rtd_outl(0xb809916c,0x00000000);
rtd_outl(0xb8099170,0x00000014);
rtd_outl(0xb8099174,0x06025aa0);
rtd_outl(0xb8099178,0x00000032);
rtd_outl(0xb809917c,0x00000000);
rtd_outl(0xb8099180,0x00000000);
rtd_outl(0xb8099184,0x00000000);
rtd_outl(0xb8099188,0x00000000);
rtd_outl(0xb809918c,0x00000000);
rtd_outl(0xb8099190,0x00000000);
rtd_outl(0xb8099194,0x0d000000);
rtd_outl(0xb8099198,0x00000000);
rtd_outl(0xb809919c,0x00000000);
rtd_outl(0xb80991a0,0x00000000);
rtd_outl(0xb80991a4,0x00000000);
rtd_outl(0xb80991a8,0x00000000);
rtd_outl(0xb80991ac,0x00000000);
rtd_outl(0xb80991b0,0x0d000000);
//rtd_outl(0xb80991b4,0x09030900);
rtd_outl(0xb80991b4,0x01030900);// mute_vs=0
rtd_outl(0xb80991b8,0x00878868);
rtd_outl(0xb80991bc,0x00000000);
rtd_outl(0xb80991c0,0x00000000);
rtd_outl(0xb80991c4,0x00000000);
rtd_outl(0xb80991c8,0x00000000);
rtd_outl(0xb80991cc,0x00000000);
rtd_outl(0xb80991d0,0x00000000);
rtd_outl(0xb80991d4,0x00000000);
rtd_outl(0xb80991d8,0x00000000);
rtd_outl(0xb80991dc,0x00000000);
rtd_outl(0xb80991e0,0x01870780);
rtd_outl(0xb80991e4,0x88788778);
rtd_outl(0xb80991e8,0x00000000);
rtd_outl(0xb80991ec,0x00000000);
rtd_outl(0xb80991f0,0x87078000);
rtd_outl(0xb80991f4,0x00000fff);
rtd_outl(0xb80991f8,0x00000000);
rtd_outl(0xb80991fc,0x00000000);
rtd_outl(0xb8099200,0x003c0078);
rtd_outl(0xb8099204,0x00000055);
rtd_outl(0xb8099284,0x00000019);
rtd_outl(0xb8099800,0x003c0078);
rtd_outl(0xb8099804,0x00000055);
rtd_outl(0xb8099884,0x00000019);
rtd_outl(0xb8099400,0x00000004);
rtd_outl(0xb8099404,0x00f00f00);
rtd_outl(0xb8099410,0x0004f0f0);
rtd_outl(0xb8099480,0x0005f078);
rtd_outl(0xb8099454,0x00002580);
rtd_outl(0xb80994c4,0x00002940);
rtd_outl(0xb8099414,0x00644000);
rtd_outl(0xb8099418,0x01f94000);
rtd_outl(0xb809941c,0x038e4000);
rtd_outl(0xb8099420,0x05234000);
rtd_outl(0xb8099424,0x06b84000);
rtd_outl(0xb8099428,0x084d4000);
rtd_outl(0xb809942c,0x084d4000);
rtd_outl(0xb8099430,0x084d4000);
rtd_outl(0xb8099434,0x00c98000);
rtd_outl(0xb8099438,0x025e8000);
rtd_outl(0xb809943c,0x03f38000);
rtd_outl(0xb8099440,0x05888000);
rtd_outl(0xb8099444,0x071d8000);
rtd_outl(0xb8099448,0x08b28000);
rtd_outl(0xb809944c,0x08b28000);
rtd_outl(0xb8099450,0x08b28000);
rtd_outl(0xb8099484,0x09e24000);
rtd_outl(0xb8099488,0x0b774000);
rtd_outl(0xb809948c,0x0d0c4000);
rtd_outl(0xb8099490,0x0ea14000);
rtd_outl(0xb8099494,0x10364000);
rtd_outl(0xb8099498,0x11cb4000);
rtd_outl(0xb809949c,0x11cb4000);
rtd_outl(0xb80994a0,0x11cb4000);
rtd_outl(0xb80994a4,0x0a478000);
rtd_outl(0xb80994a8,0x0bdc8000);
rtd_outl(0xb80994ac,0x0d718000);
rtd_outl(0xb80994b0,0x0f068078);
rtd_outl(0xb80994b4,0x109b8000);
rtd_outl(0xb80994b8,0x12308000);
rtd_outl(0xb80994bc,0x12308000);
rtd_outl(0xb80994c0,0x12308000);
rtd_outl(0xb809ae00,0x00000004);
rtd_outl(0xb809ae04,0x00f00f00);
rtd_outl(0xb809ae10,0x0004f0f0);
rtd_outl(0xb809aeb8,0x00f00f00);
rtd_outl(0xb809ae30,0x0005f078);
rtd_outl(0xb809ae50,0x0004f0f0);
rtd_outl(0xb809ae70,0x0005f078);
rtd_outl(0xb8099500,0x00000000);
rtd_outl(0xb8099504,0x00000000);
rtd_outl(0xb80995e0,0x357d1599);
rtd_outl(0xb80995e4,0x00000000);
rtd_outl(0xb80995e8,0x00000000);
rtd_outl(0xb80995ec,0x00000000);
rtd_outl(0xb80995f0,0x00000000);
rtd_outl(0xb80995f4,0x00000000);
rtd_outl(0xb80995f8,0x00000000);
rtd_outl(0xb80995fc,0x00000000);
rtd_outl(0xb809960c,0xe1000000);
rtd_outl(0xb8099610,0x00000000);
rtd_outl(0xb8099614,0x70f01130);
rtd_outl(0xb8099618,0x00408700);
rtd_outl(0xb809961c,0x00040006);
rtd_outl(0xb8099620,0x00000400);
rtd_outl(0xb8099624,0x043bc083);
rtd_outl(0xb8099628,0x24001003);
rtd_outl(0xb809962c,0x0010ef01);
rtd_outl(0xb8099630,0x00000500);
rtd_outl(0xb8099634,0x08700780);
rtd_outl(0xb8099638,0x000000a5);
rtd_outl(0xb809963c,0x010e01e0);
rtd_outl(0xb8099640,0x000008cf);
rtd_outl(0xb8099644,0x00ff00ff);
rtd_outl(0xb8099648,0x00240024);
rtd_outl(0xb809964c,0x000003ff);
rtd_outl(0xb8099650,0x086f0000);
rtd_outl(0xb8099654,0x0eff0000);
rtd_outl(0xb8099658,0x086f0000);
rtd_outl(0xb809965c,0x0eff0000);
rtd_outl(0xb8099660,0x00000000);
rtd_outl(0xb8099664,0x04380000);
rtd_outl(0xb8099668,0x03c00000);
rtd_outl(0xb809966c,0x00000000);
rtd_outl(0xb8099670,0x00000000);
rtd_outl(0xb8099674,0x00000000);
rtd_outl(0xb8099678,0x00000000);
rtd_outl(0xb809967c,0x00000000);
rtd_outl(0xb8099680,0x00000000);
rtd_outl(0xb8099684,0x00000000);
rtd_outl(0xb8099688,0x00000000);
rtd_outl(0xb809968c,0x00000000);
rtd_outl(0xb8099690,0x00000000);
rtd_outl(0xb8099694,0x00000000);
rtd_outl(0xb8099698,0x00000000);
rtd_outl(0xb809969c,0x00000000);
rtd_outl(0xb80996a0,0x00000000);
rtd_outl(0xb80996a4,0x7f004463);
rtd_outl(0xb80996a8,0x007c0403);
rtd_outl(0xb80996ac,0x00000000);
rtd_outl(0xb80996b0,0x00033300);
rtd_outl(0xb80996b4,0xffc04008);
rtd_outl(0xb80996b8,0x000f4f04);
rtd_outl(0xb80996bc,0x0af43f04);
rtd_outl(0xb80996c0,0x034b07d2);
rtd_outl(0xb80996c4,0x00ffffff);
rtd_outl(0xb80996c8,0x00000000);
rtd_outl(0xb80996cc,0x00000000);
rtd_outl(0xb80996d0,0x00000000);
rtd_outl(0xb80996d4,0x00000000);
rtd_outl(0xb80996d8,0x00000000);
rtd_outl(0xb80996dc,0x00007600);
rtd_outl(0xb80996e0,0x00000200);
rtd_outl(0xb80996e4,0x00000000);
rtd_outl(0xb80996e8,0x00000000);
rtd_outl(0xb80996f0,0x00000000);
rtd_outl(0xb80996f4,0x020c0000);
rtd_outl(0xb80996f8,0xffc20200);
rtd_outl(0xb80996fc,0x00000000);
rtd_outl(0xb8099700,0x55555432);
rtd_outl(0xb8099704,0x44445432);
rtd_outl(0xb8099708,0x33335432);
rtd_outl(0xb809970c,0x22225432);
rtd_outl(0xb8099710,0x00000000);
rtd_outl(0xb8099714,0x00000000);
rtd_outl(0xb8099718,0x00000000);
rtd_outl(0xb809971c,0x00000000);
rtd_outl(0xb8099720,0x0000003f);
rtd_outl(0xb8099724,0x000087f0);
rtd_outl(0xb8099728,0x021c03c0);
rtd_outl(0xb809972c,0x00035334);
rtd_outl(0xb8099730,0x00f00400);
rtd_outl(0xb8099750,0x00040c0f);
rtd_outl(0xb8099754,0x7f003004);
rtd_outl(0xb8099758,0x000f8420);
rtd_outl(0xb809975c,0x00033444);
rtd_outl(0xb8099760,0x02829397);
rtd_outl(0xb8099764,0x0000180c);
rtd_outl(0xb8099768,0x0004180c);
rtd_outl(0xb809976c,0x11121200);
rtd_outl(0xb8099770,0x0c0d0e10);
rtd_outl(0xb8099774,0xc0f0050b);
rtd_outl(0xb809977c,0x05410003);
rtd_outl(0xb8099780,0x01e00000);
rtd_outl(0xb8099784,0x05a003c0);
rtd_outl(0xb8099788,0x40000780);
rtd_outl(0xb809978c,0x28140050);
rtd_outl(0xb8099790,0x0f0000f0);
rtd_outl(0xb8099794,0x6db24fff);
rtd_outl(0xb8099798,0x00000007);
rtd_outl(0xb809979c,0x0003c000);
rtd_outl(0xb80997a0,0x0402001e);
rtd_outl(0xb80997a4,0x000f0000);
rtd_outl(0xb80997a8,0x08080078);
rtd_outl(0xb80997b0,0x00000000);
rtd_outl(0xb80997b4,0x00000000);
rtd_outl(0xb80997b8,0x00000000);
rtd_outl(0xb80997bc,0x00000000);
rtd_outl(0xb80997c0,0x00000000);
rtd_outl(0xb80997c4,0x00000000);
rtd_outl(0xb80997c8,0x00000000);
rtd_outl(0xb80997cc,0x00000000);
rtd_outl(0xb80997d0,0x00000000);
rtd_outl(0xb80997d4,0x00000000);
rtd_outl(0xb80997d8,0x00000000);
rtd_outl(0xb80997dc,0x00000000);
rtd_outl(0xb80997e0,0x00000000);
rtd_outl(0xb80997f0,0x0052303c);
rtd_outl(0xb80997f4,0x00000003);
rtd_outl(0xb8099900,0x133cb1c3);
rtd_outl(0xb8099904,0x008df6d7);
rtd_outl(0xb8099908,0x20161008);
rtd_outl(0xb809990c,0x24242424);
rtd_outl(0xb8099910,0x36db6db6);
rtd_outl(0xb8099914,0x49310475);
rtd_outl(0xb8099918,0x00000000);
rtd_outl(0xb809991c,0x00000000);
rtd_outl(0xb8099920,0x88700f00);
rtd_outl(0xb8099924,0x11000102);
rtd_outl(0xb8099928,0x07740096);
rtd_outl(0xb809992c,0x02234485);
rtd_outl(0xb8099930,0x04274c95);
rtd_outl(0xb8099934,0x00000025);
rtd_outl(0xb8099938,0x032750a5);
rtd_outl(0xb809993c,0x01234895);
rtd_outl(0xb8099940,0x00000005);
rtd_outl(0xb8099944,0x05790975);
rtd_outl(0xb8099948,0x03048502);
rtd_outl(0xb809994c,0x04c99322);
rtd_outl(0xb8099950,0x00000026);
rtd_outl(0xb8099954,0x01020408);
rtd_outl(0xb8099958,0x01020408);
rtd_outl(0xb809995c,0x00000008);
rtd_outl(0xb8099960,0x10843946);
rtd_outl(0xb8099980,0x00520520);
rtd_outl(0xb8099984,0x00538538);
rtd_outl(0xb8099988,0x00000000);
rtd_outl(0xb80999a0,0x043800f0);
rtd_outl(0xb80999a4,0x043800f0);
rtd_outl(0xb80999a8,0x043800f0);
rtd_outl(0xb80999ac,0x043800f0);
rtd_outl(0xb80999b0,0x00f00897);
rtd_outl(0xb80999b4,0x00438117);
rtd_outl(0xb80999b8,0x0025c3f7);
rtd_outl(0xb80999bc,0x00300000);
rtd_outl(0xb80999c0,0xf03183ce);
rtd_outl(0xb80999c4,0x03015e57);
rtd_outl(0xb80999c8,0x000175c4);
rtd_outl(0xb80999cc,0x00000002);
rtd_outl(0xb8099a00,0x00000020);
rtd_outl(0xb8099a04,0x00800200);
rtd_outl(0xb8099a08,0x00400100);
rtd_outl(0xb8099a0c,0x00000000);
rtd_outl(0xb8099a10,0x077f086f);
rtd_outl(0xb8099a14,0x20002000);
rtd_outl(0xb8099a18,0x286f286f);
rtd_outl(0xb8099a1c,0x277f2077);
rtd_outl(0xb8099a20,0x20002000);
rtd_outl(0xb8099a24,0x07800780);
rtd_outl(0xb8099a28,0x07800780);
rtd_outl(0xb8099a2c,0x084504db);
rtd_outl(0xb8099a30,0x08708700);
rtd_outl(0xb8099b00,0x00000000);
rtd_outl(0xb8099b04,0x00000000);
rtd_outl(0xb8099b08,0x00000000);
rtd_outl(0xb8099b0c,0x00000000);
rtd_outl(0xb8099b10,0x00000000);
rtd_outl(0xb8099b14,0x00000000);
rtd_outl(0xb8099b18,0x00000000);
rtd_outl(0xb8099b1c,0x00000000);
rtd_outl(0xb8099b20,0x00000000);
rtd_outl(0xb8099b24,0x00000000);
rtd_outl(0xb8099b28,0x00000000);
rtd_outl(0xb8099b2c,0x00000000);
rtd_outl(0xb8099b30,0x00000000);
rtd_outl(0xb8099b34,0x00000000);
rtd_outl(0xb8099b38,0x00000000);
rtd_outl(0xb8099b3c,0x00000000);
rtd_outl(0xb8099b40,0x00000000);
rtd_outl(0xb8099b44,0x00000000);
rtd_outl(0xb8099b48,0x00000000);
rtd_outl(0xb8099b4c,0x00000000);
rtd_outl(0xb8099b50,0x00000000);
rtd_outl(0xb8099b54,0x00000000);
rtd_outl(0xb8099b58,0x00000000);
rtd_outl(0xb8099b5c,0x00000000);
rtd_outl(0xb8099b60,0x00000000);
rtd_outl(0xb8099b64,0x00000000);
rtd_outl(0xb8099b68,0x00000000);
rtd_outl(0xb8099b6c,0x00000000);
rtd_outl(0xb8099b70,0x00000002);
rtd_outl(0xb8099b74,0x00000000);
rtd_outl(0xb8099b78,0x00000000);
rtd_outl(0xb8099b7c,0x00000000);
rtd_outl(0xb8099b80,0x00000000);
rtd_outl(0xb8099b84,0x00000000);
rtd_outl(0xb8099b88,0x00000000);
rtd_outl(0xb8099b8c,0x00000000);
rtd_outl(0xb8099b90,0x00000000);
rtd_outl(0xb8099b94,0x00000000);
rtd_outl(0xb8099b98,0x00000000);
rtd_outl(0xb8099b9c,0x00000000);
rtd_outl(0xb8099ba0,0x00000000);
rtd_outl(0xb8099ba4,0x00000000);
rtd_outl(0xb8099ba8,0x00000001);
rtd_outl(0xb8099bac,0x00000001);
rtd_outl(0xb8099bb0,0x00000000);
rtd_outl(0xb8099bb4,0x00000000);
rtd_outl(0xb8099bb8,0x00000000);
rtd_outl(0xb8099bbc,0x00000000);
rtd_outl(0xb8099bc0,0x00000000);
rtd_outl(0xb8099bc4,0x00000000);
rtd_outl(0xb8099bc8,0x00000000);
rtd_outl(0xb8099bcc,0x00000000);
rtd_outl(0xb8099bd0,0x00000000);
rtd_outl(0xb8099bd4,0x00000000);
rtd_outl(0xb8099bd8,0x00000000);
rtd_outl(0xb8099bdc,0x00000000);
rtd_outl(0xb8099be0,0x00000000);
rtd_outl(0xb8099be4,0x00000000);
rtd_outl(0xb8099be8,0x00000000);
rtd_outl(0xb8099bec,0x00000000);
rtd_outl(0xb8099bf0,0x00000000);
rtd_outl(0xb8099bf4,0x00000000);
rtd_outl(0xb8099bf8,0x00000000);
rtd_outl(0xb8099bfc,0x00000000);
rtd_outl(0xb809b004,0x20a00000);   // disable me1 meander //skyredd_meander
rtd_outl(0xb809b008,0x1421d800);
rtd_outl(0xb809b010,0x00000000);
rtd_outl(0xb809b014,0x00000000);
rtd_outl(0xb809b018,0x00000000);
rtd_outl(0xb809b01c,0x00000000);
rtd_outl(0xb809b020,0x00000000);
rtd_outl(0xb809b024,0x00000000);
rtd_outl(0xb809b028,0x00000000);
rtd_outl(0xb809b02c,0x00000000);
rtd_outl(0xb809b030,0x0000021b); //skyredd_meander
rtd_outl(0xb809b034,0x00000000);
rtd_outl(0xb809b038,0x00000000);
rtd_outl(0xb809b03c,0x00000000);
rtd_outl(0xb809b040,0x000000b0);
rtd_outl(0xb809b044,0x000000c1);
rtd_outl(0xb809b048,0x000001c3);
rtd_outl(0xb809b04c,0x00000116);
rtd_outl(0xb809b050,0x00000194);
rtd_outl(0xb809b054,0x00000129);
rtd_outl(0xb809b058,0x000001ab);
rtd_outl(0xb809b05c,0x00000152);
rtd_outl(0xb809b060,0x000001d0);
rtd_outl(0xb809b064,0x00000105);
rtd_outl(0xb809b068,0x00000187);
rtd_outl(0xb809b06c,0x0000013a);
rtd_outl(0xb809b070,0x000001b8);
rtd_outl(0xb809b074,0x00000141);
rtd_outl(0xb809b078,0x000001c3);
rtd_outl(0xb809b07c,0x00000116);
rtd_outl(0xb809b080,0x00000194);
rtd_outl(0xb809b084,0x00000129);
rtd_outl(0xb809b088,0x000001ab);
rtd_outl(0xb809b08c,0x00000152);
rtd_outl(0xb809b090,0x000061d0);
rtd_outl(0xb809b094,0x00006105);
rtd_outl(0xb809b098,0x00002187);
rtd_outl(0xb809b09c,0x0000203a);
rtd_outl(0xb809b0a0,0x00000000);
rtd_outl(0xb809b0a4,0x00000000);
rtd_outl(0xb809b0a8,0x00000000);
rtd_outl(0xb809b0ac,0x00000000);
rtd_outl(0xb809b0b0,0x00000000);
rtd_outl(0xb809b0b4,0x00000000);
rtd_outl(0xb809b0b8,0x00000000);
rtd_outl(0xb809b0bc,0x00000000);
rtd_outl(0xb809b0c0,0x00000000);
rtd_outl(0xb809b0c4,0x00000000);
rtd_outl(0xb809b0c8,0x00000000);
rtd_outl(0xb809b0cc,0x00000000);
rtd_outl(0xb809b200,0x07850ef0);
rtd_outl(0xb809b204,0xaa0e2cee);
rtd_outl(0xb809b208,0xcceeaacc);
rtd_outl(0xb809b20c,0x37373737);
rtd_outl(0xb809b210,0x000139ff);
rtd_outl(0xb809b214,0x00009cff);
rtd_outl(0xb809b218,0x011f9e3f);
rtd_outl(0xb809b21c,0x00012416);
rtd_outl(0xb809b220,0x00e79e3f);
rtd_outl(0xb809b224,0x011f9e3f);
rtd_outl(0xb809b228,0x00012416);
rtd_outl(0xb809b22c,0x00239e3f);
rtd_outl(0xb809b230,0x00000084);
rtd_outl(0xb809b234,0x00002ff8);
rtd_outl(0xb809b238,0x00002af8);
rtd_outl(0xb809b23c,0x00006040);
rtd_outl(0xb809b240,0x0219de00);
rtd_outl(0xb809b244,0x00086c00);
rtd_outl(0xb809b248,0x003efc00);
rtd_outl(0xb809b24c,0x00000610);
rtd_outl(0xb809b250,0x00000000);
rtd_outl(0xb809b254,0x0006fffc);
rtd_outl(0xb809b258,0x00000202);
rtd_outl(0xb809b25c,0x37373737);
rtd_outl(0xb809b260,0x00000040);
rtd_outl(0xb809b264,0x00000000);
rtd_outl(0xb809b268,0x00000000);
rtd_outl(0xb809b26c,0x00000000);
rtd_outl(0xb809b270,0x00fffffe);
rtd_outl(0xb809b274,0x00000040);
rtd_outl(0xb809b278,0x00000000);
rtd_outl(0xb809b27c,0x77777777);
rtd_outl(0xb809b280,0x77777777);
rtd_outl(0xb809b284,0x00010c00); //skyredd_meander
rtd_outl(0xb809b288,0x00000000);
rtd_outl(0xb809b28c,0x05140000);
rtd_outl(0xb809b2ec,0x001ff800);
rtd_outl(0xb809b2f0,0x0000f7f8);
rtd_outl(0xb809b2f4,0x00007e90);
rtd_outl(0xb809b2f8,0x00007e90);
rtd_outl(0xb809b2fc,0x0000cd04);
rtd_outl(0xb809b300,0x00000001);
rtd_outl(0xb809b304,0x00010ef0);
rtd_outl(0xb809b308,0x012c0000);
rtd_outl(0xb809b30c,0x00003204);
rtd_outl(0xb809b310,0x00800000);
rtd_outl(0xb809b314,0x00000fff);
rtd_outl(0xb809b318,0x00003200);
rtd_outl(0xb809b31c,0x00000006);
rtd_outl(0xb809b320,0x00002204);
rtd_outl(0xb809b324,0x00800000);
rtd_outl(0xb809b328,0x00000fff);
rtd_outl(0xb809b32c,0x00003200);
rtd_outl(0xb809b330,0x00100096);
rtd_outl(0xb809b334,0x00040041);
rtd_outl(0xb809b338,0x00200010);
rtd_outl(0xb809b33c,0x80402080);
rtd_outl(0xb809b340,0x00000000);
rtd_outl(0xb809b344,0x00000000);
rtd_outl(0xb809b348,0x00000000);
rtd_outl(0xb809b34c,0x00000000);
rtd_outl(0xb809b350,0x08000000);
rtd_outl(0xb809b354,0x00101010);
rtd_outl(0xb809b358,0x00000080);
rtd_outl(0xb809b35c,0x00000000);
rtd_outl(0xb809b360,0x00000000);
rtd_outl(0xb809b364,0x00000000);
rtd_outl(0xb809b380,0x00000000);
rtd_outl(0xb809b384,0x00000000);
rtd_outl(0xb809b388,0x00000000);
rtd_outl(0xb809b38c,0x00040011);
rtd_outl(0xb809b390,0xc040ff00);
rtd_outl(0xb809b3b0,0x00000000);
rtd_outl(0xb809b3b4,0x00000000);
rtd_outl(0xb809b3bc,0x00fff000);
rtd_outl(0xb809b3c0,0x00007e90);
rtd_outl(0xb809b3c4,0x00000000);
rtd_outl(0xb809b3c8,0x00000000);
rtd_outl(0xb809b3cc,0x00000000);
rtd_outl(0xb809b3d0,0x00000000);
rtd_outl(0xb809b3d4,0x00000000);
rtd_outl(0xb809b3d8,0x00000000);
rtd_outl(0xb809b3dc,0x00000000);
rtd_outl(0xb809b400,0x00000000);
rtd_outl(0xb809b404,0x00000000);
rtd_outl(0xb809b408,0x00000000);
rtd_outl(0xb809b40c,0x00000000);
rtd_outl(0xb809b410,0x00000000);
rtd_outl(0xb809b414,0x00000000);
rtd_outl(0xb809b418,0x00000000);
rtd_outl(0xb809b41c,0x00000000);
rtd_outl(0xb809b420,0x00000000);
rtd_outl(0xb809b424,0x00000000);
rtd_outl(0xb809b428,0x00000000);
rtd_outl(0xb809b42c,0x00000000);
rtd_outl(0xb809b430,0x00000000);
rtd_outl(0xb809b434,0x00000000);
rtd_outl(0xb809b438,0x00000000);
rtd_outl(0xb809b43c,0x00000000);
rtd_outl(0xb809b440,0x00000000);
rtd_outl(0xb809b444,0x00000000);
rtd_outl(0xb809b448,0x00000000);
rtd_outl(0xb809b44c,0x00000000);
rtd_outl(0xb809b450,0x00000000);
rtd_outl(0xb809b454,0x00000000);
rtd_outl(0xb809b458,0x00000000);
rtd_outl(0xb809b45c,0x00000000);
rtd_outl(0xb809b460,0x00000000);
rtd_outl(0xb809b464,0x00000000);
rtd_outl(0xb809b468,0x00000000);
rtd_outl(0xb809b46c,0x00000000);
rtd_outl(0xb809b470,0x00000000);
rtd_outl(0xb809b474,0x00000000);
rtd_outl(0xb809b478,0x00000000);
rtd_outl(0xb809b47c,0x00000000);
rtd_outl(0xb809b480,0x00000000);
rtd_outl(0xb809b484,0x00000000);
rtd_outl(0xb809b488,0x00000000);
rtd_outl(0xb809b48c,0x00000000);
rtd_outl(0xb809b490,0x00000000);
rtd_outl(0xb809b494,0x00000000);
rtd_outl(0xb809b498,0x00000000);
rtd_outl(0xb809b49c,0x00000000);
rtd_outl(0xb809b4a0,0x00000000);
rtd_outl(0xb809b4a4,0x00000000);
rtd_outl(0xb809b4a8,0x00000000);
rtd_outl(0xb809b4ac,0x00000000);
rtd_outl(0xb809b4b0,0x00000000);
rtd_outl(0xb809b4b4,0x00000000);
rtd_outl(0xb809b4b8,0x00000000);
rtd_outl(0xb809b4bc,0x00000000);
rtd_outl(0xb809b4c0,0x00000000);
rtd_outl(0xb809b4c4,0x00000000);
rtd_outl(0xb809b4c8,0x00000000);
rtd_outl(0xb809b4cc,0x00000000);
rtd_outl(0xb809b4d0,0x00000000);
rtd_outl(0xb809b4d4,0x00000000);
rtd_outl(0xb809b4d8,0x00000000);
rtd_outl(0xb809b4dc,0x00000000);
rtd_outl(0xb809b4e0,0x00000000);
rtd_outl(0xb809b4e4,0x00000000);
rtd_outl(0xb809b4e8,0x00000000);
rtd_outl(0xb809b4ec,0x00000000);
rtd_outl(0xb809b4f0,0x00000000);
rtd_outl(0xb809b4f4,0x00000000);
rtd_outl(0xb809b4f8,0x00000000);
rtd_outl(0xb809b4fc,0x00000000);
rtd_outl(0xb809b500,0x00000000);
rtd_outl(0xb809b504,0x00000000);
rtd_outl(0xb809b508,0x00000000);
rtd_outl(0xb809b50c,0x00000000);
rtd_outl(0xb809b510,0x00000000);
rtd_outl(0xb809b514,0x00000000);
rtd_outl(0xb809b518,0x00000000);
rtd_outl(0xb809b51c,0x00000000);
rtd_outl(0xb809b520,0x00000000);
rtd_outl(0xb809b524,0x00000000);
rtd_outl(0xb809b528,0x00000000);
rtd_outl(0xb809b52c,0x00000000);
rtd_outl(0xb809b530,0x00000000);
rtd_outl(0xb809b534,0x00000000);
rtd_outl(0xb809b538,0x00000000);
rtd_outl(0xb809b53c,0x00000000);
rtd_outl(0xb809b540,0x00000000);
rtd_outl(0xb809b544,0x00000000);
rtd_outl(0xb809b548,0x00000000);
rtd_outl(0xb809b54c,0x00000000);
rtd_outl(0xb809b550,0x00000000);
rtd_outl(0xb809b554,0x00000000);
rtd_outl(0xb809b558,0x00000000);
rtd_outl(0xb809b55c,0x00000000);
rtd_outl(0xb809b560,0x00000000);
rtd_outl(0xb809b564,0x00000000);
rtd_outl(0xb809b568,0x00000000);
rtd_outl(0xb809b56c,0x00000000);
rtd_outl(0xb809b570,0x00000000);
rtd_outl(0xb809b574,0x00000000);
rtd_outl(0xb809b578,0x00000000);
rtd_outl(0xb809b57c,0x00000000);
rtd_outl(0xb809b580,0x00000000);
rtd_outl(0xb809b584,0x00000000);
rtd_outl(0xb809b588,0x00000000);
rtd_outl(0xb809b58c,0x00000000);
rtd_outl(0xb809b590,0x00000000);
rtd_outl(0xb809b594,0x00000000);
rtd_outl(0xb809b598,0x00000000);
rtd_outl(0xb809b59c,0x00000000);
rtd_outl(0xb809b5a0,0x00000000);
rtd_outl(0xb809b5a4,0x00000000);
rtd_outl(0xb809b5a8,0x00000000);
rtd_outl(0xb809b5ac,0x00000000);
rtd_outl(0xb809b5b0,0x00000000);
rtd_outl(0xb809b5b4,0x00000000);
rtd_outl(0xb809b5b8,0x00000000);
rtd_outl(0xb809b5bc,0x00000000);
rtd_outl(0xb809b5c0,0x00000000);
rtd_outl(0xb809b5c4,0x00000000);
rtd_outl(0xb809b5c8,0x00000000);
rtd_outl(0xb809b5cc,0x00000000);
rtd_outl(0xb809b5d0,0x00000000);
rtd_outl(0xb809b5d4,0x00000000);
rtd_outl(0xb809b5d8,0x00000000);
rtd_outl(0xb809b5dc,0x00000000);
rtd_outl(0xb809b5e0,0x00000000);
rtd_outl(0xb809b5e4,0x00000000);
rtd_outl(0xb809b5e8,0x00000000);
rtd_outl(0xb809b5ec,0x00000000);
rtd_outl(0xb809b5f0,0x00000000);
rtd_outl(0xb809b5f4,0x00000000);
rtd_outl(0xb809b5f8,0x00000000);
rtd_outl(0xb809b5fc,0x00000000);
rtd_outl(0xb809b600,0x000003fc);
rtd_outl(0xb809b604,0x000003fc);
rtd_outl(0xb809b608,0x000003fc);
rtd_outl(0xb809b60c,0x000003fc);
rtd_outl(0xb809b610,0x000003fc);
rtd_outl(0xb809b614,0x000003fc);
rtd_outl(0xb809b618,0x000003fc);
rtd_outl(0xb809b61c,0x000003fc);
rtd_outl(0xb809b620,0x000003fc);
rtd_outl(0xb809b624,0x000003fc);
rtd_outl(0xb809b628,0x000003fc);
rtd_outl(0xb809b62c,0x000003fc);
rtd_outl(0xb809b630,0x000003fc);
rtd_outl(0xb809b634,0x000003fc);
rtd_outl(0xb809b638,0x000003fc);
rtd_outl(0xb809b63c,0x000003fc);
rtd_outl(0xb809b640,0x000003fc);
rtd_outl(0xb809b644,0x000003fc);
rtd_outl(0xb809b648,0x000003fc);
rtd_outl(0xb809b64c,0x000003fc);
rtd_outl(0xb809b650,0x000003fc);
rtd_outl(0xb809b654,0x000003fc);
rtd_outl(0xb809b658,0x000003fc);
rtd_outl(0xb809b65c,0x000003fc);
rtd_outl(0xb809b660,0x000003de);
rtd_outl(0xb809b664,0x000003de);
rtd_outl(0xb809b668,0x000003de);
rtd_outl(0xb809b66c,0x000003de);
rtd_outl(0xb809b670,0x000003db);
rtd_outl(0xb809b674,0x000003de);
rtd_outl(0xb809b678,0x000003de);
rtd_outl(0xb809b67c,0x000003de);
rtd_outl(0xb809b680,0x00fff000);
rtd_outl(0xb809b684,0x00fff000);
rtd_outl(0xb809b688,0x00fff000);
rtd_outl(0xb809b68c,0x00fff000);
rtd_outl(0xb809b690,0x00fff000);
rtd_outl(0xb809b694,0x00fff000);
rtd_outl(0xb809b698,0x00fff000);
rtd_outl(0xb809b69c,0x00fff000);
rtd_outl(0xb809b6a0,0x00fff000);
rtd_outl(0xb809b6a4,0x00fff000);
rtd_outl(0xb809b6a8,0x00fff000);
rtd_outl(0xb809b6ac,0x00fff000);
rtd_outl(0xb809b6b0,0x00fff000);
rtd_outl(0xb809b6b4,0x00fff000);
rtd_outl(0xb809b6b8,0x00fff000);
rtd_outl(0xb809b6bc,0x00fff000);
rtd_outl(0xb809b6c0,0x00fff000);
rtd_outl(0xb809b6c4,0x00fff000);
rtd_outl(0xb809b6c8,0x00fff000);
rtd_outl(0xb809b6cc,0x00fff000);
rtd_outl(0xb809b6d0,0x00fff000);
rtd_outl(0xb809b6d4,0x00fff000);
rtd_outl(0xb809b6d8,0x00fff000);
rtd_outl(0xb809b6dc,0x00fff000);
rtd_outl(0xb809b6e0,0x00fff000);
rtd_outl(0xb809b6e4,0x00fff000);
rtd_outl(0xb809b6e8,0x00fff000);
rtd_outl(0xb809b6ec,0x00fff000);
rtd_outl(0xb809b6f0,0x00fff000);
rtd_outl(0xb809b6f4,0x00fff000);
rtd_outl(0xb809b6f8,0x00fff000);
rtd_outl(0xb809b6fc,0x00fff000);
rtd_outl(0xb809b900,0x001df800);
rtd_outl(0xb809b904,0x0010d800);
rtd_outl(0xb809b908,0x001bc1a4);
rtd_outl(0xb809b90c,0x00000000);
rtd_outl(0xb809b910,0x1f086000);
rtd_outl(0xb809b914,0x000f021c);
rtd_outl(0xb809b918,0x0c3c2e60);
rtd_outl(0xb809b91c,0x001df800);
rtd_outl(0xb809b920,0x0010d800); //skyredd_meander
rtd_outl(0xb809b924,0x00000001);
rtd_outl(0xb809b928,0x00000000);
rtd_outl(0xb809b92c,0x00000000);
rtd_outl(0xb809b930,0x00000000);
rtd_outl(0xb809b934,0x00000000);
rtd_outl(0xb809b938,0x00000000);
rtd_outl(0xb809b93c,0x00000000);
rtd_outl(0xb809b940,0x00000000);
rtd_outl(0xb809b944,0x00000000);
rtd_outl(0xb809b948,0x00000000);
rtd_outl(0xb809b94c,0x00000000);
rtd_outl(0xb809b950,0x00000000);
rtd_outl(0xb809b954,0x00000000);
rtd_outl(0xb809b958,0x00000000);
rtd_outl(0xb809b95c,0x00000000);
rtd_outl(0xb809b960,0x00000000);
rtd_outl(0xb809b964,0x00000000);
rtd_outl(0xb809b968,0x00000000);
rtd_outl(0xb809b96c,0x00000000);
rtd_outl(0xb809b970,0x000a0ac8);
rtd_outl(0xb809ba00,0x06c08010);
rtd_outl(0xb809ba04,0xb4501400);
rtd_outl(0xb809ba08,0x3fdf00c6);
rtd_outl(0xb809ba0c,0x000001ff);
rtd_outl(0xb809ba10,0x00000000);
rtd_outl(0xb809ba14,0x00000000);
rtd_outl(0xb809ba18,0x00000000);
rtd_outl(0xb809ba1c,0x00000000);
rtd_outl(0xb809ba20,0x00000000);
rtd_outl(0xb809ba24,0x00000000);
rtd_outl(0xb809ba28,0x00000000);
rtd_outl(0xb809ba2c,0x00488049);
rtd_outl(0xb809ba30,0x000fc421);
rtd_outl(0xb809ba34,0x002dc0eb);
rtd_outl(0xb809ba38,0x00020001);
rtd_outl(0xb809ba3c,0x00000000);
rtd_outl(0xb809ba40,0x00000000);
rtd_outl(0xb809ba50,0x00000000);
rtd_outl(0xb809ba54,0x00000000);
rtd_outl(0xb809ba58,0x00000000);
rtd_outl(0xb809ba5c,0x00000000);
rtd_outl(0xb809ba60,0x00000000);
rtd_outl(0xb809ba64,0x00000000);
rtd_outl(0xb809ba68,0x00008000);
rtd_outl(0xb809ba6c,0x00000000);
rtd_outl(0xb809ba70,0x00000000);
rtd_outl(0xb809ba74,0x00000000);
rtd_outl(0xb809ba78,0x00000000);
rtd_outl(0xb809babc,0x0e903a40);
rtd_outl(0xb809bac0,0x00000000);
rtd_outl(0xb809bac4,0x00000000);
rtd_outl(0xb809bac8,0x00000000);
rtd_outl(0xb809bacc,0x0e903a40);
rtd_outl(0xb809bad0,0x00000000);
rtd_outl(0xb809bad4,0x00000000);
rtd_outl(0xb809bad8,0x00000000);
rtd_outl(0xb809badc,0x00000000);
rtd_outl(0xb809bae0,0x00000000);
rtd_outl(0xb809bae4,0x00000000);
rtd_outl(0xb809bae8,0x00000000);
rtd_outl(0xb809baec,0x00000000);
rtd_outl(0xb809baf0,0x00000000);
rtd_outl(0xb809baf4,0x00000000);
rtd_outl(0xb809baf8,0x00000000);
rtd_outl(0xb809bafc,0x00000000);
rtd_outl(0xb809bb00,0xb4b4b4b4);
rtd_outl(0xb809bb04,0xb4b4b4b4);
rtd_outl(0xb809bb08,0xb4b4b4b4);
rtd_outl(0xb809bb0c,0xb4b4b4b4);
rtd_outl(0xb809bb10,0xb4b4b4b4);
rtd_outl(0xb809bb14,0xb4b4b4b4);
rtd_outl(0xb809bb18,0xb4b4b4b4);
rtd_outl(0xb809bb1c,0xb4b4b4b4);
rtd_outl(0xb809bb20,0x00000078);
rtd_outl(0xb809bb24,0xffffffff);
rtd_outl(0xb809bb28,0x7ffffe49);
rtd_outl(0xb809bb2c,0x70f3fe4a);
rtd_outl(0xb809bb30,0x00060a1c);
rtd_outl(0xb809bb34,0x0030e780);
rtd_outl(0xb809bb38,0x0001fa40);
rtd_outl(0xb809bb3c,0x0000625b);
rtd_outl(0xb809bb40,0x0fd23f48);
rtd_outl(0xb809bb44,0x0fd23f48);
rtd_outl(0xb809bb48,0x0fd23f48);
rtd_outl(0xb809bb4c,0x0fd23f48);
rtd_outl(0xb809bb50,0x0fd23f48);
rtd_outl(0xb809bb54,0x0fd23f48);
rtd_outl(0xb809bb58,0x0fd23f48);
rtd_outl(0xb809bb5c,0x0fd23f48);
rtd_outl(0xb809bb60,0x0fd23f48);
rtd_outl(0xb809bb64,0x0fd23f48);
rtd_outl(0xb809bb68,0x0fd23f48);
rtd_outl(0xb809bb6c,0x0fd23f48);
rtd_outl(0xb809bb70,0x0fd23f48);
rtd_outl(0xb809bb74,0x0fd23f48);
rtd_outl(0xb809bb78,0x0fd23f48);
rtd_outl(0xb809bb7c,0x0fd23f48);
rtd_outl(0xb809bb80,0x30461f54);
rtd_outl(0xb809bb84,0x3747a40a);
rtd_outl(0xb809bb88,0x3f762f39);
rtd_outl(0xb809bb8c,0x3f86a1b7);
rtd_outl(0xb809bb90,0x3fc6215f);
rtd_outl(0xb809bb94,0x3fc60f0c);
rtd_outl(0xb809bb98,0x3d160350);
rtd_outl(0xb809bb9c,0x3f960424);
rtd_outl(0xb809bba0,0x30461e31);
rtd_outl(0xb809bba4,0x2946201e);
rtd_outl(0xb809bba8,0x35861f1b);
rtd_outl(0xb809bbac,0x3b588fc5);
rtd_outl(0xb809bbb0,0x3d662534);
rtd_outl(0xb809bbb4,0x3dc60d3d);
rtd_outl(0xb809bbb8,0x3fc6038d);
rtd_outl(0xb809bbbc,0x3fc60262);
rtd_outl(0xb809bbc0,0x32461c7a);
rtd_outl(0xb809bbc4,0x2c761c6e);
rtd_outl(0xb809bbc8,0x2c761b14);
rtd_outl(0xb809bbcc,0x3a5887e7);
rtd_outl(0xb809bbd0,0x3ba63535);
rtd_outl(0xb809bbd4,0x3b460c5e);
rtd_outl(0xb809bbd8,0x3fc60125);
rtd_outl(0xb809bbdc,0x3fc60315);
rtd_outl(0xb809bbe0,0x32261606);
rtd_outl(0xb809bbe4,0x2f561624);
rtd_outl(0xb809bbe8,0x2fc61445);
rtd_outl(0xb809bbec,0x35466093);
rtd_outl(0xb809bbf0,0x357608ba);
rtd_outl(0xb809bbf4,0x3aa897a0);
rtd_outl(0xb809bbf8,0x3de5fbba);
rtd_outl(0xb809bbfc,0x3ac5fcbe);
rtd_outl(0xb809bc00,0x00000a90);
rtd_outl(0xb809bc04,0x00000000);
rtd_outl(0xb809bc08,0x00000000);
rtd_outl(0xb809bc0c,0x000003c0);
rtd_outl(0xb809bc10,0x2468bc01);
rtd_outl(0xb809bc14,0x00000011);
rtd_outl(0xb809bc18,0x00000000);
rtd_outl(0xb809bc1c,0x00000000);
//rtd_outl(0xb809bc20,0x00000000);
rtd_outl(0xb809bc20,0x00000100);  //iir disable
rtd_outl(0xb809bc24,0x00000870);
rtd_outl(0xb809bc28,0x0001110c);
rtd_outl(0xb809bc2c,0x00044042);
rtd_outl(0xb809bc30,0x0083ff25);
rtd_outl(0xb809bc34,0x00008888);
rtd_outl(0xb809bc38,0x00008888);
rtd_outl(0xb809bc3c,0x0ff22288);
rtd_outl(0xb809bc40,0x00016004);
rtd_outl(0xb809bc44,0x000835bc);
rtd_outl(0xb809bc48,0x00018002);
rtd_outl(0xb809bc4c,0x00075140);
rtd_outl(0xb809bc50,0x0004dcb0);
rtd_outl(0xb809bc54,0x0006c032);
rtd_outl(0xb809bc58,0x00018002);
rtd_outl(0xb809bc5c,0x000500d0);
rtd_outl(0xb809bc60,0x000011d4);
rtd_outl(0xb809bc64,0x0006f058);
rtd_outl(0xb809bc68,0x0000020d);
rtd_outl(0xb809bc6c,0x00028020);
rtd_outl(0xb809bc70,0x00014010);
rtd_outl(0xb809bc74,0x001a8600);
rtd_outl(0xb809bc78,0x00014010);
rtd_outl(0xb809bc7c,0x00028020);
rtd_outl(0xb809bc80,0x00080180);
rtd_outl(0xb809bc84,0x00028020);
rtd_outl(0xb809bc88,0x000801d0);
rtd_outl(0xb809bc8c,0x00806040);
rtd_outl(0xb809bc90,0x00000010);
rtd_outl(0xb809bc94,0x00c08000);
rtd_outl(0xb809bc98,0x00002020);
rtd_outl(0xb809bc9c,0x00077402);
rtd_outl(0xb809bca0,0x00086402);
rtd_outl(0xb809bca4,0x00000000);
rtd_outl(0xb809bca8,0x00000000);
rtd_outl(0xb809bcac,0x00000000);
rtd_outl(0xb809bcb0,0x00000000);
rtd_outl(0xb809bcb4,0x00000000);
rtd_outl(0xb809bcb8,0x00000000);
rtd_outl(0xb809bcbc,0x00000000);
rtd_outl(0xb809bcc0,0x00000000);
rtd_outl(0xb809bcc4,0x00000000);
rtd_outl(0xb809bcc8,0x00000000);
rtd_outl(0xb809bccc,0x00000000);
rtd_outl(0xb809bcd0,0x00000000);
rtd_outl(0xb809bcd4,0x00000000);
rtd_outl(0xb809bcd8,0x00000000);
rtd_outl(0xb809bcdc,0x00000000);
rtd_outl(0xb809bce0,0x00000000);
rtd_outl(0xb809bce4,0x00000000);
rtd_outl(0xb809bce8,0x00000000);
rtd_outl(0xb809bcec,0x00000000);
rtd_outl(0xb809bcf0,0x00000000);
rtd_outl(0xb809bcf4,0x00000008);
rtd_outl(0xb809bcf8,0x00000000);
rtd_outl(0xb809bcfc,0x00000000);
rtd_outl(0xb809bd00,0x010873c0);
rtd_outl(0xb809bd04,0x00000000);
rtd_outl(0xb809bd08,0x00004080);
rtd_outl(0xb809bd0c,0x00000000);
rtd_outl(0xb809bd10,0x00000000);
rtd_outl(0xb809bd14,0x00000000);
rtd_outl(0xb809bd18,0x0000402c);
rtd_outl(0xb809bd1c,0x00000000);
rtd_outl(0xb809bd20,0x00004026);
rtd_outl(0xb809bd24,0x00000000);
rtd_outl(0xb809bd28,0x00000000);
rtd_outl(0xb809bd2c,0x0000402a);
rtd_outl(0xb809bd30,0x00000000);
rtd_outl(0xb809bd34,0x00004022);
rtd_outl(0xb809bd38,0x00000000);
rtd_outl(0xb809bd3c,0x00000000);
rtd_outl(0xb809bd40,0x00000000);
rtd_outl(0xb809bd44,0x00000000);
rtd_outl(0xb809bd48,0x00000000);
rtd_outl(0xb809bd4c,0x00000000);
rtd_outl(0xb809bd50,0x00000000);
rtd_outl(0xb809bd54,0x00000000);
rtd_outl(0xb809bd58,0x00000000);
rtd_outl(0xb809bd5c,0x00000000);
rtd_outl(0xb809bd60,0x00000000);
rtd_outl(0xb809bd64,0x00000000);
rtd_outl(0xb809bd68,0x00000000);
rtd_outl(0xb809bd6c,0x00000000);
rtd_outl(0xb809bd70,0x00000000);
rtd_outl(0xb809bd74,0x00000000);
rtd_outl(0xb809bd78,0x00000000);
rtd_outl(0xb809bd7c,0x00000000);
rtd_outl(0xb809bd80,0x00000000);
rtd_outl(0xb809bd84,0x00000000);
rtd_outl(0xb809bd88,0x00000000);
rtd_outl(0xb809bd8c,0x00000000);
rtd_outl(0xb809bd90,0x00000000);
rtd_outl(0xb809bd94,0x00000000);
rtd_outl(0xb809bd98,0x00000000);
rtd_outl(0xb809bd9c,0x00000000);
rtd_outl(0xb809bda0,0xc3c5cede);
rtd_outl(0xb809bda4,0x00000000);
rtd_outl(0xb809bda8,0xc4c6edc8);
rtd_outl(0xb809bdac,0x00000000);
rtd_outl(0xb809bdb0,0xc4c7edc7);
rtd_outl(0xb809bdb4,0x00000000);
rtd_outl(0xb809bdb8,0xc3edcbc7);
rtd_outl(0xb809bdbc,0x00000000);
rtd_outl(0xb809bdc0,0xd3b3d484);
rtd_outl(0xb809bdc4,0x9ca191a7);
rtd_outl(0xb809bdc8,0xda414263);
rtd_outl(0xb809bdcc,0x5e585298);
rtd_outl(0xb809bdd0,0xd93c4060);
rtd_outl(0xb809bdd4,0x555c4687);
rtd_outl(0xb809bdd8,0xa5959a95);
rtd_outl(0xb809bddc,0x9d9fd49c);
rtd_outl(0xb809be00,0x8700000a);
rtd_outl(0xb809be04,0x00000000);
rtd_outl(0xb809be08,0x00000080);
rtd_outl(0xb809be0c,0x00000000);
rtd_outl(0xb809be10,0x0000001f);
rtd_outl(0xb809be14,0xffffffff);
rtd_outl(0xb809be18,0xffffffff);
rtd_outl(0xb809be1c,0xffffffff);
rtd_outl(0xb809be20,0xffffffff);
rtd_outl(0xb809be24,0x00000000);
rtd_outl(0xb809be28,0x00000000);
rtd_outl(0xb809be2c,0x00000000);
rtd_outl(0xb809be30,0x00000000);
rtd_outl(0xb809be34,0x00000000);
rtd_outl(0xb809be38,0x00000000);
rtd_outl(0xb809be3c,0x00000000);
rtd_outl(0xb809be40,0x00000000);
rtd_outl(0xb809be44,0x00000000);
rtd_outl(0xb809be48,0x00000000);
rtd_outl(0xb809be4c,0x00000000);
rtd_outl(0xb809be50,0x00000000);
rtd_outl(0xb809be54,0x00000000);
rtd_outl(0xb809be58,0x00000000);
rtd_outl(0xb809be5c,0x00000000);
rtd_outl(0xb809be60,0x00000000);
rtd_outl(0xb809be64,0x03030303);
rtd_outl(0xb809be68,0x00001806);
rtd_outl(0xb809be6c,0x0013fc03);
rtd_outl(0xb809be70,0x03081000);
rtd_outl(0xb809be74,0x1544c1c4);
rtd_outl(0xb809be78,0x1f79d6d8);
rtd_outl(0xb809be7c,0x0c41001f);
rtd_outl(0xb809be80,0x18b520c5);
rtd_outl(0xb809be84,0x018b524f);
rtd_outl(0xb809be88,0x00100e64);
rtd_outl(0xb809be8c,0x00a02800);
rtd_outl(0xb809be90,0x003c2800);
rtd_outl(0xb809be94,0x000000ce);
rtd_outl(0xb809be98,0x012c4a00);
rtd_outl(0xb809be9c,0x005f3f00);
rtd_outl(0xb809bea0,0x00000110);
rtd_outl(0xb809bea4,0x22222222);
rtd_outl(0xb809bea8,0x22222222);
rtd_outl(0xb809beac,0x22222222);
rtd_outl(0xb809beb0,0x00222222);
rtd_outl(0xb809beb4,0xbebebebe);
rtd_outl(0xb809beb8,0xbebebebe);
rtd_outl(0xb809bebc,0xbebebebe);
rtd_outl(0xb809bec0,0x00bebebe);
rtd_outl(0xb809bec4,0x50505050);
rtd_outl(0xb809bec8,0x50505050);
rtd_outl(0xb809becc,0x50505050);
rtd_outl(0xb809bed0,0x00505050);
rtd_outl(0xb809bed4,0x00875f00);
rtd_outl(0xb809bed8,0x00000d60);
rtd_outl(0xb809bedc,0x00000144);
rtd_outl(0xb809bee0,0x00873c00);
rtd_outl(0xb809bee4,0x00000420);
rtd_outl(0xb809bee8,0x00000083);
rtd_outl(0xb809beec,0x003d1512);
rtd_outl(0xb809bef0,0x000087f0);
rtd_outl(0xb809bef4,0x00001928);
rtd_outl(0xb809bef8,0x00000000);
rtd_outl(0xb809befc,0x00000003);
rtd_outl(0xb809bf00,0x00101028);
rtd_outl(0xb809bf04,0x8600ef00);
rtd_outl(0xb809bf08,0xc0906030);
rtd_outl(0xb809bf0c,0x00006e19);
rtd_outl(0xb809bf10,0x88888888);
rtd_outl(0xb809bf14,0x08888888);
rtd_outl(0xb809bf18,0x77777777);
rtd_outl(0xb809bf1c,0x87777777);
rtd_outl(0xb809bf20,0x00007fff);
//notfound//rtd_outl(0xb809bf24,0x00000000);
//notfound//rtd_outl(0xb809bf28,0x00000000);
rtd_outl(0xb809bf2c,0x00a286c6);
rtd_outl(0xb809bf30,0x00040200);
rtd_outl(0xb809bf34,0x000000c9);
rtd_outl(0xb809bf38,0x00ff7d14);
rtd_outl(0xb809bf3c,0x000a0700);
rtd_outl(0xb809bf40,0x00000084);
rtd_outl(0xb809bf44,0x00964b00);
rtd_outl(0xb809bf48,0x00040200);
rtd_outl(0xb809bf4c,0x00000082);
rtd_outl(0xb809bf50,0x006e320a);
rtd_outl(0xb809bf54,0x00060500);
rtd_outl(0xb809bf58,0x00000048);
rtd_outl(0xb809bf5c,0x006e3c00);
rtd_outl(0xb809bf60,0x00060400);
rtd_outl(0xb809bf64,0x000000c4);
rtd_outl(0xb809bf68,0x000600c0);
rtd_outl(0xb809bf6c,0x000c0240);
rtd_outl(0xb809bf70,0x0006e064);
rtd_outl(0xb809bf74,0x88877877);
rtd_outl(0xb809bf78,0x07787788);
rtd_outl(0xb809bf7c,0x88866866);
rtd_outl(0xb809bf80,0x06676688);
rtd_outl(0xb809bf84,0x40404040);
rtd_outl(0xb809bf88,0x40404040);
rtd_outl(0xb809bf8c,0x40404040);
rtd_outl(0xb809bf90,0x00404040);
rtd_outl(0xb809bf94,0x00000040);
rtd_outl(0xb809bf98,0x00000190);
rtd_outl(0xb809bf9c,0x00070701);
rtd_outl(0xb809bfa0,0x00020ff3);
rtd_outl(0xb809bfa4,0x00050500);
rtd_outl(0xb809bfa8,0x00013441);
rtd_outl(0xb809bfac,0x0064640a);
rtd_outl(0xb809bfb0,0x00007aa0);
rtd_outl(0xb809bfb4,0x00505000);
rtd_outl(0xb809bfb8,0x00002220);
rtd_outl(0xb809bfbc,0x00000021);
rtd_outl(0xb809bfc0,0x3fffffff);
rtd_outl(0xb809bfc4,0x00000000);
rtd_outl(0xb809bfc8,0x00000000);
rtd_outl(0xb809bfcc,0x15555555);
rtd_outl(0xb809bfd0,0x3fffffff);
rtd_outl(0xb809bfd4,0x3fffffff);
rtd_outl(0xb809bfd8,0x000efc00);
rtd_outl(0xb809bfdc,0x00086c00);
rtd_outl(0xb809bfe0,0x010873c0);
rtd_outl(0xb809bfe4,0xffffffff);
rtd_outl(0xb809bfe8,0x00000000);
rtd_outl(0xb809bfec,0x00000000);
rtd_outl(0xb809bff0,0x76543210);
rtd_outl(0xb809bff4,0xfedcba98);
rtd_outl(0xb809bff8,0x88888888);
rtd_outl(0xb809bffc,0x08888888);
rtd_outl(0xb809C000, 0x44001060); //memory_addr//
rtd_outl(0xb809C004, 0x4407F960); //memory_addr//
rtd_outl(0xb809C008, 0x440FE260); //memory_addr//
rtd_outl(0xb809C00C, 0x4417CB60); //memory_addr//
rtd_outl(0xb809C010, 0x441FB460); //memory_addr//
rtd_outl(0xb809C014, 0x44279D60); //memory_addr//
rtd_outl(0xb809C018, 0x4407F960); //memory_addr//
rtd_outl(0xb809C01C, 0x440FE260); //memory_addr//
rtd_outl(0xb809C020, 0x4417CB60); //memory_addr//
rtd_outl(0xb809C024, 0x441FB460); //memory_addr//
rtd_outl(0xb809C028, 0x44279D60); //memory_addr//
rtd_outl(0xb809C02C, 0x442F8660); //memory_addr//
rtd_outl(0xb809c030,0x00040000);
rtd_outl(0xb809c034,0x000003c0);
rtd_outl(0xb809c038,0x0031001f);
rtd_outl(0xb809c03c,0x00000000);
rtd_outl(0xb809c040,0x0011001f);
rtd_outl(0xb809c044,0x00000000);
rtd_outl(0xb809c048,0x0011001f);
rtd_outl(0xb809c04c,0x00000000);
rtd_outl(0xb809c050,0x0011001f);
rtd_outl(0xb809c054,0x00000000);
rtd_outl(0xb809c058,0x00000000);
rtd_outl(0xb809c05c,0x00000000);
rtd_outl(0xb809c060,0x00000000);
rtd_outl(0xb809c064,0x00000000);
rtd_outl(0xb809c068,0x00000000);
rtd_outl(0xb809c06c,0x00000f00);
rtd_outl(0xb809c070,0x0021001f);
rtd_outl(0xb809c074,0x00000000);
rtd_outl(0xb809c078,0x00000000);
rtd_outl(0xb809c07c,0x00000000);
rtd_outl(0xb809c080,0x00000000);
rtd_outl(0xb809c084,0x00000000);
rtd_outl(0xb809c088,0x00000000);
rtd_outl(0xb809c08c,0x00000530);
rtd_outl(0xb809c090,0x0021001f);
rtd_outl(0xb809c094,0x00000000);
rtd_outl(0xb809c098,0x0011001f);
rtd_outl(0xb809c09c,0x00000000);
rtd_outl(0xb809c0a0,0x0011001f);
rtd_outl(0xb809c0a4,0x00000000);
rtd_outl(0xb809c0a8,0x0021c3c0);
rtd_outl(0xb809c0ac,0x000870f0);
rtd_outl(0xb809c0b0,0x00001080);
rtd_outl(0xb809c0b4,0x0053f03c);
rtd_outl(0xb809c0b8,0x00000000);
rtd_outl(0xb809c0bc,0xffffffff);
rtd_outl(0xb809c0c0,0x00000000);
rtd_outl(0xb809c0c4,0x00000000);
rtd_outl(0xb809c0c8,0x00000000);
rtd_outl(0xb809c0cc,0x00000000);
rtd_outl(0xb809c0d0,0x00000000);
rtd_outl(0xb809c0d4,0x00000000);
rtd_outl(0xb809c0d8,0x01d9a000);  //mv04_2 //memory_addr//
rtd_outl(0xb809c0dc,0x01dbbc00); //memory_addr//
rtd_outl(0xb809c0e0,0x000005fd);
rtd_outl(0xb809c0e4,0x00000948);
rtd_outl(0xb809c0e8,0x00000000);
rtd_outl(0xb809c0ec,0x000e600f);
rtd_outl(0xb809c0f0,0x00000000);
rtd_outl(0xb809c0f4,0x00000601);
rtd_outl(0xb809c0f8,0x02101de7);
//notfound//rtd_outl(0xb809c0fc,0x00000000);
rtd_outl(0xb809c100,0x443F5860); //memory_addr//
rtd_outl(0xb809c104,0x443F5860); //memory_addr//
rtd_outl(0xb809c108,0x44474160); //memory_addr//
rtd_outl(0xb809c10c,0x44474160); //memory_addr//
rtd_outl(0xb809c110,0x000003c0);
rtd_outl(0xb809c114,0x0031001f);
rtd_outl(0xb809c118,0x00000000);
rtd_outl(0xb809c11c,0x0011001f);
rtd_outl(0xb809c120,0x00000000);
rtd_outl(0xb809c124,0x44474160); //memory_addr//
rtd_outl(0xb809c128,0x44474160); //memory_addr//
rtd_outl(0xb809c12c,0x444B35E0); //memory_addr//
rtd_outl(0xb809c130,0x444B35E0); //memory_addr//
rtd_outl(0xb809c134,0x000001e0);
rtd_outl(0xb809c138,0x0031001f);
rtd_outl(0xb809c13c,0x00000000);
rtd_outl(0xb809c140,0x0011001f);
rtd_outl(0xb809c144,0x00000000);
rtd_outl(0xb809c148,0x444B35E0); //memory_addr//
rtd_outl(0xb809c14c,0x444B35E0); //memory_addr//
rtd_outl(0xb809c150,0x444CCAE0); //memory_addr//
rtd_outl(0xb809c154,0x444CCAE0); //memory_addr//
rtd_outl(0xb809c158,0x00000080);
rtd_outl(0xb809c15c,0x0031001f);
rtd_outl(0xb809c160,0x00000000);
rtd_outl(0xb809c164,0x0011001f);
rtd_outl(0xb809c168,0x00000000);
rtd_outl(0xb809c16c,0x444CCAE0); //memory_addr//
rtd_outl(0xb809c170,0x444CCAE0); //memory_addr//
rtd_outl(0xb809c174,0x444D3020); //memory_addr//
rtd_outl(0xb809c178,0x444D3020); //memory_addr//
rtd_outl(0xb809c17c,0x00000080);
rtd_outl(0xb809c180,0x0031001f);
rtd_outl(0xb809c184,0x00000000);
rtd_outl(0xb809c188,0x0011001f);
rtd_outl(0xb809c18c,0x00000000);
rtd_outl(0xb809c190,0x0021c0f0);
rtd_outl(0xb809c194,0x0021c0f0);
rtd_outl(0xb809c198,0x0021c03c);
rtd_outl(0xb809c19c,0x000870f0);
rtd_outl(0xb809c1a0,0x08081e3c);
rtd_outl(0xb809c1a4,0x00000000);
rtd_outl(0xb809c1a8,0x00000000);
rtd_outl(0xb809c1ac,0x00000000);
rtd_outl(0xb809c1b0,0x00000000);
rtd_outl(0xb809c1b4,0x00000000);
rtd_outl(0xb809c1b8,0x00000000);
rtd_outl(0xb809c1bc,0x0000c072);
rtd_outl(0xb809c1c0,0x00000415);
rtd_outl(0xb809c1c4,0x00000000);
rtd_outl(0xb809c1c8,0x00000000);
rtd_outl(0xb809c1cc,0x00181800);
rtd_outl(0xb809c1d0,0x00007e54);
rtd_outl(0xb809c1d4,0x0003c21b);
rtd_outl(0xb809c1d8,0x0003c03c);
rtd_outl(0xb809c1dc,0x00f000f0);
rtd_outl(0xb809c1e0,0x00007e90);
rtd_outl(0xb809c1e4,0x0003c21c);
rtd_outl(0xb809c1e8,0x0003c000);
rtd_outl(0xb809c1ec,0x00f000b4);
rtd_outl(0xb809c1f0,0x0000082b);
rtd_outl(0xb809c1f4,0x000005df);
rtd_outl(0xb809c1f8,0x001dd070);
rtd_outl(0xb809c1fc,0x000000e6);
rtd_outl(0xb809c200,0x444D3020); //memory_addr//
rtd_outl(0xb809c204,0x4452B9A0); //memory_addr//
rtd_outl(0xb809c208,0x00000500);
rtd_outl(0xb809c20c,0x0002a800);
rtd_outl(0xb809c210,0x13f1001f);
rtd_outl(0xb809c214,0x4452B9A0); //memory_addr//
rtd_outl(0xb809c218,0x44554BC0); //memory_addr//
rtd_outl(0xb809c21c,0x00000500);
rtd_outl(0xb809c220,0x00015800);
rtd_outl(0xb809c224,0x12f1001f);
rtd_outl(0xb809c228,0x0011001f);
rtd_outl(0xb809c22c,0x01d56000); //memory_addr//
rtd_outl(0xb809c230,0x01d78000); //memory_addr//
rtd_outl(0xb809c234,0x01d77c00); //memory_addr//
rtd_outl(0xb809c238,0x01d99c00); //memory_addr//
rtd_outl(0xb809c23c,0x00000400);
rtd_outl(0xb809c240,0x00011000);
rtd_outl(0xb809c244,0x0fb1001f);
rtd_outl(0xb809c248,0x01dbc000); //memory_addr//
rtd_outl(0xb809c24c,0x01e00000); //memory_addr//
rtd_outl(0xb809c250,0x01dff800); //memory_addr//
rtd_outl(0xb809c254,0x01e43800); //memory_addr//
rtd_outl(0xb809c258,0x00000800);
rtd_outl(0xb809c25c,0x00022000);
rtd_outl(0xb809c260,0x1e31001f);
rtd_outl(0xb809c264,0x0011001f);
rtd_outl(0xb809c268,0x0011001f);
rtd_outl(0xb809c26c,0x0011001f);
rtd_outl(0xb809c270,0x0011001f);
rtd_outl(0xb809c274,0x0011001f);
rtd_outl(0xb809c278,0x0011001f);
rtd_outl(0xb809C27C,0x442F8660); //memory_addr//
rtd_outl(0xb809C280,0x44376F60); //memory_addr//
rtd_outl(0xb809c284,0x44376F60); //memory_addr//
rtd_outl(0xb809c288,0x443F5860); //memory_addr//
rtd_outl(0xb809c28c,0x00000000);
rtd_outl(0xb809c290,0x00000000);
rtd_outl(0xb809c294,0x00000000);
rtd_outl(0xb809c298,0x00000000);
rtd_outl(0xb809c29c,0x00000000);
rtd_outl(0xb809c2a0,0x00000000);
rtd_outl(0xb809c2a4,0x00000000);
rtd_outl(0xb809c2a8,0x00000000);
rtd_outl(0xb809c2ac,0x00000000);
rtd_outl(0xb809c2b0,0x00000000);
rtd_outl(0xb809c2b4,0x00000000);
rtd_outl(0xb809c2b8,0x00000000);
rtd_outl(0xb809c2bc,0x0010e1e0);
rtd_outl(0xb809c2c0,0x000870f0);
rtd_outl(0xb809c2c4,0x000870f0);
rtd_outl(0xb809c2c8,0x000870f0);
rtd_outl(0xb809c2cc,0x00000000);
rtd_outl(0xb809c2d0,0x00000000);
rtd_outl(0xb809c2d4,0x00000000);
rtd_outl(0xb809c2d8,0x00000000);
rtd_outl(0xb809c2dc,0x00000000);
rtd_outl(0xb809c2e0,0x00000000);
rtd_outl(0xb809c2e4,0x00000000);
rtd_outl(0xb809c2e8,0x00000000);
rtd_outl(0xb809c2ec,0x00000000);
rtd_outl(0xb809c2f0,0x00000000);
rtd_outl(0xb809c2f4,0x00000000);
rtd_outl(0xb809c2f8,0x0040e0ff);
rtd_outl(0xb809c30c,0x00000082);
rtd_outl(0xb809c310,0x00000000);
rtd_outl(0xb809c314,0x00000000);
rtd_outl(0xb809c318,0x00000000);
rtd_outl(0xb809c31c,0x00000000);
rtd_outl(0xb809c320,0x00000000);
rtd_outl(0xb809c324,0x00000000);
rtd_outl(0xb809c328,0x00000000);
rtd_outl(0xb809c32c,0x00000000);
rtd_outl(0xb809c330,0x00000000);
rtd_outl(0xb809c334,0x00000000);
rtd_outl(0xb809c338,0x00000000);
rtd_outl(0xb809c33c,0x00000000);
rtd_outl(0xb809c340,0x00000000);
rtd_outl(0xb809c344,0x00000000);
rtd_outl(0xb809c348,0x00000000);
rtd_outl(0xb809c34c,0x00000000);
rtd_outl(0xb809c350,0x11300000);
rtd_outl(0xb809c354,0x0f000000);
rtd_outl(0xb809c358,0x10e00000);
rtd_outl(0xb809c35c,0x1e000000);
rtd_outl(0xb809c360,0x10e00000);
rtd_outl(0xb809c364,0x1e000000);
rtd_outl(0xb809c368,0x10e00000);
rtd_outl(0xb809c36c,0x1e000000);
rtd_outl(0xb809c370,0x10e00000);
rtd_outl(0xb809c374,0x1e000000);
rtd_outl(0xb809c378,0x00000000);
rtd_outl(0xb809c37c,0x00000000);
rtd_outl(0xb809c380,0x00000000);
rtd_outl(0xb809c384,0x00000000);
rtd_outl(0xb809c388,0x00000000);
rtd_outl(0xb809c38c,0x00000000);
rtd_outl(0xb809c390,0x00000000);
rtd_outl(0xb809c398,0x00000000);
rtd_outl(0xb809c3a0,0x00000000);
rtd_outl(0xb809c3a4,0x00000000);
rtd_outl(0xb809c3b0,0x00020006);
rtd_outl(0xb809c3b4,0x000003b4);
rtd_outl(0xb809c3b8,0x00000000);
rtd_outl(0xb809c3bc,0x00000000);
rtd_outl(0xb809c3c0,0x00000000);
rtd_outl(0xb809c3c4,0x00000000);
rtd_outl(0xb809c3c8,0x00000190);
rtd_outl(0xb809c3cc,0x00000000);
rtd_outl(0xb809c3d0,0x00010cf0);
rtd_outl(0xb809c3d4,0x0007810e);
rtd_outl(0xb809c3d8,0x00000000);
rtd_outl(0xb809c3dc,0x00000000);
rtd_outl(0xb809c3e0,0x00000000);
rtd_outl(0xb809c3e4,0x00000000);
rtd_outl(0xb809c3e8,0x00000000);
rtd_outl(0xb809c3ec,0x00000000);
rtd_outl(0xb809c3f0,0x00000000);
rtd_outl(0xb809c3f4,0x00000000);
rtd_outl(0xb809c400,0x40043200);
rtd_outl(0xb809c404,0x404008ff);
rtd_outl(0xb809c408,0x00142024);
rtd_outl(0xb809c40c,0x00000004);
rtd_outl(0xb809c410,0x00402010);
rtd_outl(0xb809c414,0x00000600);
rtd_outl(0xb809c418,0x0003ff26);
rtd_outl(0xb809c41c,0x281d241c);
rtd_outl(0xb809c420,0x30303028);
rtd_outl(0xb809c424,0x80802928);
rtd_outl(0xb809c428,0x04006080);
rtd_outl(0xb809c42c,0x0020012c);
rtd_outl(0xb809c430,0x00000000);
rtd_outl(0xb809c434,0x0007017a);
rtd_outl(0xb809c438,0x00000083);
rtd_outl(0xb809c440,0x40043200);
rtd_outl(0xb809c444,0x404008ff);
rtd_outl(0xb809c448,0x00142134);
rtd_outl(0xb809c44c,0x00000004);
rtd_outl(0xb809c450,0x00402010);
rtd_outl(0xb809c454,0x00000601);
rtd_outl(0xb809c458,0x0003ff36);
rtd_outl(0xb809c45c,0x281d241c);
rtd_outl(0xb809c460,0x30303028);
rtd_outl(0xb809c464,0x80802928);
rtd_outl(0xb809c468,0x04008080);
rtd_outl(0xb809c46c,0x0000012c);
rtd_outl(0xb809c470,0x00000000);
rtd_outl(0xb809c474,0x0007017c);
rtd_outl(0xb809c478,0x00000083);
rtd_outl(0xb809c47c,0x00000080);
rtd_outl(0xb809c480,0x00800801);
rtd_outl(0xb809c484,0x00800a01);
rtd_outl(0xb809c488,0x08080040);
rtd_outl(0xb809c48c,0x04008020);
rtd_outl(0xb809c490,0x00000000);
rtd_outl(0xb809c494,0x00040000);
rtd_outl(0xb809c498,0x00000000);
rtd_outl(0xb809c49c,0x00000000);
rtd_outl(0xb809c4a0,0x00040000);
rtd_outl(0xb809c4a4,0x00000000);
rtd_outl(0xb809c4b0,0x30202221);
rtd_outl(0xb809c4b4,0x27263030);
rtd_outl(0xb809c4b8,0x00002928);
rtd_outl(0xb809c4bc,0x30202221);
rtd_outl(0xb809c4c0,0x27263030);
rtd_outl(0xb809c4c4,0x00002928);
rtd_outl(0xb809c4cc,0x00000000);
rtd_outl(0xb809c4d0,0x00000000);
rtd_outl(0xb809c4d4,0x00000000);
rtd_outl(0xb809c4d8,0x00000000);
rtd_outl(0xb809c4dc,0x00000000);
rtd_outl(0xb809c4e0,0x00000000);
rtd_outl(0xb809c4e4,0x00000000);
rtd_outl(0xb809c4f0,0x00003101);
rtd_outl(0xb809c4f4,0x00000000);
rtd_outl(0xb809c4f8,0x00000000);
rtd_outl(0xb809c4fc,0x00000000);
rtd_outl(0xb809c500,0x18280800);
rtd_outl(0xb809c504,0x3fdd6003);
rtd_outl(0xb809c508,0x8c602500);
rtd_outl(0xb809c50c,0x28a28ac5);
rtd_outl(0xb809c510,0x0000000a);
rtd_outl(0xb809c514,0x00000000);
rtd_outl(0xb809c518,0x32179400);
rtd_outl(0xb809c51c,0x04e09800);
rtd_outl(0xb809c520,0x00010005);
rtd_outl(0xb809c524,0x9c640800);
rtd_outl(0xb809c528,0x000000d3);
rtd_outl(0xb809c52c,0x00802810);
rtd_outl(0xb809c530,0x00050000);
rtd_outl(0xb809c534,0xfffefffc);
rtd_outl(0xb809c538,0x23b28400);
rtd_outl(0xb809c53c,0x07f833a0);
rtd_outl(0xb809c540,0x028001ff);
rtd_outl(0xb809c544,0x030c000f);
rtd_outl(0xb809c548,0x7f67f100);
rtd_outl(0xb809c54c,0x00367195);
rtd_outl(0xb809c550,0x1c000448);
rtd_outl(0xb809c554,0x0030004f);
rtd_outl(0xb809c558,0xdf984715);
rtd_outl(0xb809c55c,0x00a41a20);
rtd_outl(0xb809c560,0x07fbfbfe);
rtd_outl(0xb809c564,0x30c14000);
rtd_outl(0xb809c568,0x0001ffd1);
rtd_outl(0xb809c56c,0x003f4060);
rtd_outl(0xb809c570,0x3fc00007);
rtd_outl(0xb809c574,0x133ffe6e);
rtd_outl(0xb809c578,0x3ffffee3);
rtd_outl(0xb809c57c,0x006300d8);
rtd_outl(0xb809c580,0x00000000);
rtd_outl(0xb809c584,0x00c10000);
rtd_outl(0xb809c588,0x00d50174);
rtd_outl(0xb809c58c,0x0206016e);
rtd_outl(0xb809c590,0x00060006);
rtd_outl(0xb809c594,0x01730000);
rtd_outl(0xb809c598,0x00531fff);
rtd_outl(0xb809c59c,0x1fff1fff);
rtd_outl(0xb809c5a0,0x000000ae);
rtd_outl(0xb809c5c0,0x0000bf04);
rtd_outl(0xb809c5c4,0x00000000);
rtd_outl(0xb809c5c8,0x18040101);
rtd_outl(0xb809c5cc,0x41c00202);
rtd_outl(0xb809c5d0,0x00000000);
rtd_outl(0xb809c5d4,0x00000000);
rtd_outl(0xb809c5d8,0x00000000);
rtd_outl(0xb809c5dc,0x000c0000);
rtd_outl(0xb809c5e0,0x00000000);
rtd_outl(0xb809c5e4,0x00000000);
rtd_outl(0xb809c5e8,0x0000c000);
rtd_outl(0xb809c5ec,0x00000000);
rtd_outl(0xb809c5f0,0x00000000);
rtd_outl(0xb809c5f4,0x00000000);
rtd_outl(0xb809c5f8,0x00000000);
rtd_outl(0xb809c5fc,0x00000000);
rtd_outl(0xb809c600,0x001df800);
rtd_outl(0xb809c604,0x0110d800);
rtd_outl(0xb809c608,0x000005d2);
rtd_outl(0xb809c60c,0x00000000);
rtd_outl(0xb809c610,0x00000000);
rtd_outl(0xb809c614,0x000f021c);
rtd_outl(0xb809c618,0x0c3c2e60);
rtd_outl(0xb809c620,0x00000000);
rtd_outl(0xb809c624,0x00000000);
rtd_outl(0xb809c668,0x00000000);
rtd_outl(0xb809c66c,0x00000000);
rtd_outl(0xb809c670,0x00047e90);
rtd_outl(0xb809c700,0x00043d41);
rtd_outl(0xb809c704,0x140c0701);
rtd_outl(0xb809c708,0x00048c42);
rtd_outl(0xb809c70c,0x002d8c07);
rtd_outl(0xb809c710,0x0c040000);
rtd_outl(0xb809c714,0x00000010);
rtd_outl(0xb809c718,0x0017ec03);
rtd_outl(0xb809c71c,0x07810ef0);
rtd_outl(0xb809c720,0x077c010e);
rtd_outl(0xb809c724,0x00021a00);
rtd_outl(0xb809c728,0x043401df);
rtd_outl(0xb809c72c,0x0461a094);
rtd_outl(0xb809c730,0x18112222);
rtd_outl(0xb809c734,0x00690101);
rtd_outl(0xb809c738,0x00f00407);
rtd_outl(0xb809c73c,0x54321234);
rtd_outl(0xb809c740,0x00206666);
rtd_outl(0xb809c744,0x1ff0c020);
rtd_outl(0xb809c748,0x0007fdff);
rtd_outl(0xb809c74c,0x490e7f40);
rtd_outl(0xb809c750,0x09000416);
rtd_outl(0xb809c754,0x10081200);
rtd_outl(0xb809c758,0x09201000);
rtd_outl(0xb809c75c,0x00010080);
rtd_outl(0xb809c760,0x60438e7f);
rtd_outl(0xb809c764,0x18202080);
rtd_outl(0xb809c768,0x30303030);
rtd_outl(0xb809c76c,0x60608030);
rtd_outl(0xb809c770,0x60606060);
rtd_outl(0xb809c774,0x60806060);
rtd_outl(0xb809c778,0x60606060);
rtd_outl(0xb809c77c,0x80606060);
rtd_outl(0xb809c780,0x80808080);
rtd_outl(0xb809c784,0x21cfe040);
rtd_outl(0xb809c788,0x00000416);
rtd_outl(0xb809c78c,0x00000000);
rtd_outl(0xb809c790,0x00000000);
rtd_outl(0xb809c794,0x00000000);
rtd_outl(0xb809c798,0x00400000);
rtd_outl(0xb809c79c,0x20208060);
rtd_outl(0xb809c7a0,0x20202020);
rtd_outl(0xb809c7a4,0x30802020);
rtd_outl(0xb809c7a8,0x30303030);
rtd_outl(0xb809c7ac,0x80303030);
rtd_outl(0xb809c7b0,0x30303030);
rtd_outl(0xb809c7b4,0x30303030);
rtd_outl(0xb809c7b8,0x80808080);
rtd_outl(0xb809c7bc,0x00ffff80);
rtd_outl(0xb809c7c0,0x00080402);
rtd_outl(0xb809c7c4,0x00011421);
rtd_outl(0xb809c7c8,0x00002800);
rtd_outl(0xb809c7cc,0x00000000);
rtd_outl(0xb809c7d0,0x00000000);
rtd_outl(0xb809c7d4,0xefc00a00);
rtd_outl(0xb809c7d8,0xf3e86c00);
rtd_outl(0xb809c7dc,0x7ce88971);
rtd_outl(0xb809c7e0,0x04002840);
rtd_outl(0xb809c7e4,0x0001fa40);
rtd_outl(0xb809c7e8,0x0001fa40);
rtd_outl(0xb809c7ec,0x007e9027);
rtd_outl(0xb809c7f0,0x007e9028);
rtd_outl(0xb809c7f4,0x00fa4028);
rtd_outl(0xb809c800,0x1e280041);
rtd_outl(0xb809c804,0x00100041);
rtd_outl(0xb809c808,0xcf851c0c);
rtd_outl(0xb809c80c,0x20820716);
rtd_outl(0xb809c810,0x00000608);
rtd_outl(0xb809c814,0x03700000);
rtd_outl(0xb809c818,0x10f003eb);
rtd_outl(0xb809c81c,0x00027755);
rtd_outl(0xb809c820,0x0000a029);
rtd_outl(0xb809c824,0x82592900);
rtd_outl(0xb809c828,0x07920fa6);
rtd_outl(0xb809c82c,0x05f489c3);
rtd_outl(0xb809c830,0xffeaffde);
rtd_outl(0xb809c834,0xff52ff82);
rtd_outl(0xb809c838,0x20a55402);
rtd_outl(0xb809c83c,0x07f40039);
rtd_outl(0xb809c840,0x00000000);
rtd_outl(0xb809c844,0x503e71f3);
rtd_outl(0xb809c848,0x00000008);
rtd_outl(0xb809c84c,0x00000000);
rtd_outl(0xb809c850,0x00845200);
rtd_outl(0xb809c854,0x002012c6);
rtd_outl(0xb809c860,0x0140a005);
rtd_outl(0xb809c864,0x00000000);
rtd_outl(0xb809c868,0x02003c00);
rtd_outl(0xb809c86c,0x00000208);
rtd_outl(0xb809c870,0x003ff7f9);
rtd_outl(0xb809c874,0x43bc0000);
rtd_outl(0xb809c878,0x00002c00);
rtd_outl(0xb809c87c,0x02010082);
rtd_outl(0xb809c880,0x00000040);
rtd_outl(0xb809c884,0x034c3fc0);
rtd_outl(0xb809c888,0x161001d1);
rtd_outl(0xb809c88c,0x0a8133ff);
rtd_outl(0xb809c890,0x05500000);
rtd_outl(0xb809c894,0x00000000);
rtd_outl(0xb809c898,0x00000000);
rtd_outl(0xb809c89c,0x80000000);
rtd_outl(0xb809c8a0,0x0010ff00);
rtd_outl(0xb809c8a4,0x00008100);
rtd_outl(0xb809c8a8,0x00004008);
rtd_outl(0xb809c8ac,0x06100100);
rtd_outl(0xb809c8b0,0x00000004);
rtd_outl(0xb809c8b4,0x84024008);
rtd_outl(0xb809c8b8,0x00000008);
rtd_outl(0xb809c8bc,0x00000000);
rtd_outl(0xb809c8c0,0x08084000);
rtd_outl(0xb809c8c4,0x20040030);
rtd_outl(0xb809c8c8,0x00000000);
rtd_outl(0xb809c8cc,0x08000000);
rtd_outl(0xb809c8d0,0x00301010);
rtd_outl(0xb809c8d4,0x01018010);
rtd_outl(0xb809c8d8,0x04104010);
rtd_outl(0xb809c8dc,0x01040101);
rtd_outl(0xb809c8e0,0x00000000);
rtd_outl(0xb809c8e4,0x00000000);
rtd_outl(0xb809c8e8,0x00000000);
rtd_outl(0xb809c8ec,0x00000000);
rtd_outl(0xb809c8f0,0x00000000);
rtd_outl(0xb809c8f4,0x00000000);
rtd_outl(0xb809c8f8,0x04000000);
//notfound//rtd_outl(0xb809c8fc,0x00000000);
rtd_outl(0xb809c900,0x00010ef0);
rtd_outl(0xb809c904,0x00000000);
rtd_outl(0xb809c908,0x00f00800);
rtd_outl(0xb809c90c,0x00000000);
rtd_outl(0xb809c910,0x00000000);
rtd_outl(0xb809c914,0x00000000);
rtd_outl(0xb809c918,0x00000000);
rtd_outl(0xb809c91c,0x00000000);
rtd_outl(0xb809c920,0x00000000);
rtd_outl(0xb809c934,0x00000000);
rtd_outl(0xb809c938,0x00000002);
rtd_outl(0xb809c93c,0x00000000);
rtd_outl(0xb809c940,0x00007e88);
rtd_outl(0xb809c944,0x00007b95);
rtd_outl(0xb809c948,0x00000000);
rtd_outl(0xb809c94c,0x00000000);
rtd_outl(0xb809c950,0x00007e87);
rtd_outl(0xb809c954,0x00007e87);
rtd_outl(0xb809c958,0x00000000);
rtd_outl(0xb809c95c,0x00000000);
rtd_outl(0xb809c960,0x00000009);
rtd_outl(0xb809c964,0x0000000e);
rtd_outl(0xb809c968,0x03b66b14);
rtd_outl(0xb809c96c,0x00001aaf);
rtd_outl(0xb809c970,0x00007e90);
rtd_outl(0xb809c974,0x00007e90);
rtd_outl(0xb809c978,0x00000000);
rtd_outl(0xb809c97c,0x00000000);
rtd_outl(0xb809c980,0x00000000);
rtd_outl(0xb809c984,0x000000f0);
rtd_outl(0xb809c988,0x00008cef);
rtd_outl(0xb809c98c,0x00000000);
rtd_outl(0xb809c990,0x00007e90);
rtd_outl(0xb809c994,0x00007e90);
rtd_outl(0xb809c998,0x00007e90);
rtd_outl(0xb809c99c,0x0000000b);
rtd_outl(0xb809c9a0,0x0000000b);
rtd_outl(0xb809c9a4,0x0000000b);
rtd_outl(0xb809c9a8,0x00000000);
rtd_outl(0xb809c9ac,0x00000000);
rtd_outl(0xb809c9b0,0x00000000);
rtd_outl(0xb809c9b4,0x00000000);
rtd_outl(0xb809c9b8,0x00000000);
rtd_outl(0xb809c9bc,0x00000000);
rtd_outl(0xb809c9c0,0x00000000);
rtd_outl(0xb809c9c4,0x00000000);
rtd_outl(0xb809c9c8,0x00000000);
rtd_outl(0xb809c9cc,0x00000000);
rtd_outl(0xb809c9d0,0x00000000);
rtd_outl(0xb809c9d4,0x00000022);
rtd_outl(0xb809c9d8,0x000d10b5);
rtd_outl(0xb809c9dc,0x0000002c);
rtd_outl(0xb809c9e0,0x0000000c);
rtd_outl(0xb809c9e4,0x00340a7e);
rtd_outl(0xb809c9e8,0x00341329);
rtd_outl(0xb809c9ec,0x00000000);
rtd_outl(0xb809c9f0,0x00004003);
rtd_outl(0xb809c9f4,0x00000000);
rtd_outl(0xb809c9f8,0x00000000);
rtd_outl(0xb809c9fc,0x00000000);
rtd_outl(0xb809ca00,0x00000000);
rtd_outl(0xb809ca04,0x00000000);
rtd_outl(0xb809ca08,0x00000000);
rtd_outl(0xb809ca0c,0x00000000);
rtd_outl(0xb809ca10,0x00000000);
rtd_outl(0xb809ca14,0x00000000);
rtd_outl(0xb809ca18,0x00000000);
rtd_outl(0xb809ca1c,0x00000000);
rtd_outl(0xb809ca20,0x00000000);
rtd_outl(0xb809ca24,0x00000000);
rtd_outl(0xb809ca28,0x00000000);
rtd_outl(0xb809ca2c,0x00000000);
rtd_outl(0xb809ca30,0x00000000);
rtd_outl(0xb809ca34,0x00000000);
rtd_outl(0xb809ca38,0x00000000);
rtd_outl(0xb809ca3c,0x00000000);
rtd_outl(0xb809ca40,0x00000000);
rtd_outl(0xb809ca44,0x00000000);
rtd_outl(0xb809ca48,0x00000000);
rtd_outl(0xb809ca4c,0x00000000);
rtd_outl(0xb809ca50,0x00000000);
rtd_outl(0xb809ca54,0x00000000);
rtd_outl(0xb809ca58,0x00000000);
rtd_outl(0xb809ca5c,0x00000000);
rtd_outl(0xb809ca60,0x00000011);
rtd_outl(0xb809ca64,0x00000887);
rtd_outl(0xb809ca68,0x00000047);
rtd_outl(0xb809ca6c,0x00000000);
rtd_outl(0xb809ca70,0x00000000);
rtd_outl(0xb809ca74,0x00000000);
rtd_outl(0xb809ca78,0x00000000);
rtd_outl(0xb809ca7c,0x00000000);
rtd_outl(0xb809ca80,0x00004de5);
rtd_outl(0xb809ca84,0x0000b9c9);
rtd_outl(0xb809ca88,0x000081d4);
rtd_outl(0xb809ca8c,0x00006924);
rtd_outl(0xb809ca90,0x00005662);
rtd_outl(0xb809ca94,0x00004c2c);
rtd_outl(0xb809ca98,0x000049ec);
rtd_outl(0xb809ca9c,0x000049d0);
rtd_outl(0xb809caa0,0x000051c5);
rtd_outl(0xb809caa4,0x00004df1);
rtd_outl(0xb809caa8,0x00004b6e);
rtd_outl(0xb809caac,0x0000f080);
rtd_outl(0xb809cab0,0x00007301);
rtd_outl(0xb809cab4,0x00004ff0);
rtd_outl(0xb809cab8,0x00004dcc);
rtd_outl(0xb809cabc,0x000051d5);
rtd_outl(0xb809cac0,0x00005053);
rtd_outl(0xb809cac4,0x00004f8b);
rtd_outl(0xb809cac8,0x00004d1d);
rtd_outl(0xb809cacc,0x0000ef8c);
rtd_outl(0xb809cad0,0x000075f6);
rtd_outl(0xb809cad4,0x00004da5);
rtd_outl(0xb809cad8,0x00004e7f);
rtd_outl(0xb809cadc,0x00005179);
rtd_outl(0xb809cae0,0x00005813);
rtd_outl(0xb809cae4,0x000057de);
rtd_outl(0xb809cae8,0x00005411);
rtd_outl(0xb809caec,0x000072f0);
rtd_outl(0xb809caf0,0x000061cc);
rtd_outl(0xb809caf4,0x0000e48b);
rtd_outl(0xb809caf8,0x00005608);
rtd_outl(0xb809cafc,0x00005624);
rtd_outl(0xb809cb00,0x00000000);
rtd_outl(0xb809cb04,0x00000000);
rtd_outl(0xb809cb08,0x00000000);
rtd_outl(0xb809cb0c,0x00000000);
rtd_outl(0xb809cb10,0x00000000);
rtd_outl(0xb809cb14,0x00000000);
rtd_outl(0xb809cb18,0x00000000);
rtd_outl(0xb809cb1c,0x00000000);
rtd_outl(0xb809cb20,0x00000000);
rtd_outl(0xb809cb24,0x00000000);
rtd_outl(0xb809cb28,0x00000000);
rtd_outl(0xb809cb2c,0x00000000);
rtd_outl(0xb809cb30,0x00000000);
rtd_outl(0xb809cb34,0x00000000);
rtd_outl(0xb809cb38,0x00000000);
rtd_outl(0xb809cb3c,0x00000000);
rtd_outl(0xb809cb40,0x00000000);
rtd_outl(0xb809cb44,0x00000000);
rtd_outl(0xb809cb48,0x00000000);
rtd_outl(0xb809cb4c,0x00000000);
rtd_outl(0xb809cb50,0x00000000);
rtd_outl(0xb809cb54,0x00000000);
rtd_outl(0xb809cb58,0x00000000);
rtd_outl(0xb809cb5c,0x00000000);
rtd_outl(0xb809cb60,0x00000014);
rtd_outl(0xb809cb64,0x00000000);
rtd_outl(0xb809cb68,0x0000006e);
rtd_outl(0xb809cb6c,0x0000013a);
rtd_outl(0xb809cb70,0x00000018);
rtd_outl(0xb809cb74,0x00000000);
rtd_outl(0xb809cb78,0x00000000);
rtd_outl(0xb809cb7c,0x0000000e);
rtd_outl(0xb809cb80,0x00000000);
rtd_outl(0xb809cb84,0x00000000);
rtd_outl(0xb809cb88,0x00000000);
rtd_outl(0xb809cb8c,0x00000000);
rtd_outl(0xb809cb90,0x00000000);
rtd_outl(0xb809cb94,0x00000000);
rtd_outl(0xb809cb98,0x00000000);
rtd_outl(0xb809cb9c,0x00000000);
rtd_outl(0xb809cba0,0x00000000);
rtd_outl(0xb809cba4,0x00000000);
rtd_outl(0xb809cba8,0x00000000);
rtd_outl(0xb809cbac,0x00000000);
rtd_outl(0xb809cbb0,0x00000000);
rtd_outl(0xb809cbb4,0x00000000);
rtd_outl(0xb809cbb8,0x00000000);
rtd_outl(0xb809cbbc,0x00000000);
rtd_outl(0xb809cbc0,0x00000000);
rtd_outl(0xb809cbc4,0x00000000);
rtd_outl(0xb809cbc8,0x00000000);
rtd_outl(0xb809cbcc,0x00000000);
rtd_outl(0xb809cbd0,0x00000000);
rtd_outl(0xb809cbd4,0x00000000);
rtd_outl(0xb809cbd8,0x00000000);
rtd_outl(0xb809cbdc,0x00000000);
rtd_outl(0xb809cbe0,0x00000000);
rtd_outl(0xb809cbe4,0x00000000);
rtd_outl(0xb809cbe8,0x00000002);
rtd_outl(0xb809cbec,0x00000027);
rtd_outl(0xb809cbf0,0x0000005f);
rtd_outl(0xb809cbf4,0x00000004);
rtd_outl(0xb809cbf8,0x00000000);
rtd_outl(0xb809cbfc,0x00000000);
rtd_outl(0xb809cc00,0x000194a6);
rtd_outl(0xb809cc04,0x0001f2d1);
rtd_outl(0xb809cc08,0x00019661);
rtd_outl(0xb809cc0c,0x0001b5f6);
rtd_outl(0xb809cc10,0x00019424);
rtd_outl(0xb809cc14,0x00018f1b);
rtd_outl(0xb809cc18,0x00018d5b);
rtd_outl(0xb809cc1c,0x00018c7e);
rtd_outl(0xb809cc20,0x000193c3);
rtd_outl(0xb809cc24,0x00019388);
rtd_outl(0xb809cc28,0x00019222);
rtd_outl(0xb809cc2c,0x00022f4d);
rtd_outl(0xb809cc30,0x000193da);
rtd_outl(0xb809cc34,0x00018e78);
rtd_outl(0xb809cc38,0x00018d7b);
rtd_outl(0xb809cc3c,0x00018c27);
rtd_outl(0xb809cc40,0x000192e6);
rtd_outl(0xb809cc44,0x00019287);
rtd_outl(0xb809cc48,0x00019105);
rtd_outl(0xb809cc4c,0x000229bc);
rtd_outl(0xb809cc50,0x000197fa);
rtd_outl(0xb809cc54,0x00018dc0);
rtd_outl(0xb809cc58,0x00018cae);
rtd_outl(0xb809cc5c,0x00018bf6);
rtd_outl(0xb809cc60,0x00018406);
rtd_outl(0xb809cc64,0x0001838d);
rtd_outl(0xb809cc68,0x000182d5);
rtd_outl(0xb809cc6c,0x00019246);
rtd_outl(0xb809cc70,0x00017f33);
rtd_outl(0xb809cc74,0x0002211d);
rtd_outl(0xb809cc78,0x00017d79);
rtd_outl(0xb809cc7c,0x00017ca8);
rtd_outl(0xb809cc80,0x000194a6);
rtd_outl(0xb809cc84,0x0001f2d1);
rtd_outl(0xb809cc88,0x00019661);
rtd_outl(0xb809cc8c,0x0001b5f6);
rtd_outl(0xb809cc90,0x00019424);
rtd_outl(0xb809cc94,0x00018f1b);
rtd_outl(0xb809cc98,0x00018d5b);
rtd_outl(0xb809cc9c,0x00018c7e);
rtd_outl(0xb809cca0,0x000193c3);
rtd_outl(0xb809cca4,0x00019388);
rtd_outl(0xb809cca8,0x00019222);
rtd_outl(0xb809ccac,0x00022f4d);
rtd_outl(0xb809ccb0,0x000193da);
rtd_outl(0xb809ccb4,0x00018e78);
rtd_outl(0xb809ccb8,0x00018d7b);
rtd_outl(0xb809ccbc,0x00018c27);
rtd_outl(0xb809ccc0,0x000192e6);
rtd_outl(0xb809ccc4,0x00019287);
rtd_outl(0xb809ccc8,0x00019105);
rtd_outl(0xb809cccc,0x000229bc);
rtd_outl(0xb809ccd0,0x000197fa);
rtd_outl(0xb809ccd4,0x00018dc0);
rtd_outl(0xb809ccd8,0x00018cae);
rtd_outl(0xb809ccdc,0x00018bf6);
rtd_outl(0xb809cce0,0x00018406);
rtd_outl(0xb809cce4,0x0001838d);
rtd_outl(0xb809cce8,0x00018214);
rtd_outl(0xb809ccec,0x0001930a);
rtd_outl(0xb809ccf0,0x00017f33);
rtd_outl(0xb809ccf4,0x0002211d);
rtd_outl(0xb809ccf8,0x00017d79);
rtd_outl(0xb809ccfc,0x00017ca8);
rtd_outl(0xb809cd00,0x00000000);
rtd_outl(0xb809cd04,0x00000000);
rtd_outl(0xb809cd08,0x00000000);
rtd_outl(0xb809cd0c,0x00000000);
rtd_outl(0xb809cd10,0xf0430b8b);
rtd_outl(0xb809cd14,0x0a1de10e);
rtd_outl(0xb809cd18,0x78000000);
rtd_outl(0xb809cd1c,0x10000000);
rtd_outl(0xb809cd20,0x10000000);
rtd_outl(0xb809cd24,0x00000000);
rtd_outl(0xb809cd28,0x0ff3fe20);
rtd_outl(0xb809cd2c,0x00008400);
rtd_outl(0xb809cd30,0x00001c00);
rtd_outl(0xb809cd34,0x00be1de0);
rtd_outl(0xb809cd38,0x23320204);
rtd_outl(0xb809cd3c,0x00200002);
rtd_outl(0xb809cd40,0x02008020);
rtd_outl(0xb809cd44,0x00102400);
rtd_outl(0xb809cd48,0x000ffc00);
rtd_outl(0xb809cd4c,0x008da492);
rtd_outl(0xb809cd50,0x00020052);
rtd_outl(0xb809cd54,0x02010080);
rtd_outl(0xb809cd58,0x00000000);
rtd_outl(0xb809cd5c,0x10102024);
rtd_outl(0xb809cd60,0x00000036);
rtd_outl(0xb809cd64,0x0080f8ff);
rtd_outl(0xb809cd68,0x00000205);
rtd_outl(0xb809cd6c,0x3f8003ff);
rtd_outl(0xb809cd70,0x20020008);
rtd_outl(0xb809cd74,0x00000000);
rtd_outl(0xb809cd78,0x00000402);
rtd_outl(0xb809cd7c,0x480da492);
rtd_outl(0xb809cd80,0x00000006);
rtd_outl(0xb809cd84,0x03008040);
rtd_outl(0xb809cd88,0x000000c0);
rtd_outl(0xb809cd8c,0x44466081);
rtd_outl(0xb809cd90,0x3ff00000);
rtd_outl(0xb809cd94,0x00000004);
rtd_outl(0xb809cd98,0x00000000);
rtd_outl(0xb809cd9c,0x00000000);
rtd_outl(0xb809cda0,0x00000000);
rtd_outl(0xb809cda4,0x00000000);
rtd_outl(0xb809cda8,0x1ff9c210);
rtd_outl(0xb809cdac,0x0000000d);
rtd_outl(0xb809cdb0,0x00508020);
rtd_outl(0xb809cdb4,0x09d10020);
rtd_outl(0xb809cdb8,0x061e10a3);
rtd_outl(0xb809cdbc,0x0021e100);
rtd_outl(0xb809cdc0,0x88222041);
rtd_outl(0xb809cdc4,0x2c005010);
rtd_outl(0xb809cdc8,0x00020527);
rtd_outl(0xb809cdcc,0x00233030);
rtd_outl(0xb809cdd0,0x00000101);
rtd_outl(0xb809cdd4,0x0080003f);
rtd_outl(0xb809cdd8,0x00000888);
rtd_outl(0xb809cddc,0x000ffc00);
rtd_outl(0xb809cde0,0x0003be00);
rtd_outl(0xb809cde4,0x00021a00);
rtd_outl(0xb809cde8,0x00000082);
rtd_outl(0xb809cdec,0x00000000);
rtd_outl(0xb809cdf0,0x00000000);
rtd_outl(0xb809cdf4,0x20000000);
rtd_outl(0xb809cdf8,0x00000000);
rtd_outl(0xb809cdfc,0x00f10080);
rtd_outl(0xb809ce08,0x00000000);
rtd_outl(0xb809ce10,0x00000000);
rtd_outl(0xb809ce14,0x0fff0fff);
rtd_outl(0xb809ce18,0x0fff0fff);
rtd_outl(0xb809ce1c,0x0fff0fff);
rtd_outl(0xb809ce20,0x0fff0fff);
rtd_outl(0xb809ce24,0x0fff0fff);
rtd_outl(0xb809ce28,0x0fff0fff);
rtd_outl(0xb809ce2c,0x00000000);
rtd_outl(0xb809ce30,0x3d008679);
rtd_outl(0xb809ce34,0x00000043);
rtd_outl(0xb809ce38,0x00000000);
rtd_outl(0xb809ce3c,0x00000000);
rtd_outl(0xb809ce40,0x00000000);
rtd_outl(0xb809ce44,0x00000000);
rtd_outl(0xb809ce48,0x00000000);
rtd_outl(0xb809ce4c,0x00000000);
rtd_outl(0xb809ce50,0x00000000);
rtd_outl(0xb809ce54,0x00000000);
rtd_outl(0xb809ce58,0x00000000);
rtd_outl(0xb809ce5c,0x00000000);
rtd_outl(0xb809ce74,0x00060906);
rtd_outl(0xb809ce78,0x000015ff);
rtd_outl(0xb809ce7c,0x00060906);
rtd_outl(0xb809ce80,0x000015ff);
rtd_outl(0xb809ce84,0x00005090);
rtd_outl(0xb809ce88,0x00064104);
rtd_outl(0xb809ce8c,0x00000000);
rtd_outl(0xb809ce90,0x00007444);
rtd_outl(0xb809ce94,0x84741600);
rtd_outl(0xb809ce98,0x90774000);
rtd_outl(0xb809ce9c,0x0001eec4);
rtd_outl(0xb809cea0,0x00050010);
rtd_outl(0xb809cea4,0x04050006);
rtd_outl(0xb809cea8,0x00001e7e);
rtd_outl(0xb809ceac,0x00010084);
rtd_outl(0xb809ceb0,0x04030080);
rtd_outl(0xb809ceb4,0x00000080);
rtd_outl(0xb809ceb8,0x00202000);
rtd_outl(0xb809cebc,0x0100c020);
rtd_outl(0xb809cec0,0x00000100);
rtd_outl(0xb809cec4,0x40808000);
rtd_outl(0xb809cec8,0x00052020);
rtd_outl(0xb809cecc,0x04028060);
rtd_outl(0xb809ced0,0x000000c0);
rtd_outl(0xb809ced4,0x00402000);
rtd_outl(0xb809ced8,0x0100a010);
rtd_outl(0xb809cedc,0x00000100);
rtd_outl(0xb809cee0,0x20808000);
rtd_outl(0xb809cee4,0x00062020);
rtd_outl(0xb809cee8,0x00000000);
rtd_outl(0xb809ceec,0x00000000);
rtd_outl(0xb809cef0,0x00000000);
rtd_outl(0xb809cef4,0x00000000);
rtd_outl(0xb809d000,0xc2e4019f);
rtd_outl(0xb809d004,0x0807e002);
//rtd_outl(0xb809d008,0x00000000);//skyredd, 0x00000040  // 0x00000801
rtd_outl(0xb809d00c,0x00000000);
rtd_outl(0xb809d010,0x08ca044c);
rtd_outl(0xb809d014,0x087003c0);
rtd_outl(0xb809d018,0x08700000);
rtd_outl(0xb809d01c,0x00000050);
rtd_outl(0xb809d020,0x00000000);
rtd_outl(0xb809d024,0x00000000);
rtd_outl(0xb809d028,0x003c0780);
rtd_outl(0xb809d04c,0x00000000);
rtd_outl(0xb809d050,0x00000000);
rtd_outl(0xb809d060,0x00000000);
rtd_outl(0xb809d064,0x00000000);
rtd_outl(0xb809d068,0x00000000);
rtd_outl(0xb809d06c,0x00000000);
rtd_outl(0xb809d080,0x00000000);
rtd_outl(0xb809d084,0x00000000);
rtd_outl(0xb809d088,0x00000000);
rtd_outl(0xb809d08c,0x00000000);
rtd_outl(0xb809d090,0x00000000);
rtd_outl(0xb809d094,0x0f000000);
rtd_outl(0xb809d0a0,0x1000ff00);
rtd_outl(0xb809d0a4,0x60010000);
rtd_outl(0xb809d0a8,0x00c8cc8c);
rtd_outl(0xb809d0ac,0x20008080);
rtd_outl(0xb809d0b0,0x0400826a);
rtd_outl(0xb809d0b4,0x0400843a);
rtd_outl(0xb809d0b8,0x000085bc);
rtd_outl(0xb809d0bc,0x00c8cc8c);
rtd_outl(0xb809d0e0,0x00000000);
rtd_outl(0xb809d0e4,0x00001000);
rtd_outl(0xb809d0e8,0x0000044b);
rtd_outl(0xb809d0ec,0x00000000);
rtd_outl(0xb809d0f0,0x05000000);
rtd_outl(0xb809d0f4,0x00000000);
rtd_outl(0xb809d0f8,0x00000000);
rtd_outl(0xb809d0fc,0x00000000);
rtd_outl(0xb809d100,0x8c8ca898);
rtd_outl(0xb809d104,0x108703c0);
rtd_outl(0xb809d108,0x7f02302a);
rtd_outl(0xb809d10c,0x004381e0);
rtd_outl(0xb809d110,0x0000801f);
rtd_outl(0xb809d114,0x32870780);
rtd_outl(0xb809d118,0x00023046);
rtd_outl(0xb809d11c,0x04004010);//vtrig240
rtd_outl(0xb809d120,0x07604037);//vtrig240
rtd_outl(0xb809d124,0x43591a95);
rtd_outl(0xb809d128,0x28348838);
rtd_outl(0xb809d12c,0x24242424);
rtd_outl(0xb809d130,0x24242424);
rtd_outl(0xb809d134,0x31323224);
rtd_outl(0xb809d138,0x16706c25);
rtd_outl(0xb809d13c,0x021ca00a);
rtd_outl(0xb809d140,0x15110888);
rtd_outl(0xb809d144,0x00380438);
rtd_outl(0xb809d148,0x8715521b);
rtd_outl(0xb809d160,0x00010103);
rtd_outl(0xb809d164,0x008989c4);
rtd_outl(0xb809d168,0x00008010);
rtd_outl(0xb809d16c,0x80808030);
rtd_outl(0xb809d170,0x10103060);
rtd_outl(0xb809d174,0x44444444);
rtd_outl(0xb809d178,0x30364044);
rtd_outl(0xb809d17c,0x46463228);
rtd_outl(0xb809d180,0x00004646);
rtd_outl(0xb809d184,0x00000000);
rtd_outl(0xb809d188,0x435aa002);
rtd_outl(0xb809d18c,0x00010888);
rtd_outl(0xb809d190,0x00000000);
rtd_outl(0xb809d194,0x40603020);
rtd_outl(0xb809d1f0,0x00004657);
rtd_outl(0xb809d1f4,0x02358000);
rtd_outl(0xb809d1f8,0x000008ca);
rtd_outl(0xb809d400,0x00004003);
rtd_outl(0xb809d404,0x00054000);
rtd_outl(0xb809d408,0x01832000);
rtd_outl(0xb809d40c,0x09040000);
rtd_outl(0xb809d410,0x8bff6800);
rtd_outl(0xb809d414,0xa001a001);
rtd_outl(0xb809d418,0x01a001be);
rtd_outl(0xb809d41c,0xaeaeaea0);
rtd_outl(0xb809d420,0x000001ae);
rtd_outl(0xb809d424,0x000001aa);
rtd_outl(0xb809d428,0x00000000);
rtd_outl(0xb809d42c,0x00000000);
rtd_outl(0xb809d430,0x00000000);
rtd_outl(0xb809d434,0x00000000);
rtd_outl(0xb809d438,0x00000000);
rtd_outl(0xb809d43c,0x00000000);
rtd_outl(0xb809d440,0x00000000);
rtd_outl(0xb809d444,0x00000000);
rtd_outl(0xb809d448,0x00000000);
rtd_outl(0xb809d44c,0x00000000);
rtd_outl(0xb809d450,0x00000000);
rtd_outl(0xb809d454,0x0000ff00);
rtd_outl(0xb809d458,0x00070000);
rtd_outl(0xb809d45c,0x00077770);
rtd_outl(0xb809d460,0x00000005);
rtd_outl(0xb809d464,0x00000000);
rtd_outl(0xb809d468,0x00000000);
rtd_outl(0xb809d46c,0x00000000);
rtd_outl(0xb809d470,0x00000000);
rtd_outl(0xb809d474,0x00000000);
rtd_outl(0xb809d478,0x1e003000);
rtd_outl(0xb809d494,0x00000000);
rtd_outl(0xb809d498,0x00000000);
rtd_outl(0xb809d49c,0x00800001);
rtd_outl(0xb809d4a0,0x80424001);
rtd_outl(0xb809d4a4,0x7c02a005);
rtd_outl(0xb809d4a8,0x808ad001);
rtd_outl(0xb809d4ac,0x600ac008);
rtd_outl(0xb809d4b0,0x80d06001);
rtd_outl(0xb809d4b4,0x6412e011);
rtd_outl(0xb809d4b8,0x8118f001);
rtd_outl(0xb809d4bc,0x681a001a);
rtd_outl(0xb809d4c0,0x81610001);
rtd_outl(0xb809d4c4,0x6c222023);
rtd_outl(0xb809d4c8,0x81a99001);
rtd_outl(0xb809d4cc,0x702a402c);
rtd_outl(0xb809d4d0,0x81f22001);
rtd_outl(0xb809d4d4,0x74326005);
rtd_outl(0xb809d4d8,0x6032b041);
rtd_outl(0xb809d4dc,0x70329811);
rtd_outl(0xb809d4e0,0xa082c001);
rtd_outl(0xb809d4e4,0x5802a81a);
rtd_outl(0xb809d4e8,0x60805041);
rtd_outl(0xb809d4ec,0x7802d81a);
rtd_outl(0xb809d4f0,0xa1106001);
rtd_outl(0xb809d4f4,0x4012e823);
rtd_outl(0xb809d4f8,0x6110f041);
rtd_outl(0xb809d4fc,0x60121823);
rtd_outl(0xb8099400,0x00000004);
rtd_outl(0xb8099404,0x08700f00);
rtd_outl(0xb8099410,0x00097878);
rtd_outl(0xb8099480,0x000a7878);
rtd_outl(0xb8099454,0x00002580);
rtd_outl(0xb80994c4,0x00002940);
//memory_addr//rtd_outl(0xb8099414,0x006ffc00);
//memory_addr//rtd_outl(0xb8099418,0x010e3000);
//memory_addr//rtd_outl(0xb809941c,0x01ac6400);
//memory_addr//rtd_outl(0xb8099420,0x024a9800);
//memory_addr//rtd_outl(0xb8099424,0x02e8cc00);
//memory_addr//rtd_outl(0xb8099428,0x03870000);
//memory_addr//rtd_outl(0xb809942c,0x03870000);
//memory_addr//rtd_outl(0xb8099430,0x03870000);
//memory_addr//rtd_outl(0xb8099434,0x010e3000);
//memory_addr//rtd_outl(0xb8099438,0x01ac6400);
//memory_addr//rtd_outl(0xb809943c,0x024a9800);
//memory_addr//rtd_outl(0xb8099440,0x02e8cc00);
//memory_addr//rtd_outl(0xb8099444,0x03870000);
//memory_addr//rtd_outl(0xb8099448,0x04253400);
//memory_addr//rtd_outl(0xb809944c,0x04253400);
//memory_addr//rtd_outl(0xb8099450,0x04253400);
//memory_addr//rtd_outl(0xb8099484,0x04253400);
//memory_addr//rtd_outl(0xb8099488,0x04d33a00);
//memory_addr//rtd_outl(0xb809948c,0x05814000);
//memory_addr//rtd_outl(0xb8099490,0x062f4600);
//memory_addr//rtd_outl(0xb8099494,0x06dd4c00);
//memory_addr//rtd_outl(0xb8099498,0x078b5200);
//memory_addr//rtd_outl(0xb809949c,0x078b5200);
//memory_addr//rtd_outl(0xb80994a0,0x078b5200);
//memory_addr//rtd_outl(0xb80994a4,0x04d33a00);
//memory_addr//rtd_outl(0xb80994a8,0x05814000);
//memory_addr//rtd_outl(0xb80994ac,0x062f4600);
//memory_addr//rtd_outl(0xb80994b0,0x06dd4c00);
//memory_addr//rtd_outl(0xb80994b4,0x078b5200);
//memory_addr//rtd_outl(0xb80994b8,0x08395800);
//memory_addr//rtd_outl(0xb80994bc,0x08395800);
//memory_addr//rtd_outl(0xb80994c0,0x08395800);
rtd_outl(0xb809ae00,0x00000004);
rtd_outl(0xb809ae04,0x08700f00);
rtd_outl(0xb809ae10,0x00097878);
rtd_outl(0xb809ae30,0x000a7878);
rtd_outl(0xb809ae50,0x00097878);
rtd_outl(0xb809ae70,0x000a7878);
rtd_outl(0xb8099460,0x00000700);
rtd_outl(0xb80994dc,0x00000700);
rtd_outl(0xb809ae1c,0x00000700);
rtd_outl(0xb809ae3c,0x00000700);
rtd_outl(0xb809ae5c,0x00000700);
rtd_outl(0xb809ae7c,0x00000700);
rtd_outl(0xb8099200,0x80780438);
rtd_outl(0xb8099204,0x014c0155);
rtd_outl(0xb8099208,0x083f0b09);
rtd_outl(0xb809920c,0x000eb74f);
rtd_outl(0xb8099284,0x016a0119);
rtd_outl(0xb8099288,0x083f0c0a);
rtd_outl(0xb809928c,0x000eb74f);
rtd_outl(0xb8099800,0x80780438);
rtd_outl(0xb8099804,0x014c0155);
rtd_outl(0xb8099884,0x016a0119);
#if 0
rtd_outl(0xb809d500,0x808060c9);
rtd_outl(0xb809d504,0x02020002);
rtd_outl(0xb809d508,0x00000808);
rtd_outl(0xb809d50c,0xf00ae001);
rtd_outl(0xb809d510,0xf00ae014);
rtd_outl(0xb809d514,0x00000014);
rtd_outl(0xb809d518,0x0000000a);
rtd_outl(0xb809d51c,0x00408020);
rtd_outl(0xb809d520,0x00000000);
rtd_outl(0xb809d524,0x00000000);
rtd_outl(0xb809d528,0x12040001);
rtd_outl(0xb809d52c,0x0f0fca41);
rtd_outl(0xb809d530,0x0a000300);
rtd_outl(0xb809d534,0x3d080a0b);
rtd_outl(0xb809d538,0x02000006);
rtd_outl(0xb809d53c,0x000f003c);
rtd_outl(0xb809d540,0x0ed88003);
rtd_outl(0xb809d544,0x0060c808);
rtd_outl(0xb809d548,0x00000000);
rtd_outl(0xb809d54c,0x00000000);
rtd_outl(0xb809d550,0x00000000);
rtd_outl(0xb809d554,0x00000000);
rtd_outl(0xb809d558,0x00000000);
rtd_outl(0xb809d55c,0x00000000);
rtd_outl(0xb809d560,0x00000000);
rtd_outl(0xb809d564,0x00080100);
rtd_outl(0xb809d568,0x000000fa);
rtd_outl(0xb809d56c,0x004001f4);
rtd_outl(0xb809d570,0x02802336);
rtd_outl(0xb809d574,0x0000faa0);
rtd_outl(0xb809d578,0x00000000);
rtd_outl(0xb809d57c,0x00000000);
rtd_outl(0xb809d580,0x45170004);
rtd_outl(0xb809d584,0x0000060d);
rtd_outl(0xb809d588,0x1d1f4517);
rtd_outl(0xb809d58c,0x00000000);
rtd_outl(0xb809d590,0x10020130);
rtd_outl(0xb809d594,0x901450c8);
rtd_outl(0xb809d598,0x600322ee);
rtd_outl(0xb809d59c,0x14160028);
rtd_outl(0xb809d5a0,0x003082c7);
rtd_outl(0xb809d5a4,0x00040000);
rtd_outl(0xb809d5a8,0x000a0000);
rtd_outl(0xb809d5ac,0x00300000);
rtd_outl(0xb809d5b0,0x00800000);
rtd_outl(0xb809d5b4,0xff20ff20);
rtd_outl(0xb809d5b8,0x00169050);
rtd_outl(0xb809d5bc,0x0020202f);
rtd_outl(0xb809d5c0,0x00000900);
rtd_outl(0xb809d5c4,0x00001500);
rtd_outl(0xb809d5c8,0x00010000);
rtd_outl(0xb809d5cc,0x001f1f01);
rtd_outl(0xb809d5d0,0x0fc0ffff);
rtd_outl(0xb809d5d4,0x7c289c03);
rtd_outl(0xb809d5d8,0x00000013);
rtd_outl(0xb809d5dc,0x00002000);
rtd_outl(0xb809d5e0,0x1008ff00);
rtd_outl(0xb809d5e4,0x00280103);
rtd_outl(0xb809d5e8,0x00000004);
rtd_outl(0xb809d5ec,0x00060002);
rtd_outl(0xb809d5f0,0x00000af0);
rtd_outl(0xb809d5f4,0x00000bb8);
rtd_outl(0xb809d5f8,0x000008fc);
rtd_outl(0xb809d5fc,0xe00009c4);
rtd_outl(0xb809d600,0x00003ffe);
rtd_outl(0xb809d604,0x0000c855);
rtd_outl(0xb809d608,0xfc153222);
rtd_outl(0xb809d60c,0x0804800e);
rtd_outl(0xb809d610,0xa0000220);
rtd_outl(0xb809d614,0x00000000);
rtd_outl(0xb809d618,0x00000000);
rtd_outl(0xb809d61c,0x00000000);
rtd_outl(0xb809d620,0x02000c63);
rtd_outl(0xb809d624,0x000f4002);
rtd_outl(0xb809d628,0x40818a06);
rtd_outl(0xb809d62c,0x00070000);
rtd_outl(0xb809d630,0x00006000);
rtd_outl(0xb809d634,0x00204040);
rtd_outl(0xb809d638,0x00140000);
rtd_outl(0xb809d63c,0x06f40400);
rtd_outl(0xb809d640,0x10040201);
rtd_outl(0xb809d644,0x20013060);
rtd_outl(0xb809d648,0x0000e000);
rtd_outl(0xb809d64c,0x00014000);
rtd_outl(0xb809d650,0x00028000);
rtd_outl(0xb809d654,0x1ef7c210);
rtd_outl(0xb809d658,0x18d6b9ce);
rtd_outl(0xb809d65c,0x12a52d6c);
rtd_outl(0xb809d660,0x0c73a109);
rtd_outl(0xb809d664,0x064214a6);
rtd_outl(0xb809d668,0x28618043);
rtd_outl(0xb809d66c,0x3b460110);
rtd_outl(0xb809d670,0xc020e018);
rtd_outl(0xb809d674,0x00000000);
rtd_outl(0xb809d678,0x00000000);
rtd_outl(0xb809d67c,0x00000000);
rtd_outl(0xb809d680,0x00000000);
rtd_outl(0xb809d684,0x00000000);
rtd_outl(0xb809d688,0x00000000);
rtd_outl(0xb809d68c,0x00000000);
rtd_outl(0xb809d690,0x00000000);
rtd_outl(0xb809d694,0x010a8703);
rtd_outl(0xb809d698,0x00804040);
rtd_outl(0xb809d69c,0x00000000);
rtd_outl(0xb809d6a0,0x00000000);
rtd_outl(0xb809d6a4,0x00040000);
rtd_outl(0xb809d6a8,0x00816000);
rtd_outl(0xb809d6ac,0x00000000);
rtd_outl(0xb809d6b0,0x00000000);
rtd_outl(0xb809d6b4,0x00000000);
rtd_outl(0xb809d6b8,0x0016b608);
rtd_outl(0xb809d6bc,0x7c000000);
rtd_outl(0xb809d6c0,0x603030b4);
rtd_outl(0xb809d6c4,0x016000c9);
rtd_outl(0xb809d6c8,0x70f00bef);
rtd_outl(0xb809d6cc,0x05500300);
rtd_outl(0xb809d6d0,0x02660304);
rtd_outl(0xb809d6d4,0x000a0df0);
rtd_outl(0xb809d6d8,0x00000000);
rtd_outl(0xb809d6dc,0x00027000);
rtd_outl(0xb809d6e0,0x00000008);
rtd_outl(0xb809d6e4,0x00080000);
rtd_outl(0xb809d6e8,0x000f0008);
rtd_outl(0xb809d6ec,0x0020001a);
rtd_outl(0xb809d6f0,0x6445201a);
rtd_outl(0xb809d6f4,0x07060706);
rtd_outl(0xb809d6f8,0x64502020);
rtd_outl(0xb809d6fc,0x08070706);
rtd_outl(0xb809d700,0x00000000);
rtd_outl(0xb809d704,0x00000001);
rtd_outl(0xb809d708,0x00000002);
rtd_outl(0xb809d70c,0x00000003);
rtd_outl(0xb809d710,0x00000004);
rtd_outl(0xb809d714,0x00000005);
rtd_outl(0xb809d718,0x00000006);
rtd_outl(0xb809d71c,0x00000007);
rtd_outl(0xb809d720,0x00000008);
rtd_outl(0xb809d724,0x00000009);
rtd_outl(0xb809d728,0x00000010);
rtd_outl(0xb809d72c,0x00000011);
rtd_outl(0xb809d730,0x00000012);
rtd_outl(0xb809d734,0x00000013);
rtd_outl(0xb809d738,0x00000014);
rtd_outl(0xb809d73c,0x00000015);
rtd_outl(0xb809d740,0x00000016);
rtd_outl(0xb809d744,0x00000017);
rtd_outl(0xb809d748,0x00000018);
rtd_outl(0xb809d74c,0x00000019);
rtd_outl(0xb809d750,0x00000020);
rtd_outl(0xb809d754,0x00000021);
rtd_outl(0xb809d758,0x00000022);
rtd_outl(0xb809d75c,0x00000023);
rtd_outl(0xb809d760,0x00000024);
rtd_outl(0xb809d764,0x00000025);
rtd_outl(0xb809d768,0x00000026);
rtd_outl(0xb809d76c,0x00000027);
rtd_outl(0xb809d770,0x00000028);
rtd_outl(0xb809d774,0x00000029);
rtd_outl(0xb809d778,0x00000030);
rtd_outl(0xb809d77c,0x00000031);
rtd_outl(0xb809d780,0x00000032);
rtd_outl(0xb809d784,0x00000033);
rtd_outl(0xb809d788,0x00000034);
rtd_outl(0xb809d78c,0x00000035);
rtd_outl(0xb809d790,0x00000036);
rtd_outl(0xb809d794,0x00000037);
rtd_outl(0xb809d798,0x00000038);
rtd_outl(0xb809d79c,0x00000039);
rtd_outl(0xb809d7a0,0x00000040);
rtd_outl(0xb809d7a4,0x00000041);
rtd_outl(0xb809d7a8,0x00000042);
rtd_outl(0xb809d7ac,0x00000043);
rtd_outl(0xb809d7b0,0x00000044);
rtd_outl(0xb809d7b4,0x00000045);
rtd_outl(0xb809d7b8,0x00000046);
rtd_outl(0xb809d7bc,0x00000047);
rtd_outl(0xb809d7c0,0x00000048);
rtd_outl(0xb809d7c4,0x00000049);
rtd_outl(0xb809d7c8,0x00000050);
rtd_outl(0xb809d7cc,0x00000051);
rtd_outl(0xb809d7d0,0x00000052);
rtd_outl(0xb809d7d4,0x00000053);
rtd_outl(0xb809d7d8,0x00000054);
rtd_outl(0xb809d7dc,0x00000055);
rtd_outl(0xb809d7e0,0x00000056);
rtd_outl(0xb809d7e4,0x00000057);
rtd_outl(0xb809d7e8,0x00000058);
rtd_outl(0xb809d7ec,0x00000059);
rtd_outl(0xb809d7f0,0x00000060);
rtd_outl(0xb809d7f4,0x00000061);
rtd_outl(0xb809d7f8,0x00000062);
rtd_outl(0xb809d7fc,0x00000063);
#endif
rtd_outl(0xb809df00,0x00000000);
rtd_outl(0xb809df00,0x80000000);
rtd_outl(0xb809df04,0x2b5a2002);
rtd_outl(0xb809df08,0x0080a204);
rtd_outl(0xb809df04,0x447a3014);
rtd_outl(0xb809df08,0x01002301);
rtd_outl(0xb809df04,0x233b4002);
rtd_outl(0xb809df08,0x2080b404);
rtd_outl(0xb809df04,0x233b4802);
rtd_outl(0xb809df08,0x2100b480);
rtd_outl(0xb809df04,0x4a1a3014);
rtd_outl(0xb809df08,0x2082a301);
rtd_outl(0xb809df04,0x635a3826);
rtd_outl(0xb809df08,0x21022382);
rtd_outl(0xb809df04,0x2b5a2002);
rtd_outl(0xb809df08,0x0180a204);
rtd_outl(0xb809df04,0x447a3014);
rtd_outl(0xb809df08,0x02002301);
rtd_outl(0xb809df04,0x233b4002);
rtd_outl(0xb809df08,0x2180b404);
rtd_outl(0xb809df04,0x233b4802);
rtd_outl(0xb809df08,0x2200b480);
rtd_outl(0xb809df00,0x00000000);
rtd_outl(0xb809df00,0x80000000);
rtd_outl(0xb809d410,0x88216600);  // change phase table sel
rtd_outl(0xb809d408,0x02080000);

#if 0
//----------Set Limit----------//
rtd_outl(0xB8099458,0x480F7560); //[31:4], MC_LFL_DMA_WR_Rule_check_up
rtd_outl(0xB809945C,0x4463BB60); //[31:4], MC_LFL_DMA_WR_Rule_check_low
rtd_outl(0xB80994D0,0x480F7560); //[31:4], MC_HF_DMA_WR_Rule_check_up
rtd_outl(0xB80994D8,0x4463BB60); //[31:4], MC_HF_DMA_WR_Rule_check_low
//H5X_ONLY//rtd_outl(0xB8099C58,0x2F52F440); //[31:4], MC_LFH_DMA_WR_Rule_check_up
//H5X_ONLY//rtd_outl(0xB8099C5C,0x2b400000); //[31:4], MC_LFH_DMA_WR_Rule_check_low

rtd_outl(0xB809AE14,0x480F7560); //[31:4], MC_LFL_I_DMA_RD_Rule_check_up
rtd_outl(0xB809AE18,0x4463BB60); //[31:4], MC_LFL_I_DMA_RD_Rule_check_low
rtd_outl(0xB809AE34,0x480F7560); //[31:4], MC_HF_I_DMA_RD_Rule_check_up
rtd_outl(0xB809AE38,0x4463BB60); //[31:4], MC_HF_I_DMA_RD_Rule_check_low
rtd_outl(0xB809AE54,0x480F7560); //[31:4], MC_LFL_P_DMA_RD_Rule_check_up
rtd_outl(0xB809AE58,0x4463BB60); //[31:4], MC_LFL_P_DMA_RD_Rule_check_low
rtd_outl(0xB809AE74,0x480F7560); //[31:4], MC_HF_P_DMA_RD_Rule_check_up
rtd_outl(0xB809AE78,0x4463BB60); //[31:4], MC_HF_P_DMA_RD_Rule_check_low
//H5X_ONLY//rtd_outl(0xB809AEC4,0x2F52F440); //[31:4], MC_LFH_I_DMA_RD_Rule_check_up
//H5X_ONLY//rtd_outl(0xB809AEC8,0x2b400000); //[31:4], MC_LFH_I_DMA_RD_Rule_check_low
//H5X_ONLY//rtd_outl(0xB809AEE4,0x2F52F440); //[31:4], MC_LFH_P_DMA_RD_Rule_check_up
//H5X_ONLY//rtd_outl(0xB809AEE8,0x2b400000); //[31:4], MC_LFH_P_DMA_RD_Rule_check_low
#endif
#endif
}

VOID MEMC_Lib_LoadBringUpScript_PhaseTable(VOID)
{
rtd_maskl(0xb809d410, 0xfffeffff, 0x00000000); // select lut0
//----------------Pahse Table(0x454d4152)----------------
rtd_outl(0xb809df00,0x00000000);
rtd_outl(0xb809df00,0x80000000);
rtd_outl(0xb809df04,0x2b5a2002);
rtd_outl(0xb809df08,0x00802204);// nc
rtd_outl(0xb809df04,0x2d7b4002);
rtd_outl(0xb809df08,0x2080b204);// 22
rtd_outl(0xb809df04,0x459a3014);
rtd_outl(0xb809df08,0x20822101);// 22
rtd_outl(0xb809df04,0x2d7b4682);
rtd_outl(0xb809df08,0x4080b26c);// 32
rtd_outl(0xb809df04,0x56bb5355);
rtd_outl(0xb809df08,0x40823331);// 32
rtd_outl(0xb809df04,0x259b4002);
rtd_outl(0xb809df08,0x4084c404);// 32
rtd_outl(0xb809df04,0x3d7b4cd3);
rtd_outl(0xb809df08,0x4086b2d1);// 32
rtd_outl(0xb809df04,0x659a39a6);
rtd_outl(0xb809df08,0x4088219a);// 32
rtd_outl(0xb809df04,0x2b5a2002);
rtd_outl(0xb809df08,0x01002204);// nc
rtd_outl(0xb809df04,0x2d7b4002);
rtd_outl(0xb809df08,0x2100b204);// 22
rtd_outl(0xb809df04,0x459a3014);
rtd_outl(0xb809df08,0x21022101);// 22
rtd_outl(0xb809df04,0x2d7b4682);
rtd_outl(0xb809df08,0x4100b26c);// 32
rtd_outl(0xb809df04,0x56bb5355);
rtd_outl(0xb809df08,0x41023331);// 32
rtd_outl(0xb809df04,0x259b4002);
rtd_outl(0xb809df08,0x4104c404);// 32
rtd_outl(0xb809df04,0x3d7b4cd3);
rtd_outl(0xb809df08,0x4106b2d1);// 32
rtd_outl(0xb809df04,0x659a39a6);
rtd_outl(0xb809df08,0x4108219a);// 32
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//

rtd_maskl(0xb809d410, 0xfffeffff, 0x00010000); // select lut1
//----------------Pahse Table(0x454d4152)----------------
rtd_outl(0xb809df00,0x00000000);
rtd_outl(0xb809df00,0x80000000);
rtd_outl(0xb809df04,0x2b5a2002);
rtd_outl(0xb809df08,0x00802204);// nc
rtd_outl(0xb809df04,0x2d7b4002);
rtd_outl(0xb809df08,0x2080b204);// 22
rtd_outl(0xb809df04,0x459a3014);
rtd_outl(0xb809df08,0x20822101);// 22
rtd_outl(0xb809df04,0x2d7b4682);
rtd_outl(0xb809df08,0x4080b26c);// 32
rtd_outl(0xb809df04,0x56bb5355);
rtd_outl(0xb809df08,0x40823331);// 32
rtd_outl(0xb809df04,0x259b4002);
rtd_outl(0xb809df08,0x4084c404);// 32
rtd_outl(0xb809df04,0x3d7b4cd3);
rtd_outl(0xb809df08,0x4086b2d1);// 32
rtd_outl(0xb809df04,0x659a39a6);
rtd_outl(0xb809df08,0x4088219a);// 32
rtd_outl(0xb809df04,0x2b5a2002);
rtd_outl(0xb809df08,0x01002204);// nc
rtd_outl(0xb809df04,0x2d7b4002);
rtd_outl(0xb809df08,0x2100b204);// 22
rtd_outl(0xb809df04,0x459a3014);
rtd_outl(0xb809df08,0x21022101);// 22
rtd_outl(0xb809df04,0x2d7b4682);
rtd_outl(0xb809df08,0x4100b26c);// 32
rtd_outl(0xb809df04,0x56bb5355);
rtd_outl(0xb809df08,0x41023331);// 32
rtd_outl(0xb809df04,0x259b4002);
rtd_outl(0xb809df08,0x4104c404);// 32
rtd_outl(0xb809df04,0x3d7b4cd3);
rtd_outl(0xb809df08,0x4106b2d1);// 32
rtd_outl(0xb809df04,0x659a39a6);
rtd_outl(0xb809df08,0x4108219a);// 32
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//
rtd_outl(0xb809df04,0x00000000);
rtd_outl(0xb809df08,0x00000000);//

rtd_maskl(0xb809d410, 0xfe01ffff, 0x00400000); // set kpphase_dec_length = 0x20
}

VOID MEMC_Lib_LoadBringUpScript_MemoryAddress(VOID)
{
	unsigned int test_cnt = 0;
	test_cnt = 1;
//o------ ME start address ------o
rtd_outl(0xb809C000, 0x44001060);
rtd_outl(0xb809C004, 0x4407F960);
rtd_outl(0xb809C008, 0x440FE260);
rtd_outl(0xb809C00C, 0x4417CB60);
rtd_outl(0xb809C010, 0x441FB460);
rtd_outl(0xb809C014, 0x44279D60);
rtd_outl(0xb809C27C, 0x442F8660);
rtd_outl(0xb809C280, 0x44376F60);

rtd_outl(0xb809C100, 0x443F5860);
rtd_outl(0xb809C104, 0x443F5860);

rtd_outl(0xb809C124, 0x44474160);
rtd_outl(0xb809C128, 0x44474160);

rtd_outl(0xb809C148, 0x444B35E0);
rtd_outl(0xb809C14C, 0x444B35E0);

rtd_outl(0xb809C16C, 0x444CCAE0);
rtd_outl(0xb809C170, 0x444CCAE0);

rtd_outl(0xb809C200, 0x444D3020);

rtd_outl(0xb809C214, 0x4452B9A0);

rtd_outl(0xb809C22C, 0x44554BC0);
rtd_outl(0xb809C230, 0x445778A0);
rtd_outl(0xb809C0D8, 0x4459A580);

rtd_outl(0xb809C248, 0x445BD260);
rtd_outl(0xb809C24C, 0x445FC6E0);

//o------ ME end address ------o
rtd_outl(0xb809C018, 0x4407F960);
rtd_outl(0xb809C01C, 0x440FE260);
rtd_outl(0xb809C020, 0x4417CB60);
rtd_outl(0xb809C024, 0x441FB460);
rtd_outl(0xb809C028, 0x44279D60);
rtd_outl(0xb809C02C, 0x442F8660);
rtd_outl(0xb809C284, 0x44376F60);
rtd_outl(0xb809C288, 0x443F5860);

rtd_outl(0xb809C108, 0x44474160);
rtd_outl(0xb809C10c, 0x44474160);

rtd_outl(0xb809C12c, 0x444B35E0);
rtd_outl(0xb809C130, 0x444B35E0);

rtd_outl(0xb809C150, 0x444CCAE0);
rtd_outl(0xb809C154, 0x444CCAE0);

rtd_outl(0xb809C174, 0x444D3020);
rtd_outl(0xb809C178, 0x444D3020);

rtd_outl(0xb809C204, 0x4452B9A0);

rtd_outl(0xb809C218, 0x44554BC0);

rtd_outl(0xb809C234, 0x445778A0);
rtd_outl(0xb809C238, 0x4459A580);
rtd_outl(0xb809C0DC, 0x445BD260);

rtd_outl(0xb809C250, 0x445FC6E0);
rtd_outl(0xb809C254, 0x4463BB60);

//o------ MC start address ------o
//o------ LF ------o
rtd_outl(0xb8099414, 0x4463BB60);
rtd_outl(0xb8099418, 0x44AE1660);
rtd_outl(0xb809941C, 0x44F87160);
rtd_outl(0xb8099420, 0x4542CC60);
rtd_outl(0xb8099424, 0x458D2760);
rtd_outl(0xb8099428, 0x45D78260);
rtd_outl(0xb809942C, 0x45D78260);
rtd_outl(0xb8099430, 0x45D78260);
//o------ HF ------o
rtd_outl(0xb8099484, 0x4621DD60);
rtd_outl(0xb8099488, 0x46742160);
rtd_outl(0xb809948C, 0x46C66560);
rtd_outl(0xb8099490, 0x4718A960);
rtd_outl(0xb8099494, 0x476AED60);
rtd_outl(0xb8099498, 0x47BD3160);
rtd_outl(0xb809949C, 0x47BD3160);
rtd_outl(0xb80994A0, 0x47BD3160);

rtd_outl(0xb809B70C, 0x480F7560);
rtd_outl(0xb809B710, 0x480FDAA0);

rtd_outl(0xb809B728, 0x48103FE0);
rtd_outl(0xb809B72C, 0x4810A520);
rtd_outl(0xb809B730, 0x48110A60);

rtd_outl(0xb809B74C, 0x48116FA0);
rtd_outl(0xb809B750, 0x4811A240);
rtd_outl(0xb809B754, 0x4811D4E0);
rtd_outl(0xb809B758, 0x48120780);
rtd_outl(0xb809B75C, 0x48123A20);
rtd_outl(0xb809B760, 0x48126CC0);
rtd_outl(0xb809B764, 0x48129F60);
rtd_outl(0xb809B768, 0x4812D200);

//o------ MC end address ------o
//o------ LF ------o
rtd_outl(0xb8099434, 0x44AE1660);
rtd_outl(0xb8099438, 0x44F87160);
rtd_outl(0xb809943c, 0x4542CC60);
rtd_outl(0xb8099440, 0x458D2760);
rtd_outl(0xb8099444, 0x45D78260);
rtd_outl(0xb8099448, 0x4621DD60);
rtd_outl(0xb809944c, 0x4621DD60);
rtd_outl(0xb8099450, 0x4621DD60);
//o------ HF ------o
rtd_outl(0xb80994A4, 0x46742160);
rtd_outl(0xb80994A8, 0x46C66560);
rtd_outl(0xb80994Ac, 0x4718A960);
rtd_outl(0xb80994b0, 0x476AED60);
rtd_outl(0xb80994b4, 0x47BD3160);
rtd_outl(0xb80994b8, 0x480F7560);
rtd_outl(0xb80994bc, 0x480F7560);
rtd_outl(0xb80994c0, 0x480F7560);

rtd_outl(0xb809B714, 0x480FDAA0);
rtd_outl(0xb809B718, 0x48103FE0);

rtd_outl(0xb809B734, 0x4810A520);
rtd_outl(0xb809B738, 0x48110A60);
rtd_outl(0xb809B73c, 0x48116FA0);

rtd_outl(0xb809B76c, 0x4811A240);
rtd_outl(0xb809B770, 0x4811D4E0);
rtd_outl(0xb809B774, 0x48120780);
rtd_outl(0xb809B778, 0x48123A20);
rtd_outl(0xb809B77c, 0x48126CC0);
rtd_outl(0xb809B780, 0x48129F60);
rtd_outl(0xb809B784, 0x4812D200);
rtd_outl(0xb809B788, 0x481304A0);

}

VOID MEMC_Lib_LoadBringUpScript_LineStep(VOID)
{
//o------ Line step ------o
#if 1
rtd_outl(0xb809C034, 0x000003C0);
rtd_outl(0xb809C110, 0x000003C0);
rtd_outl(0xb809C134, 0x000001E0);
rtd_outl(0xb809C158, 0x000000C0);
rtd_outl(0xb809C17C, 0x000000C0);
rtd_outl(0xb809C208, 0x000004E0);
rtd_outl(0xb809C21C, 0x000004E0);
rtd_outl(0xb809C23C, 0x00000420);
rtd_outl(0xb809C258, 0x00000780);
rtd_outl(0xb8099454, 0x000011A0);
rtd_outl(0xb80994C4, 0x00001380);
rtd_outl(0xb809B708, 0x000000C0);
rtd_outl(0xb809B724, 0x000000C0);
rtd_outl(0xb809B748, 0x00000060);
//o------ Burst length ------o
rtd_maskl(0xb809C038, 0xffffff00, 0x1d);
rtd_maskl(0xb809C114, 0xffffff00, 0x1d);
rtd_maskl(0xb809C138, 0xffffff00, 0x1d);
rtd_maskl(0xb809C15C, 0xffffff00, 0x1d);
rtd_maskl(0xb809C180, 0xffffff00, 0x1d);
rtd_maskl(0xb809C210, 0xffffff00, 0x1d);
rtd_maskl(0xb809C224, 0xffffff00, 0x1d);
rtd_maskl(0xb809C244, 0xffffff00, 0x1d);
rtd_maskl(0xb809C260, 0xffffff00, 0x1d);
rtd_maskl(0xb8099410, 0xffff00ff, 0x8000);
rtd_maskl(0xb809ae10, 0xffff00ff, 0x8000);
rtd_maskl(0xb809ae50, 0xffff00ff, 0x8000);
rtd_maskl(0xb8099480, 0xffff00ff, 0x8000);
rtd_maskl(0xb809ae30, 0xffff00ff, 0x8000);
rtd_maskl(0xb809ae70, 0xffff00ff, 0x8000);
rtd_maskl(0xb809B704, 0xffff00ff, 0xC00);
rtd_maskl(0xb809B704, 0xffff00ff, 0xC00);
rtd_maskl(0xb809B744, 0xffff00ff, 0xC00);
#endif
}

VOID MEMC_Lib_LoadBringUpScript_cs_2x2_all_on_120hz(VOID)
{
//rtd_outl(0xb8028100,0x00056000);
//rtd_outl(0xb8028130,0x00000005);
//rtd_outl(0xb8000230,0x00211010);
//rtd_outl(0xb8000234,0x00110121);
//rtd_outl(0xb802811c,0x1);
//rtd_outl(0xb809d014,0x08700f00);
//rtd_outl(0xb8028640,0x00050004);
//rtd_outl(0xb8028644,0x00860098);       //00870556
rtd_maskl(0xb8000208,0xdfffffff,0x20000000);
rtd_outl(0xb802811c,0x1);

rtd_outl(0xb802e800,0x1);

//rtd_outl(0xb809f004,0x1f); //me clk
//rtd_outl(0xb809e004,0x3f); //DCU1_ARB_CR1 ME off

//rtd_outl(0xb809bc3c, 0x1FF22288 ); //AUTO FILM
//rtd_outl(0xb809d40c, 0x18140000 ); //AUTO FILM
//rtd_maskl(0xb809d410,0xfffff0ff, 0x00000800); // [11:8]  me1 bsize
//rtd_maskl(0xb809d478,0xffff87ff, 0x00004000); // [14:11]  me2 bsize
}

VOID MEMC_Lib_LoadBringUpScript_cs_2x2_all_on_60hz(VOID)
{
//rtd_outl(0xb8028100,0x00056000);
//rtd_outl(0xb8028130,0x00000005);
//rtd_outl(0xb8000230,0x00211010);
//rtd_outl(0xb8000234,0x00110121);
//rtd_outl(0xb802811c,0x1);
//rtd_outl(0xb809d014,0x08700f00);
//rtd_outl(0xb8028640,0x00050004);
//rtd_outl(0xb8028644,0x00860098);       //00870556
rtd_outl(0xb802e800,0x1);
//rtd_maskl(0xb8000208,0xdfffffff,0x20000000);
//rtd_outl(0xb802811c,0x1);

//rtd_outl(0xb809f004,0x1f); //me clk
//rtd_outl(0xb809e004,0x3f); //DCU1_ARB_CR1 ME off

//rtd_outl(0xb809bc3c, 0x1FF22288 ); //AUTO FILM
//rtd_outl(0xb809d40c, 0x18140000 ); //AUTO FILM
//rtd_maskl(0xb809d410,0xfffff0ff, 0x00000800); // [11:8]  me1 bsize
//rtd_maskl(0xb809d478,0xffff87ff, 0x00004000); // [14:11]  me2 bsize
}

VOID MEMC_Lib_LoadBringUpScript_Enable_DMA(VOID)
{
rtd_setbits(0xb8099460,_BIT0); // lfl  wdma enable
rtd_setbits(0xb80994dc,_BIT0); // hf   wdma enable
rtd_setbits(0xb809ae1c,_BIT0); // lfli rdma enable
rtd_setbits(0xb809ae3c,_BIT0); // hfi  rdma enable
rtd_setbits(0xb809ae5c,_BIT0); // lflp rdma enable
rtd_setbits(0xb809ae7c,_BIT0); // hfp  rdma enable
rtd_maskl(0xb809B720,0xfffffff8, 0x00000007); //dma_off  me share w
rtd_setbits(0xb809B794,_BIT0); //dma_off  me share w
rtd_maskl(0xb809B7b0,0xffffffe0, 0x0000001f); //dma_off me sharer
rtd_setbits(0xb809B7E0,_BIT0); //dma_off me sharer

rtd_setbits(0xb809c038,_BIT20); //,0x0031001d); //00 [20]
rtd_setbits(0xb809c040,_BIT20); //,0x0011001d); //01
rtd_setbits(0xb809c048,_BIT20); //,0x0011001d); //02
rtd_setbits(0xb809c050,_BIT20); //,0x0011001d); //03
rtd_setbits(0xb809c114,_BIT20); //,0x0031001d); //08
rtd_setbits(0xb809c11c,_BIT20); //,0x0011001d); //09
rtd_setbits(0xb809c138,_BIT20); //,0x0031001d); //10
rtd_setbits(0xb809c140,_BIT20); //,0x0011001d); //11
rtd_setbits(0xb809c15c,_BIT20); //,0x0031001d); //12
rtd_setbits(0xb809c164,_BIT20); //,0x0011001d); //13
rtd_setbits(0xb809c180,_BIT20); //,0x0031001d); //14
rtd_setbits(0xb809c188,_BIT20); //,0x0011001d); //15

rtd_setbits(0xb809c210,_BIT20); //,0x13f1001d);  //mv01 [20]
rtd_setbits(0xb809c224,_BIT20); //,0x12f1001d);  //mv02 [20]
rtd_setbits(0xb809c228,_BIT20); //,0x0011001d);  //mv03 [20]
rtd_setbits(0xb809c244,_BIT20); //,0x0fb1001d);  //mv04
rtd_setbits(0xb809c260,_BIT20); //,0x1e31001d);  //mv05
rtd_setbits(0xb809c264,_BIT20); //,0x0011001d);  // ..
rtd_setbits(0xb809c268,_BIT20); //,0x0011001d);
rtd_setbits(0xb809c26c,_BIT20); //,0x0011001d);
rtd_setbits(0xb809c270,_BIT20); //,0x0011001d);
rtd_setbits(0xb809c274,_BIT20); //,0x0011001d);
rtd_setbits(0xb809c278,_BIT20); //,0x0011001d);  //mv11

rtd_setbits(0xb809B210,_BIT0); // vbuf_en
}

VOID MEMC_Lib_LoadBringUpScript_Disable_DMA(VOID)
{
rtd_clearbits(0xb8099460,_BIT0); // lfl  wdma enable
rtd_clearbits(0xb80994dc,_BIT0); // hf   wdma enable
rtd_clearbits(0xb809ae1c,_BIT0); // lfli rdma enable
rtd_clearbits(0xb809ae3c,_BIT0); // hfi  rdma enable
rtd_clearbits(0xb809ae5c,_BIT0); // lflp rdma enable
rtd_clearbits(0xb809ae7c,_BIT0); // hfp  rdma enable
rtd_maskl(0xb809B720,0xfffffff8, 0x00000000); //dma_off  me share w
rtd_clearbits(0xb809B794,_BIT0); //dma_off  me share w
rtd_maskl(0xb809B7b0,0xffffffe0, 0x00000000); //dma_off me sharer
rtd_clearbits(0xb809B7E0,_BIT0); //dma_off me sharer

rtd_clearbits(0xb809c038,_BIT20); //,0x0031001d); //00 [20]
rtd_clearbits(0xb809c040,_BIT20); //,0x0011001d); //01
rtd_clearbits(0xb809c048,_BIT20); //,0x0011001d); //02
rtd_clearbits(0xb809c050,_BIT20); //,0x0011001d); //03
rtd_clearbits(0xb809c114,_BIT20); //,0x0031001d); //08
rtd_clearbits(0xb809c11c,_BIT20); //,0x0011001d); //09
rtd_clearbits(0xb809c138,_BIT20); //,0x0031001d); //10
rtd_clearbits(0xb809c140,_BIT20); //,0x0011001d); //11
rtd_clearbits(0xb809c15c,_BIT20); //,0x0031001d); //12
rtd_clearbits(0xb809c164,_BIT20); //,0x0011001d); //13
rtd_clearbits(0xb809c180,_BIT20); //,0x0031001d); //14
rtd_clearbits(0xb809c188,_BIT20); //,0x0011001d); //15

rtd_clearbits(0xb809c210,_BIT20); //,0x13f1001d);  //mv01 [20]
rtd_clearbits(0xb809c224,_BIT20); //,0x12f1001d);  //mv02 [20]
rtd_clearbits(0xb809c228,_BIT20); //,0x0011001d);  //mv03 [20]
rtd_clearbits(0xb809c244,_BIT20); //,0x0fb1001d);  //mv04
rtd_clearbits(0xb809c260,_BIT20); //,0x1e31001d);  //mv05
rtd_clearbits(0xb809c264,_BIT20); //,0x0011001d);  // ..
rtd_clearbits(0xb809c268,_BIT20); //,0x0011001d);
rtd_clearbits(0xb809c26c,_BIT20); //,0x0011001d);
rtd_clearbits(0xb809c270,_BIT20); //,0x0011001d);
rtd_clearbits(0xb809c274,_BIT20); //,0x0011001d);
rtd_clearbits(0xb809c278,_BIT20); //,0x0011001d);  //mv11

rtd_clearbits(0xb809B210,_BIT0); // vbuf_en
}

unsigned char MEMC_Lib_GetInfo(unsigned char infoSel, unsigned char x1, unsigned char x2, unsigned char y1, unsigned char y2)
{
	_PQLCONTEXT *s_pContext = GetPQLContext_m();
	unsigned char Ret = 255;
	int i, j;
	UINT16 GMV_1st_vx = abs(s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb);
	UINT16 GMV_1st_vy = abs(s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb);
	UINT16 GMV_2nd_vx = abs(s_pContext->_output_read_comreg.s11_me_GMV_2nd_vx_rb);
	UINT16 GMV_2nd_vy = abs(s_pContext->_output_read_comreg.s10_me_GMV_2nd_vy_rb);
	

	UINT16 rMV_1st_max = 0;
	UINT16 rMV_1st_tmp = 0;
	UINT16 rMV_2nd_max = 0;
	UINT16 rMV_2nd_tmp = 0;
	
	switch(infoSel)
	{
		default:
		case 0: // gmv1
			Ret = MAX(GMV_1st_vx, GMV_1st_vy);
			break;
			
		case 1: // gmv2
			Ret = MAX(GMV_2nd_vx, GMV_2nd_vy);
			break;
			
		case 2: // rmv1
			for(j=y1; j<=y2; j++)
			{
				for(i=x1; i<=x2; i++)
				{
					rMV_1st_tmp = MAX(abs(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[j*8+i]), abs(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[j*8+i]));
					
					if(rMV_1st_max < rMV_1st_tmp)
						rMV_1st_max = rMV_1st_tmp;
				}
			}			
			Ret = rMV_1st_max;
			break;
			
		case 3: // rmv2
			for(j=y1; j<=y2; j++)
			{
				for(i=x1; i<=x2; i++)
				{
					rMV_2nd_tmp = MAX(abs(s_pContext->_output_read_comreg.s11_me_rMV_2nd_vx_rb[j*8+i]), abs(s_pContext->_output_read_comreg.s10_me_rMV_2nd_vy_rb[j*8+i]));
					
					if(rMV_2nd_max < rMV_2nd_tmp)
						rMV_2nd_max = rMV_2nd_tmp;
				}
			}			
			Ret = rMV_2nd_max;
			break;
			
	}

	if(Ret > 255)
		Ret = 255;
	return Ret;
}
UINT32 MEMC_Lib_GetInfoForSLD(unsigned char infoSel)
{
	_PQLCONTEXT *s_pContext = GetPQLContext_m();
	UBYTE u1_ME_Clk_Enable = (rtd_inl(0xb800011c)>>30)&0x1;
	UBYTE u1_MEMC_Mux_Sel  = (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>13)&0x1;
	UINT32 Ret = 0;
	switch(infoSel)
	{
		case 0: // pixel logo clear signal
			Ret = s_pContext->_output_FRC_LgDet.u32_blklogo_clr_idx | s_pContext->_output_FRC_LgDet.u32_logo_hsty_clr_lgclr_idx;
			break;
		case 1: // me1 scene change
			Ret = s_pContext->_output_read_comreg.u1_sc_status_rb;
			break;
		case 2: // logo scene change
			Ret = s_pContext->_output_read_comreg.u1_sc_status_logo_rb;
			break;
		case 3: // dehalo scene change
			Ret = s_pContext->_output_read_comreg.u1_sc_status_dh_rb;
			break;
		case 4: // frame motion
			Ret = s_pContext->_output_me_sceneAnalysis.u32_aFrmMot_4Max;
			break;
		case 5: // about center frame diff
			Ret = s_pContext->_output_me_sceneAnalysis.u32_cFrmMot_4Max;
			break;
		case 6: // pixel logo clear signal for sld
			Ret = s_pContext->_output_FRC_LgDet.u32_PxlRgClrSig;
			break;
		case 7: // output data valid or not
			if(u1_ME_Clk_Enable == 0 || u1_MEMC_Mux_Sel == 0)
				Ret = 0;
			else
				Ret = 1;
			break;
		default:
			Ret = 0;
			break;
	}

	return Ret;
}
UINT32* MEMC_Lib_GetInfoForISD(void)
{
	_PQLCONTEXT *s_pContext = GetPQLContext_m();
	UINT32* Ret = NULL;
	Ret = s_pContext->_output_read_comreg.u20_me_rDTL_rb;
	return Ret;
}
