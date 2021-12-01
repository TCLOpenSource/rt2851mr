
//Kernel Header file
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
#include <linux/kthread.h>
#include <linux/string.h>/*memset*/
#include <rtk_kdriver/RPCDriver.h>
#include <mach/rtk_platform.h>
#ifdef CONFIG_LG_SNAPSHOT_BOOT
#include <linux/suspend.h>
#endif
#ifdef CONFIG_COMPAT
#include <linux/compat.h>
#define to_user_ptr(x)          compat_ptr((UINT32) x)
#else
#define to_user_ptr(x)          ((void* __user)(x)) // convert 32 bit value to user pointer
#endif

#include <mach/rtk_log.h>
#define TAG_NAME "VFE"

#include <generated/autoconf.h>
//RBUS Header file

#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerCommon.h>
#else
#include <scalercommon/scalerCommon.h>
#endif

#include <rbus/vbi_reg.h>
#include <rbus/adc_reg.h>
#include <rbus/vdtop_reg.h>
#include <rbus/abl_reg.h>//This is for dummy register for debug
#include <rbus/sys_reg_reg.h>


//TVScaler Header file
#include "scaler_vfedev.h"
#include "scaler_vscdev.h"

#include <tvscalercontrol/hdmirx/hdmi_vfe.h>
#include <tvscalercontrol/hdmirx/hdmifun.h>
// FixMe, 20190919
//#include <tvscalercontrol/hdmirx/hdmi_emp.h>
//#include <tvscalercontrol/hdmirx/hdmiPlatform.h>
#include <tvscalercontrol/scaler/scalerstruct.h>
#include <tvscalercontrol/scaler/source.h>
#include <tvscalercontrol/adcsource/adcctrl.h>
#include <tvscalercontrol/adcsource/ypbpr.h>
#include <tvscalercontrol/adcsource/vga.h>
#include <tvscalercontrol/pcbsource/pcbSource.h>

//#include "./hdmirx/hdmiInternal.h"

#include <tvscalercontrol/avd/avdctrl.h>
#include <tvscalercontrol/vdc/video.h>
#ifdef CONFIG_CUSTOMER_TV010
#include <tvscalercontrol/vdc/video_input.h>
#include <tvscalercontrol/scalerdrv/mode.h>
#endif
#include <tvscalercontrol/vbi/vbi_slicer_driver.h>

#include <tvscalercontrol/vip/viptable.h>
#include "tvscalercontrol/scalerdrv/auto.h"
#include <tvscalercontrol/i3ddma/i3ddma_drv.h>
#include <tvscalercontrol/scalerdrv/power.h>/*For ADC power control*/
#include "scaler_vpqmemcdev.h"
#include <linux/freezer.h>
#include <rtk_kdriver/rtk_crt.h>


#include "memc_isr/scalerMEMC.h"
#include <tvscalercontrol/vo/rtk_vo.h>
#include <tvscalercontrol/hdmirx/hdmi_arc.h>
#include <tvscalercontrol/scaler_drv_verify/scaler_verify_common.h>

/*=================== Hardware semaphore =============== */
//#include <mach/rtk_crt.h>

/*
extern char moduleName[32];

#define SB2_HD_SEM_NEW_5_reg 0xB801A634
#define Get_HD_SEM_NEW_5() while(!IoReg_Read32(SB2_HD_SEM_NEW_5_reg)){printk("#@# %s wait SB2_HD_SEM_NEW_5_reg ready\n", moduleName); msleep(20);}
#define Set_HD_SEM_NEW_5() IoReg_Write32(SB2_HD_SEM_NEW_5_reg, 0);
*/
unsigned char main_online_triggle = FALSE;//If true means main online measure happens
#ifdef CONFIG_DUAL_CHANNEL
unsigned char sub_online_triggle = FALSE;//If true means sub online measure happens
#endif
static DEFINE_SPINLOCK(AVD_ZERO_TIMING_CTRL);
static DEFINE_SPINLOCK(ADC_ZERO_TIMING_CTRL);
static DEFINE_SPINLOCK(HDMI_ZERO_TIMING_CTRL);


#ifdef POLLING_ONLINE_STATUS_ENABLE
static int check_signal_tsk(void *p);//This task run HDMI source timing detecting after source connect
static bool check_signal_running_flag = FALSE;
static struct task_struct *p_check_signal_task = NULL;
#endif
static void create_onlinemeasure_tsk(void);
static void delete_onlinemeasure_tsk(void);
extern void offline_semaphore_init(void);
extern void state_update_disp_info(void);
extern void ADC_Set_GainOffset(ADCGainOffset *adcinfo);
extern void ADC_Get_GainOffset(ADCGainOffset *adcinfo);
typedef unsigned char (*DETECTCALLBACK)(void);
void ADC_register_callback(unsigned char enable, DETECTCALLBACK cb);//if enable is true, set the cb for ADC
void VDC_register_callback(unsigned char enable, DETECTCALLBACK cb);//if enable is true, set the cb for VDC
void HDMI_register_callback(unsigned char enable, DETECTCALLBACK cb);//if enable is true, set the cb for HDMI
void ADC_set_detect_flag(unsigned char enable);//Set ADC detect timing flag.
void VDC_set_detect_flag(unsigned char enable);//Set VDC detect timing flag.
void HDMI_set_detect_flag(unsigned char enable);//Set HDMI detect timing flag.
extern int vfe_hdmi_drv_is_current_channel(unsigned char ch);


static void Detect_Semaphore_Init(void);//Initial ADC_DetectSemaphore, VDC_DetectSemaphore, HDMI_DetectSemaphore
struct semaphore* get_scaler_fll_running_semaphore(void);

static struct task_struct *p_adc_detect_task = NULL;
static struct task_struct *p_avd_detect_task = NULL;
static struct task_struct *p_hdmi_detect_task = NULL;

static bool adc_detect_tsk_running_flag = FALSE;//Record adc_detect_tsk status. True: Task is running
static bool avd_detect_tsk_running_flag = FALSE;//Record avd_detect_tsk status. True: Task is running
static bool hdmi_detect_tsk_running_flag = FALSE;//Record hdmi_detect_tsk status. True: Task is running

static void delete_srcdetect_tsk(void); /*delete adc_detect_tsk avd_detect_tsk hdmi_detect_tsk*/
static void create_srcdetect_tsk(void); /*create adc_detect_tsk avd_detect_tsk hdmi_detect_tsk*/
static int adc_detect_tsk(void *p);//This task run adc source timing detecting after source connect
static int avd_detect_tsk(void *p);//This task run avd source timing detecting after source connect
static int hdmi_detect_tsk(void *p);//This task run hdmi source timing detecting after source connect

#ifdef CONFIG_CUSTOMER_TV010
static unsigned int  NonStandardKernel=0;
#endif

static unsigned char ADC_Global_Status = SRC_NOTHING;
static unsigned char HDMI_Global_Status = SRC_NOTHING;

static unsigned char AVD_Global_Status = SRC_NOTHING;
static unsigned char ATV_Status = SRC_NOTHING;
static unsigned char AV_Status = SRC_NOTHING;
static unsigned char SCART_Status = SRC_NOTHING;

static unsigned short ADC_Input = _YPBPR_INPUT1;
static unsigned short AVD_Input = _AV_INPUT1;
static unsigned short ATV_PinNum = 0;
static unsigned short ADC_Input_Source = _SRC_MAX;
static unsigned short AVD_Input_Source = _SRC_MAX;
unsigned short HDMI_Input_Source = _SRC_MAX;

static unsigned char ADC_DetectFlag = FALSE;//Decide ADC detect timing or not
static unsigned char VDC_DetectFlag = FALSE;//Decide VDC detect timing or not
static unsigned char HDMI_DetectFlag = FALSE;//Decide HDMI detect timing or not
static DETECTCALLBACK ADC_DetectCB = NULL;//ADC detect timing call back
static DETECTCALLBACK VDC_DetectCB = NULL;//VDC detect timing call back
static DETECTCALLBACK HDMI_DetectCB = NULL;//HDMI detect timing call back
//static struct semaphore SetSource_Semaphore;/*This semaphore is for set source type*/
struct semaphore SetSource_Semaphore;
static struct semaphore ADC_DetectSemaphore;/*This semaphore is set adc detect flag and callback*/
static struct semaphore VDC_DetectSemaphore;/*This semaphore is set avd detect flag and callback*/
struct semaphore HDMI_DetectSemaphore;/*This semaphore is set hdmi detect flag and callback*/
static struct semaphore Scaler_RPC_Semaphore;/*This semaphore is set Scaler_SendRPC*/
static struct semaphore Scaler_Fll_Running_Semaphore;/*This semaphore is set Scaler_SendRPC*/
static struct semaphore ADC_ADJ_Semaphore;/*This semaphore is for adc adjust*/
unsigned char ADC_Reply_Zero_Timing = FALSE;/*If true, let webos get zero timing*/
unsigned char AVD_Reply_Zero_Timing = FALSE;/*If true, let webos get zero timing*/
unsigned char HDMI_Reply_Zero_Timing = FALSE;/*If true, let webos get zero timing*/
static unsigned char HDMI_Reply_Zero_Timing_mute_cnt = 0;
static unsigned int HDMI_ZERO_REPORT_RECORD_TIME = 0;//when ap polling the timing and the zero timing flag is ture. Record the time
#define HDMI_REPLY_ZERO_TIMING_COUNT    3         /* Number of Zero Timing Should be Reported, when HDMI_Reply_Zero_Timing is set */

static struct semaphore VBI_vps_driver_Semaphore;
static dev_t vfe_devno = 0;//vfe device number
static struct cdev vfe_cdev;


unsigned char check_polling_time_period(unsigned int record_time, unsigned int cur_time, unsigned threshould)
{//return TRUE: smaller than threshould report zero timing. 
	unsigned int cost_time;
	if(cur_time < record_time)
	{//system time is already overflow
		cost_time = (0xffffffff - record_time) + cur_time;
	}
	else
	{
		cost_time = cur_time - record_time;
	}
	if(cost_time >= threshould)
		return FALSE;
	else
		return TRUE;
	
}

void set_ADC_Global_Status(SOURCE_STATUS status)
{
	ADC_Global_Status =  status;
}

unsigned char get_ADC_Global_Status(void)
{
	return ADC_Global_Status;
}

void set_HDMI_Global_Status(unsigned char status)
{
        HDMI_Global_Status = status;
}

unsigned char get_HDMI_Global_Status(void)
{
	return HDMI_Global_Status;
}

unsigned char get_AVD_Global_Status(void)
{
	return AVD_Global_Status;
}

void set_AVD_Global_Status(SOURCE_STATUS status)
{
	AVD_Global_Status =  status;
}

unsigned char get_AV_Global_Status(void)
{
	return AV_Status;
}

void set_AV_Global_Status(SOURCE_STATUS status)
{
	AV_Status =  status;
}

unsigned char get_ATV_Global_Status(void)
{
	return ATV_Status;
}

void set_ATV_Global_Status(SOURCE_STATUS status)
{
	ATV_Status =  status;
}

void set_ADC_Input_Source(unsigned short input_src)
{
	ADC_Input_Source = input_src;
}

unsigned short get_ADC_Input(void)
{
	return ADC_Input;
}


void set_ADC_Input(unsigned short input_port)
{
	ADC_Input = input_port;
}

unsigned char get_ADC_Input_Source(void)
{
	return ADC_Input_Source;
}

unsigned char get_HDMI_Input_Source(void)
{
	return HDMI_Input_Source;
}

unsigned short get_AVD_Input(void)
{
	return AVD_Input;
}

void set_AVD_Input(unsigned short input_port)
{
	AVD_Input = input_port;
}

void set_AVD_Input_Source(unsigned short input_src)
{
	AVD_Input_Source = input_src;
}

unsigned char get_AVD_Input_Source(void)
{
	return AVD_Input_Source;
}

void adc_ptg_verify_set_status(void)
{//verify mode use set ADC status
	ADC_Input = _YPBPR_INPUT1;
	ADC_Input_Source = _SRC_YPBPR;
}

void Set_Reply_Zero_Timing_Flag(unsigned char src, unsigned char flag)
{//src type is from VSC_INPUT_TYPE_T
	unsigned long flags;//for spin_lock_irqsave	
	switch (src) {
		//case _SRC_TV://ATV need to check
		case VSC_INPUTSRC_AVD:
			if((flag == SOURCE_GOOD_TIMING_READY) && (AVD_Reply_Zero_Timing & SOURCE_GOOD_TIMING_READY))
				return;
			spin_lock_irqsave(&AVD_ZERO_TIMING_CTRL, flags);
			if(flag == REPORT_ZERO_TIMING){
				if(AVD_Reply_Zero_Timing & SOURCE_GOOD_TIMING_READY)
					AVD_Reply_Zero_Timing = AVD_Reply_Zero_Timing | REPORT_ZERO_TIMING;
			} else if(flag == SOURCE_GOOD_TIMING_READY) {
					AVD_Reply_Zero_Timing = AVD_Reply_Zero_Timing | SOURCE_GOOD_TIMING_READY;
			} else {
				AVD_Reply_Zero_Timing = flag;
			}
			spin_unlock_irqrestore(&AVD_ZERO_TIMING_CTRL, flags);
			printk(KERN_INFO "##func:%s AVD value:(%d %d)##\r\n",__FUNCTION__, flag, AVD_Reply_Zero_Timing);
		break;

		case VSC_INPUTSRC_ADC:
			if((flag == SOURCE_GOOD_TIMING_READY) && (ADC_Reply_Zero_Timing & SOURCE_GOOD_TIMING_READY))
				return;
			spin_lock_irqsave(&ADC_ZERO_TIMING_CTRL, flags);
			if(flag == REPORT_ZERO_TIMING){
				if(ADC_Reply_Zero_Timing & SOURCE_GOOD_TIMING_READY)
					ADC_Reply_Zero_Timing = ADC_Reply_Zero_Timing | REPORT_ZERO_TIMING;
			} else if(flag == SOURCE_GOOD_TIMING_READY) {
					ADC_Reply_Zero_Timing = ADC_Reply_Zero_Timing | SOURCE_GOOD_TIMING_READY;
			} else {
				ADC_Reply_Zero_Timing = flag;
			}
			spin_unlock_irqrestore(&ADC_ZERO_TIMING_CTRL, flags);
			printk(KERN_INFO "##func:%s ADC value:(%d %d)##\r\n",__FUNCTION__, flag, ADC_Reply_Zero_Timing);
		break;

		case VSC_INPUTSRC_HDMI:
			if((flag == SOURCE_GOOD_TIMING_READY) && (HDMI_Reply_Zero_Timing & SOURCE_GOOD_TIMING_READY))
				return;
			spin_lock_irqsave(&HDMI_ZERO_TIMING_CTRL, flags);
			if(flag == REPORT_ZERO_TIMING){
				if(HDMI_Reply_Zero_Timing & SOURCE_GOOD_TIMING_READY)
					HDMI_Reply_Zero_Timing = HDMI_Reply_Zero_Timing | REPORT_ZERO_TIMING;
			} else {
				HDMI_Reply_Zero_Timing = flag;
			}
			spin_unlock_irqrestore(&HDMI_ZERO_TIMING_CTRL, flags);
			printk(KERN_INFO "##func:%s HDMI value:(%d %d)##\r\n",__FUNCTION__, flag, HDMI_Reply_Zero_Timing);
		break;

		default:
		break;
	}
}

unsigned char ADC_Check_VSC_VFE_ConnectSrc_Match(unsigned int vsc_src)
{/* Return TURE: Match   Return FALSE: Mismatch */
	if (ADC_Input == vsc_src) {
		return TRUE;
	}
	return FALSE;
}

int VFE_AVD_OPEN(void)
{
	if (0 == Scaler_AVD_Open())
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

int VFE_AVD_ATV_CONNECT(unsigned short PortNumber)
{
	KADP_VFE_AVD_DEMOD_TYPE tDemodType = Scaler_AVD_GetDemodType();

	ATV_PinNum = PortNumber;
	if (KADP_AVD_INTERNAL_DEMOD == tDemodType)
	{
		if(PortNumber == 0)
		{
			AVD_Input = _TV_INPUT1;
		}
		else if(PortNumber == 1)
		{
			AVD_Input = _TV_INPUT2;
		}
		else if(PortNumber == 2)
		{
			AVD_Input = _TV_INPUT3;
		}
		else
		{
			rtd_printk(KERN_DEBUG, TAG_NAME,"Kernel Error Port Number\n");
			return -1;
		}
	}
	else if (KADP_AVD_EXTERNAL_DEMOD == tDemodType)
	{
		if(PortNumber == 0)
		{
			AVD_Input = _AV_INPUT1;
		}
		else if(PortNumber == 1)
		{
			AVD_Input = _AV_INPUT2;
		}
		else if(PortNumber == 2)
		{
			AVD_Input = _AV_INPUT3;
		}
		else
		{
			rtd_printk(KERN_DEBUG, TAG_NAME,"Kernel Error Port Number\n");
			return -1;
		}
	}
	else
	{
		rtd_printk(KERN_DEBUG, TAG_NAME,"VFE_AVD_ATV_CONNECT demodType error. DemodType=%d\n", tDemodType);
	}

	if (0 == Scaler_AVD_ATV_Connect(AVD_Input))
	{
		//down(&VDC_DetectSemaphore);
		//down(get_avd_power_semaphore());
		AVD_Global_Status = SRC_CONNECT_DONE;
		ATV_Status = SRC_CONNECT_DONE;
		//up(get_avd_power_semaphore());
		VDC_set_detect_flag(TRUE);

		if (KADP_AVD_INTERNAL_DEMOD == tDemodType)
		{
			rtd_printk(KERN_DEBUG, TAG_NAME,"KADP_VFE_AVD_ATV_CONNECT Internal demod\n");
			VDC_register_callback(TRUE, Scaler_AVD_DetectTiming);
		}
		else if (KADP_AVD_EXTERNAL_DEMOD == tDemodType)
		{
			rtd_printk(KERN_DEBUG, TAG_NAME,"KADP_VFE_AVD_ATV_CONNECT External demod\n");
			VDC_register_callback(TRUE, Scaler_AVD_DetectTiming);
		}
		//up(&VDC_DetectSemaphore);

		rtd_printk(KERN_DEBUG, TAG_NAME,"kernel KADP_VFE_IOC_AVD_ATV_CONNECT success\n");
		return 0;
	}
	else
	{
		rtd_printk(KERN_DEBUG, TAG_NAME,"kernel KADP_VFE_IOC_AVD_ATV_CONNECT fail\n");
		return -1;
	}
}

unsigned short VFE_AVD_ATV_GetCurrentPort(void)
{
	return ATV_PinNum;
}

int ADC_Scart_Connect(unsigned short a_usPortNum)
{
	int ulRet = 0;

	rtd_printk(KERN_DEBUG, TAG_NAME,"file=%s, function=%s, line=%d\n", __FILE__, __FUNCTION__, __LINE__);

	if (SRC_NOTHING == AVD_Global_Status)
	{
		ulRet = Scaler_AVD_Init(0);
		ulRet = VFE_AVD_OPEN();
		//down(get_avd_power_semaphore());
		AVD_Global_Status = SRC_OPEN_DONE;
		//up(get_avd_power_semaphore());
	}
	else if (SRC_INIT_DONE == AVD_Global_Status)
	{
		ulRet = VFE_AVD_OPEN();

		//down(get_avd_power_semaphore());
		AVD_Global_Status = SRC_OPEN_DONE;
		//up(get_avd_power_semaphore());
	}
	else if (SRC_CONNECT_DONE == AVD_Global_Status)
	{
		rtd_printk(KERN_DEBUG, TAG_NAME,"AVD connect change to Scart RGB");
	}
	else
	{
		return -1;
	}

	if (0 == Scaler_AVD_ScartRGB_Connect(a_usPortNum))
	{
		ulRet = 0;

		//down(get_avd_power_semaphore());
		AVD_Global_Status = SRC_CONNECT_DONE;
		//up(get_avd_power_semaphore());
		ADC_Global_Status = SRC_CONNECT_DONE;


		rtd_printk(KERN_DEBUG, TAG_NAME,"Scaler_AVD_ScartRGB_Connect success\n");
	}
	else
	{
		ulRet = -1;

		rtd_printk(KERN_DEBUG, TAG_NAME,"Scaler_AVD_ScartRGB_Connect fail\n");
	}

	return ulRet;
}

//vbi enable flow start
static KADP_VFE_AVD_CC_TTX_STATUS_T vbi_support_type;
static unsigned char VBI_SUPPORT_ENABLE;
void VBI_support_type_set(KADP_VFE_AVD_CC_TTX_STATUS_T status,unsigned char enable)
{
	vbi_support_type=status;
	VBI_SUPPORT_ENABLE=enable;
}

KADP_VFE_AVD_CC_TTX_STATUS_T VBI_support_type_get(void)
{
	 return vbi_support_type;
}
unsigned char VBI_Support_Enable(void)
{
	return VBI_SUPPORT_ENABLE;
}
unsigned char vbi_clk_get_enable(void)
{
	if((IoReg_Read32(SYS_REG_SYS_CLKEN1_reg)& BIT(SYS_REG_SYS_CLKEN1_clken_vbis0_shift))
	&&(IoReg_Read32(SYS_REG_SYS_SRST1_reg)& BIT(SYS_REG_SYS_SRST1_rstn_vbis0_shift))){
		return 1;
	} else {
		return 0;
	}
}
void VBI_Control_setting(unsigned char vdc_mode)
{
	vbi_tt_vbi_co_ch_ctrl_RBUS vbi_tt_vbi_co_ch_ctrl_Reg;
	vbi_tt_vbi_control_register_RBUS vbi_tt_vbi_control_register_Reg;
	if ((VBI_support_type_get() !=KADP_VFE_AVD_CC_IS_SUPPORTED) &&((vdc_mode == VDC_MODE_PALI)||(vdc_mode == VDC_MODE_NTSC50)||(vdc_mode == VDC_MODE_SECAM))) {//tt setting
		vbi_tt_vbi_co_ch_ctrl_Reg.regValue= IoReg_Read32(VBI_TT_VBI_CO_CH_CTRL_reg);
		vbi_tt_vbi_control_register_Reg.regValue= IoReg_Read32(VBI_TT_VBI_Control_Register_reg);
		if (0 ==(IoReg_Read32(VBI_TT_VBI_DATA_STATUS_reg) &VBI_TT_VBI_DATA_STATUS_tt_vps_int_en_mask)) {
			if (drvif_module_vdc_read_coch_detect_status() == 1) {
				vbi_tt_vbi_co_ch_ctrl_Reg.tt_coch_auto_compensate_en=0x3;
				vbi_tt_vbi_control_register_Reg.tt_adap_slvl_en=0x1;
			} else {
				vbi_tt_vbi_co_ch_ctrl_Reg.tt_coch_auto_compensate_en=0x0;
				vbi_tt_vbi_control_register_Reg.tt_adap_slvl_en=0x0;
			}
			vbi_tt_vbi_control_register_Reg.tt_vbi_st_err_ignored=0;
			IoReg_Write32(VBI_TT_VBI_CO_CH_CTRL_reg, vbi_tt_vbi_co_ch_ctrl_Reg.regValue);
			IoReg_Write32(VBI_TT_VBI_Control_Register_reg, vbi_tt_vbi_control_register_Reg.regValue);
		} else {
			vbi_tt_vbi_control_register_Reg.tt_vbi_st_err_ignored=1;
			IoReg_Write32(VBI_TT_VBI_Control_Register_reg, vbi_tt_vbi_control_register_Reg.regValue);
		}
	} else {// cc setting
		if (vdc_mode==VDC_MODE_PALN) {
			if ((drvif_module_vdc_read_coch_detect_status() == 1)&&
				(drvif_video_status_reg(VDC_noisy_vbi) == 1)) {//coch channel and vbi noisy need set 0x70 level
				vdcf_outl(VBI_TT_VBI_Control_Register_reg, 0x5a702713);
			} else {
				if((vdcf_inl(VDTOP_LUMA_AGC_VALUE_reg) & 0xff) == 0x82)		//d gain 0.6
					vdcf_outl(VBI_TT_VBI_Control_Register_reg,0x5a5f2713);
				else
					vdcf_outl(VBI_TT_VBI_Control_Register_reg,0x5a6c2713);
			}
		} else if (vdc_mode == VDC_MODE_PALM){//start-code must correct to avoid wrong cc data when cc close
			if((vdcf_inl(VDTOP_LUMA_AGC_VALUE_reg) & 0xff) == 0x82) //d gain 0.6
				vdcf_outl(VBI_TT_VBI_Control_Register_reg,0x005f2711);
			else
				vdcf_outl(VBI_TT_VBI_Control_Register_reg,0x006c2711);
		} else {
			if((vdcf_inl(VDTOP_LUMA_AGC_VALUE_reg) & 0xff) == 0x82)		//d gain 0.6
				vdcf_outl(VBI_TT_VBI_Control_Register_reg,0x005f2713);
			else
				vdcf_outl(VBI_TT_VBI_Control_Register_reg,0x006c2713);
		}
	}
}

unsigned char vbi_connect_flag=0;  //_BIT0:tt support, _BIT1: cc support,_BIT2:palncc, _BIT3:cgms cvbs
unsigned char last_vbi_connect=0;
unsigned char pal_wss_flag=0;
#define VBI_PAL_TT_BIT   _BIT0
#define VBI_NTSC_CC_BIT  _BIT1
#define VBI_PALN_CC_BIT  _BIT2
#define VBI_AV_CGMS_BIT  _BIT3
#define VBI_JUST_PAL_WSS_BIT  _BIT4
void Scaler_VBI_clear_type(unsigned char mode,unsigned char vdc_mode)
{
//576i wss can't exist with 480i wss
	if (mode == _MODE_480I) {
		//480i need clear 576iwss
		if(vbi_connect_flag&VBI_JUST_PAL_WSS_BIT)
		{
			vbi_just_576i_wss_uninit();
			vbi_connect_flag&=~VBI_JUST_PAL_WSS_BIT;
			last_vbi_connect =0;
			rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_clear_type VBI_JUST_PAL_WSS_BIT\n");
		}
		if(vbi_connect_flag&VBI_PAL_TT_BIT)
		{
			Scaler_VbiTtDeinit();
	//		Scaler_vbi_vps_uninit();
			vbi_connect_flag&=~VBI_PAL_TT_BIT;
			last_vbi_connect = 0;
			rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_clear_type VBI_PAL_TT_BIT\n");
		}
		if(vbi_connect_flag&VBI_PALN_CC_BIT)
		{
			Scaler_VbiCcStop(0);
			Scaler_VbiCcDeinit();
			vbi_just_576i_wss_uninit();
			vbi_connect_flag&=~VBI_PALN_CC_BIT;
			last_vbi_connect =0;
			rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_clear_type VBI_PALN_CC_BIT\n");
		}
	} else if (mode == _MODE_576I) {
	//576i need clear 480i
		if(vbi_connect_flag&VBI_AV_CGMS_BIT)
		{
			Scaler_vbi_cgms_Uninit(CGMS_CVBS_NTSC);
			vbi_connect_flag&=~VBI_AV_CGMS_BIT;
			last_vbi_connect = 0;
			rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_clear_type VBI_AV_CGMS_BIT\n");
		}
		if(vbi_connect_flag&VBI_NTSC_CC_BIT)
		{
			Scaler_VbiCcStop(0);
			Scaler_VbiCcDeinit();
			vbi_connect_flag&=~VBI_NTSC_CC_BIT;
			last_vbi_connect = 0;
			rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_clear_type VBI_NTSC_CC_BIT\n");
		}
		if (vdc_mode !=VDC_MODE_PALN) {
			if(vbi_connect_flag&VBI_PALN_CC_BIT)
			{
				Scaler_VbiCcStop(0);
				Scaler_VbiCcDeinit();
				vbi_just_576i_wss_uninit();
				vbi_connect_flag&=~VBI_PALN_CC_BIT;
				last_vbi_connect =0;
				rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_clear_type VBI_PALN_CC_BIT\n");
			}
		}
	}
}
void Scaler_VBI_disconnect(void)
{
//	unsigned char clk_flag=0;
	if(vbi_connect_flag&VBI_PAL_TT_BIT)  //ttx open
	{
		Scaler_VbiTtDeinit();
	//	Scaler_vbi_vps_uninit();
		vbi_connect_flag&=~VBI_PAL_TT_BIT;
		last_vbi_connect|=VBI_PAL_TT_BIT;
		rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_disconnect VBI_PAL_TT_BIT\n");
	}
	if(vbi_connect_flag&VBI_NTSC_CC_BIT)  //cc open
	{
		Scaler_VbiCcStop(0);
		Scaler_VbiCcDeinit();
		vbi_connect_flag&=~VBI_NTSC_CC_BIT;
		last_vbi_connect|=VBI_NTSC_CC_BIT;
		rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_disconnect VBI_NTSC_CC_BIT\n");
	}
	if(vbi_connect_flag&VBI_PALN_CC_BIT)  //paln cc open
	{
		Scaler_VbiCcStop(0);
		Scaler_VbiCcDeinit();
		vbi_just_576i_wss_uninit();
		vbi_connect_flag&=~VBI_PALN_CC_BIT;
		last_vbi_connect|=VBI_PALN_CC_BIT;
		rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_disconnect VBI_PALN_CC_BIT\n");
	}
	if(vbi_connect_flag&VBI_AV_CGMS_BIT)  //cgms_cvbs open
	{
		Scaler_vbi_cgms_Uninit(CGMS_CVBS_NTSC);
		vbi_connect_flag&=~VBI_AV_CGMS_BIT;
		last_vbi_connect|=VBI_AV_CGMS_BIT;
		rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_disconnect VBI_AV_CGMS_BIT\n");
	}
	if(vbi_connect_flag&VBI_JUST_PAL_WSS_BIT)  //wss_cvbs open
	{
		vbi_just_576i_wss_uninit();
		vbi_connect_flag&=~VBI_JUST_PAL_WSS_BIT;
		last_vbi_connect|=VBI_JUST_PAL_WSS_BIT;
		rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]Scaler_VBI_disconnect VBI_JUST_PAL_WSS_BIT\n");
	}
     if (((last_vbi_connect &VBI_PAL_TT_BIT) |(last_vbi_connect & VBI_JUST_PAL_WSS_BIT)) && (last_vbi_connect & (VBI_AV_CGMS_BIT | VBI_PALN_CC_BIT |VBI_NTSC_CC_BIT))) {
          rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]last_vbi_connect:clear%s.%d\n", __FUNCTION__, __LINE__);
          last_vbi_connect = 0;
     }
}

