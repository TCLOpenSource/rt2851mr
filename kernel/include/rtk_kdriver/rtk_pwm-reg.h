#ifndef __RTK_PWM_REG_H__
#define __RTK_PWM_REG_H__

#include <linux/io.h>
#include <rbus/rbus_types.h>
#include <rbus/lg_m_plus_reg.h>
#include <rbus/sys_reg_reg.h>
#include <rbus/ppoverlay_reg.h>
#include <rbus/misc_pwm_reg.h>
#include <rbus/iso_misc_reg.h>
#include <rbus/iso_misc_pwm_reg.h>


#define  PWM_RESERVED_VADDR  (0xFFFFFFFF)

//ISO_PWM_INIT
#define  PWM_ISO_INT_CTRL            ISO_MISC_INT_CTRL_reg

//VRR Function
#define PWM_VRR_DVSYNC_CTRL0         PPOVERLAY_VRR_dvsync_dly_ctrl0_reg
#define PWM_VRR_DVSYNC_CTRL1         PPOVERLAY_VRR_dvsync_dly_ctrl1_reg

//SYS_CLCK
#define  PWM_SYS_CLKDIV              SYS_REG_SYS_CLKDIV_reg

//M+ Function
#define  PWM_M_PLUS_VADDR            LG_M_PLUS_M_plus_dimming_duty_read_reg
#define  PWM_M_PLUS_MASK             LG_M_PLUS_M_plus_dimming_duty_read_dimming_duty_mask
#define  PWM_M_PLUS_UPDATE_MASK      LG_M_PLUS_M_plus_dimming_duty_read_dimming_duty_update_mask
#define  PWM_M_PLUS_SHIFT            LG_M_PLUS_M_plus_dimming_duty_read_dimming_duty_update_shift

//DTG
#define DISPLAY_TIMING_CTRL1_VADDR   PPOVERLAY_Display_Timing_CTRL1_reg
#define PREDICT_CTRL_VADDR           PPOVERLAY_PWM_predict_ctrl_reg
#define FRC_TO_FRAME_SYNC_VADDR      PPOVERLAY_frc_to_frame_sync_den_end_ctrl_reg

//ISO
#define  ISO_PWM_DB_CTRL_VADDR       ISO_MISC_PWM_MIS_PWM_DB_CTRL_reg
#define  ISO_PWM0_CTRL_VADDR         ISO_MISC_PWM_MIS_PWM0_CTRL_reg
#define  ISO_PWM0_TIMING_CTRL_VADDR  ISO_MISC_PWM_MIS_PWM0_Timing_CTRL_reg
#define  ISO_PWM0_DUTY_SET_VADDR     ISO_MISC_PWM_MIS_PWM0_DUTY_SET_reg
#define  ISO_PWM0_ALIGN_VADDR        ISO_MISC_PWM_MIS_PWM0_ALIGN_reg
#define  ISO_PWM0_TRACKVALUE_VADDR   ISO_MISC_PWM_MIS_PWM0_TRACKVALUE_reg

#define  ISO_PWM1_CTRL_VADDR         ISO_MISC_PWM_MIS_PWM1_CTRL_reg
#define  ISO_PWM1_TIMING_CTRL_VADDR  ISO_MISC_PWM_MIS_PWM1_Timing_CTRL_reg
#define  ISO_PWM1_DUTY_SET_VADDR     ISO_MISC_PWM_MIS_PWM1_DUTY_SET_reg
#define  ISO_PWM1_ALIGN_VADDR        ISO_MISC_PWM_MIS_PWM1_ALIGN_reg
#define  ISO_PWM1_TRACKVALUE_VADDR   ISO_MISC_PWM_MIS_PWM1_TRACKVALUE_reg

#define  ISO_PWM_OD_MODE_VADDR       ISO_MISC_PWM_PWM_ODMODE_CR_reg
#define  ISO_PWM_NONE                (PWM_RESERVED_VADDR)

//MISC
#define  MIS_PWM_DB0_CTRL_VADDR                    MISC_PWM_PWM_DB0_CTRL_reg
#define  MIS_PWM_DB1_CTRL_VADDR                    MISC_PWM_PWM_DB1_CTRL_reg
#define  MIS_PWM0_CTRL_VADDR                       MISC_PWM_PWM0_CTRL_reg
#define  MIS_PWM0_TIMING_CTRL_VADDR                MISC_PWM_PWM0_Timing_CTRL_reg
#define  MIS_PWM0_DUTY_SET_VADDR                   MISC_PWM_PWM0_DUTY_SET_reg
#define  MIS_PWM0_DVS_PERIOD_VADDR                 MISC_PWM_PWM0_DVS_PERIOD_reg
#define  MIS_PWM0_DVS_MONITOR_VADDR                MISC_PWM_PWM0_DVS_MONITOR_reg
#define  MIS_PWM0_MONITOR_VADDR                    MISC_PWM_PWM0_MONITOR_reg
#define  MIS_PWM0_ERR_STATUS_VADDR                 MISC_PWM_PWM0_ERR_STATUS_reg
#define  MIS_PWM0_TRACK_SET_VADDR                  MISC_PWM_PWM0_TRACK_SET_reg
#define  MIS_PWM0_TRACK_FSM_VADDR                  MISC_PWM_PWM0_TRACK_FSM_reg
#define  MIS_PWM0_TRACK_PTI_VADDR                  MISC_PWM_PWM0_TRACK_PTI_reg
#define  MIS_PWM0_FREQ0_VADDR                      MISC_PWM_PWM0_FREQ_0_reg
#define  MIS_PWM0_FREQ1_VADDR                      MISC_PWM_PWM0_FREQ_1_reg
#define  MIS_PWM0_PHASE0_VADDR                     MISC_PWM_PWM0_PHASE_0_reg
#define  MIS_PWM0_PHASE1_VADDR                     MISC_PWM_PWM0_PHASE_1_reg
#define  MIS_PWM0_HW_PREDICT_VADDR                 MISC_PWM_PWM0_HW_PREDICT_reg
#define  MIS_PWM0_SW_PREDICT_VADDR                 MISC_PWM_PWM0_SW_PREDICT_reg
#define  MIS_PWM0_PREDICT_RATIO_VADDR              MISC_PWM_PWM0_PREDICT_RATIO_reg

#define  MIS_PWM1_CTRL_VADDR                       MISC_PWM_PWM1_CTRL_reg
#define  MIS_PWM1_TIMING_CTRL_VADDR                MISC_PWM_PWM1_Timing_CTRL_reg
#define  MIS_PWM1_DUTY_SET_VADDR                   MISC_PWM_PWM1_DUTY_SET_reg
#define  MIS_PWM1_DVS_PERIOD_VADDR                 MISC_PWM_PWM1_DVS_PERIOD_reg
#define  MIS_PWM1_DVS_MONITOR_VADDR                MISC_PWM_PWM1_DVS_MONITOR_reg
#define  MIS_PWM1_MONITOR_VADDR                    MISC_PWM_PWM1_MONITOR_reg
#define  MIS_PWM1_ERR_STATUS_VADDR                 MISC_PWM_PWM1_ERR_STATUS_reg
#define  MIS_PWM1_TRACK_SET_VADDR                  MISC_PWM_PWM1_TRACK_SET_reg
#define  MIS_PWM1_TRACK_FSM_VADDR                  MISC_PWM_PWM1_TRACK_FSM_reg
#define  MIS_PWM1_TRACK_PTI_VADDR                  MISC_PWM_PWM1_TRACK_PTI_reg
#define  MIS_PWM1_FREQ0_VADDR                      MISC_PWM_PWM1_FREQ_0_reg
#define  MIS_PWM1_FREQ1_VADDR                      MISC_PWM_PWM1_FREQ_1_reg
#define  MIS_PWM1_PHASE0_VADDR                     MISC_PWM_PWM1_PHASE_0_reg
#define  MIS_PWM1_PHASE1_VADDR                     MISC_PWM_PWM1_PHASE_1_reg
#define  MIS_PWM1_HW_PREDICT_VADDR                 MISC_PWM_PWM1_HW_PREDICT_reg
#define  MIS_PWM1_SW_PREDICT_VADDR                 MISC_PWM_PWM1_SW_PREDICT_reg
#define  MIS_PWM1_PREDICT_RATIO_VADDR              MISC_PWM_PWM1_PREDICT_RATIO_reg

