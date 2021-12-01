#define __AVD_VD__
#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/delay.h>
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
#include <mach/io.h>
#include <linux/pageremap.h>
#include <uapi/linux/const.h>
#include <linux/mm.h>
#include <linux/string.h>
#include <linux/freezer.h>
#include <linux/timer.h>
#include <tvscalercontrol/scaler_vfedev.h>
#include <ioctrl/scaler/vfe_cmd_id.h>
#include <tvscalercontrol/vdc/video.h>
#include <tvscalercontrol/scalerdrv/inprocvideo.h>
#include <tvscalercontrol/pcbsource/pcbSource.h>

#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerDrvCommon.h>
#else
#include <scalercommon/scalerDrvCommon.h>
#endif

#include <tvscalercontrol/scalerdrv/syncproc.h>
#include <rbus/adc_reg.h>
#include <mach/pcbMgr.h>
#include <tvscalercontrol/vdc/yc_separation_vpq.h>
#include <tvscalercontrol/vdc/video_factory.h>
#include <tvscalercontrol/vdc/video_input.h>
#include <tvscalercontrol/adcsource/adcctrl.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#ifdef CONFIG_ENABLE_VD_27MHZ_MODE
#include <tvscalercontrol/scaler/scalervideo.h>
#endif
#include <tvscalercontrol/scaler_vscdev.h>
#include <tvscalercontrol/scaler_vpqdev.h>

//#include <tvscalercontrol/tve/tve.h>
#include <tvscalercontrol/vdac/vdac.h>

#include <tvscalercontrol/scalerdrv/power.h>
#include <rbus/vdpq_reg.h>
#include <rbus/sys_reg_reg.h>
#include <rbus/pll27x_reg_reg.h>
#include <rtk_kdriver/rtk_crt.h>
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include <tvscalercontrol/vdc/video.h>
#include <tvscalercontrol/avd/avdctrl.h>
#include <tvscalercontrol/avd/avdctrl_vd.h>
#include <tvscalercontrol/io/ioregdrv.h>
#include <rbus/tv_sb1_ana_reg.h>
#include <rbus/audio_reg.h>
#include <rbus/vdtop_reg.h>//sunray

#ifdef CONFIG_CUSTOMER_TV010
#include <rbus/vgip_reg.h>
#include <tvscalercontrol/scalerdrv/mode.h>
#endif

 #define TAG_NAME_AVD "AVD"
/**********************************************/
static bool vdc_TV_reset = FALSE;
static unsigned char g_ucTimerInitCount = 0;
static unsigned char g_bTimerInitDone = 0;
static unsigned char g_ucDetTimingInAutoScan = FALSE;
static unsigned int *AVD_Register_Backup;
unsigned char g_ucColorOK = TRUE;
unsigned char g_ucPreColorStd = 0xff, g_ucCurColorStd = 0xff;
unsigned char g_ucPreMode = 0xff, g_ucCurMode = 0xff;
unsigned int g_ulNoHVCount;
struct timer_list VDTimerList;
extern VDC_POWER_SETTING g_vdc_power_setting;
extern DEBUG_SCALER_VSC_STRUCT DbgSclrFlgTkr;
#define VD625_RECHECK_COUNT 10
#define CHROMA_LOCK_COUNTER_THRESHOLD 30
#define CHROMA_LOCK_COUNTER_THRESHOLD_ALL_MODE 50
void IFD_SIF_ADC_Initial_Flow(void);//add for audio requirements
extern void Scaler_VBI_connect(unsigned char source, unsigned char mode,unsigned char vdc_mode);
extern void Scaler_VBI_disconnect(void);
extern void wss_data_handle(void);
extern void AVD_UpdateLGE_wid_len(unsigned int len,unsigned int wid);

unsigned char g_ucTimerEnable = FALSE;
static unsigned int g_ucTimerCount = 0x00000000;

static unsigned int g_uiBufferDelay_CountTH = 15; //set default 150ms
unsigned int g_uiBufferDelay_Count = 0x00000000;
unsigned int g_uiBuffer_Ready = 0xff;

unsigned int check_dma_3d_Count = 0x0;
unsigned int dma_3d_on_time = 0x0;
unsigned int dma_3d_on_time_end = 0x0;

unsigned int dma_3d_cost_time = 0x0;

unsigned int ATV_no_signal_Count = 0x0;
#ifdef _PRINT_AVD_COST_TIME
unsigned char check_vstate = TRUE;
#endif


extern unsigned long g_ulVDCPhyAddr_cache;
extern unsigned int *g_ulVDCPhyAddr_nonCache;
extern unsigned char g_ucMode_Curr;


//static unsigned char g_ucHVLockCount;

void Scaler_AVD_Set_VDC_Power_Setting(VDC_POWER_SETTING pow, unsigned char source)
{
	/* prevent on to on operation */
	if (VDC_Power_on != pow || VDC_Power_on != g_vdc_power_setting) {
		rtd_printk(KERN_INFO, TAG_NAME_AVD, "Get_AVD_ScalerDispinfo %s VDC power\n",
			   (pow == VDC_Power_on ? "turn on" :
			   (pow == VDC_Power_off ? "turn off" : "save")));
		drvif_module_vdc_Power_Setting(pow, source);
	}

	g_vdc_power_setting = pow;
}

VDC_POWER_SETTING Scaler_AVD_Get_VDC_Power(void)
{
	return g_vdc_power_setting;
}

void AVD_Memory_Allocate(void)
{
	/* Use dvr memory allocation */
	unsigned int ulPhyAddr = 0;
	if (g_ulVDCPhyAddr == 0)
	{
		g_ulVDCPhyAddr_cache = (unsigned long)dvr_malloc_uncached_specific(_SDRAM_3D_COM_USE, GFP_DCU2_FIRST, (void **)&g_ulVDCPhyAddr_nonCache);
		g_ulVDCPhyAddr = (unsigned int)dvr_to_phys((void*)g_ulVDCPhyAddr_cache);
	}

	/* Check allocaet success or not */
	if(g_ulVDCPhyAddr == 0) {
		rtd_printk(KERN_ERR, TAG_NAME_AVD, "[ERROR] Allocate DCU2 size = %x fail\n", _SDRAM_3D_COM_USE);
	}
	else
	{
		ulPhyAddr = g_ulVDCPhyAddr + _SDRAM_3D_COM_OFFSET;
		rtd_printk(KERN_INFO, TAG_NAME_AVD, "VDC get addr = %x, _SDRAM_3D_COM_USE = %x, _SDRAM_3D_COM_OFFSET = %x\n", ulPhyAddr, _SDRAM_3D_COM_USE, _SDRAM_3D_COM_OFFSET);
		drvif_module_vpq_3D_mem_Initial(ulPhyAddr);
		drvif_module_vpq_DmaAccessCtrl(ON);
	}

}

void AVD_Memory_Free(void)
{
	if(g_ulVDCPhyAddr != 0)
	{
		dvr_free((void*)g_ulVDCPhyAddr_cache);
		g_ulVDCPhyAddr = 0;
		g_ulVDCPhyAddr_cache = 0;
		g_ulVDCPhyAddr_nonCache = 0;
	}
}

void AVD_SetBufferDelay_CountTH(unsigned int value)
{
	g_uiBufferDelay_CountTH = value;
}

void VDTimer(unsigned long arg)
{
        enum CRT_CLK clken = CLK_ON;
        unsigned char ucRet = _TRUE;
		vdpq_dma_ctrl4_RBUS vdpq_dma_ctrl4_reg;

        if (drvif_module_vdc_CheckFactoryModEnable(ON))
                 return;

        CRT_CLK_OnOff(SCALER_VDC_3, clken , (void *)&ucRet);
        if (!ucRet)
        {
                 VDC_DEBUG_MSG(VDC_MSG_ERROR, "[SCALER_VDC_3]VD clock is not setted, set it !\n");
                 g_ucStopVDTimer = TRUE;
                 return;
        }

        CRT_CLK_OnOff(SCALER_VDC_9, clken , (void *)&ucRet);
        if (!ucRet)
        {
                 VDC_DEBUG_MSG(VDC_MSG_ERROR, "[SCALER_VDC_9]VD clock is not setted, set it !\n");
                 g_ucStopVDTimer = TRUE;
		return;
	}

	drvif_module_vdc_Status_Loop();

	if (g_ucTimerEnable)
		g_ucTimerCount ++;

	if (g_uiBuffer_Ready == 0)
		g_uiBufferDelay_Count ++;

	if (g_uiBufferDelay_Count >= g_uiBufferDelay_CountTH)
	{
		g_uiBuffer_Ready = 1;
		g_uiBufferDelay_Count = 0;
		#ifdef _PRINT_AVD_COST_TIME
			rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME: %s(%d) g_uiBuffer_Ready = 1 time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
		#endif
	}

	if ((g_ucSrcType == _SRC_CVBS)&&(g_ucDetectStage == DETECT_STAGE_FINAL))
	{
		if (!drvif_video_check_AV_stable())
		{
			//VDC_DEBUG_MSG(VDC_MSG_DEBUG3, "g_ucDetectStage=%x",g_ucDetectStage);

			drvif_module_vdc_Set_Vstate(VDC_FIX_VSTATE0);
			drvif_module_vdc_Set_Vstate(VDC_VSTATE_RESET);
			g_ucDetectStage = DETECT_STAGE_INIT;
			avd_good_timing_ready = FALSE;
			g_ucColorOK = FALSE;
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "g_ucColorOK = FALSE\n");
//			ClearAVDLGETimingInfo();
		}
	}

  	if(get_AVD_Input_Source() == _SRC_TV)
	{
		if (0 == drvif_module_vdc_read_Clamping_path())
		{
#if 1  //ch_change_flag, 20151221
			if (atv_channel_change)
#else
			if (TRUE == vdc_exTV_chch)
#endif
			{
				#ifndef SPEEDUP_NEW_SCALER_FLOW_FOR_ATV
				if (vdc_resetTV_Count == 0)
					g_ucVDPreMode = _MODE_UNKNOWN;
				#endif
				vdc_resetTV_Count ++;

				if (vdc_resetTV_Count >= 18)
				{
					atv_channel_change=FALSE;
					#ifdef _PRINT_AVD_COST_TIME
					rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME: %s(%d) time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
					#endif
					//rtd_printk(KERN_INFO, TAG_NAME_AVD,"%s line=%d atv_ch_change=%d atv_change_start=%d avd_good_timing_ready=%d,\n",__FUNCTION__,__LINE__,atv_channel_change,atv_channel_change_start,avd_good_timing_ready);
					ClearAVDLGETimingInfo();
					drvif_module_vdc_tv_Reset();
					drvif_module_vdc_SoftReset();//rtd_printk(KERN_EMERG, TAG_NAME_AVD, "\n[vdtest]external_ch\n");
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH, "[ext]vdc_SoftReset\n");
#if 0  //ch_change_flag, 20151221
					vdc_exTV_chch = FALSE;
#endif
					vdc_resetTV_Count = 0x0;
					g_ucDetectStage = DETECT_STAGE_INIT;
					avd_good_timing_ready = FALSE;
					vdc_TV_reset = TRUE;
					ATV_no_signal_Count = 0;

					DbgSclrFlgTkr.g_ucVSCCheckATVChanelChange = TRUE;
					DbgSclrFlgTkr.g_ucVSCATVChanelChangeStart = FALSE;
					DbgSclrFlgTkr.g_ucVSCATVSetWinBlankCount = 0;

					if (drvif_module_vdc_Get625flag())
					{
						// 576i PAL
						drvif_module_vdc_FreeRun(VDC_FREERUN_625);
						VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[T]FREERUN_625\n");
					}
					else
					{
						// 480i NTSC
						drvif_module_vdc_FreeRun(VDC_FREERUN_525);
						VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[T]FREERUN_525\n");
					}
				}
			}
		}
		else
		{
				 		//if (TRUE == vdc_inTV_chch)
			if (drvif_module_vdc_read_internal_ch_change_flag()) //for internal demod
			{
				vdc_resetTV_Count ++;
				if (vdc_resetTV_Count >= 2) //original 12
				{
					#ifdef _PRINT_AVD_COST_TIME
					rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME: %s(%d) time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
					#endif
					#ifndef SPEEDUP_NEW_SCALER_FLOW_FOR_ATV
					g_ucVDPreMode = _MODE_UNKNOWN;
					#endif
					drvif_module_vdc_tv_Reset();
					drvif_module_vdc_SoftReset();//rtd_printk(KERN_EMERG, TAG_NAME_AVD, "\n[vdtest]interna_ch\n");
					//vdc_inTV_chch = FALSE;
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH, "[int]vdc_SoftReset\n");
					drvif_module_vdc_set_internal_ch_change_flag(FALSE);
					vdc_resetTV_Count = 0x0;
					g_ucDetectStage = DETECT_STAGE_INIT;
					avd_good_timing_ready = FALSE;
					vdc_TV_reset = TRUE;
					ATV_no_signal_Count = 0;
					atv_channel_change = FALSE;//[internal]

					DbgSclrFlgTkr.g_ucVSCCheckATVChanelChange = TRUE;
					DbgSclrFlgTkr.g_ucVSCATVChanelChangeStart = FALSE;
					DbgSclrFlgTkr.g_ucVSCATVSetWinBlankCount = 0;
				}
			}
			if (drvif_module_vdc_read_ch_change_flag())
			{
				#ifndef SPEEDUP_NEW_SCALER_FLOW_FOR_ATV
				if (vdc_resetTV_Count == 0)
					g_ucVDPreMode = _MODE_UNKNOWN;
				#endif
				vdc_resetTV_Count ++;
				if (vdc_resetTV_Count >= 2) //original 12
				{
					#ifdef _PRINT_AVD_COST_TIME
					rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME: %s(%d) time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
					#endif
					drvif_module_vdc_set_ch_change_flag(FALSE);
					#ifndef SPEEDUP_NEW_SCALER_FLOW_FOR_ATV
					g_ucVDPreMode = _MODE_UNKNOWN;
					#endif
					drvif_module_vdc_tv_Reset();
					//drvif_module_vdc_SoftReset();
					drvif_module_vdc_SoftReset_New();
					vdc_resetTV_Count = 0x0;
					g_ucDetectStage = DETECT_STAGE_INIT;
					avd_good_timing_ready = FALSE;
					vdc_TV_reset = TRUE;
					ATV_no_signal_Count = 0;
					atv_channel_change = FALSE;//[internal]

					DbgSclrFlgTkr.g_ucVSCCheckATVChanelChange = TRUE;
					DbgSclrFlgTkr.g_ucVSCATVChanelChangeStart = FALSE;
					DbgSclrFlgTkr.g_ucVSCATVSetWinBlankCount = 0;
				}
			}

		}
  	}

	if (FALSE == g_ucStopVDTimer)
	{
		mod_timer(&VDTimerList, jiffies + HZ/100);
	}

	if (TRUE == check_dma_3d_stable){
		vdpq_dma_ctrl4_reg.regValue = vdcf_inl(VDPQ_DMA_CTRL4_reg);
		if((vdpq_dma_ctrl4_reg.dma_3d_on_off) && (drvif_module_vdc_Read_Vstate()==3)){
			check_dma_3d_Count++;
			if(check_dma_3d_Count==1){
				dma_3d_on_time = IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg);
				rtd_printk(KERN_EMERG, TAG_NAME_AVD, "####dma_3d_on_off=1  check_dma_3d_Count =1 time:%d ####\r\n", dma_3d_on_time);
#ifdef _PRINT_AVD_COST_TIME
				rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME: %s(%d) check_dma_3d_Count==1 time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
#endif

			}
			dma_3d_on_time_end = IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg);
			if(dma_3d_on_time>dma_3d_on_time_end)
				dma_3d_cost_time = dma_3d_on_time_end + (0xffffffff - dma_3d_on_time);
			else
				dma_3d_cost_time = dma_3d_on_time_end - dma_3d_on_time;
			if (dma_3d_cost_time > 12600){	//12600 = 140 * 90
				rtd_printk(KERN_EMERG, TAG_NAME_AVD, "####dma_3d_cost_time >=100 check_dma_3d_Count =%d cost time:%d ####\r\n",check_dma_3d_Count, dma_3d_cost_time);
				check_dma_3d_Count = 0;
				check_dma_3d_stable = FALSE;
				vdpq_dma_3d_ready =TRUE;
#ifdef _PRINT_AVD_COST_TIME
				rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME: %s(%d) check_dma_3d_Count==1 +140ms time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
#endif

			}
		}else{
			check_dma_3d_Count = 0;
			vdpq_dma_3d_ready =FALSE;
		}
	}else{
		check_dma_3d_Count = 0;
	}