extern void vbi_576i_wss_under_cc_init(void);
void Scaler_VBI_connect(unsigned char source,unsigned char mode,unsigned char vdc_mode)
{
//	unsigned char vdc_mode;
	rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]vbi connect:source=%d,mode=%d,vdc_mode=%d\n",source,mode,vdc_mode);
	rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]support:%d,type=%d\n",VBI_Support_Enable(),VBI_support_type_get());
//	Scaler_VBI_disconnect();
	Scaler_VBI_clear_type(mode,vdc_mode);
	if(VBI_Support_Enable())
	{
		if(VBI_support_type_get()==KADP_VFE_AVD_TTX_IS_SUPPORTED)
		{
			if(mode== _MODE_576I)
			{
				if((vdc_mode == VDC_MODE_PALI)||(vdc_mode == VDC_MODE_NTSC50)||(vdc_mode == VDC_MODE_SECAM))  //ttx
				{
					if (vbi_clk_get_enable()) {
					} else {
						CRT_CLK_OnOff(VBI, CLK_ON, NULL);
					}
					if((vbi_connect_flag&VBI_PAL_TT_BIT)&&(vdcf_inl(VBI_VBISL0_reg)&VBI_VBISL0_vbisl0_sys625i_mask)) {//ttx open
						rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]has already connect ttx\n");
						Scaler_reset_vbi_wss();
						Scaler_vbi_ttx_interrupt_set(1);
					} else {
						if ((last_vbi_connect&VBI_PAL_TT_BIT) && (vdcf_inl(VBI_VBISL0_reg)&VBI_VBISL0_vbisl0_sys625i_mask)) {
							rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]enable ttx_interrupt\n");
							Scaler_tt_init_enable();
						//	Scaler_vps_init_enable();
						} else {
							rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]init ttx_slicer driver\n");
							Scaler_VbiTtInit();
						}
						vbi_connect_flag|=VBI_PAL_TT_BIT;
					}
					VBI_Control_setting(vdc_mode);
					pal_wss_flag=1;
				}
			}
		}
		else if(VBI_support_type_get()==KADP_VFE_AVD_CC_IS_SUPPORTED)
		{
			if((mode== _MODE_480I)&&((vdc_mode == VDC_MODE_NTSC)||(vdc_mode == VDC_MODE_NTSC443)||(vdc_mode == VDC_MODE_PALM))) //ntsc cc
			{
				if(vbi_connect_flag&VBI_NTSC_CC_BIT) {//cc open
					rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]has already connect ntsc_cc\n");
				} else {
					if (vbi_clk_get_enable()) {
					} else {
						CRT_CLK_OnOff(VBI, CLK_ON, NULL);
					}
					Scaler_VbiCcInit();
					//Scaler_VbiCcPlay(0); // play VBI CC
					vbi_connect_flag|=VBI_NTSC_CC_BIT;
					//[KTASKWBS-9331] NTSC/NTSC443/PALM clear Line 18
					IoReg_ClearBits(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_17_20_reg, _BIT12|_BIT8);
				}
				VBI_Control_setting(vdc_mode);
			}
			else if((mode== _MODE_576I)&&((vdc_mode == VDC_MODE_PALN)||(vdc_mode == VDC_MODE_NTSC50))) //paln & ntsc50 using line21 support cc
			{
				if(vbi_connect_flag&VBI_PALN_CC_BIT) {//cc open
					rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]has already connect paln_cc\n");
					Scaler_reset_vbi_wss();
				} else {
					if (vbi_clk_get_enable()) {

					} else {
						CRT_CLK_OnOff(VBI, CLK_ON, NULL);
					}
					Scaler_VbiCcInit();
					vbi_576i_wss_under_cc_init();
					//Scaler_VbiCcPlay(0); // play VBI CC
					vbi_connect_flag|=VBI_PALN_CC_BIT;
					//[KTASKWBS-9331] PALN CC support line18
					IoReg_Write32(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_17_20_reg, 0x00001100);
				}
				VBI_Control_setting(vdc_mode);
				pal_wss_flag=1;
			}
		}
		else if(VBI_support_type_get()==KADP_VFE_AVD_CC_AND_TTX_ARE_SUPPORTED)
		{
			if(mode== _MODE_576I)
			{
				if((vdc_mode == VDC_MODE_PALI)||(vdc_mode == VDC_MODE_NTSC50)||(vdc_mode == VDC_MODE_SECAM))  //ttx
				{
					if (vbi_clk_get_enable()) {
					} else {
						CRT_CLK_OnOff(VBI, CLK_ON, NULL);
					}
					if((vbi_connect_flag&VBI_PAL_TT_BIT)&&(vdcf_inl(VBI_VBISL0_reg)&VBI_VBISL0_vbisl0_sys625i_mask)) {//ttx open
						rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]has already connect ttx\n");
						Scaler_reset_vbi_wss();
						Scaler_vbi_ttx_interrupt_set(1);
					} else {
						if ((last_vbi_connect&VBI_PAL_TT_BIT) && (vdcf_inl(VBI_VBISL0_reg)&VBI_VBISL0_vbisl0_sys625i_mask)) {
							rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]enable ttx_interrupt\n");
							Scaler_tt_init_enable();
					//		Scaler_vps_init_enable();
						} else {
							rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]init ttx_slicer driver\n");
							Scaler_VbiTtInit();
					//		Scaler_vbi_vps_init();
						}
						vbi_connect_flag|=VBI_PAL_TT_BIT;
					}
					VBI_Control_setting(vdc_mode);
					pal_wss_flag=1;
				}
				else if(vdc_mode == VDC_MODE_PALN)  //pal_n cc
				{
					if(vbi_connect_flag&VBI_PALN_CC_BIT) {//paln cc open
						rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]has already connect paln_cc\n");
						Scaler_reset_vbi_wss();
					} else {
						if (vbi_clk_get_enable()) {
						} else {
							CRT_CLK_OnOff(VBI, CLK_ON, NULL);
						}
						Scaler_VbiCcInit();
						vbi_576i_wss_under_cc_init();
						//Scaler_VbiCcPlay(0); // play VBI CC
						vbi_connect_flag|=VBI_PALN_CC_BIT;
						//[KTASKWBS-9331] PALN CC support line18
						IoReg_Write32(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_17_20_reg, 0x00001100);
					}
					VBI_Control_setting(vdc_mode);
					pal_wss_flag=1;
				}
			}
			else if(mode== _MODE_480I)  //ntsc cc
			{
				if((vdc_mode == VDC_MODE_NTSC)||(vdc_mode == VDC_MODE_NTSC443)||(vdc_mode == VDC_MODE_PALM))
				{
					if(vbi_connect_flag&VBI_NTSC_CC_BIT) {//cc open
						rtd_printk(KERN_NOTICE, TAG_NAME,"[vbi]has already connect ntsc_cc\n");
					} else {
						if (vbi_clk_get_enable()) {
						} else {
							CRT_CLK_OnOff(VBI, CLK_ON, NULL);
						}
						Scaler_VbiCcInit();
						//Scaler_VbiCcPlay(0); // play VBI CC
						vbi_connect_flag|=VBI_NTSC_CC_BIT;
						//[KTASKWBS-9331] NTSC/NTSC443/PALM clear Line 18
						IoReg_ClearBits(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_17_20_reg, _BIT12|_BIT8);
					}
					VBI_Control_setting(vdc_mode);
				}
			}
		}
	} else {
		init_vbi_rpc();
	}
	if(source== _SRC_CVBS)  //cvbs 480i
	{
		if (mode == _MODE_480I) {
			if (vbi_clk_get_enable()) {
			} else {
				CRT_CLK_OnOff(VBI, CLK_ON, NULL);
			}
			rtd_printk(KERN_NOTICE, TAG_NAME,"480i cgms init\n");
			Scaler_vbi_cgms_init(CGMS_CVBS_NTSC);
			vbi_connect_flag|=VBI_AV_CGMS_BIT;
		} else if (mode == _MODE_576I) {
			if ((!VBI_Support_Enable())||((VBI_support_type_get()!=KADP_VFE_AVD_CC_AND_TTX_ARE_SUPPORTED)&&(VBI_support_type_get()!=KADP_VFE_AVD_TTX_IS_SUPPORTED))) {
				if (vbi_clk_get_enable()) {
				} else {
					CRT_CLK_OnOff(VBI, CLK_ON, NULL);
				}
				rtd_printk(KERN_NOTICE, TAG_NAME,"576i wss init\n");
				if (vbi_connect_flag & VBI_JUST_PAL_WSS_BIT) {
					Scaler_reset_vbi_wss();
				}
				vbi_just_576i_wss_init();
				pal_wss_flag=1;
				vbi_connect_flag|=VBI_JUST_PAL_WSS_BIT;
			}
		}
	}
}
unsigned char wss_pal_just_get_connect(void)
{
	return (vbi_connect_flag &VBI_JUST_PAL_WSS_BIT);
}
void wss_data_handle(void)
{
	if (pal_wss_flag) {
		palwss_data_send();
		pal_wss_flag=0;
	}
}
void vbi_data_receive(void)
{
	if (vbi_clk_get_enable()) {
	#if 0
		if ((vbi_connect_flag&VBI_JUST_PAL_WSS_BIT) ||(vbi_connect_flag&VBI_PAL_TT_BIT)) {
			wss_data_receive();
		} else {
			wss_data_clear();
		}
	#endif
		if (vbi_connect_flag&VBI_AV_CGMS_BIT) {
			cgms_data_receive();
		} else {
			cgms_data_clear();
		}
	}
}
#ifdef CONFIG_PM
static unsigned int *VBI_TTX_Register_Backup;
static unsigned int *VBI_CC_Register_Backup;
static unsigned int *VBI_CGMS_Register_Backup;

#define REGISTER_SIZE_VBI_TTX (32)
#define REGISTER_SIZE_VBI_CC (23)
#define REGISTER_SIZE_VBI_CGMS_CC (6)
#define REGISTER_SIZE_VBI_CGMS (12)

#define	dvr_malloc(x)	kmalloc(x, GFP_KERNEL)
#define	dvr_free(x)	kfree(x)

void VBI_Suspend(void)
{
	int index = 0;
	if (vbi_connect_flag & (VBI_PAL_TT_BIT | VBI_JUST_PAL_WSS_BIT)) { /* ttx open */
		VBI_TTX_Register_Backup = (unsigned int *)dvr_malloc(sizeof(unsigned int) * (REGISTER_SIZE_VBI_TTX));
		if (VBI_TTX_Register_Backup) {
			VBI_TTX_Register_Backup[index++] = IoReg_Read32(SYS_REG_SYS_SRST1_reg);
			VBI_TTX_Register_Backup[index++] = IoReg_Read32(SYS_REG_SYS_CLKEN1_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_5_8_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_9_12_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_13_16_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_17_20_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_21_24_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_25_26_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_VBI_VOUNT_SHIFT_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_VBISL0_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_STATUS_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_NOISY_CTRL1_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_NOISY_CTRL2_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_NOISY_CTRL4_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_CO_CH_CTRL_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_STATUS1_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_Control_Register_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_CLAMPAGC_CTRL_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_LOOP_FILTER_I_GAIN_REGISTER_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_NOISY_CTRL_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DTO_FRAME_START_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DTO_REGISTER2_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_NOISY_CTRL5_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DUMP_DATA1_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DUMP_DATA2_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_VBI_DMA_FRAME_ADDR_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_VBI_DMA_FRAME_ADDR_END_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_VBI_DMA_VACTIVE1_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_VBI_DMA_VACTIVE2_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_VBI_DMA_FIFO_STAUS_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_VBI_DMA_CTRL_reg);
			VBI_TTX_Register_Backup[index++] = vdcf_inl(VBI_VBI_DUMP_int_reg);
		}
	}

	if (vbi_connect_flag&(VBI_NTSC_CC_BIT|VBI_PALN_CC_BIT)) {/* cc open */
		index = 0;
		VBI_CC_Register_Backup = (unsigned int *)dvr_malloc(sizeof(unsigned int) * (REGISTER_SIZE_VBI_CC));
		if (VBI_CC_Register_Backup) {
			VBI_CC_Register_Backup[index++] = IoReg_Read32(SYS_REG_SYS_CLKSEL_reg);
			VBI_CC_Register_Backup[index++] = IoReg_Read32(SYS_REG_SYS_SRST1_reg);
			VBI_CC_Register_Backup[index++] = IoReg_Read32(SYS_REG_SYS_CLKEN1_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_5_8_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_9_12_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_13_16_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_17_20_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_21_24_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_25_26_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_VBI_VOUNT_SHIFT_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_VBISL0_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DATA_STATUS_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_NOISY_CTRL_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_NOISY_CTRL1_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_NOISY_CTRL2_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_NOISY_CTRL3_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_CO_CH_CTRL_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_Control_Register_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_DTO_REGISTER1_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(ADC_ADC_CLKGEN_RGB_Capture_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_CC_CTRL0_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_WSS_VPS_VOTE_reg);
			VBI_CC_Register_Backup[index++] = vdcf_inl(VBI_TT_VBI_WSS_VPS_VOTE2_reg);
		}
	}
	if (vbi_connect_flag & VBI_AV_CGMS_BIT) {/* cgms_cvbs open */
		index = 0;
		if (VBI_CC_Register_Backup) {
			VBI_CGMS_Register_Backup = (unsigned int *)dvr_malloc(sizeof(unsigned int) * (REGISTER_SIZE_VBI_CGMS_CC));
			if (VBI_CGMS_Register_Backup) {
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C0_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C1_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C2_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C3_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C4_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C5_reg);
			}
		} else {
			VBI_CGMS_Register_Backup = (unsigned int *)dvr_malloc(sizeof(unsigned int) * (REGISTER_SIZE_VBI_CGMS));
			if (VBI_CGMS_Register_Backup) {
				VBI_CGMS_Register_Backup[index++] = IoReg_Read32(SYS_REG_SYS_CLKSEL_reg);
				VBI_CGMS_Register_Backup[index++] = IoReg_Read32(SYS_REG_SYS_SRST1_reg);
				VBI_CGMS_Register_Backup[index++] = IoReg_Read32(SYS_REG_SYS_CLKEN1_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_VBI_VOUNT_SHIFT_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_VBISL0_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(ADC_ADC_CLKGEN_RGB_Capture_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C0_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C1_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C2_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C3_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C4_reg);
				VBI_CGMS_Register_Backup[index++] = vdcf_inl(VBI_CGMS_C5_reg);
			}
		}
	}
	if (!vbi_connect_flag) {
		last_vbi_connect = 0;
	}
}

void VBI_Resume(void)
{
	int index = 0;
	if (VBI_TTX_Register_Backup) {
	#if 0
		IoReg_SetBits(SYS_REG_SYS_SRST1_reg,((VBI_TTX_Register_Backup[index++])&_BIT20));
		IoReg_SetBits(SYS_REG_SYS_CLKEN1_reg, ((VBI_TTX_Register_Backup[index++])&_BIT20));
	#else
		index++; //SYS_REG_SYS_SRST1_reg
		index++; //SYS_REG_SYS_CLKEN1_reg
		CRT_CLK_OnOff(VBI, CLK_ON, NULL);
	#endif
	#ifdef CONFIG_VBI_DMA_ON_OFF_FLOW
		if (IoReg_Read32(0xb8060000) == 0x65050000) {//version A
			vdcf_maskl(VBI_VBIPPR_POWER_CTRL_reg,~VBI_VBIPPR_POWER_CTRL_vbi_tt_dma_en_mask,0);
		}
	#endif
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_5_8_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_9_12_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_13_16_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_17_20_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_21_24_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_25_26_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_VBI_VOUNT_SHIFT_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_VBISL0_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_STATUS_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_NOISY_CTRL1_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_NOISY_CTRL2_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_NOISY_CTRL4_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_CO_CH_CTRL_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_STATUS1_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_Control_Register_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_CLAMPAGC_CTRL_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_LOOP_FILTER_I_GAIN_REGISTER_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_NOISY_CTRL_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DTO_FRAME_START_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DTO_REGISTER2_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_NOISY_CTRL5_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DUMP_DATA1_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DUMP_DATA2_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_VBI_DMA_FRAME_ADDR_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_VBI_DMA_FRAME_ADDR_END_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_VBI_DMA_VACTIVE1_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_VBI_DMA_VACTIVE2_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_VBI_DMA_FIFO_STAUS_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_VBI_DMA_CTRL_reg, VBI_TTX_Register_Backup[index++]);
		vdcf_outl(VBI_VBI_DUMP_int_reg, VBI_TTX_Register_Backup[index++]);

		dvr_free(VBI_TTX_Register_Backup);
		VBI_TTX_Register_Backup = NULL;
	}
	if (VBI_CC_Register_Backup) {
		index = 0;
		hw_semaphore_try_lock();
		IoReg_Mask32(SYS_REG_SYS_CLKSEL_reg, ~_BIT2,((VBI_CC_Register_Backup[index++])&_BIT2));
		hw_semaphore_unlock();
	#if 0
		IoReg_SetBits(SYS_REG_SYS_SRST1_reg,((VBI_CC_Register_Backup[index++])&_BIT20));
		IoReg_SetBits(SYS_REG_SYS_CLKEN1_reg, ((VBI_CC_Register_Backup[index++])&_BIT20));
	#else
		index++; //SYS_REG_SYS_SRST1_reg
		index++; //SYS_REG_SYS_CLKEN1_reg
		CRT_CLK_OnOff(VBI, CLK_ON, NULL);
	#endif
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_5_8_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_9_12_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_13_16_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_17_20_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_21_24_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_TYPE_CONFIG_REG_FOR_LINE_25_26_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_VBI_VOUNT_SHIFT_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_VBISL0_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DATA_STATUS_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_NOISY_CTRL_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_NOISY_CTRL1_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_NOISY_CTRL2_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_NOISY_CTRL3_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_CO_CH_CTRL_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_Control_Register_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_DTO_REGISTER1_reg, VBI_CC_Register_Backup[index++]);
		IoReg_Mask32(ADC_ADC_CLKGEN_RGB_Capture_reg, ~_BIT2,((VBI_CC_Register_Backup[index++])&_BIT2));
		vdcf_outl(VBI_TT_VBI_CC_CTRL0_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_WSS_VPS_VOTE_reg, VBI_CC_Register_Backup[index++]);
		vdcf_outl(VBI_TT_VBI_WSS_VPS_VOTE2_reg, VBI_CC_Register_Backup[index++]);
	}

	if (VBI_CGMS_Register_Backup) {
		index = 0;
		if (VBI_CC_Register_Backup) {
			vdcf_outl(VBI_CGMS_C0_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_CGMS_C1_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_CGMS_C2_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_CGMS_C3_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_CGMS_C4_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_CGMS_C5_reg, VBI_CGMS_Register_Backup[index++]);
		} else {
			hw_semaphore_try_lock();
			IoReg_Mask32(SYS_REG_SYS_CLKSEL_reg, ~_BIT2,((VBI_CGMS_Register_Backup[index++])&_BIT2));
			hw_semaphore_unlock();
		#if 0
			IoReg_SetBits(SYS_REG_SYS_SRST1_reg,((VBI_CGMS_Register_Backup[index++])&_BIT20));
			IoReg_SetBits(SYS_REG_SYS_CLKEN1_reg, ((VBI_CGMS_Register_Backup[index++])&_BIT20));
		#else
			index++; //SYS_REG_SYS_SRST1_reg
			index++; //SYS_REG_SYS_CLKEN1_reg
			CRT_CLK_OnOff(VBI, CLK_ON, NULL);
		#endif
			vdcf_outl(VBI_VBI_VOUNT_SHIFT_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_VBISL0_reg, VBI_CGMS_Register_Backup[index++]);
			IoReg_Mask32(ADC_ADC_CLKGEN_RGB_Capture_reg, ~_BIT2,((VBI_CGMS_Register_Backup[index++])&_BIT2));
			vdcf_outl(VBI_CGMS_C0_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_CGMS_C1_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_CGMS_C2_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_CGMS_C3_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_CGMS_C4_reg, VBI_CGMS_Register_Backup[index++]);
			vdcf_outl(VBI_CGMS_C5_reg, VBI_CGMS_Register_Backup[index++]);
		}
		dvr_free(VBI_CGMS_Register_Backup);
		VBI_CGMS_Register_Backup = NULL;
	}

	if (VBI_CC_Register_Backup) {
		dvr_free(VBI_CC_Register_Backup);
		VBI_CC_Register_Backup = NULL;
	}
}
#endif

//vbi enable flow end

