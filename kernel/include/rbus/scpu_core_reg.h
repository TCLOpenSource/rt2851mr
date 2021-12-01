/**
* @file Merlin5-DesignSpec-SCPU_Core_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SCPU_CORE_REG_H_
#define _RBUS_SCPU_CORE_REG_H_

#include "rbus_types.h"



//  SCPU_CORE Register Address
#define  SCPU_CORE_sys_pll_scpu1                                                0x1805B000
#define  SCPU_CORE_sys_pll_scpu1_reg_addr                                        "0xB805B000"
#define  SCPU_CORE_sys_pll_scpu1_reg                                             0xB805B000
#define  SCPU_CORE_sys_pll_scpu1_inst_addr                                       "0x0000"
#define  set_SCPU_CORE_sys_pll_scpu1_reg(data)                                   (*((volatile unsigned int*)SCPU_CORE_sys_pll_scpu1_reg)=data)
#define  get_SCPU_CORE_sys_pll_scpu1_reg                                         (*((volatile unsigned int*)SCPU_CORE_sys_pll_scpu1_reg))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_pi_bps_shift                            (24)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_wd_set_shift                            (21)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_wd_rst_shift                            (20)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_prediv_sel_shift                        (18)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_lpf_cs_shift                            (16)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_lpf_cp_shift                            (15)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_testsel_shift                           (13)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_icp_shift                               (8)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_pdiv_bps_shift                          (6)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_pdiv_shift                              (4)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_lpf_rs_shift                            (0)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_pi_bps_mask                             (0x01000000)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_wd_set_mask                             (0x00200000)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_wd_rst_mask                             (0x00100000)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_prediv_sel_mask                         (0x000C0000)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_lpf_cs_mask                             (0x00030000)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_lpf_cp_mask                             (0x00008000)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_testsel_mask                            (0x00006000)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_icp_mask                                (0x00000700)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_pdiv_bps_mask                           (0x00000040)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_pdiv_mask                               (0x00000030)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_lpf_rs_mask                             (0x00000007)
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_pi_bps(data)                            (0x01000000&((data)<<24))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_wd_set(data)                            (0x00200000&((data)<<21))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_wd_rst(data)                            (0x00100000&((data)<<20))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_prediv_sel(data)                        (0x000C0000&((data)<<18))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_lpf_cs(data)                            (0x00030000&((data)<<16))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_lpf_cp(data)                            (0x00008000&((data)<<15))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_testsel(data)                           (0x00006000&((data)<<13))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_icp(data)                               (0x00000700&((data)<<8))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_pdiv_bps(data)                          (0x00000040&((data)<<6))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_pdiv(data)                              (0x00000030&((data)<<4))
#define  SCPU_CORE_sys_pll_scpu1_pllscpu_lpf_rs(data)                            (0x00000007&(data))
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_pi_bps(data)                        ((0x01000000&(data))>>24)
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_wd_set(data)                        ((0x00200000&(data))>>21)
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_wd_rst(data)                        ((0x00100000&(data))>>20)
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_prediv_sel(data)                    ((0x000C0000&(data))>>18)
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_lpf_cs(data)                        ((0x00030000&(data))>>16)
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_lpf_cp(data)                        ((0x00008000&(data))>>15)
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_testsel(data)                       ((0x00006000&(data))>>13)
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_icp(data)                           ((0x00000700&(data))>>8)
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_pdiv_bps(data)                      ((0x00000040&(data))>>6)
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_pdiv(data)                          ((0x00000030&(data))>>4)
#define  SCPU_CORE_sys_pll_scpu1_get_pllscpu_lpf_rs(data)                        (0x00000007&(data))

#define  SCPU_CORE_sys_pll_scpu2                                                0x1805B004
#define  SCPU_CORE_sys_pll_scpu2_reg_addr                                        "0xB805B004"
#define  SCPU_CORE_sys_pll_scpu2_reg                                             0xB805B004
#define  SCPU_CORE_sys_pll_scpu2_inst_addr                                       "0x0001"
#define  set_SCPU_CORE_sys_pll_scpu2_reg(data)                                   (*((volatile unsigned int*)SCPU_CORE_sys_pll_scpu2_reg)=data)
#define  get_SCPU_CORE_sys_pll_scpu2_reg                                         (*((volatile unsigned int*)SCPU_CORE_sys_pll_scpu2_reg))
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_fcode_shift                             (16)
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_ncode_shift                             (8)
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_oeb_shift                               (2)
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_rstb_shift                              (1)
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_pow_shift                               (0)
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_fcode_mask                              (0x07FF0000)
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_ncode_mask                              (0x0000FF00)
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_oeb_mask                                (0x00000004)
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_rstb_mask                               (0x00000002)
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_pow_mask                                (0x00000001)
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_fcode(data)                             (0x07FF0000&((data)<<16))
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_ncode(data)                             (0x0000FF00&((data)<<8))
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_oeb(data)                               (0x00000004&((data)<<2))
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_rstb(data)                              (0x00000002&((data)<<1))
#define  SCPU_CORE_sys_pll_scpu2_pllscpu_pow(data)                               (0x00000001&(data))
#define  SCPU_CORE_sys_pll_scpu2_get_pllscpu_fcode(data)                         ((0x07FF0000&(data))>>16)
#define  SCPU_CORE_sys_pll_scpu2_get_pllscpu_ncode(data)                         ((0x0000FF00&(data))>>8)
#define  SCPU_CORE_sys_pll_scpu2_get_pllscpu_oeb(data)                           ((0x00000004&(data))>>2)
#define  SCPU_CORE_sys_pll_scpu2_get_pllscpu_rstb(data)                          ((0x00000002&(data))>>1)
#define  SCPU_CORE_sys_pll_scpu2_get_pllscpu_pow(data)                           (0x00000001&(data))

#define  SCPU_CORE_sys_scpu_dvfs                                                0x1805B008
#define  SCPU_CORE_sys_scpu_dvfs_reg_addr                                        "0xB805B008"
#define  SCPU_CORE_sys_scpu_dvfs_reg                                             0xB805B008
#define  SCPU_CORE_sys_scpu_dvfs_inst_addr                                       "0x0002"
#define  set_SCPU_CORE_sys_scpu_dvfs_reg(data)                                   (*((volatile unsigned int*)SCPU_CORE_sys_scpu_dvfs_reg)=data)
#define  get_SCPU_CORE_sys_scpu_dvfs_reg                                         (*((volatile unsigned int*)SCPU_CORE_sys_scpu_dvfs_reg))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_bypass_pi_shift                         (31)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_en_pi_debug_shift                       (30)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_hs_oc_stop_shift                        (28)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_pi_cur_sel_shift                        (26)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_sel_oc_mode_shift                       (24)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_ldo10v_sel_shift                        (22)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_ldo10v_vref_sel_shift                   (21)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_fastsel_shift                           (20)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_oc_done_delay_shift                     (14)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_oc_step_shift                           (4)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_sdm_order_shift                         (2)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_oc_en_shift                             (0)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_bypass_pi_mask                          (0x80000000)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_en_pi_debug_mask                        (0x40000000)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_hs_oc_stop_mask                         (0x30000000)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_pi_cur_sel_mask                         (0x0C000000)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_sel_oc_mode_mask                        (0x03000000)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_ldo10v_sel_mask                         (0x00C00000)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_ldo10v_vref_sel_mask                    (0x00200000)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_fastsel_mask                            (0x00100000)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_oc_done_delay_mask                      (0x000FC000)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_oc_step_mask                            (0x00003FF0)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_sdm_order_mask                          (0x00000004)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_oc_en_mask                              (0x00000001)
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_bypass_pi(data)                         (0x80000000&((data)<<31))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_en_pi_debug(data)                       (0x40000000&((data)<<30))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_hs_oc_stop(data)                        (0x30000000&((data)<<28))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_pi_cur_sel(data)                        (0x0C000000&((data)<<26))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_sel_oc_mode(data)                       (0x03000000&((data)<<24))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_ldo10v_sel(data)                        (0x00C00000&((data)<<22))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_ldo10v_vref_sel(data)                   (0x00200000&((data)<<21))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_fastsel(data)                           (0x00100000&((data)<<20))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_oc_done_delay(data)                     (0x000FC000&((data)<<14))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_oc_step(data)                           (0x00003FF0&((data)<<4))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_sdm_order(data)                         (0x00000004&((data)<<2))
#define  SCPU_CORE_sys_scpu_dvfs_pllscpu_oc_en(data)                             (0x00000001&(data))
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_bypass_pi(data)                     ((0x80000000&(data))>>31)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_en_pi_debug(data)                   ((0x40000000&(data))>>30)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_hs_oc_stop(data)                    ((0x30000000&(data))>>28)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_pi_cur_sel(data)                    ((0x0C000000&(data))>>26)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_sel_oc_mode(data)                   ((0x03000000&(data))>>24)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_ldo10v_sel(data)                    ((0x00C00000&(data))>>22)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_ldo10v_vref_sel(data)               ((0x00200000&(data))>>21)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_fastsel(data)                       ((0x00100000&(data))>>20)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_oc_done_delay(data)                 ((0x000FC000&(data))>>14)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_oc_step(data)                       ((0x00003FF0&(data))>>4)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_sdm_order(data)                     ((0x00000004&(data))>>2)
#define  SCPU_CORE_sys_scpu_dvfs_get_pllscpu_oc_en(data)                         (0x00000001&(data))

#define  SCPU_CORE_sys_scpu_status                                              0x1805B00C
#define  SCPU_CORE_sys_scpu_status_reg_addr                                      "0xB805B00C"
#define  SCPU_CORE_sys_scpu_status_reg                                           0xB805B00C
#define  SCPU_CORE_sys_scpu_status_inst_addr                                     "0x0003"
#define  set_SCPU_CORE_sys_scpu_status_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_sys_scpu_status_reg)=data)
#define  get_SCPU_CORE_sys_scpu_status_reg                                       (*((volatile unsigned int*)SCPU_CORE_sys_scpu_status_reg))
#define  SCPU_CORE_sys_scpu_status_pllscpu_wdout_ro_shift                        (21)
#define  SCPU_CORE_sys_scpu_status_pllscpu_oc_done_ro_shift                      (20)
#define  SCPU_CORE_sys_scpu_status_pllscpu_ncode_dbg_ro_shift                    (12)
#define  SCPU_CORE_sys_scpu_status_pllscpu_fcode_dbg_ro_shift                    (1)
#define  SCPU_CORE_sys_scpu_status_pllscpu_dfvs_fmod_dbg_shift                   (0)
#define  SCPU_CORE_sys_scpu_status_pllscpu_wdout_ro_mask                         (0x00200000)
#define  SCPU_CORE_sys_scpu_status_pllscpu_oc_done_ro_mask                       (0x00100000)
#define  SCPU_CORE_sys_scpu_status_pllscpu_ncode_dbg_ro_mask                     (0x000FF000)
#define  SCPU_CORE_sys_scpu_status_pllscpu_fcode_dbg_ro_mask                     (0x00000FFE)
#define  SCPU_CORE_sys_scpu_status_pllscpu_dfvs_fmod_dbg_mask                    (0x00000001)
#define  SCPU_CORE_sys_scpu_status_pllscpu_wdout_ro(data)                        (0x00200000&((data)<<21))
#define  SCPU_CORE_sys_scpu_status_pllscpu_oc_done_ro(data)                      (0x00100000&((data)<<20))
#define  SCPU_CORE_sys_scpu_status_pllscpu_ncode_dbg_ro(data)                    (0x000FF000&((data)<<12))
#define  SCPU_CORE_sys_scpu_status_pllscpu_fcode_dbg_ro(data)                    (0x00000FFE&((data)<<1))
#define  SCPU_CORE_sys_scpu_status_pllscpu_dfvs_fmod_dbg(data)                   (0x00000001&(data))
#define  SCPU_CORE_sys_scpu_status_get_pllscpu_wdout_ro(data)                    ((0x00200000&(data))>>21)
#define  SCPU_CORE_sys_scpu_status_get_pllscpu_oc_done_ro(data)                  ((0x00100000&(data))>>20)
#define  SCPU_CORE_sys_scpu_status_get_pllscpu_ncode_dbg_ro(data)                ((0x000FF000&(data))>>12)
#define  SCPU_CORE_sys_scpu_status_get_pllscpu_fcode_dbg_ro(data)                ((0x00000FFE&(data))>>1)
#define  SCPU_CORE_sys_scpu_status_get_pllscpu_dfvs_fmod_dbg(data)               (0x00000001&(data))

#define  SCPU_CORE_sys_scpu_reserve                                             0x1805B010
#define  SCPU_CORE_sys_scpu_reserve_reg_addr                                     "0xB805B010"
#define  SCPU_CORE_sys_scpu_reserve_reg                                          0xB805B010
#define  SCPU_CORE_sys_scpu_reserve_inst_addr                                    "0x0004"
#define  set_SCPU_CORE_sys_scpu_reserve_reg(data)                                (*((volatile unsigned int*)SCPU_CORE_sys_scpu_reserve_reg)=data)
#define  get_SCPU_CORE_sys_scpu_reserve_reg                                      (*((volatile unsigned int*)SCPU_CORE_sys_scpu_reserve_reg))
#define  SCPU_CORE_sys_scpu_reserve_pllscpu_reserve_shift                        (0)
#define  SCPU_CORE_sys_scpu_reserve_pllscpu_reserve_mask                         (0x0000003F)
#define  SCPU_CORE_sys_scpu_reserve_pllscpu_reserve(data)                        (0x0000003F&(data))
#define  SCPU_CORE_sys_scpu_reserve_get_pllscpu_reserve(data)                    (0x0000003F&(data))

#define  SCPU_CORE_sys_scpu_ckinv                                               0x1805B040
#define  SCPU_CORE_sys_scpu_ckinv_reg_addr                                       "0xB805B040"
#define  SCPU_CORE_sys_scpu_ckinv_reg                                            0xB805B040
#define  SCPU_CORE_sys_scpu_ckinv_inst_addr                                      "0x0005"
#define  set_SCPU_CORE_sys_scpu_ckinv_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_sys_scpu_ckinv_reg)=data)
#define  get_SCPU_CORE_sys_scpu_ckinv_reg                                        (*((volatile unsigned int*)SCPU_CORE_sys_scpu_ckinv_reg))
#define  SCPU_CORE_sys_scpu_ckinv_scpu_ssc_ckinv_shift                           (0)
#define  SCPU_CORE_sys_scpu_ckinv_scpu_ssc_ckinv_mask                            (0x00000001)
#define  SCPU_CORE_sys_scpu_ckinv_scpu_ssc_ckinv(data)                           (0x00000001&(data))
#define  SCPU_CORE_sys_scpu_ckinv_get_scpu_ssc_ckinv(data)                       (0x00000001&(data))

#define  SCPU_CORE_sys_scpu_clkratio_ctrl_0                                     0x1805B044
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_0_reg_addr                             "0xB805B044"
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_0_reg                                  0xB805B044
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_0_inst_addr                            "0x0006"
#define  set_SCPU_CORE_sys_scpu_clkratio_ctrl_0_reg(data)                        (*((volatile unsigned int*)SCPU_CORE_sys_scpu_clkratio_ctrl_0_reg)=data)
#define  get_SCPU_CORE_sys_scpu_clkratio_ctrl_0_reg                              (*((volatile unsigned int*)SCPU_CORE_sys_scpu_clkratio_ctrl_0_reg))
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_0_clkratio_scpu_shift                  (0)
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_0_clkratio_scpu_mask                   (0x0000001F)
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_0_clkratio_scpu(data)                  (0x0000001F&(data))
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_0_get_clkratio_scpu(data)              (0x0000001F&(data))

#define  SCPU_CORE_sys_scpu_clkratio_ctrl_1                                     0x1805B048
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_1_reg_addr                             "0xB805B048"
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_1_reg                                  0xB805B048
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_1_inst_addr                            "0x0007"
#define  set_SCPU_CORE_sys_scpu_clkratio_ctrl_1_reg(data)                        (*((volatile unsigned int*)SCPU_CORE_sys_scpu_clkratio_ctrl_1_reg)=data)
#define  get_SCPU_CORE_sys_scpu_clkratio_ctrl_1_reg                              (*((volatile unsigned int*)SCPU_CORE_sys_scpu_clkratio_ctrl_1_reg))
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_1_clkratio_scpu_active_shift           (0)
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_1_clkratio_scpu_active_mask            (0x00000001)
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_1_clkratio_scpu_active(data)           (0x00000001&(data))
#define  SCPU_CORE_sys_scpu_clkratio_ctrl_1_get_clkratio_scpu_active(data)       (0x00000001&(data))

#define  SCPU_CORE_sys_scpu_clken                                               0x1805B04C
#define  SCPU_CORE_sys_scpu_clken_reg_addr                                       "0xB805B04C"
#define  SCPU_CORE_sys_scpu_clken_reg                                            0xB805B04C
#define  SCPU_CORE_sys_scpu_clken_inst_addr                                      "0x0008"
#define  set_SCPU_CORE_sys_scpu_clken_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_sys_scpu_clken_reg)=data)
#define  get_SCPU_CORE_sys_scpu_clken_reg                                        (*((volatile unsigned int*)SCPU_CORE_sys_scpu_clken_reg))
#define  SCPU_CORE_sys_scpu_clken_clken_dss_shift                                (14)
#define  SCPU_CORE_sys_scpu_clken_clken_top_atb_shift                            (10)
#define  SCPU_CORE_sys_scpu_clken_clken_top_apb_shift                            (9)
#define  SCPU_CORE_sys_scpu_clken_clken_top_periph_shift                         (8)
#define  SCPU_CORE_sys_scpu_clken_clken_top_gic_shift                            (7)
#define  SCPU_CORE_sys_scpu_clken_clken_ananke_shift                             (6)
#define  SCPU_CORE_sys_scpu_clken_clken_scpu_top_logic_shift                     (2)
#define  SCPU_CORE_sys_scpu_clken_clken_top_ts_shift                             (0)
#define  SCPU_CORE_sys_scpu_clken_clken_dss_mask                                 (0x00004000)
#define  SCPU_CORE_sys_scpu_clken_clken_top_atb_mask                             (0x00000400)
#define  SCPU_CORE_sys_scpu_clken_clken_top_apb_mask                             (0x00000200)
#define  SCPU_CORE_sys_scpu_clken_clken_top_periph_mask                          (0x00000100)
#define  SCPU_CORE_sys_scpu_clken_clken_top_gic_mask                             (0x00000080)
#define  SCPU_CORE_sys_scpu_clken_clken_ananke_mask                              (0x00000040)
#define  SCPU_CORE_sys_scpu_clken_clken_scpu_top_logic_mask                      (0x00000004)
#define  SCPU_CORE_sys_scpu_clken_clken_top_ts_mask                              (0x00000001)
#define  SCPU_CORE_sys_scpu_clken_clken_dss(data)                                (0x00004000&((data)<<14))
#define  SCPU_CORE_sys_scpu_clken_clken_top_atb(data)                            (0x00000400&((data)<<10))
#define  SCPU_CORE_sys_scpu_clken_clken_top_apb(data)                            (0x00000200&((data)<<9))
#define  SCPU_CORE_sys_scpu_clken_clken_top_periph(data)                         (0x00000100&((data)<<8))
#define  SCPU_CORE_sys_scpu_clken_clken_top_gic(data)                            (0x00000080&((data)<<7))
#define  SCPU_CORE_sys_scpu_clken_clken_ananke(data)                             (0x00000040&((data)<<6))
#define  SCPU_CORE_sys_scpu_clken_clken_scpu_top_logic(data)                     (0x00000004&((data)<<2))
#define  SCPU_CORE_sys_scpu_clken_clken_top_ts(data)                             (0x00000001&(data))
#define  SCPU_CORE_sys_scpu_clken_get_clken_dss(data)                            ((0x00004000&(data))>>14)
#define  SCPU_CORE_sys_scpu_clken_get_clken_top_atb(data)                        ((0x00000400&(data))>>10)
#define  SCPU_CORE_sys_scpu_clken_get_clken_top_apb(data)                        ((0x00000200&(data))>>9)
#define  SCPU_CORE_sys_scpu_clken_get_clken_top_periph(data)                     ((0x00000100&(data))>>8)
#define  SCPU_CORE_sys_scpu_clken_get_clken_top_gic(data)                        ((0x00000080&(data))>>7)
#define  SCPU_CORE_sys_scpu_clken_get_clken_ananke(data)                         ((0x00000040&(data))>>6)
#define  SCPU_CORE_sys_scpu_clken_get_clken_scpu_top_logic(data)                 ((0x00000004&(data))>>2)
#define  SCPU_CORE_sys_scpu_clken_get_clken_top_ts(data)                         (0x00000001&(data))

#define  SCPU_CORE_sys_scpu_clkdiv_sel                                          0x1805B050
#define  SCPU_CORE_sys_scpu_clkdiv_sel_reg_addr                                  "0xB805B050"
#define  SCPU_CORE_sys_scpu_clkdiv_sel_reg                                       0xB805B050
#define  SCPU_CORE_sys_scpu_clkdiv_sel_inst_addr                                 "0x0009"
#define  set_SCPU_CORE_sys_scpu_clkdiv_sel_reg(data)                             (*((volatile unsigned int*)SCPU_CORE_sys_scpu_clkdiv_sel_reg)=data)
#define  get_SCPU_CORE_sys_scpu_clkdiv_sel_reg                                   (*((volatile unsigned int*)SCPU_CORE_sys_scpu_clkdiv_sel_reg))
#define  SCPU_CORE_sys_scpu_clkdiv_sel_trc_clk_delay_shift                       (2)
#define  SCPU_CORE_sys_scpu_clkdiv_sel_trc_clkdiv_sel_shift                      (0)
#define  SCPU_CORE_sys_scpu_clkdiv_sel_trc_clk_delay_mask                        (0x0000003C)
#define  SCPU_CORE_sys_scpu_clkdiv_sel_trc_clkdiv_sel_mask                       (0x00000003)
#define  SCPU_CORE_sys_scpu_clkdiv_sel_trc_clk_delay(data)                       (0x0000003C&((data)<<2))
#define  SCPU_CORE_sys_scpu_clkdiv_sel_trc_clkdiv_sel(data)                      (0x00000003&(data))
#define  SCPU_CORE_sys_scpu_clkdiv_sel_get_trc_clk_delay(data)                   ((0x0000003C&(data))>>2)
#define  SCPU_CORE_sys_scpu_clkdiv_sel_get_trc_clkdiv_sel(data)                  (0x00000003&(data))

#define  SCPU_CORE_sys_scpu_rst                                                 0x1805B054
#define  SCPU_CORE_sys_scpu_rst_reg_addr                                         "0xB805B054"
#define  SCPU_CORE_sys_scpu_rst_reg                                              0xB805B054
#define  SCPU_CORE_sys_scpu_rst_inst_addr                                        "0x000A"
#define  set_SCPU_CORE_sys_scpu_rst_reg(data)                                    (*((volatile unsigned int*)SCPU_CORE_sys_scpu_rst_reg)=data)
#define  get_SCPU_CORE_sys_scpu_rst_reg                                          (*((volatile unsigned int*)SCPU_CORE_sys_scpu_rst_reg))
#define  SCPU_CORE_sys_scpu_rst_scpu_p_rstn_shift                                (18)
#define  SCPU_CORE_sys_scpu_rst_scpu_peri_rstn_shift                             (17)
#define  SCPU_CORE_sys_scpu_rst_scpu_s_poreset_n_shift                           (16)
#define  SCPU_CORE_sys_scpu_rst_scpu_s_rstn_shift                                (15)
#define  SCPU_CORE_sys_scpu_rst_resetsocdbgn_shift                               (14)
#define  SCPU_CORE_sys_scpu_rst_scpu_nic_rstn_shift                              (13)
#define  SCPU_CORE_sys_scpu_rst_scpu_core0_rstn_shift                            (12)
#define  SCPU_CORE_sys_scpu_rst_scpu_core1_rstn_shift                            (11)
#define  SCPU_CORE_sys_scpu_rst_scpu_core0_poreset_n_shift                       (10)
#define  SCPU_CORE_sys_scpu_rst_scpu_core1_poreset_n_shift                       (9)
#define  SCPU_CORE_sys_scpu_rst_scpu_dbg_rstn_shift                              (8)
#define  SCPU_CORE_sys_scpu_rst_scpu_core2_rstn_shift                            (6)
#define  SCPU_CORE_sys_scpu_rst_scpu_core3_rstn_shift                            (5)
#define  SCPU_CORE_sys_scpu_rst_scpu_core2_poreset_n_shift                       (4)
#define  SCPU_CORE_sys_scpu_rst_scpu_core3_poreset_n_shift                       (3)
#define  SCPU_CORE_sys_scpu_rst_scpu_gic_rstn_shift                              (0)
#define  SCPU_CORE_sys_scpu_rst_scpu_p_rstn_mask                                 (0x00040000)
#define  SCPU_CORE_sys_scpu_rst_scpu_peri_rstn_mask                              (0x00020000)
#define  SCPU_CORE_sys_scpu_rst_scpu_s_poreset_n_mask                            (0x00010000)
#define  SCPU_CORE_sys_scpu_rst_scpu_s_rstn_mask                                 (0x00008000)
#define  SCPU_CORE_sys_scpu_rst_resetsocdbgn_mask                                (0x00004000)
#define  SCPU_CORE_sys_scpu_rst_scpu_nic_rstn_mask                               (0x00002000)
#define  SCPU_CORE_sys_scpu_rst_scpu_core0_rstn_mask                             (0x00001000)
#define  SCPU_CORE_sys_scpu_rst_scpu_core1_rstn_mask                             (0x00000800)
#define  SCPU_CORE_sys_scpu_rst_scpu_core0_poreset_n_mask                        (0x00000400)
#define  SCPU_CORE_sys_scpu_rst_scpu_core1_poreset_n_mask                        (0x00000200)
#define  SCPU_CORE_sys_scpu_rst_scpu_dbg_rstn_mask                               (0x00000100)
#define  SCPU_CORE_sys_scpu_rst_scpu_core2_rstn_mask                             (0x00000040)
#define  SCPU_CORE_sys_scpu_rst_scpu_core3_rstn_mask                             (0x00000020)
#define  SCPU_CORE_sys_scpu_rst_scpu_core2_poreset_n_mask                        (0x00000010)
#define  SCPU_CORE_sys_scpu_rst_scpu_core3_poreset_n_mask                        (0x00000008)
#define  SCPU_CORE_sys_scpu_rst_scpu_gic_rstn_mask                               (0x00000001)
#define  SCPU_CORE_sys_scpu_rst_scpu_p_rstn(data)                                (0x00040000&((data)<<18))
#define  SCPU_CORE_sys_scpu_rst_scpu_peri_rstn(data)                             (0x00020000&((data)<<17))
#define  SCPU_CORE_sys_scpu_rst_scpu_s_poreset_n(data)                           (0x00010000&((data)<<16))
#define  SCPU_CORE_sys_scpu_rst_scpu_s_rstn(data)                                (0x00008000&((data)<<15))
#define  SCPU_CORE_sys_scpu_rst_resetsocdbgn(data)                               (0x00004000&((data)<<14))
#define  SCPU_CORE_sys_scpu_rst_scpu_nic_rstn(data)                              (0x00002000&((data)<<13))
#define  SCPU_CORE_sys_scpu_rst_scpu_core0_rstn(data)                            (0x00001000&((data)<<12))
#define  SCPU_CORE_sys_scpu_rst_scpu_core1_rstn(data)                            (0x00000800&((data)<<11))
#define  SCPU_CORE_sys_scpu_rst_scpu_core0_poreset_n(data)                       (0x00000400&((data)<<10))
#define  SCPU_CORE_sys_scpu_rst_scpu_core1_poreset_n(data)                       (0x00000200&((data)<<9))
#define  SCPU_CORE_sys_scpu_rst_scpu_dbg_rstn(data)                              (0x00000100&((data)<<8))
#define  SCPU_CORE_sys_scpu_rst_scpu_core2_rstn(data)                            (0x00000040&((data)<<6))
#define  SCPU_CORE_sys_scpu_rst_scpu_core3_rstn(data)                            (0x00000020&((data)<<5))
#define  SCPU_CORE_sys_scpu_rst_scpu_core2_poreset_n(data)                       (0x00000010&((data)<<4))
#define  SCPU_CORE_sys_scpu_rst_scpu_core3_poreset_n(data)                       (0x00000008&((data)<<3))
#define  SCPU_CORE_sys_scpu_rst_scpu_gic_rstn(data)                              (0x00000001&(data))
#define  SCPU_CORE_sys_scpu_rst_get_scpu_p_rstn(data)                            ((0x00040000&(data))>>18)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_peri_rstn(data)                         ((0x00020000&(data))>>17)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_s_poreset_n(data)                       ((0x00010000&(data))>>16)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_s_rstn(data)                            ((0x00008000&(data))>>15)
#define  SCPU_CORE_sys_scpu_rst_get_resetsocdbgn(data)                           ((0x00004000&(data))>>14)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_nic_rstn(data)                          ((0x00002000&(data))>>13)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_core0_rstn(data)                        ((0x00001000&(data))>>12)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_core1_rstn(data)                        ((0x00000800&(data))>>11)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_core0_poreset_n(data)                   ((0x00000400&(data))>>10)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_core1_poreset_n(data)                   ((0x00000200&(data))>>9)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_dbg_rstn(data)                          ((0x00000100&(data))>>8)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_core2_rstn(data)                        ((0x00000040&(data))>>6)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_core3_rstn(data)                        ((0x00000020&(data))>>5)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_core2_poreset_n(data)                   ((0x00000010&(data))>>4)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_core3_poreset_n(data)                   ((0x00000008&(data))>>3)
#define  SCPU_CORE_sys_scpu_rst_get_scpu_gic_rstn(data)                          (0x00000001&(data))

#define  SCPU_CORE_voltage_probe_ctrl                                           0x1805B400
#define  SCPU_CORE_voltage_probe_ctrl_reg_addr                                   "0xB805B400"
#define  SCPU_CORE_voltage_probe_ctrl_reg                                        0xB805B400
#define  SCPU_CORE_voltage_probe_ctrl_inst_addr                                  "0x000B"
#define  set_SCPU_CORE_voltage_probe_ctrl_reg(data)                              (*((volatile unsigned int*)SCPU_CORE_voltage_probe_ctrl_reg)=data)
#define  get_SCPU_CORE_voltage_probe_ctrl_reg                                    (*((volatile unsigned int*)SCPU_CORE_voltage_probe_ctrl_reg))
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_ananke_c0_pwr_ctrl_shift          (6)
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_ananke_c0_gnd_ctrl_shift          (4)
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_scpu_lvl_pwr_ctrl_shift           (1)
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_scpu_lvl_gnd_ctrl_shift           (0)
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_ananke_c0_pwr_ctrl_mask           (0x000000C0)
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_ananke_c0_gnd_ctrl_mask           (0x00000030)
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_scpu_lvl_pwr_ctrl_mask            (0x00000002)
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_scpu_lvl_gnd_ctrl_mask            (0x00000001)
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_ananke_c0_pwr_ctrl(data)          (0x000000C0&((data)<<6))
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_ananke_c0_gnd_ctrl(data)          (0x00000030&((data)<<4))
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_scpu_lvl_pwr_ctrl(data)           (0x00000002&((data)<<1))
#define  SCPU_CORE_voltage_probe_ctrl_voltprob_scpu_lvl_gnd_ctrl(data)           (0x00000001&(data))
#define  SCPU_CORE_voltage_probe_ctrl_get_voltprob_ananke_c0_pwr_ctrl(data)      ((0x000000C0&(data))>>6)
#define  SCPU_CORE_voltage_probe_ctrl_get_voltprob_ananke_c0_gnd_ctrl(data)      ((0x00000030&(data))>>4)
#define  SCPU_CORE_voltage_probe_ctrl_get_voltprob_scpu_lvl_pwr_ctrl(data)       ((0x00000002&(data))>>1)
#define  SCPU_CORE_voltage_probe_ctrl_get_voltprob_scpu_lvl_gnd_ctrl(data)       (0x00000001&(data))

#define  SCPU_CORE_dss_ctrl_0                                                   0x1805B404
#define  SCPU_CORE_dss_ctrl_0_reg_addr                                           "0xB805B404"
#define  SCPU_CORE_dss_ctrl_0_reg                                                0xB805B404
#define  SCPU_CORE_dss_ctrl_0_inst_addr                                          "0x000C"
#define  set_SCPU_CORE_dss_ctrl_0_reg(data)                                      (*((volatile unsigned int*)SCPU_CORE_dss_ctrl_0_reg)=data)
#define  get_SCPU_CORE_dss_ctrl_0_reg                                            (*((volatile unsigned int*)SCPU_CORE_dss_ctrl_0_reg))
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_rst_n_shift                            (31)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_ro_sel_shift                           (28)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_wire_sel_shift                         (26)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_speed_en_shift                         (25)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_rst_n_shift                            (7)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_ro_sel_shift                           (4)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_wire_sel_shift                         (1)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_speed_en_shift                         (0)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_rst_n_mask                             (0x80000000)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_ro_sel_mask                            (0x70000000)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_wire_sel_mask                          (0x04000000)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_speed_en_mask                          (0x02000000)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_rst_n_mask                             (0x00000080)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_ro_sel_mask                            (0x00000070)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_wire_sel_mask                          (0x00000002)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_speed_en_mask                          (0x00000001)
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_rst_n(data)                            (0x80000000&((data)<<31))
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_ro_sel(data)                           (0x70000000&((data)<<28))
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_wire_sel(data)                         (0x04000000&((data)<<26))
#define  SCPU_CORE_dss_ctrl_0_ananke_dss0_speed_en(data)                         (0x02000000&((data)<<25))
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_rst_n(data)                            (0x00000080&((data)<<7))
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_ro_sel(data)                           (0x00000070&((data)<<4))
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_wire_sel(data)                         (0x00000002&((data)<<1))
#define  SCPU_CORE_dss_ctrl_0_ananke_dss1_speed_en(data)                         (0x00000001&(data))
#define  SCPU_CORE_dss_ctrl_0_get_ananke_dss0_rst_n(data)                        ((0x80000000&(data))>>31)
#define  SCPU_CORE_dss_ctrl_0_get_ananke_dss0_ro_sel(data)                       ((0x70000000&(data))>>28)
#define  SCPU_CORE_dss_ctrl_0_get_ananke_dss0_wire_sel(data)                     ((0x04000000&(data))>>26)
#define  SCPU_CORE_dss_ctrl_0_get_ananke_dss0_speed_en(data)                     ((0x02000000&(data))>>25)
#define  SCPU_CORE_dss_ctrl_0_get_ananke_dss1_rst_n(data)                        ((0x00000080&(data))>>7)
#define  SCPU_CORE_dss_ctrl_0_get_ananke_dss1_ro_sel(data)                       ((0x00000070&(data))>>4)
#define  SCPU_CORE_dss_ctrl_0_get_ananke_dss1_wire_sel(data)                     ((0x00000002&(data))>>1)
#define  SCPU_CORE_dss_ctrl_0_get_ananke_dss1_speed_en(data)                     (0x00000001&(data))

#define  SCPU_CORE_dss_ctrl_1                                                   0x1805B408
#define  SCPU_CORE_dss_ctrl_1_reg_addr                                           "0xB805B408"
#define  SCPU_CORE_dss_ctrl_1_reg                                                0xB805B408
#define  SCPU_CORE_dss_ctrl_1_inst_addr                                          "0x000D"
#define  set_SCPU_CORE_dss_ctrl_1_reg(data)                                      (*((volatile unsigned int*)SCPU_CORE_dss_ctrl_1_reg)=data)
#define  get_SCPU_CORE_dss_ctrl_1_reg                                            (*((volatile unsigned int*)SCPU_CORE_dss_ctrl_1_reg))
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_data_in_shift                        (12)
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_dss_rst_n_shift                      (11)
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_ro_sel_shift                         (8)
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_speed_en_shift                       (7)
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_wire_sel_shift                       (6)
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_data_in_mask                         (0xFFFFF000)
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_dss_rst_n_mask                       (0x00000800)
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_ro_sel_mask                          (0x00000700)
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_speed_en_mask                        (0x00000080)
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_wire_sel_mask                        (0x00000040)
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_data_in(data)                        (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_dss_rst_n(data)                      (0x00000800&((data)<<11))
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_ro_sel(data)                         (0x00000700&((data)<<8))
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_speed_en(data)                       (0x00000080&((data)<<7))
#define  SCPU_CORE_dss_ctrl_1_scpu_c31_9p5t_wire_sel(data)                       (0x00000040&((data)<<6))
#define  SCPU_CORE_dss_ctrl_1_get_scpu_c31_9p5t_data_in(data)                    ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss_ctrl_1_get_scpu_c31_9p5t_dss_rst_n(data)                  ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss_ctrl_1_get_scpu_c31_9p5t_ro_sel(data)                     ((0x00000700&(data))>>8)
#define  SCPU_CORE_dss_ctrl_1_get_scpu_c31_9p5t_speed_en(data)                   ((0x00000080&(data))>>7)
#define  SCPU_CORE_dss_ctrl_1_get_scpu_c31_9p5t_wire_sel(data)                   ((0x00000040&(data))>>6)

#define  SCPU_CORE_dss_ctrl_2                                                   0x1805B40C
#define  SCPU_CORE_dss_ctrl_2_reg_addr                                           "0xB805B40C"
#define  SCPU_CORE_dss_ctrl_2_reg                                                0xB805B40C
#define  SCPU_CORE_dss_ctrl_2_inst_addr                                          "0x000E"
#define  set_SCPU_CORE_dss_ctrl_2_reg(data)                                      (*((volatile unsigned int*)SCPU_CORE_dss_ctrl_2_reg)=data)
#define  get_SCPU_CORE_dss_ctrl_2_reg                                            (*((volatile unsigned int*)SCPU_CORE_dss_ctrl_2_reg))
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_data_in_shift                        (12)
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_dss_rst_n_shift                      (11)
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_ro_sel_shift                         (8)
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_speed_en_shift                       (7)
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_wire_sel_shift                       (6)
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_data_in_mask                         (0xFFFFF000)
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_dss_rst_n_mask                       (0x00000800)
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_ro_sel_mask                          (0x00000700)
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_speed_en_mask                        (0x00000080)
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_wire_sel_mask                        (0x00000040)
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_data_in(data)                        (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_dss_rst_n(data)                      (0x00000800&((data)<<11))
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_ro_sel(data)                         (0x00000700&((data)<<8))
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_speed_en(data)                       (0x00000080&((data)<<7))
#define  SCPU_CORE_dss_ctrl_2_scpu_c35_9p5t_wire_sel(data)                       (0x00000040&((data)<<6))
#define  SCPU_CORE_dss_ctrl_2_get_scpu_c35_9p5t_data_in(data)                    ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss_ctrl_2_get_scpu_c35_9p5t_dss_rst_n(data)                  ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss_ctrl_2_get_scpu_c35_9p5t_ro_sel(data)                     ((0x00000700&(data))>>8)
#define  SCPU_CORE_dss_ctrl_2_get_scpu_c35_9p5t_speed_en(data)                   ((0x00000080&(data))>>7)
#define  SCPU_CORE_dss_ctrl_2_get_scpu_c35_9p5t_wire_sel(data)                   ((0x00000040&(data))>>6)

#define  SCPU_CORE_dss_ctrl_3                                                   0x1805B410
#define  SCPU_CORE_dss_ctrl_3_reg_addr                                           "0xB805B410"
#define  SCPU_CORE_dss_ctrl_3_reg                                                0xB805B410
#define  SCPU_CORE_dss_ctrl_3_inst_addr                                          "0x000F"
#define  set_SCPU_CORE_dss_ctrl_3_reg(data)                                      (*((volatile unsigned int*)SCPU_CORE_dss_ctrl_3_reg)=data)
#define  get_SCPU_CORE_dss_ctrl_3_reg                                            (*((volatile unsigned int*)SCPU_CORE_dss_ctrl_3_reg))
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_data_in_shift                        (12)
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_dss_rst_n_shift                      (11)
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_ro_sel_shift                         (8)
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_speed_en_shift                       (7)
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_wire_sel_shift                       (6)
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_data_in_mask                         (0xFFFFF000)
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_dss_rst_n_mask                       (0x00000800)
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_ro_sel_mask                          (0x00000700)
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_speed_en_mask                        (0x00000080)
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_wire_sel_mask                        (0x00000040)
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_data_in(data)                        (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_dss_rst_n(data)                      (0x00000800&((data)<<11))
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_ro_sel(data)                         (0x00000700&((data)<<8))
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_speed_en(data)                       (0x00000080&((data)<<7))
#define  SCPU_CORE_dss_ctrl_3_scpu_c38_9p5t_wire_sel(data)                       (0x00000040&((data)<<6))
#define  SCPU_CORE_dss_ctrl_3_get_scpu_c38_9p5t_data_in(data)                    ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss_ctrl_3_get_scpu_c38_9p5t_dss_rst_n(data)                  ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss_ctrl_3_get_scpu_c38_9p5t_ro_sel(data)                     ((0x00000700&(data))>>8)
#define  SCPU_CORE_dss_ctrl_3_get_scpu_c38_9p5t_speed_en(data)                   ((0x00000080&(data))>>7)
#define  SCPU_CORE_dss_ctrl_3_get_scpu_c38_9p5t_wire_sel(data)                   ((0x00000040&(data))>>6)

#define  SCPU_CORE_dss_status_0                                                 0x1805B414
#define  SCPU_CORE_dss_status_0_reg_addr                                         "0xB805B414"
#define  SCPU_CORE_dss_status_0_reg                                              0xB805B414
#define  SCPU_CORE_dss_status_0_inst_addr                                        "0x0010"
#define  set_SCPU_CORE_dss_status_0_reg(data)                                    (*((volatile unsigned int*)SCPU_CORE_dss_status_0_reg)=data)
#define  get_SCPU_CORE_dss_status_0_reg                                          (*((volatile unsigned int*)SCPU_CORE_dss_status_0_reg))
#define  SCPU_CORE_dss_status_0_ananke_dss0_ready_shift                          (31)
#define  SCPU_CORE_dss_status_0_ananke_dss0_count_out_shift                      (11)
#define  SCPU_CORE_dss_status_0_ananke_dss0_ready_mask                           (0x80000000)
#define  SCPU_CORE_dss_status_0_ananke_dss0_count_out_mask                       (0x7FFFF800)
#define  SCPU_CORE_dss_status_0_ananke_dss0_ready(data)                          (0x80000000&((data)<<31))
#define  SCPU_CORE_dss_status_0_ananke_dss0_count_out(data)                      (0x7FFFF800&((data)<<11))
#define  SCPU_CORE_dss_status_0_get_ananke_dss0_ready(data)                      ((0x80000000&(data))>>31)
#define  SCPU_CORE_dss_status_0_get_ananke_dss0_count_out(data)                  ((0x7FFFF800&(data))>>11)

#define  SCPU_CORE_dss_status_1                                                 0x1805B418
#define  SCPU_CORE_dss_status_1_reg_addr                                         "0xB805B418"
#define  SCPU_CORE_dss_status_1_reg                                              0xB805B418
#define  SCPU_CORE_dss_status_1_inst_addr                                        "0x0011"
#define  set_SCPU_CORE_dss_status_1_reg(data)                                    (*((volatile unsigned int*)SCPU_CORE_dss_status_1_reg)=data)
#define  get_SCPU_CORE_dss_status_1_reg                                          (*((volatile unsigned int*)SCPU_CORE_dss_status_1_reg))
#define  SCPU_CORE_dss_status_1_ananke_dss1_ready_shift                          (31)
#define  SCPU_CORE_dss_status_1_ananke_dss1_count_out_shift                      (11)
#define  SCPU_CORE_dss_status_1_ananke_dss1_ready_mask                           (0x80000000)
#define  SCPU_CORE_dss_status_1_ananke_dss1_count_out_mask                       (0x7FFFF800)
#define  SCPU_CORE_dss_status_1_ananke_dss1_ready(data)                          (0x80000000&((data)<<31))
#define  SCPU_CORE_dss_status_1_ananke_dss1_count_out(data)                      (0x7FFFF800&((data)<<11))
#define  SCPU_CORE_dss_status_1_get_ananke_dss1_ready(data)                      ((0x80000000&(data))>>31)
#define  SCPU_CORE_dss_status_1_get_ananke_dss1_count_out(data)                  ((0x7FFFF800&(data))>>11)

#define  SCPU_CORE_dss_status_4                                                 0x1805B424
#define  SCPU_CORE_dss_status_4_reg_addr                                         "0xB805B424"
#define  SCPU_CORE_dss_status_4_reg                                              0xB805B424
#define  SCPU_CORE_dss_status_4_inst_addr                                        "0x0012"
#define  set_SCPU_CORE_dss_status_4_reg(data)                                    (*((volatile unsigned int*)SCPU_CORE_dss_status_4_reg)=data)
#define  get_SCPU_CORE_dss_status_4_reg                                          (*((volatile unsigned int*)SCPU_CORE_dss_status_4_reg))
#define  SCPU_CORE_dss_status_4_scpu_c31_9p5t_count_out_ro_shift                 (12)
#define  SCPU_CORE_dss_status_4_scpu_c31_9p5t_ready_ro_shift                     (11)
#define  SCPU_CORE_dss_status_4_scpu_c31_9p5t_wsort_go_ro_shift                  (10)
#define  SCPU_CORE_dss_status_4_scpu_c31_9p5t_count_out_ro_mask                  (0xFFFFF000)
#define  SCPU_CORE_dss_status_4_scpu_c31_9p5t_ready_ro_mask                      (0x00000800)
#define  SCPU_CORE_dss_status_4_scpu_c31_9p5t_wsort_go_ro_mask                   (0x00000400)
#define  SCPU_CORE_dss_status_4_scpu_c31_9p5t_count_out_ro(data)                 (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss_status_4_scpu_c31_9p5t_ready_ro(data)                     (0x00000800&((data)<<11))
#define  SCPU_CORE_dss_status_4_scpu_c31_9p5t_wsort_go_ro(data)                  (0x00000400&((data)<<10))
#define  SCPU_CORE_dss_status_4_get_scpu_c31_9p5t_count_out_ro(data)             ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss_status_4_get_scpu_c31_9p5t_ready_ro(data)                 ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss_status_4_get_scpu_c31_9p5t_wsort_go_ro(data)              ((0x00000400&(data))>>10)

#define  SCPU_CORE_dss_status_6                                                 0x1805B42C
#define  SCPU_CORE_dss_status_6_reg_addr                                         "0xB805B42C"
#define  SCPU_CORE_dss_status_6_reg                                              0xB805B42C
#define  SCPU_CORE_dss_status_6_inst_addr                                        "0x0013"
#define  set_SCPU_CORE_dss_status_6_reg(data)                                    (*((volatile unsigned int*)SCPU_CORE_dss_status_6_reg)=data)
#define  get_SCPU_CORE_dss_status_6_reg                                          (*((volatile unsigned int*)SCPU_CORE_dss_status_6_reg))
#define  SCPU_CORE_dss_status_6_scpu_c35_9p5t_count_out_ro_shift                 (12)
#define  SCPU_CORE_dss_status_6_scpu_c35_9p5t_ready_ro_shift                     (11)
#define  SCPU_CORE_dss_status_6_scpu_c35_9p5t_wsort_go_ro_shift                  (10)
#define  SCPU_CORE_dss_status_6_scpu_c35_9p5t_count_out_ro_mask                  (0xFFFFF000)
#define  SCPU_CORE_dss_status_6_scpu_c35_9p5t_ready_ro_mask                      (0x00000800)
#define  SCPU_CORE_dss_status_6_scpu_c35_9p5t_wsort_go_ro_mask                   (0x00000400)
#define  SCPU_CORE_dss_status_6_scpu_c35_9p5t_count_out_ro(data)                 (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss_status_6_scpu_c35_9p5t_ready_ro(data)                     (0x00000800&((data)<<11))
#define  SCPU_CORE_dss_status_6_scpu_c35_9p5t_wsort_go_ro(data)                  (0x00000400&((data)<<10))
#define  SCPU_CORE_dss_status_6_get_scpu_c35_9p5t_count_out_ro(data)             ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss_status_6_get_scpu_c35_9p5t_ready_ro(data)                 ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss_status_6_get_scpu_c35_9p5t_wsort_go_ro(data)              ((0x00000400&(data))>>10)

#define  SCPU_CORE_dss_status_8                                                 0x1805B434
#define  SCPU_CORE_dss_status_8_reg_addr                                         "0xB805B434"
#define  SCPU_CORE_dss_status_8_reg                                              0xB805B434
#define  SCPU_CORE_dss_status_8_inst_addr                                        "0x0014"
#define  set_SCPU_CORE_dss_status_8_reg(data)                                    (*((volatile unsigned int*)SCPU_CORE_dss_status_8_reg)=data)
#define  get_SCPU_CORE_dss_status_8_reg                                          (*((volatile unsigned int*)SCPU_CORE_dss_status_8_reg))
#define  SCPU_CORE_dss_status_8_scpu_c38_9p5t_count_out_ro_shift                 (12)
#define  SCPU_CORE_dss_status_8_scpu_c38_9p5t_ready_ro_shift                     (11)
#define  SCPU_CORE_dss_status_8_scpu_c38_9p5t_wsort_go_ro_shift                  (10)
#define  SCPU_CORE_dss_status_8_scpu_c38_9p5t_count_out_ro_mask                  (0xFFFFF000)
#define  SCPU_CORE_dss_status_8_scpu_c38_9p5t_ready_ro_mask                      (0x00000800)
#define  SCPU_CORE_dss_status_8_scpu_c38_9p5t_wsort_go_ro_mask                   (0x00000400)
#define  SCPU_CORE_dss_status_8_scpu_c38_9p5t_count_out_ro(data)                 (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss_status_8_scpu_c38_9p5t_ready_ro(data)                     (0x00000800&((data)<<11))
#define  SCPU_CORE_dss_status_8_scpu_c38_9p5t_wsort_go_ro(data)                  (0x00000400&((data)<<10))
#define  SCPU_CORE_dss_status_8_get_scpu_c38_9p5t_count_out_ro(data)             ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss_status_8_get_scpu_c38_9p5t_ready_ro(data)                 ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss_status_8_get_scpu_c38_9p5t_wsort_go_ro(data)              ((0x00000400&(data))>>10)

#define  SCPU_CORE_dss_burst_mode_ctrl_scpu                                     0x1805B50C
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_reg_addr                             "0xB805B50C"
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_reg                                  0xB805B50C
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_inst_addr                            "0x0015"
#define  set_SCPU_CORE_dss_burst_mode_ctrl_scpu_reg(data)                        (*((volatile unsigned int*)SCPU_CORE_dss_burst_mode_ctrl_scpu_reg)=data)
#define  get_SCPU_CORE_dss_burst_mode_ctrl_scpu_reg                              (*((volatile unsigned int*)SCPU_CORE_dss_burst_mode_ctrl_scpu_reg))
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_min_sel_shift    (12)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_rst_n_shift      (11)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_ro_sel_shift     (8)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_en_shift         (7)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_wire_sel_shift   (6)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_min_sel_mask     (0x00001000)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_rst_n_mask       (0x00000800)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_ro_sel_mask      (0x00000700)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_en_mask          (0x00000080)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_wire_sel_mask    (0x00000040)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_min_sel(data)    (0x00001000&((data)<<12))
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_rst_n(data)      (0x00000800&((data)<<11))
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_ro_sel(data)     (0x00000700&((data)<<8))
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_en(data)         (0x00000080&((data)<<7))
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_scpu_dss_burst_mode_wire_sel(data)   (0x00000040&((data)<<6))
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_get_scpu_dss_burst_mode_min_sel(data) ((0x00001000&(data))>>12)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_get_scpu_dss_burst_mode_rst_n(data)  ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_get_scpu_dss_burst_mode_ro_sel(data) ((0x00000700&(data))>>8)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_get_scpu_dss_burst_mode_en(data)     ((0x00000080&(data))>>7)
#define  SCPU_CORE_dss_burst_mode_ctrl_scpu_get_scpu_dss_burst_mode_wire_sel(data) ((0x00000040&(data))>>6)

#define  SCPU_CORE_dss_burst_mode_status_scpu_0                                 0x1805B510
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_reg_addr                         "0xB805B510"
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_reg                              0xB805B510
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_inst_addr                        "0x0016"
#define  set_SCPU_CORE_dss_burst_mode_status_scpu_0_reg(data)                    (*((volatile unsigned int*)SCPU_CORE_dss_burst_mode_status_scpu_0_reg)=data)
#define  get_SCPU_CORE_dss_burst_mode_status_scpu_0_reg                          (*((volatile unsigned int*)SCPU_CORE_dss_burst_mode_status_scpu_0_reg))
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_scpu_dss_burst_mode_count_shift  (12)
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_scpu_dss_burst_mode_ready_shift  (11)
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_scpu_dss_burst_mode_count_mask   (0xFFFFF000)
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_scpu_dss_burst_mode_ready_mask   (0x00000800)
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_scpu_dss_burst_mode_count(data)  (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_scpu_dss_burst_mode_ready(data)  (0x00000800&((data)<<11))
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_get_scpu_dss_burst_mode_count(data) ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss_burst_mode_status_scpu_0_get_scpu_dss_burst_mode_ready(data) ((0x00000800&(data))>>11)

#define  SCPU_CORE_dss_burst_mode_status_scpu_1                                 0x1805B514
#define  SCPU_CORE_dss_burst_mode_status_scpu_1_reg_addr                         "0xB805B514"
#define  SCPU_CORE_dss_burst_mode_status_scpu_1_reg                              0xB805B514
#define  SCPU_CORE_dss_burst_mode_status_scpu_1_inst_addr                        "0x0017"
#define  set_SCPU_CORE_dss_burst_mode_status_scpu_1_reg(data)                    (*((volatile unsigned int*)SCPU_CORE_dss_burst_mode_status_scpu_1_reg)=data)
#define  get_SCPU_CORE_dss_burst_mode_status_scpu_1_reg                          (*((volatile unsigned int*)SCPU_CORE_dss_burst_mode_status_scpu_1_reg))
#define  SCPU_CORE_dss_burst_mode_status_scpu_1_scpu_dss_burst_mode_record_shift (12)
#define  SCPU_CORE_dss_burst_mode_status_scpu_1_scpu_dss_burst_mode_record_mask  (0xFFFFF000)
#define  SCPU_CORE_dss_burst_mode_status_scpu_1_scpu_dss_burst_mode_record(data) (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss_burst_mode_status_scpu_1_get_scpu_dss_burst_mode_record(data) ((0xFFFFF000&(data))>>12)

#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0                                0x1805B518
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_reg_addr                        "0xB805B518"
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_reg                             0xB805B518
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_inst_addr                       "0x0018"
#define  set_SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_reg(data)                   (*((volatile unsigned int*)SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_reg)=data)
#define  get_SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_reg                         (*((volatile unsigned int*)SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_reg))
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_min_sel_shift (12)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_rst_n_shift (11)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_ro_sel_shift (8)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_en_shift (7)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_wire_sel_shift (6)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_min_sel_mask (0x00001000)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_rst_n_mask (0x00000800)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_ro_sel_mask (0x00000700)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_en_mask  (0x00000080)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_wire_sel_mask (0x00000040)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_min_sel(data) (0x00001000&((data)<<12))
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_rst_n(data) (0x00000800&((data)<<11))
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_ro_sel(data) (0x00000700&((data)<<8))
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_en(data) (0x00000080&((data)<<7))
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_ananke_dss0_burst_mode_wire_sel(data) (0x00000040&((data)<<6))
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_get_ananke_dss0_burst_mode_min_sel(data) ((0x00001000&(data))>>12)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_get_ananke_dss0_burst_mode_rst_n(data) ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_get_ananke_dss0_burst_mode_ro_sel(data) ((0x00000700&(data))>>8)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_get_ananke_dss0_burst_mode_en(data) ((0x00000080&(data))>>7)
#define  SCPU_CORE_dss0_burst_mode_ctrl_ananke_0_get_ananke_dss0_burst_mode_wire_sel(data) ((0x00000040&(data))>>6)

#define  SCPU_CORE_dss0_burst_mode_status_ananke_1                              0x1805B51C
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_reg_addr                      "0xB805B51C"
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_reg                           0xB805B51C
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_inst_addr                     "0x0019"
#define  set_SCPU_CORE_dss0_burst_mode_status_ananke_1_reg(data)                 (*((volatile unsigned int*)SCPU_CORE_dss0_burst_mode_status_ananke_1_reg)=data)
#define  get_SCPU_CORE_dss0_burst_mode_status_ananke_1_reg                       (*((volatile unsigned int*)SCPU_CORE_dss0_burst_mode_status_ananke_1_reg))
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_ananke_dss0_burst_mode_count_shift (12)
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_ananke_dss0_burst_mode_ready_shift (11)
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_ananke_dss0_burst_mode_count_mask (0xFFFFF000)
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_ananke_dss0_burst_mode_ready_mask (0x00000800)
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_ananke_dss0_burst_mode_count(data) (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_ananke_dss0_burst_mode_ready(data) (0x00000800&((data)<<11))
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_get_ananke_dss0_burst_mode_count(data) ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss0_burst_mode_status_ananke_1_get_ananke_dss0_burst_mode_ready(data) ((0x00000800&(data))>>11)

#define  SCPU_CORE_dss0_burst_mode_status_ananke_2                              0x1805B520
#define  SCPU_CORE_dss0_burst_mode_status_ananke_2_reg_addr                      "0xB805B520"
#define  SCPU_CORE_dss0_burst_mode_status_ananke_2_reg                           0xB805B520
#define  SCPU_CORE_dss0_burst_mode_status_ananke_2_inst_addr                     "0x001A"
#define  set_SCPU_CORE_dss0_burst_mode_status_ananke_2_reg(data)                 (*((volatile unsigned int*)SCPU_CORE_dss0_burst_mode_status_ananke_2_reg)=data)
#define  get_SCPU_CORE_dss0_burst_mode_status_ananke_2_reg                       (*((volatile unsigned int*)SCPU_CORE_dss0_burst_mode_status_ananke_2_reg))
#define  SCPU_CORE_dss0_burst_mode_status_ananke_2_ananke_dss0_burst_mode_record_shift (12)
#define  SCPU_CORE_dss0_burst_mode_status_ananke_2_ananke_dss0_burst_mode_record_mask (0xFFFFF000)
#define  SCPU_CORE_dss0_burst_mode_status_ananke_2_ananke_dss0_burst_mode_record(data) (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss0_burst_mode_status_ananke_2_get_ananke_dss0_burst_mode_record(data) ((0xFFFFF000&(data))>>12)

#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0                                0x1805B524
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_reg_addr                        "0xB805B524"
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_reg                             0xB805B524
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_inst_addr                       "0x001B"
#define  set_SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_reg(data)                   (*((volatile unsigned int*)SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_reg)=data)
#define  get_SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_reg                         (*((volatile unsigned int*)SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_reg))
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_min_sel_shift (12)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_rst_n_shift (11)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_ro_sel_shift (8)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_en_shift (7)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_wire_sel_shift (6)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_min_sel_mask (0x00001000)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_rst_n_mask (0x00000800)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_ro_sel_mask (0x00000700)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_en_mask  (0x00000080)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_wire_sel_mask (0x00000040)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_min_sel(data) (0x00001000&((data)<<12))
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_rst_n(data) (0x00000800&((data)<<11))
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_ro_sel(data) (0x00000700&((data)<<8))
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_en(data) (0x00000080&((data)<<7))
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_ananke_dss1_burst_mode_wire_sel(data) (0x00000040&((data)<<6))
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_get_ananke_dss1_burst_mode_min_sel(data) ((0x00001000&(data))>>12)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_get_ananke_dss1_burst_mode_rst_n(data) ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_get_ananke_dss1_burst_mode_ro_sel(data) ((0x00000700&(data))>>8)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_get_ananke_dss1_burst_mode_en(data) ((0x00000080&(data))>>7)
#define  SCPU_CORE_dss1_burst_mode_ctrl_ananke_0_get_ananke_dss1_burst_mode_wire_sel(data) ((0x00000040&(data))>>6)

#define  SCPU_CORE_dss1_burst_mode_status_ananke_1                              0x1805B528
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_reg_addr                      "0xB805B528"
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_reg                           0xB805B528
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_inst_addr                     "0x001C"
#define  set_SCPU_CORE_dss1_burst_mode_status_ananke_1_reg(data)                 (*((volatile unsigned int*)SCPU_CORE_dss1_burst_mode_status_ananke_1_reg)=data)
#define  get_SCPU_CORE_dss1_burst_mode_status_ananke_1_reg                       (*((volatile unsigned int*)SCPU_CORE_dss1_burst_mode_status_ananke_1_reg))
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_ananke_dss1_burst_mode_count_shift (12)
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_ananke_dss1_burst_mode_ready_shift (11)
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_ananke_dss1_burst_mode_count_mask (0xFFFFF000)
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_ananke_dss1_burst_mode_ready_mask (0x00000800)
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_ananke_dss1_burst_mode_count(data) (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_ananke_dss1_burst_mode_ready(data) (0x00000800&((data)<<11))
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_get_ananke_dss1_burst_mode_count(data) ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss1_burst_mode_status_ananke_1_get_ananke_dss1_burst_mode_ready(data) ((0x00000800&(data))>>11)

#define  SCPU_CORE_dss1_burst_mode_status_ananke_2                              0x1805B52C
#define  SCPU_CORE_dss1_burst_mode_status_ananke_2_reg_addr                      "0xB805B52C"
#define  SCPU_CORE_dss1_burst_mode_status_ananke_2_reg                           0xB805B52C
#define  SCPU_CORE_dss1_burst_mode_status_ananke_2_inst_addr                     "0x001D"
#define  set_SCPU_CORE_dss1_burst_mode_status_ananke_2_reg(data)                 (*((volatile unsigned int*)SCPU_CORE_dss1_burst_mode_status_ananke_2_reg)=data)
#define  get_SCPU_CORE_dss1_burst_mode_status_ananke_2_reg                       (*((volatile unsigned int*)SCPU_CORE_dss1_burst_mode_status_ananke_2_reg))
#define  SCPU_CORE_dss1_burst_mode_status_ananke_2_ananke_dss1_burst_mode_record_shift (12)
#define  SCPU_CORE_dss1_burst_mode_status_ananke_2_ananke_dss1_burst_mode_record_mask (0xFFFFF000)
#define  SCPU_CORE_dss1_burst_mode_status_ananke_2_ananke_dss1_burst_mode_record(data) (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss1_burst_mode_status_ananke_2_get_ananke_dss1_burst_mode_record(data) ((0xFFFFF000&(data))>>12)

#define  SCPU_CORE_dss_ctrl_pwrpad                                              0x1805B530
#define  SCPU_CORE_dss_ctrl_pwrpad_reg_addr                                      "0xB805B530"
#define  SCPU_CORE_dss_ctrl_pwrpad_reg                                           0xB805B530
#define  SCPU_CORE_dss_ctrl_pwrpad_inst_addr                                     "0x001E"
#define  set_SCPU_CORE_dss_ctrl_pwrpad_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_dss_ctrl_pwrpad_reg)=data)
#define  get_SCPU_CORE_dss_ctrl_pwrpad_reg                                       (*((volatile unsigned int*)SCPU_CORE_dss_ctrl_pwrpad_reg))
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_data_in_shift                  (12)
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_rst_n_shift                    (11)
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_ro_sel_shift                   (8)
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_speed_en_shift                 (7)
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_wire_sel_shift                 (6)
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_data_in_mask                   (0xFFFFF000)
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_rst_n_mask                     (0x00000800)
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_ro_sel_mask                    (0x00000700)
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_speed_en_mask                  (0x00000080)
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_wire_sel_mask                  (0x00000040)
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_data_in(data)                  (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_rst_n(data)                    (0x00000800&((data)<<11))
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_ro_sel(data)                   (0x00000700&((data)<<8))
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_speed_en(data)                 (0x00000080&((data)<<7))
#define  SCPU_CORE_dss_ctrl_pwrpad_pwrpad_dss_c30_wire_sel(data)                 (0x00000040&((data)<<6))
#define  SCPU_CORE_dss_ctrl_pwrpad_get_pwrpad_dss_c30_data_in(data)              ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss_ctrl_pwrpad_get_pwrpad_dss_c30_rst_n(data)                ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss_ctrl_pwrpad_get_pwrpad_dss_c30_ro_sel(data)               ((0x00000700&(data))>>8)
#define  SCPU_CORE_dss_ctrl_pwrpad_get_pwrpad_dss_c30_speed_en(data)             ((0x00000080&(data))>>7)
#define  SCPU_CORE_dss_ctrl_pwrpad_get_pwrpad_dss_c30_wire_sel(data)             ((0x00000040&(data))>>6)

#define  SCPU_CORE_dss_status_pwrpad_0                                          0x1805B534
#define  SCPU_CORE_dss_status_pwrpad_0_reg_addr                                  "0xB805B534"
#define  SCPU_CORE_dss_status_pwrpad_0_reg                                       0xB805B534
#define  SCPU_CORE_dss_status_pwrpad_0_inst_addr                                 "0x001F"
#define  set_SCPU_CORE_dss_status_pwrpad_0_reg(data)                             (*((volatile unsigned int*)SCPU_CORE_dss_status_pwrpad_0_reg)=data)
#define  get_SCPU_CORE_dss_status_pwrpad_0_reg                                   (*((volatile unsigned int*)SCPU_CORE_dss_status_pwrpad_0_reg))
#define  SCPU_CORE_dss_status_pwrpad_0_pwrpad_dss_c30_count_out_shift            (12)
#define  SCPU_CORE_dss_status_pwrpad_0_pwrpad_dss_c30_ready_shift                (11)
#define  SCPU_CORE_dss_status_pwrpad_0_pwrpad_dss_c30_wsort_go_shift             (10)
#define  SCPU_CORE_dss_status_pwrpad_0_pwrpad_dss_c30_count_out_mask             (0xFFFFF000)
#define  SCPU_CORE_dss_status_pwrpad_0_pwrpad_dss_c30_ready_mask                 (0x00000800)
#define  SCPU_CORE_dss_status_pwrpad_0_pwrpad_dss_c30_wsort_go_mask              (0x00000400)
#define  SCPU_CORE_dss_status_pwrpad_0_pwrpad_dss_c30_count_out(data)            (0xFFFFF000&((data)<<12))
#define  SCPU_CORE_dss_status_pwrpad_0_pwrpad_dss_c30_ready(data)                (0x00000800&((data)<<11))
#define  SCPU_CORE_dss_status_pwrpad_0_pwrpad_dss_c30_wsort_go(data)             (0x00000400&((data)<<10))
#define  SCPU_CORE_dss_status_pwrpad_0_get_pwrpad_dss_c30_count_out(data)        ((0xFFFFF000&(data))>>12)
#define  SCPU_CORE_dss_status_pwrpad_0_get_pwrpad_dss_c30_ready(data)            ((0x00000800&(data))>>11)
#define  SCPU_CORE_dss_status_pwrpad_0_get_pwrpad_dss_c30_wsort_go(data)         ((0x00000400&(data))>>10)

#define  SCPU_CORE_sram_ctrl_0                                                  0x1805B43C
#define  SCPU_CORE_sram_ctrl_0_reg_addr                                          "0xB805B43C"
#define  SCPU_CORE_sram_ctrl_0_reg                                               0xB805B43C
#define  SCPU_CORE_sram_ctrl_0_inst_addr                                         "0x0020"
#define  set_SCPU_CORE_sram_ctrl_0_reg(data)                                     (*((volatile unsigned int*)SCPU_CORE_sram_ctrl_0_reg)=data)
#define  get_SCPU_CORE_sram_ctrl_0_reg                                           (*((volatile unsigned int*)SCPU_CORE_sram_ctrl_0_reg))
#define  SCPU_CORE_sram_ctrl_0_ananke4_rme_shift                                 (31)
#define  SCPU_CORE_sram_ctrl_0_ananke4_rm_33_32_shift                            (16)
#define  SCPU_CORE_sram_ctrl_0_ananke4_test1_shift                               (5)
#define  SCPU_CORE_sram_ctrl_0_ananke4_rm3_shift                                 (1)
#define  SCPU_CORE_sram_ctrl_0_ananke4_rm2_shift                                 (0)
#define  SCPU_CORE_sram_ctrl_0_ananke4_rme_mask                                  (0x80000000)
#define  SCPU_CORE_sram_ctrl_0_ananke4_rm_33_32_mask                             (0x00030000)
#define  SCPU_CORE_sram_ctrl_0_ananke4_test1_mask                                (0x00000020)
#define  SCPU_CORE_sram_ctrl_0_ananke4_rm3_mask                                  (0x00000002)
#define  SCPU_CORE_sram_ctrl_0_ananke4_rm2_mask                                  (0x00000001)
#define  SCPU_CORE_sram_ctrl_0_ananke4_rme(data)                                 (0x80000000&((data)<<31))
#define  SCPU_CORE_sram_ctrl_0_ananke4_rm_33_32(data)                            (0x00030000&((data)<<16))
#define  SCPU_CORE_sram_ctrl_0_ananke4_test1(data)                               (0x00000020&((data)<<5))
#define  SCPU_CORE_sram_ctrl_0_ananke4_rm3(data)                                 (0x00000002&((data)<<1))
#define  SCPU_CORE_sram_ctrl_0_ananke4_rm2(data)                                 (0x00000001&(data))
#define  SCPU_CORE_sram_ctrl_0_get_ananke4_rme(data)                             ((0x80000000&(data))>>31)
#define  SCPU_CORE_sram_ctrl_0_get_ananke4_rm_33_32(data)                        ((0x00030000&(data))>>16)
#define  SCPU_CORE_sram_ctrl_0_get_ananke4_test1(data)                           ((0x00000020&(data))>>5)
#define  SCPU_CORE_sram_ctrl_0_get_ananke4_rm3(data)                             ((0x00000002&(data))>>1)
#define  SCPU_CORE_sram_ctrl_0_get_ananke4_rm2(data)                             (0x00000001&(data))

#define  SCPU_CORE_sram_ctrl_3                                                  0x1805B440
#define  SCPU_CORE_sram_ctrl_3_reg_addr                                          "0xB805B440"
#define  SCPU_CORE_sram_ctrl_3_reg                                               0xB805B440
#define  SCPU_CORE_sram_ctrl_3_inst_addr                                         "0x0021"
#define  set_SCPU_CORE_sram_ctrl_3_reg(data)                                     (*((volatile unsigned int*)SCPU_CORE_sram_ctrl_3_reg)=data)
#define  get_SCPU_CORE_sram_ctrl_3_reg                                           (*((volatile unsigned int*)SCPU_CORE_sram_ctrl_3_reg))
#define  SCPU_CORE_sram_ctrl_3_ananke4_rm_31_0_shift                             (0)
#define  SCPU_CORE_sram_ctrl_3_ananke4_rm_31_0_mask                              (0xFFFFFFFF)
#define  SCPU_CORE_sram_ctrl_3_ananke4_rm_31_0(data)                             (0xFFFFFFFF&(data))
#define  SCPU_CORE_sram_ctrl_3_get_ananke4_rm_31_0(data)                         (0xFFFFFFFF&(data))

#define  SCPU_CORE_pchannel_ctrl_0                                              0x1805B4E0
#define  SCPU_CORE_pchannel_ctrl_0_reg_addr                                      "0xB805B4E0"
#define  SCPU_CORE_pchannel_ctrl_0_reg                                           0xB805B4E0
#define  SCPU_CORE_pchannel_ctrl_0_inst_addr                                     "0x0022"
#define  set_SCPU_CORE_pchannel_ctrl_0_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_pchannel_ctrl_0_reg)=data)
#define  get_SCPU_CORE_pchannel_ctrl_0_reg                                       (*((volatile unsigned int*)SCPU_CORE_pchannel_ctrl_0_reg))
#define  SCPU_CORE_pchannel_ctrl_0_write_en3_shift                               (31)
#define  SCPU_CORE_pchannel_ctrl_0_preq3_shift                                   (30)
#define  SCPU_CORE_pchannel_ctrl_0_pstate3_shift                                 (24)
#define  SCPU_CORE_pchannel_ctrl_0_write_en2_shift                               (23)
#define  SCPU_CORE_pchannel_ctrl_0_preq2_shift                                   (22)
#define  SCPU_CORE_pchannel_ctrl_0_pstate2_shift                                 (16)
#define  SCPU_CORE_pchannel_ctrl_0_write_en1_shift                               (15)
#define  SCPU_CORE_pchannel_ctrl_0_preq1_shift                                   (14)
#define  SCPU_CORE_pchannel_ctrl_0_pstate1_shift                                 (8)
#define  SCPU_CORE_pchannel_ctrl_0_write_en0_shift                               (7)
#define  SCPU_CORE_pchannel_ctrl_0_preq0_shift                                   (6)
#define  SCPU_CORE_pchannel_ctrl_0_pstate0_shift                                 (0)
#define  SCPU_CORE_pchannel_ctrl_0_write_en3_mask                                (0x80000000)
#define  SCPU_CORE_pchannel_ctrl_0_preq3_mask                                    (0x40000000)
#define  SCPU_CORE_pchannel_ctrl_0_pstate3_mask                                  (0x3F000000)
#define  SCPU_CORE_pchannel_ctrl_0_write_en2_mask                                (0x00800000)
#define  SCPU_CORE_pchannel_ctrl_0_preq2_mask                                    (0x00400000)
#define  SCPU_CORE_pchannel_ctrl_0_pstate2_mask                                  (0x003F0000)
#define  SCPU_CORE_pchannel_ctrl_0_write_en1_mask                                (0x00008000)
#define  SCPU_CORE_pchannel_ctrl_0_preq1_mask                                    (0x00004000)
#define  SCPU_CORE_pchannel_ctrl_0_pstate1_mask                                  (0x00003F00)
#define  SCPU_CORE_pchannel_ctrl_0_write_en0_mask                                (0x00000080)
#define  SCPU_CORE_pchannel_ctrl_0_preq0_mask                                    (0x00000040)
#define  SCPU_CORE_pchannel_ctrl_0_pstate0_mask                                  (0x0000003F)
#define  SCPU_CORE_pchannel_ctrl_0_write_en3(data)                               (0x80000000&((data)<<31))
#define  SCPU_CORE_pchannel_ctrl_0_preq3(data)                                   (0x40000000&((data)<<30))
#define  SCPU_CORE_pchannel_ctrl_0_pstate3(data)                                 (0x3F000000&((data)<<24))
#define  SCPU_CORE_pchannel_ctrl_0_write_en2(data)                               (0x00800000&((data)<<23))
#define  SCPU_CORE_pchannel_ctrl_0_preq2(data)                                   (0x00400000&((data)<<22))
#define  SCPU_CORE_pchannel_ctrl_0_pstate2(data)                                 (0x003F0000&((data)<<16))
#define  SCPU_CORE_pchannel_ctrl_0_write_en1(data)                               (0x00008000&((data)<<15))
#define  SCPU_CORE_pchannel_ctrl_0_preq1(data)                                   (0x00004000&((data)<<14))
#define  SCPU_CORE_pchannel_ctrl_0_pstate1(data)                                 (0x00003F00&((data)<<8))
#define  SCPU_CORE_pchannel_ctrl_0_write_en0(data)                               (0x00000080&((data)<<7))
#define  SCPU_CORE_pchannel_ctrl_0_preq0(data)                                   (0x00000040&((data)<<6))
#define  SCPU_CORE_pchannel_ctrl_0_pstate0(data)                                 (0x0000003F&(data))
#define  SCPU_CORE_pchannel_ctrl_0_get_write_en3(data)                           ((0x80000000&(data))>>31)
#define  SCPU_CORE_pchannel_ctrl_0_get_preq3(data)                               ((0x40000000&(data))>>30)
#define  SCPU_CORE_pchannel_ctrl_0_get_pstate3(data)                             ((0x3F000000&(data))>>24)
#define  SCPU_CORE_pchannel_ctrl_0_get_write_en2(data)                           ((0x00800000&(data))>>23)
#define  SCPU_CORE_pchannel_ctrl_0_get_preq2(data)                               ((0x00400000&(data))>>22)
#define  SCPU_CORE_pchannel_ctrl_0_get_pstate2(data)                             ((0x003F0000&(data))>>16)
#define  SCPU_CORE_pchannel_ctrl_0_get_write_en1(data)                           ((0x00008000&(data))>>15)
#define  SCPU_CORE_pchannel_ctrl_0_get_preq1(data)                               ((0x00004000&(data))>>14)
#define  SCPU_CORE_pchannel_ctrl_0_get_pstate1(data)                             ((0x00003F00&(data))>>8)
#define  SCPU_CORE_pchannel_ctrl_0_get_write_en0(data)                           ((0x00000080&(data))>>7)
#define  SCPU_CORE_pchannel_ctrl_0_get_preq0(data)                               ((0x00000040&(data))>>6)
#define  SCPU_CORE_pchannel_ctrl_0_get_pstate0(data)                             (0x0000003F&(data))

#define  SCPU_CORE_pchannel_status_0                                            0x1805B4E4
#define  SCPU_CORE_pchannel_status_0_reg_addr                                    "0xB805B4E4"
#define  SCPU_CORE_pchannel_status_0_reg                                         0xB805B4E4
#define  SCPU_CORE_pchannel_status_0_inst_addr                                   "0x0023"
#define  set_SCPU_CORE_pchannel_status_0_reg(data)                               (*((volatile unsigned int*)SCPU_CORE_pchannel_status_0_reg)=data)
#define  get_SCPU_CORE_pchannel_status_0_reg                                     (*((volatile unsigned int*)SCPU_CORE_pchannel_status_0_reg))
#define  SCPU_CORE_pchannel_status_0_pdeny0_shift                                (21)
#define  SCPU_CORE_pchannel_status_0_paccept0_shift                              (20)
#define  SCPU_CORE_pchannel_status_0_pactive0_shift                              (0)
#define  SCPU_CORE_pchannel_status_0_pdeny0_mask                                 (0x00200000)
#define  SCPU_CORE_pchannel_status_0_paccept0_mask                               (0x00100000)
#define  SCPU_CORE_pchannel_status_0_pactive0_mask                               (0x0003FFFF)
#define  SCPU_CORE_pchannel_status_0_pdeny0(data)                                (0x00200000&((data)<<21))
#define  SCPU_CORE_pchannel_status_0_paccept0(data)                              (0x00100000&((data)<<20))
#define  SCPU_CORE_pchannel_status_0_pactive0(data)                              (0x0003FFFF&(data))
#define  SCPU_CORE_pchannel_status_0_get_pdeny0(data)                            ((0x00200000&(data))>>21)
#define  SCPU_CORE_pchannel_status_0_get_paccept0(data)                          ((0x00100000&(data))>>20)
#define  SCPU_CORE_pchannel_status_0_get_pactive0(data)                          (0x0003FFFF&(data))

#define  SCPU_CORE_pchannel_status_1                                            0x1805B4E8
#define  SCPU_CORE_pchannel_status_1_reg_addr                                    "0xB805B4E8"
#define  SCPU_CORE_pchannel_status_1_reg                                         0xB805B4E8
#define  SCPU_CORE_pchannel_status_1_inst_addr                                   "0x0024"
#define  set_SCPU_CORE_pchannel_status_1_reg(data)                               (*((volatile unsigned int*)SCPU_CORE_pchannel_status_1_reg)=data)
#define  get_SCPU_CORE_pchannel_status_1_reg                                     (*((volatile unsigned int*)SCPU_CORE_pchannel_status_1_reg))
#define  SCPU_CORE_pchannel_status_1_pdeny1_shift                                (21)
#define  SCPU_CORE_pchannel_status_1_paccept1_shift                              (20)
#define  SCPU_CORE_pchannel_status_1_pactive1_shift                              (0)
#define  SCPU_CORE_pchannel_status_1_pdeny1_mask                                 (0x00200000)
#define  SCPU_CORE_pchannel_status_1_paccept1_mask                               (0x00100000)
#define  SCPU_CORE_pchannel_status_1_pactive1_mask                               (0x0003FFFF)
#define  SCPU_CORE_pchannel_status_1_pdeny1(data)                                (0x00200000&((data)<<21))
#define  SCPU_CORE_pchannel_status_1_paccept1(data)                              (0x00100000&((data)<<20))
#define  SCPU_CORE_pchannel_status_1_pactive1(data)                              (0x0003FFFF&(data))
#define  SCPU_CORE_pchannel_status_1_get_pdeny1(data)                            ((0x00200000&(data))>>21)
#define  SCPU_CORE_pchannel_status_1_get_paccept1(data)                          ((0x00100000&(data))>>20)
#define  SCPU_CORE_pchannel_status_1_get_pactive1(data)                          (0x0003FFFF&(data))

#define  SCPU_CORE_pchannel_status_2                                            0x1805B4EC
#define  SCPU_CORE_pchannel_status_2_reg_addr                                    "0xB805B4EC"
#define  SCPU_CORE_pchannel_status_2_reg                                         0xB805B4EC
#define  SCPU_CORE_pchannel_status_2_inst_addr                                   "0x0025"
#define  set_SCPU_CORE_pchannel_status_2_reg(data)                               (*((volatile unsigned int*)SCPU_CORE_pchannel_status_2_reg)=data)
#define  get_SCPU_CORE_pchannel_status_2_reg                                     (*((volatile unsigned int*)SCPU_CORE_pchannel_status_2_reg))
#define  SCPU_CORE_pchannel_status_2_pdeny2_shift                                (21)
#define  SCPU_CORE_pchannel_status_2_paccept2_shift                              (20)
#define  SCPU_CORE_pchannel_status_2_pactive2_shift                              (0)
#define  SCPU_CORE_pchannel_status_2_pdeny2_mask                                 (0x00200000)
#define  SCPU_CORE_pchannel_status_2_paccept2_mask                               (0x00100000)
#define  SCPU_CORE_pchannel_status_2_pactive2_mask                               (0x0003FFFF)
#define  SCPU_CORE_pchannel_status_2_pdeny2(data)                                (0x00200000&((data)<<21))
#define  SCPU_CORE_pchannel_status_2_paccept2(data)                              (0x00100000&((data)<<20))
#define  SCPU_CORE_pchannel_status_2_pactive2(data)                              (0x0003FFFF&(data))
#define  SCPU_CORE_pchannel_status_2_get_pdeny2(data)                            ((0x00200000&(data))>>21)
#define  SCPU_CORE_pchannel_status_2_get_paccept2(data)                          ((0x00100000&(data))>>20)
#define  SCPU_CORE_pchannel_status_2_get_pactive2(data)                          (0x0003FFFF&(data))

#define  SCPU_CORE_pchannel_status_3                                            0x1805B4F0
#define  SCPU_CORE_pchannel_status_3_reg_addr                                    "0xB805B4F0"
#define  SCPU_CORE_pchannel_status_3_reg                                         0xB805B4F0
#define  SCPU_CORE_pchannel_status_3_inst_addr                                   "0x0026"
#define  set_SCPU_CORE_pchannel_status_3_reg(data)                               (*((volatile unsigned int*)SCPU_CORE_pchannel_status_3_reg)=data)
#define  get_SCPU_CORE_pchannel_status_3_reg                                     (*((volatile unsigned int*)SCPU_CORE_pchannel_status_3_reg))
#define  SCPU_CORE_pchannel_status_3_pdeny3_shift                                (21)
#define  SCPU_CORE_pchannel_status_3_paccept3_shift                              (20)
#define  SCPU_CORE_pchannel_status_3_pactive3_shift                              (0)
#define  SCPU_CORE_pchannel_status_3_pdeny3_mask                                 (0x00200000)
#define  SCPU_CORE_pchannel_status_3_paccept3_mask                               (0x00100000)
#define  SCPU_CORE_pchannel_status_3_pactive3_mask                               (0x0003FFFF)
#define  SCPU_CORE_pchannel_status_3_pdeny3(data)                                (0x00200000&((data)<<21))
#define  SCPU_CORE_pchannel_status_3_paccept3(data)                              (0x00100000&((data)<<20))
#define  SCPU_CORE_pchannel_status_3_pactive3(data)                              (0x0003FFFF&(data))
#define  SCPU_CORE_pchannel_status_3_get_pdeny3(data)                            ((0x00200000&(data))>>21)
#define  SCPU_CORE_pchannel_status_3_get_paccept3(data)                          ((0x00100000&(data))>>20)
#define  SCPU_CORE_pchannel_status_3_get_pactive3(data)                          (0x0003FFFF&(data))

#define  SCPU_CORE_pchannel_ctrl_1                                              0x1805B4F4
#define  SCPU_CORE_pchannel_ctrl_1_reg_addr                                      "0xB805B4F4"
#define  SCPU_CORE_pchannel_ctrl_1_reg                                           0xB805B4F4
#define  SCPU_CORE_pchannel_ctrl_1_inst_addr                                     "0x0027"
#define  set_SCPU_CORE_pchannel_ctrl_1_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_pchannel_ctrl_1_reg)=data)
#define  get_SCPU_CORE_pchannel_ctrl_1_reg                                       (*((volatile unsigned int*)SCPU_CORE_pchannel_ctrl_1_reg))
#define  SCPU_CORE_pchannel_ctrl_1_clusterpreq_shift                             (7)
#define  SCPU_CORE_pchannel_ctrl_1_clusterpstate_shift                           (0)
#define  SCPU_CORE_pchannel_ctrl_1_clusterpreq_mask                              (0x00000080)
#define  SCPU_CORE_pchannel_ctrl_1_clusterpstate_mask                            (0x0000007F)
#define  SCPU_CORE_pchannel_ctrl_1_clusterpreq(data)                             (0x00000080&((data)<<7))
#define  SCPU_CORE_pchannel_ctrl_1_clusterpstate(data)                           (0x0000007F&(data))
#define  SCPU_CORE_pchannel_ctrl_1_get_clusterpreq(data)                         ((0x00000080&(data))>>7)
#define  SCPU_CORE_pchannel_ctrl_1_get_clusterpstate(data)                       (0x0000007F&(data))

#define  SCPU_CORE_pchannel_status_4                                            0x1805B4F8
#define  SCPU_CORE_pchannel_status_4_reg_addr                                    "0xB805B4F8"
#define  SCPU_CORE_pchannel_status_4_reg                                         0xB805B4F8
#define  SCPU_CORE_pchannel_status_4_inst_addr                                   "0x0028"
#define  set_SCPU_CORE_pchannel_status_4_reg(data)                               (*((volatile unsigned int*)SCPU_CORE_pchannel_status_4_reg)=data)
#define  get_SCPU_CORE_pchannel_status_4_reg                                     (*((volatile unsigned int*)SCPU_CORE_pchannel_status_4_reg))
#define  SCPU_CORE_pchannel_status_4_clusterpdeny_shift                          (21)
#define  SCPU_CORE_pchannel_status_4_clusterpaccept_shift                        (20)
#define  SCPU_CORE_pchannel_status_4_clusterpactive_shift                        (0)
#define  SCPU_CORE_pchannel_status_4_clusterpdeny_mask                           (0x00200000)
#define  SCPU_CORE_pchannel_status_4_clusterpaccept_mask                         (0x00100000)
#define  SCPU_CORE_pchannel_status_4_clusterpactive_mask                         (0x000FFFFF)
#define  SCPU_CORE_pchannel_status_4_clusterpdeny(data)                          (0x00200000&((data)<<21))
#define  SCPU_CORE_pchannel_status_4_clusterpaccept(data)                        (0x00100000&((data)<<20))
#define  SCPU_CORE_pchannel_status_4_clusterpactive(data)                        (0x000FFFFF&(data))
#define  SCPU_CORE_pchannel_status_4_get_clusterpdeny(data)                      ((0x00200000&(data))>>21)
#define  SCPU_CORE_pchannel_status_4_get_clusterpaccept(data)                    ((0x00100000&(data))>>20)
#define  SCPU_CORE_pchannel_status_4_get_clusterpactive(data)                    (0x000FFFFF&(data))

#define  SCPU_CORE_mbisr_ctrl_0                                                 0x1805B444
#define  SCPU_CORE_mbisr_ctrl_0_reg_addr                                         "0xB805B444"
#define  SCPU_CORE_mbisr_ctrl_0_reg                                              0xB805B444
#define  SCPU_CORE_mbisr_ctrl_0_inst_addr                                        "0x0029"
#define  set_SCPU_CORE_mbisr_ctrl_0_reg(data)                                    (*((volatile unsigned int*)SCPU_CORE_mbisr_ctrl_0_reg)=data)
#define  get_SCPU_CORE_mbisr_ctrl_0_reg                                          (*((volatile unsigned int*)SCPU_CORE_mbisr_ctrl_0_reg))
#define  SCPU_CORE_mbisr_ctrl_0_ananke4_drf_bisr_mode_shift                      (28)
#define  SCPU_CORE_mbisr_ctrl_0_ananke4_drf_bisr_test_resume_shift               (24)
#define  SCPU_CORE_mbisr_ctrl_0_ananke4_second_run_en_shift                      (20)
#define  SCPU_CORE_mbisr_ctrl_0_ananke4_drf_bisr_mode_mask                       (0x30000000)
#define  SCPU_CORE_mbisr_ctrl_0_ananke4_drf_bisr_test_resume_mask                (0x03000000)
#define  SCPU_CORE_mbisr_ctrl_0_ananke4_second_run_en_mask                       (0x00300000)
#define  SCPU_CORE_mbisr_ctrl_0_ananke4_drf_bisr_mode(data)                      (0x30000000&((data)<<28))
#define  SCPU_CORE_mbisr_ctrl_0_ananke4_drf_bisr_test_resume(data)               (0x03000000&((data)<<24))
#define  SCPU_CORE_mbisr_ctrl_0_ananke4_second_run_en(data)                      (0x00300000&((data)<<20))
#define  SCPU_CORE_mbisr_ctrl_0_get_ananke4_drf_bisr_mode(data)                  ((0x30000000&(data))>>28)
#define  SCPU_CORE_mbisr_ctrl_0_get_ananke4_drf_bisr_test_resume(data)           ((0x03000000&(data))>>24)
#define  SCPU_CORE_mbisr_ctrl_0_get_ananke4_second_run_en(data)                  ((0x00300000&(data))>>20)

#define  SCPU_CORE_mbisr_status_0                                               0x1805B448
#define  SCPU_CORE_mbisr_status_0_reg_addr                                       "0xB805B448"
#define  SCPU_CORE_mbisr_status_0_reg                                            0xB805B448
#define  SCPU_CORE_mbisr_status_0_inst_addr                                      "0x002A"
#define  set_SCPU_CORE_mbisr_status_0_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_mbisr_status_0_reg)=data)
#define  get_SCPU_CORE_mbisr_status_0_reg                                        (*((volatile unsigned int*)SCPU_CORE_mbisr_status_0_reg))
#define  SCPU_CORE_mbisr_status_0_ananke4_drf_bisr_done_shift                    (28)
#define  SCPU_CORE_mbisr_status_0_ananke4_drf_bisr_start_pause_shift             (24)
#define  SCPU_CORE_mbisr_status_0_ananke4_drf_bisr_done_mask                     (0x30000000)
#define  SCPU_CORE_mbisr_status_0_ananke4_drf_bisr_start_pause_mask              (0x03000000)
#define  SCPU_CORE_mbisr_status_0_ananke4_drf_bisr_done(data)                    (0x30000000&((data)<<28))
#define  SCPU_CORE_mbisr_status_0_ananke4_drf_bisr_start_pause(data)             (0x03000000&((data)<<24))
#define  SCPU_CORE_mbisr_status_0_get_ananke4_drf_bisr_done(data)                ((0x30000000&(data))>>28)
#define  SCPU_CORE_mbisr_status_0_get_ananke4_drf_bisr_start_pause(data)         ((0x03000000&(data))>>24)

#define  SCPU_CORE_mbisr_status_1                                               0x1805B44C
#define  SCPU_CORE_mbisr_status_1_reg_addr                                       "0xB805B44C"
#define  SCPU_CORE_mbisr_status_1_reg                                            0xB805B44C
#define  SCPU_CORE_mbisr_status_1_inst_addr                                      "0x002B"
#define  set_SCPU_CORE_mbisr_status_1_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_mbisr_status_1_reg)=data)
#define  get_SCPU_CORE_mbisr_status_1_reg                                        (*((volatile unsigned int*)SCPU_CORE_mbisr_status_1_reg))
#define  SCPU_CORE_mbisr_status_1_ananke4_drf_bisr_fail_shift                    (16)
#define  SCPU_CORE_mbisr_status_1_ananke4_bisr_fail_shift                        (0)
#define  SCPU_CORE_mbisr_status_1_ananke4_drf_bisr_fail_mask                     (0x00FF0000)
#define  SCPU_CORE_mbisr_status_1_ananke4_bisr_fail_mask                         (0x000000FF)
#define  SCPU_CORE_mbisr_status_1_ananke4_drf_bisr_fail(data)                    (0x00FF0000&((data)<<16))
#define  SCPU_CORE_mbisr_status_1_ananke4_bisr_fail(data)                        (0x000000FF&(data))
#define  SCPU_CORE_mbisr_status_1_get_ananke4_drf_bisr_fail(data)                ((0x00FF0000&(data))>>16)
#define  SCPU_CORE_mbisr_status_1_get_ananke4_bisr_fail(data)                    (0x000000FF&(data))

#define  SCPU_CORE_mbisr_status_2                                               0x1805B450
#define  SCPU_CORE_mbisr_status_2_reg_addr                                       "0xB805B450"
#define  SCPU_CORE_mbisr_status_2_reg                                            0xB805B450
#define  SCPU_CORE_mbisr_status_2_inst_addr                                      "0x002C"
#define  set_SCPU_CORE_mbisr_status_2_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_mbisr_status_2_reg)=data)
#define  get_SCPU_CORE_mbisr_status_2_reg                                        (*((volatile unsigned int*)SCPU_CORE_mbisr_status_2_reg))
#define  SCPU_CORE_mbisr_status_2_ananke4_bisr_repaired_shift                    (0)
#define  SCPU_CORE_mbisr_status_2_ananke4_bisr_repaired_mask                     (0x00000003)
#define  SCPU_CORE_mbisr_status_2_ananke4_bisr_repaired(data)                    (0x00000003&(data))
#define  SCPU_CORE_mbisr_status_2_get_ananke4_bisr_repaired(data)                (0x00000003&(data))

#define  SCPU_CORE_mbisr_status_5                                               0x1805B45C
#define  SCPU_CORE_mbisr_status_5_reg_addr                                       "0xB805B45C"
#define  SCPU_CORE_mbisr_status_5_reg                                            0xB805B45C
#define  SCPU_CORE_mbisr_status_5_inst_addr                                      "0x002D"
#define  set_SCPU_CORE_mbisr_status_5_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_mbisr_status_5_reg)=data)
#define  get_SCPU_CORE_mbisr_status_5_reg                                        (*((volatile unsigned int*)SCPU_CORE_mbisr_status_5_reg))
#define  SCPU_CORE_mbisr_status_5_ananke4_bisr_out_63_32_shift                   (0)
#define  SCPU_CORE_mbisr_status_5_ananke4_bisr_out_63_32_mask                    (0xFFFFFFFF)
#define  SCPU_CORE_mbisr_status_5_ananke4_bisr_out_63_32(data)                   (0xFFFFFFFF&(data))
#define  SCPU_CORE_mbisr_status_5_get_ananke4_bisr_out_63_32(data)               (0xFFFFFFFF&(data))

#define  SCPU_CORE_mbisr_status_6                                               0x1805B460
#define  SCPU_CORE_mbisr_status_6_reg_addr                                       "0xB805B460"
#define  SCPU_CORE_mbisr_status_6_reg                                            0xB805B460
#define  SCPU_CORE_mbisr_status_6_inst_addr                                      "0x002E"
#define  set_SCPU_CORE_mbisr_status_6_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_mbisr_status_6_reg)=data)
#define  get_SCPU_CORE_mbisr_status_6_reg                                        (*((volatile unsigned int*)SCPU_CORE_mbisr_status_6_reg))
#define  SCPU_CORE_mbisr_status_6_ananke4_bisr_out_31_0_shift                    (0)
#define  SCPU_CORE_mbisr_status_6_ananke4_bisr_out_31_0_mask                     (0xFFFFFFFF)
#define  SCPU_CORE_mbisr_status_6_ananke4_bisr_out_31_0(data)                    (0xFFFFFFFF&(data))
#define  SCPU_CORE_mbisr_status_6_get_ananke4_bisr_out_31_0(data)                (0xFFFFFFFF&(data))

#define  SCPU_CORE_coordinator_ctrl_0                                           0x1805B480
#define  SCPU_CORE_coordinator_ctrl_0_reg_addr                                   "0xB805B480"
#define  SCPU_CORE_coordinator_ctrl_0_reg                                        0xB805B480
#define  SCPU_CORE_coordinator_ctrl_0_inst_addr                                  "0x002F"
#define  set_SCPU_CORE_coordinator_ctrl_0_reg(data)                              (*((volatile unsigned int*)SCPU_CORE_coordinator_ctrl_0_reg)=data)
#define  get_SCPU_CORE_coordinator_ctrl_0_reg                                    (*((volatile unsigned int*)SCPU_CORE_coordinator_ctrl_0_reg))
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_coord_rstn_shift                   (31)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_shrbus_go_shift                    (30)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_shrbus_en_cpu_shift                (24)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_mbistcfg_sel_shift                 (16)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_bist_mode_all_shift                (8)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_drf_bist_mode_shift                (0)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_coord_rstn_mask                    (0x80000000)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_shrbus_go_mask                     (0x40000000)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_shrbus_en_cpu_mask                 (0x1F000000)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_mbistcfg_sel_mask                  (0x001F0000)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_bist_mode_all_mask                 (0x00001F00)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_drf_bist_mode_mask                 (0x0000001F)
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_coord_rstn(data)                   (0x80000000&((data)<<31))
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_shrbus_go(data)                    (0x40000000&((data)<<30))
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_shrbus_en_cpu(data)                (0x1F000000&((data)<<24))
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_mbistcfg_sel(data)                 (0x001F0000&((data)<<16))
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_bist_mode_all(data)                (0x00001F00&((data)<<8))
#define  SCPU_CORE_coordinator_ctrl_0_ananke4_drf_bist_mode(data)                (0x0000001F&(data))
#define  SCPU_CORE_coordinator_ctrl_0_get_ananke4_coord_rstn(data)               ((0x80000000&(data))>>31)
#define  SCPU_CORE_coordinator_ctrl_0_get_ananke4_shrbus_go(data)                ((0x40000000&(data))>>30)
#define  SCPU_CORE_coordinator_ctrl_0_get_ananke4_shrbus_en_cpu(data)            ((0x1F000000&(data))>>24)
#define  SCPU_CORE_coordinator_ctrl_0_get_ananke4_mbistcfg_sel(data)             ((0x001F0000&(data))>>16)
#define  SCPU_CORE_coordinator_ctrl_0_get_ananke4_bist_mode_all(data)            ((0x00001F00&(data))>>8)
#define  SCPU_CORE_coordinator_ctrl_0_get_ananke4_drf_bist_mode(data)            (0x0000001F&(data))

#define  SCPU_CORE_coordinator_ctrl_1                                           0x1805B484
#define  SCPU_CORE_coordinator_ctrl_1_reg_addr                                   "0xB805B484"
#define  SCPU_CORE_coordinator_ctrl_1_reg                                        0xB805B484
#define  SCPU_CORE_coordinator_ctrl_1_inst_addr                                  "0x0030"
#define  set_SCPU_CORE_coordinator_ctrl_1_reg(data)                              (*((volatile unsigned int*)SCPU_CORE_coordinator_ctrl_1_reg)=data)
#define  get_SCPU_CORE_coordinator_ctrl_1_reg                                    (*((volatile unsigned int*)SCPU_CORE_coordinator_ctrl_1_reg))
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_drf_test_resume_shift              (24)
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_diag_mode_scpu_shift               (16)
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_diag_memarray_sel_shift            (8)
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_cpucore_sel_shift                  (0)
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_drf_test_resume_mask               (0x1F000000)
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_diag_mode_scpu_mask                (0x00030000)
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_diag_memarray_sel_mask             (0x00003F00)
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_cpucore_sel_mask                   (0x00000007)
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_drf_test_resume(data)              (0x1F000000&((data)<<24))
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_diag_mode_scpu(data)               (0x00030000&((data)<<16))
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_diag_memarray_sel(data)            (0x00003F00&((data)<<8))
#define  SCPU_CORE_coordinator_ctrl_1_ananke4_cpucore_sel(data)                  (0x00000007&(data))
#define  SCPU_CORE_coordinator_ctrl_1_get_ananke4_drf_test_resume(data)          ((0x1F000000&(data))>>24)
#define  SCPU_CORE_coordinator_ctrl_1_get_ananke4_diag_mode_scpu(data)           ((0x00030000&(data))>>16)
#define  SCPU_CORE_coordinator_ctrl_1_get_ananke4_diag_memarray_sel(data)        ((0x00003F00&(data))>>8)
#define  SCPU_CORE_coordinator_ctrl_1_get_ananke4_cpucore_sel(data)              (0x00000007&(data))

#define  SCPU_CORE_coordinator_ctrl_2                                           0x1805B488
#define  SCPU_CORE_coordinator_ctrl_2_reg_addr                                   "0xB805B488"
#define  SCPU_CORE_coordinator_ctrl_2_reg                                        0xB805B488
#define  SCPU_CORE_coordinator_ctrl_2_inst_addr                                  "0x0031"
#define  set_SCPU_CORE_coordinator_ctrl_2_reg(data)                              (*((volatile unsigned int*)SCPU_CORE_coordinator_ctrl_2_reg)=data)
#define  get_SCPU_CORE_coordinator_ctrl_2_reg                                    (*((volatile unsigned int*)SCPU_CORE_coordinator_ctrl_2_reg))
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_shrbus_delay_enable_shift          (20)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_shrbus_delay_num_shift             (16)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_mbist_dmy_wr_enable_shift          (15)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_mbist_delay_enable_shift           (14)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_mbist_delay_num_shift              (12)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_bist_mode_40_32_shift              (0)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_shrbus_delay_enable_mask           (0x00100000)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_shrbus_delay_num_mask              (0x000F0000)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_mbist_dmy_wr_enable_mask           (0x00008000)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_mbist_delay_enable_mask            (0x00004000)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_mbist_delay_num_mask               (0x00003000)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_bist_mode_40_32_mask               (0x000001FF)
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_shrbus_delay_enable(data)          (0x00100000&((data)<<20))
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_shrbus_delay_num(data)             (0x000F0000&((data)<<16))
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_mbist_dmy_wr_enable(data)          (0x00008000&((data)<<15))
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_mbist_delay_enable(data)           (0x00004000&((data)<<14))
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_mbist_delay_num(data)              (0x00003000&((data)<<12))
#define  SCPU_CORE_coordinator_ctrl_2_ananke4_bist_mode_40_32(data)              (0x000001FF&(data))
#define  SCPU_CORE_coordinator_ctrl_2_get_ananke4_shrbus_delay_enable(data)      ((0x00100000&(data))>>20)
#define  SCPU_CORE_coordinator_ctrl_2_get_ananke4_shrbus_delay_num(data)         ((0x000F0000&(data))>>16)
#define  SCPU_CORE_coordinator_ctrl_2_get_ananke4_mbist_dmy_wr_enable(data)      ((0x00008000&(data))>>15)
#define  SCPU_CORE_coordinator_ctrl_2_get_ananke4_mbist_delay_enable(data)       ((0x00004000&(data))>>14)
#define  SCPU_CORE_coordinator_ctrl_2_get_ananke4_mbist_delay_num(data)          ((0x00003000&(data))>>12)
#define  SCPU_CORE_coordinator_ctrl_2_get_ananke4_bist_mode_40_32(data)          (0x000001FF&(data))

#define  SCPU_CORE_coordinator_ctrl_3                                           0x1805B48C
#define  SCPU_CORE_coordinator_ctrl_3_reg_addr                                   "0xB805B48C"
#define  SCPU_CORE_coordinator_ctrl_3_reg                                        0xB805B48C
#define  SCPU_CORE_coordinator_ctrl_3_inst_addr                                  "0x0032"
#define  set_SCPU_CORE_coordinator_ctrl_3_reg(data)                              (*((volatile unsigned int*)SCPU_CORE_coordinator_ctrl_3_reg)=data)
#define  get_SCPU_CORE_coordinator_ctrl_3_reg                                    (*((volatile unsigned int*)SCPU_CORE_coordinator_ctrl_3_reg))
#define  SCPU_CORE_coordinator_ctrl_3_ananke4_bist_mode_31_0_shift               (0)
#define  SCPU_CORE_coordinator_ctrl_3_ananke4_bist_mode_31_0_mask                (0xFFFFFFFF)
#define  SCPU_CORE_coordinator_ctrl_3_ananke4_bist_mode_31_0(data)               (0xFFFFFFFF&(data))
#define  SCPU_CORE_coordinator_ctrl_3_get_ananke4_bist_mode_31_0(data)           (0xFFFFFFFF&(data))

#define  SCPU_CORE_coordinator_status_0                                         0x1805B490
#define  SCPU_CORE_coordinator_status_0_reg_addr                                 "0xB805B490"
#define  SCPU_CORE_coordinator_status_0_reg                                      0xB805B490
#define  SCPU_CORE_coordinator_status_0_inst_addr                                "0x0033"
#define  set_SCPU_CORE_coordinator_status_0_reg(data)                            (*((volatile unsigned int*)SCPU_CORE_coordinator_status_0_reg)=data)
#define  get_SCPU_CORE_coordinator_status_0_reg                                  (*((volatile unsigned int*)SCPU_CORE_coordinator_status_0_reg))
#define  SCPU_CORE_coordinator_status_0_ananke4_diag_so_scpu_shift               (31)
#define  SCPU_CORE_coordinator_status_0_ananke4_diag_start_scpu_shift            (30)
#define  SCPU_CORE_coordinator_status_0_ananke4_mbistack_shift                   (24)
#define  SCPU_CORE_coordinator_status_0_ananke4_mbistreq_dbg_shift               (16)
#define  SCPU_CORE_coordinator_status_0_ananke4_diag_so_scpu_mask                (0x80000000)
#define  SCPU_CORE_coordinator_status_0_ananke4_diag_start_scpu_mask             (0x40000000)
#define  SCPU_CORE_coordinator_status_0_ananke4_mbistack_mask                    (0x1F000000)
#define  SCPU_CORE_coordinator_status_0_ananke4_mbistreq_dbg_mask                (0x001F0000)
#define  SCPU_CORE_coordinator_status_0_ananke4_diag_so_scpu(data)               (0x80000000&((data)<<31))
#define  SCPU_CORE_coordinator_status_0_ananke4_diag_start_scpu(data)            (0x40000000&((data)<<30))
#define  SCPU_CORE_coordinator_status_0_ananke4_mbistack(data)                   (0x1F000000&((data)<<24))
#define  SCPU_CORE_coordinator_status_0_ananke4_mbistreq_dbg(data)               (0x001F0000&((data)<<16))
#define  SCPU_CORE_coordinator_status_0_get_ananke4_diag_so_scpu(data)           ((0x80000000&(data))>>31)
#define  SCPU_CORE_coordinator_status_0_get_ananke4_diag_start_scpu(data)        ((0x40000000&(data))>>30)
#define  SCPU_CORE_coordinator_status_0_get_ananke4_mbistack(data)               ((0x1F000000&(data))>>24)
#define  SCPU_CORE_coordinator_status_0_get_ananke4_mbistreq_dbg(data)           ((0x001F0000&(data))>>16)

#define  SCPU_CORE_coordinator_status_1                                         0x1805B494
#define  SCPU_CORE_coordinator_status_1_reg_addr                                 "0xB805B494"
#define  SCPU_CORE_coordinator_status_1_reg                                      0xB805B494
#define  SCPU_CORE_coordinator_status_1_inst_addr                                "0x0034"
#define  set_SCPU_CORE_coordinator_status_1_reg(data)                            (*((volatile unsigned int*)SCPU_CORE_coordinator_status_1_reg)=data)
#define  get_SCPU_CORE_coordinator_status_1_reg                                  (*((volatile unsigned int*)SCPU_CORE_coordinator_status_1_reg))
#define  SCPU_CORE_coordinator_status_1_ananke4_mbist_fnsh_shift                 (24)
#define  SCPU_CORE_coordinator_status_1_ananke4_bist_done_40_32_shift            (0)
#define  SCPU_CORE_coordinator_status_1_ananke4_mbist_fnsh_mask                  (0x1F000000)
#define  SCPU_CORE_coordinator_status_1_ananke4_bist_done_40_32_mask             (0x000001FF)
#define  SCPU_CORE_coordinator_status_1_ananke4_mbist_fnsh(data)                 (0x1F000000&((data)<<24))
#define  SCPU_CORE_coordinator_status_1_ananke4_bist_done_40_32(data)            (0x000001FF&(data))
#define  SCPU_CORE_coordinator_status_1_get_ananke4_mbist_fnsh(data)             ((0x1F000000&(data))>>24)
#define  SCPU_CORE_coordinator_status_1_get_ananke4_bist_done_40_32(data)        (0x000001FF&(data))

#define  SCPU_CORE_coordinator_status_2                                         0x1805B498
#define  SCPU_CORE_coordinator_status_2_reg_addr                                 "0xB805B498"
#define  SCPU_CORE_coordinator_status_2_reg                                      0xB805B498
#define  SCPU_CORE_coordinator_status_2_inst_addr                                "0x0035"
#define  set_SCPU_CORE_coordinator_status_2_reg(data)                            (*((volatile unsigned int*)SCPU_CORE_coordinator_status_2_reg)=data)
#define  get_SCPU_CORE_coordinator_status_2_reg                                  (*((volatile unsigned int*)SCPU_CORE_coordinator_status_2_reg))
#define  SCPU_CORE_coordinator_status_2_ananke4_bist_done_31_0_shift             (0)
#define  SCPU_CORE_coordinator_status_2_ananke4_bist_done_31_0_mask              (0xFFFFFFFF)
#define  SCPU_CORE_coordinator_status_2_ananke4_bist_done_31_0(data)             (0xFFFFFFFF&(data))
#define  SCPU_CORE_coordinator_status_2_get_ananke4_bist_done_31_0(data)         (0xFFFFFFFF&(data))

#define  SCPU_CORE_coordinator_status_3                                         0x1805B49C
#define  SCPU_CORE_coordinator_status_3_reg_addr                                 "0xB805B49C"
#define  SCPU_CORE_coordinator_status_3_reg                                      0xB805B49C
#define  SCPU_CORE_coordinator_status_3_inst_addr                                "0x0036"
#define  set_SCPU_CORE_coordinator_status_3_reg(data)                            (*((volatile unsigned int*)SCPU_CORE_coordinator_status_3_reg)=data)
#define  get_SCPU_CORE_coordinator_status_3_reg                                  (*((volatile unsigned int*)SCPU_CORE_coordinator_status_3_reg))
#define  SCPU_CORE_coordinator_status_3_ananke4_drf_start_pause_shift            (24)
#define  SCPU_CORE_coordinator_status_3_ananke4_drf_bist_done_shift              (16)
#define  SCPU_CORE_coordinator_status_3_ananke4_drf_start_pause_mask             (0x1F000000)
#define  SCPU_CORE_coordinator_status_3_ananke4_drf_bist_done_mask               (0x001F0000)
#define  SCPU_CORE_coordinator_status_3_ananke4_drf_start_pause(data)            (0x1F000000&((data)<<24))
#define  SCPU_CORE_coordinator_status_3_ananke4_drf_bist_done(data)              (0x001F0000&((data)<<16))
#define  SCPU_CORE_coordinator_status_3_get_ananke4_drf_start_pause(data)        ((0x1F000000&(data))>>24)
#define  SCPU_CORE_coordinator_status_3_get_ananke4_drf_bist_done(data)          ((0x001F0000&(data))>>16)

#define  SCPU_CORE_coordinator_status_4                                         0x1805B4A0
#define  SCPU_CORE_coordinator_status_4_reg_addr                                 "0xB805B4A0"
#define  SCPU_CORE_coordinator_status_4_reg                                      0xB805B4A0
#define  SCPU_CORE_coordinator_status_4_inst_addr                                "0x0037"
#define  set_SCPU_CORE_coordinator_status_4_reg(data)                            (*((volatile unsigned int*)SCPU_CORE_coordinator_status_4_reg)=data)
#define  get_SCPU_CORE_coordinator_status_4_reg                                  (*((volatile unsigned int*)SCPU_CORE_coordinator_status_4_reg))
#define  SCPU_CORE_coordinator_status_4_ananke4_bist_fail_152_128_shift          (0)
#define  SCPU_CORE_coordinator_status_4_ananke4_bist_fail_152_128_mask           (0x01FFFFFF)
#define  SCPU_CORE_coordinator_status_4_ananke4_bist_fail_152_128(data)          (0x01FFFFFF&(data))
#define  SCPU_CORE_coordinator_status_4_get_ananke4_bist_fail_152_128(data)      (0x01FFFFFF&(data))

#define  SCPU_CORE_coordinator_status_5                                         0x1805B4A4
#define  SCPU_CORE_coordinator_status_5_reg_addr                                 "0xB805B4A4"
#define  SCPU_CORE_coordinator_status_5_reg                                      0xB805B4A4
#define  SCPU_CORE_coordinator_status_5_inst_addr                                "0x0038"
#define  set_SCPU_CORE_coordinator_status_5_reg(data)                            (*((volatile unsigned int*)SCPU_CORE_coordinator_status_5_reg)=data)
#define  get_SCPU_CORE_coordinator_status_5_reg                                  (*((volatile unsigned int*)SCPU_CORE_coordinator_status_5_reg))
#define  SCPU_CORE_coordinator_status_5_ananke4_bist_fail_127_96_shift           (0)
#define  SCPU_CORE_coordinator_status_5_ananke4_bist_fail_127_96_mask            (0xFFFFFFFF)
#define  SCPU_CORE_coordinator_status_5_ananke4_bist_fail_127_96(data)           (0xFFFFFFFF&(data))
#define  SCPU_CORE_coordinator_status_5_get_ananke4_bist_fail_127_96(data)       (0xFFFFFFFF&(data))

#define  SCPU_CORE_coordinator_status_6                                         0x1805B4A8
#define  SCPU_CORE_coordinator_status_6_reg_addr                                 "0xB805B4A8"
#define  SCPU_CORE_coordinator_status_6_reg                                      0xB805B4A8
#define  SCPU_CORE_coordinator_status_6_inst_addr                                "0x0039"
#define  set_SCPU_CORE_coordinator_status_6_reg(data)                            (*((volatile unsigned int*)SCPU_CORE_coordinator_status_6_reg)=data)
#define  get_SCPU_CORE_coordinator_status_6_reg                                  (*((volatile unsigned int*)SCPU_CORE_coordinator_status_6_reg))
#define  SCPU_CORE_coordinator_status_6_ananke4_bist_fail_95_64_shift            (0)
#define  SCPU_CORE_coordinator_status_6_ananke4_bist_fail_95_64_mask             (0xFFFFFFFF)
#define  SCPU_CORE_coordinator_status_6_ananke4_bist_fail_95_64(data)            (0xFFFFFFFF&(data))
#define  SCPU_CORE_coordinator_status_6_get_ananke4_bist_fail_95_64(data)        (0xFFFFFFFF&(data))

#define  SCPU_CORE_coordinator_status_7                                         0x1805B4AC
#define  SCPU_CORE_coordinator_status_7_reg_addr                                 "0xB805B4AC"
#define  SCPU_CORE_coordinator_status_7_reg                                      0xB805B4AC
#define  SCPU_CORE_coordinator_status_7_inst_addr                                "0x003A"
#define  set_SCPU_CORE_coordinator_status_7_reg(data)                            (*((volatile unsigned int*)SCPU_CORE_coordinator_status_7_reg)=data)
#define  get_SCPU_CORE_coordinator_status_7_reg                                  (*((volatile unsigned int*)SCPU_CORE_coordinator_status_7_reg))
#define  SCPU_CORE_coordinator_status_7_ananke4_bist_fail_63_32_shift            (0)
#define  SCPU_CORE_coordinator_status_7_ananke4_bist_fail_63_32_mask             (0xFFFFFFFF)
#define  SCPU_CORE_coordinator_status_7_ananke4_bist_fail_63_32(data)            (0xFFFFFFFF&(data))
#define  SCPU_CORE_coordinator_status_7_get_ananke4_bist_fail_63_32(data)        (0xFFFFFFFF&(data))

#define  SCPU_CORE_coordinator_status_8                                         0x1805B4B0
#define  SCPU_CORE_coordinator_status_8_reg_addr                                 "0xB805B4B0"
#define  SCPU_CORE_coordinator_status_8_reg                                      0xB805B4B0
#define  SCPU_CORE_coordinator_status_8_inst_addr                                "0x003B"
#define  set_SCPU_CORE_coordinator_status_8_reg(data)                            (*((volatile unsigned int*)SCPU_CORE_coordinator_status_8_reg)=data)
#define  get_SCPU_CORE_coordinator_status_8_reg                                  (*((volatile unsigned int*)SCPU_CORE_coordinator_status_8_reg))
#define  SCPU_CORE_coordinator_status_8_ananke4_bist_fail_31_0_shift             (0)
#define  SCPU_CORE_coordinator_status_8_ananke4_bist_fail_31_0_mask              (0xFFFFFFFF)
#define  SCPU_CORE_coordinator_status_8_ananke4_bist_fail_31_0(data)             (0xFFFFFFFF&(data))
#define  SCPU_CORE_coordinator_status_8_get_ananke4_bist_fail_31_0(data)         (0xFFFFFFFF&(data))

#define  SCPU_CORE_diag_so_ctrl_0                                               0x1805B4C4
#define  SCPU_CORE_diag_so_ctrl_0_reg_addr                                       "0xB805B4C4"
#define  SCPU_CORE_diag_so_ctrl_0_reg                                            0xB805B4C4
#define  SCPU_CORE_diag_so_ctrl_0_inst_addr                                      "0x003C"
#define  set_SCPU_CORE_diag_so_ctrl_0_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_diag_so_ctrl_0_reg)=data)
#define  get_SCPU_CORE_diag_so_ctrl_0_reg                                        (*((volatile unsigned int*)SCPU_CORE_diag_so_ctrl_0_reg))
#define  SCPU_CORE_diag_so_ctrl_0_diag_ready_shift                               (4)
#define  SCPU_CORE_diag_so_ctrl_0_diag_clear_shift                               (0)
#define  SCPU_CORE_diag_so_ctrl_0_diag_ready_mask                                (0x00000010)
#define  SCPU_CORE_diag_so_ctrl_0_diag_clear_mask                                (0x00000001)
#define  SCPU_CORE_diag_so_ctrl_0_diag_ready(data)                               (0x00000010&((data)<<4))
#define  SCPU_CORE_diag_so_ctrl_0_diag_clear(data)                               (0x00000001&(data))
#define  SCPU_CORE_diag_so_ctrl_0_get_diag_ready(data)                           ((0x00000010&(data))>>4)
#define  SCPU_CORE_diag_so_ctrl_0_get_diag_clear(data)                           (0x00000001&(data))

#define  SCPU_CORE_diag_so_result_0                                             0x1805B4C8
#define  SCPU_CORE_diag_so_result_0_reg_addr                                     "0xB805B4C8"
#define  SCPU_CORE_diag_so_result_0_reg                                          0xB805B4C8
#define  SCPU_CORE_diag_so_result_0_inst_addr                                    "0x003D"
#define  set_SCPU_CORE_diag_so_result_0_reg(data)                                (*((volatile unsigned int*)SCPU_CORE_diag_so_result_0_reg)=data)
#define  get_SCPU_CORE_diag_so_result_0_reg                                      (*((volatile unsigned int*)SCPU_CORE_diag_so_result_0_reg))
#define  SCPU_CORE_diag_so_result_0_diag_so_shift                                (0)
#define  SCPU_CORE_diag_so_result_0_diag_so_mask                                 (0xFFFFFFFF)
#define  SCPU_CORE_diag_so_result_0_diag_so(data)                                (0xFFFFFFFF&(data))
#define  SCPU_CORE_diag_so_result_0_get_diag_so(data)                            (0xFFFFFFFF&(data))

#define  SCPU_CORE_general_ctrl0                                                0x1805B800
#define  SCPU_CORE_general_ctrl0_reg_addr                                        "0xB805B800"
#define  SCPU_CORE_general_ctrl0_reg                                             0xB805B800
#define  SCPU_CORE_general_ctrl0_inst_addr                                       "0x003E"
#define  set_SCPU_CORE_general_ctrl0_reg(data)                                   (*((volatile unsigned int*)SCPU_CORE_general_ctrl0_reg)=data)
#define  get_SCPU_CORE_general_ctrl0_reg                                         (*((volatile unsigned int*)SCPU_CORE_general_ctrl0_reg))
#define  SCPU_CORE_general_ctrl0_partnumber_shift                                (4)
#define  SCPU_CORE_general_ctrl0_revision_shift                                  (0)
#define  SCPU_CORE_general_ctrl0_partnumber_mask                                 (0x0000FFF0)
#define  SCPU_CORE_general_ctrl0_revision_mask                                   (0x0000000F)
#define  SCPU_CORE_general_ctrl0_partnumber(data)                                (0x0000FFF0&((data)<<4))
#define  SCPU_CORE_general_ctrl0_revision(data)                                  (0x0000000F&(data))
#define  SCPU_CORE_general_ctrl0_get_partnumber(data)                            ((0x0000FFF0&(data))>>4)
#define  SCPU_CORE_general_ctrl0_get_revision(data)                              (0x0000000F&(data))

#define  SCPU_CORE_coreclk_ctrl0                                                0x1805B820
#define  SCPU_CORE_coreclk_ctrl0_reg_addr                                        "0xB805B820"
#define  SCPU_CORE_coreclk_ctrl0_reg                                             0xB805B820
#define  SCPU_CORE_coreclk_ctrl0_inst_addr                                       "0x003F"
#define  set_SCPU_CORE_coreclk_ctrl0_reg(data)                                   (*((volatile unsigned int*)SCPU_CORE_coreclk_ctrl0_reg)=data)
#define  get_SCPU_CORE_coreclk_ctrl0_reg                                         (*((volatile unsigned int*)SCPU_CORE_coreclk_ctrl0_reg))
#define  SCPU_CORE_coreclk_ctrl0_dftcoreclkdisable_shift                         (0)
#define  SCPU_CORE_coreclk_ctrl0_dftcoreclkdisable_mask                          (0x0000000F)
#define  SCPU_CORE_coreclk_ctrl0_dftcoreclkdisable(data)                         (0x0000000F&(data))
#define  SCPU_CORE_coreclk_ctrl0_get_dftcoreclkdisable(data)                     (0x0000000F&(data))

#define  SCPU_CORE_auth_slave_ananke                                            0x1805B824
#define  SCPU_CORE_auth_slave_ananke_reg_addr                                    "0xB805B824"
#define  SCPU_CORE_auth_slave_ananke_reg                                         0xB805B824
#define  SCPU_CORE_auth_slave_ananke_inst_addr                                   "0x0040"
#define  set_SCPU_CORE_auth_slave_ananke_reg(data)                               (*((volatile unsigned int*)SCPU_CORE_auth_slave_ananke_reg)=data)
#define  get_SCPU_CORE_auth_slave_ananke_reg                                     (*((volatile unsigned int*)SCPU_CORE_auth_slave_ananke_reg))
#define  SCPU_CORE_auth_slave_ananke_dbgen_auth_slave_ananke_source_sel_shift    (3)
#define  SCPU_CORE_auth_slave_ananke_niden_auth_slave_ananke_source_sel_shift    (2)
#define  SCPU_CORE_auth_slave_ananke_spiden_auth_slave_ananke_source_sel_shift   (1)
#define  SCPU_CORE_auth_slave_ananke_spniden_auth_slave_ananke_source_sel_shift  (0)
#define  SCPU_CORE_auth_slave_ananke_dbgen_auth_slave_ananke_source_sel_mask     (0x00000008)
#define  SCPU_CORE_auth_slave_ananke_niden_auth_slave_ananke_source_sel_mask     (0x00000004)
#define  SCPU_CORE_auth_slave_ananke_spiden_auth_slave_ananke_source_sel_mask    (0x00000002)
#define  SCPU_CORE_auth_slave_ananke_spniden_auth_slave_ananke_source_sel_mask   (0x00000001)
#define  SCPU_CORE_auth_slave_ananke_dbgen_auth_slave_ananke_source_sel(data)    (0x00000008&((data)<<3))
#define  SCPU_CORE_auth_slave_ananke_niden_auth_slave_ananke_source_sel(data)    (0x00000004&((data)<<2))
#define  SCPU_CORE_auth_slave_ananke_spiden_auth_slave_ananke_source_sel(data)   (0x00000002&((data)<<1))
#define  SCPU_CORE_auth_slave_ananke_spniden_auth_slave_ananke_source_sel(data)  (0x00000001&(data))
#define  SCPU_CORE_auth_slave_ananke_get_dbgen_auth_slave_ananke_source_sel(data) ((0x00000008&(data))>>3)
#define  SCPU_CORE_auth_slave_ananke_get_niden_auth_slave_ananke_source_sel(data) ((0x00000004&(data))>>2)
#define  SCPU_CORE_auth_slave_ananke_get_spiden_auth_slave_ananke_source_sel(data) ((0x00000002&(data))>>1)
#define  SCPU_CORE_auth_slave_ananke_get_spniden_auth_slave_ananke_source_sel(data) (0x00000001&(data))

#define  SCPU_CORE_config_ananke_0                                              0x1805B828
#define  SCPU_CORE_config_ananke_0_reg_addr                                      "0xB805B828"
#define  SCPU_CORE_config_ananke_0_reg                                           0xB805B828
#define  SCPU_CORE_config_ananke_0_inst_addr                                     "0x0041"
#define  set_SCPU_CORE_config_ananke_0_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_config_ananke_0_reg)=data)
#define  get_SCPU_CORE_config_ananke_0_reg                                       (*((volatile unsigned int*)SCPU_CORE_config_ananke_0_reg))
#define  SCPU_CORE_config_ananke_0_anankepmusnapshotreq_shift                    (14)
#define  SCPU_CORE_config_ananke_0_anankecfgend_shift                            (12)
#define  SCPU_CORE_config_ananke_0_anankecfgte_shift                             (10)
#define  SCPU_CORE_config_ananke_0_anankevinithi_shift                           (4)
#define  SCPU_CORE_config_ananke_0_anankeaa64naa32_shift                         (2)
#define  SCPU_CORE_config_ananke_0_anankecryptodisable_shift                     (0)
#define  SCPU_CORE_config_ananke_0_anankepmusnapshotreq_mask                     (0x00004000)
#define  SCPU_CORE_config_ananke_0_anankecfgend_mask                             (0x00003000)
#define  SCPU_CORE_config_ananke_0_anankecfgte_mask                              (0x00000C00)
#define  SCPU_CORE_config_ananke_0_anankevinithi_mask                            (0x00000030)
#define  SCPU_CORE_config_ananke_0_anankeaa64naa32_mask                          (0x0000000C)
#define  SCPU_CORE_config_ananke_0_anankecryptodisable_mask                      (0x00000001)
#define  SCPU_CORE_config_ananke_0_anankepmusnapshotreq(data)                    (0x00004000&((data)<<14))
#define  SCPU_CORE_config_ananke_0_anankecfgend(data)                            (0x00003000&((data)<<12))
#define  SCPU_CORE_config_ananke_0_anankecfgte(data)                             (0x00000C00&((data)<<10))
#define  SCPU_CORE_config_ananke_0_anankevinithi(data)                           (0x00000030&((data)<<4))
#define  SCPU_CORE_config_ananke_0_anankeaa64naa32(data)                         (0x0000000C&((data)<<2))
#define  SCPU_CORE_config_ananke_0_anankecryptodisable(data)                     (0x00000001&(data))
#define  SCPU_CORE_config_ananke_0_get_anankepmusnapshotreq(data)                ((0x00004000&(data))>>14)
#define  SCPU_CORE_config_ananke_0_get_anankecfgend(data)                        ((0x00003000&(data))>>12)
#define  SCPU_CORE_config_ananke_0_get_anankecfgte(data)                         ((0x00000C00&(data))>>10)
#define  SCPU_CORE_config_ananke_0_get_anankevinithi(data)                       ((0x00000030&(data))>>4)
#define  SCPU_CORE_config_ananke_0_get_anankeaa64naa32(data)                     ((0x0000000C&(data))>>2)
#define  SCPU_CORE_config_ananke_0_get_anankecryptodisable(data)                 (0x00000001&(data))

#define  SCPU_CORE_config_ananke_1                                              0x1805B82C
#define  SCPU_CORE_config_ananke_1_reg_addr                                      "0xB805B82C"
#define  SCPU_CORE_config_ananke_1_reg                                           0xB805B82C
#define  SCPU_CORE_config_ananke_1_inst_addr                                     "0x0042"
#define  set_SCPU_CORE_config_ananke_1_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_config_ananke_1_reg)=data)
#define  get_SCPU_CORE_config_ananke_1_reg                                       (*((volatile unsigned int*)SCPU_CORE_config_ananke_1_reg))
#define  SCPU_CORE_config_ananke_1_anankervbaraddr0_39_32_shift                  (0)
#define  SCPU_CORE_config_ananke_1_anankervbaraddr0_39_32_mask                   (0x000000FF)
#define  SCPU_CORE_config_ananke_1_anankervbaraddr0_39_32(data)                  (0x000000FF&(data))
#define  SCPU_CORE_config_ananke_1_get_anankervbaraddr0_39_32(data)              (0x000000FF&(data))

#define  SCPU_CORE_config_ananke_2                                              0x1805B830
#define  SCPU_CORE_config_ananke_2_reg_addr                                      "0xB805B830"
#define  SCPU_CORE_config_ananke_2_reg                                           0xB805B830
#define  SCPU_CORE_config_ananke_2_inst_addr                                     "0x0043"
#define  set_SCPU_CORE_config_ananke_2_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_config_ananke_2_reg)=data)
#define  get_SCPU_CORE_config_ananke_2_reg                                       (*((volatile unsigned int*)SCPU_CORE_config_ananke_2_reg))
#define  SCPU_CORE_config_ananke_2_anankervbaraddr0_31_2_shift                   (2)
#define  SCPU_CORE_config_ananke_2_anankervbaraddr0_31_2_mask                    (0xFFFFFFFC)
#define  SCPU_CORE_config_ananke_2_anankervbaraddr0_31_2(data)                   (0xFFFFFFFC&((data)<<2))
#define  SCPU_CORE_config_ananke_2_get_anankervbaraddr0_31_2(data)               ((0xFFFFFFFC&(data))>>2)

#define  SCPU_CORE_config_ananke_3                                              0x1805B834
#define  SCPU_CORE_config_ananke_3_reg_addr                                      "0xB805B834"
#define  SCPU_CORE_config_ananke_3_reg                                           0xB805B834
#define  SCPU_CORE_config_ananke_3_inst_addr                                     "0x0044"
#define  set_SCPU_CORE_config_ananke_3_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_config_ananke_3_reg)=data)
#define  get_SCPU_CORE_config_ananke_3_reg                                       (*((volatile unsigned int*)SCPU_CORE_config_ananke_3_reg))
#define  SCPU_CORE_config_ananke_3_anankervbaraddr1_39_32_shift                  (0)
#define  SCPU_CORE_config_ananke_3_anankervbaraddr1_39_32_mask                   (0x000000FF)
#define  SCPU_CORE_config_ananke_3_anankervbaraddr1_39_32(data)                  (0x000000FF&(data))
#define  SCPU_CORE_config_ananke_3_get_anankervbaraddr1_39_32(data)              (0x000000FF&(data))

#define  SCPU_CORE_config_ananke_4                                              0x1805B838
#define  SCPU_CORE_config_ananke_4_reg_addr                                      "0xB805B838"
#define  SCPU_CORE_config_ananke_4_reg                                           0xB805B838
#define  SCPU_CORE_config_ananke_4_inst_addr                                     "0x0045"
#define  set_SCPU_CORE_config_ananke_4_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_config_ananke_4_reg)=data)
#define  get_SCPU_CORE_config_ananke_4_reg                                       (*((volatile unsigned int*)SCPU_CORE_config_ananke_4_reg))
#define  SCPU_CORE_config_ananke_4_anankervbaraddr1_31_2_shift                   (2)
#define  SCPU_CORE_config_ananke_4_anankervbaraddr1_31_2_mask                    (0xFFFFFFFC)
#define  SCPU_CORE_config_ananke_4_anankervbaraddr1_31_2(data)                   (0xFFFFFFFC&((data)<<2))
#define  SCPU_CORE_config_ananke_4_get_anankervbaraddr1_31_2(data)               ((0xFFFFFFFC&(data))>>2)

#define  SCPU_CORE_status_ananke_0                                              0x1805B83C
#define  SCPU_CORE_status_ananke_0_reg_addr                                      "0xB805B83C"
#define  SCPU_CORE_status_ananke_0_reg                                           0xB805B83C
#define  SCPU_CORE_status_ananke_0_inst_addr                                     "0x0046"
#define  set_SCPU_CORE_status_ananke_0_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_status_ananke_0_reg)=data)
#define  get_SCPU_CORE_status_ananke_0_reg                                       (*((volatile unsigned int*)SCPU_CORE_status_ananke_0_reg))
#define  SCPU_CORE_status_ananke_0_anankecoreinstrret_shift                      (4)
#define  SCPU_CORE_status_ananke_0_anankecoreinstrrun_shift                      (0)
#define  SCPU_CORE_status_ananke_0_anankecoreinstrret_mask                       (0x000000F0)
#define  SCPU_CORE_status_ananke_0_anankecoreinstrrun_mask                       (0x0000000F)
#define  SCPU_CORE_status_ananke_0_anankecoreinstrret(data)                      (0x000000F0&((data)<<4))
#define  SCPU_CORE_status_ananke_0_anankecoreinstrrun(data)                      (0x0000000F&(data))
#define  SCPU_CORE_status_ananke_0_get_anankecoreinstrret(data)                  ((0x000000F0&(data))>>4)
#define  SCPU_CORE_status_ananke_0_get_anankecoreinstrrun(data)                  (0x0000000F&(data))

#define  SCPU_CORE_power_ananke_0                                               0x1805B848
#define  SCPU_CORE_power_ananke_0_reg_addr                                       "0xB805B848"
#define  SCPU_CORE_power_ananke_0_reg                                            0xB805B848
#define  SCPU_CORE_power_ananke_0_inst_addr                                      "0x0047"
#define  set_SCPU_CORE_power_ananke_0_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_power_ananke_0_reg)=data)
#define  get_SCPU_CORE_power_ananke_0_reg                                        (*((volatile unsigned int*)SCPU_CORE_power_ananke_0_reg))
#define  SCPU_CORE_power_ananke_0_clusterdbgpwrupreq_shift                       (5)
#define  SCPU_CORE_power_ananke_0_anankeawakeup_shift                            (4)
#define  SCPU_CORE_power_ananke_0_anankedbgpwrupreq_shift                        (0)
#define  SCPU_CORE_power_ananke_0_clusterdbgpwrupreq_mask                        (0x00000020)
#define  SCPU_CORE_power_ananke_0_anankeawakeup_mask                             (0x00000010)
#define  SCPU_CORE_power_ananke_0_anankedbgpwrupreq_mask                         (0x00000003)
#define  SCPU_CORE_power_ananke_0_clusterdbgpwrupreq(data)                       (0x00000020&((data)<<5))
#define  SCPU_CORE_power_ananke_0_anankeawakeup(data)                            (0x00000010&((data)<<4))
#define  SCPU_CORE_power_ananke_0_anankedbgpwrupreq(data)                        (0x00000003&(data))
#define  SCPU_CORE_power_ananke_0_get_clusterdbgpwrupreq(data)                   ((0x00000020&(data))>>5)
#define  SCPU_CORE_power_ananke_0_get_anankeawakeup(data)                        ((0x00000010&(data))>>4)
#define  SCPU_CORE_power_ananke_0_get_anankedbgpwrupreq(data)                    (0x00000003&(data))

#define  SCPU_CORE_misc_ananke_0                                                0x1805B84C
#define  SCPU_CORE_misc_ananke_0_reg_addr                                        "0xB805B84C"
#define  SCPU_CORE_misc_ananke_0_reg                                             0xB805B84C
#define  SCPU_CORE_misc_ananke_0_inst_addr                                       "0x0048"
#define  set_SCPU_CORE_misc_ananke_0_reg(data)                                   (*((volatile unsigned int*)SCPU_CORE_misc_ananke_0_reg)=data)
#define  get_SCPU_CORE_misc_ananke_0_reg                                         (*((volatile unsigned int*)SCPU_CORE_misc_ananke_0_reg))
#define  SCPU_CORE_misc_ananke_0_anankedbgrstreq_shift                           (2)
#define  SCPU_CORE_misc_ananke_0_anankepmushapshotack_shift                      (0)
#define  SCPU_CORE_misc_ananke_0_anankedbgrstreq_mask                            (0x0000000C)
#define  SCPU_CORE_misc_ananke_0_anankepmushapshotack_mask                       (0x00000001)
#define  SCPU_CORE_misc_ananke_0_anankedbgrstreq(data)                           (0x0000000C&((data)<<2))
#define  SCPU_CORE_misc_ananke_0_anankepmushapshotack(data)                      (0x00000001&(data))
#define  SCPU_CORE_misc_ananke_0_get_anankedbgrstreq(data)                       ((0x0000000C&(data))>>2)
#define  SCPU_CORE_misc_ananke_0_get_anankepmushapshotack(data)                  (0x00000001&(data))

#define  SCPU_CORE_config_ananke_5                                              0x1805B888
#define  SCPU_CORE_config_ananke_5_reg_addr                                      "0xB805B888"
#define  SCPU_CORE_config_ananke_5_reg                                           0xB805B888
#define  SCPU_CORE_config_ananke_5_inst_addr                                     "0x0049"
#define  set_SCPU_CORE_config_ananke_5_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_config_ananke_5_reg)=data)
#define  get_SCPU_CORE_config_ananke_5_reg                                       (*((volatile unsigned int*)SCPU_CORE_config_ananke_5_reg))
#define  SCPU_CORE_config_ananke_5_anankecfgend_3_2_shift                        (12)
#define  SCPU_CORE_config_ananke_5_anankecfgte_3_2_shift                         (10)
#define  SCPU_CORE_config_ananke_5_anankevinithi_3_2_shift                       (4)
#define  SCPU_CORE_config_ananke_5_anankeaa64naa32_3_2_shift                     (2)
#define  SCPU_CORE_config_ananke_5_anankecfgend_3_2_mask                         (0x00003000)
#define  SCPU_CORE_config_ananke_5_anankecfgte_3_2_mask                          (0x00000C00)
#define  SCPU_CORE_config_ananke_5_anankevinithi_3_2_mask                        (0x00000030)
#define  SCPU_CORE_config_ananke_5_anankeaa64naa32_3_2_mask                      (0x0000000C)
#define  SCPU_CORE_config_ananke_5_anankecfgend_3_2(data)                        (0x00003000&((data)<<12))
#define  SCPU_CORE_config_ananke_5_anankecfgte_3_2(data)                         (0x00000C00&((data)<<10))
#define  SCPU_CORE_config_ananke_5_anankevinithi_3_2(data)                       (0x00000030&((data)<<4))
#define  SCPU_CORE_config_ananke_5_anankeaa64naa32_3_2(data)                     (0x0000000C&((data)<<2))
#define  SCPU_CORE_config_ananke_5_get_anankecfgend_3_2(data)                    ((0x00003000&(data))>>12)
#define  SCPU_CORE_config_ananke_5_get_anankecfgte_3_2(data)                     ((0x00000C00&(data))>>10)
#define  SCPU_CORE_config_ananke_5_get_anankevinithi_3_2(data)                   ((0x00000030&(data))>>4)
#define  SCPU_CORE_config_ananke_5_get_anankeaa64naa32_3_2(data)                 ((0x0000000C&(data))>>2)

#define  SCPU_CORE_config_ananke_6                                              0x1805B88C
#define  SCPU_CORE_config_ananke_6_reg_addr                                      "0xB805B88C"
#define  SCPU_CORE_config_ananke_6_reg                                           0xB805B88C
#define  SCPU_CORE_config_ananke_6_inst_addr                                     "0x004A"
#define  set_SCPU_CORE_config_ananke_6_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_config_ananke_6_reg)=data)
#define  get_SCPU_CORE_config_ananke_6_reg                                       (*((volatile unsigned int*)SCPU_CORE_config_ananke_6_reg))
#define  SCPU_CORE_config_ananke_6_anankervbaraddr2_39_32_shift                  (0)
#define  SCPU_CORE_config_ananke_6_anankervbaraddr2_39_32_mask                   (0x000000FF)
#define  SCPU_CORE_config_ananke_6_anankervbaraddr2_39_32(data)                  (0x000000FF&(data))
#define  SCPU_CORE_config_ananke_6_get_anankervbaraddr2_39_32(data)              (0x000000FF&(data))

#define  SCPU_CORE_config_ananke_7                                              0x1805B890
#define  SCPU_CORE_config_ananke_7_reg_addr                                      "0xB805B890"
#define  SCPU_CORE_config_ananke_7_reg                                           0xB805B890
#define  SCPU_CORE_config_ananke_7_inst_addr                                     "0x004B"
#define  set_SCPU_CORE_config_ananke_7_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_config_ananke_7_reg)=data)
#define  get_SCPU_CORE_config_ananke_7_reg                                       (*((volatile unsigned int*)SCPU_CORE_config_ananke_7_reg))
#define  SCPU_CORE_config_ananke_7_anankervbaraddr2_31_2_shift                   (2)
#define  SCPU_CORE_config_ananke_7_anankervbaraddr2_31_2_mask                    (0xFFFFFFFC)
#define  SCPU_CORE_config_ananke_7_anankervbaraddr2_31_2(data)                   (0xFFFFFFFC&((data)<<2))
#define  SCPU_CORE_config_ananke_7_get_anankervbaraddr2_31_2(data)               ((0xFFFFFFFC&(data))>>2)

#define  SCPU_CORE_config_ananke_8                                              0x1805B894
#define  SCPU_CORE_config_ananke_8_reg_addr                                      "0xB805B894"
#define  SCPU_CORE_config_ananke_8_reg                                           0xB805B894
#define  SCPU_CORE_config_ananke_8_inst_addr                                     "0x004C"
#define  set_SCPU_CORE_config_ananke_8_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_config_ananke_8_reg)=data)
#define  get_SCPU_CORE_config_ananke_8_reg                                       (*((volatile unsigned int*)SCPU_CORE_config_ananke_8_reg))
#define  SCPU_CORE_config_ananke_8_anankervbaraddr3_39_32_shift                  (0)
#define  SCPU_CORE_config_ananke_8_anankervbaraddr3_39_32_mask                   (0x000000FF)
#define  SCPU_CORE_config_ananke_8_anankervbaraddr3_39_32(data)                  (0x000000FF&(data))
#define  SCPU_CORE_config_ananke_8_get_anankervbaraddr3_39_32(data)              (0x000000FF&(data))

#define  SCPU_CORE_config_ananke_9                                              0x1805B898
#define  SCPU_CORE_config_ananke_9_reg_addr                                      "0xB805B898"
#define  SCPU_CORE_config_ananke_9_reg                                           0xB805B898
#define  SCPU_CORE_config_ananke_9_inst_addr                                     "0x004D"
#define  set_SCPU_CORE_config_ananke_9_reg(data)                                 (*((volatile unsigned int*)SCPU_CORE_config_ananke_9_reg)=data)
#define  get_SCPU_CORE_config_ananke_9_reg                                       (*((volatile unsigned int*)SCPU_CORE_config_ananke_9_reg))
#define  SCPU_CORE_config_ananke_9_anankervbaraddr3_31_2_shift                   (2)
#define  SCPU_CORE_config_ananke_9_anankervbaraddr3_31_2_mask                    (0xFFFFFFFC)
#define  SCPU_CORE_config_ananke_9_anankervbaraddr3_31_2(data)                   (0xFFFFFFFC&((data)<<2))
#define  SCPU_CORE_config_ananke_9_get_anankervbaraddr3_31_2(data)               ((0xFFFFFFFC&(data))>>2)

#define  SCPU_CORE_power_ananke_1                                               0x1805B8A8
#define  SCPU_CORE_power_ananke_1_reg_addr                                       "0xB805B8A8"
#define  SCPU_CORE_power_ananke_1_reg                                            0xB805B8A8
#define  SCPU_CORE_power_ananke_1_inst_addr                                      "0x004E"
#define  set_SCPU_CORE_power_ananke_1_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_power_ananke_1_reg)=data)
#define  get_SCPU_CORE_power_ananke_1_reg                                        (*((volatile unsigned int*)SCPU_CORE_power_ananke_1_reg))
#define  SCPU_CORE_power_ananke_1_anankedbgpwrupreq_3_2_shift                    (0)
#define  SCPU_CORE_power_ananke_1_anankedbgpwrupreq_3_2_mask                     (0x00000003)
#define  SCPU_CORE_power_ananke_1_anankedbgpwrupreq_3_2(data)                    (0x00000003&(data))
#define  SCPU_CORE_power_ananke_1_get_anankedbgpwrupreq_3_2(data)                (0x00000003&(data))

#define  SCPU_CORE_misc_ananke_1                                                0x1805B8AC
#define  SCPU_CORE_misc_ananke_1_reg_addr                                        "0xB805B8AC"
#define  SCPU_CORE_misc_ananke_1_reg                                             0xB805B8AC
#define  SCPU_CORE_misc_ananke_1_inst_addr                                       "0x004F"
#define  set_SCPU_CORE_misc_ananke_1_reg(data)                                   (*((volatile unsigned int*)SCPU_CORE_misc_ananke_1_reg)=data)
#define  get_SCPU_CORE_misc_ananke_1_reg                                         (*((volatile unsigned int*)SCPU_CORE_misc_ananke_1_reg))
#define  SCPU_CORE_misc_ananke_1_anankedbgrstreq_3_2_shift                       (2)
#define  SCPU_CORE_misc_ananke_1_anankedbgrstreq_3_2_mask                        (0x0000000C)
#define  SCPU_CORE_misc_ananke_1_anankedbgrstreq_3_2(data)                       (0x0000000C&((data)<<2))
#define  SCPU_CORE_misc_ananke_1_get_anankedbgrstreq_3_2(data)                   ((0x0000000C&(data))>>2)

#define  SCPU_CORE_cs_ctrl_0                                                    0x1805B8C0
#define  SCPU_CORE_cs_ctrl_0_reg_addr                                            "0xB805B8C0"
#define  SCPU_CORE_cs_ctrl_0_reg                                                 0xB805B8C0
#define  SCPU_CORE_cs_ctrl_0_inst_addr                                           "0x0050"
#define  set_SCPU_CORE_cs_ctrl_0_reg(data)                                       (*((volatile unsigned int*)SCPU_CORE_cs_ctrl_0_reg)=data)
#define  get_SCPU_CORE_cs_ctrl_0_reg                                             (*((volatile unsigned int*)SCPU_CORE_cs_ctrl_0_reg))
#define  SCPU_CORE_cs_ctrl_0_ananke_trace_tpctl_shift                            (9)
#define  SCPU_CORE_cs_ctrl_0_ananke_trace_tpmaxdatasize_shift                    (4)
#define  SCPU_CORE_cs_ctrl_0_ananke_trace_tpctl_mask                             (0x00000200)
#define  SCPU_CORE_cs_ctrl_0_ananke_trace_tpmaxdatasize_mask                     (0x000001F0)
#define  SCPU_CORE_cs_ctrl_0_ananke_trace_tpctl(data)                            (0x00000200&((data)<<9))
#define  SCPU_CORE_cs_ctrl_0_ananke_trace_tpmaxdatasize(data)                    (0x000001F0&((data)<<4))
#define  SCPU_CORE_cs_ctrl_0_get_ananke_trace_tpctl(data)                        ((0x00000200&(data))>>9)
#define  SCPU_CORE_cs_ctrl_0_get_ananke_trace_tpmaxdatasize(data)                ((0x000001F0&(data))>>4)

#define  SCPU_CORE_ejtag_ctrl_0                                                 0x1805B8C4
#define  SCPU_CORE_ejtag_ctrl_0_reg_addr                                         "0xB805B8C4"
#define  SCPU_CORE_ejtag_ctrl_0_reg                                              0xB805B8C4
#define  SCPU_CORE_ejtag_ctrl_0_inst_addr                                        "0x0051"
#define  set_SCPU_CORE_ejtag_ctrl_0_reg(data)                                    (*((volatile unsigned int*)SCPU_CORE_ejtag_ctrl_0_reg)=data)
#define  get_SCPU_CORE_ejtag_ctrl_0_reg                                          (*((volatile unsigned int*)SCPU_CORE_ejtag_ctrl_0_reg))
#define  SCPU_CORE_ejtag_ctrl_0_ejtag_chain_mode_shift                           (24)
#define  SCPU_CORE_ejtag_ctrl_0_srstconnected_shift                              (16)
#define  SCPU_CORE_ejtag_ctrl_0_portenabled_shift                                (8)
#define  SCPU_CORE_ejtag_ctrl_0_portconnected_shift                              (0)
#define  SCPU_CORE_ejtag_ctrl_0_ejtag_chain_mode_mask                            (0x01000000)
#define  SCPU_CORE_ejtag_ctrl_0_srstconnected_mask                               (0x00FF0000)
#define  SCPU_CORE_ejtag_ctrl_0_portenabled_mask                                 (0x0000FF00)
#define  SCPU_CORE_ejtag_ctrl_0_portconnected_mask                               (0x000000FF)
#define  SCPU_CORE_ejtag_ctrl_0_ejtag_chain_mode(data)                           (0x01000000&((data)<<24))
#define  SCPU_CORE_ejtag_ctrl_0_srstconnected(data)                              (0x00FF0000&((data)<<16))
#define  SCPU_CORE_ejtag_ctrl_0_portenabled(data)                                (0x0000FF00&((data)<<8))
#define  SCPU_CORE_ejtag_ctrl_0_portconnected(data)                              (0x000000FF&(data))
#define  SCPU_CORE_ejtag_ctrl_0_get_ejtag_chain_mode(data)                       ((0x01000000&(data))>>24)
#define  SCPU_CORE_ejtag_ctrl_0_get_srstconnected(data)                          ((0x00FF0000&(data))>>16)
#define  SCPU_CORE_ejtag_ctrl_0_get_portenabled(data)                            ((0x0000FF00&(data))>>8)
#define  SCPU_CORE_ejtag_ctrl_0_get_portconnected(data)                          (0x000000FF&(data))

#define  SCPU_CORE_ejtag_ctrl_1                                                 0x1805B8C8
#define  SCPU_CORE_ejtag_ctrl_1_reg_addr                                         "0xB805B8C8"
#define  SCPU_CORE_ejtag_ctrl_1_reg                                              0xB805B8C8
#define  SCPU_CORE_ejtag_ctrl_1_inst_addr                                        "0x0052"
#define  set_SCPU_CORE_ejtag_ctrl_1_reg(data)                                    (*((volatile unsigned int*)SCPU_CORE_ejtag_ctrl_1_reg)=data)
#define  get_SCPU_CORE_ejtag_ctrl_1_reg                                          (*((volatile unsigned int*)SCPU_CORE_ejtag_ctrl_1_reg))
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_4_shift                               (8)
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_3_shift                               (6)
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_2_shift                               (4)
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_1_shift                               (2)
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_0_shift                               (0)
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_4_mask                                (0x00000300)
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_3_mask                                (0x000000C0)
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_2_mask                                (0x00000030)
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_1_mask                                (0x0000000C)
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_0_mask                                (0x00000003)
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_4(data)                               (0x00000300&((data)<<8))
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_3(data)                               (0x000000C0&((data)<<6))
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_2(data)                               (0x00000030&((data)<<4))
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_1(data)                               (0x0000000C&((data)<<2))
#define  SCPU_CORE_ejtag_ctrl_1_csrtck_dly_0(data)                               (0x00000003&(data))
#define  SCPU_CORE_ejtag_ctrl_1_get_csrtck_dly_4(data)                           ((0x00000300&(data))>>8)
#define  SCPU_CORE_ejtag_ctrl_1_get_csrtck_dly_3(data)                           ((0x000000C0&(data))>>6)
#define  SCPU_CORE_ejtag_ctrl_1_get_csrtck_dly_2(data)                           ((0x00000030&(data))>>4)
#define  SCPU_CORE_ejtag_ctrl_1_get_csrtck_dly_1(data)                           ((0x0000000C&(data))>>2)
#define  SCPU_CORE_ejtag_ctrl_1_get_csrtck_dly_0(data)                           (0x00000003&(data))

#define  SCPU_CORE_ejtag_status_0                                               0x1805B8D0
#define  SCPU_CORE_ejtag_status_0_reg_addr                                       "0xB805B8D0"
#define  SCPU_CORE_ejtag_status_0_reg                                            0xB805B8D0
#define  SCPU_CORE_ejtag_status_0_inst_addr                                      "0x0053"
#define  set_SCPU_CORE_ejtag_status_0_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_ejtag_status_0_reg)=data)
#define  get_SCPU_CORE_ejtag_status_0_reg                                        (*((volatile unsigned int*)SCPU_CORE_ejtag_status_0_reg))
#define  SCPU_CORE_ejtag_status_0_status_status_jtagnsw_shift                    (9)
#define  SCPU_CORE_ejtag_status_0_status_status_jtagtop_shift                    (8)
#define  SCPU_CORE_ejtag_status_0_nsrstout_shift                                 (0)
#define  SCPU_CORE_ejtag_status_0_status_status_jtagnsw_mask                     (0x00000200)
#define  SCPU_CORE_ejtag_status_0_status_status_jtagtop_mask                     (0x00000100)
#define  SCPU_CORE_ejtag_status_0_nsrstout_mask                                  (0x000000FF)
#define  SCPU_CORE_ejtag_status_0_status_status_jtagnsw(data)                    (0x00000200&((data)<<9))
#define  SCPU_CORE_ejtag_status_0_status_status_jtagtop(data)                    (0x00000100&((data)<<8))
#define  SCPU_CORE_ejtag_status_0_nsrstout(data)                                 (0x000000FF&(data))
#define  SCPU_CORE_ejtag_status_0_get_status_status_jtagnsw(data)                ((0x00000200&(data))>>9)
#define  SCPU_CORE_ejtag_status_0_get_status_status_jtagtop(data)                ((0x00000100&(data))>>8)
#define  SCPU_CORE_ejtag_status_0_get_nsrstout(data)                             (0x000000FF&(data))

#define  SCPU_CORE_exok_ctrl                                                    0x1805B900
#define  SCPU_CORE_exok_ctrl_reg_addr                                            "0xB805B900"
#define  SCPU_CORE_exok_ctrl_reg                                                 0xB805B900
#define  SCPU_CORE_exok_ctrl_inst_addr                                           "0x0054"
#define  set_SCPU_CORE_exok_ctrl_reg(data)                                       (*((volatile unsigned int*)SCPU_CORE_exok_ctrl_reg)=data)
#define  get_SCPU_CORE_exok_ctrl_reg                                             (*((volatile unsigned int*)SCPU_CORE_exok_ctrl_reg))
#define  SCPU_CORE_exok_ctrl_exok_en_shift                                       (0)
#define  SCPU_CORE_exok_ctrl_exok_en_mask                                        (0x00000001)
#define  SCPU_CORE_exok_ctrl_exok_en(data)                                       (0x00000001&(data))
#define  SCPU_CORE_exok_ctrl_get_exok_en(data)                                   (0x00000001&(data))

#define  SCPU_CORE_interrupt_ctrl_1                                             0x1805B910
#define  SCPU_CORE_interrupt_ctrl_1_reg_addr                                     "0xB805B910"
#define  SCPU_CORE_interrupt_ctrl_1_reg                                          0xB805B910
#define  SCPU_CORE_interrupt_ctrl_1_inst_addr                                    "0x0055"
#define  set_SCPU_CORE_interrupt_ctrl_1_reg(data)                                (*((volatile unsigned int*)SCPU_CORE_interrupt_ctrl_1_reg)=data)
#define  get_SCPU_CORE_interrupt_ctrl_1_reg                                      (*((volatile unsigned int*)SCPU_CORE_interrupt_ctrl_1_reg))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nclusterpmuirq_shift                  (30)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq4_shift                      (29)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq3_shift                      (28)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq2_shift                      (27)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq1_shift                      (26)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq0_shift                      (25)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq4_shift                        (24)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq3_shift                        (23)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq2_shift                        (22)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq1_shift                        (21)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq0_shift                        (20)
#define  SCPU_CORE_interrupt_ctrl_1_gic_pmu_int_shift                            (6)
#define  SCPU_CORE_interrupt_ctrl_1_gic_fault_int_shift                          (5)
#define  SCPU_CORE_interrupt_ctrl_1_gic_err_int_shift                            (4)
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq3_shift                         (3)
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq2_shift                         (2)
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq1_shift                         (1)
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq0_shift                         (0)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nclusterpmuirq_mask                   (0x40000000)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq4_mask                       (0x20000000)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq3_mask                       (0x10000000)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq2_mask                       (0x08000000)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq1_mask                       (0x04000000)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq0_mask                       (0x02000000)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq4_mask                         (0x01000000)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq3_mask                         (0x00800000)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq2_mask                         (0x00400000)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq1_mask                         (0x00200000)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq0_mask                         (0x00100000)
#define  SCPU_CORE_interrupt_ctrl_1_gic_pmu_int_mask                             (0x00000040)
#define  SCPU_CORE_interrupt_ctrl_1_gic_fault_int_mask                           (0x00000020)
#define  SCPU_CORE_interrupt_ctrl_1_gic_err_int_mask                             (0x00000010)
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq3_mask                          (0x00000008)
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq2_mask                          (0x00000004)
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq1_mask                          (0x00000002)
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq0_mask                          (0x00000001)
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nclusterpmuirq(data)                  (0x40000000&((data)<<30))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq4(data)                      (0x20000000&((data)<<29))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq3(data)                      (0x10000000&((data)<<28))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq2(data)                      (0x08000000&((data)<<27))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq1(data)                      (0x04000000&((data)<<26))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nfaultirq0(data)                      (0x02000000&((data)<<25))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq4(data)                        (0x01000000&((data)<<24))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq3(data)                        (0x00800000&((data)<<23))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq2(data)                        (0x00400000&((data)<<22))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq1(data)                        (0x00200000&((data)<<21))
#define  SCPU_CORE_interrupt_ctrl_1_ananke_nerrirq0(data)                        (0x00100000&((data)<<20))
#define  SCPU_CORE_interrupt_ctrl_1_gic_pmu_int(data)                            (0x00000040&((data)<<6))
#define  SCPU_CORE_interrupt_ctrl_1_gic_fault_int(data)                          (0x00000020&((data)<<5))
#define  SCPU_CORE_interrupt_ctrl_1_gic_err_int(data)                            (0x00000010&((data)<<4))
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq3(data)                         (0x00000008&((data)<<3))
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq2(data)                         (0x00000004&((data)<<2))
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq1(data)                         (0x00000002&((data)<<1))
#define  SCPU_CORE_interrupt_ctrl_1_irq_ncnthvirq0(data)                         (0x00000001&(data))
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nclusterpmuirq(data)              ((0x40000000&(data))>>30)
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nfaultirq4(data)                  ((0x20000000&(data))>>29)
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nfaultirq3(data)                  ((0x10000000&(data))>>28)
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nfaultirq2(data)                  ((0x08000000&(data))>>27)
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nfaultirq1(data)                  ((0x04000000&(data))>>26)
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nfaultirq0(data)                  ((0x02000000&(data))>>25)
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nerrirq4(data)                    ((0x01000000&(data))>>24)
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nerrirq3(data)                    ((0x00800000&(data))>>23)
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nerrirq2(data)                    ((0x00400000&(data))>>22)
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nerrirq1(data)                    ((0x00200000&(data))>>21)
#define  SCPU_CORE_interrupt_ctrl_1_get_ananke_nerrirq0(data)                    ((0x00100000&(data))>>20)
#define  SCPU_CORE_interrupt_ctrl_1_get_gic_pmu_int(data)                        ((0x00000040&(data))>>6)
#define  SCPU_CORE_interrupt_ctrl_1_get_gic_fault_int(data)                      ((0x00000020&(data))>>5)
#define  SCPU_CORE_interrupt_ctrl_1_get_gic_err_int(data)                        ((0x00000010&(data))>>4)
#define  SCPU_CORE_interrupt_ctrl_1_get_irq_ncnthvirq3(data)                     ((0x00000008&(data))>>3)
#define  SCPU_CORE_interrupt_ctrl_1_get_irq_ncnthvirq2(data)                     ((0x00000004&(data))>>2)
#define  SCPU_CORE_interrupt_ctrl_1_get_irq_ncnthvirq1(data)                     ((0x00000002&(data))>>1)
#define  SCPU_CORE_interrupt_ctrl_1_get_irq_ncnthvirq0(data)                     (0x00000001&(data))

#define  SCPU_CORE_interrupt_ctrl_0                                             0x1805B914
#define  SCPU_CORE_interrupt_ctrl_0_reg_addr                                     "0xB805B914"
#define  SCPU_CORE_interrupt_ctrl_0_reg                                          0xB805B914
#define  SCPU_CORE_interrupt_ctrl_0_inst_addr                                    "0x0056"
#define  set_SCPU_CORE_interrupt_ctrl_0_reg(data)                                (*((volatile unsigned int*)SCPU_CORE_interrupt_ctrl_0_reg)=data)
#define  get_SCPU_CORE_interrupt_ctrl_0_reg                                      (*((volatile unsigned int*)SCPU_CORE_interrupt_ctrl_0_reg))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nclusterpmuirq_en_shift               (30)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq4_en_shift                   (29)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq3_en_shift                   (28)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq2_en_shift                   (27)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq1_en_shift                   (26)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq0_en_shift                   (25)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq4_en_shift                     (24)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq3_en_shift                     (23)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq2_en_shift                     (22)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq1_en_shift                     (21)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq0_en_shift                     (20)
#define  SCPU_CORE_interrupt_ctrl_0_errint_dest_sel_shift                        (12)
#define  SCPU_CORE_interrupt_ctrl_0_gic_pmu_int_en_shift                         (6)
#define  SCPU_CORE_interrupt_ctrl_0_gic_fault_int_en_shift                       (5)
#define  SCPU_CORE_interrupt_ctrl_0_gic_err_int_en_shift                         (4)
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq3_en_shift                      (3)
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq2_en_shift                      (2)
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq1_en_shift                      (1)
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq0_en_shift                      (0)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nclusterpmuirq_en_mask                (0x40000000)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq4_en_mask                    (0x20000000)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq3_en_mask                    (0x10000000)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq2_en_mask                    (0x08000000)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq1_en_mask                    (0x04000000)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq0_en_mask                    (0x02000000)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq4_en_mask                      (0x01000000)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq3_en_mask                      (0x00800000)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq2_en_mask                      (0x00400000)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq1_en_mask                      (0x00200000)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq0_en_mask                      (0x00100000)
#define  SCPU_CORE_interrupt_ctrl_0_errint_dest_sel_mask                         (0x00003000)
#define  SCPU_CORE_interrupt_ctrl_0_gic_pmu_int_en_mask                          (0x00000040)
#define  SCPU_CORE_interrupt_ctrl_0_gic_fault_int_en_mask                        (0x00000020)
#define  SCPU_CORE_interrupt_ctrl_0_gic_err_int_en_mask                          (0x00000010)
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq3_en_mask                       (0x00000008)
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq2_en_mask                       (0x00000004)
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq1_en_mask                       (0x00000002)
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq0_en_mask                       (0x00000001)
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nclusterpmuirq_en(data)               (0x40000000&((data)<<30))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq4_en(data)                   (0x20000000&((data)<<29))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq3_en(data)                   (0x10000000&((data)<<28))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq2_en(data)                   (0x08000000&((data)<<27))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq1_en(data)                   (0x04000000&((data)<<26))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nfaultirq0_en(data)                   (0x02000000&((data)<<25))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq4_en(data)                     (0x01000000&((data)<<24))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq3_en(data)                     (0x00800000&((data)<<23))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq2_en(data)                     (0x00400000&((data)<<22))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq1_en(data)                     (0x00200000&((data)<<21))
#define  SCPU_CORE_interrupt_ctrl_0_ananke_nerrirq0_en(data)                     (0x00100000&((data)<<20))
#define  SCPU_CORE_interrupt_ctrl_0_errint_dest_sel(data)                        (0x00003000&((data)<<12))
#define  SCPU_CORE_interrupt_ctrl_0_gic_pmu_int_en(data)                         (0x00000040&((data)<<6))
#define  SCPU_CORE_interrupt_ctrl_0_gic_fault_int_en(data)                       (0x00000020&((data)<<5))
#define  SCPU_CORE_interrupt_ctrl_0_gic_err_int_en(data)                         (0x00000010&((data)<<4))
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq3_en(data)                      (0x00000008&((data)<<3))
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq2_en(data)                      (0x00000004&((data)<<2))
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq1_en(data)                      (0x00000002&((data)<<1))
#define  SCPU_CORE_interrupt_ctrl_0_irq_ncnthvirq0_en(data)                      (0x00000001&(data))
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nclusterpmuirq_en(data)           ((0x40000000&(data))>>30)
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nfaultirq4_en(data)               ((0x20000000&(data))>>29)
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nfaultirq3_en(data)               ((0x10000000&(data))>>28)
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nfaultirq2_en(data)               ((0x08000000&(data))>>27)
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nfaultirq1_en(data)               ((0x04000000&(data))>>26)
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nfaultirq0_en(data)               ((0x02000000&(data))>>25)
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nerrirq4_en(data)                 ((0x01000000&(data))>>24)
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nerrirq3_en(data)                 ((0x00800000&(data))>>23)
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nerrirq2_en(data)                 ((0x00400000&(data))>>22)
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nerrirq1_en(data)                 ((0x00200000&(data))>>21)
#define  SCPU_CORE_interrupt_ctrl_0_get_ananke_nerrirq0_en(data)                 ((0x00100000&(data))>>20)
#define  SCPU_CORE_interrupt_ctrl_0_get_errint_dest_sel(data)                    ((0x00003000&(data))>>12)
#define  SCPU_CORE_interrupt_ctrl_0_get_gic_pmu_int_en(data)                     ((0x00000040&(data))>>6)
#define  SCPU_CORE_interrupt_ctrl_0_get_gic_fault_int_en(data)                   ((0x00000020&(data))>>5)
#define  SCPU_CORE_interrupt_ctrl_0_get_gic_err_int_en(data)                     ((0x00000010&(data))>>4)
#define  SCPU_CORE_interrupt_ctrl_0_get_irq_ncnthvirq3_en(data)                  ((0x00000008&(data))>>3)
#define  SCPU_CORE_interrupt_ctrl_0_get_irq_ncnthvirq2_en(data)                  ((0x00000004&(data))>>2)
#define  SCPU_CORE_interrupt_ctrl_0_get_irq_ncnthvirq1_en(data)                  ((0x00000002&(data))>>1)
#define  SCPU_CORE_interrupt_ctrl_0_get_irq_ncnthvirq0_en(data)                  (0x00000001&(data))

#define  SCPU_CORE_gic_spi_0                                                    0x1805B930
#define  SCPU_CORE_gic_spi_0_reg_addr                                            "0xB805B930"
#define  SCPU_CORE_gic_spi_0_reg                                                 0xB805B930
#define  SCPU_CORE_gic_spi_0_inst_addr                                           "0x0057"
#define  set_SCPU_CORE_gic_spi_0_reg(data)                                       (*((volatile unsigned int*)SCPU_CORE_gic_spi_0_reg)=data)
#define  get_SCPU_CORE_gic_spi_0_reg                                             (*((volatile unsigned int*)SCPU_CORE_gic_spi_0_reg))
#define  SCPU_CORE_gic_spi_0_spi_31_0_shift                                      (0)
#define  SCPU_CORE_gic_spi_0_spi_31_0_mask                                       (0xFFFFFFFF)
#define  SCPU_CORE_gic_spi_0_spi_31_0(data)                                      (0xFFFFFFFF&(data))
#define  SCPU_CORE_gic_spi_0_get_spi_31_0(data)                                  (0xFFFFFFFF&(data))

#define  SCPU_CORE_gic_spi_1                                                    0x1805B934
#define  SCPU_CORE_gic_spi_1_reg_addr                                            "0xB805B934"
#define  SCPU_CORE_gic_spi_1_reg                                                 0xB805B934
#define  SCPU_CORE_gic_spi_1_inst_addr                                           "0x0058"
#define  set_SCPU_CORE_gic_spi_1_reg(data)                                       (*((volatile unsigned int*)SCPU_CORE_gic_spi_1_reg)=data)
#define  get_SCPU_CORE_gic_spi_1_reg                                             (*((volatile unsigned int*)SCPU_CORE_gic_spi_1_reg))
#define  SCPU_CORE_gic_spi_1_spi_63_32_shift                                     (0)
#define  SCPU_CORE_gic_spi_1_spi_63_32_mask                                      (0xFFFFFFFF)
#define  SCPU_CORE_gic_spi_1_spi_63_32(data)                                     (0xFFFFFFFF&(data))
#define  SCPU_CORE_gic_spi_1_get_spi_63_32(data)                                 (0xFFFFFFFF&(data))

#define  SCPU_CORE_gic_ctrl_0                                                   0x1805B920
#define  SCPU_CORE_gic_ctrl_0_reg_addr                                           "0xB805B920"
#define  SCPU_CORE_gic_ctrl_0_reg                                                0xB805B920
#define  SCPU_CORE_gic_ctrl_0_inst_addr                                          "0x0059"
#define  set_SCPU_CORE_gic_ctrl_0_reg(data)                                      (*((volatile unsigned int*)SCPU_CORE_gic_ctrl_0_reg)=data)
#define  get_SCPU_CORE_gic_ctrl_0_reg                                            (*((volatile unsigned int*)SCPU_CORE_gic_ctrl_0_reg))
#define  SCPU_CORE_gic_ctrl_0_gic_pmu_sample_req_shift                           (0)
#define  SCPU_CORE_gic_ctrl_0_gic_pmu_sample_req_mask                            (0x00000001)
#define  SCPU_CORE_gic_ctrl_0_gic_pmu_sample_req(data)                           (0x00000001&(data))
#define  SCPU_CORE_gic_ctrl_0_get_gic_pmu_sample_req(data)                       (0x00000001&(data))

#define  SCPU_CORE_gic_status_0                                                 0x1805B928
#define  SCPU_CORE_gic_status_0_reg_addr                                         "0xB805B928"
#define  SCPU_CORE_gic_status_0_reg                                              0xB805B928
#define  SCPU_CORE_gic_status_0_inst_addr                                        "0x005A"
#define  set_SCPU_CORE_gic_status_0_reg(data)                                    (*((volatile unsigned int*)SCPU_CORE_gic_status_0_reg)=data)
#define  get_SCPU_CORE_gic_status_0_reg                                          (*((volatile unsigned int*)SCPU_CORE_gic_status_0_reg))
#define  SCPU_CORE_gic_status_0_gic_pmu_sample_ack_shift                         (4)
#define  SCPU_CORE_gic_status_0_gic_wake_request_shift                           (0)
#define  SCPU_CORE_gic_status_0_gic_pmu_sample_ack_mask                          (0x00000010)
#define  SCPU_CORE_gic_status_0_gic_wake_request_mask                            (0x0000000F)
#define  SCPU_CORE_gic_status_0_gic_pmu_sample_ack(data)                         (0x00000010&((data)<<4))
#define  SCPU_CORE_gic_status_0_gic_wake_request(data)                           (0x0000000F&(data))
#define  SCPU_CORE_gic_status_0_get_gic_pmu_sample_ack(data)                     ((0x00000010&(data))>>4)
#define  SCPU_CORE_gic_status_0_get_gic_wake_request(data)                       (0x0000000F&(data))

#define  SCPU_CORE_eco_rw_reg                                                   0x1805B924
#define  SCPU_CORE_eco_rw_reg_reg_addr                                           "0xB805B924"
#define  SCPU_CORE_eco_rw_reg_reg                                                0xB805B924
#define  SCPU_CORE_eco_rw_reg_inst_addr                                          "0x005B"
#define  set_SCPU_CORE_eco_rw_reg_reg(data)                                      (*((volatile unsigned int*)SCPU_CORE_eco_rw_reg_reg)=data)
#define  get_SCPU_CORE_eco_rw_reg_reg                                            (*((volatile unsigned int*)SCPU_CORE_eco_rw_reg_reg))
#define  SCPU_CORE_eco_rw_reg_eco_rw_shift                                       (0)
#define  SCPU_CORE_eco_rw_reg_eco_rw_mask                                        (0xFFFFFFFF)
#define  SCPU_CORE_eco_rw_reg_eco_rw(data)                                       (0xFFFFFFFF&(data))
#define  SCPU_CORE_eco_rw_reg_get_eco_rw(data)                                   (0xFFFFFFFF&(data))

#define  SCPU_CORE_eco_r_reg                                                    0x1805B298
#define  SCPU_CORE_eco_r_reg_reg_addr                                            "0xB805B298"
#define  SCPU_CORE_eco_r_reg_reg                                                 0xB805B298
#define  SCPU_CORE_eco_r_reg_inst_addr                                           "0x005C"
#define  set_SCPU_CORE_eco_r_reg_reg(data)                                       (*((volatile unsigned int*)SCPU_CORE_eco_r_reg_reg)=data)
#define  get_SCPU_CORE_eco_r_reg_reg                                             (*((volatile unsigned int*)SCPU_CORE_eco_r_reg_reg))
#define  SCPU_CORE_eco_r_reg_eco_r_only_shift                                    (0)
#define  SCPU_CORE_eco_r_reg_eco_r_only_mask                                     (0xFFFFFFFF)
#define  SCPU_CORE_eco_r_reg_eco_r_only(data)                                    (0xFFFFFFFF&(data))
#define  SCPU_CORE_eco_r_reg_get_eco_r_only(data)                                (0xFFFFFFFF&(data))

#define  SCPU_CORE_ananke_tie_reg                                               0x1805B92C
#define  SCPU_CORE_ananke_tie_reg_reg_addr                                       "0xB805B92C"
#define  SCPU_CORE_ananke_tie_reg_reg                                            0xB805B92C
#define  SCPU_CORE_ananke_tie_reg_inst_addr                                      "0x005D"
#define  set_SCPU_CORE_ananke_tie_reg_reg(data)                                  (*((volatile unsigned int*)SCPU_CORE_ananke_tie_reg_reg)=data)
#define  get_SCPU_CORE_ananke_tie_reg_reg                                        (*((volatile unsigned int*)SCPU_CORE_ananke_tie_reg_reg))
#define  SCPU_CORE_ananke_tie_reg_ananke_tie0_shift                              (0)
#define  SCPU_CORE_ananke_tie_reg_ananke_tie0_mask                               (0x00000001)
#define  SCPU_CORE_ananke_tie_reg_ananke_tie0(data)                              (0x00000001&(data))
#define  SCPU_CORE_ananke_tie_reg_get_ananke_tie0(data)                          (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SCPU_CORE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  pllscpu_pi_bps:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pllscpu_wd_set:1;
        RBus_UInt32  pllscpu_wd_rst:1;
        RBus_UInt32  pllscpu_prediv_sel:2;
        RBus_UInt32  pllscpu_lpf_cs:2;
        RBus_UInt32  pllscpu_lpf_cp:1;
        RBus_UInt32  pllscpu_testsel:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pllscpu_icp:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  pllscpu_pdiv_bps:1;
        RBus_UInt32  pllscpu_pdiv:2;
        RBus_UInt32  res6:1;
        RBus_UInt32  pllscpu_lpf_rs:3;
    };
}scpu_core_sys_pll_scpu1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  pllscpu_fcode:11;
        RBus_UInt32  pllscpu_ncode:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  pllscpu_oeb:1;
        RBus_UInt32  pllscpu_rstb:1;
        RBus_UInt32  pllscpu_pow:1;
    };
}scpu_core_sys_pll_scpu2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pllscpu_bypass_pi:1;
        RBus_UInt32  pllscpu_en_pi_debug:1;
        RBus_UInt32  pllscpu_hs_oc_stop:2;
        RBus_UInt32  pllscpu_pi_cur_sel:2;
        RBus_UInt32  pllscpu_sel_oc_mode:2;
        RBus_UInt32  pllscpu_ldo10v_sel:2;
        RBus_UInt32  pllscpu_ldo10v_vref_sel:1;
        RBus_UInt32  pllscpu_fastsel:1;
        RBus_UInt32  pllscpu_oc_done_delay:6;
        RBus_UInt32  pllscpu_oc_step:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  pllscpu_sdm_order:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pllscpu_oc_en:1;
    };
}scpu_core_sys_scpu_dvfs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pllscpu_wdout_ro:1;
        RBus_UInt32  pllscpu_oc_done_ro:1;
        RBus_UInt32  pllscpu_ncode_dbg_ro:8;
        RBus_UInt32  pllscpu_fcode_dbg_ro:11;
        RBus_UInt32  pllscpu_dfvs_fmod_dbg:1;
    };
}scpu_core_sys_scpu_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  pllscpu_reserve:6;
    };
}scpu_core_sys_scpu_reserve_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  scpu_ssc_ckinv:1;
    };
}scpu_core_sys_scpu_ckinv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  clkratio_scpu:5;
    };
}scpu_core_sys_scpu_clkratio_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  clkratio_scpu_active:1;
    };
}scpu_core_sys_scpu_clkratio_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  clken_dss:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  clken_top_atb:1;
        RBus_UInt32  clken_top_apb:1;
        RBus_UInt32  clken_top_periph:1;
        RBus_UInt32  clken_top_gic:1;
        RBus_UInt32  clken_ananke:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  clken_scpu_top_logic:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  clken_top_ts:1;
    };
}scpu_core_sys_scpu_clken_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  trc_clk_delay:4;
        RBus_UInt32  trc_clkdiv_sel:2;
    };
}scpu_core_sys_scpu_clkdiv_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  scpu_p_rstn:1;
        RBus_UInt32  scpu_peri_rstn:1;
        RBus_UInt32  scpu_s_poreset_n:1;
        RBus_UInt32  scpu_s_rstn:1;
        RBus_UInt32  resetsocdbgn:1;
        RBus_UInt32  scpu_nic_rstn:1;
        RBus_UInt32  scpu_core0_rstn:1;
        RBus_UInt32  scpu_core1_rstn:1;
        RBus_UInt32  scpu_core0_poreset_n:1;
        RBus_UInt32  scpu_core1_poreset_n:1;
        RBus_UInt32  scpu_dbg_rstn:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  scpu_core2_rstn:1;
        RBus_UInt32  scpu_core3_rstn:1;
        RBus_UInt32  scpu_core2_poreset_n:1;
        RBus_UInt32  scpu_core3_poreset_n:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  scpu_gic_rstn:1;
    };
}scpu_core_sys_scpu_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  voltprob_ananke_c0_pwr_ctrl:2;
        RBus_UInt32  voltprob_ananke_c0_gnd_ctrl:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  voltprob_scpu_lvl_pwr_ctrl:1;
        RBus_UInt32  voltprob_scpu_lvl_gnd_ctrl:1;
    };
}scpu_core_voltage_probe_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke_dss0_rst_n:1;
        RBus_UInt32  ananke_dss0_ro_sel:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  ananke_dss0_wire_sel:1;
        RBus_UInt32  ananke_dss0_speed_en:1;
        RBus_UInt32  res2:17;
        RBus_UInt32  ananke_dss1_rst_n:1;
        RBus_UInt32  ananke_dss1_ro_sel:3;
        RBus_UInt32  res3:2;
        RBus_UInt32  ananke_dss1_wire_sel:1;
        RBus_UInt32  ananke_dss1_speed_en:1;
    };
}scpu_core_dss_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_c31_9p5t_data_in:20;
        RBus_UInt32  scpu_c31_9p5t_dss_rst_n:1;
        RBus_UInt32  scpu_c31_9p5t_ro_sel:3;
        RBus_UInt32  scpu_c31_9p5t_speed_en:1;
        RBus_UInt32  scpu_c31_9p5t_wire_sel:1;
        RBus_UInt32  res1:6;
    };
}scpu_core_dss_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_c35_9p5t_data_in:20;
        RBus_UInt32  scpu_c35_9p5t_dss_rst_n:1;
        RBus_UInt32  scpu_c35_9p5t_ro_sel:3;
        RBus_UInt32  scpu_c35_9p5t_speed_en:1;
        RBus_UInt32  scpu_c35_9p5t_wire_sel:1;
        RBus_UInt32  res1:6;
    };
}scpu_core_dss_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_c38_9p5t_data_in:20;
        RBus_UInt32  scpu_c38_9p5t_dss_rst_n:1;
        RBus_UInt32  scpu_c38_9p5t_ro_sel:3;
        RBus_UInt32  scpu_c38_9p5t_speed_en:1;
        RBus_UInt32  scpu_c38_9p5t_wire_sel:1;
        RBus_UInt32  res1:6;
    };
}scpu_core_dss_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke_dss0_ready:1;
        RBus_UInt32  ananke_dss0_count_out:20;
        RBus_UInt32  res1:11;
    };
}scpu_core_dss_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke_dss1_ready:1;
        RBus_UInt32  ananke_dss1_count_out:20;
        RBus_UInt32  res1:11;
    };
}scpu_core_dss_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_c31_9p5t_count_out_ro:20;
        RBus_UInt32  scpu_c31_9p5t_ready_ro:1;
        RBus_UInt32  scpu_c31_9p5t_wsort_go_ro:1;
        RBus_UInt32  res1:10;
    };
}scpu_core_dss_status_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_c35_9p5t_count_out_ro:20;
        RBus_UInt32  scpu_c35_9p5t_ready_ro:1;
        RBus_UInt32  scpu_c35_9p5t_wsort_go_ro:1;
        RBus_UInt32  res1:10;
    };
}scpu_core_dss_status_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_c38_9p5t_count_out_ro:20;
        RBus_UInt32  scpu_c38_9p5t_ready_ro:1;
        RBus_UInt32  scpu_c38_9p5t_wsort_go_ro:1;
        RBus_UInt32  res1:10;
    };
}scpu_core_dss_status_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  scpu_dss_burst_mode_min_sel:1;
        RBus_UInt32  scpu_dss_burst_mode_rst_n:1;
        RBus_UInt32  scpu_dss_burst_mode_ro_sel:3;
        RBus_UInt32  scpu_dss_burst_mode_en:1;
        RBus_UInt32  scpu_dss_burst_mode_wire_sel:1;
        RBus_UInt32  res2:6;
    };
}scpu_core_dss_burst_mode_ctrl_scpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_dss_burst_mode_count:20;
        RBus_UInt32  scpu_dss_burst_mode_ready:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:10;
    };
}scpu_core_dss_burst_mode_status_scpu_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_dss_burst_mode_record:20;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:10;
    };
}scpu_core_dss_burst_mode_status_scpu_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  ananke_dss0_burst_mode_min_sel:1;
        RBus_UInt32  ananke_dss0_burst_mode_rst_n:1;
        RBus_UInt32  ananke_dss0_burst_mode_ro_sel:3;
        RBus_UInt32  ananke_dss0_burst_mode_en:1;
        RBus_UInt32  ananke_dss0_burst_mode_wire_sel:1;
        RBus_UInt32  res2:6;
    };
}scpu_core_dss0_burst_mode_ctrl_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke_dss0_burst_mode_count:20;
        RBus_UInt32  ananke_dss0_burst_mode_ready:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:10;
    };
}scpu_core_dss0_burst_mode_status_ananke_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke_dss0_burst_mode_record:20;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:10;
    };
}scpu_core_dss0_burst_mode_status_ananke_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  ananke_dss1_burst_mode_min_sel:1;
        RBus_UInt32  ananke_dss1_burst_mode_rst_n:1;
        RBus_UInt32  ananke_dss1_burst_mode_ro_sel:3;
        RBus_UInt32  ananke_dss1_burst_mode_en:1;
        RBus_UInt32  ananke_dss1_burst_mode_wire_sel:1;
        RBus_UInt32  res2:6;
    };
}scpu_core_dss1_burst_mode_ctrl_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke_dss1_burst_mode_count:20;
        RBus_UInt32  ananke_dss1_burst_mode_ready:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:10;
    };
}scpu_core_dss1_burst_mode_status_ananke_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke_dss1_burst_mode_record:20;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:10;
    };
}scpu_core_dss1_burst_mode_status_ananke_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwrpad_dss_c30_data_in:20;
        RBus_UInt32  pwrpad_dss_c30_rst_n:1;
        RBus_UInt32  pwrpad_dss_c30_ro_sel:3;
        RBus_UInt32  pwrpad_dss_c30_speed_en:1;
        RBus_UInt32  pwrpad_dss_c30_wire_sel:1;
        RBus_UInt32  res1:6;
    };
}scpu_core_dss_ctrl_pwrpad_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwrpad_dss_c30_count_out:20;
        RBus_UInt32  pwrpad_dss_c30_ready:1;
        RBus_UInt32  pwrpad_dss_c30_wsort_go:1;
        RBus_UInt32  res1:10;
    };
}scpu_core_dss_status_pwrpad_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_rme:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  ananke4_rm_33_32:2;
        RBus_UInt32  res2:10;
        RBus_UInt32  ananke4_test1:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  ananke4_rm3:1;
        RBus_UInt32  ananke4_rm2:1;
    };
}scpu_core_sram_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_rm_31_0:32;
    };
}scpu_core_sram_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_en3:1;
        RBus_UInt32  preq3:1;
        RBus_UInt32  pstate3:6;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  preq2:1;
        RBus_UInt32  pstate2:6;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  preq1:1;
        RBus_UInt32  pstate1:6;
        RBus_UInt32  write_en0:1;
        RBus_UInt32  preq0:1;
        RBus_UInt32  pstate0:6;
    };
}scpu_core_pchannel_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pdeny0:1;
        RBus_UInt32  paccept0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pactive0:18;
    };
}scpu_core_pchannel_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pdeny1:1;
        RBus_UInt32  paccept1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pactive1:18;
    };
}scpu_core_pchannel_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pdeny2:1;
        RBus_UInt32  paccept2:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pactive2:18;
    };
}scpu_core_pchannel_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pdeny3:1;
        RBus_UInt32  paccept3:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pactive3:18;
    };
}scpu_core_pchannel_status_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  clusterpreq:1;
        RBus_UInt32  clusterpstate:7;
    };
}scpu_core_pchannel_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  clusterpdeny:1;
        RBus_UInt32  clusterpaccept:1;
        RBus_UInt32  clusterpactive:20;
    };
}scpu_core_pchannel_status_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ananke4_drf_bisr_mode:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  ananke4_drf_bisr_test_resume:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  ananke4_second_run_en:2;
        RBus_UInt32  res4:20;
    };
}scpu_core_mbisr_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ananke4_drf_bisr_done:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  ananke4_drf_bisr_start_pause:2;
        RBus_UInt32  res3:24;
    };
}scpu_core_mbisr_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ananke4_drf_bisr_fail:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  ananke4_bisr_fail:8;
    };
}scpu_core_mbisr_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ananke4_bisr_repaired:2;
    };
}scpu_core_mbisr_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bisr_out_63_32:32;
    };
}scpu_core_mbisr_status_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bisr_out_31_0:32;
    };
}scpu_core_mbisr_status_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_coord_rstn:1;
        RBus_UInt32  ananke4_shrbus_go:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ananke4_shrbus_en_cpu:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  ananke4_mbistcfg_sel:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  ananke4_bist_mode_all:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  ananke4_drf_bist_mode:5;
    };
}scpu_core_coordinator_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ananke4_drf_test_resume:5;
        RBus_UInt32  res2:6;
        RBus_UInt32  ananke4_diag_mode_scpu:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  ananke4_diag_memarray_sel:6;
        RBus_UInt32  res4:5;
        RBus_UInt32  ananke4_cpucore_sel:3;
    };
}scpu_core_coordinator_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  ananke4_shrbus_delay_enable:1;
        RBus_UInt32  ananke4_shrbus_delay_num:4;
        RBus_UInt32  ananke4_mbist_dmy_wr_enable:1;
        RBus_UInt32  ananke4_mbist_delay_enable:1;
        RBus_UInt32  ananke4_mbist_delay_num:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  ananke4_bist_mode_40_32:9;
    };
}scpu_core_coordinator_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_mode_31_0:32;
    };
}scpu_core_coordinator_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_diag_so_scpu:1;
        RBus_UInt32  ananke4_diag_start_scpu:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ananke4_mbistack:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  ananke4_mbistreq_dbg:5;
        RBus_UInt32  res3:16;
    };
}scpu_core_coordinator_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ananke4_mbist_fnsh:5;
        RBus_UInt32  res2:12;
        RBus_UInt32  res3:3;
        RBus_UInt32  ananke4_bist_done_40_32:9;
    };
}scpu_core_coordinator_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_done_31_0:32;
    };
}scpu_core_coordinator_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ananke4_drf_start_pause:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  ananke4_drf_bist_done:5;
        RBus_UInt32  res3:16;
    };
}scpu_core_coordinator_status_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  ananke4_bist_fail_152_128:25;
    };
}scpu_core_coordinator_status_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_fail_127_96:32;
    };
}scpu_core_coordinator_status_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_fail_95_64:32;
    };
}scpu_core_coordinator_status_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_fail_63_32:32;
    };
}scpu_core_coordinator_status_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_fail_31_0:32;
    };
}scpu_core_coordinator_status_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  diag_ready:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  diag_clear:1;
    };
}scpu_core_diag_so_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  diag_so:32;
    };
}scpu_core_diag_so_result_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  partnumber:12;
        RBus_UInt32  revision:4;
    };
}scpu_core_general_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  dftcoreclkdisable:4;
    };
}scpu_core_coreclk_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  dbgen_auth_slave_ananke_source_sel:1;
        RBus_UInt32  niden_auth_slave_ananke_source_sel:1;
        RBus_UInt32  spiden_auth_slave_ananke_source_sel:1;
        RBus_UInt32  spniden_auth_slave_ananke_source_sel:1;
    };
}scpu_core_auth_slave_ananke_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  anankepmusnapshotreq:1;
        RBus_UInt32  anankecfgend:2;
        RBus_UInt32  anankecfgte:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  anankevinithi:2;
        RBus_UInt32  anankeaa64naa32:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  anankecryptodisable:1;
    };
}scpu_core_config_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  anankervbaraddr0_39_32:8;
    };
}scpu_core_config_ananke_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankervbaraddr0_31_2:30;
        RBus_UInt32  res1:2;
    };
}scpu_core_config_ananke_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  anankervbaraddr1_39_32:8;
    };
}scpu_core_config_ananke_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankervbaraddr1_31_2:30;
        RBus_UInt32  res1:2;
    };
}scpu_core_config_ananke_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  anankecoreinstrret:4;
        RBus_UInt32  anankecoreinstrrun:4;
    };
}scpu_core_status_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  clusterdbgpwrupreq:1;
        RBus_UInt32  anankeawakeup:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  anankedbgpwrupreq:2;
    };
}scpu_core_power_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  anankedbgrstreq:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  anankepmushapshotack:1;
    };
}scpu_core_misc_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  res2:1;
        RBus_UInt32  anankecfgend_3_2:2;
        RBus_UInt32  anankecfgte_3_2:2;
        RBus_UInt32  res3:4;
        RBus_UInt32  anankevinithi_3_2:2;
        RBus_UInt32  anankeaa64naa32_3_2:2;
        RBus_UInt32  res4:2;
    };
}scpu_core_config_ananke_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  anankervbaraddr2_39_32:8;
    };
}scpu_core_config_ananke_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankervbaraddr2_31_2:30;
        RBus_UInt32  res1:2;
    };
}scpu_core_config_ananke_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  anankervbaraddr3_39_32:8;
    };
}scpu_core_config_ananke_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankervbaraddr3_31_2:30;
        RBus_UInt32  res1:2;
    };
}scpu_core_config_ananke_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  res2:4;
        RBus_UInt32  anankedbgpwrupreq_3_2:2;
    };
}scpu_core_power_ananke_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  anankedbgrstreq_3_2:2;
        RBus_UInt32  res2:2;
    };
}scpu_core_misc_ananke_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  ananke_trace_tpctl:1;
        RBus_UInt32  ananke_trace_tpmaxdatasize:5;
        RBus_UInt32  res2:4;
    };
}scpu_core_cs_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  ejtag_chain_mode:1;
        RBus_UInt32  srstconnected:8;
        RBus_UInt32  portenabled:8;
        RBus_UInt32  portconnected:8;
    };
}scpu_core_ejtag_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  csrtck_dly_4:2;
        RBus_UInt32  csrtck_dly_3:2;
        RBus_UInt32  csrtck_dly_2:2;
        RBus_UInt32  csrtck_dly_1:2;
        RBus_UInt32  csrtck_dly_0:2;
    };
}scpu_core_ejtag_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  status_status_jtagnsw:1;
        RBus_UInt32  status_status_jtagtop:1;
        RBus_UInt32  nsrstout:8;
    };
}scpu_core_ejtag_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  exok_en:1;
    };
}scpu_core_exok_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ananke_nclusterpmuirq:1;
        RBus_UInt32  ananke_nfaultirq4:1;
        RBus_UInt32  ananke_nfaultirq3:1;
        RBus_UInt32  ananke_nfaultirq2:1;
        RBus_UInt32  ananke_nfaultirq1:1;
        RBus_UInt32  ananke_nfaultirq0:1;
        RBus_UInt32  ananke_nerrirq4:1;
        RBus_UInt32  ananke_nerrirq3:1;
        RBus_UInt32  ananke_nerrirq2:1;
        RBus_UInt32  ananke_nerrirq1:1;
        RBus_UInt32  ananke_nerrirq0:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  gic_pmu_int:1;
        RBus_UInt32  gic_fault_int:1;
        RBus_UInt32  gic_err_int:1;
        RBus_UInt32  irq_ncnthvirq3:1;
        RBus_UInt32  irq_ncnthvirq2:1;
        RBus_UInt32  irq_ncnthvirq1:1;
        RBus_UInt32  irq_ncnthvirq0:1;
    };
}scpu_core_interrupt_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ananke_nclusterpmuirq_en:1;
        RBus_UInt32  ananke_nfaultirq4_en:1;
        RBus_UInt32  ananke_nfaultirq3_en:1;
        RBus_UInt32  ananke_nfaultirq2_en:1;
        RBus_UInt32  ananke_nfaultirq1_en:1;
        RBus_UInt32  ananke_nfaultirq0_en:1;
        RBus_UInt32  ananke_nerrirq4_en:1;
        RBus_UInt32  ananke_nerrirq3_en:1;
        RBus_UInt32  ananke_nerrirq2_en:1;
        RBus_UInt32  ananke_nerrirq1_en:1;
        RBus_UInt32  ananke_nerrirq0_en:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  errint_dest_sel:2;
        RBus_UInt32  res3:5;
        RBus_UInt32  gic_pmu_int_en:1;
        RBus_UInt32  gic_fault_int_en:1;
        RBus_UInt32  gic_err_int_en:1;
        RBus_UInt32  irq_ncnthvirq3_en:1;
        RBus_UInt32  irq_ncnthvirq2_en:1;
        RBus_UInt32  irq_ncnthvirq1_en:1;
        RBus_UInt32  irq_ncnthvirq0_en:1;
    };
}scpu_core_interrupt_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spi_31_0:32;
    };
}scpu_core_gic_spi_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spi_63_32:32;
    };
}scpu_core_gic_spi_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  gic_pmu_sample_req:1;
    };
}scpu_core_gic_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  gic_pmu_sample_ack:1;
        RBus_UInt32  gic_wake_request:4;
    };
}scpu_core_gic_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eco_rw:32;
    };
}scpu_core_eco_rw_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eco_r_only:32;
    };
}scpu_core_eco_r_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ananke_tie0:1;
    };
}scpu_core_ananke_tie_reg_RBUS;

#else //apply LITTLE_ENDIAN

//======SCPU_CORE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pllscpu_lpf_rs:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  pllscpu_pdiv:2;
        RBus_UInt32  pllscpu_pdiv_bps:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pllscpu_icp:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pllscpu_testsel:2;
        RBus_UInt32  pllscpu_lpf_cp:1;
        RBus_UInt32  pllscpu_lpf_cs:2;
        RBus_UInt32  pllscpu_prediv_sel:2;
        RBus_UInt32  pllscpu_wd_rst:1;
        RBus_UInt32  pllscpu_wd_set:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  pllscpu_pi_bps:1;
        RBus_UInt32  res6:7;
    };
}scpu_core_sys_pll_scpu1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pllscpu_pow:1;
        RBus_UInt32  pllscpu_rstb:1;
        RBus_UInt32  pllscpu_oeb:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  pllscpu_ncode:8;
        RBus_UInt32  pllscpu_fcode:11;
        RBus_UInt32  res3:5;
    };
}scpu_core_sys_pll_scpu2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pllscpu_oc_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pllscpu_sdm_order:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pllscpu_oc_step:10;
        RBus_UInt32  pllscpu_oc_done_delay:6;
        RBus_UInt32  pllscpu_fastsel:1;
        RBus_UInt32  pllscpu_ldo10v_vref_sel:1;
        RBus_UInt32  pllscpu_ldo10v_sel:2;
        RBus_UInt32  pllscpu_sel_oc_mode:2;
        RBus_UInt32  pllscpu_pi_cur_sel:2;
        RBus_UInt32  pllscpu_hs_oc_stop:2;
        RBus_UInt32  pllscpu_en_pi_debug:1;
        RBus_UInt32  pllscpu_bypass_pi:1;
    };
}scpu_core_sys_scpu_dvfs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pllscpu_dfvs_fmod_dbg:1;
        RBus_UInt32  pllscpu_fcode_dbg_ro:11;
        RBus_UInt32  pllscpu_ncode_dbg_ro:8;
        RBus_UInt32  pllscpu_oc_done_ro:1;
        RBus_UInt32  pllscpu_wdout_ro:1;
        RBus_UInt32  res1:10;
    };
}scpu_core_sys_scpu_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pllscpu_reserve:6;
        RBus_UInt32  res1:26;
    };
}scpu_core_sys_scpu_reserve_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_ssc_ckinv:1;
        RBus_UInt32  res1:31;
    };
}scpu_core_sys_scpu_ckinv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clkratio_scpu:5;
        RBus_UInt32  res1:27;
    };
}scpu_core_sys_scpu_clkratio_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clkratio_scpu_active:1;
        RBus_UInt32  res1:31;
    };
}scpu_core_sys_scpu_clkratio_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clken_top_ts:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  clken_scpu_top_logic:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  clken_ananke:1;
        RBus_UInt32  clken_top_gic:1;
        RBus_UInt32  clken_top_periph:1;
        RBus_UInt32  clken_top_apb:1;
        RBus_UInt32  clken_top_atb:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  clken_dss:1;
        RBus_UInt32  res4:17;
    };
}scpu_core_sys_scpu_clken_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  trc_clkdiv_sel:2;
        RBus_UInt32  trc_clk_delay:4;
        RBus_UInt32  res1:26;
    };
}scpu_core_sys_scpu_clkdiv_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_gic_rstn:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  scpu_core3_poreset_n:1;
        RBus_UInt32  scpu_core2_poreset_n:1;
        RBus_UInt32  scpu_core3_rstn:1;
        RBus_UInt32  scpu_core2_rstn:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  scpu_dbg_rstn:1;
        RBus_UInt32  scpu_core1_poreset_n:1;
        RBus_UInt32  scpu_core0_poreset_n:1;
        RBus_UInt32  scpu_core1_rstn:1;
        RBus_UInt32  scpu_core0_rstn:1;
        RBus_UInt32  scpu_nic_rstn:1;
        RBus_UInt32  resetsocdbgn:1;
        RBus_UInt32  scpu_s_rstn:1;
        RBus_UInt32  scpu_s_poreset_n:1;
        RBus_UInt32  scpu_peri_rstn:1;
        RBus_UInt32  scpu_p_rstn:1;
        RBus_UInt32  res3:13;
    };
}scpu_core_sys_scpu_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  voltprob_scpu_lvl_gnd_ctrl:1;
        RBus_UInt32  voltprob_scpu_lvl_pwr_ctrl:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  voltprob_ananke_c0_gnd_ctrl:2;
        RBus_UInt32  voltprob_ananke_c0_pwr_ctrl:2;
        RBus_UInt32  res2:24;
    };
}scpu_core_voltage_probe_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke_dss1_speed_en:1;
        RBus_UInt32  ananke_dss1_wire_sel:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  ananke_dss1_ro_sel:3;
        RBus_UInt32  ananke_dss1_rst_n:1;
        RBus_UInt32  res2:17;
        RBus_UInt32  ananke_dss0_speed_en:1;
        RBus_UInt32  ananke_dss0_wire_sel:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  ananke_dss0_ro_sel:3;
        RBus_UInt32  ananke_dss0_rst_n:1;
    };
}scpu_core_dss_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  scpu_c31_9p5t_wire_sel:1;
        RBus_UInt32  scpu_c31_9p5t_speed_en:1;
        RBus_UInt32  scpu_c31_9p5t_ro_sel:3;
        RBus_UInt32  scpu_c31_9p5t_dss_rst_n:1;
        RBus_UInt32  scpu_c31_9p5t_data_in:20;
    };
}scpu_core_dss_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  scpu_c35_9p5t_wire_sel:1;
        RBus_UInt32  scpu_c35_9p5t_speed_en:1;
        RBus_UInt32  scpu_c35_9p5t_ro_sel:3;
        RBus_UInt32  scpu_c35_9p5t_dss_rst_n:1;
        RBus_UInt32  scpu_c35_9p5t_data_in:20;
    };
}scpu_core_dss_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  scpu_c38_9p5t_wire_sel:1;
        RBus_UInt32  scpu_c38_9p5t_speed_en:1;
        RBus_UInt32  scpu_c38_9p5t_ro_sel:3;
        RBus_UInt32  scpu_c38_9p5t_dss_rst_n:1;
        RBus_UInt32  scpu_c38_9p5t_data_in:20;
    };
}scpu_core_dss_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  ananke_dss0_count_out:20;
        RBus_UInt32  ananke_dss0_ready:1;
    };
}scpu_core_dss_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  ananke_dss1_count_out:20;
        RBus_UInt32  ananke_dss1_ready:1;
    };
}scpu_core_dss_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  scpu_c31_9p5t_wsort_go_ro:1;
        RBus_UInt32  scpu_c31_9p5t_ready_ro:1;
        RBus_UInt32  scpu_c31_9p5t_count_out_ro:20;
    };
}scpu_core_dss_status_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  scpu_c35_9p5t_wsort_go_ro:1;
        RBus_UInt32  scpu_c35_9p5t_ready_ro:1;
        RBus_UInt32  scpu_c35_9p5t_count_out_ro:20;
    };
}scpu_core_dss_status_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  scpu_c38_9p5t_wsort_go_ro:1;
        RBus_UInt32  scpu_c38_9p5t_ready_ro:1;
        RBus_UInt32  scpu_c38_9p5t_count_out_ro:20;
    };
}scpu_core_dss_status_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  scpu_dss_burst_mode_wire_sel:1;
        RBus_UInt32  scpu_dss_burst_mode_en:1;
        RBus_UInt32  scpu_dss_burst_mode_ro_sel:3;
        RBus_UInt32  scpu_dss_burst_mode_rst_n:1;
        RBus_UInt32  scpu_dss_burst_mode_min_sel:1;
        RBus_UInt32  res2:19;
    };
}scpu_core_dss_burst_mode_ctrl_scpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  scpu_dss_burst_mode_ready:1;
        RBus_UInt32  scpu_dss_burst_mode_count:20;
    };
}scpu_core_dss_burst_mode_status_scpu_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  scpu_dss_burst_mode_record:20;
    };
}scpu_core_dss_burst_mode_status_scpu_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  ananke_dss0_burst_mode_wire_sel:1;
        RBus_UInt32  ananke_dss0_burst_mode_en:1;
        RBus_UInt32  ananke_dss0_burst_mode_ro_sel:3;
        RBus_UInt32  ananke_dss0_burst_mode_rst_n:1;
        RBus_UInt32  ananke_dss0_burst_mode_min_sel:1;
        RBus_UInt32  res2:19;
    };
}scpu_core_dss0_burst_mode_ctrl_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  ananke_dss0_burst_mode_ready:1;
        RBus_UInt32  ananke_dss0_burst_mode_count:20;
    };
}scpu_core_dss0_burst_mode_status_ananke_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  ananke_dss0_burst_mode_record:20;
    };
}scpu_core_dss0_burst_mode_status_ananke_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  ananke_dss1_burst_mode_wire_sel:1;
        RBus_UInt32  ananke_dss1_burst_mode_en:1;
        RBus_UInt32  ananke_dss1_burst_mode_ro_sel:3;
        RBus_UInt32  ananke_dss1_burst_mode_rst_n:1;
        RBus_UInt32  ananke_dss1_burst_mode_min_sel:1;
        RBus_UInt32  res2:19;
    };
}scpu_core_dss1_burst_mode_ctrl_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  ananke_dss1_burst_mode_ready:1;
        RBus_UInt32  ananke_dss1_burst_mode_count:20;
    };
}scpu_core_dss1_burst_mode_status_ananke_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  ananke_dss1_burst_mode_record:20;
    };
}scpu_core_dss1_burst_mode_status_ananke_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  pwrpad_dss_c30_wire_sel:1;
        RBus_UInt32  pwrpad_dss_c30_speed_en:1;
        RBus_UInt32  pwrpad_dss_c30_ro_sel:3;
        RBus_UInt32  pwrpad_dss_c30_rst_n:1;
        RBus_UInt32  pwrpad_dss_c30_data_in:20;
    };
}scpu_core_dss_ctrl_pwrpad_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pwrpad_dss_c30_wsort_go:1;
        RBus_UInt32  pwrpad_dss_c30_ready:1;
        RBus_UInt32  pwrpad_dss_c30_count_out:20;
    };
}scpu_core_dss_status_pwrpad_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_rm2:1;
        RBus_UInt32  ananke4_rm3:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ananke4_test1:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  ananke4_rm_33_32:2;
        RBus_UInt32  res3:13;
        RBus_UInt32  ananke4_rme:1;
    };
}scpu_core_sram_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_rm_31_0:32;
    };
}scpu_core_sram_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pstate0:6;
        RBus_UInt32  preq0:1;
        RBus_UInt32  write_en0:1;
        RBus_UInt32  pstate1:6;
        RBus_UInt32  preq1:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  pstate2:6;
        RBus_UInt32  preq2:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  pstate3:6;
        RBus_UInt32  preq3:1;
        RBus_UInt32  write_en3:1;
    };
}scpu_core_pchannel_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pactive0:18;
        RBus_UInt32  res1:2;
        RBus_UInt32  paccept0:1;
        RBus_UInt32  pdeny0:1;
        RBus_UInt32  res2:10;
    };
}scpu_core_pchannel_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pactive1:18;
        RBus_UInt32  res1:2;
        RBus_UInt32  paccept1:1;
        RBus_UInt32  pdeny1:1;
        RBus_UInt32  res2:10;
    };
}scpu_core_pchannel_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pactive2:18;
        RBus_UInt32  res1:2;
        RBus_UInt32  paccept2:1;
        RBus_UInt32  pdeny2:1;
        RBus_UInt32  res2:10;
    };
}scpu_core_pchannel_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pactive3:18;
        RBus_UInt32  res1:2;
        RBus_UInt32  paccept3:1;
        RBus_UInt32  pdeny3:1;
        RBus_UInt32  res2:10;
    };
}scpu_core_pchannel_status_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clusterpstate:7;
        RBus_UInt32  clusterpreq:1;
        RBus_UInt32  res1:24;
    };
}scpu_core_pchannel_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clusterpactive:20;
        RBus_UInt32  clusterpaccept:1;
        RBus_UInt32  clusterpdeny:1;
        RBus_UInt32  res1:10;
    };
}scpu_core_pchannel_status_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ananke4_second_run_en:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  ananke4_drf_bisr_test_resume:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  ananke4_drf_bisr_mode:2;
        RBus_UInt32  res4:2;
    };
}scpu_core_mbisr_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ananke4_drf_bisr_start_pause:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  ananke4_drf_bisr_done:2;
        RBus_UInt32  res3:2;
    };
}scpu_core_mbisr_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bisr_fail:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  ananke4_drf_bisr_fail:8;
        RBus_UInt32  res2:8;
    };
}scpu_core_mbisr_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bisr_repaired:2;
        RBus_UInt32  res1:30;
    };
}scpu_core_mbisr_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bisr_out_63_32:32;
    };
}scpu_core_mbisr_status_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bisr_out_31_0:32;
    };
}scpu_core_mbisr_status_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_drf_bist_mode:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  ananke4_bist_mode_all:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  ananke4_mbistcfg_sel:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  ananke4_shrbus_en_cpu:5;
        RBus_UInt32  res4:1;
        RBus_UInt32  ananke4_shrbus_go:1;
        RBus_UInt32  ananke4_coord_rstn:1;
    };
}scpu_core_coordinator_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_cpucore_sel:3;
        RBus_UInt32  res1:5;
        RBus_UInt32  ananke4_diag_memarray_sel:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  ananke4_diag_mode_scpu:2;
        RBus_UInt32  res3:6;
        RBus_UInt32  ananke4_drf_test_resume:5;
        RBus_UInt32  res4:3;
    };
}scpu_core_coordinator_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_mode_40_32:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  ananke4_mbist_delay_num:2;
        RBus_UInt32  ananke4_mbist_delay_enable:1;
        RBus_UInt32  ananke4_mbist_dmy_wr_enable:1;
        RBus_UInt32  ananke4_shrbus_delay_num:4;
        RBus_UInt32  ananke4_shrbus_delay_enable:1;
        RBus_UInt32  res2:11;
    };
}scpu_core_coordinator_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_mode_31_0:32;
    };
}scpu_core_coordinator_ctrl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ananke4_mbistreq_dbg:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  ananke4_mbistack:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  ananke4_diag_start_scpu:1;
        RBus_UInt32  ananke4_diag_so_scpu:1;
    };
}scpu_core_coordinator_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_done_40_32:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  res2:12;
        RBus_UInt32  ananke4_mbist_fnsh:5;
        RBus_UInt32  res3:3;
    };
}scpu_core_coordinator_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_done_31_0:32;
    };
}scpu_core_coordinator_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ananke4_drf_bist_done:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  ananke4_drf_start_pause:5;
        RBus_UInt32  res3:3;
    };
}scpu_core_coordinator_status_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_fail_152_128:25;
        RBus_UInt32  res1:7;
    };
}scpu_core_coordinator_status_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_fail_127_96:32;
    };
}scpu_core_coordinator_status_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_fail_95_64:32;
    };
}scpu_core_coordinator_status_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_fail_63_32:32;
    };
}scpu_core_coordinator_status_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke4_bist_fail_31_0:32;
    };
}scpu_core_coordinator_status_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  diag_clear:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  diag_ready:1;
        RBus_UInt32  res2:27;
    };
}scpu_core_diag_so_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  diag_so:32;
    };
}scpu_core_diag_so_result_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  revision:4;
        RBus_UInt32  partnumber:12;
        RBus_UInt32  res1:16;
    };
}scpu_core_general_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dftcoreclkdisable:4;
        RBus_UInt32  res1:28;
    };
}scpu_core_coreclk_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spniden_auth_slave_ananke_source_sel:1;
        RBus_UInt32  spiden_auth_slave_ananke_source_sel:1;
        RBus_UInt32  niden_auth_slave_ananke_source_sel:1;
        RBus_UInt32  dbgen_auth_slave_ananke_source_sel:1;
        RBus_UInt32  res1:28;
    };
}scpu_core_auth_slave_ananke_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankecryptodisable:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  anankeaa64naa32:2;
        RBus_UInt32  anankevinithi:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  anankecfgte:2;
        RBus_UInt32  anankecfgend:2;
        RBus_UInt32  anankepmusnapshotreq:1;
        RBus_UInt32  res3:17;
    };
}scpu_core_config_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankervbaraddr0_39_32:8;
        RBus_UInt32  res1:24;
    };
}scpu_core_config_ananke_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  anankervbaraddr0_31_2:30;
    };
}scpu_core_config_ananke_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankervbaraddr1_39_32:8;
        RBus_UInt32  res1:24;
    };
}scpu_core_config_ananke_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  anankervbaraddr1_31_2:30;
    };
}scpu_core_config_ananke_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankecoreinstrrun:4;
        RBus_UInt32  anankecoreinstrret:4;
        RBus_UInt32  res1:24;
    };
}scpu_core_status_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankedbgpwrupreq:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  anankeawakeup:1;
        RBus_UInt32  clusterdbgpwrupreq:1;
        RBus_UInt32  res2:26;
    };
}scpu_core_power_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankepmushapshotack:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  anankedbgrstreq:2;
        RBus_UInt32  res2:28;
    };
}scpu_core_misc_ananke_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  anankeaa64naa32_3_2:2;
        RBus_UInt32  anankevinithi_3_2:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  anankecfgte_3_2:2;
        RBus_UInt32  anankecfgend_3_2:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:17;
    };
}scpu_core_config_ananke_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankervbaraddr2_39_32:8;
        RBus_UInt32  res1:24;
    };
}scpu_core_config_ananke_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  anankervbaraddr2_31_2:30;
    };
}scpu_core_config_ananke_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankervbaraddr3_39_32:8;
        RBus_UInt32  res1:24;
    };
}scpu_core_config_ananke_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  anankervbaraddr3_31_2:30;
    };
}scpu_core_config_ananke_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  anankedbgpwrupreq_3_2:2;
        RBus_UInt32  res1:4;
        RBus_UInt32  res2:26;
    };
}scpu_core_power_ananke_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  anankedbgrstreq_3_2:2;
        RBus_UInt32  res2:28;
    };
}scpu_core_misc_ananke_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ananke_trace_tpmaxdatasize:5;
        RBus_UInt32  ananke_trace_tpctl:1;
        RBus_UInt32  res2:22;
    };
}scpu_core_cs_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  portconnected:8;
        RBus_UInt32  portenabled:8;
        RBus_UInt32  srstconnected:8;
        RBus_UInt32  ejtag_chain_mode:1;
        RBus_UInt32  res1:7;
    };
}scpu_core_ejtag_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  csrtck_dly_0:2;
        RBus_UInt32  csrtck_dly_1:2;
        RBus_UInt32  csrtck_dly_2:2;
        RBus_UInt32  csrtck_dly_3:2;
        RBus_UInt32  csrtck_dly_4:2;
        RBus_UInt32  res1:22;
    };
}scpu_core_ejtag_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  nsrstout:8;
        RBus_UInt32  status_status_jtagtop:1;
        RBus_UInt32  status_status_jtagnsw:1;
        RBus_UInt32  res1:22;
    };
}scpu_core_ejtag_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  exok_en:1;
        RBus_UInt32  res1:31;
    };
}scpu_core_exok_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_ncnthvirq0:1;
        RBus_UInt32  irq_ncnthvirq1:1;
        RBus_UInt32  irq_ncnthvirq2:1;
        RBus_UInt32  irq_ncnthvirq3:1;
        RBus_UInt32  gic_err_int:1;
        RBus_UInt32  gic_fault_int:1;
        RBus_UInt32  gic_pmu_int:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  ananke_nerrirq0:1;
        RBus_UInt32  ananke_nerrirq1:1;
        RBus_UInt32  ananke_nerrirq2:1;
        RBus_UInt32  ananke_nerrirq3:1;
        RBus_UInt32  ananke_nerrirq4:1;
        RBus_UInt32  ananke_nfaultirq0:1;
        RBus_UInt32  ananke_nfaultirq1:1;
        RBus_UInt32  ananke_nfaultirq2:1;
        RBus_UInt32  ananke_nfaultirq3:1;
        RBus_UInt32  ananke_nfaultirq4:1;
        RBus_UInt32  ananke_nclusterpmuirq:1;
        RBus_UInt32  res2:1;
    };
}scpu_core_interrupt_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_ncnthvirq0_en:1;
        RBus_UInt32  irq_ncnthvirq1_en:1;
        RBus_UInt32  irq_ncnthvirq2_en:1;
        RBus_UInt32  irq_ncnthvirq3_en:1;
        RBus_UInt32  gic_err_int_en:1;
        RBus_UInt32  gic_fault_int_en:1;
        RBus_UInt32  gic_pmu_int_en:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  errint_dest_sel:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  ananke_nerrirq0_en:1;
        RBus_UInt32  ananke_nerrirq1_en:1;
        RBus_UInt32  ananke_nerrirq2_en:1;
        RBus_UInt32  ananke_nerrirq3_en:1;
        RBus_UInt32  ananke_nerrirq4_en:1;
        RBus_UInt32  ananke_nfaultirq0_en:1;
        RBus_UInt32  ananke_nfaultirq1_en:1;
        RBus_UInt32  ananke_nfaultirq2_en:1;
        RBus_UInt32  ananke_nfaultirq3_en:1;
        RBus_UInt32  ananke_nfaultirq4_en:1;
        RBus_UInt32  ananke_nclusterpmuirq_en:1;
        RBus_UInt32  res3:1;
    };
}scpu_core_interrupt_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spi_31_0:32;
    };
}scpu_core_gic_spi_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spi_63_32:32;
    };
}scpu_core_gic_spi_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gic_pmu_sample_req:1;
        RBus_UInt32  res1:31;
    };
}scpu_core_gic_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gic_wake_request:4;
        RBus_UInt32  gic_pmu_sample_ack:1;
        RBus_UInt32  res1:27;
    };
}scpu_core_gic_status_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eco_rw:32;
    };
}scpu_core_eco_rw_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eco_r_only:32;
    };
}scpu_core_eco_r_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ananke_tie0:1;
        RBus_UInt32  res1:31;
    };
}scpu_core_ananke_tie_reg_RBUS;




#endif 


#endif 
