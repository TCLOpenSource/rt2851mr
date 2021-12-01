#ifndef __HDMI_INTERNAL_H_
#define __HDMI_INTERNAL_H_

#include "hdmi_emp.h"
#include "hdmi_hdcp.h"
#include "hdmi_power_saving.h"

/**********************************************************************************************
*
*	CHANNEL Config
*
**********************************************************************************************/


typedef enum {
    HDMI_PHY_PORT0 = 0,
    HDMI_PHY_PORT1,
    HDMI_PHY_PORT2,
    HDMI_PHY_PORT3,
    HDMI_PHY_TOTAL_NUM,
    HDMI_PHY_PORT_NOTUSED = HDMI_PHY_TOTAL_NUM
} HDMI_PHY_PORT_T;


typedef enum {
    HDMI_EDID_ONCHIP = 0,
    HDMI_EDID_EEPROM,
    HDMI_EDID_I2CMUX,
    HDMI_EDID_DISABLE
} HDMI_EDID_TYPE_T;



typedef enum {
    DDC0 = 0,
    DDC1,
    DDC2,
    DDC3,
    DDC_NOTUSED
} DDC_NUMBER_T;


#include <rtk_gpio.h>


typedef struct
{
    unsigned char   valid_port;
    unsigned char   phy_port;
    unsigned char   ddc_selected;

    unsigned char   edid_type;
    unsigned char   arc_support : 1;
    unsigned char   earc_support : 1;
    unsigned char   dedicate_hpd_det : 1;
    unsigned char   dedicate_hpd_det_sel : 2;    // (valid when dedicate_hpd_det=1)
    unsigned char   dedicate_hpd_invert : 1;     // 0 : non invert, 1 : invert
    unsigned char   br_swap : 1;
    unsigned char   reserved : 1;

    RTK_GPIO_ID     hpd;        // GPIO for HPD    (valid when dedicate_hpd_det=0)
    RTK_GPIO_ID     det_5v;     // GPIO for 5V det (valid when dedicate_hpd_det=0)
} HDMI_CHANNEL_T;


typedef struct
{
    unsigned char   valid_port;
    unsigned char   phy_port;
    unsigned char   ddc_selected;
    unsigned char   edid_type;
    unsigned char   arc_support : 1;
    unsigned char   earc_support : 1;
    unsigned char   dedicate_hpd_det : 1;
    unsigned char   dedicate_hpd_det_sel : 2;     // (valid when dedicate_hpd_det=1)
    unsigned char   dedicate_hpd_invert : 1;      // 0 : non invert, 1 : invert
    unsigned char   br_swap : 1;
    unsigned char   reserved : 1;

    RTK_GPIO_ID     hpd;        // GPIO for HPD    (valid when dedicate_hpd_det=0)
    RTK_GPIO_ID     det_5v;     // GPIO for 5V det (valid when dedicate_hpd_det=0)

} HDMI_CHANNEL_T_PCB_INFO;

/**********************************************************************************************
*
*	Marco or Definitions
*
**********************************************************************************************/
#define CBUS_NOT_BYPASS			1    // 1: for normal flow   0 : for MHL CTS  TEST
#define VALID_MIN_CLOCK			116
#define HDMI_OLD_CLK_DETECT			0
#define HDMI_CLEAR_HDCP22_SRAM_PATCH		0
#define AUDIO_HBR_DETECT			1
#define AUDIO_OVER_192K			0
#define BIST_PLUG_CABLE				0
#define BIST_DFE_SCAN				1
#define BIST_PHY_SCAN				1
#define CONFIG_POWER_SAVING_MODE 1
#define HDMI_FRL_TRANS_DET 		0
#define HDMI_DFE_BRSWAP			1
#define HDMI_DISABLE_EDID_WHEN_HPD_LOW	0
#define HDMI_DISABLE_TMDS_INPUT_ON_FRL_MODE // for Power Saving, when running on FRL mode, TMDS input can be disabled to reduce power consumption
#define HDMI_FIX_RL6583_1265         // for HDCP DVI ENC mode, need to test with some non-standard HDCP1.4 devices for compatibility check
#define HDMI_FIX_RL6583_2215         // need to set FW VS polarity
//#define HDMI_FIX_RL6583_647          // disable hdcp cipher until receive HDCP14 AKSV for advanced power saving
#define HDMI_FIX_RL6583_2562         // add disparity error masking period for 2 blcok
#define HDMI_FIX_HDMI_POWER_SAVING
#define PHY_ADAPTIVE_BY_LTP_PAT_AFTER_LTP_PASS  0
#define HDMI_ABORT_OFMS_WHEN_CLK_NOT_STABLE     1   // when measure timing while clock is not stable, might cause long measure timeout, this feature could speed up the loop
//#define WAIT_SYNC_WITH_BCH_ERROR_CHECK              // if BCH error occurs, threat it as data off sync
//USER:LewisLee DATE:2016/08/20
//just for short time 1080P 100Hz, 120Hz test
//It need webos modify FW
#define HDMI_120HZ_SHORT_TIME_PATCH		0 // 1

//USER:LewisLee DATE:2015/11/09
//Some Tx device, change timing have transient garbage
//clock chnage later than data change
//So need enable AV mute to fix it
//PS. It should be turn on 0xb8028300[15] is more better
#define HDMI_VIDEO_WD_ENABLE		1 // Video WatchDog function enable

//USER:LewisLee Date:2016/09/30
//to fix colorimetry NG case
#define HDMI_AVI_INFO_COLORIMETRY_ENABLE				1
#define HDMI_AVI_INFO_COLORIMETRY_DEBOUNCE_CNT		25

//USER:LewisLee DATE:2016/10/25
//modify clk_debounce_count threshold value
//to prevent HDCP handshake too fast
//set phy disable HDCP 1.4 will let picture unstable
#define HDMI_PHY_CLOCK_DYNAMIC_CNT_ENABLE	1

#define DISP_DEB_CNT_APPLETV				2
#define ENABLE_HDMI_VIDEO_OUTPUT_DISABLE	0

//USER:LewisLee DATE:2016/12/22
//WOSQRTK-10319, [STB-14] KT UHD STB (IC1000)
//STB DC off/on, will send AV mute after display, let it flicker
#define HDMI_TOGGLE_HPD_Z0_ENABLE		1
#define HDMI_START_TOGGLE_HPD_Z0_MS		5000
#define HDMI_TOGGLE_HPD_Z0_MS			400 // some times NG at 100 ~ 200, 500 ms is good
#define HDMI_DC_ON_DELAY_MS				5000 //OK, 3000ms NG

//USER:LewisLee DATE:2016/12/22
//WOSQRTK-10334, [STB-20] IC1100 - KT olleh GiGA UHD tv STB
//STR TV and STB DC off/on together, It will keep to send AVMute, can not display
#define HDMI_STR_TOGGLE_HPD_ENABLE		1


#if defined(CONFIG_HDMI_DRV_HPD)
#define HDMI_STR_HPD_SPEED_UP_ENABLE			1
#define  CEC_CEC_CR0_reg                                                         0xB8061E00
#define  CEC_CEC_CR0_get_cec_mode(data)                                          ((0xC0000000&(data))>>30)
#else
#define HDMI_STR_HPD_SPEED_UP_ENABLE			0
#endif

//USER:LewisLee DATE:2016/12/26
//for Tx output stable clock => unstbale => stable
//let output flicker issue
#define HDMI_DISPLAY_DELAY_ENABLE		1

#define HDMI_DISPLAY_DELAY_LHB_755_MS		600
#define HDMI_DISPLAY_DELAY_LHB_755_MS_2		200

#define HDMI_DISPLAY_DELAY_ROKU_ULTRA_4640R_MS		1500 // large 1500ms OK
#define HDMI_DISPLAY_DELAY_SAMSUNG_GX_HC630CH_MS		2000 // large 1500ms OK
#define HDMI_DISPLAY_DELAY_KT_STB_KAO_CT1100_MS		500 // large 500ms OK
#define HDMI_DISPLAY_DELAY_PC40000_MS				1500 // need check
#define HDMI_DISPLAY_DELAY_APPLETV_MS				1500 // need chekc

#define HDMI_WAIT_INFOFRAME_ENABLE		1
#define HDMI_WAIT_AVI_INFO_COUNT_THD		10
#define HDMI_WAIT_SPD_INFO_COUNT_THD		4 //Must smaller than HDMI_WAIT_AVI_INFO_COUNT_THD
#define HDMI_WAIT_HDCP14_COUNT_THD		15

