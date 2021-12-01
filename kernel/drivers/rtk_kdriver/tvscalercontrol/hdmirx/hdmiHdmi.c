/*=============================================================
 * Copyright (c)      Realtek Semiconductor Corporation, 2016
 *
 * All rights reserved.
 *
 *============================================================*/

/*======================= Description ============================
 *
 * file: 		hdmiHdmi.c
 *
 * author: 	Captain America, Steve Rogers
 * date:
 * version: 	3.0
 *
 *============================================================*/

/*========================Header Files============================*/
#include "hdmi_common.h"
#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/device.h>
#include <linux/module.h>
#include <linux/fs.h>		/* everything... */
#include <linux/cdev.h>
#include <linux/platform_device.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/uaccess.h>
#include <linux/sched.h>
#include <linux/sched/rt.h>
#include <linux/spinlock.h>
#include <linux/kthread.h>
#include <linux/string.h>
#include <rbus/stb_reg.h>
#include <rtk_kdriver/RPCDriver.h>
#include <mach/rtk_platform.h>
#include <mach/platform.h>
#include <tvscalercontrol/scaler/scalerthread_rtice2ap.h>
#include <tvscalercontrol/hdcp2_2/hdcp2_interface.h>
#include <rbus/timer_reg.h>
#include "hdmi_reg.h"
#include "hdmi_edid.h"
#include "hdmi_ddc.h"
#include "hdmi_hdcp.h"
#include "hdmi_scdc.h"
#include "hdmi_hdr.h"
#include "hdmi_info_packet.h"
#include "hdmi_emp.h"
#include "hdmi_dsc.h"
#include "cea_861.h"
#include "hdmi_table.h"
#include "hdmi_vfe_config.h"

extern u32 gic_irq_find_mapping(u32 hwirq);//cnange interrupt register way
#define IRQ_GET_KERNEL_IRQ_NUM(hwirq)       gic_irq_find_mapping(hwirq)

/**********************************************************************************************
*
*	Marco or Definitions
*
**********************************************************************************************/
#define TMDS_CLOCK_TOLERANCE(port)	MAX(hdmi_rx[port].timing_t.tmds_clk_b>>7, GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_TMDS_CLOCK_TOLERENCE_MIN ))     // 6G tolerance should be larger
#define DEFAULT_WAITSYNC_STABLE_CNT_THD    8    // 0:use driver default, >0 :for deubing, [WOSQRTK-8394 -Green transient appears - SONY S570/S470]


unsigned char hdmi_good_timing_ready = FALSE;//when hdmi get good timing, it will be true
void Set_Reply_Zero_Timing_Flag(unsigned char src, unsigned char flag);
static unsigned char hdmi_output_disable = 0;
static unsigned char hdmi_display_ready = 0;
spinlock_t hdmi_spin_lock;
#define HD21_DISPARITY_ERROR_HANDLE_INFO_DEBUG 0
/**********************************************************************************************
*
*	Const Declarations
*
**********************************************************************************************/

const char *colorimetry_name[]  = {

	"HDMI_COLORIMETRY_NOSPECIFIED",
	"HDMI_COLORIMETRY_601",
	"HDMI_COLORIMETRY_709",
	"HDMI_COLORIMETRY_XYYCC601",
	"HDMI_COLORIMETRY_XYYCC709",
	"HDMI_COLORIMETRY_SYCC601",
	"HDMI_COLORIMETRY_ADOBE_YCC601",
	"HDMI_COLORIMETRY_ADOBE_RGB",

};

const char* _hdmi_color_colorimetry_str(unsigned char colorimetry)
{
    return (colorimetry < sizeof(colorimetry_name)/sizeof(char*)) ? colorimetry_name[colorimetry] : "Unknown";
}

const char *depth_name[] = {

	"HDMI_COLOR_DEPTH_8B",
	"HDMI_COLOR_DEPTH_10B",
	"HDMI_COLOR_DEPTH_12B",
	"HDMI_COLOR_DEPTH_16B",

};

const char* _hdmi_color_depth_str(unsigned char depth)
{
    return (depth < sizeof(depth_name)/sizeof(char*)) ? depth_name[depth] : "Unknown";
}

const char *colorspace_name[] = {
	"COLOR_RGB",
	"COLOR_YUV422",
	"COLOR_YUV444",
	"COLOR_YUV420",
	"COLOR_UNKNOW"
};

const char* _hdmi_color_space_str(unsigned char color_space)
{
    if (color_space >= sizeof(colorspace_name)/sizeof(char*))
        color_space =  sizeof(colorspace_name)/sizeof(char*)-1;  // force to unknow

    return colorspace_name[color_space];
}

const char *hdmi_3d_name[] = {
	"HDMI3D_FRAME_PACKING",
	"HDMI3D_FIELD_ALTERNATIVE",
	"HDMI3D_LINE_ALTERNATIVE",
	"HDMI3D_SIDE_BY_SIDE_FULL",
	"HDMI3D_L_DEPTH",

	"HDMI3D_L_DEPTH_GPX",
	"HDMI3D_TOP_AND_BOTTOM",
	"HDMI3D_RSV0",
	"HDMI3D_SIDE_BY_SIDE_HALF",
	"HDMI3D_LINE_BY_LINE",

	"HDMI3D_VERTICAL_STRIPE",
	"HDMI3D_CHECKER_BOARD",
	"HDMI3D_REALID",
	"HDMI3D_SENSIO",
	"HDMI3D_RSV1",

	"HDMI3D_2D_ONLY",
};





/**********************************************************************************************
*
*	Variables
*
**********************************************************************************************/
HDMI_DETECT_CONFIG_ST g_detect_fsm_status[HDMI_PORT_TOTAL_NUM];
HDMI_PORT_INFO_T hdmi_rx[HDMI_PORT_TOTAL_NUM];
HDMI_CHANNEL_T pcb_info[HDMI_PORT_TOTAL_NUM];
unsigned char current_port = 0;

unsigned int hpd_low_ms = 0; //For EDID Change,default value (+ resume already had 500ms low)
unsigned int device_affinity_hpd_low_ms = 0;  //0 : not specified

unsigned int str_hpd_low_ms = 0; //For DC ON/OFF. default value , HDMI_STR_TOGGLE_HPD_MS

static unsigned int m_actual_execute_delay_time = 0;

static unsigned char m_device_phy_stable_count[HDMI_PORT_TOTAL_NUM];

#if HDMI_TOGGLE_HPD_Z0_ENABLE
unsigned char hdmi_toggle_hpd_z0_flag[HDMI_PORT_TOTAL_NUM] = {0};
HDMI_DC_ON_STATE_E hdmi_dc_on_delay_state[HDMI_PORT_TOTAL_NUM] = {HDMI_DC_ON_NONE};
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE

#if HDMI_STR_TOGGLE_HPD_ENABLE
HDMI_STR_HPD_TOGGLE_STATE_E hdmi_str_toggle_hpd_state[HDMI_PORT_TOTAL_NUM] = {HDMI_STR_HPD_TOGGLE_NONE};
#endif //#if HDMI_STR_TOGGLE_HPD_ENABLE

#if HDMI_DISPLAY_DELAY_ENABLE
unsigned char hdmi_delay_display_enable[HDMI_PORT_TOTAL_NUM] = {_DISABLE};
HDMI_DISPLAY_DELAY_STATE_STATE_E hdmi_delay_display_state[HDMI_PORT_TOTAL_NUM] = {HDMI_DISPLAY_DELAY_NONE};
static unsigned char hdmi_first_display_flag = FALSE;
static unsigned char hdmi_delay_only_at_once_check = FALSE;	//TRUE: delay on AC/DC on, FALSE:don't care.
#endif //#if HDMI_DISPLAY_DELAY_ENABLE

HDMI_SPECIFIC_DEVICE_E hdmi_specific_device[HDMI_PORT_TOTAL_NUM] = {HDMI_SPECIFIC_DEVICE_NONE};

#if HDCP_STATUS_CHECK_ENABLE
HDMI_HDCP_TOGGLE_STATUS_T	hdmi_hdcp_check_toggle_state[HDMI_PORT_TOTAL_NUM] = {HDMI_HDCP_TOGGLE_NONE};
#endif //#if HDCP_STATUS_CHECK_ENABLE

#ifdef CONFIG_RTK_KDRV_THERMAL_SENSOR //
unsigned char thermal_en = 0;
static short int  REG_DEGREE=120;
static short int  REG_DEGREE_LV2=125;
static short int  REG_DEGREE_LV3=130;
#endif

/**********************************************************************************************
*
*	Funtion Declarations
*
**********************************************************************************************/
void lib_hdmi_set_specific_device(unsigned char nport, HDMI_SPECIFIC_DEVICE_E device);
HDMI_SPECIFIC_DEVICE_E lib_hdmi_get_specific_device(unsigned char nport);

void newbase_hdmi_fix_green_line(unsigned char nport);
void newbase_hdmi_set_scaler_info(HDMI_TIMING_T *timing);

void _init_hpd_delay_wq(void);
void _hdmi_hpd_delay_work_func(struct delayed_work *delayed_work);

unsigned char newbase_hdmi_check_spd_name(unsigned char port, unsigned char *vendor_name);
unsigned char newbase_hdmi_check_spd_prod(unsigned char port, unsigned char *prod_desc);

unsigned char newbase_hdmi_compatibility_check(unsigned char port);
unsigned char newbase_hdmi_check_avi_colorimetry_info(unsigned char port, unsigned char ucInit);
unsigned char newbase_hdmi_no_SPD_packetInfo(unsigned char nport);

/**********************************************************************************************
*
*	Mutex/Semaphore
*
**********************************************************************************************/

struct semaphore sem_timing_detect;

void _init_timing_detect_sem(void)   { sema_init(&sem_timing_detect, 1); }
void _lock_timing_detect_sem(void)   { down(&sem_timing_detect); }
void _unlock_timing_detect_sem(void) { up(&sem_timing_detect); }



/**********************************************************************************************
*
*	HDP Work Queue
*
**********************************************************************************************/

static struct workqueue_struct *hpdwq = NULL;

struct hpd_work_t{
  struct delayed_work hpd_delay_work;
  unsigned char port;
};

static struct hpd_work_t hpd_work[HDMI_PORT_TOTAL_NUM];

void _init_hpd_delay_wq()
{
    if (NULL == hpdwq) {
        hpdwq = create_workqueue("HPD workqueue");

        if (NULL == hpdwq) {
            HDMI_EMG("[%s] ERROR: Create HPD workqueue failed!\n", __func__);
            return;
        }
    }
}

void _init_hpd_delay_work(unsigned char port, void *work_queue_func)
{
    hpd_work[port].port = port;
    INIT_DELAYED_WORK(&hpd_work[port].hpd_delay_work, (void *)work_queue_func);
}

int _start_hpd_delay_work(unsigned char port, unsigned int delayms)
{
    int ret = -1;
    if (hpdwq) {
        ret = queue_delayed_work(hpdwq, &hpd_work[port].hpd_delay_work, msecs_to_jiffies(delayms));
    }
    return ret;
}


void _cancel_hpd_delay_work(unsigned char port)
{
    if (hpdwq) {
        cancel_delayed_work(&hpd_work[port].hpd_delay_work);
        flush_workqueue(hpdwq);
    }
}

void _destroy_hpd_delay_wq(void)
{
	int nPortCnt = 0;

	for (nPortCnt =0;nPortCnt< HDMI_PORT_TOTAL_NUM;nPortCnt++) {
		cancel_delayed_work(&hpd_work[nPortCnt].hpd_delay_work);
	}

	if (hpdwq) {
		flush_workqueue(hpdwq);
		destroy_workqueue(hpdwq);
		hpdwq = NULL;
	}
}


/**********************************************************************************************
*
*	Function Body
*
**********************************************************************************************/

HDMI_CHANNEL_T*  newbase_hdmi_get_pcbinfo(unsigned int port)
{
	return (port < HDMI_PORT_TOTAL_NUM) ? &pcb_info[port] : NULL;
}

void newbase_hdmi_save_pcbinfo(unsigned char port, const HDMI_CHANNEL_T_PCB_INFO *pcb)
{
	HDMI_CHANNEL_T* p_ch = newbase_hdmi_get_pcbinfo(port);

	if (p_ch==NULL) {
		HDMI_EMG("%s failed, port %d doesn't exist\n", __FUNCTION__ , port);
		return ;
	}
	
	p_ch->valid_port   = pcb->valid_port;
	p_ch->phy_port     = pcb->phy_port;
	p_ch->ddc_selected = pcb->ddc_selected;
	p_ch->edid_type    = pcb->edid_type;
	p_ch->arc_support  = pcb->arc_support;
	p_ch->earc_support  = pcb->earc_support;
	p_ch->dedicate_hpd_det  = pcb->dedicate_hpd_det;
	p_ch->dedicate_hpd_det_sel  = pcb->dedicate_hpd_det_sel;
	p_ch->dedicate_hpd_invert  = pcb->dedicate_hpd_invert;
	p_ch->br_swap      = pcb->br_swap;
	p_ch->hpd          = pcb->hpd;
	p_ch->det_5v       = pcb->det_5v;
}

void newbase_hdmi_init_pcbinfo()
{
	int port=0;
	memset(pcb_info, 0, sizeof(pcb_info));

	for (port=0;port<HDMI_PORT_TOTAL_NUM;port++) {
		pcb_info[port].phy_port = HDMI_PHY_PORT_NOTUSED;
	}
}

unsigned char newbase_hdmi_phy_port_status(unsigned char port)
{
	return (port < HDMI_PORT_TOTAL_NUM) ? pcb_info[port].phy_port : HDMI_PHY_PORT_NOTUSED;
}

char newbase_hdmi_get_arc_port_index(void)
{
	unsigned char i=0;
	unsigned char arc_port_num=0;
	char arc_port = 0;

	for (i = 0; i < HDMI_RX_PORT_MAX_NUM; i++)
	{
		HDMI_CHANNEL_T* p_pcbinfo = newbase_hdmi_get_pcbinfo(i);

		if (p_pcbinfo==NULL)
		{
			HDMI_EMG("newbase_hdmi_get_arc_port_index null pointer, port=%d\n", i);
			break;
		}
		if (p_pcbinfo->arc_support)
		{
			arc_port = i;
			arc_port_num++;
		}
	}

	if (arc_port_num==0)
		arc_port = NONE_ARC_PORT;
	else if (arc_port_num > 1)
		arc_port= MULTI_ARC_PORT;

	return arc_port;
}

char newbase_hdmi_get_earc_port_index(void)
{
	unsigned char i=0;
	unsigned char earc_port_num=0;
	char earc_port = 0;

	for (i = 0; i < HDMI_RX_PORT_MAX_NUM; i++)
	{
		HDMI_CHANNEL_T* p_pcbinfo = newbase_hdmi_get_pcbinfo(i);

		if (p_pcbinfo==NULL)
		{
			HDMI_EMG("newbase_hdmi_get_earc_port_index null pointer, port=%d\n", i);
			break;
		}
		if (p_pcbinfo->earc_support)
		{
			earc_port = i;
			earc_port_num++;
		}
	}

	if (earc_port_num==0)
		earc_port = NONE_EARC_PORT;
	else if (earc_port_num > 1)
		earc_port= MULTI_EARC_PORT;

	return earc_port;
}

char newbase_hdmi_get_pcb_earc_port(void)
{
	char hdmi_port;
	char earc_port_num=0;
	char earc_port = 0;
	HDMI_CHANNEL_T_PCB_INFO port_config;

	// load configuration for each hdmi channel
	for (hdmi_port=0; hdmi_port < HDMI_RX_PORT_MAX_NUM; hdmi_port++)
	{
		unsigned long long val;
		char name[16] ={0};

		// load configuration of specified hdmi port
		memset(&port_config, 0, sizeof(port_config));

		snprintf(name, sizeof(name)-1, "HDMI%d_CFG", hdmi_port+1);

		if (pcb_mgr_get_enum_info_byname(name, &val) != 0)
		{
			HDMI_INFO("%s Get PCB Parameter fail name = %s is not existed !\n" , __func__  , name );
			port_config.earc_support  = 0;
		}
		else
		{
			port_config.earc_support  = (val >> 48) & 0x1;
		}

		if (port_config.earc_support)
		{
			HDMI_INFO("[HDMI] Get PCB eARC HW port %d\n", hdmi_port);
			earc_port = hdmi_port;
			earc_port_num++;
		}
	}

	if (earc_port_num==0)
		earc_port = NONE_EARC_PORT;
	else if (earc_port_num > 1)
		earc_port= MULTI_EARC_PORT;

	return earc_port;
}

#define MUTE_AV_REASON_AVMUTE       0x1
#define MUTE_AV_REASON_BCH_ERR      (0x1<<1)

static int _hdmi_interrupt_handler(unsigned char port)
{
	int irq_handle_cnt = 0;
	unsigned int mute_av = 0;
	unsigned int bch_err_pkt = 0;

	spin_lock(&hdmi_spin_lock);  // make sure all the irq handler won't be processed
    
	if (lib_hdmi_is_irq_pending(port))
		lib_hdmi_clr_irq_pending(port);

	//----------------------------------------------
	// BCH Error 
	//----------------------------------------------

	if(GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_BCH_ERR_IRQ_ENABLE))
	{
		if (lib_hdmi_get_bch_2bit_error(port))
		{
			if (port == newbase_hdmi_get_current_display_port())    // only disable a/v when 2 bits bch error occur
			{
				if(newbase_rxphy_get_frl_mode(port) == MODE_TMDS)
				{
					bch_err_pkt = lib_hdmi_get_debug_bch_err_pkt(port);
					if(bch_err_pkt >= GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_BCH_ERR_IRQ_MUTE_THD))
					{//big packet error, ex: hdcp fail
						mute_av |= MUTE_AV_REASON_BCH_ERR;
						lib_hdmi_bch_error_irq_en(port, 0);
					}
					else
					{
						;//lib_hdmi_bch_error_irq_en(port, 0);
					}
				}
			}
			lib_hdmi_bch_2bit_error_clr(port);
		}
	}

	//----------------------------------------------
	// AVMute event detector
	//----------------------------------------------

	if(GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_AVMUTE_IRQ_ENABLE))
	{
		if (lib_hdmi_is_avmute_irq_enable(port))
		{
			lib_hdmi_avmute_irq_disable(port);      // disable avmute irq

			if (lib_hdmi_get_avmute(port))
			{
				if (port == newbase_hdmi_get_current_display_port())
				{
					mute_av |= MUTE_AV_REASON_AVMUTE;
				}
				else
				{
					//HDMI_INFO("Port=[%d], background port got AVmute event\n", port);
				}
			}
			else
			{
				// since there is no way to make sure the avmute change status,
				// so we force clear avmute change status by disable/enable it
				lib_hdmi_avmute_irq_enable(port);      // reenable video state
				HDMI_INFO("Port=[%d], not AVmute, ignore it\n", port);
			}
		}

	}

	//----------------------------------------------
	// Mute AV check
	//----------------------------------------------
	if (mute_av)
	{

		lib_hdmi_video_output(port, 0);
		lib_hdmi_audio_output(port, 0);
		SCALERDRV_FORCE_ONMS_FAIL();    // Notify Scaler driver that current HDMI port got AVMUTE event		

		if (lib_hdmi_is_avmute_irq_enable(port))
			lib_hdmi_avmute_irq_disable(port);

		if (lib_hdmi_is_bch_error_irq_en(port))
			lib_hdmi_bch_error_irq_en(port, 0);

		if ((mute_av & MUTE_AV_REASON_BCH_ERR))
		{
			if (GET_H_VIDEO_FSM(port) > MAIN_FSM_HDMI_SETUP_VEDIO_PLL)
				SET_HDMI_DETECT_EVENT(port, HDMI_DETECT_BCH_ERR_IRQ_HAPPENED);

			HDMI_WARN("HDMI[p%d] disable A/V output due to BCH Error detected, BCH_ERR cnt(1,2)=(%d,%d), bch_err_pkt/thd=%d/%d\n", port, hdmi_rx[port].bch_1bit_err_cnt,
				hdmi_rx[port].bch_err_cnt, bch_err_pkt, GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_BCH_ERR_IRQ_MUTE_THD));
		}
		else if ((mute_av & MUTE_AV_REASON_AVMUTE))
		{
			if (GET_H_VIDEO_FSM(port) > MAIN_FSM_HDMI_SETUP_VEDIO_PLL)
				SET_HDMI_DETECT_EVENT(port, HDMI_DETECT_AVMUTE_IRQ_HAPPENED);

			HDMI_WARN("HDMI[p%d] disable A/V output due to AVMute detected\n", port);
		}
		else
			HDMI_WARN("HDMI[p%d] disable A/V output due to Reason (%d) Changed\n", port, mute_av);		    
	}

	//----------------------------------------------
	// HDCP2 handler
	//----------------------------------------------
	if (newbase_hdmi_hdcp22_msg_handler(port))
		irq_handle_cnt++;

	spin_unlock(&hdmi_spin_lock);

	return irq_handle_cnt;
}


irqreturn_t newbase_hdmi_irq_handler(int irq, void *dev_id)
{
	unsigned char port;

	irqreturn_t ret = IRQ_NONE;

	for(port=0; port<HDMI_PORT_TOTAL_NUM; port++)
	{
		if (_hdmi_interrupt_handler(port))
			ret = IRQ_HANDLED;
	}

	return ret;
}

int newbase_hdmi_ddc_channel_status(unsigned char port , unsigned char *ddc_ch )
{
	if(port < HDMI_PORT_TOTAL_NUM)
	{
		*ddc_ch = pcb_info[port].ddc_selected ;
		return 0;
	}
	HDMI_EMG("[newbase_hdmi_ddc_channel_status port:%d] ERROR!! Mapping fail!!\n", port);

	return -1;
}

void newbase_hdmi_init_detect_mode(unsigned char port)
{
	g_detect_fsm_status[port].last_fsm = MAIN_FSM_HDMI_WAIT_SYNC;
	g_detect_fsm_status[port].fsm_event_status = 0;
	g_detect_fsm_status[port].execute_action = 0;
}

static unsigned int irq_init = 0;

/*--------------------------------------------------------------
 * Func : newbase_hdmi_ddc_ch_remap
 *
 * Desc : build mapping between mac and ddc channel
 *        to make sure the ddc and hdmi mac is one on
 *        one mapping.
 *
 *        if multiple DDC channel mapped to an signle
 *        mac, then the DDC related functions, such as
 *        SCDC, HDCP.. might have unexcepted result.
 *
 *        (for example, 4 HDMI channel, but only use 3.
 *        if the default setting of un-used ddc channel
 *        is conflict with another ddc ch. then issue occurs
 *
 * Para : N/A
 *
 * Retn : N/A
 *--------------------------------------------------------------*/
void newbase_hdmi_ddc_ch_remap(void)
{
    unsigned char free_mac[HDMI_PORT_TOTAL_NUM];
    unsigned char ddc_to_mac[HDMI_PORT_TOTAL_NUM];
    unsigned char mac_id;
    unsigned char ddc_ch;

    memset(ddc_to_mac, 0xF, HDMI_PORT_TOTAL_NUM);
    memset(free_mac, 1, HDMI_PORT_TOTAL_NUM);

    // 1. setup mac/ddc mapping for a used HDMI ports
    for (mac_id=0; mac_id<HDMI_PORT_TOTAL_NUM; mac_id++)
    {
        if (newbase_hdmi_phy_port_status(mac_id)==HDMI_PHY_PORT_NOTUSED)
            continue;

        if (newbase_hdmi_ddc_channel_status(mac_id, &ddc_ch) != 0 || ddc_ch >= HDMI_PORT_TOTAL_NUM)
            continue;

        lib_hdmi_ddc_sel(mac_id, ddc_ch); // setup ddc channel of the mac
        ddc_to_mac[ddc_ch] = mac_id;
        free_mac[mac_id] = 0;
    }

    // 2. assign free macs to ddc ports that doesn't mapped to any hdmi port
    for (ddc_ch=0; ddc_ch<HDMI_PORT_TOTAL_NUM; ddc_ch++)
    {
        if (ddc_to_mac[ddc_ch]==0xF)   // non mapped ddc port, find a empy mac for it
        {
            int mac_id;

            for (mac_id=0; mac_id<HDMI_PORT_TOTAL_NUM; mac_id++)
            {
                if (free_mac[mac_id])
                {
                    free_mac[mac_id] = 0;        // set the mac in used.
                    ddc_to_mac[ddc_ch] = mac_id;
                    lib_hdmi_ddc_sel(mac_id, ddc_ch); // setup ddc channel to the empty mac
                    break;
                }
            }
        }
    }

    HDMI_WARN("%s DDC_MAC_MAP=%02x,%02x,%02x,%02x\n", __func__,
        ddc_to_mac[0], ddc_to_mac[1], ddc_to_mac[2], ddc_to_mac[3]);
}

void newbase_hdmi_init(void)
{
	unsigned char j;

	HDMI_PRINTF("%s (HW Ver: %d)\n", __func__, get_ic_version());

	spin_lock_init(&hdmi_spin_lock);

	hdmi_first_display_flag = TRUE;
	lib_hdmi_sys_crt_on();
	lib_hdmi_crt_reset();
	lib_hdmiddc_crt_on();

	newbase_hdmi_ddc_ch_remap();

	for (j=0; j<HDMI_PORT_TOTAL_NUM; j++)
	{
		unsigned char ddc_ch = 0 ;

		if (newbase_hdmi_phy_port_status(j)==HDMI_PHY_PORT_NOTUSED)
			continue;

		newbase_hdmi_set_hpd(j, 0);
		lib_hdmi_power(j, 0);

		if (newbase_hdmi_ddc_channel_status(j,&ddc_ch) != 0 )
			continue;

		lib_hdmiddc_sda2gpio(ddc_ch);
		lib_hdmiddc_set_sda_delay(ddc_ch, 0x1); //K2L, one NB no audio, due to IIC issue. Q2879/3094/3222
		lib_hdmiddc_sda_dir_out(ddc_ch, 0x1);  //Q9305: first plug in, no tx_clk in due to IIC issue.
		lib_hdmiddc_gpio2sda(ddc_ch);
	}
	newbase_hdmi_port_var_init_all();
	newbase_hdmi_flow_cfg_info_init();

	newbase_hdmi_edid_init();
	newbase_hdmi_hdcp_init();

	lib_hdmi_phy_init();
	lib_hdmi21_phy_init();

	_init_timing_detect_sem();

	newbase_hdmi_power_saving_init();
	newbase_hdmi_infoframe_rx_init();

	newbase_rxphy_isr_enable(1);
	newbase_hdmi_infoframe_rx_enable(1);
	newbase_hdmi_audio_thread_enable(1);

	_init_hpd_delay_wq();

	// requeset interrupt handler

	if (irq_init==0)
	{
		if (request_irq(IRQ_GET_KERNEL_IRQ_NUM(IRQ_HDMI), newbase_hdmi_irq_handler, IRQF_SHARED, "hdmi", newbase_hdmi_irq_handler))
		{
			HDMI_INFO("!!!!!!!!!!!!!!!!! Register HDMI Interrupt handler failed - IRQ %d !!!!!!!!!!!!!!!!\n", IRQ_HDMI);
		}
		else
		{
			HDMI_INFO("!!!!!!!!!!!!!!!!! Register HDMI Interrupt handler successed - IRQ %d !!!!!!!!!!!!!!!!\n", IRQ_HDMI);
			irq_init=1;
		}
	}
}

void newbase_hdmi_uninit(void)
{
	_destroy_hpd_delay_wq();

	newbase_rxphy_isr_enable(0);
	newbase_hdmi_infoframe_rx_enable(0);
	newbase_hdmi_audio_thread_enable(0);
}

void newbase_hdmi_init_source(unsigned char port)
{
	HDMI_CHANNEL_T* p_info = newbase_hdmi_get_pcbinfo(port);

	if (newbase_hdmi_phy_port_status(port) == HDMI_PHY_PORT_NOTUSED || p_info==NULL)
	{
		HDMI_EMG("newbase_hdmi_init_source failed, HDMIp%d is not used\n", port);
		return;
	}

	lib_hdmi_power(port, 1);
	lib_hdmi_tmds_init(port);
	lib_hdmi_mac_init(port, p_info->br_swap);
	newbase_hdmi_ced_error_cnt_reset(port);
	newbase_hdmi_reset_all_infoframe(port, 0);
	newbase_hdmi_init_detect_mode(port);
	newbase_hdmi_port_var_init(port, 1); // reset whole internal data structure
	SET_HDMI_DETECT_EVENT(port, HDMI_DETECT_INIT_SOURCE);

	newbase_hdmi_audio_close(port);

	newbase_rxphy_init_struct(port);
	newbase_rxphy_isr_set(port, 1);

	lib_hdmi_gcp_ackg_header_parsing_mode(port, FALSE);
	lib_hdmi_valid_format_condition(port);
	lib_hdmi_misc_variable_initial(port);
}

void newbase_hdmi_release_source(unsigned char port)
{

	if (port >= HDMI_PORT_TOTAL_NUM)  {
		HDMI_EMG("%s: err port=%d\n", __func__, port);
		return;
	}

	newbase_rxphy_isr_set(port, 0);
	lib_hdmi_power(port, 0);

	newbase_hdmi_disconnect_source(port, 1);  // disconnect and reset all its internal status
	_cancel_hpd_delay_work(port);
}


/*------------------------------------------------------------------
 * Func : newbase_hdmi_disconnect_source
 *
 * Desc : Disconnect current HDMI port. 
 *        This function will disable HDMI port's audio/video output
 *        and, if the necessary, reset all it's internal status
 *
 * Para : port : HDMI Port 
 *        fully_reset : 
 *             0 : disable a/v output only (become a background port)
 *                (HDMI driver will keep previous connection status when you connect it again)
 *             1 : disable a/v output and clear all its internal status 
 *            (HDMI driver will trate it as a new connection when you connect it again)
 *
 * Retn : N/A 
 *------------------------------------------------------------------*/ 
