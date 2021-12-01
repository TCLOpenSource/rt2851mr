#include <linux/syscalls.h>
#include <linux/miscdevice.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <mach/io.h>
#include <rtk_kdriver/tvscalercontrol/hdmirx/hdmifun.h>
#include <rtk_kdriver/tvscalercontrol/hdmirx/hdmi_arc.h>
#include <rtk_kdriver/tvscalercontrol/hdmirx/hdmi_vfe.h>
#include "hdmiPlatform.h"
#include "hdmiInternal.h"
#include "hdmi_hdcp.h"
#include "hdmi_debug.h"
#include "cea_861.h"
#include "hdmi_edid.h"
#include "hdmi_table.h"
#include "hdmi_vfe_config.h"
#include "hdmi_scdc.h"
#include "hdmi_phy_dfe.h"

#ifdef CONFIG_HDMI_RX_BUILT_IN_TEST
#include "bist/hdmi_test.h"
#endif

#define HDMI_DRV_VERSION    "20190927.0"

extern HDMI_PORT_INFO_T hdmi_rx[HDMI_PORT_TOTAL_NUM];
extern unsigned char get_hdmi_vrr_framerate(unsigned short *framerate);    //for hdmi_vtem_info_show 
extern unsigned int g_hdmi_hdcp2_wait_msg_timeout;


static unsigned char current_max_frl_rate= 0; // 0 =TMDS , 1= FRL




extern unsigned int hdmi_ps_mode;
extern unsigned int hdmi_ps_phy_stable_time; 
extern unsigned int hdmi_bypass_phy_ps_mode;
extern unsigned int hdmi_power_saving_enable;
extern unsigned int hdmi_power_saving_connected_port_if_not_hdmi_source;
extern unsigned int hdmi_exit_power_saving_debug;
extern unsigned int hdmi_power_saving_test_mode;
extern unsigned int hdmi_power_saving_wakeup_remeasure;
static unsigned char m_sys_specified_port = HAL_VFE_HDMI_CURRENT_PORT;


#ifndef CONFIG_SUPPORT_SCALER
#define get_hdmi_vrr_framerate(p_curr_freq)       (VRR_FRAMERATE_DISABLE)
#endif 




static unsigned char m_flow_cfg_page = 0;    // for flow_cfg page

//===========================================================================
// Func : hdmi_attr_show
//===========================================================================
static ssize_t hdmi_show_status(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;
    unsigned char port = newbase_hdmi_get_current_display_port();
    unsigned char video_state = newbase_hdmi_get_video_state(port);
    unsigned char audio_state = newbase_hdmi_audio_get_current_status();
    HDMI_TIMING_T timing;
    HDMIRX_PHY_STRUCT_T* p_phy_st;
#ifdef CONFIG_SUPPORT_SCALER
    unsigned char allm_mode = 0;
#endif
    unsigned char current_ch = 0;
    unsigned char current_ddc_ch = 0;
    unsigned char ch_to_port[4] = {0xF, 0xF, 0xF, 0xF};
    unsigned char i = 0;

    /*----------------------------------------------------
    HDMI STATUS
    Port Status : Current = 1, HPD Status = 1/0/0/0
    TMDS Status : TMDS STS=0xf8, OUT=0x8, CTL=0x8
    VIDEO FSM   : Wait Sync (0)
    AUDIO FSM   : Wait Sync (0)
    HDCP  Status: Enabled
    ------------------------------------------------------*/

    n = scnprintf(ptr, count, "---------------- HDMI STATUS (ver: %s) --------------\n", HDMI_DRV_VERSION);
    ptr+=n; count-=n;

    //---------------------------------------
    // UI/CH/Port Mapping Status
    //---------------------------------------
    hdmi_vfe_get_hdmi_channel(port, &current_ch);
    newbase_hdmi_ddc_channel_status(port, &current_ddc_ch);

    n = scnprintf(ptr, count, "Current UI HDMI%d (ch/port: %d/%d), DDC ch:%d\n",
    (current_ch+1),
    current_ch,
    port,
    current_ddc_ch);
    ptr+=n; count-=n;    

    n = scnprintf(ptr, count, "HDMI UI/ch/Port Mapping:\n");
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "UI: \t");
    ptr+=n; count-=n;
    for(i = 0; i<4; i++)
    {
        if( i == current_ch)
        {
            n = scnprintf(ptr, count, "%d*\t", (i+1));
            ptr+=n; count-=n;
        }
        else
        {
            n = scnprintf(ptr, count, "%d\t", (i+1));
            ptr+=n; count-=n;
        }
    }
    n = scnprintf(ptr, count, "\n");
    ptr+=n; count-=n;

    n = scnprintf(ptr, count, "ch:\t 0\t 1\t 2\t 3\n");
    ptr+=n; count-=n;
    for(i = 0;i<HDMI_RX_PORT_MAX_NUM;i++)
    {
        if (hdmi_vfe_get_hdmi_port(i, &ch_to_port[i])!=0)
            ch_to_port[i] = 0xF;
    }
    n = scnprintf(ptr, count, "Port:\t %d\t %d\t %d\t %d\n",
        ch_to_port[0],
        ch_to_port[1],
        ch_to_port[2],
        ch_to_port[3]);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "5V:\t %d\t %d\t %d\t %d\n",
        newbase_hdmi_get_5v_state(ch_to_port[0]),
        newbase_hdmi_get_5v_state(ch_to_port[1]),
        newbase_hdmi_get_5v_state(ch_to_port[2]),
        newbase_hdmi_get_5v_state(ch_to_port[3]));
    ptr+=n; count-=n;

    //---------------------------------------
    // Mode 
    //---------------------------------------
    n = scnprintf(ptr, count, "Mode : %s\n", (lib_hdmi_is_hdmi_mode(port)) ? "HDMI" : "DVI");
    ptr+=n; count-=n;

    //---------------------------------------
    // PHY Status
    //---------------------------------------
    n = scnprintf(ptr, count, "PHY Status : clock=%u, clock_stable=%d\n",
            newbase_rxphy_get_clk(port),
            newbase_rxphy_is_clk_stable(port));
    ptr+=n; count-=n;

    //---------------------------------------
    // TMDS Status
    //---------------------------------------
    n = scnprintf(ptr, count, "TMDS Status : TMDS STS=0xf8, OUT=0x8, CTL=0x8\n");
    ptr+=n; count-=n;

#if 0
    //---------------------------------------
    // BIT Error
    //---------------------------------------            
    if ((rtd_inl(0xb800d060) & 0x1)==0)
        rtd_outl(0xb800d060,0x00010103); //enable    

    n = scnprintf(ptr, count, "Bit Error : (R/G/B)=%u/%u/%u, TERC4(R/G/B)=%u/%u/%u\n",                                                 
            rtd_inl(0xb800d064) & 0xFFFF,
            rtd_inl(0xb800d068) & 0xFFFF,
            rtd_inl(0xb800d06c) & 0xFFFF,
            rtd_inl(0xb800d074) & 0xFFFF,
            rtd_inl(0xb800d078) & 0xFFFF,
            rtd_inl(0xb800d07c) & 0xFFFF);

    ptr+=n; count-=n;
#endif

    //---------------------------------------
    // HDMI2.1 FRL FSM
    //---------------------------------------
    p_phy_st = newbase_rxphy_get_status(port);

    n = scnprintf(ptr, count, "HDMI2.1 Status : FRL Mode=%s (%d), LT FSM = %s (%d), LT Error Status: %x\n",
                   _hdmi_hd21_frl_mode_str(p_phy_st->frl_mode), p_phy_st->frl_mode,
                   _hdmi_hd21_frl_lt_fsm_str(GET_FRL_LT_FSM(port)), GET_FRL_LT_FSM(port),
                   lt_fsm_status[port].lt_error_status
                   );
    ptr+=n; count-=n;


    //---------------------------------------
    // Video FSM
    //---------------------------------------
    n = scnprintf(ptr, count, "VIDEO Status : FSM = %s (%d), OutEn=%d\n",
                  _hdmi_video_fsm_str(video_state), video_state,
                  lib_hdmi_is_video_output(port));
    ptr+=n; count-=n;


    n = scnprintf(ptr, count, "VIDEO FSM history : \n");
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "[id]: curr_ms     diff     FSM(from -> target)\n");
    ptr+=n; count-=n;

    for(i = 0; i<= (DETECT_FSM_HISTROY_SIZE-1); i++)
    {
        if(g_detect_fsm_status[port].fsm_chg_time_ms[i] ==0)
        {
            n = scnprintf(ptr, count, "[%2d] --------    ------\n", i);
            ptr+=n; count-=n;
        }
        else if(i==0)
        {
            n = scnprintf(ptr, count, "[%2d] %8d      ------    %s\n",
                i,
                g_detect_fsm_status[port].fsm_chg_time_ms[i],
                _hdmi_video_fsm_str(g_detect_fsm_status[port].fsm_history[i]));
            ptr+=n; count-=n;
        }
        else
        {
            n = scnprintf(ptr, count, "[%2d] %8d    %6d    %s -> %s\n",
                i,
                g_detect_fsm_status[port].fsm_chg_time_ms[i],
                (g_detect_fsm_status[port].fsm_chg_time_ms[i] - g_detect_fsm_status[port].fsm_chg_time_ms[i-1]),
                _hdmi_video_fsm_str(g_detect_fsm_status[port].fsm_history[i-1]),
                _hdmi_video_fsm_str(g_detect_fsm_status[port].fsm_history[i]));
            ptr+=n; count-=n;
        }

    }
    //---------------------------------------
    // Timing Info (from lib_hdmims_offline_measure)
    //---------------------------------------
    if (newbase_hdmi_get_timing(port, &timing))
    {
        n = scnprintf(ptr, count, "VIDEO Timing I : h_total=%d, v_total=%d, h_act=%d, v_act=%d, h_freq=%d, v_freq=%d.%d, interlace=%d, color_space=%d(%s), color_depth=%d(%s), pixel_repeat=%x\n",
                timing.h_total, timing.v_total,
                timing.h_act_len, timing.v_act_len,
                (timing.h_freq * 100), timing.v_freq/10, timing.v_freq%10,
                timing.is_interlace,
                timing.colorspace, _hdmi_color_space_str(timing.colorspace),
                timing.colordepth, _hdmi_color_depth_str(timing.colordepth),
                timing.pixel_repeat);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "VIDEO Timing II : h_act_sta=%d, v_act_sta=%d, color_colorimetry=%d(%s), polarity=%d, mode_id=%d, modetable_index=%d, IVSyncPulseCount =%d\n", 
                timing.h_act_sta, timing.v_act_sta,
                timing.colorimetry, _hdmi_color_colorimetry_str(timing.colorimetry),
                timing.polarity,
                timing.mode_id,
                timing.modetable_index,
                timing.IVSyncPulseCount);
        ptr+=n; count-=n;
    }
    else
    {
        n = scnprintf(ptr, count, "VIDEO Timing : N/A\n");
    }

    ptr+=n; count-=n;

    //---------------------------------------
    // Audio FSM
    //---------------------------------------
    n = scnprintf(ptr, count, "AUDIO Status : FSM = %s (%d)\n",
                  _hdmi_audio_fsm_str(audio_state), audio_state);
    ptr+=n; count-=n;

    //---------------------------------------
    // Cotrol
    //---------------------------------------
    n = scnprintf(ptr, count, "AVMute Status : %s\n", lib_hdmi_get_avmute(port) ? "On" : "Off");
    ptr+=n; count-=n;

    //---------------------------------------
    // HDCP Status
    //---------------------------------------
    scnprintf(ptr, count,"HDCP Mode: %s\n",  _hdmi_hdcp_mode_str(newbase_hdcp_get_auth_mode(port)));
    ptr+=n; count-=n;

    //---------------------------------------
    // HDR Status
    //---------------------------------------
    {
        HDMI_DRM_T info;
        unsigned char drm_state = newbase_hdmi_get_drm_infoframe(port, &info);
        
        n = scnprintf(ptr, count, "EOTFtype: ");
        ptr+=n; count-=n;
        if(drm_state==0)
        {
            n = scnprintf(ptr, count, "DRM Read fail!!\n");
            ptr+=n; count-=n;
        }
        else
        {
            switch(info.eEOTFtype)
            {
            case 0:
                    n = scnprintf(ptr, count, "Traditional gamma - SDR\n");
                break;
            case 1:
                    n = scnprintf(ptr, count, "Traditional gamma - HDR\n");
                break;
            case 2:
                    n = scnprintf(ptr, count, "SMPTE ST 2084\n");
                break;
            case 3:
                    n = scnprintf(ptr, count, "HLG\n");
                break;
            case 4:
            case 5:
            case 6:
            case 7:
                    n = scnprintf(ptr, count, "Reserved\n");
                break;
            default:
                    n = 0;
                break;
            }
            ptr+=n; count-=n;
        }
    }

#ifdef CONFIG_SUPPORT_SCALER
    //---------------------------------------
    // Current Scaler get scale main path ivs V Frequency
    //---------------------------------------
    newbase_hdmi_get_fvs_allm(port, &allm_mode);
    n = scnprintf(ptr, count, "Gaming: ALLM=%d, VRR_EN=%d, AMD_FREESYNC_EN=%d, Scaler IVS V Freq(x0.1Hz)=%d\n",
        allm_mode, newbase_hdmi_get_vrr_enable(port), newbase_hdmi_get_freesync_enable(port), get_scaler_ivs_framerate());
    ptr+=n; count-=n;
    
    //---------------------------------------
    // Force BG
    //---------------------------------------
    scnprintf(ptr, count,"scarler_force_bg: %s\n",  (GET_FORCE_BG_STATUS()) ? "On" : "OFF");
    ptr+=n; count-=n;
#endif

    return ptr - buf;
}


static DEVICE_ATTR(status, 0444, hdmi_show_status, NULL);


//===========================================================================
// Func : hdmi_attr_show_debug_ctrl
//===========================================================================