//USER:LewisLee DATE:2017/01/04
//for Roku Ultra 4640R, if TV DC off/on, some times it will HDCP 2.2 handshake error
//and can not output
//If DC off/on, some times it will output HDCP 1.4
#define HDCP_STATUS_CHECK_ENABLE		1
#define HDCP_STATUS_CHECK_TOGGLE_MS	10000

#define HDCP_STATUS_CHECK_ROKU_ULTRA_4640R_HPD_MS	600

#define HPD_DEFAULT_LOW_MS          700     //KTASKWBS-8520,LGE asked to adjust HPD Low status duration.
	                                        //restart 700ms HPD low delaywork and then pull high HPD
#define HPD_ROKU_ULTRA_4640R_LOW_MS 1000
#define ERRDET_LIMIT_COUNT	10

#define DIAGNOSTIC_CED_ERROR_THD	40
#define DIAGNOSTIC_TMDS_ERROR_THD	40
#define DIAGNOSTIC_GCP_ERROR_THD	10
#define DIAGNOSTIC_BCH_ERROR_THD 10

// 0xB800D090[16]
#define HDMI_GCP_ACKG_PACKET_PARSER_FIRST_BYTE   0
#define HDMI_GCP_ACKG_PACKET_PARSER_ALL                  1
#define HDMI_GCP_ACKG_PACKET_HEADER_PARSER_MODE  HDMI_GCP_ACKG_PACKET_PARSER_ALL

// 0xB800D024[19:18]
// Apply Value = Setting value + 3
// Valid range = [1,3]
#define HDMI_PK_GB_NUM  1

// 0xB800D024[17:16]
// Apply Value = Setting value + 3
// Valid range = [1,3]
#define HDMI_VD_GB_NUM  1

// 0xB800D024[15:13]
// Apply Value = Setting value + 1
// Valid range = [3,7]
#define HDMI_PK_PRE_NUM  3

// 0xB800D024[12:10]
// Apply Value = Setting value + 1
// Valid range = [3,7]
#define HDMI_VD_PRE_NUM  3


#define HDMI_ABS(x, y)	 	((x > y) ? (x-y) : (y-x))
#define HDMI_CONST		const


extern const char* _hdmi_video_fsm_str(unsigned int fsm);
extern const char* _hdmi_color_colorimetry_str(unsigned char colorimetry);
extern const char* _hdmi_color_space_str(unsigned char color_space);
extern const char* _hdmi_color_depth_str(unsigned char depth);

#if 0
#define SET_H_VIDEO_FSM(port, fsm)	(hdmi_rx[port].video_fsm = fsm)
#define SET_H_AUDIO_FSM(port, fsm)	(hdmi_rx[port].audio_fsm = fsm)
#else
#define SET_H_VIDEO_FSM(port, fsm)	do { if (hdmi_rx[port].video_fsm!=fsm) { pr_warn("[HDMI][FSM][DETECT] Port [%d], VIDEO_FSM=%d(%s) -> %d(%s)\n", port, hdmi_rx[port].video_fsm, _hdmi_video_fsm_str(hdmi_rx[port].video_fsm), fsm, _hdmi_video_fsm_str(fsm)); hdmi_rx[port].video_fsm = fsm;  }  }while(0)
#define SET_H_AUDIO_FSM(port, fsm)	do { if (hdmi_rx[port].audio_fsm!=fsm) { pr_warn("[HDMI][FSM] Port [%d], AUDIO_FSM=%d(%s) -> %d(%s)\n", port, hdmi_rx[port].audio_fsm, _hdmi_audio_fsm_str(hdmi_rx[port].audio_fsm), fsm, _hdmi_audio_fsm_str(fsm)); hdmi_rx[port].audio_fsm = fsm;  }  }while(0)
#endif

#define SET_H_INTERLACE(port, interlace)	(hdmi_rx[port].timing_t.is_interlace = interlace)
#define SET_H_MODE(port, m)		(hdmi_rx[port].timing_t.mode = m)
#define SET_H_COLOR_DEPTH(port, color)	(hdmi_rx[port].timing_t.colordepth= color)
#define SET_H_COLOR_SPACE(port, color)	(hdmi_rx[port].timing_t.colorspace = color)
#define SET_H_PIXEL_REPEAT(port, pr)	(hdmi_rx[port].timing_t.pixel_repeat = pr)
#define SET_H_VIDEO_FORMAT(port, fmt)	(hdmi_rx[port].timing_t.hvf = fmt)
#define SET_H_3DFORMAT(port, fmt) 	(hdmi_rx[port].timing_t.h3dformat = fmt)
#define SET_H_RUN_VRR(port, vrr) 	(hdmi_rx[port].timing_t.run_vrr = vrr)

#define SET_AUDIO_TYPE(port, type)	(hdmi_rx[port].audio_type = type)

#define GET_H_VIDEO_FSM(port)		(hdmi_rx[port].video_fsm)
#define GET_H_AUDIO_FSM(port)		(hdmi_rx[port].audio_fsm)

#define GET_H_INTERLACE(port)		(hdmi_rx[port].timing_t.is_interlace)
#define GET_H_MODE(port)		(hdmi_rx[port].timing_t.mode)
#define GET_H_COLOR_DEPTH(port)	(hdmi_rx[port].timing_t.colordepth)
#define GET_H_COLOR_SPACE(port)	(hdmi_rx[port].timing_t.colorspace)
#define GET_H_PIXEL_REPEAT(port)	(hdmi_rx[port].timing_t.pixel_repeat)
#define GET_H_VIDEO_FORMAT(port) 	(hdmi_rx[port].timing_t.hvf)
#define GET_H_3DFORMAT(port) 		(hdmi_rx[port].timing_t.h3dformat)
#define GET_H_RUN_VRR(port)				(hdmi_rx[port].timing_t.run_vrr)

#define GET_AUDIO_TYPE(port)		(hdmi_rx[port].audio_type)


#define GET_VGIP_CHNx_CTRL_ADDR()		(vgip_ch ? SUB_VGIP_VGIP_CHN2_CTRL_reg : VGIP_VGIP_CHN1_CTRL_reg)
#define GET_VGIP_CHNx_STATUS_ADDR()		(vgip_ch ? SUB_VGIP_VGIP_CHN2_STATUS_reg : VGIP_VGIP_CHN1_STATUS_reg)
#define GET_VGIP_CHNx_V_CAP_ADDR()  		(vgip_ch ? SUB_VGIP_VGIP_CHN2_ACT_VSTA_Length_reg : VGIP_VGIP_CHN1_ACT_VSTA_Length_reg)
#define GET_VGIP_CHNx_H_CAP_ADDR()  		(vgip_ch ? SUB_VGIP_VGIP_CHN2_ACT_HSTA_Width_reg : VGIP_VGIP_CHN1_ACT_HSTA_Width_reg)
#define GET_VGIP_CHNx_DELAY_ADDR()  		(vgip_ch ? SUB_VGIP_VGIP_CHN2_DELAY_reg : VGIP_VGIP_CHN1_DELAY_reg)



#define GET_SFT_AUTO_FIELD_VADDR()				(SMARTFIT_AUTO_FIELD_reg)
#define GET_SFT_AUTO_H_BOUNDARY_VADDR()			(SMARTFIT_AUTO_H_BOUNDARY_reg)
#define GET_SFT_AUTO_V_BOUNDARY_VADDR()			(SMARTFIT_AUTO_V_BOUNDARY_reg)
#define GET_SFT_AUTO_ADJ_VADDR()					(SMARTFIT_AUTO_ADJ_reg)
#define GET_SFT_AUTO_RESULT_VSTA_END_VADDR() 	(SMARTFIT_AUTO_RESULT_VSTA_END_reg)
#define GET_SFT_AUTO_RESULT_HSTA_END_VADDR() 	(SMARTFIT_AUTO_RESULT_HSTA_END_reg)



#define PLL_PIXELCLOCK_X1024_160M    163840 // 160*1024
#define PLL_PIXELCLOCK_X1024_300M    307200 // 300*1024


/**********************************************************************************************
*
*	Enumerations or Structures
*
**********************************************************************************************/

// -------------------------------------  hdmiPhy ----------------------------------------------//


typedef struct {
	unsigned short b;
	unsigned short b_pre;
	unsigned short b_count;
	unsigned short b_debouce_count;
	unsigned char b_change;
	unsigned char avi_info_in;
	unsigned short avi_info_miss_cnt;
	unsigned short LG_patch_timer;
	unsigned short timer;
	short    hotplug_timer;
	unsigned short hotplug_delay_count;
} HDMIRX_IOCTL_STRUCT_T;


