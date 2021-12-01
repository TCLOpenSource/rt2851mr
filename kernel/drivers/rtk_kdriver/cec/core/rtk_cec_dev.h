/*Copyright (C) 2007-2013 Realtek Semiconductor Corporation.*/
#ifndef __RTK_CEC_DEV_H__
#define __RTK_CEC_DEV_H__

#include <linux/cdev.h>
#include "rtk_cm_buff.h"
#include "rtk_cec.h"

enum {
    CEC_ENABLE,
    CEC_SET_LOGICAL_ADDRESS,
    CEC_SET_POWER_STATUS,
    CEC_SEND_MESSAGE,
    CEC_RCV_MESSAGE,
    CEC_SET_PHYSICAL_ADDRESS,
    CEC_SET_STANDBY_MODE,
    CEC_SET_RX_MASK,
    CEC_SET_CEC_VERSION,
    CEC_SET_DEVICE_VENDOR_ID,
    CEC_SET_RETRY_NUM,
    CEC_SET_HOTPLUG,

};

typedef struct {
    PBYTES buf;
    unsigned char len;
} cec_msg;


typedef struct {
    struct cdev cdev;
    struct device *device;
} cec_dev;

typedef struct {
    cm_buff_head record_queue;
    struct mutex record_queue_lock;
    cm_buff_head free_queue;
    struct mutex free_queue_lock;
} cec_recorder;

typedef struct {
    unsigned int buf;
    unsigned int flags;
    unsigned char len;

} cec_record_msg;

extern int create_cec_dev_node(cec_device *dev);
extern void remove_cec_dev_node(cec_device *dev);

#endif /*__RTK_CEC_DEV_H__*/
