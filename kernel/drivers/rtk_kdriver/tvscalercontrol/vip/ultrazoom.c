/*==========================================================================
  * Copyright (c)      Realtek Semiconductor Corporation, 2006
  * All rights reserved.
  * ========================================================================*/

/*================= File Description =======================================*/
/**
 * @file
 * 	This file is for scaler related functions.
 *
 * @author 	$Author$
 * @date		$Date$
 * @version	$Revision$
 * @ingroup	scaler
 */

/**
 * @addtogroup scaler
 * @{
 */


/*============================ Module dependency  ===========================*/

#if CONFIG_FIRMWARE_IN_KERNEL
#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/types.h>
#include <linux/string.h>
#include <tvscalercontrol/io/ioregdrv.h>
//#include <mach/io.h>
#ifdef CONFIG_ARM64
#include <asm/io.h>
#endif

#include <tvscalercontrol/scaler/scalerstruct.h>
#include <tvscalercontrol/scalerdrv/mode.h>
#include <tvscalercontrol/scaler/source.h>
#include <tvscalercontrol/vip/vip_reg_def.h>
#include "tvscalercontrol/vip/peaking.h"
#include <tvscalercontrol/vip/ultrazoom.h>
#include <tvscalercontrol/hdmirx/hdmifun.h>
#include <tvscalercontrol/panel/panelapi.h>
#include "tvscalercontrol/scalerdrv/scaler_2dcvt3d_ctrl.h"
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include "tvscalercontrol/scalerdrv/scalermemory.h"
#include <tvscalercontrol/scaler_vscdev.h>
#include <tvscalercontrol/scalerdrv/zoom_smoothtoggle_lib.h>
#include <tvscalercontrol/scaler_vbedev.h>

#include <mach/rtk_log.h>
#define TAG_NAME "VPQ"

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

#else

#include <unistd.h>			// 'close()'
#include <fcntl.h>			// 'open()'
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//#include "rtd_regs.h"
//#include "rtd_macro.h"
#include <Platform_Lib/TVScalerControl/io/ioRegDrv.h>
//#include <Application/AppClass/TvControl/Utils/RtSystem.h>
#include <Platform_Lib/TVScalerControl/scaler/scalerStruct.h>
#include <Platform_Lib/TVScalerControl/scalerDrv/mode.h>
#include <Platform_Lib/TVScalerControl/scaler/source.h>
#include <Platform_Lib/TVScalerControl/vip/VIP_reg_def.h>
#include "Platform_Lib/TVScalerControl/vip/peaking.h"
#include <Platform_Lib/TVScalerControl/vip/ultrazoom.h>
#include <Platform_Lib/TVScalerControl/hdmiRx/hdmiFun.h>
#include <Platform_Lib/panel/panelAPI.h>
#include "Platform_Lib/TVScalerControl/scalerDrv/scaler_2Dcvt3D_Ctrl.h"
#include <Platform_Lib/TVScalerControl/scaler/scalerLib.h>
#include <Platform_Lib/TVScalerControl/scaler/scalerColorLib.h>
#include <Platform_Lib/TVScalerControl/scalerDrv/scalermemory.h>

/*
#include "dragon.h"
#include "scaler.h"
#include "scaler_display.h"
#include "message.h"
#include "scaler/Mode.h"
#include "global.h"
#include "vip/vip_reg_def.h"
#include "pipmp.h"
#include "scaler/ultrazoom.h"
#include "scaler/scalerdef.h"
#include "scaler/peaking.h"
#include "scaler/video_quality.h"
#include "hdmi/hdmi_fun.h"
#include "scaler/video_quality.h"
*/
#endif
/*================================== Types ==============================*/

#define SCALEUP_CUT_HOR_4LINE 1
#define SCALEUP_CUT_VER_2LINE 1
#define SCALING_LOG 0

#define HDMI_INTERLACE_MAX_WID 1920
#define HDMI_MAX_WID 3840

/*================================== Variables ==============================*/

#if CONFIG_FIRMWARE_IN_KERNEL
#define VIPprintf(fmt, args...)	/*rtd_printk(KERN_DEBUG, TAG_NAME, fmt, ##args)*/
#else
#define VIPprintf(fmt, args...)	printf(fmt, ##args)
#endif

VIP_Two_Step_UZU_MODE Two_Step_UZU_Mode = Two_Step_UZU_Disable;

#if defined(CONFIG_RTK_AI_DRV)
extern unsigned int dirsu_angmagconf[7];
extern unsigned int dirsu_angletransition[8];
#endif
	
#if 0
  static signed short SUFIR128_YL00[] = /*20*/
  {
  -48,	-48,  -48,	-48,  -52,	-52,  -48,	-48,
  -48,	-44,  -48,	-40,  -44,	-36,  -36,	-32,
  -28,	-20,  -12,	 -8,	4,	 12,   20,	 28,
   44,	 	52,   68,	 80,   92,	108,  124,	140,
  212,	232,  252,	268,  292,	312,  336,	352,
  376,	396,  420,	440,  464,	484,  508,	528,
  556,	572,  588,	612,  620,	640,  652,	668,
  676,	684,  696,	704,  712,	712,  716,	720,
  };

static signed short SUFIRgauss128_A1o4_Fc85[] = /*21*/
{
  -18,  -21,  -25,  -28,  -31,  -35,  -37,  -38,
  -41,  -42,  -45,  -47,  -47,  -46,  -44,  -45,
  -43,  -41,  -36,  -31,  -25,  -18,  -10,    0,
   10,   22,   35,   49,   65,   81,   99,  118,
  139,  162,  187,  212,  238,  265,  292,  319,
  347,  375,  404,  433,  461,  488,  516,  543,
  569,  593,  618,  641,  663,  683,  701,  718,
  733,  747,  759,  768,  775,  781,  784,  785,
  };

static signed short SUFIRgauss128_A1o4_Fc85_shp[] = /*22*/
{
  -37,  -41,  -44,  -48,  -51,  -55,  -59,  -60,
  -62,  -63,  -66,  -66,  -68,  -68,  -66,  -65,
  -66,  -63,  -58,  -53,  -47,  -40,  -32,  -22,
  -11,    2,   15,   29,   45,   62,   80,   99,
  145,  169,  194,  220,  247,  275,  304,  332,
  361,  390,  420,  449,  479,  508,  536,  564,
  591,  617,  642,  666,  688,  710,  729,  747,
  763,  777,  789,  799,  807,  812,  816,  817,
};


static unsigned char tsub_su_coef1[] = {
	0x00, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70,
	0x80, 0x90, 0xA0, 0xB0, 0xC0, 0xD0, 0xE0, 0xF0,
};
static unsigned char tsub_su_coef2[] = {
0, 1, 5, 11, 19, 30, 43, 58, 75, 94, 114, 135, 158, 182, 206, 231
};

static unsigned char *tsub_SU_COEF_TABLE[] = {
	tsub_su_coef1, tsub_su_coef2
};
#endif
/*move scaling down table to pa misc table, elieli*/
#if 0
static  signed short tScale_Down_Coef_SDFIR64_90_20[] = {
  64,  66,  70,  73,  81,  88,  97, 110,
 122, 138, 154, 170, 188, 206, 225, 243,
 263, 283, 302, 322, 339, 357, 374, 389,
 403, 415, 425, 434, 441, 446, 450, 454,
};

static  signed short tScale_Down_Coef_SDFIR64_70_20[] = {
  47,  49,  54,  59,  68,  77,  88, 102,
 113, 129, 146, 164, 183, 203, 223, 243,
 264, 286, 305, 326, 345, 364, 381, 397,
 412, 426, 437, 447, 456, 462, 466, 470,
};

static  signed short tScale_Down_Coef_SDFIR64_40_20[] = {
  13,  14,  20,  27,  36,  45,  58,  74,
  88, 106, 126, 146, 168, 191, 215, 238,
 262, 289, 312, 336, 359, 382, 403, 422,
 440, 457, 471, 483, 493, 501, 506, 511,
};

static  signed short tScale_Down_Coef_SDFIR64_35_20[] = {
   2,   4,  10,  17,  25,  36,  49,  65,
  80,  99, 119, 140, 163, 187, 212, 237,
 262, 289, 314, 339, 364, 387, 409, 430,
 449, 467, 482, 495, 505, 513, 519, 523,
};

static  signed short tScale_Down_Coef_SDFIR64_32_20[] = {
  -5,  -5,   1,   8,  18,  29,  42,  58,
  74,  93, 113, 136, 159, 184, 210, 235,
 261, 290, 316, 342, 367, 392, 415, 436,
 456, 474, 490, 503, 515, 523, 529, 533,
};

static  signed short tScale_Down_Coef_SDFIR64_50_25Hamm[] = {
  10,  16,  21,  22,  26,  31,  39,  48,
  58,  71,  86, 103, 122, 144, 169, 196,
 224, 254, 284, 317, 350, 382, 413, 444,
 474, 501, 525, 545, 563, 575, 585, 594,
};

static  signed short tScale_Down_Coef_Blur[] = {
   2,   3,   5,   7,  10,  15,  20,  28,  38,  49,  64,  81, 101, 124, 150, 178,
209, 242, 277, 314, 351, 389, 426, 462, 496, 529, 556, 582, 602, 618, 629, 635,
 };

#if 1 /*[3D SBS] vertical scaling down 1.5~2x case (avoid vertical aliasing)*/
  static  signed short tScale_Down_Coef_Mid[] = {
   -2,  0,   1,   2,   5,   9,  15,  22,  32,  45,  60,  77,  98, 122, 149, 179,
  211, 245, 281, 318, 356, 394, 431, 468, 502, 533, 561, 586, 606, 620, 630, 636,
   };
#else
  static  short tScale_Down_Coef_Mid[] = {
   -4,  -2,   0,   2,   5,   9,  15,  22,  32,  45,  60,  77,  98, 122, 149, 179,
  211, 245, 281, 318, 356, 394, 431, 468, 502, 533, 561, 586, 606, 621, 632, 638,
   };
#endif

#if 0
/*modify for freq. response, elieli 20131111*/
static  signed short tScale_Down_Coef_Sharp[] = {
	-1,   -4,	-5,   -9,  -12,  -14,  -17,  -16,	-15,	-11,   -5,	  5,   19,	 38,   62,	 91,
	126,	168,  214,	266,  321,	379,  439,	498,	557,	613,  664,	710,  748,	777,  798,	808,
};
#else
static  signed short tScale_Down_Coef_Sharp[] = {
 -2,   0,   1,   3,   6,  10,  15,  22,  32,  43,  58,  75,  95, 119, 145, 174,
206, 240, 276, 314, 353, 391, 430, 467, 503, 536, 565, 590, 612, 628, 639, 646,
};
#endif

static  signed short tScale_Down_Coef_SDFIR64_45_20Hamm[] = {
  -1,   1,   5,   5,   8,  10,  13,  19,
  28,  38,  51,  66,  85, 107, 133, 162,
 194, 230, 266, 306, 346, 387, 429, 469,
 508, 544, 576, 604, 628, 646, 660, 669,
};

static  signed short tScale_Down_Coef_SDFIR64_30_20Hamm[] = {
  -1,  -1,   0,   1,   2,   4,   7,  12,
  19,  28,  40,  55,  74,  96, 122, 151,
 183, 221, 260, 301, 344, 388, 433, 476,
 517, 556, 592, 623, 648, 668, 682, 691,
};

static  signed short tScale_Down_Coef_SDFIR64_25_20Hamm[] = {
  -4,  -5,  -2,  -4,  -3,  -2,  -1,   3,
  10,  18,  29,  43,  62,  83, 110, 140,
 172, 212, 252, 296, 342, 389, 437, 483,
 528, 570, 608, 642, 670, 691, 707, 716,
};

static  signed short tScale_Down_Coef_SDFIR64_25_15Hamm[] = {
 -30, -24, -20, -19, -22, -25, -30, -31,
 -33, -32, -30, -23, -12,   6,  30,  60,
  96, 138, 186, 241, 303, 369, 439, 509,
 579, 647, 710, 766, 814, 852, 880, 898,
};

static  signed short StScale_Down_Coef_DFIR64_60_10Hamm[] = {
  -6,  -5,  -5,  -5,  -3,  -5,  -7,  -9,
 -16, -19, -22, -23, -21, -15,  -4,  13,
  40,  76, 122, 178, 242, 316, 396, 481,
 568, 654, 735, 808, 872, 922, 957, 977,
};


static  signed short tScale_Down_Coef_2tap[] = {
  0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,
 31,  95, 159, 223, 287, 351, 415, 479,
543, 607, 671, 735, 799, 863, 927, 991,
};

static  signed short tScale_Down_Coef_SDFIR64_20_10Hamm[] = {
  -9,  -7,  -6,   0,   5,   5,   5,   2,
 -10, -22, -38, -57, -75, -90, -101, -103,
 -92, -65, -21,  40, 119, 217, 328, 451,
 581, 713, 840, 957, 1059, 1141, 1197, 1228,
};

static  signed short tScale_Down_Coef_SDFIR64_20_10[] = {
  60,  51,  39,  27,   7, -17, -43, -76,
-105, -137, -164, -187, -202, -207, -201, -182,
-146, -90, -20,  65, 166, 280, 404, 536,
 669, 800, 925, 1038, 1134, 1212, 1264, 1292,
};

static  signed short tScale_Down_Coef_SDFIR64_15_10Hamm[] = {
 -36, -23, -10,   8,  16,  22,  27,  25,
  13,  -3, -25, -53, -84, -110, -133, -146,
-147, -133, -98, -41,  43, 150, 275, 417,
 569, 725, 877, 1018, 1141, 1242, 1313, 1353,
};

static  short *tScaleDown_COEF_TAB[] = {
/*   tScale_Down_Coef_Blur,     tScale_Down_Coef_Mid,     tScale_Down_Coef_Sharp,     tScale_Down_Coef_2tap*/
	tScale_Down_Coef_SDFIR64_90_20, tScale_Down_Coef_SDFIR64_70_20, tScale_Down_Coef_SDFIR64_40_20,
	tScale_Down_Coef_SDFIR64_35_20, tScale_Down_Coef_SDFIR64_32_20, tScale_Down_Coef_SDFIR64_50_25Hamm,
	tScale_Down_Coef_Blur, tScale_Down_Coef_Mid, tScale_Down_Coef_Sharp,
	tScale_Down_Coef_SDFIR64_45_20Hamm, tScale_Down_Coef_SDFIR64_30_20Hamm, tScale_Down_Coef_SDFIR64_25_20Hamm,
	tScale_Down_Coef_SDFIR64_25_15Hamm, StScale_Down_Coef_DFIR64_60_10Hamm, tScale_Down_Coef_2tap,
	tScale_Down_Coef_SDFIR64_20_10Hamm, tScale_Down_Coef_SDFIR64_20_10, tScale_Down_Coef_SDFIR64_15_10Hamm
};
#endif
extern DRV_ScalingDown_COEF_TAB ScaleDown_COEF_TAB;

#ifdef BUILD_TV015_1_ATV /*modify IPTV custom display size 640*360*/
static  signed short tScale_Down_VLPF[] = {
		0,	  0,	0,	  0,	0,	  0,	0,	  0,
		0,	  0,	0,	  0,	0,	  0,	0,	  0,
	   31,	 95,  159,	223,  288,	352,  416,	480,
	  544,	608,  672,	736,  801,	865,  929,	993,
};

static  signed short tScale_Down_HLPF[] = {
    1,	4,	6,	  9,   13,	 19,   25,	 33,
	   44,	 57,   72,	 90,  111,	134,  159,	188,
	  219,	251,  284,	319,  354,	389,  424,	458,
	  489,	518,  544,	567,  585,	600,  610,	616,
};
#else

#if 0
/*modify for freq. response, CVBS, elieli 20131111*/
static  signed short tScale_Down_VLPF[] = {
  0xffff, 0xfffc, 0xfffb, 0xfff7, 0xfff4, 0xfff2, 0xffef, 0xfff0, 0xfff1, 0xfff5, 0xfffb, 0x0005, 0x0013, 0x0026, 0x003e, 0x005b,
  0x007e, 0x00a8, 0x00d6, 0x010a, 0x0141, 0x017b, 0x01b7, 0x01f2, 0x022d, 0x0265, 0x0298, 0x02c6, 0x02ec, 0x0309, 0x031e, 0x0328,
};

static  signed short tScale_Down_HLPF[] = {
   0,    0,  0,   0,   0,    0,    0,    0,   0,    0,  0,   0,   0,    0,    0,    0,
1024, 1024, 1024, 1024, 1024,  1024,  1024,  1024,   0,    0,  0,   0,   0,    0,    0,    0,
};

#else
static  signed short tScale_Down_VLPF[] = {
 341, 341, 341, 341, 341,  341,  341,  341, 341, 341, 341, 341, 341,  341,  341,  341,
 342, 342, 342, 342, 342,  342,  342,  342,   0,    0,  0,   0,   0,    0,    0,    0,
};

static  signed short tScale_Down_HLPF[] = {
   0,    0,  0,   0,   0,    0,    0,    0,   0,    0,  0,   0,   0,    0,    0,    0,
 1024, 1024, 1024, 1024, 1024,  1024,  1024,  1024,   0,    0,  0,   0,   0,    0,    0,    0,
};
#endif

#endif

static  short *tScaleDown_VLPF_COEF_TAB[] = {
    tScale_Down_VLPF,     tScale_Down_HLPF
};


/*static unsigned char *SU_PK_Coeff = NULL;*/
/*static unsigned char *SU_PK_Coeff_by_timing = NULL;*/
/*static unsigned char *SD_H_Index_Table = NULL;*/
/*static unsigned char *SD_V_Index_Table = NULL;*/
static unsigned char SD_H_Coeff_Sel[] = {SDFIR64_Blur, SDFIR64_Mid, SDFIR64_Sharp, SDFIR64_2tap}; /*the size must match large table*/
static unsigned char SD_V_Coeff_Sel[] = {SDFIR64_Blur, SDFIR64_Mid, SDFIR64_Sharp, SDFIR64_2tap}; /*the size must match large table*/
static unsigned char g_ucSDFH444To422Sel = SDFIR64_Mid;
static unsigned char g_ucSDFHSel = 1;
static unsigned char g_ucSDFVSel = 1;
static unsigned char g_ucIsHScalerDown = 1;
static unsigned char g_ucIsVScalerDown = 1;
static unsigned char g_ucIsH444To422 = 1;
static bool di_hsd_flag = FALSE;/*Will Add for Hsd selection*/

typedef struct {
	int h_factor_offset;
	int v_factor_offset;
	unsigned char h_initial;
	unsigned char v_initial;
	unsigned char user_defined;
} UZU_SETTINGS;
static UZU_SETTINGS uzu_coeff = {0, 0, 0, 0, 0};

static unsigned char isCutHor4Line = FALSE;
static unsigned char isCutVer2Line = FALSE;
static unsigned char isHorStartDrop = 0;

#ifdef CONFIG_I2RND_ENABLE
extern unsigned char Scaler_I2rnd_get_timing_enable(void);
extern unsigned char Scaler_I2rnd_get_enable(void);
extern unsigned char vsc_i2rnd_sub_stage;
extern unsigned char vsc_i2rnd_dualvo_sub_stage;
extern unsigned char vsc_i2rnd_sub_output_mode;
#endif

extern unsigned int vpq_project_id;
extern unsigned int vpqex_project_id;

/*================================ Definitions ==============================*/
/*================================== Function ===============================*/

/*===============================================================*/
/**
 * Scaler_SetScaleUp
 * This function is used to set scaling-up registers, including main and sub display.
 * It contains several parts:
 * 1. video compensation (scale control register)
 * 2. horizontal scaling factor
 * 3. vertical scaling factor
 * 4. horizontal scaling factor delta1 & delta2
 * 5. scaling factor segment1, segment2 and segment3
 *
 * @param <info> { display-info struecture }
 * @return { none }
 * @note
 * It can be linear or non-linear either, based on the following condition:
 * Non-linear scaling up, if it is main display and non-linear flag is active,
 * linear scaling up, otherwise
 *
 */
int drvif_color_uzu__get_factor(unsigned long long xin,unsigned long long xout)
{
	int nFactor=0xfffff;
	unsigned long long ulparam1 = ((unsigned long long)(xin)<< 21);
#if CONFIG_FIRMWARE_IN_KERNEL
	do_div(ulparam1, xout);
	nFactor = ulparam1;
#else
	nFactor = ulparam1  / xout;/*Thur 20071228 modified*/
#endif
	nFactor = (unsigned long long)nFactor + (unsigned long long)uzu_coeff.h_factor_offset;

	nFactor = (unsigned long long)SHR((nFactor + 1), 1); /*rounding*/
	return nFactor;
}
void drvif_color_ultrazoom_uzd_4k_120_mode(unsigned char x)
{
	scaledown_ich1_uzd_ctrl0_RBUS reg_scaledown_ich1_uzd_ctrl0_reg;
	scaledown_ich1_uzd_db_ctrl_RBUS scaledown_ich1_uzd_db_ctrl_reg;
	reg_scaledown_ich1_uzd_ctrl0_reg.regValue = IoReg_Read32(SCALEDOWN_ICH1_UZD_Ctrl0_reg);
	scaledown_ich1_uzd_db_ctrl_reg.regValue = IoReg_Read32(SCALEDOWN_ICH1_UZD_DB_CTRL_reg);
	reg_scaledown_ich1_uzd_ctrl0_reg.sub_channel_disable_4k120=x;
	scaledown_ich1_uzd_db_ctrl_reg.h_db_apply = 1;
	IoReg_Write32(SCALEDOWN_ICH1_UZD_Ctrl0_reg, reg_scaledown_ich1_uzd_ctrl0_reg.regValue);
	IoReg_Write32(SCALEDOWN_ICH1_UZD_DB_CTRL_reg,scaledown_ich1_uzd_db_ctrl_reg.regValue);
}
void drvif_color_sr_db_apply(void)
{
	two_step_uzu_sr_db_ctrl_RBUS reg;
	reg.regValue = IoReg_Read32(TWO_STEP_UZU_SR_DB_CTRL_reg);
	reg.db_apply = 1;
	IoReg_Write32(TWO_STEP_UZU_SR_DB_CTRL_reg,reg.regValue);
}
void drvif_color_ultrazoom_uzu_4k_120_mode(unsigned char x)
{
	ppoverlay_uzudtg_control1_RBUS reg_ppoverlay_uzudtg_control1_reg;
	ppoverlay_double_buffer_ctrl2_RBUS reg_ppoverlay_double_buffer_ctrl2_reg;
        scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl_REG;
	two_step_uzu_dm_two_step_sr_ctrl_RBUS reg_two_step_uzu_dm_two_step_sr_ctrl_reg;
	two_step_uzu_sr_db_ctrl_RBUS reg;

        reg_ppoverlay_uzudtg_control1_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_control1_reg);
	reg_ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
        reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue = IoReg_Read32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg);
        reg.regValue = IoReg_Read32(TWO_STEP_UZU_SR_DB_CTRL_reg);


        //4k120 case force_enable_two_step_uzu = True , get_hdmi_4k_hfr_mode = True
        //2K120 case force_enable_two_step_uzu = True , get_hdmi_4k_hfr_mode = False


        if(x==1)
        {
        	reg_ppoverlay_uzudtg_control1_reg.uzu_4k_120_mode=1;
                reg_ppoverlay_uzudtg_control1_reg.two_step_uzu_en=1;

                reg_two_step_uzu_dm_two_step_sr_ctrl_reg.h_zoom_en=1;
                reg_two_step_uzu_dm_two_step_sr_ctrl_reg.v_zoom_en=1;
				if(get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)
				{//two pixel mode or hdmi 2.0 4k120
					if(get_scaling_down_status() == FALSE)
					{
						reg_two_step_uzu_dm_two_step_sr_ctrl_reg.sr_mdom_sub_en = 1;// for 4k120 , use main+sub
					}
					else
					{
						reg_two_step_uzu_dm_two_step_sr_ctrl_reg.sr_mdom_sub_en = 0; //for 4k120 , only use main
					}
					if(get_hdmi_4k_hfr_mode() == HDMI_4K120_2_0)
					{
						reg_two_step_uzu_dm_two_step_sr_ctrl_reg.sr_mdom_sub_en = 0; //for 4k120 , only use main temp
					}
				}
				else
				{
	                reg_two_step_uzu_dm_two_step_sr_ctrl_reg.sr_mdom_sub_en = 0; //for 2k120 , only use mai
				}
                dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
	        	dm_uzu_Ctrl_REG.v_zoom_en = 0;
	        	dm_uzu_Ctrl_REG.h_zoom_en = 0;
                IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg,dm_uzu_Ctrl_REG.regValue );
        }
        else
        {
	        reg_ppoverlay_uzudtg_control1_reg.uzu_4k_120_mode=0;

                reg_two_step_uzu_dm_two_step_sr_ctrl_reg.h_zoom_en=0;
                reg_two_step_uzu_dm_two_step_sr_ctrl_reg.v_zoom_en=0;
        }



        IoReg_Write32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg,reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue);
	IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, reg_ppoverlay_uzudtg_control1_reg.regValue);


        reg_ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_read_sel = 1;
        reg_ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set = 1;
        IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg,reg_ppoverlay_double_buffer_ctrl2_reg.regValue);

        reg.db_apply = 1;
        IoReg_Write32(TWO_STEP_UZU_SR_DB_CTRL_reg,reg.regValue);


        rtd_printk(KERN_EMERG, TAG_NAME, "4K120 func:%s line:%d ,4k_120_mode =%d , 2K120_mode=%d \r\n",__FUNCTION__, __LINE__,x,force_enable_two_step_uzu());

}

void drvif_color_ultrazoom_scalerup_setiniphase(unsigned char display, unsigned char phase, unsigned char hvsel)
{
	if (phase >= 0xff)
		phase = 0xff;

	if (display == SLR_MAIN_DISPLAY) {
		scaleup_dm_uzu_initial_value_RBUS dm_uzu_Initial_Value_REG;
		dm_uzu_Initial_Value_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Initial_Value_reg);

		if (hvsel == 0) { /*h*/
			dm_uzu_Initial_Value_REG.hor_ini = phase;
		} else { /*v*/
			dm_uzu_Initial_Value_REG.ver_ini = phase;
		}
		IoReg_Write32(SCALEUP_DM_UZU_Initial_Value_reg, dm_uzu_Initial_Value_REG.regValue);
	}
}

void drvif_color_ultrazoom_scalerup_4K120_setiniphase(unsigned char hor_ini, unsigned char ver_ini, unsigned char hvsel)
{
	two_step_uzu_sr_ctrl_RBUS reg;

	reg.regValue = IoReg_Read32(TWO_STEP_UZU_SR_Ctrl_reg);

	if (hor_ini >= 0xff)
	{
		hor_ini = 0xff;
	}
	if (ver_ini >= 0xff)
	{
		ver_ini = 0xff;
	}
	reg.sr_hor_ini = hor_ini;
	reg.sr_ver_ini = ver_ini;
	IoReg_Write32(TWO_STEP_UZU_SR_Ctrl_reg, reg.regValue);
}

void drvif_color_ultrazoom_Adapt8tapV(unsigned char display, unsigned char V8tap_mode, unsigned char table_sel)
{
	if (display == SLR_MAIN_DISPLAY) {
		scaleup_dm_uzu_v8ctrl_RBUS dm_uzu_V8CTRL_reg;
		dm_uzu_V8CTRL_reg.regValue = rtd_inl(SCALEUP_DM_UZU_V8CTRL_reg);

		dm_uzu_V8CTRL_reg.ver_mode_sel= V8tap_mode;
		dm_uzu_V8CTRL_reg.v8tap_table_sel = _TabSelV8_const1;	/*Elsie 20141017 use const table until self-defined table has been written.*/

		/* Merlin3 remove adaptv8 */

		rtd_outl(SCALEUP_DM_UZU_V8CTRL_reg, dm_uzu_V8CTRL_reg.regValue);
	}
}

void drvif_color_ultrazoom_Adapt12tapH(unsigned char display, unsigned char H8tap_en, unsigned char hor10_table_sel)
{
	if (display == SLR_MAIN_DISPLAY) {
		scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl;
		dm_uzu_Ctrl.regValue = rtd_inl(SCALEUP_DM_UZU_Ctrl_reg);

		/*dm_uzu_Ctrl.hor_mode_sel = (H8tap_en)?3:0;*/ /*0:4tap, 1:8tap, 2:LR adaptive, 3:CO adaptive, 4:DeRing 8tap*/
		dm_uzu_Ctrl.hor_mode_sel = 2; /*13.07.26 always hor_mode_sel set 4tap due to 8tap have issue*/

         #ifdef CONFIG_SCALER_BRING_UP
                dm_uzu_Ctrl.hor12_table_sel = _TabSelH12_const1;
         #else
                dm_uzu_Ctrl.hor12_table_sel = _TabSelH12_coeff1; /*0:table-1, 1:table-2*/
         #endif

		if (dm_uzu_Ctrl.hor_mode_sel == 2)
			drvif_color_ultrazoom_H12tapDeRing(0);

		rtd_outl(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl.regValue);

	}
}

enum E_uzu_dering_h{
	e_uzu_dering_h_h4h12_blend_en,
	e_uzu_dering_h_h4h12_blend_range,
	e_uzu_dering_h_h4h12_blend_lowbound,
	e_uzu_dering_h_lpf_blend_en,
	e_uzu_dering_h_lpf_blend_mask_sel,
	e_uzu_dering_h_lpf_blend_range,
	e_uzu_dering_h_lpf_blend_lowbound,
	e_uzu_dering_h_level_flatness_coeff,
	e_uzu_dering_h_level_maxmin_coeff,
	e_uzu_dering_h_dering_h4h12_blend_type,// gap dering enable
	e_uzu_dering_h_dering_gap_sidemode,
	e_uzu_dering_h_dering_gap_offset,
	e_uzu_dering_h_dering_gap_center_gain,
	e_uzu_dering_h_dering_gap_side_gain,
	e_uzu_dering_h__count
};

void drvif_color_ultrazoom_H12tapDeRing(unsigned char Level)
{
	int su_dering_set[6][14] = {
		{1,1,60, 1,1,2,150, 0,4, 2,1,3,3,8}, /*level 0*/  //rord modify from 95->150
		{1,1,70, 1,1,2,105, 0,4, 2,1,3,3,8},/*level 1*/
		{1,1,80, 1,1,2,115, 0,4, 2,1,3,3,8},/*level 2*/
		{1,1,90, 1,1,2,125, 0,4, 2,1,3,3,8},/*level 3*/
		{1,1,100, 1,1,2,135, 0,4, 2,1,3,3,8},/*level 4*/
		{1,1,110, 1,1,2,140, 0,4, 2,1,3,3,8},/*level 5*/
		};

	scaleup_dm_uzu_12tap_dering_RBUS dm_uzu_12tap_dering_REG;
	scaleup_dm_uzu_12tap_dering_cross_RBUS dm_uzu_12tap_dering_cross_REG;
	scaleup_dm_uzu_gap_dering_RBUS scaleup_dm_uzu_gap_dering;

	dm_uzu_12tap_dering_REG.regValue = rtd_inl(SCALEUP_DM_UZU_12tap_dering_reg);
	dm_uzu_12tap_dering_cross_REG.regValue = rtd_inl(SCALEUP_DM_UZU_12tap_dering_cross_reg);
	scaleup_dm_uzu_gap_dering.regValue = rtd_inl(SCALEUP_DM_UZU_gap_dering_reg);

	dm_uzu_12tap_dering_REG.h4h12_blend_en = su_dering_set[Level][e_uzu_dering_h_h4h12_blend_en];
	dm_uzu_12tap_dering_REG.h4h12_blend_range = su_dering_set[Level][e_uzu_dering_h_h4h12_blend_range]; /*128, 64, 32, 16*/
	dm_uzu_12tap_dering_REG.h4h12_blend_lowbound = su_dering_set[Level][e_uzu_dering_h_h4h12_blend_lowbound];

	dm_uzu_12tap_dering_REG.lpf_blend_en = su_dering_set[Level][e_uzu_dering_h_lpf_blend_en];
	dm_uzu_12tap_dering_REG.lpf_blend_mask_sel = su_dering_set[Level][e_uzu_dering_h_lpf_blend_mask_sel];
	dm_uzu_12tap_dering_REG.lpf_blend_range = su_dering_set[Level][e_uzu_dering_h_lpf_blend_range]; /*128, 64, 32, 16*/
	dm_uzu_12tap_dering_REG.lpf_blend_lowbound = su_dering_set[Level][e_uzu_dering_h_lpf_blend_lowbound];

	dm_uzu_12tap_dering_REG.level_flatness_coeff = su_dering_set[Level][e_uzu_dering_h_level_flatness_coeff];
	dm_uzu_12tap_dering_REG.level_maxmin_coeff = su_dering_set[Level][e_uzu_dering_h_level_maxmin_coeff];

	dm_uzu_12tap_dering_cross_REG.dering_cross_en = 1;
	dm_uzu_12tap_dering_cross_REG.dering_cross_lowbd = 4; // lowbd = (0~31)*8
	dm_uzu_12tap_dering_cross_REG.dering_cross_slope = 6; // slope = (0~7 +2)/16
	dm_uzu_12tap_dering_cross_REG.dering_edgelevel_gain = 4; // 0:255, 1~7:(3~9)*Eedge

	scaleup_dm_uzu_gap_dering.dering_h4h12_blend_type= su_dering_set[Level][e_uzu_dering_h_dering_h4h12_blend_type];
	scaleup_dm_uzu_gap_dering.dering_gap_sidemode = su_dering_set[Level][e_uzu_dering_h_dering_gap_sidemode];
	scaleup_dm_uzu_gap_dering.dering_gap_offset = su_dering_set[Level][e_uzu_dering_h_dering_gap_offset];
	scaleup_dm_uzu_gap_dering.dering_gap_center_gain = su_dering_set[Level][e_uzu_dering_h_dering_gap_center_gain];
	scaleup_dm_uzu_gap_dering.dering_gap_side_gain = su_dering_set[Level][e_uzu_dering_h_dering_gap_side_gain];

	rtd_outl(SCALEUP_DM_UZU_12tap_dering_reg, dm_uzu_12tap_dering_REG.regValue);
	rtd_outl(SCALEUP_DM_UZU_12tap_dering_cross_reg, dm_uzu_12tap_dering_cross_REG.regValue);
	rtd_outl(SCALEUP_DM_UZU_gap_dering_reg, scaleup_dm_uzu_gap_dering.regValue);
}

enum E_uzu_dering_v{
	e_uzu_dering_v_v4v8_blend_range,
	e_uzu_dering_v_v4v8_blend_lowbound,
	e_uzu_dering_v_level_flatness_coeff,
	e_uzu_dering_v_level_maxmin_coeff,
	e_uzu_dering_v_deringv_v4v8_blend_type,
	e_uzu_dering_v_deringv_gap_sidemode,
	e_uzu_dering_v_deringv_gap_offset,
	e_uzu_dering_v_deringv_gap_center_gain,
	e_uzu_dering_v_deringv_gap_side_gain,
	e_uzu_dering_v__count
};

void drvif_color_ultrazoom_V8tapDeRing(unsigned char Level)
{
	int su_deringv_set[5][9] = {
		/*v4v8_blend_range, v4v8_blend_lowbound, level_flatness_coeff, level_maxmin_coeff,*/
		{1,80,0,2, 2,1,3,3,12},/*level 1*/
		{1,90,0,2, 2,1,3,3,12},/*level 2*/
		{1,100,0,2, 2,1,3,3,12},/*level 3*/
		{1,110,0,2, 2,1,3,3,12},/*level 4*/
		{1,120,0,2, 2,1,3,3,12},/*level 5*/
		};

	scaleup_dm_uzu_8tap_deringv_RBUS dm_uzu_8tap_deringv;
	scaleup_dm_uzu_gap_deringv_RBUS scaleup_dm_uzu_gap_deringv;

	int* load_set;
	if(Level>4){Level=4;}
	load_set=&(su_deringv_set[Level][0]);

	dm_uzu_8tap_deringv.regValue = rtd_inl(SCALEUP_DM_UZU_8tap_deringv_reg);
	scaleup_dm_uzu_gap_deringv.regValue = rtd_inl(SCALEUP_DM_UZU_gap_deringv_reg);

	dm_uzu_8tap_deringv.v4v8_blend_range = load_set[e_uzu_dering_v_v4v8_blend_range]; /*128, 64, 32, 16*/
	dm_uzu_8tap_deringv.v4v8_blend_lowbound = load_set[e_uzu_dering_v_v4v8_blend_lowbound];
	dm_uzu_8tap_deringv.level_flatness_coeff = load_set[e_uzu_dering_v_level_flatness_coeff]; /*1, 1.5, 2, 3, 4*/
	dm_uzu_8tap_deringv.level_maxmin_coeff = load_set[e_uzu_dering_v_level_maxmin_coeff]; /*1, 1.5, 2, 3, 4*/
	dm_uzu_8tap_deringv.range_center = 1; /*0:normal type, 1:close type*/
	dm_uzu_8tap_deringv.range_side = 0; /*0:normal type, 1:close type*/
	dm_uzu_8tap_deringv.dering_dbg_mode = 0;

	scaleup_dm_uzu_gap_deringv.deringv_v4v8_blend_type= load_set[e_uzu_dering_v_deringv_v4v8_blend_type];
	scaleup_dm_uzu_gap_deringv.deringv_gap_sidemode= load_set[e_uzu_dering_v_deringv_gap_sidemode];
	scaleup_dm_uzu_gap_deringv.deringv_gap_offset= load_set[e_uzu_dering_v_deringv_gap_offset];
	scaleup_dm_uzu_gap_deringv.deringv_gap_center_gain= load_set[e_uzu_dering_v_deringv_gap_center_gain];
	scaleup_dm_uzu_gap_deringv.deringv_gap_side_gain= load_set[e_uzu_dering_v_deringv_gap_side_gain];

	rtd_outl(SCALEUP_DM_UZU_8tap_deringv_reg, dm_uzu_8tap_deringv.regValue);
	rtd_outl(SCALEUP_DM_UZU_gap_deringv_reg, scaleup_dm_uzu_gap_deringv.regValue);
}

enum E_uzu_de_distortion{
	e_uzu_de_distortion_dedistortion_en = 0,
	e_uzu_de_distortion_dedistortion_lowbd,
	e_uzu_de_distortion_dedistortion_slope,
	e_uzu_de_distortion__count
};

enum E_uzu_de_distortion_Level{
	e_uzu_de_distortion_Level_off = 0,
	e_uzu_de_distortion_Level_default,
	e_uzu_de_distortion_Level__count
};

