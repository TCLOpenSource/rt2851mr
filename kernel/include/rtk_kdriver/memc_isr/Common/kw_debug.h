#if 1
/**
 * @file kw_debug.h
 * @brief This header file defines Kiwi-Image debug trace to control all model debug info.
 * @date August.24.2014
 * @version V0.0.1
 * @author Lixiangjun
 * @par KW Debug trace V0.0.1 - Copyright (C) 2014 Kiwi-Image Co. LTD
 * @par History:
 *			Version: 0.0.1
*/

//#ifndef _KIWI_DEBUG_HEADER_
//#define _KIWI_DEBUG_HEADER_
#ifndef _REAL_DEBUG_HEADER_
#define _REAL_DEBUG_HEADER_

#include "memc_isr/include/kw_type.h"
#include <mach/rtk_log.h>
#ifdef CONFIG_ARM64 //ARM32 compatible
//#include <asm/io.h>
#else
#include <asm/io.h>
#endif
#include <rbus/timer_reg.h>
//#include "rtk_vip_logger.h"

extern SINT32 kw_printf(SCHAR *pcFormat, ...);

#ifdef DLL_IMPLEMENT
#ifdef __cplusplus
#define DLL_API extern "C" __declspec(dllexport)
#else /* else of __cplusplus*/
#define DLL_API __declspec(dllexport)
#endif /* End of #ifdef __cplusplus */
#else /* else of DLL_IMPLEMENT*/
#ifdef __cplusplus
#define DLL_API extern "C" __declspec(dllimport)
#else /* else of __cplusplus */
#ifdef WIN32
#define DLL_API __declspec(dllimport)
#else /* else of WIN32 */
#define DLL_API
#endif/* End of #ifdef WIN32 */
#endif/* End of #ifdef __cplusplus */
#endif/* End of #ifdef DLL_IMPLEMENT */

#ifdef RTK_MEMC
#include <rtio.h>
#include <VP_def.h>
#endif

#define DEBUG_ENABLE

#ifdef RTK_MEMC
#define DBG_ERROR                      LOGLEVEL_ERR
#define DBG_WARNING                    LOGLEVEL_WARNING
#define DBG_MSG                        LOGLEVEL_INFO
#else
#define DBG_ERROR                      3
#define DBG_WARNING                    2
#define DBG_MSG                        1
#endif


/*! Check debug enable*/
#ifdef DEBUG_ENABLE
#ifdef RTK_MEMC
/*! This module define debug info. */
	/*! Module need to output debug info also must define function SINT32 #module_GetDebugLevel(VOID) */
	#define LogPrintf(iLevel, format, ...) ModulePrintf(iLevel,MODULE_MEMC,format,##__VA_ARGS__)