void newbase_hdmi_disconnect_source(unsigned char port, unsigned char fully_reset)
{
	HDMI_INFO("%s: disconnect port=%d, fully_reset=%d\n", __func__, port, fully_reset);
	lib_hdmi_video_output(port, 0);  // blanking screen in step 1.
	newbase_hdmi_port_var_init(port, fully_reset);
	SET_HDMI_DETECT_EVENT(port, HDMI_DETECT_DISCONNECT_SOURCE);
	
	lib_hdmi_video_output(port, 0); //close again, avoid re-open in detect_mode
	newbase_hdmi_audio_close(port);

	lib_hdmi_ofms_clock_sel(port, 0); // switch back to tmds clock
	lib_hdmi_set_dpc_enable(port, 0); // disable dpc
	newbase_hdmi_clr_active_source(port);
}

void newbase_hdmi_port_select(unsigned char port, unsigned char frl_mode)	// reset all mac functions
{
	lib_hdmi_mac_select_port(port);
	lib_hdmi_video_output(port, 0);
	newbase_hdmi_set_current_display_port(port);
	if(frl_mode != MODE_TMDS)
		lib_hdmi_hd21_mac_crt_common_reset(port);
	else
		lib_hdmi_crt_reset_hdmi_common();
}

void newbase_hdmi_port_var_init_all(void)
{
	unsigned char i;
	for (i=0; i<HDMI_PORT_TOTAL_NUM; i++)
	{
		newbase_hdmi_port_var_init(i, 1);
	}
}

void newbase_hdmi_port_var_init(unsigned char port, unsigned char full_reset)
{
	unsigned char conn_st_backup = 0;
	unsigned char hdmi2p1_en_backup =0;
	unsigned int  hdmi2p0_tmds_scdc_config_update_count = 0;
	unsigned int  hpd_recover_cnt = 0;
	unsigned int  reset_phy_recover_cnt = 0;
	HDMI_POWER_SAVEING_FSM_T ps_fsm;
	unsigned int  signal_stable_cnt;
	unsigned int  ps_fsm_sub_state;
	unsigned int  ps_round;
	HDMI_SPD_T    spd_t_backup = {0};
	HDMI_HDCP_ST  hdcp_status_tmp;
	HDMI_VIDEO_ST video_st_backup;

	HDMI_WARN("newbase_hdmi_port_var_init, port=%d, full_reset=%d\n", port, full_reset);

	if (full_reset == 0)//backup
	{
		conn_st_backup = hdmi_rx[port].cable_conn;
		hdmi2p1_en_backup =hdmi_rx[port].hdmi_2p1_en;
		hdmi2p0_tmds_scdc_config_update_count = hdmi_rx[port].hdmi2p0_tmds_scdc_config_update_count;
		memcpy(&spd_t_backup, &hdmi_rx[port].spd_t, sizeof(HDMI_SPD_T));
		hpd_recover_cnt = hdmi_rx[port].hpd_recover_cnt;
		reset_phy_recover_cnt = hdmi_rx[port].reset_phy_recover_cnt;
		// backup power saving information
		ps_fsm = hdmi_rx[port].ps_fsm;
		signal_stable_cnt = hdmi_rx[port].signal_stable_cnt;
		ps_fsm_sub_state = hdmi_rx[port].ps_fsm_sub_state;
		ps_round = hdmi_rx[port].ps_round;

		// backup hdcp information
		memcpy(&hdcp_status_tmp, &hdmi_rx[port].hdcp_status, sizeof(hdcp_status_tmp));

		// backup video_t
		memcpy(&video_st_backup, &hdmi_rx[port].video_t, sizeof(video_st_backup));
	}

	memset(&hdmi_rx[port], 0, sizeof(HDMI_PORT_INFO_T));

	hdmi_rx[port].hdmi_2p1_en = FALSE;

	SET_H_AUDIO_FSM(port, AUDIO_FSM_AUDIO_START);

	SET_H_INTERLACE(port, 0);
	SET_H_MODE(port, MODE_HDMI);
	SET_H_COLOR_DEPTH(port, HDMI_COLOR_DEPTH_8B);
	SET_H_COLOR_SPACE(port, COLOR_RGB);

	SET_H_3DFORMAT(port, HDMI3D_2D_ONLY);

	newbase_hdcp_init_timer(port);

	newbase_hdmi_audio_var_init(port);
	hdmi_rx[port].wait_hdcp14 = HDMI_WAIT_HDCP14_COUNT_THD;
	hdmi_rx[port].wait_avi = HDMI_WAIT_AVI_INFO_COUNT_THD;
	hdmi_rx[port].wait_spd = HDMI_WAIT_SPD_INFO_COUNT_THD;

	if (full_reset == 0)//store variable
	{
		hdmi_rx[port].cable_conn = conn_st_backup;
		hdmi_rx[port].hdmi_2p1_en = hdmi2p1_en_backup;
		memcpy(&hdmi_rx[port].spd_t ,&spd_t_backup, sizeof(HDMI_SPD_T));
		hdmi_rx[port].hdmi2p0_tmds_scdc_config_update_count = hdmi2p0_tmds_scdc_config_update_count;
		hdmi_rx[port].hpd_recover_cnt = hpd_recover_cnt;
		hdmi_rx[port].reset_phy_recover_cnt = hpd_recover_cnt;

		// restore power saving information
		hdmi_rx[port].ps_fsm = ps_fsm;
		hdmi_rx[port].signal_stable_cnt = signal_stable_cnt;
		hdmi_rx[port].ps_fsm_sub_state = ps_fsm_sub_state;
		hdmi_rx[port].ps_round = ps_round;

		// restore hdcp information
		memcpy(&hdmi_rx[port].hdcp_status, &hdcp_status_tmp, sizeof(hdcp_status_tmp));	// restore hdcp status
		memcpy(&hdmi_rx[port].video_t, &video_st_backup, sizeof(video_st_backup));	// restore video_t status
	}

}


const char* _hdmi_video_fsm_str(unsigned int fsm)
{
    switch (fsm) {
    case MAIN_FSM_HDMI_WAIT_SYNC:       return "WAIT_SYNC";
    case MAIN_FSM_HDMI_SETUP_VEDIO_PLL: return "SETUP_VEDIO_PLL";
    case MAIN_FSM_HDMI_MEASURE:         return "MEASURE";		
    case MAIN_FSM_HDMI_DISPLAY_ON:      return "DISPLAY_ON";					
    case MAIN_FSM_HDMI_VIDEO_READY:     return "VIDEO_READY";			
    default:
    return "UNKNOW";	    
    }
}

void newbase_hdmi_output_disable(unsigned char on)
{
	unsigned char port = 0;
	if (on)
	{
		if (hdmi_output_disable==0)
		{
			hdmi_output_disable = 1;

			for(port=0; port<HDMI_PORT_TOTAL_NUM; port++)
			{
				HDMI_INFO("%s: disable HDMI%d A/V output\n", __func__, port);
				lib_hdmi_video_output(port, 0);     // disable video output
				lib_hdmi_audio_output(port, 0);     // close audio
				lib_hdmi_ofms_clock_sel(port, 0);   // switch back to tmds clock
				lib_hdmi_set_dpc_enable(port, 0);   // disable dpc
			}
		}
	}
	else
	{
		HDMI_INFO("%s(%d) : begin hdmi_output_disable = %d \n", __func__ , on , hdmi_output_disable);

		if (hdmi_output_disable)
			hdmi_output_disable = 0;       // just clear flag

		HDMI_INFO("%s(%d): after hdmi_output_disable= %d \n", __func__ , on , hdmi_output_disable);
	}
}

unsigned char newbase_hdmi_is_output_disable(void)
{
	return hdmi_output_disable;
}

unsigned char newbase_hdmi_is_display_ready(void)
{
#ifdef CONFIG_SUPPORT_SCALER
	if(GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_ENABLE_HDMI_AV_SYNC))
	{
		if (VSC_INPUTSRC_HDMI == GET_DISPLAY_MODE_SRC(SLR_MAIN_DISPLAY))
			return (!hdmi_output_disable && hdmi_display_ready) ? 1 : 0;
		else    // For "SOCTS" or "Audio Only mode". If scaler video path is not be exectuted, don't need to check hdmi_display_ready.
			return (!hdmi_output_disable) ? 1 : 0;
	}
	else
	{
		return (!hdmi_output_disable) ? 1 : 0;
	}
#else
	return (!hdmi_output_disable) ? 1 : 0;
#endif
}

unsigned char newbase_hdmi_wait_hdcp_data_sync(unsigned char port)
{
	if (newbase_hdcp_get_auth_mode(port)==HDCP14 ||
		newbase_hdcp_get_auth_mode(port)==HDCP22)
	{
		unsigned char wait_time = 15;

		while(wait_time--)
		{
			HDMI_INFO("newbase_hdmi_wait_hdcp_data_sync[%d] hdcp_enc=%d, bit_err=%d (wait_cnt=%d)\n",
				port, hdmi_rx[port].hdcp_status.hdcp_enc, 
				(hdmi_rx[port].bch_err_detect) ? 1 : 0, 
				wait_time);

			if (hdmi_rx[port].hdcp_status.hdcp_enc && hdmi_rx[port].bch_err_detect==0)
				return TRUE;

			msleep(40);
		}

		if (hdmi_rx[port].bch_err_detect)
		{
			HDMI_INFO("newbase_hdmi_wait_hdcp_data_sync[%d] failed (bit error detected)\n",
				port);
			return FALSE;
		}
	}
	else
	{
		if (hdmi_rx[port].bch_err_detect)
		{
			HDMI_INFO("newbase_hdmi_wait_hdcp_data_sync[%d] failed (bit error detected)\n",
				port);
			return FALSE;
		}
	}
	return TRUE;
}




const HDMI_DETECT_EVENT_TABLE_ST hdmi_detect_event_table[] =
{
	{HDMI_DETECT_INIT_SOURCE, HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC, "INIT_SOURCE"},
	{HDMI_DETECT_DISCONNECT_SOURCE, HDMI_EVENT_ACTION_QUICK_RESET_TO_WAIT_SYNC, "DISCONNECT_SOURCE"},
	{HDMI_DETECT_HPD_RESET, HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC, "HPD_RESET"},
	{HDMI_DETECT_NO_5V_RESET, HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC, "NO_5V_RESET"},
	{HDMI_DETECT_ONMS_QUICK_RESET, HDMI_EVENT_ACTION_RESET_TO_SETUP_PLL, "ONMS_QUICK_RESET"},
	{HDMI_DETECT_ONMS_FULLY_RESET, HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC, "ONMS_FULLY_RESET"},
	{HDMI_DETECT_PHY_RESET, HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC, "PHY_RESET"},
	{HDMI_DETECT_PWR_WAKEUP_RESET, HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC, "PWR_WAKEUP_RESET"},
	{HDMI_DETECT_BCH_ERR_IRQ_HAPPENED, HDMI_EVENT_ACTION_RESET_TO_SETUP_PLL, "BCH_ERR_IRQ_HAPPENED"},
	{HDMI_DETECT_AVMUTE_IRQ_HAPPENED, HDMI_EVENT_ACTION_RESET_TO_SETUP_PLL, "AVMUTE_IRQ_HAPPENED"},
	{HDMI_DETECT_CONDITION_CHANGE, HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC, "CONDITION_CHANGE"},
	{HDMI_DETECT_FRL_MODE_CHANGE, HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC, "FRL_MODE_CHANGE"},
	{HDMI_DETECT_TMDS_CONFIG_CHANGE, HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC, "TMDS_CONFIG_CHANGE"},
	{HDMI_DETECT_PHY_CLOCK_STABLE, HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC, "PHY_CLOCK_STABLE"}
};
const unsigned char g_hdmi_detect_event_table_size = sizeof(hdmi_detect_event_table)/sizeof(HDMI_DETECT_EVENT_TABLE_ST);

const char* _hdmi_detect_event_action_str(HDMI_DETECT_EVENT_ACTION detect_event)
{
    switch(detect_event)
    {
    case HDMI_EVENT_ACTION_NONE:      return "NONE";
    case HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC:      return "RESET_TO_WAIT_SYNC";
    case HDMI_EVENT_ACTION_RESET_TO_SETUP_PLL:        return "RESET_TO_SETUP_PLL";
    case HDMI_EVENT_ACTION_QUICK_RESET_TO_WAIT_SYNC:        return "QUICK_RESET_TO_WAIT_SYNC";
    default:                    return "Unkown";
    }
}

#define HDMI_TMDS_MEAS_FAST_V_FREQ_TOLERENCE    4    // >=31HZ V FREQ
#define HDMI_TMDS_MEAS_SLOW_V_FREQ_TOLERENCE    2     // <31HZ V FREQ

unsigned char newbase_hdm_is_timing_change(unsigned char port, HDMI_TIMING_T* last_timing)
{
    HDMI_TIMING_T current_measure_tm;
    unsigned char result = FALSE;    

    if(last_timing == NULL)
    {
        HDMI_EMG("[newbase_hdm_is_timing_change port:%d] NULL Pointer!!\n", port);
        return FALSE;
    }

    memcpy(&current_measure_tm, last_timing, sizeof(HDMI_TIMING_T)); // copy base timing info from HDMIRX, get color space/deep color/pixel repeat

    if (hdmi_rx[port].video_t.vs_valid==0)
    {
        HDMI_WARN("[newbase_hdm_is_timing_change] port:%d, invalid vsync freq (vs_valid=%d, vs2vs_cnt=%d)!!\n",
            port, hdmi_rx[port].video_t.vs_valid, hdmi_rx[port].video_t.vs2vs_cnt);
        current_measure_tm.v_total = 0;
        current_measure_tm.v_freq = 0;
        return FALSE;
    }

    current_measure_tm.v_freq = VS_CNT_TO_VFREQ_0P1_HZ(hdmi_rx[port].video_t.vs2vs_cnt);

    if(1)
    {
        unsigned char v_freq_tol = 0;

        if(last_timing->v_freq < 310)
        {
            v_freq_tol = HDMI_TMDS_MEAS_SLOW_V_FREQ_TOLERENCE;
        }
        else
        {
            v_freq_tol = HDMI_TMDS_MEAS_FAST_V_FREQ_TOLERENCE;
        }
        if (HDMI_ABS(current_measure_tm.v_freq, last_timing->v_freq) > v_freq_tol)
        {
            HDMI_WARN("[newbase_hdm_is_timing_change] V Freq Change!! Port=%d, From %d to %d, tolerence:%d\n", port, last_timing->v_freq, current_measure_tm.v_freq, v_freq_tol);
            result |= TRUE;
        }

    }
    else
    {
        result = FALSE;
    }

    return result;
}

unsigned char newbase_hdmi_timing_monitor(unsigned char port, unsigned char frl_mode)
{//TRUE, timing changed; FALSE, keep the same timing 
	unsigned char is_allm = FALSE;
	unsigned char is_vrr = FALSE;

	if(GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_TIMING_MONITOR_ENABLE) == FALSE)
		return TRUE;

	//HDMI check timing realtime
	newbase_hdmi_get_fvs_allm(port, &is_allm);
	is_vrr = newbase_hdmi_get_vrr_enable(port) |newbase_hdmi_get_freesync_enable(port) ;

	if((is_allm == TRUE) || (is_vrr == TRUE) || (hdmi_rx[port].run_dsc ==TRUE) || (newbase_hdmi_get_power_saving_state(port)!=PS_FSM_POWER_SAVING_OFF))
	{//do nothing when running VRR/ALLM/DSC/ Enter Power saving
		//HDMI_INFO("[newbase_hdmi_check_mode port:%d] VRR_EN=%d, ALLM=%d, Dolby mode=%d\n", port, newbase_hdmi_get_vrr_enable(port), is_allm, get_HDMI_Dolby_VSIF_mode());
		return TRUE;
	}
	else
	{
		if(frl_mode == MODE_TMDS)
		{
			if(newbase_hdm_is_timing_change(port, &hdmi_rx[port].timing_t) == TRUE)
			{
				HDMI_WARN("[newbase_hdmi_timing_monitor port: %d] HDMI Timing change!!\n", port);
				return FALSE;
			}
		}
		else
		{
			if(newbase_hdmi_hd21_is_timing_change(port, hdmi_rx[port].run_dsc, &hdmi_rx[port].timing_t) == TRUE)
			{
				HDMI_WARN("[newbase_hdmi_timing_monitor port: %d] HDMI2.1 Timing change!!\n", port);
				return FALSE;
			}
		}
	}

	return TRUE;
}

unsigned int hdmi_power_saving_wakeup_remeasure = 0;

unsigned char newbase_hdmi_detect_mode(unsigned char port)
{
	unsigned char i =0;
	HDMIRX_PHY_STRUCT_T* p_phy_st;
	p_phy_st = newbase_rxphy_get_status(port);

	if(p_phy_st==NULL)
	{
		HDMI_EMG("newbase_hdmi_detect_mode, p_phy_st NULL Pointer \n");
		return _MODE_NOSIGNAL;
	}

	if (port >= HDMI_PORT_TOTAL_NUM) {
		return _MODE_NOSIGNAL;
	}

	if (lib_hdmi_get_fw_debug_bit(DEBUG_26_BYPASS_DETECT)) {
		return _MODE_NOSIGNAL;
	}

#ifdef HDMI_FIX_HDMI_POWER_SAVING

	newbase_hdmi_set_active_source(port);

	if (newbase_hdmi_get_power_saving_state(port)!=PS_FSM_POWER_SAVING_OFF)
	{
		if (!newbase_hdmi_is_dispsrc(SLR_MAIN_DISPLAY)) {     // if not force ground HDMI, then do nothing...
			return _MODE_NOSIGNAL;
		}

		if (hdmi_power_saving_wakeup_remeasure || p_phy_st->frl_mode!=MODE_TMDS)
		{
			newbase_hdmi_power_saving_wakeup(port, PS_WAKEUP_ACTIVE_SOURCE | PS_WAKEUP_IMMEDIATELY);  // normal wakeup
			HDMI_INFO("HDMI[p%d] is under Power Saving State, wait recover from power saving\n", port);
			SET_HDMI_DETECT_EVENT(port, HDMI_DETECT_PWR_WAKEUP_RESET);
		}
		else
		{
			newbase_hdmi_power_saving_wakeup(port, PS_WAKEUP_ACTIVE_SOURCE | PS_WAKEUP_IMMEDIATELY);  // normal wakeup
			return _MODE_NOSIGNAL;
		}
	}
#endif

	if (GET_H_VIDEO_FSM(port) > MAIN_FSM_HDMI_SETUP_VEDIO_PLL) {
		if (newbase_hdmi_check_condition_change(port)) {
			//SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_WAIT_SYNC);
			SET_HDMI_DETECT_EVENT(port, HDMI_DETECT_CONDITION_CHANGE);
		}
	}

	//HDMI_WARN("[DETECT] port=%d, event status=%x\n", port, g_detect_fsm_status[port].fsm_event_status);

	//Check external FSM event
	for(i = 0; i<g_hdmi_detect_event_table_size;i++)
	{
		if((g_detect_fsm_status[port].fsm_event_status & hdmi_detect_event_table[i].event_id) == hdmi_detect_event_table[i].event_id)
		{
			HDMI_WARN("[DETECT][EVENT][%2d] HDMI[p%d] Happened VIDEO FSM event: %s, Action: %s, fsm_event_status:%x\n",
				i, port, hdmi_detect_event_table[i].event_name, _hdmi_detect_event_action_str(hdmi_detect_event_table[i].event_action),
				g_detect_fsm_status[port].fsm_event_status);
			g_detect_fsm_status[port].execute_action |= hdmi_detect_event_table[i].event_action;
		}
	}

        //Execute action
	if((g_detect_fsm_status[port].execute_action&HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC) == HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC)
	{
		SET_H_INTERLACE(port, 0);
		SET_H_MODE(port, MODE_HDMI);
		SET_H_COLOR_DEPTH(port, HDMI_COLOR_DEPTH_8B);
		SET_H_COLOR_SPACE(port, COLOR_RGB);

		SET_H_3DFORMAT(port, HDMI3D_2D_ONLY);

		SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_WAIT_SYNC);

		hdmi_rx[port].tmds_clk_stable_cnt_thd  = DEFAULT_WAITSYNC_STABLE_CNT_THD;
		HDMI_WARN("[DETECT][ACTION] HDMI[p%d] Action: %s, fsm_event_status:%x\n",
			port,  _hdmi_detect_event_action_str(HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC), g_detect_fsm_status[port].fsm_event_status);
	}
	else if((g_detect_fsm_status[port].execute_action&HDMI_EVENT_ACTION_RESET_TO_SETUP_PLL) == HDMI_EVENT_ACTION_RESET_TO_SETUP_PLL)
	{
		SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_SETUP_VEDIO_PLL);
		hdmi_rx[port].tmds_clk_stable_cnt_thd  = 0;

		HDMI_WARN("[DETECT][ACTION] HDMI[p%d] Action: %s, fsm_event_status:%x\n",
			port,  _hdmi_detect_event_action_str(HDMI_EVENT_ACTION_RESET_TO_SETUP_PLL), g_detect_fsm_status[port].fsm_event_status);
	}
	else if((g_detect_fsm_status[port].execute_action&HDMI_EVENT_ACTION_QUICK_RESET_TO_WAIT_SYNC) == HDMI_EVENT_ACTION_QUICK_RESET_TO_WAIT_SYNC)
	{
		SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_WAIT_SYNC);
		if(p_phy_st->phy_proc_state < PHY_PROC_DONE)
		{//Wait phy stable
			hdmi_rx[port].tmds_clk_stable_cnt_thd  = DEFAULT_WAITSYNC_STABLE_CNT_THD;
		}
		else
		{
			hdmi_rx[port].tmds_clk_stable_cnt_thd  = 0;
		}
		HDMI_WARN("[DETECT][ACTION] HDMI[p%d] Action: %s, fsm_event_status:%x, tmds_clk_stable_cnt_thd=%d\n",
			port,  _hdmi_detect_event_action_str(HDMI_EVENT_ACTION_QUICK_RESET_TO_WAIT_SYNC), g_detect_fsm_status[port].fsm_event_status, hdmi_rx[port].tmds_clk_stable_cnt_thd);
	}

	if(GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_WAITSYNC_STABLE_CNT_THD) !=0)
	{// for debug only
		hdmi_rx[port].tmds_clk_stable_cnt_thd = GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_WAITSYNC_STABLE_CNT_THD);
	}

	//Record FSM history
	if(g_detect_fsm_status[port].last_fsm != GET_H_VIDEO_FSM(port))
	{
		g_detect_fsm_status[port].last_fsm = GET_H_VIDEO_FSM(port);
		if(g_detect_fsm_status[port].history_top_index<(DETECT_FSM_HISTROY_SIZE - 1))
		{
			g_detect_fsm_status[port].fsm_history[g_detect_fsm_status[port].history_top_index] = GET_H_VIDEO_FSM(port);
			g_detect_fsm_status[port].fsm_chg_time_ms[g_detect_fsm_status[port].history_top_index]  = hdmi_get_system_time_ms();
			g_detect_fsm_status[port].history_top_index ++;
		}
		else
		{
			unsigned int j = 0;
			for(j=1; j<=(DETECT_FSM_HISTROY_SIZE-1); j++)
			{
				g_detect_fsm_status[port].fsm_history[j-1] = g_detect_fsm_status[port].fsm_history[j];
				g_detect_fsm_status[port].fsm_chg_time_ms[j-1] = g_detect_fsm_status[port].fsm_chg_time_ms[j];
			}
			g_detect_fsm_status[port].fsm_history[g_detect_fsm_status[port].history_top_index] = GET_H_VIDEO_FSM(port);
			g_detect_fsm_status[port].fsm_chg_time_ms[g_detect_fsm_status[port].history_top_index]  = hdmi_get_system_time_ms();
		}
	}
	RESET_HDMI_DETECT_EVENT_STATUS(port);
	RESET_HDMI_DETECT_EVENT_ACTION(port);

	//status control
	if (GET_H_VIDEO_FSM(port)<MAIN_FSM_HDMI_VIDEO_READY)
		hdmi_display_ready = 0;         // reset hdmi_display_ready flag

	// only enable SCDC CED when signal is stable
	if(hdmi_rx[port].hdmi_2p1_en == FALSE && newbase_rxphy_get_setphy_done(port))
	{
		lib_hdmi_scdc_ced_enable(port, (GET_H_VIDEO_FSM(port)>=MAIN_FSM_HDMI_SETUP_VEDIO_PLL) ? 1 : 0);
	}

	newbase_hdmi_scdc_mask_update_flags(port, SCDC_UPDATE_FLAGS_STATUS_UPDATE,  (GET_H_VIDEO_FSM(port)>=MAIN_FSM_HDMI_MEASURE) ? 1 : 0);//Force SCDC 0x10[0] =0, avoid device comes

	switch (GET_H_VIDEO_FSM(port)) {
		case MAIN_FSM_HDMI_WAIT_SYNC:
			if(hdmi_good_timing_ready)
				hdmi_good_timing_ready = FALSE;
			if (newbase_hdmi_wait_sync(port, p_phy_st->frl_mode)) {
				SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_SETUP_VEDIO_PLL);
			} else {
				return _MODE_NOSIGNAL;
			}
		break;

		case MAIN_FSM_HDMI_SETUP_VEDIO_PLL:
			if((hdmi_rx[port].timing_t.tmds_clk_b == 0) && newbase_rxphy_is_tmds_mode(port))
			{
				SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_WAIT_SYNC);
				HDMI_WARN("[newbase_hdmi_detect_mode] Port =%d, Invalid flow when tmds_clk_b = 0 at SETUP_VEDIO_PLL", port);
				return _MODE_NOSIGNAL;
			}

			if (newbase_hdmi_setup_video_pll(port, p_phy_st->frl_mode)){
				SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_MEASURE);
			} else {
				return _MODE_NOSIGNAL;
			}
		break;

		case MAIN_FSM_HDMI_MEASURE:
			if (newbase_hdmi_measure(port, p_phy_st->frl_mode)) {
				SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_DISPLAY_ON);
			} else {
				SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_WAIT_SYNC);
				return _MODE_DETECT;
			}
		break;

		case MAIN_FSM_HDMI_DISPLAY_ON:
			if (newbase_hdmi_display_on(port, p_phy_st->frl_mode)) {
				if (newbase_hdmi_check_condition_change(port)) {
					SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_WAIT_SYNC);
					return _MODE_NOSIGNAL;
				}

				if((lib_hdmi_hdcp_port_read(port, 0xC1)&_BIT2))
				{// ENC_ERROR
					lib_hdmi_hdcp_port_write(port, 0xC4, 0x8);
					HDMI_WARN("[HDCP] ENC_ERROR flag, set ENS DIS, port=%d \n", port);
				}


				if(GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_FAST_DETECT_ENABLE) ==  HDMI_PCB_FORCE_ENABLE)
				{//Debug use
					HDMI_WARN("HDMI[%d] Fast detect mode, bypass compatibility_check\n", port);
				}
				else if(GET_MODE_HDMI_DOLBY_VSIF() != DOLBY_HDMI_VSIF_DISABLE)
				{//DOLBY_VISION_HDMI_AUTO_DETECT
					HDMI_WARN("HDMI[%d] Detected Dolby mode=%d,  bypass compatibility_check\n", port, GET_MODE_HDMI_DOLBY_VSIF());
				}
				else
				{
					if (!newbase_hdmi_compatibility_check(port))
					{
						SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_SETUP_VEDIO_PLL);
						return _MODE_DETECT;
					}
				}

				if(GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_AVMUTE_IRQ_ENABLE))
				{
					if (1)
					{
						unsigned long flags;
						spin_lock_irqsave(&hdmi_spin_lock, flags);  // make sure no irq handeler is running
						if (lib_hdmi_is_irq_pending(port)==0 && lib_hdmi_get_avmute(port)==0)
							lib_hdmi_avmute_irq_enable(port);
						spin_unlock_irqrestore(&hdmi_spin_lock, flags);
					}

					if (lib_hdmi_is_avmute_irq_enable(port)==0) {
						HDMI_WARN("HDMI[%d]  FSM=%s(%d), AVMUTE...lib_hdmi_is_avmute_irq_enable = 0\n", port, _hdmi_video_fsm_str(GET_H_VIDEO_FSM(port)), GET_H_VIDEO_FSM(port));
						SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_SETUP_VEDIO_PLL);
						return _MODE_NOSIGNAL;
					}

					HDMI_INFO("HDMI[%d] AVmute irq enabled\n", port);
				}

				if(GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_BCH_ERR_IRQ_ENABLE))
				{
					if(hdmi_rx[port].bch_err_cnt<=GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_BCH_ERR_IRQ_STOP_THD))
						lib_hdmi_bch_error_irq_en(port, 1);
					else
						lib_hdmi_bch_error_irq_en(port, 0); //disable BCH ERR IRQ
				}

				newbase_hdmi_scdc_mask_update_flags(port, SCDC_UPDATE_FLAGS_STATUS_UPDATE, TRUE);

				newbase_hdmi_set_6G_long_cable_enable(port , 1);//eanble 6g long cable detect
				HDMI_PRINTF("FSM_HDMI_DISPLAY_ON[%d] OK\n", port);
				SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_VIDEO_READY);
				if(!hdmi_good_timing_ready)
					hdmi_good_timing_ready = TRUE;
#ifdef CONFIG_SUPPORT_SCALER
				SET_REPLY_ZERO_TIMING_FLAG(VSC_INPUTSRC_HDMI, SOURCE_GOOD_TIMING_READY);
