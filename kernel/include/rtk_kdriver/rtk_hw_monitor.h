#ifndef __RTK_HW_MONITOR_H__
#define __RTK_HW_MONITOR_H__

#define VIRT_MODULE_SCPU 0x00000100
#define VIRT_MODULE_NULL 0xffffffff

#define FRED_START "\033[1;31;40m"
#define FGREEN_START "\033[1;32;40m"
#define FYELLOW_START "\033[1;33;40m"
#define FBLUE_START "\033[1;34;40m"
#define FCOLOR_END "\033[0m"

typedef enum
{
    HWM_RW  = 0,
    HWM_R ,
    HWM_W ,
    HWM_PERMISION_INVALID
}HWM_PERMISSION;

typedef enum
{
    HWM_MODE_NULL = 0,
    HWM_MODE_1 ,
    HWM_MODE_2 ,
    HWM_MODE_3 ,
    HWM_MODE_INVALID
}HWM_MODE;

typedef struct hwm_t
{
        unsigned int start; //monitor range >= start
        unsigned int end; //monitor range < ( end(64B Align) + 64B )
        unsigned int ip[8]; // DC_SYS IP and CPUs
        unsigned char ip_permission[8]; // r/w/rw permission
        unsigned char mode; //mode 1,2,3
        unsigned char keep_go; //keep go or not when trash, 0:panic for SCPU; 1:non-panic for SCPU
}hwm_t;

typedef struct arm_wrapper_t
{
        unsigned int start; //monitor range >= start
        unsigned int end; //monitor range < ( end(64B Align) + 64B )
        int id;
        unsigned int permission;
}arm_wrapper_t;

#define HWM_TAG "HWM"
#define HWM_WARNING(fmt, args...) rtd_printk(KERN_WARNING, HWM_TAG, fmt, ## args)
#define HWM_ERR(fmt, args...) rtd_printk(KERN_ERR, HWM_TAG, fmt, ## args)
#define HWM_DBG(fmt, args...) rtd_printk(KERN_DEBUG, HWM_TAG, fmt, ## args)

#define HWM_DVP(fmt, args...) rtd_printk(KERN_EMERG, HWM_TAG, fmt, ## args) //develop phase api

#define DCMT_DISABLE_TIP "DCMT is not enabled! (CONFIG_RTK_KDRV_DC_MEMORY_TRASH_DETCTER)"
#define ARM_WRAPPER_DISABLE_TIP "ARM_WRAPPER is not enabled! (CONFIG_REALTEK_ARM_WRAPPER)"
#define SB2_DISABLE_TIP "SB2 is not enabled! (CONFIG_RTK_KDRV_SB2)"

#endif /*__RTK_HW_MONITOR_H__*/