void drvif_color_ultrazoom_de_distortion(unsigned char Level)
{
	int su_deringv_set[e_uzu_de_distortion_Level__count][e_uzu_de_distortion__count] = {
		{0,0x28,3},
		{1,0x28,3},
	};

	scaleup_dm_uzu_de_distortion_RBUS scaleup_dm_uzu_de_distortion;

	if(Level>=e_uzu_de_distortion_Level__count){Level=e_uzu_de_distortion_Level_default;}

	scaleup_dm_uzu_de_distortion.regValue = rtd_inl(SCALEUP_DM_UZU_de_distortion_reg);

	scaleup_dm_uzu_de_distortion.dedistortion_en= su_deringv_set[Level][e_uzu_de_distortion_dedistortion_en];
	scaleup_dm_uzu_de_distortion.dedistortion_lowbd= su_deringv_set[Level][e_uzu_de_distortion_dedistortion_lowbd];
	scaleup_dm_uzu_de_distortion.dedistortion_slope= su_deringv_set[Level][e_uzu_de_distortion_dedistortion_slope];
	scaleup_dm_uzu_de_distortion.dedistortion_dbg_mode= 0;

	rtd_outl(SCALEUP_DM_UZU_de_distortion_reg, scaleup_dm_uzu_de_distortion.regValue);
}
void drvif_color_ultrazoom_chroma8H(short Lehel)
{
	scaleup_dm_uzu_chroma_8tap_RBUS reg_scaleup_dm_uzu_chroma_8tap_reg;
	if(Lehel<-512){Lehel=-512;}
	if(Lehel>511){Lehel=511;}
	reg_scaleup_dm_uzu_chroma_8tap_reg.regValue = rtd_inl(SCALEUP_DM_UZU_chroma_8tap_reg);
	reg_scaleup_dm_uzu_chroma_8tap_reg.h8_c_sel = Lehel;
	rtd_outl(SCALEUP_DM_UZU_chroma_8tap_reg, reg_scaleup_dm_uzu_chroma_8tap_reg.regValue);
}
void drvif_color_ultrazoom_chroma8V(short Level)
{
	scaleup_dm_uzu_chroma_8tap_RBUS reg_scaleup_dm_uzu_chroma_8tap_reg;
	if(Level<-512){Level=-512;}
	if(Level>511){Level=511;}
	reg_scaleup_dm_uzu_chroma_8tap_reg.regValue = rtd_inl(SCALEUP_DM_UZU_chroma_8tap_reg);
	reg_scaleup_dm_uzu_chroma_8tap_reg.v8_c_sel = Level;
	rtd_outl(SCALEUP_DM_UZU_chroma_8tap_reg, reg_scaleup_dm_uzu_chroma_8tap_reg.regValue);
}
void drvif_color_ultrazoom_chroma8VH(short Level,short Lehel)
{
	scaleup_dm_uzu_chroma_8tap_RBUS reg_scaleup_dm_uzu_chroma_8tap_reg;
	if(Level<-512){Level=-512;}
	if(Level>511){Level=511;}
	if(Lehel<-512){Lehel=-512;}
	if(Lehel>511){Lehel=511;}
	reg_scaleup_dm_uzu_chroma_8tap_reg.regValue = rtd_inl(SCALEUP_DM_UZU_chroma_8tap_reg);
	reg_scaleup_dm_uzu_chroma_8tap_reg.v8_c_sel = Level;
	reg_scaleup_dm_uzu_chroma_8tap_reg.h8_c_sel = Lehel;
	rtd_outl(SCALEUP_DM_UZU_chroma_8tap_reg, reg_scaleup_dm_uzu_chroma_8tap_reg.regValue);
}
void drvif_color_twostep_scaleup_mflti(DRV_TwoStepSU_Mflti *ptr)/*add for Merlin2 (jyyang_2016/06/15)*/
{
	two_step_uzu_mflti_ctrl_RBUS	two_step_uzu_mflti_ctrl_reg;
	two_step_uzu_mflti_ctrl_reg.regValue = IoReg_Read32(TWO_STEP_UZU_MFLTI_Ctrl_reg);

	two_step_uzu_mflti_ctrl_reg.mflti_en = ptr->mflti_en;
	two_step_uzu_mflti_ctrl_reg.mflti_blend_en = ptr->blend_en;
	two_step_uzu_mflti_ctrl_reg.mflti_blend_gain = ptr->blend_gain; // 0~31
	two_step_uzu_mflti_ctrl_reg.mflti_blend_offset = ptr->blend_offset; // -32~31
	two_step_uzu_mflti_ctrl_reg.h_range = ptr->h_range; // Hrange = (0~3)+1
	two_step_uzu_mflti_ctrl_reg.mflti_422_c1 = 8;

	IoReg_Write32(TWO_STEP_UZU_MFLTI_Ctrl_reg, two_step_uzu_mflti_ctrl_reg.regValue);
}
void drvif_color_twostep_scaleup_mflti422(int x)
{
	two_step_uzu_mflti_ctrl_RBUS	two_step_uzu_mflti_ctrl_reg;
	two_step_uzu_mflti_ctrl_reg.regValue = IoReg_Read32(TWO_STEP_UZU_MFLTI_Ctrl_reg);
	// 0 : 444 for 120Hz
	two_step_uzu_mflti_ctrl_reg.mflti_422_en = x;
	// 1 : 422 for 2step uzu
	// 2step uzu 1dingYao 422
	IoReg_Write32(TWO_STEP_UZU_MFLTI_Ctrl_reg, two_step_uzu_mflti_ctrl_reg.regValue);
}

void drvif_color_twostep_scaleup_dering(DRV_TwoStepSU_Dering *ptr)/*add for Merlin2 (jyyang_2016/06/15)*/
{
	two_step_uzu_sr_12tap_dering_ctrl_RBUS	two_step_uzu_sr_12tap_dering_ctrl_reg;
	two_step_uzu_sr_12tap_dering_RBUS	two_step_uzu_sr_12tap_dering_reg;

	two_step_uzu_sr_12tap_dering_ctrl_reg.regValue = IoReg_Read32(TWO_STEP_UZU_SR_12tap_dering_ctrl_reg);
	two_step_uzu_sr_12tap_dering_reg.regValue = IoReg_Read32(TWO_STEP_UZU_SR_12tap_dering_reg);

	two_step_uzu_sr_12tap_dering_ctrl_reg.sr_hor_tap_sel = ptr->hor_tap_sel; // 0:4tap, 1:12tap, 2:12tap_DeRing
	two_step_uzu_sr_12tap_dering_ctrl_reg.dering_edgelevel_gain = ptr->edgelevel_gain; // edgeLv = 0:255, 1~7:(3~9)*Eedge
	two_step_uzu_sr_12tap_dering_reg.h4h12_blend_lowbound = ptr->h4h12_lowbound; // 0~255
	two_step_uzu_sr_12tap_dering_reg.h4h12_blend_range = ptr->h4h12_range; // 0:128, 1:64, 2:32, 3:16
	two_step_uzu_sr_12tap_dering_reg.lpf_blend_lowbound = ptr->LPF_lowbound; // 0~255
	two_step_uzu_sr_12tap_dering_reg.lpf_blend_range = ptr->LPF_range; // 0:128, 1:64, 2:32, 3:16
	two_step_uzu_sr_12tap_dering_reg.level_flatness_coeff = ptr->flatness_coeff; // 0:1, 1:1.5, 2:2, 3:3, 4:4
	two_step_uzu_sr_12tap_dering_reg.level_maxmin_coeff = ptr->maxmin_coeff; // 0:1, 1:1.5, 2:2, 3:3, 4:4

	IoReg_Write32(TWO_STEP_UZU_SR_12tap_dering_ctrl_reg, two_step_uzu_sr_12tap_dering_ctrl_reg.regValue);
	IoReg_Write32(TWO_STEP_UZU_SR_12tap_dering_reg, two_step_uzu_sr_12tap_dering_reg.regValue);
}

void drvif_color_twostep_scaleup_set(unsigned char display, SIZE *ptInSize, SIZE *ptOutSize)/*add for Merlin2 (jyyang_2016/06/15)*/
{
	/*int uzu_en, tsuzu_en, tsuzu_mode, tsuzu_ratio;*/
	unsigned char tsuzu_en, tsuzu_mode, tsuzu_ratio;
	/* uzu_en = 0:disable, 1:enable for UZU
	tsuzu_en  = 0:disable, 1:enable for TWO_STEP UZU
	tsuzu_mode = 0:[YUV domain] uzu1->uzu2->2d3d,  1:[RGB domain] uzu1->2d3d-> !K ->uzu2
	tsuzu_ratio = 0:2x, 1:1.5x*/

	ppoverlay_uzudtg_control1_RBUS ppoverlay_uzudtg_control1_reg;
	ppoverlay_uzudtg_dvs_cnt_RBUS ppoverlay_uzudtg_dvs_cnt_REG;
	/*scaleup_dm_uzu_ctrl_RBUS dm_uzu_ctrl_REG;*/	/* control by flow, don't control uzu enable*/
//	ppoverlay_double_buffer_ctrl2_RBUS ppoverlay_double_buffer_ctrl2_reg;
//	ppoverlay_memcdtg_control3_RBUS ppoverlay_memcdtg_control3_reg;
//	ppoverlay_memc_mux_ctrl_RBUS ppoverlay_memc_mux_ctrl_reg;

	unsigned char smooth_toggle_en_flag=0;
	unsigned short I_Height = 0;
	unsigned short I_Width = 0;

	ppoverlay_uzudtg_dvs_cnt_REG.regValue = IoReg_Read32(PPOVERLAY_uzudtg_DVS_cnt_reg);
	/*frame_rate = 27000000/cnt; // check with Ben_Wang
	120Hz: cnt=27000000/120=225000
	118Hz: cnt=27000000/118=228813
	=== Reduce 50% the 1st Scaleup Size ===*/

	/* 2 step db is not in imf smooth topggle, only turn on 2 step in CVBS, YPP-SD, HDMI-SD, DTV-SD, avoid smooth toggle transient noise, elieli */
	smooth_toggle_en_flag= Get_vo_smoothtoggle_timingchange_flag(display);	/* cp and usb, flag = 1 */
	I_Height = Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN);
	I_Width = Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID);

	/*if(ptInSize->nWidth <=960 && ptInSize->nLength<=576 && ptOutSize->nWidth>1920 && ptOutSize->nLength>1152)*/ // jyyang:width<960&&ratio>2
	/* 1. SD only, 2. cp and usb cann't use 2 step, CVBS double sampling = 1440 * 288, 576p = 720 * 576 */
#if 0 // disable 2-step for sd timing
	if(I_Width <=960 && I_Height<=576 && ptOutSize->nWidth>1920 && ptOutSize->nLength>1152 && smooth_toggle_en_flag == 0)
#else
	if(0)
#endif
	{	/*do twostep scaleup*/
		tsuzu_en = 1;
		tsuzu_mode = 0; // YUV domain
		tsuzu_ratio = 0; // 2x
		drvif_color_Set_Two_Step_UZU_Mode(Two_Step_UZU_Enable);
	}
#if 0	/* input 120Hz need to check woth ben wang*/
	else if(ppoverlay_uzudtg_dvs_cnt_REG.uzudtg_dvs_cnt<228813) // ~ 120Hz
	{
		if(ptInSize->nWidth ==1920 && ptInSize->nLength==1080 && ptOutSize->nWidth==3840 && ptOutSize->nLength==2160)
		{
			uzu_en = 0;
			tsuzu_en = 1;
			tsuzu_mode = 1; // RGB domain
			tsuzu_ratio = 0; // 2x
		}
		else if(ptInSize->nWidth ==2560 && ptInSize->nLength==1440 && ptOutSize->nWidth==3840 && ptOutSize->nLength==2160)
		{
			uzu_en = 0;
			tsuzu_en = 1;
			tsuzu_mode = 1; // RGB domain
			tsuzu_ratio = 1; // 1.5x
		}
		drvif_color_Set_Two_Step_UZU_Mode(Two_Step_UZU_Input_120Hz);
	}
#endif
	else
	{
		tsuzu_en = 0;
		tsuzu_mode = 0; // YUV domain
		tsuzu_ratio = 0; // 2x
		drvif_color_Set_Two_Step_UZU_Mode(Two_Step_UZU_Disable);
	}

	rtd_printk(KERN_EMERG, TAG_NAME, "2-step(%d) in scaler flow, InSize, Wid=%d, Len=%d, OutSize, Wid=%d, Leng=%d, smooth_toggle_en_flag=%d,I_Height=%d,I_Width=%d\n",
		tsuzu_en,ptInSize->nWidth, ptInSize->nLength, ptOutSize->nWidth, ptOutSize->nLength, smooth_toggle_en_flag,I_Height,I_Width);

	/*dm_uzu_ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);*/
	ppoverlay_uzudtg_control1_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_control1_reg);

	/* 2 step uzu enable*//* 120 Hz input setting*/
	ppoverlay_uzudtg_control1_reg.two_step_uzu_en = tsuzu_en; // uzu2 = 0:disable, 1:enable

	/* UZU enable*/
	/*dm_uzu_ctrl_REG.h_zoom_en = uzu_en;
	dm_uzu_ctrl_REG.v_zoom_en = uzu_en;*/

	/*IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_ctrl_REG.regValue);*/
	IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, ppoverlay_uzudtg_control1_reg.regValue);
#if 0
	ppoverlay_memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	if(ppoverlay_memc_mux_ctrl_reg.memcdtg_golden_vs == 1){
		ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
		ppoverlay_double_buffer_ctrl2_reg.memcdtgreg_dbuf_en = 1;
		ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_en = 1;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);

		ppoverlay_memcdtg_control3_reg.regValue = IoReg_Read32(PPOVERLAY_MEMCDTG_CONTROL3_reg);
		if(tsuzu_en){
			ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_line = 0x38;
			ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_pixel = 0x61c;
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line = 0x38;
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel = 0x617;
			rtd_printk(KERN_NOTICE, TAG_NAME, "2-step on, ppoverlay_memcdtg_control3_reg=%x \n",	ppoverlay_memcdtg_control3_reg.regValue);
		}else{
			ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_line = 0x3f;
			ppoverlay_memcdtg_control3_reg.dtgm2goldenpostvs_pixel = 0x65f;
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_line = 0x3f;
			ppoverlay_uzudtg_control1_reg.dtgm2uzuvs_pixel = 0x65a;
			rtd_printk(KERN_NOTICE, TAG_NAME, "2-step off, ppoverlay_memcdtg_control3_reg=%x \n", ppoverlay_memcdtg_control3_reg.regValue);
		}
		IoReg_Write32(PPOVERLAY_MEMCDTG_CONTROL3_reg, ppoverlay_memcdtg_control3_reg.regValue);
		IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, ppoverlay_uzudtg_control1_reg.regValue);

		ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
		ppoverlay_double_buffer_ctrl2_reg.memc_dtgreg_dbuf_set = 1;
		ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set = 1;
		IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);
	}else{
		/* double buffer control*/
		ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
		ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set = 1;
		//IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, ppoverlay_double_buffer_ctrl2_reg.regValue);/*only using in live zoom, scaler and cp smooth toggel is controlled by IMD double buffer.*/
	}
#endif
}

/*void UltraZoom_SetScaleUp(unsigned char display)*/
extern unsigned char force_enable_two_step_uzu(void);

void drvif_color_ultrazoom_setscaleup(unsigned char display, SIZE *ptInSize, SIZE *ptOutSize, unsigned char panorama)
{
	unsigned int D1, D2;
	unsigned short S1, S2, S3;
	unsigned char Hini=0, Vini=0, r;
	unsigned long long ulparam1 =0, nFactor;
	unsigned long long ulparam2 =0;
 	unsigned long long nFactor_H =0;
 	unsigned long long nFactor_V =0;

	unsigned char two_step_factor_shift = 0;


	if (display == SLR_MAIN_DISPLAY) {
		scaleup_dm_uzu_scale_hor_factor_RBUS		dm_uzu_Scale_Hor_Factor_REG;
		scaleup_dm_uzu_scale_ver_factor_RBUS		dm_uzu_Scale_Ver_Factor_REG;
		scaleup_dm_uzu_initial_value_RBUS			dm_uzu_Initial_Value_REG;
		scaleup_dm_uzu_hor_delta1_RBUS			dm_uzu_Hor_Delta1_REG;
		scaleup_dm_uzu_hor_delta2_RBUS			dm_uzu_Hor_Delta2_REG;
		scaleup_dm_uzu_hor_segment1_RBUS		dm_uzu_Hor_Segment1_REG;
		scaleup_dm_uzu_hor_segment2_RBUS		dm_uzu_Hor_Segment2_REG;
		scaleup_dm_uzu_hor_segment3_RBUS		dm_uzu_Hor_Segment3_REG;

		scaleup_dm_uzu_input_size_RBUS			dm_uzu_Input_Size_REG;

		drvif_color_twostep_scaleup_set(display, ptInSize, ptOutSize);
		two_step_factor_shift = (drvif_color_Get_Two_Step_UZU_Mode() ==  Two_Step_UZU_Enable)?1:0;

		/*frankcheng#03212010 solve avoide HFlip bit be set*/
		dm_uzu_Initial_Value_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Initial_Value_reg);

		S1 = 0;
		S2 = 0;
		S3 = ptOutSize->nWidth;
		D1 = 0;
		D2 = 0;

		dm_uzu_Scale_Ver_Factor_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Scale_Ver_Factor_reg);
		dm_uzu_Scale_Hor_Factor_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Scale_Hor_Factor_reg);
		dm_uzu_Hor_Delta1_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Hor_Delta1_reg);
		dm_uzu_Hor_Delta2_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Hor_Delta2_reg);
		dm_uzu_Hor_Segment1_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Hor_Segment1_reg);
		dm_uzu_Hor_Segment2_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Hor_Segment2_reg);
		dm_uzu_Hor_Segment3_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Hor_Segment3_reg);
		dm_uzu_Initial_Value_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Initial_Value_reg);


		if (ptOutSize->nWidth > ptInSize->nWidth) {    /*H scale-up, set h scaling factor*/
			/*Hini = 0xff;*/
			Hini = (unsigned char)(((ptInSize->nWidth) * 255) / (2 * ptOutSize->nWidth) + 127);/*for symmertic setting*/
			if (uzu_coeff.user_defined == 1)
				dm_uzu_Initial_Value_REG.hor_ini = uzu_coeff.h_initial;
			else
			dm_uzu_Initial_Value_REG.hor_ini = Hini;

			if (ptInSize->nWidth > 1024)
				r = 12;/*15;*/ /*CSW+ 0970104 Restore to original setting*/
			else
				r = 6; /*8*/  /*CSW+ 0961112 enlarge non-linear scaling result*/

			if (panorama) {	/*CSW+ 0960830 Non-linear SU*/
				if (ptInSize->nWidth > 1024)
					S1 = (ptOutSize->nWidth)  / 6; /*CSW+ 0970104 Restore to original setting*/
				else
					S1 = (ptOutSize->nWidth)  / 5; /*CSW+ 0961112 enlarge non-linear scaling result*/
				S2 = S1;
				S3 = (ptOutSize->nWidth) - 2*S1 - 2*S2;
				/*=vv==old from TONY, if no problem, use this=vv==*/
#if CONFIG_FIRMWARE_IN_KERNEL
				ulparam1 = (((unsigned long long)(ptInSize->nWidth)<< 21) - ((unsigned long long)Hini<<13));
				ulparam2 = (unsigned long long)((7+4*r)*S1 + (3+r)*S3 - r);
				do_div(ulparam1, ulparam2);
				nFactor = ulparam1;
#else
				nFactor = (((unsigned long long)(ptInSize->nWidth) << 21) - ((unsigned int)Hini << 13)) / ((7 + 4 * r) * S1 + (3 + r) * S3 - r);
#endif
				/*==vv==Thur debugged==vv==*/
				/*nFactor = ((((unsigned long long)(ptInSize->nWidth))*(ptOutSize->nWidth-1))<<21) / ptOutSize->nWidth;*/
				/*nFactor = nFactor / ((7+4*r)*S1 + (3+r)*S3 - r);*/
				/*=====================*/
				nFactor = nFactor * r;
				D1 = 2*(unsigned long)nFactor / S1 / r;
				D2 = (unsigned long)nFactor / S1 / r;
				VIPprintf("PANORAMA1 HScale up factor before ROUND = %llx, In Wid =%x, Out Wid =%x \n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
				nFactor = (unsigned long long)SHR((nFactor + 1), 1); /*rounding*/
				D1 = SHR(D1 + 1, 1); /*rounding*/
				D2 = SHR(D2 + 1, 1); /*rounding*/

				if ((nFactor + (3 * (unsigned long)nFactor / r)) >= 1048576)	{	/*Can't do nonlinear SU*/
					VIPprintf("PANORAMA1 Can't do nonlinear SU \n");
		/*			nFactor =(((unsigned int)(ptInSize->nWidth)<< 21) - ((unsigned int)Hini<<13))  / (ptOutSize->nWidth-1);*/
#if CONFIG_FIRMWARE_IN_KERNEL
					ulparam1 = (((unsigned long long)(ptInSize->nWidth)<< 21));
					ulparam2 = (unsigned long long)(ptOutSize->nWidth);
					do_div(ulparam1, ulparam2);
					nFactor = ulparam1;
#else
					nFactor = (((unsigned long long)(ptInSize->nWidth) << 21)) / (ptOutSize->nWidth);/*Thur 20071227 modified*/
#endif
					VIPprintf("PANORAMA1 HScale up factor before ROUND = %llx, In Wid =%x, Out Wid =%x \n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
					nFactor = (unsigned long long)SHR((nFactor + 1), 1); /*rounding*/
					S1 = 0;
					S2 = 0;
					S3 = ptOutSize->nWidth;
					D1 = 0;
					D2 = 0;
				}
			} else {
/*				nFactor = (((unsigned int)(ptInSize->nWidth)<< 21) - ((unsigned int)Hini<<13))  / (ptOutSize->nWidth-1);*/
#if CONFIG_FIRMWARE_IN_KERNEL
				ulparam1 = (((unsigned long long)(ptInSize->nWidth)<< 21));
				ulparam2 = (unsigned long long)(ptOutSize->nWidth);
				do_div(ulparam1, ulparam2);
				nFactor = ulparam1;
#else
				nFactor = (((unsigned long long)(ptInSize->nWidth) << 21))  / (ptOutSize->nWidth);/*Thur 20071228 modified*/
#endif
				nFactor = (unsigned long long)nFactor + (unsigned long long)uzu_coeff.h_factor_offset;

				VIPprintf("HScale up factor before ROUND = %llx, In Wid =%x, Out Wid =%x \n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
				nFactor = (unsigned long long)SHR((nFactor + 1), 1); /*rounding*/
			}
			VIPprintf("HScale up factor = %llx\n", nFactor);
		} else if (ptOutSize->nWidth == ptInSize->nWidth) {
			nFactor = 0xfffff;
			Hini = 0xff;
			dm_uzu_Initial_Value_REG.hor_ini = Hini;
		} else {
			nFactor = 0xfffff;
		}
                nFactor_H = nFactor<<two_step_factor_shift;
		dm_uzu_Scale_Hor_Factor_REG.regValue = nFactor<<two_step_factor_shift;
		dm_uzu_Hor_Delta1_REG.hor_delta1 = D1<<two_step_factor_shift;
		dm_uzu_Hor_Delta2_REG.hor_delta2 = D2<<two_step_factor_shift;
		dm_uzu_Hor_Segment1_REG.hor_segment1 = S1<<two_step_factor_shift;
		dm_uzu_Hor_Segment2_REG.hor_segment2 = S2<<two_step_factor_shift;
		dm_uzu_Hor_Segment3_REG.hor_segment3 = S3<<two_step_factor_shift;

		if (ptOutSize->nLength > ptInSize->nLength) {   /*V scale-up, set v scaling factor*/

			/*CSW- 0961128 for frame sync V scale up initial position change*/
			/*	Vini = 0x78;*/
			/*CSW+ 0961128 for frame sync V scale up initial position change by tyan*/

			/*Thur- for symmetric*/
			/*Vini = ((ptInSize->nLength*(0xFF - 0x7F))/(ptOutSize->nLength*2))+(1*(0xFF - 0x7F)/2);*/
			/*Thur+ for symmetric*/
			Vini = (unsigned char)(((ptInSize->nLength) * 255) / (2 * ptOutSize->nLength) + 127);/*for symmertic setting*/

			VIPprintf("====> Vini:%x ptInSize->nLength:%x ptOutSize->nLength:%x\n", Vini, ptInSize->nLength, ptOutSize->nLength);

			/*=======*/
#ifdef CONFIG_DATA_FRAMESYNC_FORCE_422_CAP
			if (Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC)) {
				dm_uzu_Initial_Value_REG.ver_ini = 0xff;
			} else
#endif
			{
				if (uzu_coeff.user_defined == 1)
					dm_uzu_Initial_Value_REG.ver_ini = uzu_coeff.v_initial;
				else
					dm_uzu_Initial_Value_REG.ver_ini = Vini;
			}

			/*nFactor = ((unsigned int)((ptInSize->nLength) << 20) - (Vini<<12)) / ((ptOutSize->nLength)-1);*/
#if CONFIG_FIRMWARE_IN_KERNEL
			ulparam1 = ((unsigned long long)(ptInSize->nLength) << 21);
			ulparam2 = (unsigned long long)(ptOutSize->nLength);
			do_div(ulparam1, ulparam2);
			nFactor = ulparam1;
#else
			nFactor = ((unsigned int)((ptInSize->nLength) << 21)) / ((ptOutSize->nLength));
#endif
			nFactor = (unsigned long long)nFactor + (unsigned long long)uzu_coeff.v_factor_offset;

			VIPprintf("VScale up factor before ROUND = %llx, in Len =%x, Out Len =%x\n", nFactor, ptInSize->nLength, ptOutSize->nLength);
			nFactor = (unsigned long long)SHR((nFactor + 1), 1); /*rounding*/
			VIPprintf("VScale up factor = %llx\n", nFactor);
		}  else if (ptOutSize->nLength == ptInSize->nLength) {
			nFactor = 0xffffff;
			Vini = 0xff;
			dm_uzu_Initial_Value_REG.ver_ini = Vini;
		} else {
			nFactor = 0xffffff;
		}
                nFactor_V = nFactor<<two_step_factor_shift;

		dm_uzu_Scale_Ver_Factor_REG.regValue = nFactor<<two_step_factor_shift;


                if((get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)||force_enable_two_step_uzu())
                {

	                	rtd_printk(KERN_EMERG, TAG_NAME, "4K120 ptInSize->nWidth =%d , ptInSize->nLength=%d \n",ptInSize->nWidth, ptInSize->nLength);
	                	rtd_printk(KERN_EMERG, TAG_NAME, "4K120 Hini =%d , Vini=%d \n",Hini, Vini);

                        drvif_color_ultrazoom_uzu_4k_120_mode(1);
                        drvif_color_scaler_setscaleup120Hz_factor_H(nFactor_H);
                        drvif_color_scaler_setscaleup120Hz_factor_V(nFactor_V);
                        drvif_color_scaler_setscaleup120Hz_factor_bysize(ptInSize->nWidth,ptInSize->nLength);
                        drvif_color_ultrazoom_scalerup_4K120_setiniphase(Hini,Vini,0);
                       // drvif_color_scaler_setscaleup_hcoef_12tap(120,ptr);//

                        drvif_color_sr_db_apply();
                }
                else
                {
                        drvif_color_ultrazoom_uzu_4k_120_mode(0);

        		IoReg_Write32(SCALEUP_DM_UZU_Scale_Ver_Factor_reg, dm_uzu_Scale_Ver_Factor_REG.regValue);
        		IoReg_Write32(SCALEUP_DM_UZU_Scale_Hor_Factor_reg, dm_uzu_Scale_Hor_Factor_REG.regValue);
        		IoReg_Write32(SCALEUP_DM_UZU_Hor_Delta1_reg, dm_uzu_Hor_Delta1_REG.regValue);
        		IoReg_Write32(SCALEUP_DM_UZU_Hor_Delta2_reg, dm_uzu_Hor_Delta2_REG.regValue);
        		IoReg_Write32(SCALEUP_DM_UZU_Hor_Segment1_reg, dm_uzu_Hor_Segment1_REG.regValue);
        		IoReg_Write32(SCALEUP_DM_UZU_Hor_Segment2_reg, dm_uzu_Hor_Segment2_REG.regValue);
        		IoReg_Write32(SCALEUP_DM_UZU_Hor_Segment3_reg, dm_uzu_Hor_Segment3_REG.regValue);
        		IoReg_Write32(SCALEUP_DM_UZU_Initial_Value_reg, dm_uzu_Initial_Value_REG.regValue);

        		dm_uzu_Input_Size_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Input_Size_reg);
        		dm_uzu_Input_Size_REG.hor_input_size = ptInSize->nWidth;
        		dm_uzu_Input_Size_REG.ver_input_size = ptInSize->nLength;
        		IoReg_Write32(SCALEUP_DM_UZU_Input_Size_reg, dm_uzu_Input_Size_REG.regValue);

        		//drvif_color_twostep_scaleup_set(display, ptInSize, ptOutSize);


                }
	} else {
		scaleup_ds_uzu_scale_hor_factor_RBUS		ds_uzu_Scale_Hor_Factor_REG;
		scaleup_ds_uzu_scale_ver_factor_RBUS		ds_uzu_Scale_Ver_Factor_REG;
		scaleup_ds_uzu_initial_value_RBUS			ds_uzu_Initial_Value_REG;
		ppoverlay_uzudtg_control1_RBUS reg_ppoverlay_uzudtg_control1_reg;
		ppoverlay_double_buffer_ctrl2_RBUS reg_ppoverlay_double_buffer_ctrl2_reg;
		scaleup_ds_uzu_input_size_RBUS	ds_uzu_Input_Size_REG;

		ds_uzu_Initial_Value_REG.regValue = IoReg_Read32(SCALEUP_DS_UZU_Initial_Value_reg);
		ds_uzu_Scale_Ver_Factor_REG.regValue = IoReg_Read32(SCALEUP_DS_UZU_Scale_Ver_Factor_reg);
		ds_uzu_Scale_Hor_Factor_REG.regValue = IoReg_Read32(SCALEUP_DS_UZU_Scale_Hor_Factor_reg);

		reg_ppoverlay_uzudtg_control1_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_control1_reg);
		if(reg_ppoverlay_uzudtg_control1_reg.uzu_4k_120_mode)
		{//sub need to disable 4k120 mode
			reg_ppoverlay_uzudtg_control1_reg.uzu_4k_120_mode = 0;
			IoReg_Write32(PPOVERLAY_uzudtg_control1_reg, reg_ppoverlay_uzudtg_control1_reg.regValue);
			reg_ppoverlay_double_buffer_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
			reg_ppoverlay_double_buffer_ctrl2_reg.uzudtgreg_dbuf_set = 1;
			IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, reg_ppoverlay_double_buffer_ctrl2_reg.regValue);
		}

		if (ptOutSize->nWidth > ptInSize->nWidth) {    /*H scale-up, set h scaling factor*/
			Hini = 0xff;
			ds_uzu_Initial_Value_REG.hor_ini = Hini;
			/*nFactor = (((unsigned int)(ptInSize->nWidth)<< 21) - ((unsigned int)Hini<<13))  / (ptOutSize->nWidth-1);*/
#if CONFIG_FIRMWARE_IN_KERNEL
			ulparam1 = (((unsigned long long)(ptInSize->nWidth)<< 21));
			ulparam2 = (unsigned long long)(ptOutSize->nWidth);
			do_div(ulparam1, ulparam2);
			nFactor = ulparam1;
#else
			nFactor = (((unsigned int)(ptInSize->nWidth) << 21))  / (ptOutSize->nWidth);
#endif
			VIPprintf("HScale up factor before ROUND = %llx, in Wid =%x, out Wid =%x \n", nFactor, ptOutSize->nLength, ptOutSize->nWidth);
			nFactor = (unsigned long long)SHR((nFactor + 1), 1); /*rounding*/
			VIPprintf("HScale up factor = %llx\n", nFactor);
		} else {
			nFactor = 0xffffff;
		}
		ds_uzu_Scale_Hor_Factor_REG.regValue = nFactor;

		if (ptOutSize->nLength > ptInSize->nLength) {   /* V scale-up, set v scaling factor*/
			if (Scaler_DispGetStatus(SLR_SUB_DISPLAY, SLR_DISP_INTERLACE))
				Vini = 0xC0;/*0x78;*/
			else
				Vini = 0xFF;
			ds_uzu_Initial_Value_REG.ver_ini = Vini;
			/*nFactor = ((unsigned int)((ptInSize->nLength) << 20) - ((unsigned int)Vini<<12)) / ((ptOutSize->nLength)-1);*/
#if CONFIG_FIRMWARE_IN_KERNEL
			ulparam1 = ((unsigned long long)(ptInSize->nLength) << 21);
			ulparam2 = (unsigned long long)(ptOutSize->nLength);
			do_div(ulparam1, ulparam2);
			nFactor = ulparam1;
#else
			nFactor = ((unsigned int)((ptInSize->nLength) << 21)) / ((ptOutSize->nLength));
#endif
			VIPprintf("VScale up factor before ROUND = %llx, in Len =%x, out Len =%x\n", nFactor, ptInSize->nLength, ptOutSize->nLength);
			nFactor = (unsigned long long)SHR((nFactor + 1), 1); /*rounding*/

			VIPprintf("VScale up factor = %llx\n", nFactor);
		} else {
			nFactor = 0xffffff;
		}
		ds_uzu_Scale_Ver_Factor_REG.regValue = nFactor;

		IoReg_Write32(SCALEUP_DS_UZU_Scale_Ver_Factor_reg, ds_uzu_Scale_Ver_Factor_REG.regValue);
		IoReg_Write32(SCALEUP_DS_UZU_Scale_Hor_Factor_reg, ds_uzu_Scale_Hor_Factor_REG.regValue);
		IoReg_Write32(SCALEUP_DS_UZU_Initial_Value_reg, ds_uzu_Initial_Value_REG.regValue);

		ds_uzu_Input_Size_REG.regValue = IoReg_Read32(SCALEUP_DS_UZU_Input_Size_reg);
		ds_uzu_Input_Size_REG.hor_input_size = ptInSize->nWidth;
		/*frank@0602 solve IC BUG to avoid main channel bandwidth not enough*/
		/*ds_uzu_Input_Size_REG.ver_input_size = ptInSize->nLength;*/
		ds_uzu_Input_Size_REG.ver_input_size = ptInSize->nLength;
		IoReg_Write32(SCALEUP_DS_UZU_Input_Size_reg, ds_uzu_Input_Size_REG.regValue);
	}
	uzu_coeff.user_defined = 0;

}


/*USER: chengying DATE:2010/04/02*/
/*fixed bug if we set h, vsize, scaler will show dirth page of progressing of scalining up*/
#if 1/*#ifdef CONFIG_ZOOM_IN_OUT_ENABLE*/
unsigned int		temp_dm_uzu_Scale_Hor_Factor_REG;
unsigned int		temp_dm_uzu_Scale_Ver_Factor_REG;
unsigned int		temp_dm_uzu_Initial_Value_REG;
unsigned int		temp_dm_uzu_Hor_Delta1_REG;
unsigned int		temp_dm_uzu_Hor_Delta2_REG;
unsigned int		temp_dm_uzu_Hor_Segment1_REG;
unsigned int		temp_dm_uzu_Hor_Segment2_REG;
unsigned int		temp_dm_uzu_Hor_Segment3_REG;
unsigned int		temp_dm_uzu_Input_Size_REG;