#ifdef _PRINT_AVD_COST_TIME
	if(drvif_module_vdc_Read_Vstate()==3 && check_vstate){
		check_vstate = FALSE;
		rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME: %s(%d) drvif_module_vdc_Read_Vstate()==3 time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
	}
#endif


}

void VD_recheck_625flag_loop(unsigned char *flag)
{
	int i = 0;
	for(i = 0; i < VD625_RECHECK_COUNT; i++) {
		if(*flag == 0xff)
			break;
		mdelay(5);
		if(*flag != drvif_video_get_625_flag() && *flag != 0xff) {
			*flag = drvif_video_get_625_flag();
			break;
		}
		if(i == VD625_RECHECK_COUNT - 1) {
			;
		}
		if (!drvif_video_check_AV_stable())
		{
			break;
		}
	}
}

char Scaler_AVD_Timer_Init(void)
{
	char cRet = 0;

	g_ucTimerInitCount++;

	rtd_printk(KERN_INFO, TAG_NAME_AVD,"#####[%s(%d)] g_ucTimerInitCount=%d\n",__func__,__LINE__, g_ucTimerInitCount);

	//if (g_ucTimerInitCount >1 || timer_pending(&VDTimerList))
	if (timer_pending(&VDTimerList))
	{
		rtd_printk(KERN_EMERG, TAG_NAME_AVD,"Error! Scaler_AVD_Timer_Init more than twice. g_ucTimerInitCount=%d\n", g_ucTimerInitCount);
		dump_stack();

		return -1;
	}

	BUG_ON(timer_pending(&VDTimerList));
	g_ucStopVDTimer = FALSE;
	/* timer init*/
	init_timer(&VDTimerList);
	VDTimerList.data = ((unsigned long) 0);
	VDTimerList.function = (void *)VDTimer;
	//VDTimerList.expires = jiffies + 10*HZ;
	VDTimerList.expires = jiffies + HZ/100;
	/*add timer*/
	add_timer(&VDTimerList);
	g_bTimerInitDone = TRUE;

	return cRet;
}

void Scaler_AVD_Timer_Delete(void)
{
	rtd_printk(KERN_INFO, TAG_NAME_AVD,"Scaler_AVD_Timer_Delete  g_ucTimerInitCount=%d\n", g_ucTimerInitCount);

	if (g_ucTimerInitCount < 1)
	{
		rtd_printk(KERN_EMERG, TAG_NAME_AVD,"Error! Scaler_AVD_Timer_Delete. g_ucTimerInitCount=%d\n", g_ucTimerInitCount);
		BUG_ON(1);
	}
	g_ucTimerInitCount--;
	g_ucStopVDTimer = TRUE;
	/* delete timer */
	del_timer_sync(&VDTimerList);
	g_bTimerInitDone = FALSE;
}

void Scaler_AVD_ClearTiming(void)
{
	VDC_DEBUG_MSG(VDC_MSG_TVCHCH, "display change !! go to DETECT_STAGE_INIT\n");
	avd_good_timing_ready = FALSE;
	ClearAVDLGETimingInfo();
	g_ucVDMode = VDC_MODE_ERROR;
	g_ucColorOK = FALSE;
	#ifdef SPEEDUP_NEW_SCALER_FLOW_FOR_ATV
	g_bChangeSystem = false;
	g_bMainRunSearchState = false;
	g_bSubRunSearchState = false;
	#else
	g_bChangeSystem = TRUE;
	g_bMainRunSearchState = true;
	g_bSubRunSearchState = true;
	#endif
	g_bStartChangeSystem = false;
	g_ucDetectStage = DETECT_STAGE_INIT;
}

static unsigned char Scaler_VDC_Support525(unsigned char ucVDmode)
{
	unsigned char ucChange = 0;
	if (drvif_module_vdc_Get625flag() == 0)
	{
		if (g_ucMode_Curr != _MODE_480I) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[S5]625 flag=0, but not set to 480i, reset !!g_ucMode_Curr=%x\n",g_ucMode_Curr);
			Scaler_AVD_ClearTiming();
			return ucChange;
		}

		if (drvif_module_vdc_ReadMode(VDC_SET) != ucVDmode) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[S5]select %x, but not set to %x, reset !!\n",ucVDmode,ucVDmode);
			ucChange = 1;
			g_ucVDMode = ucVDmode;
		}

		if (drvif_module_vdc_ReadMode(VDC_DETECT) == ucVDmode) {
			drvif_module_vdc_Set_CKill_Mode(CKill_AUTO);
		} else {
			if(ucVDmode==VDC_MODE_PAL60){
				ucChange = 1;
				g_ucVDMode = VDC_MODE_NTSC443;
			}
			drvif_module_vdc_Set_CKill_Mode(CKill_ON);
		}
	} else {
		if (g_ucMode_Curr != _MODE_576I) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[S5]625 flag =1, but not set to 576i, reset !!\n");
			Scaler_AVD_ClearTiming();
			return ucChange;
		}

		if (drvif_module_vdc_ReadMode(VDC_SET) != VDC_MODE_NTSC50) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[S5]select NTSC, but 625flag = 1, change to NTSC-50, reset !!\n");
			ucChange = 1;
			g_ucVDMode = VDC_MODE_NTSC50;
		}
		drvif_module_vdc_Set_CKill_Mode(CKill_ON);
	}
	return ucChange;
}

static unsigned char Scaler_VDC_Support625(unsigned char ucVDmode)
{
	unsigned char ucChange = 0;
	if (drvif_module_vdc_Get625flag() == 0)
	{
		if (g_ucMode_Curr != _MODE_480I) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[S6]625 flag=0, but not set to 480i, reset !!g_ucMode_Curr=%x\n",g_ucMode_Curr);
			Scaler_AVD_ClearTiming();
			return ucChange;
		}

		if (drvif_module_vdc_ReadMode(VDC_SET) != VDC_MODE_NTSC443) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[S6]select PAL-N, but 625flag = 0, change to ntsc443, reset !!\n");
			ucChange = 1;
			g_ucVDMode = VDC_MODE_NTSC443;
		}
		drvif_module_vdc_Set_CKill_Mode(CKill_ON);
	} else {	// PAL-Nc
		if (g_ucMode_Curr != _MODE_576I) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[S6]625 flag =1, but not set to 576i, reset !!\n");
			Scaler_AVD_ClearTiming();
			return ucChange;
		}

		if (drvif_module_vdc_ReadMode(VDC_SET) != ucVDmode) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[S6]select %x, but not set to %x, reset !!\n",ucVDmode,ucVDmode);
			ucChange = 1;
			g_ucVDMode = ucVDmode;
		}

		if (drvif_module_vdc_ReadMode(VDC_DETECT) == ucVDmode) {
			drvif_module_vdc_Set_CKill_Mode(CKill_AUTO);
		} else {
			drvif_module_vdc_Set_CKill_Mode(CKill_ON);
		}
	}
	return ucChange;
}

static unsigned char Scaler_VDC_Check525(unsigned char ucVDmode)
{
	unsigned char ucChange = 0;
	if (drvif_module_vdc_Get625flag() == 0)
	{
		if (g_ucMode_Curr != _MODE_480I) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[C5][1]625 flag=0, but not set to 480i, reset !!g_ucMode_Curr=%x\n",g_ucMode_Curr);
			Scaler_AVD_ClearTiming();
			return ucChange;
		} else {
			if (drvif_module_vdc_ReadMode(VDC_SET) != ucVDmode) {
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[C5][1]select ucVDmode=%x, but not set to %x, reset !!\n",ucVDmode,ucVDmode);
				ucChange = 1;
				g_ucVDMode = ucVDmode;
			} else {
				if (g_ucVDMode != g_ucVDPreMode) {
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[C5][1]check PreMode != curr mode, do Clear timing\n");
					Scaler_AVD_ClearTiming();
					return ucChange;
				}
			}
		}

		if (drvif_module_vdc_ReadMode(VDC_DETECT) == ucVDmode) {
			drvif_module_vdc_Set_CKill_Mode(CKill_AUTO);
		} else {
			drvif_module_vdc_Set_CKill_Mode(CKill_ON);
		}
	} else {
		if (g_ucMode_Curr != _MODE_576I) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[C5][1]625 flag =1, but not set to 576i, reset !!\n");
			Scaler_AVD_ClearTiming();
			return ucChange;
		}
		if (drvif_module_vdc_ReadMode(VDC_SET) != VDC_MODE_NTSC50) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[C5][1]select NTSC, but 625 flag=1, set to NTSC-50, reset !!\n");
			ucChange = 1;
			g_ucVDMode = VDC_MODE_NTSC50;
		}
		drvif_module_vdc_Set_CKill_Mode(CKill_ON);
	}
	return ucChange;
}

static unsigned char Scaler_VDC_Check625(unsigned char ucVDmode)
{
	unsigned char ucChange = 0;
	if (drvif_module_vdc_Get625flag() == 0)
	{
		if (g_ucMode_Curr != _MODE_480I) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[C6][1]625 flag=0, but not set to 480i, reset !!g_ucMode_Curr=%x\n",g_ucMode_Curr);
			Scaler_AVD_ClearTiming();
			return ucChange;
		}

		if (drvif_module_vdc_ReadMode(VDC_SET) != VDC_MODE_NTSC443) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[C6][1]select PAL-I, but 625 flag=0, set to ntsc443 reset !!\n");
			ucChange = 1;
			g_ucVDMode = VDC_MODE_NTSC443;
		}
		drvif_module_vdc_Set_CKill_Mode(CKill_ON);
	} else {
		if (g_ucMode_Curr != _MODE_576I) {
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[C6][1]625 flag =1, but not set to 576i, reset !!\n");
			Scaler_AVD_ClearTiming();
			return ucChange;
		} else {
			if (drvif_module_vdc_ReadMode(VDC_SET) != ucVDmode) {
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[C6][1]select ucVDmode=%x, but not set to %x, reset !!\n",ucVDmode,ucVDmode);
				ucChange = 1;
				g_ucVDMode = ucVDmode;
			} else {
				if (g_ucVDMode != g_ucVDPreMode) {
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[C6][1]check PreMode != curr mode, do Clear timing\n");
				Scaler_AVD_ClearTiming();
					return ucChange;
			}
		}
		}

		if (drvif_module_vdc_ReadMode(VDC_DETECT) == ucVDmode) {
			drvif_module_vdc_Set_CKill_Mode(CKill_AUTO);
		} else {
			drvif_module_vdc_Set_CKill_Mode(CKill_ON);
		}
	}
	return ucChange;
}