#ifdef CONFIG_PM
#ifdef CONFIG_HIBERNATION
static int vfe_suspend_std(struct device *p_dev)
{
	extern unsigned char YPbPr_TimingDetectStage;
	extern unsigned char VGA_TimingDetectStage;
	extern unsigned char vga_good_timing_ready;
	StructDisplayInfo * p_ADC_Dispinfo;
	if (ADC_Global_Status == SRC_OPEN_DONE || ADC_Global_Status == SRC_CONNECT_DONE) {
		//Reset ADC Timing info start
		p_ADC_Dispinfo = Get_ADC_Dispinfo();
		memset(p_ADC_Dispinfo, 0, sizeof(StructDisplayInfo));
		memset(Get_ADC_Timinginfo(), 0, sizeof(ModeInformationType));
		vga_good_timing_ready = FALSE;
		YPbPr_TimingDetectStage = YPBPR_SOY_STATE;
		VGA_TimingDetectStage = VGA_HVSYNC_STATE;
		p_ADC_Dispinfo->ucMode_Table_Index = Mode_Table_Init_Index;
		Set_ADC_PhaseValue(0);
		//Reset Timing info end
		ADC_Suspend();
	}

	if(get_AVD_Global_Status() == SRC_CONNECT_DONE)
	{
		AVD_Suspend();
		VBI_Suspend();
	}
	else
	{
		rtd_printk(KERN_DEBUG, TAG_NAME,"Error: Bypass AVD_Suspend STD. get_AVD_Global_Status() != SRC_CONNECT_DONE\n");
	}
	rtd_printk(KERN_EMERG, TAG_NAME,"STD SUSPEND  get_HDMI_Global_Status() = %d\n",get_HDMI_Global_Status());


	if (get_HDMI_Global_Status() == SRC_CONNECT_DONE) {
		vfe_hdmi_drv_suspend();
	} else {
        	vfe_hdmi_drv_suspend_no_connect_setting();
	}
	return 0;
}
static int vfe_resume_std(struct device *p_dev)
{
	if (ADC_Global_Status == SRC_OPEN_DONE || ADC_Global_Status == SRC_CONNECT_DONE) {
		ADC_CRT_Setting(_ENABLE);
		ADC_Resume();
	} else {
		ADC_CRT_Setting(_ENABLE);
		ADC_Disable_AHS_SMT_Power();
		drvif_adc_power_control(ADC_POWER_ALL_DISABLE_CONTROL,__func__,__LINE__);
	}

	if(get_AVD_Global_Status() == SRC_CONNECT_DONE)
	{
		AVD_Resume();
		VBI_Resume();
	}
	else
	{
		rtd_printk(KERN_DEBUG, TAG_NAME,"Error:  Bypass AVD_Resume STD. get_AVD_Global_Status() != SRC_CONNECT_DONE\n");
	}

       rtd_printk(KERN_EMERG, TAG_NAME,"STD RESUME  get_HDMI_Global_Status() = %d\n",get_HDMI_Global_Status());

       //Sina Make STD Imag after scan channel and AP don't vfe_hdmi_init after STD AC off/AC on
       //willychou chou add 2017/06/02
       if (get_HDMI_Global_Status() == SRC_INIT_DONE || get_HDMI_Global_Status() == SRC_OPEN_DONE)
	{
             vfe_hdmi_drv_resume_std();
       }
	else if (get_HDMI_Global_Status() == SRC_CONNECT_DONE)//LG
	{
             vfe_hdmi_drv_resume_std();
	}
	main_online_triggle = FALSE;
#ifdef CONFIG_DUAL_CHANNEL
	sub_online_triggle = FALSE;
#endif

	return 0;
}
#endif

static int vfe_suspend (struct device *p_dev)
{
	extern unsigned char YPbPr_TimingDetectStage;
	extern unsigned char VGA_TimingDetectStage;
	extern unsigned char vga_good_timing_ready;
	StructDisplayInfo * p_ADC_Dispinfo;
	if (ADC_Global_Status == SRC_OPEN_DONE || ADC_Global_Status == SRC_CONNECT_DONE) {
		//Reset ADC Timing info start
		p_ADC_Dispinfo = Get_ADC_Dispinfo();
		memset(p_ADC_Dispinfo, 0, sizeof(StructDisplayInfo));
		memset(Get_ADC_Timinginfo(), 0, sizeof(ModeInformationType));
		vga_good_timing_ready = FALSE;
		YPbPr_TimingDetectStage = YPBPR_SOY_STATE;
		VGA_TimingDetectStage = VGA_HVSYNC_STATE;
		p_ADC_Dispinfo->ucMode_Table_Index = Mode_Table_Init_Index;
		Set_ADC_PhaseValue(0);
		//Reset Timing info end
		ADC_Suspend();
	}

	if(get_AVD_Global_Status() == SRC_CONNECT_DONE)
	{
		AVD_Suspend();
		VBI_Suspend();
	}
	else
	{
		rtd_printk(KERN_DEBUG, TAG_NAME,"Error: Bypass AVD_Suspend. get_AVD_Global_Status() != SRC_CONNECT_DONE\n");
	}

	rtd_printk(KERN_EMERG, TAG_NAME,"STR SUSPEND  get_HDMI_Global_Status() = %d\n",get_HDMI_Global_Status());

    if (get_HDMI_Global_Status() == SRC_INIT_DONE || get_HDMI_Global_Status() == SRC_OPEN_DONE) {
            vfe_hdmi_drv_suspend_afterDisconnectClose();//k3l error will mark 0603
    }
    else if (get_HDMI_Global_Status() == SRC_CONNECT_DONE) {
	    vfe_hdmi_drv_suspend();
    }
	return 0;
}

static int vfe_resume(struct device *p_dev)
{
	if (ADC_Global_Status == SRC_OPEN_DONE || ADC_Global_Status == SRC_CONNECT_DONE) {
		ADC_CRT_Setting(_ENABLE);
		ADC_Resume();
	} else {
		ADC_CRT_Setting(_ENABLE);
		ADC_Disable_AHS_SMT_Power();
		drvif_adc_power_control(ADC_POWER_ALL_DISABLE_CONTROL,__func__,__LINE__);
	}

	if(get_AVD_Global_Status() == SRC_CONNECT_DONE)
	{
		AVD_Resume();
		VBI_Resume();
	}
	else
	{
		rtd_printk(KERN_DEBUG, TAG_NAME,"Error: Bypass AVD_Resume. get_AVD_Global_Status() != SRC_CONNECT_DONE\n");
	}

	 rtd_printk(KERN_EMERG, TAG_NAME,"STR RESUME  get_HDMI_Global_Status() = %d\n",get_HDMI_Global_Status());

	 if (get_HDMI_Global_Status() == SRC_NOTHING)//ANDROIDTV-10
	 {
	 	 rtd_printk(KERN_NOTICE, TAG_NAME,"vfe_resume NO HDMI connect status ??????????\n" );
	 }
	 else
	 {
	        vfe_hdmi_drv_resume_init();
	 }

    if (get_HDMI_Global_Status() == SRC_INIT_DONE || get_HDMI_Global_Status() == SRC_OPEN_DONE) {
            HDMI_Global_Status = SRC_INIT_DONE;
    }
    else if (get_HDMI_Global_Status() == SRC_CONNECT_DONE)
    {
                vfe_hdmi_drv_resume();
    }
	main_online_triggle = FALSE;
#ifdef CONFIG_DUAL_CHANNEL
	sub_online_triggle = FALSE;
#endif
    return 0;
}
#endif


int vfe_open(struct inode *inode, struct file *filp) {
	return 0;
}

ssize_t  vfe_read(struct file *filep, char *buffer, size_t count, loff_t *offp)
{
	return 0;

}

ssize_t vfe_write(struct file *filep, const char *buffer, size_t count, loff_t *offp)
{
	return 0;
}

int vfe_release(struct inode *inode, struct file *filep)
{
	return 0;
}

unsigned char get_hdmi_vrr_framerate(unsigned short *framerate)
{//return FALSE: for hdmi check spec. frame rat unit is real framerate*100
	unsigned char result = VRR_FRAMERATE_ERROR;
	if(!(vbe_disp_get_VRR_timingMode_flag() || vbe_disp_get_freesync_mode_flag()))
	{
		*framerate = 0;
		result =  VRR_FRAMERATE_DISABLE;
		//pr_debug("get_hdmi_vrr_framerate, can't get VRR_EN=1.\n" );
	}
	else if((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) != VSC_INPUTSRC_HDMI) || (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) != _MODE_STATE_ACTIVE))
	{//vsc not connect hdmi or scaler not ready. get framerate from HDMI
		*framerate = 0;
		result = VRR_FRAMERATE_ERROR;
		//pr_debug("get_hdmi_vrr_framerate, not current display port. mode = %d\n", Get_DisplayMode_Src(SLR_MAIN_DISPLAY) );
		//pr_debug("Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) = %d\n", Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE));

	}
	else
	{
		*framerate = get_scaler_ivs_framerate();
		result = VRR_FRAMERATE_FROM_SCALER;
	}
	return result;
}
#ifndef BACKGROUND_DET
#define BACKGROUND_DET 0
#endif
long vfe_ioctl(struct file *file, unsigned int cmd,  unsigned long arg)
{
	extern void Get_ADC_Gain_Offset_From_OTP(int src, ADCGainOffset *pGainOffsetData);
#ifdef CONFIG_CUSTOMER_TV010
	unsigned int NonStandardValue = 0;
#endif
//	abl_reserved_RBUS abl_Reserved_reg;//for debug test
	int ret = 0;
	KADP_VFE_AVD_TIMING_INFO_T *ptTimingInfo = NULL;
	//VFE_AVD_TIMING_INFO_T avdtiminginfo;
	KADP_ADC_TIMING_INFO_T adctiminginfo={0,0,0,0,0,0,0,{0,0,0,0},0,0};
	StructDisplayInfo *p_dispinfo = NULL;
	KADP_ADC_CAL_DATA_T customer_adc_info = {0, 0, 0, 0, 0, 0};
	ADCGainOffset rtk_adc_info = {0, 0, 0, 0, 0, 0};
	KADP_ADC_CAL_DATA_T customer_adc_wholeinfo[2] = {{0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}};//YPP and ScartRGB
	ADC_ADJ_PC_T adjust_pc = {0,0};
	/* hdmi rx local variable */
	unsigned char port = 0, hdmi_value = 0;
	bool avmute_status = 0;
	unsigned char hdmiport = 0;
	vfe_hdmi_timing_info_t hdmitiminginfo;//k3l error will mark 0603
    vfe_hdmi_drm_t drm_info;//k3l error will mark 0603
	vfe_hdmi_vsi_t vsi_info;//k3l error will mark 0603
	vfe_hdmi_spd_t spd_info;//k3l error will mark 0603
	vfe_hdmi_avi_t avi_info;//k3l error will mark 0603
    vfe_hdmi_all_packet_t allpacket_info;//k3l error will mark 0603
	vfe_hdmi_connect_state_t con_state = {0, 0};//k3l error will mark 0603
	vfe_hdmi_edid_read_write_ex edid_rw;
	vfe_hdmi_hdcp_data_t hdcp_data;
	vfe_hdmi_ksv_data_t ksv_data;
	vfe_hdmi_clockstatus_t sGetClockStatus = {0, 0};//k3l error will mark 0603
	vfe_hdmi_support_ver_t hdmi_version;
	vfe_hdmi_hdcp_ver_t hdcp_version;
	vfe_hdcp_table_t hdcp_support;
	unsigned char hdcp_2p2_ReceiverId[5] = {0};
	vfe_hdmi_hpd_t hpd_control;
	vfe_hdmi_diagnostic_data diagnostic_data;
	KADP_VFE_AVD_CC_TTX_STATUS_T tCCTTXStatus = KADP_VFE_AVD_NOTHING_IS_SUPPORTED;
	unsigned char ucSyncDetForTuning = false;
	KADP_VFE_AVD_COLOR_SYSTEM_T ColorSystem1 = KADP_COLOR_SYSTEM_NTSC_M;
	KADP_VFE_AVD_AVDECODER_VIDEO_MODE_T ColorSystem2 = KADP_VIDEO_AVDEC_MODE_NTSC;
	KADP_VFE_AVD_SCART_AR_T CurScartRatio = KADP_VIDEO_DDI_SCART_AR_16_9;
	KADP_VFE_AVD_SCART_FB_STATUS_T CurScartMode = KADP_VIDEO_DDI_FB_STATUS_CVBS;
	KADP_VFE_AVD_DEMOD_TYPE tDemodType = KADP_AVD_INTERNAL_DEMOD;
	KADP_VFE_AVD_AV_COEF_T tAvCoef = KADP_AVD_AV_CONFIG_1;
	unsigned char ucDetTimingInAutoScan = 0;
	unsigned int hpd_delay = 0;
	char arc_channel_status = 0;
	char earc_channel_status = 0;
	unsigned char VdcNoiseStatus = 0;
	vfe_hdmi_hdcp_data_apply_t hdcp_data_apply = {0, NULL,0};
	/* ====================== */
	SLR_VOINFO  *voTimingInfo = NULL;
//	VSC_INPUT_TYPE_T vo_src;
	unsigned char ch_port = 0;
	/* ====================== */
	unsigned char avOfflineStatus = 0;
	unsigned char atvStable = 0;


	if (_IOC_TYPE(cmd) != VFE_IOC_MAGIC) return -ENOTTY;

	switch(cmd)
	{
		case VFE_IOC_ADC_INIT:
			if(ADC_Global_Status != SRC_NOTHING)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"\r\n VFE_IOC_ADC_INIT Fail. Source is not SRC_NOTHING");
				return 0;//Fail Source is not SRC_NOTHING
			}
			//Kernel RPC initial @ Crixus 20141009

			ADC_Initial();
			ADC_Global_Status = SRC_INIT_DONE;
			break;

		case VFE_IOC_ADC_UNINIT:
			if(ADC_Global_Status != SRC_INIT_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"\r\n VFE_IOC_ADC_UNINIT Fail. Source is not SRC_INIT_DONE");
				return -1;//Fail Source is not SRC_INIT_DONE
			}
			ADC_Global_Status = SRC_NOTHING;
			break;

		case VFE_IOC_ADC_OPEN:
			if(ADC_Global_Status != SRC_INIT_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n VFE_IOC_ADC_OPEN Fail. Source is not SRC_INIT_DONE");
				return -1;//Fail Source is not SRC_INIT_DONE
			}
			down(get_adc_power_semaphore());
			ADC_Global_Status = SRC_OPEN_DONE;
			up(get_adc_power_semaphore());
			ADC_Open();
			break;

		case VFE_IOC_ADC_CLOSE:
			if(ADC_Global_Status != SRC_OPEN_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n VFE_IOC_ADC_CLOSE Fail. Source is not SRC_OPEN_DONE");
				return -1;//Fail Source is not SRC_OPEN_DONE
			}
			down(get_adc_power_semaphore());
			ADC_Global_Status = SRC_INIT_DONE;
			up(get_adc_power_semaphore());
			ADC_Close();
			down(get_adc_power_semaphore());
			if (AVD_Global_Status == SRC_NOTHING || AVD_Global_Status == SRC_INIT_DONE)
				drvif_adc_power_control (ADC_POWER_ALL_DISABLE_CONTROL,__func__,__LINE__);
			else
				drvif_adc_power_control (ADC_POWER_ADC_DISABLE_VDC_ALIVE_CONTROL,__func__,__LINE__);
			up(get_adc_power_semaphore());
			break;

		case VFE_IOC_ADC_YPP_CONNECT:
			if(ADC_Global_Status != SRC_OPEN_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n VFE_IOC_ADC_YPP_CONNECT Fail. Source is not SRC_OPEN_DONE");
				return -1;//Fail Source is not SRC_OPEN_DONE
			}
			if (copy_from_user((void *)&port, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] VFE_IOC_ADC_YPP_CONNECT copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				if(port == 0)
					ADC_Input = _YPBPR_INPUT1;
				else if(port == 1)
					ADC_Input = _YPBPR_INPUT2;
				else if(port == 2)
					ADC_Input = _YPBPR_INPUT3;
				else
				{
					rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n[ERR] VFE_IOC_ADC_YPP_CONNECT Port number(%d) error\n",port);
					return -1;//Port number is wrong
				}

				if(!ADC_Connect(_SRC_YPBPR, ADC_Input))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n[ERR] VFE_IOC_ADC_YPP_CONNECT Connect error\n");
					return -1;//Connect fail
				}
				down(&SetSource_Semaphore);
				ADC_Input_Source = _SRC_YPBPR;
				up(&SetSource_Semaphore);
				down(&ADC_DetectSemaphore);
				ADC_Global_Status = SRC_CONNECT_DONE;
				ADC_set_detect_flag(TRUE);
				ADC_register_callback(TRUE, YPbPr_DetectTiming);
				up(&ADC_DetectSemaphore);

			}
			break;

		case VFE_IOC_ADC_VGA_CONNECT:
			if(ADC_Global_Status != SRC_OPEN_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n VFE_IOC_ADC_VGA_CONNECT Fail. Source is not SRC_OPEN_DONE");
				return -1;//Fail Source is not SRC_OPEN_DON
			}
			if (copy_from_user((void *)&port, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] VFE_IOC_ADC_VGA_CONNECT copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				if(port == 0)
					ADC_Input = _VGA_INPUT1;
				else if(port == 1)
					ADC_Input = _VGA_INPUT2;
				else if(port == 2)
					ADC_Input = _VGA_INPUT3;
				else
					return -1;//Port number is wrong
				if(!ADC_Connect(_SRC_VGA, ADC_Input))
					return -1;//Connect fail
				down(&SetSource_Semaphore);
				ADC_Input_Source = _SRC_VGA;
				up(&SetSource_Semaphore);
				down(&ADC_DetectSemaphore);
				ADC_Global_Status = SRC_CONNECT_DONE;
				ADC_set_detect_flag(TRUE);
				ADC_register_callback(TRUE, VGA_DetectTiming);
				up(&ADC_DetectSemaphore);

			}
			break;

		case VFE_IOC_ADC_SCARTRGB_CONNECT:
			if(ADC_Global_Status != SRC_OPEN_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n VFE_IOC_ADC_SCARTRGB_CONNECT Fail. Source is not SRC_OPEN_DONE");
				return -1;//Fail Source is not SRC_OPEN_DON
			}
			if (copy_from_user((void *)&port, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] VFE_IOC_ADC_SCARTRGB_CONNECT copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "port=%d\n", port);


				if(port == 0)
					ADC_Input = _SCART_RGB_INPUT1;
				else if(port == 1)
					ADC_Input = _SCART_RGB_INPUT2;
				else if(port == 2)
					ADC_Input = _SCART_RGB_INPUT3;
				else
					return -1;//Port number is wrong


				if (0 == ADC_Scart_Connect(ADC_Input))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME, "ADC_Scart_Connect success\n");
					//down(&ADC_DetectSemaphore);

					//down(get_avd_power_semaphore());
					AVD_Global_Status = SRC_CONNECT_DONE;
					//up(get_avd_power_semaphore());
					ADC_Global_Status = SRC_CONNECT_DONE;

					ret = 0;

					ADC_set_detect_flag(TRUE);
					ADC_register_callback(TRUE, Scaler_AVD_DetectTiming);
					//up(&ADC_DetectSemaphore);
					//down(&SetSource_Semaphore);
					ADC_Input_Source = _SRC_SCART_RGB;
					//up(&SetSource_Semaphore);
				}
				else
				{
					rtd_printk(KERN_DEBUG, TAG_NAME, "ADC_Scart_Connect fail\n");
					return -1;
				}

				/*
				if(!ADC_Connect(_SRC_SCART_RGB, ADC_Input))
					return -1;//Connect fail

				down(&ADC_DetectSemaphore);
				ADC_Global_Status = SRC_CONNECT_DONE;
				up(&ADC_DetectSemaphore);
				*/

			}
			break;

		case VFE_IOC_ADC_YPP_DISCONNECT:
			if(ADC_Global_Status != SRC_CONNECT_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n VFE_IOC_ADC_YPP_DISCONNECT Fail. Source is not SRC_CONNECT_DONE");
				return -1;//Fail Source is not SRC_CONNECT_DONE
			}
			down(&SetSource_Semaphore);
			ADC_Input_Source = _SRC_MAX;
			up(&SetSource_Semaphore);
			down(&ADC_DetectSemaphore);
			ADC_Reset_TimingInfo();
			ADC_Global_Status = SRC_OPEN_DONE;
			ADC_register_callback(FALSE, NULL);
			ADC_set_detect_flag(FALSE);
			ADC_Disconnect();
			up(&ADC_DetectSemaphore);
			Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_ADC, CLEAR_ZERO_FLAG);
			break;

		case VFE_IOC_ADC_VGA_DISCONNECT:
			if(ADC_Global_Status != SRC_CONNECT_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n VFE_IOC_ADC_VGA_DISCONNECT Fail. Source is not SRC_CONNECT_DONE");
				return -1;//Fail Source is not SRC_CONNECT_DONE
			}
			down(&SetSource_Semaphore);
			ADC_Input_Source = _SRC_MAX;
			up(&SetSource_Semaphore);
			down(&ADC_DetectSemaphore);
			ADC_Reset_TimingInfo();
			ADC_Global_Status = SRC_OPEN_DONE;
			ADC_register_callback(FALSE, NULL);
			ADC_set_detect_flag(FALSE);
			ADC_Disconnect();
			up(&ADC_DetectSemaphore);
			Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_ADC, CLEAR_ZERO_FLAG);
			break;

		case VFE_IOC_ADC_SCARTRGB_DISCONNECT:
			if(ADC_Global_Status != SRC_CONNECT_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n VFE_IOC_ADC_SCARTRGB_DISCONNECT Fail. Source is not SRC_CONNECT_DONE");
				return -1;//Fail Source is not SRC_CONNECT_DONE
			}
			down(&SetSource_Semaphore);
			ADC_Input_Source = _SRC_MAX;
			up(&SetSource_Semaphore);
			down(&ADC_DetectSemaphore);
			ADC_Reset_TimingInfo();
			ADC_Global_Status = SRC_OPEN_DONE;
			ADC_register_callback(FALSE, NULL);
			ADC_set_detect_flag(FALSE);
			up(&ADC_DetectSemaphore);
			Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_ADC, CLEAR_ZERO_FLAG);
			break;

		case VFE_IOC_ADC_GET_TIMINGINFO:
			if(ADC_Global_Status== SRC_CONNECT_DONE)
			{
				if (ADC_Reply_Zero_Timing == SOURCE_GOOD_TIMING_READY) {
					down(&ADC_DetectSemaphore);
					p_dispinfo = Get_ADC_Dispinfo();
					if(p_dispinfo->IPH_ACT_WID_PRE != 0 && p_dispinfo->IPV_ACT_LEN_PRE != 0)
					{
						if(p_dispinfo->IPH_ACT_WID_PRE == 4095 && p_dispinfo->IPV_ACT_LEN_PRE == 4095) {
							adctiminginfo.active.w = p_dispinfo->IPH_ACT_WID_PRE;
							adctiminginfo.active.h = p_dispinfo->IPV_ACT_LEN_PRE;
							adctiminginfo.vFreq = p_dispinfo->IVFreq ? p_dispinfo->IVFreq : 600;
						} else {
							adctiminginfo.active.w = p_dispinfo->IPH_ACT_WID_PRE;
							adctiminginfo.active.h = p_dispinfo->IPV_ACT_LEN_PRE;
							adctiminginfo.active.x = p_dispinfo->IPH_ACT_STA_PRE;
							adctiminginfo.active.y = p_dispinfo->IPV_ACT_STA_PRE;
							adctiminginfo.hTotal = p_dispinfo->IHTotal;
							adctiminginfo.vTotal = p_dispinfo->IVTotal;
							adctiminginfo.hFreq = p_dispinfo->IHFreq *100;
							adctiminginfo.vFreq = p_dispinfo->IVFreq;
							adctiminginfo.hPorch = p_dispinfo->IPH_ACT_STA_PRE;
							adctiminginfo.vPorch = p_dispinfo->IPV_ACT_STA_PRE;
							adctiminginfo.scanType = Scaler_GetDispStatusFromSource(p_dispinfo, SLR_DISP_INTERLACE)? 0 : 1;//0 : Interlaced, 1 : Progressive  LGE SPEC
							adctiminginfo.phase = Get_ADC_PhaseValue();
						}
					}
					up(&ADC_DetectSemaphore);
				}
				else
				{
					Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_ADC, CLEAR_ZERO_FLAG);
				}
			}
			if (copy_to_user((int __user *)arg, &adctiminginfo, sizeof(KADP_ADC_TIMING_INFO_T)) )
			{
                rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] VFE_IOC_ADC_GET_TIMINGINFO copy_to_user error\n");
				ret = EFAULT;
            }
			break;

		case VFE_IOC_ADC_CALIBRATION_EXTERNAL:
			if(External_ADC_Calibration_proc((int)ADC_Input_Source) == FALSE)
			{
				rtd_printk(KERN_NOTICE, TAG_NAME, "[ERR] Run External_ADC_Calibration_proc fail\n");
				ret = EFAULT;
			}

			break;

		case VFE_IOC_ADC_CALIBRATION_INTERNAL:
			if(Internal_ADC_Calibration_proc((int)ADC_Input_Source) == FALSE)
			{
				rtd_printk(KERN_NOTICE, TAG_NAME, "[ERR] Run Internal_ADC_Calibration_proc fail\n");
				ret = EFAULT;
			}
			break;

		case VFE_IOC_ADC_CALIBRATION_OTP:
			break;

		case VFE_IOC_ADC_GET_ADCVALUE:
			ADC_Get_GainOffset(&rtk_adc_info);
			customer_adc_info.rGain = rtk_adc_info.Gain_R;
			customer_adc_info.gGain = rtk_adc_info.Gain_G;
			customer_adc_info.bGain = rtk_adc_info.Gain_B;
			customer_adc_info.rOffset = rtk_adc_info.Offset_R;
			customer_adc_info.gOffset = rtk_adc_info.Offset_G;
			customer_adc_info.bOffset = rtk_adc_info.Offset_B;
			if (copy_to_user((int __user *)arg, &customer_adc_info, sizeof(KADP_ADC_CAL_DATA_T)) )
			{
                rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] VFE_IOC_ADC_GET_ADCVALUE copy_to_user error\n");
				ret = EFAULT;
            }
			break;

		case VFE_IOC_ADC_SET_ADCVALUE:
			if (copy_from_user((void *)&customer_adc_info, (const void __user *)arg, sizeof(KADP_ADC_CAL_DATA_T)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] VFE_IOC_ADC_SET_ADCVALUE copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				rtk_adc_info.Gain_R = customer_adc_info.rGain;
				rtk_adc_info.Gain_G = customer_adc_info.gGain;
				rtk_adc_info.Gain_B = customer_adc_info.bGain;
				rtk_adc_info.Offset_R = customer_adc_info.rOffset;
				rtk_adc_info.Offset_G = customer_adc_info.gOffset;
				rtk_adc_info.Offset_B = customer_adc_info.bOffset;
				ADC_Set_GainOffset(&rtk_adc_info);
			}
			break;

		case VFE_IOC_ADC_GET_OTPDATA:
			Get_ADC_Gain_Offset_From_OTP(_SRC_YPBPR, &rtk_adc_info);
			customer_adc_wholeinfo[0].rGain = rtk_adc_info.Gain_R;
			customer_adc_wholeinfo[0].gGain = rtk_adc_info.Gain_G;
			customer_adc_wholeinfo[0].bGain = rtk_adc_info.Gain_B;
			customer_adc_wholeinfo[0].rOffset = rtk_adc_info.Offset_R;
			customer_adc_wholeinfo[0].gOffset = rtk_adc_info.Offset_G;
			customer_adc_wholeinfo[0].bOffset = rtk_adc_info.Offset_B;
			Get_ADC_Gain_Offset_From_OTP(_SRC_SCART_RGB, &rtk_adc_info);
			customer_adc_wholeinfo[1].rGain = rtk_adc_info.Gain_R;
			customer_adc_wholeinfo[1].gGain = rtk_adc_info.Gain_G;
			customer_adc_wholeinfo[1].bGain = rtk_adc_info.Gain_B;
			customer_adc_wholeinfo[1].rOffset = rtk_adc_info.Offset_R;
			customer_adc_wholeinfo[1].gOffset = rtk_adc_info.Offset_G;
			customer_adc_wholeinfo[1].bOffset = rtk_adc_info.Offset_B;
			if (copy_to_user((int __user *)arg, customer_adc_wholeinfo, sizeof(customer_adc_wholeinfo)) )
			{
                rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] VFE_IOC_ADC_GET_ADCVALUE copy_to_user error\n");
				ret = EFAULT;
            }
			break;

		case VFE_IOC_ADC_RESET_CALIBRATION:
			Reset_ADC_Gain_Offset((int)ADC_Input_Source);
			break;

		case VFE_IOC_ADC_FAST_MODE:
			break;

		case VFE_IOC_ADC_ADJ_PC:

			if (copy_from_user((void *)&adjust_pc, (const void __user *)arg, sizeof(ADC_ADJ_PC_T)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] VFE_IOC_ADC_ADJ_PC copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				rtd_printk(KERN_NOTICE, TAG_NAME, "#####rzhen##### [%s(%d)] adjust_pc.mode=%d #####\n", __func__, __LINE__, adjust_pc.mode);
				rtd_printk(KERN_NOTICE, TAG_NAME, "#####rzhen##### [%s(%d)] adjust_pc.value=%d #####\n", __func__, __LINE__, adjust_pc.value);

				down(&ADC_ADJ_Semaphore);
				if((Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE) && (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_ADC) && (get_ADC_Input_Source() == _SRC_VGA))
				{
					if(adjust_pc.mode == ADC_ADJ_PC_H_POS){

						Scaler_SetHPosition(adjust_pc.value);
					}else if(adjust_pc.mode == ADC_ADJ_PC_V_POS){

						Scaler_SetVPosition(adjust_pc.value);
					}else if(adjust_pc.mode == ADC_ADJ_PC_CLOCK){

						down(&ADC_DetectSemaphore);
						if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE)
							Scaler_SetClock(adjust_pc.value);
						up(&ADC_DetectSemaphore);
					}else if(adjust_pc.mode == ADC_ADJ_PC_PHASE){

						Scaler_SetPhase(adjust_pc.value);
					}else if(adjust_pc.mode == ADC_ADJ_PC_AUTO){

						Scaler_AdjustPCAuto(SLR_MAIN_DISPLAY);
					}
				}
				up(&ADC_ADJ_Semaphore);
			}
			break;

		case VFE_IOC_ADC_ADJ_PC_AUTO:
			if(Scaler_AdjustPCAuto(SLR_MAIN_DISPLAY) == FALSE){

				rtd_printk(KERN_NOTICE, TAG_NAME, "[ERR] Run Scaler_AdjustPCAuto fail\n");
				ret = EFAULT;
			}
			break;

		case VFE_IOC_ADC_PC_GET_VALUE:

			if (copy_from_user((void *)&adjust_pc, (const void __user *)arg, sizeof(ADC_ADJ_PC_T)))
			{
				rtd_printk(KERN_NOTICE, TAG_NAME, "[ERR] VFE_IOC_ADC_ADJ_PC copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				rtd_printk(KERN_NOTICE, TAG_NAME, "#####rzhen##### [%s(%d)] adjust_pc.mode=%d #####\n", __func__, __LINE__, adjust_pc.mode);
				rtd_printk(KERN_NOTICE, TAG_NAME, "#####rzhen##### [%s(%d)] adjust_pc.value=%d #####\n", __func__, __LINE__, adjust_pc.value);

				if(adjust_pc.mode == ADC_ADJ_PC_H_POS){

					adjust_pc.value = Scaler_GetHPosition();
				}else if(adjust_pc.mode == ADC_ADJ_PC_V_POS){

					adjust_pc.value = Scaler_GetVPosition();
				}else if(adjust_pc.mode == ADC_ADJ_PC_CLOCK){

					adjust_pc.value = Scaler_GetClock();
				}else if(adjust_pc.mode == ADC_ADJ_PC_PHASE){

					adjust_pc.value = Scaler_GetPhase();
				}

				rtd_printk(KERN_NOTICE, TAG_NAME, "#####rzhen##### [%s(%d)] adjust_pc.value=%d #####\n", __func__, __LINE__, adjust_pc.value);

				if (copy_to_user((int __user *)arg, &adjust_pc, sizeof(ADC_ADJ_PC_T)))
				{
					rtd_printk(KERN_NOTICE, TAG_NAME, "[ERR] VFE_IOC_ADC_PC_GET_VALUE copy_to_user error\n");
					ret = EFAULT;
				}
			}

			break;

		case VFE_IOC_ADC_GET_TARTGET_DIFF:
			if(drvif_self_awb_get_target_diff_proc((int)ADC_Input_Source) == FALSE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] Run drvif_self_awb_get_target_diff_proc fail\n");
				ret = EFAULT;
			}
			break;
		case VFE_IOC_ADC_GET_CGMS:
			{
				unsigned int cgms_data;
				cgms_data = Scaler_VbiGet_cgms();
				if(copy_to_user((void __user *)arg, (void *)&cgms_data, sizeof(unsigned int)))
				{
					ret =-EFAULT;
					rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vfe ioctl code=VFE_IOC_ADC_GET_CGMS failed!!!!!!!!!!!!!!!\n");
				}
				break;
			}
		case VFE_IOC_ADC_GET_480IWSS:
			{
				unsigned int wss_480i_data;
				wss_480i_data = Scaler_VbiGet_480I_WSS();
				if(copy_to_user((void __user *)arg, (void *)&wss_480i_data, sizeof(unsigned int)))
				{
					ret =-EFAULT;
					rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vfe ioctl code=VFE_IOC_ADC_GET_480IWSS failed!!!!!!!!!!!!!!!\n");
				}
				break;
			}
		case VFE_IOC_ADC_GET_576IWSS:
			{
				unsigned int wss_576i_data;
				wss_576i_data = Scaler_VbiGet_576I_WSS();
				if(copy_to_user((void __user *)arg, (void *)&wss_576i_data, sizeof(unsigned int)))
				{
					ret =-EFAULT;
					rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vfe ioctl code=VFE_IOC_ADC_GET_576IWSS failed!!!!!!!!!!!!!!!\n");
				}
				break;
			}

		// ========AVD=================
		case VFE_IOC_AVD_INIT:

			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_INIT start\n");

			if (SRC_NOTHING != AVD_Global_Status)
			{
				ret = -1;

				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_INIT fail, AVD_Global_Status=%d\n",AVD_Global_Status);

			}

			if (copy_from_user(&tCCTTXStatus, (int __user *)arg, sizeof(tCCTTXStatus))) {

			 	rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_INIT get parameter fail\n");
				ret = -1;

			}
			else
			{
				//extern int atv_v4l2_init(void);

				//rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_INIT get parameter success\n");
				rtd_printk(KERN_NOTICE, TAG_NAME, "####[%s(%d)] ucCCStatus:%x .\n",__func__,__LINE__,tCCTTXStatus);

				//if(KADP_VFE_AVD_NOTHING_IS_SUPPORTED == tCCTTXStatus){//for V4L2 ATV DDTS Test
					//ret = atv_v4l2_init();
				//}else{
					ret = Scaler_AVD_Init(tCCTTXStatus);
				//}
			}

 			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_INIT end\n");

			//down(get_avd_power_semaphore());
			AVD_Global_Status = SRC_INIT_DONE;
			//up(get_avd_power_semaphore());


			break;

		case VFE_IOC_AVD_UNINIT:
			{
			extern unsigned char vbi_cc_buffer_need_set;
			extern unsigned char vbi_tt_buffer_need_set;
			extern unsigned char vbi_vps_buffer_need_set;
			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_UNINIT start\n");

			if (SRC_INIT_DONE != AVD_Global_Status)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_UNINIT fail, AVD_Global_Status=%d\n",AVD_Global_Status);

				ret = -1;

				break;
			}

			//down(get_avd_power_semaphore());
			AVD_Global_Status = SRC_NOTHING;
			//up(get_avd_power_semaphore());

			ret = Scaler_AVD_Uninit();
			vbi_cc_buffer_need_set=0;
			vbi_tt_buffer_need_set=0;
			vbi_vps_buffer_need_set=0;
			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_UNINIT success\n");


			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_UNINIT end\n");
			}
			break;

		case VFE_IOC_AVD_OPEN:

			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_OPEN start\n");

			if (SRC_INIT_DONE != AVD_Global_Status)
			{
				ret = -1;
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_OPEN fail, AVD_Global_Status=%d\n",AVD_Global_Status);

				break;
			}

			down(get_adc_power_semaphore());
			//down(get_avd_power_semaphore());
			AVD_Global_Status = SRC_OPEN_DONE;
			//up(get_avd_power_semaphore());
			up(get_adc_power_semaphore());


			ret = VFE_AVD_OPEN();
			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_OPEN end\n");

			break;

		case VFE_IOC_AVD_CLOSE:

			if (SRC_OPEN_DONE != AVD_Global_Status)
			{
				ret = -1;
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_CLOSE fail, AVD_Global_Status=%d\n",AVD_Global_Status);

				break;
			}

			//frank test down(&VDC_DetectSemaphore);
			VDC_set_detect_flag(FALSE);
			//frank test up(&VDC_DetectSemaphore);


			down(get_adc_power_semaphore());
			//down(get_avd_power_semaphore());
			AVD_Global_Status = SRC_INIT_DONE;
			//up(get_avd_power_semaphore());
			up(get_adc_power_semaphore());

			//frank@1111 mark to speed up avd_close speed
			//down(&VDC_DetectSemaphore);
			//up(&VDC_DetectSemaphore);
			ret = Scaler_AVD_Close();
			down(get_adc_power_semaphore());
			if (ADC_Global_Status == SRC_NOTHING || ADC_Global_Status == SRC_INIT_DONE)
				drvif_adc_power_control (ADC_POWER_ALL_DISABLE_CONTROL,__func__,__LINE__);
			else
				drvif_adc_power_control (ADC_POWER_VDC_DISABLE_ADC_ALIVE_CONTROL,__func__,__LINE__);
			up(get_adc_power_semaphore());

			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_CLOSE success\n");

			break;

		case VFE_IOC_AVD_ATV_CONNECT:
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "%s, %s, %d\n", __FILE__, __FUNCTION__, __LINE__);

			if (SRC_OPEN_DONE != AVD_Global_Status)
			{
				ret = -1;
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_ATV_CONNECT fail, AVD_Global_Status=%d\n",AVD_Global_Status);

				break;

			}

			if (copy_from_user((void *)&port, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "ATV port=%d\n", port);
				ret = VFE_AVD_ATV_CONNECT(port);
				if (ret == 0) {
					//down(&SetSource_Semaphore);
					AVD_Input_Source = _SRC_TV;
					//up(&SetSource_Semaphore);
				}
			}


			break;
		}
		case VFE_IOC_AVD_AV_CONNECT:

			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_AV_CONNECT start\n");

			if (SRC_OPEN_DONE != AVD_Global_Status)
			{
				ret = -1;
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_AV_CONNECT fail, AVD_Global_Status=%d\n",AVD_Global_Status);

				break;
			}


			if (copy_from_user((void *)&port, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] copy_from_user error\n");
				ret = -1;
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "AV port=%d\n", port);

				// Original
			if(port == 0)
				{
					AVD_Input = _AV_INPUT1;  // Orignal, Vin=13, A0N
				}
				// CVBS, YPP use the same Y
			else if(port == 1)
				{
					AVD_Input = _AV_INPUT1;  // Vin=4, A0N
				}
				// CVBS, YPP use separate Y
			else if(port == 2)
				{
					AVD_Input = _AV_INPUT1;  // Vin=13, A0N
				}
			else
				return -1;//Port number is wrong

			if (0 == Scaler_AVD_AV_Connect(AVD_Input))
			{
				//down(&VDC_DetectSemaphore);
				//down(get_avd_power_semaphore());
				AVD_Global_Status = SRC_CONNECT_DONE;
				AV_Status = SRC_CONNECT_DONE;
				//up(get_avd_power_semaphore());
				//down(&SetSource_Semaphore);
				AVD_Input_Source = _SRC_CVBS;
				//up(&SetSource_Semaphore);
				VDC_set_detect_flag(TRUE);
				VDC_register_callback(TRUE, Scaler_AVD_DetectTiming);
				//up(&VDC_DetectSemaphore);
				ret = 0;
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_AV_CONNECT and Scaler_AVD_AV_Connect() success\n");
			}
			else
			{
				ret = -1;
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel Scaler_AVD_AV_Connect() fail\n");
			}

			}

			break;

		case VFE_IOC_AVD_SCART_CONNECT:

			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SCART_CONNECT start\n");

			if (SRC_OPEN_DONE != AVD_Global_Status)
			{
				ret = -1;
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SCART_CONNECT fail, AVD_Global_Status=%d\n",AVD_Global_Status);

				break;
			}


			if (copy_from_user((void *)&port, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "Scart port=%d\n", port);



			if(port == 0)
				AVD_Input = _SCART_INPUT1;
			else if(port == 1)
				AVD_Input = _SCART_INPUT2;
			else if(port == 2)
				AVD_Input = _SCART_INPUT3;
			else
				return -1;//Port number is wrong


			if (0 == Scaler_AVD_Scart_Connect(AVD_Input))
			{
				//down(&VDC_DetectSemaphore);
				//down(get_avd_power_semaphore());
				AVD_Global_Status = SRC_CONNECT_DONE;
				SCART_Status = SRC_CONNECT_DONE;
				//up(get_avd_power_semaphore());

				//down(&SetSource_Semaphore);
				AVD_Input_Source = _SRC_SCART;
				//up(&SetSource_Semaphore);

				VDC_set_detect_flag(TRUE);
				VDC_register_callback(TRUE, Scaler_AVD_DetectTiming);
				//up(&VDC_DetectSemaphore);
				ret = 0;
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SCART_CONNECT and Scaler_AVD_Scart_Connect() success\n");
			}
			else
			{
				ret = -1;
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel Scaler_AVD_Scart_Connect() fail\n");
			}

			}

			break;

		case VFE_IOC_AVD_ATV_DISCONNECT:
			if (SRC_CONNECT_DONE == ATV_Status && SRC_CONNECT_DONE == AVD_Global_Status)
			{
				//down(&VDC_DetectSemaphore);
				VDC_set_detect_flag(FALSE);
				//up(&VDC_DetectSemaphore);
				//down(get_avd_power_semaphore());
				AVD_Global_Status = SRC_OPEN_DONE;
				ATV_Status = SRC_OPEN_DONE;
				//up(get_avd_power_semaphore());

				Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_AVD, CLEAR_ZERO_FLAG);
				if (0 == Scaler_AVD_ATV_Disconnect())
				{
					ret = 0;
					//down(&SetSource_Semaphore);
					AVD_Input_Source = _SRC_MAX;
					//up(&SetSource_Semaphore);
				}
				else
				{
					ret = -1;
				}

				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_ATV_DISCONNECT success\n");
			}
			else
			{
				ret = -1;

				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_ATV_DISCONNECT fail, AVD_Global_Status=%d, ATV_Status=%d\n",AVD_Global_Status,ATV_Status);
			}



			break;

		case VFE_IOC_AVD_AV_DISCONNECT:

			if (SRC_CONNECT_DONE == AV_Status && SRC_CONNECT_DONE == AVD_Global_Status)
			{
				//down(&VDC_DetectSemaphore);
				VDC_set_detect_flag(FALSE);
				//down(get_avd_power_semaphore());
				AVD_Global_Status = SRC_OPEN_DONE;
				AV_Status = SRC_OPEN_DONE;
				//up(get_avd_power_semaphore());
				//up(&VDC_DetectSemaphore);
				Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_AVD, CLEAR_ZERO_FLAG);
				if (0 == Scaler_AVD_AV_Disconnect())
				{
					ret = 0;
					down(&SetSource_Semaphore);
					AVD_Input_Source = _SRC_MAX;
					up(&SetSource_Semaphore);
				}
				else
				{
					ret = -1;
				}

				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_AV_DISCONNECT success\n");
			}
			else
			{
				ret = -1;

				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_AV_DISCONNECT fail, AVD_Global_Status=%d, AV_Status=%d\n",AVD_Global_Status,AV_Status);
			}



			break;

		case VFE_IOC_AVD_SCART_DISCONNECT:

			if (SRC_CONNECT_DONE == SCART_Status && SRC_CONNECT_DONE == AVD_Global_Status)
			{
				//down(&VDC_DetectSemaphore);
				VDC_set_detect_flag(FALSE);
				//down(get_avd_power_semaphore());
				AVD_Global_Status = SRC_OPEN_DONE;
				SCART_Status = SRC_OPEN_DONE;
				//up(get_avd_power_semaphore());
				//up(&VDC_DetectSemaphore);
				AVD_Reply_Zero_Timing = FALSE;
				if (0 == Scaler_AVD_Scart_Disconnect())
				{
					ret = 0;
					//down(&SetSource_Semaphore);
					AVD_Input_Source = _SRC_MAX;
					//up(&SetSource_Semaphore);
				}
				else
				{
					ret = -1;
				}


				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SCART_DISCONNECT success\n");
			}
			else
			{
				ret = -1;

				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SCART_DISCONNECT fail, , AVD_Global_Status=%d, SCART_Status=%d\n",AVD_Global_Status,SCART_Status);
			}

			break;

		case VFE_IOC_AVD_SET_SYNC_DETECTION_FOR_TUNING:
		{

			rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SET_SYNC_DETECTION_FOR_TUNING.\n");


			if (SRC_CONNECT_DONE != AVD_Global_Status)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel SRC_CONNECT_DONE fail, AVD_Global_Status=%d\n", AVD_Global_Status);
				ret = -1;
			}
			else
			{
				if (copy_from_user(&ucSyncDetForTuning, (int __user *)arg, sizeof(ucSyncDetForTuning)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SET_SYNC_DETECTION_FOR_TUNING get parameter fail\n");
					ret = -1;
				}
				else
				{
					Scaler_AVD_SetSyncDetectForTuning(ucSyncDetForTuning);

					ret = 0;

				}
			}


			break;
		}