void zoom_drvif_color_ultrazoom_calscaleup(unsigned char display, SIZE *ptInSize, SIZE *ptOutSize, unsigned char panorama)
{

	unsigned int nFactor, D1, D2;
	unsigned short S1, S2, S3;
	unsigned char Hini, Vini, r;

	if (display == SLR_MAIN_DISPLAY) {

		scaleup_dm_uzu_scale_hor_factor_RBUS		dm_uzu_Scale_Hor_Factor_REG;
		scaleup_dm_uzu_scale_ver_factor_RBUS		dm_uzu_Scale_Ver_Factor_REG;
		scaleup_dm_uzu_initial_value_RBUS			dm_uzu_Initial_Value_REG;
		scaleup_dm_uzu_hor_delta1_RBUS			dm_uzu_Hor_Delta1_REG;
		scaleup_dm_uzu_hor_delta2_RBUS			dm_uzu_Hor_Delta2_REG;
		scaleup_dm_uzu_hor_segment1_RBUS		dm_uzu_Hor_Segment1_REG;
		scaleup_dm_uzu_hor_segment2_RBUS		dm_uzu_Hor_Segment2_REG;
		scaleup_dm_uzu_hor_segment3_RBUS		dm_uzu_Hor_Segment3_REG;
		scaleup_dm_uzu_input_size_RBUS			dm_uzu_Input_Size_REG;

		/*frankcheng#03212010 solve avoide HFlip bit be set*/
		dm_uzu_Initial_Value_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Initial_Value_reg);

		S1 = 0;
		S2 = 0;
		S3 = ptOutSize->nWidth;
		D1 = 0;
		D2 = 0;

		dm_uzu_Scale_Ver_Factor_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Scale_Ver_Factor_reg);
		dm_uzu_Scale_Hor_Factor_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Scale_Hor_Factor_reg);
		dm_uzu_Hor_Delta1_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Hor_Delta1_reg);
		dm_uzu_Hor_Delta2_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Hor_Delta2_reg);
		dm_uzu_Hor_Segment1_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Hor_Segment1_reg);
		dm_uzu_Hor_Segment2_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Hor_Segment2_reg);
		dm_uzu_Hor_Segment3_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Hor_Segment3_reg);
		dm_uzu_Initial_Value_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Initial_Value_reg);


		if (ptOutSize->nWidth > ptInSize->nWidth) {    /*H scale-up, set h scaling factor*/
			/*Hini = 0xff;*/
			Hini = (unsigned char)(((ptInSize->nWidth)*255)/(2*ptOutSize->nWidth) + 127);/*for symmertic setting*/
			dm_uzu_Initial_Value_REG.hor_ini = Hini;
			if (ptInSize->nWidth > 1024)
				r = 15; /*CSW+ 0970104 Restore to original setting*/
			else
				r = 8; /*CSW+ 0961112 enlarge non-linear scaling result*/

			if (panorama) {	/*CSW+ 0960830 Non-linear SU*/
				if (ptInSize->nWidth > 1024)
					S1 = (ptOutSize->nWidth)  / 6; /*CSW+ 0970104 Restore to original setting*/
				else
					S1 = (ptOutSize->nWidth)  / 5; /*CSW+ 0961112 enlarge non-linear scaling result*/
				S2 = S1;
				S3 = (ptOutSize->nWidth) - 2*S1 - 2*S2;
				/*=vv==old from TONY, if no problem, use this=vv==*/
				nFactor = (((unsigned int)(ptInSize->nWidth) << 21) - ((unsigned int)Hini << 13)) / ((7 + 4 * r) * S1 + (3 + r) * S3 - r);
				/*==vv==Thur debugged==vv==*/
				/*nFactor = ((((unsigned long long)(ptInSize->nWidth))*(ptOutSize->nWidth-1))<<21) / ptOutSize->nWidth;*/
				/*nFactor = nFactor / ((7+4*r)*S1 + (3+r)*S3 - r);*/
				/*=====================*/
				nFactor = nFactor * r;
				D1 = 2 * nFactor / S1 / r;
				D2 = nFactor / S1 / r;
				VIPprintf("PANORAMA1 HScale up factor before ROUND = %x, In Wid =%x, Out Wid =%x \n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
				nFactor = SHR((nFactor + 1), 1); /*rounding*/
				D1 = SHR(D1 + 1, 1); /*rounding*/
				D2 = SHR(D2 + 1, 1); /*rounding*/

				if ((nFactor + (3 * nFactor / r)) >= 1048576)	{	/*Can't do nonlinear SU*/
					VIPprintf("PANORAMA1 Can't do nonlinear SU \n");
		/*			nFactor =(((unsigned int)(ptInSize->nWidth)<< 21) - ((unsigned int)Hini<<13))  / (ptOutSize->nWidth-1);*/
					nFactor = (((unsigned int)(ptInSize->nWidth) << 21))  / (ptOutSize->nWidth);/*Thur 20071227 modified*/
					VIPprintf("PANORAMA1 HScale up factor before ROUND = %x, In Wid =%x, Out Wid =%x \n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
					nFactor = SHR((nFactor + 1), 1); /*rounding*/
					S1 = 0;
					S2 = 0;
					S3 = ptOutSize->nWidth;
					D1 = 0;
					D2 = 0;
				}
			} else {
/*				nFactor = (((unsigned int)(ptInSize->nWidth)<< 21) - ((unsigned int)Hini<<13))  / (ptOutSize->nWidth-1);*/
				nFactor = (((unsigned int)(ptInSize->nWidth) << 21))  / (ptOutSize->nWidth);/*Thur 20071228 modified*/
				VIPprintf("HScale up factor before ROUND = %x, In Wid =%x, Out Wid =%x \n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
				nFactor = SHR((nFactor + 1), 1); /*rounding*/
			}
			VIPprintf("HScale up factor = %x\n", nFactor);
		} else {
			nFactor = 0xffffff;
		}
		dm_uzu_Scale_Hor_Factor_REG.regValue = nFactor;
		dm_uzu_Hor_Delta1_REG.hor_delta1 = D1;
		dm_uzu_Hor_Delta2_REG.hor_delta2 = D2;
		dm_uzu_Hor_Segment1_REG.hor_segment1 = S1;
		dm_uzu_Hor_Segment2_REG.hor_segment2 = S2;
		dm_uzu_Hor_Segment3_REG.hor_segment3 = S3;

		if (ptOutSize->nLength > ptInSize->nLength) {   /*V scale-up, set v scaling factor*/

			/*CSW- 0961128 for frame sync V scale up initial position change*/
			/*	Vini = 0x78;*/
			/*CSW+ 0961128 for frame sync V scale up initial position change by tyan*/

			/*Thur- for symmetric*/
			/*Vini = ((ptInSize->nLength*(0xFF - 0x7F))/(ptOutSize->nLength*2))+(1*(0xFF - 0x7F)/2);*/
			/*Thur+ for symmetric*/
			Vini = (unsigned char)(((ptInSize->nLength)*255)/(2*ptOutSize->nLength) + 127);/*for symmertic setting*/

			VIPprintf("====> Vini:%x ptInSize->nLength:%x ptOutSize->nLength:%x\n", Vini, ptInSize->nLength, ptOutSize->nLength);

			/*=======*/
			dm_uzu_Initial_Value_REG.ver_ini = Vini;
			/*nFactor = ((unsigned int)((ptInSize->nLength) << 20) - (Vini<<12)) / ((ptOutSize->nLength)-1);*/
			nFactor = ((unsigned int)((ptInSize->nLength) << 21)) / ((ptOutSize->nLength));
			VIPprintf("VScale up factor before ROUND = %x, in Len =%x, Out Len =%x\n", nFactor, ptInSize->nLength, ptOutSize->nLength);
			nFactor = SHR((nFactor + 1), 1); /*rounding*/
			VIPprintf("VScale up factor = %x\n", nFactor);
		} else {
			nFactor = 0xffffff;
		}

		dm_uzu_Scale_Ver_Factor_REG.regValue = nFactor;
		dm_uzu_Input_Size_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Input_Size_reg);
		dm_uzu_Input_Size_REG.hor_input_size = ptInSize->nWidth;
		dm_uzu_Input_Size_REG.ver_input_size = ptInSize->nLength;
		temp_dm_uzu_Scale_Ver_Factor_REG = dm_uzu_Scale_Ver_Factor_REG.regValue;
		temp_dm_uzu_Scale_Hor_Factor_REG = dm_uzu_Scale_Hor_Factor_REG.regValue;
		temp_dm_uzu_Hor_Delta1_REG = dm_uzu_Hor_Delta1_REG.regValue;
		temp_dm_uzu_Hor_Delta2_REG = dm_uzu_Hor_Delta2_REG.regValue;
		temp_dm_uzu_Hor_Segment1_REG = dm_uzu_Hor_Segment1_REG.regValue;
		temp_dm_uzu_Hor_Segment2_REG = dm_uzu_Hor_Segment2_REG.regValue;
		temp_dm_uzu_Hor_Segment3_REG = dm_uzu_Hor_Segment3_REG.regValue;
		temp_dm_uzu_Initial_Value_REG = dm_uzu_Initial_Value_REG.regValue;
		temp_dm_uzu_Input_Size_REG = dm_uzu_Input_Size_REG.regValue;

	}





#if 0
	unsigned int nFactor, D1, D2;
	unsigned short S1, S2, S3;
	unsigned char Hini, Vini, r;

	if (display == _MAIN_DISPLAY) {
		scaleup_dm_uzu_scale_hor_factor_RBUS		dm_uzu_Scale_Hor_Factor_REG;
		scaleup_dm_uzu_scale_ver_factor_RBUS		dm_uzu_Scale_Ver_Factor_REG;
		scaleup_dm_uzu_initial_value_RBUS			dm_uzu_Initial_Value_REG;
		scaleup_dm_uzu_hor_delta1_RBUS			dm_uzu_Hor_Delta1_REG;
		scaleup_dm_uzu_hor_delta2_RBUS			dm_uzu_Hor_Delta2_REG;
		scaleup_dm_uzu_hor_segment1_RBUS		dm_uzu_Hor_Segment1_REG;
		scaleup_dm_uzu_hor_segment2_RBUS		dm_uzu_Hor_Segment2_REG;
		scaleup_dm_uzu_hor_segment3_RBUS		dm_uzu_Hor_Segment3_REG;

		S1 = 0;
		S2 = 0;
		S3 = ptOutSize->nWidth;
		D1 = 0;
		D2 = 0;

		if (ptOutSize->nWidth > ptInSize->nWidth) {    /*H scale-up, set h scaling factor*/
			/*Hini = 0xff;*/
			Hini = (unsigned char)(((ptInSize->nWidth) * 255) / (2 * ptOutSize->nWidth) + 127);/*for symmertic setting*/
			dm_uzu_Initial_Value_REG.hor_ini = Hini;
			if (ptInSize->nWidth > 1024)
				r = 15; /*CSW+ 0970104 Restore to original setting*/
			else
				r = 8; /*CSW+ 0961112 enlarge non-linear scaling result*/

			if (panorama) {	/*CSW+ 0960830 Non-linear SU*/
				if (ptInSize->nWidth > 1024)
					S1 = (ptOutSize->nWidth)  / 6; /*CSW+ 0970104 Restore to original setting*/
				else
					S1 = (ptOutSize->nWidth)  / 5; /*CSW+ 0961112 enlarge non-linear scaling result*/
				S2 = S1;
				S3 = (ptOutSize->nWidth) - 2 * S1 - 2 * S2;
				/*=vv==old from TONY, if no problem, use this=vv==*/
				nFactor = (((unsigned int)(ptInSize->nWidth) << 21) - ((unsigned int)Hini << 13)) / ((7 + 4 * r) * S1 + (3 + r) * S3 - r);
				/*==vv==Thur debugged==vv==*/
				/*nFactor = ((((unsigned long long)(ptInSize->nWidth))*(ptOutSize->nWidth-1))<<21) / ptOutSize->nWidth;*/
				/*nFactor = nFactor / ((7+4*r)*S1 + (3+r)*S3 - r);*/
				/*=====================*/
				nFactor = nFactor * r;
				D1 = 2*nFactor / S1 / r;
				D2 = nFactor / S1 / r;
				RTD_Log(LOGGER_INFO, "PANORAMA1 HScale up factor before ROUND = %x, In Wid =%x, Out Wid =%x \n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
				nFactor = SHR((nFactor + 1), 1); /*rounding*/
				D1 = SHR(D1 + 1, 1); /*rounding*/
				D2 = SHR(D2 + 1, 1); /*rounding*/

				if ((nFactor + (3 * nFactor / r)) >= 1048576)	{	/*Can't do nonlinear SU*/
					RTD_Log(LOGGER_INFO, "PANORAMA1 Can't do nonlinear SU \n");
		/*			nFactor =(((unsigned int)(ptInSize->nWidth)<< 21) - ((unsigned int)Hini<<13))  / (ptOutSize->nWidth-1);*/
					nFactor = (((unsigned int)(ptInSize->nWidth) << 21))  / (ptOutSize->nWidth);/*Thur 20071227 modified*/
					RTD_Log(LOGGER_INFO, "PANORAMA1 HScale up factor before ROUND = %x, In Wid =%x, Out Wid =%x \n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
					nFactor = SHR((nFactor + 1), 1); /*rounding*/
					S1 = 0;
					S2 = 0;
					S3 = ptOutSize->nWidth;
					D1 = 0;
					D2 = 0;
				}
			} else {
/*				nFactor = (((unsigned int)(ptInSize->nWidth)<< 21) - ((unsigned int)Hini<<13))  / (ptOutSize->nWidth-1);*/
				nFactor = (((unsigned int)(ptInSize->nWidth) << 21))  / (ptOutSize->nWidth);/*Thur 20071228 modified*/
				VIPprintf("HScale up factor before ROUND = %x, In Wid =%x, Out Wid =%x \n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
				nFactor = SHR((nFactor + 1), 1); /*rounding*/
			}
			VIPprintf("HScale up factor = %x\n", nFactor);
		} else {
			nFactor = 0xffffff;
		}
		dm_uzu_Scale_Hor_Factor_REG.regValue = nFactor;
		dm_uzu_Hor_Delta1_REG.hor_delta1 = D1;
		dm_uzu_Hor_Delta2_REG.hor_delta2 = D2;
		dm_uzu_Hor_Segment1_REG.hor_segment1 = S1;
		dm_uzu_Hor_Segment2_REG.hor_segment2 = S2;
		dm_uzu_Hor_Segment3_REG.hor_segment3 = S3;

		if (ptOutSize->nLength > ptInSize->nLength) {   /*V scale-up, set v scaling factor*/

			/*CSW- 0961128 for frame sync V scale up initial position change*/
			/*	Vini = 0x78;*/
			/*CSW+ 0961128 for frame sync V scale up initial position change by tyan*/

			/*Thur- for symmetric*/
			/*Vini = ((ptInSize->nLength*(0xFF - 0x7F))/(ptOutSize->nLength*2))+(1*(0xFF - 0x7F)/2);*/
			/*Thur+ for symmetric*/
			Vini = (unsigned char)(((ptInSize->nLength) * 255) / (2 * ptOutSize->nLength) + 127);/*for symmertic setting*/

			VIPprintf("====> Vini:%x ptInSize->nLength:%x ptOutSize->nLength:%x\n", Vini, ptInSize->nLength, ptOutSize->nLength);

			/*=======*/
			dm_uzu_Initial_Value_REG.ver_ini = Vini;
			/*nFactor = ((unsigned int)((ptInSize->nLength) << 20) - (Vini<<12)) / ((ptOutSize->nLength)-1);*/
			nFactor = ((unsigned int)((ptInSize->nLength) << 21)) / ((ptOutSize->nLength));
			VIPprintf("VScale up factor before ROUND = %x, in Len =%x, Out Len =%x\n", nFactor, ptInSize->nLength, ptOutSize->nLength);
			nFactor = SHR((nFactor + 1), 1); /*rounding*/
			VIPprintf("VScale up factor = %x\n", nFactor);
		} else {
			nFactor = 0xffffff;
		}
		dm_uzu_Scale_Ver_Factor_REG.regValue = nFactor;
		scaleup_dm_uzu_input_size_RBUS	dm_uzu_Input_Size_REG;
		dm_uzu_Input_Size_REG.regValue = rtd_inl(SCALEUP_DM_UZU_Input_Size_reg);
		dm_uzu_Input_Size_REG.hor_input_size = ptInSize->nWidth;
		dm_uzu_Input_Size_REG.ver_input_size = ptInSize->nLength;

		temp_dm_uzu_Scale_Ver_Factor_REG = dm_uzu_Scale_Ver_Factor_REG.regValue;
		temp_dm_uzu_Scale_Hor_Factor_REG = dm_uzu_Scale_Hor_Factor_REG.regValue;
		temp_dm_uzu_Hor_Delta1_REG = dm_uzu_Hor_Delta1_REG.regValue;
		temp_dm_uzu_Hor_Delta2_REG = dm_uzu_Hor_Delta2_REG.regValue;
		temp_dm_uzu_Hor_Segment1_REG = dm_uzu_Hor_Segment1_REG.regValue;
		temp_dm_uzu_Hor_Segment2_REG = dm_uzu_Hor_Segment2_REG.regValue;
		temp_dm_uzu_Hor_Segment3_REG = dm_uzu_Hor_Segment3_REG.regValue;
		temp_dm_uzu_Initial_Value_REG = dm_uzu_Initial_Value_REG.regValue;
		temp_dm_uzu_Input_Size_REG = dm_uzu_Input_Size_REG.regValue;
	}
	#endif
}

#endif


void drvif_color_ultrazoom_set_scaledown_LPF(unsigned char channel)
{
	unsigned int tmp_data;
	signed short *coef_pt;
	int i;

	scaledown_ich1_uzd_ctrl0_RBUS		ich1_uzd_Ctrl0_REG;
	ich1_uzd_Ctrl0_REG.regValue	= IoReg_Read32(SCALEDOWN_ICH1_UZD_Ctrl0_reg);

	ich1_uzd_Ctrl0_REG.buffer_mode = 2;
	ich1_uzd_Ctrl0_REG.v_y_table_sel = 1;
	ich1_uzd_Ctrl0_REG.v_zoom_en = 1;

	IoReg_Write32(SCALEDOWN_ICH1_UZD_Ctrl0_reg, ich1_uzd_Ctrl0_REG.regValue);

	if (channel == _CHANNEL1) {		/*channel 1*/
		coef_pt = tScaleDown_VLPF_COEF_TAB[0];
		/*DC Value Check*/
		if (SCALING_LOG) {
			for(i=0; i<8; i++) {
				if((*(coef_pt+i)+*(coef_pt+i+16)+*(coef_pt+31-i)+*(coef_pt+15-i)) != 1024)
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
			}
		}

		for (i = 0 ; i < 16 ; i++) {
			tmp_data = ((unsigned int)(*coef_pt++) << 16);
			tmp_data += ((unsigned int)(*coef_pt++)) & 0xFFFF;
			IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab1_C0_reg + i * 4, tmp_data);
		}

		coef_pt = tScaleDown_VLPF_COEF_TAB[1];
		/*DC Value Check*/
		if (SCALING_LOG) {
			for(i=0; i<8; i++) {
				if((*(coef_pt+i)+*(coef_pt+i+16)+*(coef_pt+31-i)+*(coef_pt+15-i)) != 1024)
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
			}
		}

		for (i = 0 ; i < 16 ; i++) {
			tmp_data = ((unsigned int)(*coef_pt++) << 16);
			tmp_data += (unsigned int)(*coef_pt++);
			IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab2_C0_reg + i * 4, tmp_data);
		}
	}

}




/*===============================================================*/
/**
 * CScalerSetScaleDown
 * This function is used to set scaling-down registers, including main and sub display.
 *
 * @param <info> { display-info struecture }
 * @return { none }
 * @note
 * It can be linear or non-linear either, based on the non-linear flag condition:
 */
/*void Scaler_SetScaleDown(unsigned char display)*/
void drvif_color_ultrazoom_set_scale_down(unsigned char channel, SIZE *ptInSize, SIZE *ptOutSize, unsigned char panorama)
{
/*	unsigned char FlatSdFac = 72;*/ /*This value must large than 64, scale down factor can't exceed 4 times*/
/*	unsigned short w1;*/
/*	unsigned short w2;*/
	unsigned char SDRatio;
	unsigned char SDFilter = 0;
	unsigned int tmp_data;
	signed short *coef_pt;

	unsigned char i;

	unsigned int nFactor, D;
	unsigned char Hini, Vini, a;
	unsigned short S1, S2;

	unsigned char source = 255;

	unsigned long long tmpLength = 0;

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
	scaledown_ich1_uzd_ctrl0_RBUS					ich1_uzd_Ctrl0_REG;
	scaledown_ich1_uzd_ctrl1_RBUS					ich1_uzd_Ctrl1_REG;
	scaledown_ich1_uzd_scale_hor_factor_RBUS		ich1_uzd_Scale_Hor_Factor_REG;
	scaledown_ich1_uzd_scale_ver_factor_RBUS		ich1_uzd_Scale_Ver_Factor_REG;
	scaledown_ich1_uzd_initial_value_RBUS			ich1_uzd_Initial_Value_REG;

	hsd_dither_di_hsd_ctrl0_RBUS					di_hsd_ctrl0_reg;
	//hsd_dither_di_hsd_scale_hor_factor_RBUS 		di_hsd_scale_hor_factor_reg;
	hsd_dither_di_hsd_initial_value_RBUS			di_hsd_initial_value_reg;
	hsd_dither_di_hsd_hor_segment_RBUS				di_hsd_hor_segment_reg;
	/*data_path_select_RBUS 				data_path_select_reg;*/

	scaledown_ich2_uzd_ctrl0_RBUS				ich2_uzd_Ctrl0_REG;
	scaledown_ich2_uzd_ctrl1_RBUS				ich2_uzd_Ctrl1_REG;
	scaledown_ich2_uzd_h_output_size_RBUS		ich2_uzd_H_Output_Size_REG;
	scaledown_ich2_uzd_scale_hor_factor_RBUS 	ich2_uzd_Scale_Hor_Factor_REG;
	scaledown_ich2_uzd_scale_ver_factor_RBUS	ich2_uzd_Scale_Ver_Factor_REG;
	scaledown_ich2_uzd_initial_value_RBUS			ich2_uzd_Initial_Value_REG;


	ich1_uzd_Ctrl0_REG.regValue		= IoReg_Read32(SCALEDOWN_ICH1_UZD_Ctrl0_reg);
	ich1_uzd_Ctrl1_REG.regValue		= IoReg_Read32(SCALEDOWN_ICH1_UZD_Ctrl1_reg);
	ich1_uzd_Initial_Value_REG.regValue		= IoReg_Read32(SCALEDOWN_ICH1_UZD_Ctrl1_reg);

	di_hsd_ctrl0_reg.regValue = IoReg_Read32(HSD_DITHER_DI_HSD_Ctrl0_reg);
	di_hsd_hor_segment_reg.regValue = IoReg_Read32(HSD_DITHER_DI_HSD_Hor_Segment_reg);
	ich1_uzd_Scale_Ver_Factor_REG.regValue = IoReg_Read32(SCALEDOWN_ICH1_UZD_Scale_Ver_Factor_reg);

	ich2_uzd_Ctrl0_REG.regValue		= IoReg_Read32(SCALEDOWN_ICH2_UZD_Ctrl0_reg);
	ich2_uzd_Ctrl1_REG.regValue		= IoReg_Read32(SCALEDOWN_ICH2_UZD_Ctrl1_reg);
	ich2_uzd_H_Output_Size_REG.regValue = IoReg_Read32(SCALEDOWN_ICH2_UZD_H_Output_Size_reg);
	ich2_uzd_Initial_Value_REG.regValue	= IoReg_Read32(SCALEDOWN_ICH2_UZD_Initial_Value_reg);

	if (channel == _CHANNEL1) {		/*channel 1*/
		g_ucIsHScalerDown = 0;
		g_ucIsVScalerDown = 0;
		g_ucIsH444To422 = 0;
	}

#define TMPMUL	(16)

/*o============H scale-down=============o*/
	if (
		/*force to enter scaling down mode in 2D convert to 3D case for the horizontal start offset smoothness*/
		(Get_PANEL_SCALER_2D_3D_CVT_HWSHIFT_ENABLE() && scaler_2Dcvt3D_get_userStatus()) ||
		(ptInSize->nWidth > ptOutSize->nWidth)) {
		/*o-------calculate scaledown ratio to select one of different bandwith filters.--------o*/
#if 0
		SDRatio = ptOutSize->nWidth * TMPMUL / ptInSize->nWidth;
		if (SDRatio > (TMPMUL * 2))	/*sharp, wider bw*/
			SDFilter = 2;
		else if (SDRatio <= (TMPMUL * 2) && SDRatio > (TMPMUL * 3 / 2))/*Mid*/
			SDFilter = 1;
		else		/*blurest, narrow bw*/
			SDFilter = 0;
#endif
		if (ptOutSize->nWidth == 0) {
			VIPprintf("output width = 0 !!!\n");
			SDRatio = 0;
		} else {
			SDRatio = (ptInSize->nWidth*TMPMUL) / ptOutSize->nWidth;
		}

		/*VIPprintf("CSW SDRatio number =%d\n", SDRatio);*/

		if (SDRatio <= ((TMPMUL * 3)/2))	/*<1.5 sharp, wider bw*/
			SDFilter = 2;
		else if (SDRatio <= (TMPMUL * 2) && SDRatio > ((TMPMUL * 3)/2))	/*Mid*/
			SDFilter = 1;
		else		/*blurest, narrow bw*/
			SDFilter = 0;

		/*o---------------- fill coefficients into access port--------------------o*/
		/*coef_pt = tScaleDown_COEF_TAB[SD_H_Coeff_Sel[SDFilter]];*/
		coef_pt = &(ScaleDown_COEF_TAB.FIR_Coef_Table[SD_H_Coeff_Sel[SDFilter]][0]);
		/*DC Value Check*/
		if (SCALING_LOG) {
			for(i=0; i<8; i++) {
				if((*(coef_pt+i)+*(coef_pt+i+16)+*(coef_pt+31-i)+*(coef_pt+15-i)) != 1024)
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
			}
		}

		if (channel == _CHANNEL1) {		/*channel 1*/
			/*data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);*/
			ich1_uzd_Ctrl0_REG.h_y_table_sel = 0;	/*TAB1*/
			ich1_uzd_Ctrl0_REG.h_c_table_sel = 0;	/*TAB1*/

			for (i = 0 ; i < 16 ; i++) {
				tmp_data = ((unsigned int)(*coef_pt++)<<16);
				tmp_data += ((unsigned int)(*coef_pt++)) & 0xFFFF;
				/*data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);*/
				IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab1_C0_reg + i * 4, tmp_data);
			}

			g_ucIsHScalerDown = 1;
			g_ucSDFHSel = SDFilter;
		} else {			/*channel 2*/
#if 1 /*sub channel  (jyyang)*/
			ich2_uzd_Ctrl1_REG.h_c_filter = (SDFilter+1)%3;
			ich2_uzd_Ctrl1_REG.h_y_filter = ich2_uzd_Ctrl1_REG.h_c_filter;
#endif
			/*
			if (SDFilter == 0)	{		//narrow
				ich2_uzd_Ctrl1_REG.h_c_filter = 1;
				ich2_uzd_Ctrl1_REG.h_y_filter = 1;
			} else if (SDFilter == 1)	{	//mid
				ich2_uzd_Ctrl1_REG.h_c_filter = 2;
				ich2_uzd_Ctrl1_REG.h_y_filter = 2;
			} else {					//wider
				ich2_uzd_Ctrl1_REG.h_c_filter = 0;
				ich2_uzd_Ctrl1_REG.h_y_filter = 0;
			}
			*/
		}
	}
/*o============V scale-down=============o*/
	if (ptInSize->nLength > ptOutSize->nLength) {
		/*o-------calculate scaledown ratio to select one of different bandwith filters.--------o*/
#if 0
		SDRatio = ptOutSize->nLength*TMPMUL / ptInSize->nLength;
		if (SDRatio > (TMPMUL * 2))	/*sharp, wider bw*/
			SDFilter = 2;
		else if (SDRatio <= (TMPMUL * 2) && SDRatio > (TMPMUL * 3 / 2))	/*Mid*/
			SDFilter = 1;
		else		/*blurest, narrow bw*/
			SDFilter = 0;
#endif
		 /*jeffrey 961231*/
		if (ptOutSize->nLength == 0) {
			SDRatio = 0;
		} else {
			SDRatio = (ptInSize->nLength*TMPMUL) / ptOutSize->nLength;
		}

		/*VIPprintf("CSW SDRatio number =%d\n", SDRatio);*/

		if (SDRatio <= ((TMPMUL * 3) / 2))	/*<1.5 sharp, wider bw*/
			SDFilter = 2;
		else if (SDRatio <= (TMPMUL * 2) && SDRatio > ((TMPMUL * 3) / 2))	/*Mid*/
			SDFilter = 1;
		else		/*blurest, narrow bw*/
			SDFilter = 0;


		VIPprintf("filter number =%d\n", SDFilter);

		if (channel == _CHANNEL1) {		/*ch1 horizontal input size > 1440, enable buffer extension, use 2-tap filter*/
			/*if (ptOutSize->nWidth > 1440) {*/
		} else {		/*ch2 horizontal input size > 720, enable buffer extension, use 2-tap filter*/
			/*if (ptOutSize->nWidth  > 720)*/

		}

		/*o---------------- fill coefficients into access port--------------------o*/
		/*coef_pt = tScaleDown_COEF_TAB[SD_V_Coeff_Sel[SDFilter]];*/
		coef_pt = &(ScaleDown_COEF_TAB.FIR_Coef_Table[SD_V_Coeff_Sel[SDFilter]][0]);
		/*DC Value Check*/
		if (SCALING_LOG) {
			for(i=0; i<8; i++) {
				if((*(coef_pt+i)+*(coef_pt+i+16)+*(coef_pt+31-i)+*(coef_pt+15-i)) != 1024)
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
			}
		}

		if (channel == _CHANNEL1) {		/*channel 1*/
			ich1_uzd_Ctrl0_REG.v_y_table_sel = 1;	/*TAB2*/
			ich1_uzd_Ctrl0_REG.v_c_table_sel = 1;	/*TAB2*/

			for (i = 0 ; i < 16 ; i++) {
				tmp_data = ((unsigned int)(*coef_pt++) << 16);
				tmp_data += (unsigned int)(*coef_pt++);
				IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab2_C0_reg + i * 4, tmp_data);
			}

			g_ucIsVScalerDown = 1;
			g_ucSDFVSel = SDFilter;
		} else {			/*channel 2*/
/*
			if (SDFilter == 0)	{		//narrow
				ich2_uzd_Ctrl1_REG.v_c_filter = 1;
				ich2_uzd_Ctrl1_REG.v_y_filter = 1;
			} else if (SDFilter == 1)	{	//mid
				ich2_uzd_Ctrl1_REG.v_c_filter = 2;
				ich2_uzd_Ctrl1_REG.v_y_filter = 2;
			} else {					//wider
				ich2_uzd_Ctrl1_REG.v_c_filter = 0;
				ich2_uzd_Ctrl1_REG.v_y_filter = 0;
			}
*/
		}
	} else {/*no need  V scale-down, use bypass filter*/

	}

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

	/* for 4K scaler down grid line*/
	if (ptInSize->nWidth > 3000 && ptOutSize->nWidth <= 1366 && ich1_uzd_Ctrl0_REG.v_zoom_en == 1)
		ich1_uzd_Ctrl1_REG.four_tap_en = 1;
	else
		ich1_uzd_Ctrl1_REG.four_tap_en = 0;


	/*Decide Output data format for scale down*/
	if (channel == _CHANNEL1) {
/*============H Scale-down============*/
		if (
			/*force to enter scaling down mode in 2D convert to 3D case for the horizontal start offset smoothness*/
			(Get_PANEL_SCALER_2D_3D_CVT_HWSHIFT_ENABLE() && scaler_2Dcvt3D_get_userStatus()) ||
			(ptInSize->nWidth > ptOutSize->nWidth)) {    /*H scale-down*/
			Hini = 0x80;//0xff;/*0x78;*/

			ich1_uzd_Initial_Value_REG.hor_ini = Hini;
			ich1_uzd_Scale_Ver_Factor_REG.hor_ini_int= 1;
			di_hsd_initial_value_reg.hor_ini = Hini;
			di_hsd_initial_value_reg.hor_ini_int= 1;
			a = 5;

			if (panorama && (!Scaler_DispGetScaleStatus(SLR_MAIN_DISPLAY, SLR_SCALE_H_UP))) {  /*CSW+ 0960830 Non-linear SD*/
				S1 = (ptOutSize->nWidth) >> 2;
				S2 = (ptOutSize->nWidth) - S1 * 2;
				/*=vv==old from TONY, if no problem, use this=vv==*/
				nFactor = (unsigned int)(((ptInSize->nWidth) << 21) - ((unsigned int)Hini << 13));
				/*=vv==Thur debugged=vv==*/
				/*nFactor = ((((unsigned long long)(ptInSize->nWidth))*(ptOutSize->nWidth-1))<<21) / ptOutSize->nWidth;*/
				/*===================*/
				nFactor = nFactor / ((2 * a + 1) * S1 + (a + 1) * S2 - a) * a;
				if(S1 == 0)
					D = 0;
				else
					D = nFactor / a / S1;
				nFactor = SHR((nFactor + 1), 1); /*rounding*/
				D = SHR(D + 1, 1); /*rounding*/
				VIPprintf("\nPANORAMA2 TEST 111\n");
				VIPprintf("nPANORAMA2 Factor = %d\n", nFactor);
				VIPprintf("PANORAMA2 S1 =%d, S2 =%d, D = %d\n", S1, S2, D);

				if (nFactor < 1048576) {
					VIPprintf("PANORAMA2 Can't do nonlinear SD \n");
					/*nFactor = (unsigned int)(((ptInSize->nWidth)<<21) - ((unsigned int)Hini<<13)) / (ptOutSize->nWidth-1);*/
					if (ptOutSize->nWidth == 0) {
						VIPprintf("output width = 0 !!!\n");
						nFactor = 0;
					}else{
						nFactor = (unsigned int)(((ptInSize->nWidth)<<21)) / (ptOutSize->nWidth);
					}
					nFactor = SHR(nFactor + 1, 1); /*rounding*/
					VIPprintf("PANORAMA2 nFactor =%x, input Wid =%d, Out Wid =%d\n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
					S1 = 0;
					S2 = ptOutSize->nWidth;
					D = 0;
				}
			} else {
#ifdef CONFIG_CUSTOMER_1
				if (COsdCtrlGetOverSampling() && (info->ucMode_Curr == _MODE_720P60 || info->ucMode_Curr == _MODE_720P50 || info->ucMode_Curr == _MODE_480P || info->ucMode_Curr == _MODE_480I)) {
					/*nFactor = (unsigned int)(((ptInSize->nWidth)<<19) - ((unsigned int)Hini<<11)) / (ptOutSize->nWidth-1) *2;*/
					nFactor = (unsigned int)(((ptInSize->nWidth)<<19)) / (ptOutSize->nWidth) * 2;
				} else
#endif
				{
					/*nFactor = (unsigned int)(((ptInSize->nWidth)<<21) - ((unsigned int)Hini<<13)) / (ptOutSize->nWidth-1);*/
					if (ptOutSize->nWidth == 0) {
						VIPprintf("output width = 0 !!!\n");
						nFactor = 0;
					} else if (ptInSize->nWidth > 4095) {
						nFactor = (unsigned int)((((ptInSize->nWidth - 0) << 19) / (ptOutSize->nWidth - 0)) << 1);
					} else if (ptInSize->nWidth > 2047) {
						nFactor = (unsigned int)(((ptInSize->nWidth - 0) << 20) / (ptOutSize->nWidth - 0));
					} else {
						nFactor = (unsigned int)(((ptInSize->nWidth - 0) << 21) / (ptOutSize->nWidth - 0));
						/*nFactor = (unsigned int)(((ptInSize->nWidth)<<21) / (ptOutSize->nWidth));*/ /*old*/
						nFactor = SHR(nFactor + 1, 1); /*rounding*/
					}
				}
				VIPprintf("nFactor =%d, input Wid =%d, Out Wid =%d\n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
				S1 = 0;
				S2 = ptOutSize->nWidth;
				D = 0;
			}
			if(nFactor && !(nFactor & 0x1ffffff)){//factor only has 25 bits
				nFactor = 0x1ffffff;
				VIPprintf("############[UZD]hwid_factor size overflow############\n");
			}
		} else {
			nFactor = 0x100000;
			S1 = 0;
			S2 = ptOutSize->nWidth;
			D = 0;
		}

		/*data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);*/
		ich1_uzd_Scale_Hor_Factor_REG.hor_fac = nFactor;

/*VIPprintf("reg_seg1 =%x, reg_Seg_all =%x\n", ich1_uzd_Hor_Segment_REG.nl_seg1, ich1_uzd_Hor_Segment_REG.regValue);*/
		VIPprintf("nFactor =%x, input_Wid =%d, Output_Wid =%d\n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);

/*================V Scale-down=================*/
		if (ptInSize->nLength > ptOutSize->nLength) {    /*V scale-down*/
/*			ich1_uzd_Ctrl0_REG.buffer_mode = 0x02;*/	/*buffer assign to vertical uzd*/
			Vini = 0xff;/*0x78;*/
			ich1_uzd_Initial_Value_REG.ver_ini = Vini;
			ich1_uzd_Initial_Value_REG.ver_ini_l = Vini;
			/*nFactor = (unsigned int)((ptInSize->nLength <<20) - ((unsigned int)Vini<<12)) / (ptOutSize->nLength - 1);*/
			if (ptOutSize->nLength == 0) {
				VIPprintf("output length = 0 !!!\n");
				nFactor = 0;
			} else {
				if ((ptInSize->nLength >= 1080) && (ptOutSize->nLength <= 544)) {
				/*frank@1018 sync with pacific to solve 3d vide 1920X2205 scaler down fail*/
				/*nFactor = (unsigned int)(((ptInSize->nLength-1)<<21) / (ptOutSize->nLength-1));*/
					/*nFactor = (unsigned int)(((unsigned long long)(ptInSize->nLength-1)<<21) / (ptOutSize->nLength-1));*/
					tmpLength = ((unsigned long long)(ptInSize->nLength - 1) << 21);
#if CONFIG_FIRMWARE_IN_KERNEL
					do_div(tmpLength, (ptOutSize->nLength - 1));
					nFactor = tmpLength;
#else
					nFactor = tmpLength/(ptOutSize->nLength - 1);
#endif
				} else {
					/*frank@1018 sync with pacific to solve 3d vide 1920X2205 scaler down fail*/
					/*nFactor = (unsigned int)(((ptInSize->nLength)<<21) / (ptOutSize->nLength));*/
					/*nFactor = (unsigned int)(((unsigned long long)(ptInSize->nLength)<<21) / (ptOutSize->nLength));*/
					tmpLength = ((unsigned long long)(ptInSize->nLength) << 21);
#if CONFIG_FIRMWARE_IN_KERNEL
					do_div(tmpLength, ptOutSize->nLength);
					nFactor = tmpLength;
#else
					nFactor = tmpLength/(ptOutSize->nLength);
#endif
				}
			}
			VIPprintf("Ch1 Ver: CAP =%d, Disp =%d, factor =%d\n", ptInSize->nLength, ptOutSize->nLength, nFactor);
			nFactor = SHR(nFactor + 1, 1); /*rounding*/
			if(nFactor && !(nFactor & 0x1ffffff)){//factor only has 25 bits
				nFactor = 0x1ffffff;
				VIPprintf("############[UZD]vlen_factor size overflow############\n");
			}
			ich1_uzd_Scale_Ver_Factor_REG.ver_fac = nFactor;
		} else {
			ich1_uzd_Scale_Ver_Factor_REG.ver_fac = 0x100000;
		}

/*	ich1_uzd_Ctrl0_REG.   = 1;*/
/*	ich1_uzd_Ctrl0_REG.sort_fmt = 1;*/
/*	CLR_422_Fr_SD();*/

		if (Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE() && Get_PANEL_3D_LINE_ALTERNATIVE_SUPPORT_ENABLE()) {
			ich1_uzd_Initial_Value_REG.ver_ini_l = 255;	/*Elsie, jyyang 20140604*/
			if (Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)channel, SLR_DISP_3D_3DTYPE) == SLR_3D_SIDE_BY_SIDE_HALF) {
				ich1_uzd_Ctrl0_REG.sel_3d_en = 1;
			} else {
				ich1_uzd_Ctrl0_REG.sel_3d_en = 0;
			}
		}
		ich1_uzd_Ctrl1_REG.lp121_en = 0;

		IoReg_Write32(SCALEDOWN_ICH1_UZD_Ctrl0_reg, ich1_uzd_Ctrl0_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH1_UZD_Ctrl1_reg, ich1_uzd_Ctrl1_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH1_UZD_Scale_Ver_Factor_reg, ich1_uzd_Scale_Ver_Factor_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH1_UZD_Initial_Value_reg, ich1_uzd_Initial_Value_REG.regValue);
		/*data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);*/
		IoReg_Write32(SCALEDOWN_ICH1_UZD_Scale_Hor_Factor_reg, ich1_uzd_Scale_Hor_Factor_REG.regValue);
	}

	if (channel == _CHANNEL2) {
#if 1

		if (ptInSize->nWidth > ptOutSize->nWidth) {    /*H scale-down*/
			Hini = 0xff;/*0x78;*/
			ich2_uzd_Initial_Value_REG.hor_ini = Hini;
#ifdef CONFIG_CUSTOMER_1
			if (COsdCtrlGetOverSampling() && (info->ucMode_Curr == _MODE_720P60 || info->ucMode_Curr == _MODE_720P50 || info->ucMode_Curr == _MODE_480P || info->ucMode_Curr == _MODE_480I))
				/*nFactor = (unsigned int)((ptInSize->nWidth<<19) - (Hini<<11)) / (ptOutSize->nWidth-1) *2;*/
				nFactor = (unsigned int)((ptInSize->nWidth << 19)) / (ptOutSize->nWidth) * 2;
			else
#endif
			{
				/*frank@0108 add for code exception*/
				if (ptOutSize->nWidth == 0) {
					VIPprintf("output width = 0 !!!\n");
					nFactor = 0;
				} else if(ptInSize->nWidth>4095){
					nFactor = (unsigned int)((((ptInSize->nWidth-0)<<19) / (ptOutSize->nWidth-0))<<1);
				}
				else if(ptInSize->nWidth>2047){
					nFactor = (unsigned int)(((ptInSize->nWidth-0)<<20) / (ptOutSize->nWidth-0));
				}
				else {
					nFactor = (unsigned int)((ptInSize->nWidth<<21)) / (ptOutSize->nWidth);
					nFactor = SHR(nFactor + 1, 1); //rounding
				}
			}

			ich2_uzd_Scale_Hor_Factor_REG.hor_fac = nFactor;
		} else {
			ich2_uzd_Scale_Hor_Factor_REG.hor_fac = 0x100000;
		}
		ich2_uzd_H_Output_Size_REG.h_output_size = ptOutSize->nWidth;

		if (ptInSize->nLength > ptOutSize->nLength) {    /*V scale-down*/
/*			ich2_uzd_Ctrl0_REG.buffer_mode = 0x02;*/
			Vini = 0xff;/*0x78;*/
			ich2_uzd_Initial_Value_REG.ver_ini = Vini;
			/*nFactor = (unsigned int)((ptInSize->nLength << 20) - (Vini<<12)) / (ptOutSize->nLength - 1);*/
			/*frank@0108 add for code exception*/
			if (ptOutSize->nLength == 0) {
				VIPprintf("output length = 0 !!!\n");
				nFactor = 0;
			} else {
				if((ptInSize->nLength>=1080) && (ptOutSize->nLength<=544)){
				//frank@1018 sync with pacific to solve 3d vide 1920X2205 scaler down fail
				//nFactor = (unsigned int)(((ptInSize->nLength-1)<<21) / (ptOutSize->nLength-1));
					//nFactor = (unsigned int)(((unsigned long long)(ptInSize->nLength-1)<<21) / (ptOutSize->nLength-1));
					tmpLength = ((unsigned long long)(ptInSize->nLength-1)<<21);
#if CONFIG_FIRMWARE_IN_KERNEL
					do_div(tmpLength, (ptOutSize->nLength-1));
					nFactor = tmpLength;
#else
					nFactor = tmpLength/(ptOutSize->nLength-1);
#endif
				}
				else{
					//frank@1018 sync with pacific to solve 3d vide 1920X2205 scaler down fail
					//nFactor = (unsigned int)(((ptInSize->nLength)<<21) / (ptOutSize->nLength));
					//nFactor = (unsigned int)(((unsigned long long)(ptInSize->nLength)<<21) / (ptOutSize->nLength));
					tmpLength = ((unsigned long long)(ptInSize->nLength)<<21);
#if CONFIG_FIRMWARE_IN_KERNEL
					do_div(tmpLength, (ptOutSize->nLength));
					nFactor = tmpLength;
#else
					nFactor = tmpLength/(ptOutSize->nLength);
#endif
				}
			}
			nFactor = SHR(nFactor + 1, 1); /*rounding*/
			ich2_uzd_Scale_Ver_Factor_REG.ver_fac = nFactor;
		} else {
/*			ich2_uzd_Ctrl0_REG.buffer_mode = 0;*/
			ich2_uzd_Scale_Ver_Factor_REG.ver_fac = 0x100000;
		}

/*	ich2_uzd_Ctrl0_REG.output_fmt = 1;*/
/*	CLR_422_Fr_SD();*/

		IoReg_Write32(SCALEDOWN_ICH2_UZD_Ctrl0_reg, ich2_uzd_Ctrl0_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_Ctrl1_reg, ich2_uzd_Ctrl1_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_H_Output_Size_reg, ich2_uzd_H_Output_Size_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_Scale_Hor_Factor_reg, ich2_uzd_Scale_Hor_Factor_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_Scale_Ver_Factor_reg, ich2_uzd_Scale_Ver_Factor_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_Initial_Value_reg, ich2_uzd_Initial_Value_REG.regValue);
#endif
	}

	source = fwif_vip_source_check(3, 0);
	if (source == VIP_QUALITY_CVBS_NTSC || source == VIP_QUALITY_CVBS_PAL) {
		/*drvif_color_ultrazoom_set_scaledown_LPF(channel);*/ /*mark it. i_edgesmooth need to use line buff 2014/09/30 by lyida*/
	}
}


