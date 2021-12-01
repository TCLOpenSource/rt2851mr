#ifndef __RTK_RNG_DBG_H__
#define __RTK_RNG_DBG_H__
#include <mach/rtk_log.h>

#define rng_notice(fmt, args...)      rtd_printk( KERN_NOTICE , "rng", fmt , ## args)
#define rng_warning(fmt, args...)   rtd_printk( KERN_WARNING , "rng", fmt , ## args)
#define rng_err(fmt, args...)           rtd_printk( KERN_ERR , "rng", fmt , ## args)

#endif