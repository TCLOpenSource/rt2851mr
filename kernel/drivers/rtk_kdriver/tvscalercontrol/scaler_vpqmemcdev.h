#ifndef VPQ_MEMC_H
#define VPQ_MEMC_H

#include <linux/types.h>
#include <rtd_types.h>

#ifndef BOOLEAN
#ifndef _EMUL_WIN
typedef	unsigned int			__BOOLEAN;
#define BOOLEAN __BOOLEAN
#else
typedef	unsigned char		__BOOLEAN;
#define BOOLEAN __BOOLEAN
#endif
#endif



/*-----------------------------------------------------------------------------
	Constant Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Macro Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Extern Variables & Function Prototype Declarations
------------------------------------------------------------------------------*/
#define MEMC_DYNAMIC_ONOFF 0
#define MEMC_SUSPEND_RESUME_TEST 1
/*-----------------------------------------------------------------------------
	Local Constant Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Local Type Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Global Type Definitions
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Static Variables & Function Prototypes Declarations
------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
	Global Variables & Function Prototypes Declarations
------------------------------------------------------------------------------*/
/**
 * FRC MC type
 *
 */
typedef enum {
	VPQ_MEMC_TYPE_OFF = 0,      //24->60
	VPQ_MEMC_TYPE_LOW,
	VPQ_MEMC_TYPE_HIGH,
	VPQ_MEMC_TYPE_NORMAL,		// Clear Plus
	VPQ_MEMC_TYPE_USER,
	VPQ_MEMC_TYPE_55_PULLDOWN,  //24->48
	VPQ_MEMC_TYPE_MEDIUM,	
	VPQ_MEMC_TYPE_MAX,
} VPQ_MEMC_TYPE_T;

/**
*FRC bypass Region
*
*/
typedef enum {
	VPQ_BYPASS_REGION_0	= 0,
	VPQ_BYPASS_REGION_1,
	VPQ_BYPASS_REGION_2,
	VPQ_BYPASS_REGION_3,
	VPQ_BYPASS_REGION_4,
	VPQ_BYPASS_REGION_MAX,
} VPQ_MEMC_BYPASS_REGION_T;

/**
*FRC Rect
*
*/
typedef struct {
	UINT32		w;
	UINT32		h;
	UINT32		x;
	UINT32		y;
} VPQ_MEMC_BYPASS_REGION_RECT_T;


/**
 *FRC video mute type
 *
 */
typedef enum {
	VPQ_MEMC_MUTE_TYPE_INPUT = 0,
	VPQ_MEMC_MUTE_TYPE_OUTPUT,
	VPQ_MEMC_MUTE_TYPE_LVDS,
	VPQ_MEMC_MUTE_TYPE_MAX
} VPQ_MEMC_MUTE_TYPE_T;

typedef struct{
	UINT32 blurLevel;
	UINT32 judderLevel;
	UINT32 motion;
}VPQ_MEMC_SETMOTIONCOMP_T;

typedef struct{
	UINT32 bMotionPro;
}VPQ_MEMC_SETMOTIONPRO_T;

typedef struct{
	UINT32 type;
	UINT32 bOnOff;
}VPQ_MEMC_SETVIDEOBLOCK_T;

typedef struct{
	UINT32 bOnOff;
	UINT32 region;
	UINT32 x;
	UINT32 y;
	UINT32 w;
	UINT32 h;
}VPQ_MEMC_SETBYPASSREGION_T;

typedef struct{
	UINT32 bOnOff;
	UINT32 r;
	UINT32 g;
	UINT32 b;
}VPQ_MEMC_SETDEMOBAR_T;

/*! MEMC Input signal resolution enum. */
typedef enum
{
	VPQ_INPUT_1920X1080,					///< 1920X1080 resolution for FPGA Validation
	VPQ_INPUT_1920X540,						///< 1920X540  resolution for FPGA Validation
	VPQ_INPUT_3840X2160,					///< 3840x2160 resolution
	VPQ_INPUT_3840X1080,					///< 3840x2160 resolution, it is 3D input
	VPQ_INPUT_3840X540,						///< 3840X540 resolution
	VPQ_INPUT_1920X2160,					///< 1920X2160 resolution
	VPQ_INPUT_RESOLUTION_MAX,
}VPQ_MEMC_INPUT_RESOLUTION;

/*! MEMC Output signal resolution enum. */
typedef enum
{
	VPQ_OUTPUT_1920X1080,					///< 1920x1080 resolution for FPGA Validation
	VPQ_OUTPUT_1920X540,					///< 1920x540  resolution for FPGA Validation
	VPQ_OUTPUT_3840X2160,					///< 3840x2160 resolution
	VPQ_OUTPUT_3840X1080,					///< 3840x1080 resolution
	VPQ_OUTPUT_3840X540, 					///< 3840X540 resolution
	VPQ_OUTPUT_RESOLUTION_MAX,
}VPQ_MEMC_OUTPUT_RESOLUTION;

/*! MEMC Input signal frame rate enum. */
typedef enum
{
	VPQ_INPUT_24HZ,							///< input 24Hz
	VPQ_INPUT_25HZ,							///< input 25Hz
	VPQ_INPUT_30HZ,							///< input 30Hz
	VPQ_INPUT_48HZ,							///< input 48Hz
	VPQ_INPUT_50HZ,							///< input 50Hz
	VPQ_INPUT_60HZ,							///< input 60Hz
	VPQ_INPUT_96HZ,							///< input 96Hz
	VPQ_INPUT_100HZ,						///< input 100Hz
	VPQ_INPUT_120HZ,						///< input 120Hz
	VPQ_INPUT_FRAME_MAX,
}VPQ_MEMC_INPUT_FRAMERATE;

/*! MEMC Output signal frame rate enum. */
typedef enum
{
	VPQ_OUTPUT_48HZ,						///< output 48Hz
	VPQ_OUTPUT_50HZ,						///< output 50Hz
	VPQ_OUTPUT_60HZ,						///< output 60Hz
	VPQ_OUTPUT_96HZ,						///< output 96Hz
	VPQ_OUTPUT_100HZ,						///< output 100Hz
	VPQ_OUTPUT_120HZ,						///< output 120Hz
	VPQ_OUTPUT_200HZ,						///< output 200Hz
	VPQ_OUTPUT_240HZ,						///< output 240Hz
	VPQ_OUTPUT_FRAME_MAX,
	VPQ_OUTPUT_FRAME_INVALID = 255,
}VPQ_MEMC_OUTPUT_FRAMERATE;

/*! MEMC Input format enum. */
typedef enum
{
	VPQ_INPUT_2D,							///< memc input is 2D
	VPQ_INPUT_3D_SBS,						///< memc input is 3D side by side
	VPQ_INPUT_3D_TB,						///< memc input is 3D top and bottom
	VPQ_INPUT_3D_LR,						///< memc input is 3D frame sequential
	VPQ_INPUT_3D_LBL,						///< memc input is 3D line by line
	VPQ_INPUT_FORMAT_MAX,
}VPQ_MEMC_INPUT_FORMAT;

/*! MEMC Output format enum. */
typedef enum
{
	VPQ_OUTPUT_2D,							///< memc output is 2D
	VPQ_OUTPUT_3D_SG,						///< memc output is shutter glass 3D
	VPQ_OUTPUT_3D_PR,						///< memc output is Polarized 3D
	VPQ_OUTPUT_3D_SG_LLRR,					///< memc output is shutter glass 3D LLRR
	VPQ_OUTPUT_FORMAT_MAX,
}VPQ_MEMC_OUTPUT_FORMAT;

/*! MEMC In/Out mode enum. */
typedef enum
{
	VPQ_MEMC_RGB_IN_VIDEO_OUT,				///< memc RGB in and video output
	VPQ_MEMC_RGB_IN_PC_OUT,					///< memc RGB in and pc output
	VPQ_MEMC_YUV_IN_VIDEO_OUT, 				///< memc YUV444 in and video output
	VPQ_MEMC_YUV_IN_PC_OUT,					///< memc YUV444 in and pc output
	VPQ_MEMC_INOUT_MODE_MAX,
}VPQ_MEMC_INOUT_MODE;

/*! MEMC mode enum. */
typedef enum
{
	VPQ_MEMC_SMOOTH,						///< Smooth mode
	VPQ_MEMC_CLEAR,							///< Clear mode
	VPQ_MEMC_NORMAL,						///< Normal mode
	VPQ_MEMC_OFF,							///< Off mode
	VPQ_MEMC_USER,							///< User mode, can manually set dejudder and deblur level
	VPQ_MEMC_MODE_MAX,
}VPQ_MEMC_MODE;

/*! MEMC RIM mode. */
typedef enum
{
	VPQ_RIM_MODE_0,							///< memc rim mode 0
	VPQ_RIM_MODE_1,							///< memc rim mode 1
}VPQ_MEMC_RIM_MODE;

/*! module ID enum */
typedef enum
{
	VPQ_MODULE_ID_APP,
	VPQ_MODULE_ID_FRC,
}VPQ_MODULE_ID;

/*! MEMC demo mode enum. */
typedef enum
{
	VPQ_DEMO_MODE_OFF,						///< Demo mode off
	VPQ_DEMO_MODE_LEFT,						///< Demo mode left memc off, right memc on
	VPQ_DEMO_MODE_RIGHT,					///< Demo mode left memc on, right memc off
}VPQ_MEMC_DEMO_MODE;

/**
 * MEMC CLK EN
 * Reset flow : CLKEN = "0" 'RSTN = "0" 'RSTN = "1" ' CLKEN = "1"
 * RSTN_MEMC_RBUS clock in MEMC , should be set beforce  RSTN_MEMC/ RSTN_MEME_ME
 * CLKEN_MEMC_RBUS clock in MEMC , should be set beforce  CLKEN_MEMC/CLKEN_MEME_ME
 */
typedef enum {
	VPQ_MEMC_SYS_CLKEN_RBUS = 0,
	VPQ_MEMC_SYS_CLKEN,
	VPQ_MEMC_SYS_RSTN_RBUS,
	VPQ_MEMC_SYS_RSTN,
} VPQ_MEMC_SYS_CLKEN_T;


/*-----------------------------------------------------------------------------
	Local Variables & Function Prototypes Declarations
------------------------------------------------------------------------------*/
void HAL_VPQ_MEMC_Initialize(void);
void HAL_VPQ_MEMC_Uninitialize(void);
long HAL_VPQ_MEMC_SetMotionComp(UINT8 blurLevel, UINT8 judderLevel, VPQ_MEMC_TYPE_T motion);
void HAL_VPQ_MEMC_SetBlurLevel(UINT8 blurLevel);
void HAL_VPQ_MEMC_SetJudderLevel(UINT8 judderLevel);
long HAL_VPQ_MEMC_MotionCompOnOff(BOOLEAN bOnOff);
long HAL_VPQ_MEMC_LowDelayMode(UINT8 type);
long HAL_VPQ_MEMC_SetRGBYUVMode(UINT8 mode);
void HAL_VPQ_MEMC_GetFrameDelay (UINT16 *pFrameDelay);
void HAL_VPQ_MEMC_SetVideoBlock(VPQ_MEMC_MUTE_TYPE_T type, BOOLEAN bOnOff);
void HAL_VPQ_MEMC_SetTrueMotionDemo(BOOLEAN bOnOff);
void HAL_VPQ_MEMC_GetFirmwareVersion(UINT16 *pVersion);
void HAL_VPQ_MEMC_SetBypassRegion(BOOLEAN bOnOff, VPQ_MEMC_BYPASS_REGION_T region, UINT32 x, UINT32 y, UINT32 w, UINT32 h);
void HAL_VPQ_MEMC_SetReverseControl(UINT8 u8Mode);
void HAL_VPQ_MEMC_Freeze(UINT8 type);
void HAL_VPQ_MEMC_SetDemoBar(BOOLEAN bOnOff, UINT8 r, UINT8 g, UINT8 b);
void HAL_VPQ_MEMC_DEBUG(void);
long HAL_VPQ_MEMC_SetMotionPro(BOOLEAN bMotionPro);

//scaler driver
#if 0  //YE Test ORI
void MEMC_SYS_Delay(unsigned char nDelay);
#else //YE Test 50411
void MEMC_SYS_Delay(unsigned char msecs);
#endif
void MEMC_LoadScriptDMA(void);
void MEMC_LoadScriptDMADisable(void);
void MEMC_ChangeMCBufferAddr(unsigned char u1_is_changed_to_6_buffer);
void MEMC_Set_malloc_address(UINT8 status);
int MEMC_Get_DMA_malloc_address(UINT8 status, UINT32 *DMA_release_start, UINT32 *DMA_release_size);

void Scaler_MEMC_Mux(void);
void Scaler_MEMC_outMux(UINT8 dbuf_en,UINT8 outmux_sel);
void Scaler_MEMC_CLK_Enable(void);
unsigned char Scaler_MEMC_CLK_Check(void);
unsigned char Scaler_ME_CLK_Check(void);
void Scaler_MEMC_CLK(void);
void Scaler_MEMC_Handler(void);
void Scaler_MEMC_initial_Case(void);
void Scaler_MEMC_MC_Set_MEMBoundary(unsigned int  nDownlimit,unsigned int nUplimit);
void Scaler_MEMC_allocate_memory(void);
void Scaler_MEMC_ForceBg(UINT8 bEnable);
void Scaler_MEMC_output_force_bg_enable(UINT8 enable);
void Scaler_MEMC_set_output_bg_color(UINT16 color_r, UINT16 color_g, UINT16 color_b);
void Scaler_MEMC_SetMotionType(VPQ_MEMC_TYPE_T motion);
VPQ_MEMC_TYPE_T Scaler_MEMC_GetMotionType(void);
int Scaler_MEMC_set_cinema_mode_en(unsigned char bEn);

void vpq_memc_disp_suspend_instanboot(void);
void vpq_memc_disp_resume_instanboot(void);
void vpq_memc_disp_suspend_snashop(void);
void vpq_memc_disp_resume_snashop(void);
void Scaler_MEMC_fbg_control(void);
void Scaler_MEMC_SetInOutFrameRate(void);
void Scaler_MEMC_SetInOutFrameRateByDisp(unsigned char _channel);
void Scaler_MEMC_Booting_NoSignal_Check_OutputBG(UINT8 enable);
void Scaler_MEMC_Set_CheckMEMC_Outbg(unsigned char mode);
unsigned char Scaler_MEMC_Get_CheckMEMC_Outbg(void);
unsigned char Scaler_MEMC_Get_First_Run_FBG_enable(void);
unsigned char Scaler_MEMC_Get_instanboot_resume_Done(void);
unsigned char Scaler_MEMC_Get_snashop_resume_Done(void);
void Scaler_MEMC_Bypass_On(unsigned char b_isBypass);
void Scaler_MEMC_Bypass_CLK_OnOff(unsigned char is_clk_on);
//void Scaler_MEMC_Bypass_CLK(unsigned char is_clk_on);
unsigned char Scaler_MEMC_get_Bypass_Status(void);
void Scaler_MEMC_Set_Clock_Enable(unsigned char enable, unsigned char bMute);
int Scaler_MEMC_Get_Clock_Enable(unsigned char *enable, unsigned char *bMute);
void Scaler_MEMC_Set_Clock_ForceExit(void);
void Scaler_MEMC_HDMI_ME_CLK_OnOff(unsigned char is_clk_on, unsigned char mode);
int Scaler_MEMC_DTV_ME_CLK_OnOff(unsigned char enable, unsigned char bMode);
int Scaler_MEMC_MEMC_CLK_OnOff(unsigned char ME_enable, unsigned char MC_enable, unsigned char bMute);
long vpq_memc_set_lowDelayMode(UINT8 type);

void vpq_memc_ioctl_set_stop_run_by_idx(unsigned char cmd_idx, unsigned char stop);
void VPQMEMC_rlink_MEMC_ID_enable(void);
void VPQMEMC_rlink_MEMC_ID(void);
/**
 * @brief This function set power saving mode on
 * @retval 1		power save on fail
 * @retval 0		power save on success
*/
BOOL ScalerMEMC_EnablePowerSave(void);
/**
 * @brief This function set power saving mode off
 * @retval 1		power save off fail
 * @retval 0		power save off success
*/
BOOL ScalerMEMC_DisablePowerSave(void);

#ifdef MEMC_DYNAMIC_ONOFF
void Scaler_MEMC_Dynamic_OnOff(void);
void Scaler_MEMC_Mux_off(void);

#define me_00_write_enable_ADDR 0xb809c038
#define me_01_read_enable_ADDR 	0xb809c040
#define me_02_read_enable_ADDR 	0xb809c048
#define me_03_read_enable_ADDR 	0xb809c050
#define me_04_write_enable_ADDR 0xb809c070
#define me_05_write_enable_ADDR 0xb809c090
#define me_06_read_enable_ADDR 	0xb809c098
#define me_07_read_enable_ADDR 	0xb809c0A0
#define me_08_write_enable_ADDR 0xb809c114
#define me_09_read_enable_ADDR 	0xb809c11C
#define me_10_write_enable_ADDR 0xb809c138
#define me_11_read_enable_ADDR 	0xb809c140
#define me_12_write_enable_ADDR 0xb809c15C
#define me_13_read_enable_ADDR 	0xb809c164
#define me_14_write_enable_ADDR 0xb809c180
#define me_15_read_enable_ADDR 	0xb809c188

#define mv_01_write_enable_ADDR 0xb809c210
#define mv_02_write_enable_ADDR 0xb809c224
#define mv_03_read_enable_ADDR  0xb809c228
#define mv_04_write_enable_ADDR 0xb809c244
#define mv_05_write_enable_ADDR 0xb809c260
#define mv_06_read_enable_ADDR  0xb809c264
#define mv_07_read_enable_ADDR  0xb809c268
#define mv_08_read_enable_ADDR  0xb809c26C
#define mv_09_read_enable_ADDR  0xb809c270
#define mv_10_read_enable_ADDR  0xb809c274
#define mv_11_read_enable_ADDR  0xb809c278

#define mc_00_write_enable_ADDR 0xb8099438
#define mc_01_write_enable_ADDR 0xb8099478
#define mc_02_read_enable_ADDR 	0xb8099480
#define mc_03_read_enable_ADDR 	0xb8099488
#define mc_04_read_enable_ADDR 	0xb8099490
#define mc_05_read_enable_ADDR 	0xb8099498
#define mc_06_read_enable_ADDR 	0xb80994A0
#define mc_07_read_enable_ADDR 	0xb80994A8
#endif