unsigned char Scaler_AVD_Break_DetectTiming(void)
{
	// Always detect timting
	if (TRUE == g_ucDetTimingInAutoScan)
	{
		return FALSE;
	}
	else
	{
		return drvif_module_vdc_read_scan_flag();
	}
}

void Scaler_AVD_Set_DetTiming_In_AutoScan_Flag(unsigned char a_ucFlag)
{
	g_ucDetTimingInAutoScan = a_ucFlag;

	//rtd_printk(KERN_EMERG, TAG_NAME_AVD, "Scaler_AVD_Set_DetTiming_In_AutoScan_Flag  g_ucDetTimingInAutoScan=%x\n", g_ucDetTimingInAutoScan);
}

extern ModeInformationType *Get_AVD_ScalerTiminginfo(void);
unsigned char Scaler_AVD_DetectTiming(void)
{
	//int cnt_chroma_lock;
	unsigned char ucRet = 0;
	unsigned char ucScalerColorStd = 0;
	StructDisplayInfo *ptAVDScalerDispInfo  = Get_AVD_ScalerDispinfo();
	ModeInformationType *ptAVDScalerTimingInfo = Get_AVD_ScalerTiminginfo();
	unsigned char uc625_flag = 0xff;
	unsigned char ucPAL_flag = 0xff;
	unsigned char j=0, k = 0;
	unsigned char ucVdSetMode = 0xff;
	unsigned char ucVdChange = 0;
	unsigned char ucVdCount = 0;
//	unsigned char mn_flag = 0xff;
	static bool match_support_color_system = true;

	if (drvif_module_vdc_ReadDisablemodeEN() == 1){//fix_625_flag HW san and scan speed up old method, RL
		drvif_module_vdc_DisablemodeEN(_DISABLE);
		drvif_module_vdc_Disablemode(_DISABLE);
		drvif_module_vdc_set_noSignalCounter_Value(0x03);
		rtd_printk(KERN_EMERG, TAG_NAME_AVD,"[Video][CheckHV][DetectTiming]**DisablemodeAddress=%x, noSignalCounter_ValueAddress=%x\n",  vdcf_inl(0xb80194a8), vdcf_inl(0xb8019314));
	}

	if (FALSE == module_vdc_check_pll27x_setting()  || FALSE == module_vdc_check_vd_clock()) {
		VDC_DEBUG_MSG(VDC_MSG_ERROR, "PLL27x did not setting good! \n");

		if(get_AVD_Global_Status() == SRC_CONNECT_DONE)
		{
			rtd_printk(KERN_INFO, TAG_NAME_AVD,"VD clock did not setting good! \n");
			rtd_printk(KERN_INFO, TAG_NAME_AVD,"Open VD clock again\n");

			if ((_SRC_TV == g_ucSrcType) && (KADP_AVD_INTERNAL_DEMOD == g_tAVDDemodType))
			{
				down(get_avd_power_semaphore());
				drvif_module_vdc_PowerCtrl(ON, _SRC_TV);
				if(vdc_needopenpowerflag == TRUE){
				Scaler_AVD_Set_VDC_Power_Setting(VDC_Power_on,_SRC_TV);
				}
				up(get_avd_power_semaphore());
			}
			else
			{
				down(get_avd_power_semaphore());
				drvif_module_vdc_PowerCtrl(ON, _SRC_CVBS);
				if(vdc_needopenpowerflag == TRUE){
				Scaler_AVD_Set_VDC_Power_Setting(VDC_Power_on,_SRC_CVBS);
				}
				//add for audio requirements
				if ((_SRC_TV == g_ucSrcType) && (KADP_AVD_EXTERNAL_DEMOD == g_tAVDDemodType)) {
					IFD_SIF_ADC_Initial_Flow();
				}
				up(get_avd_power_semaphore());
			}
		}
	}

	Check_PLL27X_Settings();

	if (TRUE == g_bTimerInitDone && TRUE == g_ucStopVDTimer && get_AVD_Global_Status() == SRC_CONNECT_DONE)
	{
		mod_timer(&VDTimerList, jiffies + HZ/100);

		g_ucStopVDTimer = FALSE;
		rtd_printk(KERN_INFO, TAG_NAME_AVD,"Restart timer\n");
	}

	if (FALSE == g_bTimerInitDone)
	{
		rtd_printk(KERN_EMERG, TAG_NAME_AVD,"Error! g_bTimerInitDone = FALSE  in Scaler_AVD_DetectTiming\n");
	}

	if(!VDC_get_detect_flag())
		return ucRet;

	if (g_ucSrcType == _SRC_TV) {
		if (1 == drvif_module_vdc_GetLockStatus()) {
			set_freezable();
			drvif_module_vdc_FreeRun(VDC_FREERUN_DISABLE);
		}

		//VDC_DEBUG_MSG(VDC_MSG_TVCHCH, "Vstate=%x,time=%d\n",drvif_module_vdc_Read_Vstate(),vdcf_inl(0xb80192d8));
		if (drvif_module_vdc_Read_Vstate() == 1) {
			drvif_module_vdc_new_vdetect_Enable(New_vedetect);
		}
	}

	if(!VDC_get_detect_flag())
		return ucRet;

	if (DETECT_STAGE_INIT == g_ucDetectStage && true == g_bStartChangeSystem) {
		g_bChangeSystem = true;
		g_ucColorOK = FALSE;
		VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "g_ucColorOK = FALSE\n");
	} else {
		g_bChangeSystem = false;
	}

	if(!VDC_get_detect_flag())
		return ucRet;

	if (1 == drvif_module_vdc_GetLockStatus()) {
		set_freezable();

#ifdef CONFIG_CUSTOMER_TV010
		AVD_TV_AV_Non_Standard_Process();
		if (g_ucSrcType == _SRC_TV) {
			if (FALSE == drvif_module_vdc_read_scan_flag() && DETECT_STAGE_FINAL == g_ucDetectStage)
				CTVCheckFVBias();
		}
#endif

		//rtd_printk(KERN_EMERG, TAG_NAME_AVD, "VDC HV lock\n");
		if (DETECT_STAGE_FINAL == g_ucDetectStage) {
			drvif_module_vdc_CheckInputStatus(g_ucSrcType, 1);
			set_freezable();
		} else {
			drvif_module_vdc_CheckInputStatus(g_ucSrcType, 0);
			set_freezable();
		}

		if(!VDC_get_detect_flag())
			return ucRet;

		if (0 == drvif_module_vdc_GetLockStatus())
		{
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - 1\n");
			return ucRet;
		}

		if(!VDC_get_detect_flag())
			return ucRet;

#ifndef CONFIG_CUSTOMER_TV010
		if (g_ucSrcType == _SRC_TV)
		{
			// In auto scan flow, don't detect timing
			if (Scaler_AVD_Break_DetectTiming())
			{
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "tv detect timing return - 1");
				return ucRet;
			}
		}
#endif

		if(!VDC_get_detect_flag())
			return ucRet;

		switch (g_ucDetectStage) {

		/*=========================================================================*/
		case DETECT_STAGE_INIT:
			set_freezable();
			#ifdef _PRINT_AVD_COST_TIME
			rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME:  %s(%d) init start time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
			#endif

			module_vdc_Set_bgate_Setting(1); //[Start]ryanliao 20181226 bgate_Setting
			
			drvif_module_vdc_Set_lose_chromalock_count(0x05);	/* for cross pattern (no burst) */
			drvif_module_DMA_CHK3D_ENABLE_control(VDC_CHANEL_SWISH_MODE); /*set DMA_CHK3D_ENABLE control*/
			uc625_flag = drvif_video_get_625_flag();
			VD_recheck_625flag_loop(&uc625_flag);
			ucPAL_flag = drvif_video_get_pal_flag();
			if(!VDC_get_detect_flag())
				return ucRet;
			set_freezable();
			vdc_TV_reset = FALSE;
			if (uc625_flag != 0xff)
			{
				g_ucColorOK = FALSE;
				if (!drvif_video_check_AV_stable())
				{
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - a1\n");
					return ucRet;
				}
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "625 flag OK, Go !!!\n");

				memset(ptAVDScalerDispInfo, 0, sizeof(StructDisplayInfo));
				memset(ptAVDScalerTimingInfo, 0, sizeof(ModeInformationType));

				if (uc625_flag == 0)
					g_ucMode_Curr = _MODE_480I;
				else
					g_ucMode_Curr = _MODE_576I;
				//VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "\n DETECT_STAGE_INIT, g_tSupportedColorSys=%x\n",g_tSupportedColorSys);
				rtd_printk(KERN_INFO, TAG_NAME_AVD, "#####[%s(%d)] DETECT_STAGE_INIT,g_tSupportedColorSys=0x%x,uc625_flag=%d\n",__func__,__LINE__,g_tSupportedColorSys,uc625_flag);

				ptAVDScalerDispInfo->ucMode_Curr = g_ucMode_Curr;
				ptAVDScalerDispInfo->IPV_ACT_LEN = (g_ucMode_Curr == _MODE_480I)?480:576;
				ptAVDScalerDispInfo->IPH_ACT_WID = 704;
				AVD_UpdateLGE_wid_len(ptAVDScalerDispInfo->IPV_ACT_LEN,ptAVDScalerDispInfo->IPH_ACT_WID);

				avd_good_timing_ready = TRUE;
				check_dma_3d_stable = TRUE;
				vdpq_dma_3d_ready =FALSE;

				//M6PRTANPM-765 improve chroma lock speed ryanliao 20190226 [start]
				if(g_ucSrcType == _SRC_CVBS && drvif_module_vdc_NoiseStatus() < 0x20)
				{
					module_vdc_Set_lose_chromalock_level(0x03);//improve chromalock speed
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "change chromalock_level !!!\n");
				}else{ //TV 
					module_vdc_Set_lose_chromalock_level(0x04); 
				}
				//[end]
				
				#ifdef _PRINT_AVD_COST_TIME
					check_vstate = TRUE;
					rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME: %s(%d) good timing ready time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
				#endif

				switch ((UINT8)g_tSupportedColorSys)
				{
				case TV_ATSC:	// NTSC
					if (uc625_flag == 0)
						g_ucVDMode = VDC_MODE_NTSC;
					else {
						g_ucVDMode = VDC_MODE_NTSC50;
						drvif_module_vdc_Set_CKill_Mode(CKill_ON);
					}
					break;
				case TV_DVBT:	// NTSC, PAL I, SECAM
					if (uc625_flag == 0)
						g_ucVDMode = VDC_MODE_NTSC;
					else {
						g_ucVDMode = VDC_MODE_PALI; // need to check mode again
						ucVdChange = 1;
					}
					break;
				case TV_Colombia:	// PAL_NC_358, PAL_M, NTSC
					if (uc625_flag == 0) {
						if(ucPAL_flag){
							g_ucVDMode = VDC_MODE_PALM;	// need to check mode again
							//ucVdChange = 1;
						}else{
							g_ucVDMode = VDC_MODE_NTSC;
						}
					} else
						g_ucVDMode = VDC_MODE_PALN;
					break;
				case TV_SetPALN:
					if (uc625_flag == 0) {
						g_ucVDMode = VDC_MODE_NTSC443;
						drvif_module_vdc_Set_CKill_Mode(CKill_ON);
					}
					else
						g_ucVDMode = VDC_MODE_PALN;
					break;
				case TV_SetPALM:
					if (uc625_flag == 0)
						g_ucVDMode = VDC_MODE_PALM;
					else {
						g_ucVDMode = VDC_MODE_NTSC50;
						drvif_module_vdc_Set_CKill_Mode(CKill_ON);
					}
					break;
				case TV_PAL:	// PAL
					if (uc625_flag == 0) {
						g_ucVDMode = VDC_MODE_PAL60;
						drvif_module_vdc_Set_CKill_Mode(CKill_ON);
					}
					else
						g_ucVDMode = VDC_MODE_PALI; // need to check mode again
					break;
				case TV_SECAM:
					if (uc625_flag == 0) {
						g_ucVDMode = VDC_MODE_NTSC443;
						drvif_module_vdc_Set_CKill_Mode(CKill_ON);
					}
					else
						g_ucVDMode = VDC_MODE_SECAM;
					break;
				case TV_PAL60:
					if (uc625_flag == 0)
						g_ucVDMode = VDC_MODE_PAL60;
					else {
						g_ucVDMode = VDC_MODE_NTSC50;
						drvif_module_vdc_Set_CKill_Mode(CKill_ON);
					}
					break;
				case TV_NTSC443:
					if (uc625_flag == 0)
						g_ucVDMode = VDC_MODE_NTSC443;
					else {
						g_ucVDMode = VDC_MODE_NTSC50;
						drvif_module_vdc_Set_CKill_Mode(CKill_ON);
					}
					break;
				case TV_NTSC50:
					if (uc625_flag == 0){
						g_ucVDMode = VDC_MODE_NTSC443;
						drvif_module_vdc_Set_CKill_Mode(CKill_ON);
					}else {
						g_ucVDMode = VDC_MODE_NTSC50;
					}
					break;
				case TV_AllMode:
					g_ucVDMode = VDC_MODE_AUTO;
					break;
				default:
					match_support_color_system = false; //K6LG-373
					g_ucVDMode = VDC_MODE_AUTO;
					break;
				}

				rtd_printk(KERN_INFO, TAG_NAME_AVD, "#####[%s(%d)] DETECT_STAGE_INIT, g_ucVDMode=0x%x, g_ucVDPreMode=0x%x\n", __func__, __LINE__, g_ucVDMode, g_ucVDPreMode);
				drvif_module_vdc_SetMode(g_ucVDMode);

				// check VD set mode
				if (g_ucVDMode != VDC_MODE_AUTO)
				{
					g_ucTimerCount = 0x00;
					g_ucTimerEnable = TRUE;
					ucVdCount = 15;
					for (j = 0 ; j <= ucVdCount; ++j) {
					if (drvif_module_vdc_ReadMode(VDC_SET)== g_ucVDMode)
						break;
					if (g_ucTimerCount >= ucVdCount)
						break;
					msleep(10);
					}
					g_ucTimerEnable = FALSE;
				}
				
				if(!VDC_get_detect_flag())
					return ucRet;

				rtd_printk(KERN_INFO, TAG_NAME_AVD, "#####[%s(%d)] DETECT_STAGE_INIT, set mode 1, 94a4=0x%08x, ucVdChange=%x\n", __func__, __LINE__, vdcf_inl(0xb80194a4), ucVdChange);

				if (!drvif_video_check_AV_stable())
				{
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - a2\n");
					return ucRet;
				}

				/// loop 1 start   //////////////////////////////////////////////////////////
				if (ucVdChange == 1) {
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "mode 1 check go~~ max. 300mS \n");
					drvif_module_vdc_mode_speedup(mode_count_fast);
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#if 0					// 300mS
					g_ucTimerCount = 0x00;
					g_ucTimerEnable = TRUE;
					ucVdCount = 30;
					for (j = 0 ; j <= ucVdCount; ++j) {
						if (g_ucTimerCount >= ucVdCount)
							break;
						if(!VDC_get_detect_flag())
							return ucRet;
						if (vdc_TV_reset == TRUE)
							return 0;

						VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[%d] loop 1, 94a4=%x\n",j ,vdcf_inl(0xb80194a4));
						msleep(20);
						if (!drvif_video_check_AV_stable())
						{
							VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - a3\n");
							return ucRet;
						}
					}
				    g_ucTimerEnable = FALSE;
 #endif	
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "mode 1 done, 94a4=%x,  done ### \n",vdcf_inl(0xb80194a4));
					/// loop 1 stop  //////////////////////////////////////////////////////////////////////
				}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
				// 20mS
				g_ucTimerCount = 0x00;
				g_ucTimerEnable = TRUE;
				ucVdCount = 2;
				for (j = 0 ; j <= ucVdCount; ++j) {
					if (g_ucTimerCount >= ucVdCount)
						break;
					if(!VDC_get_detect_flag())
						return ucRet;
					if (vdc_TV_reset == TRUE)
						return 0;
					msleep(10);
				}
				g_ucTimerEnable = FALSE;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
				drvif_module_vdc_ResetChromaLockStatus();
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH, "wait c lock delay 1 [20ms], vdc_ChromaLockStatus = %x\n",vdc_ChromaLockStatus);
			}
			else
			{
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "DetectTiming false");
				return ucRet;
			}
			//move to Scaler_AVD_SetChannelChange, rzhen@2018-08-30
			//memset(ptAVDScalerDispInfo, 0, sizeof(StructDisplayInfo));
			//memset(ptAVDScalerTimingInfo, 0, sizeof(ModeInformationType));
			set_freezable();

			if(!VDC_get_detect_flag())
				return ucRet;
			if (vdc_TV_reset == TRUE)
				return ucRet;

			// VCO setting maybe changed by IFD
			if ((g_ucSrcType == _SRC_TV) && (module_vdc_check_pll27x_setting() == FALSE))
			{
				if(!VDC_get_detect_flag())
					return ucRet;
				drvif_module_vdc_FIFO_CLK_setting();
			}

			if(!VDC_get_detect_flag())
				return ucRet;
			set_freezable();


			/// check chroma lock start  //////////////////////////////////////////////////////////
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "check c lock go~~ max. 300mS \n");
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#if 0
			// 300mS
			g_ucTimerCount = 0x00;
			g_ucTimerEnable = TRUE;
			cnt_chroma_lock = (g_ucSrcType == _SRC_CVBS && g_ucVDMode == VDC_MODE_AUTO) ? (CHROMA_LOCK_COUNTER_THRESHOLD_ALL_MODE) : (CHROMA_LOCK_COUNTER_THRESHOLD);
			//rtd_printk(KERN_INFO, TAG_NAME_AVD,"%s line:%d cnt_chroma_lock:%d g_ucVDMode:%d, g_tSupportedColorSys:%d\n", __func__, __LINE__, cnt_chroma_lock, g_ucVDMode, g_tSupportedColorSys);
			for (k = 0 ; k <= cnt_chroma_lock; ++k) { /* check chroma locked */
				if (g_ucTimerCount >= cnt_chroma_lock) {
				//rtd_printk(KERN_INFO, TAG_NAME_AVD,"%s line:%d cnt_chroma_lock:%d g_ucVDMode:%d, g_tSupportedColorSys:%d\n", __func__, __LINE__, cnt_chroma_lock, g_ucVDMode, g_tSupportedColorSys);
					break;
				}

				if (drvif_module_vdc_GetChromaLockStatus()) {
					if (g_ucSrcType == _SRC_CVBS && g_ucVDMode == VDC_MODE_NTSC50 && g_tSupportedColorSys == TV_ATSC) {
						;// ntsc -> pali @cvbs(isdb_br) should wait until counter over thershold(300ms)
					} else if (g_ucSrcType == _SRC_CVBS && g_ucVDMode == VDC_MODE_PALN && g_tSupportedColorSys == TV_Colombia) {
						;// ntsc -> secam @cvbs(atsc) should wait until counter over thershold(300ms)
					} else if (g_ucSrcType == _SRC_CVBS && g_ucVDMode == VDC_MODE_AUTO) {
						;// cvbs auto mode need to wait until counter over threshold(500ms)
					} else {
						break;
					}
				}

				if(!VDC_get_detect_flag())
					return ucRet;
				if (vdc_TV_reset == TRUE)
					return ucRet;

#if 0
				if (!drvif_video_check_AV_stable())
				{
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH, "ulock return - a4\n");
					return ucRet;
				}
