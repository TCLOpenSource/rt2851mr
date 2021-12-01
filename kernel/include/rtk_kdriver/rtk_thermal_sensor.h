#ifndef __ARCH_ARM_RTK_THERMAL_H
#define __ARCH_ARM_RTK_THERMAL_H
#include <linux/kref.h>
#include <linux/list.h>
#include <linux/platform_device.h>
void init_rtk_thermal_sensor(void);
void exit_rtk_thermal_sensor(void);
int rtk_get_thermal_value(void);
void rtk_thermal_sensor_enable(int enable);
unsigned int rtk_get_thermal_reg(void);
int rtk_get_thermal_value_ext(void);
int rtk_thermal_trigger_low(int temp_low);
int rtk_thermal_trigger_high(int temp_high);
int rtk_thermal_int_status(void);

#define THERMAL_DBG(fmt, args...)               rtd_printk(KERN_DEBUG, "THERMAL","[DBG] " fmt, ## args)
#define THERMAL_INFO(fmt, args...)              rtd_printk(KERN_INFO , "THERMAL",  "[Info] " fmt, ## args)
#define THERMAL_WARNING(fmt, args...)      rtd_printk(KERN_WARNING , "THERMAL", "[Warn] " fmt, ## args)
#define THERMAL_ERR(fmt, args...)               rtd_printk(KERN_ERR , "THERMAL", "[Err] " fmt, ## args)

#ifdef THERMAL_DRIVER_GET_FACTORY
#define THROTTLE_LINE_MAX  10
#define THROTTLE_CONTENT_MAX  8
typedef enum
{
        MODULE_NAME_KEY_E = 0,
        THROTTLE_ENABLE_KEY_E,
        THROTTLE_0_KEY_E,
        THROTTLE_1_KEY_E,
        THROTTLE_2_KEY_E,
        THROTTLE_3_KEY_E,
        THROTTLE_MAX_KEY_E,
}THROTTLE_KEY_E;

typedef struct
{
        char module_name_content[THROTTLE_CONTENT_MAX];
        int content[THROTTLE_MAX_KEY_E-1];
}THROTTLE_CONTENT_T;

typedef struct
{
        unsigned int magic_num;
        int check_sum;
        bool valid;
        char reserve1;
        char reserve2;
        char reserve3;
        THROTTLE_CONTENT_T throttle_content[THROTTLE_LINE_MAX];
}THROTTLE_RESOURC_T;
#endif
#endif