#ifdef CONFIG_CUSTOMER_TV010
		case VFE_IOC_AVD_Coarse_Lock:
		{

			if (SRC_CONNECT_DONE != AVD_Global_Status)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_Coarse_Lock fail, AVD_Global_Status=%d\n", AVD_Global_Status);
				ret = -1;
			}
			else
			{
				ret = Scaler_AVD_HV_Coarse_Lock();
			}

			break;
		}
#endif
		case VFE_IOC_AVD_SOFT_RESET:
		{
		   // This function is being used by Tuner, when Auto-Tuning is performed.
		   //rtd_printk(KERN_INFO, TAG_NAME, "kernel VFE_IOC_AVD_SOFT_RESET start\n");

		   if (SRC_CONNECT_DONE != AVD_Global_Status)
		   {
			   rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SOFT_RESET fail, AVD_Global_Status=%d\n", AVD_Global_Status);
			   ret = -1;
		   }
		   else
		   {   
			   drvif_module_vdc_SoftReset_New();
			   ret = 0;
		   }

		   break;
		}

		case VFE_IOC_AVD_DOES_SYNC_EXIST:
		{
			// This function is being used by Tuner, when Auto-Tuning is performed.
			//rtd_printk(KERN_INFO, TAG_NAME, "kernel VFE_IOC_AVD_DOES_SYNC_EXIST start\n");

			if (SRC_CONNECT_DONE != AVD_Global_Status)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_DOES_SYNC_EXIST fail, AVD_Global_Status=%d\n", AVD_Global_Status);
				ret = -1;
			}
			else
			{
				ret = Scaler_AVD_DoesSyncExist();
			}

			break;
		}
		case VFE_IOC_AVD_SET_COLOR_SYSTEM:
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_SET_COLOR_SYSTEM Start\n");

			rtd_printk(KERN_DEBUG, TAG_NAME, "VFE_AVD_COLOR_SYSTEM_T size=%zu\n", sizeof(KADP_VFE_AVD_COLOR_SYSTEM_T));

			if (copy_from_user(&ColorSystem1, (int __user *)arg, sizeof(ColorSystem1)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SET_COLOR_SYSTEM fail\n");
				ret = -1;
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SET_COLOR_SYSTEM success\n");
				ret = 0;


			//rtd_printk(KERN_INFO, TAG_NAME, "0   ColorSystem=%x\n", ColorSystem);

			//ColorSystem = COLOR_SYSTEM_NTSC_M | COLOR_SYSTEM_PAL_G;
			// Wait demo_ap ready to set Corrent color std.
			//ColorSystem = 0xff;

				rtd_printk(KERN_DEBUG, TAG_NAME, "1   ColorSystem=%x\n", ColorSystem1);

				Scaler_AVD_SetLGEColorSystem(ColorSystem1);
			}
			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_SET_COLOR_SYSTEM End\n");
			break;
		}
		case VFE_IOC_AVD_GET_COLOR_SYSTEM:
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_GET_COLOR_SYSTEM Start\n");

			rtd_printk(KERN_DEBUG, TAG_NAME, "VFE_AVD_AVDECODER_VIDEO_MODE_T size=%zu\n", sizeof(KADP_VFE_AVD_AVDECODER_VIDEO_MODE_T));
			if (0 == Scaler_AVD_GetLGEColorSystem(&ColorSystem2))
			{
				ret = 0;
		        if (copy_to_user((void __user *)arg, (const void * )&ColorSystem2, sizeof(ColorSystem2)))
		        {
			        rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] copy_to_user error\n");
			        ret = -1;
		        }
			}
			else
			{
				ret = -1;
			}

			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_GET_COLOR_SYSTEM End\n");
			break;
		}
		case VFE_IOC_AVD_GET_TIMINGINFO:

			//rtd_printk(KERN_INFO, TAG_NAME, "kernel VFE_IOC_AVD_GET_TIMINGINFO start\n");
			if (AVD_Global_Status == SRC_CONNECT_DONE) {

				ptTimingInfo = Scaler_AVD_GetLGETimingInfo((unsigned char*)&ret);

				if (0 == ret)
				{
					if (copy_to_user((int __user *)arg, (const void * )ptTimingInfo, sizeof(KADP_VFE_AVD_TIMING_INFO_T)) )
					{
						rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_GET_TIMINGINFO fail\n");
						ret = -1;
					}
					else
					{
						//rtd_printk(KERN_NOTICE, TAG_NAME,"NaOK,s=%d,w=%d,h=%d,f=%d\n", ptTimingInfo->standard,ptTimingInfo->active.w,ptTimingInfo->active.h,ptTimingInfo->vFreq);
						//rtd_printk(KERN_INFO, TAG_NAME, "Kernel VFE_IOC_AVD_GET_TIMINGINFO success\n");
						return ret;
					}
				}
				else
				{
					ret = -1;
				}
			}

			break;

		case VFE_IOC_AVD_GET_SCART_ID:
		{
			//rtd_printk(KERN_INFO, TAG_NAME, "Kernel VFE_IOC_AVD_GET_SCART_ID Start");

			if (0 == Scaler_AVD_GetScartID(&CurScartRatio))
			{
				ret = 0;

		        if (copy_to_user((void __user *)arg, (const void * )&CurScartRatio, sizeof(CurScartRatio)))
		        {
			        rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] copy_to_user error\n");
			        ret = -1;
		        }
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_GET_SCART_ID Fail\n");
				ret = -1;
			}

			//rtd_printk(KERN_INFO, TAG_NAME, "Kernel VFE_IOC_AVD_GET_SCART_ID End\n");
			break;
		}
		case VFE_IOC_AVD_GET_SCART_FAST_BLANKING_STATUS:
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_GET_SCART_FAST_BLANKING_STATUS Start");

			if (0 == Scaler_AVD_GetScartFastBlankingStatus(&CurScartMode))
			{
				ret = 0;
		        if (copy_to_user((void __user *)arg, (const void * )&CurScartMode, sizeof(CurScartMode)))
		        {
			         rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] copy_to_user error\n");
			         ret = -1;
		        }
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_GET_SCART_FAST_BLANKING_STATUS Fail\n");
				ret = -1;
			}
			down(get_adc_power_semaphore());
			if (ADC_Global_Status == SRC_NOTHING || ADC_Global_Status == SRC_INIT_DONE)
				drvif_adc_power_control (ADC_POWER_ALL_DISABLE_CONTROL,__func__,__LINE__);
			else
				drvif_adc_power_control (ADC_POWER_VDC_DISABLE_ADC_ALIVE_CONTROL,__func__,__LINE__);
			up(get_adc_power_semaphore());

			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_GET_SCART_FAST_BLANKING_STATUS End\n");
			break;
		}
		case VFE_IOC_AVD_SET_DEMOD_TYPE:
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_SET_DEMOD_TYPE Start");


			if (copy_from_user(&tDemodType, (int __user *)arg, sizeof(tDemodType)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SET_DEMOD_TYPE fail\n");
				ret = -1;
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_SET_DEMOD_TYPE success\n");
				rtd_printk(KERN_DEBUG, TAG_NAME, "VFE_IOC_AVD_SET_DEMOD_TYPE=%d\n", tDemodType);

				if (0 == Scaler_AVD_SetDemodType(tDemodType))
				{
					ret = 0;
				}
				else
				{
					ret = -1;
				}
			}

			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_SET_DEMOD_TYPE End\n");
			break;

		}
		case VFE_IOC_AVD_IFD_SET_AUDIO_BP:
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "VFE_IOC_AVD_IFD_SET_AUDIO_BP is not used anymore\n");
			ret = -1;

			#if 0
			rtd_printk(KERN_INFO, TAG_NAME, "VFE_IOC_AVD_IFD_SET_AUDIO_BP\n");

			if (copy_from_user(&ucAudioBPMode, (int __user *)arg, sizeof(ucAudioBPMode)))
			{
				rtd_printk(KERN_INFO, TAG_NAME, "kernel VFE_IOC_AVD_IFD_SET_AUDIO_BP fail\n");
				ret = -1;
			}
			else
			{
				rtd_printk(KERN_INFO, TAG_NAME, "kernel VFE_IOC_AVD_IFD_SET_AUDIO_BP success, ucAudioBPMode = %d\n", ucAudioBPMode);

				drvif_ifd_set_audio_bp(ucAudioBPMode);
				ret = 0;
			}
			#endif


			break;
		}
		case VFE_IOC_AVD_DRV_SET_AUDIO_BP:
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "VFE_IOC_AVD_DRV_SET_AUDIO_BP is not used anymore\n");
			ret = -1;
			#if 0
			unsigned int audio_select;
			if (copy_from_user(&audio_select, (int __user *)arg, sizeof(audio_select)))
			{
				rtd_printk(KERN_INFO, TAG_NAME, "kernel VFE_IOC_AVD_DRV_SET_AUDIO_BP fail\n");
				ret = -1;
			}
			else
			{
				rtd_printk(KERN_INFO, TAG_NAME, "kernel VFE_IOC_AVD_DRV_SET_AUDIO_BP success, audio_select = %d\n", audio_select);
				drv_ifd_set_audio_bp(audio_select);
				ret = 0;
			}
			#endif

			break;
		}
		case VFE_IOC_AVD_CHANGE_DEMOD_SYSTEM:
		{
			bool ChangeSystem = false;

			if (copy_from_user(&ChangeSystem, (int __user *)arg, sizeof(ChangeSystem)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"kernel VFE_IOC_AVD_CHANGE_DEMOD_SYSTEM fail\n");
				ret = -1;
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"kernel VFE_IOC_AVD_CHANGE_DEMOD_SYSTEM success\n");
				ret = 0;
			}

			rtd_printk(KERN_DEBUG, TAG_NAME,"kernel, change demod = %d\n", ChangeSystem);
			drvif_module_vdc_ResetChChangeCount();
			Scaler_AVD_SetChangeSystem(ChangeSystem);
			break;
		}
		//For K4L
		case VFE_IOC_AVD_ATV_SET_CH_CHANGE:
		{
			if (0 == Scaler_AVD_SetChannelChange())
			{
				ret = 0;

			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_ATV_SET_CH_CHANGE Fail\n");
				ret = -1;
			}
			break;
		}
	        case VFE_IOC_AVD_Auto_Tune_Mode:
		{
			bool bAutoTuneMode = false;
			extern unsigned int ATV_no_signal_Count;

			rtd_printk(KERN_INFO, TAG_NAME, "Kernel VFE_IOC_AVD_Auto_Tune_Mode Start\n");

			if (copy_from_user(&bAutoTuneMode, (int __user *)arg, sizeof(bAutoTuneMode)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_Auto_Tune_Mode fail\n");
				ret = -1;
			}
			else
			{
				rtd_printk(KERN_INFO, TAG_NAME, "kernel VFE_IOC_AVD_Auto_Tune_Mode success, bAutoTuneMode=%x\n", bAutoTuneMode);
				ret = 0;

				drvif_module_vdc_set_scan_flag((unsigned char)bAutoTuneMode);
				Scaler_AVD_SetAutoTuneCheck(false);
				Scaler_AVD_SetAutoTuneMode(true);
				ATV_no_signal_Count = 10;
			}
			rtd_printk(KERN_INFO, TAG_NAME, "Kernel VFE_IOC_AVD_Auto_Tune_Mode End\n");
			break;
		}
	        case VFE_IOC_AVD_DETECT_TIMING_IN_AUTOSCAN:
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_DETECT_TIMING_IN_AUTOSCAN Start\n");

			if (copy_from_user(&ucDetTimingInAutoScan, (int __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_DETECT_TIMING_IN_AUTOSCAN fail\n");
				ret = -1;
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel VFE_IOC_AVD_DETECT_TIMING_IN_AUTOSCAN success, ucDetTimingInAutoScan=%x\n", ucDetTimingInAutoScan);
				ret = 0;

				Scaler_AVD_Set_DetTiming_In_AutoScan_Flag(ucDetTimingInAutoScan);
			}
			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_DETECT_TIMING_IN_AUTOSCAN End\n");
			break;
		}
		/* hdmi rx ioctrl cmd cases start */
		case VFE_IOC_HDMI_INIT:
                        {
#if BACKGROUND_DET
			u_int32_t tout=200;
#endif
			if(HDMI_Global_Status != SRC_NOTHING)
			{
				if (HDMI_Global_Status==SRC_INIT_DONE)
				{
					rtd_printk(KERN_WARNING, TAG_NAME,"\r\n VFE_IOC_HDMI_INIT successed. Source has been initialized already (FSM=%d)\n", HDMI_Global_Status );
					return 0;
				}
				rtd_printk(KERN_WARNING, TAG_NAME,"\r\n VFE_IOC_HDMI_INIT Fail. Source is not SRC_NOTHING, FSM=%d\n", HDMI_Global_Status );
				return -1;//Fail Source is not SRC_NOTHING
			}

			if (vfe_hdmi_drv_init() != 0)
			{
				rtd_printk(KERN_WARNING, TAG_NAME,"\r\n vfe_hdmi_drv_init failed");
				ret = -1;
			}
			else
			{

                        	down(&HDMI_DetectSemaphore);
				HDMI_register_callback(TRUE, vfe_hdmi_drv_detect_mode);
                        	HDMI_set_detect_flag(TRUE);
                        	up(&HDMI_DetectSemaphore);

				HDMI_Global_Status = SRC_INIT_DONE;
			}
			break;
			}
		case VFE_IOC_HDMI_UNINIT:
			if(HDMI_Global_Status != SRC_INIT_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"\r\n VFE_IOC_HDMI_UNINIT Fail. Source is not SRC_INIT_DONE (fsm=%d)", HDMI_Global_Status);
				return -1;//Fail Source is not SRC_INIT_DONE
			}

			down(&HDMI_DetectSemaphore);
			HDMI_set_detect_flag(FALSE);
			HDMI_register_callback(FALSE, vfe_hdmi_drv_detect_mode);
			up(&HDMI_DetectSemaphore);

			if (vfe_hdmi_drv_uninit() != 0)
			{
				rtd_printk(KERN_WARNING, TAG_NAME,"\r\n VFE_IOC_HDMI_UNINIT failed. unit failed\n");
				ret = -1;
			}
			else
			{
				HDMI_Global_Status = SRC_NOTHING;
			}
			break;

		case VFE_IOC_HDMI_OPEN:
			
			if(HDMI_Global_Status != SRC_INIT_DONE)
			{
				if (HDMI_Global_Status==SRC_OPEN_DONE)
				{
					rtd_printk(KERN_WARNING, TAG_NAME,"\r\n VFE_IOC_HDMI_OPEN successed. HDMI has been opened already");
					return 0;
				}
				
				rtd_printk(KERN_WARNING, TAG_NAME,"\r\n VFE_IOC_HDMI_OPEN Fail. Source is not SRC_INIT_DONE (fsm=%d)\n", HDMI_Global_Status);
				return -1;//Fail Source is not SRC_INIT_DONE
			}

			if (vfe_hdmi_drv_open() != 0)//k3l error will mark 0603
			{
				ret = -1;
			}
			else
			{
				HDMI_Global_Status = SRC_OPEN_DONE;
			}
			break;

		case VFE_IOC_HDMI_CLOSE:
			if(HDMI_Global_Status != SRC_OPEN_DONE)
			{
				if (HDMI_Global_Status==SRC_INIT_DONE)
				{
					rtd_printk(KERN_WARNING, TAG_NAME,"\r\n VFE_IOC_HDMI_OPEN successed. HDMI has been opened already");
					return 0;
				}
				rtd_printk(KERN_WARNING, TAG_NAME,"\r\n VFE_IOC_HDMI_CLOSE Fail. Source is not SRC_OPEN_DONE");
				return -1;//Fail Source is not SRC_INIT_DONE
			}

			if (vfe_hdmi_drv_close() != 0)//k3l error will mark 0603
			{
				ret = -1;
			}
			else
			{
				HDMI_Global_Status = SRC_INIT_DONE;
			}
			break;

		case VFE_IOC_HDMI_CONNECT:
			if(HDMI_Global_Status != SRC_OPEN_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"\r\n VFE_IOC_HDMI_CONNECT Fail. Source is not SRC_OPEN_DONE");
				return -1;//Fail Source is not SRC_INIT_DONE
			}
			/* get port info */
			if (copy_from_user((void *)&port, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT; //bad addr
			}

			/* excute driver api */
			down(&HDMI_DetectSemaphore);
			if (vfe_hdmi_drv_connect(port) == 0)
			{
				//[KTASKWBS-5100]P_only mode ,change HDMI source can't display
				//P_only mode  hdmo disconnect /close  =>vsc disconnet => hdmi open/connect => vsc open/connect
				//Normal mode  vsc disconnect =>HDMI_set_detect_flag=1 =>hdmi disconnect /close /open/ connect =>vsc open/connect
				HDMI_set_detect_flag(TRUE);
				HDMI_Global_Status = SRC_CONNECT_DONE;
			}
			else
			{
				ret = -1;
			}
			up(&HDMI_DetectSemaphore);

			if (ret == 0) {
				down(&SetSource_Semaphore);
				HDMI_Input_Source = _SRC_HDMI;
				up(&SetSource_Semaphore);
			}

			break;

		case VFE_IOC_HDMI_DISCONNECT:
			if(HDMI_Global_Status != SRC_CONNECT_DONE)
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"\r\n VFE_IOC_HDMI_DISCONNECT Fail. Source is not SRC_CONNECT_DONE");
				return -1;//Fail Source is not SRC_INIT_DONE
			}
			/* get port info */
			if (copy_from_user((void *)&port, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT; //bad addr
			}

			/* excute driver api */
			down(&HDMI_DetectSemaphore);
			HDMI_Global_Status = SRC_OPEN_DONE;
			up(&HDMI_DetectSemaphore);

			if (vfe_hdmi_drv_disconnect(port) != 0)
			{
				ret = -1;
			} else {
				down(&SetSource_Semaphore);
				HDMI_Input_Source = _SRC_MAX;
				Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_HDMI, CLEAR_ZERO_FLAG);
				up(&SetSource_Semaphore);
			}
			break;
