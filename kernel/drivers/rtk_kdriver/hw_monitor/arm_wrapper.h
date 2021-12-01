#ifndef __ARM_WRAPPER_H__
#define __ARM_WRAPPER_H__

#include "rtk_kdriver/rtk_hw_monitor.h"

// SET 4
#define SCPU_MEM_TRASH_DBG_START_0 0xB805C020
#define SCPU_MEM_TRASH_DBG_END_0 0xB805C030
#define SCPU_MEM_TRASH_DBG_CTRL_0 0xB805C040

#define SCPU_MEM_TRASH_DBG_INT 0xB805C050
#define SCPU_MEM_TRASH_DBG_ADDR 0xB805C054
#define SCPU_MEM_TRASH_DBG_RW 0xB805C058

#define WRAPPER_NUM 4

#define WRAP_TAG "WRAP"

#define ARMWRAP_DBG(fmt, args...) rtd_printk(KERN_DEBUG, WRAP_TAG, fmt, ## args)
#define ARMWRAP_INFO(fmt, args...) rtd_printk(KERN_INFO, WRAP_TAG, fmt, ## args)
#define ARMWRAP_ERR(fmt, args...) rtd_printk(KERN_ERR, WRAP_TAG, fmt, ## args)

typedef enum
{
    WRAPPER_READ_WRITE = HWM_RW,
    WRAPPER_READ = HWM_R,
    WRAPPER_WRTIE = HWM_W,
}WRAPPER_RW;

#endif /* __ARM_WRAPPER_H__ */

