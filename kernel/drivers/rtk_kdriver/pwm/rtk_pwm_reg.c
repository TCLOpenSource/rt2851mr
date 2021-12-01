#include <rtk_kdriver/rtk_pwm-reg.h>

#define rtk_pwm_mr(index,reg)      rtd_inl(pwm_mis_phy[index].p_reg_map->reg);
#define rtk_pwm_mw(index,reg,name) rtd_outl(pwm_mis_phy[index].p_reg_map->reg,name->regValue);

void PWM_ISO_INT_CTR_REG_R(iso_misc_int_ctrl_RBUS *pwm_iso_int_ctrl_reg)
{    pwm_iso_int_ctrl_reg->regValue = rtd_inl(PWM_ISO_INT_CTRL);}

void PWM_ISO_INT_CTR_REG_W(iso_misc_int_ctrl_RBUS *pwm_iso_int_ctrl_reg)
{    rtd_outl(PWM_ISO_INT_CTRL,pwm_iso_int_ctrl_reg->regValue);}

void PWM_VRR_DVSYNC_CTRL0_REG_R(ppoverlay_vrr_dvsync_dly_ctrl0_RBUS *pwm_vrr_dvsync_ctrl0_reg)
{    pwm_vrr_dvsync_ctrl0_reg->regValue = rtd_inl(PWM_VRR_DVSYNC_CTRL0);}

void PWM_VRR_DVSYNC_CTRL0_REG_W(ppoverlay_vrr_dvsync_dly_ctrl0_RBUS *pwm_vrr_dvsync_ctrl0_reg)
{    rtd_outl(PWM_VRR_DVSYNC_CTRL0,pwm_vrr_dvsync_ctrl0_reg->regValue);}

void PWM_VRR_DVSYNC_CTRL1_REG_R(ppoverlay_vrr_dvsync_dly_ctrl1_RBUS *pwm_vrr_dvsync_ctrl1_reg)
{    pwm_vrr_dvsync_ctrl1_reg->regValue = rtd_inl(PWM_VRR_DVSYNC_CTRL1);}

void PWM_VRR_DVSYNC_CTRL1_REG_W(ppoverlay_vrr_dvsync_dly_ctrl1_RBUS *pwm_vrr_dvsync_ctrl1_reg)
{    rtd_outl(PWM_VRR_DVSYNC_CTRL1,pwm_vrr_dvsync_ctrl1_reg->regValue);}

void M_PWM_SYS_CLKDIV_REG_R(int index,pwm_sys_clk_div_RBUS* pwm_sys_clkdiv_reg)
{    pwm_sys_clkdiv_reg->regValue = rtd_inl(PWM_SYS_CLKDIV);    }

void M_PWM_SYS_CLKDIV_REG_W(int index,pwm_sys_clk_div_RBUS* pwm_sys_clkdiv_reg)
{    rtd_outl(PWM_SYS_CLKDIV,pwm_sys_clkdiv_reg->regValue);     }

void M_PWM_DB0_CTRL_REG_R(int index,pwm_db0_ctrl_RBUS* pwm_mis_db0_ctrl_reg)
{    pwm_mis_db0_ctrl_reg->regValue = rtd_inl(MIS_PWM_DB0_CTRL_VADDR);    }

void M_PWM_DB0_CTRL_REG_W(int index,pwm_db0_ctrl_RBUS* pwm_mis_db0_ctrl_reg)
{    rtd_outl(MIS_PWM_DB0_CTRL_VADDR,pwm_mis_db0_ctrl_reg->regValue);     }

void M_PWM_DB1_CTRL_REG_R(int index,pwm_mis_db1_ctrl_RBUS* pwm_mis_db1_ctrl_reg)
{    pwm_mis_db1_ctrl_reg->regValue = rtd_inl(MIS_PWM_DB1_CTRL_VADDR);    }

void M_PWM_DB1_CTRL_REG_W(int index,pwm_mis_db1_ctrl_RBUS* pwm_mis_db1_ctrl_reg)
{    rtd_outl(MIS_PWM_DB1_CTRL_VADDR,pwm_mis_db1_ctrl_reg->regValue );    }

void M_PWM_CTRL_REG_R(int index,pwm_ctrl_RBUS* pwm_mis_ctrl_reg)
{    pwm_mis_ctrl_reg->regValue = rtk_pwm_mr(index,MISC_CTRL);    }

void M_PWM_CTRL_REG_W(int index,pwm_ctrl_RBUS* pwm_mis_ctrl_reg)
{    rtk_pwm_mw(index,MISC_CTRL,pwm_mis_ctrl_reg);    }

void M_PWM_TIMING_CTRL_REG_R(int index,pwm_timing_ctrl_RBUS* pwm_timing_ctrl_reg)
{    pwm_timing_ctrl_reg->regValue = rtk_pwm_mr(index,MISC_TIMING_CTRL);    }