#if 1//3l error will mark 0603
		case VFE_IOC_HDMI_GET_PORT_TIMINGINFO:
			/* get port info*/
			if (copy_from_user((void *)&hdmitiminginfo, (const void __user *)arg, sizeof(hdmitiminginfo)))
			{
				rtd_printk(KERN_ERR, TAG_NAME,"[ERR] copy_from_user error\n");
				memset(&hdmitiminginfo, 0 , sizeof(hdmitiminginfo));
				if (copy_to_user((void __user *)arg, (const void * )&hdmitiminginfo, sizeof(hdmitiminginfo)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT;
				}
				ret = EFAULT;
			}
			else
			{
				unsigned int timing_ready = 0;

				if (HDMI_Global_Status == SRC_CONNECT_DONE)
				{
					if (vfe_hdmi_drv_is_current_channel(hdmitiminginfo.port))
					{
						down(&HDMI_DetectSemaphore);

						if (HDMI_Reply_Zero_Timing & REPORT_ZERO_TIMING)
						{
							Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_HDMI, CLEAR_ZERO_FLAG);
							HDMI_Reply_Zero_Timing_mute_cnt = HDMI_REPLY_ZERO_TIMING_COUNT;
							HDMI_ZERO_REPORT_RECORD_TIME = IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg);
							// FixMe, 20190919
							//HDMI_EMG("HDMI_Reply_Zero_Timing is set, is current port, return zero timing for %d times, and reset flag (port=%d)\n", 
							//	HDMI_Reply_Zero_Timing_mute_cnt, hdmitiminginfo.port);
						}

						if (HDMI_Reply_Zero_Timing_mute_cnt == ACTUAL_DETECT_RESULT)
						{
							// get timing from HDMI VFE
							hdmiport = hdmitiminginfo.port;
							if (vfe_hdmi_drv_get_port_timing_info(&hdmitiminginfo) == 0)
								timing_ready = 1;
							hdmitiminginfo.port = hdmiport;
							ret = (timing_ready) ? 0 : -1;
						}
						else  // need to debounce
						{
							if(HDMI_Reply_Zero_Timing_mute_cnt == CHECK_TIME_PERIOD)
							{
								if(!check_polling_time_period(HDMI_ZERO_REPORT_RECORD_TIME, IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg), HDMI_TIME_PERIOD_THRESHOULD))
								{//Next time return actually timing
									HDMI_Reply_Zero_Timing_mute_cnt = ACTUAL_DETECT_RESULT;
								}
							}
							else
							{
								// FixMe, 20190919
								//HDMI_EMG("HDMI_Reply_Zero_Timing_mute_cnt=%d > 0, return zero timing\n", HDMI_Reply_Zero_Timing_mute_cnt);
								
								HDMI_Reply_Zero_Timing_mute_cnt--;

								if (HDMI_Reply_Zero_Timing_mute_cnt > HDMI_REPLY_ZERO_TIMING_COUNT) 
								{
									// FixMe, 20190919
									//HDMI_EMG("Something wrong, HDMI_Reply_Zero_Timing_mute_cnt %d should less than %d !!!!!!!!\n",
									//HDMI_Reply_Zero_Timing_mute_cnt, HDMI_REPLY_ZERO_TIMING_COUNT);    
									BUG();
								}
							}
						}
						up(&HDMI_DetectSemaphore);
					}
					else
					{
						//if (HDMI_Reply_Zero_Timing==TRUE)
						//{
						//	HDMI_EMG("HDMI_Reply_Zero_Timing is set, but not current port, return zero timing (port=%d)\n",
						//		hdmitiminginfo.port);
						//}
					}
				}

				if (timing_ready==0)
				{
					hdmiport = hdmitiminginfo.port;
					memset(&hdmitiminginfo, 0 , sizeof(hdmitiminginfo));
					hdmitiminginfo.port = hdmiport;
				}

				/* update info to user */
				if (copy_to_user((void __user *)arg, (const void * )&hdmitiminginfo, sizeof(hdmitiminginfo)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT;
				}
			}
			break;
