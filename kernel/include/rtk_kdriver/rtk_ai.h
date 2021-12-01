#ifndef _RTK_AI_H_
#define _RTK_AI_H_

/************************************************************************
 *  Include files
 ************************************************************************/
#include <ioctrl/ai/ai_cmd_id.h>
#include <mach/rtk_log.h>

/************************************************************************
 *  Definitions
 ************************************************************************/
#define AI_DEBUG(fmt, args...) \
{ \
        if (0)  \
        {   \
                rtd_printk(KERN_NOTICE, "AI", fmt, ## args); \
        }   \
}
#define AI_INFO(fmt, args...)   rtd_printk(KERN_INFO , "AI" , "[Info]" fmt, ## args)
#define AI_WARN(fmt, args...)   rtd_printk(KERN_WARNING , "AI" , "[Warn]" fmt, ## args)
#define AI_ERROR(fmt, args...)  rtd_printk(KERN_ERR , "AI" , "[Error]" fmt, ## args)

#ifndef TRUE
#define TRUE                                    (1)
#endif

#ifndef FALSE
#define FALSE                                   (0)
#endif

#ifndef BOOL
#define BOOL                        bool
#endif

bool rtk_ai_mc_init(void);
BOOL rtk_ai_mc_unInit(void);
BOOL rtk_ai_mc_registModel(AI_PROCESS_INFO *info,int handle);
BOOL rtk_ai_mc_unRegistModel(int handle);
BOOL rtk_ai_mc_getShareMem(unsigned int *phy_addr);
BOOL rtk_ai_mc_getGrant(int handle,AI_HW_INDEX index);
BOOL rtk_ai_mc_releaseGrant(int handle,AI_HW_INDEX index);
BOOL rtk_ai_mc_getCurModVpqCtrl(AI_MC_VPQ_INDEX *index);
int rtk_ai_mc_getNextHandle(void);
BOOL rtk_ai_mc_crashRelease(int handle);
BOOL rtk_ai_mc_backup(void);
BOOL rtk_ai_mc_restore(void);

BOOL rtk_ai_audio_init(void);
BOOL rtk_ai_audio_unInit(void);

#endif	/* _RTK_AI_H_ */