static ssize_t hdmi_attr_show_debug_ctrl(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;

    if (strcmp(attr->attr.name, "debug_ctrl")==0)
    {
        //---------------------------------------------------
        // bypass detect 
        //---------------------------------------------------
        n = scnprintf(ptr, count, "bypass_detect=%d\n", 
            lib_hdmi_get_fw_debug_bit(DEBUG_26_BYPASS_DETECT));
        ptr+=n; count-=n;

        //---------------------------------------------------
        // bypass check 
        //---------------------------------------------------
        n = scnprintf(ptr, count, "bypass_check=%d\n", 
            lib_hdmi_get_fw_debug_bit(DEBUG_25_BYPASS_CHECK));
        ptr+=n; count-=n;

        //---------------------------------------------------
        // force_6g
        //---------------------------------------------------
        n = scnprintf(ptr, count, "force_6g=%d\n", 
            lib_hdmi_get_fw_debug_bit(DEBUG_24_FORCE_6G));
        ptr+=n; count-=n;

        //---------------------------------------------------
        // bit_err_det
        //---------------------------------------------------
        n = scnprintf(ptr, count, "bit_err_det=%d\n", 
            lib_hdmi_get_fw_debug_bit(DEBUG_23_BITERR_DET));
        ptr+=n; count-=n;

        //---------------------------------------------------
        // force no info pack
        //---------------------------------------------------
        n = scnprintf(ptr, count, "force_no_info_pack=%d\n", 
            lib_hdmi_get_fw_debug_bit(DEBUG_21_FORCE_NO_INFOPKT));
        ptr+=n; count-=n;

        //---------------------------------------------------
        // dump_reg
        //---------------------------------------------------
        n = scnprintf(ptr, count, "dump_reg=%d\n", 
            lib_hdmi_get_fw_debug_bit(DEBUG_17_DUMP_REG));
        ptr+=n; count-=n;

        //---------------------------------------------------
        // hdcp2_disable
        //---------------------------------------------------
        n = scnprintf(ptr, count, "hdcp2_disable=%d\n", newbase_hdmi_hdcp_is_hdcp2_disabled(EVERY_HDMI_PORT));
        ptr+=n; count-=n;

        //---------------------------------------------------
        // hdcp2_reauth
        //---------------------------------------------------
        n = scnprintf(ptr, count, "hdcp2_reauth=0\n");
        ptr+=n; count-=n;

        //---------------------------------------------------
        // hdcp2_wait_msg_timeout
        //---------------------------------------------------
        n = scnprintf(ptr, count, "hdcp2_wait_msg_timeout=%d\n", g_hdmi_hdcp2_wait_msg_timeout );
        ptr+=n; count-=n;

        //---------------------------------------------------
        // CRC Monitoring
        //---------------------------------------------------
        n = scnprintf(ptr, count, "crc_monitor_en=%d\n", newbase_hdmi_is_video_crc_monitor_enable());
        ptr+=n; count-=n;

        //---------------------------------------------------
        // Video CRC Monitoring Interval
        //---------------------------------------------------
        n = scnprintf(ptr, count, "crc_monitor_interval=%d\n", newbase_hdmi_get_video_crc_monitor_interval());
        ptr+=n; count-=n;

        //---------------------------------------------------
        // Pixel Monitor
        //---------------------------------------------------
        n = scnprintf(ptr, count, "pixel_monitor_en=%d\n", g_hdmi_pixel_monitor_en);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "pixel_monitor_pos=%d,%d\n", g_hdmi_pixel_monitor_x, g_hdmi_pixel_monitor_y);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // HDMI output disable
        //---------------------------------------------------
        n = scnprintf(ptr, count, "output_disable=%d\n", newbase_hdmi_is_output_disable());
        ptr+=n; count-=n;

        //---------------------------------------------------
        // HPD toggle
        //---------------------------------------------------
        n = scnprintf(ptr, count, "hpd_toggle=0\n");
        ptr+=n; count-=n;

        //---------------------------------------------------
        // HDMI2.1 Max Frl Rate
        //---------------------------------------------------
        n = scnprintf(ptr, count, "max_frl_rate=%d\n", current_max_frl_rate);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // Set AMD Freesync EDID
        //---------------------------------------------------
        n = scnprintf(ptr, count, "set_freesync_edid=0\n");
        ptr+=n; count-=n;

        //---------------------------------------------------
        // Force AVMUTE
        //---------------------------------------------------
        n = scnprintf(ptr, count, "force_avmute=%d, (current port: %d), all stasus: %d, %d, %d, %d\n",
            g_hdmi_debug_force_avmute[newbase_hdmi_get_current_display_port()], 
            newbase_hdmi_get_current_display_port(),
            g_hdmi_debug_force_avmute[0],
            g_hdmi_debug_force_avmute[1],
            g_hdmi_debug_force_avmute[2],
            g_hdmi_debug_force_avmute[3]);
        ptr+=n; count-=n;

#ifdef CONFIG_HDMI_RX_BUILT_IN_TEST
        //---------------------------------------------------
        // HDMI Driver init test for bring up
        //---------------------------------------------------
        n = scnprintf(ptr, count, "hdmi_driver_init=%d\n", m_sys_specified_port);
        ptr+=n; count-=n;
#endif
        //---------------------------------------------------
        // Power Saving
        //---------------------------------------------------
        n = scnprintf(ptr, count, "ps_mode=%d (0: auto, 1: force mode 1, 2: force mode2)\n", hdmi_ps_mode);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "ps_phy_stable_time=%d (ms)\n", hdmi_ps_phy_stable_time);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "bypass_phy_ps_mode=%d (0: disable, 1: enable)\n", hdmi_bypass_phy_ps_mode);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "power_saving_enable=%d (0: disable, 1: enable)\n", hdmi_power_saving_enable);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "hdmi_power_saving_connected_port_if_not_hdmi_source=%d (0: disable , 1: enable)\n", hdmi_power_saving_connected_port_if_not_hdmi_source);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "hdmi_power_saving_wakeup_remeasure=%d (0: disable , 1: enable)\n", hdmi_power_saving_wakeup_remeasure);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "exit_power_saving_debug=%d (0: disable, 1: enable)\n", hdmi_exit_power_saving_debug);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "power_saving_test_mode=%d (0: disable, 1: enable)\n", hdmi_power_saving_test_mode);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // Scaler Status
        //---------------------------------------------------
        n = scnprintf(ptr, count, "scaler_force_bg=%d (0: disable, 1: enable)\n", GET_FORCE_BG_STATUS());
        ptr+=n; count-=n;
    }
    else if (strcmp(attr->attr.name, "arc_ctrl")==0)
    {
        // ARC Channel
        n = scnprintf(ptr, count, "arc_spdif_channel=%d\n", hdmi_arc_get_spdif_channel());
        ptr+=n; count-=n;

        // ARC status
        n = scnprintf(ptr, count, "arc_spdif_out_en=%d\n", hdmi_arc_get_status());
        ptr+=n; count-=n;
    }

    return ptr - buf;
}


static ssize_t hdmi_attr_store_debug_ctrl(struct device *dev,
                   struct device_attribute *attr,
                   const char *buf, size_t count)
{
    int val;

    if (strcmp(attr->attr.name, "debug_ctrl")==0)
    {
        int pixel_x;
        int pixel_y;

        if (sscanf(buf, "bypass_detect=%5d", &val)==1)
        {
            lib_hdmi_set_fw_debug_bit(DEBUG_26_BYPASS_DETECT, val);
        }
        else if (sscanf(buf, "bypass_check=%5d", &val)==1)
        {
            lib_hdmi_set_fw_debug_bit(DEBUG_25_BYPASS_CHECK, val);
        }
        else if (sscanf(buf, "force_6g=%5d", &val)==1)
        {
            lib_hdmi_set_fw_debug_bit(DEBUG_24_FORCE_6G, val);
        } 
        else if (sscanf(buf, "bit_err_det=%5d", &val)==1)
        {
            lib_hdmi_set_fw_debug_bit(DEBUG_23_BITERR_DET, val);
        }
        else if (sscanf(buf, "force_no_info_pack=%5d", &val)==1)
        {
            lib_hdmi_set_fw_debug_bit(DEBUG_21_FORCE_NO_INFOPKT, val);
        }
        else if (sscanf(buf, "dump_reg=%5d", &val)==1)
        {
            lib_hdmi_set_fw_debug_bit(DEBUG_17_DUMP_REG, val);
        }
        else if (sscanf(buf, "hdcp2_disable=%5d", &val)==1)
        {
            newbase_hdmi_hdcp_disable_hdcp2(EVERY_HDMI_PORT, (val) ? 1 : 0);
        }
        else if (sscanf(buf, "hdcp2_reauth=%5d", &val)==1) 
        {
            if (val)
                newbase_hdmi_hdcp22_set_reauth(newbase_hdmi_get_current_display_port());
        }
        else if (sscanf(buf, "hdcp2_wait_msg_timeout=%5d", &val)==1)
        {
            if (val >=0)
                g_hdmi_hdcp2_wait_msg_timeout = val;
        }
        else if (sscanf(buf, "crc_monitor_en=%5d", &val)==1)
        {
            newbase_hdmi_video_crc_monitor_en((val) ? 1 : 0);
        }
        else if (sscanf(buf, "crc_monitor_interval=%5d", &val)==1)
        {
            newbase_hdmi_video_set_crc_monitor_interval(val);
        }
        else if (sscanf(buf, "pixel_monitor_en=%5d", &val)==1)
        {
            g_hdmi_pixel_monitor_en = (val) ? 1 : 0;
        }
        else if (sscanf(buf, "pixel_monitor_pos=%5d,%5d", &pixel_x, &pixel_y)==2)
        {
            g_hdmi_pixel_monitor_x = pixel_x;
            g_hdmi_pixel_monitor_y = pixel_y;
        }
        else if (sscanf(buf, "output_disable=%5d", &val)==1) 
        {
            newbase_hdmi_output_disable((val) ? 1 : 0);
        }
        else if (sscanf(buf, "max_frl_rate=%5d", &val)==1)
        {
            unsigned char port = 0;
            current_max_frl_rate = val;
            SET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_MAX_FRL_MODE, current_max_frl_rate);
            for(port=0; port< HDMI_PORT_TOTAL_NUM; port++)
            {
                newbase_hdmi_edid_set_max_frl_rate(port, val);
            }
        }
        else if (sscanf(buf, "set_freesync_edid=%1d", &val)==1)
        {
            unsigned char port = 0;
            for(port=0; port< HDMI_PORT_TOTAL_NUM; port++)
            {
                newbase_hdmi_edid_set_amd_freesync_vsdb(port);
            }
            newbase_hdmi_set_hpd(newbase_hdmi_get_current_display_port(), 0);
            msleep(700);
            newbase_hdmi_set_hpd(newbase_hdmi_get_current_display_port(), 1);
        }
        else if (sscanf(buf, "hpd_toggle=%5d", &val)==1) 
        {
            newbase_hdmi_set_hpd(newbase_hdmi_get_current_display_port(), 0);
            msleep(val);
            newbase_hdmi_set_hpd(newbase_hdmi_get_current_display_port(), 1);
        }
        else if (sscanf(buf, "dfe_recovery=%5d", &val)==1) 
        {
            unsigned char port =newbase_hdmi_get_current_display_port();
            switch(val)
            {
            case 0:
                newbase_hdmi_dfe_recovery_midband_long_cable(port);
                HDMI_EMG("[sysfs] 450M~1.1G re-adaptive\n");
                break;
            case 1:
                newbase_hdmi_dfe_recovery_mi_speed(port);
                HDMI_EMG("[sysfs]1.1 ~ 3G re-adaptive\n");
                break;
            case 2:
                newbase_hdmi_dfe_recovery_hi_speed(port);
                HDMI_EMG("[sysfs]> 3G re-adaptive\n");
                break;
            case 3:
                newbase_hdmi_dfe_recovery_6g_long_cable(port);
                HDMI_EMG("[sysfs] 6G long cable detect\n");
                break;
            default:
                HDMI_EMG("[sysfs] do nothing!\n");
                break;
            }
        }
        else if (sscanf(buf, "force_avmute=%5d", &val)==1)
        {
            g_hdmi_debug_force_avmute[newbase_hdmi_get_current_display_port()] = val;
        }
#ifdef CONFIG_HDMI_RX_BUILT_IN_TEST
        else if (sscanf(buf, "hdmi_driver_init=%5d", &val)==1)
        {
            if (val>=0 && val < HDMI_PORT_TOTAL_NUM)
            {
                m_sys_specified_port = val;
                hdmi_rx_init(val);
            }
        }
#endif
        else if (sscanf(buf, "ps_mode=%1d", &val)==1)
        {
            if (val <0 || val > 2)
                val = 0;
            hdmi_ps_mode = val;
        }
        else if (sscanf(buf, "ps_phy_stable_time=%5d", &val)==1)
        {
            if (val <10)
                val = 10; // minimum wait 10 ms
            hdmi_ps_phy_stable_time = val;
        }
        else if (sscanf(buf, "bypass_phy_ps_mode=%1d", &val)==1)
        {
            hdmi_bypass_phy_ps_mode = (val) ? 1 : 0;
        }
        else if (sscanf(buf, "power_saving_enable=%1d", &val)==1)
        {
            hdmi_power_saving_enable = (val) ? 1 : 0;
        }
        else if (sscanf(buf, "exit_power_saving_debug=%1d", &val)==1)
        {
            hdmi_exit_power_saving_debug = (val) ? 1 : 0;
        }
        else if (sscanf(buf, "hdmi_power_saving_connected_port_if_not_hdmi_source=%1d", &val)==1)
        {
            hdmi_power_saving_connected_port_if_not_hdmi_source = (val) ? 1 : 0;
        }
        else if (sscanf(buf, "hdmi_power_saving_wakeup_remeasure=%1d", &val)==1)
        {
            hdmi_power_saving_wakeup_remeasure = (val) ? 1 : 0;
        }
        else if (sscanf(buf, "power_saving_test_mode=%1d", &val)==1)
        {
            hdmi_power_saving_test_mode = (val) ? 1 : 0;
        }
        else if (sscanf(buf, "scaler_force_bg=%1d", &val)==1)
        {
            SET_FORCE_BG_ENABLE((val) ? 1 : 0);
        }
        else
        {
            return -1;
        }
    }
    else if (strcmp(attr->attr.name, "arc_ctrl")==0)
    {
        if (sscanf(buf, "arc_spdif_out_en=%5d", &val)==1)
            hdmi_arc_enable((val) ? 1 : 0);
    }
    else
    {
        return -1;
    }

    return count;
}

static DEVICE_ATTR(debug_ctrl, 0644, hdmi_attr_show_debug_ctrl, hdmi_attr_store_debug_ctrl);
static DEVICE_ATTR(arc_ctrl,  0644, hdmi_attr_show_debug_ctrl, hdmi_attr_store_debug_ctrl);

//===========================================================================
// Func : hdmi_attr_show_debug_print
//===========================================================================