#endif
				msleep(10);
			}
			g_ucTimerEnable = FALSE;
#endif
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "check c lock done !!! \n");
			/// check chroma lock stop  //////////////////////////////////////////////////////////

			/// loop 2 start   //////////////////////////////////////////////////////////
			if (ucVdChange == 1) {
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "mode 2 check go~~ max. 100mS \n");
				if (drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_PALI) {
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
					// 200mS
					g_ucTimerCount = 0x00;
					g_ucTimerEnable = TRUE;
					ucVdCount = 20; //consistency check
					for (j = 0 ; j <= ucVdCount; ++j) {
						if (drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_SECAM)
							ucVdChange ++;
						if (ucVdChange >= 6) {
//							rtd_printk(KERN_EMERG, TAG_NAME_AVD, "Change to SECAM\n");
							break;
						}
						if (g_ucTimerCount >= ucVdCount) {
//							rtd_printk(KERN_EMERG, TAG_NAME_AVD, "Timer out\n");
							break;
						}
#if 0
						if(!VDC_get_detect_flag()) {
//							rtd_printk(KERN_EMERG, TAG_NAME_AVD, "ulock return - a5-1\n");
							return ucRet;
						}
						if (vdc_TV_reset == TRUE) {
//							rtd_printk(KERN_EMERG, TAG_NAME_AVD, "ulock return - a5-2\n");
							return ucRet;
						}
						if (!drvif_video_check_AV_stable())
						{
							VDC_DEBUG_MSG(VDC_MSG_TVCHCH, "ulock return - a5\n");
							return ucRet;
						}
#endif
						VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[%d] PAL=>SECAM ? 94a4=%x\n",j,vdcf_inl(0xb80194a4));
						msleep(10);
					}
					g_ucTimerEnable = FALSE;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//				} else if (drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_NTSC) {
				} else if (drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_PALM) {
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
					// 200mS
					g_ucTimerCount = 0x00;
					g_ucTimerEnable = TRUE;
					ucVdCount = 20; //consistency check
					for (j = 0 ; j <= ucVdCount; ++j) {
						if (drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_NTSC)
							ucVdChange ++;
						if (ucVdChange >= 6)
							break;
						if (g_ucTimerCount >= ucVdCount)
							break;
						if(!VDC_get_detect_flag())
							return ucRet;
						if (vdc_TV_reset == TRUE)
							return ucRet;
						if (!drvif_video_check_AV_stable())
						{
							VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - a6\n");
							return ucRet;
						}
						VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[%d] PAL-M=>NTSC ? 94a4=%x\n",j,vdcf_inl(0xb80194a4));
						msleep(10);
					}
					g_ucTimerEnable = FALSE;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
				}
			}
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "mode 2 done, 94a4=%x,  done ### ucVdChange=%x \n",vdcf_inl(0xb80194a4),ucVdChange);
			/// loop 2 stop   //////////////////////////////////////////////////////////

			if (((k==30)&&(!drvif_module_vdc_GetChromaLockStatus())) || (ucVdChange>=6))
			{
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[%s(line:%d)]g_tSupportedColorSys=%d\n",__FUNCTION__, __LINE__, g_tSupportedColorSys);
				switch ((UINT8)g_tSupportedColorSys)
				{
				default:
				case TV_PAL:
				case TV_SECAM:
				case TV_PAL60:
				case TV_NTSC443:
				case TV_NTSC50:
				case TV_ATSC:	// NTSC
				case TV_AllMode:
					break;
				case TV_DVBT:	// NTSC, PAL I, SECAM
					if (uc625_flag == 1)
						g_ucVDMode = VDC_MODE_SECAM;
					break;
				case TV_Colombia:	// PAL_NC_358, PAL_M, NTSC
					if (ucPAL_flag == 0) {
//						g_ucVDMode = VDC_MODE_PALM;
						g_ucVDMode = VDC_MODE_NTSC;
					}
					break;
#if 0
				case TV_AllMode:
					if (mn_flag == 1) {
						if (uc625_flag == 0)
							g_ucVDMode = VDC_MODE_PALM;
						else
							g_ucVDMode = VDC_MODE_NTSC50;
					} else {
						if (uc625_flag == 0)
							g_ucVDMode = VDC_MODE_PAL60;
						else
							g_ucVDMode = VDC_MODE_SECAM;
					}
#endif
					break;
				}
				drvif_module_vdc_SetMode(g_ucVDMode);

				// check VD set mode
					g_ucTimerCount = 0x00;
					g_ucTimerEnable = TRUE;
				ucVdCount = 15;
				for (j = 0 ; j <= ucVdCount; ++j) {
					if(drvif_module_vdc_ReadMode(VDC_SET)== g_ucVDMode)
						break;
					if (g_ucTimerCount >= ucVdCount)
							break;
						msleep(10);
				}

				g_ucTimerEnable = FALSE;

				if(!VDC_get_detect_flag())
					return ucRet;
				if (vdc_TV_reset == TRUE)
					return 0;
				msleep(5);

				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "set mode 2=%x, 94a0=%x, 94a4=%x\n", g_ucVDMode,vdcf_inl(0xb80194a0),vdcf_inl(0xb80194a4));

			/// check chroma lock start 2 //////////////////////////////////////////////////////////
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "check c lock go 2~~ max. 300mS \n");
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		// 300mS
		if (drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_NTSC) {
			g_ucTimerCount = 0x00;
			g_ucTimerEnable = TRUE;
			ucVdCount = 30; //consistency check
			for (k = 0 ; k <= ucVdCount; ++k) { /* check chroma locked */
				if (g_ucTimerCount >= ucVdCount)
					break;
				if(!VDC_get_detect_flag())
					return ucRet;
				if (vdc_TV_reset == TRUE)
					return ucRet;
				if (!drvif_video_check_AV_stable())
				{
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - a7\n");
					return ucRet;
				}
				msleep(10);
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[%d] clock loop 2, 94a4=%x\n",j ,vdcf_inl(0xb80194a4));
			}
			g_ucTimerEnable = FALSE;
		}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "check c lock 2 done !!! \n");
			/// check chroma lock stop 2 //////////////////////////////////////////////////////////
			}

			/////////////////////////////////////////////////////////////////////////////////
			if (g_ucVDMode == VDC_MODE_AUTO) {
			// 200mS
				g_ucTimerCount = 0x00;
				g_ucTimerEnable = TRUE;
				ucVdCount = 20; //consistency check
				for (j = 0 ; j <= ucVdCount; ++j) {
					if (g_ucTimerCount >= ucVdCount)
						break;
					if(!VDC_get_detect_flag())
						return ucRet;
					if (vdc_TV_reset == TRUE)
						return 0;
					if (!drvif_video_check_AV_stable())
					{
						VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - a8\n");
						return ucRet;
					}
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "loop 3 auto, 94a4=%x\n",vdcf_inl(0xb80194a4));
					msleep(10);
				}
				g_ucTimerEnable = FALSE;
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "Auto mode delay [200ms]### 94a4=%x\n",vdcf_inl(0xb80194a4));
			}
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "1,94c0=%x, 94c4=%x\n",	vdcf_inl(0xb80194c0),vdcf_inl(0xb80194c4));
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH, " **** VD mode OK ****\n");
#if 0//ndef CONFIG_CUSTOMER_TV010//for WOSQRTK-12258
			if (g_ucSrcType == _SRC_TV)
				drvif_inprocvideo_setup_NotMeasure(g_ucSrcType, ptAVDScalerDispInfo, ptAVDScalerTimingInfo, g_ucVDMode | 0x10, 0);
			//drvif_inprocvideo_setup_NotMeasure(g_ucSrcType, ptAVDScalerDispInfo, ptAVDScalerTimingInfo, g_ucMode_Curr);
