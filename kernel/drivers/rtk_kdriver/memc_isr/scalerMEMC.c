//#include <string.h>

//#include <stdio.h>
//#include <stdlib.h>

//#include <rtio.h>
//#include <VP_def.h>

//#include <auto_conf.h> // Provides: CONFIG_VBI_CC
//#include <rtd_system.h>
//#include <rtd_memmap.h>
#include <memc_isr/scalerMEMC.h>
#include "vgip_isr/scalerVIP.h"
#include <linux/mutex.h>
//#include <mach/io.h>
#include <tvscalercontrol/panel/panelapi.h>

// oliver+
//#include <kernel/scaler/scalerDrv2.h>
//#include <scaler/kernel/scaler/scalerDrv.h>
//#include <scaler/scalerDrvCommon.h>
//#include <scaler/scalerCommon.h>
//#include <memc_isr/include/memc_lib.h>
#include <rbus/ppoverlay_reg.h>
#include <rbus/mc_dma_reg.h>
#include <rbus/dbus_wrapper_reg.h>
//#include "rbus/crt_sys_reg.h"
//#include "rbus/crt_fw.h"
//#endif

#include "tvscalercontrol/vip/vip_reg_def.h"

#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerDrvCommon.h>
#else
	#include <scalercommon/scalerDrvCommon.h>
#endif

#include <tvscalercontrol/scalerdrv/scalerdrv.h>
#include <rbus/sb2_reg.h> // for hardware semaphore

//#include "memc_isr/Driver/KI7436_reg.h"
#include "memc_isr/Driver/KI7576_reg.h"
#include "memc_isr/Common/kw_debug.h" // for LogPrintf

// for register dump
#include <tvscalercontrol/io/ioregdrv.h>
#undef rtd_outl
#define rtd_outl(x, y)     								IoReg_Write32(x,y)
#undef rtd_inl
#define rtd_inl(x)     									IoReg_Read32(x)
#undef rtd_maskl
#define rtd_maskl(x, y, z)     							IoReg_Mask32(x,y,z)
#undef rtd_setbits
#define rtd_setbits(offset, Mask) rtd_outl(offset, (rtd_inl(offset) | Mask))
#undef rtd_clearbits
#define rtd_clearbits(offset, Mask) rtd_outl(offset, ((rtd_inl(offset) & ~(Mask))))

#define MEMC_IRQ_HANDLED 1
#define MEMC_IRQ_NONE       0

static unsigned char scaler_memc_enable = 0;
#ifndef MEMC_INIT_STATUS
static unsigned char g_scaler_memc_acon_init = 0;//for ac off->on: dma enable delay 2 vsync than slavemode set, clear when dc suspend
#else
static SCALER_MEMC_INIT_STATUS g_scaler_memc_init_status = MEMC_INIT_NONE;
#endif

#ifdef CONFIG_MEMC_TASK_QUEUE
#define MEMC_TASK_MAX_CNT 17 //Total element count of memc task queue
static SCALER_MEMC_TASK_T g_memc_tasks_queue[MEMC_TASK_MAX_CNT];
static unsigned int g_memc_tasks_header = 0;
static unsigned int g_memc_tasks_tailer = 0;
#endif

unsigned char g_scaler_memc_cadence[_FILM_MEMC_NUM] = {0};

unsigned char g_ucMemcDelay;

unsigned char g_MEMC_powersaving_on = 0;

extern UINT32 HDMI_PowerSaving_stage;
extern int g_memc_hdmi_switch_state;
extern int g_memc_switch_state;
extern UINT32 DTV_PowerSaving_stage;
extern VOID Mid_MISC_SetInINTEnable(INT_TYPE enIntType, BOOL bEnable);
extern VOID Mid_MISC_SetOutINTEnable(INT_TYPE enIntType, BOOL bEnable);

VOID MEMC_ISR_test(void);

//==================================================================================================

void memc_suspend(void)
{
	Scaler_MEMC_SetInitFlag(0);//clear when dc suspend
	Scaler_MEMC_resetMEMCMode();

}

void Scaler_MEMC_SetInitFlag(unsigned char val)
{
#ifndef MEMC_INIT_STATUS
	if(val>1)
		g_scaler_memc_acon_init = 0;
	else
		g_scaler_memc_acon_init = val;
#else
	g_scaler_memc_init_status = val;
#endif

}

unsigned char Scaler_MEMC_GetInitFlag(void)
{
#ifndef MEMC_INIT_STATUS

	return g_scaler_memc_acon_init;
#else
	return g_scaler_memc_init_status;
#endif
}