void M_PWM_TIMING_CTRL_REG_W(int index,pwm_timing_ctrl_RBUS* pwm_timing_ctrl_reg)
{    rtk_pwm_mw(index,MISC_TIMING_CTRL,pwm_timing_ctrl_reg);    }

void M_PWM_DUTY_SET_REG_R(int index,pwm_duty_set_RBUS* pwm_duty_set_reg)
{    pwm_duty_set_reg->regValue = rtk_pwm_mr(index,MISC_DUTY_SET);    }

void M_PWM_DUTY_SET_REG_W(int index,pwm_duty_set_RBUS* pwm_duty_set_reg)
{    rtk_pwm_mw(index,MISC_DUTY_SET,pwm_duty_set_reg);    }

void M_PWM_DVS_PERIOD_REG_R(int index,pwm_mis_dvs_period_RBUS* pwm_dvs_period_reg)
{    pwm_dvs_period_reg->regValue = rtk_pwm_mr(index,DVS_PERIOD);    }

void M_PWM_DVS_PERIOD_REG_W(int index,pwm_mis_dvs_period_RBUS* pwm_dvs_period_reg)
{    rtk_pwm_mw(index,DVS_PERIOD,pwm_dvs_period_reg);    }

void M_PWM_DVS_MONITOR_REG_R(int index,pwm_mis_dvs_monitor_RBUS* pwm_dvs_monitor_reg)
{    pwm_dvs_monitor_reg->regValue = rtk_pwm_mr(index,DV_MONITOR);    }

void M_PWM_DVS_MONITOR_REG_W(int index,pwm_mis_dvs_monitor_RBUS* pwm_dvs_monitor_reg)
{    rtk_pwm_mw(index,DV_MONITOR,pwm_dvs_monitor_reg);    }

void M_PWM_MONITOR_REG_R(int index,pwm_mis_monitor_RBUS* pwm_monitor_reg)
{    pwm_monitor_reg->regValue = rtk_pwm_mr(index,MONITOR);    }

void M_PWM_MONITOR_REG_W(int index,pwm_mis_monitor_RBUS* pwm_monitor_reg)
{    rtk_pwm_mw(index,MONITOR,pwm_monitor_reg);    }

void M_PWM_ERR_STATUS_R(int index,pwm_mis_err_status_RBUS* pwm_err_status_reg)
{    pwm_err_status_reg->regValue = rtk_pwm_mr(index,ERR_STATUS);    }

void M_PWM_ERR_STATUS_W(int index,pwm_mis_err_status_RBUS* pwm_err_status_reg)
{    rtk_pwm_mw(index,ERR_STATUS,pwm_err_status_reg);    }

void M_PWM_TRACK_SET_REG_R(int index,pwm_mis_track_set_RBUS* pwm_track_set_reg)
{    pwm_track_set_reg->regValue = rtk_pwm_mr(index,TRACK_SET);    }

void M_PWM_TRACK_SET_REG_W(int index,pwm_mis_track_set_RBUS* pwm_track_set_reg)
{    rtk_pwm_mw(index,TRACK_SET,pwm_track_set_reg);    }

void M_PWM_TRACK_FSM_REG_R(int index,pwm_mis_track_fsm_RBUS* pwm_track_fsm_reg)
{    pwm_track_fsm_reg->regValue = rtk_pwm_mr(index,TRACK_FSM);    }

void M_PWM_TRACK_FSM_REG_W(int index,pwm_mis_track_fsm_RBUS* pwm_track_fsm_reg)
{    rtk_pwm_mw(index,TRACK_FSM,pwm_track_fsm_reg);    }

void M_PWM_TRACK_PTI_REG_R(int index,pwm_mis_track_pti_RBUS* pwm_track_pti_reg)
{    pwm_track_pti_reg->regValue = rtk_pwm_mr(index,TRACK_PTI);    }

void M_PWM_TRACK_PTI_REG_W(int index,pwm_mis_track_pti_RBUS* pwm_track_pti_reg)
{    rtk_pwm_mw(index,TRACK_PTI,pwm_track_pti_reg);    }

void M_PWM_FREQ_0_REG_R(int index,pwm_mis_freq_0_RBUS* pwm_freq_0_reg)
{    pwm_freq_0_reg->regValue = rtk_pwm_mr(index,FREQ0_SET);    }

void M_PWM_FREQ_0_REG_W(int index,pwm_mis_freq_0_RBUS* pwm_freq_0_reg)
{    rtk_pwm_mw(index,FREQ0_SET,pwm_freq_0_reg);    }

void M_PWM_FREQ_1_REG_R(int index,pwm_mis_freq_1_RBUS* pwm_freq_1_reg)
{    pwm_freq_1_reg->regValue = rtk_pwm_mr(index,FREQ1_SET);    }

void M_PWM_FREQ_1_REG_W(int index,pwm_mis_freq_1_RBUS* pwm_freq_1_reg)
{    rtk_pwm_mw(index,FREQ1_SET,pwm_freq_1_reg);    }