#define  MIS_PWM2_CTRL_VADDR                       MISC_PWM_PWM2_CTRL_reg
#define  MIS_PWM2_TIMING_CTRL_VADDR                MISC_PWM_PWM2_Timing_CTRL_reg
#define  MIS_PWM2_DUTY_SET_VADDR                   MISC_PWM_PWM2_DUTY_SET_reg
#define  MIS_PWM2_DVS_PERIOD_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM2_DVS_MONITOR_VADDR                PWM_RESERVED_VADDR
#define  MIS_PWM2_MONITOR_VADDR                    PWM_RESERVED_VADDR
#define  MIS_PWM2_ERR_STATUS_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM2_TRACK_SET_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM2_TRACK_FSM_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM2_TRACK_PTI_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM2_FREQ0_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM2_FREQ1_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM2_PHASE0_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM2_PHASE1_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM2_HW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM2_SW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM2_PREDICT_RATIO_VADDR              PWM_RESERVED_VADDR

#define  MIS_PWM3_CTRL_VADDR                       MISC_PWM_PWM3_CTRL_reg
#define  MIS_PWM3_TIMING_CTRL_VADDR                MISC_PWM_PWM3_Timing_CTRL_reg
#define  MIS_PWM3_DUTY_SET_VADDR                   MISC_PWM_PWM3_DUTY_SET_reg
#define  MIS_PWM3_DVS_PERIOD_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM3_DVS_MONITOR_VADDR                PWM_RESERVED_VADDR
#define  MIS_PWM3_MONITOR_VADDR                    PWM_RESERVED_VADDR
#define  MIS_PWM3_ERR_STATUS_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM3_TRACK_SET_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM3_TRACK_FSM_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM3_TRACK_PTI_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM3_FREQ0_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM3_FREQ1_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM3_PHASE0_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM3_PHASE1_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM3_HW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM3_SW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM3_PREDICT_RATIO_VADDR              PWM_RESERVED_VADDR

#define  MIS_PWM4_CTRL_VADDR                       MISC_PWM_PWM4_CTRL_reg
#define  MIS_PWM4_TIMING_CTRL_VADDR                MISC_PWM_PWM4_Timing_CTRL_reg
#define  MIS_PWM4_DUTY_SET_VADDR                   MISC_PWM_PWM4_DUTY_SET_reg
#define  MIS_PWM4_DVS_PERIOD_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM4_DVS_MONITOR_VADDR                PWM_RESERVED_VADDR
#define  MIS_PWM4_MONITOR_VADDR                    PWM_RESERVED_VADDR
#define  MIS_PWM4_ERR_STATUS_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM4_TRACK_SET_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM4_TRACK_FSM_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM4_TRACK_PTI_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM4_FREQ0_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM4_FREQ1_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM4_PHASE0_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM4_PHASE1_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM4_HW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM4_SW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM4_PREDICT_RATIO_VADDR              PWM_RESERVED_VADDR

#define  MIS_PWM5_CTRL_VADDR                       MISC_PWM_PWM5_CTRL_reg
#define  MIS_PWM5_TIMING_CTRL_VADDR                MISC_PWM_PWM5_Timing_CTRL_reg
#define  MIS_PWM5_DUTY_SET_VADDR                   MISC_PWM_PWM5_DUTY_SET_reg
#define  MIS_PWM5_DVS_PERIOD_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM5_DVS_MONITOR_VADDR                PWM_RESERVED_VADDR
#define  MIS_PWM5_MONITOR_VADDR                    PWM_RESERVED_VADDR
#define  MIS_PWM5_ERR_STATUS_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM5_TRACK_SET_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM5_TRACK_FSM_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM5_TRACK_PTI_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM5_FREQ0_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM5_FREQ1_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM5_PHASE0_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM5_PHASE1_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM5_HW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM5_SW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM5_PREDICT_RATIO_VADDR              PWM_RESERVED_VADDR

#define  MIS_PWM6_CTRL_VADDR                       MISC_PWM_PWM6_CTRL_reg
#define  MIS_PWM6_TIMING_CTRL_VADDR                MISC_PWM_PWM6_Timing_CTRL_reg
#define  MIS_PWM6_DUTY_SET_VADDR                   MISC_PWM_PWM6_DUTY_SET_reg
#define  MIS_PWM6_DVS_PERIOD_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM6_DVS_MONITOR_VADDR                PWM_RESERVED_VADDR
#define  MIS_PWM6_MONITOR_VADDR                    PWM_RESERVED_VADDR
#define  MIS_PWM6_ERR_STATUS_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM6_TRACK_SET_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM6_TRACK_FSM_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM6_TRACK_PTI_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM6_FREQ0_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM6_FREQ1_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM6_PHASE0_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM6_PHASE1_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM6_HW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM6_SW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM6_PREDICT_RATIO_VADDR              PWM_RESERVED_VADDR

#define  MIS_PWM7_CTRL_VADDR                       MISC_PWM_PWM7_CTRL_reg
#define  MIS_PWM7_TIMING_CTRL_VADDR                MISC_PWM_PWM7_Timing_CTRL_reg
#define  MIS_PWM7_DUTY_SET_VADDR                   MISC_PWM_PWM7_DUTY_SET_reg
#define  MIS_PWM7_DVS_PERIOD_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM7_DVS_MONITOR_VADDR                PWM_RESERVED_VADDR
#define  MIS_PWM7_MONITOR_VADDR                    PWM_RESERVED_VADDR
#define  MIS_PWM7_ERR_STATUS_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM7_TRACK_SET_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM7_TRACK_FSM_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM7_TRACK_PTI_VADDR                  PWM_RESERVED_VADDR
#define  MIS_PWM7_FREQ0_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM7_FREQ1_VADDR                      PWM_RESERVED_VADDR
#define  MIS_PWM7_PHASE0_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM7_PHASE1_VADDR                     PWM_RESERVED_VADDR
#define  MIS_PWM7_HW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM7_SW_PREDICT_VADDR                 PWM_RESERVED_VADDR
#define  MIS_PWM7_PREDICT_RATIO_VADDR              PWM_RESERVED_VADDR
#define  MIS_PWM_HW_PREDICT_FROM_D_DOMAIN_VADDR    MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_reg
#define  MIS_PWM_OD_MODE_VADDR                     MISC_PWM_PWM_OD_MODE_reg
#define  MIS_DUMMY_VADDR                           MISC_PWM_PWM_DUMMY_reg