/*===============================================================*/
/**
 * CScalerSetScaleDown
 * This function is used to set scaling-down registers and only for DI HSD
 *
 * @param <info> { display-info struecture }
 * @return { none }
 * @note
 * It can be linear or non-linear either, based on the non-linear flag condition:
 */
/*void Scaler_SetScaleDown(unsigned char display)*/
void drvif_color_ultrazoom_set_scale_down_di_hsd(unsigned char channel, SIZE *ptInSize, SIZE *ptOutSize, unsigned char panorama)
{
/*	unsigned char FlatSdFac = 72;*/ /*This value must large than 64, scale down factor can't exceed 4 times*/
/*	unsigned short w1;*/
/*	unsigned short w2;*/
	unsigned char SDRatio;
	unsigned char SDFilter = 0;
	unsigned int tmp_data;
	signed short *coef_pt;

	unsigned char i;

	unsigned int nFactor, D;
	unsigned char Hini, Vini, a;
	unsigned short S1, S2;

	unsigned char source = 255;

	unsigned long long tmpLength = 0;

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
	scaledown_ich1_uzd_ctrl0_RBUS					ich1_uzd_Ctrl0_REG;
	scaledown_ich1_uzd_ctrl1_RBUS					ich1_uzd_Ctrl1_REG;
	//scaledown_ich1_uzd_scale_hor_factor_RBUS		ich1_uzd_Scale_Hor_Factor_REG;
	scaledown_ich1_uzd_scale_ver_factor_RBUS		ich1_uzd_Scale_Ver_Factor_REG;
	scaledown_ich1_uzd_initial_value_RBUS			ich1_uzd_Initial_Value_REG;

	hsd_dither_di_hsd_ctrl0_RBUS					di_hsd_ctrl0_reg;
	hsd_dither_di_hsd_scale_hor_factor_RBUS 		di_hsd_scale_hor_factor_reg;
	hsd_dither_di_hsd_initial_value_RBUS			di_hsd_initial_value_reg;
	hsd_dither_di_hsd_hor_segment_RBUS				di_hsd_hor_segment_reg;
	/*data_path_select_RBUS 				data_path_select_reg;*/

	scaledown_ich2_uzd_ctrl0_RBUS				ich2_uzd_Ctrl0_REG;
	scaledown_ich2_uzd_ctrl1_RBUS				ich2_uzd_Ctrl1_REG;
	scaledown_ich2_uzd_h_output_size_RBUS		ich2_uzd_H_Output_Size_REG;
	scaledown_ich2_uzd_scale_hor_factor_RBUS 	ich2_uzd_Scale_Hor_Factor_REG;
	scaledown_ich2_uzd_scale_ver_factor_RBUS	ich2_uzd_Scale_Ver_Factor_REG;
	scaledown_ich2_uzd_initial_value_RBUS			ich2_uzd_Initial_Value_REG;


	ich1_uzd_Ctrl0_REG.regValue		= IoReg_Read32(SCALEDOWN_ICH1_UZD_Ctrl0_reg);
	ich1_uzd_Ctrl1_REG.regValue		= IoReg_Read32(SCALEDOWN_ICH1_UZD_Ctrl1_reg);

	di_hsd_ctrl0_reg.regValue = IoReg_Read32(HSD_DITHER_DI_HSD_Ctrl0_reg);
	di_hsd_hor_segment_reg.regValue = IoReg_Read32(HSD_DITHER_DI_HSD_Hor_Segment_reg);
	ich1_uzd_Scale_Ver_Factor_REG.regValue = IoReg_Read32(SCALEDOWN_ICH1_UZD_Scale_Ver_Factor_reg);

	ich1_uzd_Initial_Value_REG.regValue	= IoReg_Read32(SCALEDOWN_ICH1_UZD_Initial_Value_reg);

	ich2_uzd_Ctrl0_REG.regValue		= IoReg_Read32(SCALEDOWN_ICH2_UZD_Ctrl0_reg);
	ich2_uzd_Ctrl1_REG.regValue		= IoReg_Read32(SCALEDOWN_ICH2_UZD_Ctrl1_reg);
	ich2_uzd_H_Output_Size_REG.regValue = IoReg_Read32(SCALEDOWN_ICH2_UZD_H_Output_Size_reg);
	ich2_uzd_Initial_Value_REG.regValue	= IoReg_Read32(SCALEDOWN_ICH2_UZD_Initial_Value_reg);

	if (channel == _CHANNEL1) {		/*channel 1*/
		g_ucIsHScalerDown = 0;
		g_ucIsVScalerDown = 0;
		g_ucIsH444To422 = 0;
	}

#define TMPMUL	(16)

/*o============H scale-down=============o*/
	if (
		/*force to enter scaling down mode in 2D convert to 3D case for the horizontal start offset smoothness*/
		(Get_PANEL_SCALER_2D_3D_CVT_HWSHIFT_ENABLE() && scaler_2Dcvt3D_get_userStatus()) ||
		(ptInSize->nWidth > ptOutSize->nWidth)) {
		/*o-------calculate scaledown ratio to select one of different bandwith filters.--------o*/
#if 0
		SDRatio = ptOutSize->nWidth * TMPMUL / ptInSize->nWidth;
		if (SDRatio > (TMPMUL * 2))	/*sharp, wider bw*/
			SDFilter = 2;
		else if (SDRatio <= (TMPMUL * 2) && SDRatio > (TMPMUL * 3 / 2))/*Mid*/
			SDFilter = 1;
		else		/*blurest, narrow bw*/
			SDFilter = 0;
#endif
		if (ptOutSize->nWidth == 0) {
			VIPprintf("output width = 0 !!!\n");
			SDRatio = 0;
		} else {
			SDRatio = (ptInSize->nWidth*TMPMUL) / ptOutSize->nWidth;
		}

		/*VIPprintf("CSW SDRatio number =%d\n", SDRatio);*/

		if (SDRatio <= ((TMPMUL * 3)/2))	/*<1.5 sharp, wider bw*/
			SDFilter = 2;
		else if (SDRatio <= (TMPMUL * 2) && SDRatio > ((TMPMUL * 3)/2))	/*Mid*/
			SDFilter = 1;
		else		/*blurest, narrow bw*/
			SDFilter = 0;

		/*o---------------- fill coefficients into access port--------------------o*/
		/*coef_pt = tScaleDown_COEF_TAB[SD_H_Coeff_Sel[SDFilter]];*/
		coef_pt = &(ScaleDown_COEF_TAB.FIR_Coef_Table[SD_H_Coeff_Sel[SDFilter]][0]);
		/*DC Value Check*/
		if (SCALING_LOG) {
			for(i=0; i<8; i++) {
				if((*(coef_pt+i)+*(coef_pt+i+16)+*(coef_pt+31-i)+*(coef_pt+15-i)) != 1024)
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
			}
		}

		if (channel == _CHANNEL1) {		/*channel 1*/
			/*data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);*/
			if (di_hsd_flag) {/*Will modify go DI path and enable di path uzd*/
				di_hsd_ctrl0_reg.h_y_table_sel = 0;	/*TAB1*/
				di_hsd_ctrl0_reg.h_c_table_sel = 0;	/*TAB1*/
			}

			for (i = 0 ; i < 16 ; i++) {
				tmp_data = ((unsigned int)(*coef_pt++)<<16);
				tmp_data += ((unsigned int)(*coef_pt++)) & 0xFFFF;
				/*data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);*/
				if (di_hsd_flag) {/*Will modify go DI path and enable di path uzd*/
					IoReg_Write32(HSD_DITHER_DI_UZD_FIR_Coef_Tab1_C0_reg + i * 4, tmp_data);
				} else {
					IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab1_C0_reg + i * 4, tmp_data);
				}
			}

			g_ucIsHScalerDown = 1;
			g_ucSDFHSel = SDFilter;
		} else {			/*channel 2*/
#if 1 /*sub channel  (jyyang)*/
			ich2_uzd_Ctrl1_REG.h_c_filter = (SDFilter+1)%3;
			ich2_uzd_Ctrl1_REG.h_y_filter = ich2_uzd_Ctrl1_REG.h_c_filter;
#endif
			/*
			if (SDFilter == 0)	{		//narrow
				ich2_uzd_Ctrl1_REG.h_c_filter = 1;
				ich2_uzd_Ctrl1_REG.h_y_filter = 1;
			} else if (SDFilter == 1)	{	//mid
				ich2_uzd_Ctrl1_REG.h_c_filter = 2;
				ich2_uzd_Ctrl1_REG.h_y_filter = 2;
			} else {					//wider
				ich2_uzd_Ctrl1_REG.h_c_filter = 0;
				ich2_uzd_Ctrl1_REG.h_y_filter = 0;
			}
			*/
		}
	}


/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

	/* for 4K scaler down grid line*/
	if (ptInSize->nWidth > 3000 && ptOutSize->nWidth <= 1366 && ich1_uzd_Ctrl0_REG.v_zoom_en == 1)
		ich1_uzd_Ctrl1_REG.four_tap_en = 1;
	else
		ich1_uzd_Ctrl1_REG.four_tap_en = 0;


	/*Decide Output data format for scale down*/
	if (channel == _CHANNEL1) {
/*============H Scale-down============*/
		if (
			/*force to enter scaling down mode in 2D convert to 3D case for the horizontal start offset smoothness*/
			(Get_PANEL_SCALER_2D_3D_CVT_HWSHIFT_ENABLE() && scaler_2Dcvt3D_get_userStatus()) ||
			(ptInSize->nWidth > ptOutSize->nWidth)) {    /*H scale-down*/
			Hini = 0x80;//0xff;/*0x78;*/

			ich1_uzd_Initial_Value_REG.hor_ini = Hini;
			ich1_uzd_Scale_Ver_Factor_REG.hor_ini_int=1;
			di_hsd_initial_value_reg.hor_ini = Hini;
			di_hsd_initial_value_reg.hor_ini_int= 1;
			a = 5;

			if (panorama && (!Scaler_DispGetScaleStatus(SLR_MAIN_DISPLAY, SLR_SCALE_H_UP))) {  /*CSW+ 0960830 Non-linear SD*/
				S1 = (ptOutSize->nWidth) >> 2;
				S2 = (ptOutSize->nWidth) - S1 * 2;
				/*=vv==old from TONY, if no problem, use this=vv==*/
				nFactor = (unsigned int)(((ptInSize->nWidth) << 21) - ((unsigned int)Hini << 13));
				/*=vv==Thur debugged=vv==*/
				/*nFactor = ((((unsigned long long)(ptInSize->nWidth))*(ptOutSize->nWidth-1))<<21) / ptOutSize->nWidth;*/
				/*===================*/
				nFactor = nFactor / ((2 * a + 1) * S1 + (a + 1) * S2 - a) * a;
				if(S1 == 0)
					D = 0;
				else
					D = nFactor / a / S1;
				nFactor = SHR((nFactor + 1), 1); /*rounding*/
				D = SHR(D + 1, 1); /*rounding*/
				VIPprintf("\nPANORAMA2 TEST 111\n");
				VIPprintf("nPANORAMA2 Factor = %d\n", nFactor);
				VIPprintf("PANORAMA2 S1 =%d, S2 =%d, D = %d\n", S1, S2, D);

				if (nFactor < 1048576) {
					VIPprintf("PANORAMA2 Can't do nonlinear SD \n");
					/*nFactor = (unsigned int)(((ptInSize->nWidth)<<21) - ((unsigned int)Hini<<13)) / (ptOutSize->nWidth-1);*/
					if (ptOutSize->nWidth == 0) {
						VIPprintf("output width = 0 !!!\n");
						nFactor = 0;
					}else{
						nFactor = (unsigned int)(((ptInSize->nWidth)<<21)) / (ptOutSize->nWidth);
					}
					nFactor = SHR(nFactor + 1, 1); /*rounding*/
					VIPprintf("PANORAMA2 nFactor =%x, input Wid =%d, Out Wid =%d\n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
					S1 = 0;
					S2 = ptOutSize->nWidth;
					D = 0;
				}
			} else {
#ifdef CONFIG_CUSTOMER_1
				if (COsdCtrlGetOverSampling() && (info->ucMode_Curr == _MODE_720P60 || info->ucMode_Curr == _MODE_720P50 || info->ucMode_Curr == _MODE_480P || info->ucMode_Curr == _MODE_480I)) {
					/*nFactor = (unsigned int)(((ptInSize->nWidth)<<19) - ((unsigned int)Hini<<11)) / (ptOutSize->nWidth-1) *2;*/
					if (ptOutSize->nWidth == 0) {
						VIPprintf("output width = 0 !!!\n");
						nFactor = 0;
					}else{
						nFactor = (unsigned int)(((ptInSize->nWidth)<<19)) / (ptOutSize->nWidth) * 2;
					}
				} else
#endif
				{
					/*nFactor = (unsigned int)(((ptInSize->nWidth)<<21) - ((unsigned int)Hini<<13)) / (ptOutSize->nWidth-1);*/
					if (ptOutSize->nWidth == 0) {
						VIPprintf("output width = 0 !!!\n");
						nFactor = 0;
					} else if (ptInSize->nWidth > 4095) {
						//nFactor = (unsigned int)((((ptInSize->nWidth - 1) << 19) / (ptOutSize->nWidth - 1)) << 1);
						nFactor = (unsigned int)((((ptInSize->nWidth ) << 19) / (ptOutSize->nWidth )) << 1);
					} else if (ptInSize->nWidth > 2047) {
						//nFactor = (unsigned int)(((ptInSize->nWidth - 1) << 20) / (ptOutSize->nWidth - 1));
						nFactor = (unsigned int)(((ptInSize->nWidth ) << 20) / (ptOutSize->nWidth ));
					} else {
						//nFactor = (unsigned int)(((ptInSize->nWidth - 1) << 21) / (ptOutSize->nWidth - 1));
						nFactor = (unsigned int)(((ptInSize->nWidth ) << 21) / (ptOutSize->nWidth ));
						/*nFactor = (unsigned int)(((ptInSize->nWidth)<<21) / (ptOutSize->nWidth));*/ /*old*/
						nFactor = SHR(nFactor + 1, 1); /*rounding*/
					}
				}
				VIPprintf("nFactor =%d, input Wid =%d, Out Wid =%d\n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);
				S1 = 0;
				S2 = ptOutSize->nWidth;
				D = 0;
			}
			if(nFactor && !(nFactor & 0x1ffffff)){//factor only has 25 bits
				nFactor = 0x1ffffff;
				VIPprintf("############[UZD]hwid_factor size overflow############\n");
			}
		} else {
			nFactor = 0x100000;
			S1 = 0;
			S2 = ptOutSize->nWidth;
			D = 0;
		}

		/*data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);*/
		if (di_hsd_flag) {/*Will modify go DI path and enable di path uzd*/
			di_hsd_scale_hor_factor_reg.hor_fac = nFactor;
			di_hsd_hor_segment_reg.nl_seg2 = S2;
		}

/*VIPprintf("reg_seg1 =%x, reg_Seg_all =%x\n", ich1_uzd_Hor_Segment_REG.nl_seg1, ich1_uzd_Hor_Segment_REG.regValue);*/
		VIPprintf("nFactor =%x, input_Wid =%d, Output_Wid =%d\n", nFactor, ptInSize->nWidth, ptOutSize->nWidth);


/*	ich1_uzd_Ctrl0_REG.   = 1;*/
/*	ich1_uzd_Ctrl0_REG.sort_fmt = 1;*/
/*	CLR_422_Fr_SD();*/

		if (Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE() && Get_PANEL_3D_LINE_ALTERNATIVE_SUPPORT_ENABLE()) {
			ich1_uzd_Initial_Value_REG.ver_ini_l = 255;	/*Elsie, jyyang 20140604*/
			if (Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)channel, SLR_DISP_3D_3DTYPE) == SLR_3D_SIDE_BY_SIDE_HALF) {
				ich1_uzd_Ctrl0_REG.sel_3d_en = 1;
			} else {
				ich1_uzd_Ctrl0_REG.sel_3d_en = 0;
			}
		}
		ich1_uzd_Ctrl1_REG.lp121_en = 0;

		IoReg_Write32(SCALEDOWN_ICH1_UZD_Ctrl0_reg, ich1_uzd_Ctrl0_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH1_UZD_Ctrl1_reg, ich1_uzd_Ctrl1_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH1_UZD_Scale_Ver_Factor_reg, ich1_uzd_Scale_Ver_Factor_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH1_UZD_Initial_Value_reg, ich1_uzd_Initial_Value_REG.regValue);
		/*data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);*/
		if (di_hsd_flag) {/*Will modify go DI path and enable di path uzd*/
			IoReg_Write32(HSD_DITHER_DI_HSD_Ctrl0_reg, di_hsd_ctrl0_reg.regValue);
			IoReg_Write32(HSD_DITHER_DI_HSD_Initial_Value_reg, di_hsd_initial_value_reg.regValue);
			IoReg_Write32(HSD_DITHER_DI_HSD_Scale_Hor_Factor_reg, di_hsd_scale_hor_factor_reg.regValue);
			IoReg_Write32(HSD_DITHER_DI_HSD_Hor_Segment_reg, di_hsd_hor_segment_reg.regValue);
		}
	}

	if (channel == _CHANNEL2) {
#if 1

		if (ptInSize->nWidth > ptOutSize->nWidth) {    /*H scale-down*/
			Hini = 0xff;/*0x78;*/
			ich2_uzd_Initial_Value_REG.hor_ini = Hini;
#ifdef CONFIG_CUSTOMER_1
			if (COsdCtrlGetOverSampling() && (info->ucMode_Curr == _MODE_720P60 || info->ucMode_Curr == _MODE_720P50 || info->ucMode_Curr == _MODE_480P || info->ucMode_Curr == _MODE_480I))
				/*nFactor = (unsigned int)((ptInSize->nWidth<<19) - (Hini<<11)) / (ptOutSize->nWidth-1) *2;*/
				nFactor = (unsigned int)((ptInSize->nWidth << 19)) / (ptOutSize->nWidth) * 2;
			else
#endif
			{
				/*frank@0108 add for code exception*/
				if (ptOutSize->nWidth == 0) {
					VIPprintf("output width = 0 !!!\n");
					nFactor = 0;
				} else if(ptInSize->nWidth>4095){
					nFactor = (unsigned int)((((ptInSize->nWidth-0)<<19) / (ptOutSize->nWidth-0))<<1);
				}
				else if(ptInSize->nWidth>2047){
					nFactor = (unsigned int)(((ptInSize->nWidth-0)<<20) / (ptOutSize->nWidth-0));
				}
				else {
					nFactor = (unsigned int)((ptInSize->nWidth<<21)) / (ptOutSize->nWidth);
					nFactor = SHR(nFactor + 1, 1); //rounding
				}
			}

			ich2_uzd_Scale_Hor_Factor_REG.hor_fac = nFactor;
		} else {
			ich2_uzd_Scale_Hor_Factor_REG.hor_fac = 0x100000;
		}
		ich2_uzd_H_Output_Size_REG.h_output_size = ptOutSize->nWidth;

		if (ptInSize->nLength > ptOutSize->nLength) {    /*V scale-down*/
/*			ich2_uzd_Ctrl0_REG.buffer_mode = 0x02;*/
			Vini = 0xff;/*0x78;*/
			ich2_uzd_Initial_Value_REG.ver_ini = Vini;
			/*nFactor = (unsigned int)((ptInSize->nLength << 20) - (Vini<<12)) / (ptOutSize->nLength - 1);*/
			/*frank@0108 add for code exception*/
			if (ptOutSize->nLength == 0) {
				VIPprintf("output length = 0 !!!\n");
				nFactor = 0;
			} else {
				if((ptInSize->nLength>=1080) && (ptOutSize->nLength<=544)){
				//frank@1018 sync with pacific to solve 3d vide 1920X2205 scaler down fail
				//nFactor = (unsigned int)(((ptInSize->nLength-1)<<21) / (ptOutSize->nLength-1));
					//nFactor = (unsigned int)(((unsigned long long)(ptInSize->nLength-1)<<21) / (ptOutSize->nLength-1));
					tmpLength = ((unsigned long long)(ptInSize->nLength-1)<<21);
#if CONFIG_FIRMWARE_IN_KERNEL
					do_div(tmpLength, (ptOutSize->nLength-1));
					nFactor = tmpLength;
#else
					nFactor = tmpLength/(ptOutSize->nLength-1);
#endif
				}
				else{
					//frank@1018 sync with pacific to solve 3d vide 1920X2205 scaler down fail
					//nFactor = (unsigned int)(((ptInSize->nLength)<<21) / (ptOutSize->nLength));
					//nFactor = (unsigned int)(((unsigned long long)(ptInSize->nLength)<<21) / (ptOutSize->nLength));
					tmpLength = ((unsigned long long)(ptInSize->nLength)<<21);
#if CONFIG_FIRMWARE_IN_KERNEL
					do_div(tmpLength, (ptOutSize->nLength));
					nFactor = tmpLength;
#else
					nFactor = tmpLength/(ptOutSize->nLength);
#endif
				}
			}
			nFactor = SHR(nFactor + 1, 1); /*rounding*/
			ich2_uzd_Scale_Ver_Factor_REG.ver_fac = nFactor;
		} else {
/*			ich2_uzd_Ctrl0_REG.buffer_mode = 0;*/
			ich2_uzd_Scale_Ver_Factor_REG.ver_fac = 0x100000;
		}

/*	ich2_uzd_Ctrl0_REG.output_fmt = 1;*/
/*	CLR_422_Fr_SD();*/

		IoReg_Write32(SCALEDOWN_ICH2_UZD_Ctrl0_reg, ich2_uzd_Ctrl0_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_Ctrl1_reg, ich2_uzd_Ctrl1_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_H_Output_Size_reg, ich2_uzd_H_Output_Size_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_Scale_Hor_Factor_reg, ich2_uzd_Scale_Hor_Factor_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_Scale_Ver_Factor_reg, ich2_uzd_Scale_Ver_Factor_REG.regValue);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_Initial_Value_reg, ich2_uzd_Initial_Value_REG.regValue);
#endif
	}

	source = fwif_vip_source_check(3, 0);
	if (source == VIP_QUALITY_CVBS_NTSC || source == VIP_QUALITY_CVBS_PAL) {
		/*drvif_color_ultrazoom_set_scaledown_LPF(channel);*/ /*mark it. i_edgesmooth need to use line buff 2014/09/30 by lyida*/
	}
}




/*===============================================================*/
/**
 * CScalerSetRGB422ScaleDown
 * This function is used to set scaling-down registers if RGB format to do 444->422, including main and sub display.
 *
 * @param <info> { display-info struecture }
 * @return { none }
 * @note
 * It can be linear or non-linear either, based on the non-linear flag condition:
 */
/*void Scaler_SetScaleDown(unsigned char display)*/
void drvif_color_ultrazoom_scale_down_444_to_422(unsigned char channel, SIZE *ptInSize, SIZE *ptOutSize)
{

	unsigned char SDFilter = 0;
	unsigned int tmp_data;
	signed short *coef_pt;

	unsigned char i;

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
	scaledown_ich1_uzd_ctrl0_RBUS				ich1_uzd_Ctrl0_REG;
	scaledown_ich1_uzd_initial_value_RBUS			ich1_uzd_Initial_Value_REG;
	scaledown_ich1_uzd_scale_ver_factor_RBUS		ich1_uzd_Scale_Ver_Factor_REG;

	ich1_uzd_Ctrl0_REG.regValue		= IoReg_Read32(SCALEDOWN_ICH1_UZD_Ctrl0_reg);
	ich1_uzd_Initial_Value_REG.regValue	= IoReg_Read32(SCALEDOWN_ICH1_UZD_Initial_Value_reg);
	ich1_uzd_Scale_Ver_Factor_REG.regValue = IoReg_Read32(SCALEDOWN_ICH1_UZD_Scale_Ver_Factor_reg);

	if ((ptInSize->nWidth < ptOutSize->nWidth) && Scaler_DispGetStatus((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_CHANNEL), SLR_DISP_422CAP) && (Scaler_InputSrcGetType((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_CHANNEL)) == _SRC_VGA)) {    /*H no scale-down and It's 444->422*/
	    if (channel == _CHANNEL1) {
				/*SDFilter = 1;*/
				SDFilter = g_ucSDFH444To422Sel;
				/*fill coefficients into access port*/
				/*coef_pt = tScaleDown_COEF_TAB[SDFilter];*/
				coef_pt = &(ScaleDown_COEF_TAB.FIR_Coef_Table[SDFilter][0]);

				ich1_uzd_Ctrl0_REG.h_y_table_sel = 0;	/*TAB1*/
				ich1_uzd_Ctrl0_REG.h_c_table_sel = 0;	/*TAB1*/
				ich1_uzd_Ctrl0_REG.h_zoom_en = 1;
				ich1_uzd_Initial_Value_REG.hor_ini = 0x80;
				ich1_uzd_Scale_Ver_Factor_REG.hor_ini_int=1;

				for (i = 0 ; i < 16 ; i++) {
					tmp_data = ((unsigned int)(*coef_pt++) << 16);
					tmp_data += ((unsigned int)(*coef_pt++)) & 0xFFFF;
					IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab1_C0_reg+ i * 4, tmp_data);
			}

			IoReg_Write32(SCALEDOWN_ICH1_UZD_Ctrl0_reg, ich1_uzd_Ctrl0_REG.regValue);
			IoReg_Write32(SCALEDOWN_ICH1_UZD_Initial_Value_reg, ich1_uzd_Initial_Value_REG.regValue);
			IoReg_Write32(SCALEDOWN_ICH1_UZD_Scale_Ver_Factor_reg, ich1_uzd_Scale_Ver_Factor_REG.regValue);

			g_ucIsHScalerDown = 0;
			g_ucIsH444To422 = 1;
		}
	}
}

/*Will Add uzd selection flow sync frm Mac2*/
unsigned char Scaler_Get_di_hsd_flag(void)
{
	return di_hsd_flag;
}

static void Scaler_SelectCh1DIPath(void)
{
	vgip_data_path_select_RBUS data_path_select_reg;
	SCALER_DISP_CHANNEL display = (SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY);
	data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);
	VIPprintf("[%s-%s-%d]\n", __FILE__, __func__, __LINE__);

	if(display ==SLR_MAIN_DISPLAY)	{
	    if (Scaler_DispGetStatus((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY, SLR_DISP_THRIP) || Scaler_DispGetStatus((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY, SLR_DISP_RTNR)) {
			data_path_select_reg.uzd1_in_sel = _ENABLE;
			data_path_select_reg.xcdi_in_sel = _CHANNEL1;
		} else {
			data_path_select_reg.uzd1_in_sel = _DISABLE;
			data_path_select_reg.xcdi_in_sel = _CHANNEL1;
		}
	}
	else	{
	    if (Scaler_DispGetStatus((SCALER_DISP_CHANNEL)SLR_SUB_DISPLAY, SLR_DISP_THRIP) || Scaler_DispGetStatus((SCALER_DISP_CHANNEL)SLR_SUB_DISPLAY, SLR_DISP_RTNR)) {
			data_path_select_reg.uzd2_in_sel = _ENABLE;
			/*data_path_select_reg.xcdi_in_sel = _CHANNEL2;*/	//LiveZoom&Magnifier Application
		} else {
			data_path_select_reg.uzd2_in_sel = _DISABLE;
			/*data_path_select_reg.xcdi_in_sel = _CHANNEL2;*/	//LiveZoom&Magnifier Application
		}
	}

    VIPprintf("[trip = %d]\n", Scaler_DispGetStatus((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY, SLR_DISP_THRIP));
    VIPprintf("[rtnr = %d]\n", Scaler_DispGetStatus((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY, SLR_DISP_RTNR));
    IoReg_Write32(VGIP_Data_Path_Select_reg, data_path_select_reg.regValue);
}

static void Scaler_UpdateFlagAndDIWidth(void)
{
	//unsigned int uCalValue=0x00,
	unsigned int uDI_WID=0x00;
	SCALER_DISP_CHANNEL display = (SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY);

    /*In Mac2, use hsd in path to reduce bandwidth.
     * But hardware has line buffer limit,
     * so SLR_INPUT_DI_WID value depends on the conditions.
     */
    vgip_data_path_select_RBUS data_path_select_reg;
    data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);
#ifdef CONFIG_SDNR_CROP

	uDI_WID = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPH_ACT_WID);
	di_hsd_flag = FALSE;

	if(display ==SLR_SUB_DISPLAY){
		Scaler_DispSetInputInfoByDisp(display,SLR_INPUT_DI_WID, Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPH_ACT_WID));
		if ((Scaler_DispGetStatus(SLR_MAIN_DISPLAY, SLR_DISP_INTERLACE)&&(Get_Live_zoom_mode() == LIVE_ZOOM_ON)) || Scaler_DispGetStatus(SLR_SUB_DISPLAY, SLR_DISP_THRIP)) {
			Scaler_DispSetInputInfoByDisp((SCALER_DISP_CHANNEL)display,SLR_INPUT_DI_LEN, Scaler_DispGetInputInfoByDisp(SLR_SUB_DISPLAY, SLR_INPUT_IPV_ACT_LEN)<<1);
		} else {
			Scaler_DispSetInputInfoByDisp((SCALER_DISP_CHANNEL)display,SLR_INPUT_DI_LEN, Scaler_DispGetInputInfoByDisp(SLR_SUB_DISPLAY, SLR_INPUT_IPV_ACT_LEN));
		}
	} else {
		if (data_path_select_reg.uzd1_in_sel)	{
			if ((VD_27M_HSD960_DI5A == fw_video_get_27mhz_mode(display))&&(Get_DisplayMode_Src(display) == VSC_INPUTSRC_AVD)&&
				(Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPH_ACT_WID) == AVD_27M_VGIP_WIDTH))	{
				uDI_WID = AVD_DI_5A_WIDTH;
				di_hsd_flag = TRUE;
			}
	#if 1	// No DI Width Limitation
			else if (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPH_ACT_WID) > REDUCE_SDNR_WIDTH_LIMIT_THRESHOLD)
			{
	#if 0	// HSD only Scale down to 2k for DI limition
				// When Source W > Disp W, DI Wid need to scale down to Disp W, Disp W maybe small than Panel W(1920)
				uCalValue = MIN(Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPH_ACT_WID), Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_WID));
				// uRetVal = ((inVal * (unsigned int)uOutW * 100 / (unsigned int)uInW) + 55 )/100 ;
				uDI_WID = (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPH_ACT_WID) * uCalValue * 100 / Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPH_ACT_WID) + 55 ) / 100;
	#else
				uDI_WID = REDUCE_SDNR_WIDTH_LIMIT_THRESHOLD;
	#endif
				di_hsd_flag = TRUE;
			} else if ((Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPH_ACT_WID)> 1920) && (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPV_ACT_LEN) > 230)/*2880x576i case*/
        		&& (Scaler_DispGetStatus(display, SLR_DISP_INTERLACE) == 1)&& (Get_DisplayMode_Src(display) == VSC_INPUTSRC_HDMI))
            {
                uDI_WID = HDMI_INTERLACE_MAX_WID;
                di_hsd_flag = TRUE;
            } 
	#endif
		}
		Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_DI_WID, uDI_WID);

		if ((Scaler_DispGetStatus(display, SLR_DISP_INTERLACE))&&(display==SLR_MAIN_DISPLAY)) {
			if (Scaler_DispGetStatus(display, SLR_DISP_THRIP)) {
				Scaler_DispSetInputInfoByDisp(display,SLR_INPUT_DI_LEN, Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPV_ACT_LEN)<<1);
			} else {
				Scaler_DispSetInputInfoByDisp(display,SLR_INPUT_DI_LEN, Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPV_ACT_LEN));
			}
		}
		else
			Scaler_DispSetInputInfoByDisp(display,SLR_INPUT_DI_LEN, Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPV_ACT_LEN));
	}

#else
    if (data_path_select_reg.uzd1_in_sel) {
			Scaler_DispSetInputInfo(SLR_INPUT_DI_WID, Scaler_DispGetInputInfo(SLR_INPUT_CAP_WID));
			di_hsd_flag = TRUE;
    } else {
			Scaler_DispSetInputInfo(SLR_INPUT_DI_WID, Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID));
			di_hsd_flag = FALSE;
    }
#endif
    VIPprintf("[%s-%s-%d]\n", __FILE__, __func__, __LINE__);
    VIPprintf("DI_Wid = %d \n", Scaler_DispGetInputInfo(SLR_INPUT_DI_WID));
    VIPprintf("di_hsd_flag = %d \n", di_hsd_flag);

#if 1
	pr_notice("di_hsd_flag=%d, display=%d\n", di_hsd_flag, display);
	if(di_hsd_flag)
	{
		pr_notice("Disp=%d, SLR_INPUT_DI_WID=%d\n", display, Scaler_DispGetInputInfoByDisp((SCALER_DISP_CHANNEL)display,SLR_INPUT_DI_WID));
		pr_notice("Disp=%d, SLR_INPUT_DI_LEN=%d\n", display, Scaler_DispGetInputInfoByDisp((SCALER_DISP_CHANNEL)display,SLR_INPUT_DI_LEN));
	}
#endif
}
extern void scalerip_livezoom_updatesubmux(void);
extern void scalerip_updatesubmux(void);

void Scaler_AdjustPathAndInfo()
{
    Scaler_SelectCh1DIPath();
	scalerip_livezoom_updatesubmux();
	scalerip_updatesubmux();
    Scaler_UpdateFlagAndDIWidth();
}

extern unsigned char drvif_color_Get_DRV_SNR_Clock(SCALER_DISP_CHANNEL display, unsigned char flag);
extern void drvif_color_Set_DRV_SNR_Clock(SCALER_DISP_CHANNEL display, unsigned char En_flag);
void Scaler_AdjustPathAndInfo_HW_SNR()
{
	SCALER_DISP_CHANNEL display = (SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY);
	if (drvif_color_Get_DRV_SNR_Clock(display, 0) == 1) {
		drvif_color_Set_DRV_SNR_Clock(display, 0);
		/*frank@03272013 add below code to adjust Hscale down position to solve custom mode display window fail.*/
		Scaler_AdjustPathAndInfo();/*Will add. decide Uzd path*/
		drvif_color_Set_DRV_SNR_Clock(display, 1);
	} else {
		/*frank@03272013 add below code to adjust Hscale down position to solve custom mode display window fail.*/
		Scaler_AdjustPathAndInfo();/*Will add. decide Uzd path*/
	}
}

void drvif_color_ultrazoom_config_scaling_down(unsigned char panorama)
{
	SIZE inSize, outSize;
//	vgip_data_path_select_RBUS data_path_select_reg;
	SCALER_DISP_CHANNEL display = (SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY);
	scaledown_ich1_uzd_ctrl0_RBUS ich1_uzd_Ctrl0_REG;
	hsd_dither_di_hsd_ctrl0_RBUS di_hsd_ctrl0_reg;
#if TEST_IMD_BY_YPBPR_SCRIPT
	return;
#endif
	if (Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY) == SLR_MAIN_DISPLAY) {
#if 0
		// Move position for decide the DI Wid&Len
		/* always on for snr hw issue, elieli*/
		if (drvif_color_Get_DRV_SNR_Clock(0) == 1) {
		    drvif_color_Set_DRV_SNR_Clock(0);
			/*frank@03272013 add below code to adjust Hscale down position to solve custom mode display window fail.*/
			if (Scaler_DispGetStatus((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY, SLR_DISP_THRIP) || Scaler_DispGetStatus((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY, SLR_DISP_RTNR)) {	/*will added in future*/
				data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);
				data_path_select_reg.uzd1_in_sel = _ENABLE;
				data_path_select_reg.xcdi_in_sel = _CHANNEL1;
				IoReg_Write32(VGIP_Data_Path_Select_reg, data_path_select_reg.regValue);
			}

			Scaler_AdjustPathAndInfo();/*Will add. decide Uzd path*/
		    drvif_color_Set_DRV_SNR_Clock(1);
		} else {
			/*frank@03272013 add below code to adjust Hscale down position to solve custom mode display window fail.*/
			if (Scaler_DispGetStatus((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY, SLR_DISP_THRIP) || Scaler_DispGetStatus((SCALER_DISP_CHANNEL)SLR_MAIN_DISPLAY, SLR_DISP_RTNR)) {	/*will added in future*/
				data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);
				data_path_select_reg.uzd1_in_sel = _ENABLE;
				data_path_select_reg.xcdi_in_sel = _CHANNEL1;
				IoReg_Write32(VGIP_Data_Path_Select_reg, data_path_select_reg.regValue);
			}
			Scaler_AdjustPathAndInfo();/*Will add. decide Uzd path*/
		}
#endif
		//scalerip_livezoom_updatesubmux();
	}

	if (Scaler_DispGetInputInfo(SLR_INPUT_CHANNEL) == _CHANNEL1) {
		/* Scale down setup for Channel1*/
		scaledown_ich1_sdnr_444to422_ctrl_RBUS ich1_sdnr_444to422_ctrl_REG;
		ich1_uzd_Ctrl0_REG.regValue = IoReg_Read32(SCALEDOWN_ICH1_UZD_Ctrl0_reg);
		ich1_uzd_Ctrl0_REG.v_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_V_DOWN) != 0);
		ich1_uzd_Ctrl0_REG.buffer_mode = Scaler_DispGetStatus(display, SLR_DISP_FSYNC_VUZD);
		/*data_path_select_reg.regValue = IoReg_Read32(VGIP_Data_Path_Select_reg);*/