#endif
				return _MODE_SUCCESS;
			} else {
				hdmi_good_timing_ready = FALSE;
				SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_WAIT_SYNC);
				return _MODE_DETECT;
			}
		break;

		case MAIN_FSM_HDMI_VIDEO_READY:

			if (newbase_hdmi_is_output_disable())
			{
				if (lib_hdmi_is_video_output(port))
				{
					HDMI_EMG("Disable Video Output Due to HDMI output disabled\n");
					lib_hdmi_video_output(port, 0);     // blanking screen in step 1.
					lib_hdmi_video_output(port, 0);     // close again, avoid re-open in detect_mode
					lib_hdmi_ofms_clock_sel(port, 0);   // switch back to tmds clock
					lib_hdmi_set_dpc_enable(port, 0);   // disable dpc
				}
			}

			if (newbase_hdmi_video_ready(port, p_phy_st->frl_mode)) {
				// ...
				if(!hdmi_good_timing_ready)
					hdmi_good_timing_ready = TRUE;

#ifdef CONFIG_SUPPORT_SCALER
				SET_REPLY_ZERO_TIMING_FLAG(VSC_INPUTSRC_HDMI, SOURCE_GOOD_TIMING_READY);
#endif
				return _MODE_SUCCESS;
			} else {
				hdmi_good_timing_ready = FALSE;
				SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_WAIT_SYNC);
				return _MODE_NOSIGNAL;
			}
		break;

		default:
		break;
	}

	return _MODE_NOSIGNAL;
}

HDMI_CONDITION_CHG_TYPE newbase_hdmi_check_condition_change(unsigned char port)
{
	unsigned int phy_clk = 0;

	if (!newbase_hdmi_get_hpd(port)) {
		HDMI_EMG("[condition_change][port: %d] no hpd\n", port);
		return HDMI_CONDITION_CHG_RESET_PHY;
	}

	if (!newbase_rxphy_is_clk_stable(port)) {
		HDMI_EMG("[condition_change][port: %d] clk unstable\n", port);
		return HDMI_CONDITION_CHG_RESET_PHY;
	}

	phy_clk = newbase_rxphy_get_clk(port);

	if (phy_clk < VALID_MIN_CLOCK) {
		HDMI_EMG("[condition_change][port: %d] invalid clock=%d, threshold=%d\n", port, phy_clk, VALID_MIN_CLOCK);
		return HDMI_CONDITION_CHG_RESET_PHY;
	}

	if (hdmi_rx[port].hdmi_2p1_en==0 && HDMI_ABS(phy_clk, hdmi_rx[port].timing_t.tmds_clk_b) > TMDS_CLOCK_TOLERANCE(port)) {
		HDMI_EMG("[condition_change][port: %d] clock change from %d to %d, tolerance=%d\n", port, hdmi_rx[port].timing_t.tmds_clk_b, phy_clk, TMDS_CLOCK_TOLERANCE(port));
		return HDMI_CONDITION_CHG_RESET_PHY;
	}

	if (MODE_HDMI == GET_H_MODE(port)) {
		if (GET_H_COLOR_SPACE(port) != newbase_hdmi_get_colorspace_reg(port)) {
			HDMI_EMG("[condition_change][port: %d] colorspace chg from %d to %d\n", port, GET_H_COLOR_SPACE(port), newbase_hdmi_get_colorspace_reg(port));
			return HDMI_CONDITION_CHG_RESET_VIDEO_PLL;
		}

		if (GET_H_COLOR_DEPTH(port) != lib_hdmi_get_color_depth(port)) {
			HDMI_EMG("[condition_change][port: %d] color depth chage from %d to %d\n", port, GET_H_COLOR_DEPTH(port), lib_hdmi_get_color_depth(port));
			return HDMI_CONDITION_CHG_RESET_VIDEO_PLL;
		}
	}

	if (GET_H_MODE(port) != newbase_hdmi_get_hdmi_mode_reg(port)) {
		HDMI_EMG("[condition_change][port: %d] HDMI/DVI chg from %d to %d\n", port, GET_H_MODE(port), (!GET_H_MODE(port)));
		return HDMI_CONDITION_CHG_RESET_PHY;
	}


	if(GET_H_RUN_VRR(port) != (newbase_hdmi_get_vrr_enable(port) |newbase_hdmi_get_freesync_enable(port)) )
	{//check VRR_EN again,  if VRR_EN from 0 -> 1, it should re-maasure
		HDMI_EMG("[condition_change][port: %d] RUN_VRR chg from %d -> %d (VRR_EN=%d, AMD_FREESYNC_EN=%d)\n",
			port, GET_H_RUN_VRR(port), !GET_H_RUN_VRR(port), newbase_hdmi_get_vrr_enable(port), newbase_hdmi_get_freesync_enable(port));
		return HDMI_CONDITION_CHG_RESET_VIDEO_PLL;
	}

	return HDMI_CONDITION_CHG_NONE;
}

unsigned char newbase_hdmi_wait_sync(unsigned char port, unsigned char frl_mode)
{
#if HDMI_TOGGLE_HPD_Z0_ENABLE
	lib_hdmi_toggle_hpd_z0_check(port, _FALSE);
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE

	if (newbase_hdmi_get_hpd(port)==0)
		return FALSE;

	if (frl_mode != MODE_TMDS)
	{
		if(newbase_hdmi_hd21_is_data_align_lock(port)==FALSE)
			return FALSE;

		if(hdmi_rx[port].hdmi_2p1_en==FALSE)
		{
			HDMI_WARN("[newbase_hdmi_wait_sync] without running Link Training!!!");
			//hdmi_rx[port].hdmi_2p1_en = TRUE;
		}
		hdmi_rx[port].timing_t.tmds_clk_b = newbase_rxphy_get_clk(port);

		if(lt_fsm_status[port].tx_flt_no_train == TRUE)
		{
			msleep(100);
			return FALSE;
		}

		// wait valid vsync (we don't use vs_lock because of in VRR mode, the vsync might change ever frame)
		// vs_valid measns the current frame is located at operation region
		if ((!hdmi_rx[port].video_t.vs_valid || hdmi_rx[port].video_t.vs_cnt < 3))
		{
			HDMI_PRINTF("HDMI[p%d] wait VSync become valid (vs_valid=%d, vs_cnt=%d)\n", port, hdmi_rx[port].video_t.vs_valid, hdmi_rx[port].video_t.vs_cnt);		
			return FALSE;
		}

#if 1 //ef WAIT_SYNC_WITH_BCH_ERROR_CHECK
		if (hdmi_rx[port].bch_err_detect)
		{
			HDMI_PRINTF("HDMI[p%d] wait for BCH Error stable (det=%d/cont=%d/cnt=%d)\n", 
			    port, hdmi_rx[port].bch_err_detect, hdmi_rx[port].bch_err_cnt_continue, hdmi_rx[port].bch_err_cnt);
			return FALSE;
		}
#endif
	}
	else
	{
		unsigned int curr_clk = newbase_rxphy_get_clk(port);

		if ((curr_clk < VALID_MIN_CLOCK) ||
			(HDMI_ABS(hdmi_rx[port].timing_t.tmds_clk_b, curr_clk) > TMDS_CLOCK_TOLERANCE(port)))
		{
			// Set false if clock is invalid or changed
			hdmi_rx[port].timing_t.tmds_clk_b = curr_clk;
			hdmi_rx[port].tmds_clk_stable_cnt = 0;
			if (hdmi_rx[port].timing_t.is_interlace) {
				lib_hdmi_clear_interlace_reg(port);
				lib_hdmi_vsync_checked(port);
				hdmi_rx[port].timing_t.is_interlace = 0;
			}
			return FALSE;
		}


		if (!newbase_rxphy_get_setphy_done(port))
		{
			//HDMI_PRINTF("Wait for set_phy(p%d)\n", port);
			return FALSE;
		}

		if (hdmi_rx[port].tmds_clk_stable_cnt  < hdmi_rx[port].tmds_clk_stable_cnt_thd) {
			// Set false if clock is unstable
			hdmi_rx[port].tmds_clk_stable_cnt++;
			return FALSE;
		}

		hdmi_rx[port].timing_t.tmds_clk_b = curr_clk;

		// wait valid vsync (we don't use vs_lock because of in VRR mode, the vsync might change ever frame)
		// vs_valid measns the current frame is located at operation region
		if ((!hdmi_rx[port].video_t.vs_valid || hdmi_rx[port].video_t.vs_cnt < 3))
		{
			HDMI_PRINTF("HDMI[p%d] wait VSync become valid (vs_valid=%d, vs_cnt=%d)\n", port, hdmi_rx[port].video_t.vs_valid, hdmi_rx[port].video_t.vs_cnt);
			return FALSE;
		}

#ifdef WAIT_SYNC_WITH_BCH_ERROR_CHECK
		if (hdmi_rx[port].bch_err_detect)
		{
			HDMI_PRINTF("HDMI[p%d] wait for BCH Error stable (%d)\n", port, hdmi_rx[port].bch_err_detect);
			return FALSE;
		}
#endif

		lib_hdmi_scdc_ced_error_det_sum_port_sel(port, newbase_hdmi_hd21_get_frl_lane(frl_mode));//SCDC setting by lane, need move to hdmi_scdc.c
		
		lib_hdmi_scdc_char_err_rst(port, 0);
		lib_hdmi_scdc_set_maximum_char_err(port,newbase_hdmi_get_tmds_clockx10(port)/10); //hdmi2.0 only
		lib_hdmi_clr_int_pro_chg_flag(port);

	}


	newbase_hdmi_open_err_detect(port);
	newbase_hdmi_reset_thr_cnt(port);
	lib_hdmi_set_repeat_auto(port);
	lib_hdmi_set_colorspace_auto(port);

	lib_hdmi_set_dpc_enable(port, 0); // disable dpc
	lib_hdmi_ofms_clock_sel(port, 0); // switch back to tmds clock
	newbase_hdmi_audio_var_init(port);
	newbase_hdmi_reset_all_infoframe(port, NO_RESET_SPD);
	newbase_hdmi_reset_all_emp(port, NO_RESET_VTEM | NO_RESET_CVTEM);  // keep VTEM and CVTEM alive to prevent to be cleared by measure fail
	lib_hdmi_audio_set_hbr_manual_mode(port, 0, 0);
	lib_hdmi_audio_clear_hbr_status(port);
	newbase_hdmi_set_online_measure_error_flag(port,0);//clr online measure error flag

#ifdef HDMI_AVI_INFO_COLORIMETRY_ENABLE
	newbase_hdmi_check_avi_colorimetry_info(port, _TRUE);
#endif //#ifdef HDMI_AVI_INFO_COLORIMETRY_ENABLE

	return TRUE;
}

unsigned char newbase_hdmi_setup_video_pll(unsigned char port, unsigned char frl_mode)
{
	HDMI_EM_VTEM_T emp_vtem;
	unsigned char is_get_vtem = 0;
	HDMI_AMD_FREE_SYNC_INFO fs_info;
	unsigned char is_get_freesync_info = 0;

	memset(&emp_vtem, 0, sizeof(HDMI_EM_VTEM_T)); //init vtem
	memset(&fs_info, 0, sizeof(HDMI_AMD_FREE_SYNC_INFO)); //init freesync info


	HDMI_INFO("FSM_HDMI_SETUP_VEDIO_PLL[%d][frl_mode:(%s)%d][hdmi21en:%d][wait_sync_cnt_thd:%d]\n",
		port, _hdmi_hd21_frl_mode_str(frl_mode), frl_mode, hdmi_rx[port].hdmi_2p1_en, hdmi_rx[port].tmds_clk_stable_cnt_thd);

	newbase_hdmi_port_select(port, frl_mode);

	SET_H_COLOR_DEPTH(port, (HDMI_COLOR_DEPTH_T)lib_hdmi_get_color_depth(port));
	SET_H_MODE(port, (HDMI_DVI_MODE_T)newbase_hdmi_get_hdmi_mode_reg(port));
	SET_H_PIXEL_REPEAT(port, lib_hdmi_get_pixelrepeat(port));

	if (GET_H_MODE(port) == MODE_DVI) {
		lib_hdmi_set_repeat_manual(port, 0);
		lib_hdmi_set_colorspace_manual(port, 0);
	} else {
		lib_hdmi_set_repeat_auto(port);
		lib_hdmi_set_colorspace_auto(port);
	}

	SET_H_COLOR_SPACE(port, (HDMI_COLOR_SPACE_T)newbase_hdmi_get_colorspace_reg(port));

	if(GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_LINK_STATUS_MONITOR_ENABLE) == FALSE)
	{
        	SET_H_INTERLACE(port, newbase_hdmi_get_is_interlace_reg(port, frl_mode, HDMI_MS_ONESHOT));
	}

	HDMI_INFO("[setup_video_pll] port [%d], bIsHDMIDVI: %d, PixelRepeat: %d, ColorDepth: %s, ColorSpace: %s, BCH error 2bit(detect,cont,total) = (%d,%d,%d),  mac_port_sel=%d\n",
		port,
		GET_H_MODE(port),
		GET_H_PIXEL_REPEAT(port),
		GET_H_COLOR_DEPTH(port) < (sizeof(depth_name)/4)  ? depth_name[GET_H_COLOR_DEPTH(port)] : "UNDEFINED",
		GET_H_COLOR_SPACE(port) < (sizeof(colorspace_name)/4)  ? colorspace_name[GET_H_COLOR_SPACE(port)] : "UNDEFINED",
		(hdmi_rx[port].bch_err_detect) ? 1 : 0,
		hdmi_rx[port].bch_err_cnt_continue,
		hdmi_rx[port].bch_err_cnt,
		HDMI_PORT_SWITCH_get_port_sel(hdmi_in(HDMI_PORT_SWITCH_reg)));

	if (!lib_hdmi_set_video_pll(port,
		hdmi_rx[port].timing_t.tmds_clk_b,
		frl_mode,
		hdmi_rx[port].timing_t.colordepth,
		hdmi_rx[port].timing_t.is_interlace,
		hdmi_rx[port].timing_t.colorspace==COLOR_YUV420,
		&hdmi_rx[port].timing_t.pll_pixelclockx1024))
		return FALSE;

       //check VRR/AMD freesync
	is_get_vtem = newbase_hdmi_get_vtem_info(port, &emp_vtem);
	is_get_freesync_info = newbase_hdmi_get_freesync_info(port, &fs_info);

	if(is_get_vtem ==TRUE || is_get_freesync_info == TRUE)
	{
		SET_H_RUN_VRR(port, emp_vtem.VRR_EN | fs_info.freesync_enabled);
	}
	else
	{
		SET_H_RUN_VRR(port, 0);
	}
	HDMI_INFO("[setup_video_pll] VTEM VRR,port=%d, is_get_vtem=%d, FVA_Factor_M1=%d, M_CONST=%d, VRR_EN=%d, Base_Vfront=%d, RB=%d, Base_Refresh_Rate=%d\n", 
		port, 
		is_get_vtem,
		emp_vtem.FVA_Factor_M1,
		emp_vtem.M_CONST,
		emp_vtem.VRR_EN,
		emp_vtem.Base_Vfront,
		emp_vtem.RB,
		emp_vtem.Base_Refresh_Rate);
	HDMI_INFO("[setup_video_pll] AMD FREESYNC SPD,port=%d, is_get_freesync_info=%d, version=%d, supported=%d, enabled=%d, activate=%d, min_refresh_rate=%d, max_refresh_rate=%d, brightness_control=%d\n", 
		port, 
		is_get_freesync_info,
		fs_info.version,
		fs_info.freesync_supported,
		fs_info.freesync_enabled,
		fs_info.freesync_activate,
		fs_info.min_refresh_rate,
		fs_info.max_refresh_rate,
		fs_info.brightness_control);

	return TRUE;
}

typedef struct {
    unsigned short hres;
    unsigned short vres;
}INVAILD_TIMING_RES;

const INVAILD_TIMING_RES invaild_timing[] =
{
    {1600, 720},     // 1280 10b
    {1920, 720},     // 1280 12b
    {2400, 1080},    // 1920 10b
    {2880, 1080},    // 1920 12b
    {3200, 1080},    // 2560 1080 10b
    {3840, 1080},    // 2560 1080 12b
    {3200, 1440},    // 2560 1440 10b
    {3840, 1440},    // 2560 1440 12b
    {4800, 2160},    // 3840 10b
    {5760, 2160},    // 3840 12b
    {5120, 2160},    // 4096 10b
    {6144, 2160},    // 4096 12b
};

unsigned char newbase_hdmims_measure_vaild(unsigned char nport)
{
	int i = 0;

	if (hdmi_rx[nport].hdmi_2p1_en)   // skip invalid timing check if is HDMI2.1 mode
		return TRUE;

	HDMI_PRINTF("[newbase_hdmims_measure_vaild]HDMI[p%d] check measure timing.\n", nport);

	for( i = 0; i< (sizeof(invaild_timing)/sizeof(INVAILD_TIMING_RES)); i ++)
	{
		if(hdmi_rx[nport].timing_t.h_act_len == invaild_timing[i].hres &&hdmi_rx[nport].timing_t.v_act_len==invaild_timing[i].vres)
		{
			HDMI_WARN("[newbase_hdmims_measure_vaild] port =%d, ColorDepth = %d, measure_retry_cnt=%d, Run re-measure\n", 
				nport, hdmi_rx[nport].timing_t.colordepth, hdmi_rx[nport].meas_retry_cnt);
			msleep(10);
			return FALSE;
		}
		else
		{
			//HDMI_PRINTF("[newbase_hdmims_measure_vaild] h_act_len =%d\n.", hdmi_rx[nport].timing_t.h_act_len);
			//HDMI_PRINTF("[newbase_hdmims_measure_vaild] v_act_len =%d\n.", hdmi_rx[nport].timing_t.v_act_len);
		}
	}

	return TRUE;
}

/*---------------------------------------------------
 * Func : newbase_hdmi_vic_correction
 *
 * Desc : When the timing of VIC of AVI InfoFram is different from the timing of actual signal.
 *        VIC code may be used to compensate derived video timing, 
 *        but must use exception codes incase of VIC codes far not matching to the derived video timing.
 *         - AVI InfoFrame = Video : OK
 *         - AVI Infoframe != Video 
 *           1. 422/444 : Refer to actual video H / V data
 *           2. For 420 : considered as over 4K. Correct timing info by VIC table.
 *
 * Para : port : HDMI port number
 *                    tm: timing info from offline measure
 *                    force_assign_tm: True, Force assgin VIC to tm, False, no assign
 *
 * Retn : TRUE : Need correction, FALSE : No correction by this function.
 *--------------------------------------------------*/
unsigned char newbase_hdmi_vic_correction(unsigned char port, HDMI_TIMING_T *tm, unsigned char force_assign_tm)
{
	unsigned char is_correction = FALSE;
	unsigned char avi_state = 0;
	HDMI_AVI_T avi_info;
	const VIC_TIMING_INFO* vic_timing_info_ptr;

	HDMI_INFO("[newbase_hdmi_vic_correction port: %d] force_assign_tm =%d\n", port, force_assign_tm);
	avi_state = newbase_hdmi_get_avi_infoframe(port, &avi_info);
	if(avi_state == 0)
	{
		HDMI_INFO("VIC Read fail!State: %d. No avi info!!\n", avi_state);
		is_correction = FALSE;
	}
	else
	{
		unsigned int avi_colorspace = avi_info.Y;
		HDMI_INFO( "AVIINFO ColorSpace: %s; Detected ColorSpace: %s\n", _hdmi_color_space_str(avi_colorspace), _hdmi_color_space_str(GET_H_COLOR_SPACE(port)));
		HDMI_INFO("avi_info.VIC = %d\n", avi_info.VIC);
		vic_timing_info_ptr = _get_vic_timing(avi_info.VIC);
		if (vic_timing_info_ptr)
		{
			HDMI_WARN("Table,\t HActive: %5d, VActive: %5d, HStart:%3d, VStart:%3d, h_total: %5d, v_total: %5d, hfreq:%4d, vfreq:%3d, is_interlace:%d\n",
				vic_timing_info_ptr->hActive,
				vic_timing_info_ptr->vActive,
				(vic_timing_info_ptr->hSyncWidth + vic_timing_info_ptr->hBackPorch),
				(vic_timing_info_ptr->vSyncWidth + vic_timing_info_ptr->vBackPorch),
				vic_timing_info_ptr->hTotal,
				vic_timing_info_ptr->vTotal,
				vic_timing_info_ptr->hFreq,
				vic_timing_info_ptr->vFreq,
				(vic_timing_info_ptr->prog ==VIC_TB_INTERLACE)?1:0);
			if(tm ->h_act_len != vic_timing_info_ptr->hActive || tm ->v_act_len != vic_timing_info_ptr->vActive
			|| (force_assign_tm == TRUE))
			{
				if((avi_colorspace == COLOR_YUV420) || (force_assign_tm == TRUE))
				{//YUV420
					HDMI_WARN("OFMS,\t HActive: %5d, VActive: %5d, HStart:%3d, VStart:%3d, h_total: %5d, v_total: %5d, hfreq:%4d, vfreq:%3d, is_interlace:%d\n",
						tm ->h_act_len, tm ->v_act_len, tm ->h_act_sta, tm ->v_act_sta, tm ->h_total, tm ->v_total, tm->h_freq, tm->v_freq, tm->is_interlace);
					HDMI_WARN("OFMS is not match with VIC table\n");

					tm ->h_act_len = vic_timing_info_ptr->hActive;
					tm ->v_act_len = vic_timing_info_ptr->vActive;
					tm ->h_total = vic_timing_info_ptr->hTotal;
					tm ->v_total = vic_timing_info_ptr->vTotal;
					tm ->h_act_sta = vic_timing_info_ptr->hSyncWidth + vic_timing_info_ptr->hBackPorch;
					tm ->v_act_sta = vic_timing_info_ptr->vSyncWidth + vic_timing_info_ptr->vBackPorch;

					tm ->h_freq = vic_timing_info_ptr->hFreq;
					tm ->v_freq = vic_timing_info_ptr->vFreq;
					tm ->IHSyncPulseCount = vic_timing_info_ptr->hSyncWidth;
					tm ->IVSyncPulseCount = vic_timing_info_ptr->vSyncWidth;
					tm ->is_interlace= (vic_timing_info_ptr->prog ==VIC_TB_INTERLACE)?1:0;

					if(vic_timing_info_ptr->prog == VIC_TB_INTERLACE)
					{
						tm ->v_total = (tm ->v_total+1) /2;
						tm ->v_act_len /=2;
					}

					if (tm->pixel_repeat > 0)
					{
						HDMI_WARN("Pixel Repeat Correction!! VIC:%d, correct H by Pixel Repeat =%d !H/(pixel_repeat+1)\n", avi_info.VIC, tm->pixel_repeat);
						tm->h_act_sta /= (tm->pixel_repeat+1);
						tm->h_total /= (tm->pixel_repeat+1);
						tm->h_act_len /= (tm->pixel_repeat+1);
					}
					is_correction = TRUE;

					HDMI_WARN("Correction Fianl measure result!!\n");
					HDMI_WARN("Final,\t HActive: %5d, VActive: %5d, HStart:%3d, VStart:%3d, h_total: %5d, v_total: %5d, hfreq:%4d, vfreq:%3d, is_interlace:%d\n",
						tm ->h_act_len, tm ->v_act_len, tm ->h_act_sta, tm ->v_act_sta, tm ->h_total, tm ->v_total, tm->h_freq, tm->v_freq, tm ->is_interlace);

				}
				else
				{
					HDMI_INFO("NO CORRECTION. Use OFMS original, HActive: %5d, VActive: %5d, HStart:%3d, VStart:%3d, h_total: %5d, v_total: %5d, hfreq:%4d, vfreq:%3d, is_interlace:%d\n",
						tm ->h_act_len, tm ->v_act_len, tm ->h_act_sta, tm ->v_act_sta, tm ->h_total, tm ->v_total, tm->h_freq, tm->v_freq, tm->is_interlace);
					is_correction = FALSE;
				}
			}
			else
			{//other
				is_correction = FALSE;
			}
		}
		else
		{
			HDMI_INFO("Mismatch VIC timing, VIC = %d\n", avi_info.VIC);
		}
    }
    return is_correction;
}

void newbase_hdmi_set_default_dpc_phase_value(unsigned char port, HDMI_COLOR_DEPTH_T current_deep_color)
{// Set up HDMI 2.1 Deep Color default phase calibration (for K5LP only)
#if 0 // K6 no need this patch
	unsigned char is_gcp_default_phase = lib_hdmi_is_dpc_default_phase(port);
	unsigned char default_dpc_phase = 0;

	if(is_gcp_default_phase)
	{
		switch(current_deep_color)
		{
		case HDMI_COLOR_DEPTH_8B:
			default_dpc_phase = 0x00;    // 24 bits per pixel (8 bits)
			break;
		case HDMI_COLOR_DEPTH_10B:
			default_dpc_phase = 0x10;    // 30 bits per pixel (10 bits)
			break;
		case HDMI_COLOR_DEPTH_12B:
			default_dpc_phase = 0x04;    // 36 bits per pixel (12 bits)
			break;
		case HDMI_COLOR_DEPTH_16B:
			default_dpc_phase = 0x02;    // 48 bits per pixel (16 bits)
			break;
		default:
			default_dpc_phase = 0x00;    // 24 bits per pixel (8 bits)
			break;
		}
	}
	else
	{
		default_dpc_phase = 0x00;    // 24 bits per pixel (8 bits)
	}
	HDMI_PRINTF("[newbase_hdmi_set_dpc_phase_value][port %d] deepcolor=%d, is_gcp_default_phase=%d, default_dpc_phase=0x%x\n", port, current_deep_color, is_gcp_default_phase, default_dpc_phase);

	hdmi_mask(HDMI_P0_PORT0_FW_FUNC_reg, ~FW_PP_DEFAULT_PHASE_MASK, FW_PP_DEFAULT_PHASE(default_dpc_phase));
#endif
}

unsigned int newbase_hdmi_calculate_pixel_clock(unsigned char port, HDMI_TIMING_T *tm)
{
	unsigned int pixel_clock = 0;
	pixel_clock = (tm->h_total/100) * (tm->v_total/100) *( tm->v_freq/10);
	HDMI_INFO("[OFMS] Pixel_Clock[%d]\n", pixel_clock);
	return pixel_clock;
}

