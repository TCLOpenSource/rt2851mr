/* 20160608 Still Logo Detect header file*/
#ifndef  __STILLLOGODETECT_H__
#define  __STILLLOGODETECT_H__

#ifdef __cplusplus
extern "C" {
#endif
/* some include about scaler*/
#if CONFIG_FIRMWARE_IN_KERNEL
#include <scaler/vipCommon.h>
#else
#include <scaler/vipCommon.h>
#endif

#if 1 /*SLD, hack, elieli*/ //k5l hw remove
void SLD_k6_HAL(int Y1, int Y2, int Y3, int gain_low,unsigned char UIsel_L);
void drvif_color_set_SLD_4k_dma_setting(void);
void drvif_color_set_SLD_Enable(unsigned char enable);
void drvif_color_set_SLD_control(DRV_SLD_Ctrl *ptr);
void drvif_color_set_SLD_input_size(DRV_SLD_Size *ptr);
void drvif_color_set_SLD_curve_map(DRV_SLD_CurveMap *ptr);
void drvif_color_set_SLD_drop(DRV_SLD_DROP *ptr);
void drvif_color_set_SLD_cnt_thl(unsigned int cnt_th);
void fwif_k6_sld(int Y1, int Y2, int Y3, int gain_low,unsigned char UIsel_L, unsigned int cnt_th);

#endif

#ifdef __cplusplus
}
#endif

#endif // __LOCALCONTRAST_H__