static ssize_t hdmi_attr_show_debug_print(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;

    if (strcmp(attr->attr.name, "debug_print")==0)
    {
        n = scnprintf(ptr, count, "====Flow Print Disab;e(0)/Enable(1)====\n");
        ptr+=n; count-=n;

        //---------------------------------------------------
        // FLOW_PRINT_FLAG Status
        //---------------------------------------------------
        n = scnprintf(ptr, count, "debugging_flow_print_flag status: %d\n", debugging_flow_print_flag);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // HDCP_FLOW_PRINT_FLAG
        //---------------------------------------------------
        n = scnprintf(ptr, count, "HDCP_FLOW=%d (Default: 0)\n", HDCP_FLOW_PRINT_FLAG);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "HDCP_REAUTH_MSG_THRESHOLD=%d\n", newbase_hdmi_hdcp_get_reauth_msg_threshold());
        ptr+=n; count-=n;

        //---------------------------------------------------
        // AUDIO_FLOW_PRINT_FLAG
        //---------------------------------------------------
        n = scnprintf(ptr, count, "AUDIO_FLOW=%d (Default: 1)\n", AUDIO_FLOW_PRINT_FLAG);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "AUDIO_FLOW_CYCLE=%d (Default: 600, Range: 0~65535)\n", g_audio_print_cycle_thd);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // INFOFRAME_FLOW_PRINT_FLAG
        //---------------------------------------------------
        n = scnprintf(ptr, count, "INFOFRAME_FLOW=%d  (Default: 0)\n", INFOFRAME_FLOW_PRINT_FLAG);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // CEDERR_FLOW_PRINT_FLAG
        //---------------------------------------------------
        n = scnprintf(ptr, count, "CEDERR_FLOW=%d  (Default: 0)\n", CEDERR_FLOW_PRINT_FLAG);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "CED_FLOW_CYCLE=%d (Default: 1000, Range: 0~65535)\n", g_char_bit_print_cycle_cnt_thd);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // SCDC_FLOW_PRINT_FLAG
        //---------------------------------------------------
        n = scnprintf(ptr, count, "SCDC_FLOW=%d  (Default: 1)\n", SCDC_FLOW_PRINT_FLAG);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "SCDC_FLOW_CYCLE=%d (Default: 500, Range: 0~65535)\n", g_scdc_print_cycle_cnt_thd);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // FRL_FLOW_PRINT_FLAG
        //---------------------------------------------------
        n = scnprintf(ptr, count, "FRL_FLOW=%d  (Default: 0)\n", FRL_FLOW_PRINT_FLAG);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // HD21_FLOW_PRINT_FLAG
        //---------------------------------------------------
        n = scnprintf(ptr, count, "HD21_FLOW=%d  (Default: 0)\n", HD21_FLOW_PRINT_FLAG);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // VFE_FLOW_PRINT_FLAG
        //---------------------------------------------------
        n = scnprintf(ptr, count, "VFE_FLOW=%d\n", VFE_FLOW_PRINT_FLAG);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // PWR_FLOW_PRINT_FLAG
        //---------------------------------------------------
        n = scnprintf(ptr, count, "PWR_FLOW=%d\n", PWR_FLOW_PRINT_FLAG);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "PWR_FLOW_CYCLE=%d Range: 0~65535)\n", g_pwr_print_cycle_cnt_thd);
        ptr+=n; count-=n;
        
        //---------------------------------------------------
        // AMD_FLOW_PRINT_FLAG
        //---------------------------------------------------
        n = scnprintf(ptr, count, "AMDFREESYNC_FLOW=%d\n", AMDFREESYNC_FLOW_PRINT_FLAG);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "AMDFREESYNC_FLOW_CYCLE=%d (ms)\n", g_amd_vsdb_debug_thd);
        ptr+=n; count-=n;

        //---------------------------------------------------
        // Error detect print
        //---------------------------------------------------
        n = scnprintf(ptr, count, "ERROR_DETECT_MSG_CYCLE=%d\n", g_hdmi_err_det_message_interval);
        ptr+=n; count-=n;

    }

    return ptr - buf;
}


static ssize_t hdmi_attr_store_debug_print(struct device *dev,
                   struct device_attribute *attr,
                   const char *buf, size_t count)
{
    int val = 0;
    if (strcmp(attr->attr.name, "debug_print")==0)
    {
        if (sscanf(buf, "HDCP_FLOW=%1d", &val)==1)
        {
            if (val)
            {
                SET_HDCP_FLOW_PRINT_FLAG();
            }
            else
            {
                CLR_HDCP_FLOW_PRINT_FLAG();
            }
        }
        else if (sscanf(buf, "HDCP_REAUTH_MSG_THRESHOLD=%5d", &val)==1)
        {
            newbase_hdmi_hdcp_set_reauth_msg_threshold(val);
        }
        else if (sscanf(buf, "AUDIO_FLOW=%1d", &val)==1)
        {
            if (val)
            {
                SET_AUDIO_FLOW_PRINT_FLAG();
            }
            else
            {
                CLR_AUDIO_FLOW_PRINT_FLAG();
            }
        }
        else if (sscanf(buf, "AUDIO_FLOW_CYCLE=%5d", &val)==1)
        {
            if (val<65535)
            {
                g_audio_print_cycle_thd = (unsigned short)val ;
            }
        }
        else if (sscanf(buf, "INFOFRAME_FLOW=%1d", &val)==1)
        {
            if (val)
            {
                SET_INFOFRAME_FLOW_PRINT_FLAG();
            }
            else
            {
                CLR_INFOFRAME_FLOW_PRINT_FLAG();
            }
        }
        else if (sscanf(buf, "CEDERR_FLOW=%1d", &val)==1)
        {
            if (val)
            {
                SET_CEDERR_FLOW_PRINT_FLAG();
            }
            else
            {
                CLR_CEDERR_FLOW_PRINT_FLAG();
            }
        }
        else if (sscanf(buf, "CED_FLOW_CYCLE=%5d", &val)==1)
        {
            if (val<65535)
            {
                g_char_bit_print_cycle_cnt_thd = (unsigned short)val ;
            }
        }
        else if (sscanf(buf, "SCDC_FLOW=%1d", &val)==1)
        {
            if (val)
            {
                SET_SCDC_FLOW_PRINT_FLAG();
            }
            else
            {
                CLR_SCDC_FLOW_PRINT_FLAG();
            }
        }
        else if (sscanf(buf, "SCDC_FLOW_CYCLE=%5d", &val)==1)
        {
            if (val<65535)
            {
                 g_scdc_print_cycle_cnt_thd = (unsigned short)val ;
            }
        }
        else if (sscanf(buf, "FRL_FLOW=%1d", &val)==1)
        {
            if (val)
            {
                SET_FRL_FLOW_PRINT_FLAG();
            }
            else
            {
                CLR_FRL_FLOW_PRINT_FLAG();
            }
        }
        else if (sscanf(buf, "HD21_FLOW=%1d", &val)==1)
        {
            if (val)
            {
                SET_HD21_FLOW_PRINT_FLAG();
            }
            else
            {
                CLR_HD21_FLOW_PRINT_FLAG();
            }
        }
        else if (sscanf(buf, "VFE_FLOW=%1d", &val)==1)
        {
            if (val)
            {
                SET_VFE_FLOW_PRINT_FLAG();
            }
            else
            {
                CLR_VFE_FLOW_PRINT_FLAG();
            }
        }
        else if (sscanf(buf, "PWR_FLOW=%1d", &val)==1)
        {
            if (val)
            {
                SET_PWR_FLOW_PRINT_FLAG();
            }
            else
            {
                CLR_PWR_FLOW_PRINT_FLAG();
            }
        }
        else if (sscanf(buf, "PWR_FLOW_CYCLE=%1d", &val)==1)
        {
            if (val<65535)
            {
                 g_pwr_print_cycle_cnt_thd = (unsigned short)val ;
            }
        }
        else if (sscanf(buf, "AMDFREESYNC_FLOW=%1d", &val)==1)
        {
            if (val)
            {
                SET_AMDFREESYNC_FLOW_PRINT_FLAG();
            }
            else
            {
                CLR_AMDFREESYNC_FLOW_PRINT_FLAG();
            }
        }
        else if (sscanf(buf, "AMDFREESYNC_FLOW_CYCLE=%5d", &val)==1)
        {
            if (val<65535)
            {
                 g_amd_vsdb_debug_thd = (unsigned short)val ;
            }
        }
        else if (sscanf(buf, "ERROR_DETECT_MSG_CYCLE=%5d", &val)==1)
        {
            if (val<1)
                return -1;
            g_hdmi_err_det_message_interval = (unsigned int) val ;
        }
        else
        {
            pr_debug("Invaild parameter!!\n");
            return -1;
        }
    }
    else
    {
        pr_debug("Invaild attr.name!!\n");
        return -1;
    }

    return count;
}

static DEVICE_ATTR(debug_print, 0644, hdmi_attr_show_debug_print, hdmi_attr_store_debug_print);

//===========================================================================
// Func : hdmi_edid_status_show
//===========================================================================
static unsigned char node_edid_mode_ctrl = 0;
static unsigned char node_edid_table_index = 0xFF;
static ssize_t hdmi_edid_status_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int port = 0;
    unsigned int edid_length =256;
    unsigned char state = FALSE;

    if (sscanf(attr->attr.name, "edid_%1d", &port)!=1 || port >= HDMI_PORT_TOTAL_NUM || port <0)
        return -EINVAL;

    state = newbase_hdmi_read_edid(port, buf, edid_length);

    HDMI_INFO("Read Status : Current port: %d, State: %d (0: Read fail, 1: Read success)\n",port, state);

    return edid_length;
}

static ssize_t hdmi_edid_status_store(
    struct device*              dev,
    struct device_attribute*    attr,
    const char*                 buf, 
    size_t                      count
    )
{
    int port = 0;

    if (buf == NULL ||
        sscanf(attr->attr.name, "edid_%1d", &port)!=1 || 
        port >= HDMI_PORT_TOTAL_NUM || 
        port <0)
        return -EINVAL;

    if(newbase_hdmi_write_edid(port, (char*) buf, (count > 256) ? 256 : count))
    {
        newbase_hdmi_save_edid(port, (char*) buf, (count > 256) ? 256 : count);  // store edid on specified edid port
    }
    else
    {
        HDMI_EMG("newbase_hdmi_write_edid fail!!!\n");
    }


    return count;
}

static DEVICE_ATTR(edid_0, 0644, hdmi_edid_status_show, hdmi_edid_status_store);
static DEVICE_ATTR(edid_1, 0644, hdmi_edid_status_show, hdmi_edid_status_store);
static DEVICE_ATTR(edid_2, 0644, hdmi_edid_status_show, hdmi_edid_status_store);
static DEVICE_ATTR(edid_3, 0644, hdmi_edid_status_show, hdmi_edid_status_store);


//===========================================================================
// Func : hdmi_attr_show_dfe_test
//===========================================================================

char dfe_test_buff[PAGE_SIZE];
unsigned int dfe_test_report_size = 0;

static ssize_t hdmi_attr_show_dfe_test(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;

    if (strcmp(attr->attr.name, "dfe_test_report")==0)
    {
        n = dfe_test_report_size;
        memcpy(buf, dfe_test_buff, PAGE_SIZE);
        ptr+=n; count-=n;
        dfe_test_report_size = 0;
    }
    else if (strcmp(attr->attr.name, "dfe_test")==0)
    {
        n = scnprintf(ptr, count, "dump_dfe_param=<port> : dump dfe parameter of a given HDMI port\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "dfe_scan_le=<port>,<ch>,<min_le>,<max_le>,<period> : scan le of a given HDMI port channel\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "dfe_update_le=<port>,<ch>,<le> : set le of a given HDMI port channel\n");
        ptr+=n; count-=n;
    }

    return ptr - buf;
}

static ssize_t hdmi_attr_store_dfe_test(struct device *dev,
                   struct device_attribute *attr,
                   const char *buf, size_t len)
{
    int i;
    int n;
    int count = PAGE_SIZE;
    char *ptr = dfe_test_buff;
    dfe_test_report_size = 0;

    if (strcmp(attr->attr.name, "dfe_test")==0)
    {
        int port = 0;
        int ch = 0;
        int min = 0;
        int max = 0;
        int period = 100;
        int le;

        if (sscanf(buf, "dfe_scan_le=%1d,%d,%d,%d,%d", &port, &ch, &min, &max, &period)==5)
        {
            unsigned char le[3];
            unsigned int ced[3];
            int ps_enable = 0;

            if ((port <0 || port>=4) || (ch <0 || ch >2) ||
                !IS_VALID_LE(min) || !IS_VALID_LE(max) ||
                (min > max) || period < 0)
            {
                HDMI_EMG("invalid parameter!!!\n");
                return -EINVAL;
            }

            if (hdmi_power_saving_enable)   // disable power saving if necessary
            {
                HDMI_EMG("power saving is enabled, disable it before test!!!\n");
                hdmi_power_saving_enable = 0;
                ps_enable = 1;
                msleep(100);   // waiting 100ms to leave power saving mode
            }

            if (period < 10)
                period = 10;   // at least 10 msec

            for (i=0; i<3; i++)
                le[i] = lib_hdmi_dfe_get_le(port,i);

            n = scnprintf(ptr, count, "dfe_scan_le: port=%d,  cur_le(b/g/r)=%d/%d/%d, tap0=%d/%d/%d, target_ch=%d, range=%d~%d, period=%d (ms)\n",
                    port, le[0], le[1], le[2],
                    lib_hdmi_dfe_get_tap0(port, 0),
                    lib_hdmi_dfe_get_tap0(port, 1),
                    lib_hdmi_dfe_get_tap0(port, 2),
                    ch, min, max, period);
            ptr+=n; count-=n;

            for (i=min; i<max; i++)
            {
                unsigned char new_le[3];

                memcpy(new_le, le, 3);
                new_le[ch] = i;
                lib_hdmi_dfe_update_le(port, new_le[0], new_le[1], new_le[2]);
                msleep(10);
                newbase_hdmi_fw_ced_measure(port, ced, period);

                n = scnprintf(ptr, count, "HDMI[p%1d] ch=%1d, le=%2d / %2d / %2d , ced= %5d / %5d / %5d\n",
                        port, ch,
                        lib_hdmi_dfe_get_le(port,0),
                        lib_hdmi_dfe_get_le(port,1),
                        lib_hdmi_dfe_get_le(port,2),
                        ced[0], ced[1], ced[2]);

                ptr+=n; count-=n;
            }

            lib_hdmi_dfe_update_le(port, le[0], le[1], le[2]);

            dfe_test_report_size = ptr - dfe_test_buff;

            if (ps_enable)   // enable power saving again
            {
                HDMI_EMG("test complete, reenable power saving!!!\n");
                hdmi_power_saving_enable = 1;
            }
        }
        else if (sscanf(buf, "dump_dfe_param=%1d", &port)==1)
        {
            int i;

            for (i=0; i<3; i++)
            {
                n = scnprintf(ptr, count, "HDMI[p%d] ch%d, vth=%d, tap0=%d(%d~%d), le=%d(%d~%d), tap1/2/3/4=%d/%d/%d/%d \n",
                        port, i,
                        lib_hdmi_dfe_get_vth(port, i),
                        lib_hdmi_dfe_get_tap0(port, i),
                        lib_hdmi_dfe_get_tap0max(port, i),
                        lib_hdmi_dfe_get_tap0min(port, i),
                        lib_hdmi_dfe_get_le(port, i),
                        lib_hdmi_dfe_get_lemax(port, i),
                        lib_hdmi_dfe_get_lemin(port, i),
                        lib_hdmi_dfe_get_tap1(port, i),
                        lib_hdmi_dfe_get_tap2(port, i),
                        lib_hdmi_dfe_get_tap3(port, i),
                        lib_hdmi_dfe_get_tap4(port, i));
                ptr+=n; count-=n;
            }
            dfe_test_report_size = ptr - dfe_test_buff;
        }
        else if (sscanf(buf, "dfe_update_le=%1d,%d,%d", &port, &ch, &le)==3)
        {
            unsigned char nle[3];

            if ((port <0 || port>=4) || (ch <0 || ch >2) || !IS_VALID_LE(le))
            {
                HDMI_EMG("invalid parameter!!!\n");
                return -EINVAL;
            }

            // read back current le
            for (i=0; i<3; i++)
                nle[i] = lib_hdmi_dfe_get_le(port,i);

            // update le
            nle[ch] =le;
            lib_hdmi_dfe_update_le(port, nle[0], nle[1], nle[2]);

            n = scnprintf(ptr, count, "HDMI[p%1d] ch=%1d, le=%2d\n",
                    port, ch, lib_hdmi_dfe_get_le(port,ch));
            ptr+=n; count-=n;
            dfe_test_report_size = ptr - dfe_test_buff;
        }
        else
        {
            HDMI_EMG("Invaild parameter !!\n");
            return -1;
        }
    }
    else
    {
        HDMI_EMG("Invaild attr.name!!\n");
        return -1;
    }

    return len;
}