#if CONFIG_PM
//kmc_top	0x00 ( 9000~ 906c : resume, 9070 ~ 90fc : ReadOnly )
#define	KMC_TOP__KMC_TOP_00_ADDR	0xb8099000
#define	KMC_TOP__KMC_TOP_04_ADDR	0xb8099004
#define	KMC_TOP__KMC_TOP_08_ADDR	0xb8099008
#define	KMC_TOP__KMC_TOP_0C_ADDR	0xb809900c
#define	KMC_TOP__KMC_TOP_10_ADDR	0xb8099010
#define	KMC_TOP__KMC_TOP_14_ADDR	0xb8099014
#define	KMC_TOP__KMC_TOP_18_ADDR	0xb8099018
#define	KMC_TOP__KMC_TOP_1C_ADDR	0xb809901c
#define	KMC_TOP__KMC_TOP_20_ADDR	0xb8099020
#define	KMC_TOP__KMC_TOP_24_ADDR	0xb8099024
#define	KMC_TOP__KMC_TOP_28_ADDR	0xb8099028
#define	KMC_TOP__KMC_TOP_2C_ADDR	0xb809902c
#define	KMC_TOP__KMC_TOP_30_ADDR	0xb8099030
#define	KMC_TOP__KMC_TOP_34_ADDR	0xb8099034
#define	KMC_TOP__KMC_TOP_38_ADDR	0xb8099038
#define	KMC_TOP__KMC_TOP_3C_ADDR	0xb809903c
#define	KMC_TOP__KMC_TOP_40_ADDR	0xb8099040
#define	KMC_TOP__KMC_TOP_44_ADDR	0xb8099044
#define	KMC_TOP__KMC_TOP_48_ADDR	0xb8099048
#define	KMC_TOP__KMC_TOP_4C_ADDR	0xb809904c
#define	KMC_TOP__KMC_TOP_50_ADDR	0xb8099050
#define	KMC_TOP__KMC_TOP_54_ADDR	0xb8099054
#define	KMC_TOP__KMC_TOP_58_ADDR	0xb8099058
#define	KMC_TOP__KMC_TOP_5C_ADDR	0xb809905c
#define	KMC_TOP__KMC_TOP_60_ADDR	0xb8099060
#define	KMC_TOP__KMC_TOP_64_ADDR	0xb8099064
#define	KMC_TOP__KMC_TOP_68_ADDR	0xb8099068
#define	KMC_TOP__KMC_TOP_6C_ADDR	0xb809906c
//IPPRE	0x01 ( 9100~ 91e4 : resume, 91e8 ~ 91fc : ReadOnly )
#define	IPPRE__IPPRE_00_ADDR	0xb8099100
#define	IPPRE__IPPRE_04_ADDR	0xb8099104
#define	IPPRE__IPPRE_08_ADDR	0xb8099108
#define	IPPRE__IPPRE_0C_ADDR	0xb809910c
#define	IPPRE__IPPRE_10_ADDR	0xb8099110
#define	IPPRE__IPPRE_14_ADDR	0xb8099114
#define	IPPRE__IPPRE_18_ADDR	0xb8099118
#define	IPPRE__IPPRE_1C_ADDR	0xb809911c
#define	IPPRE__IPPRE_20_ADDR	0xb8099120
#define	IPPRE__IPPRE_24_ADDR	0xb8099124
#define	IPPRE__IPPRE_28_ADDR	0xb8099128
#define	IPPRE__IPPRE_2C_ADDR	0xb809912c
#define	IPPRE__IPPRE_30_ADDR	0xb8099130
#define	IPPRE__IPPRE_34_ADDR	0xb8099134
#define	IPPRE__IPPRE_38_ADDR	0xb8099138
#define	IPPRE__IPPRE_3C_ADDR	0xb809913c
#define	IPPRE__IPPRE_40_ADDR	0xb8099140
#define	IPPRE__IPPRE_44_ADDR	0xb8099144
#define	IPPRE__IPPRE_48_ADDR	0xb8099148
#define	IPPRE__IPPRE_4C_ADDR	0xb809914c
#define	IPPRE__IPPRE_50_ADDR	0xb8099150
#define	IPPRE__IPPRE_54_ADDR	0xb8099154
#define	IPPRE__IPPRE_58_ADDR	0xb8099158
#define	IPPRE__IPPRE_5C_ADDR	0xb809915c
#define	IPPRE__IPPRE_60_ADDR	0xb8099160
#define	IPPRE__IPPRE_64_ADDR	0xb8099164
#define	IPPRE__IPPRE_68_ADDR	0xb8099168
#define	IPPRE__IPPRE_6C_ADDR	0xb809916c
#define	IPPRE__IPPRE_70_ADDR	0xb8099170
#define	IPPRE__IPPRE_74_ADDR	0xb8099174
#define	IPPRE__IPPRE_78_ADDR	0xb8099178
#define	IPPRE__IPPRE_7C_ADDR	0xb809917c
#define	IPPRE__IPPRE_80_ADDR	0xb8099180
#define	IPPRE__IPPRE_84_ADDR	0xb8099184
#define	IPPRE__IPPRE_88_ADDR	0xb8099188
#define	IPPRE__IPPRE_8C_ADDR	0xb809918c
#define	IPPRE__IPPRE_90_ADDR	0xb8099190
#define	IPPRE__IPPRE_94_ADDR	0xb8099194
#define	IPPRE__IPPRE_98_ADDR	0xb8099198
#define	IPPRE__IPPRE_9C_ADDR	0xb809919c
#define	IPPRE__IPPRE_A0_ADDR	0xb80991a0
#define	IPPRE__IPPRE_A4_ADDR	0xb80991a4
#define	IPPRE__IPPRE_A8_ADDR	0xb80991a8
#define	IPPRE__IPPRE_AC_ADDR	0xb80991ac
#define	IPPRE__IPPRE_B0_ADDR	0xb80991b0
#define	IPPRE__IPPRE_B4_ADDR	0xb80991b4
#define	IPPRE__IPPRE_B8_ADDR	0xb80991b8
#define	IPPRE__IPPRE_BC_ADDR	0xb80991bc
#define	IPPRE__IPPRE_C0_ADDR	0xb80991c0
#define	IPPRE__IPPRE_C4_ADDR	0xb80991c4
#define	IPPRE__IPPRE_C8_ADDR	0xb80991c8
#define	IPPRE__IPPRE_CC_ADDR	0xb80991cc
#define	IPPRE__IPPRE_D0_ADDR	0xb80991d0
#define	IPPRE__IPPRE_D4_ADDR	0xb80991d4
#define	IPPRE__IPPRE_D8_ADDR	0xb80991d8
#define	IPPRE__IPPRE_DC_ADDR	0xb80991dc
#define	IPPRE__IPPRE_E0_ADDR	0xb80991e0
#define	IPPRE__IPPRE_E4_ADDR	0xb80991e4
//KMC_CPR_TOP0	0x02 ( 9200~ 92e8 : resume )
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_00_ADDR	0xb8099200
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_04_ADDR	0xb8099204
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_08_ADDR	0xb8099208
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_0C_ADDR	0xb809920c
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_10_ADDR	0xb8099210
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_14_ADDR	0xb8099214
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_18_ADDR	0xb8099218
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_1C_ADDR	0xb809921c
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_20_ADDR	0xb8099220
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_24_ADDR	0xb8099224
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_28_ADDR	0xb8099228
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_2C_ADDR	0xb809922c
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_30_ADDR	0xb8099230
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_34_ADDR	0xb8099234
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_38_ADDR	0xb8099238
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_3C_ADDR	0xb809923c
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_40_ADDR	0xb8099240
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_44_ADDR	0xb8099244
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_48_ADDR	0xb8099248
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_4C_ADDR	0xb809924c
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_50_ADDR	0xb8099250
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_54_ADDR	0xb8099254
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_58_ADDR	0xb8099258
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_5C_ADDR	0xb809925c
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_60_ADDR	0xb8099260
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_64_ADDR	0xb8099264
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_68_ADDR	0xb8099268
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_6C_ADDR	0xb809926c
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_70_ADDR	0xb8099270
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_74_ADDR	0xb8099274
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_78_ADDR	0xb8099278
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_7C_ADDR	0xb809927c
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_80_ADDR	0xb8099280
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_84_ADDR	0xb8099284
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_88_ADDR	0xb8099288
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_8C_ADDR	0xb809928c
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_90_ADDR	0xb8099290
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_94_ADDR	0xb8099294
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_98_ADDR	0xb8099298
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_9C_ADDR	0xb809929c
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_A0_ADDR	0xb80992a0
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_A4_ADDR	0xb80992a4
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_A8_ADDR	0xb80992a8
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_AC_ADDR	0xb80992ac
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_B0_ADDR	0xb80992b0
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_B4_ADDR	0xb80992b4
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_B8_ADDR	0xb80992b8
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_BC_ADDR	0xb80992bc
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_C0_ADDR	0xb80992c0
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_C4_ADDR	0xb80992c4
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_C8_ADDR	0xb80992c8
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_CC_ADDR	0xb80992cc
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_D0_ADDR	0xb80992d0
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_D4_ADDR	0xb80992d4
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_D8_ADDR	0xb80992d8
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_DC_ADDR	0xb80992dc
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_E0_ADDR	0xb80992e0
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_E4_ADDR	0xb80992e4
#define	KMC_CPR_TOP0__KMC_CPR_TOP0_E8_ADDR	0xb80992e8
//KMC_CPR_TOP1	0x03
#define	KMC_CPR_TOP1__PATT_CTRL0_ADDR	0xb8099300
#define	KMC_CPR_TOP1__PATT_LF_I_POSITION0_ADDR	0xb8099304
#define	KMC_CPR_TOP1__PATT_LF_I_POSITION1_ADDR	0xb8099308
#define	KMC_CPR_TOP1__PATT_HF_I_POSITION0_ADDR	0xb809930c
#define	KMC_CPR_TOP1__PATT_HF_I_POSITION1_ADDR	0xb8099310
#define	KMC_CPR_TOP1__CPR_PATT_LF_I_SETTING0_ADDR	0xb8099314
#define	KMC_CPR_TOP1__CPR_PATT_LF_I_SETTING1_ADDR	0xb8099318
#define	KMC_CPR_TOP1__CPR_PATT_HF_I_SETTING0_ADDR	0xb809931c
#define	KMC_CPR_TOP1__CPR_PATT_HF_I_SETTING1_ADDR	0xb8099320
#define	KMC_CPR_TOP1__PATT_LF_P_POSITION0_ADDR	0xb8099324
#define	KMC_CPR_TOP1__PATT_LF_P_POSITION1_ADDR	0xb8099328
#define	KMC_CPR_TOP1__PATT_HF_P_POSITION0_ADDR	0xb809932c
#define	KMC_CPR_TOP1__PATT_HF_P_POSITION1_ADDR	0xb8099330
#define	KMC_CPR_TOP1__CPR_PATT_LF_P_SETTING0_ADDR	0xb8099334
#define	KMC_CPR_TOP1__CPR_PATT_LF_P_SETTING1_ADDR	0xb8099338
#define	KMC_CPR_TOP1__CPR_PATT_HF_P_SETTING0_ADDR	0xb809933c
#define	KMC_CPR_TOP1__CPR_PATT_HF_P_SETTING1_ADDR	0xb8099340
#define	KMC_CPR_TOP1__PATT_LF_NR_POSITION0_ADDR	0xb8099344
#define	KMC_CPR_TOP1__PATT_LF_NR_POSITION1_ADDR	0xb8099348
#define	KMC_CPR_TOP1__PATT_HF_NR_POSITION_ADDR	0xb809934c
#define	KMC_CPR_TOP1__PATT_HF_NR_POSITION1_ADDR	0xb8099350
#define	KMC_CPR_TOP1__CPR_PATT_LF_NR_SETTING0_ADDR	0xb8099354
#define	KMC_CPR_TOP1__CPR_PATT_LF_NR_SETTING1_ADDR	0xb8099358
#define	KMC_CPR_TOP1__CPR_PATT_HF_NR_SETTING0_ADDR	0xb809935c
#define	KMC_CPR_TOP1__CPR_PATT_HF_NR_SETTING1_ADDR	0xb8099360
#define	KMC_CPR_TOP1__CPR_DEBUG_CFG0_ADDR	0xb8099364
//KMC_DM_TOP	0x04
#define	KMC_DM_TOP__KMC_00_START_ADDRESS0_ADDR	0xb8099400
#define	KMC_DM_TOP__KMC_00_START_ADDRESS1_ADDR	0xb8099404
#define	KMC_DM_TOP__KMC_00_START_ADDRESS2_ADDR	0xb8099408
#define	KMC_DM_TOP__KMC_00_START_ADDRESS3_ADDR	0xb809940c
#define	KMC_DM_TOP__KMC_00_START_ADDRESS4_ADDR	0xb8099410
#define	KMC_DM_TOP__KMC_00_START_ADDRESS5_ADDR	0xb8099414
#define	KMC_DM_TOP__KMC_00_END_ADDRESS0_ADDR	0xb8099418
#define	KMC_DM_TOP__KMC_00_END_ADDRESS1_ADDR	0xb809941c
#define	KMC_DM_TOP__KMC_00_END_ADDRESS2_ADDR	0xb8099420
#define	KMC_DM_TOP__KMC_00_END_ADDRESS3_ADDR	0xb8099424
#define	KMC_DM_TOP__KMC_00_END_ADDRESS4_ADDR	0xb8099428
#define	KMC_DM_TOP__KMC_00_END_ADDRESS5_ADDR	0xb809942c
#define	KMC_DM_TOP__KMC_00_LR_OFFSET_ADDR_ADDR	0xb8099430
#define	KMC_DM_TOP__KMC_00_LINE_OFFSET_ADDR_ADDR	0xb8099434
#define	KMC_DM_TOP__KMC_00_AGENT_ADDR	0xb8099438
#define	KMC_DM_TOP__KMC_00_THRESHOLD_ADDR	0xb809943c
#define	KMC_DM_TOP__KMC_01_START_ADDRESS0_ADDR	0xb8099440
#define	KMC_DM_TOP__KMC_01_START_ADDRESS1_ADDR	0xb8099444
#define	KMC_DM_TOP__KMC_01_START_ADDRESS2_ADDR	0xb8099448
#define	KMC_DM_TOP__KMC_01_START_ADDRESS3_ADDR	0xb809944c
#define	KMC_DM_TOP__KMC_01_START_ADDRESS4_ADDR	0xb8099450
#define	KMC_DM_TOP__KMC_01_START_ADDRESS5_ADDR	0xb8099454
#define	KMC_DM_TOP__KMC_01_END_ADDRESS0_ADDR	0xb8099458
#define	KMC_DM_TOP__KMC_01_END_ADDRESS1_ADDR	0xb809945c
#define	KMC_DM_TOP__KMC_01_END_ADDRESS2_ADDR	0xb8099460
#define	KMC_DM_TOP__KMC_01_END_ADDRESS3_ADDR	0xb8099464
#define	KMC_DM_TOP__KMC_01_END_ADDRESS4_ADDR	0xb8099468
#define	KMC_DM_TOP__KMC_01_END_ADDRESS5_ADDR	0xb809946c
#define	KMC_DM_TOP__KMC_01_LR_OFFSET_ADDR_ADDR	0xb8099470
#define	KMC_DM_TOP__KMC_01_LINE_OFFSET_ADDR_ADDR	0xb8099474
#define	KMC_DM_TOP__KMC_01_AGENT_ADDR	0xb8099478
#define	KMC_DM_TOP__KMC_01_THRESHOLD_ADDR	0xb809947c
#define	KMC_DM_TOP__KMC_02_AGENT_ADDR	0xb8099480
#define	KMC_DM_TOP__KMC_02_THRESHOLD_ADDR	0xb8099484
#define	KMC_DM_TOP__KMC_03_AGENT_ADDR	0xb8099488
#define	KMC_DM_TOP__KMC_03_THRESHOLD_ADDR	0xb809948c
#define	KMC_DM_TOP__KMC_04_AGENT_ADDR	0xb8099490
#define	KMC_DM_TOP__KMC_04_THRESHOLD_ADDR	0xb8099494
#define	KMC_DM_TOP__KMC_05_AGENT_ADDR	0xb8099498
#define	KMC_DM_TOP__KMC_05_THRESHOLD_ADDR	0xb809949c
#define	KMC_DM_TOP__KMC_06_AGENT_ADDR	0xb80994a0
#define	KMC_DM_TOP__KMC_06_THRESHOLD_ADDR	0xb80994a4
#define	KMC_DM_TOP__KMC_07_AGENT_ADDR	0xb80994a8
#define	KMC_DM_TOP__KMC_07_THRESHOLD_ADDR	0xb80994ac
#define	KMC_DM_TOP__KMC_VTOTAL_AND_TIMER_ADDR	0xb80994b0
#define	KMC_DM_TOP__KMC_HOLD_TIME_G0_ADDR	0xb80994b4
#define	KMC_DM_TOP__KMC_HOLD_TIME_G1_ADDR	0xb80994b8
#define	KMC_DM_TOP__KMC_SOURCE_MODE_ADDR	0xb80994bc
#define	KMC_DM_TOP__KMC_DEBUG_HEAD_G0_ADDR	0xb80994c0
#define	KMC_DM_TOP__KMC_DEBUG_HEAD_G1_ADDR	0xb80994c4
#define	KMC_DM_TOP__KMC_DEBUG_HEAD_G2_ADDR	0xb80994c8
#define	KMC_DM_TOP__KMC_DEBUG_HEAD_G3_ADDR	0xb80994cc
#define	KMC_DM_TOP__KMC_00_START_ADDRESS6_ADDR	0xb80994d0
#define	KMC_DM_TOP__KMC_00_END_ADDRESS6_ADDR	0xb80994d4
#define	KMC_DM_TOP__KMC_00_START_ADDRESS7_ADDR	0xb80994d8
#define	KMC_DM_TOP__KMC_00_END_ADDRESS7_ADDR	0xb80994dc
#define	KMC_DM_TOP__KMC_01_START_ADDRESS6_ADDR	0xb80994e0
#define	KMC_DM_TOP__KMC_01_END_ADDRESS6_ADDR	0xb80994e4
#define	KMC_DM_TOP__KMC_01_START_ADDRESS7_ADDR	0xb80994e8
#define	KMC_DM_TOP__KMC_01_END_ADDRESS7_ADDR	0xb80994ec
//IPPRE1	0x05
#define	IPPRE1__IPPRE1_00_ADDR	0xb8099500
#define	IPPRE1__IPPRE1_04_ADDR	0xb8099504
//MC	0x06
#define	MC__MC_0C_ADDR	0xb809960c
#define	MC__MC_10_ADDR	0xb8099610
#define	MC__MC_14_ADDR	0xb8099614
#define	MC__MC_18_ADDR	0xb8099618
#define	MC__MC_1C_ADDR	0xb809961c
#define	MC__MC_20_ADDR	0xb8099620
#define	MC__MC_24_ADDR	0xb8099624
#define	MC__MC_28_ADDR	0xb8099628
#define	MC__MC_2C_ADDR	0xb809962c
#define	MC__MC_30_ADDR	0xb8099630
#define	MC__MC_34_ADDR	0xb8099634
#define	MC__MC_38_ADDR	0xb8099638
#define	MC__MC_3C_ADDR	0xb809963c
#define	MC__MC_40_ADDR	0xb8099640
#define	MC__MC_44_ADDR	0xb8099644
#define	MC__MC_48_ADDR	0xb8099648
#define	MC__MC_4C_ADDR	0xb809964c
#define	MC__MC_50_ADDR	0xb8099650
#define	MC__MC_54_ADDR	0xb8099654
#define	MC__MC_58_ADDR	0xb8099658
#define	MC__MC_5C_ADDR	0xb809965c
#define	MC__MC_60_ADDR	0xb8099660
#define	MC__MC_64_ADDR	0xb8099664
#define	MC__MC_68_ADDR	0xb8099668
#define	MC__MC_6C_ADDR	0xb809966c
#define	MC__MC_70_ADDR	0xb8099670
#define	MC__MC_74_ADDR	0xb8099674
#define	MC__MC_78_ADDR	0xb8099678
#define	MC__MC_7C_ADDR	0xb809967c
#define	MC__MC_80_ADDR	0xb8099680
#define	MC__MC_84_ADDR	0xb8099684
#define	MC__MC_88_ADDR	0xb8099688
#define	MC__MC_8C_ADDR	0xb809968c
#define	MC__MC_90_ADDR	0xb8099690
#define	MC__MC_94_ADDR	0xb8099694
#define	MC__MC_98_ADDR	0xb8099698
#define	MC__MC_9C_ADDR	0xb809969c
#define	MC__MC_A0_ADDR	0xb80996a0
#define	MC__MC_A4_ADDR	0xb80996a4
#define	MC__MC_A8_ADDR	0xb80996a8
#define	MC__MC_AC_ADDR	0xb80996ac
#define	MC__MC_B0_ADDR	0xb80996b0
#define	MC__MC_B4_ADDR	0xb80996b4
#define	MC__MC_B8_ADDR	0xb80996b8
#define	MC__MC_BC_ADDR	0xb80996bc
#define	MC__MC_C0_ADDR	0xb80996c0
#define	MC__MC_C4_ADDR	0xb80996c4
#define	MC__MC_C8_ADDR	0xb80996c8
#define	MC__MC_CC_ADDR	0xb80996cc
#define	MC__MC_D0_ADDR	0xb80996d0
#define	MC__MC_D4_ADDR	0xb80996d4
#define	MC__MC_D8_ADDR	0xb80996d8
#define	MC__MC_DC_ADDR	0xb80996dc
#define	MC__MC_E0_ADDR	0xb80996e0
#define	MC__MC_E4_ADDR	0xb80996e4
#define	MC__MC_E8_ADDR	0xb80996e8
//MC2	0x07
#define	MC2__MC2_00_ADDR	0xb8099700
#define	MC2__MC2_04_ADDR	0xb8099704
#define	MC2__MC2_08_ADDR	0xb8099708
#define	MC2__MC2_0C_ADDR	0xb809970c
#define	MC2__MC2_10_ADDR	0xb8099710
#define	MC2__MC2_14_ADDR	0xb8099714
#define	MC2__MC2_18_ADDR	0xb8099718
#define	MC2__MC2_1C_ADDR	0xb809971c
#define	MC2__MC2_20_ADDR	0xb8099720
#define	MC2__MC2_24_ADDR	0xb8099724
#define	MC2__MC2_28_ADDR	0xb8099728
#define	MC2__MC2_2C_ADDR	0xb809972c
#define	MC2__MC2_30_ADDR	0xb8099730
#define	MC2__MC2_50_ADDR	0xb8099750
#define	MC2__MC2_54_ADDR	0xb8099754
#define	MC2__MC2_58_ADDR	0xb8099758
#define	MC2__MC2_5C_ADDR	0xb809975c
#define	MC2__MC2_60_ADDR	0xb8099760
#define	MC2__MC2_64_ADDR	0xb8099764
#define	MC2__MC2_68_ADDR	0xb8099768
#define	MC2__MC2_6C_ADDR	0xb809976c
#define	MC2__MC2_70_ADDR	0xb8099770
#define	MC2__MC2_74_ADDR	0xb8099774
#define	MC2__MC2_7C_ADDR	0xb809977c
#define	MC2__MC2_80_ADDR	0xb8099780
#define	MC2__MC2_84_ADDR	0xb8099784
#define	MC2__MC2_88_ADDR	0xb8099788
#define	MC2__MC2_8C_ADDR	0xb809978c
#define	MC2__MC2_90_ADDR	0xb8099790
#define	MC2__MC2_94_ADDR	0xb8099794
#define	MC2__MC2_98_ADDR	0xb8099798
#define	MC2__MC2_9C_ADDR	0xb809979c
#define	MC2__MC2_A0_ADDR	0xb80997a0
#define	MC2__MC2_A4_ADDR	0xb80997a4
#define	MC2__MC2_A8_ADDR	0xb80997a8
//MC_PQ_DECMP 0x08
#define PQC_PQDC_08_00_ADDR 0xb8099800
#define PQC_PQDC_08_04_ADDR 0xb8099804
#define PQC_PQDC_08_84_ADDR 0xb8099884
#define PQC_PQDC_08_0C_ADDR 0xb809980c
#define PQC_PQDC_08_10_ADDR 0xb8099810
#define PQC_PQDC_08_14_ADDR 0xb8099814
#define PQC_PQDC_08_18_ADDR 0xb8099818
#define PQC_PQDC_08_1C_ADDR 0xb809981c
#define PQC_PQDC_08_20_ADDR 0xb8099820
#define PQC_PQDC_08_24_ADDR 0xb8099824
#define PQC_PQDC_08_28_ADDR 0xb8099828
#define PQC_PQDC_08_2C_ADDR 0xb809982c
#define PQC_PQDC_08_30_ADDR 0xb8099830
#define PQC_PQDC_08_34_ADDR 0xb8099834
#define PQC_PQDC_08_38_ADDR 0xb8099838
#define PQC_PQDC_08_3C_ADDR 0xb809983c
#define PQC_PQDC_08_40_ADDR 0xb8099840
#define PQC_PQDC_08_44_ADDR 0xb8099844
#define PQC_PQDC_08_48_ADDR 0xb8099848
#define PQC_PQDC_08_4C_ADDR 0xb809984c
#define PQC_PQDC_08_50_ADDR 0xb8099850
#define PQC_PQDC_08_54_ADDR 0xb8099854
#define PQC_PQDC_08_58_ADDR 0xb8099858
#define PQC_PQDC_08_5C_ADDR 0xb809985c
#define PQC_PQDC_08_60_ADDR 0xb8099860
#define PQC_PQDC_08_64_ADDR 0xb8099864
#define PQC_PQDC_08_68_ADDR 0xb8099868
#define PQC_PQDC_08_6C_ADDR 0xb809986c
#define PQC_PQDC_08_70_ADDR 0xb8099870
#define PQC_PQDC_08_74_ADDR 0xb8099874
#define PQC_PQDC_08_78_ADDR 0xb8099878
#define PQC_PQDC_08_7C_ADDR 0xb809987c
#define PQC_PQDC_08_80_ADDR 0xb8099880
#define PQC_PQDC_08_84_ADDR 0xb8099884
#define PQC_PQDC_08_88_ADDR 0xb8099888
#define PQC_PQDC_08_8C_ADDR 0xb809988c
#define PQC_PQDC_08_90_ADDR 0xb8099890
#define PQC_PQDC_08_94_ADDR 0xb8099894
#define PQC_PQDC_08_98_ADDR 0xb8099898
#define PQC_PQDC_08_9C_ADDR 0xb809989c
#define PQC_PQDC_08_A0_ADDR 0xb80998a0
#define PQC_PQDC_08_A4_ADDR 0xb80998a4
#define PQC_PQDC_08_A8_ADDR 0xb80998a8
#define PQC_PQDC_08_AC_ADDR 0xb80998ac
#define PQC_PQDC_08_B0_ADDR 0xb80998b0
#define PQC_PQDC_08_B4_ADDR 0xb80998b4
#define PQC_PQDC_08_B8_ADDR 0xb80998b8
#define PQC_PQDC_08_BC_ADDR 0xb80998bc
#define PQC_PQDC_08_C0_ADDR 0xb80998c0
#define PQC_PQDC_08_C4_ADDR 0xb80998c4
#define PQC_PQDC_08_C8_ADDR 0xb80998c8
#define PQC_PQDC_08_CC_ADDR 0xb80998cc
#define PQC_PQDC_08_D0_ADDR 0xb80998d0
#define PQC_PQDC_08_D4_ADDR 0xb80998d4
#define PQC_PQDC_08_D8_ADDR 0xb80998d8
#define PQC_PQDC_08_DC_ADDR 0xb80998dc
#define PQC_PQDC_08_E0_ADDR 0xb80998e0
#define PQC_PQDC_08_E4_ADDR 0xb80998e4
#define PQC_PQDC_08_E8_ADDR 0xb80998e8
#define PQC_PQDC_08_EC_ADDR 0xb80998ec
#define PQC_PQDC_08_F0_ADDR 0xb80998f0
#define PQC_PQDC_08_F4_ADDR 0xb80998f4
#define PQC_PQDC_08_F8_ADDR 0xb80998f8
#define PQC_PQDC_08_FC_ADDR 0xb80998fc
//LBMC	0x09
#define	LBMC__LBMC_00_ADDR	0xb8099900
#define	LBMC__LBMC_04_ADDR	0xb8099904
#define	LBMC__LBMC_08_ADDR	0xb8099908
#define	LBMC__LBMC_0C_ADDR	0xb809990c
#define	LBMC__LBMC_10_ADDR	0xb8099910
#define	LBMC__LBMC_14_ADDR	0xb8099914
#define	LBMC__LBMC_18_ADDR	0xb8099918
#define	LBMC__LBMC_1C_ADDR	0xb809991c
#define	LBMC__LBMC_20_ADDR	0xb8099920
#define	LBMC__LBMC_24_ADDR	0xb8099924
#define	LBMC__LBMC_28_ADDR	0xb8099928
#define	LBMC__LBMC_2C_ADDR	0xb809992c
#define	LBMC__LBMC_30_ADDR	0xb8099930
#define	LBMC__LBMC_34_ADDR	0xb8099934
#define	LBMC__LBMC_38_ADDR	0xb8099938
#define	LBMC__LBMC_3C_ADDR	0xb809993c
#define	LBMC__LBMC_40_ADDR	0xb8099940
#define	LBMC__LBMC_44_ADDR	0xb8099944
#define	LBMC__LBMC_48_ADDR	0xb8099948
#define	LBMC__LBMC_4C_ADDR	0xb809994c
#define	LBMC__LBMC_50_ADDR	0xb8099950
#define	LBMC__LBMC_54_ADDR	0xb8099954
#define	LBMC__LBMC_58_ADDR	0xb8099958
#define	LBMC__LBMC_5C_ADDR	0xb809995c
#define	LBMC__LBMC_60_ADDR	0xb8099960
#define	LBMC__LBMC_80_ADDR	0xb8099980
#define	LBMC__LBMC_84_ADDR	0xb8099984
#define	LBMC__LBMC_88_ADDR	0xb8099988
//BBD	0x0a
#define	BBD__BBD_00_ADDR	0xb8099a00
#define	BBD__BBD_04_ADDR	0xb8099a04
#define	BBD__BBD_08_ADDR	0xb8099a08
#define	BBD__BBD_0C_ADDR	0xb8099a0c
#define	BBD__BBD_10_ADDR	0xb8099a10
//KMC_METER_TOP	0x0b
#define	KMC_METER_TOP__KMC_METER_TOP_00_ADDR	0xb8099b00
#define	KMC_METER_TOP__KMC_METER_TOP_04_ADDR	0xb8099b04
#define	KMC_METER_TOP__KMC_METER_TOP_08_ADDR	0xb8099b08
#define	KMC_METER_TOP__KMC_METER_TOP_0C_ADDR	0xb8099b0c
#define	KMC_METER_TOP__KMC_METER_TOP_10_ADDR	0xb8099b10
#define	KMC_METER_TOP__KMC_METER_TOP_14_ADDR	0xb8099b14
#define	KMC_METER_TOP__KMC_METER_TOP_18_ADDR	0xb8099b18
#define	KMC_METER_TOP__KMC_METER_TOP_1C_ADDR	0xb8099b1c
#define	KMC_METER_TOP__KMC_METER_TOP_20_ADDR	0xb8099b20
#define	KMC_METER_TOP__KMC_METER_TOP_24_ADDR	0xb8099b24
#define	KMC_METER_TOP__KMC_METER_TOP_28_ADDR	0xb8099b28
#define	KMC_METER_TOP__KMC_METER_TOP_2C_ADDR	0xb8099b2c
#define	KMC_METER_TOP__KMC_METER_TOP_30_ADDR	0xb8099b30
#define	KMC_METER_TOP__KMC_METER_TOP_34_ADDR	0xb8099b34
#define	KMC_METER_TOP__KMC_METER_TOP_38_ADDR	0xb8099b38
#define	KMC_METER_TOP__KMC_METER_TOP_3C_ADDR	0xb8099b3c
#define	KMC_METER_TOP__KMC_METER_TOP_40_ADDR	0xb8099b40
#define	KMC_METER_TOP__KMC_METER_TOP_44_ADDR	0xb8099b44
#define	KMC_METER_TOP__KMC_METER_TOP_48_ADDR	0xb8099b48
#define	KMC_METER_TOP__KMC_METER_TOP_4C_ADDR	0xb8099b4c
#define	KMC_METER_TOP__KMC_METER_TOP_50_ADDR	0xb8099b50
#define	KMC_METER_TOP__KMC_METER_TOP_54_ADDR	0xb8099b54
#define	KMC_METER_TOP__KMC_METER_TOP_58_ADDR	0xb8099b58
#define	KMC_METER_TOP__KMC_METER_TOP_5C_ADDR	0xb8099b5c
#define	KMC_METER_TOP__KMC_METER_TOP_60_ADDR	0xb8099b60
#define	KMC_METER_TOP__KMC_METER_TOP_64_ADDR	0xb8099b64
#define	KMC_METER_TOP__KMC_METER_TOP_68_ADDR	0xb8099b68
#define	KMC_METER_TOP__KMC_METER_TOP_6C_ADDR	0xb8099b6c
//KMC_DM_METER_TOP	0x1e
#define	KMC_DM_METER_TOP__KMC_METER_REG0_ADDR	0xb809ae00
#define	KMC_DM_METER_TOP__KMC_METER_NUM_ADDR	0xb809ae04
#define	KMC_DM_METER_TOP__KMC_METER_H_NUM0_ADDR	0xb809ae08
#define	KMC_DM_METER_TOP__KMC_METER_H_NUM1_ADDR	0xb809ae0c
#define	KMC_DM_METER_TOP__METER_TH0_ADDR	0xb809ae10
#define	KMC_DM_METER_TOP__METER_TH1_ADDR	0xb809ae14
#define	KMC_DM_METER_TOP__METER_TH3_ADDR	0xb809ae18
#define	KMC_DM_METER_TOP__METER_TIMER0_ADDR	0xb809ae1c
//KME_TOP	0x20
#define	KME_TOP__KME_TOP_04_ADDR	0xb809b004
#define	KME_TOP__KME_TOP_08_ADDR	0xb809b008
#define	KME_TOP__KME_TOP_10_ADDR	0xb809b010
#define	KME_TOP__KME_TOP_14_ADDR	0xb809b014
#define	KME_TOP__KME_TOP_18_ADDR	0xb809b018
#define	KME_TOP__KME_TOP_1C_ADDR	0xb809b01c
#define	KME_TOP__KME_TOP_20_ADDR	0xb809b020
#define	KME_TOP__KME_TOP_24_ADDR	0xb809b024
#define	KME_TOP__KME_TOP_28_ADDR	0xb809b028
#define	KME_TOP__KME_TOP_2C_ADDR	0xb809b02c
#define	KME_TOP__KME_TOP_30_ADDR	0xb809b030
#define	KME_TOP__KME_TOP_34_ADDR	0xb809b034
#define	KME_TOP__KME_TOP_38_ADDR	0xb809b038
#define	KME_TOP__KME_TOP_3C_ADDR	0xb809b03c
//KME_VBUF_TOP	0x22
#define	KME_VBUF_TOP__KME_VBUF_TOP_00_ADDR	0xb809b200
#define	KME_VBUF_TOP__KME_VBUF_TOP_04_ADDR	0xb809b204
#define	KME_VBUF_TOP__KME_VBUF_TOP_08_ADDR	0xb809b208
#define	KME_VBUF_TOP__KME_VBUF_TOP_0C_ADDR	0xb809b20c
#define	KME_VBUF_TOP__KME_VBUF_TOP_10_ADDR	0xb809b210
#define	KME_VBUF_TOP__KME_VBUF_TOP_14_ADDR	0xb809b214
#define	KME_VBUF_TOP__KME_VBUF_TOP_18_ADDR	0xb809b218
#define	KME_VBUF_TOP__KME_VBUF_TOP_1C_ADDR	0xb809b21c
#define	KME_VBUF_TOP__KME_VBUF_TOP_20_ADDR	0xb809b220
#define	KME_VBUF_TOP__KME_VBUF_TOP_24_ADDR	0xb809b224
#define	KME_VBUF_TOP__KME_VBUF_TOP_28_ADDR	0xb809b228
#define	KME_VBUF_TOP__KME_VBUF_TOP_2C_ADDR	0xb809b22c
#define	KME_VBUF_TOP__KME_VBUF_TOP_30_ADDR	0xb809b230
#define	KME_VBUF_TOP__KME_VBUF_TOP_34_ADDR	0xb809b234
#define	KME_VBUF_TOP__KME_VBUF_TOP_38_ADDR	0xb809b238
#define	KME_VBUF_TOP__KME_VBUF_TOP_3C_ADDR	0xb809b23c
#define	KME_VBUF_TOP__KME_VBUF_TOP_40_ADDR	0xb809b240
#define	KME_VBUF_TOP__KME_VBUF_TOP_44_ADDR	0xb809b244
#define	KME_VBUF_TOP__KME_VBUF_TOP_48_ADDR	0xb809b248
#define	KME_VBUF_TOP__KME_VBUF_TOP_4C_ADDR	0xb809b24c
#define	KME_VBUF_TOP__KME_VBUF_TOP_50_ADDR	0xb809b250
#define	KME_VBUF_TOP__KME_VBUF_TOP_54_ADDR	0xb809b254
#define	KME_VBUF_TOP__KME_VBUF_TOP_58_ADDR	0xb809b258
#define	KME_VBUF_TOP__KME_VBUF_TOP_5C_ADDR	0xb809b25c
#define	KME_VBUF_TOP__KME_VBUF_TOP_60_ADDR	0xb809b260
#define	KME_VBUF_TOP__KME_VBUF_TOP_64_ADDR	0xb809b264
#define	KME_VBUF_TOP__KME_VBUF_TOP_68_ADDR	0xb809b268
#define	KME_VBUF_TOP__KME_VBUF_TOP_6C_ADDR	0xb809b26c
#define	KME_VBUF_TOP__KME_VBUF_TOP_70_ADDR	0xb809b270
#define	KME_VBUF_TOP__KME_VBUF_TOP_74_ADDR	0xb809b274
#define	KME_VBUF_TOP__KME_VBUF_TOP_78_ADDR	0xb809b278
#define	KME_VBUF_TOP__KME_VBUF_TOP_7C_ADDR	0xb809b27c
#define	KME_VBUF_TOP__KME_VBUF_TOP_80_ADDR	0xb809b280
#define	KME_VBUF_TOP__KME_VBUF_TOP_84_ADDR	0xb809b284
#define	KME_VBUF_TOP__KME_VBUF_TOP_88_ADDR	0xb809b288
#define	KME_VBUF_TOP__KME_VBUF_TOP_8C_ADDR	0xb809b28c
//KME_ME1_TOP2	0x23
#define	KME_ME1_TOP2__KME_ME1_TOP2_00_ADDR	0xb809b300
#define	KME_ME1_TOP2__KME_ME1_TOP2_04_ADDR	0xb809b304
#define	KME_ME1_TOP2__KME_ME1_TOP2_08_ADDR	0xb809b308
#define	KME_ME1_TOP2__KME_ME1_TOP2_0C_ADDR	0xb809b30c
#define	KME_ME1_TOP2__KME_ME1_TOP2_10_ADDR	0xb809b310
#define	KME_ME1_TOP2__KME_ME1_TOP2_14_ADDR	0xb809b314
#define	KME_ME1_TOP2__KME_ME1_TOP2_18_ADDR	0xb809b318
#define	KME_ME1_TOP2__KME_ME1_TOP2_1C_ADDR	0xb809b31c
#define	KME_ME1_TOP2__KME_ME1_TOP2_20_ADDR	0xb809b320
#define	KME_ME1_TOP2__KME_ME1_TOP2_24_ADDR	0xb809b324
#define	KME_ME1_TOP2__KME_ME1_TOP2_28_ADDR	0xb809b328
#define	KME_ME1_TOP2__KME_ME1_TOP2_2C_ADDR	0xb809b32c
#define	KME_ME1_TOP2__KME_ME1_TOP2_30_ADDR	0xb809b330
#define	KME_ME1_TOP2__KME_ME1_TOP2_34_ADDR	0xb809b334
#define	KME_ME1_TOP2__KME_ME1_TOP2_38_ADDR	0xb809b338
#define	KME_ME1_TOP2__KME_ME1_TOP2_3C_ADDR	0xb809b33c
#define	KME_ME1_TOP2__KME_ME1_TOP2_40_ADDR	0xb809b340
#define	KME_ME1_TOP2__KME_ME1_TOP2_44_ADDR	0xb809b344
#define	KME_ME1_TOP2__KME_ME1_TOP2_48_ADDR	0xb809b348
#define	KME_ME1_TOP2__KME_ME1_TOP2_4C_ADDR	0xb809b34c
#define	KME_ME1_TOP2__KME_ME1_TOP2_50_ADDR	0xb809b350
#define	KME_ME1_TOP2__KME_ME1_TOP2_54_ADDR	0xb809b354
#define	KME_ME1_TOP2__KME_ME1_TOP2_58_ADDR	0xb809b358
#define	KME_ME1_TOP2__KME_ME1_TOP2_5C_ADDR	0xb809b35c
#define	KME_ME1_TOP2__KME_ME1_TOP2_60_ADDR	0xb809b360
#define	KME_ME1_TOP2__KME_ME1_TOP2_64_ADDR	0xb809b364
#define	KME_ME1_TOP2__KME_ME1_TOP2_80_ADDR	0xb809b380
#define	KME_ME1_TOP2__KME_ME1_TOP2_84_ADDR	0xb809b384
#define	KME_ME1_TOP2__KME_ME1_TOP2_88_ADDR	0xb809b388
#define	KME_ME1_TOP2__KME_ME1_TOP2_8C_ADDR	0xb809b38c
#define	KME_ME1_TOP2__KME_ME1_TOP2_90_ADDR	0xb809b390
//KME_ME1_TOP3	0x24
#define	KME_ME1_TOP3__KME_ME1_TOP3_00_ADDR	0xb809b400
#define	KME_ME1_TOP3__KME_ME1_TOP3_04_ADDR	0xb809b404
#define	KME_ME1_TOP3__KME_ME1_TOP3_08_ADDR	0xb809b408
#define	KME_ME1_TOP3__KME_ME1_TOP3_0C_ADDR	0xb809b40c
#define	KME_ME1_TOP3__KME_ME1_TOP3_10_ADDR	0xb809b410
#define	KME_ME1_TOP3__KME_ME1_TOP3_14_ADDR	0xb809b414
#define	KME_ME1_TOP3__KME_ME1_TOP3_18_ADDR	0xb809b418
#define	KME_ME1_TOP3__KME_ME1_TOP3_1C_ADDR	0xb809b41c
#define	KME_ME1_TOP3__KME_ME1_TOP3_20_ADDR	0xb809b420
#define	KME_ME1_TOP3__KME_ME1_TOP3_24_ADDR	0xb809b424
#define	KME_ME1_TOP3__KME_ME1_TOP3_28_ADDR	0xb809b428
#define	KME_ME1_TOP3__KME_ME1_TOP3_2C_ADDR	0xb809b42c
#define	KME_ME1_TOP3__KME_ME1_TOP3_30_ADDR	0xb809b430
#define	KME_ME1_TOP3__KME_ME1_TOP3_34_ADDR	0xb809b434
#define	KME_ME1_TOP3__KME_ME1_TOP3_38_ADDR	0xb809b438
#define	KME_ME1_TOP3__KME_ME1_TOP3_3C_ADDR	0xb809b43c
#define	KME_ME1_TOP3__KME_ME1_TOP3_40_ADDR	0xb809b440
#define	KME_ME1_TOP3__KME_ME1_TOP3_44_ADDR	0xb809b444
#define	KME_ME1_TOP3__KME_ME1_TOP3_48_ADDR	0xb809b448
#define	KME_ME1_TOP3__KME_ME1_TOP3_4C_ADDR	0xb809b44c
#define	KME_ME1_TOP3__KME_ME1_TOP3_50_ADDR	0xb809b450
#define	KME_ME1_TOP3__KME_ME1_TOP3_54_ADDR	0xb809b454
#define	KME_ME1_TOP3__KME_ME1_TOP3_58_ADDR	0xb809b458
#define	KME_ME1_TOP3__KME_ME1_TOP3_5C_ADDR	0xb809b45c
#define	KME_ME1_TOP3__KME_ME1_TOP3_60_ADDR	0xb809b460
#define	KME_ME1_TOP3__KME_ME1_TOP3_64_ADDR	0xb809b464
#define	KME_ME1_TOP3__KME_ME1_TOP3_68_ADDR	0xb809b468
#define	KME_ME1_TOP3__KME_ME1_TOP3_6C_ADDR	0xb809b46c
#define	KME_ME1_TOP3__KME_ME1_TOP3_70_ADDR	0xb809b470
#define	KME_ME1_TOP3__KME_ME1_TOP3_74_ADDR	0xb809b474
#define	KME_ME1_TOP3__KME_ME1_TOP3_78_ADDR	0xb809b478
#define	KME_ME1_TOP3__KME_ME1_TOP3_7C_ADDR	0xb809b47c
#define	KME_ME1_TOP3__KME_ME1_TOP3_80_ADDR	0xb809b480
#define	KME_ME1_TOP3__KME_ME1_TOP3_84_ADDR	0xb809b484
#define	KME_ME1_TOP3__KME_ME1_TOP3_88_ADDR	0xb809b488
#define	KME_ME1_TOP3__KME_ME1_TOP3_8C_ADDR	0xb809b48c
#define	KME_ME1_TOP3__KME_ME1_TOP3_90_ADDR	0xb809b490
#define	KME_ME1_TOP3__KME_ME1_TOP3_94_ADDR	0xb809b494
#define	KME_ME1_TOP3__KME_ME1_TOP3_98_ADDR	0xb809b498
#define	KME_ME1_TOP3__KME_ME1_TOP3_9C_ADDR	0xb809b49c
#define	KME_ME1_TOP3__KME_ME1_TOP3_A0_ADDR	0xb809b4a0
#define	KME_ME1_TOP3__KME_ME1_TOP3_A4_ADDR	0xb809b4a4
#define	KME_ME1_TOP3__KME_ME1_TOP3_A8_ADDR	0xb809b4a8
#define	KME_ME1_TOP3__KME_ME1_TOP3_AC_ADDR	0xb809b4ac
#define	KME_ME1_TOP3__KME_ME1_TOP3_B0_ADDR	0xb809b4b0
#define	KME_ME1_TOP3__KME_ME1_TOP3_B4_ADDR	0xb809b4b4
#define	KME_ME1_TOP3__KME_ME1_TOP3_B8_ADDR	0xb809b4b8
#define	KME_ME1_TOP3__KME_ME1_TOP3_BC_ADDR	0xb809b4bc
#define	KME_ME1_TOP3__KME_ME1_TOP3_C0_ADDR	0xb809b4c0
#define	KME_ME1_TOP3__KME_ME1_TOP3_C4_ADDR	0xb809b4c4
#define	KME_ME1_TOP3__KME_ME1_TOP3_C8_ADDR	0xb809b4c8
#define	KME_ME1_TOP3__KME_ME1_TOP3_CC_ADDR	0xb809b4cc
#define	KME_ME1_TOP3__KME_ME1_TOP3_D0_ADDR	0xb809b4d0
#define	KME_ME1_TOP3__KME_ME1_TOP3_D4_ADDR	0xb809b4d4
#define	KME_ME1_TOP3__KME_ME1_TOP3_D8_ADDR	0xb809b4d8
#define	KME_ME1_TOP3__KME_ME1_TOP3_DC_ADDR	0xb809b4dc
#define	KME_ME1_TOP3__KME_ME1_TOP3_E0_ADDR	0xb809b4e0
#define	KME_ME1_TOP3__KME_ME1_TOP3_E4_ADDR	0xb809b4e4
#define	KME_ME1_TOP3__KME_ME1_TOP3_E8_ADDR	0xb809b4e8
#define	KME_ME1_TOP3__KME_ME1_TOP3_EC_ADDR	0xb809b4ec
#define	KME_ME1_TOP3__KME_ME1_TOP3_F0_ADDR	0xb809b4f0
#define	KME_ME1_TOP3__KME_ME1_TOP3_F4_ADDR	0xb809b4f4
#define	KME_ME1_TOP3__KME_ME1_TOP3_F8_ADDR	0xb809b4f8
#define	KME_ME1_TOP3__KME_ME1_TOP3_FC_ADDR	0xb809b4fc
//KME_ME1_TOP4	0x25
//KME_ME1_TOP5	0x26
//ME_SHARE_DMA
//#define KME_SHARE_DMA__ME_SHARE_DMA_94_ADDR 0xb809B794
//#define KME_SHARE_DMA__ME_SHARE_DMA_E0_ADDR 0xb809B7E0
//KME_LBME_TOP	0x29
#define	KME_LBME_TOP__KME_LBME_TOP_00_ADDR	0xb809b900
#define	KME_LBME_TOP__KME_LBME_TOP_04_ADDR	0xb809b904
#define	KME_LBME_TOP__KME_LBME_TOP_08_ADDR	0xb809b908
#define	KME_LBME_TOP__KME_LBME_TOP_0C_ADDR	0xb809b90c
#define	KME_LBME_TOP__KME_LBME_TOP_10_ADDR	0xb809b910
#define	KME_LBME_TOP__KME_LBME_TOP_14_ADDR	0xb809b914
#define	KME_LBME_TOP__KME_LBME_TOP_18_ADDR	0xb809b918
#define	KME_LBME_TOP__KME_LBME_TOP_1C_ADDR	0xb809b91c
#define	KME_LBME_TOP__KME_LBME_TOP_20_ADDR	0xb809b920
#define	KME_LBME_TOP__KME_LBME_TOP_24_ADDR	0xb809b924
//KME_ME2_CALC1	0x2a
#define	KME_ME2_CALC1__KME_ME2_CALC1_00_ADDR	0xb809ba00
#define	KME_ME2_CALC1__KME_ME2_CALC1_04_ADDR	0xb809ba04
#define	KME_ME2_CALC1__KME_ME2_CALC1_08_ADDR	0xb809ba08
#define	KME_ME2_CALC1__KME_ME2_CALC1_0C_ADDR	0xb809ba0c
#define	KME_ME2_CALC1__KME_ME2_CALC1_10_ADDR	0xb809ba10
#define	KME_ME2_CALC1__KME_ME2_CALC1_14_ADDR	0xb809ba14
#define	KME_ME2_CALC1__KME_ME2_CALC1_18_ADDR	0xb809ba18
#define	KME_ME2_CALC1__KME_ME2_CALC1_1C_ADDR	0xb809ba1c
#define	KME_ME2_CALC1__KME_ME2_CALC1_20_ADDR	0xb809ba20
#define	KME_ME2_CALC1__KME_ME2_CALC1_24_ADDR	0xb809ba24
#define	KME_ME2_CALC1__KME_ME2_CALC1_28_ADDR	0xb809ba28
#define	KME_ME2_CALC1__KME_ME2_CALC1_2C_ADDR	0xb809ba2c
#define	KME_ME2_CALC1__KME_ME2_CALC1_30_ADDR	0xb809ba30
#define	KME_ME2_CALC1__KME_ME2_CALC1_34_ADDR	0xb809ba34
#define	KME_ME2_CALC1__KME_ME2_CALC1_38_ADDR	0xb809ba38
#define	KME_ME2_CALC1__KME_ME2_CALC1_3C_ADDR	0xb809ba3c
#define	KME_ME2_CALC1__KME_ME2_CALC1_40_ADDR	0xb809ba40
//KME_LOGO2	0x2b
#define	KME_LOGO2__KME_LOGO2_00_ADDR	0xb809bb00
#define	KME_LOGO2__KME_LOGO2_04_ADDR	0xb809bb04
#define	KME_LOGO2__KME_LOGO2_08_ADDR	0xb809bb08
#define	KME_LOGO2__KME_LOGO2_0C_ADDR	0xb809bb0c
#define	KME_LOGO2__KME_LOGO2_10_ADDR	0xb809bb10
#define	KME_LOGO2__KME_LOGO2_14_ADDR	0xb809bb14
#define	KME_LOGO2__KME_LOGO2_18_ADDR	0xb809bb18
#define	KME_LOGO2__KME_LOGO2_1C_ADDR	0xb809bb1c
#define	KME_LOGO2__KME_LOGO2_20_ADDR	0xb809bb20
#define	KME_LOGO2__KME_LOGO2_24_ADDR	0xb809bb24
#define	KME_LOGO2__KME_LOGO2_28_ADDR	0xb809bb28
#define	KME_LOGO2__KME_LOGO2_2C_ADDR	0xb809bb2c
#define	KME_LOGO2__KME_LOGO2_30_ADDR	0xb809bb30
#define	KME_LOGO2__KME_LOGO2_34_ADDR	0xb809bb34
//KME_IPME	0x2c
#define	KME_IPME__KME_IPME_00_ADDR	0xb809bc00
#define	KME_IPME__KME_IPME_04_ADDR	0xb809bc04
#define	KME_IPME__KME_IPME_08_ADDR	0xb809bc08
#define	KME_IPME__KME_IPME_0C_ADDR	0xb809bc0c
#define	KME_IPME__KME_IPME_10_ADDR	0xb809bc10
#define	KME_IPME__KME_IPME_14_ADDR	0xb809bc14
#define	KME_IPME__KME_IPME_18_ADDR	0xb809bc18
#define	KME_IPME__KME_IPME_1C_ADDR	0xb809bc1c
#define	KME_IPME__KME_IPME_20_ADDR	0xb809bc20
#define	KME_IPME__KME_IPME_24_ADDR	0xb809bc24
#define	KME_IPME__KME_IPME_28_ADDR	0xb809bc28
#define	KME_IPME__KME_IPME_2C_ADDR	0xb809bc2c
#define	KME_IPME__KME_IPME_30_ADDR	0xb809bc30
#define	KME_IPME__KME_IPME_34_ADDR	0xb809bc34
#define	KME_IPME__KME_IPME_38_ADDR	0xb809bc38
#define	KME_IPME__KME_IPME_3C_ADDR	0xb809bc3c
#define	KME_IPME__KME_IPME_40_ADDR	0xb809bc40
#define	KME_IPME__KME_IPME_44_ADDR	0xb809bc44
#define	KME_IPME__KME_IPME_48_ADDR	0xb809bc48
#define	KME_IPME__KME_IPME_4C_ADDR	0xb809bc4c
#define	KME_IPME__KME_IPME_50_ADDR	0xb809bc50
#define	KME_IPME__KME_IPME_54_ADDR	0xb809bc54
#define	KME_IPME__KME_IPME_58_ADDR	0xb809bc58
#define	KME_IPME__KME_IPME_5C_ADDR	0xb809bc5c
#define	KME_IPME__KME_IPME_60_ADDR	0xb809bc60
#define	KME_IPME__KME_IPME_64_ADDR	0xb809bc64
#define	KME_IPME__KME_IPME_68_ADDR	0xb809bc68
#define	KME_IPME__KME_IPME_6C_ADDR	0xb809bc6c
#define	KME_IPME__KME_IPME_70_ADDR	0xb809bc70
#define	KME_IPME__KME_IPME_74_ADDR	0xb809bc74
#define	KME_IPME__KME_IPME_78_ADDR	0xb809bc78
#define	KME_IPME__KME_IPME_7C_ADDR	0xb809bc7c
#define	KME_IPME__KME_IPME_80_ADDR	0xb809bc80
#define	KME_IPME__KME_IPME_84_ADDR	0xb809bc84
#define	KME_IPME__KME_IPME_88_ADDR	0xb809bc88
#define	KME_IPME__KME_IPME_8C_ADDR	0xb809bc8c
#define	KME_IPME__KME_IPME_90_ADDR	0xb809bc90
#define	KME_IPME__KME_IPME_94_ADDR	0xb809bc94
#define	KME_IPME__KME_IPME_98_ADDR	0xb809bc98
#define	KME_IPME__KME_IPME_9C_ADDR	0xb809bc9c
#define	KME_IPME__KME_IPME_A0_ADDR	0xb809bca0
//KME_IPME1	0x2d
#define	KME_IPME1__KME_IPME1_00_ADDR	0xb809bd00
#define	KME_IPME1__KME_IPME1_04_ADDR	0xb809bd04
#define	KME_IPME1__KME_IPME1_08_ADDR	0xb809bd08
#define	KME_IPME1__KME_IPME1_0C_ADDR	0xb809bd0c
//KME_LOGO0	0x2e
#define	KME_LOGO0__KME_LOGO0_00_ADDR	0xb809be00
#define	KME_LOGO0__KME_LOGO0_04_ADDR	0xb809be04
#define	KME_LOGO0__KME_LOGO0_08_ADDR	0xb809be08
#define	KME_LOGO0__KME_LOGO0_0C_ADDR	0xb809be0c
#define	KME_LOGO0__KME_LOGO0_10_ADDR	0xb809be10
#define	KME_LOGO0__KME_LOGO0_14_ADDR	0xb809be14
#define	KME_LOGO0__KME_LOGO0_18_ADDR	0xb809be18
#define	KME_LOGO0__KME_LOGO0_1C_ADDR	0xb809be1c
#define	KME_LOGO0__KME_LOGO0_20_ADDR	0xb809be20
#define	KME_LOGO0__KME_LOGO0_24_ADDR	0xb809be24
#define	KME_LOGO0__KME_LOGO0_28_ADDR	0xb809be28
#define	KME_LOGO0__KME_LOGO0_2C_ADDR	0xb809be2c
#define	KME_LOGO0__KME_LOGO0_30_ADDR	0xb809be30
#define	KME_LOGO0__KME_LOGO0_34_ADDR	0xb809be34
#define	KME_LOGO0__KME_LOGO0_38_ADDR	0xb809be38
#define	KME_LOGO0__KME_LOGO0_3C_ADDR	0xb809be3c
#define	KME_LOGO0__KME_LOGO0_40_ADDR	0xb809be40
#define	KME_LOGO0__KME_LOGO0_44_ADDR	0xb809be44
#define	KME_LOGO0__KME_LOGO0_48_ADDR	0xb809be48
#define	KME_LOGO0__KME_LOGO0_4C_ADDR	0xb809be4c
#define	KME_LOGO0__KME_LOGO0_50_ADDR	0xb809be50
#define	KME_LOGO0__KME_LOGO0_54_ADDR	0xb809be54
#define	KME_LOGO0__KME_LOGO0_58_ADDR	0xb809be58
#define	KME_LOGO0__KME_LOGO0_5C_ADDR	0xb809be5c
#define	KME_LOGO0__KME_LOGO0_60_ADDR	0xb809be60
#define	KME_LOGO0__KME_LOGO0_64_ADDR	0xb809be64
#define	KME_LOGO0__KME_LOGO0_68_ADDR	0xb809be68
#define	KME_LOGO0__KME_LOGO0_6C_ADDR	0xb809be6c
#define	KME_LOGO0__KME_LOGO0_70_ADDR	0xb809be70
#define	KME_LOGO0__KME_LOGO0_74_ADDR	0xb809be74
#define	KME_LOGO0__KME_LOGO0_78_ADDR	0xb809be78
#define	KME_LOGO0__KME_LOGO0_7C_ADDR	0xb809be7c
#define	KME_LOGO0__KME_LOGO0_80_ADDR	0xb809be80
#define	KME_LOGO0__KME_LOGO0_84_ADDR	0xb809be84
#define	KME_LOGO0__KME_LOGO0_88_ADDR	0xb809be88
#define	KME_LOGO0__KME_LOGO0_8C_ADDR	0xb809be8c
#define	KME_LOGO0__KME_LOGO0_90_ADDR	0xb809be90
#define	KME_LOGO0__KME_LOGO0_94_ADDR	0xb809be94
#define	KME_LOGO0__KME_LOGO0_98_ADDR	0xb809be98
#define	KME_LOGO0__KME_LOGO0_9C_ADDR	0xb809be9c
#define	KME_LOGO0__KME_LOGO0_A0_ADDR	0xb809bea0
#define	KME_LOGO0__KME_LOGO0_A4_ADDR	0xb809bea4
#define	KME_LOGO0__KME_LOGO0_A8_ADDR	0xb809bea8
#define	KME_LOGO0__KME_LOGO0_AC_ADDR	0xb809beac
#define	KME_LOGO0__KME_LOGO0_B0_ADDR	0xb809beb0
#define	KME_LOGO0__KME_LOGO0_B4_ADDR	0xb809beb4
#define	KME_LOGO0__KME_LOGO0_B8_ADDR	0xb809beb8
#define	KME_LOGO0__KME_LOGO0_BC_ADDR	0xb809bebc
#define	KME_LOGO0__KME_LOGO0_C0_ADDR	0xb809bec0
#define	KME_LOGO0__KME_LOGO0_C4_ADDR	0xb809bec4
#define	KME_LOGO0__KME_LOGO0_C8_ADDR	0xb809bec8
#define	KME_LOGO0__KME_LOGO0_CC_ADDR	0xb809becc
#define	KME_LOGO0__KME_LOGO0_D0_ADDR	0xb809bed0
#define	KME_LOGO0__KME_LOGO0_D4_ADDR	0xb809bed4
#define	KME_LOGO0__KME_LOGO0_D8_ADDR	0xb809bed8
#define	KME_LOGO0__KME_LOGO0_DC_ADDR	0xb809bedc
#define	KME_LOGO0__KME_LOGO0_E0_ADDR	0xb809bee0
#define	KME_LOGO0__KME_LOGO0_E4_ADDR	0xb809bee4
#define	KME_LOGO0__KME_LOGO0_E8_ADDR	0xb809bee8
#define	KME_LOGO0__KME_LOGO0_EC_ADDR	0xb809beec
#define	KME_LOGO0__KME_LOGO0_F0_ADDR	0xb809bef0
#define	KME_LOGO0__KME_LOGO0_F4_ADDR	0xb809bef4
#define	KME_LOGO0__KME_LOGO0_F8_ADDR	0xb809bef8
#define	KME_LOGO0__KME_LOGO0_FC_ADDR	0xb809befc
//KME_LOGO1	0x2f
#define	KME_LOGO1__KME_LOGO1_00_ADDR	0xb809bf00
#define	KME_LOGO1__KME_LOGO1_04_ADDR	0xb809bf04
#define	KME_LOGO1__KME_LOGO1_08_ADDR	0xb809bf08
#define	KME_LOGO1__KME_LOGO1_0C_ADDR	0xb809bf0c
#define	KME_LOGO1__KME_LOGO1_10_ADDR	0xb809bf10
#define	KME_LOGO1__KME_LOGO1_14_ADDR	0xb809bf14
#define	KME_LOGO1__KME_LOGO1_18_ADDR	0xb809bf18
#define	KME_LOGO1__KME_LOGO1_1C_ADDR	0xb809bf1c
#define	KME_LOGO1__KME_LOGO1_20_ADDR	0xb809bf20
#define	KME_LOGO1__KME_LOGO1_2C_ADDR	0xb809bf2c
#define	KME_LOGO1__KME_LOGO1_30_ADDR	0xb809bf30
#define	KME_LOGO1__KME_LOGO1_34_ADDR	0xb809bf34
#define	KME_LOGO1__KME_LOGO1_38_ADDR	0xb809bf38
#define	KME_LOGO1__KME_LOGO1_3C_ADDR	0xb809bf3c
#define	KME_LOGO1__KME_LOGO1_40_ADDR	0xb809bf40
#define	KME_LOGO1__KME_LOGO1_44_ADDR	0xb809bf44
#define	KME_LOGO1__KME_LOGO1_48_ADDR	0xb809bf48
#define	KME_LOGO1__KME_LOGO1_4C_ADDR	0xb809bf4c
#define	KME_LOGO1__KME_LOGO1_50_ADDR	0xb809bf50
#define	KME_LOGO1__KME_LOGO1_54_ADDR	0xb809bf54
#define	KME_LOGO1__KME_LOGO1_58_ADDR	0xb809bf58
#define	KME_LOGO1__KME_LOGO1_5C_ADDR	0xb809bf5c
#define	KME_LOGO1__KME_LOGO1_60_ADDR	0xb809bf60
#define	KME_LOGO1__KME_LOGO1_64_ADDR	0xb809bf64
#define	KME_LOGO1__KME_LOGO1_68_ADDR	0xb809bf68
#define	KME_LOGO1__KME_LOGO1_6C_ADDR	0xb809bf6c
#define	KME_LOGO1__KME_LOGO1_70_ADDR	0xb809bf70
#define	KME_LOGO1__KME_LOGO1_74_ADDR	0xb809bf74
#define	KME_LOGO1__KME_LOGO1_78_ADDR	0xb809bf78
#define	KME_LOGO1__KME_LOGO1_7C_ADDR	0xb809bf7c
#define	KME_LOGO1__KME_LOGO1_80_ADDR	0xb809bf80
#define	KME_LOGO1__KME_LOGO1_84_ADDR	0xb809bf84
#define	KME_LOGO1__KME_LOGO1_88_ADDR	0xb809bf88
#define	KME_LOGO1__KME_LOGO1_8C_ADDR	0xb809bf8c
#define	KME_LOGO1__KME_LOGO1_90_ADDR	0xb809bf90
#define	KME_LOGO1__KME_LOGO1_94_ADDR	0xb809bf94
#define	KME_LOGO1__KME_LOGO1_98_ADDR	0xb809bf98
#define	KME_LOGO1__KME_LOGO1_9C_ADDR	0xb809bf9c
#define	KME_LOGO1__KME_LOGO1_A0_ADDR	0xb809bfa0
#define	KME_LOGO1__KME_LOGO1_A4_ADDR	0xb809bfa4
#define	KME_LOGO1__KME_LOGO1_A8_ADDR	0xb809bfa8
#define	KME_LOGO1__KME_LOGO1_AC_ADDR	0xb809bfac
#define	KME_LOGO1__KME_LOGO1_B0_ADDR	0xb809bfb0
#define	KME_LOGO1__KME_LOGO1_B4_ADDR	0xb809bfb4
#define	KME_LOGO1__KME_LOGO1_B8_ADDR	0xb809bfb8
#define	KME_LOGO1__KME_LOGO1_BC_ADDR	0xb809bfbc
#define	KME_LOGO1__KME_LOGO1_C0_ADDR	0xb809bfc0
#define	KME_LOGO1__KME_LOGO1_C4_ADDR	0xb809bfc4
#define	KME_LOGO1__KME_LOGO1_C8_ADDR	0xb809bfc8
#define	KME_LOGO1__KME_LOGO1_CC_ADDR	0xb809bfcc
#define	KME_LOGO1__KME_LOGO1_D0_ADDR	0xb809bfd0
#define	KME_LOGO1__KME_LOGO1_D4_ADDR	0xb809bfd4
#define	KME_LOGO1__KME_LOGO1_D8_ADDR	0xb809bfd8
#define	KME_LOGO1__KME_LOGO1_DC_ADDR	0xb809bfdc
#define	KME_LOGO1__KME_LOGO1_E0_ADDR	0xb809bfe0
#define	KME_LOGO1__KME_LOGO1_E4_ADDR	0xb809bfe4
#define	KME_LOGO1__KME_LOGO1_E8_ADDR	0xb809bfe8
#define	KME_LOGO1__KME_LOGO1_EC_ADDR	0xb809bfec
#define	KME_LOGO1__KME_LOGO1_F0_ADDR	0xb809bff0
#define	KME_LOGO1__KME_LOGO1_F4_ADDR	0xb809bff4
#define	KME_LOGO1__KME_LOGO1_F8_ADDR	0xb809bff8
#define	KME_LOGO1__KME_LOGO1_FC_ADDR	0xb809bffc
//KME_DM_TOP0	0x30
#define	KME_DM_TOP0__KME_00_START_ADDRESS0_ADDR	0xb809c000
#define	KME_DM_TOP0__KME_00_START_ADDRESS1_ADDR	0xb809c004
#define	KME_DM_TOP0__KME_00_START_ADDRESS2_ADDR	0xb809c008
#define	KME_DM_TOP0__KME_00_START_ADDRESS3_ADDR	0xb809c00c
#define	KME_DM_TOP0__KME_00_START_ADDRESS4_ADDR	0xb809c010
#define	KME_DM_TOP0__KME_00_START_ADDRESS5_ADDR	0xb809c014
#define	KME_DM_TOP0__KME_00_END_ADDRESS0_ADDR	0xb809c018
#define	KME_DM_TOP0__KME_00_END_ADDRESS1_ADDR	0xb809c01c
#define	KME_DM_TOP0__KME_00_END_ADDRESS2_ADDR	0xb809c020
#define	KME_DM_TOP0__KME_00_END_ADDRESS3_ADDR	0xb809c024
#define	KME_DM_TOP0__KME_00_END_ADDRESS4_ADDR	0xb809c028
#define	KME_DM_TOP0__KME_00_END_ADDRESS5_ADDR	0xb809c02c
#define	KME_DM_TOP0__KME_00_LR_OFFSET_ADDR_ADDR	0xb809c030
#define	KME_DM_TOP0__KME_00_LINE_OFFSET_ADDR_ADDR	0xb809c034
#define	KME_DM_TOP0__KME_00_AGENT_ADDR	0xb809c038
#define	KME_DM_TOP0__KME_00_THRESHOLD_ADDR	0xb809c03c
#define	KME_DM_TOP0__KME_01_AGENT_ADDR	0xb809c040
#define	KME_DM_TOP0__KME_01_THRESHOLD_ADDR	0xb809c044
#define	KME_DM_TOP0__KME_02_AGENT_ADDR	0xb809c048
#define	KME_DM_TOP0__KME_02_THRESHOLD_ADDR	0xb809c04c
#define	KME_DM_TOP0__KME_03_AGENT_ADDR	0xb809c050
#define	KME_DM_TOP0__KME_03_THRESHOLD_ADDR	0xb809c054
#define	KME_DM_TOP0__KME_04_START_ADDRESS0_ADDR	0xb809c058
#define	KME_DM_TOP0__KME_04_START_ADDRESS1_ADDR	0xb809c05c
#define	KME_DM_TOP0__KME_04_END_ADDRESS0_ADDR	0xb809c060
#define	KME_DM_TOP0__KME_04_END_ADDRESS1_ADDR	0xb809c064
#define	KME_DM_TOP0__KME_04_LR_OFFSET_ADDR_ADDR	0xb809c068
#define	KME_DM_TOP0__KME_04_LINE_OFFSET_ADDR_ADDR	0xb809c06c
#define	KME_DM_TOP0__KME_04_AGENT_ADDR	0xb809c070
#define	KME_DM_TOP0__KME_04_THRESHOLD_ADDR	0xb809c074
#define	KME_DM_TOP0__KME_05_START_ADDRESS0_ADDR	0xb809c078
#define	KME_DM_TOP0__KME_05_START_ADDRESS1_ADDR	0xb809c07c
#define	KME_DM_TOP0__KME_05_END_ADDRESS0_ADDR	0xb809c080
#define	KME_DM_TOP0__KME_05_END_ADDRESS1_ADDR	0xb809c084
#define	KME_DM_TOP0__KME_05_LR_OFFSET_ADDR_ADDR	0xb809c088
#define	KME_DM_TOP0__KME_05_LINE_OFFSET_ADDR_ADDR	0xb809c08c
#define	KME_DM_TOP0__KME_05_AGENT_ADDR	0xb809c090
#define	KME_DM_TOP0__KME_05_THRESHOLD_ADDR	0xb809c094
#define	KME_DM_TOP0__KME06AGENT_ADDR	0xb809c098
#define	KME_DM_TOP0__KME_06_THRESHOLD_ADDR	0xb809c09c
#define	KME_DM_TOP0__KME_07_AGENT_ADDR	0xb809c0a0
#define	KME_DM_TOP0__KME_07_THRESHOLD_ADDR	0xb809c0a4
#define	KME_DM_TOP0__KME_ME_RESOLUTION_ADDR	0xb809c0a8
#define	KME_DM_TOP0__KME_MV_RESOLUTION_ADDR	0xb809c0ac
#define	KME_DM_TOP0__KME_SOURCE_MODE_ADDR	0xb809c0b0
#define	KME_DM_TOP0__KME_ME_HNUM_ADDR	0xb809c0b4
#define	KME_DM_TOP0__KME_TIMER_ENABLE_ADDR	0xb809c0b8
#define	KME_DM_TOP0__KME_HOLD_TIME0_ADDR	0xb809c0bc
#define	KME_DM_TOP0__KME_HOLD_TIME1_ADDR	0xb809c0c0
#define	KME_DM_TOP0__KME_HOLD_TIME2_ADDR	0xb809c0c4
#define	KME_DM_TOP0__KME_HOLD_TIME3_ADDR	0xb809c0c8
#define	KME_DM_TOP0__KME_DM_TOP0_CC_ADDR	0xb809c0cc
#define	KME_DM_TOP0__WAIT_TIME1_ADDR	0xb809c0d0
#define	KME_DM_TOP0__WAIT_TIME2_ADDR	0xb809c0d4
#define	KME_DM_TOP0__MV04_START_ADDRESS2_ADDR	0xb809c0d8
#define	KME_DM_TOP0__MV04_END_ADDRESS2_ADDR	0xb809c0dc
//KME_DM_TOP1	0x31
#define	KME_DM_TOP1__KME_08_START_ADDRESS0_ADDR	0xb809c100
#define	KME_DM_TOP1__KME_08_START_ADDRESS1_ADDR	0xb809c104
#define	KME_DM_TOP1__KME_08_END_ADDRESS0_ADDR	0xb809c108
#define	KME_DM_TOP1__KME_08_END_ADDRESS1_ADDR	0xb809c10c
#define	KME_DM_TOP1__KME_08_LINE_OFFSET_ADDR_ADDR	0xb809c110
#define	KME_DM_TOP1__KME_08_AGENT_ADDR	0xb809c114
#define	KME_DM_TOP1__KME_08_THRESHOLD_ADDR	0xb809c118
#define	KME_DM_TOP1__KME_09_AGENT_ADDR	0xb809c11c
#define	KME_DM_TOP1__KME_09_THRESHOLD_ADDR	0xb809c120
#define	KME_DM_TOP1__KME_10_START_ADDRESS0_ADDR	0xb809c124
#define	KME_DM_TOP1__KME_10_START_ADDRESS1_ADDR	0xb809c128
#define	KME_DM_TOP1__KME_10_END_ADDRESS0_ADDR	0xb809c12c
#define	KME_DM_TOP1__KME_10_END_ADDRESS1_ADDR	0xb809c130
#define	KME_DM_TOP1__KME_10_LINE_OFFSET_ADDR_ADDR	0xb809c134
#define	KME_DM_TOP1__KME_10_AGENT_ADDR	0xb809c138
#define	KME_DM_TOP1__KME_10_THRESHOLD_ADDR	0xb809c13c
#define	KME_DM_TOP1__KME_11_AGENT_ADDR	0xb809c140
#define	KME_DM_TOP1__KME_11_THRESHOLD_ADDR	0xb809c144
#define	KME_DM_TOP1__KME_12_START_ADDRESS0_ADDR	0xb809c148
#define	KME_DM_TOP1__KME_12_START_ADDRESS1_ADDR	0xb809c14c
#define	KME_DM_TOP1__KME_12_END_ADDRESS0_ADDR	0xb809c150
#define	KME_DM_TOP1__KME_12_END_ADDRESS1_ADDR	0xb809c154
#define	KME_DM_TOP1__KME_12_LINE_OFFSET_ADDR_ADDR	0xb809c158
#define	KME_DM_TOP1__KME_12_AGENT_ADDR	0xb809c15c
#define	KME_DM_TOP1__KME_12_THRESHOLD_ADDR	0xb809c160
#define	KME_DM_TOP1__KME_13_AGENT_ADDR	0xb809c164
#define	KME_DM_TOP1__KME_13_THRESHOLD_ADDR	0xb809c168
#define	KME_DM_TOP1__KME_14_START_ADDRESS0_ADDR	0xb809c16c
#define	KME_DM_TOP1__KME_14_START_ADDRESS1_ADDR	0xb809c170
#define	KME_DM_TOP1__KME_14_END_ADDRESS0_ADDR	0xb809c174
#define	KME_DM_TOP1__KME_14_END_ADDRESS1_ADDR	0xb809c178
#define	KME_DM_TOP1__KME_14_LINE_OFFSET_ADDR_ADDR	0xb809c17c
#define	KME_DM_TOP1__KME_14_AGENT_ADDR	0xb809c180
#define	KME_DM_TOP1__KME_14_THRESHOLD_ADDR	0xb809c184
#define	KME_DM_TOP1__KME_15_AGENT_ADDR	0xb809c188
#define	KME_DM_TOP1__KME_15_THRESHOLD_ADDR	0xb809c18c
#define	KME_DM_TOP1__KME_IPLOGO_RESOLUTION_ADDR	0xb809c190
#define	KME_DM_TOP1__KME_MLOGO_RESOLUTION_ADDR	0xb809c194
#define	KME_DM_TOP1__KME_PLOGO_RESOLUTION_ADDR	0xb809c198
#define	KME_DM_TOP1__KME_HLOGO_RESOLUTION_ADDR	0xb809c19c
#define	KME_DM_TOP1__KME_LOGO_HNUM_ADDR	0xb809c1a0
#define	KME_DM_TOP1__KME_CLR_ADDR	0xb809c1a4
#define	KME_DM_TOP1__TH0_ADDR	0xb809c1a8
#define	KME_DM_TOP1__TH1_ADDR	0xb809c1ac
#define	KME_DM_TOP1__TH2_ADDR	0xb809c1b0
#define	KME_DM_TOP1__TH3_ADDR	0xb809c1b4
#define	KME_DM_TOP1__TH4_ADDR	0xb809c1b8
#define	KME_DM_TOP1__METER_TIMER1_ADDR	0xb809c1bc
//KME_DM_TOP2	0x32
#define	KME_DM_TOP2__MV01_START_ADDRESS0_ADDR	0xb809c200
#define	KME_DM_TOP2__MV01_END_ADDRESS0_ADDR	0xb809c204
#define	KME_DM_TOP2__MV_01_LINE_OFFSET_ADDR_ADDR	0xb809c208
#define	KME_DM_TOP2__MV01_LR_OFFSET_ADDR_ADDR	0xb809c20c
#define	KME_DM_TOP2__MV01_AGENT_ADDR	0xb809c210
#define	KME_DM_TOP2__MV02_START_ADDRESS11_ADDR	0xb809c214
#define	KME_DM_TOP2__MV02_END_ADDRESS0_ADDR	0xb809c218
#define	KME_DM_TOP2__MV_02_LINE_OFFSET_ADDR_ADDR	0xb809c21c
#define	KME_DM_TOP2__MV02_LR_OFFSET_ADDR_ADDR	0xb809c220
#define	KME_DM_TOP2__MV02_AGENT_ADDR	0xb809c224
#define	KME_DM_TOP2__MV03_AGENT_ADDR	0xb809c228
#define	KME_DM_TOP2__MV04_START_ADDRESS0_ADDR	0xb809c22c
#define	KME_DM_TOP2__MV04_START_ADDRESS1_ADDR	0xb809c230
#define	KME_DM_TOP2__MV04_END_ADDRESS0_ADDR	0xb809c234
#define	KME_DM_TOP2__MV04_END_ADDRESS1_ADDR	0xb809c238
#define	KME_DM_TOP2__MV_04_LINE_OFFSET_ADDR_ADDR	0xb809c23c
#define	KME_DM_TOP2__MV04_LR_OFFSET_ADDR_ADDR	0xb809c240
#define	KME_DM_TOP2__MV04_AGENT_ADDR	0xb809c244
#define	KME_DM_TOP2__MV05_START_ADDRESS0_ADDR	0xb809c248
#define	KME_DM_TOP2__MV05_START_ADDRESS1_ADDR	0xb809c24c
#define	KME_DM_TOP2__MV05_END_ADDRESS0_ADDR	0xb809c250
#define	KME_DM_TOP2__MV05_END_ADDRESS1_ADDR	0xb809c254
#define	KME_DM_TOP2__MV_05_LINE_OFFSET_ADDR_ADDR	0xb809c258
#define	KME_DM_TOP2__MV05_LR_OFFSET_ADDR_ADDR	0xb809c25c
#define	KME_DM_TOP2__MV05_AGENT_ADDR	0xb809c260
#define	KME_DM_TOP2__MV06_AGENT_ADDR	0xb809c264
#define	KME_DM_TOP2__MV07_AGENT_ADDR	0xb809c268
#define	KME_DM_TOP2__MV08_AGENT_ADDR	0xb809c26c
#define	KME_DM_TOP2__MV09_AGENT_ADDR	0xb809c270
#define	KME_DM_TOP2__MV10_AGENT_ADDR	0xb809c274
#define	KME_DM_TOP2__MV11_AGENT_ADDR	0xb809c278
#define	KME_DM_TOP2__KME_00_START_ADDRESS6_ADDR	0xb809c27c
#define	KME_DM_TOP2__KME_00_START_ADDRESS7_ADDR	0xb809c280
#define	KME_DM_TOP2__KME_00_END_ADDRESS6_ADDR	0xb809c284
#define	KME_DM_TOP2__KME_00_END_ADDRESS7_ADDR	0xb809c288
#define	KME_DM_TOP2__MV_SOURCE_MODE_ADDR	0xb809c2b8
#define	KME_DM_TOP2__MV01_RESOLUTION_ADDR	0xb809c2bc
#define	KME_DM_TOP2__MV02_RESOLUTION_ADDR	0xb809c2c0
#define	KME_DM_TOP2__MV04_RESOLUTION_ADDR	0xb809c2c4
#define	KME_DM_TOP2__MV05_RESOLUTION_ADDR	0xb809c2c8
#define	KME_DM_TOP2__MV_TIME_ENABLE_ADDR	0xb809c2d0
#define	KME_DM_TOP2__MV_HOLD_TIME0_ADDR	0xb809c2d4
#define	KME_DM_TOP2__MV_HOLD_TIME1_ADDR	0xb809c2d8
#define	KME_DM_TOP2__MV_HOLD_TIME2_ADDR	0xb809c2dc
#define	KME_DM_TOP2__MV_WAIT_TIME0_ADDR	0xb809c2e0
#define	KME_DM_TOP2__MV_WAIT_TIME1_ADDR	0xb809c2e4
//KME_DEHALO3	0x33
#define	KME_DEHALO3__KME_DEHALO3_0C_ADDR	0xb809c30c
//KME_ME1_TOP0	0x34
#define	KME_ME1_TOP0__KME_ME1_TOP0_00_ADDR	0xb809c400
#define	KME_ME1_TOP0__KME_ME1_TOP0_04_ADDR	0xb809c404
#define	KME_ME1_TOP0__KME_ME1_TOP0_08_ADDR	0xb809c408
#define	KME_ME1_TOP0__KME_ME1_TOP0_0C_ADDR	0xb809c40c
#define	KME_ME1_TOP0__KME_ME1_TOP0_10_ADDR	0xb809c410
#define	KME_ME1_TOP0__KME_ME1_TOP0_14_ADDR	0xb809c414
#define	KME_ME1_TOP0__KME_ME1_TOP0_18_ADDR	0xb809c418
#define	KME_ME1_TOP0__KME_ME1_TOP0_1C_ADDR	0xb809c41c
#define	KME_ME1_TOP0__KME_ME1_TOP0_20_ADDR	0xb809c420
#define	KME_ME1_TOP0__KME_ME1_TOP0_24_ADDR	0xb809c424
#define	KME_ME1_TOP0__KME_ME1_TOP0_28_ADDR	0xb809c428
#define	KME_ME1_TOP0__KME_ME1_TOP0_2C_ADDR	0xb809c42c
#define	KME_ME1_TOP0__KME_ME1_TOP0_30_ADDR	0xb809c430
#define	KME_ME1_TOP0__KME_ME1_TOP0_34_ADDR	0xb809c434
#define	KME_ME1_TOP0__KME_ME1_TOP0_38_ADDR	0xb809c438
#define	KME_ME1_TOP0__KME_ME1_TOP0_40_ADDR	0xb809c440
#define	KME_ME1_TOP0__KME_ME1_TOP0_44_ADDR	0xb809c444
#define	KME_ME1_TOP0__KME_ME1_TOP0_48_ADDR	0xb809c448
#define	KME_ME1_TOP0__KME_ME1_TOP0_4C_ADDR	0xb809c44c
#define	KME_ME1_TOP0__KME_ME1_TOP0_50_ADDR	0xb809c450
#define	KME_ME1_TOP0__KME_ME1_TOP0_54_ADDR	0xb809c454
#define	KME_ME1_TOP0__KME_ME1_TOP0_58_ADDR	0xb809c458
#define	KME_ME1_TOP0__KME_ME1_TOP0_5C_ADDR	0xb809c45c
#define	KME_ME1_TOP0__KME_ME1_TOP0_60_ADDR	0xb809c460
#define	KME_ME1_TOP0__KME_ME1_TOP0_64_ADDR	0xb809c464
#define	KME_ME1_TOP0__KME_ME1_TOP0_68_ADDR	0xb809c468
#define	KME_ME1_TOP0__KME_ME1_TOP0_6C_ADDR	0xb809c46c
#define	KME_ME1_TOP0__KME_ME1_TOP0_70_ADDR	0xb809c470
#define	KME_ME1_TOP0__KME_ME1_TOP0_74_ADDR	0xb809c474
#define	KME_ME1_TOP0__KME_ME1_TOP0_78_ADDR	0xb809c478
#define	KME_ME1_TOP0__KME_ME1_TOP0_7C_ADDR	0xb809c47c
#define	KME_ME1_TOP0__KME_ME1_TOP0_80_ADDR	0xb809c480
#define	KME_ME1_TOP0__KME_ME1_TOP0_84_ADDR	0xb809c484
#define	KME_ME1_TOP0__KME_ME1_TOP0_88_ADDR	0xb809c488
#define	KME_ME1_TOP0__KME_ME1_TOP0_8C_ADDR	0xb809c48c
#define	KME_ME1_TOP0__KME_ME1_TOP0_90_ADDR	0xb809c490
#define	KME_ME1_TOP0__KME_ME1_TOP0_94_ADDR	0xb809c494
#define	KME_ME1_TOP0__KME_ME1_TOP0_98_ADDR	0xb809c498
#define	KME_ME1_TOP0__KME_ME1_TOP0_9C_ADDR	0xb809c49c
#define	KME_ME1_TOP0__KME_ME1_TOP0_A0_ADDR	0xb809c4a0
#define	KME_ME1_TOP0__KME_ME1_TOP0_A4_ADDR	0xb809c4a4
#define	KME_ME1_TOP0__KME_ME1_TOP0_B0_ADDR	0xb809c4b0
#define	KME_ME1_TOP0__KME_ME1_TOP0_B4_ADDR	0xb809c4b4
#define	KME_ME1_TOP0__KME_ME1_TOP0_B8_ADDR	0xb809c4b8
#define	KME_ME1_TOP0__KME_ME1_TOP0_BC_ADDR	0xb809c4bc
#define	KME_ME1_TOP0__KME_ME1_TOP0_C0_ADDR	0xb809c4c0
#define	KME_ME1_TOP0__KME_ME1_TOP0_C4_ADDR	0xb809c4c4
#define	KME_ME1_TOP0__KME_ME1_TOP0_EC_ADDR	0xb809c4ec
#define	KME_ME1_TOP0__KME_ME1_TOP0_F0_ADDR	0xb809c4f0
//KME_ME1_TOP1	0x35
#define	KME_ME1_TOP1__ME1_COMMON1_00_ADDR	0xb809c500
#define	KME_ME1_TOP1__ME1_COMMON1_01_ADDR	0xb809c504
#define	KME_ME1_TOP1__ME1_COMMON1_02_ADDR	0xb809c508
#define	KME_ME1_TOP1__ME1_COMMON1_03_ADDR	0xb809c50c
#define	KME_ME1_TOP1__ME1_COMMON1_04_ADDR	0xb809c510
#define	KME_ME1_TOP1__ME1_COMMON1_05_ADDR	0xb809c514
#define	KME_ME1_TOP1__ME1_COMMON1_06_ADDR	0xb809c518
#define	KME_ME1_TOP1__ME1_COMMON1_07_ADDR	0xb809c51c
#define	KME_ME1_TOP1__ME1_COMMON1_08_ADDR	0xb809c520
#define	KME_ME1_TOP1__ME1_COMMON1_09_ADDR	0xb809c524
#define	KME_ME1_TOP1__ME1_COMMON1_10_ADDR	0xb809c528
#define	KME_ME1_TOP1__ME1_COMMON1_11_ADDR	0xb809c52c
#define	KME_ME1_TOP1__ME1_COMMON1_12_ADDR	0xb809c530
#define	KME_ME1_TOP1__ME1_COMMON1_13_ADDR	0xb809c534
#define	KME_ME1_TOP1__ME1_COMMON1_14_ADDR	0xb809c538
#define	KME_ME1_TOP1__ME1_COMMON1_15_ADDR	0xb809c53c
#define	KME_ME1_TOP1__ME1_COMMON1_16_ADDR	0xb809c540
#define	KME_ME1_TOP1__ME1_COMMON1_17_ADDR	0xb809c544
#define	KME_ME1_TOP1__ME1_COMMON1_18_ADDR	0xb809c548
#define	KME_ME1_TOP1__ME1_COMMON1_19_ADDR	0xb809c54c
#define	KME_ME1_TOP1__ME1_COMMON1_20_ADDR	0xb809c550
#define	KME_ME1_TOP1__ME1_COMMON1_21_ADDR	0xb809c554
#define	KME_ME1_TOP1__ME1_COMMON1_22_ADDR	0xb809c558
#define	KME_ME1_TOP1__ME1_COMMON1_23_ADDR	0xb809c55c
#define	KME_ME1_TOP1__ME1_COMMON1_24_ADDR	0xb809c560
#define	KME_ME1_TOP1__ME1_COMMON1_25_ADDR	0xb809c564
#define	KME_ME1_TOP1__KME_ME1_TOP1_68_ADDR	0xb809c568
#define	KME_ME1_TOP1__ME1_COMMON1_27_ADDR	0xb809c56c
#define	KME_ME1_TOP1__ME1_COMMON1_28_ADDR	0xb809c570
#define	KME_ME1_TOP1__ME1_COMMON1_29_ADDR	0xb809c574
#define	KME_ME1_TOP1__ME1_COMMON1_30_ADDR	0xb809c578
#define	KME_ME1_TOP1__ME1_COMMON1_31_ADDR	0xb809c57c
#define	KME_ME1_TOP1__ME1_COMMON1_32_ADDR	0xb809c580
#define	KME_ME1_TOP1__ME1_COMMON1_33_ADDR	0xb809c584
#define	KME_ME1_TOP1__ME1_COMMON1_34_ADDR	0xb809c588
#define	KME_ME1_TOP1__ME1_COMMON1_35_ADDR	0xb809c58c
#define	KME_ME1_TOP1__ME1_COMMON1_36_ADDR	0xb809c590
#define	KME_ME1_TOP1__ME1_COMMON1_37_ADDR	0xb809c594
#define	KME_ME1_TOP1__ME1_COMMON1_38_ADDR	0xb809c598
#define	KME_ME1_TOP1__ME1_COMMON1_39_ADDR	0xb809c59c
#define	KME_ME1_TOP1__ME1_COMMON1_40_ADDR	0xb809c5a0
#define	KME_ME1_TOP1__ME1_SCENE1_00_ADDR	0xb809c5c0
#define	KME_ME1_TOP1__ME1_SCENE1_01_ADDR	0xb809c5c4
#define	KME_ME1_TOP1__ME1_SCENE1_02_ADDR	0xb809c5c8
#define	KME_ME1_TOP1__ME1_SCENE1_03_ADDR	0xb809c5cc
#define	KME_ME1_TOP1__ME1_SCENE1_04_ADDR	0xb809c5d0
#define	KME_ME1_TOP1__ME1_SCENE1_05_ADDR	0xb809c5d4
#define	KME_ME1_TOP1__ME1_SCENE1_06_ADDR	0xb809c5d8
#define	KME_ME1_TOP1__ME1_SCENE1_07_ADDR	0xb809c5dc
#define	KME_ME1_TOP1__ME1_SCENE1_08_ADDR	0xb809c5e0
#define	KME_ME1_TOP1__ME1_SCENE1_09_ADDR	0xb809c5e4
#define	KME_ME1_TOP1__ME1_SCENE1_10_ADDR	0xb809c5e8
#define	KME_ME1_TOP1__ME1_SCENE1_11_ADDR	0xb809c5ec
#define	KME_ME1_TOP1__ME1_SCENE1_12_ADDR	0xb809c5f0
#define	KME_ME1_TOP1__KME_ME1_TOP1_F4_ADDR	0xb809c5f4
//KME_LBME2_TOP	0x36
#define	KME_LBME2_TOP__KME_LBME2_TOP_00_ADDR	0xb809c600
#define	KME_LBME2_TOP__KME_LBME2_TOP_04_ADDR	0xb809c604
#define	KME_LBME2_TOP__KME_LBME2_TOP_08_ADDR	0xb809c608
#define	KME_LBME2_TOP__KME_LBME2_TOP_0C_ADDR	0xb809c60c
#define	KME_LBME2_TOP__KME_LBME2_TOP_10_ADDR	0xb809c610
#define	KME_LBME2_TOP__KME_LBME2_TOP_14_ADDR	0xb809c614
#define	KME_LBME2_TOP__KME_LBME2_TOP_18_ADDR	0xb809c618
//KME_ME2_VBUF_TOP	0x37
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_00_ADDR	0xb809c700
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_04_ADDR	0xb809c704
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_08_ADDR	0xb809c708
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_0C_ADDR	0xb809c70c
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_10_ADDR	0xb809c710
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_14_ADDR	0xb809c714
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_18_ADDR	0xb809c718
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_1C_ADDR	0xb809c71c
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_20_ADDR	0xb809c720
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_24_ADDR	0xb809c724
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_28_ADDR	0xb809c728
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_2C_ADDR	0xb809c72c
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_30_ADDR	0xb809c730
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_34_ADDR	0xb809c734
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_38_ADDR	0xb809c738
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_3C_ADDR	0xb809c73c
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_40_ADDR	0xb809c740
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_44_ADDR	0xb809c744
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_48_ADDR	0xb809c748
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_4C_ADDR	0xb809c74c
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_50_ADDR	0xb809c750
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_54_ADDR	0xb809c754
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_58_ADDR	0xb809c758
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_5C_ADDR	0xb809c75c
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_60_ADDR	0xb809c760
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_64_ADDR	0xb809c764
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_68_ADDR	0xb809c768
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_6C_ADDR	0xb809c76c
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_70_ADDR	0xb809c770
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_74_ADDR	0xb809c774
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_78_ADDR	0xb809c778
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_7C_ADDR	0xb809c77c
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_80_ADDR	0xb809c780
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_84_ADDR	0xb809c784
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_88_ADDR	0xb809c788
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_8C_ADDR	0xb809c78c
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_90_ADDR	0xb809c790
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_94_ADDR	0xb809c794
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_98_ADDR	0xb809c798
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_9C_ADDR	0xb809c79c
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_A0_ADDR	0xb809c7a0
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_A4_ADDR	0xb809c7a4
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_A8_ADDR	0xb809c7a8
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_AC_ADDR	0xb809c7ac
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_B0_ADDR	0xb809c7b0
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_B4_ADDR	0xb809c7b4
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_B8_ADDR	0xb809c7b8
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_BC_ADDR	0xb809c7bc
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_C0_ADDR	0xb809c7c0
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_C4_ADDR	0xb809c7c4
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_C8_ADDR	0xb809c7c8
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_CC_ADDR	0xb809c7cc
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_D0_ADDR	0xb809c7d0
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_D4_ADDR	0xb809c7d4
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_D8_ADDR	0xb809c7d8
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_DC_ADDR	0xb809c7dc
#define	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_E0_ADDR	0xb809c7e0
//KME_ME2_CALC0	0x38
#define	KME_ME2_CALC0__KME_ME2_CALC0_00_ADDR	0xb809c800
#define	KME_ME2_CALC0__KME_ME2_CALC0_04_ADDR	0xb809c804
#define	KME_ME2_CALC0__KME_ME2_CALC0_08_ADDR	0xb809c808
#define	KME_ME2_CALC0__KME_ME2_CALC0_0C_ADDR	0xb809c80c
#define	KME_ME2_CALC0__KME_ME2_CALC0_10_ADDR	0xb809c810
#define	KME_ME2_CALC0__KME_ME2_CALC0_14_ADDR	0xb809c814
#define	KME_ME2_CALC0__KME_ME2_CALC0_18_ADDR	0xb809c818
#define	KME_ME2_CALC0__KME_ME2_CALC0_1C_ADDR	0xb809c81c
#define	KME_ME2_CALC0__KME_ME2_CALC0_20_ADDR	0xb809c820
#define	KME_ME2_CALC0__KME_ME2_CALC0_24_ADDR	0xb809c824
#define	KME_ME2_CALC0__KME_ME2_CALC0_28_ADDR	0xb809c828
#define	KME_ME2_CALC0__KME_ME2_CALC0_2C_ADDR	0xb809c82c
#define	KME_ME2_CALC0__KME_ME2_CALC0_30_ADDR	0xb809c830
#define	KME_ME2_CALC0__KME_ME2_CALC0_34_ADDR	0xb809c834
#define	KME_ME2_CALC0__KME_ME2_CALC0_38_ADDR	0xb809c838
#define	KME_ME2_CALC0__KME_ME2_CALC0_3C_ADDR	0xb809c83c
#define	KME_ME2_CALC0__KME_ME2_CALC0_40_ADDR	0xb809c840
#define	KME_ME2_CALC0__KME_ME2_CALC0_44_ADDR	0xb809c844
#define	KME_ME2_CALC0__KME_ME2_CALC0_48_ADDR	0xb809c848
#define	KME_ME2_CALC0__KME_ME2_CALC0_4C_ADDR	0xb809c84c
#define	KME_ME2_CALC0__KME_ME2_CALC0_50_ADDR	0xb809c850
#define	KME_ME2_CALC0__KME_ME2_CALC0_54_ADDR	0xb809c854
#define	KME_ME2_CALC0__KME_ME2_CALC0_60_ADDR	0xb809c860
#define	KME_ME2_CALC0__KME_ME2_CALC0_64_ADDR	0xb809c864
#define	KME_ME2_CALC0__KME_ME2_CALC0_68_ADDR	0xb809c868
#define	KME_ME2_CALC0__KME_ME2_CALC0_6C_ADDR	0xb809c86c
#define	KME_ME2_CALC0__KME_ME2_CALC0_70_ADDR	0xb809c870
#define	KME_ME2_CALC0__KME_ME2_CALC0_74_ADDR	0xb809c874
#define	KME_ME2_CALC0__KME_ME2_CALC0_78_ADDR	0xb809c878
#define	KME_ME2_CALC0__KME_ME2_CALC0_7C_ADDR	0xb809c87c
#define	KME_ME2_CALC0__KME_ME2_CALC0_80_ADDR	0xb809c880
#define	KME_ME2_CALC0__KME_ME2_CALC0_84_ADDR	0xb809c884
#define	KME_ME2_CALC0__KME_ME2_CALC0_88_ADDR	0xb809c888
#define	KME_ME2_CALC0__KME_ME2_CALC0_8C_ADDR	0xb809c88c
#define	KME_ME2_CALC0__KME_ME2_CALC0_90_ADDR	0xb809c890
#define	KME_ME2_CALC0__KME_ME2_CALC0_94_ADDR	0xb809c894
#define	KME_ME2_CALC0__KME_ME2_CALC0_98_ADDR	0xb809c898
#define	KME_ME2_CALC0__KME_ME2_CALC0_9C_ADDR	0xb809c89c
#define	KME_ME2_CALC0__KME_ME2_CALC0_A0_ADDR	0xb809c8a0
#define	KME_ME2_CALC0__KME_ME2_CALC0_A4_ADDR	0xb809c8a4
#define	KME_ME2_CALC0__KME_ME2_CALC0_A8_ADDR	0xb809c8a8
#define	KME_ME2_CALC0__KME_ME2_CALC0_AC_ADDR	0xb809c8ac
#define	KME_ME2_CALC0__KME_ME2_CALC0_B0_ADDR	0xb809c8b0
#define	KME_ME2_CALC0__KME_ME2_CALC0_B4_ADDR	0xb809c8b4
#define	KME_ME2_CALC0__KME_ME2_CALC0_B8_ADDR	0xb809c8b8
#define	KME_ME2_CALC0__KME_ME2_CALC0_BC_ADDR	0xb809c8bc
#define	KME_ME2_CALC0__KME_ME2_CALC0_C0_ADDR	0xb809c8c0
#define	KME_ME2_CALC0__KME_ME2_CALC0_C4_ADDR	0xb809c8c4
#define	KME_ME2_CALC0__KME_ME2_CALC0_C8_ADDR	0xb809c8c8
#define	KME_ME2_CALC0__KME_ME2_CALC0_CC_ADDR	0xb809c8cc
#define	KME_ME2_CALC0__KME_ME2_CALC0_D0_ADDR	0xb809c8d0
#define	KME_ME2_CALC0__KME_ME2_CALC0_D4_ADDR	0xb809c8d4
#define	KME_ME2_CALC0__KME_ME2_CALC0_D8_ADDR	0xb809c8d8
#define	KME_ME2_CALC0__KME_ME2_CALC0_DC_ADDR	0xb809c8dc
#define	KME_ME2_CALC0__KME_ME2_CALC0_E0_ADDR	0xb809c8e0
#define	KME_ME2_CALC0__KME_ME2_CALC0_E4_ADDR	0xb809c8e4
#define	KME_ME2_CALC0__KME_ME2_CALC0_E8_ADDR	0xb809c8e8
#define	KME_ME2_CALC0__KME_ME2_CALC0_EC_ADDR	0xb809c8ec
#define	KME_ME2_CALC0__KME_ME2_CALC0_F0_ADDR	0xb809c8f0
#define	KME_ME2_CALC0__KME_ME2_CALC0_F4_ADDR	0xb809c8f4
#define	KME_ME2_CALC0__KME_ME2_CALC0_F8_ADDR	0xb809c8f8
//KME_ME1_TOP6	0x39
#define	KME_ME1_TOP6__KME_ME1_TOP6_00_ADDR	0xb809c900
#define	KME_ME1_TOP6__KME_ME1_TOP6_04_ADDR	0xb809c904
#define	KME_ME1_TOP6__KME_ME1_TOP6_08_ADDR	0xb809c908
#define	KME_ME1_TOP6__KME_ME1_TOP6_0C_ADDR	0xb809c90c
#define	KME_ME1_TOP6__KME_ME1_TOP6_10_ADDR	0xb809c910
#define	KME_ME1_TOP6__KME_ME1_TOP6_14_ADDR	0xb809c914
#define	KME_ME1_TOP6__KME_ME1_TOP6_18_ADDR	0xb809c918
#define	KME_ME1_TOP6__KME_ME1_TOP6_1C_ADDR	0xb809c91c
#define	KME_ME1_TOP6__KME_ME1_TOP6_20_ADDR	0xb809c920
//KME_ME1_TOP7	0x3a
//KME_ME1_TOP8	0x3b
//KME_ME1_TOP9	0x3c
//KME_DEHALO	0x3d
#define	KME_DEHALO__KME_DEHALO_10_ADDR	0xb809cd10
#define	KME_DEHALO__KME_DEHALO_14_ADDR	0xb809cd14
#define	KME_DEHALO__KME_DEHALO_18_ADDR	0xb809cd18
#define	KME_DEHALO__KME_DEHALO_1C_ADDR	0xb809cd1c
#define	KME_DEHALO__KME_DEHALO_20_ADDR	0xb809cd20
#define	KME_DEHALO__KME_DEHALO_24_ADDR	0xb809cd24
#define	KME_DEHALO__KME_DEHALO_28_ADDR	0xb809cd28
#define	KME_DEHALO__KME_DEHALO_2C_ADDR	0xb809cd2c
#define	KME_DEHALO__KME_DEHALO_30_ADDR	0xb809cd30
#define	KME_DEHALO__KME_DEHALO_34_ADDR	0xb809cd34
#define	KME_DEHALO__KME_DEHALO_38_ADDR	0xb809cd38
#define	KME_DEHALO__KME_DEHALO_3C_ADDR	0xb809cd3c
#define	KME_DEHALO__KME_DEHALO_40_ADDR	0xb809cd40
#define	KME_DEHALO__KME_DEHALO_44_ADDR	0xb809cd44
#define	KME_DEHALO__KME_DEHALO_48_ADDR	0xb809cd48
#define	KME_DEHALO__KME_DEHALO_4C_ADDR	0xb809cd4c
#define	KME_DEHALO__KME_DEHALO_50_ADDR	0xb809cd50
#define	KME_DEHALO__KME_DEHALO_54_ADDR	0xb809cd54
#define	KME_DEHALO__KME_DEHALO_58_ADDR	0xb809cd58
#define	KME_DEHALO__KME_DEHALO_5C_ADDR	0xb809cd5c
#define	KME_DEHALO__KME_DEHALO_60_ADDR	0xb809cd60
#define	KME_DEHALO__KME_DEHALO_64_ADDR	0xb809cd64
#define	KME_DEHALO__KME_DEHALO_68_ADDR	0xb809cd68
#define	KME_DEHALO__KME_DEHALO_6C_ADDR	0xb809cd6c
#define	KME_DEHALO__KME_DEHALO_70_ADDR	0xb809cd70
#define	KME_DEHALO__KME_DEHALO_74_ADDR	0xb809cd74
#define	KME_DEHALO__KME_DEHALO_78_ADDR	0xb809cd78
#define	KME_DEHALO__KME_DEHALO_7C_ADDR	0xb809cd7c
#define	KME_DEHALO__KME_DEHALO_80_ADDR	0xb809cd80
#define	KME_DEHALO__KME_DEHALO_84_ADDR	0xb809cd84
#define	KME_DEHALO__KME_DEHALO_88_ADDR	0xb809cd88
#define	KME_DEHALO__KME_DEHALO_8C_ADDR	0xb809cd8c
#define	KME_DEHALO__KME_DEHALO_90_ADDR	0xb809cd90
#define	KME_DEHALO__KME_DEHALO_94_ADDR	0xb809cd94
#define	KME_DEHALO__KME_DEHALO_A4_ADDR	0xb809cda4
#define	KME_DEHALO__KME_DEHALO_A8_ADDR	0xb809cda8
#define	KME_DEHALO__KME_DEHALO_AC_ADDR	0xb809cdac
#define	KME_DEHALO__KME_DEHALO_B0_ADDR	0xb809cdb0
#define	KME_DEHALO__KME_DEHALO_B4_ADDR	0xb809cdb4
#define	KME_DEHALO__KME_DEHALO_B8_ADDR	0xb809cdb8
#define	KME_DEHALO__KME_DEHALO_BC_ADDR	0xb809cdbc
#define	KME_DEHALO__KME_DEHALO_C0_ADDR	0xb809cdc0
#define	KME_DEHALO__KME_DEHALO_C4_ADDR	0xb809cdc4
#define	KME_DEHALO__KME_DEHALO_C8_ADDR	0xb809cdc8
#define	KME_DEHALO__KME_DEHALO_CC_ADDR	0xb809cdcc
#define	KME_DEHALO__KME_DEHALO_D0_ADDR	0xb809cdd0
#define	KME_DEHALO__KME_DEHALO_D4_ADDR	0xb809cdd4
#define	KME_DEHALO__KME_DEHALO_D8_ADDR	0xb809cdd8
#define	KME_DEHALO__KME_DEHALO_DC_ADDR	0xb809cddc
#define	KME_DEHALO__KME_DEHALO_E0_ADDR	0xb809cde0
#define	KME_DEHALO__KME_DEHALO_E4_ADDR	0xb809cde4
#define	KME_DEHALO__KME_DEHALO_E8_ADDR	0xb809cde8
#define	KME_DEHALO__KME_DEHALO_EC_ADDR	0xb809cdec
#define	KME_DEHALO__KME_DEHALO_F0_ADDR	0xb809cdf0
#define	KME_DEHALO__KME_DEHALO_F4_ADDR	0xb809cdf4
#define	KME_DEHALO__KME_DEHALO_F8_ADDR	0xb809cdf8
#define	KME_DEHALO__KME_DEHALO_FC_ADDR	0xb809cdfc
//KME_DEHALO2	0x3e
#define	KME_DEHALO2__KME_DEHALO2_08_ADDR	0xb809ce08
#define	KME_DEHALO2__KME_DEHALO2_10_ADDR	0xb809ce10
#define	KME_DEHALO2__KME_DEHALO2_14_ADDR	0xb809ce14
#define	KME_DEHALO2__KME_DEHALO2_18_ADDR	0xb809ce18
#define	KME_DEHALO2__KME_DEHALO2_1C_ADDR	0xb809ce1c
#define	KME_DEHALO2__KME_DEHALO2_20_ADDR	0xb809ce20
#define	KME_DEHALO2__KME_DEHALO2_24_ADDR	0xb809ce24
#define	KME_DEHALO2__KME_DEHALO2_28_ADDR	0xb809ce28
#define	KME_DEHALO2__KME_DEHALO2_2C_ADDR	0xb809ce2c
#define	KME_DEHALO2__KME_DEHALO2_30_ADDR	0xb809ce30
#define	KME_DEHALO2__KME_DEHALO2_34_ADDR	0xb809ce34
#define	KME_DEHALO2__KME_DEHALO2_38_ADDR	0xb809ce38
#define	KME_DEHALO2__KME_DEHALO2_3C_ADDR	0xb809ce3c
#define	KME_DEHALO2__KME_DEHALO2_40_ADDR	0xb809ce40
#define	KME_DEHALO2__KME_DEHALO2_44_ADDR	0xb809ce44
#define	KME_DEHALO2__KME_DEHALO2_48_ADDR	0xb809ce48
#define	KME_DEHALO2__KME_DEHALO2_4C_ADDR	0xb809ce4c
#define	KME_DEHALO2__KME_DEHALO2_50_ADDR	0xb809ce50
#define	KME_DEHALO2__KME_DEHALO2_54_ADDR	0xb809ce54
#define	KME_DEHALO2__KME_DEHALO2_58_ADDR	0xb809ce58
#define	KME_DEHALO2__KME_DEHALO2_74_ADDR	0xb809ce74
#define	KME_DEHALO2__KME_DEHALO2_78_ADDR	0xb809ce78
#define	KME_DEHALO2__KME_DEHALO2_7C_ADDR	0xb809ce7c
#define	KME_DEHALO2__KME_DEHALO2_80_ADDR	0xb809ce80
#define	KME_DEHALO2__KME_DEHALO2_84_ADDR	0xb809ce84
#define	KME_DEHALO2__KME_DEHALO2_88_ADDR	0xb809ce88
#define	KME_DEHALO2__KME_DEHALO2_8C_ADDR	0xb809ce8c
#define	KME_DEHALO2__KME_DEHALO2_90_ADDR	0xb809ce90
#define	KME_DEHALO2__KME_DEHALO2_94_ADDR	0xb809ce94
#define	KME_DEHALO2__KME_DEHALO2_98_ADDR	0xb809ce98
#define	KME_DEHALO2__KME_DEHALO2_9C_ADDR	0xb809ce9c
#define	KME_DEHALO2__KME_DEHALO2_A0_ADDR	0xb809cea0
#define	KME_DEHALO2__KME_DEHALO2_A4_ADDR	0xb809cea4
#define	KME_DEHALO2__KME_DEHALO2_A8_ADDR	0xb809cea8
#define	KME_DEHALO2__KME_DEHALO2_AC_ADDR	0xb809ceac
#define	KME_DEHALO2__KME_DEHALO2_B0_ADDR	0xb809ceb0
#define	KME_DEHALO2__KME_DEHALO2_B4_ADDR	0xb809ceb4
#define	KME_DEHALO2__KME_DEHALO2_B8_ADDR	0xb809ceb8
#define	KME_DEHALO2__KME_DEHALO2_BC_ADDR	0xb809cebc
#define	KME_DEHALO2__KME_DEHALO2_C0_ADDR	0xb809cec0
#define	KME_DEHALO2__KME_DEHALO2_C4_ADDR	0xb809cec4
#define	KME_DEHALO2__KME_DEHALO2_C8_ADDR	0xb809cec8
#define	KME_DEHALO2__KME_DEHALO2_CC_ADDR	0xb809cecc
#define	KME_DEHALO2__KME_DEHALO2_D0_ADDR	0xb809ced0
#define	KME_DEHALO2__KME_DEHALO2_D4_ADDR	0xb809ced4
#define	KME_DEHALO2__KME_DEHALO2_D8_ADDR	0xb809ced8
#define	KME_DEHALO2__KME_DEHALO2_DC_ADDR	0xb809cedc
#define	KME_DEHALO2__KME_DEHALO2_E0_ADDR	0xb809cee0
#define	KME_DEHALO2__KME_DEHALO2_E4_ADDR	0xb809cee4
#define	KME_DEHALO2__KME_DEHALO2_E8_ADDR	0xb809cee8
//KPOST_TOP	0x40
#define	KPOST_TOP__KPOST_TOP_00_ADDR	0xb809d000
#define	KPOST_TOP__KPOST_TOP_04_ADDR	0xb809d004
#define	KPOST_TOP__KPOST_TOP_08_ADDR	0xb809d008
#define	KPOST_TOP__KPOST_TOP_0C_ADDR	0xb809d00c
#define	KPOST_TOP__KPOST_TOP_10_ADDR	0xb809d010
#define	KPOST_TOP__KPOST_TOP_14_ADDR	0xb809d014
#define	KPOST_TOP__KPOST_TOP_18_ADDR	0xb809d018
#define	KPOST_TOP__KPOST_TOP_1C_ADDR	0xb809d01c
#define	KPOST_TOP__KPOST_TOP_20_ADDR	0xb809d020
#define	KPOST_TOP__KPOST_TOP_24_ADDR	0xb809d024
#define	KPOST_TOP__KPOST_TOP_28_ADDR	0xb809d028
#define	KPOST_TOP__KPOST_TOP_30_ADDR	0xb809d030
#define	KPOST_TOP__KPOST_TOP_34_ADDR	0xb809d034
#define	KPOST_TOP__KPOST_TOP_38_ADDR	0xb809d038
#define	KPOST_TOP__KPOST_TOP_3C_ADDR	0xb809d03c
#define	KPOST_TOP__KPOST_TOP_40_ADDR	0xb809d040
#define	KPOST_TOP__KPOST_TOP_44_ADDR	0xb809d044
#define	KPOST_TOP__KPOST_TOP_48_ADDR	0xb809d048
#define	KPOST_TOP__KPOST_TOP_4C_ADDR	0xb809d04c
#define	KPOST_TOP__KPOST_TOP_50_ADDR	0xb809d050
#define	KPOST_TOP__KPOST_TOP_60_ADDR	0xb809d060
#define	KPOST_TOP__KPOST_TOP_64_ADDR	0xb809d064
#define	KPOST_TOP__KPOST_TOP_68_ADDR	0xb809d068
#define	KPOST_TOP__KPOST_TOP_6C_ADDR	0xb809d06c
#define	KPOST_TOP__KPOST_TOP_80_ADDR	0xb809d080
#define	KPOST_TOP__KPOST_TOP_84_ADDR	0xb809d084
#define	KPOST_TOP__KPOST_TOP_88_ADDR	0xb809d088
#define	KPOST_TOP__KPOST_TOP_8C_ADDR	0xb809d08c
#define	KPOST_TOP__KPOST_TOP_90_ADDR	0xb809d090
#define	KPOST_TOP__KPOST_TOP_94_ADDR	0xb809d094
#define	KPOST_TOP__KPOST_TOP_A0_ADDR	0xb809d0a0
#define	KPOST_TOP__KPOST_TOP_A4_ADDR	0xb809d0a4
#define	KPOST_TOP__KPOST_TOP_A8_ADDR	0xb809d0a8
#define	KPOST_TOP__KPOST_TOP_AC_ADDR	0xb809d0ac
#define	KPOST_TOP__KPOST_TOP_B0_ADDR	0xb809d0b0
#define	KPOST_TOP__KPOST_TOP_B4_ADDR	0xb809d0b4
#define	KPOST_TOP__KPOST_TOP_B8_ADDR	0xb809d0b8
#define	KPOST_TOP__KPOST_TOP_BC_ADDR	0xb809d0bc
//CRTC1	0x41
#define	CRTC1__CRTC1_00_ADDR	0xb809d100
#define	CRTC1__CRTC1_04_ADDR	0xb809d104
#define	CRTC1__CRTC1_08_ADDR	0xb809d108
#define	CRTC1__CRTC1_0C_ADDR	0xb809d10c
#define	CRTC1__CRTC1_10_ADDR	0xb809d110
#define	CRTC1__CRTC1_14_ADDR	0xb809d114
#define	CRTC1__CRTC1_18_ADDR	0xb809d118
#define	CRTC1__CRTC1_1C_ADDR	0xb809d11c
#define	CRTC1__CRTC1_20_ADDR	0xb809d120
#define	CRTC1__CRTC1_24_ADDR	0xb809d124
#define	CRTC1__CRTC1_28_ADDR	0xb809d128
#define	CRTC1__CRTC1_2C_ADDR	0xb809d12c
#define	CRTC1__CRTC1_30_ADDR	0xb809d130
#define	CRTC1__CRTC1_34_ADDR	0xb809d134
#define	CRTC1__CRTC1_38_ADDR	0xb809d138
#define	CRTC1__CRTC1_3C_ADDR	0xb809d13c
#define	CRTC1__CRTC1_40_ADDR	0xb809d140
#define	CRTC1__CRTC1_44_ADDR	0xb809d144
#define	CRTC1__CRTC1_48_ADDR	0xb809d148
#define	CRTC1__CRTC1_60_ADDR	0xb809d160
#define	CRTC1__CRTC1_64_ADDR	0xb809d164
#define	CRTC1__CRTC1_68_ADDR	0xb809d168
#define	CRTC1__CRTC1_6C_ADDR	0xb809d16c
#define	CRTC1__CRTC1_70_ADDR	0xb809d170
#define	CRTC1__CRTC1_74_ADDR	0xb809d174
#define	CRTC1__CRTC1_78_ADDR	0xb809d178
#define	CRTC1__CRTC1_7C_ADDR	0xb809d17c
#define	CRTC1__CRTC1_80_ADDR	0xb809d180
#define	CRTC1__CRTC1_84_ADDR	0xb809d184
#define	CRTC1__CRTC1_88_ADDR	0xb809d188
#define	CRTC1__CRTC1_8C_ADDR	0xb809d18c
#define	CRTC1__CRTC1_90_ADDR	0xb809d190
#define	CRTC1__CRTC1_94_ADDR	0xb809d194
//kphase	0x44
#define	KPHASE__KPHASE_00_ADDR	0xb809d400
#define	KPHASE__KPHASE_04_ADDR	0xb809d404
#define	KPHASE__KPHASE_08_ADDR	0xb809d408
#define	KPHASE__KPHASE_0C_ADDR	0xb809d40c
#define	KPHASE__KPHASE_10_ADDR	0xb809d410
#define	KPHASE__KPHASE_14_ADDR	0xb809d414
#define	KPHASE__KPHASE_18_ADDR	0xb809d418
#define	KPHASE__KPHASE_1C_ADDR	0xb809d41c
#define	KPHASE__KPHASE_20_ADDR	0xb809d420
#define	KPHASE__KPHASE_24_ADDR	0xb809d424
#define	KPHASE__KPHASE_28_ADDR	0xb809d428
#define	KPHASE__KPHASE_2C_ADDR	0xb809d42c
#define	KPHASE__KPHASE_30_ADDR	0xb809d430
#define	KPHASE__KPHASE_34_ADDR	0xb809d434
#define	KPHASE__KPHASE_38_ADDR	0xb809d438
#define	KPHASE__KPHASE_3C_ADDR	0xb809d43c
#define	KPHASE__KPHASE_40_ADDR	0xb809d440
#define	KPHASE__KPHASE_44_ADDR	0xb809d444
#define	KPHASE__KPHASE_48_ADDR	0xb809d448
#define	KPHASE__KPHASE_4C_ADDR	0xb809d44c
#define	KPHASE__KPHASE_50_ADDR	0xb809d450
#define	KPHASE__KPHASE_54_ADDR	0xb809d454
#define	KPHASE__KPHASE_58_ADDR	0xb809d458
#define	KPHASE__KPHASE_5C_ADDR	0xb809d45c
#define	KPHASE__KPHASE_60_ADDR	0xb809d460
#define	KPHASE__KPHASE_64_ADDR	0xb809d464
#define	KPHASE__KPHASE_68_ADDR	0xb809d468
#define	KPHASE__KPHASE_6C_ADDR	0xb809d46c
#define	KPHASE__KPHASE_70_ADDR	0xb809d470
#define	KPHASE__KPHASE_74_ADDR	0xb809d474
#define	KPHASE__KPHASE_78_ADDR	0xb809d478
//Hardware	0x45
#define	HARDWARE__HARDWARE_00_ADDR	0xb809d500
#define	HARDWARE__HARDWARE_01_ADDR	0xb809d504
#define	HARDWARE__HARDWARE_02_ADDR	0xb809d508
#define	HARDWARE__HARDWARE_03_ADDR	0xb809d50c
#define	HARDWARE__HARDWARE_04_ADDR	0xb809d510
#define	HARDWARE__HARDWARE_05_ADDR	0xb809d514
#define	HARDWARE__HARDWARE_06_ADDR	0xb809d518
#define	HARDWARE__HARDWARE_07_ADDR	0xb809d51c
#define	HARDWARE__HARDWARE_08_ADDR	0xb809d520
#define	HARDWARE__HARDWARE_09_ADDR	0xb809d524
#define	HARDWARE__HARDWARE_10_ADDR	0xb809d528
#define	HARDWARE__HARDWARE_11_ADDR	0xb809d52c
#define	HARDWARE__HARDWARE_12_ADDR	0xb809d530
#define	HARDWARE__HARDWARE_13_ADDR	0xb809d534
#define	HARDWARE__HARDWARE_14_ADDR	0xb809d538
#define	HARDWARE__HARDWARE_15_ADDR	0xb809d53c
#define	HARDWARE__HARDWARE_16_ADDR	0xb809d540
#define	HARDWARE__HARDWARE_17_ADDR	0xb809d544
#define	HARDWARE__HARDWARE_18_ADDR	0xb809d548
#define	HARDWARE__HARDWARE_19_ADDR	0xb809d54c
#define	HARDWARE__HARDWARE_20_ADDR	0xb809d550
#define	HARDWARE__HARDWARE_21_ADDR	0xb809d554
#define	HARDWARE__HARDWARE_22_ADDR	0xb809d558
#define	HARDWARE__HARDWARE_23_ADDR	0xb809d55c
#define	HARDWARE__HARDWARE_24_ADDR	0xb809d560
#define	HARDWARE__HARDWARE_25_ADDR	0xb809d564
#define	HARDWARE__HARDWARE_26_ADDR	0xb809d568
#define	HARDWARE__HARDWARE_27_ADDR	0xb809d56c
#define	HARDWARE__HARDWARE_28_ADDR	0xb809d570
#define	HARDWARE__HARDWARE_29_ADDR	0xb809d574
#define	HARDWARE__HARDWARE_30_ADDR	0xb809d578
#define	HARDWARE__HARDWARE_31_ADDR	0xb809d57c
#define	HARDWARE__HARDWARE_32_ADDR	0xb809d580
#define	HARDWARE__HARDWARE_33_ADDR	0xb809d584
#define	HARDWARE__HARDWARE_34_ADDR	0xb809d588
#define	HARDWARE__HARDWARE_35_ADDR	0xb809d58c
#define	HARDWARE__HARDWARE_36_ADDR	0xb809d590
#define	HARDWARE__HARDWARE_37_ADDR	0xb809d594
#define	HARDWARE__HARDWARE_38_ADDR	0xb809d598
#define	HARDWARE__HARDWARE_39_ADDR	0xb809d59c
#define	HARDWARE__HARDWARE_40_ADDR	0xb809d5a0
#define	HARDWARE__HARDWARE_41_ADDR	0xb809d5a4
#define	HARDWARE__HARDWARE_42_ADDR	0xb809d5a8
#define	HARDWARE__HARDWARE_43_ADDR	0xb809d5ac
#define	HARDWARE__HARDWARE_44_ADDR	0xb809d5b0
#define	HARDWARE__HARDWARE_45_ADDR	0xb809d5b4
#define	HARDWARE__HARDWARE_46_ADDR	0xb809d5b8
#define	HARDWARE__HARDWARE_47_ADDR	0xb809d5bc
#define	HARDWARE__HARDWARE_48_ADDR	0xb809d5c0
#define	HARDWARE__HARDWARE_49_ADDR	0xb809d5c4
#define	HARDWARE__HARDWARE_50_ADDR	0xb809d5c8
#define	HARDWARE__HARDWARE_51_ADDR	0xb809d5cc
#define	HARDWARE__HARDWARE_52_ADDR	0xb809d5d0
#define	HARDWARE__HARDWARE_53_ADDR	0xb809d5d4
#define	HARDWARE__HARDWARE_54_ADDR	0xb809d5d8
#define	HARDWARE__HARDWARE_55_ADDR	0xb809d5dc
#define	HARDWARE__HARDWARE_56_ADDR	0xb809d5e0
#define	HARDWARE__HARDWARE_57_ADDR	0xb809d5e4
#define	HARDWARE__HARDWARE_58_ADDR	0xb809d5e8
#define	HARDWARE__HARDWARE_59_ADDR	0xb809d5ec
#define	HARDWARE__HARDWARE_60_ADDR	0xb809d5f0
#define	HARDWARE__HARDWARE_61_ADDR	0xb809d5f4
#define	HARDWARE__HARDWARE_62_ADDR	0xb809d5f8
#define	HARDWARE__HARDWARE_63_ADDR	0xb809d5fc
//Software	0x46
#define	SOFTWARE__SOFTWARE_00_ADDR	0xb809d600
#define	SOFTWARE__SOFTWARE_01_ADDR	0xb809d604
#define	SOFTWARE__SOFTWARE_02_ADDR	0xb809d608
#define	SOFTWARE__SOFTWARE_03_ADDR	0xb809d60c
#define	SOFTWARE__SOFTWARE_04_ADDR	0xb809d610
#define	SOFTWARE__SOFTWARE_05_ADDR	0xb809d614
#define	SOFTWARE__SOFTWARE_06_ADDR	0xb809d618
#define	SOFTWARE__SOFTWARE_07_ADDR	0xb809d61c
#define	SOFTWARE__SOFTWARE_08_ADDR	0xb809d620
#define	SOFTWARE__SOFTWARE_09_ADDR	0xb809d624
#define	SOFTWARE__SOFTWARE_10_ADDR	0xb809d628
#define	SOFTWARE__SOFTWARE_11_ADDR	0xb809d62c
#define	SOFTWARE__SOFTWARE_12_ADDR	0xb809d630
#define	SOFTWARE__SOFTWARE_13_ADDR	0xb809d634
#define	SOFTWARE__SOFTWARE_14_ADDR	0xb809d638
#define	SOFTWARE__SOFTWARE_15_ADDR	0xb809d63c
#define	SOFTWARE__SOFTWARE_16_ADDR	0xb809d640
#define	SOFTWARE__SOFTWARE_17_ADDR	0xb809d644
#define	SOFTWARE__SOFTWARE_18_ADDR	0xb809d648
#define	SOFTWARE__SOFTWARE_19_ADDR	0xb809d64c
#define	SOFTWARE__SOFTWARE_20_ADDR	0xb809d650
#define	SOFTWARE__SOFTWARE_21_ADDR	0xb809d654
#define	SOFTWARE__SOFTWARE_22_ADDR	0xb809d658
#define	SOFTWARE__SOFTWARE_23_ADDR	0xb809d65c
#define	SOFTWARE__SOFTWARE_24_ADDR	0xb809d660
#define	SOFTWARE__SOFTWARE_25_ADDR	0xb809d664
#define	SOFTWARE__SOFTWARE_26_ADDR	0xb809d668
#define	SOFTWARE__SOFTWARE_27_ADDR	0xb809d66c
#define	SOFTWARE__SOFTWARE_28_ADDR	0xb809d670
#define	SOFTWARE__SOFTWARE_29_ADDR	0xb809d674
#define	SOFTWARE__SOFTWARE_30_ADDR	0xb809d678
#define	SOFTWARE__SOFTWARE_31_ADDR	0xb809d67c
#define	SOFTWARE__SOFTWARE_32_ADDR	0xb809d680
#define	SOFTWARE__SOFTWARE_33_ADDR	0xb809d684
#define	SOFTWARE__SOFTWARE_34_ADDR	0xb809d688
#define	SOFTWARE__SOFTWARE_35_ADDR	0xb809d68c
#define	SOFTWARE__SOFTWARE_36_ADDR	0xb809d690
#define	SOFTWARE__SOFTWARE_37_ADDR	0xb809d694
#define	SOFTWARE__SOFTWARE_38_ADDR	0xb809d698
#define	SOFTWARE__SOFTWARE_39_ADDR	0xb809d69c
#define	SOFTWARE__SOFTWARE_40_ADDR	0xb809d6a0
#define	SOFTWARE__SOFTWARE_41_ADDR	0xb809d6a4
#define	SOFTWARE__SOFTWARE_42_ADDR	0xb809d6a8
#define	SOFTWARE__SOFTWARE_43_ADDR	0xb809d6ac
#define	SOFTWARE__SOFTWARE_44_ADDR	0xb809d6b0
#define	SOFTWARE__SOFTWARE_45_ADDR	0xb809d6b4
#define	SOFTWARE__SOFTWARE_46_ADDR	0xb809d6b8
#define	SOFTWARE__SOFTWARE_47_ADDR	0xb809d6bc
#define	SOFTWARE__SOFTWARE_48_ADDR	0xb809d6c0
#define	SOFTWARE__SOFTWARE_49_ADDR	0xb809d6c4
#define	SOFTWARE__SOFTWARE_50_ADDR	0xb809d6c8
#define	SOFTWARE__SOFTWARE_51_ADDR	0xb809d6cc
#define	SOFTWARE__SOFTWARE_52_ADDR	0xb809d6d0
#define	SOFTWARE__SOFTWARE_53_ADDR	0xb809d6d4
#define	SOFTWARE__SOFTWARE_54_ADDR	0xb809d6d8
#define	SOFTWARE__SOFTWARE_55_ADDR	0xb809d6dc
#define	SOFTWARE__SOFTWARE_56_ADDR	0xb809d6e0
#define	SOFTWARE__SOFTWARE_57_ADDR	0xb809d6e4
#define	SOFTWARE__SOFTWARE_58_ADDR	0xb809d6e8
#define	SOFTWARE__SOFTWARE_59_ADDR	0xb809d6ec
#define	SOFTWARE__SOFTWARE_60_ADDR	0xb809d6f0
#define	SOFTWARE__SOFTWARE_61_ADDR	0xb809d6f4
#define	SOFTWARE__SOFTWARE_62_ADDR	0xb809d6f8
#define	SOFTWARE__SOFTWARE_63_ADDR	0xb809d6fc
//Software1	0x47
#define	SOFTWARE1__SOFTWARE1_00_ADDR	0xb809d700
#define	SOFTWARE1__SOFTWARE1_01_ADDR	0xb809d704
#define	SOFTWARE1__SOFTWARE1_02_ADDR	0xb809d708
#define	SOFTWARE1__SOFTWARE1_03_ADDR	0xb809d70c
#define	SOFTWARE1__SOFTWARE1_04_ADDR	0xb809d710
#define	SOFTWARE1__SOFTWARE1_05_ADDR	0xb809d714
#define	SOFTWARE1__SOFTWARE1_06_ADDR	0xb809d718
#define	SOFTWARE1__SOFTWARE1_07_ADDR	0xb809d71c
#define	SOFTWARE1__SOFTWARE1_08_ADDR	0xb809d720
#define	SOFTWARE1__SOFTWARE1_09_ADDR	0xb809d724
#define	SOFTWARE1__SOFTWARE1_10_ADDR	0xb809d728
#define	SOFTWARE1__SOFTWARE1_11_ADDR	0xb809d72c
#define	SOFTWARE1__SOFTWARE1_12_ADDR	0xb809d730
#define	SOFTWARE1__SOFTWARE1_13_ADDR	0xb809d734
#define	SOFTWARE1__SOFTWARE1_14_ADDR	0xb809d738
#define	SOFTWARE1__SOFTWARE1_15_ADDR	0xb809d73c
#define	SOFTWARE1__SOFTWARE1_16_ADDR	0xb809d740
#define	SOFTWARE1__SOFTWARE1_17_ADDR	0xb809d744
#define	SOFTWARE1__SOFTWARE1_18_ADDR	0xb809d748
#define	SOFTWARE1__SOFTWARE1_19_ADDR	0xb809d74c
#define	SOFTWARE1__SOFTWARE1_20_ADDR	0xb809d750
#define	SOFTWARE1__SOFTWARE1_21_ADDR	0xb809d754
#define	SOFTWARE1__SOFTWARE1_22_ADDR	0xb809d758
#define	SOFTWARE1__SOFTWARE1_23_ADDR	0xb809d75c
#define	SOFTWARE1__SOFTWARE1_24_ADDR	0xb809d760
#define	SOFTWARE1__SOFTWARE1_25_ADDR	0xb809d764
#define	SOFTWARE1__SOFTWARE1_26_ADDR	0xb809d768
#define	SOFTWARE1__SOFTWARE1_27_ADDR	0xb809d76c
#define	SOFTWARE1__SOFTWARE1_28_ADDR	0xb809d770
#define	SOFTWARE1__SOFTWARE1_29_ADDR	0xb809d774
#define	SOFTWARE1__SOFTWARE1_30_ADDR	0xb809d778
#define	SOFTWARE1__SOFTWARE1_31_ADDR	0xb809d77c
#define	SOFTWARE1__SOFTWARE1_32_ADDR	0xb809d780
#define	SOFTWARE1__SOFTWARE1_33_ADDR	0xb809d784
#define	SOFTWARE1__SOFTWARE1_34_ADDR	0xb809d788
#define	SOFTWARE1__SOFTWARE1_35_ADDR	0xb809d78c
#define	SOFTWARE1__SOFTWARE1_36_ADDR	0xb809d790
#define	SOFTWARE1__SOFTWARE1_37_ADDR	0xb809d794
#define	SOFTWARE1__SOFTWARE1_38_ADDR	0xb809d798
#define	SOFTWARE1__SOFTWARE1_39_ADDR	0xb809d79c
#define	SOFTWARE1__SOFTWARE1_40_ADDR	0xb809d7a0
#define	SOFTWARE1__SOFTWARE1_41_ADDR	0xb809d7a4
#define	SOFTWARE1__SOFTWARE1_42_ADDR	0xb809d7a8
#define	SOFTWARE1__SOFTWARE1_43_ADDR	0xb809d7ac
#define	SOFTWARE1__SOFTWARE1_44_ADDR	0xb809d7b0
#define	SOFTWARE1__SOFTWARE1_45_ADDR	0xb809d7b4
#define	SOFTWARE1__SOFTWARE1_46_ADDR	0xb809d7b8
#define	SOFTWARE1__SOFTWARE1_47_ADDR	0xb809d7bc
#define	SOFTWARE1__SOFTWARE1_48_ADDR	0xb809d7c0
#define	SOFTWARE1__SOFTWARE1_49_ADDR	0xb809d7c4
#define	SOFTWARE1__SOFTWARE1_50_ADDR	0xb809d7c8
#define	SOFTWARE1__SOFTWARE1_51_ADDR	0xb809d7cc
#define	SOFTWARE1__SOFTWARE1_52_ADDR	0xb809d7d0
#define	SOFTWARE1__SOFTWARE1_53_ADDR	0xb809d7d4
#define	SOFTWARE1__SOFTWARE1_54_ADDR	0xb809d7d8
#define	SOFTWARE1__SOFTWARE1_55_ADDR	0xb809d7dc
#define	SOFTWARE1__SOFTWARE1_56_ADDR	0xb809d7e0
#define	SOFTWARE1__SOFTWARE1_57_ADDR	0xb809d7e4
#define	SOFTWARE1__SOFTWARE1_58_ADDR	0xb809d7e8
#define	SOFTWARE1__SOFTWARE1_59_ADDR	0xb809d7ec
#define	SOFTWARE1__SOFTWARE1_60_ADDR	0xb809d7f0
#define	SOFTWARE1__SOFTWARE1_61_ADDR	0xb809d7f4
#define	SOFTWARE1__SOFTWARE1_62_ADDR	0xb809d7f8
#define	SOFTWARE1__SOFTWARE1_63_ADDR	0xb809d7fc