//HD20 PHY structure
typedef struct {
	u_int16_t b_upper;
	u_int16_t b_lower;

	u_int16_t M_code;
	u_int16_t N_code;
	u_int8_t pscaler;
	u_int8_t SEL_D4;
	u_int8_t CMU_KVCO;  //merlin5 remove

	u_int8_t EN_CAP;
	u_int8_t CK_CS;
	u_int8_t CK_Icp;
	u_int8_t Icp_DUL;
	u_int8_t CK_RS;

	u_int8_t CK_LDOD;
	u_int8_t PI_DIV;
	u_int8_t DEMUX;
	u_int8_t RATE_SEL;
	u_int8_t PIX2_SEL;

	u_int8_t PI_ISEL;
	u_int8_t PI_CSEL;
	u_int8_t CDR_bias;
	u_int8_t CDR_KP;
	u_int8_t CDR_KP2;

	u_int8_t CDR_KI;
	u_int8_t CDR_KD;
	u_int8_t EQ_gain;
	u_int8_t EQ_bias;
	u_int8_t EQ_adj;

	u_int8_t PR;
	u_int8_t vsel_ldo;
	u_int8_t CMU_SEL_CP;
	u_int8_t PI_CURRENT;

	char *band_name;
} HDMI_PHY_PARAM_T;

typedef struct {
	u_int16_t fvco_upper;
	u_int16_t fvco_lower;
	u_int8_t CMU_KVCO;   //merlin5 remove
	u_int8_t EN_CAP;
	u_int8_t CCO_BAND_SEL;
	u_int8_t PI_ISEL;
	u_int8_t PI_CSEL;
}HDMI_PHY_PARAM2_T;



//HD21 phy structure

#ifdef HD20_FLD_MODE
typedef struct {
	u_int16_t b_upper;
	u_int16_t b_lower;

	//M N code
	u_int16_t M_code;
	u_int16_t N_code;
	u_int8_t PRE_M;  //pre scaler
	u_int8_t POST_M;  //SEL_D4
	
	u_int8_t MANUAL_SEL;
	u_int8_t DATA_LANE_CK_SRC;

	//CCO
	u_int8_t CMU_KVCO;
	u_int8_t EN_CAP;
	u_int8_t BAND_SEL;
	u_int8_t DELAY_CEL_SEL;
	u_int8_t CAP_EN_PLL_MODE;
	u_int8_t CAP_EN_ACDR_MODE;
	u_int8_t CAP_EN_MANUAL_MODE;
	u_int8_t RES_EN_PLL_MODE;
	u_int8_t RES_EN_ACDR_MODE;
	u_int8_t RES_EN_MANUAL_MODE;
	u_int8_t FINE_I_PLL_MODE;
	u_int8_t FINE_I_ACDR_MODE;
	u_int8_t FINE_I_MANUAL_MODE;
	u_int8_t COURSE_I_PLL_MODE;
	u_int8_t COURSE_I_ACDR_MODE;
	u_int8_t COURSE_I_MANUAL_MODE;
	u_int8_t DM_EN_PLL_MODE;
	u_int8_t DM_EN_ACDR_MODE;
	u_int8_t DM_EN_MANUAL_MODE;
	u_int8_t DM_I_PLL_MODE;
	u_int8_t DM_I_ACDR_MODE;
	u_int8_t DM_I_MANUAL_MODE;


	//CHARGE PUMP
	u_int8_t HALF_RATE_SEL;   //icp double
	u_int8_t CP_OP_EN;
	u_int8_t CP_CAP_EN;
	u_int8_t ICP_PLL_MODE;
	u_int8_t ICP_ACDR_MODE;
	u_int8_t CP_TIME;
	u_int8_t CP_TIME_2;

	//LPF
	u_int8_t VC_VOL_SEL;
	u_int8_t RS_PLL_MODE;
	u_int8_t RS_ACDR_MODE;
	u_int8_t RS_MANUAL_MODE;
	u_int8_t CS_PLL_MODE;
	u_int8_t CS_ACDR_MODE;
	u_int8_t CS_MANUAL_MODE;
	u_int8_t CP_PLL_MODE;
	u_int8_t CP_ACDR_MODE;
	u_int8_t CP_MANUAL_MODE;
	

	u_int8_t PI_DIV;
	u_int8_t DEMUX_RATE_SEL;
	u_int8_t RATE_SEL;
	u_int8_t PIX_RATE_SEL;

	u_int8_t PI_ISEL;
	u_int8_t PI_CSEL;
	u_int8_t KP;
	u_int8_t KI;
	u_int8_t FULL_RATE_SEL;
	char *band_name;

} HDMI21_PHY_TMDS_PARAM_T;
#else
typedef struct {
	u_int16_t b_upper;
	u_int16_t b_lower;

	//M N code
	u_int16_t M_code;
	u_int16_t N_code;
	u_int8_t PRE_M;  //pre scaler
	u_int8_t POST_M;  //SEL_D4
	
	u_int8_t MANUAL_SEL;
	u_int8_t DATA_LANE_CK_SRC;

	//CCO
	u_int8_t CMU_KVCO;
	u_int8_t EN_CAP;
	u_int8_t BAND_SEL;
	u_int8_t DELAY_CEL_SEL;
	u_int8_t CAP_EN_MANUAL_MODE;
	u_int8_t RES_EN_MANUAL_MODE;
	u_int8_t FINE_I_MANUAL_MODE;
	u_int8_t COURSE_I_MANUAL_MODE;
	u_int8_t DM_EN_MANUAL_MODE;
	u_int8_t DM_I_MANUAL_MODE;


	//CHARGE PUMP
	u_int8_t HALF_RATE_SEL;   //icp double
	u_int8_t CP_OP_EN;
	u_int8_t CP_CAP_EN;
	u_int8_t ICP_PLL_MODE;

	//LPF
	u_int8_t VC_VOL_SEL;
	u_int8_t RS_MANUAL_MODE;
	u_int8_t CS_MANUAL_MODE;
	u_int8_t CP_MANUAL_MODE;
	
	
	u_int8_t PI_DIV;
	u_int8_t DEMUX_RATE_SEL;
	u_int8_t RATE_SEL;
	u_int8_t PIX_RATE_SEL;

	u_int8_t PI_ISEL;
	u_int8_t PI_CURRENT_ADJ;
	u_int8_t PI_CSEL;
	u_int8_t KP;
	u_int8_t KI;
	u_int8_t FULL_RATE_SEL;	
	char *band_name;
} HDMI21_PHY_TMDS_PARAM_T;
#endif



typedef struct {
	u_int16_t b_upper;
	u_int16_t b_lower;

	//M N code
	u_int16_t M_code;
	u_int16_t N_code;
	u_int8_t PRE_M;  //pre scaler
	u_int8_t POST_M;  //SEL_D4
	
	u_int8_t MANUAL_SEL;
	u_int8_t DATA_LANE_CK_SRC;

	//CCO
	u_int8_t CMU_KVCO;
	u_int8_t EN_CAP;
	u_int8_t BAND_SEL;
	u_int8_t DELAY_CEL_SEL;
	u_int8_t CAP_EN_PLL_MODE;
	u_int8_t CAP_EN_ACDR_MODE;
	u_int8_t CAP_EN_MANUAL_MODE;
	u_int8_t RES_EN_PLL_MODE;
	u_int8_t RES_EN_ACDR_MODE;
	u_int8_t RES_EN_MANUAL_MODE;
	u_int8_t FINE_I_PLL_MODE;
	u_int8_t FINE_I_ACDR_MODE;
	u_int8_t FINE_I_MANUAL_MODE;
	u_int8_t COURSE_I_PLL_MODE;
	u_int8_t COURSE_I_ACDR_MODE;
	u_int8_t COURSE_I_MANUAL_MODE;
	u_int8_t DM_EN_PLL_MODE;
	u_int8_t DM_EN_ACDR_MODE;
	u_int8_t DM_EN_MANUAL_MODE;
	u_int8_t DM_I_PLL_MODE;
	u_int8_t DM_I_ACDR_MODE;
	u_int8_t DM_I_MANUAL_MODE;


	//CHARGE PUMP
	u_int8_t HALF_RATE_SEL;   //icp double
	u_int8_t CP_OP_EN;
	u_int8_t CP_CAP_EN;
	u_int8_t ICP_PLL_MODE;
	u_int8_t ICP_ACDR_MODE;
	u_int8_t CP_TIME;
	u_int8_t CP_TIME_2;

	//LPF
	u_int8_t VC_VOL_SEL;
	u_int8_t RS_PLL_MODE;
	u_int8_t RS_ACDR_MODE;
	u_int8_t RS_MANUAL_MODE;
	u_int8_t CS_PLL_MODE;
	u_int8_t CS_ACDR_MODE;
	u_int8_t CS_MANUAL_MODE;
	u_int8_t CP_PLL_MODE;
	u_int8_t CP_ACDR_MODE;
	u_int8_t CP_MANUAL_MODE;
	

	u_int8_t PI_DIV;
	u_int8_t DEMUX_RATE_SEL;
	u_int8_t RATE_SEL;
	u_int8_t PIX_RATE_SEL;

	u_int8_t PI_ISEL;
	u_int8_t PI_CSEL;
	u_int8_t KP;
	u_int8_t KI;
	u_int8_t FULL_RATE_SEL;
	char *band_name;
} HDMI21_PHY_FRL_PARAM_T;