#if 1	//(CONFIG_ARCH_RTK284X)	// Allow HSD & HZD enable simultaneously
		di_hsd_ctrl0_reg.regValue = IoReg_Read32(HSD_DITHER_DI_HSD_Ctrl0_reg);
		di_hsd_ctrl0_reg.h_zoom_en = di_hsd_flag;
		IoReg_Write32(HSD_DITHER_DI_HSD_Ctrl0_reg, di_hsd_ctrl0_reg.regValue);

		ich1_uzd_Ctrl0_REG.h_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_H_DOWN) != 0);
#else
		if (di_hsd_flag) {/*Will modify go DI path and enable di path uzd*/
			hsd_dither_di_hsd_ctrl0_RBUS di_hsd_ctrl0_reg;
			ich1_uzd_Ctrl0_REG.h_zoom_en = 0;
			di_hsd_ctrl0_reg.regValue = IoReg_Read32(HSD_DITHER_DI_HSD_Ctrl0_reg);
			di_hsd_ctrl0_reg.h_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_H_DOWN) != 0);
			IoReg_Write32(HSD_DITHER_DI_HSD_Ctrl0_reg, di_hsd_ctrl0_reg.regValue);
		} else {
			//Disable DI HSD H Zoom Enable
			hsd_dither_di_hsd_ctrl0_RBUS di_hsd_ctrl0_reg;
			di_hsd_ctrl0_reg.h_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_H_DOWN) != 0);
			IoReg_Write32(HSD_DITHER_DI_HSD_Ctrl0_reg, di_hsd_ctrl0_reg.regValue);

			ich1_uzd_Ctrl0_REG.h_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_H_DOWN) != 0);
		}
#endif
	#ifdef CONFIG_SOURCE_ROTATE_ENABLE
		if (Scaler_Get_Rotate_Enable()) {
			ich1_uzd_Ctrl0_REG.argb_dummy_data = 0;
			ich1_uzd_Ctrl0_REG.argb_swap = 0;
			ich1_uzd_Ctrl0_REG.rgb_to_argb_en = 1;
		}
	#endif

#if TEST_PATTERN_GEN
		ich1_uzd_Ctrl0_REG.sort_fmt = FALSE; /*422*/
#else
#if 0//def CONFIG_I2RND_ENABLE
		//i2rnd sub path go 422 format & compression disable @Crixus 20160816
		if((display == SLR_MAIN_DISPLAY) && (Scaler_I2rnd_get_enable() == _ENABLE) && (vsc_i2rnd_sub_stage == I2RND_STAGE_MAIN_GET_RPC))
			ich1_uzd_Ctrl0_REG.sort_fmt = (Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC) || !(Scaler_DispGetStatus(display, SLR_DISP_422CAP)));
		else
#endif
		{
#ifdef CONFIG_DATA_FRAMESYNC_FORCE_422_CAP
			if (Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC)) {
				ich1_uzd_Ctrl0_REG.sort_fmt = !(Scaler_DispGetStatus(display, SLR_DISP_422CAP));
				rtd_printk(KERN_EMERG, "Ultrazoom", "ich1_uzd_Ctrl0_REG.sort_fmt=%x\n", ich1_uzd_Ctrl0_REG.sort_fmt);
			}
			else
#endif
				ich1_uzd_Ctrl0_REG.sort_fmt = (Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC) || (((display == SLR_MAIN_DISPLAY) && (dvrif_memory_compression_get_enable(display) == TRUE))||!(Scaler_DispGetStatus(display, SLR_DISP_422CAP))));
		}
#endif
		ich1_uzd_Ctrl0_REG.out_bit = Scaler_DispGetStatus(display, SLR_DISP_10BIT);
		ich1_uzd_Ctrl0_REG.video_comp_en = (Scaler_DispGetStatus(display, SLR_DISP_COMP) ? 1 : 0);
		ich1_uzd_Ctrl0_REG.truncationctrl = 0; /*avoid ypbpr & vga occur noise in gray level*/
		IoReg_Write32(SCALEDOWN_ICH1_UZD_Ctrl0_reg, ich1_uzd_Ctrl0_REG.regValue);

		/*write the default of sdnr_444to422_ctrl: jyyang*/
		ich1_sdnr_444to422_ctrl_REG.regValue = IoReg_Read32(SCALEDOWN_ICH1_sdnr_444to422_CTRL_reg);
		ich1_sdnr_444to422_ctrl_REG.cr_dly_cb = 0;
		ich1_sdnr_444to422_ctrl_REG.drop = 1;
		IoReg_Write32(SCALEDOWN_ICH1_sdnr_444to422_CTRL_reg, ich1_sdnr_444to422_ctrl_REG.regValue);

	} else {
#if 1
		/*Scale down Setup for Channel 2*/
		scaledown_ich2_uzd_ctrl0_RBUS ich2_uzd_Ctrl0_REG;
		ich2_uzd_Ctrl0_REG.regValue = IoReg_Read32(SCALEDOWN_ICH2_UZD_Ctrl0_reg);
		ich2_uzd_Ctrl0_REG.v_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_V_DOWN) != 0);
		ich2_uzd_Ctrl0_REG.buffer_mode = Scaler_DispGetStatus(display, SLR_DISP_FSYNC_VUZD);
		ich2_uzd_Ctrl0_REG.h_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_H_DOWN) != 0);
		ich2_uzd_Ctrl0_REG.output_fmt = (Scaler_DispGetStatus(display, SLR_DISP_422CAP) ? 0 : 1);
		ich2_uzd_Ctrl0_REG.video_comp_en = (Scaler_DispGetStatus(display, SLR_DISP_COMP) ? 1 : 0);
		IoReg_Write32(SCALEDOWN_ICH2_UZD_Ctrl0_reg, ich2_uzd_Ctrl0_REG.regValue);
#endif

	}


#if 1	//(CONFIG_ARCH_RTK284X)	// HSD first then HZD
	if (di_hsd_flag)	{
		inSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPV_ACT_LEN);
		inSize.nWidth = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPH_ACT_WID);
		outSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPV_ACT_LEN);
		outSize.nWidth = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DI_WID);

		drvif_color_ultrazoom_set_scale_down_di_hsd(display, &inSize, &outSize, panorama);
	}
#endif


	if (Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE() && (Scaler_Disp3dGetInfo(SLR_MAIN_DISPLAY, SLR_DISP_3D_3DTYPE) == SLR_3D_FRAME_PACKING)) {
		if (Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > 2200)
			inSize.nLength = 1080;
		else if (Scaler_InputSrcGetMainChType() == _SRC_HDMI)
			inSize.nLength = 720;
		else if (Scaler_InputSrcGetMainChType() == _SRC_VO)
			inSize.nLength = Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN) << Scaler_DispGetStatus(display, SLR_DISP_THRIP);
	} else if (Scaler_DispGetStatus(display, SLR_DISP_THRIP) ||
#if CONFIG_FIRMWARE_IN_KERNEL
		((Get_Live_zoom_mode() == LIVE_ZOOM_ON) && (Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY) == SLR_SUB_DISPLAY) && Scaler_DispGetStatus(SLR_SUB_DISPLAY, SLR_DISP_INTERLACE)))
#else
		(/*(Get_Live_zoom_mode() == LIVE_ZOOM_ON) &&*/ (Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY) == SLR_SUB_DISPLAY) && Scaler_DispGetStatus(SLR_SUB_DISPLAY, SLR_DISP_INTERLACE)))
#endif
	{
  #ifdef CONFIG_SDNR_CROP
		inSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_SDNRV_ACT_LEN);
  #else
		inSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPV_ACT_LEN) << 1;

		if (TRUE ==  fwif_scaler_decide_display_cut4line(Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY)))/*for delete 4 lines (Up 2 line and down 2 line)*/
			inSize.nLength = inSize.nLength - 4;
  #endif
	} else {
  #ifdef CONFIG_SDNR_CROP
		inSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_SDNRV_ACT_LEN);
  #else
		inSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPV_ACT_LEN);
  #endif
  		if(get_hdmi_4k_hfr_mode() == HDMI_4K120_2_1)
  		{
  			inSize.nLength = inSize.nLength >> 1;//4k2k 120 case to 4k1k
  		}
	}

  #ifdef CONFIG_SDNR_CROP
	inSize.nWidth = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_SDNRH_ACT_WID);
  #else
	if(di_hsd_flag && (Get_Live_zoom_mode() == LIVE_ZOOM_ON) && (Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY) == SLR_SUB_DISPLAY)) {
		inSize.nWidth = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DI_WID);
	} else {
		inSize.nWidth = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_IPH_ACT_WID);
	}
#endif

	if (Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE()) {
		if ((Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)display, SLR_DISP_3D_3DTYPE) == SLR_3D_FRAME_PACKING)) {
			if ((Scaler_DispGetInputInfo(SLR_INPUT_DISP_LEN) >> (Get_PANEL_3D_LINE_ALTERNATIVE_SUPPORT_ENABLE() ? 1 : 0)) < inSize.nLength)
				outSize.nLength = Scaler_DispGetInputInfo(SLR_INPUT_DISP_LEN) >> (Get_PANEL_3D_LINE_ALTERNATIVE_SUPPORT_ENABLE() ? 1 : 0);
			else
				outSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_CAP_LEN);
		} else {
			outSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_CAP_LEN);
		}
	} else {
		outSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_CAP_LEN);
	}
#ifdef CONFIG_SDNR_CROP
	/*if(di_hsd_flag){//By CONFIG_ARCH_RTK284X  HSD & UZD are independ each other
		outSize.nWidth = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_SDNRH_ACT_WID);
	}else*/{
		outSize.nWidth = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_CAP_WID);
	}
#else
	outSize.nWidth = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_CAP_WID);
#endif
	if (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_CHANNEL) == _CHANNEL1) {
		scaledown_ich1_ibuff_ctrli_buff_ctrl_RBUS ich1_ibuff_ctrl_BUFF_CTRL;
		ich1_ibuff_ctrl_BUFF_CTRL.regValue = IoReg_Read32(SCALEDOWN_ICH1_IBUFF_CTRLI_BUFF_CTRL_reg);
		ich1_ibuff_ctrl_BUFF_CTRL.ibuf_h_size = outSize.nWidth;
		ich1_ibuff_ctrl_BUFF_CTRL.ibuf_v_size = inSize.nLength;
		IoReg_Write32(SCALEDOWN_ICH1_IBUFF_CTRLI_BUFF_CTRL_reg, ich1_ibuff_ctrl_BUFF_CTRL.regValue);

	}else{
		scaledown_ich2_ibuff_ctrli_buff_ctrl_RBUS ich2_ibuff_ctrl_BUFF_CTRL;
		ich2_ibuff_ctrl_BUFF_CTRL.regValue = IoReg_Read32(SCALEDOWN_ICH2_IBUFF_CTRLI_BUFF_CTRL_reg);
		ich2_ibuff_ctrl_BUFF_CTRL.ibuf_h_size = outSize.nWidth;
		ich2_ibuff_ctrl_BUFF_CTRL.ibuf_v_size = inSize.nLength;
		IoReg_Write32(SCALEDOWN_ICH2_IBUFF_CTRLI_BUFF_CTRL_reg, ich2_ibuff_ctrl_BUFF_CTRL.regValue);
	}

	/*VIPprintf("[UZU] vLen In/Out =%d->%d\n", inSize.nLength, outSize.nLength);*/

	drvif_color_ultrazoom_set_scale_down(display, &inSize, &outSize, panorama);
	drvif_color_ultrazoom_scale_down_444_to_422(Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_CHANNEL), &inSize, &outSize);	/*CSW+ 0970324 for RGB to do 444->422 color will have sample error phase*/

	return;
}

unsigned char drvif_color_ultrazoom_scalerup_PR_mode(unsigned int LR_width)
{
	unsigned char pr_mode = NOT_PR_MODE;
	if (Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE() && (Get_PANEL_3D_LINE_ALTERNATIVE_SUPPORT_ENABLE() == TRUE) &&
		(Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), SLR_DISP_3D_3DTYPE) < SLR_3D_SIDE_BY_SIDE_HALF_CVT_2D) &&
		(Scaler_DispGetScaleStatus((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), SLR_SCALE_V_UP) != 0)) {
		if ((LR_width << 1) <= 3840 && (LR_width << 1) >= 1920)
			pr_mode = PR_2TAP_MODE;
		else if ((LR_width << 1) <= 1920)
			pr_mode = PR_4TAP_MODE;
		else
			pr_mode = NOT_PR_MODE;
	}
	VIPprintf("\n[3D]UZU_pr_mode =%x\n", pr_mode);
	return pr_mode;
}



unsigned char drvif_color_ultrazoom_check_3D_overscan_enable(void)
{
	unsigned char result = 0;
#ifdef ENABLE_SG_3D_SUPPORT_ALL_SOURCE_3D_MODE
	SLR_3D_TYPE cur3dtype = (SLR_3D_TYPE)Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), SLR_DISP_3D_3DTYPE);
	if (Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE() && (Get_PANEL_3D_LINE_ALTERNATIVE_SUPPORT_ENABLE() == FALSE)
		&& drvif_scaelr3d_decide_is_3D_display_mode() && drvif_scaler3d_decide_3d_SG_Disable_IDMA(cur3dtype)
		&& ((Scaler_InputSrcGetMainChType() != _SRC_VO) || (Scaler_DispGetInputInfo(SLR_INPUT_MODE_CURR) < _MODE_4k2kI30))) {
		result = TRUE;
	}
#endif
	return result;
}



/*[3D] 3D overscan for non-IDMA SG SBS/TaB 3D mode (should can be applied to PR SBS/TaB 3D too)*/
unsigned char drvif_color_ultrazoom_set_3D_overscan(SIZE *inSize)
{
	unsigned char result = 0;

  #ifdef ENABLE_SG_3D_SUPPORT_ALL_SOURCE_3D_MODE
	SLR_3D_TYPE cur3dtype = (SLR_3D_TYPE)Scaler_Disp3dGetInfo((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), SLR_DISP_3D_3DTYPE);
	if (drvif_color_ultrazoom_check_3D_overscan_enable() == TRUE) {
		extern void (*pOverscan_func)(stDISPLAY_OVERSCAN_DATA * pt_scan, SLR_RATIO_TYPE ratio_type);
		scaleup_dm_uzumain_h_partial_drop_RBUS h_partial_drop_reg;
		scaleup_dm_uzumain_v_partial_drop_RBUS v_partial_drop_reg;
		UINT16 ulResult_h, ulResult_v;
		UINT8 h_ratio = 100, v_ratio = 100;

		stDISPLAY_OVERSCAN_DATA scan_data;
		SLR_RATIO_TYPE ratio_type = Scaler_DispGetRatioMode2();
		scan_data.HStart = 0;
		scan_data.HWidth = inSize->nWidth;
		scan_data.VStart = 0;
		scan_data.VHeight = inSize->nLength;
		if (pOverscan_func)
			pOverscan_func(&scan_data, ratio_type);

		VIPprintf("[3D] type[%d], 3D overscan =(%d,%d)/(%d,%d)\n", cur3dtype, scan_data.HStart, scan_data.VStart, scan_data.HWidth, scan_data.VHeight);

		ulResult_h = scan_data.HStart;
		ulResult_v = scan_data.VStart;

		/*UZU input size align to 2*/
		if (ulResult_h % 2)
			ulResult_h += 1;

		inSize->nWidth = inSize->nWidth - (2 * ulResult_h);
		h_partial_drop_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg);
		h_partial_drop_reg.hor_m_back_drop = ulResult_h;
		h_partial_drop_reg.hor_m_front_drop = ulResult_h;
		IoReg_Write32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg, h_partial_drop_reg.regValue);

		inSize->nLength = inSize->nLength - (2 * ulResult_v);
		v_partial_drop_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg);
		v_partial_drop_reg.ver_m_back_drop = ulResult_v;
		v_partial_drop_reg.ver_m_front_drop = ulResult_v;
		IoReg_Write32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg, v_partial_drop_reg.regValue);

		VIPprintf("[3D][overscan] H/V ratio =%d/%d, drop =%d/%d\n", h_ratio, v_ratio, ulResult_h, ulResult_v);

		result = ((ulResult_h != 0) || (ulResult_v != 0));
	}
  #endif

	return result;
}


void drvif_color_scaler_set_subscaleup_hcoef(unsigned char display, DRV_FIR_Coef *ptr)/*add for Merlin2 (jyyang_2016/06/15)*/
{
	signed short *coef_pt;
	unsigned char i, status;
	unsigned short cnt = 10000;
	short c[4], p;

	scaleup_ds_uzu_ctrl_RBUS ds_uzu_ctrl_REG;
	scaleup_coef_table_rw_ctl_RBUS coef_table_rw_ctl_REG;
	scaleup_coef_table_ctl_0_RBUS coef_table_ctl_0_REG;
	scaleup_coef_table_ctl_1_RBUS coef_table_ctl_1_REG;
	scaleup_coef_table_ctl_RBUS coef_table_ctl_REG;


	if (display == SLR_SUB_DISPLAY) {	/*0:main / 1:sub*/

		ds_uzu_ctrl_REG.regValue = IoReg_Read32(SCALEUP_DS_UZU_Ctrl_reg);
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);

		/* H and V use table 2 */
		ds_uzu_ctrl_REG.h_table_sel = 1; // 0:tab1, 1:tab2
		ds_uzu_ctrl_REG.v_table_sel = 1;
		IoReg_Write32(SCALEUP_DS_UZU_Ctrl_reg, ds_uzu_ctrl_REG.regValue);

		/* sel and write sram_Tab (sub1)*/
		coef_table_rw_ctl_REG.coef_rw_en = 1;
		coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
		coef_table_rw_ctl_REG.coef_tab_sel = 5; /* 0:10tap-1, 1:10tap-2, 2:4tap-1, 3:4tap-2, 4:4tap-Dir, 5:sub1, 6:sub2*/
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* H Table Coefficient*/
		coef_pt = ptr->FIR_Coef;

		for (i = 0; i < 16; i++) {

			// FIR4t256p10bit ->FIR4t32p8bit
			p = i*8+3; // phase interval=8, ini=3
			c[1] = ((*(coef_pt+p+256))+2)>>2;
			c[2] = ((*(coef_pt+511-p))+2)>>2;
			c[3] = ((*(coef_pt+255-p))+2)>>2;
			c[0] = 256-(c[1]+c[2]+c[3]); // DC=256

			status = 1;
			cnt = 10000;

			coef_table_ctl_0_REG.coef0 = (c[0] & 0x0fff);
			coef_table_ctl_0_REG.coef1 = (c[1] & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

			coef_table_ctl_1_REG.coef2 = (c[2] & 0x0fff);
			coef_table_ctl_1_REG.coef3 = (c[3] & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

			coef_table_ctl_REG.coef_write = 1;
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			while ((cnt--) && (status)) { /* refer to write_gamma*/
				coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
				status =  coef_table_ctl_REG.coef_write;
			}
		}

		 /*  rw disable*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 0;
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* H use table 1*/
		ds_uzu_ctrl_REG.h_table_sel= 0;
		IoReg_Write32(SCALEUP_DS_UZU_Ctrl_reg, ds_uzu_ctrl_REG.regValue);
	}
}
void drvif_color_scaler_set_subscaleup_vcoef(unsigned char display, DRV_FIR_Coef *ptr)/*add for Merlin2 (jyyang_2016/06/15)*/
{
	signed short *coef_pt;
	unsigned char i, status;
	unsigned short cnt = 10000;
	short c[4], p;

	scaleup_ds_uzu_ctrl_RBUS ds_uzu_ctrl_REG;
	scaleup_coef_table_rw_ctl_RBUS coef_table_rw_ctl_REG;
	scaleup_coef_table_ctl_0_RBUS coef_table_ctl_0_REG;
	scaleup_coef_table_ctl_1_RBUS coef_table_ctl_1_REG;
	scaleup_coef_table_ctl_RBUS coef_table_ctl_REG;


	if (display == SLR_SUB_DISPLAY) {	/*0:main / 1:sub*/

		ds_uzu_ctrl_REG.regValue = IoReg_Read32(SCALEUP_DS_UZU_Ctrl_reg);
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);

		/* H and V use table 1 */
		ds_uzu_ctrl_REG.h_table_sel = 0; // 0:tab1, 1:tab2
		ds_uzu_ctrl_REG.v_table_sel = 0;
		IoReg_Write32(SCALEUP_DS_UZU_Ctrl_reg, ds_uzu_ctrl_REG.regValue);

		/* sel and write sram_Tab (sub2)*/
		coef_table_rw_ctl_REG.coef_rw_en = 1;
		coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
		coef_table_rw_ctl_REG.coef_tab_sel = 6; /* 0:10tap-1, 1:10tap-2, 2:4tap-1, 3:4tap-2, 4:4tap-Dir, 5:sub1, 6:sub2*/
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* V Table Coefficient*/
		coef_pt = ptr->FIR_Coef;

		for (i = 0; i < 16; i++) {

			// FIR4t256p10bit ->FIR4t32p8bit
			p = i*8+3; // phase interval=8, ini=3
			c[1] = ((*(coef_pt+p+256))+2)>>2;
			c[2] = ((*(coef_pt+511-p))+2)>>2;
			c[3] = ((*(coef_pt+255-p))+2)>>2;
			c[0] = 256-(c[1]+c[2]+c[3]); // DC=256

			status = 1;
			cnt = 10000;

			coef_table_ctl_0_REG.coef0 = (c[0] & 0x0fff);
			coef_table_ctl_0_REG.coef1 = (c[1] & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

			coef_table_ctl_1_REG.coef2 = (c[2] & 0x0fff);
			coef_table_ctl_1_REG.coef3 = (c[3] & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

			coef_table_ctl_REG.coef_write = 1;
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			while ((cnt--) && (status)) { /* refer to write_gamma*/
				coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
				status =  coef_table_ctl_REG.coef_write;
			}
		}

		 /*  rw disable*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 0;
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* V use table 2*/
		ds_uzu_ctrl_REG.v_table_sel= 1;
		IoReg_Write32(SCALEUP_DS_UZU_Ctrl_reg, ds_uzu_ctrl_REG.regValue);
	}
}

extern DEBUG_SCALER_VSC_STRUCT DbgSclrFlgTkr;

void drvif_color_ultrazoom_config_scaling_up(unsigned char panorama)
{
	SIZE inSize, outSize;
	unsigned char H8tap_en = 1;
	unsigned char hor12_table_sel = 1;
	unsigned char V8tap_mode = 0, v8_table_sel = 0; // mode = 0:V4, 1:V8, 2:adapt, 3:dering

	scaleup_dm_uzumain_h_partial_drop_RBUS h_partial_drop_reg;
	scaleup_dm_uzumain_v_partial_drop_RBUS v_partial_drop_reg;

	SCALER_DISP_CHANNEL display = (SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY);

	/*Set scale up control register*/
/*	ScalerSetScaleUpCtrl(info->display);*/
	if (display == SLR_MAIN_DISPLAY) {
		scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl_REG;
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		dm_uzu_Ctrl_REG.v_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_V_UP) != 0);
		dm_uzu_Ctrl_REG.h_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_H_UP) != 0);
#if TEST_PATTERN_GEN
		dm_uzu_Ctrl_REG.in_fmt_conv = TRUE; /*422 to 444*/
#else
#ifdef CONFIG_DATA_FRAMESYNC_FORCE_422_CAP
		if (Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC)) {
			dm_uzu_Ctrl_REG.in_fmt_conv = Scaler_DispGetStatus(display, SLR_DISP_422CAP);
		} else
#endif
		{
			if(dvrif_memory_compression_get_enable(display) == TRUE){
				dm_uzu_Ctrl_REG.in_fmt_conv = FALSE;
			}else{
				dm_uzu_Ctrl_REG.in_fmt_conv = !(Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC)) && Scaler_DispGetStatus(display, SLR_DISP_422CAP);
			}
		}
#endif
		dm_uzu_Ctrl_REG.video_comp_en = (Scaler_DispGetStatus(display, SLR_DISP_COMP) ? 1 : 0);
		/*Elsie 20140529: 4k2k should not use VCTI*/
		if ((Scaler_DispGetInputInfo(SLR_INPUT_MODE_CURR) == _MODE_4k2kI30) || (Scaler_DispGetInputInfo(SLR_INPUT_MODE_CURR) == _MODE_4k2kP30))
			dm_uzu_Ctrl_REG.bypassfornr = 0;
		else
			dm_uzu_Ctrl_REG.bypassfornr = !Scaler_DispGetScaleStatus(display, SLR_SCALE_V_UP); /*nr always available*/


		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
		VIPprintf("dm_uzu_Ctrl_REG.regValue =%x\n", dm_uzu_Ctrl_REG.regValue);
	} else {
#if 1
		scaleup_ds_uzu_ctrl_RBUS ds_uzu_Ctrl_REG;
		ds_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DS_UZU_Ctrl_reg);
		ds_uzu_Ctrl_REG.v_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_V_UP) != 0);
		ds_uzu_Ctrl_REG.h_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_H_UP) != 0);
		ds_uzu_Ctrl_REG.video_comp_en = (Scaler_DispGetStatus(display, SLR_DISP_COMP) ? 1 : 0);
		ds_uzu_Ctrl_REG.in_fmt_conv = (Scaler_DispGetStatus(display, SLR_DISP_422CAP) ? 1 : 0);

		inSize.nWidth = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID);
		if(inSize.nWidth <=1920)
			ds_uzu_Ctrl_REG.ver_mode_sel = 0; // 0:V2tap, 1:V4tap (jyyang 2016.0616)

		if (Scaler_DispGetStatus(SLR_SUB_DISPLAY, SLR_DISP_INTERLACE) && (Get_Live_zoom_mode() == LIVE_ZOOM_OFF )) {
			if (Scaler_InputSrcGetMainChType() == _SRC_VO) {
				ds_uzu_Ctrl_REG.odd_inv = 1;/*fix sub di shaking when interlace*/
			} else {
				ds_uzu_Ctrl_REG.odd_inv = 0;
			}
#ifdef CONFIG_I2RND_ENABLE
			//in i2rnd case, no need to do comp @Crixus 20160802
			if(Scaler_I2rnd_get_timing_enable())
				ds_uzu_Ctrl_REG.video_comp_en = 0;
			else
#endif
				ds_uzu_Ctrl_REG.video_comp_en = 1;

		} else {
			ds_uzu_Ctrl_REG.odd_inv = 0;
			ds_uzu_Ctrl_REG.video_comp_en = 0;
		}

		IoReg_Write32(SCALEUP_DS_UZU_Ctrl_reg, ds_uzu_Ctrl_REG.regValue);
		VIPprintf("ds_uzu_Ctrl_REG.regValue =%x\n", ds_uzu_Ctrl_REG.regValue);
#endif
	}
	if (display == SLR_MAIN_DISPLAY)
	{
		if((get_hdmi_4k_hfr_mode() == HDMI_4K120_2_1)  && (get_scaling_down_status() == FALSE))
		{
			inSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_LEN) << 1;
		}
		else
		{
			inSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_LEN);
		}
	}
	else
		inSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_LEN);
	inSize.nWidth = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID);

	//[FIXME]do not modify the uzu size, need to move to re-run main flow to refine @Crixus 20180308
#if 0//def CONFIG_I2RND_ENABLE
	//i2rnd case: if source is interlace, sub disp length should be *2 because enter DI @Crixus 20160718
	if((display == SLR_SUB_DISPLAY) && (DbgSclrFlgTkr.multiview_sub_interlace_flag == 1)){
			inSize.nLength = inSize.nLength * 2;
	}
#endif

	if ((GET_IS3DFMT() == 0 && GET_HDMI_3DTYPE() == HDMI3D_FRAMESEQUENCE) &&  Get_PANEL_3D_LINE_ALTERNATIVE_SUPPORT_ENABLE()
		&& (((Scaler_InputSrcGetMainChType() == _SRC_VO) /*&& (scaler_2Dcvt3D_get_vgip2CurState() == VGIP2_2X_CLK_NON_ACTIVE)*/) /*|| (scaler_2Dcvt3D_get_vgip2CurState() == VGIP2_2X_CLK_VO_GO)*/|| ((Scaler_InputSrcGetMainChType() == _SRC_HDMI) && (Scaler_Get3DMode((SCALER_DISP_CHANNEL)display) == SLR_3DMODE_3D_AUTO)))) {
		outSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_LEN)/2;
	} else {
		outSize.nLength = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_LEN);
	}
	outSize.nWidth = Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_WID);

	/*init value*/
	IoReg_Write32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg, 0x0);
	IoReg_Write32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg, 0x0);
		h_partial_drop_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg);
		v_partial_drop_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg);
		/* 3D mode UZU overscan handler*/
#ifdef ENABLE_SG_3D_SUPPORT_ALL_SOURCE_3D_MODE
/*update H/V scaling up enable control bit for 3D overscan*/
	if (drvif_color_ultrazoom_set_3D_overscan(&inSize) != 0) {
		scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl_REG;
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);

		Scaler_DispSetScaleStatus((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), SLR_SCALE_V_UP, (outSize.nLength > inSize.nLength ? TRUE : FALSE));
		Scaler_DispSetScaleStatus((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY), SLR_SCALE_H_UP, (outSize.nWidth > inSize.nWidth ? TRUE : FALSE));

		dm_uzu_Ctrl_REG.v_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_V_UP) != 0);
		dm_uzu_Ctrl_REG.h_zoom_en = (Scaler_DispGetScaleStatus(display, SLR_SCALE_H_UP) != 0);
		/*Elsie 20140529: 4k2k should not use VCTI*/
		if ((Scaler_DispGetInputInfo(SLR_INPUT_MODE_CURR) == _MODE_4k2kI30) || (Scaler_DispGetInputInfo(SLR_INPUT_MODE_CURR) == _MODE_4k2kP30))
			dm_uzu_Ctrl_REG.bypassfornr = 0;
		else
			dm_uzu_Ctrl_REG.bypassfornr = !Scaler_DispGetScaleStatus(display, SLR_SCALE_V_UP); /*nr always available*/
		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
		VIPprintf("[3D] dm_uzu_Ctrl_REG.regValue =%x\n", dm_uzu_Ctrl_REG.regValue);
	} else
#endif /*#ifdef ENABLE_SG_3D_SUPPORT_ALL_SOURCE_3D_MODE*/

	{
		if (drvif_color_get_scaleup_cuthor4line()) {
			h_partial_drop_reg.hor_m_back_drop = 4;
			h_partial_drop_reg.hor_m_front_drop = 4;
			inSize.nWidth = (inSize.nWidth) - 8;
		}

		if (drvif_color_get_scaleup_cutver2line()) {
			if (Scaler_DispGetStatus((SCALER_DISP_CHANNEL)display, SLR_DISP_INTERLACE)) {
				v_partial_drop_reg.ver_m_back_drop = 4;
				v_partial_drop_reg.ver_m_front_drop = 4;
				inSize.nLength = (inSize.nLength) - 8;
			} else {
				v_partial_drop_reg.ver_m_back_drop = 2;
				v_partial_drop_reg.ver_m_front_drop = 2;
				inSize.nLength = (inSize.nLength) - 4;
			}
		}
#if CONFIG_FIRMWARE_IN_KERNEL
		if (isHorStartDrop) {
			h_partial_drop_reg.hor_m_back_drop = 1;
			inSize.nWidth = (inSize.nWidth) - 1;
		} else {
			h_partial_drop_reg.hor_m_back_drop = 0;
		}
#endif
			IoReg_Write32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg, h_partial_drop_reg.regValue);
			IoReg_Write32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg, v_partial_drop_reg.regValue);
	}

		//if (inSize.nWidth <= 720 && outSize.nWidth >= 1280)
			H8tap_en = 1;
		//else
		//	H8tap_en = 1;

	if (Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE()) {

		scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl_REG;
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		dm_uzu_Ctrl_REG.ver_pr_mode = drvif_color_ultrazoom_scalerup_PR_mode(inSize.nWidth);
		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
	}

	/*=================================================(jyyang_20140207)*/
	VIPprintf("[UZU] [ultrazoom_config_scaling_up] set coeff for all tap\n");

		H8tap_en = 1; hor12_table_sel = 2;
		/* [PR_3D] Disable V6tap_en when Ver_PR_mode is enabled*/
		if ((Scaler_DispGetInputInfo(SLR_INPUT_MEM_ACT_WID) <= 1920) && (drvif_color_ultrazoom_scalerup_PR_mode(Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID)) == NOT_PR_MODE)) {
			printf("[UZU] ##### Input_WID = %d, enable V6tap!! #####\n", Scaler_DispGetInputInfo(SLR_INPUT_MEM_ACT_WID));
			V8tap_mode = 1; v8_table_sel = 3;
		} else {
			printf("[UZU] ##### PR_Mode/Input_WID = %d/%d, disable V6tap!! #####\n", drvif_color_ultrazoom_scalerup_PR_mode(Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID)), Scaler_DispGetInputInfo(SLR_INPUT_MEM_ACT_WID));
	}

		drvif_color_scaler_setscaleup_chromablur(SLR_MAIN_DISPLAY, 1); /* chroma use const_tab_2*/

		/*drvif_color_ultrazoom_Adapt8tapH( SLR_MAIN_DISPLAY, 1, 2);*/

		/*drvif_color_ultrazoom_Adapt6tapV(SLR_MAIN_DISPLAY, 1, 3, 0); */ /* V6_En, Tab_Sel, Adapt_En*/
		/* =================================================*/


                if(DbgSclrFlgTkr.game_mode_dynamic_flag!=1)
		{
			drvif_color_ultrazoom_Adapt12tapH(display, H8tap_en, hor12_table_sel);
			drvif_color_ultrazoom_Adapt8tapV(display, V8tap_mode,  v8_table_sel);
		}

		drvif_color_ultrazoom_setscaleup(display, &inSize, &outSize, panorama);	/* Display scaling up control, linear or non-linear either*/
	/*}*/
	if((vbe_disp_get_orbit()== TRUE)&&(vbe_disp_get_orbit_mode() == 1)){
        printf("[UZU] ##### set orbit at ultrazoom.c!! #####\n");
		drvif_color_ultrazoom_scalerup_setorbit(inSize.nWidth, inSize.nLength, outSize.nWidth+vbe_disp_orbit_get_mode_table_shift_x()*2,
			outSize.nLength+vbe_disp_orbit_get_mode_table_shift_y()*2, vbe_disp_orbit_get_mode_table_shift_x(),
			vbe_disp_orbit_get_mode_table_shift_y(),outSize.nWidth,outSize.nLength, 0);
	}
}

void drvif_color_scaler_set_scaleup_coef(unsigned char display, DRV_FIR_Coef *ptr, char CoefIdx, char TableSel)
{
	signed short *coef_pt;
	unsigned char i, status;
	char consttab_sel_ori[4];
	unsigned short cnt = 10000;

	scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl_REG;
	scaleup_coef_table_rw_ctl_RBUS coef_table_rw_ctl_REG;
	scaleup_coef_table_ctl_0_RBUS coef_table_ctl_0_REG;
	scaleup_coef_table_ctl_1_RBUS coef_table_ctl_1_REG;
	scaleup_coef_table_ctl_RBUS coef_table_ctl_REG;
	two_step_uzu_dm_two_step_sr_ctrl_RBUS reg_two_step_uzu_dm_two_step_sr_ctrl_reg;
	two_step_uzu_dm_two_step_sr_ctrl_RBUS reg_two_step_uzu_dm_two_step_sr_ctrl_bak;

	if (display == SLR_MAIN_DISPLAY) {	/*0:main / 1:sub*/
		/*H Table Select*/

		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
		if(TableSel&8)
		{
			// 4K120
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue = IoReg_Read32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg);
			reg_two_step_uzu_dm_two_step_sr_ctrl_bak.regValue = reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue;
		}
		else
		{
			dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		}

		if(!ptr) // donot write table, just sel table
		{
			char z_table_sel=0;
			char z_consttab_sel=0;
			if(TableSel == 1)
			{
				z_table_sel = 1;
			}
			else
			if(TableSel == 2)
			{
				z_consttab_sel = 1;
			}
			else
			if(TableSel == 3)
			{
				z_consttab_sel = 2;
			}
			if(CoefIdx&8)
			{
				// 4K120
				if(CoefIdx == 8)
				{
					reg_two_step_uzu_dm_two_step_sr_ctrl_reg.h_y_consttab_sel = z_consttab_sel;
					reg_two_step_uzu_dm_two_step_sr_ctrl_reg.h_y_table_sel = z_table_sel;
				}
				else
				if(CoefIdx == 9)
				{
					reg_two_step_uzu_dm_two_step_sr_ctrl_reg.v_y_consttab_sel = z_consttab_sel;
					reg_two_step_uzu_dm_two_step_sr_ctrl_reg.v_y_table_sel = z_table_sel;
				}
				else
				if(CoefIdx == 10)
				{
					reg_two_step_uzu_dm_two_step_sr_ctrl_reg.h_c_consttab_sel = z_consttab_sel;
					reg_two_step_uzu_dm_two_step_sr_ctrl_reg.h_c_table_sel = z_table_sel;
				}
				else
				if(CoefIdx == 11)
				{
					reg_two_step_uzu_dm_two_step_sr_ctrl_reg.v_c_consttab_sel = z_consttab_sel;
					reg_two_step_uzu_dm_two_step_sr_ctrl_reg.v_c_table_sel = z_table_sel;
				}
				IoReg_Write32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg, reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue);
				drvif_color_sr_db_apply();
			}
			else
			{
				if(CoefIdx == 0)
				{
					dm_uzu_Ctrl_REG.h_y_consttab_sel = z_consttab_sel;
					dm_uzu_Ctrl_REG.h_y_table_sel = z_table_sel;
				}
				else
				if(CoefIdx == 1)
				{
					dm_uzu_Ctrl_REG.v_y_consttab_sel = z_consttab_sel;
					dm_uzu_Ctrl_REG.v_y_table_sel = z_table_sel;
				}
				else
				if(CoefIdx == 2)
				{
					dm_uzu_Ctrl_REG.h_c_consttab_sel = z_consttab_sel;
					dm_uzu_Ctrl_REG.h_c_table_sel = z_table_sel;
				}
				else
				if(CoefIdx == 3)
				{
					dm_uzu_Ctrl_REG.v_c_consttab_sel = z_consttab_sel;
					dm_uzu_Ctrl_REG.v_c_table_sel = z_table_sel;
				}
				IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
			}
			return;
		}

		if(TableSel&8)
		{
			// 4K120
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.h_y_consttab_sel = 1;/* 0:sram table, 1:const1, 2:const2*/
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.v_y_consttab_sel = 1;
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.h_c_consttab_sel = 1;
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.v_c_consttab_sel = 1;
			IoReg_Write32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg, reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue);
			drvif_color_sr_db_apply();
		}
		else
		{
			/* Save original setting*/
			consttab_sel_ori[0] = dm_uzu_Ctrl_REG.h_y_consttab_sel;
			consttab_sel_ori[1] = dm_uzu_Ctrl_REG.v_y_consttab_sel;
			consttab_sel_ori[2] = dm_uzu_Ctrl_REG.h_c_consttab_sel;
			consttab_sel_ori[3] = dm_uzu_Ctrl_REG.v_c_consttab_sel;
			/*	coeff_Tab are not used*/
			dm_uzu_Ctrl_REG.h_y_consttab_sel = 1;/* 0:sram table, 1:const1, 2:const2*/
			dm_uzu_Ctrl_REG.v_y_consttab_sel = 1;
			dm_uzu_Ctrl_REG.h_c_consttab_sel = 1;
			dm_uzu_Ctrl_REG.v_c_consttab_sel = 1;
			IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
		}
		/* sel and write sram_Tab*/
		coef_table_rw_ctl_REG.coef_rw_en = 1;
		coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
		coef_table_rw_ctl_REG.coef_tab_sel = TableSel; /* 2:4tap-1, 3:4tap-2, 4:4tap-Dir 9:4K120-4tap-1, 10:4K120-4tap-2 */

		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* H Table Coefficient*/
		coef_pt = ptr->FIR_Coef;

		for (i = 0; i < 128; i++) {
			status = 1;
			cnt = 10000;

			/*DC Value Check*/
			if (SCALING_LOG) {
				if (((*(coef_pt+i))+(*(coef_pt+i+256))+(*(coef_pt+511-i))+(*(coef_pt+255-i))) != 1024) {
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
				}
			}
			coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			coef_table_ctl_0_REG.coef0 = ((*(coef_pt+i)) & 0x0fff);
			coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i+256)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

			coef_table_ctl_1_REG.coef2 = ((*(coef_pt+511-i)) & 0x0fff);
			coef_table_ctl_1_REG.coef3 = ((*(coef_pt+255-i)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

			coef_table_ctl_REG.coef_write = 1;
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			while ((cnt--) && (status)) { /* refer to write_gamma*/
				coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
				status =  coef_table_ctl_REG.coef_write;
			}
		}

		 /*  rw disable*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 0;
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* Load original setting*/
		if(TableSel&8)
		{
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue = IoReg_Read32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg);
			// 4K120
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.h_y_consttab_sel = reg_two_step_uzu_dm_two_step_sr_ctrl_bak.h_y_consttab_sel;
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.v_y_consttab_sel = reg_two_step_uzu_dm_two_step_sr_ctrl_bak.v_y_consttab_sel;
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.h_c_consttab_sel = reg_two_step_uzu_dm_two_step_sr_ctrl_bak.h_c_consttab_sel;
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.v_c_consttab_sel = reg_two_step_uzu_dm_two_step_sr_ctrl_bak.v_c_consttab_sel;
			IoReg_Write32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg, reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue);
			drvif_color_sr_db_apply();
		}
		else
		{
			dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
			dm_uzu_Ctrl_REG.h_y_consttab_sel = consttab_sel_ori[0];
			dm_uzu_Ctrl_REG.v_y_consttab_sel = consttab_sel_ori[1];
			dm_uzu_Ctrl_REG.h_c_consttab_sel = consttab_sel_ori[2];
			dm_uzu_Ctrl_REG.v_c_consttab_sel = consttab_sel_ori[3];

			IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
		}
	}
}

