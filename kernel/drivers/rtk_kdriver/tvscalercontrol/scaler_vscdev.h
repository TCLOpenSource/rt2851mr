#ifndef __VSC_H
#define  __VSC_H
#include <ioctrl/scaler/vsc_cmd_id.h>
#define ENABLE_SCALER_DUMP_FRAME_INFO //for bring up
#define CONFIG_SUPPORT_SDR_MAX_RGB
#ifdef ENABLE_SCALER_DUMP_FRAME_INFO
  /* dump VO CRC info to file */
  #ifndef FILE_NAME_SIZE
  #define FILE_NAME_SIZE 50
  #define DUMP_ES_SIZE 2*1024*1024
  #endif

  typedef struct SCALER_MALLOC_STRUCT {
  	unsigned long Memory;
  	unsigned long PhyAddr ;
  	unsigned long VirtAddr ;
  } SCALER_MALLOC_STRUCT;

  typedef struct SCALER_DUMP_STRUCT {
  	unsigned char file_name[FILE_NAME_SIZE];    /* debug log file place & name */
  	unsigned int  mem_size; 	/* debug memory size */
  	unsigned char enable ;
  } SCALER_DUMP_STRUCT;

  typedef struct SCALER_DUMP_BUFFER_HEADER {
  	unsigned int magic;
  	unsigned int size;
  	unsigned int rd;
  	unsigned int wr;
  } SCALER_DUMP_BUFFER_HEADER;
  // -------------------------------
#endif

struct vsc_film_mode_parameter_t {
	int enable;
	int type;
	int v_freq;
};

typedef enum{
    VSC_I_DOMAIN = 0x1,//VSC run i domain 
    VSC_M_DOMAIN = 0x2,//VSC run m domain 
    VSC_D_DOMAIN = 0x4,//VSC run d domain 
    VSC_MAIN_SMOOTHTOGGLE = 0x8,//VSC run main smooth toggle
    VSC_SUB_SMOOTHTOGGLE = 0x10,//VSC run sub smooth toggle
    VSC_FREEZE_DISABLE_MAIN_IP = 0x20, //for fw_scalerip_disable_onlyip
    VSC_FREEZE_DISABLE_SUB_IP = 0x40,//for fw_scalerip_disable_onlyip
    VSC_MAIN_RESET_MODE = 0x80,//reset mode main
    VSC_SUB_RESET_MODE = 0x100,//reset mode sub
    VSC_MAIN_BBD_VGIP = 0x200,//MAIN VGIP BBD
    VSC_SUB_BBD_VGIP = 0x400,//MAIN VGIP BBD
    VSC_MEMC_REALCINEMA = 0x800,//MEMC_REALCINEMA 
    VSC_I3DDMA_DRIVE = 0x1000,//VSC run i3ddma
    VSC_MAIN_CHECK_MODE = 0x2000,//VSC run main check mode
    VSC_SUB_CHECK_MODE = 0x4000,//VSC run sub check mode
    VSC_MESPG_AUTO_TEST = 0x8000,//VSC run MSPG auto test
    VSC_I3DDMA_NN = 0x10000,//VSC run i3ddma NN
    VSC_VPQ_LD = 0x20000,//VSC VPQ LD
    VSC_IV2DV_TUNING = 0x40000,//VSC do iv to dv tuning 
    VSC_DOLBY_LB = 0x80000,//vsc dolby letter box
    VSC_MAIN_PRE_CHECK = 0x100000,//VSC before run scaler 
    VSC_WAIT_GAME_MODE = 0x200000,//VSC wait game mode finish
    VSC_WAIT_VO_INFO = 0x400000,//VSC wait vo info
    VSC_ATV_WAIT_STABLE = 0x800000,//ATV wait stable
    VSC_ATV_SCALER = 0x1000000,//ATV run scaler
    VSC_ATV_SMOOTHTOGGLE = 0x2000000,//ATV run smooth toggle
    VSC_NON_ATV_MAIN_SCALER = 0x4000000,//NONATV run main scaler
    VSC_NON_ATV_SUB_SCALER = 0x8000000,//NONATV run sub scaler
    VSC_SUB_PRE_CHECK = 0x10000000,//VSC before run scaler
    VSC_GET_INFO = 0x20000000,//VSC get_displayinfo
}VSC_TASK_STATUS;