typedef struct {
	u_int16_t fvco_upper;
	u_int16_t fvco_lower;
	u_int8_t CMU_KVCO;
	u_int8_t EN_CAP;
	u_int8_t CCO_BAND_SEL;
	u_int8_t PI_ISEL;
	u_int8_t PI_CURRENT_ADJ;
	u_int8_t PI_CSEL;
	u_int8_t FINE_I;
	u_int8_t COURSE_I;
}HDMI21_PHY_TMDS_PARAM2_T;


typedef struct {
	u_int16_t b_upper;
	u_int16_t b_lower;
	u_int8_t RLSEL_LEQ;
	u_int8_t RLSEL_LEQ1_NC1;
	u_int8_t RLSEL_LEQ1_NC2;
	u_int8_t RLSEL_TAP0;
	u_int8_t RSSEL_LEQ2;
	u_int8_t RSSEL_LEQ1_1;
	u_int8_t RSSEL_LEQ1_2;
	u_int8_t RSSEL_TAP0;
	u_int8_t LEQ_CURRETN_ADJ;
	u_int8_t LEQ_ISEL;
	u_int8_t LE_PTAT_ISEL;
	u_int8_t TAP0_ISEL;
	u_int8_t POW_PTAT;
	u_int8_t POW_PTAT_STAGE1;
	u_int8_t DFE_Bleed;
}HDMI21_EQ_PARAM_T;


typedef struct {
	//Phase I
	u_int16_t b_upper;
	u_int16_t b_lower;
	u_int8_t vco_fine_init;
	u_int8_t vco_coarse_init;
	u_int8_t divide_num;
	u_int16_t coarse_lock_up_limit;
	u_int16_t coarse_lock_dn_limit;

	//phase II
	u_int16_t lock_up_limit;
	u_int16_t lock_dn_limit;

}HDMI21_FLD_PARAM_T;


typedef struct {
	unsigned int b_upper;
	unsigned int b_lower;
	unsigned int lock_up_limit; /*FLD upper bound*/
	unsigned int lock_dn_limit; /*FLD lower bound*/
	unsigned char cdr_bw_icp;
	unsigned char lfrs_sel;
	unsigned char vcogain;
	unsigned char hr_pd;
	unsigned char rate_sel;
} HDMI_ACDR_T;




#if 1//#ifdef HDMI_PHY_APPLY_NEW_METHOD
typedef struct
{
	unsigned char ucCDR_Reset;
	unsigned char ucDFE_DFE_Adapt_Start;
	unsigned char ucDFE_DFE_Adapt_3G_ReStart;
	unsigned char ucDFE_DFE_Adapt_6G_ReStart;
}HDMI_PHY_APPLY_PARAM_T;

typedef enum {
	HDMI_PHY_APPLY_NONE = 0,
	HDMI_PHY_APPLY_CDR_RESET,
	HDMI_PHY_APPLY_DFE_ADAPT_START,
	HDMI_PHY_APPLY_3G_DFE_ADAPT_RE_START,
	HDMI_PHY_APPLY_6G_DFE_ADAPT_RE_START,
	HDMI_PHY_APPLY_UNKNOW,
}  HDMI_PHY_APPLY_T;
#endif //#ifdef HDMI_PHY_APPLY_NEW_METHOD


#if 1//#if HDCP_STATUS_CHECK_ENABLE
/*
0x001: unauthenticated
0x002: compute km
0x004: compute L'
0x008: compute ks
0x010: authenticated
0x020: wait for downstream
0x040: assemble receiver ID list
0x080: verify receiver ID list acknowledgement
0x100: content stream management
0x200: content stream management from wait for downstream which has not been done
0x400: content stream management from assemble receiver ID list which has not been done
0x800: content stream management from verify receiver ID list acknowledgement which has not been done
*/

typedef enum {
	HDMI_HDCP_2P2_UNAUTH = 0x001,
	HDMI_HDCP_2P2_COMPUTE_KM = 0x002,
	HDMI_HDCP_2P2_COMPUTE_LP = 0x004,
	HDMI_HDCP_2P2_COMPUTE_KS = 0x008,
	HDMI_HDCP_2P2_AUTHENTICATED = 0x010,
	HDMI_HDCP_2P2_WAIT_FOR_DOWNSTREAM = 0x020,
	HDMI_HDCP_2P2_ASSEMBLE_RX_ID_LIST = 0x040,
	HDMI_HDCP_2P2_VERIFY_RX_ID_LIST_ACK = 0x080,
	HDMI_HDCP_2P2_CONTENT_STREAM_MANAGEMENT = 0x100,
	HDMI_HDCP_2P2_CONTENT_STREAM_MANAGEMENT_2 = 0x200,
	HDMI_HDCP_2P2_CONTENT_STREAM_MANAGEMENT_3 = 0x400,
	HDMI_HDCP_2P2_CONTENT_STREAM_MANAGEMENT_4 = 0x800,
	HDMI_HDCP_2P2_CONTENT_UNKNOW,
}  HDMI_HDCP_2P2_STATUS_T;

typedef enum {
	HDMI_HDCP_TOGGLE_NONE = 0,
	HDMI_HDCP_TOGGLE_INIT,
	HDMI_HDCP_TOGGLE_ENABLE,
	HDMI_HDCP_TOGGLE_EXIT,
	HDMI_HDCP_TOGGLE_UNKNOW,
}  HDMI_HDCP_TOGGLE_STATUS_T;
#endif //#if HDCP_STATUS_CHECK_ENABLE







// -------------------------------------  HdmiHdmi ----------------------------------------------//

typedef enum {

	HDMIRX_DETECT_FAIL = 0,
	HDMIRX_DETECT_SUCCESS,
	HDMIRX_DETECT_AVMUTE,
	HDMIRX_CHECK_MODE,
	HDMIRX_RELEASED,

} HDMIRX_APSTATUS_T;

typedef struct {
	unsigned char SM;
	unsigned char SN;
	unsigned char RatioM;
	unsigned char RatioN;
} VIDEO_DPLL_RATIO_T;



typedef struct {
	unsigned char dpll_M;
	unsigned char dpll_N;
	unsigned char dpll_IP;
	unsigned char dpll_RS;
}VIDEO_DPLL_FIX_T;



typedef struct {
	unsigned char min_M;
	unsigned char max_M;
	unsigned char dpll_IP;
	unsigned char dpll_RS;

} VIDEO_DPLL_RANGE_T;


typedef enum {
	HDMI_SMT_PATH_MAIN_VGIP = 0,
	HDMI_SMT_PATH_SUB_VGIP,
	HDMI_SMT_PATH_DMA_VGIP,
	HDMI_SMT_PATH_UNKNOW,
} HDMI_SMT_PATH;

#if 0

typedef struct
{
    unsigned char   VSIF_TypeCode;
    unsigned char   VSIF_Version;
    unsigned char   Length;
    unsigned char   Reg_ID[3];
    unsigned char   Payload[25];
}HDMI_VSI_T;

typedef struct
{
    unsigned char type_code;
    unsigned char ver;
    unsigned char len;
    unsigned int    S:2;
    unsigned int    B:2;
    unsigned int    A:1;
    unsigned int    Y:3;
    unsigned int    R:4;
    unsigned int    M:2;
    unsigned int    C:2;
    unsigned int    SC:2;
    unsigned int    Q:2;
    unsigned int    EC:3;
    unsigned int    ITC:1;
    unsigned int    VIC:8;
    unsigned int    PR:4;
    unsigned int    CN:2;
    unsigned int    YQ:2;
    unsigned char   ETB07_00;
    unsigned char   ETB15_08;
    unsigned char   SBB07_00;
    unsigned char   SBB15_08;
    unsigned char   ELB07_00;
    unsigned char   ELB15_08;
    unsigned char   SRB07_00;
    unsigned char   SRB15_08;
}HDMI_AVI_T;