static DEVICE_ATTR(dfe_test, 0644, hdmi_attr_show_dfe_test, hdmi_attr_store_dfe_test);
static DEVICE_ATTR(dfe_test_report, 0644, hdmi_attr_show_dfe_test, hdmi_attr_store_dfe_test);

//===========================================================================
// Func : hdmi_edid_cfg_status_show
//===========================================================================
static ssize_t hdmi_edid_cfg_status_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int port = 0;
    int n;
    int count = PAGE_SIZE;
    char *ptr = buf;
    int i = 0;
    unsigned char read_edid[256] = {0};
    unsigned char state = FALSE;
    unsigned char* table_ptr = NULL;
    unsigned char ch = 0;
    unsigned char ddc_ch = 0;
    unsigned int edid_length =256;

    if (strcmp(attr->attr.name, "edid_cfg")!=0)
        return -EINVAL;

    if(m_sys_specified_port == HAL_VFE_HDMI_CURRENT_PORT)
    {
        port =newbase_hdmi_get_current_display_port();
        hdmi_vfe_get_hdmi_channel(port, &ch);
        newbase_hdmi_ddc_channel_status(port,&ddc_ch);
    }
    else
    {
        port =m_sys_specified_port;
        hdmi_vfe_get_hdmi_channel(port, &ch);
        newbase_hdmi_ddc_channel_status(port,&ddc_ch);
    }

    HDMI_INFO("[hdmi_edid_cfg_status_show] Select m_sys_specified_port=%d. ch/port=%d/%d, ddc_ch=%d, mode=%d\n", m_sys_specified_port, ch, port, ddc_ch, node_edid_mode_ctrl);

    if(node_edid_table_index == 0xFF)
    {//Read current edid from sram
        n = scnprintf(ptr, count, "---------------- Read EDID --------------\n");
        ptr+=n; count-=n;

        state = newbase_hdmi_read_edid(port, read_edid, edid_length);
        n = scnprintf(ptr, count, "You select HDMI%d (ch/port: %d/%d), 5V:%d, DDC ch:%d, Read Status: %d (0: Read fail, 1: Read success)\n",
            (ch+1),
            ch,
            port,
            newbase_hdmi_get_5v_state(port),
            ddc_ch,
            state);
        ptr+=n; count-=n;
        table_ptr = read_edid;
    }
    else
    {
        if(node_edid_table_index <4)
        {
            n = scnprintf(ptr, count, "---------------- Show Default EDID [#%d] Code--------------\n", node_edid_table_index);
            ptr+=n; count-=n;
            table_ptr = (unsigned char*)p_default_hdmi_edid_table[node_edid_table_index];
            memcpy(read_edid, table_ptr, 256);

        }
    }

    switch( node_edid_mode_ctrl)
    {
    case 0:
    {//show raw table
        HDMI_EDID_CAPABILITY current_flag = HDMI_EDID_CAPABILITY_UNKNOW;
        unsigned char* name_ptr = table_ptr + EDID_OFFSET_ASCII_CODED_MONITOR_NAME;
        current_flag |= newbase_hdmi_check_edid_capability(read_edid, edid_length),
        n = scnprintf(ptr, count, "---------------- EDID Capability--------------\n");
        ptr+=n; count-=n;

        for(i = 0; i<32;i++)
        {
            HDMI_EDID_CAPABILITY flag = 1<<i;
            if((current_flag & flag) == flag)
            {
                n = scnprintf(ptr, count, "[%2d] Support: %s\n", i, _hdmi_edid_capability_str((HDMI_EDID_CAPABILITY)flag));
                ptr+=n; count-=n;
            }
        }
        n = scnprintf(ptr, count, "--------------EDID Table(Hex)--------------\n");
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "Name(0x%x):\n", EDID_OFFSET_ASCII_CODED_MONITOR_NAME);
        ptr+=n; count-=n;

        for(i= 0; i< EDID_ASCII_CODED_MONITOR_NAME_LEN; i++)
        {
            unsigned char temp_str = 0;
            if(name_ptr != NULL)
            {
                temp_str = *name_ptr;
                n = scnprintf(ptr, count, "%c ", temp_str);
                ptr+=n; count-=n;

                name_ptr ++;
            }
        }

        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;

        for(i = 0; i<256; i++)
        {
            if(table_ptr != NULL)
            {
                read_edid[i] = *table_ptr;
                table_ptr ++;
            }

            if(i%16 == 0)
            {
                n = scnprintf(ptr, count, "\n");
                ptr+=n; count-=n;
            }

            n = scnprintf(ptr, count, "0x%02X,", read_edid[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;
    }
        break;
    case 1:
    {//show video data block
        CEA_EXT_BLK_INFO info;
        CEA_DATA_BLOCK *p_vdb=NULL;
        unsigned char edid[128];
        int i=0,j=0;
        memcpy(edid, &read_edid[128], 128);

        if (_compute_checksum(edid, 128)!=0)
        {
            n = scnprintf(ptr, count, "Checksum failed\t");
            ptr+=n; count-=n;
            break;
        }

        if (_parse_cea_ext_blk_info(edid, &info)<0)
        {
            n = scnprintf(ptr, count, "Parse hdmi edid failed\t");
            ptr+=n; count-=n;
            break;
        }
        for (i=0; i< info.n_cdb; i++)
        {
            n = scnprintf(ptr, count, "check CDB[%d/%d], tag=%d\n", i, info.n_cdb, info.p_cdb[i]->tag);
            ptr+=n; count-=n;

            if(info.p_cdb[i]->tag== CEA_861_TAG_2_VIDEO_DATA_BLOCK)
            {
                p_vdb = info.p_cdb[i];
                if(p_vdb->length<=HDMI_EDID_VDB_MAX_LEN)
                {
                    n = scnprintf(ptr, count, "----------Video Data Block START------------\n");
                    ptr+=n; count-=n;
                    for (j=0; j<p_vdb->length; ++j)
                    {
                        unsigned char svd = p_vdb->data[j];
                        unsigned char vic = _svd_to_vic(svd);
                        const VIC_TIMING_INFO* p_vic_timing = _get_vic_timing(vic);

                        if (p_vic_timing)
                        {
                            n = scnprintf(ptr, count, "[%2d] SVD=0x%2x, VIC=%3d (hactive=%4d, vactive=%4d, vfreq=%4d, %s)\n", j, svd, vic, p_vic_timing->hActive, p_vic_timing->vActive, p_vic_timing->vFreq,(p_vic_timing->prog==0)?("interlace  "):("progressive"));
                            ptr+=n; count-=n;
                        }
                        else
                        {
                            n = scnprintf(ptr, count, "[%2d] SVD=0x%2x, Reserved VIC\n", j, svd);
                            ptr+=n; count-=n;
                        }
                    }
                    n = scnprintf(ptr, count, "----------Video Data Block END------------\n");
                    ptr+=n; count-=n;
                }
            }
            else
            {
                continue;
            }
        }
    }
        break;
    default:
        break;
    }
    n = scnprintf(ptr, count, "====edid_cfg Command====\n");
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "PORT=%d (0~%d, 127=current port)\n", m_sys_specified_port, HDMI_RX_PORT_MAX_NUM);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "CH=%d (0~%d)\n", ch, HDMI_RX_PORT_MAX_NUM);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "MODE=%d (0: table string mode, 1: EDID VDB, 2: EDID HDMI1.4 VSDB)\n", node_edid_mode_ctrl);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "ADD_VIC=x (x= 1~127 or 193~255, Add VIC to EDID VDB)\n");
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "ADD_VIC_NATIVE=x (x= 1~64, Add native VIC to EDID VDB)\n");
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "DEL_VIC=x (x= 1~127 or 193~255, Delete VIC from EDID VDB)\n");
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "DEL_VIC_NATIVE=x (x= 1~64, Delete native VIC to EDID VDB)\n");
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "DEL_ALL=x (x>=1, Delete ALL VIC from EDID VDB, only VIC 0 left)\n");
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "DEF_EDID=%d (255: Current; 0~ 3: default edid index)\n", node_edid_table_index);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "WRITE_DEF=0 (0~ 3: default edid index)\n");
    ptr+=n; count-=n;

    return ptr - buf;
}

static ssize_t hdmi_edid_cfg_status_store(
    struct device*              dev,
    struct device_attribute*    attr,
    const char*                 buf, 
    size_t                      count
    )
{
    unsigned char port=0;
    int val = 0;

    if (strcmp(attr->attr.name, "edid_cfg")!=0)
        return -EINVAL;

    if(m_sys_specified_port == HAL_VFE_HDMI_CURRENT_PORT)
    {
        port =newbase_hdmi_get_current_display_port();
    }
    else
    {
        port =m_sys_specified_port;
    }

    if (sscanf(buf, "MODE=%1d", &val)==1)
    {
        if (val == 0)
        {
             node_edid_mode_ctrl = 0;
             HDMI_EMG("EDID binary mode\n");
        }
        else
        {
            node_edid_mode_ctrl = val;
            HDMI_EMG("EDID string mode\n");
        }
    }
    else if (sscanf(buf, "DEF_EDID=%4d", &val)==1)
    {
        node_edid_table_index = val;
        HDMI_EMG("write DEF_EDID = %d\n", node_edid_table_index);
    }
    else if(sscanf(buf, "ADD_VIC=%5d", &val)==1)
    {
        if((val>0xff)||(val<0x00))
        {
            return -EINVAL;
        }
        newbase_hdmi_edid_add_vic_to_vdb(port, val);
    }
    else if(sscanf(buf, "ADD_VIC_NATIVE=%5d", &val)==1)
    {
        if((val>0xff)||(val<0x00))
        {
            return -EINVAL;
        }
        newbase_hdmi_edid_add_vic_native_to_vdb(port, val);
    }
    else if(sscanf(buf, "DEL_VIC=%5d", &val)==1)
    {
        if((val>0xff)||(val<0x00))
        {
            return -EINVAL;
        }
        newbase_hdmi_edid_del_vic_to_vdb(port, val);
    }
    else if(sscanf(buf, "DEL_VIC_NATIVE=%5d", &val)==1)
    {
        if((val>0xff)||(val<0x00))
        {
            return -EINVAL;
        }
        newbase_hdmi_edid_del_vic_native_to_vdb(port, val);
    }
    else if(sscanf(buf, "DEL_ALL=%1d", &val)==1)
    {
        if(val>=0)
        {
            newbase_hdmi_edid_del_all_vic_to_vdb(port);
        }
    }
    else if(sscanf(buf, "PORT=%1d", &val)==1)
    {
        if(val < HDMI_PORT_TOTAL_NUM)
        {
            m_sys_specified_port = val;
        }
        else
        {
            m_sys_specified_port = HAL_VFE_HDMI_CURRENT_PORT;
        }
        HDMI_EMG("Modify PORT = %d\n", m_sys_specified_port);
    }
    else if(sscanf(buf, "CH=%1d", &val)==1)
    {
        if(hdmi_vfe_get_hdmi_port(val, &port) == 0)
        {
            m_sys_specified_port = port;
        }
        else
        {
            m_sys_specified_port = HAL_VFE_HDMI_CURRENT_PORT;
        }
        HDMI_EMG("Modify PORT = %d\n", m_sys_specified_port);
    }
    else if(sscanf(buf, "WRITE_DEF=%1d", &val)==1)
    {
        unsigned char* edid;

        if(val< 4)
        {
            edid = (unsigned char*)p_default_hdmi_edid_table[val];

            if(m_sys_specified_port == HAL_VFE_HDMI_CURRENT_PORT)
            {
                port =newbase_hdmi_get_current_display_port();
            }
            else
            {
                port =m_sys_specified_port;
            }

            newbase_hdmi_save_edid(port, edid, 256);

            if(newbase_hdmi_write_edid(port, edid, 256)==0)
            {
                HDMI_EMG("%s: err write EDID fail\n", __func__);
            }
            else
            {
                newbase_hdmi_set_hpd(newbase_hdmi_get_current_display_port(), 0);
                msleep(700);
                newbase_hdmi_set_hpd(newbase_hdmi_get_current_display_port(), 1);
            }
        }
    }

    return count;
}

static DEVICE_ATTR(edid_cfg, 0644, hdmi_edid_cfg_status_show, hdmi_edid_cfg_status_store);