void Scaler_MEMC_DMA_DB_Check(void)
{
	UINT32 u32_RB_val=0;
	
	rtd_printk(KERN_NOTICE,TAG_NAME_MEMC, "[MEMC][DMA_DB_Check_1]=[,%x,%x,%x,%x,%x]\n",rtd_inl(0xb80994F0),rtd_inl(0xb809AEA8),rtd_inl(0xb8099850),rtd_inl(0xb8099268),rtd_inl(0xb80999ec));
	
	u32_RB_val=IoReg_Read32(0xb80994F0);//MC_WDMA
	if( (u32_RB_val&0x1)==1){
		IoReg_ClearBits(0xb80994F0,_BIT0);
		IoReg_ClearBits(0xb80994F0,_BIT1);
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_WDMA 0xb80994F0=%x\n", IoReg_Read32(0xb80994F0));
		//MC_LF_W uplimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_LF_W up limit 0xb8099458=%x\n", IoReg_Read32(0xb8099458));
		//MC_LF_W downlimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_LF_W down limit 0xb809945C=%x\n", IoReg_Read32(0xb809945C));
		//MC_HF_W uplimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_HF_W up limit 0xb80994D0=%x\n", IoReg_Read32(0xb80994D0));
		//MC_HF_W downlimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_HF_W down limit 0xb80994D8=%x\n", IoReg_Read32(0xb80994D8));
		
	}
	
	u32_RB_val=IoReg_Read32(0xb809AEA8);//MC_RDMA
	if( (u32_RB_val&0x1)==1){
		IoReg_ClearBits(0xb809AEA8,_BIT0);
		IoReg_ClearBits(0xb809AEA8,_BIT1);
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_RDMA_DB 0xb809AEA8=%x\n", IoReg_Read32(0xb809AEA8));
		//MC_LF_I_R uplimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_LF_I_R up limit 0xb809AE14=%x\n", IoReg_Read32(0xb809AE14));		
		//MC_LF_I_R downlimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_LF_I_R down limit 0xb809AE18=%x\n", IoReg_Read32(0xb809AE18));
		//MC_HF_I_R uplimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_HF_I_R up limit 0xb809AE34=%x\n", IoReg_Read32(0xb809AE34));
		//MC_HF_I_R downlimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_HF_I_R down limit 0xb809AE38=%x\n", IoReg_Read32(0xb809AE38));
		//MC_LF_P_R uplimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_LF_P_R up limit 0xb809AE54=%x\n", IoReg_Read32(0xb809AE54));
		//MC_LF_P_R downlimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_LF_P_R down limit 0xb809AE58=%x\n", IoReg_Read32(0xb809AE58));
		//MC_HF_P_R uplimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_HF_P_R up limit 0xb809AE74=%x\n", IoReg_Read32(0xb809AE74));
		//MC_HF_P_R downlimit_addr
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"MC_HF_P_R down limit 0xb809AE78=%x\n", IoReg_Read32(0xb809AE78));
		
	}
	
	u32_RB_val=IoReg_Read32(0xb8099850);//DECOMP_DB
	if( (u32_RB_val&0x1)==1){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"DECOMP_DB 0xb8099850=%x\n", IoReg_Read32(0xb8099850));
		IoReg_ClearBits(0xb8099850,_BIT0);
		IoReg_ClearBits(0xb8099850,_BIT1);				
	}

	u32_RB_val=IoReg_Read32(0xb8099268);//COMP_DB
	if( (u32_RB_val&0x1)==1){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"COMP_DB 0xb8099268=%x\n", IoReg_Read32(0xb8099268));
		IoReg_ClearBits(0xb8099268,_BIT0);
		IoReg_ClearBits(0xb8099268,_BIT1);				
	}

	u32_RB_val=IoReg_Read32(0xb80999ec);//LBMC_DB
	if( (u32_RB_val&0x1)==1){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"LBMC_DB 0xb80999ec=%x\n", IoReg_Read32(0xb80999ec));
		IoReg_ClearBits(0xb80999ec,_BIT0);
		IoReg_ClearBits(0xb80999ec,_BIT1);
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"PC_mode_check 0xb8099924=%x\n", IoReg_Read32(0xb8099924));
		
	}

	IoReg_SetBits(0xb80994F0,_BIT1);
	IoReg_SetBits(0xb809AEA8,_BIT1);
	IoReg_SetBits(0xb8099850,_BIT1);
	IoReg_SetBits(0xb8099268,_BIT1);
	IoReg_SetBits(0xb80999ec,_BIT1);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC,"[MEMC][DMA_DB_Check_2]=[,%x,%x,%x,%x,%x]\n",rtd_inl(0xb80994F0),rtd_inl(0xb809AEA8),rtd_inl(0xb8099850),rtd_inl(0xb8099268),rtd_inl(0xb80999ec));
	
}

void Scaler_MEMC_Set_MC_MEMBoundary(unsigned int  nDownlimit,unsigned int nUplimit)
{
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
}

void Scaler_MEMC_Set_ME_MEMBoundary(unsigned int  nDownlimit,unsigned int nUplimit)
{
	IoReg_Write32(DBUS_WRAPPER_Me_downlimit_addr_reg, nDownlimit);
	IoReg_Write32(DBUS_WRAPPER_Me_uplimit_addr_reg, nUplimit);
}	

void Scaler_MEMC_Initialize(unsigned int ME_start_addr, unsigned int MC00_start_addr, unsigned int MC01_start_addr)
{
#if 0 //def MEMC_BRING_UP
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][Scaler_MEMC_Initialize]\n");

//	MEMC_Lib_LoadBringUpScript_HDF();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_HDF]\n");

//	MEMC_Lib_LoadBringUpScript_PhaseTable();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_PhaseTable]\n");

//	MEMC_Lib_LoadBringUpScript_MemoryAddress();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_MemoryAddress]\n");

//	MEMC_Lib_LoadBringUpScript_cs_2x2_all_on();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_cs_2x2_all_on]\n");

//	MEMC_Lib_LoadBringUpScript_Enable_DMA();
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC_BRING_UP][MEMC_Lib_LoadBringUpScript_Enable_DMA]\n");
#else
	UINT32 Hsync_start = 0, Vsync_start = 0;
	PANEL_PARA_ST stPanelPara;
	UINT16 u16Idx = 0;
	printk(KERN_EMERG "[MEMC][%s]\n",__FUNCTION__);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]ME_start_addr = %x\n", ME_start_addr);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]MC00_start_addr = %x\n", MC00_start_addr);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]MC01_start_addr = %x\n", MC01_start_addr);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]KME_TOTAL_SIZE = %x\n", KME_TOTAL_SIZE);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]KMC_TOTAL_SIZE = %x\n", KMC_TOTAL_SIZE);
	rtd_printk(KERN_NOTICE,TAG_NAME_MEMC, "[MEMC][db]=[,%x,%x,%x]\n",rtd_inl(0xb80994F0),rtd_inl(0xb809AEA8),rtd_inl(0xb8099850));
	rtd_printk(KERN_NOTICE,TAG_NAME_MEMC, "[MEMC][%x, %x, %x, %x, %x, %x]\n\r", rtd_inl(0xb8099460), rtd_inl(0xb80994dc), rtd_inl(0xb809ae1c), rtd_inl(0xb809ae3c), rtd_inl(0xb809ae5c), rtd_inl(0xb809ae7c));	

	Scaler_MEMC_DMA_DB_Check();

#ifndef MEMC_INIT_STATUS
	Scaler_MEMC_SetInitFlag(1);
	//Scaler_MEMC_SetMEMC_Enable(0);
#else
	Scaler_MEMC_SetInitFlag(MEMC_INIT_ACON_ING);
