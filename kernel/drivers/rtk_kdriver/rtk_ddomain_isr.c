//Copyright (C) 2007-2013 Realtek Semiconductor Corporation.
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/interrupt.h>
#include <linux/cdev.h>
#include <linux/platform_device.h>
#include <linux/fs.h>
#include <asm/uaccess.h>
#include <tvscalercontrol/panel/panelapi.h>

#include "rtk_ddomain_isr.h"
#include <rbus/ppoverlay_reg.h>
#include <rbus/sys_reg_reg.h>
#include <rbus/vgip_reg.h>
//#include <rtk_ai.h>
//#include <scaler/vipRPCCommon.h>
//#include <scaler/scalerCommon.h>
#include "vgip_isr/scalerAI.h"
#include <tvscalercontrol/vip/scalerColor.h>
#include <rtk_ai.h>

#include <tvscalercontrol/vip/ai_pq.h>
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

#ifndef UINT8
typedef unsigned char  UINT8;
#endif
#ifndef UINT16
typedef unsigned short UINT16;
#endif
#ifndef UINT32
typedef unsigned int   UINT32;
#endif


/* Function Prototype */
static unsigned int mv_den_end_count;
static unsigned int mv_den_sta_count;
static int ddomain_isr_suspend(struct platform_device *dev, pm_message_t state);
static int ddomain_isr_resume(struct platform_device *dev);

static struct platform_device *ddomain_isr_platform_devs = NULL;
static struct platform_driver ddomain_isr_platform_driver = {
#ifdef CONFIG_PM
	.suspend		= ddomain_isr_suspend,
	.resume			= ddomain_isr_resume,
#endif
	.driver = {
		.name		= "ddomain_isr",
		.bus		= &platform_bus_type,
	},
};

unsigned short APL[2040]={0};//60*34 = 2040;

#ifdef CONFIG_PM
static int ddomain_isr_suspend(struct platform_device *dev, pm_message_t state)
{
	ppoverlay_dtg_ie_2_RBUS ppoverlay_dtg_ie_2_reg;

	printk(KERN_NOTICE "[DDOMAIN_ISR]%s %d\n",__func__,__LINE__);

	//enable dtg_ie2 interrupt
	ppoverlay_dtg_ie_2_reg.regValue = rtd_inl(PPOVERLAY_DTG_ie_2_reg);
	ppoverlay_dtg_ie_2_reg.mv_den_sta_event_ie_2 = 0;
	ppoverlay_dtg_ie_2_reg.mv_den_end_event_ie_2 = 0;
	rtd_outl(PPOVERLAY_DTG_ie_2_reg, ppoverlay_dtg_ie_2_reg.regValue);

	printk(KERN_NOTICE "[DDOMAIN_ISR] suspend done\n");

	return 0;
}

static int ddomain_isr_resume(struct platform_device *dev)
{
	sys_reg_int_ctrl_scpu_RBUS sys_reg_int_ctrl_scpu_reg;
	ppoverlay_dtg_ie_2_RBUS ppoverlay_dtg_ie_2_reg;

	printk(KERN_NOTICE "[DDOMAIN_ISR]%s %d\n",__func__,__LINE__);

	// enable route to SCPU,  Dctl_int_2_scpu_routing_en
	sys_reg_int_ctrl_scpu_reg.regValue = 0;
	sys_reg_int_ctrl_scpu_reg.dctl_int_2_scpu_routing_en = 1;
	sys_reg_int_ctrl_scpu_reg.write_data = 1;
	rtd_outl(SYS_REG_INT_CTRL_SCPU_reg, sys_reg_int_ctrl_scpu_reg.regValue);

	//enable dtg_ie2 interrupt
	ppoverlay_dtg_ie_2_reg.regValue = rtd_inl(PPOVERLAY_DTG_ie_2_reg);
	ppoverlay_dtg_ie_2_reg.mv_den_sta_event_ie_2 = 1;
	ppoverlay_dtg_ie_2_reg.mv_den_end_event_ie_2 = 1;
	rtd_outl(PPOVERLAY_DTG_ie_2_reg, ppoverlay_dtg_ie_2_reg.regValue);

	printk(KERN_NOTICE "[DDOMAIN_ISR] resume done\n");

	return 0;
}

#endif

unsigned int ddomain_isr_get_mv_den_end_count(void)
{
	return mv_den_end_count;
}

unsigned int ddomain_isr_get_mv_den_sta_count(void)
{
	return mv_den_sta_count;
}

EXPORT_SYMBOL(ddomain_isr_get_mv_den_end_count);
EXPORT_SYMBOL(ddomain_isr_get_mv_den_sta_count);

extern unsigned char fwif_color_icm_set_pillar_RGB_Offset_byD_ISR(void);
extern unsigned char update_ICM_Pillar_Offset;
extern void scalerAI_face_PQ_set(void);
extern void fwif_color_GSR_setrgbbrightness(unsigned short* APL);