//===========================================================================
// Func : hdmi_hdcp14_status_show
//===========================================================================
static ssize_t hdmi_hdcp14_status_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;
    int state = 0;
    HDMI_HDCP_E newbase_hdcp_version = NO_HDCP;
    unsigned char ksv[5] = {0xFF};
    unsigned char device_key[320] = {0xFF};
    unsigned char port = newbase_hdmi_get_current_display_port();

    if (strcmp(attr->attr.name, "hdcp14")!=0)
    {
        return -EINVAL;
    }

    n = scnprintf(ptr, count, "---------------- HDCP1.4 Status --------------\n");
    ptr+=n; count-=n;

    state = vfe_hdmi_drv_read_hdcp(ksv, device_key);
    n = scnprintf(ptr, count, "Read Status : Current Physical Port: %d, Success: %d (0:success, other: fail)\n",
        port,
        state);
    ptr+=n; count-=n;

    if (state!=0)
    {
        n = scnprintf(ptr, count, "Read HDCP fail!!\n");
        ptr+=n; count-=n;
    }
    else
    {
        int i =0;
        unsigned char default_bksv[5] = {0};
        unsigned char match_conut = 0;
        unsigned char* ptr_hdcp = (unsigned char*)newbase_hdmi_get_default_hdcp14_bksv();

        //---------------------------------------
        // HDCP Version
        //---------------------------------------
        n = scnprintf(ptr, count, "HDCP Mode by Port: \n");
        ptr+=n; count-=n;

        for(i = 0; i<HDMI_PORT_TOTAL_NUM; i++)
        {
            newbase_hdcp_version = newbase_hdcp_get_auth_mode(i);
            if(i == port)
            {
                n = scnprintf(ptr, count, "=============Port %d (Current)========\n", i);
                ptr+=n; count-=n;
            }
            else
            {
                n = scnprintf(ptr, count, "=============Port %d==============\n", i);
                ptr+=n; count-=n;
            }

            n = scnprintf(ptr, count, "Current HDCP Mode: %s \n",  _hdmi_hdcp_mode_str(newbase_hdcp_version));
            ptr+=n; count-=n;
        }

        //---------------------------------------
        // HDCP Data
        //---------------------------------------

        n = scnprintf(ptr, count, "KSV: \n");
        ptr+=n; count-=n;
        for(i = 0; i<5; i++)
        {
            default_bksv[i] = *ptr_hdcp;
            ptr_hdcp++;
            if(default_bksv[i] == ksv[i])
            {
                match_conut ++;
            }

            n = scnprintf(ptr, count, "%x\t", ksv[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;

        if(match_conut == 5)
        {
            n = scnprintf(ptr, count, "It's default HDCP Key!!\n");
            ptr+=n; count-=n;
        }

        n = scnprintf(ptr, count, "Device Key: \n");
        ptr+=n; count-=n;
        for(i = 0; i<320; i++)
        {
            if(i%8 == 0)
            {
                n = scnprintf(ptr, count, "\n");
                ptr+=n; count-=n;
            }

            n = scnprintf(ptr, count, "%x\t", device_key[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "====hdcp14 Command====\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "CTRL= (0: write 0, 1: write default key)\n");
        ptr+=n; count-=n;
    }
    return ptr - buf;
}



static ssize_t hdmi_hdcp14_status_store(
    struct device*              dev,
    struct device_attribute*    attr,
    const char*                 buf,
    size_t                      count
    )
{
    int val = 0;
    if (strcmp(attr->attr.name, "hdcp14")==0)
    {
        if (sscanf(buf, "CTRL=%1d", &val)==1)
        {
            switch(val)
            {
            case 0:
            {
                unsigned char BKsv[5] = {0};
                unsigned char Key[320] = {0};
                memset(BKsv, 0, 5);
                memset(Key, 0, 320);
                newbase_hdmi_hdcp14_write_hdcp_key((unsigned char *)BKsv, (unsigned char *)Key, 1);
                HDMI_EMG("0: Clear HDCP to 0 \n");
            }
                break;
            case 1:
            	  newbase_hdmi_hdcp14_write_hdcp_key((unsigned char *)newbase_hdmi_get_default_hdcp14_bksv(), (unsigned char *)newbase_hdmi_get_default_hdcp14_key(), APPLY_KEY_IMMEDATELY);
                HDMI_EMG("1: Assign default HDCP KEY \n");
                break;
            default:
                HDMI_EMG("Other: invaild control \n");
                break;
            }
        }
        else
        {
            pr_debug("Invaild parameter!!\n");
            return -1;
        }
    }
    else
    {
        pr_debug("Invaild attr.name!!\n");
        return -1;
    }

    return count;
}

static DEVICE_ATTR(hdcp14, 0644, hdmi_hdcp14_status_show, hdmi_hdcp14_status_store);

//===========================================================================
// Func : hdmi_hdcp22_status_show
//===========================================================================
static ssize_t hdmi_hdcp22_status_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;
    int state = 0;
    HDMI_HDCP_E newbase_hdcp_version = NO_HDCP;
    unsigned char hdcp_2p2_ReceiverId[5] = {0xFF};
    unsigned char port = newbase_hdmi_get_current_display_port();

    if (strcmp(attr->attr.name, "hdcp22")!=0)
    {
        return -EINVAL;
    }

    n = scnprintf(ptr, count, "---------------- HDCP2.2 Status --------------\n");
    ptr+=n; count-=n;

    state = vfe_hdmi_drv_GetHDCPReceiverId(hdcp_2p2_ReceiverId);
    n = scnprintf(ptr, count, "Read Status : Current Physical Port: %d, Success: %d\n",
        port,
        state);
    ptr+=n; count-=n;


    if (state!=0)
    {
        n = scnprintf(ptr, count, "Read HDCP ReceiverId fail!!\n");
        ptr+=n; count-=n;
    }
    else
    {
        int i =0;
        //---------------------------------------
        // HDCP Version
        //---------------------------------------
        n = scnprintf(ptr, count, "HDCP Mode by Port:\n");
        ptr+=n; count-=n;

        for(i = 0; i<HDMI_PORT_TOTAL_NUM; i++)
        {
            newbase_hdcp_version = newbase_hdcp_get_auth_mode(i);
            if(i == port)
            {
                n = scnprintf(ptr, count, "=============Port %d (Current)========\n", i);
                ptr+=n; count-=n;
            }
            else
            {
                n = scnprintf(ptr, count, "=============Port %d==============\n", i);
                ptr+=n; count-=n;
            }
            n = scnprintf(ptr, count, "Current HDCP Mode: %s \n",  _hdmi_hdcp_mode_str(newbase_hdcp_version));
            ptr+=n; count-=n;

            n = scnprintf(ptr, count, "Is_hdcp2_disabled: %d (0: No, 1:Yes)\n", newbase_hdmi_hdcp_is_hdcp2_disabled(i));
            ptr+=n; count-=n;
        }

        //---------------------------------------
        // HDCP Data
        //---------------------------------------

        n = scnprintf(ptr, count, "ReceiverId: \n");
        ptr+=n; count-=n;
        for(i = 0; i<5; i++)
        {
            n = scnprintf(ptr, count, "%x\t", hdcp_2p2_ReceiverId[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "====hdcp22 Command====\n");
        ptr+=n; count-=n;
    }
    return ptr - buf;
}

static ssize_t hdmi_hdcp22_status_store(
    struct device*              dev,
    struct device_attribute*    attr,
    const char*                 buf,
    size_t                      count
    )
{
    int print_mode = 0;
    if (strcmp(attr->attr.name, "hdcp22")==0)
    {
        if (sscanf(buf, "REAUTH=%5d", &print_mode)==1)
        {//Need implement
            HDMI_EMG("TBD\n");
        }
        else
        {
            pr_debug("Invaild parameter!!\n");
            return -1;
        }
    }
    else
    {
        pr_debug("Invaild attr.name!!\n");
        return -1;
    }

    return count;
}
static DEVICE_ATTR(hdcp22, 0644, hdmi_hdcp22_status_show, hdmi_hdcp22_status_store);

//===========================================================================
// Func : hdmi_spd_show
//===========================================================================
static ssize_t hdmi_spd_info_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int port = 0;
    int i = 0;
    vfe_hdmi_spd_t spd_info;
    unsigned char spd_state = 0;
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;

    if (sscanf(attr->attr.name, "spd_%1d", &port)!=1 || port >= HDMI_PORT_TOTAL_NUM || port <0)
        return -EINVAL;
    spd_info.port = port;
    spd_state = vfe_hdmi_drv_get_port_spd_info(&spd_info);

    /*----------------------------------------------------
    SPD STATUS
    ------------------------------------------------------*/

    n = scnprintf(ptr, count, "---------------- SPD INFOFRAME (vfe)--------------\n");
    ptr+=n; count-=n;

    //---------------------------------------
    // Read Status
    //---------------------------------------
    n = scnprintf(ptr, count, "Read Status : Current CH: %d, State: %d (0: NO_ERR, 1: STATE_ERR, 2: ARG_ERR, 3: HW_ERR)\n",
        port,
        spd_state);
    ptr+=n; count-=n;

    if(spd_state == HDMI_DRV_STATE_ERR)
    {
        n = scnprintf(ptr, count, "[- STATE ERR] \n");
        ptr+=n; count-=n;
    }
    else if(spd_state == HDMI_DRV_ARG_ERR)
    {
        n = scnprintf(ptr, count, "[- ARG ERR] info_frame is NULL or Invalid ch number! ch = %d\n", port);
        ptr+=n; count-=n;
    }
    else if(spd_state == HDMI_DRV_HW_ERR)
    {
        n = scnprintf(ptr, count, "[- HW ERR] can't read on the register or SOC.\n");
        ptr+=n; count-=n;
    }
    else if(spd_state == HDMI_DRV_NO_ERR)
    {
        //---------------------------------------
        // Packet Status
        //---------------------------------------
        n = scnprintf(ptr, count, "packetStatus: %d (0: NOT_RECEIVED, 1: STOPPED, 2: UPDATED)\n", spd_info.packetStatus);
        ptr+=n; count-=n;

        //---------------------------------------
        // type code
        //---------------------------------------
        n = scnprintf(ptr, count, "type_code: 0x%x\n", spd_info.header.type);
        ptr+=n; count-=n;

        //---------------------------------------
        // ver
        //---------------------------------------
        n = scnprintf(ptr, count, "ver: %d\n", spd_info.header.version);
        ptr+=n; count-=n;

        //---------------------------------------
        // len
        //---------------------------------------
        n = scnprintf(ptr, count, "len: %d\n", spd_info.header.length);
        ptr+=n; count-=n;

        //---------------------------------------
        // VendorName
        //---------------------------------------
        n = scnprintf(ptr, count, "------------[VendorName]----------\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "String: \n");
        ptr+=n; count-=n;

        for(i = 0; i<8; i++)
        {
            n = scnprintf(ptr, count, "%c", spd_info.vendor_name[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "Hex: \n");
        ptr+=n; count-=n;
        for(i = 0; i<8; i++)
        {
            n = scnprintf(ptr, count, "0x%x ", spd_info.vendor_name[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;

        //---------------------------------------
        // ProductDesc
        //---------------------------------------
        n = scnprintf(ptr, count, "------------[ProductDesc]----------\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "String: \n");
        ptr+=n; count-=n;

        for(i = 0; i<16; i++)
        {
            n = scnprintf(ptr, count, "%c", spd_info.product_desc[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "Hex: \n");
        ptr+=n; count-=n;
        for(i = 0; i<16; i++)
        {
            n = scnprintf(ptr, count, "0x%x ", spd_info.product_desc[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;
        //---------------------------------------
        // SourceInfo
        //---------------------------------------
        n = scnprintf(ptr, count, "------------[SourceInfo]----------\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x%x\n", spd_info.src_dev_info);
        ptr+=n; count-=n;
    }

    return ptr - buf;
}

static DEVICE_ATTR(spd_0, 0444, hdmi_spd_info_show, NULL);
static DEVICE_ATTR(spd_1, 0444, hdmi_spd_info_show, NULL);
static DEVICE_ATTR(spd_2, 0444, hdmi_spd_info_show, NULL);
static DEVICE_ATTR(spd_3, 0444, hdmi_spd_info_show, NULL);

//===========================================================================
// Func : hdmi_avi_info_show
//===========================================================================
static ssize_t hdmi_avi_info_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int port = 0;
    vfe_hdmi_avi_t avi_info;
    unsigned char state = 0;
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;
    const VIC_TIMING_INFO* vic_timing_info_ptr;

    if (sscanf(attr->attr.name, "avi_%1d", &port)!=1 || port >= HDMI_PORT_TOTAL_NUM || port <0)
        return -EINVAL;

    avi_info.port = port;
    state = vfe_hdmi_drv_get_port_avi_info(&avi_info);

    /*----------------------------------------------------
    AVI STATUS
    ------------------------------------------------------*/

    n = scnprintf(ptr, count, "---------------- AVI INFOFRAME (vfe)--------------\n");
    ptr+=n; count-=n;

    //---------------------------------------
    // Read Status
    //---------------------------------------
    n = scnprintf(ptr, count, "Read Status : Current Ch: %d, State: %d (0: NO_ERR, 1: STATE_ERR, 2: ARG_ERR, 3: HW_ERR)\n",
        port,
        state);
    ptr+=n; count-=n;

    if(state == HDMI_DRV_STATE_ERR)
    {
        n = scnprintf(ptr, count, "[- STATE ERR] \n");
        ptr+=n; count-=n;
    }
    else if(state == HDMI_DRV_ARG_ERR)
    {
        n = scnprintf(ptr, count, "[- ARG ERR] info_frame is NULL or Invalid ch number! ch = %d\n", port);
        ptr+=n; count-=n;
    }
    else if(state == HDMI_DRV_HW_ERR)
    {
        n = scnprintf(ptr, count, "[- HW ERR] can't read on the register or SOC.\n");
        ptr+=n; count-=n;
    }
    else if(state == HDMI_DRV_NO_ERR)
    {
        //---------------------------------------
        // Packet Status
        //---------------------------------------
        n = scnprintf(ptr, count, "packetStatus: %d (0: NOT_RECEIVED, 1: STOPPED, 2: UPDATED)\n", avi_info.packetStatus);
        ptr+=n; count-=n;

        //---------------------------------------
        // type code
        //---------------------------------------
        n = scnprintf(ptr, count, "type_code: 0x%x\n", avi_info.header.type);
        ptr+=n; count-=n;

        //---------------------------------------
        // ver
        //---------------------------------------
        n = scnprintf(ptr, count, "ver: %d\n", avi_info.header.version);
        ptr+=n; count-=n;

        //---------------------------------------
        // len
        //---------------------------------------
        n = scnprintf(ptr, count, "len: %d\n", avi_info.header.length);
        ptr+=n; count-=n;

        //---------------------------------------
        // ColorFormat
        //---------------------------------------
        n = scnprintf(ptr, count, "[BYTE1_Y] ColorFormat: ");
        ptr+=n; count-=n;
        switch(avi_info.pixel_encoding)
        {
        case 0:
        case 1:
        case 2:
        case 3:
            n = scnprintf(ptr, count, "%s\n", _hdmi_color_space_str(avi_info.pixel_encoding));
            break;
        //case 4:
        //case 5:
        //case 6:
        //        n = scnprintf(ptr, count, "Reserved\n");
        //    break;
        //case 7:
        //        n = scnprintf(ptr, count, "IDO-Defined\n");
        //    break;
        default:
                n = 0;
            break;
        }
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE1_A] active_info: %d\n", avi_info.pixel_encoding);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE1_B] bar_info: %d\n", avi_info.bar_info);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE1_S] scan_info: %d\n", avi_info.scan_info);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE2_C] colorimetry: %d\n", avi_info.colorimetry);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE2_M] picture_aspect_ratio: %d\n", avi_info.picture_aspect_ratio);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE2_R] active_format_aspect_ratio: %d\n", avi_info.active_format_aspect_ratio);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE3_ITC] it_content: %d\n", avi_info.it_content);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE3_EC] extended_colorimetry: %d\n", avi_info.extended_colorimetry);
        ptr+=n; count-=n;

        //---------------------------------------
        // RGB ColorRange
        //---------------------------------------
        n = scnprintf(ptr, count, "[BYTE3_Q] RGBColorRange: ");
        ptr+=n; count-=n;
        switch(avi_info.rgb_quantization_range)
        {
        case VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_DEFAULT:
                n = scnprintf(ptr, count, "Default\n");
            break;
        case VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_LIMITEDRANGE:
                n = scnprintf(ptr, count, "Limit\n");
            break;
        case VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_FULLRANGE:
                n = scnprintf(ptr, count, "Full\n");
            break;
        case VFE_HDMI_AVI_RGB_QUANTIZATION_RANGE_RESERVED:
                n = scnprintf(ptr, count, "Reserved\n");
            break;
        default:
                n = 0;
            break;
        }
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "[BYTE3_SC] scaling: %d\n", avi_info.scaling);
        ptr+=n; count-=n;

        //---------------------------------------
        // VIC
        //---------------------------------------
        n = scnprintf(ptr, count, "[BYTE4_VIC] VIC: %d\n", avi_info.video_id_code);
        ptr+=n; count-=n;
        vic_timing_info_ptr = _get_vic_timing(avi_info.video_id_code);
        if (vic_timing_info_ptr)
        {
            n = scnprintf(ptr, count, "HActive: %d, VActive: %d\n", vic_timing_info_ptr->hActive, vic_timing_info_ptr->vActive);
            ptr+=n; count-=n;
            n = scnprintf(ptr, count, "Progressive(1: Prog. 0: Interlace): %d\n", vic_timing_info_ptr->prog);
            ptr+=n; count-=n;
            n = scnprintf(ptr, count, "hFreq: %d, vFreq: %d\n", vic_timing_info_ptr->hFreq, vic_timing_info_ptr->vFreq);
            ptr+=n; count-=n;
            n = scnprintf(ptr, count, "HTotal: %d, VTotal: %d\n", vic_timing_info_ptr->hTotal, vic_timing_info_ptr->vTotal);
            ptr+=n; count-=n;
            n = scnprintf(ptr, count, "hSyncWidth: %d, vSyncWidth: %d\n", vic_timing_info_ptr->hSyncWidth, vic_timing_info_ptr->vSyncWidth);
            ptr+=n; count-=n;
            n = scnprintf(ptr, count, "hBackPorch: %d, vBackPorch: %d\n", vic_timing_info_ptr->hBackPorch, vic_timing_info_ptr->vBackPorch);
            ptr+=n; count-=n;
            n = scnprintf(ptr, count, "hStart: %d, vStart: %d\n",  vic_timing_info_ptr->hSyncWidth + vic_timing_info_ptr->hBackPorch, vic_timing_info_ptr->vSyncWidth + vic_timing_info_ptr->vBackPorch);
            ptr+=n; count-=n;
            n = scnprintf(ptr, count, "PolarityFlag (0: HN_VN, 1: HP_VN, 2: HN_VP, 3: HP_VP): %d\n", vic_timing_info_ptr->PolarityFlag);
            ptr+=n; count-=n;

        }
        else
        {
            n = scnprintf(ptr, count, "Mismatch VIC timing\n");
            ptr+=n; count-=n;
        }

        //---------------------------------------
        // YCC ColorRange
        //---------------------------------------
        n = scnprintf(ptr, count, "[BYTE5_YQ] YCCColorRange: ");
        ptr+=n; count-=n;
        switch(avi_info.ycc_quantization_range)
        {
        case VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_LIMITEDRANGE:
                n = scnprintf(ptr, count, "Limit\n");
            break;
        case VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_FULLRANGE:
                n = scnprintf(ptr, count, "Full\n");
            break;
        case VFE_HDMI_AVI_YCC_QUANTIZATION_RANGE_RESERVED:
        //case 3:
                n = scnprintf(ptr, count, "Reserved\n");
            break;
        default:
                n = 0;
            break;
        }
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE5_CN] content_type: %d\n", avi_info.content_type);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE5_PR] pixel_repeat: %d\n", avi_info.pixel_repeat);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE6_7_ETB] TopBarEndLineNumber: %d\n", avi_info.TopBarEndLineNumber);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE8_9_SBB] BottomBarStartLineNumber: %d\n", avi_info.BottomBarStartLineNumber);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE10_11_ELB] LeftBarEndPixelNumber: %d\n", avi_info.LeftBarEndPixelNumber);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE12_13_SRB] RightBarEndPixelNumber: %d\n", avi_info.RightBarEndPixelNumber);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE14_ACE] additional_colorimetry: %d\n", avi_info.additional_colorimetry);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "[BYTE14_F14] F14: %d\n", avi_info.f14);
        ptr+=n; count-=n;
    }

    return ptr - buf;
}