#endif
	MEMC_LibInputVSInterruptEnable(FALSE);
	MEMC_LibOutputVSInterruptEnable(FALSE);
	MEMC_LibInputHSInterruptEnable(FALSE);
	MEMC_LibOutpuHSInterruptEnable(FALSE);	
	Vsync_start = (rtd_inl(PPOVERLAY_memcdtg_DV_DEN_Start_End_reg) & 0xffff0000)>>16;
	Hsync_start = (rtd_inl(PPOVERLAY_memcdtg_DH_DEN_Start_End_reg) & 0xffff0000)>>16;
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]Vsync_start = %d\n",Vsync_start);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]Hsync_start = %d\n",Hsync_start);
	MEMC_LibPanel_Init();
	#if IC_K6LP
	stPanelPara.enOutputFrameRate = OUTPUT_60HZ;
	stPanelPara.u32Htotal = Get_DISP_HORIZONTAL_TOTAL();
	stPanelPara.u32HtotalMax = 4800;
	stPanelPara.u32HtotalMin = 4000;
	stPanelPara.u32Hactive = 3840;
	stPanelPara.u32HSWidth = 280;
	stPanelPara.u32HSBPorch = 168; //Hsync_start - stPanelPara.u32HSWidth;
	stPanelPara.u32Vtotal = 2250;
	stPanelPara.u32VtotalMax = 2500;
	stPanelPara.u32VtotalMin = 2200;
	stPanelPara.u32Vactive = 2160;
	stPanelPara.u32VSWidth = 8;
	stPanelPara.u32VSBPorch = 35; //Vsync_start - stPanelPara.u32VSWidth;
	#else
	stPanelPara.enOutputFrameRate = OUTPUT_60HZ;
	stPanelPara.u32Htotal = Get_DISP_HORIZONTAL_TOTAL();
	stPanelPara.u32HtotalMax = 4800;
	stPanelPara.u32HtotalMin = 4000;
	stPanelPara.u32Hactive = 3840;
	stPanelPara.u32HSWidth = 64;
	stPanelPara.u32HSBPorch = 168;//Hsync_start - stPanelPara.u32HSWidth;
	stPanelPara.u32Vtotal = 2250;
	stPanelPara.u32VtotalMax = 2300;
	stPanelPara.u32VtotalMin = 2200;
	stPanelPara.u32Vactive = 2160;
	stPanelPara.u32VSWidth = 8;
	stPanelPara.u32VSBPorch = Vsync_start - stPanelPara.u32VSWidth;
	#endif	
	//printk(KERN_INFO "\n DISP_HORIZONTAL_TOTAL = %d \n",Get_DISP_HORIZONTAL_TOTAL());
	for(u16Idx = 0; u16Idx < OUTPUT_FRAME_MAX; u16Idx++){
		stPanelPara.enOutputFrameRate = u16Idx;
		MEMC_LibSetPanelParameters(&stPanelPara);
	}
	MEMC_LibDMAllocate(MC00_start_addr, MC01_start_addr, ME_start_addr);
	Scaler_MEMC_Set_ME_MEMBoundary(ME_start_addr, (ME_start_addr+KME_TOTAL_SIZE));
	Scaler_MEMC_Set_MC_MEMBoundary(MC00_start_addr,(MC00_start_addr + KMC_TOTAL_SIZE));	
	MEMC_LibInit();
	//MEMC_LibSetInOutFrameRate(INPUT_60HZ,OUTPUT_60HZ);
	//MEMC_LibSetInOutMode(MEMC_RGB_IN_VIDEO_OUT,TRUE);
	//MEMC_LibSetInOutUseCase(INPUT_3840X2160, OUTPUT_3840X2160, INPUT_2D, OUTPUT_2D);
	/* Enable in/out Vsync interrupt */
	MEMC_LibInputVSInterruptEnable(TRUE);
	MEMC_LibOutputVSInterruptEnable(TRUE);
	Scaler_MEMC_SetMEMC_Enable(1);
#ifdef MEMC_INIT_STATUS
	Scaler_MEMC_SetInitFlag(MEMC_INIT_ACON_FINISH);
#endif
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "MEMC initialize done. IOvs Intp Enable.\r\n");
#endif
}

void Scaler_MEMC_Uninitialize(void){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
}

unsigned char Scaler_MEMC_Dejudder_Level_Mapping(unsigned char inLevel)
{
	unsigned char outLevel = 0;

	unsigned char level_map[11] = {0, 14, 28, 41, 55, 68, 82, 95, 106, 117, 128};	//confirmed by LG Ann


	if(inLevel > 10)
		inLevel = 10;

	outLevel = level_map[inLevel];

	return outLevel;
}

unsigned char Scaler_MEMC_Deblur_Level_Mapping(unsigned char inLevel)
{
	unsigned char outLevel = 0;

	unsigned char level_map[11] = {0, 14, 28, 41, 55, 68, 82, 95, 106, 117, 128};	//confirmed by LG Ann


	if(inLevel > 10)
		inLevel = 10;

	outLevel = level_map[inLevel];

	return outLevel;
}

extern UBYTE u8_MEMCMode;
extern UINT32 dejudder;
extern UINT32 deblur;
void Scaler_MEMC_SetMotionComp(unsigned char blurLevel, unsigned char judderLevel, SCALER_MEMC_TYPE_T motion){
	_RPC_clues* RPC_SmartPic_clue = (_RPC_clues *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_RPC_SMARTPIC_CLUS);
	UBYTE ME_clock_status = 0;
	static UBYTE First_time_flag = 1;



	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]blurLevel = %d, judderLevel = %d, motion = %d\n",blurLevel, judderLevel, motion);
	//if(MEMC_LibGetMEMC_PCModeEnable() == TRUE){
	//	return;
	//}

	if(RPC_SmartPic_clue == NULL || (Scaler_MEMC_GetMEMC_Enable() == 0))
		return;

	if(MEMC_LibGetMEMCLowDelayModeEnable() == TRUE && RPC_SmartPic_clue->MEMC_VCPU_setting_info.m_MiraCast == 1)
		return;

	ME_clock_status = (rtd_inl(0xb800011c)>>30)&0x1;

#ifdef MEMC_BRING_UP
	motion = MEMC_TYPE_HIGH;