unsigned char newbase_hdmi_measure(unsigned char port, unsigned char frl_mode)
{
	unsigned int timing_gen_fifo_status = 0;

	HDMI_WARN("FSM_HDMI_MEASURE[12.01][%d][frl_mode:%d][hdmi21en:%d][retry_cnt:%d][confirm_vic_cnt:%d]\n",
		port, frl_mode, hdmi_rx[port].hdmi_2p1_en, hdmi_rx[port].meas_retry_cnt, hdmi_rx[port].meas_confirm_vic_cnt);

	lib_hdmi_ofms_clock_sel(port,1); // swtich to pixel clock
	lib_hdmi_meas_select_port(port);
	lib_hdmi_video_output(port, 1);

	if (frl_mode != MODE_TMDS)
	{
		if(GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_SUPPORT_DSC))
		{
			lib_hdmi_hd21_timing_gen_enable(port, 0);   // disable timing gen
			udelay(10);
			newbase_hdmi_hd21_dsc_enanble(port, 0);     // disable DSC
			udelay(10);
			lib_hdmi_hd21_timing_gen_enable(port, 1);   // enable timing gen
			hdmi_rx[port].cvtem_emp_cnt = 0;

		#ifdef CONFIG_SUPPORT_DOLBY_VSIF
			// note : work around for Dolby VSIF patch, when Dolby VSIF is enabled
			// the info thread might be disabled by Scaler, to make sure the
			// CVTEM can be received properly, we force update info & emp over here
			if (1)
			{
				unsigned int i = 0;
				for (i=0; i<20 && hdmi_rx[port].cvtem_emp_cnt==0; i++)
				{
					newbase_hdmi_update_infoframe(port);
					msleep(10);
				}
			}
		#else
			msleep(100);
		#endif

			if (hdmi_rx[port].cvtem_emp_cnt)
				hdmi_rx[port].run_dsc= TRUE;
			else
				hdmi_rx[port].run_dsc= FALSE;
				
			HDMI_WARN("[newbase_hdmi_measure] HDMI[p%d] run_dsc = %d, cvtem_emp_cnt=%d\n", port, hdmi_rx[port].run_dsc, hdmi_rx[port].cvtem_emp_cnt);
		}

		if(newbase_hdmi_hd21_is_data_align_lock(port) == TRUE)
		{
			newbase_hdmi_set_default_dpc_phase_value(port, GET_H_COLOR_DEPTH(port)); //set default value before HDMI2.1 timing gen
			lib_hdmi_hd21_clk_div_en(port, FALSE);
			lib_hdmi_hd21_timing_gen_reset_toggle(port);  // enable HDMI 2.1 timing gen
			timing_gen_fifo_status = lib_hdmi_hd21_get_timing_gen_status(port);

			HDMI_WARN("[newbase_hdmi_measure] HDMI2.1 port =%d, 1st Check Timing Gen Error =0x%x\n", port, timing_gen_fifo_status);
		}
		else
		{//Data align fail, need return to wait sync state
			HDMI_WARN("[newbase_hdmi_measure] HDMI2.1 port =%d, Data align fail\n", port);

			hdmi_rx[port].meas_retry_cnt++;
			if (hdmi_rx[port].meas_retry_cnt > GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_MEASURE_ERR_CNT_THD))
			{
				//TBD
				//newbase_rxphy_reset_setphy_proc(port);
			}
			return FALSE;
		}


		if ((GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_SUPPORT_DSC)) && hdmi_rx[port].run_dsc)
		{
			// make sure the timing gen enabled after DSC enabled
			lib_hdmi_hd21_timing_gen_enable(port, 0);  // disable timing gen
			udelay(10);
			newbase_hdmi_hd21_dsc_enanble(port, 1);
			udelay(10);
			lib_hdmi_hd21_timing_gen_enable(port, 1);  // enable timing gen
		}
	}

	if (!newbase_hdmims_measure_video(port, &hdmi_rx[port].timing_t, frl_mode) ||	
		!newbase_hdmims_measure_vaild(port)) 
	{
		hdmi_rx[port].meas_retry_cnt++;
		if (hdmi_rx[port].meas_retry_cnt > GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_MEASURE_ERR_CNT_THD)) {


			if (frl_mode == MODE_TMDS)
			{
				newbase_rxphy_reset_setphy_proc(port);
				//USER:LewisLee DATE:2016/11/22
				//to prevent Tx unstable, pixel clock unstable, but large than VALID_MIN_CLOCK
				//it will let toggle function NG
				//pixel clock stable + measure NG
				newbase_hdmi2p0_inc_scdc_toggle(port);
			}

#if HDMI_STR_TOGGLE_HPD_ENABLE
			if(HDMI_STR_HPD_TOGGLE_READY == lib_hdmi_get_str_toggle_hpd_state(port))
			{
				newbase_hdmi_set_hpd(port, 0);

				msleep(newbase_hdmi_get_str_hpd_low_ms());
				HDMI_EMG("STR on HPD Toggle\n");
				newbase_hdmi_set_hpd(port, 1);
				lib_hdmi_set_str_toggle_hpd_state(port, HDMI_STR_HPD_TOGGLE_NONE);
			}
#endif //#if HDMI_STR_TOGGLE_HPD_ENABLE
		}
		HDMI_WARN("Measure fail, meas_retry (current, thd)= (%d, %d)\n", hdmi_rx[port].meas_retry_cnt, GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_MEASURE_ERR_CNT_THD));
		return FALSE;
	}

	newbase_hdmi_check_crc_0(port);

	//Final check VIC table and OFMS result
	if(newbase_hdmi_vic_correction(port,  &hdmi_rx[port].timing_t, GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_FORCE_VIC_MEASURE)) == TRUE)
	{
		hdmi_rx[port].meas_confirm_vic_cnt ++;

		if(hdmi_rx[port].meas_confirm_vic_cnt <= GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_VIC_CONFIRM_CNT_THD))
		{
			HDMI_WARN("[newbase_hdmi_measure port:%d] Confirm VIC again,  meas_confirm_vic_cnt(curr, max)=(%d,%d), force_vic_measure=%d!!\n", 
				port, hdmi_rx[port].meas_confirm_vic_cnt, GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_VIC_CONFIRM_CNT_THD), GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_FORCE_VIC_MEASURE));

			return FALSE;
		}
		else
		{
			HDMI_WARN("[newbase_hdmi_measure port:%d] Confirm VIC completed!! Replace timing format from OFMS to VIC table!!\n", port);
		}
	}

	if (frl_mode != MODE_TMDS)
	{
		if(hdmi_rx[port].run_dsc == TRUE)
		{
			HDMI_WARN("DSC Polarity force assign form  %d -> %d\n", hdmi_rx[port].timing_t.polarity, VIC_SYNC_HP_VP);
			hdmi_rx[port].timing_t.polarity = VIC_SYNC_HP_VP;
		}

		if(get_ic_version() < VERSION_C)
		{
			lib_hdmi_420_en(port, 0);
			mdelay(10);
		}

		lib_hdmi_set_420_vactive(port, hdmi_rx[port].timing_t.v_act_len);
		lib_hdmi_420_en(port, (GET_H_COLOR_SPACE(port) == COLOR_YUV420) ? 1 : 0); // enable YUV420 function

		if(newbase_hdmi_calculate_pixel_clock(port, &hdmi_rx[port].timing_t) <= 60000)
		{
			newbase_hdmi_hd21_clk_gen(port, hdmi_rx[port].run_dsc, HDMI_MAC_1_PIXEL_MODE); // 1 pixel 
		}
		else
		{
			newbase_hdmi_hd21_clk_gen(port, hdmi_rx[port].run_dsc, HDMI_MAC_2_PIXEL_MODE); // 2 pixel
		}
		//Reset ps measure result
		lib_hdmi_hd21_fec_measure_restart(port, hdmi_rx[port].run_dsc);
		lib_hdmi_hd21_clr_fec_frl_vs(port);

	}
	else
	{//hdmi 2.0 only one pixel mode
		newbase_hdmi_hd21_clk_gen(port, hdmi_rx[port].run_dsc, HDMI_MAC_1_PIXEL_MODE); // 1 pixel
	}

	//HDMI_PRINTF("2.GET_H_COLOR_DEPTH[%d]\n", GET_H_COLOR_DEPTH(port));
	//HDMI_PRINTF("GET_H_PIXEL_REPEAT[%d]\n", GET_H_PIXEL_REPEAT(port));
	//HDMI_PRINTF("GET_H_MODE[%d]\n", GET_H_MODE(port));
	//HDMI_PRINTF("GET_H_COLOR_SPACE[%d]\n", GET_H_COLOR_SPACE(port));
	//HDMI_PRINTF("GET_H_INTERLACE[%d]\n", GET_H_INTERLACE(port));	

	return TRUE;
}

unsigned char newbase_hdmi_display_on(unsigned char port, unsigned char frl_mode)
{
	HDMI_PRINTF("FSM_HDMI_DISPLAY_ON[%d][frl_mode:%d][hdmi21en:%d]\n", port, frl_mode, hdmi_rx[port].hdmi_2p1_en);

#ifdef CONFIG_SUPPORT_SCALER
	SET_MODE_IHCOUNT(hdmi_rx[port].timing_t.h_total);
	SET_MODE_IVCOUNT(hdmi_rx[port].timing_t.v_total);
	SET_MODE_IHFREQ(hdmi_rx[port].timing_t.h_freq);
	SET_MODE_IVFREQ(hdmi_rx[port].timing_t.v_freq);

	hdmi_rx[port].timing_t.modetable_index = GET_HDMI_SEARCH_MODE(&hdmi_rx[port].timing_t.mode_id);
#endif

	if (GET_H_COLOR_SPACE(port) != newbase_hdmi_get_colorspace_reg(port)) {
		HDMI_EMG("D-CS chg from %d to %d\n", GET_H_COLOR_SPACE(port), newbase_hdmi_get_colorspace_reg(port));
		return FALSE;
	}
	if (GET_H_COLOR_DEPTH(port) != lib_hdmi_get_color_depth(port)) {
		HDMI_EMG("D-CD chg from %d to %d\n", GET_H_COLOR_DEPTH(port), lib_hdmi_get_color_depth(port));
		return FALSE;
	}
	if (GET_H_PIXEL_REPEAT(port) != lib_hdmi_get_pixelrepeat(port)) {
		HDMI_EMG("D-PR chg from %d to %d\n", GET_H_PIXEL_REPEAT(port), lib_hdmi_get_pixelrepeat(port));
		return FALSE;
	}
	if(newbase_hdmi_get_is_interlace_change(port, frl_mode))
	{
		HDMI_EMG("interlace change,  from %d to %d\n", GET_H_INTERLACE(port), (!GET_H_INTERLACE(port)));
		return FALSE;
	}

	newbase_hdmi_set_scaler_info(&hdmi_rx[port].timing_t);

	newbase_hdmi_fix_green_line(port);

#if HDR10_MD_INFO_CHECK
#ifdef CONFIG_FORCE_RUN_I3DDMA
	if (newbase_hdmi_is_dispsrc(SLR_MAIN_DISPLAY))
#endif
		newbase_hdmi_dv_hdr_enable(_ENABLE);//Minchay@20160607-a add dolby version hdr
#endif

	if (GET_H_MODE(port)) {
		lib_hdmi_audio_set_thread_run(port, _TRUE);

		SET_H_VIDEO_FORMAT(port, (HDMI_HVF_E)newbase_hdmi_get_video_format_reg(port));
		SET_H_3DFORMAT(port, (HDMI_3D_T)newbase_hdmi_get_3d_structure_reg(port));
	}

	HDMI_PRINTF("bHDMIColorSpace = %s\n", GET_H_COLOR_SPACE(port) < (sizeof(colorspace_name)/4)  ? colorspace_name[GET_H_COLOR_SPACE(port)] : "UNDEFINED");
	HDMI_PRINTF("IsInterlaced = %d\n", GET_H_INTERLACE(port));
	HDMI_PRINTF("bIsHDMIDVI = %d\n", GET_H_MODE(port));
	HDMI_PRINTF("PixelRepeat = %d\n", GET_H_PIXEL_REPEAT(port));
	HDMI_PRINTF("ColorDepth = %s\n", GET_H_COLOR_DEPTH(port) < (sizeof(depth_name)/4)  ? depth_name[GET_H_COLOR_DEPTH(port)] : "UNDEFINED");
	HDMI_PRINTF("ColorMetry = %s\n", newbase_hdmi_get_colorimetry(port) < (sizeof(colorimetry_name)/4)  ? colorimetry_name[newbase_hdmi_get_colorimetry(port)]: "UNDEFINED");
	HDMI_PRINTF("3D Format  = %s\n", GET_H_3DFORMAT(port) < (sizeof(hdmi_3d_name)/4) ? hdmi_3d_name[GET_H_3DFORMAT(port)] : "UNDEFINED");

	return TRUE;
}

unsigned char newbase_hdmi_video_ready(unsigned char port, unsigned char frl_mode)
{
	if (!newbase_hdmi_is_output_disable() && !lib_hdmi_is_video_output(port)) {
		HDMI_INFO("HDMI[%d] Video output disabled...\n", port);
		return FALSE;
	}

	return TRUE;
}

unsigned char newbase_hdmi_check_data_link_status(unsigned char port)
{
    HDMIRX_PHY_STRUCT_T* p_phy_st = newbase_rxphy_get_status(port);
    unsigned char i, err_det_cnt = 0;
    unsigned char is_allm = FALSE;
    unsigned char is_vrr = FALSE;

     // check HPD/5V/PS Enable
    if (hdmi_rx[port].cable_conn==0 || newbase_hdmi_get_hpd(port)==0)
    {
        HDMI_WARN("check_data_link_status failed, HDMI[p%d] connect status changed\n", port);
        return FALSE;
    }

    // check clock stable
    if (p_phy_st->frl_mode == MODE_TMDS)
    {
        if (!newbase_rxphy_is_clk_stable(port) || newbase_rxphy_get_clk(port) < VALID_MIN_CLOCK)
        {
            hdmi_rx[port].signal_stable_cnt = 0;
            HDMI_WARN("check_data_link_status failed, HDMI[p%d] clock un stable \n", port);
            return FALSE;
        }
    }

    //HDMI check timing realtime
    newbase_hdmi_get_fvs_allm(port, &is_allm);
    is_vrr = (newbase_hdmi_get_vrr_enable(port) |newbase_hdmi_get_freesync_enable(port));

    if(GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_LINK_STATUS_MONITOR_ENABLE) == FALSE)
    {
        HDMI_INFO("check_data_link_status failed, HDMI[p%d], HDMI_FLOW_CFG4_LINK_STATUS_MONITOR_ENABLE=%d\n", port, GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_LINK_STATUS_MONITOR_ENABLE) );
        return FALSE;;
    }
    else if((is_allm == TRUE) || (is_vrr == TRUE) || (hdmi_rx[port].run_dsc ==TRUE))
    {//do nothing when running VRR/ALLM/DSC/ Enter Power saving 
        HDMI_INFO("check_data_link_status failed, HDMI[p%d], VRR_EN=%d, AMD_FREESYNC en =%d, ALLM=%d, Dolby mode=%d\n",
                port, newbase_hdmi_get_vrr_enable(port), newbase_hdmi_get_freesync_enable(port), is_allm, GET_MODE_HDMI_DOLBY_VSIF());
        return FALSE;
    }

    // check BCH Error and VSync stable
    for (i=0; i<5; i++)
    {
        if (hdmi_rx[port].video_t.vs_valid < 5)
        {
            HDMI_WARN("check_data_link_status failed, HDMI[p%d] VSync invalid detected (%d)\n", port, err_det_cnt);
            return FALSE;
        }

        if (hdmi_rx[port].bch_err_detect)
        {
            if (err_det_cnt++ >= 3)
            {
                HDMI_WARN("check_data_link_status failed, HDMI[p%d] BCH error detected (%d)\n", port, err_det_cnt);
                return FALSE;

            }
        }
        else
        {
            err_det_cnt = 0;
        }
        msleep(10);
    }

    HDMI_WARN("check_data_link_status passed, HDMI[p%d] link is stable, vs_valid=%d, err_det_cnt=%d\n", port, hdmi_rx[port].video_t.vs_valid, err_det_cnt);
    return TRUE;
}

unsigned char newbase_hdmi_check_mode(void)
{
	unsigned char port = current_port;
	unsigned int r_err = 0, g_err = 0, b_err = 0;
	unsigned char is_get_avi = 0;
	HDMI_AVI_T avi_info;

	newbase_hdmi_reset_meas_counter(port);

	if (lib_hdmi_get_fw_debug_bit(DEBUG_25_BYPASS_CHECK)) {
		return TRUE;
	}

	if (lib_hdmi_get_fw_debug_bit(DEBUG_17_DUMP_REG)) {
		lib_hdmi_dbg_reg_dump(port);
	}

	if (GET_H_VIDEO_FSM(port) != MAIN_FSM_HDMI_VIDEO_READY) {
		HDMI_EMG("check_mode: changed_1(p=%d)\n", port);
		return FALSE;
	}

	switch(newbase_hdmi_check_condition_change(port))
	{
	case HDMI_CONDITION_CHG_RESET_PHY:
		lib_hdmi_video_output(port, 0);
		lib_hdmi_audio_output(port, 0);
		HDMI_EMG("[newbase_hdmi_check_mode port:%d] condition_change, video/audio output disable\n", port);
		return FALSE;
	case HDMI_CONDITION_CHG_RESET_VIDEO_PLL:
		HDMI_EMG("[newbase_hdmi_check_mode port:%d] condition_change, reset PLL only\n", port);
		return FALSE;
	case HDMI_CONDITION_CHG_NONE:
	default:
		break;
	}

	if (TRUE == newbase_hdmi_get_is_interlace_change(port, newbase_rxphy_get_frl_mode(port))) {
		HDMI_EMG("[newbase_hdmi_check_mode port:%d] frl_mode=%d, interlace chg\n", port, newbase_rxphy_get_frl_mode(port));
		return FALSE;
	}

	if (hdmi_rx[port].hdmi_2p1_en==FALSE && !(lib_hdmi_get_fw_debug_bit(DEBUG_23_BITERR_DET)) && newbase_rxphy_get_setphy_done(port))
	{
		r_err = g_err = b_err = 0;

		if ((hdmi_rx[port].fw_bit_disp_error_detected == TRUE) && (!newbase_hdmi_err_detect_stop(port)))
		{
			hdmi_rx[port].fw_bit_disp_error_detected = FALSE;
			if (hdmi_rx[port].timing_t.tmds_clk_b > 2900) {  // >3G donothing (already do CED detect)			
					//do nothing
				if (!newbase_hdmi_get_longcable_flag(port)) {  //do adaptive without long cable 
				     if (!newbase_hdmi_get_err_recovery(port)) {
				     	  HDMI_EMG("> 3G re-adaptive\n");
				     	  newbase_hdmi_dfe_recovery_hi_speed(port);
				     }
				}
			
			}
			else if (hdmi_rx[port].timing_t.tmds_clk_b > 1042) {	// > 1.1G
			       if (newbase_hdmi_is_bit_error_occured(port)) {  //for no shield ground indian cable patch
			            if (!newbase_hdmi_get_err_recovery(port)) {
			            	    HDMI_EMG("1.1 ~ 3G re-adaptive\n");
                                       newbase_hdmi_dfe_recovery_mi_speed(port);				   
			            }
			       }	
				else if (hdmi_rx[port].timing_t.tmds_clk_b > 2700) {
				      if (!newbase_hdmi_get_err_recovery(port)) {
					  	 HDMI_EMG("3G re-adaptive\n");
				      		newbase_hdmi_dfe_recovery_mi_speed(port);
				      	}
				}
			}
			else if (hdmi_rx[port].timing_t.tmds_clk_b > 430) {  // > 450M~1.1G
				if (!newbase_hdmi_get_err_recovery(port)) {
					 HDMI_EMG("450M~1.1G re-adaptive\n");
					newbase_hdmi_dfe_recovery_midband_long_cable(port);
				}
			}
		}

	}

#if HDR10_MD_INFO_CHECK
	//Minchay@20160607-a add hdr10 md check
	if (!newbase_hdmi_hdr10_md_info_check()) {
		HDMI_PRINTF("checkmode: [HDR10] fail\n");
		return FALSE;
	}
#endif

#if HDCP_STATUS_CHECK_ENABLE
	if(_FALSE == lib_hdmi_hdcp_status_check(port, _FALSE))
		return FALSE;
#endif //#if HDCP_STATUS_CHECK_ENABLE

#if BIST_PHY_SCAN
	if ((lib_hdmi_get_fw_debug_bit(DEBUG_22_PHY_SCAN_TEST))) {
		if (!newbase_get_phy_scan_done(port)) {
			HDMI_PRINTF("########################################OK, scan contine !!!");
			return FALSE;
		}
	}
#endif

	//Check VIC change
	memset(&avi_info, 0, sizeof(HDMI_AVI_T)); //init avi_info
	is_get_avi = newbase_hdmi_get_avi_infoframe(port, &avi_info);

	if((is_get_avi != 0) && (avi_info.VIC !=0) && ( hdmi_rx[port].timing_t.avi_vic != avi_info.VIC))
	{
		HDMI_WARN("[newbase_hdmi_check_mode port: %d] VIC change!!, from %d -> %d\n", port, hdmi_rx[port].timing_t.avi_vic, avi_info.VIC);
		return FALSE;
	}

	//Check timing info change
	if(newbase_hdmi_timing_monitor(port, newbase_rxphy_get_frl_mode(port)) == FALSE)
	{
		HDMI_WARN("[newbase_hdmi_check_mode port: %d] Timing change!!, frl_mode=%d\n", port, newbase_rxphy_get_frl_mode(port));
		return FALSE;
	}

	return TRUE;
}

void newbase_hdmi_reset_video_state(unsigned char port)
{
	SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_WAIT_SYNC);

	SET_H_INTERLACE(port, 0);
	SET_H_MODE(port, MODE_HDMI);
	SET_H_COLOR_DEPTH(port, HDMI_COLOR_DEPTH_8B);
	SET_H_COLOR_SPACE(port, COLOR_RGB);

	SET_H_3DFORMAT(port, HDMI3D_2D_ONLY);

	//clear measure status
	hdmi_rx[port].meas_confirm_vic_cnt = 0;
	newbase_hdmi_reset_meas_counter(port);
}

unsigned char newbase_hdmi_get_video_state(unsigned char port)
{
	return GET_H_VIDEO_FSM(port);
}

void newbase_hdmi_reset_meas_counter(unsigned char port)
{
	hdmi_rx[port].meas_retry_cnt = 0;
}

void newbase_hdmi_check_crc_0(unsigned char port)
{
	unsigned int crc = 0;

	if ((lib_hdmi_read_video_common_crc(0, &crc)== 0) && (crc >0)) {
		return;
	}

	HDMI_EMG("[newbase_hdmi_check_crc_0] YUV420 Not ready, CRC=00000000000, Color Space=%d\n", GET_H_COLOR_SPACE(port));

	if (GET_H_COLOR_SPACE(port) == COLOR_YUV420) {
	    
//		lib_hdmi_set_fw_debug_bit(DEBUG_27_BYPASS_PHY_ISR, 1);
//		while (lib_hdmi_read_crc(port) == 0) {
//			msleep(10);
//		}
//		lib_hdmi_set_fw_debug_bit(DEBUG_27_BYPASS_PHY_ISR, 0);

		lib_hdmi_420_en(port, 0);
		msleep(20);
		lib_hdmi_420_en(port, 1);
	}
}

unsigned char newbase_hdmi_is_run_dsc(unsigned char port)
{
	return hdmi_rx[port].run_dsc;
}

unsigned char newbase_hdmi_get_online_measure_error_flag(unsigned char port)
{
	return hdmi_rx[port].onlinemeasure_error;
}

void newbase_hdmi_set_online_measure_error_flag(unsigned char port, unsigned char flag)
{
	hdmi_rx[port].onlinemeasure_error = flag;
}


void newbase_hdmi2p0_check_tmds_config(unsigned char port)
{
	unsigned char cfg, hail_hydra;
	unsigned char tmds_toggle_retry = (hdmi_rx[port].hdmi2p0_tmds_scdc_config_update_count) ? 5 : 2;

	cfg = lib_hdmi_scdc_get_tmds_config(port);

	hail_hydra = (hdmi_rx[port].scramble_flag|hdmi_rx[port].clock40x_flag);

	if (lib_hdmi_get_fw_debug_bit(DEBUG_24_FORCE_6G))
	{
		hdmi_rx[port].scramble_flag = 1;
		hdmi_rx[port].clock40x_flag = 1;
	}
	else
	{
		if (hdmi_rx[port].hdmi2p0_tmds_toggle_flag > 10)
		{
			// if the SCDC retry timeout, then come back to normal mode
			hdmi_rx[port].scramble_flag = ((cfg&_BIT0) != 0);
			hdmi_rx[port].clock40x_flag = ((cfg&_BIT1) != 0);
		}
		else if (hdmi_rx[port].hdmi2p0_tmds_toggle_flag > tmds_toggle_retry)
		{
			// Some non-standard 4K device (for example, Samsung GX-KD630CH) might send data 
			// without config TMDS config properly, so we tries to invert the SCDC configuration to test
			// this issue unable to be resolved by SPD info, because of we're not able to get the correct
			// SPD info if the pixel clock ratio or scramble control setting are not correct

			if ((hdmi_rx[port].scramble_flag != ((cfg&_BIT0) == 0)) ||
				(hdmi_rx[port].clock40x_flag != ((cfg&_BIT1) == 0)))
			{
				hdmi_rx[port].scramble_flag = ((cfg&_BIT0) == 0);
				hdmi_rx[port].clock40x_flag = ((cfg&_BIT1) == 0);

				HDMI_EMG("HDMI[%d] tmds_toggle_flag=%d > %d, swap TMDS config %02x, scamble=%d, 40x=%d\n",
					port, hdmi_rx[port].hdmi2p0_tmds_toggle_flag, tmds_toggle_retry, cfg,
					hdmi_rx[port].scramble_flag,
					hdmi_rx[port].clock40x_flag);
			}
		}
		else
		{
			hdmi_rx[port].scramble_flag = ((cfg&_BIT0) != 0);
			hdmi_rx[port].clock40x_flag = ((cfg&_BIT1) != 0);
		}
	}

	if (!hail_hydra && (hdmi_rx[port].scramble_flag||hdmi_rx[port].clock40x_flag))  // TMDS config changed
	{
		HDMI_INFO("HDMI[p%d] SCDC: got it, scamble=%d, 40x=%d\n",
			port, hdmi_rx[port].scramble_flag, hdmi_rx[port].clock40x_flag);
	}

}

unsigned char newbase_hdmi2p0_get_scramble_flag(unsigned char port)
{
	return hdmi_rx[port].scramble_flag;
}

unsigned char newbase_hdmi2p0_get_clock40x_flag(unsigned char port)
{
	return hdmi_rx[port].clock40x_flag;
}

unsigned char newbase_hdmi2p0_get_tmds_toggle_flag(unsigned char port)
{
	return hdmi_rx[port].hdmi2p0_tmds_toggle_flag;
}

unsigned int newbase_hdmi2p0_get_tmds_update_cnt(unsigned char port)
{
	return hdmi_rx[port].hdmi2p0_tmds_scdc_config_update_count;
}

void newbase_hdmi2p0_detect_config(unsigned char port)
{
	lib_hdmi2p0_scramble_enable(port, hdmi_rx[port].scramble_flag);
}

void newbase_hdmi2p0_reset_scdc_toggle(unsigned char port)
{
	if (hdmi_rx[port].hdmi2p0_tmds_toggle_flag)
	{
		HDMI_INFO("HDMI[%d] reset tmds toggle %d -> 0\n", port, hdmi_rx[port].hdmi2p0_tmds_toggle_flag);
	}
	hdmi_rx[port].hdmi2p0_tmds_toggle_flag = 0;
}

void newbase_hdmi2p0_inc_scdc_toggle(unsigned char port)
{
	if(newbase_hdmi_is_support_edid_capability(port, HDMI_EDID_CAPABILITY_2_0_HF_VSIF))
	{
		if(hdmi_rx[port].hdmi2p0_tmds_toggle_flag >= 0xfe)
			hdmi_rx[port].hdmi2p0_tmds_toggle_flag = 0;
		else
			hdmi_rx[port].hdmi2p0_tmds_toggle_flag++;
		HDMI_INFO("HDMI[%d] inc tmds toggle=%d\n", port, hdmi_rx[port].hdmi2p0_tmds_toggle_flag);
	}
	else
	{
		newbase_hdmi2p0_reset_scdc_toggle(port);
	}
}

void newbase_hdmi_set_current_display_port(unsigned char port)
{
	current_port = port;
}

unsigned char newbase_hdmi_get_current_display_port(void)
{
	return current_port;
}

unsigned char newbase_hdmi_get_timing(unsigned char port, HDMI_TIMING_T *ptiming)
{
	_lock_timing_detect_sem();

	if (GET_H_VIDEO_FSM(port) == MAIN_FSM_HDMI_VIDEO_READY) {
		memcpy(ptiming, &hdmi_rx[port].timing_t, sizeof(HDMI_TIMING_T));
		_unlock_timing_detect_sem();
		return TRUE;
	} else {
		memset(ptiming, 0, sizeof(HDMI_TIMING_T));
		_unlock_timing_detect_sem();
		return FALSE;
	}

	return FALSE;
}

unsigned char newbase_hdmi_get_hvstart(unsigned char port, HDMI_TIMING_T *ptiming, unsigned char vsc_ch)
{
	if (GET_H_VIDEO_FSM(port) == MAIN_FSM_HDMI_VIDEO_READY)
	{
		if(HDMI_PCB_FORCE_DISABLE== GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_SMART_FIT_ENABLE ))
		{
			ptiming->h_act_sta = hdmi_rx[port].timing_t.h_act_sta;
			ptiming->v_act_sta = hdmi_rx[port].timing_t.v_act_sta;
			HDMI_WARN("[newbase_hdmi_get_hvstart] OFMS HStr: %d, VStr: %d\n", ptiming->h_act_sta, ptiming->v_act_sta);
			HDMI_WARN("[newbase_hdmi_get_hvstart] H_Polarity: %d, V_Polarity: %d\n", (ptiming->polarity & _BIT0)?1:0 , (ptiming->polarity & _BIT1)?1:0);
		}
		else
		{
			HDMI_WARN("[newbase_hdmi_get_hvstart] Smart Fit Start!! port = %d, \n", port);
			lib_hdmims_get_hvstart(ptiming, vsc_ch);
		}

		return TRUE;
	} else {
		ptiming->h_act_sta = 0;
		ptiming->v_act_sta = 0;
		return FALSE;
	}

}

unsigned char newbase_hdmi_get_is_interlace(unsigned char port)
{
	return GET_H_INTERLACE(port);
}

HDMI_INT_PRO_CHECK_RESULT newbase_hdmi_get_is_interlace_reg(unsigned char port, unsigned char frl_mode, HDMI_MS_T ms_mode)
{
	HDMI_INT_PRO_CHECK_RESULT result = HDMI_IPCHECK_VSYNC_NO_CHANGED;
	if(frl_mode == MODE_TMDS)
	{
		switch(ms_mode)
		{
		case HDMI_MS_DIRECT:
			result = lib_hdmi_get_is_interlace_reg(port);
			if(result == HDMI_IPCHECK_INTERLACE)
				lib_hdmi_clear_interlace_reg(port);     // clear interlace status
			break;
		case HDMI_MS_ONESHOT:
			lib_hdmi_clear_interlace_reg(port);     // clear interlace status
			if(lib_hdmi_vsync_checked(port)) // YO work not normal. H5X can not support PS measure. if supoort PS measure, please do not use YO and ONESHOT mode
			{
				result = lib_hdmi_get_is_interlace_reg(port);
				lib_hdmi_clear_interlace_reg(port);     // clear interlace status
			}
			else
			{
				result = lib_hdmi_get_is_interlace_reg(port);
				if(result == HDMI_IPCHECK_INTERLACE)
					lib_hdmi_clear_interlace_reg(port);     // clear interlace status
			}
			break;
		case HDMI_MS_CONTINUOUS:
		default:
			result = HDMI_IPCHECK_VSYNC_NO_CHANGED;
			break;
		}

	}
	else
	{

		switch(ms_mode)
		{
		case HDMI_MS_DIRECT:
			result =  lib_hdmi_hd21_meas_get_interlace(port);
			if(result == HDMI_IPCHECK_INTERLACE)
				lib_hdmi_hd21_meas_clear_interlace_reg(port);     // clear interlace status
			break;
		case HDMI_MS_ONESHOT:
			result = lib_hdmi_hd21_meas_get_interlace(port);
			if (result!= HDMI_IPCHECK_INTERLACE)
			{
				if(lib_hdmi_hd21_vsync_checked(port)) // wait one more frame if no even odd detected
				{
					result = lib_hdmi_hd21_meas_get_interlace(port);
					lib_hdmi_hd21_meas_clear_interlace_reg(port);     // clear interlace status
				}
				else
					result = HDMI_IPCHECK_VSYNC_NO_CHANGED;
			}
			break;
		case HDMI_MS_CONTINUOUS:
		default:
			result = HDMI_IPCHECK_VSYNC_NO_CHANGED;
			break;
		}
	}

	return result;
}

