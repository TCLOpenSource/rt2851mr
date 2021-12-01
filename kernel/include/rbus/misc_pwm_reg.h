/**
* @file Merlin5-DesignSpec-MISC_PWM
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MISC_PWM_REG_H_
#define _RBUS_MISC_PWM_REG_H_

#include "rbus_types.h"



//  MISC_PWM Register Address
#define  MISC_PWM_PWM_DB0_CTRL                                                  0x1801B900
#define  MISC_PWM_PWM_DB0_CTRL_reg_addr                                          "0xB801B900"
#define  MISC_PWM_PWM_DB0_CTRL_reg                                               0xB801B900
#define  MISC_PWM_PWM_DB0_CTRL_inst_addr                                         "0x0000"
#define  set_MISC_PWM_PWM_DB0_CTRL_reg(data)                                     (*((volatile unsigned int*)MISC_PWM_PWM_DB0_CTRL_reg)=data)
#define  get_MISC_PWM_PWM_DB0_CTRL_reg                                           (*((volatile unsigned int*)MISC_PWM_PWM_DB0_CTRL_reg))
#define  MISC_PWM_PWM_DB0_CTRL_global_vsync_en_shift                             (31)
#define  MISC_PWM_PWM_DB0_CTRL_pwm7_w_db0_mode_shift                             (30)
#define  MISC_PWM_PWM_DB0_CTRL_pwm7_db0_rd_sel_shift                             (29)
#define  MISC_PWM_PWM_DB0_CTRL_pwm7_w_db0_en_shift                               (28)
#define  MISC_PWM_PWM_DB0_CTRL_pwm6_w_db0_mode_shift                             (26)
#define  MISC_PWM_PWM_DB0_CTRL_pwm6_db0_rd_sel_shift                             (25)
#define  MISC_PWM_PWM_DB0_CTRL_pwm6_w_db0_en_shift                               (24)
#define  MISC_PWM_PWM_DB0_CTRL_pwm5_w_db0_mode_shift                             (22)
#define  MISC_PWM_PWM_DB0_CTRL_pwm5_db0_rd_sel_shift                             (21)
#define  MISC_PWM_PWM_DB0_CTRL_pwm5_w_db0_en_shift                               (20)
#define  MISC_PWM_PWM_DB0_CTRL_pwm4_w_db0_mode_shift                             (18)
#define  MISC_PWM_PWM_DB0_CTRL_pwm4_db0_rd_sel_shift                             (17)
#define  MISC_PWM_PWM_DB0_CTRL_pwm4_w_db0_en_shift                               (16)
#define  MISC_PWM_PWM_DB0_CTRL_pwm3_w_db0_mode_shift                             (14)
#define  MISC_PWM_PWM_DB0_CTRL_pwm3_db0_rd_sel_shift                             (13)
#define  MISC_PWM_PWM_DB0_CTRL_pwm3_w_db0_en_shift                               (12)
#define  MISC_PWM_PWM_DB0_CTRL_pwm2_w_db0_mode_shift                             (10)
#define  MISC_PWM_PWM_DB0_CTRL_pwm2_db0_rd_sel_shift                             (9)
#define  MISC_PWM_PWM_DB0_CTRL_pwm2_w_db0_en_shift                               (8)
#define  MISC_PWM_PWM_DB0_CTRL_pwm1_w_db0_mode_shift                             (6)
#define  MISC_PWM_PWM_DB0_CTRL_pwm1_db0_rd_sel_shift                             (5)
#define  MISC_PWM_PWM_DB0_CTRL_pwm1_w_db0_en_shift                               (4)
#define  MISC_PWM_PWM_DB0_CTRL_pwm0_w_db0_mode_shift                             (2)
#define  MISC_PWM_PWM_DB0_CTRL_pwm0_db0_rd_sel_shift                             (1)
#define  MISC_PWM_PWM_DB0_CTRL_pwm0_w_db0_en_shift                               (0)
#define  MISC_PWM_PWM_DB0_CTRL_global_vsync_en_mask                              (0x80000000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm7_w_db0_mode_mask                              (0x40000000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm7_db0_rd_sel_mask                              (0x20000000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm7_w_db0_en_mask                                (0x10000000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm6_w_db0_mode_mask                              (0x04000000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm6_db0_rd_sel_mask                              (0x02000000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm6_w_db0_en_mask                                (0x01000000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm5_w_db0_mode_mask                              (0x00400000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm5_db0_rd_sel_mask                              (0x00200000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm5_w_db0_en_mask                                (0x00100000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm4_w_db0_mode_mask                              (0x00040000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm4_db0_rd_sel_mask                              (0x00020000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm4_w_db0_en_mask                                (0x00010000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm3_w_db0_mode_mask                              (0x00004000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm3_db0_rd_sel_mask                              (0x00002000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm3_w_db0_en_mask                                (0x00001000)
#define  MISC_PWM_PWM_DB0_CTRL_pwm2_w_db0_mode_mask                              (0x00000400)
#define  MISC_PWM_PWM_DB0_CTRL_pwm2_db0_rd_sel_mask                              (0x00000200)
#define  MISC_PWM_PWM_DB0_CTRL_pwm2_w_db0_en_mask                                (0x00000100)
#define  MISC_PWM_PWM_DB0_CTRL_pwm1_w_db0_mode_mask                              (0x00000040)
#define  MISC_PWM_PWM_DB0_CTRL_pwm1_db0_rd_sel_mask                              (0x00000020)
#define  MISC_PWM_PWM_DB0_CTRL_pwm1_w_db0_en_mask                                (0x00000010)
#define  MISC_PWM_PWM_DB0_CTRL_pwm0_w_db0_mode_mask                              (0x00000004)
#define  MISC_PWM_PWM_DB0_CTRL_pwm0_db0_rd_sel_mask                              (0x00000002)
#define  MISC_PWM_PWM_DB0_CTRL_pwm0_w_db0_en_mask                                (0x00000001)
#define  MISC_PWM_PWM_DB0_CTRL_global_vsync_en(data)                             (0x80000000&((data)<<31))
#define  MISC_PWM_PWM_DB0_CTRL_pwm7_w_db0_mode(data)                             (0x40000000&((data)<<30))
#define  MISC_PWM_PWM_DB0_CTRL_pwm7_db0_rd_sel(data)                             (0x20000000&((data)<<29))
#define  MISC_PWM_PWM_DB0_CTRL_pwm7_w_db0_en(data)                               (0x10000000&((data)<<28))
#define  MISC_PWM_PWM_DB0_CTRL_pwm6_w_db0_mode(data)                             (0x04000000&((data)<<26))
#define  MISC_PWM_PWM_DB0_CTRL_pwm6_db0_rd_sel(data)                             (0x02000000&((data)<<25))
#define  MISC_PWM_PWM_DB0_CTRL_pwm6_w_db0_en(data)                               (0x01000000&((data)<<24))
#define  MISC_PWM_PWM_DB0_CTRL_pwm5_w_db0_mode(data)                             (0x00400000&((data)<<22))
#define  MISC_PWM_PWM_DB0_CTRL_pwm5_db0_rd_sel(data)                             (0x00200000&((data)<<21))
#define  MISC_PWM_PWM_DB0_CTRL_pwm5_w_db0_en(data)                               (0x00100000&((data)<<20))
#define  MISC_PWM_PWM_DB0_CTRL_pwm4_w_db0_mode(data)                             (0x00040000&((data)<<18))
#define  MISC_PWM_PWM_DB0_CTRL_pwm4_db0_rd_sel(data)                             (0x00020000&((data)<<17))
#define  MISC_PWM_PWM_DB0_CTRL_pwm4_w_db0_en(data)                               (0x00010000&((data)<<16))
#define  MISC_PWM_PWM_DB0_CTRL_pwm3_w_db0_mode(data)                             (0x00004000&((data)<<14))
#define  MISC_PWM_PWM_DB0_CTRL_pwm3_db0_rd_sel(data)                             (0x00002000&((data)<<13))
#define  MISC_PWM_PWM_DB0_CTRL_pwm3_w_db0_en(data)                               (0x00001000&((data)<<12))
#define  MISC_PWM_PWM_DB0_CTRL_pwm2_w_db0_mode(data)                             (0x00000400&((data)<<10))
#define  MISC_PWM_PWM_DB0_CTRL_pwm2_db0_rd_sel(data)                             (0x00000200&((data)<<9))
#define  MISC_PWM_PWM_DB0_CTRL_pwm2_w_db0_en(data)                               (0x00000100&((data)<<8))
#define  MISC_PWM_PWM_DB0_CTRL_pwm1_w_db0_mode(data)                             (0x00000040&((data)<<6))
#define  MISC_PWM_PWM_DB0_CTRL_pwm1_db0_rd_sel(data)                             (0x00000020&((data)<<5))
#define  MISC_PWM_PWM_DB0_CTRL_pwm1_w_db0_en(data)                               (0x00000010&((data)<<4))
#define  MISC_PWM_PWM_DB0_CTRL_pwm0_w_db0_mode(data)                             (0x00000004&((data)<<2))
#define  MISC_PWM_PWM_DB0_CTRL_pwm0_db0_rd_sel(data)                             (0x00000002&((data)<<1))
#define  MISC_PWM_PWM_DB0_CTRL_pwm0_w_db0_en(data)                               (0x00000001&(data))
#define  MISC_PWM_PWM_DB0_CTRL_get_global_vsync_en(data)                         ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm7_w_db0_mode(data)                         ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm7_db0_rd_sel(data)                         ((0x20000000&(data))>>29)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm7_w_db0_en(data)                           ((0x10000000&(data))>>28)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm6_w_db0_mode(data)                         ((0x04000000&(data))>>26)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm6_db0_rd_sel(data)                         ((0x02000000&(data))>>25)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm6_w_db0_en(data)                           ((0x01000000&(data))>>24)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm5_w_db0_mode(data)                         ((0x00400000&(data))>>22)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm5_db0_rd_sel(data)                         ((0x00200000&(data))>>21)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm5_w_db0_en(data)                           ((0x00100000&(data))>>20)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm4_w_db0_mode(data)                         ((0x00040000&(data))>>18)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm4_db0_rd_sel(data)                         ((0x00020000&(data))>>17)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm4_w_db0_en(data)                           ((0x00010000&(data))>>16)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm3_w_db0_mode(data)                         ((0x00004000&(data))>>14)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm3_db0_rd_sel(data)                         ((0x00002000&(data))>>13)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm3_w_db0_en(data)                           ((0x00001000&(data))>>12)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm2_w_db0_mode(data)                         ((0x00000400&(data))>>10)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm2_db0_rd_sel(data)                         ((0x00000200&(data))>>9)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm2_w_db0_en(data)                           ((0x00000100&(data))>>8)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm1_w_db0_mode(data)                         ((0x00000040&(data))>>6)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm1_db0_rd_sel(data)                         ((0x00000020&(data))>>5)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm1_w_db0_en(data)                           ((0x00000010&(data))>>4)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm0_w_db0_mode(data)                         ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm0_db0_rd_sel(data)                         ((0x00000002&(data))>>1)
#define  MISC_PWM_PWM_DB0_CTRL_get_pwm0_w_db0_en(data)                           (0x00000001&(data))

#define  MISC_PWM_PWM_DB1_CTRL                                                  0x1801B904
#define  MISC_PWM_PWM_DB1_CTRL_reg_addr                                          "0xB801B904"
#define  MISC_PWM_PWM_DB1_CTRL_reg                                               0xB801B904
#define  MISC_PWM_PWM_DB1_CTRL_inst_addr                                         "0x0001"
#define  set_MISC_PWM_PWM_DB1_CTRL_reg(data)                                     (*((volatile unsigned int*)MISC_PWM_PWM_DB1_CTRL_reg)=data)
#define  get_MISC_PWM_PWM_DB1_CTRL_reg                                           (*((volatile unsigned int*)MISC_PWM_PWM_DB1_CTRL_reg))
#define  MISC_PWM_PWM_DB1_CTRL_pwm1_db1_rd_sel_shift                             (3)
#define  MISC_PWM_PWM_DB1_CTRL_pwm1_w_db1_en_shift                               (2)
#define  MISC_PWM_PWM_DB1_CTRL_pwm0_db1_rd_sel_shift                             (1)
#define  MISC_PWM_PWM_DB1_CTRL_pwm0_w_db1_en_shift                               (0)
#define  MISC_PWM_PWM_DB1_CTRL_pwm1_db1_rd_sel_mask                              (0x00000008)
#define  MISC_PWM_PWM_DB1_CTRL_pwm1_w_db1_en_mask                                (0x00000004)
#define  MISC_PWM_PWM_DB1_CTRL_pwm0_db1_rd_sel_mask                              (0x00000002)
#define  MISC_PWM_PWM_DB1_CTRL_pwm0_w_db1_en_mask                                (0x00000001)
#define  MISC_PWM_PWM_DB1_CTRL_pwm1_db1_rd_sel(data)                             (0x00000008&((data)<<3))
#define  MISC_PWM_PWM_DB1_CTRL_pwm1_w_db1_en(data)                               (0x00000004&((data)<<2))
#define  MISC_PWM_PWM_DB1_CTRL_pwm0_db1_rd_sel(data)                             (0x00000002&((data)<<1))
#define  MISC_PWM_PWM_DB1_CTRL_pwm0_w_db1_en(data)                               (0x00000001&(data))
#define  MISC_PWM_PWM_DB1_CTRL_get_pwm1_db1_rd_sel(data)                         ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM_DB1_CTRL_get_pwm1_w_db1_en(data)                           ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM_DB1_CTRL_get_pwm0_db1_rd_sel(data)                         ((0x00000002&(data))>>1)
#define  MISC_PWM_PWM_DB1_CTRL_get_pwm0_w_db1_en(data)                           (0x00000001&(data))

#define  MISC_PWM_PWM0_CTRL                                                     0x1801B908
#define  MISC_PWM_PWM0_CTRL_reg_addr                                             "0xB801B908"
#define  MISC_PWM_PWM0_CTRL_reg                                                  0xB801B908
#define  MISC_PWM_PWM0_CTRL_inst_addr                                            "0x0002"
#define  set_MISC_PWM_PWM0_CTRL_reg(data)                                        (*((volatile unsigned int*)MISC_PWM_PWM0_CTRL_reg)=data)
#define  get_MISC_PWM_PWM0_CTRL_reg                                              (*((volatile unsigned int*)MISC_PWM_PWM0_CTRL_reg))
#define  MISC_PWM_PWM0_CTRL_pwm0l_shift                                          (31)
#define  MISC_PWM_PWM0_CTRL_always01_and_pwmduty_sel_shift                       (30)
#define  MISC_PWM_PWM0_CTRL_pwm0_en_shift                                        (29)
#define  MISC_PWM_PWM0_CTRL_pwm0_dvs_rst_en_shift                                (28)
#define  MISC_PWM_PWM0_CTRL_pwm0_mode_shift                                      (26)
#define  MISC_PWM_PWM0_CTRL_pwm0_mplus_dim_duty_en_shift                         (25)
#define  MISC_PWM_PWM0_CTRL_pwm0_vs_delay_thr_shift                              (4)
#define  MISC_PWM_PWM0_CTRL_pwm0_mplus_dim_duty_round_en_shift                   (3)
#define  MISC_PWM_PWM0_CTRL_pwm0_dvs_mux_shift                                   (2)
#define  MISC_PWM_PWM0_CTRL_pwm0_w_db1_wr_shift                                  (1)
#define  MISC_PWM_PWM0_CTRL_pwm0_w_db0_wr_shift                                  (0)
#define  MISC_PWM_PWM0_CTRL_pwm0l_mask                                           (0x80000000)
#define  MISC_PWM_PWM0_CTRL_always01_and_pwmduty_sel_mask                        (0x40000000)
#define  MISC_PWM_PWM0_CTRL_pwm0_en_mask                                         (0x20000000)
#define  MISC_PWM_PWM0_CTRL_pwm0_dvs_rst_en_mask                                 (0x10000000)
#define  MISC_PWM_PWM0_CTRL_pwm0_mode_mask                                       (0x0C000000)
#define  MISC_PWM_PWM0_CTRL_pwm0_mplus_dim_duty_en_mask                          (0x02000000)
#define  MISC_PWM_PWM0_CTRL_pwm0_vs_delay_thr_mask                               (0x01FFFFF0)
#define  MISC_PWM_PWM0_CTRL_pwm0_mplus_dim_duty_round_en_mask                    (0x00000008)
#define  MISC_PWM_PWM0_CTRL_pwm0_dvs_mux_mask                                    (0x00000004)
#define  MISC_PWM_PWM0_CTRL_pwm0_w_db1_wr_mask                                   (0x00000002)
#define  MISC_PWM_PWM0_CTRL_pwm0_w_db0_wr_mask                                   (0x00000001)
#define  MISC_PWM_PWM0_CTRL_pwm0l(data)                                          (0x80000000&((data)<<31))
#define  MISC_PWM_PWM0_CTRL_always01_and_pwmduty_sel(data)                       (0x40000000&((data)<<30))
#define  MISC_PWM_PWM0_CTRL_pwm0_en(data)                                        (0x20000000&((data)<<29))
#define  MISC_PWM_PWM0_CTRL_pwm0_dvs_rst_en(data)                                (0x10000000&((data)<<28))
#define  MISC_PWM_PWM0_CTRL_pwm0_mode(data)                                      (0x0C000000&((data)<<26))
#define  MISC_PWM_PWM0_CTRL_pwm0_mplus_dim_duty_en(data)                         (0x02000000&((data)<<25))
#define  MISC_PWM_PWM0_CTRL_pwm0_vs_delay_thr(data)                              (0x01FFFFF0&((data)<<4))
#define  MISC_PWM_PWM0_CTRL_pwm0_mplus_dim_duty_round_en(data)                   (0x00000008&((data)<<3))
#define  MISC_PWM_PWM0_CTRL_pwm0_dvs_mux(data)                                   (0x00000004&((data)<<2))
#define  MISC_PWM_PWM0_CTRL_pwm0_w_db1_wr(data)                                  (0x00000002&((data)<<1))
#define  MISC_PWM_PWM0_CTRL_pwm0_w_db0_wr(data)                                  (0x00000001&(data))
#define  MISC_PWM_PWM0_CTRL_get_pwm0l(data)                                      ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM0_CTRL_get_always01_and_pwmduty_sel(data)                   ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM0_CTRL_get_pwm0_en(data)                                    ((0x20000000&(data))>>29)
#define  MISC_PWM_PWM0_CTRL_get_pwm0_dvs_rst_en(data)                            ((0x10000000&(data))>>28)
#define  MISC_PWM_PWM0_CTRL_get_pwm0_mode(data)                                  ((0x0C000000&(data))>>26)
#define  MISC_PWM_PWM0_CTRL_get_pwm0_mplus_dim_duty_en(data)                     ((0x02000000&(data))>>25)
#define  MISC_PWM_PWM0_CTRL_get_pwm0_vs_delay_thr(data)                          ((0x01FFFFF0&(data))>>4)
#define  MISC_PWM_PWM0_CTRL_get_pwm0_mplus_dim_duty_round_en(data)               ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM0_CTRL_get_pwm0_dvs_mux(data)                               ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM0_CTRL_get_pwm0_w_db1_wr(data)                              ((0x00000002&(data))>>1)
#define  MISC_PWM_PWM0_CTRL_get_pwm0_w_db0_wr(data)                              (0x00000001&(data))

#define  MISC_PWM_PWM0_Timing_CTRL                                              0x1801B90C
#define  MISC_PWM_PWM0_Timing_CTRL_reg_addr                                      "0xB801B90C"
#define  MISC_PWM_PWM0_Timing_CTRL_reg                                           0xB801B90C
#define  MISC_PWM_PWM0_Timing_CTRL_inst_addr                                     "0x0003"
#define  set_MISC_PWM_PWM0_Timing_CTRL_reg(data)                                 (*((volatile unsigned int*)MISC_PWM_PWM0_Timing_CTRL_reg)=data)
#define  get_MISC_PWM_PWM0_Timing_CTRL_reg                                       (*((volatile unsigned int*)MISC_PWM_PWM0_Timing_CTRL_reg))
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_duty_ratio_shift                         (22)
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_vsync_interval_num_shift                 (14)
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_m_shift                                  (12)
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_n_shift                                  (0)
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_duty_ratio_mask                          (0xFFC00000)
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_vsync_interval_num_mask                  (0x003FC000)
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_m_mask                                   (0x00003000)
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_n_mask                                   (0x00000FFF)
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_duty_ratio(data)                         (0xFFC00000&((data)<<22))
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_vsync_interval_num(data)                 (0x003FC000&((data)<<14))
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_m(data)                                  (0x00003000&((data)<<12))
#define  MISC_PWM_PWM0_Timing_CTRL_pwm0_n(data)                                  (0x00000FFF&(data))
#define  MISC_PWM_PWM0_Timing_CTRL_get_pwm0_duty_ratio(data)                     ((0xFFC00000&(data))>>22)
#define  MISC_PWM_PWM0_Timing_CTRL_get_pwm0_vsync_interval_num(data)             ((0x003FC000&(data))>>14)
#define  MISC_PWM_PWM0_Timing_CTRL_get_pwm0_m(data)                              ((0x00003000&(data))>>12)
#define  MISC_PWM_PWM0_Timing_CTRL_get_pwm0_n(data)                              (0x00000FFF&(data))

#define  MISC_PWM_PWM0_DUTY_SET                                                 0x1801B910
#define  MISC_PWM_PWM0_DUTY_SET_reg_addr                                         "0xB801B910"
#define  MISC_PWM_PWM0_DUTY_SET_reg                                              0xB801B910
#define  MISC_PWM_PWM0_DUTY_SET_inst_addr                                        "0x0004"
#define  set_MISC_PWM_PWM0_DUTY_SET_reg(data)                                    (*((volatile unsigned int*)MISC_PWM_PWM0_DUTY_SET_reg)=data)
#define  get_MISC_PWM_PWM0_DUTY_SET_reg                                          (*((volatile unsigned int*)MISC_PWM_PWM0_DUTY_SET_reg))
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_num_shift                                   (28)
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_dut_shift                                   (16)
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_cycle_max_shift                             (12)
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_totalcnt_shift                              (0)
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_num_mask                                    (0xF0000000)
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_dut_mask                                    (0x0FFF0000)
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_cycle_max_mask                              (0x0000F000)
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_totalcnt_mask                               (0x00000FFF)
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_num(data)                                   (0xF0000000&((data)<<28))
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_dut(data)                                   (0x0FFF0000&((data)<<16))
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_cycle_max(data)                             (0x0000F000&((data)<<12))
#define  MISC_PWM_PWM0_DUTY_SET_pwm0_totalcnt(data)                              (0x00000FFF&(data))
#define  MISC_PWM_PWM0_DUTY_SET_get_pwm0_num(data)                               ((0xF0000000&(data))>>28)
#define  MISC_PWM_PWM0_DUTY_SET_get_pwm0_dut(data)                               ((0x0FFF0000&(data))>>16)
#define  MISC_PWM_PWM0_DUTY_SET_get_pwm0_cycle_max(data)                         ((0x0000F000&(data))>>12)
#define  MISC_PWM_PWM0_DUTY_SET_get_pwm0_totalcnt(data)                          (0x00000FFF&(data))

#define  MISC_PWM_PWM0_DVS_PERIOD                                               0x1801B914
#define  MISC_PWM_PWM0_DVS_PERIOD_reg_addr                                       "0xB801B914"
#define  MISC_PWM_PWM0_DVS_PERIOD_reg                                            0xB801B914
#define  MISC_PWM_PWM0_DVS_PERIOD_inst_addr                                      "0x0005"
#define  set_MISC_PWM_PWM0_DVS_PERIOD_reg(data)                                  (*((volatile unsigned int*)MISC_PWM_PWM0_DVS_PERIOD_reg)=data)
#define  get_MISC_PWM_PWM0_DVS_PERIOD_reg                                        (*((volatile unsigned int*)MISC_PWM_PWM0_DVS_PERIOD_reg))
#define  MISC_PWM_PWM0_DVS_PERIOD_pwm0_vs_max_period_shift                       (16)
#define  MISC_PWM_PWM0_DVS_PERIOD_pwm0_vs_min_period_shift                       (0)
#define  MISC_PWM_PWM0_DVS_PERIOD_pwm0_vs_max_period_mask                        (0xFFFF0000)
#define  MISC_PWM_PWM0_DVS_PERIOD_pwm0_vs_min_period_mask                        (0x0000FFFF)
#define  MISC_PWM_PWM0_DVS_PERIOD_pwm0_vs_max_period(data)                       (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM0_DVS_PERIOD_pwm0_vs_min_period(data)                       (0x0000FFFF&(data))
#define  MISC_PWM_PWM0_DVS_PERIOD_get_pwm0_vs_max_period(data)                   ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM0_DVS_PERIOD_get_pwm0_vs_min_period(data)                   (0x0000FFFF&(data))

#define  MISC_PWM_PWM0_DVS_MONITOR                                              0x1801B918
#define  MISC_PWM_PWM0_DVS_MONITOR_reg_addr                                      "0xB801B918"
#define  MISC_PWM_PWM0_DVS_MONITOR_reg                                           0xB801B918
#define  MISC_PWM_PWM0_DVS_MONITOR_inst_addr                                     "0x0006"
#define  set_MISC_PWM_PWM0_DVS_MONITOR_reg(data)                                 (*((volatile unsigned int*)MISC_PWM_PWM0_DVS_MONITOR_reg)=data)
#define  get_MISC_PWM_PWM0_DVS_MONITOR_reg                                       (*((volatile unsigned int*)MISC_PWM_PWM0_DVS_MONITOR_reg))
#define  MISC_PWM_PWM0_DVS_MONITOR_pwm0_vs_period_shift                          (16)
#define  MISC_PWM_PWM0_DVS_MONITOR_pwm0_vs_real_time_shift                       (0)
#define  MISC_PWM_PWM0_DVS_MONITOR_pwm0_vs_period_mask                           (0xFFFF0000)
#define  MISC_PWM_PWM0_DVS_MONITOR_pwm0_vs_real_time_mask                        (0x0000FFFF)
#define  MISC_PWM_PWM0_DVS_MONITOR_pwm0_vs_period(data)                          (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM0_DVS_MONITOR_pwm0_vs_real_time(data)                       (0x0000FFFF&(data))
#define  MISC_PWM_PWM0_DVS_MONITOR_get_pwm0_vs_period(data)                      ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM0_DVS_MONITOR_get_pwm0_vs_real_time(data)                   (0x0000FFFF&(data))

#define  MISC_PWM_PWM0_MONITOR                                                  0x1801B91C
#define  MISC_PWM_PWM0_MONITOR_reg_addr                                          "0xB801B91C"
#define  MISC_PWM_PWM0_MONITOR_reg                                               0xB801B91C
#define  MISC_PWM_PWM0_MONITOR_inst_addr                                         "0x0007"
#define  set_MISC_PWM_PWM0_MONITOR_reg(data)                                     (*((volatile unsigned int*)MISC_PWM_PWM0_MONITOR_reg)=data)
#define  get_MISC_PWM_PWM0_MONITOR_reg                                           (*((volatile unsigned int*)MISC_PWM_PWM0_MONITOR_reg))
#define  MISC_PWM_PWM0_MONITOR_pwm0_int_shift                                    (31)
#define  MISC_PWM_PWM0_MONITOR_pwm0_real_totalcnt_shift                          (16)
#define  MISC_PWM_PWM0_MONITOR_pwm0_real_duty_shift                              (0)
#define  MISC_PWM_PWM0_MONITOR_pwm0_int_mask                                     (0x80000000)
#define  MISC_PWM_PWM0_MONITOR_pwm0_real_totalcnt_mask                           (0x1FFF0000)
#define  MISC_PWM_PWM0_MONITOR_pwm0_real_duty_mask                               (0x00001FFF)
#define  MISC_PWM_PWM0_MONITOR_pwm0_int(data)                                    (0x80000000&((data)<<31))
#define  MISC_PWM_PWM0_MONITOR_pwm0_real_totalcnt(data)                          (0x1FFF0000&((data)<<16))
#define  MISC_PWM_PWM0_MONITOR_pwm0_real_duty(data)                              (0x00001FFF&(data))
#define  MISC_PWM_PWM0_MONITOR_get_pwm0_int(data)                                ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM0_MONITOR_get_pwm0_real_totalcnt(data)                      ((0x1FFF0000&(data))>>16)
#define  MISC_PWM_PWM0_MONITOR_get_pwm0_real_duty(data)                          (0x00001FFF&(data))

#define  MISC_PWM_PWM0_ERR_STATUS                                               0x1801B920
#define  MISC_PWM_PWM0_ERR_STATUS_reg_addr                                       "0xB801B920"
#define  MISC_PWM_PWM0_ERR_STATUS_reg                                            0xB801B920
#define  MISC_PWM_PWM0_ERR_STATUS_inst_addr                                      "0x0008"
#define  set_MISC_PWM_PWM0_ERR_STATUS_reg(data)                                  (*((volatile unsigned int*)MISC_PWM_PWM0_ERR_STATUS_reg)=data)
#define  get_MISC_PWM_PWM0_ERR_STATUS_reg                                        (*((volatile unsigned int*)MISC_PWM_PWM0_ERR_STATUS_reg))
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_predict_max_vs_thr_shift                  (16)
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_err2int_en_shift                          (13)
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_predict_err_shift                         (4)
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_vs_unstable_shift                         (0)
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_predict_max_vs_thr_mask                   (0xFFFF0000)
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_err2int_en_mask                           (0x0000E000)
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_predict_err_mask                          (0x00000030)
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_vs_unstable_mask                          (0x00000001)
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_predict_max_vs_thr(data)                  (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_err2int_en(data)                          (0x0000E000&((data)<<13))
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_predict_err(data)                         (0x00000030&((data)<<4))
#define  MISC_PWM_PWM0_ERR_STATUS_pwm0_vs_unstable(data)                         (0x00000001&(data))
#define  MISC_PWM_PWM0_ERR_STATUS_get_pwm0_predict_max_vs_thr(data)              ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM0_ERR_STATUS_get_pwm0_err2int_en(data)                      ((0x0000E000&(data))>>13)
#define  MISC_PWM_PWM0_ERR_STATUS_get_pwm0_predict_err(data)                     ((0x00000030&(data))>>4)
#define  MISC_PWM_PWM0_ERR_STATUS_get_pwm0_vs_unstable(data)                     (0x00000001&(data))

#define  MISC_PWM_PWM0_TRACK_SET                                                0x1801B924
#define  MISC_PWM_PWM0_TRACK_SET_reg_addr                                        "0xB801B924"
#define  MISC_PWM_PWM0_TRACK_SET_reg                                             0xB801B924
#define  MISC_PWM_PWM0_TRACK_SET_inst_addr                                       "0x0009"
#define  set_MISC_PWM_PWM0_TRACK_SET_reg(data)                                   (*((volatile unsigned int*)MISC_PWM_PWM0_TRACK_SET_reg)=data)
#define  get_MISC_PWM_PWM0_TRACK_SET_reg                                         (*((volatile unsigned int*)MISC_PWM_PWM0_TRACK_SET_reg))
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_index_shift                          (28)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_sw_track_int_en_shift                      (8)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_mode_shift                           (4)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_start_shift                          (3)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_stop_shift                           (2)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_en_shift                             (0)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_index_mask                           (0xF0000000)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_sw_track_int_en_mask                       (0x00000100)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_mode_mask                            (0x00000030)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_start_mask                           (0x00000008)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_stop_mask                            (0x00000004)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_en_mask                              (0x00000001)
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_index(data)                          (0xF0000000&((data)<<28))
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_sw_track_int_en(data)                      (0x00000100&((data)<<8))
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_mode(data)                           (0x00000030&((data)<<4))
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_start(data)                          (0x00000008&((data)<<3))
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_stop(data)                           (0x00000004&((data)<<2))
#define  MISC_PWM_PWM0_TRACK_SET_pwm0_track_en(data)                             (0x00000001&(data))
#define  MISC_PWM_PWM0_TRACK_SET_get_pwm0_track_index(data)                      ((0xF0000000&(data))>>28)
#define  MISC_PWM_PWM0_TRACK_SET_get_pwm0_sw_track_int_en(data)                  ((0x00000100&(data))>>8)
#define  MISC_PWM_PWM0_TRACK_SET_get_pwm0_track_mode(data)                       ((0x00000030&(data))>>4)
#define  MISC_PWM_PWM0_TRACK_SET_get_pwm0_track_start(data)                      ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM0_TRACK_SET_get_pwm0_track_stop(data)                       ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM0_TRACK_SET_get_pwm0_track_en(data)                         (0x00000001&(data))

#define  MISC_PWM_PWM0_TRACK_FSM                                                0x1801B928
#define  MISC_PWM_PWM0_TRACK_FSM_reg_addr                                        "0xB801B928"
#define  MISC_PWM_PWM0_TRACK_FSM_reg                                             0xB801B928
#define  MISC_PWM_PWM0_TRACK_FSM_inst_addr                                       "0x000A"
#define  set_MISC_PWM_PWM0_TRACK_FSM_reg(data)                                   (*((volatile unsigned int*)MISC_PWM_PWM0_TRACK_FSM_reg)=data)
#define  get_MISC_PWM_PWM0_TRACK_FSM_reg                                         (*((volatile unsigned int*)MISC_PWM_PWM0_TRACK_FSM_reg))
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_phase_finishtoint_en_shift                 (31)
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_freq_finishtoint_en_shift                  (30)
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_track_phase_finish_shift                   (3)
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_track_freq_finish_shift                    (2)
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_track_fsm_shift                            (0)
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_phase_finishtoint_en_mask                  (0x80000000)
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_freq_finishtoint_en_mask                   (0x40000000)
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_track_phase_finish_mask                    (0x00000008)
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_track_freq_finish_mask                     (0x00000004)
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_track_fsm_mask                             (0x00000003)
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_phase_finishtoint_en(data)                 (0x80000000&((data)<<31))
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_freq_finishtoint_en(data)                  (0x40000000&((data)<<30))
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_track_phase_finish(data)                   (0x00000008&((data)<<3))
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_track_freq_finish(data)                    (0x00000004&((data)<<2))
#define  MISC_PWM_PWM0_TRACK_FSM_pwm0_track_fsm(data)                            (0x00000003&(data))
#define  MISC_PWM_PWM0_TRACK_FSM_get_pwm0_phase_finishtoint_en(data)             ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM0_TRACK_FSM_get_pwm0_freq_finishtoint_en(data)              ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM0_TRACK_FSM_get_pwm0_track_phase_finish(data)               ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM0_TRACK_FSM_get_pwm0_track_freq_finish(data)                ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM0_TRACK_FSM_get_pwm0_track_fsm(data)                        (0x00000003&(data))

#define  MISC_PWM_PWM0_TRACK_PTI                                                0x1801B92C
#define  MISC_PWM_PWM0_TRACK_PTI_reg_addr                                        "0xB801B92C"
#define  MISC_PWM_PWM0_TRACK_PTI_reg                                             0xB801B92C
#define  MISC_PWM_PWM0_TRACK_PTI_inst_addr                                       "0x000B"
#define  set_MISC_PWM_PWM0_TRACK_PTI_reg(data)                                   (*((volatile unsigned int*)MISC_PWM_PWM0_TRACK_PTI_reg)=data)
#define  get_MISC_PWM_PWM0_TRACK_PTI_reg                                         (*((volatile unsigned int*)MISC_PWM_PWM0_TRACK_PTI_reg))
#define  MISC_PWM_PWM0_TRACK_PTI_pwm0_pti_phase_shift                            (16)
#define  MISC_PWM_PWM0_TRACK_PTI_pwm0_pti_period_shift                           (0)
#define  MISC_PWM_PWM0_TRACK_PTI_pwm0_pti_phase_mask                             (0xFFFF0000)
#define  MISC_PWM_PWM0_TRACK_PTI_pwm0_pti_period_mask                            (0x0000FFFF)
#define  MISC_PWM_PWM0_TRACK_PTI_pwm0_pti_phase(data)                            (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM0_TRACK_PTI_pwm0_pti_period(data)                           (0x0000FFFF&(data))
#define  MISC_PWM_PWM0_TRACK_PTI_get_pwm0_pti_phase(data)                        ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM0_TRACK_PTI_get_pwm0_pti_period(data)                       (0x0000FFFF&(data))

#define  MISC_PWM_PWM0_FREQ_0                                                   0x1801B930
#define  MISC_PWM_PWM0_FREQ_0_reg_addr                                           "0xB801B930"
#define  MISC_PWM_PWM0_FREQ_0_reg                                                0xB801B930
#define  MISC_PWM_PWM0_FREQ_0_inst_addr                                          "0x000C"
#define  set_MISC_PWM_PWM0_FREQ_0_reg(data)                                      (*((volatile unsigned int*)MISC_PWM_PWM0_FREQ_0_reg)=data)
#define  get_MISC_PWM_PWM0_FREQ_0_reg                                            (*((volatile unsigned int*)MISC_PWM_PWM0_FREQ_0_reg))
#define  MISC_PWM_PWM0_FREQ_0_pwm0_freq_debounce_shift                           (16)
#define  MISC_PWM_PWM0_FREQ_0_pwm0_freq_max_step_shift                           (0)
#define  MISC_PWM_PWM0_FREQ_0_pwm0_freq_debounce_mask                            (0x000F0000)
#define  MISC_PWM_PWM0_FREQ_0_pwm0_freq_max_step_mask                            (0x00000FFF)
#define  MISC_PWM_PWM0_FREQ_0_pwm0_freq_debounce(data)                           (0x000F0000&((data)<<16))
#define  MISC_PWM_PWM0_FREQ_0_pwm0_freq_max_step(data)                           (0x00000FFF&(data))
#define  MISC_PWM_PWM0_FREQ_0_get_pwm0_freq_debounce(data)                       ((0x000F0000&(data))>>16)
#define  MISC_PWM_PWM0_FREQ_0_get_pwm0_freq_max_step(data)                       (0x00000FFF&(data))

#define  MISC_PWM_PWM0_FREQ_1                                                   0x1801B934
#define  MISC_PWM_PWM0_FREQ_1_reg_addr                                           "0xB801B934"
#define  MISC_PWM_PWM0_FREQ_1_reg                                                0xB801B934
#define  MISC_PWM_PWM0_FREQ_1_inst_addr                                          "0x000D"
#define  set_MISC_PWM_PWM0_FREQ_1_reg(data)                                      (*((volatile unsigned int*)MISC_PWM_PWM0_FREQ_1_reg)=data)
#define  get_MISC_PWM_PWM0_FREQ_1_reg                                            (*((volatile unsigned int*)MISC_PWM_PWM0_FREQ_1_reg))
#define  MISC_PWM_PWM0_FREQ_1_pwm0_freq_min_thr_shift                            (0)
#define  MISC_PWM_PWM0_FREQ_1_pwm0_freq_min_thr_mask                             (0x00000FFF)
#define  MISC_PWM_PWM0_FREQ_1_pwm0_freq_min_thr(data)                            (0x00000FFF&(data))
#define  MISC_PWM_PWM0_FREQ_1_get_pwm0_freq_min_thr(data)                        (0x00000FFF&(data))

#define  MISC_PWM_PWM0_PHASE_0                                                  0x1801B938
#define  MISC_PWM_PWM0_PHASE_0_reg_addr                                          "0xB801B938"
#define  MISC_PWM_PWM0_PHASE_0_reg                                               0xB801B938
#define  MISC_PWM_PWM0_PHASE_0_inst_addr                                         "0x000E"
#define  set_MISC_PWM_PWM0_PHASE_0_reg(data)                                     (*((volatile unsigned int*)MISC_PWM_PWM0_PHASE_0_reg)=data)
#define  get_MISC_PWM_PWM0_PHASE_0_reg                                           (*((volatile unsigned int*)MISC_PWM_PWM0_PHASE_0_reg))
#define  MISC_PWM_PWM0_PHASE_0_pwm0_phase_debounce_shift                         (16)
#define  MISC_PWM_PWM0_PHASE_0_pwm0_phase_max_step_shift                         (0)
#define  MISC_PWM_PWM0_PHASE_0_pwm0_phase_debounce_mask                          (0x000F0000)
#define  MISC_PWM_PWM0_PHASE_0_pwm0_phase_max_step_mask                          (0x00000FFF)
#define  MISC_PWM_PWM0_PHASE_0_pwm0_phase_debounce(data)                         (0x000F0000&((data)<<16))
#define  MISC_PWM_PWM0_PHASE_0_pwm0_phase_max_step(data)                         (0x00000FFF&(data))
#define  MISC_PWM_PWM0_PHASE_0_get_pwm0_phase_debounce(data)                     ((0x000F0000&(data))>>16)
#define  MISC_PWM_PWM0_PHASE_0_get_pwm0_phase_max_step(data)                     (0x00000FFF&(data))

#define  MISC_PWM_PWM0_PHASE_1                                                  0x1801B93C
#define  MISC_PWM_PWM0_PHASE_1_reg_addr                                          "0xB801B93C"
#define  MISC_PWM_PWM0_PHASE_1_reg                                               0xB801B93C
#define  MISC_PWM_PWM0_PHASE_1_inst_addr                                         "0x000F"
#define  set_MISC_PWM_PWM0_PHASE_1_reg(data)                                     (*((volatile unsigned int*)MISC_PWM_PWM0_PHASE_1_reg)=data)
#define  get_MISC_PWM_PWM0_PHASE_1_reg                                           (*((volatile unsigned int*)MISC_PWM_PWM0_PHASE_1_reg))
#define  MISC_PWM_PWM0_PHASE_1_pwm0_phase_max_thr_shift                          (16)
#define  MISC_PWM_PWM0_PHASE_1_pwm0_phase_min_thr_shift                          (0)
#define  MISC_PWM_PWM0_PHASE_1_pwm0_phase_max_thr_mask                           (0x0FFF0000)
#define  MISC_PWM_PWM0_PHASE_1_pwm0_phase_min_thr_mask                           (0x00000FFF)
#define  MISC_PWM_PWM0_PHASE_1_pwm0_phase_max_thr(data)                          (0x0FFF0000&((data)<<16))
#define  MISC_PWM_PWM0_PHASE_1_pwm0_phase_min_thr(data)                          (0x00000FFF&(data))
#define  MISC_PWM_PWM0_PHASE_1_get_pwm0_phase_max_thr(data)                      ((0x0FFF0000&(data))>>16)
#define  MISC_PWM_PWM0_PHASE_1_get_pwm0_phase_min_thr(data)                      (0x00000FFF&(data))

#define  MISC_PWM_PWM0_HW_PREDICT                                               0x1801B940
#define  MISC_PWM_PWM0_HW_PREDICT_reg_addr                                       "0xB801B940"
#define  MISC_PWM_PWM0_HW_PREDICT_reg                                            0xB801B940
#define  MISC_PWM_PWM0_HW_PREDICT_inst_addr                                      "0x0010"
#define  set_MISC_PWM_PWM0_HW_PREDICT_reg(data)                                  (*((volatile unsigned int*)MISC_PWM_PWM0_HW_PREDICT_reg)=data)
#define  get_MISC_PWM_PWM0_HW_PREDICT_reg                                        (*((volatile unsigned int*)MISC_PWM_PWM0_HW_PREDICT_reg))
#define  MISC_PWM_PWM0_HW_PREDICT_pwm0_predict_index_shift                       (4)
#define  MISC_PWM_PWM0_HW_PREDICT_pwm0_predict_en_shift                          (0)
#define  MISC_PWM_PWM0_HW_PREDICT_pwm0_predict_index_mask                        (0x000000F0)
#define  MISC_PWM_PWM0_HW_PREDICT_pwm0_predict_en_mask                           (0x00000001)
#define  MISC_PWM_PWM0_HW_PREDICT_pwm0_predict_index(data)                       (0x000000F0&((data)<<4))
#define  MISC_PWM_PWM0_HW_PREDICT_pwm0_predict_en(data)                          (0x00000001&(data))
#define  MISC_PWM_PWM0_HW_PREDICT_get_pwm0_predict_index(data)                   ((0x000000F0&(data))>>4)
#define  MISC_PWM_PWM0_HW_PREDICT_get_pwm0_predict_en(data)                      (0x00000001&(data))

#define  MISC_PWM_PWM0_SW_PREDICT                                               0x1801B944
#define  MISC_PWM_PWM0_SW_PREDICT_reg_addr                                       "0xB801B944"
#define  MISC_PWM_PWM0_SW_PREDICT_reg                                            0xB801B944
#define  MISC_PWM_PWM0_SW_PREDICT_inst_addr                                      "0x0011"
#define  set_MISC_PWM_PWM0_SW_PREDICT_reg(data)                                  (*((volatile unsigned int*)MISC_PWM_PWM0_SW_PREDICT_reg)=data)
#define  get_MISC_PWM_PWM0_SW_PREDICT_reg                                        (*((volatile unsigned int*)MISC_PWM_PWM0_SW_PREDICT_reg))
#define  MISC_PWM_PWM0_SW_PREDICT_dummy_31_16_shift                              (16)
#define  MISC_PWM_PWM0_SW_PREDICT_pwm0_sw_nxt_vs_period_shift                    (0)
#define  MISC_PWM_PWM0_SW_PREDICT_dummy_31_16_mask                               (0xFFFF0000)
#define  MISC_PWM_PWM0_SW_PREDICT_pwm0_sw_nxt_vs_period_mask                     (0x0000FFFF)
#define  MISC_PWM_PWM0_SW_PREDICT_dummy_31_16(data)                              (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM0_SW_PREDICT_pwm0_sw_nxt_vs_period(data)                    (0x0000FFFF&(data))
#define  MISC_PWM_PWM0_SW_PREDICT_get_dummy_31_16(data)                          ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM0_SW_PREDICT_get_pwm0_sw_nxt_vs_period(data)                (0x0000FFFF&(data))

#define  MISC_PWM_PWM0_PREDICT_RATIO                                            0x1801B948
#define  MISC_PWM_PWM0_PREDICT_RATIO_reg_addr                                    "0xB801B948"
#define  MISC_PWM_PWM0_PREDICT_RATIO_reg                                         0xB801B948
#define  MISC_PWM_PWM0_PREDICT_RATIO_inst_addr                                   "0x0012"
#define  set_MISC_PWM_PWM0_PREDICT_RATIO_reg(data)                               (*((volatile unsigned int*)MISC_PWM_PWM0_PREDICT_RATIO_reg)=data)
#define  get_MISC_PWM_PWM0_PREDICT_RATIO_reg                                     (*((volatile unsigned int*)MISC_PWM_PWM0_PREDICT_RATIO_reg))
#define  MISC_PWM_PWM0_PREDICT_RATIO_pwm0_d2p_ratio_shift                        (0)
#define  MISC_PWM_PWM0_PREDICT_RATIO_pwm0_d2p_ratio_mask                         (0xFFFFFFFF)
#define  MISC_PWM_PWM0_PREDICT_RATIO_pwm0_d2p_ratio(data)                        (0xFFFFFFFF&(data))
#define  MISC_PWM_PWM0_PREDICT_RATIO_get_pwm0_d2p_ratio(data)                    (0xFFFFFFFF&(data))

#define  MISC_PWM_PWM1_CTRL                                                     0x1801B94C
#define  MISC_PWM_PWM1_CTRL_reg_addr                                             "0xB801B94C"
#define  MISC_PWM_PWM1_CTRL_reg                                                  0xB801B94C
#define  MISC_PWM_PWM1_CTRL_inst_addr                                            "0x0013"
#define  set_MISC_PWM_PWM1_CTRL_reg(data)                                        (*((volatile unsigned int*)MISC_PWM_PWM1_CTRL_reg)=data)
#define  get_MISC_PWM_PWM1_CTRL_reg                                              (*((volatile unsigned int*)MISC_PWM_PWM1_CTRL_reg))
#define  MISC_PWM_PWM1_CTRL_pwm1l_shift                                          (31)
#define  MISC_PWM_PWM1_CTRL_always01_and_pwmduty_sel_shift                       (30)
#define  MISC_PWM_PWM1_CTRL_pwm1_en_shift                                        (29)
#define  MISC_PWM_PWM1_CTRL_pwm1_dvs_rst_en_shift                                (28)
#define  MISC_PWM_PWM1_CTRL_pwm1_mode_shift                                      (26)
#define  MISC_PWM_PWM1_CTRL_pwm1_mplus_dim_duty_en_shift                         (25)
#define  MISC_PWM_PWM1_CTRL_pwm1_vs_delay_thr_shift                              (4)
#define  MISC_PWM_PWM1_CTRL_pwm1_mplus_dim_duty_round_en_shift                   (3)
#define  MISC_PWM_PWM1_CTRL_pwm1_dvs_mux_shift                                   (2)
#define  MISC_PWM_PWM1_CTRL_pwm1_w_db1_wr_shift                                  (1)
#define  MISC_PWM_PWM1_CTRL_pwm1_w_db0_wr_shift                                  (0)
#define  MISC_PWM_PWM1_CTRL_pwm1l_mask                                           (0x80000000)
#define  MISC_PWM_PWM1_CTRL_always01_and_pwmduty_sel_mask                        (0x40000000)
#define  MISC_PWM_PWM1_CTRL_pwm1_en_mask                                         (0x20000000)
#define  MISC_PWM_PWM1_CTRL_pwm1_dvs_rst_en_mask                                 (0x10000000)
#define  MISC_PWM_PWM1_CTRL_pwm1_mode_mask                                       (0x0C000000)
#define  MISC_PWM_PWM1_CTRL_pwm1_mplus_dim_duty_en_mask                          (0x02000000)
#define  MISC_PWM_PWM1_CTRL_pwm1_vs_delay_thr_mask                               (0x01FFFFF0)
#define  MISC_PWM_PWM1_CTRL_pwm1_mplus_dim_duty_round_en_mask                    (0x00000008)
#define  MISC_PWM_PWM1_CTRL_pwm1_dvs_mux_mask                                    (0x00000004)
#define  MISC_PWM_PWM1_CTRL_pwm1_w_db1_wr_mask                                   (0x00000002)
#define  MISC_PWM_PWM1_CTRL_pwm1_w_db0_wr_mask                                   (0x00000001)
#define  MISC_PWM_PWM1_CTRL_pwm1l(data)                                          (0x80000000&((data)<<31))
#define  MISC_PWM_PWM1_CTRL_always01_and_pwmduty_sel(data)                       (0x40000000&((data)<<30))
#define  MISC_PWM_PWM1_CTRL_pwm1_en(data)                                        (0x20000000&((data)<<29))
#define  MISC_PWM_PWM1_CTRL_pwm1_dvs_rst_en(data)                                (0x10000000&((data)<<28))
#define  MISC_PWM_PWM1_CTRL_pwm1_mode(data)                                      (0x0C000000&((data)<<26))
#define  MISC_PWM_PWM1_CTRL_pwm1_mplus_dim_duty_en(data)                         (0x02000000&((data)<<25))
#define  MISC_PWM_PWM1_CTRL_pwm1_vs_delay_thr(data)                              (0x01FFFFF0&((data)<<4))
#define  MISC_PWM_PWM1_CTRL_pwm1_mplus_dim_duty_round_en(data)                   (0x00000008&((data)<<3))
#define  MISC_PWM_PWM1_CTRL_pwm1_dvs_mux(data)                                   (0x00000004&((data)<<2))
#define  MISC_PWM_PWM1_CTRL_pwm1_w_db1_wr(data)                                  (0x00000002&((data)<<1))
#define  MISC_PWM_PWM1_CTRL_pwm1_w_db0_wr(data)                                  (0x00000001&(data))
#define  MISC_PWM_PWM1_CTRL_get_pwm1l(data)                                      ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM1_CTRL_get_always01_and_pwmduty_sel(data)                   ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM1_CTRL_get_pwm1_en(data)                                    ((0x20000000&(data))>>29)
#define  MISC_PWM_PWM1_CTRL_get_pwm1_dvs_rst_en(data)                            ((0x10000000&(data))>>28)
#define  MISC_PWM_PWM1_CTRL_get_pwm1_mode(data)                                  ((0x0C000000&(data))>>26)
#define  MISC_PWM_PWM1_CTRL_get_pwm1_mplus_dim_duty_en(data)                     ((0x02000000&(data))>>25)
#define  MISC_PWM_PWM1_CTRL_get_pwm1_vs_delay_thr(data)                          ((0x01FFFFF0&(data))>>4)
#define  MISC_PWM_PWM1_CTRL_get_pwm1_mplus_dim_duty_round_en(data)               ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM1_CTRL_get_pwm1_dvs_mux(data)                               ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM1_CTRL_get_pwm1_w_db1_wr(data)                              ((0x00000002&(data))>>1)
#define  MISC_PWM_PWM1_CTRL_get_pwm1_w_db0_wr(data)                              (0x00000001&(data))

#define  MISC_PWM_PWM1_Timing_CTRL                                              0x1801B950
#define  MISC_PWM_PWM1_Timing_CTRL_reg_addr                                      "0xB801B950"
#define  MISC_PWM_PWM1_Timing_CTRL_reg                                           0xB801B950
#define  MISC_PWM_PWM1_Timing_CTRL_inst_addr                                     "0x0014"
#define  set_MISC_PWM_PWM1_Timing_CTRL_reg(data)                                 (*((volatile unsigned int*)MISC_PWM_PWM1_Timing_CTRL_reg)=data)
#define  get_MISC_PWM_PWM1_Timing_CTRL_reg                                       (*((volatile unsigned int*)MISC_PWM_PWM1_Timing_CTRL_reg))
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_duty_ratio_shift                         (22)
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_vsync_interval_num_shift                 (14)
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_m_shift                                  (12)
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_n_shift                                  (0)
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_duty_ratio_mask                          (0xFFC00000)
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_vsync_interval_num_mask                  (0x003FC000)
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_m_mask                                   (0x00003000)
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_n_mask                                   (0x00000FFF)
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_duty_ratio(data)                         (0xFFC00000&((data)<<22))
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_vsync_interval_num(data)                 (0x003FC000&((data)<<14))
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_m(data)                                  (0x00003000&((data)<<12))
#define  MISC_PWM_PWM1_Timing_CTRL_pwm1_n(data)                                  (0x00000FFF&(data))
#define  MISC_PWM_PWM1_Timing_CTRL_get_pwm1_duty_ratio(data)                     ((0xFFC00000&(data))>>22)
#define  MISC_PWM_PWM1_Timing_CTRL_get_pwm1_vsync_interval_num(data)             ((0x003FC000&(data))>>14)
#define  MISC_PWM_PWM1_Timing_CTRL_get_pwm1_m(data)                              ((0x00003000&(data))>>12)
#define  MISC_PWM_PWM1_Timing_CTRL_get_pwm1_n(data)                              (0x00000FFF&(data))

#define  MISC_PWM_PWM1_DUTY_SET                                                 0x1801B954
#define  MISC_PWM_PWM1_DUTY_SET_reg_addr                                         "0xB801B954"
#define  MISC_PWM_PWM1_DUTY_SET_reg                                              0xB801B954
#define  MISC_PWM_PWM1_DUTY_SET_inst_addr                                        "0x0015"
#define  set_MISC_PWM_PWM1_DUTY_SET_reg(data)                                    (*((volatile unsigned int*)MISC_PWM_PWM1_DUTY_SET_reg)=data)
#define  get_MISC_PWM_PWM1_DUTY_SET_reg                                          (*((volatile unsigned int*)MISC_PWM_PWM1_DUTY_SET_reg))
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_num_shift                                   (28)
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_dut_shift                                   (16)
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_cycle_max_shift                             (12)
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_totalcnt_shift                              (0)
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_num_mask                                    (0xF0000000)
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_dut_mask                                    (0x0FFF0000)
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_cycle_max_mask                              (0x0000F000)
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_totalcnt_mask                               (0x00000FFF)
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_num(data)                                   (0xF0000000&((data)<<28))
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_dut(data)                                   (0x0FFF0000&((data)<<16))
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_cycle_max(data)                             (0x0000F000&((data)<<12))
#define  MISC_PWM_PWM1_DUTY_SET_pwm1_totalcnt(data)                              (0x00000FFF&(data))
#define  MISC_PWM_PWM1_DUTY_SET_get_pwm1_num(data)                               ((0xF0000000&(data))>>28)
#define  MISC_PWM_PWM1_DUTY_SET_get_pwm1_dut(data)                               ((0x0FFF0000&(data))>>16)
#define  MISC_PWM_PWM1_DUTY_SET_get_pwm1_cycle_max(data)                         ((0x0000F000&(data))>>12)
#define  MISC_PWM_PWM1_DUTY_SET_get_pwm1_totalcnt(data)                          (0x00000FFF&(data))

#define  MISC_PWM_PWM1_DVS_PERIOD                                               0x1801B958
#define  MISC_PWM_PWM1_DVS_PERIOD_reg_addr                                       "0xB801B958"
#define  MISC_PWM_PWM1_DVS_PERIOD_reg                                            0xB801B958
#define  MISC_PWM_PWM1_DVS_PERIOD_inst_addr                                      "0x0016"
#define  set_MISC_PWM_PWM1_DVS_PERIOD_reg(data)                                  (*((volatile unsigned int*)MISC_PWM_PWM1_DVS_PERIOD_reg)=data)
#define  get_MISC_PWM_PWM1_DVS_PERIOD_reg                                        (*((volatile unsigned int*)MISC_PWM_PWM1_DVS_PERIOD_reg))
#define  MISC_PWM_PWM1_DVS_PERIOD_pwm1_vs_max_period_shift                       (16)
#define  MISC_PWM_PWM1_DVS_PERIOD_pwm1_vs_min_period_shift                       (0)
#define  MISC_PWM_PWM1_DVS_PERIOD_pwm1_vs_max_period_mask                        (0xFFFF0000)
#define  MISC_PWM_PWM1_DVS_PERIOD_pwm1_vs_min_period_mask                        (0x0000FFFF)
#define  MISC_PWM_PWM1_DVS_PERIOD_pwm1_vs_max_period(data)                       (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM1_DVS_PERIOD_pwm1_vs_min_period(data)                       (0x0000FFFF&(data))
#define  MISC_PWM_PWM1_DVS_PERIOD_get_pwm1_vs_max_period(data)                   ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM1_DVS_PERIOD_get_pwm1_vs_min_period(data)                   (0x0000FFFF&(data))

#define  MISC_PWM_PWM1_DVS_MONITOR                                              0x1801B95C
#define  MISC_PWM_PWM1_DVS_MONITOR_reg_addr                                      "0xB801B95C"
#define  MISC_PWM_PWM1_DVS_MONITOR_reg                                           0xB801B95C
#define  MISC_PWM_PWM1_DVS_MONITOR_inst_addr                                     "0x0017"
#define  set_MISC_PWM_PWM1_DVS_MONITOR_reg(data)                                 (*((volatile unsigned int*)MISC_PWM_PWM1_DVS_MONITOR_reg)=data)
#define  get_MISC_PWM_PWM1_DVS_MONITOR_reg                                       (*((volatile unsigned int*)MISC_PWM_PWM1_DVS_MONITOR_reg))
#define  MISC_PWM_PWM1_DVS_MONITOR_pwm1_vs_period_shift                          (16)
#define  MISC_PWM_PWM1_DVS_MONITOR_pwm1_vs_real_time_shift                       (0)
#define  MISC_PWM_PWM1_DVS_MONITOR_pwm1_vs_period_mask                           (0xFFFF0000)
#define  MISC_PWM_PWM1_DVS_MONITOR_pwm1_vs_real_time_mask                        (0x0000FFFF)
#define  MISC_PWM_PWM1_DVS_MONITOR_pwm1_vs_period(data)                          (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM1_DVS_MONITOR_pwm1_vs_real_time(data)                       (0x0000FFFF&(data))
#define  MISC_PWM_PWM1_DVS_MONITOR_get_pwm1_vs_period(data)                      ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM1_DVS_MONITOR_get_pwm1_vs_real_time(data)                   (0x0000FFFF&(data))

#define  MISC_PWM_PWM1_MONITOR                                                  0x1801B960
#define  MISC_PWM_PWM1_MONITOR_reg_addr                                          "0xB801B960"
#define  MISC_PWM_PWM1_MONITOR_reg                                               0xB801B960
#define  MISC_PWM_PWM1_MONITOR_inst_addr                                         "0x0018"
#define  set_MISC_PWM_PWM1_MONITOR_reg(data)                                     (*((volatile unsigned int*)MISC_PWM_PWM1_MONITOR_reg)=data)
#define  get_MISC_PWM_PWM1_MONITOR_reg                                           (*((volatile unsigned int*)MISC_PWM_PWM1_MONITOR_reg))
#define  MISC_PWM_PWM1_MONITOR_pwm1_int_shift                                    (31)
#define  MISC_PWM_PWM1_MONITOR_pwm1_real_totalcnt_shift                          (16)
#define  MISC_PWM_PWM1_MONITOR_pwm1_real_duty_shift                              (0)
#define  MISC_PWM_PWM1_MONITOR_pwm1_int_mask                                     (0x80000000)
#define  MISC_PWM_PWM1_MONITOR_pwm1_real_totalcnt_mask                           (0x1FFF0000)
#define  MISC_PWM_PWM1_MONITOR_pwm1_real_duty_mask                               (0x00001FFF)
#define  MISC_PWM_PWM1_MONITOR_pwm1_int(data)                                    (0x80000000&((data)<<31))
#define  MISC_PWM_PWM1_MONITOR_pwm1_real_totalcnt(data)                          (0x1FFF0000&((data)<<16))
#define  MISC_PWM_PWM1_MONITOR_pwm1_real_duty(data)                              (0x00001FFF&(data))
#define  MISC_PWM_PWM1_MONITOR_get_pwm1_int(data)                                ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM1_MONITOR_get_pwm1_real_totalcnt(data)                      ((0x1FFF0000&(data))>>16)
#define  MISC_PWM_PWM1_MONITOR_get_pwm1_real_duty(data)                          (0x00001FFF&(data))

#define  MISC_PWM_PWM1_ERR_STATUS                                               0x1801B964
#define  MISC_PWM_PWM1_ERR_STATUS_reg_addr                                       "0xB801B964"
#define  MISC_PWM_PWM1_ERR_STATUS_reg                                            0xB801B964
#define  MISC_PWM_PWM1_ERR_STATUS_inst_addr                                      "0x0019"
#define  set_MISC_PWM_PWM1_ERR_STATUS_reg(data)                                  (*((volatile unsigned int*)MISC_PWM_PWM1_ERR_STATUS_reg)=data)
#define  get_MISC_PWM_PWM1_ERR_STATUS_reg                                        (*((volatile unsigned int*)MISC_PWM_PWM1_ERR_STATUS_reg))
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_predict_max_vs_thr_shift                  (16)
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_err2int_en_shift                          (13)
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_predict_err_shift                         (4)
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_vs_unstable_shift                         (0)
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_predict_max_vs_thr_mask                   (0xFFFF0000)
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_err2int_en_mask                           (0x0000E000)
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_predict_err_mask                          (0x00000030)
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_vs_unstable_mask                          (0x00000001)
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_predict_max_vs_thr(data)                  (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_err2int_en(data)                          (0x0000E000&((data)<<13))
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_predict_err(data)                         (0x00000030&((data)<<4))
#define  MISC_PWM_PWM1_ERR_STATUS_pwm1_vs_unstable(data)                         (0x00000001&(data))
#define  MISC_PWM_PWM1_ERR_STATUS_get_pwm1_predict_max_vs_thr(data)              ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM1_ERR_STATUS_get_pwm1_err2int_en(data)                      ((0x0000E000&(data))>>13)
#define  MISC_PWM_PWM1_ERR_STATUS_get_pwm1_predict_err(data)                     ((0x00000030&(data))>>4)
#define  MISC_PWM_PWM1_ERR_STATUS_get_pwm1_vs_unstable(data)                     (0x00000001&(data))

#define  MISC_PWM_PWM1_TRACK_SET                                                0x1801B968
#define  MISC_PWM_PWM1_TRACK_SET_reg_addr                                        "0xB801B968"
#define  MISC_PWM_PWM1_TRACK_SET_reg                                             0xB801B968
#define  MISC_PWM_PWM1_TRACK_SET_inst_addr                                       "0x001A"
#define  set_MISC_PWM_PWM1_TRACK_SET_reg(data)                                   (*((volatile unsigned int*)MISC_PWM_PWM1_TRACK_SET_reg)=data)
#define  get_MISC_PWM_PWM1_TRACK_SET_reg                                         (*((volatile unsigned int*)MISC_PWM_PWM1_TRACK_SET_reg))
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_index_shift                          (28)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_sw_track_int_en_shift                      (8)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_mode_shift                           (4)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_start_shift                          (3)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_stop_shift                           (2)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_en_shift                             (0)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_index_mask                           (0xF0000000)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_sw_track_int_en_mask                       (0x00000100)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_mode_mask                            (0x00000030)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_start_mask                           (0x00000008)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_stop_mask                            (0x00000004)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_en_mask                              (0x00000001)
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_index(data)                          (0xF0000000&((data)<<28))
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_sw_track_int_en(data)                      (0x00000100&((data)<<8))
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_mode(data)                           (0x00000030&((data)<<4))
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_start(data)                          (0x00000008&((data)<<3))
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_stop(data)                           (0x00000004&((data)<<2))
#define  MISC_PWM_PWM1_TRACK_SET_pwm1_track_en(data)                             (0x00000001&(data))
#define  MISC_PWM_PWM1_TRACK_SET_get_pwm1_track_index(data)                      ((0xF0000000&(data))>>28)
#define  MISC_PWM_PWM1_TRACK_SET_get_pwm1_sw_track_int_en(data)                  ((0x00000100&(data))>>8)
#define  MISC_PWM_PWM1_TRACK_SET_get_pwm1_track_mode(data)                       ((0x00000030&(data))>>4)
#define  MISC_PWM_PWM1_TRACK_SET_get_pwm1_track_start(data)                      ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM1_TRACK_SET_get_pwm1_track_stop(data)                       ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM1_TRACK_SET_get_pwm1_track_en(data)                         (0x00000001&(data))

#define  MISC_PWM_PWM1_TRACK_FSM                                                0x1801B96C
#define  MISC_PWM_PWM1_TRACK_FSM_reg_addr                                        "0xB801B96C"
#define  MISC_PWM_PWM1_TRACK_FSM_reg                                             0xB801B96C
#define  MISC_PWM_PWM1_TRACK_FSM_inst_addr                                       "0x001B"
#define  set_MISC_PWM_PWM1_TRACK_FSM_reg(data)                                   (*((volatile unsigned int*)MISC_PWM_PWM1_TRACK_FSM_reg)=data)
#define  get_MISC_PWM_PWM1_TRACK_FSM_reg                                         (*((volatile unsigned int*)MISC_PWM_PWM1_TRACK_FSM_reg))
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_phase_finishtoint_en_shift                 (31)
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_freq_finishtoint_en_shift                  (30)
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_track_phase_finish_shift                   (3)
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_track_freq_finish_shift                    (2)
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_track_fsm_shift                            (0)
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_phase_finishtoint_en_mask                  (0x80000000)
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_freq_finishtoint_en_mask                   (0x40000000)
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_track_phase_finish_mask                    (0x00000008)
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_track_freq_finish_mask                     (0x00000004)
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_track_fsm_mask                             (0x00000003)
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_phase_finishtoint_en(data)                 (0x80000000&((data)<<31))
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_freq_finishtoint_en(data)                  (0x40000000&((data)<<30))
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_track_phase_finish(data)                   (0x00000008&((data)<<3))
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_track_freq_finish(data)                    (0x00000004&((data)<<2))
#define  MISC_PWM_PWM1_TRACK_FSM_pwm1_track_fsm(data)                            (0x00000003&(data))
#define  MISC_PWM_PWM1_TRACK_FSM_get_pwm1_phase_finishtoint_en(data)             ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM1_TRACK_FSM_get_pwm1_freq_finishtoint_en(data)              ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM1_TRACK_FSM_get_pwm1_track_phase_finish(data)               ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM1_TRACK_FSM_get_pwm1_track_freq_finish(data)                ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM1_TRACK_FSM_get_pwm1_track_fsm(data)                        (0x00000003&(data))

#define  MISC_PWM_PWM1_TRACK_PTI                                                0x1801B970
#define  MISC_PWM_PWM1_TRACK_PTI_reg_addr                                        "0xB801B970"
#define  MISC_PWM_PWM1_TRACK_PTI_reg                                             0xB801B970
#define  MISC_PWM_PWM1_TRACK_PTI_inst_addr                                       "0x001C"
#define  set_MISC_PWM_PWM1_TRACK_PTI_reg(data)                                   (*((volatile unsigned int*)MISC_PWM_PWM1_TRACK_PTI_reg)=data)
#define  get_MISC_PWM_PWM1_TRACK_PTI_reg                                         (*((volatile unsigned int*)MISC_PWM_PWM1_TRACK_PTI_reg))
#define  MISC_PWM_PWM1_TRACK_PTI_pwm1_pti_phase_shift                            (16)
#define  MISC_PWM_PWM1_TRACK_PTI_pwm1_pti_period_shift                           (0)
#define  MISC_PWM_PWM1_TRACK_PTI_pwm1_pti_phase_mask                             (0xFFFF0000)
#define  MISC_PWM_PWM1_TRACK_PTI_pwm1_pti_period_mask                            (0x0000FFFF)
#define  MISC_PWM_PWM1_TRACK_PTI_pwm1_pti_phase(data)                            (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM1_TRACK_PTI_pwm1_pti_period(data)                           (0x0000FFFF&(data))
#define  MISC_PWM_PWM1_TRACK_PTI_get_pwm1_pti_phase(data)                        ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM1_TRACK_PTI_get_pwm1_pti_period(data)                       (0x0000FFFF&(data))

#define  MISC_PWM_PWM1_FREQ_0                                                   0x1801B974
#define  MISC_PWM_PWM1_FREQ_0_reg_addr                                           "0xB801B974"
#define  MISC_PWM_PWM1_FREQ_0_reg                                                0xB801B974
#define  MISC_PWM_PWM1_FREQ_0_inst_addr                                          "0x001D"
#define  set_MISC_PWM_PWM1_FREQ_0_reg(data)                                      (*((volatile unsigned int*)MISC_PWM_PWM1_FREQ_0_reg)=data)
#define  get_MISC_PWM_PWM1_FREQ_0_reg                                            (*((volatile unsigned int*)MISC_PWM_PWM1_FREQ_0_reg))
#define  MISC_PWM_PWM1_FREQ_0_pwm1_freq_debounce_shift                           (16)
#define  MISC_PWM_PWM1_FREQ_0_pwm1_freq_max_step_shift                           (0)
#define  MISC_PWM_PWM1_FREQ_0_pwm1_freq_debounce_mask                            (0x000F0000)
#define  MISC_PWM_PWM1_FREQ_0_pwm1_freq_max_step_mask                            (0x00000FFF)
#define  MISC_PWM_PWM1_FREQ_0_pwm1_freq_debounce(data)                           (0x000F0000&((data)<<16))
#define  MISC_PWM_PWM1_FREQ_0_pwm1_freq_max_step(data)                           (0x00000FFF&(data))
#define  MISC_PWM_PWM1_FREQ_0_get_pwm1_freq_debounce(data)                       ((0x000F0000&(data))>>16)
#define  MISC_PWM_PWM1_FREQ_0_get_pwm1_freq_max_step(data)                       (0x00000FFF&(data))

#define  MISC_PWM_PWM1_FREQ_1                                                   0x1801B978
#define  MISC_PWM_PWM1_FREQ_1_reg_addr                                           "0xB801B978"
#define  MISC_PWM_PWM1_FREQ_1_reg                                                0xB801B978
#define  MISC_PWM_PWM1_FREQ_1_inst_addr                                          "0x001E"
#define  set_MISC_PWM_PWM1_FREQ_1_reg(data)                                      (*((volatile unsigned int*)MISC_PWM_PWM1_FREQ_1_reg)=data)
#define  get_MISC_PWM_PWM1_FREQ_1_reg                                            (*((volatile unsigned int*)MISC_PWM_PWM1_FREQ_1_reg))
#define  MISC_PWM_PWM1_FREQ_1_pwm1_freq_min_thr_shift                            (0)
#define  MISC_PWM_PWM1_FREQ_1_pwm1_freq_min_thr_mask                             (0x00000FFF)
#define  MISC_PWM_PWM1_FREQ_1_pwm1_freq_min_thr(data)                            (0x00000FFF&(data))
#define  MISC_PWM_PWM1_FREQ_1_get_pwm1_freq_min_thr(data)                        (0x00000FFF&(data))

#define  MISC_PWM_PWM1_PHASE_0                                                  0x1801B97C
#define  MISC_PWM_PWM1_PHASE_0_reg_addr                                          "0xB801B97C"
#define  MISC_PWM_PWM1_PHASE_0_reg                                               0xB801B97C
#define  MISC_PWM_PWM1_PHASE_0_inst_addr                                         "0x001F"
#define  set_MISC_PWM_PWM1_PHASE_0_reg(data)                                     (*((volatile unsigned int*)MISC_PWM_PWM1_PHASE_0_reg)=data)
#define  get_MISC_PWM_PWM1_PHASE_0_reg                                           (*((volatile unsigned int*)MISC_PWM_PWM1_PHASE_0_reg))
#define  MISC_PWM_PWM1_PHASE_0_pwm1_phase_debounce_shift                         (16)
#define  MISC_PWM_PWM1_PHASE_0_pwm1_phase_max_step_shift                         (0)
#define  MISC_PWM_PWM1_PHASE_0_pwm1_phase_debounce_mask                          (0x000F0000)
#define  MISC_PWM_PWM1_PHASE_0_pwm1_phase_max_step_mask                          (0x00000FFF)
#define  MISC_PWM_PWM1_PHASE_0_pwm1_phase_debounce(data)                         (0x000F0000&((data)<<16))
#define  MISC_PWM_PWM1_PHASE_0_pwm1_phase_max_step(data)                         (0x00000FFF&(data))
#define  MISC_PWM_PWM1_PHASE_0_get_pwm1_phase_debounce(data)                     ((0x000F0000&(data))>>16)
#define  MISC_PWM_PWM1_PHASE_0_get_pwm1_phase_max_step(data)                     (0x00000FFF&(data))

#define  MISC_PWM_PWM1_PHASE_1                                                  0x1801B980
#define  MISC_PWM_PWM1_PHASE_1_reg_addr                                          "0xB801B980"
#define  MISC_PWM_PWM1_PHASE_1_reg                                               0xB801B980
#define  MISC_PWM_PWM1_PHASE_1_inst_addr                                         "0x0020"
#define  set_MISC_PWM_PWM1_PHASE_1_reg(data)                                     (*((volatile unsigned int*)MISC_PWM_PWM1_PHASE_1_reg)=data)
#define  get_MISC_PWM_PWM1_PHASE_1_reg                                           (*((volatile unsigned int*)MISC_PWM_PWM1_PHASE_1_reg))
#define  MISC_PWM_PWM1_PHASE_1_pwm1_phase_max_thr_shift                          (16)
#define  MISC_PWM_PWM1_PHASE_1_pwm1_phase_min_thr_shift                          (0)
#define  MISC_PWM_PWM1_PHASE_1_pwm1_phase_max_thr_mask                           (0x0FFF0000)
#define  MISC_PWM_PWM1_PHASE_1_pwm1_phase_min_thr_mask                           (0x00000FFF)
#define  MISC_PWM_PWM1_PHASE_1_pwm1_phase_max_thr(data)                          (0x0FFF0000&((data)<<16))
#define  MISC_PWM_PWM1_PHASE_1_pwm1_phase_min_thr(data)                          (0x00000FFF&(data))
#define  MISC_PWM_PWM1_PHASE_1_get_pwm1_phase_max_thr(data)                      ((0x0FFF0000&(data))>>16)
#define  MISC_PWM_PWM1_PHASE_1_get_pwm1_phase_min_thr(data)                      (0x00000FFF&(data))

#define  MISC_PWM_PWM1_HW_PREDICT                                               0x1801B984
#define  MISC_PWM_PWM1_HW_PREDICT_reg_addr                                       "0xB801B984"
#define  MISC_PWM_PWM1_HW_PREDICT_reg                                            0xB801B984
#define  MISC_PWM_PWM1_HW_PREDICT_inst_addr                                      "0x0021"
#define  set_MISC_PWM_PWM1_HW_PREDICT_reg(data)                                  (*((volatile unsigned int*)MISC_PWM_PWM1_HW_PREDICT_reg)=data)
#define  get_MISC_PWM_PWM1_HW_PREDICT_reg                                        (*((volatile unsigned int*)MISC_PWM_PWM1_HW_PREDICT_reg))
#define  MISC_PWM_PWM1_HW_PREDICT_pwm1_predict_index_shift                       (4)
#define  MISC_PWM_PWM1_HW_PREDICT_pwm1_predict_en_shift                          (0)
#define  MISC_PWM_PWM1_HW_PREDICT_pwm1_predict_index_mask                        (0x000000F0)
#define  MISC_PWM_PWM1_HW_PREDICT_pwm1_predict_en_mask                           (0x00000001)
#define  MISC_PWM_PWM1_HW_PREDICT_pwm1_predict_index(data)                       (0x000000F0&((data)<<4))
#define  MISC_PWM_PWM1_HW_PREDICT_pwm1_predict_en(data)                          (0x00000001&(data))
#define  MISC_PWM_PWM1_HW_PREDICT_get_pwm1_predict_index(data)                   ((0x000000F0&(data))>>4)
#define  MISC_PWM_PWM1_HW_PREDICT_get_pwm1_predict_en(data)                      (0x00000001&(data))

#define  MISC_PWM_PWM1_SW_PREDICT                                               0x1801B988
#define  MISC_PWM_PWM1_SW_PREDICT_reg_addr                                       "0xB801B988"
#define  MISC_PWM_PWM1_SW_PREDICT_reg                                            0xB801B988
#define  MISC_PWM_PWM1_SW_PREDICT_inst_addr                                      "0x0022"
#define  set_MISC_PWM_PWM1_SW_PREDICT_reg(data)                                  (*((volatile unsigned int*)MISC_PWM_PWM1_SW_PREDICT_reg)=data)
#define  get_MISC_PWM_PWM1_SW_PREDICT_reg                                        (*((volatile unsigned int*)MISC_PWM_PWM1_SW_PREDICT_reg))
#define  MISC_PWM_PWM1_SW_PREDICT_dummy_31_16_shift                              (16)
#define  MISC_PWM_PWM1_SW_PREDICT_pwm1_sw_nxt_vs_period_shift                    (0)
#define  MISC_PWM_PWM1_SW_PREDICT_dummy_31_16_mask                               (0xFFFF0000)
#define  MISC_PWM_PWM1_SW_PREDICT_pwm1_sw_nxt_vs_period_mask                     (0x0000FFFF)
#define  MISC_PWM_PWM1_SW_PREDICT_dummy_31_16(data)                              (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM1_SW_PREDICT_pwm1_sw_nxt_vs_period(data)                    (0x0000FFFF&(data))
#define  MISC_PWM_PWM1_SW_PREDICT_get_dummy_31_16(data)                          ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM1_SW_PREDICT_get_pwm1_sw_nxt_vs_period(data)                (0x0000FFFF&(data))

#define  MISC_PWM_PWM1_PREDICT_RATIO                                            0x1801B98C
#define  MISC_PWM_PWM1_PREDICT_RATIO_reg_addr                                    "0xB801B98C"
#define  MISC_PWM_PWM1_PREDICT_RATIO_reg                                         0xB801B98C
#define  MISC_PWM_PWM1_PREDICT_RATIO_inst_addr                                   "0x0023"
#define  set_MISC_PWM_PWM1_PREDICT_RATIO_reg(data)                               (*((volatile unsigned int*)MISC_PWM_PWM1_PREDICT_RATIO_reg)=data)
#define  get_MISC_PWM_PWM1_PREDICT_RATIO_reg                                     (*((volatile unsigned int*)MISC_PWM_PWM1_PREDICT_RATIO_reg))
#define  MISC_PWM_PWM1_PREDICT_RATIO_pwm1_d2p_ratio_shift                        (0)
#define  MISC_PWM_PWM1_PREDICT_RATIO_pwm1_d2p_ratio_mask                         (0xFFFFFFFF)
#define  MISC_PWM_PWM1_PREDICT_RATIO_pwm1_d2p_ratio(data)                        (0xFFFFFFFF&(data))
#define  MISC_PWM_PWM1_PREDICT_RATIO_get_pwm1_d2p_ratio(data)                    (0xFFFFFFFF&(data))

#define  MISC_PWM_PWM2_CTRL                                                     0x1801B990
#define  MISC_PWM_PWM2_CTRL_reg_addr                                             "0xB801B990"
#define  MISC_PWM_PWM2_CTRL_reg                                                  0xB801B990
#define  MISC_PWM_PWM2_CTRL_inst_addr                                            "0x0024"
#define  set_MISC_PWM_PWM2_CTRL_reg(data)                                        (*((volatile unsigned int*)MISC_PWM_PWM2_CTRL_reg)=data)
#define  get_MISC_PWM_PWM2_CTRL_reg                                              (*((volatile unsigned int*)MISC_PWM_PWM2_CTRL_reg))
#define  MISC_PWM_PWM2_CTRL_pwm2l_shift                                          (31)
#define  MISC_PWM_PWM2_CTRL_always01_and_pwmduty_sel_shift                       (30)
#define  MISC_PWM_PWM2_CTRL_pwm2_en_shift                                        (29)
#define  MISC_PWM_PWM2_CTRL_pwm2_dvs_rst_en_shift                                (28)
#define  MISC_PWM_PWM2_CTRL_pwm2_mode_shift                                      (26)
#define  MISC_PWM_PWM2_CTRL_pwm2_mplus_dim_duty_en_shift                         (25)
#define  MISC_PWM_PWM2_CTRL_pwm2_vs_delay_thr_shift                              (4)
#define  MISC_PWM_PWM2_CTRL_pwm2_mplus_dim_duty_round_en_shift                   (3)
#define  MISC_PWM_PWM2_CTRL_pwm2_dvs_mux_shift                                   (2)
#define  MISC_PWM_PWM2_CTRL_pwm2_w_db0_wr_shift                                  (0)
#define  MISC_PWM_PWM2_CTRL_pwm2l_mask                                           (0x80000000)
#define  MISC_PWM_PWM2_CTRL_always01_and_pwmduty_sel_mask                        (0x40000000)
#define  MISC_PWM_PWM2_CTRL_pwm2_en_mask                                         (0x20000000)
#define  MISC_PWM_PWM2_CTRL_pwm2_dvs_rst_en_mask                                 (0x10000000)
#define  MISC_PWM_PWM2_CTRL_pwm2_mode_mask                                       (0x0C000000)
#define  MISC_PWM_PWM2_CTRL_pwm2_mplus_dim_duty_en_mask                          (0x02000000)
#define  MISC_PWM_PWM2_CTRL_pwm2_vs_delay_thr_mask                               (0x01FFFFF0)
#define  MISC_PWM_PWM2_CTRL_pwm2_mplus_dim_duty_round_en_mask                    (0x00000008)
#define  MISC_PWM_PWM2_CTRL_pwm2_dvs_mux_mask                                    (0x00000004)
#define  MISC_PWM_PWM2_CTRL_pwm2_w_db0_wr_mask                                   (0x00000001)
#define  MISC_PWM_PWM2_CTRL_pwm2l(data)                                          (0x80000000&((data)<<31))
#define  MISC_PWM_PWM2_CTRL_always01_and_pwmduty_sel(data)                       (0x40000000&((data)<<30))
#define  MISC_PWM_PWM2_CTRL_pwm2_en(data)                                        (0x20000000&((data)<<29))
#define  MISC_PWM_PWM2_CTRL_pwm2_dvs_rst_en(data)                                (0x10000000&((data)<<28))
#define  MISC_PWM_PWM2_CTRL_pwm2_mode(data)                                      (0x0C000000&((data)<<26))
#define  MISC_PWM_PWM2_CTRL_pwm2_mplus_dim_duty_en(data)                         (0x02000000&((data)<<25))
#define  MISC_PWM_PWM2_CTRL_pwm2_vs_delay_thr(data)                              (0x01FFFFF0&((data)<<4))
#define  MISC_PWM_PWM2_CTRL_pwm2_mplus_dim_duty_round_en(data)                   (0x00000008&((data)<<3))
#define  MISC_PWM_PWM2_CTRL_pwm2_dvs_mux(data)                                   (0x00000004&((data)<<2))
#define  MISC_PWM_PWM2_CTRL_pwm2_w_db0_wr(data)                                  (0x00000001&(data))
#define  MISC_PWM_PWM2_CTRL_get_pwm2l(data)                                      ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM2_CTRL_get_always01_and_pwmduty_sel(data)                   ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM2_CTRL_get_pwm2_en(data)                                    ((0x20000000&(data))>>29)
#define  MISC_PWM_PWM2_CTRL_get_pwm2_dvs_rst_en(data)                            ((0x10000000&(data))>>28)
#define  MISC_PWM_PWM2_CTRL_get_pwm2_mode(data)                                  ((0x0C000000&(data))>>26)
#define  MISC_PWM_PWM2_CTRL_get_pwm2_mplus_dim_duty_en(data)                     ((0x02000000&(data))>>25)
#define  MISC_PWM_PWM2_CTRL_get_pwm2_vs_delay_thr(data)                          ((0x01FFFFF0&(data))>>4)
#define  MISC_PWM_PWM2_CTRL_get_pwm2_mplus_dim_duty_round_en(data)               ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM2_CTRL_get_pwm2_dvs_mux(data)                               ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM2_CTRL_get_pwm2_w_db0_wr(data)                              (0x00000001&(data))

#define  MISC_PWM_PWM2_Timing_CTRL                                              0x1801B994
#define  MISC_PWM_PWM2_Timing_CTRL_reg_addr                                      "0xB801B994"
#define  MISC_PWM_PWM2_Timing_CTRL_reg                                           0xB801B994
#define  MISC_PWM_PWM2_Timing_CTRL_inst_addr                                     "0x0025"
#define  set_MISC_PWM_PWM2_Timing_CTRL_reg(data)                                 (*((volatile unsigned int*)MISC_PWM_PWM2_Timing_CTRL_reg)=data)
#define  get_MISC_PWM_PWM2_Timing_CTRL_reg                                       (*((volatile unsigned int*)MISC_PWM_PWM2_Timing_CTRL_reg))
#define  MISC_PWM_PWM2_Timing_CTRL_pwm2_vsync_interval_num_shift                 (14)
#define  MISC_PWM_PWM2_Timing_CTRL_pwm2_m_shift                                  (12)
#define  MISC_PWM_PWM2_Timing_CTRL_pwm2_n_shift                                  (0)
#define  MISC_PWM_PWM2_Timing_CTRL_pwm2_vsync_interval_num_mask                  (0x003FC000)
#define  MISC_PWM_PWM2_Timing_CTRL_pwm2_m_mask                                   (0x00003000)
#define  MISC_PWM_PWM2_Timing_CTRL_pwm2_n_mask                                   (0x00000FFF)
#define  MISC_PWM_PWM2_Timing_CTRL_pwm2_vsync_interval_num(data)                 (0x003FC000&((data)<<14))
#define  MISC_PWM_PWM2_Timing_CTRL_pwm2_m(data)                                  (0x00003000&((data)<<12))
#define  MISC_PWM_PWM2_Timing_CTRL_pwm2_n(data)                                  (0x00000FFF&(data))
#define  MISC_PWM_PWM2_Timing_CTRL_get_pwm2_vsync_interval_num(data)             ((0x003FC000&(data))>>14)
#define  MISC_PWM_PWM2_Timing_CTRL_get_pwm2_m(data)                              ((0x00003000&(data))>>12)
#define  MISC_PWM_PWM2_Timing_CTRL_get_pwm2_n(data)                              (0x00000FFF&(data))

#define  MISC_PWM_PWM2_DUTY_SET                                                 0x1801B998
#define  MISC_PWM_PWM2_DUTY_SET_reg_addr                                         "0xB801B998"
#define  MISC_PWM_PWM2_DUTY_SET_reg                                              0xB801B998
#define  MISC_PWM_PWM2_DUTY_SET_inst_addr                                        "0x0026"
#define  set_MISC_PWM_PWM2_DUTY_SET_reg(data)                                    (*((volatile unsigned int*)MISC_PWM_PWM2_DUTY_SET_reg)=data)
#define  get_MISC_PWM_PWM2_DUTY_SET_reg                                          (*((volatile unsigned int*)MISC_PWM_PWM2_DUTY_SET_reg))
#define  MISC_PWM_PWM2_DUTY_SET_pwm2_dut_shift                                   (16)
#define  MISC_PWM_PWM2_DUTY_SET_pwm2_cycle_max_shift                             (12)
#define  MISC_PWM_PWM2_DUTY_SET_pwm2_totalcnt_shift                              (0)
#define  MISC_PWM_PWM2_DUTY_SET_pwm2_dut_mask                                    (0x0FFF0000)
#define  MISC_PWM_PWM2_DUTY_SET_pwm2_cycle_max_mask                              (0x0000F000)
#define  MISC_PWM_PWM2_DUTY_SET_pwm2_totalcnt_mask                               (0x00000FFF)
#define  MISC_PWM_PWM2_DUTY_SET_pwm2_dut(data)                                   (0x0FFF0000&((data)<<16))
#define  MISC_PWM_PWM2_DUTY_SET_pwm2_cycle_max(data)                             (0x0000F000&((data)<<12))
#define  MISC_PWM_PWM2_DUTY_SET_pwm2_totalcnt(data)                              (0x00000FFF&(data))
#define  MISC_PWM_PWM2_DUTY_SET_get_pwm2_dut(data)                               ((0x0FFF0000&(data))>>16)
#define  MISC_PWM_PWM2_DUTY_SET_get_pwm2_cycle_max(data)                         ((0x0000F000&(data))>>12)
#define  MISC_PWM_PWM2_DUTY_SET_get_pwm2_totalcnt(data)                          (0x00000FFF&(data))

#define  MISC_PWM_PWM3_CTRL                                                     0x1801B99C
#define  MISC_PWM_PWM3_CTRL_reg_addr                                             "0xB801B99C"
#define  MISC_PWM_PWM3_CTRL_reg                                                  0xB801B99C
#define  MISC_PWM_PWM3_CTRL_inst_addr                                            "0x0027"
#define  set_MISC_PWM_PWM3_CTRL_reg(data)                                        (*((volatile unsigned int*)MISC_PWM_PWM3_CTRL_reg)=data)
#define  get_MISC_PWM_PWM3_CTRL_reg                                              (*((volatile unsigned int*)MISC_PWM_PWM3_CTRL_reg))
#define  MISC_PWM_PWM3_CTRL_pwm3l_shift                                          (31)
#define  MISC_PWM_PWM3_CTRL_always01_and_pwmduty_sel_shift                       (30)
#define  MISC_PWM_PWM3_CTRL_pwm3_en_shift                                        (29)
#define  MISC_PWM_PWM3_CTRL_pwm3_dvs_rst_en_shift                                (28)
#define  MISC_PWM_PWM3_CTRL_pwm3_mode_shift                                      (26)
#define  MISC_PWM_PWM3_CTRL_pwm3_mplus_dim_duty_en_shift                         (25)
#define  MISC_PWM_PWM3_CTRL_pwm3_vs_delay_thr_shift                              (4)
#define  MISC_PWM_PWM3_CTRL_pwm3_mplus_dim_duty_round_en_shift                   (3)
#define  MISC_PWM_PWM3_CTRL_pwm3_dvs_mux_shift                                   (2)
#define  MISC_PWM_PWM3_CTRL_pwm3_w_db0_wr_shift                                  (0)
#define  MISC_PWM_PWM3_CTRL_pwm3l_mask                                           (0x80000000)
#define  MISC_PWM_PWM3_CTRL_always01_and_pwmduty_sel_mask                        (0x40000000)
#define  MISC_PWM_PWM3_CTRL_pwm3_en_mask                                         (0x20000000)
#define  MISC_PWM_PWM3_CTRL_pwm3_dvs_rst_en_mask                                 (0x10000000)
#define  MISC_PWM_PWM3_CTRL_pwm3_mode_mask                                       (0x0C000000)
#define  MISC_PWM_PWM3_CTRL_pwm3_mplus_dim_duty_en_mask                          (0x02000000)
#define  MISC_PWM_PWM3_CTRL_pwm3_vs_delay_thr_mask                               (0x01FFFFF0)
#define  MISC_PWM_PWM3_CTRL_pwm3_mplus_dim_duty_round_en_mask                    (0x00000008)
#define  MISC_PWM_PWM3_CTRL_pwm3_dvs_mux_mask                                    (0x00000004)
#define  MISC_PWM_PWM3_CTRL_pwm3_w_db0_wr_mask                                   (0x00000001)
#define  MISC_PWM_PWM3_CTRL_pwm3l(data)                                          (0x80000000&((data)<<31))
#define  MISC_PWM_PWM3_CTRL_always01_and_pwmduty_sel(data)                       (0x40000000&((data)<<30))
#define  MISC_PWM_PWM3_CTRL_pwm3_en(data)                                        (0x20000000&((data)<<29))
#define  MISC_PWM_PWM3_CTRL_pwm3_dvs_rst_en(data)                                (0x10000000&((data)<<28))
#define  MISC_PWM_PWM3_CTRL_pwm3_mode(data)                                      (0x0C000000&((data)<<26))
#define  MISC_PWM_PWM3_CTRL_pwm3_mplus_dim_duty_en(data)                         (0x02000000&((data)<<25))
#define  MISC_PWM_PWM3_CTRL_pwm3_vs_delay_thr(data)                              (0x01FFFFF0&((data)<<4))
#define  MISC_PWM_PWM3_CTRL_pwm3_mplus_dim_duty_round_en(data)                   (0x00000008&((data)<<3))
#define  MISC_PWM_PWM3_CTRL_pwm3_dvs_mux(data)                                   (0x00000004&((data)<<2))
#define  MISC_PWM_PWM3_CTRL_pwm3_w_db0_wr(data)                                  (0x00000001&(data))
#define  MISC_PWM_PWM3_CTRL_get_pwm3l(data)                                      ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM3_CTRL_get_always01_and_pwmduty_sel(data)                   ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM3_CTRL_get_pwm3_en(data)                                    ((0x20000000&(data))>>29)
#define  MISC_PWM_PWM3_CTRL_get_pwm3_dvs_rst_en(data)                            ((0x10000000&(data))>>28)
#define  MISC_PWM_PWM3_CTRL_get_pwm3_mode(data)                                  ((0x0C000000&(data))>>26)
#define  MISC_PWM_PWM3_CTRL_get_pwm3_mplus_dim_duty_en(data)                     ((0x02000000&(data))>>25)
#define  MISC_PWM_PWM3_CTRL_get_pwm3_vs_delay_thr(data)                          ((0x01FFFFF0&(data))>>4)
#define  MISC_PWM_PWM3_CTRL_get_pwm3_mplus_dim_duty_round_en(data)               ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM3_CTRL_get_pwm3_dvs_mux(data)                               ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM3_CTRL_get_pwm3_w_db0_wr(data)                              (0x00000001&(data))

#define  MISC_PWM_PWM3_Timing_CTRL                                              0x1801B9A0
#define  MISC_PWM_PWM3_Timing_CTRL_reg_addr                                      "0xB801B9A0"
#define  MISC_PWM_PWM3_Timing_CTRL_reg                                           0xB801B9A0
#define  MISC_PWM_PWM3_Timing_CTRL_inst_addr                                     "0x0028"
#define  set_MISC_PWM_PWM3_Timing_CTRL_reg(data)                                 (*((volatile unsigned int*)MISC_PWM_PWM3_Timing_CTRL_reg)=data)
#define  get_MISC_PWM_PWM3_Timing_CTRL_reg                                       (*((volatile unsigned int*)MISC_PWM_PWM3_Timing_CTRL_reg))
#define  MISC_PWM_PWM3_Timing_CTRL_pwm3_vsync_interval_num_shift                 (14)
#define  MISC_PWM_PWM3_Timing_CTRL_pwm3_m_shift                                  (12)
#define  MISC_PWM_PWM3_Timing_CTRL_pwm3_n_shift                                  (0)
#define  MISC_PWM_PWM3_Timing_CTRL_pwm3_vsync_interval_num_mask                  (0x003FC000)
#define  MISC_PWM_PWM3_Timing_CTRL_pwm3_m_mask                                   (0x00003000)
#define  MISC_PWM_PWM3_Timing_CTRL_pwm3_n_mask                                   (0x00000FFF)
#define  MISC_PWM_PWM3_Timing_CTRL_pwm3_vsync_interval_num(data)                 (0x003FC000&((data)<<14))
#define  MISC_PWM_PWM3_Timing_CTRL_pwm3_m(data)                                  (0x00003000&((data)<<12))
#define  MISC_PWM_PWM3_Timing_CTRL_pwm3_n(data)                                  (0x00000FFF&(data))
#define  MISC_PWM_PWM3_Timing_CTRL_get_pwm3_vsync_interval_num(data)             ((0x003FC000&(data))>>14)
#define  MISC_PWM_PWM3_Timing_CTRL_get_pwm3_m(data)                              ((0x00003000&(data))>>12)
#define  MISC_PWM_PWM3_Timing_CTRL_get_pwm3_n(data)                              (0x00000FFF&(data))

#define  MISC_PWM_PWM3_DUTY_SET                                                 0x1801B9A4
#define  MISC_PWM_PWM3_DUTY_SET_reg_addr                                         "0xB801B9A4"
#define  MISC_PWM_PWM3_DUTY_SET_reg                                              0xB801B9A4
#define  MISC_PWM_PWM3_DUTY_SET_inst_addr                                        "0x0029"
#define  set_MISC_PWM_PWM3_DUTY_SET_reg(data)                                    (*((volatile unsigned int*)MISC_PWM_PWM3_DUTY_SET_reg)=data)
#define  get_MISC_PWM_PWM3_DUTY_SET_reg                                          (*((volatile unsigned int*)MISC_PWM_PWM3_DUTY_SET_reg))
#define  MISC_PWM_PWM3_DUTY_SET_pwm3_dut_shift                                   (16)
#define  MISC_PWM_PWM3_DUTY_SET_pwm3_cycle_max_shift                             (12)
#define  MISC_PWM_PWM3_DUTY_SET_pwm3_totalcnt_shift                              (0)
#define  MISC_PWM_PWM3_DUTY_SET_pwm3_dut_mask                                    (0x0FFF0000)
#define  MISC_PWM_PWM3_DUTY_SET_pwm3_cycle_max_mask                              (0x0000F000)
#define  MISC_PWM_PWM3_DUTY_SET_pwm3_totalcnt_mask                               (0x00000FFF)
#define  MISC_PWM_PWM3_DUTY_SET_pwm3_dut(data)                                   (0x0FFF0000&((data)<<16))
#define  MISC_PWM_PWM3_DUTY_SET_pwm3_cycle_max(data)                             (0x0000F000&((data)<<12))
#define  MISC_PWM_PWM3_DUTY_SET_pwm3_totalcnt(data)                              (0x00000FFF&(data))
#define  MISC_PWM_PWM3_DUTY_SET_get_pwm3_dut(data)                               ((0x0FFF0000&(data))>>16)
#define  MISC_PWM_PWM3_DUTY_SET_get_pwm3_cycle_max(data)                         ((0x0000F000&(data))>>12)
#define  MISC_PWM_PWM3_DUTY_SET_get_pwm3_totalcnt(data)                          (0x00000FFF&(data))

#define  MISC_PWM_PWM4_CTRL                                                     0x1801B9A8
#define  MISC_PWM_PWM4_CTRL_reg_addr                                             "0xB801B9A8"
#define  MISC_PWM_PWM4_CTRL_reg                                                  0xB801B9A8
#define  MISC_PWM_PWM4_CTRL_inst_addr                                            "0x002A"
#define  set_MISC_PWM_PWM4_CTRL_reg(data)                                        (*((volatile unsigned int*)MISC_PWM_PWM4_CTRL_reg)=data)
#define  get_MISC_PWM_PWM4_CTRL_reg                                              (*((volatile unsigned int*)MISC_PWM_PWM4_CTRL_reg))
#define  MISC_PWM_PWM4_CTRL_pwm4l_shift                                          (31)
#define  MISC_PWM_PWM4_CTRL_always01_and_pwmduty_sel_shift                       (30)
#define  MISC_PWM_PWM4_CTRL_pwm4_en_shift                                        (29)
#define  MISC_PWM_PWM4_CTRL_pwm4_dvs_rst_en_shift                                (28)
#define  MISC_PWM_PWM4_CTRL_pwm4_mode_shift                                      (26)
#define  MISC_PWM_PWM4_CTRL_pwm4_mplus_dim_duty_en_shift                         (25)
#define  MISC_PWM_PWM4_CTRL_pwm4_vs_delay_thr_shift                              (4)
#define  MISC_PWM_PWM4_CTRL_pwm4_mplus_dim_duty_round_en_shift                   (3)
#define  MISC_PWM_PWM4_CTRL_pwm4_dvs_mux_shift                                   (2)
#define  MISC_PWM_PWM4_CTRL_pwm4_w_db0_wr_shift                                  (0)
#define  MISC_PWM_PWM4_CTRL_pwm4l_mask                                           (0x80000000)
#define  MISC_PWM_PWM4_CTRL_always01_and_pwmduty_sel_mask                        (0x40000000)
#define  MISC_PWM_PWM4_CTRL_pwm4_en_mask                                         (0x20000000)
#define  MISC_PWM_PWM4_CTRL_pwm4_dvs_rst_en_mask                                 (0x10000000)
#define  MISC_PWM_PWM4_CTRL_pwm4_mode_mask                                       (0x0C000000)
#define  MISC_PWM_PWM4_CTRL_pwm4_mplus_dim_duty_en_mask                          (0x02000000)
#define  MISC_PWM_PWM4_CTRL_pwm4_vs_delay_thr_mask                               (0x01FFFFF0)
#define  MISC_PWM_PWM4_CTRL_pwm4_mplus_dim_duty_round_en_mask                    (0x00000008)
#define  MISC_PWM_PWM4_CTRL_pwm4_dvs_mux_mask                                    (0x00000004)
#define  MISC_PWM_PWM4_CTRL_pwm4_w_db0_wr_mask                                   (0x00000001)
#define  MISC_PWM_PWM4_CTRL_pwm4l(data)                                          (0x80000000&((data)<<31))
#define  MISC_PWM_PWM4_CTRL_always01_and_pwmduty_sel(data)                       (0x40000000&((data)<<30))
#define  MISC_PWM_PWM4_CTRL_pwm4_en(data)                                        (0x20000000&((data)<<29))
#define  MISC_PWM_PWM4_CTRL_pwm4_dvs_rst_en(data)                                (0x10000000&((data)<<28))
#define  MISC_PWM_PWM4_CTRL_pwm4_mode(data)                                      (0x0C000000&((data)<<26))
#define  MISC_PWM_PWM4_CTRL_pwm4_mplus_dim_duty_en(data)                         (0x02000000&((data)<<25))
#define  MISC_PWM_PWM4_CTRL_pwm4_vs_delay_thr(data)                              (0x01FFFFF0&((data)<<4))
#define  MISC_PWM_PWM4_CTRL_pwm4_mplus_dim_duty_round_en(data)                   (0x00000008&((data)<<3))
#define  MISC_PWM_PWM4_CTRL_pwm4_dvs_mux(data)                                   (0x00000004&((data)<<2))
#define  MISC_PWM_PWM4_CTRL_pwm4_w_db0_wr(data)                                  (0x00000001&(data))
#define  MISC_PWM_PWM4_CTRL_get_pwm4l(data)                                      ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM4_CTRL_get_always01_and_pwmduty_sel(data)                   ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM4_CTRL_get_pwm4_en(data)                                    ((0x20000000&(data))>>29)
#define  MISC_PWM_PWM4_CTRL_get_pwm4_dvs_rst_en(data)                            ((0x10000000&(data))>>28)
#define  MISC_PWM_PWM4_CTRL_get_pwm4_mode(data)                                  ((0x0C000000&(data))>>26)
#define  MISC_PWM_PWM4_CTRL_get_pwm4_mplus_dim_duty_en(data)                     ((0x02000000&(data))>>25)
#define  MISC_PWM_PWM4_CTRL_get_pwm4_vs_delay_thr(data)                          ((0x01FFFFF0&(data))>>4)
#define  MISC_PWM_PWM4_CTRL_get_pwm4_mplus_dim_duty_round_en(data)               ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM4_CTRL_get_pwm4_dvs_mux(data)                               ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM4_CTRL_get_pwm4_w_db0_wr(data)                              (0x00000001&(data))

#define  MISC_PWM_PWM4_Timing_CTRL                                              0x1801B9AC
#define  MISC_PWM_PWM4_Timing_CTRL_reg_addr                                      "0xB801B9AC"
#define  MISC_PWM_PWM4_Timing_CTRL_reg                                           0xB801B9AC
#define  MISC_PWM_PWM4_Timing_CTRL_inst_addr                                     "0x002B"
#define  set_MISC_PWM_PWM4_Timing_CTRL_reg(data)                                 (*((volatile unsigned int*)MISC_PWM_PWM4_Timing_CTRL_reg)=data)
#define  get_MISC_PWM_PWM4_Timing_CTRL_reg                                       (*((volatile unsigned int*)MISC_PWM_PWM4_Timing_CTRL_reg))
#define  MISC_PWM_PWM4_Timing_CTRL_pwm4_vsync_interval_num_shift                 (14)
#define  MISC_PWM_PWM4_Timing_CTRL_pwm4_m_shift                                  (12)
#define  MISC_PWM_PWM4_Timing_CTRL_pwm4_n_shift                                  (0)
#define  MISC_PWM_PWM4_Timing_CTRL_pwm4_vsync_interval_num_mask                  (0x003FC000)
#define  MISC_PWM_PWM4_Timing_CTRL_pwm4_m_mask                                   (0x00003000)
#define  MISC_PWM_PWM4_Timing_CTRL_pwm4_n_mask                                   (0x00000FFF)
#define  MISC_PWM_PWM4_Timing_CTRL_pwm4_vsync_interval_num(data)                 (0x003FC000&((data)<<14))
#define  MISC_PWM_PWM4_Timing_CTRL_pwm4_m(data)                                  (0x00003000&((data)<<12))
#define  MISC_PWM_PWM4_Timing_CTRL_pwm4_n(data)                                  (0x00000FFF&(data))
#define  MISC_PWM_PWM4_Timing_CTRL_get_pwm4_vsync_interval_num(data)             ((0x003FC000&(data))>>14)
#define  MISC_PWM_PWM4_Timing_CTRL_get_pwm4_m(data)                              ((0x00003000&(data))>>12)
#define  MISC_PWM_PWM4_Timing_CTRL_get_pwm4_n(data)                              (0x00000FFF&(data))

#define  MISC_PWM_PWM4_DUTY_SET                                                 0x1801B9B0
#define  MISC_PWM_PWM4_DUTY_SET_reg_addr                                         "0xB801B9B0"
#define  MISC_PWM_PWM4_DUTY_SET_reg                                              0xB801B9B0
#define  MISC_PWM_PWM4_DUTY_SET_inst_addr                                        "0x002C"
#define  set_MISC_PWM_PWM4_DUTY_SET_reg(data)                                    (*((volatile unsigned int*)MISC_PWM_PWM4_DUTY_SET_reg)=data)
#define  get_MISC_PWM_PWM4_DUTY_SET_reg                                          (*((volatile unsigned int*)MISC_PWM_PWM4_DUTY_SET_reg))
#define  MISC_PWM_PWM4_DUTY_SET_pwm4_dut_shift                                   (16)
#define  MISC_PWM_PWM4_DUTY_SET_pwm4_cycle_max_shift                             (12)
#define  MISC_PWM_PWM4_DUTY_SET_pwm4_totalcnt_shift                              (0)
#define  MISC_PWM_PWM4_DUTY_SET_pwm4_dut_mask                                    (0x0FFF0000)
#define  MISC_PWM_PWM4_DUTY_SET_pwm4_cycle_max_mask                              (0x0000F000)
#define  MISC_PWM_PWM4_DUTY_SET_pwm4_totalcnt_mask                               (0x00000FFF)
#define  MISC_PWM_PWM4_DUTY_SET_pwm4_dut(data)                                   (0x0FFF0000&((data)<<16))
#define  MISC_PWM_PWM4_DUTY_SET_pwm4_cycle_max(data)                             (0x0000F000&((data)<<12))
#define  MISC_PWM_PWM4_DUTY_SET_pwm4_totalcnt(data)                              (0x00000FFF&(data))
#define  MISC_PWM_PWM4_DUTY_SET_get_pwm4_dut(data)                               ((0x0FFF0000&(data))>>16)
#define  MISC_PWM_PWM4_DUTY_SET_get_pwm4_cycle_max(data)                         ((0x0000F000&(data))>>12)
#define  MISC_PWM_PWM4_DUTY_SET_get_pwm4_totalcnt(data)                          (0x00000FFF&(data))

#define  MISC_PWM_PWM5_CTRL                                                     0x1801B9B4
#define  MISC_PWM_PWM5_CTRL_reg_addr                                             "0xB801B9B4"
#define  MISC_PWM_PWM5_CTRL_reg                                                  0xB801B9B4
#define  MISC_PWM_PWM5_CTRL_inst_addr                                            "0x002D"
#define  set_MISC_PWM_PWM5_CTRL_reg(data)                                        (*((volatile unsigned int*)MISC_PWM_PWM5_CTRL_reg)=data)
#define  get_MISC_PWM_PWM5_CTRL_reg                                              (*((volatile unsigned int*)MISC_PWM_PWM5_CTRL_reg))
#define  MISC_PWM_PWM5_CTRL_pwm5l_shift                                          (31)
#define  MISC_PWM_PWM5_CTRL_always01_and_pwmduty_sel_shift                       (30)
#define  MISC_PWM_PWM5_CTRL_pwm5_en_shift                                        (29)
#define  MISC_PWM_PWM5_CTRL_pwm5_dvs_rst_en_shift                                (28)
#define  MISC_PWM_PWM5_CTRL_pwm5_mode_shift                                      (26)
#define  MISC_PWM_PWM5_CTRL_pwm5_mplus_dim_duty_en_shift                         (25)
#define  MISC_PWM_PWM5_CTRL_pwm5_vs_delay_thr_shift                              (4)
#define  MISC_PWM_PWM5_CTRL_pwm5_mplus_dim_duty_round_en_shift                   (3)
#define  MISC_PWM_PWM5_CTRL_pwm5_dvs_mux_shift                                   (2)
#define  MISC_PWM_PWM5_CTRL_pwm5_w_db0_wr_shift                                  (0)
#define  MISC_PWM_PWM5_CTRL_pwm5l_mask                                           (0x80000000)
#define  MISC_PWM_PWM5_CTRL_always01_and_pwmduty_sel_mask                        (0x40000000)
#define  MISC_PWM_PWM5_CTRL_pwm5_en_mask                                         (0x20000000)
#define  MISC_PWM_PWM5_CTRL_pwm5_dvs_rst_en_mask                                 (0x10000000)
#define  MISC_PWM_PWM5_CTRL_pwm5_mode_mask                                       (0x0C000000)
#define  MISC_PWM_PWM5_CTRL_pwm5_mplus_dim_duty_en_mask                          (0x02000000)
#define  MISC_PWM_PWM5_CTRL_pwm5_vs_delay_thr_mask                               (0x01FFFFF0)
#define  MISC_PWM_PWM5_CTRL_pwm5_mplus_dim_duty_round_en_mask                    (0x00000008)
#define  MISC_PWM_PWM5_CTRL_pwm5_dvs_mux_mask                                    (0x00000004)
#define  MISC_PWM_PWM5_CTRL_pwm5_w_db0_wr_mask                                   (0x00000001)
#define  MISC_PWM_PWM5_CTRL_pwm5l(data)                                          (0x80000000&((data)<<31))
#define  MISC_PWM_PWM5_CTRL_always01_and_pwmduty_sel(data)                       (0x40000000&((data)<<30))
#define  MISC_PWM_PWM5_CTRL_pwm5_en(data)                                        (0x20000000&((data)<<29))
#define  MISC_PWM_PWM5_CTRL_pwm5_dvs_rst_en(data)                                (0x10000000&((data)<<28))
#define  MISC_PWM_PWM5_CTRL_pwm5_mode(data)                                      (0x0C000000&((data)<<26))
#define  MISC_PWM_PWM5_CTRL_pwm5_mplus_dim_duty_en(data)                         (0x02000000&((data)<<25))
#define  MISC_PWM_PWM5_CTRL_pwm5_vs_delay_thr(data)                              (0x01FFFFF0&((data)<<4))
#define  MISC_PWM_PWM5_CTRL_pwm5_mplus_dim_duty_round_en(data)                   (0x00000008&((data)<<3))
#define  MISC_PWM_PWM5_CTRL_pwm5_dvs_mux(data)                                   (0x00000004&((data)<<2))
#define  MISC_PWM_PWM5_CTRL_pwm5_w_db0_wr(data)                                  (0x00000001&(data))
#define  MISC_PWM_PWM5_CTRL_get_pwm5l(data)                                      ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM5_CTRL_get_always01_and_pwmduty_sel(data)                   ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM5_CTRL_get_pwm5_en(data)                                    ((0x20000000&(data))>>29)
#define  MISC_PWM_PWM5_CTRL_get_pwm5_dvs_rst_en(data)                            ((0x10000000&(data))>>28)
#define  MISC_PWM_PWM5_CTRL_get_pwm5_mode(data)                                  ((0x0C000000&(data))>>26)
#define  MISC_PWM_PWM5_CTRL_get_pwm5_mplus_dim_duty_en(data)                     ((0x02000000&(data))>>25)
#define  MISC_PWM_PWM5_CTRL_get_pwm5_vs_delay_thr(data)                          ((0x01FFFFF0&(data))>>4)
#define  MISC_PWM_PWM5_CTRL_get_pwm5_mplus_dim_duty_round_en(data)               ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM5_CTRL_get_pwm5_dvs_mux(data)                               ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM5_CTRL_get_pwm5_w_db0_wr(data)                              (0x00000001&(data))

#define  MISC_PWM_PWM5_Timing_CTRL                                              0x1801B9B8
#define  MISC_PWM_PWM5_Timing_CTRL_reg_addr                                      "0xB801B9B8"
#define  MISC_PWM_PWM5_Timing_CTRL_reg                                           0xB801B9B8
#define  MISC_PWM_PWM5_Timing_CTRL_inst_addr                                     "0x002E"
#define  set_MISC_PWM_PWM5_Timing_CTRL_reg(data)                                 (*((volatile unsigned int*)MISC_PWM_PWM5_Timing_CTRL_reg)=data)
#define  get_MISC_PWM_PWM5_Timing_CTRL_reg                                       (*((volatile unsigned int*)MISC_PWM_PWM5_Timing_CTRL_reg))
#define  MISC_PWM_PWM5_Timing_CTRL_pwm5_vsync_interval_num_shift                 (14)
#define  MISC_PWM_PWM5_Timing_CTRL_pwm5_m_shift                                  (12)
#define  MISC_PWM_PWM5_Timing_CTRL_pwm5_n_shift                                  (0)
#define  MISC_PWM_PWM5_Timing_CTRL_pwm5_vsync_interval_num_mask                  (0x003FC000)
#define  MISC_PWM_PWM5_Timing_CTRL_pwm5_m_mask                                   (0x00003000)
#define  MISC_PWM_PWM5_Timing_CTRL_pwm5_n_mask                                   (0x00000FFF)
#define  MISC_PWM_PWM5_Timing_CTRL_pwm5_vsync_interval_num(data)                 (0x003FC000&((data)<<14))
#define  MISC_PWM_PWM5_Timing_CTRL_pwm5_m(data)                                  (0x00003000&((data)<<12))
#define  MISC_PWM_PWM5_Timing_CTRL_pwm5_n(data)                                  (0x00000FFF&(data))
#define  MISC_PWM_PWM5_Timing_CTRL_get_pwm5_vsync_interval_num(data)             ((0x003FC000&(data))>>14)
#define  MISC_PWM_PWM5_Timing_CTRL_get_pwm5_m(data)                              ((0x00003000&(data))>>12)
#define  MISC_PWM_PWM5_Timing_CTRL_get_pwm5_n(data)                              (0x00000FFF&(data))

#define  MISC_PWM_PWM5_DUTY_SET                                                 0x1801B9BC
#define  MISC_PWM_PWM5_DUTY_SET_reg_addr                                         "0xB801B9BC"
#define  MISC_PWM_PWM5_DUTY_SET_reg                                              0xB801B9BC
#define  MISC_PWM_PWM5_DUTY_SET_inst_addr                                        "0x002F"
#define  set_MISC_PWM_PWM5_DUTY_SET_reg(data)                                    (*((volatile unsigned int*)MISC_PWM_PWM5_DUTY_SET_reg)=data)
#define  get_MISC_PWM_PWM5_DUTY_SET_reg                                          (*((volatile unsigned int*)MISC_PWM_PWM5_DUTY_SET_reg))
#define  MISC_PWM_PWM5_DUTY_SET_pwm5_dut_shift                                   (16)
#define  MISC_PWM_PWM5_DUTY_SET_pwm5_cycle_max_shift                             (12)
#define  MISC_PWM_PWM5_DUTY_SET_pwm5_totalcnt_shift                              (0)
#define  MISC_PWM_PWM5_DUTY_SET_pwm5_dut_mask                                    (0x0FFF0000)
#define  MISC_PWM_PWM5_DUTY_SET_pwm5_cycle_max_mask                              (0x0000F000)
#define  MISC_PWM_PWM5_DUTY_SET_pwm5_totalcnt_mask                               (0x00000FFF)
#define  MISC_PWM_PWM5_DUTY_SET_pwm5_dut(data)                                   (0x0FFF0000&((data)<<16))
#define  MISC_PWM_PWM5_DUTY_SET_pwm5_cycle_max(data)                             (0x0000F000&((data)<<12))
#define  MISC_PWM_PWM5_DUTY_SET_pwm5_totalcnt(data)                              (0x00000FFF&(data))
#define  MISC_PWM_PWM5_DUTY_SET_get_pwm5_dut(data)                               ((0x0FFF0000&(data))>>16)
#define  MISC_PWM_PWM5_DUTY_SET_get_pwm5_cycle_max(data)                         ((0x0000F000&(data))>>12)
#define  MISC_PWM_PWM5_DUTY_SET_get_pwm5_totalcnt(data)                          (0x00000FFF&(data))

#define  MISC_PWM_PWM6_CTRL                                                     0x1801B9C0
#define  MISC_PWM_PWM6_CTRL_reg_addr                                             "0xB801B9C0"
#define  MISC_PWM_PWM6_CTRL_reg                                                  0xB801B9C0
#define  MISC_PWM_PWM6_CTRL_inst_addr                                            "0x0030"
#define  set_MISC_PWM_PWM6_CTRL_reg(data)                                        (*((volatile unsigned int*)MISC_PWM_PWM6_CTRL_reg)=data)
#define  get_MISC_PWM_PWM6_CTRL_reg                                              (*((volatile unsigned int*)MISC_PWM_PWM6_CTRL_reg))
#define  MISC_PWM_PWM6_CTRL_pwm6l_shift                                          (31)
#define  MISC_PWM_PWM6_CTRL_always01_and_pwmduty_sel_shift                       (30)
#define  MISC_PWM_PWM6_CTRL_pwm6_en_shift                                        (29)
#define  MISC_PWM_PWM6_CTRL_pwm6_dvs_rst_en_shift                                (28)
#define  MISC_PWM_PWM6_CTRL_pwm6_mode_shift                                      (26)
#define  MISC_PWM_PWM6_CTRL_pwm6_mplus_dim_duty_en_shift                         (25)
#define  MISC_PWM_PWM6_CTRL_pwm6_vs_delay_thr_shift                              (4)
#define  MISC_PWM_PWM6_CTRL_pwm6_mplus_dim_duty_round_en_shift                   (3)
#define  MISC_PWM_PWM6_CTRL_pwm6_dvs_mux_shift                                   (2)
#define  MISC_PWM_PWM6_CTRL_pwm6_w_db0_wr_shift                                  (0)
#define  MISC_PWM_PWM6_CTRL_pwm6l_mask                                           (0x80000000)
#define  MISC_PWM_PWM6_CTRL_always01_and_pwmduty_sel_mask                        (0x40000000)
#define  MISC_PWM_PWM6_CTRL_pwm6_en_mask                                         (0x20000000)
#define  MISC_PWM_PWM6_CTRL_pwm6_dvs_rst_en_mask                                 (0x10000000)
#define  MISC_PWM_PWM6_CTRL_pwm6_mode_mask                                       (0x0C000000)
#define  MISC_PWM_PWM6_CTRL_pwm6_mplus_dim_duty_en_mask                          (0x02000000)
#define  MISC_PWM_PWM6_CTRL_pwm6_vs_delay_thr_mask                               (0x01FFFFF0)
#define  MISC_PWM_PWM6_CTRL_pwm6_mplus_dim_duty_round_en_mask                    (0x00000008)
#define  MISC_PWM_PWM6_CTRL_pwm6_dvs_mux_mask                                    (0x00000004)
#define  MISC_PWM_PWM6_CTRL_pwm6_w_db0_wr_mask                                   (0x00000001)
#define  MISC_PWM_PWM6_CTRL_pwm6l(data)                                          (0x80000000&((data)<<31))
#define  MISC_PWM_PWM6_CTRL_always01_and_pwmduty_sel(data)                       (0x40000000&((data)<<30))
#define  MISC_PWM_PWM6_CTRL_pwm6_en(data)                                        (0x20000000&((data)<<29))
#define  MISC_PWM_PWM6_CTRL_pwm6_dvs_rst_en(data)                                (0x10000000&((data)<<28))
#define  MISC_PWM_PWM6_CTRL_pwm6_mode(data)                                      (0x0C000000&((data)<<26))
#define  MISC_PWM_PWM6_CTRL_pwm6_mplus_dim_duty_en(data)                         (0x02000000&((data)<<25))
#define  MISC_PWM_PWM6_CTRL_pwm6_vs_delay_thr(data)                              (0x01FFFFF0&((data)<<4))
#define  MISC_PWM_PWM6_CTRL_pwm6_mplus_dim_duty_round_en(data)                   (0x00000008&((data)<<3))
#define  MISC_PWM_PWM6_CTRL_pwm6_dvs_mux(data)                                   (0x00000004&((data)<<2))
#define  MISC_PWM_PWM6_CTRL_pwm6_w_db0_wr(data)                                  (0x00000001&(data))
#define  MISC_PWM_PWM6_CTRL_get_pwm6l(data)                                      ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM6_CTRL_get_always01_and_pwmduty_sel(data)                   ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM6_CTRL_get_pwm6_en(data)                                    ((0x20000000&(data))>>29)
#define  MISC_PWM_PWM6_CTRL_get_pwm6_dvs_rst_en(data)                            ((0x10000000&(data))>>28)
#define  MISC_PWM_PWM6_CTRL_get_pwm6_mode(data)                                  ((0x0C000000&(data))>>26)
#define  MISC_PWM_PWM6_CTRL_get_pwm6_mplus_dim_duty_en(data)                     ((0x02000000&(data))>>25)
#define  MISC_PWM_PWM6_CTRL_get_pwm6_vs_delay_thr(data)                          ((0x01FFFFF0&(data))>>4)
#define  MISC_PWM_PWM6_CTRL_get_pwm6_mplus_dim_duty_round_en(data)               ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM6_CTRL_get_pwm6_dvs_mux(data)                               ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM6_CTRL_get_pwm6_w_db0_wr(data)                              (0x00000001&(data))

#define  MISC_PWM_PWM6_Timing_CTRL                                              0x1801B9C4
#define  MISC_PWM_PWM6_Timing_CTRL_reg_addr                                      "0xB801B9C4"
#define  MISC_PWM_PWM6_Timing_CTRL_reg                                           0xB801B9C4
#define  MISC_PWM_PWM6_Timing_CTRL_inst_addr                                     "0x0031"
#define  set_MISC_PWM_PWM6_Timing_CTRL_reg(data)                                 (*((volatile unsigned int*)MISC_PWM_PWM6_Timing_CTRL_reg)=data)
#define  get_MISC_PWM_PWM6_Timing_CTRL_reg                                       (*((volatile unsigned int*)MISC_PWM_PWM6_Timing_CTRL_reg))
#define  MISC_PWM_PWM6_Timing_CTRL_pwm6_vsync_interval_num_shift                 (14)
#define  MISC_PWM_PWM6_Timing_CTRL_pwm6_m_shift                                  (12)
#define  MISC_PWM_PWM6_Timing_CTRL_pwm6_n_shift                                  (0)
#define  MISC_PWM_PWM6_Timing_CTRL_pwm6_vsync_interval_num_mask                  (0x003FC000)
#define  MISC_PWM_PWM6_Timing_CTRL_pwm6_m_mask                                   (0x00003000)
#define  MISC_PWM_PWM6_Timing_CTRL_pwm6_n_mask                                   (0x00000FFF)
#define  MISC_PWM_PWM6_Timing_CTRL_pwm6_vsync_interval_num(data)                 (0x003FC000&((data)<<14))
#define  MISC_PWM_PWM6_Timing_CTRL_pwm6_m(data)                                  (0x00003000&((data)<<12))
#define  MISC_PWM_PWM6_Timing_CTRL_pwm6_n(data)                                  (0x00000FFF&(data))
#define  MISC_PWM_PWM6_Timing_CTRL_get_pwm6_vsync_interval_num(data)             ((0x003FC000&(data))>>14)
#define  MISC_PWM_PWM6_Timing_CTRL_get_pwm6_m(data)                              ((0x00003000&(data))>>12)
#define  MISC_PWM_PWM6_Timing_CTRL_get_pwm6_n(data)                              (0x00000FFF&(data))

#define  MISC_PWM_PWM6_DUTY_SET                                                 0x1801B9C8
#define  MISC_PWM_PWM6_DUTY_SET_reg_addr                                         "0xB801B9C8"
#define  MISC_PWM_PWM6_DUTY_SET_reg                                              0xB801B9C8
#define  MISC_PWM_PWM6_DUTY_SET_inst_addr                                        "0x0032"
#define  set_MISC_PWM_PWM6_DUTY_SET_reg(data)                                    (*((volatile unsigned int*)MISC_PWM_PWM6_DUTY_SET_reg)=data)
#define  get_MISC_PWM_PWM6_DUTY_SET_reg                                          (*((volatile unsigned int*)MISC_PWM_PWM6_DUTY_SET_reg))
#define  MISC_PWM_PWM6_DUTY_SET_pwm6_dut_shift                                   (16)
#define  MISC_PWM_PWM6_DUTY_SET_pwm6_cycle_max_shift                             (12)
#define  MISC_PWM_PWM6_DUTY_SET_pwm6_totalcnt_shift                              (0)
#define  MISC_PWM_PWM6_DUTY_SET_pwm6_dut_mask                                    (0x0FFF0000)
#define  MISC_PWM_PWM6_DUTY_SET_pwm6_cycle_max_mask                              (0x0000F000)
#define  MISC_PWM_PWM6_DUTY_SET_pwm6_totalcnt_mask                               (0x00000FFF)
#define  MISC_PWM_PWM6_DUTY_SET_pwm6_dut(data)                                   (0x0FFF0000&((data)<<16))
#define  MISC_PWM_PWM6_DUTY_SET_pwm6_cycle_max(data)                             (0x0000F000&((data)<<12))
#define  MISC_PWM_PWM6_DUTY_SET_pwm6_totalcnt(data)                              (0x00000FFF&(data))
#define  MISC_PWM_PWM6_DUTY_SET_get_pwm6_dut(data)                               ((0x0FFF0000&(data))>>16)
#define  MISC_PWM_PWM6_DUTY_SET_get_pwm6_cycle_max(data)                         ((0x0000F000&(data))>>12)
#define  MISC_PWM_PWM6_DUTY_SET_get_pwm6_totalcnt(data)                          (0x00000FFF&(data))

#define  MISC_PWM_PWM7_CTRL                                                     0x1801B9CC
#define  MISC_PWM_PWM7_CTRL_reg_addr                                             "0xB801B9CC"
#define  MISC_PWM_PWM7_CTRL_reg                                                  0xB801B9CC
#define  MISC_PWM_PWM7_CTRL_inst_addr                                            "0x0033"
#define  set_MISC_PWM_PWM7_CTRL_reg(data)                                        (*((volatile unsigned int*)MISC_PWM_PWM7_CTRL_reg)=data)
#define  get_MISC_PWM_PWM7_CTRL_reg                                              (*((volatile unsigned int*)MISC_PWM_PWM7_CTRL_reg))
#define  MISC_PWM_PWM7_CTRL_pwm7l_shift                                          (31)
#define  MISC_PWM_PWM7_CTRL_always01_and_pwmduty_sel_shift                       (30)
#define  MISC_PWM_PWM7_CTRL_pwm7_en_shift                                        (29)
#define  MISC_PWM_PWM7_CTRL_pwm7_dvs_rst_en_shift                                (28)
#define  MISC_PWM_PWM7_CTRL_pwm7_mode_shift                                      (26)
#define  MISC_PWM_PWM7_CTRL_pwm7_mplus_dim_duty_en_shift                         (25)
#define  MISC_PWM_PWM7_CTRL_pwm7_vs_delay_thr_shift                              (4)
#define  MISC_PWM_PWM7_CTRL_pwm7_mplus_dim_duty_round_en_shift                   (3)
#define  MISC_PWM_PWM7_CTRL_pwm7_dvs_mux_shift                                   (2)
#define  MISC_PWM_PWM7_CTRL_pwm7_w_db0_wr_shift                                  (0)
#define  MISC_PWM_PWM7_CTRL_pwm7l_mask                                           (0x80000000)
#define  MISC_PWM_PWM7_CTRL_always01_and_pwmduty_sel_mask                        (0x40000000)
#define  MISC_PWM_PWM7_CTRL_pwm7_en_mask                                         (0x20000000)
#define  MISC_PWM_PWM7_CTRL_pwm7_dvs_rst_en_mask                                 (0x10000000)
#define  MISC_PWM_PWM7_CTRL_pwm7_mode_mask                                       (0x0C000000)
#define  MISC_PWM_PWM7_CTRL_pwm7_mplus_dim_duty_en_mask                          (0x02000000)
#define  MISC_PWM_PWM7_CTRL_pwm7_vs_delay_thr_mask                               (0x01FFFFF0)
#define  MISC_PWM_PWM7_CTRL_pwm7_mplus_dim_duty_round_en_mask                    (0x00000008)
#define  MISC_PWM_PWM7_CTRL_pwm7_dvs_mux_mask                                    (0x00000004)
#define  MISC_PWM_PWM7_CTRL_pwm7_w_db0_wr_mask                                   (0x00000001)
#define  MISC_PWM_PWM7_CTRL_pwm7l(data)                                          (0x80000000&((data)<<31))
#define  MISC_PWM_PWM7_CTRL_always01_and_pwmduty_sel(data)                       (0x40000000&((data)<<30))
#define  MISC_PWM_PWM7_CTRL_pwm7_en(data)                                        (0x20000000&((data)<<29))
#define  MISC_PWM_PWM7_CTRL_pwm7_dvs_rst_en(data)                                (0x10000000&((data)<<28))
#define  MISC_PWM_PWM7_CTRL_pwm7_mode(data)                                      (0x0C000000&((data)<<26))
#define  MISC_PWM_PWM7_CTRL_pwm7_mplus_dim_duty_en(data)                         (0x02000000&((data)<<25))
#define  MISC_PWM_PWM7_CTRL_pwm7_vs_delay_thr(data)                              (0x01FFFFF0&((data)<<4))
#define  MISC_PWM_PWM7_CTRL_pwm7_mplus_dim_duty_round_en(data)                   (0x00000008&((data)<<3))
#define  MISC_PWM_PWM7_CTRL_pwm7_dvs_mux(data)                                   (0x00000004&((data)<<2))
#define  MISC_PWM_PWM7_CTRL_pwm7_w_db0_wr(data)                                  (0x00000001&(data))
#define  MISC_PWM_PWM7_CTRL_get_pwm7l(data)                                      ((0x80000000&(data))>>31)
#define  MISC_PWM_PWM7_CTRL_get_always01_and_pwmduty_sel(data)                   ((0x40000000&(data))>>30)
#define  MISC_PWM_PWM7_CTRL_get_pwm7_en(data)                                    ((0x20000000&(data))>>29)
#define  MISC_PWM_PWM7_CTRL_get_pwm7_dvs_rst_en(data)                            ((0x10000000&(data))>>28)
#define  MISC_PWM_PWM7_CTRL_get_pwm7_mode(data)                                  ((0x0C000000&(data))>>26)
#define  MISC_PWM_PWM7_CTRL_get_pwm7_mplus_dim_duty_en(data)                     ((0x02000000&(data))>>25)
#define  MISC_PWM_PWM7_CTRL_get_pwm7_vs_delay_thr(data)                          ((0x01FFFFF0&(data))>>4)
#define  MISC_PWM_PWM7_CTRL_get_pwm7_mplus_dim_duty_round_en(data)               ((0x00000008&(data))>>3)
#define  MISC_PWM_PWM7_CTRL_get_pwm7_dvs_mux(data)                               ((0x00000004&(data))>>2)
#define  MISC_PWM_PWM7_CTRL_get_pwm7_w_db0_wr(data)                              (0x00000001&(data))

#define  MISC_PWM_PWM7_Timing_CTRL                                              0x1801B9D0
#define  MISC_PWM_PWM7_Timing_CTRL_reg_addr                                      "0xB801B9D0"
#define  MISC_PWM_PWM7_Timing_CTRL_reg                                           0xB801B9D0
#define  MISC_PWM_PWM7_Timing_CTRL_inst_addr                                     "0x0034"
#define  set_MISC_PWM_PWM7_Timing_CTRL_reg(data)                                 (*((volatile unsigned int*)MISC_PWM_PWM7_Timing_CTRL_reg)=data)
#define  get_MISC_PWM_PWM7_Timing_CTRL_reg                                       (*((volatile unsigned int*)MISC_PWM_PWM7_Timing_CTRL_reg))
#define  MISC_PWM_PWM7_Timing_CTRL_pwm7_vsync_interval_num_shift                 (14)
#define  MISC_PWM_PWM7_Timing_CTRL_pwm7_m_shift                                  (12)
#define  MISC_PWM_PWM7_Timing_CTRL_pwm7_n_shift                                  (0)
#define  MISC_PWM_PWM7_Timing_CTRL_pwm7_vsync_interval_num_mask                  (0x003FC000)
#define  MISC_PWM_PWM7_Timing_CTRL_pwm7_m_mask                                   (0x00003000)
#define  MISC_PWM_PWM7_Timing_CTRL_pwm7_n_mask                                   (0x00000FFF)
#define  MISC_PWM_PWM7_Timing_CTRL_pwm7_vsync_interval_num(data)                 (0x003FC000&((data)<<14))
#define  MISC_PWM_PWM7_Timing_CTRL_pwm7_m(data)                                  (0x00003000&((data)<<12))
#define  MISC_PWM_PWM7_Timing_CTRL_pwm7_n(data)                                  (0x00000FFF&(data))
#define  MISC_PWM_PWM7_Timing_CTRL_get_pwm7_vsync_interval_num(data)             ((0x003FC000&(data))>>14)
#define  MISC_PWM_PWM7_Timing_CTRL_get_pwm7_m(data)                              ((0x00003000&(data))>>12)
#define  MISC_PWM_PWM7_Timing_CTRL_get_pwm7_n(data)                              (0x00000FFF&(data))

#define  MISC_PWM_PWM7_DUTY_SET                                                 0x1801B9D4
#define  MISC_PWM_PWM7_DUTY_SET_reg_addr                                         "0xB801B9D4"
#define  MISC_PWM_PWM7_DUTY_SET_reg                                              0xB801B9D4
#define  MISC_PWM_PWM7_DUTY_SET_inst_addr                                        "0x0035"
#define  set_MISC_PWM_PWM7_DUTY_SET_reg(data)                                    (*((volatile unsigned int*)MISC_PWM_PWM7_DUTY_SET_reg)=data)
#define  get_MISC_PWM_PWM7_DUTY_SET_reg                                          (*((volatile unsigned int*)MISC_PWM_PWM7_DUTY_SET_reg))
#define  MISC_PWM_PWM7_DUTY_SET_pwm7_dut_shift                                   (16)
#define  MISC_PWM_PWM7_DUTY_SET_pwm7_cycle_max_shift                             (12)
#define  MISC_PWM_PWM7_DUTY_SET_pwm7_totalcnt_shift                              (0)
#define  MISC_PWM_PWM7_DUTY_SET_pwm7_dut_mask                                    (0x0FFF0000)
#define  MISC_PWM_PWM7_DUTY_SET_pwm7_cycle_max_mask                              (0x0000F000)
#define  MISC_PWM_PWM7_DUTY_SET_pwm7_totalcnt_mask                               (0x00000FFF)
#define  MISC_PWM_PWM7_DUTY_SET_pwm7_dut(data)                                   (0x0FFF0000&((data)<<16))
#define  MISC_PWM_PWM7_DUTY_SET_pwm7_cycle_max(data)                             (0x0000F000&((data)<<12))
#define  MISC_PWM_PWM7_DUTY_SET_pwm7_totalcnt(data)                              (0x00000FFF&(data))
#define  MISC_PWM_PWM7_DUTY_SET_get_pwm7_dut(data)                               ((0x0FFF0000&(data))>>16)
#define  MISC_PWM_PWM7_DUTY_SET_get_pwm7_cycle_max(data)                         ((0x0000F000&(data))>>12)
#define  MISC_PWM_PWM7_DUTY_SET_get_pwm7_totalcnt(data)                          (0x00000FFF&(data))

#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN                                  0x1801B9D8
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_reg_addr                          "0xB801B9D8"
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_reg                               0xB801B9D8
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_inst_addr                         "0x0036"
#define  set_MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_reg(data)                     (*((volatile unsigned int*)MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_reg)=data)
#define  get_MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_reg                           (*((volatile unsigned int*)MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_reg))
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_hw_nxt_vs_period_shift            (16)
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_hw_nxt_vs_update_shift            (0)
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_hw_nxt_vs_period_mask             (0xFFFF0000)
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_hw_nxt_vs_update_mask             (0x00000003)
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_hw_nxt_vs_period(data)            (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_hw_nxt_vs_update(data)            (0x00000003&(data))
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_get_hw_nxt_vs_period(data)        ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM_HW_PREDICT_FROM_D_DOMAIN_get_hw_nxt_vs_update(data)        (0x00000003&(data))

#define  MISC_PWM_PWM_OD_MODE                                                   0x1801B9DC
#define  MISC_PWM_PWM_OD_MODE_reg_addr                                           "0xB801B9DC"
#define  MISC_PWM_PWM_OD_MODE_reg                                                0xB801B9DC
#define  MISC_PWM_PWM_OD_MODE_inst_addr                                          "0x0037"
#define  set_MISC_PWM_PWM_OD_MODE_reg(data)                                      (*((volatile unsigned int*)MISC_PWM_PWM_OD_MODE_reg)=data)
#define  get_MISC_PWM_PWM_OD_MODE_reg                                            (*((volatile unsigned int*)MISC_PWM_PWM_OD_MODE_reg))
#define  MISC_PWM_PWM_OD_MODE_pwm7_od_mode_shift                                 (11)
#define  MISC_PWM_PWM_OD_MODE_pwm6_od_mode_shift                                 (10)
#define  MISC_PWM_PWM_OD_MODE_pwm5_od_mode_shift                                 (9)
#define  MISC_PWM_PWM_OD_MODE_pwm4_od_mode_shift                                 (8)
#define  MISC_PWM_PWM_OD_MODE_pwm3_od_mode_shift                                 (7)
#define  MISC_PWM_PWM_OD_MODE_pwm2_od_mode_shift                                 (6)
#define  MISC_PWM_PWM_OD_MODE_pwm1_od_mode_shift                                 (5)
#define  MISC_PWM_PWM_OD_MODE_pwm0_od_mode_shift                                 (4)
#define  MISC_PWM_PWM_OD_MODE_pwm7_od_mode_mask                                  (0x00000800)
#define  MISC_PWM_PWM_OD_MODE_pwm6_od_mode_mask                                  (0x00000400)
#define  MISC_PWM_PWM_OD_MODE_pwm5_od_mode_mask                                  (0x00000200)
#define  MISC_PWM_PWM_OD_MODE_pwm4_od_mode_mask                                  (0x00000100)
#define  MISC_PWM_PWM_OD_MODE_pwm3_od_mode_mask                                  (0x00000080)
#define  MISC_PWM_PWM_OD_MODE_pwm2_od_mode_mask                                  (0x00000040)
#define  MISC_PWM_PWM_OD_MODE_pwm1_od_mode_mask                                  (0x00000020)
#define  MISC_PWM_PWM_OD_MODE_pwm0_od_mode_mask                                  (0x00000010)
#define  MISC_PWM_PWM_OD_MODE_pwm7_od_mode(data)                                 (0x00000800&((data)<<11))
#define  MISC_PWM_PWM_OD_MODE_pwm6_od_mode(data)                                 (0x00000400&((data)<<10))
#define  MISC_PWM_PWM_OD_MODE_pwm5_od_mode(data)                                 (0x00000200&((data)<<9))
#define  MISC_PWM_PWM_OD_MODE_pwm4_od_mode(data)                                 (0x00000100&((data)<<8))
#define  MISC_PWM_PWM_OD_MODE_pwm3_od_mode(data)                                 (0x00000080&((data)<<7))
#define  MISC_PWM_PWM_OD_MODE_pwm2_od_mode(data)                                 (0x00000040&((data)<<6))
#define  MISC_PWM_PWM_OD_MODE_pwm1_od_mode(data)                                 (0x00000020&((data)<<5))
#define  MISC_PWM_PWM_OD_MODE_pwm0_od_mode(data)                                 (0x00000010&((data)<<4))
#define  MISC_PWM_PWM_OD_MODE_get_pwm7_od_mode(data)                             ((0x00000800&(data))>>11)
#define  MISC_PWM_PWM_OD_MODE_get_pwm6_od_mode(data)                             ((0x00000400&(data))>>10)
#define  MISC_PWM_PWM_OD_MODE_get_pwm5_od_mode(data)                             ((0x00000200&(data))>>9)
#define  MISC_PWM_PWM_OD_MODE_get_pwm4_od_mode(data)                             ((0x00000100&(data))>>8)
#define  MISC_PWM_PWM_OD_MODE_get_pwm3_od_mode(data)                             ((0x00000080&(data))>>7)
#define  MISC_PWM_PWM_OD_MODE_get_pwm2_od_mode(data)                             ((0x00000040&(data))>>6)
#define  MISC_PWM_PWM_OD_MODE_get_pwm1_od_mode(data)                             ((0x00000020&(data))>>5)
#define  MISC_PWM_PWM_OD_MODE_get_pwm0_od_mode(data)                             ((0x00000010&(data))>>4)

#define  MISC_PWM_PWM_DUMMY                                                     0x1801B9E0
#define  MISC_PWM_PWM_DUMMY_reg_addr                                             "0xB801B9E0"
#define  MISC_PWM_PWM_DUMMY_reg                                                  0xB801B9E0
#define  MISC_PWM_PWM_DUMMY_inst_addr                                            "0x0038"
#define  set_MISC_PWM_PWM_DUMMY_reg(data)                                        (*((volatile unsigned int*)MISC_PWM_PWM_DUMMY_reg)=data)
#define  get_MISC_PWM_PWM_DUMMY_reg                                              (*((volatile unsigned int*)MISC_PWM_PWM_DUMMY_reg))
#define  MISC_PWM_PWM_DUMMY_dummy_31_0_shift                                     (0)
#define  MISC_PWM_PWM_DUMMY_dummy_31_0_mask                                      (0xFFFFFFFF)
#define  MISC_PWM_PWM_DUMMY_dummy_31_0(data)                                     (0xFFFFFFFF&(data))
#define  MISC_PWM_PWM_DUMMY_get_dummy_31_0(data)                                 (0xFFFFFFFF&(data))

#define  MISC_PWM_DVS_HIGH                                                      0x1801B9E4
#define  MISC_PWM_DVS_HIGH_reg_addr                                              "0xB801B9E4"
#define  MISC_PWM_DVS_HIGH_reg                                                   0xB801B9E4
#define  MISC_PWM_DVS_HIGH_inst_addr                                             "0x0039"
#define  set_MISC_PWM_DVS_HIGH_reg(data)                                         (*((volatile unsigned int*)MISC_PWM_DVS_HIGH_reg)=data)
#define  get_MISC_PWM_DVS_HIGH_reg                                               (*((volatile unsigned int*)MISC_PWM_DVS_HIGH_reg))
#define  MISC_PWM_DVS_HIGH_perid_high_shift                                      (0)
#define  MISC_PWM_DVS_HIGH_perid_high_mask                                       (0xFFFFFFFF)
#define  MISC_PWM_DVS_HIGH_perid_high(data)                                      (0xFFFFFFFF&(data))
#define  MISC_PWM_DVS_HIGH_get_perid_high(data)                                  (0xFFFFFFFF&(data))

#define  MISC_PWM_DVS_TOTAL                                                     0x1801B9E8
#define  MISC_PWM_DVS_TOTAL_reg_addr                                             "0xB801B9E8"
#define  MISC_PWM_DVS_TOTAL_reg                                                  0xB801B9E8
#define  MISC_PWM_DVS_TOTAL_inst_addr                                            "0x003A"
#define  set_MISC_PWM_DVS_TOTAL_reg(data)                                        (*((volatile unsigned int*)MISC_PWM_DVS_TOTAL_reg)=data)
#define  get_MISC_PWM_DVS_TOTAL_reg                                              (*((volatile unsigned int*)MISC_PWM_DVS_TOTAL_reg))
#define  MISC_PWM_DVS_TOTAL_perid_total_shift                                    (0)
#define  MISC_PWM_DVS_TOTAL_perid_total_mask                                     (0xFFFFFFFF)
#define  MISC_PWM_DVS_TOTAL_perid_total(data)                                    (0xFFFFFFFF&(data))
#define  MISC_PWM_DVS_TOTAL_get_perid_total(data)                                (0xFFFFFFFF&(data))

#define  MISC_PWM_GEN_DVS                                                       0x1801B9EC
#define  MISC_PWM_GEN_DVS_reg_addr                                               "0xB801B9EC"
#define  MISC_PWM_GEN_DVS_reg                                                    0xB801B9EC
#define  MISC_PWM_GEN_DVS_inst_addr                                              "0x003B"
#define  set_MISC_PWM_GEN_DVS_reg(data)                                          (*((volatile unsigned int*)MISC_PWM_GEN_DVS_reg)=data)
#define  get_MISC_PWM_GEN_DVS_reg                                                (*((volatile unsigned int*)MISC_PWM_GEN_DVS_reg))
#define  MISC_PWM_GEN_DVS_en_shift                                               (0)
#define  MISC_PWM_GEN_DVS_en_mask                                                (0x00000001)
#define  MISC_PWM_GEN_DVS_en(data)                                               (0x00000001&(data))
#define  MISC_PWM_GEN_DVS_get_en(data)                                           (0x00000001&(data))

#define  MISC_PWM_PWM_HW_PREDICT_LATCH                                          0x1801B9F0
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_reg_addr                                  "0xB801B9F0"
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_reg                                       0xB801B9F0
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_inst_addr                                 "0x003C"
#define  set_MISC_PWM_PWM_HW_PREDICT_LATCH_reg(data)                             (*((volatile unsigned int*)MISC_PWM_PWM_HW_PREDICT_LATCH_reg)=data)
#define  get_MISC_PWM_PWM_HW_PREDICT_LATCH_reg                                   (*((volatile unsigned int*)MISC_PWM_PWM_HW_PREDICT_LATCH_reg))
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_vs_period_latch_shift                     (16)
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_vs_update_latch_shift                     (0)
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_vs_period_latch_mask                      (0xFFFF0000)
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_vs_update_latch_mask                      (0x00000003)
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_vs_period_latch(data)                     (0xFFFF0000&((data)<<16))
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_vs_update_latch(data)                     (0x00000003&(data))
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_get_vs_period_latch(data)                 ((0xFFFF0000&(data))>>16)
#define  MISC_PWM_PWM_HW_PREDICT_LATCH_get_vs_update_latch(data)                 (0x00000003&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MISC_PWM register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  global_vsync_en:1;
        RBus_UInt32  pwm7_w_db0_mode:1;
        RBus_UInt32  pwm7_db0_rd_sel:1;
        RBus_UInt32  pwm7_w_db0_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm6_w_db0_mode:1;
        RBus_UInt32  pwm6_db0_rd_sel:1;
        RBus_UInt32  pwm6_w_db0_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pwm5_w_db0_mode:1;
        RBus_UInt32  pwm5_db0_rd_sel:1;
        RBus_UInt32  pwm5_w_db0_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  pwm4_w_db0_mode:1;
        RBus_UInt32  pwm4_db0_rd_sel:1;
        RBus_UInt32  pwm4_w_db0_en:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pwm3_w_db0_mode:1;
        RBus_UInt32  pwm3_db0_rd_sel:1;
        RBus_UInt32  pwm3_w_db0_en:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pwm2_w_db0_mode:1;
        RBus_UInt32  pwm2_db0_rd_sel:1;
        RBus_UInt32  pwm2_w_db0_en:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  pwm1_w_db0_mode:1;
        RBus_UInt32  pwm1_db0_rd_sel:1;
        RBus_UInt32  pwm1_w_db0_en:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  pwm0_w_db0_mode:1;
        RBus_UInt32  pwm0_db0_rd_sel:1;
        RBus_UInt32  pwm0_w_db0_en:1;
    };
}misc_pwm_pwm_db0_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pwm1_db1_rd_sel:1;
        RBus_UInt32  pwm1_w_db1_en:1;
        RBus_UInt32  pwm0_db1_rd_sel:1;
        RBus_UInt32  pwm0_w_db1_en:1;
    };
}misc_pwm_pwm_db1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0l:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm0_en:1;
        RBus_UInt32  pwm0_dvs_rst_en:1;
        RBus_UInt32  pwm0_mode:2;
        RBus_UInt32  pwm0_mplus_dim_duty_en:1;
        RBus_UInt32  pwm0_vs_delay_thr:21;
        RBus_UInt32  pwm0_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm0_dvs_mux:1;
        RBus_UInt32  pwm0_w_db1_wr:1;
        RBus_UInt32  pwm0_w_db0_wr:1;
    };
}misc_pwm_pwm0_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_duty_ratio:10;
        RBus_UInt32  pwm0_vsync_interval_num:8;
        RBus_UInt32  pwm0_m:2;
        RBus_UInt32  pwm0_n:12;
    };
}misc_pwm_pwm0_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_num:4;
        RBus_UInt32  pwm0_dut:12;
        RBus_UInt32  pwm0_cycle_max:4;
        RBus_UInt32  pwm0_totalcnt:12;
    };
}misc_pwm_pwm0_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_vs_max_period:16;
        RBus_UInt32  pwm0_vs_min_period:16;
    };
}misc_pwm_pwm0_dvs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_vs_period:16;
        RBus_UInt32  pwm0_vs_real_time:16;
    };
}misc_pwm_pwm0_dvs_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_int:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pwm0_real_totalcnt:13;
        RBus_UInt32  res3:3;
        RBus_UInt32  pwm0_real_duty:13;
    };
}misc_pwm_pwm0_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_predict_max_vs_thr:16;
        RBus_UInt32  pwm0_err2int_en:3;
        RBus_UInt32  res1:7;
        RBus_UInt32  pwm0_predict_err:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  pwm0_vs_unstable:1;
    };
}misc_pwm_pwm0_err_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_track_index:4;
        RBus_UInt32  res1:19;
        RBus_UInt32  pwm0_sw_track_int_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pwm0_track_mode:2;
        RBus_UInt32  pwm0_track_start:1;
        RBus_UInt32  pwm0_track_stop:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  pwm0_track_en:1;
    };
}misc_pwm_pwm0_track_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_phase_finishtoint_en:1;
        RBus_UInt32  pwm0_freq_finishtoint_en:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  pwm0_track_phase_finish:1;
        RBus_UInt32  pwm0_track_freq_finish:1;
        RBus_UInt32  pwm0_track_fsm:2;
    };
}misc_pwm_pwm0_track_fsm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_pti_phase:16;
        RBus_UInt32  pwm0_pti_period:16;
    };
}misc_pwm_pwm0_track_pti_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  pwm0_freq_debounce:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  pwm0_freq_max_step:12;
    };
}misc_pwm_pwm0_freq_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  res2:4;
        RBus_UInt32  pwm0_freq_min_thr:12;
    };
}misc_pwm_pwm0_freq_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  pwm0_phase_debounce:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  pwm0_phase_max_step:12;
    };
}misc_pwm_pwm0_phase_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm0_phase_max_thr:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  pwm0_phase_min_thr:12;
    };
}misc_pwm_pwm0_phase_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  pwm0_predict_index:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  pwm0_predict_en:1;
    };
}misc_pwm_pwm0_hw_predict_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1801b944_31_16:16;
        RBus_UInt32  pwm0_sw_nxt_vs_period:16;
    };
}misc_pwm_pwm0_sw_predict_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_d2p_ratio:32;
    };
}misc_pwm_pwm0_predict_ratio_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1l:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm1_en:1;
        RBus_UInt32  pwm1_dvs_rst_en:1;
        RBus_UInt32  pwm1_mode:2;
        RBus_UInt32  pwm1_mplus_dim_duty_en:1;
        RBus_UInt32  pwm1_vs_delay_thr:21;
        RBus_UInt32  pwm1_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm1_dvs_mux:1;
        RBus_UInt32  pwm1_w_db1_wr:1;
        RBus_UInt32  pwm1_w_db0_wr:1;
    };
}misc_pwm_pwm1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_duty_ratio:10;
        RBus_UInt32  pwm1_vsync_interval_num:8;
        RBus_UInt32  pwm1_m:2;
        RBus_UInt32  pwm1_n:12;
    };
}misc_pwm_pwm1_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_num:4;
        RBus_UInt32  pwm1_dut:12;
        RBus_UInt32  pwm1_cycle_max:4;
        RBus_UInt32  pwm1_totalcnt:12;
    };
}misc_pwm_pwm1_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_vs_max_period:16;
        RBus_UInt32  pwm1_vs_min_period:16;
    };
}misc_pwm_pwm1_dvs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_vs_period:16;
        RBus_UInt32  pwm1_vs_real_time:16;
    };
}misc_pwm_pwm1_dvs_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_int:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pwm1_real_totalcnt:13;
        RBus_UInt32  res3:3;
        RBus_UInt32  pwm1_real_duty:13;
    };
}misc_pwm_pwm1_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_predict_max_vs_thr:16;
        RBus_UInt32  pwm1_err2int_en:3;
        RBus_UInt32  res1:7;
        RBus_UInt32  pwm1_predict_err:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  pwm1_vs_unstable:1;
    };
}misc_pwm_pwm1_err_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_track_index:4;
        RBus_UInt32  res1:19;
        RBus_UInt32  pwm1_sw_track_int_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  pwm1_track_mode:2;
        RBus_UInt32  pwm1_track_start:1;
        RBus_UInt32  pwm1_track_stop:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  pwm1_track_en:1;
    };
}misc_pwm_pwm1_track_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_phase_finishtoint_en:1;
        RBus_UInt32  pwm1_freq_finishtoint_en:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  pwm1_track_phase_finish:1;
        RBus_UInt32  pwm1_track_freq_finish:1;
        RBus_UInt32  pwm1_track_fsm:2;
    };
}misc_pwm_pwm1_track_fsm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_pti_phase:16;
        RBus_UInt32  pwm1_pti_period:16;
    };
}misc_pwm_pwm1_track_pti_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  pwm1_freq_debounce:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  pwm1_freq_max_step:12;
    };
}misc_pwm_pwm1_freq_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  res2:4;
        RBus_UInt32  pwm1_freq_min_thr:12;
    };
}misc_pwm_pwm1_freq_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  pwm1_phase_debounce:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  pwm1_phase_max_step:12;
    };
}misc_pwm_pwm1_phase_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm1_phase_max_thr:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  pwm1_phase_min_thr:12;
    };
}misc_pwm_pwm1_phase_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  pwm1_predict_index:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  pwm1_predict_en:1;
    };
}misc_pwm_pwm1_hw_predict_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1801b988_31_16:16;
        RBus_UInt32  pwm1_sw_nxt_vs_period:16;
    };
}misc_pwm_pwm1_sw_predict_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_d2p_ratio:32;
    };
}misc_pwm_pwm1_predict_ratio_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm2l:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm2_en:1;
        RBus_UInt32  pwm2_dvs_rst_en:1;
        RBus_UInt32  pwm2_mode:2;
        RBus_UInt32  pwm2_mplus_dim_duty_en:1;
        RBus_UInt32  pwm2_vs_delay_thr:21;
        RBus_UInt32  pwm2_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm2_dvs_mux:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm2_w_db0_wr:1;
    };
}misc_pwm_pwm2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pwm2_vsync_interval_num:8;
        RBus_UInt32  pwm2_m:2;
        RBus_UInt32  pwm2_n:12;
    };
}misc_pwm_pwm2_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm2_dut:12;
        RBus_UInt32  pwm2_cycle_max:4;
        RBus_UInt32  pwm2_totalcnt:12;
    };
}misc_pwm_pwm2_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm3l:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm3_en:1;
        RBus_UInt32  pwm3_dvs_rst_en:1;
        RBus_UInt32  pwm3_mode:2;
        RBus_UInt32  pwm3_mplus_dim_duty_en:1;
        RBus_UInt32  pwm3_vs_delay_thr:21;
        RBus_UInt32  pwm3_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm3_dvs_mux:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm3_w_db0_wr:1;
    };
}misc_pwm_pwm3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pwm3_vsync_interval_num:8;
        RBus_UInt32  pwm3_m:2;
        RBus_UInt32  pwm3_n:12;
    };
}misc_pwm_pwm3_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm3_dut:12;
        RBus_UInt32  pwm3_cycle_max:4;
        RBus_UInt32  pwm3_totalcnt:12;
    };
}misc_pwm_pwm3_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm4l:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm4_en:1;
        RBus_UInt32  pwm4_dvs_rst_en:1;
        RBus_UInt32  pwm4_mode:2;
        RBus_UInt32  pwm4_mplus_dim_duty_en:1;
        RBus_UInt32  pwm4_vs_delay_thr:21;
        RBus_UInt32  pwm4_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm4_dvs_mux:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm4_w_db0_wr:1;
    };
}misc_pwm_pwm4_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pwm4_vsync_interval_num:8;
        RBus_UInt32  pwm4_m:2;
        RBus_UInt32  pwm4_n:12;
    };
}misc_pwm_pwm4_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm4_dut:12;
        RBus_UInt32  pwm4_cycle_max:4;
        RBus_UInt32  pwm4_totalcnt:12;
    };
}misc_pwm_pwm4_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm5l:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm5_en:1;
        RBus_UInt32  pwm5_dvs_rst_en:1;
        RBus_UInt32  pwm5_mode:2;
        RBus_UInt32  pwm5_mplus_dim_duty_en:1;
        RBus_UInt32  pwm5_vs_delay_thr:21;
        RBus_UInt32  pwm5_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm5_dvs_mux:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm5_w_db0_wr:1;
    };
}misc_pwm_pwm5_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pwm5_vsync_interval_num:8;
        RBus_UInt32  pwm5_m:2;
        RBus_UInt32  pwm5_n:12;
    };
}misc_pwm_pwm5_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm5_dut:12;
        RBus_UInt32  pwm5_cycle_max:4;
        RBus_UInt32  pwm5_totalcnt:12;
    };
}misc_pwm_pwm5_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm6l:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm6_en:1;
        RBus_UInt32  pwm6_dvs_rst_en:1;
        RBus_UInt32  pwm6_mode:2;
        RBus_UInt32  pwm6_mplus_dim_duty_en:1;
        RBus_UInt32  pwm6_vs_delay_thr:21;
        RBus_UInt32  pwm6_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm6_dvs_mux:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm6_w_db0_wr:1;
    };
}misc_pwm_pwm6_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pwm6_vsync_interval_num:8;
        RBus_UInt32  pwm6_m:2;
        RBus_UInt32  pwm6_n:12;
    };
}misc_pwm_pwm6_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm6_dut:12;
        RBus_UInt32  pwm6_cycle_max:4;
        RBus_UInt32  pwm6_totalcnt:12;
    };
}misc_pwm_pwm6_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm7l:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm7_en:1;
        RBus_UInt32  pwm7_dvs_rst_en:1;
        RBus_UInt32  pwm7_mode:2;
        RBus_UInt32  pwm7_mplus_dim_duty_en:1;
        RBus_UInt32  pwm7_vs_delay_thr:21;
        RBus_UInt32  pwm7_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm7_dvs_mux:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm7_w_db0_wr:1;
    };
}misc_pwm_pwm7_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  pwm7_vsync_interval_num:8;
        RBus_UInt32  pwm7_m:2;
        RBus_UInt32  pwm7_n:12;
    };
}misc_pwm_pwm7_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm7_dut:12;
        RBus_UInt32  pwm7_cycle_max:4;
        RBus_UInt32  pwm7_totalcnt:12;
    };
}misc_pwm_pwm7_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_nxt_vs_period:16;
        RBus_UInt32  res1:14;
        RBus_UInt32  hw_nxt_vs_update:2;
    };
}misc_pwm_pwm_hw_predict_from_d_domain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  pwm7_od_mode:1;
        RBus_UInt32  pwm6_od_mode:1;
        RBus_UInt32  pwm5_od_mode:1;
        RBus_UInt32  pwm4_od_mode:1;
        RBus_UInt32  pwm3_od_mode:1;
        RBus_UInt32  pwm2_od_mode:1;
        RBus_UInt32  pwm1_od_mode:1;
        RBus_UInt32  pwm0_od_mode:1;
        RBus_UInt32  res2:4;
    };
}misc_pwm_pwm_od_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1801b9e0_31_0:32;
    };
}misc_pwm_pwm_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  perid_high:32;
    };
}misc_pwm_dvs_high_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  perid_total:32;
    };
}misc_pwm_dvs_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  en:1;
    };
}misc_pwm_gen_dvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_period_latch:16;
        RBus_UInt32  res1:14;
        RBus_UInt32  vs_update_latch:2;
    };
}misc_pwm_pwm_hw_predict_latch_RBUS;

#else //apply LITTLE_ENDIAN

//======MISC_PWM register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_w_db0_en:1;
        RBus_UInt32  pwm0_db0_rd_sel:1;
        RBus_UInt32  pwm0_w_db0_mode:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm1_w_db0_en:1;
        RBus_UInt32  pwm1_db0_rd_sel:1;
        RBus_UInt32  pwm1_w_db0_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  pwm2_w_db0_en:1;
        RBus_UInt32  pwm2_db0_rd_sel:1;
        RBus_UInt32  pwm2_w_db0_mode:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  pwm3_w_db0_en:1;
        RBus_UInt32  pwm3_db0_rd_sel:1;
        RBus_UInt32  pwm3_w_db0_mode:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  pwm4_w_db0_en:1;
        RBus_UInt32  pwm4_db0_rd_sel:1;
        RBus_UInt32  pwm4_w_db0_mode:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  pwm5_w_db0_en:1;
        RBus_UInt32  pwm5_db0_rd_sel:1;
        RBus_UInt32  pwm5_w_db0_mode:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  pwm6_w_db0_en:1;
        RBus_UInt32  pwm6_db0_rd_sel:1;
        RBus_UInt32  pwm6_w_db0_mode:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  pwm7_w_db0_en:1;
        RBus_UInt32  pwm7_db0_rd_sel:1;
        RBus_UInt32  pwm7_w_db0_mode:1;
        RBus_UInt32  global_vsync_en:1;
    };
}misc_pwm_pwm_db0_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_w_db1_en:1;
        RBus_UInt32  pwm0_db1_rd_sel:1;
        RBus_UInt32  pwm1_w_db1_en:1;
        RBus_UInt32  pwm1_db1_rd_sel:1;
        RBus_UInt32  res1:28;
    };
}misc_pwm_pwm_db1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_w_db0_wr:1;
        RBus_UInt32  pwm0_w_db1_wr:1;
        RBus_UInt32  pwm0_dvs_mux:1;
        RBus_UInt32  pwm0_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm0_vs_delay_thr:21;
        RBus_UInt32  pwm0_mplus_dim_duty_en:1;
        RBus_UInt32  pwm0_mode:2;
        RBus_UInt32  pwm0_dvs_rst_en:1;
        RBus_UInt32  pwm0_en:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm0l:1;
    };
}misc_pwm_pwm0_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_n:12;
        RBus_UInt32  pwm0_m:2;
        RBus_UInt32  pwm0_vsync_interval_num:8;
        RBus_UInt32  pwm0_duty_ratio:10;
    };
}misc_pwm_pwm0_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_totalcnt:12;
        RBus_UInt32  pwm0_cycle_max:4;
        RBus_UInt32  pwm0_dut:12;
        RBus_UInt32  pwm0_num:4;
    };
}misc_pwm_pwm0_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_vs_min_period:16;
        RBus_UInt32  pwm0_vs_max_period:16;
    };
}misc_pwm_pwm0_dvs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_vs_real_time:16;
        RBus_UInt32  pwm0_vs_period:16;
    };
}misc_pwm_pwm0_dvs_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_real_duty:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  pwm0_real_totalcnt:13;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  pwm0_int:1;
    };
}misc_pwm_pwm0_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_vs_unstable:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  pwm0_predict_err:2;
        RBus_UInt32  res2:7;
        RBus_UInt32  pwm0_err2int_en:3;
        RBus_UInt32  pwm0_predict_max_vs_thr:16;
    };
}misc_pwm_pwm0_err_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_track_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm0_track_stop:1;
        RBus_UInt32  pwm0_track_start:1;
        RBus_UInt32  pwm0_track_mode:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pwm0_sw_track_int_en:1;
        RBus_UInt32  res3:19;
        RBus_UInt32  pwm0_track_index:4;
    };
}misc_pwm_pwm0_track_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_track_fsm:2;
        RBus_UInt32  pwm0_track_freq_finish:1;
        RBus_UInt32  pwm0_track_phase_finish:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  pwm0_freq_finishtoint_en:1;
        RBus_UInt32  pwm0_phase_finishtoint_en:1;
    };
}misc_pwm_pwm0_track_fsm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_pti_period:16;
        RBus_UInt32  pwm0_pti_phase:16;
    };
}misc_pwm_pwm0_track_pti_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_freq_max_step:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm0_freq_debounce:4;
        RBus_UInt32  res2:12;
    };
}misc_pwm_pwm0_freq_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_freq_min_thr:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  res2:16;
    };
}misc_pwm_pwm0_freq_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_phase_max_step:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm0_phase_debounce:4;
        RBus_UInt32  res2:12;
    };
}misc_pwm_pwm0_phase_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_phase_min_thr:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm0_phase_max_thr:12;
        RBus_UInt32  res2:4;
    };
}misc_pwm_pwm0_phase_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_predict_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  pwm0_predict_index:4;
        RBus_UInt32  res2:24;
    };
}misc_pwm_pwm0_hw_predict_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_sw_nxt_vs_period:16;
        RBus_UInt32  dummy1801b944_31_16:16;
    };
}misc_pwm_pwm0_sw_predict_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm0_d2p_ratio:32;
    };
}misc_pwm_pwm0_predict_ratio_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_w_db0_wr:1;
        RBus_UInt32  pwm1_w_db1_wr:1;
        RBus_UInt32  pwm1_dvs_mux:1;
        RBus_UInt32  pwm1_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm1_vs_delay_thr:21;
        RBus_UInt32  pwm1_mplus_dim_duty_en:1;
        RBus_UInt32  pwm1_mode:2;
        RBus_UInt32  pwm1_dvs_rst_en:1;
        RBus_UInt32  pwm1_en:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm1l:1;
    };
}misc_pwm_pwm1_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_n:12;
        RBus_UInt32  pwm1_m:2;
        RBus_UInt32  pwm1_vsync_interval_num:8;
        RBus_UInt32  pwm1_duty_ratio:10;
    };
}misc_pwm_pwm1_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_totalcnt:12;
        RBus_UInt32  pwm1_cycle_max:4;
        RBus_UInt32  pwm1_dut:12;
        RBus_UInt32  pwm1_num:4;
    };
}misc_pwm_pwm1_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_vs_min_period:16;
        RBus_UInt32  pwm1_vs_max_period:16;
    };
}misc_pwm_pwm1_dvs_period_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_vs_real_time:16;
        RBus_UInt32  pwm1_vs_period:16;
    };
}misc_pwm_pwm1_dvs_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_real_duty:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  pwm1_real_totalcnt:13;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  pwm1_int:1;
    };
}misc_pwm_pwm1_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_vs_unstable:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  pwm1_predict_err:2;
        RBus_UInt32  res2:7;
        RBus_UInt32  pwm1_err2int_en:3;
        RBus_UInt32  pwm1_predict_max_vs_thr:16;
    };
}misc_pwm_pwm1_err_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_track_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm1_track_stop:1;
        RBus_UInt32  pwm1_track_start:1;
        RBus_UInt32  pwm1_track_mode:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  pwm1_sw_track_int_en:1;
        RBus_UInt32  res3:19;
        RBus_UInt32  pwm1_track_index:4;
    };
}misc_pwm_pwm1_track_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_track_fsm:2;
        RBus_UInt32  pwm1_track_freq_finish:1;
        RBus_UInt32  pwm1_track_phase_finish:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  pwm1_freq_finishtoint_en:1;
        RBus_UInt32  pwm1_phase_finishtoint_en:1;
    };
}misc_pwm_pwm1_track_fsm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_pti_period:16;
        RBus_UInt32  pwm1_pti_phase:16;
    };
}misc_pwm_pwm1_track_pti_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_freq_max_step:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm1_freq_debounce:4;
        RBus_UInt32  res2:12;
    };
}misc_pwm_pwm1_freq_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_freq_min_thr:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  res2:16;
    };
}misc_pwm_pwm1_freq_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_phase_max_step:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm1_phase_debounce:4;
        RBus_UInt32  res2:12;
    };
}misc_pwm_pwm1_phase_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_phase_min_thr:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm1_phase_max_thr:12;
        RBus_UInt32  res2:4;
    };
}misc_pwm_pwm1_phase_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_predict_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  pwm1_predict_index:4;
        RBus_UInt32  res2:24;
    };
}misc_pwm_pwm1_hw_predict_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_sw_nxt_vs_period:16;
        RBus_UInt32  dummy1801b988_31_16:16;
    };
}misc_pwm_pwm1_sw_predict_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm1_d2p_ratio:32;
    };
}misc_pwm_pwm1_predict_ratio_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm2_w_db0_wr:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm2_dvs_mux:1;
        RBus_UInt32  pwm2_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm2_vs_delay_thr:21;
        RBus_UInt32  pwm2_mplus_dim_duty_en:1;
        RBus_UInt32  pwm2_mode:2;
        RBus_UInt32  pwm2_dvs_rst_en:1;
        RBus_UInt32  pwm2_en:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm2l:1;
    };
}misc_pwm_pwm2_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm2_n:12;
        RBus_UInt32  pwm2_m:2;
        RBus_UInt32  pwm2_vsync_interval_num:8;
        RBus_UInt32  res1:10;
    };
}misc_pwm_pwm2_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm2_totalcnt:12;
        RBus_UInt32  pwm2_cycle_max:4;
        RBus_UInt32  pwm2_dut:12;
        RBus_UInt32  res1:4;
    };
}misc_pwm_pwm2_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm3_w_db0_wr:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm3_dvs_mux:1;
        RBus_UInt32  pwm3_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm3_vs_delay_thr:21;
        RBus_UInt32  pwm3_mplus_dim_duty_en:1;
        RBus_UInt32  pwm3_mode:2;
        RBus_UInt32  pwm3_dvs_rst_en:1;
        RBus_UInt32  pwm3_en:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm3l:1;
    };
}misc_pwm_pwm3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm3_n:12;
        RBus_UInt32  pwm3_m:2;
        RBus_UInt32  pwm3_vsync_interval_num:8;
        RBus_UInt32  res1:10;
    };
}misc_pwm_pwm3_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm3_totalcnt:12;
        RBus_UInt32  pwm3_cycle_max:4;
        RBus_UInt32  pwm3_dut:12;
        RBus_UInt32  res1:4;
    };
}misc_pwm_pwm3_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm4_w_db0_wr:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm4_dvs_mux:1;
        RBus_UInt32  pwm4_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm4_vs_delay_thr:21;
        RBus_UInt32  pwm4_mplus_dim_duty_en:1;
        RBus_UInt32  pwm4_mode:2;
        RBus_UInt32  pwm4_dvs_rst_en:1;
        RBus_UInt32  pwm4_en:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm4l:1;
    };
}misc_pwm_pwm4_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm4_n:12;
        RBus_UInt32  pwm4_m:2;
        RBus_UInt32  pwm4_vsync_interval_num:8;
        RBus_UInt32  res1:10;
    };
}misc_pwm_pwm4_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm4_totalcnt:12;
        RBus_UInt32  pwm4_cycle_max:4;
        RBus_UInt32  pwm4_dut:12;
        RBus_UInt32  res1:4;
    };
}misc_pwm_pwm4_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm5_w_db0_wr:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm5_dvs_mux:1;
        RBus_UInt32  pwm5_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm5_vs_delay_thr:21;
        RBus_UInt32  pwm5_mplus_dim_duty_en:1;
        RBus_UInt32  pwm5_mode:2;
        RBus_UInt32  pwm5_dvs_rst_en:1;
        RBus_UInt32  pwm5_en:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm5l:1;
    };
}misc_pwm_pwm5_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm5_n:12;
        RBus_UInt32  pwm5_m:2;
        RBus_UInt32  pwm5_vsync_interval_num:8;
        RBus_UInt32  res1:10;
    };
}misc_pwm_pwm5_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm5_totalcnt:12;
        RBus_UInt32  pwm5_cycle_max:4;
        RBus_UInt32  pwm5_dut:12;
        RBus_UInt32  res1:4;
    };
}misc_pwm_pwm5_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm6_w_db0_wr:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm6_dvs_mux:1;
        RBus_UInt32  pwm6_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm6_vs_delay_thr:21;
        RBus_UInt32  pwm6_mplus_dim_duty_en:1;
        RBus_UInt32  pwm6_mode:2;
        RBus_UInt32  pwm6_dvs_rst_en:1;
        RBus_UInt32  pwm6_en:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm6l:1;
    };
}misc_pwm_pwm6_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm6_n:12;
        RBus_UInt32  pwm6_m:2;
        RBus_UInt32  pwm6_vsync_interval_num:8;
        RBus_UInt32  res1:10;
    };
}misc_pwm_pwm6_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm6_totalcnt:12;
        RBus_UInt32  pwm6_cycle_max:4;
        RBus_UInt32  pwm6_dut:12;
        RBus_UInt32  res1:4;
    };
}misc_pwm_pwm6_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm7_w_db0_wr:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  pwm7_dvs_mux:1;
        RBus_UInt32  pwm7_mplus_dim_duty_round_en:1;
        RBus_UInt32  pwm7_vs_delay_thr:21;
        RBus_UInt32  pwm7_mplus_dim_duty_en:1;
        RBus_UInt32  pwm7_mode:2;
        RBus_UInt32  pwm7_dvs_rst_en:1;
        RBus_UInt32  pwm7_en:1;
        RBus_UInt32  always01_and_pwmduty_sel:1;
        RBus_UInt32  pwm7l:1;
    };
}misc_pwm_pwm7_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm7_n:12;
        RBus_UInt32  pwm7_m:2;
        RBus_UInt32  pwm7_vsync_interval_num:8;
        RBus_UInt32  res1:10;
    };
}misc_pwm_pwm7_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pwm7_totalcnt:12;
        RBus_UInt32  pwm7_cycle_max:4;
        RBus_UInt32  pwm7_dut:12;
        RBus_UInt32  res1:4;
    };
}misc_pwm_pwm7_duty_set_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_nxt_vs_update:2;
        RBus_UInt32  res1:14;
        RBus_UInt32  hw_nxt_vs_period:16;
    };
}misc_pwm_pwm_hw_predict_from_d_domain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pwm0_od_mode:1;
        RBus_UInt32  pwm1_od_mode:1;
        RBus_UInt32  pwm2_od_mode:1;
        RBus_UInt32  pwm3_od_mode:1;
        RBus_UInt32  pwm4_od_mode:1;
        RBus_UInt32  pwm5_od_mode:1;
        RBus_UInt32  pwm6_od_mode:1;
        RBus_UInt32  pwm7_od_mode:1;
        RBus_UInt32  res2:20;
    };
}misc_pwm_pwm_od_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1801b9e0_31_0:32;
    };
}misc_pwm_pwm_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  perid_high:32;
    };
}misc_pwm_dvs_high_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  perid_total:32;
    };
}misc_pwm_dvs_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  res1:31;
    };
}misc_pwm_gen_dvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vs_update_latch:2;
        RBus_UInt32  res1:14;
        RBus_UInt32  vs_period_latch:16;
    };
}misc_pwm_pwm_hw_predict_latch_RBUS;




#endif 


#endif 
