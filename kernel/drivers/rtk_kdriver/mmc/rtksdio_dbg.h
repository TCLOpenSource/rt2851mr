#ifndef __RTKSDIO_DBG_H
#define __RTKSDIO_DBG_H


#include <mach/rtk_log.h>
#define CR_NAME "CARD"


/************************************************************************
 *  rtk log define
 ************************************************************************/
#define CR_EMERG(fmt, args...)      \
	rtd_printk( KERN_EMERG, CR_NAME, fmt , ## args)

#define CR_ALERT(fmt, args...)   \
	rtd_printk( KERN_ALERT, CR_NAME, fmt , ## args)

#define CR_CRIT(fmt, args...)   \
	rtd_printk( KERN_CRIT, CR_NAME, fmt , ## args)

#define CR_ERR(fmt, args...)   \
	rtd_printk( KERN_ERR, CR_NAME, fmt , ## args)

#define CR_WARNING(fmt, args...)   \
	rtd_printk( KERN_WARNING, CR_NAME, fmt , ## args)

#define CR_NOTICE(fmt, args...)   \
	rtd_printk( KERN_NOTICE, CR_NAME, fmt , ## args)

#define CR_INFO(fmt, args...)   \
	rtd_printk( KERN_INFO, CR_NAME, fmt , ## args)

#define CR_DEBUG(fmt, args...)   \
	rtd_printk( KERN_DEBUG, CR_NAME, fmt , ## args)




#endif