#if defined(CONFIG_RTK_AI_DRV)
extern unsigned char bAIInited;
extern UINT8 reset_face_apply;
extern UINT8 vpq_stereo_face;
extern unsigned char PQ_set_done;
extern DRV_AI_Ctrl_table ai_ctrl;
extern int ai_face_rtk_mode;
extern int dcc_user_curve129[129];
extern unsigned char dcc_user_curve_write_flag;
extern void dcc_user_curve_write_table_tv006(UINT8 display, UINT8 Total_Curve_segment, int *Apply_Curve, int *to_SRAM_Curve, UINT8 *write_flag, UINT8 *apply_flag);
#endif

irqreturn_t ddomain_isr(int irq, void *dev_id)
{
	ppoverlay_dtg_ie_2_RBUS dtg_ie_2_reg;
	ppoverlay_dtg_pending_status_2_RBUS dtg_pending_status_2_reg;
	UINT8 handle_mv_den_sta_flag = 0;
	UINT8 handle_mv_den_end_flag = 0;
	unsigned int ret=IRQ_NONE;
	UINT8 handle_disp_frc2fsync_flag = 0;
#if defined(CONFIG_RTK_AI_DRV)
	UINT8 AI_PQ_set_flag = ((vpq_stereo_face!=AI_PQ_AP_OFF) || reset_face_apply);
	int dcc_user_curve_sram[TableSeg_num_Max] = {0};
	unsigned char dcc_user_curve_apply_flag = 0;
	static int ai_face_disabled = 1;
#endif

	extern void drvif_scaler_enable_frc2fsync_interrupt(UINT8 bEnable);
	extern void drvif_scaler_enable_frc2fsync_HW_speedup_vtotal(UINT8 bEnable);
	extern void drvif_scaler_enable_frc2fsync_SW_speedup_vtotal(UINT8 bEnable);
	dtg_ie_2_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_ie_2_reg);
	dtg_pending_status_2_reg.regValue = IoReg_Read32(PPOVERLAY_DTG_pending_status_2_reg);
	handle_mv_den_sta_flag = dtg_pending_status_2_reg.mv_den_sta_event_2;
	handle_mv_den_end_flag = dtg_pending_status_2_reg.mv_den_end_event_2;
	handle_disp_frc2fsync_flag = dtg_pending_status_2_reg.disp_frc2fsync_event_2;

	if((dtg_ie_2_reg.disp_frc2fsync_event_ie_2==1)&&(handle_disp_frc2fsync_flag == 1)){
			pr_notice("#fsync ok (vl:%d, ul:%d)\n", VGIP_VGIP_CHN1_LC_get_ch1_line_cnt(IoReg_Read32(VGIP_VGIP_CHN1_LC_reg)),
			PPOVERLAY_new_meas2_linecnt_real_get_uzudtg_dly_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg)));
#if 0	//I2D tracking debug
			pr_notice("i2d_phase = %d, LC = [%d, %d, %d]\n", PPOVERLAY_I2D_MEAS_phase_get_i2d_phase_err(IoReg_Read32(PPOVERLAY_I2D_MEAS_phase_reg)), VODMA_VODMA_LINE_ST_get_line_cnt(IoReg_Read32(VODMA_VODMA_LINE_ST_reg)), SCALEDOWN_ICH1_line_cnt_get_sdnr_ch1_line_cnt(IoReg_Read32(SCALEDOWN_ICH1_line_cnt_reg)), PPOVERLAY_new_meas2_linecnt_real_get_uzudtg_dly_line_cnt_rt(IoReg_Read32(PPOVERLAY_new_meas2_linecnt_real_reg)));
