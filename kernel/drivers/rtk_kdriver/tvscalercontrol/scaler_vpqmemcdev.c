/*Kernel Header file*/
#include <linux/delay.h>
#include <generated/autoconf.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/cdev.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/platform_device.h>
#include <linux/mtd/mtd.h>
#include <linux/uaccess.h>
#include <asm/cacheflush.h>
#include <rtk_kdriver/RPCDriver.h>
#include <linux/pageremap.h>
#include <linux/kthread.h>
#include <uapi/linux/const.h>
#include <linux/mm.h>
#include <linux/string.h>/*memset*/
#include <linux/init.h>
#include <linux/spinlock_types.h>/*For spinlock*/
#include <linux/suspend.h>

/*RBUS Header file*/

#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerCommon.h>
	#include <scaler/scalerDrvCommon.h>
#else
#include <scalercommon/scalerCommon.h>
#include <scalercommon/scalerDrvCommon.h>
#endif


#include <rbus/mdomain_cap_reg.h>
#include <rbus/memc_mux_reg.h>
#include <rbus/sys_reg_reg.h>
#include <rbus/ppoverlay_reg.h>
#include <rbus/dbus_wrapper_reg.h>
#include <rbus/di_reg.h>
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include <tvscalercontrol/scaler/scalercolorlib_tv001.h>
#include <rbus/sys_reg_reg.h>
#include <rbus/mc_dma_reg.h>
#include <rbus/me_share_dma_reg.h>
#include <memc_isr/memc_reg_def.h>
#include "memc_isr/HAL/hal_dm.h"

/*TVScaler Header file*/
#include "scaler_vpqmemcdev.h"
#include "ioctrl/vpq/vpq_memc_cmd_id.h"
#include "scaler_vscdev.h"
#include <tvscalercontrol/scalerdrv/scalerdrv.h>
#include <tvscalercontrol/vip/memc_mux.h>
#include <tvscalercontrol/io/ioregdrv.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#include <tvscalercontrol/panel/panelapi.h>
#include "scaler_vbedev.h"
#include <scaler/vipRPCCommon.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/scalerdrv/framesync.h>
#include <tvscalercontrol/vo/rtk_vo.h>
#include <mach/rtk_log.h>
#define TAG_NAME "MEMC"

//#define RUN_MERLIN_MEMC_ENABLE
#define MEMC_DEBUG

#ifdef MEMC_DEBUG
#define MEMC_DBG_PRINT(s, args...) rtd_printk(KERN_DEBUG, TAG_NAME, s, ## args)
#else
#define MEMC_DBG_PRINT(s, args...)
#endif

#include "memc_isr/scalerMEMC.h"
#include "memc_isr/Common/memc_type.h"

#if 0
#define bisr_rstn_addr_kme 	(0xb8000f00)
#define IP_rstn_bits_kme 	(_BIT10)
#define bisr_remap_addr_kme	(0xb8000f10)
#define IP_remap_bits_kme 	(_BIT10)
#define bisr_done_addr_kme 	(0xb8000f20)
#define IP_done_bits_kme 	(_BIT10)
#define bisr_repair_addr_kme (0xb809d0e4)
#define IP_repair_check_bits_kme (_BIT26)
#define bisr_fail_addr_kme 	(0xb809d0e4)
#define IP_fail_bits_kme 	(_BIT24)

#define bisr_rstn_addr_kmc 	(0xb8000f00)
#define IP_rstn_bits_kmc 	(_BIT8|_BIT7|_BIT4|_BIT3|_BIT2|_BIT1)
#define bisr_remap_addr_kmc	(0xb8000f10)
#define IP_remap_bits_kmc 	(_BIT8|_BIT7|_BIT4|_BIT3|_BIT2|_BIT1)
#define bisr_done_addr_kmc 	(0xb8000f20)
#define IP_done_bits_kmc 	(_BIT8|_BIT7|_BIT4|_BIT3|_BIT2|_BIT1)
#define bisr_repair_addr_kmc (0xb8099098)
#define IP_repair_check_bits_kmc (_BIT8|_BIT7|_BIT6|_BIT5|_BIT4|_BIT3|_BIT2|_BIT1|_BIT0)
#define bisr_fail_addr_kmc 	(0xb809909c)
#define IP_fail_bits_kmc 	(_BIT7|_BIT6|_BIT3|_BIT2|_BIT1|_BIT0)
#endif
static struct cdev vpq_memc_cdev;

int vpq_memc_major   = 0;
int vpq_memc_minor   = 0 ;
int vpq_memc_nr_devs = 1;

static struct semaphore vpq_memc_Semaphore;
static struct semaphore livezoom_memcclose_Semaphore;
extern struct semaphore Memc_Realcinema_Semaphore;
extern DEBUG_SCALER_VSC_STRUCT DbgSclrFlgTkr;//extern char memc_realcinema_run_flag;//Run memc mode

module_param(vpq_memc_major, int, S_IRUGO);
module_param(vpq_memc_minor, int, S_IRUGO);
module_param(vpq_memc_nr_devs, int, S_IRUGO);
static struct class *vpq_memc_class;
UINT8 MEMC_First_Run_Done=0;//using for booting to avoid second initial
UINT8 MEMC_First_Run_force_SetInOutUseCase_Done=0;
UINT8 MEMC_First_Run_FBG_enable=0;//using for booting fbg checking
static UINT8 MEMC_instanboot_resume_Done=0;
UINT8 resume_repeat_mode_check=0;
static UINT8 MEMC_snashop_resume_Done=0;
static unsigned int gphy_addr_kme, gphy_addr_kmc00, gphy_addr_kmc01;
static VPQ_MEMC_TYPE_T MEMC_motion_type = VPQ_MEMC_TYPE_OFF;
static char AVD_Unstable_Check_MEMC_OutBG_flag = FALSE;
extern unsigned char fwif_color_get_cinema_mode_en(void);
static UINT8 m_bForce24to48=FALSE;

#if 1  // MEMC CLK OFF CTRL
unsigned char bMemcClkTask_ForceExitFlag=0, bMemcClkTask_memcClkEn=0, bMemcClkTask_memcMuteFlag=0;
struct semaphore MEMC_CLK_Semaphore;
#endif

extern UINT32 HDMI_PowerSaving_stage;
extern int g_memc_hdmi_switch_state;
extern int g_memc_switch_state;
extern UINT32 DTV_PowerSaving_stage;
extern unsigned char g_PCMode_flag;
extern VOID Mid_MISC_SetInINTEnable(INT_TYPE enIntType, BOOL bEnable);
extern VOID Mid_MISC_SetOutINTEnable(INT_TYPE enIntType, BOOL bEnable);
extern VOID Mid_MISC_SetInputIntp_en(BOOL bEnable);
extern VOID Mid_MISC_SetOnefiftIntp_en(BOOL bEnable);
extern VOID Mid_MISC_SetOutputIntp_en(BOOL bEnable);
extern unsigned char drvif_color_Get_Two_Step_UZU_Mode(void);
extern SCALER_DATA_FS_ALGO_RESULT g_tDataFsAlgoResult;

/*******************************************************************************
****************************VPQ MEMC DRIVER************************************
*******************************************************************************/
//#ifdef CONFIG_ENABLE_MEMC
void HAL_VPQ_MEMC_Initialize(void){
	if(MEMC_First_Run_Done == 0){
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC][init]%s %d[%d]\n",__func__,__LINE__,MEMC_First_Run_Done);
		MEMC_First_Run_Done = 1;
		MEMC_First_Run_FBG_enable = _ENABLE;
		Scaler_MEMC_output_force_bg_enable(TRUE);
		Scaler_MEMC_initial_Case();
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC][init]HAL_VPQ_MEMC_Initialize Done!![%d]\n",MEMC_First_Run_Done);		
	}
}

void HAL_VPQ_MEMC_Uninitialize(void){

}

void memc_setting_displayDtiming_framerate(void)
{
	unsigned int vfreq_ori = 0;
	vfreq_ori = Scaler_DispGetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ);
	modestate_decide_dtg_m_mode();
	if(vfreq_ori != Scaler_DispGetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ))
		scaler_disp_smooth_variable_settingByDisp(0);
}

unsigned int memc_realcinema_get_current_framerate(void)
{
	ppoverlay_double_buffer_ctrl_RBUS ppoverlay_double_buffer_ctrl_reg;
	ppoverlay_dv_total_RBUS dv_total_reg;
	unsigned int vtotal;
	unsigned int frameRates;
	unsigned long flags;//for spin_lock_irqsave

	//down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
	ppoverlay_double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_read_sel = 1;  //D7_read_sel
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_reg.regValue);
	dv_total_reg.regValue = IoReg_Read32(PPOVERLAY_DV_total_reg);
	vtotal = dv_total_reg.dv_total;
	spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
	//up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	frameRates = (((Get_DISPLAY_CLOCK_TYPICAL()/Get_DISP_HORIZONTAL_TOTAL())*1000)/vtotal);
	frameRates /= 1000;

	if((frameRates>=47) && (frameRates<=49)){
		frameRates = 48;
	}else if((frameRates>49) && (frameRates<51)){
		frameRates = 50;
	}else if(((frameRates>=51) && (frameRates<=59))||
		((frameRates>=45) && (frameRates<=47))){
		// apply it.
	}
	else if((frameRates>59) && (frameRates<61)){
		frameRates = 60;
	}else{
		frameRates = 60;
	}

	rtd_printk(KERN_NOTICE, TAG_NAME, "memc_realcinema_get_current_framerate=%d!!\n", frameRates);
	return frameRates;
}

/**
 *@brief memc_realcinema_framerate Set framerate while turnning on/off real-cinema
 *@return VOID
**/
void memc_realcinema_framerate(void)
{
	/*scaler timing setting is finish?*/
	if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_STATE) != _MODE_STATE_ACTIVE)
		return;

	if(Get_DISPLAY_REFRESH_RATE() == 120)
		return;

	if((Scaler_get_realcinema_mode_condition()
		&& (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_DTG_MASTER_V_FREQ) == 48))
		|| (!Scaler_get_realcinema_mode_condition()
		&& (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_DTG_MASTER_V_FREQ) == 60)))
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "[Real_Cinema] The same mode, do not change settings. mode=%d, DTG_M=%d \n", Scaler_get_realcinema_mode_condition(), Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_DTG_MASTER_V_FREQ));
		return;
	}
	/*input frame rate must be 24hz or output is 48hz*/
	if(((Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_V_FREQ) > 235) && \
			(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_V_FREQ) < 245)) || \
			Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_DTG_MASTER_V_FREQ) == 48) {
		unsigned int vfreq_ori = 0;
		vfreq_ori = memc_realcinema_get_current_framerate(); //Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_DTG_MASTER_V_FREQ);
		modestate_decide_dtg_m_modeByDisp((unsigned char)SLR_MAIN_DISPLAY);
#ifdef CONFIG_DATA_FRAMESYNC_FORCE_422_CAP
        if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC){
            //VDEC 2k1k use original flow, framesync with gatting
            if((vbe_disp_get_adaptivestream_fs_mode())
				|| ((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC) && (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_IPH_ACT_WID_PRE) > DATAFS_DISABLE_GATTING_WIDTH) && (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_IPV_ACT_LEN_PRE) > DATAFS_DISABLE_GATTING_HEIGHT))
				|| ((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC) && (get_current_driver_pattern(DRIVER_FREERUN_PATTERN) == 1))){
                if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DTG_MASTER_V_FREQ) == 48){
                    Scaler_Set_Cinema_Mode(_ENABLE, _ENABLE);
                }
                else{
                    Scaler_Set_Cinema_Mode(_DISABLE, _ENABLE);
                }
            }
        }
        else{
#endif

		if(1){//Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_FRAMESYNC) == FALSE)	{
			if(vfreq_ori != Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_DTG_MASTER_V_FREQ)){
				extern void scaler_set_I2D_tracking_in_realcinema(unsigned char bEnable);
				scaler_set_I2D_tracking_in_realcinema(TRUE);
				scaler_disp_smooth_variable_settingByDisp((unsigned char)SLR_MAIN_DISPLAY);
	        	}
		}
#ifdef CONFIG_DATA_FRAMESYNC_FORCE_422_CAP
	}
#endif
		rtd_printk(KERN_NOTICE, TAG_NAME, "vfreq_ori=%d, DTG_M=%d \n", vfreq_ori, Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_DTG_MASTER_V_FREQ));
	}
}

long vpq_memc_set_lowDelayMode(UINT8 type)
{
	int ret = 0;
	unsigned int semaphoreCnt = 0;
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
	#endif

	while((IoReg_Read32(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg)&_BIT30) && semaphoreCnt < 100000) {
		semaphoreCnt++;
	}
	if(semaphoreCnt >= 100000) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]HAL_VPQ_MEMC_LowDelayMode timed out!\n");
		return -1;
	}
	IoReg_SetBits(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg,_BIT30);
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_LOWDELAYMODE, type, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_LOWDELAYMODE RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return 0;
		Scaler_MEMC_LowDelayMode(type);
	#else

		task.type = SCALERIOC_MEMC_LOWDELAYMODE;
		task.data.value = type;
		Scaler_MEMC_PushTask(&task);
	#endif
#endif
	IoReg_ClearBits(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg,_BIT30);
	return ret;
}


unsigned char LiveZoom_MEMCClose_Flag = FALSE;

struct semaphore* get_livezoom_memcclose_Semaphore(void)
{
	return &livezoom_memcclose_Semaphore;
}

void MEMC_LoadScriptDMA(void)
{
	pr_notice("[jerry_MEMC_LoadScriptDMA]\n");
	rtd_setbits(0xb80994F0, _BIT0); //db_en
	rtd_setbits(0xb809AEA8, _BIT0); //db_en

	rtd_setbits(0xb8099460, _BIT0); //dma_off mc w
	rtd_setbits(0xb80994dc, _BIT0); //dma_off mc w
	rtd_setbits(0xb809ae1c, _BIT0); //dma_off mc r
	rtd_setbits(0xb809ae3c, _BIT0); //dma_off mc r
	rtd_setbits(0xb809ae5c, _BIT0); //dma_off mc r
	rtd_setbits(0xb809ae7c, _BIT0); //dma_off mc r
	rtd_setbits(0xb809B794, _BIT0); //dma_off  me share w
	rtd_setbits(0xb809B7E0, _BIT0); //dma_off me sharer

	rtd_setbits(0xb809c038, _BIT20); //00 [20]
	rtd_setbits(0xb809c040, _BIT20); //01
	rtd_setbits(0xb809c048, _BIT20); //02
	rtd_setbits(0xb809c050, _BIT20); //03
	rtd_setbits(0xb809c114, _BIT20); //08
	rtd_setbits(0xb809c11c, _BIT20); //09
	rtd_setbits(0xb809c138, _BIT20); //10
	rtd_setbits(0xb809c140, _BIT20); //11
	rtd_setbits(0xb809c15c, _BIT20); //12
	rtd_setbits(0xb809c164, _BIT20); //13
	rtd_setbits(0xb809c180, _BIT20); //14
	rtd_setbits(0xb809c188, _BIT20); //15

	rtd_setbits(0xb809c210, _BIT20);  //mv01 [20]
	rtd_setbits(0xb809c224, _BIT20);  //mv02 [20]
	rtd_setbits(0xb809c228, _BIT20);  //mv03 [20]
	rtd_setbits(0xb809c244, _BIT20);  //mv04
	rtd_setbits(0xb809c260, _BIT20);  //mv05
	rtd_setbits(0xb809c264, _BIT20);  // ..
	rtd_setbits(0xb809c268, _BIT20);
	rtd_setbits(0xb809c26c, _BIT20);
	rtd_setbits(0xb809c270, _BIT20);
	rtd_setbits(0xb809c274, _BIT20);
	rtd_setbits(0xb809c278, _BIT20);  //mv11

	rtd_setbits(0xb80994F0, _BIT2); //db_apply
	rtd_setbits(0xb809AEA8, _BIT2); //db_apply

	rtd_clearbits(0xb80994F0, _BIT0); //db_off
	rtd_clearbits(0xb809AEA8, _BIT0); //db_off
}

void MEMC_LoadScriptDMADisable(void)
{
	pr_notice("[jerry_MEMC_LoadScriptDMADisable]\n");
	rtd_setbits(0xb80994F0, _BIT0); //db_en
	rtd_setbits(0xb809AEA8, _BIT0); //db_en

	//rtd_outl(0xb8099460,0x00000300); //dma_off mc w
	//rtd_outl(0xb80994dc,0x00000300); //dma_off mc w
	rtd_clearbits(0xb809ae1c, _BIT0); //dma_off mc r
	rtd_clearbits(0xb809ae3c, _BIT0); //dma_off mc r
	//rtd_outl(0xb809ae5c,0x00000300); //dma_off mc r
	//rtd_outl(0xb809ae7c,0x00000300); //dma_off mc r

	rtd_clearbits(0xb809B794, _BIT0); //dma_off  me share w
	rtd_clearbits(0xb809B7E0, _BIT0); //dma_off me sharer
	//rtd_outl(0xb809c038,0x0021001d); //00 [20]
	//rtd_outl(0xb809c040,0x0001001d); //01
	rtd_clearbits(0xb809c048, _BIT20); //02
	rtd_clearbits(0xb809c050, _BIT20); //03
	rtd_clearbits(0xb809c114, _BIT20); //08
	rtd_clearbits(0xb809c11c, _BIT20); //09
	rtd_clearbits(0xb809c138, _BIT20); //10
	rtd_clearbits(0xb809c140, _BIT20); //11
	rtd_clearbits(0xb809c15c, _BIT20); //12
	rtd_clearbits(0xb809c164, _BIT20); //13
	rtd_clearbits(0xb809c180, _BIT20); //14
	rtd_clearbits(0xb809c188, _BIT20); //15

	rtd_clearbits(0xb809c210, _BIT20);  //mv01 [20]
	rtd_clearbits(0xb809c224, _BIT20);  //mv02 [20]
	rtd_clearbits(0xb809c228, _BIT20);  //mv03 [20]
	rtd_clearbits(0xb809c244, _BIT20);  //mv04
	rtd_clearbits(0xb809c260, _BIT20);  //mv05
	rtd_clearbits(0xb809c264, _BIT20);  // ..
	rtd_clearbits(0xb809c268, _BIT20);
	rtd_clearbits(0xb809c26c, _BIT20);
	rtd_clearbits(0xb809c270, _BIT20);
	rtd_clearbits(0xb809c274, _BIT20);
	rtd_clearbits(0xb809c278, _BIT20);  //mv11

	rtd_setbits(0xb80994F0, _BIT2); //db_apply
	rtd_setbits(0xb809AEA8, _BIT2); //db_apply

	rtd_clearbits(0xb80994F0, _BIT0); //db_off
	rtd_clearbits(0xb809AEA8, _BIT0); //db_off
}

//static unsigned int gphy_addr_kme, gphy_addr_kmc00, gphy_addr_kmc01;
void MEMC_ChangeMCBufferAddr(unsigned char u1_is_changed_to_6_buffer)
{
	extern BOOL MEMC_LibSetInOutMode(MEMC_INOUT_MODE emom,BOOL bForce);
	extern VOID MEMC_MidSetPCOff(VOID);
	extern VOID Mid_Mode_SetMEMC_PCModeEnable(BOOL bEnable);

	if(u1_is_changed_to_6_buffer){
		//set cadence = auto
		rtd_clearbits(0xb809d600, _BIT0);
		//b-size
		if(g_PCMode_flag == 1){// from VR360 to PC
			MEMC_LibSetInOutMode(MEMC_RGB_IN_PC_OUT,TRUE);
			Mid_Mode_SetMEMC_PCModeEnable(TRUE);
			pr_notice("$$$   [jerry_VR360_test01_pc_buffer_mode]   $$$");
		}else{//from VR360 to normal
			MEMC_Lib_SetKphaseME1IndexBsize(8);
			MEMC_Lib_SetKphaseME2IndexBsize(8);
			MEMC_Lib_SetKphaseMCIndexBsize(6);
			pr_notice("$$$   [jerry_VR360_test01_6_buffer_mode]   $$$");
		}
		//rtd_setbits(0xb809d410, _BIT13);
	}
	else{
		if(g_PCMode_flag == 1){// from pc to VR360, reset DMA to normal mode first.
			MEMC_LibSetInOutMode(MEMC_RGB_IN_VIDEO_OUT,FALSE);
			MEMC_MidSetPCOff();
			Mid_Mode_SetMEMC_PCModeEnable(FALSE);
		}
		//set cadence = 0
		rtd_setbits(0xb809d600, _BIT0);
		//b-size
		MEMC_Lib_SetKphaseME1IndexBsize(4);
		MEMC_Lib_SetKphaseME2IndexBsize(4);
		MEMC_Lib_SetKphaseMCIndexBsize(4);
		//rtd_clearbits(0xb809d410, _BIT13);
		pr_notice("$$$   [jerry_VR360_test02_4_buffer_mode]   $$$");
	}
}

unsigned char VR360_en = 0;
unsigned char VR360_stage = 0;
unsigned char VR360_wait_flag = 0;
extern UBYTE u8_MEMCMode;
extern UINT32 dejudder;
extern VOID MEMC_LibBlueScreen(unsigned char is_BlueScreen);
extern _system_setting_info* scaler_GetShare_Memory_system_setting_info_Struct(void);
void MEMC_Set_malloc_address(UINT8 status)
{
	unsigned int time1 = 0;
	UINT32 time_out = 30;
	static UINT32 last_mode = 0, last_dejudder = 0;
	static UINT8 me_clock_state_pre = 0, mc_clock_state_pre = 0;
	UINT32 height = 0;
	UINT32 width = 0;
	_system_setting_info* system_info_structure_table = NULL;
	system_info_structure_table = scaler_GetShare_Memory_system_setting_info_Struct();
	if((system_info_structure_table == NULL)){
		return;
	}

	height = system_info_structure_table->I_Height;
	width = system_info_structure_table->I_Width;

#ifdef CONFIG_MEMC_BYPASS
	return;
#endif

	while(((g_memc_hdmi_switch_state != 0) || (HDMI_PowerSaving_stage != 0) || (g_memc_switch_state != 0) || (DTV_PowerSaving_stage != 0)) && (--time_out != 0)){
		//msleep(1);
		mdelay(1);
	}

	//Mid_MISC_SetInINTEnable(INT_TYPE_VSYNC, FALSE);
	//Mid_MISC_SetOutINTEnable(INT_TYPE_VSYNC, FALSE);
	Mid_MISC_SetInputIntp_en(FALSE);
	Mid_MISC_SetOnefiftIntp_en(FALSE);
	Mid_MISC_SetOutputIntp_en(FALSE);
	pr_notice("[%s][AAA]d5fc=[%x]\n", __FUNCTION__, rtd_inl(0xb809d5fc));
	pr_notice("[%s][AAA][%x, %x]\n", __FUNCTION__, rtd_inl(0xb8099018), rtd_inl(0xb809d008));

	time1 = rtd_inl(0xB801B6B8);

	//mute
	MEMC_LibBlueScreen(1);

	if(status == TRUE){
		//turn on
		pr_notice("[MEMC_Set_malloc_address_01][,pre_ME_clock=%d,pre_MC_clock=%d,pre_mode=%d][pc=%d]\n", me_clock_state_pre, mc_clock_state_pre, last_mode, g_PCMode_flag);
		VR360_en = 0;
		VR360_stage = 0;

#if 0 // set PZ
		rtd_clearbits(HARDWARE__HARDWARE_57_ADDR, _BIT17);//u1_mc2_var_lpf_wrt_en
		rtd_clearbits(MC2__MC2_50_ADDR, _BIT0);//WriteRegister(FRC_TOP__MC2__reg_mc_var_lpf_en_ADDR, 0, 1, 0x0);
		rtd_clearbits(MC2__MC2_50_ADDR, _BIT1);//WriteRegister(FRC_TOP__MC2__reg_mc_var_lpf_en_ADDR, 0, 1, 0x0);
		rtd_clearbits(MC2__MC2_98_ADDR, _BIT8);//WriteRegister(FRC_TOP__MC2__reg_mc_logo_vlpf_en_ADDR, 8, 8, 0x0);
		rtd_clearbits(KME_DEHALO__KME_DEHALO_10_ADDR, _BIT8);//WriteRegister(FRC_TOP__KME_DEHALO__reg_dh_en_ADDR, 0, 0, 0x0);
		rtd_setbits(MC__MC_28_ADDR, _BIT14); //0xb8099628

		//set PZ
		if(MEMC_LibGetMEMC_PCModeEnable()){
			Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
		}else{
			MEMC_LibSetMCBlend(2);
		}
		MEMC_LibSetMEMCFrameRepeatEnable(1, 0);

		//set memc DMA malloc and DMA on
		MEMC_LoadScriptDMA();
		MEMC_ChangeMCBufferAddr(status);
#else // set bld
//		if((height > 2000) && (width > 3600) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 490) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 610))
//			Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);
//		else
//			Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);
		//set memc DMA malloc and DMA on
		//MEMC_LoadScriptDMA();
		MEMC_ChangeMCBufferAddr(status);

		//set Bld
		if(last_mode == MEMC_TYPE_OFF){
			//OFF memc
			MEMC_LibSetMEMCMode(MEMC_OFF);
			MEMC_LibSetMEMCFrameRepeatEnable(1, 1);
			pr_notice("[MEMC_Set_malloc_address_01][AA][%d, %d][%d]\n", last_mode, last_dejudder, rtd_inl(0xb80996b0)&0x7);
		}
		else if(last_mode == MEMC_TYPE_LOW){
			//Set low memc
			MEMC_LibSetMEMCMode(MEMC_CLEAR);
			MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
			pr_notice("[MEMC_Set_malloc_address_01][BB][%d, %d][%d]\n", last_mode, last_dejudder, rtd_inl(0xb80996b0)&0x7);
		}
		else if(last_mode == MEMC_TYPE_HIGH){
			//Set high memc
			MEMC_LibSetMEMCMode(MEMC_SMOOTH);
			MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
			pr_notice("[MEMC_Set_malloc_address_01][CC][%d, %d][%d]\n", last_mode, last_dejudder, rtd_inl(0xb80996b0)&0x7);
		}
		else if(last_mode == MEMC_TYPE_NORMAL){
			//Set high memc
			MEMC_LibSetMEMCMode(MEMC_NORMAL);
			MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
			pr_notice("[MEMC_Set_malloc_address_01][DD][%d, %d][%d]\n", last_mode, last_dejudder, rtd_inl(0xb80996b0)&0x7);
		}
		else if(last_mode == MEMC_TYPE_USER){
			//Set user memc
			MEMC_LibSetMEMCMode(MEMC_USER);
			MEMC_LibSetMEMCDejudderLevel(last_dejudder);
			MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
			pr_notice("[MEMC_Set_malloc_address_01][EE][%d, %d][%d]\n", last_mode, last_dejudder, rtd_inl(0xb80996b0)&0x7);
		}
		else if(last_mode == MEMC_TYPE_55_PULLDOWN){
			//On 5:5 Pull-down for 24Hz Film source
			MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
		}
		rtd_setbits(HARDWARE__HARDWARE_57_ADDR, _BIT17);//u1_mc2_var_lpf_wrt_en
		rtd_setbits(MC2__MC2_98_ADDR, _BIT8);//WriteRegister(FRC_TOP__MC2__reg_mc_logo_vlpf_en_ADDR, 8, 8, 0x0);
		rtd_setbits(KME_DEHALO__KME_DEHALO_10_ADDR, _BIT8);//WriteRegister(FRC_TOP__KME_DEHALO__reg_dh_en_ADDR, 0, 0, 0x0);
		rtd_clearbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
#endif
	}else{
		pr_notice("[MEMC_Set_malloc_address_02][%d]\n", (rtd_inl(0xb800011c)>>29)&0x7);
		VR360_en = 1;
		VR360_stage = 1;
		VR360_wait_flag = 1;
		last_mode = u8_MEMCMode;
		last_dejudder = dejudder;
		me_clock_state_pre = (rtd_inl(0xb800011c)>>30)&0x1;
		mc_clock_state_pre = (rtd_inl(0xb800011c)>>31)&0x1;

		MEMC_LibSetMEMCMode(MEMC_OFF);
		MEMC_LibSetMEMCFrameRepeatEnable(1, 0);
		//set PZ
		MEMC_LibSetMCBlend(1);

		//MEMC_LibSetMEMCFrameRepeatEnable(1, 0); //no need to do this because VR360 need to do PZ
		//off FRC, disable DMA
//		MEMC_LoadScriptDMADisable();
		MEMC_ChangeMCBufferAddr(status);
	}
	rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_MEMC_Set_malloc_address_03][%d]\n", rtd_inl(0xB801B6B8)-time1);
	//Mid_MISC_SetInINTEnable(INT_TYPE_VSYNC, TRUE);
	//Mid_MISC_SetOutINTEnable(INT_TYPE_VSYNC, TRUE);
	Mid_MISC_SetInputIntp_en(TRUE);
	Mid_MISC_SetOnefiftIntp_en(TRUE);
	Mid_MISC_SetOutputIntp_en(TRUE);
	pr_notice("[%s][BBB]d5fc=[%x]\n", __FUNCTION__, rtd_inl(0xb809d5fc));
	pr_notice("[%s][BBB][%x, %x]\n", __FUNCTION__, rtd_inl(0xb8099018), rtd_inl(0xb809d008));
}

