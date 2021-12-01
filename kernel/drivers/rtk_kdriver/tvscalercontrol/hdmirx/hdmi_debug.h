#ifndef __HDMI_DEBUG_H__
#define __HDMI_DEBUG_H__

#include <mach/rtk_log.h>

#define HDMI_RX_DBG_EN

#ifdef HDMI_RX_DBG_EN
    #define HDMI_EMG(fmt, args...)           rtd_printk(KERN_EMERG,  "[HDMI][L0]", fmt, ##args)
    #define HDMI_ALT(fmt, args...)           rtd_printk(KERN_ALERT,  "[HDMI][L1]", fmt, ##args)
    #define HDMI_CRIT(fmt, args...)          rtd_printk(KERN_CRIT,   "[HDMI][L2]", fmt, ##args)
    #define HDMI_ERR(fmt, args...)           rtd_printk(KERN_ERR,    "[HDMI][L3]", fmt, ##args)
    #define HDMI_WARN(fmt, args...)          rtd_printk(KERN_WARNING,"[HDMI][L4]", fmt, ##args)
    #define HDMI_NOTICE(fmt, args...)        rtd_printk(KERN_NOTICE, "[HDMI][L5]", fmt, ##args)
    #define HDMI_INFO(fmt, args...)          rtd_printk(KERN_INFO,   "[HDMI][L6]", fmt, ##args)
    #define HDMI_DBG(fmt, args...)           rtd_printk(KERN_DEBUG,  "[HDMI][L7]", fmt, ##args)
    #define HDMI_PRINTF(fmt, args...)        rtd_printk(KERN_NOTICE, "[HDMI][L5]", fmt, ##args)
#else
    #define HDMI_EMG(fmt, args...)
    #define HDMI_ALT(fmt, args...)
    #define HDMI_CRIT(fmt, args...)
    #define HDMI_ERR(fmt, args...)
    #define HDMI_WARN(fmt, args...)
    #define HDMI_NOTICE(fmt, args...)
    #define HDMI_INFO(fmt, args...)
    #define HDMI_DBG(fmt, args...)
    #define HDMI_PRINTF(fmt, args...)
#endif

enum
{
    HDMI_FLOW_PRPINT_HDCP = (0x01<<0),
    HDMI_FLOW_PRPINT_AUDIO = (0x01<<1),
    HDMI_FLOW_PRPINT_INFOFRAME = (0x01<<2),
    HDMI_FLOW_PRPINT_CEDERR = (0x01<<3),
    HDMI_FLOW_PRPINT_SCDC = (0x01<<4),
    HDMI_FLOW_PRPINT_FRL = (0x01<<5),    // HDMI2.1 Link Training
    HDMI_FLOW_PRPINT_HD21 = (0x01<<6),    // HDMI2.1 flow
    HDMI_FLOW_PRPINT_VFE = (0x01<<7),    // for iocrtl debugging
    HDMI_FLOW_PRPINT_PWR = (0x01<<8),    // for power saving debugging
    HDMI_FLOW_PRPINT_AMDFREESYNC = (0x01<<9),    // for AMD freesync debugging
};

// HDMI debugging flow print control
extern unsigned int debugging_flow_print_flag;

#define HDCP_FLOW_PRINT_FLAG                 ((debugging_flow_print_flag &  HDMI_FLOW_PRPINT_HDCP) >> 0)
#define SET_HDCP_FLOW_PRINT_FLAG()           (debugging_flow_print_flag |= HDMI_FLOW_PRPINT_HDCP)
#define CLR_HDCP_FLOW_PRINT_FLAG()           (debugging_flow_print_flag &= ~HDMI_FLOW_PRPINT_HDCP)
#define HDCP_FLOW_PRINTF(fmt, args...)       if(HDCP_FLOW_PRINT_FLAG)  rtd_printk(KERN_NOTICE,  "[HDMI][HDCP][FLOW]", fmt, ##args)   
#define HDCP_INFO(fmt, args...)              rtd_printk(KERN_INFO,   "[HDMI][HDCP][L6]", fmt, ##args)
#define HDCP_WARN(fmt, args...)              rtd_printk(KERN_WARNING,"[HDMI][HDCP][L4]", fmt, ##args)

#define AUDIO_FLOW_PRINT_FLAG                ((debugging_flow_print_flag &  HDMI_FLOW_PRPINT_AUDIO) >> 1)
#define SET_AUDIO_FLOW_PRINT_FLAG()          (debugging_flow_print_flag |=  HDMI_FLOW_PRPINT_AUDIO)
#define CLR_AUDIO_FLOW_PRINT_FLAG()          (debugging_flow_print_flag &= ~HDMI_FLOW_PRPINT_AUDIO)
#define AUDIO_FLOW_PRINTF(fmt, args...)      if(AUDIO_FLOW_PRINT_FLAG)  rtd_printk(KERN_NOTICE,  "[HDMI][AUDIOF]", fmt, ##args)   
extern unsigned short g_audio_print_cycle_thd;

