/*Copyright (C) 2007-2013 Realtek Semiconductor Corporation.*/
#ifndef __RTK_CEC_DEBUG_H__
#define __RTK_CEC_DEBUG_H__

#include <mach/rtk_log.h>

#undef  TAG_NAME
#define TAG_NAME    "CEC"

extern unsigned int g_cec_debug_enable;

#define cec_dbg(fmt, args...)   if(unlikely(g_cec_debug_enable))  \
                                                        rtd_printk(KERN_INFO, "CEC","[Info] " fmt, ## args)
#define cec_rx_dbg(fmt, args...)   if(unlikely(g_cec_debug_enable))  \
                                                        rtd_printk(KERN_DEBUG, "CEC","[RX DBG] " fmt, ## args)
#define cec_tx_dbg(fmt, args...)   if(unlikely(g_cec_debug_enable))  \
                                                        rtd_printk(KERN_DEBUG, "CEC","[TX DBG] " fmt, ## args)

#define cec_info(fmt, args...)      rtd_printk( KERN_INFO    , "CEC", "[Info] "  fmt, ## args)
#define cec_warn(fmt, args...)      rtd_printk( KERN_WARNING , "CEC", "[Warn] "  fmt, ## args)
#define cec_error(fmt, args...)     rtd_printk( KERN_ERR     , "CEC", "[Error] " fmt, ## args)

#endif /*__RTK_CEC_DEBUG_H__*/