int MEMC_Get_DMA_malloc_address(UINT8 status, UINT32 *DMA_release_start, UINT32 *DMA_release_size)
{
	//UINT32 time_out = 30;
	unsigned int time3 = 0;
	unsigned char timeout_flag = 0;

#ifdef CONFIG_MEMC_BYPASS
	return 0;
#endif

	//while(((g_memc_hdmi_switch_state != 0) || (HDMI_PowerSaving_stage != 0) || (g_memc_switch_state != 0) || (DTV_PowerSaving_stage != 0)) && (--time_out != 0)){
		//msleep(1);
	//	mdelay(1);
	//}

	pr_notice("[MEMC_Get_DMA_malloc_address_start]\n");
	//Mid_MISC_SetInINTEnable(INT_TYPE_VSYNC, FALSE);
	//Mid_MISC_SetOutINTEnable(INT_TYPE_VSYNC, FALSE);
	//Mid_MISC_SetInputIntp_en(FALSE);
	//Mid_MISC_SetOnefiftIntp_en(FALSE);
	//Mid_MISC_SetOutputIntp_en(FALSE);
	pr_notice("[%s][AAA]d5fc=[%x]\n", __FUNCTION__, rtd_inl(0xb809d5fc));
	pr_notice("[%s][AAA][%x, %x]\n", __FUNCTION__, rtd_inl(0xb8099018), rtd_inl(0xb809d008));

	//enable VR360 function
	if(status == TRUE){
		UBYTE check_BSize_status = 0;
		check_BSize_status = (rtd_inl(0xb809d410)>>12)&0x7;

		if(check_BSize_status == 4){
			time3 = rtd_inl(0xB801B6B8);
			do{
				if(VR360_wait_flag == 1){
					if((rtd_inl(0xB801B6B8)-time3)>=7200){
						timeout_flag = 1;
					}
				}
			}while((timeout_flag == 0) && (VR360_wait_flag == 1));

			*DMA_release_start = 0x46c98f60; // (rtd_inl(MEMC_MC_DMA_MC_HF_WDMA_MEND3_reg));
			*DMA_release_size = 0x132ea00; // 20MB
			pr_notice("[MEMC_Get_DMA_malloc_address_01]\n");
			pr_notice("[start, size][%x, %x]\n", *DMA_release_start, *DMA_release_size);
		}
		else{
			*DMA_release_start = 0;
			*DMA_release_size = 0;
			pr_notice("[FRC is On !!MEMC will not release memory !!]\n");
		}
	}else{
		//NOTE : if MEMC status = off, return size  = 0, and print some hint for debug.
		*DMA_release_start = 0;
		*DMA_release_size = 0; // 20MB
	}

	//Mid_MISC_SetInINTEnable(INT_TYPE_VSYNC, TRUE);
	//Mid_MISC_SetOutINTEnable(INT_TYPE_VSYNC, TRUE);
	//Mid_MISC_SetInputIntp_en(TRUE);
	//Mid_MISC_SetOnefiftIntp_en(TRUE);
	//Mid_MISC_SetOutputIntp_en(TRUE);
	pr_notice("[%s][BBB]d5fc=[%x]\n", __FUNCTION__, rtd_inl(0xb809d5fc));
	pr_notice("[%s][BBB][%x, %x]\n", __FUNCTION__, rtd_inl(0xb8099018), rtd_inl(0xb809d008));
	pr_notice("[MEMC_Get_DMA_malloc_address_end]\n");

	return 0;
}

long HAL_VPQ_MEMC_SetMotionComp(UINT8 blurLevel, UINT8 judderLevel, VPQ_MEMC_TYPE_T motion){
	VPQ_MEMC_SETMOTIONCOMP_T *set_motion_comp_info;
	unsigned int ulCount = 0;
	int ret = 0;
	unsigned int semaphoreCnt = 0;
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
	#endif

	//Elsie 20151120, add semaphore
	while((IoReg_Read32(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg)&_BIT30) && semaphoreCnt < 100000) {
		semaphoreCnt++;
	}
	if(semaphoreCnt >= 100000) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]HAL_VPQ_MEMC_SetMotionComp timed out!\n");
		return -1;
	}
	IoReg_SetBits(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg, _BIT30);

	if(VR360_en == 1){
		pr_notice("[HAL_VPQ_MEMC_SetMotionComp][VR360 is  on !!Don't change MEMC motion type !!][%d,%d,%d]\n", blurLevel, judderLevel, motion);
		return 0;
	}

	rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]HAL_VPQ_MEMC_SetMotionComp\n");
	rtd_printk(KERN_DEBUG, TAG_NAME, "blurLevel = %d\n judderLevel = %d\n motion = %d\n",blurLevel, judderLevel, motion);

	set_motion_comp_info = (VPQ_MEMC_SETMOTIONCOMP_T *)Scaler_GetShareMemVirAddr(SCALERIOC_MEMC_SETMOTIONCOMP);
	ulCount = sizeof(VPQ_MEMC_SETMOTIONCOMP_T) / sizeof(unsigned int);

	set_motion_comp_info->blurLevel = blurLevel;
	set_motion_comp_info->judderLevel = judderLevel;

	//re-mapping
	if(motion == 0/*V4L2_EXT_MEMC_TYPE_OFF*/){
		motion = VPQ_MEMC_TYPE_OFF;
	}
	else if(motion == 1/*V4L2_EXT_MEMC_TYPE_LOW*/){
		motion = VPQ_MEMC_TYPE_LOW;
	}
	else if(motion == 2/*V4L2_EXT_MEMC_TYPE_HIGH*/){
		motion = VPQ_MEMC_TYPE_HIGH;
	}
	else if(motion == 3/*V4L2_EXT_MEMC_TYPE_USER*/){
		motion = VPQ_MEMC_TYPE_USER;
	}
	else if(motion == 4/*V4L2_EXT_MEMC_TYPE_55_PULLDOWN*/){
		motion = VPQ_MEMC_TYPE_55_PULLDOWN;
	}
	else if(motion == 5/*V4L2_EXT_MEMC_TYPE_MEDIUM*/){
		motion = VPQ_MEMC_TYPE_MEDIUM;
	}
	else{
		motion = VPQ_MEMC_TYPE_OFF;
	}
	pr_notice("[scaler_vpqmemcdev]blurLevel = %d, judderLevel = %d, motion = %d\n",blurLevel, judderLevel, motion);
	set_motion_comp_info->motion = motion;
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	//change endian
	set_motion_comp_info->blurLevel = htonl(set_motion_comp_info->blurLevel);
	set_motion_comp_info->judderLevel = htonl(set_motion_comp_info->judderLevel);
	set_motion_comp_info->motion = htonl(set_motion_comp_info->motion);
#endif

	down(&Memc_Realcinema_Semaphore);
	//save current MEMC motion type+	Scaler_MEMC_SetMotionType(motion);
	Scaler_MEMC_SetMotionType(motion);
	//set frame rate
	if ((Get_Live_zoom_mode()!=LIVE_ZOOM_OFF)||(Get_LivezoomOffMainRunScaler() == TRUE)) {
		/*qiangzhou:livezomm no need setting dtg three times*/
		//down(get_livezoom_memcclose_Semaphore());
		//LiveZoom_MEMCClose_Flag = TRUE;
		//up(get_livezoom_memcclose_Semaphore());
	} else {
		DbgSclrFlgTkr.memc_realcinema_run_flag = TRUE;//Run memc mode
		//memc_realcinema_framerate();
	}
	up(&Memc_Realcinema_Semaphore);
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETMOTIONCOMP,0,0))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETMOTIONCOMP RPC fail !!!\n", ret);
	}
#else

#ifndef CONFIG_MEMC_TASK_QUEUE
	if(!Scaler_MEMC_GetMEMC_Enable())
		return 0;
	#ifndef CONFIG_MEMC_DEFAULT_REPEAT_MODE
		Scaler_MEMC_SetMotionComp(set_motion_comp_info->blurLevel, set_motion_comp_info->judderLevel, set_motion_comp_info->motion);
	#else
		Scaler_MEMC_SetMotionComp(0,0,0);
	#endif
#else

		task.type = SCALERIOC_MEMC_SETMOTIONCOMP;
		memcpy(&task.data,set_motion_comp_info,sizeof(task.data));
		#ifdef CONFIG_MEMC_DEFAULT_REPEAT_MODE
		task.data.memc_set_motion_comp.motion = 0;
		#endif
		Scaler_MEMC_PushTask(&task);
//		if(task.data.memc_set_motion_comp.motion == 0){
//			MEMC_Set_malloc_address(0);
//			Scaler_MEMC_LowDelayMode(1);
//		}
//		else{
//			MEMC_Set_malloc_address(1);
//			Scaler_MEMC_LowDelayMode(0);
//		}
#endif

#endif

	IoReg_ClearBits(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg,_BIT30);

	return ret;
}

long HAL_VPQ_MEMC_SetMotionPro(BOOLEAN bMotionPro){
	int ret = 0;

	rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]HAL_VPQ_MEMC_SetMotionPro\n");

	return ret;
}

/* not use in WebOS
void HAL_VPQ_MEMC_SetBlurLevel(UINT8 blurLevel){
	int ret;

	MEMC_DBG_PRINT("blurLevel = %d\n",blurLevel);

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETBLURLEVEL, blurLevel, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETBLURLEVEL RPC fail !!!\n", ret);
	}
}

void HAL_VPQ_MEMC_SetJudderLevel(UINT8 judderLevel){
	int ret;

	MEMC_DBG_PRINT("judderLevel = %d\n",judderLevel);

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETJUDDERLEVEL, judderLevel, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETJUDDERLEVEL RPC fail !!!\n", ret);
	}
}
*/
long HAL_VPQ_MEMC_MotionCompOnOff(BOOLEAN bOnOff){
	int ret = 0;
	unsigned int semaphoreCnt = 0;
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
	#endif

	rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]HAL_VPQ_MEMC_SetMotionComp, bOnOff = %d\n", bOnOff);

	while((IoReg_Read32(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg)&_BIT30) && semaphoreCnt < 100000) {
		semaphoreCnt++;
	}
	if(semaphoreCnt >= 100000) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]HAL_VPQ_MEMC_SetMotionComp timed out!\n");
		return -1;
	}
	IoReg_SetBits(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg,_BIT30);
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_MOTIONCOMPONOFF, bOnOff, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_MOTIONCOMPONOFF RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return 0;
	Scaler_MEMC_MotionCompOnOff(bOnOff);
#else

		task.type = SCALERIOC_MEMC_MOTIONCOMPONOFF;
		task.data.value = bOnOff;
		Scaler_MEMC_PushTask(&task);
	#endif

#endif
	IoReg_ClearBits(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg,_BIT30);
	return ret;
}

long HAL_VPQ_MEMC_LowDelayMode(UINT8 type){
	int ret = 0;

				pr_notice("[%s][%d][LowDelayMode]", __FUNCTION__, __LINE__);
	vpq_memc_set_lowDelayMode(type);

#ifdef ENABLE_IMD_PST_SMOOTHTOGGLE
	if(type == 1){
		if((scaler_vsc_get_adaptive_pst_lowdelay_mode()==0)&&((vsc_get_adaptivestream_flag(SLR_MAIN_DISPLAY))||(scaler_vsc_get_force_pst_lowdelay_mode()==1)))
			scaler_vsc_set_adaptive_pst_lowdelay_mode(1);
	}else{
#ifndef CONFIG_MEMC_BYPASS
		ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
		memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
		if(memc_mux_ctrl_reg.memc_outmux_sel)
		{
			if (scaler_vsc_get_adaptive_pst_lowdelay_mode() == 1)
				scaler_vsc_set_keep_vo_framerate_control(1);
			scaler_vsc_set_adaptive_pst_lowdelay_mode(0);
		}
#else
		if (scaler_vsc_get_adaptive_pst_lowdelay_mode() == 1)
			scaler_vsc_set_keep_vo_framerate_control(1);
		scaler_vsc_set_adaptive_pst_lowdelay_mode(0);
#endif

	}
#endif
	return ret;
}
long HAL_VPQ_MEMC_SetRGBYUVMode(UINT8 mode){
	int ret = 0;
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
	#endif

	//if(mode == 0)
	//	mode = VPQ_MEMC_RGB_IN_VIDEO_OUT;
	//else
	//	mode = VPQ_MEMC_YUV_IN_VIDEO_OUT;
	unsigned int semaphoreCnt = 0;

	while((IoReg_Read32(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg)&_BIT30) && semaphoreCnt < 100000) {
		semaphoreCnt++;
	}
	if(semaphoreCnt >= 100000) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]HAL_VPQ_MEMC_SetRGBYUVMode timed out!\n");
		return -1;
	}
	IoReg_SetBits(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg,_BIT30);
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETRGBYUVMode, mode, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETRGBYUVMode RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return 0;
	Scaler_MEMC_SetRGBYUVMode(mode);
#else

		task.type = SCALERIOC_MEMC_SETRGBYUVMode;
		task.data.value = mode;
		Scaler_MEMC_PushTask(&task);
	#endif
#endif
	IoReg_ClearBits(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg,_BIT30);
	return ret;
}
void HAL_VPQ_MEMC_GetFrameDelay (UINT16 *pFrameDelay){
	/*
	int ret;

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_GETFRAMEDELAY, 1, 1))){
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]ret=%d, SCALERIOC_MEMC_GETFRAMEDELAY RPC fail !!!\n", ret);
	}
	*/
}


void HAL_VPQ_MEMC_SetVideoBlock(VPQ_MEMC_MUTE_TYPE_T type, BOOLEAN bOnOff) {
	set_display_forcebg_mask(SLR_MAIN_DISPLAY, SLR_FORCE_BG_TYPE_3D, bOnOff);
	mute_control(SLR_MAIN_DISPLAY, bOnOff);
}

/* not use in WebOS
void HAL_VPQ_MEMC_SetTrueMotionDemo(BOOLEAN bOnOff){
	int ret;

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETTRUEMOTIONDEMO, bOnOff, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETTRUEMOTIONDEMO RPC fail !!!\n", ret);
	}
}
void HAL_VPQ_MEMC_GetFirmwareVersion(UINT16 *pVersion){

	int ret;

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETBLURLEVEL, blurLevel, 1))){
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]ret=%d, SCALERIOC_MEMC_SETBLURLEVEL RPC fail !!!\n", ret);
	}

}
*/
void HAL_VPQ_MEMC_SetBypassRegion(BOOLEAN bOnOff, VPQ_MEMC_BYPASS_REGION_T region, UINT32 x, UINT32 y, UINT32 w, UINT32 h){
	VPQ_MEMC_SETBYPASSREGION_T*set_bypass_region_info;
	unsigned int ulCount = 0;

	int ret;
       #ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
       #endif
	MEMC_DBG_PRINT("region = %d\n",region);
	MEMC_DBG_PRINT("rect.x = %d, rect.y = %d, rect.w = %d, rect.h = %d\n",x, y, w, h);

	MEMC_DBG_PRINT("bOnOff = %d\n",bOnOff);

	ret=0;
	set_bypass_region_info = (VPQ_MEMC_SETBYPASSREGION_T *)Scaler_GetShareMemVirAddr(SCALERIOC_MEMC_SETBYPASSREGION);
	ulCount = sizeof(VPQ_MEMC_SETBYPASSREGION_T) / sizeof(unsigned int);

	set_bypass_region_info->bOnOff = bOnOff;
	set_bypass_region_info->region = region;
	set_bypass_region_info->x = x;
	set_bypass_region_info->y = y;
	set_bypass_region_info->w = w;
	set_bypass_region_info->h = h;
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	//change endian
	set_bypass_region_info->bOnOff = htonl(set_bypass_region_info->bOnOff);
	set_bypass_region_info->region = htonl(set_bypass_region_info->region);
	set_bypass_region_info->x = htonl(set_bypass_region_info->x);
	set_bypass_region_info->y = htonl(set_bypass_region_info->y);
	set_bypass_region_info->w = htonl(set_bypass_region_info->w);
	set_bypass_region_info->h = htonl(set_bypass_region_info->h);


	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETBYPASSREGION,0,0))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETBYPASSREGION RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return ;
	Scaler_MEMC_SetBypassRegion(set_bypass_region_info->bOnOff, set_bypass_region_info->region, set_bypass_region_info->x, set_bypass_region_info->y, set_bypass_region_info->w, set_bypass_region_info->h);
#else

		task.type = SCALERIOC_MEMC_SETBYPASSREGION;
		memcpy(&task.data,set_bypass_region_info,sizeof(SCALER_MEMC_SETBYPASSREGION_T));
		Scaler_MEMC_PushTask(&task);
	#endif
#endif
}
/* not use in WebOS
void HAL_VPQ_MEMC_SetReverseControl(UINT8 u8Mode){
	int ret;

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETREVERSECONTROL, u8Mode, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETREVERSECONTROL RPC fail !!!\n", ret);
	}
}
void HAL_VPQ_MEMC_Freeze(UINT8 type){
	int ret;

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_FREEZE, type, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_FREEZE RPC fail !!!\n", ret);
	}
}
void HAL_VPQ_MEMC_SetDemoBar(BOOLEAN bOnOff, UINT8 r, UINT8 g, UINT8 b){
	VPQ_MEMC_SETDEMOBAR_T*set_demo_bar_info;
	unsigned int ulCount = 0;
	int ret;

	set_demo_bar_info = (VPQ_MEMC_SETDEMOBAR_T *)Scaler_GetShareMemVirAddr(SCALERIOC_MEMC_SETDEMOBAR);
	ulCount = sizeof(VPQ_MEMC_SETDEMOBAR_T) / sizeof(unsigned int);

	set_demo_bar_info->bOnOff = bOnOff;
	set_demo_bar_info->r = r;
	set_demo_bar_info->g = g;
	set_demo_bar_info->b = b;

	//change endian
	set_demo_bar_info->bOnOff = htonl(set_demo_bar_info->bOnOff);
	set_demo_bar_info->r = htonl(set_demo_bar_info->r);
	set_demo_bar_info->g = htonl(set_demo_bar_info->g);
	set_demo_bar_info->b = htonl(set_demo_bar_info->b);

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETDEMOBAR,0,0))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETDEMOBAR RPC fail !!!\n", ret);
	}
}
void HAL_VPQ_MEMC_DEBUG(void){

}
*/
void Scaler_MEMC_SetInOutUseCase(VPQ_MEMC_INPUT_RESOLUTION input_re, VPQ_MEMC_OUTPUT_RESOLUTION output_re, VPQ_MEMC_INPUT_FORMAT input_for, VPQ_MEMC_OUTPUT_FORMAT output_for){
	SCALER_MEMC_SETINOUTUSECASE_T* set_inout_usecase_info;
	unsigned int ulCount = 0;

	int ret;
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
       #endif

	ret=0;
	set_inout_usecase_info = (SCALER_MEMC_SETINOUTUSECASE_T*)Scaler_GetShareMemVirAddr(SCALERIOC_MEMC_SETINOUTUSECASE);
	ulCount = sizeof(SCALER_MEMC_SETINOUTUSECASE_T) / sizeof(unsigned int);

	set_inout_usecase_info->input_re = input_re;
	set_inout_usecase_info->output_re = output_re;
	set_inout_usecase_info->input_for = input_for;
	set_inout_usecase_info->output_for = output_for;
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	//change endian
	set_inout_usecase_info->input_re = htonl(set_inout_usecase_info->input_re);
	set_inout_usecase_info->output_re = htonl(set_inout_usecase_info->output_re);
	set_inout_usecase_info->input_for = htonl(set_inout_usecase_info->input_for);
	set_inout_usecase_info->output_for = htonl(set_inout_usecase_info->output_for);

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETINOUTUSECASE,0,0))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETINOUTUSECASE RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return ;
	Scaler_MEMC_SetInOutputUseCase(set_inout_usecase_info->input_re, set_inout_usecase_info->output_re, set_inout_usecase_info->input_for, set_inout_usecase_info->output_for);
#else

		task.type = SCALERIOC_MEMC_SETINOUTUSECASE;
		memcpy(&task.data,set_inout_usecase_info,sizeof(SCALER_MEMC_SETINOUTUSECASE_T));
		Scaler_MEMC_PushTask(&task);
	#endif
#endif
}

void Scaler_MEMC_SetInOutputFormat(VPQ_MEMC_INPUT_FORMAT input_for, VPQ_MEMC_OUTPUT_FORMAT output_for){
	SCALER_MEMC_SETINOUTPUTFORMAT_T* set_inputput_format_info;
	unsigned int ulCount = 0;

	int ret;
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
       #endif

	ret=0;
	set_inputput_format_info = (SCALER_MEMC_SETINOUTPUTFORMAT_T*)Scaler_GetShareMemVirAddr(SCALERIOC_MEMC_SETINPUTOUTPUTFORMAT);
	ulCount = sizeof(SCALER_MEMC_SETINOUTPUTFORMAT_T) / sizeof(unsigned int);

	set_inputput_format_info->input_for = input_for;
	set_inputput_format_info->output_for = output_for;
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	//change endian
	set_inputput_format_info->input_for = htonl(set_inputput_format_info->input_for);
	set_inputput_format_info->output_for = htonl(set_inputput_format_info->output_for);

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETINPUTOUTPUTFORMAT,0,0))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETINPUTOUTPUTFORMAT RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return ;
	Scaler_MEMC_SetInputOutputFormat(set_inputput_format_info->input_for, set_inputput_format_info->output_for);
#else

		task.type = SCALERIOC_MEMC_SETINPUTOUTPUTFORMAT;
		memcpy(&task.data,set_inputput_format_info,sizeof(SCALER_MEMC_SETINOUTPUTFORMAT_T));
		Scaler_MEMC_PushTask(&task);
	#endif
#endif
}

void Scaler_MEMC_SetInOutputResolution(VPQ_MEMC_INPUT_RESOLUTION input_re, VPQ_MEMC_OUTPUT_RESOLUTION output_re){
	SCALER_MEMC_SETINOUTPUTRESOLUTION_T* set_inoutput_resolution_info;
	unsigned int ulCount = 0;
	int ret;
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
       #endif

	ret=0;
	set_inoutput_resolution_info = (SCALER_MEMC_SETINOUTPUTRESOLUTION_T*)Scaler_GetShareMemVirAddr(SCALERIOC_MEMC_SETINPUTOUTPUTRESOLUTION);
	ulCount = sizeof(SCALER_MEMC_SETINOUTPUTRESOLUTION_T) / sizeof(unsigned int);

	set_inoutput_resolution_info->input_re = input_re;
	set_inoutput_resolution_info->output_re = output_re;
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	//change endian
	set_inoutput_resolution_info->input_re = htonl(set_inoutput_resolution_info->input_re);
	set_inoutput_resolution_info->output_re = htonl(set_inoutput_resolution_info->output_re);

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETINPUTOUTPUTRESOLUTION,0,0))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETINPUTOUTPUTRESOLUTION RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return ;
	Scaler_MEMC_SetInputOutputResolution(set_inoutput_resolution_info->input_re, set_inoutput_resolution_info->output_re);
#else

		task.type = SCALERIOC_MEMC_SETINPUTOUTPUTRESOLUTION;
		memcpy(&task.data,set_inoutput_resolution_info,sizeof(SCALER_MEMC_SETINOUTPUTRESOLUTION_T));
		Scaler_MEMC_PushTask(&task);
	#endif
#endif
}
#if 1
void Scaler_MEMC_SetInOutputFrameRate(VPQ_MEMC_INPUT_FRAMERATE input_frame, VPQ_MEMC_OUTPUT_FRAMERATE output_frame){
	SCALER_MEMC_INOUTFRAMERATE_T* set_inoutput_framerate_info;
	unsigned int ulCount = 0;
	int ret;
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
       #endif

	ret=0;

	set_inoutput_framerate_info = (SCALER_MEMC_INOUTFRAMERATE_T*)Scaler_GetShareMemVirAddr(SCALERIOC_MEMC_SETINOUTPUTFRAMERATE);
	ulCount = sizeof(SCALER_MEMC_INOUTFRAMERATE_T) / sizeof(unsigned int);

	set_inoutput_framerate_info->input_frame_rate= input_frame;
	set_inoutput_framerate_info->output_frame_rate= output_frame;
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	//change endian
	set_inoutput_framerate_info->input_frame_rate = htonl(set_inoutput_framerate_info->input_frame_rate);
	set_inoutput_framerate_info->output_frame_rate = htonl(set_inoutput_framerate_info->output_frame_rate);

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETINOUTPUTFRAMERATE,0,0))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETINOUTPUTFRAMERATE RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return ;
	Scaler_MEMC_SetInputFrameRate(set_inoutput_framerate_info->input_frame_rate);
	Scaler_MEMC_SetOutputFrameRate(set_inoutput_framerate_info->output_frame_rate);
#else

		task.type = SCALERIOC_MEMC_SETINOUTPUTFRAMERATE;
		memcpy(&task.data,set_inoutput_framerate_info,sizeof(SCALER_MEMC_INOUTFRAMERATE_T));
		pr_notice("[%s][%d][%d,%d]\n",__FUNCTION__, __LINE__, set_inoutput_framerate_info->input_frame_rate, set_inoutput_framerate_info->output_frame_rate);
		Scaler_MEMC_PushTask(&task);
	#endif
#endif
}
#else
void Scaler_MEMC_SetInputFrameRate(VPQ_MEMC_INPUT_FRAMERATE input_frame){
	int ret;

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETINPUTFRAMERATE, input_frame, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETINPUTFRAMERATE RPC fail !!!\n", ret);
	}
}

void Scaler_MEMC_SetOutputFrameRate(VPQ_MEMC_OUTPUT_FRAMERATE output_frame){
	int ret;

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETOUTPUTFRAMERATE, output_frame, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETOUTPUTFRAMERATE RPC fail !!!\n", ret);
	}
}
#endif

long Scaler_MEMC_SetFrameRepeatEnable(BOOL bEnable){
	int ret = 0;
	unsigned int semaphoreCnt = 0;
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
       #endif

	while((IoReg_Read32(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg)&_BIT30) && semaphoreCnt < 100000) {
		semaphoreCnt++;
	}
	if(semaphoreCnt >= 100000) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]Scaler_MEMC_SetFrameRepeatEnable timed out!\n");
		return -1;
	}
	IoReg_SetBits(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg,_BIT30);
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETMEMCFRAMEREPEATENABLE, bEnable, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETMEMCFRAMEREPEATENABLE RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return 0;
	Scaler_MEMC_SetMEMCFrameRepeatEnable(bEnable);
#else

		task.type = SCALERIOC_MEMC_SETMEMCFRAMEREPEATENABLE;
		task.data.value = bEnable;
		Scaler_MEMC_PushTask(&task);
	#endif
#endif
	IoReg_ClearBits(DI_IM_DI_BLEND_AND_WEIGHTING_METHOD_reg,_BIT30);
	return ret;
}

void Scaler_MEMC_SetInOutMode(VPQ_MEMC_INOUT_MODE emom){
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
       #endif
	int ret;

	ret=0;

#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETMEMCINOUTMODE, emom, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_SETMEMCINOUTMODE RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return ;
	ISR_Scaler_MEMC_SetInOutMode(emom);
#else

		task.type = SCALERIOC_MEMC_SETMEMCINOUTMODE;
		task.data.value = emom;
		Scaler_MEMC_PushTask(&task);
	#endif
#endif
}

void Scaler_MEMC_Instanboot_InitPhaseTable(BOOL bEnable){
	int ret;
	ret=0;

#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_INSTANBOOT_INITPHASETABLE, bEnable, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_INSTANBOOT_INITPHASETABLE RPC fail !!!\n", ret);
	}
