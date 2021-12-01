/******************************************************************************
 *
 *   Copyright(c) 2014 Realtek Semiconductor Corp. All rights reserved.
 *
 *   @author yungjui.lee@realtek.com
 *
 *****************************************************************************/

#ifndef _RTK_COMMON_
#define _RTK_COMMON_

#include <linux/string.h>
#include "AudioRPC_System.h"
#include "AudioRPCBaseDS_data.h"
#include "AudioRPC_Agent_data.h"
#include "audio_common.h"
#include "AudioInbandAPI.h"
#include <rtk_kdriver/rtkaudio_debug.h>
#include "ioctrl/audio/audio_cmd_id.h"

extern int64_t CLOCK_GetPTS(void);
#define pli_getPTS() CLOCK_GetPTS()

#if 1
#define AUDIO_INFO    pr_info
#define AUDIO_ERROR   pr_err
#define AUDIO_FATAL   pr_emerg
#define AUDIO_VERBOSE pr_debug
#define AUDIO_DEBUG   pr_debug
#define DEBUG         pr_debug
#define ERROR         pr_err
#define INFO          pr_debug
#else //for debug only
#define AUDIO_INFO    pr_emerg
#define AUDIO_ERROR   pr_emerg
#define AUDIO_FATAL   pr_emerg
#define AUDIO_VERBOSE pr_emerg
#define AUDIO_DEBUG   pr_emerg
#define DEBUG         pr_emerg
#define ERROR         pr_emerg
#define INFO          pr_emerg
#endif

#define H_FLAG_SUCCESS                  (0x10000000)
#define S_OK                            ((H_FLAG_SUCCESS) |     (0x00000000))
#define S_FALSE                         ((H_FLAG_SUCCESS) |     (0x00000001))

#ifndef TRUE
#define TRUE					(1)
#endif

#ifndef FALSE
#define FALSE					(0)
#endif

#ifndef BOOLEAN
#ifndef _EMUL_WIN
typedef unsigned int            __BOOLEAN;
#define BOOLEAN __BOOLEAN
#else
typedef unsigned char           __BOOLEAN;
#define BOOLEAN __BOOLEAN
#endif
#endif

#ifndef BOOL
#define BOOL                        bool
#endif

#ifndef UINT8
#define UINT8 unsigned char
#endif
#ifndef SINT8
#define SINT8 signed char
#endif
#ifndef UINT16
#define UINT16 unsigned short
#endif
#ifndef SINT16
#define SINT16 signed short
#endif
#ifndef UINT32
#define UINT32 unsigned int
#endif
#ifndef SINT32
#define SINT32 signed int
#endif
#ifndef UINT64
#define UINT64 unsigned long long
#endif
#ifndef SINT64
#define SINT64 signed long long
#endif

#define UNDEFINED_AGENT_ID (0xffffffff)
#define UNINIT_PINID       (0xffffffff)

typedef enum {
    STATE_STOP=0,
    STATE_PAUSE=1,
    STATE_RUN=2,
    STATE_MAX=3
}STATE;

typedef enum {
    EVENT_EOS=1,
}EVENT;

#define NO_ERR        (0)
#define ERR_UNDERFLOW (0x1)
#define ERR_OVERFLOW  (0x2)