//VSC_INPUT_TYPE_T Get_DisplayMode_Src(unsigned char display);
#if 0
unsigned char vo_overscan_disable(VSC_INPUT_TYPE_T srctype);
unsigned char vo_overscan_adjust(VSC_INPUT_TYPE_T srctype);
#endif
void magnifier_message_push(VSC_MAGNIGIER_PARA_T message);
unsigned char get_ForceSmoothtoggleGo(void);
unsigned char vsc_get_adaptivestream_flag(unsigned char display);
unsigned char Get_AVD_display(unsigned char display);
#ifdef BRING_UP_K4L_TEST
void fw_scalerip_set_di_gamemode_flag(unsigned char bflag);//20170524 pinyen create new_game_mode_tsk
#endif
bool rtk_hal_vsc_GetRGB444Mode(void);
void Scaler_start_orbit_algo(unsigned char b_enable);
void Scaler_reset_orbit(void);
unsigned char Scaler_get_orbit_algo_status(void);
void fw_set_vsc_GameMode(unsigned char b_vscGameMode_OnOff);
unsigned char fw_get_vsc_GameMode(void);

#ifdef SMOOTH_TOGGLE_DATAFRCFS_TEST
unsigned char vsc_decide_timingframesync(unsigned char display);
#endif
unsigned char Get_AVD_display(unsigned char display);
unsigned char Get_Factory_SelfDiagnosis_Mode(void);
unsigned char Scaler_data_frc_fs_change_adjust_after_scaler(unsigned char display,unsigned short disp_height);
void Scaler_data_frc_fs_change_adjust_outputregion(unsigned char display,unsigned short disp_height);
void Scaler_Dolby_HDR_reset(void);
unsigned char uc4_get_main_dispwin_value(unsigned short *x, unsigned short *y, unsigned short *w, unsigned short *h);//WOSQRTK-7731
void scaler_i2rnd_run_main(void);
void rtk_hal_vsc_i2rnd_enable(unsigned char enable);
unsigned short Scaler_CalAVD27MWidth(SCALER_DISP_CHANNEL display,unsigned short a_usInput);
unsigned char rtk_hal_vsc_i2rnd_b05_enable(unsigned char enable);
KADP_VSC_SUB_PURPOSE_T Get_Magnifier_LiveZoom_Mode(void);
unsigned char get_LiveZoomPcmodeDiableRTNR(void);
void set_LiveZoomPcmodeDiableRTNR(unsigned char value);
void set_frc_style_input_fast_than_display(bool enable);
unsigned char get_frc_style_input_fast_than_display(void);
void rotate_reset_mode(unsigned char display);
void scaler_save_main_info(void);
void scaler_update_struct_info(unsigned char display);
unsigned char Scaler_get_data_framesync(unsigned char display);
unsigned char rtk_hal_vsc_set_localDimmingCtrlDemoMode(unsigned char bType, unsigned char bCtrl);
unsigned char get_new_game_mode_condition(void);
void scaler_vsc_set_vr360_block_mdomain_doublebuffer(UINT8 bEnable);
UINT8 scaler_vsc_get_vr360_block_mdomain_doublebuffer(void);
void scaler_vsc_vr360_enter_datafs_proc(void);
void scaler_vsc_vr360_enter_datafrc_proc(void);
struct vsc_film_mode_parameter_t vsc_set_film_mode_param(int film_mode_enable, int film_mode_type, int v_freq);
void scaler_vsc_set_gamemode_force_framerate_lowdelay_mode(UINT8 bOnOff);
UINT8 scaler_vsc_get_gamemode_force_framerate_lowdelay_mode(void);
UINT8 scaler_vsc_check_gamemode_force_framerate_condition(void);
unsigned int scaler_vsc_get_gamemode_rerun_count(void);
void scaler_vsc_reset_gamemode_rerun_count(void);
void scaler_vsc_increase_gamemode_rerun_count(void);
void scaler_vsc_set_external_src_vfreq(unsigned char display,   unsigned short vfreq);
void scaler_vsc_set_external_src_backporch(unsigned char display,   unsigned int backporch);
unsigned int scaler_vsc_get_external_src_vfreq(void);
unsigned int scaler_vsc_get_external_src_backporch(void);
void scaler_vsc_set_adaptive_pst_lowdelay_mode(UINT8 bOnOff);
UINT8 scaler_vsc_get_adaptive_pst_lowdelay_mode(void);
void scaler_vsc_set_force_pst_lowdelay_mode(UINT8 bOnOff);
UINT8 scaler_vsc_get_force_pst_lowdelay_mode(void);
void scaler_vsc_set_keep_vo_framerate_control(UINT8 bOnOff);
UINT8 scaler_vsc_get_keep_vo_framerate_control(void);
void Scaler_ForceUpdate_Callback_Delay_Info_by_InputOutput_Region(KADP_VIDEO_RECT_T  OutputRegion);
void Scaler_Fulfill_Callback_Delay_Info(KADP_SCALER_WIN_CALLBACK_DELAY_INFO *pCallBack_info);
void Scaler_Reset_ForceUpdate_Callback_Delay_Info(void);
struct vsc_film_mode_parameter_t get_film_mode_parameter(void);
struct semaphore* get_gamemode_check_semaphore(void);
void game_mode_set_ignore_cmd_check(unsigned char enable);
unsigned char Scaler_get_vdec_2k120hz(void);
unsigned char get_new_game_mode_vdec_memc_bypass_condition(void);
void scaler_I2D_pwm_frequency_update(void);
unsigned char scaler_get_I2D_pwm_frequency_update_in_isr(void);
unsigned char scaler_get_I2D_tracking_in_realcinema(void);
void Convert_Timing_To_fs_Depend_datafs(unsigned char display);
void scaler_overscan_vertical_size(unsigned char display,unsigned int progressive,unsigned int source_height,unsigned int *height,unsigned int *v_start);
void scaler_vsc_set_keep_vo_framerate_control(UINT8 bOnOff);
UINT8 scaler_vsc_get_keep_vo_framerate_control(void);