#else
	Scaler_MEMC_SetInstantBootInitPhaseTable();
	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_INSTANBOOT_INITPHASETABLE, bEnable, 1))){
		MEMC_DBG_PRINT("[MEMC]ret=%d, SCALERIOC_MEMC_INSTANBOOT_INITPHASETABLE RPC fail !!!\n", ret);
	}
#endif
}


void Scaler_MEMC_SetInOutFrameRate(void){
	UINT8 memc_input_frame_rate;
	UINT8 memc_output_frame_rate;

	if((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 235) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 245))	//24Hz
	{
		memc_input_frame_rate = VPQ_INPUT_24HZ;
//		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			if(Scaler_get_realcinema_mode_condition()){
				memc_output_frame_rate = VPQ_OUTPUT_96HZ; //24Hz => 96Hz	//tru-motion off + real cinema
			}else{
				if((vbe_disp_get_adaptivestream_fs_mode()) && (0 == vbe_disp_get_adaptivestream_force_framerate()))
					memc_output_frame_rate = VPQ_OUTPUT_96HZ;
				else
					memc_output_frame_rate = VPQ_OUTPUT_120HZ; //24Hz => 120Hz
			}
		}
		else{
			if(Scaler_get_realcinema_mode_condition()){
				memc_output_frame_rate = VPQ_OUTPUT_48HZ; //24Hz => 48Hz	//tru-motion off + real cinema
			}else{
				if((vbe_disp_get_adaptivestream_fs_mode()) && (0 == vbe_disp_get_adaptivestream_force_framerate()))
					memc_output_frame_rate = VPQ_OUTPUT_48HZ;
				else
					memc_output_frame_rate = VPQ_OUTPUT_60HZ; //24Hz => 60Hz
			}
		}
	}
	else if((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 245) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 255))	//25Hz
	{
		memc_input_frame_rate = VPQ_INPUT_25HZ;
//		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_100HZ; //25Hz => 100Hz
		}
		else{
			memc_output_frame_rate = VPQ_OUTPUT_50HZ; //25Hz => 50Hz
		}
	}
	else if((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 295) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 305))	//30Hz
	{
		memc_input_frame_rate = VPQ_INPUT_30HZ;
//		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_120HZ; //30Hz => 120Hz
		}
		else{
			memc_output_frame_rate = VPQ_OUTPUT_60HZ; //30Hz => 60Hz
		}
	}
	else if((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 495) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 505))	//50Hz
	{
		memc_input_frame_rate = VPQ_INPUT_50HZ;
//		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_100HZ; //50Hz => 100Hz
		}
		else{
			memc_output_frame_rate = VPQ_OUTPUT_50HZ; //50Hz => 50Hz
		}
	}
	else if((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 595) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 605))	//60hz
	{
		memc_input_frame_rate = VPQ_INPUT_60HZ;
//		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_120HZ; //60Hz => 120Hz
		}
		else{
			memc_output_frame_rate = VPQ_OUTPUT_60HZ; //60Hz => 60Hz
		}
	}
	else{ // others
		memc_input_frame_rate = VPQ_INPUT_60HZ;
//		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_120HZ; //60Hz => 120Hz
		}
		else{
			memc_output_frame_rate = VPQ_OUTPUT_60HZ; //60Hz => 60Hz
		}
	}

	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][%s][%d][%d,%d]\n",__FUNCTION__, __LINE__, memc_output_frame_rate, Get_DISPLAY_REFRESH_RATE());
	rtd_printk(KERN_NOTICE, TAG_NAME, "[MEMC]UZU DTG input frame_rate = %d\n",memc_input_frame_rate);
	rtd_printk(KERN_NOTICE, TAG_NAME, "[MEMC]MEMC DTG output frame_rate = %d\n",memc_output_frame_rate);

	//set MEMC in/out frame rate
	//Scaler_MEMC_SetInputFrameRate(memc_input_frame_rate);
	//Scaler_MEMC_SetOutputFrameRate(memc_output_frame_rate);
	Scaler_MEMC_SetInOutputFrameRate(memc_input_frame_rate, memc_output_frame_rate);
}

void Scaler_MEMC_SetInOutFrameRateByDisp(unsigned char _channel)
{
	SCALER_DISP_CHANNEL channel = (SCALER_DISP_CHANNEL)_channel;
	UINT8 memc_input_frame_rate;
	UINT8 memc_output_frame_rate;

	if((Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_V_FREQ) > 235) && (Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_V_FREQ) < 245))	//24Hz
	{
		memc_input_frame_rate = VPQ_INPUT_24HZ;
		//if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_120HZ; //24Hz => 120Hz
		}
		else{
			if((Scaler_MEMC_GetMotionType() == VPQ_MEMC_TYPE_OFF) && (fwif_color_get_cinema_mode_en() == 1)){
				memc_output_frame_rate = VPQ_OUTPUT_48HZ; //24Hz => 48Hz	//tru-motion off + real cinema
			}else{
				if ((vbe_disp_get_adaptivestream_fs_mode()) && (0 == vbe_disp_get_adaptivestream_force_framerate()))
					memc_output_frame_rate = VPQ_OUTPUT_48HZ;
				else
					memc_output_frame_rate = VPQ_OUTPUT_60HZ; //24Hz => 60Hz
			}
		}
	}
	else if((Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_V_FREQ) > 245) && (Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_V_FREQ) < 255))	//25Hz
	{
		memc_input_frame_rate = VPQ_INPUT_25HZ;
		//if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_100HZ; //25Hz => 100Hz
		}
		else{
			memc_output_frame_rate = VPQ_OUTPUT_50HZ; //25Hz => 50Hz
		}
	}
	else if((Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_V_FREQ) > 295) && (Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_V_FREQ) < 305))	//30Hz
	{
		memc_input_frame_rate = VPQ_INPUT_30HZ;
		//if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_120HZ; //30Hz => 120Hz
		}
		else{
			memc_output_frame_rate = VPQ_OUTPUT_60HZ; //30Hz => 60Hz
		}
	}
	else if((Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_V_FREQ) > 495) && (Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_V_FREQ) < 505))	//50Hz
	{
		memc_input_frame_rate = VPQ_INPUT_50HZ;
		//if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_100HZ; //50Hz => 100Hz
		}
		else{
			memc_output_frame_rate = VPQ_OUTPUT_50HZ; //50Hz => 50Hz
		}
	}
	else if((Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_V_FREQ) > 595) && (Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_V_FREQ) < 605))	//60hz
	{
		memc_input_frame_rate = VPQ_INPUT_60HZ;
		//if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_120HZ; //60Hz => 120Hz
		}
		else{
			memc_output_frame_rate = VPQ_OUTPUT_60HZ; //60Hz => 60Hz
		}
	}
	else{ // others
		memc_input_frame_rate = VPQ_INPUT_60HZ;
		//if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL){
		if(Get_DISPLAY_REFRESH_RATE() > 60){
			memc_output_frame_rate = VPQ_OUTPUT_120HZ; //60Hz => 120Hz
		}
		else{
			memc_output_frame_rate = VPQ_OUTPUT_60HZ; //60Hz => 60Hz
		}
	}

	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s][%d][%d,%d]\n",__FUNCTION__, __LINE__, memc_output_frame_rate, Get_DISPLAY_REFRESH_RATE());
	rtd_printk(KERN_NOTICE, TAG_NAME, "[MEMC]UZU DTG input frame_rate = %d\n",memc_input_frame_rate);
	rtd_printk(KERN_NOTICE, TAG_NAME, "[MEMC]MEMC DTG output frame_rate = %d\n",memc_output_frame_rate);

	//set MEMC in/out frame rate
	//Scaler_MEMC_SetInputFrameRate(memc_input_frame_rate);
	//Scaler_MEMC_SetOutputFrameRate(memc_output_frame_rate);
	Scaler_MEMC_SetInOutputFrameRate(memc_input_frame_rate, memc_output_frame_rate);
}
void MEMC_SYS_Delay(unsigned char msecs)
{
	    unsigned long usecs = (unsigned long)(msecs * 1000);
    if (usecs <= 20000)
        usleep_range(usecs, usecs);
    else
        msleep(msecs);
}

void Scaler_MEMC_CLK_Enable(void){

#ifndef CONFIG_MEMC_BYPASS

	sys_reg_sys_srst3_RBUS sys_reg_sys_srst3_REG;
	sys_reg_sys_clken3_RBUS sys_reg_sys_clken3_reg;
	sys_reg_sys_srst3_REG.regValue = IoReg_Read32(SYS_REG_SYS_SRST3_reg);
	sys_reg_sys_clken3_reg.regValue = IoReg_Read32(SYS_REG_SYS_CLKEN3_reg);

	printk(KERN_NOTICE"%s %d\n",__func__,__LINE__);
	printk(KERN_NOTICE"CLK Status >> ( %d ,%d ) ",(IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>29),(IoReg_Read32(SYS_REG_SYS_SRST3_reg)>>29));

	if(!((sys_reg_sys_srst3_REG.regValue>>27 & BIT0) && (sys_reg_sys_srst3_REG.regValue>>30 & BIT0) && (sys_reg_sys_srst3_REG.regValue>>31 & BIT0))){
		//SYS_RSTN b800010C
		if(sys_reg_sys_srst3_REG.rstn_memc_rbus != 1){ //Clock enable bit for rbus clock in MEMC , should be set beforce CLKEN_MEMC/CLKEN_MEME_ME
			sys_reg_sys_srst3_REG.regValue = 0;
			sys_reg_sys_srst3_REG.rstn_memc_rbus = 1;
			sys_reg_sys_srst3_REG.write_data = 1;
			IoReg_Write32(SYS_REG_SYS_SRST3_reg,sys_reg_sys_srst3_REG.regValue);
		}

		sys_reg_sys_srst3_REG.regValue = 0;
		sys_reg_sys_srst3_REG.rstn_memc= 1;
		sys_reg_sys_srst3_REG.rstn_memc_me = 1;
		sys_reg_sys_srst3_REG.rstn_memc_mc = 1;
		sys_reg_sys_srst3_REG.write_data = 1;
		IoReg_Write32(SYS_REG_SYS_SRST3_reg,sys_reg_sys_srst3_REG.regValue);
	}

	if(!((sys_reg_sys_clken3_reg.regValue>>27 & BIT0) && (sys_reg_sys_clken3_reg.regValue>>30 & BIT0) && (sys_reg_sys_clken3_reg.regValue>>31 & BIT0))){
		//SYS_CLKEN3 b800011C
		if(sys_reg_sys_clken3_reg.clken_memc_rbus != 1){ //Clock enable bit for rbus clock in MEMC , should be set beforce CLKEN_MEMC/CLKEN_MEME_ME
			sys_reg_sys_clken3_reg.regValue = 0;
			sys_reg_sys_clken3_reg.clken_memc_rbus = 1;
			sys_reg_sys_clken3_reg.write_data = 1;
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg,sys_reg_sys_clken3_reg.regValue);
		}

		sys_reg_sys_clken3_reg.regValue = 0;
		sys_reg_sys_clken3_reg.clken_memc = 1;
		sys_reg_sys_clken3_reg.clken_memc_me= 1;
		sys_reg_sys_clken3_reg.clken_memc_mc= 1;
		sys_reg_sys_clken3_reg.write_data = 1;
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg,sys_reg_sys_clken3_reg.regValue);
	}

#endif
}

unsigned char Scaler_MEMC_CLK_Check(void){

	//printk(KERN_NOTICE "%s %d\n",__func__,__LINE__);

#ifdef CONFIG_MEMC_BYPASS
	return FALSE;
#else
	sys_reg_sys_srst3_RBUS sys_reg_sys_srst3_REG;
	sys_reg_sys_clken3_RBUS sys_reg_sys_clken3_reg;
	//YE Test 50411
	//sys_reg_sys_dispclksel_RBUS sys_dispclksel_reg;

	//MEMC in/out clock enable
	//YE Test 50411
	//sys_dispclksel_reg.regValue = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
	//MEMC/me clock enable
	sys_reg_sys_clken3_reg.regValue = IoReg_Read32(SYS_REG_SYS_CLKEN3_reg);
	//MEMC/me clock reset
	sys_reg_sys_srst3_REG.regValue = IoReg_Read32(SYS_REG_SYS_SRST3_reg);
	printk("[MHH]%d,%d\n",((sys_reg_sys_clken3_reg.regValue>>27 & BIT0) && (sys_reg_sys_clken3_reg.regValue>>30 & BIT0) && (sys_reg_sys_clken3_reg.regValue>>31 & BIT0)),
		((sys_reg_sys_srst3_REG.regValue>>27 & BIT0) && (sys_reg_sys_srst3_REG.regValue>>30 & BIT0) && (sys_reg_sys_srst3_REG.regValue>>31 & BIT0)));
	printk("[MHH]%d,%d,%d,%d,%d,%d\n",
		(sys_reg_sys_clken3_reg.regValue>>27 & BIT0),
		(sys_reg_sys_clken3_reg.regValue>>30 & BIT0),
		(sys_reg_sys_clken3_reg.regValue>>31 & BIT0),
		(sys_reg_sys_srst3_REG.regValue>>27 & BIT0),
		(sys_reg_sys_srst3_REG.regValue>>30 & BIT0),
		(sys_reg_sys_srst3_REG.regValue>>31 & BIT0));

#if 1 //FIXME: remove CLKEN_DISP_MEMC_IN (0x18000208[6])
	if(!((sys_reg_sys_clken3_reg.regValue>>27 & BIT0) && (sys_reg_sys_clken3_reg.regValue>>30 & BIT0) && (sys_reg_sys_clken3_reg.regValue>>31 & BIT0))
		|| !((sys_reg_sys_srst3_REG.regValue>>27 & BIT0) && (sys_reg_sys_srst3_REG.regValue>>30 & BIT0) && (sys_reg_sys_srst3_REG.regValue>>31 & BIT0))){
		printk(KERN_NOTICE " Warning !! CLK not enable!!( %x,%x)",(sys_reg_sys_clken3_reg.regValue>>27), (sys_reg_sys_srst3_REG.regValue>>27));
		return FALSE;
	}else
#endif
	{
		return TRUE;
	}
#endif

}
unsigned char Scaler_ME_CLK_Check(void){

	//printk(KERN_NOTICE "%s %d\n",__func__,__LINE__);

#ifdef CONFIG_MEMC_BYPASS
	return FALSE;
#else
	sys_reg_sys_srst3_RBUS sys_reg_sys_srst3_REG;
	sys_reg_sys_clken3_RBUS sys_reg_sys_clken3_reg;
	//sys_reg_sys_dispclksel_RBUS sys_dispclksel_reg;

	//MEMC in/out clock enable
	//sys_dispclksel_reg.regValue = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
	//MEMC/me clock enable
	sys_reg_sys_clken3_reg.regValue = IoReg_Read32(SYS_REG_SYS_CLKEN3_reg);
	//MEMC/me clock reset
	sys_reg_sys_srst3_REG.regValue = IoReg_Read32(SYS_REG_SYS_SRST3_reg);

#if 1 //FIXME: remove CLKEN_DISP_MEMC_IN (0x18000208[6])
	if(!((sys_reg_sys_clken3_reg.regValue>>27 & BIT0) && (sys_reg_sys_clken3_reg.regValue>>30 & BIT0) && (sys_reg_sys_clken3_reg.regValue>>31 & BIT0))
		|| !((sys_reg_sys_srst3_REG.regValue>>27 & BIT0) && (sys_reg_sys_srst3_REG.regValue>>30 & BIT0) && (sys_reg_sys_srst3_REG.regValue>>31 & BIT0))){
		printk(KERN_NOTICE " Warning !! CLK not enable!!( %x,%x )", (sys_reg_sys_clken3_reg.regValue>>27),(sys_reg_sys_srst3_REG.regValue>>27));
		return FALSE;
	}
#endif
	{
		return TRUE;
	}
#endif

}
void Scaler_MEMC_CLK(void){
	sys_reg_sys_dispclksel_RBUS sys_dispclksel_reg;

	//MEMC lantency temp setting
	//rtd_outl(MEMC_LATENCY01_ADDR, 0x00000000);
	//rtd_outl(MEMC_LATENCY02_ADDR, 0x00000000);

	//MEMC in/out clock enable
	sys_dispclksel_reg.regValue = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
#if 0 //FIXME: remove CLKEN_DISP_MEMC_IN (0x18000208[6])
	sys_dispclksel_reg.clken_disp_memc_in= 1;
#endif
	sys_dispclksel_reg.clken_disp_memc= 1;
	IoReg_Write32(SYS_REG_SYS_DISPCLKSEL_reg, sys_dispclksel_reg.regValue);
}

void Scaler_MEMC_ForceBg(UINT8 bEnable)
{
	ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
	ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl_reg;

	memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	memc_mux_ctrl_reg.memc_out_bg_en = bEnable;
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, memc_mux_ctrl_reg.regValue);

	//set apply
	double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl_reg.uzudtgreg_dbuf_set = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);
	double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
}


void Scaler_MEMC_Mux(void){
#ifndef CONFIG_MEMC_BYPASS
	//MEMC mux
	ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
#endif
	ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl_reg;

	double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl_reg.uzudtgreg_dbuf_en = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);

#ifndef CONFIG_MEMC_BYPASS

	//DTG MEMC MUX control
	memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);

	memc_mux_ctrl_reg.memc_outmux_sel = 1;
	//memc_mux_ctrl_reg.memcdtg_golden_vs = 0;//disable memc golden vsync
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, memc_mux_ctrl_reg.regValue);
#endif
	//set apply
	double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl_reg.uzudtgreg_dbuf_set = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);
#if 0
	if(vbe_disp_decide_memc_mux_bypass()==TRUE){
		//disable memc clk
		Scaler_MEMC_Bypass_CLK_OnOff(0);
		if(Scaler_VOFromVDEC(Scaler_Get_CurVoInfo_plane()) == SOURCE_VIDEO){//DTV case
			pr_notice("DTV 4K, bypass PQ Lv2\n");
			Scaler_color_Set_PQ_ByPass_Lv(2);
		}else if(Scaler_VOFromVDEC(Scaler_Get_CurVoInfo_plane()) == SOURCE_DIRECTVO){
			pr_notice("Playback 4K, bypass PQ Lv3\n");
			Scaler_color_Set_PQ_ByPass_Lv(3);
		}
	}else{
		Scaler_MEMC_Bypass_CLK_OnOff(1);
	}
#else
#if 0
	if(vbe_disp_decide_PQ_power_saveing() == TRUE){
		if(Scaler_VOFromVDEC(Scaler_Get_CurVoInfo_plane()) == SOURCE_VIDEO){//DTV case
			pr_notice("DTV 4K, bypass PQ Lv2\n");
			Scaler_color_Set_PQ_ByPass_Lv(3);
		}else if(Scaler_VOFromVDEC(Scaler_Get_CurVoInfo_plane()) == SOURCE_DIRECTVO){
			pr_notice("Playback 4K, bypass PQ Lv3\n");
			Scaler_color_Set_PQ_ByPass_Lv(3);
		}
	}
#endif
#endif
}
void Scaler_MEMC_outMux(UINT8 dbuf_en,UINT8 outmux_sel){
#ifndef CONFIG_MEMC_BYPASS
	//MEMC mux
	ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
#endif
	ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl_reg;

	double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl_reg.uzudtgreg_dbuf_en = dbuf_en;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);

#ifndef CONFIG_MEMC_BYPASS

	//DTG MEMC MUX control
	memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);

	memc_mux_ctrl_reg.memc_outmux_sel = outmux_sel;
	//memc_mux_ctrl_reg.memcdtg_golden_vs = 0;//disable memc golden vsync
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, memc_mux_ctrl_reg.regValue);
#endif
	if(dbuf_en == TRUE)
	{
		//set apply
		double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
		double_buffer_ctrl_reg.uzudtgreg_dbuf_set = 1;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);
	}

}
unsigned char g_MEMC_DMA_state = 1;
//Reset flow : CLKEN = "0" 'RSTN = "0" 'RSTN = "1" ' CLKEN = "1"
#if 0
void Scaler_MEMC_Bypass_CLK_OnOff(unsigned char is_clk_on)
{
	UINT32 ip29;
	unsigned int time1 = 0;
	unsigned int time2 = 0;
	unsigned int wait_cnt = 0;
	unsigned char pre_clk_state;

#ifdef CONFIG_MEMC_BYPASS
	return;
#endif

	time1 = rtd_inl(0xB801B6B8);

	ip29 = (IoReg_Read32(0xb809d7fc)>>29)&0x1;
	if(ip29){
		return;
	}

    down(&MEMC_CLK_Semaphore);
	pre_clk_state = (((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x3) == 0x3) ? 1 : 0;
	if(pre_clk_state && (is_clk_on == 0)){
		g_MEMC_DMA_state = 0;
		rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_Bypass_CLK_OnOff_01][%d]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1);
#if 0 //MEClkOff_MCClkOn
		//set PZ
		IoReg_Write32(0xb80996b0, 0x0ff33302);
		//DMA off
		MEMC_LibDisableDMA();
		//CLK off
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);
		IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);
#else
		//set PZ
		if(MEMC_LibGetMEMC_PCModeEnable()){
			Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
		}else{
			MEMC_LibSetMCBlend(2);
		}
		//disable memc interrupt
		IoReg_Write32(0xb8099018, 0x0200403f);
		IoReg_Write32(0xb809d008, 0x00000040);

		//DMA off
		MEMC_LibDisableDMA();

		//wait
		time2 = rtd_inl(0xB801B6B8);
#if 0
		msleep(42);
#else
		rtd_outl(0xb809E004, 0x0);
		while(rtd_inl(0xb809E060) != 0){
			hw_msleep(1);
			if(wait_cnt++>30)
				break;
		}
#endif
		pr_notice("[jerry_Scaler_MEMC_Bypass_CLK_OnOff_01][%d][%d,%d]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1, wait_cnt, (rtd_inl(0xB801B6B8)-time2));

		//MEMC mux disable
		drvif_memc_mux_en(FALSE);

		//CLK off
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0xc0000000);
		IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0xc0000000);
#endif
	}
	else if(is_clk_on){
#if 0 //def MEClkOff_MCClkOn
		//mute
//		Scaler_MEMC_ForceBg(1);
//		rtd_setbits(0xb809d060, _BIT30);
		MEMC_LibBlueScreen(1);
		g_MEMC_DMA_state = 1;
		msleep(20);
		msleep(20);
		pr_notice("[jerry_Scaler_MEMC_Bypass_CLK_OnOff_02][%d]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1);
		pr_notice("[jerry_resume_GGG][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099414), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));

		//set PZ
		IoReg_Write32(0xb80996b0, 0x0ff33302);

		//CLK on
		IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);//rtd_outl(0xb800010c, 0xc0000000);
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000001);//rtd_outl(0xb800011c, 0xc0000001);
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);//rtd_outl(0xb800011c, 0xc0000000);
		IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000001);//rtd_outl(0xb800010c, 0xc0000001);
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000001);//rtd_outl(0xb800011c, 0xc0000001);

		//DMA on
		MEMC_LibEnableDMA();

		//set blending
		IoReg_Write32(0xb80996b0, 0x0ff33300);
#else
		//mute
		MEMC_LibBlueScreen(1);
		g_MEMC_DMA_state = 1;
//		msleep(20);
//		msleep(20);
		rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_Bypass_CLK_OnOff_02][%d]\n", (rtd_inl(0xb800011c)>>29));
		pr_notice("[jerry_Scaler_MEMC_Bypass_CLK_OnOff_02][%d]\n", (rtd_inl(0xb800011c)>>29));
		rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_resume_GGG][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099414), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));

		//set PZ
		if(MEMC_LibGetMEMC_PCModeEnable()){
			Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
		}else{
			MEMC_LibSetMCBlend(2);
		}
		//CLK on
		if(Scaler_ME_CLK_Check() == FALSE){
			rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_Bypass_CLK_OnOff_03][%d]\n", g_MEMC_DMA_state);
//			msleep(20);
//			msleep(20);
			IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0xc0000000);//rtd_outl(0xb800010c, 0xc0000000);
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0xc0000001);//rtd_outl(0xb800011c, 0xc0000001);
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0xc0000000);//rtd_outl(0xb800011c, 0xc0000000);
			IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0xc0000001);//rtd_outl(0xb800010c, 0xc0000001);
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0xc0000001);//rtd_outl(0xb800011c, 0xc0000001);
		}

		//DMA on
//		msleep(20);
	//	msleep(20);
		MEMC_LibEnableDMA();

		//MEMC mux enable
		drvif_memc_mux_en(TRUE);

		//enable memc interrupt
		msleep(20);
		msleep(22);
		IoReg_Write32(0xb8099018, 0x0200403f);
		IoReg_Write32(0xb809d008, 0x00000040);

		//set blending
		if(MEMC_LibGetMEMC_PCModeEnable()){
			Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
		}else{
			if((u8_MEMCMode == 0) || (u8_MEMCMode == 4 && dejudder == 0) || (VR360_en == 1)){
				MEMC_LibSetMCBlend(2);
			}
			else{
				MEMC_LibSetMCBlend(0);
			}
		}
#endif

	}

	up(&MEMC_CLK_Semaphore);

	//pr_notice("[jerry_Scaler_MEMC_Bypass_CLK_OnOff_04][time = %d]\n", (rtd_inl(0xB801B6B8)-time1)/90);
}
#endif


#if 0
void Scaler_MEMC_Bypass_CLK(unsigned char is_clk_on)
{
	UINT32 ip29;
	unsigned int time1 = 0;
	unsigned int time2 = 0;
	unsigned int wait_cnt = 0;
	unsigned char pre_clk_state;

#ifdef CONFIG_MEMC_BYPASS
	return;
#endif

	time1 = rtd_inl(0xB801B6B8);

	ip29 = (IoReg_Read32(0xb809d7fc)>>29)&0x1;
	if(ip29){
		return;
	}

	pr_debug("[%s] MUTEX DOWN@%x\n", __FUNCTION__, rtd_inl(0xB801B6B8));
	down(&MEMC_CLK_Semaphore);
	pre_clk_state = (((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x3) == 0x3) ? 1 : 0;
	if(pre_clk_state && (is_clk_on == 0))
	{
#if 0 //def MEClkOff_MCClkOn
		pr_notice("[jerry_Scaler_MEMC_Bypass_CLK_01]\n");
		//set PZ
		IoReg_Write32(0xb80996b0, 0x0ff33302);

		//DMA off
		MEMC_LibDisableDMA();

		//CLK off
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);
		IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);
#else
		rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_Bypass_CLK_01]\n");
		//set PZ
		if(MEMC_LibGetMEMC_PCModeEnable()){
			Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
		}else{
			MEMC_LibSetMCBlend(2);
		}

		//disable memc interrupt
		IoReg_Write32(0xb8099018, 0x0200403f);
		IoReg_Write32(0xb809d008, 0x00000040);

		//DMA off
		MEMC_LibDisableDMA();

		//wait
		time2 = rtd_inl(0xB801B6B8);
#if 0
		msleep(42);
#else
		rtd_outl(0xb809E004, 0x0);
		while(rtd_inl(0xb809E060) != 0){
			hw_msleep(1);
			if(wait_cnt++>30)
				break;
		}
#endif
		pr_notice("[jerry_Scaler_MEMC_Bypass_CLK_01][%d,%d]\n", wait_cnt, (rtd_inl(0xB801B6B8)-time2));

		//MEMC mux disable
		drvif_memc_mux_en(FALSE);

		//CLK off
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0xc0000000);
		IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0xc0000000);
#endif
	}
	else if(is_clk_on)// if(Scaler_ME_CLK_Check() == FALSE)
	{
#if 0 //def MEClkOff_MCClkOn
		pr_notice("[jerry_Scaler_MEMC_Bypass_CLK_02]\n");
		//set PZ
		IoReg_Write32(0xb80996b0, 0x0ff33302);

		//CLK on
		IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);//rtd_outl(0xb800010c, 0xc0000000);
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000001);//rtd_outl(0xb800011c, 0xc0000001);
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);//rtd_outl(0xb800011c, 0xc0000000);
		IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000001);//rtd_outl(0xb800010c, 0xc0000001);
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000001);//rtd_outl(0xb800011c, 0xc0000001);

		//DMA on
		MEMC_LibEnableDMA();

		//set blending
		IoReg_Write32(0xb80996b0, 0x0ff33300);