#endif
#if 1//3l error will mark 0603
		case VFE_IOC_HDMI_GET_DRM_INFO:
			/* get port info */
			if (copy_from_user((void *)&drm_info, (const void __user *)arg, sizeof(drm_info)))
			{
				rtd_printk(KERN_ERR, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				/* excute driver api */
				if (vfe_hdmi_drv_get_drm_info(&drm_info) != 0)
				{
					ret = -1;
				}

				/* update info to user */
				if (copy_to_user((void *)arg, &drm_info, sizeof(drm_info)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT;
				}
			}
			break;
#endif
#if 1//3l error will mark 0603
		case VFE_IOC_HDMI_GET_PORT_VSIINFO:
			/* get port info */
			if (copy_from_user((void *)&vsi_info, (const void __user *)arg, sizeof(vsi_info)))
			{
				rtd_printk(KERN_ERR, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				/* excute driver api */
				if (vfe_hdmi_drv_get_port_vsi_info(&vsi_info) != 0)
				{
					ret = -1;
				}

				/* update info to user */
				if (copy_to_user((void *)arg, &vsi_info, sizeof(vsi_info)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT;
				}
			}
			break;
#endif
#if 1//k3l error will mark 0603
		case VFE_IOC_HDMI_GET_PORT_SPDINFO:
			/* get port info*/
			if (copy_from_user((void *)&spd_info, (const void __user *)arg, sizeof(spd_info)))
			{
				rtd_printk(KERN_ERR, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				/* excute driver api */
				if (vfe_hdmi_drv_get_port_spd_info(&spd_info) != 0)
				{
					ret = -1;
				}

				/* update info to user */
				if (copy_to_user((void *)arg, &spd_info, sizeof(spd_info)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT;
				}
			}
			break;
#endif
#if 1//k3l error will mark 0603
		case VFE_IOC_HDMI_GET_PORT_AVIINFO:
			/* get port info*/
			if (copy_from_user((void *)&avi_info, (const void __user *)arg, sizeof(avi_info)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				/* excute driver api */
				if (vfe_hdmi_drv_get_port_avi_info(&avi_info) != 0)
				{
					ret = -1;
				}

				/* update info to user */
				if (copy_to_user((void *)arg, &avi_info, sizeof(avi_info)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT;
				}
			}
			break;
#endif
#if 1//k3l error will mark 0603
		case VFE_IOC_HDMI_GET_PORT_ALLPACKET:
			/* get port info*/
			if (copy_from_user((void *)&allpacket_info, (const void __user *)arg, sizeof(allpacket_info)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				/* excute driver api */
				if (vfe_hdmi_drv_get_port_allpacket_info(&allpacket_info) != 0)
				{
					ret = -1;
				}
				/* update info to user */
				if (copy_to_user((void *)arg, &allpacket_info, sizeof(allpacket_info)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT;
				}
			}
			break;
#endif

		case VFE_IOC_HDMI_READ_MULTI_VSIF:
		{
			vfe_hdmi_multi_vsif mvsif;

			if (copy_from_user((void *)&mvsif, (const void __user *)arg, sizeof(vfe_hdmi_multi_vsif)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				int len = sizeof(KADP_HAL_VFE_HDMI_IN_PACKET_T) * mvsif.n_vsif;
				KADP_HAL_VFE_HDMI_IN_PACKET_T* p_vsif = (KADP_HAL_VFE_HDMI_IN_PACKET_T*) kmalloc(len, GFP_KERNEL);
			
				if (p_vsif==NULL) {
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] allocate memory failed\n");
					ret = EFAULT;
				}
				else
				{
					if (vfe_hdmi_drv_get_port_multi_vsi_info(mvsif.port, p_vsif, mvsif.n_vsif)<0 ||
						copy_to_user(to_user_ptr(mvsif.p_vsif), p_vsif, len)) {
						ret = EFAULT;
					}
					kfree(p_vsif);
				}
			}
			break;
		}
		
		case VFE_IOC_HDMI_GET_EM_PACKET:
		{
			vfe_hdmi_get_emp_t emp;

			if (copy_from_user((void *)&emp, (const void __user *)arg, sizeof(emp)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = -EFAULT;
			}
			else
			{
				unsigned char *tmp_emp;
				int len = 0;
				// FixMe, 20190919
				//tmp_emp = (unsigned char*) kmalloc(MAX_EM_HDR_INFO_LEN, GFP_KERNEL);
				if (tmp_emp==NULL)
				{
					rtd_printk(KERN_ERR, TAG_NAME,"[ERR] VFE_IOC_HDMI_GET_EM_PACKET memeory fail \n");
					ret = -EFAULT;					
				}
				else
				{
					// FixMe, 20190919
					//len = vfe_hdmi_get_emp(emp.port, emp.type, tmp_emp, MAX_EM_HDR_INFO_LEN);

					if (len <= 0 || copy_to_user(to_user_ptr(emp.p_buff), tmp_emp, len))
						ret = -EFAULT;

					kfree(tmp_emp);
				}
			}
			break;
		}    
        
#if 1//k3l error will mark 0603
		case VFE_IOC_HDMI_GET_CONNECTION_STATE:
			/* get port info*/
			if (copy_from_user((void *)&con_state, (const void __user *)arg, sizeof(con_state)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				/* excute driver api */
				vfe_hdmi_drv_get_connection_state(&con_state);

				/* update info to user */
				if (copy_to_user((void *)arg, &con_state, sizeof(con_state)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT;
				}
			}
			break;
#endif
		case VFE_IOC_HDMI_ENABLE_HPD:
			if (vfe_hdmi_drv_enable_hpd() != 0)//k3l error will mark 0603
			{
				ret = -1;
			}
			break;

		case VFE_IOC_HDMI_DISABLE_HPD:
			if (vfe_hdmi_drv_disable_hpd() != 0)//k3l error will mark 0603
			{
				ret = -1;
			}
			break;
		case VFE_IOC_HDMI_RESTART_HPD:
			/* get port info */
			if (copy_from_user((void *)&port, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT; //bad addr
			}
			/* excute driver api */
			if (vfe_hdmi_drv_restart_hpd(port) != 0)
			{
				ret = -1;
			}
			break;
		case VFE_IOC_HDMI_DISABLE_INTERNAL_EDID_ACCESS:
			/* get port info */
			if (copy_from_user((void *)&port, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT; //bad addr
			}

			/* excute driver api */
			if(vfe_hdmi_drv_disable_internal_edid_access(port) != 0)//k3l error will mark 0603
			{
				ret = -1;
			}

			break;

		case VFE_IOC_HDMI_READ_EDID_EX:
			
			if (copy_from_user((void *)&edid_rw, (const void __user *)arg, sizeof(edid_rw)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = -EFAULT;
			}
			else
			{
				if ((edid_rw.len != 256) && (edid_rw.len !=512)) 
				{
					rtd_printk(KERN_ERR, TAG_NAME,"[ERR] read edid to HDMI-%d failed, invalid size - %d\n", edid_rw.port,  edid_rw.len);
					ret = -EFAULT;
				}
				else
				{
					unsigned char* p_edid = (unsigned char*) kmalloc(edid_rw.len, GFP_KERNEL);
				
					if (p_edid==NULL || 
						vfe_hdmi_drv_read_edid(edid_rw.port, p_edid, edid_rw.len)!=0 ||
						copy_to_user(to_user_ptr(edid_rw.p_edid), p_edid, edid_rw.len)!=0)
					{
						rtd_printk(KERN_ERR, TAG_NAME,"[ERR] read edid to HDMI-%d failed, copy to user space edid data failed\n", edid_rw.port);
						ret = -EFAULT;
					}
					kfree(p_edid);
				}
			}
			break;
			
		case VFE_IOC_HDMI_WRITE_EDID_EX:
			
			if (copy_from_user((void *)&edid_rw, (const void __user *)arg, sizeof(edid_rw)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = -EFAULT;
			}
			else
			{
				rtd_printk(KERN_ERR, TAG_NAME,"[EDID] write edid_ex to HDMI-%d with len - %d\n", edid_rw.port,  edid_rw.len);
			
				if ((edid_rw.len != 256) && (edid_rw.len !=512)) 
				{
					rtd_printk(KERN_ERR, TAG_NAME,"[ERR] write edid to HDMI-%d failed, invalid size - %d\n", edid_rw.port, edid_rw.len);
					ret = -EFAULT;
				}
				else
				{	
					unsigned char* p_edid = (unsigned char*) kmalloc(edid_rw.len, GFP_KERNEL);
					if (p_edid==NULL || 
						copy_from_user(p_edid, to_user_ptr(edid_rw.p_edid), edid_rw.len)!=0
#ifndef CONFIG_SUPPORT_FREESYNC
						|| vfe_hdmi_drv_write_edid(edid_rw.port, p_edid, edid_rw.len, edid_rw.flags)!=0
#endif
					)
					{
						rtd_printk(KERN_ERR, TAG_NAME,"[ERR] write edid to HDMI-%d failed, copy user space edid data failed\n", edid_rw.port);
						ret = -EFAULT;
					}
					kfree(p_edid);
				}
			}
			break;
			
		case VFE_IOC_HDMI_CONTROL:
		{
			vfe_hdmi_ctrl ctrl;
		    
			if (copy_from_user((void *)&ctrl, (const void __user *)arg, sizeof(ctrl)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = -EFAULT;
			}
			else
			{
			       //pr_debug("[Jayson] VFE_IOC_HDMI_CONTROL, ctrl.rw = %d, port = %d, cmd = 0x%x\n", ctrl.rw, ctrl.port, ctrl.ctrl);
				if (0 == ctrl.rw)
				{//set/execute
				       ret = vfe_hdmi_drv_set_config(ctrl.port, ctrl.ctrl, ctrl.param, ctrl.reserved);
					//pr_debug("VFE_IOC_HDMI_CONTROL SET success, cmd id = %d, ret = %d\n",  ctrl.ctrl, ret);
				}
				else if(1 == ctrl.rw)
				{//get
				       ret = vfe_hdmi_drv_get_config(ctrl.port, ctrl.ctrl, &ctrl.param);
					//pr_debug("VFE_IOC_HDMI_CONTROL GET success, cmd id = %d, ret = %d\n",  ctrl.ctrl, ret);
					/* update info to user */
					if (copy_to_user((void *)arg, &ctrl, sizeof(ctrl))!=0)
					{
						rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
						ret = -EFAULT; //bad addr
					}
				}
				else
				{
					pr_err("[ERR] VFE_IOC_HDMI_CONTROL fail\n");
					ret = -EFAULT;
				}
			}
			break;
		}				
			
		case VFE_IOC_HDMI_WRITE_HDCP:

			if (copy_from_user((void *)&hdcp_data, (const void __user *)arg, sizeof(hdcp_data)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				char *p_ksv = kmalloc(5, GFP_KERNEL);
				char *p_device_key = kmalloc(320, GFP_KERNEL);

				if (copy_from_user(p_ksv, to_user_ptr(hdcp_data.pksv), 5) ||
					copy_from_user(p_device_key, to_user_ptr(hdcp_data.pdevice_key), 320))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
					ret = EFAULT;
				}
				else 
				{
					if (vfe_hdmi_drv_write_hdcp(p_ksv, p_device_key) != 0)
						ret = -1;
				}

				kfree(p_ksv);
				kfree(p_device_key);
			}
			break;

		case VFE_IOC_HDMI_READ_HDCP:

			if (copy_from_user((void *)&hdcp_data, (const void __user *)arg, sizeof(hdcp_data)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				char *p_ksv = kmalloc(5, GFP_KERNEL);
				char *p_device_key = kmalloc(320, GFP_KERNEL);

				memset(p_ksv, 0, 5);
				memset(p_device_key, 0, 320);

				if (vfe_hdmi_drv_read_hdcp(p_ksv, p_device_key) != 0)
				{
					ret = -1;
				}
				else
				{
					if (copy_to_user(to_user_ptr(hdcp_data.pksv), p_ksv, 5) ||
						copy_to_user(to_user_ptr(hdcp_data.pdevice_key), p_device_key, 320))
					{
						rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
						ret = EFAULT;
					}
				}

				kfree(p_ksv);
				kfree(p_device_key);
			}
			break;

		case VFE_IOC_HDMI_GET_SOURCE_KSVDATA:

			if (copy_from_user((void *)&ksv_data, (const void __user *)arg, sizeof(ksv_data)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				unsigned char ksv[5];

				if (vfe_hdmi_drv_get_src_ksv_data(ksv_data.port, ksv) != 0 ||
					copy_to_user(to_user_ptr(ksv_data.pksv), &ksv, 5))
				{
					ret = EFAULT;
				}
			}
			break;

#if 1//k3l error will mark 0603
		case VFE_IOC_HDMI_GET_CLOCKSTATUS:
			/* get port info */
			if (copy_from_user((void *)&sGetClockStatus, (const void __user *)arg, sizeof(sGetClockStatus)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT; //bad addr
			}
			else
			{
				/* excute driver api */
				sGetClockStatus.bClockStatus = vfe_hdmi_drv_get_clock_status(sGetClockStatus.port);
				/* update info to user */
				if (copy_to_user((void *)arg, &sGetClockStatus, sizeof(sGetClockStatus)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT; //bad addr
				}
			}
			break;
#endif


		case VFE_IOC_HDMI_GET_AUDIO_CODING_TYPE:
			/* excute driver api */
			if (vfe_hdmi_drv_get_audio_coding_type(&hdmi_value) != 0)//k3l error will mark 0603
			{
				ret = -1;
			}

			/* update info to user */
			if (copy_to_user((void *)arg, &hdmi_value, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;

		case VFE_IOC_HDMI_SET_HPD_LOW_DELAY:
			if (copy_from_user((void *)&hpd_delay, (const void __user *)arg, sizeof(unsigned int)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}

			if (vfe_hdmi_drv_set_config(0, VFE_HDMI_HPD_LOW_DELAY, hpd_delay, 0) != 0)
			{
				ret = -1;
			}
			break;


		case VFE_IOC_HDMI_GET_ARC_CHANNEL:

			/* get arc channel */

			arc_channel_status = vfe_hdmi_drv_get_arc_channel();

			/* update info to user */
			if (copy_to_user((void *)arg, &arc_channel_status, sizeof(char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] arc_channel_status error\n");
				ret = EFAULT; //bad addr
			}
			break;


		case VFE_IOC_HDMI_GET_EARC_CHANNEL:

			/* get earc channel */

			earc_channel_status = vfe_hdmi_drv_get_earc_channel();

			/* update info to user */
			if (copy_to_user((void *)arg, &earc_channel_status, sizeof(char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] earc_channel_status error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_AVMUTE:
			avmute_status = vfe_hdmi_drv_get_avmute();

			/* update info to user */
			if (copy_to_user((void *)arg, &avmute_status, sizeof(bool)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] avmute_status error\n");
				ret = EFAULT; //bad addr
			}
			break;

		case VFE_IOC_HDMI_WRITE_HDCP_APPLY:
			/* get hdcp info */

			if (copy_from_user((void *)&hdcp_data_apply, (const void __user *)arg, sizeof(hdcp_data_apply)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			else
			{
				/*willychou add avoid access user space memory in kernel space*/
				char *tmp_kernel_buff_hdcp = NULL;
				if(hdcp_data_apply.version)
				{
                	tmp_kernel_buff_hdcp= kmalloc(878, GFP_KERNEL);//kernal space
                	if(copy_from_user(tmp_kernel_buff_hdcp,hdcp_data_apply.pksv,sizeof(unsigned char)*878))
					{
						rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
						ret = EFAULT;
					}
					else
						hdcp_data_apply.pksv = tmp_kernel_buff_hdcp;
				}
				else
				{
                	tmp_kernel_buff_hdcp = kmalloc(325, GFP_KERNEL);//kernal space
             		if(copy_from_user(tmp_kernel_buff_hdcp,hdcp_data_apply.pksv,sizeof(unsigned char)*325))
					{
						rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
						ret = EFAULT;
					}
					else
						hdcp_data_apply.pksv = tmp_kernel_buff_hdcp;
				}

				/* excute driver api */
				if (vfe_hdmi_drv_write_hdcp_apply(hdcp_data_apply) != 0)
				{
					ret = -1;
				}
                kfree(tmp_kernel_buff_hdcp);

			}
			break;

#if 0
			//willychou add


		case VFE_IOC_HDMI_GET_CONSUMER_USE:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_consumer_use();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_AUDIO_SAMPLE_WORD:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_audio_sample_word();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_COPYRIGHT:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_copyright();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_FORMAT_INFO:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_format_info();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_CHANNEL_STATUS_MODE:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_channel_status_mode();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;

		case VFE_IOC_HDMI_GET_CATEGORY_CODE:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_category_code();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_SOURCE_NUMBER:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_source_number();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_CHANNEL_NUMBER:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_channel_number();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_SAMPLING_FREQUENCY:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_sampling_frequency();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_CLOCK_ACCURACY:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_clock_accuracy();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_WORD_LENGTH:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_word_length();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
		case VFE_IOC_HDMI_GET_ORIGINAL_FREQUENCY:
			/* excute driver api */
			audiodata = vfe_hdmi_drv_get_original_frequency();

			/* update info to user */
			if (copy_to_user((void *)arg, &audiodata, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;
#endif
		case VFE_IOC_HDMI_GET_RX_PORT_CNT:
			if (vfe_hdmi_drv_get_rx_port_cnt(&hdmi_value) != 0)
			{
				ret = -1;
			}

			/* update info to user */
			if (copy_to_user((void *)arg, &hdmi_value, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;

		case VFE_IOC_HDMI_GET_HDMI_SUPPORT_VER:
			/* get port info */
			if (copy_from_user((void *)&hdmi_version, (const void __user *)arg, sizeof(vfe_hdmi_support_ver_t)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT; //bad addr
			}
			else
			{
				/* excute driver api */
				vfe_hdmi_drv_get_hdmi_support_version(&hdmi_version);

				/* update info to user */
				if (copy_to_user((void *)arg, &hdmi_version, sizeof(vfe_hdmi_support_ver_t)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT; //bad addr
				}
			}
			break;

		case VFE_IOC_HDMI_GET_HDCP_VERSION:
			/* get port info */
			if (copy_from_user((void *)&hdcp_version, (const void __user *)arg, sizeof(vfe_hdmi_hdcp_ver_t)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT; //bad addr
			}
			else
			{
				/* excute driver api */
				vfe_hdmi_drv_get_hdcp_version(&hdcp_version);

				/* update info to user */
				if (copy_to_user((void *)arg, &hdcp_version, sizeof(vfe_hdmi_hdcp_ver_t)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT; //bad addr
				}
			}
			break;

		case VFE_IOC_HDMI_GET_SRUPPORT_HDCP_VER:
			/* get port info */
			if (copy_from_user((void *)&hdcp_support, (const void __user *)arg, sizeof(vfe_hdcp_table_t)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT; //bad addr
			}
			else
			{
				/* excute driver api */
				vfe_hdmi_drv_get_hdcp_support(&hdcp_support);

				/* update info to user */
				if (copy_to_user((void *)arg, &hdcp_support, sizeof(vfe_hdcp_table_t)))
				{
					rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
					ret = EFAULT; //bad addr
				}
			}
			break;

		case VFE_IOC_HDMI_GET_RECEIVER_ID:
			/* excute driver api */
			vfe_hdmi_drv_GetHDCPReceiverId(hdcp_2p2_ReceiverId);

			/* update info to user */
			if (copy_to_user((void *)arg, hdcp_2p2_ReceiverId, sizeof(unsigned char)*5))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;

		case VFE_IOC_HDMI_SET_HPD_CONTROL:
			/* get port info */
			if (copy_from_user((void *)&hpd_control, (const void __user *)arg, sizeof(vfe_hdmi_hpd_t)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT; //bad addr
			}
			else
			{
				/* excute driver api */
				vfe_hdmi_drv_set_hpd(&hpd_control);
			}
			break;

		case VFE_IOC_HDMI_GET_LOGICAL_PORT:
			if (vfe_hdmi_drv_get_logical_port(&port) != 0)
			{
				ret = -1;
			}

			/* update info to user */
			if (copy_to_user((void *)arg, &port, sizeof(unsigned char)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
				ret = EFAULT; //bad addr
			}
			break;

		case VFE_IOC_HDMI_GET_DATA:
			if (copy_from_user((void *)&diagnostic_data, (const void __user *)arg, sizeof(vfe_hdmi_diagnostic_data)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT; //bad addr
			}
			else
			{
				unsigned char* p_data = NULL;
				if(diagnostic_data.id== GENERAL_INFO)
				{
				    p_data = kmalloc(sizeof(KADP_HAL_VFE_HDMI_DIAGNOSTICS_INFO_T), GFP_KERNEL);
				}
				else if(diagnostic_data.id== GET_ERR_INFO)
				{
				    p_data = kmalloc(sizeof(unsigned char), GFP_KERNEL);
				}

				/* update info to user */
				if (p_data==NULL)
				{
					rtd_printk(KERN_ERR, TAG_NAME,"[ERR] VFE_IOC_HDMI_GET_DATA memeory fail \n");
					ret = EFAULT;
				}
				else
				{
					if (vfe_hdmi_drv_get_diagnostic_data(&diagnostic_data,p_data)!= 0)
					{
						rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] vfe_hdmi_drv_get_diagnostic_data error\n");
						ret = EFAULT; //bad addr
					}
					else
					{
						if(diagnostic_data.id== GENERAL_INFO)
						{
							if (copy_to_user(to_user_ptr(diagnostic_data.pdata), p_data, sizeof(KADP_HAL_VFE_HDMI_DIAGNOSTICS_INFO_T))!=0)
							{
								rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
								ret = EFAULT; //bad addr
							}
						}
						else if(diagnostic_data.id== GET_ERR_INFO)
						{
							if (copy_to_user(to_user_ptr(diagnostic_data.pdata), p_data, sizeof(unsigned char)!=0))
							{
								rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_to_user error\n");
								ret = EFAULT; //bad addr
							}
						}
					}
					kfree(p_data);
				}
		    }
		break;
		/* hdmi rx ioctrl cmd cases end */

		case VFE_IOC_AVD_GET_PHYSICALSIGNAL_COPYPROETCT:
		{
			KADP_VFE_AVD_PHYSICAL_COPY_PROTECT physical_copy;
			unsigned int cgms_data_cp;
			cgms_data_cp=(Scaler_VbiGet_cgms()>>10)&0x3;
			if(cgms_data_cp==1)
			{
				physical_copy=KADP_VFE_AVD_PSP_ON_SPLIT_BURST_OFF;
			}
			else if(cgms_data_cp==2)
			{
				physical_copy=KADP_VFE_AVD_PSP_ON_2_LINE_SPLIT_BURST_ON;
			}
			else if(cgms_data_cp==3)
			{
				physical_copy=KADP_VFE_AVD_PSP_ON_4LINE_SPLIT_BURST_ON;
			}
			else
			{
				physical_copy=KADP_VFE_AVD_PSP_OFF;
			}
			if(copy_to_user((void __user *)arg, (void *)&physical_copy, sizeof(KADP_VFE_AVD_PHYSICAL_COPY_PROTECT)))
			{
				ret =-EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vfe ioctl code=VFE_IOC_AVD_GET_PHYSICALSIGNAL_COPYPROETCT failed!!!!!!!!!!!!!!!\n");
			}
			break;
		}

		/*vbi ioctrl cmd cases start*/
		case VFE_IOC_AVD_INIT_VBI_MODULE:
		{
			VBI_INIT_MOUDLE_T vbi_status;
			if(copy_from_user((void *)&vbi_status, (const void __user *)arg, sizeof(VBI_INIT_MOUDLE_T)))
			{
				ret = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vbe ioctl code=VFE_IOC_AVD_INIT_VBI_MODULE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(vbi_status.vbi_support_type<=KADP_VFE_AVD_CC_AND_TTX_ARE_SUPPORTED)
				{
					if(vbi_status.vbi_support_type==KADP_VFE_AVD_CC_IS_SUPPORTED)
					{
						Scaler_VbiCcSetPhyBufAddr(vbi_status.cc_phyaddr);
						init_vbi_rpc();
					}
					else if(vbi_status.vbi_support_type==KADP_VFE_AVD_TTX_IS_SUPPORTED)
					{
						Scaler_VbiTtxSetPhyBufAddr(vbi_status.ttx_phyaddr);
						Scaler_VbiVPSSetPhyBufAddr(vbi_status.vps_phyaddr);
						init_vbi_rpc();
					}
					else if(vbi_status.vbi_support_type==KADP_VFE_AVD_CC_AND_TTX_ARE_SUPPORTED)
					{
						Scaler_VbiCcSetPhyBufAddr(vbi_status.cc_phyaddr);
						Scaler_VbiTtxSetPhyBufAddr(vbi_status.ttx_phyaddr);
						Scaler_VbiVPSSetPhyBufAddr(vbi_status.vps_phyaddr);
						init_vbi_rpc();
					}
					VBI_support_type_set(vbi_status.vbi_support_type,1);
				}
				else
				{
					ret =-EFAULT;
					rtd_printk(KERN_DEBUG, TAG_NAME, "init vbi module fail:%d\n",vbi_status.vbi_support_type);
				}
			}
			break;
		}

		case VFE_IOC_AVD_ENABLE_VBI:
		{
			KADP_VFE_AVD_CC_TTX_STATUS_T vbi_status;
			if(copy_from_user((void *)&vbi_status, (const void __user *)arg, sizeof(KADP_VFE_AVD_CC_TTX_STATUS_T)))
			{
				ret = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vbe ioctl code=VFE_IOC_AVD_ENABLE_VBI failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
			#if 0
				if(vbi_status!=VBI_support_type_get())
				{
					ret =-EFAULT;
					rtd_printk(KERN_INFO, TAG_NAME, "don't support vbi:%d\n",vbi_status);
				}
				else
				{
					if(vbi_status<=VFE_AVD_CC_AND_TTX_ARE_SUPPORTED)
					{
						VBI_support_type_set(vbi_status,1);
					}
					else
					{
						ret =-EFAULT;
						rtd_printk(KERN_INFO, TAG_NAME, "enable vbi module fail:%d\n",vbi_status);
					}
				}
			#endif
			}
			break;
		}

		case VFE_IOC_AVD_DISABLE_VBI:
		{
			KADP_VFE_AVD_CC_TTX_STATUS_T vbi_status;
			if(copy_from_user((void *)&vbi_status, (const void __user *)arg, sizeof(KADP_VFE_AVD_CC_TTX_STATUS_T)))
			{
				ret = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vbe ioctl code=VFE_IOC_AVD_DISABLE_VBI failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
			#if 0
				if(vbi_status!=VBI_support_type_get())
				{
					ret =-EFAULT;
					rtd_printk(KERN_INFO, TAG_NAME, "don't support vbi:%d",vbi_status);
				}
				else
				{
					if(vbi_status<=VFE_AVD_CC_AND_TTX_ARE_SUPPORTED)
					{
						VBI_support_type_set(vbi_status,0);
					}
					else
					{
						ret =-EFAULT;
						rtd_printk(KERN_INFO, TAG_NAME, "disable vbi module fail:%d\n",vbi_status);
					}
				}
			#endif
			}
			break;
		}
		case VFE_IOC_AVD_GET_480I_WSS_20BITS:
		{
			unsigned int wss_data;
			wss_data=Scaler_VbiGet_480I_WSS();
			if(copy_to_user((void __user *)arg, (void *)&wss_data, sizeof(unsigned int)))
			{
				ret =-EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vfe ioctl code=VFE_IOC_AVD_GET_480I_WSS_20BITS failed!!!!!!!!!!!!!!!\n");
			}
			break;
		}
		case VFE_IOC_AVD_GET_576I_WSS_14BITS:
		{
			unsigned short wss_data;
			wss_data=Scaler_VbiGet_576I_WSS();
			if(copy_to_user((void __user *)arg, (void *)&wss_data, sizeof(unsigned short)))
			{
				ret =-EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vfe ioctl code=VFE_IOC_AVD_GET_576I_WSS_14BITS failed!!!!!!!!!!!!!!!\n");
			}
			break;
		}
		case VFE_IOC_AVD_VBI_CALLBACK:
		{

			VBI_REGISTER_CALLBACK_T vbi_callback_info;
			//unsigned char status;
			if(copy_from_user((void *)&vbi_callback_info, (const void __user *)arg, sizeof(VBI_REGISTER_CALLBACK_T)))
			{
				ret = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vfe ioctl code=VFE_IOC_AVD_VBI_CALLBACK failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if (vbi_callback_info.vbi_type ==KADP_VIDEO_DDI_VBI_PAL_VPS) {
					if (vbi_callback_info.enable) {
						if (vbi_clk_get_enable()) {
						} else {
							CRT_CLK_OnOff(VBI, CLK_ON, NULL);
						}
						Scaler_vbi_vps_init();
						rtd_printk(KERN_NOTICE, TAG_NAME,"open vps driver\n");
					} else {
						if (vbi_clk_get_enable()) {
						} else {
							CRT_CLK_OnOff(VBI, CLK_ON, NULL);
						}
						Scaler_vbi_vps_uninit();
						rtd_printk(KERN_NOTICE, TAG_NAME,"close vps driver\n");
					}
				}
			}
			break;
		}
		case VO_GET_TIMINGINFO:
		{
//			DRB_VOINFO  voTimingInfo_pr;
			KADP_DRB_VOINFO  voTimingInfo_drvbase;
			KADP_DRB_VOINFO  *voTimingInfo_vo;
			ch_port = Get_DisplayMode_Port((unsigned char)SLR_MAIN_DISPLAY);
			//rtd_printk(KERN_EMERG, TAG_NAME, "kernel_2 ch_port=%d,get_vo_change_flag=%x\n",ch_port,get_vo_change_flag(ch_port));

			voTimingInfo = Scaler_VOInfoPointer(ch_port);

			voTimingInfo_drvbase.plane = voTimingInfo->plane;
			voTimingInfo_drvbase.port = voTimingInfo->port;
			voTimingInfo_drvbase.mode = voTimingInfo->mode;
			voTimingInfo_drvbase.h_freq = voTimingInfo->h_freq;
			voTimingInfo_drvbase.v_freq = voTimingInfo->v_freq;
			voTimingInfo_drvbase.h_total = voTimingInfo->h_total;
			voTimingInfo_drvbase.v_total = voTimingInfo->v_total;
			voTimingInfo_drvbase.h_width = voTimingInfo->h_width;
			voTimingInfo_drvbase.v_length = voTimingInfo->v_length;
			voTimingInfo_drvbase.h_start = voTimingInfo->h_start;
			voTimingInfo_drvbase.v_start = voTimingInfo->v_start;
			voTimingInfo_drvbase.progressive = voTimingInfo->progressive;
			voTimingInfo_drvbase.pixelAR_hor = voTimingInfo->pixelAR_hor;
			voTimingInfo_drvbase.pixelAR_ver = voTimingInfo->pixelAR_ver;
			voTimingInfo_drvbase.i_ratio = voTimingInfo->i_ratio;
			voTimingInfo_drvbase.afd = voTimingInfo->afd;
			voTimingInfo_drvbase.src_h_wid = voTimingInfo->src_h_wid;
			voTimingInfo_drvbase.src_v_len = voTimingInfo->src_v_len;

			if(get_voinfo_flag()==1)
			{
				voTimingInfo_drvbase.voinfo_state= 1;
				pr_debug("[vfe] send_voinfo_flag by ioctl\n");
				set_voinfo_flag(0);
			}else{
				voTimingInfo_drvbase.voinfo_state= 0;
			}
			voTimingInfo_vo = &voTimingInfo_drvbase;

			ret = 0;
			if (copy_to_user((int __user *)arg, (const void * )voTimingInfo_vo, sizeof(KADP_DRB_VOINFO)) )
			{
				ret = -1;
			}
			break;
		}
		case VFE_IOC_HDMI_SET_ARC_SPDIF_ENABLE:
		{
		    int enable = 0;
		    ret = 0;
		    if(copy_from_user(&enable, (const void __user *)arg, sizeof(enable)))
		    {
		        ret=-1;
		    }
		    ret = hdmi_arc_enable(enable);
		    break;
		}		
#ifdef CONFIG_CUSTOMER_TV010
		case VFE_AVD_EXTERN_IOC_GET625MODE:
		{

			unsigned int mode = 0;
			mode = drvif_module_vdc_Get625Flag();
			if (copy_to_user((void __user *)arg, (void *)&mode, sizeof(unsigned int))) {
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vbe ioctl code=VFE_AVD_EXTERN_IOC_GET625MODE failed!!!!!!!!!!!!!!!\n");
				ret = -1;
			} else
				ret = 0;

			break;
		}

		case VFE_AVD_EXTERN_IOC_GET_MACROVISION:
		{

			unsigned int macrovision = 0;
			macrovision = drvif_module_vdc_GetMVStatus();
			if (copy_to_user((void __user *)arg, (void *)&macrovision, sizeof(unsigned int))) {
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vbe ioctl code=VFE_AVD_EXTERN_IOC_GET_MACROVISION failed!!!!!!!!!!!!!!!\n");
				ret = -1;
			} else
				ret = 0;

			break;
		}

		case VFE_AVD_EXTERN_IOC_OPEN_AV_OUT_BYPASS:
		{
			drvif_module_vdc_AVoutEnable(1);
			break;
		}


		case VFE_AVD_EXTERN_IOC_CLOSE_AV_OUT_BYPASS:
		{
			drvif_module_vdc_AVoutEnable(0);
			break;
		}


		case VFE_EXTERN_IOC_GET_OFFLINE_SIGTATUS:
		{
			//TODO, Merlin3 tv010 sync, need wait mode.c to add "drvif_mode_getOfflineSigStatus"
/*
			RTK_MW_SRC_E_BOOL src_e_bool;
			if (copy_from_user(&src_e_bool,  (void __user *)arg,sizeof(RTK_MW_SRC_E_BOOL))) {
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vbe ioctl code=VFE_EXTERN_IOC_GET_OFFLINE_SIGTATUS failed!!!!!!!!!!!!!!!\n");
				ret = -1;
			} else {
				ret = 0;
				src_e_bool.hal_bool= drvif_mode_getOfflineSigStatus(src_e_bool.rtk_mw_src_e);
				if (copy_to_user((void __user *)arg, (void *)&src_e_bool, sizeof(RTK_MW_SRC_E_BOOL))) {
					rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vbe ioctl code=VFE_EXTERN_IOC_GET_OFFLINE_SIGTATUS failed!!!!!!!!!!!!!!!\n");
					ret = -1;
				} else
					ret = 0;
			}
*/
			break;
		}
		case VFE_IOC_SETNSTDVALUE:
		{
			if (copy_from_user((void *)&NonStandardValue, (const void __user *)arg, sizeof(unsigned int))){
				rtd_printk(KERN_DEBUG, TAG_NAME,"[ERR] copy_from_user error\n");
				ret = EFAULT;
			}
			/* excute driver api */
			if(SetNonStandardFlag(NonStandardValue) != 0){
				ret = -1;
			}
			break;
		}
#endif
		case VFE_IOC_AVD_VBI_TTX_SINGAL:
		{
			unsigned char ttx_singal=Scaler_vbi_ttx_signal();
			if(copy_to_user((void __user *)arg, (void *)&ttx_singal, sizeof(unsigned char)))
			{
				ret = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vfe ioctl code=VFE_IOC_AVD_VBI_TTX_SINGAL failed!!!!!!!!!!!!!!!\n");
			}
			break;
		}

		case VO_GET_USBVOINFO:
		{
                    SLR_VOINFO VOInfoQ;
                    SLR_VOINFO *pVOInfo = NULL;
                    VO_VOINFO VOInfoZ;
                    VO_VOINFO *pVOInfoZ;

                    pVOInfo = &VOInfoQ;

                    memcpy(pVOInfo, (unsigned char *)Scaler_GetShareMemVirAddr(SCALERIOC_GETVOINFO), sizeof(SLR_VOINFO));
#if 0
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===\nreceive Voinfo:\n");
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===plane=%d\n", (int)pVOInfo->plane);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===port=%d\n", (int)pVOInfo->port);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===mode=%d\n", (int)pVOInfo->mode);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===h_start=%d\n", (int)pVOInfo->h_start);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===v_start=%d\n", (int)pVOInfo->v_start);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===h_width=%d\n", (int)pVOInfo->h_width);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===v_length=%d\n", (int)pVOInfo->v_length);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===h_total=%d\n", (int)pVOInfo->h_total);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===v_total=%d\n", (int)pVOInfo->v_total);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===chroma_fmt=%d\n", (int)pVOInfo->chroma_fmt);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===progressive=%d\n", (int)pVOInfo->progressive);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===h_freq=%d\n", (int)pVOInfo->h_freq);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===v_freq=%d\n", (int)pVOInfo->v_freq);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===pixel_clk=%d\n", (int)pVOInfo->pixel_clk);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===i_ratio=%d\n", (int)pVOInfo->i_ratio);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===source=%d\n", (int)pVOInfo->source);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===isJPEG=%d\n", (int)pVOInfo->isJPEG);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===vdec=%d\n", (int)pVOInfo->vdec_source);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===color=%d\n", (int)pVOInfo->colorspace);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===mode_3d=%d\n", (int)pVOInfo->mode_3d);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===force2d=%d\n", (int)pVOInfo->force2d);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===afd=%d\n", (int)pVOInfo->afd);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===HPAR=%d\n", (int)pVOInfo->pixelAR_hor);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===VPAR=%d\n", (int)pVOInfo->pixelAR_ver);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===src_h_wid=%d\n", (int)pVOInfo->src_h_wid);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===src_v_len=%d\n", (int)pVOInfo->src_v_len);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===xvYCC=%d\n", (int)pVOInfo->xvYCC);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===trans_char=%d\n", (int)pVOInfo->transfer_characteristics);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===mt_coeff=%d\n", (int)pVOInfo->matrix_coefficiets);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===full_range=%d\n", (int)pVOInfo->video_full_range_flag);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===c_prim=%d\n", (int)pVOInfo->colour_primaries);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===MaxCLL=%d\n", (int)pVOInfo->MaxCLL);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===MaxFALL=%d\n", (int)pVOInfo->MaxFALL);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===security=%d\n", (int)pVOInfo->security);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===isVP9=%d\n", (int)pVOInfo->isVP9);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===rotate=%d\n", (int)pVOInfo->screenRotation);

                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===launcher=%d\n", (int)pVOInfo->launcher);

                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===coeffs_overscan=%x\n", (int)pVOInfo->coeffs_overscan);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===color_transf=%x\n", (int)pVOInfo->color_transf);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===dispXY0=%x\n", (int)pVOInfo->dispXY0);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===dispXY1=%x\n", (int)pVOInfo->dispXY1);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===dispXY2=%x\n", (int)pVOInfo->dispXY2);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===whitePointXY=%x\n", (int)pVOInfo->whitePointXY);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===maxL=%x\n", (int)pVOInfo->maxL);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===minL=%x\n", (int)pVOInfo->minL);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===DolbyVision=%x\n", (int)pVOInfo->DolbyVision);
#endif
                    VOInfoZ.coeffs_overscan = Scaler_ChangeUINT32Endian(pVOInfo->coeffs_overscan);
                    VOInfoZ.color_transf = Scaler_ChangeUINT32Endian(pVOInfo->color_transf);

                    VOInfoZ.dispX0 = Scaler_ChangeUINT16Endian((pVOInfo->dispXY0 & 0x0000ffff));
                    VOInfoZ.dispX1 = Scaler_ChangeUINT16Endian((pVOInfo->dispXY1 & 0x0000ffff));
                    VOInfoZ.dispX2 = Scaler_ChangeUINT16Endian((pVOInfo->dispXY2 & 0x0000ffff));
                    VOInfoZ.dispY0 = Scaler_ChangeUINT16Endian((pVOInfo->dispXY0 & 0xffff0000)>>16);
                    VOInfoZ.dispY1 = Scaler_ChangeUINT16Endian((pVOInfo->dispXY1 & 0xffff0000)>>16);
                    VOInfoZ.dispY2 = Scaler_ChangeUINT16Endian((pVOInfo->dispXY2 & 0xffff0000)>>16);
                    VOInfoZ.whitePointX = Scaler_ChangeUINT16Endian((pVOInfo->whitePointXY & 0x0000ffff));
                    VOInfoZ.whitePointY = Scaler_ChangeUINT16Endian((pVOInfo->whitePointXY & 0xffff0000)>>16);

                    VOInfoZ.maxL = Scaler_ChangeUINT32Endian(pVOInfo->maxL);
                    VOInfoZ.minL = Scaler_ChangeUINT32Endian(pVOInfo->minL);
                    VOInfoZ.dolbyVision = Scaler_ChangeUINT32Endian(pVOInfo->DolbyVision);

                    VOInfoZ.maxcll = Scaler_ChangeUINT32Endian(pVOInfo->MaxCLL);
                    VOInfoZ.maxfall =Scaler_ChangeUINT32Endian(pVOInfo->MaxFALL);

                    pVOInfoZ = &VOInfoZ;
                    ret = 0;
#if 0
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===MaxCLL=%d\n", (int)VOInfoZ.maxcll);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===MaxFALL=%d\n", (int)VOInfoZ.maxfall);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===coeffs_overscan=%d\n", (int)VOInfoZ.coeffs_overscan);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===color_transf=%d\n", (int)VOInfoZ.color_transf);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===dispX0=%d\n", (int)VOInfoZ.dispX0);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===dispX1=%d\n", (int)VOInfoZ.dispX1);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===dispX2=%d\n", (int)VOInfoZ.dispX2);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===dispY0=%d\n", (int)VOInfoZ.dispY0);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===dispY1=%d\n", (int)VOInfoZ.dispY1);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===dispY2=%d\n", (int)VOInfoZ.dispY2);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===whitePointX=%d\n", (int)VOInfoZ.whitePointX);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===whitePointY=%d\n", (int)VOInfoZ.whitePointY);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===maxL=%d\n", (int)VOInfoZ.maxL);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===minL=%d\n", (int)VOInfoZ.minL);
                    rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL===DolbyVision=%d\n", (int)VOInfoZ.dolbyVision);
#endif
                    if (copy_to_user((int __user *)arg, (const void*)pVOInfoZ, sizeof(VO_VOINFO)))
                    {
                        rtd_printk(KERN_EMERG, TAG_NAME, "===VFE_IOCTL: copy_to_user retrun -1====\nreceive Voinfo:\n");
                        ret = -1;
                    }
                    else{
                        ret = 0;
                    }
                    break;
		}

		case VFE_IOC_AVD_GET_NOISE_STATUS:
		{
			rtd_printk(KERN_INFO, TAG_NAME, "Kernel VFE_IOC_AVD_GET_NOISE_STATUS Start");

			VdcNoiseStatus = drvif_module_vdc_NoiseStatus();
			ret = 0;
			if (copy_to_user((void __user *)arg, (const void * )&VdcNoiseStatus, sizeof(VdcNoiseStatus)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "[ERR] copy_to_user error\n");
				ret = -EFAULT;
			}

			rtd_printk(KERN_INFO, TAG_NAME, "Kernel VFE_IOC_AVD_GET_NOISE_STATUS End\n");
			break;
		}

		case VFE_IOC_AVD_ADC_AND_FDF_SETTING:
		{
			// This function is being used by improve big signal performance when adjust resister & capacity in AV source.
			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_ADC_AND_FDF_SETTING Start");

			if (copy_from_user(&tAvCoef, (int __user *)arg, sizeof(tAvCoef)))
			{
				rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_ADC_AND_FDF_SETTING fail\n");
				ret = -1;
			}
			else
			{
				drvif_module_vdc_ADC_Vrefp_Setting(tAvCoef);
				drvif_module_vdc_FDF_Table_Select(tAvCoef);
				ret = 0;
			}

			rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel VFE_IOC_AVD_ADC_AND_FDF_SETTING End\n");
			break;
		}		

		/*vbi ioctrl cmd cases end*/


		case VFE_IOC_GET_AV_OFFLINE_SIGTATUS:
		{
			ret = 0;
			avOfflineStatus= drvif_AV_Detect_OffLine_Signal(0);
			if(copy_to_user((void __user *)arg, (void *)&avOfflineStatus, sizeof(unsigned char))){
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vbe ioctl code=VFE_EXTERN_IOC_GET_OFFLINE_SIGTATUS failed!!!!!!!!!!!!!!!\n");
				ret = -1;
			} else
				ret = 0;
			break;
		}

		case VFE_IOC_AVD_CHECK_ATV_STABLE:
		{
			ret = 0;
			atvStable = check_atv_stable_for_bg(0);
			if(copy_to_user((void __user *)arg, (void *)&atvStable, sizeof(unsigned char))){
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vfe ioctl code=VFE_IOC_AVD_CHECK_ATV_STABLE failed!!!!!!!!!!!!!!!\n");
				ret = -1;
			} else
				ret = 0;
			break;
		}

		default:
			rtd_printk(KERN_DEBUG, TAG_NAME, "vfe ioctl code=%d,No API processed!!!\n",cmd);
			ret = -EFAULT;
		break;
	}
	return ret;

}

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
long vfe_compat_ioctl(struct file *file, unsigned int cmd,  unsigned long arg)
{ 
	return vfe_ioctl(file,cmd,arg);
}
#endif

struct file_operations vfe_fops= {
	.owner =    THIS_MODULE,
	.open  =    vfe_open,
	.release =  vfe_release,
	.read  =    vfe_read,
	.write = 	vfe_write,
	.unlocked_ioctl =    vfe_ioctl,

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
      .compat_ioctl = vfe_compat_ioctl,
#endif
};

#ifdef CONFIG_PM
static const struct dev_pm_ops vfe_pm_ops =
{
	.suspend    = vfe_suspend,
	.resume     = vfe_resume,
#ifdef CONFIG_HIBERNATION
	.freeze 	= vfe_suspend_std,
	.thaw		= vfe_resume_std,
	.poweroff	= vfe_suspend_std,
	.restore	= vfe_resume_std,
#endif

};
#endif // CONFIG_PM




static struct class *vfe_class = NULL;
static struct platform_device *vfe_platform_devs = NULL;
static struct platform_driver vfe_platform_driver = {
    .driver = {
        .name       = "vfedev",
        .bus        = &platform_bus_type,
#ifdef CONFIG_PM
		.pm         = &vfe_pm_ops,
#endif
    },
} ;


static char *vfe_devnode(struct device *dev, mode_t *mode)
{
	return NULL;
}

unsigned int rpc_main_onlinemeasure_isr(unsigned long para1, unsigned long para2)
{
	rtd_printk(KERN_NOTICE, TAG_NAME, "Online measure main Error Ack\n");
	switch(Get_DisplayMode_Src(SLR_MAIN_DISPLAY))
	{
		case VSC_INPUTSRC_ADC:
			reset_adc_timing_ready();
			Scaler_DispSetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
			fw_scaler_adc_nolock_wdg_ctrl(SLR_MAIN_DISPLAY, FALSE);// Disable adc_nolock_wdg
			
			set_display_forcebg_mask(SLR_MAIN_DISPLAY, SLR_FORCE_BG_TYPE_SIG_UNSTABLE, TRUE);//Enable SLR_FORCE_BG_TYPE_SIG_UNSTABLE mask
			mute_control(SLR_MAIN_DISPLAY, TRUE);/*Auto BG*/
			clear_online_status(SLR_MAIN_DISPLAY);
			drivf_scaler_reset_freerun();
			set_auto_phase_flow_bypass_flag(FALSE);//Rest the auto phase bypass flag
			down(&ADC_DetectSemaphore);
			if (ADC_Global_Status == SRC_CONNECT_DONE) {
				ADC_OnlineMeasureError_Handler(ADC_Input_Source);
				Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_ADC, REPORT_ZERO_TIMING);
				ADC_set_detect_flag(TRUE);
			}
			up(&ADC_DetectSemaphore);
			break;

		case VSC_INPUTSRC_AVD:
			if (_SRC_TV != AVD_Input_Source) {
				reset_avd_timing_ready();
				set_display_forcebg_mask(SLR_MAIN_DISPLAY, SLR_FORCE_BG_TYPE_SIG_UNSTABLE, TRUE);//Enable SLR_FORCE_BG_TYPE_SIG_UNSTABLE mask
				mute_control(SLR_MAIN_DISPLAY, TRUE);/*Auto BG*/
				Scaler_DispSetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
				clear_online_status(SLR_MAIN_DISPLAY);
				drivf_scaler_reset_freerun();
				Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_AVD, REPORT_ZERO_TIMING);
				AVD_OnlineMeasureError_Handler(AVD_Input);
			} else {
				// ATV source, don't run search state
				down(get_scaler_fll_running_semaphore());
				modestate_set_fll_running_flag(FALSE);
				drivf_scaler_reset_freerun();
				up(get_scaler_fll_running_semaphore());
				clear_online_status(SLR_MAIN_DISPLAY);
				AVD_OnlineMeasureError_Handler(AVD_Input);
				return 0;
			}
			break;

		case VSC_INPUTSRC_HDMI:
			reset_hdmi_timing_ready();
			Scaler_DispSetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
			set_display_forcebg_mask(SLR_MAIN_DISPLAY, SLR_FORCE_BG_TYPE_SIG_UNSTABLE, TRUE);//Enable SLR_FORCE_BG_TYPE_SIG_UNSTABLE mask
			mute_control(SLR_MAIN_DISPLAY, TRUE);/*Auto BG*/
			if (Get_Live_zoom_mode() == LIVE_ZOOM_ON ) {
				mute_control(SLR_SUB_DISPLAY, TRUE);/*Auto BG*/
			}
			drivf_scaler_reset_freerun();
			down(&HDMI_DetectSemaphore);
			vfe_hdmi_drv_handle_on_line_measure_error(1);//k3l error will mark 0603
			if	(HDMI_Global_Status == SRC_CONNECT_DONE) {
				Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_HDMI, REPORT_ZERO_TIMING);
				HDMI_set_detect_flag(TRUE);
			}
			Scaler_Disp3dSetInfo(SLR_MAIN_DISPLAY, SLR_DISP_3D_3DTYPE, SLR_3D_2D_ONLY);
			Scaler_Set3DMode_Attr(SLR_MAIN_DISPLAY, SLR_3DMODE_2D);
			up(&HDMI_DetectSemaphore);
			clear_online_status(SLR_MAIN_DISPLAY);
			break;

		default:
			break;

	}
	//Scaler_DispSetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
	//Fixed RPC hang program issue @ Crixus 20141103
	//state_update_disp_info();
 	return 0;
}

#ifdef CONFIG_DUAL_CHANNEL
unsigned int rpc_sub_onlinemeasure_isr(unsigned long para1, unsigned long para2)
{
	rtd_printk(KERN_NOTICE, TAG_NAME, "Online measure sub Error Ack\n");

	switch(Get_DisplayMode_Src(SLR_SUB_DISPLAY))
	{
		case VSC_INPUTSRC_ADC:
			reset_adc_timing_ready();
			Scaler_DispSetInputInfoByDisp(SLR_SUB_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
			fw_scaler_adc_nolock_wdg_ctrl(SLR_SUB_DISPLAY, FALSE);// Disable adc_nolock_wdg
			set_display_forcebg_mask(SLR_SUB_DISPLAY, SLR_FORCE_BG_TYPE_SIG_UNSTABLE, TRUE);//Enable SLR_FORCE_BG_TYPE_SIG_UNSTABLE mask
			mute_control(SLR_SUB_DISPLAY, TRUE);/*Auto BG*/
			clear_online_status(SLR_SUB_DISPLAY);
			set_auto_phase_flow_bypass_flag(FALSE);//Rest the auto phase bypass flag
			down(&ADC_DetectSemaphore);
			if (ADC_Global_Status == SRC_CONNECT_DONE) {
				ADC_OnlineMeasureError_Handler(ADC_Input_Source);
				Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_ADC, REPORT_ZERO_TIMING);
				ADC_set_detect_flag(TRUE);
			}
			up(&ADC_DetectSemaphore);
			break;

		case VSC_INPUTSRC_AVD:
			if (_SRC_TV != AVD_Input_Source) {
				reset_avd_timing_ready();
				set_display_forcebg_mask(SLR_SUB_DISPLAY, SLR_FORCE_BG_TYPE_SIG_UNSTABLE, TRUE);//Enable SLR_FORCE_BG_TYPE_SIG_UNSTABLE mask
				mute_control(SLR_SUB_DISPLAY, TRUE);/*Auto BG*/
				clear_online_status(SLR_SUB_DISPLAY);
				Scaler_DispSetInputInfoByDisp(SLR_SUB_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
				Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_AVD, REPORT_ZERO_TIMING);
				AVD_OnlineMeasureError_Handler(AVD_Input);
			} else {
				clear_online_status(SLR_SUB_DISPLAY);
				// ATV source, don't run search state
				AVD_OnlineMeasureError_Handler(AVD_Input);
				return 0;
			}

			break;

		case VSC_INPUTSRC_HDMI:
			reset_hdmi_timing_ready();
			Scaler_DispSetInputInfoByDisp(SLR_SUB_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
			set_display_forcebg_mask(SLR_SUB_DISPLAY, SLR_FORCE_BG_TYPE_SIG_UNSTABLE, TRUE);//Enable SLR_FORCE_BG_TYPE_SIG_UNSTABLE mask
			mute_control(SLR_SUB_DISPLAY, TRUE);/*Auto BG*/
			down(&HDMI_DetectSemaphore);
			vfe_hdmi_drv_handle_on_line_measure_error(1);//k3l error will mark 0603
			if	(HDMI_Global_Status == SRC_CONNECT_DONE) {
				Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_HDMI, REPORT_ZERO_TIMING);
				HDMI_set_detect_flag(TRUE);
			}
			Scaler_Disp3dSetInfo(SLR_SUB_DISPLAY, SLR_DISP_3D_3DTYPE, SLR_3D_2D_ONLY);
			Scaler_Set3DMode_Attr(SLR_SUB_DISPLAY, SLR_3DMODE_2D);
			up(&HDMI_DetectSemaphore);
			clear_online_status(SLR_SUB_DISPLAY);
			break;

		default:
			break;

	}

	//Scaler_DispSetInputInfoByDisp(SLR_SUB_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
	//Fixed RPC hang program issue @ Crixus 20141103
	//state_update_disp_info();
 	return 0;
}
#endif

unsigned int rpcVoPS(unsigned long para1, unsigned long para2)
{
	switch(para1)
	{
		case 0:
			ScalerMEMC_DisablePowerSave();
			break;
		case 1:
			ScalerMEMC_EnablePowerSave();
			break;
		default:
			break;
	}
	return 0;
}

static bool vbi_tsk_running_flag = FALSE;//Record video_onlinemeasure_tsk status. True: Task is running
static struct task_struct *p_vbi_tsk = NULL;
static int vbi_detect_tsk(void *p)
{//This task is used to online measure error handler
    struct cpumask vbi_cpumask;
	pr_notice("vbi_detect_tsk()\n");
    cpumask_clear(&vbi_cpumask);
    cpumask_set_cpu(0, &vbi_cpumask); // run task in core 0
    cpumask_set_cpu(2, &vbi_cpumask); // run task in core 2
    cpumask_set_cpu(3, &vbi_cpumask); // run task in core 3
    sched_setaffinity(0, &vbi_cpumask);
	current->flags &= ~PF_NOFREEZE;
	while (1)
	{
		msleep(80); //wait 100ms
		vbi_data_receive();
		if (freezing(current))
		{
			try_to_freeze();
		}
		if (kthread_should_stop()) {
			break;
		}
	}

	pr_notice("\r\n####vbi_detect_tsk: exit...####\n");
	do_exit(0);
	return 0;
}
static void create_vbi_detect_tsk(void)
{
	int err;
	if (vbi_tsk_running_flag == FALSE) {
		p_vbi_tsk = kthread_create(vbi_detect_tsk, NULL, "vbi_detect_tsk");

	    if (p_vbi_tsk) {
			wake_up_process(p_vbi_tsk);
			vbi_tsk_running_flag = TRUE;
	    } else {
	    	err = PTR_ERR(p_vbi_tsk);
	    	pr_err("Unable to start vbi_detect_tsk (err_id = %d)./n", err);
	    }
	}
}

static void delete_vbi_detect_tsk(void)
{//delete vbi_detect_tsk
	int ret;
	if (vbi_tsk_running_flag) {
 		ret = kthread_stop(p_vbi_tsk);
 		if (!ret) {
 			p_vbi_tsk = NULL;
 			vbi_tsk_running_flag = FALSE;
			pr_err("vbi_detect_tsk thread stopped\n");
 		}
	}
}

int vfe_module_init(void)
{
#ifdef BRING_UP_VERIFY_PQ//for bring up PQ default setting
	extern void PQ_verify_initial(void);
#endif
	enum CRT_CLK clken = CLK_ON;
	int result;

	result = alloc_chrdev_region(&vfe_devno, 0, 1, "vfedevno");

	if (result != 0)
	{
		rtd_printk(KERN_DEBUG, TAG_NAME, "Cannot allocate VFE device number\n");
		return result;
	}

	vfe_class = class_create(THIS_MODULE, "vfedev");
	if (IS_ERR(vfe_class)) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "scalevfe: can not create class...\n");
		result = PTR_ERR(vfe_class);
		goto fail_class_create;
	}

	vfe_class->devnode = (void *)vfe_devnode;

	vfe_platform_devs = platform_device_register_simple("vfedev", -1, NULL, 0);
	if (platform_driver_register(&vfe_platform_driver) != 0) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "scalevfe: can not register platform driver...\n");
		result = -ENOMEM;
		goto fail_platform_driver_register;
	}

	cdev_init(&vfe_cdev, &vfe_fops);
	result = cdev_add(&vfe_cdev, vfe_devno, 1);
	if (result < 0) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "scalevfe: can not add character device...\n");
		goto fail_cdev_init;
	}

	device_create(vfe_class, NULL, vfe_devno, NULL, "vfedev");

	// Enable offline measure clock

	CRT_CLK_OnOff(SCALER_VFEDEV_1, clken , NULL);

#ifdef CONFIG_LG_SNAPSHOT_BOOT
	{
		unsigned long scaler_module_start, scaler_module_size;

		scaler_module_size = carvedout_buf_query(CARVEDOUT_SCALER, (void *)&scaler_module_start);
		register_cma_forbidden_region(__phys_to_pfn(scaler_module_start), scaler_module_size);
	}
#endif

	//spdif
	//hdmi_arc_init();
	PcbSource_Init();
	Scaler_SetCurrentDispInfo(SLR_MAIN_DISPLAY);//Will Temp add. for crash temp patch.
#ifdef CONFIG_SUPPORT_SRC_VGA
	drvif_vga_auto_table_init();//VGA auto config table initial
#endif
	offline_semaphore_init();//Offline measure semaphore initial
	adc_power_semaphore_init();//Adc power control semaphore initial
	avd_power_semaphore_init();//Avd power control semaphore initial
	Detect_Semaphore_Init();
	sema_init(&ADC_ADJ_Semaphore, 1);
	sema_init(&SetSource_Semaphore, 1);
	sema_init(&Scaler_RPC_Semaphore, 1);
	sema_init(&VBI_vps_driver_Semaphore, 1);
	#ifndef CONFIG_CUSTOMER_TV030
	OTP_ADC_Calibration_proc();//Run ADC calibration // Move to here. This can save RPC wait time
	#endif
	Scaler_InitRPCShareMem();
	VipTableInit(); //must init after RPCShareMem
#ifdef BRING_UP_VERIFY_PQ//for bring up PQ default setting
	PQ_verify_initial();//for bringup pq initial
#endif

#ifndef CONFIG_MEMC_BYPASS
	//mark for bring-up rzhen@2016-06-26
	Scaler_MEMC_allocate_memory();//MEMC memory allocation

	#ifdef CONFIG_RTK_KDRV_RPC

	if (register_kernel_rpc(RPC_MEMC_PS, (FUNC_PTR)&rpcVoPS) == 1)
		printk("[MEMC] RPC_MEMC_PS RPC failed\n");
	#endif
#endif
	drvif_scaler_voFrameRateControl_init();
	//if support DTV scart out, it has to run this function let VO display 444 format
#ifdef CONFIG_DTV_SCART_OUT_ENABLE_444_FORMAT
	rtd_printk(KERN_DEBUG, TAG_NAME, "[crixus]DTV_SCART_OUT_ENABLE_444_FORMAT!!!!!!!!\n");
	Scaler_VO_Set_VoForce422_enable(FALSE);
#endif

	if(copy_driver_table_from_bootload() == -1)
	{
		pr_emerg("[driver config]use the golbal table\n");
	}
	print_current_driver_pattern();
	driver_config_data_to_video();

	if (result == 0) {
		create_srcdetect_tsk();
		create_onlinemeasure_tsk();
		create_vbi_detect_tsk(); //Create fix last line tsk
	}

	return 0;//Success

fail_cdev_init:
	platform_driver_unregister(&vfe_platform_driver);
fail_platform_driver_register:
	platform_device_unregister(vfe_platform_devs);
	vfe_platform_devs = NULL;
	class_destroy(vfe_class);
fail_class_create:
	vfe_class = NULL;
	unregister_chrdev_region(vfe_devno, 1);
	return result;
}



void __exit vfe_module_exit(void)
{
	if (vfe_platform_devs == NULL)
		BUG();
	delete_srcdetect_tsk();//Delete adc_detect_tsk avd_detect_tsk hdmi_detect_tsk
	delete_onlinemeasure_tsk();//Delete video_onlinemeasure_tsk
	delete_vbi_detect_tsk();//Delete vbi_detect_tsk
	device_destroy(vfe_class, vfe_devno);
	cdev_del(&vfe_cdev);

	platform_driver_unregister(&vfe_platform_driver);
	platform_device_unregister(vfe_platform_devs);
	vfe_platform_devs = NULL;

	class_destroy(vfe_class);
	vfe_class = NULL;

	unregister_chrdev_region(vfe_devno, 1);

	VipTableUnInit();
	Scaler_FreeRPCShareMem();
}

static void delete_srcdetect_tsk(void)
{
	int ret;
	if (adc_detect_tsk_running_flag) {
 		ret = kthread_stop(p_adc_detect_task);
 		if (!ret) {
 			p_adc_detect_task = NULL;
 			adc_detect_tsk_running_flag = FALSE;
			rtd_printk(KERN_DEBUG, TAG_NAME, "adc_detect_tsk thread stopped\n");
 		}
	}

	if (avd_detect_tsk_running_flag) {
 		ret = kthread_stop(p_avd_detect_task);
 		if (!ret) {
 			p_avd_detect_task = NULL;
 			avd_detect_tsk_running_flag = FALSE;
			rtd_printk(KERN_DEBUG, TAG_NAME, "avd_detect_tsk thread stopped\n");
 		}
	}

	if (hdmi_detect_tsk_running_flag) {
 		ret = kthread_stop(p_hdmi_detect_task);
 		if (!ret) {
 			p_hdmi_detect_task = NULL;
 			hdmi_detect_tsk_running_flag = FALSE;
			rtd_printk(KERN_DEBUG, TAG_NAME, "hdmi_detect_tsk thread stopped\n");
 		}
	}
}

static void create_srcdetect_tsk(void)
{
	int err;
	if (adc_detect_tsk_running_flag == FALSE) {
		p_adc_detect_task = kthread_create(adc_detect_tsk, NULL, "adc_detect_tsk");

	    if (p_adc_detect_task) {
			wake_up_process(p_adc_detect_task);
			adc_detect_tsk_running_flag = TRUE;
 		} else {
	    	err = PTR_ERR(p_adc_detect_task);
	    	rtd_printk(KERN_DEBUG, TAG_NAME, "Unable to start adc_detect_tsk (err_id = %d)./n", err);
		}
	}

	if (avd_detect_tsk_running_flag == FALSE) {
		p_avd_detect_task = kthread_create(avd_detect_tsk, NULL, "avd_detect_tsk");

	    if (p_avd_detect_task) {
			wake_up_process(p_avd_detect_task);
			avd_detect_tsk_running_flag = TRUE;
	    } else {
	    	err = PTR_ERR(p_avd_detect_task);
	    	rtd_printk(KERN_DEBUG, TAG_NAME, "Unable to start avd_detect_tsk (err_id = %d)./n", err);
		}
	}

	if (hdmi_detect_tsk_running_flag == FALSE) {
		p_hdmi_detect_task = kthread_create(hdmi_detect_tsk, NULL, "hdmi_detect_tsk");

	    if (p_hdmi_detect_task) {
			wake_up_process(p_hdmi_detect_task);
			hdmi_detect_tsk_running_flag = TRUE;
    	} else {
	    	err = PTR_ERR(p_hdmi_detect_task);
	    	rtd_printk(KERN_DEBUG, TAG_NAME, "Unable to start hdmi_detect_tsk (err_id = %d)./n", err);
    	}
    }

#ifdef POLLING_ONLINE_STATUS_ENABLE//This is only for bring up Replace online interrupt
	if (check_signal_running_flag == FALSE) {
		p_check_signal_task = kthread_create(check_signal_tsk, NULL, "check_signal_tsk");

	    if (p_check_signal_task) {
			wake_up_process(p_check_signal_task);
			check_signal_running_flag = TRUE;
    	} else {
	    	err = PTR_ERR(p_check_signal_task);
	    	rtd_printk(KERN_DEBUG, TAG_NAME, "Unable to start check_signal_tsk (err_id = %d)./n", err);
    	}
    }
#endif
}

#ifdef POLLING_ONLINE_STATUS_ENABLE//This is only for bring up Replace online interrupt
static int check_signal_tsk(void *p)
{
	extern unsigned judge_scaler_break_case(unsigned char display);
    rtd_printk(KERN_DEBUG, TAG_NAME, "check_signal_tsk()\n");
	current->flags &= ~PF_NOFREEZE;
    while (1)
    {
		msleep(10);

		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE){
			switch(Get_DisplayMode_Src(SLR_MAIN_DISPLAY))
			{
				case VSC_INPUTSRC_ADC:
					if(judge_scaler_break_case(SLR_MAIN_DISPLAY))
					{
						rtd_printk(KERN_EMERG, TAG_NAME, "\r\n######ADC ONLINE ERROR#####\r\n");
						fw_scaler_adc_nolock_wdg_ctrl(SLR_MAIN_DISPLAY, FALSE);// Disable adc_nolock_wdg
						mute_control(SLR_MAIN_DISPLAY, TRUE);/*Auto BG*/
						clear_online_status(SLR_MAIN_DISPLAY);
						drivf_scaler_reset_freerun();
						down(&ADC_DetectSemaphore);
						if (ADC_Global_Status == SRC_CONNECT_DONE) {
							Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_ADC, REPORT_ZERO_TIMING);
							ADC_OnlineMeasureError_Handler(ADC_Input_Source);
							ADC_set_detect_flag(TRUE);
						}
						up(&ADC_DetectSemaphore);
						Scaler_DispSetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
					}
					break;

				case VSC_INPUTSRC_AVD:
					break;
					if (_SRC_TV != AVD_Input_Source) {
						if(judge_scaler_break_case(SLR_MAIN_DISPLAY))
						{
							rtd_printk(KERN_EMERG, TAG_NAME, "\r\n######AV ONLINE ERROR#####\r\n");
							mute_control(SLR_MAIN_DISPLAY, TRUE);/*Auto BG*/
							clear_online_status(SLR_MAIN_DISPLAY);
							drivf_scaler_reset_freerun();
							Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_AVD, REPORT_ZERO_TIMING);							
							AVD_OnlineMeasureError_Handler(AVD_Input);
							Scaler_DispSetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
						}
					} else if(0){
						// ATV source, don't run search state
						down(get_scaler_fll_running_semaphore());
						modestate_set_fll_running_flag(FALSE);
						drivf_scaler_reset_freerun();
						up(get_scaler_fll_running_semaphore());
						clear_online_status(SLR_MAIN_DISPLAY);
						AVD_OnlineMeasureError_Handler(AVD_Input);
					}
					break;

				case VSC_INPUTSRC_HDMI:
					break;
					if(judge_scaler_break_case(SLR_MAIN_DISPLAY))
					{
						rtd_printk(KERN_EMERG, TAG_NAME, "\r\n######HDMI ONLINE ERROR#####\r\n");
						mute_control(SLR_MAIN_DISPLAY, TRUE);/*Auto BG*/
						if (Get_Live_zoom_mode() == LIVE_ZOOM_ON ) {
							mute_control(SLR_SUB_DISPLAY, TRUE);/*Auto BG*/
						}
						drivf_scaler_reset_freerun();
						down(&HDMI_DetectSemaphore);
						vfe_hdmi_drv_handle_on_line_measure_error(1);//k3l error will mark 0603
						if	(HDMI_Global_Status == SRC_CONNECT_DONE) {
							Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_HDMI, REPORT_ZERO_TIMING);
							HDMI_set_detect_flag(TRUE);
						}
						Scaler_Disp3dSetInfo(SLR_MAIN_DISPLAY, SLR_DISP_3D_3DTYPE, SLR_3D_2D_ONLY);
						Scaler_Set3DMode_Attr(SLR_MAIN_DISPLAY, SLR_3DMODE_2D);
						up(&HDMI_DetectSemaphore);
						Scaler_DispSetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
						clear_online_status(SLR_MAIN_DISPLAY);
					}
					break;

				default:
					break;

			}
		}
 		if (freezing(current))
        {
			try_to_freeze();
        }
		if (kthread_should_stop()) {
         	break;
      	}
    }

    rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n####check_signal_tsk: exit...####\n");
    do_exit(0);
    return 0;
}
#endif