typedef struct
{
    unsigned char   type_code;
    unsigned char   ver;
    unsigned char   len;
    unsigned char   VendorName[8];
    unsigned char   ProductDesc[16];
    unsigned char   SourceInfo;
}HDMI_SPD_T;

typedef struct
{
    unsigned char type_code;
    unsigned char ver;
    unsigned char len;
    unsigned int    CC:3;
    unsigned int    F13:1;
    unsigned int    CT:4;
    unsigned int    SS:2;
    unsigned int    SF:3;
    unsigned int    F27_25:3;
    unsigned int    CXT:5;
    unsigned int    F37_35:3;
    unsigned int    CA:8;
    unsigned int    LFEPBL:2;
    unsigned int    F52:1;
    unsigned int    LSV:4;
    unsigned int    DM_INH:1;
    unsigned char   F67_60;
    unsigned char   F77_70;
    unsigned char   F87_80;
    unsigned char   F97_90;
    unsigned char   F107_100;
}HDMI_AUDIO_T;

typedef struct
{
        unsigned char type_code;
        unsigned char ver;
        unsigned char len;
        unsigned char  eEOTFtype;
        unsigned char  eMeta_Desc;
        unsigned short display_primaries_x0;
        unsigned short display_primaries_y0;
        unsigned short display_primaries_x1;
        unsigned short display_primaries_y1;
        unsigned short display_primaries_x2;
        unsigned short display_primaries_y2;
        unsigned short white_point_x;
        unsigned short white_point_y;
        unsigned short max_display_mastering_luminance;
        unsigned short min_display_mastering_luminance;
        unsigned short maximum_content_light_level;
        unsigned short maximum_frame_average_light_level;
		unsigned char  reserved;
}__attribute__((packed)) HDMI_DRM_T;
#endif





typedef struct {

	unsigned int v_total;
	unsigned int h_total;
	unsigned int v_act_len;
	unsigned int h_act_len;
	unsigned int v_act_sta;
	unsigned int h_act_sta;
	unsigned int v_freq;
	unsigned int h_freq;
	unsigned int polarity;
	unsigned int mode_id;
	unsigned int modetable_index;
	unsigned char is_interlace;
	unsigned int IVSyncPulseCount;	//Input VSYNC High Period Measurement Result
	unsigned int IHSyncPulseCount;	//Input HSYNC High Period Measurement Result

	HDMI_DVI_MODE_T 	mode;
	HDMI_COLOR_DEPTH_T colordepth;
	HDMI_COLOR_SPACE_T colorspace;
	HDMI_COLORIMETRY_T  colorimetry;
	unsigned char pixel_repeat;

	HDMI_HVF_E hvf;
	HDMI_3D_T h3dformat;

	unsigned int tmds_clk_b;
	unsigned long pll_pixelclockx1024;

	// only for fram packing
	unsigned int v_active_space1;
	unsigned int v_active_space2;
	unsigned char avi_vic;
	unsigned char run_vrr;
} HDMI_TIMING_T;




typedef enum _HDMI_PORT_{
	HDMI_PORT0 = 0,
	HDMI_PORT1,
	HDMI_PORT2,
	HDMI_PORT3,
	HDMI_PORT_TOTAL_NUM
}HDMI_PORT_E;


typedef enum {
	MAIN_FSM_HDMI_WAIT_SYNC,
	MAIN_FSM_HDMI_SETUP_VEDIO_PLL,
	MAIN_FSM_HDMI_MEASURE,
	MAIN_FSM_HDMI_MEASURE_ACTIVE_SPACE,
	MAIN_FSM_HDMI_WAIT_READY,
	MAIN_FSM_HDMI_DISPLAY_ON,
	MAIN_FSM_HDMI_VIDEO_READY
} HDMI_MAIN_FSM_T;


typedef enum {
	AUDIO_FSM_AUDIO_START = 0,
	AUDIO_FSM_FREQ_DETECT,
	AUDIO_FSM_AUDIO_WAIT_TO_START,
	AUDIO_FSM_AUDIO_START_OUT,
	AUDIO_FSM_AUDIO_WAIT_PLL_READY,
	AUDIO_FSM_AUDIO_CHECK
} HDMI_AUDIO_FSM_T;


typedef enum {
	AUDIO_FORMAT_DVI          = 0,
	AUDIO_FORMAT_NO_AUDIO     = 1,
	AUDIO_FORMAT_PCM          = 2,
	AUDIO_FORMAT_AC3          = 3,
	AUDIO_FORMAT_DTS          = 4,
	AUDIO_FORMAT_AAC          = 5,
	AUDIO_FORMAT_DEFAULT      = 6,
	AUDIO_FORMAT_MPEG         = 10,
	AUDIO_FORMAT_DTS_HD_MA	  = 11,
	AUDIO_FORMAT_DTS_EXPRESS  = 12,
	AUDIO_FORMAT_DTS_CD       = 13,
	AUDIO_FORMAT_EAC3         = 14,
	AUDIO_FORMAT_EAC3_ATMOS   = 15,
	AUDIO_FORMAT_MAT          = 16,
	AUDIO_FORMAT_MAT_ATMOS    = 17,
	AUDIO_FORMAT_TRUEHD       = 18,
	AUDIO_FORMAT_TRUEHD_ATMOS = 19,
} HDMI_AUDIO_FORMAT_T;

typedef enum {
	HDMI_MS_ONESHOT = 0,
	HDMI_MS_CONTINUOUS,
	HDMI_MS_DIRECT
} HDMI_MS_T;

typedef enum
{
	HDMI_IPCHECK_PROGRESSIVE = 0,
	HDMI_IPCHECK_INTERLACE,
	HDMI_IPCHECK_VSYNC_NO_CHANGED
}HDMI_INT_PRO_CHECK_RESULT;

#if 1//#if HDMI_TOGGLE_HPD_Z0_ENABLE
typedef enum _HDMI_DC_ON_STATE_{
	HDMI_DC_ON_NONE = 0,
	HDMI_DC_ON_ENABLE_DELAY,
	HDMI_DC_ON_START_TIME,
	HDMI_DC_ON_FINISH,
	HDMI_DC_ON_UNKNOW
}HDMI_DC_ON_STATE_E;
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE

#if 1//#if HDMI_STR_TOGGLE_HPD_ENABLE
typedef enum _HDMI_STR_HPD_TOGGLE_STATE_{
	HDMI_STR_HPD_TOGGLE_NONE = 0,
	HDMI_STR_HPD_TOGGLE_ENTER,
	HDMI_STR_HPD_TOGGLE_READY,
	HDMI_STR_HPD_TOGGLE_UNKNOW,
}HDMI_STR_HPD_TOGGLE_STATE_E;
#endif //#if HDMI_STR_TOGGLE_HPD_ENABLE

#if 1//#if HDMI_DISPLAY_DELAY_ENABLE
typedef enum _HDMI_DISPLAY_DELAY_STATE_{
	HDMI_DISPLAY_DELAY_NONE = 0,
	HDMI_DISPLAY_DELAY_INIT,
	HDMI_DISPLAY_DELAY_START,
	HDMI_DISPLAY_DELAY_FINISH,
}HDMI_DISPLAY_DELAY_STATE_STATE_E;
#endif //#if HDMI_DISPLAY_DELAY_ENABLE

typedef enum {
	HDMI_HDR_EMP_RX_MODE_CTA861_G_HDR_EMP = 0,
	HDMI_HDR_EMP_RX_MODE_DOLBY_VISION_VSEM = 1,
}HDMI_HDR_EMP_RX_MODE_E;

typedef struct {
	// ACR
	struct {    
		unsigned int  n;
		unsigned int  cts; 
		unsigned int  b;    // tmds clock freq = b * 27000000 / 256
		unsigned int  acr_freq;
	}acr_info;

	// Audio info
	HDMI_AUDIO_FORMAT_T coding_type; // 0=pcm; 1=nonpcm
	unsigned char channel_mode;
	unsigned char channel_num;
	unsigned char sr_mismatch_cnt;
	unsigned char track_mode_tgl;
	unsigned int  audio_sample_cnt;
	unsigned int  hbr_audio_sample_cnt;
	unsigned int  fifo_ov;
	unsigned int  no_audio_cnt;
	unsigned int wait_acr_cnt; // 0: get acr on time, >0: no acr
} HDMI_AUDIO_ST;