unsigned char newbase_hdmi_get_is_interlace_change(unsigned char port, unsigned char frl_mode)
{
	unsigned char result = FALSE;
	if((GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_LINK_STATUS_MONITOR_ENABLE) == TRUE))
	{//background detection
		if(hdmi_rx[port].video_t.is_interlace_chg == TRUE)
		{
			hdmi_rx[port].video_t.is_interlace_chg = FALSE;
			return TRUE;
		}
	}
	else
	{//Direct check
		if(frl_mode == MODE_TMDS)
		{
			result = lib_hdmi_get_int_pro_chg_flag(port); // use the method.H5X is the last one. If IC support PS measure, it can remove one time mode.
		}
		else
		{
			unsigned char is_interlace = newbase_hdmi_get_is_interlace_reg(port, frl_mode, HDMI_MS_ONESHOT);

			if(hdmi_rx[port].run_dsc == TRUE)
			{//Never check interlace change in DSC mode, interlace status is not stable
				result = FALSE;
			}
			else if ((is_interlace != HDMI_IPCHECK_VSYNC_NO_CHANGED) && (GET_H_INTERLACE(port) != is_interlace))
			{
				result =  TRUE;
			}
		}
	}
	return result;
}

unsigned char newbase_hdmi_get_hdmi_mode_reg(unsigned char port)
{
	if ((hdmi_rx[port].hdmi_2p1_en == FALSE) && (newbase_hdmi2p0_get_clock40x_flag(port) || newbase_hdmi2p0_get_scramble_flag(port))) {
		return TRUE;
	}

	return lib_hdmi_is_hdmi_mode(port);
}

unsigned char newbase_hdmi_get_hdmi_mode(unsigned char port)
{
	return GET_H_MODE(port);
}

unsigned char newbase_hdmi_get_colordepth(unsigned char port)
{
	return GET_H_COLOR_DEPTH(port);
}

unsigned char newbase_hdmi_get_colorspace_reg(unsigned char port)
{
	if (!newbase_hdmi_get_hdmi_mode_reg(port)) {
		return COLOR_RGB;
	}

	return lib_hdmi_get_colorspace(port);
}

unsigned char newbase_hdmi_get_colorspace(unsigned char port)
{
	if (GET_H_COLOR_SPACE(port) == COLOR_YUV420) {  //follow K2L
		return COLOR_YUV444;
	} else {
		return GET_H_COLOR_SPACE(port);
	}
}

unsigned char newbase_hdmi_get_video_format_reg(unsigned char port)
{
	if (hdmi_rx[port].vsi_t.Length == 0) {	//no vsinfo
		return HVF_NO;
	}

	return lib_hdmi_get_video_format(port);
}

unsigned char newbase_hdmi_get_video_format(unsigned char port)
{
	return GET_H_VIDEO_FORMAT(port);
}

unsigned char newbase_hdmi_get_3d_structure_reg(unsigned char port)
{
	if (hdmi_rx[port].vsi_t.Length == 0) {	//no vsinfo
		return HDMI3D_2D_ONLY;
	}

	if (lib_hdmi_get_video_format(port) != HVF_3D) {
		return HDMI3D_2D_ONLY;
	} else {
		return lib_hdmi_get_3d_structure(port);
	}
}


unsigned char newbase_hdmi_get_3d_structure(unsigned char port)
{
	if (hdmi_rx[port].vsi_t.Length == 0)	{	//no vsinfo
		return HDMI3D_2D_ONLY;
	}
	return GET_H_3DFORMAT(port);
}

unsigned char newbase_hdmi_get_colorimetry(unsigned char port)
{
	if (hdmi_rx[port].avi_t.len == 0) return 0;

	return (hdmi_rx[port].avi_t.C == 3)?
		(hdmi_rx[port].avi_t.EC+HDMI_COLORIMETRY_XYYCC601):hdmi_rx[port].avi_t.C;
}

unsigned char newbase_hdmi_get_color_range(unsigned char port)
{
	if (hdmi_rx[port].avi_t.len == 0) return 0;

	if (hdmi_rx[port].avi_t.Y == 0) {	// RGB
		return hdmi_rx[port].avi_t.Q;
	} else if (hdmi_rx[port].avi_t.Y == 1 || hdmi_rx[port].avi_t.Y == 2 || hdmi_rx[port].avi_t.Y == 3) {	// YUV
		return (hdmi_rx[port].avi_t.YQ<3)?(hdmi_rx[port].avi_t.YQ+1):MODE_RAG_DEFAULT;
	} else {
		return MODE_RAG_DEFAULT;
	}
}

unsigned int newbase_hdmi_get_tmds_clockx10(unsigned char port)
{
	if (GET_H_VIDEO_FSM(port) < MAIN_FSM_HDMI_MEASURE)
		return 0;
	// ------------------------------------------
	// Get stable and debouncing count clock
	// ------------------------------------------
	return (newbase_rxphy_get_clk_pre(port)*270)>>8;
}

unsigned int newbase_hdmi_get_pixelclock(unsigned int htotal , unsigned int vtotal , unsigned int vfreq , unsigned char cd)
{
	return htotal*vtotal*vfreq/dpll_ratio[cd].SM *dpll_ratio[cd].SN/1000 ;
}

void newbase_hdmi_fix_green_line(unsigned char nport) //k3l need to check
{
	if (GET_H_COLOR_SPACE(nport) == COLOR_RGB) {
		lib_hdmi_tmds_out_ctrl(nport, 1, 0, 0, 0);
	} else {
		lib_hdmi_tmds_out_ctrl(nport, 0, 0x8000, 0x1000, 0x8000);
	}
}


void newbase_hdmi_set_scaler_info(HDMI_TIMING_T *timing)
{
	SET_MODE_IVSTA(timing->v_act_sta);
	SET_MODE_IHSTA(timing->h_act_sta);
	SET_MODE_IVHEIGHT(timing->v_act_len);      // Get Input VSYNC Period Measurement Result ;match resolution(cause measure result will lose one line)
	SET_MODE_IHWIDTH(timing->h_act_len);  // Input HSYNC High Period Measurement Result; match resolution(cause measure result will lose one line)
	SET_MODE_IVTOTAL(timing->v_total);
	SET_MODE_IHTOTAL(timing->h_total);
	SET_MODE_IHCOUNT(timing->h_total);
	SET_MODE_IVCOUNT(timing->v_total);
	SET_MODE_IVFREQ(timing->v_freq);
	SET_MODE_IHFREQ(timing->h_freq);
	SET_SCALER_POLARITY(timing->polarity);
	SET_SCALER_IVTOTAL(timing->v_total);
	SET_SCALER_IHTOTAL(timing->h_total);
	SET_SCALER_IVHEIGHT(timing->v_act_len);
	SET_SCALER_IVHEIGHT_PRE(timing->v_act_len);
	SET_SCALER_IHWIDTH(timing->h_act_len);
	SET_SCALER_IHWIDTH_PRE(timing->h_act_len);
	SET_SCALER_IVSTA(timing->v_act_sta);
	SET_SCALER_IVSTA_PRE(timing->v_act_sta);
	SET_SCALER_IHSTA(timing->h_act_sta);
	SET_SCALER_IHSTA_PRE(timing->h_act_sta);
	SET_SCALER_IVFREQ(timing->v_freq);
	SET_SCALER_IHFREQ(timing->h_freq);
	SET_SCALER_IVCOUNT(timing->v_total);
	SET_SCALER_IHCOUNT(timing->h_total);
	SET_SCALER_ISINTERLACE((timing->is_interlace) == 1);
	SET_SCALER_IS422(timing->colorspace == COLOR_YUV422);

	SET_SCALER_COLORSPACE(timing->colorspace);
	SET_SCALER_COLORDEPTH(timing->colordepth);
	SET_SCALER_COLORIMEYRY(timing->colorimetry);
}


unsigned char newbase_hdmi_get_5v_state(unsigned char port)
{
    HDMI_CHANNEL_T* p_info = newbase_hdmi_get_pcbinfo(port);

    if (p_info==NULL || p_info->valid_port == 0)
        return 0;

    if (p_info->dedicate_hpd_det)   // usd hdmi hpd/det io pads
        return lib_hdmi_get_hdmi_5v_det(p_info->dedicate_hpd_det_sel);

    rtk_gpio_set_dir(p_info->det_5v, 0);
    return rtk_gpio_input(p_info->det_5v);

}


void newbase_hdmi_set_hpd(unsigned char nport, unsigned char high)
{
    HDMI_CHANNEL_T* p_info = newbase_hdmi_get_pcbinfo(nport);
    unsigned char ddc_ch;

    if (p_info==NULL || p_info->valid_port == 0)
        return;

    if (high)
    {
        if (newbase_hdmi_ddc_channel_status(nport , &ddc_ch)==0)
            lib_hdmiddc_enable(ddc_ch, 1);
        lib_hdmi_scdc_reset(nport, 0);
        HDMI_WARN("HOTPLUG[%d]=HIGH\n", nport);
    } 
    else 
    {
        lib_hdmi_scdc_reset(nport, 1);
        HDMI_WARN("HOTPLUG[%d]=LOW\n", nport);
#if HDMI_DISABLE_EDID_WHEN_HPD_LOW
        if (newbase_hdmi_ddc_channel_status(nport , &ddc_ch)==0)
            lib_hdmiddc_enable(ddc_ch, 0);
#endif
    }

    if (p_info->dedicate_hpd_det)   // usd hdmi hpd/det io pads
    {
        if (p_info->dedicate_hpd_invert)
            high = (high) ? 0 : 1;       // invert polarity

        lib_hdmi_set_hdmi_hpd(p_info->dedicate_hpd_det_sel, high);
        return;
    }
    rtk_gpio_output(p_info->hpd, (high) ? 0 : 1);
    rtk_gpio_set_dir(p_info->hpd, 1);
}


unsigned char newbase_hdmi_get_hpd(unsigned char nport)
{
    HDMI_CHANNEL_T* p_info = newbase_hdmi_get_pcbinfo(nport);
    int ret = 0;

    if (p_info==NULL || p_info->valid_port == 0)
        return 0;

    if (p_info->dedicate_hpd_det)
    {
        ret = lib_hdmi_get_hdmi_hpd(p_info->dedicate_hpd_det_sel);

        if (p_info->dedicate_hpd_invert)
            ret = (ret) ? 0 : 1;       // invert polarity
    }
    else
    {
        ret = rtk_gpio_output_get(p_info->hpd) ? 0 :1;
    }

    return ret;
}

void newbase_hdmi_set_hpd_low_delay(unsigned int delay_timer)
{
    hpd_low_ms = delay_timer;
    HDMI_INFO("HPD Low Delay = %d ms\n", hpd_low_ms);
}

unsigned int newbase_hdmi_get_hpd_low_delay(void)
{
    return hpd_low_ms;
}

void newbase_hdmi_set_str_hpd_low_ms(unsigned int delay_timer)
{
    str_hpd_low_ms = delay_timer;
    HDMI_INFO("str_hpd_low_ms = %d ms\n", str_hpd_low_ms);
}

unsigned int  newbase_hdmi_get_str_hpd_low_ms(void)
{
    return str_hpd_low_ms;
}

void newbase_hdmi_set_device_affinity_hpd_low_delay(unsigned int delay_timer)
{
    device_affinity_hpd_low_ms = delay_timer;
    HDMI_INFO("Device Affinity HPD Low Delay = %d ms\n", device_affinity_hpd_low_ms);
}


/*------------------------------------------------------------------
 * Func : newbase_hdmi_enable_hpd_with_delay
 *
 * Desc : enable HDP of all HDMI port with delay.
 *
 *        To make sure HDMI TX device can recognize the HPD signal, the
 *        HDMI driver add a delay when enable HPD.
 *
 * Para : customer_delay_time : HPD enable delay time (ms)
 *        0 : use default delay
 *        others : customerized delay time
 * Para : port : specify which port do the action
 *        0/1/2/3 : specify port index
 *        HDMI_PORT_TOTAL_NUM : total all HDMI port
 *
 * Retn : N/A
 *------------------------------------------------------------------*/
void newbase_hdmi_enable_hpd_with_delay(unsigned int customer_delay_time , unsigned char port)
{
    if( (port != EVERY_HDMI_PORT) && (port >= HDMI_PORT_TOTAL_NUM) ) {
        HDMI_EMG("%s port%d >= HDMI_PORT_TOTAL_NUM , cancel newbase_hdmi_enable_hpd_with_delay() \n", __func__, port);
        return;
    }

    if (port == EVERY_HDMI_PORT) {
        for (port = 0; port< HDMI_PORT_TOTAL_NUM; port++){
            _cancel_hpd_delay_work(port);
            _init_hpd_delay_work(port, &_hdmi_hpd_delay_work_func);
            _start_hpd_delay_work(port, customer_delay_time);
        }

    }
    else {
        _cancel_hpd_delay_work(port);
        _init_hpd_delay_work(port, &_hdmi_hpd_delay_work_func);
        _start_hpd_delay_work(port, customer_delay_time);

    }
}


/*------------------------------------------------------------------
 * Func : newbase_hdmi_enable_hpd
 *
 * Desc : enable HDP of all HDMI port with default HPD low delay. 
 *        The default value HPD low duration is specified by HPD_DEFAULT_LOW_MS 
 *        (normally, 700ms). but can be modified by newbase_hdmi_set_hpd_low_delay 
 *        api. Also, if the connected HDMI TX device needs longer HPD low period 
 *        than the default value, the HDMI driver will use device specified hpd
 *        low time to instead.
 *
 * Para : N/A
 *
 * Retn : N/A
 *------------------------------------------------------------------*/
void newbase_hdmi_enable_hpd(unsigned char port)
{
    unsigned int hpd_dealy = 0;

    if (device_affinity_hpd_low_ms > newbase_hdmi_get_hpd_low_delay()) {
        HDMI_INFO("newbase_hdmi_enable_hpd with device affinity delay=%d ms \n", device_affinity_hpd_low_ms);
        hpd_dealy = device_affinity_hpd_low_ms;
    }
    else
    {
        hpd_dealy = newbase_hdmi_get_hpd_low_delay();
        HDMI_INFO("newbase_hdmi_hpd_delay_work_init with default delay=%d ms \n", hpd_dealy);
    }

    newbase_hdmi_enable_hpd_with_delay(hpd_dealy, port);
}

void _hdmi_hpd_delay_work_func(struct delayed_work *delayed_work)
{
    unsigned char port = 0;

    struct hpd_work_t *mwork = container_of(delayed_work,struct hpd_work_t,hpd_delay_work);

    if (mwork== NULL) {
        HDMI_EMG("%s ,mwork== NULL, port =%d\n",__func__, port);
    }
    else {
        port = mwork->port;
        HDMI_INFO("%s set hpd high successful , port =%d\n",__func__, port);
        newbase_hdmi_set_hpd(port, 1);
        lib_hdmi_z0_set(port, LN_ALL, 1);
    }

    HDMI_PRINTF("%s is actived(p%x)\n", __func__, port);
}


void newbase_hdmi_cancel_delayed_hpd(void)
{
    int nPortCnt = 0;
    for (nPortCnt=0; nPortCnt<HDMI_PORT_TOTAL_NUM; nPortCnt++) {
        _cancel_hpd_delay_work(nPortCnt); // cancel delayed hpd
    }
}

unsigned char g_hdmi_crc_monitor_enable = 0;
unsigned int  g_hdmi_crc_monitor_interval = 500;
unsigned long g_hdmi_crc_monitor_timeout = 0;
unsigned int  g_hdmi_crc_monitor_pre_crc = 0;

void newbase_hdmi_video_monitor(unsigned char port)
{
    // Pixel Monitoring
    if (port != newbase_hdmi_get_current_display_port() ||
        GET_H_VIDEO_FSM(port) < MAIN_FSM_HDMI_VIDEO_READY)
        return;

    if (g_hdmi_pixel_monitor_en)
    {
        if (lib_hdmi_dma_vgip_is_video_capture_en()==0)
        {
            unsigned short pixel_color[3];

            lib_hdmi_dma_vgip_get_pixel_value(pixel_color);

            if (GET_H_COLOR_SPACE(port) == COLOR_RGB)
            {
                HDMI_INFO("HDMI[p%d] pixel(%d,%d), R=%x, G=%x, B=%x\n",
                    port,
                    g_hdmi_pixel_monitor_x,
                    g_hdmi_pixel_monitor_y,
                    pixel_color[0],
                    pixel_color[1],
                    pixel_color[2]);
            }
            else
            {
                HDMI_INFO("HDMI[p%d] pixel(%d,%d), Cr=%x, Y=%x, Cb=%x\n",
                    port,
                    g_hdmi_pixel_monitor_x,
                    g_hdmi_pixel_monitor_y,
                    pixel_color[0],
                    pixel_color[1],
                    pixel_color[2]);
            }

            lib_hdmi_dma_vgip_capture_pixel_enable(g_hdmi_pixel_monitor_x, g_hdmi_pixel_monitor_y);
        }
    }

    // Video CRC Value
    if (g_hdmi_crc_monitor_enable)
    {
        if (time_after(jiffies, g_hdmi_crc_monitor_timeout))
        {
            unsigned int crc = 0;
            lib_hdmi_read_video_common_crc(0, &crc);

            if (crc != g_hdmi_crc_monitor_pre_crc)
                HDMI_INFO("HDMI[p%d] VideoCRC = %08x -> %08x\n", port, g_hdmi_crc_monitor_pre_crc, crc);
            else
                HDMI_INFO("HDMI[p%d] VideoCRC = %08x\n", port, crc);

            g_hdmi_crc_monitor_timeout = jiffies + msecs_to_jiffies(g_hdmi_crc_monitor_interval);
            g_hdmi_crc_monitor_pre_crc = crc;
        }
    }
}

void newbase_hdmi_video_crc_monitor_en(unsigned char enable)
{
    g_hdmi_crc_monitor_enable = (enable) ? 1 : 0;
    g_hdmi_crc_monitor_timeout = jiffies;

    HDMI_INFO("Video CRC Monitor Enable=%d, interval=%d ms\n",
        g_hdmi_crc_monitor_enable, g_hdmi_crc_monitor_interval);
}

unsigned char newbase_hdmi_is_video_crc_monitor_enable(void)
{
    return g_hdmi_crc_monitor_enable;
}

void newbase_hdmi_video_set_crc_monitor_interval(unsigned int polling_interval)
{
    if (polling_interval < 10)
        polling_interval = 10;

    g_hdmi_crc_monitor_interval = polling_interval;

    HDMI_INFO("g_hdmi_crc_monitor_interval=%d ms\n",
        g_hdmi_crc_monitor_interval);
}

unsigned int newbase_hdmi_get_video_crc_monitor_interval(void)
{
    return g_hdmi_crc_monitor_interval;
}

#define FRAME_DEBOUNCE                      3
#define CONT_BCH_ERROR_MSG_THRESHOLD        0x1F

//scdc rst debounce handler
static unsigned int m_scdc_rst_cal_start_time = 0;
static unsigned char m_scdc_rst_handle_wait_timeout_flag = FALSE;
unsigned char m_scdc_rst_handle_once = FALSE;

//disparity rst debounce handler
static unsigned int m_disparity_rst_cal_start_time = 0;
static unsigned char m_disparity_rst_handle_wait_timeout_flag = FALSE;
unsigned char m_disparity_rst_handle_once = FALSE;


unsigned char m_scdc_ced_extend_state[4] = {0, 0, 0, 0};
static unsigned int m_last_scdc_error_cnt[4] = {0, 0, 0, 0};
static unsigned int m_scdc_extend_start_time = 0;
static unsigned char m_scdc_extend_round[4] = {0, 0, 0, 0};
#define SCDC_EXTEND_TIMEOUT_MS	5000

enum{
	SCDC_EXTEND_FSM_READY = 0,
	SCDC_EXTEND_FSM_START = 1,
	SCDC_EXTEND_FSM_FINISHED = 2
};


void newbase_hdmi_restart_scdc_extend(unsigned char port)
{
	m_scdc_ced_extend_state[port] = SCDC_EXTEND_FSM_READY;
}

void newbase_hdmi_force_stop_scdc_extend(unsigned char port)
{
 unsigned int current_time_ms = hdmi_get_system_time_ms();
 unsigned char nport = port;
 hdmi_mask(HDMI_CERCR_reg, ~(HDMI_CERCR_reset_err_det_mask), HDMI_CERCR_reset_err_det_mask); // scdc err cnt reset =1
 hdmi_mask(HDMI_CERCR_reg, ~(HDMI_CERCR_reset_err_det_mask), 0x0);    // scdc err cnt reset =0

 newbase_hdmi_scdc_hw_mask_enable(port, 0);
 m_scdc_ced_extend_state[port] = SCDC_EXTEND_FSM_FINISHED;
 HDMI_EMG("SCDC_EXTEND TIMEOUT, ROUND=%d,  m_scdc_extend_start_time = %d, current_time_ms=%d\n", m_scdc_extend_round[port], m_scdc_extend_start_time, current_time_ms);
}

void newbase_hdmi_disparity_error_handler(unsigned char port)
{
	HDMI_FRL_MODE_T frl_mode = 0;
	unsigned int current_time_ms = hdmi_get_system_time_ms();
	unsigned int scdc_extend_random = 0;
	unsigned int scdc_checksum_random = 0;
	HDMIRX_PHY_STRUCT_T* p_phy_st = newbase_rxphy_get_status(port);
	unsigned char lane_max = 0;
	unsigned char nport = port;
	unsigned char scdc_52 = 0;
	unsigned char scdc_53 = 0;
	unsigned char scdc_54 = 0;
	unsigned char scdc_55 = 0;
	unsigned char scdc_56 = 0;
	unsigned char scdc_57 = 0;
	unsigned char scdc_58 = 0;

	if(p_phy_st == NULL)
	{
		HDMI_EMG("[newbase_hdmi_disparity_error_handler]NULL pointer port=%d\n", port);
		return;
	}
	frl_mode = p_phy_st->frl_mode;
	lane_max = newbase_hdmi_hd21_get_frl_lane(frl_mode);

	if(GET_FRL_LT_FSM(port)< LT_FSM_LTSP_PASS)
	{
		m_scdc_ced_extend_state[port] = SCDC_EXTEND_FSM_READY; // extend ready
		m_scdc_extend_round[port] = 0;

		m_scdc_rst_handle_wait_timeout_flag = FALSE;
		m_scdc_rst_cal_start_time = 0;
		m_scdc_rst_handle_once = FALSE;

		m_disparity_rst_handle_wait_timeout_flag = FALSE;
		m_disparity_rst_cal_start_time = 0;
		m_disparity_rst_handle_once = FALSE;

		return;
	}

	scdc_52 = lib_hdmi_scdc_read(nport,  0x52);
	scdc_53 = lib_hdmi_scdc_read(nport,  0x53);
	scdc_54 = lib_hdmi_scdc_read(nport,  0x54);
	scdc_55 = lib_hdmi_scdc_read(nport,  0x55);
	scdc_56 = lib_hdmi_scdc_read(nport,  0x56);
	scdc_57 = lib_hdmi_scdc_read(nport,  0x57);
	scdc_58 = lib_hdmi_scdc_read(nport,  0x58);

	#if HD21_DISPARITY_ERROR_HANDLE_INFO_DEBUG
	HDMI_INFO("SCDC STS,  Extend State=%d, Port[%d]: 52_58=%x,%x,%x,%x,%x,%x,%x, m_scdc_rst_handle_once=%d, m_disparity_rst_handle_once=%d,\n",
		m_scdc_ced_extend_state[port],
		port,
		scdc_52,
		scdc_53,
		scdc_54,
		scdc_55,
		scdc_56,
		scdc_57,
		scdc_58,
		m_scdc_rst_handle_once,
		m_disparity_rst_handle_once);
	#endif

	if(frl_mode != MODE_TMDS)
	{
		if(newbase_hdmi_hd21_is_data_align_lock(port) == TRUE)
		{
			if((lt_fsm_status[port].tx_flt_no_train == TRUE)&&(GET_FLOW_CFG(HDMI_FLOW_CFG_HDMI21_LT1 , HDMI_FLOW_CFG2_CTS_EXTEND_MODE) == TRUE))
			{
				// SCDC 5 handler
				if(m_scdc_ced_extend_state[port] == SCDC_EXTEND_FSM_READY)
				{
					m_scdc_ced_extend_state[port] = SCDC_EXTEND_FSM_START; // extend start
					m_scdc_extend_round[port] ++;
					m_scdc_extend_start_time = current_time_ms;
					m_last_scdc_error_cnt[0] = 0;
					m_last_scdc_error_cnt[1] = 0;
					m_last_scdc_error_cnt[2] = 0;
					m_last_scdc_error_cnt[3] = 0;
					scdc_extend[port]=TRUE;
					scdc_extend_random = 6 + (current_time_ms%4);
					
					newbase_hdmi_scdc_hw_mask_enable(port, 1);
					lib_hdmi_scdc_char_err_rst(port, 0);
					if(lane_max==4)
					{
						scdc_checksum_random = 0x100 - scdc_extend_random;
						lib_hdmi_scdc_write(port, SCDC_LN0_CED_ERROR_L, 0x00);
						lib_hdmi_scdc_write(port, SCDC_LN0_CED_ERROR_H, 0x80);
						lib_hdmi_scdc_write(port, SCDC_LN1_CED_ERROR_L, scdc_extend_random);
						lib_hdmi_scdc_write(port, SCDC_LN1_CED_ERROR_H, 0x80);
						lib_hdmi_scdc_write(port, SCDC_LN2_CED_ERROR_L, 0x0);
						lib_hdmi_scdc_write(port, SCDC_LN2_CED_ERROR_H, 0x80);
						lib_hdmi_scdc_write(port, SCDC_CED_CHECKSUM, scdc_checksum_random);
						lib_hdmi_scdc_write(port, SCDC_LN3_CED_ERROR_L, 0x0);
						lib_hdmi_scdc_write(port, SCDC_LN3_CED_ERROR_H, 0x80);
					}
					else
					{
						scdc_checksum_random = 0x80 - scdc_extend_random;
						lib_hdmi_scdc_write(port, SCDC_LN0_CED_ERROR_L, 0x00);
						lib_hdmi_scdc_write(port, SCDC_LN0_CED_ERROR_H, 0x80);
						lib_hdmi_scdc_write(port, SCDC_LN1_CED_ERROR_L, scdc_extend_random);
						lib_hdmi_scdc_write(port, SCDC_LN1_CED_ERROR_H, 0x80);
						lib_hdmi_scdc_write(port, SCDC_LN2_CED_ERROR_L, 0x0);
						lib_hdmi_scdc_write(port, SCDC_LN2_CED_ERROR_H, 0x80);
						lib_hdmi_scdc_write(port, SCDC_CED_CHECKSUM, scdc_checksum_random);
						lib_hdmi_scdc_write(port, SCDC_LN3_CED_ERROR_L, 0x0);
						lib_hdmi_scdc_write(port, SCDC_LN3_CED_ERROR_H, 0x80);
					}
					HDMI_EMG("[EXTEND_START]#####[%s(%d)] SCDC EXTEND START TIME, ROUND=%d,  port=%d, current_time_ms=%d, scdc_extend_random = %x, scdc_checksum_random = %x\n", __FUNCTION__, __LINE__, m_scdc_extend_round[port], port, current_time_ms, scdc_extend_random, scdc_checksum_random);
				}


				if(((current_time_ms - m_scdc_extend_start_time) > SCDC_EXTEND_TIMEOUT_MS) && (m_scdc_ced_extend_state[port] == SCDC_EXTEND_FSM_START))
				{
					HDMI_EMG("[TIMEOUT_STOP]#####[%s(%d)]current_time_ms = %d, m_scdc_extend_start_time = %d\n", __FUNCTION__, __LINE__, current_time_ms, m_scdc_extend_start_time);
					newbase_hdmi_force_stop_scdc_extend(port);
				}
			}

			//------------------------
			//scdc rst debounce handler
			//------------------------
			if((m_scdc_rst_handle_wait_timeout_flag == TRUE)&&(m_scdc_rst_handle_once == FALSE))
			{
				unsigned int scdc_data_align_debounce_ms = GET_FLOW_CFG(HDMI_FLOW_CFG_HDMI21_LT2, HDMI_FLOW_CFG3_SCDC_RST_DEBOUNCE_MS);

				if(lt_fsm_status[port].tx_flt_no_train == TRUE)
					scdc_data_align_debounce_ms = 850;
				
				if((current_time_ms - m_scdc_rst_cal_start_time) > scdc_data_align_debounce_ms)
				{
					m_scdc_rst_handle_wait_timeout_flag = FALSE;  //  timeout!
					m_scdc_rst_handle_once = TRUE;    // execute once
					lib_hdmi_hd21_fec_rs_cnt_keep_enable(port, FALSE);
					lib_hdmi_scdc_char_err_rst(port, 0);

					HDMI_WARN("[FRL] SCDC CED RESET START, port=%d, (start, end) =(%d, %d), data_align_debounce_ms=%d\n", port, m_scdc_rst_cal_start_time, current_time_ms, scdc_data_align_debounce_ms);
				}
			}
			else
			{
				m_scdc_rst_cal_start_time = hdmi_get_system_time_ms();
				m_scdc_rst_handle_wait_timeout_flag= TRUE;
			}

			//--------------------------
			//disparity rst debounce handler
			//--------------------------
			if((m_disparity_rst_handle_wait_timeout_flag == TRUE)&&(m_disparity_rst_handle_once == FALSE))
			{
				unsigned int disparity_data_align_debounce_ms = GET_FLOW_CFG(HDMI_FLOW_CFG_HDMI21_LT2, HDMI_FLOW_CFG3_DISPARITY_RST_DEBOUNCE_MS);

				if(lt_fsm_status[port].tx_flt_no_train == TRUE)
					disparity_data_align_debounce_ms = 100;
				
				if((current_time_ms - m_disparity_rst_cal_start_time) > disparity_data_align_debounce_ms)
				{
					m_disparity_rst_handle_wait_timeout_flag = FALSE;  //  timeout!
					m_disparity_rst_handle_once = TRUE;    // execute once
					lib_hdmi_hd21_fw_disparity_error_reset(port);
        				lib_hdmi_hd21_fw_symbol_error_reset(port);

					HDMI_WARN("[FRL] DISPARITY RESET START, port=%d, (start, end) =(%d, %d), data_align_debounce_ms=%d\n", port, m_disparity_rst_cal_start_time, current_time_ms, disparity_data_align_debounce_ms);
				}
			}
			else
			{
				m_disparity_rst_cal_start_time = hdmi_get_system_time_ms();
				m_disparity_rst_handle_wait_timeout_flag= TRUE;
			}

		}
	}

}

