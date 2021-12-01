//Kernel Header file
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

#include <linux/pageremap.h>
#include <uapi/linux/const.h>
#include <linux/mm.h>
#include <linux/spinlock_types.h>/*For spinlock*/

//#include <rtk_kdriver/common.h>
//#include <rtk_kdriver/io.h>
#include <rtk_kdriver/RPCDriver.h>
#include <rtk_kdriver/rtk_pwm.h>
#include <mach/platform.h>
#include <mach/rtk_platform.h>
#include <mach/timex.h>
#include <../tvscalercontrol/scaler_vtdev.h>



#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerCommon.h>
#else
#include <scalercommon/scalerCommon.h>
#endif

#include "scaler_vbedev.h"
#include "scaler_vfedev.h"
#include "scaler_vscdev.h"

#include "tvscalercontrol/io/ioregdrv.h"
#include "tvscalercontrol/scalerdrv/scalerdrv.h"
#include "tvscalercontrol/scalerdrv/scalerdisplay.h"
#include "tvscalercontrol/scalerdrv/adjust.h"
#include "tvscalercontrol/scalerdrv/scalerclock.h"
#include "tvscalercontrol/scalerdrv/framesync.h"
#include "tvscalercontrol/scalerdrv/conversion_2d_3d.h"
#include <tvscalercontrol/scalerdrv/scaler_2dcvt3d_ctrl.h>
#include <rbus/scaledown_reg.h>

//Fixed me later due to rtk_vo.h compiler error
//#include <tvscalercontrol/vo/rtk_vo.h>
#include <tvscalercontrol/hdmirx/hdmi_vfe.h>
#include <tvscalercontrol/hdmirx/hdmifun.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/panel/panelapi.h>
#include <tvscalercontrol/i3ddma/i3ddma_drv.h>
#include <tvscalercontrol/vdac/vdac.h>
#include <tvscalercontrol/vip/gibi_od.h>
#include <tvscalercontrol/vip/color.h>
#include <tvscalercontrol/vip/viptable.h>
#include <tvscalercontrol/scaler_vpqdev.h>
#include <tvscalercontrol/scaler_vpqleddev.h>
#include <tvscalercontrol/scaler_vpqmemcdev.h>
#include <tvscalercontrol/vdc/video.h>
#include <tvscalercontrol/avd/avdctrl.h>
#include <tvscalercontrol/vip/scalerColor_tv006.h>
// FixMe, 20190919
//#include <tvscalercontrol/hdmirx/hdmi_emp.h>
#include "memc_isr/HAL/hal_mc.h"

#include <rbus/timer_reg.h>
#include <rbus/ppoverlay_reg.h>
#include <rbus/sfg_reg.h>
#include <rbus/pif_reg.h>
#include <rbus/mdomain_cap_reg.h>
#include <rbus/mdomain_disp_reg.h>
#include <rbus/scaledown_reg.h>

//#include <rbus/rbus_DesignSpec_MISC_GPIOReg.h>
#include <rbus/sys_reg_reg.h>
#include <rbus/pll27x_reg_reg.h>
#include <rbus/dma_vgip_reg.h>
#include <rbus/h3ddma_rgb2yuv_dither_4xxto4xx_reg.h>
#include <rbus/h3ddma_reg.h>
#include <rbus/h3ddma_hsd_reg.h>
//#include <rbus/tve_dma_reg.h>
//#include <rbus/tve_tv_reg.h>
#include <rbus/vodma_reg.h>
#include <rbus/pll_reg_reg.h>
#include <rbus/vby1_reg.h>
#include <rbus/vby1_osd_reg.h>
#include <rbus/tcon_reg.h>
#include <rbus/epi_reg.h>
#include <rbus/isp_reg.h>
#include <rbus/pinmux_lvdsphy_reg.h>
//#include <rbus/pinmux_main_reg.h>
#include <rbus/hdr_all_top_reg.h>
#include <linux/i2c.h>
//#include <rbus/d_2d_to_3d_reg.h>
//#include <rbus/dispd_boe_rgbw_reg.h>
#include <rbus/scaleup_reg.h>
#include <rbus/lg_m_plus_reg.h>
#include <rbus/vgip_reg.h>
#include <rbus/od_dma_reg.h>
#include <rbus/ldspi_reg.h>
//#include <rbus/tve_reg.h>
#include <rbus/vodma_reg.h>
#include <rbus/pll_reg_reg.h>
#include <rbus/hdr_all_top_reg.h>
#include <rbus/dhdr_v_composer_reg.h>
#include <rbus/dm_reg.h>

  #ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <VideoRPC_System.h>
	#include <VideoRPC_System_data.h>
  #else
	#include <rpc/VideoRPC_System.h>
	#include <rpc/VideoRPC_System_data.h>
  #endif

//extern webos_info_t  webos_tooloption;

#ifdef CONFIG_COMPAT
#include <linux/compat.h>
#define to_user_ptr(x)          compat_ptr((unsigned int)x)
#else
#define to_user_ptr(x)          ((void* __user)(x)) // convert 32 bit value to user pointer
#endif

#ifdef VBE_DISP_TCON_SELF_CHECK
#include <rbus/mdomain_disp_reg.h>
extern unsigned int monitor_rgb_rolling;
#endif

#ifdef CONFIG_ARM64
extern u32 gic_irq_find_mapping(u32 hwirq);
#define IRQ_GET_KERNEL_IRQ_NUM(hwirq)       gic_irq_find_mapping(hwirq)
#else
#define IRQ_GET_KERNEL_IRQ_NUM(hwirq)       (hwirq)
#endif

#define DBG_PRINT(s, args...) pr_debug(s, ## args)
#define TAG_NAME_VBE "VBE"

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

#if defined(CONFIG_RTK_KDRV_GDMA) && !defined(CONFIG_CUSTOMER_TV006)
extern int gdma_resume_by_vbe(void);
extern int gdma_suspend_by_vbe(void);
#endif

extern void tconless_CS602_reserve(void);
extern void tconless_cs602_reset(void);



static struct cdev vbe_cdev;

int vbe_major   = VBE_MAJOR;
int vbe_minor   = 0 ;
int vbe_nr_devs = VBE_NR_DEVS;

struct semaphore VBE_Semaphore;
struct semaphore VBE_LowDelay_Semaphore;
static struct semaphore VBE_RGBW_Resume_Semaphore;

module_param(vbe_major, int, S_IRUGO);
module_param(vbe_minor, int, S_IRUGO);
module_param(vbe_nr_devs, int, S_IRUGO);
static struct class *vbe_class;
void vbe_disp_early_resume(void);
extern struct semaphore Orbit_Semaphore;

#ifdef CONFIG_PM
//static VBE_AVE_SUSPEND_RESUME_T vbe_ave_suspend_resume;
static VBE_DISP_TCON_SUSPEND_RESUME_T vbe_disp_tcon_suspend_resume;
void vbe_disp_panel_resume(void);
extern void vpq_memc_disp_suspend(void);
extern void vpq_memc_disp_resume(void);
VBE_DISP_SUSPEND_RESUME_T vbe_disp_suspend_resume;
VBE_DISP_PANEL_EPI_SUSPEND_RESUME_T vbe_disp_panel_epi_suspend_resume;
VBE_DISP_PANEL_TCON_SUSPEND_RESUME_T vbe_disp_panel_tcon_suspend_resume;
VBE_DISP_PANEL_ISP_SUSPEND_RESUME_T vbe_disp_panel_isp_suspend_resume;

static int vbe_suspend_instant_mode = 0; //use this flag to distinguish STR or STD suspend
#endif
extern StructSrcRect main_input_size;
extern DEBUG_SCALER_VSC_STRUCT DbgSclrFlgTkr; // debug scaler flag tracker


/*******************************************************************************
****************************VBE DISP DRIVER*************************************
*******************************************************************************/
static unsigned char VBE_DISP_Global_Status = VBE_DISP_NOTHING;
unsigned char panel_bl_type;
unsigned char led_bar_type;
unsigned char epi_panel_type;
unsigned char panel_inch;
unsigned char panel_maker;
unsigned int disp_osd_width;
unsigned int disp_osd_height;
BOOLEAN disp_ForceFreeRun=DISP_TIMING_DEFAULT;
unsigned char disp_framerate;
unsigned int vtotal_measure;
unsigned int mask_3d_auto_detect = 0;
static UINT8 first_boot_run_main = FALSE;
static UINT8 first_disp_resume = FALSE;
extern struct semaphore Iv2dv_Slow_Tuning_Semaphore;
static UINT8 oled_resume_eit_flag = FALSE; //this flag control sfg forcebg when enable OLED panel EIT function
unsigned char vbe_dynamic_memc_bypass_flag = 0;
unsigned int disp_data_frame_sync_flag = FALSE;
unsigned int adaptivestream_force_framerate = 60;
static unsigned int stBacklihgtStart_Tick = 0;
unsigned int disp_smooth_variable_setting_flag = 0;
unsigned int vbe_dynamicPolarityControl_initialized_status = 0;
unsigned int vbe_dynamicPolarityControl_detect_frames = 10;
unsigned int vbe_dynamicPolarityControl_detect_threadhold = 0;
unsigned int vbe_dynamicPolarityControl_check_frame = 0;
unsigned int vbe_dynamicPolarityControl_enable = 0;
unsigned int vbe_dynamicPolarityControl_debug_mode = 0;
//#define DPC_ONE_RUN_FRAME 10
unsigned int vbe_tcon_28s_toggle_enable = 0;
unsigned int vbe_tcon_28s_timer_counter = 0;
unsigned char vbe_tcon_28s_toggle_state = 0;

SCALER_DATA_FS_ALGO_RESULT g_tDataFsAlgoResult;

static ORBIT_PIXEL_SHIFT_STRUCT isr_orbit_shift;
int pre_den_end_line_count =0;
#ifdef CONFIG_ORBIT_PIXEL_SHIFT_ALGO
/*
typedef struct{
	int  x;
	int  y;
}ORBIT_PIXEL_SHIFT_STRUCT;

enum vbe_panel_orbit_mode {
    _VBE_PANEL_ORBIT_JUSTSCAN_MODE = 0,
    _VBE_PANEL_ORBIT_AUTO_MODE,
    _VBE_PANEL_ORBIT_STORE_MODE,
    _VBE_PANEL_OREBIT_MODE_MAX
};
*/

ORBIT_PIXEL_SHIFT_STRUCT orbit_move_range[_VBE_PANEL_OREBIT_MODE_MAX] =
{
	{20, 10},	//justscan
	{20, 10},	//overscan
	{64, 32},	//store
};
#endif
ORBIT_PIXEL_SHIFT_STRUCT Get_Orbit_Shift_Data(void)
{
    return isr_orbit_shift;
}
void Set_Orbit_Shift_Data(ORBIT_PIXEL_SHIFT_STRUCT orbit_shift_data)
{
    isr_orbit_shift = orbit_shift_data;
}

unsigned char Get_PANEL_BL_type(void)
{
	return panel_bl_type;
}
void Set_PANEL_BL_type(unsigned char type)
{
	panel_bl_type=type;
}
unsigned char Get_PANEL_LED_Bar_type(void)
{
	return led_bar_type;
}
void Set_PANEL_LED_Bar_type(unsigned char type)
{
	led_bar_type=type;
}
unsigned char Get_PANEL_EPI_TYPE(void)
{
	return epi_panel_type;
}
void Set_PANEL_EPI_TYPE(unsigned char type)
{
	epi_panel_type=type;
}
unsigned char Get_PANEL_INCH(void)
{
	return panel_inch;
}
void Set_PANEL_INCH(unsigned char inch)
{
	panel_inch=inch;
}

unsigned char Get_PANEL_MAKER(void)
{
	return panel_maker;
}
void Set_PANEL_MAKER(unsigned char maker)
{
	panel_maker=maker;
}

unsigned int Get_DISP_OSD_Width(void)
{
	return disp_osd_width;
}
void Set_DISP_OSD_Width(unsigned int width)
{
	disp_osd_width=width;
}
unsigned int Get_DISP_OSD_Height(void)
{
	return disp_osd_height;
}
void Set_DISP_OSD_Height(unsigned int height)
{
	disp_osd_height=height;
}
void Disp_Enable_isForceFreeRun(BOOLEAN isForceFreeRun)
{
	if(isForceFreeRun)
	{
		disp_ForceFreeRun=DISP_FREE_RUN;
	}
	else
	{
		disp_ForceFreeRun=DISP_FRAMESYNC;
	}
}
BOOLEAN Disp_Get_isForceFreeRun(void)
{
	 return disp_ForceFreeRun;
}
void Disp_Set_framerate(unsigned char framerate)
{
	disp_framerate=framerate;
}
unsigned char Disp_Get_framerate(void)
{
	return disp_framerate;
}

unsigned char vflip_enable=0;
unsigned char mirror_flag=0;

void Set_Mirror_VFLIP_ENABLE(unsigned char enable)
{
	vflip_enable=enable;
	mirror_flag=1;
}
unsigned char Get_Mirror_VFLIP_ENABLE(void)
{
	mirror_flag=0;
	return vflip_enable;
}
unsigned char Get_vbe_mirror_vflip(void)
{
	if(mirror_flag)
	{
		return vflip_enable;
	}
	else
	{
		return 2; // 2 is bypass vbe mirror
	}
}
unsigned char fll_running_flag=0;

unsigned char vbe_disp_gamemode_use_fixlastline(void)
{
	if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_FRAMESYNC))
		return FALSE;

	//for debug purpose
	if(IoReg_Read32(0xb8022288)&_BIT23)
		return FALSE;
	else
		return TRUE;
}

unsigned char vbe_disp_dataFramesync_use_fixlastline(void)
{
	//for debug purpose
	if(IoReg_Read32(0xb8022288)&_BIT24)
		return TRUE;
	else
		return FALSE;
}

void modestate_set_fll_running_flag(unsigned char bEnable)
{
	//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"### modestate_set_fll_running_flag (%d) ###\n", bEnable);
	fll_running_flag = bEnable;
}

unsigned char modestate_get_fll_running_flag(void)
{
	return fll_running_flag;
}

unsigned char modestate_decide_display_timing(void)
{
	if(Disp_Get_isForceFreeRun()==DISP_FREE_RUN){
		return DISPLAY_MODE_FRC;
	}else if(_TRUE == Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC)){
		return DISPLAY_MODE_FRAME_SYNC;
	}
#ifdef ENABLE_VR360_DATA_FS_FLOW
	else if(get_vt_EnableFRCMode() == FALSE){
		return DISPLAY_MODE_FRAME_SYNC;
	}
#endif
	else if(modestate_check_input_special_framerate()){
		return DISPLAY_MODE_FRC;
	}else if((Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)){
		return DISPLAY_MODE_FRC;
	}else
		return DISPLAY_MODE_NEW_FLL_MODE;
}

unsigned char vbe_disp_get_adaptivestream_fs_mode(void)
{
	char keepAdaptiveStreamFsMode=0;
//	vp9_ctrl0_RBUS vodma_vp9_ctrl0_reg;

	keepAdaptiveStreamFsMode = vsc_get_adaptivestream_flag(SLR_MAIN_DISPLAY);
/*
	vodma_vp9_ctrl0_reg.regValue = IoReg_Read32(VODMA_VP9_CTRL0_reg);
	if((vodma_vp9_ctrl0_reg.vp9_en == 1)&&(vsc_get_adaptivestream_flag()==1)){
		keepAdaptiveStreamFsMode = 1;
	}else{
		keepAdaptiveStreamFsMode = 0;
	}
*/
	if(Get_DisplayMode_Src(0) != VSC_INPUTSRC_VDEC){
		keepAdaptiveStreamFsMode = 0;
	}

	//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"file=%s, function=%s, keepAdaptiveStreamFsMode=%d\n", __FILE__, __FUNCTION__,  keepAdaptiveStreamFsMode);

	return keepAdaptiveStreamFsMode;
}

void vbe_disp_set_adaptivestream_force_framerate(unsigned int framerate)
{
	if (vbe_disp_get_adaptivestream_fs_mode())
		adaptivestream_force_framerate = framerate;
	else
		adaptivestream_force_framerate = 0;
}

unsigned int vbe_disp_get_adaptivestream_force_framerate(void)
{
	if (0 == vbe_disp_get_adaptivestream_fs_mode()) {
		return 0;
	}
	return adaptivestream_force_framerate;
}
void modestate_set_display_timing(unsigned char dclk_is_max)
{
	ppoverlay_dv_total_RBUS dv_total_reg;
	if(Disp_Get_isForceFreeRun()==DISP_FREE_RUN){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[modestate_set_display_timing] Disp_Get_isForceFreeRun! \n");
		drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
		return;
	}
//	unsigned int vtotal;
	//framesync mode will set framesync bit at other place
	//if vby1 to hdmi board, used new fll mode
#ifdef ENABLE_VBY1_TO_HDMI_4K2K_DATA_FS
	if ((Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)) {
		if(_TRUE == Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC))
			return;
	}
#else
	if ((Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)) {
			drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
			return;
	}
#endif

#ifdef CONFIG_DUAL_CHANNEL
	//sub display not apply
	if(SLR_SUB_DISPLAY == Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY)){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[modestate_set_display_timing] SLR_SUB_DISPLAY Force return! \n");
		return;
	}
#endif

	//timing
	dv_total_reg.regValue = IoReg_Read32(PPOVERLAY_DV_total_reg);
	vtotal_measure=dv_total_reg.dv_total;
#if 0
	if(Disp_Get_isForceFreeRun()==DISP_FREE_RUN)
	{
		drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
		vtotal=(Get_DISPLAY_CLOCK_TYPICAL()/Get_DISP_HORIZONTAL_TOTAL()/Disp_Get_framerate());
		dv_total_reg.dv_total = vtotal;
		IoReg_Write32(PPOVERLAY_DV_total_reg, dv_total_reg.regValue);
		printk("DVTotal:%x, 8014:%x\n", vtotal, IoReg_Read32(PPOVERLAY_DV_total_reg));
		vtotal_measure=Get_DISP_VERTICAL_TOTAL();
		return;
	}
	else if(Disp_Get_isForceFreeRun()==DISP_FRAMESYNC)
	{
		drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
		return;
	}
#endif

	// [SG] 3D free run condition -- SG 3D FRC@120Hz for 3D or 2Dcvt3D mode
	if(Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE()){
		if((drvif_scaler3d_get_IDMA3dMode() != SLR_IDMA_MODE_DISABLE)
			|| ((drvif_scaler3d_decide_2d_cvt_3d_SG_frc_in_mDomain() == TRUE) && drvif_scaelr3d_decide_is_3D_display_mode()))
		{
			// don't change DTG timing to frame sync mode in IDMA data FRC mode
			if(drvif_scaler_get_display_mode() == 0){
				rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[IDMA] IGNORE FS_EN\n");
				return;
			}
		}
		else if(drvif_scaelr3d_decide_is_3D_display_mode()
			&& (Get_PANEL_3D_SG_OUTPUT_120HZ_ENABLE() || Get_PANEL_3D_PR_TO_SG_OUTPUT_FRC_ENABLE()))
		{
			// 3D display timing free run for SG or PR to SG 3D panel
			drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
			return;
		}
	}
#if 0 // marked unused code in merlin by ben_wang
	if(Get_PANEL_TYPE_IS_MILLET3_4K2K_SERIES() == 1){

/*		if(Get_DISPLAY_2K1K_windows_mode() == 1){
				printf("+++++++ Custom window mode : go FRC timing +++++++++ \n");
 				drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
		}
		else{
*/
		{
 			if(Get_PANEL_3D_SG_OUTPUT_120HZ_ENABLE()){
 				printk("+++++++ 2k1k lvds t120Hz iming +++++++++ \n");
				// 3D data FRC path
				if((modestate_I3DDMA_get_In3dMode()|| modestate_get_vo3d_in_framePacking_FRC_mode()
					|| ((drvif_scaler3d_decide_2d_cvt_3d_SG_frc_in_mDomain() == TRUE) && drvif_scaelr3d_decide_is_3D_display_mode()))
					&& (Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC) == FALSE))
				{
					// 3D free run 120Hz
					drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
	 				printk("[IDMA] 3D=%d, data/timing FRC\n", Scaler_Get3DMode());
				}
				else if((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 610) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 1000) && (Scaler_InputSrcGetMainChType()!=_SRC_TV))
				{
					drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
	 				printk("go FRC timing\n");
				}else{
	 				printk("go Framesync timing\n");
					drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
				}
 			}
 			else{
 				printk("+++++++ 4k2k lvds 30Hz timing +++++++++ \n");
				printk("go Framesync timing\n");
				drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
 			}
		}
		return;
	}
#endif

	if(modestate_check_input_special_framerate()){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[modestate_set_display_timing] Special input framerate, set timing free run! \n");
		drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
		return;
	}
/*
	if((Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID) < 2048) && (Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN) < 1200)
	  &&((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 235) || ((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 255) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 290)))){
		printk("[modestate_set_display_timing] Special input framerate, set timing free run! \n");
		drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
*/
	//enable new fix last line
	{
		drvif_scaler_set_display_mode(DISPLAY_MODE_NEW_FLL_MODE);
		return;
	}


	//USER:LewisLee DATE:2010/12/7
	//to prevent Vflip state, it have frame tear
	//we set framesync at framesync_lastlinefinetune_at_frc_mode()
	//let IVS2DVS delay have good relationship
//	if(_ENABLE == Scaler_Get_Vflip_Enable()) //frank@0517 sync Mac project let timing go framesync to solve mantis#38804 movie delay problem
//	{
//#ifndef VBY_ONE_PANEL //frank@0521 add VBY1 define to solve VBY1 panel shift problem
#if 0 // marked unused code in merlin by ben_wang
		if(_TRUE == Scaler_EnterFRC_LastLine_Condition())
		{
			drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
			drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC); //frank@05232014 enable FS timing when fll flow to solve mantis#75280
			return;
		}
#endif
//#endif
//	}
#if 0

	if (Scaler_InputSrcGetMainChType() == _SRC_TV)
	{

#ifdef CONFIG_ATV_FRC
		drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
		return;
#endif //#ifdef CONFIG_ATV_FRC

#if 1 //#ifdef CONFIG_FV_CHECK
		if (!CTVCheckFVBias() && !Scaler_TVGetScanMode()) {
 			drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
			return;
		}
#endif //#ifdef CONFIG_FV_CHECK

		//USER:LewisLee DATE:2012/06/27
		//for customer request, weak signal keep in framesync
		if(_TRUE == drvif_video_status_reg(VDC_hv_lock))
		{
			if(_TRUE == framesync_get_enterlastline_at_frc_mode_flg())
			{
				//In Fix last line mode, can keep in framesync mode
				drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
				printk( "Change to FrameSync7-1\n");
			}
			else// if(_FALSE == framesync_get_enterlastline_at_frc_mode_flg())
			{
				if(_TRUE == Scaler_Get_ATV_WeakSignal_ChangeToFRC_Flag())
				{
					if(drvif_module_vdc_NoiseStatus() < Scaler_Get_ATV_VDC_NoiseLevel_Threshold())
					{
						drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
						printk( "Change to FrameSync7-2\n");
					}
					else
					{
					        drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
					}
				}
				else// if(_FALSE == Scaler_Get_ATV_WeakSignal_ChangeToFRC_Flag())
				{
					drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
					printk( "Change to FrameSync7-3\n");
				}
			}
		}
		else// if(_FALSE == drvif_video_status_reg(VDC_hv_lock))
		{
			drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
		}
 			//frank@0428, when source is VGA or DVI source,go FRC timing
	}
	else if ((Scaler_InputSrcGetMainChType() == _SRC_VGA) || // VGA
		((Scaler_InputSrcGetMainChFrom() == _SRC_FROM_TMDS) && (!drvif_IsHDMI())) || // DVI & DisplayPort
		((Scaler_InputSrcGetMainChFrom() == _SRC_FROM_TMDS) && drvif_IsHDMI() && (drvif_Hdmi_GetColorSpace()==0) && (Scaler_ModeGetModeInfo(SLR_MODE_IVFREQ)>600)) ) // HDMI via VGA card (HDMI && RGB && IVFreq>60Hz)
	{
		//USER:LewisLee DATE:2011/02/22
		//to prevent VGA have frame tear
		if(_TRUE == dclk_is_max)
		{
			drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
		}
		else// if(_FALSE == dclk_is_max)
		{
			if(_TRUE == Scaler_EnterFRC_LastLine_Condition())
			{
				drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
			}
			else// if(_FALSE == Scaler_EnterFRC_LastLine_Condition())
			{
				//if Vfreq large than 65Hz, need set it as FRC
				if(_TRUE == Scaler_Get_Customer_Force_FRC_Mode(_SRC_VGA))
				        drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
				else
					drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
			}
		}
	}
	else
#endif
#if 0 // marked unused code in merlin by ben_wang
	{
		if (dclk_is_max) // d-clk is the panel maximun,set frc timing
			drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
		else
			drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
	}
#endif
}

// decide it's dynamic bypass memc flow, or not
void vbe_disp_set_dynamic_memc_bypass_flag(unsigned char bOnOff)
{
	vbe_dynamic_memc_bypass_flag = bOnOff;
}

unsigned char vbe_disp_get_dynamic_memc_bypass_flag(void)
{
	//rtd_printk(KERN_EMERG, TAG_NAME_VBE,"vbe_disp_get_dynamic_memc_bypass_flag = %d \n", vbe_dynamic_memc_bypass_flag);
	return vbe_dynamic_memc_bypass_flag;
}

unsigned char vbe_disp_decide_PQ_power_saveing(void)
{
	if(vbe_disp_get_adaptivestream_fs_mode()==TRUE)
		return FALSE;


	if((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC)||
		(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_JPEG)){

		//rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"SLR_INPUT_IPH_ACT_WID_PRE = %d \n", Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE));
		//rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"SLR_INPUT_IPV_ACT_LEN_PRE = %d \n", Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE));
		//rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"SLR_INPUT_V_FREQ = %d \n", Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ));

		if((Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) == 3840) &&
			(Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) == 2160) &&
			(((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)>495)&&(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)<505))||
			((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)>595)&&(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)<605)))){
			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"Enter PQ power saving mode\n");
			return TRUE;
		}
	}
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"Disable PQ power saving mode\n");
	return FALSE;
}


unsigned char vbe_disp_decide_memc_mux_bypass(void)
{
#if 0
	if(vbe_disp_get_dynamic_memc_bypass_flag() == FALSE){
		// no memc dynamic bypass flow, return it.
		return FALSE;
	}

	if(vbe_disp_get_adaptivestream_fs_mode()==TRUE)
		return FALSE;

	if(Get_DISPLAY_REFRESH_RATE()==60){
		if((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC)||
			(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_JPEG)){

			//rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"SLR_INPUT_IPH_ACT_WID_PRE = %d \n", Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE));
			//rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"SLR_INPUT_IPV_ACT_LEN_PRE = %d \n", Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE));
			//rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"SLR_INPUT_V_FREQ = %d \n", Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ));

			if((Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) == 3840) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) == 2160) &&
				((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)>595)&&(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)<605))){
				//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"Switch to MEMC BYPASS\n");
				return TRUE;
			}
		}
		//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"Switch to MEMC\n");
	}
#endif
	return FALSE;
}

unsigned char vbe_disp_decide_frc2fsync_using_I2D(void)
{
	if((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 235) &&
			(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 245)){ //24
			return FALSE;
	}
	else if((Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD2K1K_to_H5X_SPLIT) ||(Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD1K2K_to_H5X_SPLIT)){
		//For OSD split panel, OSD size is 2K, do not use frc2fsync speedup hw mode
		return FALSE;
	}

	return TRUE;
}

extern unsigned char Scaler_ME_CLK_Check(void);
extern UINT8 TV006_WB_Pattern_En;
void vbe_disp_game_mode_memc_bypass(unsigned char b_gameMode_onOff)
{
	unsigned char set_memc_bypass = 0;
//	unsigned char memc_forcebg_enable = 0;
	unsigned char force_cnt ;
	if(vbe_disp_get_dynamic_memc_bypass_flag() == FALSE){
		// no memc dynamic bypass flow, return it.
		return;
	}

	if(vbe_disp_decide_memc_mux_bypass())
		set_memc_bypass = 1;

	if(b_gameMode_onOff==1){
		if ((Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_REMOVE_RATIO) == 1) &&
		(Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_MULTIPLE_RATIO) == 1)){
			set_memc_bypass = 1;
		}
	}

	//sync from K3LP for CP case @Crixus 20170720
	if(vsc_get_adaptivestream_flag(SLR_MAIN_DISPLAY))
		set_memc_bypass = 0;

	//rtd_printk(KERN_EMERG, TAG_NAME_VBE,"(game=%d), set_memc_bypass=%d\n", b_gameMode_onOff, set_memc_bypass);

	if (TV006_WB_Pattern_En) set_memc_bypass = 1;	/*20181102 roger, when WB adjust, MEMC bypass for low-delay*/

	if(set_memc_bypass != Scaler_MEMC_get_Bypass_Status()){
#if 0//remove in k4lp @Crixus 20170530
		//only active mode can control MEMC force bg. Avoid DC on noise @Crixus 20161019
		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE){
			Scaler_MEMC_output_force_bg_enable(_ENABLE);
			memc_forcebg_enable = 1;
		}
#endif
		if(set_memc_bypass){
			//need do memc bypass
			Scaler_MEMC_Bypass_On(1);
			Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 0);
		}else{
//			if(Scaler_ME_CLK_Check() == TRUE)
                if(get_vt_EnableFRCMode() != FALSE){
					Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 0);
				    Scaler_MEMC_Bypass_On(0);
                }
		}

		//need to wait MEMC detect candence. @Crixus 20161007
		force_cnt = 15;
		while(force_cnt != 0){
			WaitFor_Frame_timer();
			force_cnt--;
		}
#if 0//remove in k4lp @Crixus 20170530
		//only active mode can control MEMC force bg. Avoid DC on noise @Crixus 20161019
		if(memc_forcebg_enable == 1){
			Scaler_MEMC_output_force_bg_enable(_DISABLE);
			memc_forcebg_enable = 0;
		}
#endif
	}
}
/*
mode 0 :
dtgm2goldenpostvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE
dtgm2uzuvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE
mode 1 :
dtgm2goldenpostvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE
dtgm2uzuvs_line = 0
mode 2:
dtgm2goldenpostvs_line = 0
dtgm2uzuvs_line = 0
*/

extern unsigned char drvif_color_Get_Two_Step_UZU_Mode(void);


void vbe_disp_set_dtgM2uzu_lowdelay_mode(unsigned char mode)
{
	ppoverlay_uzudtg_control1_RBUS ppoverlay_uzudtg_control1_reg;
	ppoverlay_uzudtg_control2_RBUS ppoverlay_uzudtg_control2_reg;
	ppoverlay_memcdtg_control3_RBUS ppoverlay_memcdtg_control3_reg;
	ppoverlay_double_buffer_ctrl2_RBUS ppoverlay_double_buffer_ctrl2_reg;
	ppoverlay_double_buffer_ctrl_RBUS ppoverlay_double_buffer_ctrl_reg;
	ppoverlay_dv_total_RBUS ppoverlay_dv_total_reg;
	unsigned int timeout = 10;
	unsigned int recovery_vtotal = 0;
    unsigned int u32_dtgm2goldenpostvs_line = 0;
    unsigned int u32_dtgm2goldenpostvs_pixel = 0;
    unsigned int u32_dtgm2uzuvs_line = 0;
    unsigned int u32_dtgm2uzuvs_pixel = 0;
    unsigned int u32_dtgm2uzu_s1_vs_line = 0;
    unsigned int u32_dtgm2uzu_s1_vs_pixel = 0;
    unsigned char needUpdate = 0;

#ifdef CONFIG_MEMC_BYPASS
        mode = 2;
#endif

    if(mode == 0){
        //set goldenvsync
        u32_dtgm2goldenpostvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
        u32_dtgm2goldenpostvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL;
        //set uzu1 delay
        u32_dtgm2uzuvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
        u32_dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
        //set uzu2 delay
        if(force_enable_two_step_uzu() || (get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)){
            u32_dtgm2uzu_s1_vs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
            u32_dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
        }else{
            u32_dtgm2uzu_s1_vs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE-TWO_STEP_UZU_ON_OFF_DELAY_LINE;
            u32_dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN-TWO_STEP_UZU_ON_OFF_DELAY_PIXEL;
        }
    }
    else if(mode == 1){
        //set goldenvsync
        u32_dtgm2goldenpostvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
        u32_dtgm2goldenpostvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL;
        //set uzu1 delay
        if(drvif_color_Get_Two_Step_UZU_Mode()){
            u32_dtgm2uzuvs_line = TWO_STEP_UZU_ON_OFF_DELAY_LINE;
            u32_dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
        }else{
            u32_dtgm2uzuvs_line = 0;
            u32_dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
        }
        //set uzu2 delay
        if(force_enable_two_step_uzu() || (get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)){
            u32_dtgm2uzu_s1_vs_line = 0;
            u32_dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
        }else{
            u32_dtgm2uzu_s1_vs_line = 0;
            u32_dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN-TWO_STEP_UZU_ON_OFF_DELAY_PIXEL;
        }
    }
    else if(mode == 2){
        //set goldenvsync
        u32_dtgm2goldenpostvs_line = 0;
        u32_dtgm2goldenpostvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL;
        //set uzu1 delay
        if(drvif_color_Get_Two_Step_UZU_Mode()){
            u32_dtgm2goldenpostvs_line = TWO_STEP_UZU_ON_OFF_DELAY_LINE;
            u32_dtgm2uzuvs_line = TWO_STEP_UZU_ON_OFF_DELAY_LINE;
            u32_dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
        }else{
            u32_dtgm2uzuvs_line = 0;
            u32_dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
        }
        //set uzu2 delay
        if(force_enable_two_step_uzu() || (get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)){
            u32_dtgm2uzu_s1_vs_line = 0;
            u32_dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
        }else{
            u32_dtgm2uzu_s1_vs_line = 0;
            u32_dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN-TWO_STEP_UZU_ON_OFF_DELAY_PIXEL;
        }
    }
    else{
        //set goldenvsync
        u32_dtgm2goldenpostvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
        u32_dtgm2goldenpostvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL;
        //set uzu1 delay
        u32_dtgm2uzuvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
        u32_dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
        //set uzu2 delay
        if(force_enable_two_step_uzu() || (get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)){
            u32_dtgm2uzu_s1_vs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
            u32_dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
        }else{
            u32_dtgm2uzu_s1_vs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE-TWO_STEP_UZU_ON_OFF_DELAY_LINE;
            u32_dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN-TWO_STEP_UZU_ON_OFF_DELAY_PIXEL;
        }
    }

    //check if need update or not.
    ppoverlay_memcdtg_control3_reg.regValue = IoReg_Read32(PPOVERLAY_MEMCDTG_CONTROL3_reg);
    ppoverlay_uzudtg_control2_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_control2_reg);
    ppoverlay_uzudtg_control1_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_control1_reg);
    /*
        pr_notice("compare 1.[(%x.%x),(%x.%x)] 2.[(%x.%x),(%x.%x)] 3.[(%x.%x),(%x.%x)]\n",
            ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_line, u32_dtgm2goldenpostvs_line,
            ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_pixel,u32_dtgm2goldenpostvs_pixel,
            ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line, u32_dtgm2uzu_s1_vs_line,
            ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel,u32_dtgm2uzu_s1_vs_pixel,
            ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line,     u32_dtgm2uzuvs_line,
            ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel,    u32_dtgm2uzuvs_pixel);
    */
    if(
       ((ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_line  != u32_dtgm2goldenpostvs_line)||
        (ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_pixel != u32_dtgm2goldenpostvs_pixel)) ||
       ((ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line != u32_dtgm2uzu_s1_vs_line)||
        (ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel!= u32_dtgm2uzu_s1_vs_pixel))    ||
       ((ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line != u32_dtgm2uzuvs_line)||
        (ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel != u32_dtgm2uzuvs_pixel))
      )
    {
        needUpdate = 1;
    }


    if(needUpdate){
        ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
        ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 1;
        ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 1;
        IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);

        ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_line = u32_dtgm2goldenpostvs_line;
        ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_pixel = u32_dtgm2goldenpostvs_pixel;
        ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line = u32_dtgm2uzu_s1_vs_line;
        ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel = u32_dtgm2uzu_s1_vs_pixel;
        ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line = u32_dtgm2uzuvs_line;
        ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel = u32_dtgm2uzuvs_pixel;
        IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, ppoverlay_uzudtg_control1_reg.regValue);
        IoReg_Write32(PPOVERLAY_uzudtg_control2_reg, ppoverlay_uzudtg_control2_reg.regValue);
        IoReg_Write32(PPOVERLAY_MEMCDTG_CONTROL3_reg, ppoverlay_memcdtg_control3_reg.regValue);

        if((mode == 1)||(mode == 2)){
            ppoverlay_double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
            ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_en = 0;
            IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_reg.regValue);
            ppoverlay_dv_total_reg.regValue = IoReg_Read32(PPOVERLAY_DV_total_reg);
            recovery_vtotal = ppoverlay_dv_total_reg.dv_total;
            ppoverlay_dv_total_reg.dv_total += DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
            IoReg_Write32(PPOVERLAY_DV_total_reg, ppoverlay_dv_total_reg.regValue);
        }
        //double buffer apply
        ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
        ppoverlay_double_buffer_ctrl2_reg.memc_dtgreg_dbuf_set= 1;
        ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set= 1;
        IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
        while((--timeout)  &&
        ((ppoverlay_double_buffer_ctrl2_reg.memc_dtgreg_dbuf_set == 1)||
         (ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set == 1))){
            msleep(0);
            ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
        }
        if((mode == 1)||(mode == 2)){
            ppoverlay_double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
            ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_en = 1;
            IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_reg.regValue);
            ppoverlay_dv_total_reg.regValue = IoReg_Read32(PPOVERLAY_DV_total_reg);
            ppoverlay_dv_total_reg.dv_total = recovery_vtotal;
            IoReg_Write32(PPOVERLAY_DV_total_reg, ppoverlay_dv_total_reg.regValue);
            ppoverlay_double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
            ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_set = 1;
            IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_reg.regValue);
        }
        pr_notice("[%s] mode=%d. (goldenv: %x, uzu_ctrl1:%x, uzu_ctrl2:%x)\n", __FUNCTION__, mode,
            IoReg_Read32(PPOVERLAY_MEMCDTG_CONTROL3_reg), IoReg_Read32(PPOVERLAY_uzudtg_control1_reg),IoReg_Read32(PPOVERLAY_uzudtg_control2_reg));

    }
    else{
        pr_notice("[%s] no need update.\n", __FUNCTION__);
    }
#if 0

	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 1;
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
/*
	//hw bug, uzudtg_control1->uzu_4k_120_mode need use this read level
	ppoverlay_double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_read_sel = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_reg.regValue);
*/
#ifdef CONFIG_MEMC_BYPASS
        mode = 2;
#endif

	if(mode == 0){
		//set goldenvsync
		ppoverlay_memcdtg_control3_reg.regValue = rtd_inl(PPOVERLAY_MEMCDTG_CONTROL3_reg);
		ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
		ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL;
		rtd_outl(PPOVERLAY_MEMCDTG_CONTROL3_reg, ppoverlay_memcdtg_control3_reg.regValue);
		//set uzu1 delay
		ppoverlay_uzudtg_control1_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control1_reg);
		ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
		ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
		IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, ppoverlay_uzudtg_control1_reg.regValue);
		//set uzu2 delay
		if(force_enable_two_step_uzu() || (get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)){
			ppoverlay_uzudtg_control2_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control2_reg);
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
			IoReg_Write32(PPOVERLAY_uzudtg_control2_reg, ppoverlay_uzudtg_control2_reg.regValue);
		}else{
			ppoverlay_uzudtg_control2_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control2_reg);
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE-TWO_STEP_UZU_ON_OFF_DELAY_LINE;
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN-TWO_STEP_UZU_ON_OFF_DELAY_PIXEL;
			IoReg_Write32(PPOVERLAY_uzudtg_control2_reg, ppoverlay_uzudtg_control2_reg.regValue);
		}
	}
	else if(mode == 1){
		//set goldenvsync
		ppoverlay_memcdtg_control3_reg.regValue = rtd_inl(PPOVERLAY_MEMCDTG_CONTROL3_reg);
		ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
		ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL;
		rtd_outl(PPOVERLAY_MEMCDTG_CONTROL3_reg, ppoverlay_memcdtg_control3_reg.regValue);
		//set uzu1 delay
		if(drvif_color_Get_Two_Step_UZU_Mode()){
			ppoverlay_uzudtg_control1_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control1_reg);
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line = TWO_STEP_UZU_ON_OFF_DELAY_LINE;
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
			IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, ppoverlay_uzudtg_control1_reg.regValue);
		}else{
			ppoverlay_uzudtg_control1_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control1_reg);
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line = 0;
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
			IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, ppoverlay_uzudtg_control1_reg.regValue);
		}
		//set uzu2 delay
		if(force_enable_two_step_uzu() || (get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)){
			ppoverlay_uzudtg_control2_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control2_reg);
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line = 0;
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
			IoReg_Write32(PPOVERLAY_uzudtg_control2_reg, ppoverlay_uzudtg_control2_reg.regValue);
		}else{
			ppoverlay_uzudtg_control2_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control2_reg);
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line = 0;
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN-TWO_STEP_UZU_ON_OFF_DELAY_PIXEL;
			IoReg_Write32(PPOVERLAY_uzudtg_control2_reg, ppoverlay_uzudtg_control2_reg.regValue);
		}
	}
	else if(mode == 2){
		//set goldenvsync
		ppoverlay_memcdtg_control3_reg.regValue = rtd_inl(PPOVERLAY_MEMCDTG_CONTROL3_reg);
		ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_line = 0;
		ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL;
		rtd_outl(PPOVERLAY_MEMCDTG_CONTROL3_reg, ppoverlay_memcdtg_control3_reg.regValue);
		//set uzu1 delay
		if(drvif_color_Get_Two_Step_UZU_Mode()){
			ppoverlay_uzudtg_control1_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control1_reg);
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line = TWO_STEP_UZU_ON_OFF_DELAY_LINE;
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
			IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, ppoverlay_uzudtg_control1_reg.regValue);
		}else{
			ppoverlay_uzudtg_control1_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control1_reg);
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line = 0;
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
			IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, ppoverlay_uzudtg_control1_reg.regValue);
		}
		//set uzu2 delay
		if(force_enable_two_step_uzu() || (get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)){
			ppoverlay_uzudtg_control2_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control2_reg);
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line = 0;
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
			IoReg_Write32(PPOVERLAY_uzudtg_control2_reg, ppoverlay_uzudtg_control2_reg.regValue);
		}else{
			ppoverlay_uzudtg_control2_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control2_reg);
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line = 0;
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN-TWO_STEP_UZU_ON_OFF_DELAY_PIXEL;
			IoReg_Write32(PPOVERLAY_uzudtg_control2_reg, ppoverlay_uzudtg_control2_reg.regValue);
		}

	}
	else{
		//set goldenvsync
		ppoverlay_memcdtg_control3_reg.regValue = rtd_inl(PPOVERLAY_MEMCDTG_CONTROL3_reg);
		ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
		ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL;
		rtd_outl(PPOVERLAY_MEMCDTG_CONTROL3_reg, ppoverlay_memcdtg_control3_reg.regValue);
		//set uzu1 delay
		ppoverlay_uzudtg_control1_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control1_reg);
		ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
		ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
		IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, ppoverlay_uzudtg_control1_reg.regValue);
		//set uzu2 delay
		if(force_enable_two_step_uzu() || (get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)){
			ppoverlay_uzudtg_control2_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control2_reg);
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN;
			IoReg_Write32(PPOVERLAY_uzudtg_control2_reg, ppoverlay_uzudtg_control2_reg.regValue);
		}else{
			ppoverlay_uzudtg_control2_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control2_reg);
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_line = DTGM_2_GOLDEN_VSYNC_DELAY_LINE-TWO_STEP_UZU_ON_OFF_DELAY_LINE;
			ppoverlay_uzudtg_control2_reg.dtgm2uzu_s1_vs_pixel = DTGM_2_GOLDEN_VSYNC_DELAY_PIXEL-STAGE1_STAGE2_FIFO_MARGIN-TWO_STEP_UZU_ON_OFF_DELAY_PIXEL;
			IoReg_Write32(PPOVERLAY_uzudtg_control2_reg, ppoverlay_uzudtg_control2_reg.regValue);
		}
	}

	if ((webos_tooloption.eModelModuleType == module_LGD) && (webos_tooloption.eBackLight == direct ) && (webos_tooloption.eLEDBarType == local_dim_block_32) && (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC)){
		; //specific panel can not change large Vtotal
	}else{
		if((mode == 1)||(mode == 2)){
			ppoverlay_double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
			ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_en = 0;
			IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_reg.regValue);
			ppoverlay_dv_total_reg.regValue = IoReg_Read32(PPOVERLAY_DV_total_reg);
			recovery_vtotal = ppoverlay_dv_total_reg.dv_total;
			ppoverlay_dv_total_reg.dv_total += DTGM_2_GOLDEN_VSYNC_DELAY_LINE;
			IoReg_Write32(PPOVERLAY_DV_total_reg, ppoverlay_dv_total_reg.regValue);
		}
	}
	//double buffer apply
	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	ppoverlay_double_buffer_ctrl2_reg.memc_dtgreg_dbuf_set= 1;
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set= 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
	while((--timeout)  &&
	((ppoverlay_double_buffer_ctrl2_reg.memc_dtgreg_dbuf_set == 1)||
	 (ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set == 1))){
		msleep(0);
		ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	}
	if ((webos_tooloption.eModelModuleType == module_LGD) && (webos_tooloption.eBackLight == direct ) && (webos_tooloption.eLEDBarType == local_dim_block_32) && (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC)){
		;
	}else{
		if((mode == 1)||(mode == 2)){
			ppoverlay_double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
			ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_en = 1;
			IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_reg.regValue);
			ppoverlay_dv_total_reg.regValue = IoReg_Read32(PPOVERLAY_DV_total_reg);
			ppoverlay_dv_total_reg.dv_total = recovery_vtotal;
			IoReg_Write32(PPOVERLAY_DV_total_reg, ppoverlay_dv_total_reg.regValue);
			ppoverlay_double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
			ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_set = 1;
			IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_reg.regValue);
		}
	}
	pr_notice("[%s] mode=%d. (goldenv: %x, uzu_ctrl1:%x, uzu_ctrl2:%x)\n", __FUNCTION__, mode,
		IoReg_Read32(PPOVERLAY_MEMCDTG_CONTROL3_reg), IoReg_Read32(PPOVERLAY_uzudtg_control1_reg),IoReg_Read32(PPOVERLAY_uzudtg_control2_reg));
#endif
}

void UpdateDataFsAlgoRsult(void)
{
	int ret;
	unsigned long i = 0, ulItemCount = 0;
	unsigned long *pulTemp;

	pulTemp = (unsigned long *)(&g_tDataFsAlgoResult);

	ulItemCount = sizeof(SCALER_DATA_FS_ALGO_RESULT) / sizeof(unsigned long);
	// change endian
	for (i = 0; i < ulItemCount; i++)
		pulTemp[i] = Scaler_ChangeUINT32Endian(pulTemp[i]);

	// copy from RPC share memory
	memcpy((unsigned char*)Scaler_GetShareMemVirAddr(SCALERIOC_DTATA_FS_ALGO_RESULT), pulTemp, sizeof(SCALER_DATA_FS_ALGO_RESULT));

	if ((ret = Scaler_SendRPC(SCALERIOC_DTATA_FS_ALGO_RESULT, 0, 0)) < 0)
	{
		rtd_printk(KERN_EMERG, TAG_NAME_VBE, "ret = %d, set SCALERIOC_DTATA_FS_ALGO_RESULT to video fw fail !!!\n", ret );
		return;
	}

}

void ClearDataFsAlgoRsult(void)
{
	memset(&g_tDataFsAlgoResult, 0, sizeof(SCALER_DATA_FS_ALGO_RESULT));
	UpdateDataFsAlgoRsult();
}

unsigned int VSYNCGEN_get_vodma_clk_0(void)
{
	unsigned int vodmapll;
	unsigned int nMCode, nNCode, nOCode, regValue, busclk = 0;
	unsigned int divider_num = 0, ratio_n_off = 0;

	vodma_vodma_clkgen_RBUS vodma_clkgen_reg;
	vodma_clkgen_reg.regValue=rtd_inl(VODMA_VODMA_CLKGEN_reg);


	regValue = rtd_inl(PLL_REG_SYS_PLL_VODMA1_reg);

	nMCode = ((regValue & 0x000ff000)>>12);
	nNCode = ((regValue & 0x00300000)>>20);
	nOCode = ((regValue & 0x00000180)>>7);

	busclk = 27000000*(nMCode+2)/(nNCode+1)/(nOCode+1);

	divider_num = vodma_clkgen_reg.vodma_clk_div_n;
	ratio_n_off = vodma_clkgen_reg.vodma_clk_ratio_n_off;

#if 1//def CONFIG_REALTEK_2K_MODEL_ENABLED
	vodmapll = busclk / (divider_num+1);

	vodmapll = (vodmapll/64) * (64 - ratio_n_off);
#else
	vodmapll = busclk;
#endif

	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[vo] vsyncgen busclk: %d/%d/%d, divider_num=%d, ratio_n_off=%d\n", nMCode, nNCode, busclk, divider_num, ratio_n_off);

	return vodmapll;
}

static unsigned int vbe_HDMI_dynamic_film_mode_flag;

void vbe_set_HDMI_dynamic_film_mode_flag(unsigned int status)
{
	vbe_HDMI_dynamic_film_mode_flag = status;
}

unsigned int vbe_get_HDMI_dynamic_film_mode_flag(void)
{
	return vbe_HDMI_dynamic_film_mode_flag;
}

unsigned int vbe_get_VDEC4K_run_datafs_without_gatting_condition(void){
	if((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC)
		&& (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_IPH_ACT_WID_PRE) > DATAFS_DISABLE_GATTING_WIDTH)
		&& (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_IPV_ACT_LEN_PRE) > DATAFS_DISABLE_GATTING_HEIGHT))
		return 1;
	else
		return 0;
}

unsigned int vbe_get_HDMI_run_datafs_framesync_condition(void){
	if((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI)
		&& (get_current_driver_pattern(DRIVER_FREERUN_PATTERN) == 1)
		&& (get_hdmi_4k_hfr_mode() == HDMI_NON_4K120)
		&& !(vbe_disp_get_VRR_timingMode_flag() || vbe_disp_get_freesync_mode_flag()))
		return 1;
	else
		return 0;
}

extern void vbe_dtg_memec_bypass_switch_set(int mode);
extern int vbe_dtg_memec_bypass_switch(void);
extern int Scaler_MEMC_DTV_ME_CLK_OnOff(unsigned char enable, unsigned char bMode);
extern int Scaler_MEMC_MEMC_CLK_OnOff(unsigned char ME_enable, unsigned char MC_enable, unsigned char bMute);
extern unsigned char rtk_hal_vsc_GetOutputRegion(VIDEO_WID_T wid, VIDEO_RECT_T * poutregion);
extern void Scaler_MEMC_HDMI_ME_CLK_OnOff(unsigned char is_clk_on, unsigned char mode);

void scaler_disp_dtg_pre_i_domain_setting(unsigned char display)
{
	ppoverlay_double_buffer_ctrl_RBUS double_buffer_ctrl_reg;
	ppoverlay_double_buffer_ctrl2_RBUS ppoverlay_double_buffer_ctrl2_reg;
	ppoverlay_dispd_smooth_toggle1_RBUS	dispd_smooth_toggle1_reg;
	ppoverlay_dispd_stage1_sm_ctrl_RBUS 	dispd_stage1_sm_ctrl_reg;
//	ppoverlay_dtg_m_remove_input_vsync_RBUS dtg_m_remove_input_vsync_reg;
	ppoverlay_uzudtg_fractional_fsync_RBUS uzudtg_fractional_fsync_reg;
	ppoverlay_uzudtg_countrol_RBUS ppoverlay_uzudtg_countrol_reg;

//	ppoverlay_uzudtg_control1_RBUS ppoverlay_uzudtg_control1_reg;
	unsigned char uzu_valid_framecnt = 0;
	ppoverlay_dtg_frame_cnt1_RBUS dtg_frame_cnt1_reg;
	SCALER_DISP_CHANNEL _channel = 0;
	unsigned long flags;//for spin_lock_irqsave
	unsigned int count = 0xfffff;
	UINT32 mul_dbuf_cnt=0;
	UINT32 meas0_lineCnt1=0;
	UINT32 meas0_lineCnt2=0;
	UINT32 meas0_lineCnt3=0;
	UINT32 meas0_lineCnt4=0;
	UINT32 meas0_lineCnt5=0;
	UINT32 meas1_lineCnt1=0;
	UINT32 meas1_lineCnt2=0;
	UINT32 meas1_lineCnt3=0;
	UINT32 meas1_lineCnt4=0;
	UINT32 meas1_lineCnt5=0;
	UINT32 timestamp[5] = {0,0,0,0,0};

	if(display > SLR_MAIN_DISPLAY){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s]sub path not config timing\n", __FUNCTION__);
		return;
	}

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"+++scaler_disp_dtg_pre_i_domain_setting!!\n");

	/* KTASKWBS-12187 timing change need to turn off mode revised, otherwise dtg ip will block due to
	     frame index cannot count.
	     For case : 24hz in/ 120hz out , uzu remove/multiple = 10:2, change timing to
	                    30hz in / 120hz out, uzu remove/multiple = 4:1, frame count cannot read index 1
	                    and issue happened.
	     DIC recommaned turn off this mode, duriing timine change procedure.
	 */
	ppoverlay_uzudtg_countrol_reg.regValue = IoReg_Read32(PPOVERLAY_UZUDTG_COUNTROL_reg);
	ppoverlay_uzudtg_countrol_reg.uzudtg_mode_revised = 0;
	IoReg_Write32(PPOVERLAY_UZUDTG_COUNTROL_reg, ppoverlay_uzudtg_countrol_reg.regValue);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"uzudtg_mode_revised == 0\n");

	drivf_scaler_reset_freerun();

	down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	//double buffer D0
	spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
	double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	double_buffer_ctrl_reg.dreg_dbuf_en = 0;
	double_buffer_ctrl_reg.drm_multireg_dbuf_en = 1;
	double_buffer_ctrl_reg.drm_multireg_dbuf_read_sel = 1;
	double_buffer_ctrl_reg.drm_multireg_dbuf_vsync_sel = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
	spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
	up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);

    down(&VBE_LowDelay_Semaphore);
	//pre-flow. patch, let D8 double buffer works well
	count = 0xfffff;
	while((count == 0xfffff)&&(mul_dbuf_cnt<10000)){
		//msleep(10);
		down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
		double_buffer_ctrl_reg.drm_multireg_dbuf_set = 1;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
		up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
		count = 0xfffff;
		double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		while((double_buffer_ctrl_reg.drm_multireg_dbuf_set)&& --count){
			double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		}
		if(count==0){
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_set 1 wait timeout !!!\n");
		}
		if(double_buffer_ctrl_reg.drm_multireg_dbuf_en==0)
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_en=0 1!!\n");

		mul_dbuf_cnt++;
	}

	meas0_lineCnt1 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt1 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[0] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);

	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=0;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
	dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 1;
	IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);

	uzudtg_fractional_fsync_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_fractional_fsync_reg);
	uzu_valid_framecnt = uzudtg_fractional_fsync_reg.uzudtg_multiple_vsync;	//if 2:5, valid_framecnt = 1, if 1:2, valid_framecnt = 0
	//wait to front porch
	count = 0xfffff;
    dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
	while(!((dtg_frame_cnt1_reg.uzudtg_output_frame_cnt == uzu_valid_framecnt) &&
		(PPOVERLAY_new_meas2_linecnt_real_get_uzudtg_dly_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg)) > 100) &&
		(PPOVERLAY_new_meas2_linecnt_real_get_uzudtg_dly_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg)) < 1900)) && --count){
		dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
	}
	if(count == 0)
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[DTG] Wait to uzu_valid_framecnt timeout!!, uzu_valid_framecnt = %d, uzudtg_output_frame_cnt = %d\n",uzu_valid_framecnt, dtg_frame_cnt1_reg.uzudtg_output_frame_cnt);

	meas0_lineCnt2 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt2 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[1] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);

	if(scaler_get_idomain_vfreq_pre() != Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"input vfreq has changed !!!\n");
		up(&VBE_LowDelay_Semaphore);
		return;
	}
	modestate_set_fractional_framesyncByDisp(_channel);
	meas0_lineCnt3 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt3 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[2] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
	if(scaler_get_idomain_vfreq_pre() != Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"input vfreq has changed !!!\n");
		up(&VBE_LowDelay_Semaphore);
		return;
	}
	modestate_set_display_timing_gen_clock_divByDisp(_channel);
	meas0_lineCnt4 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt4 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[3] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
	count = 0xfffff;

	dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);

	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	while((dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply)&& --count){
		dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	}
	if(count==0){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"dispd_smooth_toggle1 timeout !!!\n");
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 0;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	}
	meas0_lineCnt5 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt5 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[4] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);

	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
	if(scaler_get_idomain_vfreq_pre() != Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"input vfreq has changed !!!\n");
		up(&VBE_LowDelay_Semaphore);
		return;
	}
    if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI){
		if(((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 235) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 245)) ||
			((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 295) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 305)) /*||
			((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 595) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 605))*/)
			msleep(40);	//wait for ivs cnt update, to calculate real vtotal by ivs cnt
	}
	modestate_set_display_timing_genByDisp(_channel);//set dvtotal
    up(&VBE_LowDelay_Semaphore);
/*
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[Eric] uzu_valid_framecnt = %d, uzudtg_output_frame_cnt = %d\n",uzu_valid_framecnt,dtg_frame_cnt1_reg.uzudtg_output_frame_cnt);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt1 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt1));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt1 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt1));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt2 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt2));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt2 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt2));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt3 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt3));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt3 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt3));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt4 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt4));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt4 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt4));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt5 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt5));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt5 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt5));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"time = (%x,%x,%x,%x,%x)\n", timestamp[0],timestamp[1],timestamp[2],timestamp[3],timestamp[4]);
*/
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"---scaler_disp_dtg_pre_i_domain_setting!!\n");

}
void Scaler_wait_for_frc2fs_hw_lock_done(unsigned char display){
	//when disp_frc_fsync raised, position is at den_end, front porch may not at LCM framecnt.
	//need to wait a LCM period to make sure vsync aligned done.
	unsigned int start_time = 0, end_time = 0;
	start_time = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
	if((Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) > 235) && (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) < 245))
		msleep(90);	//24Hz to 60Hz LCM=12Hz
	else if((Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) > 245) && (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) < 255))
		msleep(40);	//25 to 50Hz LCM=25Hz
	else if((Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) > 295) && (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) < 305))
		msleep(40);	//30 to 60Hz LCM=30Hz
	else if((Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) > 495) && (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) < 505))
		msleep(20);	//50 to 50Hz LCM=50Hz
	else if((Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) > 595) && (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) < 605))
		msleep(20);	//60 to 60Hz LCM=60Hz
	else
		msleep(90);
	end_time = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[%s] wait time = %d ms\n", __FUNCTION__,(end_time - start_time)/90);
}

static void _vpq_setting(struct work_struct *work)
{

	if (!vpq_get_handler_bypass()) {
		S_VPQ_ModuleTestMode S_ModuleTestMode = {0};

		if( Scaler_Get_PQ_ModuleTest() != NULL ){
			S_ModuleTestMode.ModuleTestMode_en = Scaler_Get_PQ_ModuleTest()->ModuleTestMode_en;
			S_ModuleTestMode.ModuleTestMode_Flag= Scaler_Get_PQ_ModuleTest()->ModuleTestMode_Flag;
		}

		fwif_color_handler();
		fwif_color_video_quality_handler();
		fwif_color_vpq_pic_init();
		fwif_color_set_PIP_overlap_area_color_selection(1);
		fwif_color_SetAutoMAFlag(1);
		Scaler_Set_OD_Bit_By_XML();

		Scaler_Set_VIP_Disable_PQ(S_ModuleTestMode.ModuleTestMode_Flag, S_ModuleTestMode.ModuleTestMode_en);
	}
}

static DECLARE_WORK(scaler_vpq_work, _vpq_setting);

static void vpq_setting(void)
{
	pr_info("[vsc_profile] vpq setting\n");
	queue_work(system_unbound_wq, &scaler_vpq_work);
}

static void wait_vpq_setting_done(void)
{
	flush_work(&scaler_vpq_work);
	pr_info("[vsc_profile] wait vpq setting done\n");
}

void Scaler_disp_setting(unsigned char display)
{
//	unsigned char ret=0;
	ppoverlay_double_buffer_ctrl_RBUS double_buffer_ctrl_reg;
	ppoverlay_double_buffer_ctrl2_RBUS ppoverlay_double_buffer_ctrl2_reg;
	ppoverlay_dispd_smooth_toggle1_RBUS	dispd_smooth_toggle1_reg;
	ppoverlay_dispd_stage1_sm_ctrl_RBUS 	dispd_stage1_sm_ctrl_reg;
	ppoverlay_uzudtg_countrol_RBUS ppoverlay_uzudtg_countrol_reg;
//	ppoverlay_dtg_frame_cnt1_RBUS dtg_frame_cnt1_reg;
//	ppoverlay_dtg_m_remove_input_vsync_RBUS dtg_m_remove_input_vsync_reg;
//	unsigned char uzu_valid_framecnt = 0;

	unsigned int count = 0x3fffff;
	UINT32 mul_dbuf_cnt=0;
	UINT32 mul_dbuf_cnt2=0;
	VIDEO_RECT_T outregion;
	unsigned long flags;//for spin_lock_irqsave

	down(&VBE_Semaphore);

	/* move pq setting here for enhance mute off time */
	vpq_setting();

	if ((SCALER_DISP_CHANNEL)display == SLR_MAIN_DISPLAY) {
#if 0	// move to scaler_disp_dtg_pre_i_domain_setting
		SCALER_DISP_CHANNEL _channel = 0;
		UINT32 meas0_lineCnt1=0;
		UINT32 meas0_lineCnt2=0;
		UINT32 meas0_lineCnt3=0;
		UINT32 meas0_lineCnt4=0;
		UINT32 meas0_lineCnt5=0;
		UINT32 meas1_lineCnt1=0;
		UINT32 meas1_lineCnt2=0;
		UINT32 meas1_lineCnt3=0;
		UINT32 meas1_lineCnt4=0;
		UINT32 meas1_lineCnt5=0;
		UINT32 timestamp[5] = {0,0,0,0,0};
		unsigned long flags;//for spin_lock_irqsave

		drivf_scaler_reset_freerun();

		down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
		//double buffer D0
		spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
		double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		double_buffer_ctrl_reg.dreg_dbuf_en = 0;
		double_buffer_ctrl_reg.drm_multireg_dbuf_en = 1;
		double_buffer_ctrl_reg.drm_multireg_dbuf_read_sel = 1;
		double_buffer_ctrl_reg.drm_multireg_dbuf_vsync_sel = 1;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
		spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
		up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
		ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
		ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
		ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);

        down(&VBE_LowDelay_Semaphore);
		//pre-flow. patch, let D8 double buffer works well
		count = 0x3fffff;
		while((count == 0x3fffff)&&(mul_dbuf_cnt<10000)){
			//msleep(10);
			down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
			double_buffer_ctrl_reg.drm_multireg_dbuf_set = 1;
			IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
			up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
			count = 0x3fffff;
			double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
			while((double_buffer_ctrl_reg.drm_multireg_dbuf_set)&& --count){
				double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
			}
			if(count==0){
				rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_set 1 wait timeout !!!\n");
			}
			if(double_buffer_ctrl_reg.drm_multireg_dbuf_en==0)
				rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_en=0 1!!\n");

			mul_dbuf_cnt++;
		}

		meas0_lineCnt1 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
		meas1_lineCnt1 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
		timestamp[0] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
		dtg_m_remove_input_vsync_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_M_Remove_input_vsync_reg);
		uzu_valid_framecnt = dtg_m_remove_input_vsync_reg.remove_half_ivs_mode2;	//if 2:5, valid_framecnt = 1, if 1:2, valid_framecnt = 0
		//wait to front porch
		count = 0x3fffff;
        dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		while(!((dtg_frame_cnt1_reg.uzudtg_output_frame_cnt == uzu_valid_framecnt) && (IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg) > 100) && (IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg) < 2000)) && --count){
			dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		}
		if(count == 0)
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[DTG] Wait to uzu_valid_framecnt timeout!!, uzu_valid_framecnt = %d, uzudtg_output_frame_cnt = %d\n",uzu_valid_framecnt, dtg_frame_cnt1_reg.uzudtg_output_frame_cnt);

		meas0_lineCnt2 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
		meas1_lineCnt2 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
		timestamp[1] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
		modestate_set_fractional_framesyncByDisp(_channel);
		meas0_lineCnt3 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
		meas1_lineCnt3 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
		timestamp[2] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
		modestate_set_display_timing_gen_clock_divByDisp(_channel);
		meas0_lineCnt4 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
		meas1_lineCnt4 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
		timestamp[3] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
		count = 0x3fffff;

		dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=0;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 1;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);

		dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
		while((dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply)&& --count){
			dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
		}
		if(count==0){
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"dispd_smooth_toggle1 timeout !!!\n");
			dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 0;
			IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
			dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
			dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
			IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
			dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
			IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
		}
		meas0_lineCnt5 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
		meas1_lineCnt5 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
		timestamp[4] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);

		ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
		ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
		ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
		modestate_set_display_timing_genByDisp(_channel);//set dvtotal
        up(&VBE_LowDelay_Semaphore);
#endif
/*
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[Eric] uzu_valid_framecnt = %d, uzudtg_output_frame_cnt = %d\n",uzu_valid_framecnt,dtg_frame_cnt1_reg.uzudtg_output_frame_cnt);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt1 (%d)\n", meas0_lineCnt1);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt1 (%d)\n", meas1_lineCnt1);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt2 (%d)\n", meas0_lineCnt2);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt2 (%d)\n", meas1_lineCnt2);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt3 (%d)\n", meas0_lineCnt3);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt3 (%d)\n", meas1_lineCnt3);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt4 (%d)\n", meas0_lineCnt4);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt4 (%d)\n", meas1_lineCnt4);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt5 (%d)\n", meas0_lineCnt5);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt5 (%d)\n", meas1_lineCnt5);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"time = (%x,%x,%x,%x,%x)\n", timestamp[0],timestamp[1],timestamp[2],timestamp[3],timestamp[4]);
*/


		//K6HP/K6LP  both can set 60Hz panel, so only check panel refresh rate to go MC only mode
		if(Get_DISPLAY_REFRESH_RATE() == 120){
			if((((Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) >= 995) && (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) <= 1005)) ||
				((Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) >= 1195) && (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_V_FREQ) <= 1205)))
				||((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI) && (get_hdmi_4k_hfr_mode() != HDMI_NON_4K120))){
				//MEMC bypass
				Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
				//set MEMC mux disable
				Scaler_MEMC_Bypass_On(1);
		//		vbe_dtg_memec_bypass_switch_set(0);
				pr_notice("[Scaler_disp_setting] input 100/120Hz bypass MEMC\n");
			}
			else if (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI)
			{
				//Freesync need go low delay mode, bypass memc
				if(vbe_disp_get_VRR_timingMode_flag() ||vbe_disp_get_freesync_mode_flag()){
					//disable MEMC clock
					Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
					Scaler_MEMC_Bypass_On(1);
					pr_notice("[Scaler_disp_setting] VRR/Freesync mode set MEMC bypass\n");
				}
				else
				{
				#ifdef FORCE_MC_ONLY_MODE
					//force mc only mode
					pr_notice("[VBE] force mc only mode!!!\n");
					Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);
					Scaler_MEMC_Bypass_On(0);
				#else
					//enable MEMC clock
					Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);
					//set MEMC mux enable
					Scaler_MEMC_Bypass_On(0);
			//		vbe_dtg_memec_bypass_switch_set(0);
					pr_notice("[Scaler_disp_setting]120Hz panel set hdmi uhd MEMC on\n");
				#endif
				}
			}
			else{
				#ifdef FORCE_MC_ONLY_MODE
					//force mc only mode
					pr_notice("[VBE] force mc only mode!!!\n");
					Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);
					Scaler_MEMC_Bypass_On(0);
				#else
					if(get_vt_EnableFRCMode() != FALSE)
					{
						//enable MEMC clock
						Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);
						//set MEMC mux enable
						Scaler_MEMC_Bypass_On(0);
					//		vbe_dtg_memec_bypass_switch_set(0);
						pr_notice("[Scaler_disp_setting]120Hz panel set MEMC on\n");
					}
					//Eric@20190926 Vdec Direct Low Latency mode flow
					if(drv_memory_get_vdec_direct_low_latency_mode()){
						pr_notice("[%s][%d][LowDelayMode]", __FUNCTION__, __LINE__);
						vpq_memc_set_lowDelayMode(_ENABLE);
						pr_notice("[Scaler_disp_setting]Vdec Direct set MEMC Low Latency mode\n");
					}
				#endif
			}
		}
		else
		{
			if ((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC) &&    //DTV/USB playback 4K 50/60 default ME off, MC on
				(!vsc_get_adaptivestream_flag(SLR_MAIN_DISPLAY)) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) > 2560) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > 1440) &&
				(((Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_REMOVE_RATIO) == 1) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_MULTIPLE_RATIO) == 1)) ||
				((Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_REMOVE_RATIO) == 5) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_MULTIPLE_RATIO) == 6)))) {
			#if 0 //MEMC off
				Scaler_MEMC_Bypass_On(1);
				vbe_dtg_memec_bypass_switch_set(1);
				pr_notice("[jerry_Scaler_MEMC_DTV_ME_CLK_OnOff_AAA][%d]\n", ((rtd_inl(0xb8028100)>>13)&0x1));
				//Scaler_MEMC_Bypass_CLK_OnOff(0);
				Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
			#else //MC on, ME off, setting clock then mux avoid see garbage
				//disable ME clock
		//		Scaler_MEMC_DTV_ME_CLK_OnOff(0, 1);
				if(TV006_WB_Pattern_En){
					Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
					Scaler_MEMC_Bypass_On(1);
				}
				else{
	              if(get_vt_EnableFRCMode() != FALSE)
	              {
					Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);
					//set MEMC mux enable
					Scaler_MEMC_Bypass_On(0);
	              }
				}
				pr_notice("[Scaler_disp_setting][AA][%d,%d]\n", ((rtd_inl(0xb8028100)>>13)&0x1), TV006_WB_Pattern_En);
			#endif
			}else if ((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC) &&     //CP 4k2k 50/60Hz default ME off, MC on
				(vsc_get_adaptivestream_flag(SLR_MAIN_DISPLAY)) &&
				(((Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_REMOVE_RATIO) == 1) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_MULTIPLE_RATIO) == 1)) ||
				((Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_REMOVE_RATIO) == 5) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_MULTIPLE_RATIO) == 6))) &&
				((Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID) > 3000) && (Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN) > 2000))) {
				//Eric@20181016 Vdec Direct Low Latency mode flow
				if(drv_memory_get_vdec_direct_low_latency_mode()){
					//disable MEMC clock
					Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
					//set MEMC mux disable
					Scaler_MEMC_Bypass_On(1);
					pr_notice("[vo low delay][%d]\n", ((rtd_inl(0xb8028100)>>13)&0x1));
				}
				else if(TV006_WB_Pattern_En){
					Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
					Scaler_MEMC_Bypass_On(1);
				}
				else{
	                if(get_vt_EnableFRCMode() != FALSE)
	                {
	    				//disable MEMC clock
	    				Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);
	    				//set MEMC mux disable
	    				Scaler_MEMC_Bypass_On(0);
	                }
				}
		//		vbe_dtg_memec_bypass_switch_set(1);
				pr_notice("[Scaler_disp_setting][BB][%d,%d,%d]\n", ((rtd_inl(0xb8028100)>>13)&0x1), TV006_WB_Pattern_En, drv_memory_get_vdec_direct_low_latency_mode());
				//Scaler_MEMC_Bypass_CLK_OnOff(0);
			}else if ((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI) && (get_hdmi_4k_hfr_mode() != HDMI_NON_4K120))
			{
				Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);//disable clock
				Scaler_MEMC_Bypass_On(1); //-> MEMC Mux bypass
			}
			else if ((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI) &&
				(check_hdmi_uhd_condition() == TRUE)) {
				//Freesync need go low delay mode, bypass memc
				if(vbe_disp_get_VRR_timingMode_flag() || vbe_disp_get_freesync_mode_flag()){
					//disable MEMC clock
					Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
					Scaler_MEMC_Bypass_On(1);
				}
				else{
					if((Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_REMOVE_RATIO) == 1) &&
					(Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_MULTIPLE_RATIO) == 1)){
						// 4k60Hz default ME off, MC on
						Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);
						vbe_set_HDMI_dynamic_film_mode_flag(TRUE);
					}
					else{
					#ifdef FORCE_MC_ONLY_MODE
						//force mc only mode
						pr_notice("[VBE] force mc only mode!!!\n");
						Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);
					#else
						//enable MEMC clock
						Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);
					#endif
						vbe_set_HDMI_dynamic_film_mode_flag(FALSE);
					}
					//set MEMC mux enable
					Scaler_MEMC_Bypass_On(0);
				}
				pr_notice("[Scaler_disp_setting][CC][%d]\n", ((rtd_inl(0xb8028100)>>13)&0x1));
			}  else /*if (vbe_dtg_memec_bypass_switch())*/ { //othersource need MEMC on, if previous close must on again
				//CP Vdec Direct need force MEMC gamemode
				if(((drv_memory_get_vdec_direct_low_latency_mode() && vsc_get_adaptivestream_flag(SLR_MAIN_DISPLAY)) ||
					TV006_WB_Pattern_En)){
					//disable MEMC clock
					Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
					//set MEMC mux disable
					Scaler_MEMC_Bypass_On(1);
					pr_notice("[vo low delay][%d]\n", ((rtd_inl(0xb8028100)>>13)&0x1));
				}
				else if(vbe_disp_get_VRR_timingMode_flag() ||vbe_disp_get_freesync_mode_flag()){	//Freesync need go low delay mode, bypass memc
					//disable MEMC clock
					Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
					Scaler_MEMC_Bypass_On(1);
					pr_notice("[Freesync mode][%d]\n", ((rtd_inl(0xb8028100)>>13)&0x1));
				}
				else{
					#ifdef FORCE_MC_ONLY_MODE
						//force mc only mode
						pr_notice("[VBE] force mc only mode!!!\n");
						Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);
						Scaler_MEMC_Bypass_On(0);
					#else
						if(get_vt_EnableFRCMode() != FALSE)
						{
							//enable MEMC clock
							Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);
							//set MEMC mux enable
							Scaler_MEMC_Bypass_On(0);
							//		vbe_dtg_memec_bypass_switch_set(0);
							pr_notice("[Scaler_disp_setting][DD][%d]\n", ((rtd_inl(0xb8028100)>>13)&0x1));

							//Scaler_MEMC_Bypass_CLK_OnOff(1);
						}
					#endif
				}
			}
		}

#ifdef ENABLE_VBY1_TO_HDMI_4K2K_DATA_FS
		if(Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC)){
			drvif_framesync_gatting(_DISABLE);
			drvif_framesync_gatting(_ENABLE);
			drvif_framesync_gatting_do();
			//Eric@20190919 wait a lowest-common-multiple time to make sure HW process frc2fs done
			Scaler_wait_for_frc2fs_hw_lock_done(display);
#ifdef CONFIG_DATA_FRAMESYNC_FORCE_422_CAP
			if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC){
				//VDEC 2k1k use original flow, framesync with gatting
				if(!((Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) > DATAFS_DISABLE_GATTING_WIDTH) && (Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > DATAFS_DISABLE_GATTING_HEIGHT))){
					//IoReg_SetBits(VODMA_VODMA_CLKGEN_reg,VODMA_VODMA_CLKGEN_en_fifo_full_gate_mask);
					if((display == SLR_MAIN_DISPLAY) && (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC) && (Scaler_Get_Vo_Force_60_Framerate_State() == 1)) {
						rtd_printk(KERN_EMERG, TAG_NAME_VBE, "Delay Gating!\n");
					}else{
						scaler_set_full_gatting_rpc(true);
						rtd_printk(KERN_EMERG, TAG_NAME_VBE, "Enable Gating!\n");
					}
				}
				else
					rtd_printk(KERN_EMERG, TAG_NAME_VBE, "Force Don't enable Gating\n");
			}
			else if((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) != VSC_INPUTSRC_HDMI) && (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) != VSC_INPUTSRC_JPEG)){
				//IoReg_SetBits(VODMA_VODMA_CLKGEN_reg,VODMA_VODMA_CLKGEN_en_fifo_full_gate_mask);
                scaler_set_full_gatting_rpc(true);
                rtd_printk(KERN_EMERG, TAG_NAME_VBE, "Enable Gating!\n");
			}
#endif
			if ((Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)) {
				modestate_set_fll_running_flag(_ENABLE);
			}
		}else{
			modestate_set_fll_running_flag(_ENABLE);

			if(Scaler_InputSrcGetType(display) == _SRC_TV){
				if(drvif_module_vdc_read_Clamping_path() && drvif_module_vdc_read_scan_flag()){
					rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"### ATV Channel Scan !!! ###\n");
					modestate_set_fll_running_flag(FALSE);
				}
			}
		}
#else
	if((Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)){
		modestate_set_fll_running_flag(_DISABLE);
		modestate_set_display_timing(0);
	}
	else{
		if(Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC)){
			//gatting new flow : raise vo clock first -> set timing sync -> enable gatting after timing stable
			drvif_framesync_gatting(_DISABLE);
			drvif_framesync_gatting(_ENABLE);
			drvif_framesync_gatting_do();
			//Eric@20190919 wait a lowest-common-multiple time to make sure HW process frc2fs done
			Scaler_wait_for_frc2fs_hw_lock_done(display);
			//enable gatting
#ifdef CONFIG_DATA_FRAMESYNC_FORCE_422_CAP
			if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC){
				//VDEC 2k1k use original flow, framesync with gatting
				if(!((Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) > DATAFS_DISABLE_GATTING_WIDTH) && (Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > DATAFS_DISABLE_GATTING_HEIGHT))){
					//IoReg_SetBits(VODMA_VODMA_CLKGEN_reg,VODMA_VODMA_CLKGEN_en_fifo_full_gate_mask);
					if((display == SLR_MAIN_DISPLAY) && (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC) && (Scaler_Get_Vo_Force_60_Framerate_State() == 1)) {
						rtd_printk(KERN_EMERG, TAG_NAME_VBE, "Delay Gating!\n");
					}else{
						scaler_set_full_gatting_rpc(true);
						rtd_printk(KERN_EMERG, TAG_NAME_VBE, "Enable Gating!\n");
					}
				}
				else
					rtd_printk(KERN_EMERG, TAG_NAME_VBE, "Force Don't enable Gating\n");
			}
			else if((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) != VSC_INPUTSRC_HDMI) && (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) != VSC_INPUTSRC_JPEG)){
                //IoReg_SetBits(VODMA_VODMA_CLKGEN_reg,VODMA_VODMA_CLKGEN_en_fifo_full_gate_mask);
                scaler_set_full_gatting_rpc(true);
                rtd_printk(KERN_EMERG, TAG_NAME_VBE, "Enable Gating!\n");
			}
#endif
		}else{

#ifdef SMOOTH_TOGGLE_DATAFRCFS_TEST
			if ((vbe_disp_get_adaptivestream_fs_mode() == 1) &&
				(Get_DISPLAY_PANEL_TYPE() != P_VBY1_TO_HDMI) &&
				(Get_DISPLAY_PANEL_TYPE() != P_VBY1_TO_LVDS_TO_HDMI)) {
				//drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
    				if(drvif_scaler_get_display_mode() != DISPLAY_MODE_FRAME_SYNC){
    					rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "[%s][line:%d] adaptive stream timing fs.\n", __FUNCTION__, __LINE__);
    					fwif_color_safe_od_enable(0);
    					drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
    					fwif_color_safe_od_enable(1);
    				}
    				modestate_set_fll_running_flag(_DISABLE);
			}
            else if(Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC)== 1){
				if(drvif_scaler_get_display_mode() != DISPLAY_MODE_FRAME_SYNC){
					rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "[%s][line:%d] data fs case run timing fs.\n", __FUNCTION__, __LINE__);
					fwif_color_safe_od_enable(0);
					drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
					fwif_color_safe_od_enable(1);
				}
				modestate_set_fll_running_flag(_DISABLE);
			}
			else{
              if((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI) && (vbe_disp_get_VRR_timingMode_flag() || vbe_disp_get_freesync_mode_flag()))
              {
					modestate_set_fll_running_flag(_DISABLE);
                    vbe_disp_set_VRR_fractional_framerate_mode();
					fwif_color_safe_od_enable(0);
					drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
					fwif_color_safe_od_enable(1);
					scaler_set_VRR_pwm_frequency_update_in_isr(TRUE);
              }
			  else
			  {
				modestate_set_fll_running_flag(_ENABLE);
			  }
			}
			#else
				modestate_set_fll_running_flag(_ENABLE);
			#endif

			if(Scaler_InputSrcGetType(display) == _SRC_TV){
				if(drvif_module_vdc_read_Clamping_path() && drvif_module_vdc_read_scan_flag()){
					rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"### ATV Channel Scan !!! ###\n");
					modestate_set_fll_running_flag(FALSE);
				}
			}
		}
	}

#endif
		ppoverlay_uzudtg_countrol_reg.regValue = IoReg_Read32(PPOVERLAY_UZUDTG_COUNTROL_reg);
		ppoverlay_uzudtg_countrol_reg.uzudtg_mode_revised = 1;
		IoReg_Write32(PPOVERLAY_UZUDTG_COUNTROL_reg, ppoverlay_uzudtg_countrol_reg.regValue);
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"uzudtg_mode_revised == 1\n");


		if(drv_memory_get_game_mode_dynamic_flag())	//WOSQRTK-10203 need to do this early	(patch for QA stage)
			Scaler_MEMC_SetInOutFrameRate();

		if(Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE())
			state_update_disp3d_info();

		if(_FALSE == Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC))
		{
		//	if(Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE())
		//		state_update_disp3d_info();
			drvif_scaler_ddomain_switch_irq(_ENABLE);
		}
#ifdef CONFIG_DCLK_CHECK
		framesync_syncDoubleDVS_Frc_Tracking_Framesync(Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), _DISABLE);
#endif //#ifdef CONFIG_DCLK_CHECK
		drvif_scalerdisplay_set_sharpness_line_mode();
		if ((Get_DISPLAY_PANEL_TYPE() == P_LVDS_TO_HDMI) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI))
		{
			drv_adjust_spreadspectrumrange(0);
		}

#if 0
		// Add for PQ part by Hawaii 20150413
		if (!vpq_get_handler_bypass()) {
			fwif_color_handler();
			fwif_color_video_quality_handler();
			fwif_color_vpq_pic_init();
			fwif_color_set_PIP_overlap_area_color_selection(1);
			fwif_color_SetAutoMAFlag(1);
			Scaler_Set_OD_Bit_By_XML();

			Scaler_Set_VIP_Disable_PQ(S_ModuleTestMode.ModuleTestMode_Flag, S_ModuleTestMode.ModuleTestMode_en);
		}
#endif

		/*
		if((Scaler_InputSrcGetType(display) == _SRC_VO) && ((get_HDMI_HDR_mode() != HDR_MODE_DISABLE) || (get_OTT_HDR_mode() != HDR_MODE_DISABLE) || ((IoReg_Read32(DOLBY_V_TOP_TOP_CTL_reg) & 7) != 0))){
			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[DolbyVision] IGNORE VIP FOR DOLBY VISION\n");
			fwif_color_disable_VIP(_ENABLE);
		}*/
		// ======= Add for PQ part End ========

		if (Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE())
		{
			//USER : LewisLee DATE : 2012/11/07
			//only 3D mode need to apply all
			//to pevent 2D -> 3D -> 2D, set aspect ratio, the picture abnormal
			//so need to set scaler_2Dcvt3D_set_userEnableStatus(_FALSE)
			if(Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)display, SLR_DISP_3D_3DTYPE)==SLR_3D_2D_CVT_3D)
			{
				scaler_2Dcvt3D_set_userEnableStatus(_ENABLE);
				scaler_2Dcvt3D_set_shifter(Scaler_Get2DCvt3D_Strength(), Scaler_Get2DCvt3D_Depth());
				scaler_2Dcvt3D_set_tilt_depth(scaler_2Dcvt3D_get_tilt_enable());

			}
			else
				scaler_2Dcvt3D_set_userEnableStatus(_DISABLE);
		}
		rtk_hal_vsc_GetOutputRegion(VIDEO_WID_0, &outregion);
		if (!((outregion.x == 0)&&(outregion.y == 0)&&(outregion.w == 0)&&(outregion.h == 0)) ){
#if 0//Move after memc
			if(Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC) == FALSE){
				unsigned int count = 20;
				cap_ddr_fifostatus_RBUS cap_ddr_fifostatus_reg;
				/*check memory cap down*/
				cap_ddr_fifostatus_reg.regValue = IoReg_Read32(MDOMAIN_CAP_Cap_DDR_FIFOStatus_reg);
				while(!(cap_ddr_fifostatus_reg.in1_cap_last_wr_flag) && --count){
					cap_ddr_fifostatus_reg.regValue = IoReg_Read32(MDOMAIN_CAP_Cap_DDR_FIFOStatus_reg);
					mdelay(10);
				}
				rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"M domain done\n");
				if(count==0)
					pr_err("M domain timeout !\n");
			}
#endif
			down(get_forcebg_semaphore());
			drvif_scalerdisplay_enable_display(SLR_MAIN_DISPLAY, _ENABLE);
			up(get_forcebg_semaphore());

			//first boot run Main done
			if(first_boot_run_main == FALSE){
				first_boot_run_main = TRUE;
			}
		}

	} else if ((SCALER_DISP_CHANNEL)display == SLR_SUB_DISPLAY) {
#if 0//Move after memc
		if(Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC) == FALSE){
			unsigned int count = 10;
			cap_ddr_fifostatus_RBUS cap_ddr_fifostatus_reg;
			/*check memory cap down*/
			cap_ddr_fifostatus_reg.regValue = IoReg_Read32(MDOMAIN_CAP_Cap_DDR_FIFOStatus_reg);
			while(!(cap_ddr_fifostatus_reg.in2_cap_last_wr_flag) && count--){
				cap_ddr_fifostatus_reg.regValue = IoReg_Read32(MDOMAIN_CAP_Cap_DDR_FIFOStatus_reg);
				mdelay(10);
			}
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"Sub M domain done\n");
			if(count==0)
				pr_err("Sub M domain timeout !\n");
		}
#endif
		//if first run sub path, it should set disp timing. @Crixus 20151230
		//sync benwang:for k3lp project no mutilview case, remove (drvif_scalerdisplay_get_force_bg_status()) condition for livezoom sub no need set timing(qiangzhou20161104)
		if((first_boot_run_main == FALSE)/*||(drvif_scalerdisplay_get_force_bg_status())*/){
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"First boot run Sub!!!!\n");
#if 0
			modestate_disp_flow_double_buf_enable(_ENABLE);
			modestate_set_display_timing_genByDisp(display);//set dvtotal
			modestate_set_display_timing_gen_clock_div();
			modestate_set_fractional_framesync();
#ifndef CONFIG_MEMC_BYPASS	//bypass memc rzhen@2016-06-29
			//add ME protection when change frame rate @Crixus 20151221
			if((IoReg_Read32(me_04_write_enable_ADDR) & _BIT20) || (IoReg_Read32(me_05_write_enable_ADDR) & _BIT20)){
				me_protection_flag = 1;//if ME si disable, not to protect.
			}
			if(me_protection_flag == 1){
				IoReg_ClearBits(me_04_write_enable_ADDR, _BIT20);
				IoReg_ClearBits(me_05_write_enable_ADDR, _BIT20);
				IoReg_SetBits(KME_ME1_TOP1__ME1_SCENE1_00_ADDR, _BIT0);
				WaitFor_DEN_STOP();
				WaitFor_DEN_STOP();
				rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"turn off me4.5 ok in disp_setting\n");
			}
			modestate_disp_flow_double_buf_apply();
			modestate_disp_flow_double_buf_enable(_DISABLE);
			if(me_protection_flag == 1){
				IoReg_ClearBits(KME_ME1_TOP1__ME1_SCENE1_00_ADDR, _BIT0);
				IoReg_SetBits(me_04_write_enable_ADDR, _BIT20);
				IoReg_SetBits(me_05_write_enable_ADDR, _BIT20);
				WaitFor_DEN_STOP();
				me_protection_flag = 0;
				rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"turn on me4.5 ok in disp_setting\n");
			}
#endif
#else
			down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
			//double buffer D0
			spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
			double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
			double_buffer_ctrl_reg.dreg_dbuf_en = 0;
			double_buffer_ctrl_reg.drm_multireg_dbuf_en = 1;
			double_buffer_ctrl_reg.drm_multireg_dbuf_read_sel = 1;
			double_buffer_ctrl_reg.drm_multireg_dbuf_vsync_sel = 1;
			IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
			spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
			up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
			ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
			ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
			ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
			IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);

			drivf_scaler_reset_freerun();

			//pre-flow. patch, let D8 double buffer works well
			count = 0x3fffff;
			while((count == 0x3fffff)&&(mul_dbuf_cnt<10000)){
				//msleep(10);
				down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
				double_buffer_ctrl_reg.drm_multireg_dbuf_set = 1;
				IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
				up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
				count = 0x3fffff;
				double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
				while((double_buffer_ctrl_reg.drm_multireg_dbuf_set)&& --count){
					double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
				}
				if(count==0){
					rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_set 1 wait timeout !!!\n");
				}
				mul_dbuf_cnt++;
			}
			modestate_set_fractional_framesyncByDisp(display);

			count = 0x3fffff;
			while((count == 0x3fffff)&&(mul_dbuf_cnt2<10000)){
				down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
				double_buffer_ctrl_reg.drm_multireg_dbuf_set = 1;
				IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
				up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
				count = 0x3fffff;
				double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
				while((double_buffer_ctrl_reg.drm_multireg_dbuf_set)&& --count){
					double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
				}
				if(count==0){
					rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_set 2 wait timeout !!!\n");
				}
				mul_dbuf_cnt2++;
			}
			modestate_set_display_timing_gen_clock_divByDisp(display);
			count = 0x3fffff;
			dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
			dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=0;
			IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
			dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
			dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
			IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
			dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
			IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);

			dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
			while((dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply)&& --count){
				dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
			}
			if(count==0){
				rtd_printk(KERN_EMERG, TAG_NAME_VBE,"dispd_smooth_toggle1 timeout !!!\n");
				dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 0;
				IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
				dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
				dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
				IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
				dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
				IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
			}
			ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
			ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
			ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
			IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
			modestate_set_display_timing_genByDisp(display);//set dvtotal

#endif

#ifdef ENABLE_VBY1_TO_HDMI_4K2K_DATA_FS
			if(Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC)){
				drvif_framesync_gatting(_DISABLE);
				drvif_framesync_gatting_do();
				msleep(50);
				drvif_framesync_gatting(_ENABLE);
				if ((Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)) {
					modestate_set_fll_running_flag(_ENABLE);
				}
			}else{
				modestate_set_fll_running_flag(_ENABLE);
				if(Scaler_InputSrcGetType(display) == _SRC_TV){
					if(drvif_module_vdc_read_Clamping_path() && drvif_module_vdc_read_scan_flag()){
						rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"### ATV Channel Scan !!! ###\n");
						modestate_set_fll_running_flag(FALSE);
					}
				}
			}
#else
			if(Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC)){
				//gating clock apply first, then enable gating
				drvif_framesync_gatting(_DISABLE);
				drvif_framesync_gatting_do();
				msleep(50);
				drvif_framesync_gatting(_ENABLE);
			}else{
			#ifdef SMOOTH_TOGGLE_DATAFRCFS_TEST
				if(vbe_disp_get_adaptivestream_fs_mode()){
					modestate_set_fll_running_flag(_DISABLE);
                    		fwif_color_safe_od_enable(0);
					drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
					fwif_color_safe_od_enable(1);
				}else{
					modestate_set_fll_running_flag(_ENABLE);
				}
			#else
				modestate_set_fll_running_flag(_ENABLE);
			#endif
				if(Scaler_InputSrcGetType(display) == _SRC_TV){
					if(drvif_module_vdc_read_Clamping_path() && drvif_module_vdc_read_scan_flag()){
						rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"### ATV Channel Scan !!! ###\n");
						modestate_set_fll_running_flag(FALSE);
					}
				}
			}
#endif

	if(drv_memory_get_game_mode_dynamic_flag())	//WOSQRTK-10203 need to do this early	(patch for QA stage)
		Scaler_MEMC_SetInOutFrameRate();

			//if(Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE())
				//state_update_disp3d_info();

			if(_FALSE == Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC))
			{
				drvif_scaler_ddomain_switch_irq(_ENABLE);
			}
#ifdef CONFIG_DCLK_CHECK
			framesync_syncDoubleDVS_Frc_Tracking_Framesync(Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), _DISABLE);
#endif //#ifdef CONFIG_DCLK_CHECK
			drvif_scalerdisplay_set_sharpness_line_mode();
			if ((Get_DISPLAY_PANEL_TYPE() == P_LVDS_TO_HDMI) ||
				(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) ||
				(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)) {
				drv_adjust_spreadspectrumrange(0);
			}

		}
		down(get_forcebg_semaphore());
		drvif_scalerdisplay_enable_display(SLR_SUB_DISPLAY, _ENABLE);
		up(get_forcebg_semaphore());
		drvif_color_setpiprgbcontrastbrightness(0);
		fwif_color_set_PIP_overlap_area_color_selection(1);
	}
	up(&VBE_Semaphore);

	wait_vpq_setting_done();
}

unsigned int Get_Input_vfreq_by_vsync_cnt(void){
    ppoverlay_ivs_cnt_3_RBUS uzudtg_ivs_cnt_3_reg;
	unsigned int vfreq = 0;
	unsigned int ivs_cnt = 0;
	unsigned int XTAL_CNT= 27000000;
	unsigned char count = 3;

	while(count){
		uzudtg_ivs_cnt_3_reg.regValue = IoReg_Read32(PPOVERLAY_IVS_cnt_3_reg);
		ivs_cnt = uzudtg_ivs_cnt_3_reg.ivs_cnt_ori;
		if(ivs_cnt > 0){
			vfreq = (XTAL_CNT*10)/ivs_cnt;
		}
		if(ABS(vfreq, Scaler_DispGetInputInfoByDisp((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY,SLR_INPUT_V_FREQ))>10){
			rtd_printk(KERN_ERR, TAG_NAME_VBE,"[WARN] IVS Freq not ready.(%d.%d)\n", vfreq, Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_V_FREQ));
			count--;
		}else{
			// ivs correct
			break;
		}
		msleep(10);
	}

	if(count == 0){
		// if ivs count is diff offline measure more than 1 hz, use offline measure result.
		vfreq = Scaler_DispGetInputInfoByDisp((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY,SLR_INPUT_V_FREQ);
	}

	if(vfreq == 0){
		//it should be never happen
		rtd_printk(KERN_ERR, TAG_NAME_VBE,"[WARN] IVS Freq is zero.\n");
		vfreq= 600;
	}
	return vfreq;
}

unsigned int scaler_disp_smooth_get_memc_protect_vtotal(void)
	{
		unsigned char pixelMode=0;
		ppoverlay_display_timing_ctrl2_RBUS display_timing_ctrl2_reg;
//		dv_total_RBUS dv_total_reg;
//		uzudtg_dv_total_RBUS uzudtg_dv_total_reg;
//		memcdtg_dv_total_RBUS memcdtg_dv_total_reg;
		UINT32 vFreq=0;
		unsigned int vertical_total=0;
		ppoverlay_uzudtg_fractional_fsync_RBUS uzudtg_fractional_fsync_reg;
		unsigned int removeRatio=0;
		unsigned int multipleRatio=0;

		display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
		pixelMode = 0; //display_timing_ctrl2_reg.dout_pixel_mode;
		vFreq = Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ);

        if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI)
        {
            if(((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 235) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 245)) ||
            ((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 295) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 305)) ||
            ((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 595) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 605)))
                vFreq = Get_Input_vfreq_by_vsync_cnt();
        }else if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC){
			if((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 295) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 305))
				Get_Input_vfreq_by_vsync_cnt();
		}


		// avoid truncate problem.
		if(vFreq==239)
			vFreq = 2397;
		else if(vFreq==299)
		{
			unsigned int ivs_cnt = PPOVERLAY_IVS_cnt_3_get_ivs_cnt_ori(IoReg_Read32(PPOVERLAY_IVS_cnt_3_reg));
			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s] ivs_cnt=%x\n", __FUNCTION__,ivs_cnt);
			if((ivs_cnt < (2700000000UL/2999))&& (ivs_cnt > (2700000000UL/3001)))
				vFreq = 3000;
			else
				vFreq = 2997;
		}
		else if(vFreq==599)
			vFreq = 5994;
		else
			vFreq = vFreq*10;

		uzudtg_fractional_fsync_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_fractional_fsync_reg);

		removeRatio = uzudtg_fractional_fsync_reg.uzudtg_multiple_vsync+1;
		multipleRatio = uzudtg_fractional_fsync_reg.uzudtg_remove_half_ivs_mode+1;

		if(Get_DISPLAY_REFRESH_RATE() == 120){
			if((removeRatio == 1) && (multipleRatio == 5)){
				//24Hz, remove=2, multiple=5
				removeRatio = 2;
			}
			else
            {
			    if(multipleRatio >= 2)
			    {
				    multipleRatio/= 2;
			    }
		    }
		}

		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s] vFreq =%d, mul/remove=%d.%d. vtotal=%d \n", __FUNCTION__, vFreq, multipleRatio, removeRatio, vertical_total);

		if(((vFreq>2350)&&(vFreq<=2450)) || //24hz
		   ((vFreq>2450)&&(vFreq<=2550)) || //25hz
		   ((vFreq>2950)&&(vFreq<=3050)) || //30hz
		   ((vFreq>4750)&&(vFreq<=4850)) || //48hz
		   ((vFreq>4950)&&(vFreq<=5050)) || //50hz
		   ((vFreq>5950)&&(vFreq<=6050)))   //60hz
		{
			vertical_total = ((Get_DISPLAY_CLOCK_TYPICAL()/((Get_DISP_HORIZONTAL_TOTAL()*vFreq)/100))*removeRatio)/multipleRatio;
		}else
		{
			if((Get_DISPLAY_REFRESH_RATE() == 120) &&
				(((vFreq>9950)&&(vFreq<=10050)) ||	//100hz
				((vFreq>11950)&&(vFreq<=12050))))	//120hz
			{
				vertical_total = ((Get_DISPLAY_CLOCK_TYPICAL()/((Get_DISP_HORIZONTAL_TOTAL()*(vFreq/2))/100))*removeRatio)/multipleRatio;
			}
			else{
				// unsupport input frame rate, do error handle.
				vertical_total = Get_DISP_VERTICAL_TOTAL();
				rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][ERR] invalid vfreq(%d), protect vtotal=%d\n", __FUNCTION__, vFreq, vertical_total);
			}
		}
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s] protect vtotal=%d\n", __FUNCTION__, vertical_total);
		return vertical_total;


	}

unsigned int scaler_disp_smooth_get_memc_protect_vtotal_By_100(void)
{
	unsigned char pixelMode=0;
	ppoverlay_display_timing_ctrl2_RBUS display_timing_ctrl2_reg;
	UINT32 vFreq=0;
	unsigned int vertical_total=0;
	ppoverlay_uzudtg_fractional_fsync_RBUS uzudtg_fractional_fsync_reg;
	unsigned int removeRatio=0;
	unsigned int multipleRatio=0;
	unsigned long long temp;

	display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	pixelMode = 0; //display_timing_ctrl2_reg.dout_pixel_mode;
	vFreq = Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ);
    if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI){
        if(((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 235) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 245)) ||
            ((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 295) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 305)) ||
            ((Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 595) && (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) < 605)))
                vFreq = Get_Input_vfreq_by_vsync_cnt();
     }

	// avoid truncate problem.
	if(vFreq==239)
		vFreq = 2397;
	else if(vFreq==299)
		vFreq = 2997;
	else if(vFreq==599)
		vFreq = 5994;
	else
		vFreq = vFreq*10;

	uzudtg_fractional_fsync_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_fractional_fsync_reg);

	removeRatio = uzudtg_fractional_fsync_reg.uzudtg_multiple_vsync+1;
	multipleRatio = uzudtg_fractional_fsync_reg.uzudtg_remove_half_ivs_mode+1;

	if(Get_DISPLAY_REFRESH_RATE() == 120){
		if((removeRatio == 1) && (multipleRatio == 5)){
			//24Hz, remove=2, multiple=5
			removeRatio = 2;
		}
		else
		{
			if(multipleRatio >= 2)
				multipleRatio/= 2;
		}
	}

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s] vFreq =%d, mul/remove=%d.%d. vtotal=%d \n", __FUNCTION__, vFreq, multipleRatio, removeRatio, vertical_total);

	if(((vFreq>2350)&&(vFreq<=2450)) || //24hz
	   ((vFreq>2450)&&(vFreq<=2550)) || //25hz
	   ((vFreq>2950)&&(vFreq<=3050)) || //30hz
	   ((vFreq>4750)&&(vFreq<=4850)) || //48hz
	   ((vFreq>4950)&&(vFreq<=5050)) || //50hz
	   ((vFreq>5950)&&(vFreq<=6050)))   //60hz
	{
		temp = div64_u64((unsigned long long)Get_DISPLAY_CLOCK_TYPICAL(),(Get_DISP_HORIZONTAL_TOTAL()/100));
                temp = temp*100;
                if((vFreq == 2397)&&(removeRatio == 2)&&(multipleRatio == 5))
                    vertical_total = div64_u64(temp,5994);
                else
                    vertical_total = div64_u64(div64_u64(temp,vFreq)*removeRatio,multipleRatio);
	}
    else
	{
		if((Get_DISPLAY_REFRESH_RATE() == 120) &&
			(((vFreq>9950)&&(vFreq<=10050)) ||	//100hz
			((vFreq>11950)&&(vFreq<=12050))))	//120hz
		{
			temp = div64_u64((unsigned long long)Get_DISPLAY_CLOCK_TYPICAL(),(Get_DISP_HORIZONTAL_TOTAL()/100));
			temp = temp*100;
			vertical_total = div64_u64(div64_u64(temp,vFreq/2)*removeRatio,multipleRatio);
		}
		else{
			// unsupport input frame rate, do error handle.
			vertical_total = Get_DISP_VERTICAL_TOTAL();
			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][ERR] invalid vfreq(%d), protect vtotal=%d\n", __FUNCTION__, vFreq, vertical_total);
		}
	}
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s] protect vtotalx100=%d\n", __FUNCTION__, vertical_total);
	return vertical_total;


}

void scaler_disp_smooth_variable_setting()
{
	unsigned char frame_idicator=0;
	unsigned char b_run_frame_check=0;
	ppoverlay_dispd_stage1_sm_ctrl_RBUS dispd_stage1_sm_ctrl_reg;
	ppoverlay_dtg_frame_cnt1_RBUS dtg_frame_cnt1_reg;
	unsigned int count = 0x3fffff;
#ifndef CONFIG_MEMC_BYPASS
	unsigned char me_protection_flag = 0;
#endif
	ppoverlay_double_buffer_ctrl_RBUS double_buffer_ctrl_reg;
	ppoverlay_dispd_smooth_toggle1_RBUS	 dispd_smooth_toggle1_reg;

	if(vbe_disp_get_adaptivestream_fs_mode() == 1){
#ifdef CONFIG_MEMC_BYPASS
			// do nothing.
#else
		Scaler_MEMC_SetInOutFrameRate();
#endif
		return;
	}

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"scaler_disp_smooth_variable_setting\n");
	dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
	dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 1;
	IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);

	if(Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_MULTIPLE_RATIO) > 1){
		b_run_frame_check = 1;
		frame_idicator = Scaler_DispGetInputInfo(SLR_INPUT_FRAC_FS_MULTIPLE_RATIO)-1;
	}

	modestate_decide_pixel_mode();
	modestate_decide_dtg_m_mode();
	modestate_decide_fractional_framesync();
	#ifdef SMOOTH_TOGGLE_DATAFRCFS_TEST
	if(vbe_disp_get_adaptivestream_fs_mode() == 0){
		drivf_scaler_reset_freerun();
	}
	#else
	drivf_scaler_reset_freerun();
	#endif
	modestate_disp_flow_double_buf_enable(_ENABLE);
	//modestate_set_display_timing_gen();
	modestate_set_display_timing_gen_clock_div();
	modestate_set_fractional_framesync();

	if(Scaler_DispGetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ) == 60)
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"######## 48Hz to 60HZ #############\n");
	else if(Scaler_DispGetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ) == 48)
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"######## 60Hz to 48HZ #############\n");
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"decide frame_idicator:%d\n", frame_idicator);
#ifndef CONFIG_MEMC_BYPASS
	//add ME protection when change frame rate @Crixus 20151221
	if((IoReg_Read32(me_04_write_enable_ADDR) & _BIT20) || (IoReg_Read32(me_05_write_enable_ADDR) & _BIT20)){
		me_protection_flag = 1;//if ME is disable, not to protect.
	}
	if(me_protection_flag == 1){
		//disable ME DMA
		IoReg_ClearBits(me_04_write_enable_ADDR, _BIT20);
		IoReg_ClearBits(me_05_write_enable_ADDR, _BIT20);
		IoReg_SetBits(KME_ME1_TOP1__ME1_SCENE1_00_ADDR, _BIT0);
		WaitFor_DEN_STOP();
		WaitFor_DEN_STOP();
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"turn off me4.5 ok in smooth setting\n");
	}
#endif
	if(b_run_frame_check == 1){
		dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		while((dtg_frame_cnt1_reg.uzudtg_input_frame_cnt!= (frame_idicator-1))&& --count){
			dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		}
		count = 0x3fffff;
		//make sure that we can have a full porch apply timing change settings
		while((dtg_frame_cnt1_reg.uzudtg_input_frame_cnt!= frame_idicator)&& --count){
			dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		}
		if(count == 0)
			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"count timeout !!!\n");
		//rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"++frame_idicator:%d\n", (IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg)&0x3f000000)>>24);
	}else{
		ppoverlay_new_meas1_linecnt_real_RBUS new_meas1_linecnt_real_reg;
		new_meas1_linecnt_real_reg.regValue = IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg);
		while((new_meas1_linecnt_real_reg.memcdtg_line_cnt_rt > 200)&& --count){
			new_meas1_linecnt_real_reg.regValue = IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg);
		}
	}
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	modestate_set_fractional_framesync();
	fw_scaler_dtg_double_buffer_apply();
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"--- 1frame_idicator:%d\n",(IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg)&0x3f000000)>>24);

    	count = 0x3fffff;
	double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	while((double_buffer_ctrl_reg.dreg_dbuf_set)&& --count){
		double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	}
	if(count==0){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"double buffer timeout !!!\n");
	}
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"--- 2frame_idicator:%d\n",(IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg)&0x3f000000)>>24);

	count = 0x3fffff;
	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	while((dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply)&& --count){
		dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	}
	if(count==0){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"dispd_smooth_toggle1 timeout !!!\n");
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 0;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	}else{
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
	}
	modestate_disp_flow_double_buf_enable(_DISABLE);
	modestate_set_display_timing_gen();//set dvtotal
#ifndef CONFIG_MEMC_BYPASS
	if(me_protection_flag == 1){
		IoReg_ClearBits(KME_ME1_TOP1__ME1_SCENE1_00_ADDR, _BIT0);
		IoReg_SetBits(me_04_write_enable_ADDR, _BIT20);
		IoReg_SetBits(me_05_write_enable_ADDR, _BIT20);
		WaitFor_DEN_STOP();
		me_protection_flag = 0;
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"turn on me4.5 ok in smooth setting\n");
	}
#endif

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"--- 3frame_idicator:%d\n",(IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg)&0x3f000000)>>24);

#ifdef CONFIG_MEMC_BYPASS
		// do nothing.
#else
		Scaler_MEMC_SetInOutFrameRate();
#endif

	#ifdef SMOOTH_TOGGLE_DATAFRCFS_TEST
	if(vbe_disp_get_adaptivestream_fs_mode() == 0){
		modestate_set_fll_running_flag(_ENABLE);
	}else{
		fwif_color_safe_od_enable(0);
		drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
		fwif_color_safe_od_enable(1);
	}

	if((Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][%d]P_VBY1_TO_HDMI=FRC\n",__FUNCTION__,__LINE__);
		modestate_set_fll_running_flag(_DISABLE);
		drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
	}
	#else
	modestate_set_fll_running_flag(_ENABLE);
	#endif

}


void scaler_disp_smooth_variable_setting_slow(void)
{
	SCALER_DISP_CHANNEL _channel = 0;
	unsigned int count = 0x3fffff;
//	unsigned int count2 = 0x3fffff;
//	ppoverlay_new_meas1_linecnt_real_RBUS ppoverlay_new_meas1_linecnt_real_reg;
	ppoverlay_double_buffer_ctrl_RBUS double_buffer_ctrl_reg;
	ppoverlay_double_buffer_ctrl2_RBUS ppoverlay_double_buffer_ctrl2_reg;
	ppoverlay_dispd_smooth_toggle1_RBUS	 dispd_smooth_toggle1_reg;
	ppoverlay_dispd_stage1_sm_ctrl_RBUS dispd_stage1_sm_ctrl_reg;
	ppoverlay_dtg_frame_cnt1_RBUS dtg_frame_cnt1_reg;
//	ppoverlay_dtg_m_remove_input_vsync_RBUS dtg_m_remove_input_vsync_reg;
	ppoverlay_uzudtg_fractional_fsync_RBUS uzudtg_fractional_fsync_reg;
	ppoverlay_iv2dv_double_buffer_ctrl_RBUS iv2dv_double_buffer_reg;
//	ppoverlay_uzudtg_control1_RBUS ppoverlay_uzudtg_control1_reg;
	unsigned char uzu_valid_framecnt = 0;
	UINT32 mul_dbuf_cnt=0;
//	UINT32 mul_dbuf_cnt2=0;
	UINT32 meas0_lineCnt1=0;
	UINT32 meas0_lineCnt2=0;
	UINT32 meas0_lineCnt3=0;
	UINT32 meas0_lineCnt4=0;
	UINT32 meas0_lineCnt5=0;
	UINT32 meas0_lineCnt6=0;
	UINT32 meas1_lineCnt1=0;
	UINT32 meas1_lineCnt2=0;
	UINT32 meas1_lineCnt3=0;
	UINT32 meas1_lineCnt4=0;
	UINT32 meas1_lineCnt5=0;
	UINT32 meas1_lineCnt6=0;
	UINT32 timestamp[6] = {0,0,0,0,0,0};
	unsigned long flags;//for spin_lock_irqsave

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"scaler_disp_smooth_variable_setting_slow\n");

	if(Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC) == FALSE)
		drivf_scaler_reset_freerun();

	down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	//double buffer D0
	spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
	double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	double_buffer_ctrl_reg.dreg_dbuf_en = 0;
	double_buffer_ctrl_reg.drm_multireg_dbuf_en = 1;
	double_buffer_ctrl_reg.drm_multireg_dbuf_read_sel = 1;
	double_buffer_ctrl_reg.drm_multireg_dbuf_vsync_sel = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
	spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
	up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
	//pre-flow. patch, let D8 double buffer works well
	iv2dv_double_buffer_reg.regValue = IoReg_Read32(PPOVERLAY_iv2dv_Double_Buffer_CTRL_reg);
	iv2dv_double_buffer_reg.iv2dv_db_en = 0;
	iv2dv_double_buffer_reg.iv2dv_db_apply= 0;
	IoReg_Write32(PPOVERLAY_iv2dv_Double_Buffer_CTRL_reg, iv2dv_double_buffer_reg.regValue);
	//pre-flow.patch,let D2 double buffer works well
	count = 0x3fffff;
	while((count == 0x3fffff)&&(mul_dbuf_cnt<10000)){
		down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
		double_buffer_ctrl_reg.drm_multireg_dbuf_set = 1;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
		up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
		count = 0x3fffff;
		double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		while((double_buffer_ctrl_reg.drm_multireg_dbuf_set)&& --count){
			double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		}
		if(count==0){
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_set 1 wait timeout !!!\n");
		}
		if(double_buffer_ctrl_reg.drm_multireg_dbuf_en==0)
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_en=0 1!!\n");

		mul_dbuf_cnt++;
	}
	meas0_lineCnt1 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt1 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[0] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);

	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=0;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
	dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 1;
	IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);

	uzudtg_fractional_fsync_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_fractional_fsync_reg);
	uzu_valid_framecnt = uzudtg_fractional_fsync_reg.uzudtg_multiple_vsync;	//if 2:5, valid_framecnt = 1, if 1:2, valid_framecnt = 0
	//wait to front porch
	count = 0x3fffff;
	dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
	while(!((dtg_frame_cnt1_reg.uzudtg_output_frame_cnt == uzu_valid_framecnt) &&
		(PPOVERLAY_new_meas2_linecnt_real_get_uzudtg_dly_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg)) > 100) &&
		(PPOVERLAY_new_meas2_linecnt_real_get_uzudtg_dly_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg)) < 1500)) && --count){
		dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
	}
	if(count == 0)
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[DTG] Wait to uzu_valid_framecnt timeout!!, uzu_valid_framecnt = %d, uzudtg_output_frame_cnt = %d\n",uzu_valid_framecnt, dtg_frame_cnt1_reg.uzudtg_output_frame_cnt);

	meas0_lineCnt2 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt2 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[1] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
	modestate_set_fractional_framesyncByDisp(_channel);
	modestate_set_display_timing_gen_clock_divByDisp(_channel);
	count = 0x3fffff;

	meas0_lineCnt3 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt3 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[2] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_src_sel = 1;
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);

	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	while((dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply)&& --count){
		dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	}
	if(count==0){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"dispd_smooth_toggle1 timeout !!!\n");
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 0;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	}

	meas0_lineCnt4 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt4 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[3] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);

	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);

	meas0_lineCnt5 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt5 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[4] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);
	modestate_set_display_timing_genByDisp(_channel);//set dvtotal

	meas0_lineCnt6 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt6 = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
	timestamp[5] = IoReg_Read32(TIMER_VCPU_CLK90K_LO_reg);

/*
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[Eric] uzu_valid_framecnt = %d, uzudtg_output_frame_cnt = %d, uzudtg_input_frame_cnt = %d\n",uzu_valid_framecnt,dtg_frame_cnt1_reg.uzudtg_output_frame_cnt,dtg_frame_cnt1_reg.uzudtg_input_frame_cnt);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt1 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt1));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt1 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt1));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt2 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt2));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt2 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt2));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt3 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt3));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt3 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt3));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt4 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt4));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt4 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt4));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt5 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt5));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt5 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt5));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt6 (%d)\n", PPOVERLAY_new_meas0_linecnt_real_get_line_cnt_rt(meas0_lineCnt6));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt6 (%d)\n", PPOVERLAY_new_meas2_linecnt_real_uzudtg_dly_line_cnt_rt(meas1_lineCnt6));
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"time = (%x,%x,%x,%x,%x,%x)\n", timestamp[0],timestamp[1],timestamp[2],timestamp[3],timestamp[4],timestamp[5]);
*/
}

void scaler_disp_smooth_variable_setting_fast(void)
{
	SCALER_DISP_CHANNEL channel = 0;
	unsigned char frame_idicator=0;
	unsigned char b_run_frame_check=0;
	ppoverlay_dispd_stage1_sm_ctrl_RBUS dispd_stage1_sm_ctrl_reg;
	ppoverlay_dtg_frame_cnt1_RBUS dtg_frame_cnt1_reg;
	unsigned int count = 0x3fffff;
//	unsigned char me_protection_flag = 0;
	ppoverlay_double_buffer_ctrl_RBUS double_buffer_ctrl_reg;
	ppoverlay_double_buffer_ctrl2_RBUS ppoverlay_double_buffer_ctrl2_reg;
	ppoverlay_dispd_smooth_toggle1_RBUS	 dispd_smooth_toggle1_reg;
	unsigned long flags;//for spin_lock_irqsave
	ppoverlay_uzudtg_fractional_fsync_RBUS uzudtg_fractional_fsync_reg;

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"scaler_disp_smooth_variable_setting_fast\n");
	dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
	dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 1;
	IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);

	uzudtg_fractional_fsync_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_fractional_fsync_reg);
	if(uzudtg_fractional_fsync_reg.uzudtg_remove_half_ivs_mode>0){
		b_run_frame_check = 1;
		frame_idicator = uzudtg_fractional_fsync_reg.uzudtg_remove_half_ivs_mode;
	}

	//modestate_decide_pixel_mode();
	//modestate_decide_dtg_m_modeByDisp(channel);
	//modestate_decide_fractional_framesyncByDisp(channel);
	drivf_scaler_reset_freerun();

	modestate_set_display_timing_gen_clock_divByDisp(channel);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"decide frame_idicator:%d\n", frame_idicator);

	if(b_run_frame_check == 1){
		dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		while((dtg_frame_cnt1_reg.uzudtg_input_frame_cnt!= (frame_idicator-1))&& --count){
			dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		}
		count = 0x3fffff;
		//make sure that we can have a full porch apply timing change settings
		while((dtg_frame_cnt1_reg.uzudtg_input_frame_cnt!= frame_idicator)&& --count){
			dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		}
		if(count == 0)
			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"count timeout !!!\n");
	}else{
		ppoverlay_new_meas2_linecnt_real_RBUS new_meas2_linecnt_real_reg;
		new_meas2_linecnt_real_reg.regValue = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
		while(((new_meas2_linecnt_real_reg.uzudtg_dly_line_cnt_rt>200)||(new_meas2_linecnt_real_reg.uzudtg_dly_line_cnt_rt<100))&& --count){
			new_meas2_linecnt_real_reg.regValue = IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg);
		}
	}
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);

	//local_irq_disable();
	//preempt_disable();
	modestate_disp_flow_double_buf_enable(_ENABLE);
	fw_scaler_dtg_double_buffer_apply();
	count = 0x3fffff;
	double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	while((double_buffer_ctrl_reg.dreg_dbuf_set)&& --count){
		double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	}
	if(count==0){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"double buffer timeout !!!\n");
	}
	count = 0x3fffff;
	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	while((dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply)&& --count){
		dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	}
	if(count==0){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"dispd_smooth_toggle1 timeout !!!\n");
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 0;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	}else{
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
	}
	count = 0x3fffff;
	down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
	double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	double_buffer_ctrl_reg.dmainreg_dbuf_en = 0;
	double_buffer_ctrl_reg.dmainreg_dbuf_set = 0;
	double_buffer_ctrl_reg.dreg_dbuf_en = 0;
	double_buffer_ctrl_reg.dreg_dbuf_set = 0;
	double_buffer_ctrl_reg.drm_multireg_dbuf_en = 0;
	double_buffer_ctrl_reg.drm_multireg_dbuf_set = 0;
	double_buffer_ctrl_reg.drm_multireg_dbuf_vsync_sel = 0;
	double_buffer_ctrl_reg.dsubreg_dbuf_en = 0;
	double_buffer_ctrl_reg.dsubreg_dbuf_set = 0;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
	spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
	up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	//ppoverlay_double_buffer_ctrl2_reg.osddtgreg_dbuf_en = 0;
	//ppoverlay_double_buffer_ctrl2_reg.osddtgreg_dbuf_set = 0;
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set = 0;
	ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
	ppoverlay_double_buffer_ctrl2_reg.memc_dtgreg_dbuf_set = 0;
	//ppoverlay_double_buffer_ctrl2_reg.osddtg_dbuf_vsync_sel = 0;
	ppoverlay_double_buffer_ctrl2_reg.uzudtg_dbuf_vsync_sel = 0;
	ppoverlay_double_buffer_ctrl2_reg.memcdtg_dbuf_vsync_sel = 0;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
	modestate_set_fractional_framesyncByDisp(channel);
	modestate_set_display_timing_genByDisp(channel);//set dvtotal
	//local_irq_enable();
	//preempt_enable();
}

extern struct semaphore* get_double_buffer_semaphore(void);
extern struct semaphore* get_scaler_fll_running_semaphore(void);

void scaler_disp_smooth_variable_settingByDisp(unsigned char _channel)
{
	sys_reg_sys_dispclksel_RBUS sys_dispclksel_reg;
	ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
	UINT32 dclk_fract_a_new, dclk_fract_b_new, dclk_factor_new;
	UINT32 dclk_fract_a_current, dclk_fract_b_current, dclk_factor_current;


#if 0
	if((Scaler_DispGetInputInfoByDisp(_channel,SLR_INPUT_V_FREQ) > 475) &&
				(Scaler_DispGetInputInfoByDisp(_channel,SLR_INPUT_V_FREQ) < 485)){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"48Hz input is not support.\n");
		return;
	}
#endif

	if(vbe_disp_get_adaptivestream_fs_mode() == 1){
		Scaler_MEMC_SetInOutFrameRate();
		return;
	}
	disp_smooth_variable_setting_flag = _ENABLE;

	modestate_decide_pixel_mode();
	modestate_decide_dtg_m_modeByDisp(_channel);
	modestate_decide_fractional_framesyncByDisp(_channel);

	dclk_fract_a_new = Scaler_DispGetInputInfoByDisp(0,SLR_INPUT_FRAC_FS_REMOVE_RATIO)-1;
	dclk_fract_b_new = Scaler_DispGetInputInfoByDisp(0,SLR_INPUT_FRAC_FS_MULTIPLE_RATIO)-1;
	if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL)
		dclk_fract_a_new = (Scaler_DispGetInputInfoByDisp(0,SLR_INPUT_FRAC_FS_REMOVE_RATIO)*2)-1;
	else
		dclk_fract_a_new = Scaler_DispGetInputInfoByDisp(0,SLR_INPUT_FRAC_FS_REMOVE_RATIO)-1;
	dclk_factor_new = ((dclk_fract_a_new+1)*1000 / (dclk_fract_b_new+1));

	sys_dispclksel_reg.regValue = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
	dclk_fract_a_current = sys_dispclksel_reg.dclk_fract_a;
	dclk_fract_b_current = sys_dispclksel_reg.dclk_fract_b;
	dclk_factor_current = ((dclk_fract_a_current+1)*1000 / (dclk_fract_b_current+1));

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"clk current (a:%d)(b:%d)(factor:%d)\n", dclk_fract_a_current, dclk_fract_b_current, dclk_factor_current);
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"clk new (a:%d)(b:%d)(factor:%d)\n", dclk_fract_a_new, dclk_fract_b_new, dclk_factor_new);
#if 0
	//real cinema mode + true motion off
	if((Scaler_DispGetInputInfoByDisp(_channel,SLR_INPUT_V_FREQ) > 235) &&
			(Scaler_DispGetInputInfoByDisp(_channel,SLR_INPUT_V_FREQ) < 245)){
		scaler_disp_smooth_variable_setting_slow();
	}else{
		if(dclk_factor_current > dclk_factor_new) // change slow
			scaler_disp_smooth_variable_setting_slow();
		else
			scaler_disp_smooth_variable_setting_fast();
	}
#else

	if(0/*(dclk_factor_new/dclk_factor_current)>1*/){ // dclk change fast
		scaler_disp_smooth_variable_setting_fast();
	} else {
		if(Get_DISPLAY_REFRESH_RATE() != 120){
			if(get_vt_EnableFRCMode() == TRUE){	//not VR360 case
				if((Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) > 2560) &&
					(Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > 1440) &&
					(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 490)){
					Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);	//4k50/60Hz case, go MC on setting
				}
				else{
					Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);	//not 4k50/60Hz case, go MEMC on setting
				}
				memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
				if(memc_mux_ctrl_reg.memc_outmux_sel == 0){     //if memc mux off, need turn on
					pr_notice("[MEMC]memc mux off, need turn on!!\n");
					Scaler_MEMC_outMux(_ENABLE,_ENABLE);    //db on, mux on
				}
			}
			else{	//VR360 case
				if(!Scaler_get_vdec_2k120hz()){
					if(((Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) > 2560) &&
					(Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > 1440) &&
					(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 490))){
						;										//4k50,60Hz case, do nothing
					}
					else if((((Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) > 2560) &&
					(Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > 1440) &&
					(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) <= 490)))){
						Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);	//4k 24/25/30/48Hz case, go MC on setting
						memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
						if(memc_mux_ctrl_reg.memc_outmux_sel == 0){     //if memc mux off, need turn on
							pr_notice("[MEMC]memc mux off, need turn on!!\n");
							Scaler_MEMC_outMux(_ENABLE,_ENABLE);    //db on, mux on
						}
					}
					else{
						Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);	//not 4k case, go MEMC on setting
						memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
						if(memc_mux_ctrl_reg.memc_outmux_sel == 0){     //if memc mux off, need turn on
							pr_notice("[MEMC]memc mux off, need turn on!!\n");
							Scaler_MEMC_outMux(_ENABLE,_ENABLE);    //db on, mux on
						}
					}
				}
			}
		}
		else{
			//for 120Hz panel, input 100/120Hz bypass MEMC
			if(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) >= 995){
				Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);
				memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
				if(memc_mux_ctrl_reg.memc_outmux_sel == 1){     //if memc mux on, need turn off
					pr_notice("[MEMC]memc mux off, need turn on!!\n");
					Scaler_MEMC_outMux(_ENABLE,_DISABLE);    //db on, mux off
				}
			}
			else{
				Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);
				memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
				if(memc_mux_ctrl_reg.memc_outmux_sel == 0){     //if memc mux off, need turn on
					pr_notice("[MEMC]memc mux off, need turn on!!\n");
					Scaler_MEMC_outMux(_ENABLE,_ENABLE);    //db on, mux on
				}
			}
		}
		down(get_scaler_fll_running_semaphore());
		down(get_double_buffer_semaphore());
		scaler_disp_smooth_variable_setting_slow();
		up(get_double_buffer_semaphore());
		up(get_scaler_fll_running_semaphore());
		if(Get_DISPLAY_REFRESH_RATE() != 120){
			if ((((Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) > 2560) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > 1440) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 490))|| Scaler_get_vdec_2k120hz()) && (get_vt_EnableFRCMode() == FALSE)){
				//VR360 4k 50/60Hz or 2k120Hz case, set memc mux off
				pr_notice("[VR360] 4k 50/60Hz VR360 case, bypass MEMC and set memc mux off\n");
				Scaler_MEMC_outMux(_ENABLE,_DISABLE);	//db on, mux off
				Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);	//VR360, go MEMC bypass setting
			}
		}
	}
#endif
	Scaler_MEMC_SetInOutFrameRateByDisp(_channel);/*checked*/
	disp_smooth_variable_setting_flag = _DISABLE;
	//Eric@20181009 framerate change flow done, set dynamic_framerate_change_flag = 0
	Scaler_set_dynamic_framerate_change_flag(_DISABLE);
	if((Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)){
		modestate_set_fll_running_flag(_DISABLE);
		drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
	}
	else {
		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_FRAMESYNC) == FALSE)
			modestate_set_fll_running_flag(_ENABLE);
	}


#if 0
	SCALER_DISP_CHANNEL channel = _channel;
	unsigned char frame_idicator=0;
	unsigned char b_run_frame_check=0;
	ppoverlay_dispd_stage1_sm_ctrl_RBUS dispd_stage1_sm_ctrl_reg;
	ppoverlay_dtg_frame_cnt1_RBUS dtg_frame_cnt1_reg;
	unsigned int count = 0x3fffff;
	unsigned char me_protection_flag = 0;
	ppoverlay_double_buffer_ctrl_RBUS double_buffer_ctrl_reg;
	ppoverlay_double_buffer_ctrl2_RBUS ppoverlay_double_buffer_ctrl2_reg;
	ppoverlay_dispd_smooth_toggle1_RBUS	 dispd_smooth_toggle1_reg;

	if(vbe_disp_get_adaptivestream_fs_mode() == 1){
		Scaler_MEMC_SetInOutFrameRate();
		return;
	}
#if 0
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"scaler_disp_smooth_variable_setting\n");
	dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
	dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 1;
	IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);

	if(Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_FRAC_FS_MULTIPLE_RATIO) > 1){
		b_run_frame_check = 1;
		frame_idicator = Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_FRAC_FS_MULTIPLE_RATIO)-1;
	}

	modestate_decide_pixel_mode();
	modestate_decide_dtg_m_modeByDisp(_channel);
	modestate_decide_fractional_framesyncByDisp(_channel);
#ifdef SMOOTH_TOGGLE_DATAFRCFS_TEST
	if(vbe_disp_get_adaptivestream_fs_mode() == 0){
		drivf_scaler_reset_freerun();
	}
#else
	drivf_scaler_reset_freerun();
#endif
	modestate_disp_flow_double_buf_enable(_ENABLE);
	//modestate_set_display_timing_gen();
	modestate_set_display_timing_gen_clock_divByDisp(_channel);
	modestate_set_fractional_framesyncByDisp(_channel);

	if(Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_DTG_MASTER_V_FREQ) == 60)
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"######## 48Hz to 60HZ #############\n");
	else if(Scaler_DispGetInputInfoByDisp(channel,SLR_INPUT_DTG_MASTER_V_FREQ) == 48)
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"######## 60Hz to 48HZ #############\n");
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"decide frame_idicator:%d\n", frame_idicator);

	//add ME protection when change frame rate @Crixus 20151221
	if((IoReg_Read32(me_04_write_enable_ADDR) & _BIT20) || (IoReg_Read32(me_05_write_enable_ADDR) & _BIT20)){
		me_protection_flag = 1;//if ME is disable, not to protect.
	}
	if(me_protection_flag == 1){
		//disable ME DMA
		IoReg_ClearBits(me_04_write_enable_ADDR, _BIT20);
		IoReg_ClearBits(me_05_write_enable_ADDR, _BIT20);
		IoReg_SetBits(KME_ME_TOP1__REG_METOP_SC_CLR_SAD_EN_ADDR, _BIT10);
		WaitFor_DEN_STOP();
		WaitFor_DEN_STOP();
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"turn off me4.5 ok in smooth setting\n");
	}

	if(b_run_frame_check == 1){
		dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		while((dtg_frame_cnt1_reg.uzudtg_input_frame_cnt!= (frame_idicator-1))&& --count){
			dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		}
		count = 0x3fffff;
		//make sure that we can have a full porch apply timing change settings
		while((dtg_frame_cnt1_reg.uzudtg_input_frame_cnt!= frame_idicator)&& --count){
			dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
		}
		if(count == 0)
			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"count timeout !!!\n");
		//rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"++frame_idicator:%d\n", (IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg)&0x3f000000)>>24);
	}else{
		ppoverlay_new_meas1_linecnt_real_RBUS new_meas1_linecnt_real_reg;
		new_meas1_linecnt_real_reg.regValue = IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg);
		while((new_meas1_linecnt_real_reg.memcdtg_line_cnt_rt > 200)&& --count){
			new_meas1_linecnt_real_reg.regValue = IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg);
		}
	}
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	modestate_set_fractional_framesyncByDisp(_channel);
	fw_scaler_dtg_double_buffer_apply();
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"--- 1frame_idicator:%d\n",(IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg)&0x3f000000)>>24);

	count = 0x3fffff;
	double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	while((double_buffer_ctrl_reg.dreg_dbuf_set)&& --count){
		double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	}
	if(count==0){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"double buffer timeout !!!\n");
	}
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"--- 2frame_idicator:%d\n",(IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg)&0x3f000000)>>24);

	count = 0x3fffff;
	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	while((dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply)&& --count){
		dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	}
	if(count==0){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"dispd_smooth_toggle1 timeout !!!\n");
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 0;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	}else{
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
	}
	modestate_disp_flow_double_buf_enable(_DISABLE);
	modestate_set_display_timing_genByDisp(_channel);//set dvtotal

	if(me_protection_flag == 1){
		IoReg_ClearBits(KME_ME_TOP1__REG_METOP_SC_CLR_SAD_EN_ADDR, _BIT10);
		IoReg_SetBits(me_04_write_enable_ADDR, _BIT20);
		IoReg_SetBits(me_05_write_enable_ADDR, _BIT20);
		WaitFor_DEN_STOP();
		me_protection_flag = 0;
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"turn on me4.5 ok in smooth setting\n");
	}

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"--- 3frame_idicator:%d\n",(IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg)&0x3f000000)>>24);
	Scaler_MEMC_SetInOutFrameRateByDisp(_channel);/*checked*/
#ifdef SMOOTH_TOGGLE_DATAFRCFS_TEST
	if(vbe_disp_get_adaptivestream_fs_mode() == 0){
		modestate_set_fll_running_flag(_ENABLE);
	}else{
		drvif_scaler_set_display_modeByDisp(DISPLAY_MODE_FRAME_SYNC,_channel);
	}

	if(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI){
		modestate_set_fll_running_flag(_DISABLE);
		drvif_scaler_set_display_mode(DISPLAY_MODE_FRC);
	}
#else
	modestate_set_fll_running_flag(_ENABLE);
#endif

#else
	UINT32 meas0_lineCnt1=0;
	UINT32 meas0_lineCnt2=0;
	UINT32 meas0_lineCnt3=0;
	UINT32 meas1_lineCnt1=0;
	UINT32 meas1_lineCnt2=0;
	UINT32 meas1_lineCnt3=0;
	UINT32 mul_dbuf_cnt=0;
	UINT32 mul_dbuf_cnt2=0;
	UINT32 db_val=0;
	ppoverlay_new_meas1_linecnt_real_RBUS ppoverlay_new_meas1_linecnt_real_reg;

	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"scaler_disp_smooth_variable_setting\n");

	modestate_decide_pixel_mode();
	modestate_decide_dtg_m_modeByDisp(_channel);
	modestate_decide_fractional_framesyncByDisp(_channel);

	if(vbe_disp_decide_memc_mux_bypass() == FALSE)
		Scaler_MEMC_Bypass_On(0);

	//double buffer D0
	double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	double_buffer_ctrl_reg.dreg_dbuf_en = 0;
	double_buffer_ctrl_reg.drm_multireg_dbuf_en = 1;
	double_buffer_ctrl_reg.drm_multireg_dbuf_read_sel = 1;
	double_buffer_ctrl_reg.drm_multireg_dbuf_vsync_sel = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
 	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);

	drivf_scaler_reset_freerun();

	//pre-flow. patch, let D8 double buffer works well
	count = 0x3fffff;
	while((count == 0x3fffff)&&(mul_dbuf_cnt<10000)){
		//msleep(10);
		double_buffer_ctrl_reg.drm_multireg_dbuf_set = 1;
		meas0_lineCnt1 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
		meas1_lineCnt1 = IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg);
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
		count = 0x3fffff;
		double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		while((double_buffer_ctrl_reg.drm_multireg_dbuf_set)&& --count){
			double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		}
		if(count==0){
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_set 1 wait timeout !!!\n");
		}
		meas0_lineCnt2 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
		meas1_lineCnt2 = IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg);
		mul_dbuf_cnt++;
	}
	modestate_set_fractional_framesyncByDisp(_channel);

	count = 0x3fffff;
	while((count == 0x3fffff)&&(mul_dbuf_cnt2<10000)){
		double_buffer_ctrl_reg.drm_multireg_dbuf_set = 1;
		meas0_lineCnt1 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
		meas1_lineCnt1 = IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg);
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
		count = 0x3fffff;
		double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		while((double_buffer_ctrl_reg.drm_multireg_dbuf_set)&& --count){
			double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		}
		if(count==0){
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_set 2 wait timeout !!!\n");
		}
		meas0_lineCnt2 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
		meas1_lineCnt2 = IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg);
		mul_dbuf_cnt2++;
	}

	modestate_set_display_timing_gen_clock_divByDisp(_channel);
	count = 0x3fffff;

	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=0;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
	dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
	IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);

	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	while((dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply)&& --count){
		dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	}
	if(count==0){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"dispd_smooth_toggle1 timeout !!!\n");
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 0;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	}
	meas0_lineCnt3 = IoReg_Read32(PPOVERLAY_new_meas0_linecnt_real_reg);
	meas1_lineCnt3 = IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg);

	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
 	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
	db_val = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	modestate_set_display_timing_genByDisp(_channel);//set dvtotal
	Scaler_MEMC_SetInOutFrameRateByDisp(_channel);/*checked*/
	modestate_set_fll_running_flag(_ENABLE);

	if(vbe_disp_decide_memc_mux_bypass() == TRUE)
		Scaler_MEMC_Bypass_On(1);


#if 0
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt1 (%x)\n", meas0_lineCnt1);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt1 (%x)\n", meas1_lineCnt1);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt2 (%x)\n", meas0_lineCnt2);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt2 (%x)\n", meas1_lineCnt2);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas0_lineCnt3 (%x)\n", meas0_lineCnt3);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"meas1_lineCnt3 (%x)\n", meas1_lineCnt3);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"mul_dbuf_cnt (%x)\n", mul_dbuf_cnt);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"mul_dbuf_cnt2 (%x)\n", mul_dbuf_cnt2);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"db_val (%x)\n", db_val);
#endif

#endif
#endif
}

extern platform_info_t platform_info;
unsigned char HAL_VBE_DISP_Initialize(KADP_DISP_PANEL_INFO_T panelInfo)
{
	unsigned char ret=1;
#ifdef CONFIG_RTK_KDRV_RPC
	unsigned long result =0;
#endif
	VIDEO_RPC_VOUT_VODMA_VFLIP_ENABLE *config_data;
	unsigned long vir_addr, vir_addr_noncache;
	unsigned int phy_addr;
//	PANEL_CONFIG_PARAMETER parameter;
//	sfg_sfg_zz_shift_dbg_ctrl_RBUS sfg_zz_shift_dbg_ctrl_reg;
//	pif_lvds_ctrl3_RBUS  lvds_ctrl3;
//	pif_lvds_ctrl0_RBUS lvds_ctrl0;

	down(&VBE_Semaphore);
#if 0
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]HAL_VBE_DISP_Initialize###\n");
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.panel_inch = %x\n", panelInfo.panel_inch);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.panel_bl_type = %x\n", panelInfo.panel_bl_type);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.panel_maker = %x\n", panelInfo.panel_maker);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.led_bar_type = %x\n", panelInfo.led_bar_type);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.panelInterface = %x\n", panelInfo.panelInterface);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.panelResolution = %x\n", panelInfo.panelResolution);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.panel_version = %x\n", panelInfo.panel_version);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.frc_type = %x\n", panelInfo.frc_type);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.cell_type = %x\n", panelInfo.cell_type);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.disp_out_resolution = %x\n", panelInfo.disp_out_resolution);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.lvds_bit_mode = %x\n", panelInfo.lvds_bit_mode);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.lvds_type = %x\n", panelInfo.lvds_type);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.disp_out_lane_bw = %x\n", panelInfo.disp_out_lane_bw);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.panelFrameRate = %x\n", panelInfo.panelFrameRate);
 rtd_printk(KERN_EMERG, TAG_NAME_VBE, "####[KERN]panelInfo.user_specific_option = %x\n", panelInfo.user_specific_option);
#endif

	if(VBE_DISP_Global_Status != VBE_DISP_NOTHING){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"KERN_INFO \r\n VBE_DISP_Initialize has initialized.\n");
		up(&VBE_Semaphore);
		return ret;
	}
#if 0 // ben mark it@ restruct disp info not sync with webos
	memset(&parameter,0,sizeof(PANEL_CONFIG_PARAMETER));

	parameter.iCONFIG_DISP_ACT_STA_HPOS=0;
	parameter.iCONFIG_DISP_ACT_END_HPOS=panelInfo.disp_out_resolution.video_width;
	parameter.iCONFIG_DISP_ACT_STA_VPOS=0;
	parameter.iCONFIG_DISP_ACT_END_VPOS=panelInfo.disp_out_resolution.video_height;
	parameter.iCONFIG_DISPLAY_COLOR_BITS=(panelInfo.lvds_bit_mode)?0:1;  //panelInfo.lvds_bit_mode 0 is 8bit,1 is 10bit
	parameter.iCONFIG_DISPLAY_BITMAPPING_TABLE=(panelInfo.lvds_type)?0:1;  //panelInfo.lvds_type 0 is VESA,1 is JEIDA

	lvds_ctrl0.regValue = IoReg_Read32(PIF_LVDS_CTRL0_reg);
/*
	if(panelInfo.panelInterface==DISP_PANEL_HSLVDS)
	{
		parameter.iCONFIG_PANEL_TYPE=P_HSLVDS_TYPE;
		lvds_ctrl0.plt_lvds_mode=1;    // mLVDS-mode
	}
	else
*/
/*
	if(panelInfo.panelInterface==KADP_DISP_PANEL_EPI)
	{
		parameter.iCONFIG_PANEL_TYPE=P_EPI_TYPE;
		lvds_ctrl0.plt_lvds_mode=2;    //EPI-mode
	}
*/
/*
	else if(panelInfo.panelInterface==DISP_PANEL_Vx1)
	{
		parameter.iCONFIG_PANEL_TYPE=P_VBY1_4K2K;
		lvds_ctrl0.plt_lvds_mode=3;    //Vby1-mode
	}
*/
/*
	else
	{
		parameter.iCONFIG_PANEL_TYPE=P_LVDS_2K1K;
		lvds_ctrl0.plt_lvds_mode=0;    //LVDS-mode
	}
*/
	IoReg_Write32(PIF_LVDS_CTRL0_reg, lvds_ctrl0.regValue);

	Set_PANEL_BL_type(panelInfo.panel_bl_type);
	Set_PANEL_LED_Bar_type(panelInfo.led_bar_type);
	//Set_PANEL_EPI_TYPE(panelInfo.epi_panel_type);
	Set_PANEL_INCH(panelInfo.panel_inch);
	Set_PANEL_MAKER(panelInfo.panel_maker);
	Set_DISP_OSD_Width(panelInfo.disp_out_resolution.osd_width);
	Set_DISP_OSD_Width(panelInfo.disp_out_resolution.osd_height);

	//temp mark :  panelInfo.useInternalFrc;
	//sfg_zz_shift_dbg_ctrl_reg.regValue = IoReg_Read32(SFG_SFG_ZZ_shift_dbg_CTRL_reg);
	//sfg_zz_shift_dbg_ctrl_reg.dout_mode = parameter.iCONFIG_DISPLAY_COLOR_BITS;  //0 is 30 bit,1 is 24 bit
	//IoReg_Write32(SFG_SFG_ZZ_shift_dbg_CTRL_reg, sfg_zz_shift_dbg_ctrl_reg.regValue);

	lvds_ctrl3.regValue = IoReg_Read32(PIF_LVDS_CTRL3_reg);
	lvds_ctrl3.lvds_map = parameter.iCONFIG_DISPLAY_BITMAPPING_TABLE ? 1 : 0;  //0 is JEIDA,1is VESA
	IoReg_Write32(PIF_LVDS_CTRL3_reg, lvds_ctrl3.regValue);
#endif
	vir_addr = (unsigned long)dvr_malloc_uncached_specific(sizeof(VIDEO_RPC_VOUT_VODMA_VFLIP_ENABLE), GFP_DCU1, (void**)&vir_addr_noncache);
	//phy_addr = (unsigned int)virt_to_phys((void*)vir_addr);
	phy_addr = (unsigned int)dvr_to_phys((void*)vir_addr);
	config_data = (VIDEO_RPC_VOUT_VODMA_VFLIP_ENABLE *)vir_addr_noncache;
	config_data->videoPlane = VO_VIDEO_PLANE_V1;
	config_data->enable =Get_PANEL_VFLIP_ENABLE();
#ifdef CONFIG_RTK_KDRV_RPC
	if (RPC_FAIL==send_rpc_command(RPC_VIDEO, VIDEO_RPC_VOUT_ToAgent_ConfigVodmaVFlip,phy_addr, 0, &result))
	{
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"RPC fail!!\n");
		ret=0;
	}
#endif
	dvr_free((void *)vir_addr);
	drvif_scaler3d_set_panel_info(); //send panel info to video fw

	Scaler_Set_EnterFRC_LastLine_FixDclk_DVTotoal_Limit_Enable_Flag(_ENABLE);
	Scaler_Set_EnterFRC_LastLine_FixDclk_DVTotoal_Limit_Upper(Get_PANEL_DISP_VERTICAL_TOTAL_60Hz_MAX());
	Scaler_Set_EnterFRC_LastLine_FixDclk_DVTotoal_Limit_Lower(Get_PANEL_DISP_VERTICAL_TOTAL_60Hz_MIN());
	Scaler_Set_FixLastLine_DVTotoal_Limit_ByVfreq_Enable_Flag(_ENABLE);
	Scaler_Set_FixLastLine_DVTotal_Limit_60Hz_Typical(1125);
	Scaler_Set_FixLastLine_DVTotal_Limit_60Hz_Upper(Get_PANEL_DISP_VERTICAL_TOTAL_60Hz_MAX());
	Scaler_Set_FixLastLine_DVTotal_Limit_60Hz_Lower(Get_PANEL_DISP_VERTICAL_TOTAL_60Hz_MIN());
	Scaler_Set_FixLastLine_DVTotal_Limit_50Hz_Typical(1350);
	Scaler_Set_FixLastLine_DVTotal_Limit_50Hz_Upper(Get_PANEL_DISP_VERTICAL_TOTAL_50Hz_MAX());
	Scaler_Set_FixLastLine_DVTotal_Limit_50Hz_Lower(Get_PANEL_DISP_VERTICAL_TOTAL_50Hz_MIN());

#ifdef CONFIG_ENABLE_FRC_TO_FRAMESYNC_BY_HW
	Scaler_Set_FreeRun_To_FrameSync_By_HW_Enable(_ENABLE);
#else //#ifdef CONFIG_ENABLE_FRC_TO_FRAMESYNC_BY_HW
	Scaler_Set_FreeRun_To_FrameSync_By_HW_Enable(_DISABLE);
#endif //#ifdef CONFIG_ENABLE_FRC_TO_FRAMESYNC_BY_HW
	Scaler_Set_FreeRun_To_FrameSync_By_HW_LineBufferMode_Enable(_ENABLE);
    Scaler_Set_FreeRun_To_FrameSync_By_HW_LineBufferMode_SpeedUp_TimeOut(100);
	Scaler_Set_FreeRun_To_FrameSync_By_HW_SpeedUp(_ENABLE);
	Scaler_Set_FreeRun_To_FrameSync_By_HW_SpeedUp_TimeOut(1000);
	Scaler_Set_FreeRun_To_FrameSync_By_HW_SpeedUp_Porch(22);
/*
	if(Get_DISPLAY_PANEL_OLED_TYPE()== TRUE){
		Scaler_Set_FreeRun_To_FrameSync_By_HW_SpeedUp_ByMcode_HW_CTRL2(_ENABLE);
		Scaler_Set_FreeRun_To_FrameSync_By_HW_SpeedUp_ByMcode_HW_CTRL3(_DISABLE);
	}
	else{
		Scaler_Set_FreeRun_To_FrameSync_By_HW_SpeedUp_ByMcode_HW_CTRL2(_DISABLE);
		Scaler_Set_FreeRun_To_FrameSync_By_HW_SpeedUp_ByMcode_HW_CTRL3(_ENABLE);
	}
*/
	Scaler_Set_FreeRun_To_FrameSync_By_HW_SpeedUp_ByMcode_HW_CTRL2(_DISABLE);
	Scaler_Set_FreeRun_To_FrameSync_By_HW_SpeedUp_ByMcode_HW_CTRL3(_DISABLE);
	Scaler_Set_FreeRun_To_FrameSync_By_HW_SpeedUp_ByMcode_HW_CTRL4(_ENABLE);
	vbe_disp_dynamic_polarity_control_init();
	if((Get_DISPLAY_REFRESH_RATE()==120)&&(Get_DISPLAY_PANEL_TYPE()==P_EPI_TYPE)){
		vbe_disp_dynamic_polarity_control_set_detect_enable(1);
	}
	if(ret)
	{
		VBE_DISP_Global_Status =VBE_DISP_INIT_DONE;
	}

    Set_PANEL_MAKER(panelInfo.panel_maker);
	up(&VBE_Semaphore);
	return ret;
}
unsigned char HAL_VBE_DISP_Uninitialize(void)
{
	down(&VBE_Semaphore);
	if(VBE_DISP_Global_Status != VBE_DISP_INIT_DONE){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n HAL_VBE_DISP_Uninitialize fail. no initialize.\n");
		up(&VBE_Semaphore);
		return 0;
	}
	Panel_releaseParameter();
	//Scaler_ReleaseODMem();
	VBE_DISP_Global_Status =VBE_DISP_NOTHING;
	up(&VBE_Semaphore);
	return 1;
}

unsigned char HAL_VBE_DISP_Resume(KADP_DISP_PANEL_INFO_T panelInfo)
{
	unsigned char ret=1;
	//unsigned long result =0;
	//VIDEO_RPC_VOUT_VODMA_VFLIP_ENABLE *config_data;
	//unsigned int vir_addr, vir_addr_noncache;
	//unsigned int phy_addr;
	//PANEL_CONFIG_PARAMETER parameter;
	//sfg_zz_shift_dbg_ctrl_RBUS sfg_zz_shift_dbg_ctrl_reg;
	//lvds_ctrl3_RBUS  lvds_ctrl3;
	//lvds_ctrl0_RBUS lvds_ctrl0;


	down(&VBE_Semaphore);
/*
	if(VBE_DISP_Global_Status != VBE_DISP_INIT_DONE){
		printk(KERN_INFO "\r\n HAL_VBE_DISP_Resume no initialize.\n");
		up(&VBE_Semaphore);
		return 0;
	}
*/
	printk(KERN_EMERG"[HAL_VBE_DISP_Resume] HAL_VBE_DISP_Resume !\n");
	vbe_disp_resume();

#ifdef VBE_DISP_TCON_SELF_CHECK
	vbe_disp_tcon_lock_self_check();
#ifdef CONFIG_RTK_KDRV_THERMAL_SENSOR
	monitor_rgb_rolling=0; //for run tcon check
#endif
#endif

#if 0
	memset(&parameter,0,sizeof(PANEL_CONFIG_PARAMETER));

	parameter.iCONFIG_DISP_ACT_STA_HPOS=0;
	parameter.iCONFIG_DISP_ACT_END_HPOS=panelInfo.disp_out_resolution.video_width;
	parameter.iCONFIG_DISP_ACT_STA_VPOS=0;
	parameter.iCONFIG_DISP_ACT_END_VPOS=panelInfo.disp_out_resolution.video_height;
	parameter.iCONFIG_DISPLAY_COLOR_BITS=(panelInfo.lvds_bit_mode)?0:1;  //panelInfo.lvds_bit_mode 0 is 8bit,1 is 10bit
	parameter.iCONFIG_DISPLAY_BITMAPPING_TABLE=(panelInfo.lvds_type)?0:1;  //panelInfo.lvds_type 0 is VESA,1 is JEIDA
	lvds_ctrl0.regValue = IoReg_Read32(PIF_LVDS_CTRL0_reg);
	if(panelInfo.panelInterface==DISP_PANEL_HSLVDS)
	{
		parameter.iCONFIG_PANEL_TYPE=P_HSLVDS_TYPE;
		lvds_ctrl0.plt_lvds_mode=1;    // mLVDS-mode
	}
	else if(panelInfo.panelInterface==DISP_PANEL_EPI)
	{
		parameter.iCONFIG_PANEL_TYPE=P_EPI_TYPE;
		lvds_ctrl0.plt_lvds_mode=2;    //EPI-mode
	}
/*
	else if(panelInfo.panelInterface==DISP_PANEL_Vx1)
	{
		parameter.iCONFIG_PANEL_TYPE=P_VBY1_4K2K;
		lvds_ctrl0.plt_lvds_mode=3;    //Vby1-mode
	}
*/
	else
	{
		parameter.iCONFIG_PANEL_TYPE=P_LVDS_2K1K;
		lvds_ctrl0.plt_lvds_mode=0;    //LVDS-mode
	}
	IoReg_Write32(PIF_LVDS_CTRL0_reg, lvds_ctrl0.regValue);

	Set_PANEL_BL_type(panelInfo.panel_bl_type);
	Set_PANEL_LED_Bar_type(panelInfo.led_bar_type);
	Set_PANEL_EPI_TYPE(panelInfo.epi_panel_type);
	Set_PANEL_INCH(panelInfo.panel_inch);
	Set_PANEL_MAKER(panelInfo.panel_maker);
	Set_DISP_OSD_Width(panelInfo.disp_out_resolution.osd_width);
	Set_DISP_OSD_Width(panelInfo.disp_out_resolution.osd_height);

	//temp mark :  panelInfo.useInternalFrc;
	sfg_zz_shift_dbg_ctrl_reg.regValue = IoReg_Read32(SFG_SFG_ZZ_shift_dbg_CTRL_reg);
	sfg_zz_shift_dbg_ctrl_reg.dout_mode = parameter.iCONFIG_DISPLAY_COLOR_BITS;  //0 is 30 bit,1 is 24 bit
	IoReg_Write32(SFG_SFG_ZZ_shift_dbg_CTRL_reg, sfg_zz_shift_dbg_ctrl_reg.regValue);

	lvds_ctrl3.regValue = IoReg_Read32(PIF_LVDS_CTRL3_reg);
	lvds_ctrl3.lvds_map = parameter.iCONFIG_DISPLAY_BITMAPPING_TABLE ? 1 : 0;  //0 is JEIDA,1is VESA
	IoReg_Write32(PIF_LVDS_CTRL3_reg, lvds_ctrl3.regValue);

	vir_addr = (unsigned int)dvr_malloc_uncached_specific(sizeof(VIDEO_RPC_VOUT_VODMA_VFLIP_ENABLE), GFP_DCU1, (void**)&vir_addr_noncache);
	//phy_addr = (unsigned int)virt_to_phys((void*)vir_addr);
	phy_addr = (unsigned int)dvr_to_phys((void*)vir_addr);
	config_data = (VIDEO_RPC_VOUT_VODMA_VFLIP_ENABLE *)vir_addr_noncache;
	config_data->videoPlane = VO_VIDEO_PLANE_V1;
	config_data->enable =Get_PANEL_VFLIP_ENABLE();
#ifdef CONFIG_RTK_KDRV_RPC
	if (RPC_FAIL==send_rpc_command(RPC_VIDEO, VIDEO_RPC_VOUT_ToAgent_ConfigVodmaVFlip,phy_addr, 0, &result))
	{
		printk("RPC fail!!\n");
		ret=0;
	}
#endif
	dvr_free((void *)vir_addr);
	drvif_scaler3d_set_panel_info(); //send panel info to video fw
	if(ret)
	{
		VBE_DISP_Global_Status =VBE_DISP_INIT_DONE;
	}
#endif
    Set_PANEL_MAKER(panelInfo.panel_maker);

	up(&VBE_Semaphore);
	return ret;
}

void HAL_VBE_DISP_Connect(KADP_DISP_WINDOW_T wId)
{
	//do nothing:vsc would do
}
void HAL_VBE_DISP_Disconnect(KADP_DISP_WINDOW_T wId)
{
	//do nothing:vsc would do
}

//extern unsigned char HAL_VT_Finalize(void);
extern void vt_enable_dc2h(unsigned char state);
extern unsigned char get_vt_function(void);

void HAL_VBE_DISP_SetDisplayOutput(BOOLEAN bOnOff)
{
	ppoverlay_display_timing_ctrl1_RBUS display_timing_ctrl1_reg;
	//main_display_control_rsv_RBUS main_display_control_rsv_reg;
	ppoverlay_double_buffer_ctrl_RBUS ppoverlay_double_buffer_ctrl_reg;
	unsigned long flags;//for spin_lock_irqsave
	display_timing_ctrl1_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg);
	//main_display_control_rsv_reg.regValue = IoReg_Read32(PPOVERLAY_Main_Display_Control_RSV_reg);
	ppoverlay_double_buffer_ctrl_reg.regValue=IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);

	if(bOnOff)
	{
		display_timing_ctrl1_reg.disp_en=1;
		IoReg_Write32(PPOVERLAY_Display_Timing_CTRL1_reg,display_timing_ctrl1_reg.regValue);
		//KTASKWBS-8895 : BOE panel power on sequence
		if((Get_DISPLAY_PANEL_TYPE() == P_CEDS)||(Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)){
			msleep(25);
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"HAL_VBE_DISP_SetDisplayOutput. TCON++ (%x)\n", IoReg_Read32(TCON_TCON_IP_EN_reg));
			IoReg_SetBits(TCON_TCON_IP_EN_reg, _BIT0);
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"HAL_VBE_DISP_SetDisplayOutput. TCON-- (%x)\n", IoReg_Read32(TCON_TCON_IP_EN_reg));
		}

		//KTASKWBS-8895/KTASKWBS-9202 : lane power control by this api
		if((Get_DISPLAY_PANEL_TYPE() == P_CEDS)||(Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)||(Get_DISPLAY_PANEL_TYPE() == P_VBY1_4K2K)){
			vbe_disp_lane_power_on();
		}
	}
	else
	{
		//when disable d-domain clock, first enable MEMC output bg in factory mode @Crixus 20151231
		Scaler_MEMC_output_force_bg_enable(_ENABLE);
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"Enable MEMC BG in SetDisplayOutput!!!\n");

		//KTASKWBS-8895 : BOE panel power on sequence
		if((Get_DISPLAY_PANEL_TYPE() == P_CEDS)||(Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)){
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"HAL_VBE_DISP_SetDisplayOutput. TCON++ (%x)\n", IoReg_Read32(TCON_TCON_IP_EN_reg));
			IoReg_ClearBits(TCON_TCON_IP_EN_reg, _BIT0);
			msleep(25);
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"HAL_VBE_DISP_SetDisplayOutput. TCON-- (%x)\n", IoReg_Read32(TCON_TCON_IP_EN_reg));
		}

		//KTASKWBS-8895/KTASKWBS-9202 : lane power control by this api
		if((Get_DISPLAY_PANEL_TYPE() == P_CEDS)||(Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)||(Get_DISPLAY_PANEL_TYPE() == P_VBY1_4K2K)){
		vbe_disp_lane_power_off();
		msleep(25);
		}

		/*need checking dc2h capture status before close dclock, if is capturing do close, or do nothing*/
		if(get_vt_function() == TRUE) /* if VT function already work,stop dc2h when no clock */
			vt_enable_dc2h(FALSE); /*WOSQRTK-13830*/

		display_timing_ctrl1_reg.disp_en=0;
		IoReg_Write32(PPOVERLAY_Display_Timing_CTRL1_reg,display_timing_ctrl1_reg.regValue);
	}
	//IoReg_Write32(PPOVERLAY_Main_Display_Control_RSV_reg,main_display_control_rsv_reg.regValue);
	if(ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_en)
	{
		down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
		spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
		ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_set=1;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg,ppoverlay_double_buffer_ctrl_reg.regValue);
		spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
		up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	}

	if(bOnOff)
	{
		//wait enable d-domain clock, then enable MEMC output bg in factory mode @Crixus 20151231
		//Because intanboot resume will call this function, if instanboot resume, it should be wait resume done.
		if(Scaler_MEMC_Get_instanboot_resume_Done() == 0){
			Scaler_MEMC_output_force_bg_enable(_DISABLE);
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"Disable MEMC BG in SetDisplayOutput!!!\n");
		}
	}

}
void vbe_disp_suspend(void);
void vbe_disp_resume(void);

void HAL_VBE_DISP_SetMute(BOOLEAN bOnOff)
{
	sfg_sfg_force_bg_at_dif_RBUS sfg_force_bg_at_dif_reg;

	/*WaitFor_DEN_STOP();*/
	sfg_force_bg_at_dif_reg.regValue = IoReg_Read32(SFG_SFG_FORCE_BG_AT_DIF_reg);
	if(bOnOff){
		sfg_force_bg_at_dif_reg.en_force_bg_dif = 1;  //osd and video all mute
		if(Get_DISPLAY_PANEL_OLED_TYPE() == TRUE){
			oled_resume_eit_flag = TRUE;
		}
	}else{
		sfg_force_bg_at_dif_reg.en_force_bg_dif = 0;
		if(Get_DISPLAY_PANEL_OLED_TYPE() == TRUE){
			oled_resume_eit_flag = FALSE;
		}
	}
	IoReg_Write32(SFG_SFG_FORCE_BG_AT_DIF_reg, sfg_force_bg_at_dif_reg.regValue);
}

//[RTKREQ-819] u16Percent=0.1% , u16Period = 0.1k
//- If percent is 11, driver set SSC percent set 1.1 %.
//- If Period is 253, driver set SSC percent set 25.3 KHz.
void HAL_VBE_DISP_SetSpreadSpectrum(BOOLEAN bEnable, UINT16 u16Percent, UINT16 u16Period)
{
	UINT16 dclk_sscg_range = 0;
	pll27x_reg_sys_dclkss_RBUS dclkss_reg;
	pll27x_reg_sys_pll_disp1_RBUS pll_disp1_reg;
	pll27x_reg_pll_ssc0_RBUS pll_ssc0_reg;
	pll27x_reg_pll_ssc3_RBUS pll_ssc3_reg;
	pll27x_reg_pll_ssc4_RBUS pll_ssc4_reg;
	pll27x_reg_pll_ssc5_RBUS pll_ssc5_reg;
	pll27x_reg_sys_pll_disp3_RBUS pll27x_reg_sys_pll_disp3_reg;
	UINT32 m_code, f_code, n_code, n_code_ssc, f_code_ssc;
	UINT32 temp, temp_ssc;
	UINT32 dot_gran=4, gran_est;
	UINT32 dpll_clk, dpll_clk_ssc, ssc_clk, step;
	UINT32 ss_freq = 54*1000; //54K
	UINT32 cnt=0;
	//unsigned char panel_type=0;
	UINT32 dclk_Temp;
	UINT32 ulFreq=0;
	UINT32 div=0;

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[SSCG] bEnable=%d, u16Percent=%d, u16Period=%d\n", bEnable, u16Percent, u16Period);

	if((u16Period>=100)&&(u16Period<=1000))
		ss_freq = u16Period*100;

	dclk_sscg_range = u16Percent;

	ulFreq = Get_DISPLAY_CLOCK_TYPICAL();

	if((ulFreq>=400*1000000) && (ulFreq <= 700*1000000)){
		div = 1;
	}else if((ulFreq>=200*1000000) && (ulFreq <= 350*1000000)){
		div = 2;
		ulFreq = ulFreq*2;
	}else if((ulFreq>=100*1000000) && (ulFreq <= 175*1000000)){
		div = 4;
		ulFreq = ulFreq*4;
	}else if((ulFreq>=60*1000000) && (ulFreq <= 80*1000000)){
		 div = 8;
		 ulFreq = ulFreq*8;
	}else{
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\n Error Dclk Range!\n");
	}
	n_code = 1;
	dclk_Temp = ((ulFreq*(n_code+2)) /(27*100));
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE, "dclk_Temp:%d\n", dclk_Temp);
	m_code = (dclk_Temp/10000)-3;
	f_code = ((dclk_Temp % 10000)*2048)/10000;	// offset
	pll_disp1_reg.regValue = IoReg_Read32(PLL27X_REG_SYS_PLL_DISP1_reg);
	pll_ssc0_reg.regValue = IoReg_Read32(PLL27X_REG_PLL_SSC0_reg);
	pll_ssc3_reg.regValue = IoReg_Read32(PLL27X_REG_PLL_SSC3_reg);
	pll_ssc4_reg.regValue = IoReg_Read32(PLL27X_REG_PLL_SSC4_reg);
	if((bEnable == 0) || (u16Percent ==0) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) || (Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)) {
		//set default dclk freq.
		   pll_disp1_reg.dpll_m = m_code;
		pll_disp1_reg.dpll_n = n_code;
		pll_ssc0_reg.fcode_t_ssc = f_code;
		pll_ssc0_reg.oc_en = 0;
		pll_ssc0_reg.oc_step_set = 0x200;
		rtd_outl(PLL27X_REG_SYS_PLL_DISP1_reg, pll_disp1_reg.regValue);
		rtd_outl(PLL27X_REG_PLL_SSC0_reg, pll_ssc0_reg.regValue);
		pll_ssc0_reg.oc_en = 1;
		rtd_outl(PLL27X_REG_PLL_SSC0_reg, pll_ssc0_reg.regValue);
		cnt=10;
		do{
			pll_ssc5_reg.regValue = rtd_inl(PLL27X_REG_PLL_SSC5_reg);
			mdelay(1);
		}while((pll_ssc5_reg.oc_done != 1) && (cnt--));
		pll_ssc0_reg.oc_en = 0;
		rtd_outl(PLL27X_REG_PLL_SSC0_reg, pll_ssc0_reg.regValue);
		//disable sscg
		pll_ssc4_reg.en_ssc = 0;
		rtd_outl(PLL27X_REG_PLL_SSC4_reg, pll_ssc4_reg.regValue);
		dclkss_reg.regValue = rtd_inl(PLL27X_REG_SYS_DCLKSS_reg);
		dclkss_reg.dclk_ss_load = 0;
		dclkss_reg.dclk_ss_en = 0;
		rtd_outl(PLL27X_REG_SYS_DCLKSS_reg, dclkss_reg.regValue);
		return;
	}

	temp = ((m_code+3)*10000+ ((f_code*10000)/2048));
	temp = temp+ (temp*(dclk_sscg_range*10)/2)/10000;
	m_code = temp/10000-3;
	f_code = ((temp%10000)*2048)/10000;
	temp_ssc = (temp*(1000-dclk_sscg_range))/1000;
	n_code_ssc = temp_ssc/10000-3;
	f_code_ssc = ((temp_ssc%10000)*2048)/10000;

	pll_disp1_reg.dpll_m = m_code;
	pll_disp1_reg.dpll_n = n_code;
	pll_ssc0_reg.fcode_t_ssc = f_code;
	pll_ssc3_reg.ncode_ssc = n_code_ssc;
	pll_ssc3_reg.fcode_ssc = f_code_ssc;
	pll_ssc0_reg.oc_en = 0;
	pll_ssc0_reg.oc_step_set = 0x200;
	rtd_outl(PLL27X_REG_SYS_PLL_DISP1_reg, pll_disp1_reg.regValue);
	IoReg_Write32(PLL27X_REG_PLL_SSC0_reg, pll_ssc0_reg.regValue);
	IoReg_Write32(PLL27X_REG_PLL_SSC3_reg, pll_ssc3_reg.regValue);

	pll27x_reg_sys_pll_disp3_reg.regValue = rtd_inl(PLL27X_REG_SYS_PLL_DISP3_reg);
	if(div == 1)
		pll27x_reg_sys_pll_disp3_reg.dpll_o = 0;
	else if(div == 2)
		pll27x_reg_sys_pll_disp3_reg.dpll_o = 1;
	else if(div == 4)
		pll27x_reg_sys_pll_disp3_reg.dpll_o = 2;
	else if(div == 8)
		pll27x_reg_sys_pll_disp3_reg.dpll_o = 3;
	else
		pll27x_reg_sys_pll_disp3_reg.dpll_o = 0;
	rtd_outl(PLL27X_REG_SYS_PLL_DISP3_reg, pll27x_reg_sys_pll_disp3_reg.regValue);

	temp= 0;
	dpll_clk = (((m_code+3)*1000000 + (f_code*1000000)/2048)*27) / (n_code+2);
		dpll_clk_ssc = (dpll_clk/1000*(1000 - dclk_sscg_range));
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE, "\n dpll_clk:%d, dpll_clk_ssc:%d \n", dpll_clk, dpll_clk_ssc);
	temp = (10000*((m_code-n_code_ssc)*2048+f_code-f_code_ssc)/2/2048 + (n_code_ssc+3)*10000);
	if((temp != 0) && (div != 0))
		ssc_clk = (dpll_clk_ssc/div)/temp;
	else
	{
		if(temp == 0)
		rtd_printk(KERN_ERR, TAG_NAME_VBE,"\n [Error]temp should not be zero!!!! \n");

		if(div == 0)
		rtd_printk(KERN_ERR, TAG_NAME_VBE,"\n [Error]div should not be zero!!!! \n");

		return;

	}
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE, "\n temp:%d, ssc_clk:%d \n", temp, dpll_clk_ssc/temp);
	if(ss_freq != 0)
		step =	ssc_clk*10000 / ss_freq;
	else {
		rtd_printk(KERN_ERR, TAG_NAME_VBE,"\n [Error]ss_freq should not be zero!!!! \n");
		return;
	}
	if(f_code>=f_code_ssc)
		gran_est = (((m_code-n_code_ssc)*2048+f_code-f_code_ssc)*2*(1<<(15-dot_gran))) /step;
	else
		gran_est = (((m_code-1-n_code_ssc)*2048+ (2048+f_code)-f_code_ssc)*2*(1<<(15-dot_gran))) /step;

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE, "m_code:%d, n_code:%d, f_code:%d, n_code_ssc:%d, f_code_ssc:%d\n", m_code , n_code, f_code, n_code_ssc, f_code_ssc);
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE, "\n step:%d, gran_est:%d\n", step , gran_est);

	pll_ssc4_reg.dot_gran = dot_gran;
	pll_ssc4_reg.gran_auto_rst = 1;
	pll_ssc4_reg.gran_est = gran_est;
	IoReg_Write32(PLL27X_REG_PLL_SSC4_reg, pll_ssc4_reg.regValue);

	pll_ssc0_reg.oc_en = 1;
	IoReg_Write32(PLL27X_REG_PLL_SSC0_reg, pll_ssc0_reg.regValue);

	cnt=10;
	do{
		pll_ssc5_reg.regValue = IoReg_Read32(PLL27X_REG_PLL_SSC5_reg);
		msleep(10);
	}while((pll_ssc5_reg.oc_done != 1) && (cnt--));

	pll_ssc0_reg.oc_en = 0;
	IoReg_Write32(PLL27X_REG_PLL_SSC0_reg, pll_ssc0_reg.regValue);
	pll_ssc4_reg.en_ssc = 1;
	IoReg_Write32(PLL27X_REG_PLL_SSC4_reg, pll_ssc4_reg.regValue);


	dclkss_reg.regValue = IoReg_Read32(PLL27X_REG_SYS_DCLKSS_reg);
	dclkss_reg.dclk_ss_load = _ENABLE;
	dclkss_reg.dclk_ss_en = _ENABLE;
	IoReg_Write32(PLL27X_REG_SYS_DCLKSS_reg, dclkss_reg.regValue);

}

unsigned char HAL_VBE_DISP_SetVideoMirror(BOOLEAN bIsH,BOOLEAN bIsV)
{
#ifdef CONFIG_RTK_KDRV_RPC
	unsigned long result =0;
#endif
	VIDEO_RPC_VOUT_VODMA_VFLIP_ENABLE *config_data;
	unsigned long vir_addr, vir_addr_noncache;
	unsigned int phy_addr;
	sfg_sfg_ctrl_0_RBUS sfg_ctrl_0_reg;
	sfg_ctrl_0_reg.regValue = IoReg_Read32(SFG_SFG_CTRL_0_reg);
	 //hflip
	if(bIsH)
	{
		sfg_ctrl_0_reg.h_flip_en = 1;

	}
	else
	{
		sfg_ctrl_0_reg.h_flip_en = 0;
	}
	if((Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)||(Get_DISPLAY_PANEL_TYPE() == P_CEDS)){
		//EPI V16DRD Horizontal need hflip, so dirty patch it.
		sfg_ctrl_0_reg.h_flip_en = !sfg_ctrl_0_reg.h_flip_en;
	}
	IoReg_Write32(SFG_SFG_CTRL_0_reg, sfg_ctrl_0_reg.regValue);

	//vflip
	Set_Mirror_VFLIP_ENABLE(bIsV);
	vir_addr = (unsigned long)dvr_malloc_uncached_specific(sizeof(VIDEO_RPC_VOUT_VODMA_VFLIP_ENABLE), GFP_DCU1, (void**)&vir_addr_noncache);
	//phy_addr = (unsigned int)virt_to_phys((void*)vir_addr);
	phy_addr = (unsigned int)dvr_to_phys((void*)vir_addr);
	config_data = (VIDEO_RPC_VOUT_VODMA_VFLIP_ENABLE *)vir_addr_noncache;
	config_data->videoPlane = VO_VIDEO_PLANE_V1;
	config_data->enable =bIsV;
#ifdef CONFIG_RTK_KDRV_RPC
	if (RPC_FAIL==send_rpc_command(RPC_VIDEO, VIDEO_RPC_VOUT_ToAgent_ConfigVodmaVFlip,phy_addr, 0, &result))
	{
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"RPC fail!!\n");
		dvr_free((void *)vir_addr);
		return FALSE;
	}
#endif
	dvr_free((void *)vir_addr);
	drvif_scaler3d_set_panel_info(); //send panel info to video fw
	return TRUE;

}

void HAL_VBE_DISP_SetDisplayFormat(KADP_DISP_PANEL_ATTRIBUTE_T * pPanelAttr,UINT8 framerate)
{
//	sfg_sfg_zz_shift_dbg_ctrl_RBUS sfg_zz_shift_dbg_ctrl_reg;
//	pif_lvds_ctrl3_RBUS  lvds_ctrl3;
//	pif_lvds_ctrl0_RBUS lvds_ctrl0;
	unsigned int panel_width,panel_height;
	PANEL_CONFIG_PARAMETER parameter;
	STRUCT_PANEL_SPECIAL_SETTING panel_special_para;
	down(&VBE_Semaphore);
	panel_width=(pPanelAttr->panelResolution>>12)&0xffff;
	panel_height=pPanelAttr->panelResolution&0xfff;

	memset(&parameter,0,sizeof(PANEL_CONFIG_PARAMETER));
#if 0 // no used , because decide by bootcode
	lvds_ctrl0.regValue = IoReg_Read32(PIF_LVDS_CTRL0_reg);
/*
	if(pPanelAttr->ePanelInterface==DISP_PANEL_HSLVDS)
	{
		parameter.iCONFIG_PANEL_TYPE=P_HSLVDS_TYPE;
		lvds_ctrl0.plt_lvds_mode= 1;
	}
	else
*/
	if(pPanelAttr->ePanelInterface==DISP_PANEL_EPI)
	{
		parameter.iCONFIG_PANEL_TYPE=P_EPI_TYPE;
		lvds_ctrl0.plt_lvds_mode = 2;    /*EPI-mode*/
	}
	else if(pPanelAttr->ePanelInterface==DISP_PANEL_Vx1)
	{
		parameter.iCONFIG_PANEL_TYPE=P_VBY1_4K2K;
			lvds_ctrl0.plt_lvds_mode = 3;	 /*Vby1-mode*/
	}
	else
	{
		parameter.iCONFIG_PANEL_TYPE=P_LVDS_2K1K;
	}
	IoReg_Write32(PIF_LVDS_CTRL0_reg, lvds_ctrl0.regValue);
#endif
	parameter.iCONFIG_DISPLAY_PORT=pPanelAttr->eLVDSPixel;
	parameter.iCONFIG_DISPLAY_BITMAPPING_TABLE=(pPanelAttr->eLVDSSelect)?0:1;  //pPanelAttr.eLVDSSelect 0 is VESA,1 is JEIDA
	parameter.iCONFIG_DISPLAY_COLOR_BITS=(pPanelAttr->eColorDepth)?0:1;   //pPanelAttr.eColorDepth 0 is 8bit,1 is 10bit
	parameter.iCONFIG_DISPLAY_HORIZONTAL_SYNC_NORMAL=1;
	parameter.iCONFIG_DISPLAY_VERTICAL_SYNC_NORMAL=1;

	parameter.iCONFIG_DISP_ACT_STA_HPOS=0;
	parameter.iCONFIG_DISP_ACT_END_HPOS=panel_width;
	parameter.iCONFIG_DISP_ACT_STA_VPOS=0;
	parameter.iCONFIG_DISP_ACT_END_VPOS=panel_height;
	parameter.iCONFIG_DISP_HORIZONTAL_TOTAL=pPanelAttr->horizTypPeriod; //Dh total need as even

	parameter.iCONFIG_DISPLAY_REFRESH_RATE=framerate;
	if(parameter.iCONFIG_PANEL_TYPE==P_LVDS_2K1K)
	{
		if(parameter.iCONFIG_DISPLAY_PORT)
		{
			parameter.iCONFIG_DISPLAY_CLOCK_MIN=126;
			parameter.iCONFIG_DISPLAY_CLOCK_MAX=154;
		}
		else
		{
			parameter.iCONFIG_DISPLAY_CLOCK_MIN=50;
			parameter.iCONFIG_DISPLAY_CLOCK_MAX=85;
		}
	}
	else if((parameter.iCONFIG_PANEL_TYPE==P_EPI_TYPE)||(parameter.iCONFIG_PANEL_TYPE==P_VBY1_4K2K))
	{  //don't use ,fix 297MHz
		parameter.iCONFIG_DISPLAY_CLOCK_MIN=126;
		parameter.iCONFIG_DISPLAY_CLOCK_MAX=154;
	}
	else
	{
		parameter.iCONFIG_DISPLAY_CLOCK_MIN=126;
		parameter.iCONFIG_DISPLAY_CLOCK_MAX=154;
	}
	parameter.iCONFIG_DISP_VERTICAL_TOTAL_50Hz_MIN=pPanelAttr->vertBackPorch50Hz;
	parameter.iCONFIG_DISP_VERTICAL_TOTAL_50Hz_MAX=pPanelAttr->vertTypPeriod50Hz;
	parameter.iCONFIG_DISP_VERTICAL_TOTAL_60Hz_MIN=pPanelAttr->vertBackPorch60Hz;
	parameter.iCONFIG_DISP_VERTICAL_TOTAL_60Hz_MAX=pPanelAttr->vertTypPeriod60Hz;

	if(framerate==48)
	{
		parameter.iCONFIG_DISP_VERTICAL_TOTAL=pPanelAttr->vertTypPeriod48Hz;
		parameter.iCONFIG_DISPLAY_CLOCK_TYPICAL=framerate*pPanelAttr->horizTypPeriod*pPanelAttr->vertTypPeriod48Hz;
		parameter.iCONFIG_DISP_DEN_STA_VPOS=pPanelAttr->vertBackPorch48Hz;
		parameter.iCONFIG_DISP_DEN_END_VPOS=pPanelAttr->vertBackPorch48Hz+panel_height;
		parameter.iCONFIG_DISP_VSYNC_LENGTH=pPanelAttr->vertSyncWidth48Hz;
		parameter.iCONFIG_DISP_HSYNC_WIDTH =pPanelAttr->horizSyncWidth48Hz;
		parameter.iCONFIG_DISP_DEN_STA_HPOS=pPanelAttr->horizBackPorch48Hz;
		parameter.iCONFIG_DISP_DEN_END_HPOS=pPanelAttr->horizBackPorch48Hz+panel_width;
	}
	else if(framerate==50)
	{
		parameter.iCONFIG_DISP_VERTICAL_TOTAL=pPanelAttr->vertTypPeriod50Hz;
		parameter.iCONFIG_DISPLAY_CLOCK_TYPICAL=framerate*pPanelAttr->horizTypPeriod*pPanelAttr->vertTypPeriod50Hz;
		parameter.iCONFIG_DISP_DEN_STA_VPOS=pPanelAttr->vertBackPorch50Hz;
		parameter.iCONFIG_DISP_DEN_END_VPOS=pPanelAttr->vertBackPorch50Hz+panel_height;
		parameter.iCONFIG_DISP_VSYNC_LENGTH=pPanelAttr->vertSyncWidth50Hz;
		parameter.iCONFIG_DISP_HSYNC_WIDTH =pPanelAttr->horizSyncWidth50Hz;
		parameter.iCONFIG_DISP_DEN_STA_HPOS=pPanelAttr->horizBackPorch50Hz;
		parameter.iCONFIG_DISP_DEN_END_HPOS=pPanelAttr->horizBackPorch50Hz+panel_width;
	}
	else
	{
		parameter.iCONFIG_DISP_VERTICAL_TOTAL=pPanelAttr->vertTypPeriod60Hz;
		parameter.iCONFIG_DISPLAY_CLOCK_TYPICAL=framerate*pPanelAttr->horizTypPeriod*pPanelAttr->vertTypPeriod60Hz;
		parameter.iCONFIG_DISP_DEN_STA_VPOS=pPanelAttr->vertBackPorch60Hz;
		parameter.iCONFIG_DISP_DEN_END_VPOS=pPanelAttr->vertBackPorch60Hz+panel_height;
		parameter.iCONFIG_DISP_VSYNC_LENGTH=pPanelAttr->vertSyncWidth60Hz;
		parameter.iCONFIG_DISP_HSYNC_WIDTH =pPanelAttr->horizSyncWidth60Hz;
		parameter.iCONFIG_DISP_DEN_STA_HPOS=pPanelAttr->horizBackPorch60Hz;
		parameter.iCONFIG_DISP_DEN_END_HPOS=pPanelAttr->horizBackPorch60Hz+panel_width;
	}

	parameter.iCONFIG_DISP_HSYNC_LASTLINE=pPanelAttr->horizTypPeriod-1;

	parameter.iVFLIP=Get_Mirror_VFLIP_ENABLE();
//	Panel_InitParameter(&parameter);

	Set_PANEL_INCH(pPanelAttr->ePanelInch);
	Set_PANEL_MAKER(pPanelAttr->ePanelType);
	panel_special_para.HBackPorch48Hz=pPanelAttr->horizBackPorch48Hz;
	panel_special_para.HSyncWidth48Hz=pPanelAttr->horizSyncWidth48Hz;
	panel_special_para.VTypPeriod48Hz=pPanelAttr->vertTypPeriod48Hz;
	panel_special_para.VBackPorch48Hz=pPanelAttr->vertBackPorch48Hz;
	panel_special_para.VSyncWidth48Hz=pPanelAttr->vertSyncWidth48Hz;

	panel_special_para.HBackPorch50Hz=pPanelAttr->horizBackPorch50Hz;
	panel_special_para.HSyncWidth50Hz=pPanelAttr->horizSyncWidth50Hz;
	panel_special_para.VTypPeriod50Hz=pPanelAttr->vertTypPeriod50Hz;
	panel_special_para.VBackPorch50Hz=pPanelAttr->vertBackPorch50Hz;
	panel_special_para.VSyncWidth50Hz=pPanelAttr->vertSyncWidth50Hz;

	panel_special_para.HBackPorch60Hz=pPanelAttr->horizBackPorch60Hz;
	panel_special_para.HSyncWidth60Hz=pPanelAttr->horizSyncWidth60Hz;
	panel_special_para.VTypPeriod60Hz=pPanelAttr->vertTypPeriod60Hz;
	panel_special_para.VBackPorch60Hz=pPanelAttr->vertBackPorch60Hz;
	panel_special_para.VSyncWidth60Hz=pPanelAttr->vertSyncWidth60Hz;

#if 0
		sfg_zz_shift_dbg_ctrl_reg.regValue = IoReg_Read32(SFG_SFG_ZZ_shift_dbg_CTRL_reg);
		sfg_zz_shift_dbg_ctrl_reg.dout_mode = parameter.iCONFIG_DISPLAY_COLOR_BITS;
		IoReg_Write32(SFG_SFG_ZZ_shift_dbg_CTRL_reg, sfg_zz_shift_dbg_ctrl_reg.regValue);

		lvds_ctrl3.regValue = IoReg_Read32(PIF_LVDS_CTRL3_reg);
		lvds_ctrl3.lvds_map = parameter.iCONFIG_DISPLAY_BITMAPPING_TABLE;
		//lvds_ctrl3.lvds_map = Get_DISPLAY_BITMAPPING_TABLE()?1:0;  //0 is JEIDA,1is VESA
		IoReg_Write32(PIF_LVDS_CTRL3_reg, lvds_ctrl3.regValue);
#endif
#if 0

	drvif_scaler3d_set_panel_info(); //send panel info to video fw

	Scaler_Set_EnterFRC_LastLine_FixDclk_DVTotoal_Limit_Enable_Flag(_ENABLE);
	Scaler_Set_EnterFRC_LastLine_FixDclk_DVTotoal_Limit_Upper(Get_PANEL_DISP_VERTICAL_TOTAL_60Hz_MAX());
	Scaler_Set_EnterFRC_LastLine_FixDclk_DVTotoal_Limit_Lower(Get_PANEL_DISP_VERTICAL_TOTAL_60Hz_MIN());
	Scaler_Set_FixLastLine_DVTotoal_Limit_ByVfreq_Enable_Flag(_ENABLE);
	Scaler_Set_FixLastLine_DVTotal_Limit_60Hz_Typical(1125);
	Scaler_Set_FixLastLine_DVTotal_Limit_60Hz_Upper(Get_PANEL_DISP_VERTICAL_TOTAL_60Hz_MAX());
	Scaler_Set_FixLastLine_DVTotal_Limit_60Hz_Lower(Get_PANEL_DISP_VERTICAL_TOTAL_60Hz_MIN());
	Scaler_Set_FixLastLine_DVTotal_Limit_50Hz_Typical(1350);
	Scaler_Set_FixLastLine_DVTotal_Limit_50Hz_Upper(Get_PANEL_DISP_VERTICAL_TOTAL_50Hz_MAX());
	Scaler_Set_FixLastLine_DVTotal_Limit_50Hz_Lower(Get_PANEL_DISP_VERTICAL_TOTAL_50Hz_MIN());
#endif
	up(&VBE_Semaphore);
}

extern unsigned char rtk_rerun_scaler(SCALER_DISP_CHANNEL channel);

void HAL_VBE_DISP_SetFrameRate(BOOLEAN isForceFreeRun,UINT8 frameRates)
{
	unsigned int vtotal = 0;
	ppoverlay_dv_total_RBUS dv_total_reg;
	ppoverlay_display_timing_ctrl1_RBUS display_timing_ctrl1_reg;

	ppoverlay_dispd_smooth_toggle1_RBUS	dispd_smooth_toggle1_reg;
	ppoverlay_dispd_stage1_sm_ctrl_RBUS 	dispd_stage1_sm_ctrl_reg;
	ppoverlay_dtg_m_multiple_vsync_RBUS   dtg_m_multiple_vsync_reg;
	ppoverlay_dtg_frame_cnt1_RBUS dtg_frame_cnt1_reg;
	unsigned int timeout = 0;
	unsigned char frame_idicator=0;

	down(&VBE_Semaphore);

	if(isForceFreeRun)
	{
		Disp_Set_framerate(frameRates);
		display_timing_ctrl1_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg);
		if(Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC))
		{
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE, "data fs do free run need to restart\n");
			Disp_Enable_isForceFreeRun(isForceFreeRun);
			rtk_rerun_scaler(SLR_MAIN_DISPLAY);
			rtk_rerun_scaler(SLR_SUB_DISPLAY);
		}
		else
		{

			modestate_decide_pixel_mode();
			Scaler_DispSetInputInfo(SLR_INPUT_FRAC_FS_REMOVE_RATIO, 1);

			if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_1_PIXEL){ //60hz
				if(frameRates == 48){
					Scaler_DispSetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ, 48);
				}else if(frameRates == 50){
					Scaler_DispSetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ, 50);
				}else if(frameRates == 60){
					Scaler_DispSetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ, 60);
				}else{
					rtd_printk(KERN_ERR, TAG_NAME_VBE,"[%s]Set Framerate (%d) error. Reset to 60Hz\n", __FUNCTION__, frameRates);
					Scaler_DispSetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ, 60);
				}
			}else{
				if((frameRates == 50)||(frameRates == 100)){
					Scaler_DispSetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ, 50);
				}else if((frameRates == 60)||(frameRates == 120)){
					Scaler_DispSetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ, 60);
				}else{
					rtd_printk(KERN_ERR, TAG_NAME_VBE,"[%s]Set Framerate (%d) error. Reset to 120Hz\n", __FUNCTION__, frameRates);
					Scaler_DispSetInputInfo(SLR_INPUT_DTG_MASTER_V_FREQ, 60);
				}
			}

			drivf_scaler_reset_freerun();
			modestate_set_fll_running_flag(_DISABLE);
			modestate_disp_flow_double_buf_enable(_ENABLE);

			dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
			dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 1;
			IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);

			dtg_m_multiple_vsync_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_M_multiple_vsync_reg);
			frame_idicator = dtg_m_multiple_vsync_reg.dtg_m_multiple_vsync;
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"*uzudtg_remove_half_ivs:%d\n", frame_idicator);

			if(frame_idicator > 0){ 	// run frame check
				timeout = 0xa0000; //100ms, 5 frame.
				dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
				while((dtg_frame_cnt1_reg.uzudtg_input_frame_cnt!= (frame_idicator-1))&& --timeout){
					dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
				}
				if(timeout == 0)
					rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][%d]count timeout !!!\n", __FUNCTION__, __LINE__);
				//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"1. frame_idicator:%d\n", (IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg)&0x3f000000)>>24);
				timeout = 0x25000; //20ms, 1 frame.
				//make sure that we can have a full porch apply timing change settings
				while((dtg_frame_cnt1_reg.uzudtg_input_frame_cnt!= frame_idicator)&& --timeout){
					dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
				}
				if(timeout == 0)
					rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][%d]count timeout !!!\n", __FUNCTION__, __LINE__);
				//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"2. frame_idicator:%d\n", (IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg)&0x3f000000)>>24);
			}
			modestate_set_display_timing_gen_clock_div();
			modestate_set_fractional_framesync();

			timeout = 0x25000;	//20ms, 1 frame.
			//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"+++uzudtg line_cnt:%d\n", (IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg)&0x0fff0000)>>16);
			dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
			IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
			do{
				dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
			}while((dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply==1) && (--timeout));
			//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"---uzudtg line_cnt:%d\n", (IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg)&0x0fff0000)>>16);

			if(timeout==0){
				rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][%d]WARNING! wait dispd_stage1_smooth_toggle_apply timeout!\n", __FUNCTION__, __LINE__);
				dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 0;
				IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
				dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
				dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
				IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
				dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
				IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
			}else{
				rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[%s][%d] wait dispd_stage1_smooth_toggle_apply ok!\n", __FUNCTION__, __LINE__);
				dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
				dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
				IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
			}
			fw_scaler_dtg_double_buffer_apply();
			modestate_disp_flow_double_buf_enable(_DISABLE);
			modestate_set_display_timing_gen();

		}
	}
	else
	{
		if(display_timing_ctrl1_reg.disp_fsync_en==0) //timing free run
		{
			if(!vtotal_measure)
			{
				vtotal_measure=Get_DISP_VERTICAL_TOTAL()-1;
			}
			/*WaitFor_DEN_STOP();*/
			fw_scaler_dtg_double_buffer_enable(1);
			dv_total_reg.regValue = IoReg_Read32(PPOVERLAY_DV_total_reg);
			dv_total_reg.dv_total = vtotal_measure;
			IoReg_Write32(PPOVERLAY_DV_total_reg, dv_total_reg.regValue);
			fw_scaler_dtg_double_buffer_apply();
		//	fw_scaler_dtg_double_buffer_enable(0);
			drvif_scaler_set_display_mode(DISPLAY_MODE_FRAME_SYNC);
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"framesync:DVTotal:%x, 8014:%x\n", vtotal, IoReg_Read32(PPOVERLAY_DV_total_reg));
		}
	}
	up(&VBE_Semaphore);
}
#define XTAL_FREQ 27000000
#define IVS_XTAL_CNT 1

void HAL_VBE_DISP_GetOutputFrameRate(UINT8* pframeRates)
{
	ppoverlay_memcdtg_dvs_cnt_RBUS memcdtg_dvs_cnt_reg;
	unsigned int vSyncFreq = 0;

	down(&VBE_Semaphore);

	memcdtg_dvs_cnt_reg.regValue = IoReg_Read32(PPOVERLAY_memcdtg_DVS_cnt_reg);
       vSyncFreq = 270000000 / (memcdtg_dvs_cnt_reg.memcdtg_dvs_cnt);
	if((vSyncFreq%10) >5)
		*pframeRates = (vSyncFreq/10)+1;
	else
		*pframeRates = (vSyncFreq/10);

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"Get output frame rate : %d \n", *pframeRates);

	up(&VBE_Semaphore);

#if 0	//fix me later by ben.
	unsigned int vSyncFreq = 0;
	display_timing_ctrl1_RBUS display_timing_ctrl1_reg;
	dv_total_RBUS dv_total_reg;
	dh_total_last_line_length_RBUS dh_total_last_line_length_reg;
	unsigned int dclkVal=0;
	unsigned int ivs_freq=0;
	unsigned int ivs_cnt=0;
	unsigned char ivs_freq_1=0;

	down(&VBE_Semaphore);
	display_timing_ctrl1_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg);

	if((display_timing_ctrl1_reg.disp_frc_fsync == 1)&&(display_timing_ctrl1_reg.disp_fsync_en == 1)){	//framesync timing
		framesync_wait_vdc_stable();
		ivs_cnt = ((UINT32) framesync_new_fixlastline_get_stable_xtal_cnt(IVS_XTAL_CNT));
		ivs_freq = (((UINT32) XTAL_FREQ * 100) / ivs_cnt);
	//	vSyncFreq = scalerdisplay_get_framerate(_TYPE_IVS);
		ivs_freq_1 =ivs_freq%100;
		if(ivs_freq_1>=90) //measure value would like 2390 or 2399
		{
			ivs_freq=ivs_freq+(100-ivs_freq_1);
		}
		vSyncFreq=ivs_freq/100;
		if(display_timing_ctrl1_reg.multiple_dvs == 1){
			vSyncFreq = vSyncFreq*2;
		}
	}
	else
	{	// free run timing
		dclkVal= scalerdisplay_get_dclk();
		dv_total_reg.regValue = IoReg_Read32(PPOVERLAY_DV_total_reg);
		dh_total_last_line_length_reg.regValue = IoReg_Read32(PPOVERLAY_DH_Total_Last_Line_Length_reg);

		vSyncFreq = ((dclkVal/dh_total_last_line_length_reg.dh_total)/(dv_total_reg.dv_total));
		if(display_timing_ctrl1_reg.multiple_dvs == 1){
			vSyncFreq = vSyncFreq*2;
		}
	}
	printk("Get output frame rate : %d \n", vSyncFreq);
	*pframeRates=vSyncFreq;
	up(&VBE_Semaphore);
#endif
}

void HAL_VBE_DISP_SetBackgroundColor(UINT8 red,UINT8 green,UINT8 blue)
{
	unsigned int color_r, color_b, color_g;

	color_r = red<<8;
	color_g = green<<8;
	color_b = blue<<8;

	drvif_scalerdisplay_set_bg_color(SLR_MAIN_DISPLAY, _DISPLAY_BG,  color_r, color_g, color_b);
	/*drvif_scalerDTG_set_bg_color(red,green,blue,1);*/
}

#ifdef CONFIG_ORBIT_PIXEL_SHIFT_ALGO
unsigned char vbe_disp_oled_orbit_enable=FALSE;
unsigned char vbe_disp_oled_orbit_mode=FALSE;
extern unsigned int ORBIT_TIME;//default 3min
extern void ScalerForceUpdateOrbit(unsigned char force_update);

void HAL_VBE_DISP_OLED_SetOrbit(BOOLEAN bEnable, unsigned char mode)
{
	static BOOLEAN pre_bEnable=0;
	down(&VBE_Semaphore);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_OLED_SetOrbit : %d \n", bEnable);
	vbe_disp_set_orbit(bEnable, mode);
	if(pre_bEnable==0 && bEnable == 1)
	{
		ScalerForceUpdateOrbit(0);
	}
	pre_bEnable = bEnable;

	up(&VBE_Semaphore);
}

void vbe_disp_set_orbit(UINT8 bEnable, unsigned char mode)
{

	if(bEnable!=vbe_disp_oled_orbit_enable  ){
		vbe_disp_oled_orbit_enable = bEnable;
        Scaler_reset_orbit();
	}else{
		vbe_disp_oled_orbit_enable = bEnable;
	}
    if(mode != vbe_disp_oled_orbit_mode)
    {
        Scaler_reset_orbit();
        vbe_disp_oled_orbit_mode = mode;
        vbe_disp_oled_orbit_enable = bEnable;
		ScalerForceUpdateOrbit(0);
    }
	else
	{
         vbe_disp_oled_orbit_mode = mode;
	}
	if(bEnable){
//		if(drvif_scalerdisplay_get_force_bg_status()==FALSE) {
			Scaler_start_orbit_algo(TRUE);
//		}
    }else{
		SCALER_ORBIT_SHIFT_INFO scalerOrbitMemInfo = {0};
		scalerOrbitMemInfo.orbit_mode = _VBE_PANEL_OREBIT_MODE_MAX;
		vbe_disp_set_orbit_shift_info_sharememory(scalerOrbitMemInfo);
	}
}

unsigned char vbe_disp_get_orbit_mode(void)
{
	return vbe_disp_oled_orbit_mode;
}

/*api which have protect by forcebg_semaphore*/
unsigned char vbe_disp_get_orbit(void)
{
	return vbe_disp_oled_orbit_enable;
}

#endif

void vbe_resume_instanboot_Panel_SetBackLight(int enable)
{
        return;
}

unsigned char vbe_disp_get_BoeVersion(UINT8 type, KADP_DISP_BOE_VERSION_T *pVer)
{
#if 0
	short i, cnt;
	dispd_boe_rgbw_mcu_control_RBUS dispd_boe_rgbw_mcu_control_REG;
	dispd_boe_rgbw_mcu_st_RBUS dispd_boe_rgbw_mcu_st_RBEG;
	dispd_boe_rgbw_apb_w_control_RBUS dispd_boe_rgbw_apb_w_control_REG;
	dispd_boe_rgbw_apb_w_data_RBUS dispd_boe_rgbw_apb_w_data_REG;
	dispd_boe_rgbw_apb_r_control_RBUS dispd_boe_rgbw_apb_r_control_reg;
	dispd_boe_rgbw_apb_r_data_RBUS dispd_boe_rgbw_apb_r_data_reg;

	dispd_boe_rgbw_apb_w_control_REG.regValue = IoReg_Read32(DISPD_BOE_RGBW_APB_w_control_reg);
	dispd_boe_rgbw_apb_w_data_REG.regValue = IoReg_Read32(DISPD_BOE_RGBW_APB_w_data_reg);

	dispd_boe_rgbw_apb_w_control_REG.apb_w_mode = 0; //	0:addr +1, 1:addr +2, 2:addr +4
	dispd_boe_rgbw_apb_w_control_REG.apb_w_addr= 0xc008;
	if(type == BOE_ROM_VERSION)
		dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = 0xee;
	else if(type == BOE_FW_VERSION)
		dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = 0xef;
	else{
		dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = 0xee;
		rtd_printk(KERN_ERR, TAG_NAME_VBE,"[%s][%d] [ERROR] Unknow Mode\n", __FUNCTION__,__LINE__);
	}
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_control_reg, dispd_boe_rgbw_apb_w_control_REG.regValue);
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_data_reg, dispd_boe_rgbw_apb_w_data_REG.regValue);

	//wclr status
	dispd_boe_rgbw_mcu_st_RBEG.regValue = IoReg_Read32(DISPD_BOE_RGBW_mcu_st_reg);
	dispd_boe_rgbw_mcu_st_RBEG.mcu_int_st = 1;
	IoReg_Write32(DISPD_BOE_RGBW_mcu_st_reg, dispd_boe_rgbw_mcu_st_RBEG.regValue);
	rtd_printk(KERN_ERR, TAG_NAME_VBE,"[%s][%d] DISPD_BOE_RGBW_mcu_st_reg=%d \n", __FUNCTION__,__LINE__, IoReg_Read32(DISPD_BOE_RGBW_mcu_st_reg)&_BIT24);

	// int_in=0 -> wait status=1 -> int_in=1
	dispd_boe_rgbw_mcu_control_REG.regValue = IoReg_Read32(DISPD_BOE_RGBW_mcu_control_reg);
	dispd_boe_rgbw_mcu_control_REG.mcu_int_in = 0;
	IoReg_Write32(DISPD_BOE_RGBW_mcu_control_reg, dispd_boe_rgbw_mcu_control_REG.regValue);
	cnt = 0x3ffff;
	do{ // wait b802EC20[24]=1
		dispd_boe_rgbw_mcu_st_RBEG.regValue = IoReg_Read32(DISPD_BOE_RGBW_mcu_st_reg);
	}while((cnt--) && dispd_boe_rgbw_mcu_st_RBEG.mcu_int_st == 0);
	if(cnt == 0){
		rtd_printk(KERN_ERR, TAG_NAME_VBE,"[%s][%d] [ERROR] mcu_int_st timeout\n", __FUNCTION__,__LINE__);
	}

	dispd_boe_rgbw_apb_r_control_reg.regValue = IoReg_Read32(DISPD_BOE_RGBW_APB_r_control_reg);
	dispd_boe_rgbw_apb_r_control_reg.apb_r_addr = 0xc00c;
	IoReg_Write32(DISPD_BOE_RGBW_APB_r_control_reg, dispd_boe_rgbw_apb_r_control_reg.regValue);
	// read data.
	dispd_boe_rgbw_apb_r_data_reg.regValue = IoReg_Read32(DISPD_BOE_RGBW_APB_r_data_reg);
	pVer->b0 = dispd_boe_rgbw_apb_r_data_reg.apb_r_data;
	dispd_boe_rgbw_apb_r_data_reg.regValue = IoReg_Read32(DISPD_BOE_RGBW_APB_r_data_reg);
	pVer->b1 = dispd_boe_rgbw_apb_r_data_reg.apb_r_data;
	dispd_boe_rgbw_apb_r_data_reg.regValue = IoReg_Read32(DISPD_BOE_RGBW_APB_r_data_reg);
	pVer->b2 = dispd_boe_rgbw_apb_r_data_reg.apb_r_data;

	//end communication
	dispd_boe_rgbw_mcu_control_REG.mcu_int_in = 1;
	IoReg_Write32(DISPD_BOE_RGBW_mcu_control_reg, dispd_boe_rgbw_mcu_control_REG.regValue);
	dispd_boe_rgbw_apb_w_control_REG.regValue = IoReg_Read32(DISPD_BOE_RGBW_APB_w_control_reg);
	dispd_boe_rgbw_apb_w_data_REG.regValue = IoReg_Read32(DISPD_BOE_RGBW_APB_w_data_reg);
	dispd_boe_rgbw_apb_w_control_REG.apb_w_mode = 0; // 0:addr +1, 1:addr +2, 2:addr +4
	dispd_boe_rgbw_apb_w_control_REG.apb_w_addr= 0xc008;
	dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = 0x00;
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_control_reg, dispd_boe_rgbw_apb_w_control_REG.regValue);
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_data_reg, dispd_boe_rgbw_apb_w_data_REG.regValue);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[vbe_disp_get_BoeVersion] pVer (%x.%x.%x)\n",
		pVer->b0, pVer->b1, pVer->b2);
#endif
	return TRUE;
}

unsigned char vbe_disp_set_BoeMode(UINT8 *pFwData, UINT32 size)
{
#if 0
	UINT32 i, cnt;
	dispd_boe_rgbw_apb_w_control_RBUS dispd_boe_rgbw_apb_w_control_REG;
	dispd_boe_rgbw_apb_w_data_RBUS dispd_boe_rgbw_apb_w_data_REG;
	dispd_boe_rgbw_mcu_control_RBUS dispd_boe_rgbw_mcu_control_REG;
	dispd_boe_rgbw_mcu_st_RBUS dispd_boe_rgbw_mcu_st_RBEG;
	UINT16* pWriteData = (UINT16*)(pFwData);

	// Himax suspend
	dispd_boe_rgbw_apb_w_control_REG.regValue = 0;
	dispd_boe_rgbw_apb_w_data_REG.regValue = 0;
	dispd_boe_rgbw_apb_w_control_REG.apb_w_mode = 0; // 0:addr +1, 1:addr +2, 2:addr +4
	dispd_boe_rgbw_apb_w_control_REG.apb_w_addr= 0xc008;
	dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = 0x10;
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_control_reg, dispd_boe_rgbw_apb_w_control_REG.regValue);
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_data_reg, dispd_boe_rgbw_apb_w_data_REG.regValue);

	//wclr status
	dispd_boe_rgbw_mcu_st_RBEG.regValue = IoReg_Read32(DISPD_BOE_RGBW_mcu_st_reg);
	dispd_boe_rgbw_mcu_st_RBEG.mcu_int_st = 1;
	IoReg_Write32(DISPD_BOE_RGBW_mcu_st_reg, dispd_boe_rgbw_mcu_st_RBEG.regValue);
	//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][%d] ++DISPD_BOE_RGBW_mcu_st_reg=%d \n", __FUNCTION__,__LINE__, IoReg_Read32(DISPD_BOE_RGBW_mcu_st_reg)&_BIT24);

	dispd_boe_rgbw_mcu_control_REG.regValue = IoReg_Read32(DISPD_BOE_RGBW_mcu_control_reg);
	dispd_boe_rgbw_mcu_control_REG.mcu_int_in = 0;
	IoReg_Write32(DISPD_BOE_RGBW_mcu_control_reg, dispd_boe_rgbw_mcu_control_REG.regValue);
	cnt = 0x3ffff;
	do{ // wait b802EC20[24]=1
		dispd_boe_rgbw_mcu_st_RBEG.regValue = IoReg_Read32(DISPD_BOE_RGBW_mcu_st_reg);
	}while((cnt--) && dispd_boe_rgbw_mcu_st_RBEG.mcu_int_st == 0);
	if(cnt == 0){
		rtd_printk(KERN_ERR, TAG_NAME_VBE,"[%s][%d] [ERROR] mcu_int_st timeout\n", __FUNCTION__,__LINE__);
	}
	//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][%d] DISPD_BOE_RGBW_mcu_st_reg=%d \n", __FUNCTION__,__LINE__, IoReg_Read32(DISPD_BOE_RGBW_mcu_st_reg)&_BIT24);

	//end communication
	dispd_boe_rgbw_mcu_control_REG.mcu_int_in = 1;
	IoReg_Write32(DISPD_BOE_RGBW_mcu_control_reg, dispd_boe_rgbw_mcu_control_REG.regValue);
	dispd_boe_rgbw_apb_w_control_REG.regValue = 0;
	dispd_boe_rgbw_apb_w_data_REG.regValue = 0;
	dispd_boe_rgbw_apb_w_control_REG.apb_w_mode = 0; // 0:addr +1, 1:addr +2, 2:addr +4
	dispd_boe_rgbw_apb_w_control_REG.apb_w_addr= 0xc008;
	dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = 0x00;
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_control_reg, dispd_boe_rgbw_apb_w_control_REG.regValue);
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_data_reg, dispd_boe_rgbw_apb_w_data_REG.regValue);
	//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][%d]end communication\n", __FUNCTION__,__LINE__);

	//RESET RGBW-IP-MCU
	dispd_boe_rgbw_apb_w_control_REG.regValue = 0;
	dispd_boe_rgbw_apb_w_data_REG.regValue = 0;
	dispd_boe_rgbw_apb_w_control_REG.apb_w_mode = 0; // 0:addr +1, 1:addr +2, 2:addr +4
	dispd_boe_rgbw_apb_w_control_REG.apb_w_addr= 0xc000;
	dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = 0x00;
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_control_reg, dispd_boe_rgbw_apb_w_control_REG.regValue);
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_data_reg, dispd_boe_rgbw_apb_w_data_REG.regValue);
	//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][%d]RESET RGBW-IP-MCU\n", __FUNCTION__,__LINE__);

	//Access 32K SRAM via APB
	dispd_boe_rgbw_apb_w_control_REG.apb_w_mode = 0; // 0:addr +1, 1:addr +2, 2:addr +4
	dispd_boe_rgbw_apb_w_control_REG.apb_w_addr= 0xc001;
	dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = 0;
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_control_reg, dispd_boe_rgbw_apb_w_control_REG.regValue);
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_data_reg, dispd_boe_rgbw_apb_w_data_REG.regValue);
	//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][%d]Access 32K SRAM via APB\n", __FUNCTION__,__LINE__);

	// === write table 0~0x7dff ===
	dispd_boe_rgbw_apb_w_control_REG.apb_w_mode = 1; // 0:addr +1, 1:addr +2, 2:addr +4
	dispd_boe_rgbw_apb_w_control_REG.apb_w_addr= 0x0000;
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_control_reg, dispd_boe_rgbw_apb_w_control_REG.regValue);

	//rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"pWriteData = %x.%x\n", pWriteData[0], pWriteData[1]);

	for(i = 0; i < (size/2); i++)
	{
		dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = pWriteData[i]&0xff;
		dispd_boe_rgbw_apb_w_data_REG.apb_w_data1 = (pWriteData[i]>>8)&0xff;
		IoReg_Write32(DISPD_BOE_RGBW_APB_w_data_reg, dispd_boe_rgbw_apb_w_data_REG.regValue);
	}
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"pWriteData[%d] = %x\n", i-1, pWriteData[i-1]);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s][%d]write table done.\n", __FUNCTION__,__LINE__);

	// === MCU <-> SoC ===
	// C001 = 7; (Control to MCU)
	dispd_boe_rgbw_apb_w_control_REG.apb_w_mode = 0; // 0:addr +1, 1:addr +2, 2:addr +4
	dispd_boe_rgbw_apb_w_control_REG.apb_w_addr= 0xc001;
	dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = 7;
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_control_reg, dispd_boe_rgbw_apb_w_control_REG.regValue);
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_data_reg, dispd_boe_rgbw_apb_w_data_REG.regValue);
	// wait V-blank
	// C000 = 1; (Reset MCU)
	dispd_boe_rgbw_apb_w_control_REG.apb_w_mode = 0; // 0:addr +1, 1:addr +2, 2:addr +4
	dispd_boe_rgbw_apb_w_control_REG.apb_w_addr= 0xc000;
	dispd_boe_rgbw_apb_w_data_REG.apb_w_data0 = 1;
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_control_reg, dispd_boe_rgbw_apb_w_control_REG.regValue);
	IoReg_Write32(DISPD_BOE_RGBW_APB_w_data_reg, dispd_boe_rgbw_apb_w_data_REG.regValue);
#endif
	return TRUE;
}

void vbe_disp_get_disp_panel_size(KADP_DISP_PANEL_SIZE_T *panel_size)
{
	panel_size->DISP_HEIGHT = Get_DISP_ACT_END_VPOS() - Get_DISP_ACT_STA_VPOS();
	panel_size->DISP_WIDTH = Get_DISP_ACT_END_HPOS() - Get_DISP_ACT_STA_HPOS();
}

void vbe_disp_mtg_inner_ptg(UINT8 bOnOff, VBE_DISP_INNER_PTG_TYPE_T type)
{
	if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_R)
		drvif_scalerdisplay_set_bg_color(SLR_MAIN_DISPLAY, _DISPLAY_BG,  0x3fff, 0, 0);
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_G)
		drvif_scalerdisplay_set_bg_color(SLR_MAIN_DISPLAY, _DISPLAY_BG,  0, 0x3fff, 0);
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_B)
		drvif_scalerdisplay_set_bg_color(SLR_MAIN_DISPLAY, _DISPLAY_BG,  0, 0, 0x3fff);
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_WHITE)
		drvif_scalerdisplay_set_bg_color(SLR_MAIN_DISPLAY, _DISPLAY_BG,  0x3fff, 0x3fff, 0x3fff);
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_BLACK)
		drvif_scalerdisplay_set_bg_color(SLR_MAIN_DISPLAY, _DISPLAY_BG,  0, 0, 0);
	else
		drvif_scalerdisplay_set_bg_color(SLR_MAIN_DISPLAY, _DISPLAY_BG,  0, 0, 0);

	mute_control(SLR_MAIN_DISPLAY, bOnOff);
}

void vbe_disp_memc_inputmux_inner_ptg(UINT8 bOnOff, VBE_DISP_INNER_PTG_TYPE_T type)
{
	ppoverlay_memc_mux_ctrl_RBUS ppoverlay_memc_mux_ctrl_reg;
	ppoverlay_memc_mux_in_color_value_gb_RBUS ppoverlay_memc_mux_in_color_value_gb_reg;
	ppoverlay_memc_mux_in_color_value_r_RBUS ppoverlay_memc_mux_in_color_value_r_reg;
	ppoverlay_double_buffer_ctrl2_RBUS ppoverlay_double_buffer_ctrl2_reg;

	ppoverlay_memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	ppoverlay_memc_mux_in_color_value_gb_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_reg);
	ppoverlay_memc_mux_in_color_value_r_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_reg);
	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);


	if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_R){
		ppoverlay_memc_mux_in_color_value_gb_reg.in_cb_b_value = 0;
		ppoverlay_memc_mux_in_color_value_gb_reg.in_y_g_value = 0;
		ppoverlay_memc_mux_in_color_value_r_reg.in_cr_r_value = 0xfff;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_G){
		ppoverlay_memc_mux_in_color_value_gb_reg.in_cb_b_value = 0;
		ppoverlay_memc_mux_in_color_value_gb_reg.in_y_g_value = 0xfff;
		ppoverlay_memc_mux_in_color_value_r_reg.in_cr_r_value = 0;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_B){
		ppoverlay_memc_mux_in_color_value_gb_reg.in_cb_b_value = 0xfff;
		ppoverlay_memc_mux_in_color_value_gb_reg.in_y_g_value = 0;
		ppoverlay_memc_mux_in_color_value_r_reg.in_cr_r_value = 0;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_WHITE){
		ppoverlay_memc_mux_in_color_value_gb_reg.in_cb_b_value = 0xfff;
		ppoverlay_memc_mux_in_color_value_gb_reg.in_y_g_value = 0xfff;
		ppoverlay_memc_mux_in_color_value_r_reg.in_cr_r_value = 0xfff;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_BLACK){
		ppoverlay_memc_mux_in_color_value_gb_reg.in_cb_b_value = 0;
		ppoverlay_memc_mux_in_color_value_gb_reg.in_y_g_value = 0;
		ppoverlay_memc_mux_in_color_value_r_reg.in_cr_r_value = 0;
	}
	else{
		ppoverlay_memc_mux_in_color_value_gb_reg.in_cb_b_value = 0;
		ppoverlay_memc_mux_in_color_value_gb_reg.in_y_g_value = 0;
		ppoverlay_memc_mux_in_color_value_r_reg.in_cr_r_value = 0;
	}
	if(bOnOff){
		ppoverlay_memc_mux_ctrl_reg.memc_in_bg_en = 1;
	}else{
		ppoverlay_memc_mux_in_color_value_gb_reg.in_cb_b_value = 0;
		ppoverlay_memc_mux_in_color_value_gb_reg.in_y_g_value = 0;
		ppoverlay_memc_mux_in_color_value_r_reg.in_cr_r_value = 0;
		ppoverlay_memc_mux_ctrl_reg.memc_in_bg_en = 0;
	}
	IoReg_Write32(PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_GB_reg, ppoverlay_memc_mux_in_color_value_gb_reg.regValue);
	IoReg_Write32(PPOVERLAY_MEMC_MUX_IN_COLOR_VALUE_R_reg, ppoverlay_memc_mux_in_color_value_r_reg.regValue);
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, ppoverlay_memc_mux_ctrl_reg.regValue);

	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set= 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
}

void vbe_disp_memc_outputmux_inner_ptg(UINT8 bOnOff, VBE_DISP_INNER_PTG_TYPE_T type)
{
	ppoverlay_memc_mux_ctrl_RBUS ppoverlay_memc_mux_ctrl_reg;
	ppoverlay_memc_mux_out1_color_value_gb_RBUS ppoverlay_memc_mux_out1_color_value_gb_reg;
	ppoverlay_memc_mux_out1_color_value_r_RBUS ppoverlay_memc_mux_out1_color_value_r_reg;
	ppoverlay_double_buffer_ctrl2_RBUS ppoverlay_double_buffer_ctrl2_reg;

	ppoverlay_memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	ppoverlay_memc_mux_out1_color_value_gb_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_reg);
	ppoverlay_memc_mux_out1_color_value_r_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_reg);
	ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);


	if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_R){
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_cb_b_value= 0;
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_y_g_value = 0;
		ppoverlay_memc_mux_out1_color_value_r_reg.out_cr_r_value = 0xfff;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_G){
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_cb_b_value = 0;
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_y_g_value = 0xfff;
		ppoverlay_memc_mux_out1_color_value_r_reg.out_cr_r_value = 0;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_B){
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_cb_b_value = 0xfff;
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_y_g_value = 0;
		ppoverlay_memc_mux_out1_color_value_r_reg.out_cr_r_value = 0;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_WHITE){
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_cb_b_value = 0xfff;
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_y_g_value = 0xfff;
		ppoverlay_memc_mux_out1_color_value_r_reg.out_cr_r_value = 0xfff;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_BLACK){
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_cb_b_value = 0;
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_y_g_value = 0;
		ppoverlay_memc_mux_out1_color_value_r_reg.out_cr_r_value = 0;
	}
	else{
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_cb_b_value = 0;
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_y_g_value= 0;
		ppoverlay_memc_mux_out1_color_value_r_reg.out_cr_r_value = 0;
	}
	if(bOnOff){
		ppoverlay_memc_mux_ctrl_reg.memc_out_bg_en = 1;
	}else{
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_cb_b_value = 0;
		ppoverlay_memc_mux_out1_color_value_gb_reg.out_y_g_value = 0;
		ppoverlay_memc_mux_out1_color_value_r_reg.out_cr_r_value = 0;
		ppoverlay_memc_mux_ctrl_reg.memc_out_bg_en = 0;
	}
	IoReg_Write32(PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_GB_reg, ppoverlay_memc_mux_out1_color_value_gb_reg.regValue);
	IoReg_Write32(PPOVERLAY_MEMC_MUX_OUT1_COLOR_VALUE_R_reg, ppoverlay_memc_mux_out1_color_value_r_reg.regValue);
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, ppoverlay_memc_mux_ctrl_reg.regValue);

	ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set= 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
}

void vbe_disp_sfg_inner_ptg(UINT8 bOnOff, VBE_DISP_INNER_PTG_TYPE_T type)
{
	sfg_sfg_force_bg_at_dif_RBUS sfg_sfg_force_bg_at_dif_reg;

	sfg_sfg_force_bg_at_dif_reg.regValue = IoReg_Read32(SFG_SFG_FORCE_BG_AT_DIF_reg);

	if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_R){
		sfg_sfg_force_bg_at_dif_reg.bg_dif_red = 0x3ff;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_grn = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_blu = 0;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_G){
		sfg_sfg_force_bg_at_dif_reg.bg_dif_red = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_grn = 0x3ff;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_blu = 0;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_B){
		sfg_sfg_force_bg_at_dif_reg.bg_dif_red = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_grn = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_blu = 0x3ff;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_WHITE){
		sfg_sfg_force_bg_at_dif_reg.bg_dif_red = 0x3ff;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_grn = 0x3ff;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_blu = 0x3ff;
	}
	else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_BLACK){
		sfg_sfg_force_bg_at_dif_reg.bg_dif_red = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_grn = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_blu = 0;
	}
	else{
		sfg_sfg_force_bg_at_dif_reg.bg_dif_red = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_grn = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_blu = 0;
	}
	if(bOnOff){
		sfg_sfg_force_bg_at_dif_reg.en_force_bg_dif = 1;
	}else{
		sfg_sfg_force_bg_at_dif_reg.en_force_bg_dif = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_red = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_grn = 0;
		sfg_sfg_force_bg_at_dif_reg.bg_dif_blu = 0;
	}
	IoReg_Write32(SFG_SFG_FORCE_BG_AT_DIF_reg, sfg_sfg_force_bg_at_dif_reg.regValue);

}

void vbe_disp_uzu_inner_ptg(UINT8 bOnOff, VBE_DISP_INNER_PTG_TYPE_T type)
{
	scaleup_d_uzu_globle_ctrl_RBUS scaleup_d_uzu_globle_ctrl_reg;
	scaleup_dm_uzu_input_size_RBUS scaleup_dm_uzu_input_size_reg;
	scaleup_d_uzu_patgen_frame_toggle_RBUS scaleup_d_uzu_patgen_frame_toggle_reg;
	unsigned int colorBar_width=0;

	scaleup_d_uzu_globle_ctrl_reg.regValue = IoReg_Read32(SCALEUP_D_UZU_Globle_Ctrl_reg);
	scaleup_dm_uzu_input_size_reg.regValue = IoReg_Read32(SCALEUP_DM_UZU_Input_Size_reg);
	scaleup_d_uzu_patgen_frame_toggle_reg.regValue = IoReg_Read32(SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_reg);

	colorBar_width = (scaleup_dm_uzu_input_size_reg.hor_input_size/8)-1;
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"colorBar_width=%x\n", colorBar_width);

	if(type == VBE_DISP_INNER_PTG_TYPE_RANDOM_GEN){
		scaleup_d_uzu_globle_ctrl_reg.patgen_mode = 0;
	}else if(type == VBE_DISP_INNER_PTG_TYPE_COLOR_BAR){
		scaleup_d_uzu_globle_ctrl_reg.patgen_mode = 3; // color bar
		scaleup_d_uzu_patgen_frame_toggle_reg.patgen_width = colorBar_width;
	}else{
		scaleup_d_uzu_globle_ctrl_reg.patgen_mode = 0;
	}

	if(bOnOff){
		scaleup_d_uzu_globle_ctrl_reg.patgen_sel = 1;
	}else{
		scaleup_d_uzu_globle_ctrl_reg.patgen_sel = 0;
	}
	IoReg_Write32(SCALEUP_D_UZU_Globle_Ctrl_reg, scaleup_d_uzu_globle_ctrl_reg.regValue);
	IoReg_Write32(SCALEUP_D_UZU_PATGEN_FRAME_TOGGLE_reg, scaleup_d_uzu_patgen_frame_toggle_reg.regValue);
}

void vbe_disp_vgip_inner_ptg(UINT8 bOnOff, VBE_DISP_INNER_PTG_TYPE_T type)
{
	vgip_vgip_chn1_ctrl_RBUS vgip_vgip_chn1_ctrl_reg;
	vgip_vgip_chn1_ctrl_reg.regValue = IoReg_Read32(VGIP_VGIP_CHN1_CTRL_reg);
	if(bOnOff)
		vgip_vgip_chn1_ctrl_reg.ch1_random_en = 1;
	else
		vgip_vgip_chn1_ctrl_reg.ch1_random_en = 0;
	IoReg_Write32(VGIP_VGIP_CHN1_CTRL_reg, vgip_vgip_chn1_ctrl_reg.regValue);

}

void vbe_disp_set_inner_ptg(UINT8 bOnOff, VBE_DISP_INNER_PTG_BLOCK_T block, VBE_DISP_INNER_PTG_TYPE_T type)
{
	if(block == VBE_DISP_INNER_PTG_BLOCK_VGIP){
		vbe_disp_vgip_inner_ptg(bOnOff, type);
	}else if(block == VBE_DISP_INNER_PTG_BLOCK_MTG){
		vbe_disp_mtg_inner_ptg(bOnOff, type);
	}else if(block == VBE_DISP_INNER_PTG_BLOCK_UZU){
		vbe_disp_uzu_inner_ptg(bOnOff, type);
	}else if(block == VBE_DISP_INNER_PTG_BLOCK_MEMC_INPUTMUX){
		vbe_disp_memc_inputmux_inner_ptg(bOnOff, type);
	}else if(block == VBE_DISP_INNER_PTG_BLOCK_MEMC_OUTPUTMUX){
		vbe_disp_memc_outputmux_inner_ptg(bOnOff, type);
	}else if(block == VBE_DISP_INNER_PTG_BLOCK_SFG){
		vbe_disp_sfg_inner_ptg(bOnOff, type);
	}else{
		rtd_printk(KERN_ERR, TAG_NAME_VBE,"[%s] Error block :%d \n", __FUNCTION__, block);
	}
}

#define VCOM_SIZE 96
#define VCOM_PATTENT_LINE_SIZE 24
void vbe_disp_vcomPatternDraw( UINT16 *vcomPattern,UINT16 nSize )
{
	UINT32 vComPatLineSetting[4];
	UINT16 grayLevel=0;
	int i=0;
	sfg_sfg_patgen_8_RBUS sfg_sfg_patgen_8_reg;
	sfg_sfg_patgen_9_RBUS sfg_sfg_patgen_9_reg;
	sfg_sfg_patgen_10_RBUS sfg_sfg_patgen_10_reg;
	sfg_sfg_patgen_11_RBUS sfg_sfg_patgen_11_reg;
	sfg_sfg_patgen_12_RBUS sfg_sfg_patgen_12_reg;

	memset(vComPatLineSetting, 0, sizeof(UINT32)*4);

	if(nSize != VCOM_SIZE){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[Warning] nSize %d define is not %d\n", nSize, VCOM_SIZE);
	}

	//convert to our SFG setting method.
	// 8x3x4line
	for(i=0; i<nSize; i++){
		//pr_emerg("vcom[%d] = %x\n", i, p_vcomPattern[i]);
		if(vcomPattern[i] != 0){
			vComPatLineSetting[(i/VCOM_PATTENT_LINE_SIZE)] |= (1<<(i%VCOM_PATTENT_LINE_SIZE));
			//vComPatLineSetting[(i/VCOM_PATTENT_LINE_SIZE)] |= (1<<(VCOM_PATTENT_LINE_SIZE-1-(i%VCOM_PATTENT_LINE_SIZE)));

			if(grayLevel==0)
				grayLevel = vcomPattern[i];
			else{
				//check only one setting value of vComPattern, else print warning msg
				if(grayLevel != vcomPattern[i])
					rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[error] Vcom Pattern has different gary value (%d.%d)\n", grayLevel, vcomPattern[i]);
			}
		}
	}
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"Vcom Pattern Gray Value = %d \n", grayLevel);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"vComLinePattern[0] = %x\n", vComPatLineSetting[0]);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"vComLinePattern[1] = %x\n", vComPatLineSetting[1]);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"vComLinePattern[2] = %x\n", vComPatLineSetting[2]);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"vComLinePattern[3] = %x\n", vComPatLineSetting[3]);

	//set SFG vcom pattern here.
	sfg_sfg_patgen_8_reg.regValue = IoReg_Read32(SFG_SFG_patgen_8_reg);
	sfg_sfg_patgen_8_reg.sfg_pat3_subpix_0 = 0;
	sfg_sfg_patgen_8_reg.sfg_pat3_subpix_1 = grayLevel;
	IoReg_Write32(SFG_SFG_patgen_8_reg, sfg_sfg_patgen_8_reg.regValue);

	//Vcom Line 1
	sfg_sfg_patgen_9_reg.regValue = IoReg_Read32(SFG_SFG_patgen_9_reg);
	sfg_sfg_patgen_9_reg.sfg_pat3_line_0 = vComPatLineSetting[0];
	IoReg_Write32(SFG_SFG_patgen_9_reg, sfg_sfg_patgen_9_reg.regValue);
	//Vcom Line 2
	sfg_sfg_patgen_10_reg.regValue = IoReg_Read32(SFG_SFG_patgen_10_reg);
	sfg_sfg_patgen_10_reg.sfg_pat3_line_1= vComPatLineSetting[1];
	IoReg_Write32(SFG_SFG_patgen_10_reg, sfg_sfg_patgen_10_reg.regValue);
	//Vcom Line 3
	sfg_sfg_patgen_11_reg.regValue = IoReg_Read32(SFG_SFG_patgen_11_reg);
	sfg_sfg_patgen_11_reg.sfg_pat3_line_2 = vComPatLineSetting[2];
	IoReg_Write32(SFG_SFG_patgen_11_reg, sfg_sfg_patgen_11_reg.regValue);
	//Vcom Line 4
	sfg_sfg_patgen_12_reg.regValue = IoReg_Read32(SFG_SFG_patgen_12_reg);
	sfg_sfg_patgen_12_reg.sfg_pat3_line_3 = vComPatLineSetting[3];
	IoReg_Write32(SFG_SFG_patgen_12_reg, sfg_sfg_patgen_12_reg.regValue);

}
void HAL_VBE_DISP_VCOMPatternDraw(UINT16 *vcomPattern,UINT16 nSize )
{
	down(&VBE_Semaphore);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_VCOMPatternDraw size:%d \n", nSize);

	vbe_disp_vcomPatternDraw(vcomPattern,nSize);

	up(&VBE_Semaphore);

}

void HAL_VBE_DISP_VCOMPatternCtrl(KADP_DISP_PANEL_VCOM_PAT_CTRL_T nCtrl)
{
	sfg_sfg_patgen_ctrl_RBUS sfg_sfg_patgen_ctrl_reg;

	down(&VBE_Semaphore);

	sfg_sfg_patgen_ctrl_reg.regValue = IoReg_Read32(SFG_SFG_patgen_ctrl_reg);
	sfg_sfg_patgen_ctrl_reg.sfg_pat_mode = 3;
	IoReg_Write32(SFG_SFG_patgen_ctrl_reg, sfg_sfg_patgen_ctrl_reg.regValue);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_VCOMPatternCtrl\n");

	if(nCtrl == KADP_DISP_PANEL_VCOM_PAT_CTRL_ON){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"KADP_DISP_PANEL_VCOM_PAT_CTRL_ON\n");
		sfg_sfg_patgen_ctrl_reg.sfg_pat_en = 1;
	}else if(nCtrl == KADP_DISP_PANEL_VCOM_PAT_CTRL_OFF){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"KADP_DISP_PANEL_VCOM_PAT_CTRL_OFF\n");
		sfg_sfg_patgen_ctrl_reg.sfg_pat_en = 0;
	}
	IoReg_Write32(SFG_SFG_patgen_ctrl_reg, sfg_sfg_patgen_ctrl_reg.regValue);

	up(&VBE_Semaphore);
}
void HAL_VBE_DISP_SetBOEMode(UINT8 *pFwData, UINT32 size)
{
	down(&VBE_Semaphore);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetBOEMode, size:%d \n", size);

	down(&VBE_RGBW_Resume_Semaphore);
	//vbe_disp_set_BoeMode(pFwData, size);
	fwif_color_set_SiW_ModeChange_TV006(pFwData, size);
	up(&VBE_RGBW_Resume_Semaphore);

	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_GetBOEVersion(KADP_DISP_BOE_VERSION_T *pstRomVer, KADP_DISP_BOE_VERSION_T *pstFwVer)
{
	down(&VBE_Semaphore);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_GetBOEVersion\n");

	down(&VBE_RGBW_Resume_Semaphore);
	vbe_disp_get_BoeVersion(BOE_ROM_VERSION, pstRomVer);
	vbe_disp_get_BoeVersion(BOE_FW_VERSION, pstFwVer);
	up(&VBE_RGBW_Resume_Semaphore);

	up(&VBE_Semaphore);
}

#ifdef CONFIG_SCALER_ENABLE_V4L2
void HAL_VBE_DISP_SetMLEMode(enum v4l2_ext_vbe_mplus_mode index)
{
	enum v4l2_ext_vbe_mplus_mode MLE_Idx;
	down(&VBE_Semaphore);

	MLE_Idx = 0;
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetMLEMode : %d \n", index);

	memcpy((void*)&MLE_Idx, (void*)&index, sizeof(enum v4l2_ext_vbe_mplus_mode));

#ifdef CONFIG_SCALER_ENABLE_V4L2
	fwif_color_set_Mplus_ModeChange_TV006(MLE_Idx);
#endif

	up(&VBE_Semaphore);
}
#endif

void HAL_VBE_DISP_SetInnerPattern(UINT8 bOnOff, VBE_DISP_INNER_PTG_BLOCK_T block, VBE_DISP_INNER_PTG_TYPE_T type)
{
	down(&VBE_Semaphore);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetInnerPattern\n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"bOnOff=%d, block%d, type=%d\n", bOnOff, block, type);

	vbe_disp_set_inner_ptg(bOnOff, block, type);

	up(&VBE_Semaphore);

}
extern void fwif_color_MplusSet(unsigned short *pRegisterSet, unsigned char panelMaker);
extern void fwif_color_MplusGet(unsigned short *pRegisterSet, unsigned char panelMaker);
extern void fwif_color_set_SetBOERGBWBypass_TV006(unsigned char BOE_EN);
extern void fwif_color_SetFrameGainLimit_TV006(unsigned short nFrameGainLimit);
extern void fwif_color_GetFrameGainLimit_TV006(unsigned short *nFrameGainLimit);
extern void fwif_color_SetPixelGainLimit_TV006(unsigned short nPixelGainLimit);
extern void fwif_color_GetPixelGainLimit_TV006(unsigned short *nPixelGainLimit);
extern void fwif_color_set_fcic_TV006(unsigned int *u32pTSCICTbl, unsigned int u32Tscicsize, unsigned char *u8pControlTbl, unsigned int u32Ctrlsize, unsigned char bCtrl);

void HAL_VBE_DISP_SetBOERGBWBypass(BOOLEAN bEnable)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetBOERGBWBypass : %d \n", bEnable);

	//if (Get_DISPLAY_PANEL_BOW_RGBW() == TRUE) /*protection for BOE*/
		fwif_color_set_SetBOERGBWBypass_TV006(bEnable);

	up(&VBE_Semaphore);
}


extern void fwif_color_set_output_gamma_4CHDGA_TV006 (UINT32 *pRedGammaTable, UINT32 * pGreenGammaTable, UINT32 * pBlueGammaTable, UINT32 * pWhiteGammaTable, UINT16 nTableSize);

void HAL_VBE_SetDGA4CH (UINT32 *pRedGammaTable, UINT32 *pGreenGammaTable, UINT32 *pBlueGammaTable, UINT32 *pWhiteGammaTable, UINT16 nTableSize)
{
	down(&VBE_Semaphore);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_SetDGA4CH\n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"nTableSize = %d \n", nTableSize);
	fwif_color_set_output_gamma_4CHDGA_TV006(pRedGammaTable,pGreenGammaTable,pBlueGammaTable,pWhiteGammaTable,nTableSize);

	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_GetPanelSize(KADP_DISP_PANEL_SIZE_T *panel_size)
{
	down(&VBE_Semaphore);

	vbe_disp_get_disp_panel_size(panel_size);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_GetPanelSize : w = %d , h = %d \n", panel_size->DISP_WIDTH, panel_size->DISP_HEIGHT);

	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_MplusSet(UINT16 * pRegisterSet, UINT8 nPanelMaker)
{
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_MplusSet \n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"nPanelMaker = (%d) \n", nPanelMaker);

	down(&VBE_Semaphore);
	fwif_color_MplusSet(pRegisterSet, nPanelMaker);
	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_MplusGet(UINT16 * pRegisterGet, UINT8 nPanelMaker)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_MplusGet \n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"nPanelMaker = (%d) \n", nPanelMaker);

	if(Get_DISPLAY_PANEL_MPLUS_RGBW() == 1) // LGD M+
		fwif_color_MplusGet(pRegisterGet, 0);
	if(Get_DISPLAY_PANEL_BOW_RGBW() == 1) // BOE SiW
		fwif_color_MplusGet(pRegisterGet, 1);

	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_SetFrameGainLimit(UINT16 nFrameGainLimit)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetFrameGainLimit : %d \n", nFrameGainLimit);

	fwif_color_SetFrameGainLimit_TV006(nFrameGainLimit);

	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_GetFrameGainLimit (UINT16 *nFrameGainLimit)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_GetFrameGainLimit : %ld \n", (unsigned long)nFrameGainLimit);

	fwif_color_GetFrameGainLimit_TV006(nFrameGainLimit);

	up(&VBE_Semaphore);
}


void HAL_VBE_DISP_SetPixelGainLimit (UINT16 nPixelGainLimit)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetPixelGainLimit : %d \n", nPixelGainLimit);

	fwif_color_SetPixelGainLimit_TV006(nPixelGainLimit);

	up(&VBE_Semaphore);
}


void HAL_VBE_DISP_GetPixelGainLimit (UINT16 *nPixelGainLimit)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_GetPixelGainLimit : %ld \n",(unsigned long) nPixelGainLimit);

	fwif_color_GetPixelGainLimit_TV006(nPixelGainLimit);

	up(&VBE_Semaphore);
}

void HAL_VBE_TSCIC_Load(UINT32 *u32pTSCICTbl, UINT32 u32Tscicsize, UINT8 *u8pControlTbl, UINT32 u32Ctrlsize)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"u32Tscicsize = %d,  u32Ctrlsize = %d\n", u32Tscicsize, u32Ctrlsize);
	fwif_color_set_fcic_TV006(u32pTSCICTbl, u32Tscicsize, u8pControlTbl, u32Ctrlsize, 1);
	up(&VBE_Semaphore);



}

void HAL_VBE_DISP_SetOLEDLSR (VBE_DISP_LSR_ADJUST_MODE_T nStep, UINT32 *LSRTbl)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetOLEDLSR \n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"Value = (%d, %x) \n", nStep, *LSRTbl);
	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_SetOLEDLSR_Tunning (VBE_DISP_LSR_TUNNING_VAL_T *stLSRdata)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetOLEDLSR_Tunning \n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"IIR = %d \n", stLSRdata->IIR);
	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_SetOLEDCPC_Tunning (VBE_DISP_CPC_TUNNING_VAL_T *stCPCdata)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetOLEDCPC_Tunning \n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"STEP = (%d, %d) \n", stCPCdata->STEP[0], stCPCdata->STEP[1]);
	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_SetOLEDGSR (UINT32 *GSRTbl)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetOLEDGSR \n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"GSRTbl = (%d) \n", *GSRTbl);
	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_GetOSDAlphaAPL(UINT32 *alphaTbl, UINT32 size)
{
	UINT32 dummyAlphaTbl = 0;

	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_GetOSDAlphaAPL \n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"size = (%d) \n", size);
	alphaTbl = &dummyAlphaTbl;
	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_SetOSDRGBLevel(BOOLEAN bOnOff, UINT32 *lvlTbl, UINT32 size)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetOSDRGBLevel \n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"size = (%d) \n", size);
	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_SetEPIDataScramble(BOOLEAN bOnOff)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetEPIDataScramble \n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"bOnOff = (%d) \n", bOnOff);
	up(&VBE_Semaphore);
}

void HAL_VBE_DISP_SetAdvanced10bit(BOOLEAN bOnOff)
{
	down(&VBE_Semaphore);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"HAL_VBE_DISP_SetAdvanced10bit \n");
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"bOnOff = (%d) \n", bOnOff);
	up(&VBE_Semaphore);
}

void Scaler_set_lvds_to_hdmi_parameter(KADP_DISP_PANEL_ATTRIBUTE_T * pPanelAttr,UINT8 framerate)
{
	unsigned int panel_width,panel_height;
	PANEL_CONFIG_PARAMETER parameter;
	panel_width=(pPanelAttr->panelResolution>>12)&0xffff;
	panel_height=pPanelAttr->panelResolution&0xfff;

	memset(&parameter,0,sizeof(PANEL_CONFIG_PARAMETER));

	parameter.iCONFIG_PANEL_TYPE=P_LVDS_TO_HDMI;

	parameter.iCONFIG_DISPLAY_PORT=pPanelAttr->eLVDSPixel;
	parameter.iCONFIG_DISPLAY_BITMAPPING_TABLE=(pPanelAttr->eLVDSSelect)?0:1;  //pPanelAttr.eLVDSSelect 0 is VESA,1 is JEIDA
	parameter.iCONFIG_DISPLAY_COLOR_BITS=(pPanelAttr->eColorDepth)?0:1;   //pPanelAttr.eColorDepth 0 is 8bit,1 is 10bit
	parameter.iCONFIG_DISPLAY_HORIZONTAL_SYNC_NORMAL=1;
	parameter.iCONFIG_DISPLAY_VERTICAL_SYNC_NORMAL=1;

	parameter.iCONFIG_DISP_ACT_STA_HPOS=0;
	parameter.iCONFIG_DISP_ACT_END_HPOS=panel_width;
	parameter.iCONFIG_DISP_ACT_STA_VPOS=0;
	parameter.iCONFIG_DISP_ACT_END_VPOS=panel_height;
	parameter.iCONFIG_DISP_HORIZONTAL_TOTAL=pPanelAttr->horizTypPeriod; //Dh total need as even

	parameter.iCONFIG_DISPLAY_REFRESH_RATE=framerate;
	parameter.iCONFIG_DISPLAY_CLOCK_MIN=126;
	parameter.iCONFIG_DISPLAY_CLOCK_MAX=154;
	parameter.iCONFIG_DISP_VERTICAL_TOTAL_50Hz_MIN=pPanelAttr->vertBackPorch50Hz;
	parameter.iCONFIG_DISP_VERTICAL_TOTAL_50Hz_MAX=pPanelAttr->vertTypPeriod50Hz;
	parameter.iCONFIG_DISP_VERTICAL_TOTAL_60Hz_MIN=pPanelAttr->vertBackPorch60Hz;
	parameter.iCONFIG_DISP_VERTICAL_TOTAL_60Hz_MAX=pPanelAttr->vertTypPeriod60Hz;

	parameter.iCONFIG_DISP_VERTICAL_TOTAL=pPanelAttr->vertTypPeriod60Hz;
	parameter.iCONFIG_DISPLAY_CLOCK_TYPICAL=framerate*pPanelAttr->horizTypPeriod*pPanelAttr->vertTypPeriod60Hz;
	parameter.iCONFIG_DISP_DEN_STA_VPOS=pPanelAttr->vertBackPorch60Hz;
	parameter.iCONFIG_DISP_DEN_END_VPOS=pPanelAttr->vertBackPorch60Hz+panel_height;
	parameter.iCONFIG_DISP_VSYNC_LENGTH=pPanelAttr->vertSyncWidth60Hz;
	parameter.iCONFIG_DISP_HSYNC_WIDTH =pPanelAttr->horizSyncWidth60Hz;
	parameter.iCONFIG_DISP_DEN_STA_HPOS=pPanelAttr->horizBackPorch60Hz;
	parameter.iCONFIG_DISP_DEN_END_HPOS=pPanelAttr->horizBackPorch60Hz+panel_width;

	parameter.iCONFIG_DISP_HSYNC_LASTLINE=pPanelAttr->horizTypPeriod-1;

	Panel_InitParameter(&parameter);
}
#ifdef CONFIG_PM
//VBE_DISP_SUSPEND_RESUME_T vbe_disp_suspend_resume;

void panel_epi_resume_flow(void)
{
#if 0   //Fixed me later by benwang
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"###[%s][Line:%d]###\n", __FUNCTION__, __LINE__);
	msleep(1);
	rtd_setbits(VBY1_VIDEO_FORMAT_reg, _BIT23);	// 0xb802D700 lane 0~7 disable, lane 8~15 use EPI 8~15, lane 16~23 use EPI 16~23,
	rtd_outl(SFG_SFG_DUMMY_reg, 0x00000000);	// 0xb802D9B8 EPI Clock Disable, Data inverse disable,
	rtd_outl(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg, 0x00000000);	// 0xB8000E90 lane power disable
	rtd_setbits(EPI_EPI_CLOCK_CTRL0_reg, _BIT28);	// 0xb8026064, EPI reset enable, CST/C3/DST packet disable, EPI lock HW mode,
	msleep(1);
	rtd_setbits(SFG_SFG_DUMMY_reg, _BIT30);	//0xb802D9B8  EPI Clock Enable
	msleep(1);
	rtd_clearbits(EPI_EPI_CLOCK_CTRL0_reg, _BIT28);	// 0xb8026064, EPI reset disable
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg, vbe_disp_suspend_resume.PINMUX_LVDSPHY_VBY1EPI_90_S_R); // 0xB8000E90 enable lane power
	msleep(1);
	IoReg_Write32(PLL27X_REG_PLL_SSC4_reg, vbe_disp_suspend_resume.CRT_PLL_SSC4_S_R);
#endif
}

void vbe_disp_panel_mplus_resume_flow(void)
{
	sys_reg_sys_srst3_RBUS sys_reg_sys_srst3_reg;
	sys_reg_sys_clken3_RBUS sys_reg_sys_clken3_reg;
//	ppoverlay_display_timing_ctrl1_RBUS ppoverlay_display_timing_ctrl1_reg;
	ppoverlay_display_timing_ctrl2_RBUS ppoverlay_display_timing_ctrl2_reg;
	lg_m_plus_m_plus_ctl_RBUS lg_m_plus_m_plus_ctl_reg;

	//sys_reg_sys_srst3_reg.regValue = IoReg_Read32(SYS_REG_SYS_SRST3_reg);
	sys_reg_sys_srst3_reg.regValue = 0;
	sys_reg_sys_srst3_reg.rstn_disp_lg_mplus = 1;
	sys_reg_sys_srst3_reg.write_data = 1;
	IoReg_Write32(SYS_REG_SYS_SRST3_reg,sys_reg_sys_srst3_reg.regValue);

	//sys_reg_sys_clken3_reg.regValue = IoReg_Read32(SYS_REG_SYS_CLKEN3_reg);
	sys_reg_sys_clken3_reg.regValue = 0;
	sys_reg_sys_clken3_reg.clken_disp_lg_mplus = 1;
	sys_reg_sys_clken3_reg.write_data = 1;
	IoReg_Write32(SYS_REG_SYS_CLKEN3_reg,sys_reg_sys_clken3_reg.regValue);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"###[%s][Line:%d]###\n", __FUNCTION__, __LINE__);

	//MPLUS parameter
	rtd_outl(0xb8028c00, 0xffffffff);
	rtd_outl(0xb8028c04, 0xffffffff);
	rtd_outl(0xb8028c08, 0xff100010);
	rtd_outl(0xb8028c0c, 0x00100010);
	rtd_outl(0xb8028c10, 0x00100010);
	rtd_outl(0xb8028c14, 0x00100010);
	rtd_outl(0xb8028c18, 0x00000400);
	rtd_outl(0xb8028c1c, 0x00040000);
	rtd_outl(0xb8028c20, 0x04000004);
	rtd_outl(0xb8028c24, 0x00000400);
	rtd_outl(0xb8028c28, 0x00040000);
	rtd_outl(0xb8028c2c, 0x04000004);
	rtd_outl(0xb8028c30, 0x00000400);
	rtd_outl(0xb8028c34, 0x007e9000);
	rtd_outl(0xb8028c38, 0x007e9000);
	rtd_outl(0xb8028c3c, 0x007e9000);
	rtd_outl(0xb8028c40, 0x007e9000);
	rtd_outl(0xb8028c44, 0x007e9000);
	rtd_outl(0xb8028c48, 0x007e9000);
	rtd_outl(0xb8028c4c, 0x007e9000);
	rtd_outl(0xb8028c50, 0x007e9000);
	rtd_outl(0xb8028c54, 0x007e9000);
	rtd_outl(0xb8028c58, 0x007e9000);
	rtd_outl(0xb8028c5c, 0x007e9000);
	rtd_outl(0xb8028c60, 0x007e9000);
	rtd_outl(0xb8028c64, 0x007e9000);
	rtd_outl(0xb8028c68, 0x007e9000);
	rtd_outl(0xb8028c6c, 0x007e9000);
	rtd_outl(0xb8028c70, 0x007e9000);
	rtd_outl(0xb8028c74, 0x007e9000);
	rtd_outl(0xb8028c78, 0x007e9000);
	rtd_outl(0xb8028c7c, 0x00000000);
	rtd_outl(0xb8028c80, 0x00000000);
	rtd_outl(0xb8028c84, 0x00200020);
	rtd_outl(0xb8028c88, 0x00200020);
	rtd_outl(0xb8028c8c, 0x00200020);
	rtd_outl(0xb8028c90, 0x00200020);
	rtd_outl(0xb8028c94, 0x00300010);
	rtd_outl(0xb8028c98, 0x10101010);
	rtd_outl(0xb8028c9c, 0x10101010);
	rtd_outl(0xb8028ca0, 0x01000100);
	rtd_outl(0xb8028ca4, 0x01000100);
	rtd_outl(0xb8028ca8, 0x01000100);
	rtd_outl(0xb8028cac, 0x01000100);
	rtd_outl(0xb8028cb0, 0x01a001a0);
	rtd_outl(0xb8028cb4, 0x01a001a0);
	rtd_outl(0xb8028cb8, 0x01a001a0);
	rtd_outl(0xb8028cbc, 0x01a001a0);
	rtd_outl(0xb8028cc0, 0x10001000);
	rtd_outl(0xb8028cc4, 0x10001000);
	rtd_outl(0xb8028cc8, 0x10001000);
	rtd_outl(0xb8028ccc, 0x10001000);
	rtd_outl(0xb8028cd0, 0x10101010);
	rtd_outl(0xb8028cd4, 0x10101010);
	rtd_outl(0xb8028cd8, 0x20001555);
	rtd_outl(0xb8028cdc, 0x15551555);
	rtd_outl(0xb8028ce0, 0x15551555);
	rtd_outl(0xb8028ce4, 0x15551555);
	rtd_outl(0xb8028ce8, 0x15551555);
	rtd_outl(0xb8028cec, 0x10001000);
	rtd_outl(0xb8028cf0, 0x10001000);
	rtd_outl(0xb8028cf4, 0x10001000);
	rtd_outl(0xb8028cf8, 0x10001000);
	rtd_outl(0xb8028cfc, 0x10001000);
	rtd_outl(0xb8028d00, 0x10001000);
	rtd_outl(0xb8028d04, 0x10001000);
	rtd_outl(0xb8028d08, 0x10001000);
	rtd_outl(0xb8028d0c, 0x1000ffff);
	rtd_outl(0xb8028d10, 0xffffffff);
	rtd_outl(0xb8028d14, 0xffffff01);
	rtd_outl(0xb8028d18, 0x00020003);
	rtd_outl(0xb8028d1c, 0x00040005);
	rtd_outl(0xb8028d20, 0x00060007);
	rtd_outl(0xb8028d24, 0x00080009);
	rtd_outl(0xb8028d28, 0x000a000b);
	rtd_outl(0xb8028d2c, 0x000c000d);
	rtd_outl(0xb8028d30, 0x000e000f);
	rtd_outl(0xb8028d34, 0x00040404);
	rtd_outl(0xb8028d38, 0x04913000);
	rtd_outl(0xb8028d3c, 0x80004040);
	rtd_outl(0xb8028d40, 0x20000880);
	rtd_outl(0xb8028d44, 0x80208004);
	rtd_outl(0xb8028d48, 0x10204020);
	rtd_outl(0xb8028d4c, 0xff010110);
	rtd_outl(0xb8028d50, 0x20304050);
	rtd_outl(0xb8028d54, 0x60708090);
	rtd_outl(0xb8028d58, 0xa0b0c0d0);
	rtd_outl(0xb8028d5c, 0xe0f01000);
	rtd_outl(0xb8028d60, 0x0aab071c);
	rtd_outl(0xb8028d64, 0x04be0329);
	rtd_outl(0xb8028d68, 0x021b0168);
	rtd_outl(0xb8028d6c, 0x00f000a0);
	rtd_outl(0xb8028d70, 0x006b0047);
	rtd_outl(0xb8028d74, 0x002f0020);
	rtd_outl(0xb8028d78, 0x0015000e);
	rtd_outl(0xb8028d7c, 0x00090006);
	rtd_outl(0xb8028d80, 0x00040003);
	rtd_outl(0xb8028d84, 0x00020001);
	rtd_outl(0xb8028d88, 0x00010001);
	rtd_outl(0xb8028d8c, 0x00000000);
	rtd_outl(0xb8028d90, 0x00000000);
	rtd_outl(0xb8028d94, 0x00000000);
	rtd_outl(0xb8028d98, 0x00000000);
	rtd_outl(0xb8028d9c, 0x00000000);
	rtd_outl(0xb8028da0, 0x00000000);
	rtd_outl(0xb8028da4, 0x00000000);
	rtd_outl(0xb8028da8, 0x00000000);
	rtd_outl(0xb8028dac, 0x00000000);
	rtd_outl(0xb8028db0, 0x00000000);
	rtd_outl(0xb8028db4, 0x00000000);
	rtd_outl(0xb8028db8, 0x00000000);
	rtd_outl(0xb8028dbc, 0x00000000);
	rtd_outl(0xb8028dc0, 0x00000000);
	rtd_outl(0xb8028dc4, 0x00000000);
	rtd_outl(0xb8028dc8, 0x00000000);
	rtd_outl(0xb8028dcc, 0x00000000);
	rtd_outl(0xb8028dd0, 0x00000000);
	rtd_outl(0xb8028dd4, 0x00000000);
	rtd_outl(0xb8028dd8, 0x00000000);
	rtd_outl(0xb8028ddc, 0x00000000);
	rtd_outl(0xb8028de0, 0x22661489);
	rtd_outl(0xb8028de4, 0x0fe90e5f);
	rtd_outl(0xb8028de8, 0x0ddb0db0);
	rtd_outl(0xb8028dec, 0x0da10d9c);
	rtd_outl(0xb8028df0, 0x0d9a0d9a);
	rtd_outl(0xb8028df4, 0x0d9a0d9a);
	rtd_outl(0xb8028df8, 0x0d9c0da1);
	rtd_outl(0xb8028dfc, 0x0db00ddb);
	rtd_outl(0xb8029600, 0x0e5f0fe9);
	rtd_outl(0xb8029604, 0x14892266);
	rtd_outl(0xb8029608, 0x22662266);
	rtd_outl(0xb802960c, 0x22662266);
	rtd_outl(0xb8029610, 0x22662266);
	rtd_outl(0xb8029614, 0x22662266);
	rtd_outl(0xb8029618, 0x22662266);
	rtd_outl(0xb802961c, 0x22662266);
	rtd_outl(0xb8029620, 0x22662266);
	rtd_outl(0xb8029624, 0x22662266);
	rtd_outl(0xb8029628, 0x22662266);
	rtd_outl(0xb802962c, 0x22662266);
	rtd_outl(0xb8029630, 0x22662266);
	rtd_outl(0xb8029634, 0x22662266);
	rtd_outl(0xb8029638, 0x22662266);
	rtd_outl(0xb802963c, 0x22662266);
	rtd_outl(0xb8029640, 0x22662266);
	rtd_outl(0xb8029644, 0x22662266);
	rtd_outl(0xb8029648, 0x22662266);
	rtd_outl(0xb802964c, 0x22662266);
	rtd_outl(0xb8029650, 0x22662266);
	rtd_outl(0xb8029654, 0x22662266);
	rtd_outl(0xb8029658, 0x22662266);
	rtd_outl(0xb802965c, 0x22662266);
	rtd_outl(0xb8029660, 0x22662266);
	rtd_outl(0xb8029664, 0x22662266);
	rtd_outl(0xb8029668, 0x22662266);
	rtd_outl(0xb802966c, 0x22662266);
	rtd_outl(0xb8029670, 0x22662266);
	rtd_outl(0xb8029674, 0x22662266);
	rtd_outl(0xb8029678, 0x22662266);
	rtd_outl(0xb802967c, 0x22662266);
	rtd_outl(0xb8029680, 0x22662266);
	rtd_outl(0xb8029684, 0x22662266);
	rtd_outl(0xb8029688, 0x22662266);
	rtd_outl(0xb802968c, 0x22662266);
	rtd_outl(0xb8029690, 0x22662266);
	rtd_outl(0xb8029694, 0x22662266);
	rtd_outl(0xb8029698, 0x22662266);
	rtd_outl(0xb802969c, 0x22662266);
	rtd_outl(0xb80296a0, 0x12660400);
	rtd_outl(0xb80296a4, 0x04000400);
	rtd_outl(0xb80296a8, 0x04000400);
	rtd_outl(0xb80296ac, 0x04000400);
	rtd_outl(0xb80296b0, 0x0400ffff);
	rtd_outl(0xb80296b4, 0xffffffff);
	rtd_outl(0xb80296b8, 0xffffffff);
	rtd_outl(0xb80296bc, 0xffffffff);
	rtd_outl(0xb80296c0, 0xffff0400);
	rtd_outl(0xb80296c4, 0x04000400);
	rtd_outl(0xb80296c8, 0x04000400);
	rtd_outl(0xb80296cc, 0x04000400);
	rtd_outl(0xb80296d0, 0x04001000);
	rtd_outl(0xb80296d4, 0x10001000);
	rtd_outl(0xb80296d8, 0x10001000);
	rtd_outl(0xb80296dc, 0x10001000);
	rtd_outl(0xb80296e0, 0x10004040);
	rtd_outl(0xb80296e4, 0x40404040);
	rtd_outl(0xb80296e8, 0x40400200);
	rtd_outl(0xb80296ec, 0x02000200);
	rtd_outl(0xb80296f0, 0x02000200);
	rtd_outl(0xb80296f4, 0x02000200);
	rtd_outl(0xb80296f8, 0x02000800);
	rtd_outl(0xb80296fc, 0x08000800);
	rtd_outl(0xb8029700, 0x08000800);
	rtd_outl(0xb8029704, 0x08000800);
	rtd_outl(0xb8029708, 0x08000800);
	rtd_outl(0xb802970c, 0x04000400);
	rtd_outl(0xb8029710, 0x04000400);
	rtd_outl(0xb8029714, 0x04000400);
	rtd_outl(0xb8029718, 0x04000400);
	rtd_outl(0xb802971c, 0x04004000);
	rtd_outl(0xb8029720, 0x20000800);
	rtd_outl(0xb8029724, 0x10300030);
	rtd_outl(0xb8029728, 0x00300030);
	rtd_outl(0xb802972c, 0x00300030);
	rtd_outl(0xb8029730, 0x00300030);
	rtd_outl(0xb8029734, 0x003000ff);
	rtd_outl(0xb8029738, 0xffffffff);
	rtd_outl(0xb802973c, 0xffffffff);
	rtd_outl(0xb8029740, 0x08180808);
	rtd_outl(0xb8029744, 0x18080818);
	rtd_outl(0xb8029748, 0x08081808);
	rtd_outl(0xb802974c, 0x08180808);
	rtd_outl(0xb8029750, 0x18080818);
	rtd_outl(0xb8029754, 0x08081808);
	rtd_outl(0xb8029758, 0x00600060);
	rtd_outl(0xb802975c, 0x00600060);
	rtd_outl(0xb8029760, 0x00600060);
	rtd_outl(0xb8029764, 0x00600060);
	rtd_outl(0xb8029768, 0x10101010);
	rtd_outl(0xb802976c, 0x10101010);
	rtd_outl(0xb8029770, 0x16000200);
	rtd_outl(0xb8029774, 0x02000600);
	rtd_outl(0xb8029778, 0x06000a00);
	rtd_outl(0xb802977c, 0x0a000e00);
	rtd_outl(0xb8029780, 0x0e001200);
	rtd_outl(0xb8029784, 0x12001600);
	rtd_outl(0xb8029788, 0x08005460);
	rtd_outl(0xb802978c, 0x54605460);
	rtd_outl(0xb8029790, 0x54605460);
	rtd_outl(0xb8029794, 0x54605460);
	rtd_outl(0xb8029798, 0x54605460);
	rtd_outl(0xb802979c, 0x54605460);
	rtd_outl(0xb80297a0, 0x54605460);
	rtd_outl(0xb80297a4, 0x54605460);
	rtd_outl(0xb80297a8, 0x54605460);
	rtd_outl(0xb80297ac, 0x54605460);
	rtd_outl(0xb80297b0, 0x54605460);
	rtd_outl(0xb80297b4, 0x54605460);
	rtd_outl(0xb80297b8, 0x54605460);
	rtd_outl(0xb80297bc, 0x54605460);
	rtd_outl(0xb80297c0, 0x54605460);
	rtd_outl(0xb80297c4, 0x54605460);
	rtd_outl(0xb80297c8, 0x54605460);
	rtd_outl(0xb80297cc, 0x54605460);
	rtd_outl(0xb80297d0, 0x54605460);
	rtd_outl(0xb80297d4, 0x54605460);
	rtd_outl(0xb80297d8, 0x54605460);
	rtd_outl(0xb80297dc, 0x54605460);
	rtd_outl(0xb80297e0, 0x54605460);
	rtd_outl(0xb80297e4, 0x54605460);
	rtd_outl(0xb80297e8, 0x54600666);
	rtd_outl(0xb80297ec, 0x06660666);
	rtd_outl(0xb80297f0, 0x06660666);
	rtd_outl(0xb80297f4, 0x06660666);
	rtd_outl(0xb80297f8, 0x06660606);
	rtd_outl(0xb80297fc, 0x06060606);
	rtd_outl(0xb8028800, 0x0606147a);
	rtd_outl(0xb8028804, 0xe1147ae1);
	rtd_outl(0xb8028808, 0x147ae114);
	rtd_outl(0xb802880c, 0x7ae1147a);
	rtd_outl(0xb8028810, 0xe1147ae1);
	rtd_outl(0xb8028814, 0x147ae114);
	rtd_outl(0xb8028818, 0x7ae1147a);
	rtd_outl(0xb802881c, 0xe1101010);
	rtd_outl(0xb8028820, 0x10101010);
	rtd_outl(0xb8028824, 0x10104040);
	rtd_outl(0xb8028828, 0x40404040);
	rtd_outl(0xb802882c, 0x404040e0);
	rtd_outl(0xb8028830, 0x6cff40a0);
	rtd_outl(0xb8028834, 0xa040a0a0);
	rtd_outl(0xb8028838, 0x46888088);
	rtd_outl(0xb802883c, 0x80888080);
	rtd_outl(0xb8028840, 0x88808880);
	rtd_outl(0xb8028844, 0x88888088);
	rtd_outl(0xb8028848, 0x80888080);
	rtd_outl(0xb802884c, 0x88808880);
	rtd_outl(0xb8028850, 0x88484000);
	rtd_outl(0xb8028854, 0x48400048);
	rtd_outl(0xb8028858, 0x40004840);
	rtd_outl(0xb802885c, 0x00000484);
	rtd_outl(0xb8028860, 0x00048400);
	rtd_outl(0xb8028864, 0x04840004);
	rtd_outl(0xb8028868, 0x8460f504);
	rtd_outl(0xb802886c, 0x80402140);
	rtd_outl(0xb8028870, 0x38302820);
	rtd_outl(0xb8028874, 0x18101010);
	rtd_outl(0xb8028878, 0x10101010);
	rtd_outl(0xb802887c, 0x10101010);


	lg_m_plus_m_plus_ctl_reg.regValue = IoReg_Read32(LG_M_PLUS_M_plus_ctl_reg);
	lg_m_plus_m_plus_ctl_reg.wpr_on = 1;
	IoReg_Write32(LG_M_PLUS_M_plus_ctl_reg,lg_m_plus_m_plus_ctl_reg.regValue);

	ppoverlay_display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	ppoverlay_display_timing_ctrl2_reg.mplus_rgbw_en = 1; //mplus enable, rgbw disable, BOE-rgbw disable
	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg,ppoverlay_display_timing_ctrl2_reg.regValue);

}

extern UINT16 romcode_boe_rgbw_table_vivi_160815[16128];
void vbe_disp_panel_boe_resume_flow(void)
{
    // === CRT reset off===
    sys_reg_sys_srst3_RBUS sys_reg_sys_srst3_REG;
    sys_reg_sys_clken3_RBUS sys_reg_sys_clken3_REG;
    ppoverlay_display_timing_ctrl2_RBUS display_timing_ctrl2_REG;

    // flow:  rst_on -> clk_on
    //sys_reg_sys_srst3_REG.regValue = IoReg_Read32(SYS_REG_SYS_SRST3_reg);
    //sys_reg_sys_clken3_REG.regValue = IoReg_Read32(SYS_REG_SYS_CLKEN3_reg);
    sys_reg_sys_srst3_REG.regValue = 0;
    sys_reg_sys_srst3_REG.rstn_siliconworks_rgbw = 1;
    sys_reg_sys_srst3_REG.write_data = 1;
    IoReg_Write32(SYS_REG_SYS_SRST3_reg, sys_reg_sys_srst3_REG.regValue);
    sys_reg_sys_clken3_REG.regValue = 0;
    sys_reg_sys_clken3_REG.clken_disp_lg_mplus = 1;
    sys_reg_sys_clken3_REG.write_data = 1;
    IoReg_Write32(SYS_REG_SYS_CLKEN3_reg, sys_reg_sys_clken3_REG.regValue);

    display_timing_ctrl2_REG.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
    display_timing_ctrl2_REG.mplus_rgbw_en = 4;
    IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, display_timing_ctrl2_REG.regValue);

    if (Get_DISPLAY_PANEL_CUSTOM_INDEX()==P_CEDS_LG_49INCH_UHD60_12LANE){
        IoReg_Write32(0xb8028c00, 0x10001000);
        IoReg_Write32(0xb8028c04, 0x10001000);
        IoReg_Write32(0xb8028c08, 0x10001000);
        IoReg_Write32(0xb8028c0c, 0x10001000);
        IoReg_Write32(0xb8028c10, 0x10001000);
        IoReg_Write32(0xb8028c14, 0x10001000);
        IoReg_Write32(0xb8028c18, 0x10001000);
        IoReg_Write32(0xb8028c1c, 0x10001200);
        IoReg_Write32(0xb8028c20, 0x04000000);
        IoReg_Write32(0xb8028c24, 0x7e90007e);
        IoReg_Write32(0xb8028c28, 0x04000000);
        IoReg_Write32(0xb8028c2c, 0x7e90007e);
        IoReg_Write32(0xb8028c30, 0x00011400);
        IoReg_Write32(0xb8028c34, 0x10000006);
        IoReg_Write32(0xb8028c38, 0x00012000);
        IoReg_Write32(0xb8028c3c, 0x10000006);
        IoReg_Write32(0xb8028c40, 0x01000000);
        IoReg_Write32(0xb8028c44, 0x01800800);
        IoReg_Write32(0xb8028c48, 0x00000010);
        IoReg_Write32(0xb8028c4c, 0x01000001);
        IoReg_Write32(0xb8028c50, 0x01801000);
        IoReg_Write32(0xb8028c54, 0x00000010);
        IoReg_Write32(0xb8028c58, 0x20000000);
        IoReg_Write32(0xb8028c5c, 0x00000000);
        IoReg_Write32(0xb8028c60, 0x00000000);
        IoReg_Write32(0xb8028c64, 0x20000000);
        IoReg_Write32(0xb8028c68, 0x00010000);
        IoReg_Write32(0xb8028c6c, 0x00000000);
        IoReg_Write32(0xb8028c70, 0x00010000);
        IoReg_Write32(0xb8028c74, 0x00020000);
        IoReg_Write32(0xb8028c78, 0x005d1482);
        IoReg_Write32(0xb8028c7c, 0x00040bb8);
        IoReg_Write32(0xb8028c80, 0x00000000);
        IoReg_Write32(0xb8028c84, 0x00000000);
        IoReg_Write32(0xb8028c88, 0x00000000);
        IoReg_Write32(0xb8028c8c, 0x04000008);
        IoReg_Write32(0xb8028c90, 0x00010040);
        IoReg_Write32(0xb8028c94, 0x00000000);
        IoReg_Write32(0xb8028c98, 0x00000000);
        IoReg_Write32(0xb8028c9c, 0x00000000);
        IoReg_Write32(0xb8028ca0, 0x00000000);
        IoReg_Write32(0xb8028ca4, 0x0f000870);
        IoReg_Write32(0xb8028ca8, 0x00000808);
        IoReg_Write32(0xb8028cac, 0x01000c00);
        IoReg_Write32(0xb8028cb0, 0x000800c0);
        IoReg_Write32(0xb8028cb4, 0x6c9f0100);
        IoReg_Write32(0xb8028cb8, 0x00000000);
        IoReg_Write32(0xb8028cbc, 0x00000000);
        IoReg_Write32(0xb8028cc0, 0x00800180);
        IoReg_Write32(0xb8028cc4, 0x00800018);
        IoReg_Write32(0xb8028cc8, 0x00ff0000);
        IoReg_Write32(0xb8028ccc, 0x00000000);
        IoReg_Write32(0xb8028cd0, 0x00000000);
        IoReg_Write32(0xb8028cd4, 0x10000001);
        IoReg_Write32(0xb8028cd8, 0x00000002);
        IoReg_Write32(0xb8028cdc, 0x00010000);
        IoReg_Write32(0xb8028ce0, 0x00000000);
        IoReg_Write32(0xb8028ce4, 0x00000001);
        IoReg_Write32(0xb8028ce8, 0x000e001a);
        IoReg_Write32(0xb8028cec, 0x00220040);
        IoReg_Write32(0xb8028cf0, 0x00500060);
        IoReg_Write32(0xb8028cf4, 0x00700080);
        IoReg_Write32(0xb8028cf8, 0x009000a0);
        IoReg_Write32(0xb8028cfc, 0x00b000c0);
        IoReg_Write32(0xb8028d00, 0x00d000e0);
        IoReg_Write32(0xb8028d04, 0x00f00006);
        IoReg_Write32(0xb8028d08, 0x0000fa80);
        IoReg_Write32(0xb8028d0c, 0xfb000000);
        IoReg_Write32(0xb8028d10, 0x00000000);
        IoReg_Write32(0xb8028d14, 0x00000000);
        IoReg_Write32(0xb8028d18, 0x00000000);
        IoReg_Write32(0xb8028d1c, 0x02000000);
        IoReg_Write32(0xb8028d20, 0x00000000);
        IoReg_Write32(0xb8028d24, 0x00000000);
        IoReg_Write32(0xb8028d28, 0x00000000);
        IoReg_Write32(0xb8028d2c, 0x00000000);
        IoReg_Write32(0xb8028d30, 0x00000000);
        IoReg_Write32(0xb8028d34, 0x00000000);
        IoReg_Write32(0xb8028d38, 0x000c0000);
        IoReg_Write32(0xb8028d3c, 0x01000100);
        IoReg_Write32(0xb8028d40, 0x01000000);
        IoReg_Write32(0xb8028d44, 0x00000000);
        IoReg_Write32(0xb8028d48, 0x00000400);
        IoReg_Write32(0xb8028d4c, 0x00000000);
        IoReg_Write32(0xb8028d50, 0x00000400);
        IoReg_Write32(0xb8028d54, 0x00000000);
        IoReg_Write32(0xb8028d58, 0x00000400);
        IoReg_Write32(0xb8028d5c, 0x00000000);
        IoReg_Write32(0xb8028d60, 0x00000000);
        IoReg_Write32(0xb8028d64, 0x00000000);
        IoReg_Write32(0xb8028d68, 0x00000000);
        IoReg_Write32(0xb8028d6c, 0x00000000);
        IoReg_Write32(0xb8028d70, 0x00000000);
        IoReg_Write32(0xb8028d74, 0x00000000);
        IoReg_Write32(0xb8028d78, 0x00000000);
        IoReg_Write32(0xb8028d7c, 0x028a03ff);
        IoReg_Write32(0xb8028d80, 0x028a0172);
        IoReg_Write32(0xb8028d84, 0x03ff0172);
        IoReg_Write32(0xb8028d88, 0x00ff00e6);
        IoReg_Write32(0xb8028d8c, 0x00ff0190);
        IoReg_Write32(0xb8028d90, 0x01ff0190);
        IoReg_Write32(0xb8028d94, 0x00000000);
        IoReg_Write32(0xb8028d98, 0x00000000);
        IoReg_Write32(0xb8028d9c, 0x00000000);
        IoReg_Write32(0xb8028da0, 0x03840384);
        IoReg_Write32(0xb8028da4, 0x03840320);
        IoReg_Write32(0xb8028da8, 0x02ee0258);
        IoReg_Write32(0xb8028dac, 0x00640064);
        IoReg_Write32(0xb8028db0, 0x00000000);
        IoReg_Write32(0xb8028db4, 0x00000000);
        IoReg_Write32(0xb8028db8, 0x00000000);
        IoReg_Write32(0xb8028dbc, 0x00000000);
        IoReg_Write32(0xb8028dc0, 0x00000000);
        IoReg_Write32(0xb8028dc4, 0x00000000);
        IoReg_Write32(0xb8028dc8, 0x00000000);
        IoReg_Write32(0xb8028dcc, 0x00000000);
        IoReg_Write32(0xb8028dd0, 0x0da12dc2);
        IoReg_Write32(0xb8028dd4, 0x049b0000);
        IoReg_Write32(0xb8028dd8, 0x00000003);
        IoReg_Write32(0xb8028ddc, 0x46500000);
        IoReg_Write32(0xb8028de0, 0x30bc0000);
        IoReg_Write32(0xb8028de4, 0x4000303c);
        IoReg_Write32(0xb8028de8, 0x3fff3800);
        IoReg_Write32(0xb8028dec, 0x157c0000);
        IoReg_Write32(0xb8028df0, 0x000c03ac);
        IoReg_Write32(0xb8028df4, 0x00000000);
        IoReg_Write32(0xb8028df8, 0x00000002);
        IoReg_Write32(0xb8028dfc, 0x00000000);

    }else{
        IoReg_Write32(0xb8028c00, 0x10001000);
        IoReg_Write32(0xb8028c04, 0x10001000);
        IoReg_Write32(0xb8028c08, 0x10001000);
        IoReg_Write32(0xb8028c0c, 0x10001000);
        IoReg_Write32(0xb8028c10, 0x10001000);
        IoReg_Write32(0xb8028c14, 0x10001000);
        IoReg_Write32(0xb8028c18, 0x10001000);
        IoReg_Write32(0xb8028c1c, 0x10001200);
        IoReg_Write32(0xb8028c20, 0x04000000);
        IoReg_Write32(0xb8028c24, 0x7e90007e);
        IoReg_Write32(0xb8028c28, 0x04000000);
        IoReg_Write32(0xb8028c2c, 0x7e90007e);
        IoReg_Write32(0xb8028c30, 0x00011400);
        IoReg_Write32(0xb8028c34, 0x10000006);
        IoReg_Write32(0xb8028c38, 0x00012000);
        IoReg_Write32(0xb8028c3c, 0x10000006);
        IoReg_Write32(0xb8028c40, 0x01000000);
        IoReg_Write32(0xb8028c44, 0x01800800);
        IoReg_Write32(0xb8028c48, 0x00000010);
        IoReg_Write32(0xb8028c4c, 0x01000001);
        IoReg_Write32(0xb8028c50, 0x01801000);
        IoReg_Write32(0xb8028c54, 0x00000010);
        IoReg_Write32(0xb8028c58, 0x20000000);
        IoReg_Write32(0xb8028c5c, 0x00000000);
        IoReg_Write32(0xb8028c60, 0x00000000);
        IoReg_Write32(0xb8028c64, 0x20000000);
        IoReg_Write32(0xb8028c68, 0x00010000);
        IoReg_Write32(0xb8028c6c, 0x00000000);
        IoReg_Write32(0xb8028c70, 0x00010000);
        IoReg_Write32(0xb8028c74, 0x00020000);
        IoReg_Write32(0xb8028c78, 0x005d1482);
        IoReg_Write32(0xb8028c7c, 0x00040bb8);
        IoReg_Write32(0xb8028c80, 0x00000000);
        IoReg_Write32(0xb8028c84, 0x00000000);
        IoReg_Write32(0xb8028c88, 0x00000000);
        IoReg_Write32(0xb8028c8c, 0x04000008);
        IoReg_Write32(0xb8028c90, 0x00010040);
        IoReg_Write32(0xb8028c94, 0x00000000);
        IoReg_Write32(0xb8028c98, 0x00000000);
        IoReg_Write32(0xb8028c9c, 0x00000000);
        IoReg_Write32(0xb8028ca0, 0x00000000);
        IoReg_Write32(0xb8028ca4, 0x0f000870);
        IoReg_Write32(0xb8028ca8, 0x00000808);
        IoReg_Write32(0xb8028cac, 0x01000c00);
        IoReg_Write32(0xb8028cb0, 0x000800c0);
        IoReg_Write32(0xb8028cb4, 0x6c9f0100);
        IoReg_Write32(0xb8028cb8, 0x00000000);
        IoReg_Write32(0xb8028cbc, 0x00000000);
        IoReg_Write32(0xb8028cc0, 0x00800180);
        IoReg_Write32(0xb8028cc4, 0x00800018);
        IoReg_Write32(0xb8028cc8, 0x00ff0000);
        IoReg_Write32(0xb8028ccc, 0x00000000);
        IoReg_Write32(0xb8028cd0, 0x00000000);
        IoReg_Write32(0xb8028cd4, 0x10000001);
        IoReg_Write32(0xb8028cd8, 0x00000002);
        IoReg_Write32(0xb8028cdc, 0x00010000);
        IoReg_Write32(0xb8028ce0, 0x00000000);
        IoReg_Write32(0xb8028ce4, 0x00000001);
        IoReg_Write32(0xb8028ce8, 0x000e001a);
        IoReg_Write32(0xb8028cec, 0x00220040);
        IoReg_Write32(0xb8028cf0, 0x00500060);
        IoReg_Write32(0xb8028cf4, 0x00700080);
        IoReg_Write32(0xb8028cf8, 0x009000a0);
        IoReg_Write32(0xb8028cfc, 0x00b000c0);
        IoReg_Write32(0xb8028d00, 0x00d000e0);
        IoReg_Write32(0xb8028d04, 0x00f00006);
        IoReg_Write32(0xb8028d08, 0x0000fa80);
        IoReg_Write32(0xb8028d0c, 0xfb000000);
        IoReg_Write32(0xb8028d10, 0x00000000);
        IoReg_Write32(0xb8028d14, 0x00000000);
        IoReg_Write32(0xb8028d18, 0x00000000);
        IoReg_Write32(0xb8028d1c, 0x02000000);
        IoReg_Write32(0xb8028d20, 0x00000000);
        IoReg_Write32(0xb8028d24, 0x00000000);
        IoReg_Write32(0xb8028d28, 0x00000000);
        IoReg_Write32(0xb8028d2c, 0x00000000);
        IoReg_Write32(0xb8028d30, 0x00000000);
        IoReg_Write32(0xb8028d34, 0x00000000);
        IoReg_Write32(0xb8028d38, 0x000c0000);
        IoReg_Write32(0xb8028d3c, 0x01000100);
        IoReg_Write32(0xb8028d40, 0x01000000);
        IoReg_Write32(0xb8028d44, 0x00000000);
        IoReg_Write32(0xb8028d48, 0x00000400);
        IoReg_Write32(0xb8028d4c, 0x00000000);
        IoReg_Write32(0xb8028d50, 0x00000400);
        IoReg_Write32(0xb8028d54, 0x00000000);
        IoReg_Write32(0xb8028d58, 0x00000400);
        IoReg_Write32(0xb8028d5c, 0x00000000);
        IoReg_Write32(0xb8028d60, 0x00000000);
        IoReg_Write32(0xb8028d64, 0x00000000);
        IoReg_Write32(0xb8028d68, 0x00000000);
        IoReg_Write32(0xb8028d6c, 0x00000000);
        IoReg_Write32(0xb8028d70, 0x00000000);
        IoReg_Write32(0xb8028d74, 0x00000000);
        IoReg_Write32(0xb8028d78, 0x00000000);
        IoReg_Write32(0xb8028d7c, 0x028a03ff);
        IoReg_Write32(0xb8028d80, 0x028a0172);
        IoReg_Write32(0xb8028d84, 0x03ff0172);
        IoReg_Write32(0xb8028d88, 0x00ff00e6);
        IoReg_Write32(0xb8028d8c, 0x00ff0190);
        IoReg_Write32(0xb8028d90, 0x01ff0190);
        IoReg_Write32(0xb8028d94, 0x00000000);
        IoReg_Write32(0xb8028d98, 0x00000000);
        IoReg_Write32(0xb8028d9c, 0x00000000);
        IoReg_Write32(0xb8028da0, 0x03840384);
        IoReg_Write32(0xb8028da4, 0x038402b0);
        IoReg_Write32(0xb8028da8, 0x02a00258);
        IoReg_Write32(0xb8028dac, 0x00640064);
        IoReg_Write32(0xb8028db0, 0x00000000);
        IoReg_Write32(0xb8028db4, 0x00000000);
        IoReg_Write32(0xb8028db8, 0x00000000);
        IoReg_Write32(0xb8028dbc, 0x00000000);
        IoReg_Write32(0xb8028dc0, 0x00000000);
        IoReg_Write32(0xb8028dc4, 0x00000000);
        IoReg_Write32(0xb8028dc8, 0x00000000);
        IoReg_Write32(0xb8028dcc, 0x00000000);
        IoReg_Write32(0xb8028dd0, 0x0da12dc2);
        IoReg_Write32(0xb8028dd4, 0x049b0000);
        IoReg_Write32(0xb8028dd8, 0x00000003);
        IoReg_Write32(0xb8028ddc, 0x46500000);
        IoReg_Write32(0xb8028de0, 0x30bc0000);
        IoReg_Write32(0xb8028de4, 0x4000303c);
        IoReg_Write32(0xb8028de8, 0x3fff3800);
        IoReg_Write32(0xb8028dec, 0x157c0000);
        IoReg_Write32(0xb8028df0, 0x000c03ac);
        IoReg_Write32(0xb8028df4, 0x00000000);
        IoReg_Write32(0xb8028df8, 0x00000002);
        IoReg_Write32(0xb8028dfc, 0x00000000);
    }
    display_timing_ctrl2_REG.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
    display_timing_ctrl2_REG.dispd_lg_mplus_siw_rgbw_clk_en = 1;
    IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, display_timing_ctrl2_REG.regValue);

}

void vbe_disp_panel_rgbw_resume(void)
{
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"###[%s][Line:%d]###\n", __FUNCTION__, __LINE__);

	down(&VBE_RGBW_Resume_Semaphore);
	if(Get_DISPLAY_PANEL_MPLUS_RGBW() == TRUE){
		vbe_disp_panel_mplus_resume_flow();
	}else if(Get_DISPLAY_PANEL_BOW_RGBW() == TRUE){
		vbe_disp_panel_boe_resume_flow();
	}else{
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"not rgbw tcon \n");
	}
	up(&VBE_RGBW_Resume_Semaphore);
}

void vbe_disp_panel_suspend(void)
{
	//panel driver setting
	vbe_disp_suspend_resume.PPOVERLAY_Display_Background_Color_S_R = IoReg_Read32(PPOVERLAY_Display_Background_Color_reg);
	vbe_disp_suspend_resume.PPOVERLAY_Display_Background_Color_2_S_R = IoReg_Read32(PPOVERLAY_Display_Background_Color_2_reg);
	vbe_disp_suspend_resume.PPOVERLAY_Main_Display_Control_RSV_S_R = IoReg_Read32(PPOVERLAY_Main_Display_Control_RSV_reg);
	vbe_disp_suspend_resume.PPOVERLAY_Main_Border_Highlight_Border_Color1_S_R = IoReg_Read32(PPOVERLAY_Main_Border_Highlight_Border_Color1_reg);
	vbe_disp_suspend_resume.PPOVERLAY_Main_Border_Highlight_Border_Color2_S_R = IoReg_Read32(PPOVERLAY_Main_Border_Highlight_Border_Color2_reg);
	vbe_disp_suspend_resume.PPOVERLAY_Main_Border_Highlight_Border_Color3_S_R = IoReg_Read32(PPOVERLAY_Main_Border_Highlight_Border_Color3_reg);
	vbe_disp_suspend_resume.PPOVERLAY_MAIN_DEN_H_Start_End_S_R  = IoReg_Read32(PPOVERLAY_MAIN_DEN_H_Start_End_reg);
	vbe_disp_suspend_resume.PPOVERLAY_MAIN_DEN_V_Start_End_S_R = IoReg_Read32(PPOVERLAY_MAIN_DEN_V_Start_End_reg);
	vbe_disp_suspend_resume.PPOVERLAY_MAIN_Background_H_Start_End_S_R = IoReg_Read32(PPOVERLAY_MAIN_Background_H_Start_End_reg);
	vbe_disp_suspend_resume.PPOVERLAY_MAIN_Background_V_Start_End_S_R  = IoReg_Read32(PPOVERLAY_MAIN_Background_V_Start_End_reg);
	vbe_disp_suspend_resume.PPOVERLAY_MAIN_Active_H_Start_End_S_R = IoReg_Read32(PPOVERLAY_MAIN_Active_H_Start_End_reg);
	vbe_disp_suspend_resume.PPOVERLAY_MAIN_Active_V_Start_End_S_R = IoReg_Read32(PPOVERLAY_MAIN_Active_V_Start_End_reg);

	//sfg
	vbe_disp_suspend_resume.SFG_SFG_ZZ_shift_dbg_CTRL_S_R = 		 IoReg_Read32(SFG_SFG_ZZ_shift_dbg_CTRL_reg);
	vbe_disp_suspend_resume.SFG_SFG_SWAP_CTRL0_S_R =				 IoReg_Read32(SFG_SFG_SWAP_CTRL0_reg);
	vbe_disp_suspend_resume.SFG_SFG_CRC_CTRL_S_R =					 IoReg_Read32(SFG_SFG_CRC_CTRL_reg);
	vbe_disp_suspend_resume.SFG_SFG_CRC_RESULT_S_R =				 IoReg_Read32(SFG_SFG_CRC_RESULT_reg);
	vbe_disp_suspend_resume.SFG_SFG_CRC_R_RESULT_S_R =				 IoReg_Read32(SFG_SFG_CRC_R_RESULT_reg);
	vbe_disp_suspend_resume.SFG_SFG_L_DES_CRC_S_R = 				 IoReg_Read32(SFG_SFG_L_DES_CRC_reg);
	vbe_disp_suspend_resume.SFG_SFG_R_DES_CRC_S_R = 				 IoReg_Read32(SFG_SFG_R_DES_CRC_reg);
	vbe_disp_suspend_resume.SFG_SFG_CRC_ERR_CNT_S_R =				 IoReg_Read32(SFG_SFG_CRC_ERR_CNT_reg);
	vbe_disp_suspend_resume.SFG_SFG_FORCE_BG_AT_DIF_S_R =			 IoReg_Read32(SFG_SFG_FORCE_BG_AT_DIF_reg);
	vbe_disp_suspend_resume.SFG_ZZ_CTRL_S_R =						 IoReg_Read32(SFG_ZZ_CTRL_reg);
	vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_0A_S_R = 			 IoReg_Read32(SFG_SFG_DUMMY_CTRL_0A_reg);
	vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_0B_S_R = 			 IoReg_Read32(SFG_SFG_DUMMY_CTRL_0B_reg);
	vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_1A_S_R = 			 IoReg_Read32(SFG_SFG_DUMMY_CTRL_1A_reg);
	vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_1B_S_R = 			 IoReg_Read32(SFG_SFG_DUMMY_CTRL_1B_reg);
	vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_8_S_R =				 IoReg_Read32(SFG_SFG_DUMMY_CTRL_8_reg);
	vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_10_S_R = 			 IoReg_Read32(SFG_SFG_DUMMY_CTRL_10_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_13_S_R =					 IoReg_Read32(SFG_SFG_CTRL_13_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_24_S_R =					 IoReg_Read32(SFG_SFG_CTRL_24_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_25_S_R =					 IoReg_Read32(SFG_SFG_CTRL_25_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_26_S_R =					 IoReg_Read32(SFG_SFG_CTRL_26_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_0_S_R =					 IoReg_Read32(SFG_SFG_CTRL_0_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_1_S_R =					 IoReg_Read32(SFG_SFG_CTRL_1_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_2_S_R =					 IoReg_Read32(SFG_SFG_CTRL_2_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_3_S_R =					 IoReg_Read32(SFG_SFG_CTRL_3_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_4_S_R =					 IoReg_Read32(SFG_SFG_CTRL_4_reg);
	vbe_disp_suspend_resume.SFG_SFG_START_CTRL_8_S_R =				 IoReg_Read32(SFG_SFG_START_CTRL_8_reg);
	vbe_disp_suspend_resume.SFG_SFG_START_CTRL_10_S_R = 			 IoReg_Read32(SFG_SFG_START_CTRL_10_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_11_S_R =					 IoReg_Read32(SFG_SFG_CTRL_11_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_12_S_R =					 IoReg_Read32(SFG_SFG_CTRL_12_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_6_S_R =					 IoReg_Read32(SFG_SFG_CTRL_6_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_7_S_R =					 IoReg_Read32(SFG_SFG_CTRL_7_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_8_S_R =					 IoReg_Read32(SFG_SFG_CTRL_8_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_9_S_R =					 IoReg_Read32(SFG_SFG_CTRL_9_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_5_S_R =					 IoReg_Read32(SFG_SFG_CTRL_5_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_A_S_R =					 IoReg_Read32(SFG_SFG_CTRL_A_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_B_S_R =					 IoReg_Read32(SFG_SFG_CTRL_B_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_C_S_R =					 IoReg_Read32(SFG_SFG_CTRL_C_reg);
	vbe_disp_suspend_resume.SFG_SFG_TG_AUTO_1_S_R = 				 IoReg_Read32(SFG_SFG_TG_AUTO_1_reg);
	vbe_disp_suspend_resume.SFG_SFG_TG_AUTO_2_S_R = 				 IoReg_Read32(SFG_SFG_TG_AUTO_2_reg);
	vbe_disp_suspend_resume.SFG_SFG_TG_AUTO_3_S_R = 				 IoReg_Read32(SFG_SFG_TG_AUTO_3_reg);
	vbe_disp_suspend_resume.SFG_SFG_TG_AUTO_4_S_R = 				 IoReg_Read32(SFG_SFG_TG_AUTO_4_reg);
	vbe_disp_suspend_resume.SFG_SFG_DUMMY_S_R = 					 IoReg_Read32(SFG_SFG_DUMMY_reg);
	vbe_disp_suspend_resume.SFG_SFG_BIST_MODE_S_R = 				 IoReg_Read32(SFG_SFG_BIST_MODE_reg);
	vbe_disp_suspend_resume.SFG_SFG_BIST_DONE_S_R = 				 IoReg_Read32(SFG_SFG_BIST_DONE_reg);
	vbe_disp_suspend_resume.SFG_SFG_BIST_FAIL_GROUP_S_R =			 IoReg_Read32(SFG_SFG_BIST_FAIL_GROUP_reg);
	vbe_disp_suspend_resume.SFG_SFG_BIST_FAIL_S_R = 				 IoReg_Read32(SFG_SFG_BIST_FAIL_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRF_MODE_S_R =					 IoReg_Read32(SFG_SFG_DRF_MODE_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRF_RESUME_S_R =				 IoReg_Read32(SFG_SFG_DRF_RESUME_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRF_DONE_S_R =					 IoReg_Read32(SFG_SFG_DRF_DONE_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRF_PAUSE_S_R = 				 IoReg_Read32(SFG_SFG_DRF_PAUSE_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRF_FAIL_GROUP_S_R =			 IoReg_Read32(SFG_SFG_DRF_FAIL_GROUP_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRF_FAI_S_R =					 IoReg_Read32(SFG_SFG_DRF_FAI_reg);
	vbe_disp_suspend_resume.SFG_SFG_BIST_OTHER_S_R =				 IoReg_Read32(SFG_SFG_BIST_OTHER_reg);
	vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_0_S_R =				 IoReg_Read32(SFG_SFG_MID_DUMMY_0_reg);
	vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_1_S_R =				 IoReg_Read32(SFG_SFG_MID_DUMMY_1_reg);
	vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_2_S_R =				 IoReg_Read32(SFG_SFG_MID_DUMMY_2_reg);
	vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_3_S_R =				 IoReg_Read32(SFG_SFG_MID_DUMMY_3_reg);
	vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_8_S_R =				 IoReg_Read32(SFG_SFG_MID_DUMMY_8_reg);
	vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_10_S_R =				 IoReg_Read32(SFG_SFG_MID_DUMMY_10_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_DUM_LINE_S_R = 			 IoReg_Read32(SFG_SFG_CTRL_DUM_LINE_reg);
	vbe_disp_suspend_resume.SFG_SFG_data_after_den_S_R =			 IoReg_Read32(SFG_SFG_data_after_den_reg);
	vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_0_S_R = 		 IoReg_Read32(SFG_SFG_insert_subpixel_0_reg);
	vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_1_S_R = 		 IoReg_Read32(SFG_SFG_insert_subpixel_1_reg);
	vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_2_S_R = 		 IoReg_Read32(SFG_SFG_insert_subpixel_2_reg);
	vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_3_S_R = 		 IoReg_Read32(SFG_SFG_insert_subpixel_3_reg);
	vbe_disp_suspend_resume.SFG_SFG_ctrl_10_S_R =					 IoReg_Read32(SFG_SFG_ctrl_10_reg);
	vbe_disp_suspend_resume.SFG_SFG_Last_ext_pixel_last_flip_S_R =	 IoReg_Read32(SFG_SFG_Last_ext_pixel_last_flip_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_14_S_R =					 IoReg_Read32(SFG_SFG_CTRL_14_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_15_S_R =					 IoReg_Read32(SFG_SFG_CTRL_15_reg);
	vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_11_S_R =				 IoReg_Read32(SFG_SFG_MID_DUMMY_11_reg);
	vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_12_S_R =				 IoReg_Read32(SFG_SFG_MID_DUMMY_12_reg);
	vbe_disp_suspend_resume.SFG_SFG_debug_S_R = 					 IoReg_Read32(SFG_SFG_debug_reg);
	vbe_disp_suspend_resume.SFG_SFG_data_capture_vh_S_R =			 IoReg_Read32(SFG_SFG_data_capture_vh_reg);
	vbe_disp_suspend_resume.SFG_SFG_data_capture_src_S_R =			 IoReg_Read32(SFG_SFG_data_capture_src_reg);
	vbe_disp_suspend_resume.SFG_SFG_data_capture_read_data_S_R =	 IoReg_Read32(SFG_SFG_data_capture_read_data_reg);
	vbe_disp_suspend_resume.SFG_SFG_last_seg_0_S_R =				 IoReg_Read32(SFG_SFG_last_seg_0_reg);
	vbe_disp_suspend_resume.SFG_SFG_last_seg_1_S_R =				 IoReg_Read32(SFG_SFG_last_seg_1_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_0_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_0_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_1_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_1_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_2_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_2_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_6_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_6_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_7_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_7_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_8_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_8_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_12_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_12_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_13_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_13_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_14_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_14_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_18_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_18_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_19_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_19_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_20_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_20_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_3_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_3_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_4_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_4_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_5_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_5_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_9_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_9_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_10_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_10_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_11_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_11_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_15_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_15_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_16_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_16_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_17_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_17_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_21_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_21_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_22_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_22_reg);
	vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_23_S_R =				 IoReg_Read32(SFG_SFG_DRD_CTRL_23_reg);
	vbe_disp_suspend_resume.SFG_SFG_START_CTRL_27_S_R = 			 IoReg_Read32(SFG_SFG_START_CTRL_27_reg);
	vbe_disp_suspend_resume.SFG_SFG_START_CTRL_28_S_R = 			 IoReg_Read32(SFG_SFG_START_CTRL_28_reg);
	vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_29_S_R = 			 IoReg_Read32(SFG_SFG_DUMMY_CTRL_29_reg);
	vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_30_S_R = 			 IoReg_Read32(SFG_SFG_DUMMY_CTRL_30_reg);
	vbe_disp_suspend_resume.SFG_SFG1_fw_ext_SUBPIXEL_S_R =			 IoReg_Read32(SFG_SFG1_fw_ext_SUBPIXEL_reg);
	vbe_disp_suspend_resume.SFG_SFG1_fw_ext_SUBPIXEL2_S_R = 		 IoReg_Read32(SFG_SFG1_fw_ext_SUBPIXEL2_reg);
	vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_0_S_R =			 IoReg_Read32(SFG_SFG1_DUM_DATA_LINE_0_reg);
	vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_1_S_R =			 IoReg_Read32(SFG_SFG1_DUM_DATA_LINE_1_reg);
	vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_2_S_R =			 IoReg_Read32(SFG_SFG1_DUM_DATA_LINE_2_reg);
	vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_3_S_R =			 IoReg_Read32(SFG_SFG1_DUM_DATA_LINE_3_reg);
	vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_4_S_R =			 IoReg_Read32(SFG_SFG1_DUM_DATA_LINE_4_reg);
	vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_5_S_R =			 IoReg_Read32(SFG_SFG1_DUM_DATA_LINE_5_reg);
	vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_6_S_R =			 IoReg_Read32(SFG_SFG1_DUM_DATA_LINE_6_reg);
	vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_7_S_R =			 IoReg_Read32(SFG_SFG1_DUM_DATA_LINE_7_reg);
	vbe_disp_suspend_resume.SFG_ZZ_CTRL_2_S_R = 					 IoReg_Read32(SFG_ZZ_CTRL_2_reg);
	vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_4_S_R = 		 IoReg_Read32(SFG_SFG_insert_subpixel_4_reg);
	vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_5_S_R = 		 IoReg_Read32(SFG_SFG_insert_subpixel_5_reg);
	vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_6_S_R = 		 IoReg_Read32(SFG_SFG_insert_subpixel_6_reg);
	vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_7_S_R = 		 IoReg_Read32(SFG_SFG_insert_subpixel_7_reg);
	vbe_disp_suspend_resume.SFG_SFG_Last_ext_pixel_last_flip_2_S_R = IoReg_Read32(SFG_SFG_Last_ext_pixel_last_flip_2_reg);
	vbe_disp_suspend_resume.SFG_SFG_last_seg_2_S_R =				 IoReg_Read32(SFG_SFG_last_seg_2_reg);
	vbe_disp_suspend_resume.SFG_SFG_last_seg_3_S_R =				 IoReg_Read32(SFG_SFG_last_seg_3_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_ctrl_S_R =				 IoReg_Read32(SFG_SFG_patgen_ctrl_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_0_S_R =					 IoReg_Read32(SFG_SFG_patgen_0_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_1_S_R =					 IoReg_Read32(SFG_SFG_patgen_1_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_2_S_R =					 IoReg_Read32(SFG_SFG_patgen_2_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_3_S_R =					 IoReg_Read32(SFG_SFG_patgen_3_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_4_S_R =					 IoReg_Read32(SFG_SFG_patgen_4_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_5_S_R =					 IoReg_Read32(SFG_SFG_patgen_5_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_6_S_R =					 IoReg_Read32(SFG_SFG_patgen_6_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_7_S_R =					 IoReg_Read32(SFG_SFG_patgen_7_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_8_S_R =					 IoReg_Read32(SFG_SFG_patgen_8_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_9_S_R =					 IoReg_Read32(SFG_SFG_patgen_9_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_10_S_R = 				 IoReg_Read32(SFG_SFG_patgen_10_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_11_S_R = 				 IoReg_Read32(SFG_SFG_patgen_11_reg);
	vbe_disp_suspend_resume.SFG_SFG_patgen_12_S_R = 				 IoReg_Read32(SFG_SFG_patgen_12_reg);
	vbe_disp_suspend_resume.SFG_SFG_irq_ctrl_0_S_R =				 IoReg_Read32(SFG_SFG_irq_ctrl_0_reg);
	vbe_disp_suspend_resume.SFG_SFG_irq_ctrl_1_S_R =				 IoReg_Read32(SFG_SFG_irq_ctrl_1_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_window_H_ini_sta_width_S_R = IoReg_Read32(SFG_Pat_det_window_H_ini_sta_width_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_window_V_ini_sta_height_S_R= IoReg_Read32(SFG_Pat_det_window_V_ini_sta_height_reg);
	vbe_disp_suspend_resume.SFG_Pattern_detect_CTRL_S_R =			 IoReg_Read32(SFG_Pattern_detect_CTRL_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_ctrl_1_S_R =				 IoReg_Read32(SFG_Pat_det_ctrl_1_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_ctrl_2_S_R =				 IoReg_Read32(SFG_Pat_det_ctrl_2_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_ctrl_3_S_R =				 IoReg_Read32(SFG_Pat_det_ctrl_3_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_ctrl_4_S_R =				 IoReg_Read32(SFG_Pat_det_ctrl_4_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_ctrl_5_S_R =				 IoReg_Read32(SFG_Pat_det_ctrl_5_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_ctrl_7_S_R =				 IoReg_Read32(SFG_Pat_det_ctrl_7_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_ctrl_6_S_R =				 IoReg_Read32(SFG_Pat_det_ctrl_6_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc1_S_R =					 IoReg_Read32(SFG_Pat_det_acc1_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc2_S_R =					 IoReg_Read32(SFG_Pat_det_acc2_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc3_S_R =					 IoReg_Read32(SFG_Pat_det_acc3_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc4_S_R =					 IoReg_Read32(SFG_Pat_det_acc4_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc5_S_R =					 IoReg_Read32(SFG_Pat_det_acc5_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc6_S_R =					 IoReg_Read32(SFG_Pat_det_acc6_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc7_S_R =					 IoReg_Read32(SFG_Pat_det_acc7_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc8_S_R =					 IoReg_Read32(SFG_Pat_det_acc8_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc9_S_R =					 IoReg_Read32(SFG_Pat_det_acc9_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc10_S_R = 				 IoReg_Read32(SFG_Pat_det_acc10_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc11_S_R = 				 IoReg_Read32(SFG_Pat_det_acc11_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc12_S_R = 				 IoReg_Read32(SFG_Pat_det_acc12_reg);
	vbe_disp_suspend_resume.SFG_Pat_det_acc13_S_R = 				 IoReg_Read32(SFG_Pat_det_acc13_reg);
	vbe_disp_suspend_resume.SFG_Debug_pin_S_R = 					 IoReg_Read32(SFG_Debug_pin_reg);
	vbe_disp_suspend_resume.SFG_SFG2_CTRL_0_S_R =					 IoReg_Read32(SFG_SFG2_CTRL_0_reg);
	vbe_disp_suspend_resume.SFG_SFG2_PORT_SWAP_S_R =				 IoReg_Read32(SFG_SFG2_PORT_SWAP_reg);
	vbe_disp_suspend_resume.SFG_SFG2_FORCE_0_S_R =					 IoReg_Read32(SFG_SFG2_FORCE_0_reg);
	vbe_disp_suspend_resume.SFG_SFG2_FORCE_1_S_R =					 IoReg_Read32(SFG_SFG2_FORCE_1_reg);
	vbe_disp_suspend_resume.SFG_SFG2_CRC_CTRL_S_R = 				 IoReg_Read32(SFG_SFG2_CRC_CTRL_reg);
	vbe_disp_suspend_resume.SFG_SFG2_CRC_RESULT_S_R =				 IoReg_Read32(SFG_SFG2_CRC_RESULT_reg);
	vbe_disp_suspend_resume.SFG_SFG2_CRC_R_RESULT_S_R = 			 IoReg_Read32(SFG_SFG2_CRC_R_RESULT_reg);
	vbe_disp_suspend_resume.SFG_SFG2_CRC_L_DES_CRC_S_R =			 IoReg_Read32(SFG_SFG2_CRC_L_DES_CRC_reg);
	vbe_disp_suspend_resume.SFG_SFG2_CRC_R_DES_CRC_S_R =			 IoReg_Read32(SFG_SFG2_CRC_R_DES_CRC_reg);
	vbe_disp_suspend_resume.SFG_SFG2_CRC_ERR_CNT_S_R =				 IoReg_Read32(SFG_SFG2_CRC_ERR_CNT_reg);
	vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_0_S_R =				 IoReg_Read32(SFG_SFG2_TIME_CTRL_0_reg);
	vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_1_S_R =				 IoReg_Read32(SFG_SFG2_TIME_CTRL_1_reg);
	vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_2_S_R =				 IoReg_Read32(SFG_SFG2_TIME_CTRL_2_reg);
	vbe_disp_suspend_resume.SFG_SFG2_DEN_CTRL_S_R = 				 IoReg_Read32(SFG_SFG2_DEN_CTRL_reg);
	vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_AUTO_0_S_R = 		 IoReg_Read32(SFG_SFG2_TIME_CTRL_AUTO_0_reg);
	vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_AUTO_1_S_R = 		 IoReg_Read32(SFG_SFG2_TIME_CTRL_AUTO_1_reg);
	vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_AUTO_2_S_R = 		 IoReg_Read32(SFG_SFG2_TIME_CTRL_AUTO_2_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL0_S_R =				 IoReg_Read32(SFG_PIF_FIFO_CTRL0_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL1_S_R =				 IoReg_Read32(SFG_PIF_FIFO_CTRL1_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL2_S_R =				 IoReg_Read32(SFG_PIF_FIFO_CTRL2_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL3_S_R =				 IoReg_Read32(SFG_PIF_FIFO_CTRL3_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL4_S_R =				 IoReg_Read32(SFG_PIF_FIFO_CTRL4_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL5_S_R =				 IoReg_Read32(SFG_PIF_FIFO_CTRL5_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL6_S_R =				 IoReg_Read32(SFG_PIF_FIFO_CTRL6_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL0_S_R =			 IoReg_Read32(SFG_PIF_FIFO_OSD_CTRL0_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL1_S_R =			 IoReg_Read32(SFG_PIF_FIFO_OSD_CTRL1_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL2_S_R =			 IoReg_Read32(SFG_PIF_FIFO_OSD_CTRL2_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL3_S_R =			 IoReg_Read32(SFG_PIF_FIFO_OSD_CTRL3_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL4_S_R =			 IoReg_Read32(SFG_PIF_FIFO_OSD_CTRL4_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL5_S_R =			 IoReg_Read32(SFG_PIF_FIFO_OSD_CTRL5_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_MUX_CTRL0_S_R =			 IoReg_Read32(SFG_PIF_FIFO_MUX_CTRL0_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_MUX_CTRL1_S_R =			 IoReg_Read32(SFG_PIF_FIFO_MUX_CTRL1_reg);
	vbe_disp_suspend_resume.SFG_PIF_FIFO_MUX_CTRL2_S_R =			 IoReg_Read32(SFG_PIF_FIFO_MUX_CTRL2_reg);
	vbe_disp_suspend_resume.SFG_PIF_MISC_S_R =						 IoReg_Read32(SFG_PIF_MISC_reg);


	//panel interface common
	vbe_disp_suspend_resume.PIF_LVDS_CTRL1_S_R =			  IoReg_Read32(PIF_LVDS_CTRL1_reg);
	vbe_disp_suspend_resume.PIF_LVDS_CTRL2_S_R =			  IoReg_Read32(PIF_LVDS_CTRL2_reg);
	vbe_disp_suspend_resume.PIF_LVDS_CTRL3_S_R =			  IoReg_Read32(PIF_LVDS_CTRL3_reg);
	vbe_disp_suspend_resume.PIF_LVDS_CTRL4_S_R =			  IoReg_Read32(PIF_LVDS_CTRL4_reg);
	vbe_disp_suspend_resume.PIF_LVDS_CTRL5_S_R =			  IoReg_Read32(PIF_LVDS_CTRL5_reg);
	vbe_disp_suspend_resume.PIF_MLVDS_CTRL0_S_R =			  IoReg_Read32(PIF_MLVDS_CTRL0_reg);
	vbe_disp_suspend_resume.PIF_MLVDS_Reset_Pul_CTRL_S_R =	  IoReg_Read32(PIF_MLVDS_Reset_Pul_CTRL_reg);
	vbe_disp_suspend_resume.PIF_MLVDS_CTRL1_S_R =			  IoReg_Read32(PIF_MLVDS_CTRL1_reg);
	vbe_disp_suspend_resume.PIF_MLVDS_CTRL2_S_R =			  IoReg_Read32(PIF_MLVDS_CTRL2_reg);
	vbe_disp_suspend_resume.PIF_MLVDS_CTRL3_S_R =			  IoReg_Read32(PIF_MLVDS_CTRL3_reg);
	vbe_disp_suspend_resume.PIF_MLVDS_CTRL4_S_R =			  IoReg_Read32(PIF_MLVDS_CTRL4_reg);

	//PIF APHY
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_PIF_3_S_R =					   IoReg_Read32(PINMUX_LVDSPHY_PIF_3_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_PIF_4_S_R =					   IoReg_Read32(PINMUX_LVDSPHY_PIF_4_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_PIF_5_S_R =					   IoReg_Read32(PINMUX_LVDSPHY_PIF_5_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_PIF_6_S_R =					   IoReg_Read32(PINMUX_LVDSPHY_PIF_6_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_Pin_Mux_LVDS_S_R =			   IoReg_Read32(PINMUX_LVDSPHY_Pin_Mux_LVDS_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_S_R =  IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_reg);
	if(IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg)!=0){
		vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg);
	}
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_reg);
	vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_reg);


	//local dimming
	vbe_disp_suspend_resume.LDSPI_LD_SPI_H_TOTAL_S_R = IoReg_Read32(LDSPI_ld_spi_h_total_reg);
	vbe_disp_suspend_resume.LDSPI_LD_SPI_V_TOTAL_S_R = IoReg_Read32(LDSPI_ld_spi_v_total_reg);
	vbe_disp_suspend_resume.LDSPI_LD_SPI_REPRODUCE_S_R = IoReg_Read32(LDSPI_ld_spi_reproduce_mode_reg);

	//frank@06222019 disable epi enable default
	//IoReg_ClearBits(EPI_EPI_PORT_OPTION_CTRL_reg, EPI_EPI_PORT_OPTION_CTRL_epi_enable_mask);


	if((Get_DISPLAY_PANEL_TYPE() == P_VBY1_4K2K)  ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS) ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI))
	{
		//VBy1 Mac
		vbe_disp_suspend_resume.VBY1_VIDEO_FORMAT_S_R = 	   IoReg_Read32(VBY1_VIDEO_FORMAT_reg);
		vbe_disp_suspend_resume.VBY1_LANE_STATUS_S_R =		   IoReg_Read32(VBY1_LANE_STATUS_reg);
		vbe_disp_suspend_resume.VBY1_CTL_S_R =				   IoReg_Read32(VBY1_CTL_reg);
		vbe_disp_suspend_resume.VBY1_TRANSMIT_CONTROL_S_R =    IoReg_Read32(VBY1_TRANSMIT_CONTROL_reg);
		vbe_disp_suspend_resume.VBY1_TRANSMIT_STATUS_S_R =	   IoReg_Read32(VBY1_TRANSMIT_STATUS_reg);
		vbe_disp_suspend_resume.VBY1_THREE_FLAG_S_R =		   IoReg_Read32(VBY1_THREE_FLAG_reg);
		vbe_disp_suspend_resume.VBY1_CRC_CONTROL_S_R =		   IoReg_Read32(VBY1_CRC_CONTROL_reg);
		vbe_disp_suspend_resume.VBY1_CRC_RESULT_S_R =		   IoReg_Read32(VBY1_CRC_RESULT_reg);
		vbe_disp_suspend_resume.VBY1_CRC_DES_S_R =			   IoReg_Read32(VBY1_CRC_DES_reg);
		vbe_disp_suspend_resume.VBY1_CRC_ERROR_CNT_S_R =	   IoReg_Read32(VBY1_CRC_ERROR_CNT_reg);
		vbe_disp_suspend_resume.VBY1_ASYNC_FIFO_RST_S_R =	   IoReg_Read32(VBY1_ASYNC_FIFO_RST_reg);
		vbe_disp_suspend_resume.VBY1_VBY1_DEBUG_S_R =		   IoReg_Read32(VBY1_VBY1_DEBUG_reg);
		vbe_disp_suspend_resume.VBY1_VBY1_STATUS_FW_CTRL_S_R = IoReg_Read32(VBY1_VBY1_STATUS_FW_CTRL_reg);
		vbe_disp_suspend_resume.VBY1_DATA_CAPTURE_S_R = 	   IoReg_Read32(VBY1_DATA_CAPTURE_reg);
		vbe_disp_suspend_resume.VBY1_DATA_CAPTURE_1_S_R =	   IoReg_Read32(VBY1_DATA_CAPTURE_1_reg);
		vbe_disp_suspend_resume.VBY1_DATA_CAPTURE_2_S_R =	   IoReg_Read32(VBY1_DATA_CAPTURE_2_reg);
		vbe_disp_suspend_resume.VBY1_DBG_EN_S_R =			   IoReg_Read32(VBY1_DBG_EN_reg);
		vbe_disp_suspend_resume.VBY1_DBG_DATA_S_R = 		   IoReg_Read32(VBY1_DBG_DATA_reg);
		vbe_disp_suspend_resume.VBY1_DPHY_CTL_S_R = 		   IoReg_Read32(VBY1_DPHY_CTL_reg);
		vbe_disp_suspend_resume.VBY1_DPHY_RD_S_R =			   IoReg_Read32(VBY1_DPHY_RD_reg);
		vbe_disp_suspend_resume.VBY1_META_CTL_S_R = 		   IoReg_Read32(VBY1_META_CTL_reg);
		vbe_disp_suspend_resume.VBY1_META_CTL_1_S_R =		   IoReg_Read32(VBY1_META_CTL_1_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_0_S_R =		   IoReg_Read32(VBY1_META_DATA_0_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_1_S_R =		   IoReg_Read32(VBY1_META_DATA_1_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_2_S_R =		   IoReg_Read32(VBY1_META_DATA_2_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_3_S_R =		   IoReg_Read32(VBY1_META_DATA_3_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_4_S_R =		   IoReg_Read32(VBY1_META_DATA_4_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_5_S_R =		   IoReg_Read32(VBY1_META_DATA_5_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_6_S_R =		   IoReg_Read32(VBY1_META_DATA_6_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_7_S_R =		   IoReg_Read32(VBY1_META_DATA_7_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_8_S_R =		   IoReg_Read32(VBY1_META_DATA_8_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_9_S_R =		   IoReg_Read32(VBY1_META_DATA_9_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_10_S_R = 	   IoReg_Read32(VBY1_META_DATA_10_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_11_S_R = 	   IoReg_Read32(VBY1_META_DATA_11_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_12_S_R = 	   IoReg_Read32(VBY1_META_DATA_12_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_13_S_R = 	   IoReg_Read32(VBY1_META_DATA_13_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_14_S_R = 	   IoReg_Read32(VBY1_META_DATA_14_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_15_S_R = 	   IoReg_Read32(VBY1_META_DATA_15_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_16_S_R = 	   IoReg_Read32(VBY1_META_DATA_16_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_17_S_R = 	   IoReg_Read32(VBY1_META_DATA_17_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_18_S_R = 	   IoReg_Read32(VBY1_META_DATA_18_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_19_S_R = 	   IoReg_Read32(VBY1_META_DATA_19_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_20_S_R = 	   IoReg_Read32(VBY1_META_DATA_20_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_21_S_R = 	   IoReg_Read32(VBY1_META_DATA_21_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_22_S_R = 	   IoReg_Read32(VBY1_META_DATA_22_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_23_S_R = 	   IoReg_Read32(VBY1_META_DATA_23_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_24_S_R = 	   IoReg_Read32(VBY1_META_DATA_24_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_25_S_R = 	   IoReg_Read32(VBY1_META_DATA_25_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_26_S_R = 	   IoReg_Read32(VBY1_META_DATA_26_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_27_S_R = 	   IoReg_Read32(VBY1_META_DATA_27_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_28_S_R = 	   IoReg_Read32(VBY1_META_DATA_28_reg);
		vbe_disp_suspend_resume.VBY1_META_DATA_29_S_R = 	   IoReg_Read32(VBY1_META_DATA_29_reg);
		// for OSD split
		if((Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD2K1K_to_H5X_SPLIT) ||(Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD1K2K_to_H5X_SPLIT)){
			vbe_disp_suspend_resume.VBY1_OSD_OSD_VIDEO_FORMAT_S_R = IoReg_Read32(VBY1_OSD_OSD_VIDEO_FORMAT_reg);
			vbe_disp_suspend_resume.VBY1_OSD_OSD_LANE_STATUS_S_R = IoReg_Read32(VBY1_OSD_OSD_LANE_STATUS_reg);
			vbe_disp_suspend_resume.VBY1_OSD_OSD_CTL_S_R = IoReg_Read32(VBY1_OSD_OSD_CTL_reg);
			vbe_disp_suspend_resume.VBY1_OSD_OSD_TRANSMIT_CONTROL_S_R = IoReg_Read32(VBY1_OSD_OSD_TRANSMIT_CONTROL_reg);
			vbe_disp_suspend_resume.VBY1_OSD_OSD_THREE_FLAG_S_R = IoReg_Read32(VBY1_OSD_OSD_THREE_FLAG_reg);
			vbe_disp_suspend_resume.VBY1_OSD_OSD_CRC_CONTROL_S_R = IoReg_Read32(VBY1_OSD_OSD_CRC_CONTROL_reg);
			vbe_disp_suspend_resume.VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_S_R = IoReg_Read32(VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_reg);
			vbe_disp_suspend_resume.VBY1_OSD_OSD_DPHY_CTL_S_R = IoReg_Read32(VBY1_OSD_OSD_DPHY_CTL_reg);
		}
	}
	else if((Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)||(Get_DISPLAY_PANEL_TYPE() == P_CEDS))
	{
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_PACKET_CTR1_0_0_S_R =			 IoReg_Read32(EPI_EPI_PACKET_CTR1_0_0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_PACKET_CTRL_S_R =				 IoReg_Read32(EPI_EPI_PACKET_CTRL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CLOCK_CTRL0_S_R =				 IoReg_Read32(EPI_EPI_CLOCK_CTRL0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_DGB_READ_S_R =					 IoReg_Read32(EPI_EPI_DGB_READ_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_PORT_OPTION_CTRL_S_R =			 IoReg_Read32(EPI_EPI_PORT_OPTION_CTRL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_FRONT_S_R =				 IoReg_Read32(EPI_EPI_CMPI_FRONT_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_CMPI_DUMMY_COLOR_0_S_R =			 IoReg_Read32(EPI_CMPI_DUMMY_COLOR_0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_CMPI_DUMMY_COLOR_1_S_R =			 IoReg_Read32(EPI_CMPI_DUMMY_COLOR_1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_CMPI_DUMMY_COLOR_2_S_R =			 IoReg_Read32(EPI_CMPI_DUMMY_COLOR_2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_CMPI_DUMMY_COLOR_3_S_R =			 IoReg_Read32(EPI_CMPI_DUMMY_COLOR_3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CRC_CTRL_0_S_R =				 IoReg_Read32(EPI_EPI_CRC_CTRL_0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CRC_CTRL_1_S_R =				 IoReg_Read32(EPI_EPI_CRC_CTRL_1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CRC_CTRL_2_S_R =				 IoReg_Read32(EPI_EPI_CRC_CTRL_2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_DATA_SRC_S_R =					 IoReg_Read32(EPI_EPI_DATA_SRC_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_PACKET_CTR1_INV_S_R =			 IoReg_Read32(EPI_EPI_PACKET_CTR1_INV_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_PACKET_CTR1_INV_TABLE_1_S_R =	 IoReg_Read32(EPI_EPI_PACKET_CTR1_INV_TABLE_1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_PACKET_CTR1_INV_TABLE_2_S_R =	 IoReg_Read32(EPI_EPI_PACKET_CTR1_INV_TABLE_2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_RLC_S_R =					 IoReg_Read32(EPI_EPI_CMPI_RLC_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_VBT_S_R =					 IoReg_Read32(EPI_EPI_CMPI_VBT_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_VBT_OPT_S_R =				 IoReg_Read32(EPI_EPI_CMPI_VBT_OPT_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR_TCON_RST_S_R =				 IoReg_Read32(EPI_EPI_SCR_TCON_RST_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR8_CTRL_S_R = 				 IoReg_Read32(EPI_EPI_SCR8_CTRL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR8_INI_VAL_S_R =				 IoReg_Read32(EPI_EPI_SCR8_INI_VAL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR10_CTRL_S_R =				 IoReg_Read32(EPI_EPI_SCR10_CTRL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR10_INI_VAL_S_R = 			 IoReg_Read32(EPI_EPI_SCR10_INI_VAL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR8CM_CTRL_S_R =				 IoReg_Read32(EPI_EPI_SCR8CM_CTRL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR8CM_INI_VAL_S_R =			 IoReg_Read32(EPI_EPI_SCR8CM_INI_VAL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR10CM_CTRL_S_R =				 IoReg_Read32(EPI_EPI_SCR10CM_CTRL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR10CM_INI_VAL_S_R =			 IoReg_Read32(EPI_EPI_SCR10CM_INI_VAL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CTRL_S_R =				 IoReg_Read32(EPI_EPI_CMPI_PG_CTRL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_ST_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_CMD_ST_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_CMD1_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_CMD_CMD1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_CMD2_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_CMD_CMD2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_CMD3_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_CMD_CMD3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_CMD4_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_CMD_CMD4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_CMD5_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_CMD_CMD5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_START_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_START_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA0_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA1_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA2_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA3_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA4_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA5_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA6_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA6_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA7_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA7_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA8_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA8_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA9_S_R = 			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA9_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA10_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA10_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA11_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA11_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA12_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA12_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA13_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA13_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA14_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA14_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA15_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA15_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA16_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA16_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA17_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA17_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA18_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA18_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA19_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA19_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA20_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA20_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA21_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA21_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA22_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA22_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA23_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA23_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA24_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA24_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA25_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA25_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA26_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA26_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA27_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA27_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA28_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA28_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA29_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA29_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA30_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA30_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA31_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA31_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA32_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA32_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA33_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA33_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA34_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA34_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA35_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA35_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA36_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA36_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA37_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA37_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA38_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA38_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA39_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA39_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA40_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA40_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA41_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA41_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA42_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA42_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA43_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA43_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA44_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA44_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA45_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA45_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA46_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA46_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA47_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA47_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA48_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA48_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA49_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA49_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA50_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA50_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA51_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA51_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA52_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA52_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA53_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA53_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA54_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA54_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA55_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA55_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA56_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA56_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA57_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA57_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA58_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA58_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA59_S_R =			 IoReg_Read32(EPI_EPI_CMPI_PG_DATA59_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_END_S_R =				 IoReg_Read32(EPI_EPI_CMPI_PG_END_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LS_PORT_EN_S_R =				 IoReg_Read32(EPI_EPI_LS_PORT_EN_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_FSM_SEL_S_R =					 IoReg_Read32(EPI_EPI_FSM_SEL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_DATA_PORT_EN_S_R =				 IoReg_Read32(EPI_EPI_DATA_PORT_EN_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_DEN_FALL_LOCA_S_R = 			 IoReg_Read32(EPI_EPI_DEN_FALL_LOCA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LOCK_DEBOUNCE_CTL_S_R = 		 IoReg_Read32(EPI_EPI_LOCK_DEBOUNCE_CTL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_DBG_REG_FLAG_S_R =				 IoReg_Read32(EPI_EPI_DBG_REG_FLAG_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_DBG_REG_CTL_S_R =				 IoReg_Read32(EPI_EPI_DBG_REG_CTL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_CONTROL_S_R =				 IoReg_Read32(EPI_EPI_SOE_CONTROL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE0_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE0_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE0_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE0_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE1_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE1_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE1_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE1_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE2_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE2_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE2_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE2_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE3_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE3_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE3_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE3_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE4_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE4_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE4_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE4_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE5_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE5_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE5_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE5_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE6_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE6_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE6_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE6_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE6_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE6_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE6_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE6_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE7_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE7_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE7_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE7_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE7_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE7_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE7_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE7_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE8_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE8_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE8_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE8_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE8_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE8_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE8_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE8_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE9_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE9_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE9_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE9_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE9_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE9_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE9_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE9_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE10_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE10_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE10_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE10_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE10_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE10_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE10_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE10_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE11_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE11_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE11_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE11_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE11_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE11_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE11_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE11_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE12_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE12_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE12_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE12_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE12_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE12_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE12_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE12_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE13_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE13_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE13_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE13_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE13_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE13_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE13_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE13_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE14_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE14_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE14_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE14_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE14_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE14_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE14_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE14_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE15_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE0_LANE15_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE15_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE1_LANE15_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE15_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE2_LANE15_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE15_S_R =			 IoReg_Read32(EPI_EPI_SOE_LINE3_LANE15_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX0_S_R = 			 IoReg_Read32(EPI_EPI_LANE_DST_MUX0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX1_S_R = 			 IoReg_Read32(EPI_EPI_LANE_DST_MUX1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX2_S_R = 			 IoReg_Read32(EPI_EPI_LANE_DST_MUX2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX3_S_R = 			 IoReg_Read32(EPI_EPI_LANE_DST_MUX3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX4_S_R = 			 IoReg_Read32(EPI_EPI_LANE_DST_MUX4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX5_S_R = 			 IoReg_Read32(EPI_EPI_LANE_DST_MUX5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX0_S_R = 			 IoReg_Read32(EPI_EPI_LANE_CST_MUX0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX1_S_R = 			 IoReg_Read32(EPI_EPI_LANE_CST_MUX1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX2_S_R = 			 IoReg_Read32(EPI_EPI_LANE_CST_MUX2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX3_S_R = 			 IoReg_Read32(EPI_EPI_LANE_CST_MUX3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX4_S_R = 			 IoReg_Read32(EPI_EPI_LANE_CST_MUX4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX5_S_R = 			 IoReg_Read32(EPI_EPI_LANE_CST_MUX5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX0_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR1_MUX0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX1_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR1_MUX1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX2_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR1_MUX2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX3_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR1_MUX3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX4_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR1_MUX4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX5_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR1_MUX5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX0_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR2_MUX0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX1_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR2_MUX1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX2_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR2_MUX2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX3_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR2_MUX3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX4_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR2_MUX4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX5_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR2_MUX5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX0_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR3_MUX0_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX1_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR3_MUX1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX2_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR3_MUX2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX3_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR3_MUX3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX4_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR3_MUX4_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX5_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR3_MUX5_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_TCON_MUX_S_R =					 IoReg_Read32(EPI_EPI_TCON_MUX_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_TCON_MUX1_S_R = 				 IoReg_Read32(EPI_EPI_TCON_MUX1_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_TCON_MUX2_S_R = 				 IoReg_Read32(EPI_EPI_TCON_MUX2_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_TCON_MUX3_S_R = 				 IoReg_Read32(EPI_EPI_TCON_MUX3_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_DUMMY_REG_S_R = 				 IoReg_Read32(EPI_EPI_DUMMY_REG_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_HW_DUMMY0_REG_S_R = 			 IoReg_Read32(EPI_EPI_HW_DUMMY0_REG_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_HW_DUMMY1_REG_S_R = 			 IoReg_Read32(EPI_EPI_HW_DUMMY1_REG_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_HW_DUMMY2_REG_S_R = 			 IoReg_Read32(EPI_EPI_HW_DUMMY2_REG_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_HW_DUMMY3_REG_S_R = 			 IoReg_Read32(EPI_EPI_HW_DUMMY3_REG_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_CEDS_POL_REG_S_R =				 IoReg_Read32(EPI_EPI_CEDS_POL_REG_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_DATA_S_R = 			 IoReg_Read32(EPI_EPI_LANE_DST_DATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_DATA_S_R = 			 IoReg_Read32(EPI_EPI_LANE_CST_DATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR4_DATA_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR4_DATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR5_DATA_S_R =			 IoReg_Read32(EPI_EPI_LANE_CTR5_DATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE0_CTR1_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE0_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE1_CTR1_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE1_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE2_CTR1_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE2_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE3_CTR1_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE3_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE4_CTR1_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE4_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE5_CTR1_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE5_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE6_CTR1_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE6_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE7_CTR1_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE7_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE8_CTR1_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE8_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE9_CTR1_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE9_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE10_CTR1_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE10_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE11_CTR1_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE11_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE12_CTR1_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE12_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE13_CTR1_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE13_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE14_CTR1_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE14_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE15_CTR1_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE15_CTR1_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE0_CTR2_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE0_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE1_CTR2_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE1_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE2_CTR2_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE2_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE3_CTR2_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE3_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE4_CTR2_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE4_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE5_CTR2_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE5_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE6_CTR2_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE6_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE7_CTR2_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE7_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE8_CTR2_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE8_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE9_CTR2_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE9_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE10_CTR2_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE10_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE11_CTR2_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE11_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE12_CTR2_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE12_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE13_CTR2_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE13_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE14_CTR2_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE14_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE15_CTR2_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE15_CTR2_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE0_CTR3_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE0_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE1_CTR3_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE1_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE2_CTR3_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE2_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE3_CTR3_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE3_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE4_CTR3_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE4_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE5_CTR3_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE5_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE6_CTR3_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE6_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE7_CTR3_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE7_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE8_CTR3_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE8_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE9_CTR3_ODATA_S_R =			 IoReg_Read32(EPI_EPI_LANE9_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE10_CTR3_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE10_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE11_CTR3_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE11_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE12_CTR3_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE12_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE13_CTR3_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE13_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE14_CTR3_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE14_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE15_CTR3_ODATA_S_R = 		 IoReg_Read32(EPI_EPI_LANE15_CTR3_ODATA_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_GPLUT_CONTROL_S_R = 			 IoReg_Read32(EPI_EPI_GPLUT_CONTROL_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_GPLUT_LINE_01_S_R = 			 IoReg_Read32(EPI_EPI_GPLUT_LINE_01_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_GPLUT_LINE_23_S_R = 			 IoReg_Read32(EPI_EPI_GPLUT_LINE_23_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_GPLUT_LINE_45_S_R = 			 IoReg_Read32(EPI_EPI_GPLUT_LINE_45_reg);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_GPLUT_LINE_67_S_R = 			 IoReg_Read32(EPI_EPI_GPLUT_LINE_67_reg);

		//tcon
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_CTRL_S_R = 					IoReg_Read32(TCON_TCON_CTRL_reg);

		//[KTASKWBS-8895] Tcon disable should be earlier than lane power OFF
		//add condition to protect the suspend value, prevent from call suspend twince let tcon setting as 0
		if(IoReg_Read32(TCON_TCON_IP_EN_reg)!=0){
			vbe_disp_panel_tcon_suspend_resume.TCON_TCON_IP_EN_S_R =					IoReg_Read32(TCON_TCON_IP_EN_reg);
		}
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_HSE_S_R = 					IoReg_Read32(TCON_TCON0_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_VSE_S_R = 					IoReg_Read32(TCON_TCON0_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_Ctrl_S_R =					IoReg_Read32(TCON_TCON0_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON0_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON0_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON0_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_HSE_S_R = 					IoReg_Read32(TCON_TCON1_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_VSE_S_R = 					IoReg_Read32(TCON_TCON1_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_Ctrl_S_R =					IoReg_Read32(TCON_TCON1_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON1_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON1_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON1_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_HSE_S_R = 					IoReg_Read32(TCON_TCON2_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_VSE_S_R = 					IoReg_Read32(TCON_TCON2_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_Ctrl_S_R =					IoReg_Read32(TCON_TCON2_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON2_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON2_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON2_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_HSE_S_R = 					IoReg_Read32(TCON_TCON3_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_VSE_S_R = 					IoReg_Read32(TCON_TCON3_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_Ctrl_S_R =					IoReg_Read32(TCON_TCON3_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON3_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON3_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON3_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_HSE_S_R = 					IoReg_Read32(TCON_TCON4_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_VSE_S_R = 					IoReg_Read32(TCON_TCON4_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_Ctrl_S_R =					IoReg_Read32(TCON_TCON4_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON4_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON4_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON4_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_HSE_S_R = 					IoReg_Read32(TCON_TCON5_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_VSE_S_R = 					IoReg_Read32(TCON_TCON5_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_Ctrl_S_R =					IoReg_Read32(TCON_TCON5_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON5_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON5_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON5_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_HSE_S_R = 					IoReg_Read32(TCON_TCON6_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_VSE_S_R = 					IoReg_Read32(TCON_TCON6_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_Ctrl_S_R =					IoReg_Read32(TCON_TCON6_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON6_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON6_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON6_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_HSE_S_R = 					IoReg_Read32(TCON_TCON7_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_VSE_S_R = 					IoReg_Read32(TCON_TCON7_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_Ctrl_S_R =					IoReg_Read32(TCON_TCON7_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON7_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON7_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON7_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_HSE_S_R = 					IoReg_Read32(TCON_TCON8_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_VSE_S_R = 					IoReg_Read32(TCON_TCON8_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_Ctrl_S_R =					IoReg_Read32(TCON_TCON8_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON8_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON8_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON8_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_HSE_S_R = 					IoReg_Read32(TCON_TCON9_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_VSE_S_R = 					IoReg_Read32(TCON_TCON9_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_Ctrl_S_R =					IoReg_Read32(TCON_TCON9_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON9_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON9_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON9_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_HSE_S_R =					IoReg_Read32(TCON_TCON10_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_VSE_S_R =					IoReg_Read32(TCON_TCON10_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_Ctrl_S_R =					IoReg_Read32(TCON_TCON10_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON10_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON10_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON10_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_HSE_S_R =					IoReg_Read32(TCON_TCON11_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_VSE_S_R =					IoReg_Read32(TCON_TCON11_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_Ctrl_S_R =					IoReg_Read32(TCON_TCON11_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON11_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON11_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON11_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_HSE_S_R =					IoReg_Read32(TCON_TCON12_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_VSE_S_R =					IoReg_Read32(TCON_TCON12_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_Ctrl_S_R =					IoReg_Read32(TCON_TCON12_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON12_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON12_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON12_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_HSE_S_R =					IoReg_Read32(TCON_TCON13_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_VSE_S_R =					IoReg_Read32(TCON_TCON13_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_Ctrl_S_R =					IoReg_Read32(TCON_TCON13_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON13_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON13_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON13_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_HSE_S_R =					IoReg_Read32(TCON_TCON14_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_VSE_S_R =					IoReg_Read32(TCON_TCON14_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_Ctrl_S_R =					IoReg_Read32(TCON_TCON14_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON14_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON14_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON14_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_HSE_S_R =					IoReg_Read32(TCON_TCON15_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_VSE_S_R =					IoReg_Read32(TCON_TCON15_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_Ctrl_S_R =					IoReg_Read32(TCON_TCON15_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON15_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON15_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON15_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_HSE_S_R =					IoReg_Read32(TCON_TCON16_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_VSE_S_R =					IoReg_Read32(TCON_TCON16_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_Ctrl_S_R =					IoReg_Read32(TCON_TCON16_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON16_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON16_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON16_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_HSE_S_R =					IoReg_Read32(TCON_TCON17_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_VSE_S_R =					IoReg_Read32(TCON_TCON17_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_Ctrl_S_R =					IoReg_Read32(TCON_TCON17_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON17_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON17_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON17_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_HSE_S_R =					IoReg_Read32(TCON_TCON18_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_VSE_S_R =					IoReg_Read32(TCON_TCON18_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_Ctrl_S_R =					IoReg_Read32(TCON_TCON18_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON18_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON18_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON18_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_HSE_S_R =					IoReg_Read32(TCON_TCON19_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_VSE_S_R =					IoReg_Read32(TCON_TCON19_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_Ctrl_S_R =					IoReg_Read32(TCON_TCON19_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON19_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON19_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON19_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_HSE_S_R =					IoReg_Read32(TCON_TCON20_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_VSE_S_R =					IoReg_Read32(TCON_TCON20_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_Ctrl_S_R =					IoReg_Read32(TCON_TCON20_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON20_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON20_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON20_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_HSE_S_R =					IoReg_Read32(TCON_TCON21_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_VSE_S_R =					IoReg_Read32(TCON_TCON21_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_Ctrl_S_R =					IoReg_Read32(TCON_TCON21_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON21_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON21_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON21_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_HSE_S_R =					IoReg_Read32(TCON_TCON22_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_VSE_S_R =					IoReg_Read32(TCON_TCON22_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_Ctrl_S_R =					IoReg_Read32(TCON_TCON22_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON22_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON22_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON22_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_HSE_S_R =					IoReg_Read32(TCON_TCON23_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_VSE_S_R =					IoReg_Read32(TCON_TCON23_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_Ctrl_S_R =					IoReg_Read32(TCON_TCON23_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON23_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON23_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON23_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_HSE_S_R =					IoReg_Read32(TCON_TCON24_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_VSE_S_R =					IoReg_Read32(TCON_TCON24_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_Ctrl_S_R =					IoReg_Read32(TCON_TCON24_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON24_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON24_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON24_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_HSE_S_R =					IoReg_Read32(TCON_TCON25_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_VSE_S_R =					IoReg_Read32(TCON_TCON25_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_Ctrl_S_R =					IoReg_Read32(TCON_TCON25_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON25_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON25_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON25_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_HSE_S_R =					IoReg_Read32(TCON_TCON26_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_VSE_S_R =					IoReg_Read32(TCON_TCON26_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_Ctrl_S_R =					IoReg_Read32(TCON_TCON26_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON26_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON26_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON26_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_HSE_S_R =					IoReg_Read32(TCON_TCON27_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_VSE_S_R =					IoReg_Read32(TCON_TCON27_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_Ctrl_S_R =					IoReg_Read32(TCON_TCON27_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON27_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON27_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON27_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL0_S_R = IoReg_Read32(TCON_TCON_PWM0_CONTROL0_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL1_S_R = IoReg_Read32(TCON_TCON_PWM0_CONTROL1_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL2_S_R = IoReg_Read32(TCON_TCON_PWM0_CONTROL2_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL0_S_R = IoReg_Read32(TCON_TCON_PWM1_CONTROL0_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL1_S_R = IoReg_Read32(TCON_TCON_PWM1_CONTROL1_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL2_S_R = IoReg_Read32(TCON_TCON_PWM1_CONTROL2_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM_DB_SEL_S_R =	  IoReg_Read32(TCON_TCON_PWM_DB_SEL_reg);



		//[KTASKWBS-8895] Tcon disable should be earlier than lane power OFF
		if(vbe_suspend_instant_mode){	// Only STR need to control Tcon off
			IoReg_Write32(TCON_TCON_IP_EN_reg, 0);
			rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[suspend]TCON_TCON_IP_EN_reg = 0!! \n");
		}

	}
	else if(Get_DISPLAY_PANEL_TYPE() == P_ISP)
	{
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_EN_S_R =	IoReg_Read32(ISP_ISP_EN_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_TCON_SEL_S_R =	IoReg_Read32(ISP_ISP_TCON_SEL_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_TD_S_R =	IoReg_Read32(ISP_ISP_TD_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_VD_SD_SET_FRM_S_R =	IoReg_Read32(ISP_ISP_VD_SD_SET_FRM_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_TBK_S_R =	IoReg_Read32(ISP_ISP_TBK_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_BAC_S_R =	IoReg_Read32(ISP_ISP_BAC_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_EOL_S_R =	IoReg_Read32(ISP_ISP_EOL_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_BKPOL_S_R =	IoReg_Read32(ISP_ISP_BKPOL_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_POLP_S_R =	IoReg_Read32(ISP_ISP_POLP_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_POLN_S_R =	IoReg_Read32(ISP_ISP_POLN_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING00_00_S_R =	IoReg_Read32(ISP_ISP_SETTING00_00_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING00_04_S_R =	IoReg_Read32(ISP_ISP_SETTING00_04_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING00_08_S_R =	IoReg_Read32(ISP_ISP_SETTING00_08_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING01_00_S_R =	IoReg_Read32(ISP_ISP_SETTING01_00_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING01_04_S_R =	IoReg_Read32(ISP_ISP_SETTING01_04_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING01_08_S_R =	IoReg_Read32(ISP_ISP_SETTING01_08_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING02_00_S_R =	IoReg_Read32(ISP_ISP_SETTING02_00_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING02_04_S_R =	IoReg_Read32(ISP_ISP_SETTING02_04_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING02_08_S_R =	IoReg_Read32(ISP_ISP_SETTING02_08_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING03_00_S_R =	IoReg_Read32(ISP_ISP_SETTING03_00_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING03_04_S_R =	IoReg_Read32(ISP_ISP_SETTING03_04_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING03_08_S_R =	IoReg_Read32(ISP_ISP_SETTING03_08_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING04_S_R =	IoReg_Read32(ISP_ISP_SETTING04_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING08_S_R =	IoReg_Read32(ISP_ISP_SETTING08_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING12_S_R =	IoReg_Read32(ISP_ISP_SETTING12_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING16_S_R =	IoReg_Read32(ISP_ISP_SETTING16_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING20_S_R =	IoReg_Read32(ISP_ISP_SETTING20_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING24_S_R =	IoReg_Read32(ISP_ISP_SETTING24_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING28_S_R =	IoReg_Read32(ISP_ISP_SETTING28_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING32_S_R =	IoReg_Read32(ISP_ISP_SETTING32_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING36_S_R =	IoReg_Read32(ISP_ISP_SETTING36_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING40_S_R =	IoReg_Read32(ISP_ISP_SETTING40_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING44_S_R =	IoReg_Read32(ISP_ISP_SETTING44_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING48_S_R =	IoReg_Read32(ISP_ISP_SETTING48_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING52_S_R =	IoReg_Read32(ISP_ISP_SETTING52_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING56_S_R =	IoReg_Read32(ISP_ISP_SETTING56_reg);
#if 0//fix-me:mac6p bringup
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_CHPORT00_S_R =	IoReg_Read32(ISP_ISP_CHPORT00_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_CHPORT08_S_R =	IoReg_Read32(ISP_ISP_CHPORT08_reg);
#endif
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_Dummy0_S_R =	IoReg_Read32(ISP_ISP_Dummy0_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_Dummy1_S_R =	IoReg_Read32(ISP_ISP_Dummy1_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_CRC_CTRL_S_R =	IoReg_Read32(ISP_ISP_CRC_CTRL_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_CRC_RESULT_S_R =	IoReg_Read32(ISP_ISP_CRC_RESULT_reg);
		vbe_disp_panel_isp_suspend_resume.ISP_ISP_CRC_GOLDEN_S_R =	IoReg_Read32(ISP_ISP_CRC_GOLDEN_reg);


		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_IP_EN_S_R =					IoReg_Read32(TCON_TCON_IP_EN_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_HSE_S_R = 					IoReg_Read32(TCON_TCON0_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_VSE_S_R = 					IoReg_Read32(TCON_TCON0_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_Ctrl_S_R =					IoReg_Read32(TCON_TCON0_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON0_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON0_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON0_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_HSE_S_R = 					IoReg_Read32(TCON_TCON1_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_VSE_S_R = 					IoReg_Read32(TCON_TCON1_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_Ctrl_S_R =					IoReg_Read32(TCON_TCON1_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON1_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON1_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON1_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_HSE_S_R = 					IoReg_Read32(TCON_TCON2_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_VSE_S_R = 					IoReg_Read32(TCON_TCON2_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_Ctrl_S_R =					IoReg_Read32(TCON_TCON2_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON2_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON2_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON2_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_HSE_S_R = 					IoReg_Read32(TCON_TCON3_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_VSE_S_R = 					IoReg_Read32(TCON_TCON3_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_Ctrl_S_R =					IoReg_Read32(TCON_TCON3_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON3_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON3_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON3_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_HSE_S_R = 					IoReg_Read32(TCON_TCON4_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_VSE_S_R = 					IoReg_Read32(TCON_TCON4_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_Ctrl_S_R =					IoReg_Read32(TCON_TCON4_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON4_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON4_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON4_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_HSE_S_R = 					IoReg_Read32(TCON_TCON5_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_VSE_S_R = 					IoReg_Read32(TCON_TCON5_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_Ctrl_S_R =					IoReg_Read32(TCON_TCON5_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON5_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON5_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON5_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_HSE_S_R = 					IoReg_Read32(TCON_TCON6_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_VSE_S_R = 					IoReg_Read32(TCON_TCON6_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_Ctrl_S_R =					IoReg_Read32(TCON_TCON6_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON6_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON6_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON6_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_HSE_S_R = 					IoReg_Read32(TCON_TCON7_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_VSE_S_R = 					IoReg_Read32(TCON_TCON7_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_Ctrl_S_R =					IoReg_Read32(TCON_TCON7_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON7_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON7_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON7_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_HSE_S_R = 					IoReg_Read32(TCON_TCON8_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_VSE_S_R = 					IoReg_Read32(TCON_TCON8_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_Ctrl_S_R =					IoReg_Read32(TCON_TCON8_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON8_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON8_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON8_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_HSE_S_R = 					IoReg_Read32(TCON_TCON9_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_VSE_S_R = 					IoReg_Read32(TCON_TCON9_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_Ctrl_S_R =					IoReg_Read32(TCON_TCON9_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON9_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON9_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON9_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_HSE_S_R =					IoReg_Read32(TCON_TCON10_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_VSE_S_R =					IoReg_Read32(TCON_TCON10_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_Ctrl_S_R =					IoReg_Read32(TCON_TCON10_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON10_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON10_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON10_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_HSE_S_R =					IoReg_Read32(TCON_TCON11_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_VSE_S_R =					IoReg_Read32(TCON_TCON11_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_Ctrl_S_R =					IoReg_Read32(TCON_TCON11_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON11_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON11_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON11_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_HSE_S_R =					IoReg_Read32(TCON_TCON12_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_VSE_S_R =					IoReg_Read32(TCON_TCON12_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_Ctrl_S_R =					IoReg_Read32(TCON_TCON12_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON12_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON12_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON12_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_HSE_S_R =					IoReg_Read32(TCON_TCON13_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_VSE_S_R =					IoReg_Read32(TCON_TCON13_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_Ctrl_S_R =					IoReg_Read32(TCON_TCON13_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON13_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON13_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON13_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_HSE_S_R =					IoReg_Read32(TCON_TCON14_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_VSE_S_R =					IoReg_Read32(TCON_TCON14_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_Ctrl_S_R =					IoReg_Read32(TCON_TCON14_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON14_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON14_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON14_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_HSE_S_R =					IoReg_Read32(TCON_TCON15_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_VSE_S_R =					IoReg_Read32(TCON_TCON15_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_Ctrl_S_R =					IoReg_Read32(TCON_TCON15_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON15_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON15_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON15_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_HSE_S_R =					IoReg_Read32(TCON_TCON16_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_VSE_S_R =					IoReg_Read32(TCON_TCON16_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_Ctrl_S_R =					IoReg_Read32(TCON_TCON16_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON16_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON16_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON16_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_HSE_S_R =					IoReg_Read32(TCON_TCON17_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_VSE_S_R =					IoReg_Read32(TCON_TCON17_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_Ctrl_S_R =					IoReg_Read32(TCON_TCON17_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON17_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON17_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON17_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_HSE_S_R =					IoReg_Read32(TCON_TCON18_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_VSE_S_R =					IoReg_Read32(TCON_TCON18_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_Ctrl_S_R =					IoReg_Read32(TCON_TCON18_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON18_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON18_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON18_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_HSE_S_R =					IoReg_Read32(TCON_TCON19_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_VSE_S_R =					IoReg_Read32(TCON_TCON19_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_Ctrl_S_R =					IoReg_Read32(TCON_TCON19_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON19_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON19_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON19_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_HSE_S_R =					IoReg_Read32(TCON_TCON20_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_VSE_S_R =					IoReg_Read32(TCON_TCON20_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_Ctrl_S_R =					IoReg_Read32(TCON_TCON20_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON20_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON20_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON20_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_HSE_S_R =					IoReg_Read32(TCON_TCON21_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_VSE_S_R =					IoReg_Read32(TCON_TCON21_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_Ctrl_S_R =					IoReg_Read32(TCON_TCON21_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON21_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON21_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON21_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_HSE_S_R =					IoReg_Read32(TCON_TCON22_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_VSE_S_R =					IoReg_Read32(TCON_TCON22_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_Ctrl_S_R =					IoReg_Read32(TCON_TCON22_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON22_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON22_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON22_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_HSE_S_R =					IoReg_Read32(TCON_TCON23_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_VSE_S_R =					IoReg_Read32(TCON_TCON23_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_Ctrl_S_R =					IoReg_Read32(TCON_TCON23_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON23_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON23_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON23_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_HSE_S_R =					IoReg_Read32(TCON_TCON24_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_VSE_S_R =					IoReg_Read32(TCON_TCON24_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_Ctrl_S_R =					IoReg_Read32(TCON_TCON24_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON24_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON24_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON24_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_HSE_S_R =					IoReg_Read32(TCON_TCON25_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_VSE_S_R =					IoReg_Read32(TCON_TCON25_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_Ctrl_S_R =					IoReg_Read32(TCON_TCON25_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON25_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON25_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON25_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_HSE_S_R =					IoReg_Read32(TCON_TCON26_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_VSE_S_R =					IoReg_Read32(TCON_TCON26_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_Ctrl_S_R =					IoReg_Read32(TCON_TCON26_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON26_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON26_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON26_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_HSE_S_R =					IoReg_Read32(TCON_TCON27_HSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_VSE_S_R =					IoReg_Read32(TCON_TCON27_VSE_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_Ctrl_S_R =					IoReg_Read32(TCON_TCON27_Ctrl_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_ACROSS_LINE_CONTROL3_S_R =	IoReg_Read32(TCON_TCON27_ACROSS_LINE_CONTROL3_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_ACROSS_FRAME_CONTROL_S_R =	IoReg_Read32(TCON_TCON27_ACROSS_FRAME_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_FRAME_HL_CONTROL_S_R =		IoReg_Read32(TCON_TCON27_FRAME_HL_CONTROL_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL0_S_R = IoReg_Read32(TCON_TCON_PWM0_CONTROL0_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL1_S_R = IoReg_Read32(TCON_TCON_PWM0_CONTROL1_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL2_S_R = IoReg_Read32(TCON_TCON_PWM0_CONTROL2_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL0_S_R = IoReg_Read32(TCON_TCON_PWM1_CONTROL0_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL1_S_R = IoReg_Read32(TCON_TCON_PWM1_CONTROL1_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL2_S_R = IoReg_Read32(TCON_TCON_PWM1_CONTROL2_reg);
		vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM_DB_SEL_S_R =	  IoReg_Read32(TCON_TCON_PWM_DB_SEL_reg);

		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s]isp and tcon suspend finished \n",__FUNCTION__);
	}


}

void vbe_disp_panel_resume(void)
{
	//panel driver setting
	IoReg_Write32(PPOVERLAY_Display_Background_Color_reg,vbe_disp_suspend_resume.PPOVERLAY_Display_Background_Color_S_R );
	IoReg_Write32(PPOVERLAY_Display_Background_Color_2_reg, vbe_disp_suspend_resume.PPOVERLAY_Display_Background_Color_2_S_R);
	IoReg_Write32(PPOVERLAY_Main_Display_Control_RSV_reg, vbe_disp_suspend_resume.PPOVERLAY_Main_Display_Control_RSV_S_R);
	IoReg_Write32(PPOVERLAY_Main_Border_Highlight_Border_Color1_reg, vbe_disp_suspend_resume.PPOVERLAY_Main_Border_Highlight_Border_Color1_S_R);
	IoReg_Write32(PPOVERLAY_Main_Border_Highlight_Border_Color2_reg, vbe_disp_suspend_resume.PPOVERLAY_Main_Border_Highlight_Border_Color2_S_R);
	IoReg_Write32(PPOVERLAY_Main_Border_Highlight_Border_Color3_reg, vbe_disp_suspend_resume.PPOVERLAY_Main_Border_Highlight_Border_Color3_S_R);
	IoReg_Write32(PPOVERLAY_MAIN_DEN_H_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_MAIN_DEN_H_Start_End_S_R);
	IoReg_Write32(PPOVERLAY_MAIN_DEN_V_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_MAIN_DEN_V_Start_End_S_R);
	IoReg_Write32(PPOVERLAY_MAIN_Background_H_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_MAIN_Background_H_Start_End_S_R);
	IoReg_Write32(PPOVERLAY_MAIN_Background_V_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_MAIN_Background_V_Start_End_S_R);
	IoReg_Write32(PPOVERLAY_MAIN_Active_H_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_MAIN_Active_H_Start_End_S_R);
	IoReg_Write32(PPOVERLAY_MAIN_Active_V_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_MAIN_Active_V_Start_End_S_R);

	//sfg
	IoReg_Write32(SFG_SFG_ZZ_shift_dbg_CTRL_reg,			  vbe_disp_suspend_resume.SFG_SFG_ZZ_shift_dbg_CTRL_S_R);
	IoReg_Write32(SFG_SFG_SWAP_CTRL0_reg,					  vbe_disp_suspend_resume.SFG_SFG_SWAP_CTRL0_S_R);
	IoReg_Write32(SFG_SFG_CRC_CTRL_reg, 					  vbe_disp_suspend_resume.SFG_SFG_CRC_CTRL_S_R);
	IoReg_Write32(SFG_SFG_CRC_RESULT_reg,					  vbe_disp_suspend_resume.SFG_SFG_CRC_RESULT_S_R);
	IoReg_Write32(SFG_SFG_CRC_R_RESULT_reg, 				  vbe_disp_suspend_resume.SFG_SFG_CRC_R_RESULT_S_R);
	IoReg_Write32(SFG_SFG_L_DES_CRC_reg,					  vbe_disp_suspend_resume.SFG_SFG_L_DES_CRC_S_R);
	IoReg_Write32(SFG_SFG_R_DES_CRC_reg,					  vbe_disp_suspend_resume.SFG_SFG_R_DES_CRC_S_R);
	IoReg_Write32(SFG_SFG_CRC_ERR_CNT_reg,					  vbe_disp_suspend_resume.SFG_SFG_CRC_ERR_CNT_S_R);
	IoReg_Write32(SFG_SFG_FORCE_BG_AT_DIF_reg,				  vbe_disp_suspend_resume.SFG_SFG_FORCE_BG_AT_DIF_S_R);
	IoReg_Write32(SFG_ZZ_CTRL_reg,							  vbe_disp_suspend_resume.SFG_ZZ_CTRL_S_R);
	IoReg_Write32(SFG_SFG_DUMMY_CTRL_0A_reg,				  vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_0A_S_R);
	IoReg_Write32(SFG_SFG_DUMMY_CTRL_0B_reg,				  vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_0B_S_R);
	IoReg_Write32(SFG_SFG_DUMMY_CTRL_1A_reg,				  vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_1A_S_R);
	IoReg_Write32(SFG_SFG_DUMMY_CTRL_1B_reg,				  vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_1B_S_R);
	IoReg_Write32(SFG_SFG_DUMMY_CTRL_8_reg, 				  vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_8_S_R);
	IoReg_Write32(SFG_SFG_DUMMY_CTRL_10_reg,				  vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_10_S_R);
	IoReg_Write32(SFG_SFG_CTRL_13_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_13_S_R);
	IoReg_Write32(SFG_SFG_CTRL_24_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_24_S_R);
	IoReg_Write32(SFG_SFG_CTRL_25_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_25_S_R);
	IoReg_Write32(SFG_SFG_CTRL_26_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_26_S_R);
	IoReg_Write32(SFG_SFG_CTRL_0_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_0_S_R);
	IoReg_Write32(SFG_SFG_CTRL_1_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_1_S_R);
	IoReg_Write32(SFG_SFG_CTRL_2_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_2_S_R);
	IoReg_Write32(SFG_SFG_CTRL_3_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_3_S_R);
	IoReg_Write32(SFG_SFG_CTRL_4_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_4_S_R);
	IoReg_Write32(SFG_SFG_START_CTRL_8_reg, 				  vbe_disp_suspend_resume.SFG_SFG_START_CTRL_8_S_R);
	IoReg_Write32(SFG_SFG_START_CTRL_10_reg,				  vbe_disp_suspend_resume.SFG_SFG_START_CTRL_10_S_R);
	IoReg_Write32(SFG_SFG_CTRL_11_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_11_S_R);
	IoReg_Write32(SFG_SFG_CTRL_12_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_12_S_R);
	IoReg_Write32(SFG_SFG_CTRL_6_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_6_S_R);
	IoReg_Write32(SFG_SFG_CTRL_7_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_7_S_R);
	IoReg_Write32(SFG_SFG_CTRL_8_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_8_S_R);
	IoReg_Write32(SFG_SFG_CTRL_9_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_9_S_R);
	IoReg_Write32(SFG_SFG_CTRL_5_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_5_S_R);
	IoReg_Write32(SFG_SFG_CTRL_A_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_A_S_R);
	IoReg_Write32(SFG_SFG_CTRL_B_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_B_S_R);
	IoReg_Write32(SFG_SFG_CTRL_C_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_C_S_R);
	IoReg_Write32(SFG_SFG_TG_AUTO_1_reg,					  vbe_disp_suspend_resume.SFG_SFG_TG_AUTO_1_S_R);
	IoReg_Write32(SFG_SFG_TG_AUTO_2_reg,					  vbe_disp_suspend_resume.SFG_SFG_TG_AUTO_2_S_R);
	IoReg_Write32(SFG_SFG_TG_AUTO_3_reg,					  vbe_disp_suspend_resume.SFG_SFG_TG_AUTO_3_S_R);
	IoReg_Write32(SFG_SFG_TG_AUTO_4_reg,					  vbe_disp_suspend_resume.SFG_SFG_TG_AUTO_4_S_R);
	IoReg_Write32(SFG_SFG_DUMMY_reg,						  vbe_disp_suspend_resume.SFG_SFG_DUMMY_S_R);
	IoReg_Write32(SFG_SFG_BIST_MODE_reg,					  vbe_disp_suspend_resume.SFG_SFG_BIST_MODE_S_R);
	IoReg_Write32(SFG_SFG_BIST_DONE_reg,					  vbe_disp_suspend_resume.SFG_SFG_BIST_DONE_S_R);
	IoReg_Write32(SFG_SFG_BIST_FAIL_GROUP_reg,				  vbe_disp_suspend_resume.SFG_SFG_BIST_FAIL_GROUP_S_R);
	IoReg_Write32(SFG_SFG_BIST_FAIL_reg,					  vbe_disp_suspend_resume.SFG_SFG_BIST_FAIL_S_R);
	IoReg_Write32(SFG_SFG_DRF_MODE_reg, 					  vbe_disp_suspend_resume.SFG_SFG_DRF_MODE_S_R);
	IoReg_Write32(SFG_SFG_DRF_RESUME_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRF_RESUME_S_R);
	IoReg_Write32(SFG_SFG_DRF_DONE_reg, 					  vbe_disp_suspend_resume.SFG_SFG_DRF_DONE_S_R);
	IoReg_Write32(SFG_SFG_DRF_PAUSE_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRF_PAUSE_S_R);
	IoReg_Write32(SFG_SFG_DRF_FAIL_GROUP_reg,				  vbe_disp_suspend_resume.SFG_SFG_DRF_FAIL_GROUP_S_R);
	IoReg_Write32(SFG_SFG_DRF_FAI_reg,						  vbe_disp_suspend_resume.SFG_SFG_DRF_FAI_S_R);
	IoReg_Write32(SFG_SFG_BIST_OTHER_reg,					  vbe_disp_suspend_resume.SFG_SFG_BIST_OTHER_S_R);
	IoReg_Write32(SFG_SFG_MID_DUMMY_0_reg,					  vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_0_S_R);
	IoReg_Write32(SFG_SFG_MID_DUMMY_1_reg,					  vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_1_S_R);
	IoReg_Write32(SFG_SFG_MID_DUMMY_2_reg,					  vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_2_S_R);
	IoReg_Write32(SFG_SFG_MID_DUMMY_3_reg,					  vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_3_S_R);
	IoReg_Write32(SFG_SFG_MID_DUMMY_8_reg,					  vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_8_S_R);
	IoReg_Write32(SFG_SFG_MID_DUMMY_10_reg, 				  vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_10_S_R);
	IoReg_Write32(SFG_SFG_CTRL_DUM_LINE_reg,				  vbe_disp_suspend_resume.SFG_SFG_CTRL_DUM_LINE_S_R);
	IoReg_Write32(SFG_SFG_data_after_den_reg,				  vbe_disp_suspend_resume.SFG_SFG_data_after_den_S_R);
	IoReg_Write32(SFG_SFG_insert_subpixel_0_reg,			  vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_0_S_R);
	IoReg_Write32(SFG_SFG_insert_subpixel_1_reg,			  vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_1_S_R);
	IoReg_Write32(SFG_SFG_insert_subpixel_2_reg,			  vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_2_S_R);
	IoReg_Write32(SFG_SFG_insert_subpixel_3_reg,			  vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_3_S_R);
	IoReg_Write32(SFG_SFG_ctrl_10_reg,						  vbe_disp_suspend_resume.SFG_SFG_ctrl_10_S_R);
	IoReg_Write32(SFG_SFG_Last_ext_pixel_last_flip_reg, 	  vbe_disp_suspend_resume.SFG_SFG_Last_ext_pixel_last_flip_S_R);
	IoReg_Write32(SFG_SFG_CTRL_14_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_14_S_R);
	IoReg_Write32(SFG_SFG_CTRL_15_reg,						  vbe_disp_suspend_resume.SFG_SFG_CTRL_15_S_R);
	IoReg_Write32(SFG_SFG_MID_DUMMY_11_reg, 				  vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_11_S_R);
	IoReg_Write32(SFG_SFG_MID_DUMMY_12_reg, 				  vbe_disp_suspend_resume.SFG_SFG_MID_DUMMY_12_S_R);
	IoReg_Write32(SFG_SFG_debug_reg,						  vbe_disp_suspend_resume.SFG_SFG_debug_S_R);
	IoReg_Write32(SFG_SFG_data_capture_vh_reg,				  vbe_disp_suspend_resume.SFG_SFG_data_capture_vh_S_R);
	IoReg_Write32(SFG_SFG_data_capture_src_reg, 			  vbe_disp_suspend_resume.SFG_SFG_data_capture_src_S_R);
	IoReg_Write32(SFG_SFG_data_capture_read_data_reg,		  vbe_disp_suspend_resume.SFG_SFG_data_capture_read_data_S_R);
	IoReg_Write32(SFG_SFG_last_seg_0_reg,					  vbe_disp_suspend_resume.SFG_SFG_last_seg_0_S_R);
	IoReg_Write32(SFG_SFG_last_seg_1_reg,					  vbe_disp_suspend_resume.SFG_SFG_last_seg_1_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_0_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_0_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_1_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_1_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_2_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_2_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_6_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_6_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_7_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_7_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_8_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_8_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_12_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_12_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_13_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_13_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_14_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_14_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_18_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_18_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_19_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_19_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_20_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_20_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_3_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_3_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_4_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_4_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_5_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_5_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_9_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_9_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_10_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_10_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_11_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_11_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_15_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_15_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_16_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_16_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_17_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_17_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_21_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_21_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_22_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_22_S_R);
	IoReg_Write32(SFG_SFG_DRD_CTRL_23_reg,					  vbe_disp_suspend_resume.SFG_SFG_DRD_CTRL_23_S_R);
	IoReg_Write32(SFG_SFG_START_CTRL_27_reg,				  vbe_disp_suspend_resume.SFG_SFG_START_CTRL_27_S_R);
	IoReg_Write32(SFG_SFG_START_CTRL_28_reg,				  vbe_disp_suspend_resume.SFG_SFG_START_CTRL_28_S_R);
	IoReg_Write32(SFG_SFG_DUMMY_CTRL_29_reg,				  vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_29_S_R);
	IoReg_Write32(SFG_SFG_DUMMY_CTRL_30_reg,				  vbe_disp_suspend_resume.SFG_SFG_DUMMY_CTRL_30_S_R);
	IoReg_Write32(SFG_SFG1_fw_ext_SUBPIXEL_reg, 			  vbe_disp_suspend_resume.SFG_SFG1_fw_ext_SUBPIXEL_S_R);
	IoReg_Write32(SFG_SFG1_fw_ext_SUBPIXEL2_reg,			  vbe_disp_suspend_resume.SFG_SFG1_fw_ext_SUBPIXEL2_S_R);
	IoReg_Write32(SFG_SFG1_DUM_DATA_LINE_0_reg, 			  vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_0_S_R);
	IoReg_Write32(SFG_SFG1_DUM_DATA_LINE_1_reg, 			  vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_1_S_R);
	IoReg_Write32(SFG_SFG1_DUM_DATA_LINE_2_reg, 			  vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_2_S_R);
	IoReg_Write32(SFG_SFG1_DUM_DATA_LINE_3_reg, 			  vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_3_S_R);
	IoReg_Write32(SFG_SFG1_DUM_DATA_LINE_4_reg, 			  vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_4_S_R);
	IoReg_Write32(SFG_SFG1_DUM_DATA_LINE_5_reg, 			  vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_5_S_R);
	IoReg_Write32(SFG_SFG1_DUM_DATA_LINE_6_reg, 			  vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_6_S_R);
	IoReg_Write32(SFG_SFG1_DUM_DATA_LINE_7_reg, 			  vbe_disp_suspend_resume.SFG_SFG1_DUM_DATA_LINE_7_S_R);
	IoReg_Write32(SFG_ZZ_CTRL_2_reg,						  vbe_disp_suspend_resume.SFG_ZZ_CTRL_2_S_R);
	IoReg_Write32(SFG_SFG_insert_subpixel_4_reg,			  vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_4_S_R);
	IoReg_Write32(SFG_SFG_insert_subpixel_5_reg,			  vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_5_S_R);
	IoReg_Write32(SFG_SFG_insert_subpixel_6_reg,			  vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_6_S_R);
	IoReg_Write32(SFG_SFG_insert_subpixel_7_reg,			  vbe_disp_suspend_resume.SFG_SFG_insert_subpixel_7_S_R);
	IoReg_Write32(SFG_SFG_Last_ext_pixel_last_flip_2_reg,	  vbe_disp_suspend_resume.SFG_SFG_Last_ext_pixel_last_flip_2_S_R);
	IoReg_Write32(SFG_SFG_last_seg_2_reg,					  vbe_disp_suspend_resume.SFG_SFG_last_seg_2_S_R);
	IoReg_Write32(SFG_SFG_last_seg_3_reg,					  vbe_disp_suspend_resume.SFG_SFG_last_seg_3_S_R);
	IoReg_Write32(SFG_SFG_patgen_ctrl_reg,					  vbe_disp_suspend_resume.SFG_SFG_patgen_ctrl_S_R);
	IoReg_Write32(SFG_SFG_patgen_0_reg, 					  vbe_disp_suspend_resume.SFG_SFG_patgen_0_S_R);
	IoReg_Write32(SFG_SFG_patgen_1_reg, 					  vbe_disp_suspend_resume.SFG_SFG_patgen_1_S_R);
	IoReg_Write32(SFG_SFG_patgen_2_reg, 					  vbe_disp_suspend_resume.SFG_SFG_patgen_2_S_R);
	IoReg_Write32(SFG_SFG_patgen_3_reg, 					  vbe_disp_suspend_resume.SFG_SFG_patgen_3_S_R);
	IoReg_Write32(SFG_SFG_patgen_4_reg, 					  vbe_disp_suspend_resume.SFG_SFG_patgen_4_S_R);
	IoReg_Write32(SFG_SFG_patgen_5_reg, 					  vbe_disp_suspend_resume.SFG_SFG_patgen_5_S_R);
	IoReg_Write32(SFG_SFG_patgen_6_reg, 					  vbe_disp_suspend_resume.SFG_SFG_patgen_6_S_R);
	IoReg_Write32(SFG_SFG_patgen_7_reg, 					  vbe_disp_suspend_resume.SFG_SFG_patgen_7_S_R);
	IoReg_Write32(SFG_SFG_patgen_8_reg, 					  vbe_disp_suspend_resume.SFG_SFG_patgen_8_S_R);
	IoReg_Write32(SFG_SFG_patgen_9_reg, 					  vbe_disp_suspend_resume.SFG_SFG_patgen_9_S_R);
	IoReg_Write32(SFG_SFG_patgen_10_reg,					  vbe_disp_suspend_resume.SFG_SFG_patgen_10_S_R);
	IoReg_Write32(SFG_SFG_patgen_11_reg,					  vbe_disp_suspend_resume.SFG_SFG_patgen_11_S_R);
	IoReg_Write32(SFG_SFG_patgen_12_reg,					  vbe_disp_suspend_resume.SFG_SFG_patgen_12_S_R);
	IoReg_Write32(SFG_SFG_irq_ctrl_0_reg,					  vbe_disp_suspend_resume.SFG_SFG_irq_ctrl_0_S_R);
	IoReg_Write32(SFG_SFG_irq_ctrl_1_reg,					  vbe_disp_suspend_resume.SFG_SFG_irq_ctrl_1_S_R);
	IoReg_Write32(SFG_Pat_det_window_H_ini_sta_width_reg,	  vbe_disp_suspend_resume.SFG_Pat_det_window_H_ini_sta_width_S_R);
	IoReg_Write32(SFG_Pat_det_window_V_ini_sta_height_reg,	  vbe_disp_suspend_resume.SFG_Pat_det_window_V_ini_sta_height_S_R);
	IoReg_Write32(SFG_Pattern_detect_CTRL_reg,				  vbe_disp_suspend_resume.SFG_Pattern_detect_CTRL_S_R);
	IoReg_Write32(SFG_Pat_det_ctrl_1_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_ctrl_1_S_R);
	IoReg_Write32(SFG_Pat_det_ctrl_2_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_ctrl_2_S_R);
	IoReg_Write32(SFG_Pat_det_ctrl_3_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_ctrl_3_S_R);
	IoReg_Write32(SFG_Pat_det_ctrl_4_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_ctrl_4_S_R);
	IoReg_Write32(SFG_Pat_det_ctrl_5_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_ctrl_5_S_R);
	IoReg_Write32(SFG_Pat_det_ctrl_7_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_ctrl_7_S_R);
	IoReg_Write32(SFG_Pat_det_ctrl_6_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_ctrl_6_S_R);
	IoReg_Write32(SFG_Pat_det_acc1_reg, 					  vbe_disp_suspend_resume.SFG_Pat_det_acc1_S_R);
	IoReg_Write32(SFG_Pat_det_acc2_reg, 					  vbe_disp_suspend_resume.SFG_Pat_det_acc2_S_R);
	IoReg_Write32(SFG_Pat_det_acc3_reg, 					  vbe_disp_suspend_resume.SFG_Pat_det_acc3_S_R);
	IoReg_Write32(SFG_Pat_det_acc4_reg, 					  vbe_disp_suspend_resume.SFG_Pat_det_acc4_S_R);
	IoReg_Write32(SFG_Pat_det_acc5_reg, 					  vbe_disp_suspend_resume.SFG_Pat_det_acc5_S_R);
	IoReg_Write32(SFG_Pat_det_acc6_reg, 					  vbe_disp_suspend_resume.SFG_Pat_det_acc6_S_R);
	IoReg_Write32(SFG_Pat_det_acc7_reg, 					  vbe_disp_suspend_resume.SFG_Pat_det_acc7_S_R);
	IoReg_Write32(SFG_Pat_det_acc8_reg, 					  vbe_disp_suspend_resume.SFG_Pat_det_acc8_S_R);
	IoReg_Write32(SFG_Pat_det_acc9_reg, 					  vbe_disp_suspend_resume.SFG_Pat_det_acc9_S_R);
	IoReg_Write32(SFG_Pat_det_acc10_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_acc10_S_R);
	IoReg_Write32(SFG_Pat_det_acc11_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_acc11_S_R);
	IoReg_Write32(SFG_Pat_det_acc12_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_acc12_S_R);
	IoReg_Write32(SFG_Pat_det_acc13_reg,					  vbe_disp_suspend_resume.SFG_Pat_det_acc13_S_R);
	IoReg_Write32(SFG_Debug_pin_reg,						  vbe_disp_suspend_resume.SFG_Debug_pin_S_R);
	IoReg_Write32(SFG_SFG2_CTRL_0_reg,						  vbe_disp_suspend_resume.SFG_SFG2_CTRL_0_S_R);
	IoReg_Write32(SFG_SFG2_PORT_SWAP_reg,					  vbe_disp_suspend_resume.SFG_SFG2_PORT_SWAP_S_R);
	IoReg_Write32(SFG_SFG2_FORCE_0_reg, 					  vbe_disp_suspend_resume.SFG_SFG2_FORCE_0_S_R);
	IoReg_Write32(SFG_SFG2_FORCE_1_reg, 					  vbe_disp_suspend_resume.SFG_SFG2_FORCE_1_S_R);
	IoReg_Write32(SFG_SFG2_CRC_CTRL_reg,					  vbe_disp_suspend_resume.SFG_SFG2_CRC_CTRL_S_R);
	IoReg_Write32(SFG_SFG2_CRC_RESULT_reg,					  vbe_disp_suspend_resume.SFG_SFG2_CRC_RESULT_S_R);
	IoReg_Write32(SFG_SFG2_CRC_R_RESULT_reg,				  vbe_disp_suspend_resume.SFG_SFG2_CRC_R_RESULT_S_R);
	IoReg_Write32(SFG_SFG2_CRC_L_DES_CRC_reg,				  vbe_disp_suspend_resume.SFG_SFG2_CRC_L_DES_CRC_S_R);
	IoReg_Write32(SFG_SFG2_CRC_R_DES_CRC_reg,				  vbe_disp_suspend_resume.SFG_SFG2_CRC_R_DES_CRC_S_R);
	IoReg_Write32(SFG_SFG2_CRC_ERR_CNT_reg, 				  vbe_disp_suspend_resume.SFG_SFG2_CRC_ERR_CNT_S_R);
	IoReg_Write32(SFG_SFG2_TIME_CTRL_0_reg, 				  vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_0_S_R);
	IoReg_Write32(SFG_SFG2_TIME_CTRL_1_reg, 				  vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_1_S_R);
	IoReg_Write32(SFG_SFG2_TIME_CTRL_2_reg, 				  vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_2_S_R);
	IoReg_Write32(SFG_SFG2_DEN_CTRL_reg,					  vbe_disp_suspend_resume.SFG_SFG2_DEN_CTRL_S_R);
	IoReg_Write32(SFG_SFG2_TIME_CTRL_AUTO_0_reg,			  vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_AUTO_0_S_R);
	IoReg_Write32(SFG_SFG2_TIME_CTRL_AUTO_1_reg,			  vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_AUTO_1_S_R);
	IoReg_Write32(SFG_SFG2_TIME_CTRL_AUTO_2_reg,			  vbe_disp_suspend_resume.SFG_SFG2_TIME_CTRL_AUTO_2_S_R);
	IoReg_Write32(SFG_PIF_FIFO_CTRL0_reg,					  vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL0_S_R);
	IoReg_Write32(SFG_PIF_FIFO_CTRL1_reg,					  vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL1_S_R);
	IoReg_Write32(SFG_PIF_FIFO_CTRL2_reg,					  vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL2_S_R);
	IoReg_Write32(SFG_PIF_FIFO_CTRL3_reg,					  vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL3_S_R);
	IoReg_Write32(SFG_PIF_FIFO_CTRL4_reg,					  vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL4_S_R);
	IoReg_Write32(SFG_PIF_FIFO_CTRL5_reg,					  vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL5_S_R);
	IoReg_Write32(SFG_PIF_FIFO_CTRL6_reg,					  vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL6_S_R);
	IoReg_Write32(SFG_PIF_FIFO_OSD_CTRL0_reg,				  vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL0_S_R);
	IoReg_Write32(SFG_PIF_FIFO_OSD_CTRL1_reg,				  vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL1_S_R);
	IoReg_Write32(SFG_PIF_FIFO_OSD_CTRL2_reg,				  vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL2_S_R);
	IoReg_Write32(SFG_PIF_FIFO_OSD_CTRL3_reg,				  vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL3_S_R);
	IoReg_Write32(SFG_PIF_FIFO_OSD_CTRL4_reg,				  vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL4_S_R);
	IoReg_Write32(SFG_PIF_FIFO_OSD_CTRL5_reg,				  vbe_disp_suspend_resume.SFG_PIF_FIFO_OSD_CTRL5_S_R);
	IoReg_Write32(SFG_PIF_FIFO_MUX_CTRL0_reg,				  vbe_disp_suspend_resume.SFG_PIF_FIFO_MUX_CTRL0_S_R);
	IoReg_Write32(SFG_PIF_FIFO_MUX_CTRL1_reg,				  vbe_disp_suspend_resume.SFG_PIF_FIFO_MUX_CTRL1_S_R);
	IoReg_Write32(SFG_PIF_FIFO_MUX_CTRL2_reg,				  vbe_disp_suspend_resume.SFG_PIF_FIFO_MUX_CTRL2_S_R);
	IoReg_Write32(SFG_PIF_MISC_reg, 						  vbe_disp_suspend_resume.SFG_PIF_MISC_S_R);

	//panel interface common
	IoReg_Write32(PIF_LVDS_CTRL1_reg,			 vbe_disp_suspend_resume.PIF_LVDS_CTRL1_S_R);
	IoReg_Write32(PIF_LVDS_CTRL2_reg,			 vbe_disp_suspend_resume.PIF_LVDS_CTRL2_S_R);
	IoReg_Write32(PIF_LVDS_CTRL3_reg,			 vbe_disp_suspend_resume.PIF_LVDS_CTRL3_S_R);
	IoReg_Write32(PIF_LVDS_CTRL4_reg,			 vbe_disp_suspend_resume.PIF_LVDS_CTRL4_S_R);
	IoReg_Write32(PIF_LVDS_CTRL5_reg,			 vbe_disp_suspend_resume.PIF_LVDS_CTRL5_S_R);
	IoReg_Write32(PIF_MLVDS_CTRL0_reg,			 vbe_disp_suspend_resume.PIF_MLVDS_CTRL0_S_R);
	IoReg_Write32(PIF_MLVDS_Reset_Pul_CTRL_reg,  vbe_disp_suspend_resume.PIF_MLVDS_Reset_Pul_CTRL_S_R);
	IoReg_Write32(PIF_MLVDS_CTRL1_reg,			 vbe_disp_suspend_resume.PIF_MLVDS_CTRL1_S_R);
	IoReg_Write32(PIF_MLVDS_CTRL2_reg,			 vbe_disp_suspend_resume.PIF_MLVDS_CTRL2_S_R);
	IoReg_Write32(PIF_MLVDS_CTRL3_reg,			 vbe_disp_suspend_resume.PIF_MLVDS_CTRL3_S_R);
	IoReg_Write32(PIF_MLVDS_CTRL4_reg,			 vbe_disp_suspend_resume.PIF_MLVDS_CTRL4_S_R);

	//PIF APHY
	IoReg_Write32(PINMUX_LVDSPHY_PIF_3_reg , 					 vbe_disp_suspend_resume.PINMUX_LVDSPHY_PIF_3_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_PIF_4_reg , 					 vbe_disp_suspend_resume.PINMUX_LVDSPHY_PIF_4_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_PIF_5_reg , 					 vbe_disp_suspend_resume.PINMUX_LVDSPHY_PIF_5_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_PIF_6_reg , 					 vbe_disp_suspend_resume.PINMUX_LVDSPHY_PIF_6_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_Pin_Mux_LVDS_reg ,				 vbe_disp_suspend_resume.PINMUX_LVDSPHY_Pin_Mux_LVDS_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_0_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_1_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_2_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_3_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_3_2_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_4_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_4_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_18_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_5_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_0_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_4_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_8_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_12_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_16_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_20_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_24_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_28_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_32_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_36_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_40_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_44_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_48_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_52_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_56_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_60_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_1_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_5_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_reg ,	 vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_9_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_13_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_17_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_21_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_25_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_29_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_33_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_37_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_41_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_45_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_49_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_53_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_57_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_61_S_R);
#if 0 //don't control lane power here
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_S_R);
#endif
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_34_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_38_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_42_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_46_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_50_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_54_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_58_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_62_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_66_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_70_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_74_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_78_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_82_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_86_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_90_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_94_S_R);
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_reg ,  vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_1_95_S_R);


	if((Get_DISPLAY_PANEL_TYPE() == P_VBY1_4K2K)  ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS) ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI))
	{
		//VBy1 Mac
		IoReg_Write32(VBY1_VIDEO_FORMAT_reg ,	   vbe_disp_suspend_resume.VBY1_VIDEO_FORMAT_S_R);
		IoReg_Write32(VBY1_LANE_STATUS_reg , 	   vbe_disp_suspend_resume.VBY1_LANE_STATUS_S_R);
		IoReg_Write32(VBY1_CTL_reg , 			   vbe_disp_suspend_resume.VBY1_CTL_S_R);
		IoReg_Write32(VBY1_TRANSMIT_CONTROL_reg ,   vbe_disp_suspend_resume.VBY1_TRANSMIT_CONTROL_S_R);
		IoReg_Write32(VBY1_TRANSMIT_STATUS_reg ,    vbe_disp_suspend_resume.VBY1_TRANSMIT_STATUS_S_R);
		IoReg_Write32(VBY1_THREE_FLAG_reg , 	   vbe_disp_suspend_resume.VBY1_THREE_FLAG_S_R);
		IoReg_Write32(VBY1_CRC_CONTROL_reg , 	   vbe_disp_suspend_resume.VBY1_CRC_CONTROL_S_R);
		IoReg_Write32(VBY1_CRC_RESULT_reg , 	   vbe_disp_suspend_resume.VBY1_CRC_RESULT_S_R);
		IoReg_Write32(VBY1_CRC_DES_reg , 		   vbe_disp_suspend_resume.VBY1_CRC_DES_S_R);
		IoReg_Write32(VBY1_CRC_ERROR_CNT_reg ,	   vbe_disp_suspend_resume.VBY1_CRC_ERROR_CNT_S_R);
		IoReg_Write32(VBY1_ASYNC_FIFO_RST_reg ,	   vbe_disp_suspend_resume.VBY1_ASYNC_FIFO_RST_S_R);
		IoReg_Write32(VBY1_VBY1_DEBUG_reg ,		   vbe_disp_suspend_resume.VBY1_VBY1_DEBUG_S_R);
		IoReg_Write32(VBY1_VBY1_STATUS_FW_CTRL_reg, vbe_disp_suspend_resume.VBY1_VBY1_STATUS_FW_CTRL_S_R);
		IoReg_Write32(VBY1_DATA_CAPTURE_reg ,	   vbe_disp_suspend_resume.VBY1_DATA_CAPTURE_S_R);
		IoReg_Write32(VBY1_DATA_CAPTURE_1_reg ,	   vbe_disp_suspend_resume.VBY1_DATA_CAPTURE_1_S_R);
		IoReg_Write32(VBY1_DATA_CAPTURE_2_reg ,	   vbe_disp_suspend_resume.VBY1_DATA_CAPTURE_2_S_R);
		IoReg_Write32(VBY1_DBG_EN_reg ,			   vbe_disp_suspend_resume.VBY1_DBG_EN_S_R);
		IoReg_Write32(VBY1_DBG_DATA_reg ,		   vbe_disp_suspend_resume.VBY1_DBG_DATA_S_R);
		IoReg_Write32(VBY1_DPHY_CTL_reg ,		   vbe_disp_suspend_resume.VBY1_DPHY_CTL_S_R);
		IoReg_Write32(VBY1_DPHY_RD_reg , 		   vbe_disp_suspend_resume.VBY1_DPHY_RD_S_R);
		IoReg_Write32(VBY1_META_CTL_reg ,		   vbe_disp_suspend_resume.VBY1_META_CTL_S_R);
		IoReg_Write32(VBY1_META_CTL_1_reg ,		   vbe_disp_suspend_resume.VBY1_META_CTL_1_S_R);
		IoReg_Write32(VBY1_META_DATA_0_reg , 	   vbe_disp_suspend_resume.VBY1_META_DATA_0_S_R);
		IoReg_Write32(VBY1_META_DATA_1_reg , 	   vbe_disp_suspend_resume.VBY1_META_DATA_1_S_R);
		IoReg_Write32(VBY1_META_DATA_2_reg , 	   vbe_disp_suspend_resume.VBY1_META_DATA_2_S_R);
		IoReg_Write32(VBY1_META_DATA_3_reg , 	   vbe_disp_suspend_resume.VBY1_META_DATA_3_S_R);
		IoReg_Write32(VBY1_META_DATA_4_reg , 	   vbe_disp_suspend_resume.VBY1_META_DATA_4_S_R);
		IoReg_Write32(VBY1_META_DATA_5_reg , 	   vbe_disp_suspend_resume.VBY1_META_DATA_5_S_R);
		IoReg_Write32(VBY1_META_DATA_6_reg , 	   vbe_disp_suspend_resume.VBY1_META_DATA_6_S_R);
		IoReg_Write32(VBY1_META_DATA_7_reg , 	   vbe_disp_suspend_resume.VBY1_META_DATA_7_S_R);
		IoReg_Write32(VBY1_META_DATA_8_reg , 	   vbe_disp_suspend_resume.VBY1_META_DATA_8_S_R);
		IoReg_Write32(VBY1_META_DATA_9_reg , 	   vbe_disp_suspend_resume.VBY1_META_DATA_9_S_R);
		IoReg_Write32(VBY1_META_DATA_10_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_10_S_R);
		IoReg_Write32(VBY1_META_DATA_11_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_11_S_R);
		IoReg_Write32(VBY1_META_DATA_12_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_12_S_R);
		IoReg_Write32(VBY1_META_DATA_13_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_13_S_R);
		IoReg_Write32(VBY1_META_DATA_14_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_14_S_R);
		IoReg_Write32(VBY1_META_DATA_15_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_15_S_R);
		IoReg_Write32(VBY1_META_DATA_16_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_16_S_R);
		IoReg_Write32(VBY1_META_DATA_17_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_17_S_R);
		IoReg_Write32(VBY1_META_DATA_18_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_18_S_R);
		IoReg_Write32(VBY1_META_DATA_19_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_19_S_R);
		IoReg_Write32(VBY1_META_DATA_20_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_20_S_R);
		IoReg_Write32(VBY1_META_DATA_21_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_21_S_R);
		IoReg_Write32(VBY1_META_DATA_22_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_22_S_R);
		IoReg_Write32(VBY1_META_DATA_23_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_23_S_R);
		IoReg_Write32(VBY1_META_DATA_24_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_24_S_R);
		IoReg_Write32(VBY1_META_DATA_25_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_25_S_R);
		IoReg_Write32(VBY1_META_DATA_26_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_26_S_R);
		IoReg_Write32(VBY1_META_DATA_27_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_27_S_R);
		IoReg_Write32(VBY1_META_DATA_28_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_28_S_R);
		IoReg_Write32(VBY1_META_DATA_29_reg ,	   vbe_disp_suspend_resume.VBY1_META_DATA_29_S_R);
		// for OSD split
		if((Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD2K1K_to_H5X_SPLIT) ||(Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD1K2K_to_H5X_SPLIT)){
			IoReg_Write32(VBY1_OSD_OSD_VIDEO_FORMAT_reg, vbe_disp_suspend_resume.VBY1_OSD_OSD_VIDEO_FORMAT_S_R);
			IoReg_Write32(VBY1_OSD_OSD_LANE_STATUS_reg, vbe_disp_suspend_resume.VBY1_OSD_OSD_LANE_STATUS_S_R);
			IoReg_Write32(VBY1_OSD_OSD_CTL_reg, vbe_disp_suspend_resume.VBY1_OSD_OSD_CTL_S_R);
			IoReg_Write32(VBY1_OSD_OSD_TRANSMIT_CONTROL_reg, vbe_disp_suspend_resume.VBY1_OSD_OSD_TRANSMIT_CONTROL_S_R);
			IoReg_Write32(VBY1_OSD_OSD_THREE_FLAG_reg, vbe_disp_suspend_resume.VBY1_OSD_OSD_THREE_FLAG_S_R);
			IoReg_Write32(VBY1_OSD_OSD_CRC_CONTROL_reg, vbe_disp_suspend_resume.VBY1_OSD_OSD_CRC_CONTROL_S_R);
			IoReg_Write32(VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_reg, vbe_disp_suspend_resume.VBY1_OSD_OSD_VBY1_STATUS_FW_CTRL_S_R);
			IoReg_Write32(VBY1_OSD_OSD_DPHY_CTL_reg, vbe_disp_suspend_resume.VBY1_OSD_OSD_DPHY_CTL_S_R);
		}
	}
	else if((Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)||(Get_DISPLAY_PANEL_TYPE() == P_CEDS))
	{
		IoReg_Write32(EPI_EPI_PACKET_CTR1_0_0_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_PACKET_CTR1_0_0_S_R);
		IoReg_Write32(EPI_EPI_PACKET_CTRL_reg , 			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_PACKET_CTRL_S_R);
		IoReg_Write32(EPI_EPI_CLOCK_CTRL0_reg , 			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CLOCK_CTRL0_S_R);
		IoReg_Write32(EPI_EPI_DGB_READ_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_DGB_READ_S_R);
		IoReg_Write32(EPI_EPI_PORT_OPTION_CTRL_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_PORT_OPTION_CTRL_S_R);
		IoReg_Write32(EPI_EPI_CMPI_FRONT_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_FRONT_S_R);
		IoReg_Write32(EPI_CMPI_DUMMY_COLOR_0_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_CMPI_DUMMY_COLOR_0_S_R);
		IoReg_Write32(EPI_CMPI_DUMMY_COLOR_1_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_CMPI_DUMMY_COLOR_1_S_R);
		IoReg_Write32(EPI_CMPI_DUMMY_COLOR_2_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_CMPI_DUMMY_COLOR_2_S_R);
		IoReg_Write32(EPI_CMPI_DUMMY_COLOR_3_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_CMPI_DUMMY_COLOR_3_S_R);
		IoReg_Write32(EPI_EPI_CRC_CTRL_0_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CRC_CTRL_0_S_R);
		IoReg_Write32(EPI_EPI_CRC_CTRL_1_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CRC_CTRL_1_S_R);
		IoReg_Write32(EPI_EPI_CRC_CTRL_2_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CRC_CTRL_2_S_R);
		IoReg_Write32(EPI_EPI_DATA_SRC_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_DATA_SRC_S_R);
		IoReg_Write32(EPI_EPI_PACKET_CTR1_INV_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_PACKET_CTR1_INV_S_R);
		IoReg_Write32(EPI_EPI_PACKET_CTR1_INV_TABLE_1_reg ,  vbe_disp_panel_epi_suspend_resume.EPI_EPI_PACKET_CTR1_INV_TABLE_1_S_R);
		IoReg_Write32(EPI_EPI_PACKET_CTR1_INV_TABLE_2_reg ,  vbe_disp_panel_epi_suspend_resume.EPI_EPI_PACKET_CTR1_INV_TABLE_2_S_R);
		IoReg_Write32(EPI_EPI_CMPI_RLC_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_RLC_S_R);
		IoReg_Write32(EPI_EPI_CMPI_VBT_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_VBT_S_R);
		IoReg_Write32(EPI_EPI_CMPI_VBT_OPT_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_VBT_OPT_S_R);
		IoReg_Write32(EPI_EPI_SCR_TCON_RST_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR_TCON_RST_S_R);
		IoReg_Write32(EPI_EPI_SCR8_CTRL_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR8_CTRL_S_R);
		IoReg_Write32(EPI_EPI_SCR8_INI_VAL_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR8_INI_VAL_S_R);
		IoReg_Write32(EPI_EPI_SCR10_CTRL_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR10_CTRL_S_R);
		IoReg_Write32(EPI_EPI_SCR10_INI_VAL_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR10_INI_VAL_S_R);
		IoReg_Write32(EPI_EPI_SCR8CM_CTRL_reg , 			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR8CM_CTRL_S_R);
		IoReg_Write32(EPI_EPI_SCR8CM_INI_VAL_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR8CM_INI_VAL_S_R);
		IoReg_Write32(EPI_EPI_SCR10CM_CTRL_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR10CM_CTRL_S_R);
		IoReg_Write32(EPI_EPI_SCR10CM_INI_VAL_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SCR10CM_INI_VAL_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_CTRL_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CTRL_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_CMD_ST_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_ST_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_CMD_CMD1_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_CMD1_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_CMD_CMD2_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_CMD2_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_CMD_CMD3_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_CMD3_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_CMD_CMD4_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_CMD4_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_CMD_CMD5_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_CMD_CMD5_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_START_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_START_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA0_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA0_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA1_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA1_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA2_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA2_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA3_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA3_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA4_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA4_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA5_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA5_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA6_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA6_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA7_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA7_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA8_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA8_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA9_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA9_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA10_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA10_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA11_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA11_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA12_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA12_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA13_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA13_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA14_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA14_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA15_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA15_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA16_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA16_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA17_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA17_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA18_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA18_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA19_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA19_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA20_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA20_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA21_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA21_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA22_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA22_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA23_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA23_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA24_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA24_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA25_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA25_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA26_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA26_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA27_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA27_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA28_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA28_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA29_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA29_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA30_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA30_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA31_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA31_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA32_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA32_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA33_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA33_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA34_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA34_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA35_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA35_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA36_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA36_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA37_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA37_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA38_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA38_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA39_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA39_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA40_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA40_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA41_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA41_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA42_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA42_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA43_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA43_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA44_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA44_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA45_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA45_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA46_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA46_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA47_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA47_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA48_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA48_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA49_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA49_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA50_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA50_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA51_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA51_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA52_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA52_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA53_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA53_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA54_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA54_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA55_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA55_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA56_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA56_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA57_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA57_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA58_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA58_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_DATA59_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_DATA59_S_R);
		IoReg_Write32(EPI_EPI_CMPI_PG_END_reg , 			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CMPI_PG_END_S_R);
		IoReg_Write32(EPI_EPI_LS_PORT_EN_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LS_PORT_EN_S_R);
		IoReg_Write32(EPI_EPI_FSM_SEL_reg , 				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_FSM_SEL_S_R);
		IoReg_Write32(EPI_EPI_DATA_PORT_EN_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_DATA_PORT_EN_S_R);
		IoReg_Write32(EPI_EPI_DEN_FALL_LOCA_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_DEN_FALL_LOCA_S_R);
		IoReg_Write32(EPI_EPI_LOCK_DEBOUNCE_CTL_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LOCK_DEBOUNCE_CTL_S_R);
		IoReg_Write32(EPI_EPI_DBG_REG_FLAG_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_DBG_REG_FLAG_S_R);
		IoReg_Write32(EPI_EPI_DBG_REG_CTL_reg , 			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_DBG_REG_CTL_S_R);
		IoReg_Write32(EPI_EPI_SOE_CONTROL_reg , 			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_CONTROL_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE0_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE0_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE0_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE0_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE0_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE0_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE0_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE0_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE1_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE1_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE1_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE1_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE1_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE1_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE1_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE1_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE2_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE2_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE2_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE2_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE2_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE2_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE2_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE2_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE3_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE3_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE3_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE3_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE3_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE3_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE3_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE3_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE4_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE4_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE4_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE4_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE4_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE4_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE4_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE4_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE5_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE5_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE5_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE5_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE5_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE5_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE5_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE5_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE6_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE6_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE6_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE6_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE6_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE6_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE6_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE6_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE7_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE7_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE7_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE7_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE7_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE7_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE7_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE7_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE8_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE8_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE8_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE8_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE8_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE8_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE8_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE8_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE9_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE9_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE9_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE9_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE9_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE9_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE9_reg , 		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE9_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE10_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE10_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE10_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE10_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE10_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE10_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE10_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE10_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE11_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE11_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE11_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE11_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE11_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE11_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE11_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE11_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE12_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE12_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE12_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE12_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE12_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE12_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE12_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE12_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE13_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE13_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE13_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE13_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE13_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE13_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE13_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE13_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE14_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE14_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE14_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE14_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE14_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE14_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE14_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE14_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE0_LANE15_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE0_LANE15_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE1_LANE15_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE1_LANE15_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE2_LANE15_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE2_LANE15_S_R);
		IoReg_Write32(EPI_EPI_SOE_LINE3_LANE15_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_SOE_LINE3_LANE15_S_R);
		IoReg_Write32(EPI_EPI_LANE_DST_MUX0_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX0_S_R);
		IoReg_Write32(EPI_EPI_LANE_DST_MUX1_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX1_S_R);
		IoReg_Write32(EPI_EPI_LANE_DST_MUX2_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX2_S_R);
		IoReg_Write32(EPI_EPI_LANE_DST_MUX3_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX3_S_R);
		IoReg_Write32(EPI_EPI_LANE_DST_MUX4_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX4_S_R);
		IoReg_Write32(EPI_EPI_LANE_DST_MUX5_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_MUX5_S_R);
		IoReg_Write32(EPI_EPI_LANE_CST_MUX0_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX0_S_R);
		IoReg_Write32(EPI_EPI_LANE_CST_MUX1_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX1_S_R);
		IoReg_Write32(EPI_EPI_LANE_CST_MUX2_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX2_S_R);
		IoReg_Write32(EPI_EPI_LANE_CST_MUX3_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX3_S_R);
		IoReg_Write32(EPI_EPI_LANE_CST_MUX4_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX4_S_R);
		IoReg_Write32(EPI_EPI_LANE_CST_MUX5_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_MUX5_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR1_MUX0_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX0_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR1_MUX1_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX1_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR1_MUX2_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX2_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR1_MUX3_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX3_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR1_MUX4_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX4_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR1_MUX5_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR1_MUX5_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR2_MUX0_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX0_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR2_MUX1_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX1_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR2_MUX2_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX2_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR2_MUX3_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX3_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR2_MUX4_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX4_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR2_MUX5_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR2_MUX5_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR3_MUX0_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX0_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR3_MUX1_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX1_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR3_MUX2_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX2_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR3_MUX3_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX3_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR3_MUX4_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX4_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR3_MUX5_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR3_MUX5_S_R);
		IoReg_Write32(EPI_EPI_TCON_MUX_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_TCON_MUX_S_R);
		IoReg_Write32(EPI_EPI_TCON_MUX1_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_TCON_MUX1_S_R);
		IoReg_Write32(EPI_EPI_TCON_MUX2_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_TCON_MUX2_S_R);
		IoReg_Write32(EPI_EPI_TCON_MUX3_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_TCON_MUX3_S_R);
		IoReg_Write32(EPI_EPI_DUMMY_REG_reg ,				 vbe_disp_panel_epi_suspend_resume.EPI_EPI_DUMMY_REG_S_R);
		IoReg_Write32(EPI_EPI_HW_DUMMY0_REG_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_HW_DUMMY0_REG_S_R);
		IoReg_Write32(EPI_EPI_HW_DUMMY1_REG_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_HW_DUMMY1_REG_S_R);
		IoReg_Write32(EPI_EPI_HW_DUMMY2_REG_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_HW_DUMMY2_REG_S_R);
		IoReg_Write32(EPI_EPI_HW_DUMMY3_REG_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_HW_DUMMY3_REG_S_R);
		IoReg_Write32(EPI_EPI_CEDS_POL_REG_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_CEDS_POL_REG_S_R);
		IoReg_Write32(EPI_EPI_LANE_DST_DATA_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_DST_DATA_S_R);
		IoReg_Write32(EPI_EPI_LANE_CST_DATA_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CST_DATA_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR4_DATA_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR4_DATA_S_R);
		IoReg_Write32(EPI_EPI_LANE_CTR5_DATA_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE_CTR5_DATA_S_R);
		IoReg_Write32(EPI_EPI_LANE0_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE0_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE1_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE1_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE2_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE2_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE3_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE3_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE4_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE4_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE5_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE5_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE6_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE6_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE7_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE7_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE8_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE8_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE9_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE9_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE10_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE10_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE11_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE11_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE12_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE12_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE13_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE13_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE14_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE14_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE15_CTR1_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE15_CTR1_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE0_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE0_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE1_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE1_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE2_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE2_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE3_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE3_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE4_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE4_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE5_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE5_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE6_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE6_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE7_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE7_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE8_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE8_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE9_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE9_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE10_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE10_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE11_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE11_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE12_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE12_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE13_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE13_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE14_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE14_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE15_CTR2_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE15_CTR2_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE0_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE0_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE1_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE1_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE2_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE2_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE3_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE3_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE4_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE4_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE5_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE5_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE6_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE6_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE7_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE7_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE8_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE8_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE9_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE9_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE10_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE10_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE11_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE11_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE12_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE12_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE13_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE13_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE14_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE14_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_LANE15_CTR3_ODATA_reg ,		 vbe_disp_panel_epi_suspend_resume.EPI_EPI_LANE15_CTR3_ODATA_S_R);
		IoReg_Write32(EPI_EPI_GPLUT_CONTROL_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_GPLUT_CONTROL_S_R);
		IoReg_Write32(EPI_EPI_GPLUT_LINE_01_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_GPLUT_LINE_01_S_R);
		IoReg_Write32(EPI_EPI_GPLUT_LINE_23_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_GPLUT_LINE_23_S_R);
		IoReg_Write32(EPI_EPI_GPLUT_LINE_45_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_GPLUT_LINE_45_S_R);
		IoReg_Write32(EPI_EPI_GPLUT_LINE_67_reg ,			 vbe_disp_panel_epi_suspend_resume.EPI_EPI_GPLUT_LINE_67_S_R);

		IoReg_Write32(TCON_TCON_CTRL_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON_CTRL_S_R);
		IoReg_Write32(TCON_TCON_IP_EN_reg,                  (vbe_disp_panel_tcon_suspend_resume.TCON_TCON_IP_EN_S_R)&(~_BIT0));
		IoReg_Write32(TCON_TCON0_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_HSE_S_R);
		IoReg_Write32(TCON_TCON0_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_VSE_S_R);
		IoReg_Write32(TCON_TCON0_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_Ctrl_S_R);
		IoReg_Write32(TCON_TCON0_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON0_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON0_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON1_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_HSE_S_R);
		IoReg_Write32(TCON_TCON1_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_VSE_S_R);
		IoReg_Write32(TCON_TCON1_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_Ctrl_S_R);
		IoReg_Write32(TCON_TCON1_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON1_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON1_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON2_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_HSE_S_R);
		IoReg_Write32(TCON_TCON2_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_VSE_S_R);
		IoReg_Write32(TCON_TCON2_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_Ctrl_S_R);
		IoReg_Write32(TCON_TCON2_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON2_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON2_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON3_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_HSE_S_R);
		IoReg_Write32(TCON_TCON3_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_VSE_S_R);
		IoReg_Write32(TCON_TCON3_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_Ctrl_S_R);
		IoReg_Write32(TCON_TCON3_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON3_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON3_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON4_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_HSE_S_R);
		IoReg_Write32(TCON_TCON4_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_VSE_S_R);
		IoReg_Write32(TCON_TCON4_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_Ctrl_S_R);
		IoReg_Write32(TCON_TCON4_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON4_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON4_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON5_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_HSE_S_R);
		IoReg_Write32(TCON_TCON5_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_VSE_S_R);
		IoReg_Write32(TCON_TCON5_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_Ctrl_S_R);
		IoReg_Write32(TCON_TCON5_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON5_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON5_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON6_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_HSE_S_R);
		IoReg_Write32(TCON_TCON6_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_VSE_S_R);
		IoReg_Write32(TCON_TCON6_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_Ctrl_S_R);
		IoReg_Write32(TCON_TCON6_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON6_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON6_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON7_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_HSE_S_R);
		IoReg_Write32(TCON_TCON7_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_VSE_S_R);
		IoReg_Write32(TCON_TCON7_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_Ctrl_S_R);
		IoReg_Write32(TCON_TCON7_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON7_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON7_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON8_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_HSE_S_R);
		IoReg_Write32(TCON_TCON8_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_VSE_S_R);
		IoReg_Write32(TCON_TCON8_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_Ctrl_S_R);
		IoReg_Write32(TCON_TCON8_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON8_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON8_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON9_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_HSE_S_R);
		IoReg_Write32(TCON_TCON9_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_VSE_S_R);
		IoReg_Write32(TCON_TCON9_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_Ctrl_S_R);
		IoReg_Write32(TCON_TCON9_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON9_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON9_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON10_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_HSE_S_R);
		IoReg_Write32(TCON_TCON10_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_VSE_S_R);
		IoReg_Write32(TCON_TCON10_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_Ctrl_S_R);
		IoReg_Write32(TCON_TCON10_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON10_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON10_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON11_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_HSE_S_R);
		IoReg_Write32(TCON_TCON11_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_VSE_S_R);
		IoReg_Write32(TCON_TCON11_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_Ctrl_S_R);
		IoReg_Write32(TCON_TCON11_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON11_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON11_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON12_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_HSE_S_R);
		IoReg_Write32(TCON_TCON12_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_VSE_S_R);
		IoReg_Write32(TCON_TCON12_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_Ctrl_S_R);
		IoReg_Write32(TCON_TCON12_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON12_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON12_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON13_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_HSE_S_R);
		IoReg_Write32(TCON_TCON13_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_VSE_S_R);
		IoReg_Write32(TCON_TCON13_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_Ctrl_S_R);
		IoReg_Write32(TCON_TCON13_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON13_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON13_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON14_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_HSE_S_R);
		IoReg_Write32(TCON_TCON14_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_VSE_S_R);
		IoReg_Write32(TCON_TCON14_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_Ctrl_S_R);
		IoReg_Write32(TCON_TCON14_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON14_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON14_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON15_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_HSE_S_R);
		IoReg_Write32(TCON_TCON15_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_VSE_S_R);
		IoReg_Write32(TCON_TCON15_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_Ctrl_S_R);
		IoReg_Write32(TCON_TCON15_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON15_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON15_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON16_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_HSE_S_R);
		IoReg_Write32(TCON_TCON16_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_VSE_S_R);
		IoReg_Write32(TCON_TCON16_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_Ctrl_S_R);
		IoReg_Write32(TCON_TCON16_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON16_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON16_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON17_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_HSE_S_R);
		IoReg_Write32(TCON_TCON17_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_VSE_S_R);
		IoReg_Write32(TCON_TCON17_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_Ctrl_S_R);
		IoReg_Write32(TCON_TCON17_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON17_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON17_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON18_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_HSE_S_R);
		IoReg_Write32(TCON_TCON18_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_VSE_S_R);
		IoReg_Write32(TCON_TCON18_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_Ctrl_S_R);
		IoReg_Write32(TCON_TCON18_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON18_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON18_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON19_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_HSE_S_R);
		IoReg_Write32(TCON_TCON19_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_VSE_S_R);
		IoReg_Write32(TCON_TCON19_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_Ctrl_S_R);
		IoReg_Write32(TCON_TCON19_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON19_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON19_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON20_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_HSE_S_R);
		IoReg_Write32(TCON_TCON20_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_VSE_S_R);
		IoReg_Write32(TCON_TCON20_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_Ctrl_S_R);
		IoReg_Write32(TCON_TCON20_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON20_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON20_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON21_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_HSE_S_R);
		IoReg_Write32(TCON_TCON21_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_VSE_S_R);
		IoReg_Write32(TCON_TCON21_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_Ctrl_S_R);
		IoReg_Write32(TCON_TCON21_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON21_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON21_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON22_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_HSE_S_R);
		IoReg_Write32(TCON_TCON22_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_VSE_S_R);
		IoReg_Write32(TCON_TCON22_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_Ctrl_S_R);
		IoReg_Write32(TCON_TCON22_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON22_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON22_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON23_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_HSE_S_R);
		IoReg_Write32(TCON_TCON23_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_VSE_S_R);
		IoReg_Write32(TCON_TCON23_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_Ctrl_S_R);
		IoReg_Write32(TCON_TCON23_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON23_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON23_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON24_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_HSE_S_R);
		IoReg_Write32(TCON_TCON24_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_VSE_S_R);
		IoReg_Write32(TCON_TCON24_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_Ctrl_S_R);
		IoReg_Write32(TCON_TCON24_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON24_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON24_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON25_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_HSE_S_R);
		IoReg_Write32(TCON_TCON25_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_VSE_S_R);
		IoReg_Write32(TCON_TCON25_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_Ctrl_S_R);
		IoReg_Write32(TCON_TCON25_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON25_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON25_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON26_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_HSE_S_R);
		IoReg_Write32(TCON_TCON26_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_VSE_S_R);
		IoReg_Write32(TCON_TCON26_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_Ctrl_S_R);
		IoReg_Write32(TCON_TCON26_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON26_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON26_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON27_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_HSE_S_R);
		IoReg_Write32(TCON_TCON27_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_VSE_S_R);
		IoReg_Write32(TCON_TCON27_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_Ctrl_S_R);
		IoReg_Write32(TCON_TCON27_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON27_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON27_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON_PWM0_CONTROL0_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL0_S_R);
		IoReg_Write32(TCON_TCON_PWM0_CONTROL1_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL1_S_R);
		IoReg_Write32(TCON_TCON_PWM0_CONTROL2_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL2_S_R);
		IoReg_Write32(TCON_TCON_PWM1_CONTROL0_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL0_S_R);
		IoReg_Write32(TCON_TCON_PWM1_CONTROL1_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL1_S_R);
		IoReg_Write32(TCON_TCON_PWM1_CONTROL2_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL2_S_R);
		IoReg_Write32(TCON_TCON_PWM_DB_SEL_reg, 	  vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM_DB_SEL_S_R);
		vbe_disp_panel_rgbw_resume();

	}
	else if(Get_DISPLAY_PANEL_TYPE() == P_ISP)
	{
		IoReg_Write32(ISP_ISP_EN_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_EN_S_R);
		IoReg_Write32(ISP_ISP_TCON_SEL_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_TCON_SEL_S_R);
		IoReg_Write32(ISP_ISP_TD_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_TD_S_R);
		IoReg_Write32(ISP_ISP_VD_SD_SET_FRM_reg,	vbe_disp_panel_isp_suspend_resume.ISP_ISP_VD_SD_SET_FRM_S_R);
		IoReg_Write32(ISP_ISP_TBK_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_TBK_S_R);
		IoReg_Write32(ISP_ISP_BAC_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_BAC_S_R);
		IoReg_Write32(ISP_ISP_EOL_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_EOL_S_R);
		IoReg_Write32(ISP_ISP_BKPOL_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_BKPOL_S_R);
		IoReg_Write32(ISP_ISP_POLP_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_POLP_S_R);
		IoReg_Write32(ISP_ISP_POLN_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_POLN_S_R);
		IoReg_Write32(ISP_ISP_SETTING00_00_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING00_00_S_R);
		IoReg_Write32(ISP_ISP_SETTING00_04_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING00_04_S_R);
		IoReg_Write32(ISP_ISP_SETTING00_08_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING00_08_S_R);
		IoReg_Write32(ISP_ISP_SETTING01_00_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING01_00_S_R);
		IoReg_Write32(ISP_ISP_SETTING01_04_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING01_04_S_R);
		IoReg_Write32(ISP_ISP_SETTING01_08_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING01_08_S_R);
		IoReg_Write32(ISP_ISP_SETTING02_00_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING02_00_S_R);
		IoReg_Write32(ISP_ISP_SETTING02_04_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING02_04_S_R);
		IoReg_Write32(ISP_ISP_SETTING02_08_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING02_08_S_R);
		IoReg_Write32(ISP_ISP_SETTING03_00_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING03_00_S_R);
		IoReg_Write32(ISP_ISP_SETTING03_04_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING03_04_S_R);
		IoReg_Write32(ISP_ISP_SETTING03_08_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING03_08_S_R);
		IoReg_Write32(ISP_ISP_SETTING04_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING04_S_R);
		IoReg_Write32(ISP_ISP_SETTING08_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING08_S_R);
		IoReg_Write32(ISP_ISP_SETTING12_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING12_S_R);
		IoReg_Write32(ISP_ISP_SETTING16_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING16_S_R);
		IoReg_Write32(ISP_ISP_SETTING20_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING20_S_R);
		IoReg_Write32(ISP_ISP_SETTING24_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING24_S_R);
		IoReg_Write32(ISP_ISP_SETTING28_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING28_S_R);
		IoReg_Write32(ISP_ISP_SETTING32_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING32_S_R);
		IoReg_Write32(ISP_ISP_SETTING36_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING36_S_R);
		IoReg_Write32(ISP_ISP_SETTING40_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING40_S_R);
		IoReg_Write32(ISP_ISP_SETTING44_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING44_S_R);
		IoReg_Write32(ISP_ISP_SETTING48_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING48_S_R);
		IoReg_Write32(ISP_ISP_SETTING52_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING52_S_R);
		IoReg_Write32(ISP_ISP_SETTING56_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_SETTING56_S_R);
#if 0//fix-me:mac6p bringup
		IoReg_Write32(ISP_ISP_CHPORT00_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_CHPORT00_S_R);
		IoReg_Write32(ISP_ISP_CHPORT08_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_CHPORT08_S_R);
#endif
		IoReg_Write32(ISP_ISP_Dummy0_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_Dummy0_S_R);
		IoReg_Write32(ISP_ISP_Dummy1_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_Dummy1_S_R);
		IoReg_Write32(ISP_ISP_CRC_CTRL_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_CRC_CTRL_S_R);
		IoReg_Write32(ISP_ISP_CRC_RESULT_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_CRC_RESULT_S_R);
		IoReg_Write32(ISP_ISP_CRC_GOLDEN_reg, vbe_disp_panel_isp_suspend_resume.ISP_ISP_CRC_GOLDEN_S_R);

		IoReg_Write32(TCON_TCON_CTRL_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON_CTRL_S_R);
		IoReg_Write32(TCON_TCON_IP_EN_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON_IP_EN_S_R);
		IoReg_Write32(TCON_TCON0_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_HSE_S_R);
		IoReg_Write32(TCON_TCON0_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_VSE_S_R);
		IoReg_Write32(TCON_TCON0_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_Ctrl_S_R);
		IoReg_Write32(TCON_TCON0_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON0_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON0_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON0_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON1_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_HSE_S_R);
		IoReg_Write32(TCON_TCON1_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_VSE_S_R);
		IoReg_Write32(TCON_TCON1_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_Ctrl_S_R);
		IoReg_Write32(TCON_TCON1_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON1_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON1_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON1_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON2_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_HSE_S_R);
		IoReg_Write32(TCON_TCON2_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_VSE_S_R);
		IoReg_Write32(TCON_TCON2_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_Ctrl_S_R);
		IoReg_Write32(TCON_TCON2_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON2_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON2_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON2_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON3_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_HSE_S_R);
		IoReg_Write32(TCON_TCON3_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_VSE_S_R);
		IoReg_Write32(TCON_TCON3_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_Ctrl_S_R);
		IoReg_Write32(TCON_TCON3_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON3_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON3_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON3_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON4_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_HSE_S_R);
		IoReg_Write32(TCON_TCON4_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_VSE_S_R);
		IoReg_Write32(TCON_TCON4_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_Ctrl_S_R);
		IoReg_Write32(TCON_TCON4_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON4_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON4_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON4_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON5_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_HSE_S_R);
		IoReg_Write32(TCON_TCON5_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_VSE_S_R);
		IoReg_Write32(TCON_TCON5_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_Ctrl_S_R);
		IoReg_Write32(TCON_TCON5_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON5_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON5_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON5_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON6_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_HSE_S_R);
		IoReg_Write32(TCON_TCON6_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_VSE_S_R);
		IoReg_Write32(TCON_TCON6_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_Ctrl_S_R);
		IoReg_Write32(TCON_TCON6_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON6_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON6_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON6_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON7_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_HSE_S_R);
		IoReg_Write32(TCON_TCON7_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_VSE_S_R);
		IoReg_Write32(TCON_TCON7_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_Ctrl_S_R);
		IoReg_Write32(TCON_TCON7_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON7_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON7_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON7_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON8_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_HSE_S_R);
		IoReg_Write32(TCON_TCON8_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_VSE_S_R);
		IoReg_Write32(TCON_TCON8_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_Ctrl_S_R);
		IoReg_Write32(TCON_TCON8_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON8_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON8_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON8_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON9_HSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_HSE_S_R);
		IoReg_Write32(TCON_TCON9_VSE_reg,                   vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_VSE_S_R);
		IoReg_Write32(TCON_TCON9_Ctrl_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_Ctrl_S_R);
		IoReg_Write32(TCON_TCON9_ACROSS_LINE_CONTROL3_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON9_ACROSS_FRAME_CONTROL_reg,  vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON9_FRAME_HL_CONTROL_reg,      vbe_disp_panel_tcon_suspend_resume.TCON_TCON9_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON10_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_HSE_S_R);
		IoReg_Write32(TCON_TCON10_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_VSE_S_R);
		IoReg_Write32(TCON_TCON10_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_Ctrl_S_R);
		IoReg_Write32(TCON_TCON10_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON10_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON10_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON10_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON11_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_HSE_S_R);
		IoReg_Write32(TCON_TCON11_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_VSE_S_R);
		IoReg_Write32(TCON_TCON11_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_Ctrl_S_R);
		IoReg_Write32(TCON_TCON11_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON11_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON11_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON11_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON12_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_HSE_S_R);
		IoReg_Write32(TCON_TCON12_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_VSE_S_R);
		IoReg_Write32(TCON_TCON12_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_Ctrl_S_R);
		IoReg_Write32(TCON_TCON12_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON12_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON12_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON12_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON13_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_HSE_S_R);
		IoReg_Write32(TCON_TCON13_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_VSE_S_R);
		IoReg_Write32(TCON_TCON13_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_Ctrl_S_R);
		IoReg_Write32(TCON_TCON13_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON13_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON13_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON13_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON14_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_HSE_S_R);
		IoReg_Write32(TCON_TCON14_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_VSE_S_R);
		IoReg_Write32(TCON_TCON14_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_Ctrl_S_R);
		IoReg_Write32(TCON_TCON14_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON14_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON14_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON14_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON15_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_HSE_S_R);
		IoReg_Write32(TCON_TCON15_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_VSE_S_R);
		IoReg_Write32(TCON_TCON15_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_Ctrl_S_R);
		IoReg_Write32(TCON_TCON15_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON15_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON15_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON15_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON16_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_HSE_S_R);
		IoReg_Write32(TCON_TCON16_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_VSE_S_R);
		IoReg_Write32(TCON_TCON16_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_Ctrl_S_R);
		IoReg_Write32(TCON_TCON16_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON16_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON16_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON16_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON17_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_HSE_S_R);
		IoReg_Write32(TCON_TCON17_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_VSE_S_R);
		IoReg_Write32(TCON_TCON17_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_Ctrl_S_R);
		IoReg_Write32(TCON_TCON17_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON17_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON17_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON17_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON18_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_HSE_S_R);
		IoReg_Write32(TCON_TCON18_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_VSE_S_R);
		IoReg_Write32(TCON_TCON18_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_Ctrl_S_R);
		IoReg_Write32(TCON_TCON18_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON18_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON18_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON18_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON19_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_HSE_S_R);
		IoReg_Write32(TCON_TCON19_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_VSE_S_R);
		IoReg_Write32(TCON_TCON19_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_Ctrl_S_R);
		IoReg_Write32(TCON_TCON19_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON19_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON19_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON19_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON20_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_HSE_S_R);
		IoReg_Write32(TCON_TCON20_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_VSE_S_R);
		IoReg_Write32(TCON_TCON20_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_Ctrl_S_R);
		IoReg_Write32(TCON_TCON20_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON20_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON20_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON20_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON21_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_HSE_S_R);
		IoReg_Write32(TCON_TCON21_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_VSE_S_R);
		IoReg_Write32(TCON_TCON21_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_Ctrl_S_R);
		IoReg_Write32(TCON_TCON21_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON21_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON21_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON21_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON22_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_HSE_S_R);
		IoReg_Write32(TCON_TCON22_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_VSE_S_R);
		IoReg_Write32(TCON_TCON22_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_Ctrl_S_R);
		IoReg_Write32(TCON_TCON22_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON22_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON22_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON22_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON23_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_HSE_S_R);
		IoReg_Write32(TCON_TCON23_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_VSE_S_R);
		IoReg_Write32(TCON_TCON23_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_Ctrl_S_R);
		IoReg_Write32(TCON_TCON23_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON23_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON23_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON23_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON24_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_HSE_S_R);
		IoReg_Write32(TCON_TCON24_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_VSE_S_R);
		IoReg_Write32(TCON_TCON24_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_Ctrl_S_R);
		IoReg_Write32(TCON_TCON24_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON24_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON24_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON24_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON25_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_HSE_S_R);
		IoReg_Write32(TCON_TCON25_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_VSE_S_R);
		IoReg_Write32(TCON_TCON25_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_Ctrl_S_R);
		IoReg_Write32(TCON_TCON25_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON25_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON25_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON25_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON26_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_HSE_S_R);
		IoReg_Write32(TCON_TCON26_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_VSE_S_R);
		IoReg_Write32(TCON_TCON26_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_Ctrl_S_R);
		IoReg_Write32(TCON_TCON26_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON26_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON26_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON26_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON27_HSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_HSE_S_R);
		IoReg_Write32(TCON_TCON27_VSE_reg,                  vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_VSE_S_R);
		IoReg_Write32(TCON_TCON27_Ctrl_reg,                 vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_Ctrl_S_R);
		IoReg_Write32(TCON_TCON27_ACROSS_LINE_CONTROL3_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_ACROSS_LINE_CONTROL3_S_R);
		IoReg_Write32(TCON_TCON27_ACROSS_FRAME_CONTROL_reg, vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_ACROSS_FRAME_CONTROL_S_R);
		IoReg_Write32(TCON_TCON27_FRAME_HL_CONTROL_reg,     vbe_disp_panel_tcon_suspend_resume.TCON_TCON27_FRAME_HL_CONTROL_S_R);
		IoReg_Write32(TCON_TCON_PWM0_CONTROL0_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL0_S_R);
		IoReg_Write32(TCON_TCON_PWM0_CONTROL1_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL1_S_R);
		IoReg_Write32(TCON_TCON_PWM0_CONTROL2_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM0_CONTROL2_S_R);
		IoReg_Write32(TCON_TCON_PWM1_CONTROL0_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL0_S_R);
		IoReg_Write32(TCON_TCON_PWM1_CONTROL1_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL1_S_R);
		IoReg_Write32(TCON_TCON_PWM1_CONTROL2_reg,	vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM1_CONTROL2_S_R);
		IoReg_Write32(TCON_TCON_PWM_DB_SEL_reg, 	  vbe_disp_panel_tcon_suspend_resume.TCON_TCON_PWM_DB_SEL_S_R);

		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s] isp and tcon resume finished\n",__FUNCTION__);
	}

#if 0
	if(vbe_disp_suspend_resume.SFG_DUMMY_S_R==0x20000000){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[vbe_disp_panel_resume] vby1 panel enable vby clock after vby1 done\n");
		msleep(1);
		IoReg_Write32(SFG_SFG_DUMMY_reg, vbe_disp_suspend_resume.SFG_DUMMY_S_R);
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[vbe_disp_panel_resume] SFG_SFG_DUMMY_reg=%x\n", IoReg_Read32(SFG_SFG_DUMMY_reg));
	}
#endif
}

void vbe_disp_first_resume(void)
{
	//frank@1114 add below flow to set up Ddomain related register
	sys_reg_sys_dispclksel_RBUS sys_dispclksel_reg;
	sys_dispclksel_reg.regValue = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
#if 0 //FIXME: remove CLKEN_DISP_SFG (0x18000208[4]).
	sys_dispclksel_reg.clken_disp_sfg = 1;
#endif
	sys_dispclksel_reg.clken_disp_stage1 = 1;
	IoReg_Write32(SYS_REG_SYS_DISPCLKSEL_reg, sys_dispclksel_reg.regValue);

	IoReg_SetBits(PPOVERLAY_Main_Display_Control_RSV_reg, _BIT1);//Let main default value enable force bg
	IoReg_SetBits(PPOVERLAY_MP_Layout_Force_to_Background_reg, _BIT1);//Let sub default value enable force bg

	if(IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg) & _BIT24) {
		return;
	}

	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_27_reg, 0x80000000);
#if 0  //FIXME: need to chedk lane power off setting @qing_liu
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPI_PHY_CTRL_1_27_reg, 0x80000000);
#endif

	/*DTG*/
	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL1_reg, (vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL1_S_R&(~_BIT24)));
#if 0	//Eric@20190626 mark for k6hp resume video abnormal
	if(Get_DISPLAY_REFRESH_RATE()==120){
		vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL2_S_R = vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL2_S_R|_BIT29;
	}
#endif
	IoReg_Write32(0xb801a610, vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL2_S_R); // dummy register for debug
	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL2_S_R);
	IoReg_Write32(PPOVERLAY_DV_Length_reg, vbe_disp_suspend_resume.PPOVERLAY_DV_LENGTH_S_R);
	IoReg_Write32(PPOVERLAY_DV_total_reg, vbe_disp_suspend_resume.PPOVERLAY_DV_TOTAL_S_R);
	//IoReg_Write32(PPOVERLAY_DTG_pending_status_reg, vbe_disp_suspend_resume.PPOVERLAY_DTG_PENDING_STATUS_S_R);
	IoReg_Write32(PPOVERLAY_Display_Background_Color_reg, vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_BACKGROUND_COLOR_S_R);
	IoReg_Write32(PPOVERLAY_DH_Width_reg, vbe_disp_suspend_resume.PPOVERLAY_DH_WIDTH_S_R);
	IoReg_Write32(PPOVERLAY_DTG_ie_reg, vbe_disp_suspend_resume.PPOVERLAY_DTG_IE_S_R);
	IoReg_Write32(PPOVERLAY_DTG_ie_2_reg, vbe_disp_suspend_resume.PPOVERLAY_DTG_IE_2_S_R);
	IoReg_Write32(PPOVERLAY_DH_Total_Last_Line_Length_reg, vbe_disp_suspend_resume.PPOVERLAY_DH_TOTAL_LAST_LINE_LENGTH_S_R);
	IoReg_Write32(PPOVERLAY_DH_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_DH_DEN_START_END_S_R);
	IoReg_Write32(PPOVERLAY_DV_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_DV_DEN_START_END_S_R);
	IoReg_Write32(SYS_REG_SYS_DISPCLKSEL_reg, vbe_disp_suspend_resume.SYS_DISPCLKSEL_S_R);
	IoReg_Write32(PPOVERLAY_FS_IV_DV_Fine_Tuning2_reg, vbe_disp_suspend_resume.PPOVERLAY_FS_IV_DV_FINE_TUNING2_S_R);
	IoReg_Write32(PPOVERLAY_FS_IV_DV_Fine_Tuning5_reg, vbe_disp_suspend_resume.PPOVERLAY_FS_IV_DV_FINE_TUNING5_S_R);
	IoReg_Write32(PPOVERLAY_FS_IV_DV_Fine_Tuning1_reg, vbe_disp_suspend_resume.PPOVERLAY_FS_IV_DV_FINE_TUNING1_S_R);
	IoReg_Write32(PPOVERLAY_uzudtg_DV_TOTAL_reg , vbe_disp_suspend_resume.PPOVERLAY_uzudtg_DV_TOTAL_S_R  );
	IoReg_Write32(PPOVERLAY_uzudtg_DH_TOTAL_reg , vbe_disp_suspend_resume.PPOVERLAY_uzudtg_DH_TOTAL_S_R  );
	IoReg_Write32(PPOVERLAY_DH_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_DH_DEN_Start_End_S_R );
	IoReg_Write32(PPOVERLAY_DV_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_DV_DEN_Start_End_S_R );
	IoReg_Write32(PPOVERLAY_UZUDTG_COUNTROL_reg , vbe_disp_suspend_resume.PPOVERLAY_UZUDTG_COUNTROL_S_R  );
	IoReg_Write32(PPOVERLAY_memcdtg_DV_TOTAL_reg, vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DV_TOTAL_S_R );
	IoReg_Write32(PPOVERLAY_memcdtg_DH_TOTAL_reg, vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DH_TOTAL_S_R );
	IoReg_Write32(PPOVERLAY_memcdtg_DH_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DH_DEN_Start_End_S_R);
	IoReg_Write32(PPOVERLAY_memcdtg_DV_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DV_DEN_Start_End_S_R);
	IoReg_Write32(PPOVERLAY_MEMCDTG_CONTROL_reg, vbe_disp_suspend_resume.PPOVERLAY_MEMCDTG_CONTROL_S_R  );
	//for OSD split
	if((Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD2K1K_to_H5X_SPLIT) ||(Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD1K2K_to_H5X_SPLIT)){
		IoReg_Write32(PPOVERLAY_osddtg_DV_TOTAL_reg, vbe_disp_suspend_resume.PPOVERLAY_osddtg_DV_TOTAL_S_R);
		IoReg_Write32(PPOVERLAY_osddtg_DH_TOTAL_reg, vbe_disp_suspend_resume.PPOVERLAY_osddtg_DH_TOTAL_S_R);
		IoReg_Write32(PPOVERLAY_osddtg_DV_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_osddtg_DV_DEN_Start_End_S_R);
		IoReg_Write32(PPOVERLAY_osddtg_DH_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_osddtg_DH_DEN_Start_End_S_R);
		IoReg_Write32(PPOVERLAY_OSDDTG_CONTROL_reg, vbe_disp_suspend_resume.PPOVERLAY_OSDDTG_CONTROL_S_R);
		IoReg_Write32(PPOVERLAY_OSDDTG_CONTROL2_reg, vbe_disp_suspend_resume.PPOVERLAY_OSDDTG_CONTROL2_S_R);
		IoReg_Write32(PPOVERLAY_osddtg_fractional_fsync_reg, vbe_disp_suspend_resume.PPOVERLAY_osddtg_fractional_fsync_S_R);
		IoReg_Write32(PPOVERLAY_osd_dtg_dh_width_reg, vbe_disp_suspend_resume.PPOVERLAY_osd_dtg_dh_width_S_R);
		IoReg_Write32(PPOVERLAY_osd_dtg_dv_length_reg, vbe_disp_suspend_resume.PPOVERLAY_osd_dtg_dv_length_S_R);
	}
#ifdef CONFIG_MEMC_BYPASS
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg  , vbe_disp_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_S_R);
#else
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg  , vbe_disp_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_S_R|_BIT12);
#endif
	IoReg_Write32(PPOVERLAY_uzudtg_fractional_fsync_reg,vbe_disp_suspend_resume.PPOVERLAY_UZUDTG_FRACTIONAL_FSYNC_S_R);
	IoReg_Write32(PPOVERLAY_DTG_M_Remove_input_vsync_reg,vbe_disp_suspend_resume.PPOVERLAY_DTG_M_REMOVE_INPUT_VSYNC_S_R);
    first_disp_resume = TRUE;
}

/*VBE disp suspend & resume*/
void vbe_disp_suspend(void)
{
#if defined(CONFIG_RTK_KDRV_GDMA) && !defined(CONFIG_CUSTOMER_TV006)
	gdma_suspend_by_vbe();
#endif
    Panel_SetMCUMode(0);
    mdelay(30);
	Panel_SetBackLightMode(0);

	/*DTG*/
	vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL1_S_R = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL2_S_R = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DV_LENGTH_S_R = IoReg_Read32(PPOVERLAY_DV_Length_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DV_TOTAL_S_R = IoReg_Read32(PPOVERLAY_DV_total_reg);
	//vbe_disp_suspend_resume.PPOVERLAY_DTG_PENDING_STATUS_S_R = IoReg_Read32(PPOVERLAY_DTG_pending_status_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_BACKGROUND_COLOR_S_R = IoReg_Read32(PPOVERLAY_Display_Background_Color_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DH_WIDTH_S_R = IoReg_Read32(PPOVERLAY_DH_Width_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DTG_IE_S_R = IoReg_Read32(PPOVERLAY_DTG_ie_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DTG_IE_2_S_R = IoReg_Read32(PPOVERLAY_DTG_ie_2_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DH_TOTAL_LAST_LINE_LENGTH_S_R = IoReg_Read32(PPOVERLAY_DH_Total_Last_Line_Length_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DH_DEN_START_END_S_R = IoReg_Read32(PPOVERLAY_DH_DEN_Start_End_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DV_DEN_START_END_S_R = IoReg_Read32(PPOVERLAY_DV_DEN_Start_End_reg);
	vbe_disp_suspend_resume.SYS_DISPCLKSEL_S_R = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
	vbe_disp_suspend_resume.PPOVERLAY_FS_IV_DV_FINE_TUNING2_S_R = IoReg_Read32(PPOVERLAY_FS_IV_DV_Fine_Tuning2_reg);
	vbe_disp_suspend_resume.PPOVERLAY_FS_IV_DV_FINE_TUNING5_S_R = IoReg_Read32(PPOVERLAY_FS_IV_DV_Fine_Tuning5_reg);
	vbe_disp_suspend_resume.PPOVERLAY_FS_IV_DV_FINE_TUNING1_S_R = IoReg_Read32(PPOVERLAY_FS_IV_DV_Fine_Tuning1_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DOUBLE_BUFFER_CTRL_S_R = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	vbe_disp_suspend_resume.PPOVERLAY_uzudtg_DV_TOTAL_S_R  = IoReg_Read32(PPOVERLAY_uzudtg_DV_TOTAL_reg);
	vbe_disp_suspend_resume.PPOVERLAY_uzudtg_DH_TOTAL_S_R  = IoReg_Read32(PPOVERLAY_uzudtg_DH_TOTAL_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DH_DEN_Start_End_S_R = IoReg_Read32(PPOVERLAY_DH_DEN_Start_End_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DV_DEN_Start_End_S_R = IoReg_Read32(PPOVERLAY_DV_DEN_Start_End_reg);
	vbe_disp_suspend_resume.PPOVERLAY_UZUDTG_COUNTROL_S_R  = IoReg_Read32(PPOVERLAY_UZUDTG_COUNTROL_reg);
	vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DV_TOTAL_S_R = IoReg_Read32(PPOVERLAY_memcdtg_DV_TOTAL_reg);
	vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DH_TOTAL_S_R = IoReg_Read32(PPOVERLAY_memcdtg_DH_TOTAL_reg);
	vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DH_DEN_Start_End_S_R = IoReg_Read32(PPOVERLAY_memcdtg_DH_DEN_Start_End_reg);
	vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DV_DEN_Start_End_S_R = IoReg_Read32(PPOVERLAY_memcdtg_DV_DEN_Start_End_reg);
	vbe_disp_suspend_resume.PPOVERLAY_MEMCDTG_CONTROL_S_R  = IoReg_Read32(PPOVERLAY_MEMCDTG_CONTROL_reg);
	vbe_disp_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_S_R    = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	vbe_disp_suspend_resume.PPOVERLAY_UZUDTG_FRACTIONAL_FSYNC_S_R = IoReg_Read32(PPOVERLAY_uzudtg_fractional_fsync_reg);
	vbe_disp_suspend_resume.PPOVERLAY_DTG_M_REMOVE_INPUT_VSYNC_S_R = IoReg_Read32(PPOVERLAY_DTG_M_Remove_input_vsync_reg);
	// for OSD split
	if((Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD2K1K_to_H5X_SPLIT) ||(Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD1K2K_to_H5X_SPLIT)){
		vbe_disp_suspend_resume.PPOVERLAY_osddtg_DV_TOTAL_S_R = IoReg_Read32(PPOVERLAY_osddtg_DV_TOTAL_reg);
		vbe_disp_suspend_resume.PPOVERLAY_osddtg_DH_TOTAL_S_R = IoReg_Read32(PPOVERLAY_osddtg_DH_TOTAL_reg);
		vbe_disp_suspend_resume.PPOVERLAY_osddtg_DV_DEN_Start_End_S_R = IoReg_Read32(PPOVERLAY_osddtg_DV_DEN_Start_End_reg);
		vbe_disp_suspend_resume.PPOVERLAY_osddtg_DH_DEN_Start_End_S_R = IoReg_Read32(PPOVERLAY_osddtg_DH_DEN_Start_End_reg);
		vbe_disp_suspend_resume.PPOVERLAY_OSDDTG_CONTROL_S_R = IoReg_Read32(PPOVERLAY_OSDDTG_CONTROL_reg);
		vbe_disp_suspend_resume.PPOVERLAY_OSDDTG_CONTROL2_S_R = IoReg_Read32(PPOVERLAY_OSDDTG_CONTROL2_reg);
		vbe_disp_suspend_resume.PPOVERLAY_osddtg_fractional_fsync_S_R = IoReg_Read32(PPOVERLAY_osddtg_fractional_fsync_reg);
		vbe_disp_suspend_resume.PPOVERLAY_osd_dtg_dh_width_S_R = IoReg_Read32(PPOVERLAY_osd_dtg_dh_width_reg);
		vbe_disp_suspend_resume.PPOVERLAY_osd_dtg_dv_length_S_R = IoReg_Read32(PPOVERLAY_osd_dtg_dv_length_reg);
	}

	/*GoldenVsyn & twoStepUzu delay*/
	vbe_disp_suspend_resume.PPOVERLAY_MEMCDTG_CONTROL2_S_R = IoReg_Read32(PPOVERLAY_MEMCDTG_CONTROL2_reg);
	vbe_disp_suspend_resume.PPOVERLAY_MEMCDTG_CONTROL3_S_R = IoReg_Read32(PPOVERLAY_MEMCDTG_CONTROL3_reg);
	vbe_disp_suspend_resume.PPOVERLAY_uzudtg_control1_S_R	= IoReg_Read32(PPOVERLAY_uzudtg_control1_reg);
	vbe_disp_suspend_resume.PPOVERLAY_uzudtg_control2_S_R	= IoReg_Read32(PPOVERLAY_uzudtg_control2_reg);

	 /*SFG*/
	vbe_disp_suspend_resume.SFG_SFG_FORCE_BG_AT_DIF_S_R = IoReg_Read32(SFG_SFG_FORCE_BG_AT_DIF_reg);
	vbe_disp_suspend_resume.SFG_SFG_CTRL_0_S_R = IoReg_Read32(SFG_SFG_CTRL_0_reg);
 	 /*Clk*/
	 vbe_disp_suspend_resume.CRT_DCLK_GATE_SEL0_S_R = IoReg_Read32(SYS_REG_SYS_DCLK_GATE_SEL0_reg);
	vbe_disp_suspend_resume.CRT_DCLK_GATE_SEL1_S_R = IoReg_Read32(SYS_REG_SYS_DCLK_GATE_SEL1_reg);
  	vbe_disp_suspend_resume.CRT_PLL_SSC0_S_R = IoReg_Read32(PLL27X_REG_PLL_SSC0_reg);
  	vbe_disp_suspend_resume.CRT_PLL_SSC3_S_R = IoReg_Read32(PLL27X_REG_PLL_SSC3_reg);
	vbe_disp_suspend_resume.CRT_PLL_SSC4_S_R = IoReg_Read32(PLL27X_REG_PLL_SSC4_reg);
	vbe_disp_suspend_resume.CRT_SYS_DCLKSS_S_R = IoReg_Read32(PLL27X_REG_SYS_DCLKSS_reg);
	vbe_disp_suspend_resume.CRT_SYS_PLL_DISP1_S_R = IoReg_Read32(PLL27X_REG_SYS_PLL_DISP1_reg);
	vbe_disp_suspend_resume.CRT_SYS_PLL_DISP2_S_R = IoReg_Read32(PLL27X_REG_SYS_PLL_DISP2_reg);
	vbe_disp_suspend_resume.CRT_SYS_PLL_DISP3_S_R = IoReg_Read32(PLL27X_REG_SYS_PLL_DISP3_reg);
	vbe_disp_suspend_resume.CRT_SYS_DISPCLKSEL_S_R = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
	vbe_disp_panel_suspend();
}

void vbe_disp_init_flow_pre_settings(void)
{
	//disable lane power
	vbe_disp_lane_power_off();

	if((Get_DISPLAY_PANEL_TYPE() == P_VBY1_4K2K)  ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS) ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)){
		//TXPLL reset, rtd_part_outl(0xb8000C20, 10, 10, 0x0);
		vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_S_R &= ~_BIT10;
		//VBy1 Clock disable , rtd_part_outl(0xb802D9B8, 31, 29, 0x0);
		vbe_disp_suspend_resume.SFG_SFG_DUMMY_S_R &= ~(_BIT31|_BIT30|_BIT29);
		//VBy1 MAC disable,  rtd_part_outl(0xb802D70C, 31, 31, 0x0);
		vbe_disp_suspend_resume.VBY1_TRANSMIT_CONTROL_S_R &= ~(_BIT31);
		//Disable Async FIFO,	rtd_outl(0xb802DC94, 0x00000000);
		vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL0_S_R &= ~_BIT0;
	}else if((Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)||(Get_DISPLAY_PANEL_TYPE() == P_CEDS)){
		//TXPLL reset, rtd_part_outl(0xb8000C20, 10, 10, 0x0);
		vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_S_R &= ~_BIT10;
		//EPI Clock disable , rtd_part_outl(0xb802D9B8, 31, 29, 0x0);
		vbe_disp_suspend_resume.SFG_SFG_DUMMY_S_R &= ~(_BIT31|_BIT30|_BIT29);
		// EPI MAC Disable  rtd_part_outl(0xb802606C, 16, 16, 0x0);
		vbe_disp_panel_epi_suspend_resume.EPI_EPI_PORT_OPTION_CTRL_S_R &= ~_BIT16;
		//Disable Async FIFO,	rtd_outl(0xb802DC94, 0x00000000);
		vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL0_S_R &= ~_BIT0;
	}else if((Get_DISPLAY_PANEL_TYPE() == P_LVDS_2K1K)||(Get_DISPLAY_PANEL_TYPE() == P_LVDS_TO_HDMI)){
		//TXPLL reset, rtd_part_outl(0xb8000C20, 10, 10, 0x0);
		vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_S_R &= ~_BIT10;
		//EPI Clock disable , rtd_part_outl(0xb802D9B8, 31, 29, 0x0);
		vbe_disp_suspend_resume.SFG_SFG_DUMMY_S_R &= ~(_BIT31|_BIT30|_BIT29);
		// LVDS MAC Enable (Below Setting), rtd_part_outl(0xb802D008, 7, 4, 0);
		vbe_disp_suspend_resume.PIF_LVDS_CTRL3_S_R &= ~(_BIT4|_BIT5|_BIT6|_BIT7);
		//Disable Async FIFO,	rtd_outl(0xb802DC94, 0x00000000);
		vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL0_S_R &= ~_BIT0;
	}

	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[vbe_disp_init_flow_pre_settings] PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_S_R:%x\n",vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_S_R);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[vbe_disp_init_flow_pre_settings] SFG_SFG_DUMMY_S_R:%x\n",vbe_disp_suspend_resume.SFG_SFG_DUMMY_S_R);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[vbe_disp_init_flow_pre_settings] VBY1_TRANSMIT_CONTROL_S_R:%x\n",vbe_disp_suspend_resume.VBY1_TRANSMIT_CONTROL_S_R);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[vbe_disp_init_flow_pre_settings] EPI_EPI_PORT_OPTION_CTRL_S_R:%x\n",vbe_disp_panel_epi_suspend_resume.EPI_EPI_PORT_OPTION_CTRL_S_R);
	rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[vbe_disp_init_flow_pre_settings] PIF_PIF_FIFO_EN_S_R:%x\n",vbe_disp_suspend_resume.SFG_PIF_FIFO_CTRL0_S_R);
}

void vbe_disp_init_flow_finish(void)
{

	if((Get_DISPLAY_PANEL_TYPE() == P_VBY1_4K2K) ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS) ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI) ||
		(Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_LVDS_TO_HDMI)){
		// (5) TXPLL reset release (Below Setting) , rtd_part_outl(0xb8000C20, 10, 10, 0x1);
		IoReg_SetBits(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg,_BIT10);
		// (6) Wait TXPLL stable at least 150us (SW Control)
		mdelay(1);
		// (7) VBy1 Clock Enable (Below Setting), rtd_part_outl(0xb802D9B8, 31, 29, 0x1);
		if((Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD2K1K_to_H5X_SPLIT) ||(Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD1K2K_to_H5X_SPLIT))
			IoReg_SetBits(SFG_SFG_DUMMY_reg,_BIT28); // for OSD split
		IoReg_SetBits(SFG_SFG_DUMMY_reg,_BIT29);
		// (8) VBy1 MAC Enable (Below Setting), rtd_part_outl(0xb802D70C, 31, 31, 0x1);
		IoReg_SetBits(VBY1_TRANSMIT_CONTROL_reg,_BIT31);
		// (9) Enable Async FIFO,	rtd_outl(0xb802DC94, 0x80000000);
		IoReg_SetBits(SFG_PIF_FIFO_CTRL0_reg,_BIT31);	//Merlin5 removed
	}else if((Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)||(Get_DISPLAY_PANEL_TYPE() == P_CEDS)){
		// (5) TXPLL reset release (Below Setting)
		IoReg_SetBits(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg,_BIT10);
		// (6) Wait TXPLL stable at least 150us (SW Control)
		mdelay(1);
		// (7) EPI Clock Enable (Below Setting), rtd_part_outl(0xb802D9B8, 31, 29, 0x2);
		IoReg_SetBits(SFG_SFG_DUMMY_reg,_BIT30);
		// (8) EPI MAC Enable (Below Setting), rtd_part_outl(0xb802606C, 16, 16, 0x1);
		IoReg_SetBits(EPI_EPI_PORT_OPTION_CTRL_reg,_BIT16);
		// (9) Enable Async FIFO,	rtd_outl(0xb802DC94, 0x80000000);
		IoReg_SetBits(SFG_PIF_FIFO_CTRL0_reg,_BIT31);	//Merlin5 removed
	}else if((Get_DISPLAY_PANEL_TYPE() == P_LVDS_2K1K)||(Get_DISPLAY_PANEL_TYPE() == P_LVDS_TO_HDMI)){
		//TXPLL reset, rtd_part_outl(0xb8000C20, 10, 10, 0x1);
		IoReg_SetBits(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_2_3_reg,_BIT10);
		//EPI Clock disable , rtd_part_outl(0xb802D9B8, 31, 29, _BIT31);
		IoReg_SetBits(SFG_SFG_DUMMY_reg,_BIT31);
		// LVDS MAC Enable (Below Setting), rtd_part_outl(0xb802D008, 7, 4, 0xc);
		IoReg_SetBits(PIF_LVDS_CTRL3_reg, (_BIT6|_BIT7));
		// (9) Enable Async FIFO,	rtd_outl(0xb802DC94, 0x80000000);
		IoReg_SetBits(SFG_PIF_FIFO_CTRL0_reg,_BIT31);	//Merlin5 removed
	}
	// (10) APHY Lane Power Enable (Below Setting)
	if((Get_DISPLAY_PANEL_TYPE() == P_ISP)||(Get_DISPLAY_PANEL_TYPE() == P_CEDS)||(Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)||(Get_DISPLAY_PANEL_TYPE() == P_VBY1_4K2K)){
        //control on HAL_VBE_DISP_SetDisplayOutput
    }else
	    vbe_disp_lane_power_on();
}


void vbe_disp_resume(void)
{
	unsigned int tmp;
//	unsigned char timeout;
//	pll27x_reg_pll_ssc5_RBUS pll_ssc5_reg;
//	UINT32 cnt=0;
	//frank@1114 add below flow to set up Ddomain related register
	ppoverlay_dispd_smooth_toggle1_RBUS dispd_smooth_toggle1_reg;
	sys_reg_sys_dispclksel_RBUS sys_dispclksel_reg;
//	sys_reg_sys_dclk_gate_sel0_RBUS sys_reg_sys_dclk_gate_sel0_reg;
//	sys_reg_sys_dclk_gate_sel1_RBUS sys_reg_sys_dclk_gate_sel1_reg;
	ppoverlay_dispd_smooth_toggle1_RBUS ppoverlay_dispd_smooth_toggle1_reg;
	sys_dispclksel_reg.regValue = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
	sys_dispclksel_reg.clken_disp_stage1 = 1;
	sys_dispclksel_reg.clken_disp_memc = 1;
	IoReg_Write32(SYS_REG_SYS_DISPCLKSEL_reg, sys_dispclksel_reg.regValue);
#if 0
	sys_reg_sys_dclk_gate_sel0_reg.regValue = rtd_inl(SYS_REG_SYS_DCLK_GATE_SEL0_reg);
	sys_reg_sys_dclk_gate_sel1_reg.regValue = rtd_inl(SYS_REG_SYS_DCLK_GATE_SEL1_reg);

	if(Get_DISPLAY_REFRESH_RATE() == 120){
#ifdef CONFIG_MEMC_BYPASS
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s1_f1p_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s1_f2p_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s2_f1p_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s2_f2p_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_osd_f1p_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_osd_f2p_gate_sel = 2;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_memc_in_if_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_memc_out_if_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_mc_ippre_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_mc_ippre2x_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_mc_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_s2_f2p_div2_gate_sel = 1;
#else
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s1_f1p_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s1_f2p_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s2_f1p_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s2_f2p_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_osd_f1p_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_osd_f2p_gate_sel = 2;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_memc_in_if_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_memc_out_if_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_mc_ippre_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_mc_ippre2x_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_mc_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_s2_f2p_div2_gate_sel = 1;
#endif
	}else{
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s1_f1p_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s1_f2p_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s2_f1p_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_s2_f2p_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_osd_f1p_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel0_reg.dclk_osd_f2p_gate_sel = 2;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_memc_in_if_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_memc_out_if_gate_sel = 2;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_mc_ippre_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_mc_ippre2x_gate_sel = 0;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_mc_gate_sel = 1;
		sys_reg_sys_dclk_gate_sel1_reg.dclk_s2_f2p_div2_gate_sel = 1;
	}
	rtd_outl(SYS_REG_SYS_DCLK_GATE_SEL0_reg, sys_reg_sys_dclk_gate_sel0_reg.regValue);
	rtd_outl(SYS_REG_SYS_DCLK_GATE_SEL1_reg, sys_reg_sys_dclk_gate_sel1_reg.regValue);
#endif
	ppoverlay_dispd_smooth_toggle1_reg.regValue = 0;
	ppoverlay_dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
	rtd_outl(PPOVERLAY_dispd_smooth_toggle1_reg, ppoverlay_dispd_smooth_toggle1_reg.regValue);

	if( Scaler_MEMC_CLK_Check() == FALSE ){
		printk(KERN_NOTICE "%s %d\n",__func__,__LINE__);
		printk(KERN_NOTICE "Scaler_MEMC_CLK_Check = FALSE! Do Scaler_MEMC_CLK_Enable()!\n");
		Scaler_MEMC_CLK_Enable();//Enable MEMC CLK
	}

	//remove pmic in str driver for KTASKWBS-7931
	//if(Get_PANEL_TYPE_SUPPORT_PMIC() == TRUE)
	//	panel_setup_PMIC();

	if(/*(IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg) & _BIT24) &&*/ !(first_disp_resume)) {
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[vbe_disp_resume] Already Set, so no need to set again\n");
#if !defined(CONFIG_CUSTOMER_TV006) && defined(CONFIG_RTK_KDRV_GDMA)
		gdma_resume_by_vbe();
#endif
		return;
	}

    IoReg_SetBits(PPOVERLAY_Main_Display_Control_RSV_reg, _BIT1);//Let main default value enable force bg
    IoReg_SetBits(PPOVERLAY_MP_Layout_Force_to_Background_reg, _BIT1);//Let sub default value enable force bg

	if(first_disp_resume)
		first_disp_resume = FALSE;

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[vbe_disp_resume] step 1, turn on VBy1 APHY Power\n");
	vbe_disp_init_flow_pre_settings();

	/*DTG*/
	//frank@02022016 IoReg_Write32(PPOVERLAY_Display_Timing_CTRL1_reg, (vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL1_S_R&(~_BIT24)));
	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL1_reg, (vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL1_S_R&(~(_BIT24|_BIT26))));
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[vbe_disp_resume] PPOVERLAY_Display_Timing_CTRL1_reg:%x !\n", IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg));
	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL2_S_R);
	IoReg_Write32(PPOVERLAY_DV_Length_reg, vbe_disp_suspend_resume.PPOVERLAY_DV_LENGTH_S_R);
	IoReg_Write32(PPOVERLAY_DV_total_reg, vbe_disp_suspend_resume.PPOVERLAY_DV_TOTAL_S_R);
	//IoReg_Write32(PPOVERLAY_DTG_pending_status_reg, vbe_disp_suspend_resume.PPOVERLAY_DTG_PENDING_STATUS_S_R);
	IoReg_Write32(PPOVERLAY_Display_Background_Color_reg, vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_BACKGROUND_COLOR_S_R);
	IoReg_Write32(PPOVERLAY_DH_Width_reg, vbe_disp_suspend_resume.PPOVERLAY_DH_WIDTH_S_R);
	IoReg_Write32(PPOVERLAY_DTG_ie_reg, vbe_disp_suspend_resume.PPOVERLAY_DTG_IE_S_R);
	IoReg_Write32(PPOVERLAY_DTG_ie_2_reg, vbe_disp_suspend_resume.PPOVERLAY_DTG_IE_2_S_R);
	IoReg_Write32(PPOVERLAY_DH_Total_Last_Line_Length_reg, vbe_disp_suspend_resume.PPOVERLAY_DH_TOTAL_LAST_LINE_LENGTH_S_R);
	IoReg_Write32(PPOVERLAY_DH_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_DH_DEN_START_END_S_R);
	IoReg_Write32(PPOVERLAY_DV_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_DV_DEN_START_END_S_R);
	IoReg_Write32(SYS_REG_SYS_DISPCLKSEL_reg, vbe_disp_suspend_resume.SYS_DISPCLKSEL_S_R);
	IoReg_Write32(PPOVERLAY_FS_IV_DV_Fine_Tuning2_reg, vbe_disp_suspend_resume.PPOVERLAY_FS_IV_DV_FINE_TUNING2_S_R);
	IoReg_Write32(PPOVERLAY_FS_IV_DV_Fine_Tuning5_reg, vbe_disp_suspend_resume.PPOVERLAY_FS_IV_DV_FINE_TUNING5_S_R);
	IoReg_Write32(PPOVERLAY_FS_IV_DV_Fine_Tuning1_reg, vbe_disp_suspend_resume.PPOVERLAY_FS_IV_DV_FINE_TUNING1_S_R);
	IoReg_Write32(PPOVERLAY_uzudtg_DV_TOTAL_reg , vbe_disp_suspend_resume.PPOVERLAY_uzudtg_DV_TOTAL_S_R  );
	IoReg_Write32(PPOVERLAY_uzudtg_DH_TOTAL_reg , vbe_disp_suspend_resume.PPOVERLAY_uzudtg_DH_TOTAL_S_R  );
	IoReg_Write32(PPOVERLAY_DH_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_DH_DEN_Start_End_S_R );
	IoReg_Write32(PPOVERLAY_DV_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_DV_DEN_Start_End_S_R );
	IoReg_Write32(PPOVERLAY_UZUDTG_COUNTROL_reg , vbe_disp_suspend_resume.PPOVERLAY_UZUDTG_COUNTROL_S_R  );
	IoReg_Write32(PPOVERLAY_memcdtg_DV_TOTAL_reg, vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DV_TOTAL_S_R );
	IoReg_Write32(PPOVERLAY_memcdtg_DH_TOTAL_reg, vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DH_TOTAL_S_R );
	IoReg_Write32(PPOVERLAY_memcdtg_DH_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DH_DEN_Start_End_S_R);
	IoReg_Write32(PPOVERLAY_memcdtg_DV_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_memcdtg_DV_DEN_Start_End_S_R);
	IoReg_Write32(PPOVERLAY_MEMCDTG_CONTROL_reg, vbe_disp_suspend_resume.PPOVERLAY_MEMCDTG_CONTROL_S_R  );
	//IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg  , vbe_disp_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_S_R|_BIT12); //@benwang marked for resume test
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg  , vbe_disp_suspend_resume.PPOVERLAY_MEMC_MUX_CTRL_S_R);
	IoReg_Write32(PPOVERLAY_uzudtg_fractional_fsync_reg,vbe_disp_suspend_resume.PPOVERLAY_UZUDTG_FRACTIONAL_FSYNC_S_R);
	IoReg_Write32(PPOVERLAY_DTG_M_Remove_input_vsync_reg,vbe_disp_suspend_resume.PPOVERLAY_DTG_M_REMOVE_INPUT_VSYNC_S_R);
	// for OSD split
	if((Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD2K1K_to_H5X_SPLIT) ||(Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD1K2K_to_H5X_SPLIT)){
		IoReg_Write32(PPOVERLAY_osddtg_DV_TOTAL_reg, vbe_disp_suspend_resume.PPOVERLAY_osddtg_DV_TOTAL_S_R);
		IoReg_Write32(PPOVERLAY_osddtg_DH_TOTAL_reg, vbe_disp_suspend_resume.PPOVERLAY_osddtg_DH_TOTAL_S_R);
		IoReg_Write32(PPOVERLAY_osddtg_DV_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_osddtg_DV_DEN_Start_End_S_R);
		IoReg_Write32(PPOVERLAY_osddtg_DH_DEN_Start_End_reg, vbe_disp_suspend_resume.PPOVERLAY_osddtg_DH_DEN_Start_End_S_R);
		IoReg_Write32(PPOVERLAY_OSDDTG_CONTROL_reg, vbe_disp_suspend_resume.PPOVERLAY_OSDDTG_CONTROL_S_R);
		IoReg_Write32(PPOVERLAY_OSDDTG_CONTROL2_reg, vbe_disp_suspend_resume.PPOVERLAY_OSDDTG_CONTROL2_S_R);
		IoReg_Write32(PPOVERLAY_osddtg_fractional_fsync_reg, vbe_disp_suspend_resume.PPOVERLAY_osddtg_fractional_fsync_S_R);
		IoReg_Write32(PPOVERLAY_osd_dtg_dh_width_reg, vbe_disp_suspend_resume.PPOVERLAY_osd_dtg_dh_width_S_R);
		IoReg_Write32(PPOVERLAY_osd_dtg_dv_length_reg, vbe_disp_suspend_resume.PPOVERLAY_osd_dtg_dv_length_S_R);
	}
	/*GoldenVsyn & twoStepUzu delay*/
	IoReg_Write32(PPOVERLAY_MEMCDTG_CONTROL2_reg,vbe_disp_suspend_resume.PPOVERLAY_MEMCDTG_CONTROL2_S_R);
	IoReg_Write32(PPOVERLAY_MEMCDTG_CONTROL3_reg,vbe_disp_suspend_resume.PPOVERLAY_MEMCDTG_CONTROL3_S_R);
	IoReg_Write32(PPOVERLAY_uzudtg_control1_reg,vbe_disp_suspend_resume.PPOVERLAY_uzudtg_control1_S_R);
	IoReg_Write32(PPOVERLAY_uzudtg_control2_reg,vbe_disp_suspend_resume.PPOVERLAY_uzudtg_control2_S_R);

	/*SFG*/
	//[QEVENT-7662]Fixed OLED panel EIT function sfg setting issue @Crixus 20160527
	if((Get_DISPLAY_PANEL_OLED_TYPE() == TRUE) && (oled_resume_eit_flag == TRUE)){
		IoReg_Write32(SFG_SFG_FORCE_BG_AT_DIF_reg, (vbe_disp_suspend_resume.SFG_SFG_FORCE_BG_AT_DIF_S_R | _BIT31));// In OLED EIT function, resume must enable SFG forceBG @Crixus 20160527
		oled_resume_eit_flag = FALSE;
	}
	else{
		IoReg_Write32(SFG_SFG_FORCE_BG_AT_DIF_reg, (vbe_disp_suspend_resume.SFG_SFG_FORCE_BG_AT_DIF_S_R & ~_BIT31));// resume must disable SFG forceBG @Crixus 20160124
	}
	//IoReg_Write32(SFG_SFG_CTRL_0_reg, vbe_disp_suspend_resume.SFG_SFG_CTRL_0_S_R);
	/*Clk*/
	IoReg_Write32(SYS_REG_SYS_DCLK_GATE_SEL0_reg, vbe_disp_suspend_resume.CRT_DCLK_GATE_SEL0_S_R);
	IoReg_Write32(SYS_REG_SYS_DCLK_GATE_SEL1_reg, vbe_disp_suspend_resume.CRT_DCLK_GATE_SEL1_S_R);
	IoReg_Write32(PLL27X_REG_PLL_SSC0_reg, vbe_disp_suspend_resume.CRT_PLL_SSC0_S_R&~_BIT0);
	IoReg_Write32(PLL27X_REG_PLL_SSC3_reg, vbe_disp_suspend_resume.CRT_PLL_SSC3_S_R);
	IoReg_Write32(PLL27X_REG_PLL_SSC4_reg, vbe_disp_suspend_resume.CRT_PLL_SSC4_S_R);
	IoReg_Write32(PLL27X_REG_SYS_DCLKSS_reg, vbe_disp_suspend_resume.CRT_SYS_DCLKSS_S_R);
	IoReg_Write32(PLL27X_REG_SYS_PLL_DISP1_reg, vbe_disp_suspend_resume.CRT_SYS_PLL_DISP1_S_R);
	IoReg_Write32(PLL27X_REG_SYS_PLL_DISP2_reg, vbe_disp_suspend_resume.CRT_SYS_PLL_DISP2_S_R);
	IoReg_Write32(PLL27X_REG_SYS_PLL_DISP3_reg, vbe_disp_suspend_resume.CRT_SYS_PLL_DISP3_S_R);
	IoReg_Write32(SYS_REG_SYS_DISPCLKSEL_reg, vbe_disp_suspend_resume.CRT_SYS_DISPCLKSEL_S_R);
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, (vbe_disp_suspend_resume.PPOVERLAY_DOUBLE_BUFFER_CTRL_S_R)|_BIT0);

	IoReg_Write32(PLL27X_REG_PLL_SSC0_reg, (vbe_disp_suspend_resume.CRT_PLL_SSC0_S_R|_BIT0));

	mdelay(1); //150us for dpll hw apply
	IoReg_ClearBits(PLL27X_REG_PLL_SSC0_reg,_BIT0);
	vbe_disp_panel_resume();

	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL1_reg, ((vbe_disp_suspend_resume.PPOVERLAY_DISPLAY_TIMING_CTRL1_S_R&(~(_BIT26)))|_BIT24));
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, (vbe_disp_suspend_resume.PPOVERLAY_DOUBLE_BUFFER_CTRL_S_R)|_BIT0);

	tmp = 0;
	while(IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg)&_BIT0){
		mdelay(2);
		if(++tmp>30)
			break;
	}
	if(tmp > 30)
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[vbe_disp_resume]Wait Display double buffer reg timeout\n");

	//apply uzudtg clk double buffer
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[vbe_disp_resume] d domain ready\n");

	vbe_disp_init_flow_finish();
	stBacklihgtStart_Tick = IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg);

	Panel_resume_TurnOn();
	//vbe_disp_lane_power_on();
	Panel_SetMCUMode(1);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"haha test 000\n");
	//clear first boot flag
	first_boot_run_main = FALSE;

	//power on sequence : panel to LVDS on
	if(Get_DISPLAY_PANEL_TYPE()==P_LVDS_2K1K){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[vbe_disp_resume] Get_PANEL_TO_LVDS_ON_ms = %d\n", Get_PANEL_TO_LVDS_ON_ms());
		msleep(Get_PANEL_TO_LVDS_ON_ms());
	}

#if defined(CONFIG_RTK_KDRV_GDMA) && !defined(CONFIG_CUSTOMER_TV006)
	gdma_resume_by_vbe();
#endif

}


void vbe_disp_early_resume()
{
	vbe_disp_resume();

}
EXPORT_SYMBOL(vbe_disp_early_resume);

#endif

bool vbe_get_data_frame_sync_flag(void)
{
	return disp_data_frame_sync_flag;
}

void HAL_VBE_DISP_DataFrameSync(bool enable)
{
	if (enable != disp_data_frame_sync_flag) {
		disp_data_frame_sync_flag = enable;
	}
}

/*******************************************************************************
****************************VBE DISP TCON DRIVER********************************
*******************************************************************************/
void HAL_VBE_DISP_TCON_Initialize(void){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
}
void HAL_VBE_DISP_TCON_Uninitialize(void){
	//to do
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
}
void HAL_VBE_DISP_TCON_EnableColorTemp(bool bOnOff){
	//to do
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
}
void HAL_VBE_DISP_TCON_EnableDGA(bool bOnOff){
	//to do
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
}
void HAL_VBE_DISP_TCON_EnableDither(bool bOnOff){
	Color_Fun_Bypass bDither;
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, enable = %d\n",__FUNCTION__,bOnOff);
	bDither.idIP = BYPASS_D_DITHER;
	bDither.bypass_switch = bOnOff;

	drvif_color_bypass(&bDither, 1);
}
void HAL_VBE_DISP_TCON_SetDitherMode(KADP_DISP_TCON_DITHER_T mode){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
	fwif_color_dither_mode(mode);
}
void HAL_VBE_DISP_TCON_SetGammaTable(UINT32 *pRedGammaTable, UINT32 *pGreenGammaTable, UINT32 *pBlueGammaTable){
	//to do
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
}
void HAL_VBE_DISP_TCON_EnableTCon(bool bOnOff){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
	HAL_VBE_DISP_TCON_EnableColorTemp(bOnOff);
	HAL_VBE_DISP_TCON_EnableDGA(bOnOff);
	HAL_VBE_DISP_TCON_EnableDither(bOnOff);
}
void HAL_VBE_DISP_TCON_H_Reverse(UINT8 u8Mode){
	sfg_sfg_ctrl_0_RBUS sfg_ctrl_0_reg;
	sfg_ctrl_0_reg.regValue = IoReg_Read32(SFG_SFG_CTRL_0_reg);

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, u8Mode = %x\n",__FUNCTION__,u8Mode);
	 //hflip
	if(u8Mode){
		sfg_ctrl_0_reg.h_flip_en = 1;
	}
	else{
		sfg_ctrl_0_reg.h_flip_en = 0;
	}

	if((Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE)||(Get_DISPLAY_PANEL_TYPE() == P_CEDS)){
		//EPI V16DRD Horizontal need hflip, so dirty patch it.
		sfg_ctrl_0_reg.h_flip_en = !sfg_ctrl_0_reg.h_flip_en;
	}

	IoReg_Write32(SFG_SFG_CTRL_0_reg, sfg_ctrl_0_reg.regValue);
}
void HAL_VBE_DISP_TCON_SetClock(bool bOnOff){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);

	//---------------------------------------------------------------------------------------------------------------------------------
	//SFG1:Video, DH_ST_END = 0x008C080C, DTG_HS_Width = 16, DTG_VS_Width = 6
	//---------------------------------------------------------------------------------------------------------------------------------
	//---------------------------------------------------------------------------------------------------------------------------------
	//SFG, 1 Pixel Mode, DH_ST_END = 0x008C080C, DTG_HS_Width = 16, DTG_VS_Width = 6
	//---------------------------------------------------------------------------------------------------------------------------------
	IoReg_Write32(0xb802D900, 0x000018C0);	// 8-bit Mode, Dout Enable, delay chain inverse + 0ns
	IoReg_Write32(0xb802D904, 0x0000FF00);	// PIF_Clock = Dclk, Force to background enable
	IoReg_Write32(0xb802D908, 0xffff3210);	// Port A~H mapping
	IoReg_Write32(0xb802D90c, 0xffffffff);
	IoReg_Write32(0xb802D92C, 0x00005000);	// Line 4n + 0: shift 1 sub-Pixel
						// Line 4n + 1: shift 1 sub-Pixel
						// Line 4n + 2: no sub-Pixel shift
						// Line 4n + 3: no sub-Pixel shift
	IoReg_Write32(0xb802D930, 0x00000000);	// SEG 0/1, Front/End, 4n+0/4n+1 Line, no dummy pixel
	IoReg_Write32(0xb802D934, 0x00000000);	// SEG 2/3, Front/End, 4n+2/4n+3 Line, no dummy pixel
	IoReg_Write32(0xb802D938, 0x00000000);	// SEG 4/5, Front/End, 4n+0/4n+1 Line, no dummy pixel
	IoReg_Write32(0xb802D93c, 0x00000000);	// SEG 6/7, Front/End, 4n+2/4n+3 Line, no dummy pixel
	IoReg_Write32(0xb802D954, 0x25310400);	// DRD input line 0 mapping
	IoReg_Write32(0xb802D958, 0x25310400);	// DRD input line 1 mapping
	IoReg_Write32(0xb802D95c, 0x25310400);	// DRD input line 2 mapping
	IoReg_Write32(0xb802D960, 0x25310400);	// DRD input line 3 mapping
	IoReg_Write32(0xb802D964, 0x10000133);	// DRD Data Mapping, 4-SEG, 4-Port, H-Flip
	IoReg_Write32(0xb802D968, 0x000001E0);	// start address of SEG 0/1 , residue of SEG 0/1
	IoReg_Write32(0xb802D96C, 0x03C005A0);	// start address of SEG 2/3 , residue of SEG 2/3
	IoReg_Write32(0xb802D970, 0x00000000);	// start address of SEG 4/5 , residue of SEG 4/5
	IoReg_Write32(0xb802D974, 0x00000000);	// start address of SEG 6/7 , residue of SEG 6/7
	IoReg_Write32(0xb802D988, 0x40000000);	// Disable ByPass Mode, Auto config mode enable, Disanle SFG P2S Mode
	IoReg_Write32(0xb802D98c, 0x000F088B);	// HS_Width = 16 dclk; hsync_delay = DH_Total  - 13 = 2187;
	IoReg_Write32(0xb802D990, 0x00050000);	// VS_ST = 0; VS_END = 6;
	IoReg_Write32(0xb802D994, 0x008C0086);	// sfg_dh_den_sta = DH_DEN_ST = 140;
						// req_st = hs_back_porch - 6 = 134;
	IoReg_Write32(0xb802D990,0x044C0000);
	IoReg_Write32(0xb802D99C, 0x03C00000);	// final_line_length = 1920/2, hsync_threshold = 0
	IoReg_Write32(0xb802D9a0, 0x00000000);	// Residue_pix_div_12_split_mode (no USE)
						// Final_addr_split_mode for Tri-gate Mode (no USE)
	IoReg_Write32(0xb802D9a4, 0x008b0892);	// hs_den_io_dist = req_st + 6 = 140; (for EPI)
						// hs_io_dist = hs_delay + 6 = 2187 + 6 = 2193; (for EPI)
	IoReg_Write32(0xb802D9B8, 0x00000000);	// Line 4N/4N+1/4N+2/4N+3 => G_0/G_last select original data,
						// decided by zz_shift_lst_sel_0/1/2/3 & zz_shift_last_sel_0/1/2/3 first
						// data not inverse
	IoReg_Write32(0xb802D9E8, 0x00000000);	// SEG 0/1, no middle dummy pixel
	IoReg_Write32(0xb802D9EC, 0x00000000);	// SEG 0/1, no middle dummy pixel
	IoReg_Write32(0xb802D9F0, 0x00000000);	// SEG 0/1, no middle dummy pixel
	IoReg_Write32(0xb802D9F4, 0x00000000);	// SEG 0/1, no middle dummy pixel
	IoReg_Write32(0xb802Da08, 0x00000000);	// Active_pixel_RGB for Tri-Gate Mode & Last_ext_pixel for EPI

	//---------------------------------------------------------------------------------------------------------------------------------

	//---------------------------------------------------------------------------------------------------------------------------------
	//PIF
	//---------------------------------------------------------------------------------------------------------------------------------
	IoReg_Write32(0xb802D000, 0x0000000C);	// PIF EPI Mode, data is Video, clock is Video_clk,
	IoReg_Write32(0xb802D010, 0x000050F0);	// LVDS A/B/C/D Port Enable, LSB First, LVDS format use Table1,
	IoReg_Write32(0xb802D100, 0x00010203);	// LVDS ARGB de_sel, vs_sel, hs_sel, rev0_sel,
	IoReg_Write32(0xb802D104, 0x04050607);	// LVDS ARGB rev0_sel, a1_sel, a2_sel,
	IoReg_Write32(0xb802D108, 0x0008090A);	// LVDS ARGB a3_sel, a4_sel, a5_sel,

	//---------------------------------------------------------------------------------------------------------------------------------
	//LVDS Pin Share
	//---------------------------------------------------------------------------------------------------------------------------------
	IoReg_Write32(0xb800087C, 0x00000000);	// LVDS A-Port C/D/E/F-Pair Pinshare,
	IoReg_Write32(0xb8000880, 0x00000000);	// LVDS A-Port A/B-Pair Pinshare, LVDS B-Port E/F-Pair Pinshare,
	IoReg_Write32(0xb8000884, 0x00000000);	// LVDS B-Port A/B/C/D-Pair Pinshare,
	IoReg_Write32(0xb8000888, 0x00000000);	// LVDS C-Port C/D/E/F-Pair Pinshare,
	IoReg_Write32(0xb800088C, 0x00000000);	// LVDS C-Port A/B-Pair Pinshare, LVDS D-Port E/F-Pair Pinshare,
	IoReg_Write32(0xb8000890, 0x00000000);	// LVDS D-Port A/B/C/D-Pair Pinshare,


	//---------------------------------------------------------------------------------------------------------------------------------
	//EPI MAC
	//---------------------------------------------------------------------------------------------------------------------------------
      	rtd_maskl(0xb8000204,0xFDFFFFFF,0x00000000); // [25]=0, EPI clk is normal path. (not debug mode) (CRT)
      	rtd_maskl(0xb802D904,0x8FFFFFFF,0x10000000); // [30:28]=001=DIV1, Epi  4-lane mode (SFG spec)

  	// EPI MAC-layer configuration
      	IoReg_Write32(0xb802D500,0x00000015);  // CTR_Start=0x15,CTR_Start_dummy=0x0,[30]=0=PN_no_swap

  	// L0~L7, Embedded bit setting
	IoReg_Write32(0xb802D504,0x00000000);  // L0: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D508,0x00000000);  // L1: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D50C,0x00000000);  // L2: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D510,0x00000000);  // L3: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D514,0x00000000);  // L4: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D518,0x00000000);  // L5: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D51C,0x00000000);  // L6: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D520,0x00000000);  // L7: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D524,0x0000db09);  // L0: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D528,0x0000db09);  // L1: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D52C,0x0000db09);  // L2: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D530,0x0000db09);  // L3: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D534,0x0000db09);  // L4: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D538,0x0000db09);  // L5: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D53C,0x0000db09);  // L6: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D540,0x0000db09);  // L7: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D544,0x00001010);  // L0: CTR2: LTD2=1, GMAEN=0, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D548,0x00001010);  // L1: CTR2: LTD2=1, GMAEN=0, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D54C,0x00001810);  // L2: CTR2: LTD2=1, GMAEN=1, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D550,0x00001810);  // L3: CTR2: LTD2=1, GMAEN=1, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D554,0x00001810);  // L4: CTR2: LTD2=1, GMAEN=1, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D558,0x00001810);  // L5: CTR2: LTD2=1, GMAEN=1, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D55C,0x00001010);  // L6: CTR2: LTD2=1, GMAEN=0, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D560,0x00001010);  // L7: CTR2: LTD2=1, GMAEN=0, others:0 (LG: C14=1)

	// L8~L15, Embedded bit setting
	IoReg_Write32(0xb802D604,0x00000000);  // L0: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D608,0x00000000);  // L1: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D60C,0x00000000);  // L2: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D610,0x00000000);  // L3: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D614,0x00000000);  // L4: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D618,0x00000000);  // L5: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D61C,0x00000000);  // L6: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D620,0x00000000);  // L7: [31:16]=Phase_II_preamble_num=0, [15:0]=Phase_I_preamble_num=0
	IoReg_Write32(0xb802D624,0x0000db09);  // L0: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D628,0x0000db09);  // L1: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D62C,0x0000db09);  // L2: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D630,0x0000db09);  // L3: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D634,0x0000db09);  // L4: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D638,0x0000db09);  // L5: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D63C,0x0000db09);  // L6: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D640,0x0000db09);  // L7: [29:18]=New_CTRL_bit,[17:8]=SOE_rising=0xDB=(T2=222),[7:0]=SOE_falling=0x09=(T1=13)
	IoReg_Write32(0xb802D644,0x00001010);  // L0: CTR2: LTD2=1, GMAEN=0, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D648,0x00001010);  // L1: CTR2: LTD2=1, GMAEN=0, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D64C,0x00001810);  // L2: CTR2: LTD2=1, GMAEN=1, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D650,0x00001810);  // L3: CTR2: LTD2=1, GMAEN=1, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D654,0x00001810);  // L4: CTR2: LTD2=1, GMAEN=1, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D658,0x00001810);  // L5: CTR2: LTD2=1, GMAEN=1, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D65C,0x00001010);  // L6: CTR2: LTD2=1, GMAEN=0, others:0 (LG: C14=1)
	IoReg_Write32(0xb802D660,0x00001010);  // L7: CTR2: LTD2=1, GMAEN=0, others:0 (LG: C14=1)

  	// Tcon merge setting (for 16lane)
	IoReg_Write32(0xb802D564,0xFFFFFFE1);  // CTR2:Select CTR2(c0 ~c5 ) source. From Tcon or Register(all "1"). (c0,POL from tcon1)//POL
	IoReg_Write32(0xb802D568,0xFFF07FFF);  // CTR2:Select CTR2(c6 ~c11) source. From Tcon or Register(all "1"). (c9,GSP from tcon0)
	IoReg_Write32(0xb802D56C,0xFFFFFFFF);  // CTR2:Select CTR2(c12~c17) source. From Tcon or Register(all "1").
	IoReg_Write32(0xb802D570,0xFFFFFFFF);  // CTR2:Select CTR2(c18~c23) source. From Tcon or Register(all "1").
	IoReg_Write32(0xb802D574,0xFFFFFFFF);  // CTR2:Select CTR2(c24~c29) source. From Tcon or Register(all "1").

 	// EPI mode setting (for 16lane)
	IoReg_Write32(0xb802D578,0x00000000);  // CTR3: reserved for future. bit30=0 to disable.
	IoReg_Write32(0xb802D57C,0x0000002A);  // Data_Start=0x2A,Data_Start_dummy=0x0.
	IoReg_Write32(0xb802D580,0x08000000);  // Bit31=0=No_data_in.(Bit30=1 to reset), Bit29=0=PRBS7_OFF, 8bit
	IoReg_Write32(0xb802D584,0xC0000000);  // [1]=0=Lock_hw_mode
	IoReg_Write32(0xb802D588,0x00093100);  // [21:17]=Port_num=00100=4_port, [16]=1=normal(no_rst),[11:10]=map_table=0

  	// Setting for application
     	rtd_maskl(0xb802d584,0xFFFFFFF9,0x00000006); // [1]=1=Lock_fw_mode, [2]=Lock_fw_value

	//---------------------------------------------------------------------------------------------------------------------------------
	//EPI PHY
	//---------------------------------------------------------------------------------------------------------------------------------
      	// EPI phy setting, 4Lane,
	// Data_rate = (594M/4)*14*2/(4lane) = 1.039Gbps
	// Pixel_clk = (594M/4)/(4lane) = 37.125Mbps
    	IoReg_Write32(0xb802D000, 0x0000000C);	// PIF EPI Mode, data is Video, clock is Video_clk,

  	//EPI_X,Y, Panel power enable
    	IoReg_Write32(0xb8000C74, 0x80000000);  // P0,P1, [31]=PLT_POW=1, All lane power = off
    	IoReg_Write32(0xb8000D74, 0x80000000);  // P0,P1, [31]=PLT_POW=1, All lane power = off

  	//EPI_X,Y, PhyPLL
    	IoReg_Mask32(0xb8000C08,0xFFFF88FF,0x00002300); // [14:12]=DIVM=2+2=4, [10:8]=DIVN=0x3=/8 (8lane)
    	IoReg_Mask32(0xb8000C0C,0xA008F1FF,0x04C20600); // [30]=0=CKPIXEL_NOTINV,[28:26]=1=DIV234=2, [25:20]=DIV_P=0xC(12+2=14) // [18:16]=Icp=0x2=3.75uA, [11:9]=Rs=0x3=12K
    	IoReg_Mask32(0xb8000D08,0xFFFF88FF,0x00002300); // [14:12]=DIVM=2+2=4,[10:8]=DIVN=0x3=/8 (8lane)
    	IoReg_Mask32(0xb8000D0C,0xA008F1FF,0x04C20600); // [30]=0=CKPIXEL_NOTINV,[28:26]=1=DIV234=2, [25:20]=DIV_P=0xC(12+2=14) // [18:16]=Icp=0x2=3.75uA, [11:9]=Rs=0x3=12K

  	//EPI_X (APHY)
	IoReg_Mask32(0xb8000C10,0x03F9FFC0,0x6C000000); // P0_A = Epi mode, [18:17]=00=300ohm, [5:0]=000000=EPI_LVDS_Mode (for A~F)
	IoReg_Mask32(0xb8000C14,0x03F9FFFF,0x6C000000); // P0_B = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000C18,0x03F9FFFF,0x6C000000); // P0_C = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000C1C,0x03F9FFFF,0x6C000000); // P0_D = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000C20,0x03F9FFFF,0x6C000000); // P0_E = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000C24,0x03F9FFFF,0x6C000000); // P0_F = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000C28,0xDC0FFFFF,0x20000000); // P0, [29]=CK7X_Inv=1, [25:20]=000000=1X_current
	IoReg_Mask32(0xb8000C30,0x03F9FFC0,0x6C000000); // P1_A = Epi mode, [18:17]=00=300ohm, [5:0]=000000=EPI_LVDS_Mode (for A~F)
	IoReg_Mask32(0xb8000C34,0x03F9FFFF,0x6C000000); // P1_B = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000C38,0x03F9FFFF,0x6C000000); // P1_C = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000C3C,0x03F9FFFF,0x6C000000); // P1_D = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000C40,0x03F9FFFF,0x6C000000); // P1_E = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000C44,0x03F9FFFF,0x6C000000); // P1_F = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000C48,0xDC0FFFFF,0x20000000); // P1, [29]=CK7X_Inv=1, [25:20]=000000=1X_current
	IoReg_Mask32(0xb8000C50,0x3FFF3FFF,0x0000C000); // P0,P1,[31]=1=IBX, [30]=0=Epi,[15]=1=1VLDO_On,[14]=1=2VLDO_On
	IoReg_Mask32(0xb8000C50,0xFC01FFFF,0x01D00000); // P0,P1,[25:22]=Swing=7=(2.25+7*0.25=4mA), [21:17]=Vcom=8=(0.7+8*0.025=0.9V)
	IoReg_Mask32(0xb8000C54,0xFFC0C0C0,0x003F003F); // P0,[21:16]=111111=2.4mA (>1G),[13:8]=000000=Emp_Off,[5:0]=111111=Zon
	IoReg_Mask32(0xb8000C58,0xC0FFFFFF,0x3F000000); // P0,[29:24]=111111=EPI_CML_mode
	IoReg_Mask32(0xb8000C5C,0xFFC0C0C0,0x003F003F); // P1,[21:16]=111111=2.4mA (>1G),[13:8]=000000=Emp_Off,[5:0]=111111=Zon
	IoReg_Mask32(0xb8000C60,0xC0FFFFFF,0x3F000000); // P1,[29:24]=111111=EPI_CML_mode

	//EPI_Y (APHY)
	IoReg_Mask32(0xb8000D10,0x03F9FFC0,0x6C000000); // P0_A = Epi mode, [18:17]=00=300ohm, [5:0]=000000=EPI_LVDS_Mode (for A~F)
	IoReg_Mask32(0xb8000D14,0x03F9FFFF,0x6C000000); // P0_B = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000D18,0x03F9FFFF,0x6C000000); // P0_C = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000D1C,0x03F9FFFF,0x6C000000); // P0_D = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000D20,0x03F9FFFF,0x6C000000); // P0_E = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000D24,0x03F9FFFF,0x6C000000); // P0_F = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000D28,0xDC0FFFFF,0x20000000); // P0, [29]=CK7X_Inv=1, [25:20]=000000=1X_current
	IoReg_Mask32(0xb8000D30,0x03F9FFC0,0x6C000000); // P1_A = Epi mode, [18:17]=00=300ohm, [5:0]=000000=EPI_LVDS_Mode (for A~F)
	IoReg_Mask32(0xb8000D34,0x03F9FFFF,0x6C000000); // P1_B = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000D38,0x03F9FFFF,0x6C000000); // P1_C = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000D3C,0x03F9FFFF,0x6C000000); // P1_D = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000D40,0x03F9FFFF,0x6C000000); // P1_E = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000D44,0x03F9FFFF,0x6C000000); // P1_F = Epi mode, [18:17]=00=300ohm
	IoReg_Mask32(0xb8000D48,0xDC0FFFFF,0x20000000); // P1, [29]=CK7X_Inv=1, [25:20]=000000=1X_current
	IoReg_Mask32(0xb8000D50,0x3FFF3FFF,0x0000C000); // P0,P1,[31]=1=IBX, [30]=0=Epi,[15]=1=1VLDO_On,[14]=1=2VLDO_On
	IoReg_Mask32(0xb8000D50,0xFC01FFFF,0x01D00000); // P0,P1,[25:22]=Swing=7=(2.25+7*0.25=4mA), [21:17]=Vcom=8=(0.7+8*0.025=0.9V)
	IoReg_Mask32(0xb8000D54,0xFFC0C0C0,0x003F003F); // P0,[21:16]=111111=2.4mA (>1G),[13:8]=000000=Emp_Off,[5:0]=111111=Zon
	IoReg_Mask32(0xb8000D58,0xC0FFFFFF,0x3F000000); // P0,[29:24]=111111=EPI_CML_mode
	IoReg_Mask32(0xb8000D5C,0xFFC0C0C0,0x003F003F); // P1,[21:16]=111111=2.4mA (>1G),[13:8]=000000=Emp_Off,[5:0]=111111=Zon
	IoReg_Mask32(0xb8000D60,0xC0FFFFFF,0x3F000000); // P1,[29:24]=111111=EPI_CML_mode

	//EPI_X,Y, Lane Power Enable
	IoReg_Mask32(0xb8000C74,0xC0FFFFFF,0x3F000000); // [29:24] =epi_lane_pow=111111=X_P0_on
	IoReg_Mask32(0xb8000C74,0xFFC0FFFF,0x003F0000); // [21:16] =epi_lane_pow=111111=X_P1_on
	IoReg_Mask32(0xb8000D74,0xC0FFFFFF,0x3F000000); // [29:24] =epi_lane_pow=111111=Y_P2_on
	IoReg_Mask32(0xb8000D74,0xFFC0FFFF,0x003F0000); // [21:16] =epi_lane_pow=111111=Y_P3_on

	//---------------------------------------------------------------------------------------------------------------------------------
	//TCON SETTING
	//---------------------------------------------------------------------------------------------------------------------------------

    	// Pinshare
    	IoReg_Mask32(0xb8000890,0xFFF0FF00,0x00040044); //pin share MCLK to become Tcon7 //pin share GCLK to become Tcon6 //pin share GST to become Tcon3
    	IoReg_Mask32(0xb800088c,0xFFFFFFF0,0x00000004); //pin share E/O to become Tcon14
	IoReg_Write32(0xb802d42c,0x00000000);	// Tcon grobal disable
	IoReg_Write32(0xb802d42c,0x00000001);	// Tcon grobal enable
	IoReg_Write32(0xb802d200,0x40000000);	// Tcon across line3, across frame enable

	// GST
	IoReg_Write32(0xb802d23c,0x00260052);	// Tcon2 Hstart Hend
	IoReg_Write32(0xb802d240,0x00260028);	// Tcon2 Vstart Vend
	IoReg_Write32(0xb802d244,0x00000180);	// Tcon2 across line1 mode
	IoReg_Write32(0xb802d258,0x040C040C);	// Tcon3 Hstart Hend
	IoReg_Write32(0xb802d25c,0x08A608AE);	// Tcon3 Vstart and Vend
	IoReg_Write32(0xb802d260,0x00000183);	// Tcon3 across line1 mode, Xor with Tcon[n-1]
	///////////////////////////////////////////////////////////////////////////////////////
	//GCLK for magellen
	//rtd_part_outl(0xb8000880,3,0,0x4);//pin share GCLK to become Tcon5
	////////////////////////////////////////////////////////////////////////////////////////
	// GCLK for mag2
	IoReg_Write32(0xb802d274,0x01C00108);	// Tcon4 Hstart Hend
	IoReg_Write32(0xb802d278,0x0024089E);	// Tcon4 Vstart Vend
	IoReg_Write32(0xb802d27c,0x00000280); 	// Tcon4 across line2 mode

	IoReg_Write32(0xb802d290,0x02B80070);	// Tcon5 Hstart Hend
	IoReg_Write32(0xb802d294,0x00220028);	// Tcon5 Vstart Vend
	IoReg_Write32(0xb802d298,0x000001C1);	// Tcon5 across line1 mode, And with Tcon[n-1]

	IoReg_Write32(0xb802d2ac,0x040C040C);	// Tcon6 Hstart Hend
	IoReg_Write32(0xb802d2b0,0x089E08AE);	// Tcon6 Vstart Vend
	IoReg_Write32(0xb802d2b4,0x00000182);	// Tcon6 across line1 mode, Or with Tcon[n-1]
	///////////////////////////////////////////////////////////////////////////////////////////
	// MCLK
	IoReg_Write32(0xb802d2c8,0x009001A8);	// Tcon7 HStart and Hend
	IoReg_Write32(0xb802d2cc,0x002A08A4);	// Tcon7 VStart and Vend
	IoReg_Write32(0xb802d2d0,0x00000080);	// Tcon7 Normal Mode

	// EO
	IoReg_Write32(0xb802d37c,0x040C040C); 	// Tcon13 Hstart Hend
	IoReg_Write32(0xb802d380,0x08AE08AE);	// Tcon13 Vstart Vend
	IoReg_Write32(0xb802d384,0x00000480);	// Tcon13 across frame mode
	IoReg_Write32(0xb802d38c,0x0000007E);	// Tcon13 across frame period
	IoReg_Write32(0xb802d398,0x004C004C);	// Tcon14 Hstart Hend
	IoReg_Write32(0xb802d39c,0x08AF08AF);	// Tcon14 Vstart Vend
	IoReg_Write32(0xb802d3a0,0x00000483);	// Tcon14 across frame mode
	IoReg_Write32(0xb802d3a8,0x0000007E);	// Tcon14 across frame period
	IoReg_Write32(0xb802d42c,0x00000000);	// Tcon grobal disable
	IoReg_Write32(0xb802d42c,0x00000001);	// Tcon grobal enable

	// POL
	IoReg_Write32(0xb802d220,0x004C004C);	// Tcon1 Hstart Hend
	IoReg_Write32(0xb802d224,0x002C002C);	// Tcon1 Vstart Vend
	IoReg_Write32(0xb802d228,0x00000480);	// Tcon1 frame across mode

	// GSP
	IoReg_Write32(0xb802d204,0x005C03A8);	// Tcon0 Hstart Hend
	IoReg_Write32(0xb802d208,0x00280030);	// Tcon0 Vstart Vend
	IoReg_Write32(0xb802d20c,0x00000180);	// Tcon0 across line1 mode

	IoReg_Write32(0xb802d42c,0x00000001);	// Tcon grobal enable


#ifdef CONFIG_PM
	if(bOnOff == TRUE)
		vbe_disp_tcon_suspend_resume.ENALE_SUSPEND_RESUME= TRUE;
	else
		vbe_disp_tcon_suspend_resume.ENALE_SUSPEND_RESUME= FALSE;
#endif
}
void HAL_VBE_DISP_TCON_WriteRegister(UINT32 u32Address, UINT32 u32Data){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
	IoReg_Write32(u32Address, u32Data);
}
void HAL_VBE_DISP_TCON_ReadRegister(UINT32 u32Address, UINT32 *pData){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
	*pData = IoReg_Read32(u32Address);
}
void HAL_VBE_DISP_TCON_SetLvdsFormat(KADP_VBE_DISP_TCON_LVDS_TYPE_T type){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, type = %x\n",__FUNCTION__,type);
	switch(type){
		case KADP_VBE_DISP_TCON_LVDS_VESA:
			rtd_maskl(PIF_LVDS_CTRL3_reg, 0xffffcfff, 0x00001000);
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"KADP_VBE_DISP_TCON_LVDS_VESA!!\n");
			break;

		case KADP_VBE_DISP_TCON_LVDS_JEIDA:
			rtd_maskl(PIF_LVDS_CTRL3_reg, 0xffffcfff, 0x00000000);
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"KADP_VBE_DISP_TCON_LVDS_JEIDA!!\n");
			break;

		default:
			break;
	}
}
void HAL_VBE_DISP_TCON_Debug(void){
	UINT8 item = 0xff;
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
	do {
		item = 0xff;//Ventor_GetDebugItem()
          	switch(item){
              	case 0x00:
              	{
                  		// Control the vbe tcon debug message on or off.
              	}
                  	break;

              	case 0x01:
              	{
                  		//IoReg_Write32(u32Address, u32Data);
              	}
                  	break;

              	case 0x02:
              	{
                  		//pData = IoReg_Read32(u32Address);
                  		//print("offset [0x%08x] : data [0x%08x] \n", u32Address, pData);
              	}
                  	break;

              	default :
                  	break;
          }
      } while(item!=0xff);
}
/*******************************************************************************
****************************VBE AVE DRIVER**************************************
*******************************************************************************/
//static unsigned char vbe_ave_input_index = 5;//MAX value
//static unsigned char VBE_AVE_Global_Status = VBE_AVE_NOTHING;
int HAL_VBE_AVE_Initialize(void){
#if 0 //remove tve
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_AVE_Global_Status);
	if(VBE_AVE_Global_Status != VBE_AVE_NOTHING){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n VBE_AVE_Initialize fail. Source is not VBE_AVE_NOTHING.\n");
		return -1;
	}
	VBE_AVE_Global_Status = VBE_AVE_INIT_DONE;
#endif
	return 0;
}

int HAL_VBE_AVE_Uninitialize(void){
#if 0 //remove tve
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_AVE_Global_Status);
	if(VBE_AVE_Global_Status != VBE_AVE_INIT_DONE){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n VBE_AVE_Uninitialize fail. Source is not VBE_AVE_INIT_DONE.\n");
		return -1;
	}
	VBE_AVE_Global_Status = VBE_AVE_NOTHING;
#endif
	return 0;
}

int HAL_VBE_AVE_Open(void){
#if 0 //remove tve
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_AVE_Global_Status);
	if(VBE_AVE_Global_Status != VBE_AVE_INIT_DONE){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n VBE_AVE_Open fail. Source is not VBE_AVE_INIT_DONE.\n");
		return -1;
	}

	//enable TVE clock
	drvif_module_tve_init();
	VBE_AVE_Global_Status = VBE_AVE_OPEN_DONE;
#endif
	return 0;
}

int HAL_VBE_AVE_Close(void){
#if 0 //remove tve
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_AVE_Global_Status);
	if((VBE_AVE_Global_Status != VBE_AVE_OPEN_DONE) && (VBE_AVE_Global_Status != VBE_AVE_CONNECT_DONE)){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n VBE_AVE_Close fail. Source is not VBE_AVE_OPEN_DONE.\n");
		return -1;
	}

	//reset tve
	drvif_module_tve_reset();

	VBE_AVE_Global_Status = VBE_AVE_INIT_DONE;
#endif
	return 0;
}
//extern void scaler_dispDtoI3ddma_prog(TVE_VIDEO_MODE_SEL tve_mode);
//extern void scaler_vodmatosub_prog(TVE_VIDEO_MODE_SEL tve_mode, UINT8 tve_vflip_en);
int HAL_VBE_AVE_Connect(KADP_VBE_AVE_INPUT_INDEX AVEInput){
#if 0 //remove tve
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_AVE_Global_Status);
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[scart out]AVEInput = %x \n",AVEInput);
	if(VBE_AVE_Global_Status != VBE_AVE_OPEN_DONE){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n VBE_AVE_Connect fail. Source is not VBE_AVE_OPEN_DONE.\n");
		return -1;
	}

	VBE_AVE_Global_Status = VBE_AVE_CONNECT_DONE;
	vbe_ave_input_index = AVEInput;

	switch(AVEInput){
		case KADP_TUNER_OUTPUT://ATV scart output
			drvif_module_tve_AVout_MODE(VDAC_TV_SRC_SEL_VD);
#ifdef CONFIG_PM
			vbe_ave_suspend_resume.ENALE_SUSPEND_RESUME = VBE_AVE_SUSPEND_RESUME_TUNER_OUTPUT;
#endif
			break;

		case KADP_VSC_SCALER0://DTV scart output
		case KADP_VSC_SCALER1:
			#if 1
			//scaler_vodmatoI3ddma_prog(TVE_PAL_I, Get_PANEL_VFLIP_ENABLE());
			scaler_vodmatosub_prog(TVE_PAL_I, Get_PANEL_VFLIP_ENABLE());
			drvif_module_tve_AVout_MODE(VDAC_TV_SRC_SEL_TV_TVE);
			vo_se_scaling_ctrl(_TRUE);
			#else
			/*test only, disp-D=>i3ddma path*/
			scaler_dispDtoI3ddma_prog(TVE_PAL_I);
			drvif_module_tve_AVout_MODE(VDAC_TV_SRC_SEL_TV_TVE);
			#endif
#ifdef CONFIG_PM
			vbe_ave_suspend_resume.ENALE_SUSPEND_RESUME = VBE_AVE_SUSPEND_RESUME_VSC_SCALER;
#endif

			break;

		case KADP_VDEC0:
		case KADP_VDEC1:
			break;
	}



	//drvif_module_tve_AVout_Enable(TVE_AVOUT_ENABLE);
#endif
	return 0;
}

int HAL_VBE_AVE_Disconnect(void){
#if 0 //remove tve
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_AVE_Global_Status);
	if(VBE_AVE_Global_Status != VBE_AVE_CONNECT_DONE){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n VBE_AVE_Disconnect fail. Source is not VBE_AVE_CONNECT_DONE.\n");
		return -1;
	}

	//Send RPC to disable tveinterrupt checking
	scaler_scart_out_isr_set_enable(_FALSE);
	vo_se_scaling_ctrl(_FALSE);

	//DTV sould de-initial i3ddma path
	if((vbe_ave_input_index == KADP_VSC_SCALER0) || (vbe_ave_input_index == KADP_VSC_SCALER1)){
		//de-initial i3ddma path
		disable_I3DDMA_dispDtoSub();
	}

	//VDAC source change to no using case, scart-out force background
	drvif_module_tve_AVout_MODE(VDAC_TV_SRC_SEL_IFD_DEBUG);
	VBE_AVE_Global_Status = VBE_AVE_OPEN_DONE;
#endif
	return 0;
}

void HAL_VBE_AVE_IsATVWatching(void){
	//to do
	//skip this function
	//rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s\n",__FUNCTION__);
}

void HAL_VBE_AVE_SetATVWatching(KADP_VBE_AVE_INPUT_INDEX AVEInput, BOOLEAN bIsATVWatching){
#if 0 //remove tve
	//printk("###############%s, status = %d\n",__FUNCTION__,VBE_AVE_Global_Status);
	if(VBE_AVE_Global_Status != VBE_AVE_CONNECT_DONE){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n HAL_VBE_AVE_SetATVWatching fail. Source is not VBE_AVE_CONNECT_DONE.\n");
		return;
	}

	if(AVEInput == KADP_VSC_SCALER1){
		// DTV watching
         		// do nothing
     	}
      	else if ((AVEInput == KADP_TUNER_OUTPUT) && (bIsATVWatching == TRUE)){
		//ATV Watching, Buf Clamp Off
      	}
      	else if ((AVEInput == KADP_TUNER_OUTPUT) && (bIsATVWatching == FALSE)){
		//ATV Not Watching, Buf Clamp On
      	}
#endif
}

void HAL_VBE_AVE_VBI_SetInsert(KADP_VBE_AVE_VBI_TYPE_T type, UINT8 OnOff){
#if 0 //remove tve
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_AVE_Global_Status);
	if(VBE_AVE_Global_Status != VBE_AVE_CONNECT_DONE){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n HAL_VBE_AVE_VBI_SetInsert fail. Source is not VBE_AVE_CONNECT_DONE.\n");
		return;
	}
	switch(type){
		case KADP_VBE_AVE_VBI_PAL_TELETEXT:
			drvif_module_tve_vbi_setting(OnOff);
			break;

		case KADP_VBE_AVE_VBI_PAL_WSS:
			drvif_module_tve_wss_setting(OnOff);
			break;

		case KADP_VBE_AVE_VBI_PAL_VPS:
			drvif_module_tve_vps_setting(OnOff);
			break;

		case KADP_VBE_AVE_VBI_NTSC_CC608:
			drvif_module_tve_cc_setting(OnOff);
			break;

		default:
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"VBI type is error 1!!");
			break;
	}
#ifdef CONFIG_PM
	if(OnOff == TRUE){
		vbe_ave_suspend_resume.VBI_DATA_ENALE_SUSPEND_RESUME = TRUE;
		vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME = type;
	}
	else{
		vbe_ave_suspend_resume.VBI_DATA_ENALE_SUSPEND_RESUME = FALSE;
		vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME = KADP_VBE_AVE_VBI_MAX_SERVICE;
	}
#endif
#endif
}
#if 0 //remove tve
#define TTX_DATA_MAX_SIZE 16*42 //42 bytes per line, total 16 lines and use 2-buffer
#define TTX_DATA_BUFFER_0	1
#define TTX_DATA_BUFFER_1	0
static UINT8 *ttx_data_pointer;
static unsigned long  ttx_vir_addr, ttx_vir_addr_noncache;
static unsigned int  ttx_phy_addr;
static UINT8 ttx_data_first_run_done = false;
static UINT8 ttx_data_buffer_index = TTX_DATA_BUFFER_0;
#endif
void HAL_VBE_AVE_VBI_InsertData (KADP_VBE_AVE_VBI_TYPE_T type, UINT32 nrLine, UINT32 *pLines, UINT32 size, UINT8 *pData){
#if 0 //remove tve
	Struct_TVE_VPS_DATA *VPS_DATA;
//	unsigned int  /*vps_vir_addr, */vps_vir_addr_noncache;
//	unsigned int  vps_phy_addr;
	unsigned int insert_vbi_data = 0, i = 0;
	UINT8 pline_count = 0;
	unsigned int top_line_position = 0, bottom_line_position = 0;

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_AVE_Global_Status);
	if(VBE_AVE_Global_Status != VBE_AVE_CONNECT_DONE){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n HAL_VBE_AVE_VBI_InsertData fail. Source is not VBE_AVE_CONNECT_DONE.\n");
		return;
	}
	switch(type){
		case KADP_VBE_AVE_VBI_PAL_TELETEXT:
			//memory allocate
			if(ttx_data_first_run_done == false){
				ttx_vir_addr = (unsigned long)dvr_malloc_uncached(sizeof(unsigned char)*TTX_DATA_MAX_SIZE*2, (void**)&ttx_vir_addr_noncache);//use 2-buffer
				//ttx_phy_addr = (unsigned int)virt_to_phys((void*)ttx_vir_addr);
				ttx_phy_addr = (unsigned int)dvr_to_phys((void*)ttx_vir_addr);
				ttx_data_pointer = (void*)ttx_vir_addr_noncache;
				ttx_data_buffer_index = TTX_DATA_BUFFER_0;
				ttx_data_first_run_done = true;
				//printk("[crixus]TTX data furst do OK!!!!!\n");
			}
			else{
				//set the data pointer
				if(ttx_data_buffer_index == TTX_DATA_BUFFER_0){
					ttx_data_buffer_index = TTX_DATA_BUFFER_1;//change the buffer index
					ttx_data_pointer = ttx_data_pointer + sizeof(unsigned char)*TTX_DATA_MAX_SIZE;//change the data pointer to buffer 1
					//printk("[crixus]TTX data chanhe to buffer 1~~~\n");
				}
				else if(ttx_data_buffer_index == TTX_DATA_BUFFER_1){
					ttx_data_buffer_index = TTX_DATA_BUFFER_0;//change the buffer index
					ttx_data_pointer = ttx_data_pointer - sizeof(unsigned char)*TTX_DATA_MAX_SIZE;//change the data pointer to buffer 0
					//printk("[crixus]TTX data chanhe to buffer 0~~~\n");
				}
			}

			memset(ttx_data_pointer,0x0,sizeof(unsigned char)*size);
			memcpy(ttx_data_pointer,pData,sizeof(unsigned char)*size);

			//for(i=0;i<size;i++)
				//printk("ttx_data_pointer[%d] = %x\n",i,ttx_data_pointer[i]);

			//check the line numbr
			for(i=0;i<32;i++){
				pline_count++;
				//printk("pLines[%d] = %d\n",i,pLines[i]);
				if(pLines[i] >= 288){
					top_line_position = pLines[0];
					bottom_line_position = pLines[i];
					pline_count = pline_count -1;
					break;
				}
			}

			//set tt vbi data total line number
			drvif_module_tve_vbi_tt_line_num(pline_count);
			//set top and bottom field lone position
			drvif_module_tve_vbi_pos(top_line_position,bottom_line_position);
			//set memory address
			drvif_module_tve_vbi_memory_setting(ttx_phy_addr);
			//edge trigger to change buffer
			drvif_module_tve_vbidma_trigger(ttx_data_buffer_index);
			break;

		case KADP_VBE_AVE_VBI_PAL_WSS:
			//WSS mode use 2 bytes for each line
			insert_vbi_data = ((unsigned int)pData[1] << 8) | pData[0];
			drvif_module_tve_wss_data(insert_vbi_data);
			drvif_module_tve_wss_pos((pLines[0]-1));//there is one line inaccuracy
			break;

		case KADP_VBE_AVE_VBI_PAL_VPS:
			//memory allocate
		//	vps_vir_addr = (unsigned int)dvr_malloc_uncached(sizeof(Struct_TVE_VPS_DATA), (void**)&vps_vir_addr_noncache);
			//phy_addr = (unsigned int)virt_to_phys((void*)vir_addr);
		//	VPS_DATA = (Struct_TVE_VPS_DATA *)vps_vir_addr_noncache;

			//VPS mode use 15 bytes for each line
			VPS_DATA = (Struct_TVE_VPS_DATA *)pData;
			drvif_module_tve_vps_data(VPS_DATA);
			drvif_module_tve_vps_pos(pLines[0]);
		//	dvr_free((void *)vps_vir_addr);
			break;

		case KADP_VBE_AVE_VBI_NTSC_CC608:
			//CC mode use 2 bytes for each line
			insert_vbi_data = ((unsigned int)pData[1] << 8) | pData[0];
			drvif_module_tve_cc_data(insert_vbi_data,insert_vbi_data);
			break;

		default:
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"VBI type is error 2!!");
			break;
	}
#endif
}

void HAL_VBE_AVE_SetVCRWinBlank(bool bOnOff){
#if 0 //remove tve
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_AVE_Global_Status);
	if(VBE_AVE_Global_Status != VBE_AVE_CONNECT_DONE){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n HAL_VBE_AVE_SetVCRWinBlank fail. Source is not VBE_AVE_CONNECT_DONE.\n");
		return;
	}
	if(vbe_ave_input_index == KADP_TUNER_OUTPUT){//ATV mute=>disable DAC
		if(bOnOff == true)
			drvif_module_tve_AVout_MODE(VDAC_TV_SRC_SEL_IFD_DEBUG);
		else
			drvif_module_tve_AVout_MODE(VDAC_TV_SRC_SEL_TV_TVE);
	}
	else{//DTV mute
		drvif_module_tve_forcebg(bOnOff);
	}
#endif
}
#ifdef CONFIG_PM
//VBE suspend & resume
void vbe_ave_vdac_suspend(void){
	//VDAC
#if 0 //Fix error by Will Magellan2
	vbe_ave_suspend_resume.IFD_ANALOG_VDAC_VDBSO_S_R=IoReg_Read32(IFD_ANALOG_VDAC_VDBSO_VADDR);
	vbe_ave_suspend_resume.IFD_ANALOG_VDAC_S_R=IoReg_Read32(IFD_ANALOG_VDAC_VADDR);
	vbe_ave_suspend_resume.IFD_ANALOG_VADC_IDACO_CTRL1_S_R=IoReg_Read32(IFD_ANALOG_VADC_IDACO_CTRL1_VADDR);
	vbe_ave_suspend_resume.IFD_ANALOG_VDAC_IDACO_CTRL2_S_R=IoReg_Read32(IFD_ANALOG_VDAC_IDACO_CTRL2_VADDR);
	vbe_ave_suspend_resume.IFD_ANALOG_VDAC_SRC_SEL_S_R=IoReg_Read32(IFD_ANALOG_VDAC_SRC_SEL_VADDR);
#endif
}

//VBE suspend & resume
void vbe_ave_tve_dma_suspend(void){
#if 0 //remove tve
	//TVEDMA
	vbe_ave_suspend_resume.TVE_DMA_TVE_VDDMA_S_R=IoReg_Read32(TVE_DMA_TVE_VDDMA_reg);
	vbe_ave_suspend_resume.TVE_DMA_TVEVDDMA_SATRT0_S_R=IoReg_Read32(TVE_DMA_TVEVDDMA_SATRT0_reg);
	vbe_ave_suspend_resume.TVE_DMA_TVEVDDMA_SATRT1_S_R=IoReg_Read32(TVE_DMA_TVEVDDMA_SATRT1_reg);
	vbe_ave_suspend_resume.TVE_DMA_TVEVDDMA_SATRT2_S_R=IoReg_Read32(TVE_DMA_TVEVDDMA_SATRT2_reg);
	vbe_ave_suspend_resume.TVE_DMA_TVEVDDMA_LINESTEP_S_R=IoReg_Read32(TVE_DMA_TVEVDDMA_LINESTEP_reg);
#endif
}

void vbe_ave_vdac_resume(void){
	//VDAC
#if 0 //Fix error by Will Magellan2
	IoReg_Write32(IFD_ANALOG_VDAC_VDBSO_VADDR,vbe_ave_suspend_resume.IFD_ANALOG_VDAC_VDBSO_S_R);
	IoReg_Write32(IFD_ANALOG_VDAC_VADDR,vbe_ave_suspend_resume.IFD_ANALOG_VDAC_S_R);
	IoReg_Write32(IFD_ANALOG_VADC_IDACO_CTRL1_VADDR,vbe_ave_suspend_resume.IFD_ANALOG_VADC_IDACO_CTRL1_S_R);
	IoReg_Write32(IFD_ANALOG_VDAC_IDACO_CTRL2_VADDR,vbe_ave_suspend_resume.IFD_ANALOG_VDAC_IDACO_CTRL2_S_R);
	IoReg_Write32(IFD_ANALOG_VDAC_SRC_SEL_VADDR,vbe_ave_suspend_resume.IFD_ANALOG_VDAC_SRC_SEL_S_R);
#endif
}

void vbe_ave_tve_dma_resume(void){
#if 0 //remove tve
	//TVEDMA
	IoReg_Write32(TVE_DMA_TVE_VDDMA_reg,vbe_ave_suspend_resume.TVE_DMA_TVE_VDDMA_S_R);
	IoReg_Write32(TVE_DMA_TVEVDDMA_SATRT0_reg,vbe_ave_suspend_resume.TVE_DMA_TVEVDDMA_SATRT0_S_R);
	IoReg_Write32(TVE_DMA_TVEVDDMA_SATRT1_reg,vbe_ave_suspend_resume.TVE_DMA_TVEVDDMA_SATRT1_S_R);
	IoReg_Write32(TVE_DMA_TVEVDDMA_SATRT2_reg,vbe_ave_suspend_resume.TVE_DMA_TVEVDDMA_SATRT2_S_R);
	IoReg_Write32(TVE_DMA_TVEVDDMA_LINESTEP_reg,vbe_ave_suspend_resume.TVE_DMA_TVEVDDMA_LINESTEP_S_R);
#endif
}


void vbe_ave_dmavgip_i3ddma_suspend(void){
#if 0 //remove tve
	//DMAVGIP
	vbe_ave_suspend_resume.DMA_VGIP_DMA_VGIP_CTRL_S_R=IoReg_Read32(DMA_VGIP_DMA_VGIP_CTRL_reg);
	vbe_ave_suspend_resume.DMA_VGIP_DMA_VGIP_ACT_HSTA_WIDTH_S_R=IoReg_Read32(DMA_VGIP_DMA_VGIP_ACT_HSTA_Width_reg);
	vbe_ave_suspend_resume.DMA_VGIP_DMA_VGIP_ACT_VSTA_LENGTH_S_R=IoReg_Read32(DMA_VGIP_DMA_VGIP_ACT_VSTA_Length_reg);
	vbe_ave_suspend_resume.DMA_VGIP_DMA_VGIP_DELAY_S_R=IoReg_Read32(DMA_VGIP_DMA_VGIP_DELAY_reg);
	vbe_ave_suspend_resume.DMA_VGIP_DMA_VGIP_CTS_FIFO_CTL_S_R=IoReg_Read32(DMA_VGIP_DMA_VGIP_CTS_FIFO_CTL_reg);

	//I3DDMAcolorspace
	vbe_ave_suspend_resume.I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_CTRL_S_R=IoReg_Read32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_CTRL_reg);
	vbe_ave_suspend_resume.I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M1_S_R=IoReg_Read32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB_M11_M12_reg);
	vbe_ave_suspend_resume.I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M2_S_R=IoReg_Read32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB_M22_M23_reg);
	vbe_ave_suspend_resume.I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M3_S_R=IoReg_Read32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB_M31_M32_reg);
	vbe_ave_suspend_resume.I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_Y_S_R=IoReg_Read32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB_Yo_reg);

	//I3DDMAUZD
	vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_HSD_CTRL0_S_R=IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Ctrl0_reg);
	vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_VSD_CTRL0_S_R=IoReg_Read32(H3DDMA_HSD_I3DDMA_VSD_Ctrl0_reg);
	vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_UZD_FIR_COEF_TAB1_C0_S_R=IoReg_Read32(H3DDMA_HSD_I3DDMA_UZD_FIR_Coef_Tab1_C0_reg);
	vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_UZD_FIR_COEF_TAB2_C0_S_R=IoReg_Read32(H3DDMA_HSD_I3DDMA_UZD_FIR_Coef_Tab2_C0_reg);
	vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_HSD_SCALE_HOR_FACTOR_S_R=IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Scale_Hor_Factor_reg);
	vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_VSD_SCALE_VER_FACTOR_S_R=IoReg_Read32(H3DDMA_HSD_I3DDMA_VSD_Scale_Ver_Factor_reg);
	vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_HSD_HOR_SEGMENT_S_R=IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Hor_Segment_reg);
	//vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_HSD_HOR_DELTA1_S_R=IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Hor_Delta1_reg);		//Merlin5 removed
	vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_VSD_INITIAL_VALUE_S_R=IoReg_Read32(H3DDMA_HSD_I3DDMA_VSD_Initial_Value_reg);
	vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_HSD_INITIAL_VALUE_S_R=IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Initial_Value_reg);

	//I3DDMACap
	//vbe_ave_suspend_resume.I3DDMA_CAP_BOUNDARYADDR2_S_R=IoReg_Read32(H3DDMA_Cap_BoundaryAddr2_reg);	//Merlin5 removed
	//vbe_ave_suspend_resume.I3DDMA_CAP_BOUNDARYADDR1_S_R=IoReg_Read32(H3DDMA_Cap_BoundaryAddr1_reg);	//Merlin5 removed
	vbe_ave_suspend_resume.I3DDMA_LR_SEPARATE_CTRL1_S_R=IoReg_Read32(H3DDMA_LR_Separate_CTRL1_reg);
	vbe_ave_suspend_resume.I3DDMA_LR_SEPARATE_CTRL2_S_R=IoReg_Read32(H3DDMA_LR_Separate_CTRL2_reg);
	//vbe_ave_suspend_resume.I3DDMA_CAP_CTL1_S_R=IoReg_Read32(H3DDMA_Cap_CTL1_reg);	//Merlin5 removed
	//vbe_ave_suspend_resume.I3DDMA_CAP_CTL0_S_R=IoReg_Read32(H3DDMA_Cap_CTL0_reg);	//Merlin5 removed
	vbe_ave_suspend_resume.I3DDMA_TG_V1_END_S_R=IoReg_Read32(H3DDMA_TG_v1_end_reg);
	vbe_ave_suspend_resume.I3DDMA_I3DDMA_ENABLE_S_R=IoReg_Read32(H3DDMA_I3DDMA_enable_reg);
	vbe_ave_suspend_resume.I3DDMA_BYTE_CHANNEL_SWAP_S_R=IoReg_Read32(H3DDMA_I3DDMA_ctrl_0_reg);
	//vbe_ave_suspend_resume.I3DDMA_CAP_L1_START_S_R=IoReg_Read32(H3DDMA_Cap_L1_Start_reg);	//Merlin5 removed
	//vbe_ave_suspend_resume.I3DDMA_CAP_L2_START_S_R=IoReg_Read32(H3DDMA_Cap_L2_Start_reg);	//Merlin5 removed
	//vbe_ave_suspend_resume.I3DDMA_CAP_L3_START_S_R=IoReg_Read32(H3DDMA_Cap_L3_Start_reg);	//Merlin5 removed
#endif
}

void vbe_ave_dmavgip_i3ddma_resume(void){
#if 0 //remove tve
	//DMA VGIP
	IoReg_Write32(DMA_VGIP_DMA_VGIP_CTRL_reg,vbe_ave_suspend_resume.DMA_VGIP_DMA_VGIP_CTRL_S_R);
	IoReg_Write32(DMA_VGIP_DMA_VGIP_ACT_HSTA_Width_reg,vbe_ave_suspend_resume.DMA_VGIP_DMA_VGIP_ACT_HSTA_WIDTH_S_R);
	IoReg_Write32(DMA_VGIP_DMA_VGIP_ACT_VSTA_Length_reg,vbe_ave_suspend_resume.DMA_VGIP_DMA_VGIP_ACT_VSTA_LENGTH_S_R);
	IoReg_Write32(DMA_VGIP_DMA_VGIP_DELAY_reg,vbe_ave_suspend_resume.DMA_VGIP_DMA_VGIP_DELAY_S_R);
	IoReg_Write32(DMA_VGIP_DMA_VGIP_CTS_FIFO_CTL_reg,vbe_ave_suspend_resume.DMA_VGIP_DMA_VGIP_CTS_FIFO_CTL_S_R);

	//I3DDMA color space
	IoReg_Write32(H3DDMA_HSD_I3DDMA_VSD_Ctrl0_reg,vbe_ave_suspend_resume.I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_CTRL_S_R);
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB_M11_M12_reg,vbe_ave_suspend_resume.I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M1_S_R);
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB_M13_M21_reg,vbe_ave_suspend_resume.I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M2_S_R);
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB_M31_M32_reg,vbe_ave_suspend_resume.I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M3_S_R);
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB_Yo_reg,vbe_ave_suspend_resume.I3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_Y_S_R);

	//I3DDMA UZD
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Ctrl0_reg,vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_HSD_CTRL0_S_R);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_VSD_Ctrl0_reg,vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_VSD_CTRL0_S_R);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_UZD_FIR_Coef_Tab1_C0_reg,vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_UZD_FIR_COEF_TAB1_C0_S_R);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_UZD_FIR_Coef_Tab2_C0_reg,vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_UZD_FIR_COEF_TAB2_C0_S_R);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Scale_Hor_Factor_reg,vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_HSD_SCALE_HOR_FACTOR_S_R);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_VSD_Scale_Ver_Factor_reg,vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_VSD_SCALE_VER_FACTOR_S_R);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Hor_Segment_reg,vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_HSD_HOR_SEGMENT_S_R);
	//IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Hor_Delta1_reg,vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_HSD_HOR_DELTA1_S_R);			//Merlin5 removed
	IoReg_Write32(H3DDMA_HSD_I3DDMA_VSD_Initial_Value_reg,vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_VSD_INITIAL_VALUE_S_R);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Initial_Value_reg,vbe_ave_suspend_resume.I3DDMA_SCALEDOWN_HSD_INITIAL_VALUE_S_R);

	//I3DDMA Cap
	//IoReg_Write32(H3DDMA_Cap_BoundaryAddr2_reg,vbe_ave_suspend_resume.I3DDMA_CAP_BOUNDARYADDR2_S_R);	//Merlin5 removed
	//IoReg_Write32(H3DDMA_Cap_BoundaryAddr1_reg,vbe_ave_suspend_resume.I3DDMA_CAP_BOUNDARYADDR1_S_R);	//Merlin5 removed
	IoReg_Write32(H3DDMA_LR_Separate_CTRL1_reg,vbe_ave_suspend_resume.I3DDMA_LR_SEPARATE_CTRL1_S_R);
       	IoReg_Write32(H3DDMA_LR_Separate_CTRL2_reg,vbe_ave_suspend_resume.I3DDMA_LR_SEPARATE_CTRL2_S_R);
	//IoReg_Write32(H3DDMA_Cap_CTL1_reg,vbe_ave_suspend_resume.I3DDMA_CAP_CTL1_S_R);						//Merlin5 removed
	//IoReg_Write32(H3DDMA_Cap_CTL0_reg,vbe_ave_suspend_resume.I3DDMA_CAP_CTL0_S_R);						//Merlin5 removed
 	IoReg_Write32(H3DDMA_TG_v1_end_reg,vbe_ave_suspend_resume.I3DDMA_TG_V1_END_S_R);
 	IoReg_Write32(H3DDMA_I3DDMA_enable_reg,vbe_ave_suspend_resume.I3DDMA_I3DDMA_ENABLE_S_R);
	IoReg_Write32(H3DDMA_I3DDMA_ctrl_0_reg,vbe_ave_suspend_resume.I3DDMA_BYTE_CHANNEL_SWAP_S_R);
	//IoReg_Write32(H3DDMA_Cap_L1_Start_reg,vbe_ave_suspend_resume.I3DDMA_CAP_L1_START_S_R);				//Merlin5 removed
	//IoReg_Write32(H3DDMA_Cap_L2_Start_reg,vbe_ave_suspend_resume.I3DDMA_CAP_L2_START_S_R);				//Merlin5 removed
	//IoReg_Write32(H3DDMA_Cap_L3_Start_reg,vbe_ave_suspend_resume.I3DDMA_CAP_L3_START_S_R);				//Merlin5 removed
#endif
}

void vbe_ave_vbidata_tt_suspend(void){
#if 0 //remove tve
	//VBI DATA - TT
	vbe_ave_suspend_resume.TT_CTRL_S_R=IoReg_Read32(TVE_tt_ctrl_reg);
	vbe_ave_suspend_resume.TT_VPOS_S_R=IoReg_Read32(TVE_tt_vpos_reg);
	vbe_ave_suspend_resume.TVE_DMA_TVEVBIDMA_CTRL_S_R=IoReg_Read32(TVE_DMA_TVEVBIDMA_CTRL_reg);
	vbe_ave_suspend_resume.TVE_DMA_TVEVBIDMA_START_S_R=IoReg_Read32(TVE_DMA_TVEVBIDMA_START_reg);
	vbe_ave_suspend_resume.TVE_DMA_TVEVBIDMA_READ_WINDOW_S_R=IoReg_Read32(TVE_DMA_TVEVBIDMA_READ_WINDOW_reg);
#endif
}

void vbe_ave_vbidata_wss_suspend(void){
#if 0 //remove tve
	//VBI DATA - WSS
	vbe_ave_suspend_resume.WSS_CTRL_S_R=IoReg_Read32(TVE_wss_ctrl_reg);
	vbe_ave_suspend_resume.WSS_POS_S_R=IoReg_Read32(TVE_wss_pos_reg);
#endif
}

void vbe_ave_vbidata_vps_suspend(void){
#if 0 //remove tve
	//VBI DATA - VPS
	vbe_ave_suspend_resume.VPS_CTRL_S_R=IoReg_Read32(TVE_vps_ctrl_reg);
	vbe_ave_suspend_resume.VPS_DATA_0_S_R=IoReg_Read32(TVE_vps_data_0_reg);
	vbe_ave_suspend_resume.VPS_DATA_1_S_R=IoReg_Read32(TVE_vps_data_1_reg);
	vbe_ave_suspend_resume.VPS_DATA_2_S_R=IoReg_Read32(TVE_vps_data_2_reg);
	vbe_ave_suspend_resume.VPS_DATA_3_S_R=IoReg_Read32(TVE_vps_data1_reg);
#endif
}

void vbe_ave_vbidata_cc_suspend(void){
#if 0 //remove tve
	//VBI DATA - CC
	vbe_ave_suspend_resume.IP_CCD_ENBL_S_R=IoReg_Read32(TVE_ip_ccd_enbl_reg);
	vbe_ave_suspend_resume.IP_CCD_ODD_0_S_R=IoReg_Read32(TVE_ip_ccd_odd_0_reg);
	vbe_ave_suspend_resume.IP_CCD_ODD_1_S_R=IoReg_Read32(TVE_ip_ccd_odd_1_reg);
	vbe_ave_suspend_resume.IP_CCD_EVEN_0_S_R=IoReg_Read32(TVE_ip_ccd_even_0_reg);
	vbe_ave_suspend_resume.IP_CCD_EVEN_1_S_R=IoReg_Read32(TVE_ip_ccd_even_1_reg);
#endif
}

void vbe_ave_vbidata_tt_resume(void){
#if 0 //remove tve
	//VBI DATA - TT
	IoReg_Write32(TVE_tt_ctrl_reg,vbe_ave_suspend_resume.TT_CTRL_S_R);
	IoReg_Write32(TVE_tt_vpos_reg,vbe_ave_suspend_resume.TT_VPOS_S_R);
	IoReg_Write32(TVE_DMA_TVEVBIDMA_CTRL_reg,vbe_ave_suspend_resume.TVE_DMA_TVEVBIDMA_CTRL_S_R);
	IoReg_Write32(TVE_DMA_TVEVBIDMA_START_reg,vbe_ave_suspend_resume.TVE_DMA_TVEVBIDMA_START_S_R);
	IoReg_Write32(TVE_DMA_TVEVBIDMA_READ_WINDOW_reg,vbe_ave_suspend_resume.TVE_DMA_TVEVBIDMA_READ_WINDOW_S_R);
#endif
}

void vbe_ave_vbidata_wss_resume(void){
#if 0 //remove tve
	//VBI DATA - WSS
	IoReg_Write32(TVE_wss_ctrl_reg,vbe_ave_suspend_resume.WSS_CTRL_S_R);
	IoReg_Write32(TVE_wss_pos_reg,vbe_ave_suspend_resume.WSS_POS_S_R);
#endif

}

void vbe_ave_vbidata_vps_resume(void){
#if 0 //remove tve
	//VBI DATA - VPS
	IoReg_Write32(TVE_vps_ctrl_reg,vbe_ave_suspend_resume.VPS_CTRL_S_R);
	IoReg_Write32(TVE_vps_data_0_reg,vbe_ave_suspend_resume.VPS_DATA_0_S_R);
	IoReg_Write32(TVE_vps_data_1_reg,vbe_ave_suspend_resume.VPS_DATA_1_S_R);
	IoReg_Write32(TVE_vps_data_2_reg,vbe_ave_suspend_resume.VPS_DATA_2_S_R);
	IoReg_Write32(TVE_vps_data1_reg,vbe_ave_suspend_resume.VPS_DATA_3_S_R);
#endif
}

void vbe_ave_vbidata_cc_resume(void){
#if 0 //remove tve
	//VBI DATA - CC
	IoReg_Write32(TVE_ip_ccd_enbl_reg,vbe_ave_suspend_resume.IP_CCD_ENBL_S_R);
	IoReg_Write32(TVE_ip_ccd_odd_0_reg,vbe_ave_suspend_resume.IP_CCD_ODD_0_S_R);
	IoReg_Write32(TVE_ip_ccd_odd_1_reg,vbe_ave_suspend_resume.IP_CCD_ODD_1_S_R);
	IoReg_Write32(TVE_ip_ccd_even_0_reg,vbe_ave_suspend_resume.IP_CCD_EVEN_0_S_R);
	IoReg_Write32(TVE_ip_ccd_even_1_reg,vbe_ave_suspend_resume.IP_CCD_EVEN_1_S_R);
#endif
}
#endif
/*******************************************************************************
****************************VBE_TRIDFMT DRIVER**********************************
*******************************************************************************/

static unsigned char  VBE_Tridfmt_Global_Status = VBE_TRIDFMT_NOTHING;
static KADP_TRIDTV_INPUT_CONFIG_INFO_T vbe_tridtv_cfg_info;
static KADP_TRIDTV_FMT_CTRL_T vbe_tridtv_fmt;
void HAL_VBE_TRIDFMT_Initialize(void){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_Tridfmt_Global_Status);
	if(VBE_Tridfmt_Global_Status != VBE_TRIDFMT_NOTHING){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n VBE_TRIDFMT_Initialize fail. Source is not VBE_TRIDFMT_NOTHING.\n");
		return;
	}
	VBE_Tridfmt_Global_Status = VBE_TRIDFMT_INIT_DONE;
	return;
}

void HAL_VBE_TRIDFMT_Uninitialize(void){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_Tridfmt_Global_Status);
	if(VBE_Tridfmt_Global_Status != VBE_TRIDFMT_INIT_DONE){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n VBE_TRIDFMT_Uninitialize fail. Source is not VBE_TRIDFMT_INIT_DONE.\n");
		return;
	}
	VBE_Tridfmt_Global_Status = VBE_TRIDFMT_NOTHING;

	return;
}

void HAL_VBE_TRIDFMT_Open(void){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_Tridfmt_Global_Status);
	if(VBE_Tridfmt_Global_Status != VBE_TRIDFMT_INIT_DONE){
		printk("\r\n VBE_TRIDFMT_Open fail. Source is not VBE_TRIDFMT_INIT_DONE.\n");
		return;
	}

	vbe_tridtv_fmt.mode = KADP_VBE_TRIDTV_3DMODE_ON;
	vbe_tridtv_fmt.in_fmt = KADP_VBE_INPUT_TYPE_3DOFF;
	vbe_tridtv_fmt.out_fmt = KADP_VBE_OUT_SINGLE_FS;
	vbe_tridtv_fmt.lr = KADP_VBE_INPUT_LR_SEQ ;
	vbe_tridtv_fmt.depthCtrl = 10;
	vbe_tridtv_fmt.convCtrl = 0;
	vbe_tridtv_fmt.bAutoConvMode = 0;
	//VBE_set_tridfmt_connect(&vbe_tridtv_fmt);

	VBE_Tridfmt_Global_Status = VBE_TRIDFMT_OPEN_DONE;

	return;
}

void HAL_VBE_TRIDFMT_Close(void){
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_Tridfmt_Global_Status);
	if((VBE_Tridfmt_Global_Status != VBE_TRIDFMT_OPEN_DONE) && (VBE_Tridfmt_Global_Status != VBE_TRIDFMT_CONNECT_DONE)){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n VBE_TRIDFMT_Close fail. Source is not VBE_TRIDFMT_OPEN_DONE.\n");
		return;
	}

	//drvif_module_tve_reset();

	VBE_Tridfmt_Global_Status = VBE_TRIDFMT_INIT_DONE;

	return;
}

void HAL_VBE_TRIDFMT_SetScreenOnOff(BOOLEAN  bOnOff){
	set_display_forcebg_mask(SLR_MAIN_DISPLAY, SLR_FORCE_BG_TYPE_3D, bOnOff);
	mute_control(SLR_MAIN_DISPLAY, bOnOff);
}

extern unsigned char rtk_output_connect(unsigned char display);
char VBE_set_tridfmt_connect(KADP_TRIDTV_FMT_CTRL_T *TriFRC){
	unsigned char curmode;
	unsigned char support3Dinput[INPUT_TYPE_MAX]= {
		SLR_3DMODE_2D, SLR_3DMODE_3D_TB, SLR_3DMODE_3D_SBS, SLR_3DMODE_2D,
		SLR_3DMODE_2D, SLR_3DMODE_2D, SLR_3DMODE_2D, SLR_3DMODE_3D_FP,
		SLR_3DMODE_2D, SLR_3DMODE_2D, SLR_3DMODE_3D_SBS, SLR_3DMODE_2D,
		SLR_3DMODE_2D_CVT_3D};
	if(TriFRC == NULL){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"VBE_TRIDFMT_SetFMTMode paramter NULL!!!\n");
		return FALSE;
	}
	if(TriFRC->mode >= KADP_VBE_TRIDTV_3DMODE_MAX || TriFRC->mode  < KADP_VBE_TRIDTV_3DMODE_OFF
		||TriFRC->in_fmt >= KADP_VBE_INPUT_TYPE_MAX || TriFRC->in_fmt < KADP_VBE_INPUT_TYPE_3DOFF
		||TriFRC->out_fmt >= KADP_VBE_OUT_MAX || TriFRC->out_fmt < KADP_VBE_OUT_SINGLE_2D
		||TriFRC->lr >= KADP_VBE_INPUT_LR_MAX || TriFRC->lr  < KADP_VBE_INPUT_LR_SEQ
		||TriFRC->depthCtrl > 20 // || TriFRC->depthCtrl < 0  Coverity CID 16456
		|| TriFRC->convCtrl > 10 || TriFRC->convCtrl < -10){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"VBE_TRIDFMT_SetFMTMode paramter error!!!\n");
		return FALSE;
	}

	if(TriFRC->mode == KADP_VBE_TRIDTV_3DMODE_OFF){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"VBE_TRIDFMT_SetFMTMode OFF!change to 2D!\n");
		if(get_3D_mode_enable() == TRUE){
			set_3D_mode_enable(FALSE);
			set_3D_overscan_enable(FALSE);
			Scaler_Set3DMode(SLR_MAIN_DISPLAY, SLR_3DMODE_2D, TRUE);
			rtk_rerun_scaler(SLR_MAIN_DISPLAY);
		}
		return TRUE;
	}

	if(TriFRC->out_fmt != KADP_VBE_OUT_SINGLE_FS)
		TriFRC->out_fmt = KADP_VBE_OUT_SINGLE_FS;

	if(TriFRC->out_fmt != KADP_VBE_OUT_SINGLE_FS){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"VBE_TRIDFMT_SetFMTMode out format no support!change to 2D!\n");
		if(get_3D_mode_enable() == TRUE){
			set_3D_mode_enable(FALSE);
			set_3D_overscan_enable(FALSE);
			Scaler_Set3DMode(SLR_MAIN_DISPLAY, SLR_3DMODE_2D, TRUE);
  			rtk_output_connect(SLR_MAIN_DISPLAY);
		}
		return TRUE;
	}
	else if(TriFRC->mode == KADP_VBE_TRIDTV_3DMODE_ON){
		curmode = TriFRC->in_fmt;
		curmode = support3Dinput[(curmode < KADP_VBE_INPUT_TYPE_MAX? curmode: KADP_VBE_INPUT_TYPE_3DOFF)];

		if(curmode == SLR_3DMODE_2D){
			if(get_3D_mode_enable() == TRUE){
				set_3D_mode_enable(FALSE);
				set_3D_overscan_enable(FALSE);
				Scaler_Set3DMode(SLR_MAIN_DISPLAY, SLR_3DMODE_2D, TRUE);
  				rtk_output_connect(SLR_MAIN_DISPLAY);
				return TRUE;
			}
			else{
				return TRUE;
			}
		}

		Scaler_Set3DMode(SLR_MAIN_DISPLAY, curmode, TRUE);
		 if (Get_PANEL_SCALER_2D_3D_CVT_HWSHIFT_ENABLE() && TriFRC->in_fmt == KADP_VBE_INPUT_TYPE_2DTO3D){
			// [2D3D] default mode init
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"2d concvt 3d init\n");
			scaler_2Dcvt3D_init();
		}
		 if( drvif_scaler3d_decide_HDMI_framePacking_interlaced_status() && TriFRC->in_fmt == KADP_VBE_INPUT_TYPE_FRAMEPAC){
		 	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"Interlace Fp 3D, change progress to interlace!\n");
			Scaler_DispSetStatus((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY),SLR_DISP_INTERLACE,true);
		 }

		set_3D_mode_enable(TRUE);
		set_3D_overscan_enable(FALSE);
  		rtk_output_connect(SLR_MAIN_DISPLAY);

		Scaler_Set3DLRSwap(TriFRC->lr);

		if(curmode == SLR_3DMODE_2D_CVT_3D)
			Scaler_Set2DCvt3D_Depth(TriFRC->depthCtrl);
		else if((curmode > SLR_3DMODE_2D) && (curmode <SLR_3DMODE_2D_CVT_3D))
		{
			/*change 2d cvt 3d to do depth control*/
			scaler_2Dcvt3D_init();
			scaler_2Dcvt3D_set_userEnableStatus(_ENABLE);
			scaler_2Dcvt3D_set_shifter(Scaler_Get2DCvt3D_Strength(), Scaler_Get2DCvt3D_Depth());
			scaler_2Dcvt3D_set_tilt_depth(scaler_2Dcvt3D_get_tilt_enable());
			Scaler_Set2DCvt3D_Depth(TriFRC->depthCtrl);
		}


		drv_2D_to_3D_shifter_offset(TriFRC->convCtrl);
	}
	return TRUE;
}

char HAL_VBE_TRIDFMT_SetFMTMode(VIDEO_WID_T wId,KADP_TRIDTV_FMT_CTRL_T *TriFRC){
#ifdef CONFIG_DUAL_CHANNEL
	if((wId < VIDEO_WID_MIN)||(wId > VIDEO_WID_MAX)){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"wId id is not ok\n");
		return FALSE;
	}
#else
	if(wId !=VIDEO_WID_0){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"wid id is not ok\n");
		return FALSE;
	}
#endif
	vbe_tridtv_fmt.mode = TriFRC->mode;
	vbe_tridtv_fmt.in_fmt = TriFRC->in_fmt;
	vbe_tridtv_fmt.lr = TriFRC->lr;
	vbe_tridtv_fmt.depthCtrl = TriFRC->depthCtrl;
	vbe_tridtv_fmt.convCtrl = TriFRC->convCtrl;
	vbe_tridtv_fmt.out_fmt = KADP_VBE_OUT_SINGLE_FS;
	vbe_tridtv_fmt.bAutoConvMode = TriFRC->bAutoConvMode;
	VBE_set_tridfmt_connect(&vbe_tridtv_fmt);

	return TRUE;
}

char HAL_VBE_TRIDFMT_SetFMTMode_TEMP(VIDEO_WID_T wId,HAL_TRIDTV_FMT_CTRL_TEMP_T *TriFRC){
#ifdef CONFIG_DUAL_CHANNEL
	if((wId < VIDEO_WID_MIN)||(wId > VIDEO_WID_MAX)){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"wId id is not ok\n");
		return FALSE;
	}
#else
	if(wId !=VIDEO_WID_0){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"wid id is not ok\n");
		return FALSE;
	}
#endif

	vbe_tridtv_fmt.mode = TriFRC->mode;
	vbe_tridtv_fmt.in_fmt = TriFRC->in_fmt;
	vbe_tridtv_fmt.lr = TriFRC->lr;
	vbe_tridtv_fmt.depthCtrl = TriFRC->depthCtrl;
	vbe_tridtv_fmt.convCtrl = TriFRC->convCtrl;
	vbe_tridtv_fmt.out_fmt = KADP_VBE_OUT_SINGLE_FS;
	vbe_tridtv_fmt.bAutoConvMode = TriFRC->bAutoConvMode;
	VBE_set_tridfmt_connect(&vbe_tridtv_fmt);

	return TRUE;
}

void HAL_VBE_TRIDFMT_Set3DModeOnOff(KADP_TRIDTV_INPUT_CONFIG_INFO_T *p3DModeInfo){
	vbe_tridtv_fmt.mode = p3DModeInfo->n3DInputMode;
	vbe_tridtv_fmt.in_fmt = p3DModeInfo->n3DInputType;
	vbe_tridtv_fmt.lr = p3DModeInfo->n3DInputLRSeq;
	vbe_tridtv_fmt.depthCtrl = p3DModeInfo->n3DInputDepthCtrl;
	vbe_tridtv_fmt.convCtrl = p3DModeInfo->n3DInputConvertCtrl;
	vbe_tridtv_fmt.out_fmt = KADP_VBE_OUT_SINGLE_FS;
	VBE_set_tridfmt_connect(&vbe_tridtv_fmt);
	return;
}

void HAL_VBE_TRIDFMT_ToggleInputLRFrame(KADP_TRIDTV_INPUT_LR_SEQ_T type){
	if(type >= KADP_INPUT_LR_MAX)
		return;
	if(Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE() == true)
		Scaler_Set3DLRSwap(type);
}

void HAL_VBE_TRIDFMT_SelectInputFormat(KADP_TRIDTV_INPUT_TYPE_T type){
	vbe_tridtv_fmt.in_fmt = type;
	VBE_set_tridfmt_connect(&vbe_tridtv_fmt);
	return;
}

void HAL_VBE_TRIDFMT_SetInputFrameRate(KADP_TRIDTV_INPUT_FREQ_T type){
	//vbe 3D bypass
	return;
}

void HAL_VBE_TRIDFMT_ToggleOutputLRFrame(KADP_TRIDTV_OUTPUT_LR_SEQ_T type){
	if(type >= KADP_VBE_OUTPUT_LR_MAX)
		return;
	if(Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE() == true)
		Scaler_Set3DLRSwap(type);

}

void HAL_VBE_TRIDFMT_SelectOutputFormat(KADP_TRIDTV_OUTPUT_TYPE_T type){
	vbe_tridtv_fmt.out_fmt = (KADP_VBE_3D_OUTPUT)type;
	VBE_set_tridfmt_connect(&vbe_tridtv_fmt);
	return;
}

void HAL_VBE_TRIDFMT_SetOutputFrameRate(KADP_TRIDTV_OUTPUT_FREQ_T type){
	//vbe 3D bypass
	return;
}

void HAL_VBE_TRIDFMT_Get3DCfgInfo(KADP_TRIDTV_CFG_ITEMS_T n3DCfgItems, UINT8 *nCurCfgInfo){
	if(nCurCfgInfo == NULL)
		return;
	if(n3DCfgItems >= KADP_VBE_TRIDTV_CFG_ITEMS_MAX)
		return;
	switch(n3DCfgItems){
		case KADP_VBE_TRIDTV_3DMODE_STATUS:
			*nCurCfgInfo = vbe_tridtv_cfg_info.n3DInputMode;
			break;
		case KADP_VBE_TRIDTV_3D_INPUT_TYPE:
			*nCurCfgInfo = vbe_tridtv_cfg_info.n3DInputType;
			break;
		case KADP_VBE_TRIDTV_3D_INPUT_LR_SEQ:
			*nCurCfgInfo = vbe_tridtv_cfg_info.n3DInputLRSeq;
			break;
		default:
			break;
	}
}

void HAL_VBE_TRIDFMT_Set3DCfgInfo(KADP_TRIDTV_INPUT_CONFIG_INFO_T *p3DModeInfo){
	if(p3DModeInfo == NULL)
		return;

	vbe_tridtv_cfg_info.n3DInputMode = p3DModeInfo->n3DInputMode;
	vbe_tridtv_cfg_info.n3DInputType = p3DModeInfo->n3DInputType;
	vbe_tridtv_cfg_info.n3DInputLRSeq = p3DModeInfo->n3DInputLRSeq;
	vbe_tridtv_cfg_info.n3DInputDepthCtrl = p3DModeInfo->n3DInputDepthCtrl;
	vbe_tridtv_cfg_info.n3DInputConvertCtrl = p3DModeInfo->n3DInputConvertCtrl;
	vbe_tridtv_cfg_info.bPositiveDepth = p3DModeInfo->bPositiveDepth;
	vbe_tridtv_cfg_info.bAutoConvMode = p3DModeInfo->bAutoConvMode;

}

void HAL_VBE_TRIDFMT_SetConvValue(char  s8ConvValue){
	if( Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), SLR_DISP_3D_3DTYPE) == SLR_3D_2D_CVT_3D) {
		drv_2D_to_3D_shifter_offset(s8ConvValue);
	}
	else {
		scaler_2Dcvt3D_init();
		scaler_2Dcvt3D_set_userEnableStatus(_ENABLE);
		scaler_2Dcvt3D_set_shifter(Scaler_Get2DCvt3D_Strength(), Scaler_Get2DCvt3D_Depth());
		scaler_2Dcvt3D_set_tilt_depth(scaler_2Dcvt3D_get_tilt_enable());
		/*Scaler_Set2DCvt3D_Depth(s8ConvValue);*/
		drv_2D_to_3D_shifter_offset(s8ConvValue);
	}

}

void HAL_VBE_TRIDFMT_CtrlDepth(KADP_TRIDTV_3DMODE_FLAG_T n3Dmode, UINT8 u8DepthLevel){
	//unsigned char curmode;
	if(n3Dmode == KADP_TRIDTV_3DMODE_ON) {
		/*change 2d cvt 3d to do depth control*/
		scaler_2Dcvt3D_init();
		scaler_2Dcvt3D_set_userEnableStatus(_ENABLE);
		scaler_2Dcvt3D_set_shifter(Scaler_Get2DCvt3D_Strength(), Scaler_Get2DCvt3D_Depth());
		scaler_2Dcvt3D_set_tilt_depth(scaler_2Dcvt3D_get_tilt_enable());
		Scaler_Set2DCvt3D_Depth(u8DepthLevel);
	}
	else if (n3Dmode == KADP_TRIDTV_3DMODE_2DTO3D) {
		Scaler_Set2DCvt3D_Depth(u8DepthLevel);
	}
}

void HAL_VBE_TRIDFMT_AutoConvergenceEnable(BOOLEAN  bOnOff){
	vbe_tridtv_cfg_info.bAutoConvMode = bOnOff;
	//mac3 is not support
}

void HAL_VBE_TRIDFMT_Set3DVideoOutputMode(UINT32 bIsSGMode){
	//vbe 3D bypass
	return;
}

void HAL_VBE_TRIDFMT_Set3DDepthController(UINT32 bOnOff){
	vbe_tridtv_cfg_info.bPositiveDepth = bOnOff;
}

void HAL_VBE_TRIDFMT_Debug(void){
	//vbe 3D bypass
	return;
}

extern DEBUG_SCALER_VSC_STRUCT DbgSclrFlgTkr; // debug scaler flag tracker //extern unsigned int main_opensourceID;
extern void Scaler_SET_VSCDispinfo_WithVFEHMDI(unsigned char display, vfe_hdmi_timing_info_t vfehdmitiminginfo);
extern int drivf_I3DDMA_3D_config(void);
extern void HDMI_set_detect_flag(unsigned char enable);
void HAL_V3D_Initialize (void)
{
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"###############%s, status = %d\n",__FUNCTION__,VBE_Tridfmt_Global_Status);
	if(VBE_Tridfmt_Global_Status != VBE_TRIDFMT_NOTHING){
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"\r\n VBE_TRIDFMT_Initialize fail. Source is not VBE_TRIDFMT_NOTHING.\n");
		return;
	}
	VBE_Tridfmt_Global_Status = VBE_TRIDFMT_INIT_DONE;
	return;
}
char HAL_V3D_Set3DFMT (VIDEO_WID_T wid, V3D_FMT_TYPE_T in_fmt, V3D_FMT_TYPE_T out_fmt)
{
#if 0  //Fixed me later due to rtk_vo.h compiler error
	vfe_hdmi_timing_info_t vfehdmitiminginfo;
	unsigned char curmode;
	unsigned char support3Dinput[INPUT_TYPE_MAX]= {
		SLR_3DMODE_2D, SLR_3DMODE_3D_TB, SLR_3DMODE_3D_SBS, SLR_3DMODE_2D,
		SLR_3DMODE_2D, SLR_3DMODE_2D, SLR_3DMODE_2D, SLR_3DMODE_3D_FP,
		SLR_3DMODE_2D, SLR_3DMODE_2D, SLR_3DMODE_3D_SBS, SLR_3DMODE_3D_FP,
		SLR_3DMODE_2D_CVT_3D};
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"v3d:%d=%d\n",in_fmt, out_fmt);

	curmode = in_fmt;
	curmode = support3Dinput[(curmode < INPUT_TYPE_MAX? curmode: INPUT_TYPE_3DOFF)];

	if(in_fmt > V3D_FMT_MAX || in_fmt < V3D_FMT_2D
		||out_fmt > V3D_FMT_MAX ||out_fmt < V3D_FMT_2D)
	{
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"scaler vsc Set3DForScaler paramter error!!!\n");
		return FALSE;
	}

	set_field_alternative_3d_mode_enable(FALSE);
#if 1
	if(get_line_alternative_3d_mode_enable() == TRUE)
	{
		Scaler_DispSetInputInfo(SLR_INPUT_THROUGH_I3DDMA, false);
		set_line_alternative_3d_mode_enable(FALSE);
		DbgSclrFlgTkr.main_opensourceID =_UNKNOWN_INPUT;
	}
#endif
	 if(in_fmt == V3D_FMT_MAX  ||out_fmt == V3D_FMT_MAX)
	{

		if(get_3D_mode_enable() == TRUE)
		{
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"scaler vsc Set3DForScaler MAXNUM!change to 2D!\n");
			set_3D_mode_enable(FALSE);
			set_3D_overscan_enable(FALSE);
			Scaler_Set3DMode(SLR_MAIN_DISPLAY, SLR_3DMODE_2D, TRUE);
			down(&VBE_Semaphore);
			if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE)
				rtk_output_connect(SLR_MAIN_DISPLAY);
			up(&VBE_Semaphore);
		}
		return TRUE;
	}


	/*force set the out_fmt SC_OUT_SINGLE_FS*/
	if(out_fmt != V3D_FMT_FRAMESEQ)
		out_fmt = V3D_FMT_FRAMESEQ;
#if 0
	if(out_fmt != V3D_FMT_FRAMESEQ)
	{
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"scaler vsc Set3DForScaler out format no support!change to 2D!\n");
		if(get_3D_mode_enable() == TRUE)
		{
			set_3D_mode_enable(FALSE);
			set_3D_overscan_enable(FALSE);
			Scaler_Set3DMode(SLR_MAIN_DISPLAY, SLR_3DMODE_2D, TRUE);
			down(&VBE_Semaphore);
			if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE)
				rtk_output_connect(SLR_MAIN_DISPLAY);
			up(&VBE_Semaphore);
		}
		return TRUE;
	}
#endif
	if(in_fmt == V3D_FMT_DUALSTREAM)
	{
		set_3D_mode_enable(TRUE);
		set_3D_overscan_enable(FALSE);
		Scaler_Set3DMode(SLR_MAIN_DISPLAY, SLR_3DMODE_3D_FP, TRUE);
		down(&VBE_Semaphore);
		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE)
			rtk_output_connect(SLR_MAIN_DISPLAY);
		up(&VBE_Semaphore);

		return TRUE;
	}

	if(in_fmt == V3D_FMT_LINE_ALTERNATIVE/*&& DisplayModeInputInfo.type == VSC_INPUTSRC_HDMI*/)
	{
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"input is line alternative\n");
		Scaler_Set3DMode(SLR_MAIN_DISPLAY, SLR_3DMODE_3D_LBL, TRUE);

		set_3D_mode_enable(TRUE);
		set_3D_overscan_enable(FALSE);

		 //DisplayModeInputInfo.type = VSC_INPUTSRC_VDEC;

		if(0!=vfe_hdmi_drv_get_display_timing_info(&vfehdmitiminginfo, ((wid==VIDEO_WID_0)?SLR_MAIN_DISPLAY : SLR_SUB_DISPLAY)))
			return FALSE;
		Scaler_SET_VSCDispinfo_WithVFEHMDI(SLR_MAIN_DISPLAY,vfehdmitiminginfo);
		drvif_I3DDMA_Init();
		HDMI_set_detect_flag(FALSE);
		Scaler_DispSetInputInfo(SLR_INPUT_THROUGH_I3DDMA, true);
		set_line_alternative_3d_mode_enable(TRUE);
		drivf_I3DDMA_3D_config();

		Scaler_Set3DMode(SLR_MAIN_DISPLAY, SLR_3DMODE_3D_FP, TRUE);
		Scaler_Disp3dSetInfo(SLR_MAIN_DISPLAY, SLR_DISP_3D_3DTYPE,SLR_3D_FRAME_PACKING);
		Scaler_Set3DMode_Attr(SLR_MAIN_DISPLAY, SLR_3DMODE_3D_FP);
		set_vo_3d_mode(VO_2D_MODE);

		DbgSclrFlgTkr.main_opensourceID =_UNKNOWN_INPUT;
		down(&VBE_Semaphore);
		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE)
			rtk_output_connect(SLR_MAIN_DISPLAY);
		up(&VBE_Semaphore);

		return TRUE;


	}
	else if(in_fmt == V3D_FMT_FIELD_ALTERNATIVE/*&& DisplayModeInputInfo.type == VSC_INPUTSRC_HDMI*/)
	{
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"input is feild alternative\n");
		Scaler_DispSetStatus((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY),SLR_DISP_INTERLACE,true);
		set_3D_mode_enable(TRUE);
		set_3D_overscan_enable(FALSE);
		set_field_alternative_3d_mode_enable(TRUE);
		Scaler_Set3DMode(SLR_MAIN_DISPLAY, SLR_3DMODE_3D_FP, TRUE);
		down(&VBE_Semaphore);
		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE)
			rtk_output_connect(SLR_MAIN_DISPLAY);
		up(&VBE_Semaphore);

		 return TRUE;

	}
	if(wid == VIDEO_WID_0)
	{

		if(curmode == SLR_3DMODE_2D)
		{
			if(get_3D_mode_enable() == TRUE)
			{
				set_3D_mode_enable(FALSE);
				set_3D_overscan_enable(FALSE);
				Scaler_Set3DMode(SLR_MAIN_DISPLAY, SLR_3DMODE_2D, TRUE);
				down(&VBE_Semaphore);
				if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE)
					rtk_output_connect(SLR_MAIN_DISPLAY);
				up(&VBE_Semaphore);
				return TRUE;
			}
			else
			{
				return TRUE;
			}
		}

		Scaler_Set3DMode(SLR_MAIN_DISPLAY, curmode, TRUE);
	#if 0
		 if (Get_PANEL_SCALER_2D_3D_CVT_HWSHIFT_ENABLE() && in_fmt == INPUT_TYPE_2DTO3D)
		{
			// [2D3D] default mode init
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"2d concvt 3d init\n");
			scaler_2Dcvt3D_init();
		}
	#endif
		 if( drvif_scaler3d_decide_HDMI_framePacking_interlaced_status() && in_fmt == V3D_FMT_FRAMEPAC)
		 {
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"Interlace Fp 3D, change progress to interlace!\n");
			Scaler_DispSetStatus((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY),SLR_DISP_INTERLACE,true);
		 }

		set_3D_mode_enable(TRUE);
		set_3D_overscan_enable(FALSE);
		down(&VBE_Semaphore);
		if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE)
			rtk_output_connect(SLR_MAIN_DISPLAY);
		up(&VBE_Semaphore);
	}
#endif
	return TRUE;
}


void HAL_V3D_SetLRSeq (V3D_LR_SEQ_T type)
{
	Scaler_Set3DLRSwap(type);
}
void HAL_V3D_CtrlConvergence (INT8 s8ConvValue)
{
	if( Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), SLR_DISP_3D_3DTYPE) == SLR_3D_2D_CVT_3D) {
		drv_2D_to_3D_shifter_offset(s8ConvValue);
	}
	else {
		scaler_2Dcvt3D_init();
		scaler_2Dcvt3D_set_userEnableStatus(_ENABLE);
		scaler_2Dcvt3D_set_shifter(Scaler_Get2DCvt3D_Strength(), Scaler_Get2DCvt3D_Depth());
		scaler_2Dcvt3D_set_tilt_depth(scaler_2Dcvt3D_get_tilt_enable());
		/*Scaler_Set2DCvt3D_Depth(s8ConvValue);*/
		drv_2D_to_3D_shifter_offset(s8ConvValue);
	}
}
void HAL_V3D_CtrlDepth (UINT8 u8DepthLevel)
{
	if( Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), SLR_DISP_3D_3DTYPE) == SLR_3D_2D_CVT_3D) {
		drv_2D_to_3D_shifter_offset(u8DepthLevel);
	}  else {
		/*change 2d cvt 3d to do depth control*/
		scaler_2Dcvt3D_init();
		scaler_2Dcvt3D_set_userEnableStatus(_ENABLE);
		scaler_2Dcvt3D_set_shifter(Scaler_Get2DCvt3D_Strength(), Scaler_Get2DCvt3D_Depth());
		scaler_2Dcvt3D_set_tilt_depth(scaler_2Dcvt3D_get_tilt_enable());
		Scaler_Set2DCvt3D_Depth(u8DepthLevel);
	}
}

void HAL_V3D_SetAutoConvEnable(BOOLEAN bOnOff)
{
	if(bOnOff == TRUE) {
		if( Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), SLR_DISP_3D_3DTYPE) == SLR_3D_2D_CVT_3D) {
			drv_2D_to_3D_shifter_offset(0);
		}  else {
			/*change 2d cvt 3d to do depth control*/
			scaler_2Dcvt3D_init();
			scaler_2Dcvt3D_set_userEnableStatus(_ENABLE);
			scaler_2Dcvt3D_set_shifter(Scaler_Get2DCvt3D_Strength(), Scaler_Get2DCvt3D_Depth());
			scaler_2Dcvt3D_set_tilt_depth(scaler_2Dcvt3D_get_tilt_enable());
			Scaler_Set2DCvt3D_Depth(0);
		}
	}
}

void HAL_V3D_GetAutoDetectingResult (V3D_FMT_TYPE_T * pVideo3Dtype)
{
#if 0  //Fixed me later due to rtk_vo.h compiler error
	unsigned char  curmode;
	if (Scaler_InputSrcGetMainChType() == _SRC_VO)
	{
		if(get_vo_3d_mode() == VO_3D_SIDE_BY_SIDE_HALF)
			*pVideo3Dtype = V3D_FMT_SIDEBYSIDE;
		else if(get_vo_3d_mode() == VO_3D_TOP_AND_BOTTOM)
			*pVideo3Dtype = V3D_FMT_TOPNBOTTOM;
		else
			*pVideo3Dtype = V3D_FMT_2D;
		return;
	}

	Scaler_Set3D_VoAutoDetect_Enable(true);
	check_vo3d_detect_result((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY));
	curmode = modestate_get_vo3d_detect_result();
	switch(curmode)
	{
		case VO_2D_MODE:
			*pVideo3Dtype = V3D_FMT_2D;
			break;
		case VO_3D_SIDE_BY_SIDE_HALF:
			*pVideo3Dtype = V3D_FMT_SIDEBYSIDE;
			break;
		case VO_3D_TOP_AND_BOTTOM:
			*pVideo3Dtype = V3D_FMT_TOPNBOTTOM;
			break;
		default:
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"Can't detect 3D auto mode!\n");
			break;
	}
#endif
	return;
}

void HAL_V3D_SetAutoDetectingType (V3D_FORMAT_TYPE_T mode)
{
	mask_3d_auto_detect |= mode;
}


/*******************************************************************************
****************************VBE DEVICE******************************************
*******************************************************************************/
#ifdef CONFIG_PM
#ifdef CONFIG_HIBERNATION
static int vbe_suspend (struct device *p_dev)
{
	// STD suspend mode
	vbe_suspend_instant_mode = 0;
#if 0
	//VBE_AVE suspend
	if(VBE_AVE_Global_Status == VBE_AVE_OPEN_DONE){
		vbe_ave_vdac_suspend();
	}
	else if(VBE_AVE_Global_Status == VBE_AVE_CONNECT_DONE){
		if(vbe_ave_suspend_resume.ENALE_SUSPEND_RESUME == VBE_AVE_SUSPEND_RESUME_VSC_SCALER){
			vbe_ave_vdac_suspend();
			vbe_ave_tve_dma_suspend();
			vbe_ave_dmavgip_i3ddma_suspend();
		}

	}

	//VBI DATA suspend
	if(vbe_ave_suspend_resume.VBI_DATA_ENALE_SUSPEND_RESUME == TRUE){
		if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_TELETEXT)
			vbe_ave_vbidata_tt_suspend();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_WSS)
			vbe_ave_vbidata_wss_suspend();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_VPS)
			vbe_ave_vbidata_vps_suspend();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_NTSC_CC608)
			vbe_ave_vbidata_cc_suspend();
	}
#endif
	vbe_disp_suspend();
	vpq_memc_disp_suspend_snashop();
	vpq_do_suspend();

	return 0;
}

static int vbe_resume (struct device *p_dev)
{

	//VBE_DISP_TCON resume
	if(vbe_disp_tcon_suspend_resume.ENALE_SUSPEND_RESUME == TRUE){
		HAL_VBE_DISP_TCON_SetClock(TRUE);
	}
#if 0	//remove tve
	//VBE_AVE resume
	if(VBE_AVE_Global_Status == VBE_AVE_OPEN_DONE){
		drvif_tve_resume_setting();
		vbe_ave_vdac_resume();
	}
	else if(VBE_AVE_Global_Status == VBE_AVE_CONNECT_DONE){
		//both ATV and DTV scart out should do this
		drvif_tve_resume_setting();
		vbe_ave_vdac_resume();

		//DTV-scart out
		if(vbe_ave_suspend_resume.ENALE_SUSPEND_RESUME == VBE_AVE_SUSPEND_RESUME_VSC_SCALER){
			drv_tve_set_video_pal_i();
			vbe_ave_tve_dma_resume();
			vbe_ave_dmavgip_i3ddma_resume();
		}
	}

	//VBI DATA resume
	if(vbe_ave_suspend_resume.VBI_DATA_ENALE_SUSPEND_RESUME == TRUE){
		if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_TELETEXT)
			vbe_ave_vbidata_tt_resume();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_WSS)
			vbe_ave_vbidata_wss_resume();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_VPS)
			vbe_ave_vbidata_vps_resume();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_NTSC_CC608)
			vbe_ave_vbidata_cc_resume();
	}
#endif
	vbe_disp_resume();
	vpq_memc_disp_resume_snashop();
	vpq_do_resume();
	vpqled_do_resume();

	return 0;
}
#endif
static int vbe_suspend_instanboot (struct device *p_dev)
{
	// STR suspend mode
	vbe_suspend_instant_mode = 1;
#if 0
	//VBE_AVE suspend
	if(VBE_AVE_Global_Status == VBE_AVE_OPEN_DONE){
		vbe_ave_vdac_suspend();
	}
	else if(VBE_AVE_Global_Status == VBE_AVE_CONNECT_DONE){
		if(vbe_ave_suspend_resume.ENALE_SUSPEND_RESUME == VBE_AVE_SUSPEND_RESUME_VSC_SCALER){
			vbe_ave_vdac_suspend();
			vbe_ave_tve_dma_suspend();
			vbe_ave_dmavgip_i3ddma_suspend();
		}

	}

	//VBI DATA suspend
	if(vbe_ave_suspend_resume.VBI_DATA_ENALE_SUSPEND_RESUME == TRUE){
		if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_TELETEXT)
			vbe_ave_vbidata_tt_suspend();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_WSS)
			vbe_ave_vbidata_wss_suspend();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_VPS)
			vbe_ave_vbidata_vps_suspend();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_NTSC_CC608)
			vbe_ave_vbidata_cc_suspend();
	}
#endif
	vbe_disp_suspend();
	vpq_memc_disp_suspend_instanboot();
	vpq_do_suspend();
#ifdef VBE_DISP_TCON_SELF_CHECK
#ifdef CONFIG_RTK_KDRV_THERMAL_SENSOR
	monitor_rgb_rolling=1; //for stop tcon check
#endif
#endif
	return 0;
}

static int vbe_resume_instanboot (struct device *p_dev)
{
	//VBE_DISP_TCON resume
	if(vbe_disp_tcon_suspend_resume.ENALE_SUSPEND_RESUME == TRUE){
		HAL_VBE_DISP_TCON_SetClock(TRUE);
	}
#if 0	//remove tve
	//VBE_AVE resume
	if(VBE_AVE_Global_Status == VBE_AVE_OPEN_DONE){
		drvif_tve_resume_setting();
		vbe_ave_vdac_resume();
	}
	else if(VBE_AVE_Global_Status == VBE_AVE_CONNECT_DONE){
		//both ATV and DTV scart out should do this
		drvif_tve_resume_setting();
		vbe_ave_vdac_resume();

		//DTV-scart out
		if(vbe_ave_suspend_resume.ENALE_SUSPEND_RESUME == VBE_AVE_SUSPEND_RESUME_VSC_SCALER){
			drv_tve_set_video_pal_i();
			vbe_ave_tve_dma_resume();
			vbe_ave_dmavgip_i3ddma_resume();
		}
	}

	//VBI DATA resume
	if(vbe_ave_suspend_resume.VBI_DATA_ENALE_SUSPEND_RESUME == TRUE){
		if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_TELETEXT)
			vbe_ave_vbidata_tt_resume();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_WSS)
			vbe_ave_vbidata_wss_resume();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_PAL_VPS)
			vbe_ave_vbidata_vps_resume();
		else if(vbe_ave_suspend_resume.VBI_DATA_TYPE_SUSPEND_RESUME == KADP_VBE_AVE_VBI_NTSC_CC608)
			vbe_ave_vbidata_cc_resume();
	}
#endif
	/*KTASKWBS-4676, wait LG webos call, so we enable first*/
	vbe_disp_resume();
	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"[vbe_resume_instanboot] Remove vbe_disp_resume !\n");
	vpq_memc_disp_resume_instanboot();
	vpq_do_resume_instanboot();
#if 0
	//EPI panel need to fix last line 4-align in fs mode @Crixus 20160929
	if(Get_DISPLAY_PANEL_TYPE() == P_EPI_TYPE){
		ppoverlay_fs_fll_mode_control_RBUS ppoverlay_fs_fll_mode_control_reg;
		ppoverlay_fs_fll_mode_control_reg.regValue = rtd_inl(PPOVERLAY_FS_FLL_Mode_Control_reg);
		ppoverlay_fs_fll_mode_control_reg.win_sta = 0x1120;
		ppoverlay_fs_fll_mode_control_reg.win_end = 0x112c;
		ppoverlay_fs_fll_mode_control_reg.fs_fll_range_mode = 1;
		rtd_outl(PPOVERLAY_FS_FLL_Mode_Control_reg, ppoverlay_fs_fll_mode_control_reg.regValue);
	}
#endif


	//power on sequence : LVDS/VBY1 to Backlight on
	//rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[vbe_disp_resume] Get_LVDS_TO_LIGHT_ON_ms = %d\n", Get_LVDS_TO_LIGHT_ON_ms());
	//msleep(Get_LVDS_TO_LIGHT_ON_ms());

	return 0;
}

#define WKSOR_REG   0xb8060574
#define WKSOR_PWR 3
#define WKSOR_WOL 6
#define WKSOR_RTC 8
void vbe_resume_Backlight_TurnOn(struct device *p_dev)
{
	unsigned int tick1=0, tick2=0;
	unsigned int pastTimeTick=0;
	unsigned int regValue=0;

	printk(KERN_EMERG "vbe_resume_Backlight_TurnOn !\n");

	tick1 = IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg);
	if(tick1>=stBacklihgtStart_Tick)
		pastTimeTick = tick1 - stBacklihgtStart_Tick;
	else //loop back
		pastTimeTick = (0xffffffff-stBacklihgtStart_Tick) + tick1;

	if(pastTimeTick >= (Get_LVDS_TO_LIGHT_ON_ms()*90)){
		//no need to delay
	}else{
		msleep(((Get_LVDS_TO_LIGHT_ON_ms()*90)-pastTimeTick)/90);
	}
	tick2 = IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg);

	//Panel_SetBackLightMode(1);
	regValue = rtd_inl(WKSOR_REG);
	if(((regValue & 0xff) != 0x0) && ((regValue & 0xff) != WKSOR_WOL) && ((regValue & 0xff) != WKSOR_RTC))
	{
		//Panel_SetBackLightMode(1);  set BL and LD at hwcompose mark by max
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s] STR BACKLIGHT CTRL MODE_BY_KERNEL\n",__FUNCTION__);
	}
	else
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s] RTC/WOW wakeup,do not control backlight\n",__FUNCTION__);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[%s] BL_delay=%d(ms), BL_startTick=%x, tick1=%x, tick2=%x, \n",__FUNCTION__,
		Get_LVDS_TO_LIGHT_ON_ms(), stBacklihgtStart_Tick, tick1, tick2);
}
#endif

#ifdef CONFIG_ORBIT_PIXEL_SHIFT_ALGO

#define ORBIT_TABLE_IDX_MAX 44

ORBIT_PIXEL_SHIFT_STRUCT vbe_disp_calculate_orbit_position(unsigned int MaxPixelShift, unsigned int MaxLineShift, unsigned int index)
{
	unsigned int _max_index = 0;
	ORBIT_PIXEL_SHIFT_STRUCT orbit_position={0};
	unsigned int group=0, temp=0;

	if(MaxLineShift != MaxPixelShift/2){
		rtd_printk(KERN_ERR, TAG_NAME_VBE,"[%s] No Match Orbit Algo.\n",__FUNCTION__);
		return orbit_position;
	}
	_max_index = MaxLineShift*8;

	if(index >= _max_index){
		rtd_printk(KERN_ERR, TAG_NAME_VBE,"[%s] Error update index.\n", __FUNCTION__);
		return orbit_position;
	}
	group = index/MaxLineShift;
	temp  = index%MaxLineShift;

	// x > 0: right shift, y >0 : up shift
	switch(group)
	{
		case 0:
		{
			orbit_position.x = temp;
			orbit_position.y = temp;
			break;
		}
		case 1:
		{
			orbit_position.x = MaxPixelShift/2+temp;
			orbit_position.y = MaxLineShift-temp;
			break;
		}
		case 2:
		{
			orbit_position.x = MaxPixelShift-temp;
			orbit_position.y = -1*temp;
			break;
		}
		case 3:
		{
			orbit_position.x = MaxPixelShift/2-temp;
			orbit_position.y = -1*MaxLineShift+temp;
			break;
		}
		case 4:
		{
			orbit_position.x = -1*temp;
			orbit_position.y = temp;
			break;
		}
		case 5:
		{
			orbit_position.x = -1*(temp+MaxPixelShift/2);
			orbit_position.y = MaxLineShift-temp;
			break;
		}
		case 6:
		{
			orbit_position.x = -1*MaxPixelShift+temp;
			orbit_position.y = -1*temp;
			break;
		}
		case 7:
		{
			orbit_position.x = temp-MaxPixelShift/2;
			orbit_position.y = temp-MaxLineShift;
			break;
		}
		default :
			break;
	}

	return orbit_position;


}

#define SHIFT_FACTOR 1

extern void drvif_color_ultrazoom_scalerup_setorbit(
	int x_in_width,// width before scale up
	int x_in_height,// height before scale up
	int x_out_width,// width after scale up
	int x_out_height,// height after scale up
	int x_out_left,// cropped width after scale up
	int x_out_up,// cropped height after scale up
	int display_width,//real display width
	int display_height,//real display height
	int mode
);


unsigned int vbe_disp_orbit_get_max_table_index(void)
{
	if(vbe_disp_oled_orbit_mode == _VBE_PANEL_ORBIT_JUSTSCAN_MODE){
		return (orbit_move_range[_VBE_PANEL_ORBIT_JUSTSCAN_MODE].x*4);
	}else if(vbe_disp_oled_orbit_mode == _VBE_PANEL_ORBIT_AUTO_MODE){
		return (orbit_move_range[_VBE_PANEL_ORBIT_AUTO_MODE].x*4);
	}else if(vbe_disp_oled_orbit_mode == _VBE_PANEL_ORBIT_STORE_MODE){
		return (orbit_move_range[_VBE_PANEL_ORBIT_STORE_MODE].x*4);
	}else{
		return (orbit_move_range[_VBE_PANEL_ORBIT_JUSTSCAN_MODE].x*4);
	}

}
unsigned int vbe_disp_orbit_get_mode_table_shift_x(void)
{
	return orbit_move_range[vbe_disp_oled_orbit_mode].x;
}

unsigned int vbe_disp_orbit_get_mode_table_shift_y(void)
{
	return orbit_move_range[vbe_disp_oled_orbit_mode].x;
}

unsigned char vbe_disp_orbit_set_position_justscan(int x, int y)
{
	ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl2_reg;
	ppoverlay_display_timing_ctrl2_RBUS ppoverlay_display_timing_ctrl2_reg;
	ppoverlay_memcdtg_control_4_RBUS 	ppoverlay_memcdtg_control_4_reg;
	//SCALER_ORBIT_SHIFT_INFO scalerOrbitMemInfo = {0};
    sfg_sfg_ctrl_1_RBUS sfg_sfg_ctrl_1_reg;
    sfg_sfg_dummy_ctrl_0a_RBUS sfg_sfg_dummy_ctrl_0a_reg;
    int current_line_count =0;
    unsigned char ret = -1;

	//set orbit timing
	ppoverlay_display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	ppoverlay_display_timing_ctrl2_reg.orbit_timing_en = 1;
	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, ppoverlay_display_timing_ctrl2_reg.regValue);

    //close double buffer
	double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl2_reg.regValue);

    sfg_sfg_ctrl_1_reg.regValue = IoReg_Read32(SFG_SFG_CTRL_1_reg);
    sfg_sfg_dummy_ctrl_0a_reg.regValue = IoReg_Read32(SFG_SFG_DUMMY_CTRL_0A_reg);

	//set pixel & line shift
	ppoverlay_memcdtg_control_4_reg.regValue = IoReg_Read32(PPOVERLAY_MEMCDTG_CONTROL_4_reg);
	if(!(x%2)){//2n
	    if(x ==0){
            sfg_sfg_ctrl_1_reg.seg0_start = 0;
            sfg_sfg_dummy_ctrl_0a_reg.regValue = 0;
            ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_pixel_sft = -1*x;
	    }
		if(x < 0){
            sfg_sfg_ctrl_1_reg.seg0_start = 0;
            ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_pixel_sft = -1*x;

		}else{
            sfg_sfg_dummy_ctrl_0a_reg.regValue = 0;
			ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_pixel_sft = x;
			ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_pixel_sft |= _BIT12; 	//sign bit
		}
	}
    else{
        if(x < 0){// 2n+1
            //vbe_orbit_shift_flag = 0;
            sfg_sfg_ctrl_1_reg.seg0_start = 1;
			ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_pixel_sft = -1*(x+1);
		}else{
            sfg_sfg_dummy_ctrl_0a_reg.regValue = 0x44440000;
			ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_pixel_sft = x -1;
			ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_pixel_sft |= _BIT12; 	//sign bit
		}
    }
	if(y >=0){
	 ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_line_sft = y;
	}else{
	 ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_line_sft = (-1*y);
	 ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_line_sft |= _BIT12;	 //sign bit
	}
    current_line_count = PPOVERLAY_new_meas1_linecnt_real_get_memcdtg_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg));
    //if((current_line_count - pre_den_end_line_count <10) && (current_line_count - pre_den_end_line_count >-15))
    {
    	IoReg_Write32(PPOVERLAY_MEMCDTG_CONTROL_4_reg, ppoverlay_memcdtg_control_4_reg.regValue);
        //pr_emerg("orbit_set: set orbit line count  =  %d\n", PPOVERLAY_new_meas1_linecnt_real_get_memcdtg_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg)) );
        IoReg_Write32(SFG_SFG_CTRL_1_reg, sfg_sfg_ctrl_1_reg.regValue);
        IoReg_Write32(SFG_SFG_DUMMY_CTRL_0A_reg, sfg_sfg_dummy_ctrl_0a_reg.regValue);
        //pr_emerg("orbit_set: set sfg line count =  %d\n", PPOVERLAY_new_meas1_linecnt_real_get_memcdtg_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas1_linecnt_real_reg)) );
        ret = 0;
        pre_den_end_line_count = current_line_count;
    }/*
    else
    {
        //pr_emerg("orbit_set: pre_den_end_line_count =  %d,current_line_count=%d \n", pre_den_end_line_count,current_line_count );
        pre_den_end_line_count = current_line_count;
        return ret;
    }


    //enable double buffer
	double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl2_reg.regValue);

	double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl2_reg.memc_dtgreg_dbuf_set = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl2_reg.regValue);

	scalerOrbitMemInfo.orbit_enable = 1;
	scalerOrbitMemInfo.orbit_mode = _VBE_PANEL_ORBIT_JUSTSCAN_MODE;
	scalerOrbitMemInfo.shift_range_x = orbit_move_range[_VBE_PANEL_ORBIT_JUSTSCAN_MODE].x*2;
	scalerOrbitMemInfo.shift_range_y = orbit_move_range[_VBE_PANEL_ORBIT_JUSTSCAN_MODE].y*2;
	scalerOrbitMemInfo.shift_x = x;
	scalerOrbitMemInfo.shift_y = y;
	vbe_disp_set_orbit_shift_info_sharememory(scalerOrbitMemInfo);
    */
	pr_emerg("[vbe_disp_orbit_set_position_justscan] orbit_pixel_shift = %d, orbit_line_shift=%d, reg=(%x) \n", x, y, IoReg_Read32(PPOVERLAY_MEMCDTG_CONTROL_4_reg));
    return ret;
}

extern int zoom_imd_smooth_toggle_config(unsigned char display, SCALER_VSC_INPUT_REGION_TYPE inputType, StructSrcRect inputRegion, StructSrcRect inputTiming, StructSrcRect outputRegion);
extern bool GDMA_OSDShiftUpscale_wrapper(int disPlane, int h_shift_pixels,
		 				  int v_shift_pixels, int h_move_range,
						  int v_move_range, int apply);

static unsigned char overscan_Vo=0;
static unsigned char overscan_Frc=0;
static unsigned char overscan_Sub=0;
static unsigned char overscan_OSD=0;
static unsigned char orbit_force_update=0;

StructSrcRect vbe_orbit_input_size={0};
StructSrcRect vbe_orbit_output_size={0};
StructSrcRect vbe_orbit_sub_input_size={0};
StructSrcRect vbe_orbit_sub_input_timing_size={0};
StructSrcRect vbe_orbit_sub_output_size={0};

static int vo_first_set =1;
static int frc_first_set =1;
//static int pig_mode_x_sta =0 ,pig_mode_x_end=0,pig_mode_y_sta=0,pig_mode_y_end=0;

void vbe_disp_orbit_set_vo_overscan_state(unsigned char bEnable)
{
   vo_first_set = bEnable;
}
unsigned char vbe_disp_orbit_get_sub_overscan(void)
{
	return overscan_Sub;
}

void vbe_disp_orbit_set_sub_overscan(unsigned char bEnable)
{
	overscan_Sub = bEnable;
}
void vbe_disp_orbit_set_vo_overscan(unsigned char bEnable)
{
	overscan_Vo = bEnable;
}

unsigned char vbe_disp_orbit_get_vo_overscan(void)
{
	return overscan_Vo;
}

void vbe_disp_orbit_set_forceupdate_state(unsigned char bEnable)
{
    orbit_force_update = bEnable;
}
unsigned char vbe_disp_orbit_get_forceupdate_state(void)
{
    return orbit_force_update;
}

void vbe_disp_orbit_set_frc_overscan(unsigned char bEnable)
{
	overscan_Frc = bEnable;
}

unsigned char vbe_disp_orbit_get_frc_overscan(void)
{
	return overscan_Frc;
}
void vbe_disp_orbit_set_osd_overscan(unsigned char bEnable)
{
	overscan_OSD = bEnable;
}

unsigned char vbe_disp_orbit_get_osd_overscan(void)
{
	return overscan_OSD;
}

int ori_input_width =0, ori_input_height=0;

void vbe_disp_orbit_vo_overscan()
{
    //static int change =0;
    //StructSrcRect input_size;
    //StructSrcRect input_timing;
    //StructSrcRect output_dispwin;
    scaledown_ich1_sdnr_cutout_range_hor_RBUS scaledown_ich1_sdnr_cutout_range_hor_reg;
    scaledown_ich1_sdnr_cutout_range_ver0_RBUS scaledown_ich1_sdnr_cutout_range_ver0_reg;
    ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_reg;
    ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_reg;
    SCALER_ORBIT_SHIFT_INFO scalerOrbitMemInfo = {0};
    int shift_x, shift_y,range_x,range_y;
    //int vo_crop_front_y,vo_crop_back_y;
    int input_frame_rate =0;
    ORBIT_PIXEL_SHIFT_STRUCT orbit_shift;
    int disp_width, disp_height;

    extern UINT8 TV006_WB_Pattern_En;

    down(&Orbit_Semaphore);

    if(TV006_WB_Pattern_En)
    {
        up(&Orbit_Semaphore);
        return;
    }

    main_active_h_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_Active_H_Start_End_reg);
    main_active_v_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_Active_V_Start_End_reg);
    //disp_width = Scaler_DispGetInputInfo(SLR_INPUT_DISP_WID);
    //disp_height = Scaler_DispGetInputInfo(SLR_INPUT_DISP_LEN);
    disp_width = main_active_h_start_end_reg.mh_act_end - main_active_h_start_end_reg.mh_act_sta ;// Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DISP_WID);
    disp_height = main_active_v_start_end_reg.mv_act_end - main_active_v_start_end_reg.mv_act_sta;//Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DISP_LEN);
    orbit_shift = Get_Orbit_Shift_Data();
    shift_x = orbit_move_range[vbe_disp_oled_orbit_mode].x - orbit_shift.x;
    shift_y = orbit_move_range[vbe_disp_oled_orbit_mode].y + orbit_shift.y;
    range_x = orbit_move_range[vbe_disp_oled_orbit_mode].x*2;
    range_y = orbit_move_range[vbe_disp_oled_orbit_mode].y*2;

    scaledown_ich1_sdnr_cutout_range_hor_reg.regValue = IoReg_Read32(SCALEDOWN_ich1_sdnr_cutout_range_hor_reg);
    scaledown_ich1_sdnr_cutout_range_ver0_reg.regValue = IoReg_Read32(SCALEDOWN_ich1_sdnr_cutout_range_ver0_reg);
    //vbe_orbit_input_size = get_input_for_crop(SLR_MAIN_DISPLAY);
    //vbe_orbit_output_size = Scaler_DispWindowGet();
    /*
    if(vo_first_set ==1 && scaledown_ich1_sdnr_cutout_range_hor_reg.hor_width!=0 && scaledown_ich1_sdnr_cutout_range_ver0_reg.ver_height !=0)
    {
        vo_first_set = 0;
        ori_input_width = scaledown_ich1_sdnr_cutout_range_hor_reg.hor_width;
        ori_input_height = scaledown_ich1_sdnr_cutout_range_ver0_reg.ver_height;

        pr_notice("[%s] ori_input_width = %d, ori_input_height = %d \n", __FUNCTION__, ori_input_width,ori_input_height);
    }

    real_shift_y = (shift_y *ori_input_height)/ (vbe_orbit_output_size.src_height+range_y) ;
    //range_y = (vbe_orbit_output_size.src_height/ori_input_height)*(range_y *ori_input_height)/ (vbe_orbit_output_size.src_height+range_y) ;
    vo_crop_front_y = (real_shift_y /8) *8;

    if(ori_input_width > 2560 && ori_input_height >1440)
    {
        vo_crop_back_y = ( (range_y -real_shift_y)/8) *8;
    }
    else if(ori_input_width == 1920 && ori_input_height ==1080)
    {
        real_shift_y = ((range_y -shift_y) *ori_input_height)/ (vbe_orbit_output_size.src_height+range_y) ;
        vo_crop_back_y = ( (real_shift_y)/8) *8;
    }
    else
    {
        vo_crop_back_y = ori_input_height - (vbe_orbit_output_size.src_height*ori_input_height)/ (vbe_orbit_output_size.src_height+range_y) - real_shift_y;
        vo_crop_back_y = ( (vo_crop_back_y)/8) *8;
    }

    input_size.srcx = vbe_orbit_input_size.srcx;
    input_size.srcy = vbe_orbit_input_size.srcy + vo_crop_front_y;// real_shift_y - ((orbit_move_range[_VBE_PANEL_ORBIT_AUTO_MODE].y*2) - vo_crop_y)/2;
    input_size.src_wid = vbe_orbit_input_size.src_wid;//scaledown_ich1_sdnr_cutout_range_hor_reg.hor_width;
    //input_size.src_height = scaledown_ich1_sdnr_cutout_range_ver0_reg.ver_height-orbit_move_range[_VBE_PANEL_ORBIT_AUTO_MODE].y*2;
    input_size.src_height = ori_input_height-vo_crop_front_y -vo_crop_back_y;//scaledown_ich1_sdnr_cutout_range_ver0_reg.ver_height-8;
    pr_notice("[%s] real_shift_y = %d ,vo_crop_front_y = %d, vo_crop_back_y = %d \n", __FUNCTION__,real_shift_y, vo_crop_front_y,vo_crop_back_y);

    input_timing.srcx = 0;
    input_timing.srcy = 0;
    input_timing.src_wid = ori_input_width;//scaledown_ich1_sdnr_cutout_range_hor_reg.hor_width;
    input_timing.src_height = ori_input_height;//scaledown_ich1_sdnr_cutout_range_ver0_reg.ver_height;
    if(vbe_orbit_output_size.src_wid !=0 && vbe_orbit_output_size.src_height !=0)
    {
        if(disp_width/vbe_orbit_output_size.src_wid>2)
        {
            output_dispwin.srcx = 0;
            output_dispwin.srcy = 0;
            output_dispwin.src_wid = disp_width ;
            output_dispwin.src_height = disp_height;

        }
        else
        {
            output_dispwin.srcx = vbe_orbit_output_size.srcx;
            output_dispwin.srcy = vbe_orbit_output_size.srcy;
            output_dispwin.src_wid = vbe_orbit_output_size.src_wid ;
            output_dispwin.src_height = vbe_orbit_output_size.src_height;
        }
    }

    pr_notice("[%s] input_size.srcx = %d ,input_size.srcy = %d, input_size.src_wid = %d , input_size.src_height=%d\n", __FUNCTION__,input_size.srcx, input_size.srcy,input_size.src_wid,input_size.src_height);
    pr_notice("[%s] output_dispwin.srcx = %d ,output_dispwin.srcy = %d, output_dispwin.src_wid = %d ,output_dispwin.src_height=%d\n", __FUNCTION__,output_dispwin.srcx, output_dispwin.srcy,output_dispwin.src_wid,output_dispwin.src_height);
    */
    scalerOrbitMemInfo.orbit_enable = 1;
    scalerOrbitMemInfo.orbit_mode = _VBE_PANEL_ORBIT_AUTO_MODE;
    scalerOrbitMemInfo.shift_range_x = range_x;
    scalerOrbitMemInfo.shift_range_y = range_y;
    scalerOrbitMemInfo.shift_x = shift_x;
    scalerOrbitMemInfo.shift_y = shift_y;
    scalerOrbitMemInfo.ori_input_x = (ori_input_width > vbe_orbit_output_size.src_wid)? vbe_orbit_output_size.src_wid :ori_input_width ;
    scalerOrbitMemInfo.ori_input_y = ori_input_height;
    scalerOrbitMemInfo.force_update = vbe_disp_orbit_get_forceupdate_state();
    scalerOrbitMemInfo.execute_count = 1;
    scalerOrbitMemInfo.active_state = 1;
    vbe_disp_set_orbit_shift_info_sharememory(scalerOrbitMemInfo);

    input_frame_rate = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_V_FREQ);

    pr_notice("[%s] input_frame_rate = %d, disp_width = %d, disp_height=%d\n", __FUNCTION__, input_frame_rate,Scaler_DispGetInputInfo(SLR_INPUT_DISP_WID),Scaler_DispGetInputInfo(SLR_INPUT_DISP_LEN));
/*
    if(zoom_imd_smooth_toggle_config(SLR_MAIN_DISPLAY, INPUT_BASE_ON_TIMING, input_size, input_timing, output_dispwin)==0)
    {
        pr_notice("[%s] zoom_imd_smooth_toggle done \n", __FUNCTION__);
    }*/
    //vbe_disp_orbit_set_osd_overscan(1);
    vbe_disp_orbit_set_forceupdate_state(0);
    vbe_disp_orbit_set_vo_overscan(0);

    up(&Orbit_Semaphore);
}

void vbe_disp_orbit_sub_overscan()
{

    extern StructSrcRect Scaler_SubDispWindowGet(void);
    StructSrcRect input_size;
    StructSrcRect input_timing;
    StructSrcRect output_dispwin;
    SCALER_ORBIT_SHIFT_INFO *orbit_shift_info = NULL;


    ORBIT_PIXEL_SHIFT_STRUCT orbit_shift;
    int shift_x, shift_y, range_x,range_y;
    orbit_shift_info = (SCALER_ORBIT_SHIFT_INFO*)Scaler_GetShareMemVirAddr(SCALERIOC_ORBIT_SHIFT_INFO);

    orbit_shift = Get_Orbit_Shift_Data();
    shift_x = orbit_move_range[vbe_disp_oled_orbit_mode].x - orbit_shift.x;
    shift_y = orbit_move_range[vbe_disp_oled_orbit_mode].y + orbit_shift.y;
    range_x = orbit_move_range[vbe_disp_oled_orbit_mode].x*2;
    range_y = orbit_move_range[vbe_disp_oled_orbit_mode].y*2;//+ orbit_move_range[vbe_disp_oled_orbit_mode].y/2;
    if(vbe_orbit_sub_input_size.src_wid==0 || vbe_orbit_sub_input_size.src_height==0)
    {
        vbe_orbit_sub_input_size = get_input_for_crop(SLR_SUB_DISPLAY);
    }
    if(vbe_orbit_sub_input_timing_size.src_wid==0 || vbe_orbit_sub_input_timing_size.src_height==0)
    {
        vbe_orbit_sub_input_timing_size = get_input_timing_for_crop(SLR_SUB_DISPLAY);
    }

    vbe_orbit_sub_input_size = get_input_for_crop(SLR_SUB_DISPLAY);
    vbe_orbit_sub_input_timing_size = get_input_timing_for_crop(SLR_SUB_DISPLAY);

    input_size.srcx = vbe_orbit_sub_input_size.srcx;
    input_size.srcy = vbe_orbit_sub_input_size.srcy ;
    input_size.src_wid = vbe_orbit_sub_input_size.src_wid;
    input_size.src_height = vbe_orbit_sub_input_size.src_height;

    input_timing.srcx = vbe_orbit_sub_input_timing_size.srcx ;
    input_timing.srcy = vbe_orbit_sub_input_timing_size.srcy ;
    input_timing.src_height = vbe_orbit_sub_input_timing_size.src_height ;
    input_timing.src_wid = vbe_orbit_sub_input_timing_size.src_wid ;
    vbe_orbit_sub_output_size = Scaler_SubDispWindowGet();

    if(Scaler_DispGetInputInfoByDisp(SLR_SUB_DISPLAY, SLR_INPUT_STATE) != _MODE_STATE_ACTIVE || vbe_disp_oled_orbit_mode == _VBE_PANEL_ORBIT_STORE_MODE)
    {
        vbe_disp_orbit_set_sub_overscan(0);
        vbe_orbit_sub_input_size.src_wid = 0;
        vbe_orbit_sub_input_size.src_height = 0;
        vbe_orbit_sub_input_timing_size.src_height =0;
        vbe_orbit_sub_input_timing_size.src_wid =0;

        pr_notice("[%s] no sub input size or store mode\n", __FUNCTION__);
        return;
    }
    /*
    if(vbe_orbit_sub_output_size.srcx >1910)//right side
    {
        output_dispwin.srcx = vbe_orbit_sub_output_size.srcx + orbit_move_range[vbe_disp_oled_orbit_mode].x + 5 - shift_x;
        output_dispwin.srcy = vbe_orbit_sub_output_size.srcy - shift_y;
        output_dispwin.src_height = vbe_orbit_sub_output_size.src_height + range_y;
        output_dispwin.src_wid = vbe_orbit_sub_output_size.src_wid  +range_x;
    }
    else//left side
    {
        if(vbe_orbit_sub_output_size.srcx < shift_x)
        {
            input_size.srcx = vbe_orbit_sub_input_size.srcx + shift_x;
            input_size.srcy = vbe_orbit_sub_input_size.srcy ;
            input_size.src_wid = vbe_orbit_sub_input_size.src_wid ;
            input_size.src_height = vbe_orbit_sub_input_size.src_height;

            output_dispwin.srcx = 0;
            output_dispwin.srcy = vbe_orbit_sub_output_size.srcy - shift_y;
            output_dispwin.src_height = vbe_orbit_sub_output_size.src_height + range_y;
            output_dispwin.src_wid = vbe_orbit_sub_output_size.src_wid  +range_x;
        }
        else
        {
            output_dispwin.srcx = vbe_orbit_sub_output_size.srcx - shift_x;
            output_dispwin.srcy = vbe_orbit_sub_output_size.srcy - shift_y;
            output_dispwin.src_height = vbe_orbit_sub_output_size.src_height + range_y;
            output_dispwin.src_wid = vbe_orbit_sub_output_size.src_wid  +range_x;
        }
    }*/
    //for main path might be no signal.
    orbit_shift_info->orbit_mode = htonl(_VBE_PANEL_ORBIT_AUTO_MODE);
    orbit_shift_info->shift_range_x = htonl(range_x);
    orbit_shift_info->shift_range_y = htonl(range_y);
    orbit_shift_info->shift_x = htonl(shift_x);
    orbit_shift_info->shift_y = htonl(shift_y);

    output_dispwin.srcx = vbe_orbit_sub_output_size.srcx ;
    output_dispwin.srcy = vbe_orbit_sub_output_size.srcy ;
    output_dispwin.src_height = vbe_orbit_sub_output_size.src_height ;
    output_dispwin.src_wid = vbe_orbit_sub_output_size.src_wid  ;
    pr_notice("[%s] input_size.srcx = %d ,input_size.srcy = %d, input_size.src_wid = %d , input_size.src_height=%d\n", __FUNCTION__,input_size.srcx, input_size.srcy,input_size.src_wid,input_size.src_height);
    pr_notice("[%s] output_dispwin.srcx = %d ,output_dispwin.srcy = %d, output_dispwin.src_wid = %d ,output_dispwin.src_height=%d\n", __FUNCTION__,output_dispwin.srcx, output_dispwin.srcy,output_dispwin.src_wid,output_dispwin.src_height);


    if(zoom_imd_smooth_toggle_config(SLR_SUB_DISPLAY, INPUT_BASE_ON_TIMING, input_size, input_timing, output_dispwin)==0)
    {
        pr_notice("[%s] sub zoom_imd_smooth_toggle done \n", __FUNCTION__);
    }
    vbe_disp_orbit_set_sub_overscan(0);
}


void vbe_disp_orbit_frc_overscan()
{

    static ORBIT_SIZE inSize;
	int shift_x, shift_y,range_x,range_y;
	scaledown_ich1_sdnr_cutout_range_hor_RBUS scaledown_ich1_sdnr_cutout_range_hor_reg;
	scaledown_ich1_sdnr_cutout_range_ver0_RBUS scaledown_ich1_sdnr_cutout_range_ver0_reg;
    ppoverlay_main_den_h_start_end_RBUS main_den_h_start_end_reg;
    ppoverlay_main_den_v_start_end_RBUS main_den_v_start_end_reg;
    ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_reg;
    ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_reg;
	//SCALER_ORBIT_SHIFT_INFO scalerOrbitMemInfo = {0};
	//SCALER_DISP_CHANNEL display = (SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY);
    int ori_disp_width,ori_disp_height;
	ORBIT_PIXEL_SHIFT_STRUCT orbit_shift;
    extern UINT8 TV006_WB_Pattern_En;
	SCALER_ORBIT_SHIFT_INFO scalerOrbitMemInfo = {0};
    down(&Orbit_Semaphore);

    if(TV006_WB_Pattern_En)
    {
        up(&Orbit_Semaphore);
        return;
    }

    orbit_shift = Get_Orbit_Shift_Data();
	scaledown_ich1_sdnr_cutout_range_hor_reg.regValue = IoReg_Read32(SCALEDOWN_ich1_sdnr_cutout_range_hor_reg);
	scaledown_ich1_sdnr_cutout_range_ver0_reg.regValue = IoReg_Read32(SCALEDOWN_ich1_sdnr_cutout_range_ver0_reg);

    main_active_h_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_Active_H_Start_End_reg);
	main_active_v_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_Active_V_Start_End_reg);

	ori_disp_width = main_active_h_start_end_reg.mh_act_end - main_active_h_start_end_reg.mh_act_sta ;// Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DISP_WID);
	ori_disp_height = main_active_v_start_end_reg.mv_act_end - main_active_v_start_end_reg.mv_act_sta;//Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DISP_LEN);

	inSize.nLength = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_MEM_ACT_LEN);//scaledown_ich1_sdnr_cutout_range_ver0_reg.ver_height;// ;
	inSize.nWidth = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_MEM_ACT_WID);//scaledown_ich1_sdnr_cutout_range_hor_reg.hor_width;//

    pr_notice("[%s] inSize.nLength = %d, inSize.nWidth = %d \n", __FUNCTION__, inSize.nLength,inSize.nWidth);

    shift_x = orbit_move_range[vbe_disp_oled_orbit_mode].x - orbit_shift.x;
    shift_y = orbit_move_range[vbe_disp_oled_orbit_mode].y + orbit_shift.y;
    range_x = orbit_move_range[vbe_disp_oled_orbit_mode].x*2;
    range_y = orbit_move_range[vbe_disp_oled_orbit_mode].y*2;

    /*
    drvif_color_ultrazoom_scalerup_setorbit(
        inSize.nWidth,
        inSize.nLength,
        ori_disp_width+range_x,
        ori_disp_height+range_y,
        shift_x,
        shift_y,
        ori_disp_width,
        ori_disp_height,
        0);
*/
    //msleep(5);

    main_den_h_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_DEN_H_Start_End_reg);
    main_den_v_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_DEN_V_Start_End_reg);

    /*
    if(vbe_disp_oled_orbit_mode ==_VBE_PANEL_ORBIT_AUTO_MODE &&
        main_den_h_start_end_reg.mh_den_sta < main_active_h_start_end_reg.mh_act_sta &&
       main_den_v_start_end_reg.mv_den_sta <  main_active_v_start_end_reg.mv_act_sta)
    {
        if(frc_first_set)
        {
            frc_first_set =0;
            pig_mode_x_sta = main_active_h_start_end_reg.mh_act_sta;
            pig_mode_x_end = main_active_h_start_end_reg.mh_act_end;
            pig_mode_y_sta = main_active_v_start_end_reg.mv_act_sta;
            pig_mode_y_end = main_active_v_start_end_reg.mv_act_end;

            pr_notice("[%s] pig_mode_x_sta = %d, pig_mode_x_end =%d, pig_mode_y_sta =%d, pig_mode_y_end=%d\n", __FUNCTION__,pig_mode_x_sta,pig_mode_x_end,pig_mode_y_sta,pig_mode_y_end);
        }

        pr_notice("[%s] orbit_shift.x = %d, orbit_shift.y =%d\n", __FUNCTION__,orbit_shift.x,orbit_shift.y);
        main_active_h_start_end_reg.mh_act_sta = pig_mode_x_sta + orbit_shift.x ;
        main_active_h_start_end_reg.mh_act_end = pig_mode_x_end + orbit_shift.x ;
        IoReg_Write32(PPOVERLAY_MAIN_Active_H_Start_End_reg, main_active_h_start_end_reg.regValue);
        main_active_v_start_end_reg.mv_act_sta = pig_mode_y_sta - orbit_shift.y;
        main_active_v_start_end_reg.mv_act_end = pig_mode_y_end - orbit_shift.y;
        IoReg_Write32(PPOVERLAY_MAIN_Active_V_Start_End_reg, main_active_v_start_end_reg.regValue);
    }
    else
    {
        frc_first_set =1;
    }
    */
	scalerOrbitMemInfo.orbit_enable = 1;
	scalerOrbitMemInfo.orbit_mode = _VBE_PANEL_ORBIT_AUTO_MODE;
	scalerOrbitMemInfo.shift_range_x = range_x;
	scalerOrbitMemInfo.shift_range_y = range_y;
	scalerOrbitMemInfo.shift_x = shift_x;
	scalerOrbitMemInfo.shift_y = shift_y;
	scalerOrbitMemInfo.ori_input_x = inSize.nWidth ;
	scalerOrbitMemInfo.ori_input_y = inSize.nLength;
	scalerOrbitMemInfo.force_update = vbe_disp_orbit_get_forceupdate_state();
	scalerOrbitMemInfo.execute_count = 0;
    scalerOrbitMemInfo.active_state = 1;
	vbe_disp_set_orbit_shift_info_sharememory(scalerOrbitMemInfo);
    vbe_disp_orbit_set_forceupdate_state(0);
    //vbe_disp_orbit_set_osd_overscan(1);
    //vbe_disp_orbit_OSD_overscan();
    up(&Orbit_Semaphore);
}

void vbe_disp_orbit_OSD_overscan()
{

	int shift_x, shift_y;

	ORBIT_PIXEL_SHIFT_STRUCT orbit_shift;

    orbit_shift = Get_Orbit_Shift_Data();
    shift_x = orbit_move_range[_VBE_PANEL_ORBIT_AUTO_MODE].x - orbit_shift.x;
    shift_y = orbit_move_range[_VBE_PANEL_ORBIT_AUTO_MODE].y + orbit_shift.y;

    pr_notice("[%s] GDMA_OSDShiftUpscale \n", __FUNCTION__);

    if(vbe_disp_oled_orbit_mode ==_VBE_PANEL_ORBIT_AUTO_MODE)
    {
        GDMA_OSDShiftUpscale_wrapper(1,shift_x,shift_y,orbit_move_range[_VBE_PANEL_ORBIT_AUTO_MODE].x*2,
                        orbit_move_range[_VBE_PANEL_ORBIT_AUTO_MODE].y*2,0);
    }
}


void vbe_disp_orbit_set_position_overscan(int x, int y)
{
	if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_FRAMESYNC)){
		// data fsync need crop by vo, can not overscan here
		vbe_disp_orbit_set_vo_overscan(1);
		vbe_disp_orbit_set_sub_overscan(1);
        pr_notice("[%s] data frame sync mode \n", __FUNCTION__);
        frc_first_set =1;
	}else{
        vo_first_set =1 ;// reset for data fs vo crop
		vbe_disp_orbit_set_frc_overscan(1);
		vbe_disp_orbit_set_sub_overscan(1);
        pr_notice("[%s] FRC mode \n", __FUNCTION__);
	}
    vbe_disp_orbit_set_osd_overscan(0);

}

void vbe_disp_set_orbit_shift_info_sharememory(SCALER_ORBIT_SHIFT_INFO scalerOrbitInfo)
{
	SCALER_ORBIT_SHIFT_INFO *orbit_shift_info = NULL;

	orbit_shift_info = (SCALER_ORBIT_SHIFT_INFO*)Scaler_GetShareMemVirAddr(SCALERIOC_ORBIT_SHIFT_INFO);
	orbit_shift_info->shift_range_x = htonl(scalerOrbitInfo.shift_range_x);
	orbit_shift_info->shift_range_y = htonl(scalerOrbitInfo.shift_range_y);
	orbit_shift_info->shift_x = htonl(scalerOrbitInfo.shift_x);
	orbit_shift_info->shift_y = htonl(scalerOrbitInfo.shift_y);
	orbit_shift_info->ori_input_x = htonl(scalerOrbitInfo.ori_input_x);
	orbit_shift_info->ori_input_y = htonl(scalerOrbitInfo.ori_input_y);
	orbit_shift_info->force_update = htonl(scalerOrbitInfo.force_update);
	orbit_shift_info->orbit_mode = htonl(scalerOrbitInfo.orbit_mode);
	orbit_shift_info->orbit_enable = htonl(scalerOrbitInfo.orbit_enable);
	orbit_shift_info->execute_count = htonl(scalerOrbitInfo.execute_count);
    orbit_shift_info->active_state = htonl(scalerOrbitInfo.active_state);
	pr_notice("[%s] x=%d,y=%d, range(%d.%d)(enable:%d, mode:%d)\n", __FUNCTION__, scalerOrbitInfo.shift_x, scalerOrbitInfo.shift_y,
		scalerOrbitInfo.shift_range_x, scalerOrbitInfo.shift_range_y, scalerOrbitInfo.orbit_enable, scalerOrbitInfo.orbit_mode);
}


void vbe_disp_orbit_reset_position_justscan(void)
{
	ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl2_reg;
	ppoverlay_display_timing_ctrl2_RBUS ppoverlay_display_timing_ctrl2_reg;
	ppoverlay_memcdtg_control_4_RBUS 	ppoverlay_memcdtg_control_4_reg;
    sfg_sfg_ctrl_1_RBUS sfg_sfg_ctrl_1_reg;
    sfg_sfg_dummy_ctrl_0a_RBUS sfg_sfg_dummy_ctrl_0a_reg;
	//SCALER_ORBIT_SHIFT_INFO scalerOrbitMemInfo = {0};
	// reset orbit
	ppoverlay_display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
	ppoverlay_display_timing_ctrl2_reg.orbit_timing_en = 0;
	IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, ppoverlay_display_timing_ctrl2_reg.regValue);

	ppoverlay_memcdtg_control_4_reg.regValue = IoReg_Read32(PPOVERLAY_MEMCDTG_CONTROL_4_reg);
	ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_line_sft = 0;
	ppoverlay_memcdtg_control_4_reg.dtgm2orbitvs_pixel_sft = 0;
	IoReg_Write32(PPOVERLAY_MEMCDTG_CONTROL_4_reg, ppoverlay_memcdtg_control_4_reg.regValue);

    sfg_sfg_ctrl_1_reg.regValue = IoReg_Read32(SFG_SFG_CTRL_1_reg);
    sfg_sfg_dummy_ctrl_0a_reg.regValue = IoReg_Read32(SFG_SFG_DUMMY_CTRL_0A_reg);
    sfg_sfg_ctrl_1_reg.seg0_start = 0;
    sfg_sfg_dummy_ctrl_0a_reg.regValue = 0;
    IoReg_Write32(SFG_SFG_CTRL_1_reg, sfg_sfg_ctrl_1_reg.regValue);
    IoReg_Write32(SFG_SFG_DUMMY_CTRL_0A_reg, sfg_sfg_dummy_ctrl_0a_reg.regValue);

	double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl2_reg.memc_dtgreg_dbuf_set = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl2_reg.regValue);
    /*
	scalerOrbitMemInfo.orbit_enable = 0;
	scalerOrbitMemInfo.orbit_mode = _VBE_PANEL_OREBIT_MODE_MAX;
	scalerOrbitMemInfo.shift_range_x = 0;
	scalerOrbitMemInfo.shift_range_y = 0;
	scalerOrbitMemInfo.shift_x = 0;
	scalerOrbitMemInfo.shift_y = 0;
	scalerOrbitMemInfo.ori_input_x = Scaler_DispGetInputInfo(SLR_INPUT_DISP_WID);
	scalerOrbitMemInfo.ori_input_y = Scaler_DispGetInputInfo(SLR_INPUT_DISP_LEN);
	vbe_disp_set_orbit_shift_info_sharememory(scalerOrbitMemInfo);*/
}

void vbe_disp_orbit_reset_position_overscan(void)
{
    ORBIT_SIZE inSize;
    scaledown_ich1_sdnr_cutout_range_hor_RBUS scaledown_ich1_sdnr_cutout_range_hor_reg;
    scaledown_ich1_sdnr_cutout_range_ver0_RBUS scaledown_ich1_sdnr_cutout_range_ver0_reg;
    //ppoverlay_main_den_h_start_end_RBUS main_den_h_start_end_reg;
    //ppoverlay_main_den_v_start_end_RBUS main_den_v_start_end_reg;
    //ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_reg;
    //ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_reg;

    SCALER_ORBIT_SHIFT_INFO scalerOrbitMemInfo = {0};
    SCALER_ORBIT_SHIFT_INFO *p_orbitShiftInfo = NULL;
    StructSrcRect input_size;
    StructSrcRect input_timing;
    StructSrcRect output_dispwin = {0, 0, 3840, 2160};
    //SCALER_DISP_CHANNEL display = (SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY);
    int ori_disp_wid,ori_disp_len;
    scaledown_ich1_sdnr_cutout_range_hor_reg.regValue = IoReg_Read32(SCALEDOWN_ich1_sdnr_cutout_range_hor_reg);
    scaledown_ich1_sdnr_cutout_range_ver0_reg.regValue = IoReg_Read32(SCALEDOWN_ich1_sdnr_cutout_range_ver0_reg);
    inSize.nLength = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_MEM_ACT_LEN);
    inSize.nWidth = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_MEM_ACT_WID);///will change after vo crop

    ori_disp_wid = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_DISP_WID);
    ori_disp_len = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_DISP_LEN);

    pr_notice("[%s] inSize.nWidth = %d, inSize.nLength = %d ,ori_disp_wid =%d ,ori_disp_len=%d\n", __FUNCTION__,inSize.nWidth,inSize.nLength,ori_disp_wid ,ori_disp_len);
    if(inSize.nLength !=0 && inSize.nWidth!=0)///make sure it has video source
        p_orbitShiftInfo = (SCALER_ORBIT_SHIFT_INFO*)Scaler_GetShareMemVirAddr(SCALERIOC_ORBIT_SHIFT_INFO);//get original info from share memory

    if( vbe_orbit_input_size.src_height!=0 && vbe_orbit_input_size.src_wid !=0)
    {
        scalerOrbitMemInfo.orbit_enable = 1;
        scalerOrbitMemInfo.orbit_mode = _VBE_PANEL_OREBIT_MODE_MAX;
        scalerOrbitMemInfo.shift_range_x = 0;
        scalerOrbitMemInfo.shift_range_y = 0;
        scalerOrbitMemInfo.shift_x = 0;
        scalerOrbitMemInfo.shift_y = 0;
        scalerOrbitMemInfo.ori_input_x = vbe_orbit_input_size.src_wid;
        scalerOrbitMemInfo.ori_input_y = vbe_orbit_input_size.src_height;
        scalerOrbitMemInfo.force_update = 0;
        scalerOrbitMemInfo.execute_count = 1;
        scalerOrbitMemInfo.active_state = 1;
        vbe_disp_set_orbit_shift_info_sharememory(scalerOrbitMemInfo);//
    }
    vo_first_set =1;
    frc_first_set =1;
    /*
    main_den_h_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_DEN_H_Start_End_reg);
    main_den_v_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_DEN_V_Start_End_reg);
    main_active_h_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_Active_H_Start_End_reg);
    main_active_v_start_end_reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_Active_V_Start_End_reg);
    if(main_den_h_start_end_reg.mh_den_sta < main_active_h_start_end_reg.mh_act_sta &&
        main_den_v_start_end_reg.mv_den_sta <  main_active_v_start_end_reg.mv_act_sta &&
        pig_mode_x_sta!=0 && pig_mode_x_end!=0 && pig_mode_y_sta!=0 && pig_mode_y_end!=0)
    {
        main_active_h_start_end_reg.mh_act_sta = pig_mode_x_sta;
        main_active_h_start_end_reg.mh_act_end = pig_mode_x_end;
        IoReg_Write32(PPOVERLAY_MAIN_Active_H_Start_End_reg, main_active_h_start_end_reg.regValue);
        main_active_v_start_end_reg.mv_act_sta = pig_mode_y_sta;
        main_active_v_start_end_reg.mv_act_end = pig_mode_y_end;
        IoReg_Write32(PPOVERLAY_MAIN_Active_V_Start_End_reg, main_active_v_start_end_reg.regValue);
        pig_mode_x_sta = 0;
        pig_mode_x_end = 0;
        pig_mode_y_sta = 0;
        pig_mode_y_end = 0;
    }
        */
    if(inSize.nLength !=0 && inSize.nWidth!=0)
    {
        unsigned int counter  = 5;
        if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_FRAMESYNC)){
            scalerOrbitMemInfo.orbit_enable = 1;
            scalerOrbitMemInfo.orbit_mode = _VBE_PANEL_ORBIT_AUTO_MODE;
            scalerOrbitMemInfo.shift_range_x = 0;
            scalerOrbitMemInfo.shift_range_y = 0;
            scalerOrbitMemInfo.shift_x = 0;
            scalerOrbitMemInfo.shift_y = 0;
            scalerOrbitMemInfo.ori_input_x = vbe_orbit_input_size.src_wid;
            scalerOrbitMemInfo.ori_input_y = vbe_orbit_input_size.src_height;
            scalerOrbitMemInfo.force_update = 0;
            scalerOrbitMemInfo.execute_count = 1;
            scalerOrbitMemInfo.active_state = 1;
            vbe_disp_set_orbit_shift_info_sharememory(scalerOrbitMemInfo);//

            vbe_disp_orbit_set_vo_overscan(0);
            /*
            // data fsync need crop by vo, can not overscan here
            if( vbe_orbit_input_size.src_height!=0 && vbe_orbit_input_size.src_wid !=0)
            {
                input_size.srcx = vbe_orbit_input_size.srcx ;
                input_size.srcy = vbe_orbit_input_size.srcy ;
                input_size.src_wid = vbe_orbit_input_size.src_wid;
                input_size.src_height = vbe_orbit_input_size.src_height;
                input_timing = get_input_timing_for_crop(SLR_MAIN_DISPLAY);

            }
            else
            {
                vbe_orbit_input_size = get_input_for_crop(SLR_MAIN_DISPLAY);
                input_size = get_input_for_crop(SLR_MAIN_DISPLAY);
                input_timing = get_input_timing_for_crop(SLR_MAIN_DISPLAY);
            }
            pr_notice("[%s] input_size.srcx =%d, input_size.srcy=%d, input_size.src_wid =%d, input_size.src_height=%d\n", __FUNCTION__,input_size.srcx,input_size.srcy,input_size.src_wid,input_size.src_height);
            if(vbe_orbit_output_size.src_wid !=0 && vbe_orbit_output_size.src_height !=0 )
            {
                if((ori_disp_wid/vbe_orbit_output_size.src_wid)>2)
                {
                    output_dispwin = Scaler_DispWindowGet();
                }
                else
                {   pr_notice("[%s] test src_wid =%d, ori_disp_wid=%d \n", __FUNCTION__,vbe_orbit_output_size.src_wid,ori_disp_wid);
                    output_dispwin.srcx = vbe_orbit_output_size.srcx;
                    output_dispwin.srcy = vbe_orbit_output_size.srcy;
                    output_dispwin.src_wid = vbe_orbit_output_size.src_wid ;
                    output_dispwin.src_height = vbe_orbit_output_size.src_height;
                }

                pr_notice("[%s] output_dispwin.srcx =%d, output_dispwin.srcy=%d, output_dispwin.src_wid =%d, output_dispwin.src_height=%d\n", __FUNCTION__,output_dispwin.srcx,output_dispwin.srcy,output_dispwin.src_wid,output_dispwin.src_height);
            }
            else
            {
                output_dispwin = Scaler_DispWindowGet();
                vbe_orbit_output_size = Scaler_DispWindowGet();
            }
            if(zoom_imd_smooth_toggle_config(SLR_MAIN_DISPLAY, INPUT_BASE_ON_TIMING, input_size, input_timing, output_dispwin)==0)
            {
                pr_notice("[%s] zoom_imd_smooth_toggle done \n", __FUNCTION__);
            }

            msleep(30);// avoid share memory change when Vcpu get rpc
            */
        }
        else
        {
            scalerOrbitMemInfo.orbit_enable = 1;
            scalerOrbitMemInfo.orbit_mode = _VBE_PANEL_ORBIT_AUTO_MODE;
            scalerOrbitMemInfo.shift_range_x = 0;
            scalerOrbitMemInfo.shift_range_y = 0;
            scalerOrbitMemInfo.shift_x = 0;
            scalerOrbitMemInfo.shift_y = 0;
            scalerOrbitMemInfo.ori_input_x = vbe_orbit_input_size.src_wid;
            scalerOrbitMemInfo.ori_input_y = vbe_orbit_input_size.src_height;
            scalerOrbitMemInfo.force_update = 0;
            scalerOrbitMemInfo.execute_count = 0;
            scalerOrbitMemInfo.active_state = 1;
            vbe_disp_set_orbit_shift_info_sharememory(scalerOrbitMemInfo);//

            vbe_disp_orbit_set_frc_overscan(0);

            pr_notice("[%s] FRC mode rest \n", __FUNCTION__);
            if(ori_disp_wid!=0 && ori_disp_len!=0)
            {    drvif_color_ultrazoom_scalerup_setorbit(
                inSize.nWidth,
                inSize.nLength,
                ori_disp_wid,
                ori_disp_len,
                0,
                0,
                ori_disp_wid,
                ori_disp_len,
                0);
            }

        }
        while((IoReg_Read32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg) && IoReg_Read32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg)) && counter)
        {
            msleep(10);
            counter--;
        }
    }
    scalerOrbitMemInfo.orbit_enable = 0;
    scalerOrbitMemInfo.orbit_mode = _VBE_PANEL_OREBIT_MODE_MAX;
    scalerOrbitMemInfo.shift_range_x = 0;
    scalerOrbitMemInfo.shift_range_y = 0;
    scalerOrbitMemInfo.shift_x = 0;
    scalerOrbitMemInfo.shift_y = 0;
    scalerOrbitMemInfo.ori_input_x = ori_disp_wid;
    scalerOrbitMemInfo.ori_input_y = ori_disp_len;
    scalerOrbitMemInfo.force_update = 0;
    scalerOrbitMemInfo.execute_count = 0;
    scalerOrbitMemInfo.active_state = 0;
    vbe_disp_set_orbit_shift_info_sharememory(scalerOrbitMemInfo);//

    if((vbe_orbit_sub_input_size.src_wid !=0 || vbe_orbit_sub_input_size.src_height!=0))
    {

        vbe_disp_orbit_set_sub_overscan(1);
        input_size.srcx = vbe_orbit_sub_input_size.srcx ;
        input_size.srcy = vbe_orbit_sub_input_size.srcy ;
        input_size.src_wid = vbe_orbit_sub_input_size.src_wid;
        input_size.src_height = vbe_orbit_sub_input_size.src_height;

        input_timing.srcx = vbe_orbit_sub_input_timing_size.srcx ;
        input_timing.srcy = vbe_orbit_sub_input_timing_size.srcy ;
        input_timing.src_wid = vbe_orbit_sub_input_timing_size.src_wid;
        input_timing.src_height = vbe_orbit_sub_input_timing_size.src_height;

        output_dispwin.srcx = vbe_orbit_sub_output_size.srcx;
        output_dispwin.srcy = vbe_orbit_sub_output_size.srcy;
        output_dispwin.src_wid = vbe_orbit_sub_output_size.src_wid ;
        output_dispwin.src_height = vbe_orbit_sub_output_size.src_height;

        if(zoom_imd_smooth_toggle_config(SLR_SUB_DISPLAY, INPUT_BASE_ON_TIMING, input_size, input_timing, output_dispwin)==0)
        {
            pr_notice("[%s] zoom_imd_smooth_toggle done \n", __FUNCTION__);
        }

        vbe_disp_orbit_set_sub_overscan(0);
    }


    GDMA_OSDShiftUpscale_wrapper(1,0,0,0,0,0);// OSD reset
}


/*api which have protect by forcebg_semaphore*/
void vbe_disp_orbit_position_update(unsigned char tableIdx,unsigned char force_update)
{
//	ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl2_reg;
	static unsigned char previous_tableIdx=0xff;
//	ppoverlay_display_timing_ctrl2_RBUS ppoverlay_display_timing_ctrl2_reg;
//	ppoverlay_memcdtg_control_4_RBUS 	ppoverlay_memcdtg_control_4_reg;
	unsigned int orbit_table_index_max;
	ORBIT_PIXEL_SHIFT_STRUCT orbit_shift;

	if(tableIdx == 0xff){
		vbe_disp_orbit_reset_position_justscan();
		vbe_disp_orbit_reset_position_overscan();
        orbit_shift.x =0;
        orbit_shift.y =0;
        Set_Orbit_Shift_Data(orbit_shift);
        previous_tableIdx=0xff;
		return;
	}

	if(!Scaler_get_orbit_algo_status())
		return;

	orbit_table_index_max = vbe_disp_orbit_get_max_table_index();
    vbe_disp_orbit_set_forceupdate_state(force_update);

	if(previous_tableIdx!=tableIdx || force_update){
		previous_tableIdx=tableIdx;
	}else{
		return;
	}

	if(tableIdx>=orbit_table_index_max){
		tableIdx = 0;
		previous_tableIdx=tableIdx;
	}

	orbit_shift = vbe_disp_calculate_orbit_position(orbit_move_range[vbe_disp_oled_orbit_mode].x, orbit_move_range[vbe_disp_oled_orbit_mode].y, tableIdx);
    Set_Orbit_Shift_Data(orbit_shift);
	if(vbe_disp_oled_orbit_mode == _VBE_PANEL_ORBIT_AUTO_MODE){
		vbe_disp_orbit_set_position_overscan(orbit_shift.x, orbit_shift.y);
	}else if(vbe_disp_oled_orbit_mode == _VBE_PANEL_ORBIT_STORE_MODE){
		vbe_disp_orbit_set_position_overscan(orbit_shift.x, orbit_shift.y);
	}else{
		//not support type
		pr_notice("\n orbit do nothing");
	}
	 pr_notice("\n (tableIdx=%d)orbit_pixel_shift = %d, orbit_line_shift=%d, mode=(%x) \n",tableIdx, orbit_shift.x, orbit_shift.y, vbe_disp_oled_orbit_mode);
}

#endif

extern unsigned char drvif_scaler_frc2fsync_check_fsync_lock(void);

static irqreturn_t vbe_timer_display_interrupt(int irq, void *dev_id)
{
	//static unsigned int before_time = 0;
	//unsigned int after_time = 0;
	if(TIMER_ISR_get_tc7_int(IoReg_Read32(TIMER_ISR_reg))) {
        //after_time = IoReg_Read32(SCPU_CLK90K_LO_reg)/90;

		if(drvif_scaler_frc2fsync_check_fsync_lock()==TRUE){
			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"fsync ok#\n");
			// disable timer7
			IoReg_Write32(TIMER_TC7CR_reg, 0);
			// write 1 clear
			IoReg_Write32(TIMER_ISR_reg, TIMER_ISR_tc7_int_mask);
			// disable timer7 interrupt
			IoReg_Write32(TIMER_TCICR, TIMER_TCICR_tc7ie_mask|0);
			return IRQ_HANDLED;
		}

        //if(IoReg_Read32(0xb8022288)&_BIT22)
            //pr_emerg("#v(%d)#\n", after_time-before_time);
        //before_time = after_time;

		// disable timer7
		IoReg_Write32(TIMER_TC7CR_reg, 0);
		// write 1 clear
		IoReg_Write32(TIMER_ISR_reg, TIMER_ISR_tc7_int_mask);

		rtk_timer_set_target(7, TIMER_CLOCK/4000); // 2ms

		// enable timer7
		IoReg_Write32(TIMER_TC7CR_reg, TIMER_TC7CR_tc7en_mask);

		return IRQ_HANDLED;
    }
    return IRQ_NONE;
}

void vbe_disp_pwm_frequency_update(bool bEnableDB)
{
	ppoverlay_double_buffer_ctrl_RBUS ppoverlay_double_buffer_ctrl_reg;
	ppoverlay_dv_total_RBUS dv_total_reg;
	unsigned int vtotal;
	unsigned long flags;//for spin_lock_irqsave

	if(vbe_disp_get_adaptivestream_fs_mode() == 1){
		vtotal = scaler_disp_smooth_get_memc_protect_vtotal_By_100();
	}else{
		spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
		ppoverlay_double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
		ppoverlay_double_buffer_ctrl_reg.dreg_dbuf_read_sel = 1;  //D7_read_sel
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_reg.regValue);
		dv_total_reg.regValue = IoReg_Read32(PPOVERLAY_DV_total_reg);
		vtotal = dv_total_reg.dv_total;
		spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
		vtotal *= 100;
	}


#ifdef CONFIG_RTK_KDRV_PWM
	rtk_pwm_set_scaler_source(Get_DISP_HORIZONTAL_TOTAL(),vtotal, 2, bEnableDB);
#endif
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "########vbe_disp_pwm_frequency_update vtotal:%d##########\r\n", vtotal);

}

unsigned int p0_lane_power_value;
unsigned int p1_lane_power_value;
unsigned int p2_lane_power_value;
unsigned int p3_lane_power_value;
void vbe_disp_lane_power_off(void)
{
	pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_28_RBUS pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_28_reg;

	if(IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg)!=0){
		vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg);
	}
	pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_28_reg.regValue = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg);
	pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_28_reg.regValue = 0;
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg, pinmux_lvdsphy_lvdsepivby1_phy_ctrl_0_28_reg.regValue);

	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"turn off disp lane Power\n");
}
void vbe_disp_lane_power_on(void)
{
	if(vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_S_R == 0){
		if(IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg)!=0){
			vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_S_R = IoReg_Read32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg);
		}else{
			//error recovery
			vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_S_R = 0xfff;
		}
	}
	IoReg_Write32(PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_reg , vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_S_R);
	rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"[vbe_disp_lane_power_on] turn on disp lane Power (lane:%x)\n", vbe_disp_suspend_resume.PINMUX_LVDSPHY_LVDSEPIVBY1_PHY_CTRL_0_28_S_R);
}

void vbe_disp_debug_framerate_change_msg(void)
{

	UINT32 u32_iFrameRateHz_pre = 0;
	UINT32 u32_iFrameRateHz = 0;
	UINT32 u32_oFrameRateHz_pre = 0;
	UINT32 u32_oFrameRateHz = 0;
	UINT32 u32_iFrameRateTh = (27000000/50 - 27000000/60)/2;
	UINT32 u32_oFrameRateTh = (27000000/100 - 27000000/120)/2;
	UINT32 u32_iFrameRate = 0;
	UINT32 u32_oFrameRate = 0;
	UINT32 u32_timingMode = 0;
	static UINT32 u32_iFrameRate_Pre = 0;
	static UINT32 u32_oFrameRate_Pre = 0;
	static UINT32 u32_timingMode_Pre = 0;
	UINT8 u1_trig_iFrameRate_noMatch;
	UINT8 u1_trig_oFrameRate_noMatch;

    u32_iFrameRate = IoReg_Read32(PPOVERLAY_uzudtg_DVS_cnt_reg);
	u32_oFrameRate = IoReg_Read32(PPOVERLAY_memcdtg_DVS_cnt_reg);
	u32_timingMode = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg);

	u32_iFrameRateHz_pre    = (u32_iFrameRate_Pre==0) ? 0: (27000000*10/u32_iFrameRate_Pre);
	u32_iFrameRateHz        =  (u32_iFrameRate==0) ? 0: (27000000*10/u32_iFrameRate);
	u32_oFrameRateHz_pre    =  (u32_oFrameRate_Pre==0) ? 0: (27000000*10/u32_oFrameRate_Pre);
	u32_oFrameRateHz        =  (u32_oFrameRate==0) ? 0: (27000000*10/u32_oFrameRate);
	u32_timingMode			=  (u32_timingMode&~(0xE3FFFFFF))>>26;


	u1_trig_iFrameRate_noMatch	= (u32_iFrameRate>u32_iFrameRate_Pre)? ((u32_iFrameRate -u32_iFrameRate_Pre) > u32_iFrameRateTh) : ((u32_iFrameRate_Pre -u32_iFrameRate) > u32_iFrameRateTh);
	u1_trig_oFrameRate_noMatch    = (u32_oFrameRate>u32_oFrameRate_Pre)? ((u32_oFrameRate -u32_oFrameRate_Pre) > u32_oFrameRateTh) : ((u32_oFrameRate_Pre -u32_oFrameRate) > u32_oFrameRateTh);

	if(u1_trig_iFrameRate_noMatch )
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "[FR] in FrameRate Change!!!(%dHz(%d) -> %dHz(%d)),(t:%d)\n\r", u32_iFrameRateHz_pre, u32_iFrameRate_Pre, u32_iFrameRateHz, u32_iFrameRate, rtd_inl(TIMER_SCPU_CLK90K_LO_reg));
	//if(u1_trig_oFrameRate_noMatch  && u1_IOPhase_N2M_logEn)
	if(u1_trig_oFrameRate_noMatch )
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "[FR] out FrameRate Change!!!(%dHz(%d) -> %dHz(%d)),(t:%d)\n\r", u32_oFrameRateHz_pre, u32_oFrameRate_Pre, u32_oFrameRateHz, u32_oFrameRate, rtd_inl(TIMER_SCPU_CLK90K_LO_reg));

	if(u32_timingMode_Pre != u32_timingMode){
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "[FR] Time Mode changed!!!(%d -> %d),(t:%d)\n\r", u32_timingMode_Pre, u32_timingMode, rtd_inl(TIMER_SCPU_CLK90K_LO_reg));
	}
	u32_iFrameRate_Pre      = u32_iFrameRate;
	u32_oFrameRate_Pre      = u32_oFrameRate;
	u32_timingMode_Pre		= u32_timingMode;
	//**************************//

}

#define FLAG_IRQ_NUM 16

void vbe_disp_dynamic_polarity_control_init(void)
{
	sfg_pat_det_window_h_ini_sta_width_RBUS sfg_pat_det_window_h_ini_sta_width_reg;
	sfg_pat_det_window_v_ini_sta_height_RBUS sfg_pat_det_window_v_ini_sta_height_reg;
	sfg_pat_det_ctrl_1_RBUS sfg_pat_det_ctrl_1_reg;
	sfg_pat_det_ctrl_2_RBUS sfg_pat_det_ctrl_2_reg;
	sfg_pat_det_ctrl_3_RBUS sfg_pat_det_ctrl_3_reg;
	sfg_pat_det_ctrl_4_RBUS sfg_pat_det_ctrl_4_reg;
	sfg_pat_det_ctrl_6_RBUS sfg_pat_det_ctrl_6_reg;

	if(Get_DISPLAY_REFRESH_RATE()==60){
		sfg_pat_det_window_h_ini_sta_width_reg.pat_det_h_ini_sta = 0;
		sfg_pat_det_window_h_ini_sta_width_reg.pat_det_width = 0xF00;
		sfg_pat_det_window_v_ini_sta_height_reg.pat_det_v_ini_sta = 0;
		sfg_pat_det_window_v_ini_sta_height_reg.pat_det_height = 0x870;
		sfg_pat_det_ctrl_1_reg.pxl_diff_12 = 0x1ff;
		sfg_pat_det_ctrl_1_reg.pxl_diff_sub_12 = 0x3f;
		sfg_pat_det_ctrl_2_reg.pxl_diff_13 = 0x1ff;
		sfg_pat_det_ctrl_2_reg.pxl_diff_sub_13 = 0x3f;
		sfg_pat_det_ctrl_3_reg.vline_num_thresh_12 = 0x214;
		sfg_pat_det_ctrl_3_reg.h_num_thresh_12 = 0x3BC;
		sfg_pat_det_ctrl_4_reg.vline_num_thresh_13 = 0x214;
		sfg_pat_det_ctrl_4_reg.h_num_thresh_13 = 0x3BC;
		sfg_pat_det_ctrl_6_reg.vsign_num_thresh_12 = 0x85;
		sfg_pat_det_ctrl_6_reg.vsign_num_thresh_13 = 0x85;
	}else{
		sfg_pat_det_window_h_ini_sta_width_reg.pat_det_h_ini_sta = 0;
		sfg_pat_det_window_h_ini_sta_width_reg.pat_det_width = 0x780;
		sfg_pat_det_window_v_ini_sta_height_reg.pat_det_v_ini_sta = 0;
		sfg_pat_det_window_v_ini_sta_height_reg.pat_det_height = 0x870;
		sfg_pat_det_ctrl_1_reg.pxl_diff_12 = 0x1ff;
		sfg_pat_det_ctrl_1_reg.pxl_diff_sub_12 = 0x3f;
		sfg_pat_det_ctrl_2_reg.pxl_diff_13 = 0x1ff;
		sfg_pat_det_ctrl_2_reg.pxl_diff_sub_13 = 0x3f;
		sfg_pat_det_ctrl_3_reg.vline_num_thresh_12 = 0x4B0;
		sfg_pat_det_ctrl_3_reg.h_num_thresh_12 = 0xB40;
		sfg_pat_det_ctrl_4_reg.vline_num_thresh_13 = 0x4B0;
		sfg_pat_det_ctrl_4_reg.h_num_thresh_13 = 0xB40;
		sfg_pat_det_ctrl_6_reg.vsign_num_thresh_12 = 0x85;
		sfg_pat_det_ctrl_6_reg.vsign_num_thresh_13 = 0x85;
	}

	IoReg_Write32(SFG_Pat_det_window_H_ini_sta_width_reg,sfg_pat_det_window_h_ini_sta_width_reg.regValue);
	IoReg_Write32(SFG_Pat_det_window_V_ini_sta_height_reg,sfg_pat_det_window_v_ini_sta_height_reg.regValue);
	IoReg_Write32(SFG_Pat_det_ctrl_1_reg,sfg_pat_det_ctrl_1_reg.regValue);
	IoReg_Write32(SFG_Pat_det_ctrl_2_reg,sfg_pat_det_ctrl_2_reg.regValue);
	IoReg_Write32(SFG_Pat_det_ctrl_3_reg,sfg_pat_det_ctrl_3_reg.regValue);
	IoReg_Write32(SFG_Pat_det_ctrl_4_reg,sfg_pat_det_ctrl_4_reg.regValue);
	IoReg_Write32(SFG_Pat_det_ctrl_6_reg,sfg_pat_det_ctrl_6_reg.regValue);
	vbe_dynamicPolarityControl_initialized_status = TRUE;
}

void vbe_disp_dynamic_polarity_control_set_detect_region(KADP_VIDEO_RECT_T detectRegions)
{
	sfg_pat_det_ctrl_3_RBUS sfg_pat_det_ctrl_3_reg;
	sfg_pat_det_ctrl_4_RBUS sfg_pat_det_ctrl_4_reg;
	sfg_pat_det_ctrl_6_RBUS sfg_pat_det_ctrl_6_reg;
	unsigned int hact, vact;

	/*
	a.	60Hz Panel : LG return special size Hact x Vact (���tporch)
	(1) Hact -4 write in 0xb802DC44[13:0] and 0xb802DC48[13:0]
	(2) Vact -8 write in 0xb802DC44[27:16] and 0xb802DC48[27:16]
	(3) (Vact -8)/4 write in 0xb802DC54[9:0] and 0xb802DC54[25:16]
	b.	120Hz Panel : LG return special size Hact x Vact (���tporch)
	(1) (Hact/2) -4 write in 0xb802DC44[13:0] and 0xb802DC48[13:0]
	(2) Vact -8 write in 0xb802DC44[27:16] and 0xb802DC48[27:16]
	(3) (Vact -8)/4 write in 0xb802DC54[9:0] and 0xb802DC54[25:16]
	*/

	hact = detectRegions.w;
	vact = detectRegions.h;

	sfg_pat_det_ctrl_3_reg.regValue = IoReg_Read32(SFG_Pat_det_ctrl_3_reg);
	sfg_pat_det_ctrl_4_reg.regValue = IoReg_Read32(SFG_Pat_det_ctrl_4_reg);
	sfg_pat_det_ctrl_6_reg.regValue = IoReg_Read32(SFG_Pat_det_ctrl_6_reg);
	if(Get_DISPLAY_REFRESH_RATE()==60){
		sfg_pat_det_ctrl_3_reg.h_num_thresh_12 = sfg_pat_det_ctrl_4_reg.h_num_thresh_13 = hact-4;
		sfg_pat_det_ctrl_3_reg.vline_num_thresh_12 = sfg_pat_det_ctrl_4_reg.vline_num_thresh_13 = vact-8;
		sfg_pat_det_ctrl_6_reg.vsign_num_thresh_12 = sfg_pat_det_ctrl_6_reg.vsign_num_thresh_13 = (vact-8)/4;
	}else{
		sfg_pat_det_ctrl_3_reg.h_num_thresh_12 = sfg_pat_det_ctrl_4_reg.h_num_thresh_13 = hact/2-4;
		sfg_pat_det_ctrl_3_reg.vline_num_thresh_12 = sfg_pat_det_ctrl_4_reg.vline_num_thresh_13 = vact-8;
		sfg_pat_det_ctrl_6_reg.vsign_num_thresh_12 = sfg_pat_det_ctrl_6_reg.vsign_num_thresh_13 = (vact-8)/4;
	}

	IoReg_Write32(SFG_Pat_det_ctrl_3_reg,sfg_pat_det_ctrl_3_reg.regValue);
	IoReg_Write32(SFG_Pat_det_ctrl_4_reg,sfg_pat_det_ctrl_4_reg.regValue);
	IoReg_Write32(SFG_Pat_det_ctrl_6_reg,sfg_pat_det_ctrl_6_reg.regValue);

}

void vbe_disp_dynamic_polarity_control_set_detect_framecounts(unsigned int detectFrames)
{
	vbe_dynamicPolarityControl_detect_frames = detectFrames;
}

unsigned int vbe_disp_dynamic_polarity_control_get_detect_framecounts(void)
{
	if(vbe_dynamicPolarityControl_debug_mode){
		if((IoReg_Read32(VBY1_META_DATA_3_reg)&0xffff)!=0)
			return (IoReg_Read32(VBY1_META_DATA_3_reg)&0xffff);
	}
	return vbe_dynamicPolarityControl_detect_frames;
}

void vbe_disp_dynamic_polarity_control_set_detect_thresholds(unsigned int threshold)
{
	vbe_dynamicPolarityControl_detect_threadhold = threshold;
}

unsigned int vbe_disp_dynamic_polarity_control_get_detect_threshold(void)
{
	return vbe_dynamicPolarityControl_detect_threadhold;
}

void vbe_disp_dynamic_polarity_control_set_detect_enable(unsigned char bEnable)
{
	sfg_pattern_detect_ctrl_RBUS sfg_pattern_detect_ctrl_reg;
	vbe_dynamicPolarityControl_enable  = bEnable;
	if(!vbe_dynamicPolarityControl_initialized_status)
		vbe_disp_dynamic_polarity_control_init();
	sfg_pattern_detect_ctrl_reg.regValue = IoReg_Read32(SFG_Pattern_detect_CTRL_reg);
	sfg_pattern_detect_ctrl_reg.pat_det_en = bEnable;
	IoReg_Write32(SFG_Pattern_detect_CTRL_reg, sfg_pattern_detect_ctrl_reg.regValue);
	if(bEnable ==0)
		vbe_dynamicPolarityControl_check_frame = 0;
}

void vbe_disp_dynamic_polarity_control_enable_debug_mode(unsigned char bEnable)
{
	vbe_dynamicPolarityControl_debug_mode = bEnable;
}

void vbe_disp_dynamic_polarity_control_set_control_packet(unsigned char bEnable)
{
	epi_epi_lane0_ctr1_odata_RBUS  	epi_epi_lane0_ctr1_odata_reg;
	epi_epi_lane1_ctr1_odata_RBUS  	epi_epi_lane1_ctr1_odata_reg;
	epi_epi_lane2_ctr1_odata_RBUS  	epi_epi_lane2_ctr1_odata_reg;
	epi_epi_lane3_ctr1_odata_RBUS  	epi_epi_lane3_ctr1_odata_reg;
	epi_epi_lane4_ctr1_odata_RBUS  	epi_epi_lane4_ctr1_odata_reg;
	epi_epi_lane5_ctr1_odata_RBUS  	epi_epi_lane5_ctr1_odata_reg;
	epi_epi_lane6_ctr1_odata_RBUS  	epi_epi_lane6_ctr1_odata_reg;
	epi_epi_lane7_ctr1_odata_RBUS  	epi_epi_lane7_ctr1_odata_reg;
	epi_epi_lane8_ctr1_odata_RBUS  	epi_epi_lane8_ctr1_odata_reg;
	epi_epi_lane9_ctr1_odata_RBUS  	epi_epi_lane9_ctr1_odata_reg;
	epi_epi_lane10_ctr1_odata_RBUS 	epi_epi_lane10_ctr1_odata_reg;
	epi_epi_lane11_ctr1_odata_RBUS 	epi_epi_lane11_ctr1_odata_reg;

	epi_epi_lane0_ctr1_odata_reg.regValue  = IoReg_Read32(EPI_EPI_LANE0_CTR1_ODATA_reg );
	epi_epi_lane1_ctr1_odata_reg.regValue  = IoReg_Read32(EPI_EPI_LANE1_CTR1_ODATA_reg );
	epi_epi_lane2_ctr1_odata_reg.regValue  = IoReg_Read32(EPI_EPI_LANE2_CTR1_ODATA_reg );
	epi_epi_lane3_ctr1_odata_reg.regValue  = IoReg_Read32(EPI_EPI_LANE3_CTR1_ODATA_reg );
	epi_epi_lane4_ctr1_odata_reg.regValue  = IoReg_Read32(EPI_EPI_LANE4_CTR1_ODATA_reg );
	epi_epi_lane5_ctr1_odata_reg.regValue  = IoReg_Read32(EPI_EPI_LANE5_CTR1_ODATA_reg );
	epi_epi_lane6_ctr1_odata_reg.regValue  = IoReg_Read32(EPI_EPI_LANE6_CTR1_ODATA_reg );
	epi_epi_lane7_ctr1_odata_reg.regValue  = IoReg_Read32(EPI_EPI_LANE7_CTR1_ODATA_reg );
	epi_epi_lane8_ctr1_odata_reg.regValue  = IoReg_Read32(EPI_EPI_LANE8_CTR1_ODATA_reg );
	epi_epi_lane9_ctr1_odata_reg.regValue  = IoReg_Read32(EPI_EPI_LANE9_CTR1_ODATA_reg );
	epi_epi_lane10_ctr1_odata_reg.regValue = IoReg_Read32(EPI_EPI_LANE10_CTR1_ODATA_reg);
	epi_epi_lane11_ctr1_odata_reg.regValue = IoReg_Read32(EPI_EPI_LANE11_CTR1_ODATA_reg);

	if(bEnable){
		epi_epi_lane0_ctr1_odata_reg.regValue  |= _BIT11;
		epi_epi_lane1_ctr1_odata_reg.regValue  |= _BIT11;
		epi_epi_lane2_ctr1_odata_reg.regValue  |= _BIT11;
		epi_epi_lane3_ctr1_odata_reg.regValue  |= _BIT11;
		epi_epi_lane4_ctr1_odata_reg.regValue  |= _BIT11;
		epi_epi_lane5_ctr1_odata_reg.regValue  |= _BIT11;
		epi_epi_lane6_ctr1_odata_reg.regValue  |= _BIT11;
		epi_epi_lane7_ctr1_odata_reg.regValue  |= _BIT11;
		epi_epi_lane8_ctr1_odata_reg.regValue  |= _BIT11;
		epi_epi_lane9_ctr1_odata_reg.regValue  |= _BIT11;
		epi_epi_lane10_ctr1_odata_reg.regValue |= _BIT11;
		epi_epi_lane11_ctr1_odata_reg.regValue |= _BIT11;
	}else{
		epi_epi_lane0_ctr1_odata_reg.regValue  &= ~_BIT11;
		epi_epi_lane1_ctr1_odata_reg.regValue  &= ~_BIT11;
		epi_epi_lane2_ctr1_odata_reg.regValue  &= ~_BIT11;
		epi_epi_lane3_ctr1_odata_reg.regValue  &= ~_BIT11;
		epi_epi_lane4_ctr1_odata_reg.regValue  &= ~_BIT11;
		epi_epi_lane5_ctr1_odata_reg.regValue  &= ~_BIT11;
		epi_epi_lane6_ctr1_odata_reg.regValue  &= ~_BIT11;
		epi_epi_lane7_ctr1_odata_reg.regValue  &= ~_BIT11;
		epi_epi_lane8_ctr1_odata_reg.regValue  &= ~_BIT11;
		epi_epi_lane9_ctr1_odata_reg.regValue  &= ~_BIT11;
		epi_epi_lane10_ctr1_odata_reg.regValue &= ~_BIT11;
		epi_epi_lane11_ctr1_odata_reg.regValue &= ~_BIT11;
	}
	IoReg_Write32(EPI_EPI_LANE0_CTR1_ODATA_reg ,	epi_epi_lane0_ctr1_odata_reg.regValue );
	IoReg_Write32(EPI_EPI_LANE1_CTR1_ODATA_reg ,	epi_epi_lane1_ctr1_odata_reg.regValue );
	IoReg_Write32(EPI_EPI_LANE2_CTR1_ODATA_reg ,	epi_epi_lane2_ctr1_odata_reg.regValue );
	IoReg_Write32(EPI_EPI_LANE3_CTR1_ODATA_reg ,	epi_epi_lane3_ctr1_odata_reg.regValue );
	IoReg_Write32(EPI_EPI_LANE4_CTR1_ODATA_reg ,	epi_epi_lane4_ctr1_odata_reg.regValue );
	IoReg_Write32(EPI_EPI_LANE5_CTR1_ODATA_reg ,	epi_epi_lane5_ctr1_odata_reg.regValue );
	IoReg_Write32(EPI_EPI_LANE6_CTR1_ODATA_reg ,	epi_epi_lane6_ctr1_odata_reg.regValue );
	IoReg_Write32(EPI_EPI_LANE7_CTR1_ODATA_reg ,	epi_epi_lane7_ctr1_odata_reg.regValue );
	IoReg_Write32(EPI_EPI_LANE8_CTR1_ODATA_reg ,	epi_epi_lane8_ctr1_odata_reg.regValue );
	IoReg_Write32(EPI_EPI_LANE9_CTR1_ODATA_reg ,	epi_epi_lane9_ctr1_odata_reg.regValue );
	IoReg_Write32(EPI_EPI_LANE10_CTR1_ODATA_reg,	epi_epi_lane10_ctr1_odata_reg.regValue);
	IoReg_Write32(EPI_EPI_LANE11_CTR1_ODATA_reg,	epi_epi_lane11_ctr1_odata_reg.regValue);
}

void vbe_disp_dynamic_polarity_control_analyze_pattern(void)
{
	static unsigned char dpc_irq_flag[FLAG_IRQ_NUM];
//	unsigned int detect_max_frame = vbe_disp_dynamic_polarity_control_get_detect_framecounts()*DPC_ONE_RUN_FRAME;
	unsigned int detect_max_frame = vbe_disp_dynamic_polarity_control_get_detect_framecounts();
	unsigned int detect_threashold = vbe_disp_dynamic_polarity_control_get_detect_threshold();
//	unsigned char case_type=0;
	sfg_pat_det_ctrl_5_RBUS sfg_pat_det_ctrl_5_reg;

	if(vbe_dynamicPolarityControl_enable == 0){
		return;
	}

	if(vbe_dynamicPolarityControl_check_frame == 0){
		memset(&dpc_irq_flag, 0, FLAG_IRQ_NUM);
	}

	if(vbe_dynamicPolarityControl_check_frame < detect_max_frame){
		unsigned int i =0;
/******
Frame01 : 0xb802DC4C = 0x1FFFF clear flag  ->  0xb802DC38[0] = 1 enable DPC
 Frame02 : don't care
 �K
�K
�K
FrameN : read 0xb802DC4C flag -> 0xb802DC38[0] = 0 disable DPC

FrameN+1 : 0xb802DC38[0] = 1 enable DPC
FrameN+2 : don't care
 �K
�K
�K
Frame2N : read 0xb802DC4C flag -> 0xb802DC38[0] = 0 disable DPC

Frame2N+1 : 0xb802DC38[0] = 1 enable DPC
�K
�K
�K

******/
		//if((vbe_dynamicPolarityControl_check_frame%DPC_ONE_RUN_FRAME)==0){
		if(vbe_dynamicPolarityControl_check_frame ==0)
		{
			IoReg_SetBits(SFG_Pattern_detect_CTRL_reg, SFG_Pattern_detect_CTRL_pat_det_en_mask);
		}
		if(vbe_dynamicPolarityControl_check_frame == detect_max_frame-1){
			sfg_pat_det_ctrl_5_reg.regValue = IoReg_Read32(SFG_Pat_det_ctrl_5_reg);
			//pr_emerg("vbe_dynamicPolarityControl_check_frame=%d \n",vbe_dynamicPolarityControl_check_frame);
			//collect data
			for(i=0; i< FLAG_IRQ_NUM ; i++)
			{
				if((sfg_pat_det_ctrl_5_reg.irq_flag)&(1<<i)){
					dpc_irq_flag[i]++;
					//pr_emerg("irg[%d]=%d \n", i ,dpc_irq_flag[i]);
				}
			}
			//clear pendings
			sfg_pat_det_ctrl_5_reg.irq_flag = 0x1FFFF;
			IoReg_Write32(SFG_Pat_det_ctrl_5_reg, sfg_pat_det_ctrl_5_reg.regValue);
			IoReg_ClearBits(SFG_Pattern_detect_CTRL_reg, SFG_Pattern_detect_CTRL_pat_det_en_mask);
		//	IoReg_SetBits(SFG_Pattern_detect_CTRL_reg, SFG_Pattern_detect_CTRL_pat_det_en_mask);
		}
		vbe_dynamicPolarityControl_check_frame++;
		//pr_notice("###### frame_count =%d, SFG_Pat_det_ctrl_5_reg=%x \n",vbe_dynamicPolarityControl_check_frame,IoReg_Read32(SFG_Pat_det_ctrl_5_reg));
	}

	//data collecting done
	if(vbe_dynamicPolarityControl_check_frame == detect_max_frame){

		if(vbe_dynamicPolarityControl_debug_mode){
			unsigned int i=0, j=0;
			unsigned int temp =0, temp2=0;
			for(i=0; i< FLAG_IRQ_NUM ; i++)
			{
				//pr_emerg("######  irg[%d]=%d \n", i ,dpc_irq_flag[i]);
				//dummy register for debug
				if(i<8){
					temp |= dpc_irq_flag[i]<<(i*4);
					IoReg_Write32(VBY1_META_DATA_0_reg, temp);
				}else{
					j = i%8;
					temp2 |= dpc_irq_flag[i]<<(j*4);
					IoReg_Write32(VBY1_META_DATA_1_reg, temp2);
				}
			}
			pr_notice("###### detect_max_frame=%d, result[%x.%x] \n", detect_max_frame, IoReg_Read32(VBY1_META_DATA_0_reg), IoReg_Read32(VBY1_META_DATA_1_reg));
		}
#if 0
		if((dpc_irq_flag[1] >= detect_threashold) && (dpc_irq_flag[0] >= detect_threashold)){
			case_type = 1; //Case1   Flag : [1][0], need PQ
		}
		else if((dpc_irq_flag[3] >= detect_threashold) && (dpc_irq_flag[2] >= detect_threashold)){
			case_type = 3; //Case3   Flag : [3][2]  need PQ
		}
		else if((dpc_irq_flag[6] >= detect_threashold) && (dpc_irq_flag[4] >= detect_threashold)){
			case_type = 5; //Case5   Flag : [6][4] no need PQ
		}
		else if((dpc_irq_flag[7] >= detect_threashold) && (dpc_irq_flag[5] >= detect_threashold)){
			case_type = 6; //Case6   Flag : [7][5] no need PQ
		}
		else if((dpc_irq_flag[6] >= detect_threashold) && (dpc_irq_flag[5] >= detect_threashold)){
			case_type = 7; //Case7   Flag : [6][5] no need PQ
		}
		else if((dpc_irq_flag[7] >= detect_threashold) && (dpc_irq_flag[4] >= detect_threashold)){
			case_type = 8; //Case7   Flag : [7][4] no need PQ
		}
		else if((dpc_irq_flag[9] >= detect_threashold) && (dpc_irq_flag[8] >= detect_threashold)){
			case_type = 9; //Case9   Flag : [9][8] no need PQ
		}
		else if((dpc_irq_flag[11] >= detect_threashold) && (dpc_irq_flag[10] >= detect_threashold)){
			case_type = 11;  //Case9   Flag : 11][10]  need PQ
		}

		if((case_type == 1) || (case_type == 3) || (case_type == 5) || (case_type == 6) ||
			(case_type == 7) || (case_type == 8) || (case_type == 9) || (case_type == 11)){
				vbe_disp_dynamic_polarity_control_set_control_packet(1);
				//test code
				//dummy register for debug
				if(vbe_dynamicPolarityControl_debug_mode)
					IoReg_Write32(VBY1_META_DATA_2_reg, case_type);

		}else{
			vbe_disp_dynamic_polarity_control_set_control_packet(0);
			//test code
			if(vbe_dynamicPolarityControl_debug_mode)
				IoReg_Write32(VBY1_META_DATA_2_reg, 0xff);
		}
#else
		{	//check result
			int i = 0, result=0;

			for(i=0; i<FLAG_IRQ_NUM; i++){
				if(dpc_irq_flag[i]>detect_threashold){
					result = 1;
					break;
				}
			}

			if(result){
				vbe_disp_dynamic_polarity_control_set_control_packet(1);
			}else{
				vbe_disp_dynamic_polarity_control_set_control_packet(0);
			}
		}

#endif
		vbe_dynamicPolarityControl_check_frame = 0;
	}


}
#define _28S_COUNTER_TARGET 28*90000


void vbe_disp_tcon_28s_toggle_set_enable(unsigned char bEnable)
{
	vbe_tcon_28s_toggle_enable = bEnable;
}

unsigned char vbe_disp_tcon_28s_toggle_get_enable(void)
{
	return vbe_tcon_28s_toggle_enable;
}

void vbe_disp_tcon_28s_toggle_reset_timer(void)
{
	vbe_tcon_28s_timer_counter = 0;
}

void vbe_disp_tcon_28s_toggle_init(void)
{
	//TCON18: across line mode1
	IoReg_Write32(TCON_TCON18_HSE_reg,0x044C044C);
	IoReg_Write32(TCON_TCON18_VSE_reg,0x0001FFFF);
	IoReg_Mask32(TCON_TCON18_Ctrl_reg,0x00000080,0x00000120);
	//TCON24:
	IoReg_Write32(TCON_TCON24_HSE_reg,0x044C044C);
	IoReg_Write32(TCON_TCON24_VSE_reg,0x0001FFFF);
	IoReg_Write32(TCON_TCON24_Ctrl_reg,0x000001A0);
	vbe_disp_tcon_28s_toggle_set_enable(1);
}

unsigned char vbe_disp_tcon_28s_toggle_check_timeout(void)
{
	unsigned int diff_time = 0;
	static unsigned int prev_time = 0;
	unsigned int current_time = 0;
	unsigned char result = 0;

	if(vbe_tcon_28s_toggle_enable){
		if(prev_time==0){
			prev_time = IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg);
		}else{
			current_time = IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg);
			if(current_time>= prev_time)
				diff_time = current_time-prev_time;
			else
				diff_time = (0xFFFFFFFF-prev_time)+current_time;
			vbe_tcon_28s_timer_counter += diff_time;
			prev_time = current_time;
		}
		if(vbe_tcon_28s_timer_counter >= _28S_COUNTER_TARGET)
			result = 1;
	}
	return result;
}

void vbe_disp_tcon_28s_toggle_set_state(unsigned char bState)
{
	vbe_tcon_28s_toggle_state = bState;
}

unsigned char vbe_disp_tcon_28s_toggle_get_state(void)
{
	return vbe_tcon_28s_toggle_state;
}

void vbe_disp_tcon_28s_toggle_handle_state(unsigned char bState)
{
	if(bState == DISP_TCON_TOGGLE_STATE_ACTIVE1){
		tcon_tcon18_ctrl_RBUS tcon_tcon18_ctrl_reg;
		tcon_tcon24_ctrl_RBUS tcon_tcon24_ctrl_reg;

		tcon_tcon18_ctrl_reg.regValue = IoReg_Read32(TCON_TCON18_Ctrl_reg);
		tcon_tcon18_ctrl_reg.tcon18_comb_inv = ~tcon_tcon18_ctrl_reg.tcon18_comb_inv;
		IoReg_Write32(TCON_TCON18_Ctrl_reg, tcon_tcon18_ctrl_reg.regValue);

		tcon_tcon24_ctrl_reg.regValue = IoReg_Read32(TCON_TCON24_Ctrl_reg);
		tcon_tcon24_ctrl_reg.tcon24_comb_inv = 0;
		IoReg_Write32(TCON_TCON24_Ctrl_reg, tcon_tcon24_ctrl_reg.regValue);
		pr_notice("[TCON_28S] handle_active1\n");
	}
	else if(bState == DISP_TCON_TOGGLE_STATE_ACTIVE2){
		tcon_tcon24_ctrl_RBUS tcon_tcon24_ctrl_reg;
		tcon_tcon24_ctrl_reg.regValue = IoReg_Read32(TCON_TCON24_Ctrl_reg);
		tcon_tcon24_ctrl_reg.tcon24_comb_inv = 1;
		IoReg_Write32(TCON_TCON24_Ctrl_reg, tcon_tcon24_ctrl_reg.regValue);
		//pr_notice("[TCON_28S] handle_active2\n");
	}else if(bState == DISP_TCON_TOGGLE_STATE_INIT){
		vbe_disp_tcon_28s_toggle_reset_timer();
		//pr_notice("[TCON_28S] handle_init\n");
	}else if(bState == DISP_TCON_TOGGLE_STATE_NONE){
		vbe_disp_tcon_28s_toggle_init();
		vbe_disp_tcon_28s_toggle_reset_timer();
		//pr_notice("[TCON_28S] handle_none\n");
	}else{
		vbe_disp_tcon_28s_toggle_reset_timer();
	}
}

#define VRR_FR_PROTECT_LOWER_BOUND_1 0xD4A37	// 30 Hz
#define VRR_FR_PROTECT_UPPER_BOUND_1 0x11E999   // 23 Hz
#define VRR_FR_PROTECT_LOWER_BOUND_2 0x6C0FE	// 61 Hz
#define VRR_FR_PROTECT_UPPER_BOUND_2 0x8F4CC    // 46 Hz

#define VRR_FR_FRAC_1_1_LOWER_BOUND 0x6C0FE	   // 61 Hz
#define VRR_FR_FRAC_1_1_UPPER_BOUND 0x8C404   // 47 Hz
#define VRR_FR_FRAC_1_2_LOWER_BOUND 0xD4A37	   // 31 Hz
#define VRR_FR_FRAC_1_2_UPPER_BOUND 0x11E999   // 23 Hz
//#define VRR_FR_FRAC_2_5_LOWER_BOUND 0x11E999   // 23 Hz
//#define VRR_FR_FRAC_2_5_UPPER_BOUND 0xD4A37	   // 30 Hz

unsigned char Freesync_mode_enable = 0;
unsigned char scaler_VRR_timingMode_flag = 0;//record scaler is use vrr or not

unsigned char vbe_disp_get_freesync_mode_flag(void)
{
	if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI)
	{
		return Freesync_mode_enable;//drvif_Hdmi_GetAMDFreeSyncEnable();
	}
	else
		return 0;
}

void vbe_disp_set_freesync_mode_flag (unsigned char enable)
{
	Freesync_mode_enable = enable;
}

unsigned char vbe_disp_get_VRR_timingMode_flag(void)
{
	if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_HDMI)
	{
		return scaler_VRR_timingMode_flag;//drvif_Hdmi_GetVRREnable();
	}
	else
		return 0;
}
void vbe_disp_set_VRR_timingMode_flag(unsigned char flag)
{
    scaler_VRR_timingMode_flag = flag;
}

unsigned char pre_VRR_ALLM_flag = 0;

unsigned char vbe_disp_get_pre_VRR_ALLM_flag(void)
{
	return pre_VRR_ALLM_flag;
}

void vbe_disp_set_pre_VRR_ALLM_flag (unsigned char enable)
{
	pre_VRR_ALLM_flag = enable;
}


unsigned char vbe_disp_get_VRR_ALLM_flag(void)
{
	return  (unsigned char)drvif_Hdmi_GetALLMEnable();
}


unsigned char vbe_disp_check_support_VRR_framerate_range(void)
{
	UINT32 u32_iFrameRate = 0;

	u32_iFrameRate = IoReg_Read32(PPOVERLAY_IVS_cnt_3_reg);

	if(((u32_iFrameRate<=VRR_FR_PROTECT_UPPER_BOUND_1)&&(u32_iFrameRate>=VRR_FR_PROTECT_LOWER_BOUND_1)) ||
		((u32_iFrameRate<=VRR_FR_PROTECT_UPPER_BOUND_2)&&(u32_iFrameRate>=VRR_FR_PROTECT_LOWER_BOUND_2))){
		return TRUE;
	}else{
		return FALSE;
	}
}

VBE_DISP_VRR_FRACTIONAL_TIMING_MODE_T vbe_disp_get_VRR_timing_fractional_mode(void)
{
	UINT32 u32_iFrameRate = 0;

	u32_iFrameRate = IoReg_Read32(PPOVERLAY_IVS_cnt_3_reg);

	if((u32_iFrameRate<=VRR_FR_FRAC_1_1_UPPER_BOUND)&&(u32_iFrameRate>=VRR_FR_FRAC_1_1_LOWER_BOUND)){
		return VBE_DISP_VRR_1_1;
	}else if((u32_iFrameRate<=VRR_FR_FRAC_1_2_UPPER_BOUND)&&(u32_iFrameRate>=VRR_FR_FRAC_1_2_LOWER_BOUND)){
		return VBE_DISP_VRR_1_2;
	}else
		return VBE_DISP_VRR_MAX;

	return VBE_DISP_VRR_MAX;
}

VBE_DISP_VRR_FRACTIONAL_TIMING_MODE_T vbe_disp_get_Freesync_timing_fractional_mode(void)
{
	UINT32 u32_iFrameRate = 0;

	u32_iFrameRate = IoReg_Read32(PPOVERLAY_IVS_cnt_3_reg);

#if 1
	return VBE_DISP_VRR_1_1;
#else
	if((u32_iFrameRate<=VRR_FR_FRAC_1_1_UPPER_BOUND)&&(u32_iFrameRate>=VRR_FR_FRAC_1_1_LOWER_BOUND)){
		return VBE_DISP_VRR_1_1;
	}else if((u32_iFrameRate<=VRR_FR_FRAC_1_2_UPPER_BOUND)&&(u32_iFrameRate>=VRR_FR_FRAC_1_2_LOWER_BOUND)){
		return VBE_DISP_VRR_1_2;
	}else
		return VBE_DISP_VRR_MAX;
#endif

	return VBE_DISP_VRR_MAX;
}


UINT32 vbe_disp_get_VRR_timing_real_vtotal(void)
{
	UINT32 vertical_total = 0;
	UINT32 vsyncFreq = 0;
    UINT32 IVScnt = 0;
	VBE_DISP_VRR_FRACTIONAL_TIMING_MODE_T vrr_timingMode=vbe_disp_get_VRR_timing_fractional_mode();

	if(vrr_timingMode != VBE_DISP_VRR_MAX){

		if(IoReg_Read32(PPOVERLAY_IVS_cnt_3_reg) > 0)
			IVScnt = IoReg_Read32(PPOVERLAY_IVS_cnt_3_reg);
		else{
			rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "[%s] ivs is wrong(%d), set default 60Hz to protect vtotal!!!\r", __FUNCTION__, IoReg_Read32(PPOVERLAY_IVS_cnt_3_reg));
			IVScnt = 450000;	//default set to 60Hz
		}
		vsyncFreq = 27000000/IVScnt;

		if(vrr_timingMode == VBE_DISP_VRR_1_1){
			vertical_total = Get_DISPLAY_CLOCK_TYPICAL()/(Get_DISP_HORIZONTAL_TOTAL() * vsyncFreq);
		}else if(vrr_timingMode == VBE_DISP_VRR_1_2){
			vertical_total = Get_DISPLAY_CLOCK_TYPICAL()/(Get_DISP_HORIZONTAL_TOTAL() * vsyncFreq * 2);
		}
	}

    if(vertical_total == 0)
    {
        rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "[%s] vertical_total is wrong(%d), set default 60Hz to protect vtotal!!!\r", __FUNCTION__, vertical_total);
        vertical_total = 2250;
    }

	return vertical_total;
}


void vbe_disp_VRR_framerate_protect_check(void)
{
	ppoverlay_display_timing_ctrl1_RBUS display_timing_ctrl1_reg;
	UINT8  b_enterProtect = 0;

	display_timing_ctrl1_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg);

	if(display_timing_ctrl1_reg.disp_fsync_en == 0){
		//no need to check
		return;
	}

	if(vbe_disp_check_support_VRR_framerate_range()){
		b_enterProtect = 0;
	}else{
		rtd_printk(KERN_NOTICE, TAG_NAME_VBE, " %dHz(%d)\n\r", (270000000/IoReg_Read32(PPOVERLAY_IVS_cnt_3_reg)), rtd_inl(TIMER_SCPU_CLK90K_LO_reg));
		b_enterProtect = 1;
	}
	if(b_enterProtect == 1){
		drivf_scaler_reset_freerun();
		//HAL_MC_SetMCBlendMode(0);
	}else{
		//HAL_MC_SetMCBlendMode(2);
	}
}

unsigned char vbe_disp_set_VRR_fractional_framerate_mode(void)
{
	ppoverlay_double_buffer_ctrl_RBUS double_buffer_ctrl_reg;
	ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl2_reg;
#ifndef CONFIG_MEMC_BYPASS
	ppoverlay_uzudtg_fractional_fsync_RBUS uzudtg_fractional_fsync_reg;
#endif
	ppoverlay_dtg_m_remove_input_vsync_RBUS dtg_m_remove_input_vsync_reg;
	ppoverlay_dtg_m_multiple_vsync_RBUS dtg_m_multiple_vsync_reg;
	ppoverlay_dispd_stage1_sm_ctrl_RBUS dispd_stage1_sm_ctrl_reg;
	VBE_DISP_VRR_FRACTIONAL_TIMING_MODE_T vrr_frac_mode = VBE_DISP_VRR_1_1;
	unsigned long flags;//for spin_lock_irqsave
	unsigned char multiple_ratio=0, remove_ratio=0;
#ifndef CONFIG_MEMC_BYPASS
	UINT32 dclk_fract_a, dclk_fract_b;
	sys_reg_sys_dispclksel_RBUS sys_dispclksel_reg;
	//ppoverlay_dtg_frame_cnt1_RBUS dtg_frame_cnt1_reg;
	unsigned char uzu_valid_framecnt = 0;
	ppoverlay_dtg_frame_cnt1_RBUS dtg_frame_cnt1_reg;
#endif
	ppoverlay_dispd_smooth_toggle1_RBUS	 dispd_smooth_toggle1_reg;

	unsigned int count=0x3fffff;
	UINT32 mul_dbuf_cnt=0;

#if 0	//Eric@20181228 VRR always go 1:1 mode
	if(vbe_disp_get_freesync_mode_flag() || vbe_disp_get_VRR_timingMode_flag())
		vrr_frac_mode = VBE_DISP_VRR_1_1;
	else
		vrr_frac_mode = vbe_disp_get_VRR_timing_fractional_mode();

	pr_emerg("%s, set vrr_frac_mode mode = %d", __func__, vrr_frac_mode);

	if (vrr_frac_mode>=VBE_DISP_VRR_MAX) {
		printk("vrr_frac_mode error (%d)\n", vrr_frac_mode);
		return FALSE;
	}

	if(vrr_frac_mode == VBE_DISP_VRR_1_1){
		multiple_ratio = 1;
		remove_ratio = 1;
	}else if(vrr_frac_mode == VBE_DISP_VRR_1_2){
		multiple_ratio = 2;
		remove_ratio = 1;
	}else if(vrr_frac_mode == VBE_DISP_VRR_2_5){
		multiple_ratio = 5;
		remove_ratio = 2;
	}
#else
    pr_info("%s, set vrr_frac_mode mode = %d", __func__, vrr_frac_mode);
    multiple_ratio = 1;
    remove_ratio = 1;
#endif

	down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
	spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock
	double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
	double_buffer_ctrl_reg.dreg_dbuf_en = 0;	// D7 DTG master
	double_buffer_ctrl_reg.drm_multireg_dbuf_en = 1;	// D8
	double_buffer_ctrl_reg.drm_multireg_dbuf_read_sel = 1;
	double_buffer_ctrl_reg.drm_multireg_dbuf_vsync_sel = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
	spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
	up(get_forcebg_semaphore());

	double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
    double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
    double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;	// D4
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl2_reg.regValue);

    //pre-flow. patch, let D8 double buffer works well
    count = 0x3fffff;
    while((count == 0x3fffff)&&(mul_dbuf_cnt<10000)){
        //msleep(10);
        down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
        double_buffer_ctrl_reg.drm_multireg_dbuf_set = 1;
        IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL_reg, double_buffer_ctrl_reg.regValue);
        up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
        count = 0x3fffff;
        double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
        while((double_buffer_ctrl_reg.drm_multireg_dbuf_set)&& --count){
            double_buffer_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg);
        }
        if(count==0){
            rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_set 1 wait timeout !!!\n");
        }
        if(double_buffer_ctrl_reg.drm_multireg_dbuf_en==0)
            rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[double buffer] drm_multireg_dbuf_en=0 1!!\n");

        mul_dbuf_cnt++;
    }

    dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
    dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=0;
    IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
    dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
    dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 1;
    IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
#ifndef CONFIG_MEMC_BYPASS
    uzudtg_fractional_fsync_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_fractional_fsync_reg);
    uzu_valid_framecnt = uzudtg_fractional_fsync_reg.uzudtg_multiple_vsync; //if 2:5, valid_framecnt = 1, if 1:2, valid_framecnt = 0
    //wait to front porch
    count = 0x3fffff;
    dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
    while(!((dtg_frame_cnt1_reg.uzudtg_output_frame_cnt == uzu_valid_framecnt) &&
        (PPOVERLAY_new_meas2_linecnt_real_get_uzudtg_dly_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg)) > 100) &&
        (PPOVERLAY_new_meas2_linecnt_real_get_uzudtg_dly_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg)) < 1900)) && --count){
        dtg_frame_cnt1_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_FRAME_CNT1_reg);
    }
    if(count == 0)
        rtd_printk(KERN_EMERG, TAG_NAME_VBE,"[DTG] Wait to uzu_valid_framecnt timeout!!, uzu_valid_framecnt = %d, uzudtg_output_frame_cnt = %d\n",uzu_valid_framecnt, dtg_frame_cnt1_reg.uzudtg_output_frame_cnt);
#endif
	dtg_m_remove_input_vsync_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_M_Remove_input_vsync_reg);
	dtg_m_remove_input_vsync_reg.remove_half_ivs = 0; //mode2
	dtg_m_remove_input_vsync_reg.remove_half_ivs_mode2 = (remove_ratio-1);
	IoReg_Write32(PPOVERLAY_DTG_M_Remove_input_vsync_reg, dtg_m_remove_input_vsync_reg.regValue);

	dtg_m_multiple_vsync_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_M_multiple_vsync_reg);
	dtg_m_multiple_vsync_reg.dtg_m_multiple_vsync = (multiple_ratio-1);
	IoReg_Write32(PPOVERLAY_DTG_M_multiple_vsync_reg, dtg_m_multiple_vsync_reg.regValue);

	//======= Set UZU remove/multi
#ifdef CONFIG_MEMC_BYPASS
	// don't set uzudtg fractional fs.
	pr_info( "MEMC bypass !! Don't set uzudtg fractional fs. \n");
#else

	uzudtg_fractional_fsync_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_fractional_fsync_reg);
	uzudtg_fractional_fsync_reg.uzudtg_remove_half_ivs = 1; // enable;
#ifdef SMOOTH_TOGGLE_DATAFRCFS_TEST
	//adaptive stream run timing frame sync so it should align IVS @Crixus 20160202
    uzudtg_fractional_fsync_reg.uzudtg_remove_half_ivs_alignmode = 1;
#endif
	uzudtg_fractional_fsync_reg.uzudtg_remove_half_ivs_mode = (multiple_ratio-1);
	uzudtg_fractional_fsync_reg.uzudtg_multiple_vsync = (remove_ratio-1);
	IoReg_Write32(PPOVERLAY_uzudtg_fractional_fsync_reg, uzudtg_fractional_fsync_reg.regValue);
	pr_debug("uzudtg_fractional_fsync_reg : %x\n", uzudtg_fractional_fsync_reg.regValue);
#endif
	//=======
#ifndef CONFIG_MEMC_BYPASS
//====== Set UZU clock
	sys_dispclksel_reg.regValue = IoReg_Read32(SYS_REG_SYS_DISPCLKSEL_reg);
	dclk_fract_a = remove_ratio-1;
	dclk_fract_b = multiple_ratio-1;

	sys_dispclksel_reg.dclk_fract_a = dclk_fract_a;
	sys_dispclksel_reg.dclk_fract_b = (dclk_fract_b&0x1f);
	IoReg_Write32(SYS_REG_SYS_DISPCLKSEL_reg, sys_dispclksel_reg.regValue);
//=======
#endif

	count = 0x3fffff;
	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply=1;
	IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);

	dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	while((dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply)&& --count){
		dispd_smooth_toggle1_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_smooth_toggle1_reg);
	}
	if(count==0){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"dispd_smooth_toggle1 timeout !!!\n");
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 0;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
		dispd_stage1_sm_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_dispd_stage1_sm_ctrl_reg);
		dispd_stage1_sm_ctrl_reg.dispd_stage1_smooth_toggle_protect = 0;
		IoReg_Write32(PPOVERLAY_dispd_stage1_sm_ctrl_reg, dispd_stage1_sm_ctrl_reg.regValue);
		dispd_smooth_toggle1_reg.dispd_stage1_smooth_toggle_apply = 1;
		IoReg_Write32(PPOVERLAY_dispd_smooth_toggle1_reg, dispd_smooth_toggle1_reg.regValue);
	}
	double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 0;
	double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 0;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl2_reg.regValue);
	modestate_set_display_timing_genByDisp(SLR_MAIN_DISPLAY);//set dvtotal

	return TRUE;
}

int vbe_open(struct inode *inode, struct file *filp) {
	return 0;	/* success */
}

ssize_t  vbe_read(struct file *filep, char *buffer, size_t count, loff_t *offp)
{
	return 0;

}

ssize_t vbe_write(struct file *filep, const char *buffer, size_t count, loff_t *offp)
{
	extern void force_change_orbit_timer_time(void);
	char cmd_buf[128] = {0};
	long ret = count;
#if 1

	if (count >= 128)
		return -EFAULT;

	if (copy_from_user(cmd_buf, buffer, count)) {
		ret = -EFAULT;
	}

	if(count > 0) {
	   cmd_buf[count] = '\0';
    }

	printk(KERN_EMERG "vbedev cmd : %s (count=%d)\n", cmd_buf, count);

	// command : echo test_dpc=1 > /dev/vbedev
	if(strcmp(cmd_buf, "test_dpc=1\n") == 0){
		vbe_disp_dynamic_polarity_control_set_detect_enable(1);
		vbe_disp_dynamic_polarity_control_enable_debug_mode(1);
		printk(KERN_EMERG "enable dpc function \n");
	}
	else if(strcmp(cmd_buf, "test_dpc=0\n") == 0){
		vbe_disp_dynamic_polarity_control_set_detect_enable(0);
		vbe_disp_dynamic_polarity_control_enable_debug_mode(0);
		printk(KERN_EMERG "disable dpc function \n");
	}
#ifdef CONFIG_ORBIT_PIXEL_SHIFT_ALGO
	// command : echo test_orbit_mode=1 > /dev/vbedev
	else if(strcmp(cmd_buf, "test_orbit_mode=0\n") == 0){
        ORBIT_TIME = 5;
		force_change_orbit_timer_time();
		HAL_VBE_DISP_OLED_SetOrbit(1, 0);
		printk(KERN_EMERG "enable orbit function mode 0\n");
	}
	else if(strcmp(cmd_buf, "test_orbit_mode=1\n") == 0){
        ORBIT_TIME = 5;
		force_change_orbit_timer_time();
		HAL_VBE_DISP_OLED_SetOrbit(1, 1);
		printk(KERN_EMERG "enable orbit function mode 1 \n");
	}
	else if(strcmp(cmd_buf, "test_orbit_mode=2\n") == 0){
        ORBIT_TIME = 5;
		force_change_orbit_timer_time();
		HAL_VBE_DISP_OLED_SetOrbit(1, 2);
		printk(KERN_EMERG "enable orbit function mode 1 \n");
	}
	else if(strcmp(cmd_buf, "test_orbit=0\n") == 0){
        ORBIT_TIME = 180;//reset to 3 min or LG previous setting
        	force_change_orbit_timer_time();
		HAL_VBE_DISP_OLED_SetOrbit(0, 0);
		printk(KERN_EMERG "disable orbit function \n");
	}
#endif




	return count;
#else
	return 0;
#endif
}


int vbe_release(struct inode *inode, struct file *filep)
{
	return 0;
}

UINT16 Mplus_Value[928] = {1};
long vbe_ioctl(struct file *file, unsigned int cmd,  unsigned long arg)
{
	int retval = 0;

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE, "VBE: vbe_ioctl, %x;;agr:%lx\n", _IOC_NR(cmd), arg);
	if (_IOC_TYPE(cmd) != VBE_IOC_MAGIC || _IOC_NR(cmd) > VBE_IOC_MAXNR) return -ENOTTY ;

	switch (cmd)
	{
		case VBE_IOC_DISP_INITIALIZE:
		{
			KADP_DISP_PANEL_INFO_T panel_info;
			if(copy_from_user((void *)&panel_info, (const void __user *)arg, sizeof(KADP_DISP_PANEL_INFO_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_INITIALIZE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VBE_DISP_Initialize(panel_info)==0)
				{
					retval = -EFAULT;
				}
			}
			break;
		}
		case VBE_IOC_DISP_UNINITIALIZE:
		{
			if(HAL_VBE_DISP_Uninitialize()==0)
			{
				retval = -EFAULT;
			}
			break;
		}
		case VBE_IOC_DISP_RESUME:
		{
			KADP_DISP_PANEL_INFO_T panel_info;
			if(copy_from_user((void *)&panel_info, (const void __user *)arg, sizeof(KADP_DISP_PANEL_INFO_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_RESUME failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VBE_DISP_Resume(panel_info)==0)
				{
					retval = -EFAULT;
				}
			}
			break;
		}
		case VBE_IOC_DISP_CONNECT:
		{
			KADP_DISP_WINDOW_T disp_window;
			if(copy_from_user((void *)&disp_window, (const void __user *)arg, sizeof(KADP_DISP_WINDOW_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_CONNECT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_Connect(disp_window);
			}
			break;
		}
		case VBE_IOC_DISP_DISCONNECT:
		{
			KADP_DISP_WINDOW_T disp_window;
			if(copy_from_user((void *)&disp_window, (const void __user *)arg, sizeof(KADP_DISP_WINDOW_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_DISCONNECT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_Disconnect(disp_window);
			}
			break;
		}
		case VBE_IOC_DISP_WRITE_DIAPLAYOUTPUT:
		{
			BOOLEAN length;
			if(copy_from_user((void *)&length, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_WRITE_DIAPLAYOUTPUT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetDisplayOutput(length);
			}
			break;
		}
		case VBE_IOC_DISP_WRITE_MUTE:
		{
			BOOLEAN length;
			if(copy_from_user((void *)&length, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_WRITE_MUTE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetMute(length);
			}
			break;
		}
		case VBE_IOC_DISP_WRITE_SPREADSPECTRUM:
		{
			KADP_VBE_DISP_SpreadSpectrum_T spreadspectrum;
			if(copy_from_user((void *)&spreadspectrum, (const void __user *)arg, sizeof(KADP_VBE_DISP_SpreadSpectrum_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_WRITE_SPREADSPECTRUM failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetSpreadSpectrum(spreadspectrum.bEnable,spreadspectrum.Percenct,spreadspectrum.Period);
			}
			break;
		}
		case VBE_IOC_DISP_WRITE_VIDEO_MIRROR:
		{
			KADP_VBE_DISP_VideoMirror_T mirror_enable;
			if(copy_from_user((void *)&mirror_enable, (const void __user *)arg, sizeof(KADP_VBE_DISP_VideoMirror_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_WRITE_VIDEO_MIRROR failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VBE_DISP_SetVideoMirror(mirror_enable.bIsH,mirror_enable.bIsV)==FALSE)
				{
					retval = -EFAULT;
				}
			}
			break;
		}
		case VBE_IOC_DISP_WRITE_DISPLAY_FORMAT:
		{
			KADP_VBE_DISP_FORMAT_T panel_info;
			if(copy_from_user((void *)&panel_info, (const void __user *)arg, sizeof(KADP_VBE_DISP_FORMAT_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_WRITE_DISPLAY_FORMAT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetDisplayFormat(&(panel_info.panel_attribute),panel_info.framerate);
			}
			break;
		}
		case VBE_IOC_DISP_WRITE_FRAMERATE:
		{
			KADP_VBE_DISP_Framerate_T framerate_info;
			if(copy_from_user((void *)&framerate_info, (const void __user *)arg, sizeof(KADP_VBE_DISP_Framerate_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_WRITE_FRAMERATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetFrameRate(framerate_info.isForceFreeRun,framerate_info.framerate);
			}
			break;
		}
		case VBE_IOC_DISP_READ_OUTPUTFRAMERATE:
		{
			UINT8 framerate=0;
			HAL_VBE_DISP_GetOutputFrameRate(&framerate);
			if(copy_to_user((void __user *)arg, (void *)&framerate, sizeof(UINT8)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_READ_OUTPUTFRAMERATE failed!!!!!!!!!!!!!!!\n");
			}
			break;
		}
		case VBE_IOC_DISP_WRITE_BGCOLOR:
		{
			KADP_VBE_DISP_BGColor_T color;
			if(copy_from_user((void *)&color, (const void __user *)arg, sizeof(KADP_VBE_DISP_BGColor_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_WRITE_BGCOLOR failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetBackgroundColor(color.red,color.green,color.blue);
			}
			break;
		}

		case VBE_IOC_DISP_OD_WRITE_TABLE:
		{
			extern unsigned char od_table_tv006_store[OD_table_length];

			enum PLAFTORM_TYPE platform = get_platform();
			if (PLATFORM_KXLP != platform)
				return -1;

			return -1;  //fixed me , force od enable by lg request,when  project going please remove it.rord 2018/01/16
			if (copy_from_user(od_table_tv006_store, (void __user *)arg, sizeof(unsigned char)*OD_table_length))
			{
		 		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_OD_WRITE_TABLE fail\n");
				retval = -1;
			}
			else
			{


			//	extern unsigned char bODInited;
				extern unsigned char bODTableLoaded;
				extern char od_table_mode_store;
				//extern unsigned int od_table_store[OD_table_length];
				extern unsigned int od_delta_table[OD_table_length];
				//fwif_color_od_table_tv006_convert(od_table_tv006_store, od_table_store);

				//fwif_color_od_table_tv006_transform(0, od_table_store, od_delta_table);

				//drvif_color_od_table(od_delta_table, 0);// 0:delta mode 1:target mode(output mode)

				fwif_color_od_table_17x17_transform(0, od_table_tv006_store, od_delta_table);
				drvif_color_od_table_seperate(od_delta_table, 0, 3);// 0:delta mode 1:target mode(output mode)



				od_table_mode_store = 1;// 0:target mode 1:delta mode -1:inverse mode
				bODTableLoaded = TRUE;
				rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_OD_WRITE_TABLE success\n");
			 	retval = 0;

			}
			break;
		}
		case VBE_IOC_DISP_OD_ENABLE:
		{
			unsigned int tmp;

			return -1;  //fixed me , force od enable by lg request,when  project going please remove it.rord 2018/01/16

			if (copy_from_user(&tmp, (unsigned char __user *)arg, sizeof(tmp)))
			{
		 		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_OD_ENABLE fail\n");
				retval = -1;
			}
			else
			{
				extern unsigned char bODInited;
				extern unsigned char bODTableLoaded;
				extern unsigned char bODPreEnable;

				enum PLAFTORM_TYPE platform = get_platform();
				if (PLATFORM_KXLP != platform)
					return -1;

				rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_OD_ENABLE = %d\n",tmp);
				bODPreEnable = tmp;
				if (!bODInited || !bODTableLoaded)
					return -1;
				fwif_color_set_od(tmp);
				retval = 0;
			}
			break;
		}

		case VBE_IOC_DISP_PCID_WRITE_TABLE:
		{
#ifdef SCALER_PCID_ENABLE
#if SCALER_PCID_ENABLE
			unsigned char PCIDtable[OD_table_length];
			if (copy_from_user(&PCIDtable[0], (unsigned char __user *)arg, sizeof(unsigned char)*OD_table_length))
			{
		 		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_PCID_WRITE_TABLE fail\n");
				retval = -1;
			}
			else
			{
				drvif_color_pcid_table(PCIDtable);
				rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_PCID_WRITE_TABLE success\n");
			 	retval = 0;
			}
#endif
#endif
			break;

		}
		case VBE_IOC_DISP_PCID_ENABLE:
		{
#ifdef SCALER_PCID_ENABLE
#if SCALER_PCID_ENABLE
			unsigned int tmp;
			if (copy_from_user(&tmp, (unsigned char __user *)arg, sizeof(tmp)))
			{
		 		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_PCID_ENABLE fail\n");
				retval = -1;
			}
			else
			{
				rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_PCID_ENABLE = %d\n",tmp);
				drvif_color_pcid(tmp);
				retval = 0;
			}
#endif
#endif
			break;
		}

		case VBE_IOC_DISP_SR_INITIALIZE:
		{
			break;
		}
		case VBE_IOC_DISP_SR_UNINITIALIZE:
		{
			break;
		}
		case VBE_IOC_DISP_SR_WRITE_CONTROL:
		{
			break;
		}
		case VBE_IOC_DISP_TCON_INITILIZE:
		{
			HAL_VBE_DISP_TCON_Initialize();
			break;
		}
		case VBE_IOC_DISP_TCON_UNINITILIZE:
		{
			HAL_VBE_DISP_TCON_Uninitialize();
			break;
		}
		case VBE_IOC_DISP_TCON_ENABLE_TCON:
		{
			BOOLEAN enable;
			if(copy_from_user((void *)&enable, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_TCON_ENABLE_TCON failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_TCON_EnableTCon(enable);
			}
			break;
		}
		case VBE_IOC_DISP_TCON_EABLE_COLORTEMP:
		{
			break;
		}
		case VBE_IOC_DISP_TCON_EABLE_DGA:
		{
			break;
		}
		case VBE_IOC_DISP_TCON_ENABLE_DITHER:
		{
			//unsigned int* tmp = (unsigned int*)arg;
			unsigned int tmp;
			if (copy_from_user(&tmp, (unsigned char __user *)arg, sizeof(tmp)))
			{
		 		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_TCON_ENABLE_DITHER fail\n");
				retval = -1;
			}
			else
			{
	 			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_TCON_ENABLE_DITHER = %d\n",tmp);
				HAL_VBE_DISP_TCON_EnableDither(tmp);
				rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_TCON_ENABLE_DITHER success\n");
				retval = 0;
			}

			break;
		}
		case VBE_IOC_DISP_TCON_SET_DITHER_MODE:
		{
			//unsigned int* tmp = (unsigned int*)arg;
			unsigned int tmp;
                        if (copy_from_user(&tmp, (unsigned char __user *)arg, sizeof(tmp)))
                        {
                                rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_TCON_SET_DITHER_MODE fail\n");
                                retval = -1;
                        }
                        else
                        {
	 			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_TCON_SET_DITHER_MODE = %d\n",tmp);
	 			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"kernel VBE_IOC_DISP_TCON_SET_DITHER_MODE = %d\n",tmp);
				HAL_VBE_DISP_TCON_SetDitherMode((KADP_DISP_TCON_DITHER_T)tmp);
				retval = 0;
			}
			break;
		}
		case VBE_IOC_DISP_TCON_SET_GAMMA_TABLE:
		{
			break;
		}
		case VBE_IOC_DISP_TCON_H_REVERSE:
		{
			UINT32 h_rev_mode;
			if(copy_from_user((void *)&h_rev_mode, (const void __user *)arg, sizeof(UINT32)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_TCON_H_REVERSE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{

				HAL_VBE_DISP_TCON_H_Reverse(h_rev_mode);
			}
			break;
		}
		case VBE_IOC_DISP_TCON_SET_CLOCK:
		{
			UINT32 bOnOff;
			if(copy_from_user((void *)&bOnOff, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_TCON_SET_CLOCK failed!!!!!!!!!!!!!!!\n");
			}
			else
			{

				HAL_VBE_DISP_TCON_SetClock(bOnOff);
			}
			break;
		}
		case VBE_IOC_DISP_TCON_WRITE_REGISTER:
		{

			HAL_VBE_DISP_TCON_WRITE_REGISTERS disp_tcon_write_reg_info;
			if(copy_from_user((void *)&disp_tcon_write_reg_info, (const void __user *)arg, sizeof(HAL_VBE_DISP_TCON_WRITE_REGISTERS)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_TCON_WRITE_REGISTER failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_TCON_WriteRegister(disp_tcon_write_reg_info.reg_address, disp_tcon_write_reg_info.reg_data);
			}
			break;
		}
		case VBE_IOC_DISP_TCON_READ_REGISTER:
		{
			HAL_VBE_DISP_TCON_READ_REGISTERS disp_tcon_read_reg_info;
			if(copy_from_user((void *)&disp_tcon_read_reg_info, (const void __user *)arg, sizeof(HAL_VBE_DISP_TCON_READ_REGISTERS)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_TCON_READ_REGISTER failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_TCON_ReadRegister(disp_tcon_read_reg_info.reg_address, to_user_ptr(disp_tcon_read_reg_info.reg_data));
			}
			break;
		}
		case VBE_IOC_DISP_TCON_SET_LVDS_FORMAT:
		{
			KADP_VBE_DISP_TCON_LVDS_TYPE_T type;
			if(copy_from_user((void *)&type, (const void __user *)arg, sizeof(KADP_VBE_DISP_TCON_LVDS_TYPE_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_WRITE_FRAMERATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_TCON_SetLvdsFormat(type);
			}
			break;
		}
		case VBE_IOC_DISP_TCON_DEBUG:
		{
			HAL_VBE_DISP_TCON_Debug();
			break;
		}

		case VBE_IOC_AVE_INITILIZE:
		{
			HAL_VBE_AVE_Initialize();
			break;
		}
		case VBE_IOC_AVE_UNINITILIZE:
		{
			HAL_VBE_AVE_Uninitialize();
			break;
		}
		case VBE_IOC_AVE_OPEN:
		{
			HAL_VBE_AVE_Open();
			break;
		}
		case VBE_IOC_AVE_CLOSE:
		{
			HAL_VBE_AVE_Close();
			break;
		}
		case VBE_IOC_AVE_CONNECT:
		{
			KADP_VBE_AVE_INPUT_INDEX AVEInput;
			if(copy_from_user((void *)&AVEInput, (const void __user *)arg, sizeof(KADP_VBE_AVE_INPUT_INDEX)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_WRITE_FRAMERATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_AVE_Connect(AVEInput);
			}
			break;
		}
		case VBE_IOC_AVE_DISCONNECT:
		{
			HAL_VBE_AVE_Disconnect();
			break;
		}
		case VBE_IOC_AVE_IS_ATV_WATCHING:
		{
			HAL_VBE_AVE_IsATVWatching();
			break;
		}
		case VBE_IOC_AVE_SET_ATV_WATCHING:
		{
			VBE_AVE_SET_ATVWATCHING_T set_atv_watching_info;

			if(copy_from_user((void *)&set_atv_watching_info, (const void __user *)arg, sizeof(VBE_AVE_SET_ATVWATCHING_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_AVE_SET_ATV_WATCHING failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_AVE_SetATVWatching(set_atv_watching_info.AVEInput, set_atv_watching_info.bIsATVWatching);
			}

			break;
		}
		case VBE_IOC_AVE_VBI_SET_INSERT:
		{
			VBE_AVE_VBI_SET_INSERT_T vbi_set_insert_info;
			if(copy_from_user((void *)&vbi_set_insert_info, (const void __user *)arg, sizeof(VBE_AVE_VBI_SET_INSERT_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_AVE_VBI_SET_INSERT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_AVE_VBI_SetInsert(vbi_set_insert_info.type, vbi_set_insert_info.OnOff);
			}

			break;
		}
		case VBE_IOC_AVE_VBI_INSERT_DATA:
		{
			VBE_AVE_VBI_INSERT_DATA_T vbi_insert_data_info;
			if(copy_from_user((void *)&vbi_insert_data_info, (const void __user *)arg, sizeof(VBE_AVE_VBI_INSERT_DATA_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_AVE_VBI_INSERT_DATA failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_AVE_VBI_InsertData(vbi_insert_data_info.type, vbi_insert_data_info.nrLine, to_user_ptr(vbi_insert_data_info.pLines), vbi_insert_data_info.size, to_user_ptr(vbi_insert_data_info.pData));
			}
			break;
		}
		case VBE_IOC_AVE_SET_VCR_WIN_BLANK:
		{
			BOOLEAN bOnOff;
			if(copy_from_user((void *)&bOnOff, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_AVE_SET_VCR_WIN_BLANK failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_AVE_SetVCRWinBlank(bOnOff);
			}
			break;
		}
		case VBI_IOC_DISP_LVDS_TO_HDMI:
		{
			KADP_VBE_DISP_FORMAT_T panel_info;
			if(copy_from_user((void *)&panel_info, (const void __user *)arg, sizeof(KADP_VBE_DISP_FORMAT_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBI_IOC_DISP_LVDS_TO_HDMI failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				Scaler_set_lvds_to_hdmi_parameter(&(panel_info.panel_attribute),panel_info.framerate);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_INITIALIZE:
		{
			HAL_VBE_TRIDFMT_Initialize();
			break;
		}
		case VBE_IOC_TRIDFMT_UNINITIALIZE:
		{
			HAL_VBE_TRIDFMT_Uninitialize();
			break;
		}
		case VBE_IOC_TRIDFMT_OPEN:
		{
			HAL_VBE_TRIDFMT_Open();
			break;
		}
		case VBE_IOC_TRIDFMT_CLOSE:
		{
			HAL_VBE_TRIDFMT_Close();
			break;
		}
		case VBE_IOC_TRIDFMT_SETSCREENONOFF:
		{
			BOOLEAN enable;
			if(copy_from_user((void *)&enable, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SETSCREENONOFF failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_SetScreenOnOff(enable);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SETFMTMODE:
		{
			VBE_TRIDFMT_FMT_MODE_T fmtMode;
			if(copy_from_user((void *)&fmtMode, (const void __user *)arg, sizeof(VBE_TRIDFMT_FMT_MODE_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SETFMTMODE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_SetFMTMode(fmtMode.wId, to_user_ptr(fmtMode.TriFRC));
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SETFMTMODE_TEMP:
		{
			VBE_TRIDFMT_FMT_MODE_TEMP_T fmtMode;
			if(copy_from_user((void *)&fmtMode, (const void __user *)arg, sizeof(VBE_TRIDFMT_FMT_MODE_TEMP_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SETFMTMODE_TEMP failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_SetFMTMode_TEMP(fmtMode.wId, to_user_ptr(fmtMode.TriFRC));
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SET3DMODEONOFF:
		{
			KADP_TRIDTV_INPUT_CONFIG_INFO_T cfgInfo;
			if(copy_from_user((void *)&cfgInfo, (const void __user *)arg, sizeof(KADP_TRIDTV_INPUT_CONFIG_INFO_T )))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SET3DMODEONOFF failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_Set3DModeOnOff(&cfgInfo);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_TOGGLEINPUTLRFRAME:
		{
			KADP_TRIDTV_INPUT_LR_SEQ_T type;
			if(copy_from_user((void *)&type, (const void __user *)arg, sizeof(KADP_TRIDTV_INPUT_LR_SEQ_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_TOGGLEINPUTLRFRAME failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_ToggleInputLRFrame(type);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SELECTINPUTFORMAT:
		{
			KADP_TRIDTV_INPUT_TYPE_T type;
			if(copy_from_user((void *)&type, (const void __user *)arg, sizeof(KADP_TRIDTV_INPUT_TYPE_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SELECTINPUTFORMAT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_SelectInputFormat(type);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SETINPUTFRAMERATE:
		{
			KADP_TRIDTV_INPUT_FREQ_T type;
			if(copy_from_user((void *)&type, (const void __user *)arg, sizeof(KADP_TRIDTV_INPUT_FREQ_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SETINPUTFRAMERATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_SetInputFrameRate(type);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_TOGGLEOUTPUTLRFRAME:
		{
			KADP_TRIDTV_OUTPUT_LR_SEQ_T type;
			if(copy_from_user((void *)&type, (const void __user *)arg, sizeof(KADP_TRIDTV_OUTPUT_LR_SEQ_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_TOGGLEOUTPUTLRFRAME failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_ToggleOutputLRFrame(type);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SELECTOUTPUTFORMAT:
		{
			KADP_TRIDTV_OUTPUT_TYPE_T type;
			if(copy_from_user((void *)&type, (const void __user *)arg, sizeof(KADP_TRIDTV_OUTPUT_TYPE_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SELECTOUTPUTFORMAT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_SelectOutputFormat(type);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SETOUTPUTFRAMERATE:
		{
			KADP_TRIDTV_OUTPUT_FREQ_T type;
			if(copy_from_user((void *)&type, (const void __user *)arg, sizeof(KADP_TRIDTV_OUTPUT_FREQ_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SETOUTPUTFRAMERATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_SetOutputFrameRate(type);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_GET3DCFGINFO:
		{
			VBE_TRIDFMT_3D_CFG_INFO_T modeInfo;
			if(copy_from_user((void *)&modeInfo, (const void __user *)arg, sizeof(VBE_TRIDFMT_3D_CFG_INFO_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_GET3DCFGINFO failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_Get3DCfgInfo(modeInfo.n3DCfgItems, to_user_ptr(modeInfo.nCurCfgInfo));
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SET3DCFGINFO:
		{
			KADP_TRIDTV_INPUT_CONFIG_INFO_T *p3DModeInfo;
			if(copy_from_user((void *)&p3DModeInfo, (const void __user *)arg, sizeof(KADP_TRIDTV_INPUT_CONFIG_INFO_T *)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SET3DCFGINFO failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_Set3DCfgInfo(p3DModeInfo);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SETCONVVALUE:
		{
			char convVal;
			if(copy_from_user((void *)&convVal, (const void __user *)arg, sizeof(char)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SETCONVVALUE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_SetConvValue(convVal);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_CTRLDEPTH:
		{
			VBE_TRIDFMT_CTRL_DEPTH_T depthInfo;
			if(copy_from_user((void *)&depthInfo, (const void __user *)arg, sizeof(VBE_TRIDFMT_CTRL_DEPTH_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_CTRLDEPTH failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_CtrlDepth(depthInfo.n3Dmode, depthInfo.u8DepthLevel);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_AUTOCONVERGENCEENABLE:
		{
			BOOLEAN enable;
			if(copy_from_user((void *)&enable, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_AUTOCONVERGENCEENABLE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_AutoConvergenceEnable(enable);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SET3DVIDEOOUTPUTMODE:
		{
			UINT32 bIsSGMode;
			if(copy_from_user((void *)&bIsSGMode, (const void __user *)arg, sizeof(UINT32)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SET3DVIDEOOUTPUTMODE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_Set3DVideoOutputMode(bIsSGMode);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_SET3DDEPTHCONTROLLER:
		{
			UINT32 bOnOff;
			if(copy_from_user((void *)&bOnOff, (const void __user *)arg, sizeof(UINT32)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TRIDFMT_SET3DDEPTHCONTROLLER failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_TRIDFMT_Set3DDepthController(bOnOff);
			}
			break;
		}
		case VBE_IOC_TRIDFMT_DEBUG:
		{
			HAL_VBE_TRIDFMT_Debug();
			break;
		}
		case VBE_IOC_SETORBIT:
		{
			BOOLEAN enable;
			if(copy_from_user((void *)&enable, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETORBIT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
#ifdef CONFIG_ORBIT_PIXEL_SHIFT_ALGO
				HAL_VBE_DISP_OLED_SetOrbit(enable, 0);
#endif
			}
			break;
		}
		case VBE_IOC_SETBOEMODE:
		{
			UINT32 data_len;
			unsigned char	*m_pCacheStartAddr = NULL;

			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"VBE_IOC_SETBOEMODE\n");

			if(copy_from_user((void *)&data_len, (const void __user *)arg, sizeof(UINT32)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETORBIT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "data_len=%d\n", data_len);
				m_pCacheStartAddr = (unsigned char *)dvr_malloc(data_len);
				if(m_pCacheStartAddr == NULL){
					rtd_printk(KERN_ERR, TAG_NAME_VBE, "[ERROR]VBE_IOC_SETBOEMODE Allocate data_len=%x fail\n",data_len);
					return FALSE;
				}

				if(copy_from_user((void *)m_pCacheStartAddr, (const void __user *)(arg+sizeof(UINT32)), data_len))
				{
					retval = -EFAULT;
					DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETORBIT failed!!!!!!!!!!!!!!!\n");
				}
				HAL_VBE_DISP_SetBOEMode(m_pCacheStartAddr, data_len);

				if(m_pCacheStartAddr){
					dvr_free((void *)m_pCacheStartAddr);
				}
			}

			break;
		}
		case VBE_IOC_GETBOEVERSION:
		{
			KADP_VBE_DISP_BOE_VERSION_T vbeDispBoeVer;
			KADP_DISP_BOE_VERSION_T stRomVer;
			KADP_DISP_BOE_VERSION_T stFwVer;
			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"VBE_IOC_GETBOEVERSION\n");

			HAL_VBE_DISP_GetBOEVersion(&stRomVer, &stFwVer);

			//rtd_printk(KERN_EMERG, TAG_NAME_VBE,"stRomVer(%d.%d.%d), stFwVer(%d.%d.%d)\n",
				//stRomVer.b0, stRomVer.b1, stRomVer.b2, stFwVer.b0, stFwVer.b1, stFwVer.b2);

			memcpy((UINT8*)&(vbeDispBoeVer.stRomVer), (UINT8*)&stRomVer, sizeof(KADP_DISP_BOE_VERSION_T));
			memcpy((UINT8*)&(vbeDispBoeVer.stFwVer), (UINT8*)&stFwVer, sizeof(KADP_DISP_BOE_VERSION_T));

			if(copy_to_user((void __user *)arg, (void *)&vbeDispBoeVer, sizeof(KADP_VBE_DISP_BOE_VERSION_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_GETBOEVERSION failed!!!!!!!!!!!!!!!\n");
			}

			break;
		}
		case VBE_IOC_SETMLEMODE:
		{
			VBE_DISP_MLE_MODE_T index;

			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"VBE_IOC_SETMLEMODE\n");

			if(copy_from_user((void *)&index, (const void __user *)arg, sizeof(VBE_DISP_MLE_MODE_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code = VBE_IOC_SETMLEMODE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				#ifdef CONFIG_SCALER_ENABLE_V4L2
				HAL_VBE_DISP_SetMLEMode(index);
				#endif
			}
			break;
		}
		case VBE_IOC_SETINNERPATTERN:
		{
 			VBE_DISP_INNER_PATTERN_CTRL_T dispInnerPtgCtrl;

			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"VBE_IOC_SETINNERPATTERN\n");

			if(copy_from_user((void *)&dispInnerPtgCtrl, (const void __user *)arg, sizeof(VBE_DISP_INNER_PATTERN_CTRL_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code = VBE_IOC_SETINNERPATTERN failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetInnerPattern(dispInnerPtgCtrl.bOnOff, dispInnerPtgCtrl.block, dispInnerPtgCtrl.type);
			}
			break;

		}

		case VBE_IOC_SETBOERGBWBYPASS:
		{
			BOOLEAN enable;
			if(copy_from_user((void *)&enable, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETBOERGBWBYPASS failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetBOERGBWBypass(enable);
			}
			break;
		}

		case VBE_IOC_SETDGA4CH:
		{
			UINT16 table_size;
			unsigned char	*m_pCacheStartAddr = NULL;

			rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"VBE_IOC_SETDGA4CH\n");

			if(copy_from_user((void *)&table_size, (const void __user *)arg, sizeof(UINT16)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETDGA4CH failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "table_size=%d\n", table_size);
				m_pCacheStartAddr = (unsigned char *)dvr_malloc(4*table_size*sizeof(UINT32));
				if(m_pCacheStartAddr == NULL){
					rtd_printk(KERN_ERR, TAG_NAME_VBE, "[ERROR]VBE_IOC_SETDGA4CH Allocate table_size=%x fail\n",table_size);
					return FALSE;
				}

				if(copy_from_user((void *)m_pCacheStartAddr, (const void __user *)(arg+sizeof(UINT16)), 4*table_size*sizeof(UINT32)))
				{
					retval = -EFAULT;
					DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETDGA4CH failed!!!!!!!!!!!!!!!\n");
				}
				HAL_VBE_SetDGA4CH((UINT32 *)m_pCacheStartAddr, (UINT32 *)(m_pCacheStartAddr+table_size*sizeof(UINT32)), (UINT32 *)(m_pCacheStartAddr+2*table_size*sizeof(UINT32)),
					(UINT32 *)(m_pCacheStartAddr+3*table_size*sizeof(UINT32)), table_size);

				if(m_pCacheStartAddr){
					dvr_free((void *)m_pCacheStartAddr);
				}
			}

			break;
		}
		case VBE_IOC_SETFRAMEGAINLIMIT:
		{
			unsigned short nFrameGainLimit = 0;
			if(copy_from_user((void *)&nFrameGainLimit, (const void __user *)arg, sizeof(unsigned short)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETFRAMEGAINLIMIT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetFrameGainLimit(nFrameGainLimit);
			}
			break;
		}

		case VBE_IOC_GETFRAMEGAINLIMIT:
		{
			unsigned short nFrameGainLimit=0;
			HAL_VBE_DISP_GetFrameGainLimit(&nFrameGainLimit);
			if(copy_to_user((void __user *)arg, (void *)&nFrameGainLimit, sizeof(unsigned short)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_GETFRAMEGAINLIMIT failed!!!!!!!!!!!!!!!\n");
			}
			break;
		}
		case VBE_IOC_SETPIXELGAINLIMIT:
		{
			unsigned short nPixelGainLimit = 0;
			if(copy_from_user((void *)&nPixelGainLimit, (const void __user *)arg, sizeof(unsigned short)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETPIXELGAINLIMIT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetPixelGainLimit(nPixelGainLimit);
			}
			break;
		}
		case VBE_IOC_GETPIXELGAINLIMIT:
		{
			unsigned short nPixelGainLimit=0;
			HAL_VBE_DISP_GetPixelGainLimit(&nPixelGainLimit);
			if(copy_to_user((void __user *)arg, (void *)&nPixelGainLimit, sizeof(unsigned short)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_GETPIXELGAINLIMIT failed!!!!!!!!!!!!!!!\n");
			}
			break;
		}
		case VBE_IOC_GETPANELDISPSIZE:
		{
			KADP_DISP_PANEL_SIZE_T panel_size;

			//printk("VBE_IOC_GETPANELDISPSIZE \n");

			HAL_VBE_DISP_GetPanelSize(&panel_size);
			//printk("w= %d, h= %d\n",panel_size.DISP_WIDTH,panel_size.DISP_HEIGHT);

			if(copy_to_user((void __user *)arg, (void *)&panel_size, sizeof(KADP_DISP_PANEL_SIZE_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_GETPANELDISPSIZE failed!!!!!!!!!!!!!!!\n");
			}
			break;
		}
		case VBE_IOC_TSCIC_LOAD:
		{

			VBE_DISP_PANEL_TSCIC_T tFCIC_T;
			unsigned char	*m_pCacheStartAddr = NULL;
			if(copy_from_user((void *)&tFCIC_T, (const void __user *)arg, sizeof(VBE_DISP_PANEL_TSCIC_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETPIXELGAINLIMIT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "FCIC_table_size=%d, FCIC_Ctrl_size=%d\n", tFCIC_T.u32Tscicsize, tFCIC_T.u32Ctrlsize);

				if ((tFCIC_T.u32Tscicsize==0) || (tFCIC_T.u32Tscicsize!=0x5C30C)) {
					fwif_color_set_fcic_TV006(NULL, tFCIC_T.u32Tscicsize, NULL, tFCIC_T.u32Ctrlsize, 0);

				} else {

					tFCIC_T.u32Tscicsize = tFCIC_T.u32Tscicsize/4; // our driver use 94403

					m_pCacheStartAddr = (unsigned char *)dvr_malloc(tFCIC_T.u32Tscicsize*sizeof(UINT32)+tFCIC_T.u32Ctrlsize*sizeof(UINT8));
					if(m_pCacheStartAddr == NULL){
						rtd_printk(KERN_ERR, TAG_NAME_VBE, "[ERROR]VBE_IOC_TSCIC_LOAD Allocate table_size=%lx fail\n",(unsigned long)(tFCIC_T.u32Tscicsize*sizeof(UINT32)+tFCIC_T.u32Ctrlsize*sizeof(UINT8)));
						return FALSE;
					}
					/*FCIC Table*/
					if(copy_from_user((void *)m_pCacheStartAddr, (const void __user *)to_user_ptr(tFCIC_T.u32pTSCICTbl), tFCIC_T.u32Tscicsize*sizeof(UINT32)))
					{
						retval = -EFAULT;
						DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TSCIC_LOAD  Table failed!!!!!!!!!!!!!!!\n");
					}
					/*FCIC_Ctrl*/
					if(copy_from_user((void *)m_pCacheStartAddr+tFCIC_T.u32Tscicsize*sizeof(UINT32), (const void __user *)to_user_ptr(tFCIC_T.u8pControlTbl), tFCIC_T.u32Ctrlsize*sizeof(UINT8)))
					{
						retval = -EFAULT;
						DBG_PRINT("scaler vbe ioctl code=VBE_IOC_TSCIC_LOAD Ctrl failed!!!!!!!!!!!!!!!\n");
					}


					HAL_VBE_TSCIC_Load((UINT32 *)m_pCacheStartAddr, tFCIC_T.u32Tscicsize, m_pCacheStartAddr+tFCIC_T.u32Tscicsize*sizeof(UINT32), tFCIC_T.u32Ctrlsize);

					if(m_pCacheStartAddr){
						dvr_free((void *)m_pCacheStartAddr);
					}
					}
			}
			break;
		}
		case VBE_IOC_SETOLEDLSR:
		{
			VBE_LSR_ADJ_MODE_T tLSR_ADJ_Mode;
			UINT32 LSRTbl;

			if(copy_from_user((void *)&tLSR_ADJ_Mode, (const void __user *)arg, sizeof(VBE_LSR_ADJ_MODE_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETOLEDLSR 1 failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(copy_from_user((void *)&LSRTbl, (const void __user *)to_user_ptr(tLSR_ADJ_Mode.pLSRTbl), sizeof(UINT32)))
				{
					retval = -EFAULT;
					DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETOLEDLSR 2 failed!!!!!!!!!!!!!!!\n");
				}

				HAL_VBE_DISP_SetOLEDLSR(tLSR_ADJ_Mode.nStep, &LSRTbl);
			}
			break;
		}
		case VBE_IOC_SETOLEDLSRTUNNING:
		{
			VBE_DISP_LSR_TUNNING_VAL_T tLSR_Tunning_Val;

			if(copy_from_user((void *)&tLSR_Tunning_Val, (const void __user *)arg, sizeof(VBE_DISP_LSR_TUNNING_VAL_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETOLEDLSR 1 failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetOLEDLSR_Tunning(&tLSR_Tunning_Val);
			}

			break;
		}
		case VBE_IOC_SETOLEDCPCTUNNING:
		{

			VBE_DISP_CPC_TUNNING_VAL_T tCPC_Tunning_Val;

			if(copy_from_user((void *)&tCPC_Tunning_Val, (const void __user *)arg, sizeof(VBE_DISP_CPC_TUNNING_VAL_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETOLEDCPCTUNNING 1 failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetOLEDCPC_Tunning(&tCPC_Tunning_Val);
			}
			break;
		}
		case VBE_IOC_SETOLEDGSR:
		{

			UINT32 GSRTbl;

			if(copy_from_user((void *)&GSRTbl, (const void __user *)arg, sizeof(UINT32)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETOLEDGSR 1 failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetOLEDGSR(&GSRTbl);
			}
			break;
		}
		case VBE_IOC_MPLUSSET:
		{

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
			VBE_DISP_MPLUS_REGISTER_T mPlusRegStructSet = {0, 0};
#else
			VBE_DISP_MPLUS_REGISTER_T mPlusRegStructSet = {(void *)NULL, 0};
#endif

			if(copy_from_user((void *)&mPlusRegStructSet, (const void __user *)(arg), sizeof(VBE_DISP_MPLUS_REGISTER_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_MPLUSSET struct copy from user failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				UINT16 regSize = 0;

				if(Get_DISPLAY_PANEL_MPLUS_RGBW() == 1) // M+
				{
					regSize = 928/2;
          DBG_PRINT(" === [VBE_IOC_MPLUSSET] Panel is made by LGD\n");
				}
	      else if(Get_DISPLAY_PANEL_BOW_RGBW() == 1) // BOE SiW
	      {
					regSize = 256;
          DBG_PRINT(" === [VBE_IOC_MPLUSSET] Panel is made by BOE\n");
	      }
				else
				{
					regSize = 256;
          DBG_PRINT("=== [VBE_IOC_MPLUSSET] Doesn't support this panel\n");
				}

				if(copy_from_user(Mplus_Value, (const void __user *)((unsigned long)mPlusRegStructSet.pRegisterSet), regSize*sizeof(UINT16)))
				{
            DBG_PRINT("scaler vbe ioctl code=VBE_IOC_MPLUSSET pointer copy from user failed!!!!!!!!!!!!!!!\n");
            break;
				}
				else
  					HAL_VBE_DISP_MplusSet(Mplus_Value, mPlusRegStructSet.nPanelMaker);
			}
			break;
		}
		case VBE_IOC_MPLUSGET:
		{
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
			VBE_DISP_MPLUS_REGISTER_T mPlusRegStructSet = {0, 0};
#else
			VBE_DISP_MPLUS_REGISTER_T mPlusRegStructSet = {(void *)NULL, 0};
#endif

			if(copy_from_user((void *)&mPlusRegStructSet, (const void __user *)(arg), sizeof(VBE_DISP_MPLUS_REGISTER_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_MPLUSGET copy from user failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				UINT16 regSize = 0;
        int i;

        HAL_VBE_DISP_MplusGet(Mplus_Value, mPlusRegStructSet.nPanelMaker);

				if(Get_DISPLAY_PANEL_MPLUS_RGBW() == 1) // M+
				{
					regSize = 928>>1;

          // match LG format
          // Mplus_Value[0] = 0x1234;// --> print 0x34, 0x12
          for(i=0;i<regSize;i++)
          {
            Mplus_Value[i] = (Mplus_Value[i*2+1]<<8) + Mplus_Value[i*2];
          }

          DBG_PRINT(" === [VBE_IOC_MPLUSGET] Panel is made by LGD\n");
				}
				else if(Get_DISPLAY_PANEL_BOW_RGBW() == 1) // BOE SiW
				{
					regSize = 256;

          // merge 8bits to 16 bits
          for(i=0;i<regSize/2;i++)
          {
            Mplus_Value[i] = (Mplus_Value[i*2]<<8) + Mplus_Value[i*2+1];
          }
          DBG_PRINT(" === [VBE_IOC_MPLUSGET] Panel is made by BOE\n");
				}
				else // default
				{
					regSize = 256;
          DBG_PRINT("=== [VBE_IOC_MPLUSGET] Doesn't support this panel\n");
				}


        //printk("[henry] VBE_IOC_MPLUSGET, nPanelMaker=%d\n", mPlusRegStructSet.nPanelMaker);
        //printk("[henry] VBE_IOC_MPLUSGET, %x, %x\n", Mplus_Value[0], Mplus_Value[1]);
        //printk("[henry] VBE_IOC_MPLUSGET, return16=%x\n", *( (UINT16 *)mPlusRegStructSet.pRegisterSet));
        //printk("[henry] VBE_IOC_MPLUSGET, return8=%x\n", *( (UINT8 *)mPlusRegStructSet.pRegisterSet));
        //printk("[henry] VBE_IOC_MPLUSGET, global array addr=%p\n", Mplus_Value);
        //printk("[henry] VBE_IOC_MPLUSGET, return addr=%p\n", mPlusRegStructSet.pRegisterSet);


        if(copy_to_user(to_user_ptr(mPlusRegStructSet.pRegisterSet), (void *)Mplus_Value, regSize*sizeof(UINT16)))
  			{
  				  retval = -EFAULT;
    				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_MPLUSGET copy to user failed!!!!!!!!!!!!!!!\n");
  			}
			}
			break;

		}

		case VBE_IOC_GET_OSD_ALPHA_APL:
		{
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
			VBE_DISP_OSD_ALPHA_APL_T osdAlphaAPL = {0, 0};
#else
			VBE_DISP_OSD_ALPHA_APL_T osdAlphaAPL = {(UINT32 *)NULL, 0};
#endif
			HAL_VBE_DISP_GetOSDAlphaAPL(to_user_ptr(osdAlphaAPL.pAlphaTbl), osdAlphaAPL.size);

			if(copy_to_user(to_user_ptr(arg), (void *)&osdAlphaAPL, sizeof(VBE_DISP_OSD_ALPHA_APL_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_GET_OSD_ALPHA_APL failed!!!!!!!!!!!!!!!\n");
			}
			break;

		}
		case VBE_IOC_SET_OSD_RGB_LEVEL:
		{

			VBE_DISP_OSD_RGB_LEVEL_T osdRGBLevel;

			if(copy_from_user((void *)&osdRGBLevel, (const void __user *)arg, sizeof(VBE_DISP_OSD_RGB_LEVEL_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SET_OSD_RGB_LEVEL failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetOSDRGBLevel(osdRGBLevel.bOnOff, to_user_ptr(osdRGBLevel.pLvlTbl), osdRGBLevel.size);
			}
			break;
		}


		case VBE_IOC_SETEPIDATASCRAMBLE:
		{
			BOOLEAN bOnOFF;

			if(copy_from_user((void *)&bOnOFF, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETEPIDATASCRAMBLE 1 failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetEPIDataScramble(bOnOFF);
			}
			break;
		}
		case VBE_IOC_SETADVANCED10BIT:
		{
			BOOLEAN bOnOFF;

			if(copy_from_user((void *)&bOnOFF, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SETADVANCED10BIT 1 failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_VBE_DISP_SetAdvanced10bit(bOnOFF);
			}
			break;
		}

		case V3D_IOC_INITIALIZE:
		{
			HAL_V3D_Initialize();
			break;
		}
		case V3D_IOC_SET3DFMT:
		{
			V3D_Set3DFMT_T v3d_set3dfmt_param;
			if(copy_from_user((void *)&v3d_set3dfmt_param, (const void __user *)arg, sizeof(V3D_Set3DFMT_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=V3D_IOC_SET3DFMT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_V3D_Set3DFMT(v3d_set3dfmt_param.wid, v3d_set3dfmt_param.in_fmt, v3d_set3dfmt_param.out_fmt);
			}
			break;
		}
		case V3D_IOC_SETLRSEQ:
		{
			V3D_LR_SEQ_T type;
			if(copy_from_user((void *)&type, (const void __user *)arg, sizeof(V3D_LR_SEQ_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=V3D_IOC_SETLRSEQ failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_V3D_SetLRSeq(type);
			}
			break;
		}
		case V3D_IOC_CTRLCONVERGENCE:
		{
			INT8 s8ConvValue;
			if(copy_from_user((void *)&s8ConvValue, (const void __user *)arg, sizeof(INT8)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=V3D_IOC_CTRLCONVERGENCE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_V3D_CtrlConvergence(s8ConvValue);
			}
			break;
		}
		case V3D_IOC_CTRLDEPTH:
		{
			UINT8 u8DepthLevel;
			if(copy_from_user((void *)&u8DepthLevel, (const void __user *)arg, sizeof(UINT8)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=V3D_IOC_CTRLDEPTH failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_V3D_CtrlDepth(u8DepthLevel);
			}
			break;
		}
		case V3D_IOC_SETAUTOCONVENABLE:
		{
			BOOLEAN bOnOff;
			if(copy_from_user((void *)&bOnOff, (const void __user *)arg, sizeof(BOOLEAN)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=V3D_IOC_SETAUTOCONVENABLE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_V3D_SetAutoConvEnable(bOnOff);
			}
			break;
		}
		case V3D_IOC_GETAUTODETECTINGRESULT:
		{
			V3D_FMT_TYPE_T pVideo3Dtype;
			if(copy_from_user((void *)&pVideo3Dtype, (const void __user *)arg, sizeof(V3D_FMT_TYPE_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=V3D_IOC_GETAUTODETECTINGRESULT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_V3D_GetAutoDetectingResult(&pVideo3Dtype);
			}
			break;
		}
		case V3D_IOC_SETAUTODETECTINGTYPE:
		{
			V3D_FORMAT_TYPE_T mode;
			if(copy_from_user((void *)&mode, (const void __user *)arg, sizeof(V3D_FORMAT_TYPE_T)))
			{
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=V3D_IOC_SETAUTODETECTINGTYPE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				HAL_V3D_SetAutoDetectingType(mode);
			}
			break;
		}
		case VBE_IOC_DISP_DATAFRAMESYNC:
		{
			BOOLEAN enable;
			if(copy_from_user((void *)&enable, (const void __user *)arg, sizeof(BOOLEAN))) {
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_DATAFRAMESYNC failed!!!!!!!!!!!!!!!\n");
			} else {
				HAL_VBE_DISP_DataFrameSync(enable);
			}
			break;
		}
		case VBE_IOC_DISP_ADAPTIVESTREAM_FRAMERATE:
		{
			unsigned int framerate;
			if(copy_from_user((void *)&framerate, (const void __user *)arg, sizeof(unsigned int))) {
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_DISP_ADAPTIVESTREAM_FRAMERATE failed!!!!!!!!!!!!!!!\n");
			} else {
				if(vbe_disp_get_adaptivestream_fs_mode() == 1)
					vbe_disp_set_adaptivestream_force_framerate(framerate);
			}
			break;
		}

		case VBE_IOC_SET_FORCEBG_COLOR:
		{
			FORCEBG_COLOR_CTRL_TYPE bgcolortype;
			if(copy_from_user((void *)&bgcolortype, (const void __user *)arg, sizeof(FORCEBG_COLOR_CTRL_TYPE))) {
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SET_FORCEBG_COLOR failed!!!!!!!!!!!!!!!\n");
			} else {
				drvif_scalerdisplay_set_bg_color((unsigned char )bgcolortype.wid, _DISPLAY_BG, ((bgcolortype.COLORRGB >> 16) & 0xFF) << 6 , ((bgcolortype.COLORRGB >> 8) & 0xFF) << 6 , (bgcolortype.COLORRGB  & 0xFF) << 6 );

			}
			break;
		}

		case VBE_IOC_SET_PANEL_SFG:
		{
			unsigned char enable;
			if(copy_from_user((void *)&enable, (const void __user *)arg, sizeof(unsigned char))) {
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SET_PANEL_FG failed!!!!!!!!!!!!!!!\n");
			} else {
				Scaler_ForcePanelBg(enable);

			}
			break;
		}

		case VBE_IOC_SET_PANEL_FORCEBG_COLOR:
		{
			unsigned int panel_bg_color;
			if(copy_from_user((void *)&panel_bg_color, (const void __user *)arg, sizeof(unsigned int))) {
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SET_PANEL_FORCEBG_COLOR failed!!!!!!!!!!!!!!!\n");
			} else {
				drvif_scalerdisplay_set_panel_bg_color(((panel_bg_color >> 16) & 0xFF) << 2 , ((panel_bg_color >> 8) & 0xFF) << 2 , (panel_bg_color  & 0xFF) << 2 );

			}
			break;
		}
		case VBE_IOC_SET_VCOMPatternDraw:
		{
			unsigned char	*m_pCacheStartAddr = NULL;
			VBE_DISP_VCOM_PATTERN_DRAW_T dispVcomPatDraw;

			if(copy_from_user((void *)&dispVcomPatDraw, (const void __user *)arg, sizeof(VBE_DISP_VCOM_PATTERN_DRAW_T))) {
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SET_VCOMPatternDraw failed!!!!!!!!!!!!!!!\n");
			} else {

				m_pCacheStartAddr = (unsigned char *)dvr_malloc(dispVcomPatDraw.nSize*sizeof(UINT16));
				if(m_pCacheStartAddr == NULL){
					#ifndef CONFIG_ARM64
					rtd_printk(KERN_ERR, TAG_NAME_VBE, "[ERROR]VBE_IOC_SET_VCOMPatternDraw Allocate size=%x fail\n",dispVcomPatDraw.nSize*sizeof(UINT16));
					#endif
					return FALSE;
				}

				//get vcom pattern
				if(copy_from_user((void *)m_pCacheStartAddr, (const void __user *)to_user_ptr(dispVcomPatDraw.u16pVcomPattern), dispVcomPatDraw.nSize*sizeof(UINT16)))
				{
					retval = -EFAULT;
					DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SET_VCOMPatternDraw  vcom pattern failed!!!!!!!!!!!!!!!\n");
				}
				HAL_VBE_DISP_VCOMPatternDraw((UINT16*)m_pCacheStartAddr, dispVcomPatDraw.nSize);

				if(m_pCacheStartAddr){
					dvr_free((void *)m_pCacheStartAddr);
				}

			}
			break;
		}
		case VBE_IOC_SET_VCOMPatternCtrl:
		{
			KADP_DISP_PANEL_VCOM_PAT_CTRL_T vcomCtrl;

			if(copy_from_user((void *)&vcomCtrl, (const void __user *)arg, sizeof(KADP_DISP_PANEL_VCOM_PAT_CTRL_T))) {
				retval = -EFAULT;
				DBG_PRINT("scaler vbe ioctl code=VBE_IOC_SET_VCOMPatternCtrl failed!!!!!!!!!!!!!!!\n");
			} else {
				HAL_VBE_DISP_VCOMPatternCtrl(vcomCtrl);
			}
			break;
		}
		case VBE_IOC_PANEL_MODE_SET:
		{
			KADP_PANEL_MODE_SET_T panel_set;

			if(copy_from_user((void *)&panel_set, (const void __user *)arg, sizeof(KADP_PANEL_MODE_SET_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_NOTICE, TAG_NAME_VBE, "scaler vbe ioctl code=VBE_IOC_PANEL_POWER_ONOFF failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				rtd_printk(KERN_NOTICE, TAG_NAME_VBE,"panel_set.ctrl_set = %d, enable = %d \n", panel_set.ctrl_set, panel_set.power_enable);
				/*if (panel_set.ctrl_set == KADP_DISP_PANEL_STR_BACKLIGHT_CTRL_BY_AP) {
					Panel_Set_STR_BackLight_Ctrl_Mode(panel_set.power_enable);
				}
				*/
				if(panel_set.ctrl_set == 0)
				{
                                    if (panel_set.power_enable == false)
                                    {
                                            tconless_CS602_reserve();
                                            vbe_disp_lane_power_off();
                                            rtd_printk(KERN_NOTICE, TAG_NAME_VBE, " power off of lane data by max\n");
                                    }
                                    else
                                    {
                                            //tconless_cs602_reset();
                                            vbe_disp_lane_power_on();
                                            rtd_printk(KERN_NOTICE, TAG_NAME_VBE, " power on of lane data by max\n");
                                    }
				}
			}
			break;
		}

		default:
			retval = -EFAULT;
			rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"Scaler vbe disp: ioctl code = %d is invalid!!!!!!!!!!!!!!!1\n", cmd);
			break ;
		}
	return retval;
}

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
long vbe_compat_ioctl(struct file *file, unsigned int cmd,  unsigned long arg)
{
	return vbe_ioctl(file,cmd,arg);
}
#endif

struct file_operations vbe_fops= {
	.owner =    THIS_MODULE,
	.open  =    vbe_open,
	.release =  vbe_release,
	.read  =    vbe_read,
	.write = 	vbe_write,
	.unlocked_ioctl =    vbe_ioctl,
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
  	.compat_ioctl = vbe_compat_ioctl,
#endif
};

#ifdef CONFIG_PM
static const struct dev_pm_ops vbe_pm_ops =
{
	.suspend    = vbe_suspend_instanboot,
	.resume     = vbe_resume_instanboot,
	.complete	= vbe_resume_Backlight_TurnOn,
#ifdef CONFIG_HIBERNATION
	.freeze 	= vbe_suspend,
	.thaw 		= vbe_resume,
	.poweroff 	= vbe_suspend,
	.restore 	= vbe_resume,
#endif
};
#endif // CONFIG_PM


static struct platform_device *vbe_platform_devs;

static struct platform_driver vbe_device_driver = {
	.driver =
	{
        .name         = VBE_DEVICE_NAME,
        .bus          = &platform_bus_type,
#ifdef CONFIG_PM
	 .pm         = &vbe_pm_ops,
#endif

	},
};

static char *vbe_devnode(struct device *dev, mode_t *mode)
{
	return NULL;
}

static int __init rtk_panel_get_pmic(char *cmdline)
{

    static char *mode;
	UINT32 pmic_mode;
    mode = cmdline;
    if(cmdline == NULL){
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"rtk_panel_get_pmic cmd=NULL\n");
    }else{
        pmic_mode = simple_strtoul(mode, &mode, 10);
		rtd_printk(KERN_EMERG, TAG_NAME_VBE,"rtk_panel_get_pmic : pmic_mode=%d !!!\n", pmic_mode);
		Set_PANEL_PMIC_Type(pmic_mode);
    }
    return 0;
}
early_param("pmic_setting_index", rtk_panel_get_pmic);
#define S_OK		0x10000000
void rpc_send_debug_cmd(const char *pattern, int length)
{
#ifdef CONFIG_RTK_KDRV_RPC
	unsigned long ret = S_OK;
#endif
	unsigned long vir_addr;
	unsigned long phy_addr;
	char *command = NULL;

	vir_addr = (unsigned long)dvr_malloc_uncached_specific(length+1, GFP_DCU1, (void **)&command);
	if (!vir_addr) {
		pr_err("[%s %d]alloc string memory fail\n",__FUNCTION__,__LINE__);
		return;
	}
	phy_addr = (unsigned long)dvr_to_phys((void *)vir_addr);
	memset((void *)command, '\0', length+1);
	memcpy((void *)command, (void *)pattern, length);

	pr_debug("rtkvdec: debug string(%s), length(%d)\n", command, length);
#ifdef CONFIG_RTK_KDRV_RPC
	if (send_rpc_command(RPC_VIDEO, RPC_VCPU_DEBUG_COMMAND, phy_addr, length, &ret))
		pr_err("rtkvdec: debug string(%s) fail %d\n", pattern, (int)ret);
#endif
	dvr_free((void *)vir_addr);
	return;
}

extern u32 gic_irq_find_mapping(u32 hwirq);//cnange interrupt register way
int vbe_module_init(void)
{
	int result;
	int vbe_devno;
	char cmd_buf[25];
	dev_t devno = 0;//vbe device number
	PANEL_CONFIG_PARAMETER *panel_parameter = NULL;
	ppoverlay_memc_mux_ctrl_RBUS ppoverlay_memc_mux_ctrl_reg;

	result = alloc_chrdev_region(&devno, vbe_minor, vbe_nr_devs,VBE_DEVICE_NAME);
	vbe_major = MAJOR(devno);
	if (result < 0) {
		DBG_PRINT(KERN_WARNING "VBE_DEVICE: can't get major %d\n", vbe_major);
		return result;
	}

	rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"VBE_DEVICE init module major number = %d\n", vbe_major);
	vbe_devno = MKDEV(vbe_major, vbe_minor);

	vbe_class = class_create(THIS_MODULE, VBE_DEVICE_NAME);

	if (IS_ERR(vbe_class))
	{
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"scalevbe: can not create class...\n");
	    result=PTR_ERR(vbe_class);
		goto fail_class_create;
	}
	vbe_class->devnode = (void *)vbe_devnode;
	vbe_platform_devs = platform_device_register_simple(VBE_DEVICE_NAME, -1, NULL, 0);
    if((result=platform_driver_register(&vbe_device_driver)) != 0)
	{
		rtd_printk(KERN_DEBUG, TAG_NAME_VBE,"scalebfe: can not register platform driver...\n");
    	goto fail_platform_driver_register;
    }

	cdev_init(&vbe_cdev, &vbe_fops);
	vbe_cdev.owner = THIS_MODULE;
   	vbe_cdev.ops = &vbe_fops;
	result = cdev_add (&vbe_cdev, vbe_devno, 1);
	if (result)
	{
		DBG_PRINT(KERN_NOTICE "Error %d adding VBE_DEVICE!\n", result);
		goto fail_cdev_init;
	}
	device_create(vbe_class, NULL, MKDEV(vbe_major, 0), NULL,VBE_DEVICE_NAME);
	sema_init(&VBE_Semaphore, 1);
	sema_init(&VBE_LowDelay_Semaphore, 1);
	sema_init(&VBE_RGBW_Resume_Semaphore, 1);
	panel_parameter =  (PANEL_CONFIG_PARAMETER *)&platform_info.panel_parameter;
	Panel_InitParameter(panel_parameter);
	Panel_LVDS_To_Hdmi_Converter_Parameter();
	modestate_decide_pixel_mode();

#if 1 // Eric@20180807 HDMI converter board don't enable film mode change flow
	if((Get_DISPLAY_PANEL_TYPE() == P_VBY1_TO_HDMI)|| (Get_DISPLAY_PANEL_TYPE() == P_LVDS_TO_HDMI)){
		strcpy(cmd_buf, "hevc_film_mode_manual=1");
	    rpc_send_debug_cmd(cmd_buf,23);
		strcpy(cmd_buf, "hevc_film_mode=0");
	    rpc_send_debug_cmd(cmd_buf,16);
	}
#endif

	if(Scaler_Get_FreeRun_To_FrameSync_By_HW_SpeedUp_ByMcode_HW_CTRL2() ||
		Scaler_Get_FreeRun_To_FrameSync_By_HW_SpeedUp_ByMcode_HW_CTRL3()){

        if(request_irq(IRQ_GET_KERNEL_IRQ_NUM(IRQ_MISC), vbe_timer_display_interrupt, IRQF_SHARED, "timer_dv", vbe_timer_display_interrupt)){
            printk(KERN_EMERG"[vbe_timer_display_interrupt]: can't get assigned irq%d\n", IRQ_MISC);
        }
		create_timer(7, TIMER_CLOCK/4000, COUNTER); // 25 us
		//Disable Interrupt
		rtk_timer_control(7, HWT_INT_DISABLE);
		// disable timer7
		IoReg_Write32(TIMER_TC7CR_reg, 0);
		// write 1 clear
		IoReg_Write32(TIMER_ISR_reg, TIMER_ISR_tc7_int_mask);

    }

	ppoverlay_memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	if(ppoverlay_memc_mux_ctrl_reg.memcdtg_golden_vs == 1){
		vbe_disp_set_dynamic_memc_bypass_flag(TRUE);
	}else{
		vbe_disp_set_dynamic_memc_bypass_flag(FALSE);
	}
	return 0;//Success

fail_cdev_init:
	platform_driver_unregister(&vbe_device_driver);
fail_platform_driver_register:
	platform_device_unregister(vbe_platform_devs);
	vbe_platform_devs = NULL;
	class_destroy(vbe_class);
fail_class_create:
	vbe_class = NULL;
	unregister_chrdev_region(vbe_devno, vbe_nr_devs);
	return result;
}

void __exit vbe_module_exit(void)
{
	dev_t devno = MKDEV(vbe_major, vbe_minor);
	DBG_PRINT(KERN_INFO "vbe clean module vbe_major = %d\n", vbe_major);

  	device_destroy(vbe_class, MKDEV(vbe_major, 0));
  	class_destroy(vbe_class);
	vbe_class=NULL;
	cdev_del(&vbe_cdev);

   	/* device driver removal */
	if(vbe_platform_devs)
	{
		platform_device_unregister(vbe_platform_devs);
		vbe_platform_devs=NULL;
	}
  	platform_driver_unregister(&vbe_device_driver);

	/* cleanup_module is never called if registering failed */
	unregister_chrdev_region(devno, vbe_nr_devs);
}

module_init(vbe_module_init);
module_exit(vbe_module_exit);