#endif
			drvif_module_vdc_mode_speedup(mode_count_default);
//			drvif_module_vdc_Set_lose_chromalock_count(0x0b);	/* set to default */
			drvif_module_vdc_Chroma_control(g_ucSrcType);

			if((g_ucVDMode != g_ucVDPreMode) && match_support_color_system){ //K6LG-373
				rtd_printk(KERN_INFO, TAG_NAME_AVD, "#####[%s(%d)] g_ucVDMode=%d,g_ucVDPreMode=%d\n",__func__,__LINE__,g_ucVDMode,g_ucVDPreMode);
				g_bChangeSystem = TRUE;
			}

			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "DETECT_STAGE_INIT g_ucVDMode=%x, g_ucVDPreMode=%x, g_bChangeSystem=%x, 94a4=%x\n", g_ucVDMode, g_ucVDPreMode, g_bChangeSystem,vdcf_inl(0xb80194a4));

			g_ucVDPreMode = g_ucVDMode;

			if (true == g_bChangeSystem)
			{
				g_bMainRunSearchState = true;
				g_bSubRunSearchState = true;
				g_bStartChangeSystem = false;
				g_ucColorOK = FALSE;
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "3, g_ucColorOK = FALSE\n");
			}

			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "SetAVDLGETimingInfo ==> timing to scaler and LG\n");
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "done ! g_ucVDMode =%x\n", g_ucVDMode);
			rtd_printk(KERN_INFO, TAG_NAME_AVD, "#####[%s(%d)] DETECT_STAGE_INIT,g_ucVDMode=%d\n",__func__,__LINE__,g_ucVDMode);

			if(!VDC_get_detect_flag())
				return ucRet;
			set_freezable();
			if (0 == drvif_module_vdc_GetLockStatus())
			{
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - 2\n");
				//for WOSQRTK-12258
				if ((g_ucSrcType == _SRC_TV)&&(g_bChangeSystem)){
					rtd_printk(KERN_INFO, TAG_NAME_AVD," Signal is no good return -2\n");
					g_ucCurColorStd = g_ucVDMode | 0x10;
					g_ucVDPreMode = g_ucVDMode;
				}
				return ucRet;
			}

			modestate_decide3D_for_vdc();

			g_ucTimerCount = 0x00;
			g_ucTimerEnable = TRUE;
			ucVdCount = 15;
			for (j = 0 ; j <= ucVdCount; ++j) {

				if(drvif_module_vdc_ReadMode(VDC_SET)== g_ucVDMode)
					break;

				if (g_ucTimerCount >= ucVdCount)
					break;

				msleep(10);
			}
			g_ucTimerEnable = FALSE;

			rtd_printk(KERN_INFO, TAG_NAME_AVD, "#####[%s(%d)] DETECT_STAGE_INIT, 2.VD set mode=%x, g_ucVDMode=%x\n",__func__,__LINE__, drvif_module_vdc_ReadMode(VDC_SET), g_ucVDMode);
			//VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "2.VD set mode=%x, g_ucVDMode=%x\n", drvif_module_vdc_ReadMode(VDC_SET), g_ucVDMode);
			//VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "2,94c0=%x, 94c4=%x\n", vdcf_inl(0xb80194c0),vdcf_inl(0xb80194c4));

			if (g_ucSrcType == _SRC_TV)
			{
#ifdef CONFIG_CUSTOMER_TV010
				// before display, hw setting parameters.....
				module_vdc_Set_bgate_Setting(0); //ryanliao 20190108 bgate_Setting

				if (drvif_module_vdc_NoiseStatus() > 0x70 && drvif_module_vdc_Get625flag() == 1) { //HKTTANDP-12, RL
					drvif_module_vdc_Set_lose_chromalock_count(0x0b);	/* set to default */
					drvif_module_DMA_CHK3D_ENABLE_control(VDC_CHANEL_DISPLAY_MODE);/*set DMA_CHK3D_ENABLE control*/
				}
				drvif_inprocvideo_setup_NotMeasure(g_ucSrcType, ptAVDScalerDispInfo, ptAVDScalerTimingInfo, g_ucVDMode | 0x10, 0);
#endif
#ifndef CONFIG_CUSTOMER_TV010
				if (Scaler_AVD_Break_DetectTiming())
				{
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "tv detect timing return - 2");
					return ucRet;
				}
#endif
				set_freezable();
				if (0 == drvif_module_vdc_GetLockStatus())
				{
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "tv ulock return - 3\n");
					//for WOSQRTK-12258
					if ((g_ucSrcType == _SRC_TV)&&(g_bChangeSystem)){
						rtd_printk(KERN_INFO, TAG_NAME_AVD," Signal is no good return -3\n");
						g_ucCurColorStd = g_ucVDMode | 0x10;
						g_ucVDPreMode = g_ucVDMode;
					}
					return ucRet;
				}

				if (g_ucVDMode == VDC_MODE_AUTO)
				{
					g_ucVDMode = drvif_module_vdc_ReadMode(VDC_DETECT) & 0x0f;
				}
				// before display, hw setting parameters.....
				module_vdc_Set_bgate_Setting(0); //ryanliao 20190108 bgate_Setting

				if (drvif_module_vdc_NoiseStatus() > 0x70 && drvif_module_vdc_Get625flag() == 1) { //HKTTANDP-12, RL
					drvif_module_vdc_Set_lose_chromalock_count(0x0b);	/* set to default */
					drvif_module_DMA_CHK3D_ENABLE_control(VDC_CHANEL_DISPLAY_MODE);/*set DMA_CHK3D_ENABLE control*/
				}
				drvif_inprocvideo_setup_NotMeasure(g_ucSrcType, ptAVDScalerDispInfo, ptAVDScalerTimingInfo, g_ucVDMode | 0x10, 0);
			}
			else
			{
				if (g_tSupportedColorSys == TV_AllMode){ //KTASKWBS-13375 AV use auto mode detect, RL
					ucScalerColorStd = drvif_module_vdc_ReadMode(VDC_DETECT);
					rtd_printk(KERN_INFO, TAG_NAME_AVD, "#####[%s(%d)] DETECT_STAGE_INIT, ucScalerColorStd=%x, g_ucVDMode=%x\n",__func__,__LINE__, ucScalerColorStd, g_ucVDMode);
					//VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[vdtest]AV ucScalerColorStd=%x\n",ucScalerColorStd);
					g_ucVDMode = ucScalerColorStd & 0x0f;
				}
				
				set_freezable();
				// before display, hw setting parameters.....
				module_vdc_Set_bgate_Setting(0); //ryanliao 20190108 bgate_Setting

				if (drvif_module_vdc_NoiseStatus() > 0x70 && drvif_module_vdc_Get625flag() == 1) { //HKTTANDP-12, RL
					drvif_module_vdc_Set_lose_chromalock_count(0x0b);	/* set to default */
					drvif_module_DMA_CHK3D_ENABLE_control(VDC_CHANEL_DISPLAY_MODE);/*set DMA_CHK3D_ENABLE control*/
				}
				drvif_inprocvideo_setup_NotMeasure(g_ucSrcType, ptAVDScalerDispInfo, ptAVDScalerTimingInfo, g_ucVDMode | 0x10, (unsigned char)g_tSupportedColorSys);
				set_freezable();
			}
			#ifdef _PRINT_AVD_COST_TIME
			rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME: %s(%d) after setup_NotMeasure  time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
			#endif
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "[vdtest]check g_ucVDMode=%x\n",g_ucVDMode);
			ucScalerColorStd = g_ucVDMode |0x10;
			drvif_module_vpq_YcSeparation(g_ucSrcType, _ENABLE);


			if(!VDC_get_detect_flag())
				return ucRet;

			g_ucCurColorStd = ucScalerColorStd;
			rtd_printk(KERN_INFO, TAG_NAME_AVD, "#####[%s(%d)] INIT g_ucCurColorStd=%x, g_ucPreColorStd=%x\n",__func__,__LINE__, g_ucCurColorStd, g_ucPreColorStd);
			if(g_ucPreColorStd != g_ucCurColorStd){
				rtd_printk(KERN_INFO, TAG_NAME_AVD, "#####[%s(%d)] g_ucCurColorStd=%d, g_ucPreColorStd=%d\n",__func__,__LINE__,g_ucCurColorStd,g_ucPreColorStd);
				g_bChangeSystem = TRUE;
			}

			if (ZAUTO == g_ucCurColorStd){
				rtd_printk(KERN_INFO, TAG_NAME_AVD, "#####[%s(%d)] g_ucCurColorStd=%d\n",__func__,__LINE__,g_ucCurColorStd);
				g_bChangeSystem = TRUE;
			}
			g_ucPreColorStd = g_ucCurColorStd;
			g_ucVDMode = ucScalerColorStd & 0x0f;

			g_ucVDPreMode = g_ucVDMode;

			set_freezable();
			if (0 == drvif_module_vdc_GetLockStatus())
			{
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - 4\n");
				return ucRet;
			}

			if(!VDC_get_detect_flag())
				return ucRet;

			Scaler_VBI_connect(g_ucSrcType, ptAVDScalerDispInfo->ucMode_Curr,g_ucVDMode);
			wss_data_handle();
			if(!VDC_get_detect_flag())
				return ucRet;
			if (0 == drvif_module_vdc_GetLockStatus())
			{
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - 5\n");
				return ucRet;
			}
			if (g_ucSrcType == _SRC_SCART || g_ucSrcType == _SRC_SCART_RGB) {
				/*Scaler_AVD_Scart_Check();*/
				Scaler_AVD_Set_Scart_Mode();
			}

			if (g_ucSrcType == _SRC_CVBS || g_ucSrcType == _SRC_TV) {
				fw_video_SetModeInfo(g_ucSrcType);
			}

			if (true == g_bChangeSystem)
			{
				g_bMainRunSearchState = true;
				g_bSubRunSearchState = true;
				g_bStartChangeSystem = false;
				g_ucColorOK = FALSE;
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "g_ucColorOK = FALSE\n");
				rtd_printk(KERN_INFO, TAG_NAME_AVD,"#####[%s(%d)]Set g_bRunSearchState = true\n",__func__,__LINE__);
			}

			/*AVD detect timing ok*/
			//g_bAVDDetectTimingAgain = true;

			if(!VDC_get_detect_flag())
				return ucRet;
			if (0 == drvif_module_vdc_GetLockStatus())
			{
				VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ulock return - 6\n");
				return ucRet;
			}

			g_ucColorOK = TRUE;
			set_freezable();
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH,"####vstate = %d######[%d]\n", drvif_module_vdc_Read_Vstate(),vdcf_inl(0xb80192d8));
			rtd_printk(KERN_INFO, TAG_NAME_AVD,"####vstate = %d######[%d]\n", drvif_module_vdc_Read_Vstate(),vdcf_inl(0xb80192d8));
			g_ucDetectStage = DETECT_STAGE_FINAL;

			SetAVDLGETimingInfo();
			
			rtd_printk(KERN_INFO, TAG_NAME_AVD," move to the end of DETECT_STAGE_INIT\n");
			VDC_DEBUG_MSG(VDC_MSG_TVCHCH, "[vdtest]g_ucVDMode=%x, 94a0=%x, 94a4=%x\n",
				   g_ucVDMode,vdcf_inl(0xb80194a0),vdcf_inl(0xb80194a4));
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"AVD drvif_mode_offlinemeasure() success\n");
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"disp_status=%x\n", ptAVDScalerDispInfo->disp_status);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"INPUT_ADC_CLOCK=%d\n", ptAVDScalerDispInfo->INPUT_ADC_CLOCK);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IPH_ACT_STA_PRE=%d\n", ptAVDScalerDispInfo->IPH_ACT_STA_PRE);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IPV_ACT_STA_PRE=%d\n", ptAVDScalerDispInfo->IPV_ACT_STA_PRE);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IPH_ACT_WID_PRE=%d\n", ptAVDScalerDispInfo->IPH_ACT_WID_PRE);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IPV_ACT_LEN_PRE=%d\n", ptAVDScalerDispInfo->IPV_ACT_LEN_PRE);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IPH_ACT_WID=%d\n", ptAVDScalerDispInfo->IPH_ACT_WID);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IPV_ACT_LEN=%d\n", ptAVDScalerDispInfo->IPV_ACT_LEN);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"Hsync=%d\n", ptAVDScalerDispInfo->Hsync);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"Vsync=%d\n", ptAVDScalerDispInfo->Vsync);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"ucMode_Curr=%d\n", ptAVDScalerDispInfo->ucMode_Curr);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"ucMode_Table_Index=%d\n", ptAVDScalerDispInfo->ucMode_Table_Index);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"Polarity=%d\n", ptAVDScalerDispInfo->Polarity);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IHFreq=%d\n", ptAVDScalerDispInfo->IHFreq);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IVFreq=%d\n", ptAVDScalerDispInfo->IVFreq);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IHTotal=%d\n", ptAVDScalerDispInfo->IHTotal);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IVTotal=%d\n", ptAVDScalerDispInfo->IVTotal);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IHCount_PRE=%d\n", ptAVDScalerDispInfo->IHCount_PRE);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IVCount_PRE=%d\n", ptAVDScalerDispInfo->IVCount_PRE);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"IHSyncPulseCount=%d\n", ptAVDScalerDispInfo->IHSyncPulseCount);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"color_space=%d\n", ptAVDScalerDispInfo->color_space);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"color_depth=%d\n", ptAVDScalerDispInfo->color_depth);
			rtd_printk(KERN_DEBUG, TAG_NAME_AVD,"color_imetry=%d\n", ptAVDScalerDispInfo->color_imetry);
			#ifdef _PRINT_AVD_COST_TIME
			rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME: %s(%d) init end time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
			#endif

			break;
		case DETECT_STAGE_FINAL:
			//rtd_printk(KERN_EMERG, TAG_NAME_AVD, "DETECT_STATE_FINAL\n");
			g_ulInitStageCount = 0;
			/* Handle un-standerd signal */
			if(!atv_channel_change &&
				atv_channel_change_start &&
				avd_good_timing_ready &&
				(get_AVD_Input_Source() == _SRC_TV)){
				atv_channel_change_start=FALSE;
				DbgSclrFlgTkr.g_ucVSCCheckATVChanelChange = FALSE;
				rtd_printk(KERN_INFO, TAG_NAME_AVD,"%s line=%d atv_ch_change=%d atv_change_start=%d avd_good_timing_ready=%d,\n",__FUNCTION__,__LINE__,atv_channel_change,atv_channel_change_start,avd_good_timing_ready);
			}
			set_freezable();
			if ((g_ucSrcType == _SRC_TV)||(g_ucSrcType == _SRC_CVBS))
			{
				ucVdChange = 0;
				if (drvif_module_vdc_ReadMode(VDC_DETECT) != drvif_module_vdc_ReadMode(VDC_SET))
				{
					switch ((UINT8)g_tSupportedColorSys)
					{
					default:
						//break;
					case TV_AllMode:
						Scaler_AVD_ClearTiming();
						return ucRet;
						break;
					case TV_DVBT:	// NTSC, PAL I, SECAM
						if (drvif_module_vdc_Get625flag() == 1)
						{
							if (g_ucMode_Curr != _MODE_576I) {
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "625 flag =1, but not set to 576i, reset !!\n");
								Scaler_AVD_ClearTiming();
								return ucRet;
							}
							if ((drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_PALI) &&
									(drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_SECAM))
							{	// PALI => SECAM
								ucVdChange = 1;
								g_ucVDMode = VDC_MODE_SECAM;
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "PAL to SECAM, 94a4=%x\n", vdcf_inl(0xb80194a4));
							}
							else if ((drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_SECAM) &&
									 (drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_PALI))
							{	// SECAM => PALI
								ucVdChange = 1;
								g_ucVDMode = VDC_MODE_PALI;
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "SECAM to PAL, 94a4=%x\n", vdcf_inl(0xb80194a4));
							}
							else if (drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_NTSC)
							{
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "Detect NTSC, reset !! 94a4=%x\n", vdcf_inl(0xb80194a4));
								Scaler_AVD_ClearTiming();
								return ucRet;
							}