#else
		rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_Bypass_CLK_02]\n");
		pr_notice("[jerry_Scaler_MEMC_Bypass_CLK_02]\n");
		//set PZ
		if(MEMC_LibGetMEMC_PCModeEnable()){
			Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
		}else{
			MEMC_LibSetMCBlend(2);
		}

		//CLK on
		if(Scaler_ME_CLK_Check() == FALSE){
			rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_Bypass_CLK_03][%d]\n", (IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1);
			IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0xc0000000);//rtd_outl(0xb800010c, 0xc0000000);
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0xc0000001);//rtd_outl(0xb800011c, 0xc0000001);
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0xc0000000);//rtd_outl(0xb800011c, 0xc0000000);
			IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0xc0000001);//rtd_outl(0xb800010c, 0xc0000001);
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0xc0000001);//rtd_outl(0xb800011c, 0xc0000001);
		}

		//DMA on
		msleep(20);
		MEMC_LibEnableDMA();

		//MEMC mux enable
		drvif_memc_mux_en(TRUE);

		//enable memc interrupt
		msleep(20);
		IoReg_Write32(0xb8099018, 0x0200403f);
		IoReg_Write32(0xb809d008, 0x00000040);

		//set blending
		if(MEMC_LibGetMEMC_PCModeEnable()){
			Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
		}else{
			if((u8_MEMCMode == 0) || (u8_MEMCMode == 4 && dejudder == 0) || (VR360_en == 1)){
				MEMC_LibSetMCBlend(2);
			}
			else{
				MEMC_LibSetMCBlend(0);
			}
		}
#endif
	}

	up(&MEMC_CLK_Semaphore);
	pr_debug("[%s] MUTEX UP@%x\n", __FUNCTION__, rtd_inl(0xB801B6B8));

	//pr_notice("[jerry_Scaler_MEMC_Bypass_CLK_04][time = %d][%d]\n", (rtd_inl(0xB801B6B8)-time1)/90, VR360_en);
}
#endif

UINT32 HDMI_PowerSaving_stage = 0;
void Scaler_MEMC_HDMI_ME_CLK_OnOff(unsigned char is_clk_on, unsigned char mode)
{
	UINT32 ip29;
	unsigned int time1 = 0;//, time2 = 0;
	//unsigned char wait_cnt = 0;
	//unsigned char timeout_flag = 0;

#ifdef CONFIG_MEMC_BYPASS
	return;
#endif
#ifdef MEMC_BRING_UP
	return;
#endif

	time1 = rtd_inl(0xB801B6B8);
	rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC_LibHDMIPowerSaving][Scaler_MEMC_HDMI_ME_CLK_OnOff][00][%d]\n", time1);

	ip29 = (IoReg_Read32(0xb809d7fc)>>29)&0x1;
	if(ip29){
		return;
	}

	if(is_clk_on == 0){
		rtd_printk(KERN_DEBUG, TAG_NAME, "[Scaler_MEMC_HDMI_ME_CLK_OnOff][01][%x]\n", rtd_inl(0xb800011c));
		pr_notice("[MEMC_LibHDMIPowerSaving][Scaler_MEMC_HDMI_ME_CLK_OnOff][01][%x]\n", rtd_inl(0xb800011c));
		MEMC_Lib_set_memc_PowerSaving_Mode(0); // DTV PS flow would force cadence to video, but HDMI need to free the crtl
#if 1 //MEClkOff_MCClkOn
		//set IZ
		//rtd_setbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
		if( mode == 0 ){
			if(HDMI_PowerSaving_stage == 0){
				if(MEMC_LibGetMEMC_PCModeEnable()){
					Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
				}else{
					MEMC_LibSetMCBlend(1);
				}

				HDMI_PowerSaving_stage = 1;
				pr_notice("[MEMC_LibHDMIPowerSaving][Scaler_MEMC_HDMI_ME_CLK_OnOff][ME_CLK_off][%d][%x]\n", HDMI_PowerSaving_stage, rtd_inl(0xb809aea8));
			}else if(HDMI_PowerSaving_stage == 1){

				//DMA off
				rtd_setbits(0xb809aea8, _BIT0);
				MEMC_LibDisableMEDMA();
				rtd_setbits(0xb809aea8, _BIT2);

				rtd_clearbits(0xb809aea8, _BIT0);

				rtd_outl(MC__MC_D8_ADDR, 0x80000000); //rtd_outl(0xb80996d8, 0x80000000); //force mv = 0
				rtd_setbits(MC__MC_34_ADDR, _BIT28); //rtd_setbits(0xb8099634, _BIT28); //[28], MC_SRAM sleep

				//ME CLK off
				IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);
				IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);

				rtd_clearbits(0xb80999ec, _BIT1); // lbmc_db_sel
				pr_notice("[MEMC_LibSetMCBlend][%s][%d][PC mode,%x,][90k=%x]\n\r", __FUNCTION__, __LINE__, rtd_inl(0xB8099924), rtd_inl(0xB801B6B8));
				rtd_setbits(0xb80999ec, _BIT1); // lbmc_db_sel
				pr_notice("[MEMC_LibSetMCBlend][%s][%d][PC mode,%x,][90k=%x]\n\r", __FUNCTION__, __LINE__, rtd_inl(0xB8099924), rtd_inl(0xB801B6B8));
				HDMI_PowerSaving_stage = 0;
				pr_notice("[MEMC_LibHDMIPowerSaving][Scaler_MEMC_HDMI_ME_CLK_OnOff][ME_CLK_off][%d][%x]\n", HDMI_PowerSaving_stage, rtd_inl(0xb809aea8));

			}
		}else{
			if(MEMC_LibGetMEMC_PCModeEnable()){
				Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
			}else{
				MEMC_LibSetMCBlend(1);
			}

			rtd_setbits(MC__MC_34_ADDR, _BIT28); //rtd_setbits(0xb8099634, _BIT28); //[28], MC_SRAM sleep
			rtd_outl(MC__MC_D8_ADDR, 0x80000000); //rtd_outl(0xb80996d8, 0x80000000); //force mv = 0

			//DMA off
			MEMC_LibDisableMEDMA();

			//ME CLK off
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);
			IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);
			HDMI_PowerSaving_stage = 0;
			pr_notice("[MEMC_LibHDMIPowerSaving][Scaler_MEMC_HDMI_ME_CLK_OnOff][ME_CLK_off][DD][%x]\n", rtd_inl(0xb809aea8));
		}
#endif
	}
	else{
		rtd_printk(KERN_DEBUG, TAG_NAME, "[Scaler_MEMC_HDMI_ME_CLK_OnOff][02][%x]\n", rtd_inl(0xb800011c));
		pr_notice("[MEMC_LibHDMIPowerSaving][Scaler_MEMC_HDMI_ME_CLK_OnOff][MEMC clk all on!][%x]\n", rtd_inl(0xb800011c));
		//pr_notice("[jerry_resume_GGG][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099414), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));
		MEMC_Lib_set_memc_PowerSaving_Mode(0);
#if 1 //def MEClkOff_MCClkOn
		//set IZ
		//rtd_setbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
		if(MEMC_LibGetMEMC_PCModeEnable()){
			Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
		}else{
			MEMC_LibSetMCBlend(1);
		}

		//CLK on
		IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);//rtd_outl(0xb800010c, 0xc0000000);
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000001);//rtd_outl(0xb800011c, 0xc0000001);
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);//rtd_outl(0xb800011c, 0xc0000000);
		IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000001);//rtd_outl(0xb800010c, 0xc0000001);
		IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000001);//rtd_outl(0xb800011c, 0xc0000001);

		rtd_clearbits(MC__MC_34_ADDR, _BIT28); //rtd_setbits(0xb8099634, _BIT28); //[28], MC_SRAM sleep
		rtd_outl(MC__MC_D8_ADDR, 0x00000000); //rtd_outl(0xb80996d8, 0x80000000); //force mv = 0

		//DMA on
		MEMC_LibEnableDMA();

		//MEMC mux enable
		drvif_memc_mux_en(TRUE);

		HDMI_PowerSaving_stage = 0;
#endif

	}
	pr_notice("[MEMC_LibHDMIPowerSaving][Scaler_MEMC_HDMI_ME_CLK_OnOff][04][time = %d]\n", (rtd_inl(0xB801B6B8)-time1)/90);
}

UINT32 DTV_PowerSaving_stage = 0;
int Scaler_MEMC_DTV_ME_CLK_OnOff(unsigned char enable, unsigned char bMode)
{
	//UINT32 ip29;
	unsigned int time1 = 0;
	unsigned int time2 = 0;
	unsigned int time3 = 0;
	//unsigned char is_clk_on = 0;
	unsigned char do_power_saving = 0;
	unsigned char Me_clk_state;
	unsigned int wait_cnt = 0;
	unsigned int crtc1_frc_hact_state = 0;
	unsigned int MEMC_drvif_mux_state = 0;
	unsigned char timeout_flag = 0;
	unsigned char MC_sram_state = 0;

#ifdef CONFIG_MEMC_BYPASS
	return 0;
#endif
#ifdef MEMC_BRING_UP
	return 0;
#endif

	time1 = rtd_inl(0xB801B6B8);

#if 1 // MEMC CLK OFF handler
	Me_clk_state = ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x1);
	crtc1_frc_hact_state = rtd_inl(CRTC1__CRTC1_14_ADDR)&0xfff;
	MEMC_drvif_mux_state = rtd_inl(MEMC_MUX_MEMC_MUX_FUNC_CTRL_reg)&0x1;
	MC_sram_state = (rtd_inl(MC__MC_34_ADDR)>>28)&0x1;
	pr_notice("[%s] state=[,%d,%d,%d][,%x,]\n\r", __FUNCTION__, Me_clk_state, crtc1_frc_hact_state, MEMC_drvif_mux_state, rtd_inl(0xB80282e4));
#if 0
	if(pre_clk_state == enable){ // sleep when buffer empty
		//pr_notice("[%s] memcClk/enable=%d/%d\n", __FUNCTION__, IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>31, enable);
		pr_notice("[%s] memcClk/enable=%d/%d\n", __FUNCTION__, ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x3), enable);
		return 0;
	}
#else
	if(enable){ // sleep when buffer empty
		if((Me_clk_state == 0) || (crtc1_frc_hact_state == 0) || (MEMC_drvif_mux_state == 0) || (MC_sram_state == 1)){
			do_power_saving = 0;
		}else{
			pr_notice("[%s] memcClk/enable=%d/%d\n", __FUNCTION__, ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x1), enable);
			return 0;
		}
	}else{
		if(Me_clk_state > 0){
			do_power_saving = 1;
		}else{
			pr_notice("[%s] memcClk/enable=%d/%d\n", __FUNCTION__, ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x1), enable);
			return 0;
		}
	}
#endif

	pr_notice("[%s] MUTEX DOWN@%x\n", __FUNCTION__, rtd_inl(0xB801B6B8));
	time3 = rtd_inl(0xB801B6B8);
	down(&MEMC_CLK_Semaphore);
		if(do_power_saving == 1){ //turn off clk
			//mute
			if(bMode == 1){
				MEMC_LibBlueScreen(1);

				//set IZ
				//rtd_setbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
				if(MEMC_LibGetMEMC_PCModeEnable()){
					Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
				}else{
					MEMC_LibSetMCBlend(1);
				}

				//DMA off
				MEMC_LibDisableMEDMA();

				//wait
	//			time2 = rtd_inl(0xB801B6B8);
	//			wait_cnt = 0;
	//	#if 0
	//			msleep(42);
	//	#else
	//			pr_notice("[jerry_Scaler_MEMC_DTV_ME_CLK_OnOff_01][AAA][%d][%d,%d]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1, wait_cnt, (rtd_inl(0xB801B6B8)-time2));
	//			rtd_outl(0xb809E004, 0x0);
	//			while(rtd_inl(0xb809E060) != 0){
	//				hw_msleep(1);
	//				if(wait_cnt++>30)
	//					break;
	//			}
	//	#endif
	//			rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_DTV_ME_CLK_OnOff_01][%d][%d,%d]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1, wait_cnt, (rtd_inl(0xB801B6B8)-time2));
				rtd_setbits(MC__MC_34_ADDR, _BIT28); //rtd_setbits(0xb8099634, _BIT28); //[28], MC_SRAM sleep
				rtd_outl(MC__MC_D8_ADDR, 0x80000000); //rtd_outl(0xb80996d8, 0x80000000); //force mv = 0

				//CLK off
				IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);
				IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);

				pr_notice("[jerry_Scaler_MEMC_DTV_ME_CLK_OnOff_01][AAA][%d][%d,%d][%x]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1, wait_cnt, (rtd_inl(0xB801B6B8)-time2), rtd_inl(0xb809E060));
			}else{
					/**** move to Patch_Manage.c ****
					if(DTV_PowerSaving_stage == 0){
						//set IZ
						rtd_setbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
						if(MEMC_LibGetMEMC_PCModeEnable()){
							Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
						}else{
							MEMC_LibSetMCBlend(1);
						}
						DTV_PowerSaving_stage = 1;
						pr_notice("[Scaler_MEMC_DTV_ME_CLK_OnOff][ME_CLK_off][AA][%x]\n", rtd_inl(0xb809aea8));
					}else if(DTV_PowerSaving_stage == 2){
						//DMA off
						rtd_setbits(0xb809aea8, _BIT0);
						MEMC_LibDisableMEDMA();
						rtd_setbits(0xb809aea8, _BIT2);

						DTV_PowerSaving_stage = 3;
						pr_notice("[Scaler_MEMC_DTV_ME_CLK_OnOff][ME_CLK_off][BB][%x]\n", rtd_inl(0xb809aea8));
					}else if(DTV_PowerSaving_stage == 3){
						rtd_clearbits(0xb809aea8, _BIT0);

						rtd_outl(MC__MC_D8_ADDR, 0x80000000); //rtd_outl(0xb80996d8, 0x80000000); //force mv = 0
						rtd_setbits(MC__MC_34_ADDR, _BIT28); //rtd_setbits(0xb8099634, _BIT28); //[28], MC_SRAM sleep

						//ME CLK off
						IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);
						IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);
						DTV_PowerSaving_stage = 0;
						pr_notice("[Scaler_MEMC_DTV_ME_CLK_OnOff][ME_CLK_off][CC][%x]\n", rtd_inl(0xb809aea8));
					}
					*******************************/
				//wait ME CLK off
				DTV_PowerSaving_stage = 1;
				MEMC_Lib_set_memc_freeze_status_flag(1);
				do{
					if(MEMC_Lib_get_memc_freeze_status_flag()==1){
						if((rtd_inl(0xB801B6B8)-time3)>=7200){
							timeout_flag = 1;
						}
					}
				}while((timeout_flag == 0) && (MEMC_Lib_get_memc_freeze_status_flag() == 1));
				pr_notice("[jerry_Scaler_MEMC_DTV_ME_CLK_OnOff_01][BBB][%d][%d,%d][%d][%d]\n", (rtd_inl(0xb800011c)>>30)&0x1, timeout_flag, (rtd_inl(0xB801B6B8)-time3),MEMC_Lib_get_memc_freeze_status_flag(), rtd_inl(0xB801B6B8));
			}
		}
		else{ //turn on clk
			//mute
			if(bMode)
				MEMC_LibBlueScreen(1);

			rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_DTV_ME_CLK_OnOff_02][%d]\n", (rtd_inl(0xb800011c)>>29));
//			rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_resume_GGG][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099414), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));

			//set IZ
			//rtd_setbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
//			if(MEMC_LibGetMEMC_PCModeEnable()){
//				Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
//			}else{
//				MEMC_LibSetMCBlend(1);
//			}
			//CLK on
			rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_DTV_ME_CLK_OnOff_03][%d]\n", g_MEMC_DMA_state);
			IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);//rtd_outl(0xb800010c, 0xc0000000);
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000001);//rtd_outl(0xb800011c, 0xc0000001);
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);//rtd_outl(0xb800011c, 0xc0000000);
			IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000001);//rtd_outl(0xb800010c, 0xc0000001);
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000001);//rtd_outl(0xb800011c, 0xc0000001);

			rtd_clearbits(MC__MC_34_ADDR, _BIT28); //rtd_setbits(0xb8099634, _BIT28); //[28], MC_SRAM sleep
			rtd_outl(MC__MC_D8_ADDR, 0x00000000); //rtd_outl(0xb80996d8, 0x80000000); //force mv = 0

//			msleep(20);//need wait one frame for garbae happen when CLK enable,move to patch_manage.c ->patch_MEMC_bypass_switch() -> test_val = 1
			//DMA on
			MEMC_LibEnableDMA();

			//MEMC mux enable
			drvif_memc_mux_en(TRUE);

			//if(!bMute)
			//	msleep(20);

			//enable memc interrupt
			IoReg_Write32(0xb8099018, 0x0200403f);
			IoReg_Write32(0xb809d008, 0x00000040);

//			MEMC_Lib_set_memc_freeze_status_flag(1);

			//wait
//			time3 = rtd_inl(0xB801B6B8);
//			if(!bMute){
//				do{
//					if(MEMC_Lib_get_memc_freeze_status_flag()==1){
//						if((rtd_inl(0xB801B6B8)-time3)>=7200){
//							timeout_flag = 1;
//						}
//					}
//				}while((timeout_flag == 0) && (MEMC_Lib_get_memc_freeze_status_flag() == 1));
//			}
//			timeout_flag = 0;

			//set blending
			if(MEMC_LibGetMEMC_PCModeEnable()){
				Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
			}else{
				if(VR360_en == 1)
					MEMC_LibSetMCBlend(1);
				else if((u8_MEMCMode == 0) || (u8_MEMCMode == 4 && dejudder == 0))
					MEMC_LibSetMCBlend(1);
				else
					MEMC_LibSetMCBlend(0);
			}
			pr_notice("[jerry_Scaler_MEMC_DTV_ME_CLK_OnOff_01][CCC][%d][%d,%d][%x]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1, wait_cnt, (rtd_inl(0xB801B6B8)-time3),MEMC_Lib_get_memc_freeze_status_flag());
		}
		//pre_clk_state = enable;
		up(&MEMC_CLK_Semaphore);
		pr_notice("[%s] MUTEX UP@%x\n", __FUNCTION__, rtd_inl(0xB801B6B8));
#endif
	timeout_flag = 0;
	pr_notice("[jerry_Scaler_MEMC_DTV_ME_CLK_OnOff_04][time = %d][%d,%d][%d]\n", (rtd_inl(0xB801B6B8)-time1)/90, enable, bMode, ((rtd_inl(0xb800011c)>>30)&0x1));

	return 0;
}

void Scaler_MEMC_HDMI_Power_Ctrl(unsigned char is_hdmi)
{
	pr_notice("[jerry_HDMI_PS][Scaler_MEMC_HDMI_Power_Ctrl]\n\r");
	//MEMC_LibPowerSaveing(is_hdmi);
}

void Scaler_MEMC_Set_Clock_ForceExit(void)
{
	pr_notice("[Scaler_MEMC_Set_Clock_ForceExit] MEMC CLK CTRL TASK FORCE EXIT\n\r");
	bMemcClkTask_ForceExitFlag = 1;
	return;
}


void Scaler_MEMC_Set_Clock_Enable(unsigned char enable, unsigned char bMute)
{
	pr_notice("[Scaler_MEMC_Set_Clock_Enable]memcClkEn=%d->%d\n\r", bMemcClkTask_memcClkEn,  enable);

	pr_notice("[%s] MUTEX DOWN@%x\n", __FUNCTION__, rtd_inl(0xB801B6B8));
	down(&MEMC_CLK_Semaphore);
	bMemcClkTask_memcClkEn= enable;
	bMemcClkTask_memcMuteFlag = bMute;
	up(&MEMC_CLK_Semaphore);
	pr_notice("[%s] MUTEX UP@%x\n", __FUNCTION__, rtd_inl(0xB801B6B8));

	return;
}

int Scaler_MEMC_Get_Clock_Enable(unsigned char *enable, unsigned char *bMute)
{
	if(!enable || !bMute){
		pr_notice("[ERR] NULL PTR@%s\n", __FUNCTION__);
		return -1;
	}

	*enable = bMemcClkTask_memcClkEn;
	*bMute = bMemcClkTask_memcMuteFlag;
	return 0;
}

extern int vbe_dtg_memec_bypass_switch(void);
int Scaler_MEMC_MEMC_CLK_OnOff(unsigned char ME_enable, unsigned char MC_enable, unsigned char bMute)
{
	//UINT32 ip29;
	unsigned int time1 = 0;
	unsigned int time2 = 0;
	unsigned int time3 = 0;
	//unsigned char is_clk_on = 0;
	unsigned char do_power_saving = 0;
	unsigned char Me_clk_state;
	unsigned char Mc_clk_state;
	unsigned int wait_cnt = 0;
	unsigned int crtc1_frc_hact_state = 0;
	unsigned int MEMC_drvif_mux_state = 0;
	unsigned char timeout_flag = 0;
	unsigned char MC_sram_sleep_state = 0;
	unsigned char MC_DMA_read_i_state = 0;
	unsigned int force_MEMC_on_en = 0;

#ifdef CONFIG_MEMC_BYPASS
	return 0;
#endif

#ifdef MEMC_BRING_UP
	return 0;
#endif

	time1 = rtd_inl(0xB801B6B8);

#if 1 // MEMC CLK OFF handler
	Me_clk_state = ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x1);
	Mc_clk_state = ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>31)&0x1);
	crtc1_frc_hact_state = rtd_inl(CRTC1__CRTC1_14_ADDR)&0xfff;
	MEMC_drvif_mux_state = rtd_inl(MEMC_MUX_MEMC_MUX_FUNC_CTRL_reg)&0x1;
	MC_sram_sleep_state = (rtd_inl(MC__MC_34_ADDR)>>28)&0x1;
	MC_DMA_read_i_state = rtd_inl(KMC_DM_METER_TOP__METER_TIMER0_ADDR)&0x1;
	force_MEMC_on_en = ((rtd_inl(SOFTWARE1__SOFTWARE1_63_ADDR)>>29)&0x1);
	pr_notice("[%s] state=[,%d,%d,%d,%d][,%x,][%d][%d,%d]\n\r", __FUNCTION__, Mc_clk_state, Me_clk_state, crtc1_frc_hact_state, MEMC_drvif_mux_state, rtd_inl(0xB80282e4),MEMC_Lib_get_memc_PowerSaving_Mode(), ME_enable, MC_enable);

#if 0
	if(pre_clk_state == enable){ // sleep when buffer empty
		//pr_notice("[%s] memcClk/enable=%d/%d\n", __FUNCTION__, IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>31, enable);
		pr_notice("[%s] memcClk/enable=%d/%d\n", __FUNCTION__, ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x3), enable);
		return 0;
	}
#else
	if((VR360_en == 1) && (ME_enable || MC_enable))
	{
		pr_notice("[Scaler_MEMC_MEMC_CLK_OnOff] VR360 is on, memory is used. MEMC CLK cannot be enabled. %d, %d, %d\n", VR360_en, ME_enable, MC_enable);
		return 0;
	}
	else if((ME_enable == 1)){ // sleep when buffer empty
		MEMC_Lib_set_memc_PowerSaving_Mode(0);
		if((Me_clk_state == 0) || (Mc_clk_state == 0) || (crtc1_frc_hact_state == 0) || (MEMC_drvif_mux_state == 0) || (MC_sram_sleep_state == 1)){
			do_power_saving = 0;  //turn on all clk
		}else{
			pr_notice("[Scaler_MEMC_MEMC_CLK_OnOff][AA][clock status doesn't change, will not mute !!][MEMC_Clk=%d][enable=%d/%d]\n", ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x3), ME_enable, MC_enable);
			return 0;
		}
	}else if(MC_enable == 1){ 
		MEMC_Lib_set_memc_PowerSaving_Mode(2);
		if((Me_clk_state == 1) || (Mc_clk_state == 0) || (crtc1_frc_hact_state == 0) || (MEMC_drvif_mux_state == 0) || (MC_sram_sleep_state == 0) || (VR360_stage != 0) || (VR360_en == 0 && MC_DMA_read_i_state == 0)){
			do_power_saving = 2;  //turn on MC clk
		}else{
			pr_notice("[Scaler_MEMC_MEMC_CLK_OnOff][BB][clock status doesn't change, will not mute !!][MEMC_Clk=%d][enable=%d/%d]\n", ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x3), ME_enable, MC_enable);
			return 0;
		}
	}else{
		MEMC_Lib_set_memc_PowerSaving_Mode(1);
		if((Me_clk_state == 1) || (Mc_clk_state == 1)){
			do_power_saving = 1;  //turn off all clk
		}else{
			pr_notice("[Scaler_MEMC_MEMC_CLK_OnOff][CC][clock status doesn't change, will not mute !!][MEMC_Clk=%d][enable=%d/%d]\n", ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>30)&0x3), ME_enable, MC_enable);
			return 0;
		}
	}
