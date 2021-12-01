#ifndef __RTK_AMP_INTERFACE_H__
#define __RTK_AMP_INTERFACE_H__
#include "alc1310.h"
#include "alc1312.h"
#include "ad82010.h"
#include "tas5751.h"
#include "tas5707.h"
#include "tas5711.h"
#include "rtk_amp_device_id_table.h"


#include <mach/rtk_log.h>
#include <linux/printk.h>

#define AMP_INFO(fmt, args...)  rtd_printk(KERN_DEBUG, "AMP" , fmt, ## args)
#define AMP_WARN(fmt, args...)  rtd_printk(KERN_WARNING, "AMP" , fmt, ## args)
#define AMP_ERR(fmt, args...)   rtd_printk(KERN_ERR  , "AMP" , fmt, ## args)

#define AMP_ADDR_NULL 0
#define AMP_SEL_NULL 0

#define AMP_MUTE_ON     (1)
#define AMP_MUTE_OFF    (0)

struct amp_controller {
    int amp_i2c_id;
    int sel_index;
    int slave_addr;
    int addr_size;
    int data_size;
    char name[32];
    void (*ops)(int amp_i2c_id, unsigned short slave_addr);
    int (*param_get)(unsigned char *reg, int amp_i2c_id, unsigned short slave_addr);
    int (*param_set)(unsigned char *data_wr, int amp_i2c_id, unsigned short slave_addr);
    int (*mute_set)(int on_off, int amp_i2c_id, unsigned short slave_addr);
    int (*dump_all)(const char *buf, int amp_i2c_id, unsigned short slave_addr);
    void (*amp_reset)(void);
};


int rtk_amp_i2c_id(void);
int amp_get_addr(void);

#endif