void drvif_color_scaler_set_scaleup_hcoef(unsigned char display, DRV_FIR_Coef *ptr, char CoefIdx, char TableSel)
{
	// drvif_color_scaler_set_scaleup_coef(display,ptr,0,TableSel+2);
	signed short *coef_pt;
	unsigned char i, status;
	char consttab_sel_ori[4];
	unsigned short cnt = 10000;

	scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl_REG;
	scaleup_coef_table_rw_ctl_RBUS coef_table_rw_ctl_REG;
	scaleup_coef_table_ctl_0_RBUS coef_table_ctl_0_REG;
	scaleup_coef_table_ctl_1_RBUS coef_table_ctl_1_REG;
	scaleup_coef_table_ctl_RBUS coef_table_ctl_REG;


	if (display == SLR_MAIN_DISPLAY) {	/*0:main / 1:sub*/
		/*H Table Select*/
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);

		if(CoefIdx < 0) // donot write table, just sel table
		{
			if(TableSel < 0) // const table
				dm_uzu_Ctrl_REG.h_y_consttab_sel = -TableSel; /* 0:sram table, 1:const1, 2:const2*/
			else // sram table
			{
				dm_uzu_Ctrl_REG.h_y_consttab_sel = 0;
				dm_uzu_Ctrl_REG.h_y_table_sel = TableSel; /*0:sram1, 1:sram2*/
			}
			IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
			return;
		}

		/* Save original setting*/
		consttab_sel_ori[0] = dm_uzu_Ctrl_REG.h_y_consttab_sel;
		consttab_sel_ori[1] = dm_uzu_Ctrl_REG.v_y_consttab_sel;
		consttab_sel_ori[2] = dm_uzu_Ctrl_REG.h_c_consttab_sel;
		consttab_sel_ori[3] = dm_uzu_Ctrl_REG.v_c_consttab_sel;
		/*	coeff_Tab are not used*/
		dm_uzu_Ctrl_REG.h_y_consttab_sel = 1;/* 0:sram table, 1:const1, 2:const2*/
		dm_uzu_Ctrl_REG.v_y_consttab_sel = 1;
		dm_uzu_Ctrl_REG.h_c_consttab_sel = 1;
		dm_uzu_Ctrl_REG.v_c_consttab_sel = 1;
		/* sel and write sram_Tab*/
		coef_table_rw_ctl_REG.coef_rw_en = 1;
		coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
		coef_table_rw_ctl_REG.coef_tab_sel = TableSel+2; /* 0:10tap-1, 1:10tap-2, 2:4tap-1, 3:4tap-2, 4:4tap-Dir*/

		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* H Table Coefficient*/
		coef_pt = ptr->FIR_Coef;

		for (i = 0; i < 128; i++) {
			status = 1;
			cnt = 10000;

			/*DC Value Check*/
			if (SCALING_LOG) {
				if (((*(coef_pt+i))+(*(coef_pt+i+256))+(*(coef_pt+511-i))+(*(coef_pt+255-i))) != 1024) {
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
				}
			}
			coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			coef_table_ctl_0_REG.coef0 = ((*(coef_pt+i)) & 0x0fff);
			coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i+256)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

			coef_table_ctl_1_REG.coef2 = ((*(coef_pt+511-i)) & 0x0fff);
			coef_table_ctl_1_REG.coef3 = ((*(coef_pt+255-i)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

			coef_table_ctl_REG.coef_write = 1;
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			while ((cnt--) && (status)) { /* refer to write_gamma*/
				coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
				status =  coef_table_ctl_REG.coef_write;
			}
		}

		 /*  rw disable*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 0;
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* Load original setting*/
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		dm_uzu_Ctrl_REG.h_y_consttab_sel = consttab_sel_ori[0];
		dm_uzu_Ctrl_REG.v_y_consttab_sel = consttab_sel_ori[1];
		dm_uzu_Ctrl_REG.h_c_consttab_sel = consttab_sel_ori[2];
		dm_uzu_Ctrl_REG.v_c_consttab_sel = consttab_sel_ori[3];
		/* H Table Select*/
		dm_uzu_Ctrl_REG.h_y_consttab_sel = 0; /* 0:sram table, 1:const1, 2:const2*/
		dm_uzu_Ctrl_REG.h_y_table_sel = TableSel; /*0:sram1, 1:sram2*/

		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
	}
}


void drvif_color_scaler_set_scaleup_vcoef(unsigned char display, DRV_FIR_Coef *ptr, char CoefIdx, char TableSel)
{
	// drvif_color_scaler_set_scaleup_coef(display,ptr,1,TableSel+2);
	signed short *coef_pt;
	unsigned char i, status;
	char consttab_sel_ori[4];
	unsigned short cnt = 10000;


	scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl_REG;
	scaleup_coef_table_rw_ctl_RBUS coef_table_rw_ctl_REG;
	scaleup_coef_table_ctl_0_RBUS coef_table_ctl_0_REG;
	scaleup_coef_table_ctl_1_RBUS coef_table_ctl_1_REG;
	scaleup_coef_table_ctl_RBUS coef_table_ctl_REG;


	if (display == SLR_MAIN_DISPLAY) {	/*0:main / 1:sub*/
		/*V Table Select*/
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);

		if(CoefIdx < 0) // donot write table, just sel table
		{
			if(TableSel < 0) // const table
				dm_uzu_Ctrl_REG.v_y_consttab_sel = -TableSel; /* 0:sram table, 1:const1, 2:const2*/
			else // sram table
			{
				dm_uzu_Ctrl_REG.v_y_consttab_sel = 0;
				dm_uzu_Ctrl_REG.v_y_table_sel = TableSel; /*0:sram1, 1:sram2*/
			}
			IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
			return;
		}

		/* Save original setting*/
		consttab_sel_ori[0] = dm_uzu_Ctrl_REG.h_y_consttab_sel;
		consttab_sel_ori[1] = dm_uzu_Ctrl_REG.v_y_consttab_sel;
		consttab_sel_ori[2] = dm_uzu_Ctrl_REG.h_c_consttab_sel;
		consttab_sel_ori[3] = dm_uzu_Ctrl_REG.v_c_consttab_sel;
		/*	coeff_Tab are not used*/
		dm_uzu_Ctrl_REG.h_y_consttab_sel = 1;/* 0:sram table, 1:const1, 2:const2*/
		dm_uzu_Ctrl_REG.v_y_consttab_sel = 1;
		dm_uzu_Ctrl_REG.h_c_consttab_sel = 1;
		dm_uzu_Ctrl_REG.v_c_consttab_sel = 1;
		/* sel and write sram_Tab*/
		coef_table_rw_ctl_REG.coef_rw_en = 1;
		coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
		coef_table_rw_ctl_REG.coef_tab_sel =  TableSel+2; /* 0:10tap-1, 1:10tap-2, 2:4tap-1, 3:4tap-2, 4:4tap-Dir*/

		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* V Table Coefficient*/
		coef_pt = ptr->FIR_Coef;

		for (i = 0; i < 128; i++) {
			status = 1;
			cnt = 10000;

			/*DC Value Check*/
			if (SCALING_LOG) {
				if (((*(coef_pt+i))+(*(coef_pt+i+256))+(*(coef_pt+511-i))+(*(coef_pt+255-i))) != 1024) {
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
				}
			}
			coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			coef_table_ctl_0_REG.coef0 = ((*(coef_pt+i)) & 0x0fff);
			coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i+256)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

			coef_table_ctl_1_REG.coef2 = ((*(coef_pt+511-i)) & 0x0fff);
			coef_table_ctl_1_REG.coef3 = ((*(coef_pt+255-i)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

			coef_table_ctl_REG.coef_write = 1;
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			while ((cnt--) && (status)) { /* refer to write_gamma*/
				coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
				status =  coef_table_ctl_REG.coef_write;
			}
		}

		 /*  rw disable*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 0;
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* Load original setting*/
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		dm_uzu_Ctrl_REG.h_y_consttab_sel = consttab_sel_ori[0];
		dm_uzu_Ctrl_REG.v_y_consttab_sel = consttab_sel_ori[1];
		dm_uzu_Ctrl_REG.h_c_consttab_sel = consttab_sel_ori[2];
		dm_uzu_Ctrl_REG.v_c_consttab_sel = consttab_sel_ori[3];
		/* V Table Select*/
		dm_uzu_Ctrl_REG.v_y_consttab_sel = 0; /* 0:sram table, 1:const1, 2:const2*/
		dm_uzu_Ctrl_REG.v_y_table_sel = TableSel; /*0:sram1, 1:sram2*/
		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
	}
}

void drvif_color_scaler_set_scaleup_coefHC(unsigned char display, DRV_FIR_Coef *ptr, char CoefIdx, char TableSel)
{
	// drvif_color_scaler_set_scaleup_coef(display,ptr,2,TableSel+2);
	signed short *coef_pt;
	unsigned char i, status;
	char consttab_sel_ori[4];
	unsigned short cnt = 10000;

	scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl_REG;
	scaleup_coef_table_rw_ctl_RBUS coef_table_rw_ctl_REG;
	scaleup_coef_table_ctl_0_RBUS coef_table_ctl_0_REG;
	scaleup_coef_table_ctl_1_RBUS coef_table_ctl_1_REG;
	scaleup_coef_table_ctl_RBUS coef_table_ctl_REG;


	if (display == SLR_MAIN_DISPLAY) {	/*0:main / 1:sub*/
		/*H Table Select*/
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);

		if(CoefIdx < 0) // donot write table, just sel table
		{
			if(TableSel < 0) // const table
				dm_uzu_Ctrl_REG.h_c_consttab_sel = -TableSel; /* 0:sram table, 1:const1, 2:const2*/
			else // sram table
			{
				dm_uzu_Ctrl_REG.h_c_consttab_sel = 0;
				dm_uzu_Ctrl_REG.h_c_table_sel = TableSel; /*0:sram1, 1:sram2*/
			}
			IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
			return;
		}

		/* Save original setting*/
		consttab_sel_ori[0] = dm_uzu_Ctrl_REG.h_y_consttab_sel;
		consttab_sel_ori[1] = dm_uzu_Ctrl_REG.v_y_consttab_sel;
		consttab_sel_ori[2] = dm_uzu_Ctrl_REG.h_c_consttab_sel;
		consttab_sel_ori[3] = dm_uzu_Ctrl_REG.v_c_consttab_sel;
		/*  coeff_Tab are not used*/
		dm_uzu_Ctrl_REG.h_y_consttab_sel = 1;/* 0:sram table, 1:const1, 2:const2*/
		dm_uzu_Ctrl_REG.v_y_consttab_sel = 1;
		dm_uzu_Ctrl_REG.h_c_consttab_sel = 1;
		dm_uzu_Ctrl_REG.v_c_consttab_sel = 1;
		/* sel and write sram_Tab*/
		coef_table_rw_ctl_REG.coef_rw_en = 1;
		coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
		coef_table_rw_ctl_REG.coef_tab_sel = TableSel+2; /* 0:10tap-1, 1:10tap-2, 2:4tap-1, 3:4tap-2, 4:4tap-Dir*/

		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* H Table Coefficient*/
		coef_pt = ptr->FIR_Coef;

		for (i = 0; i < 128; i++) {
			status = 1;
			cnt = 10000;

			/*DC Value Check*/
			if (SCALING_LOG) {
				if (((*(coef_pt+i))+(*(coef_pt+i+256))+(*(coef_pt+511-i))+(*(coef_pt+255-i))) != 1024) {
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
				}
			}
			coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			coef_table_ctl_0_REG.coef0 = ((*(coef_pt+i)) & 0x0fff);
			coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i+256)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

			coef_table_ctl_1_REG.coef2 = ((*(coef_pt+511-i)) & 0x0fff);
			coef_table_ctl_1_REG.coef3 = ((*(coef_pt+255-i)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

			coef_table_ctl_REG.coef_write = 1;
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			while ((cnt--) && (status)) { /* refer to write_gamma*/
				coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
				status =  coef_table_ctl_REG.coef_write;
			}
		}

		 /*  rw disable*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 0;
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* Load original setting*/
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		dm_uzu_Ctrl_REG.h_y_consttab_sel = consttab_sel_ori[0];
		dm_uzu_Ctrl_REG.v_y_consttab_sel = consttab_sel_ori[1];
		dm_uzu_Ctrl_REG.h_c_consttab_sel = consttab_sel_ori[2];
		dm_uzu_Ctrl_REG.v_c_consttab_sel = consttab_sel_ori[3];
		/* H_C Table Select*/
		dm_uzu_Ctrl_REG.h_c_consttab_sel = 0; /* 0:sram table, 1:const1, 2:const2*/
		dm_uzu_Ctrl_REG.h_c_table_sel = TableSel; /*0:sram1, 1:sram2*/

		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
	}
}

void drvif_color_scaler_set_scaleup_coefVC(unsigned char display, DRV_FIR_Coef *ptr, char CoefIdx, char TableSel)
{
	// drvif_color_scaler_set_scaleup_coef(display,ptr,3,TableSel+2);
	signed short *coef_pt;
	unsigned char i, status;
	char consttab_sel_ori[4];
	unsigned short cnt = 10000;


	scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl_REG;
	scaleup_coef_table_rw_ctl_RBUS coef_table_rw_ctl_REG;
	scaleup_coef_table_ctl_0_RBUS coef_table_ctl_0_REG;
	scaleup_coef_table_ctl_1_RBUS coef_table_ctl_1_REG;
	scaleup_coef_table_ctl_RBUS coef_table_ctl_REG;


	if (display == SLR_MAIN_DISPLAY) {	/*0:main / 1:sub*/
		/*V Table Select*/
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);

		if(CoefIdx < 0) // donot write table, just sel table
		{
			if(TableSel < 0) // const table
				dm_uzu_Ctrl_REG.v_c_consttab_sel = -TableSel; /* 0:sram table, 1:const1, 2:const2*/
			else // sram table
			{
				dm_uzu_Ctrl_REG.v_c_consttab_sel = 0;
				dm_uzu_Ctrl_REG.v_c_table_sel = TableSel; /*0:sram1, 1:sram2*/
			}
			IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
			return;
		}

		/* Save original setting*/
		consttab_sel_ori[0] = dm_uzu_Ctrl_REG.h_y_consttab_sel;
		consttab_sel_ori[1] = dm_uzu_Ctrl_REG.v_y_consttab_sel;
		consttab_sel_ori[2] = dm_uzu_Ctrl_REG.h_c_consttab_sel;
		consttab_sel_ori[3] = dm_uzu_Ctrl_REG.v_c_consttab_sel;
		/*  coeff_Tab are not used*/
		dm_uzu_Ctrl_REG.h_y_consttab_sel = 1;/* 0:sram table, 1:const1, 2:const2*/
		dm_uzu_Ctrl_REG.v_y_consttab_sel = 1;
		dm_uzu_Ctrl_REG.h_c_consttab_sel = 1;
		dm_uzu_Ctrl_REG.v_c_consttab_sel = 1;
		/* sel and write sram_Tab*/
		coef_table_rw_ctl_REG.coef_rw_en = 1;
		coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
		coef_table_rw_ctl_REG.coef_tab_sel =  TableSel+2; /* 0:10tap-1, 1:10tap-2, 2:4tap-1, 3:4tap-2, 4:4tap-Dir*/

		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* V Table Coefficient*/
		coef_pt = ptr->FIR_Coef;

		for (i = 0; i < 128; i++) {
			status = 1;
			cnt = 10000;

			/*DC Value Check*/
			if (SCALING_LOG) {
				if (((*(coef_pt+i))+(*(coef_pt+i+256))+(*(coef_pt+511-i))+(*(coef_pt+255-i))) != 1024) {
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
				}
			}
			coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			coef_table_ctl_0_REG.coef0 = ((*(coef_pt+i)) & 0x0fff);
			coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i+256)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

			coef_table_ctl_1_REG.coef2 = ((*(coef_pt+511-i)) & 0x0fff);
			coef_table_ctl_1_REG.coef3 = ((*(coef_pt+255-i)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

			coef_table_ctl_REG.coef_write = 1;
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			while ((cnt--) && (status)) { /* refer to write_gamma*/
				coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
				status =  coef_table_ctl_REG.coef_write;
			}
		}

		 /*  rw disable*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 0;
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* Load original setting*/
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		dm_uzu_Ctrl_REG.h_y_consttab_sel = consttab_sel_ori[0];
		dm_uzu_Ctrl_REG.v_y_consttab_sel = consttab_sel_ori[1];
		dm_uzu_Ctrl_REG.h_c_consttab_sel = consttab_sel_ori[2];
		//dm_uzu_Ctrl_REG.v_c_consttab_sel = consttab_sel_ori[3];
		/* V Table Select*/
		dm_uzu_Ctrl_REG.v_c_consttab_sel = 0; /* 0:sram table, 1:const1, 2:const2*/
		dm_uzu_Ctrl_REG.v_c_table_sel = TableSel; /*0:sram1, 1:sram2*/
		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
	}
}

void drvif_color_scaler_scaleup_table_arrange(int coef_i[4], int coef_o[4], int tab_o[4])
{
	// [4] = {H_Y, V_Y, H_C, V_C}
	// coef_i: coef sel input (-1:const1, -2:const2, 0~N: FIR_Coef_Ctrl[0~N])
	// coef_o: coef sel output (-1:bypass, 0~N: write coef_0~N)
	// tab_o: table sel (-1:const1, -2:const2, 0:sram1, 1:sram2)

	int i;
	int tab1_coef, tab2_coef;
	int tab_used = 0;

	tab1_coef = -1;
	tab2_coef = -1;
	for(i=0; i<4; i++)
	{
		if(coef_i[i] < 0)
		{
			coef_o[i] = coef_i[i];
			tab_o[i] = coef_i[i];
		}
		else if(coef_i[i] == tab1_coef)
		{
			coef_o[i] = -1;
			tab_o[i] = 0;
		}
		else if(coef_i[i] == tab2_coef)
		{
			coef_o[i] = -1;
			tab_o[i] = 1;
		}
		else if(tab_used == 0)
		{
			tab1_coef = coef_i[i];
			coef_o[i] = tab1_coef;
			tab_o[i] = tab_used;
			tab_used ++;
		}
		else if(tab_used == 1)
		{
			tab2_coef = coef_i[i];
			coef_o[i] = tab2_coef;
			tab_o[i] = tab_used;
			tab_used ++;
		}
		else //  if(tab_num_used >= 2)
		{
			coef_o[i] = -1;
			tab_o[i] = -2;
		}
	}

}


void drvif_color_scaler_set_scaleup_dircoef(unsigned char display, DRV_FIR_Coef *ptr)
{
	signed short *coef_pt;
	unsigned char i, status;
	unsigned short cnt = 10000;
	int init_DirsuEn;

	scaleup_coef_table_rw_ctl_RBUS coef_table_rw_ctl_REG;
	scaleup_coef_table_ctl_0_RBUS coef_table_ctl_0_REG;
	scaleup_coef_table_ctl_1_RBUS coef_table_ctl_1_REG;
	scaleup_coef_table_ctl_RBUS coef_table_ctl_REG;
		scaleup_dm_dir_uzu_ctrl_RBUS dm_dir_uzu_ctrl_Reg;

	if (display == SLR_MAIN_DISPLAY) {	/* 0:main / 1:sub*/
		/* coeff_Tab are not used (disable dirsu)*/
		dm_dir_uzu_ctrl_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_Ctrl_reg);
		init_DirsuEn = dm_dir_uzu_ctrl_Reg.directionalscale_en;
		dm_dir_uzu_ctrl_Reg.directionalscale_en = 0;
		IoReg_Write32(SCALEUP_DM_DIR_UZU_Ctrl_reg, dm_dir_uzu_ctrl_Reg.regValue);

		/* sel and write sram_Tab*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 1;
		coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
		coef_table_rw_ctl_REG.coef_tab_sel = 4; /* 0:10tap-1, 1:10tap-2, 2:4tap-1, 3:4tap-2, 4:4tap-Dir*/
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* V Table Coefficient*/
		coef_pt = ptr->FIR_Coef;

		for (i = 0; i < 128; i++) {
			status = 1;
			cnt = 10000;

			/*DC Value Check*/
			if (SCALING_LOG) {
				if (((*(coef_pt+i))+(*(coef_pt+i+256))+(*(coef_pt+511-i))+(*(coef_pt+255-i))) != 1024) {
					VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
				}
			}
			coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			coef_table_ctl_0_REG.coef0 = ((*(coef_pt+i)) & 0x0fff);
			coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i+256)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

			coef_table_ctl_1_REG.coef2 = ((*(coef_pt+511-i)) & 0x0fff);
			coef_table_ctl_1_REG.coef3 = ((*(coef_pt+255-i)) & 0x0fff);
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

			coef_table_ctl_REG.coef_write = 1;
			IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

			while ((cnt--) && (status)) { /* refer to write_gamma*/
				coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
				status =  coef_table_ctl_REG.coef_write;
			}
		}

		 /*  rw disable*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 0;
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		/* Table Select*/
		dm_dir_uzu_ctrl_Reg.directionalscale_en = init_DirsuEn;
		IoReg_Write32(SCALEUP_DM_DIR_UZU_Ctrl_reg, dm_dir_uzu_ctrl_Reg.regValue);
	}

}

void drvif_color_scaler_setscaleup_directionalscaler(DRV_Dirsu_Table *ptr)
{
	scaleup_dm_dir_uzu_ctrl_RBUS dm_dir_uzu_ctrl_Reg;
	scaleup_dm_dir_uzu_transang1_RBUS dm_dir_uzu_transang1_Reg;
	scaleup_dm_dir_uzu_transang2_RBUS dm_dir_uzu_transang2_Reg;
	scaleup_dm_dir_uzu_angmagscore_RBUS dm_dir_uzu_angmagscore_Reg;
	scaleup_dm_dir_uzu_conf_RBUS dm_dir_uzu_conf_Reg;
	scaleup_dm_dir_uzu_onepixeldetect_RBUS dm_dir_uzu_onepixeldetect_Reg;
	scaleup_dm_dir_uzu_anglecheck_RBUS dm_dir_uzu_anglecheck_Reg;
	scaleup_dm_dir_uzu_diaglpf_RBUS scaleup_dm_dir_uzu_diaglpf;
	scaleup_dm_dir_uzu_diaglpf_gain_RBUS scaleup_dm_dir_uzu_diaglpf_gain;

	dm_dir_uzu_ctrl_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_Ctrl_reg);
	dm_dir_uzu_transang1_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_TransAng1_reg);
	dm_dir_uzu_transang2_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_TransAng2_reg);
	dm_dir_uzu_angmagscore_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_AngMagScore_reg);
	dm_dir_uzu_conf_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_Conf_reg);
	dm_dir_uzu_onepixeldetect_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_OnePixelDetect_reg);
	dm_dir_uzu_anglecheck_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_AngleCheck_reg);
	scaleup_dm_dir_uzu_diaglpf.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_Diaglpf_reg);
	scaleup_dm_dir_uzu_diaglpf_gain.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_Diaglpf_gain_reg);

	dm_dir_uzu_ctrl_Reg.directionalscale_en = ptr->Dirsu_Ctrl.Dirsu_En;
	dm_dir_uzu_ctrl_Reg.mag_ang_lpf_ratio= ptr->Dirsu_Ctrl.Mag_Ang_lpf_En;
	dm_dir_uzu_ctrl_Reg.ds_vlpf_en = ptr->Dirsu_Ctrl.DS_Vlpf_En;
	dm_dir_uzu_ctrl_Reg.ds_hlpf_en = ptr->Dirsu_Ctrl.DS_Hlpf_En;
	if(Scaler_DispGetInputInfo(SLR_INPUT_MEM_ACT_WID) <= 960){
		dm_dir_uzu_ctrl_Reg.ds_phase_en = ptr->Dirsu_Ctrl.DS_phase_En;
	} else {
		dm_dir_uzu_ctrl_Reg.ds_phase_en = 0;
	}
	dm_dir_uzu_ctrl_Reg.db_mode =  ptr->Dirsu_Ctrl.Dbg_Mode;
	dm_dir_uzu_ctrl_Reg.db_magfilter = ptr->Dirsu_Ctrl.Dbg_MagFilter;
	dm_dir_uzu_ctrl_Reg.ds_method= ptr->Dirsu_Ctrl.Dirsu_Method;// Merlin4
	dm_dir_uzu_ctrl_Reg.ds_transang_nearhv= ptr->Dirsu_Ctrl.ds_transang_nearhv;// avoid small triangles

	dm_dir_uzu_transang1_Reg.transang_sec0 = ptr->Dirsu_TransAng.sec0;
	dm_dir_uzu_transang1_Reg.transang_sec1 = ptr->Dirsu_TransAng.sec1;
	dm_dir_uzu_transang1_Reg.transang_sec2 = ptr->Dirsu_TransAng.sec2;
	dm_dir_uzu_transang1_Reg.transang_sec3 = ptr->Dirsu_TransAng.sec3;
	dm_dir_uzu_transang2_Reg.transang_sec4 = ptr->Dirsu_TransAng.sec4;

	dm_dir_uzu_transang2_Reg.transang_step0 = ptr->Dirsu_TransAng.step0;
	dm_dir_uzu_transang2_Reg.transang_step1 = ptr->Dirsu_TransAng.step1;
	dm_dir_uzu_transang2_Reg.transang_step2 = ptr->Dirsu_TransAng.step2;
	dm_dir_uzu_transang2_Reg.transang_step3 = ptr->Dirsu_TransAng.step3;
	dm_dir_uzu_transang2_Reg.transang_step4 = ptr->Dirsu_TransAng.step4;

	dm_dir_uzu_angmagscore_Reg.angdiff_lowbnd = ptr->Dirsu_AngMagConf.AngDiff_Lowbnd;
	dm_dir_uzu_angmagscore_Reg.angdiff_step = ptr->Dirsu_AngMagConf.AngDiff_Step;
	dm_dir_uzu_angmagscore_Reg.mag_lowbnd = ptr->Dirsu_AngMagConf.Mag_Lowbnd;
	dm_dir_uzu_angmagscore_Reg.mag_step = ptr->Dirsu_AngMagConf.Mag_Step;
	dm_dir_uzu_conf_Reg.angdiff_lowbnd2 = ptr->Dirsu_AngMagConf.AngDiff_Lowbnd2;
	dm_dir_uzu_conf_Reg.angdiff_step2 = ptr->Dirsu_AngMagConf.AngDiff_Step2;
	dm_dir_uzu_conf_Reg.conf_lowbnd = ptr->Dirsu_AngMagConf.Conf_Lowbnd;
	dm_dir_uzu_conf_Reg.conf_step = ptr->Dirsu_AngMagConf.Conf_Step;

        if (vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000) //  project tv006 , control this bit by sharpness level
        {                                                                   // VPQ_IOC_SET_VPQ_Shp_Val
                dm_dir_uzu_conf_Reg.conf_offset = ptr->Dirsu_AngMagConf.Conf_Offset;
        }

	#if defined(CONFIG_RTK_AI_DRV)
	dirsu_angmagconf[0]=dm_dir_uzu_angmagscore_Reg.angdiff_lowbnd;
	dirsu_angmagconf[1]=dm_dir_uzu_angmagscore_Reg.angdiff_step;
	dirsu_angmagconf[2]=dm_dir_uzu_angmagscore_Reg.mag_lowbnd;
	dirsu_angmagconf[3]=dm_dir_uzu_angmagscore_Reg.mag_step;
	
	dirsu_angmagconf[4]=dm_dir_uzu_conf_Reg.conf_step;
	dirsu_angmagconf[5]=dm_dir_uzu_conf_Reg.conf_offset;
	dirsu_angmagconf[6]=dm_dir_uzu_conf_Reg.conf_lowbnd;

	dirsu_angletransition[0]=dm_dir_uzu_transang1_Reg.transang_sec0;
	dirsu_angletransition[1]=dm_dir_uzu_transang1_Reg.transang_sec1;
	dirsu_angletransition[2]=dm_dir_uzu_transang1_Reg.transang_sec2;
	dirsu_angletransition[3]=dm_dir_uzu_transang1_Reg.transang_sec3;
	
	dirsu_angletransition[4]=dm_dir_uzu_transang2_Reg.transang_step0;
	dirsu_angletransition[5]=dm_dir_uzu_transang2_Reg.transang_step1;
	dirsu_angletransition[6]=dm_dir_uzu_transang2_Reg.transang_step2;
	dirsu_angletransition[7]=dm_dir_uzu_transang2_Reg.transang_step3;
	#endif
        dm_dir_uzu_ctrl_Reg.ds_conf_limit= ptr->Dirsu_AngMagConf.Conf_Limit;

	dm_dir_uzu_onepixeldetect_Reg.onepx_en = ptr->Dirsu_OpxDetect.En;
	dm_dir_uzu_onepixeldetect_Reg.onepx_centerdiffthd = ptr->Dirsu_OpxDetect.CenterDiffThd;
	dm_dir_uzu_onepixeldetect_Reg.onepx_sidediffthd = ptr->Dirsu_OpxDetect.SideDiffThd;
	dm_dir_uzu_onepixeldetect_Reg.onepx_diffstep = ptr->Dirsu_OpxDetect.DiffStep;
	dm_dir_uzu_onepixeldetect_Reg.onepx_lowbnd = ptr->Dirsu_OpxDetect.Lowbnd;
	dm_dir_uzu_onepixeldetect_Reg.onepx_step = ptr->Dirsu_OpxDetect.Step;

	dm_dir_uzu_anglecheck_Reg.checkhv_en = ptr->Dirsu_AngCheck.CheckHV_En;
	dm_dir_uzu_anglecheck_Reg.checkhv_angrange = ptr->Dirsu_AngCheck.CheckHV_AngRange;
	dm_dir_uzu_anglecheck_Reg.checkhv_angstep = ptr->Dirsu_AngCheck.CheckHV_AngStep;
	dm_dir_uzu_anglecheck_Reg.checkhv_diffrange = ptr->Dirsu_AngCheck.CheckHV_DiffRange;
	dm_dir_uzu_anglecheck_Reg.checkhv_diffstep = ptr->Dirsu_AngCheck.CheckHV_DiffStep;
	dm_dir_uzu_anglecheck_Reg.checkpn_en = ptr->Dirsu_AngCheck.CheckPN_En;
	dm_dir_uzu_anglecheck_Reg.checkpn_angrange = ptr->Dirsu_AngCheck.CheckPN_AngRange;
	dm_dir_uzu_anglecheck_Reg.checkpn_angstep = ptr->Dirsu_AngCheck.CheckPN_AngStep;
	dm_dir_uzu_anglecheck_Reg.checkpn_diffrange = ptr->Dirsu_AngCheck.CheckPN_DiffRange;
	dm_dir_uzu_anglecheck_Reg.checkpn_diffstep = ptr->Dirsu_AngCheck.CheckPN_DiffStep;

	scaleup_dm_dir_uzu_diaglpf.diaglpf_en = ptr->Dirsu_DiagLpf.diaglpf_en;
	scaleup_dm_dir_uzu_diaglpf.diaglpf_hmn_penalty1 = ptr->Dirsu_DiagLpf.diaglpf_hmn_penalty1;
	scaleup_dm_dir_uzu_diaglpf.diaglpf_hmn_penalty2 = ptr->Dirsu_DiagLpf.diaglpf_hmn_penalty2;
	scaleup_dm_dir_uzu_diaglpf_gain.diaglpf_hmn_slope = ptr->Dirsu_DiagLpf.diaglpf_hmn_slope;
	scaleup_dm_dir_uzu_diaglpf_gain.diaglpf_hmn_lowbd = ptr->Dirsu_DiagLpf.diaglpf_hmn_lowbd;
	scaleup_dm_dir_uzu_diaglpf_gain.diaglpf_ang_slope = ptr->Dirsu_DiagLpf.diaglpf_ang_slope;
	scaleup_dm_dir_uzu_diaglpf_gain.diaglpf_ang_lowbd = ptr->Dirsu_DiagLpf.diaglpf_ang_lowbd;

	IoReg_Write32(SCALEUP_DM_DIR_UZU_Ctrl_reg, dm_dir_uzu_ctrl_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_DIR_UZU_TransAng1_reg, dm_dir_uzu_transang1_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_DIR_UZU_TransAng2_reg, dm_dir_uzu_transang2_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_DIR_UZU_AngMagScore_reg, dm_dir_uzu_angmagscore_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_DIR_UZU_Conf_reg, dm_dir_uzu_conf_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_DIR_UZU_OnePixelDetect_reg, dm_dir_uzu_onepixeldetect_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_DIR_UZU_AngleCheck_reg, dm_dir_uzu_anglecheck_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_DIR_UZU_Diaglpf_reg, scaleup_dm_dir_uzu_diaglpf.regValue);
	IoReg_Write32(SCALEUP_DM_DIR_UZU_Diaglpf_gain_reg, scaleup_dm_dir_uzu_diaglpf_gain.regValue);
}

void drvif_color_scaler_setscaleup_chromablur(unsigned char display, unsigned char blur_en)
{
	if (!blur_en)
		return;

	if (display == SLR_MAIN_DISPLAY) {	/*0:main / 1:sub*/
		scaleup_dm_uzu_ctrl_RBUS dm_uzu_Ctrl_REG;
		dm_uzu_Ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		dm_uzu_Ctrl_REG.h_c_consttab_sel = 2;  /*H_CONST_TABLE_SEL = 2 (blur)*/
		dm_uzu_Ctrl_REG.v_c_consttab_sel = 2;  /*V_CONST_TABLE_SEL = 2 (blur)*/
		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_Ctrl_REG.regValue);
	}
}