#endif
			drvif_scaler_enable_frc2fsync_interrupt(0);
			if((Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD2K1K_to_H5X_SPLIT) ||(Get_DISPLAY_PANEL_CUSTOM_INDEX() == VBY_ONE_PANEL_4K2K_OSD1K2K_to_H5X_SPLIT))
				drvif_scaler_enable_frc2fsync_SW_speedup_vtotal(0);
			else
				drvif_scaler_enable_frc2fsync_HW_speedup_vtotal(0);

            ret = IRQ_HANDLED;
	}

	if (dtg_ie_2_reg.mv_den_sta_event_ie_2 && handle_mv_den_sta_flag) {//data start isr
		mv_den_sta_count++;
		dtg_pending_status_2_reg.regValue=0;
		dtg_pending_status_2_reg.mv_den_sta_event_2 = 1;//write clear status
		IoReg_Write32(PPOVERLAY_DTG_pending_status_2_reg, dtg_pending_status_2_reg.regValue);
		ret = IRQ_HANDLED;
	}

	if (dtg_ie_2_reg.mv_den_end_event_ie_2 && handle_mv_den_end_flag) {

#if defined(CONFIG_RTK_AI_DRV)

	dcc_user_curve_write_table_tv006(SLR_MAIN_DISPLAY, TableSeg_num_Max, dcc_user_curve129, dcc_user_curve_sram, &dcc_user_curve_write_flag, &dcc_user_curve_apply_flag);

	if(bAIInited && AI_PQ_set_flag)
	{
		if(ai_ctrl.ai_global3.ip_isr_ctrl)// avoid cmd from v4l2, hal, osd..
		{
			// init one time only, controled by ai_face_rtk_mode (bit 26)
			if(ai_face_rtk_mode==1 && ai_face_disabled==1)
			{
				//rtd_printk(KERN_INFO, "VPQ_AI", "ai_face_rtk_mode=1, ai_face_disabled=1\n");
				drvif_color_AI_obj_dcc_init(1);
				drvif_color_AI_obj_icm_init(1);
				drvif_color_AI_obj_srp_init(1);
				ai_face_disabled = 0;
			}
			else if(ai_face_rtk_mode==0 && ai_face_disabled==0)
			{
				//rtd_printk(KERN_INFO, "VPQ_AI", "ai_face_rtk_mode=%d, ai_face_disabled=0\n", ai_face_rtk_mode);
				drvif_color_AI_obj_dcc_init(0);
				drvif_color_AI_obj_icm_init(0);
				drvif_color_AI_obj_srp_init(0);
				ai_face_disabled = 1;
			}
		}
		/*if(vpq_stereo_face!=AI_PQ_AP_OFF && ai_ctrl.ai_global3.ip_isr_ctrl)
		{
			drvif_color_AI_obj_srp_init(1);
			drvif_color_AI_obj_dcc_init();
		}*/

		scalerAI_face_PQ_set();
		PQ_set_done = 1;
	}
#endif
		fwif_color_GSR_setrgbbrightness(&APL[0]);

		if (update_ICM_Pillar_Offset == 1) {
			fwif_color_icm_set_pillar_RGB_Offset_byD_ISR();
			update_ICM_Pillar_Offset = 0;
		}

		mv_den_end_count++;
		dtg_pending_status_2_reg.regValue=0;
		dtg_pending_status_2_reg.mv_den_end_event_2 = 1;//write clear status
		IoReg_Write32(PPOVERLAY_DTG_pending_status_2_reg, dtg_pending_status_2_reg.regValue);
		ret = IRQ_HANDLED;
	}

	return ret;
}

extern u32 gic_irq_find_mapping(u32 hwirq);//cnange interrupt register way
static int __init ddomain_isr_init_irq(void)
{
	sys_reg_int_ctrl_scpu_RBUS sys_reg_int_ctrl_scpu_reg;
	ppoverlay_dtg_ie_2_RBUS ppoverlay_dtg_ie_2_reg;

	IoReg_Write32(PPOVERLAY_DTG_pending_status_2_reg, IoReg_Read32(PPOVERLAY_DTG_pending_status_2_reg));

	/* Request IRQ */
	if(request_irq(gic_irq_find_mapping(IRQ_DDOMAIN),
                   ddomain_isr,
                   IRQF_SHARED,
                   "DDOMAIN ISR",
                   (void *)ddomain_isr_platform_devs))
	{
		pr_err("ddomain_isr: cannot register IRQ %d\n", gic_irq_find_mapping(IRQ_DDOMAIN));
		return -ENXIO;
	}

	// enable route to SCPU,  Dctl_int_2_scpu_routing_en
	sys_reg_int_ctrl_scpu_reg.regValue = 0;
	sys_reg_int_ctrl_scpu_reg.dctl_int_2_scpu_routing_en = 1;
	sys_reg_int_ctrl_scpu_reg.write_data = 1;
	rtd_outl(SYS_REG_INT_CTRL_SCPU_reg, sys_reg_int_ctrl_scpu_reg.regValue);

	//enable dtg_ie2 interrupt
	ppoverlay_dtg_ie_2_reg.regValue = rtd_inl(PPOVERLAY_DTG_ie_2_reg);
	ppoverlay_dtg_ie_2_reg.dtg_ie_2 = 1;
	ppoverlay_dtg_ie_2_reg.mv_den_sta_event_ie_2 = 1;
	ppoverlay_dtg_ie_2_reg.mv_den_end_event_ie_2 = 1;
	rtd_outl(PPOVERLAY_DTG_ie_2_reg, ppoverlay_dtg_ie_2_reg.regValue);

	pr_info("ddomain_isr: register IRQ %d\n", gic_irq_find_mapping(IRQ_DDOMAIN));

	return 0;
}
#if 0
static char *vgip_isr_devnode(struct device *dev, mode_t *mode)
{
	return NULL;
}
#endif
static int ddomain_isr_init_module(void)
{

	int result;
	ddomain_isr_platform_devs = platform_device_register_simple("ddomain_isr", -1, NULL, 0);
	if (platform_driver_register(&ddomain_isr_platform_driver) != 0) {
                printk("ddomain_isr: can not register platform driver...\n");
                result = -EINVAL;
                return result;
        }
	result = ddomain_isr_init_irq();
	if (result < 0) {
		pr_err("ddomain_isr: can not register irq...\n");
		return result;
	}

	return 0;

}

void ddomain_isr_exit_module(void)
{
	free_irq(gic_irq_find_mapping(IRQ_DDOMAIN), (void *)ddomain_isr);
}

module_init(ddomain_isr_init_module);
module_exit(ddomain_isr_exit_module);