/** Define the base pin **/
typedef struct _Pin  Pin;
typedef struct _Pin{
    // member variables
    void* pDerivedObj;
    void* allocator;
    SINT32 listSize;

    // member functions
    UINT32  (*GetReadSize)(Pin*, UINT32);
    UINT32  (*GetWriteSize)(Pin*);
    UINT8*  (*GetReadPtr)(Pin*, UINT32);
    UINT32  (*SetReadPtr)(Pin*, UINT8*, UINT32);
    UINT32  (*SetNumOfReadPtr)(Pin*, UINT32);
    UINT8*  (*GetWritePtr)(Pin*);
    UINT32  (*SetWritePtr)(Pin*, UINT8*);
    UINT32  (*GetBufHeader)(Pin*, void**, UINT32*);
    UINT32  (*GetBufAddress)(Pin*, UINT8**, UINT32*);
    UINT32  (*GetListSize)(Pin*);
    UINT32  (*GetBufferSize)(Pin*);
    UINT32  (*GetBuffer)(Pin*, UINT8**, UINT32*);
    UINT32  (*GetPhysicalWriteAddress)(Pin*);
    UINT32  (*ResetPin)(Pin*);
    void    (*Delete)(Pin*);
    /* Ring Buffer Usage */

    UINT32  (*MemCopyFromReadPtr)(Pin*, UINT8*, UINT32, UINT32);

//    UINT32  (*MemCopyFromReadPtr)(Pin*, UINT8*, UINT32);
//    UINT32  (*MemCopyFromReadPtrNonInverse)(Pin*, UINT8*, UINT32);

    UINT32  (*MemCopyToWritePtr)(Pin*, UINT8*, UINT32);
    UINT32  (*MemCopyToWritePtrNoInverse)(Pin*, UINT8*, UINT32);
    UINT32  (*AddReadPtr)(Pin*, UINT32);
    UINT32  (*AddWritePtr)(Pin*, UINT32);
    UINT32  (*CheckReadableSize)(Pin*, UINT32);
    UINT32  (*CheckWritableSize)(Pin*, UINT32);
}Pin;
Pin* new_pin(UINT32 bufSize);
Pin* new_pin_Cached(UINT32 bufSize);
/** End of base pin **/
/** Define the base module**/
typedef struct _Base Base;
typedef struct _Base{
    // member variables
    void* pDerivedObj;
    UINT32 instanceID;
    char name[16];
    Pin *inPin;
    Pin *outPin;
    UINT32 state;
    UINT32 inPinID;
    UINT32 outPinID;
    struct list_head list;
    struct list_head flowList;
    void* flowEventQ;
    void* flowUserQ;

    // member functions
    void    (*Delete)(Base*);
    UINT32  (*Run)(Base*);
    UINT32  (*Pause)(Base*);
    UINT32  (*Stop)(Base*);
    UINT32  (*Flush)(Base*);
    UINT32  (*SetRefClock)(Base*, UINT32);
    Pin*    (*GetOutPin)(Base*);
    UINT32  (*GetInPinID)(Base*);
    UINT32  (*GetOutPinID)(Base*);
    UINT32  (*GetState)(Base*);
    UINT32  (*GetAgentID)(Base*);
    UINT32  (*InitOutRingBuf)(Base*);
    UINT32  (*ResetOutRingBuf)(Base*);
    UINT32  (*PrivateInfo)(Base*, UINT32, UINT8*, UINT32);
    UINT32  (*SwitchFocus)(Base*, void*);
    UINT32  (*SetSeekingInfo)(Base*, SINT32, SINT32);
    UINT32  (*Connect)(Base*, Base*);
    UINT32  (*Remove)(Base*);
    UINT32  (*SetFlowEventQ)(Base*,void*,void*);
}Base;

Base* new_base(void);
void delete_base(Base* pBaseObj);
UINT32 Remove(Base*);


/** End of base module **/

/** ReferenceClock **/
typedef struct _REFERENCECLOCK ReferenceClock;
typedef struct _REFERENCECLOCK{
    REFCLOCK    *m_core;
    UINT8       *m_virtualAddr;
    UINT32      m_phyAddr;

    void   (*Delete)(ReferenceClock*);
    UINT32 (*GetCoreAddress)(ReferenceClock*, UINT32*, UINT8**, UINT8**);
}ReferenceClock;
ReferenceClock* new_ReferenceClock(void);
/** End of Referenceclock **/

/**** common functions ****/
UINT32 CreateAgent(UINT32 type);
UINT32 DestroyAgent(UINT32 *instanceID);

unsigned int memory_align(unsigned int size, unsigned int alignsz);
void* RTK_Malloc(UINT32 size);
void  RTK_Free(void* pData);

void* RTKAudio_Malloc(UINT32 size, UINT8** nonCachedAddr, UINT32* phyAddr);
void  RTKAudio_Free(void* pData);

void* RTKAudio_Malloc_Cached(UINT32 size, UINT32* phyAddr);
void RTKAudio_Free_Cached(void* pData);
void RTKAudio_flush_memory(void* ptr, long size);

void add_to_module_list(Base* module_handle);
void delete_from_module_list(Base* module_handle);

void add_id_to_map(Base* module_handle, UINT32 instanceID);
void del_id_from_map(UINT32 instanceID);
Base* map_to_module(UINT32 instanceID);

void IPC_WriteU32(BYTE* des, unsigned long data);
void IPC_WriteU64(BYTE* des, unsigned long long data);
unsigned long IPC_ReadU32(BYTE* src);
unsigned long long IPC_ReadU64(BYTE* src);

void IPC_memcpy(long *des, long *src, int nSample);

#endif /*_RTK_COMMON_*/