#endif

	//re-mapping
	if(motion == 0/*VPQ_MEMC_TYPE_OFF*/){         // off
		motion = MEMC_TYPE_OFF;
	}
	else if(motion == 1/*VPQ_MEMC_TYPE_LOW*/){ // natural
		motion = MEMC_TYPE_LOW;
	}
	else if(motion == 2/*VPQ_MEMC_TYPE_HIGH*/){ // smooth
		motion = MEMC_TYPE_HIGH;
	}
	else if(motion == 4/*VPQ_MEMC_TYPE_USER*/){ // user
		motion = MEMC_TYPE_USER;
	}
	else if(motion == 5/*VPQ_MEMC_TYPE_55_PULLDOWN*/){
		motion = MEMC_TYPE_55_PULLDOWN;
	}
	else if(motion == 6/*VPQ_MEMC_TYPE_MEDIUM*/){  // cinema clear
		motion = MEMC_TYPE_MEDIUM;
	}
	else if(motion == 3/*VPQ_MEMC_TYPE_NORMAL*/){
		motion = MEMC_TYPE_NORMAL;
	}
	else{
		motion = MEMC_TYPE_OFF;
	}

	if(motion>=MEMC_TYPE_MAX)		//fix me
		motion = MEMC_TYPE_OFF;

	u8_MEMCMode = motion;
	if(motion == MEMC_TYPE_OFF){
		//OFF memc
		MEMC_LibSetMEMCMode(MEMC_OFF);

		//if(RPC_SmartPic_clue->prePowerSaveStatus == PS_ON)
		if(ME_clock_status == 0)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RepeatMode] Power saving mode on, return.\n");
		}
		else
		{
			if(First_time_flag)
				MEMC_LibSetMEMCFrameRepeatEnable(1, 1);
			else
				MEMC_LibSetMEMCFrameRepeatEnable(1, 0);
		}
	}
	else if(motion == MEMC_TYPE_LOW){
		//Set low memc
		MEMC_LibSetMEMCMode(MEMC_CLEAR);

		//if(RPC_SmartPic_clue->prePowerSaveStatus == PS_ON)
		if(ME_clock_status == 0)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RepeatMode] Power saving mode on, return.\n");
		}
		else
		{
			if(First_time_flag)
				MEMC_LibSetMEMCFrameRepeatEnable(0, 1);
			else
				MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
		}
	}
	else if(motion == MEMC_TYPE_HIGH){
		//Set high memc
		MEMC_LibSetMEMCMode(MEMC_SMOOTH);

		//if(RPC_SmartPic_clue->prePowerSaveStatus == PS_ON)
		if(ME_clock_status == 0)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RepeatMode] Power saving mode on, return.\n");
		}
		else
		{
			if(First_time_flag)
				MEMC_LibSetMEMCFrameRepeatEnable(0, 1);
			else
				MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
		}
	}
	else if(motion == MEMC_TYPE_NORMAL){
		//Set high memc
		MEMC_LibSetMEMCMode(MEMC_NORMAL);

		//if(RPC_SmartPic_clue->prePowerSaveStatus == PS_ON)
		if(ME_clock_status == 0)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RepeatMode] Power saving mode on, return.\n");
		}
		else
		{
			if(First_time_flag)
				MEMC_LibSetMEMCFrameRepeatEnable(0, 1);
			else
				MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
		}
	}
	else if(motion == MEMC_TYPE_USER){
		//Set user memc
		MEMC_LibSetMEMCMode(MEMC_USER);
		//Set blurLevel for Video
		blurLevel = Scaler_MEMC_Deblur_Level_Mapping(blurLevel);
		deblur = blurLevel;
		MEMC_LibSetMEMCDeblurLevel(blurLevel);
		//Set JudderLevel for Film
		judderLevel = Scaler_MEMC_Dejudder_Level_Mapping(judderLevel);
		dejudder = judderLevel;
		//rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "=====[MEMC]judderLevel = %d\n", judderLevel);
		
		MEMC_LibSetMEMCDejudderLevel(judderLevel);
		//if(RPC_SmartPic_clue->prePowerSaveStatus == PS_ON)
		if(ME_clock_status == 0)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RepeatMode] Power saving mode on, return.\n");
		}
		else
		{
			if(First_time_flag)
				MEMC_LibSetMEMCFrameRepeatEnable(0, 1);
			else
				MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
		}
	}
	else if(motion == MEMC_TYPE_55_PULLDOWN){

		#if Pro_TCL
		MEMC_LibSetMEMCMode(MEMC_NORMAL);

		//if(RPC_SmartPic_clue->prePowerSaveStatus == PS_ON)
		if(ME_clock_status == 0)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RepeatMode] Power saving mode on, return.\n");
		}
		else
		{
			if(First_time_flag)
				MEMC_LibSetMEMCFrameRepeatEnable(0, 1);
			else
				MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
		}
		#else
		MEMC_LibSetMEMCMode(MEMC_OFF);
		
		//On 5:5 Pull-down for 24Hz Film source
		//if(RPC_SmartPic_clue->prePowerSaveStatus == PS_ON)
		if(ME_clock_status == 0)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RepeatMode] Power saving mode on, return.\n");
		}
		else
		{
			if(First_time_flag)
				MEMC_LibSetMEMCFrameRepeatEnable(1, 1);
			else
				MEMC_LibSetMEMCFrameRepeatEnable(1, 0);
		}
		#endif
	}
	else if(motion == MEMC_TYPE_MEDIUM){
		//Set high memc
		MEMC_LibSetMEMCMode(MEMC_MEDIUM);

		//if(RPC_SmartPic_clue->prePowerSaveStatus == PS_ON)
		if(ME_clock_status == 0)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[RepeatMode] Power saving mode on, return.\n");
		}
		else
		{
			if(First_time_flag)
				MEMC_LibSetMEMCFrameRepeatEnable(0, 1);
			else
				MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
		}
	}

	if(First_time_flag == 1){
		First_time_flag = 0;

	}
}

void Scaler_MEMC_SetBlurLevel(unsigned char blurLevel){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]blurLevel = %d\n",blurLevel);
	//Set blurLevel for Video

	blurLevel = Scaler_MEMC_Deblur_Level_Mapping(blurLevel);

	MEMC_LibSetMEMCDeblurLevel(blurLevel);
}

void Scaler_MEMC_SetJudderLevel(unsigned char judderLevel){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]judderLevel = %d\n",judderLevel);
	//Set JudderLevel for Film

	judderLevel = Scaler_MEMC_Dejudder_Level_Mapping(judderLevel);

	MEMC_LibSetMEMCDejudderLevel(judderLevel);
}

void Scaler_MEMC_MotionCompOnOff(unsigned char bOnOff){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]bOnOff = %d\n",bOnOff);

	if(bOnOff == TRUE){
		MEMC_LibSetMEMCMode(MEMC_NORMAL);
		MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
	}
	else{
		MEMC_LibSetMEMCMode(MEMC_OFF);
		MEMC_LibSetMEMCFrameRepeatEnable(1, 0);
	}
}

int LowDelay_mode = 0;
extern unsigned char VR360_en;
void Scaler_MEMC_LowDelayMode(unsigned char type){
	static MEMC_MODE last_mode = MEMC_OFF;
	static unsigned char pre_type = 255;

	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s][AA][,%d,][,%d,%d,%d,%d,]\n",__FUNCTION__, type, MEMC_LibGetMEMCLowDelayModeEnable(), MEMC_LibGetMEMC_PCModeEnable(), VR360_en, Scaler_MEMC_GetMEMC_Enable());