#endif

	if(force_MEMC_on_en){
		do_power_saving = 0;
	}

	pr_notice("[%s] MUTEX DOWN@%x, %d\n", __FUNCTION__, rtd_inl(0xB801B6B8),do_power_saving);
	down(&MEMC_CLK_Semaphore);
		if(do_power_saving == 2){  //MC clk on, ME clk off
			g_MEMC_DMA_state = 0;

			if(bMute == 1){
				if(Mc_clk_state == 0){
					MEMC_LibBlueScreen(1);
					pr_notice("[Scaler_MEMC_MEMC_CLK_OnOff][MEMC off to MC only][Mute !!]");
				}
				else{
					pr_notice("[Scaler_MEMC_MEMC_CLK_OnOff][MEMC on to MC only][No Mute !!]");
				}

				//set IZ
				if(MEMC_LibGetMEMC_PCModeEnable()){
					Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
				}else if(VR360_en == 1){
					MEMC_LibSetMCBlend(1);
				}else{
					MEMC_LibSetMCBlend(1);
				}

				if(Mc_clk_state == 0){
					rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_MEMC_CLK_MCOn_MEOff][AA][%d]\n", g_MEMC_DMA_state);
					IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x80000000);//rtd_outl(0xb800010c, 0xc0000000);
					IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x80000001);//rtd_outl(0xb800011c, 0xc0000001);
					IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x80000000);//rtd_outl(0xb800011c, 0xc0000000);
					IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x80000001);//rtd_outl(0xb800010c, 0xc0000001);
					IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x80000001);//rtd_outl(0xb800011c, 0xc0000001);
				}

				//MEMC mux enable
				if(MEMC_drvif_mux_state == 0){
					drvif_memc_mux_en(TRUE);
				}

				if(crtc1_frc_hact_state == 0){
					IoReg_Mask32(0xb809f004, ~0x0000001f, 0x1f);//				rtd_outl(0xb809f004, tmp_val);
					IoReg_Mask32(CRTC1__CRTC1_14_ADDR, ~0x00000fff, 0x3c0);//				rtd_outl(CRTC1__CRTC1_14_ADDR, tmp_crtc1_frc_hact);
					IoReg_Mask32(CRTC1__CRTC1_44_ADDR, ~0x00001fff, 0x438);//				rtd_outl(CRTC1__CRTC1_44_ADDR, tmp_crtc1_mc_vact);
				}

				//MC DMA on, ME DMA off
				MEMC_LibDisableMEDMA();

				if(MC_sram_sleep_state == 0){
					rtd_setbits(MC__MC_34_ADDR, _BIT28); //rtd_setbits(0xb8099634, _BIT28); //[28], MC_SRAM sleep
					rtd_outl(MC__MC_D8_ADDR, 0x80000000); //rtd_outl(0xb80996d8, 0x80000000); //force mv = 0
				}

				//ME CLK off
				if(Me_clk_state == 1){
					IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);
					IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);
				}

				pr_notice("[jerry_Scaler_MEMC_MEMC_CLK_MCOn_MEOff_01][%d][%d][%x]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1, (rtd_inl(0xB801B6B8)-time2), rtd_inl(0xb809E060));
			}
			else{
				//set IZ
				if(MEMC_LibGetMEMC_PCModeEnable()){
					Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
				}else if(VR360_en == 1){
					MEMC_LibSetMCBlend(1);
				}else{
					MEMC_LibSetMCBlend(1);
				}

				if(Mc_clk_state == 0){
					rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_MEMC_CLK_MCOn_MEOff][BB][%d]\n", g_MEMC_DMA_state);
					IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x80000000);//rtd_outl(0xb800010c, 0xc0000000);
					IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x80000001);//rtd_outl(0xb800011c, 0xc0000001);
					IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x80000000);//rtd_outl(0xb800011c, 0xc0000000);
					IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x80000001);//rtd_outl(0xb800010c, 0xc0000001);
					IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x80000001);//rtd_outl(0xb800011c, 0xc0000001);
				}

				//MEMC mux enable
				if(MEMC_drvif_mux_state == 0){
					drvif_memc_mux_en(TRUE);
				}

				if(crtc1_frc_hact_state == 0){
					IoReg_Mask32(0xb809f004, ~0x0000001f, 0x1f);//				rtd_outl(0xb809f004, tmp_val);
					IoReg_Mask32(CRTC1__CRTC1_14_ADDR, ~0x00000fff, 0x3c0);//				rtd_outl(CRTC1__CRTC1_14_ADDR, tmp_crtc1_frc_hact);
					IoReg_Mask32(CRTC1__CRTC1_44_ADDR, ~0x00001fff, 0x438);//				rtd_outl(CRTC1__CRTC1_44_ADDR, tmp_crtc1_mc_vact);
				}

				//wait ME CLK off
				//**** move to Patch_Manage.c ****//
				DTV_PowerSaving_stage = 1;
				MEMC_Lib_set_memc_freeze_status_flag(1);
				time3 = rtd_inl(0xB801B6B8);
				do{
					if(MEMC_Lib_get_memc_freeze_status_flag()==1){
						if((rtd_inl(0xB801B6B8)-time3)>=7500){
							timeout_flag = 1;
						}
					}
				}while((timeout_flag == 0) && (MEMC_Lib_get_memc_freeze_status_flag() == 1));
				pr_notice("[jerry_Scaler_MEMC_MEMC_CLK_MCOn_MEOff_02][%d][%d,%d][%d][%d]\n", (rtd_inl(0xb800011c)>>30)&0x1, timeout_flag, (rtd_inl(0xB801B6B8)-time3),MEMC_Lib_get_memc_freeze_status_flag(), rtd_inl(0xB801B6B8));
			}
		}
		else if(do_power_saving == 1){  //turn off all clk
			g_MEMC_DMA_state = 0;

			//MEMC_LibBlueScreen(1);  //Do not mute, because that MEMC_ISR is disabled

			//set IZ
			//rtd_setbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
			//rtd_clearbits(HARDWARE__HARDWARE_57_ADDR, _BIT17); //WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 17, 17, 0x0); //u1_mc2_var_lpf_wrt_en
			//rtd_clearbits(MC2__MC2_50_ADDR, _BIT0); //WriteRegister(FRC_TOP__MC2__reg_mc_var_lpf_en_ADDR, 0, 1, 0x0);
			//rtd_clearbits(MC2__MC2_50_ADDR, _BIT1); //WriteRegister(FRC_TOP__MC2__reg_mc_var_lpf_en_ADDR, 0, 1, 0x0);
			if(MEMC_LibGetMEMC_PCModeEnable()){
				Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
			}else if(VR360_en == 1){
				MEMC_LibSetMCBlend(1);
			}else{
				MEMC_LibSetMCBlend(1);
			}

			//MEMC mux disable
			drvif_memc_mux_en(FALSE);

			//DMA off
			MEMC_LibDisableDMA();

			//wait
			time2 = rtd_inl(0xB801B6B8);
			wait_cnt = 0;
#if 0
			msleep(42);
#else
			pr_notice("[jerry_Scaler_MEMC_MEMC_CLK_Off][AAA][%d][%d,%d]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1, wait_cnt, (rtd_inl(0xB801B6B8)-time2));
			rtd_outl(0xb809E004, 0x0);
			while(rtd_inl(0xb809E060) != 0){
				hw_msleep(1);
				if(wait_cnt++>30)
					break;
			}
			pr_notice("[jerry_Scaler_MEMC_MEMC_CLK_Off][BBB][%d][%d,%d][%x]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1, wait_cnt, (rtd_inl(0xB801B6B8)-time2), rtd_inl(0xb809E060));
#endif
			//CLK off
			IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0xc0000000);
			IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0xc0000000);
		}
		else if(do_power_saving == 0){  //turn on all clk

			//mute
			if(bMute){
				if(Mc_clk_state == 0){
					MEMC_LibBlueScreen(1);
					pr_notice("[Scaler_MEMC_MEMC_CLK_OnOff][MEMC off to MEMC on][Mute !!]");
				}
				else{
					pr_notice("[Scaler_MEMC_MEMC_CLK_OnOff][MC only to MEMC on][No Mute !!]");
				}
			}
			//else{//Only Mute in "MEMC off to MEMC on" case, other case no need to mute}

			g_MEMC_DMA_state = 1;
			rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_MEMC_CLK_On_01][%d]\n", (rtd_inl(0xb800011c)>>29));
			rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_resume_GGG][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099414), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));

/*
			//set IZ
			rtd_setbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
			rtd_clearbits(HARDWARE__HARDWARE_57_ADDR, _BIT17); //WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 17, 17, 0x0); //u1_mc2_var_lpf_wrt_en
			rtd_clearbits(MC2__MC2_50_ADDR, _BIT0); //WriteRegister(FRC_TOP__MC2__reg_mc_var_lpf_en_ADDR, 0, 1, 0x0);
			rtd_clearbits(MC2__MC2_50_ADDR, _BIT1); //WriteRegister(FRC_TOP__MC2__reg_mc_var_lpf_en_ADDR, 0, 1, 0x0);
			if(MEMC_LibGetMEMC_PCModeEnable()){
				Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
			}else{
				MEMC_LibSetMCBlend(1);
			}
*/
			//CLK on
			if(Mc_clk_state == 0){
				rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_MEMC_CLK_On][AA][%d]\n", g_MEMC_DMA_state);
				IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x80000000);//rtd_outl(0xb800010c, 0xc0000000);
				IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x80000001);//rtd_outl(0xb800011c, 0xc0000001);
				IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x80000000);//rtd_outl(0xb800011c, 0xc0000000);
				IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x80000001);//rtd_outl(0xb800010c, 0xc0000001);
				IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x80000001);//rtd_outl(0xb800011c, 0xc0000001);
			}
			if(Me_clk_state == 0){
				rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_Scaler_MEMC_MEMC_CLK_On][BB][%d]\n", g_MEMC_DMA_state);
				IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000000);//rtd_outl(0xb800010c, 0xc0000000);
				IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000001);//rtd_outl(0xb800011c, 0xc0000001);
				IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000000);//rtd_outl(0xb800011c, 0xc0000000);
				IoReg_Write32(SYS_REG_SYS_SRST3_reg, 0x40000001);//rtd_outl(0xb800010c, 0xc0000001);
				IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, 0x40000001);//rtd_outl(0xb800011c, 0xc0000001);
			}

			if(MC_sram_sleep_state == 1){
				rtd_clearbits(MC__MC_34_ADDR, _BIT28); //rtd_setbits(0xb8099634, _BIT28); //[28], MC_SRAM sleep
				rtd_outl(MC__MC_D8_ADDR, 0x00000000); //rtd_outl(0xb80996d8, 0x80000000); //force mv = 0
			}

//			msleep(20);//need wait one frame for garbae happen when CLK enable,move to patch_manage.c ->patch_MEMC_bypass_switch() -> test_val = 1
			//DMA on
			MEMC_LibEnableDMA();

			//MEMC mux enable
			if(MEMC_drvif_mux_state == 0){
				drvif_memc_mux_en(TRUE);
			}

			if(crtc1_frc_hact_state == 0){
				IoReg_Mask32(0xb809f004, ~0x0000001f, 0x1f);//				rtd_outl(0xb809f004, tmp_val);
				IoReg_Mask32(CRTC1__CRTC1_14_ADDR, ~0x00000fff, 0x3c0);//				rtd_outl(CRTC1__CRTC1_14_ADDR, tmp_crtc1_frc_hact);
				IoReg_Mask32(CRTC1__CRTC1_44_ADDR, ~0x00001fff, 0x438);//				rtd_outl(CRTC1__CRTC1_44_ADDR, tmp_crtc1_mc_vact);
			}

			//if(!bMute)
			//	msleep(20);

			//enable memc interrupt
			IoReg_Write32(0xb8099018, 0x0200403f);
			IoReg_Write32(0xb809d008, 0x00000040);
/*
			MEMC_Lib_set_memc_freeze_status_flag(1);
			//wait
			time3 = rtd_inl(0xB801B6B8);
			if(!bMute){
				do{
					if(MEMC_Lib_get_memc_freeze_status_flag()==1){
						if((rtd_inl(0xB801B6B8)-time3)>=7200){
							timeout_flag = 1;
						}
					}
				}while((timeout_flag == 0) && (MEMC_Lib_get_memc_freeze_status_flag() == 1));
			}
			timeout_flag = 0;
*/
			//set blending
			if(bMute){
				if(MEMC_LibGetMEMC_PCModeEnable()){
					Mid_Mode_SetMCBlend(RGB_IN_PC_OUT);
				}else{
					if(VR360_en == 1)
						MEMC_LibSetMCBlend(1);
					else if((u8_MEMCMode == 0) || (u8_MEMCMode == 4 && dejudder == 0))
						MEMC_LibSetMCBlend(1);
					else
						MEMC_LibSetMCBlend(0);
				}
				//rtd_clearbits(MC__MC_28_ADDR, _BIT14); //0xb8099628
				rtd_setbits(HARDWARE__HARDWARE_57_ADDR, _BIT17); //WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 17, 17, 0x0); //u1_mc2_var_lpf_wrt_en
			}
			pr_notice("[jerry_Scaler_MEMC_MEMC_CLK_On][CC][%d][%d,%d][%x]\n", (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1, wait_cnt, (rtd_inl(0xB801B6B8)-time3),MEMC_Lib_get_memc_freeze_status_flag());
		}
		//pre_clk_state = enable;
		up(&MEMC_CLK_Semaphore);

		pr_notice("[%s] MUTEX UP@%x\n", __FUNCTION__, rtd_inl(0xB801B6B8));


#endif

	pr_notice("[jerry_Scaler_MEMC_MEMC_CLK_OnOff_04][time = %d][,%d,%d,%d,][%d][%d]\n", (rtd_inl(0xB801B6B8)-time1)/90, ME_enable, MC_enable, bMute, ((rtd_inl(0xb8028100)>>13)&0x1),MEMC_Lib_get_memc_PowerSaving_Mode());

	return 0;
}

void Scaler_MEMC_Bypass_On(unsigned char b_isBypass){
#ifndef CONFIG_MEMC_BYPASS

	ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
	unsigned int count = 100;
	unsigned char needUpdate = 0;

    ppoverlay_double_buffer_ctrl2_RBUS ppoverlay_double_buffer_ctrl2_reg;
    ppoverlay_double_buffer_ctrl2_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
    ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 1;
    IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);

    rtd_printk(KERN_EMERG, "VPQ","Scaler_MEMC_Bypass_On (%d)\n", b_isBypass);
#ifndef CONFIG_MEMC_BYPASS
    memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);

	if((b_isBypass && (memc_mux_ctrl_reg.memc_outmux_sel == 1)) ||
	   (!b_isBypass && (memc_mux_ctrl_reg.memc_outmux_sel == 0))){
		   needUpdate = 1;
		}

	if(!(Scaler_MEMC_Get_First_Run_FBG_enable() || Scaler_MEMC_Get_instanboot_resume_Done() || Scaler_MEMC_Get_snashop_resume_Done()))
	{//memc initial ready case need to run
		if(b_isBypass && (memc_mux_ctrl_reg.memc_outmux_sel == 1)){
			vbe_disp_set_dtgM2uzu_lowdelay_mode(0);
		}
		else if ((b_isBypass == 0) && (memc_mux_ctrl_reg.memc_outmux_sel == 0)){
			vbe_disp_set_dtgM2uzu_lowdelay_mode(0);
		}
	}

	if(needUpdate){
	if(b_isBypass)
		memc_mux_ctrl_reg.memc_outmux_sel = 0;
	else
		memc_mux_ctrl_reg.memc_outmux_sel = 1;
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, memc_mux_ctrl_reg.regValue);
	}
#endif
	if(needUpdate){
	//set apply
	ppoverlay_double_buffer_ctrl2_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);

	while((ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set)&& --count){
		ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		msleep(10);
		}
	}

	if(b_isBypass==0){
        vbe_disp_set_dtgM2uzu_lowdelay_mode(1);
    }
	else{
        vbe_disp_set_dtgM2uzu_lowdelay_mode(2);
    }

#ifdef ENABLE_IMD_PST_SMOOTHTOGGLE
       if((b_isBypass) && (vsc_get_adaptivestream_flag(SLR_MAIN_DISPLAY))){
               rtd_printk(KERN_NOTICE, "VSC","Scaler_MEMC_Bypass_On, set pst lowdelay mode\n");
               scaler_vsc_set_adaptive_pst_lowdelay_mode(1);
       }
#endif

    //fix me: temprory hack code, due to uncertainly rule about uzu120,
    //only confirm if memc enable, we dont enter this mode.
    if(b_isBypass==0){
        extern void drvif_color_ultrazoom_uzu_4k_120_mode(unsigned char x);
        drvif_color_ultrazoom_uzu_4k_120_mode(0);
    }
#endif
}

unsigned char Scaler_MEMC_get_Bypass_Status(void)
{
	ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
	memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	if(memc_mux_ctrl_reg.memc_outmux_sel)
		return FALSE;
	else
		return TRUE;
}
void Scaler_MEMC_MC_Set_MEMBoundary(unsigned int  nDownlimit,unsigned int nUplimit)
{
	//rtd_printk(KERN_EMERG, TAG_NAME, "Scaler_MEMC_MC_Set_MEMBoundary= %x, %x\n", nDownlimit, nUplimit);
	#if 0
	IoReg_Write32(MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg, MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_up_dma_up_limit(nUplimit));
	IoReg_Write32(MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg, MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_low_dma_low_limit(nDownlimit));

	IoReg_Write32(MEMC_MC_DMA_MC_HF_DMA_WR_Rule_check_up_reg, MEMC_MC_DMA_MC_HF_DMA_WR_Rule_check_up_dma_up_limit(nUplimit));
	IoReg_Write32(MEMC_MC_DMA_MC_HF_DMA_WR_Rule_check_low_reg, MEMC_MC_DMA_MC_HF_DMA_WR_Rule_check_low_dma_low_limit(nDownlimit));

	IoReg_Write32(MEMC_MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_reg, MEMC_MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_dma_up_limit(nUplimit));
	IoReg_Write32(MEMC_MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_reg, MEMC_MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_dma_low_limit(nDownlimit));

	IoReg_Write32(MEMC_MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_reg, MEMC_MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_dma_up_limit(nUplimit));
	IoReg_Write32(MEMC_MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_reg, MEMC_MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_dma_low_limit(nDownlimit));

	IoReg_Write32(MEMC_MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_reg, MEMC_MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_dma_up_limit(nUplimit));
	IoReg_Write32(MEMC_MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_reg, MEMC_MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_dma_low_limit(nDownlimit));

	IoReg_Write32(MEMC_MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_reg, MEMC_MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_dma_up_limit(nUplimit));
	IoReg_Write32(MEMC_MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_reg, MEMC_MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_dma_low_limit(nDownlimit));
	#else
	IoReg_Write32(MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg, nUplimit);
	IoReg_Write32(MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg, nDownlimit);

	IoReg_Write32(MC_DMA_MC_HF_DMA_WR_Rule_check_up_reg, nUplimit);
	IoReg_Write32(MC_DMA_MC_HF_DMA_WR_Rule_check_low_reg, nDownlimit);

	IoReg_Write32(MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_reg, nUplimit);
	IoReg_Write32(MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_reg, nDownlimit);

	IoReg_Write32(MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_reg, nUplimit);
	IoReg_Write32(MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_reg, nDownlimit);

	IoReg_Write32(MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_reg, nUplimit);
	IoReg_Write32(MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_reg, nDownlimit);

	IoReg_Write32(MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_reg, nUplimit);
	IoReg_Write32(MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_reg, nDownlimit);
	#endif
}
void Scaler_MEMC_allocate_memory(void){
	//unsigned int vir_addr;/*, phy_addr_kme, phy_addr_kmc00, phy_addr_kmc01;*/
#if 1

	unsigned int memc_size = 0;
	unsigned int memc_addr = 0;
	#ifdef CONFIG_BW_96B_ALIGNED
	unsigned int memc_addr_aligned = 0;
	#endif
	memc_size = carvedout_buf_query(CARVEDOUT_SCALER_MEMC, (void *)&memc_addr);
	#ifdef CONFIG_BW_96B_ALIGNED
	memc_addr_aligned = dvr_memory_alignment((unsigned long)memc_addr, KMEMC_TOTAL_SIZE);
	if (memc_addr == 0 || memc_size == 0  || memc_addr_aligned==0) {
		rtd_printk(KERN_EMERG, TAG_NAME,"[%s %d] ERR : %x %x %x\n", __func__, __LINE__, memc_addr, memc_size,memc_addr_aligned);
		return;
	}
	#else
	if (memc_addr == 0 || memc_size == 0) {
		rtd_printk(KERN_EMERG, TAG_NAME,"[%s %d] ERR : %x %x\n", __func__, __LINE__, memc_addr, memc_size);
		return;
	}
	#endif

	#ifdef CONFIG_BW_96B_ALIGNED
	gphy_addr_kme = memc_addr_aligned;
	#else
	gphy_addr_kme = memc_addr;
	#endif
	gphy_addr_kmc00 = gphy_addr_kme + KME_TOTAL_SIZE;
	gphy_addr_kmc01 = gphy_addr_kmc00 + MEMC_KMC_00_START_TOTAL_SIZE;
	rtd_printk(KERN_EMERG, TAG_NAME, "KME start address = %x, %x, %x\n", gphy_addr_kme,memc_size,KMEMC_TOTAL_SIZE);
	rtd_printk(KERN_EMERG, TAG_NAME, "KMC00 start address = %x\n", gphy_addr_kmc00);
	rtd_printk(KERN_EMERG, TAG_NAME, "KMC01 start address = %x\n", gphy_addr_kmc01);

	if(KME_TOTAL_SIZE > memc_size){
		rtd_printk(KERN_EMERG, TAG_NAME, "[KME_TOTAL_SIZE] setting error");
		return;
	}

	//ME memory boundary
	IoReg_Write32(DBUS_WRAPPER_Me_downlimit_addr_reg, gphy_addr_kme);
	IoReg_Write32(DBUS_WRAPPER_Me_uplimit_addr_reg, (gphy_addr_kme + KME_TOTAL_SIZE));
	//MC memory boundary
        Scaler_MEMC_MC_Set_MEMBoundary(gphy_addr_kmc00, (gphy_addr_kmc00 + KMC_TOTAL_SIZE));
	//IoReg_Write32(MEMC_DBUS_WRAP_Mc_downlimit_addr_reg, gphy_addr_kmc00);
	//IoReg_Write32(MEMC_DBUS_WRAP_Mc_uplimit_addr_reg, (gphy_addr_kmc00 + KMC_TOTAL_SIZE));
	//IoReg_Write32(MEMC_DBUS_WRAP_Mc_uplimit_addr_reg, (gphy_addr_kme + memc_size));

#else
	unsigned char	*m_pCacheStartAddr_kme = NULL;
	unsigned int 	m_allocate_memory_kme = 0;
	unsigned char	*m_pCacheStartAddr_kmc00 = NULL;
	unsigned int 	m_allocate_memory_kmc00 = 0;

	rtd_printk(KERN_ERR, TAG_NAME, "+++Scaler_MEMC_allocate_memory+++\n");

	m_pCacheStartAddr_kme = (unsigned char *)dvr_malloc_specific(KME_TOTAL_SIZE, GFP_DCU2_FIRST);
	if(m_pCacheStartAddr_kme == NULL){
	rtd_printk(KERN_ERR, TAG_NAME, "[ERROR]Allocate DCU2 size=%x fail\n",KME_TOTAL_SIZE);
	BUG();//add kernel crash function when cma not enough
	return FALSE;
	}
	m_allocate_memory_kme = (unsigned int)dvr_to_phys((void*)m_pCacheStartAddr_kme);

	m_pCacheStartAddr_kmc00 = (unsigned char *)dvr_malloc_specific(KMC_TOTAL_SIZE, GFP_DCU2_FIRST);
	if(m_pCacheStartAddr_kmc00 == NULL){
	rtd_printk(KERN_ERR, TAG_NAME, "[ERROR]Allocate DCU2 size=%x fail\n",KMC_TOTAL_SIZE);
	BUG();//add kernel crash function when cma not enough
	return FALSE;
	}
	m_allocate_memory_kmc00 = (unsigned int)dvr_to_phys((void*)m_pCacheStartAddr_kmc00);

	gphy_addr_kme = m_allocate_memory_kme;
	gphy_addr_kmc00 = m_allocate_memory_kmc00;
	gphy_addr_kmc01 = gphy_addr_kmc00 + MEMC_KMC_00_START_TOTAL_SIZE;

	//ME memory boundary
	IoReg_Write32(MEMC_DBUS_WRAP_Me_downlimit_addr_reg, gphy_addr_kme);
	IoReg_Write32(MEMC_DBUS_WRAP_Me_uplimit_addr_reg, (gphy_addr_kme + KME_TOTAL_SIZE));
	//MC memory boundary
	IoReg_Write32(MEMC_DBUS_WRAP_Mc_downlimit_addr_reg, gphy_addr_kmc00);
	IoReg_Write32(MEMC_DBUS_WRAP_Mc_uplimit_addr_reg, (gphy_addr_kmc00 + KMC_TOTAL_SIZE));

	rtd_printk(KERN_NOTICE, TAG_NAME,  "KME_TOTAL_SIZE=%x\n", KME_TOTAL_SIZE);
	rtd_printk(KERN_NOTICE, TAG_NAME,  "KMC_TOTAL_SIZE=%x\n", KMC_TOTAL_SIZE);
	rtd_printk(KERN_NOTICE, TAG_NAME,  "MEMC_KMC_00_START_TOTAL_SIZE=%x\n", MEMC_KMC_00_START_TOTAL_SIZE);
	rtd_printk(KERN_NOTICE, TAG_NAME,  "MEMC_KMC_01_START_TOTAL_SIZE=%x\n", MEMC_KMC_01_START_TOTAL_SIZE);

	rtd_printk(KERN_NOTICE, TAG_NAME,  "gphy_addr_kme=%x\n", gphy_addr_kme);
	rtd_printk(KERN_NOTICE, TAG_NAME,  "gphy_addr_kmc00=%x\n", gphy_addr_kmc00);
	rtd_printk(KERN_NOTICE, TAG_NAME,  "gphy_addr_kmc01=%x\n", gphy_addr_kmc01);
#endif
}

void Scaler_MEMC_initial_Case(void){
	// MEMC 4k60 in, 4k60 out
	int ret;
	SCALER_MEMC_DMASTARTADDRESS_T* memc_dma_address_info;
	unsigned int ulCount = 0;
	VPQ_MEMC_INPUT_FORMAT input_format;
	VPQ_MEMC_OUTPUT_FORMAT output_format;
	ppoverlay_memcdtg_dv_den_start_end_RBUS memcdtg_dv_den_start_end_reg;

	ret=0;

	memcdtg_dv_den_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_memcdtg_DV_DEN_Start_End_reg);
#ifdef CONFIG_MEMC_BYPASS
	//memcdtg_dv_den_start_end_reg.memcdtg_dv_den_sta = Get_DISP_DEN_STA_VPOS();
	//memcdtg_dv_den_start_end_reg.memcdtg_dv_den_end = Get_DISP_DEN_END_VPOS();
	return;
#else // memcdtg start position should sync to MEMC HW
	memcdtg_dv_den_start_end_reg.memcdtg_dv_den_sta = 45;
	memcdtg_dv_den_start_end_reg.memcdtg_dv_den_end = 2205;
#endif
	IoReg_Write32(PPOVERLAY_memcdtg_DV_DEN_Start_End_reg, memcdtg_dv_den_start_end_reg.regValue);

	fw_scaler_dtg_double_buffer_apply();

	//MEMC disp_CLK Init
	Scaler_MEMC_CLK();
	memc_dma_address_info = (SCALER_MEMC_DMASTARTADDRESS_T*)Scaler_GetShareMemVirAddr(SCALERIOC_MEMC_INITIALIZATION);
	ulCount = sizeof(SCALER_MEMC_DMASTARTADDRESS_T) / sizeof(unsigned int);

	//MEMC CLK check
	if(Scaler_ME_CLK_Check() == FALSE){
		pr_notice("/***   [%s][%d]MEMC_clock_check = false !! Do Scaler_MEMC_CLK_Enable   ***/\n\r", __FUNCTION__, __LINE__);
		Scaler_MEMC_CLK_Enable();
	}

	memc_dma_address_info->ME_start_addr= gphy_addr_kme;
	memc_dma_address_info->MC00_start_addr = gphy_addr_kmc00;
	memc_dma_address_info->MC01_start_addr = gphy_addr_kmc01;
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	//change endian
	memc_dma_address_info->ME_start_addr = htonl(memc_dma_address_info->ME_start_addr);
	memc_dma_address_info->MC00_start_addr = htonl(memc_dma_address_info->MC00_start_addr);
	memc_dma_address_info->MC01_start_addr = htonl(memc_dma_address_info->MC01_start_addr);

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_INITIALIZATION, 0, 0))){
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]ret=%d, SCALERIOC_MEMC_INITIALIZATION RPC fail !!!\n", ret);
	}
#else
	Scaler_MEMC_Initialize(memc_dma_address_info->ME_start_addr, memc_dma_address_info->MC00_start_addr, memc_dma_address_info->MC01_start_addr);
#endif
	input_format = VPQ_INPUT_2D;
	output_format = VPQ_OUTPUT_2D;
	//set MEMC in,out use case
	Scaler_MEMC_SetInOutUseCase(VPQ_INPUT_3840X2160, VPQ_OUTPUT_3840X2160, input_format, output_format);
	//set MEMC in/out frame rate
	Scaler_MEMC_SetInOutFrameRate();
}

unsigned char Get_MEMC_Enable_Dynamic(void);

/*api which have protect by forcebg_semaphore*/
void Scaler_MEMC_fbg_control(void){

        // [ML3RTANDN-525]follow DIC Yan-De's suggestion to delay four frame
        // to get MEME fully ready after DC resume
        unsigned int frame_delay = 0;
        if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_V_FREQ) > 0)
            frame_delay = (10000/Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_V_FREQ)) << 2;

	if(MEMC_First_Run_FBG_enable == _ENABLE){
		// msleep(50);
                msleep(frame_delay);		
		Scaler_MEMC_output_force_bg_enable(FALSE);
		MEMC_First_Run_FBG_enable = _DISABLE;
		pr_notice("[MEMC]MEMC_First_Run_FBG_enable disable FBG!! Delay = %dms\n",frame_delay);
	}
	if(MEMC_instanboot_resume_Done == 1){
		// msleep(50);
		resume_repeat_mode_check = 1;
                msleep(frame_delay);
		Scaler_MEMC_output_force_bg_enable(FALSE);
		MEMC_instanboot_resume_Done = 0;
                pr_notice("[MEMC]MEMC_instanboot_resume_Done disable FBG!! Delay = %dms\n",frame_delay);
	}
	if(MEMC_snashop_resume_Done == 1){
		Scaler_MEMC_output_force_bg_enable(FALSE);
		MEMC_snashop_resume_Done = 0;
		pr_notice("[MEMC]MEMC_snashop_resume_Done disable FBG!!\n");
	}
//set MEMC in, out frame rate
	//Scaler_MEMC_SetInOutFrameRate();//Can not send RPC here
	pr_notice("[MEMC]MEMC_instanboot_resume_Done = %d\n", MEMC_instanboot_resume_Done);
}

extern int vbe_dtg_memec_bypass_switch(void);
void Scaler_MEMC_Handler(){
	VPQ_MEMC_INPUT_FORMAT input_format;
	VPQ_MEMC_OUTPUT_FORMAT output_format;
	unsigned char Mc_clk_state;

	Mc_clk_state = ((IoReg_Read32(SYS_REG_SYS_CLKEN3_reg)>>31)&0x1);

	if(MEMC_First_Run_Done == 0){
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC][init]%s %d [%d]\n",__func__,__LINE__,MEMC_First_Run_Done); 
		//memc initial RPC
		MEMC_First_Run_Done = 1;
		MEMC_First_Run_FBG_enable = _ENABLE;
		Scaler_MEMC_output_force_bg_enable(TRUE);
		Scaler_MEMC_initial_Case();
		if(MEMC_First_Run_force_SetInOutUseCase_Done == 0){
			MEMC_First_Run_force_SetInOutUseCase_Done=1;
		}
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC][init]initial in handler!![%d]\n",MEMC_First_Run_Done);		
	}