#define INFOFRAME_FLOW_PRINT_FLAG            ((debugging_flow_print_flag &  HDMI_FLOW_PRPINT_INFOFRAME) >> 2)
#define SET_INFOFRAME_FLOW_PRINT_FLAG()      (debugging_flow_print_flag |=HDMI_FLOW_PRPINT_INFOFRAME)
#define CLR_INFOFRAME_FLOW_PRINT_FLAG()      (debugging_flow_print_flag &=~HDMI_FLOW_PRPINT_INFOFRAME)
#define INFOFRAME_FLOW_PRINTF(fmt, args...)  if(INFOFRAME_FLOW_PRINT_FLAG) rtd_printk(KERN_NOTICE,  "[HDMI][INFOF]", fmt, ##args)   

#define CEDERR_FLOW_PRINT_FLAG            ((debugging_flow_print_flag &  HDMI_FLOW_PRPINT_CEDERR) >> 3)
#define SET_CEDERR_FLOW_PRINT_FLAG()      (debugging_flow_print_flag |=HDMI_FLOW_PRPINT_CEDERR)
#define CLR_CEDERR_FLOW_PRINT_FLAG()      (debugging_flow_print_flag &=~HDMI_FLOW_PRPINT_CEDERR)
#define CEDERR_FLOW_PRINTF(fmt, args...)  if(CEDERR_FLOW_PRINT_FLAG) rtd_printk(KERN_NOTICE,  "[HDMI][CEDF]", fmt, ##args) 
extern unsigned short g_char_bit_print_cycle_cnt_thd;

#define SCDC_FLOW_PRINT_FLAG            ((debugging_flow_print_flag &  HDMI_FLOW_PRPINT_SCDC) >> 4)
#define SET_SCDC_FLOW_PRINT_FLAG()      (debugging_flow_print_flag |=HDMI_FLOW_PRPINT_SCDC)
#define CLR_SCDC_FLOW_PRINT_FLAG()      (debugging_flow_print_flag &=~HDMI_FLOW_PRPINT_SCDC)
#define SCDC_FLOW_PRINTF(fmt, args...)  if(SCDC_FLOW_PRINT_FLAG) rtd_printk(KERN_NOTICE,  "[HDMI][SCDCF]", fmt, ##args) 
extern unsigned short g_scdc_print_cycle_cnt_thd;

#define PWR_FLOW_PRINT_FLAG            ((debugging_flow_print_flag &  HDMI_FLOW_PRPINT_PWR) >> 8)
#define SET_PWR_FLOW_PRINT_FLAG()      (debugging_flow_print_flag |=HDMI_FLOW_PRPINT_PWR)
#define CLR_PWR_FLOW_PRINT_FLAG()      (debugging_flow_print_flag &=~HDMI_FLOW_PRPINT_PWR)
#define PWR_FLOW_PRINTF(fmt, args...)  if(PWR_FLOW_PRINT_FLAG) rtd_printk(KERN_NOTICE,  "[HDMI][PWR]", fmt, ##args) 
#define PWR_FLOW_INFO(fmt, args...)  if(PWR_FLOW_PRINT_FLAG) rtd_printk(KERN_INFO,  "[HDMI][PWR][L6]", fmt, ##args) 
extern unsigned short g_pwr_print_cycle_cnt_thd;

#define PWR_EMG(fmt, args...)  rtd_printk(KERN_EMERG,  "[HDMI][PWR][L0]", fmt, ##args) 

#define AMDFREESYNC_FLOW_PRINT_FLAG            ((debugging_flow_print_flag &  HDMI_FLOW_PRPINT_AMDFREESYNC) >> 8)
#define SET_AMDFREESYNC_FLOW_PRINT_FLAG()      (debugging_flow_print_flag |=HDMI_FLOW_PRPINT_AMDFREESYNC)
#define CLR_AMDFREESYNC_FLOW_PRINT_FLAG()      (debugging_flow_print_flag &=~HDMI_FLOW_PRPINT_AMDFREESYNC)
#define AMDFREESYNC_FLOW_PRINTF(fmt, args...)  if(AMDFREESYNC_FLOW_PRINT_FLAG) rtd_printk(KERN_EMERG,  "[HDMI][AMD]", fmt, ##args) 
extern unsigned short g_amd_vsdb_debug_thd;

