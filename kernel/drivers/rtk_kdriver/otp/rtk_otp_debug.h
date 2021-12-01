#ifndef __RTK_OTP_DEBUG_H__
#define __RTK_OTP_DEBUG_H__
#include <mach/rtk_log.h>

#ifdef OTP_DBG_EN
#define OTP_DBG(fmt, args...)           rtd_printk(KERN_DEBUG, "OTP", "[DBG] " fmt, ##args)
#else
#define OTP_DBG(fmt, args...)
#endif
#define OTP_WARNING(fmt, args...)       rtd_printk( KERN_WARNING , "OTP", "[Warn] " fmt, ##args)

#endif