#ifndef LITTLE_ENDIAN    // apply BIG_ENDIAN
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm7_clksel:1;
        RBus_UInt32    pwm6_clksel:1;
        RBus_UInt32    pwm5_clksel:1;
        RBus_UInt32    pwm4_clksel:1;
        RBus_UInt32    pwm3_clksel:1;
        RBus_UInt32    pwm2_clksel:1;
        RBus_UInt32    pwm1_clksel:1;
        RBus_UInt32    pwm0_clksel:1;
        RBus_UInt32    reserved_1:7;
        RBus_UInt32    i2c4_clksel:1;
        RBus_UInt32    i2c3_clksel:1;
        RBus_UInt32    dtv_demod_sel:1;
        RBus_UInt32    i2c2_clksel:1;
        RBus_UInt32    i2c1_clksel:1;
        RBus_UInt32    dtv_demod_hdic_en:1;
        RBus_UInt32    NF_CLKSEL:3;
        RBus_UInt32    pwm_pll_clksel:1;
        RBus_UInt32    AUD_DTV2_FREQ_SEL:3;
        RBus_UInt32    Dummy:1;
        RBus_UInt32    AUD_DTV_FREQ_SEL:3;
    };
}pwm_sys_clk_div_RBUS;

//MISC DB Function Register
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    global_vsync_en:1;
        RBus_UInt32    pwm7_w_db0_mode:1;
        RBus_UInt32    pwm7_db0_rd_sel:1;
        RBus_UInt32    pwm7_w_db0_en:1;
        RBus_UInt32    reserved_0:1;
        RBus_UInt32    pwm6_w_db0_mode:1;
        RBus_UInt32    pwm6_db0_rd_sel:1;
        RBus_UInt32    pwm6_w_db0_en:1;
        RBus_UInt32    reserved_1:1;
        RBus_UInt32    pwm5_w_db0_mode:1;
        RBus_UInt32    pwm5_db0_rd_sel:1;
        RBus_UInt32    pwm5_w_db0_en:1;
        RBus_UInt32    reserved_2:1;
        RBus_UInt32    pwm4_w_db0_mode:1;
        RBus_UInt32    pwm4_db0_rd_sel:1;
        RBus_UInt32    pwm4_w_db0_en:1;
        RBus_UInt32    reserved_3:1;
        RBus_UInt32    pwm3_w_db0_mode:1;
        RBus_UInt32    pwm3_db0_rd_sel:1;
        RBus_UInt32    pwm3_w_db0_en:1;
        RBus_UInt32    reserved_4:1;
        RBus_UInt32    pwm2_w_db0_mode:1;
        RBus_UInt32    pwm2_db0_rd_sel:1;
        RBus_UInt32    pwm2_w_db0_en:1;
        RBus_UInt32    reserved_5:1;
        RBus_UInt32    pwm1_w_db0_mode:1;
        RBus_UInt32    pwm1_db0_rd_sel:1;
        RBus_UInt32    pwm1_w_db0_en:1;
        RBus_UInt32    reserved_6:1;
        RBus_UInt32    pwm0_w_db0_mode:1;
        RBus_UInt32    pwm0_db0_rd_sel:1;
        RBus_UInt32    pwm0_w_db0_en:1;
    };
    struct{
        RBus_UInt32    i_pwm_w_db_en:1;
        RBus_UInt32    i_db_rd_sel:1;
        RBus_UInt32    i_reserved_0:1;
        RBus_UInt32    i_pwm_w_db_mode:1;
        RBus_UInt32    i_global_delay_en:1;
        RBus_UInt32    i_reserved_1:1;
        RBus_UInt32    i_reserved_2:26;
    };
}pwm_db0_ctrl_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    reserved_0:28;
        RBus_UInt32    pwm1_db1_rd_sel:1;
        RBus_UInt32    pwm1_w_db1_en:1;
        RBus_UInt32    pwm0_db1_rd_sel:1;
        RBus_UInt32    pwm0_w_db1_en:1;
    };
}pwm_mis_db1_ctrl_RBUS;

//MISC Basic Function Register
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    m_pwm0l:1;
        RBus_UInt32    m_pwm0_duty_sel:1;
        RBus_UInt32    m_pwm0_en:1;
        RBus_UInt32    m_pwm0_vs_rst_en:1;
        RBus_UInt32    m_pwm0_mode:2;
        RBus_UInt32    m_pwm0_mplus_dim_duty_en:1;
        RBus_UInt32    m_pwm0_vs_delay_thr:21;
        RBus_UInt32    m_pwm0_mplus_dim_duty_round_en:1;
        RBus_UInt32    m_pwm0_dvs_mux:1;
        RBus_UInt32    m_pwm0_w_db1_wr:1;
        RBus_UInt32    m_pwm0_w_db0_wr:1;
    };
    struct
    {
        RBus_UInt32    i_pwm0l:1;
        RBus_UInt32    i_reserved_0:1;
        RBus_UInt32    i_pwm0_en:1;
        RBus_UInt32    i_pwm0_vs_rst_en:1;
        RBus_UInt32    i_reserved_1:3;
        RBus_UInt32    i_pwm0_vs_delay_thr:21;
        RBus_UInt32    i_reserved_2:3;
        RBus_UInt32    i_pwm0_w_db_wr:1;
    };
}pwm_ctrl_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    m_pwm0_duty_ratio:10;
        RBus_UInt32    m_pwm0_vsync_interval_num:8;
        RBus_UInt32    m_pwm0_m:2;
        RBus_UInt32    m_pwm0_n:12;
    };
    struct
    {
        RBus_UInt32    i_reserved_0:1;
        RBus_UInt32    i_reserved_1:1;
        RBus_UInt32    i_pwm0_clk_sel:1;
        RBus_UInt32    i_reserved_2:7;
        RBus_UInt32    i_pwm0_vsync_interval_num:8;
        RBus_UInt32    i_pwm0_m:2;
        RBus_UInt32    i_pwm0_n:12;
    };
}pwm_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    m_pwm0_num:4;
        RBus_UInt32    m_pwm0_dut:12;
        RBus_UInt32    m_pwm0_cycle_max:4;
        RBus_UInt32    m_pwm0_totalcnt:12;
    };
    struct
    {
        RBus_UInt32    i_reserved_0:4;
        RBus_UInt32    i_pwm0_dut:12;
        RBus_UInt32    i_pwm0_cycle_max:4;
        RBus_UInt32    i_pwm0_totalcnt:12;
    };
}pwm_duty_set_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_vs_max_period:16;
        RBus_UInt32    pwm0_vs_min_period:16;
    };
}pwm_mis_dvs_period_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_vs_period:16;
        RBus_UInt32    pwm0_vs_real_time:16;
    };
}pwm_mis_dvs_monitor_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_int:1;
        RBus_UInt32    reserved_0:2;
        RBus_UInt32    pwm0_real_totalcnt:13;
        RBus_UInt32    reserved_1:3;
        RBus_UInt32    pwm0_real_duty:13;
    };
}pwm_mis_monitor_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_predict_max_vs_thr:16;
        RBus_UInt32    pwm0_err2int_en:3;
        RBus_UInt32    reserved_0:7;
        RBus_UInt32    pwm0_predict_err:2;
        RBus_UInt32    reserved_1:3;
        RBus_UInt32    pwm0_vs_unstable:1;
    };
}pwm_mis_err_status_RBUS;

//MISC Tracking Mode Register
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_track_index:4;
        RBus_UInt32    reserved_0:19;
        RBus_UInt32    pwm0_track_int_en:1;
        RBus_UInt32    reserved_1:2;
        RBus_UInt32    pwm0_track_mode:2;
        RBus_UInt32    pwm0_track_start:1;
        RBus_UInt32    pwm0_track_stop:1;
        RBus_UInt32    reserved_2:1;
        RBus_UInt32    pwm0_track_en:1;
    };
}pwm_mis_track_set_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_phase_finish_to_int_en:1;
        RBus_UInt32    pwm0_freq_finish_to_int_en:1;
        RBus_UInt32    reserved_0:26;
        RBus_UInt32    pwm0_track_phase_finish:1;
        RBus_UInt32    pwm0_track_freq_finish:1;
        RBus_UInt32    pwm0_track_fsm:2;
    };
}pwm_mis_track_fsm_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_pti_phase:16;
        RBus_UInt32    pwm0_pti_period:16;
    };
}pwm_mis_track_pti_RBUS;