void M_PWM_PHASE_0_REG_R(int index,pwm_mis_phase_0_RBUS* pwm_phase_0_reg)
{    pwm_phase_0_reg->regValue = rtk_pwm_mr(index,PHASE0_SET);    }

void M_PWM_PHASE_0_REG_W(int index,pwm_mis_phase_0_RBUS* pwm_phase_0_reg)
{    rtk_pwm_mw(index,PHASE0_SET,pwm_phase_0_reg);    }

void M_PWM_PHASE_1_REG_R(int index,pwm_mis_phase_1_RBUS* pwm_phase_1_reg)
{    pwm_phase_1_reg->regValue = rtk_pwm_mr(index,PHASE1_SET);    }

void M_PWM_PHASE_1_REG_W(int index,pwm_mis_phase_1_RBUS* pwm_phase_1_reg)
{    rtk_pwm_mw(index,PHASE1_SET,pwm_phase_1_reg);    }

void M_PWM_HW_PREDICT_REG_R(int index,pwm_mis_hw_predict_RBUS* pwm_hw_predict_reg)
{    pwm_hw_predict_reg->regValue = rtk_pwm_mr(index,HW_PREDICT);    }

void M_PWM_HW_PREDICT_REG_W(int index,pwm_mis_hw_predict_RBUS* pwm_hw_predict_reg)
{    rtk_pwm_mw(index,HW_PREDICT,pwm_hw_predict_reg);    }

void M_PWM_SW_PREDICT_REG_R(int index,pwm_mis_sw_predict_RBUS* pwm_sw_predict_reg)
{    pwm_sw_predict_reg->regValue = rtk_pwm_mr(index,SW_PREDICT);    }

void M_PWM_SW_PREDICT_REG_W(int index,pwm_mis_sw_predict_RBUS* pwm_sw_predict_reg)
{    rtk_pwm_mw(index,SW_PREDICT,pwm_sw_predict_reg);    }

void M_PWM_PREDICT_RATIO_REG_R(int index,pwm_mis_predict_ratio_RBUS* pwm_predict_ratio_reg)
{    pwm_predict_ratio_reg->regValue = rtk_pwm_mr(index,PREDICT_RATIO);    }

void M_PWM_PREDICT_RATIO_REG_W(int index,pwm_mis_predict_ratio_RBUS* pwm_predict_ratio_reg)
{    rtk_pwm_mw(index,PREDICT_RATIO,pwm_predict_ratio_reg);    }

//ISO
#define rtk_pwm_ir(index,reg)      rtd_inl(pwm_iso_phy[index].p_reg_map->reg);
#define rtk_pwm_iw(index,reg,name) rtd_outl(pwm_iso_phy[index].p_reg_map->reg,name->regValue);
void I_PWM_DB_CTRL_REG_R(int index,pwm_db0_ctrl_RBUS* pwm_iso_db_ctrl_reg)
{    pwm_iso_db_ctrl_reg->regValue = rtd_inl(ISO_PWM_DB_CTRL_VADDR);    }

void I_PWM_DB_CTRL_REG_W(int index,pwm_db0_ctrl_RBUS* pwm_iso_db_ctrl_reg)
{    rtd_outl(ISO_PWM_DB_CTRL_VADDR,pwm_iso_db_ctrl_reg->regValue);     }

void I_PWM_CTRL_REG_R(int index,pwm_ctrl_RBUS* pwm_iso_ctrl_reg)
{    pwm_iso_ctrl_reg->regValue = rtk_pwm_ir(index,ISO_CTRL);    }

void I_PWM_CTRL_REG_W(int index,pwm_ctrl_RBUS* pwm_iso_ctrl_reg)
{    rtk_pwm_iw(index,ISO_CTRL,pwm_iso_ctrl_reg);    }

void I_PWM_TIMING_CTRL_REG_R(int index,pwm_timing_ctrl_RBUS* pwm_timing_ctrl_reg)
{    pwm_timing_ctrl_reg->regValue = rtk_pwm_ir(index,ISO_TIMING_CTRL);    }

void I_PWM_TIMING_CTRL_REG_W(int index,pwm_timing_ctrl_RBUS* pwm_timing_ctrl_reg)
{    rtk_pwm_iw(index,ISO_TIMING_CTRL,pwm_timing_ctrl_reg);    }

void I_PWM_DUTY_SET_REG_R(int index,pwm_duty_set_RBUS* pwm_duty_set_reg)
{    pwm_duty_set_reg->regValue = rtk_pwm_ir(index,ISO_DUTY_SET);    }

void I_PWM_DUTY_SET_REG_W(int index,pwm_duty_set_RBUS* pwm_duty_set_reg)
{    rtk_pwm_iw(index,ISO_DUTY_SET,pwm_duty_set_reg);    }