#if 0
	// 2D, 3D switch
	if((get_3D_mode_enable() == true) && (Get_PANEL_3D_LINE_ALTERNATIVE_SUPPORT_ENABLE() == true)){
		//K2L on support PR 3D
		input_format = VPQ_INPUT_3D_LBL;
		output_format = VPQ_OUTPUT_3D_PR;
	}
	else{
		input_format = VPQ_INPUT_2D;
		output_format = VPQ_OUTPUT_2D;
	}

#else
	input_format = VPQ_INPUT_2D;
	output_format = VPQ_OUTPUT_2D;
#endif

	if(MEMC_instanboot_resume_Done == 1){
		Scaler_MEMC_SetInOutUseCase(VPQ_INPUT_3840X2160, VPQ_OUTPUT_3840X2160, VPQ_INPUT_3D_LBL, VPQ_OUTPUT_3D_PR);
		//msleep(100);//Remove by Will for performance
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]reset usecase (instanboot)!!\n");
	}

	//set MEMC in,out use case
	Scaler_MEMC_SetInOutUseCase(VPQ_INPUT_3840X2160, VPQ_OUTPUT_3840X2160, input_format, output_format);

	//Instanboot to initial phase table
	if(MEMC_instanboot_resume_Done == 1){
		Scaler_MEMC_Instanboot_InitPhaseTable(1);
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]initial phase table (instanboot)!!\n");
	}
	//set MEMC in, out frame rate
	//Scaler_MEMC_SetInOutFrameRate();//Move after disable force bg

	//MEMC mux
	if (Mc_clk_state == 1)
		Scaler_MEMC_outMux(TRUE,TRUE);

	rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]Scaler_MEMC_Handler Done!!\n");
}
#ifdef MEMC_DYNAMIC_ONOFF
void Scaler_ME_OnOff(UINT8 enable)
{
	unsigned int enable_bit;
	if(enable == TRUE)
		enable_bit = 0x00100000;
	else
		enable_bit = 0x0;



	IoReg_Mask32(me_00_write_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_01_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_02_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_03_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_04_write_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_05_write_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_06_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_07_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_08_write_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_09_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_10_write_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_11_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_12_write_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_13_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_14_write_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(me_15_read_enable_ADDR, 0xffefffff, enable_bit);
}

void Scaler_MC_OnOff(UINT8 enable){
	unsigned int enable_bit;
	if(enable == TRUE)
		enable_bit = 0x00100000;
	else
		enable_bit = 0x0;

	IoReg_Mask32(mc_00_write_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(mc_00_write_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(mc_01_write_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(mc_02_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(mc_03_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(mc_04_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(mc_05_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(mc_06_read_enable_ADDR, 0xffefffff, enable_bit);
	IoReg_Mask32(mc_07_read_enable_ADDR, 0xffefffff, enable_bit);
}

static UINT8 no_signal_MEMC_outputbg_check = 0;
void Scaler_MEMC_Booting_NoSignal_Check_OutputBG(UINT8 enable){
	//check MEMC out bg when not run scaler
	ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
	ppoverlay_double_buffer_ctrl2_RBUS memc_double_buffer_ctrl_reg;
	memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);

	//add checking no signal status @Crixus 20160112
	if(Scaler_MEMC_Get_First_Run_FBG_enable() || Scaler_MEMC_Get_instanboot_resume_Done() || Scaler_MEMC_Get_snashop_resume_Done()){
		if((enable == 0) && (memc_mux_ctrl_reg.memc_out_bg_en == 1)){
			memc_mux_ctrl_reg.memc_out_bg_en = 0;
			no_signal_MEMC_outputbg_check = 1;
			Scaler_MEMC_Handler();
			memc_mux_ctrl_reg.memcdtg_golden_vs = 0;
			pr_notice("\r\n####[MEMC]No signal and disable MEMC out bg\n");
		}
		else{
			if(no_signal_MEMC_outputbg_check == 1){
				if((enable == 1) && (memc_mux_ctrl_reg.memc_out_bg_en == 0)){
					memc_mux_ctrl_reg.memc_out_bg_en = 1;
					memc_mux_ctrl_reg.memcdtg_golden_vs = 1;
					no_signal_MEMC_outputbg_check = 0;
					pr_notice("\r\n####[MEMC]No signal and enable MEMC out bg\n");
				}
			}
		}
		IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, memc_mux_ctrl_reg.regValue);

		//set apply
		memc_double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
		memc_double_buffer_ctrl_reg.uzudtgreg_dbuf_set = 1;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, memc_double_buffer_ctrl_reg.regValue);
	}
}


static UINT8 MEMC_Dynamic_OnOff = 1;//default MEMC enable
extern VSC_INPUT_TYPE_T Get_DisplayMode_Src(unsigned char display);
extern unsigned char rtk_run_scaler(unsigned char display, VSC_INPUT_TYPE_T inputType, KADP_VSC_OUTPUT_MODE_T outputMode);
void Scaler_MEMC_Dynamic_OnOff(){
	//MDOMAIN_CAP_Smooth_tog_ctrl_0_reg[1] => dummy bit to control dynamic MEMC on/off.

	//MEMC change to disable
	if((IoReg_Read32(MDOMAIN_CAP_Smooth_tog_ctrl_0_reg) & _BIT1) && (MEMC_Dynamic_OnOff == 1)){
		rtk_run_scaler(SLR_MAIN_DISPLAY, Get_DisplayMode_Src(SLR_MAIN_DISPLAY), KADP_VSC_OUTPUT_DISPLAY_MODE);
		Scaler_ME_OnOff(FALSE);
		Scaler_MC_OnOff(FALSE);
		Scaler_MEMC_outMux(TRUE,FALSE);
		MEMC_Dynamic_OnOff = 0;
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]Dynamic off!!!!\n");
	}
	//MEMC change to enable
	else if(!(IoReg_Read32(MDOMAIN_CAP_Smooth_tog_ctrl_0_reg) & _BIT1) && (MEMC_Dynamic_OnOff == 0)){
		rtk_run_scaler(SLR_MAIN_DISPLAY, Get_DisplayMode_Src(SLR_MAIN_DISPLAY), KADP_VSC_OUTPUT_DISPLAY_MODE);
		Scaler_ME_OnOff(TRUE);
		Scaler_MC_OnOff(TRUE);
		MEMC_Dynamic_OnOff = 1;
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]Dynamic on!!!!\n");
	}
}

UINT8 Scaler_MEMC_GetDynamicOnOff(void){
	return MEMC_Dynamic_OnOff;
}
#endif
/*api which have protect by forcebg_semaphore*/
void Scaler_MEMC_output_force_bg_enable(UINT8 enable){
	//MEMC enable, using MEMC out fbg
	ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl_reg;
	ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
	//UINT8 timeout = 0;

	rtd_printk(KERN_INFO, TAG_NAME, "%s,MEMC out FBG = %d\n", __FUNCTION__, enable);
	//enable UZU DTG double buffer.
	double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl_reg.uzudtgreg_dbuf_en = 1;
	double_buffer_ctrl_reg.uzudtg_dbuf_vsync_sel = 3;//using uzudtg vsync
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);
	//enable MEMC output fbg
	memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	memc_mux_ctrl_reg.memc_out_bg_en = enable;
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, memc_mux_ctrl_reg.regValue);
	//set apply
	double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl_reg.uzudtgreg_dbuf_set = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);
	double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
#if 0//remove msleep
	while(double_buffer_ctrl_reg.uzudtgreg_dbuf_set) {
		timeout++;
		msleep(10);
		double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
		if(timeout >= 5)
		break;
	}
	//disable UZU DTG double buffer.
	double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl_reg.uzudtgreg_dbuf_en = 0;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);
#endif
}

void Scaler_MEMC_set_output_bg_color(UINT16 color_r, UINT16 color_g, UINT16 color_b){
	ppoverlay_memc_mux_out1_color_value_gb_RBUS memc_mux_out1_color_value_gb_reg;
	ppoverlay_memc_mux_out1_color_value_r_RBUS memc_mux_out1_color_value_r_reg;

	memc_mux_out1_color_value_gb_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_reg);
	memc_mux_out1_color_value_r_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_reg);

	memc_mux_out1_color_value_gb_reg.out_y_g_value = color_g;
	memc_mux_out1_color_value_gb_reg.out_cb_b_value = color_b;
	memc_mux_out1_color_value_r_reg.out_cr_r_value = color_r;

	IoReg_Write32(PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_reg, memc_mux_out1_color_value_gb_reg.regValue);
	IoReg_Write32(PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_reg, memc_mux_out1_color_value_r_reg.regValue);
}

void Scaler_MEMC_SetMotionType(VPQ_MEMC_TYPE_T motion)
{
	MEMC_motion_type = motion;
}
VPQ_MEMC_TYPE_T Scaler_MEMC_GetMotionType(void)
{
	return MEMC_motion_type;
}
void Scaler_MEMC_Set_CheckMEMC_Outbg(unsigned char mode)
{
	AVD_Unstable_Check_MEMC_OutBG_flag = mode;
}
unsigned char Scaler_MEMC_Get_CheckMEMC_Outbg(void)
{
	return AVD_Unstable_Check_MEMC_OutBG_flag;
}
unsigned char Scaler_MEMC_Get_First_Run_FBG_enable(void)
{
	return MEMC_First_Run_FBG_enable;
}
unsigned char Scaler_MEMC_Get_instanboot_resume_Done(void)
{
	return MEMC_instanboot_resume_Done;
}
unsigned char Scaler_MEMC_Get_snashop_resume_Done(void)
{
	return MEMC_snashop_resume_Done;
}




int Scaler_MEMC_set_cinema_mode_en(unsigned char bEn)
{
	int ret = 0;
	#ifdef CONFIG_MEMC_TASK_QUEUE
	SCALER_MEMC_TASK_T task;
	#endif

	rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]fwif_color_set_cinema_mode_en, bEn = %d\n", bEn);
#ifdef CONFIG_RTK_KDEV_DEBUG_ISR
	if (0 != (ret = Scaler_SendRPC(SCALERIOC_MEMC_SETCINEMAMODE, bEn, 1))){
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]ret=%d, SCALERIOC_MEMC_SETCINEMAMODE RPC fail !!!\n", ret);
	}
#else
	#ifndef CONFIG_MEMC_TASK_QUEUE
		if(!Scaler_MEMC_GetMEMC_Enable())
			return 0;
	Scaler_MEMC_SetCinemaMode(bEn);
#else

		task.type = SCALERIOC_MEMC_SETCINEMAMODE;
		task.data.value = bEn;
		Scaler_MEMC_PushTask(&task);
	#endif
#endif
	return ret;
}

BOOL ScalerMEMC_EnablePowerSave(void)
{

	_clues* SmartPic_clue = (_clues *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_SMARTPIC_CLUS);
	_RPC_clues* RPC_SmartPic_clue = (_RPC_clues *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_RPC_SMARTPIC_CLUS);

	if(SmartPic_clue == NULL || RPC_SmartPic_clue == NULL)
		return 1;

	if(RPC_SmartPic_clue->prePowerSaveStatus == PS_OFF)
	{
		if(Scaler_MEMC_SetPowerSaveOn())
			return 1;

		if(Scaler_MEMC_GetMEMC_Mode() != MEMC_OFF)
		{
			Scaler_MEMC_SetMEMCFrameRepeatEnable(1);
		}

		RPC_SmartPic_clue->prePowerSaveStatus = PS_ON;
	}

	return 0;

}

BOOL ScalerMEMC_DisablePowerSave(void)
{

	//_clues* SmartPic_clue = (_clues *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_SMARTPIC_CLUS);
	_RPC_clues* RPC_SmartPic_clue = (_RPC_clues *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_RPC_SMARTPIC_CLUS);

	if(RPC_SmartPic_clue == NULL)
		return 1;

	if(RPC_SmartPic_clue->prePowerSaveStatus == PS_ON)
	{
		if(Scaler_MEMC_SetPowerSaveOff())
			return 1;

		if(Scaler_MEMC_GetMEMC_Mode() != MEMC_OFF)
		{
			Scaler_MEMC_SetMEMCFrameRepeatEnable(0);
		}

		RPC_SmartPic_clue->prePowerSaveStatus = PS_OFF;
	}

	return 0;

}

/*******************************************************************************
****************************VPQ MEMC DEVICE************************************
*******************************************************************************/
#ifdef CONFIG_PM
static int vpq_memc_suspend (struct device *p_dev)
{
	printk(KERN_NOTICE "%s %d\n",__func__,__LINE__);
	return 0;
}

static int vpq_memc_resume (struct device *p_dev)
{
	printk(KERN_NOTICE "%s %d\n",__func__,__LINE__);
	return 0;
}
#ifdef CONFIG_HIBERNATION
static int vpq_memc_suspend_snashop (struct device *p_dev)
{
	MEMC_First_Run_Done = 0;
	MEMC_First_Run_force_SetInOutUseCase_Done=0;
	printk(KERN_NOTICE "%s %d [,%x,%x,%x,]\n",__func__,__LINE__, rtd_inl(0xb8099018), rtd_inl(0xb809d008), rtd_inl(0xb809d5fc));
	return 0;
}

static int vpq_memc_resume_snashop (struct device *p_dev)
{
	printk(KERN_NOTICE "%s %d [,%x,%x,%x,][%d][%d]\n",__func__,__LINE__, rtd_inl(0xb8099018), rtd_inl(0xb809d008), rtd_inl(0xb809d5fc),MEMC_First_Run_Done,MEMC_First_Run_force_SetInOutUseCase_Done);
	if(MEMC_First_Run_Done == 0){
		//memc initial RPC		
		MEMC_First_Run_Done = 1;
		MEMC_First_Run_FBG_enable = _ENABLE;
		Scaler_MEMC_output_force_bg_enable(TRUE);
		Scaler_MEMC_initial_Case();	
		if(MEMC_First_Run_force_SetInOutUseCase_Done == 0){//need to trigger the Scaler_MEMC_SetInOutUseCase again when the snapshop on!!
			MEMC_First_Run_force_SetInOutUseCase_Done=1;
		}
		rtd_printk(KERN_DEBUG, TAG_NAME, "[MEMC]initial in handler!!\n");
	}
	printk(KERN_NOTICE "%s %d [,%x,%x,%x,][%d][%d]\n",__func__,__LINE__, rtd_inl(0xb8099018), rtd_inl(0xb809d008), rtd_inl(0xb809d5fc), MEMC_First_Run_Done,MEMC_First_Run_force_SetInOutUseCase_Done);
	return 0;
}
#endif

VPQ_MEMC_SUSPEND_RESUME_T vpq_memc_suspend_resume;
void vpq_memc_disp_suspend_snashop(void){
#if 1
	printk(KERN_NOTICE "%s %d [,%x,%x,%x,]\n",__func__,__LINE__, rtd_inl(0xb8099018), rtd_inl(0xb809d008), rtd_inl(0xb809d5fc));
	//MEMC mux
	vpq_memc_suspend_resume.MEMC_MUX_MEMC_MUX_FUNC_CTRL_SUSPEND = IoReg_Read32(MEMC_MUX_MEMC_MUX_FUNC_CTRL_reg);
	//FBG
	vpq_memc_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_SUSPEND = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	//clock
	vpq_memc_suspend_resume.SYS_REG_SYS_DISPCLKSEL_SUSPEND = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
	//vpq_memc_suspend_resume.MEMC_LATENCY01 = IoReg_Read32(MEMC_LATENCY01_ADDR);
	//vpq_memc_suspend_resume.MEMC_LATENCY02 = IoReg_Read32(MEMC_LATENCY02_ADDR);   //  remove DC2

	if(Scaler_MEMC_CLK_Check() == FALSE){
		printk(KERN_NOTICE "%s %d, Scaler_MEMC_CLK_Check() == FALSE\n",__func__,__LINE__);
		Scaler_MEMC_CLK_Enable();
	}

	//ME memory boundary
	vpq_memc_suspend_resume.MEMC_DBUS_WRAP_ME_DOWNLIMIT = IoReg_Read32(DBUS_WRAPPER_Me_downlimit_addr_reg);
	vpq_memc_suspend_resume.MEMC_DBUS_WRAP_ME_UPLIMIT = IoReg_Read32(DBUS_WRAPPER_Me_uplimit_addr_reg);
	//MC memory boundary
	vpq_memc_suspend_resume.MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_low_dma_low_limit= IoReg_Read32(MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg);
	vpq_memc_suspend_resume.MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_up_dma_up_limit= IoReg_Read32(MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg);
#endif
}

void vpq_memc_disp_resume_snashop(void){
#if 1
	ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl2_reg;
	int timeout = 0xff;
	printk(KERN_NOTICE "%s %d [,%x,%x,%x,]\n",__func__,__LINE__, rtd_inl(0xb8099018), rtd_inl(0xb809d008), rtd_inl(0xb809d5fc));

	//MEMC mux
	IoReg_Write32(MEMC_MUX_MEMC_MUX_FUNC_CTRL_reg, vpq_memc_suspend_resume.MEMC_MUX_MEMC_MUX_FUNC_CTRL_SUSPEND);
	//FBG
	double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 1;
	double_buffer_ctrl2_reg.uzudtg_dbuf_vsync_sel = 3;
	//enable double buffer
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl2_reg.regValue);

#ifdef CONFIG_MEMC_BYPASS
	vpq_memc_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_SUSPEND = vpq_memc_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_SUSPEND;
#else
	vpq_memc_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_SUSPEND = vpq_memc_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_SUSPEND | 0x00001000;
#endif
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, vpq_memc_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_SUSPEND);

	double_buffer_ctrl2_reg.uzudtgreg_dbuf_set = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl2_reg.regValue);
	//wait double buffer done
	double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	while(double_buffer_ctrl2_reg.uzudtgreg_dbuf_set && timeout--){
		double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
		mdelay(1);
	}
	//disable double buffer
	double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl2_reg.regValue);

	//clock
	IoReg_Write32(SYS_REG_SYS_DISPCLKSEL_reg, vpq_memc_suspend_resume.SYS_REG_SYS_DISPCLKSEL_SUSPEND);
	//IoReg_Write32(MEMC_LATENCY01_ADDR, vpq_memc_suspend_resume.MEMC_LATENCY01);
	//IoReg_Write32(MEMC_LATENCY02_ADDR, vpq_memc_suspend_resume.MEMC_LATENCY02);  // remove DC2

	if(Scaler_MEMC_CLK_Check() == FALSE){		
		printk(KERN_NOTICE "%s %d, Scaler_MEMC_CLK_Check() == FALSE\n",__func__,__LINE__);
		Scaler_MEMC_CLK_Enable();
	}
MEMC_LibSet_MCDMA_DB_en(0);	
	rtd_clearbits(0xb8099460, _BIT0); //dma_off mc w
	rtd_clearbits(0xb80994dc, _BIT0); //dma_off mc w
	rtd_clearbits(0xb809ae1c, _BIT0); //dma_off mc r
	rtd_clearbits(0xb809ae3c, _BIT0); //dma_off mc r
	rtd_clearbits(0xb809ae5c, _BIT0); //dma_off mc r
	rtd_clearbits(0xb809ae7c, _BIT0); //dma_off mc r

	printk(KERN_NOTICE "===== === %s %d  ======== \n",__func__,__LINE__);
	printk(KERN_NOTICE "[MEMC][,%x,%x,%x,%x]\n",vpq_memc_suspend_resume.MEMC_DBUS_WRAP_ME_DOWNLIMIT,vpq_memc_suspend_resume.MEMC_DBUS_WRAP_ME_UPLIMIT, 
			vpq_memc_suspend_resume.MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_low_dma_low_limit,vpq_memc_suspend_resume.MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_up_dma_up_limit);
	printk(KERN_NOTICE "[MEMC][db]=[,%x,%x]\n",IoReg_Read32(0xb80994F0),IoReg_Read32(0xb809AEA8));
	printk(KERN_NOTICE "[MEMC][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));
	
#if 0
	//b8099414~b8099450 (LF_WDMA)
	for (i = 0xb8099414; i <=0xb8099450; i=i+4)
	{
		printk(KERN_ERR "%x=%x\n", i, IoReg_Read32(i));
	}
	//b8099484~b80994C0 (HF_WDMA)	
	for (i = 0xb8099484; i <=0xb80994C0; i=i+4)
	{
		printk(KERN_ERR "%x=%x\n", i, IoReg_Read32(i));
	}
#endif		
	//ME memory boundary
	IoReg_Write32(DBUS_WRAPPER_Me_downlimit_addr_reg, vpq_memc_suspend_resume.MEMC_DBUS_WRAP_ME_DOWNLIMIT);
	IoReg_Write32(DBUS_WRAPPER_Me_uplimit_addr_reg, vpq_memc_suspend_resume.MEMC_DBUS_WRAP_ME_UPLIMIT);
	//MC memory boundary
	Scaler_MEMC_MC_Set_MEMBoundary(vpq_memc_suspend_resume.MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_low_dma_low_limit,vpq_memc_suspend_resume.MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_up_dma_up_limit);

	MEMC_snashop_resume_Done = 1;
	rtd_printk(KERN_NOTICE, TAG_NAME, "[MEMC]Snashop Resume done !!!\n");
#endif
}

extern void vbe_dtg_memec_bypass_switch_set(int mode);
void vpq_memc_disp_suspend_instanboot(void){

	UINT32 u32_interrupt_reg = 0;
	UINT32 u32_i,u32_j;
	printk(KERN_NOTICE "%s %d\n",__func__,__LINE__);

#ifdef CONFIG_MEMC_BYPASS
                return;
#endif

pr_notice("[jerry_Scaler_MEMC_Bypass_CLK_OnOff_JJJ][%x]\n", rtd_inl(0xb802e800));
	if(Scaler_ME_CLK_Check() == FALSE){
#if 1 //MEMC CLK OFF CTRL TASK
            Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);
#endif
	}

	#if 1 //YE Test ORI
	if(Scaler_MEMC_CLK_Check() == FALSE){		
		printk(KERN_NOTICE "%s %d, Scaler_MEMC_CLK_Check() == FALSE\n",__func__,__LINE__);
		return;
	} 
	#else //YE Test 50411 
	//for MEMC CLK duble check
	Scaler_MEMC_CLK_Check();
	#endif

	// disable interrupt
	//reg_kmc_int_en
	u32_interrupt_reg = IoReg_Read32(KMC_TOP__KMC_TOP_18_ADDR);
	u32_interrupt_reg &= 0xf0ffffff;
	IoReg_Write32(KMC_TOP__KMC_TOP_18_ADDR, u32_interrupt_reg);

	//reg_post_int_en
	u32_interrupt_reg = IoReg_Read32(KPOST_TOP__KPOST_TOP_08_ADDR);
	u32_interrupt_reg &= 0xfffffe1f;
	IoReg_Write32(KPOST_TOP__KPOST_TOP_08_ADDR, u32_interrupt_reg);

	rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_resume_FFF][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb802e800), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));