typedef struct
{
	unsigned char interlace : 1;     // video is progressive or interlace
	unsigned char vs_locked : 7;     // vsync is stable (2 vsync freq is the same)
	unsigned char vs_valid;          // vsync is valid
	unsigned char vs_pol :1;         // vsync polarity : 0 : negative, 1 : positive
	unsigned char vs_pol_stable :7;  // vsync stable count (increase when vs_pol is stable)
	unsigned int last_vs_cnt;          //last  number of vs detected
	unsigned int  vs_cnt;            // number of vs detected
	unsigned char last_interlace_status[3];
	unsigned char is_interlace_chg;

	// for ps measure
	unsigned char ps_measure_update;
	unsigned char ps_measure_stable_cnt;  // number of ps_measure result is stable
	unsigned int  vs2vs_cnt;
	unsigned int  last_pixel2vs_cnt;
} HDMI_VIDEO_ST;

#define VS_CNT_TO_VFREQ_0P1_HZ(vs2vs_cnt)             (270000000/vs2vs_cnt)

typedef struct {

	unsigned char hdmi_2p1_en;   // 0 : hdmi 2.0 mac, others : hdmi 2.1 mac
	
#ifdef HDMI_FIX_RL6583_2215
	unsigned char hdmi_2p1_fw_pol_check_cnt;
	unsigned char hdmi_2p1_vs_pol;
#endif

	unsigned char run_dsc;    // 0: do not run dsc flow, 1: run dsc flow
	HDMI_PHY_PARAM_T phy_param_t;

	HDMI_TIMING_T timing_t;
	HDMI_AUDIO_ST audio_t;
	HDMI_VIDEO_ST video_t;

	HDMI_AVI_T avi_t;
	HDMI_VSI_T vsi_t;       // HDMI-VSIF (1.4)/  HDMI-Forum VSIF HDMI (2.0)
	HDMI_VSI_T dvsi_t;      // Dolby VSIF
	HDMI_VSI_T hdr10pvsi_t;      // HDR10+, VSIF packet
	
	HDMI_SPD_T spd_t;
	HDMI_AUDIO_T audiopkt_t;
	HDMI_DRM_T drm_t;
	unsigned int  pkt_cnt;
	unsigned char no_avi_cnt;
	unsigned char err_avi_cnt;
	unsigned char no_vsi_cnt;
	unsigned char no_spd_cnt;
	unsigned char err_spd_cnt;
	unsigned char no_audiopkt_cnt;
	unsigned char no_drm_cnt;
	unsigned char no_rsv2_cnt;
	unsigned char no_hdr10pvsi_cnt;

	// EMP
	HDMI_HDR_EMP_RX_MODE_E hdr_emp_mode;
	unsigned int  vtem_emp_cnt;
	unsigned int  no_vtem_emp_cnt;
	unsigned int  hdr_emp_cnt;
	unsigned int  vsem_emp_cnt;
	unsigned int  dolby_vsem_emp_cnt : 24;
	unsigned int  no_dolby_vsem_emp_cnt : 8;
	unsigned int  cvtem_emp_cnt;
	unsigned char vtem_emp[EM_VTEM_INFO_LEN];
	unsigned char hdr_emp[MAX_EM_HDR_INFO_LEN];
	unsigned char vsem_emp[EM_VSEM_INFO_LEN];
	unsigned char dolby_vsem[MAX_EM_HDR_INFO_LEN]; // here we use hdr em to receive dolby vsem
	unsigned char cvtem_emp[EM_CVTEM_INFO_LEN];

	HDMI_MAIN_FSM_T video_fsm;
	HDMI_AUDIO_FSM_T audio_fsm;

	// Power Saving
	unsigned char ps_wakeup_request;                // for FW to request to wakeup from power saving state
	#define PS_WAKEUP_5V_DET_CHANGE     (0x1<<0)    // wakeup by 5V status change
	#define PS_WAKEUP_HPD_CHANGE        (0x1<<1)    // wakeup by HPD status change    
	#define PS_WAKEUP_CLOCK_UNSTABLE    (0x1<<2)    // wakeup by Clock Stable
	#define PS_WAKEUP_HDCP_REQUEST      (0x1<<3)    // wakeup by HDCP authentication
	#define PS_WAKEUP_SCDC_TMDS_CFG     (0x1<<4)    // wakeup by SCDC
	#define PS_WAKEUP_SCDC_FRL_REQUEST  (0x1<<5)    // wakeup by SCDC FRL
	#define PS_WAKEUP_ACTIVE_SOURCE     (0x1<<6)    // wakeup by Source Selection (source has been selected as a active source)
	#define PS_WAKEUP_IMMEDIATELY       (0x1<<7)    // wakeup by Immediately

	HDMI_POWER_SAVEING_FSM_T ps_fsm;
	unsigned int  signal_stable_cnt;
	unsigned int  ps_fsm_sub_state;
	unsigned int  ps_round;

	// HDMI 2.0 related
	unsigned char scramble_flag;
	unsigned char clock40x_flag;
	unsigned char hdmi2p0_tmds_toggle_flag;
	unsigned int  hdmi2p0_tmds_scdc_config_update_count;    // number of SCDC TMDS config update detected
	unsigned int  hdmi2p0_tmds_scramble_off_sync;           // number of SCDC TMDS scramble off/sync

	// HDCP related
	HDMI_HDCP_ST  hdcp_status;      // hdcp related information

	unsigned char cable_conn;	// 5V or not
#if HDMI_WAIT_INFOFRAME_ENABLE
	unsigned char cable_conn_is_first_measured_flag;	////Identity connected first for measure timing., Set TRUE when Connected,then clear when first Vidoe FSM =displayok.
#endif

	unsigned char meas_retry_cnt;
	unsigned char meas_confirm_vic_cnt;
	unsigned char onlinemeasure_error;
	unsigned int fw_char_error[4];
	unsigned int fw_bit_error[4];
	unsigned int fw_bit_disp_error_detected; // 2.0: fw bit error, 2.1: disparity error
	unsigned char wait_hdcp14;
	unsigned char wait_avi;
	unsigned char wait_spd;

	//----------------------------------
	// error detector
	//----------------------------------
	unsigned int  hpd_recover_cnt;
	unsigned int  reset_phy_recover_cnt;
	unsigned long err_msg_display_timeout;

	// TMDS Async fifo error detection
	unsigned int  rgb_detect;
	unsigned int  rgb_async_fifo_error;
	unsigned int  rgb_async_fifo_error_timeout;

	// TMDS Channel fifo error detection
	unsigned int  rgb_de_align : 4;
	unsigned int  rgb_de_align_cnt : 28;
	unsigned int  ch_fifo_error;
	unsigned int  ch_fifo_error_tomeout;

	// BCH error detection
	unsigned int  bch_err_detect : 4;
	unsigned int  bch_err_cnt_continue : 28;
	unsigned int  bch_err_cnt;
	unsigned int  bch_1bit_err_cnt;    // for debugging

	// Packet detection
	unsigned int  pkt_cnt_prev;        // for no packet detection
	unsigned int  no_pkt_continue;     // number of frame that not receiving packet (reseted when packet received)
	unsigned int  no_pkt_and_vsync_unstable_continue;

	unsigned char tmds_clk_stable_cnt;
	unsigned char tmds_clk_stable_cnt_thd;
} HDMI_PORT_INFO_T;


typedef enum
{
	HDMI_DETECT_INIT_SOURCE = 0x1,
	HDMI_DETECT_DISCONNECT_SOURCE = (0x1 <<1),
	HDMI_DETECT_HPD_RESET = (0x1<<2),
	HDMI_DETECT_NO_5V_RESET =  (0x1<<3),
	HDMI_DETECT_ONMS_QUICK_RESET = (0x1<<4),
	HDMI_DETECT_ONMS_FULLY_RESET = (0x1<<5),
	HDMI_DETECT_PHY_RESET = (0x1<<6),
	HDMI_DETECT_PWR_WAKEUP_RESET = (0x1<<7),
	HDMI_DETECT_BCH_ERR_IRQ_HAPPENED = (0x1<<8),
	HDMI_DETECT_AVMUTE_IRQ_HAPPENED= (0x1<<9),
	HDMI_DETECT_CONDITION_CHANGE = (0x1<<10),
	HDMI_DETECT_FRL_MODE_CHANGE = (0x1<<11),
	HDMI_DETECT_TMDS_CONFIG_CHANGE = (0x1<<12),
	HDMI_DETECT_PHY_CLOCK_STABLE = (0x1<<13)
}HDMI_DETECT_EVENT_ID;