#ifdef AUTO_BRINGUP_SOURCE
void vfe_source_bringup_force_connect(void)
{//force connect bringup source

	int ret = 0;

	switch(AUTO_BRINGUP_SOURCE){

		case _SRC_YPBPR:
		case _SRC_VGA:
			if(ADC_Global_Status == SRC_CONNECT_DONE)
				break;

			printk(KERN_EMERG "#####[Bring-up][%s(%d)]ADC Init start\n",__func__,__LINE__);
			ADC_Initial();
			ADC_Open();
			if(AUTO_BRINGUP_SOURCE == _SRC_YPBPR){
				printk(KERN_EMERG "#####[Bring-up][%s(%d)]\n",__func__,__LINE__);
				ADC_Input = _YPBPR_INPUT1;
				if(!ADC_Connect(_SRC_YPBPR, ADC_Input)){
					printk(KERN_EMERG "#####[Bring-up][%s(%d)]\n",__func__,__LINE__);
					return;//Connect fail
				}

				ADC_Global_Status = SRC_CONNECT_DONE;
				ADC_Input_Source = _SRC_YPBPR;
				ADC_set_detect_flag(TRUE);
				ADC_register_callback(TRUE, YPbPr_DetectTiming);
				printk(KERN_EMERG "#####[Bring-up][%s(%d)]\n",__func__,__LINE__);
			}else{
				ADC_Input = _VGA_INPUT1;
				if(!ADC_Connect(_SRC_VGA, ADC_Input))
					return;//Connect fail
				ADC_Global_Status = SRC_CONNECT_DONE;
				ADC_Input_Source = _SRC_VGA;
				ADC_set_detect_flag(TRUE);
				ADC_register_callback(TRUE, VGA_DetectTiming);
			}
		break;

		case _SRC_TV:
		case _SRC_CVBS:
			if(AVD_Global_Status == SRC_CONNECT_DONE)
				break;

			printk(KERN_EMERG "#####[Bring-up][%s(%d)]AVD Init start\n",__func__,__LINE__);
			if (0 == Scaler_AVD_Init(KADP_VFE_AVD_CC_AND_TTX_ARE_SUPPORTED)){

				printk(KERN_EMERG "#####[Bring-up][%s(%d)]AVD Init success\n",__func__,__LINE__);
				if (0 == VFE_AVD_OPEN()){
					printk(KERN_EMERG "#####[Bring-up][%s(%d)]AVD Open success\n",__func__,__LINE__);

					Scaler_AVD_SetLGEColorSystem(255);

					printk(KERN_EMERG "#####[Bring-up][%s(%d)]AVD Connect start\n",__func__,__LINE__);

					if(AUTO_BRINGUP_SOURCE == _SRC_TV){
						Scaler_AVD_SetDemodType(KADP_AVD_INTERNAL_DEMOD);
						ret = VFE_AVD_ATV_CONNECT(0);
						if (ret == 0) {
							AVD_Input_Source = _SRC_TV;
							printk(KERN_EMERG "#####[Bring-up][%s(%d)]ATV Connect success\n",__func__,__LINE__);
						}
					}else{
						if (0 == Scaler_AVD_AV_Connect(_AV_INPUT1)){
							AVD_Global_Status = SRC_CONNECT_DONE;
							AV_Status = SRC_CONNECT_DONE;
							AVD_Input_Source = _SRC_CVBS;
							VDC_set_detect_flag(TRUE);
							printk(KERN_EMERG "#####[Bring-up][%s(%d)]AV Connect success\n",__func__,__LINE__);
							VDC_register_callback(TRUE, Scaler_AVD_DetectTiming);
						}
					}
				}
			}
			break;
		case _SRC_HDMI:
			if(HDMI_Global_Status == SRC_CONNECT_DONE)
				break;
			vfe_hdmi_drv_init();
			vfe_hdmi_drv_open();
			vfe_hdmi_drv_connect(0);
			HDMI_Global_Status = SRC_CONNECT_DONE;
			HDMI_Input_Source = _SRC_HDMI;
			HDMI_register_callback(TRUE, vfe_hdmi_drv_detect_mode);
            HDMI_set_detect_flag(TRUE);
		break;

		default:
			break;
	}

#ifdef CONFIG_DUAL_CHANNEL
	switch(AUTO_BRINGUP_SOURCE_SUB)
	{
		case _SRC_YPBPR:
		case _SRC_VGA:	
			if(ADC_Global_Status == SRC_CONNECT_DONE)
				break;

			printk(KERN_EMERG "#####[Bring-up][%s(%d)]ADC Init start\n",__func__,__LINE__); 
			ADC_Initial();
			ADC_Open();
			if(AUTO_BRINGUP_SOURCE_SUB == _SRC_YPBPR){
				printk(KERN_EMERG "#####[Bring-up][%s(%d)]\n",__func__,__LINE__); 
				ADC_Input = _YPBPR_INPUT1;
				if(!ADC_Connect(_SRC_YPBPR, ADC_Input)){
					printk(KERN_EMERG "#####[Bring-up][%s(%d)]\n",__func__,__LINE__); 
					return;//Connect fail
				}

				ADC_Global_Status = SRC_CONNECT_DONE;
				ADC_Input_Source = _SRC_YPBPR;
				ADC_set_detect_flag(TRUE);
				ADC_register_callback(TRUE, YPbPr_DetectTiming);
				printk(KERN_EMERG "#####[Bring-up][%s(%d)]\n",__func__,__LINE__); 
			}else{
				ADC_Input = _VGA_INPUT1;
				if(!ADC_Connect(_SRC_VGA, ADC_Input))
					return;//Connect fail
				ADC_Global_Status = SRC_CONNECT_DONE;
				ADC_Input_Source = _SRC_VGA;
				ADC_set_detect_flag(TRUE);
				ADC_register_callback(TRUE, VGA_DetectTiming);
			}
			
		break;

		case _SRC_TV:
		case _SRC_CVBS:
			if(AVD_Global_Status == SRC_CONNECT_DONE)
				break;

			printk(KERN_EMERG "#####[Bring-up][%s(%d)]AVD Init start\n",__func__,__LINE__);
			if (0 == Scaler_AVD_Init(KADP_VFE_AVD_CC_AND_TTX_ARE_SUPPORTED)){

				printk(KERN_EMERG "#####[Bring-up][%s(%d)]AVD Init success\n",__func__,__LINE__);
				if (0 == VFE_AVD_OPEN()){
					printk(KERN_EMERG "#####[Bring-up][%s(%d)]AVD Open success\n",__func__,__LINE__);

					Scaler_AVD_SetLGEColorSystem(255);

					printk(KERN_EMERG "#####[Bring-up][%s(%d)]AVD Connect start\n",__func__,__LINE__);

					if(AUTO_BRINGUP_SOURCE_SUB == _SRC_TV){
						Scaler_AVD_SetDemodType(KADP_AVD_INTERNAL_DEMOD);
						ret = VFE_AVD_ATV_CONNECT(0);
						if (ret == 0) {
							AVD_Input_Source = _SRC_TV;
							printk(KERN_EMERG "#####[Bring-up][%s(%d)]ATV Connect success\n",__func__,__LINE__);
						}
					}else{
						if (0 == Scaler_AVD_AV_Connect(_AV_INPUT1)){
							AVD_Global_Status = SRC_CONNECT_DONE;
							AV_Status = SRC_CONNECT_DONE;
							AVD_Input_Source = _SRC_CVBS;
							VDC_set_detect_flag(TRUE);
							printk(KERN_EMERG "#####[Bring-up][%s(%d)]AV Connect success\n",__func__,__LINE__);
							VDC_register_callback(TRUE, Scaler_AVD_DetectTiming);
						}
					}
				}
			}
			break;
		case _SRC_HDMI:
			if(HDMI_Global_Status == SRC_CONNECT_DONE)
				break;
			vfe_hdmi_drv_init();
			vfe_hdmi_drv_open();
			vfe_hdmi_drv_connect(0);
			HDMI_Global_Status = SRC_CONNECT_DONE;
			HDMI_Input_Source = _SRC_HDMI;
			HDMI_register_callback(TRUE, vfe_hdmi_drv_detect_mode);
            HDMI_set_detect_flag(TRUE);
		break;

		default:
			break;
	}
#endif
}
#endif