//MISC Tracking Mode Register(Frequency)
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    reserved_0:12;
        RBus_UInt32    pwm0_freq_debounce:4;
        RBus_UInt32    reserved_1:4;
        RBus_UInt32    pwm0_freq_max_step:12;
    };
}pwm_mis_freq_0_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    reserved_0:16;
        RBus_UInt32    reserved_1:4;
        RBus_UInt32    pwm0_freq_min_thr:12;
    };
}pwm_mis_freq_1_RBUS;

//MISC Tracking Mode Register(Phase)
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    reserved_0:12;
        RBus_UInt32    pwm0_phase_debounce:4;
        RBus_UInt32    reserved_1:4;
        RBus_UInt32    pwm0_phase_max_step:12;
    };
}pwm_mis_phase_0_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    reserved_0:4;
        RBus_UInt32    pwm0_phase_max_thr:12;
        RBus_UInt32    reserved_1:4;
        RBus_UInt32    pwm0_phase_min_thr:12;
    };
}pwm_mis_phase_1_RBUS;

//MISC Predict Mode Register

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    reserved_0:24;
        RBus_UInt32    pwm0_predict_index:4;
        RBus_UInt32    reserved_1:3;
        RBus_UInt32    pwm0_predict_en:1;
    };
}pwm_mis_hw_predict_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    dummy:16;
        RBus_UInt32    pwm0_sw_nxt_vw_period:16;
    };
}pwm_mis_sw_predict_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_d2p_ratio:32;
    };
}pwm_mis_predict_ratio_RBUS;

//DTG Predict Register
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32     hw_nxt_vs_period:16;
        RBus_UInt32     reserved_0:14;
        RBus_UInt32     hw_nxt_vs_update:2;
    };
}pwm_hw_predict_from_d_domain_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32     reserved_0:6;
        RBus_UInt32     pwm0_dut_ratio:10;
        RBus_UInt32     pwm0_offset_value:12;
        RBus_UInt32     pwm0_int:1
        RBus_UInt32     pwm0_ie:1
        RBus_UInt32     pwm0_align_mode:2;
    };
}pwm_iso_align_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32     reserved_0:4;
        RBus_UInt32     pwm0_max_step:12;
        RBus_UInt32     reserved_1:4;
        RBus_UInt32     pwm0_max_thr:12;
    };
}pwm_iso_trackvalue_RBUS;

#else    // apply LITTLE_ENDIAN
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    AUD_DTV_FREQ_SEL:3;
        RBus_UInt32    Dummy:1;
        RBus_UInt32    AUD_DTV2_FREQ_SEL:3;
        RBus_UInt32    pwm_pll_clksel:1;
        RBus_UInt32    NF_CLKSEL:3;
        RBus_UInt32    dtv_demod_hdic_en:1;
        RBus_UInt32    i2c1_clksel:1;
        RBus_UInt32    i2c2_clksel:1;
        RBus_UInt32    dtv_demod_sel:1;
        RBus_UInt32    i2c3_clksel:1;
        RBus_UInt32    i2c4_clksel:1;
        RBus_UInt32    reserved_1:7;
        RBus_UInt32    pwm0_clksel:1;
        RBus_UInt32    pwm1_clksel:1;
        RBus_UInt32    pwm2_clksel:1;
        RBus_UInt32    pwm3_clksel:1;
        RBus_UInt32    pwm4_clksel:1;
        RBus_UInt32    pwm5_clksel:1;
        RBus_UInt32    pwm6_clksel:1;
        RBus_UInt32    pwm7_clksel:1;
    };
}pwm_sys_clk_div_RBUS;

//MISC DB Function Register
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_w_db0_en:1;
        RBus_UInt32    pwm0_db0_rd_sel:1;
        RBus_UInt32    pwm0_w_db0_mode:1;
        RBus_UInt32    reserved_6:1;
        RBus_UInt32    pwm1_w_db0_en:1;
        RBus_UInt32    pwm1_db0_rd_sel:1;
        RBus_UInt32    pwm1_w_db0_mode:1;
        RBus_UInt32    reserved_5:1;
        RBus_UInt32    pwm2_w_db0_en:1;
        RBus_UInt32    pwm2_db0_rd_sel:1;
        RBus_UInt32    pwm2_w_db0_mode:1;
        RBus_UInt32    reserved_4:1;
        RBus_UInt32    pwm3_w_db0_en:1;
        RBus_UInt32    pwm3_db0_rd_sel:1;
        RBus_UInt32    pwm3_w_db0_mode:1;
        RBus_UInt32    reserved_3:1;
        RBus_UInt32    pwm4_w_db0_en:1;
        RBus_UInt32    pwm4_db0_rd_sel:1;
        RBus_UInt32    pwm4_w_db0_mode:1;
        RBus_UInt32    reserved_2:1;
        RBus_UInt32    pwm5_w_db0_en:1;
        RBus_UInt32    pwm5_db0_rd_sel:1;
        RBus_UInt32    pwm5_w_db0_mode:1;
        RBus_UInt32    reserved_1:1;
        RBus_UInt32    pwm6_w_db0_en:1;
        RBus_UInt32    pwm6_db0_rd_sel:1;
        RBus_UInt32    pwm6_w_db0_mode:1;
        RBus_UInt32    reserved_0:1;
        RBus_UInt32    pwm7_w_db0_en:1;
        RBus_UInt32    pwm7_db0_rd_sel:1;
        RBus_UInt32    pwm7_w_db0_mode:1;
        RBus_UInt32    global_vsync_en:1;
    };
    struct{
        RBus_UInt32    i_reserved_2:26;
        RBus_UInt32    i_reserved_1:1;
        RBus_UInt32    i_global_delay_en:1;
        RBus_UInt32    i_pwm_w_db_mode:1;
        RBus_UInt32    i_reserved_0:1;
        RBus_UInt32    i_db_rd_sel:1;
        RBus_UInt32    i_pwm_w_db_en:1;
    };
}pwm_db0_ctrl_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_w_db1_en:1;
        RBus_UInt32    pwm0_db1_rd_sel:1;
        RBus_UInt32    pwm1_w_db1_en:1;
        RBus_UInt32    pwm1_db1_rd_sel:1;
        RBus_UInt32    reserved_0:28;
    };
}pwm_mis_db1_ctrl_RBUS;