//	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "$$$   scalerMEMC_LowDelay_(%d)   $$$\n\r", type);
	LowDelay_mode = type;

	if(type == MEMC_LibGetMEMCLowDelayModeEnable())
		return;

	if(MEMC_LibGetMEMC_PCModeEnable() || VR360_en || (Scaler_MEMC_GetMEMC_Enable() == 0))
		return;

	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s][BB][,%d,][,%d,%d,%d,%d,]\n",__FUNCTION__, type, MEMC_LibGetMEMCLowDelayModeEnable(), MEMC_LibGetMEMC_PCModeEnable(), VR360_en, Scaler_MEMC_GetMEMC_Enable());
	//if(VR360_en)
	//	return;

	if(type == 1){
		//Reduce frame buffer for low frame delay
		//if(MEMC_LibGetMEMC_PCModeEnable() == FALSE)	//PC mode first
		//{
		//	MEMC_LibSetMEMCMode(MEMC_OFF);
		//	MEMC_LibSetMEMCFrameRepeatEnable(1, 0);
		//}
		if(type != pre_type){
			last_mode = MEMC_LibGetMEMCMode();
			MEMC_LibSetMEMCMode(MEMC_OFF);
			MEMC_LibSetMEMCFrameRepeatEnable(1, 0);
		}
		MEMC_LibSetMEMCLowDelayModeEnable(TRUE);
	}
	else{
		//Normal mode
		//MEMC_LibSetMEMCMode(MEMC_NORMAL);
		//MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
		if(last_mode != MEMC_OFF){
			if(VR360_en){
				MEMC_LibSetMEMCMode(MEMC_OFF);
				MEMC_LibSetMEMCFrameRepeatEnable(1, 0);
			}else{
				MEMC_LibSetMEMCMode(last_mode);
				MEMC_LibSetMEMCFrameRepeatEnable(0, 0);
			}
		}
		MEMC_LibSetMEMCLowDelayModeEnable(FALSE);
	}
}

void Scaler_MEMC_SetRGBYUVMode(unsigned char mode){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]mode = %d\n",mode);

	switch(mode)
	{
		case 0:
			//MEMC_LibSetInOutMode(MEMC_RGB_IN_VIDEO_OUT, FALSE);
			MEMC_LibSetMEMC_PCModeEnable(FALSE);
			break;
		case 1:
			//MEMC_LibSetInOutMode(MEMC_RGB_IN_PC_OUT, FALSE);
			MEMC_LibSetMEMC_PCModeEnable(TRUE);
			break;
#if 0
		case 2:
			MEMC_LibSetInOutMode(MEMC_YUV_IN_VIDEO_OUT, FALSE);
			break;
		case 3:
			MEMC_LibSetInOutMode(MEMC_YUV_IN_PC_OUT, FALSE);
			break;
#endif
		default:
			MEMC_LibSetInOutMode(MEMC_RGB_IN_VIDEO_OUT, FALSE);
			MEMC_LibSetMEMC_PCModeEnable(FALSE);
			break;
 	}
}
void Scaler_MEMC_GetFrameDelay (UINT16 *pFrameDelay){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
}
void Scaler_MEMC_SetVideoBlock(SCALER_MEMC_MUTE_TYPE_T type, unsigned char bOnOff){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
}
void Scaler_MEMC_SetTrueMotionDemo(unsigned char bOnOff){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);

	if(bOnOff== TRUE){
		MEMC_LibSetMEMCDemoMode(DEMO_MODE_OFF);
	}
	else{
		MEMC_LibSetMEMCDemoMode(DEMO_MODE_LEFT);
	}

}
void Scaler_MEMC_GetFirmwareVersion(UINT16 *pVersion){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
}
void Scaler_MEMC_SetBypassRegion(unsigned char bOnOff, SCALER_MEMC_BYPASS_REGION_T region, UINT32 x, UINT32 y, UINT32 w, UINT32 h){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);

	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]region = %d\n",region);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]rect.x = %d, rect.y = %d, rect.w = %d, rect.h = %d\n",x, y, w, h);

	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC]bOnOff = %d\n",bOnOff);

	switch(region){
		case BYPASS_REGION_0:
			MEMC_LibSetDemoWindowSettings(BYPASS_REGION_0, x, w, y, h);
			MEMC_LibSetDemoWindowEnable(BYPASS_REGION_0, bOnOff);
			break;

		case BYPASS_REGION_1:
			MEMC_LibSetDemoWindowSettings(BYPASS_REGION_1, x, w, y, h);
			MEMC_LibSetDemoWindowEnable(BYPASS_REGION_1, bOnOff);
			break;

		case BYPASS_REGION_2:
			MEMC_LibSetDemoWindowSettings(BYPASS_REGION_2, x, w, y, h);
			MEMC_LibSetDemoWindowEnable(BYPASS_REGION_2, bOnOff);
			break;

		case BYPASS_REGION_3:
			MEMC_LibSetDemoWindowSettings(BYPASS_REGION_3, x, w, y, h);
			MEMC_LibSetDemoWindowEnable(BYPASS_REGION_3, bOnOff);
			break;

		case BYPASS_REGION_4:
			MEMC_LibSetDemoWindowSettings(BYPASS_REGION_4, x, w, y, h);
			MEMC_LibSetDemoWindowEnable(BYPASS_REGION_4, bOnOff);
			break;

		default:
			break;
	}
}
void Scaler_MEMC_SetReverseControl(unsigned char u8Mode){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
}
void Scaler_MEMC_Freeze(unsigned char type){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
}
void Scaler_MEMC_SetDemoBar(unsigned char bOnOff, unsigned char r, unsigned char g, unsigned char b){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
}
void Scaler_MEMC_DEBUG(void){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
}

void Scaler_MEMC_SetInOutputUseCase(unsigned char input_re, unsigned char output_re, unsigned char input_for, unsigned char output_for){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	MEMC_LibSetInOutUseCase(input_re, output_re, input_for, output_for);
}

void Scaler_MEMC_SetInputOutputFormat(unsigned char input_for, unsigned char output_for){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	//MEMC_LibSetInputOutputFormat(input_for, output_for);
}

void Scaler_MEMC_SetInputOutputResolution(unsigned char input_re, unsigned char output_re){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	//MEMC_LibSetInputOutputResolution(input_re, output_re);
}

void Scaler_MEMC_SetInputFrameRate(unsigned char frame_rate){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	MEMC_LibSetInputFrameRate(frame_rate);
}

void Scaler_MEMC_SetOutputFrameRate(unsigned char frame_rate){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	MEMC_LibSetOutputFrameRate(frame_rate);
}

void Scaler_MEMC_SetMEMCFrameRepeatEnable(unsigned char enable){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	MEMC_LibSetMEMCFrameRepeatEnable(enable, 0);
}

unsigned char g_input_mode = 0;
void ISR_Scaler_MEMC_SetInOutMode(unsigned char emom){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	MEMC_LibSetInOutMode(emom, FALSE);
	g_input_mode = emom;
}
unsigned char ISR_Scaler_MEMC_GetInOutMode(void){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	return g_input_mode;
}
unsigned char g_JP_DTV_4K_flag = 0;
void MEMC_Lib_Set_JP_DTV_4K_flag(unsigned char num)
{
	g_JP_DTV_4K_flag = num;
}
unsigned char MEMC_Lib_Get_JP_DTV_4K_flag(void)
{
	return g_JP_DTV_4K_flag;
}