void drvif_color_twostep_scaleup_hcoef_12tap(DRV_SU_table_H12tap_t *ptr)/*add for Merlin2 (jyyang_2016/06/15)*/
{
	signed short *coef_pt;
	int tap_num = ptr->tap_num;
	int i, j, tmp_data;
	int ini_ph;
	int half_tap, index1, index2;
	signed short coef_tmp[2][12] = {{0}};

	coef_pt = ptr->coef_table;

	if(!coef_pt)
	{
		VIPprintf("[error!] coef_pt is NULL.");
		return;
	}
	else if(tap_num != 6 && tap_num != 8 && tap_num != 10 && tap_num != 12)
	{
		VIPprintf("[error!] 2stepUZU tap_num = %d. (H tap_num must be 6/8/10/12.) ", tap_num);
		return;
	}


	half_tap = tap_num/2;
	ini_ph = 255; // must be 128~255
	for(i = 6-half_tap, j = 0; i < 6; i++, j++)
	{
		// 12tap: i=0~5, j=0~5
		// 10tap: i=1~5, j=0~4
		// 8tap: i=2~5, j=0~3
		/*phase0*/
		index1 = j*256+ini_ph;
		index2 = tap_num*128-1-index1;
		coef_tmp[0][i] = (*(coef_pt + index1)) & 0x0fff;
		coef_tmp[0][i+half_tap] = (*(coef_pt + index2)) & 0x0fff;
		/*phase1*/
		index1 = j*256+ini_ph-128;
		index2 = tap_num*128-1-index1;
		coef_tmp[1][i] = (*(coef_pt + index1)) & 0x0fff;
		coef_tmp[1][i+half_tap] = (*(coef_pt + index2)) & 0x0fff;
	}

	for(i=0;i<6;i++)
	{
		j = coef_tmp[0][i];
		coef_tmp[0][i] = coef_tmp[0][11-i];
		coef_tmp[0][11-i] = j;
		j = coef_tmp[1][i];
		coef_tmp[1][i] = coef_tmp[1][11-i];
		coef_tmp[1][11-i] = j;
	}

	/*DC Value Check*/
	if (SCALING_LOG) {
		int sum;
		for(i=0;i<2;i++)
		{
			sum=0;
			for(j=0;j<12;j++)
				sum += (coef_tmp[i][j]<2048)?coef_tmp[i][j]:(coef_tmp[i][j]-4096);
			if(sum!=1024)
			VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
		}
	}



	for (i = 0 ; i < 6 ; i++)
	{
		tmp_data = (unsigned int)((coef_tmp[0][2*i+1]<<16)+coef_tmp[0][2*i]);
		IoReg_Write32(TWO_STEP_UZU_H12_Y_ph0_coeff00_reg + i*4, tmp_data);
		tmp_data = (unsigned int)((coef_tmp[1][2*i+1]<<16)+coef_tmp[1][2*i]);
		IoReg_Write32(TWO_STEP_UZU_H12_Y_ph1_coeff00_reg + i*4, tmp_data);
	}

}
void drvif_color_twostep_scaleup_coef_4tap(DRV_FIR_Coef *ptr_HY, DRV_FIR_Coef *ptr_VY, DRV_FIR_Coef *ptr_HC, DRV_FIR_Coef *ptr_VC)/*add for Merlin2 (jyyang_2016/06/15)*/
{
	// ratio_sel = 0:2X, 1:1.5X
	// IF (two_step_uzu_mode == 0), it's YUV Mode using  HY,VY,HC,VC.
	// IF (two_step_uzu_mode == 1), it's RGB Mode using  HC,VC. (HY,VY are invalid)
	int ih, iw, oh, ow; // input_height, input_width, output_height, output_width
	int ratio_sel=0;
	signed short *coefHY_pt, *coefVY_pt, *coefHC_pt, *coefVC_pt;
	ppoverlay_uzudtg_dvs_cnt_RBUS ppoverlay_uzudtg_dvs_cnt_REG;
	two_step_uzu_sr_ctrl_RBUS	two_step_uzu_sr_ctrl_reg;

	_system_setting_info *VIP_system_info_structure_table=NULL;

	int i, j, tmp_data;
	int ini_ph, d_ph;
	//int half_tap,
	int index1, index2;
	signed short coefHY_tmp[2][4] = {{0}};
	signed short coefVY_tmp[2][4] = {{0}};
	signed short coefHC_tmp[2][4] = {{0}};
	signed short coefVC_tmp[2][4] = {{0}};

	VIP_system_info_structure_table = (_system_setting_info*)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_system_info_structure);
	ih = VIP_system_info_structure_table->I_Height;
	iw = VIP_system_info_structure_table->I_Width;
	oh = VIP_system_info_structure_table->D_Height;
	ow = VIP_system_info_structure_table->D_Width;

	ppoverlay_uzudtg_dvs_cnt_REG.regValue = IoReg_Read32(PPOVERLAY_uzudtg_DVS_cnt_reg);
	//frame_rate = 27000000/cnt; // need to ask Ben_Wang
	// 120Hz: cnt=27000000/120=225000
	// 118Hz: cnt=27000000/118=228813
	if(iw == 2560 && ih == 1440 && ow == 3840 && oh == 2160 && ppoverlay_uzudtg_dvs_cnt_REG.uzudtg_dvs_cnt<228813)
		ratio_sel = 1;

	coefHY_pt = ptr_HY->FIR_Coef;
	coefVY_pt = ptr_VY->FIR_Coef;
	coefHC_pt = ptr_HC->FIR_Coef;
	coefVC_pt = ptr_VC->FIR_Coef;

	if(!coefHY_pt || !coefVY_pt || !coefHC_pt || !coefVC_pt)
	{
		VIPprintf("[error!] coef_pt is NULL.(pt=%p,%p,%p,%p)\n",(void*)coefHY_pt, (void*)coefVY_pt, (void*)coefHC_pt, (void*)coefVC_pt);
		return;
	}



	ini_ph = 255; // IF ratio_sel = 0 (2X), ini_ph must be 128~255. IF ratio_sel = 1 (1.5X), ini_ph must be 171~255.
	ini_ph = CLIP(ratio_sel? 171:128, 255, ini_ph);
	d_ph = ratio_sel? 85:128;
	for(i = 0; i < 2; i++)
	{
		/*phase0*/
		j=i;
		index1 = j*256+ini_ph;
		index2 = 511-index1;
		coefHY_tmp[0][i] = (*(coefHY_pt + index1)) & 0x0fff;
		coefHY_tmp[0][i+2] = (*(coefHY_pt + index2)) & 0x0fff;
		coefVY_tmp[0][i] = (*(coefVY_pt + index1)) & 0x0fff;
		coefVY_tmp[0][i+2] = (*(coefVY_pt + index2)) & 0x0fff;
		coefHC_tmp[0][i] = (*(coefHC_pt + index1)) & 0x0fff;
		coefHC_tmp[0][i+2] = (*(coefHC_pt + index2)) & 0x0fff;
		coefVC_tmp[0][i] = (*(coefVC_pt + index1)) & 0x0fff;
		coefVC_tmp[0][i+2] = (*(coefVC_pt + index2)) & 0x0fff;
		/*phase1*/
		index1 = j*256+ini_ph-d_ph;
		index2 = 511-index1;
		coefHY_tmp[1][i] = (*(coefHY_pt + index1)) & 0x0fff;
		coefHY_tmp[1][i+2] = (*(coefHY_pt + index2)) & 0x0fff;
		coefVY_tmp[1][i] = (*(coefVY_pt + index1)) & 0x0fff;
		coefVY_tmp[1][i+2] = (*(coefVY_pt + index2)) & 0x0fff;
		coefHC_tmp[1][i] = (*(coefHC_pt + index1)) & 0x0fff;
		coefHC_tmp[1][i+2] = (*(coefHC_pt + index2)) & 0x0fff;
		coefVC_tmp[1][i] = (*(coefVC_pt + index1)) & 0x0fff;
		coefVC_tmp[1][i+2] = (*(coefVC_pt + index2)) & 0x0fff;
		/*phase2*/
		if(ratio_sel)
		{
			index1 = j*256+ini_ph-d_ph*2;
			index2 = 511-index1;
			coefHY_tmp[0][i] = (*(coefHY_pt + index1)) & 0x0fff;
			coefHY_tmp[0][i+2] = (*(coefHY_pt + index2)) & 0x0fff;
			coefVY_tmp[0][i] = (*(coefVY_pt + index1)) & 0x0fff;
			coefVY_tmp[0][i+2] = (*(coefVY_pt + index2)) & 0x0fff;
		}
	}
	/*for(i=0;i<2;i++)
	{
		j = coefHY_tmp[0][i];
		coefHY_tmp[0][i] = coefHY_tmp[0][3-i];
		coefHY_tmp[0][3-i] = j;
		j = coefHY_tmp[1][i];
		coefHY_tmp[1][i] = coefHY_tmp[1][3-i];
		coefHY_tmp[1][3-i] = j;

		j = coefVY_tmp[0][i];
		coefVY_tmp[0][i] = coefVY_tmp[0][3-i];
		coefVY_tmp[0][3-i] = j;
		j = coefVY_tmp[1][i];
		coefVY_tmp[1][i] = coefVY_tmp[1][3-i];
		coefVY_tmp[1][3-i] = j;

		j = coefHC_tmp[0][i];
		coefHC_tmp[0][i] = coefHC_tmp[0][3-i];
		coefHC_tmp[0][3-i] = j;
		j = coefHC_tmp[1][i];
		coefHC_tmp[1][i] = coefHC_tmp[1][3-i];
		coefHC_tmp[1][3-i] = j;

		j = coefVC_tmp[0][i];
		coefVC_tmp[0][i] = coefVC_tmp[0][3-i];
		coefVC_tmp[0][3-i] = j;
		j = coefVC_tmp[1][i];
		coefVC_tmp[1][i] = coefVC_tmp[1][3-i];
		coefVC_tmp[1][3-i] = j;
	}*/
	/*DC Value Check*/
	if (SCALING_LOG) {
		int sum;
		for(i=0;i<2;i++)
		{
			sum=0;
			for(j=0;j<4;j++)
				sum += (coefHY_tmp[i][j]<2048)?coefHY_tmp[i][j]:(coefHY_tmp[i][j]-4096);
			if(sum!=1024)
				VIPprintf("[Warnning] [%s-%s-%d] coefHY_tmp DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
			sum=0;
			for(j=0;j<4;j++)
				sum += (coefVY_tmp[i][j]<2048)?coefVY_tmp[i][j]:(coefVY_tmp[i][j]-4096);
			if(sum!=1024)
				VIPprintf("[Warnning] [%s-%s-%d] coefVY_tmp DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
			sum=0;
			for(j=0;j<4;j++)
				sum += (coefHC_tmp[i][j]<2048)?coefHC_tmp[i][j]:(coefHC_tmp[i][j]-4096);
			if(sum!=1024)
				VIPprintf("[Warnning] [%s-%s-%d] coefHC_tmp DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
			sum=0;
			for(j=0;j<4;j++)
				sum += (coefVC_tmp[i][j]<2048)?coefVC_tmp[i][j]:(coefVC_tmp[i][j]-4096);
			if(sum!=1024)
				VIPprintf("[Warnning] [%s-%s-%d] coefVC_tmp DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
		}

	}


	for(i = 0; i < 2; i++)
	{
		tmp_data = (unsigned int)((coefHY_tmp[0][2*i+1]<<16)+coefHY_tmp[0][2*i]);
		IoReg_Write32(TWO_STEP_UZU_H4_Y_ph0_coeff00_reg + i*4, tmp_data);
		tmp_data = (unsigned int)((coefHY_tmp[1][2*i+1]<<16)+coefHY_tmp[1][2*i]);
		IoReg_Write32(TWO_STEP_UZU_H4_Y_ph0_coeff00_reg + i*4, tmp_data);
		tmp_data = (unsigned int)((coefVY_tmp[0][2*i+1]<<16)+coefVY_tmp[0][2*i]);
		IoReg_Write32(TWO_STEP_UZU_V4_Y_ph0_coeff00_reg + i*4, tmp_data);
		tmp_data = (unsigned int)((coefVY_tmp[1][2*i+1]<<16)+coefVY_tmp[1][2*i]);
		IoReg_Write32(TWO_STEP_UZU_V4_Y_ph0_coeff00_reg + i*4, tmp_data);
		tmp_data = (unsigned int)((coefHC_tmp[0][2*i+1]<<16)+coefHC_tmp[0][2*i]);
		IoReg_Write32(TWO_STEP_UZU_H4_C_ph0_coeff00_reg + i*4, tmp_data);
		tmp_data = (unsigned int)((coefHC_tmp[1][2*i+1]<<16)+coefHC_tmp[1][2*i]);
		IoReg_Write32(TWO_STEP_UZU_H4_C_ph0_coeff00_reg + i*4, tmp_data);
		tmp_data = (unsigned int)((coefVC_tmp[0][2*i+1]<<16)+coefVC_tmp[0][2*i]);
		IoReg_Write32(TWO_STEP_UZU_V4_C_ph0_coeff00_reg + i*4, tmp_data);
		tmp_data = (unsigned int)((coefVC_tmp[1][2*i+1]<<16)+coefVC_tmp[1][2*i]);
		IoReg_Write32(TWO_STEP_UZU_V4_C_ph0_coeff00_reg + i*4, tmp_data);
	}

	// Set the SR phase ( It must be same as Coef phase)
	two_step_uzu_sr_ctrl_reg.regValue = IoReg_Read32(TWO_STEP_UZU_SR_Ctrl_reg);
	two_step_uzu_sr_ctrl_reg.sr_hor_ini = ini_ph-128;
	two_step_uzu_sr_ctrl_reg.sr_ver_ini = ini_ph-128;
	IoReg_Write32(TWO_STEP_UZU_SR_Ctrl_reg, two_step_uzu_sr_ctrl_reg.regValue);

}


void drvif_color_scaler_setscaleup_hcoef_12tap(unsigned char display, DRV_SU_table_H12tap_t *ptr)
{
	/* [display] 0:main/1:sub, [ptr] point of mode+table,  [tap_num] 6/8/10 tap*/
	unsigned short cnt = 10000;
	unsigned char i, status;
	signed short *coef_pt;
	int tap_num = ptr->tap_num;

	if (display == SLR_MAIN_DISPLAY ) {	/* 0:main / 1:sub / 120:4K120 */
		scaleup_dm_uzu_v8ctrl_RBUS dm_uzu_V8CTRL_reg;
		scaleup_dm_uzu_ctrl_RBUS dm_uzu_ctrl_REG;
		scaleup_coef_table_rw_ctl_RBUS coef_table_rw_ctl_REG;
		scaleup_coef_table_ctl_0_RBUS coef_table_ctl_0_REG;
		scaleup_coef_table_ctl_1_RBUS coef_table_ctl_1_REG;
		scaleup_coef_table_ctl_2_RBUS coef_table_ctl_2_REG;
		scaleup_coef_table_ctl_3_RBUS coef_table_ctl_3_REG;
		scaleup_coef_table_ctl_4_RBUS coef_table_ctl_4_REG;
		scaleup_coef_table_ctl_5_RBUS coef_table_ctl_5_REG;
		scaleup_coef_table_ctl_RBUS coef_table_ctl_REG;
		two_step_uzu_dm_two_step_sr_ctrl_RBUS reg_two_step_uzu_dm_two_step_sr_ctrl_reg;
		two_step_uzu_dm_two_step_sr_ctrl_RBUS reg_two_step_uzu_dm_two_step_sr_ctrl_bak;

		coef_pt = ptr->coef_table;
		if(!coef_pt) {
			VIPprintf("[error!] coef_pt is NULL.");
			return;
		}

		if(get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)
		{
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue = IoReg_Read32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg);
			reg_two_step_uzu_dm_two_step_sr_ctrl_bak.regValue = reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue;

			/* ensure coeff_Tab1 and coeff_Tab2 are not used*/
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.hor12_table_sel=0;
                        printk(KERN_EMERG "4K120 func:%s line:%d      \r\n",__FUNCTION__, __LINE__);
			/* sel and write sram_Tab*/
			coef_table_rw_ctl_REG.coef_rw_en = 1;
			coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
			coef_table_rw_ctl_REG.coef_tab_sel = 8; /* 8:12tap-1, 9:4tap-1, 10:4tap-2 */

			dm_uzu_ctrl_REG.hor_mode_sel = ptr->hor_mode_sel;
			IoReg_Write32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg, reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue);
			drvif_color_sr_db_apply();
			IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);
		}
		else
		{
		dm_uzu_V8CTRL_reg.regValue = IoReg_Read32(SCALEUP_DM_UZU_V8CTRL_reg);
		dm_uzu_ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);

		/* ensure coeff_Tab1 and coeff_Tab2 are not used*/
		if (dm_uzu_ctrl_REG.hor12_table_sel == _TabSelH12_coeff1 || dm_uzu_ctrl_REG.hor12_table_sel == _TabSelH12_coeff2)
			dm_uzu_ctrl_REG.hor12_table_sel = _TabSelH12_const1;
		if (dm_uzu_V8CTRL_reg.v8tap_table_sel == _TabSelV8_coeff1 || dm_uzu_V8CTRL_reg.v8tap_table_sel == _TabSelV8_coeff2)
			dm_uzu_V8CTRL_reg.v8tap_table_sel = _TabSelV8_const1;

		/* sel and write sram_Tab*/
		coef_table_rw_ctl_REG.coef_rw_en = 1;
		coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
		coef_table_rw_ctl_REG.coef_tab_sel = 0; /* 0:10tap-1, 1:10tap-2, 2:4tap-1, 3:4tap-2, 4:4tap-Dir*/

		dm_uzu_ctrl_REG.hor_mode_sel = ptr->hor_mode_sel;
		IoReg_Write32(SCALEUP_DM_UZU_V8CTRL_reg, dm_uzu_V8CTRL_reg.regValue);
		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_ctrl_REG.regValue);
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);
		}

		/* phase32:i = 0~15; phase256:i = 0~127*/
		if (tap_num == 12) {
			for (i = 0; i < 128; i++) {
				status = 1;
				cnt = 10000;
				/*DC Value Check*/
				if (SCALING_LOG) {
					if (((*(coef_pt+i+512))+(*(coef_pt+i+768))+(*(coef_pt+i+1024))+(*(coef_pt+i+1280))+
					    (*(coef_pt+1537-i))+(*(coef_pt+1279-i))+(*(coef_pt+1023-i))+(*(coef_pt+767-i))+
					    (*(coef_pt+i+256))+(*(coef_pt+511-i))+(*(coef_pt+i))+(*(coef_pt+255-i))) != 1024) {
						VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, tap_num=%d,i=%d\n", __FILE__, __func__, __LINE__, tap_num,i);
					}
				}

				coef_table_ctl_0_REG.coef0 = ((*(coef_pt+i+512)) & 0x0fff);
				coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i+768)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

				coef_table_ctl_1_REG.coef2 = ((*(coef_pt+i+1024)) & 0x0fff);
				coef_table_ctl_1_REG.coef3 = ((*(coef_pt+i+1280)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

				coef_table_ctl_2_REG.coef4 = ((*(coef_pt+1535-i)) & 0x0fff);
				coef_table_ctl_2_REG.coef5 = ((*(coef_pt+1279-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_2_reg, coef_table_ctl_2_REG.regValue);

				coef_table_ctl_3_REG.coef6 = ((*(coef_pt+1023-i)) & 0x0fff);
				coef_table_ctl_3_REG.coef7 = ((*(coef_pt+767-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_3_reg, coef_table_ctl_3_REG.regValue);

				coef_table_ctl_4_REG.coef8 = ((*(coef_pt+i+256)) & 0x0fff);
				coef_table_ctl_4_REG.coef9 = ((*(coef_pt+511-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_4_reg, coef_table_ctl_4_REG.regValue);

				coef_table_ctl_5_REG.coef10 = ((*(coef_pt+i)) & 0x0fff);
				coef_table_ctl_5_REG.coef11 = ((*(coef_pt+255-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_5_reg, coef_table_ctl_5_REG.regValue);

				coef_table_ctl_REG.coef_write = 1;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

				while ((cnt--) && (status)) { /* refer to write_gamma*/
					coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
					status =  coef_table_ctl_REG.coef_write;
				}
			}
		} else if (tap_num == 10) {
			for (i = 0; i < 128; i++) {
				status = 1;
				cnt = 10000;
				/*DC Value Check*/
				if (SCALING_LOG) {
					if (((*(coef_pt+i+256))+(*(coef_pt+i+512))+(*(coef_pt+i+768))+(*(coef_pt+i+1024))+
					    (*(coef_pt+1279-i))+(*(coef_pt+1023-i))+(*(coef_pt+767-i))+(*(coef_pt+511-i))+
					    (*(coef_pt+i))+(*(coef_pt+255-i))) != 1024) {
						VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, tap_num=%d,i=%d\n", __FILE__, __func__, __LINE__, tap_num,i);
					}
				}
				coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

				coef_table_ctl_0_REG.coef0 = ((*(coef_pt+i+256)) & 0x0fff);
				coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i+512)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

				coef_table_ctl_1_REG.coef2 = ((*(coef_pt+i+768)) & 0x0fff);
				coef_table_ctl_1_REG.coef3 = ((*(coef_pt+i+1024)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

				coef_table_ctl_2_REG.coef4 = ((*(coef_pt+1279-i)) & 0x0fff);
				coef_table_ctl_2_REG.coef5 = ((*(coef_pt+1023-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_2_reg, coef_table_ctl_2_REG.regValue);

				coef_table_ctl_3_REG.coef6 = ((*(coef_pt+767-i)) & 0x0fff);
				coef_table_ctl_3_REG.coef7 = ((*(coef_pt+511-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_3_reg, coef_table_ctl_3_REG.regValue);

				coef_table_ctl_4_REG.coef8 = ((*(coef_pt+i)) & 0x0fff);
				coef_table_ctl_4_REG.coef9 = ((*(coef_pt+255-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_4_reg, coef_table_ctl_4_REG.regValue);

				coef_table_ctl_5_REG.coef10 = 0;
				coef_table_ctl_5_REG.coef11 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_5_reg, coef_table_ctl_5_REG.regValue);

				coef_table_ctl_REG.coef_write = 1;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

				while ((cnt--) && (status)) { /* refer to write_gamma*/
					coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
					status =  coef_table_ctl_REG.coef_write;
				}
			}
		} else if (tap_num == 8) {
			for (i = 0; i < 128; i++) {
				status = 1;
				cnt = 10000;
				/*DC Value Check*/
				if (SCALING_LOG) {
					if (((*(coef_pt + i))+(*(coef_pt+i+256))+(*(coef_pt+i+512))+(*(coef_pt+i+768))+
					    (*(coef_pt+1023-i))+(*(coef_pt+767-i))+(*(coef_pt+511-i))+(*(coef_pt+255-i))) != 1024) {
						VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, tap_num=%d,i=%d\n", __FILE__, __func__, __LINE__, tap_num,i);
					}
				}
				coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

				coef_table_ctl_0_REG.coef0 = ((*(coef_pt + i)) & 0x0fff);
				coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i+256)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

				coef_table_ctl_1_REG.coef2 = ((*(coef_pt+i+512)) & 0x0fff);
				coef_table_ctl_1_REG.coef3 = ((*(coef_pt+i+768)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

				coef_table_ctl_2_REG.coef4 = ((*(coef_pt+1023-i)) & 0x0fff);
				coef_table_ctl_2_REG.coef5 = ((*(coef_pt+767-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_2_reg, coef_table_ctl_2_REG.regValue);

				coef_table_ctl_3_REG.coef6 = ((*(coef_pt+511-i)) & 0x0fff);
				coef_table_ctl_3_REG.coef7 = ((*(coef_pt+255-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_3_reg, coef_table_ctl_3_REG.regValue);

				coef_table_ctl_4_REG.coef8 = 0;
				coef_table_ctl_4_REG.coef9 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_4_reg, coef_table_ctl_4_REG.regValue);

				coef_table_ctl_5_REG.coef10 = 0;
				coef_table_ctl_5_REG.coef11 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_5_reg, coef_table_ctl_5_REG.regValue);

				coef_table_ctl_REG.coef_write = 1;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

				while ((cnt--) && (status)) { /* refer to write_gamma*/
					coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
					status =  coef_table_ctl_REG.coef_write;
				}
			}
		} else if (tap_num == 6) {
			for (i = 0; i < 128; i++) {
				status = 1;
				cnt = 10000;
				/*DC Value Check*/
				if (SCALING_LOG) {
					if (((*(coef_pt+i))+(*(coef_pt+i+256))+(*(coef_pt+i+512))+(*(coef_pt+767-i))+
					    (*(coef_pt+511-i))+(*(coef_pt+255-i))) != 1024) {
						VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, tap_num=%d,i=%d\n", __FILE__, __func__, __LINE__, tap_num,i);
					}
				}
				coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

				coef_table_ctl_0_REG.coef0 = 0;
				coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

				coef_table_ctl_1_REG.coef2 = ((*(coef_pt+i+256)) & 0x0fff);
				coef_table_ctl_1_REG.coef3 = ((*(coef_pt+i+512)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

				coef_table_ctl_2_REG.coef4 = ((*(coef_pt+767-i)) & 0x0fff);
				coef_table_ctl_2_REG.coef5 = ((*(coef_pt+511-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_2_reg, coef_table_ctl_2_REG.regValue);

				coef_table_ctl_3_REG.coef6 = ((*(coef_pt+255-i)) & 0x0fff);
				coef_table_ctl_3_REG.coef7 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_3_reg, coef_table_ctl_3_REG.regValue);

				coef_table_ctl_4_REG.coef8 = 0;
				coef_table_ctl_4_REG.coef9 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_4_reg, coef_table_ctl_4_REG.regValue);

				coef_table_ctl_5_REG.coef10 = 0;
				coef_table_ctl_5_REG.coef11 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_5_reg, coef_table_ctl_5_REG.regValue);

				coef_table_ctl_REG.coef_write = 1;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

				while ((cnt--) && (status)) { /*refer to write_gamma*/
					coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
					status =  coef_table_ctl_REG.coef_write;
				}
			}
		} else {
			printf("[error!] UZU tap_num = %d. (H tap_num must be 6/8/10.) ", tap_num);
			return;
		}

		/*  rw disable*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 0;
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		if(get_hdmi_4k_hfr_mode() != HDMI_NON_4K120)
		{
                         printk(KERN_EMERG "4K120 func:%s line:%d      \r\n",__FUNCTION__, __LINE__);
			// reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue = IoReg_Read32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg);
			reg_two_step_uzu_dm_two_step_sr_ctrl_reg.hor12_table_sel=reg_two_step_uzu_dm_two_step_sr_ctrl_bak.hor12_table_sel;
			IoReg_Write32(TWO_STEP_UZU_DM_TWO_STEP_SR_Ctrl_reg, reg_two_step_uzu_dm_two_step_sr_ctrl_reg.regValue);
			drvif_color_sr_db_apply();
		}
		else
		{
                        dm_uzu_V8CTRL_reg.v8tap_table_sel = _TabSelV8_coeff2; /*Ver use coeff Tab2*/
                        IoReg_Write32(SCALEUP_DM_UZU_V8CTRL_reg, dm_uzu_V8CTRL_reg.regValue);
                        dm_uzu_ctrl_REG.hor12_table_sel = _TabSelH12_coeff1; /*Hor use coeff Tab1*/
                        IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_ctrl_REG.regValue);
	        }
        }
}

void drvif_color_scaler_setscaleup_vcoef_8tap(unsigned char display, DRV_SU_table_V8tap_t *ptr)
{
	/*extern DRV_SU_table_6tap_t SU_table_6tap[9];*/
	unsigned short cnt = 10000;
	unsigned char i, status;
	signed short *coef_pt;
	int tap_num = ptr->tap_num;

	if (display == SLR_MAIN_DISPLAY) {	/* 0:main / 1:sub*/
		scaleup_dm_uzu_v8ctrl_RBUS dm_uzu_V8CTRL_reg;
		scaleup_dm_uzu_ctrl_RBUS dm_uzu_ctrl_REG;
		scaleup_coef_table_rw_ctl_RBUS coef_table_rw_ctl_REG;
		scaleup_coef_table_ctl_0_RBUS coef_table_ctl_0_REG;
		scaleup_coef_table_ctl_1_RBUS coef_table_ctl_1_REG;
		scaleup_coef_table_ctl_2_RBUS coef_table_ctl_2_REG;
		scaleup_coef_table_ctl_3_RBUS coef_table_ctl_3_REG;
		scaleup_coef_table_ctl_4_RBUS coef_table_ctl_4_REG;
		scaleup_coef_table_ctl_5_RBUS coef_table_ctl_5_REG;
		scaleup_coef_table_ctl_RBUS coef_table_ctl_REG;

		dm_uzu_V8CTRL_reg.regValue = IoReg_Read32(SCALEUP_DM_UZU_V8CTRL_reg);
		dm_uzu_ctrl_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Ctrl_reg);
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);

		/* ensure coeff_Tab1 and coeff_Tab2 are not used*/
		if (dm_uzu_ctrl_REG.hor12_table_sel == _TabSelH12_coeff1 || dm_uzu_ctrl_REG.hor12_table_sel == _TabSelH12_coeff2)
			dm_uzu_ctrl_REG.hor12_table_sel = _TabSelH12_const1;
		if (dm_uzu_V8CTRL_reg.v8tap_table_sel == _TabSelV8_coeff1 || dm_uzu_V8CTRL_reg.v8tap_table_sel == _TabSelV8_coeff2)
			dm_uzu_V8CTRL_reg.v8tap_table_sel = _TabSelV8_const1;

		/* sel and write sram_Tab*/
		coef_table_rw_ctl_REG.coef_rw_en = 1;
		coef_table_rw_ctl_REG.coef_rw_sel = 0; /*0:w, 1:r*/
		coef_table_rw_ctl_REG.coef_tab_sel = 1; /* 0:10tap-1, 1:10tap-2, 2:4tap-1, 3:4tap-2, 4:4tap-Dir*/

		if ((Scaler_DispGetInputInfo(SLR_INPUT_MEM_ACT_WID) <= 1920) && (drvif_color_ultrazoom_scalerup_PR_mode(Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID)) == NOT_PR_MODE))
		{
			dm_uzu_V8CTRL_reg.ver_mode_sel = ptr->ver_mode_sel; // if width<=1920, we can use V8tap
		}
		else
		{
			dm_uzu_V8CTRL_reg.ver_mode_sel = 0; // if width>1920, we can NOT use V8tap
		}

		if (dm_uzu_V8CTRL_reg.ver_mode_sel == 2){
			drvif_color_ultrazoom_V8tapDeRing(2);
		}
		drvif_color_ultrazoom_de_distortion(e_uzu_de_distortion_Level_default);
		IoReg_Write32(SCALEUP_DM_UZU_V8CTRL_reg, dm_uzu_V8CTRL_reg.regValue);
		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_ctrl_REG.regValue);
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);


		coef_pt = ptr->coef_table;

		/* phase32:i = 0~15; phase256:i = 0~127*/
		if (tap_num == 8) {
			for (i = 0; i < 128; i++) {
				status = 1;
				cnt = 10000;
				/*DC Value Check*/
				if (SCALING_LOG) {
					if (((*(coef_pt + i))+(*(coef_pt+i+256))+(*(coef_pt+i+512))+(*(coef_pt+i+768))+
					    (*(coef_pt+1023-i))+(*(coef_pt+767-i))+(*(coef_pt+511-i))+(*(coef_pt+255-i))) != 1024) {
						VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, tap_num=%d,i=%d\n", __FILE__, __func__, __LINE__, tap_num,i);
					}
				}
				coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

				coef_table_ctl_0_REG.coef0 = ((*(coef_pt + i)) & 0x0fff);
				coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i+256)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

				coef_table_ctl_1_REG.coef2 = ((*(coef_pt+i+512)) & 0x0fff);
				coef_table_ctl_1_REG.coef3 = ((*(coef_pt+i+768)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

				coef_table_ctl_2_REG.coef4 = ((*(coef_pt+1023-i)) & 0x0fff);
				coef_table_ctl_2_REG.coef5 = ((*(coef_pt+767-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_2_reg, coef_table_ctl_2_REG.regValue);

				coef_table_ctl_3_REG.coef6 = ((*(coef_pt+511-i)) & 0x0fff);
				coef_table_ctl_3_REG.coef7 = ((*(coef_pt+255-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_3_reg, coef_table_ctl_3_REG.regValue);

				coef_table_ctl_4_REG.coef8 = 0;
				coef_table_ctl_4_REG.coef9 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_4_reg, coef_table_ctl_4_REG.regValue);

				coef_table_ctl_5_REG.coef10 = 0;
				coef_table_ctl_5_REG.coef11 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_5_reg, coef_table_ctl_5_REG.regValue);

				coef_table_ctl_REG.coef_write = 1;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);
				while ((cnt--) && (status)) { /* refer to write_gamma*/
					coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
					status =  coef_table_ctl_REG.coef_write;
				}
			}
		} else if (tap_num == 6) {
			for (i = 0; i < 128; i++) {
				status = 1;
				cnt = 10000;
				/*DC Value Check*/
				if (SCALING_LOG) {
					if (((*(coef_pt+i))+(*(coef_pt+i+256))+(*(coef_pt+i+512))+(*(coef_pt+767-i))+
					    (*(coef_pt+511-i))+(*(coef_pt+255-i))) != 1024) {
						VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, tap_num=%d,i=%d\n", __FILE__, __func__, __LINE__, tap_num,i);
					}
				}
				coef_table_ctl_REG.coef_write = 0; //before write table , this bit need set 0
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

				coef_table_ctl_0_REG.coef0 = 0;
				coef_table_ctl_0_REG.coef1 = ((*(coef_pt+i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_0_reg, coef_table_ctl_0_REG.regValue);

				coef_table_ctl_1_REG.coef2 = ((*(coef_pt+i+256)) & 0x0fff);
				coef_table_ctl_1_REG.coef3 = ((*(coef_pt+i+512)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_1_reg, coef_table_ctl_1_REG.regValue);

				coef_table_ctl_2_REG.coef4 = ((*(coef_pt+767-i)) & 0x0fff);
				coef_table_ctl_2_REG.coef5 = ((*(coef_pt+511-i)) & 0x0fff);
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_2_reg, coef_table_ctl_2_REG.regValue);

				coef_table_ctl_3_REG.coef6 = ((*(coef_pt+255-i)) & 0x0fff);
				coef_table_ctl_3_REG.coef7 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_3_reg, coef_table_ctl_3_REG.regValue);

				coef_table_ctl_4_REG.coef8 = 0;
				coef_table_ctl_4_REG.coef9 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_4_reg, coef_table_ctl_4_REG.regValue);

				coef_table_ctl_5_REG.coef10 = 0;
				coef_table_ctl_5_REG.coef11 = 0;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_5_reg, coef_table_ctl_5_REG.regValue);

				coef_table_ctl_REG.coef_write = 1;
				IoReg_Write32(SCALEUP_COEF_TABLE_CTL_reg, coef_table_ctl_REG.regValue);

				while ((cnt--) && (status)) { /* refer to write_gamma*/
					coef_table_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_CTL_reg);
					status =  coef_table_ctl_REG.coef_write;
				}
			}
		} else {
			rtd_printk(KERN_ERR, TAG_NAME, "[error!] UZU tap_num = %d. (V tap_num must be 6/8.) ", tap_num);
			return;
		}

		/*  rw disable*/
		coef_table_rw_ctl_REG.regValue = IoReg_Read32(SCALEUP_COEF_TABLE_RW_CTL_reg);
		coef_table_rw_ctl_REG.coef_rw_en = 0;
		IoReg_Write32(SCALEUP_COEF_TABLE_RW_CTL_reg, coef_table_rw_ctl_REG.regValue);

		dm_uzu_V8CTRL_reg.v8tap_table_sel = _TabSelV8_coeff2; /*Ver use coeff Tab2*/
		IoReg_Write32(SCALEUP_DM_UZU_V8CTRL_reg, dm_uzu_V8CTRL_reg.regValue);
		dm_uzu_ctrl_REG.hor12_table_sel = _TabSelH12_coeff1; /*Hor use coeff Tab1*/
		IoReg_Write32(SCALEUP_DM_UZU_Ctrl_reg, dm_uzu_ctrl_REG.regValue);
	}
}


void drvif_color_scaler_setds_supk_mask(DRV_SU_PK_Mask *ptr)
{
#if 0
	scaleup_dm_uzu_peaking_coring_RBUS dm_uzu_peaking_coring_RBUS_reg;
	scaleup_dm_uzu_peaking_gain_RBUS dm_uzu_peaking_gain_RBUS_reg;

	if (!ptr)
		return;

	dm_uzu_peaking_coring_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_UZU_Peaking_Coring_reg);
	dm_uzu_peaking_gain_RBUS_reg.regValue =  IoReg_Read32(SCALEUP_DM_UZU_Peaking_Gain_reg);
	/*NOTE: use negative value should use casting to avoid warning!*/

	dm_uzu_peaking_coring_RBUS_reg.pk_mask_c0 = (unsigned int)ptr->Pk_Mask_C0;
	dm_uzu_peaking_coring_RBUS_reg.pk_mask_c1 = (unsigned int)ptr->Pk_Mask_C1;
	dm_uzu_peaking_coring_RBUS_reg.pk_mask_c2 = (unsigned int)ptr->Pk_Mask_C2;
	dm_uzu_peaking_gain_RBUS_reg.pk_mask_c3 = (unsigned int)ptr->Pk_Mask_C3;

	IoReg_Write32(SCALEUP_DM_UZU_Peaking_Coring_reg, dm_uzu_peaking_coring_RBUS_reg.regValue);
	IoReg_Write32(SCALEUP_DM_UZU_Peaking_Gain_reg, dm_uzu_peaking_gain_RBUS_reg.regValue);
#endif

}

/*===============================================================*/
/**
 * Chroma error reduction and Vertical-cti @ Scaler
 * (1) Set  registers of chroma error reduciton before vcti if scalingUP 6-tap is enabled.
 * (2) Set vcti registers.
 *
 * @param <info> { display-info structure, level:0~10 from factory mode }
 * @return { none }
 * @note
 *
 */
/*chroma error reduction and vcti type3 are new functions of atlantic*/ /*hsinyi21 20100324*/
#if 1/*CONFIG_FIRMWARE_IN_KERNEL*/

void drvif_color_scaler_setds_vcti(unsigned char display, VIP_D_vcti_t *ptr)
{
	scaleup_dm_mem_crc_ctrl_RBUS dm_mem_crc_ctrl_RBUS_reg;
	dm_mem_crc_ctrl_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_MEM_CRC_CTRL_reg);

	dm_mem_crc_ctrl_RBUS_reg.vcti_en = ptr->vcti_en;
	dm_mem_crc_ctrl_RBUS_reg.vcti_gain = ptr->vcti_gain;
	dm_mem_crc_ctrl_RBUS_reg.vcti_type3_thd = ptr->vcti_type3_thd;

	dm_mem_crc_ctrl_RBUS_reg.vcti_select = ptr->vcti_select;

	IoReg_Write32(SCALEUP_DM_MEM_CRC_CTRL_reg, dm_mem_crc_ctrl_RBUS_reg.regValue);

}
void drvif_color_scaler_getds_vcti(unsigned char display, VIP_D_vcti_t *ptr)
{
	scaleup_dm_mem_crc_ctrl_RBUS dm_mem_crc_ctrl_RBUS_reg;

	if (!ptr)
		return;

	dm_mem_crc_ctrl_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_MEM_CRC_CTRL_reg);

	ptr->vcti_en = dm_mem_crc_ctrl_RBUS_reg.vcti_en;
	ptr->vcti_gain = dm_mem_crc_ctrl_RBUS_reg.vcti_gain;
	ptr->vcti_type3_thd = dm_mem_crc_ctrl_RBUS_reg.vcti_type3_thd;
	ptr->vcti_select = dm_mem_crc_ctrl_RBUS_reg.vcti_select;


}

void drvif_color_scaler_setds_vcti_lpf(unsigned char display, DRV_D_vcti_lpf_t *ptr)
{
	scaleup_dm_uzumain_vcti_lpf_RBUS scaleup_dm_uzumain_vcti_lpf_RBUS_reg;
	scaleup_writedata_data_uzu_RBUS writedata_data_uzu_RBUS_reg;

        scaleup_dm_uzumain_vcti_lpf_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_VCTI_LPF_reg);
	writedata_data_uzu_RBUS_reg.regValue = IoReg_Read32(SCALEUP_WriteData_DATA_UZU_reg);

	scaleup_dm_uzumain_vcti_lpf_RBUS_reg.vcti_low_pass_filter_en = ptr->low_pass_filter_en;
	scaleup_dm_uzumain_vcti_lpf_RBUS_reg.vcti_lpf_hbound1 = ptr->vcti_lpf_hbound1;
	scaleup_dm_uzumain_vcti_lpf_RBUS_reg.vcti_lpf_lbound1 = ptr->vcti_lpf_lbound1;
	scaleup_dm_uzumain_vcti_lpf_RBUS_reg.vcti_lpf_mode = ptr->vcti_lpf_mode;

        writedata_data_uzu_RBUS_reg.vcti_lpf_hbound2 = ptr->vcti_lpf_hbound2;
	writedata_data_uzu_RBUS_reg.vcti_lpf_lbound2 = ptr->vcti_lpf_lbound2;


	IoReg_Write32(SCALEUP_DM_UZUMAIN_VCTI_LPF_reg, scaleup_dm_uzumain_vcti_lpf_RBUS_reg.regValue);
	IoReg_Write32(SCALEUP_WriteData_DATA_UZU_reg, writedata_data_uzu_RBUS_reg.regValue);

}
#else
void drvif_color_scaler_setds_vcti(unsigned char level)
{
	scaleup_dm_mem_crc_ctrl_RBUS dm_mem_crc_ctrl_RBUS_reg;
	scaleup_writedata_data_uzu_RBUS writedata_data_uzu_RBUS_reg;
	scaleup_dm_uzumain_h_partial_drop_RBUS dm_uzu_main_h_partial_drop_RBUS_reg;
	scaleup_dm_uzumain_v_partial_drop_RBUS dm_uzu_main_v_partial_drop_RBUS_reg;
	scaleup_dm_uzu_v8ctrl_RBUS dm_uzu_v8ctrl_RBUS_reg;
	dm_mem_crc_ctrl_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_MEM_CRC_CTRL_reg);
	writedata_data_uzu_RBUS_reg.regValue = IoReg_Read32(SCALEUP_WriteData_DATA_UZU_reg);
	dm_uzu_main_h_partial_drop_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg);
	dm_uzu_main_v_partial_drop_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg);
	dm_uzu_v8ctrl_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_UZU_V8CTRL_reg);

	/*chroma error reduction settings*/
	/*if (dm_uzu_v8ctrl_RBUS_reg.v8tap_en == 1)*/

	if (level >= 4)
		dm_uzu_main_v_partial_drop_RBUS_reg.vcti_low_pass_filter_en = 1;
	else
		dm_uzu_main_v_partial_drop_RBUS_reg.vcti_low_pass_filter_en = 0;

	dm_uzu_main_v_partial_drop_RBUS_reg.vcti_lpf_hbound1 = 0x64;
	dm_uzu_main_h_partial_drop_RBUS_reg.vcti_lpf_lbound1 = 0x0;
	writedata_data_uzu_RBUS_reg.vcti_lpf_hbound2 = 0x96;
	writedata_data_uzu_RBUS_reg.vcti_lpf_lbound2 = 0xa;

	IoReg_Write32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg, dm_uzu_main_h_partial_drop_RBUS_reg.regValue);
	IoReg_Write32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg, dm_uzu_main_v_partial_drop_RBUS_reg.regValue);
	IoReg_Write32(SCALEUP_WriteData_DATA_UZU_reg, dm_uzu_main_h_partial_drop_RBUS_reg.regValue);

	/*vcti settings*/
	if (level == 0) {
		dm_mem_crc_ctrl_RBUS_reg.vcti_en = 0;
	} else if (level > 10) {
		level = 10;
	} else {
		dm_mem_crc_ctrl_RBUS_reg.vcti_en = 1;
		dm_mem_crc_ctrl_RBUS_reg.vcti_gain = (level * 127 / 10);
		dm_mem_crc_ctrl_RBUS_reg.vcti_type3_thd = 15 - (level * 2 / 3);/*threshold of type3*/

		/*if (dm_uzu_v8ctrl_RBUS_reg.v8tap_en == 1)*/
			dm_mem_crc_ctrl_RBUS_reg.vcti_select = 3;/*type3*/
		/*else*/
		/*	dm_mem_crc_ctrl_RBUS_reg.vcti_select = 0;*/ /*type1*/

	}

	IoReg_Write32(SCALEUP_DM_MEM_CRC_CTRL_reg, dm_mem_crc_ctrl_RBUS_reg.regValue);
	IoReg_Write32(SCALEUP_WriteData_DATA_UZU_reg, writedata_data_uzu_RBUS_reg.regValue);

}
#endif





