#ifndef RTKDELIVERY_DEBUG_H
#define RTKDELIVERY_DEBUG_H

#include <linux/types.h>
#include <linux/printk.h>
#include <mach/rtk_log.h>
#include "rtkdelivery.h"
#define DELIVERY_TAG_NAME "DELI"
/* FOR DEBUG*/
#define DGB_COLOR_RED_WHITE      "\033[1;31;47m"
#define DGB_COLOR_RED            "\033[1;31m"
#define DGB_COLOR_GREEN          "\033[1;32m"
#define DGB_COLOR_YELLOW         "\033[1;33m"
#define DGB_COLOR_BLUE           "\033[1;34m"
#define DGB_COLOR_PURPLE         "\033[1;35m"
#define DGB_COLOR_CYAN           "\033[1;36m"
#define DGB_COLOR_NONE           "\033[m"
#define DGB_COLOR_NONE_N         "\033[m \n"

enum {
	DELIVERY_LOGLEVEL_DEBUG,       /* debug-level messages */
	DELIVERY_LOGLEVEL_INFO       /* informational */
};
#define CHANNEL_UNKNOWN 0xFF
#define delivery_common_print(level, ch, fmt, ...)  \
	{if (ch<DELIVERY_TP_NUM){rtd_printk(level, DELIVERY_TAG_NAME"-%d", fmt, ch, ##__VA_ARGS__); } \
	else{rtd_printk(level, DELIVERY_TAG_NAME, fmt, ##__VA_ARGS__); }}

#define delivery_emerg(ch, fmt, ...)			delivery_common_print(KERN_EMERG, 	ch, fmt, ##__VA_ARGS__);
#define delivery_alert(ch, fmt, ...)			delivery_common_print(KERN_ALERT,	ch, fmt, ##__VA_ARGS__);
#define delivery_crit(ch, fmt, ...)			delivery_common_print(KERN_CRIT,		ch, fmt, ##__VA_ARGS__);
#define delivery_err(ch, fmt, ...)			delivery_common_print(KERN_ERR,		ch, fmt, ##__VA_ARGS__);
#define delivery_warn(ch, fmt, ...)			delivery_common_print(KERN_WARNING,	ch, fmt, ##__VA_ARGS__);
#define delivery_notice(ch, fmt, ...)		delivery_common_print(KERN_NOTICE,	ch, fmt, ##__VA_ARGS__);
#define delivery_info(ch, fmt, ...)    		delivery_common_print(KERN_INFO,		ch, fmt, ##__VA_ARGS__);
#define delivery_dbg(ch, fmt, ...)     		delivery_common_print(KERN_DEBUG,	ch, fmt, ##__VA_ARGS__);

enum DELIVERY_LOG_MASK_BIT{
	DELIVERY_LOG_MASK_BIT_0 = 1 << 0,
		DELIVERY_FUNCTIN_CALLER=DELIVERY_LOG_MASK_BIT_0,
	DELIVERY_LOG_MASK_BIT_1 = 1 << 1,
		DELIVERY_NOMAL_DEBUG 	= DELIVERY_LOG_MASK_BIT_1,
	DELIVERY_LOG_MASK_BIT_2 = 1 << 2,
		DELIVERY_BUFFER_DEBUG	= DELIVERY_LOG_MASK_BIT_2,
	DELIVERY_LOG_MASK_BIT_3 = 1 << 3,
		DELIVERY_NOTICE_PRINT = DELIVERY_LOG_MASK_BIT_3,// use this level to print, nomal log and mask log  same time,
};
#define delivery_mask_print(BIT, ch, fmt, ...)	\
	{if ((BIT) & rtkdelivery_dbg_log_mask) {delivery_emerg(ch, fmt, ##__VA_ARGS__);} \
	else {if ((BIT) & DELIVERY_NOTICE_PRINT)		delivery_notice(ch, fmt, ##__VA_ARGS__); }}
#define delivery_function_call(ch) 			{delivery_mask_print(DELIVERY_FUNCTIN_CALLER, ch, "func %s, line %d\n", __func__, __LINE__)}

extern unsigned long rtkdelivery_dbg_log_mask;

bool delivery_init_debug_proc(void);
void delivery_uninit_debug_proc(void);
#endif /* RTKDELIVERY_DEBUG_H */
