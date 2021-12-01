
#include "hdmi_debug.h"

//Global variable for debugging/sysfs

//------------------------------------------------------------------
// HDMI FLOW PRINT Setting
//------------------------------------------------------------------

unsigned int debugging_flow_print_flag = HDMI_FLOW_PRPINT_AUDIO | HDMI_FLOW_PRPINT_CEDERR | HDMI_FLOW_PRPINT_SCDC | HDMI_FLOW_PRPINT_FRL;    // Default: enable audio
unsigned short g_audio_print_cycle_thd = 600;
unsigned short g_char_bit_print_cycle_cnt_thd = 1000;
unsigned short g_scdc_print_cycle_cnt_thd = 2000;
unsigned short g_pwr_print_cycle_cnt_thd = 2000; // real loop thd =  g_pwr_print_cycle_cnt_thd/Max_port_num

#define AMD_FREESYNC_DEBUG_MESSAGE_TIMEOUT   2000
unsigned short  g_amd_vsdb_debug_thd = AMD_FREESYNC_DEBUG_MESSAGE_TIMEOUT;

//------------------------------------------------------------------
// HDMI sysfs debugging initial setting
//------------------------------------------------------------------
//for lib_hdmi_get_avmute
unsigned char g_hdmi_debug_force_avmute[4] = {0, 0, 0, 0};

//for newbase_hdmi_video_monitor
unsigned char g_hdmi_pixel_monitor_en = 0;
unsigned int  g_hdmi_pixel_monitor_x = 1024;
unsigned int  g_hdmi_pixel_monitor_y = 1024;

//for newbase_hdmi_error_handler
unsigned int g_hdmi_err_det_message_interval = 5000;