static DEVICE_ATTR(avi_0, 0444, hdmi_avi_info_show, NULL);
static DEVICE_ATTR(avi_1, 0444, hdmi_avi_info_show, NULL);
static DEVICE_ATTR(avi_2, 0444, hdmi_avi_info_show, NULL);
static DEVICE_ATTR(avi_3, 0444, hdmi_avi_info_show, NULL);

//===========================================================================
// Func : hdmi_vs_dvs_info_show
//===========================================================================
static ssize_t hdmi_vs_dvs_info_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int port = 0;
    int i = 0;
    KADP_HAL_VFE_HDMI_IN_PACKET_T info[2] = {0};
    unsigned char state = 0;
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;
    unsigned char vs_dvs = 0xff;    //vs: 0 , 1: dvs

    if (sscanf(attr->attr.name, "vsi_%1d", &port)==1 || port >= HDMI_PORT_TOTAL_NUM || port <0)
    {
        if(port >= HDMI_PORT_TOTAL_NUM || port <0)
        {
            return -EINVAL;
        }
        else
        {
            vs_dvs = 0;
        }
    }
    else if(sscanf(attr->attr.name, "dvs_%1d", &port)==1|| port >= HDMI_PORT_TOTAL_NUM || port <0)
    {
        if(port >= HDMI_PORT_TOTAL_NUM || port <0)
        {
            return -EINVAL;
        }
        else
        {
            vs_dvs = 1;
        }
    }
    else
    {
        return -EINVAL;
    }

    state = vfe_hdmi_drv_get_port_multi_vsi_info(port, &info[0], 2);

    if(vs_dvs == 0)
    {
        n = scnprintf(ptr, count, "---------------- VSI INFOFRAME (vfe)--------------\n");
        ptr+=n; count-=n;
    }
    else if(vs_dvs == 1)
    {
        n = scnprintf(ptr, count, "---------------- DVSI INFOFRAME (vfe)--------------\n");
        ptr+=n; count-=n;
    }
    else
    {
        return -EINVAL;
    }

    //---------------------------------------
    // Read Status
    //---------------------------------------
    n = scnprintf(ptr, count, "Read Status : Current CH: %d, State: %d (0: NO_ERR, 1: STATE_ERR, 2: ARG_ERR, 3: HW_ERR)\n",
        port,
        state);
    ptr+=n; count-=n;

    if(state == HDMI_DRV_STATE_ERR)
    {
        n = scnprintf(ptr, count, "[- STATE ERR] \n");
        ptr+=n; count-=n;
    }
    else if(state == HDMI_DRV_ARG_ERR)
    {
        n = scnprintf(ptr, count, "[- ARG ERR] info_frame is NULL or Invalid ch number! ch = %d\n", port);
        ptr+=n; count-=n;
    }
    else if(state == HDMI_DRV_HW_ERR)
    {
        n = scnprintf(ptr, count, "[- HW ERR] can't read on the register or SOC.\n");
        ptr+=n; count-=n;
    }
    else if(state == HDMI_DRV_NO_ERR)
    {
        //---------------------------------------
        // type code
        //---------------------------------------
        n = scnprintf(ptr, count, "type_code: 0x%x\n", info[vs_dvs].type);
        ptr+=n; count-=n;

        //---------------------------------------
        // ver
        //---------------------------------------
        n = scnprintf(ptr, count, "ver: %d\n", info[vs_dvs].version);
        ptr+=n; count-=n;

        //---------------------------------------
        // len
        //---------------------------------------
        n = scnprintf(ptr, count, "len: %d\n", info[vs_dvs].length);
        ptr+=n; count-=n;

        //---------------------------------------
        // Payload
        //---------------------------------------
        n = scnprintf(ptr, count, "Packet Data(Hex): \n");
        ptr+=n; count-=n;
        for(i = 0; i<HAL_VFE_HDMI_PACKET_DATA_LENGTH; i++)
        {
            n = scnprintf(ptr, count, "%x ", info[vs_dvs].dataBytes[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;

    }

    return ptr - buf;
}

static DEVICE_ATTR(vsi_0, 0444, hdmi_vs_dvs_info_show, NULL);
static DEVICE_ATTR(vsi_1, 0444, hdmi_vs_dvs_info_show, NULL);
static DEVICE_ATTR(vsi_2, 0444, hdmi_vs_dvs_info_show, NULL);
static DEVICE_ATTR(vsi_3, 0444, hdmi_vs_dvs_info_show, NULL);
static DEVICE_ATTR(dvs_0, 0444, hdmi_vs_dvs_info_show, NULL);
static DEVICE_ATTR(dvs_1, 0444, hdmi_vs_dvs_info_show, NULL);
static DEVICE_ATTR(dvs_2, 0444, hdmi_vs_dvs_info_show, NULL);
static DEVICE_ATTR(dvs_3, 0444, hdmi_vs_dvs_info_show, NULL);

//===========================================================================
// Func : hdmi_drm_info_show
//===========================================================================
static ssize_t hdmi_drm_info_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    unsigned char ch = 0;
    int port= 0;
    HDMI_DRM_T info;
    int state = 0;
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;
    vfe_hdmi_override_eotf_e override_eotf_type = VFE_HDMI_OVERRIDE_EOTF_AUTO;

    if (sscanf(attr->attr.name, "drm_%1d", &port)!=1 || port >= HDMI_PORT_TOTAL_NUM || port <0)
        return -EINVAL;

    state = newbase_hdmi_get_drm_infoframe(port, &info);
    hdmi_vfe_get_hdmi_channel(port, &ch);

    vfe_hdmi_drv_get_drm_override_eotf(ch, &override_eotf_type);
    /*----------------------------------------------------
    DRM STATUS (Dynamic Range and Mastering InfoFrames)
    ------------------------------------------------------*/

    n = scnprintf(ptr, count, "---------------- DRM INFOFRAME (override_eotf: %d)--------------\n", override_eotf_type);
    ptr+=n; count-=n;

    //---------------------------------------
    // Read Status
    //---------------------------------------
    n = scnprintf(ptr, count, "Read Status : Override_eotf: %d, Current ch:%d, Physical PORT: %d, State: %d (0: fail, 1: OK)\n",
        override_eotf_type,
        ch,
        port,
        state);
    ptr+=n; count-=n;

    if(override_eotf_type != VFE_HDMI_OVERRIDE_EOTF_AUTO)
    {
        n = scnprintf(ptr, count, "\n---------------- OVERRIDE EOTF: %d)--------------\n", override_eotf_type);
        ptr+=n; count-=n;

        //---------------------------------------
        // type code
        //---------------------------------------
        n = scnprintf(ptr, count, "type_code: 0x%x\n", TYPE_CODE_DRM_PACKET);
        ptr+=n; count-=n;

        //---------------------------------------
        // ver
        //---------------------------------------
        n = scnprintf(ptr, count, "[Override] ver: 1\n");
        ptr+=n; count-=n;

        //---------------------------------------
        // len
        //---------------------------------------
        n = scnprintf(ptr, count, "[Override] len: 26\n");
        ptr+=n; count-=n;

        //---------------------------------------
        // EOTFtype
        //---------------------------------------
        n = scnprintf(ptr, count, "[Override] EOTFtype: %d (%s)\n", override_eotf_type, _hdmi_drm_eotf_str(override_eotf_type));
        ptr+=n; count-=n;

    }
    else if(state != 0)
    {
        //---------------------------------------
        // ver
        //---------------------------------------
        n = scnprintf(ptr, count, "ver: %d\n", info.ver);
        ptr+=n; count-=n;

        //---------------------------------------
        // len
        //---------------------------------------
        n = scnprintf(ptr, count, "len: %d\n", info.len);
        ptr+=n; count-=n;

        //---------------------------------------
        // EOTFtype
        //---------------------------------------
        n = scnprintf(ptr, count, "EOTFtype: %d (%s)\n", info.eEOTFtype, _hdmi_drm_eotf_str(info.eEOTFtype));
        ptr+=n; count-=n;



        //---------------------------------------
        // Meta_Desc
        //---------------------------------------
        n = scnprintf(ptr, count, "Meta_Desc: ");
        ptr+=n; count-=n;
        switch(info.eMeta_Desc)
        {
        case 0:
                n = scnprintf(ptr, count, "Static Type1\n");
            break;
        default:
                n = scnprintf(ptr, count, "Reserved\n");
            break;
        }
        ptr+=n; count-=n;

        //---------------------------------------
        // display_primaries_x0 y0
        //---------------------------------------
        n = scnprintf(ptr, count, "Primaries_x0: %d\n", info.display_primaries_x0);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "Primaries_y0: %d\n", info.display_primaries_y0);
        ptr+=n; count-=n;

        //---------------------------------------
        // display_primaries_x1 y1
        //---------------------------------------
        n = scnprintf(ptr, count, "Primaries_x1: %d\n", info.display_primaries_x1);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "Primaries_y1: %d\n", info.display_primaries_y1);
        ptr+=n; count-=n;

        //---------------------------------------
        // display_primaries_x2 y2
        //---------------------------------------
        n = scnprintf(ptr, count, "Primaries_x2: %d\n", info.display_primaries_x2);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "Primaries_y2: %d\n", info.display_primaries_y2);
        ptr+=n; count-=n;

        //---------------------------------------
        // white_point_x y
        //---------------------------------------
        n = scnprintf(ptr, count, "White_x: %d\n", info.white_point_x);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "White_y: %d\n", info.white_point_y);
        ptr+=n; count-=n;

        //---------------------------------------
        // Mastering luminance Max/min
        //---------------------------------------
        n = scnprintf(ptr, count, "Mastering luminance Max/min: %d, %d\n", info.max_display_mastering_luminance,  info.min_display_mastering_luminance);
        ptr+=n; count-=n;

        //---------------------------------------
        // Content light level Max
        //---------------------------------------
        n = scnprintf(ptr, count, "Content light level Max: %d\n", info.maximum_content_light_level);
        ptr+=n; count-=n;

        //---------------------------------------
        // Frame light level average
        //---------------------------------------
        n = scnprintf(ptr, count, "Frame light level  avg: %d\n", info.maximum_frame_average_light_level);
        ptr+=n; count-=n;

    }
    else
    {
        n = scnprintf(ptr, count, "Read fail!! state=%d, override=%d\n", state, override_eotf_type );
        ptr+=n; count-=n;

    }
    n = scnprintf(ptr, count, "====drm_x Command====\n");
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "EOTF=%d (%d:UserDRM packet, Other: force override EOTF)\n", override_eotf_type, VFE_HDMI_OVERRIDE_EOTF_AUTO);
    ptr+=n; count-=n;

    return ptr - buf;
}


//===========================================================================
// Func : hdmi_drm_info_store
//===========================================================================
static ssize_t hdmi_drm_info_store(struct device *dev,
                   struct device_attribute *attr,
                   const char *buf, size_t count)
{
    int val;
    int port = 0;

    if (buf == NULL ||
        sscanf(attr->attr.name, "drm_%1d", &port)!=1 || 
        port >= HDMI_PORT_TOTAL_NUM || 
        port <0)
        return -EINVAL;

    if (sscanf(buf, "EOTF=%x", &val)==1)
    {
        unsigned char current_ch = 0;
        int state = 0;
        hdmi_vfe_get_hdmi_channel(port, &current_ch);
        state = vfe_hdmi_drv_set_drm_override_eotf(current_ch, val);
        HDMI_EMG("hdmi_drm_info_store, ch=%d, port=%d, override_eotf=%d\n", current_ch, port, val);
    }


    return count;
}

static DEVICE_ATTR(drm_0, 0644, hdmi_drm_info_show, hdmi_drm_info_store);
static DEVICE_ATTR(drm_1, 0644, hdmi_drm_info_show, hdmi_drm_info_store);
static DEVICE_ATTR(drm_2, 0644, hdmi_drm_info_show, hdmi_drm_info_store);
static DEVICE_ATTR(drm_3, 0644, hdmi_drm_info_show, hdmi_drm_info_store);