//MISC Basic Function Register
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    m_pwm0_w_db0_wr:1;
        RBus_UInt32    m_pwm0_w_db1_wr:1;
        RBus_UInt32    m_pwm0_dvs_mux:1;
        RBus_UInt32    m_pwm0_mplus_dim_duty_round_en:1;
        RBus_UInt32    m_pwm0_vs_delay_thr:21;
        RBus_UInt32    m_pwm0_mplus_dim_duty_en:1;
        RBus_UInt32    m_pwm0_mode:2;
        RBus_UInt32    m_pwm0_vs_rst_en:1;
        RBus_UInt32    m_pwm0_en:1;
        RBus_UInt32    m_pwm0_duty_sel:1;
        RBus_UInt32    m_pwm0l:1;
    };
    struct
    {
        RBus_UInt32    i_pwm0_w_db_wr:1;
        RBus_UInt32    i_reserved_0:3;
        RBus_UInt32    i_pwm0_vs_delay_thr:21;
        RBus_UInt32    i_reserved_1:3;
        RBus_UInt32    i_pwm0_vs_rst_en:1;
        RBus_UInt32    i_pwm0_en:1;
        RBus_UInt32    i_reserved_2:1;
        RBus_UInt32    i_pwm0l:1;
    };
}pwm_ctrl_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    m_pwm0_n:12;
        RBus_UInt32    m_pwm0_m:2;
        RBus_UInt32    m_pwm0_vsync_interval_num:8;
        RBus_UInt32    m_pwm0_duty_ratio:10;
    };
    struct
    {
        RBus_UInt32    i_pwm0_n:12;
        RBus_UInt32    i_pwm0_m:2;
        RBus_UInt32    i_pwm0_vsync_interval_num:8;
        RBus_UInt32    i_reserved_0:7;
        RBus_UInt32    i_pwm0_clk_sel:1;
        RBus_UInt32    i_reserved_1:1;
        RBus_UInt32    i_reserved_2:1;
    };
}pwm_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    m_pwm0_totalcnt:12;
        RBus_UInt32    m_pwm0_cycle_max:4;
        RBus_UInt32    m_pwm0_dut:12;
        RBus_UInt32    m_pwm0_num:4;
    };
    struct
    {
        RBus_UInt32    i_pwm0_totalcnt:12;
        RBus_UInt32    i_pwm0_cycle_max:4;
        RBus_UInt32    i_pwm0_dut:12;
        RBus_UInt32    i_reserved_0:4;
    };
}pwm_duty_set_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_vs_min_period:16;
        RBus_UInt32    pwm0_vs_max_period:16;
    };
}pwm_mis_dvs_period_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_vs_real_time:16;
        RBus_UInt32    pwm0_vs_period:16;
    };
}pwm_mis_dvs_monitor_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_real_duty:13;
        RBus_UInt32    reserved_1:3;
        RBus_UInt32    pwm0_real_totalcnt:13;
        RBus_UInt32    reserved_0:2;
        RBus_UInt32    pwm0_int:1;
    };
}pwm_mis_monitor_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_vs_unstable:1;
        RBus_UInt32    reserved_1:3;
        RBus_UInt32    pwm0_predict_err:2;
        RBus_UInt32    reserved_0:7;
        RBus_UInt32    pwm0_err2int_en:3;
        RBus_UInt32    pwm0_predict_max_vs_thr:16;
    };
}pwm_mis_err_status_RBUS;

//MISC Tracking Mode Register
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_track_en:1;
        RBus_UInt32    reserved_2:1;
        RBus_UInt32    pwm0_track_stop:1;
        RBus_UInt32    pwm0_track_start:1;
        RBus_UInt32    pwm0_track_mode:2;
        RBus_UInt32    reserved_1:2;
        RBus_UInt32    pwm0_track_int_en:1;
        RBus_UInt32    reserved_0:19;
        RBus_UInt32    pwm0_track_index:4;
    };
}pwm_mis_track_set_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_track_fsm:2;
        RBus_UInt32    pwm0_track_freq_finish:1;
        RBus_UInt32    pwm0_track_phase_finish:1;
        RBus_UInt32    reserved_0:26;
        RBus_UInt32    pwm0_freq_finish_to_int_en:1;
        RBus_UInt32    pwm0_phase_finish_to_int_en:1;
    };
}pwm_mis_track_fsm_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_pti_period:16;
        RBus_UInt32    pwm0_pti_phase:16;
    };
}pwm_mis_track_pti_RBUS;

//MISC Tracking Mode Register(Frequency)
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_freq_max_step:12;
        RBus_UInt32    reserved_1:4;
        RBus_UInt32    pwm0_freq_debounce:4;
        RBus_UInt32    reserved_0:12;
    };
}pwm_mis_freq_0_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_freq_min_thr:12;
        RBus_UInt32    reserved_1:4;
        RBus_UInt32    reserved_0:16;
    };
}pwm_mis_freq_1_RBUS;

//MISC Tracking Mode Register(Phase)
typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_phase_max_step:12;
        RBus_UInt32    reserved_1:4;
        RBus_UInt32    pwm0_phase_debounce:4;
        RBus_UInt32    reserved_0:12;
    };
}pwm_mis_phase_0_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_phase_min_thr:12;
        RBus_UInt32    reserved_1:4;
        RBus_UInt32    pwm0_phase_max_thr:12;
        RBus_UInt32    reserved_0:4;
    };
}pwm_mis_phase_1_RBUS;

//MISC Predict Mode Register

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_predict_en:1;
        RBus_UInt32    reserved_1:3;
        RBus_UInt32    pwm0_predict_index:4;
        RBus_UInt32    reserved_0:24;
    };
}pwm_mis_hw_predict_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_sw_nxt_vw_period:16;
        RBus_UInt32    dummy:16;
    };
}pwm_mis_sw_predict_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_d2p_ratio:32;
    };
}pwm_mis_predict_ratio_RBUS;

//DTG Predict Register
typedef union
{
	RBus_UInt32    regValue;
	struct
	{
	  RBus_UInt32     hw_nxt_vs_update:2;
	  RBus_UInt32     reserved_0:14;
	  RBus_UInt32     hw_nxt_vs_period:16;
	};
}pwm_hw_predict_from_d_domain_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_align_mode:2;
        RBus_UInt32    pwm0_ie:1;
        RBus_UInt32    pwm0_int:1;
        RBus_UInt32    pwm0_offset_value:12;
        RBus_UInt32    pwm0_dut_ratio:10;
        RBus_UInt32    reserved_0:6;
    };
}pwm_iso_align_RBUS;

typedef union
{
    RBus_UInt32    regValue;
    struct
    {
        RBus_UInt32    pwm0_max_thr:12;
        RBus_UInt32    reserved_1:4;
        RBus_UInt32    pwm0_max_step:12;
        RBus_UInt32    reserved_0:4;
    };
}pwm_iso_trackvalue_RBUS;

#endif

typedef struct rtk_pwm_reg_map_t{
    union {
        unsigned long MISC_CTRL;
        unsigned long ISO_CTRL;
    };
    union {
        unsigned long MISC_TIMING_CTRL;
        unsigned long ISO_TIMING_CTRL;
    };
    union {
        unsigned long MISC_DUTY_SET;
        unsigned long ISO_DUTY_SET;
    };
    union {
        unsigned long DVS_PERIOD;
        unsigned long ALIGN_SET;
    };
    union {
        unsigned long DV_MONITOR;
        unsigned long TRACKVALUE_SET;
    };
    union {
        unsigned long MONITOR;
        unsigned long PWM_UNUSED1;
    };
    union {
        unsigned long ERR_STATUS;
        unsigned long PWM_UNUSED2;
    };
    union {
        unsigned long TRACK_SET;
        unsigned long PWM_UNUSED3;
    };
    union {
        unsigned long TRACK_FSM;
        unsigned long PWM_UNUSED4;
    };
    union {
        unsigned long TRACK_PTI;
        unsigned long PWM_UNUSED5;
    };
    union {
        unsigned long FREQ0_SET;
        unsigned long PWM_UNUSED6;
    };
    union {
        unsigned long FREQ1_SET;
        unsigned long PWM_UNUSED7;
    };
    union {
        unsigned long PHASE0_SET;
        unsigned long PWM_UNUSED8;
    };
    union {
        unsigned long PHASE1_SET;
        unsigned long PWM_UNUSED9;
    };
    union {
        unsigned long HW_PREDICT;
        unsigned long PWM_UNUSED10;
    };
    union {
        unsigned long SW_PREDICT;
        unsigned long PWM_UNUSED11;
    };
    union {
        unsigned long PREDICT_RATIO;
        unsigned long PWM_UNUSED12;
    };
}RTK_PWM_REG_MAP;

typedef struct rtk_pwm_reg_map_t rtk_pwm_reg_map;

struct rtk_pwm_phy_t {
    const rtk_pwm_reg_map *p_reg_map;
};
typedef struct rtk_pwm_phy_t rtk_pwm_phy;