void Scaler_MEMC_SetInstantBootInitPhaseTable(){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);

	//enable MEMC input/output clock before run MEMC isr
	rtd_outl(SYS_REG_SYS_DISPCLKSEL_reg,rtd_inl(SYS_REG_SYS_DISPCLKSEL_reg)|( BIT_5 | BIT_6));

	MEMC_LibForcePhaseTableInit();
}

void Scaler_MEMC_SetMEMC_Enable(unsigned char enable){
	scaler_memc_enable = enable;
}

void Scaler_MEMC_SetCinemaMode(unsigned char enable){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s][%d]\n",__FUNCTION__, enable);

	MEMC_LibSetCinemaMode(enable);
}

unsigned char Scaler_MEMC_GetMEMC_Enable(void){
	return scaler_memc_enable;
}

unsigned char Scaler_MEMC_GetMEMC_Mode(void){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);
	return MEMC_LibGetMEMCMode();
}

BOOL Scaler_MEMC_SetPowerSaveOn(){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);

	return MEMC_LibPowerSaveOn();
}

BOOL Scaler_MEMC_SetPowerSaveOff(){
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MEMC][%s]\n",__FUNCTION__);

	return MEMC_LibPowerSaveOff();
}

//#define BIT(x)               (1 <<x)
UBYTE u1_is_me_dead;
extern UINT32 loadscript_cnt_2;
unsigned int Scaler_MEMC_ISR(void){

#ifdef CONFIG_MEMC_BYPASS
                return MEMC_IRQ_HANDLED;
#else

	//LogPrintf(DBG_MSG,  "[MEMC][%s]\n",__FUNCTION__);
	static UBYTE u1_is_me_dead_pre = 0;
	UINT32 u32_rb_val = 0;

	_RPC_clues* RPC_SmartPic_clue = (_RPC_clues *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_RPC_SMARTPIC_CLUS);

	if(RPC_SmartPic_clue == NULL){
		u1_is_me_dead = 255;
	} else {
		u1_is_me_dead = RPC_SmartPic_clue->MEMC_VCPU_setting_info.is_me_dead;
	}

	u32_rb_val = rtd_inl(SYS_REG_SYS_CLKEN3_reg);
	u32_rb_val = (u32_rb_val>>30);

#if 0//def CONFIG_RTK_KDEV_DEBUG_ISR
	unsigned int reg_value = 0;
	reg_value = rtd_inl(0xb802e4f8);

	unsigned int time1;
	static unsigned int time1s_set=0;
	static unsigned int time1s_start=0;
	static unsigned int time1s_end=0;
	static unsigned int time1s_cnt=0;
	static unsigned int time_cnt1=0;
	static unsigned int time_cnt2=0;
	static unsigned int time4 =0, time4_pre = 0;
	if((reg_value & BIT(31))){
		time_cnt1++;
	}

	time1 = rtd_inl(0xB801B6A8);
	if(time1s_set==0)
	{
		time1s_start = time1;
		time1s_set=1;
		time1s_cnt=0;
	}
	time1s_end = rtd_inl(0xB801B6A8);

#endif


//	if (u1_is_me_dead == 0 && u32_rb_val == 3 ){
//	if (u32_rb_val == 3){
	if (u1_is_me_dead == 0) {
		if (u1_is_me_dead_pre == 1) {
			//LogPrintf(DBG_WARNING,  "[Scaler_MEMC_ISR] me dead recover , enable isr now!!\n\r");
		}
#if 0//def CONFIG_RTK_KDEV_DEBUG_ISR
	time1s_cnt++;
	time_cnt2++;
#endif

		#ifdef CONFIG_MEMC_TASK_QUEUE
		/*resolve tasks from rpc*/
		if(MEMC_GetInOutISREnable() && ((g_memc_hdmi_switch_state == 0) && (HDMI_PowerSaving_stage == 0) && (g_memc_switch_state == 0) && (DTV_PowerSaving_stage == 0)) && (Scaler_MEMC_GetMEMC_Enable() == 1))
			ScalerMEMC_TasksHandler();
		#endif

		MEMC_LibInputVSInterrupt();
		MEMC_LibOutputVSInterrupt();

	} else {
		if (u1_is_me_dead_pre == 0) {
			//LogPrintf(DBG_WARNING,  "[Scaler_MEMC_ISR] me dead happened , disable isr now!!\n\r");
			}
		if (u32_rb_val != 3) {
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[Scaler_MEMC_ISR] memc clock off, disable isr now!!\n\r");
		}
	}
	u1_is_me_dead_pre = u1_is_me_dead;

#if 0//def CONFIG_RTK_KDEV_DEBUG_ISR
//====================================================
	time4=rtd_inl(0xB801B6A8);
	if((time1s_end-time1s_start)>=90000)
	{
		printk("[ISR]MEMC enable  %x,%d,%d,%d\n",reg_value, u1_is_me_dead, u32_rb_val, u1_is_me_dead_pre);
		printk("[ISR]MEMC timestamp %d\n",(time4 - time4_pre));
		printk("[ISR]MEMC times %d, %d\n",time_cnt1,time_cnt2);
		if((time1s_end-time1s_start)>=90000){
			printk("[ISR]MEMC isr %d times(%d CLK)\n",time1s_cnt, (time1s_end-time1s_start));
			time1s_set=0;
		}
	}
	time4_pre = time4;
//====================================================
#endif
	return MEMC_IRQ_HANDLED;
#endif
}

void Scaler_MEMC_resetMEMCMode(void)
{
	//(LGE)STR init force repeatmode, then change by WEBOS or others
	MEMC_LibResetMEMCMode();
}

unsigned char * Scaler_MEMC_GetCadence(void)
{
	return g_scaler_memc_cadence;
}

unsigned char Scaler_MEMC_GetAVSyncDelay(void)
{
#if 1
	return g_ucMemcDelay;
#else
	if(MEMC_LibGetMEMCLowDelayModeEnable())
		return 20;
	else
		return 60;
#endif
}

void Scaler_MEMC_SetAVSyncDelay(unsigned char a_ucDelay)
{
	g_ucMemcDelay = a_ucDelay;
}

#ifdef CONFIG_MEMC_TASK_QUEUE
 static DEFINE_MUTEX(memc_task_mutex);
#define memc_task_lock()      mutex_lock(&memc_task_mutex)
#define memc_task_unlock()    mutex_unlock(&memc_task_mutex)