#define MIN_VS_FREQ                 (20)
#define MAX_VS_FREQ                 (140)
#define MAX_VS_PERIODIC_CNT         (27000000 / MIN_VS_FREQ)
#define MIN_VS_PERIODIC_CNT         (27000000 / MAX_VS_FREQ)
#define MAX_VS_LOCK_CNT             32
#define MAX_PS_MEASURE_STABLE_CNT   32
#define LAST_PIXEL2VS_CNT_THD    10
#define MAX_CHECK_V_SYNC_CNT	5

int newbase_hdmi_get_ps_measure_status(unsigned char port, unsigned int* p_vs2vs_cycle, unsigned int* p_last_pixel2vs, unsigned int* p_stable_cnt)
{
    *p_stable_cnt    = hdmi_rx[port].video_t.ps_measure_stable_cnt;
    *p_vs2vs_cycle   = hdmi_rx[port].video_t.vs2vs_cnt;
    *p_last_pixel2vs = hdmi_rx[port].video_t.last_pixel2vs_cnt;
    return 0;
}

void newbase_hdmi_error_handler(unsigned char port)
{
    unsigned int hpd_toggle = 0;
    HDMIRX_PHY_STRUCT_T* p_phy_st = newbase_rxphy_get_status(port);
    unsigned char is_allm = FALSE;
    unsigned char is_vrr = FALSE;
    unsigned char rest_phy = 0;

    if (newbase_hdmi_get_hpd(port)==0 || newbase_hdmi_get_5v_state(port)==0)
    {
        hdmi_rx[port].bch_err_detect = 0;
        hdmi_rx[port].bch_err_cnt_continue = 0;
        hdmi_rx[port].bch_err_cnt = 0;
        hdmi_rx[port].bch_1bit_err_cnt = 0;

        hdmi_rx[port].pkt_cnt_prev = 0;
        hdmi_rx[port].no_pkt_continue = 0;
        hdmi_rx[port].no_pkt_and_vsync_unstable_continue = 0;

        hdmi_rx[port].rgb_de_align = 0;
        hdmi_rx[port].rgb_de_align_cnt = 0;
        hdmi_rx[port].rgb_detect = 0;
        hdmi_rx[port].rgb_async_fifo_error = 0;
        hdmi_rx[port].ch_fifo_error = 0;
        hdmi_rx[port].ch_fifo_error_tomeout = 0;
        hdmi_rx[port].rgb_async_fifo_error_timeout = 0;
        return;
    }

    if (!newbase_rxphy_is_clk_stable(port) || !newbase_rxphy_get_setphy_done(port)|| (newbase_hdmi_get_power_saving_state(port)!=PS_FSM_POWER_SAVING_OFF))  // clock not stable or power saving is on ... do nothing ... 
    {
        hdmi_rx[port].bch_err_detect = 0;
        hdmi_rx[port].bch_err_cnt_continue = 0;
        hdmi_rx[port].bch_err_cnt = 0;
        hdmi_rx[port].bch_1bit_err_cnt = 0;

        hdmi_rx[port].pkt_cnt_prev = 0;
        hdmi_rx[port].no_pkt_continue = 0;
        hdmi_rx[port].no_pkt_and_vsync_unstable_continue = 0;

        hdmi_rx[port].rgb_de_align = 0;
        hdmi_rx[port].rgb_de_align_cnt = 0;
        hdmi_rx[port].rgb_detect = 0;
        hdmi_rx[port].rgb_async_fifo_error = 0;
        hdmi_rx[port].ch_fifo_error = 0;
        hdmi_rx[port].ch_fifo_error_tomeout = 0;
        hdmi_rx[port].rgb_async_fifo_error_timeout = 0;
        return ;
    }

    newbase_hdmi_disparity_error_handler(port);
    /*--------------------------------------------------------------
     * TMDS Channel Status Check : RGB Status and CH Status
     *--------------------------------------------------------------*/
    if (p_phy_st->frl_mode == MODE_TMDS)
    {
        #define RGB_MASK        (HDMI_TMDS_CTRL_bcd_mask|HDMI_TMDS_CTRL_gcd_mask|HDMI_TMDS_CTRL_rcd_mask)
        unsigned int rgb_status = lib_hdmi_read_rgb_hv_status(port) & RGB_MASK;
        unsigned int ch_status;
        unsigned int nport = port;

        if (rgb_status)
            lib_hdmi_clear_rgb_hv_status(port);     // clear rgb status

        if (rgb_status && rgb_status == RGB_MASK)
        {
            hdmi_rx[port].rgb_detect++;

            if (hdmi_rx[port].rgb_detect==0)
            {
                ERP_INFO("HDMI[p%d] TMDS async fifo OK, RGB stable=%d (async_fifo_error=%d->0)\n",
                    port, hdmi_rx[port].rgb_detect, hdmi_rx[port].rgb_async_fifo_error);
            }

            hdmi_rx[port].rgb_async_fifo_error = 0;
        }
        else
        {
            hdmi_rx[port].rgb_async_fifo_error++;

            if ((hdmi_rx[port].rgb_async_fifo_error & 0xF)==1)
            {
                ERP_WARN("HDMI[p%d] TMDS async fifo error, RGB unstable = R=%d, G=%d, B=%d (RGB stable=%d -> 0, async_fifo_error=%d)\n",
                    port,
                    HDMI_TMDS_CTRL_get_rcd(rgb_status),
                    HDMI_TMDS_CTRL_get_gcd(rgb_status),
                    HDMI_TMDS_CTRL_get_bcd(rgb_status),
                    hdmi_rx[port].rgb_detect, hdmi_rx[port].rgb_async_fifo_error);
            }
            hdmi_rx[port].rgb_detect=0;
        }

        if (hdmi_rx[port].rgb_detect < 10)
            hdmi_rx[port].rgb_async_fifo_error_timeout++;
        else
            hdmi_rx[port].rgb_async_fifo_error_timeout=0;

        //-------------------------------------------------
        // Check Channel Status
        //-------------------------------------------------
        ch_status =  hdmi_in(HDMI_CH_SR_reg) & (HDMI_CH_SR_rgb_de_align_flag_mask |
                                                HDMI_CH_SR_r_rwclk_det_timeout_flag_mask |
                                                HDMI_CH_SR_r_wrclk_det_timeout_flag_mask |
                                                HDMI_CH_SR_g_rwclk_det_timeout_flag_mask |
                                                HDMI_CH_SR_g_wrclk_det_timeout_flag_mask |
                                                HDMI_CH_SR_b_rwclk_det_timeout_flag_mask |
                                                HDMI_CH_SR_b_wrclk_det_timeout_flag_mask |
                                                HDMI_CH_SR_r_rudflow_flag_mask |
                                                HDMI_CH_SR_r_wovflow_flag_mask |
                                                HDMI_CH_SR_r_rflush_flag_mask  |
                                                HDMI_CH_SR_g_rudflow_flag_mask |
                                                HDMI_CH_SR_g_wovflow_flag_mask |
                                                HDMI_CH_SR_g_rflush_flag_mask  |
                                                HDMI_CH_SR_b_rudflow_flag_mask |
                                                HDMI_CH_SR_b_wovflow_flag_mask |
                                                HDMI_CH_SR_b_rflush_flag_mask);

        if (ch_status)
            hdmi_out(HDMI_CH_SR_reg, ch_status);  // clear status

        if (HDMI_CH_SR_get_rgb_de_align_flag(ch_status))
        {
            if (hdmi_rx[port].rgb_de_align_cnt++==0)
            {
                ERP_INFO("HDMI[p%d] TMDS Channel Buffer aligned, rgb_de_aligned=%d (ch_fifo_error=%d->0)\n",
                port, hdmi_rx[port].rgb_de_align_cnt, hdmi_rx[port].ch_fifo_error);
            }
            hdmi_rx[port].rgb_de_align = 5;  // for debounce...
            hdmi_rx[port].ch_fifo_error = 0;
        }
        else
        {
            if (hdmi_rx[port].rgb_de_align > 0)
                hdmi_rx[port].rgb_de_align--;

            if (ch_status || hdmi_rx[port].rgb_de_align==0)
            {
                // TMDS Channel Error Occurs....
                hdmi_rx[port].ch_fifo_error++;

                if ((hdmi_rx[port].ch_fifo_error & 0xF)==1)
                {
                    ERP_WARN("HDMI[p%d] TMDS Channel Buffer Error, RGB DE dealigned (ud/ov/flush) R:%d/%d/%d, G:%d/%d/%d, B:%d/%d/%d (cnt=%d->0, error_cnt=%d)\n",
                            port,
                            HDMI_CH_SR_get_r_rudflow_flag(ch_status),
                            HDMI_CH_SR_get_r_wovflow_flag(ch_status),
                            HDMI_CH_SR_get_r_rflush_flag(ch_status),
                            HDMI_CH_SR_get_g_rudflow_flag(ch_status),
                            HDMI_CH_SR_get_g_wovflow_flag(ch_status),
                            HDMI_CH_SR_get_g_rflush_flag(ch_status),
                            HDMI_CH_SR_get_b_rudflow_flag(ch_status),
                            HDMI_CH_SR_get_b_wovflow_flag(ch_status),
                            HDMI_CH_SR_get_b_rflush_flag(ch_status),
                            hdmi_rx[port].rgb_de_align_cnt,
                            hdmi_rx[port].ch_fifo_error);
                }
            }
            else
            {
                if (hdmi_rx[port].rgb_de_align <=2)
                {
                    ERP_WARN("HDMI[p%d] TMDS Channel Buffer Error, RGB DE dealigned without error (de_align=%d, cnt=%d, error_cnt=%d )\n",
                        port, hdmi_rx[port].rgb_de_align, hdmi_rx[port].rgb_de_align_cnt, hdmi_rx[port].ch_fifo_error);
                }
            }
        }

        if (hdmi_rx[port].rgb_de_align_cnt < 10)
            hdmi_rx[port].ch_fifo_error_tomeout++;
        else
            hdmi_rx[port].ch_fifo_error_tomeout=0;

        if (hdmi_rx[port].ch_fifo_error_tomeout > 30 || hdmi_rx[port].rgb_async_fifo_error_timeout > 30)
        {
            rest_phy = 1;
            ERP_WARN("HDMI[p%d] TMDS Buffer timeout (ch_fifo_error_tomeout=%d/rgb_async_fifo_error_timeout=%d) Reset Phy\n",
                    port, hdmi_rx[port].ch_fifo_error_tomeout, hdmi_rx[port].rgb_async_fifo_error_timeout);

            hdmi_rx[port].ch_fifo_error_tomeout = 0;
            hdmi_rx[port].rgb_async_fifo_error_timeout = 0;
        }

        /*--------------------------------------------------------------
        * TMDS Config off sync Detection
        *--------------------------------------------------------------
        * some times the TMDS config become off sync at the following situation
        *
        * change EDID from 2.0 EDID (support SCDC) to 1.4 EDID (not support SCDC)
        * if device is running at HDMI 2.0 with TMDS config is set, then
        * after EDID change, many device might not to change back the TMDS config
        * because of it think the source device is not SCDC capable (like XBOX one S)
        *
        * what happen if scramble mode is not correct
        * VSync is unsatable, no any info packet received, no BCH Error
        *
        * How to Fix: reset TMDS config to 0
        *--------------------------------------------------------------*/
        if (hdmi_rx[port].video_t.vs_cnt > 10 &&
            (lib_hdmi_scdc_get_tmds_config(port) & 0x1) &&      // TMDS_scrmable_en is enabled
            lib_hdmi_scdc_get_tmds_scrambler_status(port)==0 && // can't detect scramble_ctrl signal
            newbase_hdmi_is_support_edid_capability(port, HDMI_EDID_CAPABILITY_2_0_HF_VSIF)==0)
        {
            hdmi_rx[port].hdmi2p0_tmds_scramble_off_sync++;

            ERP_WARN("HDMI[p%d] TMDS scramble off sync detected (cnt=%d, vs_cnt=%d, TMDS config=%d, scramble_status=%d) !!!!\n",
                    port,
                    hdmi_rx[port].hdmi2p0_tmds_scramble_off_sync,
                    hdmi_rx[port].video_t.vs_cnt,
                    lib_hdmi_scdc_get_tmds_config(port),
                    lib_hdmi_scdc_get_tmds_scrambler_status(port));

            if (hdmi_rx[port].hdmi2p0_tmds_scramble_off_sync > 20) // In HDMI 2.0 spec, the maximum time between devcie write TMDS config scarmble
            {                                                      // and start to send scrambled signal is 100ms, and sink should detect it within 200 ms
                ERP_WARN("HDMI[p%d] TMDS scramble off sync timeout !!!! reset TMDS config to recover\n", port);
                lib_hdmi_scdc_reset_toggle(port);
                newbase_rxphy_reset_setphy_proc(port);
            }
        }
        else
            hdmi_rx[port].hdmi2p0_tmds_scramble_off_sync = 0;
    }
    else
    {   //For FRL/ HDMI2,1 only
        hdmi_rx[port].hdmi2p0_tmds_scramble_off_sync = 0;
    }

    /*--------------------------------------------------------------
     * VSync Detection
     *--------------------------------------------------------------
     * The following was used to check VS stable
     *--------------------------------------------------------------*/

    if(GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_LINK_STATUS_MONITOR_ENABLE) == FALSE)
    {
        ;// do nothing, for debugging
    }
    else if(hdmi_rx[port].run_dsc ==TRUE)
    {//do nothing when running DSC
        hdmi_rx[port].video_t.vs_valid = 1;
        hdmi_rx[port].video_t.vs_cnt = 5;
        ;//fixed value
        //HDMI_INFO("[newbase_hdmi_error_handler port:%d] VRR_EN=%d, ALLM=%d, Dolby mode=%d\n", port, newbase_hdmi_get_vrr_enable(port), is_allm, get_HDMI_Dolby_VSIF_mode());
    }
    else if (lib_hdmi_ps_measure_complete(port))
    {
        unsigned int vs2vs;
        unsigned int last_pixel2vs;
        unsigned char vs_pol;

        hdmi_rx[port].video_t.vs_cnt++;
        lib_hdmi_ps_measure_get_value(port, &vs2vs, &last_pixel2vs);

        if (vs2vs > MAX_VS_PERIODIC_CNT || vs2vs < MIN_VS_PERIODIC_CNT)
        {
            if (hdmi_rx[port].video_t.vs_cnt)
            {
                ERP_WARN("HDMI[p%d] VSync Unlocked = %d (should within %d - %d) (rgb det=%d, de_align=%d)\n",
                    port, vs2vs, MAX_VS_PERIODIC_CNT, MIN_VS_PERIODIC_CNT, hdmi_rx[port].rgb_detect,
                    hdmi_rx[port].rgb_de_align_cnt);
            }

            hdmi_rx[port].video_t.vs_locked = 0;
            hdmi_rx[port].video_t.vs_cnt = 0;
            hdmi_rx[port].video_t.last_vs_cnt = 0;
            hdmi_rx[port].video_t.vs_valid = 0;
            hdmi_rx[port].video_t.vs_pol = 0;
            hdmi_rx[port].video_t.vs_pol_stable = 0;
            hdmi_rx[port].video_t.ps_measure_stable_cnt = 0;
        }
        else
        {
            hdmi_rx[port].video_t.vs_cnt++;

           // if (hdmi_rx[port].video_t.vs_valid < 0xFF)
            if(hdmi_rx[port].video_t.vs_cnt>1000000000U)
                hdmi_rx[port].video_t.vs_cnt = 1; // reset to 0, avoid over flow

            if (hdmi_rx[port].video_t.vs_valid < 0xFF)
                hdmi_rx[port].video_t.vs_valid++;

            //HDMI check timing realtime
            newbase_hdmi_get_fvs_allm(port, &is_allm);
            is_vrr = (newbase_hdmi_get_vrr_enable(port) |newbase_hdmi_get_freesync_enable(port));

            if (HDMI_ABS(hdmi_rx[port].video_t.vs2vs_cnt, vs2vs) > GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_LSM_V_SYNC_CHANGE_THD)) // VSync frequency changed
            {//VRR/FREESYNC
                unsigned char is_print_freq_change = FALSE;
                if(is_vrr == TRUE || is_allm == TRUE)
                {
                    if(AMDFREESYNC_FLOW_PRINT_FLAG && ( (hdmi_rx[port].video_t.vs_cnt %100) ==0))
                        is_print_freq_change = TRUE;
                    else if((hdmi_rx[port].video_t.vs_cnt %500)==0)
                        is_print_freq_change = TRUE;
                    else
                        is_print_freq_change = FALSE;
                }
                else
                {//NON VRR/FREESYNC
                    hdmi_rx[port].video_t.vs_locked = 0;
                    is_print_freq_change = TRUE;
                }

                if(is_print_freq_change)
                {
                    ERP_WARN("HDMI[p%d] VSync Freq Changed = %d -> %d (valid_cnt=%d, last_vs_locked=%d, last_stable_cnt=%d)), is_allm=%d, VRR_EN=%d, AMD_FREESYNC en =%d\n",
                        port, hdmi_rx[port].video_t.vs2vs_cnt, vs2vs, hdmi_rx[port].video_t.vs_valid, hdmi_rx[port].video_t.vs_locked, hdmi_rx[port].video_t.ps_measure_stable_cnt
                        , is_allm, newbase_hdmi_get_vrr_enable(port), newbase_hdmi_get_freesync_enable(port));
                }
                hdmi_rx[port].video_t.ps_measure_stable_cnt = 0;
            }
            else
            {
                if (hdmi_rx[port].video_t.vs_locked==0)
                    ERP_WARN("HDMI[p%d] VSync locked = %d (valid_cnt=%d, vs_locked=%d, stable_cnt=%d)\n", port, vs2vs, hdmi_rx[port].video_t.vs_valid, hdmi_rx[port].video_t.vs_locked, hdmi_rx[port].video_t.ps_measure_stable_cnt );

                if (hdmi_rx[port].video_t.vs_locked < 0x7F)
                    hdmi_rx[port].video_t.vs_locked++;

                if (HDMI_ABS(hdmi_rx[port].video_t.last_pixel2vs_cnt, last_pixel2vs) < LAST_PIXEL2VS_CNT_THD)
                {
                    if (hdmi_rx[port].video_t.ps_measure_stable_cnt < MAX_PS_MEASURE_STABLE_CNT)
                        hdmi_rx[port].video_t.ps_measure_stable_cnt++;
                }
                else
                {
                    hdmi_rx[port].video_t.ps_measure_stable_cnt = 0;
                }
            }

            vs_pol = lib_hdmi_hdcp_get_vs_polarity(port);

            if (vs_pol==hdmi_rx[port].video_t.vs_pol)
            {
                if (hdmi_rx[port].video_t.vs_pol_stable==0) {
                    ERP_INFO("HDMI[p%d] VSync Polarity = %d\n", port, hdmi_rx[port].video_t.vs_pol);
                }

                if (hdmi_rx[port].video_t.vs_pol_stable < 0x7F)
                    hdmi_rx[port].video_t.vs_pol_stable++;
            }
            else
            {
                if (hdmi_rx[port].video_t.vs_pol_stable)
                {
                    ERP_WARN("HDMI[p%d] VSync Polarity changed = %d -> %d (vs_pol_stable=%d -> 0)\n", 
                        port, hdmi_rx[port].video_t.vs_pol, vs_pol, hdmi_rx[port].video_t.vs_pol_stable);
                    hdmi_rx[port].video_t.vs_pol_stable= 0;
                    hdmi_rx[port].video_t.vs_locked = 0;
                    hdmi_rx[port].video_t.vs_cnt = 0;
                    hdmi_rx[port].video_t.last_vs_cnt = 0;
                    hdmi_rx[port].video_t.vs_valid = 0;
                    hdmi_rx[port].video_t.vs_pol = 0;
                    hdmi_rx[port].video_t.vs_pol_stable = 0;
                    hdmi_rx[port].video_t.ps_measure_stable_cnt = 0;
                }
            }
            hdmi_rx[port].video_t.vs_pol = vs_pol;
        }

        hdmi_rx[port].video_t.ps_measure_update = 1;  // update status
        hdmi_rx[port].video_t.vs2vs_cnt = vs2vs;
        hdmi_rx[port].video_t.last_pixel2vs_cnt = last_pixel2vs;

        lib_hdmi_ps_measure_enable(port, 1);
    }


    /*--------------------------------------------------------------
     * V sync update check
     *--------------------------------------------------------------*/

    if((hdmi_rx[port].video_t.vs_valid != 0) && (hdmi_rx[port].video_t.vs_cnt != hdmi_rx[port].video_t.last_vs_cnt))
    {// v sync vaild and update!!
        HDMI_INT_PRO_CHECK_RESULT get_ip_result = HDMI_IPCHECK_VSYNC_NO_CHANGED;

        /*--------------------------------------------------------------
        * Interlace detection Handler
        *--------------------------------------------------------------*/

        hdmi_rx[port].video_t.last_vs_cnt = hdmi_rx[port].video_t.vs_cnt;
        get_ip_result = newbase_hdmi_get_is_interlace_reg(port, newbase_rxphy_get_frl_mode(port), HDMI_MS_DIRECT);
        if(get_ip_result != HDMI_IPCHECK_VSYNC_NO_CHANGED)
        {
            HDMI_INT_PRO_CHECK_RESULT final_ip_result;
            hdmi_rx[port].video_t.last_interlace_status[2] = hdmi_rx[port].video_t.last_interlace_status[1];
            hdmi_rx[port].video_t.last_interlace_status[1] = hdmi_rx[port].video_t.last_interlace_status[0];
            hdmi_rx[port].video_t.last_interlace_status[0] = get_ip_result;
            final_ip_result = (hdmi_rx[port].video_t.last_interlace_status[2] | hdmi_rx[port].video_t.last_interlace_status[1]| hdmi_rx[port].video_t.last_interlace_status[0]);

            #if 0 // for debugging
            HDMI_INFO("[newbase_hdmi_error_handler port:%d]I/P History,  last[2]=%d, [1]=%d, [0]=%d \n",
                port,
                hdmi_rx[port].video_t.last_interlace_status[2],
                hdmi_rx[port].video_t.last_interlace_status[1],
                hdmi_rx[port].video_t.last_interlace_status[0]);
            #endif

            if(GET_H_INTERLACE(port) != final_ip_result)
            {
                HDMI_WARN("[newbase_hdmi_error_handler port:%d] I/P Change !! is_interlace  from %d -> %d\n", port, GET_H_INTERLACE(port), final_ip_result); 
                SET_H_INTERLACE(port, final_ip_result);
                if(GET_H_VIDEO_FSM(port) >= MAIN_FSM_HDMI_VIDEO_READY)
                {
                    hdmi_rx[port].video_t.is_interlace_chg = TRUE;
                    HDMI_WARN("[newbase_hdmi_error_handler port:%d] FSM:%s, SET I/P Change flag, Video Path will reset\n", port, _hdmi_video_fsm_str(GET_H_VIDEO_FSM(port))); 
                }
            }
        }

        /*--------------------------------------------------------------
        * HDMI2.1 Timing Gen ERR Handler
        *--------------------------------------------------------------*/
        if((newbase_rxphy_get_frl_mode(port) != MODE_TMDS) && (GET_H_VIDEO_FSM(port) >= MAIN_FSM_HDMI_DISPLAY_ON) && (hdmi_rx[port].run_dsc == FALSE))
        {
            unsigned int timing_gen_fifo_status = lib_hdmi_hd21_get_timing_gen_status(port);

            if(timing_gen_fifo_status>0)
            {
                HDMI_WARN("[newbase_hdmi_error_handler port:%d] HDMI2.1 timing gen error=0x%x, Toggle Timing Gen!! Video FSM:%s\n", port, timing_gen_fifo_status, _hdmi_video_fsm_str(GET_H_VIDEO_FSM(port)));
                lib_hdmi_hd21_timing_gen_reset_toggle(port);  // toggle HDMI 2.1 timing gen
            }
        }
    }
    else
    {
        //HDMI_WARN("[newbase_hdmi_error_handler port:%d] v_sync invalid, vs_cnt(last, current)=(%d,%d), vs_pol_stable=%d, vs_locked=%d,\n",
    		//port, hdmi_rx[port].video_t.last_vs_cnt, hdmi_rx[port].video_t.vs_cnt, hdmi_rx[port].video_t.vs_pol_stable, hdmi_rx[port].video_t.vs_locked);
    }
    /*--------------------------------------------------------------
     * Packet detection
     *--------------------------------------------------------------*/
    if (hdmi_rx[port].pkt_cnt_prev == hdmi_rx[port].pkt_cnt || hdmi_rx[port].pkt_cnt==0)
    {
        hdmi_rx[port].no_pkt_continue++;        // no packet updated
    }
    else
    {
        hdmi_rx[port].no_pkt_continue = 0;
        hdmi_rx[port].pkt_cnt_prev = hdmi_rx[port].pkt_cnt;
    }

    /*--------------------------------------------------------------
     * TMDS Config off sync Detection
     *--------------------------------------------------------------
     * some times the TMDS config become off sync at the following situation
     *
     * change EDID from 2.0 EDID (support SCDC) to 1.4 EDID (not support SCDC)
     * if device is running at HDMI 2.0 with TMDS config is set, then
     * after EDID change, many device might not to change back the TMDS config
     * because of it think the source device is not SCDC capable (like XBOX one S)
     *
     * what happen if scramble mode is not correct
     * VSync is unsatable, no any info packet received, no BCH Error
     *
     * How to Fix: reset TMDS config to 0
     *--------------------------------------------------------------*/
    if (lib_hdmi_scdc_get_tmds_config(port) && lib_hdmi_scdc_get_tmds_scrambler_status(port)==0)
        hdmi_rx[port].hdmi2p0_tmds_scramble_off_sync++;
    else
        hdmi_rx[port].hdmi2p0_tmds_scramble_off_sync = 0;

    /*--------------------------------------------------------------
     * Frame Encrytption Detection
     *--------------------------------------------------------------*/
    if (lib_hdmi_hdcp_get_enc_toggle(port))
    {
        hdmi_rx[port].hdcp_status.hdcp_enc=FRAME_DEBOUNCE;  // frame enc debounce (since the polling interval might less than frame rate)
        lib_hdmi_hdcp_clear_enc_toggle(port);
    }
    else if (hdmi_rx[port].hdcp_status.hdcp_enc)
    {
        hdmi_rx[port].hdcp_status.hdcp_enc--;
    }

    /*--------------------------------------------------------------
     * BCH Error Detection
     *--------------------------------------------------------------*/
    if (lib_hdmi_get_bch_2bit_error(port))
    {
        hdmi_rx[port].bch_err_detect=FRAME_DEBOUNCE;
        hdmi_rx[port].bch_err_cnt++;    // increate bch 2bit error
        hdmi_rx[port].bch_err_cnt_continue++;
        lib_hdmi_bch_2bit_error_clr(port);   // clear bch 2bit error

        // printk out debug message with message output limitation
        if ((hdmi_rx[port].bch_err_cnt_continue & CONT_BCH_ERROR_MSG_THRESHOLD)==1)
            hdmi_rx[port].err_msg_display_timeout = 0;         // force display message
    }
    else
    {
        if (hdmi_rx[port].bch_err_detect)
        {
            hdmi_rx[port].bch_err_detect--;

            if (hdmi_rx[port].bch_err_detect==0)
                hdmi_rx[port].err_msg_display_timeout = 0;     // force display message
        }

        if (hdmi_rx[port].bch_err_detect==0)
            hdmi_rx[port].bch_err_cnt_continue = 0; // reset continue bch counter
    }

    if(lib_hdmi_get_bch_1bit_error(port))
    {
        hdmi_rx[port].bch_1bit_err_cnt++;    // increate bch 1bit error
        lib_hdmi_bch_1bit_error_clr(port);   // clear bch 1bit error
    }

    if (port != newbase_hdmi_get_current_display_port())
        hdmi_rx[port].err_msg_display_timeout = jiffies + msecs_to_jiffies(g_hdmi_err_det_message_interval);  // force not display

    if (time_after(jiffies, hdmi_rx[port].err_msg_display_timeout))
    {
        unsigned char RxStatus[2];

        lib_hdmi_hdcp22_get_rx_status(port, RxStatus);

        ERP_INFO("HDMI[p%d][BCH] HDCP mode:%s, RxStatus(%02x, %02x), hdcp_enc=%d, bch err 1bit=%d, 2bit err (detect,duration,cnt)=(%d, %d, %d), bch_pkt_value=%d\n", 
            port, _hdmi_hdcp_mode_str(newbase_hdcp_get_auth_mode(port)), RxStatus[0], RxStatus[1],
            (hdmi_rx[port].hdcp_status.hdcp_enc) ? 1 : 0,
            hdmi_rx[port].bch_1bit_err_cnt,
            hdmi_rx[port].bch_err_detect,
            hdmi_rx[port].bch_err_cnt_continue,
            hdmi_rx[port].bch_err_cnt,
            lib_hdmi_get_debug_bch_err_pkt(port)
            );

        hdmi_rx[port].err_msg_display_timeout = jiffies + msecs_to_jiffies(g_hdmi_err_det_message_interval);
    }

    if (p_phy_st->frl_mode != MODE_TMDS)    // skip data off sync revovery when runnig on FRL mode
        return;
  
    if ((hdmi_rx[port].rgb_de_align_cnt > 10) && hdmi_rx[port].no_pkt_continue > 30 && hdmi_rx[port].video_t.vs_valid<5) // no any of info packet received and vsync not stable
    {
        unsigned int no_pkt_and_vsync_unstable_timeout = GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_NO_PKT_AND_VSYNC_UNSTABLE_TIMEOUT);

        if ((hdmi_rx[port].no_pkt_and_vsync_unstable_continue++ & 0x7)==0)  // reduce debug message output
        {
            ERP_WARN("HDMI[p%d] no any packet and vsync unstable !!! rgb_detect=%d, de_align_cnt=%d, Tmds_config=%d, scramble_status=%d, tmds_scramble_off_sync=%d, vs_locked=%d, vs_valid=%d, pkt_cnt=%d, no_pkt_cont=%d, no_pkt_and_vsync_unstable=%d/%d\n",
                port,
                hdmi_rx[port].rgb_detect,
                hdmi_rx[port].rgb_de_align_cnt,
                lib_hdmi_scdc_get_tmds_config(port),
                lib_hdmi_scdc_get_tmds_scrambler_status(port),
                hdmi_rx[port].hdmi2p0_tmds_scramble_off_sync,
                hdmi_rx[port].video_t.vs_locked,
                hdmi_rx[port].video_t.vs_valid,
                hdmi_rx[port].pkt_cnt,
                hdmi_rx[port].no_pkt_continue,
                hdmi_rx[port].no_pkt_and_vsync_unstable_continue,
                no_pkt_and_vsync_unstable_timeout);
        }

        // if the symptom keep going for a long time (around 1sec), then toggle hpd
        if (no_pkt_and_vsync_unstable_timeout)
        {
            unsigned int max_recover_round = ((port == newbase_hdmi_get_current_display_port()) && newbase_hdmi_is_dispsrc(SLR_MAIN_DISPLAY)) ? 0xFFFFFFFF : 16;
            unsigned int recover_round = hdmi_rx[port].no_pkt_and_vsync_unstable_continue / no_pkt_and_vsync_unstable_timeout;
            unsigned int error_idx = hdmi_rx[port].no_pkt_and_vsync_unstable_continue % no_pkt_and_vsync_unstable_timeout;

            if (recover_round < max_recover_round && error_idx==(no_pkt_and_vsync_unstable_timeout-1))
            {
                ERP_WARN("HDMI[p%d] no packet and vsync unstable timeout (%d) !!!! do reset phy (%d)\n",
                    port, hdmi_rx[port].no_pkt_and_vsync_unstable_continue, recover_round);
                rest_phy = 1;
            }
        }
    }
    else
    {
        hdmi_rx[port].no_pkt_and_vsync_unstable_continue = 0;
    }

    /*--------------------------------------------------------------
     * data off sync detection
     *--------------------------------------------------------------
     * bch_err_cnt_continue is a counter that accumlated every 
     * time hdmi driver detects bit error
     *
     * Normally, the data off sync will be followed with HDCP 
     * RxReauth. Most of standard HDCP22 source will restart 
     * authentication when it found the RxResuth is set. However,
     * some device such as MURIDEO Patten Generator, doesn't support 
     * HDCP RxReauth. In that case the only way to recover from error
     * condition, is to toggle HPD to restart authentication.
     *
     * Further more, not only HDCP error will make bit error,
     * some non standard HDMI 2.0 device (such as Samsung GX-KD630CH STB)
     * need to try SCDC tmds config toggle. To make sure the HDP 
     * recovery won't start before TMDS toggle completion,
     * we will make a longer timeout value to make sure the
     * SCDC tmds toggle can be execute correctly 
     * (eg. hdmi2p0_tmds_scdc_config_update_count is 0)
     *----------------------------------------------------------*/
    if ((hdmi_rx[port].bch_err_cnt_continue > 150 && hdmi_rx[port].hdmi2p0_tmds_scdc_config_update_count) ||
        ((hdmi_rx[port].bch_err_cnt_continue > 600 || hdmi_rx[port].hdmi2p0_tmds_toggle_flag > 10) && hdmi_rx[port].hdmi2p0_tmds_scdc_config_update_count==0))
    {
        ERP_WARN("HDMI[p%d] data off sync timeout detected, source may not support Reauth, do HPD toggle to recover\n", port);
        hpd_toggle = 1;
    }

    //-----------------------------------------------------
    if (rest_phy)
    {
        ERP_WARN("HDMI[p%d] un recoverable error detected, do reset phy to recover (round=%d)\n",
            port, hdmi_rx[port].reset_phy_recover_cnt);
        newbase_rxphy_reset_setphy_proc(port);
        hdmi_rx[port].reset_phy_recover_cnt++;
    }

    if (hpd_toggle)
    {
        if (newbase_hdmi_get_hpd(port))
        {
            unsigned int hpd_dealy = newbase_hdmi_get_hpd_low_delay();
            ERP_WARN("HDMI[p%d] un recoverable error detected, do HPD toggle to recover (round=%d)\n", 
                port, hdmi_rx[port].hpd_recover_cnt);
            newbase_hdmi_set_hpd(port, 0);//pull low HPD for specify ports
            newbase_hdmi_enable_hpd_with_delay(hpd_dealy, port);
            hdmi_rx[port].hpd_recover_cnt++;
        }
    }
}