/******************************************************************************/
/**
* chroma error reduction and vcti type3 are new functions of atlantic
* Chroma error reduction and Vertical-cti @ Scaler
* (1) Set  registers of chroma error reduciton before vcti if scalingUP 6-tap is enabled.
* (2) Set vcti registers.
* @brief  Set Vertical-cti
* @param  *ptr: Specify the v cti parameter struct
* @return Null
* @retval Null
******************************************************************************/
#if 0 /*conflicting types*/
void drvif_color_scaler_setds_vcti(DRV_VipVcti_t *ptr)
{
	if (!ptr)
		return;

	scaleup_dm_mem_crc_ctrl_RBUS dm_mem_crc_ctrl_RBUS_reg;
	scaleup_writedata_data_uzu_RBUS writedata_data_uzu_RBUS_reg;
	scaleup_dm_uzumain_h_partial_drop_RBUS dm_uzu_main_h_partial_drop_RBUS_reg;
	scaleup_dm_uzumain_v_partial_drop_RBUS dm_uzu_main_v_partial_drop_RBUS_reg;
	scaleup_dm_uzu_v8ctrl_RBUS dm_uzu_v8ctrl_RBUS_reg;

	dm_mem_crc_ctrl_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_MEM_CRC_CTRL_reg);
	writedata_data_uzu_RBUS_reg.regValue = IoReg_Read32(SCALEUP_WriteData_DATA_UZU_reg);
	dm_uzu_main_h_partial_drop_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg);
	dm_uzu_main_v_partial_drop_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg);
	dm_uzu_v8ctrl_RBUS_reg.regValue = IoReg_Read32(SCALEUP_DM_UZU_V8CTRL_reg);

	/*chroma error reduction settings*/
	if (dm_uzu_v6ctrl_RBUS_reg.v6tap_en == 1) {
		dm_uzu_main_v_partial_drop_RBUS_reg.vcti_low_pass_filter_en = 0; /*2015/01/15 set value = 0  by Jun-Yu Yang*/
		dm_mem_crc_ctrl_RBUS_reg.vcti_select = 3;/*type3*/
	} else {
		dm_uzu_main_v_partial_drop_RBUS_reg.vcti_low_pass_filter_en = 0;
		dm_mem_crc_ctrl_RBUS_reg.vcti_select = 0;/*type1*/
	}

	dm_uzu_main_v_partial_drop_RBUS_reg.vcti_lpf_hbound1 = 0x64;
	dm_uzu_main_h_partial_drop_RBUS_reg.vcti_lpf_lbound1 = 0x0;
	writedata_data_uzu_RBUS_reg.vcti_lpf_hbound2 = 0x96;
	writedata_data_uzu_RBUS_reg.vcti_lpf_lbound2 = 0xa;

	dm_mem_crc_ctrl_RBUS_reg.vcti_en = ptr->Vcti_En;
	dm_mem_crc_ctrl_RBUS_reg.vcti_gain = ptr->Vcti_Gain;
	dm_mem_crc_ctrl_RBUS_reg.vcti_type3_thd = ptr->Vcti_Type3_Thd;

	IoReg_Write32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg, dm_uzu_main_h_partial_drop_RBUS_reg.regValue);
	IoReg_Write32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg, dm_uzu_main_v_partial_drop_RBUS_reg.regValue);
	IoReg_Write32(SCALEUP_WriteData_DATA_UZU_reg, writedata_data_uzu_RBUS_reg.regValue);
	IoReg_Write32(SCALEUP_DM_MEM_CRC_CTRL_reg, dm_mem_crc_ctrl_RBUS_reg.regValue);

}
#endif
void drvif_color_scaler_setds_pk(DRV_SU_PK_Coeff *ptr)
{
#if 0
	scaleup_dm_uzu_peaking_coring_RBUS	dm_uzu_Peaking_Coring_REG;
	scaleup_dm_uzu_peaking_gain_RBUS	dm_uzu_Peaking_Gain_REG;
/*	signed int Coring, X1;*/
/*	signed int ndG1, ndOffset;*/

	dm_uzu_Peaking_Coring_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Peaking_Coring_reg);
	dm_uzu_Peaking_Gain_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Peaking_Gain_reg);

	/*signed int Coring, X1;*/
	/*signed int ndG1, ndOffset;*/

	if (!ptr)
		return;
/*
	Coring = ptr->Pk_Coring;
	X1 = ptr->Pk_X1;
	ndG1 = 	ptr->Pk_NdG1;
	ndOffset = (X1-Coring)*ndG1/4;
*/

	dm_uzu_Peaking_Coring_REG.pk_en		= ptr->Pk_En;
	dm_uzu_Peaking_Coring_REG.pk_x1		= ptr->Pk_X1;
	dm_uzu_Peaking_Coring_REG.pk_coring	= ptr->Pk_Coring;
	dm_uzu_Peaking_Gain_REG.pk_g1		= ptr->Pk_NdG1;
	dm_uzu_Peaking_Gain_REG.pk_g2		= ptr->Pk_NdG2;
	dm_uzu_Peaking_Gain_REG.pk_lmtn		= ptr->Pk_NdLmtN;
	dm_uzu_Peaking_Gain_REG.pk_lmtp		= ptr->Pk_NdLmtP;
	dm_uzu_Peaking_Gain_REG.pk_offset	= ptr->ndOffset;


	IoReg_Write32(SCALEUP_DM_UZU_Peaking_Coring_reg, dm_uzu_Peaking_Coring_REG.regValue);
	IoReg_Write32(SCALEUP_DM_UZU_Peaking_Gain_reg, dm_uzu_Peaking_Gain_REG.regValue);
#endif
}

void drvif_color_sharpness_unsharp_mask(DRV_Un_Shp_Mask *ptr)
{
#if 0
/*new usm (jyyang_20140717)*/

	scaleup_dm_usm_RBUS dm_usm_Reg;
	scaleup_dm_usm_gain_curve_0_RBUS dm_usm_gain_curve_0_Reg;
	scaleup_dm_usm_gain_curve_1_RBUS dm_usm_gain_curve_1_Reg;
	scaleup_dm_usm_limit_blend_0_RBUS dm_usm_limit_blend_0_Reg;
	scaleup_dm_usm_limit_blend_1_RBUS dm_usm_limit_blend_1_Reg;
	scaleup_dm_usm_hlpf_coef_RBUS dm_usm_hlpf_coef_Reg;

	dm_usm_Reg.regValue = IoReg_Read32(SCALEUP_DM_USM_reg);
	dm_usm_gain_curve_0_Reg.regValue = IoReg_Read32(SCALEUP_DM_USM_GAIN_CURVE_0_reg);
	dm_usm_gain_curve_1_Reg.regValue = IoReg_Read32(SCALEUP_DM_USM_GAIN_CURVE_1_reg);
	dm_usm_limit_blend_0_Reg.regValue = IoReg_Read32(SCALEUP_DM_USM_LIMIT_BLEND_0_reg);
	dm_usm_limit_blend_1_Reg.regValue = IoReg_Read32(SCALEUP_DM_USM_LIMIT_BLEND_1_reg);
	dm_usm_hlpf_coef_Reg.regValue = IoReg_Read32(SCALEUP_DM_USM_HLPF_COEF_reg);

	dm_usm_Reg.usm_en = ptr->Usm_En;
	dm_usm_Reg.max_minus_min_mode = ptr->Max_Minus_Min_Mode;
	dm_usm_Reg.max_minus_min_range = ptr->Max_Minus_Min_Range;
	dm_usm_Reg.max_min_range = ptr->Max_Min_Range;
	dm_usm_Reg.usm_gain = ptr->Usm_Gain;

	dm_usm_gain_curve_0_Reg.gain_curve_en = ptr->Gain_Curve_En;
	dm_usm_gain_curve_0_Reg.gain_curve_thd0 = ptr->GainCurve_Thd0;
	dm_usm_gain_curve_0_Reg.gain_curve_thd1 = ptr->GainCurve_Thd1;
	dm_usm_gain_curve_0_Reg.gain_curve_thd2 = ptr->GainCurve_Thd2;

	dm_usm_gain_curve_1_Reg.gain_curve_gain0 = ptr->GainCurve_Gain0;
	dm_usm_gain_curve_1_Reg.gain_curve_gain1 = ptr->GainCurve_Gain1;
	dm_usm_gain_curve_1_Reg.gain_curve_step0 = ptr->GainCurve_Step0;
	dm_usm_gain_curve_1_Reg.gain_curve_step1 = ptr->GainCurve_Step1;

	dm_usm_limit_blend_0_Reg.limit_blend_en = ptr->Limit_Blend_En;
	dm_usm_limit_blend_0_Reg.limit_blend_thd0 = ptr->LimitBlend_Thd0;
	dm_usm_limit_blend_0_Reg.limit_blend_thd1 = ptr->LimitBlend_Thd1;

	dm_usm_limit_blend_1_Reg.limit_blend_step = ptr->LimitBlend_Step;
	dm_usm_limit_blend_1_Reg.limit_blend_weight0 = ptr->LimitBlend_Wt0;
	dm_usm_limit_blend_1_Reg.limit_blend_weight1 = ptr->LimitBlend_Wt1;

	IoReg_Write32(SCALEUP_DM_USM_reg, dm_usm_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_USM_GAIN_CURVE_0_reg, dm_usm_gain_curve_0_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_USM_GAIN_CURVE_1_reg, dm_usm_gain_curve_1_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_USM_LIMIT_BLEND_0_reg, dm_usm_limit_blend_0_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_USM_LIMIT_BLEND_1_reg, dm_usm_limit_blend_1_Reg.regValue);
	IoReg_Write32(SCALEUP_DM_USM_HLPF_COEF_reg, dm_usm_hlpf_coef_Reg.regValue);
#endif
}



unsigned char fwif_color_scaler_getscaledown_hcoef(unsigned char display)
{
	if (display == SLR_MAIN_DISPLAY)
		return SD_H_Coeff_Sel[g_ucSDFHSel];
	else
		return 0;
}

unsigned char fwif_color_scaler_getscaledown_vcoef(unsigned char display)
{
	if (display == SLR_MAIN_DISPLAY)
		return SD_V_Coeff_Sel[g_ucSDFVSel];
	else
		return 0;
}

unsigned char fwif_color_scaler_getscaledown_444_to_422_coef(unsigned char display)
{
	if (display == SLR_MAIN_DISPLAY)
		return g_ucSDFH444To422Sel;
	else
		return 0;
}
/*
void drvif_color_scaler_setscaledown_hcoef(unsigned char display, unsigned char factor)
{
	if (factor >= SDFIR64_MAXNUM)
		return;

	unsigned int tmp_data;
	unsigned char i;
	signed short *coef_pt;

	coef_pt = tScaleDown_COEF_TAB[factor];

	if (display == SLR_MAIN_DISPLAY && g_ucIsHScalerDown && !g_ucIsH444To422)		//channel 1
	{
		for (i = 0 ; i < 16 ; i++)
		{
			tmp_data = ((unsigned int)(*coef_pt++)<<16);
			tmp_data += (unsigned int)(*coef_pt++);
			if (IoReg_Read32(VGIP_Data_Path_Select_reg)&_BIT10) {	//go DI path	//Elsie 20140519: UZD1 data path select has been moved to bit10
				IoReg_Write32(HSD_DITHER_DI_UZD_FIR_Coef_Tab1_C0_reg + i*4, tmp_data);
			} else {
				IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab1_C0_reg + i*4, tmp_data);
			}
		}
		SD_H_Coeff_Sel[g_ucSDFHSel] = factor;
	}
}

void drvif_color_scaler_setscaledown_vcoef(unsigned char display, unsigned char factor)
{
	if (factor >= SDFIR64_MAXNUM)
		return;

	unsigned int tmp_data;
	unsigned char i;
	signed short *coef_pt;

	coef_pt = tScaleDown_COEF_TAB[factor];

	if (display == SLR_MAIN_DISPLAY && g_ucIsVScalerDown)		//channel 1
	{
		for (i = 0 ; i < 16 ; i++)
		{
			tmp_data = ((unsigned int)(*coef_pt++)<<16);
			tmp_data += (unsigned int)(*coef_pt++);
			IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab2_C0_reg + i*4, tmp_data);
		}
		SD_V_Coeff_Sel[g_ucSDFVSel] = factor;
	}
}
*/
void drvif_color_scaler_setscaledown_hcoef(unsigned char display, signed short *coef_table)
{
	unsigned int tmp_data;
	unsigned char i;
	signed short *coef_pt;

	coef_pt = coef_table;


	/*DC Value Check*/
	if (SCALING_LOG) {
		for(i=0; i<8; i++) {
			if((*(coef_pt+i)+*(coef_pt+i+16)+*(coef_pt+31-i)+*(coef_pt+15-i)) != 1024)
				VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
		}
	}

	if (display == SLR_MAIN_DISPLAY) {		/*channel 1*/
		for (i = 0 ; i < 16 ; i++) {
			tmp_data = ((unsigned int)(*coef_pt++) << 16);
			tmp_data += ((unsigned int)(*coef_pt++)) & 0xFFFF;
			if (IoReg_Read32(VGIP_Data_Path_Select_reg)&_BIT10) {	/*go DI path*/	/*Elsie 20140519: UZD1 data path select has been moved to bit10*/
				IoReg_Write32(HSD_DITHER_DI_UZD_FIR_Coef_Tab1_C0_reg + i * 4, tmp_data);
				IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab1_C0_reg + i * 4, tmp_data);
			} else {
				IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab1_C0_reg + i * 4, tmp_data);
			}
		}
		/*SD_H_Coeff_Sel[g_ucSDFHSel] = factor;*/
	}
}

void drvif_color_scaler_setscaledown_vcoef(unsigned char display, signed short *coef_table)
{
	unsigned int tmp_data;
	unsigned char i;
	signed short *coef_pt;

	coef_pt = coef_table;

	/*DC Value Check*/
	if (SCALING_LOG) {
		for(i=0; i<8; i++) {
			if((*(coef_pt+i)+*(coef_pt+i+16)+*(coef_pt+31-i)+*(coef_pt+15-i)) != 1024)
				VIPprintf("[Warnning] [%s-%s-%d] DC Not Balance!, i=%d\n", __FILE__, __func__, __LINE__, i);
		}
	}

	if (display == SLR_MAIN_DISPLAY) {		/*channel 1*/
		for (i = 0 ; i < 16 ; i++) {
			tmp_data = ((unsigned int)(*coef_pt++) << 16);
			tmp_data += ((unsigned int)(*coef_pt++)) & 0xFFFF;
			IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab2_C0_reg + i*4, tmp_data);
		}
		/*SD_V_Coeff_Sel[g_ucSDFVSel] = factor;*/
	}
}

void fwif_color_scaler_setscaledown_444_to_422_coef(unsigned char display, unsigned char factor, DRV_ScalingDown_COEF_TAB *ScaleDown_COEF_TAB)
{
	signed short *coef_table;
	g_ucSDFH444To422Sel = factor;

	if (factor >= SDFIR64_MAXNUM) {
		VIPprintf("SDFIR index error,_444_2_422\n");
		return;
	}

	if (g_ucIsHScalerDown == 1 || g_ucIsH444To422 == 0) {		/*channel 1*/
		VIPprintf("g_ucIsHScalerDown == 1, g_ucIsH444To422 == 0, return");
		return;
	}

	coef_table = &(ScaleDown_COEF_TAB->FIR_Coef_Table[factor][0]);
	drvif_color_scaler_setscaledown_444_to_422_coef(display, coef_table);

}

void drvif_color_scaler_setscaledown_444_to_422_coef(unsigned char display, signed short *coef_table)
{
	unsigned int tmp_data;
	unsigned char i;
	signed short *coef_pt;

	coef_pt = coef_table;

	if (display == SLR_MAIN_DISPLAY) {		/*channel 1*/
		for (i = 0 ; i < 16 ; i++) {
			tmp_data = ((unsigned int)(*coef_pt++)<<16);
			tmp_data += ((unsigned int)(*coef_pt++)) & 0xFFFF;
			IoReg_Write32(SCALEDOWN_ICH1_UZD_FIR_Coef_Tab1_C0_reg + i * 4, tmp_data);
		}
	}
}
/*
void drvif_color_regSDHTable(unsigned char *ptr)
{
	if (ptr)
		SD_H_Index_Table = ptr;
}

void drvif_color_regSDVTable(unsigned char *ptr)
{
	if (ptr)
		SD_V_Index_Table = ptr;
}
*/
/*
void drvif_color_scaler_setscaledown_hcoef_table(unsigned char display, unsigned char factor)
{
	if (NULL == SD_H_Index_Table) return;

	if (display == SLR_MAIN_DISPLAY)
	{
		memcpy(SD_H_Coeff_Sel, SD_H_Index_Table+sizeof(SD_H_Coeff_Sel)*factor, sizeof(SD_H_Coeff_Sel));
		drvif_color_scaler_setscaledown_hcoef(SLR_MAIN_DISPLAY, SD_H_Coeff_Sel[g_ucSDFHSel]);
	}
}

void drvif_color_scaler_setscaledown_vcoef_table(unsigned char display, unsigned char factor)
{
	if (NULL == SD_V_Index_Table) return;

	if (display == SLR_MAIN_DISPLAY)
	{
		memcpy(SD_V_Coeff_Sel, SD_V_Index_Table+sizeof(SD_V_Coeff_Sel)*factor, sizeof(SD_V_Coeff_Sel));
		drvif_color_scaler_setscaledown_vcoef(SLR_MAIN_DISPLAY, SD_V_Coeff_Sel[g_ucSDFVSel]);
	}
}
*/

void fwif_color_scaler_setscaledown_hcoef_table(unsigned char display, unsigned char *index_table, DRV_ScalingDown_COEF_TAB *ScaleDown_COEF_TAB, _RPC_system_setting_info *RPC_system_setting_info)
{
	signed short *coef_table;
	unsigned char index = index_table[g_ucSDFHSel];
	memcpy(SD_H_Coeff_Sel, index_table, sizeof(SD_H_Coeff_Sel));

	RPC_system_setting_info->ScalingDown_Setting_INFO.SDFHSel = g_ucSDFHSel;
	RPC_system_setting_info->ScalingDown_Setting_INFO.IsH444To422 = g_ucIsH444To422;
	RPC_system_setting_info->ScalingDown_Setting_INFO.IsHScalerDown = g_ucIsHScalerDown;
#ifdef CONFIG_ARM64
	memcpy_toio(&(RPC_system_setting_info->ScalingDown_Setting_INFO.SD_H_Coeff_Sel[0]), &(SD_H_Coeff_Sel[0]), sizeof(char) * VIP_ScalingDown_FIR_Level_Max);
#else
	memcpy(&(RPC_system_setting_info->ScalingDown_Setting_INFO.SD_H_Coeff_Sel[0]), &(SD_H_Coeff_Sel[0]), sizeof(char) * VIP_ScalingDown_FIR_Level_Max);
#endif

	if (index >= SDFIR64_MAXNUM) {
		VIPprintf("SDFIR index error,_hcoef_table\n");
		return;
	}

	if (g_ucIsHScalerDown == 0 || g_ucIsH444To422 == 1) {		/*channel 1*/
		VIPprintf("g_ucIsHScalerDown == 0, g_ucIsH444To422 == 1, return");
		return;
	}

	coef_table = &(ScaleDown_COEF_TAB->FIR_Coef_Table[index][0]);
	drvif_color_scaler_setscaledown_hcoef(display, coef_table);
}

void fwif_color_scaler_setscaledown_vcoef_table(unsigned char display, unsigned char *index_table, DRV_ScalingDown_COEF_TAB *ScaleDown_COEF_TAB, _RPC_system_setting_info *RPC_system_setting_info)
{
	signed short *coef_table;
	unsigned char index = index_table[g_ucSDFVSel];
	memcpy(SD_V_Coeff_Sel, index_table, sizeof(SD_V_Coeff_Sel));

	RPC_system_setting_info->ScalingDown_Setting_INFO.SDFVSel = g_ucSDFVSel;
	RPC_system_setting_info->ScalingDown_Setting_INFO.IsVScalerDown = g_ucIsVScalerDown;
#ifdef CONFIG_ARM64
	memcpy_toio(&(RPC_system_setting_info->ScalingDown_Setting_INFO.SD_V_Coeff_Sel[0]), &(SD_V_Coeff_Sel[0]), sizeof(char) * VIP_ScalingDown_FIR_Level_Max);
#else
	memcpy(&(RPC_system_setting_info->ScalingDown_Setting_INFO.SD_V_Coeff_Sel[0]), &(SD_V_Coeff_Sel[0]), sizeof(char) * VIP_ScalingDown_FIR_Level_Max);
#endif

	if (index >= SDFIR64_MAXNUM) {
		VIPprintf("SDFIR index error,_vcoef_table\n");
		return;
	}

	if (g_ucIsVScalerDown == 0) {		/*channel 1*/
		VIPprintf("g_ucIsVScalerDown == 0, return");
		return;
	}

	coef_table = &(ScaleDown_COEF_TAB->FIR_Coef_Table[index][0]);
	drvif_color_scaler_setscaledown_vcoef(display, coef_table);
}

/*Elsie 20131223*/
void drvif_set_uzu_coeff(int h_factor_offset, int v_factor_offset, unsigned char h_initial, unsigned char v_initial)
{
	VIPprintf("[drvif_set_uzd_coeff]h_initial =%d, h_factor_offset =%d\n", h_initial, h_factor_offset);
	uzu_coeff.h_factor_offset = h_factor_offset;
	uzu_coeff.v_factor_offset = v_factor_offset;
	uzu_coeff.h_initial = h_initial;
	uzu_coeff.v_initial = v_initial;
	uzu_coeff.user_defined = 1;
}

void drvif_disable_user_uzu_coeff(void)
{
	uzu_coeff.user_defined = 0;
}


unsigned char drvif_color_get_scaleup_cuthor4line(void)
{
	/*UZU overscan bypass for 3D mode (3D overscan also in UZU)*/
	if (Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE() && (drvif_color_ultrazoom_check_3D_overscan_enable() == TRUE))
		return 0;

	if (Scaler_InputSrcGetMainChType() != _SRC_TV && Scaler_InputSrcGetMainChType() != _SRC_CVBS &&
		Scaler_InputSrcGetMainChType() != _SRC_YPBPR && Scaler_InputSrcGetMainChType() != _SRC_HDMI) {
		return 0;
	} else if ((Scaler_PipGetInfo(SLR_PIP_ENABLE)) || (isCutHor4Line == FALSE)) {
		return 0;
	} else {
		return SCALEUP_CUT_HOR_4LINE;
		/*return Scaler_GetAutoMA6Flag();*/
	}
}
unsigned char drvif_color_get_scaleup_cutver2line(void)
{

	/*UZU overscan bypass for 3D mode (3D overscan also in UZU)*/
	if (Get_PANEL_3D_DISPLAY_SUPPORT_ENABLE() && (drvif_color_ultrazoom_check_3D_overscan_enable() == TRUE))
		return 0;

	if (Scaler_InputSrcGetMainChType() != _SRC_TV && Scaler_InputSrcGetMainChType() != _SRC_CVBS &&
		Scaler_InputSrcGetMainChType() != _SRC_YPBPR && Scaler_InputSrcGetMainChType() != _SRC_HDMI) {
		return 0;
	} else if ((Scaler_PipGetInfo(SLR_PIP_ENABLE)) || (isCutVer2Line == FALSE)) {
		return 0;
	} else {
		return SCALEUP_CUT_VER_2LINE;
		/*return Scaler_GetAutoMA6Flag();*/
	}
}

void drvif_color_enable_scaleup_cuthor4line(unsigned char isEnabled)
{
	isCutHor4Line = isEnabled;
}
void drvif_color_enable_scaleup_cutver2line(unsigned char isEnabled)
{
	isCutVer2Line = isEnabled;
}
#if CONFIG_FIRMWARE_IN_KERNEL
void drvif_color_enable_scaleup_hor_start_drop(unsigned char isEnabled)
{
	isHorStartDrop = isEnabled;
}
#endif

/*========================End of File=======================================*/
/**
*
* @}
*/
void drvif_color_Set_Two_Step_UZU_Mode(VIP_Two_Step_UZU_MODE Mode)
{
	Two_Step_UZU_Mode = Mode;
}

unsigned char drvif_color_Get_Two_Step_UZU_Mode(void)
{
	return (unsigned char)Two_Step_UZU_Mode;
}

char drvif_color_Access_UZU_Bypass_No_PwrSave(unsigned char En_Flag, unsigned char isSet_Flag)
{
	scaleup_d_uzu_globle_ctrl_RBUS d_uzu_Globle_Ctrl_reg;
	d_uzu_Globle_Ctrl_reg.regValue = IoReg_Read32(SCALEUP_D_UZU_Globle_Ctrl_reg);

	if (isSet_Flag == 1) {
		d_uzu_Globle_Ctrl_reg.uzu_bypass_no_pwrsave = En_Flag;
		IoReg_Write32(SCALEUP_D_UZU_Globle_Ctrl_reg, d_uzu_Globle_Ctrl_reg.regValue);
	}

	return d_uzu_Globle_Ctrl_reg.uzu_bypass_no_pwrsave;
}

void drvif_color_scaler_setscaleup_directionalscaler_weight(unsigned char weight)
{
	scaleup_dm_dir_uzu_conf_RBUS dm_dir_uzu_conf_Reg;

        dm_dir_uzu_conf_Reg.regValue = IoReg_Read32(SCALEUP_DM_DIR_UZU_Conf_reg);
        dm_dir_uzu_conf_Reg.conf_offset = weight;

        IoReg_Write32(SCALEUP_DM_DIR_UZU_Conf_reg, dm_dir_uzu_conf_Reg.regValue);
}
void drvif_color_scaler_setscaleup120Hz_factor_H(int x)
{
	two_step_uzu_dm_two_step_sr_scale_hor_factor_RBUS reg_two_step_uzu_dm_two_step_sr_scale_hor_factor_reg;
	reg_two_step_uzu_dm_two_step_sr_scale_hor_factor_reg.regValue = rtd_inl(TWO_STEP_UZU_DM_TWO_STEP_SR_Scale_Hor_Factor_reg);
	reg_two_step_uzu_dm_two_step_sr_scale_hor_factor_reg.hor_factor = x;
	rtd_outl(TWO_STEP_UZU_DM_TWO_STEP_SR_Scale_Hor_Factor_reg, reg_two_step_uzu_dm_two_step_sr_scale_hor_factor_reg.regValue);
}
void drvif_color_scaler_setscaleup120Hz_factor_V(int x)
{
	two_step_uzu_dm_two_step_sr_scale_ver_factor_RBUS reg_two_step_uzu_dm_two_step_sr_scale_ver_factor_reg;
	reg_two_step_uzu_dm_two_step_sr_scale_ver_factor_reg.regValue = rtd_inl(TWO_STEP_UZU_DM_TWO_STEP_SR_Scale_Ver_Factor_reg);
	reg_two_step_uzu_dm_two_step_sr_scale_ver_factor_reg.ver_factor = x;
	rtd_outl(TWO_STEP_UZU_DM_TWO_STEP_SR_Scale_Ver_Factor_reg, reg_two_step_uzu_dm_two_step_sr_scale_ver_factor_reg.regValue);
}

void drvif_color_scaler_setscaleup120Hz_factor_bysize(int in_hsize,int in_vsize)
{
        two_step_uzu_dm_two_step_sr_input_size_RBUS reg_two_step_uzu_dm_two_step_sr_input_size_reg;

	reg_two_step_uzu_dm_two_step_sr_input_size_reg.regValue = rtd_inl(TWO_STEP_UZU_DM_TWO_STEP_SR_Input_Size_reg);
	reg_two_step_uzu_dm_two_step_sr_input_size_reg.hor_input_size = in_hsize;
	reg_two_step_uzu_dm_two_step_sr_input_size_reg.ver_input_size = in_vsize;


	rtd_outl(TWO_STEP_UZU_DM_TWO_STEP_SR_Input_Size_reg, reg_two_step_uzu_dm_two_step_sr_input_size_reg.regValue);
}
void drvif_color_ultrazoom_scalerup_setorbit(
	int x_in_width,// width before scale up
	int x_in_height,// height before scale up
	int x_out_width,// width after scale up
	int x_out_height,// height after scale up
	int x_out_left,// cropped width after scale up
	int x_out_up,// cropped height after scale up
	int display_width,//real display width
	int display_height,//real display height
	int mode// 0:normal 1:8q+r
)
{
	int z1=0;
	int z2=0;
    int v_back =0;//to set uzu back drop line
    int z_orbit8q_i=0;
    int z_orbit8q_j=0;//cal the line crop by vo
	unsigned long long tmpLength = 0;
	unsigned int nFactor = 0;
    int input_size =0;//calculate the size put into uzu SRAM
	scaleup_dm_uzu_scale_hor_factor_RBUS hor_factor_reg;
	scaleup_dm_uzu_scale_ver_factor_RBUS ver_factor_reg;
	scaleup_dm_uzu_initial_value_RBUS dm_uzu_Initial_Value_REG;
	scaleup_dm_uzumain_h_partial_drop_RBUS h_partial_drop_reg;
	scaleup_dm_uzumain_v_partial_drop_RBUS v_partial_drop_reg;
	scaleup_dm_uzu_input_size_RBUS input_size_reg;
	ppoverlay_uzudtg_control1_RBUS ppoverlay_uzudtg_control1_reg;

	hor_factor_reg.regValue = IoReg_Read32(SCALEUP_DM_UZU_Scale_Hor_Factor_reg);
	ver_factor_reg.regValue = IoReg_Read32(SCALEUP_DM_UZU_Scale_Ver_Factor_reg);
	dm_uzu_Initial_Value_REG.regValue = IoReg_Read32(SCALEUP_DM_UZU_Initial_Value_reg);
	h_partial_drop_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg);
	v_partial_drop_reg.regValue = IoReg_Read32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg);
	input_size_reg.regValue = IoReg_Read32(SCALEUP_DM_UZU_Input_Size_reg);
	ppoverlay_uzudtg_control1_reg.regValue = IoReg_Read32(PPOVERLAY_uzudtg_control1_reg);

	tmpLength = ((unsigned long long)x_in_width<<21);
    if(0==x_out_width)
    {
        pr_warning("[%s] x_out_width = %d  \n",__FUNCTION__, x_out_width);
        x_out_width = 3840;
    }
#if CONFIG_FIRMWARE_IN_KERNEL
        do_div(tmpLength, x_out_width);
        nFactor = tmpLength;
#else
        nFactor = tmpLength/(unsigned long long)x_out_width;
#endif

	if(ppoverlay_uzudtg_control1_reg.two_step_uzu_en==0)
	{
		hor_factor_reg.hor_factor=(nFactor+1)>>1;
	}
	else
	{
		hor_factor_reg.hor_factor=nFactor;
	}

	tmpLength = ((unsigned long long)x_in_height<<21);
    if(0==x_out_height)
    {
        pr_warning("[%s] x_out_height = %d  \n",__FUNCTION__, x_out_height);
        x_out_height = 2160;
    }

#if CONFIG_FIRMWARE_IN_KERNEL
    	do_div(tmpLength, x_out_height);
    	nFactor = tmpLength;
#else
    	nFactor = tmpLength/(unsigned long long)x_out_height;
#endif

	if(ppoverlay_uzudtg_control1_reg.two_step_uzu_en==0)
	{
		ver_factor_reg.ver_factor=(nFactor+1)>>1;
	}
	else
	{
		ver_factor_reg.ver_factor=nFactor;
	}

    //to calculate the size put into UZU SRAM
    //ie.,for input 3840*2160, scale up to 3880*2180
    //input_size = (display_width/x_in_width) * x_in_width / (x_out_width/x_in_width)
    //after simplifying, input_size = display_width * x_in_width/x_out_width
    input_size = display_width*x_in_width/x_out_width;
	z1=x_out_left*x_in_width/x_out_width;
	z2=x_out_left*x_in_width-z1*x_out_width;
	z2=z2<<8;
	z2=z2/x_out_width;
	if(z2<0){z2=0;}
	if(z2>255){z2=255;}
	if(mode&2){
		z_orbit8q_i=z1&-8;
        z1 = z1&7;
	}
    //hor_back_drop needs to calculate by x_in_width, front_drop and input_size,
    h_partial_drop_reg.hor_m_back_drop = x_in_width - input_size - z1;
    input_size_reg.hor_input_size= input_size;
    dm_uzu_Initial_Value_REG.hor_ini = z2;
	h_partial_drop_reg.hor_m_front_drop = z1;

	z1=x_out_up*x_in_height/x_out_height;
	z2=x_out_up*x_in_height-z1*x_out_height;
	z2=z2<<8;
	z2=z2/x_out_height;
	if(z2<0){z2=0;}
	if(z2>255){z2=255;}
	if(mode&1){
		z_orbit8q_j=z1&-8;
        z1 = z1&7;
	}

    input_size = display_height*x_in_height/x_out_height;
    //ver_back need to consider the line crop by vo
    v_back = x_in_height - input_size - z_orbit8q_j - z1;
    if(mode&1)
        v_back = v_back&7;//since vo will crop some back line
    v_partial_drop_reg.ver_m_back_drop = v_back;
    input_size_reg.ver_input_size= input_size;
	v_partial_drop_reg.ver_m_front_drop = z1;
	dm_uzu_Initial_Value_REG.ver_ini = z2;

    pr_notice("[%s] v_input_size = %d ,v_front = %d, v_back =%d \n",__FUNCTION__, input_size,z1,v_back);

    ///need to check side effect
    if(x_in_width == x_out_width )//for no signal
    {
		hor_factor_reg.hor_factor=0xfffff;
        dm_uzu_Initial_Value_REG.hor_ini = 0xff;
    }

    if(x_in_height == x_out_height )//&&Scaler_DispGetInputInfo(SLR_INPUT_FRAMESYNC) != 1)
    {
		ver_factor_reg.ver_factor=0xfffff;
        dm_uzu_Initial_Value_REG.ver_ini = 0xff;
    }

	IoReg_Write32(SCALEUP_DM_UZU_Scale_Hor_Factor_reg, hor_factor_reg.regValue);
	IoReg_Write32(SCALEUP_DM_UZU_Scale_Ver_Factor_reg, ver_factor_reg.regValue);
	IoReg_Write32(SCALEUP_DM_UZU_Initial_Value_reg, dm_uzu_Initial_Value_REG.regValue);
	IoReg_Write32(SCALEUP_DM_UZUMAIN_H_PARTIAL_DROP_reg, h_partial_drop_reg.regValue);
	IoReg_Write32(SCALEUP_DM_UZUMAIN_V_PARTIAL_DROP_reg, v_partial_drop_reg.regValue);
	IoReg_Write32(SCALEUP_DM_UZU_Input_Size_reg, input_size_reg.regValue);

	rtd_setbits(SCALEUP_DM_UZU_DB_CTRL_reg, SCALEUP_DM_UZU_DB_CTRL_db_apply_mask|SCALEUP_DM_UZU_DB_CTRL_db_en_mask);// DB_APPLY

	pr_notice("drvif_color_ultrazoom_scalerup_setorbit(%d.%d.%d.%d.%d.%d.%d.%d.%d.%d %d.%d.%d.%d)\n", x_in_width, x_in_height,
		x_out_width, x_out_height, x_out_left, x_out_up,display_width,display_height, hor_factor_reg.hor_factor, ver_factor_reg.ver_factor,
		h_partial_drop_reg.hor_m_front_drop,dm_uzu_Initial_Value_REG.hor_ini,v_partial_drop_reg.ver_m_front_drop,dm_uzu_Initial_Value_REG.ver_ini);
}