//===========================================================================
// Func : hdmi_vtem_info_show
//===========================================================================
static ssize_t hdmi_vtem_info_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int port = 0;
    HDMI_EM_VTEM_T info;
    unsigned char state = 0;
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;

    if (sscanf(attr->attr.name, "vtem_%1d", &port)!=1 || port >= HDMI_PORT_TOTAL_NUM || port <0)
        return -EINVAL;
    state = newbase_hdmi_get_vtem_info(port, &info);

    /*----------------------------------------------------
    VTEM STATUS (From emp packet)
    ------------------------------------------------------*/

    n = scnprintf(ptr, count, "---------------- VTEM EM Packet (newbase)--------------\n");
    ptr+=n; count-=n;

    //---------------------------------------
    // Read Status
    //---------------------------------------
    n = scnprintf(ptr, count, "Read Status : Current Physical PORT: %d, State: %d (0: Fail, 1: OK)\n",
        port,
        state);
    ptr+=n; count-=n;
    if(state == 0)
    {
        n = scnprintf(ptr, count, "Read fail!!\n");
        ptr+=n; count-=n;
    }
    else
    {
        unsigned short current_Vfreq = 0;
        VRR_FRAMERATE_INFO_TYPE get_vrr_result = VRR_FRAMERATE_ERROR;
        //---------------------------------------
        // FVA_Factor_M1
        //---------------------------------------
        n = scnprintf(ptr, count, "FVA_Factor_M1: %d\n", info.FVA_Factor_M1);
        ptr+=n; count-=n;

        //---------------------------------------
        // M_CONST
        //---------------------------------------
        n = scnprintf(ptr, count, "M_CONST: %d\n", info.M_CONST);
        ptr+=n; count-=n;

        //---------------------------------------
        // VRR_EN
        //---------------------------------------
        n = scnprintf(ptr, count, "VRR_EN: %d\n", info.VRR_EN);
        ptr+=n; count-=n;

        //---------------------------------------
        // VRR_EN test
        //---------------------------------------
        n = scnprintf(ptr, count, "VRR_EN func call: %d\n", newbase_hdmi_get_vrr_enable(port));
        ptr+=n; count-=n;

        //---------------------------------------
        // Base_Vfront
        //---------------------------------------
        n = scnprintf(ptr, count, "Base_Vfront: %d\n", info.Base_Vfront);
        ptr+=n; count-=n;

        //---------------------------------------
        // Base_Refresh_Rate
        //---------------------------------------
        n = scnprintf(ptr, count, "Base_Refresh_Rate: %d\n", info.Base_Refresh_Rate);
        ptr+=n; count-=n;

        //---------------------------------------
        // RB
        //---------------------------------------
        n = scnprintf(ptr, count, "RB: %d\n", info.RB);
        ptr+=n; count-=n;

        //---------------------------------------
        // Get Current V Frequency
        //---------------------------------------
        get_vrr_result = get_hdmi_vrr_framerate(&current_Vfreq);
        if(get_vrr_result == VRR_FRAMERATE_FROM_SCALER)
        {
            n = scnprintf(ptr, count, "Vfreq(VRR+ONMS): %d (/10)\n", current_Vfreq);
        }
        else if(get_vrr_result == VRR_FRAMERATE_DISABLE)
        {
            HDMI_TIMING_T tm;
            if (!newbase_hdmi_get_timing(port, &tm))
            {
                n = scnprintf(ptr, count, "get timig info failed!\n");
            }
            else
            {
                current_Vfreq = (unsigned short)tm.v_freq;
                n = scnprintf(ptr, count, "Vfreq(No VRR+OFFMS): %d (/10)\n", current_Vfreq);
            }
        }
        else
        {
        	n = scnprintf(ptr, count, "Scaler is not at _MODE_STATE_ACTIVE or Current port is not HDMI!\n");
        }
        ptr+=n; count-=n;
    }

    return ptr - buf;
}

static DEVICE_ATTR(vtem_0, 0444, hdmi_vtem_info_show, NULL);
static DEVICE_ATTR(vtem_1, 0444, hdmi_vtem_info_show, NULL);
static DEVICE_ATTR(vtem_2, 0444, hdmi_vtem_info_show, NULL);
static DEVICE_ATTR(vtem_3, 0444, hdmi_vtem_info_show, NULL);

//===========================================================================
// Func : hdmi_attr_show_flow_cfg
//===========================================================================
static ssize_t hdmi_attr_show_flow_cfg(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;

    if (strcmp(attr->attr.name, "flow_cfg")==0)
    {
        int start_group = 0;
        int end_group = 0;
        int i = 0;
        int j = 0;
        n = scnprintf(ptr, count, "----------------------------------------- --------------\n");
        ptr+=n; count-=n;
        //n = scnprintf(ptr, count, "-----Flow Config Table----(PAGE index: %d/%d, Total Group: %d)\n", m_flow_cfg_page, page_num, HDMI_FLOW_CFG_GROUP_NUM);
        n = scnprintf(ptr, count, "-----Flow Config Table----(Total Group: %d)\n", HDMI_FLOW_CFG_GROUP_NUM);
        ptr+=n; count-=n;

        //start_group = m_flow_cfg_page *4;
        //end_group =  (end_group<HDMI_FLOW_CFG_GROUP_NUM ? (m_flow_cfg_page*4 +3) : (HDMI_FLOW_CFG_GROUP_NUM -1));
        start_group = 0;
        end_group =  HDMI_FLOW_CFG_GROUP_NUM -1;

        for(i = start_group; i <= end_group; i++)
        {
            HDMI_CFG_ENTRY_T* p_current_cfg_table = p_flow_cfg_group_table[i].p_cfg_table;

            n = scnprintf(ptr, count, "[%d]. Group name: [%s]\n", i, p_flow_cfg_group_table[i].pcb_enum_name);
            ptr+=n; count-=n;
            n = scnprintf(ptr, count, "id strt end    val   max swrw pcbw sww \t name\n");
            ptr+=n; count-=n;

            for(j = 0; j< p_flow_cfg_group_table[i].cfg_table_length; j++)
            {
                unsigned char start_bit = p_current_cfg_table[j].start_bit_index;
                unsigned char end_bit = p_current_cfg_table[j].end_bit_index;
                unsigned int max_value  = newbase_hdmi_calculate_entry_max_value(i, j);

                n = scnprintf(ptr, count, "%2d %2d   %2d   %5d %5d  %d    %d    %d\t %s\n", j, start_bit, end_bit, 
                GET_FLOW_CFG(i, j),
                max_value,
                (CTRL_SW_WRITE_ENABLE_FLAG==(p_current_cfg_table[j].ctrl_config&CTRL_SW_WRITE_ENABLE_FLAG)),
                (STATUS_PCB_UPDATE_FLAG==(p_current_cfg_table[j].entry_status&STATUS_PCB_UPDATE_FLAG)),
                (STATUS_SW_UPDATE_FLAG==(p_current_cfg_table[j].entry_status&STATUS_SW_UPDATE_FLAG)),
                GET_FLOW_CFG_NAME(i, j));
                ptr+=n; count-=n;
            }
        }
        n = scnprintf(ptr, count, "-----Flow Control Parameter (Fine tune for project debugging)----\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "GxEy=z; x= group id, y= entry id, z= set value\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "PAGE=%d; x= 0~255,\n", m_flow_cfg_page);
        ptr+=n; count-=n;
        //---------------------------------------------------
        //  EDID Change Current Hot Plug Detect Low Latency (ms)
        //---------------------------------------------------
        n = scnprintf(ptr, count, "HL=%d (current %s Default: %d*10 (ms), Range: 0~2550)\n",
        newbase_hdmi_get_hpd_low_delay(),
        GET_FLOW_CFG_NAME(HDMI_FLOW_CFG_HPD, HDMI_FLOW_CFG1_DEF_HPD_LOW_10MS),
        GET_FLOW_CFG(HDMI_FLOW_CFG_HPD, HDMI_FLOW_CFG1_DEF_HPD_LOW_10MS));
        ptr+=n; count-=n;

        //---------------------------------------------------
        // DC ON/OFF Hot Plug Detect Low Latency (ms), Currently SHL write is no use, because the value be reset after DC OFF to ON.
        //---------------------------------------------------
        n = scnprintf(ptr, count, "SHL=%d (current %s Default: %d*10 (ms), Range: 0~2550)\n",
        newbase_hdmi_get_str_hpd_low_ms(),
        GET_FLOW_CFG_NAME(HDMI_FLOW_CFG_HPD, HDMI_FLOW_CFG1_DEF_STR_HPD_10MS),
        GET_FLOW_CFG(HDMI_FLOW_CFG_HPD, HDMI_FLOW_CFG1_DEF_STR_HPD_10MS));
        ptr+=n; count-=n;

    }
    else
    {
        n = scnprintf(ptr, count, "Invalid!\n");
        ptr+=n; count-=n;
    }

    return ptr - buf;
}

//===========================================================================
// Func : hdmi_attr_store_flow_cfg
//===========================================================================
static ssize_t hdmi_attr_store_flow_cfg(struct device *dev,
                   struct device_attribute *attr,
                   const char *buf, size_t count)
{
    int val;
    int group_id;
    int entry_id;

    if (strcmp(attr->attr.name, "flow_cfg")==0)
    {
        if (sscanf(buf, "G%2dE%2d=%5d", &group_id, &entry_id, &val)==3)
        {
            pr_debug("[HDMISYS] group_id=%d, entry_id=%d, val=%d\n", group_id, entry_id, val);

            if (0 ==newbase_hdmi_set_flow_cfg_entry(group_id, entry_id, val))
            {
                pr_debug("[HDMISYS]%s=%d, set successful!!!\n",
                GET_FLOW_CFG_NAME(group_id, entry_id),
                val);

                //special process for specificed command
                if((group_id == HDMI_FLOW_CFG_GENERAL) && ( entry_id == HDMI_FLOW_CFG0_SUPPORT_DSC))
                {//toggle HPD
                    newbase_hdmi_set_hpd(newbase_hdmi_get_current_display_port(), 0);
                    mdelay(300);
                    newbase_hdmi_set_hpd(newbase_hdmi_get_current_display_port(), 1);
                }
            }
            else
            {
                pr_debug("[HDMISYS]%s=%d, set fail! Out of Range!\n",
                GET_FLOW_CFG_NAME(group_id, entry_id),
                val);
            }
        }
        else if (sscanf(buf, "PAGE=%5d", &val)==1)
        {
            if (val<=255)
            {
                m_flow_cfg_page = val;
            }
        }
        else if (sscanf(buf, "HL=%5d", &val)==1)
        {
            if (val<=2550&& val>=0)
            {
                newbase_hdmi_set_hpd_low_delay((unsigned int)val);
            }
            else
            {
                pr_debug("[HDMISYS]current hpd_low_ms=%d, set fail! Out of Range(0~2550)!\n", val);
            }
        }
        else if (sscanf(buf, "SHL=%5d", &val)==1)
        {
            if (val<=2550&& val>=0)
            {
                newbase_hdmi_set_str_hpd_low_ms((unsigned int)val);
            }
            else
            {
                pr_debug("current str_hpd_low_ms=%d, set fail! Out of Range(0~2550)!\n", val);
            }
        }
        else
        {
            pr_debug("Invaild parameter!!\n");
            return -1;
        }
    }
    else
    {
        return -1;
    }

    return count;
}

static DEVICE_ATTR(flow_cfg, 0644, hdmi_attr_show_flow_cfg, hdmi_attr_store_flow_cfg);

//===========================================================================
// Func : hdmi_scdc_info_show
//===========================================================================
static ssize_t hdmi_scdc_info_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;

    unsigned char nport = newbase_hdmi_get_current_display_port();
    unsigned char scdc_01 = lib_hdmi_scdc_read(nport,  0x01);
    unsigned char scdc_10 = lib_hdmi_scdc_read(nport,  0x10);
    unsigned char scdc_11 = lib_hdmi_scdc_read(nport,  0x11);
    unsigned char scdc_20 = lib_hdmi_scdc_read(nport,  0x20);
    unsigned char scdc_21 = lib_hdmi_scdc_read(nport,  0x21);
    unsigned char scdc_30 = lib_hdmi_scdc_read(nport,  0x30);
    unsigned char scdc_31 = lib_hdmi_scdc_read(nport,  0x31);
    unsigned char scdc_40 = lib_hdmi_scdc_read(nport,  0x40);
    unsigned char scdc_41 = lib_hdmi_scdc_read(nport,  0x41);
    unsigned char scdc_42 = lib_hdmi_scdc_read(nport,  0x42);
    unsigned char scdc_50 = lib_hdmi_scdc_read(nport,  0x50);
    unsigned char scdc_51 = lib_hdmi_scdc_read(nport,  0x51);
    unsigned char scdc_52 = lib_hdmi_scdc_read(nport,  0x52);
    unsigned char scdc_53 = lib_hdmi_scdc_read(nport,  0x53);
    unsigned char scdc_54 = lib_hdmi_scdc_read(nport,  0x54);
    unsigned char scdc_55 = lib_hdmi_scdc_read(nport,  0x55);
    unsigned char scdc_56 = lib_hdmi_scdc_read(nport,  0x56);
    unsigned char scdc_57 = lib_hdmi_scdc_read(nport,  0x57);
    unsigned char scdc_58 = lib_hdmi_scdc_read(nport,  0x58);
    unsigned char scdc_59 = lib_hdmi_scdc_read(nport,  0x59);


    n = scnprintf(ptr, count, "------------SCDC Status----------\n");
    ptr+=n; count-=n;

    n = scnprintf(ptr, count, "0x01: 0x%2x\n", scdc_01);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x10: 0x%2x\n", scdc_10);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x11: 0x%2x\n", scdc_11);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x20: 0x%2x\n", scdc_20);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x21: 0x%2x\n", scdc_21);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x30: 0x%2x\n", scdc_30);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x31: 0x%2x\n", scdc_31);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x40: 0x%2x\n", scdc_40);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x41: 0x%2x\n", scdc_41);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x42: 0x%2x\n", scdc_42);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x50: 0x%2x\n", scdc_50);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x51: 0x%2x\n", scdc_51);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x52: 0x%2x\n", scdc_52);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x53: 0x%2x\n", scdc_53);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x54: 0x%2x\n", scdc_54);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x55: 0x%2x\n", scdc_55);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x56: 0x%2x\n", scdc_56);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x57: 0x%2x\n", scdc_57);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x58: 0x%2x\n", scdc_58);
    ptr+=n; count-=n;
    n = scnprintf(ptr, count, "0x59: 0x%2x\n", scdc_59);
    ptr+=n; count-=n;

    return ptr - buf;
}

//===========================================================================
// Func : hdmi_scdc_info_store
//===========================================================================
static ssize_t hdmi_scdc_info_store(struct device *dev,
                   struct device_attribute *attr,
                   const char *buf, size_t count)
{
    int val;

    if (strcmp(attr->attr.name, "scdc")==0)
    {
        if (sscanf(buf, "WRITE=%x", &val)==1)
        {
        }
    }

    return count;
}