#endif
#define MEMC_LATENCY01_ADDR 0xB80070B0
#define MEMC_LATENCY02_ADDR 0xB80030B0

typedef struct{
	//kmc_top
	UINT32	KMC_TOP__KMC_TOP_00;
	UINT32	KMC_TOP__KMC_TOP_04;
	UINT32	KMC_TOP__KMC_TOP_08;
	UINT32	KMC_TOP__KMC_TOP_0C;
	UINT32	KMC_TOP__KMC_TOP_10;
	UINT32	KMC_TOP__KMC_TOP_14;
	UINT32	KMC_TOP__KMC_TOP_18;
	UINT32	KMC_TOP__KMC_TOP_1C;
	UINT32	KMC_TOP__KMC_TOP_20;
	UINT32	KMC_TOP__KMC_TOP_24;
	UINT32	KMC_TOP__KMC_TOP_28;
	UINT32	KMC_TOP__KMC_TOP_2C;
	UINT32	KMC_TOP__KMC_TOP_30;
	UINT32	KMC_TOP__KMC_TOP_34;
	UINT32	KMC_TOP__KMC_TOP_38;
	UINT32	KMC_TOP__KMC_TOP_3C;
	UINT32	KMC_TOP__KMC_TOP_40;
	UINT32	KMC_TOP__KMC_TOP_44;
	UINT32	KMC_TOP__KMC_TOP_48;
	UINT32	KMC_TOP__KMC_TOP_4C;
	UINT32	KMC_TOP__KMC_TOP_50;
	UINT32	KMC_TOP__KMC_TOP_54;
	UINT32	KMC_TOP__KMC_TOP_58;
	UINT32	KMC_TOP__KMC_TOP_5C;
	UINT32	KMC_TOP__KMC_TOP_60;
	UINT32	KMC_TOP__KMC_TOP_64;
	UINT32	KMC_TOP__KMC_TOP_68;
	UINT32	KMC_TOP__KMC_TOP_6C;
	//IPPRE
	UINT32	IPPRE__IPPRE_00;
	UINT32	IPPRE__IPPRE_04;
	UINT32	IPPRE__IPPRE_08;
	UINT32	IPPRE__IPPRE_0C;
	UINT32	IPPRE__IPPRE_10;
	UINT32	IPPRE__IPPRE_14;
	UINT32	IPPRE__IPPRE_18;
	UINT32	IPPRE__IPPRE_1C;
	UINT32	IPPRE__IPPRE_20;
	UINT32	IPPRE__IPPRE_24;
	UINT32	IPPRE__IPPRE_28;
	UINT32	IPPRE__IPPRE_2C;
	UINT32	IPPRE__IPPRE_30;
	UINT32	IPPRE__IPPRE_34;
	UINT32	IPPRE__IPPRE_38;
	UINT32	IPPRE__IPPRE_3C;
	UINT32	IPPRE__IPPRE_40;
	UINT32	IPPRE__IPPRE_44;
	UINT32	IPPRE__IPPRE_48;
	UINT32	IPPRE__IPPRE_4C;
	UINT32	IPPRE__IPPRE_50;
	UINT32	IPPRE__IPPRE_54;
	UINT32	IPPRE__IPPRE_58;
	UINT32	IPPRE__IPPRE_5C;
	UINT32	IPPRE__IPPRE_60;
	UINT32	IPPRE__IPPRE_64;
	UINT32	IPPRE__IPPRE_68;
	UINT32	IPPRE__IPPRE_6C;
	UINT32	IPPRE__IPPRE_70;
	UINT32	IPPRE__IPPRE_74;
	UINT32	IPPRE__IPPRE_78;
	UINT32	IPPRE__IPPRE_7C;
	UINT32	IPPRE__IPPRE_80;
	UINT32	IPPRE__IPPRE_84;
	UINT32	IPPRE__IPPRE_88;
	UINT32	IPPRE__IPPRE_8C;
	UINT32	IPPRE__IPPRE_90;
	UINT32	IPPRE__IPPRE_94;
	UINT32	IPPRE__IPPRE_98;
	UINT32	IPPRE__IPPRE_9C;
	UINT32	IPPRE__IPPRE_A0;
	UINT32	IPPRE__IPPRE_A4;
	UINT32	IPPRE__IPPRE_A8;
	UINT32	IPPRE__IPPRE_AC;
	UINT32	IPPRE__IPPRE_B0;
	UINT32	IPPRE__IPPRE_B4;
	UINT32	IPPRE__IPPRE_B8;
	UINT32	IPPRE__IPPRE_BC;
	UINT32	IPPRE__IPPRE_C0;
	UINT32	IPPRE__IPPRE_C4;
	UINT32	IPPRE__IPPRE_C8;
	UINT32	IPPRE__IPPRE_CC;
	UINT32	IPPRE__IPPRE_D0;
	UINT32	IPPRE__IPPRE_D4;
	UINT32	IPPRE__IPPRE_D8;
	UINT32	IPPRE__IPPRE_DC;
	UINT32	IPPRE__IPPRE_E0;
	UINT32	IPPRE__IPPRE_E4;
	//KMC_CPR_TOP0
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_00;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_04;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_08;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_0C;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_10;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_14;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_18;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_1C;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_20;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_24;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_28;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_2C;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_30;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_34;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_38;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_3C;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_40;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_44;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_48;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_4C;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_50;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_54;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_58;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_5C;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_60;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_64;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_68;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_6C;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_70;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_74;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_78;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_7C;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_80;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_84;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_88;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_8C;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_90;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_94;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_98;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_9C;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_A0;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_A4;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_A8;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_AC;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_B0;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_B4;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_B8;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_BC;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_C0;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_C4;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_C8;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_CC;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_D0;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_D4;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_D8;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_DC;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_E0;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_E4;
	UINT32	KMC_CPR_TOP0__KMC_CPR_TOP0_E8;
	//KMC_CPR_TOP1
	UINT32	KMC_CPR_TOP1__PATT_CTRL0;
	UINT32	KMC_CPR_TOP1__PATT_LF_I_POSITION0;
	UINT32	KMC_CPR_TOP1__PATT_LF_I_POSITION1;
	UINT32	KMC_CPR_TOP1__PATT_HF_I_POSITION0;
	UINT32	KMC_CPR_TOP1__PATT_HF_I_POSITION1;
	UINT32	KMC_CPR_TOP1__CPR_PATT_LF_I_SETTING0;
	UINT32	KMC_CPR_TOP1__CPR_PATT_LF_I_SETTING1;
	UINT32	KMC_CPR_TOP1__CPR_PATT_HF_I_SETTING0;
	UINT32	KMC_CPR_TOP1__CPR_PATT_HF_I_SETTING1;
	UINT32	KMC_CPR_TOP1__PATT_LF_P_POSITION0;
	UINT32	KMC_CPR_TOP1__PATT_LF_P_POSITION1;
	UINT32	KMC_CPR_TOP1__PATT_HF_P_POSITION0;
	UINT32	KMC_CPR_TOP1__PATT_HF_P_POSITION1;
	UINT32	KMC_CPR_TOP1__CPR_PATT_LF_P_SETTING0;
	UINT32	KMC_CPR_TOP1__CPR_PATT_LF_P_SETTING1;
	UINT32	KMC_CPR_TOP1__CPR_PATT_HF_P_SETTING0;
	UINT32	KMC_CPR_TOP1__CPR_PATT_HF_P_SETTING1;
	UINT32	KMC_CPR_TOP1__PATT_LF_NR_POSITION0;
	UINT32	KMC_CPR_TOP1__PATT_LF_NR_POSITION1;
	UINT32	KMC_CPR_TOP1__PATT_HF_NR_POSITION;
	UINT32	KMC_CPR_TOP1__PATT_HF_NR_POSITION1;
	UINT32	KMC_CPR_TOP1__CPR_PATT_LF_NR_SETTING0;
	UINT32	KMC_CPR_TOP1__CPR_PATT_LF_NR_SETTING1;
	UINT32	KMC_CPR_TOP1__CPR_PATT_HF_NR_SETTING0;
	UINT32	KMC_CPR_TOP1__CPR_PATT_HF_NR_SETTING1;
	UINT32	KMC_CPR_TOP1__CPR_DEBUG_CFG0;
	//KMC_DM_TOP
	UINT32	KMC_DM_TOP__KMC_00_START_ADDRESS0;
	UINT32	KMC_DM_TOP__KMC_00_START_ADDRESS1;
	UINT32	KMC_DM_TOP__KMC_00_START_ADDRESS2;
	UINT32	KMC_DM_TOP__KMC_00_START_ADDRESS3;
	UINT32	KMC_DM_TOP__KMC_00_START_ADDRESS4;
	UINT32	KMC_DM_TOP__KMC_00_START_ADDRESS5;
	UINT32	KMC_DM_TOP__KMC_00_END_ADDRESS0;
	UINT32	KMC_DM_TOP__KMC_00_END_ADDRESS1;
	UINT32	KMC_DM_TOP__KMC_00_END_ADDRESS2;
	UINT32	KMC_DM_TOP__KMC_00_END_ADDRESS3;
	UINT32	KMC_DM_TOP__KMC_00_END_ADDRESS4;
	UINT32	KMC_DM_TOP__KMC_00_END_ADDRESS5;
	UINT32	KMC_DM_TOP__KMC_00_LR_OFFSET_ADDR;
	UINT32	KMC_DM_TOP__KMC_00_LINE_OFFSET_ADDR;
	UINT32	KMC_DM_TOP__KMC_00_AGENT;
	UINT32	KMC_DM_TOP__KMC_00_THRESHOLD;
	UINT32	KMC_DM_TOP__KMC_01_START_ADDRESS0;
	UINT32	KMC_DM_TOP__KMC_01_START_ADDRESS1;
	UINT32	KMC_DM_TOP__KMC_01_START_ADDRESS2;
	UINT32	KMC_DM_TOP__KMC_01_START_ADDRESS3;
	UINT32	KMC_DM_TOP__KMC_01_START_ADDRESS4;
	UINT32	KMC_DM_TOP__KMC_01_START_ADDRESS5;
	UINT32	KMC_DM_TOP__KMC_01_END_ADDRESS0;
	UINT32	KMC_DM_TOP__KMC_01_END_ADDRESS1;
	UINT32	KMC_DM_TOP__KMC_01_END_ADDRESS2;
	UINT32	KMC_DM_TOP__KMC_01_END_ADDRESS3;
	UINT32	KMC_DM_TOP__KMC_01_END_ADDRESS4;
	UINT32	KMC_DM_TOP__KMC_01_END_ADDRESS5;
	UINT32	KMC_DM_TOP__KMC_01_LR_OFFSET_ADDR;
	UINT32	KMC_DM_TOP__KMC_01_LINE_OFFSET_ADDR;
	UINT32	KMC_DM_TOP__KMC_01_AGENT;
	UINT32	KMC_DM_TOP__KMC_01_THRESHOLD;
	UINT32	KMC_DM_TOP__KMC_02_AGENT;
	UINT32	KMC_DM_TOP__KMC_02_THRESHOLD;
	UINT32	KMC_DM_TOP__KMC_03_AGENT;
	UINT32	KMC_DM_TOP__KMC_03_THRESHOLD;
	UINT32	KMC_DM_TOP__KMC_04_AGENT;
	UINT32	KMC_DM_TOP__KMC_04_THRESHOLD;
	UINT32	KMC_DM_TOP__KMC_05_AGENT;
	UINT32	KMC_DM_TOP__KMC_05_THRESHOLD;
	UINT32	KMC_DM_TOP__KMC_06_AGENT;
	UINT32	KMC_DM_TOP__KMC_06_THRESHOLD;
	UINT32	KMC_DM_TOP__KMC_07_AGENT;
	UINT32	KMC_DM_TOP__KMC_07_THRESHOLD;
	UINT32	KMC_DM_TOP__KMC_VTOTAL_AND_TIMER;
	UINT32	KMC_DM_TOP__KMC_HOLD_TIME_G0;
	UINT32	KMC_DM_TOP__KMC_HOLD_TIME_G1;
	UINT32	KMC_DM_TOP__KMC_SOURCE_MODE;
	UINT32	KMC_DM_TOP__KMC_DEBUG_HEAD_G0;
	UINT32	KMC_DM_TOP__KMC_DEBUG_HEAD_G1;
	UINT32	KMC_DM_TOP__KMC_DEBUG_HEAD_G2;
	UINT32	KMC_DM_TOP__KMC_DEBUG_HEAD_G3;
	UINT32	KMC_DM_TOP__KMC_00_START_ADDRESS6;
	UINT32	KMC_DM_TOP__KMC_00_END_ADDRESS6;
	UINT32	KMC_DM_TOP__KMC_00_START_ADDRESS7;
	UINT32	KMC_DM_TOP__KMC_00_END_ADDRESS7;
	UINT32	KMC_DM_TOP__KMC_01_START_ADDRESS6;
	UINT32	KMC_DM_TOP__KMC_01_END_ADDRESS6;
	UINT32	KMC_DM_TOP__KMC_01_START_ADDRESS7;
	UINT32	KMC_DM_TOP__KMC_01_END_ADDRESS7;
	//UINT32	KMC_DM_TOP__KMC_DMA_MC_DMA_F0;
	//IPPRE1
	UINT32	IPPRE1__IPPRE1_00;
	UINT32	IPPRE1__IPPRE1_04;
	//MC
	UINT32	MC__MC_0C;
	UINT32	MC__MC_10;
	UINT32	MC__MC_14;
	UINT32	MC__MC_18;
	UINT32	MC__MC_1C;
	UINT32	MC__MC_20;
	UINT32	MC__MC_24;
	UINT32	MC__MC_28;
	UINT32	MC__MC_2C;
	UINT32	MC__MC_30;
	UINT32	MC__MC_34;
	UINT32	MC__MC_38;
	UINT32	MC__MC_3C;
	UINT32	MC__MC_40;
	UINT32	MC__MC_44;
	UINT32	MC__MC_48;
	UINT32	MC__MC_4C;
	UINT32	MC__MC_50;
	UINT32	MC__MC_54;
	UINT32	MC__MC_58;
	UINT32	MC__MC_5C;
	UINT32	MC__MC_60;
	UINT32	MC__MC_64;
	UINT32	MC__MC_68;
	UINT32	MC__MC_6C;
	UINT32	MC__MC_70;
	UINT32	MC__MC_74;
	UINT32	MC__MC_78;
	UINT32	MC__MC_7C;
	UINT32	MC__MC_80;
	UINT32	MC__MC_84;
	UINT32	MC__MC_88;
	UINT32	MC__MC_8C;
	UINT32	MC__MC_90;
	UINT32	MC__MC_94;
	UINT32	MC__MC_98;
	UINT32	MC__MC_9C;
	UINT32	MC__MC_A0;
	UINT32	MC__MC_A4;
	UINT32	MC__MC_A8;
	UINT32	MC__MC_AC;
	UINT32	MC__MC_B0;
	UINT32	MC__MC_B4;
	UINT32	MC__MC_B8;
	UINT32	MC__MC_BC;
	UINT32	MC__MC_C0;
	UINT32	MC__MC_C4;
	UINT32	MC__MC_C8;
	UINT32	MC__MC_CC;
	UINT32	MC__MC_D0;
	UINT32	MC__MC_D4;
	UINT32	MC__MC_D8;
	UINT32	MC__MC_DC;
	UINT32	MC__MC_E0;
	UINT32	MC__MC_E4;
	UINT32	MC__MC_E8;
	//MC2
	UINT32	MC2__MC2_00;
	UINT32	MC2__MC2_04;
	UINT32	MC2__MC2_08;
	UINT32	MC2__MC2_0C;
	UINT32	MC2__MC2_10;
	UINT32	MC2__MC2_14;
	UINT32	MC2__MC2_18;
	UINT32	MC2__MC2_1C;
	UINT32	MC2__MC2_20;
	UINT32	MC2__MC2_24;
	UINT32	MC2__MC2_28;
	UINT32	MC2__MC2_2C;
	UINT32	MC2__MC2_30;
	UINT32	MC2__MC2_50;
	UINT32	MC2__MC2_54;
	UINT32	MC2__MC2_58;
	UINT32	MC2__MC2_5C;
	UINT32	MC2__MC2_60;
	UINT32	MC2__MC2_64;
	UINT32	MC2__MC2_68;
	UINT32	MC2__MC2_6C;
	UINT32	MC2__MC2_70;
	UINT32	MC2__MC2_74;
	UINT32	MC2__MC2_7C;
	UINT32	MC2__MC2_80;
	UINT32	MC2__MC2_84;
	UINT32	MC2__MC2_88;
	UINT32	MC2__MC2_8C;
	UINT32	MC2__MC2_90;
	UINT32	MC2__MC2_94;
	UINT32	MC2__MC2_98;
	UINT32	MC2__MC2_9C;
	UINT32	MC2__MC2_A0;
	UINT32	MC2__MC2_A4;
	UINT32	MC2__MC2_A8;
	//MC_PQ_DECMP
	UINT32	PQDC_08_00;
	UINT32	PQDC_08_04;
	UINT32	PQDC_08_0C;
	UINT32	PQDC_08_10;
	UINT32	PQDC_08_14;
	UINT32	PQDC_08_18;
	UINT32	PQDC_08_1C;
	UINT32	PQDC_08_20;
	UINT32	PQDC_08_24;
	UINT32	PQDC_08_28;
	UINT32	PQDC_08_2C;
	UINT32	PQDC_08_30;
	UINT32	PQDC_08_34;
	UINT32	PQDC_08_38;
	UINT32	PQDC_08_3C;
	UINT32	PQDC_08_40;
	UINT32	PQDC_08_44;
	UINT32	PQDC_08_48;
	UINT32	PQDC_08_4C;
	UINT32	PQDC_08_50;
	UINT32	PQDC_08_54;
	UINT32	PQDC_08_58;
	UINT32	PQDC_08_5C;
	UINT32	PQDC_08_60;
	UINT32	PQDC_08_64;
	UINT32	PQDC_08_68;
	UINT32	PQDC_08_6C;
	UINT32	PQDC_08_70;
	UINT32	PQDC_08_74;
	UINT32	PQDC_08_78;
	UINT32	PQDC_08_7C;
	UINT32	PQDC_08_80;
	UINT32	PQDC_08_84;
	UINT32	PQDC_08_88;
	UINT32	PQDC_08_8C;
	UINT32	PQDC_08_90;
	UINT32	PQDC_08_94;
	UINT32	PQDC_08_98;
	UINT32	PQDC_08_9C;
	UINT32	PQDC_08_A0;
	UINT32	PQDC_08_A4;
	UINT32	PQDC_08_A8;
	UINT32	PQDC_08_AC;
	UINT32	PQDC_08_B0;
	UINT32	PQDC_08_B4;
	UINT32	PQDC_08_B8;
	UINT32	PQDC_08_BC;
	UINT32	PQDC_08_C0;
	UINT32	PQDC_08_C4;
	UINT32	PQDC_08_C8;
	UINT32	PQDC_08_CC;
	UINT32	PQDC_08_D0;
	UINT32	PQDC_08_D4;
	UINT32	PQDC_08_D8;
	UINT32	PQDC_08_DC;
	UINT32	PQDC_08_E0;
	UINT32	PQDC_08_E4;
	UINT32	PQDC_08_E8;
	UINT32	PQDC_08_EC;
	UINT32	PQDC_08_F0;
	UINT32	PQDC_08_F4;
	UINT32	PQDC_08_F8;
	UINT32	PQDC_08_FC;
	//LBMC
	UINT32	LBMC__LBMC_00;
	UINT32	LBMC__LBMC_04;
	UINT32	LBMC__LBMC_08;
	UINT32	LBMC__LBMC_0C;
	UINT32	LBMC__LBMC_10;
	UINT32	LBMC__LBMC_14;
	UINT32	LBMC__LBMC_18;
	UINT32	LBMC__LBMC_1C;
	UINT32	LBMC__LBMC_20;
	UINT32	LBMC__LBMC_24;
	UINT32	LBMC__LBMC_28;
	UINT32	LBMC__LBMC_2C;
	UINT32	LBMC__LBMC_30;
	UINT32	LBMC__LBMC_34;
	UINT32	LBMC__LBMC_38;
	UINT32	LBMC__LBMC_3C;
	UINT32	LBMC__LBMC_40;
	UINT32	LBMC__LBMC_44;
	UINT32	LBMC__LBMC_48;
	UINT32	LBMC__LBMC_4C;
	UINT32	LBMC__LBMC_50;
	UINT32	LBMC__LBMC_54;
	UINT32	LBMC__LBMC_58;
	UINT32	LBMC__LBMC_5C;
	UINT32	LBMC__LBMC_60;
	UINT32	LBMC__LBMC_80;
	UINT32	LBMC__LBMC_84;
	UINT32	LBMC__LBMC_88;
	//BBD
	UINT32	BBD__BBD_00;
	UINT32	BBD__BBD_04;
	UINT32	BBD__BBD_08;
	UINT32	BBD__BBD_0C;
	UINT32	BBD__BBD_10;
	//KMC_METER_TOP
	UINT32	KMC_METER_TOP__KMC_METER_TOP_00;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_04;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_08;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_0C;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_10;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_14;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_18;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_1C;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_20;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_24;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_28;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_2C;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_30;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_34;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_38;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_3C;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_40;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_44;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_48;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_4C;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_50;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_54;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_58;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_5C;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_60;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_64;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_68;
	UINT32	KMC_METER_TOP__KMC_METER_TOP_6C;
	//KMC_DM_METER_TOP
	UINT32	KMC_DM_METER_TOP__KMC_METER_REG0;
	UINT32	KMC_DM_METER_TOP__KMC_METER_NUM;
	UINT32	KMC_DM_METER_TOP__KMC_METER_H_NUM0;
	UINT32	KMC_DM_METER_TOP__KMC_METER_H_NUM1;
	UINT32	KMC_DM_METER_TOP__METER_TH0;
	UINT32	KMC_DM_METER_TOP__METER_TH1;
	UINT32	KMC_DM_METER_TOP__METER_TH3;
	UINT32	KMC_DM_METER_TOP__METER_TIMER0;
	//KME_TOP
	UINT32	KME_TOP__KME_TOP_04;
	UINT32	KME_TOP__KME_TOP_08;
	UINT32	KME_TOP__KME_TOP_10;
	UINT32	KME_TOP__KME_TOP_14;
	UINT32	KME_TOP__KME_TOP_18;
	UINT32	KME_TOP__KME_TOP_1C;
	UINT32	KME_TOP__KME_TOP_20;
	UINT32	KME_TOP__KME_TOP_24;
	UINT32	KME_TOP__KME_TOP_28;
	UINT32	KME_TOP__KME_TOP_2C;
	UINT32	KME_TOP__KME_TOP_30;
	UINT32	KME_TOP__KME_TOP_34;
	UINT32	KME_TOP__KME_TOP_38;
	UINT32	KME_TOP__KME_TOP_3C;
	//KME_VBUF_TOP
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_00;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_04;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_08;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_0C;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_10;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_14;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_18;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_1C;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_20;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_24;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_28;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_2C;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_30;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_34;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_38;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_3C;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_40;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_44;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_48;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_4C;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_50;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_54;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_58;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_5C;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_60;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_64;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_68;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_6C;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_70;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_74;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_78;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_7C;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_80;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_84;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_88;
	UINT32	KME_VBUF_TOP__KME_VBUF_TOP_8C;
	//KME_ME1_TOP2
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_00;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_04;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_08;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_0C;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_10;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_14;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_18;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_1C;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_20;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_24;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_28;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_2C;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_30;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_34;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_38;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_3C;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_40;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_44;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_48;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_4C;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_50;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_54;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_58;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_5C;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_60;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_64;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_80;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_84;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_88;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_8C;
	UINT32	KME_ME1_TOP2__KME_ME1_TOP2_90;
	//KME_ME1_TOP3
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_00;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_04;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_08;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_0C;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_10;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_14;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_18;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_1C;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_20;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_24;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_28;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_2C;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_30;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_34;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_38;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_3C;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_40;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_44;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_48;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_4C;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_50;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_54;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_58;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_5C;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_60;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_64;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_68;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_6C;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_70;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_74;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_78;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_7C;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_80;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_84;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_88;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_8C;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_90;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_94;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_98;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_9C;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_A0;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_A4;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_A8;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_AC;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_B0;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_B4;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_B8;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_BC;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_C0;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_C4;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_C8;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_CC;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_D0;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_D4;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_D8;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_DC;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_E0;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_E4;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_E8;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_EC;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_F0;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_F4;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_F8;
	UINT32	KME_ME1_TOP3__KME_ME1_TOP3_FC;
	//KME_ME1_TOP4
	//KME_ME1_TOP5
	//ME_SHARE_DMA
	UINT32 KME_SHARE_DMA__ME_SHARE_DMA_94;
	UINT32 KME_SHARE_DMA__ME_SHARE_DMA_E0;
	//KME_LBME_TOP
	UINT32	KME_LBME_TOP__KME_LBME_TOP_00;
	UINT32	KME_LBME_TOP__KME_LBME_TOP_04;
	UINT32	KME_LBME_TOP__KME_LBME_TOP_08;
	UINT32	KME_LBME_TOP__KME_LBME_TOP_0C;
	UINT32	KME_LBME_TOP__KME_LBME_TOP_10;
	UINT32	KME_LBME_TOP__KME_LBME_TOP_14;
	UINT32	KME_LBME_TOP__KME_LBME_TOP_18;
	UINT32	KME_LBME_TOP__KME_LBME_TOP_1C;
	UINT32	KME_LBME_TOP__KME_LBME_TOP_20;
	UINT32	KME_LBME_TOP__KME_LBME_TOP_24;
	//KME_ME2_CALC1
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_00;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_04;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_08;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_0C;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_10;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_14;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_18;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_1C;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_20;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_24;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_28;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_2C;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_30;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_34;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_38;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_3C;
	UINT32	KME_ME2_CALC1__KME_ME2_CALC1_40;
	//KME_LOGO2
	UINT32	KME_LOGO2__KME_LOGO2_00;
	UINT32	KME_LOGO2__KME_LOGO2_04;
	UINT32	KME_LOGO2__KME_LOGO2_08;
	UINT32	KME_LOGO2__KME_LOGO2_0C;
	UINT32	KME_LOGO2__KME_LOGO2_10;
	UINT32	KME_LOGO2__KME_LOGO2_14;
	UINT32	KME_LOGO2__KME_LOGO2_18;
	UINT32	KME_LOGO2__KME_LOGO2_1C;
	UINT32	KME_LOGO2__KME_LOGO2_20;
	UINT32	KME_LOGO2__KME_LOGO2_24;
	UINT32	KME_LOGO2__KME_LOGO2_28;
	UINT32	KME_LOGO2__KME_LOGO2_2C;
	UINT32	KME_LOGO2__KME_LOGO2_30;
	UINT32	KME_LOGO2__KME_LOGO2_34;
	//KME_IPME
	UINT32	KME_IPME__KME_IPME_00;
	UINT32	KME_IPME__KME_IPME_04;
	UINT32	KME_IPME__KME_IPME_08;
	UINT32	KME_IPME__KME_IPME_0C;
	UINT32	KME_IPME__KME_IPME_10;
	UINT32	KME_IPME__KME_IPME_14;
	UINT32	KME_IPME__KME_IPME_18;
	UINT32	KME_IPME__KME_IPME_1C;
	UINT32	KME_IPME__KME_IPME_20;
	UINT32	KME_IPME__KME_IPME_24;
	UINT32	KME_IPME__KME_IPME_28;
	UINT32	KME_IPME__KME_IPME_2C;
	UINT32	KME_IPME__KME_IPME_30;
	UINT32	KME_IPME__KME_IPME_34;
	UINT32	KME_IPME__KME_IPME_38;
	UINT32	KME_IPME__KME_IPME_3C;
	UINT32	KME_IPME__KME_IPME_40;
	UINT32	KME_IPME__KME_IPME_44;
	UINT32	KME_IPME__KME_IPME_48;
	UINT32	KME_IPME__KME_IPME_4C;
	UINT32	KME_IPME__KME_IPME_50;
	UINT32	KME_IPME__KME_IPME_54;
	UINT32	KME_IPME__KME_IPME_58;
	UINT32	KME_IPME__KME_IPME_5C;
	UINT32	KME_IPME__KME_IPME_60;
	UINT32	KME_IPME__KME_IPME_64;
	UINT32	KME_IPME__KME_IPME_68;
	UINT32	KME_IPME__KME_IPME_6C;
	UINT32	KME_IPME__KME_IPME_70;
	UINT32	KME_IPME__KME_IPME_74;
	UINT32	KME_IPME__KME_IPME_78;
	UINT32	KME_IPME__KME_IPME_7C;
	UINT32	KME_IPME__KME_IPME_80;
	UINT32	KME_IPME__KME_IPME_84;
	UINT32	KME_IPME__KME_IPME_88;
	UINT32	KME_IPME__KME_IPME_8C;
	UINT32	KME_IPME__KME_IPME_90;
	UINT32	KME_IPME__KME_IPME_94;
	UINT32	KME_IPME__KME_IPME_98;
	UINT32	KME_IPME__KME_IPME_9C;
	UINT32	KME_IPME__KME_IPME_A0;
	//KME_IPME1
	UINT32	KME_IPME1__KME_IPME1_00;
	UINT32	KME_IPME1__KME_IPME1_04;
	UINT32	KME_IPME1__KME_IPME1_08;
	UINT32	KME_IPME1__KME_IPME1_0C;
	//KME_LOGO0
	UINT32	KME_LOGO0__KME_LOGO0_00;
	UINT32	KME_LOGO0__KME_LOGO0_04;
	UINT32	KME_LOGO0__KME_LOGO0_08;
	UINT32	KME_LOGO0__KME_LOGO0_0C;
	UINT32	KME_LOGO0__KME_LOGO0_10;
	UINT32	KME_LOGO0__KME_LOGO0_14;
	UINT32	KME_LOGO0__KME_LOGO0_18;
	UINT32	KME_LOGO0__KME_LOGO0_1C;
	UINT32	KME_LOGO0__KME_LOGO0_20;
	UINT32	KME_LOGO0__KME_LOGO0_24;
	UINT32	KME_LOGO0__KME_LOGO0_28;
	UINT32	KME_LOGO0__KME_LOGO0_2C;
	UINT32	KME_LOGO0__KME_LOGO0_30;
	UINT32	KME_LOGO0__KME_LOGO0_34;
	UINT32	KME_LOGO0__KME_LOGO0_38;
	UINT32	KME_LOGO0__KME_LOGO0_3C;
	UINT32	KME_LOGO0__KME_LOGO0_40;
	UINT32	KME_LOGO0__KME_LOGO0_44;
	UINT32	KME_LOGO0__KME_LOGO0_48;
	UINT32	KME_LOGO0__KME_LOGO0_4C;
	UINT32	KME_LOGO0__KME_LOGO0_50;
	UINT32	KME_LOGO0__KME_LOGO0_54;
	UINT32	KME_LOGO0__KME_LOGO0_58;
	UINT32	KME_LOGO0__KME_LOGO0_5C;
	UINT32	KME_LOGO0__KME_LOGO0_60;
	UINT32	KME_LOGO0__KME_LOGO0_64;
	UINT32	KME_LOGO0__KME_LOGO0_68;
	UINT32	KME_LOGO0__KME_LOGO0_6C;
	UINT32	KME_LOGO0__KME_LOGO0_70;
	UINT32	KME_LOGO0__KME_LOGO0_74;
	UINT32	KME_LOGO0__KME_LOGO0_78;
	UINT32	KME_LOGO0__KME_LOGO0_7C;
	UINT32	KME_LOGO0__KME_LOGO0_80;
	UINT32	KME_LOGO0__KME_LOGO0_84;
	UINT32	KME_LOGO0__KME_LOGO0_88;
	UINT32	KME_LOGO0__KME_LOGO0_8C;
	UINT32	KME_LOGO0__KME_LOGO0_90;
	UINT32	KME_LOGO0__KME_LOGO0_94;
	UINT32	KME_LOGO0__KME_LOGO0_98;
	UINT32	KME_LOGO0__KME_LOGO0_9C;
	UINT32	KME_LOGO0__KME_LOGO0_A0;
	UINT32	KME_LOGO0__KME_LOGO0_A4;
	UINT32	KME_LOGO0__KME_LOGO0_A8;
	UINT32	KME_LOGO0__KME_LOGO0_AC;
	UINT32	KME_LOGO0__KME_LOGO0_B0;
	UINT32	KME_LOGO0__KME_LOGO0_B4;
	UINT32	KME_LOGO0__KME_LOGO0_B8;
	UINT32	KME_LOGO0__KME_LOGO0_BC;
	UINT32	KME_LOGO0__KME_LOGO0_C0;
	UINT32	KME_LOGO0__KME_LOGO0_C4;
	UINT32	KME_LOGO0__KME_LOGO0_C8;
	UINT32	KME_LOGO0__KME_LOGO0_CC;
	UINT32	KME_LOGO0__KME_LOGO0_D0;
	UINT32	KME_LOGO0__KME_LOGO0_D4;
	UINT32	KME_LOGO0__KME_LOGO0_D8;
	UINT32	KME_LOGO0__KME_LOGO0_DC;
	UINT32	KME_LOGO0__KME_LOGO0_E0;
	UINT32	KME_LOGO0__KME_LOGO0_E4;
	UINT32	KME_LOGO0__KME_LOGO0_E8;
	UINT32	KME_LOGO0__KME_LOGO0_EC;
	UINT32	KME_LOGO0__KME_LOGO0_F0;
	UINT32	KME_LOGO0__KME_LOGO0_F4;
	UINT32	KME_LOGO0__KME_LOGO0_F8;
	UINT32	KME_LOGO0__KME_LOGO0_FC;
	//KME_LOGO1
	UINT32	KME_LOGO1__KME_LOGO1_00;
	UINT32	KME_LOGO1__KME_LOGO1_04;
	UINT32	KME_LOGO1__KME_LOGO1_08;
	UINT32	KME_LOGO1__KME_LOGO1_0C;
	UINT32	KME_LOGO1__KME_LOGO1_10;
	UINT32	KME_LOGO1__KME_LOGO1_14;
	UINT32	KME_LOGO1__KME_LOGO1_18;
	UINT32	KME_LOGO1__KME_LOGO1_1C;
	UINT32	KME_LOGO1__KME_LOGO1_20;
	UINT32	KME_LOGO1__KME_LOGO1_2C;
	UINT32	KME_LOGO1__KME_LOGO1_30;
	UINT32	KME_LOGO1__KME_LOGO1_34;
	UINT32	KME_LOGO1__KME_LOGO1_38;
	UINT32	KME_LOGO1__KME_LOGO1_3C;
	UINT32	KME_LOGO1__KME_LOGO1_40;
	UINT32	KME_LOGO1__KME_LOGO1_44;
	UINT32	KME_LOGO1__KME_LOGO1_48;
	UINT32	KME_LOGO1__KME_LOGO1_4C;
	UINT32	KME_LOGO1__KME_LOGO1_50;
	UINT32	KME_LOGO1__KME_LOGO1_54;
	UINT32	KME_LOGO1__KME_LOGO1_58;
	UINT32	KME_LOGO1__KME_LOGO1_5C;
	UINT32	KME_LOGO1__KME_LOGO1_60;
	UINT32	KME_LOGO1__KME_LOGO1_64;
	UINT32	KME_LOGO1__KME_LOGO1_68;
	UINT32	KME_LOGO1__KME_LOGO1_6C;
	UINT32	KME_LOGO1__KME_LOGO1_70;
	UINT32	KME_LOGO1__KME_LOGO1_74;
	UINT32	KME_LOGO1__KME_LOGO1_78;
	UINT32	KME_LOGO1__KME_LOGO1_7C;
	UINT32	KME_LOGO1__KME_LOGO1_80;
	UINT32	KME_LOGO1__KME_LOGO1_84;
	UINT32	KME_LOGO1__KME_LOGO1_88;
	UINT32	KME_LOGO1__KME_LOGO1_8C;
	UINT32	KME_LOGO1__KME_LOGO1_90;
	UINT32	KME_LOGO1__KME_LOGO1_94;
	UINT32	KME_LOGO1__KME_LOGO1_98;
	UINT32	KME_LOGO1__KME_LOGO1_9C;
	UINT32	KME_LOGO1__KME_LOGO1_A0;
	UINT32	KME_LOGO1__KME_LOGO1_A4;
	UINT32	KME_LOGO1__KME_LOGO1_A8;
	UINT32	KME_LOGO1__KME_LOGO1_AC;
	UINT32	KME_LOGO1__KME_LOGO1_B0;
	UINT32	KME_LOGO1__KME_LOGO1_B4;
	UINT32	KME_LOGO1__KME_LOGO1_B8;
	UINT32	KME_LOGO1__KME_LOGO1_BC;
	UINT32	KME_LOGO1__KME_LOGO1_C0;
	UINT32	KME_LOGO1__KME_LOGO1_C4;
	UINT32	KME_LOGO1__KME_LOGO1_C8;
	UINT32	KME_LOGO1__KME_LOGO1_CC;
	UINT32	KME_LOGO1__KME_LOGO1_D0;
	UINT32	KME_LOGO1__KME_LOGO1_D4;
	UINT32	KME_LOGO1__KME_LOGO1_D8;
	UINT32	KME_LOGO1__KME_LOGO1_DC;
	UINT32	KME_LOGO1__KME_LOGO1_E0;
	UINT32	KME_LOGO1__KME_LOGO1_E4;
	UINT32	KME_LOGO1__KME_LOGO1_E8;
	UINT32	KME_LOGO1__KME_LOGO1_EC;
	UINT32	KME_LOGO1__KME_LOGO1_F0;
	UINT32	KME_LOGO1__KME_LOGO1_F4;
	UINT32	KME_LOGO1__KME_LOGO1_F8;
	UINT32	KME_LOGO1__KME_LOGO1_FC;
	//KME_DM_TOP0
	UINT32	KME_DM_TOP0__KME_00_START_ADDRESS0;
	UINT32	KME_DM_TOP0__KME_00_START_ADDRESS1;
	UINT32	KME_DM_TOP0__KME_00_START_ADDRESS2;
	UINT32	KME_DM_TOP0__KME_00_START_ADDRESS3;
	UINT32	KME_DM_TOP0__KME_00_START_ADDRESS4;
	UINT32	KME_DM_TOP0__KME_00_START_ADDRESS5;
	UINT32	KME_DM_TOP0__KME_00_END_ADDRESS0;
	UINT32	KME_DM_TOP0__KME_00_END_ADDRESS1;
	UINT32	KME_DM_TOP0__KME_00_END_ADDRESS2;
	UINT32	KME_DM_TOP0__KME_00_END_ADDRESS3;
	UINT32	KME_DM_TOP0__KME_00_END_ADDRESS4;
	UINT32	KME_DM_TOP0__KME_00_END_ADDRESS5;
	UINT32	KME_DM_TOP0__KME_00_LR_OFFSET_ADDR;
	UINT32	KME_DM_TOP0__KME_00_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP0__KME_00_AGENT;
	UINT32	KME_DM_TOP0__KME_00_THRESHOLD;
	UINT32	KME_DM_TOP0__KME_01_AGENT;
	UINT32	KME_DM_TOP0__KME_01_THRESHOLD;
	UINT32	KME_DM_TOP0__KME_02_AGENT;
	UINT32	KME_DM_TOP0__KME_02_THRESHOLD;
	UINT32	KME_DM_TOP0__KME_03_AGENT;
	UINT32	KME_DM_TOP0__KME_03_THRESHOLD;
	UINT32	KME_DM_TOP0__KME_04_START_ADDRESS0;
	UINT32	KME_DM_TOP0__KME_04_START_ADDRESS1;
	UINT32	KME_DM_TOP0__KME_04_END_ADDRESS0;
	UINT32	KME_DM_TOP0__KME_04_END_ADDRESS1;
	UINT32	KME_DM_TOP0__KME_04_LR_OFFSET_ADDR;
	UINT32	KME_DM_TOP0__KME_04_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP0__KME_04_AGENT;
	UINT32	KME_DM_TOP0__KME_04_THRESHOLD;
	UINT32	KME_DM_TOP0__KME_05_START_ADDRESS0;
	UINT32	KME_DM_TOP0__KME_05_START_ADDRESS1;
	UINT32	KME_DM_TOP0__KME_05_END_ADDRESS0;
	UINT32	KME_DM_TOP0__KME_05_END_ADDRESS1;
	UINT32	KME_DM_TOP0__KME_05_LR_OFFSET_ADDR;
	UINT32	KME_DM_TOP0__KME_05_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP0__KME_05_AGENT;
	UINT32	KME_DM_TOP0__KME_05_THRESHOLD;
	UINT32	KME_DM_TOP0__KME06AGENT;
	UINT32	KME_DM_TOP0__KME_06_THRESHOLD;
	UINT32	KME_DM_TOP0__KME_07_AGENT;
	UINT32	KME_DM_TOP0__KME_07_THRESHOLD;
	UINT32	KME_DM_TOP0__KME_ME_RESOLUTION;
	UINT32	KME_DM_TOP0__KME_MV_RESOLUTION;
	UINT32	KME_DM_TOP0__KME_SOURCE_MODE;
	UINT32	KME_DM_TOP0__KME_ME_HNUM;
	UINT32	KME_DM_TOP0__KME_TIMER_ENABLE;
	UINT32	KME_DM_TOP0__KME_HOLD_TIME0;
	UINT32	KME_DM_TOP0__KME_HOLD_TIME1;
	UINT32	KME_DM_TOP0__KME_HOLD_TIME2;
	UINT32	KME_DM_TOP0__KME_HOLD_TIME3;
	UINT32	KME_DM_TOP0__KME_DM_TOP0_CC;
	UINT32	KME_DM_TOP0__WAIT_TIME1;
	UINT32	KME_DM_TOP0__WAIT_TIME2;
	UINT32	KME_DM_TOP0__MV04_START_ADDRESS2;
	UINT32	KME_DM_TOP0__MV04_END_ADDRESS2;
	//KME_DM_TOP1
	UINT32	KME_DM_TOP1__KME_08_START_ADDRESS0;
	UINT32	KME_DM_TOP1__KME_08_START_ADDRESS1;
	UINT32	KME_DM_TOP1__KME_08_END_ADDRESS0;
	UINT32	KME_DM_TOP1__KME_08_END_ADDRESS1;
	UINT32	KME_DM_TOP1__KME_08_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP1__KME_08_AGENT;
	UINT32	KME_DM_TOP1__KME_08_THRESHOLD;
	UINT32	KME_DM_TOP1__KME_09_AGENT;
	UINT32	KME_DM_TOP1__KME_09_THRESHOLD;
	UINT32	KME_DM_TOP1__KME_10_START_ADDRESS0;
	UINT32	KME_DM_TOP1__KME_10_START_ADDRESS1;
	UINT32	KME_DM_TOP1__KME_10_END_ADDRESS0;
	UINT32	KME_DM_TOP1__KME_10_END_ADDRESS1;
	UINT32	KME_DM_TOP1__KME_10_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP1__KME_10_AGENT;
	UINT32	KME_DM_TOP1__KME_10_THRESHOLD;
	UINT32	KME_DM_TOP1__KME_11_AGENT;
	UINT32	KME_DM_TOP1__KME_11_THRESHOLD;
	UINT32	KME_DM_TOP1__KME_12_START_ADDRESS0;
	UINT32	KME_DM_TOP1__KME_12_START_ADDRESS1;
	UINT32	KME_DM_TOP1__KME_12_END_ADDRESS0;
	UINT32	KME_DM_TOP1__KME_12_END_ADDRESS1;
	UINT32	KME_DM_TOP1__KME_12_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP1__KME_12_AGENT;
	UINT32	KME_DM_TOP1__KME_12_THRESHOLD;
	UINT32	KME_DM_TOP1__KME_13_AGENT;
	UINT32	KME_DM_TOP1__KME_13_THRESHOLD;
	UINT32	KME_DM_TOP1__KME_14_START_ADDRESS0;
	UINT32	KME_DM_TOP1__KME_14_START_ADDRESS1;
	UINT32	KME_DM_TOP1__KME_14_END_ADDRESS0;
	UINT32	KME_DM_TOP1__KME_14_END_ADDRESS1;
	UINT32	KME_DM_TOP1__KME_14_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP1__KME_14_AGENT;
	UINT32	KME_DM_TOP1__KME_14_THRESHOLD;
	UINT32	KME_DM_TOP1__KME_15_AGENT;
	UINT32	KME_DM_TOP1__KME_15_THRESHOLD;
	UINT32	KME_DM_TOP1__KME_IPLOGO_RESOLUTION;
	UINT32	KME_DM_TOP1__KME_MLOGO_RESOLUTION;
	UINT32	KME_DM_TOP1__KME_PLOGO_RESOLUTION;
	UINT32	KME_DM_TOP1__KME_HLOGO_RESOLUTION;
	UINT32	KME_DM_TOP1__KME_LOGO_HNUM;
	UINT32	KME_DM_TOP1__KME_CLR;
	UINT32	KME_DM_TOP1__TH0;
	UINT32	KME_DM_TOP1__TH1;
	UINT32	KME_DM_TOP1__TH2;
	UINT32	KME_DM_TOP1__TH3;
	UINT32	KME_DM_TOP1__TH4;
	UINT32	KME_DM_TOP1__METER_TIMER1;
	//KME_DM_TOP2
	UINT32	KME_DM_TOP2__MV01_START_ADDRESS0;
	UINT32	KME_DM_TOP2__MV01_END_ADDRESS0;
	UINT32	KME_DM_TOP2__MV_01_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP2__MV01_LR_OFFSET_ADDR;
	UINT32	KME_DM_TOP2__MV01_AGENT;
	UINT32	KME_DM_TOP2__MV02_START_ADDRESS11;
	UINT32	KME_DM_TOP2__MV02_END_ADDRESS0;
	UINT32	KME_DM_TOP2__MV_02_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP2__MV02_LR_OFFSET_ADDR;
	UINT32	KME_DM_TOP2__MV02_AGENT;
	UINT32	KME_DM_TOP2__MV03_AGENT;
	UINT32	KME_DM_TOP2__MV04_START_ADDRESS0;
	UINT32	KME_DM_TOP2__MV04_START_ADDRESS1;
	UINT32	KME_DM_TOP2__MV04_END_ADDRESS0;
	UINT32	KME_DM_TOP2__MV04_END_ADDRESS1;
	UINT32	KME_DM_TOP2__MV_04_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP2__MV04_LR_OFFSET_ADDR;
	UINT32	KME_DM_TOP2__MV04_AGENT;
	UINT32	KME_DM_TOP2__MV05_START_ADDRESS0;
	UINT32	KME_DM_TOP2__MV05_START_ADDRESS1;
	UINT32	KME_DM_TOP2__MV05_END_ADDRESS0;
	UINT32	KME_DM_TOP2__MV05_END_ADDRESS1;
	UINT32	KME_DM_TOP2__MV_05_LINE_OFFSET_ADDR;
	UINT32	KME_DM_TOP2__MV05_LR_OFFSET_ADDR;
	UINT32	KME_DM_TOP2__MV05_AGENT;
	UINT32	KME_DM_TOP2__MV06_AGENT;
	UINT32	KME_DM_TOP2__MV07_AGENT;
	UINT32	KME_DM_TOP2__MV08_AGENT;
	UINT32	KME_DM_TOP2__MV09_AGENT;
	UINT32	KME_DM_TOP2__MV10_AGENT;
	UINT32	KME_DM_TOP2__MV11_AGENT;
	UINT32	KME_DM_TOP2__KME_00_START_ADDRESS6;
	UINT32	KME_DM_TOP2__KME_00_START_ADDRESS7;
	UINT32	KME_DM_TOP2__KME_00_END_ADDRESS6;
	UINT32	KME_DM_TOP2__KME_00_END_ADDRESS7;
	UINT32	KME_DM_TOP2__MV_SOURCE_MODE;
	UINT32	KME_DM_TOP2__MV01_RESOLUTION;
	UINT32	KME_DM_TOP2__MV02_RESOLUTION;
	UINT32	KME_DM_TOP2__MV04_RESOLUTION;
	UINT32	KME_DM_TOP2__MV05_RESOLUTION;
	UINT32	KME_DM_TOP2__MV_TIME_ENABLE;
	UINT32	KME_DM_TOP2__MV_HOLD_TIME0;
	UINT32	KME_DM_TOP2__MV_HOLD_TIME1;
	UINT32	KME_DM_TOP2__MV_HOLD_TIME2;
	UINT32	KME_DM_TOP2__MV_WAIT_TIME0;
	UINT32	KME_DM_TOP2__MV_WAIT_TIME1;
	//KME_DEHALO3
	UINT32	KME_DEHALO3__KME_DEHALO3_0C;
	//KME_ME1_TOP0
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_00;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_04;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_08;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_0C;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_10;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_14;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_18;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_1C;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_20;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_24;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_28;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_2C;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_30;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_34;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_38;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_40;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_44;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_48;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_4C;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_50;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_54;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_58;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_5C;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_60;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_64;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_68;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_6C;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_70;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_74;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_78;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_7C;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_80;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_84;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_88;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_8C;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_90;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_94;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_98;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_9C;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_A0;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_A4;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_B0;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_B4;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_B8;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_BC;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_C0;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_C4;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_EC;
	UINT32	KME_ME1_TOP0__KME_ME1_TOP0_F0;
	//KME_ME1_TOP1
	UINT32	KME_ME1_TOP1__ME1_COMMON1_00;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_01;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_02;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_03;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_04;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_05;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_06;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_07;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_08;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_09;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_10;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_11;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_12;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_13;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_14;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_15;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_16;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_17;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_18;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_19;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_20;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_21;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_22;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_23;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_24;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_25;
	UINT32	KME_ME1_TOP1__KME_ME1_TOP1_68;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_27;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_28;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_29;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_30;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_31;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_32;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_33;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_34;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_35;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_36;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_37;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_38;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_39;
	UINT32	KME_ME1_TOP1__ME1_COMMON1_40;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_00;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_01;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_02;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_03;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_04;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_05;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_06;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_07;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_08;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_09;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_10;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_11;
	UINT32	KME_ME1_TOP1__ME1_SCENE1_12;
	UINT32	KME_ME1_TOP1__KME_ME1_TOP1_F4;
	//KME_LBME2_TOP
	UINT32	KME_LBME2_TOP__KME_LBME2_TOP_00;
	UINT32	KME_LBME2_TOP__KME_LBME2_TOP_04;
	UINT32	KME_LBME2_TOP__KME_LBME2_TOP_08;
	UINT32	KME_LBME2_TOP__KME_LBME2_TOP_0C;
	UINT32	KME_LBME2_TOP__KME_LBME2_TOP_10;
	UINT32	KME_LBME2_TOP__KME_LBME2_TOP_14;
	UINT32	KME_LBME2_TOP__KME_LBME2_TOP_18;
	//KME_ME2_VBUF_TOP
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_00;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_04;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_08;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_0C;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_10;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_14;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_18;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_1C;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_20;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_24;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_28;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_2C;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_30;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_34;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_38;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_3C;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_40;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_44;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_48;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_4C;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_50;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_54;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_58;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_5C;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_60;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_64;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_68;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_6C;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_70;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_74;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_78;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_7C;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_80;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_84;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_88;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_8C;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_90;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_94;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_98;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_9C;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_A0;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_A4;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_A8;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_AC;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_B0;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_B4;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_B8;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_BC;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_C0;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_C4;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_C8;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_CC;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_D0;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_D4;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_D8;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_DC;
	UINT32	KME_ME2_VBUF_TOP__KME_ME2_VBUF_TOP_E0;
	//KME_ME2_CALC0
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_00;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_04;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_08;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_0C;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_10;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_14;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_18;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_1C;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_20;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_24;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_28;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_2C;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_30;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_34;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_38;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_3C;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_40;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_44;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_48;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_4C;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_50;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_54;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_60;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_64;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_68;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_6C;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_70;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_74;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_78;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_7C;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_80;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_84;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_88;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_8C;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_90;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_94;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_98;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_9C;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_A0;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_A4;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_A8;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_AC;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_B0;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_B4;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_B8;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_BC;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_C0;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_C4;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_C8;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_CC;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_D0;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_D4;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_D8;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_DC;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_E0;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_E4;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_E8;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_EC;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_F0;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_F4;
	UINT32	KME_ME2_CALC0__KME_ME2_CALC0_F8;
	//KME_ME1_TOP6
	UINT32	KME_ME1_TOP6__KME_ME1_TOP6_00;
	UINT32	KME_ME1_TOP6__KME_ME1_TOP6_04;
	UINT32	KME_ME1_TOP6__KME_ME1_TOP6_08;
	UINT32	KME_ME1_TOP6__KME_ME1_TOP6_0C;
	UINT32	KME_ME1_TOP6__KME_ME1_TOP6_10;
	UINT32	KME_ME1_TOP6__KME_ME1_TOP6_14;
	UINT32	KME_ME1_TOP6__KME_ME1_TOP6_18;
	UINT32	KME_ME1_TOP6__KME_ME1_TOP6_1C;
	UINT32	KME_ME1_TOP6__KME_ME1_TOP6_20;
	//KME_ME1_TOP7
	//KME_ME1_TOP8
	//KME_ME1_TOP9
	//KME_DEHALO
	UINT32	KME_DEHALO__KME_DEHALO_10;
	UINT32	KME_DEHALO__KME_DEHALO_14;
	UINT32	KME_DEHALO__KME_DEHALO_18;
	UINT32	KME_DEHALO__KME_DEHALO_1C;
	UINT32	KME_DEHALO__KME_DEHALO_20;
	UINT32	KME_DEHALO__KME_DEHALO_24;
	UINT32	KME_DEHALO__KME_DEHALO_28;
	UINT32	KME_DEHALO__KME_DEHALO_2C;
	UINT32	KME_DEHALO__KME_DEHALO_30;
	UINT32	KME_DEHALO__KME_DEHALO_34;
	UINT32	KME_DEHALO__KME_DEHALO_38;
	UINT32	KME_DEHALO__KME_DEHALO_3C;
	UINT32	KME_DEHALO__KME_DEHALO_40;
	UINT32	KME_DEHALO__KME_DEHALO_44;
	UINT32	KME_DEHALO__KME_DEHALO_48;
	UINT32	KME_DEHALO__KME_DEHALO_4C;
	UINT32	KME_DEHALO__KME_DEHALO_50;
	UINT32	KME_DEHALO__KME_DEHALO_54;
	UINT32	KME_DEHALO__KME_DEHALO_58;
	UINT32	KME_DEHALO__KME_DEHALO_5C;
	UINT32	KME_DEHALO__KME_DEHALO_60;
	UINT32	KME_DEHALO__KME_DEHALO_64;
	UINT32	KME_DEHALO__KME_DEHALO_68;
	UINT32	KME_DEHALO__KME_DEHALO_6C;
	UINT32	KME_DEHALO__KME_DEHALO_70;
	UINT32	KME_DEHALO__KME_DEHALO_74;
	UINT32	KME_DEHALO__KME_DEHALO_78;
	UINT32	KME_DEHALO__KME_DEHALO_7C;
	UINT32	KME_DEHALO__KME_DEHALO_80;
	UINT32	KME_DEHALO__KME_DEHALO_84;
	UINT32	KME_DEHALO__KME_DEHALO_88;
	UINT32	KME_DEHALO__KME_DEHALO_8C;
	UINT32	KME_DEHALO__KME_DEHALO_90;
	UINT32	KME_DEHALO__KME_DEHALO_94;
	UINT32	KME_DEHALO__KME_DEHALO_A4;
	UINT32	KME_DEHALO__KME_DEHALO_A8;
	UINT32	KME_DEHALO__KME_DEHALO_AC;
	UINT32	KME_DEHALO__KME_DEHALO_B0;
	UINT32	KME_DEHALO__KME_DEHALO_B4;
	UINT32	KME_DEHALO__KME_DEHALO_B8;
	UINT32	KME_DEHALO__KME_DEHALO_BC;
	UINT32	KME_DEHALO__KME_DEHALO_C0;
	UINT32	KME_DEHALO__KME_DEHALO_C4;
	UINT32	KME_DEHALO__KME_DEHALO_C8;
	UINT32	KME_DEHALO__KME_DEHALO_CC;
	UINT32	KME_DEHALO__KME_DEHALO_D0;
	UINT32	KME_DEHALO__KME_DEHALO_D4;
	UINT32	KME_DEHALO__KME_DEHALO_D8;
	UINT32	KME_DEHALO__KME_DEHALO_DC;
	UINT32	KME_DEHALO__KME_DEHALO_E0;
	UINT32	KME_DEHALO__KME_DEHALO_E4;
	UINT32	KME_DEHALO__KME_DEHALO_E8;
	UINT32	KME_DEHALO__KME_DEHALO_EC;
	UINT32	KME_DEHALO__KME_DEHALO_F0;
	UINT32	KME_DEHALO__KME_DEHALO_F4;
	UINT32	KME_DEHALO__KME_DEHALO_F8;
	UINT32	KME_DEHALO__KME_DEHALO_FC;
	//KME_DEHALO2
	UINT32	KME_DEHALO2__KME_DEHALO2_08;
	UINT32	KME_DEHALO2__KME_DEHALO2_10;
	UINT32	KME_DEHALO2__KME_DEHALO2_14;
	UINT32	KME_DEHALO2__KME_DEHALO2_18;
	UINT32	KME_DEHALO2__KME_DEHALO2_1C;
	UINT32	KME_DEHALO2__KME_DEHALO2_20;
	UINT32	KME_DEHALO2__KME_DEHALO2_24;
	UINT32	KME_DEHALO2__KME_DEHALO2_28;
	UINT32	KME_DEHALO2__KME_DEHALO2_2C;
	UINT32	KME_DEHALO2__KME_DEHALO2_30;
	UINT32	KME_DEHALO2__KME_DEHALO2_34;
	UINT32	KME_DEHALO2__KME_DEHALO2_38;
	UINT32	KME_DEHALO2__KME_DEHALO2_3C;
	UINT32	KME_DEHALO2__KME_DEHALO2_40;
	UINT32	KME_DEHALO2__KME_DEHALO2_44;
	UINT32	KME_DEHALO2__KME_DEHALO2_48;
	UINT32	KME_DEHALO2__KME_DEHALO2_4C;
	UINT32	KME_DEHALO2__KME_DEHALO2_50;
	UINT32	KME_DEHALO2__KME_DEHALO2_54;
	UINT32	KME_DEHALO2__KME_DEHALO2_58;
	UINT32	KME_DEHALO2__KME_DEHALO2_74;
	UINT32	KME_DEHALO2__KME_DEHALO2_78;
	UINT32	KME_DEHALO2__KME_DEHALO2_7C;
	UINT32	KME_DEHALO2__KME_DEHALO2_80;
	UINT32	KME_DEHALO2__KME_DEHALO2_84;
	UINT32	KME_DEHALO2__KME_DEHALO2_88;
	UINT32	KME_DEHALO2__KME_DEHALO2_8C;
	UINT32	KME_DEHALO2__KME_DEHALO2_90;
	UINT32	KME_DEHALO2__KME_DEHALO2_94;
	UINT32	KME_DEHALO2__KME_DEHALO2_98;
	UINT32	KME_DEHALO2__KME_DEHALO2_9C;
	UINT32	KME_DEHALO2__KME_DEHALO2_A0;
	UINT32	KME_DEHALO2__KME_DEHALO2_A4;
	UINT32	KME_DEHALO2__KME_DEHALO2_A8;
	UINT32	KME_DEHALO2__KME_DEHALO2_AC;
	UINT32	KME_DEHALO2__KME_DEHALO2_B0;
	UINT32	KME_DEHALO2__KME_DEHALO2_B4;
	UINT32	KME_DEHALO2__KME_DEHALO2_B8;
	UINT32	KME_DEHALO2__KME_DEHALO2_BC;
	UINT32	KME_DEHALO2__KME_DEHALO2_C0;
	UINT32	KME_DEHALO2__KME_DEHALO2_C4;
	UINT32	KME_DEHALO2__KME_DEHALO2_C8;
	UINT32	KME_DEHALO2__KME_DEHALO2_CC;
	UINT32	KME_DEHALO2__KME_DEHALO2_D0;
	UINT32	KME_DEHALO2__KME_DEHALO2_D4;
	UINT32	KME_DEHALO2__KME_DEHALO2_D8;
	UINT32	KME_DEHALO2__KME_DEHALO2_DC;
	UINT32	KME_DEHALO2__KME_DEHALO2_E0;
	UINT32	KME_DEHALO2__KME_DEHALO2_E4;
	UINT32	KME_DEHALO2__KME_DEHALO2_E8;
	//KPOST_TOP
	UINT32	KPOST_TOP__KPOST_TOP_00;
	UINT32	KPOST_TOP__KPOST_TOP_04;
	UINT32	KPOST_TOP__KPOST_TOP_08;
	UINT32	KPOST_TOP__KPOST_TOP_0C;
	UINT32	KPOST_TOP__KPOST_TOP_10;
	UINT32	KPOST_TOP__KPOST_TOP_14;
	UINT32	KPOST_TOP__KPOST_TOP_18;
	UINT32	KPOST_TOP__KPOST_TOP_1C;
	UINT32	KPOST_TOP__KPOST_TOP_20;
	UINT32	KPOST_TOP__KPOST_TOP_24;
	UINT32	KPOST_TOP__KPOST_TOP_28;
	UINT32	KPOST_TOP__KPOST_TOP_30;
	UINT32	KPOST_TOP__KPOST_TOP_34;
	UINT32	KPOST_TOP__KPOST_TOP_38;
	UINT32	KPOST_TOP__KPOST_TOP_3C;
	UINT32	KPOST_TOP__KPOST_TOP_40;
	UINT32	KPOST_TOP__KPOST_TOP_44;
	UINT32	KPOST_TOP__KPOST_TOP_48;
	UINT32	KPOST_TOP__KPOST_TOP_4C;
	UINT32	KPOST_TOP__KPOST_TOP_50;
	UINT32	KPOST_TOP__KPOST_TOP_60;
	UINT32	KPOST_TOP__KPOST_TOP_64;
	UINT32	KPOST_TOP__KPOST_TOP_68;
	UINT32	KPOST_TOP__KPOST_TOP_6C;
	UINT32	KPOST_TOP__KPOST_TOP_80;
	UINT32	KPOST_TOP__KPOST_TOP_84;
	UINT32	KPOST_TOP__KPOST_TOP_88;
	UINT32	KPOST_TOP__KPOST_TOP_8C;
	UINT32	KPOST_TOP__KPOST_TOP_90;
	UINT32	KPOST_TOP__KPOST_TOP_94;
	UINT32	KPOST_TOP__KPOST_TOP_A0;
	UINT32	KPOST_TOP__KPOST_TOP_A4;
	UINT32	KPOST_TOP__KPOST_TOP_A8;
	UINT32	KPOST_TOP__KPOST_TOP_AC;
	UINT32	KPOST_TOP__KPOST_TOP_B0;
	UINT32	KPOST_TOP__KPOST_TOP_B4;
	UINT32	KPOST_TOP__KPOST_TOP_B8;
	UINT32	KPOST_TOP__KPOST_TOP_BC;
	//CRTC1
	UINT32	CRTC1__CRTC1_00;
	UINT32	CRTC1__CRTC1_04;
	UINT32	CRTC1__CRTC1_08;
	UINT32	CRTC1__CRTC1_0C;
	UINT32	CRTC1__CRTC1_10;
	UINT32	CRTC1__CRTC1_14;
	UINT32	CRTC1__CRTC1_18;
	UINT32	CRTC1__CRTC1_1C;
	UINT32	CRTC1__CRTC1_20;
	UINT32	CRTC1__CRTC1_24;
	UINT32	CRTC1__CRTC1_28;
	UINT32	CRTC1__CRTC1_2C;
	UINT32	CRTC1__CRTC1_30;
	UINT32	CRTC1__CRTC1_34;
	UINT32	CRTC1__CRTC1_38;
	UINT32	CRTC1__CRTC1_3C;
	UINT32	CRTC1__CRTC1_40;
	UINT32	CRTC1__CRTC1_44;
	UINT32	CRTC1__CRTC1_48;
	UINT32	CRTC1__CRTC1_60;
	UINT32	CRTC1__CRTC1_64;
	UINT32	CRTC1__CRTC1_68;
	UINT32	CRTC1__CRTC1_6C;
	UINT32	CRTC1__CRTC1_70;
	UINT32	CRTC1__CRTC1_74;
	UINT32	CRTC1__CRTC1_78;
	UINT32	CRTC1__CRTC1_7C;
	UINT32	CRTC1__CRTC1_80;
	UINT32	CRTC1__CRTC1_84;
	UINT32	CRTC1__CRTC1_88;
	UINT32	CRTC1__CRTC1_8C;
	UINT32	CRTC1__CRTC1_90;
	UINT32	CRTC1__CRTC1_94;
	//kphase
	UINT32	KPHASE__KPHASE_00;
	UINT32	KPHASE__KPHASE_04;
	UINT32	KPHASE__KPHASE_08;
	UINT32	KPHASE__KPHASE_0C;
	UINT32	KPHASE__KPHASE_10;
	UINT32	KPHASE__KPHASE_14;
	UINT32	KPHASE__KPHASE_18;
	UINT32	KPHASE__KPHASE_1C;
	UINT32	KPHASE__KPHASE_20;
	UINT32	KPHASE__KPHASE_24;
	UINT32	KPHASE__KPHASE_28;
	UINT32	KPHASE__KPHASE_2C;
	UINT32	KPHASE__KPHASE_30;
	UINT32	KPHASE__KPHASE_34;
	UINT32	KPHASE__KPHASE_38;
	UINT32	KPHASE__KPHASE_3C;
	UINT32	KPHASE__KPHASE_40;
	UINT32	KPHASE__KPHASE_44;
	UINT32	KPHASE__KPHASE_48;
	UINT32	KPHASE__KPHASE_4C;
	UINT32	KPHASE__KPHASE_50;
	UINT32	KPHASE__KPHASE_54;
	UINT32	KPHASE__KPHASE_58;
	UINT32	KPHASE__KPHASE_5C;
	UINT32	KPHASE__KPHASE_60;
	UINT32	KPHASE__KPHASE_64;
	UINT32	KPHASE__KPHASE_68;
	UINT32	KPHASE__KPHASE_6C;
	UINT32	KPHASE__KPHASE_70;
	UINT32	KPHASE__KPHASE_74;
	UINT32	KPHASE__KPHASE_78;
	//Hardware
	UINT32	HARDWARE__HARDWARE_00;
	UINT32	HARDWARE__HARDWARE_01;
	UINT32	HARDWARE__HARDWARE_02;
	UINT32	HARDWARE__HARDWARE_03;
	UINT32	HARDWARE__HARDWARE_04;
	UINT32	HARDWARE__HARDWARE_05;
	UINT32	HARDWARE__HARDWARE_06;
	UINT32	HARDWARE__HARDWARE_07;
	UINT32	HARDWARE__HARDWARE_08;
	UINT32	HARDWARE__HARDWARE_09;
	UINT32	HARDWARE__HARDWARE_10;
	UINT32	HARDWARE__HARDWARE_11;
	UINT32	HARDWARE__HARDWARE_12;
	UINT32	HARDWARE__HARDWARE_13;
	UINT32	HARDWARE__HARDWARE_14;
	UINT32	HARDWARE__HARDWARE_15;
	UINT32	HARDWARE__HARDWARE_16;
	UINT32	HARDWARE__HARDWARE_17;
	UINT32	HARDWARE__HARDWARE_18;
	UINT32	HARDWARE__HARDWARE_19;
	UINT32	HARDWARE__HARDWARE_20;
	UINT32	HARDWARE__HARDWARE_21;
	UINT32	HARDWARE__HARDWARE_22;
	UINT32	HARDWARE__HARDWARE_23;
	UINT32	HARDWARE__HARDWARE_24;
	UINT32	HARDWARE__HARDWARE_25;
	UINT32	HARDWARE__HARDWARE_26;
	UINT32	HARDWARE__HARDWARE_27;
	UINT32	HARDWARE__HARDWARE_28;
	UINT32	HARDWARE__HARDWARE_29;
	UINT32	HARDWARE__HARDWARE_30;
	UINT32	HARDWARE__HARDWARE_31;
	UINT32	HARDWARE__HARDWARE_32;
	UINT32	HARDWARE__HARDWARE_33;
	UINT32	HARDWARE__HARDWARE_34;
	UINT32	HARDWARE__HARDWARE_35;
	UINT32	HARDWARE__HARDWARE_36;
	UINT32	HARDWARE__HARDWARE_37;
	UINT32	HARDWARE__HARDWARE_38;
	UINT32	HARDWARE__HARDWARE_39;
	UINT32	HARDWARE__HARDWARE_40;
	UINT32	HARDWARE__HARDWARE_41;
	UINT32	HARDWARE__HARDWARE_42;
	UINT32	HARDWARE__HARDWARE_43;
	UINT32	HARDWARE__HARDWARE_44;
	UINT32	HARDWARE__HARDWARE_45;
	UINT32	HARDWARE__HARDWARE_46;
	UINT32	HARDWARE__HARDWARE_47;
	UINT32	HARDWARE__HARDWARE_48;
	UINT32	HARDWARE__HARDWARE_49;
	UINT32	HARDWARE__HARDWARE_50;
	UINT32	HARDWARE__HARDWARE_51;
	UINT32	HARDWARE__HARDWARE_52;
	UINT32	HARDWARE__HARDWARE_53;
	UINT32	HARDWARE__HARDWARE_54;
	UINT32	HARDWARE__HARDWARE_55;
	UINT32	HARDWARE__HARDWARE_56;
	UINT32	HARDWARE__HARDWARE_57;
	UINT32	HARDWARE__HARDWARE_58;
	UINT32	HARDWARE__HARDWARE_59;
	UINT32	HARDWARE__HARDWARE_60;
	UINT32	HARDWARE__HARDWARE_61;
	UINT32	HARDWARE__HARDWARE_62;
	UINT32	HARDWARE__HARDWARE_63;
	//Software
	UINT32	SOFTWARE__SOFTWARE_00;
	UINT32	SOFTWARE__SOFTWARE_01;
	UINT32	SOFTWARE__SOFTWARE_02;
	UINT32	SOFTWARE__SOFTWARE_03;
	UINT32	SOFTWARE__SOFTWARE_04;
	UINT32	SOFTWARE__SOFTWARE_05;
	UINT32	SOFTWARE__SOFTWARE_06;
	UINT32	SOFTWARE__SOFTWARE_07;
	UINT32	SOFTWARE__SOFTWARE_08;
	UINT32	SOFTWARE__SOFTWARE_09;
	UINT32	SOFTWARE__SOFTWARE_10;
	UINT32	SOFTWARE__SOFTWARE_11;
	UINT32	SOFTWARE__SOFTWARE_12;
	UINT32	SOFTWARE__SOFTWARE_13;
	UINT32	SOFTWARE__SOFTWARE_14;
	UINT32	SOFTWARE__SOFTWARE_15;
	UINT32	SOFTWARE__SOFTWARE_16;
	UINT32	SOFTWARE__SOFTWARE_17;
	UINT32	SOFTWARE__SOFTWARE_18;
	UINT32	SOFTWARE__SOFTWARE_19;
	UINT32	SOFTWARE__SOFTWARE_20;
	UINT32	SOFTWARE__SOFTWARE_21;
	UINT32	SOFTWARE__SOFTWARE_22;
	UINT32	SOFTWARE__SOFTWARE_23;
	UINT32	SOFTWARE__SOFTWARE_24;
	UINT32	SOFTWARE__SOFTWARE_25;
	UINT32	SOFTWARE__SOFTWARE_26;
	UINT32	SOFTWARE__SOFTWARE_27;
	UINT32	SOFTWARE__SOFTWARE_28;
	UINT32	SOFTWARE__SOFTWARE_29;
	UINT32	SOFTWARE__SOFTWARE_30;
	UINT32	SOFTWARE__SOFTWARE_31;
	UINT32	SOFTWARE__SOFTWARE_32;
	UINT32	SOFTWARE__SOFTWARE_33;
	UINT32	SOFTWARE__SOFTWARE_34;
	UINT32	SOFTWARE__SOFTWARE_35;
	UINT32	SOFTWARE__SOFTWARE_36;
	UINT32	SOFTWARE__SOFTWARE_37;
	UINT32	SOFTWARE__SOFTWARE_38;
	UINT32	SOFTWARE__SOFTWARE_39;
	UINT32	SOFTWARE__SOFTWARE_40;
	UINT32	SOFTWARE__SOFTWARE_41;
	UINT32	SOFTWARE__SOFTWARE_42;
	UINT32	SOFTWARE__SOFTWARE_43;
	UINT32	SOFTWARE__SOFTWARE_44;
	UINT32	SOFTWARE__SOFTWARE_45;
	UINT32	SOFTWARE__SOFTWARE_46;
	UINT32	SOFTWARE__SOFTWARE_47;
	UINT32	SOFTWARE__SOFTWARE_48;
	UINT32	SOFTWARE__SOFTWARE_49;
	UINT32	SOFTWARE__SOFTWARE_50;
	UINT32	SOFTWARE__SOFTWARE_51;
	UINT32	SOFTWARE__SOFTWARE_52;
	UINT32	SOFTWARE__SOFTWARE_53;
	UINT32	SOFTWARE__SOFTWARE_54;
	UINT32	SOFTWARE__SOFTWARE_55;
	UINT32	SOFTWARE__SOFTWARE_56;
	UINT32	SOFTWARE__SOFTWARE_57;
	UINT32	SOFTWARE__SOFTWARE_58;
	UINT32	SOFTWARE__SOFTWARE_59;
	UINT32	SOFTWARE__SOFTWARE_60;
	UINT32	SOFTWARE__SOFTWARE_61;
	UINT32	SOFTWARE__SOFTWARE_62;
	UINT32	SOFTWARE__SOFTWARE_63;
	//Software1
	UINT32	SOFTWARE1__SOFTWARE1_00;
	UINT32	SOFTWARE1__SOFTWARE1_01;
	UINT32	SOFTWARE1__SOFTWARE1_02;
	UINT32	SOFTWARE1__SOFTWARE1_03;
	UINT32	SOFTWARE1__SOFTWARE1_04;
	UINT32	SOFTWARE1__SOFTWARE1_05;
	UINT32	SOFTWARE1__SOFTWARE1_06;
	UINT32	SOFTWARE1__SOFTWARE1_07;
	UINT32	SOFTWARE1__SOFTWARE1_08;
	UINT32	SOFTWARE1__SOFTWARE1_09;
	UINT32	SOFTWARE1__SOFTWARE1_10;
	UINT32	SOFTWARE1__SOFTWARE1_11;
	UINT32	SOFTWARE1__SOFTWARE1_12;
	UINT32	SOFTWARE1__SOFTWARE1_13;
	UINT32	SOFTWARE1__SOFTWARE1_14;
	UINT32	SOFTWARE1__SOFTWARE1_15;
	UINT32	SOFTWARE1__SOFTWARE1_16;
	UINT32	SOFTWARE1__SOFTWARE1_17;
	UINT32	SOFTWARE1__SOFTWARE1_18;
	UINT32	SOFTWARE1__SOFTWARE1_19;
	UINT32	SOFTWARE1__SOFTWARE1_20;
	UINT32	SOFTWARE1__SOFTWARE1_21;
	UINT32	SOFTWARE1__SOFTWARE1_22;
	UINT32	SOFTWARE1__SOFTWARE1_23;
	UINT32	SOFTWARE1__SOFTWARE1_24;
	UINT32	SOFTWARE1__SOFTWARE1_25;
	UINT32	SOFTWARE1__SOFTWARE1_26;
	UINT32	SOFTWARE1__SOFTWARE1_27;
	UINT32	SOFTWARE1__SOFTWARE1_28;
	UINT32	SOFTWARE1__SOFTWARE1_29;
	UINT32	SOFTWARE1__SOFTWARE1_30;
	UINT32	SOFTWARE1__SOFTWARE1_31;
	UINT32	SOFTWARE1__SOFTWARE1_32;
	UINT32	SOFTWARE1__SOFTWARE1_33;
	UINT32	SOFTWARE1__SOFTWARE1_34;
	UINT32	SOFTWARE1__SOFTWARE1_35;
	UINT32	SOFTWARE1__SOFTWARE1_36;
	UINT32	SOFTWARE1__SOFTWARE1_37;
	UINT32	SOFTWARE1__SOFTWARE1_38;
	UINT32	SOFTWARE1__SOFTWARE1_39;
	UINT32	SOFTWARE1__SOFTWARE1_40;
	UINT32	SOFTWARE1__SOFTWARE1_41;
	UINT32	SOFTWARE1__SOFTWARE1_42;
	UINT32	SOFTWARE1__SOFTWARE1_43;
	UINT32	SOFTWARE1__SOFTWARE1_44;
	UINT32	SOFTWARE1__SOFTWARE1_45;
	UINT32	SOFTWARE1__SOFTWARE1_46;
	UINT32	SOFTWARE1__SOFTWARE1_47;
	UINT32	SOFTWARE1__SOFTWARE1_48;
	UINT32	SOFTWARE1__SOFTWARE1_49;
	UINT32	SOFTWARE1__SOFTWARE1_50;
	UINT32	SOFTWARE1__SOFTWARE1_51;
	UINT32	SOFTWARE1__SOFTWARE1_52;
	UINT32	SOFTWARE1__SOFTWARE1_53;
	UINT32	SOFTWARE1__SOFTWARE1_54;
	UINT32	SOFTWARE1__SOFTWARE1_55;
	UINT32	SOFTWARE1__SOFTWARE1_56;
	UINT32	SOFTWARE1__SOFTWARE1_57;
	UINT32	SOFTWARE1__SOFTWARE1_58;
	UINT32	SOFTWARE1__SOFTWARE1_59;
	UINT32	SOFTWARE1__SOFTWARE1_60;
	UINT32	SOFTWARE1__SOFTWARE1_61;
	UINT32	SOFTWARE1__SOFTWARE1_62;
	UINT32	SOFTWARE1__SOFTWARE1_63;


	UINT32	MESHARE__KME_WR_client_en;
	UINT32	MESHARE__ME1_WDMA0_CTRL;
	UINT32	MESHARE__ME1_WDMA0_NUM_BL;
	UINT32	MESHARE__ME1_WDMA0_LSTEP;
	UINT32	MESHARE__ME1_WDMA0_MSTART0;
	UINT32	MESHARE__ME1_WDMA0_MSTART1;
	UINT32	MESHARE__ME1_WDMA0_MEND0;
	UINT32	MESHARE__ME1_WDMA0_MEND1;
	UINT32	MESHARE__ME1_WDMA1_LSTEP;
	UINT32	MESHARE__ME1_WDMA1_MSTART0;
	UINT32	MESHARE__ME1_WDMA1_MSTART1;
	UINT32	MESHARE__ME1_WDMA1_MSTART2;
	UINT32	MESHARE__ME1_WDMA1_MEND0;
	UINT32	MESHARE__ME1_WDMA1_MEND1;
	UINT32	MESHARE__ME1_WDMA1_MEND2;
	UINT32	MESHARE__IPME_WDMA_CTRL;
	UINT32	MESHARE__IPME_WDMA_NUM_BL;
	UINT32	MESHARE__IPME_WDMA_LSTEP;
	UINT32	MESHARE__IPME_WDMA_MSTART0;
	UINT32	MESHARE__IPME_WDMA_MSTART1;
	UINT32	MESHARE__IPME_WDMA_MSTART2;
	UINT32	MESHARE__IPME_WDMA_MSTART3;
	UINT32	MESHARE__IPME_WDMA_MSTART4;
	UINT32	MESHARE__IPME_WDMA_MSTART5;
	UINT32	MESHARE__IPME_WDMA_MSTART6;
	UINT32	MESHARE__IPME_WDMA_MSTART7;
	UINT32	MESHARE__IPME_WDMA_MEND0;
	UINT32	MESHARE__IPME_WDMA_MEND1;
	UINT32	MESHARE__IPME_WDMA_MEND2;
	UINT32	MESHARE__IPME_WDMA_MEND3;
	UINT32	MESHARE__IPME_WDMA_MEND4;
	UINT32	MESHARE__IPME_WDMA_MEND5;
	UINT32	MESHARE__IPME_WDMA_MEND6;
	UINT32	MESHARE__IPME_WDMA_MEND7;
	UINT32	MESHARE__ME_DMA_WR_Rule_check_up;
	UINT32	MESHARE__ME_DMA_WR_Rule_check_low;
	UINT32	MESHARE__ME_DMA_WR_Ctrl;
	UINT32	MESHARE__KME_RD_client_en;
	UINT32	MESHARE__DH_RDMA0_CTRL;
	UINT32	MESHARE__DH_RDMA0_NUM_BL;
	UINT32	MESHARE__ME1_RDMA0_CTRL;
	UINT32	MESHARE__ME1_RDMA0_NUM_BL;
	UINT32	MESHARE__ME2_RDMA0_CTRL;
	UINT32	MESHARE__ME2_RDMA0_NUM_BL;
	UINT32	MESHARE__ME_DMA_RD_Rule_check_up;
	UINT32	MESHARE__ME_DMA_RD_Rule_check_low;
	UINT32	MESHARE__ME_DMA_RD_Ctrl;

	UINT32	MCDMA__MC_WDMA_CTRL0;
	UINT32	MCDMA__MC_WDMA_CTRL1;
	UINT32	MCDMA__MC_LF_WDMA_NUM_BL;
	UINT32	MCDMA__MC_LF_WDMA_MSTART0;
	UINT32	MCDMA__MC_LF_WDMA_MSTART1;
	UINT32	MCDMA__MC_LF_WDMA_MSTART2;
	UINT32	MCDMA__MC_LF_WDMA_MSTART3;
	UINT32	MCDMA__MC_LF_WDMA_MSTART4;
	UINT32	MCDMA__MC_LF_WDMA_MSTART5;
	UINT32	MCDMA__MC_LF_WDMA_MSTART6;
	UINT32	MCDMA__MC_LF_WDMA_MSTART7;
	UINT32	MCDMA__MC_LF_WDMA_MEND0;
	UINT32	MCDMA__MC_LF_WDMA_MEND1;
	UINT32	MCDMA__MC_LF_WDMA_MEND2;
	UINT32	MCDMA__MC_LF_WDMA_MEND3;
	UINT32	MCDMA__MC_LF_WDMA_MEND4;
	UINT32	MCDMA__MC_LF_WDMA_MEND5;
	UINT32	MCDMA__MC_LF_WDMA_MEND6;
	UINT32	MCDMA__MC_LF_WDMA_MEND7;
	UINT32	MCDMA__MC_LF_WDMA_LSTEP;
	UINT32	MCDMA__MC_LF_DMA_WR_Rule_check_up;
	UINT32	MCDMA__MC_LF_DMA_WR_Rule_check_low;
	UINT32	MCDMA__MC_LF_DMA_WR_Ctrl;
	UINT32	MCDMA__MC_HF_WDMA_NUM_BL;
	UINT32	MCDMA__MC_HF_WDMA_MSTART0;
	UINT32	MCDMA__MC_HF_WDMA_MSTART1;
	UINT32	MCDMA__MC_HF_WDMA_MSTART2;
	UINT32	MCDMA__MC_HF_WDMA_MSTART3;
	UINT32	MCDMA__MC_HF_WDMA_MSTART4;
	UINT32	MCDMA__MC_HF_WDMA_MSTART5;
	UINT32	MCDMA__MC_HF_WDMA_MSTART6;
	UINT32	MCDMA__MC_HF_WDMA_MSTART7;
	UINT32	MCDMA__MC_HF_WDMA_MEND0;
	UINT32	MCDMA__MC_HF_WDMA_MEND1;
	UINT32	MCDMA__MC_HF_WDMA_MEND2;
	UINT32	MCDMA__MC_HF_WDMA_MEND3;
	UINT32	MCDMA__MC_HF_WDMA_MEND4;
	UINT32	MCDMA__MC_HF_WDMA_MEND5;
	UINT32	MCDMA__MC_HF_WDMA_MEND6;
	UINT32	MCDMA__MC_HF_WDMA_MEND7;
	UINT32	MCDMA__MC_HF_WDMA_LSTEP;
	UINT32	MCDMA__MC_HF_DMA_WR_Rule_check_up;
	UINT32	MCDMA__MC_HF_DMA_WR_Rule_check_low;
	UINT32	MCDMA__MC_HF_DMA_WR_Ctrl;
	UINT32	MCDMA__MC_WDMA_DB_CTRL;
	UINT32	MCDMA__MC_RDMA_CTRL;
	UINT32	MCDMA__MC_RDMA_CTRL1;
	UINT32	MCDMA__MC_LF_I_RDMA_NUM_BL;
	UINT32	MCDMA__MC_LF_I_DMA_RD_Rule_check_up;
	UINT32	MCDMA__MC_LF_I_DMA_RD_Rule_check_low;
	UINT32	MCDMA__MC_LF_I_DMA_RD_Ctrl;
	UINT32	MCDMA__MC_HF_I_RDMA_NUM_BL;
	UINT32	MCDMA__MC_HF_I_DMA_RD_Rule_check_up;
	UINT32	MCDMA__MC_HF_I_DMA_RD_Rule_check_low;
	UINT32	MCDMA__MC_HF_I_DMA_RD_Ctrl;
	UINT32	MCDMA__MC_LF_P_RDMA_NUM_BL;
	UINT32	MCDMA__MC_LF_P_DMA_RD_Rule_check_up;
	UINT32	MCDMA__MC_LF_P_DMA_RD_Rule_check_low;
	UINT32	MCDMA__MC_LF_P_DMA_RD_Ctrl;
	UINT32	MCDMA__MC_HF_P_RDMA_NUM_BL;
	UINT32	MCDMA__MC_HF_P_DMA_RD_Rule_check_up;
	UINT32	MCDMA__MC_HF_P_DMA_RD_Rule_check_low;
	UINT32	MCDMA__MC_HF_P_DMA_RD_Ctrl;
	UINT32	MCDMA__MC_RDMA_DB_CTRL;

	//MEMC mux
	UINT32 MEMC_MUX_MEMC_MUX_FUNC_CTRL_SUSPEND;
	//FBG
	UINT32 PPOVERLAY_MEMC_MUX_CTRL_SUSPEND;
	//clock
	UINT32 SYS_REG_SYS_DISPCLKSEL_SUSPEND;
	UINT32 MEMC_LATENCY01;
	UINT32 MEMC_LATENCY02;
	//ME memory boundary
	UINT32 MEMC_DBUS_WRAP_ME_DOWNLIMIT;
	UINT32 MEMC_DBUS_WRAP_ME_UPLIMIT;
	//MC memory boundary
	UINT32 MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_low_dma_low_limit;
	UINT32 MEMC_MC_DMA_MC_LF_DMA_WR_Rule_check_up_dma_up_limit;
	UINT32 MEMC_reg[99][64];

}VPQ_MEMC_SUSPEND_RESUME_T;
#endif
