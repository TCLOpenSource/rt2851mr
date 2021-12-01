#ifndef __SCALER_VPQDEV_EXTERN_H
#define  __SCALER_VPQDEV_EXTERN_H


/**
 * Video Picture Quality Information.
 *
 * @see DDI Implementation Guide
*/
#include <scaler/vipCommon.h>
#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerDrvCommon.h>
#else
	#include <scalercommon/scalerDrvCommon.h>
#endif


#include <tvscalercontrol/vip/film.h>
#include <tvscalercontrol/vip/peaking.h>
#include <tvscalercontrol/vip/nr.h>
#include <tvscalercontrol/vip/icm.h>
//#include <tvscalercontrol/vip/scalerColor_tv010.h>
#include <tvscalercontrol/scaler/scalercolor_engmenu.h>

typedef enum{
	PQ_DEV_EXTERN_NOTHING = 0,
	PQ_DEV_EXTERN_INIT_DONE,
	PQ_DEV_EXTERN_OPEN_DONE,
	PQ_DEV_EXTERN_UNINIT,
	PQ_DEV_EXTERN_CLOSE,
} PQ_DEV_EXTERN_STATUS;

typedef struct _RTK_PQModule_T {
	unsigned int PQModule;
	unsigned char onOff;
} RTK_PQModule_T;
typedef struct _RTK_DEMO_MODE_T {
	unsigned int DEMO_MODE;
	unsigned char onOff;
} RTK_DEMO_MODE_T;

typedef struct _RTK_TV002_SR_T {
	unsigned short mode;// 0: off, 1: auto, 2: manual
	unsigned short value;// 0~100
} RTK_TV002_SR_T;

typedef enum _VPQ_EXTERN_GET_DYNAMIC_RANGE_ITEMS {
	VPQ_DYNAMIC_RANGE_SDR = 0,
	VPQ_DYNAMIC_RANGE_DOLBY_VISION,
	VPQ_DYNAMIC_RANGE_HDR10,
	VPQ_DYNAMIC_RANGE_HLG,
	VPQ_DYNAMIC_RANGE_TC,
	VPQ_DYNAMIC_RANGE_HDR10_PlUS,
	VPQ_DYNAMIC_RANGE_HDREFFECT,
	VPQ_DYNAMIC_RANGE_SDR_MAX_RGB,

	VPQ_DYNAMIC_RANGE_HLG_14,
	VPQ_DYNAMIC_RANGE_HLG_18,

	VPQ_EXTERN_GET_DYNAMIC_RANGE_ITEMS_MAX,

} VPQ_EXTERN_GET_DYNAMIC_RANGE_ITEMS;

typedef struct
{
   UINT8 flag_0;
   UINT8 flag_1;
   UINT8 flag_2;//h_sta
   UINT8 flag_3;//h_end
   UINT8 flag_4;//v_sta
   UINT8 flag_5;//v_end
   UINT8 flag_6;//RGBmode_en
   UINT8 flag_7;
   UINT8 flag_8;
   UINT8 flag_9;//is_8kboard

}RTK_VIP_Flag;

typedef struct _HAL_VPQ_Panel_Dither_T {
	unsigned char FunEnable;
	unsigned char TemEnable;
	unsigned char default_vip_panel_bit;
	unsigned char nTableType;
} HAL_VPQ_Panel_Dither_T;

void vpq_extern_ioctl_set_stop_run_by_idx(unsigned char cmd_idx, unsigned char stop);

#endif