#ifdef CONFIG_CUSTOMER_TV010  // switch to PALI
							else if((drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_NTSC50) &&
									 (drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_PALI))
							{	// NTSC50 => PALI
								ucVdChange = 1;
								g_ucVDMode = VDC_MODE_PALI;
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH, "NTSC50 to PALI, 94a4=%x\n", vdcf_inl(0xb80194a4));
							}
#endif
						} else {	// 625flag = 0
							if (g_ucMode_Curr != _MODE_480I) {
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "625 flag =0, but not set to 480i, reset !!\n");
								Scaler_AVD_ClearTiming();
								return ucRet;
							}
							if ((drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_PALI) ||
									(drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_SECAM))
							{	// set PALI or SECAM
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "Detect NTSC, reset !! 94a4=%x\n", vdcf_inl(0xb80194a4));
								Scaler_AVD_ClearTiming();
								return ucRet;
							}
							else if (drvif_module_vdc_ReadMode(VDC_SET) != VDC_MODE_NTSC)
							{	// set to NTSC
								ucVdChange = 1;
								g_ucVDMode = VDC_MODE_NTSC;
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "SET NTSC, 94a4=%x\n", vdcf_inl(0xb80194a4));
							}
						}
						break;
					case TV_Colombia:	// NTSC, PAL_NC_358, PAL_M
						if (drvif_module_vdc_Get625flag() == 0)
						{
							if (g_ucMode_Curr != _MODE_480I) {
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "625 flag=0, but not set to 480i, reset !!g_ucMode_Curr=%x\n",g_ucMode_Curr);
								Scaler_AVD_ClearTiming();
								return ucRet;
							}
							if ((drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_NTSC) &&
									(drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_PALM))
							{	// NTSC => PAL_M
								ucVdChange = 1;
								g_ucVDMode = VDC_MODE_PALM;
							}
							else if ((drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_PALM) &&
									 (drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_NTSC))
							{	// PAL_M => NTSC
								ucVdChange = 1;
								g_ucVDMode = VDC_MODE_NTSC;
							}
							else if ((drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_NTSC443) &&
									 (drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_NTSC))
							{	// NTSC443 => NTSC
								ucVdChange = 1;
								g_ucVDMode = VDC_MODE_NTSC;
							}
							else if ((drvif_module_vdc_ReadMode(VDC_SET) == VDC_MODE_NTSC443) &&
									 (drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_PALM))
							{	// NTSC443 => PALM
								ucVdChange = 1;
								g_ucVDMode = VDC_MODE_PALM;
							}
							else if (drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_PALN)
							{
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "Detect PALN, reset !! 94a4=%x\n", vdcf_inl(0xb80194a4));
								Scaler_AVD_ClearTiming();
								return ucRet;
							}
						} else {	// PAL-Nc
							if (g_ucMode_Curr != _MODE_576I)
							{
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "625 flag =1, but not set to 576i, reset !!\n");
								Scaler_AVD_ClearTiming();
								return ucRet;
							}
							if ((drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_NTSC) ||
									(drvif_module_vdc_ReadMode(VDC_DETECT) == VDC_MODE_PALM))
							{	// set PALI or SECAM
								VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "Detect PALN, reset !! 94a4=%x\n", vdcf_inl(0xb80194a4));
								Scaler_AVD_ClearTiming();
								return ucRet;
							}
							else if (drvif_module_vdc_ReadMode(VDC_SET) != VDC_MODE_PALN)
							{
								ucVdChange = 1;
								g_ucVDMode = VDC_MODE_PALN;
							}
						}
						break;
					case TV_ATSC:	// NTSC
//						VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ATSC mode set != detect, 94a4=%x\n", vdcf_inl(0xb80194a4));
						ucVdSetMode = VDC_MODE_NTSC;
						ucVdChange = Scaler_VDC_Support525(ucVdSetMode);
						break;
					case TV_SetPALN:
						ucVdSetMode = VDC_MODE_PALN;
						ucVdChange = Scaler_VDC_Support625(ucVdSetMode);
						break;
					case TV_SetPALM:
						ucVdSetMode = VDC_MODE_PALM;
						ucVdChange = Scaler_VDC_Support525(ucVdSetMode);
						break;
					case TV_PAL:
						ucVdSetMode = VDC_MODE_PALI;
						ucVdChange = Scaler_VDC_Support625(ucVdSetMode);
						break;
					case TV_SECAM:
						ucVdSetMode = VDC_MODE_SECAM;
						ucVdChange = Scaler_VDC_Support625(ucVdSetMode);
						break;
					case TV_PAL60:
						ucVdSetMode = VDC_MODE_PAL60;
						ucVdChange = Scaler_VDC_Support525(ucVdSetMode);
						break;
					case TV_NTSC443:
						ucVdSetMode = VDC_MODE_NTSC443;
						ucVdChange = Scaler_VDC_Support525(ucVdSetMode);
						break;
#ifdef CONFIG_NTSC50
					case TV_NTSC50:
						ucVdSetMode = VDC_MODE_NTSC50;
						ucVdChange = Scaler_VDC_Support625(ucVdSetMode);
						break;
#endif
					}
				}
				else if (g_tSupportedColorSys == TV_SetPALN)
				{
					ucVdSetMode = VDC_MODE_PALN;
					ucVdChange = Scaler_VDC_Check625(ucVdSetMode);
				}
				else if (g_tSupportedColorSys == TV_SetPALM)
				{
					ucVdSetMode = VDC_MODE_PALM;
					ucVdChange = Scaler_VDC_Check525(ucVdSetMode);
				}
				else if (g_tSupportedColorSys == TV_ATSC)
				{
//					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "ATSC mode set == detect, 94a4=%x\n", vdcf_inl(0xb80194a4));
					ucVdSetMode = VDC_MODE_NTSC;
					ucVdChange = Scaler_VDC_Check525(ucVdSetMode);
				}
				else if (g_tSupportedColorSys == TV_PAL)
				{
					ucVdSetMode = VDC_MODE_PALI;
					ucVdChange = Scaler_VDC_Check625(ucVdSetMode);
				}
				else if (g_tSupportedColorSys == TV_SECAM)
				{
					ucVdSetMode = VDC_MODE_SECAM;
					ucVdChange = Scaler_VDC_Check625(ucVdSetMode);
				}
#ifdef CONFIG_NTSC50
				else if (g_tSupportedColorSys == TV_NTSC50)
				{
					ucVdSetMode = VDC_MODE_NTSC50;
					ucVdChange = Scaler_VDC_Check625(ucVdSetMode);
				}