#if 1 

	//kmc_top
	//IPPRE
	//KMC_CPR_TOP0
	//KMC_CPR_TOP1
	//KMC_DM_TOP
	//IPPRE1
	//MC
	//if(rtd_inl(0xb802e4f0)==1)
	//MC2
	//MC_PQ_DECMP
	//LBMC
	//BBD
	//KMC_METER_TOP
	//KMC_DM_METER_TOP
	//KME_TOP
	//KME_VBUF_TOP
	//KME_ME1_TOP2
	//KME_ME1_TOP3
	//KME_ME1_TOP4
	//KME_ME1_TOP5
	//ME_SHARE_DMA
	//vpq_memc_suspend_resume.KME_SHARE_DMA__ME_SHARE_DMA_94 = IoReg_Read32(KME_SHARE_DMA__ME_SHARE_DMA_94_ADDR);
	//vpq_memc_suspend_resume.KME_SHARE_DMA__ME_SHARE_DMA_E0 = IoReg_Read32(KME_SHARE_DMA__ME_SHARE_DMA_E0_ADDR);
	//KME_LBME_TOP
	//KME_ME2_CALC1
	//KME_LOGO2
	//KME_IPME
	//KME_IPME1
	//KME_LOGO0
	//KME_LOGO1
	//KME_DM_TOP0
	//KME_DM_TOP1
	//KME_DM_TOP2
	//KME_DEHALO3
	//KME_ME1_TOP0
	//KME_ME1_TOP1
	//KME_LBME2_TOP
	//KME_ME2_VBUF_TOP
	//KME_ME2_CALC0
	//KME_ME1_TOP6
	//KME_ME1_TOP7
	//KME_ME1_TOP8
	//KME_ME1_TOP9
	//KME_DEHALO
	//KME_DEHALO2
	//KPOST_TOP
	//CRTC1
	//kphase
	//Hardware
	//Software
	//Software1

	//ME SHARE &  MC DMA

	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_CTRL = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_CTRL_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_NUM_BL = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_NUM_BL_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_LSTEP = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_LSTEP_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART0 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MSTART0_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART1 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MSTART1_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART2 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MSTART2_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART3 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MSTART3_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART4 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MSTART4_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART5 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MSTART5_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART6 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MSTART6_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART7 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MSTART7_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND0 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MEND0_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND1 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MEND1_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND2 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MEND2_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND3 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MEND3_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND4 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MEND4_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND5 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MEND5_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND6 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MEND6_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND7 = IoReg_Read32(ME_SHARE_DMA_IPME_WDMA_MEND7_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__ME1_RDMA0_CTRL = IoReg_Read32(ME_SHARE_DMA_ME1_RDMA0_CTRL_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__ME1_RDMA0_NUM_BL = IoReg_Read32(ME_SHARE_DMA_ME1_RDMA0_NUM_BL_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__ME2_RDMA0_CTRL = IoReg_Read32(ME_SHARE_DMA_ME2_RDMA0_CTRL_reg);
	// k6lp_bring_up //vpq_memc_suspend_resume.MESHARE__ME2_RDMA0_NUM_BL = IoReg_Read32(ME_SHARE_DMA_ME2_RDMA0_NUM_BL_reg);

	//MEMC mux
	vpq_memc_suspend_resume.MEMC_MUX_MEMC_MUX_FUNC_CTRL_SUSPEND = IoReg_Read32(MEMC_MUX_MEMC_MUX_FUNC_CTRL_reg);
	//FBG
	vpq_memc_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_SUSPEND = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	//clock
	vpq_memc_suspend_resume.SYS_REG_SYS_DISPCLKSEL_SUSPEND = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
	//vpq_memc_suspend_resume.MEMC_LATENCY01 = IoReg_Read32(MEMC_LATENCY01_ADDR);
	//vpq_memc_suspend_resume.MEMC_LATENCY02 = IoReg_Read32(MEMC_LATENCY02_ADDR);   //  remove DC2
	//ME memory boundary
	vpq_memc_suspend_resume.MEMC_DBUS_WRAP_ME_DOWNLIMIT = IoReg_Read32(DBUS_WRAPPER_Me_downlimit_addr_reg);
	vpq_memc_suspend_resume.MEMC_DBUS_WRAP_ME_UPLIMIT = IoReg_Read32(DBUS_WRAPPER_Me_uplimit_addr_reg);
	//MC memory boundary
	vpq_memc_suspend_resume.MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_low_dma_low_limit= MC_DMA_MC_LF_DMA_WR_Rule_check_low_get_dma_low_limit(IoReg_Read32(MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg));
	vpq_memc_suspend_resume.MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_up_dma_up_limit= MC_DMA_MC_LF_DMA_WR_Rule_check_up_get_dma_up_limit(IoReg_Read32(MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg));

	//vpq_memc_suspend_resume.MCDMA__MC_WDMA_DB_CTRL = 	vpq_memc_suspend_resume.MCDMA__MC_WDMA_DB_CTRL & 0xfffffffe;
	//vpq_memc_suspend_resume.MCDMA__MC_RDMA_DB_CTRL = vpq_memc_suspend_resume.MCDMA__MC_RDMA_DB_CTRL & 0xfffffffe;

	//MCDMA__MC DMA
	HAL_DM_SetKmc00WriteEnable(FALSE);//vpq_memc_suspend_resume.MCDMA__MC_LF_DMA_WR_Ctrl 	=	vpq_memc_suspend_resume.MCDMA__MC_LF_DMA_WR_Ctrl & 0xfffffffe;
	HAL_DM_SetKmc01WriteEnable(FALSE);//vpq_memc_suspend_resume.MCDMA__MC_HF_DMA_WR_Ctrl 	= 	vpq_memc_suspend_resume.MCDMA__MC_HF_DMA_WR_Ctrl & 0xfffffffe;
	HAL_DM_SetKmc04ReadEnable(FALSE); //vpq_memc_suspend_resume.MCDMA__MC_LF_I_DMA_RD_Ctrl 	= 	vpq_memc_suspend_resume.MCDMA__MC_LF_I_DMA_RD_Ctrl & 0xfffffffe;
	HAL_DM_SetKmc05ReadEnable(FALSE); //vpq_memc_suspend_resume.MCDMA__MC_HF_I_DMA_RD_Ctrl 	= 	vpq_memc_suspend_resume.MCDMA__MC_HF_I_DMA_RD_Ctrl & 0xfffffffe;
	HAL_DM_SetKmc06ReadEnable(FALSE); //vpq_memc_suspend_resume.MCDMA__MC_LF_P_DMA_RD_Ctrl 	= 	vpq_memc_suspend_resume.MCDMA__MC_LF_P_DMA_RD_Ctrl & 0xfffffffe;
	HAL_DM_SetKmc07ReadEnable(FALSE); //vpq_memc_suspend_resume.MCDMA__MC_HF_P_DMA_RD_Ctrl 	= 	vpq_memc_suspend_resume.MCDMA__MC_HF_P_DMA_RD_Ctrl & 0xfffffffe;

	//MESHARE__ME_DMA
	rtd_clearbits(ME_SHARE_DMA_ME_DMA_WR_Ctrl_reg, _BIT0);//vpq_memc_suspend_resume.MESHARE__ME_DMA_WR_Ctrl 	=	vpq_memc_suspend_resume.MESHARE__ME_DMA_WR_Ctrl & 0xfffffffe;
	rtd_clearbits(ME_SHARE_DMA_ME_DMA_RD_Ctrl_reg, _BIT0);//vpq_memc_suspend_resume.MESHARE__ME_DMA_RD_Ctrl 	=	vpq_memc_suspend_resume.MESHARE__ME_DMA_RD_Ctrl & 0xfffffffe;

	//MC DMA disable
	rtd_clearbits(KMC_DM_TOP__KMC_00_AGENT_ADDR, _BIT20);//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_00_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_00_AGENT & 0xffefffff;
	rtd_clearbits(KMC_DM_TOP__KMC_01_AGENT_ADDR, _BIT20);//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_01_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_01_AGENT & 0xffefffff;
	//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_02_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_02_AGENT & 0xffefffff;
	//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_03_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_03_AGENT & 0xffefffff;
	//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_04_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_04_AGENT & 0xffefffff;
	//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_05_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_05_AGENT & 0xffefffff;
	//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_06_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_06_AGENT & 0xffefffff;
	rtd_clearbits(KMC_DM_TOP__KMC_07_AGENT_ADDR, _BIT20);//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_07_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_07_AGENT & 0xffefffff;

	//MV DMA disable
	HAL_DM_SetKmv01WriteEnable(FALSE);//vpq_memc_suspend_resume.KME_DM_TOP2__MV01_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV01_AGENT & 0xffefffff;   IoReg_Read32(KME_DM_TOP2__MV01_AGENT_ADDR);
	HAL_DM_SetKmv02WriteEnable(FALSE);//vpq_memc_suspend_resume.KME_DM_TOP2__MV02_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV02_AGENT & 0xffefffff; 	IoReg_Read32(KME_DM_TOP2__MV02_AGENT_ADDR);
	HAL_DM_SetKmv03ReadEnable(FALSE); //vpq_memc_suspend_resume.KME_DM_TOP2__MV03_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV03_AGENT & 0xffefffff; 	IoReg_Read32(KME_DM_TOP2__MV03_AGENT_ADDR);
	HAL_DM_SetKmv04WriteEnable(FALSE);//vpq_memc_suspend_resume.KME_DM_TOP2__MV04_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV04_AGENT & 0xffefffff; 	IoReg_Read32(KME_DM_TOP2__MV04_AGENT_ADDR);
	HAL_DM_SetKmv05WriteEnable(FALSE);//vpq_memc_suspend_resume.KME_DM_TOP2__MV05_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV05_AGENT & 0xffefffff;	IoReg_Read32(KME_DM_TOP2__MV05_AGENT_ADDR);
	HAL_DM_SetKmv06ReadEnable(FALSE); //vpq_memc_suspend_resume.KME_DM_TOP2__MV06_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV06_AGENT & 0xffefffff;	IoReg_Read32(KME_DM_TOP2__MV06_AGENT_ADDR);
	HAL_DM_SetKmv07ReadEnable(FALSE); //vpq_memc_suspend_resume.KME_DM_TOP2__MV07_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV07_AGENT & 0xffefffff;	IoReg_Read32(KME_DM_TOP2__MV07_AGENT_ADDR);
	HAL_DM_SetKmv08ReadEnable(FALSE); //vpq_memc_suspend_resume.KME_DM_TOP2__MV08_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV08_AGENT & 0xffefffff;	IoReg_Read32(KME_DM_TOP2__MV08_AGENT_ADDR);
	HAL_DM_SetKmv09ReadEnable(FALSE); //vpq_memc_suspend_resume.KME_DM_TOP2__MV09_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV09_AGENT & 0xffefffff;	IoReg_Read32(KME_DM_TOP2__MV09_AGENT_ADDR);
	HAL_DM_SetKmv10ReadEnable(FALSE); //vpq_memc_suspend_resume.KME_DM_TOP2__MV10_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV10_AGENT & 0xffefffff;	IoReg_Read32(KME_DM_TOP2__MV10_AGENT_ADDR);
	HAL_DM_SetKmv11ReadEnable(FALSE); //vpq_memc_suspend_resume.KME_DM_TOP2__MV11_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV11_AGENT & 0xffefffff;	IoReg_Read32(KME_DM_TOP2__MV11_AGENT_ADDR);
	
	//ME DMA disable				  
	HAL_DM_SetKme00WriteEnable(FALSE);	//vpq_memc_suspend_resume.KME_DM_TOP0__KME_00_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_00_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP0__KME_00_AGENT = IoReg_Read32(KME_DM_TOP0__KME_00_AGENT_ADDR);
	HAL_DM_SetKme01ReadEnable(FALSE); 	//vpq_memc_suspend_resume.KME_DM_TOP0__KME_01_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_01_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP0__KME_01_AGENT = IoReg_Read32(KME_DM_TOP0__KME_01_AGENT_ADDR);
	HAL_DM_SetKme02ReadEnable(FALSE); 	//vpq_memc_suspend_resume.KME_DM_TOP0__KME_02_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_02_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP0__KME_02_AGENT = IoReg_Read32(KME_DM_TOP0__KME_02_AGENT_ADDR);
	HAL_DM_SetKme03ReadEnable(FALSE); 	//vpq_memc_suspend_resume.KME_DM_TOP0__KME_03_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_03_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP0__KME_03_AGENT = IoReg_Read32(KME_DM_TOP0__KME_03_AGENT_ADDR);
	HAL_DM_SetKme04WriteEnable(FALSE);	//vpq_memc_suspend_resume.KME_DM_TOP0__KME_04_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_04_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP0__KME_04_AGENT = IoReg_Read32(KME_DM_TOP0__KME_04_AGENT_ADDR);
	HAL_DM_SetKme05WriteEnable(FALSE);	//vpq_memc_suspend_resume.KME_DM_TOP0__KME_05_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_05_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP0__KME_05_AGENT = IoReg_Read32(KME_DM_TOP0__KME_05_AGENT_ADDR);
	HAL_DM_SetKme06ReadEnable(FALSE); 	//vpq_memc_suspend_resume.KME_DM_TOP0__KME06AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME06AGENT & 0xffefffff;		vpq_memc_suspend_resume.KME_DM_TOP0__KME06AGENT =   IoReg_Read32(KME_DM_TOP0__KME06AGENT_ADDR);
	HAL_DM_SetKme07ReadEnable(FALSE); 	//vpq_memc_suspend_resume.KME_DM_TOP0__KME_07_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_07_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP0__KME_07_AGENT = IoReg_Read32(KME_DM_TOP0__KME_07_AGENT_ADDR);
	HAL_DM_SetKme08WriteEnable(FALSE);	//vpq_memc_suspend_resume.KME_DM_TOP1__KME_08_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_08_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP1__KME_08_AGENT = IoReg_Read32(KME_DM_TOP1__KME_08_AGENT_ADDR);
	HAL_DM_SetKme09ReadEnable(FALSE); 	//vpq_memc_suspend_resume.KME_DM_TOP1__KME_09_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_09_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP1__KME_09_AGENT = IoReg_Read32(KME_DM_TOP1__KME_09_AGENT_ADDR);
	HAL_DM_SetKme10WriteEnable(FALSE);	//vpq_memc_suspend_resume.KME_DM_TOP1__KME_10_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_10_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP1__KME_10_AGENT = IoReg_Read32(KME_DM_TOP1__KME_10_AGENT_ADDR);
	HAL_DM_SetKme11ReadEnable(FALSE); 	//vpq_memc_suspend_resume.KME_DM_TOP1__KME_11_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_11_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP1__KME_11_AGENT = IoReg_Read32(KME_DM_TOP1__KME_11_AGENT_ADDR);
	HAL_DM_SetKme12WriteEnable(FALSE);	//vpq_memc_suspend_resume.KME_DM_TOP1__KME_12_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_12_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP1__KME_12_AGENT = IoReg_Read32(KME_DM_TOP1__KME_12_AGENT_ADDR);
	HAL_DM_SetKme13ReadEnable(FALSE); 	//vpq_memc_suspend_resume.KME_DM_TOP1__KME_13_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_13_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP1__KME_13_AGENT = IoReg_Read32(KME_DM_TOP1__KME_13_AGENT_ADDR);
	HAL_DM_SetKme14WriteEnable(FALSE);	//vpq_memc_suspend_resume.KME_DM_TOP1__KME_14_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_14_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP1__KME_14_AGENT = IoReg_Read32(KME_DM_TOP1__KME_14_AGENT_ADDR);
	HAL_DM_SetKme15ReadEnable(FALSE); 	//vpq_memc_suspend_resume.KME_DM_TOP1__KME_15_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_15_AGENT & 0xffefffff;	vpq_memc_suspend_resume.KME_DM_TOP1__KME_15_AGENT = IoReg_Read32(KME_DM_TOP1__KME_15_AGENT_ADDR);

	for(u32_i = 0; u32_i < 99; u32_i++){
		for(u32_j = 0; u32_j < 64; u32_j++){
			unsigned int tmp_reg = 0;
			tmp_reg = KMC_TOP__KMC_TOP_00_ADDR + (u32_i*256) + (u32_j*4);
			
			if((u32_i >= 0xc && u32_i <= 0x1d) ||(u32_i >= 0x48 && u32_i <= 0x60) ||  u32_i == 0x1f || u32_i == 0x21 || u32_i == 0x3f || u32_i == 0x42 || u32_i == 0x43){
				vpq_memc_suspend_resume.MEMC_reg[u32_i][u32_j] = 0;
			}else{
				vpq_memc_suspend_resume.MEMC_reg[u32_i][u32_j] = IoReg_Read32(tmp_reg);
			}
		}
	}

	rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_resume_EEE][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099414), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));
	pr_notice("[MEMC] suspend done[%x,%x] \n", IoReg_Read32(SYS_REG_SYS_CLKEN3_reg),  IoReg_Read32(SYS_REG_SYS_SRST3_reg));


#endif

}

unsigned char MEMC_instanboot_resume_done_jerry = 0;
extern unsigned char u1_DoPowerSaving;
void vpq_memc_disp_resume_instanboot(void){
	ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
	UINT32 u32_interrupt_reg = 0;
	UINT32 u32_i,u32_j;
	printk(KERN_NOTICE "[MEMC]%s %d\n",__func__,__LINE__);

#ifdef CONFIG_MEMC_BYPASS
		return;
#endif

	#if 1 //YE Test ORI 
	if(Scaler_MEMC_CLK_Check() == FALSE){
		printk(KERN_NOTICE "%s %d, Scaler_MEMC_CLK_Check() == FALSE\n",__func__,__LINE__);
		Scaler_MEMC_CLK_Enable();
		printk(KERN_NOTICE "%s %d, Scaler_MEMC_CLK_Check() == FALSE\n",__func__,__LINE__);
	}
	#else //YE Test 50411
	//for MEMC CLK check 
	Scaler_MEMC_CLK_Check() ;//MEMC CLK must on before running "DC on"
	#endif

	printk(KERN_NOTICE "[jerry_resume_DDD][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099414), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));

		//KME BISR







		//KMC BISR








#if 1   //Load part registers dump 
	
	for(u32_i = 0; u32_i < 99; u32_i++){
		for(u32_j = 0; u32_j < 64; u32_j++){
			unsigned int tmp_reg = 0;
			tmp_reg = KMC_TOP__KMC_TOP_00_ADDR + (u32_i*256) + (u32_j*4);
	
			if((u32_i >= 0xc && u32_i <= 0x1d) ||(u32_i >= 0x48 && u32_i <= 0x60) ||  u32_i == 0x1f || u32_i == 0x21 || u32_i == 0x3f || u32_i == 0x42 || u32_i == 0x43){
				//IoReg_Write32(tmp_reg, vpq_memc_suspend_resume.MEMC_reg[u32_i][u32_j]);
			}else{
				IoReg_Write32(tmp_reg, vpq_memc_suspend_resume.MEMC_reg[u32_i][u32_j]);
			}
		}
	}
	rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_resume_CCC][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099414), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));

	//kmc_top
	//IPPRE
	//KMC_CPR_TOP0
	//KMC_CPR_TOP1
	//KMC_DM_TOP
	//IPPRE1
	//MC
	//if(rtd_inl(0xb802e4f0)==1)
	
	//MC2
	//MC_PQ_DECMP
	//LBMC
	//BBD
	//KMC_METER_TOP
	//KMC_DM_METER_TOP
	//KME_TOP
	//KME_VBUF_TOP
	//KME_ME1_TOP2
	//KME_ME1_TOP3
	//KME_ME1_TOP4
	//KME_ME1_TOP5
	//ME_SHARE_DMA
	//IoReg_Write32(KME_SHARE_DMA__ME_SHARE_DMA_94_ADDR , vpq_memc_suspend_resume.KME_SHARE_DMA__ME_SHARE_DMA_94);
	//IoReg_Write32(KME_SHARE_DMA__ME_SHARE_DMA_E0_ADDR , vpq_memc_suspend_resume.KME_SHARE_DMA__ME_SHARE_DMA_E0);
	//KME_LBME_TOP
	//KME_ME2_CALC1
	//KME_LOGO2
	//KME_IPME
	//KME_IPME1
	//KME_LOGO0
	//KME_LOGO1
	//KME_DM_TOP0
	//KME_DM_TOP1
	//KME_DM_TOP2
	//KME_DEHALO3
	//KME_ME1_TOP0
	//KME_ME1_TOP1
	//KME_LBME2_TOP
	//KME_ME2_VBUF_TOP
	//KME_ME2_CALC0
	//KME_ME1_TOP6
	//KME_ME1_TOP7
	//KME_ME1_TOP8
	//KME_ME1_TOP9
	//KME_DEHALO
	//KME_DEHALO2
	//KPOST_TOP
	//CRTC1
	//kphase
	//Hardware
	//Software
	//Software1

	//ME SHARE /MC DMA
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_CTRL_reg,                                                    vpq_memc_suspend_resume.MESHARE__IPME_WDMA_CTRL                                                );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_NUM_BL_reg,                                            vpq_memc_suspend_resume.MESHARE__IPME_WDMA_NUM_BL                                                    );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_LSTEP_reg,                                                 vpq_memc_suspend_resume.MESHARE__IPME_WDMA_LSTEP                                                 );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MSTART0_reg,                                        vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART0                                                      );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MSTART1_reg,                                        vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART1                                                      );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MSTART2_reg,                                        vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART2                                                      );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MSTART3_reg,                                        vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART3                                                      );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MSTART4_reg,                                        vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART4                                                      );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MSTART5_reg,                                        vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART5                                                      );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MSTART6_reg,                                        vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART6                                                      );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MSTART7_reg,                                        vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MSTART7                                                      );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MEND0_reg,                                               vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND0                                                   );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MEND1_reg,                                               vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND1                                                   );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MEND2_reg,                                               vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND2                                                   );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MEND3_reg,                                               vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND3                                                   );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MEND4_reg,                                               vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND4                                                   );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MEND5_reg,                                               vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND5                                                   );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MEND6_reg,                                               vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND6                                                   );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_IPME_WDMA_MEND7_reg,                                               vpq_memc_suspend_resume.MESHARE__IPME_WDMA_MEND7                                                   );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_ME1_RDMA0_CTRL_reg,                                                    vpq_memc_suspend_resume.MESHARE__ME1_RDMA0_CTRL                                               );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_ME1_RDMA0_NUM_BL_reg,                                            vpq_memc_suspend_resume.MESHARE__ME1_RDMA0_NUM_BL                                                   );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_ME2_RDMA0_CTRL_reg,                                                    vpq_memc_suspend_resume.MESHARE__ME2_RDMA0_CTRL                                               );
	// k6lp_bring_up //IoReg_Write32(ME_SHARE_DMA_ME2_RDMA0_NUM_BL_reg,                                            vpq_memc_suspend_resume.MESHARE__ME2_RDMA0_NUM_BL                                                   );

#endif

	//MEMC mux
	//FBG
	//clock

	//ME memory boundary
	//MC memory boundary
	//MEMC resume setting
	Scaler_MEMC_CLK();

	//disable double buffer
	{
		ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl_reg;
		double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
		double_buffer_ctrl_reg.uzudtgreg_dbuf_en = 0;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);

		//enable MEMC output fbg
		memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
		memc_mux_ctrl_reg.memc_out_bg_en = TRUE;
		IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, memc_mux_ctrl_reg.regValue);
	}

	//ME memory boundary
	IoReg_Write32(DBUS_WRAPPER_Me_downlimit_addr_reg, gphy_addr_kme);
	IoReg_Write32(DBUS_WRAPPER_Me_uplimit_addr_reg, (gphy_addr_kme + KME_TOTAL_SIZE));
	//MC memory boundary
	Scaler_MEMC_MC_Set_MEMBoundary(gphy_addr_kmc00,(gphy_addr_kmc00 + KMC_TOTAL_SIZE));

	rtd_printk(KERN_DEBUG, TAG_NAME, "[jerry_resume_BBB][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099414), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));

#if 1
	//vpq_memc_suspend_resume.MCDMA__MC_WDMA_DB_CTRL		=	vpq_memc_suspend_resume.MCDMA__MC_WDMA_DB_CTRL | 0x00000001; // MC_WDMA_DB
	//vpq_memc_suspend_resume.MCDMA__MC_RDMA_DB_CTRL		=	vpq_memc_suspend_resume.MCDMA__MC_RDMA_DB_CTRL | 0x00000001; // MC_RDMA_DB

	//MCDMA__MC DMA disable
	HAL_DM_SetKmc00WriteEnable(TRUE); // vpq_memc_suspend_resume.MCDMA__MC_LF_DMA_WR_Ctrl = vpq_memc_suspend_resume.MCDMA__MC_LF_DMA_WR_Ctrl & 0xfffffffe;
	HAL_DM_SetKmc01WriteEnable(TRUE); // vpq_memc_suspend_resume.MCDMA__MC_HF_DMA_WR_Ctrl = vpq_memc_suspend_resume.MCDMA__MC_HF_DMA_WR_Ctrl & 0xfffffffe;
	HAL_DM_SetKmc04ReadEnable(TRUE); // vpq_memc_suspend_resume.MCDMA__MC_LF_I_DMA_RD_Ctrl = vpq_memc_suspend_resume.MCDMA__MC_LF_I_DMA_RD_Ctrl & 0xfffffffe;
	HAL_DM_SetKmc05ReadEnable(TRUE); // vpq_memc_suspend_resume.MCDMA__MC_HF_I_DMA_RD_Ctrl = vpq_memc_suspend_resume.MCDMA__MC_HF_I_DMA_RD_Ctrl & 0xfffffffe;
	HAL_DM_SetKmc06ReadEnable(TRUE); // vpq_memc_suspend_resume.MCDMA__MC_LF_P_DMA_RD_Ctrl = vpq_memc_suspend_resume.MCDMA__MC_LF_P_DMA_RD_Ctrl & 0xfffffffe;
	HAL_DM_SetKmc07ReadEnable(TRUE); // vpq_memc_suspend_resume.MCDMA__MC_HF_P_DMA_RD_Ctrl = vpq_memc_suspend_resume.MCDMA__MC_HF_P_DMA_RD_Ctrl & 0xfffffffe;

	//MESHARE__ME_DMA enable
	rtd_setbits(ME_SHARE_DMA_ME_DMA_WR_Ctrl_reg, _BIT0); // vpq_memc_suspend_resume.MESHARE__ME_DMA_WR_Ctrl = vpq_memc_suspend_resume.MESHARE__ME_DMA_WR_Ctrl & 0xfffffffe;
	rtd_setbits(ME_SHARE_DMA_ME_DMA_RD_Ctrl_reg, _BIT0); // vpq_memc_suspend_resume.MESHARE__ME_DMA_RD_Ctrl = vpq_memc_suspend_resume.MESHARE__ME_DMA_RD_Ctrl & 0xfffffffe;

	//MC DMA enable
	rtd_setbits(KMC_DM_TOP__KMC_00_AGENT_ADDR, _BIT20); // vpq_memc_suspend_resume.KMC_DM_TOP__KMC_00_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_00_AGENT & 0xffefffff;
	rtd_setbits(KMC_DM_TOP__KMC_01_AGENT_ADDR, _BIT20); // vpq_memc_suspend_resume.KMC_DM_TOP__KMC_01_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_01_AGENT & 0xffefffff;
	rtd_setbits(KMC_DM_TOP__KMC_07_AGENT_ADDR, _BIT20); // vpq_memc_suspend_resume.KMC_DM_TOP__KMC_07_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_07_AGENT & 0xffefffff;

	//MV DMA enable
	HAL_DM_SetKmv01WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV01_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV01_AGENT & 0xffefffff;
	HAL_DM_SetKmv02WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV02_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV02_AGENT & 0xffefffff;
	HAL_DM_SetKmv03ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV03_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV03_AGENT & 0xffefffff;
	HAL_DM_SetKmv04WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV04_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV04_AGENT & 0xffefffff;
	HAL_DM_SetKmv05WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV05_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV05_AGENT & 0xffefffff;
	HAL_DM_SetKmv06ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV06_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV06_AGENT & 0xffefffff;
	HAL_DM_SetKmv07ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV07_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV07_AGENT & 0xffefffff;
	HAL_DM_SetKmv08ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV08_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV08_AGENT & 0xffefffff;
	HAL_DM_SetKmv09ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV09_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV09_AGENT & 0xffefffff;
	HAL_DM_SetKmv10ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV10_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV10_AGENT & 0xffefffff;
	HAL_DM_SetKmv11ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP2__MV11_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV11_AGENT & 0xffefffff;

	//ME DMA enable
	HAL_DM_SetKme00WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP0__KME_00_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_00_AGENT & 0xffefffff;
	HAL_DM_SetKme01ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP0__KME_01_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_01_AGENT & 0xffefffff;
	HAL_DM_SetKme02ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP0__KME_02_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_02_AGENT & 0xffefffff;
	HAL_DM_SetKme03ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP0__KME_03_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_03_AGENT & 0xffefffff;
	HAL_DM_SetKme04WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP0__KME_04_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_04_AGENT & 0xffefffff;
	HAL_DM_SetKme05WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP0__KME_05_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_05_AGENT & 0xffefffff;
	HAL_DM_SetKme06ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP0__KME_06_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_06_AGENT & 0xffefffff;
	HAL_DM_SetKme07ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP0__KME_07_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_07_AGENT & 0xffefffff;
	HAL_DM_SetKme08WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP1__KME_08_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_08_AGENT & 0xffefffff;
	HAL_DM_SetKme09ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP1__KME_09_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_09_AGENT & 0xffefffff;
	HAL_DM_SetKme10WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP1__KME_10_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_10_AGENT & 0xffefffff;
	HAL_DM_SetKme11ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP1__KME_11_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_11_AGENT & 0xffefffff;
	HAL_DM_SetKme12WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP1__KME_12_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_12_AGENT & 0xffefffff;
	HAL_DM_SetKme13ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP1__KME_13_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_13_AGENT & 0xffefffff;
	HAL_DM_SetKme14WriteEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP1__KME_14_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_14_AGENT & 0xffefffff;
	HAL_DM_SetKme15ReadEnable(TRUE); // vpq_memc_suspend_resume.KME_DM_TOP1__KME_15_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_15_AGENT & 0xffefffff;

	//resume disable force_iz_when_mc_phase_eq0, it enable when trun motion
	rtd_clearbits(LBMC__LBMC_24_ADDR,_BIT10);

/*
	//vpq_memc_suspend_resume.MCDMA__MC_WDMA_DB_CTRL		=	vpq_memc_suspend_resume.MCDMA__MC_WDMA_DB_CTRL | 0x00000001; // MC_WDMA_DB
	//vpq_memc_suspend_resume.MCDMA__MC_RDMA_DB_CTRL		=	vpq_memc_suspend_resume.MCDMA__MC_RDMA_DB_CTRL | 0x00000001; // MC_RDMA_DB

	//MCDMA__MC DMA
	vpq_memc_suspend_resume.MCDMA__MC_LF_DMA_WR_Ctrl	=	vpq_memc_suspend_resume.MCDMA__MC_LF_DMA_WR_Ctrl | 0x00000001;
	vpq_memc_suspend_resume.MCDMA__MC_HF_DMA_WR_Ctrl	=	vpq_memc_suspend_resume.MCDMA__MC_HF_DMA_WR_Ctrl | 0x00000001;
	vpq_memc_suspend_resume.MCDMA__MC_LF_I_DMA_RD_Ctrl	=	vpq_memc_suspend_resume.MCDMA__MC_LF_I_DMA_RD_Ctrl | 0x00000001;
	vpq_memc_suspend_resume.MCDMA__MC_HF_I_DMA_RD_Ctrl	=	vpq_memc_suspend_resume.MCDMA__MC_HF_I_DMA_RD_Ctrl | 0x00000001;
	vpq_memc_suspend_resume.MCDMA__MC_LF_P_DMA_RD_Ctrl	=	vpq_memc_suspend_resume.MCDMA__MC_LF_P_DMA_RD_Ctrl | 0x00000001;
	vpq_memc_suspend_resume.MCDMA__MC_HF_P_DMA_RD_Ctrl	=	vpq_memc_suspend_resume.MCDMA__MC_HF_P_DMA_RD_Ctrl | 0x00000001;
	//MESHARE__ME_DMA
	vpq_memc_suspend_resume.MESHARE__ME_DMA_WR_Ctrl 	=	vpq_memc_suspend_resume.MESHARE__ME_DMA_WR_Ctrl | 0x00000001;
	vpq_memc_suspend_resume.MESHARE__ME_DMA_RD_Ctrl 	=	vpq_memc_suspend_resume.MESHARE__ME_DMA_RD_Ctrl | 0x00000001;

	//MC DMA disable
	vpq_memc_suspend_resume.KMC_DM_TOP__KMC_00_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_00_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KMC_DM_TOP__KMC_01_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_01_AGENT | 0x00100000;
	//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_02_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_02_AGENT | 0x00100000;
	//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_03_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_03_AGENT | 0x00100000;
	//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_04_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_04_AGENT | 0x00100000;
	//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_05_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_05_AGENT | 0x00100000;
	//vpq_memc_suspend_resume.KMC_DM_TOP__KMC_06_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_06_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KMC_DM_TOP__KMC_07_AGENT = vpq_memc_suspend_resume.KMC_DM_TOP__KMC_07_AGENT | 0x00100000;

	//MV DMA disable
	vpq_memc_suspend_resume.KME_DM_TOP2__MV01_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV01_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP2__MV02_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV02_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP2__MV03_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV03_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP2__MV04_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV04_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP2__MV05_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV05_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP2__MV06_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV06_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP2__MV07_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV07_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP2__MV08_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV08_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP2__MV09_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV09_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP2__MV10_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV10_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP2__MV11_AGENT = vpq_memc_suspend_resume.KME_DM_TOP2__MV11_AGENT | 0x00100000;

	//ME DMA disable
	vpq_memc_suspend_resume.KME_DM_TOP0__KME_00_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_00_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP0__KME_01_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_01_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP0__KME_02_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_02_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP0__KME_03_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_03_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP0__KME_04_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_04_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP0__KME_05_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_05_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP0__KME06AGENT	  = vpq_memc_suspend_resume.KME_DM_TOP0__KME06AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP0__KME_07_AGENT = vpq_memc_suspend_resume.KME_DM_TOP0__KME_07_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP1__KME_08_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_08_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP1__KME_09_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_09_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP1__KME_10_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_10_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP1__KME_11_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_11_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP1__KME_12_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_12_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP1__KME_13_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_13_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP1__KME_14_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_14_AGENT | 0x00100000;
	vpq_memc_suspend_resume.KME_DM_TOP1__KME_15_AGENT = vpq_memc_suspend_resume.KME_DM_TOP1__KME_15_AGENT | 0x00100000;

	IoReg_Write32(KMC_DM_TOP__KMC_00_AGENT_ADDR , vpq_memc_suspend_resume.KMC_DM_TOP__KMC_00_AGENT);
	IoReg_Write32(KMC_DM_TOP__KMC_01_AGENT_ADDR , vpq_memc_suspend_resume.KMC_DM_TOP__KMC_01_AGENT);
	//IoReg_Write32(KMC_DM_TOP__KMC_02_AGENT_ADDR , vpq_memc_suspend_resume.KMC_DM_TOP__KMC_02_AGENT);
	//IoReg_Write32(KMC_DM_TOP__KMC_03_AGENT_ADDR , vpq_memc_suspend_resume.KMC_DM_TOP__KMC_03_AGENT);
	//IoReg_Write32(KMC_DM_TOP__KMC_04_AGENT_ADDR , vpq_memc_suspend_resume.KMC_DM_TOP__KMC_04_AGENT);
	//IoReg_Write32(KMC_DM_TOP__KMC_05_AGENT_ADDR , vpq_memc_suspend_resume.KMC_DM_TOP__KMC_05_AGENT);
	//IoReg_Write32(KMC_DM_TOP__KMC_06_AGENT_ADDR , vpq_memc_suspend_resume.KMC_DM_TOP__KMC_06_AGENT);
	IoReg_Write32(KMC_DM_TOP__KMC_07_AGENT_ADDR , vpq_memc_suspend_resume.KMC_DM_TOP__KMC_07_AGENT);
	IoReg_Write32(KME_DM_TOP0__KME_00_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP0__KME_00_AGENT);
	IoReg_Write32(KME_DM_TOP0__KME_01_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP0__KME_01_AGENT);
	IoReg_Write32(KME_DM_TOP0__KME_02_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP0__KME_02_AGENT);
	IoReg_Write32(KME_DM_TOP0__KME_03_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP0__KME_03_AGENT);
	IoReg_Write32(KME_DM_TOP0__KME_04_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP0__KME_04_AGENT);
	IoReg_Write32(KME_DM_TOP0__KME_05_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP0__KME_05_AGENT);
	IoReg_Write32(KME_DM_TOP0__KME06AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP0__KME06AGENT);
	IoReg_Write32(KME_DM_TOP0__KME_07_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP0__KME_07_AGENT);
	IoReg_Write32(KME_DM_TOP1__KME_08_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP1__KME_08_AGENT);
	IoReg_Write32(KME_DM_TOP1__KME_09_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP1__KME_09_AGENT);
	IoReg_Write32(KME_DM_TOP1__KME_10_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP1__KME_10_AGENT);
	IoReg_Write32(KME_DM_TOP1__KME_11_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP1__KME_11_AGENT);
	IoReg_Write32(KME_DM_TOP1__KME_12_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP1__KME_12_AGENT);
	IoReg_Write32(KME_DM_TOP1__KME_13_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP1__KME_13_AGENT);
	IoReg_Write32(KME_DM_TOP1__KME_14_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP1__KME_14_AGENT);
	IoReg_Write32(KME_DM_TOP1__KME_15_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP1__KME_15_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV01_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV01_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV02_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV02_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV03_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV03_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV04_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV04_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV05_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV05_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV06_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV06_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV07_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV07_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV08_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV08_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV09_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV09_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV10_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV10_AGENT);
	IoReg_Write32(KME_DM_TOP2__MV11_AGENT_ADDR , vpq_memc_suspend_resume.KME_DM_TOP2__MV11_AGENT);
	IoReg_Write32(ME_SHARE_DMA_ME_DMA_WR_Ctrl_reg , vpq_memc_suspend_resume.MESHARE__ME_DMA_WR_Ctrl);
	IoReg_Write32(ME_SHARE_DMA_ME_DMA_RD_Ctrl_reg , vpq_memc_suspend_resume.MESHARE__ME_DMA_RD_Ctrl);
	IoReg_Write32(MC_DMA_MC_LF_DMA_WR_Ctrl_reg , vpq_memc_suspend_resume.MCDMA__MC_LF_DMA_WR_Ctrl);
	IoReg_Write32(MC_DMA_MC_HF_DMA_WR_Ctrl_reg , vpq_memc_suspend_resume.MCDMA__MC_HF_DMA_WR_Ctrl);
	//IoReg_Write32(MEMC_MC_DMA_MC_WDMA_DB_CTRL_reg , vpq_memc_suspend_resume.MCDMA__MC_WDMA_DB_CTRL);
	IoReg_Write32(MC_DMA_MC_LF_I_DMA_RD_Ctrl_reg , vpq_memc_suspend_resume.MCDMA__MC_LF_I_DMA_RD_Ctrl);
	IoReg_Write32(MC_DMA_MC_HF_I_DMA_RD_Ctrl_reg , vpq_memc_suspend_resume.MCDMA__MC_HF_I_DMA_RD_Ctrl);
	IoReg_Write32(MC_DMA_MC_LF_P_DMA_RD_Ctrl_reg , vpq_memc_suspend_resume.MCDMA__MC_LF_P_DMA_RD_Ctrl);
	IoReg_Write32(MC_DMA_MC_HF_P_DMA_RD_Ctrl_reg , vpq_memc_suspend_resume.MCDMA__MC_HF_P_DMA_RD_Ctrl);
	//IoReg_Write32(MEMC_MC_DMA_MC_RDMA_DB_CTRL_reg , vpq_memc_suspend_resume.MCDMA__MC_RDMA_DB_CTRL );
*/	

	//Scaler_MEMC_output_force_bg_enable(TRUE);











#endif


	pr_notice("[jerry_resume_AAA][%x, %x, %x, %x, %x]\n\r", rtd_inl(0xb802e800), rtd_inl(0xb8099484), rtd_inl(0xb809d400), rtd_inl(0xb809d5fc), rtd_inl(0xb809d7fc));

	//MEMC mux enable
	if((rtd_inl(0xb802e800)&0x1) == 0){
		drvif_memc_mux_en(TRUE);
	}

	MEMC_instanboot_resume_Done = 1;
	MEMC_instanboot_resume_done_jerry = 1;
	u1_DoPowerSaving = 0;
	resume_repeat_mode_check = 1;
	printk("[jerry_PS_resume_vpqmemc]\n");

	// enable interrupt
	//reg_kmc_int_en
	u32_interrupt_reg = IoReg_Read32(KMC_TOP__KMC_TOP_18_ADDR);
	u32_interrupt_reg |= 0x02000000;
	IoReg_Write32(KMC_TOP__KMC_TOP_18_ADDR, u32_interrupt_reg);

	//reg_post_int_en
	u32_interrupt_reg = IoReg_Read32(KPOST_TOP__KPOST_TOP_08_ADDR);
	u32_interrupt_reg |= 0x00000040;
	IoReg_Write32(KPOST_TOP__KPOST_TOP_08_ADDR, u32_interrupt_reg);

	//enable lbmc db
	MEMC_LibSet_LBMC_DB_en(1);

	MEMC_LibSet_PQC_DB_en(1);
	MEMC_LibSet_PQC_DB_apply();
	MEMC_LibSet_MCDMA_DB_en(1);
	//pr_notice("[MEMC]Instanboot Resume done !!!\n");
	printk(KERN_NOTICE "[MEMC]Instanboot Resume done\n");

}
#endif