static const rtk_pwm_reg_map mis_pwm0_reg = {
    .MISC_CTRL = MIS_PWM0_CTRL_VADDR,
    .MISC_TIMING_CTRL = MIS_PWM0_TIMING_CTRL_VADDR,
    .MISC_DUTY_SET = MIS_PWM0_DUTY_SET_VADDR,
    .DVS_PERIOD = MIS_PWM0_DVS_PERIOD_VADDR,
    .DV_MONITOR = MIS_PWM0_DVS_MONITOR_VADDR,
    .MONITOR = MIS_PWM0_MONITOR_VADDR,
    .ERR_STATUS = MIS_PWM0_ERR_STATUS_VADDR,
    .TRACK_SET = MIS_PWM0_TRACK_SET_VADDR,
    .TRACK_FSM = MIS_PWM0_TRACK_FSM_VADDR,
    .TRACK_PTI = MIS_PWM0_TRACK_PTI_VADDR,
    .FREQ0_SET = MIS_PWM0_FREQ0_VADDR,
    .FREQ1_SET = MIS_PWM0_FREQ1_VADDR,
    .PHASE0_SET = MIS_PWM0_PHASE0_VADDR,
    .PHASE1_SET = MIS_PWM0_PHASE1_VADDR,
    .HW_PREDICT = MIS_PWM0_HW_PREDICT_VADDR,
    .SW_PREDICT = MIS_PWM0_SW_PREDICT_VADDR,
    .PREDICT_RATIO = MIS_PWM0_PREDICT_RATIO_VADDR,
};

static const rtk_pwm_reg_map mis_pwm1_reg = {
    .MISC_CTRL = MIS_PWM1_CTRL_VADDR,
    .MISC_TIMING_CTRL = MIS_PWM1_TIMING_CTRL_VADDR,
    .MISC_DUTY_SET = MIS_PWM1_DUTY_SET_VADDR,
    .DVS_PERIOD = MIS_PWM1_DVS_PERIOD_VADDR,
    .DV_MONITOR = MIS_PWM1_DVS_MONITOR_VADDR,
    .MONITOR = MIS_PWM1_MONITOR_VADDR,
    .ERR_STATUS = MIS_PWM1_ERR_STATUS_VADDR,
    .TRACK_SET = MIS_PWM1_TRACK_SET_VADDR,
    .TRACK_FSM = MIS_PWM1_TRACK_FSM_VADDR,
    .TRACK_PTI = MIS_PWM1_TRACK_PTI_VADDR,
    .FREQ0_SET = MIS_PWM1_FREQ0_VADDR,
    .FREQ1_SET = MIS_PWM1_FREQ1_VADDR,
    .PHASE0_SET = MIS_PWM1_PHASE0_VADDR,
    .PHASE1_SET = MIS_PWM1_PHASE1_VADDR,
    .HW_PREDICT = MIS_PWM1_HW_PREDICT_VADDR,
    .SW_PREDICT = MIS_PWM1_SW_PREDICT_VADDR,
    .PREDICT_RATIO = MIS_PWM1_PREDICT_RATIO_VADDR,
};

static const rtk_pwm_reg_map mis_pwm2_reg = {
    .MISC_CTRL = MIS_PWM2_CTRL_VADDR,
    .MISC_TIMING_CTRL = MIS_PWM2_TIMING_CTRL_VADDR,
    .MISC_DUTY_SET = MIS_PWM2_DUTY_SET_VADDR,
    .DVS_PERIOD = MIS_PWM2_DVS_PERIOD_VADDR,
    .DV_MONITOR = MIS_PWM2_DVS_MONITOR_VADDR,
    .MONITOR = MIS_PWM2_MONITOR_VADDR,
    .ERR_STATUS = MIS_PWM2_ERR_STATUS_VADDR,
    .TRACK_SET = MIS_PWM2_TRACK_SET_VADDR,
    .TRACK_FSM = MIS_PWM2_TRACK_FSM_VADDR,
    .TRACK_PTI = MIS_PWM2_TRACK_PTI_VADDR,
    .FREQ0_SET = MIS_PWM2_FREQ0_VADDR,
    .FREQ1_SET = MIS_PWM2_FREQ1_VADDR,
    .PHASE0_SET = MIS_PWM2_PHASE0_VADDR,
    .PHASE1_SET = MIS_PWM2_PHASE1_VADDR,
    .HW_PREDICT = MIS_PWM2_HW_PREDICT_VADDR,
    .SW_PREDICT = MIS_PWM2_SW_PREDICT_VADDR,
    .PREDICT_RATIO = MIS_PWM2_PREDICT_RATIO_VADDR,
};

static const rtk_pwm_reg_map mis_pwm3_reg = {
    .MISC_CTRL = MIS_PWM3_CTRL_VADDR,
    .MISC_TIMING_CTRL = MIS_PWM3_TIMING_CTRL_VADDR,
    .MISC_DUTY_SET = MIS_PWM3_DUTY_SET_VADDR,
    .DVS_PERIOD = MIS_PWM3_DVS_PERIOD_VADDR,
    .DV_MONITOR = MIS_PWM3_DVS_MONITOR_VADDR,
    .MONITOR = MIS_PWM3_MONITOR_VADDR,
    .ERR_STATUS = MIS_PWM3_ERR_STATUS_VADDR,
    .TRACK_SET = MIS_PWM3_TRACK_SET_VADDR,
    .TRACK_FSM = MIS_PWM3_TRACK_FSM_VADDR,
    .TRACK_PTI = MIS_PWM3_TRACK_PTI_VADDR,
    .FREQ0_SET = MIS_PWM3_FREQ0_VADDR,
    .FREQ1_SET = MIS_PWM3_FREQ1_VADDR,
    .PHASE0_SET = MIS_PWM3_PHASE0_VADDR,
    .PHASE1_SET = MIS_PWM3_PHASE1_VADDR,
    .HW_PREDICT = MIS_PWM3_HW_PREDICT_VADDR,
    .SW_PREDICT = MIS_PWM3_SW_PREDICT_VADDR,
    .PREDICT_RATIO = MIS_PWM3_PREDICT_RATIO_VADDR,
};

static const rtk_pwm_reg_map mis_pwm4_reg = {
    .MISC_CTRL = MIS_PWM4_CTRL_VADDR,
    .MISC_TIMING_CTRL = MIS_PWM4_TIMING_CTRL_VADDR,
    .MISC_DUTY_SET = MIS_PWM4_DUTY_SET_VADDR,
    .DVS_PERIOD = MIS_PWM4_DVS_PERIOD_VADDR,
    .DV_MONITOR = MIS_PWM4_DVS_MONITOR_VADDR,
    .MONITOR = MIS_PWM4_MONITOR_VADDR,
    .ERR_STATUS = MIS_PWM4_ERR_STATUS_VADDR,
    .TRACK_SET = MIS_PWM4_TRACK_SET_VADDR,
    .TRACK_FSM = MIS_PWM4_TRACK_FSM_VADDR,
    .TRACK_PTI = MIS_PWM4_TRACK_PTI_VADDR,
    .FREQ0_SET = MIS_PWM4_FREQ0_VADDR,
    .FREQ1_SET = MIS_PWM4_FREQ1_VADDR,
    .PHASE0_SET = MIS_PWM4_PHASE0_VADDR,
    .PHASE1_SET = MIS_PWM4_PHASE1_VADDR,
    .HW_PREDICT = MIS_PWM4_HW_PREDICT_VADDR,
    .SW_PREDICT = MIS_PWM4_SW_PREDICT_VADDR,
    .PREDICT_RATIO = MIS_PWM4_PREDICT_RATIO_VADDR,
};