typedef enum
{
	HDMI_EVENT_ACTION_NONE = 0x0,
	HDMI_EVENT_ACTION_RESET_TO_WAIT_SYNC = 0x1,
	HDMI_EVENT_ACTION_RESET_TO_SETUP_PLL = (0x1<<1),
	HDMI_EVENT_ACTION_QUICK_RESET_TO_WAIT_SYNC = (0x1<<2),    // PHY STABLE, Quick bypass wait sync
}HDMI_DETECT_EVENT_ACTION;

#define DETECT_FSM_HISTROY_SIZE    10
typedef struct
{
	HDMI_DETECT_EVENT_ID fsm_event_status;
	HDMI_DETECT_EVENT_ACTION execute_action;
	HDMI_MAIN_FSM_T last_fsm;
	HDMI_MAIN_FSM_T fsm_history[DETECT_FSM_HISTROY_SIZE];
	unsigned int fsm_chg_time_ms[DETECT_FSM_HISTROY_SIZE];
	unsigned int history_top_index;
}HDMI_DETECT_CONFIG_ST;

extern HDMI_DETECT_CONFIG_ST g_detect_fsm_status[4];

#define SET_HDMI_DETECT_EVENT(port, event)	(g_detect_fsm_status[port].fsm_event_status |= event)
#define RESET_HDMI_DETECT_EVENT_STATUS(port)	(g_detect_fsm_status[port].fsm_event_status = 0)
#define RESET_HDMI_DETECT_EVENT_ACTION(port)	(g_detect_fsm_status[port].execute_action = 0)


#define EVENT_NAME_MAX_LENGTH	32
typedef struct
{
     const HDMI_DETECT_EVENT_ID event_id;
     HDMI_DETECT_EVENT_ACTION event_action;
     const char event_name[EVENT_NAME_MAX_LENGTH];
}HDMI_DETECT_EVENT_TABLE_ST;

typedef struct{
	unsigned int h_act;
	unsigned int v_act; 
	unsigned int h_tol;
	unsigned int v_tol;
}HDMI_TIMING_TABLE_T;

typedef enum {
	ACKG = 0,
	SPD_INFO,
	DRM_INFO,
	FVS,
	GM,
	VS_INFO,
	MPEG_INFO,
	ISRC2,
	ISRC1,
	ACP,
	AUDIO_INFO,
	AVI_INFO,
	ALL_PKT
} HDMI_PACKET_CONTENT_CLR;

typedef enum
{
	HDMI_GCP_ERROR,		// 0x00000001
	HDMI_HDCP22_REAUTH,	// 0x00000002
	HDMI_TMDS_ERROR,		// 0x00000004
	HDMI_PHY_LOW_RANGE,	// 0x00000008
	HDMI_PHY_ABNORMAL,	// 0x00000010
	HDMI_CED_ERROR,		// 0x00000020
	HDMI_AUDIO_BUFFER,	// 0x00000040
	HDMI_UNSTABLE_SYNC,	// 0x00000080
	HDMI_ERROR_MAXNUM,
}HDMI_ERROR_TYPE_T;

typedef enum
{
	HDMI_CONDITION_CHG_NONE,
	HDMI_CONDITION_CHG_RESET_VIDEO_PLL,
	HDMI_CONDITION_CHG_RESET_PHY,
}HDMI_CONDITION_CHG_TYPE;
/**********************************************************************************************
*
*	Variables
*
**********************************************************************************************/
extern const VIDEO_DPLL_RATIO_T dpll_ratio[];

extern const HDMI_ACTIVE_SPACE_TABLE_T hdmi_active_space_table[];









/**********************************************************************************************
*
*	External Funtion Declarations
*
**********************************************************************************************/
#include <rtk_gpio.h>

typedef struct 
{
    unsigned char   ddc_channel;
    RTK_GPIO_ID     hpd;
    RTK_GPIO_ID     det_5v;
}HDMI_PORT_CONFIG;

// -------------------------------------  hdmiHdmi ----------------------------------------------//
extern void newbase_hdmi_init(void);
extern void newbase_hdmi_uninit(void);
extern void newbase_hdmi_init_source(unsigned char port);
extern void newbase_hdmi_release_source(unsigned char port);
extern void newbase_hdmi_disconnect_source(unsigned char port, unsigned char fully_reset);

void newbase_hdmi_port_select(unsigned char port, unsigned char frl_mode);

extern void newbase_hdmi_port_var_init_all(void);
extern void newbase_hdmi_port_var_init(unsigned char port, unsigned char fully_reset);

extern unsigned char newbase_hdmi_detect_mode(unsigned char port);
extern HDMI_CONDITION_CHG_TYPE newbase_hdmi_check_condition_change(unsigned char port);
extern unsigned char newbase_hdmi_wait_sync(unsigned char port, unsigned char frl_mode);
extern unsigned char newbase_hdmi_setup_video_pll(unsigned char port, unsigned char frl_mode);
extern unsigned char newbase_hdmi_measure(unsigned char port, unsigned char frl_mode);
extern unsigned char newbase_hdmi_display_on(unsigned char port, unsigned char frl_mode);
extern unsigned char newbase_hdmi_video_ready(unsigned char port, unsigned char frl_mode);
extern unsigned char newbase_hdmi_check_mode(void);
extern unsigned char newbase_hdmi_vic_correction(unsigned char port, HDMI_TIMING_T *tm, unsigned char force_assign_tm);



extern void newbase_hdmi_reset_video_state(unsigned char port);
extern unsigned char newbase_hdmi_get_video_state(unsigned char port);
extern void newbase_hdmi_reset_meas_counter(unsigned char port);

extern void newbase_hdmi_check_crc_0(unsigned char nport);

extern unsigned char newbase_hdmi_is_run_dsc(unsigned char port);
extern void newbase_hdmi2p0_check_tmds_config(unsigned char port);
extern unsigned char newbase_hdmi2p0_get_scramble_flag(unsigned char port);
extern unsigned char newbase_hdmi2p0_get_clock40x_flag(unsigned char port);
extern unsigned char newbase_hdmi2p0_get_tmds_toggle_flag(unsigned char port);
extern unsigned int  newbase_hdmi2p0_get_tmds_update_cnt(unsigned char port);
extern void newbase_hdmi2p0_detect_config(unsigned char port);
extern void newbase_hdmi2p0_reset_scdc_toggle(unsigned char port);
extern void newbase_hdmi2p0_inc_scdc_toggle(unsigned char port);




extern void newbase_hdmi_set_current_display_port(unsigned char port);
extern unsigned char newbase_hdmi_get_current_display_port(void);

extern void _lock_timing_detect_sem(void);
extern void _unlock_timing_detect_sem(void);

extern unsigned char newbase_hdmi_get_timing(unsigned char port, HDMI_TIMING_T *ptiming);
extern unsigned char newbase_hdmi_get_hvstart(unsigned char port, HDMI_TIMING_T *ptiming, unsigned char vsc_ch);
extern unsigned char newbase_hdmi_get_is_interlace(unsigned char port);
extern HDMI_INT_PRO_CHECK_RESULT newbase_hdmi_get_is_interlace_reg(unsigned char port, unsigned char frl_mode, HDMI_MS_T ms_mode);
extern unsigned char newbase_hdmi_get_is_interlace_change(unsigned char port, unsigned char frl_mode);
extern unsigned char newbase_hdmi_get_hdmi_mode_reg(unsigned char port);
extern unsigned char newbase_hdmi_get_hdmi_mode(unsigned char port);
extern unsigned char newbase_hdmi_get_colordepth(unsigned char port);
extern unsigned char newbase_hdmi_get_colorspace_reg(unsigned char port);
extern unsigned char newbase_hdmi_get_colorspace(unsigned char port);
extern unsigned char newbase_hdmi_get_video_format_reg(unsigned char port);
extern unsigned char newbase_hdmi_get_video_format(unsigned char port);
extern unsigned char newbase_hdmi_get_3d_structure_reg(unsigned char port);
extern unsigned char newbase_hdmi_get_3d_structure(unsigned char port);
extern unsigned char newbase_hdmi_get_colorimetry(unsigned char port);
extern unsigned char newbase_hdmi_get_color_range(unsigned char port);
extern unsigned int newbase_hdmi_get_tmds_clockx10(unsigned char port);
extern unsigned int newbase_hdmi_get_pixelclock(unsigned int htotal , unsigned int vtotal , unsigned int vfreq , unsigned char cd);
extern unsigned char newbase_hdmi_get_online_measure_error_flag(unsigned char port);
extern void newbase_hdmi_set_online_measure_error_flag(unsigned char port, unsigned char flag);
extern unsigned char newbase_hdmi_check_data_link_status(unsigned char port);