static DEVICE_ATTR(scdc, 0644, hdmi_scdc_info_show, hdmi_scdc_info_store);

//===========================================================================
// Func : hdmi_rsv_info_show
//===========================================================================
static ssize_t hdmi_rsv_info_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    RESERVED_PACKET_DATA* reserved_data_ptr = NULL;
    INFO_PACKET_CONFIG* info_packet_cfg_ptr;
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;
    unsigned char reserved_index = 3;// TBD, need to modify for general index case
    INFO_PACKET_TYPE reserved_info_type = INFO_TYPE_RSV3;

    info_packet_cfg_ptr = newbase_hdmi_get_infopacket_config(reserved_info_type);
    /*----------------------------------------------------
    Reserved Packet for debugging
    ------------------------------------------------------*/

    n = scnprintf(ptr, count, "---------------- [Reserved Packet: %d]--------------\n", reserved_index);
    ptr+=n; count-=n;

    if(info_packet_cfg_ptr == NULL)
    {
        n = scnprintf(ptr, count, "NULL PTR!! Need debugging reserved_buf_ptr or info_packet_cfg_ptr\n");
        ptr+=n; count-=n;
    }
    else
    {
        unsigned int i = 0;

        reserved_data_ptr = newbase_hdmi_get_reserved_data(reserved_index, m_sys_specified_port);
        //---------------------------------------
        // Type Code Reference
        //---------------------------------------

        n = scnprintf(ptr, count, "------------Type Code Reference----------\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x00 NULL\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x01 AUDIO_CLOCK_REGENERATION_PACKET\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x02 AUDIO_SAMPLE_PACKET\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x03 GENERAL_CONTROL_PACKET\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x04 AUDIO_CONTENT_POTECTION_PACKET\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x05 ISRC\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x06 ISRC2\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x07 OB_AUDIO_SAMPLE\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x08 DST_AUDIO_PACKET\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x09 HBR_SAMPLE_PACKET\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x0A GAMUT_METADATA\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x0D AUDIO_METADATA\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x7F EMP\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x81 VS\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x82 AVI\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x83 SPD\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x84 AUDIO_PACKET\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x85 MPEG_SRC\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x86 NTSC_VBI\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "0x87 DRM\n");
        ptr+=n; count-=n;

        //---------------------------------------
        // Reserved Packet Config
        //---------------------------------------
        n = scnprintf(ptr, count, "------------Reserved Packet: %d Config----------\n", reserved_index);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "enable=%d (0:  disable, 1: enable)\n", info_packet_cfg_ptr->enable);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "type_code=%x (Hex, 0x00~0xFF, 0: force disable)\n", info_packet_cfg_ptr->type_code);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "fsm=%d (%s) (detect packet start at FSM)\n", info_packet_cfg_ptr->detect_start_state, _hdmi_video_fsm_str(info_packet_cfg_ptr->detect_start_state));
        ptr+=n; count-=n;

        //---------------------------------------
        // Refresh Index
        //---------------------------------------
        n = scnprintf(ptr, count, "------------Raw Data [Port: %x] [Type Code: 0x%x]----------\n", m_sys_specified_port, info_packet_cfg_ptr->type_code);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "Refersh index: %d\n", reserved_data_ptr->pkt_received_cnt);
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "String: \n");
        ptr+=n; count-=n;
        for(i = 0; i<RESERVED_LEN; i++)
        {
            n = scnprintf(ptr, count, "%c", reserved_data_ptr->pkt_buf[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "Hex: \n");
        ptr+=n; count-=n;
        for(i = 0; i<RESERVED_LEN; i++)
        {
            n = scnprintf(ptr, count, "0x%2x ", reserved_data_ptr->pkt_buf[i]);
            ptr+=n; count-=n;
        }
        n = scnprintf(ptr, count, "\n");
        ptr+=n; count-=n;

        n = scnprintf(ptr, count, "------------Other Command----------\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "clear_buf=1, force clear 0 to temp buf.\n");
        ptr+=n; count-=n;
    }

    return ptr - buf;
}

//===========================================================================
// Func : hdmi_rsv_info_store
//===========================================================================
static ssize_t hdmi_rsv_info_store(struct device *dev,
                   struct device_attribute *attr,
                   const char *buf, size_t count)
{
    int val;
    INFO_PACKET_CONFIG* info_packet_cfg_ptr;
    RESERVED_PACKET_DATA* reserved_data_ptr;
    unsigned char reserved_index = 3;// TBD, need to modify for general index case
    INFO_PACKET_TYPE reserved_info_type = INFO_TYPE_RSV3; // TBD, need to modify for general index case

    if (strcmp(attr->attr.name, "rsv")==0)
    {
        info_packet_cfg_ptr = newbase_hdmi_get_infopacket_config(reserved_info_type);
        reserved_data_ptr  = newbase_hdmi_get_reserved_data(reserved_index, m_sys_specified_port);
        if (sscanf(buf, "type_code=%x", &val)==1)
        {
            if((val <= 255) & (val >0))
            {
                info_packet_cfg_ptr->type_code = val;
                info_packet_cfg_ptr->enable = TRUE;
                reserved_data_ptr->pkt_received_cnt = 0;
            }
            else if(val ==0)
            {
                info_packet_cfg_ptr->type_code = val;
                info_packet_cfg_ptr->enable = 	FALSE;
            }
        }
        else if (sscanf(buf, "enable=%d", &val)==1)
        {
            if((val <= 255) & (val >0))
            {
                info_packet_cfg_ptr->enable = TRUE;
                reserved_data_ptr->pkt_received_cnt = 0;
            }
            else if(val ==0)
            {
                info_packet_cfg_ptr->enable = 	FALSE;
            }        }
        else if (sscanf(buf, "fsm=%d", &val)==1)
        {
            if(val <= MAIN_FSM_HDMI_VIDEO_READY)
            {
                info_packet_cfg_ptr->detect_start_state= val;
            }
        }
        else if (sscanf(buf, "clear_buf=%d", &val)==1)
        {
            unsigned int i = 0;

            for(i = 0; i<RESERVED_LEN; i++)
            {
                reserved_data_ptr->pkt_buf[i]= 0;
            }
            reserved_data_ptr->pkt_received_cnt = 0;
        }
        else if (sscanf(buf, "port=%d", &val)==1)
        {
            if(val < HDMI_PORT_TOTAL_NUM)
                m_sys_specified_port = val;
            else
                m_sys_specified_port = HAL_VFE_HDMI_CURRENT_PORT;
        }
    }

    return count;
}

static DEVICE_ATTR(rsv, 0644, hdmi_rsv_info_show, hdmi_rsv_info_store);

//===========================================================================
// Func : hdmi_errdet_info_show
//===========================================================================
static ssize_t hdmi_errdet_info_show(
    struct device*              dev,
    struct device_attribute*    attr,
    char*                       buf
    )
{
    int  n;
    int  count = PAGE_SIZE;
    char *ptr = buf;

    if (strcmp(attr->attr.name, "errdet")==0)
    {
        int i = 0;

        n = scnprintf(ptr, count, "-------------Error Count Config Table [Total: %d] \n", HDMI_ERRDET_NUM);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "  id  en mode print max  everyms overcnt name\n");
        ptr+=n; count-=n;

        for(i = 0; i < HDMI_ERRDET_NUM; i++)
        {
            HDMI_ERRDET_CONFIG_T* p_errdet_config = newbase_hdmi_get_errdet_config_table(i);

            n = scnprintf(ptr, count, " [%2d] %1d   %1d    %1d %6d %5d    %5d %s\n",
            i,
            p_errdet_config->is_enable,
            p_errdet_config->is_continuous_mode,
            p_errdet_config->is_polling_print,
            p_errdet_config->max_err_count,
            p_errdet_config->every_x_ms,
            p_errdet_config->over_y_cnt,
            p_errdet_config->err_det_name);
            ptr+=n; count-=n;
        }

        n = scnprintf(ptr, count, "-------------Error Count Status [Total: %d][FRL\n", HDMI_ERRDET_NUM);
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, " id     start0   start1   start2   start3 s_err0 s_err1 s_err2 s_err3  now0   now1   now2   now3   name\n");
        ptr+=n; count-=n;

        for(i = 0; i < HDMI_ERRDET_NUM; i++)
        {
            HDMI_ERRDET_CONFIG_T* p_errdet_config = newbase_hdmi_get_errdet_config_table(i);
            HDMI_PERIOD_ERRDET_STATUS_T* p_errdet_status = newbase_hdmi_get_errdet_status(i);

            n = scnprintf(ptr, count, "[%2d] %8d %8d %8d %8d; %5d %5d %5d %5d; %6d %6d %6d %6d; %s\n",
            i,
            p_errdet_status->start_record_time[0],
            p_errdet_status->start_record_time[1],
            p_errdet_status->start_record_time[2],
            p_errdet_status->start_record_time[3],
            p_errdet_status->start_record_error_index[0],
            p_errdet_status->start_record_error_index[1],
            p_errdet_status->start_record_error_index[2],
            p_errdet_status->start_record_error_index[3],
            p_errdet_status->last_error_cnt[0],
            p_errdet_status->last_error_cnt[1],
            p_errdet_status->last_error_cnt[2],
            p_errdet_status->last_error_cnt[3],
            p_errdet_config->err_det_name);
            ptr+=n; count-=n;
        }

        n = scnprintf(ptr, count, "-----Config Table Command----\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "en_x=y; x=id, y=value\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "mode_x=y; x=id, y=value\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "print_x=y; x=id, y=value\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "everyms_x=y; x=id, y=value\n");
        ptr+=n; count-=n;
        n = scnprintf(ptr, count, "overcnt_x=y; x=id, y=value\n");
        ptr+=n; count-=n;

    }
    else
    {
        n = scnprintf(ptr, count, "Invalid!\n");
        ptr+=n; count-=n;
    }

    return ptr - buf;
}

//===========================================================================
// Func : hdmi_rsv_info_store
//===========================================================================
static ssize_t hdmi_errdet_info_store(struct device *dev,
                   struct device_attribute *attr,
                   const char *buf, size_t count)
{
    int id = 0;
    int val = 0;

    if (strcmp(attr->attr.name, "errdet")==0)
    {
        HDMI_ERRDET_CONFIG_T* p_errdet_config = newbase_hdmi_get_errdet_config_table(id);
        if (sscanf(buf, "en_%d=%d", &id, &val)==2)
        {
            if((id< HDMI_ERRDET_NUM) && (val <= 1) & (val >=0))
            {
                p_errdet_config = newbase_hdmi_get_errdet_config_table(id);
                if(p_errdet_config != NULL)
                {
                    p_errdet_config->is_enable = val;
                }
            }
        }
        else if (sscanf(buf, "mode_%d=%d", &id, &val)==2)
        {
            if((id< HDMI_ERRDET_NUM) && (val <= 1) & (val >=0))
            {
                p_errdet_config = newbase_hdmi_get_errdet_config_table(id);
                if(p_errdet_config != NULL)
                {
                    p_errdet_config->is_continuous_mode= val;
                }
            }
        }
        else if (sscanf(buf, "print_%d=%d", &id, &val)==2)
        {
            if((id< HDMI_ERRDET_NUM) && (val <= 1) & (val >=0))
            {
                p_errdet_config = newbase_hdmi_get_errdet_config_table(id);
                if(p_errdet_config != NULL)
                {
                    p_errdet_config->is_polling_print= val;
                }
            }
        }
        else if (sscanf(buf, "everyms_%d=%d", &id, &val)==2)
        {
            if((id< HDMI_ERRDET_NUM) && (val >=0))
            {
                p_errdet_config = newbase_hdmi_get_errdet_config_table(id);
                if(p_errdet_config != NULL)
                {
                    p_errdet_config->every_x_ms= val;
                }
            }
        }
        else if (sscanf(buf, "overcnt_%d=%d", &id, &val)==2)
        {
            if((id< HDMI_ERRDET_NUM) && (val >=0))
            {
                p_errdet_config = newbase_hdmi_get_errdet_config_table(id);
                if(p_errdet_config != NULL)
                {
                    p_errdet_config->over_y_cnt= val;
                }
            }
        }
    }

    return count;
}

static DEVICE_ATTR(errdet, 0644, hdmi_errdet_info_show, hdmi_errdet_info_store);


//////////////////////////////////////////////////////////////////////////////
// File Operations
//////////////////////////////////////////////////////////////////////////////

int hdmi_open(struct inode *inode, struct file *file)
{
    return 0;
}

int hdmi_release(struct inode *inode, struct file *file)
{
    return 0;
}



//////////////////////////////////////////////////////////////////////////////
// Module Init / Exit
//////////////////////////////////////////////////////////////////////////////

static struct file_operations hdmi_fops =
{
    .owner      = THIS_MODULE,
    .open       = hdmi_open,
    .release    = hdmi_release,
};

static struct miscdevice hdmi_miscdev =
{
    MISC_DYNAMIC_MINOR,
    "rtk_hdmi",
    &hdmi_fops
};

int __init hdmi_module_init(void)
{
    if (misc_register(&hdmi_miscdev))
    {
        pr_warning("hdmi_module_init failed - register misc device failed\n");
        return -ENODEV;
    }

    device_create_file(hdmi_miscdev.this_device, &dev_attr_status);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_edid_0);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_edid_1);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_edid_2);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_edid_3);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_edid_cfg);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_hdcp14);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_hdcp22);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_spd_0);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_spd_1);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_spd_2);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_spd_3);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_avi_0);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_avi_1);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_avi_2);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_avi_3);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_vsi_0);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_vsi_1);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_vsi_2);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_vsi_3);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_dvs_0);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_dvs_1);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_dvs_2);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_dvs_3);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_drm_0);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_drm_1);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_drm_2);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_drm_3);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_vtem_0);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_vtem_1);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_vtem_2);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_vtem_3);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_debug_ctrl);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_arc_ctrl);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_debug_print);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_flow_cfg);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_scdc);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_rsv);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_errdet);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_dfe_test);
    device_create_file(hdmi_miscdev.this_device, &dev_attr_dfe_test_report);

    return 0;
}

static void __exit hdmi_module_exit(void)
{
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_status);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_edid_0);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_edid_1);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_edid_2);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_edid_3);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_edid_cfg);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_hdcp14);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_hdcp22);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_spd_0);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_spd_1);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_spd_2);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_spd_3);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_avi_0);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_avi_1);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_avi_2);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_avi_3);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_vsi_0);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_vsi_1);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_vsi_2);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_vsi_3);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_dvs_0);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_dvs_1);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_dvs_2);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_dvs_3);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_drm_0);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_drm_1);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_drm_2);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_drm_3);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_vtem_0);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_vtem_1);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_vtem_2);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_vtem_3);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_debug_ctrl);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_arc_ctrl);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_debug_print);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_flow_cfg);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_scdc);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_rsv);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_errdet);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_dfe_test);
    device_remove_file(hdmi_miscdev.this_device, &dev_attr_dfe_test_report);
    misc_deregister(&hdmi_miscdev);
}

module_init(hdmi_module_init);
module_exit(hdmi_module_exit);
MODULE_LICENSE("GPL");