#endif
				else if (g_tSupportedColorSys == TV_NTSC443)
				{
					ucVdSetMode = VDC_MODE_NTSC443;
					ucVdChange = Scaler_VDC_Check525(ucVdSetMode);
				}
				else if (g_tSupportedColorSys == TV_PAL60)
				{
					ucVdSetMode = VDC_MODE_PAL60;
					ucVdChange = Scaler_VDC_Check525(ucVdSetMode);
				}
				else	// TV_AllMode
				{
					g_ucVDMode = drvif_module_vdc_ReadMode(VDC_DETECT);
					if (g_ucVDMode != g_ucVDPreMode)
					{
						VDC_DEBUG_MSG(VDC_MSG_TVCHCH, "Check mode change!!!! TV_AllMode=%x , preMode=%x\n",g_ucVDMode, g_ucVDPreMode);
						g_ucVDPreMode = g_ucVDMode;
						ucVdChange = 1;
					}
				}

				if(!VDC_get_detect_flag())
					return ucRet;
				if (ucVdChange == 1)
				{
					VDC_DEBUG_MSG(VDC_MSG_TVCHCH_DETAIL, "mode change !! mdoe=%x\n",g_ucVDMode);
					drvif_module_vdc_SetMode(g_ucVDMode);
					ucVdChange = 0;
					if(!VDC_get_detect_flag())
						return ucRet;
					drvif_module_vpq_SetYcSep(VDC_YCSEPARATE_DEFAULT);
					drvif_module_vpq_YcSeparation(g_ucSrcType, _ENABLE);
					if( g_ucSrcType == _SRC_TV && !vpq_get_handler_bypass())
					{
						fwif_color_video_quality_handler();
					}

					Scaler_AVD_ClearTiming();  // let CVBS can get no signal

				}
			}
			set_freezable();

			if(!VDC_get_detect_flag())
				return ucRet;
			break;
		default:
			break;
		}
	} else {
		//rtd_printk(KERN_EMERG, TAG_NAME_AVD, "AVD No Signal\n");

		//[Start]ryanliao 20181226 bgate_Setting
		module_vdc_Set_bgate_Setting(1);
		//[End]

		g_ulInitStageCount = 0;
		//rtd_printk(KERN_EMERG, TAG_NAME_AVD, "*****VDC HV no lock vdc_LockStatus=%x\n", vdc_LockStatus);

		if (0 == drvif_module_vdc_read_Clamping_path() && atv_channel_change)
			return ucRet;

		if ((0 == drvif_module_vdc_GetLockStatus()) && (g_ucSrcType == _SRC_TV)) {
			if(!VDC_get_detect_flag())
				return ucRet;

#ifdef CONFIG_CUSTOMER_TV010
			if (drvif_module_vdc_read_scan_flag())
			{
				drvif_module_vdc_FreeRun(VDC_FREERUN_625);
			}
			else
			{
#endif
				if ((g_ucCurColorStd == ZNTSC)
			    	|| (g_ucCurColorStd == ZNTSC_443)
			    	|| (g_ucCurColorStd ==  ZPAL_60)
			    	|| (g_ucCurColorStd  ==  ZPAL_M))
				{
					// 480i NTSC
					drvif_module_vdc_FreeRun(VDC_FREERUN_525);
					VDC_DEBUG_MSG(VDC_MSG_TVSCAN, "drvif_module_vdc_FreeRun(VDC_FREERUN_525);");
				}
				else
				{
					if ((g_ucCurColorStd == 0xff)
						&&(g_tSupportedColorSys != TV_DVBT)
						&&(g_tSupportedColorSys != TV_SetPALN)
						&&(g_tSupportedColorSys != TV_AllMode)
						&&((g_tSupportedColorSys & KADP_COLOR_SYSTEM_NTSC_M) == KADP_COLOR_SYSTEM_NTSC_M
						|| (g_tSupportedColorSys & KADP_COLOR_SYSTEM_NTSC_443) == KADP_COLOR_SYSTEM_NTSC_443
						|| (g_tSupportedColorSys & KADP_COLOR_SYSTEM_PAL_60) == KADP_COLOR_SYSTEM_PAL_60
						|| (g_tSupportedColorSys & KADP_COLOR_SYSTEM_PAL_M) == KADP_COLOR_SYSTEM_PAL_M)){
							// 480i NTSC
							rtd_printk(KERN_INFO, TAG_NAME_AVD,"AP IS NTSC No signal need 480i\n");
							g_ucCurColorStd = ZNTSC;
							drvif_module_vdc_FreeRun(VDC_FREERUN_525);
							VDC_DEBUG_MSG(VDC_MSG_TVSCAN, "drvif_module_vdc_FreeRun(VDC_FREERUN_525);");
					}else{
					#ifdef CONFIG_CUSTOMER_TV030
						if (drvif_module_vdc_read_scan_flag()){
							g_ucCurColorStd = ZNTSC;
							drvif_module_vdc_FreeRun(VDC_FREERUN_525);
							VDC_DEBUG_MSG(VDC_MSG_TVSCAN, "#####[%s(%d)]drvif_module_vdc_FreeRun(VDC_FREERUN_525);",__func__,__LINE__);
						}else
					#endif
						{// 576i PAL
							drvif_module_vdc_FreeRun(VDC_FREERUN_625);
							VDC_DEBUG_MSG(VDC_MSG_TVSCAN, "#####[%s(%d)]drvif_module_vdc_FreeRun(VDC_FREERUN_625);",__func__,__LINE__);
						}
					}

				}
#ifdef CONFIG_CUSTOMER_TV010
			}
#endif
			if(!VDC_get_detect_flag())
				return ucRet;
			// If no DispInfo, set Scaler DispInfo and TimingInfo
			if (((ptAVDScalerDispInfo->ucMode_Curr) == 0 )|| avd_good_timing_ready)
			{
				if((atv_channel_change || atv_channel_change_start|| !avd_good_timing_ready)
					&& (get_AVD_Input_Source() == _SRC_TV)){
					ATV_no_signal_Count++;
					if(ATV_no_signal_Count > 20){// || drvif_module_vdc_read_scan_flag()){//if atv is no signal it will timeout and set scaler timing info
						avd_good_timing_ready= TRUE;
						atv_channel_change_start = FALSE;
						ATV_no_signal_Count = 0;
					}
					rtd_printk(KERN_INFO, TAG_NAME_AVD,"%s line=%d ATV_no_signal_Count=%d atv_ch_change=%d atv_change_start=%d avd_good_timing_ready=%d,ucRet=%d\n",__FUNCTION__,__LINE__,ATV_no_signal_Count,atv_channel_change,atv_channel_change_start,avd_good_timing_ready,ucRet);
					return ucRet;
				}
				rtd_printk(KERN_INFO, TAG_NAME_AVD,"HV no lock and scaler timing info=0, exec drvif_inprocvideo_setup_NoSignal\n");
			#ifdef CONFIG_CUSTOMER_TV030
				if(drvif_module_vdc_read_scan_flag()&&Scaler_AVD_GetAutoTuneMode()){
					Scaler_AVD_SetAutoTuneCheck(true);
					DbgSclrFlgTkr.g_ucVSCCheckATVChanelChange = FALSE;
					rtd_printk(KERN_INFO, TAG_NAME_AVD,"#####[%s(%d)]Scaler_AVD_SetAutoTuneCheck true\n",__func__,__LINE__);
				}
			#endif
				drvif_inprocvideo_setup_NoSignal(g_ucSrcType, ptAVDScalerDispInfo, ptAVDScalerTimingInfo, g_ucCurColorStd);
			}
			if(!VDC_get_detect_flag())
				return ucRet;

		}
		drvif_module_vdc_CheckInputStatus(g_ucSrcType, 1);

		if(!VDC_get_detect_flag())
			return ucRet;

		if (0 == (g_ulNoHVCount % 1000)) {
			rtd_printk(KERN_INFO, TAG_NAME_AVD,"[%s(%d)]Scaler_AVD_DetectTiming  stage 0\n",__func__,__LINE__);
		}
		g_ulNoHVCount++;
		avd_good_timing_ready = FALSE;
		ClearAVDLGETimingInfo();
//		g_ucHVLockCount = 0;
		g_ucDetectStage = DETECT_STAGE_INIT;
		g_ucVDMode = _MODE_UNKNOWN;
		g_ucScartMode = _MODE_UNKNOWN;
		g_ucScartMode = -1;
		g_ucColorOK = TRUE;
		Scaler_VBI_disconnect();

		if(!VDC_get_detect_flag())
			return ucRet;

	}
	return ucRet;
}

/*rbusVDIFDinReg.h*/
#define REGISTER_START_VD_IFD_IN_1 (0xb8018000)
#define REGISTER_SIZE_VD_IFD_IN_1 (49)/*0xb8018000 ~ 0xb80180c0*/
#define REGISTER_START_VD_IFD_IN_2 (0xb80180d0)
#define REGISTER_SIZE_VD_IFD_IN_2 (5)/*0xb80180d0 ~ 0xb80180e0*/
#define REGISTER_TOTALSIZE_VD_IFD_IN (REGISTER_SIZE_VD_IFD_IN_1 + REGISTER_SIZE_VD_IFD_IN_2)
/*rbusVDTopReg.h*/
#define REGISTER_START_VD_TOP_1 (0xb8019000)
#define REGISTER_SIZE_VD_TOP_1 (17)/*0xb8019000 ~ 0xb8019040*/
#define REGISTER_START_VD_TOP_2 (0xb8019050)
#define REGISTER_SIZE_VD_TOP_2 (52)/*0xb8019050 ~ 0xb801911c*/
#define REGISTER_START_VD_TOP_3 (0xb8019128)
#define REGISTER_SIZE_VD_TOP_3 (103)/*0xb8019128 ~ 0xb80192c0*/
#define REGISTER_START_VD_TOP_4 (0xb80192d0)
#define REGISTER_SIZE_VD_TOP_4 (4)/*0xb80192d0 ~ 0xb80192dc*/
#define REGISTER_START_VD_TOP_5 (0xb8019300)
#define REGISTER_SIZE_VD_TOP_5 (41)/*0xb8019300 ~ 0xb80193a0*/
#define REGISTER_START_VD_TOP_6 (0xb80193b0)
#define REGISTER_SIZE_VD_TOP_6 (18)/*0xb80193b0 ~ 0xb80193f4*/
#define REGISTER_START_VD_TOP_7 (0xb8019400)
#define REGISTER_SIZE_VD_TOP_7 (31)/*0xb8019400 ~ 0xb8019478*/
#define REGISTER_START_VD_TOP_8 (0xb8019490)
#define REGISTER_SIZE_VD_TOP_8 (2)/*0xb8019490 ~ 0xb8019494*/
#define REGISTER_START_VD_TOP_9 (0xb80194a0)
#define REGISTER_SIZE_VD_TOP_9 (7)/*0xb80194a0 ~ 0xb80194b8*/
#define REGISTER_START_VD_TOP_10 (0xb80194c0)
#define REGISTER_SIZE_VD_TOP_10 (10) /*0xb80194c0 ~ 0xb80194e4*/
#define REGISTER_START_VD_TOP_11 (0xb80194f0)
#define REGISTER_SIZE_VD_TOP_11 (21)/*0xb80194f0 ~ 0xb8019540*/
#define REGISTER_START_VD_TOP_12 (0xb8019550)
#define REGISTER_SIZE_VD_TOP_12 (18)/*0xb8019550 ~ 0xb8019594*/
#define REGISTER_START_VD_TOP_13 (0xb80195a0)
#define REGISTER_SIZE_VD_TOP_13 (10)/*0xb80195a0 ~ 0xb80195c4*/
#define REGISTER_START_VD_TOP_14 (0xb80195e0)
#define REGISTER_SIZE_VD_TOP_14 (5)/*0xb80195e0 ~ 0xb80195f0*/
#define REGISTER_START_VD_TOP_15 (0xb8019608)
#define REGISTER_SIZE_VD_TOP_15 (3)/*0xb8019608 ~ 0xb8019610*/
#define REGISTER_START_VD_TOP_16 (0xb8019618)
#define REGISTER_SIZE_VD_TOP_16 (13)/*0xb8019618 ~ 0xb8019648*/
#define REGISTER_START_VD_TOP_17 (0xb8019650)
#define REGISTER_SIZE_VD_TOP_17 (10)/*0xb8019650 ~ 0xb8019674*/
#define REGISTER_START_VD_TOP_18 (0xb8019680)
#define REGISTER_SIZE_VD_TOP_18 (11)/*0xb8019680 ~ 0xb80196a8*/
#define REGISTER_START_VD_TOP_19 (0xb80196b0)
#define REGISTER_SIZE_VD_TOP_19 (8)/*0xb80196b0 ~ 0xb80196cc*/
#define REGISTER_START_VD_TOP_20 (0xb8019700)
#define REGISTER_SIZE_VD_TOP_20 (10)/*0xb8019700 ~ 0xb8019724*/
#define REGISTER_START_VD_TOP_21 (0xb8019734)
#define REGISTER_SIZE_VD_TOP_21 (5)/*0xb8019734 ~ 0xb8019744*/
#define REGISTER_START_VD_TOP_22 (0xb8019758)
#define REGISTER_SIZE_VD_TOP_22 (38)/*0xb8019758 ~ 0xb80197ec*/
#define REGISTER_START_VD_TOP_23 (0xb80197fc)
#define REGISTER_SIZE_VD_TOP_23 (1)/*0xb801917fc*/
#define REGISTER_TOTALSIZE_VD_TOP ( \
REGISTER_SIZE_VD_TOP_1 + \
REGISTER_SIZE_VD_TOP_2 + \
REGISTER_SIZE_VD_TOP_3 + \
REGISTER_SIZE_VD_TOP_4 + \
REGISTER_SIZE_VD_TOP_5 + \
REGISTER_SIZE_VD_TOP_6 + \
REGISTER_SIZE_VD_TOP_7 + \
REGISTER_SIZE_VD_TOP_8 + \
REGISTER_SIZE_VD_TOP_9 + \
REGISTER_SIZE_VD_TOP_10 + \
REGISTER_SIZE_VD_TOP_11 + \
REGISTER_SIZE_VD_TOP_12 + \
REGISTER_SIZE_VD_TOP_13 + \
REGISTER_SIZE_VD_TOP_14 + \
REGISTER_SIZE_VD_TOP_15 + \
REGISTER_SIZE_VD_TOP_16 + \
REGISTER_SIZE_VD_TOP_17 + \
REGISTER_SIZE_VD_TOP_18 + \
REGISTER_SIZE_VD_TOP_19 + \
REGISTER_SIZE_VD_TOP_20 + \
REGISTER_SIZE_VD_TOP_21 + \
REGISTER_SIZE_VD_TOP_22 + \
REGISTER_SIZE_VD_TOP_23)
/*rbusVDPQReg.h*/
#define REGISTER_START_VD_PQ_1 (0xb8019800)
#define REGISTER_SIZE_VD_PQ_1 (8)/*0xb8019800 ~ 0xb801981c*/
#define REGISTER_START_VD_PQ_2 (0xb8019830)
#define REGISTER_SIZE_VD_PQ_2 (12)/*0xb8019830 ~ 0xb801985c*/
#define REGISTER_START_VD_PQ_3 (0xb8019870)
#define REGISTER_SIZE_VD_PQ_3 (15)/*0xb8019870 ~ 0xb80198a8*/
#define REGISTER_START_VD_PQ_4 (0xb80198d0)
#define REGISTER_SIZE_VD_PQ_4 (4)/*0xb80198d0 ~ 0xb80198dc*/
#define REGISTER_START_VD_PQ_5 (0xb8019900)
#define REGISTER_SIZE_VD_PQ_5 (7)/*0xb8019900 ~ 0xb8019918*/
#define REGISTER_START_VD_PQ_6 (0xb8019928)
#define REGISTER_SIZE_VD_PQ_6 (17)/*0xb8019928 ~ 0xb8019968*/
#define REGISTER_START_VD_PQ_7 (0xb8019970)
#define REGISTER_SIZE_VD_PQ_7 (4)/*0xb8019970 ~ 0xb801997c*/
#define REGISTER_START_VD_PQ_8 (0xb801999c)
#define REGISTER_SIZE_VD_PQ_8 (1)/*0xb801999c ~ 0xb801999c*/
#define REGISTER_START_VD_PQ_9 (0xb80199a4)
#define REGISTER_SIZE_VD_PQ_9 (2)/*0xb80199a4 ~ 0xb80199a8*/
#define REGISTER_START_VD_PQ_10 (0xb80199d0)
#define REGISTER_SIZE_VD_PQ_10 (12)/*0xb80199d0 ~ 0xb80199fc*/
#define REGISTER_START_VD_PQ_11 (0xb8019b28)
#define REGISTER_SIZE_VD_PQ_11 (4)/*0xb8019b28 ~ 0xb8019b34*/
#define REGISTER_START_VD_PQ_12 (0xb8019d00)
#define REGISTER_SIZE_VD_PQ_12 (3)/*0xb8019d00 ~ 0xb8019d08*/
#define REGISTER_START_VD_PQ_13 (0xb8019d18)
#define REGISTER_SIZE_VD_PQ_13 (57)/*0xb8019d18 ~ 0xb8019df8*/
#define REGISTER_START_VD_PQ_14 (0xb8019e04)
#define REGISTER_SIZE_VD_PQ_14 (6)/*0xb8019e04 ~ 0xb8019e18*/
#define REGISTER_START_VD_PQ_15 (0xb8019e54)
#define REGISTER_SIZE_VD_PQ_15 (2)/*0xb8019e54 ~ 0xb8019e58*/
#define REGISTER_START_VD_PQ_16 (0xb8019e68)
#define REGISTER_SIZE_VD_PQ_16 (1)/*0xb8019e68 ~ 0xb8019e68*/
#define REGISTER_START_VD_PQ_17 (0xb8019ee8)
#define REGISTER_SIZE_VD_PQ_17 (6)/*0xb8019ee8 ~ 0xb8019efc*/
#define REGISTER_START_VD_PQ_18 (0xb8019f00)
#define REGISTER_SIZE_VD_PQ_18 (3)/*0xb8019f00 ~ 0xb8019f08*/
#define REGISTER_START_VD_PQ_19 (0xb8019f0c)
#define REGISTER_SIZE_VD_PQ_19 (34)/*0xb8019f0c ~ 0xb8019f90*/
#define REGISTER_START_VD_PQ_20 (0xb8019fa4)
#define REGISTER_SIZE_VD_PQ_20 (1)/*0xb8019fa4 ~ 0xb8019fa4*/
#define REGISTER_START_VD_PQ_21 (0xb8019fc0)
#define REGISTER_SIZE_VD_PQ_21 (16)/*0xb8019fc0 ~ 0xb8019ffc*/