unsigned char Scaler_MEMC_PushTask(SCALER_MEMC_TASK_T *pTask)
{
	unsigned int id = 0;
	unsigned char ret = TRUE;

	extern void hw_semaphore_try_lock(void);
	extern void hw_semaphore_unlock(void);

	pr_notice("[%s][%d][CASE,%d,][,%d,%d,%d,%d,%d,%d,]\n",__FUNCTION__, __LINE__, pTask->type,
		MEMC_GetInOutISREnable(), g_memc_hdmi_switch_state, HDMI_PowerSaving_stage,
		g_memc_switch_state, DTV_PowerSaving_stage, Scaler_MEMC_GetMEMC_Enable());
	/*get HW semaphore*/
	memc_task_lock();

	/*push task to queue*/
	id = (g_memc_tasks_header + 1) % MEMC_TASK_MAX_CNT;
	if(id == g_memc_tasks_tailer){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Task queue status(header=%d,tailer=%d)\n",\
			__FUNCTION__,g_memc_tasks_header,g_memc_tasks_tailer);
		pr_notice("[%s][line:%d][,%d,%d,%d,%d,%d,%d,]\n\r", __FUNCTION__, __LINE__,
			MEMC_GetInOutISREnable(), g_memc_hdmi_switch_state, HDMI_PowerSaving_stage,
			g_memc_switch_state, DTV_PowerSaving_stage, Scaler_MEMC_GetMEMC_Enable());
		g_memc_tasks_tailer = (g_memc_tasks_tailer + 1) % MEMC_TASK_MAX_CNT;
		ret = TRUE;
	}
	if(g_memc_tasks_header >= MEMC_TASK_MAX_CNT){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Invalid task index(%d,%d).Resume!\n",\
			__FUNCTION__,g_memc_tasks_header,g_memc_tasks_tailer);
		g_memc_tasks_header = 0;
		g_memc_tasks_tailer = 0;
		id = (g_memc_tasks_header + 1) % MEMC_TASK_MAX_CNT;
	}
	memcpy(&g_memc_tasks_queue[g_memc_tasks_header],pTask,sizeof(SCALER_MEMC_TASK_T));
	g_memc_tasks_header = id;
	/*put HW semaphore*/

	memc_task_unlock();
	/*return*/
	return ret;
}

unsigned char ScalerMEMC_PopTask(SCALER_MEMC_TASK_T *pTask)
{
	if(g_memc_tasks_tailer == g_memc_tasks_header)
		return FALSE;
	if(g_memc_tasks_tailer >= MEMC_TASK_MAX_CNT){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Invalid task index(%d,%d).Resume!\n",\
						__FUNCTION__,g_memc_tasks_header,g_memc_tasks_tailer);
		g_memc_tasks_header = 0;
		g_memc_tasks_tailer = 0;
		return FALSE;
	}
	memcpy(pTask,&g_memc_tasks_queue[g_memc_tasks_tailer],sizeof(SCALER_MEMC_TASK_T));
	g_memc_tasks_tailer = (g_memc_tasks_tailer + 1) % MEMC_TASK_MAX_CNT;

	return TRUE;
}

