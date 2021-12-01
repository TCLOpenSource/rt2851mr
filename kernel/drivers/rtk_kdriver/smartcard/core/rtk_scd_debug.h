#ifndef __RTK_SCD_DEBUG_H__
#define __RTK_SCD_DEBUG_H__
#undef SCD_TAG_NAME
#define SCD_TAG_NAME "SCD"
#include <mach/rtk_log.h>

/*-- scd debug messages--*/
//#define CONFIG_SMARTCARD_DBG
//#define CONFIG_SCD_INT_DBG
extern unsigned char smc_log_onoff;
extern unsigned char smc_print_rtx;

#ifdef CONFIG_SMARTCARD_DBG
#define SC_DBG   rtd_printk(KERN_WARNING, SCD_TAG_NAME, " DBG, " fmt, ## args)
#else
#define SC_DBG(args...)
#endif

#ifdef CONFIG_SCD_INT_DBG
#define SC_INT_DBG(fmt, args...)                   rtd_printk(KERN_WARNING, SCD_TAG_NAME, " INT, " fmt, ## args)
#else
#define SC_INT_DBG(args...)
#endif

#define  SC_ERR(fmt, args...)                                      rtd_printk(KERN_ERR, SCD_TAG_NAME, " ERR, " fmt, ## args)

#define SC_PRINT_AWAYS(fmt, args...)   rtd_printk(KERN_WARNING, SCD_TAG_NAME, " AWAYS, " fmt, ## args)

#define SC_INFO(fmt, args...)  \
{   \
  		if(smc_log_onoff)\
      	{\
                 rtd_printk(KERN_WARNING, SCD_TAG_NAME, " Info, " fmt, ## args);\
    	}\
}
#define SC_WARNING(fmt, args...)   \
{\
    	if(smc_log_onoff)\
      	{\
                   rtd_printk(KERN_WARNING, SCD_TAG_NAME, " Warning, " fmt, ## args);\
     	}\
}

#define SC_ATR_DBG(fmt, args...)\
{\
   		if(smc_log_onoff)\
    	{\
                  rtd_printk(KERN_WARNING, SCD_TAG_NAME, " " fmt, ## args);\
  		}\
}

#define SC_PRINTK(fmt, args...) \
{\
             if(smc_log_onoff)\
             {\
                  rtd_printk(KERN_WARNING, SCD_TAG_NAME, fmt, ## args);\
             }\
}

extern void scd_dump_data(const char* str, unsigned char* p_data, unsigned int len);

#define SC_DUMP_TX_DATA(data, len)      do { if (smc_print_rtx) scd_dump_data("TX", data, len); } while(0)
#define SC_DUMP_RX_DATA(data, len)      do { if (smc_print_rtx) scd_dump_data("RX", data, len); } while(0)

#endif /*__SCD_DEBUG_H__*/