void newbase_hdmi_check_connection_state(unsigned char port)
{
	unsigned char conn_st;

	conn_st = newbase_hdmi_get_5v_state(port);
	
	if (newbase_hdmi_get_hpd(port)==0)
		conn_st = 0;        // force disconnect state due to TX was reseted

	if (conn_st != hdmi_rx[port].cable_conn)
	{
		if (newbase_hdmi_get_5v_state(port) && newbase_hdmi_get_hpd(port)==0) {
			HDMI_WARN("HDMI PORT[%d] 5V Connected but force disconnect because of HPD is low\n", port);
		}

		HDMI_PRINTF("HDMI PORT[%d] 5V Connect : from %d -> %d\n",
			port, hdmi_rx[port].cable_conn, conn_st );

		if (conn_st) {
#ifdef HDMI_FIX_HDMI_POWER_SAVING
			newbase_hdmi_reset_power_saving_state(port);    // reset power saving state
#endif
			#if HDMI_WAIT_INFOFRAME_ENABLE
			hdmi_rx[port].cable_conn_is_first_measured_flag = TRUE;	//Set TRUE when Connected,then clear when first Vidoe FSM =displayok.
			#endif
			newbase_hdmi_hd21_lt_fsm_status_init(port); // reset hdmi2.1 fsm status.
			lib_hdmi_fw_char_err_rst(port, 1);  //reset fw CED until measure done
			lib_hdmi_scdc_char_err_rst(port, 1);  //reset scdc CED until measure done
			lib_hdmi_bit_err_rst(port, 1); //reset Bit err det until measure done
			newbase_hdmi_ced_error_cnt_reset(port);//reset sw ced err cnt
			#if HDMI_FRL_TRANS_DET
			lib_hdmi_lane_rate_detect_start(port);
			#endif
		}
		else
		{
			unsigned char ddc_ch;

			if(lt_fsm_status[port].tx_flt_no_train == TRUE)
			{
				HDMI_PRINTF("hysteresis off\n");
				lib_hdmi_hysteresis_en(0);
				lib_hdmi21_hysteresis_en(0);
			
			}
			//---------------------------------------------
			// reset HDMI Premac
			//---------------------------------------------
			lib_hdmi_mac_crt_perport_reset(port);      // reset hdmi_pre* when cable off/on

			//---------------------------------------------
			// reset SCDC status
			//---------------------------------------------
			hdmi_rx[port].hdmi2p0_tmds_scdc_config_update_count = 0;
			newbase_hdmi_scdc_mask_update_flags(port, SCDC_UPDATE_FLAGS_STATUS_UPDATE, FALSE);
			lib_hdmi_scdc_ced_enable(port, 0);
			lib_hdmi_scdc_reset_toggle(port);
			lib_hdmi2p0_scramble_enable(port, 0);	// First, connect MSHG-800/4K60(#474), then plug out cable to QD882, HDCP CTS will check Bstatus.
			lib_hdmi_clear_avmute(port);

			//---------------------------------------------
			// ddc sync_reset, patch for poor design
			//---------------------------------------------

			if (newbase_hdmi_ddc_channel_status(port , &ddc_ch) == 0 )
			{
				lib_hdmiddc_sync_reset(ddc_ch);
				lib_hdmiddc_set_sda_delay(ddc_ch, 0x1); //K2L, one NB no audio, due to IIC issue. Q2879/3094/3222

				if (newbase_hdmi_get_hpd(port) == 1)
					lib_hdmiddc_enable(ddc_ch, 1);  // enable DDC if HDP is set
#if HDMI_DISABLE_EDID_WHEN_HPD_LOW
				else
					lib_hdmiddc_enable(ddc_ch, 0);  // keep it disabled if HPD is unset
#endif
			}

			//---------------------------------------------
			// reset to HDMI 2.0
			//---------------------------------------------
			newbase_hdmi_hd21_mac_disable(port);
			newbase_hdmi_hd21_lt_fsm_status_init(port);

			//---------------------------------------------
			// reset hdcp
			//---------------------------------------------
			newbase_hdmi_hdcp_reset_fsm(port);

#if HDMI_TOGGLE_HPD_Z0_ENABLE
			lib_hdmi_set_toggle_hpd_z0_flag(port, _FALSE);
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE

			lib_hdmi_misc_variable_initial(port);
			newbase_hdmi_set_longcable_flag(port,0);

			//---------------------------------------------
			// reset hdmirx struct include reset all infoframe
			//---------------------------------------------
			if(newbase_hdmi_get_5v_state(port))
			{
				newbase_hdmi_port_var_init(port, 0);// backup/store variable if 5v exists
				newbase_hdmi_reset_all_infoframe(port, NO_RESET_SPD);  // don't clear SPD if 5v exists
				newbase_hdmi_set_device_phy_stable_count(port, 0);
				SET_HDMI_DETECT_EVENT(port, HDMI_DETECT_HPD_RESET);
			}
			else
			{
				newbase_hdmi_port_var_init(port, 1);// No 5v, clear all
				newbase_hdmi_reset_all_infoframe(port, 0);  //No 5v, clear all
				SET_HDMI_DETECT_EVENT(port, HDMI_DETECT_NO_5V_RESET);
			}
			//---------------------------------------------
			// reset all infoframe
			//---------------------------------------------
			lib_hdmi_set_dpc_enable(port, 0); // disable dpc

			//---------------------------------------------
			// reset phy parameter
			//---------------------------------------------
			newbase_rxphy_reset_setphy_proc(port);

#ifdef HDMI_FIX_HDMI_POWER_SAVING
			newbase_hdmi_reset_power_saving_state(port);    // reset Power Saving state
#endif
		}
	}

	hdmi_rx[port].cable_conn = conn_st;


#ifdef CONFIG_POWER_SAVING_MODE
	if (!hdmi_rx[port].cable_conn) {
		if (port < HD20_PORT) {		
			if (hdmi_rx[port].hdmi_2p1_en) {
				newbase_hdmi21_phy_pw_saving(port);
			} else {
				if (!newbase_rxphy_is_clk_stable(port))  //5v disable & clock unstable
					newbase_hdmi21_phy_pw_saving(port);
			}
		}
		else {
			if (!newbase_rxphy_is_clk_stable(port))
				newbase_hdmi_phy_pw_saving(port);
		}
	}
#endif
}


unsigned char newbase_hdmi_get_avmute(unsigned char port)
{
	//USER:willychou DATE:2017/08/22
	//sink CTS test - AVMute test need display timing info

	if (GET_H_VIDEO_FSM(port) == MAIN_FSM_HDMI_VIDEO_READY) {
		if (lib_hdmi_get_avmute(port) && !lib_hdmi_get_bch_2bit_error(port)) {
			HDMI_PRINTF("This is AVMUTE\n");
			return TRUE;
		}
	}

	return FALSE;
}

unsigned char newbase_hdmi_get_hdmi_mode_infoframe(unsigned char port)
{
       if(GET_H_VIDEO_FSM(port) < MAIN_FSM_HDMI_DISPLAY_ON)
               return 0;

       if(MODE_HDMI == GET_H_MODE(port))
               return 1;

       return 0;
}

unsigned char newbase_hdmi_compatibility_check(unsigned char port)
{
	int find_compability_table_index = 0;
	int i = 0;

#if HDMI_WAIT_INFOFRAME_ENABLE

	if ((GET_H_MODE(port) == MODE_HDMI))
	{

		if (hdmi_rx[port].cable_conn_is_first_measured_flag != TRUE)
			hdmi_rx[port].wait_spd = 0;       // no need to wait SPD, if it's not the fist connection

		HDMI_INFO("HDMI[p%d] waiting for necessary info : wait_spd_count=%d, wait_avi_count=%d, first connect=%d\n", 
			port, hdmi_rx[port].wait_spd, hdmi_rx[port].wait_avi, hdmi_rx[port].cable_conn_is_first_measured_flag);

		while(hdmi_rx[port].wait_spd || hdmi_rx[port].wait_avi)
		{
			// wait AVI info if necessary
			if ((hdmi_rx[port].avi_t.type_code != 0) || hdmi_rx[port].wait_avi==0)
				hdmi_rx[port].wait_avi = 0;   // stop wait avi
			else
				hdmi_rx[port].wait_avi--;

			// wait SPD info if necessary
			if ((hdmi_rx[port].spd_t.type_code != 0) || hdmi_rx[port].wait_spd==0)
				hdmi_rx[port].wait_spd = 0;   // stop wait spd
			else
				hdmi_rx[port].wait_spd--;

			if (hdmi_rx[port].wait_spd==0 && hdmi_rx[port].wait_avi==0)
				break;

			HDMI_WARN("HDMI[p%d] waiting 50 ms (wait_avi=%d, wait_spd=%d)\n", port, hdmi_rx[port].wait_avi, hdmi_rx[port].wait_spd);

			msleep(50);
		}
	}

	//hdmi_rx[port].cable_conn_is_first_measured_flag = FALSE;
#endif
#if HDMI_TOGGLE_HPD_Z0_ENABLE
	lib_hdmi_set_toggle_hpd_z0_flag(port, _FALSE);
#endif

#if HDMI_STR_TOGGLE_HPD_ENABLE
	lib_hdmi_set_str_toggle_hpd_state(port, HDMI_STR_HPD_TOGGLE_NONE);
#endif
	newbase_hdmi_set_device_affinity_hpd_low_delay(0);	// use default hpd low

	//Check condition
	for(i = 0; i< g_device_compatibility_config_table_size; i ++)
	{
		unsigned char check_point = 0;
		HDMI_SPECIFIC_DEVICE_E current_check_device_id = g_device_compatibility_config[i].device_id;

		if(CHECK_FLAG_SPD == ( CHECK_FLAG_SPD &g_device_compatibility_config[i].check_characteristic_flag))
		{//With SPD
			int j = 0;
			for(j = 0; j < g_device_check_spd_table_size; j++)
			{
				if(g_device_check_spd[j].device_id == current_check_device_id)
				{
					if(newbase_hdmi_check_spd_name(port, (unsigned char *)g_device_check_spd[j].check_vn_name))
					{
						check_point ++;
						HDMI_PRINTF("[COMP] SPD Ponit: Device id [%d], Vender Name match\n", current_check_device_id);
					}

					if(newbase_hdmi_check_spd_prod(port,  (unsigned char *)g_device_check_spd[j].check_pd_desc))
					{
						check_point ++;
						HDMI_PRINTF("[COMP] SPD Ponit: Device id [%d], Product Desc match\n", current_check_device_id);
					}

					if(hdmi_rx[port].spd_t.SourceInfo == g_device_check_spd[j].check_src_dev_info)
					{
						check_point ++;
						HDMI_PRINTF("[COMP] SPD Ponit: Device id [%d], Source Info match\n", current_check_device_id);
					}
					break;
				}
			}
		}

		if(CHECK_FLAG_TIMINGINFO == ( CHECK_FLAG_TIMINGINFO &g_device_compatibility_config[i].check_characteristic_flag))
		{
			int j = 0;
			for(j = 0; j < g_device_check_timing_table_size; j++)
			{
				if(g_device_check_timing[j].device_id == current_check_device_id)
				{
					if(newbase_hdmi_no_SPD_packetInfo(port) == g_device_check_timing[j].check_no_spd)
					{
						check_point ++;
						HDMI_PRINTF("[COMP] Timing Ponit 1: Device id [%d], No SPD Info match\n", current_check_device_id);
					}

					if((hdmi_rx[port].timing_t.h_act_len == g_device_check_timing[j].check_hv_active.check_h_act)
					&& (hdmi_rx[port].timing_t.v_act_len == g_device_check_timing[j].check_hv_active.check_v_act ))
					{
						check_point ++;
						HDMI_PRINTF("[COMP] Timing Ponit 2: Device id [%d], HV Active match\n", current_check_device_id);
					}

					if( hdmi_rx[port].avi_t.VIC == g_device_check_timing[j].check_avi_vic)
					{
						check_point ++;
						HDMI_PRINTF("[COMP] Timing Ponit 3: Device id [%d], AVI VIC match\n", current_check_device_id);
					}

					if( GET_H_COLOR_SPACE(port) == g_device_check_timing[j].check_color_space)
					{
						check_point ++;
						HDMI_PRINTF("[COMP] Timing Ponit 4: Device id [%d], Color Space match\n", current_check_device_id);
					}

					if( GET_H_COLOR_DEPTH(port) == g_device_check_timing[j].check_color_depth)
					{
						check_point ++;
						HDMI_PRINTF("[COMP] Timing Ponit 5: Device id [%d], Color Depth match\n", current_check_device_id);
					}
					break;
				}
			}
		}

		if(CHECK_FLAG_HDCP == ( CHECK_FLAG_HDCP &g_device_compatibility_config[i].check_characteristic_flag))
		{
			int j = 0;
			for(j = 0; j < g_device_check_hdcp_table_size; j++)
			{
				if(g_device_check_hdcp[j].device_id == current_check_device_id)
				{
					if(newbase_hdcp_get_auth_mode(port)== g_device_check_hdcp[j].check_current_hdcp_mode)
					{
						check_point ++;
						HDMI_PRINTF("[COMP] HDCP Ponit 1: Device id [%d], HDCP mode match\n", current_check_device_id);
					}
					break;
				}
			}
		}
		if(check_point >= g_device_compatibility_config[i].check_condition_min_num)
		{
			lib_hdmi_set_specific_device(port, current_check_device_id);
			find_compability_table_index = i;
			HDMI_WARN("[COMP] Find compability device!!table_order  [%d], find_device_id = %d \n", i, current_check_device_id);
			HDMI_WARN("[COMP] check_condition_min_num = %d, action check_point= %d \n", g_device_compatibility_config[i].check_condition_min_num, check_point);
			break;
		}
	}

	//Execute action process
	if(lib_hdmi_get_specific_device(port) != HDMI_SPECIFIC_DEVICE_NONE)
	{
		if(ACTION_FLAG_DELAY == (ACTION_FLAG_DELAY & g_device_compatibility_config[find_compability_table_index].action_process_flag))
		{//additional delay time 
			lib_hdmi_set_delay_display_enable(port, _ENABLE);

			if(HDMI_DISPLAY_DELAY_NONE == lib_hdmi_get_delay_display_state(port))
			{
				lib_hdmi_set_delay_display_state(port, HDMI_DISPLAY_DELAY_INIT);
				lib_hdmi_delay_check_before_display(port, _TRUE);
				HDMI_WARN("[COMP] Action: Pipeline Delay during MeasureFinished and Before Display \n");
			}
		}

		if(ACTION_FLAG_DELAY_ACDC_ONCE == (ACTION_FLAG_DELAY_ACDC_ONCE & g_device_compatibility_config[find_compability_table_index].action_process_flag))
		{//Delay when AC/DC on.
			hdmi_delay_only_at_once_check = TRUE;
			HDMI_WARN("[COMP] Action: Delay only when AC/DC on \n");
		}

		if(ACTION_FLAG_HPD == (ACTION_FLAG_HPD & g_device_compatibility_config[find_compability_table_index].action_process_flag))
		{//STR HPD toggle
			lib_hdmi_set_str_toggle_hpd_state(port, HDMI_STR_HPD_TOGGLE_ENTER);
			HDMI_WARN("[COMP] Action: Will toggle STR HPD \n");
		}

		if(ACTION_FLAG_Z0_HPD == (ACTION_FLAG_Z0_HPD & g_device_compatibility_config[find_compability_table_index].action_process_flag))
		{//Z0 HPD toggle
			lib_hdmi_set_toggle_hpd_z0_flag(port, _TRUE);
			lib_hdmi_dc_on_delay_check(port, _TRUE);
			HDMI_WARN("[COMP] Action: Will toggle Z0 HPD \n");
		}

		if(ACTION_FLAG_HDCP_ENC_DIS == (ACTION_FLAG_HDCP_ENC_DIS & g_device_compatibility_config[find_compability_table_index].action_process_flag))
		{//HDCP_ENC_DIS
			lib_hdmi_hdcp_port_write(port, 0xC4, 0x8);
			HDMI_WARN("[COMP] Action: Write HDCP ENS DIS \n");
		}

		if(ACTION_FLAG_WAIT_HDCP14 == (ACTION_FLAG_WAIT_HDCP14 & g_device_compatibility_config[find_compability_table_index].action_process_flag))
		{//HDCP_ENC_DIS
			if (hdmi_rx[port].cable_conn_is_first_measured_flag != TRUE)
				hdmi_rx[port].wait_hdcp14 = 0;       // no need to wait SPD, if it's not the fist connection

			HDMI_INFO("[COMP] Action: Waiting for HDCP14 auth : port=%d, wait_hdcp14_count=%d, first connect=%d\n", 
				port, hdmi_rx[port].wait_hdcp14, hdmi_rx[port].cable_conn_is_first_measured_flag);

			if(hdmi_rx[port].wait_hdcp14)
			{
				// wait AVI info if necessary
				if (newbase_hdcp_get_auth_mode(port)== HDCP14)
				{
					HDMI_INFO("[COMP] HDMI[p%d] Got hdcp14!m_wait_hdcp14_count =%d\n",  port, hdmi_rx[port].wait_hdcp14);
					hdmi_rx[port].wait_hdcp14 = 0;   // stop wait hdcp
				}
				else
				{
					hdmi_rx[port].wait_hdcp14--;
					msleep(50);
					SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_SETUP_VEDIO_PLL);
					return FALSE;
				}
			}
		}

		if(ACTION_FLAG_PHY_STABLE_CNT == (ACTION_FLAG_PHY_STABLE_CNT & g_device_compatibility_config[find_compability_table_index].action_process_flag))
		{//Use non-default phy stable count
			HDMI_INFO("[COMP] Action: Use non-default  phy stable count, port=%d, Default:%d, Special:%d\n", 
				port, GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_PHY_STABLE_CNT_THD), g_device_compatibility_config[find_compability_table_index].action_phy_stable_cnt);
			newbase_hdmi_set_device_phy_stable_count(port, g_device_compatibility_config[find_compability_table_index].action_phy_stable_cnt);
		}
		else
		{
			newbase_hdmi_set_device_phy_stable_count(port, 0);
		}

		if(ACTION_FLAG_OTHER == (ACTION_FLAG_OTHER & g_device_compatibility_config[find_compability_table_index].action_process_flag))
		{//Other action
			HDMI_WARN("[COMP] Action: Other action for specific conditiion!!\n");
			switch(lib_hdmi_get_specific_device(port) )
			{
			case HDMI_SPECIFIC_DEVICE_ROKU_ULTRA_4640R:
				#if HDCP_STATUS_CHECK_ENABLE
				lib_hdmi_hdcp_status_check(port, _TRUE);
				#else// #if HDCP_STATUS_CHECK_ENABLE
				HDMI_EMG("skip lib_hdmi_hdcp_status_check\n");
				#endif //#if HDCP_STATUS_CHECK_ENABLE
				newbase_hdmi_set_device_affinity_hpd_low_delay(HPD_ROKU_ULTRA_4640R_LOW_MS);    //hpd_low_ms = HPD_ROKU_ULTRA_4640R_LOW_MS;
				break;
			default:
				break;
			}
		}
	}

	if(GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_BEFORE_DISPLAY_BASE_DELAY_MS) > 0)
	{// Base delay time
		HDMI_EMG("[COMP] Action: Force delay when BEFORE_DISPLAY_BASE_DELAY_MS != 0, val = %d\n", GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_BEFORE_DISPLAY_BASE_DELAY_MS) );
		lib_hdmi_set_delay_display_enable(port, _ENABLE);

		if(HDMI_DISPLAY_DELAY_NONE == lib_hdmi_get_delay_display_state(port))
		{
			lib_hdmi_set_delay_display_state(port, HDMI_DISPLAY_DELAY_INIT);
			lib_hdmi_delay_check_before_display(port, _TRUE);
		}
	}


#ifdef HDMI_AVI_INFO_COLORIMETRY_ENABLE
	if(_FALSE == newbase_hdmi_check_avi_colorimetry_info(port, _FALSE)) {
//					SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_MEASURE);
		SET_H_VIDEO_FSM(port, MAIN_FSM_HDMI_SETUP_VEDIO_PLL);
		return FALSE;
	}
#endif //#ifdef HDMI_AVI_INFO_COLORIMETRY_ENABLE

	if(GET_FLOW_CFG(HDMI_FLOW_CFG_ERR_DET, HDMI_FLOW_CFG4_BCH_ERR_IRQ_ENABLE))
	{
		lib_hdmi_bch_error_irq_en(port, 1); // enable bch error irq
	}

	hdmi_rx[port].wait_hdcp14 = HDMI_WAIT_HDCP14_COUNT_THD;
	hdmi_rx[port].wait_avi = HDMI_WAIT_AVI_INFO_COUNT_THD;
	hdmi_rx[port].wait_spd = HDMI_WAIT_SPD_INFO_COUNT_THD;
	hdmi_rx[port].cable_conn_is_first_measured_flag = FALSE;

	return TRUE;

}



//USER:Lewislee DATE:2016/08/26
//to fix blu-ray player, NS-BRDVD short time unstable
unsigned char newbase_hdmi_check_stable_before_display(void)
{
	unsigned char port = current_port;
	HDMI_DRM_T info;
	unsigned char avi_state = 0;
	HDMI_AVI_T avi_info;
	unsigned char drm_state = 0;
	unsigned char is_allm =0;

#if HDMI_DISPLAY_DELAY_ENABLE

	if(_FALSE == lib_hdmi_delay_check_before_display(port, _FALSE))
	{
		if(_TRUE == lib_hdmi_delay_display_action(port))
		{
			//need to debounce, skip now
//			return _FALSE;
		}
	}

	lib_hdmi_set_delay_display_enable(port, _DISABLE);
	lib_hdmi_set_delay_display_state(port, HDMI_DISPLAY_DELAY_NONE);
#endif //#if HDMI_DISPLAY_DELAY_ENABLE

	if(GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_FAST_DETECT_ENABLE) ==  HDMI_PCB_FORCE_ENABLE)
	{
		HDMI_WARN("[check_stable_before_display port:%d] Fast detect mode, bypass wait_hdcp_data_sync\n", port);
	}
	else if(GET_MODE_HDMI_DOLBY_VSIF() != DOLBY_HDMI_VSIF_DISABLE)
	{
		HDMI_WARN("[check_stable_before_display port:%d] Detected Dolby mode=%d,  bypass wait_hdcp_data_sync\n", port, GET_MODE_HDMI_DOLBY_VSIF());
	}
	else
	{
		if (newbase_hdmi_wait_hdcp_data_sync(port)==0)
		{
			HDMI_EMG("[check_stable_before_display port:%d] Wait HDCP data sync failed\n", port);
			goto check_condition_fail;
		}
	}
	
	if (lib_hdmi_get_fw_debug_bit(DEBUG_25_BYPASS_CHECK))
	{
		return TRUE;
	}

	if (GET_H_VIDEO_FSM(port) != MAIN_FSM_HDMI_VIDEO_READY)
	{
		HDMI_EMG("[check_stable_before_display port:%d] Video FSM:%s, not MAIN_FSM_HDMI_VIDEO_READY\n", port, _hdmi_video_fsm_str(GET_H_VIDEO_FSM(port)));
		goto check_condition_fail;
	}

#if HDMI_TOGGLE_HPD_Z0_ENABLE
	if(_FALSE == lib_hdmi_dc_on_delay_check(port, _FALSE))
		return FALSE;
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE

	if (newbase_hdmi_check_condition_change(port))
	{
		HDMI_EMG("[check_stable_before_display port:%d] ccheck_condition_change\n", port);
		goto check_condition_fail;
	}

	if (TRUE == newbase_hdmi_get_is_interlace_change(port, newbase_rxphy_get_frl_mode(port)))
	{
		HDMI_EMG("[check_stable_before_display port:%d] interlace change\n", port);
		goto check_condition_fail;
	}

	if (GET_H_PIXEL_REPEAT(port) != lib_hdmi_get_pixelrepeat(port))
	{
		HDMI_EMG("[check_stable_before_display port:%d] pixelrepeat change from %d to %d\n", port, GET_H_PIXEL_REPEAT(port), lib_hdmi_get_pixelrepeat(port));
		goto check_condition_fail;
	}

#if HDR10_MD_INFO_CHECK
	//Minchay@20160607-a add hdr10 md check
	if (!newbase_hdmi_hdr10_md_info_check())
	{
		HDMI_EMG("[check_stable_before_display port:%d] hdr10_md_info fail\n", port);
		goto check_condition_fail;
	}
#endif //#if HDR10_MD_INFO_CHECK

	hdmi_display_ready = 1;  // output audio

	//Infoframe/Packet check before display
	drm_state = newbase_hdmi_get_drm_infoframe(port, &info);
	if(drm_state==0)
		HDMI_INFO("HDMI is ready to display, NO DRM INFO!\n");
	else
		HDMI_INFO("HDMI is ready to display (Get DRM, EOTF type=%d)\n", info.eEOTFtype);

	memset(&avi_info, 0, sizeof(HDMI_AVI_T)); //init avi_info
	avi_state = newbase_hdmi_get_avi_infoframe(port, &avi_info);
	hdmi_rx[port].timing_t.avi_vic = avi_info.VIC;

	newbase_hdmi_get_fvs_allm(port, &is_allm);
	HDMI_INFO("Port=%d, VRR_EN=%d, ALLM=%d, AMD_FREESYNC_en=%d, Dolby mode=%d, VIC=%d(avi_state:%d)\n",
		port, newbase_hdmi_get_vrr_enable(port), is_allm, newbase_hdmi_get_freesync_enable(port), GET_MODE_HDMI_DOLBY_VSIF(), avi_info.VIC, avi_state);

	return TRUE;