#define REGISTER_TOTALSIZE_VD_PQ ( \
REGISTER_SIZE_VD_PQ_1 + \
REGISTER_SIZE_VD_PQ_2 + \
REGISTER_SIZE_VD_PQ_3 + \
REGISTER_SIZE_VD_PQ_4 + \
REGISTER_SIZE_VD_PQ_5 + \
REGISTER_SIZE_VD_PQ_6 + \
REGISTER_SIZE_VD_PQ_7 + \
REGISTER_SIZE_VD_PQ_8 + \
REGISTER_SIZE_VD_PQ_9 + \
REGISTER_SIZE_VD_PQ_10 + \
REGISTER_SIZE_VD_PQ_11 + \
REGISTER_SIZE_VD_PQ_12 + \
REGISTER_SIZE_VD_PQ_13 + \
REGISTER_SIZE_VD_PQ_14 + \
REGISTER_SIZE_VD_PQ_15 + \
REGISTER_SIZE_VD_PQ_16 + \
REGISTER_SIZE_VD_PQ_17 + \
REGISTER_SIZE_VD_PQ_18 + \
REGISTER_SIZE_VD_PQ_19 + \
REGISTER_SIZE_VD_PQ_20 + \
REGISTER_SIZE_VD_PQ_21)
#define REGISTER_START_VGIP_1 (0xb8022210)
#define REGISTER_SIZE_VGIP_1 (1)/*b8022210*/
#define REGISTER_START_VGIP_2 (0xb8022218)
#define REGISTER_SIZE_VGIP_2 (4)/*b8022218~b8022224*/
#define REGISTER_TOTALSIZE_VGIP (REGISTER_SIZE_VGIP_1 + REGISTER_SIZE_VGIP_2)

#define REGISTER_START_YPP_VD_ADC (0xb8020000)
#define REGISTER_SIZE_YPP_VD_ADC (24)/*b8020000 ~ 0xb802005C*/
#define REGISTER_TOTALSIZE_YPP_VD_ADC REGISTER_SIZE_YPP_VD_ADC

#define REGISTER_TOTALSIZE_FORAVD ( \
REGISTER_TOTALSIZE_VD_IFD_IN + \
REGISTER_TOTALSIZE_VD_TOP + \
REGISTER_TOTALSIZE_VD_PQ + \
REGISTER_TOTALSIZE_VGIP + \
REGISTER_TOTALSIZE_YPP_VD_ADC)
#define	dvr_malloc(x)	kmalloc(x, GFP_KERNEL)
#define	dvr_free(x)	kfree(x)

void AVD_Suspend(void)
{
	int i = 0, index = 0;

	rtd_printk(KERN_INFO, TAG_NAME_AVD,"AVD_Suspend start\n");

	if (get_AVD_Global_Status() == SRC_CONNECT_DONE)
	{
	rtd_printk(KERN_INFO, TAG_NAME_AVD,"AVD_Suspend Scaler_AVD_Timer_Delete()\n");
	Scaler_AVD_Timer_Delete();
	}

	drvif_module_vdc_ClockOn();

	AVD_Register_Backup = (unsigned int *)dvr_malloc(sizeof(unsigned int)*(REGISTER_TOTALSIZE_FORAVD));
	if (AVD_Register_Backup) {

		/*============YPP_VD_ADC=================================*/
		if (_SRC_CVBS == g_ucSrcType || (_SRC_TV == g_ucSrcType && KADP_AVD_EXTERNAL_DEMOD == g_tAVDDemodType))
		{
			for (i = 0  ; i < REGISTER_SIZE_YPP_VD_ADC ; i++) {
				AVD_Register_Backup[index++] = IoReg_Read32(REGISTER_START_YPP_VD_ADC  + (i<<2));
			}

			/*============VD_IFD_IN==================================*/
			for (i = 0  ; i < REGISTER_SIZE_VD_IFD_IN_1 ; i++) {
				AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_IFD_IN_1  + (i<<2));
			}
			for (i = 0 ; i < REGISTER_SIZE_VD_IFD_IN_2 ; i++) {
				AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_IFD_IN_2  + (i<<2));
			}
		}

		/*============VD_TOP=====================================*/
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_1 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_1   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_2 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_2   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_3 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_3   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_4 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_4   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_5 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_5   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_6 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_6   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_7 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_7   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_8 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_8   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_9 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_9   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_10 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_10   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_11 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_11   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_12 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_12   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_13 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_13   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_14 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_14   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_15 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_15   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_16 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_16   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_17 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_17   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_18 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_18   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_19 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_19   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_20 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_20   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_21 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_21   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_22 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_22   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_TOP_23 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_TOP_23   + (i<<2));
		}
		/*============VD_PQ=====================================*/
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_1 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_1   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_2 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_2   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_3 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_3   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_4 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_4   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_5 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_5   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_6 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_6   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_7 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_7   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_8 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_8   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_9 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_9   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_10 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_10   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_11 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_11   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_12 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_12   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_13 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_13   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_14 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_14   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_15 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_15   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_16 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_16   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_17 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_17   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_18 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_18   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_19 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_19   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_20 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_20   + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_PQ_21 ; i++) {
			AVD_Register_Backup[index++] = vdcf_inl(REGISTER_START_VD_PQ_21   + (i<<2));
		}
		/*============VGIP========================================*/
		for (i = 0 ; i < REGISTER_SIZE_VGIP_1 ; i++) {
			AVD_Register_Backup[index++] = IoReg_Read32(REGISTER_START_VGIP_1 + (i<<2));
		}
		for (i = 0 ; i < REGISTER_SIZE_VGIP_2 ; i++) {
			AVD_Register_Backup[index++] = IoReg_Read32(REGISTER_START_VGIP_2 + (i<<2));
		}
	}

	rtd_printk(KERN_INFO, TAG_NAME_AVD,"AVD_Suspend end\n");
}

void AVD_Resume(void)
{
	int i = 0, index = 0;

#ifdef _PRINT_AVD_COST_TIME
	rtd_printk(KERN_INFO, TAG_NAME_AVD,"_PRINT_AVD_COST_TIME:  %s(%d) init start time = %d\n",__FUNCTION__,__LINE__,IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90);
#endif

	if (!AVD_Register_Backup)
	{
		rtd_printk(KERN_EMERG, TAG_NAME_AVD, "AVD_Resume fail, AVD_Register_Backup=NULL\n");
		return;
	}
	drvif_module_vdc_ClockOn();

	rtd_printk(KERN_EMERG, TAG_NAME_AVD,"AVD_Resume go~\n");
	rtd_printk(KERN_INFO, TAG_NAME_AVD,"g_ucSrcType=%x\n", g_ucSrcType);

	// oliver+, 20150928
	if (_SRC_TV == g_ucSrcType && KADP_AVD_EXTERNAL_DEMOD == g_tAVDDemodType)
	{
//		drvif_module_vdc_ClockOn();
		drvif_module_vdc_PowerCtrl(ON, _SRC_CVBS);
		Scaler_AVD_Set_VDC_Power_Setting(VDC_Power_saving, _SRC_CVBS);
		//add for audio requirements
		IFD_SIF_ADC_Initial_Flow();
	}
	else
	{
		if (_SRC_TV == g_ucSrcType && KADP_AVD_INTERNAL_DEMOD == g_tAVDDemodType)
		{
			//rtd_printk(KERN_INFO, TAG_NAME_AVD,"drv_ifd_analog_preset=%x\n");
			// Open IFD clock
			CRT_CLK_OnOff(ATVDEMOD, CLK_ON, NULL);
			//FIXME ademod drv_ifd_adc_clock_init_162M();
			//FIXME ademod drv_ifd_analog_preset();
			drvif_module_vdc_set_external_ch_change_flag(FALSE);//For k6418
		}else{
			drvif_module_vdc_PowerCtrl(ON, g_ucSrcType);
		}
		Scaler_AVD_Set_VDC_Power_Setting(VDC_Power_saving, g_ucSrcType);
		//add for audio requirements
		if ((_SRC_TV == g_ucSrcType) && (KADP_AVD_EXTERNAL_DEMOD == g_tAVDDemodType)) {
			IFD_SIF_ADC_Initial_Flow();
		}
	}

	rtd_printk(KERN_INFO, TAG_NAME_AVD, "** 0xb8000204=%x\n", IoReg_Read32(0xb8000204));
	/*============YPP_VD_ADC=================================*/
	if (_SRC_CVBS == g_ucSrcType || (_SRC_TV == g_ucSrcType && KADP_AVD_EXTERNAL_DEMOD == g_tAVDDemodType))
	{
		for (i = 0  ; i < REGISTER_SIZE_YPP_VD_ADC ; i++) {
			IoReg_Write32(REGISTER_START_YPP_VD_ADC  + (i<<2), AVD_Register_Backup[index++]);
		}

		/*============VD_IFD_IN==================================*/
		for (i = 0 ; i < REGISTER_SIZE_VD_IFD_IN_1 ; i++) {
			vdcf_outl(REGISTER_START_VD_IFD_IN_1  + (i<<2), AVD_Register_Backup[index++]);
		}
		for (i = 0 ; i < REGISTER_SIZE_VD_IFD_IN_2 ; i++) {
			vdcf_outl(REGISTER_START_VD_IFD_IN_2  + (i<<2), AVD_Register_Backup[index++]);
		}
	}

	/*============VD_TOP=====================================*/
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_1 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_1   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_2 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_2   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_3 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_3   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_4 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_4   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_5 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_5   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_6 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_6   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_7 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_7   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_8 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_8   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_9 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_9   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_10 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_10   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_11 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_11   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_12 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_12   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_13 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_13   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_14 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_14   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_15 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_15   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_16 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_16   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_17 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_17   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_18 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_18   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_19 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_19   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_20 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_20   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_21 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_21   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_22 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_22   + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_TOP_23 ; i++) {
		vdcf_outl(REGISTER_START_VD_TOP_23   + (i<<2), AVD_Register_Backup[index++]);
	}
	/*============VD_PQ======================================*/
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_1 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_1 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_2 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_2 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_3 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_3 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_4 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_4 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_5 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_5 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_6 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_6 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_7 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_7 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_8 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_8 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_9 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_9 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_10 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_10 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_11 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_11 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_12 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_12 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_13 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_13 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_14 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_14 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_15 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_15 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_16 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_16 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_17 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_17 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_18 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_18 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_19 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_19 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_20 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_20 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VD_PQ_21 ; i++) {
		vdcf_outl(REGISTER_START_VD_PQ_21 + (i<<2), AVD_Register_Backup[index++]);
	}
	/*============VGIP=======================================*/
	for (i = 0 ; i < REGISTER_SIZE_VGIP_1 ; i++) {
		IoReg_Write32(REGISTER_START_VGIP_1 + (i<<2), AVD_Register_Backup[index++]);
	}
	for (i = 0 ; i < REGISTER_SIZE_VGIP_2 ; i++) {
		IoReg_Write32(REGISTER_START_VGIP_2 + (i<<2), AVD_Register_Backup[index++]);
	}
	dvr_free(AVD_Register_Backup);
	AVD_Register_Backup = NULL;

	rtd_printk(KERN_INFO, TAG_NAME_AVD,"&& 0xb8000204=%x\n", IoReg_Read32(0xb8000204));
	drvif_module_vdc_FIFO_CLK_setting();
	drvif_module_vdc_SoftReset();

	//rtd_printk(KERN_EMERG, TAG_NAME_AVD, "g_ucStopVDTimer=%x\n", g_ucStopVDTimer);
	if (TRUE == g_ucStopVDTimer && get_AVD_Global_Status() == SRC_CONNECT_DONE)
	{
		rtd_printk(KERN_INFO, TAG_NAME_AVD,KERN_EMERG "AVD_Resume Scaler_AVD_Timer_Init()\n");
		Scaler_AVD_Timer_Init();
	}
}