#else
	/*! This module define debug info. */
	/*! Module need to output debug info also must define function SINT32 #module_GetDebugLevel(VOID) */

	#define LogPrintf(iLevel, format, ...)\
					do\
					{\
						if (iLevel >= COM_GetDebugLevel())\
						{\
							if(iLevel == DBG_MSG)\
							{\
								kw_printf(format, ##__VA_ARGS__);\
							}\
							else\
							{\
								kw_printf("%s,(%s)(Line %d )", __FILE__, __FUNCTION__, __LINE__);\
								kw_printf(format, ##__VA_ARGS__);\
							}\
						}\
					}while(0);
#endif
#else
	/*! This module no debug info. */
	#define LogPrintf(iLevel, format, ...)
#endif

int64_t MEMC_GetPTS(void);
#define MEMCSecPrint(_sec, format, ...)      \
{\
	static unsigned int  LastPrintPTS=0;			\
	static unsigned int  WarningCount=0;			\
	unsigned int	     CurrentPTS = MEMC_GetPTS();	\
	if (CurrentPTS - LastPrintPTS > 90090 * _sec) {	\
		LogPrintf(DBG_WARNING,format, ##__VA_ARGS__);	\
		LogPrintf(DBG_WARNING,"Count:[%d/%d s]", WarningCount+1,_sec);	\
		LastPrintPTS = CurrentPTS;	\
		WarningCount = 0;		\
	} else	\
	WarningCount++;	\
}

DLL_API VOID COM_SetDebugLevel(UINT32 u32Level);

DLL_API UINT32 COM_GetDebugLevel(VOID);

#endif


#else
/**
 * @file kw_debug.h
 * @brief This header file defines Real-Image debug trace to control all model debug info.
 * @date August.24.2014
 * @version V0.0.1
 * @author Lixiangjun
 * @par KW Debug trace V0.0.1 - Copyright (C) 2014 Real-Image Co. LTD
 * @par History:
 *			Version: 0.0.1
*/

#ifndef _REAL_DEBUG_HEADER_
#define _REAL_DEBUG_HEADER_

#include "memc_isr/include/kw_type.h"
#include <mach/rtk_log.h>
#include <asm/io.h>
#include <rbus/timer_reg.h>

#ifdef DLL_IMPLEMENT
#ifdef __cplusplus
#define DLL_API extern "C" __declspec(dllexport)
#else /* else of __cplusplus*/
#define DLL_API __declspec(dllexport)
#endif /* End of #ifdef __cplusplus */
#else /* else of DLL_IMPLEMENT*/
#ifdef __cplusplus
#define DLL_API extern "C" __declspec(dllimport)
#else /* else of __cplusplus */
#ifdef WIN32
#define DLL_API __declspec(dllimport)
#else /* else of WIN32 */
#define DLL_API
#endif/* End of #ifdef WIN32 */
#endif/* End of #ifdef __cplusplus */
#endif/* End of #ifdef DLL_IMPLEMENT */

#ifdef RTK_MEMC
#include <rtio.h>
#include <VP_def.h>
#endif

#define DEBUG_ENABLE

#ifdef RTK_MEMC
#define DBG_ERROR                      LOGLEVEL_ERR
#define DBG_WARNING                    LOGLEVEL_WARNING
#define DBG_MSG                        LOGLEVEL_INFO
#else
#define DBG_ERROR                      3
#define DBG_WARNING                    2
#define DBG_MSG                        1
#endif


/*! Check debug enable*/
#ifdef DEBUG_ENABLE
#ifdef RTK_MEMC
/*! This module define debug info. */
	/*! Module need to output debug info also must define function SINT32 #module_GetDebugLevel(VOID) */
	#define LogPrintf(iLevel, format, ...) ModulePrintf(iLevel,MODULE_MEMC,format,##__VA_ARGS__)
#else
	/*! This module define debug info. */
	/*! Module need to output debug info also must define function SINT32 #module_GetDebugLevel(VOID) */

	#define LogPrintf(iLevel, format, ...)\
					do\
					{\
						if (iLevel >= COM_GetDebugLevel())\
						{\
							if(iLevel == DBG_MSG)\
							{\
								kw_printf(format, ##__VA_ARGS__);\
							}\
							else\
							{\
								kw_printf("%s,(%s)(Line %d )", __FILE__, __FUNCTION__, __LINE__);\
								kw_printf(format, ##__VA_ARGS__);\
							}\
						}\
					}while(0);
#endif
#else
	/*! This module no debug info. */
	#define LogPrintf(iLevel, format, ...)
#endif

int64_t MEMC_GetPTS(void);
#define MEMCSecPrint(_sec, format, ...)      \
{\
	static unsigned int  LastPrintPTS=0;			\
	static unsigned int  WarningCount=0;			\
	unsigned int	     CurrentPTS = MEMC_GetPTS();	\
	if (CurrentPTS - LastPrintPTS > 90090 * _sec) {	\
		LogPrintf(DBG_WARNING,format, ##__VA_ARGS__);	\
		LogPrintf(DBG_WARNING,"Count:[%d/%d s]", WarningCount+1,_sec);	\
		LastPrintPTS = CurrentPTS;	\
		WarningCount = 0;		\
	} else	\
	WarningCount++;	\
}

DLL_API VOID COM_SetDebugLevel(UINT32 u32Level);

DLL_API UINT32 COM_GetDebugLevel(VOID);

#endif


#endif