// Configurations
extern void newbase_hdmi_save_pcbinfo(unsigned char port, const HDMI_CHANNEL_T_PCB_INFO *pcb);
extern void newbase_hdmi_init_pcbinfo(void);
extern int newbase_hdmi_ddc_channel_status(unsigned char port , unsigned char *ddc_ch );
extern HDMI_CHANNEL_T*  newbase_hdmi_get_pcbinfo(unsigned int port);
extern char newbase_hdmi_get_arc_port_index(void);
extern char newbase_hdmi_get_earc_port_index(void);
extern char newbase_hdmi_get_pcb_earc_port(void);

// HDP & 5V DET related
extern unsigned char newbase_hdmi_get_5v_state(unsigned char port);
extern void newbase_hdmi_set_hpd(unsigned char nport, unsigned char high);
extern unsigned char newbase_hdmi_get_hpd(unsigned char nport);
extern void newbase_hdmi_set_hpd_low_delay(unsigned int delay_timer);
extern unsigned int  newbase_hdmi_get_hpd_low_delay(void);
extern void newbase_hdmi_set_str_hpd_low_ms(unsigned int delay_timer);
extern unsigned int  newbase_hdmi_get_str_hpd_low_ms(void);
extern void newbase_hdmi_enable_hpd_with_delay(unsigned int customer_delay_time, unsigned char port);
extern void newbase_hdmi_enable_hpd(unsigned char port);
extern void newbase_hdmi_cancel_delayed_hpd(void);
extern void newbase_hdmi_check_connection_state(unsigned char port);

// Error Detect
extern void newbase_hdmi_error_handler(unsigned char port);
extern int  newbase_hdmi_get_ps_measure_status(unsigned char nport, unsigned int* p_vs2vs_cycle, unsigned int* p_last_pixel2vs, unsigned int* p_stable_cnt);

// Video monitor
extern void newbase_hdmi_video_monitor(unsigned char port);
extern void newbase_hdmi_video_crc_monitor_en(unsigned char enable);
extern unsigned char newbase_hdmi_is_video_crc_monitor_enable(void);
extern void newbase_hdmi_video_set_crc_monitor_interval(unsigned int polling_interval);
extern unsigned int newbase_hdmi_get_video_crc_monitor_interval(void);

// PHY related
extern unsigned char newbase_hdmi_phy_port_status(unsigned char port);

// HDMI Power Control
extern void newbase_hdmi_output_disable(unsigned char on);
extern unsigned char newbase_hdmi_is_output_disable(void);
extern unsigned char newbase_hdmi_is_display_ready(void);

// HDCP related
// Info frame related
#include "hdmi_info_packet.h"

extern unsigned char newbase_hdmi_get_hdmi_mode_infoframe(unsigned char port);
extern unsigned char newbase_hdmi_check_stable_before_display(void);

unsigned char newbase_hdmi_is_dispsrc(unsigned char disp);
extern unsigned char newbase_hdmi_ced_err_thd_check(unsigned char port, unsigned int err_threshold);
extern unsigned char newbase_hdmi_tmds_err_thd_check(unsigned char port, unsigned int err_threshold);
extern unsigned char newbase_hdmi_gcp_err_det(unsigned char port, unsigned int err_threshold);
extern HDMI_PORT_INFO_T* newbase_hdmi_get_rx_port_info(unsigned char port);

unsigned char newbase_hdmi_get_avmute(unsigned char port);

void newbase_hdmi_save_customer_edid(unsigned char port, unsigned char *edid, unsigned int len,unsigned char portnun);
void newbase_hdmi_save_customer_hdcp1p4(unsigned char* hdcp_1p4, unsigned int len );
void newbase_hdmi_save_customer_hdcp2p2(unsigned char* hdcp_2p2, unsigned int len );
extern unsigned char newbase_hdmi_get_customer_edid(void);
extern unsigned char newbase_hdmi_get_customer_hdcp1p4(void);
extern unsigned char newbase_hdmi_get_customer_hdcp2p2(void);
extern unsigned char* newbase_hdmi_get_customer_hdcp2p2_table(void);
extern void newbase_hdmi_clear_table(void);

//Thermal mode
extern void newbase_hdmi_check_thermal_mode(unsigned char port);
extern void newbase_hdmi_set_thermal_mode(unsigned char en);
extern unsigned char newbase_hdmi_get_thermal_mode(void);
extern int hdmi_vfe_get_connected_port(unsigned char *p_port);


#if HDMI_STR_HPD_SPEED_UP_ENABLE
extern unsigned char lib_hdmi_cec_is_enabled(void);
#endif

extern void newbase_hdmi_set_device_phy_stable_count(unsigned char port, unsigned char count);
extern unsigned char newbase_hdmi_get_device_phy_stable_count(unsigned char port);

#if HDMI_TOGGLE_HPD_Z0_ENABLE
extern void lib_hdmi_set_toggle_hpd_z0_flag(unsigned char nport, unsigned char uc_flag);
extern unsigned char lib_hdmi_get_toggle_hpd_z0_flag(unsigned char nport);
extern unsigned char lib_hdmi_toggle_hpd_z0_check(unsigned char nport, unsigned char ucInit);
extern void lib_hdmi_set_dc_on_delay_state(unsigned char nport, HDMI_DC_ON_STATE_E state);
extern HDMI_DC_ON_STATE_E lib_hdmi_get_dc_on_delay_state(unsigned char nport);
extern unsigned char lib_hdmi_dc_on_delay_check(unsigned char nport, unsigned char ucInit);
#endif //#if HDMI_TOGGLE_HPD_Z0_ENABLE

#if HDMI_STR_TOGGLE_HPD_ENABLE
void lib_hdmi_set_str_toggle_hpd_state(unsigned char nport, HDMI_STR_HPD_TOGGLE_STATE_E state);
HDMI_STR_HPD_TOGGLE_STATE_E lib_hdmi_get_str_toggle_hpd_state(unsigned char nport);
#endif //#if HDMI_STR_TOGGLE_HPD_ENABLE

#if HDMI_DISPLAY_DELAY_ENABLE
extern void lib_hdmi_set_delay_display_enable(unsigned char nport, unsigned char ucEnable);
extern unsigned char lib_hdmi_get_delay_display_enable(unsigned char nport);
extern void lib_hdmi_set_delay_display_state(unsigned char nport, HDMI_DISPLAY_DELAY_STATE_STATE_E state);
extern HDMI_DISPLAY_DELAY_STATE_STATE_E lib_hdmi_get_delay_display_state(unsigned char nport);
extern unsigned char lib_hdmi_delay_check_before_display(unsigned char nport, unsigned char ucInit);
extern unsigned int lib_hdmi_get_delay_display_time(unsigned char nport);
extern unsigned char lib_hdmi_delay_display_action(unsigned char port);
#endif //#if HDMI_DISPLAY_DELAY_ENABLE


extern void lib_hdmi_misc_variable_initial(unsigned char port);

#if HDCP_STATUS_CHECK_ENABLE
extern void lib_hdmi_set_hdcp_check_toggle_state(unsigned char nport, HDMI_HDCP_TOGGLE_STATUS_T status);
extern HDMI_HDCP_TOGGLE_STATUS_T lib_hdmi_get_hdcp_check_toggle_state(unsigned char nport);
extern unsigned char lib_hdmi_hdcp_status_check(unsigned char nport, unsigned char IsInit);
extern unsigned char lib_hdmi_hdcp_toggle_action(unsigned char nport);
#endif //#if HDCP_STATUS_CHECK_ENABLE

#include "hdmi_mac.h"
#include "hdmi_mac_2p1.h"
#include "hdmi_audio.h"
#include "hdmi_phy.h"
#include "hdmi_phy_2p1.h"
#include "hdmi_hdcp.h"

// -------------------------------------  hdmiMs ----------------------------------------------//

extern void set_no_polarity_inverse(unsigned char TorF);//allow vgip to set h v polarity inverse or not
extern unsigned char lib_hdmims_measure(HDMI_TIMING_T *tm, unsigned char frl_mode, unsigned char is_HV_Mode);
extern unsigned char lib_hdmims_get_hvstart(HDMI_TIMING_T *tm, unsigned char vsc_ch);
extern unsigned char lib_hdmims_active_correction(unsigned int *h_active, unsigned int *v_active);
extern unsigned char newbase_hdmims_measure_video(unsigned char port, HDMI_TIMING_T *tm, unsigned char frl_mode);
extern void newbase_hdmims_measure_abort(void);
extern void newbase_hdmims_measure_init(void);

// -------------------------------------  eARC ----------------------------------------------//
extern int hdmi_arc_is_earc_enabled(void);

#ifdef __cplusplus
}
#endif

#endif