static const rtk_pwm_reg_map mis_pwm5_reg = {
    .MISC_CTRL = MIS_PWM5_CTRL_VADDR,
    .MISC_TIMING_CTRL = MIS_PWM5_TIMING_CTRL_VADDR,
    .MISC_DUTY_SET = MIS_PWM5_DUTY_SET_VADDR,
    .DVS_PERIOD = MIS_PWM5_DVS_PERIOD_VADDR,
    .DV_MONITOR = MIS_PWM5_DVS_MONITOR_VADDR,
    .MONITOR = MIS_PWM5_MONITOR_VADDR,
    .ERR_STATUS = MIS_PWM5_ERR_STATUS_VADDR,
    .TRACK_SET = MIS_PWM5_TRACK_SET_VADDR,
    .TRACK_FSM = MIS_PWM5_TRACK_FSM_VADDR,
    .TRACK_PTI = MIS_PWM5_TRACK_PTI_VADDR,
    .FREQ0_SET = MIS_PWM5_FREQ0_VADDR,
    .FREQ1_SET = MIS_PWM5_FREQ1_VADDR,
    .PHASE0_SET = MIS_PWM5_PHASE0_VADDR,
    .PHASE1_SET = MIS_PWM5_PHASE1_VADDR,
    .HW_PREDICT = MIS_PWM5_HW_PREDICT_VADDR,
    .SW_PREDICT = MIS_PWM5_SW_PREDICT_VADDR,
    .PREDICT_RATIO = MIS_PWM5_PREDICT_RATIO_VADDR,
};

static const rtk_pwm_reg_map mis_pwm6_reg = {
    .MISC_CTRL = MIS_PWM6_CTRL_VADDR,
    .MISC_TIMING_CTRL = MIS_PWM6_TIMING_CTRL_VADDR,
    .MISC_DUTY_SET = MIS_PWM6_DUTY_SET_VADDR,
    .DVS_PERIOD = MIS_PWM6_DVS_PERIOD_VADDR,
    .DV_MONITOR = MIS_PWM6_DVS_MONITOR_VADDR,
    .MONITOR = MIS_PWM6_MONITOR_VADDR,
    .ERR_STATUS = MIS_PWM6_ERR_STATUS_VADDR,
    .TRACK_SET = MIS_PWM6_TRACK_SET_VADDR,
    .TRACK_FSM = MIS_PWM6_TRACK_FSM_VADDR,
    .TRACK_PTI = MIS_PWM6_TRACK_PTI_VADDR,
    .FREQ0_SET = MIS_PWM6_FREQ0_VADDR,
    .FREQ1_SET = MIS_PWM6_FREQ1_VADDR,
    .PHASE0_SET = MIS_PWM6_PHASE0_VADDR,
    .PHASE1_SET = MIS_PWM6_PHASE1_VADDR,
    .HW_PREDICT = MIS_PWM6_HW_PREDICT_VADDR,
    .SW_PREDICT = MIS_PWM6_SW_PREDICT_VADDR,
    .PREDICT_RATIO = MIS_PWM6_PREDICT_RATIO_VADDR,
};

static const rtk_pwm_reg_map mis_pwm7_reg = {
    .MISC_CTRL = MIS_PWM7_CTRL_VADDR,
    .MISC_TIMING_CTRL = MIS_PWM7_TIMING_CTRL_VADDR,
    .MISC_DUTY_SET = MIS_PWM7_DUTY_SET_VADDR,
    .DVS_PERIOD = MIS_PWM7_DVS_PERIOD_VADDR,
    .DV_MONITOR = MIS_PWM7_DVS_MONITOR_VADDR,
    .MONITOR = MIS_PWM7_MONITOR_VADDR,
    .ERR_STATUS = MIS_PWM7_ERR_STATUS_VADDR,
    .TRACK_SET = MIS_PWM7_TRACK_SET_VADDR,
    .TRACK_FSM = MIS_PWM7_TRACK_FSM_VADDR,
    .TRACK_PTI = MIS_PWM7_TRACK_PTI_VADDR,
    .FREQ0_SET = MIS_PWM7_FREQ0_VADDR,
    .FREQ1_SET = MIS_PWM7_FREQ1_VADDR,
    .PHASE0_SET = MIS_PWM7_PHASE0_VADDR,
    .PHASE1_SET = MIS_PWM7_PHASE1_VADDR,
    .HW_PREDICT = MIS_PWM7_HW_PREDICT_VADDR,
    .SW_PREDICT = MIS_PWM7_SW_PREDICT_VADDR,
    .PREDICT_RATIO = MIS_PWM7_PREDICT_RATIO_VADDR,
};

static const rtk_pwm_reg_map iso_pwm0_reg = {
    .ISO_CTRL = ISO_PWM0_CTRL_VADDR,
    .ISO_TIMING_CTRL = ISO_PWM0_TIMING_CTRL_VADDR,
    .ISO_DUTY_SET = ISO_PWM0_DUTY_SET_VADDR,
    .ALIGN_SET = ISO_PWM0_ALIGN_VADDR,
    .TRACKVALUE_SET = ISO_PWM0_TRACKVALUE_VADDR,
    .PWM_UNUSED1  = ISO_PWM_NONE,
    .PWM_UNUSED2  = ISO_PWM_NONE,
    .PWM_UNUSED3  = ISO_PWM_NONE,
    .PWM_UNUSED4  = ISO_PWM_NONE,
    .PWM_UNUSED5  = ISO_PWM_NONE,
    .PWM_UNUSED6  = ISO_PWM_NONE,
    .PWM_UNUSED7  = ISO_PWM_NONE,
    .PWM_UNUSED8  = ISO_PWM_NONE,
    .PWM_UNUSED9  = ISO_PWM_NONE,
    .PWM_UNUSED10 = ISO_PWM_NONE,
    .PWM_UNUSED11 = ISO_PWM_NONE,
    .PWM_UNUSED12 = ISO_PWM_NONE,
};

static const rtk_pwm_reg_map iso_pwm1_reg = {
    .ISO_CTRL = ISO_PWM1_CTRL_VADDR,
    .ISO_TIMING_CTRL = ISO_PWM1_TIMING_CTRL_VADDR,
    .ISO_DUTY_SET = ISO_PWM1_DUTY_SET_VADDR,
    .ALIGN_SET = ISO_PWM1_ALIGN_VADDR,
    .TRACKVALUE_SET = ISO_PWM1_TRACKVALUE_VADDR,
    .PWM_UNUSED1  = ISO_PWM_NONE,
    .PWM_UNUSED2  = ISO_PWM_NONE,
    .PWM_UNUSED3  = ISO_PWM_NONE,
    .PWM_UNUSED4  = ISO_PWM_NONE,
    .PWM_UNUSED5  = ISO_PWM_NONE,
    .PWM_UNUSED6  = ISO_PWM_NONE,
    .PWM_UNUSED7  = ISO_PWM_NONE,
    .PWM_UNUSED8  = ISO_PWM_NONE,
    .PWM_UNUSED9  = ISO_PWM_NONE,
    .PWM_UNUSED10 = ISO_PWM_NONE,
    .PWM_UNUSED11 = ISO_PWM_NONE,
    .PWM_UNUSED12 = ISO_PWM_NONE,
};

static const rtk_pwm_phy pwm_iso_phy[] = {
    {&iso_pwm0_reg},
    {&iso_pwm1_reg},
};

