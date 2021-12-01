#ifndef _DEMOD_DEBUG_H_
#define _DEMOD_DEBUG_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <mach/rtk_log.h>
#include <linux/proc_fs.h>
#define DEMOD_PROC_DIR                        "rtkdemod"
#define DEMOD_PROC_ENTRY                      "dbg"
#define DBG_MSG_BUFFER_LENGTH                 65536

typedef enum {
	DEMOD_PROC_SETLOGONOFF,
	DEMOD_PROC_GETLOCK,
	DEMOD_PROC_GETCROFFSET,
	DEMOD_PROC_COUNT,                   /* max number */
} DEMOD_PROC_CMD;


typedef struct _RTK_DEMOD_DEBUG_CMD {
	const char *demod_cmd_str;
	DEMOD_PROC_CMD proc_cmd;
} SRTK_DEMOD_DEBUG_CMD, *PS_RTK_DEMOD_DEBUG_CMD;


ssize_t demod_proc_write(struct file *file, const char __user *buf, size_t count, loff_t *ppos);
ssize_t demod_proc_read(struct file *file, char __user *buf, size_t count, loff_t *ppos);

#if 1
extern unsigned char demod_log_onoff;

#if 1
#define rtd_printk_demod(fmt, args...)  \
{ \
	if (demod_log_onoff) \
	{ \
		rtd_printk( fmt, ##args); \
	} \
}

#else
#define rtd_printk_demod(fmt, args...)  rtd_printk(fmt, ##args)
#endif

#define rtd_printk_demod_force(fmt, args...)  \
{ \
		rtd_printk( fmt, ##args); \
}

#endif

#ifdef __cplusplus
}
#endif

#endif