//------------------------------------------------------------------
// HDMI2.1
//------------------------------------------------------------------
#define FRL_FLOW_PRINT_FLAG            ((debugging_flow_print_flag &  HDMI_FLOW_PRPINT_FRL) >> 5)    //for data align issue debugging. for EQ/disaprity error debugging
#define SET_FRL_FLOW_PRINT_FLAG()      (debugging_flow_print_flag |=HDMI_FLOW_PRPINT_FRL)
#define CLR_FRL_FLOW_PRINT_FLAG()      (debugging_flow_print_flag &=~HDMI_FLOW_PRPINT_FRL)
#define FRL_DBG(fmt, args...)  if(FRL_FLOW_PRINT_FLAG) rtd_printk(KERN_DEBUG,  "[HDMI][HD21-FRL][L7]", fmt, ##args)
#define FRL_INFO(fmt, args...)  if(FRL_FLOW_PRINT_FLAG) rtd_printk(KERN_INFO,  "[HDMI][HD21-FRL][L6]", fmt, ##args)
#define FRL_WARN(fmt, args...)  if(FRL_FLOW_PRINT_FLAG) rtd_printk(KERN_WARNING,  "[HDMI][HD21-FRL][L4]", fmt, ##args)

#define HD21_FLOW_PRINT_FLAG            ((debugging_flow_print_flag &  HDMI_FLOW_PRPINT_HD21) >> 6)
#define SET_HD21_FLOW_PRINT_FLAG()      (debugging_flow_print_flag |=HDMI_FLOW_PRPINT_HD21)
#define CLR_HD21_FLOW_PRINT_FLAG()      (debugging_flow_print_flag &=~HDMI_FLOW_PRPINT_HD21)
#define HD21_DBG(fmt, args...)  if(HD21_FLOW_PRINT_FLAG) rtd_printk(KERN_DEBUG,  "[HDMI][HD21][L7]", fmt, ##args)
#define HD21_INFO(fmt, args...)  if(HD21_FLOW_PRINT_FLAG) rtd_printk(KERN_INFO,  "[HDMI][HD21][L6]", fmt, ##args)
#define HD21_WARN(fmt, args...)  if(HD21_FLOW_PRINT_FLAG) rtd_printk(KERN_WARNING,  "[HDMI][HD21][L4]", fmt, ##args)

#define VFE_FLOW_PRINT_FLAG            ((debugging_flow_print_flag &  HDMI_FLOW_PRPINT_VFE) >> 7)
#define SET_VFE_FLOW_PRINT_FLAG()      (debugging_flow_print_flag |=HDMI_FLOW_PRPINT_VFE)
#define CLR_VFE_FLOW_PRINT_FLAG()      (debugging_flow_print_flag &=~HDMI_FLOW_PRPINT_VFE)
#define VFE_FLOW_PRINTF(fmt, args...)  if(VFE_FLOW_PRINT_FLAG) rtd_printk(KERN_NOTICE,  "[HDMI][VFEF]", fmt, ##args) 


#define HDMI_OFMS_INFO(fmt, args...)              rtd_printk(KERN_INFO,   "[HDMI][OFMS][L6]", fmt, ##args)
#define HDMI_OFMS_WARN(fmt, args...)              rtd_printk(KERN_WARNING,  "[HDMI][OFMS][L4]", fmt, ##args)

///////////////////////////////////////////////////////////////////
//#define HDMI_EDID_DBG_EN            // enable HDMI EDID debug message

#define HDMI_EDID_EMG(fmt, args...)     rtd_printk(KERN_EMERG,  "[HDMI][EDID][L0]", fmt, ##args)
#define HDMI_EDID_ERR(fmt, args...)     rtd_printk(KERN_ERR,  "[HDMI][EDID][L3]", fmt, ##args)
#define HDMI_EDID_INFO(fmt, args...)    rtd_printk(KERN_INFO,  "[HDMI][EDID][L6]", fmt, ##args)

#ifdef HDMI_EDID_DBG_EN
#include <mach/rtk_log.h>
#define HDMI_EDID_DBG(fmt, args...)     rtd_printk(KERN_DEBUG,  "[HDMI][EDID][L7]", fmt, ##args)
#else
#define HDMI_EDID_DBG(fmt, args...)     do {} while(0)     
#endif

#define ERP_WARN(fmt, args...)    rtd_printk(KERN_WARNING,  "[HDMI][ERP][L4]", fmt, ##args)
#define ERP_INFO(fmt, args...)    rtd_printk(KERN_INFO,  "[HDMI][ERP][L6]", fmt, ##args)

#ifdef HDMI_ERP_DBG_EN
#define ERP_DBG(fmt, args...)     rtd_printk(KERN_DEBUG,  "[HDMI][ERP][L7]", fmt, ##args)
#else
#define ERP_DBG(fmt, args...)     do {} while(0)
#endif
//------------------------------------------------------------------
//hdmi-sysfs debug_ctrl
//------------------------------------------------------------------

extern unsigned char g_hdmi_debug_force_avmute[4];

extern unsigned char g_hdmi_pixel_monitor_en;
extern unsigned int g_hdmi_pixel_monitor_x;
extern unsigned int g_hdmi_pixel_monitor_y;

extern unsigned int g_hdmi_err_det_message_interval;
#endif // __HDMI_DEBUG_H__