static int adc_detect_tsk(void *p)//This task run ADC source timing detecting after source connect
{
    rtd_printk(KERN_DEBUG, TAG_NAME, "adc_detect_tsk()\n");
	current->flags &= ~PF_NOFREEZE;
    while (1)
    {
		msleep(10);
		
		#ifdef AUTO_BRINGUP_SOURCE//for bringup used
		vfe_source_bringup_force_connect();
		#endif
		
		down(&ADC_DetectSemaphore);
		if(ADC_DetectFlag && ADC_DetectCB && !check_verify_mode_enable()) ADC_DetectCB();
		up(&ADC_DetectSemaphore);
 		if (freezing(current))
        {
			try_to_freeze();
        }
		if (kthread_should_stop()) {
         	break;
      	}
    }

    rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n####adc_detect_tsk: exit...####\n");
    do_exit(0);
    return 0;
}

static int avd_detect_tsk(void *p)//This task run AVD source timing detecting after source connect
{
    struct cpumask vsc_cpumask;
    rtd_printk(KERN_INFO, TAG_NAME, "#####[%s(%d)]avd_detect_tsk()\n",__func__,__LINE__);
    cpumask_clear(&vsc_cpumask);
    cpumask_set_cpu(0, &vsc_cpumask); // run task in core 0
    cpumask_set_cpu(2, &vsc_cpumask); // run task in core 2
    cpumask_set_cpu(3, &vsc_cpumask); // run task in core 3
    sched_setaffinity(0, &vsc_cpumask);
	current->flags &= ~PF_NOFREEZE;
    while (1)
    {
		msleep(10);

		down(&VDC_DetectSemaphore);
		if(VDC_DetectFlag && VDC_DetectCB) VDC_DetectCB();
		up(&VDC_DetectSemaphore);

 		if (freezing(current))
		{
			try_to_freeze();
		}
		if (kthread_should_stop()) {
         	break;
      	}
    }

    rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n####avd_detect_tsk: exit...####\n");
    do_exit(0);
    return 0;
}

static int hdmi_detect_tsk(void *p)//This task run HDMI source timing detecting after source connect
{
    rtd_printk(KERN_DEBUG, TAG_NAME, "hdmi_detect_tsk()\n");
	current->flags &= ~PF_NOFREEZE;
    while (1)
    {
		msleep(10);

		down(&HDMI_DetectSemaphore);
		if(HDMI_DetectFlag && HDMI_DetectCB) HDMI_DetectCB();
		up(&HDMI_DetectSemaphore);
 		if (freezing(current))
        {
			try_to_freeze();
        }
		if (kthread_should_stop()) {
         	break;
      	}
    }

    rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n####hdmi_detect_tsk: exit...####\n");
    do_exit(0);
    return 0;
}


void vga_auto_config_error_handler(void)
{//for vga auto config unstable signal use
#ifdef CONFIG_FORCE_RUN_I3DDMA
	drvif_mode_disable_dma_onlinemeasure();
#else
    drvif_mode_disableonlinemeasure(SLR_MAIN_DISPLAY);
#endif
	Scaler_DispSetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE, _MODE_STATE_SEARCH);
	fw_scaler_adc_nolock_wdg_ctrl(SLR_MAIN_DISPLAY, FALSE);// Disable adc_nolock_wdg
	down(get_forcebg_semaphore());
	scalerdisplay_force_bg_enable(SLR_MAIN_DISPLAY, TRUE);/*Auto BG*/
	up(get_forcebg_semaphore());
	clear_online_status(SLR_MAIN_DISPLAY);
	drivf_scaler_reset_freerun();
	if (get_ADC_Global_Status() == SRC_CONNECT_DONE) {
		ADC_OnlineMeasureError_Handler(ADC_Input_Source);
		Set_Reply_Zero_Timing_Flag(VSC_INPUTSRC_ADC, REPORT_ZERO_TIMING);/*Let Webos get zero timing*/
		ADC_set_detect_flag(TRUE);
	}
}


static bool onms_tsk_running_flag = FALSE;//Record video_onlinemeasure_tsk status. True: Task is running
static struct task_struct *p_onms_tsk = NULL;
DECLARE_WAIT_QUEUE_HEAD(ONMS_WAIT_QUEUE);//Online measure task wait queue
static DEFINE_SPINLOCK(Main_ONMS_Spinlock);/*Spin lock no context switch. control main online measure flag*/
static DEFINE_SPINLOCK(Sub_ONMS_Spinlock);/*Spin lock no context switch. control sub online measure flag*/

static int video_onlinemeasure_tsk(void *p)
{//This task is used to online measure error handler
	unsigned long flags;//for spin_lock_irqsave
    struct cpumask onms_cpumask;
	pr_notice("video_onlinemeasure_tsk()\n");
    cpumask_clear(&onms_cpumask);
    cpumask_set_cpu(0, &onms_cpumask); // run task in core 0
    cpumask_set_cpu(2, &onms_cpumask); // run task in core 2
    cpumask_set_cpu(3, &onms_cpumask); // run task in core 3
    sched_setaffinity(0, &onms_cpumask);
	current->flags &= ~PF_NOFREEZE;
	while (1)
	{
#ifdef CONFIG_DUAL_CHANNEL
		wait_event_freezable_timeout(ONMS_WAIT_QUEUE, main_online_triggle || sub_online_triggle, 50);//Timeout is 500ms
#else
		wait_event_freezable_timeout(ONMS_WAIT_QUEUE, main_online_triggle, 50);//Timeout is 500ms
#endif

#ifdef CONFIG_DUAL_CHANNEL
		if(main_online_triggle || sub_online_triggle)
#else
		if(main_online_triggle)
#endif
		{
			if(main_online_triggle) {
				spin_lock_irqsave(&Main_ONMS_Spinlock, flags);
				main_online_triggle = FALSE;
				spin_unlock_irqrestore(&Main_ONMS_Spinlock, flags);
				rpc_main_onlinemeasure_isr(0, 0);
			}
#ifdef CONFIG_DUAL_CHANNEL
			if(sub_online_triggle) {
				spin_lock_irqsave(&Sub_ONMS_Spinlock, flags);
				sub_online_triggle = FALSE;
				spin_unlock_irqrestore(&Sub_ONMS_Spinlock, flags);
				rpc_sub_onlinemeasure_isr(0, 0);
			}
#endif
		}
		if (freezing(current))
		{
			try_to_freeze();
		}
		if (kthread_should_stop()) {
			break;
		}
	}

	pr_notice("\r\n####video_onlinemeasure_tsk: exit...####\n");
	do_exit(0);
	return 0;
}

static void create_onlinemeasure_tsk(void)
{
	int err;
	if (onms_tsk_running_flag == FALSE) {
		p_onms_tsk = kthread_create(video_onlinemeasure_tsk, NULL, "onlinemeasure_tsk");

	    if (p_onms_tsk) {
			wake_up_process(p_onms_tsk);
			onms_tsk_running_flag = TRUE;
	    } else {
	    	err = PTR_ERR(p_onms_tsk);
	    	pr_err("Unable to start video_onlinemeasure_tsk (err_id = %d)./n", err);
	    }
	}
}

static void delete_onlinemeasure_tsk(void)
{//delete video_onlinemeasure_tsk
	int ret;
	if (onms_tsk_running_flag) {
 		ret = kthread_stop(p_onms_tsk);
 		if (!ret) {
 			p_onms_tsk = NULL;
 			onms_tsk_running_flag = FALSE;
			pr_err("video_onlinemeasure_tsk thread stopped\n");
 		}
	}
}

void triggle_onms_handler(unsigned char display)
{//This is for online measure isr used. notice online error
	if(display == SLR_MAIN_DISPLAY)
	{
		spin_lock(&Main_ONMS_Spinlock);
		main_online_triggle = TRUE;
		spin_unlock(&Main_ONMS_Spinlock);
	}
#ifdef CONFIG_DUAL_CHANNEL
	else if(display == SLR_SUB_DISPLAY)
	{
		spin_lock(&Sub_ONMS_Spinlock);
		sub_online_triggle = TRUE;
		spin_unlock(&Sub_ONMS_Spinlock);
	}
#endif
	wake_up(&ONMS_WAIT_QUEUE);

}




void ADC_register_callback(unsigned char enable, DETECTCALLBACK cb)//if enable is true, set the cb for ADC
{
	if(enable)
		ADC_DetectCB = cb;
	else
		ADC_DetectCB = NULL;
}

void VDC_register_callback(unsigned char enable, DETECTCALLBACK cb)//if enable is true, set the cb for VDC
{
	if(enable)
		VDC_DetectCB = cb;
	else
		VDC_DetectCB = NULL;
}

void HDMI_register_callback(unsigned char enable, DETECTCALLBACK cb)//if enable is true, set the cb for HDMI
{
	if(enable)
		HDMI_DetectCB = cb;
	else
		HDMI_DetectCB = NULL;
}

void ADC_set_detect_flag(unsigned char enable)//Set ADC detect timing flag.
{
	if(ADC_DetectFlag != enable)
	{
		ADC_DetectFlag = enable;
	}
}

#ifdef CONFIG_CUSTOMER_TV010
unsigned char SetNonStandardFlag(unsigned int value)
{
	NonStandardKernel = value;
	return 0;
}

unsigned int GetNonStandardFlag(void)
{
	return NonStandardKernel;
}
#endif

unsigned char VDC_get_detect_flag(void)//Get VDC detect timing flag.
{
	return VDC_DetectFlag;
}

void VDC_set_detect_flag(unsigned char enable)//Set VDC detect timing flag.
{
	if(VDC_DetectFlag != enable)
	{
		VDC_DetectFlag = enable;
	}
}

void HDMI_set_detect_flag(unsigned char enable)//Set HDMI detect timing flag.
{
	if(HDMI_DetectFlag != enable)
	{
		HDMI_DetectFlag = enable;
		printk(KERN_INFO "\r### HDMI_set_detect_flag enable:%d ###\r\n", enable);
	}
}

static void Detect_Semaphore_Init(void)
{
	sema_init(&ADC_DetectSemaphore, 1);
	sema_init(&VDC_DetectSemaphore, 1);
	sema_init(&HDMI_DetectSemaphore, 1);
	sema_init(&Scaler_Fll_Running_Semaphore, 1);
}


struct semaphore* get_adc_adjustsemaphore(void)
{
	return &ADC_ADJ_Semaphore;
}

struct semaphore* get_adc_detectsemaphore(void)
{
	return &ADC_DetectSemaphore;
}

struct semaphore* get_vdc_detectsemaphore(void)
{
	return &VDC_DetectSemaphore;
}

struct semaphore* get_hdmi_detectsemaphore(void)
{
	return &HDMI_DetectSemaphore;
}

struct semaphore *get_setsource_semaphore(void)
{
	return &SetSource_Semaphore;
}
struct semaphore *get_scalerrpc_semaphore(void)
{
	return &Scaler_RPC_Semaphore;
}

struct semaphore* get_scaler_fll_running_semaphore(void)
{
	return &Scaler_Fll_Running_Semaphore;
}
struct semaphore *get_VBI_vps_semaphore(void)
{
	return &VBI_vps_driver_Semaphore;
}
module_init(vfe_module_init);
module_exit(vfe_module_exit);