unsigned char memc_ioctl_cmd_stop[32] = {0};
unsigned char vpq_memc_ioctl_get_stop_run(unsigned int cmd)
{
	return (memc_ioctl_cmd_stop[_IOC_NR(cmd)&0x1f]|memc_ioctl_cmd_stop[0]);
}

unsigned char vpq_memc_ioctl_get_stop_run_by_idx(unsigned char cmd_idx)
{
	return memc_ioctl_cmd_stop[cmd_idx];
}

void vpq_memc_ioctl_set_stop_run_by_idx(unsigned char cmd_idx, unsigned char stop)
{
	memc_ioctl_cmd_stop[cmd_idx] = stop;
}

int vpq_memc_open(struct inode *inode, struct file *filp)
{
	return 0;
}

ssize_t  vpq_memc_read(struct file *filep, char *buffer, size_t count, loff_t *offp)
{
	return 0;
}

ssize_t vpq_memc_write(struct file *filep, const char *buffer, size_t count, loff_t *offp)
{
	return 0;
}

int vpq_memc_release(struct inode *inode, struct file *filep)
{
	return 0;
}

long vpq_memc_ioctl(struct file *file, unsigned int cmd,  unsigned long arg)
{
	int retval = 0;
	VPQ_MEMC_SETVIDEOBLOCK_T set_video_block_info;
	//rtd_printk(KERN_DEBUG, TAG_NAME, "VPQ MEMC: vpq_memc_ioctl, %x;;agr:%x\n", cmd,*((unsigned int *)arg));
	if (_IOC_TYPE(cmd) != VPQ_IOC_MEMC_MAGIC || _IOC_NR(cmd) > VPQ_MEMC_IOC_MAXNR) return -ENOTTY ;

	if (vpq_memc_ioctl_get_stop_run(cmd))
		return 0;

	switch (cmd)
	{
		case VPQ_IOC_MEMC_INITILIZE:
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_INITILIZE\n");
			HAL_VPQ_MEMC_Initialize();

			break;
		}
		case VPQ_IOC_MEMC_UNINITILIZE:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_UNINITILIZE\n");
			HAL_VPQ_MEMC_Uninitialize();

			break;
		}
		case VPQ_IOC_MEMC_SETMOTIONCOMP:
		{
			VPQ_MEMC_SETMOTIONCOMP_T set_motion_comp_info;
			printk(KERN_EMERG "##############[MEMC]VPQ_IOC_MEMC_SETMOTIONCOMP\n");
			if(copy_from_user((void *)&set_motion_comp_info, (const void __user *)arg, sizeof(VPQ_MEMC_SETMOTIONCOMP_T)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_SETMOTIONCOMP failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				retval = HAL_VPQ_MEMC_SetMotionComp(set_motion_comp_info.blurLevel, set_motion_comp_info.judderLevel, set_motion_comp_info.motion);
			}

			break;
		}
/*
		case VPQ_IOC_MEMC_SETBLURLEVEL:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_SETBLURLEVEL\n");
			UINT8 blurLevel;
			if(copy_from_user((void *)&blurLevel, (const void __user *)arg, sizeof(UINT8)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_SETBLURLEVEL failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VPQ_MEMC_SetBlurLevel(blurLevel);
			}

			break;
		}
		case VPQ_IOC_MEMC_SETJUDDERLEVEL:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_SETJUDDERLEVEL\n");
			UINT8 judderLevel;
			if(copy_from_user((void *)&judderLevel, (const void __user *)arg, sizeof(UINT8)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_SETJUDDERLEVEL failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VPQ_MEMC_SetJudderLevel(judderLevel);
			}

			break;
		}
*/
		case VPQ_IOC_MEMC_MOTIONCOMPONOFF:
		{
			//printk(KERN_EMERG "##############[MEMC]VPQ_IOC_MEMC_MOTIONCOMPONOFF\n");
			BOOLEAN bOnOff;
			if(copy_from_user((void *)&bOnOff, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_MOTIONCOMPONOFF failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				retval = 0;//HAL_VPQ_MEMC_MotionCompOnOff(bOnOff);
			}

			break;
		}
		case VPQ_IOC_MEMC_LOWDELAYMODE:
		{
			UINT8 type;

			rtd_printk(KERN_EMERG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_LOWDELAYMODE\n");
			if(copy_from_user((void *)&type, (const void __user *)arg, sizeof(UINT8)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_LOWDELAYMODE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{

				retval = HAL_VPQ_MEMC_LowDelayMode(type);
			}

			break;
		}
		case VPQ_IOC_MEMC_SETRGBYUVMode:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_SETRGBYUVMode\n");
			UINT8 mode;
			if(copy_from_user((void *)&mode, (const void __user *)arg, sizeof(mode)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_SETRGBYUVMode failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				retval = HAL_VPQ_MEMC_SetRGBYUVMode(mode);
			}

			break;
		}

		case VPQ_IOC_MEMC_GETFRAMEDELAY:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_GETFRAMEDELAY\n");
			UINT16 *pFrameDelay;
			if(copy_from_user((void *)&pFrameDelay, (const void __user *)arg, sizeof(UINT16)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_GETFRAMEDELAY failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VPQ_MEMC_GetFrameDelay(pFrameDelay);
			}

			break;
		}

		case VPQ_IOC_MEMC_SETVIDEOBLOCK:
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "\r\n###[MEMC]VPQ_IOC_MEMC_SETVIDEOBLOCK####\r\n");

			if(copy_from_user((void *)&set_video_block_info, (const void __user *)arg, sizeof(VPQ_MEMC_SETVIDEOBLOCK_T)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_SETVIDEOBLOCK failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VPQ_MEMC_SetVideoBlock(set_video_block_info.type, set_video_block_info.bOnOff);
			}

			break;
		}
/*
		case VPQ_IOC_MEMC_SETTRUEMOTIONDEMO:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_SETTRUEMOTIONDEMO\n");
			BOOLEAN bOnOff;
			if(copy_from_user((void *)&bOnOff, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_SETTRUEMOTIONDEMO failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VPQ_MEMC_SetTrueMotionDemo(bOnOff);
			}

			break;
		}

		case VPQ_IOC_MEMC_GETFIRMWAREVERSION:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_GETFIRMWAREVERSION\n");
			UINT16 *pVersion;
			if(copy_from_user((void *)&pVersion, (const void __user *)arg, sizeof(UINT16)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_SETBLURLEVEL failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VPQ_MEMC_GetFirmwareVersion(pVersion);
			}

			break;
		}
*/
		case VPQ_IOC_MEMC_SETBYPASSREGION:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_SETBYPASSREGION\n");
			VPQ_MEMC_SETBYPASSREGION_T set_bypass_region_info;
			if(copy_from_user((void *)&set_bypass_region_info, (const void __user *)arg, sizeof(VPQ_MEMC_SETBYPASSREGION_T)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_SETBYPASSREGION failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VPQ_MEMC_SetBypassRegion(set_bypass_region_info.bOnOff, set_bypass_region_info.region, set_bypass_region_info.x, set_bypass_region_info.y, set_bypass_region_info.w, set_bypass_region_info.h);
			}

			break;
		}

		// for Roku, add by JerryWang
		case VPQ_IOC_MEMC_GETMOTION:
		{
			unsigned char mode = 0;
			printk(KERN_EMERG "##############[MEMC]VPQ_IOC_MEMC_GETMOTION\n");
			mode = Scaler_MEMC_GetMEMC_Mode();
			printk(KERN_EMERG "[MEMC_GetMode][,%d,]\n", mode);
			if (copy_to_user((void __user *)arg, (void *)&mode, sizeof(unsigned char))) {
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_GETMOTION failed!!!!!!!!!!!!!!!\n");
				retval = -1;
			} else
				retval = 0;

			break;
		}
/*
		case VPQ_IOC_MEMC_SETREVERSECONTROL:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_SETREVERSECONTROL\n");
			UINT8 u8Mode;
			if(copy_from_user((void *)&u8Mode, (const void __user *)arg, sizeof(UINT8)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_SETREVERSECONTROL failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VPQ_MEMC_SetReverseControl(u8Mode);
			}

			break;
		}

		case VPQ_IOC_MEMC_FREEZE:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_FREEZE\n");
			UINT8 type;
			if(copy_from_user((void *)&type, (const void __user *)arg, sizeof(UINT8)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_FREEZE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VPQ_MEMC_Freeze(type);
			}

			break;
		}

		case VPQ_IOC_MEMC_SETDEMOBAR:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_SETDEMOBAR\n");
			VPQ_MEMC_SETDEMOBAR_T set_demo_bar_info;
			if(copy_from_user((void *)&set_demo_bar_info, (const void __user *)arg, sizeof(VPQ_MEMC_SETDEMOBAR_T)))
			{
				retval = -EFAULT;
				MEMC_DBG_PRINT("scaler vpq memc ioctl code=VPQ_IOC_MEMC_SETDEMOBAR failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VPQ_MEMC_SetDemoBar(set_demo_bar_info.bOnOff, set_demo_bar_info.r, set_demo_bar_info.g, set_demo_bar_info.b);
			}

			break;
		}

		case VPQ_IOC_MEMC_DEBUG:
		{
			//rtd_printk(KERN_DEBUG, TAG_NAME, "##############[MEMC]VPQ_IOC_MEMC_DEBUG\n");
			HAL_VPQ_MEMC_DEBUG();

			break;
		}
*/

		case VPQ_IOC_MEMC_GET_ENABLE:
		{
			unsigned char enable = 0;
			rtd_printk(KERN_DEBUG, TAG_NAME,"VPQ_IOC_MEMC_GET_ENABLE\n");

			if (Scaler_GetMemcEnable(&enable) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel Scaler_GetMemcEnable fail\n");
				retval = -1;
			} else {
				if (copy_to_user((void __user *)arg, (void *)&enable, sizeof(unsigned char))) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_MEMC_GET_ENABLE fail\n");
					retval = -1;
				} else
					retval = 0;
			}
			break;
		}
		case VPQ_IOC_MEMC_SET_LEVEL:
		{
			unsigned int args = 0;
			rtd_printk(KERN_DEBUG, TAG_NAME,"VPQ_IOC_MEMC_SET_LEVEL\n");

			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				retval = -1;
			} else {
				retval = 0;
				Scaler_SetMemcLevel((TV001_LEVEL_E)args);
			}
			break;
		}
		case VPQ_IOC_MEMC_GET_RANGE:
		{
			TV001_MEMC_RANGE_S range ;
			rtd_printk(KERN_DEBUG, TAG_NAME,"VPQ_IOC_MEMC_GET_RANGE\n");

			if (Scaler_GetMemcRange(&range) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel Scaler_GetMemcRange fail\n");
				retval = -1;
			} else {
				if (copy_to_user((void __user *)arg, (void *)&range, sizeof(TV001_MEMC_RANGE_S))) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_MEMC_GET_RANGE fail\n");
					retval = -1;
				} else
					retval = 0;
			}
			break;
		}
		case VPQ_IOC_MEMC_FORCE_24TO48:
		{
			unsigned int args = 0;
			rtd_printk(KERN_DEBUG, TAG_NAME,"VPQ_IOC_MEMC_FORCE_24TO48\n");

			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				retval = -1;
			} else {
				retval = 0;
				m_bForce24to48 = args;
			}
			break;
		}
		default:
			rtd_printk(KERN_DEBUG, TAG_NAME, "Scaler vpq memc: ioctl code = %d is invalid!!!!!!!!!!!!!!!1\n", cmd);
			break ;
		}
	return retval;
}
//#endif

#ifdef CONFIG_RTK_8KCODEC_INTERFACE
#include "kernel/rtk_codec_interface.h"
extern struct rtk_codec_interface *rtk_8k;
//rtk_8k->vpqled->info();
void VPQMEMC_rlink_MEMC_ID_enable(void)
{
	if(rtk_8k == NULL)
	{
		printk("%s, null pointer: rtk_8k\n", __FUNCTION__);
		return;
	}
		
	rtk_8k->vpqmemc->R8k_VPQEX_MEMC_ID_enable();
	
	printk("%s, VPQMEMC_rlink_MEMC_ID_enable:set ! \n", __FUNCTION__);
}

void VPQMEMC_rlink_MEMC_ID(void)
{
	extern unsigned char DynamicOptimizeMEMC[255];
	
	if(rtk_8k == NULL)
	{
		printk("%s, null pointer: rtk_8k\n", __FUNCTION__);
		return;
	}
		
	rtk_8k->vpqmemc->R8k_VPQEX_MEMC_Idenfification_Info(DynamicOptimizeMEMC);
	
	//printk("%s, DynamicOptimizeMEMC  set ! \n", __FUNCTION__);
}
#endif

struct file_operations vpq_memc_fops= {
	.owner =    THIS_MODULE,
	.open  =    vpq_memc_open,
	.release =  vpq_memc_release,
	.read  =    vpq_memc_read,
	.write = 	vpq_memc_write,
	.unlocked_ioctl =    vpq_memc_ioctl,
#ifdef CONFIG_ARM64
#ifdef CONFIG_COMPAT
	.compat_ioctl = vpq_memc_ioctl,
#endif
#endif
};

#ifdef CONFIG_PM
static const struct dev_pm_ops vpq_memc_pm_ops =
{
	.suspend    = vpq_memc_suspend,
	.resume     = vpq_memc_resume,
#ifdef CONFIG_HIBERNATION
	.freeze 	= vpq_memc_suspend_snashop,
	.thaw 		= vpq_memc_resume_snashop,
	.poweroff 	= vpq_memc_suspend_snashop,
	.restore 	= vpq_memc_resume_snashop,
#endif
};
#endif // CONFIG_PM


static struct platform_device *vpq_memc_platform_devs;

static struct platform_driver vpq_memc_device_driver = {
	.driver =
	{
        .name         = VPQ_MEMC_DEVICE_NAME,
        .bus          = &platform_bus_type,
#ifdef CONFIG_PM
	 .pm         = &vpq_memc_pm_ops,
#endif

	},
};

#ifdef CONFIG_ARM64 //ARM32 compatible
static char *vpq_memc_devnode(struct device *dev, umode_t *mode)
#else
static char *vpq_memc_devnode(struct device *dev, mode_t *mode)
#endif
{
	return NULL;
}

static void memc_isr_disable (void)
{
	UINT32 u32_interrupt_reg = 0;

    printk(KERN_NOTICE "%s %d\n",__func__,__LINE__);
    #ifdef CONFIG_MEMC_BYPASS
         return;
    #endif
    if(Scaler_MEMC_CLK_Check() == FALSE){		
		return;
    }

    // disable interrupt
    //reg_kmc_int_en
    u32_interrupt_reg = IoReg_Read32(0xB8099018); //MC_TOP__REG_KMC_IN_INT_SEL_ADDR
    u32_interrupt_reg &= 0xf0ffffff;
    IoReg_Write32(0xB8099018, u32_interrupt_reg);

    //reg_post_int_en
    u32_interrupt_reg = IoReg_Read32(0xB809D008); //KPOST_TOP__REG_POST_INT_SOURCE_SEL_ADDR
    u32_interrupt_reg &= 0xfffffe1f;
    IoReg_Write32(0xB809D008, u32_interrupt_reg);
}

static int memc_pm_event (struct notifier_block *this, unsigned long event, void *ptr)
{
        switch (event) {
    case PM_SUSPEND_PREPARE:
        printk("%s %d\n",__func__,__LINE__);
        memc_isr_disable();
        break;
        default:
                break;
        }

    return NOTIFY_DONE;
}

static struct notifier_block memc_notifier = {
  .notifier_call = memc_pm_event,
};


int vpq_memc_module_init(void)
{
//H5X//	sys_reg_sys_srst3_RBUS sys_reg_sys_srst3_reg;
//H5X//	sys_reg_sys_clken3_RBUS sys_reg_sys_clken3_reg;




	//enable sr clk
//H5X//	sys_reg_sys_srst3_reg.regValue = 0;
//H5X//	sys_reg_sys_srst3_reg.rstn_sr = 1;
//H5X//	sys_reg_sys_srst3_reg.write_data = 1;
//H5X//	IoReg_Write32(SYS_REG_SYS_SRST3_reg, sys_reg_sys_srst3_reg.regValue);

//H5X//	sys_reg_sys_clken3_reg.regValue = 0;
//H5X//	sys_reg_sys_clken3_reg.clken_sr = 1;
//H5X//	sys_reg_sys_clken3_reg.write_data = 1;
//H5X//	IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, sys_reg_sys_clken3_reg.regValue);	

	//memory allocate check
	int result;
	int vpq_memc_devno;
	dev_t devno = 0;//vbe device number
	//PANEL_CONFIG_PARAMETER *panel_parameter = NULL;

	result = alloc_chrdev_region(&devno, vpq_memc_minor, vpq_memc_nr_devs,VPQ_MEMC_DEVICE_NAME);
	vpq_memc_major = MAJOR(devno);
	if (result < 0) {
		rtd_printk(KERN_WARNING, TAG_NAME, "VPQ_MEMC_DEVICE: can't get major %d\n", vpq_memc_major);
		return result;
	}

	rtd_printk(KERN_DEBUG, TAG_NAME, "VPQ_MEMC_DEVICE init module major number = %d\n", vpq_memc_major);
	vpq_memc_devno = MKDEV(vpq_memc_major, vpq_memc_minor);

	vpq_memc_class = class_create(THIS_MODULE, VPQ_MEMC_DEVICE_NAME);

	if (IS_ERR(vpq_memc_class))
	{
		rtd_printk(KERN_DEBUG, TAG_NAME, "scalevpqmemc: can not create class...\n");
	    result=PTR_ERR(vpq_memc_class);
		goto fail_class_create;
	}
	vpq_memc_class->devnode = vpq_memc_devnode;
	vpq_memc_platform_devs = platform_device_register_simple(VPQ_MEMC_DEVICE_NAME, -1, NULL, 0);
    if((result=platform_driver_register(&vpq_memc_device_driver)) != 0)
	{
		rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vpqmemc: can not register platform driver...\n");
    	goto fail_platform_driver_register;
    }

	cdev_init(&vpq_memc_cdev, &vpq_memc_fops);
	vpq_memc_cdev.owner = THIS_MODULE;
   	vpq_memc_cdev.ops = &vpq_memc_fops;
	result = cdev_add (&vpq_memc_cdev, vpq_memc_devno, 1);
	if (result)
	{
		MEMC_DBG_PRINT("Error %d adding VPQ_MEMC_DEVICE!\n", result);
		goto fail_cdev_init;
	}
	device_create(vpq_memc_class, NULL, MKDEV(vpq_memc_major, 0), NULL,VPQ_MEMC_DEVICE_NAME);
	sema_init(&vpq_memc_Semaphore, 1);
	sema_init(&livezoom_memcclose_Semaphore, 1);
	sema_init(&MEMC_CLK_Semaphore, 1);
	//panel_parameter =  (PANEL_CONFIG_PARAMETER *)&platform_info.panel_parameter;
	//Panel_InitParameter(panel_parameter);
	//Panel_LVDS_To_Hdmi_Converter_Parameter();

        register_pm_notifier(&memc_notifier);

	return 0;//Success

fail_cdev_init:
	platform_driver_unregister(&vpq_memc_device_driver);
fail_platform_driver_register:
	platform_device_unregister(vpq_memc_platform_devs);
	vpq_memc_platform_devs = NULL;
	class_destroy(vpq_memc_class);
fail_class_create:
	vpq_memc_class = NULL;
	unregister_chrdev_region(vpq_memc_devno, vpq_memc_nr_devs);
	return result;
}

void __exit vpq_memc_module_exit(void)
{
	dev_t devno = MKDEV(vpq_memc_major, vpq_memc_minor);
	MEMC_DBG_PRINT("vbe clean module vpq_memc_major = %d\n", vpq_memc_major);

  	device_destroy(vpq_memc_class, MKDEV(vpq_memc_major, 0));
  	class_destroy(vpq_memc_class);
	vpq_memc_class=NULL;
	cdev_del(&vpq_memc_cdev);

   	/* device driver removal */
	if(vpq_memc_platform_devs)
	{
		platform_device_unregister(vpq_memc_platform_devs);
		vpq_memc_platform_devs=NULL;
	}
  	platform_driver_unregister(&vpq_memc_device_driver);

	/* cleanup_module is never called if registering failed */
	unregister_chrdev_region(devno, vpq_memc_nr_devs);
}

module_init(vpq_memc_module_init);
module_exit(vpq_memc_module_exit);