// 
check_condition_fail:
	lib_hdmi_video_output(port, 0);
	lib_hdmi_audio_output(port, 0);
	return FALSE;
}



//USER:LewisLee Date:2016/09/30
//to fix colorimetry NG case
unsigned char newbase_hdmi_check_avi_colorimetry_info(unsigned char port, unsigned char ucInit)
{
#ifdef HDMI_AVI_INFO_COLORIMETRY_ENABLE
	static unsigned char avi_debounce[HDMI_PORT_TOTAL_NUM];

	if(_TRUE == ucInit)
	{
		avi_debounce[port] = HDMI_AVI_INFO_COLORIMETRY_DEBOUNCE_CNT;
		return _TRUE;
	}

	if (port >= HDMI_PORT_TOTAL_NUM)
	{
		return _TRUE;
	}

	if (MODE_DVI == GET_H_MODE(port))
	{
		return _TRUE;
	}

	// 160ms/times
	if(2 == hdmi_rx[port].avi_t.type_code)
	{
		if(0 == hdmi_rx[port].avi_t.len)
		{
			//for other case
		}
		else// if(0 != hdmi_rx[port].avi_t.len)
		{
			if((0 == hdmi_rx[port].avi_t.EC) && (0 == hdmi_rx[port].avi_t.C))
			{
				if(avi_debounce[port])
				{
					//Just for 2 depth = LG Bluray BP-550 + Speaker YAMAHA YSP-5600
					//special case, wait more time
					if((0x59 == hdmi_rx[port].spd_t.VendorName[0]) && (0x61 == hdmi_rx[port].spd_t.VendorName[1])
						&& (0x6d == hdmi_rx[port].spd_t.VendorName[2]) && (0x61 == hdmi_rx[port].spd_t.VendorName[3])
						&& (0x68 == hdmi_rx[port].spd_t.VendorName[4]) && (0x61 == hdmi_rx[port].spd_t.VendorName[5])
						&& (0x00 == hdmi_rx[port].spd_t.VendorName[6]) && (0x00 == hdmi_rx[port].spd_t.VendorName[7]))
					{
						avi_debounce[port]--;
						HDMI_EMG("EC /C avi_debounce1=%x\n", avi_debounce[port]);
						return _FALSE;
					}
#if 0
					HDMI_PRINTF("VendorName [%x, %x, %x, %x, %x, %x, %x, %x]\n", hdmi_rx[port].spd_t.VendorName[0],
						hdmi_rx[port].spd_t.VendorName[1], hdmi_rx[port].spd_t.VendorName[2],
						hdmi_rx[port].spd_t.VendorName[3], hdmi_rx[port].spd_t.VendorName[4],
						hdmi_rx[port].spd_t.VendorName[5], hdmi_rx[port].spd_t.VendorName[6],
						hdmi_rx[port].spd_t.VendorName[7]);

					HDMI_EMG("EC /C avi_debounce1 exit\n");
#endif //#if 0
				}
			}
		}
	}
#endif //#ifdef HDMI_AVI_INFO_COLORIMETRY_ENABLE

	return _TRUE;
}

//==========================================

unsigned char newbase_hdmi_no_SPD_packetInfo(unsigned char nport)
{
	if( (0 == hdmi_rx[nport].spd_t.VendorName[0]) && (0 == hdmi_rx[nport].spd_t.VendorName[1])
		&& (0 == hdmi_rx[nport].spd_t.VendorName[2]) && (0 == hdmi_rx[nport].spd_t.VendorName[3])
		&& (0 == hdmi_rx[nport].spd_t.VendorName[4]) && (0 == hdmi_rx[nport].spd_t.VendorName[5])
		&& (0 == hdmi_rx[nport].spd_t.VendorName[6]) && (0 == hdmi_rx[nport].spd_t.VendorName[7]))
	{
		if((0 == hdmi_rx[nport].spd_t.ProductDesc[0]) && (0 == hdmi_rx[nport].spd_t.ProductDesc[1])
			&& (0 == hdmi_rx[nport].spd_t.ProductDesc[2]) && (0 == hdmi_rx[nport].spd_t.ProductDesc[3])
			&& (0 == hdmi_rx[nport].spd_t.ProductDesc[4]) && (0 == hdmi_rx[nport].spd_t.ProductDesc[5])
			&& (0 == hdmi_rx[nport].spd_t.ProductDesc[6]) && (0 == hdmi_rx[nport].spd_t.ProductDesc[7])
			&& (0 == hdmi_rx[nport].spd_t.ProductDesc[8]) && (0 == hdmi_rx[nport].spd_t.ProductDesc[9])
			&& (0 == hdmi_rx[nport].spd_t.ProductDesc[10]) && (0 == hdmi_rx[nport].spd_t.ProductDesc[11])
			&& (0 == hdmi_rx[nport].spd_t.ProductDesc[12]) && (0 == hdmi_rx[nport].spd_t.ProductDesc[13])
			&& (0 == hdmi_rx[nport].spd_t.ProductDesc[14]) && (0 == hdmi_rx[nport].spd_t.ProductDesc[15]))
		{
			return _TRUE;
		}
	}
	return _FALSE;
}

//==========================================
//==========================================


unsigned char newbase_hdmi_is_dispsrc(unsigned char disp)
{
#ifdef CONFIG_SUPPORT_SCALER
	if(VSC_INPUTSRC_HDMI == GET_DISPLAY_MODE_SRC(disp))
		return TRUE;
	else
		return FALSE;
#else
	return TRUE;
#endif
}

unsigned char newbase_hdmi_ced_err_thd_check(unsigned char port, unsigned int err_threshold)
{
	if (lib_hdmi_get_fw_debug_bit(DEBUG_23_BITERR_DET))
		return 0;

	if ((hdmi_rx[port].fw_char_error[0] > err_threshold) ||
			(hdmi_rx[port].fw_char_error[1] > err_threshold) ||
			(hdmi_rx[port].fw_char_error[2] > err_threshold) ||
			(hdmi_rx[port].fw_char_error[3] > err_threshold))
	{
		//CEDERR_FLOW_PRINT_FLAG("[CHAR_VALUE] (R, G, B) = (%d, %d, %d)\n", hdmi_rx[port].fw_char_error[0], hdmi_rx[port].fw_char_error[1], hdmi_rx[port].fw_char_error[2]);
		//CEDERR_FLOW_PRINT_FLAG("[CHAR_ERR] err_threshold = %d\n", err_threshold);

		return 1;
	}

	return 0;
}

unsigned char newbase_hdmi_tmds_err_thd_check(unsigned char port, unsigned int err_threshold)
{
	if (lib_hdmi_get_fw_debug_bit(DEBUG_23_BITERR_DET))
		return 0;

	if ((hdmi_rx[port].fw_bit_error[0] > err_threshold) ||
		(hdmi_rx[port].fw_bit_error[1] > err_threshold) ||
		(hdmi_rx[port].fw_bit_error[2] > err_threshold) ||
		(hdmi_rx[port].fw_bit_error[3] > err_threshold))
	{
		//CEDERR_FLOW_PRINT_FLAG("[BIT_VALUE] (R, G, B) = (%d, %d, %d)\n", hdmi_rx[port].fw_bit_error[0] , hdmi_rx[port].fw_bit_error[1] , hdmi_rx[port].fw_bit_error[2] );
		//CEDERR_FLOW_PRINT_FLAG("[BIT_ERR] err_threshold = %d\n", err_threshold);
		return 1;
	}

	return 0;
}

unsigned char newbase_hdmi_gcp_err_det(unsigned char port, unsigned int err_threshold)
{
	if (hdmi_rx[port].bch_err_cnt  > err_threshold)
	{
		HDMI_WARN("[newbase_hdmi_gcp_err_det port:%d][bch_2bit] BCH count =%d\n", port, hdmi_rx[port].bch_err_cnt);
		return 1;
	}

	return 0;
}

HDMI_PORT_INFO_T* newbase_hdmi_get_rx_port_info(unsigned char port)
{
	return (port < HDMI_PORT_TOTAL_NUM) ? &hdmi_rx[port] : NULL;
}

#ifdef CONFIG_RTK_KDRV_THERMAL_SENSOR

extern int register_temperature_callback(int degree,void *fn, void* data, char *module_name);

void newbase_hdmi_check_thermal_mode(unsigned char port)
{
	unsigned char conn_st;
	unsigned char connect_port = 0;

	conn_st = newbase_hdmi_get_5v_state(port);

#ifdef CONFIG_RTK_KDRV_HDMI_POWER_SAVING_MODE
	if ((!newbase_rxphy_is_clk_stable(port)) &&  (!conn_st))
	{
		newbase_hdmi_phy_pw_saving(port);
  #ifdef CTS_OPTION_SINK_VALID_TEST
		lib_hdmi_char_err_rst(port,0); //release valid reset and error count after power saving
  #endif
	}
#endif

	if(conn_st && newbase_hdmi_get_thermal_mode()) // hdmi cable connect and enable thermal mode
	{
	    if (hdmi_vfe_get_connected_port(&connect_port) < 0)
	        connect_port = 0xF;//It is not HDMI source

	    if (port != connect_port)
	    {
	        if(newbase_hdmi_get_hpd(port))
	            newbase_hdmi_set_hpd(port, 0);

	        newbase_hdmi_phy_pw_saving(port);
	        lib_hdmi_scdc_char_err_rst(port,0); //release valid reset and error count after power saving
	    }
	}
}

void newbase_hdmi_set_thermal_mode(unsigned char en)
{
	thermal_en = en;
}

unsigned char newbase_hdmi_get_thermal_mode(void)
{
	return thermal_en;
}

void newbase_hdmi_thermal_callback(void *data, int cur_degree , int reg_degree, char *module_name)
{
	if (cur_degree <= REG_DEGREE) {
		newbase_hdmi_set_thermal_mode(0);
		HDMI_PRINTF("Disable hdmi_thermal, cur_deg: %d, reg_deg:%d, \n", cur_degree, reg_degree );
	}
	else if(cur_degree > REG_DEGREE) {
		HDMI_PRINTF("Enable hdmi_thermal, cur_deg: %d, reg_deg:%d, \n", cur_degree, reg_degree );
		newbase_hdmi_set_thermal_mode(1);
	}
	return;
}

static int vfe_register_HDMI_thermal_handler(void)
{
	int ret;

	HDMI_EMG("%s\n",__func__);
	
    if ((ret = register_temperature_callback((REG_DEGREE-5), newbase_hdmi_thermal_callback, NULL,"HDMI")) < 0)
	    HDMI_EMG("register HDMI thermal handler fail, ret:%d \n", ret);

	return 0;
}

//late_initcall(vfe_register_HDMI_thermal_handler);
void vfe_register_HDMI_thermal(int t0, int t1, int t2)
{
	if( (t2<135) && (t2> t1) && (t1 > t0))
	{
		REG_DEGREE=t0;
		REG_DEGREE_LV2=t1;
		REG_DEGREE_LV3=t2;
		vfe_register_HDMI_thermal_handler();//use resource table;
	}
	else
	{
		vfe_register_HDMI_thermal_handler();//use default;
	}
}
EXPORT_SYMBOL(vfe_register_HDMI_thermal);

#else

unsigned char newbase_hdmi_get_thermal_mode(void)
{
	return 0;
}

#endif  // CONFIG_RTK_KDRV_THERMAL_SENSOR


/*********************************************************************************
*
*	hdmi_lib.c
*
*********************************************************************************/

void lib_hdmi_set_toggle_hpd_z0_flag(unsigned char nport, unsigned char uc_flag)
{
#if HDMI_TOGGLE_HPD_Z0_ENABLE
//	HDMI_PRINTF("lib_hdmi_set_toggle_hpd_z0_flag[%d]=%d\n", nport, uc_flag);
	hdmi_toggle_hpd_z0_flag[nport] = uc_flag;
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE
}

unsigned char lib_hdmi_get_toggle_hpd_z0_flag(unsigned char nport)
{
#if HDMI_TOGGLE_HPD_Z0_ENABLE
	return hdmi_toggle_hpd_z0_flag[nport];
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE

	return _FALSE;
}

unsigned char lib_hdmi_toggle_hpd_z0_check(unsigned char nport, unsigned char ucInit)
{
#if HDMI_TOGGLE_HPD_Z0_ENABLE
	static unsigned int start_time = 0;
	static unsigned int current_time = 0;

	if(_FALSE == lib_hdmi_get_toggle_hpd_z0_flag(nport))
		return _TRUE;

	if(_TRUE == ucInit)
	{
		// need to think, if start time almost overflow
		start_time = hdmi_get_system_time_ms();
		current_time = start_time;
		HDMI_EMG("lib_hdmi_toggle_hpd_z0_check nport=%x, start=%d\n", nport, start_time);
		return _TRUE;
	}

	current_time = hdmi_get_system_time_ms();

	if(current_time >= start_time)
	{
		if(current_time - start_time >= HDMI_START_TOGGLE_HPD_Z0_MS)
		{
			newbase_hdmi_set_hpd(nport, 0);
			lib_hdmi_z0_set(nport, LN_ALL, 0);
			msleep(HDMI_TOGGLE_HPD_Z0_MS);
			lib_hdmi_z0_set(nport, LN_ALL, 1);
			newbase_hdmi_set_hpd(nport , 1);
			HDMI_EMG("lib_hdmi_toggle_hpd_z0_check nport=%x, time=%d\n", nport, current_time);
			lib_hdmi_set_dc_on_delay_state(nport, HDMI_DC_ON_ENABLE_DELAY);
			lib_hdmi_set_toggle_hpd_z0_flag(nport, _FALSE);
		}
	}
	else// if(current_time <= start_time)
	{
		HDMI_EMG("lib_hdmi_toggle_hpd_z0_check over, start_time=%d, current_time=%d\n", start_time, current_time);
		lib_hdmi_set_toggle_hpd_z0_flag(nport, _FALSE);
	}
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE

	return _TRUE;
}

void lib_hdmi_set_dc_on_delay_state(unsigned char nport, HDMI_DC_ON_STATE_E state)
{
#if HDMI_TOGGLE_HPD_Z0_ENABLE
//	HDMI_PRINTF("lib_hdmi_set_dc_on_delay_state[%d]=%d\n", nport, state);
	hdmi_dc_on_delay_state[nport] = state;
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE
}

HDMI_DC_ON_STATE_E lib_hdmi_get_dc_on_delay_state(unsigned char nport)
{
#if HDMI_TOGGLE_HPD_Z0_ENABLE
	return hdmi_dc_on_delay_state[nport];
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE

	return HDMI_DC_ON_NONE;
}

unsigned char lib_hdmi_dc_on_delay_check(unsigned char nport, unsigned char ucInit)
{
#if HDMI_TOGGLE_HPD_Z0_ENABLE
	static unsigned int start_time = 0;
	static unsigned int current_time = 0;

	if(_FALSE == lib_hdmi_get_toggle_hpd_z0_flag(nport))
		return _TRUE;

	if(_TRUE == ucInit)
	{
		if(HDMI_DC_ON_ENABLE_DELAY != lib_hdmi_get_dc_on_delay_state(nport))
			return _TRUE;

		lib_hdmi_set_dc_on_delay_state(nport, HDMI_DC_ON_START_TIME);
		// need to think, if start time almost overflow
		start_time = hdmi_get_system_time_ms();
		current_time = start_time;
		HDMI_EMG("lib_hdmi_dc_on_delay_check nport=%x, start=%d\n", nport, start_time);
		return _TRUE;
	}

	if(HDMI_DC_ON_START_TIME != lib_hdmi_get_dc_on_delay_state(nport))
		return _TRUE;

	current_time = hdmi_get_system_time_ms();

	if(current_time >= start_time)
	{
		if(current_time - start_time >= HDMI_DC_ON_DELAY_MS)
		{
			HDMI_EMG("lib_hdmi_dc_on_delay_check nport=%x, time=%d\n", nport, current_time);
			lib_hdmi_set_dc_on_delay_state(nport, HDMI_DC_ON_FINISH);
			return _TRUE;
		}
	}
	else// if(current_time <= start_time)
	{
		HDMI_EMG("lib_hdmi_dc_on_delay_check over, start_time=%d, current_time=%d\n", start_time, current_time);
		lib_hdmi_set_dc_on_delay_state(nport, HDMI_DC_ON_NONE);
		return _TRUE;
	}

	return _FALSE;
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE

	return _TRUE;
}

void lib_hdmi_set_str_toggle_hpd_state(unsigned char nport, HDMI_STR_HPD_TOGGLE_STATE_E state)
{
#if HDMI_STR_TOGGLE_HPD_ENABLE
//	HDMI_PRINTF("lib_hdmi_set_str_toggle_hpd_state[%d]=%d\n", nport, state);
	hdmi_str_toggle_hpd_state[nport] = state;
#endif //#if HDMI_STR_TOGGLE_HPD_ENABLE
}

HDMI_STR_HPD_TOGGLE_STATE_E lib_hdmi_get_str_toggle_hpd_state(unsigned char nport)
{
#if HDMI_STR_TOGGLE_HPD_ENABLE
	return hdmi_str_toggle_hpd_state[nport];
#endif //#if HDMI_STR_TOGGLE_HPD_ENABLE

	return HDMI_STR_HPD_TOGGLE_NONE;
}

unsigned char lib_hdmi_get_compatibility_table_index(HDMI_SPECIFIC_DEVICE_E device_id)
{
	unsigned char table_index = 0;
	int i = 0;

	for(i = 0; i< g_device_compatibility_config_table_size; i++)
	{
		if(device_id == g_device_compatibility_config[i].device_id)
		{
			table_index = i;
			break;
		}
	}
	return table_index;
}

void lib_hdmi_set_delay_display_enable(unsigned char nport, unsigned char ucEnable)
{
#if HDMI_DISPLAY_DELAY_ENABLE
//	HDMI_PRINTF("lib_hdmi_set_delay_display_enable[%d]=%d\n", nport, ucEnable);
	hdmi_delay_display_enable[nport] = ucEnable;
#endif //#if HDMI_DISPLAY_DELAY_ENABLE
}

unsigned char lib_hdmi_get_delay_display_enable(unsigned char nport)
{
#if HDMI_DISPLAY_DELAY_ENABLE
	return hdmi_delay_display_enable[nport];
#endif //#if HDMI_DISPLAY_DELAY_ENABLE

	return _DISABLE;
}

void lib_hdmi_set_delay_display_state(unsigned char nport, HDMI_DISPLAY_DELAY_STATE_STATE_E state)
{
#if HDMI_DISPLAY_DELAY_ENABLE
//	HDMI_PRINTF("lib_hdmi_set_delay_display_state[%d]=%d\n", nport, state);
	hdmi_delay_display_state[nport] = state;
#endif //#if HDMI_DISPLAY_DELAY_ENABLE
}

HDMI_DISPLAY_DELAY_STATE_STATE_E lib_hdmi_get_delay_display_state(unsigned char nport)
{
#if HDMI_DISPLAY_DELAY_ENABLE
	return hdmi_delay_display_state[nport];
#endif //#if HDMI_DISPLAY_DELAY_ENABLE

	return HDMI_DISPLAY_DELAY_NONE;
}

unsigned char lib_hdmi_delay_check_before_display(unsigned char nport, unsigned char ucInit)
{//TRUE: It's no need to execute delay, FALSE: It's need to execute delay after.
#if HDMI_DISPLAY_DELAY_ENABLE
	static unsigned int start_time = 0;
	static unsigned int current_time = 0;
	unsigned int Delay_Time = 0;

	if(_DISABLE == lib_hdmi_get_delay_display_enable(nport))
		return _TRUE;

	if(_TRUE == ucInit)
	{
		if(HDMI_DISPLAY_DELAY_INIT == lib_hdmi_get_delay_display_state(nport))
		{
			lib_hdmi_set_delay_display_state(nport, HDMI_DISPLAY_DELAY_START);
			// need to think, if start time almost overflow
			start_time = hdmi_get_system_time_ms();
			current_time = start_time;
			HDMI_WARN("[COMP][lib_hdmi_delay_check_before_display] Init,  nport=%x, start=%d\n", nport, start_time);
		}
		return _TRUE;
	}

	if(HDMI_DISPLAY_DELAY_START != lib_hdmi_get_delay_display_state(nport))
		return _TRUE;

	Delay_Time = lib_hdmi_get_delay_display_time(nport);
	current_time = hdmi_get_system_time_ms();

	if(current_time >= start_time)
	{
		if(current_time - start_time >= Delay_Time)
		{
			HDMI_WARN("[COMP][lib_hdmi_delay_check_before_display] No need to delay.  nport=%x, current_time = %d, (current-start)=%d\n", nport, current_time, current_time - start_time);
			lib_hdmi_set_delay_display_state(nport, HDMI_DISPLAY_DELAY_FINISH);
			return _TRUE;
		}
		else
		{
			m_actual_execute_delay_time =  (Delay_Time + start_time) - current_time;
			HDMI_WARN("[COMP] [lib_hdmi_delay_check_before_display] Calculate pipeline delay from displayok to Before display = %d!!!\n", m_actual_execute_delay_time);
			HDMI_WARN("[COMP] Should Delay = %d, current_time - start_time  = %d\n",  Delay_Time, current_time - start_time);
		}
	}
	else// if(current_time <= start_time)
	{
		HDMI_WARN("[COMP] [lib_hdmi_delay_check_before_display]  over, start_time=%d, current_time=%d\n", start_time, current_time);
		lib_hdmi_set_delay_display_state(nport, HDMI_DISPLAY_DELAY_FINISH);
		return _TRUE;
	}

	return _FALSE;
#endif //#if HDMI_DISPLAY_DELAY_ENABLE

	return _TRUE;
}



unsigned int lib_hdmi_get_delay_display_time(unsigned char nport)
{
	unsigned int DelayTime = 0;
	unsigned char table_index = 0;
	
	table_index = lib_hdmi_get_compatibility_table_index(lib_hdmi_get_specific_device(nport));
	//HDMI_PRINTF("[COMP] lib_hdmi_get_delay_display_time, table_index= %d\n", table_index);

	DelayTime = g_device_compatibility_config[table_index].action_delay_Time + GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_BEFORE_DISPLAY_BASE_DELAY_MS);
	HDMI_PRINTF("[COMP] lib_hdmi_get_delay_display_time, table_index= %d, Total = %d ms, device = %d ms, Base = %d\n",
		table_index, DelayTime,
		g_device_compatibility_config[table_index].action_delay_Time,
		GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_BEFORE_DISPLAY_BASE_DELAY_MS));
	return DelayTime;
}

unsigned char lib_hdmi_delay_at_once_status(void)
{
	if(hdmi_delay_only_at_once_check == TRUE)
	{
		HDMI_WARN("[COMP] lib_hdmi_delay_at_once_status isFirst = %d\n", hdmi_first_display_flag);
		return hdmi_first_display_flag;
	}
	else
		return TRUE;
}

//USER:LewisLee DATE:2016/12/27
//select delay by debounce or delay function
//don't delay too long
unsigned char lib_hdmi_delay_display_action(unsigned char nport)
{
	//HDMI_WARN("[COMP] The device id [%d]  delay =%d \n", lib_hdmi_get_specific_device(nport),m_actual_execute_delay_time );
	if(lib_hdmi_delay_at_once_status() == TRUE)
	{
		hdmi_first_display_flag = FALSE;
		if(m_actual_execute_delay_time <= ACTION_DELAY_MAX_MS)
		{
			msleep(m_actual_execute_delay_time);
		}
		else
		{
			msleep(ACTION_DELAY_MAX_MS);
			HDMI_EMG("[ERROR] lib_hdmi_delay_display_action, Delay value %d more than MAX %d, use max to instead!\n", m_actual_execute_delay_time, ACTION_DELAY_MAX_MS);
		}
	}
	return _FALSE;
}

void lib_hdmi_set_specific_device(unsigned char nport, HDMI_SPECIFIC_DEVICE_E device)
{
	HDMI_PRINTF("[COMP] lib_hdmi_set_specific_device port=%d, device id [%d]\n", nport, device);
	hdmi_specific_device[nport] = device;
}

HDMI_SPECIFIC_DEVICE_E lib_hdmi_get_specific_device(unsigned char nport)
{
	return hdmi_specific_device[nport];
}

void newbase_hdmi_set_device_phy_stable_count(unsigned char port, unsigned char count)
{
	m_device_phy_stable_count[port] = count;
}

unsigned char newbase_hdmi_get_device_phy_stable_count(unsigned char port)
{
	return m_device_phy_stable_count[port];
}

void lib_hdmi_misc_variable_initial(unsigned char port)
{
	lib_hdmi_set_specific_device(port, HDMI_SPECIFIC_DEVICE_NONE);

#if HDMI_DISPLAY_DELAY_ENABLE
	lib_hdmi_set_delay_display_enable(port, _DISABLE);
	lib_hdmi_set_delay_display_state(port, HDMI_DISPLAY_DELAY_NONE);
#endif //#if HDMI_DISPLAY_DELAY_ENABLE

#if HDCP_STATUS_CHECK_ENABLE
	lib_hdmi_set_hdcp_check_toggle_state(port, HDMI_HDCP_TOGGLE_NONE);
#endif //#if HDCP_STATUS_CHECK_ENABLE
}

void lib_hdmi_set_hdcp_check_toggle_state(unsigned char nport, HDMI_HDCP_TOGGLE_STATUS_T status)
{
#if HDCP_STATUS_CHECK_ENABLE
//	HDMI_PRINTF("lib_hdmi_set_delay_display_enable[%d]=%d\n", nport, ucEnable);
	hdmi_hdcp_check_toggle_state[nport] = status;
#endif //#if HDCP_STATUS_CHECK_ENABLE
}

HDMI_HDCP_TOGGLE_STATUS_T lib_hdmi_get_hdcp_check_toggle_state(unsigned char nport)
{
#if HDCP_STATUS_CHECK_ENABLE
	return hdmi_hdcp_check_toggle_state[nport];
#endif //#if HDCP_STATUS_CHECK_ENABLE

	return HDMI_HDCP_TOGGLE_NONE;
}

unsigned char lib_hdmi_hdcp_status_check(unsigned char nport, unsigned char IsInit)
{
#if HDCP_STATUS_CHECK_ENABLE
	static unsigned int start_time = 0;
	static unsigned int current_time = 0;

	if(_TRUE == IsInit)
	{
		// need to think, if start time almost overflow
		start_time = hdmi_get_system_time_ms();
		current_time = start_time;
		lib_hdmi_set_hdcp_check_toggle_state(nport, HDMI_HDCP_TOGGLE_ENABLE);
		HDMI_EMG("[HDCP] lib_hdmi_hdcp_status_check nport=%x, start=%d\n", nport, start_time);

		//Write clear ADNE_FLAG
		hdmi_out(HDMI_HDCP_FLAG1_reg, _BIT7);
		return _TRUE;
	}

	if(lib_hdmi_get_hdcp_check_toggle_state(nport) != HDMI_HDCP_TOGGLE_ENABLE)
		return _TRUE;

	if(_ENABLE == lib_hdmi_hdcp22_is_onoff(nport))
	{
		if (HDMI_STB_HDCP_2p2_SR0_get_state(hdmi_in(HDMI_STB_HDCP_2p2_SR0_reg)) >= HDMI_HDCP_2P2_AUTHENTICATED)
				return _TRUE;
		}
	else if(_ENABLE == lib_hdmi_hdcp14_is_onoff(nport))
		{
		if(1 == HDMI_STB_HDCP_FLAG1_get_adne_flag(hdmi_in(HDMI_STB_HDCP_FLAG1_reg)))
			return _TRUE;
		}
	else
	{
		return _TRUE;
	}


	current_time = hdmi_get_system_time_ms();

	if(current_time >= start_time)
	{
		if(current_time - start_time >= HDCP_STATUS_CHECK_TOGGLE_MS)
		{
			HDMI_EMG("[HDCP] lib_hdmi_hdcp_status_check nport=%x, time=%d\n", nport, current_time);
			if(_TRUE == lib_hdmi_hdcp_toggle_action(nport))
				return _FALSE;

			return _TRUE;
		}
	}
	else// if(current_time <= start_time)
	{
		HDMI_EMG("[HDCP] lib_hdmi_hdcp_status_check over, start_time=%d, current_time=%d\n", start_time, current_time);
		lib_hdmi_set_hdcp_check_toggle_state(nport, HDMI_HDCP_TOGGLE_EXIT);
		return _TRUE;
	}
#endif //#if HDCP_STATUS_CHECK_ENABLE

	return _TRUE;
}

//USER:LewisLee DATE:2017/01/04
//In different device, use different solution
unsigned char lib_hdmi_hdcp_toggle_action(unsigned char nport)
{
#if HDCP_STATUS_CHECK_ENABLE
	unsigned char result = _FALSE;

	switch(lib_hdmi_get_specific_device(nport))
	{
	case HDMI_SPECIFIC_DEVICE_ROKU_ULTRA_4640R:
		newbase_hdmi_set_hpd(nport, 0);
		msleep(HDCP_STATUS_CHECK_ROKU_ULTRA_4640R_HPD_MS);
		newbase_hdmi_set_hpd(nport, 1);
		result = _TRUE;
		break;

	default:
		result = _FALSE;
		break;
	}

	return result;
#endif //#if HDCP_STATUS_CHECK_ENABLE

	return _FALSE;
}

void reset_hdmi_timing_ready(void)
{//auto run scaler to use. reset timing ready
	hdmi_good_timing_ready = FALSE;
}