void scaler_set_VRR_pwm_frequency_update_in_isr(unsigned char bEnable);
unsigned char scaler_get_VRR_pwm_frequency_update_in_isr(void);
void scaler_pwm_frequency_update_by_dvs(void);
unsigned judge_scaler_break_case(unsigned char display);
unsigned int scaler_get_I2D_tracking_phase_error_threadhold(void);
unsigned int scaler_get_idomain_vfreq_pre(void);
void scaler_Setdualdecoder_notchange(unsigned char flag);
void  rtk_hal_vsc_Setdualdecoder_run(unsigned char flag);
unsigned char rtk_hal_vsc_Getdualdecoder_run(void);
unsigned char rtk_hal_vsc_Getdualdecoder(void);
void drv_set_vrr_mode_dynamic(unsigned char enable);
unsigned char drv_get_vrr_mode_dynamic(void);
void drv_set_freesync_mode_dynamic(unsigned char enable);
unsigned char drv_get_freesync_mode_dynamic(void);
void drv_set_vrr_low_delay_mode_dynamic(unsigned char enable);
unsigned char drv_get_vrr_low_delay_mode_dynamic(void);
unsigned char scaler_get_current_framesync_mode(unsigned char display);
void scaler_set_full_gatting_rpc(unsigned int enable);
unsigned char check_atv_stable_for_bg(unsigned char display);
SCALER_VSC_INPUT_REGION_TYPE getInputRegionType(unsigned char display);
void setInputRegionType(unsigned char display, SCALER_VSC_INPUT_REGION_TYPE regionType);


#endif