void ScalerMEMC_TasksHandler(VOID)
{
	SCALER_MEMC_TASK_T task;
	int task_cnt = 0;

	/*resolve all tasks in the queue*/
	while(task_cnt < MEMC_TASK_MAX_CNT && ScalerMEMC_PopTask(&task) == TRUE){
		switch(task.type){
		case SCALERIOC_MEMC_SETMOTIONCOMP:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETMOTIONCOMP]%d,%d,%d\n",\
						task.data.memc_set_motion_comp.blurLevel,\
						task.data.memc_set_motion_comp.judderLevel,\
						task.data.memc_set_motion_comp.motion);
			Scaler_MEMC_SetMotionComp(task.data.memc_set_motion_comp.blurLevel,\
						task.data.memc_set_motion_comp.judderLevel,\
						task.data.memc_set_motion_comp.motion);
		}
		break;

		case SCALERIOC_MEMC_SETBLURLEVEL:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETBLURLEVEL]%d\n",task.data.value);
			Scaler_MEMC_SetBlurLevel(task.data.value);
		}
		break;

		case SCALERIOC_MEMC_SETJUDDERLEVEL:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETJUDDERLEVEL]%d\n",task.data.value);
			Scaler_MEMC_SetJudderLevel(task.data.value);
		
		}
		break;

		case SCALERIOC_MEMC_MOTIONCOMPONOFF:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[MOTIONCOMPONOFF]%d\n",task.data.value);
			Scaler_MEMC_MotionCompOnOff(task.data.value);
		}
		break;

		case SCALERIOC_MEMC_LOWDELAYMODE:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[LOWDELAYMODE]%d\n",task.data.value);
			Scaler_MEMC_LowDelayMode(task.data.value);
		}
		break;

		case SCALERIOC_MEMC_SETRGBYUVMode:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETRGBYUVMode]%d\n",task.data.value);
			Scaler_MEMC_SetRGBYUVMode(task.data.value);
		}
		break;

		case SCALERIOC_MEMC_GETFRAMEDELAY:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[GETFRAMEDELAY]\n");
			//Scaler_MEMC_GetFrameDelay ((UINT16 *)arg);
		}
		break;

		case SCALERIOC_MEMC_SETVIDEOBLOCK:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETMOTIONCOMP]%d,%d\n",\
							task.data.memc_set_video_block.type,\
							task.data.memc_set_video_block.bOnOff);
			Scaler_MEMC_SetVideoBlock(task.data.memc_set_video_block.type,\
							task.data.memc_set_video_block.bOnOff);
		}
		break;

		case SCALERIOC_MEMC_SETTRUEMOTIONDEMO:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETTRUEMOTIONDEMO]%d\n",task.data.value);
			Scaler_MEMC_SetTrueMotionDemo(task.data.value);
		}
		break;

		case SCALERIOC_MEMC_GETFIRMWAREVERSION:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[GETFIRMWAREVERSION]%d\n",task.data.value);
			//Scaler_MEMC_GetFirmwareVersion((UINT16 *)arg);
		}
		break;

		case SCALERIOC_MEMC_SETBYPASSREGION:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETBYPASSREGION]%d,%d,%d,%d,%d,%d\n",\
							task.data.memc_set_bypass_region.bOnOff,\
							task.data.memc_set_bypass_region.region,\
							task.data.memc_set_bypass_region.x,\
							task.data.memc_set_bypass_region.y,\
							task.data.memc_set_bypass_region.w,\
							task.data.memc_set_bypass_region.h);
			Scaler_MEMC_SetBypassRegion(task.data.memc_set_bypass_region.bOnOff,\
							task.data.memc_set_bypass_region.region,\
							task.data.memc_set_bypass_region.x,\
							task.data.memc_set_bypass_region.y,\
							task.data.memc_set_bypass_region.w,\
							task.data.memc_set_bypass_region.h);
		}
		break;

		case SCALERIOC_MEMC_SETREVERSECONTROL:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETREVERSECONTROL]%d\n",task.data.value);
			Scaler_MEMC_SetReverseControl(task.data.value);
		}
		break;

		case SCALERIOC_MEMC_FREEZE:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[FREEZE]%d\n",task.data.value);
			Scaler_MEMC_Freeze(task.data.value);
		}
		break;

		case SCALERIOC_MEMC_SETDEMOBAR:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETDEMOBAR]%d,%d,%d,%d\n",\
						task.data.memc_set_demo_bar.bOnOff,\
						task.data.memc_set_demo_bar.r,\
						task.data.memc_set_demo_bar.g,\
						task.data.memc_set_demo_bar.b);
			Scaler_MEMC_SetDemoBar(task.data.memc_set_demo_bar.bOnOff,\
						task.data.memc_set_demo_bar.r,\
						task.data.memc_set_demo_bar.g,\
						task.data.memc_set_demo_bar.b);
		}
		break;

		case SCALERIOC_MEMC_SETINOUTUSECASE:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETINOUTUSECASE]%d,%d,%d,%d\n",\
							task.data.memc_set_inout_usecase.input_re,\
							task.data.memc_set_inout_usecase.output_re,\
							task.data.memc_set_inout_usecase.input_for,\
							task.data.memc_set_inout_usecase.output_for);
			Scaler_MEMC_SetInOutputUseCase(task.data.memc_set_inout_usecase.input_re,\
							task.data.memc_set_inout_usecase.output_re,\
							task.data.memc_set_inout_usecase.input_for,\
							task.data.memc_set_inout_usecase.output_for);
		}
		break;

		case SCALERIOC_MEMC_SETINPUTOUTPUTFORMAT:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETINPUTOUTPUTFORMAT]%d,%d\n",\
							task.data.memc_set_inout_format.input_for,\
							task.data.memc_set_inout_format.output_for);
			Scaler_MEMC_SetInputOutputFormat(task.data.memc_set_inout_format.input_for,\
							task.data.memc_set_inout_format.output_for);
		}
		break;

		case SCALERIOC_MEMC_SETINPUTOUTPUTRESOLUTION:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETINPUTOUTPUTRESOLUTION]%d,%d\n",\
							task.data.memc_set_inout_resolution.input_re,\
							task.data.memc_set_inout_resolution.output_re);
			Scaler_MEMC_SetInputOutputResolution(task.data.memc_set_inout_resolution.input_re,\
							task.data.memc_set_inout_resolution.output_re);
		}
		break;

		case SCALERIOC_MEMC_SETINOUTPUTFRAMERATE:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETINOUTPUTFRAMERATE]%d,%d\n",\
					task.data.memc_inout_framerate.input_frame_rate,\
					task.data.memc_inout_framerate.output_frame_rate);
			Scaler_MEMC_SetInputFrameRate(task.data.memc_inout_framerate.input_frame_rate);
			Scaler_MEMC_SetOutputFrameRate(task.data.memc_inout_framerate.output_frame_rate);
		}
		break;

		case SCALERIOC_MEMC_SETMEMCFRAMEREPEATENABLE:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETMEMCFRAMEREPEATENABLE]%d\n",task.data.value);
			Scaler_MEMC_SetMEMCFrameRepeatEnable(task.data.value);
		}
		break;

		case SCALERIOC_MEMC_SETMEMCINOUTMODE:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETMEMCINOUTMODE]%d\n",task.data.value);
			ISR_Scaler_MEMC_SetInOutMode(task.data.value);
		}
		break;

		case SCALERIOC_MEMC_SETCINEMAMODE:
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[SETCINEMAMODE]%d\n",task.data.value);
			Scaler_MEMC_SetCinemaMode(task.data.value);
		}
		break;

		default:
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Unknown task type=%d(header=%d,tailer=%d)\n",\
				__FUNCTION__,task.type,g_memc_tasks_header,g_memc_tasks_tailer);
			return;
		}//~switch(task.type)
		task_cnt++;
	}//~while(task_cnt < MEMC_TASK_MAX_CNT && ScalerMEMC_PopTask(&task)
	if(task_cnt == MEMC_TASK_MAX_CNT){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Queue lenght maybe too small(header=%d,tailer=%d,max_tasks_num=%d)\n",\
			__FUNCTION__,g_memc_tasks_header,g_memc_tasks_tailer,MEMC_TASK_MAX_CNT);
	}
}


/**table_iDX
 * Level = 0 => no bypass?? * Level = 1 => I DCTI?D_DCTI?V_DCTI?DLTI : bypass?? * Level = 2 => I DCTI?D_DCTI?V_DCTI?DLTI?RTNR Y?RTNR C?MCNR?DI IP Enabl

 *  -> reg_deg : set(1)
 *  --> reg_deg+10 : set(2)
 *  reg_deg-5 <- : set(saved_level)
**/
extern int register_temperature_callback(int degree,void *fn, void* data, char *module_name);
#ifdef CONFIG_RTK_KDRV_THERMAL_SENSOR //
static short int  REG_DEGREE=115;
static short int  REG_DEGREE_LV2=120;
static short int  REG_DEGREE_LV3=125;
static void Scaler_MEMC_thermal_callback(void *data, int cur_degree , int reg_degree, char *module_name)
{
	pr_debug("[Scaler_MEMC_thermal_callback_01]\n\r");

	if (cur_degree >= REG_DEGREE_LV3) {
		g_MEMC_powersaving_on = 1;
		pr_debug("[Scaler_MEMC_thermal_callback_02][cur_deg=%d]\n\r", cur_degree);
	}
	else{
		g_MEMC_powersaving_on = 0;
	}
	return;

}

static int Scaler_register_MEMC_thermal_handler(void)
{
	int ret;
	int retdata = 0;

	pr_info("%s\n",__func__);
	if ((ret = register_temperature_callback(REG_DEGREE, Scaler_MEMC_thermal_callback, (void*)&retdata, "MEMC_PowerSaving")) < 0)
		printk("register MEMC thermal handler fail, ret:%d \n", ret);

	return 0;
}

void Scaler_register_MEMC_thermal(int t0, int t1, int t2)
{
	if( (t2<135) && (t2> t1) && (t1 > t0))
	{
		REG_DEGREE=t0;
		REG_DEGREE_LV2=t1;
		REG_DEGREE_LV3=t2;
		Scaler_register_MEMC_thermal_handler();//use resource table;
	}
	else
	{
		Scaler_register_MEMC_thermal_handler();//use default;
	}
}

//late_initcall(Scaler_register_MEMC_thermal_handler);
EXPORT_SYMBOL(Scaler_register_MEMC_thermal);
#endif

#endif