static const rtk_pwm_phy pwm_mis_phy[] = {
    {&mis_pwm0_reg},
    {&mis_pwm1_reg},
    {&mis_pwm2_reg},
    {&mis_pwm3_reg},
    {&mis_pwm4_reg},
    {&mis_pwm5_reg},
    {&mis_pwm6_reg},
    {&mis_pwm7_reg},
};
void PWM_ISO_INT_CTR_REG_R(iso_misc_int_ctrl_RBUS *pwm_iso_int_ctrl_reg);
void PWM_ISO_INT_CTR_REG_W(iso_misc_int_ctrl_RBUS *pwm_iso_int_ctrl_reg);
void PWM_VRR_DVSYNC_CTRL0_REG_R(ppoverlay_vrr_dvsync_dly_ctrl0_RBUS *pwm_vrr_dvsync_ctrl0_reg);
void PWM_VRR_DVSYNC_CTRL0_REG_W(ppoverlay_vrr_dvsync_dly_ctrl0_RBUS *pwm_vrr_dvsync_ctrl0_reg);
void PWM_VRR_DVSYNC_CTRL1_REG_R(ppoverlay_vrr_dvsync_dly_ctrl1_RBUS *pwm_vrr_dvsync_ctrl1_reg);
void PWM_VRR_DVSYNC_CTRL1_REG_W(ppoverlay_vrr_dvsync_dly_ctrl1_RBUS *pwm_vrr_dvsync_ctrl1_reg);
void M_PWM_SYS_CLKDIV_REG_R(int index,pwm_sys_clk_div_RBUS* pwm_sys_clkdiv_reg);
void M_PWM_SYS_CLKDIV_REG_W(int index,pwm_sys_clk_div_RBUS* pwm_sys_clkdiv_reg);
void M_PWM_DB0_CTRL_REG_R(int index,pwm_db0_ctrl_RBUS* pwm_mis_db0_ctrl_reg);
void M_PWM_DB0_CTRL_REG_W(int index,pwm_db0_ctrl_RBUS* pwm_mis_db0_ctrl_reg);
void M_PMM_DB1_CTRL_REG_R(int index,pwm_mis_db1_ctrl_RBUS* pwm_mis_db1_ctrl_reg);
void M_PWM_DB1_CTRL_REG_W(int index,pwm_mis_db1_ctrl_RBUS* pwm_mis_db1_ctrl_reg);
void M_PWM_CTRL_REG_R(int index,pwm_ctrl_RBUS* pwm_mis_ctrl_reg);
void M_PWM_CTRL_REG_W(int index,pwm_ctrl_RBUS* pwm_mis_ctrl_reg);
void M_PWM_TIMING_CTRL_REG_R(int index,pwm_timing_ctrl_RBUS* pwm_timing_ctrl_reg);
void M_PWM_TIMING_CTRL_REG_W(int index,pwm_timing_ctrl_RBUS* pwm_timing_ctrl_reg);
void M_PWM_DUTY_SET_REG_R(int index,pwm_duty_set_RBUS* pwm_duty_set_reg);
void M_PWM_DUTY_SET_REG_W(int index,pwm_duty_set_RBUS* pwm_duty_set_reg);
void M_PWM_DVS_PERIOD_REG_R(int index,pwm_mis_dvs_period_RBUS* pwm_dvs_period_reg);
void M_PWM_DVS_PERIOD_REG_W(int index,pwm_mis_dvs_period_RBUS* pwm_dvs_period_reg);
void M_PWM_DVS_MONITOR_REG_R(int index,pwm_mis_dvs_monitor_RBUS* pwm_dvs_monitor_reg);
void M_PWM_DVS_MONITOR_REG_W(int index,pwm_mis_dvs_monitor_RBUS* pwm_dvs_monitor_reg);
void M_PWM_MONITOR_REG_R(int index,pwm_mis_monitor_RBUS* pwm_monitor_reg);
void M_PWM_MONITOR_REG_W(int index,pwm_mis_monitor_RBUS* pwm_monitor_reg);
void M_PWM_ERR_STATUS_R(int index,pwm_mis_err_status_RBUS* pwm_err_status_reg);
void M_PWM_ERR_STATUS_W(int index,pwm_mis_err_status_RBUS* pwm_err_status_reg);
void M_PWM_TRACK_SET_REG_R(int index,pwm_mis_track_set_RBUS* pwm_track_set_reg);
void M_PWM_TRACK_SET_REG_W(int index,pwm_mis_track_set_RBUS* pwm_track_set_reg);
void M_PWM_TRACK_FSM_REG_R(int index,pwm_mis_track_fsm_RBUS* pwm_track_fsm_reg);
void M_PWM_TRACK_FSM_REG_W(int index,pwm_mis_track_fsm_RBUS* pwm_track_fsm_reg);
void M_PWM_TRACK_PTI_REG_R(int index,pwm_mis_track_pti_RBUS* pwm_track_pti_reg);
void M_PWM_TRACK_PTI_REG_W(int index,pwm_mis_track_pti_RBUS* pwm_track_pti_reg);
void M_PWM_FREQ_0_REG_R(int index,pwm_mis_freq_0_RBUS* pwm_freq_0_reg);
void M_PWM_FREQ_0_REG_W(int index,pwm_mis_freq_0_RBUS* pwm_freq_0_reg);
void M_PWM_FREQ_1_REG_R(int index,pwm_mis_freq_1_RBUS* pwm_freq_1_reg);
void M_PWM_FREQ_1_REG_W(int index,pwm_mis_freq_1_RBUS* pwm_freq_1_reg);
void M_PWM_PHASE_0_REG_R(int index,pwm_mis_phase_0_RBUS* pwm_phase_0_reg);
void M_PWM_PHASE_0_REG_W(int index,pwm_mis_phase_0_RBUS* pwm_phase_0_reg);
void M_PWM_PHASE_1_REG_R(int index,pwm_mis_phase_1_RBUS* pwm_phase_1_reg);
void M_PWM_PHASE_1_REG_W(int index,pwm_mis_phase_1_RBUS* pwm_phase_1_reg);
void M_PWM_HW_PREDICT_REG_R(int index,pwm_mis_hw_predict_RBUS* pwm_hw_predict_reg);
void M_PWM_HW_PREDICT_REG_W(int index,pwm_mis_hw_predict_RBUS* pwm_hw_predict_reg);
void M_PWM_SW_PREDICT_REG_R(int index,pwm_mis_sw_predict_RBUS* pwm_sw_predict_reg);
void M_PWM_SW_PREDICT_REG_W(int index,pwm_mis_sw_predict_RBUS* pwm_sw_predict_reg);
void M_PWM_PREDICT_RATIO_REG_R(int index,pwm_mis_predict_ratio_RBUS* pwm_predict_ratio_reg);
void M_PWM_PREDICT_RATIO_REG_W(int index,pwm_mis_predict_ratio_RBUS* pwm_predict_ratio_reg);
void I_PWM_DB_CTRL_REG_R(int index,pwm_db0_ctrl_RBUS* pwm_iso_db_ctrl_reg);
void I_PWM_DB_CTRL_REG_W(int index,pwm_db0_ctrl_RBUS* pwm_iso_db_ctrl_reg);
void I_PWM_CTRL_REG_R(int index,pwm_ctrl_RBUS* pwm_iso_ctrl_reg);
void I_PWM_CTRL_REG_W(int index,pwm_ctrl_RBUS* pwm_iso_ctrl_reg);
void I_PWM_TIMING_CTRL_REG_R(int index,pwm_timing_ctrl_RBUS* pwm_timing_ctrl_reg);
void I_PWM_TIMING_CTRL_REG_W(int index,pwm_timing_ctrl_RBUS* pwm_timing_ctrl_reg);
void I_PWM_DUTY_SET_REG_R(int index,pwm_duty_set_RBUS* pwm_duty_set_reg);
void I_PWM_DUTY_SET_REG_W(int index,pwm_duty_set_RBUS* pwm_duty_set_reg);

#endif
