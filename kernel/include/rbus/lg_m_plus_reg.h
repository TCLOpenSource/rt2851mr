/**
* @file Merlin5-DesignSpec-D-Domain_LGD_M_plus
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_LG_M_PLUS_REG_H_
#define _RBUS_LG_M_PLUS_REG_H_

#include "rbus_types.h"



//  LG_M_PLUS Register Address
#define  LG_M_PLUS_M_plus_ctl                                                   0x18028F00
#define  LG_M_PLUS_M_plus_ctl_reg_addr                                           "0xB8028F00"
#define  LG_M_PLUS_M_plus_ctl_reg                                                0xB8028F00
#define  LG_M_PLUS_M_plus_ctl_inst_addr                                          "0x0000"
#define  set_LG_M_PLUS_M_plus_ctl_reg(data)                                      (*((volatile unsigned int*)LG_M_PLUS_M_plus_ctl_reg)=data)
#define  get_LG_M_PLUS_M_plus_ctl_reg                                            (*((volatile unsigned int*)LG_M_PLUS_M_plus_ctl_reg))
#define  LG_M_PLUS_M_plus_ctl_wpr_on_shift                                       (31)
#define  LG_M_PLUS_M_plus_ctl_opc_on_shift                                       (30)
#define  LG_M_PLUS_M_plus_ctl_mce_on_shift                                       (29)
#define  LG_M_PLUS_M_plus_ctl_bypass_on_shift                                    (28)
#define  LG_M_PLUS_M_plus_ctl_dummy_27_shift                                     (27)
#define  LG_M_PLUS_M_plus_ctl_mode_sel_shift                                     (24)
#define  LG_M_PLUS_M_plus_ctl_test_mode_shift                                    (23)
#define  LG_M_PLUS_M_plus_ctl_dummy_22_0_shift                                   (0)
#define  LG_M_PLUS_M_plus_ctl_wpr_on_mask                                        (0x80000000)
#define  LG_M_PLUS_M_plus_ctl_opc_on_mask                                        (0x40000000)
#define  LG_M_PLUS_M_plus_ctl_mce_on_mask                                        (0x20000000)
#define  LG_M_PLUS_M_plus_ctl_bypass_on_mask                                     (0x10000000)
#define  LG_M_PLUS_M_plus_ctl_dummy_27_mask                                      (0x08000000)
#define  LG_M_PLUS_M_plus_ctl_mode_sel_mask                                      (0x07000000)
#define  LG_M_PLUS_M_plus_ctl_test_mode_mask                                     (0x00800000)
#define  LG_M_PLUS_M_plus_ctl_dummy_22_0_mask                                    (0x007FFFFF)
#define  LG_M_PLUS_M_plus_ctl_wpr_on(data)                                       (0x80000000&((data)<<31))
#define  LG_M_PLUS_M_plus_ctl_opc_on(data)                                       (0x40000000&((data)<<30))
#define  LG_M_PLUS_M_plus_ctl_mce_on(data)                                       (0x20000000&((data)<<29))
#define  LG_M_PLUS_M_plus_ctl_bypass_on(data)                                    (0x10000000&((data)<<28))
#define  LG_M_PLUS_M_plus_ctl_dummy_27(data)                                     (0x08000000&((data)<<27))
#define  LG_M_PLUS_M_plus_ctl_mode_sel(data)                                     (0x07000000&((data)<<24))
#define  LG_M_PLUS_M_plus_ctl_test_mode(data)                                    (0x00800000&((data)<<23))
#define  LG_M_PLUS_M_plus_ctl_dummy_22_0(data)                                   (0x007FFFFF&(data))
#define  LG_M_PLUS_M_plus_ctl_get_wpr_on(data)                                   ((0x80000000&(data))>>31)
#define  LG_M_PLUS_M_plus_ctl_get_opc_on(data)                                   ((0x40000000&(data))>>30)
#define  LG_M_PLUS_M_plus_ctl_get_mce_on(data)                                   ((0x20000000&(data))>>29)
#define  LG_M_PLUS_M_plus_ctl_get_bypass_on(data)                                ((0x10000000&(data))>>28)
#define  LG_M_PLUS_M_plus_ctl_get_dummy_27(data)                                 ((0x08000000&(data))>>27)
#define  LG_M_PLUS_M_plus_ctl_get_mode_sel(data)                                 ((0x07000000&(data))>>24)
#define  LG_M_PLUS_M_plus_ctl_get_test_mode(data)                                ((0x00800000&(data))>>23)
#define  LG_M_PLUS_M_plus_ctl_get_dummy_22_0(data)                               (0x007FFFFF&(data))

#define  LG_M_PLUS_M_plus_dimming_duty_ctrl                                     0x18028F08
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_reg_addr                             "0xB8028F08"
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_reg                                  0xB8028F08
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_inst_addr                            "0x0001"
#define  set_LG_M_PLUS_M_plus_dimming_duty_ctrl_reg(data)                        (*((volatile unsigned int*)LG_M_PLUS_M_plus_dimming_duty_ctrl_reg)=data)
#define  get_LG_M_PLUS_M_plus_dimming_duty_ctrl_reg                              (*((volatile unsigned int*)LG_M_PLUS_M_plus_dimming_duty_ctrl_reg))
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_force_en_shift          (31)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_force_value_shift       (16)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_gain_shift              (8)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_shift_shift             (0)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_force_en_mask           (0x80000000)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_force_value_mask        (0x1FFF0000)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_gain_mask               (0x00003F00)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_shift_mask              (0x000000FF)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_force_en(data)          (0x80000000&((data)<<31))
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_force_value(data)       (0x1FFF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_gain(data)              (0x00003F00&((data)<<8))
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_dimming_duty_shift(data)             (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_get_dimming_duty_force_en(data)      ((0x80000000&(data))>>31)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_get_dimming_duty_force_value(data)   ((0x1FFF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_get_dimming_duty_gain(data)          ((0x00003F00&(data))>>8)
#define  LG_M_PLUS_M_plus_dimming_duty_ctrl_get_dimming_duty_shift(data)         (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_dimming_duty_read                                     0x18028F0C
#define  LG_M_PLUS_M_plus_dimming_duty_read_reg_addr                             "0xB8028F0C"
#define  LG_M_PLUS_M_plus_dimming_duty_read_reg                                  0xB8028F0C
#define  LG_M_PLUS_M_plus_dimming_duty_read_inst_addr                            "0x0002"
#define  set_LG_M_PLUS_M_plus_dimming_duty_read_reg(data)                        (*((volatile unsigned int*)LG_M_PLUS_M_plus_dimming_duty_read_reg)=data)
#define  get_LG_M_PLUS_M_plus_dimming_duty_read_reg                              (*((volatile unsigned int*)LG_M_PLUS_M_plus_dimming_duty_read_reg))
#define  LG_M_PLUS_M_plus_dimming_duty_read_irq_en_shift                         (31)
#define  LG_M_PLUS_M_plus_dimming_duty_read_dimming_duty_update_shift            (30)
#define  LG_M_PLUS_M_plus_dimming_duty_read_frame_cnt_shift                      (16)
#define  LG_M_PLUS_M_plus_dimming_duty_read_dimming_duty_shift                   (0)
#define  LG_M_PLUS_M_plus_dimming_duty_read_irq_en_mask                          (0x80000000)
#define  LG_M_PLUS_M_plus_dimming_duty_read_dimming_duty_update_mask             (0x40000000)
#define  LG_M_PLUS_M_plus_dimming_duty_read_frame_cnt_mask                       (0x00FF0000)
#define  LG_M_PLUS_M_plus_dimming_duty_read_dimming_duty_mask                    (0x00001FFF)
#define  LG_M_PLUS_M_plus_dimming_duty_read_irq_en(data)                         (0x80000000&((data)<<31))
#define  LG_M_PLUS_M_plus_dimming_duty_read_dimming_duty_update(data)            (0x40000000&((data)<<30))
#define  LG_M_PLUS_M_plus_dimming_duty_read_frame_cnt(data)                      (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_dimming_duty_read_dimming_duty(data)                   (0x00001FFF&(data))
#define  LG_M_PLUS_M_plus_dimming_duty_read_get_irq_en(data)                     ((0x80000000&(data))>>31)
#define  LG_M_PLUS_M_plus_dimming_duty_read_get_dimming_duty_update(data)        ((0x40000000&(data))>>30)
#define  LG_M_PLUS_M_plus_dimming_duty_read_get_frame_cnt(data)                  ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_dimming_duty_read_get_dimming_duty(data)               (0x00001FFF&(data))

#define  LG_M_PLUS_M_plus_tp_bist0                                              0x18028F10
#define  LG_M_PLUS_M_plus_tp_bist0_reg_addr                                      "0xB8028F10"
#define  LG_M_PLUS_M_plus_tp_bist0_reg                                           0xB8028F10
#define  LG_M_PLUS_M_plus_tp_bist0_inst_addr                                     "0x0003"
#define  set_LG_M_PLUS_M_plus_tp_bist0_reg(data)                                 (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist0_reg)=data)
#define  get_LG_M_PLUS_M_plus_tp_bist0_reg                                       (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist0_reg))
#define  LG_M_PLUS_M_plus_tp_bist0_rme_7_shift                                   (31)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_6_shift                                   (30)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_5_shift                                   (29)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_4_shift                                   (28)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_3_shift                                   (27)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_2_shift                                   (26)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_1_shift                                   (25)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_0_shift                                   (24)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_7_shift                         (23)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_6_shift                         (22)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_5_shift                         (21)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_4_shift                         (20)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_3_shift                         (19)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_2_shift                         (18)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_1_shift                         (17)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_0_shift                         (16)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_7_shift                             (15)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_6_shift                             (14)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_5_shift                             (13)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_4_shift                             (12)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_3_shift                             (11)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_2_shift                             (10)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_1_shift                             (9)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_0_shift                             (8)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_7_shift                               (7)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_6_shift                               (6)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_5_shift                               (5)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_4_shift                               (4)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_3_shift                               (3)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_2_shift                               (2)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_1_shift                               (1)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_0_shift                               (0)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_7_mask                                    (0x80000000)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_6_mask                                    (0x40000000)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_5_mask                                    (0x20000000)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_4_mask                                    (0x10000000)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_3_mask                                    (0x08000000)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_2_mask                                    (0x04000000)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_1_mask                                    (0x02000000)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_0_mask                                    (0x01000000)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_7_mask                          (0x00800000)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_6_mask                          (0x00400000)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_5_mask                          (0x00200000)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_4_mask                          (0x00100000)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_3_mask                          (0x00080000)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_2_mask                          (0x00040000)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_1_mask                          (0x00020000)
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_0_mask                          (0x00010000)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_7_mask                              (0x00008000)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_6_mask                              (0x00004000)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_5_mask                              (0x00002000)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_4_mask                              (0x00001000)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_3_mask                              (0x00000800)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_2_mask                              (0x00000400)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_1_mask                              (0x00000200)
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_0_mask                              (0x00000100)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_7_mask                                (0x00000080)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_6_mask                                (0x00000040)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_5_mask                                (0x00000020)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_4_mask                                (0x00000010)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_3_mask                                (0x00000008)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_2_mask                                (0x00000004)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_1_mask                                (0x00000002)
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_0_mask                                (0x00000001)
#define  LG_M_PLUS_M_plus_tp_bist0_rme_7(data)                                   (0x80000000&((data)<<31))
#define  LG_M_PLUS_M_plus_tp_bist0_rme_6(data)                                   (0x40000000&((data)<<30))
#define  LG_M_PLUS_M_plus_tp_bist0_rme_5(data)                                   (0x20000000&((data)<<29))
#define  LG_M_PLUS_M_plus_tp_bist0_rme_4(data)                                   (0x10000000&((data)<<28))
#define  LG_M_PLUS_M_plus_tp_bist0_rme_3(data)                                   (0x08000000&((data)<<27))
#define  LG_M_PLUS_M_plus_tp_bist0_rme_2(data)                                   (0x04000000&((data)<<26))
#define  LG_M_PLUS_M_plus_tp_bist0_rme_1(data)                                   (0x02000000&((data)<<25))
#define  LG_M_PLUS_M_plus_tp_bist0_rme_0(data)                                   (0x01000000&((data)<<24))
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_7(data)                         (0x00800000&((data)<<23))
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_6(data)                         (0x00400000&((data)<<22))
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_5(data)                         (0x00200000&((data)<<21))
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_4(data)                         (0x00100000&((data)<<20))
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_3(data)                         (0x00080000&((data)<<19))
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_2(data)                         (0x00040000&((data)<<18))
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_1(data)                         (0x00020000&((data)<<17))
#define  LG_M_PLUS_M_plus_tp_bist0_drf_bist_fail_0(data)                         (0x00010000&((data)<<16))
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_7(data)                             (0x00008000&((data)<<15))
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_6(data)                             (0x00004000&((data)<<14))
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_5(data)                             (0x00002000&((data)<<13))
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_4(data)                             (0x00001000&((data)<<12))
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_3(data)                             (0x00000800&((data)<<11))
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_2(data)                             (0x00000400&((data)<<10))
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_1(data)                             (0x00000200&((data)<<9))
#define  LG_M_PLUS_M_plus_tp_bist0_bist_fail_0(data)                             (0x00000100&((data)<<8))
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_7(data)                               (0x00000080&((data)<<7))
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_6(data)                               (0x00000040&((data)<<6))
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_5(data)                               (0x00000020&((data)<<5))
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_4(data)                               (0x00000010&((data)<<4))
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_3(data)                               (0x00000008&((data)<<3))
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_2(data)                               (0x00000004&((data)<<2))
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_1(data)                               (0x00000002&((data)<<1))
#define  LG_M_PLUS_M_plus_tp_bist0_testrwm_0(data)                               (0x00000001&(data))
#define  LG_M_PLUS_M_plus_tp_bist0_get_rme_7(data)                               ((0x80000000&(data))>>31)
#define  LG_M_PLUS_M_plus_tp_bist0_get_rme_6(data)                               ((0x40000000&(data))>>30)
#define  LG_M_PLUS_M_plus_tp_bist0_get_rme_5(data)                               ((0x20000000&(data))>>29)
#define  LG_M_PLUS_M_plus_tp_bist0_get_rme_4(data)                               ((0x10000000&(data))>>28)
#define  LG_M_PLUS_M_plus_tp_bist0_get_rme_3(data)                               ((0x08000000&(data))>>27)
#define  LG_M_PLUS_M_plus_tp_bist0_get_rme_2(data)                               ((0x04000000&(data))>>26)
#define  LG_M_PLUS_M_plus_tp_bist0_get_rme_1(data)                               ((0x02000000&(data))>>25)
#define  LG_M_PLUS_M_plus_tp_bist0_get_rme_0(data)                               ((0x01000000&(data))>>24)
#define  LG_M_PLUS_M_plus_tp_bist0_get_drf_bist_fail_7(data)                     ((0x00800000&(data))>>23)
#define  LG_M_PLUS_M_plus_tp_bist0_get_drf_bist_fail_6(data)                     ((0x00400000&(data))>>22)
#define  LG_M_PLUS_M_plus_tp_bist0_get_drf_bist_fail_5(data)                     ((0x00200000&(data))>>21)
#define  LG_M_PLUS_M_plus_tp_bist0_get_drf_bist_fail_4(data)                     ((0x00100000&(data))>>20)
#define  LG_M_PLUS_M_plus_tp_bist0_get_drf_bist_fail_3(data)                     ((0x00080000&(data))>>19)
#define  LG_M_PLUS_M_plus_tp_bist0_get_drf_bist_fail_2(data)                     ((0x00040000&(data))>>18)
#define  LG_M_PLUS_M_plus_tp_bist0_get_drf_bist_fail_1(data)                     ((0x00020000&(data))>>17)
#define  LG_M_PLUS_M_plus_tp_bist0_get_drf_bist_fail_0(data)                     ((0x00010000&(data))>>16)
#define  LG_M_PLUS_M_plus_tp_bist0_get_bist_fail_7(data)                         ((0x00008000&(data))>>15)
#define  LG_M_PLUS_M_plus_tp_bist0_get_bist_fail_6(data)                         ((0x00004000&(data))>>14)
#define  LG_M_PLUS_M_plus_tp_bist0_get_bist_fail_5(data)                         ((0x00002000&(data))>>13)
#define  LG_M_PLUS_M_plus_tp_bist0_get_bist_fail_4(data)                         ((0x00001000&(data))>>12)
#define  LG_M_PLUS_M_plus_tp_bist0_get_bist_fail_3(data)                         ((0x00000800&(data))>>11)
#define  LG_M_PLUS_M_plus_tp_bist0_get_bist_fail_2(data)                         ((0x00000400&(data))>>10)
#define  LG_M_PLUS_M_plus_tp_bist0_get_bist_fail_1(data)                         ((0x00000200&(data))>>9)
#define  LG_M_PLUS_M_plus_tp_bist0_get_bist_fail_0(data)                         ((0x00000100&(data))>>8)
#define  LG_M_PLUS_M_plus_tp_bist0_get_testrwm_7(data)                           ((0x00000080&(data))>>7)
#define  LG_M_PLUS_M_plus_tp_bist0_get_testrwm_6(data)                           ((0x00000040&(data))>>6)
#define  LG_M_PLUS_M_plus_tp_bist0_get_testrwm_5(data)                           ((0x00000020&(data))>>5)
#define  LG_M_PLUS_M_plus_tp_bist0_get_testrwm_4(data)                           ((0x00000010&(data))>>4)
#define  LG_M_PLUS_M_plus_tp_bist0_get_testrwm_3(data)                           ((0x00000008&(data))>>3)
#define  LG_M_PLUS_M_plus_tp_bist0_get_testrwm_2(data)                           ((0x00000004&(data))>>2)
#define  LG_M_PLUS_M_plus_tp_bist0_get_testrwm_1(data)                           ((0x00000002&(data))>>1)
#define  LG_M_PLUS_M_plus_tp_bist0_get_testrwm_0(data)                           (0x00000001&(data))

#define  LG_M_PLUS_M_plus_tp_bist1                                              0x18028F14
#define  LG_M_PLUS_M_plus_tp_bist1_reg_addr                                      "0xB8028F14"
#define  LG_M_PLUS_M_plus_tp_bist1_reg                                           0xB8028F14
#define  LG_M_PLUS_M_plus_tp_bist1_inst_addr                                     "0x0004"
#define  set_LG_M_PLUS_M_plus_tp_bist1_reg(data)                                 (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist1_reg)=data)
#define  get_LG_M_PLUS_M_plus_tp_bist1_reg                                       (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist1_reg))
#define  LG_M_PLUS_M_plus_tp_bist1_rm_7_shift                                    (28)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_6_shift                                    (24)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_5_shift                                    (20)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_4_shift                                    (16)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_3_shift                                    (12)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_2_shift                                    (8)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_1_shift                                    (4)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_0_shift                                    (0)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_7_mask                                     (0xF0000000)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_6_mask                                     (0x0F000000)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_5_mask                                     (0x00F00000)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_4_mask                                     (0x000F0000)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_3_mask                                     (0x0000F000)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_2_mask                                     (0x00000F00)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_1_mask                                     (0x000000F0)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_0_mask                                     (0x0000000F)
#define  LG_M_PLUS_M_plus_tp_bist1_rm_7(data)                                    (0xF0000000&((data)<<28))
#define  LG_M_PLUS_M_plus_tp_bist1_rm_6(data)                                    (0x0F000000&((data)<<24))
#define  LG_M_PLUS_M_plus_tp_bist1_rm_5(data)                                    (0x00F00000&((data)<<20))
#define  LG_M_PLUS_M_plus_tp_bist1_rm_4(data)                                    (0x000F0000&((data)<<16))
#define  LG_M_PLUS_M_plus_tp_bist1_rm_3(data)                                    (0x0000F000&((data)<<12))
#define  LG_M_PLUS_M_plus_tp_bist1_rm_2(data)                                    (0x00000F00&((data)<<8))
#define  LG_M_PLUS_M_plus_tp_bist1_rm_1(data)                                    (0x000000F0&((data)<<4))
#define  LG_M_PLUS_M_plus_tp_bist1_rm_0(data)                                    (0x0000000F&(data))
#define  LG_M_PLUS_M_plus_tp_bist1_get_rm_7(data)                                ((0xF0000000&(data))>>28)
#define  LG_M_PLUS_M_plus_tp_bist1_get_rm_6(data)                                ((0x0F000000&(data))>>24)
#define  LG_M_PLUS_M_plus_tp_bist1_get_rm_5(data)                                ((0x00F00000&(data))>>20)
#define  LG_M_PLUS_M_plus_tp_bist1_get_rm_4(data)                                ((0x000F0000&(data))>>16)
#define  LG_M_PLUS_M_plus_tp_bist1_get_rm_3(data)                                ((0x0000F000&(data))>>12)
#define  LG_M_PLUS_M_plus_tp_bist1_get_rm_2(data)                                ((0x00000F00&(data))>>8)
#define  LG_M_PLUS_M_plus_tp_bist1_get_rm_1(data)                                ((0x000000F0&(data))>>4)
#define  LG_M_PLUS_M_plus_tp_bist1_get_rm_0(data)                                (0x0000000F&(data))

#define  LG_M_PLUS_M_plus_tp_bist2                                              0x18028F18
#define  LG_M_PLUS_M_plus_tp_bist2_reg_addr                                      "0xB8028F18"
#define  LG_M_PLUS_M_plus_tp_bist2_reg                                           0xB8028F18
#define  LG_M_PLUS_M_plus_tp_bist2_inst_addr                                     "0x0005"
#define  set_LG_M_PLUS_M_plus_tp_bist2_reg(data)                                 (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist2_reg)=data)
#define  get_LG_M_PLUS_M_plus_tp_bist2_reg                                       (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist2_reg))
#define  LG_M_PLUS_M_plus_tp_bist2_rme_15_shift                                  (31)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_14_shift                                  (30)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_13_shift                                  (29)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_12_shift                                  (28)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_11_shift                                  (27)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_10_shift                                  (26)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_9_shift                                   (25)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_8_shift                                   (24)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_15_shift                        (23)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_14_shift                        (22)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_13_shift                        (21)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_12_shift                        (20)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_11_shift                        (19)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_10_shift                        (18)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_9_shift                         (17)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_8_shift                         (16)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_15_shift                            (15)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_14_shift                            (14)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_13_shift                            (13)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_12_shift                            (12)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_11_shift                            (11)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_10_shift                            (10)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_9_shift                             (9)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_8_shift                             (8)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_15_shift                              (7)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_14_shift                              (6)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_13_shift                              (5)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_12_shift                              (4)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_11_shift                              (3)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_10_shift                              (2)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_9_shift                               (1)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_8_shift                               (0)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_15_mask                                   (0x80000000)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_14_mask                                   (0x40000000)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_13_mask                                   (0x20000000)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_12_mask                                   (0x10000000)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_11_mask                                   (0x08000000)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_10_mask                                   (0x04000000)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_9_mask                                    (0x02000000)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_8_mask                                    (0x01000000)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_15_mask                         (0x00800000)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_14_mask                         (0x00400000)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_13_mask                         (0x00200000)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_12_mask                         (0x00100000)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_11_mask                         (0x00080000)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_10_mask                         (0x00040000)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_9_mask                          (0x00020000)
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_8_mask                          (0x00010000)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_15_mask                             (0x00008000)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_14_mask                             (0x00004000)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_13_mask                             (0x00002000)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_12_mask                             (0x00001000)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_11_mask                             (0x00000800)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_10_mask                             (0x00000400)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_9_mask                              (0x00000200)
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_8_mask                              (0x00000100)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_15_mask                               (0x00000080)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_14_mask                               (0x00000040)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_13_mask                               (0x00000020)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_12_mask                               (0x00000010)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_11_mask                               (0x00000008)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_10_mask                               (0x00000004)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_9_mask                                (0x00000002)
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_8_mask                                (0x00000001)
#define  LG_M_PLUS_M_plus_tp_bist2_rme_15(data)                                  (0x80000000&((data)<<31))
#define  LG_M_PLUS_M_plus_tp_bist2_rme_14(data)                                  (0x40000000&((data)<<30))
#define  LG_M_PLUS_M_plus_tp_bist2_rme_13(data)                                  (0x20000000&((data)<<29))
#define  LG_M_PLUS_M_plus_tp_bist2_rme_12(data)                                  (0x10000000&((data)<<28))
#define  LG_M_PLUS_M_plus_tp_bist2_rme_11(data)                                  (0x08000000&((data)<<27))
#define  LG_M_PLUS_M_plus_tp_bist2_rme_10(data)                                  (0x04000000&((data)<<26))
#define  LG_M_PLUS_M_plus_tp_bist2_rme_9(data)                                   (0x02000000&((data)<<25))
#define  LG_M_PLUS_M_plus_tp_bist2_rme_8(data)                                   (0x01000000&((data)<<24))
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_15(data)                        (0x00800000&((data)<<23))
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_14(data)                        (0x00400000&((data)<<22))
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_13(data)                        (0x00200000&((data)<<21))
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_12(data)                        (0x00100000&((data)<<20))
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_11(data)                        (0x00080000&((data)<<19))
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_10(data)                        (0x00040000&((data)<<18))
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_9(data)                         (0x00020000&((data)<<17))
#define  LG_M_PLUS_M_plus_tp_bist2_drf_bist_fail_8(data)                         (0x00010000&((data)<<16))
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_15(data)                            (0x00008000&((data)<<15))
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_14(data)                            (0x00004000&((data)<<14))
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_13(data)                            (0x00002000&((data)<<13))
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_12(data)                            (0x00001000&((data)<<12))
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_11(data)                            (0x00000800&((data)<<11))
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_10(data)                            (0x00000400&((data)<<10))
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_9(data)                             (0x00000200&((data)<<9))
#define  LG_M_PLUS_M_plus_tp_bist2_bist_fail_8(data)                             (0x00000100&((data)<<8))
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_15(data)                              (0x00000080&((data)<<7))
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_14(data)                              (0x00000040&((data)<<6))
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_13(data)                              (0x00000020&((data)<<5))
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_12(data)                              (0x00000010&((data)<<4))
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_11(data)                              (0x00000008&((data)<<3))
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_10(data)                              (0x00000004&((data)<<2))
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_9(data)                               (0x00000002&((data)<<1))
#define  LG_M_PLUS_M_plus_tp_bist2_testrwm_8(data)                               (0x00000001&(data))
#define  LG_M_PLUS_M_plus_tp_bist2_get_rme_15(data)                              ((0x80000000&(data))>>31)
#define  LG_M_PLUS_M_plus_tp_bist2_get_rme_14(data)                              ((0x40000000&(data))>>30)
#define  LG_M_PLUS_M_plus_tp_bist2_get_rme_13(data)                              ((0x20000000&(data))>>29)
#define  LG_M_PLUS_M_plus_tp_bist2_get_rme_12(data)                              ((0x10000000&(data))>>28)
#define  LG_M_PLUS_M_plus_tp_bist2_get_rme_11(data)                              ((0x08000000&(data))>>27)
#define  LG_M_PLUS_M_plus_tp_bist2_get_rme_10(data)                              ((0x04000000&(data))>>26)
#define  LG_M_PLUS_M_plus_tp_bist2_get_rme_9(data)                               ((0x02000000&(data))>>25)
#define  LG_M_PLUS_M_plus_tp_bist2_get_rme_8(data)                               ((0x01000000&(data))>>24)
#define  LG_M_PLUS_M_plus_tp_bist2_get_drf_bist_fail_15(data)                    ((0x00800000&(data))>>23)
#define  LG_M_PLUS_M_plus_tp_bist2_get_drf_bist_fail_14(data)                    ((0x00400000&(data))>>22)
#define  LG_M_PLUS_M_plus_tp_bist2_get_drf_bist_fail_13(data)                    ((0x00200000&(data))>>21)
#define  LG_M_PLUS_M_plus_tp_bist2_get_drf_bist_fail_12(data)                    ((0x00100000&(data))>>20)
#define  LG_M_PLUS_M_plus_tp_bist2_get_drf_bist_fail_11(data)                    ((0x00080000&(data))>>19)
#define  LG_M_PLUS_M_plus_tp_bist2_get_drf_bist_fail_10(data)                    ((0x00040000&(data))>>18)
#define  LG_M_PLUS_M_plus_tp_bist2_get_drf_bist_fail_9(data)                     ((0x00020000&(data))>>17)
#define  LG_M_PLUS_M_plus_tp_bist2_get_drf_bist_fail_8(data)                     ((0x00010000&(data))>>16)
#define  LG_M_PLUS_M_plus_tp_bist2_get_bist_fail_15(data)                        ((0x00008000&(data))>>15)
#define  LG_M_PLUS_M_plus_tp_bist2_get_bist_fail_14(data)                        ((0x00004000&(data))>>14)
#define  LG_M_PLUS_M_plus_tp_bist2_get_bist_fail_13(data)                        ((0x00002000&(data))>>13)
#define  LG_M_PLUS_M_plus_tp_bist2_get_bist_fail_12(data)                        ((0x00001000&(data))>>12)
#define  LG_M_PLUS_M_plus_tp_bist2_get_bist_fail_11(data)                        ((0x00000800&(data))>>11)
#define  LG_M_PLUS_M_plus_tp_bist2_get_bist_fail_10(data)                        ((0x00000400&(data))>>10)
#define  LG_M_PLUS_M_plus_tp_bist2_get_bist_fail_9(data)                         ((0x00000200&(data))>>9)
#define  LG_M_PLUS_M_plus_tp_bist2_get_bist_fail_8(data)                         ((0x00000100&(data))>>8)
#define  LG_M_PLUS_M_plus_tp_bist2_get_testrwm_15(data)                          ((0x00000080&(data))>>7)
#define  LG_M_PLUS_M_plus_tp_bist2_get_testrwm_14(data)                          ((0x00000040&(data))>>6)
#define  LG_M_PLUS_M_plus_tp_bist2_get_testrwm_13(data)                          ((0x00000020&(data))>>5)
#define  LG_M_PLUS_M_plus_tp_bist2_get_testrwm_12(data)                          ((0x00000010&(data))>>4)
#define  LG_M_PLUS_M_plus_tp_bist2_get_testrwm_11(data)                          ((0x00000008&(data))>>3)
#define  LG_M_PLUS_M_plus_tp_bist2_get_testrwm_10(data)                          ((0x00000004&(data))>>2)
#define  LG_M_PLUS_M_plus_tp_bist2_get_testrwm_9(data)                           ((0x00000002&(data))>>1)
#define  LG_M_PLUS_M_plus_tp_bist2_get_testrwm_8(data)                           (0x00000001&(data))

#define  LG_M_PLUS_M_plus_tp_bist3                                              0x18028F1C
#define  LG_M_PLUS_M_plus_tp_bist3_reg_addr                                      "0xB8028F1C"
#define  LG_M_PLUS_M_plus_tp_bist3_reg                                           0xB8028F1C
#define  LG_M_PLUS_M_plus_tp_bist3_inst_addr                                     "0x0006"
#define  set_LG_M_PLUS_M_plus_tp_bist3_reg(data)                                 (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist3_reg)=data)
#define  get_LG_M_PLUS_M_plus_tp_bist3_reg                                       (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist3_reg))
#define  LG_M_PLUS_M_plus_tp_bist3_rm_15_shift                                   (28)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_14_shift                                   (24)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_13_shift                                   (20)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_12_shift                                   (16)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_11_shift                                   (12)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_10_shift                                   (8)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_9_shift                                    (4)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_8_shift                                    (0)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_15_mask                                    (0xF0000000)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_14_mask                                    (0x0F000000)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_13_mask                                    (0x00F00000)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_12_mask                                    (0x000F0000)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_11_mask                                    (0x0000F000)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_10_mask                                    (0x00000F00)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_9_mask                                     (0x000000F0)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_8_mask                                     (0x0000000F)
#define  LG_M_PLUS_M_plus_tp_bist3_rm_15(data)                                   (0xF0000000&((data)<<28))
#define  LG_M_PLUS_M_plus_tp_bist3_rm_14(data)                                   (0x0F000000&((data)<<24))
#define  LG_M_PLUS_M_plus_tp_bist3_rm_13(data)                                   (0x00F00000&((data)<<20))
#define  LG_M_PLUS_M_plus_tp_bist3_rm_12(data)                                   (0x000F0000&((data)<<16))
#define  LG_M_PLUS_M_plus_tp_bist3_rm_11(data)                                   (0x0000F000&((data)<<12))
#define  LG_M_PLUS_M_plus_tp_bist3_rm_10(data)                                   (0x00000F00&((data)<<8))
#define  LG_M_PLUS_M_plus_tp_bist3_rm_9(data)                                    (0x000000F0&((data)<<4))
#define  LG_M_PLUS_M_plus_tp_bist3_rm_8(data)                                    (0x0000000F&(data))
#define  LG_M_PLUS_M_plus_tp_bist3_get_rm_15(data)                               ((0xF0000000&(data))>>28)
#define  LG_M_PLUS_M_plus_tp_bist3_get_rm_14(data)                               ((0x0F000000&(data))>>24)
#define  LG_M_PLUS_M_plus_tp_bist3_get_rm_13(data)                               ((0x00F00000&(data))>>20)
#define  LG_M_PLUS_M_plus_tp_bist3_get_rm_12(data)                               ((0x000F0000&(data))>>16)
#define  LG_M_PLUS_M_plus_tp_bist3_get_rm_11(data)                               ((0x0000F000&(data))>>12)
#define  LG_M_PLUS_M_plus_tp_bist3_get_rm_10(data)                               ((0x00000F00&(data))>>8)
#define  LG_M_PLUS_M_plus_tp_bist3_get_rm_9(data)                                ((0x000000F0&(data))>>4)
#define  LG_M_PLUS_M_plus_tp_bist3_get_rm_8(data)                                (0x0000000F&(data))

#define  LG_M_PLUS_M_plus_tp_bist4                                              0x18028F20
#define  LG_M_PLUS_M_plus_tp_bist4_reg_addr                                      "0xB8028F20"
#define  LG_M_PLUS_M_plus_tp_bist4_reg                                           0xB8028F20
#define  LG_M_PLUS_M_plus_tp_bist4_inst_addr                                     "0x0007"
#define  set_LG_M_PLUS_M_plus_tp_bist4_reg(data)                                 (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist4_reg)=data)
#define  get_LG_M_PLUS_M_plus_tp_bist4_reg                                       (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist4_reg))
#define  LG_M_PLUS_M_plus_tp_bist4_rme_20_shift                                  (28)
#define  LG_M_PLUS_M_plus_tp_bist4_rme_19_shift                                  (27)
#define  LG_M_PLUS_M_plus_tp_bist4_rme_18_shift                                  (26)
#define  LG_M_PLUS_M_plus_tp_bist4_rme_17_shift                                  (25)
#define  LG_M_PLUS_M_plus_tp_bist4_rme_16_shift                                  (24)
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_20_shift                        (20)
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_19_shift                        (19)
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_18_shift                        (18)
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_17_shift                        (17)
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_16_shift                        (16)
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_20_shift                            (12)
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_19_shift                            (11)
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_18_shift                            (10)
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_17_shift                            (9)
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_16_shift                            (8)
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_20_shift                              (4)
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_19_shift                              (3)
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_18_shift                              (2)
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_17_shift                              (1)
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_16_shift                              (0)
#define  LG_M_PLUS_M_plus_tp_bist4_rme_20_mask                                   (0x10000000)
#define  LG_M_PLUS_M_plus_tp_bist4_rme_19_mask                                   (0x08000000)
#define  LG_M_PLUS_M_plus_tp_bist4_rme_18_mask                                   (0x04000000)
#define  LG_M_PLUS_M_plus_tp_bist4_rme_17_mask                                   (0x02000000)
#define  LG_M_PLUS_M_plus_tp_bist4_rme_16_mask                                   (0x01000000)
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_20_mask                         (0x00100000)
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_19_mask                         (0x00080000)
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_18_mask                         (0x00040000)
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_17_mask                         (0x00020000)
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_16_mask                         (0x00010000)
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_20_mask                             (0x00001000)
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_19_mask                             (0x00000800)
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_18_mask                             (0x00000400)
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_17_mask                             (0x00000200)
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_16_mask                             (0x00000100)
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_20_mask                               (0x00000010)
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_19_mask                               (0x00000008)
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_18_mask                               (0x00000004)
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_17_mask                               (0x00000002)
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_16_mask                               (0x00000001)
#define  LG_M_PLUS_M_plus_tp_bist4_rme_20(data)                                  (0x10000000&((data)<<28))
#define  LG_M_PLUS_M_plus_tp_bist4_rme_19(data)                                  (0x08000000&((data)<<27))
#define  LG_M_PLUS_M_plus_tp_bist4_rme_18(data)                                  (0x04000000&((data)<<26))
#define  LG_M_PLUS_M_plus_tp_bist4_rme_17(data)                                  (0x02000000&((data)<<25))
#define  LG_M_PLUS_M_plus_tp_bist4_rme_16(data)                                  (0x01000000&((data)<<24))
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_20(data)                        (0x00100000&((data)<<20))
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_19(data)                        (0x00080000&((data)<<19))
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_18(data)                        (0x00040000&((data)<<18))
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_17(data)                        (0x00020000&((data)<<17))
#define  LG_M_PLUS_M_plus_tp_bist4_drf_bist_fail_16(data)                        (0x00010000&((data)<<16))
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_20(data)                            (0x00001000&((data)<<12))
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_19(data)                            (0x00000800&((data)<<11))
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_18(data)                            (0x00000400&((data)<<10))
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_17(data)                            (0x00000200&((data)<<9))
#define  LG_M_PLUS_M_plus_tp_bist4_bist_fail_16(data)                            (0x00000100&((data)<<8))
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_20(data)                              (0x00000010&((data)<<4))
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_19(data)                              (0x00000008&((data)<<3))
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_18(data)                              (0x00000004&((data)<<2))
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_17(data)                              (0x00000002&((data)<<1))
#define  LG_M_PLUS_M_plus_tp_bist4_testrwm_16(data)                              (0x00000001&(data))
#define  LG_M_PLUS_M_plus_tp_bist4_get_rme_20(data)                              ((0x10000000&(data))>>28)
#define  LG_M_PLUS_M_plus_tp_bist4_get_rme_19(data)                              ((0x08000000&(data))>>27)
#define  LG_M_PLUS_M_plus_tp_bist4_get_rme_18(data)                              ((0x04000000&(data))>>26)
#define  LG_M_PLUS_M_plus_tp_bist4_get_rme_17(data)                              ((0x02000000&(data))>>25)
#define  LG_M_PLUS_M_plus_tp_bist4_get_rme_16(data)                              ((0x01000000&(data))>>24)
#define  LG_M_PLUS_M_plus_tp_bist4_get_drf_bist_fail_20(data)                    ((0x00100000&(data))>>20)
#define  LG_M_PLUS_M_plus_tp_bist4_get_drf_bist_fail_19(data)                    ((0x00080000&(data))>>19)
#define  LG_M_PLUS_M_plus_tp_bist4_get_drf_bist_fail_18(data)                    ((0x00040000&(data))>>18)
#define  LG_M_PLUS_M_plus_tp_bist4_get_drf_bist_fail_17(data)                    ((0x00020000&(data))>>17)
#define  LG_M_PLUS_M_plus_tp_bist4_get_drf_bist_fail_16(data)                    ((0x00010000&(data))>>16)
#define  LG_M_PLUS_M_plus_tp_bist4_get_bist_fail_20(data)                        ((0x00001000&(data))>>12)
#define  LG_M_PLUS_M_plus_tp_bist4_get_bist_fail_19(data)                        ((0x00000800&(data))>>11)
#define  LG_M_PLUS_M_plus_tp_bist4_get_bist_fail_18(data)                        ((0x00000400&(data))>>10)
#define  LG_M_PLUS_M_plus_tp_bist4_get_bist_fail_17(data)                        ((0x00000200&(data))>>9)
#define  LG_M_PLUS_M_plus_tp_bist4_get_bist_fail_16(data)                        ((0x00000100&(data))>>8)
#define  LG_M_PLUS_M_plus_tp_bist4_get_testrwm_20(data)                          ((0x00000010&(data))>>4)
#define  LG_M_PLUS_M_plus_tp_bist4_get_testrwm_19(data)                          ((0x00000008&(data))>>3)
#define  LG_M_PLUS_M_plus_tp_bist4_get_testrwm_18(data)                          ((0x00000004&(data))>>2)
#define  LG_M_PLUS_M_plus_tp_bist4_get_testrwm_17(data)                          ((0x00000002&(data))>>1)
#define  LG_M_PLUS_M_plus_tp_bist4_get_testrwm_16(data)                          (0x00000001&(data))

#define  LG_M_PLUS_M_plus_tp_bist5                                              0x18028F24
#define  LG_M_PLUS_M_plus_tp_bist5_reg_addr                                      "0xB8028F24"
#define  LG_M_PLUS_M_plus_tp_bist5_reg                                           0xB8028F24
#define  LG_M_PLUS_M_plus_tp_bist5_inst_addr                                     "0x0008"
#define  set_LG_M_PLUS_M_plus_tp_bist5_reg(data)                                 (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist5_reg)=data)
#define  get_LG_M_PLUS_M_plus_tp_bist5_reg                                       (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist5_reg))
#define  LG_M_PLUS_M_plus_tp_bist5_ls_shift                                      (31)
#define  LG_M_PLUS_M_plus_tp_bist5_rm_20_shift                                   (16)
#define  LG_M_PLUS_M_plus_tp_bist5_rm_19_shift                                   (12)
#define  LG_M_PLUS_M_plus_tp_bist5_rm_18_shift                                   (8)
#define  LG_M_PLUS_M_plus_tp_bist5_rm_17_shift                                   (4)
#define  LG_M_PLUS_M_plus_tp_bist5_rm_16_shift                                   (0)
#define  LG_M_PLUS_M_plus_tp_bist5_ls_mask                                       (0x80000000)
#define  LG_M_PLUS_M_plus_tp_bist5_rm_20_mask                                    (0x000F0000)
#define  LG_M_PLUS_M_plus_tp_bist5_rm_19_mask                                    (0x0000F000)
#define  LG_M_PLUS_M_plus_tp_bist5_rm_18_mask                                    (0x00000F00)
#define  LG_M_PLUS_M_plus_tp_bist5_rm_17_mask                                    (0x000000F0)
#define  LG_M_PLUS_M_plus_tp_bist5_rm_16_mask                                    (0x0000000F)
#define  LG_M_PLUS_M_plus_tp_bist5_ls(data)                                      (0x80000000&((data)<<31))
#define  LG_M_PLUS_M_plus_tp_bist5_rm_20(data)                                   (0x000F0000&((data)<<16))
#define  LG_M_PLUS_M_plus_tp_bist5_rm_19(data)                                   (0x0000F000&((data)<<12))
#define  LG_M_PLUS_M_plus_tp_bist5_rm_18(data)                                   (0x00000F00&((data)<<8))
#define  LG_M_PLUS_M_plus_tp_bist5_rm_17(data)                                   (0x000000F0&((data)<<4))
#define  LG_M_PLUS_M_plus_tp_bist5_rm_16(data)                                   (0x0000000F&(data))
#define  LG_M_PLUS_M_plus_tp_bist5_get_ls(data)                                  ((0x80000000&(data))>>31)
#define  LG_M_PLUS_M_plus_tp_bist5_get_rm_20(data)                               ((0x000F0000&(data))>>16)
#define  LG_M_PLUS_M_plus_tp_bist5_get_rm_19(data)                               ((0x0000F000&(data))>>12)
#define  LG_M_PLUS_M_plus_tp_bist5_get_rm_18(data)                               ((0x00000F00&(data))>>8)
#define  LG_M_PLUS_M_plus_tp_bist5_get_rm_17(data)                               ((0x000000F0&(data))>>4)
#define  LG_M_PLUS_M_plus_tp_bist5_get_rm_16(data)                               (0x0000000F&(data))

#define  LG_M_PLUS_M_plus_tp_bist6                                              0x18028F34
#define  LG_M_PLUS_M_plus_tp_bist6_reg_addr                                      "0xB8028F34"
#define  LG_M_PLUS_M_plus_tp_bist6_reg                                           0xB8028F34
#define  LG_M_PLUS_M_plus_tp_bist6_inst_addr                                     "0x0009"
#define  set_LG_M_PLUS_M_plus_tp_bist6_reg(data)                                 (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist6_reg)=data)
#define  get_LG_M_PLUS_M_plus_tp_bist6_reg                                       (*((volatile unsigned int*)LG_M_PLUS_M_plus_tp_bist6_reg))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_20_shift                                (20)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_19_shift                                (19)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_18_shift                                (18)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_17_shift                                (17)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_16_shift                                (16)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_15_shift                                (15)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_14_shift                                (14)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_13_shift                                (13)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_12_shift                                (12)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_11_shift                                (11)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_10_shift                                (10)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_9_shift                                 (9)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_8_shift                                 (8)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_7_shift                                 (7)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_6_shift                                 (6)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_5_shift                                 (5)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_4_shift                                 (4)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_3_shift                                 (3)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_2_shift                                 (2)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_1_shift                                 (1)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_0_shift                                 (0)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_20_mask                                 (0x00100000)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_19_mask                                 (0x00080000)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_18_mask                                 (0x00040000)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_17_mask                                 (0x00020000)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_16_mask                                 (0x00010000)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_15_mask                                 (0x00008000)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_14_mask                                 (0x00004000)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_13_mask                                 (0x00002000)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_12_mask                                 (0x00001000)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_11_mask                                 (0x00000800)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_10_mask                                 (0x00000400)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_9_mask                                  (0x00000200)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_8_mask                                  (0x00000100)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_7_mask                                  (0x00000080)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_6_mask                                  (0x00000040)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_5_mask                                  (0x00000020)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_4_mask                                  (0x00000010)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_3_mask                                  (0x00000008)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_2_mask                                  (0x00000004)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_1_mask                                  (0x00000002)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_0_mask                                  (0x00000001)
#define  LG_M_PLUS_M_plus_tp_bist6_test1_20(data)                                (0x00100000&((data)<<20))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_19(data)                                (0x00080000&((data)<<19))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_18(data)                                (0x00040000&((data)<<18))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_17(data)                                (0x00020000&((data)<<17))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_16(data)                                (0x00010000&((data)<<16))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_15(data)                                (0x00008000&((data)<<15))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_14(data)                                (0x00004000&((data)<<14))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_13(data)                                (0x00002000&((data)<<13))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_12(data)                                (0x00001000&((data)<<12))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_11(data)                                (0x00000800&((data)<<11))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_10(data)                                (0x00000400&((data)<<10))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_9(data)                                 (0x00000200&((data)<<9))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_8(data)                                 (0x00000100&((data)<<8))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_7(data)                                 (0x00000080&((data)<<7))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_6(data)                                 (0x00000040&((data)<<6))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_5(data)                                 (0x00000020&((data)<<5))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_4(data)                                 (0x00000010&((data)<<4))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_3(data)                                 (0x00000008&((data)<<3))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_2(data)                                 (0x00000004&((data)<<2))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_1(data)                                 (0x00000002&((data)<<1))
#define  LG_M_PLUS_M_plus_tp_bist6_test1_0(data)                                 (0x00000001&(data))
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_20(data)                            ((0x00100000&(data))>>20)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_19(data)                            ((0x00080000&(data))>>19)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_18(data)                            ((0x00040000&(data))>>18)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_17(data)                            ((0x00020000&(data))>>17)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_16(data)                            ((0x00010000&(data))>>16)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_15(data)                            ((0x00008000&(data))>>15)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_14(data)                            ((0x00004000&(data))>>14)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_13(data)                            ((0x00002000&(data))>>13)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_12(data)                            ((0x00001000&(data))>>12)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_11(data)                            ((0x00000800&(data))>>11)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_10(data)                            ((0x00000400&(data))>>10)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_9(data)                             ((0x00000200&(data))>>9)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_8(data)                             ((0x00000100&(data))>>8)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_7(data)                             ((0x00000080&(data))>>7)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_6(data)                             ((0x00000040&(data))>>6)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_5(data)                             ((0x00000020&(data))>>5)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_4(data)                             ((0x00000010&(data))>>4)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_3(data)                             ((0x00000008&(data))>>3)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_2(data)                             ((0x00000004&(data))>>2)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_1(data)                             ((0x00000002&(data))>>1)
#define  LG_M_PLUS_M_plus_tp_bist6_get_test1_0(data)                             (0x00000001&(data))

#define  LG_M_PLUS_M_plus_rom_bist0                                             0x18028F2C
#define  LG_M_PLUS_M_plus_rom_bist0_reg_addr                                     "0xB8028F2C"
#define  LG_M_PLUS_M_plus_rom_bist0_reg                                          0xB8028F2C
#define  LG_M_PLUS_M_plus_rom_bist0_inst_addr                                    "0x000A"
#define  set_LG_M_PLUS_M_plus_rom_bist0_reg(data)                                (*((volatile unsigned int*)LG_M_PLUS_M_plus_rom_bist0_reg)=data)
#define  get_LG_M_PLUS_M_plus_rom_bist0_reg                                      (*((volatile unsigned int*)LG_M_PLUS_M_plus_rom_bist0_reg))
#define  LG_M_PLUS_M_plus_rom_bist0_rme_r2_shift                                 (30)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_g2_shift                                 (29)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_b2_shift                                 (28)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_r1_shift                                 (27)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_g1_shift                                 (26)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_b1_shift                                 (25)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_r2_shift                                  (20)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_g2_shift                                  (16)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_b2_shift                                  (12)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_r1_shift                                  (8)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_g1_shift                                  (4)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_b1_shift                                  (0)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_r2_mask                                  (0x40000000)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_g2_mask                                  (0x20000000)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_b2_mask                                  (0x10000000)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_r1_mask                                  (0x08000000)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_g1_mask                                  (0x04000000)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_b1_mask                                  (0x02000000)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_r2_mask                                   (0x00F00000)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_g2_mask                                   (0x000F0000)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_b2_mask                                   (0x0000F000)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_r1_mask                                   (0x00000F00)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_g1_mask                                   (0x000000F0)
#define  LG_M_PLUS_M_plus_rom_bist0_rm_b1_mask                                   (0x0000000F)
#define  LG_M_PLUS_M_plus_rom_bist0_rme_r2(data)                                 (0x40000000&((data)<<30))
#define  LG_M_PLUS_M_plus_rom_bist0_rme_g2(data)                                 (0x20000000&((data)<<29))
#define  LG_M_PLUS_M_plus_rom_bist0_rme_b2(data)                                 (0x10000000&((data)<<28))
#define  LG_M_PLUS_M_plus_rom_bist0_rme_r1(data)                                 (0x08000000&((data)<<27))
#define  LG_M_PLUS_M_plus_rom_bist0_rme_g1(data)                                 (0x04000000&((data)<<26))
#define  LG_M_PLUS_M_plus_rom_bist0_rme_b1(data)                                 (0x02000000&((data)<<25))
#define  LG_M_PLUS_M_plus_rom_bist0_rm_r2(data)                                  (0x00F00000&((data)<<20))
#define  LG_M_PLUS_M_plus_rom_bist0_rm_g2(data)                                  (0x000F0000&((data)<<16))
#define  LG_M_PLUS_M_plus_rom_bist0_rm_b2(data)                                  (0x0000F000&((data)<<12))
#define  LG_M_PLUS_M_plus_rom_bist0_rm_r1(data)                                  (0x00000F00&((data)<<8))
#define  LG_M_PLUS_M_plus_rom_bist0_rm_g1(data)                                  (0x000000F0&((data)<<4))
#define  LG_M_PLUS_M_plus_rom_bist0_rm_b1(data)                                  (0x0000000F&(data))
#define  LG_M_PLUS_M_plus_rom_bist0_get_rme_r2(data)                             ((0x40000000&(data))>>30)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rme_g2(data)                             ((0x20000000&(data))>>29)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rme_b2(data)                             ((0x10000000&(data))>>28)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rme_r1(data)                             ((0x08000000&(data))>>27)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rme_g1(data)                             ((0x04000000&(data))>>26)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rme_b1(data)                             ((0x02000000&(data))>>25)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rm_r2(data)                              ((0x00F00000&(data))>>20)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rm_g2(data)                              ((0x000F0000&(data))>>16)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rm_b2(data)                              ((0x0000F000&(data))>>12)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rm_r1(data)                              ((0x00000F00&(data))>>8)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rm_g1(data)                              ((0x000000F0&(data))>>4)
#define  LG_M_PLUS_M_plus_rom_bist0_get_rm_b1(data)                              (0x0000000F&(data))

#define  LG_M_PLUS_M_plus_rom_bist1                                             0x18028F30
#define  LG_M_PLUS_M_plus_rom_bist1_reg_addr                                     "0xB8028F30"
#define  LG_M_PLUS_M_plus_rom_bist1_reg                                          0xB8028F30
#define  LG_M_PLUS_M_plus_rom_bist1_inst_addr                                    "0x000B"
#define  set_LG_M_PLUS_M_plus_rom_bist1_reg(data)                                (*((volatile unsigned int*)LG_M_PLUS_M_plus_rom_bist1_reg)=data)
#define  get_LG_M_PLUS_M_plus_rom_bist1_reg                                      (*((volatile unsigned int*)LG_M_PLUS_M_plus_rom_bist1_reg))
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_r2_shift                               (30)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_g2_shift                               (29)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_b2_shift                               (28)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_r1_shift                               (27)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_g1_shift                               (26)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_b1_shift                               (25)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_r2_shift                                (20)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_g2_shift                                (16)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_b2_shift                                (12)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_r1_shift                                (8)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_g1_shift                                (4)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_b1_shift                                (0)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_r2_mask                                (0x40000000)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_g2_mask                                (0x20000000)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_b2_mask                                (0x10000000)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_r1_mask                                (0x08000000)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_g1_mask                                (0x04000000)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_b1_mask                                (0x02000000)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_r2_mask                                 (0x00F00000)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_g2_mask                                 (0x000F0000)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_b2_mask                                 (0x0000F000)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_r1_mask                                 (0x00000F00)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_g1_mask                                 (0x000000F0)
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_b1_mask                                 (0x0000000F)
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_r2(data)                               (0x40000000&((data)<<30))
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_g2(data)                               (0x20000000&((data)<<29))
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_b2(data)                               (0x10000000&((data)<<28))
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_r1(data)                               (0x08000000&((data)<<27))
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_g1(data)                               (0x04000000&((data)<<26))
#define  LG_M_PLUS_M_plus_rom_bist1_rme_2_b1(data)                               (0x02000000&((data)<<25))
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_r2(data)                                (0x00F00000&((data)<<20))
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_g2(data)                                (0x000F0000&((data)<<16))
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_b2(data)                                (0x0000F000&((data)<<12))
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_r1(data)                                (0x00000F00&((data)<<8))
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_g1(data)                                (0x000000F0&((data)<<4))
#define  LG_M_PLUS_M_plus_rom_bist1_rm_2_b1(data)                                (0x0000000F&(data))
#define  LG_M_PLUS_M_plus_rom_bist1_get_rme_2_r2(data)                           ((0x40000000&(data))>>30)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rme_2_g2(data)                           ((0x20000000&(data))>>29)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rme_2_b2(data)                           ((0x10000000&(data))>>28)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rme_2_r1(data)                           ((0x08000000&(data))>>27)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rme_2_g1(data)                           ((0x04000000&(data))>>26)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rme_2_b1(data)                           ((0x02000000&(data))>>25)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rm_2_r2(data)                            ((0x00F00000&(data))>>20)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rm_2_g2(data)                            ((0x000F0000&(data))>>16)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rm_2_b2(data)                            ((0x0000F000&(data))>>12)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rm_2_r1(data)                            ((0x00000F00&(data))>>8)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rm_2_g1(data)                            ((0x000000F0&(data))>>4)
#define  LG_M_PLUS_M_plus_rom_bist1_get_rm_2_b1(data)                            (0x0000000F&(data))

#define  LG_M_PLUS_M_plus_rom_bist2                                             0x18028F38
#define  LG_M_PLUS_M_plus_rom_bist2_reg_addr                                     "0xB8028F38"
#define  LG_M_PLUS_M_plus_rom_bist2_reg                                          0xB8028F38
#define  LG_M_PLUS_M_plus_rom_bist2_inst_addr                                    "0x000C"
#define  set_LG_M_PLUS_M_plus_rom_bist2_reg(data)                                (*((volatile unsigned int*)LG_M_PLUS_M_plus_rom_bist2_reg)=data)
#define  get_LG_M_PLUS_M_plus_rom_bist2_reg                                      (*((volatile unsigned int*)LG_M_PLUS_M_plus_rom_bist2_reg))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_11_shift                               (11)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_10_shift                               (10)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_9_shift                                (9)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_8_shift                                (8)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_7_shift                                (7)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_6_shift                                (6)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_5_shift                                (5)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_4_shift                                (4)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_3_shift                                (3)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_2_shift                                (2)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_1_shift                                (1)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_0_shift                                (0)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_11_mask                                (0x00000800)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_10_mask                                (0x00000400)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_9_mask                                 (0x00000200)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_8_mask                                 (0x00000100)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_7_mask                                 (0x00000080)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_6_mask                                 (0x00000040)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_5_mask                                 (0x00000020)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_4_mask                                 (0x00000010)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_3_mask                                 (0x00000008)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_2_mask                                 (0x00000004)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_1_mask                                 (0x00000002)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_0_mask                                 (0x00000001)
#define  LG_M_PLUS_M_plus_rom_bist2_test2_11(data)                               (0x00000800&((data)<<11))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_10(data)                               (0x00000400&((data)<<10))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_9(data)                                (0x00000200&((data)<<9))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_8(data)                                (0x00000100&((data)<<8))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_7(data)                                (0x00000080&((data)<<7))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_6(data)                                (0x00000040&((data)<<6))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_5(data)                                (0x00000020&((data)<<5))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_4(data)                                (0x00000010&((data)<<4))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_3(data)                                (0x00000008&((data)<<3))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_2(data)                                (0x00000004&((data)<<2))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_1(data)                                (0x00000002&((data)<<1))
#define  LG_M_PLUS_M_plus_rom_bist2_test2_0(data)                                (0x00000001&(data))
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_11(data)                           ((0x00000800&(data))>>11)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_10(data)                           ((0x00000400&(data))>>10)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_9(data)                            ((0x00000200&(data))>>9)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_8(data)                            ((0x00000100&(data))>>8)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_7(data)                            ((0x00000080&(data))>>7)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_6(data)                            ((0x00000040&(data))>>6)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_5(data)                            ((0x00000020&(data))>>5)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_4(data)                            ((0x00000010&(data))>>4)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_3(data)                            ((0x00000008&(data))>>3)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_2(data)                            ((0x00000004&(data))>>2)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_1(data)                            ((0x00000002&(data))>>1)
#define  LG_M_PLUS_M_plus_rom_bist2_get_test2_0(data)                            (0x00000001&(data))

#define  LG_M_PLUS_M_plus_reg000                                                0x18028C00
#define  LG_M_PLUS_M_plus_reg000_reg_addr                                        "0xB8028C00"
#define  LG_M_PLUS_M_plus_reg000_reg                                             0xB8028C00
#define  LG_M_PLUS_M_plus_reg000_inst_addr                                       "0x000D"
#define  set_LG_M_PLUS_M_plus_reg000_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg000_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg000_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg000_reg))
#define  LG_M_PLUS_M_plus_reg000_wpr_reg00_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg000_wpr_reg01_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg000_wpr_reg02_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg000_wpr_reg03_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg000_wpr_reg00_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg000_wpr_reg01_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg000_wpr_reg02_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg000_wpr_reg03_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg000_wpr_reg00(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg000_wpr_reg01(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg000_wpr_reg02(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg000_wpr_reg03(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg000_get_wpr_reg00(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg000_get_wpr_reg01(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg000_get_wpr_reg02(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg000_get_wpr_reg03(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg004                                                0x18028C04
#define  LG_M_PLUS_M_plus_reg004_reg_addr                                        "0xB8028C04"
#define  LG_M_PLUS_M_plus_reg004_reg                                             0xB8028C04
#define  LG_M_PLUS_M_plus_reg004_inst_addr                                       "0x000E"
#define  set_LG_M_PLUS_M_plus_reg004_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg004_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg004_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg004_reg))
#define  LG_M_PLUS_M_plus_reg004_wpr_reg04_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg004_wpr_reg05_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg004_wpr_reg06_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg004_wpr_reg07_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg004_wpr_reg04_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg004_wpr_reg05_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg004_wpr_reg06_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg004_wpr_reg07_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg004_wpr_reg04(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg004_wpr_reg05(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg004_wpr_reg06(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg004_wpr_reg07(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg004_get_wpr_reg04(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg004_get_wpr_reg05(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg004_get_wpr_reg06(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg004_get_wpr_reg07(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg008                                                0x18028C08
#define  LG_M_PLUS_M_plus_reg008_reg_addr                                        "0xB8028C08"
#define  LG_M_PLUS_M_plus_reg008_reg                                             0xB8028C08
#define  LG_M_PLUS_M_plus_reg008_inst_addr                                       "0x000F"
#define  set_LG_M_PLUS_M_plus_reg008_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg008_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg008_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg008_reg))
#define  LG_M_PLUS_M_plus_reg008_wpr_reg08_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg008_wpr_reg09_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg008_wpr_reg0a_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg008_wpr_reg0b_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg008_wpr_reg08_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg008_wpr_reg09_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg008_wpr_reg0a_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg008_wpr_reg0b_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg008_wpr_reg08(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg008_wpr_reg09(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg008_wpr_reg0a(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg008_wpr_reg0b(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg008_get_wpr_reg08(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg008_get_wpr_reg09(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg008_get_wpr_reg0a(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg008_get_wpr_reg0b(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg00c                                                0x18028C0C
#define  LG_M_PLUS_M_plus_reg00c_reg_addr                                        "0xB8028C0C"
#define  LG_M_PLUS_M_plus_reg00c_reg                                             0xB8028C0C
#define  LG_M_PLUS_M_plus_reg00c_inst_addr                                       "0x0010"
#define  set_LG_M_PLUS_M_plus_reg00c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg00c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg00c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg00c_reg))
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0c_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0d_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0e_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0f_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0c_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0d_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0e_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0f_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0c(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0d(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0e(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg00c_wpr_reg0f(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg00c_get_wpr_reg0c(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg00c_get_wpr_reg0d(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg00c_get_wpr_reg0e(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg00c_get_wpr_reg0f(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg010                                                0x18028C10
#define  LG_M_PLUS_M_plus_reg010_reg_addr                                        "0xB8028C10"
#define  LG_M_PLUS_M_plus_reg010_reg                                             0xB8028C10
#define  LG_M_PLUS_M_plus_reg010_inst_addr                                       "0x0011"
#define  set_LG_M_PLUS_M_plus_reg010_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg010_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg010_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg010_reg))
#define  LG_M_PLUS_M_plus_reg010_wpr_reg10_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg010_wpr_reg11_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg010_wpr_reg12_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg010_wpr_reg13_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg010_wpr_reg10_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg010_wpr_reg11_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg010_wpr_reg12_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg010_wpr_reg13_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg010_wpr_reg10(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg010_wpr_reg11(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg010_wpr_reg12(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg010_wpr_reg13(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg010_get_wpr_reg10(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg010_get_wpr_reg11(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg010_get_wpr_reg12(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg010_get_wpr_reg13(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg014                                                0x18028C14
#define  LG_M_PLUS_M_plus_reg014_reg_addr                                        "0xB8028C14"
#define  LG_M_PLUS_M_plus_reg014_reg                                             0xB8028C14
#define  LG_M_PLUS_M_plus_reg014_inst_addr                                       "0x0012"
#define  set_LG_M_PLUS_M_plus_reg014_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg014_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg014_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg014_reg))
#define  LG_M_PLUS_M_plus_reg014_wpr_reg14_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg014_wpr_reg15_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg014_wpr_reg16_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg014_wpr_reg17_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg014_wpr_reg14_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg014_wpr_reg15_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg014_wpr_reg16_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg014_wpr_reg17_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg014_wpr_reg14(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg014_wpr_reg15(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg014_wpr_reg16(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg014_wpr_reg17(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg014_get_wpr_reg14(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg014_get_wpr_reg15(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg014_get_wpr_reg16(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg014_get_wpr_reg17(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg018                                                0x18028C18
#define  LG_M_PLUS_M_plus_reg018_reg_addr                                        "0xB8028C18"
#define  LG_M_PLUS_M_plus_reg018_reg                                             0xB8028C18
#define  LG_M_PLUS_M_plus_reg018_inst_addr                                       "0x0013"
#define  set_LG_M_PLUS_M_plus_reg018_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg018_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg018_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg018_reg))
#define  LG_M_PLUS_M_plus_reg018_wpr_reg18_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg018_wpr_reg19_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg018_wpr_reg1a_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg018_wpr_reg1b_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg018_wpr_reg18_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg018_wpr_reg19_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg018_wpr_reg1a_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg018_wpr_reg1b_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg018_wpr_reg18(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg018_wpr_reg19(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg018_wpr_reg1a(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg018_wpr_reg1b(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg018_get_wpr_reg18(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg018_get_wpr_reg19(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg018_get_wpr_reg1a(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg018_get_wpr_reg1b(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg01c                                                0x18028C1C
#define  LG_M_PLUS_M_plus_reg01c_reg_addr                                        "0xB8028C1C"
#define  LG_M_PLUS_M_plus_reg01c_reg                                             0xB8028C1C
#define  LG_M_PLUS_M_plus_reg01c_inst_addr                                       "0x0014"
#define  set_LG_M_PLUS_M_plus_reg01c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg01c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg01c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg01c_reg))
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1c_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1d_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1e_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1f_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1c_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1d_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1e_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1f_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1c(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1d(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1e(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg01c_wpr_reg1f(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg01c_get_wpr_reg1c(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg01c_get_wpr_reg1d(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg01c_get_wpr_reg1e(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg01c_get_wpr_reg1f(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg020                                                0x18028C20
#define  LG_M_PLUS_M_plus_reg020_reg_addr                                        "0xB8028C20"
#define  LG_M_PLUS_M_plus_reg020_reg                                             0xB8028C20
#define  LG_M_PLUS_M_plus_reg020_inst_addr                                       "0x0015"
#define  set_LG_M_PLUS_M_plus_reg020_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg020_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg020_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg020_reg))
#define  LG_M_PLUS_M_plus_reg020_wpr_reg20_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg020_wpr_reg21_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg020_wpr_reg22_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg020_wpr_reg23_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg020_wpr_reg20_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg020_wpr_reg21_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg020_wpr_reg22_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg020_wpr_reg23_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg020_wpr_reg20(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg020_wpr_reg21(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg020_wpr_reg22(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg020_wpr_reg23(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg020_get_wpr_reg20(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg020_get_wpr_reg21(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg020_get_wpr_reg22(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg020_get_wpr_reg23(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg024                                                0x18028C24
#define  LG_M_PLUS_M_plus_reg024_reg_addr                                        "0xB8028C24"
#define  LG_M_PLUS_M_plus_reg024_reg                                             0xB8028C24
#define  LG_M_PLUS_M_plus_reg024_inst_addr                                       "0x0016"
#define  set_LG_M_PLUS_M_plus_reg024_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg024_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg024_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg024_reg))
#define  LG_M_PLUS_M_plus_reg024_wpr_reg24_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg024_wpr_reg25_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg024_wpr_reg26_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg024_wpr_reg27_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg024_wpr_reg24_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg024_wpr_reg25_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg024_wpr_reg26_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg024_wpr_reg27_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg024_wpr_reg24(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg024_wpr_reg25(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg024_wpr_reg26(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg024_wpr_reg27(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg024_get_wpr_reg24(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg024_get_wpr_reg25(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg024_get_wpr_reg26(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg024_get_wpr_reg27(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg028                                                0x18028C28
#define  LG_M_PLUS_M_plus_reg028_reg_addr                                        "0xB8028C28"
#define  LG_M_PLUS_M_plus_reg028_reg                                             0xB8028C28
#define  LG_M_PLUS_M_plus_reg028_inst_addr                                       "0x0017"
#define  set_LG_M_PLUS_M_plus_reg028_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg028_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg028_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg028_reg))
#define  LG_M_PLUS_M_plus_reg028_wpr_reg28_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg028_wpr_reg29_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg028_wpr_reg2a_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg028_wpr_reg2b_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg028_wpr_reg28_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg028_wpr_reg29_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg028_wpr_reg2a_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg028_wpr_reg2b_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg028_wpr_reg28(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg028_wpr_reg29(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg028_wpr_reg2a(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg028_wpr_reg2b(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg028_get_wpr_reg28(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg028_get_wpr_reg29(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg028_get_wpr_reg2a(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg028_get_wpr_reg2b(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg02c                                                0x18028C2C
#define  LG_M_PLUS_M_plus_reg02c_reg_addr                                        "0xB8028C2C"
#define  LG_M_PLUS_M_plus_reg02c_reg                                             0xB8028C2C
#define  LG_M_PLUS_M_plus_reg02c_inst_addr                                       "0x0018"
#define  set_LG_M_PLUS_M_plus_reg02c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg02c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg02c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg02c_reg))
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2c_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2d_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2e_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2f_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2c_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2d_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2e_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2f_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2c(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2d(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2e(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg02c_wpr_reg2f(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg02c_get_wpr_reg2c(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg02c_get_wpr_reg2d(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg02c_get_wpr_reg2e(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg02c_get_wpr_reg2f(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg030                                                0x18028C30
#define  LG_M_PLUS_M_plus_reg030_reg_addr                                        "0xB8028C30"
#define  LG_M_PLUS_M_plus_reg030_reg                                             0xB8028C30
#define  LG_M_PLUS_M_plus_reg030_inst_addr                                       "0x0019"
#define  set_LG_M_PLUS_M_plus_reg030_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg030_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg030_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg030_reg))
#define  LG_M_PLUS_M_plus_reg030_wpr_reg30_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg030_wpr_reg31_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg030_wpr_reg32_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg030_wpr_reg33_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg030_wpr_reg30_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg030_wpr_reg31_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg030_wpr_reg32_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg030_wpr_reg33_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg030_wpr_reg30(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg030_wpr_reg31(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg030_wpr_reg32(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg030_wpr_reg33(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg030_get_wpr_reg30(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg030_get_wpr_reg31(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg030_get_wpr_reg32(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg030_get_wpr_reg33(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg034                                                0x18028C34
#define  LG_M_PLUS_M_plus_reg034_reg_addr                                        "0xB8028C34"
#define  LG_M_PLUS_M_plus_reg034_reg                                             0xB8028C34
#define  LG_M_PLUS_M_plus_reg034_inst_addr                                       "0x001A"
#define  set_LG_M_PLUS_M_plus_reg034_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg034_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg034_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg034_reg))
#define  LG_M_PLUS_M_plus_reg034_wpr_reg34_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg034_wpr_reg35_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg034_wpr_reg36_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg034_wpr_reg37_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg034_wpr_reg34_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg034_wpr_reg35_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg034_wpr_reg36_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg034_wpr_reg37_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg034_wpr_reg34(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg034_wpr_reg35(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg034_wpr_reg36(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg034_wpr_reg37(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg034_get_wpr_reg34(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg034_get_wpr_reg35(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg034_get_wpr_reg36(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg034_get_wpr_reg37(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg038                                                0x18028C38
#define  LG_M_PLUS_M_plus_reg038_reg_addr                                        "0xB8028C38"
#define  LG_M_PLUS_M_plus_reg038_reg                                             0xB8028C38
#define  LG_M_PLUS_M_plus_reg038_inst_addr                                       "0x001B"
#define  set_LG_M_PLUS_M_plus_reg038_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg038_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg038_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg038_reg))
#define  LG_M_PLUS_M_plus_reg038_wpr_reg38_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg038_wpr_reg39_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg038_wpr_reg3a_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg038_wpr_reg3b_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg038_wpr_reg38_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg038_wpr_reg39_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg038_wpr_reg3a_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg038_wpr_reg3b_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg038_wpr_reg38(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg038_wpr_reg39(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg038_wpr_reg3a(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg038_wpr_reg3b(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg038_get_wpr_reg38(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg038_get_wpr_reg39(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg038_get_wpr_reg3a(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg038_get_wpr_reg3b(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg03c                                                0x18028C3C
#define  LG_M_PLUS_M_plus_reg03c_reg_addr                                        "0xB8028C3C"
#define  LG_M_PLUS_M_plus_reg03c_reg                                             0xB8028C3C
#define  LG_M_PLUS_M_plus_reg03c_inst_addr                                       "0x001C"
#define  set_LG_M_PLUS_M_plus_reg03c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg03c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg03c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg03c_reg))
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3c_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3d_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3e_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3f_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3c_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3d_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3e_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3f_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3c(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3d(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3e(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg03c_wpr_reg3f(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg03c_get_wpr_reg3c(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg03c_get_wpr_reg3d(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg03c_get_wpr_reg3e(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg03c_get_wpr_reg3f(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg040                                                0x18028C40
#define  LG_M_PLUS_M_plus_reg040_reg_addr                                        "0xB8028C40"
#define  LG_M_PLUS_M_plus_reg040_reg                                             0xB8028C40
#define  LG_M_PLUS_M_plus_reg040_inst_addr                                       "0x001D"
#define  set_LG_M_PLUS_M_plus_reg040_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg040_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg040_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg040_reg))
#define  LG_M_PLUS_M_plus_reg040_wpr_reg40_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg040_wpr_reg41_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg040_wpr_reg42_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg040_wpr_reg43_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg040_wpr_reg40_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg040_wpr_reg41_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg040_wpr_reg42_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg040_wpr_reg43_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg040_wpr_reg40(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg040_wpr_reg41(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg040_wpr_reg42(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg040_wpr_reg43(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg040_get_wpr_reg40(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg040_get_wpr_reg41(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg040_get_wpr_reg42(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg040_get_wpr_reg43(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg044                                                0x18028C44
#define  LG_M_PLUS_M_plus_reg044_reg_addr                                        "0xB8028C44"
#define  LG_M_PLUS_M_plus_reg044_reg                                             0xB8028C44
#define  LG_M_PLUS_M_plus_reg044_inst_addr                                       "0x001E"
#define  set_LG_M_PLUS_M_plus_reg044_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg044_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg044_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg044_reg))
#define  LG_M_PLUS_M_plus_reg044_wpr_reg44_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg044_wpr_reg45_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg044_wpr_reg46_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg044_wpr_reg47_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg044_wpr_reg44_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg044_wpr_reg45_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg044_wpr_reg46_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg044_wpr_reg47_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg044_wpr_reg44(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg044_wpr_reg45(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg044_wpr_reg46(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg044_wpr_reg47(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg044_get_wpr_reg44(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg044_get_wpr_reg45(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg044_get_wpr_reg46(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg044_get_wpr_reg47(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg048                                                0x18028C48
#define  LG_M_PLUS_M_plus_reg048_reg_addr                                        "0xB8028C48"
#define  LG_M_PLUS_M_plus_reg048_reg                                             0xB8028C48
#define  LG_M_PLUS_M_plus_reg048_inst_addr                                       "0x001F"
#define  set_LG_M_PLUS_M_plus_reg048_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg048_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg048_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg048_reg))
#define  LG_M_PLUS_M_plus_reg048_wpr_reg48_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg048_wpr_reg49_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg048_wpr_reg4a_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg048_wpr_reg4b_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg048_wpr_reg48_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg048_wpr_reg49_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg048_wpr_reg4a_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg048_wpr_reg4b_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg048_wpr_reg48(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg048_wpr_reg49(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg048_wpr_reg4a(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg048_wpr_reg4b(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg048_get_wpr_reg48(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg048_get_wpr_reg49(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg048_get_wpr_reg4a(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg048_get_wpr_reg4b(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg04c                                                0x18028C4C
#define  LG_M_PLUS_M_plus_reg04c_reg_addr                                        "0xB8028C4C"
#define  LG_M_PLUS_M_plus_reg04c_reg                                             0xB8028C4C
#define  LG_M_PLUS_M_plus_reg04c_inst_addr                                       "0x0020"
#define  set_LG_M_PLUS_M_plus_reg04c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg04c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg04c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg04c_reg))
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4c_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4d_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4e_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4f_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4c_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4d_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4e_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4f_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4c(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4d(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4e(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg04c_wpr_reg4f(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg04c_get_wpr_reg4c(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg04c_get_wpr_reg4d(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg04c_get_wpr_reg4e(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg04c_get_wpr_reg4f(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg050                                                0x18028C50
#define  LG_M_PLUS_M_plus_reg050_reg_addr                                        "0xB8028C50"
#define  LG_M_PLUS_M_plus_reg050_reg                                             0xB8028C50
#define  LG_M_PLUS_M_plus_reg050_inst_addr                                       "0x0021"
#define  set_LG_M_PLUS_M_plus_reg050_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg050_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg050_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg050_reg))
#define  LG_M_PLUS_M_plus_reg050_wpr_reg50_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg050_wpr_reg51_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg050_wpr_reg52_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg050_wpr_reg53_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg050_wpr_reg50_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg050_wpr_reg51_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg050_wpr_reg52_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg050_wpr_reg53_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg050_wpr_reg50(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg050_wpr_reg51(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg050_wpr_reg52(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg050_wpr_reg53(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg050_get_wpr_reg50(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg050_get_wpr_reg51(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg050_get_wpr_reg52(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg050_get_wpr_reg53(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg054                                                0x18028C54
#define  LG_M_PLUS_M_plus_reg054_reg_addr                                        "0xB8028C54"
#define  LG_M_PLUS_M_plus_reg054_reg                                             0xB8028C54
#define  LG_M_PLUS_M_plus_reg054_inst_addr                                       "0x0022"
#define  set_LG_M_PLUS_M_plus_reg054_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg054_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg054_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg054_reg))
#define  LG_M_PLUS_M_plus_reg054_wpr_reg54_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg054_wpr_reg55_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg054_wpr_reg56_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg054_wpr_reg57_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg054_wpr_reg54_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg054_wpr_reg55_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg054_wpr_reg56_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg054_wpr_reg57_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg054_wpr_reg54(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg054_wpr_reg55(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg054_wpr_reg56(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg054_wpr_reg57(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg054_get_wpr_reg54(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg054_get_wpr_reg55(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg054_get_wpr_reg56(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg054_get_wpr_reg57(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg058                                                0x18028C58
#define  LG_M_PLUS_M_plus_reg058_reg_addr                                        "0xB8028C58"
#define  LG_M_PLUS_M_plus_reg058_reg                                             0xB8028C58
#define  LG_M_PLUS_M_plus_reg058_inst_addr                                       "0x0023"
#define  set_LG_M_PLUS_M_plus_reg058_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg058_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg058_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg058_reg))
#define  LG_M_PLUS_M_plus_reg058_wpr_reg58_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg058_wpr_reg59_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg058_wpr_reg5a_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg058_wpr_reg5b_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg058_wpr_reg58_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg058_wpr_reg59_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg058_wpr_reg5a_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg058_wpr_reg5b_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg058_wpr_reg58(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg058_wpr_reg59(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg058_wpr_reg5a(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg058_wpr_reg5b(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg058_get_wpr_reg58(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg058_get_wpr_reg59(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg058_get_wpr_reg5a(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg058_get_wpr_reg5b(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg05c                                                0x18028C5C
#define  LG_M_PLUS_M_plus_reg05c_reg_addr                                        "0xB8028C5C"
#define  LG_M_PLUS_M_plus_reg05c_reg                                             0xB8028C5C
#define  LG_M_PLUS_M_plus_reg05c_inst_addr                                       "0x0024"
#define  set_LG_M_PLUS_M_plus_reg05c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg05c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg05c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg05c_reg))
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5c_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5d_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5e_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5f_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5c_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5d_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5e_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5f_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5c(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5d(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5e(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg05c_wpr_reg5f(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg05c_get_wpr_reg5c(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg05c_get_wpr_reg5d(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg05c_get_wpr_reg5e(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg05c_get_wpr_reg5f(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg060                                                0x18028C60
#define  LG_M_PLUS_M_plus_reg060_reg_addr                                        "0xB8028C60"
#define  LG_M_PLUS_M_plus_reg060_reg                                             0xB8028C60
#define  LG_M_PLUS_M_plus_reg060_inst_addr                                       "0x0025"
#define  set_LG_M_PLUS_M_plus_reg060_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg060_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg060_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg060_reg))
#define  LG_M_PLUS_M_plus_reg060_wpr_reg60_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg060_wpr_reg61_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg060_wpr_reg62_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg060_wpr_reg63_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg060_wpr_reg60_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg060_wpr_reg61_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg060_wpr_reg62_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg060_wpr_reg63_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg060_wpr_reg60(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg060_wpr_reg61(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg060_wpr_reg62(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg060_wpr_reg63(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg060_get_wpr_reg60(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg060_get_wpr_reg61(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg060_get_wpr_reg62(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg060_get_wpr_reg63(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg064                                                0x18028C64
#define  LG_M_PLUS_M_plus_reg064_reg_addr                                        "0xB8028C64"
#define  LG_M_PLUS_M_plus_reg064_reg                                             0xB8028C64
#define  LG_M_PLUS_M_plus_reg064_inst_addr                                       "0x0026"
#define  set_LG_M_PLUS_M_plus_reg064_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg064_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg064_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg064_reg))
#define  LG_M_PLUS_M_plus_reg064_wpr_reg64_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg064_wpr_reg65_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg064_wpr_reg66_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg064_wpr_reg67_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg064_wpr_reg64_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg064_wpr_reg65_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg064_wpr_reg66_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg064_wpr_reg67_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg064_wpr_reg64(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg064_wpr_reg65(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg064_wpr_reg66(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg064_wpr_reg67(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg064_get_wpr_reg64(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg064_get_wpr_reg65(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg064_get_wpr_reg66(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg064_get_wpr_reg67(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg068                                                0x18028C68
#define  LG_M_PLUS_M_plus_reg068_reg_addr                                        "0xB8028C68"
#define  LG_M_PLUS_M_plus_reg068_reg                                             0xB8028C68
#define  LG_M_PLUS_M_plus_reg068_inst_addr                                       "0x0027"
#define  set_LG_M_PLUS_M_plus_reg068_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg068_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg068_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg068_reg))
#define  LG_M_PLUS_M_plus_reg068_wpr_reg68_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg068_wpr_reg69_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg068_wpr_reg6a_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg068_wpr_reg6b_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg068_wpr_reg68_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg068_wpr_reg69_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg068_wpr_reg6a_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg068_wpr_reg6b_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg068_wpr_reg68(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg068_wpr_reg69(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg068_wpr_reg6a(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg068_wpr_reg6b(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg068_get_wpr_reg68(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg068_get_wpr_reg69(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg068_get_wpr_reg6a(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg068_get_wpr_reg6b(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg06c                                                0x18028C6C
#define  LG_M_PLUS_M_plus_reg06c_reg_addr                                        "0xB8028C6C"
#define  LG_M_PLUS_M_plus_reg06c_reg                                             0xB8028C6C
#define  LG_M_PLUS_M_plus_reg06c_inst_addr                                       "0x0028"
#define  set_LG_M_PLUS_M_plus_reg06c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg06c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg06c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg06c_reg))
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6c_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6d_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6e_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6f_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6c_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6d_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6e_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6f_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6c(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6d(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6e(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg06c_wpr_reg6f(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg06c_get_wpr_reg6c(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg06c_get_wpr_reg6d(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg06c_get_wpr_reg6e(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg06c_get_wpr_reg6f(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg070                                                0x18028C70
#define  LG_M_PLUS_M_plus_reg070_reg_addr                                        "0xB8028C70"
#define  LG_M_PLUS_M_plus_reg070_reg                                             0xB8028C70
#define  LG_M_PLUS_M_plus_reg070_inst_addr                                       "0x0029"
#define  set_LG_M_PLUS_M_plus_reg070_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg070_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg070_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg070_reg))
#define  LG_M_PLUS_M_plus_reg070_wpr_reg70_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg070_wpr_reg71_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg070_wpr_reg72_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg070_wpr_reg73_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg070_wpr_reg70_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg070_wpr_reg71_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg070_wpr_reg72_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg070_wpr_reg73_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg070_wpr_reg70(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg070_wpr_reg71(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg070_wpr_reg72(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg070_wpr_reg73(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg070_get_wpr_reg70(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg070_get_wpr_reg71(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg070_get_wpr_reg72(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg070_get_wpr_reg73(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg074                                                0x18028C74
#define  LG_M_PLUS_M_plus_reg074_reg_addr                                        "0xB8028C74"
#define  LG_M_PLUS_M_plus_reg074_reg                                             0xB8028C74
#define  LG_M_PLUS_M_plus_reg074_inst_addr                                       "0x002A"
#define  set_LG_M_PLUS_M_plus_reg074_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg074_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg074_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg074_reg))
#define  LG_M_PLUS_M_plus_reg074_wpr_reg74_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg074_wpr_reg75_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg074_wpr_reg76_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg074_wpr_reg77_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg074_wpr_reg74_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg074_wpr_reg75_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg074_wpr_reg76_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg074_wpr_reg77_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg074_wpr_reg74(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg074_wpr_reg75(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg074_wpr_reg76(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg074_wpr_reg77(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg074_get_wpr_reg74(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg074_get_wpr_reg75(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg074_get_wpr_reg76(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg074_get_wpr_reg77(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg078                                                0x18028C78
#define  LG_M_PLUS_M_plus_reg078_reg_addr                                        "0xB8028C78"
#define  LG_M_PLUS_M_plus_reg078_reg                                             0xB8028C78
#define  LG_M_PLUS_M_plus_reg078_inst_addr                                       "0x002B"
#define  set_LG_M_PLUS_M_plus_reg078_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg078_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg078_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg078_reg))
#define  LG_M_PLUS_M_plus_reg078_wpr_reg78_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg078_wpr_reg79_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg078_wpr_reg7a_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg078_wpr_reg7b_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg078_wpr_reg78_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg078_wpr_reg79_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg078_wpr_reg7a_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg078_wpr_reg7b_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg078_wpr_reg78(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg078_wpr_reg79(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg078_wpr_reg7a(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg078_wpr_reg7b(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg078_get_wpr_reg78(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg078_get_wpr_reg79(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg078_get_wpr_reg7a(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg078_get_wpr_reg7b(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg07c                                                0x18028C7C
#define  LG_M_PLUS_M_plus_reg07c_reg_addr                                        "0xB8028C7C"
#define  LG_M_PLUS_M_plus_reg07c_reg                                             0xB8028C7C
#define  LG_M_PLUS_M_plus_reg07c_inst_addr                                       "0x002C"
#define  set_LG_M_PLUS_M_plus_reg07c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg07c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg07c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg07c_reg))
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7c_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7d_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7e_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7f_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7c_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7d_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7e_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7f_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7c(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7d(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7e(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg07c_wpr_reg7f(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg07c_get_wpr_reg7c(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg07c_get_wpr_reg7d(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg07c_get_wpr_reg7e(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg07c_get_wpr_reg7f(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg080                                                0x18028C80
#define  LG_M_PLUS_M_plus_reg080_reg_addr                                        "0xB8028C80"
#define  LG_M_PLUS_M_plus_reg080_reg                                             0xB8028C80
#define  LG_M_PLUS_M_plus_reg080_inst_addr                                       "0x002D"
#define  set_LG_M_PLUS_M_plus_reg080_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg080_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg080_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg080_reg))
#define  LG_M_PLUS_M_plus_reg080_wpr_reg80_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg080_wpr_reg81_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg080_wpr_reg82_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg080_wpr_reg83_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg080_wpr_reg80_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg080_wpr_reg81_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg080_wpr_reg82_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg080_wpr_reg83_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg080_wpr_reg80(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg080_wpr_reg81(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg080_wpr_reg82(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg080_wpr_reg83(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg080_get_wpr_reg80(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg080_get_wpr_reg81(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg080_get_wpr_reg82(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg080_get_wpr_reg83(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg084                                                0x18028C84
#define  LG_M_PLUS_M_plus_reg084_reg_addr                                        "0xB8028C84"
#define  LG_M_PLUS_M_plus_reg084_reg                                             0xB8028C84
#define  LG_M_PLUS_M_plus_reg084_inst_addr                                       "0x002E"
#define  set_LG_M_PLUS_M_plus_reg084_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg084_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg084_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg084_reg))
#define  LG_M_PLUS_M_plus_reg084_wpr_reg84_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg084_wpr_reg85_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg084_wpr_reg86_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg084_wpr_reg87_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg084_wpr_reg84_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg084_wpr_reg85_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg084_wpr_reg86_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg084_wpr_reg87_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg084_wpr_reg84(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg084_wpr_reg85(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg084_wpr_reg86(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg084_wpr_reg87(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg084_get_wpr_reg84(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg084_get_wpr_reg85(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg084_get_wpr_reg86(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg084_get_wpr_reg87(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg088                                                0x18028C88
#define  LG_M_PLUS_M_plus_reg088_reg_addr                                        "0xB8028C88"
#define  LG_M_PLUS_M_plus_reg088_reg                                             0xB8028C88
#define  LG_M_PLUS_M_plus_reg088_inst_addr                                       "0x002F"
#define  set_LG_M_PLUS_M_plus_reg088_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg088_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg088_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg088_reg))
#define  LG_M_PLUS_M_plus_reg088_wpr_reg88_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg088_wpr_reg89_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg088_wpr_reg8a_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg088_wpr_reg8b_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg088_wpr_reg88_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg088_wpr_reg89_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg088_wpr_reg8a_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg088_wpr_reg8b_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg088_wpr_reg88(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg088_wpr_reg89(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg088_wpr_reg8a(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg088_wpr_reg8b(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg088_get_wpr_reg88(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg088_get_wpr_reg89(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg088_get_wpr_reg8a(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg088_get_wpr_reg8b(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg08c                                                0x18028C8C
#define  LG_M_PLUS_M_plus_reg08c_reg_addr                                        "0xB8028C8C"
#define  LG_M_PLUS_M_plus_reg08c_reg                                             0xB8028C8C
#define  LG_M_PLUS_M_plus_reg08c_inst_addr                                       "0x0030"
#define  set_LG_M_PLUS_M_plus_reg08c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg08c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg08c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg08c_reg))
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8c_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8d_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8e_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8f_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8c_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8d_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8e_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8f_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8c(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8d(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8e(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg08c_wpr_reg8f(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg08c_get_wpr_reg8c(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg08c_get_wpr_reg8d(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg08c_get_wpr_reg8e(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg08c_get_wpr_reg8f(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg090                                                0x18028C90
#define  LG_M_PLUS_M_plus_reg090_reg_addr                                        "0xB8028C90"
#define  LG_M_PLUS_M_plus_reg090_reg                                             0xB8028C90
#define  LG_M_PLUS_M_plus_reg090_inst_addr                                       "0x0031"
#define  set_LG_M_PLUS_M_plus_reg090_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg090_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg090_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg090_reg))
#define  LG_M_PLUS_M_plus_reg090_wpr_reg90_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg090_wpr_reg91_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg090_wpr_reg92_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg090_wpr_reg93_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg090_wpr_reg90_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg090_wpr_reg91_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg090_wpr_reg92_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg090_wpr_reg93_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg090_wpr_reg90(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg090_wpr_reg91(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg090_wpr_reg92(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg090_wpr_reg93(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg090_get_wpr_reg90(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg090_get_wpr_reg91(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg090_get_wpr_reg92(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg090_get_wpr_reg93(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg094                                                0x18028C94
#define  LG_M_PLUS_M_plus_reg094_reg_addr                                        "0xB8028C94"
#define  LG_M_PLUS_M_plus_reg094_reg                                             0xB8028C94
#define  LG_M_PLUS_M_plus_reg094_inst_addr                                       "0x0032"
#define  set_LG_M_PLUS_M_plus_reg094_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg094_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg094_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg094_reg))
#define  LG_M_PLUS_M_plus_reg094_wpr_reg94_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg094_wpr_reg95_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg094_wpr_reg96_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg094_wpr_reg97_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg094_wpr_reg94_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg094_wpr_reg95_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg094_wpr_reg96_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg094_wpr_reg97_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg094_wpr_reg94(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg094_wpr_reg95(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg094_wpr_reg96(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg094_wpr_reg97(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg094_get_wpr_reg94(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg094_get_wpr_reg95(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg094_get_wpr_reg96(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg094_get_wpr_reg97(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg098                                                0x18028C98
#define  LG_M_PLUS_M_plus_reg098_reg_addr                                        "0xB8028C98"
#define  LG_M_PLUS_M_plus_reg098_reg                                             0xB8028C98
#define  LG_M_PLUS_M_plus_reg098_inst_addr                                       "0x0033"
#define  set_LG_M_PLUS_M_plus_reg098_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg098_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg098_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg098_reg))
#define  LG_M_PLUS_M_plus_reg098_wpr_reg98_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg098_wpr_reg99_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg098_wpr_reg9a_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg098_wpr_reg9b_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg098_wpr_reg98_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg098_wpr_reg99_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg098_wpr_reg9a_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg098_wpr_reg9b_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg098_wpr_reg98(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg098_wpr_reg99(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg098_wpr_reg9a(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg098_wpr_reg9b(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg098_get_wpr_reg98(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg098_get_wpr_reg99(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg098_get_wpr_reg9a(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg098_get_wpr_reg9b(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg09c                                                0x18028C9C
#define  LG_M_PLUS_M_plus_reg09c_reg_addr                                        "0xB8028C9C"
#define  LG_M_PLUS_M_plus_reg09c_reg                                             0xB8028C9C
#define  LG_M_PLUS_M_plus_reg09c_inst_addr                                       "0x0034"
#define  set_LG_M_PLUS_M_plus_reg09c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg09c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg09c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg09c_reg))
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9c_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9d_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9e_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9f_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9c_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9d_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9e_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9f_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9c(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9d(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9e(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg09c_wpr_reg9f(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg09c_get_wpr_reg9c(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg09c_get_wpr_reg9d(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg09c_get_wpr_reg9e(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg09c_get_wpr_reg9f(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0a0                                                0x18028CA0
#define  LG_M_PLUS_M_plus_reg0a0_reg_addr                                        "0xB8028CA0"
#define  LG_M_PLUS_M_plus_reg0a0_reg                                             0xB8028CA0
#define  LG_M_PLUS_M_plus_reg0a0_inst_addr                                       "0x0035"
#define  set_LG_M_PLUS_M_plus_reg0a0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0a0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0a0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0a0_reg))
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega0_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega1_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega2_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega3_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega0_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega1_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega2_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega3_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega0(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega1(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega2(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0a0_wpr_rega3(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0a0_get_wpr_rega0(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0a0_get_wpr_rega1(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0a0_get_wpr_rega2(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0a0_get_wpr_rega3(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0a4                                                0x18028CA4
#define  LG_M_PLUS_M_plus_reg0a4_reg_addr                                        "0xB8028CA4"
#define  LG_M_PLUS_M_plus_reg0a4_reg                                             0xB8028CA4
#define  LG_M_PLUS_M_plus_reg0a4_inst_addr                                       "0x0036"
#define  set_LG_M_PLUS_M_plus_reg0a4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0a4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0a4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0a4_reg))
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega4_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega5_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega6_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega7_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega4_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega5_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega6_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega7_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega4(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega5(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega6(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0a4_wpr_rega7(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0a4_get_wpr_rega4(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0a4_get_wpr_rega5(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0a4_get_wpr_rega6(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0a4_get_wpr_rega7(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0a8                                                0x18028CA8
#define  LG_M_PLUS_M_plus_reg0a8_reg_addr                                        "0xB8028CA8"
#define  LG_M_PLUS_M_plus_reg0a8_reg                                             0xB8028CA8
#define  LG_M_PLUS_M_plus_reg0a8_inst_addr                                       "0x0037"
#define  set_LG_M_PLUS_M_plus_reg0a8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0a8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0a8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0a8_reg))
#define  LG_M_PLUS_M_plus_reg0a8_wpr_rega8_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0a8_wpr_rega9_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0a8_wpr_regaa_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0a8_wpr_regab_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0a8_wpr_rega8_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0a8_wpr_rega9_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0a8_wpr_regaa_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0a8_wpr_regab_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0a8_wpr_rega8(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0a8_wpr_rega9(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0a8_wpr_regaa(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0a8_wpr_regab(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0a8_get_wpr_rega8(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0a8_get_wpr_rega9(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0a8_get_wpr_regaa(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0a8_get_wpr_regab(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0ac                                                0x18028CAC
#define  LG_M_PLUS_M_plus_reg0ac_reg_addr                                        "0xB8028CAC"
#define  LG_M_PLUS_M_plus_reg0ac_reg                                             0xB8028CAC
#define  LG_M_PLUS_M_plus_reg0ac_inst_addr                                       "0x0038"
#define  set_LG_M_PLUS_M_plus_reg0ac_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0ac_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0ac_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0ac_reg))
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regac_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regad_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regae_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regaf_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regac_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regad_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regae_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regaf_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regac(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regad(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regae(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0ac_wpr_regaf(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0ac_get_wpr_regac(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0ac_get_wpr_regad(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0ac_get_wpr_regae(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0ac_get_wpr_regaf(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0b0                                                0x18028CB0
#define  LG_M_PLUS_M_plus_reg0b0_reg_addr                                        "0xB8028CB0"
#define  LG_M_PLUS_M_plus_reg0b0_reg                                             0xB8028CB0
#define  LG_M_PLUS_M_plus_reg0b0_inst_addr                                       "0x0039"
#define  set_LG_M_PLUS_M_plus_reg0b0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0b0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0b0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0b0_reg))
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb0_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb1_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb2_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb3_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb0_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb1_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb2_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb3_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb0(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb1(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb2(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0b0_wpr_regb3(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0b0_get_wpr_regb0(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0b0_get_wpr_regb1(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0b0_get_wpr_regb2(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0b0_get_wpr_regb3(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0b4                                                0x18028CB4
#define  LG_M_PLUS_M_plus_reg0b4_reg_addr                                        "0xB8028CB4"
#define  LG_M_PLUS_M_plus_reg0b4_reg                                             0xB8028CB4
#define  LG_M_PLUS_M_plus_reg0b4_inst_addr                                       "0x003A"
#define  set_LG_M_PLUS_M_plus_reg0b4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0b4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0b4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0b4_reg))
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb4_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb5_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb6_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb7_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb4_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb5_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb6_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb7_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb4(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb5(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb6(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0b4_wpr_regb7(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0b4_get_wpr_regb4(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0b4_get_wpr_regb5(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0b4_get_wpr_regb6(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0b4_get_wpr_regb7(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0b8                                                0x18028CB8
#define  LG_M_PLUS_M_plus_reg0b8_reg_addr                                        "0xB8028CB8"
#define  LG_M_PLUS_M_plus_reg0b8_reg                                             0xB8028CB8
#define  LG_M_PLUS_M_plus_reg0b8_inst_addr                                       "0x003B"
#define  set_LG_M_PLUS_M_plus_reg0b8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0b8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0b8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0b8_reg))
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regb8_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regb9_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regba_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regbb_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regb8_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regb9_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regba_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regbb_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regb8(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regb9(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regba(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0b8_wpr_regbb(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0b8_get_wpr_regb8(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0b8_get_wpr_regb9(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0b8_get_wpr_regba(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0b8_get_wpr_regbb(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0bc                                                0x18028CBC
#define  LG_M_PLUS_M_plus_reg0bc_reg_addr                                        "0xB8028CBC"
#define  LG_M_PLUS_M_plus_reg0bc_reg                                             0xB8028CBC
#define  LG_M_PLUS_M_plus_reg0bc_inst_addr                                       "0x003C"
#define  set_LG_M_PLUS_M_plus_reg0bc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0bc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0bc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0bc_reg))
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbc_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbd_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbe_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbf_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbc_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbd_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbe_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbf_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbc(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbd(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbe(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0bc_wpr_regbf(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0bc_get_wpr_regbc(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0bc_get_wpr_regbd(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0bc_get_wpr_regbe(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0bc_get_wpr_regbf(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0c0                                                0x18028CC0
#define  LG_M_PLUS_M_plus_reg0c0_reg_addr                                        "0xB8028CC0"
#define  LG_M_PLUS_M_plus_reg0c0_reg                                             0xB8028CC0
#define  LG_M_PLUS_M_plus_reg0c0_inst_addr                                       "0x003D"
#define  set_LG_M_PLUS_M_plus_reg0c0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0c0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0c0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0c0_reg))
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc0_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc1_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc2_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc3_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc0_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc1_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc2_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc3_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc0(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc1(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc2(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0c0_wpr_regc3(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0c0_get_wpr_regc0(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0c0_get_wpr_regc1(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0c0_get_wpr_regc2(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0c0_get_wpr_regc3(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0c4                                                0x18028CC4
#define  LG_M_PLUS_M_plus_reg0c4_reg_addr                                        "0xB8028CC4"
#define  LG_M_PLUS_M_plus_reg0c4_reg                                             0xB8028CC4
#define  LG_M_PLUS_M_plus_reg0c4_inst_addr                                       "0x003E"
#define  set_LG_M_PLUS_M_plus_reg0c4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0c4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0c4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0c4_reg))
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc4_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc5_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc6_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc7_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc4_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc5_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc6_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc7_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc4(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc5(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc6(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0c4_wpr_regc7(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0c4_get_wpr_regc4(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0c4_get_wpr_regc5(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0c4_get_wpr_regc6(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0c4_get_wpr_regc7(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0c8                                                0x18028CC8
#define  LG_M_PLUS_M_plus_reg0c8_reg_addr                                        "0xB8028CC8"
#define  LG_M_PLUS_M_plus_reg0c8_reg                                             0xB8028CC8
#define  LG_M_PLUS_M_plus_reg0c8_inst_addr                                       "0x003F"
#define  set_LG_M_PLUS_M_plus_reg0c8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0c8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0c8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0c8_reg))
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regc8_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regc9_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regca_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regcb_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regc8_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regc9_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regca_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regcb_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regc8(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regc9(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regca(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0c8_wpr_regcb(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0c8_get_wpr_regc8(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0c8_get_wpr_regc9(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0c8_get_wpr_regca(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0c8_get_wpr_regcb(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0cc                                                0x18028CCC
#define  LG_M_PLUS_M_plus_reg0cc_reg_addr                                        "0xB8028CCC"
#define  LG_M_PLUS_M_plus_reg0cc_reg                                             0xB8028CCC
#define  LG_M_PLUS_M_plus_reg0cc_inst_addr                                       "0x0040"
#define  set_LG_M_PLUS_M_plus_reg0cc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0cc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0cc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0cc_reg))
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regcc_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regcd_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regce_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regcf_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regcc_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regcd_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regce_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regcf_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regcc(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regcd(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regce(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0cc_wpr_regcf(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0cc_get_wpr_regcc(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0cc_get_wpr_regcd(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0cc_get_wpr_regce(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0cc_get_wpr_regcf(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0d0                                                0x18028CD0
#define  LG_M_PLUS_M_plus_reg0d0_reg_addr                                        "0xB8028CD0"
#define  LG_M_PLUS_M_plus_reg0d0_reg                                             0xB8028CD0
#define  LG_M_PLUS_M_plus_reg0d0_inst_addr                                       "0x0041"
#define  set_LG_M_PLUS_M_plus_reg0d0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0d0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0d0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0d0_reg))
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd0_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd1_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd2_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd3_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd0_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd1_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd2_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd3_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd0(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd1(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd2(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0d0_wpr_regd3(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0d0_get_wpr_regd0(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0d0_get_wpr_regd1(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0d0_get_wpr_regd2(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0d0_get_wpr_regd3(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0d4                                                0x18028CD4
#define  LG_M_PLUS_M_plus_reg0d4_reg_addr                                        "0xB8028CD4"
#define  LG_M_PLUS_M_plus_reg0d4_reg                                             0xB8028CD4
#define  LG_M_PLUS_M_plus_reg0d4_inst_addr                                       "0x0042"
#define  set_LG_M_PLUS_M_plus_reg0d4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0d4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0d4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0d4_reg))
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd4_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd5_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd6_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd7_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd4_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd5_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd6_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd7_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd4(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd5(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd6(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0d4_wpr_regd7(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0d4_get_wpr_regd4(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0d4_get_wpr_regd5(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0d4_get_wpr_regd6(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0d4_get_wpr_regd7(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0d8                                                0x18028CD8
#define  LG_M_PLUS_M_plus_reg0d8_reg_addr                                        "0xB8028CD8"
#define  LG_M_PLUS_M_plus_reg0d8_reg                                             0xB8028CD8
#define  LG_M_PLUS_M_plus_reg0d8_inst_addr                                       "0x0043"
#define  set_LG_M_PLUS_M_plus_reg0d8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0d8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0d8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0d8_reg))
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regd8_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regd9_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regda_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regdb_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regd8_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regd9_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regda_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regdb_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regd8(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regd9(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regda(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0d8_wpr_regdb(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0d8_get_wpr_regd8(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0d8_get_wpr_regd9(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0d8_get_wpr_regda(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0d8_get_wpr_regdb(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0dc                                                0x18028CDC
#define  LG_M_PLUS_M_plus_reg0dc_reg_addr                                        "0xB8028CDC"
#define  LG_M_PLUS_M_plus_reg0dc_reg                                             0xB8028CDC
#define  LG_M_PLUS_M_plus_reg0dc_inst_addr                                       "0x0044"
#define  set_LG_M_PLUS_M_plus_reg0dc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0dc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0dc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0dc_reg))
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regdc_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regdd_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regde_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regdf_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regdc_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regdd_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regde_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regdf_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regdc(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regdd(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regde(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0dc_wpr_regdf(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0dc_get_wpr_regdc(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0dc_get_wpr_regdd(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0dc_get_wpr_regde(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0dc_get_wpr_regdf(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0e0                                                0x18028CE0
#define  LG_M_PLUS_M_plus_reg0e0_reg_addr                                        "0xB8028CE0"
#define  LG_M_PLUS_M_plus_reg0e0_reg                                             0xB8028CE0
#define  LG_M_PLUS_M_plus_reg0e0_inst_addr                                       "0x0045"
#define  set_LG_M_PLUS_M_plus_reg0e0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0e0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0e0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0e0_reg))
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege0_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege1_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege2_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege3_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege0_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege1_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege2_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege3_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege0(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege1(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege2(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0e0_wpr_rege3(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0e0_get_wpr_rege0(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0e0_get_wpr_rege1(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0e0_get_wpr_rege2(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0e0_get_wpr_rege3(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0e4                                                0x18028CE4
#define  LG_M_PLUS_M_plus_reg0e4_reg_addr                                        "0xB8028CE4"
#define  LG_M_PLUS_M_plus_reg0e4_reg                                             0xB8028CE4
#define  LG_M_PLUS_M_plus_reg0e4_inst_addr                                       "0x0046"
#define  set_LG_M_PLUS_M_plus_reg0e4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0e4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0e4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0e4_reg))
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege4_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege5_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege6_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege7_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege4_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege5_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege6_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege7_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege4(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege5(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege6(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0e4_wpr_rege7(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0e4_get_wpr_rege4(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0e4_get_wpr_rege5(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0e4_get_wpr_rege6(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0e4_get_wpr_rege7(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0e8                                                0x18028CE8
#define  LG_M_PLUS_M_plus_reg0e8_reg_addr                                        "0xB8028CE8"
#define  LG_M_PLUS_M_plus_reg0e8_reg                                             0xB8028CE8
#define  LG_M_PLUS_M_plus_reg0e8_inst_addr                                       "0x0047"
#define  set_LG_M_PLUS_M_plus_reg0e8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0e8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0e8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0e8_reg))
#define  LG_M_PLUS_M_plus_reg0e8_wpr_rege8_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0e8_wpr_rege9_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0e8_wpr_regea_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0e8_wpr_regeb_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0e8_wpr_rege8_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0e8_wpr_rege9_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0e8_wpr_regea_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0e8_wpr_regeb_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0e8_wpr_rege8(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0e8_wpr_rege9(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0e8_wpr_regea(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0e8_wpr_regeb(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0e8_get_wpr_rege8(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0e8_get_wpr_rege9(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0e8_get_wpr_regea(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0e8_get_wpr_regeb(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0ec                                                0x18028CEC
#define  LG_M_PLUS_M_plus_reg0ec_reg_addr                                        "0xB8028CEC"
#define  LG_M_PLUS_M_plus_reg0ec_reg                                             0xB8028CEC
#define  LG_M_PLUS_M_plus_reg0ec_inst_addr                                       "0x0048"
#define  set_LG_M_PLUS_M_plus_reg0ec_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0ec_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0ec_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0ec_reg))
#define  LG_M_PLUS_M_plus_reg0ec_wpr_regec_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0ec_wpr_reged_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0ec_wpr_regee_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0ec_wpr_regef_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0ec_wpr_regec_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0ec_wpr_reged_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0ec_wpr_regee_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0ec_wpr_regef_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0ec_wpr_regec(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0ec_wpr_reged(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0ec_wpr_regee(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0ec_wpr_regef(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0ec_get_wpr_regec(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0ec_get_wpr_reged(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0ec_get_wpr_regee(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0ec_get_wpr_regef(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0f0                                                0x18028CF0
#define  LG_M_PLUS_M_plus_reg0f0_reg_addr                                        "0xB8028CF0"
#define  LG_M_PLUS_M_plus_reg0f0_reg                                             0xB8028CF0
#define  LG_M_PLUS_M_plus_reg0f0_inst_addr                                       "0x0049"
#define  set_LG_M_PLUS_M_plus_reg0f0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0f0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0f0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0f0_reg))
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf0_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf1_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf2_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf3_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf0_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf1_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf2_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf3_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf0(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf1(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf2(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0f0_wpr_regf3(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0f0_get_wpr_regf0(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0f0_get_wpr_regf1(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0f0_get_wpr_regf2(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0f0_get_wpr_regf3(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0f4                                                0x18028CF4
#define  LG_M_PLUS_M_plus_reg0f4_reg_addr                                        "0xB8028CF4"
#define  LG_M_PLUS_M_plus_reg0f4_reg                                             0xB8028CF4
#define  LG_M_PLUS_M_plus_reg0f4_inst_addr                                       "0x004A"
#define  set_LG_M_PLUS_M_plus_reg0f4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0f4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0f4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0f4_reg))
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf4_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf5_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf6_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf7_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf4_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf5_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf6_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf7_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf4(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf5(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf6(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0f4_wpr_regf7(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0f4_get_wpr_regf4(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0f4_get_wpr_regf5(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0f4_get_wpr_regf6(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0f4_get_wpr_regf7(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0f8                                                0x18028CF8
#define  LG_M_PLUS_M_plus_reg0f8_reg_addr                                        "0xB8028CF8"
#define  LG_M_PLUS_M_plus_reg0f8_reg                                             0xB8028CF8
#define  LG_M_PLUS_M_plus_reg0f8_inst_addr                                       "0x004B"
#define  set_LG_M_PLUS_M_plus_reg0f8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0f8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0f8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0f8_reg))
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regf8_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regf9_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regfa_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regfb_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regf8_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regf9_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regfa_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regfb_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regf8(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regf9(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regfa(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0f8_wpr_regfb(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0f8_get_wpr_regf8(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0f8_get_wpr_regf9(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0f8_get_wpr_regfa(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0f8_get_wpr_regfb(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg0fc                                                0x18028CFC
#define  LG_M_PLUS_M_plus_reg0fc_reg_addr                                        "0xB8028CFC"
#define  LG_M_PLUS_M_plus_reg0fc_reg                                             0xB8028CFC
#define  LG_M_PLUS_M_plus_reg0fc_inst_addr                                       "0x004C"
#define  set_LG_M_PLUS_M_plus_reg0fc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0fc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg0fc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg0fc_reg))
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regfc_shift                                 (24)
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regfd_shift                                 (16)
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regfe_shift                                 (8)
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regff_shift                                 (0)
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regfc_mask                                  (0xFF000000)
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regfd_mask                                  (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regfe_mask                                  (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regff_mask                                  (0x000000FF)
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regfc(data)                                 (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regfd(data)                                 (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regfe(data)                                 (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg0fc_wpr_regff(data)                                 (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg0fc_get_wpr_regfc(data)                             ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg0fc_get_wpr_regfd(data)                             ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg0fc_get_wpr_regfe(data)                             ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg0fc_get_wpr_regff(data)                             (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg100                                                0x18028D00
#define  LG_M_PLUS_M_plus_reg100_reg_addr                                        "0xB8028D00"
#define  LG_M_PLUS_M_plus_reg100_reg                                             0xB8028D00
#define  LG_M_PLUS_M_plus_reg100_inst_addr                                       "0x004D"
#define  set_LG_M_PLUS_M_plus_reg100_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg100_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg100_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg100_reg))
#define  LG_M_PLUS_M_plus_reg100_wpr_reg100_shift                                (24)
#define  LG_M_PLUS_M_plus_reg100_wpr_reg101_shift                                (16)
#define  LG_M_PLUS_M_plus_reg100_wpr_reg102_shift                                (8)
#define  LG_M_PLUS_M_plus_reg100_wpr_reg103_shift                                (0)
#define  LG_M_PLUS_M_plus_reg100_wpr_reg100_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg100_wpr_reg101_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg100_wpr_reg102_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg100_wpr_reg103_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg100_wpr_reg100(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg100_wpr_reg101(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg100_wpr_reg102(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg100_wpr_reg103(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg100_get_wpr_reg100(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg100_get_wpr_reg101(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg100_get_wpr_reg102(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg100_get_wpr_reg103(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg104                                                0x18028D04
#define  LG_M_PLUS_M_plus_reg104_reg_addr                                        "0xB8028D04"
#define  LG_M_PLUS_M_plus_reg104_reg                                             0xB8028D04
#define  LG_M_PLUS_M_plus_reg104_inst_addr                                       "0x004E"
#define  set_LG_M_PLUS_M_plus_reg104_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg104_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg104_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg104_reg))
#define  LG_M_PLUS_M_plus_reg104_wpr_reg104_shift                                (24)
#define  LG_M_PLUS_M_plus_reg104_wpr_reg105_shift                                (16)
#define  LG_M_PLUS_M_plus_reg104_wpr_reg106_shift                                (8)
#define  LG_M_PLUS_M_plus_reg104_wpr_reg107_shift                                (0)
#define  LG_M_PLUS_M_plus_reg104_wpr_reg104_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg104_wpr_reg105_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg104_wpr_reg106_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg104_wpr_reg107_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg104_wpr_reg104(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg104_wpr_reg105(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg104_wpr_reg106(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg104_wpr_reg107(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg104_get_wpr_reg104(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg104_get_wpr_reg105(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg104_get_wpr_reg106(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg104_get_wpr_reg107(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg108                                                0x18028D08
#define  LG_M_PLUS_M_plus_reg108_reg_addr                                        "0xB8028D08"
#define  LG_M_PLUS_M_plus_reg108_reg                                             0xB8028D08
#define  LG_M_PLUS_M_plus_reg108_inst_addr                                       "0x004F"
#define  set_LG_M_PLUS_M_plus_reg108_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg108_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg108_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg108_reg))
#define  LG_M_PLUS_M_plus_reg108_wpr_reg108_shift                                (24)
#define  LG_M_PLUS_M_plus_reg108_wpr_reg109_shift                                (16)
#define  LG_M_PLUS_M_plus_reg108_wpr_reg10a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg108_wpr_reg10b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg108_wpr_reg108_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg108_wpr_reg109_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg108_wpr_reg10a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg108_wpr_reg10b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg108_wpr_reg108(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg108_wpr_reg109(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg108_wpr_reg10a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg108_wpr_reg10b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg108_get_wpr_reg108(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg108_get_wpr_reg109(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg108_get_wpr_reg10a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg108_get_wpr_reg10b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg10c                                                0x18028D0C
#define  LG_M_PLUS_M_plus_reg10c_reg_addr                                        "0xB8028D0C"
#define  LG_M_PLUS_M_plus_reg10c_reg                                             0xB8028D0C
#define  LG_M_PLUS_M_plus_reg10c_inst_addr                                       "0x0050"
#define  set_LG_M_PLUS_M_plus_reg10c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg10c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg10c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg10c_reg))
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg10c_wpr_reg10f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg10c_get_wpr_reg10c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg10c_get_wpr_reg10d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg10c_get_wpr_reg10e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg10c_get_wpr_reg10f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg110                                                0x18028D10
#define  LG_M_PLUS_M_plus_reg110_reg_addr                                        "0xB8028D10"
#define  LG_M_PLUS_M_plus_reg110_reg                                             0xB8028D10
#define  LG_M_PLUS_M_plus_reg110_inst_addr                                       "0x0051"
#define  set_LG_M_PLUS_M_plus_reg110_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg110_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg110_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg110_reg))
#define  LG_M_PLUS_M_plus_reg110_wpr_reg110_shift                                (24)
#define  LG_M_PLUS_M_plus_reg110_wpr_reg111_shift                                (16)
#define  LG_M_PLUS_M_plus_reg110_wpr_reg112_shift                                (8)
#define  LG_M_PLUS_M_plus_reg110_wpr_reg113_shift                                (0)
#define  LG_M_PLUS_M_plus_reg110_wpr_reg110_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg110_wpr_reg111_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg110_wpr_reg112_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg110_wpr_reg113_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg110_wpr_reg110(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg110_wpr_reg111(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg110_wpr_reg112(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg110_wpr_reg113(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg110_get_wpr_reg110(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg110_get_wpr_reg111(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg110_get_wpr_reg112(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg110_get_wpr_reg113(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg114                                                0x18028D14
#define  LG_M_PLUS_M_plus_reg114_reg_addr                                        "0xB8028D14"
#define  LG_M_PLUS_M_plus_reg114_reg                                             0xB8028D14
#define  LG_M_PLUS_M_plus_reg114_inst_addr                                       "0x0052"
#define  set_LG_M_PLUS_M_plus_reg114_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg114_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg114_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg114_reg))
#define  LG_M_PLUS_M_plus_reg114_wpr_reg114_shift                                (24)
#define  LG_M_PLUS_M_plus_reg114_wpr_reg115_shift                                (16)
#define  LG_M_PLUS_M_plus_reg114_wpr_reg116_shift                                (8)
#define  LG_M_PLUS_M_plus_reg114_wpr_reg117_shift                                (0)
#define  LG_M_PLUS_M_plus_reg114_wpr_reg114_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg114_wpr_reg115_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg114_wpr_reg116_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg114_wpr_reg117_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg114_wpr_reg114(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg114_wpr_reg115(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg114_wpr_reg116(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg114_wpr_reg117(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg114_get_wpr_reg114(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg114_get_wpr_reg115(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg114_get_wpr_reg116(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg114_get_wpr_reg117(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg118                                                0x18028D18
#define  LG_M_PLUS_M_plus_reg118_reg_addr                                        "0xB8028D18"
#define  LG_M_PLUS_M_plus_reg118_reg                                             0xB8028D18
#define  LG_M_PLUS_M_plus_reg118_inst_addr                                       "0x0053"
#define  set_LG_M_PLUS_M_plus_reg118_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg118_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg118_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg118_reg))
#define  LG_M_PLUS_M_plus_reg118_wpr_reg118_shift                                (24)
#define  LG_M_PLUS_M_plus_reg118_wpr_reg119_shift                                (16)
#define  LG_M_PLUS_M_plus_reg118_wpr_reg11a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg118_wpr_reg11b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg118_wpr_reg118_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg118_wpr_reg119_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg118_wpr_reg11a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg118_wpr_reg11b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg118_wpr_reg118(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg118_wpr_reg119(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg118_wpr_reg11a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg118_wpr_reg11b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg118_get_wpr_reg118(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg118_get_wpr_reg119(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg118_get_wpr_reg11a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg118_get_wpr_reg11b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg11c                                                0x18028D1C
#define  LG_M_PLUS_M_plus_reg11c_reg_addr                                        "0xB8028D1C"
#define  LG_M_PLUS_M_plus_reg11c_reg                                             0xB8028D1C
#define  LG_M_PLUS_M_plus_reg11c_inst_addr                                       "0x0054"
#define  set_LG_M_PLUS_M_plus_reg11c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg11c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg11c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg11c_reg))
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg11c_wpr_reg11f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg11c_get_wpr_reg11c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg11c_get_wpr_reg11d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg11c_get_wpr_reg11e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg11c_get_wpr_reg11f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg120                                                0x18028D20
#define  LG_M_PLUS_M_plus_reg120_reg_addr                                        "0xB8028D20"
#define  LG_M_PLUS_M_plus_reg120_reg                                             0xB8028D20
#define  LG_M_PLUS_M_plus_reg120_inst_addr                                       "0x0055"
#define  set_LG_M_PLUS_M_plus_reg120_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg120_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg120_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg120_reg))
#define  LG_M_PLUS_M_plus_reg120_wpr_reg120_shift                                (24)
#define  LG_M_PLUS_M_plus_reg120_wpr_reg121_shift                                (16)
#define  LG_M_PLUS_M_plus_reg120_wpr_reg122_shift                                (8)
#define  LG_M_PLUS_M_plus_reg120_wpr_reg123_shift                                (0)
#define  LG_M_PLUS_M_plus_reg120_wpr_reg120_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg120_wpr_reg121_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg120_wpr_reg122_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg120_wpr_reg123_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg120_wpr_reg120(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg120_wpr_reg121(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg120_wpr_reg122(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg120_wpr_reg123(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg120_get_wpr_reg120(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg120_get_wpr_reg121(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg120_get_wpr_reg122(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg120_get_wpr_reg123(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg124                                                0x18028D24
#define  LG_M_PLUS_M_plus_reg124_reg_addr                                        "0xB8028D24"
#define  LG_M_PLUS_M_plus_reg124_reg                                             0xB8028D24
#define  LG_M_PLUS_M_plus_reg124_inst_addr                                       "0x0056"
#define  set_LG_M_PLUS_M_plus_reg124_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg124_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg124_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg124_reg))
#define  LG_M_PLUS_M_plus_reg124_wpr_reg124_shift                                (24)
#define  LG_M_PLUS_M_plus_reg124_wpr_reg125_shift                                (16)
#define  LG_M_PLUS_M_plus_reg124_wpr_reg126_shift                                (8)
#define  LG_M_PLUS_M_plus_reg124_wpr_reg127_shift                                (0)
#define  LG_M_PLUS_M_plus_reg124_wpr_reg124_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg124_wpr_reg125_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg124_wpr_reg126_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg124_wpr_reg127_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg124_wpr_reg124(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg124_wpr_reg125(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg124_wpr_reg126(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg124_wpr_reg127(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg124_get_wpr_reg124(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg124_get_wpr_reg125(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg124_get_wpr_reg126(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg124_get_wpr_reg127(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg128                                                0x18028D28
#define  LG_M_PLUS_M_plus_reg128_reg_addr                                        "0xB8028D28"
#define  LG_M_PLUS_M_plus_reg128_reg                                             0xB8028D28
#define  LG_M_PLUS_M_plus_reg128_inst_addr                                       "0x0057"
#define  set_LG_M_PLUS_M_plus_reg128_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg128_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg128_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg128_reg))
#define  LG_M_PLUS_M_plus_reg128_wpr_reg128_shift                                (24)
#define  LG_M_PLUS_M_plus_reg128_wpr_reg129_shift                                (16)
#define  LG_M_PLUS_M_plus_reg128_wpr_reg12a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg128_wpr_reg12b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg128_wpr_reg128_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg128_wpr_reg129_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg128_wpr_reg12a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg128_wpr_reg12b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg128_wpr_reg128(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg128_wpr_reg129(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg128_wpr_reg12a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg128_wpr_reg12b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg128_get_wpr_reg128(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg128_get_wpr_reg129(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg128_get_wpr_reg12a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg128_get_wpr_reg12b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg12c                                                0x18028D2C
#define  LG_M_PLUS_M_plus_reg12c_reg_addr                                        "0xB8028D2C"
#define  LG_M_PLUS_M_plus_reg12c_reg                                             0xB8028D2C
#define  LG_M_PLUS_M_plus_reg12c_inst_addr                                       "0x0058"
#define  set_LG_M_PLUS_M_plus_reg12c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg12c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg12c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg12c_reg))
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg12c_wpr_reg12f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg12c_get_wpr_reg12c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg12c_get_wpr_reg12d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg12c_get_wpr_reg12e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg12c_get_wpr_reg12f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg130                                                0x18028D30
#define  LG_M_PLUS_M_plus_reg130_reg_addr                                        "0xB8028D30"
#define  LG_M_PLUS_M_plus_reg130_reg                                             0xB8028D30
#define  LG_M_PLUS_M_plus_reg130_inst_addr                                       "0x0059"
#define  set_LG_M_PLUS_M_plus_reg130_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg130_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg130_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg130_reg))
#define  LG_M_PLUS_M_plus_reg130_wpr_reg130_shift                                (24)
#define  LG_M_PLUS_M_plus_reg130_wpr_reg131_shift                                (16)
#define  LG_M_PLUS_M_plus_reg130_wpr_reg132_shift                                (8)
#define  LG_M_PLUS_M_plus_reg130_wpr_reg133_shift                                (0)
#define  LG_M_PLUS_M_plus_reg130_wpr_reg130_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg130_wpr_reg131_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg130_wpr_reg132_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg130_wpr_reg133_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg130_wpr_reg130(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg130_wpr_reg131(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg130_wpr_reg132(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg130_wpr_reg133(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg130_get_wpr_reg130(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg130_get_wpr_reg131(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg130_get_wpr_reg132(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg130_get_wpr_reg133(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg134                                                0x18028D34
#define  LG_M_PLUS_M_plus_reg134_reg_addr                                        "0xB8028D34"
#define  LG_M_PLUS_M_plus_reg134_reg                                             0xB8028D34
#define  LG_M_PLUS_M_plus_reg134_inst_addr                                       "0x005A"
#define  set_LG_M_PLUS_M_plus_reg134_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg134_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg134_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg134_reg))
#define  LG_M_PLUS_M_plus_reg134_wpr_reg134_shift                                (24)
#define  LG_M_PLUS_M_plus_reg134_wpr_reg135_shift                                (16)
#define  LG_M_PLUS_M_plus_reg134_wpr_reg136_shift                                (8)
#define  LG_M_PLUS_M_plus_reg134_wpr_reg137_shift                                (0)
#define  LG_M_PLUS_M_plus_reg134_wpr_reg134_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg134_wpr_reg135_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg134_wpr_reg136_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg134_wpr_reg137_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg134_wpr_reg134(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg134_wpr_reg135(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg134_wpr_reg136(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg134_wpr_reg137(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg134_get_wpr_reg134(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg134_get_wpr_reg135(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg134_get_wpr_reg136(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg134_get_wpr_reg137(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg138                                                0x18028D38
#define  LG_M_PLUS_M_plus_reg138_reg_addr                                        "0xB8028D38"
#define  LG_M_PLUS_M_plus_reg138_reg                                             0xB8028D38
#define  LG_M_PLUS_M_plus_reg138_inst_addr                                       "0x005B"
#define  set_LG_M_PLUS_M_plus_reg138_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg138_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg138_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg138_reg))
#define  LG_M_PLUS_M_plus_reg138_wpr_reg138_shift                                (24)
#define  LG_M_PLUS_M_plus_reg138_wpr_reg139_shift                                (16)
#define  LG_M_PLUS_M_plus_reg138_wpr_reg13a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg138_wpr_reg13b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg138_wpr_reg138_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg138_wpr_reg139_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg138_wpr_reg13a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg138_wpr_reg13b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg138_wpr_reg138(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg138_wpr_reg139(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg138_wpr_reg13a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg138_wpr_reg13b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg138_get_wpr_reg138(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg138_get_wpr_reg139(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg138_get_wpr_reg13a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg138_get_wpr_reg13b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg13c                                                0x18028D3C
#define  LG_M_PLUS_M_plus_reg13c_reg_addr                                        "0xB8028D3C"
#define  LG_M_PLUS_M_plus_reg13c_reg                                             0xB8028D3C
#define  LG_M_PLUS_M_plus_reg13c_inst_addr                                       "0x005C"
#define  set_LG_M_PLUS_M_plus_reg13c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg13c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg13c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg13c_reg))
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg13c_wpr_reg13f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg13c_get_wpr_reg13c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg13c_get_wpr_reg13d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg13c_get_wpr_reg13e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg13c_get_wpr_reg13f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg140                                                0x18028D40
#define  LG_M_PLUS_M_plus_reg140_reg_addr                                        "0xB8028D40"
#define  LG_M_PLUS_M_plus_reg140_reg                                             0xB8028D40
#define  LG_M_PLUS_M_plus_reg140_inst_addr                                       "0x005D"
#define  set_LG_M_PLUS_M_plus_reg140_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg140_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg140_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg140_reg))
#define  LG_M_PLUS_M_plus_reg140_wpr_reg140_shift                                (24)
#define  LG_M_PLUS_M_plus_reg140_wpr_reg141_shift                                (16)
#define  LG_M_PLUS_M_plus_reg140_wpr_reg142_shift                                (8)
#define  LG_M_PLUS_M_plus_reg140_wpr_reg143_shift                                (0)
#define  LG_M_PLUS_M_plus_reg140_wpr_reg140_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg140_wpr_reg141_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg140_wpr_reg142_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg140_wpr_reg143_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg140_wpr_reg140(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg140_wpr_reg141(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg140_wpr_reg142(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg140_wpr_reg143(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg140_get_wpr_reg140(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg140_get_wpr_reg141(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg140_get_wpr_reg142(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg140_get_wpr_reg143(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg144                                                0x18028D44
#define  LG_M_PLUS_M_plus_reg144_reg_addr                                        "0xB8028D44"
#define  LG_M_PLUS_M_plus_reg144_reg                                             0xB8028D44
#define  LG_M_PLUS_M_plus_reg144_inst_addr                                       "0x005E"
#define  set_LG_M_PLUS_M_plus_reg144_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg144_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg144_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg144_reg))
#define  LG_M_PLUS_M_plus_reg144_wpr_reg144_shift                                (24)
#define  LG_M_PLUS_M_plus_reg144_wpr_reg145_shift                                (16)
#define  LG_M_PLUS_M_plus_reg144_wpr_reg146_shift                                (8)
#define  LG_M_PLUS_M_plus_reg144_wpr_reg147_shift                                (0)
#define  LG_M_PLUS_M_plus_reg144_wpr_reg144_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg144_wpr_reg145_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg144_wpr_reg146_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg144_wpr_reg147_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg144_wpr_reg144(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg144_wpr_reg145(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg144_wpr_reg146(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg144_wpr_reg147(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg144_get_wpr_reg144(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg144_get_wpr_reg145(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg144_get_wpr_reg146(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg144_get_wpr_reg147(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg148                                                0x18028D48
#define  LG_M_PLUS_M_plus_reg148_reg_addr                                        "0xB8028D48"
#define  LG_M_PLUS_M_plus_reg148_reg                                             0xB8028D48
#define  LG_M_PLUS_M_plus_reg148_inst_addr                                       "0x005F"
#define  set_LG_M_PLUS_M_plus_reg148_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg148_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg148_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg148_reg))
#define  LG_M_PLUS_M_plus_reg148_wpr_reg148_shift                                (24)
#define  LG_M_PLUS_M_plus_reg148_wpr_reg149_shift                                (16)
#define  LG_M_PLUS_M_plus_reg148_wpr_reg14a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg148_wpr_reg14b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg148_wpr_reg148_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg148_wpr_reg149_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg148_wpr_reg14a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg148_wpr_reg14b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg148_wpr_reg148(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg148_wpr_reg149(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg148_wpr_reg14a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg148_wpr_reg14b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg148_get_wpr_reg148(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg148_get_wpr_reg149(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg148_get_wpr_reg14a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg148_get_wpr_reg14b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg14c                                                0x18028D4C
#define  LG_M_PLUS_M_plus_reg14c_reg_addr                                        "0xB8028D4C"
#define  LG_M_PLUS_M_plus_reg14c_reg                                             0xB8028D4C
#define  LG_M_PLUS_M_plus_reg14c_inst_addr                                       "0x0060"
#define  set_LG_M_PLUS_M_plus_reg14c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg14c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg14c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg14c_reg))
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg14c_wpr_reg14f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg14c_get_wpr_reg14c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg14c_get_wpr_reg14d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg14c_get_wpr_reg14e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg14c_get_wpr_reg14f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg150                                                0x18028D50
#define  LG_M_PLUS_M_plus_reg150_reg_addr                                        "0xB8028D50"
#define  LG_M_PLUS_M_plus_reg150_reg                                             0xB8028D50
#define  LG_M_PLUS_M_plus_reg150_inst_addr                                       "0x0061"
#define  set_LG_M_PLUS_M_plus_reg150_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg150_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg150_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg150_reg))
#define  LG_M_PLUS_M_plus_reg150_wpr_reg150_shift                                (24)
#define  LG_M_PLUS_M_plus_reg150_wpr_reg151_shift                                (16)
#define  LG_M_PLUS_M_plus_reg150_wpr_reg152_shift                                (8)
#define  LG_M_PLUS_M_plus_reg150_wpr_reg153_shift                                (0)
#define  LG_M_PLUS_M_plus_reg150_wpr_reg150_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg150_wpr_reg151_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg150_wpr_reg152_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg150_wpr_reg153_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg150_wpr_reg150(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg150_wpr_reg151(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg150_wpr_reg152(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg150_wpr_reg153(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg150_get_wpr_reg150(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg150_get_wpr_reg151(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg150_get_wpr_reg152(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg150_get_wpr_reg153(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg154                                                0x18028D54
#define  LG_M_PLUS_M_plus_reg154_reg_addr                                        "0xB8028D54"
#define  LG_M_PLUS_M_plus_reg154_reg                                             0xB8028D54
#define  LG_M_PLUS_M_plus_reg154_inst_addr                                       "0x0062"
#define  set_LG_M_PLUS_M_plus_reg154_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg154_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg154_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg154_reg))
#define  LG_M_PLUS_M_plus_reg154_wpr_reg154_shift                                (24)
#define  LG_M_PLUS_M_plus_reg154_wpr_reg155_shift                                (16)
#define  LG_M_PLUS_M_plus_reg154_wpr_reg156_shift                                (8)
#define  LG_M_PLUS_M_plus_reg154_wpr_reg157_shift                                (0)
#define  LG_M_PLUS_M_plus_reg154_wpr_reg154_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg154_wpr_reg155_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg154_wpr_reg156_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg154_wpr_reg157_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg154_wpr_reg154(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg154_wpr_reg155(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg154_wpr_reg156(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg154_wpr_reg157(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg154_get_wpr_reg154(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg154_get_wpr_reg155(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg154_get_wpr_reg156(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg154_get_wpr_reg157(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg158                                                0x18028D58
#define  LG_M_PLUS_M_plus_reg158_reg_addr                                        "0xB8028D58"
#define  LG_M_PLUS_M_plus_reg158_reg                                             0xB8028D58
#define  LG_M_PLUS_M_plus_reg158_inst_addr                                       "0x0063"
#define  set_LG_M_PLUS_M_plus_reg158_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg158_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg158_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg158_reg))
#define  LG_M_PLUS_M_plus_reg158_wpr_reg158_shift                                (24)
#define  LG_M_PLUS_M_plus_reg158_wpr_reg159_shift                                (16)
#define  LG_M_PLUS_M_plus_reg158_wpr_reg15a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg158_wpr_reg15b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg158_wpr_reg158_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg158_wpr_reg159_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg158_wpr_reg15a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg158_wpr_reg15b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg158_wpr_reg158(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg158_wpr_reg159(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg158_wpr_reg15a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg158_wpr_reg15b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg158_get_wpr_reg158(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg158_get_wpr_reg159(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg158_get_wpr_reg15a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg158_get_wpr_reg15b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg15c                                                0x18028D5C
#define  LG_M_PLUS_M_plus_reg15c_reg_addr                                        "0xB8028D5C"
#define  LG_M_PLUS_M_plus_reg15c_reg                                             0xB8028D5C
#define  LG_M_PLUS_M_plus_reg15c_inst_addr                                       "0x0064"
#define  set_LG_M_PLUS_M_plus_reg15c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg15c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg15c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg15c_reg))
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg15c_wpr_reg15f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg15c_get_wpr_reg15c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg15c_get_wpr_reg15d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg15c_get_wpr_reg15e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg15c_get_wpr_reg15f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg160                                                0x18028D60
#define  LG_M_PLUS_M_plus_reg160_reg_addr                                        "0xB8028D60"
#define  LG_M_PLUS_M_plus_reg160_reg                                             0xB8028D60
#define  LG_M_PLUS_M_plus_reg160_inst_addr                                       "0x0065"
#define  set_LG_M_PLUS_M_plus_reg160_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg160_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg160_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg160_reg))
#define  LG_M_PLUS_M_plus_reg160_wpr_reg160_shift                                (24)
#define  LG_M_PLUS_M_plus_reg160_wpr_reg161_shift                                (16)
#define  LG_M_PLUS_M_plus_reg160_wpr_reg162_shift                                (8)
#define  LG_M_PLUS_M_plus_reg160_wpr_reg163_shift                                (0)
#define  LG_M_PLUS_M_plus_reg160_wpr_reg160_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg160_wpr_reg161_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg160_wpr_reg162_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg160_wpr_reg163_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg160_wpr_reg160(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg160_wpr_reg161(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg160_wpr_reg162(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg160_wpr_reg163(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg160_get_wpr_reg160(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg160_get_wpr_reg161(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg160_get_wpr_reg162(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg160_get_wpr_reg163(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg164                                                0x18028D64
#define  LG_M_PLUS_M_plus_reg164_reg_addr                                        "0xB8028D64"
#define  LG_M_PLUS_M_plus_reg164_reg                                             0xB8028D64
#define  LG_M_PLUS_M_plus_reg164_inst_addr                                       "0x0066"
#define  set_LG_M_PLUS_M_plus_reg164_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg164_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg164_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg164_reg))
#define  LG_M_PLUS_M_plus_reg164_wpr_reg164_shift                                (24)
#define  LG_M_PLUS_M_plus_reg164_wpr_reg165_shift                                (16)
#define  LG_M_PLUS_M_plus_reg164_wpr_reg166_shift                                (8)
#define  LG_M_PLUS_M_plus_reg164_wpr_reg167_shift                                (0)
#define  LG_M_PLUS_M_plus_reg164_wpr_reg164_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg164_wpr_reg165_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg164_wpr_reg166_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg164_wpr_reg167_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg164_wpr_reg164(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg164_wpr_reg165(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg164_wpr_reg166(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg164_wpr_reg167(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg164_get_wpr_reg164(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg164_get_wpr_reg165(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg164_get_wpr_reg166(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg164_get_wpr_reg167(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg168                                                0x18028D68
#define  LG_M_PLUS_M_plus_reg168_reg_addr                                        "0xB8028D68"
#define  LG_M_PLUS_M_plus_reg168_reg                                             0xB8028D68
#define  LG_M_PLUS_M_plus_reg168_inst_addr                                       "0x0067"
#define  set_LG_M_PLUS_M_plus_reg168_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg168_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg168_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg168_reg))
#define  LG_M_PLUS_M_plus_reg168_wpr_reg168_shift                                (24)
#define  LG_M_PLUS_M_plus_reg168_wpr_reg169_shift                                (16)
#define  LG_M_PLUS_M_plus_reg168_wpr_reg16a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg168_wpr_reg16b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg168_wpr_reg168_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg168_wpr_reg169_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg168_wpr_reg16a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg168_wpr_reg16b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg168_wpr_reg168(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg168_wpr_reg169(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg168_wpr_reg16a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg168_wpr_reg16b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg168_get_wpr_reg168(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg168_get_wpr_reg169(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg168_get_wpr_reg16a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg168_get_wpr_reg16b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg16c                                                0x18028D6C
#define  LG_M_PLUS_M_plus_reg16c_reg_addr                                        "0xB8028D6C"
#define  LG_M_PLUS_M_plus_reg16c_reg                                             0xB8028D6C
#define  LG_M_PLUS_M_plus_reg16c_inst_addr                                       "0x0068"
#define  set_LG_M_PLUS_M_plus_reg16c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg16c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg16c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg16c_reg))
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg16c_wpr_reg16f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg16c_get_wpr_reg16c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg16c_get_wpr_reg16d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg16c_get_wpr_reg16e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg16c_get_wpr_reg16f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg170                                                0x18028D70
#define  LG_M_PLUS_M_plus_reg170_reg_addr                                        "0xB8028D70"
#define  LG_M_PLUS_M_plus_reg170_reg                                             0xB8028D70
#define  LG_M_PLUS_M_plus_reg170_inst_addr                                       "0x0069"
#define  set_LG_M_PLUS_M_plus_reg170_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg170_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg170_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg170_reg))
#define  LG_M_PLUS_M_plus_reg170_wpr_reg170_shift                                (24)
#define  LG_M_PLUS_M_plus_reg170_wpr_reg171_shift                                (16)
#define  LG_M_PLUS_M_plus_reg170_wpr_reg172_shift                                (8)
#define  LG_M_PLUS_M_plus_reg170_wpr_reg173_shift                                (0)
#define  LG_M_PLUS_M_plus_reg170_wpr_reg170_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg170_wpr_reg171_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg170_wpr_reg172_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg170_wpr_reg173_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg170_wpr_reg170(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg170_wpr_reg171(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg170_wpr_reg172(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg170_wpr_reg173(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg170_get_wpr_reg170(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg170_get_wpr_reg171(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg170_get_wpr_reg172(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg170_get_wpr_reg173(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg174                                                0x18028D74
#define  LG_M_PLUS_M_plus_reg174_reg_addr                                        "0xB8028D74"
#define  LG_M_PLUS_M_plus_reg174_reg                                             0xB8028D74
#define  LG_M_PLUS_M_plus_reg174_inst_addr                                       "0x006A"
#define  set_LG_M_PLUS_M_plus_reg174_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg174_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg174_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg174_reg))
#define  LG_M_PLUS_M_plus_reg174_wpr_reg174_shift                                (24)
#define  LG_M_PLUS_M_plus_reg174_wpr_reg175_shift                                (16)
#define  LG_M_PLUS_M_plus_reg174_wpr_reg176_shift                                (8)
#define  LG_M_PLUS_M_plus_reg174_wpr_reg177_shift                                (0)
#define  LG_M_PLUS_M_plus_reg174_wpr_reg174_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg174_wpr_reg175_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg174_wpr_reg176_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg174_wpr_reg177_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg174_wpr_reg174(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg174_wpr_reg175(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg174_wpr_reg176(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg174_wpr_reg177(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg174_get_wpr_reg174(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg174_get_wpr_reg175(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg174_get_wpr_reg176(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg174_get_wpr_reg177(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg178                                                0x18028D78
#define  LG_M_PLUS_M_plus_reg178_reg_addr                                        "0xB8028D78"
#define  LG_M_PLUS_M_plus_reg178_reg                                             0xB8028D78
#define  LG_M_PLUS_M_plus_reg178_inst_addr                                       "0x006B"
#define  set_LG_M_PLUS_M_plus_reg178_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg178_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg178_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg178_reg))
#define  LG_M_PLUS_M_plus_reg178_wpr_reg178_shift                                (24)
#define  LG_M_PLUS_M_plus_reg178_wpr_reg179_shift                                (16)
#define  LG_M_PLUS_M_plus_reg178_wpr_reg17a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg178_wpr_reg17b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg178_wpr_reg178_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg178_wpr_reg179_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg178_wpr_reg17a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg178_wpr_reg17b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg178_wpr_reg178(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg178_wpr_reg179(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg178_wpr_reg17a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg178_wpr_reg17b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg178_get_wpr_reg178(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg178_get_wpr_reg179(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg178_get_wpr_reg17a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg178_get_wpr_reg17b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg17c                                                0x18028D7C
#define  LG_M_PLUS_M_plus_reg17c_reg_addr                                        "0xB8028D7C"
#define  LG_M_PLUS_M_plus_reg17c_reg                                             0xB8028D7C
#define  LG_M_PLUS_M_plus_reg17c_inst_addr                                       "0x006C"
#define  set_LG_M_PLUS_M_plus_reg17c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg17c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg17c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg17c_reg))
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg17c_wpr_reg17f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg17c_get_wpr_reg17c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg17c_get_wpr_reg17d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg17c_get_wpr_reg17e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg17c_get_wpr_reg17f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg180                                                0x18028D80
#define  LG_M_PLUS_M_plus_reg180_reg_addr                                        "0xB8028D80"
#define  LG_M_PLUS_M_plus_reg180_reg                                             0xB8028D80
#define  LG_M_PLUS_M_plus_reg180_inst_addr                                       "0x006D"
#define  set_LG_M_PLUS_M_plus_reg180_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg180_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg180_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg180_reg))
#define  LG_M_PLUS_M_plus_reg180_wpr_reg180_shift                                (24)
#define  LG_M_PLUS_M_plus_reg180_wpr_reg181_shift                                (16)
#define  LG_M_PLUS_M_plus_reg180_wpr_reg182_shift                                (8)
#define  LG_M_PLUS_M_plus_reg180_wpr_reg183_shift                                (0)
#define  LG_M_PLUS_M_plus_reg180_wpr_reg180_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg180_wpr_reg181_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg180_wpr_reg182_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg180_wpr_reg183_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg180_wpr_reg180(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg180_wpr_reg181(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg180_wpr_reg182(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg180_wpr_reg183(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg180_get_wpr_reg180(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg180_get_wpr_reg181(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg180_get_wpr_reg182(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg180_get_wpr_reg183(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg184                                                0x18028D84
#define  LG_M_PLUS_M_plus_reg184_reg_addr                                        "0xB8028D84"
#define  LG_M_PLUS_M_plus_reg184_reg                                             0xB8028D84
#define  LG_M_PLUS_M_plus_reg184_inst_addr                                       "0x006E"
#define  set_LG_M_PLUS_M_plus_reg184_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg184_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg184_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg184_reg))
#define  LG_M_PLUS_M_plus_reg184_wpr_reg184_shift                                (24)
#define  LG_M_PLUS_M_plus_reg184_wpr_reg185_shift                                (16)
#define  LG_M_PLUS_M_plus_reg184_wpr_reg186_shift                                (8)
#define  LG_M_PLUS_M_plus_reg184_wpr_reg187_shift                                (0)
#define  LG_M_PLUS_M_plus_reg184_wpr_reg184_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg184_wpr_reg185_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg184_wpr_reg186_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg184_wpr_reg187_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg184_wpr_reg184(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg184_wpr_reg185(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg184_wpr_reg186(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg184_wpr_reg187(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg184_get_wpr_reg184(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg184_get_wpr_reg185(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg184_get_wpr_reg186(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg184_get_wpr_reg187(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg188                                                0x18028D88
#define  LG_M_PLUS_M_plus_reg188_reg_addr                                        "0xB8028D88"
#define  LG_M_PLUS_M_plus_reg188_reg                                             0xB8028D88
#define  LG_M_PLUS_M_plus_reg188_inst_addr                                       "0x006F"
#define  set_LG_M_PLUS_M_plus_reg188_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg188_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg188_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg188_reg))
#define  LG_M_PLUS_M_plus_reg188_wpr_reg188_shift                                (24)
#define  LG_M_PLUS_M_plus_reg188_wpr_reg189_shift                                (16)
#define  LG_M_PLUS_M_plus_reg188_wpr_reg18a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg188_wpr_reg18b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg188_wpr_reg188_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg188_wpr_reg189_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg188_wpr_reg18a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg188_wpr_reg18b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg188_wpr_reg188(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg188_wpr_reg189(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg188_wpr_reg18a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg188_wpr_reg18b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg188_get_wpr_reg188(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg188_get_wpr_reg189(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg188_get_wpr_reg18a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg188_get_wpr_reg18b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg18c                                                0x18028D8C
#define  LG_M_PLUS_M_plus_reg18c_reg_addr                                        "0xB8028D8C"
#define  LG_M_PLUS_M_plus_reg18c_reg                                             0xB8028D8C
#define  LG_M_PLUS_M_plus_reg18c_inst_addr                                       "0x0070"
#define  set_LG_M_PLUS_M_plus_reg18c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg18c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg18c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg18c_reg))
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg18c_wpr_reg18f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg18c_get_wpr_reg18c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg18c_get_wpr_reg18d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg18c_get_wpr_reg18e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg18c_get_wpr_reg18f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg190                                                0x18028D90
#define  LG_M_PLUS_M_plus_reg190_reg_addr                                        "0xB8028D90"
#define  LG_M_PLUS_M_plus_reg190_reg                                             0xB8028D90
#define  LG_M_PLUS_M_plus_reg190_inst_addr                                       "0x0071"
#define  set_LG_M_PLUS_M_plus_reg190_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg190_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg190_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg190_reg))
#define  LG_M_PLUS_M_plus_reg190_wpr_reg190_shift                                (24)
#define  LG_M_PLUS_M_plus_reg190_wpr_reg191_shift                                (16)
#define  LG_M_PLUS_M_plus_reg190_wpr_reg192_shift                                (8)
#define  LG_M_PLUS_M_plus_reg190_wpr_reg193_shift                                (0)
#define  LG_M_PLUS_M_plus_reg190_wpr_reg190_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg190_wpr_reg191_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg190_wpr_reg192_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg190_wpr_reg193_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg190_wpr_reg190(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg190_wpr_reg191(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg190_wpr_reg192(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg190_wpr_reg193(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg190_get_wpr_reg190(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg190_get_wpr_reg191(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg190_get_wpr_reg192(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg190_get_wpr_reg193(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg194                                                0x18028D94
#define  LG_M_PLUS_M_plus_reg194_reg_addr                                        "0xB8028D94"
#define  LG_M_PLUS_M_plus_reg194_reg                                             0xB8028D94
#define  LG_M_PLUS_M_plus_reg194_inst_addr                                       "0x0072"
#define  set_LG_M_PLUS_M_plus_reg194_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg194_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg194_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg194_reg))
#define  LG_M_PLUS_M_plus_reg194_wpr_reg194_shift                                (24)
#define  LG_M_PLUS_M_plus_reg194_wpr_reg195_shift                                (16)
#define  LG_M_PLUS_M_plus_reg194_wpr_reg196_shift                                (8)
#define  LG_M_PLUS_M_plus_reg194_wpr_reg197_shift                                (0)
#define  LG_M_PLUS_M_plus_reg194_wpr_reg194_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg194_wpr_reg195_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg194_wpr_reg196_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg194_wpr_reg197_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg194_wpr_reg194(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg194_wpr_reg195(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg194_wpr_reg196(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg194_wpr_reg197(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg194_get_wpr_reg194(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg194_get_wpr_reg195(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg194_get_wpr_reg196(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg194_get_wpr_reg197(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg198                                                0x18028D98
#define  LG_M_PLUS_M_plus_reg198_reg_addr                                        "0xB8028D98"
#define  LG_M_PLUS_M_plus_reg198_reg                                             0xB8028D98
#define  LG_M_PLUS_M_plus_reg198_inst_addr                                       "0x0073"
#define  set_LG_M_PLUS_M_plus_reg198_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg198_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg198_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg198_reg))
#define  LG_M_PLUS_M_plus_reg198_wpr_reg198_shift                                (24)
#define  LG_M_PLUS_M_plus_reg198_wpr_reg199_shift                                (16)
#define  LG_M_PLUS_M_plus_reg198_wpr_reg19a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg198_wpr_reg19b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg198_wpr_reg198_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg198_wpr_reg199_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg198_wpr_reg19a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg198_wpr_reg19b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg198_wpr_reg198(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg198_wpr_reg199(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg198_wpr_reg19a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg198_wpr_reg19b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg198_get_wpr_reg198(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg198_get_wpr_reg199(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg198_get_wpr_reg19a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg198_get_wpr_reg19b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg19c                                                0x18028D9C
#define  LG_M_PLUS_M_plus_reg19c_reg_addr                                        "0xB8028D9C"
#define  LG_M_PLUS_M_plus_reg19c_reg                                             0xB8028D9C
#define  LG_M_PLUS_M_plus_reg19c_inst_addr                                       "0x0074"
#define  set_LG_M_PLUS_M_plus_reg19c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg19c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg19c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg19c_reg))
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg19c_wpr_reg19f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg19c_get_wpr_reg19c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg19c_get_wpr_reg19d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg19c_get_wpr_reg19e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg19c_get_wpr_reg19f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1a0                                                0x18028DA0
#define  LG_M_PLUS_M_plus_reg1a0_reg_addr                                        "0xB8028DA0"
#define  LG_M_PLUS_M_plus_reg1a0_reg                                             0xB8028DA0
#define  LG_M_PLUS_M_plus_reg1a0_inst_addr                                       "0x0075"
#define  set_LG_M_PLUS_M_plus_reg1a0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1a0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1a0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1a0_reg))
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1a0_wpr_reg1a3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1a0_get_wpr_reg1a0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1a0_get_wpr_reg1a1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1a0_get_wpr_reg1a2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1a0_get_wpr_reg1a3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1a4                                                0x18028DA4
#define  LG_M_PLUS_M_plus_reg1a4_reg_addr                                        "0xB8028DA4"
#define  LG_M_PLUS_M_plus_reg1a4_reg                                             0xB8028DA4
#define  LG_M_PLUS_M_plus_reg1a4_inst_addr                                       "0x0076"
#define  set_LG_M_PLUS_M_plus_reg1a4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1a4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1a4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1a4_reg))
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1a4_wpr_reg1a7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1a4_get_wpr_reg1a4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1a4_get_wpr_reg1a5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1a4_get_wpr_reg1a6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1a4_get_wpr_reg1a7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1a8                                                0x18028DA8
#define  LG_M_PLUS_M_plus_reg1a8_reg_addr                                        "0xB8028DA8"
#define  LG_M_PLUS_M_plus_reg1a8_reg                                             0xB8028DA8
#define  LG_M_PLUS_M_plus_reg1a8_inst_addr                                       "0x0077"
#define  set_LG_M_PLUS_M_plus_reg1a8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1a8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1a8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1a8_reg))
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1a8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1a9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1aa_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1ab_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1a8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1a9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1aa_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1ab_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1a8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1a9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1aa(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1a8_wpr_reg1ab(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1a8_get_wpr_reg1a8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1a8_get_wpr_reg1a9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1a8_get_wpr_reg1aa(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1a8_get_wpr_reg1ab(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1ac                                                0x18028DAC
#define  LG_M_PLUS_M_plus_reg1ac_reg_addr                                        "0xB8028DAC"
#define  LG_M_PLUS_M_plus_reg1ac_reg                                             0xB8028DAC
#define  LG_M_PLUS_M_plus_reg1ac_inst_addr                                       "0x0078"
#define  set_LG_M_PLUS_M_plus_reg1ac_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1ac_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1ac_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1ac_reg))
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1ac_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1ad_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1ae_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1af_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1ac_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1ad_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1ae_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1af_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1ac(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1ad(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1ae(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1ac_wpr_reg1af(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1ac_get_wpr_reg1ac(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1ac_get_wpr_reg1ad(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1ac_get_wpr_reg1ae(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1ac_get_wpr_reg1af(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1b0                                                0x18028DB0
#define  LG_M_PLUS_M_plus_reg1b0_reg_addr                                        "0xB8028DB0"
#define  LG_M_PLUS_M_plus_reg1b0_reg                                             0xB8028DB0
#define  LG_M_PLUS_M_plus_reg1b0_inst_addr                                       "0x0079"
#define  set_LG_M_PLUS_M_plus_reg1b0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1b0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1b0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1b0_reg))
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1b0_wpr_reg1b3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1b0_get_wpr_reg1b0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1b0_get_wpr_reg1b1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1b0_get_wpr_reg1b2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1b0_get_wpr_reg1b3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1b4                                                0x18028DB4
#define  LG_M_PLUS_M_plus_reg1b4_reg_addr                                        "0xB8028DB4"
#define  LG_M_PLUS_M_plus_reg1b4_reg                                             0xB8028DB4
#define  LG_M_PLUS_M_plus_reg1b4_inst_addr                                       "0x007A"
#define  set_LG_M_PLUS_M_plus_reg1b4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1b4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1b4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1b4_reg))
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1b4_wpr_reg1b7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1b4_get_wpr_reg1b4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1b4_get_wpr_reg1b5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1b4_get_wpr_reg1b6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1b4_get_wpr_reg1b7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1b8                                                0x18028DB8
#define  LG_M_PLUS_M_plus_reg1b8_reg_addr                                        "0xB8028DB8"
#define  LG_M_PLUS_M_plus_reg1b8_reg                                             0xB8028DB8
#define  LG_M_PLUS_M_plus_reg1b8_inst_addr                                       "0x007B"
#define  set_LG_M_PLUS_M_plus_reg1b8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1b8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1b8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1b8_reg))
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1b8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1b9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1ba_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1bb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1b8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1b9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1ba_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1bb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1b8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1b9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1ba(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1b8_wpr_reg1bb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1b8_get_wpr_reg1b8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1b8_get_wpr_reg1b9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1b8_get_wpr_reg1ba(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1b8_get_wpr_reg1bb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1bc                                                0x18028DBC
#define  LG_M_PLUS_M_plus_reg1bc_reg_addr                                        "0xB8028DBC"
#define  LG_M_PLUS_M_plus_reg1bc_reg                                             0xB8028DBC
#define  LG_M_PLUS_M_plus_reg1bc_inst_addr                                       "0x007C"
#define  set_LG_M_PLUS_M_plus_reg1bc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1bc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1bc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1bc_reg))
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1bc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1bd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1be_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1bf_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1bc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1bd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1be_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1bf_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1bc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1bd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1be(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1bc_wpr_reg1bf(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1bc_get_wpr_reg1bc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1bc_get_wpr_reg1bd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1bc_get_wpr_reg1be(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1bc_get_wpr_reg1bf(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1c0                                                0x18028DC0
#define  LG_M_PLUS_M_plus_reg1c0_reg_addr                                        "0xB8028DC0"
#define  LG_M_PLUS_M_plus_reg1c0_reg                                             0xB8028DC0
#define  LG_M_PLUS_M_plus_reg1c0_inst_addr                                       "0x007D"
#define  set_LG_M_PLUS_M_plus_reg1c0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1c0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1c0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1c0_reg))
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1c0_wpr_reg1c3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1c0_get_wpr_reg1c0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1c0_get_wpr_reg1c1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1c0_get_wpr_reg1c2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1c0_get_wpr_reg1c3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1c4                                                0x18028DC4
#define  LG_M_PLUS_M_plus_reg1c4_reg_addr                                        "0xB8028DC4"
#define  LG_M_PLUS_M_plus_reg1c4_reg                                             0xB8028DC4
#define  LG_M_PLUS_M_plus_reg1c4_inst_addr                                       "0x007E"
#define  set_LG_M_PLUS_M_plus_reg1c4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1c4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1c4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1c4_reg))
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1c4_wpr_reg1c7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1c4_get_wpr_reg1c4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1c4_get_wpr_reg1c5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1c4_get_wpr_reg1c6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1c4_get_wpr_reg1c7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1c8                                                0x18028DC8
#define  LG_M_PLUS_M_plus_reg1c8_reg_addr                                        "0xB8028DC8"
#define  LG_M_PLUS_M_plus_reg1c8_reg                                             0xB8028DC8
#define  LG_M_PLUS_M_plus_reg1c8_inst_addr                                       "0x007F"
#define  set_LG_M_PLUS_M_plus_reg1c8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1c8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1c8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1c8_reg))
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1c8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1c9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1ca_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1cb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1c8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1c9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1ca_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1cb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1c8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1c9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1ca(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1c8_wpr_reg1cb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1c8_get_wpr_reg1c8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1c8_get_wpr_reg1c9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1c8_get_wpr_reg1ca(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1c8_get_wpr_reg1cb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1cc                                                0x18028DCC
#define  LG_M_PLUS_M_plus_reg1cc_reg_addr                                        "0xB8028DCC"
#define  LG_M_PLUS_M_plus_reg1cc_reg                                             0xB8028DCC
#define  LG_M_PLUS_M_plus_reg1cc_inst_addr                                       "0x0080"
#define  set_LG_M_PLUS_M_plus_reg1cc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1cc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1cc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1cc_reg))
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1cc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1cd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1ce_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1cf_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1cc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1cd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1ce_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1cf_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1cc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1cd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1ce(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1cc_wpr_reg1cf(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1cc_get_wpr_reg1cc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1cc_get_wpr_reg1cd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1cc_get_wpr_reg1ce(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1cc_get_wpr_reg1cf(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1d0                                                0x18028DD0
#define  LG_M_PLUS_M_plus_reg1d0_reg_addr                                        "0xB8028DD0"
#define  LG_M_PLUS_M_plus_reg1d0_reg                                             0xB8028DD0
#define  LG_M_PLUS_M_plus_reg1d0_inst_addr                                       "0x0081"
#define  set_LG_M_PLUS_M_plus_reg1d0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1d0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1d0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1d0_reg))
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1d0_wpr_reg1d3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1d0_get_wpr_reg1d0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1d0_get_wpr_reg1d1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1d0_get_wpr_reg1d2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1d0_get_wpr_reg1d3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1d4                                                0x18028DD4
#define  LG_M_PLUS_M_plus_reg1d4_reg_addr                                        "0xB8028DD4"
#define  LG_M_PLUS_M_plus_reg1d4_reg                                             0xB8028DD4
#define  LG_M_PLUS_M_plus_reg1d4_inst_addr                                       "0x0082"
#define  set_LG_M_PLUS_M_plus_reg1d4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1d4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1d4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1d4_reg))
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1d4_wpr_reg1d7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1d4_get_wpr_reg1d4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1d4_get_wpr_reg1d5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1d4_get_wpr_reg1d6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1d4_get_wpr_reg1d7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1d8                                                0x18028DD8
#define  LG_M_PLUS_M_plus_reg1d8_reg_addr                                        "0xB8028DD8"
#define  LG_M_PLUS_M_plus_reg1d8_reg                                             0xB8028DD8
#define  LG_M_PLUS_M_plus_reg1d8_inst_addr                                       "0x0083"
#define  set_LG_M_PLUS_M_plus_reg1d8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1d8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1d8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1d8_reg))
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1d8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1d9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1da_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1db_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1d8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1d9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1da_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1db_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1d8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1d9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1da(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1d8_wpr_reg1db(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1d8_get_wpr_reg1d8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1d8_get_wpr_reg1d9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1d8_get_wpr_reg1da(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1d8_get_wpr_reg1db(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1dc                                                0x18028DDC
#define  LG_M_PLUS_M_plus_reg1dc_reg_addr                                        "0xB8028DDC"
#define  LG_M_PLUS_M_plus_reg1dc_reg                                             0xB8028DDC
#define  LG_M_PLUS_M_plus_reg1dc_inst_addr                                       "0x0084"
#define  set_LG_M_PLUS_M_plus_reg1dc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1dc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1dc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1dc_reg))
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1dc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1dd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1de_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1df_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1dc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1dd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1de_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1df_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1dc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1dd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1de(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1dc_wpr_reg1df(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1dc_get_wpr_reg1dc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1dc_get_wpr_reg1dd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1dc_get_wpr_reg1de(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1dc_get_wpr_reg1df(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1e0                                                0x18028DE0
#define  LG_M_PLUS_M_plus_reg1e0_reg_addr                                        "0xB8028DE0"
#define  LG_M_PLUS_M_plus_reg1e0_reg                                             0xB8028DE0
#define  LG_M_PLUS_M_plus_reg1e0_inst_addr                                       "0x0085"
#define  set_LG_M_PLUS_M_plus_reg1e0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1e0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1e0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1e0_reg))
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1e0_wpr_reg1e3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1e0_get_wpr_reg1e0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1e0_get_wpr_reg1e1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1e0_get_wpr_reg1e2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1e0_get_wpr_reg1e3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1e4                                                0x18028DE4
#define  LG_M_PLUS_M_plus_reg1e4_reg_addr                                        "0xB8028DE4"
#define  LG_M_PLUS_M_plus_reg1e4_reg                                             0xB8028DE4
#define  LG_M_PLUS_M_plus_reg1e4_inst_addr                                       "0x0086"
#define  set_LG_M_PLUS_M_plus_reg1e4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1e4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1e4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1e4_reg))
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1e4_wpr_reg1e7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1e4_get_wpr_reg1e4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1e4_get_wpr_reg1e5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1e4_get_wpr_reg1e6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1e4_get_wpr_reg1e7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1e8                                                0x18028DE8
#define  LG_M_PLUS_M_plus_reg1e8_reg_addr                                        "0xB8028DE8"
#define  LG_M_PLUS_M_plus_reg1e8_reg                                             0xB8028DE8
#define  LG_M_PLUS_M_plus_reg1e8_inst_addr                                       "0x0087"
#define  set_LG_M_PLUS_M_plus_reg1e8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1e8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1e8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1e8_reg))
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1e8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1e9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1ea_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1eb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1e8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1e9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1ea_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1eb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1e8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1e9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1ea(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1e8_wpr_reg1eb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1e8_get_wpr_reg1e8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1e8_get_wpr_reg1e9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1e8_get_wpr_reg1ea(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1e8_get_wpr_reg1eb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1ec                                                0x18028DEC
#define  LG_M_PLUS_M_plus_reg1ec_reg_addr                                        "0xB8028DEC"
#define  LG_M_PLUS_M_plus_reg1ec_reg                                             0xB8028DEC
#define  LG_M_PLUS_M_plus_reg1ec_inst_addr                                       "0x0088"
#define  set_LG_M_PLUS_M_plus_reg1ec_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1ec_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1ec_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1ec_reg))
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ec_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ed_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ee_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ef_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ec_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ed_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ee_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ef_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ec(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ed(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ee(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1ec_wpr_reg1ef(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1ec_get_wpr_reg1ec(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1ec_get_wpr_reg1ed(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1ec_get_wpr_reg1ee(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1ec_get_wpr_reg1ef(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1f0                                                0x18028DF0
#define  LG_M_PLUS_M_plus_reg1f0_reg_addr                                        "0xB8028DF0"
#define  LG_M_PLUS_M_plus_reg1f0_reg                                             0xB8028DF0
#define  LG_M_PLUS_M_plus_reg1f0_inst_addr                                       "0x0089"
#define  set_LG_M_PLUS_M_plus_reg1f0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1f0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1f0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1f0_reg))
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1f0_wpr_reg1f3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1f0_get_wpr_reg1f0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1f0_get_wpr_reg1f1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1f0_get_wpr_reg1f2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1f0_get_wpr_reg1f3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1f4                                                0x18028DF4
#define  LG_M_PLUS_M_plus_reg1f4_reg_addr                                        "0xB8028DF4"
#define  LG_M_PLUS_M_plus_reg1f4_reg                                             0xB8028DF4
#define  LG_M_PLUS_M_plus_reg1f4_inst_addr                                       "0x008A"
#define  set_LG_M_PLUS_M_plus_reg1f4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1f4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1f4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1f4_reg))
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1f4_wpr_reg1f7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1f4_get_wpr_reg1f4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1f4_get_wpr_reg1f5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1f4_get_wpr_reg1f6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1f4_get_wpr_reg1f7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1f8                                                0x18028DF8
#define  LG_M_PLUS_M_plus_reg1f8_reg_addr                                        "0xB8028DF8"
#define  LG_M_PLUS_M_plus_reg1f8_reg                                             0xB8028DF8
#define  LG_M_PLUS_M_plus_reg1f8_inst_addr                                       "0x008B"
#define  set_LG_M_PLUS_M_plus_reg1f8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1f8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1f8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1f8_reg))
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1f8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1f9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1fa_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1fb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1f8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1f9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1fa_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1fb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1f8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1f9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1fa(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1f8_wpr_reg1fb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1f8_get_wpr_reg1f8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1f8_get_wpr_reg1f9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1f8_get_wpr_reg1fa(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1f8_get_wpr_reg1fb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg1fc                                                0x18028DFC
#define  LG_M_PLUS_M_plus_reg1fc_reg_addr                                        "0xB8028DFC"
#define  LG_M_PLUS_M_plus_reg1fc_reg                                             0xB8028DFC
#define  LG_M_PLUS_M_plus_reg1fc_inst_addr                                       "0x008C"
#define  set_LG_M_PLUS_M_plus_reg1fc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1fc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg1fc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg1fc_reg))
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1fc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1fd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1fe_shift                                (8)
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1ff_shift                                (0)
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1fc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1fd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1fe_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1ff_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1fc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1fd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1fe(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg1fc_wpr_reg1ff(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg1fc_get_wpr_reg1fc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg1fc_get_wpr_reg1fd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg1fc_get_wpr_reg1fe(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg1fc_get_wpr_reg1ff(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg200                                                0x18029600
#define  LG_M_PLUS_M_plus_reg200_reg_addr                                        "0xB8029600"
#define  LG_M_PLUS_M_plus_reg200_reg                                             0xB8029600
#define  LG_M_PLUS_M_plus_reg200_inst_addr                                       "0x008D"
#define  set_LG_M_PLUS_M_plus_reg200_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg200_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg200_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg200_reg))
#define  LG_M_PLUS_M_plus_reg200_wpr_reg200_shift                                (24)
#define  LG_M_PLUS_M_plus_reg200_wpr_reg201_shift                                (16)
#define  LG_M_PLUS_M_plus_reg200_wpr_reg202_shift                                (8)
#define  LG_M_PLUS_M_plus_reg200_wpr_reg203_shift                                (0)
#define  LG_M_PLUS_M_plus_reg200_wpr_reg200_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg200_wpr_reg201_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg200_wpr_reg202_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg200_wpr_reg203_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg200_wpr_reg200(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg200_wpr_reg201(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg200_wpr_reg202(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg200_wpr_reg203(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg200_get_wpr_reg200(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg200_get_wpr_reg201(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg200_get_wpr_reg202(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg200_get_wpr_reg203(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg204                                                0x18029604
#define  LG_M_PLUS_M_plus_reg204_reg_addr                                        "0xB8029604"
#define  LG_M_PLUS_M_plus_reg204_reg                                             0xB8029604
#define  LG_M_PLUS_M_plus_reg204_inst_addr                                       "0x008E"
#define  set_LG_M_PLUS_M_plus_reg204_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg204_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg204_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg204_reg))
#define  LG_M_PLUS_M_plus_reg204_wpr_reg204_shift                                (24)
#define  LG_M_PLUS_M_plus_reg204_wpr_reg205_shift                                (16)
#define  LG_M_PLUS_M_plus_reg204_wpr_reg206_shift                                (8)
#define  LG_M_PLUS_M_plus_reg204_wpr_reg207_shift                                (0)
#define  LG_M_PLUS_M_plus_reg204_wpr_reg204_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg204_wpr_reg205_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg204_wpr_reg206_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg204_wpr_reg207_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg204_wpr_reg204(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg204_wpr_reg205(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg204_wpr_reg206(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg204_wpr_reg207(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg204_get_wpr_reg204(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg204_get_wpr_reg205(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg204_get_wpr_reg206(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg204_get_wpr_reg207(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg208                                                0x18029608
#define  LG_M_PLUS_M_plus_reg208_reg_addr                                        "0xB8029608"
#define  LG_M_PLUS_M_plus_reg208_reg                                             0xB8029608
#define  LG_M_PLUS_M_plus_reg208_inst_addr                                       "0x008F"
#define  set_LG_M_PLUS_M_plus_reg208_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg208_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg208_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg208_reg))
#define  LG_M_PLUS_M_plus_reg208_wpr_reg208_shift                                (24)
#define  LG_M_PLUS_M_plus_reg208_wpr_reg209_shift                                (16)
#define  LG_M_PLUS_M_plus_reg208_wpr_reg20a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg208_wpr_reg20b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg208_wpr_reg208_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg208_wpr_reg209_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg208_wpr_reg20a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg208_wpr_reg20b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg208_wpr_reg208(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg208_wpr_reg209(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg208_wpr_reg20a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg208_wpr_reg20b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg208_get_wpr_reg208(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg208_get_wpr_reg209(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg208_get_wpr_reg20a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg208_get_wpr_reg20b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg20c                                                0x1802960C
#define  LG_M_PLUS_M_plus_reg20c_reg_addr                                        "0xB802960C"
#define  LG_M_PLUS_M_plus_reg20c_reg                                             0xB802960C
#define  LG_M_PLUS_M_plus_reg20c_inst_addr                                       "0x0090"
#define  set_LG_M_PLUS_M_plus_reg20c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg20c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg20c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg20c_reg))
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg20c_wpr_reg20f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg20c_get_wpr_reg20c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg20c_get_wpr_reg20d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg20c_get_wpr_reg20e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg20c_get_wpr_reg20f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg210                                                0x18029610
#define  LG_M_PLUS_M_plus_reg210_reg_addr                                        "0xB8029610"
#define  LG_M_PLUS_M_plus_reg210_reg                                             0xB8029610
#define  LG_M_PLUS_M_plus_reg210_inst_addr                                       "0x0091"
#define  set_LG_M_PLUS_M_plus_reg210_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg210_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg210_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg210_reg))
#define  LG_M_PLUS_M_plus_reg210_wpr_reg210_shift                                (24)
#define  LG_M_PLUS_M_plus_reg210_wpr_reg211_shift                                (16)
#define  LG_M_PLUS_M_plus_reg210_wpr_reg212_shift                                (8)
#define  LG_M_PLUS_M_plus_reg210_wpr_reg213_shift                                (0)
#define  LG_M_PLUS_M_plus_reg210_wpr_reg210_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg210_wpr_reg211_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg210_wpr_reg212_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg210_wpr_reg213_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg210_wpr_reg210(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg210_wpr_reg211(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg210_wpr_reg212(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg210_wpr_reg213(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg210_get_wpr_reg210(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg210_get_wpr_reg211(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg210_get_wpr_reg212(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg210_get_wpr_reg213(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg214                                                0x18029614
#define  LG_M_PLUS_M_plus_reg214_reg_addr                                        "0xB8029614"
#define  LG_M_PLUS_M_plus_reg214_reg                                             0xB8029614
#define  LG_M_PLUS_M_plus_reg214_inst_addr                                       "0x0092"
#define  set_LG_M_PLUS_M_plus_reg214_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg214_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg214_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg214_reg))
#define  LG_M_PLUS_M_plus_reg214_wpr_reg214_shift                                (24)
#define  LG_M_PLUS_M_plus_reg214_wpr_reg215_shift                                (16)
#define  LG_M_PLUS_M_plus_reg214_wpr_reg216_shift                                (8)
#define  LG_M_PLUS_M_plus_reg214_wpr_reg217_shift                                (0)
#define  LG_M_PLUS_M_plus_reg214_wpr_reg214_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg214_wpr_reg215_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg214_wpr_reg216_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg214_wpr_reg217_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg214_wpr_reg214(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg214_wpr_reg215(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg214_wpr_reg216(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg214_wpr_reg217(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg214_get_wpr_reg214(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg214_get_wpr_reg215(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg214_get_wpr_reg216(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg214_get_wpr_reg217(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg218                                                0x18029618
#define  LG_M_PLUS_M_plus_reg218_reg_addr                                        "0xB8029618"
#define  LG_M_PLUS_M_plus_reg218_reg                                             0xB8029618
#define  LG_M_PLUS_M_plus_reg218_inst_addr                                       "0x0093"
#define  set_LG_M_PLUS_M_plus_reg218_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg218_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg218_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg218_reg))
#define  LG_M_PLUS_M_plus_reg218_wpr_reg218_shift                                (24)
#define  LG_M_PLUS_M_plus_reg218_wpr_reg219_shift                                (16)
#define  LG_M_PLUS_M_plus_reg218_wpr_reg21a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg218_wpr_reg21b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg218_wpr_reg218_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg218_wpr_reg219_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg218_wpr_reg21a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg218_wpr_reg21b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg218_wpr_reg218(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg218_wpr_reg219(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg218_wpr_reg21a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg218_wpr_reg21b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg218_get_wpr_reg218(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg218_get_wpr_reg219(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg218_get_wpr_reg21a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg218_get_wpr_reg21b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg21c                                                0x1802961C
#define  LG_M_PLUS_M_plus_reg21c_reg_addr                                        "0xB802961C"
#define  LG_M_PLUS_M_plus_reg21c_reg                                             0xB802961C
#define  LG_M_PLUS_M_plus_reg21c_inst_addr                                       "0x0094"
#define  set_LG_M_PLUS_M_plus_reg21c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg21c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg21c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg21c_reg))
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg21c_wpr_reg21f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg21c_get_wpr_reg21c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg21c_get_wpr_reg21d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg21c_get_wpr_reg21e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg21c_get_wpr_reg21f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg220                                                0x18029620
#define  LG_M_PLUS_M_plus_reg220_reg_addr                                        "0xB8029620"
#define  LG_M_PLUS_M_plus_reg220_reg                                             0xB8029620
#define  LG_M_PLUS_M_plus_reg220_inst_addr                                       "0x0095"
#define  set_LG_M_PLUS_M_plus_reg220_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg220_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg220_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg220_reg))
#define  LG_M_PLUS_M_plus_reg220_wpr_reg220_shift                                (24)
#define  LG_M_PLUS_M_plus_reg220_wpr_reg221_shift                                (16)
#define  LG_M_PLUS_M_plus_reg220_wpr_reg222_shift                                (8)
#define  LG_M_PLUS_M_plus_reg220_wpr_reg223_shift                                (0)
#define  LG_M_PLUS_M_plus_reg220_wpr_reg220_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg220_wpr_reg221_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg220_wpr_reg222_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg220_wpr_reg223_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg220_wpr_reg220(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg220_wpr_reg221(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg220_wpr_reg222(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg220_wpr_reg223(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg220_get_wpr_reg220(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg220_get_wpr_reg221(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg220_get_wpr_reg222(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg220_get_wpr_reg223(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg224                                                0x18029624
#define  LG_M_PLUS_M_plus_reg224_reg_addr                                        "0xB8029624"
#define  LG_M_PLUS_M_plus_reg224_reg                                             0xB8029624
#define  LG_M_PLUS_M_plus_reg224_inst_addr                                       "0x0096"
#define  set_LG_M_PLUS_M_plus_reg224_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg224_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg224_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg224_reg))
#define  LG_M_PLUS_M_plus_reg224_wpr_reg224_shift                                (24)
#define  LG_M_PLUS_M_plus_reg224_wpr_reg225_shift                                (16)
#define  LG_M_PLUS_M_plus_reg224_wpr_reg226_shift                                (8)
#define  LG_M_PLUS_M_plus_reg224_wpr_reg227_shift                                (0)
#define  LG_M_PLUS_M_plus_reg224_wpr_reg224_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg224_wpr_reg225_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg224_wpr_reg226_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg224_wpr_reg227_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg224_wpr_reg224(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg224_wpr_reg225(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg224_wpr_reg226(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg224_wpr_reg227(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg224_get_wpr_reg224(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg224_get_wpr_reg225(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg224_get_wpr_reg226(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg224_get_wpr_reg227(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg228                                                0x18029628
#define  LG_M_PLUS_M_plus_reg228_reg_addr                                        "0xB8029628"
#define  LG_M_PLUS_M_plus_reg228_reg                                             0xB8029628
#define  LG_M_PLUS_M_plus_reg228_inst_addr                                       "0x0097"
#define  set_LG_M_PLUS_M_plus_reg228_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg228_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg228_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg228_reg))
#define  LG_M_PLUS_M_plus_reg228_wpr_reg228_shift                                (24)
#define  LG_M_PLUS_M_plus_reg228_wpr_reg229_shift                                (16)
#define  LG_M_PLUS_M_plus_reg228_wpr_reg22a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg228_wpr_reg22b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg228_wpr_reg228_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg228_wpr_reg229_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg228_wpr_reg22a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg228_wpr_reg22b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg228_wpr_reg228(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg228_wpr_reg229(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg228_wpr_reg22a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg228_wpr_reg22b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg228_get_wpr_reg228(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg228_get_wpr_reg229(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg228_get_wpr_reg22a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg228_get_wpr_reg22b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg22c                                                0x1802962C
#define  LG_M_PLUS_M_plus_reg22c_reg_addr                                        "0xB802962C"
#define  LG_M_PLUS_M_plus_reg22c_reg                                             0xB802962C
#define  LG_M_PLUS_M_plus_reg22c_inst_addr                                       "0x0098"
#define  set_LG_M_PLUS_M_plus_reg22c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg22c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg22c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg22c_reg))
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg22c_wpr_reg22f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg22c_get_wpr_reg22c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg22c_get_wpr_reg22d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg22c_get_wpr_reg22e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg22c_get_wpr_reg22f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg230                                                0x18029630
#define  LG_M_PLUS_M_plus_reg230_reg_addr                                        "0xB8029630"
#define  LG_M_PLUS_M_plus_reg230_reg                                             0xB8029630
#define  LG_M_PLUS_M_plus_reg230_inst_addr                                       "0x0099"
#define  set_LG_M_PLUS_M_plus_reg230_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg230_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg230_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg230_reg))
#define  LG_M_PLUS_M_plus_reg230_wpr_reg230_shift                                (24)
#define  LG_M_PLUS_M_plus_reg230_wpr_reg231_shift                                (16)
#define  LG_M_PLUS_M_plus_reg230_wpr_reg232_shift                                (8)
#define  LG_M_PLUS_M_plus_reg230_wpr_reg233_shift                                (0)
#define  LG_M_PLUS_M_plus_reg230_wpr_reg230_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg230_wpr_reg231_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg230_wpr_reg232_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg230_wpr_reg233_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg230_wpr_reg230(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg230_wpr_reg231(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg230_wpr_reg232(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg230_wpr_reg233(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg230_get_wpr_reg230(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg230_get_wpr_reg231(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg230_get_wpr_reg232(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg230_get_wpr_reg233(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg234                                                0x18029634
#define  LG_M_PLUS_M_plus_reg234_reg_addr                                        "0xB8029634"
#define  LG_M_PLUS_M_plus_reg234_reg                                             0xB8029634
#define  LG_M_PLUS_M_plus_reg234_inst_addr                                       "0x009A"
#define  set_LG_M_PLUS_M_plus_reg234_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg234_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg234_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg234_reg))
#define  LG_M_PLUS_M_plus_reg234_wpr_reg234_shift                                (24)
#define  LG_M_PLUS_M_plus_reg234_wpr_reg235_shift                                (16)
#define  LG_M_PLUS_M_plus_reg234_wpr_reg236_shift                                (8)
#define  LG_M_PLUS_M_plus_reg234_wpr_reg237_shift                                (0)
#define  LG_M_PLUS_M_plus_reg234_wpr_reg234_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg234_wpr_reg235_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg234_wpr_reg236_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg234_wpr_reg237_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg234_wpr_reg234(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg234_wpr_reg235(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg234_wpr_reg236(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg234_wpr_reg237(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg234_get_wpr_reg234(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg234_get_wpr_reg235(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg234_get_wpr_reg236(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg234_get_wpr_reg237(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg238                                                0x18029638
#define  LG_M_PLUS_M_plus_reg238_reg_addr                                        "0xB8029638"
#define  LG_M_PLUS_M_plus_reg238_reg                                             0xB8029638
#define  LG_M_PLUS_M_plus_reg238_inst_addr                                       "0x009B"
#define  set_LG_M_PLUS_M_plus_reg238_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg238_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg238_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg238_reg))
#define  LG_M_PLUS_M_plus_reg238_wpr_reg238_shift                                (24)
#define  LG_M_PLUS_M_plus_reg238_wpr_reg239_shift                                (16)
#define  LG_M_PLUS_M_plus_reg238_wpr_reg23a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg238_wpr_reg23b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg238_wpr_reg238_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg238_wpr_reg239_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg238_wpr_reg23a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg238_wpr_reg23b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg238_wpr_reg238(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg238_wpr_reg239(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg238_wpr_reg23a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg238_wpr_reg23b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg238_get_wpr_reg238(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg238_get_wpr_reg239(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg238_get_wpr_reg23a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg238_get_wpr_reg23b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg23c                                                0x1802963C
#define  LG_M_PLUS_M_plus_reg23c_reg_addr                                        "0xB802963C"
#define  LG_M_PLUS_M_plus_reg23c_reg                                             0xB802963C
#define  LG_M_PLUS_M_plus_reg23c_inst_addr                                       "0x009C"
#define  set_LG_M_PLUS_M_plus_reg23c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg23c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg23c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg23c_reg))
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg23c_wpr_reg23f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg23c_get_wpr_reg23c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg23c_get_wpr_reg23d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg23c_get_wpr_reg23e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg23c_get_wpr_reg23f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg240                                                0x18029640
#define  LG_M_PLUS_M_plus_reg240_reg_addr                                        "0xB8029640"
#define  LG_M_PLUS_M_plus_reg240_reg                                             0xB8029640
#define  LG_M_PLUS_M_plus_reg240_inst_addr                                       "0x009D"
#define  set_LG_M_PLUS_M_plus_reg240_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg240_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg240_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg240_reg))
#define  LG_M_PLUS_M_plus_reg240_wpr_reg240_shift                                (24)
#define  LG_M_PLUS_M_plus_reg240_wpr_reg241_shift                                (16)
#define  LG_M_PLUS_M_plus_reg240_wpr_reg242_shift                                (8)
#define  LG_M_PLUS_M_plus_reg240_wpr_reg243_shift                                (0)
#define  LG_M_PLUS_M_plus_reg240_wpr_reg240_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg240_wpr_reg241_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg240_wpr_reg242_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg240_wpr_reg243_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg240_wpr_reg240(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg240_wpr_reg241(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg240_wpr_reg242(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg240_wpr_reg243(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg240_get_wpr_reg240(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg240_get_wpr_reg241(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg240_get_wpr_reg242(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg240_get_wpr_reg243(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg244                                                0x18029644
#define  LG_M_PLUS_M_plus_reg244_reg_addr                                        "0xB8029644"
#define  LG_M_PLUS_M_plus_reg244_reg                                             0xB8029644
#define  LG_M_PLUS_M_plus_reg244_inst_addr                                       "0x009E"
#define  set_LG_M_PLUS_M_plus_reg244_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg244_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg244_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg244_reg))
#define  LG_M_PLUS_M_plus_reg244_wpr_reg244_shift                                (24)
#define  LG_M_PLUS_M_plus_reg244_wpr_reg245_shift                                (16)
#define  LG_M_PLUS_M_plus_reg244_wpr_reg246_shift                                (8)
#define  LG_M_PLUS_M_plus_reg244_wpr_reg247_shift                                (0)
#define  LG_M_PLUS_M_plus_reg244_wpr_reg244_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg244_wpr_reg245_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg244_wpr_reg246_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg244_wpr_reg247_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg244_wpr_reg244(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg244_wpr_reg245(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg244_wpr_reg246(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg244_wpr_reg247(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg244_get_wpr_reg244(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg244_get_wpr_reg245(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg244_get_wpr_reg246(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg244_get_wpr_reg247(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg248                                                0x18029648
#define  LG_M_PLUS_M_plus_reg248_reg_addr                                        "0xB8029648"
#define  LG_M_PLUS_M_plus_reg248_reg                                             0xB8029648
#define  LG_M_PLUS_M_plus_reg248_inst_addr                                       "0x009F"
#define  set_LG_M_PLUS_M_plus_reg248_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg248_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg248_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg248_reg))
#define  LG_M_PLUS_M_plus_reg248_wpr_reg248_shift                                (24)
#define  LG_M_PLUS_M_plus_reg248_wpr_reg249_shift                                (16)
#define  LG_M_PLUS_M_plus_reg248_wpr_reg24a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg248_wpr_reg24b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg248_wpr_reg248_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg248_wpr_reg249_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg248_wpr_reg24a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg248_wpr_reg24b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg248_wpr_reg248(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg248_wpr_reg249(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg248_wpr_reg24a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg248_wpr_reg24b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg248_get_wpr_reg248(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg248_get_wpr_reg249(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg248_get_wpr_reg24a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg248_get_wpr_reg24b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg24c                                                0x1802964C
#define  LG_M_PLUS_M_plus_reg24c_reg_addr                                        "0xB802964C"
#define  LG_M_PLUS_M_plus_reg24c_reg                                             0xB802964C
#define  LG_M_PLUS_M_plus_reg24c_inst_addr                                       "0x00A0"
#define  set_LG_M_PLUS_M_plus_reg24c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg24c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg24c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg24c_reg))
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg24c_wpr_reg24f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg24c_get_wpr_reg24c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg24c_get_wpr_reg24d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg24c_get_wpr_reg24e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg24c_get_wpr_reg24f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg250                                                0x18029650
#define  LG_M_PLUS_M_plus_reg250_reg_addr                                        "0xB8029650"
#define  LG_M_PLUS_M_plus_reg250_reg                                             0xB8029650
#define  LG_M_PLUS_M_plus_reg250_inst_addr                                       "0x00A1"
#define  set_LG_M_PLUS_M_plus_reg250_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg250_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg250_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg250_reg))
#define  LG_M_PLUS_M_plus_reg250_wpr_reg250_shift                                (24)
#define  LG_M_PLUS_M_plus_reg250_wpr_reg251_shift                                (16)
#define  LG_M_PLUS_M_plus_reg250_wpr_reg252_shift                                (8)
#define  LG_M_PLUS_M_plus_reg250_wpr_reg253_shift                                (0)
#define  LG_M_PLUS_M_plus_reg250_wpr_reg250_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg250_wpr_reg251_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg250_wpr_reg252_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg250_wpr_reg253_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg250_wpr_reg250(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg250_wpr_reg251(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg250_wpr_reg252(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg250_wpr_reg253(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg250_get_wpr_reg250(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg250_get_wpr_reg251(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg250_get_wpr_reg252(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg250_get_wpr_reg253(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg254                                                0x18029654
#define  LG_M_PLUS_M_plus_reg254_reg_addr                                        "0xB8029654"
#define  LG_M_PLUS_M_plus_reg254_reg                                             0xB8029654
#define  LG_M_PLUS_M_plus_reg254_inst_addr                                       "0x00A2"
#define  set_LG_M_PLUS_M_plus_reg254_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg254_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg254_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg254_reg))
#define  LG_M_PLUS_M_plus_reg254_wpr_reg254_shift                                (24)
#define  LG_M_PLUS_M_plus_reg254_wpr_reg255_shift                                (16)
#define  LG_M_PLUS_M_plus_reg254_wpr_reg256_shift                                (8)
#define  LG_M_PLUS_M_plus_reg254_wpr_reg257_shift                                (0)
#define  LG_M_PLUS_M_plus_reg254_wpr_reg254_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg254_wpr_reg255_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg254_wpr_reg256_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg254_wpr_reg257_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg254_wpr_reg254(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg254_wpr_reg255(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg254_wpr_reg256(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg254_wpr_reg257(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg254_get_wpr_reg254(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg254_get_wpr_reg255(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg254_get_wpr_reg256(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg254_get_wpr_reg257(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg258                                                0x18029658
#define  LG_M_PLUS_M_plus_reg258_reg_addr                                        "0xB8029658"
#define  LG_M_PLUS_M_plus_reg258_reg                                             0xB8029658
#define  LG_M_PLUS_M_plus_reg258_inst_addr                                       "0x00A3"
#define  set_LG_M_PLUS_M_plus_reg258_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg258_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg258_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg258_reg))
#define  LG_M_PLUS_M_plus_reg258_wpr_reg258_shift                                (24)
#define  LG_M_PLUS_M_plus_reg258_wpr_reg259_shift                                (16)
#define  LG_M_PLUS_M_plus_reg258_wpr_reg25a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg258_wpr_reg25b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg258_wpr_reg258_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg258_wpr_reg259_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg258_wpr_reg25a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg258_wpr_reg25b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg258_wpr_reg258(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg258_wpr_reg259(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg258_wpr_reg25a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg258_wpr_reg25b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg258_get_wpr_reg258(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg258_get_wpr_reg259(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg258_get_wpr_reg25a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg258_get_wpr_reg25b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg25c                                                0x1802965C
#define  LG_M_PLUS_M_plus_reg25c_reg_addr                                        "0xB802965C"
#define  LG_M_PLUS_M_plus_reg25c_reg                                             0xB802965C
#define  LG_M_PLUS_M_plus_reg25c_inst_addr                                       "0x00A4"
#define  set_LG_M_PLUS_M_plus_reg25c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg25c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg25c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg25c_reg))
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg25c_wpr_reg25f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg25c_get_wpr_reg25c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg25c_get_wpr_reg25d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg25c_get_wpr_reg25e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg25c_get_wpr_reg25f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg260                                                0x18029660
#define  LG_M_PLUS_M_plus_reg260_reg_addr                                        "0xB8029660"
#define  LG_M_PLUS_M_plus_reg260_reg                                             0xB8029660
#define  LG_M_PLUS_M_plus_reg260_inst_addr                                       "0x00A5"
#define  set_LG_M_PLUS_M_plus_reg260_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg260_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg260_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg260_reg))
#define  LG_M_PLUS_M_plus_reg260_wpr_reg260_shift                                (24)
#define  LG_M_PLUS_M_plus_reg260_wpr_reg261_shift                                (16)
#define  LG_M_PLUS_M_plus_reg260_wpr_reg262_shift                                (8)
#define  LG_M_PLUS_M_plus_reg260_wpr_reg263_shift                                (0)
#define  LG_M_PLUS_M_plus_reg260_wpr_reg260_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg260_wpr_reg261_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg260_wpr_reg262_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg260_wpr_reg263_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg260_wpr_reg260(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg260_wpr_reg261(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg260_wpr_reg262(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg260_wpr_reg263(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg260_get_wpr_reg260(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg260_get_wpr_reg261(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg260_get_wpr_reg262(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg260_get_wpr_reg263(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg264                                                0x18029664
#define  LG_M_PLUS_M_plus_reg264_reg_addr                                        "0xB8029664"
#define  LG_M_PLUS_M_plus_reg264_reg                                             0xB8029664
#define  LG_M_PLUS_M_plus_reg264_inst_addr                                       "0x00A6"
#define  set_LG_M_PLUS_M_plus_reg264_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg264_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg264_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg264_reg))
#define  LG_M_PLUS_M_plus_reg264_wpr_reg264_shift                                (24)
#define  LG_M_PLUS_M_plus_reg264_wpr_reg265_shift                                (16)
#define  LG_M_PLUS_M_plus_reg264_wpr_reg266_shift                                (8)
#define  LG_M_PLUS_M_plus_reg264_wpr_reg267_shift                                (0)
#define  LG_M_PLUS_M_plus_reg264_wpr_reg264_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg264_wpr_reg265_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg264_wpr_reg266_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg264_wpr_reg267_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg264_wpr_reg264(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg264_wpr_reg265(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg264_wpr_reg266(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg264_wpr_reg267(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg264_get_wpr_reg264(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg264_get_wpr_reg265(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg264_get_wpr_reg266(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg264_get_wpr_reg267(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg268                                                0x18029668
#define  LG_M_PLUS_M_plus_reg268_reg_addr                                        "0xB8029668"
#define  LG_M_PLUS_M_plus_reg268_reg                                             0xB8029668
#define  LG_M_PLUS_M_plus_reg268_inst_addr                                       "0x00A7"
#define  set_LG_M_PLUS_M_plus_reg268_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg268_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg268_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg268_reg))
#define  LG_M_PLUS_M_plus_reg268_wpr_reg268_shift                                (24)
#define  LG_M_PLUS_M_plus_reg268_wpr_reg269_shift                                (16)
#define  LG_M_PLUS_M_plus_reg268_wpr_reg26a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg268_wpr_reg26b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg268_wpr_reg268_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg268_wpr_reg269_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg268_wpr_reg26a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg268_wpr_reg26b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg268_wpr_reg268(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg268_wpr_reg269(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg268_wpr_reg26a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg268_wpr_reg26b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg268_get_wpr_reg268(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg268_get_wpr_reg269(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg268_get_wpr_reg26a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg268_get_wpr_reg26b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg26c                                                0x1802966C
#define  LG_M_PLUS_M_plus_reg26c_reg_addr                                        "0xB802966C"
#define  LG_M_PLUS_M_plus_reg26c_reg                                             0xB802966C
#define  LG_M_PLUS_M_plus_reg26c_inst_addr                                       "0x00A8"
#define  set_LG_M_PLUS_M_plus_reg26c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg26c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg26c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg26c_reg))
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg26c_wpr_reg26f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg26c_get_wpr_reg26c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg26c_get_wpr_reg26d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg26c_get_wpr_reg26e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg26c_get_wpr_reg26f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg270                                                0x18029670
#define  LG_M_PLUS_M_plus_reg270_reg_addr                                        "0xB8029670"
#define  LG_M_PLUS_M_plus_reg270_reg                                             0xB8029670
#define  LG_M_PLUS_M_plus_reg270_inst_addr                                       "0x00A9"
#define  set_LG_M_PLUS_M_plus_reg270_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg270_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg270_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg270_reg))
#define  LG_M_PLUS_M_plus_reg270_wpr_reg270_shift                                (24)
#define  LG_M_PLUS_M_plus_reg270_wpr_reg271_shift                                (16)
#define  LG_M_PLUS_M_plus_reg270_wpr_reg272_shift                                (8)
#define  LG_M_PLUS_M_plus_reg270_wpr_reg273_shift                                (0)
#define  LG_M_PLUS_M_plus_reg270_wpr_reg270_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg270_wpr_reg271_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg270_wpr_reg272_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg270_wpr_reg273_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg270_wpr_reg270(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg270_wpr_reg271(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg270_wpr_reg272(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg270_wpr_reg273(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg270_get_wpr_reg270(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg270_get_wpr_reg271(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg270_get_wpr_reg272(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg270_get_wpr_reg273(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg274                                                0x18029674
#define  LG_M_PLUS_M_plus_reg274_reg_addr                                        "0xB8029674"
#define  LG_M_PLUS_M_plus_reg274_reg                                             0xB8029674
#define  LG_M_PLUS_M_plus_reg274_inst_addr                                       "0x00AA"
#define  set_LG_M_PLUS_M_plus_reg274_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg274_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg274_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg274_reg))
#define  LG_M_PLUS_M_plus_reg274_wpr_reg274_shift                                (24)
#define  LG_M_PLUS_M_plus_reg274_wpr_reg275_shift                                (16)
#define  LG_M_PLUS_M_plus_reg274_wpr_reg276_shift                                (8)
#define  LG_M_PLUS_M_plus_reg274_wpr_reg277_shift                                (0)
#define  LG_M_PLUS_M_plus_reg274_wpr_reg274_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg274_wpr_reg275_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg274_wpr_reg276_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg274_wpr_reg277_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg274_wpr_reg274(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg274_wpr_reg275(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg274_wpr_reg276(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg274_wpr_reg277(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg274_get_wpr_reg274(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg274_get_wpr_reg275(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg274_get_wpr_reg276(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg274_get_wpr_reg277(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg278                                                0x18029678
#define  LG_M_PLUS_M_plus_reg278_reg_addr                                        "0xB8029678"
#define  LG_M_PLUS_M_plus_reg278_reg                                             0xB8029678
#define  LG_M_PLUS_M_plus_reg278_inst_addr                                       "0x00AB"
#define  set_LG_M_PLUS_M_plus_reg278_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg278_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg278_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg278_reg))
#define  LG_M_PLUS_M_plus_reg278_wpr_reg278_shift                                (24)
#define  LG_M_PLUS_M_plus_reg278_wpr_reg279_shift                                (16)
#define  LG_M_PLUS_M_plus_reg278_wpr_reg27a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg278_wpr_reg27b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg278_wpr_reg278_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg278_wpr_reg279_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg278_wpr_reg27a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg278_wpr_reg27b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg278_wpr_reg278(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg278_wpr_reg279(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg278_wpr_reg27a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg278_wpr_reg27b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg278_get_wpr_reg278(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg278_get_wpr_reg279(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg278_get_wpr_reg27a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg278_get_wpr_reg27b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg27c                                                0x1802967C
#define  LG_M_PLUS_M_plus_reg27c_reg_addr                                        "0xB802967C"
#define  LG_M_PLUS_M_plus_reg27c_reg                                             0xB802967C
#define  LG_M_PLUS_M_plus_reg27c_inst_addr                                       "0x00AC"
#define  set_LG_M_PLUS_M_plus_reg27c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg27c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg27c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg27c_reg))
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg27c_wpr_reg27f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg27c_get_wpr_reg27c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg27c_get_wpr_reg27d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg27c_get_wpr_reg27e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg27c_get_wpr_reg27f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg280                                                0x18029680
#define  LG_M_PLUS_M_plus_reg280_reg_addr                                        "0xB8029680"
#define  LG_M_PLUS_M_plus_reg280_reg                                             0xB8029680
#define  LG_M_PLUS_M_plus_reg280_inst_addr                                       "0x00AD"
#define  set_LG_M_PLUS_M_plus_reg280_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg280_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg280_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg280_reg))
#define  LG_M_PLUS_M_plus_reg280_wpr_reg280_shift                                (24)
#define  LG_M_PLUS_M_plus_reg280_wpr_reg281_shift                                (16)
#define  LG_M_PLUS_M_plus_reg280_wpr_reg282_shift                                (8)
#define  LG_M_PLUS_M_plus_reg280_wpr_reg283_shift                                (0)
#define  LG_M_PLUS_M_plus_reg280_wpr_reg280_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg280_wpr_reg281_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg280_wpr_reg282_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg280_wpr_reg283_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg280_wpr_reg280(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg280_wpr_reg281(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg280_wpr_reg282(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg280_wpr_reg283(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg280_get_wpr_reg280(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg280_get_wpr_reg281(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg280_get_wpr_reg282(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg280_get_wpr_reg283(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg284                                                0x18029684
#define  LG_M_PLUS_M_plus_reg284_reg_addr                                        "0xB8029684"
#define  LG_M_PLUS_M_plus_reg284_reg                                             0xB8029684
#define  LG_M_PLUS_M_plus_reg284_inst_addr                                       "0x00AE"
#define  set_LG_M_PLUS_M_plus_reg284_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg284_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg284_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg284_reg))
#define  LG_M_PLUS_M_plus_reg284_wpr_reg284_shift                                (24)
#define  LG_M_PLUS_M_plus_reg284_wpr_reg285_shift                                (16)
#define  LG_M_PLUS_M_plus_reg284_wpr_reg286_shift                                (8)
#define  LG_M_PLUS_M_plus_reg284_wpr_reg287_shift                                (0)
#define  LG_M_PLUS_M_plus_reg284_wpr_reg284_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg284_wpr_reg285_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg284_wpr_reg286_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg284_wpr_reg287_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg284_wpr_reg284(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg284_wpr_reg285(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg284_wpr_reg286(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg284_wpr_reg287(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg284_get_wpr_reg284(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg284_get_wpr_reg285(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg284_get_wpr_reg286(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg284_get_wpr_reg287(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg288                                                0x18029688
#define  LG_M_PLUS_M_plus_reg288_reg_addr                                        "0xB8029688"
#define  LG_M_PLUS_M_plus_reg288_reg                                             0xB8029688
#define  LG_M_PLUS_M_plus_reg288_inst_addr                                       "0x00AF"
#define  set_LG_M_PLUS_M_plus_reg288_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg288_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg288_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg288_reg))
#define  LG_M_PLUS_M_plus_reg288_wpr_reg288_shift                                (24)
#define  LG_M_PLUS_M_plus_reg288_wpr_reg289_shift                                (16)
#define  LG_M_PLUS_M_plus_reg288_wpr_reg28a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg288_wpr_reg28b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg288_wpr_reg288_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg288_wpr_reg289_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg288_wpr_reg28a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg288_wpr_reg28b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg288_wpr_reg288(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg288_wpr_reg289(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg288_wpr_reg28a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg288_wpr_reg28b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg288_get_wpr_reg288(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg288_get_wpr_reg289(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg288_get_wpr_reg28a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg288_get_wpr_reg28b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg28c                                                0x1802968C
#define  LG_M_PLUS_M_plus_reg28c_reg_addr                                        "0xB802968C"
#define  LG_M_PLUS_M_plus_reg28c_reg                                             0xB802968C
#define  LG_M_PLUS_M_plus_reg28c_inst_addr                                       "0x00B0"
#define  set_LG_M_PLUS_M_plus_reg28c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg28c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg28c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg28c_reg))
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg28c_wpr_reg28f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg28c_get_wpr_reg28c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg28c_get_wpr_reg28d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg28c_get_wpr_reg28e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg28c_get_wpr_reg28f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg290                                                0x18029690
#define  LG_M_PLUS_M_plus_reg290_reg_addr                                        "0xB8029690"
#define  LG_M_PLUS_M_plus_reg290_reg                                             0xB8029690
#define  LG_M_PLUS_M_plus_reg290_inst_addr                                       "0x00B1"
#define  set_LG_M_PLUS_M_plus_reg290_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg290_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg290_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg290_reg))
#define  LG_M_PLUS_M_plus_reg290_wpr_reg290_shift                                (24)
#define  LG_M_PLUS_M_plus_reg290_wpr_reg291_shift                                (16)
#define  LG_M_PLUS_M_plus_reg290_wpr_reg292_shift                                (8)
#define  LG_M_PLUS_M_plus_reg290_wpr_reg293_shift                                (0)
#define  LG_M_PLUS_M_plus_reg290_wpr_reg290_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg290_wpr_reg291_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg290_wpr_reg292_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg290_wpr_reg293_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg290_wpr_reg290(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg290_wpr_reg291(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg290_wpr_reg292(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg290_wpr_reg293(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg290_get_wpr_reg290(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg290_get_wpr_reg291(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg290_get_wpr_reg292(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg290_get_wpr_reg293(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg294                                                0x18029694
#define  LG_M_PLUS_M_plus_reg294_reg_addr                                        "0xB8029694"
#define  LG_M_PLUS_M_plus_reg294_reg                                             0xB8029694
#define  LG_M_PLUS_M_plus_reg294_inst_addr                                       "0x00B2"
#define  set_LG_M_PLUS_M_plus_reg294_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg294_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg294_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg294_reg))
#define  LG_M_PLUS_M_plus_reg294_wpr_reg294_shift                                (24)
#define  LG_M_PLUS_M_plus_reg294_wpr_reg295_shift                                (16)
#define  LG_M_PLUS_M_plus_reg294_wpr_reg296_shift                                (8)
#define  LG_M_PLUS_M_plus_reg294_wpr_reg297_shift                                (0)
#define  LG_M_PLUS_M_plus_reg294_wpr_reg294_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg294_wpr_reg295_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg294_wpr_reg296_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg294_wpr_reg297_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg294_wpr_reg294(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg294_wpr_reg295(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg294_wpr_reg296(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg294_wpr_reg297(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg294_get_wpr_reg294(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg294_get_wpr_reg295(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg294_get_wpr_reg296(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg294_get_wpr_reg297(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg298                                                0x18029698
#define  LG_M_PLUS_M_plus_reg298_reg_addr                                        "0xB8029698"
#define  LG_M_PLUS_M_plus_reg298_reg                                             0xB8029698
#define  LG_M_PLUS_M_plus_reg298_inst_addr                                       "0x00B3"
#define  set_LG_M_PLUS_M_plus_reg298_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg298_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg298_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg298_reg))
#define  LG_M_PLUS_M_plus_reg298_wpr_reg298_shift                                (24)
#define  LG_M_PLUS_M_plus_reg298_wpr_reg299_shift                                (16)
#define  LG_M_PLUS_M_plus_reg298_wpr_reg29a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg298_wpr_reg29b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg298_wpr_reg298_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg298_wpr_reg299_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg298_wpr_reg29a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg298_wpr_reg29b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg298_wpr_reg298(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg298_wpr_reg299(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg298_wpr_reg29a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg298_wpr_reg29b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg298_get_wpr_reg298(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg298_get_wpr_reg299(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg298_get_wpr_reg29a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg298_get_wpr_reg29b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg29c                                                0x1802969C
#define  LG_M_PLUS_M_plus_reg29c_reg_addr                                        "0xB802969C"
#define  LG_M_PLUS_M_plus_reg29c_reg                                             0xB802969C
#define  LG_M_PLUS_M_plus_reg29c_inst_addr                                       "0x00B4"
#define  set_LG_M_PLUS_M_plus_reg29c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg29c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg29c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg29c_reg))
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg29c_wpr_reg29f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg29c_get_wpr_reg29c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg29c_get_wpr_reg29d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg29c_get_wpr_reg29e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg29c_get_wpr_reg29f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2a0                                                0x180296A0
#define  LG_M_PLUS_M_plus_reg2a0_reg_addr                                        "0xB80296A0"
#define  LG_M_PLUS_M_plus_reg2a0_reg                                             0xB80296A0
#define  LG_M_PLUS_M_plus_reg2a0_inst_addr                                       "0x00B5"
#define  set_LG_M_PLUS_M_plus_reg2a0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2a0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2a0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2a0_reg))
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2a0_wpr_reg2a3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2a0_get_wpr_reg2a0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2a0_get_wpr_reg2a1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2a0_get_wpr_reg2a2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2a0_get_wpr_reg2a3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2a4                                                0x180296A4
#define  LG_M_PLUS_M_plus_reg2a4_reg_addr                                        "0xB80296A4"
#define  LG_M_PLUS_M_plus_reg2a4_reg                                             0xB80296A4
#define  LG_M_PLUS_M_plus_reg2a4_inst_addr                                       "0x00B6"
#define  set_LG_M_PLUS_M_plus_reg2a4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2a4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2a4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2a4_reg))
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2a4_wpr_reg2a7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2a4_get_wpr_reg2a4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2a4_get_wpr_reg2a5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2a4_get_wpr_reg2a6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2a4_get_wpr_reg2a7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2a8                                                0x180296A8
#define  LG_M_PLUS_M_plus_reg2a8_reg_addr                                        "0xB80296A8"
#define  LG_M_PLUS_M_plus_reg2a8_reg                                             0xB80296A8
#define  LG_M_PLUS_M_plus_reg2a8_inst_addr                                       "0x00B7"
#define  set_LG_M_PLUS_M_plus_reg2a8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2a8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2a8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2a8_reg))
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2a8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2a9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2aa_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2ab_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2a8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2a9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2aa_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2ab_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2a8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2a9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2aa(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2a8_wpr_reg2ab(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2a8_get_wpr_reg2a8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2a8_get_wpr_reg2a9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2a8_get_wpr_reg2aa(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2a8_get_wpr_reg2ab(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2ac                                                0x180296AC
#define  LG_M_PLUS_M_plus_reg2ac_reg_addr                                        "0xB80296AC"
#define  LG_M_PLUS_M_plus_reg2ac_reg                                             0xB80296AC
#define  LG_M_PLUS_M_plus_reg2ac_inst_addr                                       "0x00B8"
#define  set_LG_M_PLUS_M_plus_reg2ac_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2ac_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2ac_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2ac_reg))
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2ac_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2ad_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2ae_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2af_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2ac_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2ad_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2ae_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2af_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2ac(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2ad(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2ae(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2ac_wpr_reg2af(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2ac_get_wpr_reg2ac(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2ac_get_wpr_reg2ad(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2ac_get_wpr_reg2ae(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2ac_get_wpr_reg2af(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2b0                                                0x180296B0
#define  LG_M_PLUS_M_plus_reg2b0_reg_addr                                        "0xB80296B0"
#define  LG_M_PLUS_M_plus_reg2b0_reg                                             0xB80296B0
#define  LG_M_PLUS_M_plus_reg2b0_inst_addr                                       "0x00B9"
#define  set_LG_M_PLUS_M_plus_reg2b0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2b0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2b0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2b0_reg))
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2b0_wpr_reg2b3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2b0_get_wpr_reg2b0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2b0_get_wpr_reg2b1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2b0_get_wpr_reg2b2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2b0_get_wpr_reg2b3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2b4                                                0x180296B4
#define  LG_M_PLUS_M_plus_reg2b4_reg_addr                                        "0xB80296B4"
#define  LG_M_PLUS_M_plus_reg2b4_reg                                             0xB80296B4
#define  LG_M_PLUS_M_plus_reg2b4_inst_addr                                       "0x00BA"
#define  set_LG_M_PLUS_M_plus_reg2b4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2b4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2b4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2b4_reg))
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2b4_wpr_reg2b7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2b4_get_wpr_reg2b4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2b4_get_wpr_reg2b5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2b4_get_wpr_reg2b6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2b4_get_wpr_reg2b7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2b8                                                0x180296B8
#define  LG_M_PLUS_M_plus_reg2b8_reg_addr                                        "0xB80296B8"
#define  LG_M_PLUS_M_plus_reg2b8_reg                                             0xB80296B8
#define  LG_M_PLUS_M_plus_reg2b8_inst_addr                                       "0x00BB"
#define  set_LG_M_PLUS_M_plus_reg2b8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2b8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2b8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2b8_reg))
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2b8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2b9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2ba_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2bb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2b8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2b9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2ba_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2bb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2b8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2b9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2ba(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2b8_wpr_reg2bb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2b8_get_wpr_reg2b8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2b8_get_wpr_reg2b9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2b8_get_wpr_reg2ba(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2b8_get_wpr_reg2bb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2bc                                                0x180296BC
#define  LG_M_PLUS_M_plus_reg2bc_reg_addr                                        "0xB80296BC"
#define  LG_M_PLUS_M_plus_reg2bc_reg                                             0xB80296BC
#define  LG_M_PLUS_M_plus_reg2bc_inst_addr                                       "0x00BC"
#define  set_LG_M_PLUS_M_plus_reg2bc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2bc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2bc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2bc_reg))
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2bc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2bd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2be_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2bf_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2bc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2bd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2be_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2bf_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2bc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2bd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2be(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2bc_wpr_reg2bf(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2bc_get_wpr_reg2bc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2bc_get_wpr_reg2bd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2bc_get_wpr_reg2be(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2bc_get_wpr_reg2bf(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2c0                                                0x180296C0
#define  LG_M_PLUS_M_plus_reg2c0_reg_addr                                        "0xB80296C0"
#define  LG_M_PLUS_M_plus_reg2c0_reg                                             0xB80296C0
#define  LG_M_PLUS_M_plus_reg2c0_inst_addr                                       "0x00BD"
#define  set_LG_M_PLUS_M_plus_reg2c0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2c0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2c0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2c0_reg))
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2c0_wpr_reg2c3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2c0_get_wpr_reg2c0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2c0_get_wpr_reg2c1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2c0_get_wpr_reg2c2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2c0_get_wpr_reg2c3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2c4                                                0x180296C4
#define  LG_M_PLUS_M_plus_reg2c4_reg_addr                                        "0xB80296C4"
#define  LG_M_PLUS_M_plus_reg2c4_reg                                             0xB80296C4
#define  LG_M_PLUS_M_plus_reg2c4_inst_addr                                       "0x00BE"
#define  set_LG_M_PLUS_M_plus_reg2c4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2c4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2c4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2c4_reg))
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2c4_wpr_reg2c7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2c4_get_wpr_reg2c4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2c4_get_wpr_reg2c5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2c4_get_wpr_reg2c6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2c4_get_wpr_reg2c7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2c8                                                0x180296C8
#define  LG_M_PLUS_M_plus_reg2c8_reg_addr                                        "0xB80296C8"
#define  LG_M_PLUS_M_plus_reg2c8_reg                                             0xB80296C8
#define  LG_M_PLUS_M_plus_reg2c8_inst_addr                                       "0x00BF"
#define  set_LG_M_PLUS_M_plus_reg2c8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2c8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2c8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2c8_reg))
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2c8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2c9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2ca_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2cb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2c8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2c9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2ca_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2cb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2c8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2c9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2ca(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2c8_wpr_reg2cb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2c8_get_wpr_reg2c8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2c8_get_wpr_reg2c9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2c8_get_wpr_reg2ca(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2c8_get_wpr_reg2cb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2cc                                                0x180296CC
#define  LG_M_PLUS_M_plus_reg2cc_reg_addr                                        "0xB80296CC"
#define  LG_M_PLUS_M_plus_reg2cc_reg                                             0xB80296CC
#define  LG_M_PLUS_M_plus_reg2cc_inst_addr                                       "0x00C0"
#define  set_LG_M_PLUS_M_plus_reg2cc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2cc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2cc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2cc_reg))
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2cc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2cd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2ce_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2cf_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2cc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2cd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2ce_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2cf_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2cc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2cd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2ce(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2cc_wpr_reg2cf(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2cc_get_wpr_reg2cc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2cc_get_wpr_reg2cd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2cc_get_wpr_reg2ce(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2cc_get_wpr_reg2cf(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2d0                                                0x180296D0
#define  LG_M_PLUS_M_plus_reg2d0_reg_addr                                        "0xB80296D0"
#define  LG_M_PLUS_M_plus_reg2d0_reg                                             0xB80296D0
#define  LG_M_PLUS_M_plus_reg2d0_inst_addr                                       "0x00C1"
#define  set_LG_M_PLUS_M_plus_reg2d0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2d0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2d0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2d0_reg))
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2d0_wpr_reg2d3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2d0_get_wpr_reg2d0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2d0_get_wpr_reg2d1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2d0_get_wpr_reg2d2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2d0_get_wpr_reg2d3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2d4                                                0x180296D4
#define  LG_M_PLUS_M_plus_reg2d4_reg_addr                                        "0xB80296D4"
#define  LG_M_PLUS_M_plus_reg2d4_reg                                             0xB80296D4
#define  LG_M_PLUS_M_plus_reg2d4_inst_addr                                       "0x00C2"
#define  set_LG_M_PLUS_M_plus_reg2d4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2d4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2d4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2d4_reg))
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2d4_wpr_reg2d7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2d4_get_wpr_reg2d4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2d4_get_wpr_reg2d5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2d4_get_wpr_reg2d6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2d4_get_wpr_reg2d7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2d8                                                0x180296D8
#define  LG_M_PLUS_M_plus_reg2d8_reg_addr                                        "0xB80296D8"
#define  LG_M_PLUS_M_plus_reg2d8_reg                                             0xB80296D8
#define  LG_M_PLUS_M_plus_reg2d8_inst_addr                                       "0x00C3"
#define  set_LG_M_PLUS_M_plus_reg2d8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2d8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2d8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2d8_reg))
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2d8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2d9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2da_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2db_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2d8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2d9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2da_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2db_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2d8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2d9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2da(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2d8_wpr_reg2db(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2d8_get_wpr_reg2d8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2d8_get_wpr_reg2d9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2d8_get_wpr_reg2da(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2d8_get_wpr_reg2db(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2dc                                                0x180296DC
#define  LG_M_PLUS_M_plus_reg2dc_reg_addr                                        "0xB80296DC"
#define  LG_M_PLUS_M_plus_reg2dc_reg                                             0xB80296DC
#define  LG_M_PLUS_M_plus_reg2dc_inst_addr                                       "0x00C4"
#define  set_LG_M_PLUS_M_plus_reg2dc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2dc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2dc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2dc_reg))
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2dc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2dd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2de_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2df_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2dc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2dd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2de_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2df_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2dc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2dd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2de(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2dc_wpr_reg2df(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2dc_get_wpr_reg2dc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2dc_get_wpr_reg2dd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2dc_get_wpr_reg2de(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2dc_get_wpr_reg2df(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2e0                                                0x180296E0
#define  LG_M_PLUS_M_plus_reg2e0_reg_addr                                        "0xB80296E0"
#define  LG_M_PLUS_M_plus_reg2e0_reg                                             0xB80296E0
#define  LG_M_PLUS_M_plus_reg2e0_inst_addr                                       "0x00C5"
#define  set_LG_M_PLUS_M_plus_reg2e0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2e0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2e0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2e0_reg))
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2e0_wpr_reg2e3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2e0_get_wpr_reg2e0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2e0_get_wpr_reg2e1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2e0_get_wpr_reg2e2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2e0_get_wpr_reg2e3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2e4                                                0x180296E4
#define  LG_M_PLUS_M_plus_reg2e4_reg_addr                                        "0xB80296E4"
#define  LG_M_PLUS_M_plus_reg2e4_reg                                             0xB80296E4
#define  LG_M_PLUS_M_plus_reg2e4_inst_addr                                       "0x00C6"
#define  set_LG_M_PLUS_M_plus_reg2e4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2e4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2e4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2e4_reg))
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2e4_wpr_reg2e7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2e4_get_wpr_reg2e4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2e4_get_wpr_reg2e5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2e4_get_wpr_reg2e6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2e4_get_wpr_reg2e7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2e8                                                0x180296E8
#define  LG_M_PLUS_M_plus_reg2e8_reg_addr                                        "0xB80296E8"
#define  LG_M_PLUS_M_plus_reg2e8_reg                                             0xB80296E8
#define  LG_M_PLUS_M_plus_reg2e8_inst_addr                                       "0x00C7"
#define  set_LG_M_PLUS_M_plus_reg2e8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2e8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2e8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2e8_reg))
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2e8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2e9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2ea_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2eb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2e8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2e9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2ea_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2eb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2e8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2e9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2ea(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2e8_wpr_reg2eb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2e8_get_wpr_reg2e8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2e8_get_wpr_reg2e9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2e8_get_wpr_reg2ea(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2e8_get_wpr_reg2eb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2ec                                                0x180296EC
#define  LG_M_PLUS_M_plus_reg2ec_reg_addr                                        "0xB80296EC"
#define  LG_M_PLUS_M_plus_reg2ec_reg                                             0xB80296EC
#define  LG_M_PLUS_M_plus_reg2ec_inst_addr                                       "0x00C8"
#define  set_LG_M_PLUS_M_plus_reg2ec_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2ec_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2ec_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2ec_reg))
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ec_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ed_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ee_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ef_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ec_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ed_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ee_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ef_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ec(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ed(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ee(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2ec_wpr_reg2ef(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2ec_get_wpr_reg2ec(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2ec_get_wpr_reg2ed(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2ec_get_wpr_reg2ee(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2ec_get_wpr_reg2ef(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2f0                                                0x180296F0
#define  LG_M_PLUS_M_plus_reg2f0_reg_addr                                        "0xB80296F0"
#define  LG_M_PLUS_M_plus_reg2f0_reg                                             0xB80296F0
#define  LG_M_PLUS_M_plus_reg2f0_inst_addr                                       "0x00C9"
#define  set_LG_M_PLUS_M_plus_reg2f0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2f0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2f0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2f0_reg))
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2f0_wpr_reg2f3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2f0_get_wpr_reg2f0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2f0_get_wpr_reg2f1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2f0_get_wpr_reg2f2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2f0_get_wpr_reg2f3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2f4                                                0x180296F4
#define  LG_M_PLUS_M_plus_reg2f4_reg_addr                                        "0xB80296F4"
#define  LG_M_PLUS_M_plus_reg2f4_reg                                             0xB80296F4
#define  LG_M_PLUS_M_plus_reg2f4_inst_addr                                       "0x00CA"
#define  set_LG_M_PLUS_M_plus_reg2f4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2f4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2f4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2f4_reg))
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2f4_wpr_reg2f7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2f4_get_wpr_reg2f4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2f4_get_wpr_reg2f5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2f4_get_wpr_reg2f6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2f4_get_wpr_reg2f7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2f8                                                0x180296F8
#define  LG_M_PLUS_M_plus_reg2f8_reg_addr                                        "0xB80296F8"
#define  LG_M_PLUS_M_plus_reg2f8_reg                                             0xB80296F8
#define  LG_M_PLUS_M_plus_reg2f8_inst_addr                                       "0x00CB"
#define  set_LG_M_PLUS_M_plus_reg2f8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2f8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2f8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2f8_reg))
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2f8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2f9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2fa_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2fb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2f8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2f9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2fa_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2fb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2f8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2f9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2fa(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2f8_wpr_reg2fb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2f8_get_wpr_reg2f8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2f8_get_wpr_reg2f9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2f8_get_wpr_reg2fa(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2f8_get_wpr_reg2fb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg2fc                                                0x180296FC
#define  LG_M_PLUS_M_plus_reg2fc_reg_addr                                        "0xB80296FC"
#define  LG_M_PLUS_M_plus_reg2fc_reg                                             0xB80296FC
#define  LG_M_PLUS_M_plus_reg2fc_inst_addr                                       "0x00CC"
#define  set_LG_M_PLUS_M_plus_reg2fc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2fc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg2fc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg2fc_reg))
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2fc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2fd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2fe_shift                                (8)
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2ff_shift                                (0)
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2fc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2fd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2fe_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2ff_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2fc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2fd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2fe(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg2fc_wpr_reg2ff(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg2fc_get_wpr_reg2fc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg2fc_get_wpr_reg2fd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg2fc_get_wpr_reg2fe(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg2fc_get_wpr_reg2ff(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg300                                                0x18029700
#define  LG_M_PLUS_M_plus_reg300_reg_addr                                        "0xB8029700"
#define  LG_M_PLUS_M_plus_reg300_reg                                             0xB8029700
#define  LG_M_PLUS_M_plus_reg300_inst_addr                                       "0x00CD"
#define  set_LG_M_PLUS_M_plus_reg300_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg300_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg300_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg300_reg))
#define  LG_M_PLUS_M_plus_reg300_wpr_reg300_shift                                (24)
#define  LG_M_PLUS_M_plus_reg300_wpr_reg301_shift                                (16)
#define  LG_M_PLUS_M_plus_reg300_wpr_reg302_shift                                (8)
#define  LG_M_PLUS_M_plus_reg300_wpr_reg303_shift                                (0)
#define  LG_M_PLUS_M_plus_reg300_wpr_reg300_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg300_wpr_reg301_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg300_wpr_reg302_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg300_wpr_reg303_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg300_wpr_reg300(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg300_wpr_reg301(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg300_wpr_reg302(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg300_wpr_reg303(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg300_get_wpr_reg300(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg300_get_wpr_reg301(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg300_get_wpr_reg302(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg300_get_wpr_reg303(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg304                                                0x18029704
#define  LG_M_PLUS_M_plus_reg304_reg_addr                                        "0xB8029704"
#define  LG_M_PLUS_M_plus_reg304_reg                                             0xB8029704
#define  LG_M_PLUS_M_plus_reg304_inst_addr                                       "0x00CE"
#define  set_LG_M_PLUS_M_plus_reg304_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg304_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg304_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg304_reg))
#define  LG_M_PLUS_M_plus_reg304_wpr_reg304_shift                                (24)
#define  LG_M_PLUS_M_plus_reg304_wpr_reg305_shift                                (16)
#define  LG_M_PLUS_M_plus_reg304_wpr_reg306_shift                                (8)
#define  LG_M_PLUS_M_plus_reg304_wpr_reg307_shift                                (0)
#define  LG_M_PLUS_M_plus_reg304_wpr_reg304_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg304_wpr_reg305_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg304_wpr_reg306_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg304_wpr_reg307_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg304_wpr_reg304(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg304_wpr_reg305(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg304_wpr_reg306(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg304_wpr_reg307(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg304_get_wpr_reg304(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg304_get_wpr_reg305(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg304_get_wpr_reg306(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg304_get_wpr_reg307(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg308                                                0x18029708
#define  LG_M_PLUS_M_plus_reg308_reg_addr                                        "0xB8029708"
#define  LG_M_PLUS_M_plus_reg308_reg                                             0xB8029708
#define  LG_M_PLUS_M_plus_reg308_inst_addr                                       "0x00CF"
#define  set_LG_M_PLUS_M_plus_reg308_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg308_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg308_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg308_reg))
#define  LG_M_PLUS_M_plus_reg308_wpr_reg308_shift                                (24)
#define  LG_M_PLUS_M_plus_reg308_wpr_reg309_shift                                (16)
#define  LG_M_PLUS_M_plus_reg308_wpr_reg30a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg308_wpr_reg30b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg308_wpr_reg308_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg308_wpr_reg309_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg308_wpr_reg30a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg308_wpr_reg30b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg308_wpr_reg308(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg308_wpr_reg309(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg308_wpr_reg30a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg308_wpr_reg30b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg308_get_wpr_reg308(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg308_get_wpr_reg309(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg308_get_wpr_reg30a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg308_get_wpr_reg30b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg30c                                                0x1802970C
#define  LG_M_PLUS_M_plus_reg30c_reg_addr                                        "0xB802970C"
#define  LG_M_PLUS_M_plus_reg30c_reg                                             0xB802970C
#define  LG_M_PLUS_M_plus_reg30c_inst_addr                                       "0x00D0"
#define  set_LG_M_PLUS_M_plus_reg30c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg30c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg30c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg30c_reg))
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg30c_wpr_reg30f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg30c_get_wpr_reg30c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg30c_get_wpr_reg30d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg30c_get_wpr_reg30e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg30c_get_wpr_reg30f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg310                                                0x18029710
#define  LG_M_PLUS_M_plus_reg310_reg_addr                                        "0xB8029710"
#define  LG_M_PLUS_M_plus_reg310_reg                                             0xB8029710
#define  LG_M_PLUS_M_plus_reg310_inst_addr                                       "0x00D1"
#define  set_LG_M_PLUS_M_plus_reg310_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg310_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg310_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg310_reg))
#define  LG_M_PLUS_M_plus_reg310_wpr_reg310_shift                                (24)
#define  LG_M_PLUS_M_plus_reg310_wpr_reg311_shift                                (16)
#define  LG_M_PLUS_M_plus_reg310_wpr_reg312_shift                                (8)
#define  LG_M_PLUS_M_plus_reg310_wpr_reg313_shift                                (0)
#define  LG_M_PLUS_M_plus_reg310_wpr_reg310_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg310_wpr_reg311_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg310_wpr_reg312_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg310_wpr_reg313_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg310_wpr_reg310(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg310_wpr_reg311(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg310_wpr_reg312(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg310_wpr_reg313(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg310_get_wpr_reg310(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg310_get_wpr_reg311(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg310_get_wpr_reg312(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg310_get_wpr_reg313(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg314                                                0x18029714
#define  LG_M_PLUS_M_plus_reg314_reg_addr                                        "0xB8029714"
#define  LG_M_PLUS_M_plus_reg314_reg                                             0xB8029714
#define  LG_M_PLUS_M_plus_reg314_inst_addr                                       "0x00D2"
#define  set_LG_M_PLUS_M_plus_reg314_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg314_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg314_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg314_reg))
#define  LG_M_PLUS_M_plus_reg314_wpr_reg314_shift                                (24)
#define  LG_M_PLUS_M_plus_reg314_wpr_reg315_shift                                (16)
#define  LG_M_PLUS_M_plus_reg314_wpr_reg316_shift                                (8)
#define  LG_M_PLUS_M_plus_reg314_wpr_reg317_shift                                (0)
#define  LG_M_PLUS_M_plus_reg314_wpr_reg314_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg314_wpr_reg315_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg314_wpr_reg316_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg314_wpr_reg317_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg314_wpr_reg314(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg314_wpr_reg315(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg314_wpr_reg316(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg314_wpr_reg317(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg314_get_wpr_reg314(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg314_get_wpr_reg315(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg314_get_wpr_reg316(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg314_get_wpr_reg317(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg318                                                0x18029718
#define  LG_M_PLUS_M_plus_reg318_reg_addr                                        "0xB8029718"
#define  LG_M_PLUS_M_plus_reg318_reg                                             0xB8029718
#define  LG_M_PLUS_M_plus_reg318_inst_addr                                       "0x00D3"
#define  set_LG_M_PLUS_M_plus_reg318_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg318_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg318_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg318_reg))
#define  LG_M_PLUS_M_plus_reg318_wpr_reg318_shift                                (24)
#define  LG_M_PLUS_M_plus_reg318_wpr_reg319_shift                                (16)
#define  LG_M_PLUS_M_plus_reg318_wpr_reg31a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg318_wpr_reg31b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg318_wpr_reg318_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg318_wpr_reg319_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg318_wpr_reg31a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg318_wpr_reg31b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg318_wpr_reg318(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg318_wpr_reg319(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg318_wpr_reg31a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg318_wpr_reg31b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg318_get_wpr_reg318(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg318_get_wpr_reg319(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg318_get_wpr_reg31a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg318_get_wpr_reg31b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg31c                                                0x1802971C
#define  LG_M_PLUS_M_plus_reg31c_reg_addr                                        "0xB802971C"
#define  LG_M_PLUS_M_plus_reg31c_reg                                             0xB802971C
#define  LG_M_PLUS_M_plus_reg31c_inst_addr                                       "0x00D4"
#define  set_LG_M_PLUS_M_plus_reg31c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg31c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg31c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg31c_reg))
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg31c_wpr_reg31f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg31c_get_wpr_reg31c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg31c_get_wpr_reg31d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg31c_get_wpr_reg31e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg31c_get_wpr_reg31f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg320                                                0x18029720
#define  LG_M_PLUS_M_plus_reg320_reg_addr                                        "0xB8029720"
#define  LG_M_PLUS_M_plus_reg320_reg                                             0xB8029720
#define  LG_M_PLUS_M_plus_reg320_inst_addr                                       "0x00D5"
#define  set_LG_M_PLUS_M_plus_reg320_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg320_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg320_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg320_reg))
#define  LG_M_PLUS_M_plus_reg320_wpr_reg320_shift                                (24)
#define  LG_M_PLUS_M_plus_reg320_wpr_reg321_shift                                (16)
#define  LG_M_PLUS_M_plus_reg320_wpr_reg322_shift                                (8)
#define  LG_M_PLUS_M_plus_reg320_wpr_reg323_shift                                (0)
#define  LG_M_PLUS_M_plus_reg320_wpr_reg320_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg320_wpr_reg321_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg320_wpr_reg322_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg320_wpr_reg323_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg320_wpr_reg320(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg320_wpr_reg321(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg320_wpr_reg322(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg320_wpr_reg323(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg320_get_wpr_reg320(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg320_get_wpr_reg321(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg320_get_wpr_reg322(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg320_get_wpr_reg323(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg324                                                0x18029724
#define  LG_M_PLUS_M_plus_reg324_reg_addr                                        "0xB8029724"
#define  LG_M_PLUS_M_plus_reg324_reg                                             0xB8029724
#define  LG_M_PLUS_M_plus_reg324_inst_addr                                       "0x00D6"
#define  set_LG_M_PLUS_M_plus_reg324_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg324_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg324_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg324_reg))
#define  LG_M_PLUS_M_plus_reg324_wpr_reg324_shift                                (24)
#define  LG_M_PLUS_M_plus_reg324_wpr_reg325_shift                                (16)
#define  LG_M_PLUS_M_plus_reg324_wpr_reg326_shift                                (8)
#define  LG_M_PLUS_M_plus_reg324_wpr_reg327_shift                                (0)
#define  LG_M_PLUS_M_plus_reg324_wpr_reg324_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg324_wpr_reg325_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg324_wpr_reg326_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg324_wpr_reg327_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg324_wpr_reg324(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg324_wpr_reg325(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg324_wpr_reg326(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg324_wpr_reg327(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg324_get_wpr_reg324(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg324_get_wpr_reg325(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg324_get_wpr_reg326(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg324_get_wpr_reg327(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg328                                                0x18029728
#define  LG_M_PLUS_M_plus_reg328_reg_addr                                        "0xB8029728"
#define  LG_M_PLUS_M_plus_reg328_reg                                             0xB8029728
#define  LG_M_PLUS_M_plus_reg328_inst_addr                                       "0x00D7"
#define  set_LG_M_PLUS_M_plus_reg328_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg328_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg328_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg328_reg))
#define  LG_M_PLUS_M_plus_reg328_wpr_reg328_shift                                (24)
#define  LG_M_PLUS_M_plus_reg328_wpr_reg329_shift                                (16)
#define  LG_M_PLUS_M_plus_reg328_wpr_reg32a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg328_wpr_reg32b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg328_wpr_reg328_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg328_wpr_reg329_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg328_wpr_reg32a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg328_wpr_reg32b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg328_wpr_reg328(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg328_wpr_reg329(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg328_wpr_reg32a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg328_wpr_reg32b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg328_get_wpr_reg328(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg328_get_wpr_reg329(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg328_get_wpr_reg32a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg328_get_wpr_reg32b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg32c                                                0x1802972C
#define  LG_M_PLUS_M_plus_reg32c_reg_addr                                        "0xB802972C"
#define  LG_M_PLUS_M_plus_reg32c_reg                                             0xB802972C
#define  LG_M_PLUS_M_plus_reg32c_inst_addr                                       "0x00D8"
#define  set_LG_M_PLUS_M_plus_reg32c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg32c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg32c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg32c_reg))
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg32c_wpr_reg32f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg32c_get_wpr_reg32c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg32c_get_wpr_reg32d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg32c_get_wpr_reg32e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg32c_get_wpr_reg32f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg330                                                0x18029730
#define  LG_M_PLUS_M_plus_reg330_reg_addr                                        "0xB8029730"
#define  LG_M_PLUS_M_plus_reg330_reg                                             0xB8029730
#define  LG_M_PLUS_M_plus_reg330_inst_addr                                       "0x00D9"
#define  set_LG_M_PLUS_M_plus_reg330_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg330_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg330_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg330_reg))
#define  LG_M_PLUS_M_plus_reg330_wpr_reg330_shift                                (24)
#define  LG_M_PLUS_M_plus_reg330_wpr_reg331_shift                                (16)
#define  LG_M_PLUS_M_plus_reg330_wpr_reg332_shift                                (8)
#define  LG_M_PLUS_M_plus_reg330_wpr_reg333_shift                                (0)
#define  LG_M_PLUS_M_plus_reg330_wpr_reg330_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg330_wpr_reg331_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg330_wpr_reg332_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg330_wpr_reg333_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg330_wpr_reg330(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg330_wpr_reg331(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg330_wpr_reg332(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg330_wpr_reg333(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg330_get_wpr_reg330(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg330_get_wpr_reg331(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg330_get_wpr_reg332(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg330_get_wpr_reg333(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg334                                                0x18029734
#define  LG_M_PLUS_M_plus_reg334_reg_addr                                        "0xB8029734"
#define  LG_M_PLUS_M_plus_reg334_reg                                             0xB8029734
#define  LG_M_PLUS_M_plus_reg334_inst_addr                                       "0x00DA"
#define  set_LG_M_PLUS_M_plus_reg334_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg334_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg334_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg334_reg))
#define  LG_M_PLUS_M_plus_reg334_wpr_reg334_shift                                (24)
#define  LG_M_PLUS_M_plus_reg334_wpr_reg335_shift                                (16)
#define  LG_M_PLUS_M_plus_reg334_wpr_reg336_shift                                (8)
#define  LG_M_PLUS_M_plus_reg334_wpr_reg337_shift                                (0)
#define  LG_M_PLUS_M_plus_reg334_wpr_reg334_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg334_wpr_reg335_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg334_wpr_reg336_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg334_wpr_reg337_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg334_wpr_reg334(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg334_wpr_reg335(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg334_wpr_reg336(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg334_wpr_reg337(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg334_get_wpr_reg334(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg334_get_wpr_reg335(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg334_get_wpr_reg336(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg334_get_wpr_reg337(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg338                                                0x18029738
#define  LG_M_PLUS_M_plus_reg338_reg_addr                                        "0xB8029738"
#define  LG_M_PLUS_M_plus_reg338_reg                                             0xB8029738
#define  LG_M_PLUS_M_plus_reg338_inst_addr                                       "0x00DB"
#define  set_LG_M_PLUS_M_plus_reg338_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg338_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg338_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg338_reg))
#define  LG_M_PLUS_M_plus_reg338_wpr_reg338_shift                                (24)
#define  LG_M_PLUS_M_plus_reg338_wpr_reg339_shift                                (16)
#define  LG_M_PLUS_M_plus_reg338_wpr_reg33a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg338_wpr_reg33b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg338_wpr_reg338_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg338_wpr_reg339_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg338_wpr_reg33a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg338_wpr_reg33b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg338_wpr_reg338(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg338_wpr_reg339(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg338_wpr_reg33a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg338_wpr_reg33b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg338_get_wpr_reg338(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg338_get_wpr_reg339(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg338_get_wpr_reg33a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg338_get_wpr_reg33b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg33c                                                0x1802973C
#define  LG_M_PLUS_M_plus_reg33c_reg_addr                                        "0xB802973C"
#define  LG_M_PLUS_M_plus_reg33c_reg                                             0xB802973C
#define  LG_M_PLUS_M_plus_reg33c_inst_addr                                       "0x00DC"
#define  set_LG_M_PLUS_M_plus_reg33c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg33c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg33c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg33c_reg))
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg33c_wpr_reg33f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg33c_get_wpr_reg33c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg33c_get_wpr_reg33d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg33c_get_wpr_reg33e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg33c_get_wpr_reg33f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg340                                                0x18029740
#define  LG_M_PLUS_M_plus_reg340_reg_addr                                        "0xB8029740"
#define  LG_M_PLUS_M_plus_reg340_reg                                             0xB8029740
#define  LG_M_PLUS_M_plus_reg340_inst_addr                                       "0x00DD"
#define  set_LG_M_PLUS_M_plus_reg340_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg340_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg340_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg340_reg))
#define  LG_M_PLUS_M_plus_reg340_wpr_reg340_shift                                (24)
#define  LG_M_PLUS_M_plus_reg340_wpr_reg341_shift                                (16)
#define  LG_M_PLUS_M_plus_reg340_wpr_reg342_shift                                (8)
#define  LG_M_PLUS_M_plus_reg340_wpr_reg343_shift                                (0)
#define  LG_M_PLUS_M_plus_reg340_wpr_reg340_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg340_wpr_reg341_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg340_wpr_reg342_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg340_wpr_reg343_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg340_wpr_reg340(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg340_wpr_reg341(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg340_wpr_reg342(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg340_wpr_reg343(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg340_get_wpr_reg340(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg340_get_wpr_reg341(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg340_get_wpr_reg342(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg340_get_wpr_reg343(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg344                                                0x18029744
#define  LG_M_PLUS_M_plus_reg344_reg_addr                                        "0xB8029744"
#define  LG_M_PLUS_M_plus_reg344_reg                                             0xB8029744
#define  LG_M_PLUS_M_plus_reg344_inst_addr                                       "0x00DE"
#define  set_LG_M_PLUS_M_plus_reg344_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg344_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg344_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg344_reg))
#define  LG_M_PLUS_M_plus_reg344_wpr_reg344_shift                                (24)
#define  LG_M_PLUS_M_plus_reg344_wpr_reg345_shift                                (16)
#define  LG_M_PLUS_M_plus_reg344_wpr_reg346_shift                                (8)
#define  LG_M_PLUS_M_plus_reg344_wpr_reg347_shift                                (0)
#define  LG_M_PLUS_M_plus_reg344_wpr_reg344_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg344_wpr_reg345_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg344_wpr_reg346_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg344_wpr_reg347_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg344_wpr_reg344(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg344_wpr_reg345(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg344_wpr_reg346(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg344_wpr_reg347(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg344_get_wpr_reg344(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg344_get_wpr_reg345(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg344_get_wpr_reg346(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg344_get_wpr_reg347(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg348                                                0x18029748
#define  LG_M_PLUS_M_plus_reg348_reg_addr                                        "0xB8029748"
#define  LG_M_PLUS_M_plus_reg348_reg                                             0xB8029748
#define  LG_M_PLUS_M_plus_reg348_inst_addr                                       "0x00DF"
#define  set_LG_M_PLUS_M_plus_reg348_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg348_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg348_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg348_reg))
#define  LG_M_PLUS_M_plus_reg348_wpr_reg348_shift                                (24)
#define  LG_M_PLUS_M_plus_reg348_wpr_reg349_shift                                (16)
#define  LG_M_PLUS_M_plus_reg348_wpr_reg34a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg348_wpr_reg34b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg348_wpr_reg348_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg348_wpr_reg349_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg348_wpr_reg34a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg348_wpr_reg34b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg348_wpr_reg348(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg348_wpr_reg349(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg348_wpr_reg34a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg348_wpr_reg34b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg348_get_wpr_reg348(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg348_get_wpr_reg349(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg348_get_wpr_reg34a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg348_get_wpr_reg34b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg34c                                                0x1802974C
#define  LG_M_PLUS_M_plus_reg34c_reg_addr                                        "0xB802974C"
#define  LG_M_PLUS_M_plus_reg34c_reg                                             0xB802974C
#define  LG_M_PLUS_M_plus_reg34c_inst_addr                                       "0x00E0"
#define  set_LG_M_PLUS_M_plus_reg34c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg34c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg34c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg34c_reg))
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg34c_wpr_reg34f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg34c_get_wpr_reg34c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg34c_get_wpr_reg34d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg34c_get_wpr_reg34e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg34c_get_wpr_reg34f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg350                                                0x18029750
#define  LG_M_PLUS_M_plus_reg350_reg_addr                                        "0xB8029750"
#define  LG_M_PLUS_M_plus_reg350_reg                                             0xB8029750
#define  LG_M_PLUS_M_plus_reg350_inst_addr                                       "0x00E1"
#define  set_LG_M_PLUS_M_plus_reg350_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg350_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg350_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg350_reg))
#define  LG_M_PLUS_M_plus_reg350_wpr_reg350_shift                                (24)
#define  LG_M_PLUS_M_plus_reg350_wpr_reg351_shift                                (16)
#define  LG_M_PLUS_M_plus_reg350_wpr_reg352_shift                                (8)
#define  LG_M_PLUS_M_plus_reg350_wpr_reg353_shift                                (0)
#define  LG_M_PLUS_M_plus_reg350_wpr_reg350_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg350_wpr_reg351_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg350_wpr_reg352_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg350_wpr_reg353_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg350_wpr_reg350(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg350_wpr_reg351(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg350_wpr_reg352(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg350_wpr_reg353(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg350_get_wpr_reg350(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg350_get_wpr_reg351(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg350_get_wpr_reg352(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg350_get_wpr_reg353(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg354                                                0x18029754
#define  LG_M_PLUS_M_plus_reg354_reg_addr                                        "0xB8029754"
#define  LG_M_PLUS_M_plus_reg354_reg                                             0xB8029754
#define  LG_M_PLUS_M_plus_reg354_inst_addr                                       "0x00E2"
#define  set_LG_M_PLUS_M_plus_reg354_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg354_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg354_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg354_reg))
#define  LG_M_PLUS_M_plus_reg354_wpr_reg354_shift                                (24)
#define  LG_M_PLUS_M_plus_reg354_wpr_reg355_shift                                (16)
#define  LG_M_PLUS_M_plus_reg354_wpr_reg356_shift                                (8)
#define  LG_M_PLUS_M_plus_reg354_wpr_reg357_shift                                (0)
#define  LG_M_PLUS_M_plus_reg354_wpr_reg354_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg354_wpr_reg355_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg354_wpr_reg356_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg354_wpr_reg357_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg354_wpr_reg354(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg354_wpr_reg355(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg354_wpr_reg356(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg354_wpr_reg357(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg354_get_wpr_reg354(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg354_get_wpr_reg355(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg354_get_wpr_reg356(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg354_get_wpr_reg357(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg358                                                0x18029758
#define  LG_M_PLUS_M_plus_reg358_reg_addr                                        "0xB8029758"
#define  LG_M_PLUS_M_plus_reg358_reg                                             0xB8029758
#define  LG_M_PLUS_M_plus_reg358_inst_addr                                       "0x00E3"
#define  set_LG_M_PLUS_M_plus_reg358_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg358_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg358_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg358_reg))
#define  LG_M_PLUS_M_plus_reg358_wpr_reg358_shift                                (24)
#define  LG_M_PLUS_M_plus_reg358_wpr_reg359_shift                                (16)
#define  LG_M_PLUS_M_plus_reg358_wpr_reg35a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg358_wpr_reg35b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg358_wpr_reg358_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg358_wpr_reg359_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg358_wpr_reg35a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg358_wpr_reg35b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg358_wpr_reg358(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg358_wpr_reg359(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg358_wpr_reg35a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg358_wpr_reg35b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg358_get_wpr_reg358(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg358_get_wpr_reg359(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg358_get_wpr_reg35a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg358_get_wpr_reg35b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg35c                                                0x1802975C
#define  LG_M_PLUS_M_plus_reg35c_reg_addr                                        "0xB802975C"
#define  LG_M_PLUS_M_plus_reg35c_reg                                             0xB802975C
#define  LG_M_PLUS_M_plus_reg35c_inst_addr                                       "0x00E4"
#define  set_LG_M_PLUS_M_plus_reg35c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg35c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg35c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg35c_reg))
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg35c_wpr_reg35f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg35c_get_wpr_reg35c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg35c_get_wpr_reg35d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg35c_get_wpr_reg35e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg35c_get_wpr_reg35f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg360                                                0x18029760
#define  LG_M_PLUS_M_plus_reg360_reg_addr                                        "0xB8029760"
#define  LG_M_PLUS_M_plus_reg360_reg                                             0xB8029760
#define  LG_M_PLUS_M_plus_reg360_inst_addr                                       "0x00E5"
#define  set_LG_M_PLUS_M_plus_reg360_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg360_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg360_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg360_reg))
#define  LG_M_PLUS_M_plus_reg360_wpr_reg360_shift                                (24)
#define  LG_M_PLUS_M_plus_reg360_wpr_reg361_shift                                (16)
#define  LG_M_PLUS_M_plus_reg360_wpr_reg362_shift                                (8)
#define  LG_M_PLUS_M_plus_reg360_wpr_reg363_shift                                (0)
#define  LG_M_PLUS_M_plus_reg360_wpr_reg360_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg360_wpr_reg361_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg360_wpr_reg362_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg360_wpr_reg363_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg360_wpr_reg360(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg360_wpr_reg361(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg360_wpr_reg362(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg360_wpr_reg363(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg360_get_wpr_reg360(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg360_get_wpr_reg361(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg360_get_wpr_reg362(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg360_get_wpr_reg363(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg364                                                0x18029764
#define  LG_M_PLUS_M_plus_reg364_reg_addr                                        "0xB8029764"
#define  LG_M_PLUS_M_plus_reg364_reg                                             0xB8029764
#define  LG_M_PLUS_M_plus_reg364_inst_addr                                       "0x00E6"
#define  set_LG_M_PLUS_M_plus_reg364_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg364_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg364_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg364_reg))
#define  LG_M_PLUS_M_plus_reg364_wpr_reg364_shift                                (24)
#define  LG_M_PLUS_M_plus_reg364_wpr_reg365_shift                                (16)
#define  LG_M_PLUS_M_plus_reg364_wpr_reg366_shift                                (8)
#define  LG_M_PLUS_M_plus_reg364_wpr_reg367_shift                                (0)
#define  LG_M_PLUS_M_plus_reg364_wpr_reg364_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg364_wpr_reg365_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg364_wpr_reg366_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg364_wpr_reg367_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg364_wpr_reg364(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg364_wpr_reg365(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg364_wpr_reg366(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg364_wpr_reg367(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg364_get_wpr_reg364(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg364_get_wpr_reg365(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg364_get_wpr_reg366(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg364_get_wpr_reg367(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg368                                                0x18029768
#define  LG_M_PLUS_M_plus_reg368_reg_addr                                        "0xB8029768"
#define  LG_M_PLUS_M_plus_reg368_reg                                             0xB8029768
#define  LG_M_PLUS_M_plus_reg368_inst_addr                                       "0x00E7"
#define  set_LG_M_PLUS_M_plus_reg368_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg368_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg368_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg368_reg))
#define  LG_M_PLUS_M_plus_reg368_wpr_reg368_shift                                (24)
#define  LG_M_PLUS_M_plus_reg368_wpr_reg369_shift                                (16)
#define  LG_M_PLUS_M_plus_reg368_wpr_reg36a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg368_wpr_reg36b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg368_wpr_reg368_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg368_wpr_reg369_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg368_wpr_reg36a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg368_wpr_reg36b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg368_wpr_reg368(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg368_wpr_reg369(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg368_wpr_reg36a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg368_wpr_reg36b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg368_get_wpr_reg368(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg368_get_wpr_reg369(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg368_get_wpr_reg36a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg368_get_wpr_reg36b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg36c                                                0x1802976C
#define  LG_M_PLUS_M_plus_reg36c_reg_addr                                        "0xB802976C"
#define  LG_M_PLUS_M_plus_reg36c_reg                                             0xB802976C
#define  LG_M_PLUS_M_plus_reg36c_inst_addr                                       "0x00E8"
#define  set_LG_M_PLUS_M_plus_reg36c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg36c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg36c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg36c_reg))
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg36c_wpr_reg36f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg36c_get_wpr_reg36c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg36c_get_wpr_reg36d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg36c_get_wpr_reg36e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg36c_get_wpr_reg36f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg370                                                0x18029770
#define  LG_M_PLUS_M_plus_reg370_reg_addr                                        "0xB8029770"
#define  LG_M_PLUS_M_plus_reg370_reg                                             0xB8029770
#define  LG_M_PLUS_M_plus_reg370_inst_addr                                       "0x00E9"
#define  set_LG_M_PLUS_M_plus_reg370_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg370_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg370_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg370_reg))
#define  LG_M_PLUS_M_plus_reg370_wpr_reg370_shift                                (24)
#define  LG_M_PLUS_M_plus_reg370_wpr_reg371_shift                                (16)
#define  LG_M_PLUS_M_plus_reg370_wpr_reg372_shift                                (8)
#define  LG_M_PLUS_M_plus_reg370_wpr_reg373_shift                                (0)
#define  LG_M_PLUS_M_plus_reg370_wpr_reg370_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg370_wpr_reg371_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg370_wpr_reg372_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg370_wpr_reg373_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg370_wpr_reg370(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg370_wpr_reg371(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg370_wpr_reg372(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg370_wpr_reg373(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg370_get_wpr_reg370(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg370_get_wpr_reg371(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg370_get_wpr_reg372(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg370_get_wpr_reg373(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg374                                                0x18029774
#define  LG_M_PLUS_M_plus_reg374_reg_addr                                        "0xB8029774"
#define  LG_M_PLUS_M_plus_reg374_reg                                             0xB8029774
#define  LG_M_PLUS_M_plus_reg374_inst_addr                                       "0x00EA"
#define  set_LG_M_PLUS_M_plus_reg374_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg374_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg374_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg374_reg))
#define  LG_M_PLUS_M_plus_reg374_wpr_reg374_shift                                (24)
#define  LG_M_PLUS_M_plus_reg374_wpr_reg375_shift                                (16)
#define  LG_M_PLUS_M_plus_reg374_wpr_reg376_shift                                (8)
#define  LG_M_PLUS_M_plus_reg374_wpr_reg377_shift                                (0)
#define  LG_M_PLUS_M_plus_reg374_wpr_reg374_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg374_wpr_reg375_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg374_wpr_reg376_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg374_wpr_reg377_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg374_wpr_reg374(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg374_wpr_reg375(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg374_wpr_reg376(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg374_wpr_reg377(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg374_get_wpr_reg374(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg374_get_wpr_reg375(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg374_get_wpr_reg376(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg374_get_wpr_reg377(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg378                                                0x18029778
#define  LG_M_PLUS_M_plus_reg378_reg_addr                                        "0xB8029778"
#define  LG_M_PLUS_M_plus_reg378_reg                                             0xB8029778
#define  LG_M_PLUS_M_plus_reg378_inst_addr                                       "0x00EB"
#define  set_LG_M_PLUS_M_plus_reg378_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg378_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg378_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg378_reg))
#define  LG_M_PLUS_M_plus_reg378_wpr_reg378_shift                                (24)
#define  LG_M_PLUS_M_plus_reg378_wpr_reg379_shift                                (16)
#define  LG_M_PLUS_M_plus_reg378_wpr_reg37a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg378_wpr_reg37b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg378_wpr_reg378_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg378_wpr_reg379_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg378_wpr_reg37a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg378_wpr_reg37b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg378_wpr_reg378(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg378_wpr_reg379(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg378_wpr_reg37a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg378_wpr_reg37b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg378_get_wpr_reg378(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg378_get_wpr_reg379(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg378_get_wpr_reg37a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg378_get_wpr_reg37b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg37c                                                0x1802977C
#define  LG_M_PLUS_M_plus_reg37c_reg_addr                                        "0xB802977C"
#define  LG_M_PLUS_M_plus_reg37c_reg                                             0xB802977C
#define  LG_M_PLUS_M_plus_reg37c_inst_addr                                       "0x00EC"
#define  set_LG_M_PLUS_M_plus_reg37c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg37c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg37c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg37c_reg))
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg37c_wpr_reg37f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg37c_get_wpr_reg37c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg37c_get_wpr_reg37d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg37c_get_wpr_reg37e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg37c_get_wpr_reg37f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg380                                                0x18029780
#define  LG_M_PLUS_M_plus_reg380_reg_addr                                        "0xB8029780"
#define  LG_M_PLUS_M_plus_reg380_reg                                             0xB8029780
#define  LG_M_PLUS_M_plus_reg380_inst_addr                                       "0x00ED"
#define  set_LG_M_PLUS_M_plus_reg380_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg380_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg380_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg380_reg))
#define  LG_M_PLUS_M_plus_reg380_wpr_reg380_shift                                (24)
#define  LG_M_PLUS_M_plus_reg380_wpr_reg381_shift                                (16)
#define  LG_M_PLUS_M_plus_reg380_wpr_reg382_shift                                (8)
#define  LG_M_PLUS_M_plus_reg380_wpr_reg383_shift                                (0)
#define  LG_M_PLUS_M_plus_reg380_wpr_reg380_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg380_wpr_reg381_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg380_wpr_reg382_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg380_wpr_reg383_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg380_wpr_reg380(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg380_wpr_reg381(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg380_wpr_reg382(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg380_wpr_reg383(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg380_get_wpr_reg380(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg380_get_wpr_reg381(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg380_get_wpr_reg382(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg380_get_wpr_reg383(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg384                                                0x18029784
#define  LG_M_PLUS_M_plus_reg384_reg_addr                                        "0xB8029784"
#define  LG_M_PLUS_M_plus_reg384_reg                                             0xB8029784
#define  LG_M_PLUS_M_plus_reg384_inst_addr                                       "0x00EE"
#define  set_LG_M_PLUS_M_plus_reg384_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg384_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg384_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg384_reg))
#define  LG_M_PLUS_M_plus_reg384_wpr_reg384_shift                                (24)
#define  LG_M_PLUS_M_plus_reg384_wpr_reg385_shift                                (16)
#define  LG_M_PLUS_M_plus_reg384_wpr_reg386_shift                                (8)
#define  LG_M_PLUS_M_plus_reg384_wpr_reg387_shift                                (0)
#define  LG_M_PLUS_M_plus_reg384_wpr_reg384_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg384_wpr_reg385_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg384_wpr_reg386_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg384_wpr_reg387_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg384_wpr_reg384(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg384_wpr_reg385(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg384_wpr_reg386(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg384_wpr_reg387(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg384_get_wpr_reg384(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg384_get_wpr_reg385(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg384_get_wpr_reg386(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg384_get_wpr_reg387(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg388                                                0x18029788
#define  LG_M_PLUS_M_plus_reg388_reg_addr                                        "0xB8029788"
#define  LG_M_PLUS_M_plus_reg388_reg                                             0xB8029788
#define  LG_M_PLUS_M_plus_reg388_inst_addr                                       "0x00EF"
#define  set_LG_M_PLUS_M_plus_reg388_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg388_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg388_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg388_reg))
#define  LG_M_PLUS_M_plus_reg388_wpr_reg388_shift                                (24)
#define  LG_M_PLUS_M_plus_reg388_wpr_reg389_shift                                (16)
#define  LG_M_PLUS_M_plus_reg388_wpr_reg38a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg388_wpr_reg38b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg388_wpr_reg388_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg388_wpr_reg389_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg388_wpr_reg38a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg388_wpr_reg38b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg388_wpr_reg388(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg388_wpr_reg389(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg388_wpr_reg38a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg388_wpr_reg38b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg388_get_wpr_reg388(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg388_get_wpr_reg389(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg388_get_wpr_reg38a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg388_get_wpr_reg38b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg38c                                                0x1802978C
#define  LG_M_PLUS_M_plus_reg38c_reg_addr                                        "0xB802978C"
#define  LG_M_PLUS_M_plus_reg38c_reg                                             0xB802978C
#define  LG_M_PLUS_M_plus_reg38c_inst_addr                                       "0x00F0"
#define  set_LG_M_PLUS_M_plus_reg38c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg38c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg38c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg38c_reg))
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg38c_wpr_reg38f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg38c_get_wpr_reg38c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg38c_get_wpr_reg38d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg38c_get_wpr_reg38e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg38c_get_wpr_reg38f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg390                                                0x18029790
#define  LG_M_PLUS_M_plus_reg390_reg_addr                                        "0xB8029790"
#define  LG_M_PLUS_M_plus_reg390_reg                                             0xB8029790
#define  LG_M_PLUS_M_plus_reg390_inst_addr                                       "0x00F1"
#define  set_LG_M_PLUS_M_plus_reg390_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg390_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg390_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg390_reg))
#define  LG_M_PLUS_M_plus_reg390_wpr_reg390_shift                                (24)
#define  LG_M_PLUS_M_plus_reg390_wpr_reg391_shift                                (16)
#define  LG_M_PLUS_M_plus_reg390_wpr_reg392_shift                                (8)
#define  LG_M_PLUS_M_plus_reg390_wpr_reg393_shift                                (0)
#define  LG_M_PLUS_M_plus_reg390_wpr_reg390_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg390_wpr_reg391_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg390_wpr_reg392_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg390_wpr_reg393_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg390_wpr_reg390(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg390_wpr_reg391(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg390_wpr_reg392(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg390_wpr_reg393(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg390_get_wpr_reg390(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg390_get_wpr_reg391(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg390_get_wpr_reg392(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg390_get_wpr_reg393(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg394                                                0x18029794
#define  LG_M_PLUS_M_plus_reg394_reg_addr                                        "0xB8029794"
#define  LG_M_PLUS_M_plus_reg394_reg                                             0xB8029794
#define  LG_M_PLUS_M_plus_reg394_inst_addr                                       "0x00F2"
#define  set_LG_M_PLUS_M_plus_reg394_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg394_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg394_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg394_reg))
#define  LG_M_PLUS_M_plus_reg394_wpr_reg394_shift                                (24)
#define  LG_M_PLUS_M_plus_reg394_wpr_reg395_shift                                (16)
#define  LG_M_PLUS_M_plus_reg394_wpr_reg396_shift                                (8)
#define  LG_M_PLUS_M_plus_reg394_wpr_reg397_shift                                (0)
#define  LG_M_PLUS_M_plus_reg394_wpr_reg394_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg394_wpr_reg395_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg394_wpr_reg396_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg394_wpr_reg397_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg394_wpr_reg394(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg394_wpr_reg395(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg394_wpr_reg396(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg394_wpr_reg397(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg394_get_wpr_reg394(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg394_get_wpr_reg395(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg394_get_wpr_reg396(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg394_get_wpr_reg397(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg398                                                0x18029798
#define  LG_M_PLUS_M_plus_reg398_reg_addr                                        "0xB8029798"
#define  LG_M_PLUS_M_plus_reg398_reg                                             0xB8029798
#define  LG_M_PLUS_M_plus_reg398_inst_addr                                       "0x00F3"
#define  set_LG_M_PLUS_M_plus_reg398_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg398_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg398_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg398_reg))
#define  LG_M_PLUS_M_plus_reg398_wpr_reg398_shift                                (24)
#define  LG_M_PLUS_M_plus_reg398_wpr_reg399_shift                                (16)
#define  LG_M_PLUS_M_plus_reg398_wpr_reg39a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg398_wpr_reg39b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg398_wpr_reg398_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg398_wpr_reg399_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg398_wpr_reg39a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg398_wpr_reg39b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg398_wpr_reg398(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg398_wpr_reg399(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg398_wpr_reg39a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg398_wpr_reg39b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg398_get_wpr_reg398(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg398_get_wpr_reg399(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg398_get_wpr_reg39a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg398_get_wpr_reg39b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg39c                                                0x1802979C
#define  LG_M_PLUS_M_plus_reg39c_reg_addr                                        "0xB802979C"
#define  LG_M_PLUS_M_plus_reg39c_reg                                             0xB802979C
#define  LG_M_PLUS_M_plus_reg39c_inst_addr                                       "0x00F4"
#define  set_LG_M_PLUS_M_plus_reg39c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg39c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg39c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg39c_reg))
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg39c_wpr_reg39f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg39c_get_wpr_reg39c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg39c_get_wpr_reg39d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg39c_get_wpr_reg39e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg39c_get_wpr_reg39f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3a0                                                0x180297A0
#define  LG_M_PLUS_M_plus_reg3a0_reg_addr                                        "0xB80297A0"
#define  LG_M_PLUS_M_plus_reg3a0_reg                                             0xB80297A0
#define  LG_M_PLUS_M_plus_reg3a0_inst_addr                                       "0x00F5"
#define  set_LG_M_PLUS_M_plus_reg3a0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3a0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3a0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3a0_reg))
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3a0_wpr_reg3a3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3a0_get_wpr_reg3a0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3a0_get_wpr_reg3a1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3a0_get_wpr_reg3a2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3a0_get_wpr_reg3a3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3a4                                                0x180297A4
#define  LG_M_PLUS_M_plus_reg3a4_reg_addr                                        "0xB80297A4"
#define  LG_M_PLUS_M_plus_reg3a4_reg                                             0xB80297A4
#define  LG_M_PLUS_M_plus_reg3a4_inst_addr                                       "0x00F6"
#define  set_LG_M_PLUS_M_plus_reg3a4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3a4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3a4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3a4_reg))
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3a4_wpr_reg3a7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3a4_get_wpr_reg3a4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3a4_get_wpr_reg3a5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3a4_get_wpr_reg3a6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3a4_get_wpr_reg3a7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3a8                                                0x180297A8
#define  LG_M_PLUS_M_plus_reg3a8_reg_addr                                        "0xB80297A8"
#define  LG_M_PLUS_M_plus_reg3a8_reg                                             0xB80297A8
#define  LG_M_PLUS_M_plus_reg3a8_inst_addr                                       "0x00F7"
#define  set_LG_M_PLUS_M_plus_reg3a8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3a8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3a8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3a8_reg))
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3a8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3a9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3aa_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3ab_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3a8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3a9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3aa_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3ab_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3a8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3a9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3aa(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3a8_wpr_reg3ab(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3a8_get_wpr_reg3a8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3a8_get_wpr_reg3a9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3a8_get_wpr_reg3aa(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3a8_get_wpr_reg3ab(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3ac                                                0x180297AC
#define  LG_M_PLUS_M_plus_reg3ac_reg_addr                                        "0xB80297AC"
#define  LG_M_PLUS_M_plus_reg3ac_reg                                             0xB80297AC
#define  LG_M_PLUS_M_plus_reg3ac_inst_addr                                       "0x00F8"
#define  set_LG_M_PLUS_M_plus_reg3ac_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3ac_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3ac_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3ac_reg))
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3ac_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3ad_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3ae_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3af_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3ac_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3ad_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3ae_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3af_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3ac(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3ad(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3ae(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3ac_wpr_reg3af(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3ac_get_wpr_reg3ac(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3ac_get_wpr_reg3ad(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3ac_get_wpr_reg3ae(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3ac_get_wpr_reg3af(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3b0                                                0x180297B0
#define  LG_M_PLUS_M_plus_reg3b0_reg_addr                                        "0xB80297B0"
#define  LG_M_PLUS_M_plus_reg3b0_reg                                             0xB80297B0
#define  LG_M_PLUS_M_plus_reg3b0_inst_addr                                       "0x00F9"
#define  set_LG_M_PLUS_M_plus_reg3b0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3b0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3b0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3b0_reg))
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3b0_wpr_reg3b3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3b0_get_wpr_reg3b0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3b0_get_wpr_reg3b1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3b0_get_wpr_reg3b2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3b0_get_wpr_reg3b3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3b4                                                0x180297B4
#define  LG_M_PLUS_M_plus_reg3b4_reg_addr                                        "0xB80297B4"
#define  LG_M_PLUS_M_plus_reg3b4_reg                                             0xB80297B4
#define  LG_M_PLUS_M_plus_reg3b4_inst_addr                                       "0x00FA"
#define  set_LG_M_PLUS_M_plus_reg3b4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3b4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3b4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3b4_reg))
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3b4_wpr_reg3b7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3b4_get_wpr_reg3b4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3b4_get_wpr_reg3b5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3b4_get_wpr_reg3b6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3b4_get_wpr_reg3b7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3b8                                                0x180297B8
#define  LG_M_PLUS_M_plus_reg3b8_reg_addr                                        "0xB80297B8"
#define  LG_M_PLUS_M_plus_reg3b8_reg                                             0xB80297B8
#define  LG_M_PLUS_M_plus_reg3b8_inst_addr                                       "0x00FB"
#define  set_LG_M_PLUS_M_plus_reg3b8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3b8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3b8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3b8_reg))
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3b8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3b9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3ba_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3bb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3b8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3b9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3ba_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3bb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3b8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3b9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3ba(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3b8_wpr_reg3bb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3b8_get_wpr_reg3b8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3b8_get_wpr_reg3b9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3b8_get_wpr_reg3ba(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3b8_get_wpr_reg3bb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3bc                                                0x180297BC
#define  LG_M_PLUS_M_plus_reg3bc_reg_addr                                        "0xB80297BC"
#define  LG_M_PLUS_M_plus_reg3bc_reg                                             0xB80297BC
#define  LG_M_PLUS_M_plus_reg3bc_inst_addr                                       "0x00FC"
#define  set_LG_M_PLUS_M_plus_reg3bc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3bc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3bc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3bc_reg))
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3bc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3bd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3be_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3bf_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3bc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3bd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3be_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3bf_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3bc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3bd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3be(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3bc_wpr_reg3bf(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3bc_get_wpr_reg3bc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3bc_get_wpr_reg3bd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3bc_get_wpr_reg3be(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3bc_get_wpr_reg3bf(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3c0                                                0x180297C0
#define  LG_M_PLUS_M_plus_reg3c0_reg_addr                                        "0xB80297C0"
#define  LG_M_PLUS_M_plus_reg3c0_reg                                             0xB80297C0
#define  LG_M_PLUS_M_plus_reg3c0_inst_addr                                       "0x00FD"
#define  set_LG_M_PLUS_M_plus_reg3c0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3c0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3c0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3c0_reg))
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3c0_wpr_reg3c3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3c0_get_wpr_reg3c0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3c0_get_wpr_reg3c1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3c0_get_wpr_reg3c2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3c0_get_wpr_reg3c3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3c4                                                0x180297C4
#define  LG_M_PLUS_M_plus_reg3c4_reg_addr                                        "0xB80297C4"
#define  LG_M_PLUS_M_plus_reg3c4_reg                                             0xB80297C4
#define  LG_M_PLUS_M_plus_reg3c4_inst_addr                                       "0x00FE"
#define  set_LG_M_PLUS_M_plus_reg3c4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3c4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3c4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3c4_reg))
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3c4_wpr_reg3c7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3c4_get_wpr_reg3c4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3c4_get_wpr_reg3c5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3c4_get_wpr_reg3c6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3c4_get_wpr_reg3c7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3c8                                                0x180297C8
#define  LG_M_PLUS_M_plus_reg3c8_reg_addr                                        "0xB80297C8"
#define  LG_M_PLUS_M_plus_reg3c8_reg                                             0xB80297C8
#define  LG_M_PLUS_M_plus_reg3c8_inst_addr                                       "0x00FF"
#define  set_LG_M_PLUS_M_plus_reg3c8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3c8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3c8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3c8_reg))
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3c8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3c9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3ca_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3cb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3c8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3c9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3ca_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3cb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3c8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3c9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3ca(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3c8_wpr_reg3cb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3c8_get_wpr_reg3c8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3c8_get_wpr_reg3c9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3c8_get_wpr_reg3ca(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3c8_get_wpr_reg3cb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3cc                                                0x180297CC
#define  LG_M_PLUS_M_plus_reg3cc_reg_addr                                        "0xB80297CC"
#define  LG_M_PLUS_M_plus_reg3cc_reg                                             0xB80297CC
#define  LG_M_PLUS_M_plus_reg3cc_inst_addr                                       "0x0100"
#define  set_LG_M_PLUS_M_plus_reg3cc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3cc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3cc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3cc_reg))
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3cc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3cd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3ce_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3cf_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3cc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3cd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3ce_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3cf_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3cc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3cd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3ce(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3cc_wpr_reg3cf(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3cc_get_wpr_reg3cc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3cc_get_wpr_reg3cd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3cc_get_wpr_reg3ce(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3cc_get_wpr_reg3cf(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3d0                                                0x180297D0
#define  LG_M_PLUS_M_plus_reg3d0_reg_addr                                        "0xB80297D0"
#define  LG_M_PLUS_M_plus_reg3d0_reg                                             0xB80297D0
#define  LG_M_PLUS_M_plus_reg3d0_inst_addr                                       "0x0101"
#define  set_LG_M_PLUS_M_plus_reg3d0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3d0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3d0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3d0_reg))
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3d0_wpr_reg3d3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3d0_get_wpr_reg3d0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3d0_get_wpr_reg3d1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3d0_get_wpr_reg3d2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3d0_get_wpr_reg3d3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3d4                                                0x180297D4
#define  LG_M_PLUS_M_plus_reg3d4_reg_addr                                        "0xB80297D4"
#define  LG_M_PLUS_M_plus_reg3d4_reg                                             0xB80297D4
#define  LG_M_PLUS_M_plus_reg3d4_inst_addr                                       "0x0102"
#define  set_LG_M_PLUS_M_plus_reg3d4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3d4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3d4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3d4_reg))
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3d4_wpr_reg3d7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3d4_get_wpr_reg3d4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3d4_get_wpr_reg3d5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3d4_get_wpr_reg3d6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3d4_get_wpr_reg3d7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3d8                                                0x180297D8
#define  LG_M_PLUS_M_plus_reg3d8_reg_addr                                        "0xB80297D8"
#define  LG_M_PLUS_M_plus_reg3d8_reg                                             0xB80297D8
#define  LG_M_PLUS_M_plus_reg3d8_inst_addr                                       "0x0103"
#define  set_LG_M_PLUS_M_plus_reg3d8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3d8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3d8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3d8_reg))
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3d8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3d9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3da_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3db_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3d8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3d9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3da_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3db_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3d8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3d9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3da(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3d8_wpr_reg3db(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3d8_get_wpr_reg3d8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3d8_get_wpr_reg3d9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3d8_get_wpr_reg3da(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3d8_get_wpr_reg3db(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3dc                                                0x180297DC
#define  LG_M_PLUS_M_plus_reg3dc_reg_addr                                        "0xB80297DC"
#define  LG_M_PLUS_M_plus_reg3dc_reg                                             0xB80297DC
#define  LG_M_PLUS_M_plus_reg3dc_inst_addr                                       "0x0104"
#define  set_LG_M_PLUS_M_plus_reg3dc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3dc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3dc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3dc_reg))
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3dc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3dd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3de_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3df_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3dc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3dd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3de_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3df_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3dc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3dd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3de(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3dc_wpr_reg3df(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3dc_get_wpr_reg3dc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3dc_get_wpr_reg3dd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3dc_get_wpr_reg3de(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3dc_get_wpr_reg3df(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3e0                                                0x180297E0
#define  LG_M_PLUS_M_plus_reg3e0_reg_addr                                        "0xB80297E0"
#define  LG_M_PLUS_M_plus_reg3e0_reg                                             0xB80297E0
#define  LG_M_PLUS_M_plus_reg3e0_inst_addr                                       "0x0105"
#define  set_LG_M_PLUS_M_plus_reg3e0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3e0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3e0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3e0_reg))
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3e0_wpr_reg3e3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3e0_get_wpr_reg3e0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3e0_get_wpr_reg3e1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3e0_get_wpr_reg3e2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3e0_get_wpr_reg3e3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3e4                                                0x180297E4
#define  LG_M_PLUS_M_plus_reg3e4_reg_addr                                        "0xB80297E4"
#define  LG_M_PLUS_M_plus_reg3e4_reg                                             0xB80297E4
#define  LG_M_PLUS_M_plus_reg3e4_inst_addr                                       "0x0106"
#define  set_LG_M_PLUS_M_plus_reg3e4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3e4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3e4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3e4_reg))
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3e4_wpr_reg3e7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3e4_get_wpr_reg3e4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3e4_get_wpr_reg3e5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3e4_get_wpr_reg3e6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3e4_get_wpr_reg3e7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3e8                                                0x180297E8
#define  LG_M_PLUS_M_plus_reg3e8_reg_addr                                        "0xB80297E8"
#define  LG_M_PLUS_M_plus_reg3e8_reg                                             0xB80297E8
#define  LG_M_PLUS_M_plus_reg3e8_inst_addr                                       "0x0107"
#define  set_LG_M_PLUS_M_plus_reg3e8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3e8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3e8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3e8_reg))
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3e8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3e9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3ea_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3eb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3e8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3e9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3ea_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3eb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3e8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3e9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3ea(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3e8_wpr_reg3eb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3e8_get_wpr_reg3e8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3e8_get_wpr_reg3e9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3e8_get_wpr_reg3ea(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3e8_get_wpr_reg3eb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3ec                                                0x180297EC
#define  LG_M_PLUS_M_plus_reg3ec_reg_addr                                        "0xB80297EC"
#define  LG_M_PLUS_M_plus_reg3ec_reg                                             0xB80297EC
#define  LG_M_PLUS_M_plus_reg3ec_inst_addr                                       "0x0108"
#define  set_LG_M_PLUS_M_plus_reg3ec_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3ec_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3ec_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3ec_reg))
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ec_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ed_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ee_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ef_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ec_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ed_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ee_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ef_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ec(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ed(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ee(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3ec_wpr_reg3ef(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3ec_get_wpr_reg3ec(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3ec_get_wpr_reg3ed(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3ec_get_wpr_reg3ee(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3ec_get_wpr_reg3ef(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3f0                                                0x180297F0
#define  LG_M_PLUS_M_plus_reg3f0_reg_addr                                        "0xB80297F0"
#define  LG_M_PLUS_M_plus_reg3f0_reg                                             0xB80297F0
#define  LG_M_PLUS_M_plus_reg3f0_inst_addr                                       "0x0109"
#define  set_LG_M_PLUS_M_plus_reg3f0_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3f0_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3f0_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3f0_reg))
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f0_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f1_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f2_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f3_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f0_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f1_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f2_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f3_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f0(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f1(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f2(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3f0_wpr_reg3f3(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3f0_get_wpr_reg3f0(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3f0_get_wpr_reg3f1(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3f0_get_wpr_reg3f2(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3f0_get_wpr_reg3f3(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3f4                                                0x180297F4
#define  LG_M_PLUS_M_plus_reg3f4_reg_addr                                        "0xB80297F4"
#define  LG_M_PLUS_M_plus_reg3f4_reg                                             0xB80297F4
#define  LG_M_PLUS_M_plus_reg3f4_inst_addr                                       "0x010A"
#define  set_LG_M_PLUS_M_plus_reg3f4_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3f4_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3f4_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3f4_reg))
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f4_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f5_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f6_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f7_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f4_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f5_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f6_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f7_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f4(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f5(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f6(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3f4_wpr_reg3f7(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3f4_get_wpr_reg3f4(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3f4_get_wpr_reg3f5(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3f4_get_wpr_reg3f6(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3f4_get_wpr_reg3f7(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3f8                                                0x180297F8
#define  LG_M_PLUS_M_plus_reg3f8_reg_addr                                        "0xB80297F8"
#define  LG_M_PLUS_M_plus_reg3f8_reg                                             0xB80297F8
#define  LG_M_PLUS_M_plus_reg3f8_inst_addr                                       "0x010B"
#define  set_LG_M_PLUS_M_plus_reg3f8_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3f8_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3f8_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3f8_reg))
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3f8_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3f9_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3fa_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3fb_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3f8_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3f9_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3fa_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3fb_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3f8(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3f9(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3fa(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3f8_wpr_reg3fb(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3f8_get_wpr_reg3f8(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3f8_get_wpr_reg3f9(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3f8_get_wpr_reg3fa(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3f8_get_wpr_reg3fb(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg3fc                                                0x180297FC
#define  LG_M_PLUS_M_plus_reg3fc_reg_addr                                        "0xB80297FC"
#define  LG_M_PLUS_M_plus_reg3fc_reg                                             0xB80297FC
#define  LG_M_PLUS_M_plus_reg3fc_inst_addr                                       "0x010C"
#define  set_LG_M_PLUS_M_plus_reg3fc_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3fc_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg3fc_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg3fc_reg))
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3fc_shift                                (24)
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3fd_shift                                (16)
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3fe_shift                                (8)
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3ff_shift                                (0)
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3fc_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3fd_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3fe_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3ff_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3fc(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3fd(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3fe(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg3fc_wpr_reg3ff(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg3fc_get_wpr_reg3fc(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg3fc_get_wpr_reg3fd(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg3fc_get_wpr_reg3fe(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg3fc_get_wpr_reg3ff(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg400                                                0x18028800
#define  LG_M_PLUS_M_plus_reg400_reg_addr                                        "0xB8028800"
#define  LG_M_PLUS_M_plus_reg400_reg                                             0xB8028800
#define  LG_M_PLUS_M_plus_reg400_inst_addr                                       "0x010D"
#define  set_LG_M_PLUS_M_plus_reg400_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg400_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg400_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg400_reg))
#define  LG_M_PLUS_M_plus_reg400_wpr_reg400_shift                                (24)
#define  LG_M_PLUS_M_plus_reg400_wpr_reg401_shift                                (16)
#define  LG_M_PLUS_M_plus_reg400_wpr_reg402_shift                                (8)
#define  LG_M_PLUS_M_plus_reg400_wpr_reg403_shift                                (0)
#define  LG_M_PLUS_M_plus_reg400_wpr_reg400_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg400_wpr_reg401_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg400_wpr_reg402_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg400_wpr_reg403_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg400_wpr_reg400(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg400_wpr_reg401(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg400_wpr_reg402(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg400_wpr_reg403(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg400_get_wpr_reg400(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg400_get_wpr_reg401(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg400_get_wpr_reg402(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg400_get_wpr_reg403(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg404                                                0x18028804
#define  LG_M_PLUS_M_plus_reg404_reg_addr                                        "0xB8028804"
#define  LG_M_PLUS_M_plus_reg404_reg                                             0xB8028804
#define  LG_M_PLUS_M_plus_reg404_inst_addr                                       "0x010E"
#define  set_LG_M_PLUS_M_plus_reg404_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg404_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg404_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg404_reg))
#define  LG_M_PLUS_M_plus_reg404_wpr_reg404_shift                                (24)
#define  LG_M_PLUS_M_plus_reg404_wpr_reg405_shift                                (16)
#define  LG_M_PLUS_M_plus_reg404_wpr_reg406_shift                                (8)
#define  LG_M_PLUS_M_plus_reg404_wpr_reg407_shift                                (0)
#define  LG_M_PLUS_M_plus_reg404_wpr_reg404_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg404_wpr_reg405_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg404_wpr_reg406_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg404_wpr_reg407_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg404_wpr_reg404(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg404_wpr_reg405(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg404_wpr_reg406(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg404_wpr_reg407(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg404_get_wpr_reg404(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg404_get_wpr_reg405(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg404_get_wpr_reg406(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg404_get_wpr_reg407(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg408                                                0x18028808
#define  LG_M_PLUS_M_plus_reg408_reg_addr                                        "0xB8028808"
#define  LG_M_PLUS_M_plus_reg408_reg                                             0xB8028808
#define  LG_M_PLUS_M_plus_reg408_inst_addr                                       "0x010F"
#define  set_LG_M_PLUS_M_plus_reg408_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg408_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg408_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg408_reg))
#define  LG_M_PLUS_M_plus_reg408_wpr_reg408_shift                                (24)
#define  LG_M_PLUS_M_plus_reg408_wpr_reg409_shift                                (16)
#define  LG_M_PLUS_M_plus_reg408_wpr_reg40a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg408_wpr_reg40b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg408_wpr_reg408_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg408_wpr_reg409_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg408_wpr_reg40a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg408_wpr_reg40b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg408_wpr_reg408(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg408_wpr_reg409(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg408_wpr_reg40a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg408_wpr_reg40b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg408_get_wpr_reg408(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg408_get_wpr_reg409(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg408_get_wpr_reg40a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg408_get_wpr_reg40b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg40c                                                0x1802880C
#define  LG_M_PLUS_M_plus_reg40c_reg_addr                                        "0xB802880C"
#define  LG_M_PLUS_M_plus_reg40c_reg                                             0xB802880C
#define  LG_M_PLUS_M_plus_reg40c_inst_addr                                       "0x0110"
#define  set_LG_M_PLUS_M_plus_reg40c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg40c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg40c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg40c_reg))
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg40c_wpr_reg40f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg40c_get_wpr_reg40c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg40c_get_wpr_reg40d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg40c_get_wpr_reg40e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg40c_get_wpr_reg40f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg410                                                0x18028810
#define  LG_M_PLUS_M_plus_reg410_reg_addr                                        "0xB8028810"
#define  LG_M_PLUS_M_plus_reg410_reg                                             0xB8028810
#define  LG_M_PLUS_M_plus_reg410_inst_addr                                       "0x0111"
#define  set_LG_M_PLUS_M_plus_reg410_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg410_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg410_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg410_reg))
#define  LG_M_PLUS_M_plus_reg410_wpr_reg410_shift                                (24)
#define  LG_M_PLUS_M_plus_reg410_wpr_reg411_shift                                (16)
#define  LG_M_PLUS_M_plus_reg410_wpr_reg412_shift                                (8)
#define  LG_M_PLUS_M_plus_reg410_wpr_reg413_shift                                (0)
#define  LG_M_PLUS_M_plus_reg410_wpr_reg410_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg410_wpr_reg411_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg410_wpr_reg412_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg410_wpr_reg413_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg410_wpr_reg410(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg410_wpr_reg411(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg410_wpr_reg412(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg410_wpr_reg413(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg410_get_wpr_reg410(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg410_get_wpr_reg411(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg410_get_wpr_reg412(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg410_get_wpr_reg413(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg414                                                0x18028814
#define  LG_M_PLUS_M_plus_reg414_reg_addr                                        "0xB8028814"
#define  LG_M_PLUS_M_plus_reg414_reg                                             0xB8028814
#define  LG_M_PLUS_M_plus_reg414_inst_addr                                       "0x0112"
#define  set_LG_M_PLUS_M_plus_reg414_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg414_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg414_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg414_reg))
#define  LG_M_PLUS_M_plus_reg414_wpr_reg414_shift                                (24)
#define  LG_M_PLUS_M_plus_reg414_wpr_reg415_shift                                (16)
#define  LG_M_PLUS_M_plus_reg414_wpr_reg416_shift                                (8)
#define  LG_M_PLUS_M_plus_reg414_wpr_reg417_shift                                (0)
#define  LG_M_PLUS_M_plus_reg414_wpr_reg414_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg414_wpr_reg415_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg414_wpr_reg416_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg414_wpr_reg417_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg414_wpr_reg414(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg414_wpr_reg415(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg414_wpr_reg416(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg414_wpr_reg417(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg414_get_wpr_reg414(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg414_get_wpr_reg415(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg414_get_wpr_reg416(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg414_get_wpr_reg417(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg418                                                0x18028818
#define  LG_M_PLUS_M_plus_reg418_reg_addr                                        "0xB8028818"
#define  LG_M_PLUS_M_plus_reg418_reg                                             0xB8028818
#define  LG_M_PLUS_M_plus_reg418_inst_addr                                       "0x0113"
#define  set_LG_M_PLUS_M_plus_reg418_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg418_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg418_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg418_reg))
#define  LG_M_PLUS_M_plus_reg418_wpr_reg418_shift                                (24)
#define  LG_M_PLUS_M_plus_reg418_wpr_reg419_shift                                (16)
#define  LG_M_PLUS_M_plus_reg418_wpr_reg41a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg418_wpr_reg41b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg418_wpr_reg418_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg418_wpr_reg419_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg418_wpr_reg41a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg418_wpr_reg41b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg418_wpr_reg418(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg418_wpr_reg419(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg418_wpr_reg41a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg418_wpr_reg41b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg418_get_wpr_reg418(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg418_get_wpr_reg419(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg418_get_wpr_reg41a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg418_get_wpr_reg41b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg41c                                                0x1802881C
#define  LG_M_PLUS_M_plus_reg41c_reg_addr                                        "0xB802881C"
#define  LG_M_PLUS_M_plus_reg41c_reg                                             0xB802881C
#define  LG_M_PLUS_M_plus_reg41c_inst_addr                                       "0x0114"
#define  set_LG_M_PLUS_M_plus_reg41c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg41c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg41c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg41c_reg))
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg41c_wpr_reg41f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg41c_get_wpr_reg41c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg41c_get_wpr_reg41d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg41c_get_wpr_reg41e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg41c_get_wpr_reg41f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg420                                                0x18028820
#define  LG_M_PLUS_M_plus_reg420_reg_addr                                        "0xB8028820"
#define  LG_M_PLUS_M_plus_reg420_reg                                             0xB8028820
#define  LG_M_PLUS_M_plus_reg420_inst_addr                                       "0x0115"
#define  set_LG_M_PLUS_M_plus_reg420_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg420_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg420_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg420_reg))
#define  LG_M_PLUS_M_plus_reg420_wpr_reg420_shift                                (24)
#define  LG_M_PLUS_M_plus_reg420_wpr_reg421_shift                                (16)
#define  LG_M_PLUS_M_plus_reg420_wpr_reg422_shift                                (8)
#define  LG_M_PLUS_M_plus_reg420_wpr_reg423_shift                                (0)
#define  LG_M_PLUS_M_plus_reg420_wpr_reg420_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg420_wpr_reg421_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg420_wpr_reg422_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg420_wpr_reg423_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg420_wpr_reg420(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg420_wpr_reg421(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg420_wpr_reg422(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg420_wpr_reg423(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg420_get_wpr_reg420(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg420_get_wpr_reg421(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg420_get_wpr_reg422(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg420_get_wpr_reg423(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg424                                                0x18028824
#define  LG_M_PLUS_M_plus_reg424_reg_addr                                        "0xB8028824"
#define  LG_M_PLUS_M_plus_reg424_reg                                             0xB8028824
#define  LG_M_PLUS_M_plus_reg424_inst_addr                                       "0x0116"
#define  set_LG_M_PLUS_M_plus_reg424_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg424_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg424_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg424_reg))
#define  LG_M_PLUS_M_plus_reg424_wpr_reg424_shift                                (24)
#define  LG_M_PLUS_M_plus_reg424_wpr_reg425_shift                                (16)
#define  LG_M_PLUS_M_plus_reg424_wpr_reg426_shift                                (8)
#define  LG_M_PLUS_M_plus_reg424_wpr_reg427_shift                                (0)
#define  LG_M_PLUS_M_plus_reg424_wpr_reg424_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg424_wpr_reg425_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg424_wpr_reg426_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg424_wpr_reg427_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg424_wpr_reg424(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg424_wpr_reg425(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg424_wpr_reg426(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg424_wpr_reg427(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg424_get_wpr_reg424(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg424_get_wpr_reg425(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg424_get_wpr_reg426(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg424_get_wpr_reg427(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg428                                                0x18028828
#define  LG_M_PLUS_M_plus_reg428_reg_addr                                        "0xB8028828"
#define  LG_M_PLUS_M_plus_reg428_reg                                             0xB8028828
#define  LG_M_PLUS_M_plus_reg428_inst_addr                                       "0x0117"
#define  set_LG_M_PLUS_M_plus_reg428_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg428_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg428_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg428_reg))
#define  LG_M_PLUS_M_plus_reg428_wpr_reg428_shift                                (24)
#define  LG_M_PLUS_M_plus_reg428_wpr_reg429_shift                                (16)
#define  LG_M_PLUS_M_plus_reg428_wpr_reg42a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg428_wpr_reg42b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg428_wpr_reg428_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg428_wpr_reg429_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg428_wpr_reg42a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg428_wpr_reg42b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg428_wpr_reg428(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg428_wpr_reg429(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg428_wpr_reg42a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg428_wpr_reg42b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg428_get_wpr_reg428(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg428_get_wpr_reg429(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg428_get_wpr_reg42a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg428_get_wpr_reg42b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg42c                                                0x1802882C
#define  LG_M_PLUS_M_plus_reg42c_reg_addr                                        "0xB802882C"
#define  LG_M_PLUS_M_plus_reg42c_reg                                             0xB802882C
#define  LG_M_PLUS_M_plus_reg42c_inst_addr                                       "0x0118"
#define  set_LG_M_PLUS_M_plus_reg42c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg42c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg42c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg42c_reg))
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg42c_wpr_reg42f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg42c_get_wpr_reg42c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg42c_get_wpr_reg42d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg42c_get_wpr_reg42e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg42c_get_wpr_reg42f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg430                                                0x18028830
#define  LG_M_PLUS_M_plus_reg430_reg_addr                                        "0xB8028830"
#define  LG_M_PLUS_M_plus_reg430_reg                                             0xB8028830
#define  LG_M_PLUS_M_plus_reg430_inst_addr                                       "0x0119"
#define  set_LG_M_PLUS_M_plus_reg430_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg430_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg430_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg430_reg))
#define  LG_M_PLUS_M_plus_reg430_wpr_reg430_shift                                (24)
#define  LG_M_PLUS_M_plus_reg430_wpr_reg431_shift                                (16)
#define  LG_M_PLUS_M_plus_reg430_wpr_reg432_shift                                (8)
#define  LG_M_PLUS_M_plus_reg430_wpr_reg433_shift                                (0)
#define  LG_M_PLUS_M_plus_reg430_wpr_reg430_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg430_wpr_reg431_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg430_wpr_reg432_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg430_wpr_reg433_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg430_wpr_reg430(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg430_wpr_reg431(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg430_wpr_reg432(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg430_wpr_reg433(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg430_get_wpr_reg430(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg430_get_wpr_reg431(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg430_get_wpr_reg432(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg430_get_wpr_reg433(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg434                                                0x18028834
#define  LG_M_PLUS_M_plus_reg434_reg_addr                                        "0xB8028834"
#define  LG_M_PLUS_M_plus_reg434_reg                                             0xB8028834
#define  LG_M_PLUS_M_plus_reg434_inst_addr                                       "0x011A"
#define  set_LG_M_PLUS_M_plus_reg434_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg434_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg434_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg434_reg))
#define  LG_M_PLUS_M_plus_reg434_wpr_reg434_shift                                (24)
#define  LG_M_PLUS_M_plus_reg434_wpr_reg435_shift                                (16)
#define  LG_M_PLUS_M_plus_reg434_wpr_reg436_shift                                (8)
#define  LG_M_PLUS_M_plus_reg434_wpr_reg437_shift                                (0)
#define  LG_M_PLUS_M_plus_reg434_wpr_reg434_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg434_wpr_reg435_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg434_wpr_reg436_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg434_wpr_reg437_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg434_wpr_reg434(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg434_wpr_reg435(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg434_wpr_reg436(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg434_wpr_reg437(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg434_get_wpr_reg434(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg434_get_wpr_reg435(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg434_get_wpr_reg436(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg434_get_wpr_reg437(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg438                                                0x18028838
#define  LG_M_PLUS_M_plus_reg438_reg_addr                                        "0xB8028838"
#define  LG_M_PLUS_M_plus_reg438_reg                                             0xB8028838
#define  LG_M_PLUS_M_plus_reg438_inst_addr                                       "0x011B"
#define  set_LG_M_PLUS_M_plus_reg438_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg438_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg438_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg438_reg))
#define  LG_M_PLUS_M_plus_reg438_wpr_reg438_shift                                (24)
#define  LG_M_PLUS_M_plus_reg438_wpr_reg439_shift                                (16)
#define  LG_M_PLUS_M_plus_reg438_wpr_reg43a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg438_wpr_reg43b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg438_wpr_reg438_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg438_wpr_reg439_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg438_wpr_reg43a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg438_wpr_reg43b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg438_wpr_reg438(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg438_wpr_reg439(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg438_wpr_reg43a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg438_wpr_reg43b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg438_get_wpr_reg438(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg438_get_wpr_reg439(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg438_get_wpr_reg43a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg438_get_wpr_reg43b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg43c                                                0x1802883C
#define  LG_M_PLUS_M_plus_reg43c_reg_addr                                        "0xB802883C"
#define  LG_M_PLUS_M_plus_reg43c_reg                                             0xB802883C
#define  LG_M_PLUS_M_plus_reg43c_inst_addr                                       "0x011C"
#define  set_LG_M_PLUS_M_plus_reg43c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg43c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg43c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg43c_reg))
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg43c_wpr_reg43f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg43c_get_wpr_reg43c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg43c_get_wpr_reg43d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg43c_get_wpr_reg43e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg43c_get_wpr_reg43f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg440                                                0x18028840
#define  LG_M_PLUS_M_plus_reg440_reg_addr                                        "0xB8028840"
#define  LG_M_PLUS_M_plus_reg440_reg                                             0xB8028840
#define  LG_M_PLUS_M_plus_reg440_inst_addr                                       "0x011D"
#define  set_LG_M_PLUS_M_plus_reg440_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg440_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg440_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg440_reg))
#define  LG_M_PLUS_M_plus_reg440_wpr_reg440_shift                                (24)
#define  LG_M_PLUS_M_plus_reg440_wpr_reg441_shift                                (16)
#define  LG_M_PLUS_M_plus_reg440_wpr_reg442_shift                                (8)
#define  LG_M_PLUS_M_plus_reg440_wpr_reg443_shift                                (0)
#define  LG_M_PLUS_M_plus_reg440_wpr_reg440_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg440_wpr_reg441_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg440_wpr_reg442_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg440_wpr_reg443_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg440_wpr_reg440(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg440_wpr_reg441(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg440_wpr_reg442(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg440_wpr_reg443(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg440_get_wpr_reg440(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg440_get_wpr_reg441(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg440_get_wpr_reg442(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg440_get_wpr_reg443(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg444                                                0x18028844
#define  LG_M_PLUS_M_plus_reg444_reg_addr                                        "0xB8028844"
#define  LG_M_PLUS_M_plus_reg444_reg                                             0xB8028844
#define  LG_M_PLUS_M_plus_reg444_inst_addr                                       "0x011E"
#define  set_LG_M_PLUS_M_plus_reg444_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg444_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg444_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg444_reg))
#define  LG_M_PLUS_M_plus_reg444_wpr_reg444_shift                                (24)
#define  LG_M_PLUS_M_plus_reg444_wpr_reg445_shift                                (16)
#define  LG_M_PLUS_M_plus_reg444_wpr_reg446_shift                                (8)
#define  LG_M_PLUS_M_plus_reg444_wpr_reg447_shift                                (0)
#define  LG_M_PLUS_M_plus_reg444_wpr_reg444_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg444_wpr_reg445_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg444_wpr_reg446_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg444_wpr_reg447_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg444_wpr_reg444(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg444_wpr_reg445(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg444_wpr_reg446(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg444_wpr_reg447(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg444_get_wpr_reg444(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg444_get_wpr_reg445(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg444_get_wpr_reg446(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg444_get_wpr_reg447(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg448                                                0x18028848
#define  LG_M_PLUS_M_plus_reg448_reg_addr                                        "0xB8028848"
#define  LG_M_PLUS_M_plus_reg448_reg                                             0xB8028848
#define  LG_M_PLUS_M_plus_reg448_inst_addr                                       "0x011F"
#define  set_LG_M_PLUS_M_plus_reg448_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg448_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg448_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg448_reg))
#define  LG_M_PLUS_M_plus_reg448_wpr_reg448_shift                                (24)
#define  LG_M_PLUS_M_plus_reg448_wpr_reg449_shift                                (16)
#define  LG_M_PLUS_M_plus_reg448_wpr_reg44a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg448_wpr_reg44b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg448_wpr_reg448_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg448_wpr_reg449_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg448_wpr_reg44a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg448_wpr_reg44b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg448_wpr_reg448(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg448_wpr_reg449(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg448_wpr_reg44a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg448_wpr_reg44b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg448_get_wpr_reg448(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg448_get_wpr_reg449(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg448_get_wpr_reg44a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg448_get_wpr_reg44b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg44c                                                0x1802884C
#define  LG_M_PLUS_M_plus_reg44c_reg_addr                                        "0xB802884C"
#define  LG_M_PLUS_M_plus_reg44c_reg                                             0xB802884C
#define  LG_M_PLUS_M_plus_reg44c_inst_addr                                       "0x0120"
#define  set_LG_M_PLUS_M_plus_reg44c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg44c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg44c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg44c_reg))
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg44c_wpr_reg44f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg44c_get_wpr_reg44c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg44c_get_wpr_reg44d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg44c_get_wpr_reg44e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg44c_get_wpr_reg44f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg450                                                0x18028850
#define  LG_M_PLUS_M_plus_reg450_reg_addr                                        "0xB8028850"
#define  LG_M_PLUS_M_plus_reg450_reg                                             0xB8028850
#define  LG_M_PLUS_M_plus_reg450_inst_addr                                       "0x0121"
#define  set_LG_M_PLUS_M_plus_reg450_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg450_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg450_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg450_reg))
#define  LG_M_PLUS_M_plus_reg450_wpr_reg450_shift                                (24)
#define  LG_M_PLUS_M_plus_reg450_wpr_reg451_shift                                (16)
#define  LG_M_PLUS_M_plus_reg450_wpr_reg452_shift                                (8)
#define  LG_M_PLUS_M_plus_reg450_wpr_reg453_shift                                (0)
#define  LG_M_PLUS_M_plus_reg450_wpr_reg450_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg450_wpr_reg451_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg450_wpr_reg452_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg450_wpr_reg453_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg450_wpr_reg450(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg450_wpr_reg451(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg450_wpr_reg452(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg450_wpr_reg453(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg450_get_wpr_reg450(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg450_get_wpr_reg451(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg450_get_wpr_reg452(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg450_get_wpr_reg453(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg454                                                0x18028854
#define  LG_M_PLUS_M_plus_reg454_reg_addr                                        "0xB8028854"
#define  LG_M_PLUS_M_plus_reg454_reg                                             0xB8028854
#define  LG_M_PLUS_M_plus_reg454_inst_addr                                       "0x0122"
#define  set_LG_M_PLUS_M_plus_reg454_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg454_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg454_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg454_reg))
#define  LG_M_PLUS_M_plus_reg454_wpr_reg454_shift                                (24)
#define  LG_M_PLUS_M_plus_reg454_wpr_reg455_shift                                (16)
#define  LG_M_PLUS_M_plus_reg454_wpr_reg456_shift                                (8)
#define  LG_M_PLUS_M_plus_reg454_wpr_reg457_shift                                (0)
#define  LG_M_PLUS_M_plus_reg454_wpr_reg454_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg454_wpr_reg455_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg454_wpr_reg456_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg454_wpr_reg457_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg454_wpr_reg454(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg454_wpr_reg455(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg454_wpr_reg456(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg454_wpr_reg457(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg454_get_wpr_reg454(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg454_get_wpr_reg455(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg454_get_wpr_reg456(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg454_get_wpr_reg457(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg458                                                0x18028858
#define  LG_M_PLUS_M_plus_reg458_reg_addr                                        "0xB8028858"
#define  LG_M_PLUS_M_plus_reg458_reg                                             0xB8028858
#define  LG_M_PLUS_M_plus_reg458_inst_addr                                       "0x0123"
#define  set_LG_M_PLUS_M_plus_reg458_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg458_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg458_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg458_reg))
#define  LG_M_PLUS_M_plus_reg458_wpr_reg458_shift                                (24)
#define  LG_M_PLUS_M_plus_reg458_wpr_reg459_shift                                (16)
#define  LG_M_PLUS_M_plus_reg458_wpr_reg45a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg458_wpr_reg45b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg458_wpr_reg458_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg458_wpr_reg459_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg458_wpr_reg45a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg458_wpr_reg45b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg458_wpr_reg458(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg458_wpr_reg459(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg458_wpr_reg45a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg458_wpr_reg45b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg458_get_wpr_reg458(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg458_get_wpr_reg459(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg458_get_wpr_reg45a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg458_get_wpr_reg45b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg45c                                                0x1802885C
#define  LG_M_PLUS_M_plus_reg45c_reg_addr                                        "0xB802885C"
#define  LG_M_PLUS_M_plus_reg45c_reg                                             0xB802885C
#define  LG_M_PLUS_M_plus_reg45c_inst_addr                                       "0x0124"
#define  set_LG_M_PLUS_M_plus_reg45c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg45c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg45c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg45c_reg))
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg45c_wpr_reg45f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg45c_get_wpr_reg45c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg45c_get_wpr_reg45d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg45c_get_wpr_reg45e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg45c_get_wpr_reg45f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg460                                                0x18028860
#define  LG_M_PLUS_M_plus_reg460_reg_addr                                        "0xB8028860"
#define  LG_M_PLUS_M_plus_reg460_reg                                             0xB8028860
#define  LG_M_PLUS_M_plus_reg460_inst_addr                                       "0x0125"
#define  set_LG_M_PLUS_M_plus_reg460_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg460_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg460_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg460_reg))
#define  LG_M_PLUS_M_plus_reg460_wpr_reg460_shift                                (24)
#define  LG_M_PLUS_M_plus_reg460_wpr_reg461_shift                                (16)
#define  LG_M_PLUS_M_plus_reg460_wpr_reg462_shift                                (8)
#define  LG_M_PLUS_M_plus_reg460_wpr_reg463_shift                                (0)
#define  LG_M_PLUS_M_plus_reg460_wpr_reg460_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg460_wpr_reg461_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg460_wpr_reg462_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg460_wpr_reg463_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg460_wpr_reg460(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg460_wpr_reg461(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg460_wpr_reg462(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg460_wpr_reg463(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg460_get_wpr_reg460(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg460_get_wpr_reg461(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg460_get_wpr_reg462(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg460_get_wpr_reg463(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg464                                                0x18028864
#define  LG_M_PLUS_M_plus_reg464_reg_addr                                        "0xB8028864"
#define  LG_M_PLUS_M_plus_reg464_reg                                             0xB8028864
#define  LG_M_PLUS_M_plus_reg464_inst_addr                                       "0x0126"
#define  set_LG_M_PLUS_M_plus_reg464_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg464_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg464_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg464_reg))
#define  LG_M_PLUS_M_plus_reg464_wpr_reg464_shift                                (24)
#define  LG_M_PLUS_M_plus_reg464_wpr_reg465_shift                                (16)
#define  LG_M_PLUS_M_plus_reg464_wpr_reg466_shift                                (8)
#define  LG_M_PLUS_M_plus_reg464_wpr_reg467_shift                                (0)
#define  LG_M_PLUS_M_plus_reg464_wpr_reg464_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg464_wpr_reg465_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg464_wpr_reg466_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg464_wpr_reg467_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg464_wpr_reg464(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg464_wpr_reg465(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg464_wpr_reg466(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg464_wpr_reg467(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg464_get_wpr_reg464(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg464_get_wpr_reg465(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg464_get_wpr_reg466(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg464_get_wpr_reg467(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg468                                                0x18028868
#define  LG_M_PLUS_M_plus_reg468_reg_addr                                        "0xB8028868"
#define  LG_M_PLUS_M_plus_reg468_reg                                             0xB8028868
#define  LG_M_PLUS_M_plus_reg468_inst_addr                                       "0x0127"
#define  set_LG_M_PLUS_M_plus_reg468_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg468_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg468_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg468_reg))
#define  LG_M_PLUS_M_plus_reg468_wpr_reg468_shift                                (24)
#define  LG_M_PLUS_M_plus_reg468_wpr_reg469_shift                                (16)
#define  LG_M_PLUS_M_plus_reg468_wpr_reg46a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg468_wpr_reg46b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg468_wpr_reg468_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg468_wpr_reg469_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg468_wpr_reg46a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg468_wpr_reg46b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg468_wpr_reg468(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg468_wpr_reg469(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg468_wpr_reg46a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg468_wpr_reg46b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg468_get_wpr_reg468(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg468_get_wpr_reg469(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg468_get_wpr_reg46a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg468_get_wpr_reg46b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg46c                                                0x1802886C
#define  LG_M_PLUS_M_plus_reg46c_reg_addr                                        "0xB802886C"
#define  LG_M_PLUS_M_plus_reg46c_reg                                             0xB802886C
#define  LG_M_PLUS_M_plus_reg46c_inst_addr                                       "0x0128"
#define  set_LG_M_PLUS_M_plus_reg46c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg46c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg46c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg46c_reg))
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg46c_wpr_reg46f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg46c_get_wpr_reg46c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg46c_get_wpr_reg46d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg46c_get_wpr_reg46e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg46c_get_wpr_reg46f(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg470                                                0x18028870
#define  LG_M_PLUS_M_plus_reg470_reg_addr                                        "0xB8028870"
#define  LG_M_PLUS_M_plus_reg470_reg                                             0xB8028870
#define  LG_M_PLUS_M_plus_reg470_inst_addr                                       "0x0129"
#define  set_LG_M_PLUS_M_plus_reg470_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg470_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg470_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg470_reg))
#define  LG_M_PLUS_M_plus_reg470_wpr_reg470_shift                                (24)
#define  LG_M_PLUS_M_plus_reg470_wpr_reg471_shift                                (16)
#define  LG_M_PLUS_M_plus_reg470_wpr_reg472_shift                                (8)
#define  LG_M_PLUS_M_plus_reg470_wpr_reg473_shift                                (0)
#define  LG_M_PLUS_M_plus_reg470_wpr_reg470_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg470_wpr_reg471_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg470_wpr_reg472_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg470_wpr_reg473_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg470_wpr_reg470(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg470_wpr_reg471(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg470_wpr_reg472(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg470_wpr_reg473(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg470_get_wpr_reg470(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg470_get_wpr_reg471(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg470_get_wpr_reg472(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg470_get_wpr_reg473(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg474                                                0x18028874
#define  LG_M_PLUS_M_plus_reg474_reg_addr                                        "0xB8028874"
#define  LG_M_PLUS_M_plus_reg474_reg                                             0xB8028874
#define  LG_M_PLUS_M_plus_reg474_inst_addr                                       "0x012A"
#define  set_LG_M_PLUS_M_plus_reg474_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg474_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg474_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg474_reg))
#define  LG_M_PLUS_M_plus_reg474_wpr_reg474_shift                                (24)
#define  LG_M_PLUS_M_plus_reg474_wpr_reg475_shift                                (16)
#define  LG_M_PLUS_M_plus_reg474_wpr_reg476_shift                                (8)
#define  LG_M_PLUS_M_plus_reg474_wpr_reg477_shift                                (0)
#define  LG_M_PLUS_M_plus_reg474_wpr_reg474_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg474_wpr_reg475_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg474_wpr_reg476_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg474_wpr_reg477_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg474_wpr_reg474(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg474_wpr_reg475(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg474_wpr_reg476(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg474_wpr_reg477(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg474_get_wpr_reg474(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg474_get_wpr_reg475(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg474_get_wpr_reg476(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg474_get_wpr_reg477(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg478                                                0x18028878
#define  LG_M_PLUS_M_plus_reg478_reg_addr                                        "0xB8028878"
#define  LG_M_PLUS_M_plus_reg478_reg                                             0xB8028878
#define  LG_M_PLUS_M_plus_reg478_inst_addr                                       "0x012B"
#define  set_LG_M_PLUS_M_plus_reg478_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg478_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg478_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg478_reg))
#define  LG_M_PLUS_M_plus_reg478_wpr_reg478_shift                                (24)
#define  LG_M_PLUS_M_plus_reg478_wpr_reg479_shift                                (16)
#define  LG_M_PLUS_M_plus_reg478_wpr_reg47a_shift                                (8)
#define  LG_M_PLUS_M_plus_reg478_wpr_reg47b_shift                                (0)
#define  LG_M_PLUS_M_plus_reg478_wpr_reg478_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg478_wpr_reg479_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg478_wpr_reg47a_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg478_wpr_reg47b_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg478_wpr_reg478(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg478_wpr_reg479(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg478_wpr_reg47a(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg478_wpr_reg47b(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg478_get_wpr_reg478(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg478_get_wpr_reg479(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg478_get_wpr_reg47a(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg478_get_wpr_reg47b(data)                            (0x000000FF&(data))

#define  LG_M_PLUS_M_plus_reg47c                                                0x1802887C
#define  LG_M_PLUS_M_plus_reg47c_reg_addr                                        "0xB802887C"
#define  LG_M_PLUS_M_plus_reg47c_reg                                             0xB802887C
#define  LG_M_PLUS_M_plus_reg47c_inst_addr                                       "0x012C"
#define  set_LG_M_PLUS_M_plus_reg47c_reg(data)                                   (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg47c_reg)=data)
#define  get_LG_M_PLUS_M_plus_reg47c_reg                                         (*((volatile unsigned int*)LG_M_PLUS_M_plus_reg47c_reg))
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47c_shift                                (24)
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47d_shift                                (16)
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47e_shift                                (8)
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47f_shift                                (0)
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47c_mask                                 (0xFF000000)
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47d_mask                                 (0x00FF0000)
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47e_mask                                 (0x0000FF00)
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47f_mask                                 (0x000000FF)
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47c(data)                                (0xFF000000&((data)<<24))
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47d(data)                                (0x00FF0000&((data)<<16))
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47e(data)                                (0x0000FF00&((data)<<8))
#define  LG_M_PLUS_M_plus_reg47c_wpr_reg47f(data)                                (0x000000FF&(data))
#define  LG_M_PLUS_M_plus_reg47c_get_wpr_reg47c(data)                            ((0xFF000000&(data))>>24)
#define  LG_M_PLUS_M_plus_reg47c_get_wpr_reg47d(data)                            ((0x00FF0000&(data))>>16)
#define  LG_M_PLUS_M_plus_reg47c_get_wpr_reg47e(data)                            ((0x0000FF00&(data))>>8)
#define  LG_M_PLUS_M_plus_reg47c_get_wpr_reg47f(data)                            (0x000000FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======LG_M_PLUS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_on:1;
        RBus_UInt32  opc_on:1;
        RBus_UInt32  mce_on:1;
        RBus_UInt32  bypass_on:1;
        RBus_UInt32  dummy18028f00_27:1;
        RBus_UInt32  mode_sel:3;
        RBus_UInt32  test_mode:1;
        RBus_UInt32  dummy18028f00_22_0:23;
    };
}lg_m_plus_m_plus_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dimming_duty_force_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  dimming_duty_force_value:13;
        RBus_UInt32  res2:2;
        RBus_UInt32  dimming_duty_gain:6;
        RBus_UInt32  dimming_duty_shift:8;
    };
}lg_m_plus_m_plus_dimming_duty_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irq_en:1;
        RBus_UInt32  dimming_duty_update:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  frame_cnt:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  dimming_duty:13;
    };
}lg_m_plus_m_plus_dimming_duty_read_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rme_7:1;
        RBus_UInt32  rme_6:1;
        RBus_UInt32  rme_5:1;
        RBus_UInt32  rme_4:1;
        RBus_UInt32  rme_3:1;
        RBus_UInt32  rme_2:1;
        RBus_UInt32  rme_1:1;
        RBus_UInt32  rme_0:1;
        RBus_UInt32  drf_bist_fail_7:1;
        RBus_UInt32  drf_bist_fail_6:1;
        RBus_UInt32  drf_bist_fail_5:1;
        RBus_UInt32  drf_bist_fail_4:1;
        RBus_UInt32  drf_bist_fail_3:1;
        RBus_UInt32  drf_bist_fail_2:1;
        RBus_UInt32  drf_bist_fail_1:1;
        RBus_UInt32  drf_bist_fail_0:1;
        RBus_UInt32  bist_fail_7:1;
        RBus_UInt32  bist_fail_6:1;
        RBus_UInt32  bist_fail_5:1;
        RBus_UInt32  bist_fail_4:1;
        RBus_UInt32  bist_fail_3:1;
        RBus_UInt32  bist_fail_2:1;
        RBus_UInt32  bist_fail_1:1;
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  testrwm_7:1;
        RBus_UInt32  testrwm_6:1;
        RBus_UInt32  testrwm_5:1;
        RBus_UInt32  testrwm_4:1;
        RBus_UInt32  testrwm_3:1;
        RBus_UInt32  testrwm_2:1;
        RBus_UInt32  testrwm_1:1;
        RBus_UInt32  testrwm_0:1;
    };
}lg_m_plus_m_plus_tp_bist0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_7:4;
        RBus_UInt32  rm_6:4;
        RBus_UInt32  rm_5:4;
        RBus_UInt32  rm_4:4;
        RBus_UInt32  rm_3:4;
        RBus_UInt32  rm_2:4;
        RBus_UInt32  rm_1:4;
        RBus_UInt32  rm_0:4;
    };
}lg_m_plus_m_plus_tp_bist1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rme_15:1;
        RBus_UInt32  rme_14:1;
        RBus_UInt32  rme_13:1;
        RBus_UInt32  rme_12:1;
        RBus_UInt32  rme_11:1;
        RBus_UInt32  rme_10:1;
        RBus_UInt32  rme_9:1;
        RBus_UInt32  rme_8:1;
        RBus_UInt32  drf_bist_fail_15:1;
        RBus_UInt32  drf_bist_fail_14:1;
        RBus_UInt32  drf_bist_fail_13:1;
        RBus_UInt32  drf_bist_fail_12:1;
        RBus_UInt32  drf_bist_fail_11:1;
        RBus_UInt32  drf_bist_fail_10:1;
        RBus_UInt32  drf_bist_fail_9:1;
        RBus_UInt32  drf_bist_fail_8:1;
        RBus_UInt32  bist_fail_15:1;
        RBus_UInt32  bist_fail_14:1;
        RBus_UInt32  bist_fail_13:1;
        RBus_UInt32  bist_fail_12:1;
        RBus_UInt32  bist_fail_11:1;
        RBus_UInt32  bist_fail_10:1;
        RBus_UInt32  bist_fail_9:1;
        RBus_UInt32  bist_fail_8:1;
        RBus_UInt32  testrwm_15:1;
        RBus_UInt32  testrwm_14:1;
        RBus_UInt32  testrwm_13:1;
        RBus_UInt32  testrwm_12:1;
        RBus_UInt32  testrwm_11:1;
        RBus_UInt32  testrwm_10:1;
        RBus_UInt32  testrwm_9:1;
        RBus_UInt32  testrwm_8:1;
    };
}lg_m_plus_m_plus_tp_bist2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_15:4;
        RBus_UInt32  rm_14:4;
        RBus_UInt32  rm_13:4;
        RBus_UInt32  rm_12:4;
        RBus_UInt32  rm_11:4;
        RBus_UInt32  rm_10:4;
        RBus_UInt32  rm_9:4;
        RBus_UInt32  rm_8:4;
    };
}lg_m_plus_m_plus_tp_bist3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  rme_20:1;
        RBus_UInt32  rme_19:1;
        RBus_UInt32  rme_18:1;
        RBus_UInt32  rme_17:1;
        RBus_UInt32  rme_16:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  drf_bist_fail_20:1;
        RBus_UInt32  drf_bist_fail_19:1;
        RBus_UInt32  drf_bist_fail_18:1;
        RBus_UInt32  drf_bist_fail_17:1;
        RBus_UInt32  drf_bist_fail_16:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  bist_fail_20:1;
        RBus_UInt32  bist_fail_19:1;
        RBus_UInt32  bist_fail_18:1;
        RBus_UInt32  bist_fail_17:1;
        RBus_UInt32  bist_fail_16:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  testrwm_20:1;
        RBus_UInt32  testrwm_19:1;
        RBus_UInt32  testrwm_18:1;
        RBus_UInt32  testrwm_17:1;
        RBus_UInt32  testrwm_16:1;
    };
}lg_m_plus_m_plus_tp_bist4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  rm_20:4;
        RBus_UInt32  rm_19:4;
        RBus_UInt32  rm_18:4;
        RBus_UInt32  rm_17:4;
        RBus_UInt32  rm_16:4;
    };
}lg_m_plus_m_plus_tp_bist5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  test1_20:1;
        RBus_UInt32  test1_19:1;
        RBus_UInt32  test1_18:1;
        RBus_UInt32  test1_17:1;
        RBus_UInt32  test1_16:1;
        RBus_UInt32  test1_15:1;
        RBus_UInt32  test1_14:1;
        RBus_UInt32  test1_13:1;
        RBus_UInt32  test1_12:1;
        RBus_UInt32  test1_11:1;
        RBus_UInt32  test1_10:1;
        RBus_UInt32  test1_9:1;
        RBus_UInt32  test1_8:1;
        RBus_UInt32  test1_7:1;
        RBus_UInt32  test1_6:1;
        RBus_UInt32  test1_5:1;
        RBus_UInt32  test1_4:1;
        RBus_UInt32  test1_3:1;
        RBus_UInt32  test1_2:1;
        RBus_UInt32  test1_1:1;
        RBus_UInt32  test1_0:1;
    };
}lg_m_plus_m_plus_tp_bist6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  rme_r2:1;
        RBus_UInt32  rme_g2:1;
        RBus_UInt32  rme_b2:1;
        RBus_UInt32  rme_r1:1;
        RBus_UInt32  rme_g1:1;
        RBus_UInt32  rme_b1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  rm_r2:4;
        RBus_UInt32  rm_g2:4;
        RBus_UInt32  rm_b2:4;
        RBus_UInt32  rm_r1:4;
        RBus_UInt32  rm_g1:4;
        RBus_UInt32  rm_b1:4;
    };
}lg_m_plus_m_plus_rom_bist0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  rme_2_r2:1;
        RBus_UInt32  rme_2_g2:1;
        RBus_UInt32  rme_2_b2:1;
        RBus_UInt32  rme_2_r1:1;
        RBus_UInt32  rme_2_g1:1;
        RBus_UInt32  rme_2_b1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  rm_2_r2:4;
        RBus_UInt32  rm_2_g2:4;
        RBus_UInt32  rm_2_b2:4;
        RBus_UInt32  rm_2_r1:4;
        RBus_UInt32  rm_2_g1:4;
        RBus_UInt32  rm_2_b1:4;
    };
}lg_m_plus_m_plus_rom_bist1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  test2_11:1;
        RBus_UInt32  test2_10:1;
        RBus_UInt32  test2_9:1;
        RBus_UInt32  test2_8:1;
        RBus_UInt32  test2_7:1;
        RBus_UInt32  test2_6:1;
        RBus_UInt32  test2_5:1;
        RBus_UInt32  test2_4:1;
        RBus_UInt32  test2_3:1;
        RBus_UInt32  test2_2:1;
        RBus_UInt32  test2_1:1;
        RBus_UInt32  test2_0:1;
    };
}lg_m_plus_m_plus_rom_bist2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg00:8;
        RBus_UInt32  wpr_reg01:8;
        RBus_UInt32  wpr_reg02:8;
        RBus_UInt32  wpr_reg03:8;
    };
}lg_m_plus_m_plus_reg000_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg04:8;
        RBus_UInt32  wpr_reg05:8;
        RBus_UInt32  wpr_reg06:8;
        RBus_UInt32  wpr_reg07:8;
    };
}lg_m_plus_m_plus_reg004_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg08:8;
        RBus_UInt32  wpr_reg09:8;
        RBus_UInt32  wpr_reg0a:8;
        RBus_UInt32  wpr_reg0b:8;
    };
}lg_m_plus_m_plus_reg008_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg0c:8;
        RBus_UInt32  wpr_reg0d:8;
        RBus_UInt32  wpr_reg0e:8;
        RBus_UInt32  wpr_reg0f:8;
    };
}lg_m_plus_m_plus_reg00c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg10:8;
        RBus_UInt32  wpr_reg11:8;
        RBus_UInt32  wpr_reg12:8;
        RBus_UInt32  wpr_reg13:8;
    };
}lg_m_plus_m_plus_reg010_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg14:8;
        RBus_UInt32  wpr_reg15:8;
        RBus_UInt32  wpr_reg16:8;
        RBus_UInt32  wpr_reg17:8;
    };
}lg_m_plus_m_plus_reg014_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg18:8;
        RBus_UInt32  wpr_reg19:8;
        RBus_UInt32  wpr_reg1a:8;
        RBus_UInt32  wpr_reg1b:8;
    };
}lg_m_plus_m_plus_reg018_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1c:8;
        RBus_UInt32  wpr_reg1d:8;
        RBus_UInt32  wpr_reg1e:8;
        RBus_UInt32  wpr_reg1f:8;
    };
}lg_m_plus_m_plus_reg01c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg20:8;
        RBus_UInt32  wpr_reg21:8;
        RBus_UInt32  wpr_reg22:8;
        RBus_UInt32  wpr_reg23:8;
    };
}lg_m_plus_m_plus_reg020_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg24:8;
        RBus_UInt32  wpr_reg25:8;
        RBus_UInt32  wpr_reg26:8;
        RBus_UInt32  wpr_reg27:8;
    };
}lg_m_plus_m_plus_reg024_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg28:8;
        RBus_UInt32  wpr_reg29:8;
        RBus_UInt32  wpr_reg2a:8;
        RBus_UInt32  wpr_reg2b:8;
    };
}lg_m_plus_m_plus_reg028_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2c:8;
        RBus_UInt32  wpr_reg2d:8;
        RBus_UInt32  wpr_reg2e:8;
        RBus_UInt32  wpr_reg2f:8;
    };
}lg_m_plus_m_plus_reg02c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg30:8;
        RBus_UInt32  wpr_reg31:8;
        RBus_UInt32  wpr_reg32:8;
        RBus_UInt32  wpr_reg33:8;
    };
}lg_m_plus_m_plus_reg030_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg34:8;
        RBus_UInt32  wpr_reg35:8;
        RBus_UInt32  wpr_reg36:8;
        RBus_UInt32  wpr_reg37:8;
    };
}lg_m_plus_m_plus_reg034_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg38:8;
        RBus_UInt32  wpr_reg39:8;
        RBus_UInt32  wpr_reg3a:8;
        RBus_UInt32  wpr_reg3b:8;
    };
}lg_m_plus_m_plus_reg038_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3c:8;
        RBus_UInt32  wpr_reg3d:8;
        RBus_UInt32  wpr_reg3e:8;
        RBus_UInt32  wpr_reg3f:8;
    };
}lg_m_plus_m_plus_reg03c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg40:8;
        RBus_UInt32  wpr_reg41:8;
        RBus_UInt32  wpr_reg42:8;
        RBus_UInt32  wpr_reg43:8;
    };
}lg_m_plus_m_plus_reg040_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg44:8;
        RBus_UInt32  wpr_reg45:8;
        RBus_UInt32  wpr_reg46:8;
        RBus_UInt32  wpr_reg47:8;
    };
}lg_m_plus_m_plus_reg044_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg48:8;
        RBus_UInt32  wpr_reg49:8;
        RBus_UInt32  wpr_reg4a:8;
        RBus_UInt32  wpr_reg4b:8;
    };
}lg_m_plus_m_plus_reg048_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg4c:8;
        RBus_UInt32  wpr_reg4d:8;
        RBus_UInt32  wpr_reg4e:8;
        RBus_UInt32  wpr_reg4f:8;
    };
}lg_m_plus_m_plus_reg04c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg50:8;
        RBus_UInt32  wpr_reg51:8;
        RBus_UInt32  wpr_reg52:8;
        RBus_UInt32  wpr_reg53:8;
    };
}lg_m_plus_m_plus_reg050_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg54:8;
        RBus_UInt32  wpr_reg55:8;
        RBus_UInt32  wpr_reg56:8;
        RBus_UInt32  wpr_reg57:8;
    };
}lg_m_plus_m_plus_reg054_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg58:8;
        RBus_UInt32  wpr_reg59:8;
        RBus_UInt32  wpr_reg5a:8;
        RBus_UInt32  wpr_reg5b:8;
    };
}lg_m_plus_m_plus_reg058_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg5c:8;
        RBus_UInt32  wpr_reg5d:8;
        RBus_UInt32  wpr_reg5e:8;
        RBus_UInt32  wpr_reg5f:8;
    };
}lg_m_plus_m_plus_reg05c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg60:8;
        RBus_UInt32  wpr_reg61:8;
        RBus_UInt32  wpr_reg62:8;
        RBus_UInt32  wpr_reg63:8;
    };
}lg_m_plus_m_plus_reg060_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg64:8;
        RBus_UInt32  wpr_reg65:8;
        RBus_UInt32  wpr_reg66:8;
        RBus_UInt32  wpr_reg67:8;
    };
}lg_m_plus_m_plus_reg064_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg68:8;
        RBus_UInt32  wpr_reg69:8;
        RBus_UInt32  wpr_reg6a:8;
        RBus_UInt32  wpr_reg6b:8;
    };
}lg_m_plus_m_plus_reg068_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg6c:8;
        RBus_UInt32  wpr_reg6d:8;
        RBus_UInt32  wpr_reg6e:8;
        RBus_UInt32  wpr_reg6f:8;
    };
}lg_m_plus_m_plus_reg06c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg70:8;
        RBus_UInt32  wpr_reg71:8;
        RBus_UInt32  wpr_reg72:8;
        RBus_UInt32  wpr_reg73:8;
    };
}lg_m_plus_m_plus_reg070_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg74:8;
        RBus_UInt32  wpr_reg75:8;
        RBus_UInt32  wpr_reg76:8;
        RBus_UInt32  wpr_reg77:8;
    };
}lg_m_plus_m_plus_reg074_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg78:8;
        RBus_UInt32  wpr_reg79:8;
        RBus_UInt32  wpr_reg7a:8;
        RBus_UInt32  wpr_reg7b:8;
    };
}lg_m_plus_m_plus_reg078_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg7c:8;
        RBus_UInt32  wpr_reg7d:8;
        RBus_UInt32  wpr_reg7e:8;
        RBus_UInt32  wpr_reg7f:8;
    };
}lg_m_plus_m_plus_reg07c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg80:8;
        RBus_UInt32  wpr_reg81:8;
        RBus_UInt32  wpr_reg82:8;
        RBus_UInt32  wpr_reg83:8;
    };
}lg_m_plus_m_plus_reg080_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg84:8;
        RBus_UInt32  wpr_reg85:8;
        RBus_UInt32  wpr_reg86:8;
        RBus_UInt32  wpr_reg87:8;
    };
}lg_m_plus_m_plus_reg084_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg88:8;
        RBus_UInt32  wpr_reg89:8;
        RBus_UInt32  wpr_reg8a:8;
        RBus_UInt32  wpr_reg8b:8;
    };
}lg_m_plus_m_plus_reg088_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg8c:8;
        RBus_UInt32  wpr_reg8d:8;
        RBus_UInt32  wpr_reg8e:8;
        RBus_UInt32  wpr_reg8f:8;
    };
}lg_m_plus_m_plus_reg08c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg90:8;
        RBus_UInt32  wpr_reg91:8;
        RBus_UInt32  wpr_reg92:8;
        RBus_UInt32  wpr_reg93:8;
    };
}lg_m_plus_m_plus_reg090_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg94:8;
        RBus_UInt32  wpr_reg95:8;
        RBus_UInt32  wpr_reg96:8;
        RBus_UInt32  wpr_reg97:8;
    };
}lg_m_plus_m_plus_reg094_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg98:8;
        RBus_UInt32  wpr_reg99:8;
        RBus_UInt32  wpr_reg9a:8;
        RBus_UInt32  wpr_reg9b:8;
    };
}lg_m_plus_m_plus_reg098_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg9c:8;
        RBus_UInt32  wpr_reg9d:8;
        RBus_UInt32  wpr_reg9e:8;
        RBus_UInt32  wpr_reg9f:8;
    };
}lg_m_plus_m_plus_reg09c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_rega0:8;
        RBus_UInt32  wpr_rega1:8;
        RBus_UInt32  wpr_rega2:8;
        RBus_UInt32  wpr_rega3:8;
    };
}lg_m_plus_m_plus_reg0a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_rega4:8;
        RBus_UInt32  wpr_rega5:8;
        RBus_UInt32  wpr_rega6:8;
        RBus_UInt32  wpr_rega7:8;
    };
}lg_m_plus_m_plus_reg0a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_rega8:8;
        RBus_UInt32  wpr_rega9:8;
        RBus_UInt32  wpr_regaa:8;
        RBus_UInt32  wpr_regab:8;
    };
}lg_m_plus_m_plus_reg0a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regac:8;
        RBus_UInt32  wpr_regad:8;
        RBus_UInt32  wpr_regae:8;
        RBus_UInt32  wpr_regaf:8;
    };
}lg_m_plus_m_plus_reg0ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regb0:8;
        RBus_UInt32  wpr_regb1:8;
        RBus_UInt32  wpr_regb2:8;
        RBus_UInt32  wpr_regb3:8;
    };
}lg_m_plus_m_plus_reg0b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regb4:8;
        RBus_UInt32  wpr_regb5:8;
        RBus_UInt32  wpr_regb6:8;
        RBus_UInt32  wpr_regb7:8;
    };
}lg_m_plus_m_plus_reg0b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regb8:8;
        RBus_UInt32  wpr_regb9:8;
        RBus_UInt32  wpr_regba:8;
        RBus_UInt32  wpr_regbb:8;
    };
}lg_m_plus_m_plus_reg0b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regbc:8;
        RBus_UInt32  wpr_regbd:8;
        RBus_UInt32  wpr_regbe:8;
        RBus_UInt32  wpr_regbf:8;
    };
}lg_m_plus_m_plus_reg0bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regc0:8;
        RBus_UInt32  wpr_regc1:8;
        RBus_UInt32  wpr_regc2:8;
        RBus_UInt32  wpr_regc3:8;
    };
}lg_m_plus_m_plus_reg0c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regc4:8;
        RBus_UInt32  wpr_regc5:8;
        RBus_UInt32  wpr_regc6:8;
        RBus_UInt32  wpr_regc7:8;
    };
}lg_m_plus_m_plus_reg0c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regc8:8;
        RBus_UInt32  wpr_regc9:8;
        RBus_UInt32  wpr_regca:8;
        RBus_UInt32  wpr_regcb:8;
    };
}lg_m_plus_m_plus_reg0c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regcc:8;
        RBus_UInt32  wpr_regcd:8;
        RBus_UInt32  wpr_regce:8;
        RBus_UInt32  wpr_regcf:8;
    };
}lg_m_plus_m_plus_reg0cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regd0:8;
        RBus_UInt32  wpr_regd1:8;
        RBus_UInt32  wpr_regd2:8;
        RBus_UInt32  wpr_regd3:8;
    };
}lg_m_plus_m_plus_reg0d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regd4:8;
        RBus_UInt32  wpr_regd5:8;
        RBus_UInt32  wpr_regd6:8;
        RBus_UInt32  wpr_regd7:8;
    };
}lg_m_plus_m_plus_reg0d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regd8:8;
        RBus_UInt32  wpr_regd9:8;
        RBus_UInt32  wpr_regda:8;
        RBus_UInt32  wpr_regdb:8;
    };
}lg_m_plus_m_plus_reg0d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regdc:8;
        RBus_UInt32  wpr_regdd:8;
        RBus_UInt32  wpr_regde:8;
        RBus_UInt32  wpr_regdf:8;
    };
}lg_m_plus_m_plus_reg0dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_rege0:8;
        RBus_UInt32  wpr_rege1:8;
        RBus_UInt32  wpr_rege2:8;
        RBus_UInt32  wpr_rege3:8;
    };
}lg_m_plus_m_plus_reg0e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_rege4:8;
        RBus_UInt32  wpr_rege5:8;
        RBus_UInt32  wpr_rege6:8;
        RBus_UInt32  wpr_rege7:8;
    };
}lg_m_plus_m_plus_reg0e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_rege8:8;
        RBus_UInt32  wpr_rege9:8;
        RBus_UInt32  wpr_regea:8;
        RBus_UInt32  wpr_regeb:8;
    };
}lg_m_plus_m_plus_reg0e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regec:8;
        RBus_UInt32  wpr_reged:8;
        RBus_UInt32  wpr_regee:8;
        RBus_UInt32  wpr_regef:8;
    };
}lg_m_plus_m_plus_reg0ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regf0:8;
        RBus_UInt32  wpr_regf1:8;
        RBus_UInt32  wpr_regf2:8;
        RBus_UInt32  wpr_regf3:8;
    };
}lg_m_plus_m_plus_reg0f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regf4:8;
        RBus_UInt32  wpr_regf5:8;
        RBus_UInt32  wpr_regf6:8;
        RBus_UInt32  wpr_regf7:8;
    };
}lg_m_plus_m_plus_reg0f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regf8:8;
        RBus_UInt32  wpr_regf9:8;
        RBus_UInt32  wpr_regfa:8;
        RBus_UInt32  wpr_regfb:8;
    };
}lg_m_plus_m_plus_reg0f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regfc:8;
        RBus_UInt32  wpr_regfd:8;
        RBus_UInt32  wpr_regfe:8;
        RBus_UInt32  wpr_regff:8;
    };
}lg_m_plus_m_plus_reg0fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg100:8;
        RBus_UInt32  wpr_reg101:8;
        RBus_UInt32  wpr_reg102:8;
        RBus_UInt32  wpr_reg103:8;
    };
}lg_m_plus_m_plus_reg100_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg104:8;
        RBus_UInt32  wpr_reg105:8;
        RBus_UInt32  wpr_reg106:8;
        RBus_UInt32  wpr_reg107:8;
    };
}lg_m_plus_m_plus_reg104_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg108:8;
        RBus_UInt32  wpr_reg109:8;
        RBus_UInt32  wpr_reg10a:8;
        RBus_UInt32  wpr_reg10b:8;
    };
}lg_m_plus_m_plus_reg108_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg10c:8;
        RBus_UInt32  wpr_reg10d:8;
        RBus_UInt32  wpr_reg10e:8;
        RBus_UInt32  wpr_reg10f:8;
    };
}lg_m_plus_m_plus_reg10c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg110:8;
        RBus_UInt32  wpr_reg111:8;
        RBus_UInt32  wpr_reg112:8;
        RBus_UInt32  wpr_reg113:8;
    };
}lg_m_plus_m_plus_reg110_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg114:8;
        RBus_UInt32  wpr_reg115:8;
        RBus_UInt32  wpr_reg116:8;
        RBus_UInt32  wpr_reg117:8;
    };
}lg_m_plus_m_plus_reg114_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg118:8;
        RBus_UInt32  wpr_reg119:8;
        RBus_UInt32  wpr_reg11a:8;
        RBus_UInt32  wpr_reg11b:8;
    };
}lg_m_plus_m_plus_reg118_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg11c:8;
        RBus_UInt32  wpr_reg11d:8;
        RBus_UInt32  wpr_reg11e:8;
        RBus_UInt32  wpr_reg11f:8;
    };
}lg_m_plus_m_plus_reg11c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg120:8;
        RBus_UInt32  wpr_reg121:8;
        RBus_UInt32  wpr_reg122:8;
        RBus_UInt32  wpr_reg123:8;
    };
}lg_m_plus_m_plus_reg120_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg124:8;
        RBus_UInt32  wpr_reg125:8;
        RBus_UInt32  wpr_reg126:8;
        RBus_UInt32  wpr_reg127:8;
    };
}lg_m_plus_m_plus_reg124_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg128:8;
        RBus_UInt32  wpr_reg129:8;
        RBus_UInt32  wpr_reg12a:8;
        RBus_UInt32  wpr_reg12b:8;
    };
}lg_m_plus_m_plus_reg128_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg12c:8;
        RBus_UInt32  wpr_reg12d:8;
        RBus_UInt32  wpr_reg12e:8;
        RBus_UInt32  wpr_reg12f:8;
    };
}lg_m_plus_m_plus_reg12c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg130:8;
        RBus_UInt32  wpr_reg131:8;
        RBus_UInt32  wpr_reg132:8;
        RBus_UInt32  wpr_reg133:8;
    };
}lg_m_plus_m_plus_reg130_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg134:8;
        RBus_UInt32  wpr_reg135:8;
        RBus_UInt32  wpr_reg136:8;
        RBus_UInt32  wpr_reg137:8;
    };
}lg_m_plus_m_plus_reg134_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg138:8;
        RBus_UInt32  wpr_reg139:8;
        RBus_UInt32  wpr_reg13a:8;
        RBus_UInt32  wpr_reg13b:8;
    };
}lg_m_plus_m_plus_reg138_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg13c:8;
        RBus_UInt32  wpr_reg13d:8;
        RBus_UInt32  wpr_reg13e:8;
        RBus_UInt32  wpr_reg13f:8;
    };
}lg_m_plus_m_plus_reg13c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg140:8;
        RBus_UInt32  wpr_reg141:8;
        RBus_UInt32  wpr_reg142:8;
        RBus_UInt32  wpr_reg143:8;
    };
}lg_m_plus_m_plus_reg140_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg144:8;
        RBus_UInt32  wpr_reg145:8;
        RBus_UInt32  wpr_reg146:8;
        RBus_UInt32  wpr_reg147:8;
    };
}lg_m_plus_m_plus_reg144_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg148:8;
        RBus_UInt32  wpr_reg149:8;
        RBus_UInt32  wpr_reg14a:8;
        RBus_UInt32  wpr_reg14b:8;
    };
}lg_m_plus_m_plus_reg148_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg14c:8;
        RBus_UInt32  wpr_reg14d:8;
        RBus_UInt32  wpr_reg14e:8;
        RBus_UInt32  wpr_reg14f:8;
    };
}lg_m_plus_m_plus_reg14c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg150:8;
        RBus_UInt32  wpr_reg151:8;
        RBus_UInt32  wpr_reg152:8;
        RBus_UInt32  wpr_reg153:8;
    };
}lg_m_plus_m_plus_reg150_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg154:8;
        RBus_UInt32  wpr_reg155:8;
        RBus_UInt32  wpr_reg156:8;
        RBus_UInt32  wpr_reg157:8;
    };
}lg_m_plus_m_plus_reg154_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg158:8;
        RBus_UInt32  wpr_reg159:8;
        RBus_UInt32  wpr_reg15a:8;
        RBus_UInt32  wpr_reg15b:8;
    };
}lg_m_plus_m_plus_reg158_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg15c:8;
        RBus_UInt32  wpr_reg15d:8;
        RBus_UInt32  wpr_reg15e:8;
        RBus_UInt32  wpr_reg15f:8;
    };
}lg_m_plus_m_plus_reg15c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg160:8;
        RBus_UInt32  wpr_reg161:8;
        RBus_UInt32  wpr_reg162:8;
        RBus_UInt32  wpr_reg163:8;
    };
}lg_m_plus_m_plus_reg160_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg164:8;
        RBus_UInt32  wpr_reg165:8;
        RBus_UInt32  wpr_reg166:8;
        RBus_UInt32  wpr_reg167:8;
    };
}lg_m_plus_m_plus_reg164_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg168:8;
        RBus_UInt32  wpr_reg169:8;
        RBus_UInt32  wpr_reg16a:8;
        RBus_UInt32  wpr_reg16b:8;
    };
}lg_m_plus_m_plus_reg168_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg16c:8;
        RBus_UInt32  wpr_reg16d:8;
        RBus_UInt32  wpr_reg16e:8;
        RBus_UInt32  wpr_reg16f:8;
    };
}lg_m_plus_m_plus_reg16c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg170:8;
        RBus_UInt32  wpr_reg171:8;
        RBus_UInt32  wpr_reg172:8;
        RBus_UInt32  wpr_reg173:8;
    };
}lg_m_plus_m_plus_reg170_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg174:8;
        RBus_UInt32  wpr_reg175:8;
        RBus_UInt32  wpr_reg176:8;
        RBus_UInt32  wpr_reg177:8;
    };
}lg_m_plus_m_plus_reg174_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg178:8;
        RBus_UInt32  wpr_reg179:8;
        RBus_UInt32  wpr_reg17a:8;
        RBus_UInt32  wpr_reg17b:8;
    };
}lg_m_plus_m_plus_reg178_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg17c:8;
        RBus_UInt32  wpr_reg17d:8;
        RBus_UInt32  wpr_reg17e:8;
        RBus_UInt32  wpr_reg17f:8;
    };
}lg_m_plus_m_plus_reg17c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg180:8;
        RBus_UInt32  wpr_reg181:8;
        RBus_UInt32  wpr_reg182:8;
        RBus_UInt32  wpr_reg183:8;
    };
}lg_m_plus_m_plus_reg180_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg184:8;
        RBus_UInt32  wpr_reg185:8;
        RBus_UInt32  wpr_reg186:8;
        RBus_UInt32  wpr_reg187:8;
    };
}lg_m_plus_m_plus_reg184_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg188:8;
        RBus_UInt32  wpr_reg189:8;
        RBus_UInt32  wpr_reg18a:8;
        RBus_UInt32  wpr_reg18b:8;
    };
}lg_m_plus_m_plus_reg188_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg18c:8;
        RBus_UInt32  wpr_reg18d:8;
        RBus_UInt32  wpr_reg18e:8;
        RBus_UInt32  wpr_reg18f:8;
    };
}lg_m_plus_m_plus_reg18c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg190:8;
        RBus_UInt32  wpr_reg191:8;
        RBus_UInt32  wpr_reg192:8;
        RBus_UInt32  wpr_reg193:8;
    };
}lg_m_plus_m_plus_reg190_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg194:8;
        RBus_UInt32  wpr_reg195:8;
        RBus_UInt32  wpr_reg196:8;
        RBus_UInt32  wpr_reg197:8;
    };
}lg_m_plus_m_plus_reg194_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg198:8;
        RBus_UInt32  wpr_reg199:8;
        RBus_UInt32  wpr_reg19a:8;
        RBus_UInt32  wpr_reg19b:8;
    };
}lg_m_plus_m_plus_reg198_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg19c:8;
        RBus_UInt32  wpr_reg19d:8;
        RBus_UInt32  wpr_reg19e:8;
        RBus_UInt32  wpr_reg19f:8;
    };
}lg_m_plus_m_plus_reg19c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1a0:8;
        RBus_UInt32  wpr_reg1a1:8;
        RBus_UInt32  wpr_reg1a2:8;
        RBus_UInt32  wpr_reg1a3:8;
    };
}lg_m_plus_m_plus_reg1a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1a4:8;
        RBus_UInt32  wpr_reg1a5:8;
        RBus_UInt32  wpr_reg1a6:8;
        RBus_UInt32  wpr_reg1a7:8;
    };
}lg_m_plus_m_plus_reg1a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1a8:8;
        RBus_UInt32  wpr_reg1a9:8;
        RBus_UInt32  wpr_reg1aa:8;
        RBus_UInt32  wpr_reg1ab:8;
    };
}lg_m_plus_m_plus_reg1a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1ac:8;
        RBus_UInt32  wpr_reg1ad:8;
        RBus_UInt32  wpr_reg1ae:8;
        RBus_UInt32  wpr_reg1af:8;
    };
}lg_m_plus_m_plus_reg1ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1b0:8;
        RBus_UInt32  wpr_reg1b1:8;
        RBus_UInt32  wpr_reg1b2:8;
        RBus_UInt32  wpr_reg1b3:8;
    };
}lg_m_plus_m_plus_reg1b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1b4:8;
        RBus_UInt32  wpr_reg1b5:8;
        RBus_UInt32  wpr_reg1b6:8;
        RBus_UInt32  wpr_reg1b7:8;
    };
}lg_m_plus_m_plus_reg1b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1b8:8;
        RBus_UInt32  wpr_reg1b9:8;
        RBus_UInt32  wpr_reg1ba:8;
        RBus_UInt32  wpr_reg1bb:8;
    };
}lg_m_plus_m_plus_reg1b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1bc:8;
        RBus_UInt32  wpr_reg1bd:8;
        RBus_UInt32  wpr_reg1be:8;
        RBus_UInt32  wpr_reg1bf:8;
    };
}lg_m_plus_m_plus_reg1bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1c0:8;
        RBus_UInt32  wpr_reg1c1:8;
        RBus_UInt32  wpr_reg1c2:8;
        RBus_UInt32  wpr_reg1c3:8;
    };
}lg_m_plus_m_plus_reg1c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1c4:8;
        RBus_UInt32  wpr_reg1c5:8;
        RBus_UInt32  wpr_reg1c6:8;
        RBus_UInt32  wpr_reg1c7:8;
    };
}lg_m_plus_m_plus_reg1c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1c8:8;
        RBus_UInt32  wpr_reg1c9:8;
        RBus_UInt32  wpr_reg1ca:8;
        RBus_UInt32  wpr_reg1cb:8;
    };
}lg_m_plus_m_plus_reg1c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1cc:8;
        RBus_UInt32  wpr_reg1cd:8;
        RBus_UInt32  wpr_reg1ce:8;
        RBus_UInt32  wpr_reg1cf:8;
    };
}lg_m_plus_m_plus_reg1cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1d0:8;
        RBus_UInt32  wpr_reg1d1:8;
        RBus_UInt32  wpr_reg1d2:8;
        RBus_UInt32  wpr_reg1d3:8;
    };
}lg_m_plus_m_plus_reg1d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1d4:8;
        RBus_UInt32  wpr_reg1d5:8;
        RBus_UInt32  wpr_reg1d6:8;
        RBus_UInt32  wpr_reg1d7:8;
    };
}lg_m_plus_m_plus_reg1d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1d8:8;
        RBus_UInt32  wpr_reg1d9:8;
        RBus_UInt32  wpr_reg1da:8;
        RBus_UInt32  wpr_reg1db:8;
    };
}lg_m_plus_m_plus_reg1d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1dc:8;
        RBus_UInt32  wpr_reg1dd:8;
        RBus_UInt32  wpr_reg1de:8;
        RBus_UInt32  wpr_reg1df:8;
    };
}lg_m_plus_m_plus_reg1dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1e0:8;
        RBus_UInt32  wpr_reg1e1:8;
        RBus_UInt32  wpr_reg1e2:8;
        RBus_UInt32  wpr_reg1e3:8;
    };
}lg_m_plus_m_plus_reg1e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1e4:8;
        RBus_UInt32  wpr_reg1e5:8;
        RBus_UInt32  wpr_reg1e6:8;
        RBus_UInt32  wpr_reg1e7:8;
    };
}lg_m_plus_m_plus_reg1e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1e8:8;
        RBus_UInt32  wpr_reg1e9:8;
        RBus_UInt32  wpr_reg1ea:8;
        RBus_UInt32  wpr_reg1eb:8;
    };
}lg_m_plus_m_plus_reg1e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1ec:8;
        RBus_UInt32  wpr_reg1ed:8;
        RBus_UInt32  wpr_reg1ee:8;
        RBus_UInt32  wpr_reg1ef:8;
    };
}lg_m_plus_m_plus_reg1ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1f0:8;
        RBus_UInt32  wpr_reg1f1:8;
        RBus_UInt32  wpr_reg1f2:8;
        RBus_UInt32  wpr_reg1f3:8;
    };
}lg_m_plus_m_plus_reg1f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1f4:8;
        RBus_UInt32  wpr_reg1f5:8;
        RBus_UInt32  wpr_reg1f6:8;
        RBus_UInt32  wpr_reg1f7:8;
    };
}lg_m_plus_m_plus_reg1f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1f8:8;
        RBus_UInt32  wpr_reg1f9:8;
        RBus_UInt32  wpr_reg1fa:8;
        RBus_UInt32  wpr_reg1fb:8;
    };
}lg_m_plus_m_plus_reg1f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1fc:8;
        RBus_UInt32  wpr_reg1fd:8;
        RBus_UInt32  wpr_reg1fe:8;
        RBus_UInt32  wpr_reg1ff:8;
    };
}lg_m_plus_m_plus_reg1fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg200:8;
        RBus_UInt32  wpr_reg201:8;
        RBus_UInt32  wpr_reg202:8;
        RBus_UInt32  wpr_reg203:8;
    };
}lg_m_plus_m_plus_reg200_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg204:8;
        RBus_UInt32  wpr_reg205:8;
        RBus_UInt32  wpr_reg206:8;
        RBus_UInt32  wpr_reg207:8;
    };
}lg_m_plus_m_plus_reg204_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg208:8;
        RBus_UInt32  wpr_reg209:8;
        RBus_UInt32  wpr_reg20a:8;
        RBus_UInt32  wpr_reg20b:8;
    };
}lg_m_plus_m_plus_reg208_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg20c:8;
        RBus_UInt32  wpr_reg20d:8;
        RBus_UInt32  wpr_reg20e:8;
        RBus_UInt32  wpr_reg20f:8;
    };
}lg_m_plus_m_plus_reg20c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg210:8;
        RBus_UInt32  wpr_reg211:8;
        RBus_UInt32  wpr_reg212:8;
        RBus_UInt32  wpr_reg213:8;
    };
}lg_m_plus_m_plus_reg210_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg214:8;
        RBus_UInt32  wpr_reg215:8;
        RBus_UInt32  wpr_reg216:8;
        RBus_UInt32  wpr_reg217:8;
    };
}lg_m_plus_m_plus_reg214_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg218:8;
        RBus_UInt32  wpr_reg219:8;
        RBus_UInt32  wpr_reg21a:8;
        RBus_UInt32  wpr_reg21b:8;
    };
}lg_m_plus_m_plus_reg218_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg21c:8;
        RBus_UInt32  wpr_reg21d:8;
        RBus_UInt32  wpr_reg21e:8;
        RBus_UInt32  wpr_reg21f:8;
    };
}lg_m_plus_m_plus_reg21c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg220:8;
        RBus_UInt32  wpr_reg221:8;
        RBus_UInt32  wpr_reg222:8;
        RBus_UInt32  wpr_reg223:8;
    };
}lg_m_plus_m_plus_reg220_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg224:8;
        RBus_UInt32  wpr_reg225:8;
        RBus_UInt32  wpr_reg226:8;
        RBus_UInt32  wpr_reg227:8;
    };
}lg_m_plus_m_plus_reg224_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg228:8;
        RBus_UInt32  wpr_reg229:8;
        RBus_UInt32  wpr_reg22a:8;
        RBus_UInt32  wpr_reg22b:8;
    };
}lg_m_plus_m_plus_reg228_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg22c:8;
        RBus_UInt32  wpr_reg22d:8;
        RBus_UInt32  wpr_reg22e:8;
        RBus_UInt32  wpr_reg22f:8;
    };
}lg_m_plus_m_plus_reg22c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg230:8;
        RBus_UInt32  wpr_reg231:8;
        RBus_UInt32  wpr_reg232:8;
        RBus_UInt32  wpr_reg233:8;
    };
}lg_m_plus_m_plus_reg230_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg234:8;
        RBus_UInt32  wpr_reg235:8;
        RBus_UInt32  wpr_reg236:8;
        RBus_UInt32  wpr_reg237:8;
    };
}lg_m_plus_m_plus_reg234_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg238:8;
        RBus_UInt32  wpr_reg239:8;
        RBus_UInt32  wpr_reg23a:8;
        RBus_UInt32  wpr_reg23b:8;
    };
}lg_m_plus_m_plus_reg238_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg23c:8;
        RBus_UInt32  wpr_reg23d:8;
        RBus_UInt32  wpr_reg23e:8;
        RBus_UInt32  wpr_reg23f:8;
    };
}lg_m_plus_m_plus_reg23c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg240:8;
        RBus_UInt32  wpr_reg241:8;
        RBus_UInt32  wpr_reg242:8;
        RBus_UInt32  wpr_reg243:8;
    };
}lg_m_plus_m_plus_reg240_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg244:8;
        RBus_UInt32  wpr_reg245:8;
        RBus_UInt32  wpr_reg246:8;
        RBus_UInt32  wpr_reg247:8;
    };
}lg_m_plus_m_plus_reg244_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg248:8;
        RBus_UInt32  wpr_reg249:8;
        RBus_UInt32  wpr_reg24a:8;
        RBus_UInt32  wpr_reg24b:8;
    };
}lg_m_plus_m_plus_reg248_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg24c:8;
        RBus_UInt32  wpr_reg24d:8;
        RBus_UInt32  wpr_reg24e:8;
        RBus_UInt32  wpr_reg24f:8;
    };
}lg_m_plus_m_plus_reg24c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg250:8;
        RBus_UInt32  wpr_reg251:8;
        RBus_UInt32  wpr_reg252:8;
        RBus_UInt32  wpr_reg253:8;
    };
}lg_m_plus_m_plus_reg250_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg254:8;
        RBus_UInt32  wpr_reg255:8;
        RBus_UInt32  wpr_reg256:8;
        RBus_UInt32  wpr_reg257:8;
    };
}lg_m_plus_m_plus_reg254_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg258:8;
        RBus_UInt32  wpr_reg259:8;
        RBus_UInt32  wpr_reg25a:8;
        RBus_UInt32  wpr_reg25b:8;
    };
}lg_m_plus_m_plus_reg258_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg25c:8;
        RBus_UInt32  wpr_reg25d:8;
        RBus_UInt32  wpr_reg25e:8;
        RBus_UInt32  wpr_reg25f:8;
    };
}lg_m_plus_m_plus_reg25c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg260:8;
        RBus_UInt32  wpr_reg261:8;
        RBus_UInt32  wpr_reg262:8;
        RBus_UInt32  wpr_reg263:8;
    };
}lg_m_plus_m_plus_reg260_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg264:8;
        RBus_UInt32  wpr_reg265:8;
        RBus_UInt32  wpr_reg266:8;
        RBus_UInt32  wpr_reg267:8;
    };
}lg_m_plus_m_plus_reg264_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg268:8;
        RBus_UInt32  wpr_reg269:8;
        RBus_UInt32  wpr_reg26a:8;
        RBus_UInt32  wpr_reg26b:8;
    };
}lg_m_plus_m_plus_reg268_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg26c:8;
        RBus_UInt32  wpr_reg26d:8;
        RBus_UInt32  wpr_reg26e:8;
        RBus_UInt32  wpr_reg26f:8;
    };
}lg_m_plus_m_plus_reg26c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg270:8;
        RBus_UInt32  wpr_reg271:8;
        RBus_UInt32  wpr_reg272:8;
        RBus_UInt32  wpr_reg273:8;
    };
}lg_m_plus_m_plus_reg270_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg274:8;
        RBus_UInt32  wpr_reg275:8;
        RBus_UInt32  wpr_reg276:8;
        RBus_UInt32  wpr_reg277:8;
    };
}lg_m_plus_m_plus_reg274_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg278:8;
        RBus_UInt32  wpr_reg279:8;
        RBus_UInt32  wpr_reg27a:8;
        RBus_UInt32  wpr_reg27b:8;
    };
}lg_m_plus_m_plus_reg278_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg27c:8;
        RBus_UInt32  wpr_reg27d:8;
        RBus_UInt32  wpr_reg27e:8;
        RBus_UInt32  wpr_reg27f:8;
    };
}lg_m_plus_m_plus_reg27c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg280:8;
        RBus_UInt32  wpr_reg281:8;
        RBus_UInt32  wpr_reg282:8;
        RBus_UInt32  wpr_reg283:8;
    };
}lg_m_plus_m_plus_reg280_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg284:8;
        RBus_UInt32  wpr_reg285:8;
        RBus_UInt32  wpr_reg286:8;
        RBus_UInt32  wpr_reg287:8;
    };
}lg_m_plus_m_plus_reg284_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg288:8;
        RBus_UInt32  wpr_reg289:8;
        RBus_UInt32  wpr_reg28a:8;
        RBus_UInt32  wpr_reg28b:8;
    };
}lg_m_plus_m_plus_reg288_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg28c:8;
        RBus_UInt32  wpr_reg28d:8;
        RBus_UInt32  wpr_reg28e:8;
        RBus_UInt32  wpr_reg28f:8;
    };
}lg_m_plus_m_plus_reg28c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg290:8;
        RBus_UInt32  wpr_reg291:8;
        RBus_UInt32  wpr_reg292:8;
        RBus_UInt32  wpr_reg293:8;
    };
}lg_m_plus_m_plus_reg290_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg294:8;
        RBus_UInt32  wpr_reg295:8;
        RBus_UInt32  wpr_reg296:8;
        RBus_UInt32  wpr_reg297:8;
    };
}lg_m_plus_m_plus_reg294_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg298:8;
        RBus_UInt32  wpr_reg299:8;
        RBus_UInt32  wpr_reg29a:8;
        RBus_UInt32  wpr_reg29b:8;
    };
}lg_m_plus_m_plus_reg298_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg29c:8;
        RBus_UInt32  wpr_reg29d:8;
        RBus_UInt32  wpr_reg29e:8;
        RBus_UInt32  wpr_reg29f:8;
    };
}lg_m_plus_m_plus_reg29c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2a0:8;
        RBus_UInt32  wpr_reg2a1:8;
        RBus_UInt32  wpr_reg2a2:8;
        RBus_UInt32  wpr_reg2a3:8;
    };
}lg_m_plus_m_plus_reg2a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2a4:8;
        RBus_UInt32  wpr_reg2a5:8;
        RBus_UInt32  wpr_reg2a6:8;
        RBus_UInt32  wpr_reg2a7:8;
    };
}lg_m_plus_m_plus_reg2a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2a8:8;
        RBus_UInt32  wpr_reg2a9:8;
        RBus_UInt32  wpr_reg2aa:8;
        RBus_UInt32  wpr_reg2ab:8;
    };
}lg_m_plus_m_plus_reg2a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2ac:8;
        RBus_UInt32  wpr_reg2ad:8;
        RBus_UInt32  wpr_reg2ae:8;
        RBus_UInt32  wpr_reg2af:8;
    };
}lg_m_plus_m_plus_reg2ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2b0:8;
        RBus_UInt32  wpr_reg2b1:8;
        RBus_UInt32  wpr_reg2b2:8;
        RBus_UInt32  wpr_reg2b3:8;
    };
}lg_m_plus_m_plus_reg2b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2b4:8;
        RBus_UInt32  wpr_reg2b5:8;
        RBus_UInt32  wpr_reg2b6:8;
        RBus_UInt32  wpr_reg2b7:8;
    };
}lg_m_plus_m_plus_reg2b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2b8:8;
        RBus_UInt32  wpr_reg2b9:8;
        RBus_UInt32  wpr_reg2ba:8;
        RBus_UInt32  wpr_reg2bb:8;
    };
}lg_m_plus_m_plus_reg2b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2bc:8;
        RBus_UInt32  wpr_reg2bd:8;
        RBus_UInt32  wpr_reg2be:8;
        RBus_UInt32  wpr_reg2bf:8;
    };
}lg_m_plus_m_plus_reg2bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2c0:8;
        RBus_UInt32  wpr_reg2c1:8;
        RBus_UInt32  wpr_reg2c2:8;
        RBus_UInt32  wpr_reg2c3:8;
    };
}lg_m_plus_m_plus_reg2c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2c4:8;
        RBus_UInt32  wpr_reg2c5:8;
        RBus_UInt32  wpr_reg2c6:8;
        RBus_UInt32  wpr_reg2c7:8;
    };
}lg_m_plus_m_plus_reg2c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2c8:8;
        RBus_UInt32  wpr_reg2c9:8;
        RBus_UInt32  wpr_reg2ca:8;
        RBus_UInt32  wpr_reg2cb:8;
    };
}lg_m_plus_m_plus_reg2c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2cc:8;
        RBus_UInt32  wpr_reg2cd:8;
        RBus_UInt32  wpr_reg2ce:8;
        RBus_UInt32  wpr_reg2cf:8;
    };
}lg_m_plus_m_plus_reg2cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2d0:8;
        RBus_UInt32  wpr_reg2d1:8;
        RBus_UInt32  wpr_reg2d2:8;
        RBus_UInt32  wpr_reg2d3:8;
    };
}lg_m_plus_m_plus_reg2d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2d4:8;
        RBus_UInt32  wpr_reg2d5:8;
        RBus_UInt32  wpr_reg2d6:8;
        RBus_UInt32  wpr_reg2d7:8;
    };
}lg_m_plus_m_plus_reg2d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2d8:8;
        RBus_UInt32  wpr_reg2d9:8;
        RBus_UInt32  wpr_reg2da:8;
        RBus_UInt32  wpr_reg2db:8;
    };
}lg_m_plus_m_plus_reg2d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2dc:8;
        RBus_UInt32  wpr_reg2dd:8;
        RBus_UInt32  wpr_reg2de:8;
        RBus_UInt32  wpr_reg2df:8;
    };
}lg_m_plus_m_plus_reg2dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2e0:8;
        RBus_UInt32  wpr_reg2e1:8;
        RBus_UInt32  wpr_reg2e2:8;
        RBus_UInt32  wpr_reg2e3:8;
    };
}lg_m_plus_m_plus_reg2e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2e4:8;
        RBus_UInt32  wpr_reg2e5:8;
        RBus_UInt32  wpr_reg2e6:8;
        RBus_UInt32  wpr_reg2e7:8;
    };
}lg_m_plus_m_plus_reg2e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2e8:8;
        RBus_UInt32  wpr_reg2e9:8;
        RBus_UInt32  wpr_reg2ea:8;
        RBus_UInt32  wpr_reg2eb:8;
    };
}lg_m_plus_m_plus_reg2e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2ec:8;
        RBus_UInt32  wpr_reg2ed:8;
        RBus_UInt32  wpr_reg2ee:8;
        RBus_UInt32  wpr_reg2ef:8;
    };
}lg_m_plus_m_plus_reg2ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2f0:8;
        RBus_UInt32  wpr_reg2f1:8;
        RBus_UInt32  wpr_reg2f2:8;
        RBus_UInt32  wpr_reg2f3:8;
    };
}lg_m_plus_m_plus_reg2f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2f4:8;
        RBus_UInt32  wpr_reg2f5:8;
        RBus_UInt32  wpr_reg2f6:8;
        RBus_UInt32  wpr_reg2f7:8;
    };
}lg_m_plus_m_plus_reg2f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2f8:8;
        RBus_UInt32  wpr_reg2f9:8;
        RBus_UInt32  wpr_reg2fa:8;
        RBus_UInt32  wpr_reg2fb:8;
    };
}lg_m_plus_m_plus_reg2f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2fc:8;
        RBus_UInt32  wpr_reg2fd:8;
        RBus_UInt32  wpr_reg2fe:8;
        RBus_UInt32  wpr_reg2ff:8;
    };
}lg_m_plus_m_plus_reg2fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg300:8;
        RBus_UInt32  wpr_reg301:8;
        RBus_UInt32  wpr_reg302:8;
        RBus_UInt32  wpr_reg303:8;
    };
}lg_m_plus_m_plus_reg300_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg304:8;
        RBus_UInt32  wpr_reg305:8;
        RBus_UInt32  wpr_reg306:8;
        RBus_UInt32  wpr_reg307:8;
    };
}lg_m_plus_m_plus_reg304_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg308:8;
        RBus_UInt32  wpr_reg309:8;
        RBus_UInt32  wpr_reg30a:8;
        RBus_UInt32  wpr_reg30b:8;
    };
}lg_m_plus_m_plus_reg308_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg30c:8;
        RBus_UInt32  wpr_reg30d:8;
        RBus_UInt32  wpr_reg30e:8;
        RBus_UInt32  wpr_reg30f:8;
    };
}lg_m_plus_m_plus_reg30c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg310:8;
        RBus_UInt32  wpr_reg311:8;
        RBus_UInt32  wpr_reg312:8;
        RBus_UInt32  wpr_reg313:8;
    };
}lg_m_plus_m_plus_reg310_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg314:8;
        RBus_UInt32  wpr_reg315:8;
        RBus_UInt32  wpr_reg316:8;
        RBus_UInt32  wpr_reg317:8;
    };
}lg_m_plus_m_plus_reg314_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg318:8;
        RBus_UInt32  wpr_reg319:8;
        RBus_UInt32  wpr_reg31a:8;
        RBus_UInt32  wpr_reg31b:8;
    };
}lg_m_plus_m_plus_reg318_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg31c:8;
        RBus_UInt32  wpr_reg31d:8;
        RBus_UInt32  wpr_reg31e:8;
        RBus_UInt32  wpr_reg31f:8;
    };
}lg_m_plus_m_plus_reg31c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg320:8;
        RBus_UInt32  wpr_reg321:8;
        RBus_UInt32  wpr_reg322:8;
        RBus_UInt32  wpr_reg323:8;
    };
}lg_m_plus_m_plus_reg320_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg324:8;
        RBus_UInt32  wpr_reg325:8;
        RBus_UInt32  wpr_reg326:8;
        RBus_UInt32  wpr_reg327:8;
    };
}lg_m_plus_m_plus_reg324_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg328:8;
        RBus_UInt32  wpr_reg329:8;
        RBus_UInt32  wpr_reg32a:8;
        RBus_UInt32  wpr_reg32b:8;
    };
}lg_m_plus_m_plus_reg328_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg32c:8;
        RBus_UInt32  wpr_reg32d:8;
        RBus_UInt32  wpr_reg32e:8;
        RBus_UInt32  wpr_reg32f:8;
    };
}lg_m_plus_m_plus_reg32c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg330:8;
        RBus_UInt32  wpr_reg331:8;
        RBus_UInt32  wpr_reg332:8;
        RBus_UInt32  wpr_reg333:8;
    };
}lg_m_plus_m_plus_reg330_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg334:8;
        RBus_UInt32  wpr_reg335:8;
        RBus_UInt32  wpr_reg336:8;
        RBus_UInt32  wpr_reg337:8;
    };
}lg_m_plus_m_plus_reg334_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg338:8;
        RBus_UInt32  wpr_reg339:8;
        RBus_UInt32  wpr_reg33a:8;
        RBus_UInt32  wpr_reg33b:8;
    };
}lg_m_plus_m_plus_reg338_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg33c:8;
        RBus_UInt32  wpr_reg33d:8;
        RBus_UInt32  wpr_reg33e:8;
        RBus_UInt32  wpr_reg33f:8;
    };
}lg_m_plus_m_plus_reg33c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg340:8;
        RBus_UInt32  wpr_reg341:8;
        RBus_UInt32  wpr_reg342:8;
        RBus_UInt32  wpr_reg343:8;
    };
}lg_m_plus_m_plus_reg340_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg344:8;
        RBus_UInt32  wpr_reg345:8;
        RBus_UInt32  wpr_reg346:8;
        RBus_UInt32  wpr_reg347:8;
    };
}lg_m_plus_m_plus_reg344_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg348:8;
        RBus_UInt32  wpr_reg349:8;
        RBus_UInt32  wpr_reg34a:8;
        RBus_UInt32  wpr_reg34b:8;
    };
}lg_m_plus_m_plus_reg348_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg34c:8;
        RBus_UInt32  wpr_reg34d:8;
        RBus_UInt32  wpr_reg34e:8;
        RBus_UInt32  wpr_reg34f:8;
    };
}lg_m_plus_m_plus_reg34c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg350:8;
        RBus_UInt32  wpr_reg351:8;
        RBus_UInt32  wpr_reg352:8;
        RBus_UInt32  wpr_reg353:8;
    };
}lg_m_plus_m_plus_reg350_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg354:8;
        RBus_UInt32  wpr_reg355:8;
        RBus_UInt32  wpr_reg356:8;
        RBus_UInt32  wpr_reg357:8;
    };
}lg_m_plus_m_plus_reg354_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg358:8;
        RBus_UInt32  wpr_reg359:8;
        RBus_UInt32  wpr_reg35a:8;
        RBus_UInt32  wpr_reg35b:8;
    };
}lg_m_plus_m_plus_reg358_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg35c:8;
        RBus_UInt32  wpr_reg35d:8;
        RBus_UInt32  wpr_reg35e:8;
        RBus_UInt32  wpr_reg35f:8;
    };
}lg_m_plus_m_plus_reg35c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg360:8;
        RBus_UInt32  wpr_reg361:8;
        RBus_UInt32  wpr_reg362:8;
        RBus_UInt32  wpr_reg363:8;
    };
}lg_m_plus_m_plus_reg360_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg364:8;
        RBus_UInt32  wpr_reg365:8;
        RBus_UInt32  wpr_reg366:8;
        RBus_UInt32  wpr_reg367:8;
    };
}lg_m_plus_m_plus_reg364_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg368:8;
        RBus_UInt32  wpr_reg369:8;
        RBus_UInt32  wpr_reg36a:8;
        RBus_UInt32  wpr_reg36b:8;
    };
}lg_m_plus_m_plus_reg368_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg36c:8;
        RBus_UInt32  wpr_reg36d:8;
        RBus_UInt32  wpr_reg36e:8;
        RBus_UInt32  wpr_reg36f:8;
    };
}lg_m_plus_m_plus_reg36c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg370:8;
        RBus_UInt32  wpr_reg371:8;
        RBus_UInt32  wpr_reg372:8;
        RBus_UInt32  wpr_reg373:8;
    };
}lg_m_plus_m_plus_reg370_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg374:8;
        RBus_UInt32  wpr_reg375:8;
        RBus_UInt32  wpr_reg376:8;
        RBus_UInt32  wpr_reg377:8;
    };
}lg_m_plus_m_plus_reg374_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg378:8;
        RBus_UInt32  wpr_reg379:8;
        RBus_UInt32  wpr_reg37a:8;
        RBus_UInt32  wpr_reg37b:8;
    };
}lg_m_plus_m_plus_reg378_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg37c:8;
        RBus_UInt32  wpr_reg37d:8;
        RBus_UInt32  wpr_reg37e:8;
        RBus_UInt32  wpr_reg37f:8;
    };
}lg_m_plus_m_plus_reg37c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg380:8;
        RBus_UInt32  wpr_reg381:8;
        RBus_UInt32  wpr_reg382:8;
        RBus_UInt32  wpr_reg383:8;
    };
}lg_m_plus_m_plus_reg380_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg384:8;
        RBus_UInt32  wpr_reg385:8;
        RBus_UInt32  wpr_reg386:8;
        RBus_UInt32  wpr_reg387:8;
    };
}lg_m_plus_m_plus_reg384_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg388:8;
        RBus_UInt32  wpr_reg389:8;
        RBus_UInt32  wpr_reg38a:8;
        RBus_UInt32  wpr_reg38b:8;
    };
}lg_m_plus_m_plus_reg388_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg38c:8;
        RBus_UInt32  wpr_reg38d:8;
        RBus_UInt32  wpr_reg38e:8;
        RBus_UInt32  wpr_reg38f:8;
    };
}lg_m_plus_m_plus_reg38c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg390:8;
        RBus_UInt32  wpr_reg391:8;
        RBus_UInt32  wpr_reg392:8;
        RBus_UInt32  wpr_reg393:8;
    };
}lg_m_plus_m_plus_reg390_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg394:8;
        RBus_UInt32  wpr_reg395:8;
        RBus_UInt32  wpr_reg396:8;
        RBus_UInt32  wpr_reg397:8;
    };
}lg_m_plus_m_plus_reg394_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg398:8;
        RBus_UInt32  wpr_reg399:8;
        RBus_UInt32  wpr_reg39a:8;
        RBus_UInt32  wpr_reg39b:8;
    };
}lg_m_plus_m_plus_reg398_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg39c:8;
        RBus_UInt32  wpr_reg39d:8;
        RBus_UInt32  wpr_reg39e:8;
        RBus_UInt32  wpr_reg39f:8;
    };
}lg_m_plus_m_plus_reg39c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3a0:8;
        RBus_UInt32  wpr_reg3a1:8;
        RBus_UInt32  wpr_reg3a2:8;
        RBus_UInt32  wpr_reg3a3:8;
    };
}lg_m_plus_m_plus_reg3a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3a4:8;
        RBus_UInt32  wpr_reg3a5:8;
        RBus_UInt32  wpr_reg3a6:8;
        RBus_UInt32  wpr_reg3a7:8;
    };
}lg_m_plus_m_plus_reg3a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3a8:8;
        RBus_UInt32  wpr_reg3a9:8;
        RBus_UInt32  wpr_reg3aa:8;
        RBus_UInt32  wpr_reg3ab:8;
    };
}lg_m_plus_m_plus_reg3a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3ac:8;
        RBus_UInt32  wpr_reg3ad:8;
        RBus_UInt32  wpr_reg3ae:8;
        RBus_UInt32  wpr_reg3af:8;
    };
}lg_m_plus_m_plus_reg3ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3b0:8;
        RBus_UInt32  wpr_reg3b1:8;
        RBus_UInt32  wpr_reg3b2:8;
        RBus_UInt32  wpr_reg3b3:8;
    };
}lg_m_plus_m_plus_reg3b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3b4:8;
        RBus_UInt32  wpr_reg3b5:8;
        RBus_UInt32  wpr_reg3b6:8;
        RBus_UInt32  wpr_reg3b7:8;
    };
}lg_m_plus_m_plus_reg3b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3b8:8;
        RBus_UInt32  wpr_reg3b9:8;
        RBus_UInt32  wpr_reg3ba:8;
        RBus_UInt32  wpr_reg3bb:8;
    };
}lg_m_plus_m_plus_reg3b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3bc:8;
        RBus_UInt32  wpr_reg3bd:8;
        RBus_UInt32  wpr_reg3be:8;
        RBus_UInt32  wpr_reg3bf:8;
    };
}lg_m_plus_m_plus_reg3bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3c0:8;
        RBus_UInt32  wpr_reg3c1:8;
        RBus_UInt32  wpr_reg3c2:8;
        RBus_UInt32  wpr_reg3c3:8;
    };
}lg_m_plus_m_plus_reg3c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3c4:8;
        RBus_UInt32  wpr_reg3c5:8;
        RBus_UInt32  wpr_reg3c6:8;
        RBus_UInt32  wpr_reg3c7:8;
    };
}lg_m_plus_m_plus_reg3c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3c8:8;
        RBus_UInt32  wpr_reg3c9:8;
        RBus_UInt32  wpr_reg3ca:8;
        RBus_UInt32  wpr_reg3cb:8;
    };
}lg_m_plus_m_plus_reg3c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3cc:8;
        RBus_UInt32  wpr_reg3cd:8;
        RBus_UInt32  wpr_reg3ce:8;
        RBus_UInt32  wpr_reg3cf:8;
    };
}lg_m_plus_m_plus_reg3cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3d0:8;
        RBus_UInt32  wpr_reg3d1:8;
        RBus_UInt32  wpr_reg3d2:8;
        RBus_UInt32  wpr_reg3d3:8;
    };
}lg_m_plus_m_plus_reg3d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3d4:8;
        RBus_UInt32  wpr_reg3d5:8;
        RBus_UInt32  wpr_reg3d6:8;
        RBus_UInt32  wpr_reg3d7:8;
    };
}lg_m_plus_m_plus_reg3d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3d8:8;
        RBus_UInt32  wpr_reg3d9:8;
        RBus_UInt32  wpr_reg3da:8;
        RBus_UInt32  wpr_reg3db:8;
    };
}lg_m_plus_m_plus_reg3d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3dc:8;
        RBus_UInt32  wpr_reg3dd:8;
        RBus_UInt32  wpr_reg3de:8;
        RBus_UInt32  wpr_reg3df:8;
    };
}lg_m_plus_m_plus_reg3dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3e0:8;
        RBus_UInt32  wpr_reg3e1:8;
        RBus_UInt32  wpr_reg3e2:8;
        RBus_UInt32  wpr_reg3e3:8;
    };
}lg_m_plus_m_plus_reg3e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3e4:8;
        RBus_UInt32  wpr_reg3e5:8;
        RBus_UInt32  wpr_reg3e6:8;
        RBus_UInt32  wpr_reg3e7:8;
    };
}lg_m_plus_m_plus_reg3e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3e8:8;
        RBus_UInt32  wpr_reg3e9:8;
        RBus_UInt32  wpr_reg3ea:8;
        RBus_UInt32  wpr_reg3eb:8;
    };
}lg_m_plus_m_plus_reg3e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3ec:8;
        RBus_UInt32  wpr_reg3ed:8;
        RBus_UInt32  wpr_reg3ee:8;
        RBus_UInt32  wpr_reg3ef:8;
    };
}lg_m_plus_m_plus_reg3ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3f0:8;
        RBus_UInt32  wpr_reg3f1:8;
        RBus_UInt32  wpr_reg3f2:8;
        RBus_UInt32  wpr_reg3f3:8;
    };
}lg_m_plus_m_plus_reg3f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3f4:8;
        RBus_UInt32  wpr_reg3f5:8;
        RBus_UInt32  wpr_reg3f6:8;
        RBus_UInt32  wpr_reg3f7:8;
    };
}lg_m_plus_m_plus_reg3f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3f8:8;
        RBus_UInt32  wpr_reg3f9:8;
        RBus_UInt32  wpr_reg3fa:8;
        RBus_UInt32  wpr_reg3fb:8;
    };
}lg_m_plus_m_plus_reg3f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3fc:8;
        RBus_UInt32  wpr_reg3fd:8;
        RBus_UInt32  wpr_reg3fe:8;
        RBus_UInt32  wpr_reg3ff:8;
    };
}lg_m_plus_m_plus_reg3fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg400:8;
        RBus_UInt32  wpr_reg401:8;
        RBus_UInt32  wpr_reg402:8;
        RBus_UInt32  wpr_reg403:8;
    };
}lg_m_plus_m_plus_reg400_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg404:8;
        RBus_UInt32  wpr_reg405:8;
        RBus_UInt32  wpr_reg406:8;
        RBus_UInt32  wpr_reg407:8;
    };
}lg_m_plus_m_plus_reg404_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg408:8;
        RBus_UInt32  wpr_reg409:8;
        RBus_UInt32  wpr_reg40a:8;
        RBus_UInt32  wpr_reg40b:8;
    };
}lg_m_plus_m_plus_reg408_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg40c:8;
        RBus_UInt32  wpr_reg40d:8;
        RBus_UInt32  wpr_reg40e:8;
        RBus_UInt32  wpr_reg40f:8;
    };
}lg_m_plus_m_plus_reg40c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg410:8;
        RBus_UInt32  wpr_reg411:8;
        RBus_UInt32  wpr_reg412:8;
        RBus_UInt32  wpr_reg413:8;
    };
}lg_m_plus_m_plus_reg410_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg414:8;
        RBus_UInt32  wpr_reg415:8;
        RBus_UInt32  wpr_reg416:8;
        RBus_UInt32  wpr_reg417:8;
    };
}lg_m_plus_m_plus_reg414_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg418:8;
        RBus_UInt32  wpr_reg419:8;
        RBus_UInt32  wpr_reg41a:8;
        RBus_UInt32  wpr_reg41b:8;
    };
}lg_m_plus_m_plus_reg418_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg41c:8;
        RBus_UInt32  wpr_reg41d:8;
        RBus_UInt32  wpr_reg41e:8;
        RBus_UInt32  wpr_reg41f:8;
    };
}lg_m_plus_m_plus_reg41c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg420:8;
        RBus_UInt32  wpr_reg421:8;
        RBus_UInt32  wpr_reg422:8;
        RBus_UInt32  wpr_reg423:8;
    };
}lg_m_plus_m_plus_reg420_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg424:8;
        RBus_UInt32  wpr_reg425:8;
        RBus_UInt32  wpr_reg426:8;
        RBus_UInt32  wpr_reg427:8;
    };
}lg_m_plus_m_plus_reg424_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg428:8;
        RBus_UInt32  wpr_reg429:8;
        RBus_UInt32  wpr_reg42a:8;
        RBus_UInt32  wpr_reg42b:8;
    };
}lg_m_plus_m_plus_reg428_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg42c:8;
        RBus_UInt32  wpr_reg42d:8;
        RBus_UInt32  wpr_reg42e:8;
        RBus_UInt32  wpr_reg42f:8;
    };
}lg_m_plus_m_plus_reg42c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg430:8;
        RBus_UInt32  wpr_reg431:8;
        RBus_UInt32  wpr_reg432:8;
        RBus_UInt32  wpr_reg433:8;
    };
}lg_m_plus_m_plus_reg430_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg434:8;
        RBus_UInt32  wpr_reg435:8;
        RBus_UInt32  wpr_reg436:8;
        RBus_UInt32  wpr_reg437:8;
    };
}lg_m_plus_m_plus_reg434_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg438:8;
        RBus_UInt32  wpr_reg439:8;
        RBus_UInt32  wpr_reg43a:8;
        RBus_UInt32  wpr_reg43b:8;
    };
}lg_m_plus_m_plus_reg438_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg43c:8;
        RBus_UInt32  wpr_reg43d:8;
        RBus_UInt32  wpr_reg43e:8;
        RBus_UInt32  wpr_reg43f:8;
    };
}lg_m_plus_m_plus_reg43c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg440:8;
        RBus_UInt32  wpr_reg441:8;
        RBus_UInt32  wpr_reg442:8;
        RBus_UInt32  wpr_reg443:8;
    };
}lg_m_plus_m_plus_reg440_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg444:8;
        RBus_UInt32  wpr_reg445:8;
        RBus_UInt32  wpr_reg446:8;
        RBus_UInt32  wpr_reg447:8;
    };
}lg_m_plus_m_plus_reg444_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg448:8;
        RBus_UInt32  wpr_reg449:8;
        RBus_UInt32  wpr_reg44a:8;
        RBus_UInt32  wpr_reg44b:8;
    };
}lg_m_plus_m_plus_reg448_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg44c:8;
        RBus_UInt32  wpr_reg44d:8;
        RBus_UInt32  wpr_reg44e:8;
        RBus_UInt32  wpr_reg44f:8;
    };
}lg_m_plus_m_plus_reg44c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg450:8;
        RBus_UInt32  wpr_reg451:8;
        RBus_UInt32  wpr_reg452:8;
        RBus_UInt32  wpr_reg453:8;
    };
}lg_m_plus_m_plus_reg450_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg454:8;
        RBus_UInt32  wpr_reg455:8;
        RBus_UInt32  wpr_reg456:8;
        RBus_UInt32  wpr_reg457:8;
    };
}lg_m_plus_m_plus_reg454_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg458:8;
        RBus_UInt32  wpr_reg459:8;
        RBus_UInt32  wpr_reg45a:8;
        RBus_UInt32  wpr_reg45b:8;
    };
}lg_m_plus_m_plus_reg458_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg45c:8;
        RBus_UInt32  wpr_reg45d:8;
        RBus_UInt32  wpr_reg45e:8;
        RBus_UInt32  wpr_reg45f:8;
    };
}lg_m_plus_m_plus_reg45c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg460:8;
        RBus_UInt32  wpr_reg461:8;
        RBus_UInt32  wpr_reg462:8;
        RBus_UInt32  wpr_reg463:8;
    };
}lg_m_plus_m_plus_reg460_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg464:8;
        RBus_UInt32  wpr_reg465:8;
        RBus_UInt32  wpr_reg466:8;
        RBus_UInt32  wpr_reg467:8;
    };
}lg_m_plus_m_plus_reg464_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg468:8;
        RBus_UInt32  wpr_reg469:8;
        RBus_UInt32  wpr_reg46a:8;
        RBus_UInt32  wpr_reg46b:8;
    };
}lg_m_plus_m_plus_reg468_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg46c:8;
        RBus_UInt32  wpr_reg46d:8;
        RBus_UInt32  wpr_reg46e:8;
        RBus_UInt32  wpr_reg46f:8;
    };
}lg_m_plus_m_plus_reg46c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg470:8;
        RBus_UInt32  wpr_reg471:8;
        RBus_UInt32  wpr_reg472:8;
        RBus_UInt32  wpr_reg473:8;
    };
}lg_m_plus_m_plus_reg470_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg474:8;
        RBus_UInt32  wpr_reg475:8;
        RBus_UInt32  wpr_reg476:8;
        RBus_UInt32  wpr_reg477:8;
    };
}lg_m_plus_m_plus_reg474_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg478:8;
        RBus_UInt32  wpr_reg479:8;
        RBus_UInt32  wpr_reg47a:8;
        RBus_UInt32  wpr_reg47b:8;
    };
}lg_m_plus_m_plus_reg478_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg47c:8;
        RBus_UInt32  wpr_reg47d:8;
        RBus_UInt32  wpr_reg47e:8;
        RBus_UInt32  wpr_reg47f:8;
    };
}lg_m_plus_m_plus_reg47c_RBUS;

#else //apply LITTLE_ENDIAN

//======LG_M_PLUS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18028f00_22_0:23;
        RBus_UInt32  test_mode:1;
        RBus_UInt32  mode_sel:3;
        RBus_UInt32  dummy18028f00_27:1;
        RBus_UInt32  bypass_on:1;
        RBus_UInt32  mce_on:1;
        RBus_UInt32  opc_on:1;
        RBus_UInt32  wpr_on:1;
    };
}lg_m_plus_m_plus_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dimming_duty_shift:8;
        RBus_UInt32  dimming_duty_gain:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  dimming_duty_force_value:13;
        RBus_UInt32  res2:2;
        RBus_UInt32  dimming_duty_force_en:1;
    };
}lg_m_plus_m_plus_dimming_duty_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dimming_duty:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  frame_cnt:8;
        RBus_UInt32  res2:6;
        RBus_UInt32  dimming_duty_update:1;
        RBus_UInt32  irq_en:1;
    };
}lg_m_plus_m_plus_dimming_duty_read_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  testrwm_0:1;
        RBus_UInt32  testrwm_1:1;
        RBus_UInt32  testrwm_2:1;
        RBus_UInt32  testrwm_3:1;
        RBus_UInt32  testrwm_4:1;
        RBus_UInt32  testrwm_5:1;
        RBus_UInt32  testrwm_6:1;
        RBus_UInt32  testrwm_7:1;
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  bist_fail_1:1;
        RBus_UInt32  bist_fail_2:1;
        RBus_UInt32  bist_fail_3:1;
        RBus_UInt32  bist_fail_4:1;
        RBus_UInt32  bist_fail_5:1;
        RBus_UInt32  bist_fail_6:1;
        RBus_UInt32  bist_fail_7:1;
        RBus_UInt32  drf_bist_fail_0:1;
        RBus_UInt32  drf_bist_fail_1:1;
        RBus_UInt32  drf_bist_fail_2:1;
        RBus_UInt32  drf_bist_fail_3:1;
        RBus_UInt32  drf_bist_fail_4:1;
        RBus_UInt32  drf_bist_fail_5:1;
        RBus_UInt32  drf_bist_fail_6:1;
        RBus_UInt32  drf_bist_fail_7:1;
        RBus_UInt32  rme_0:1;
        RBus_UInt32  rme_1:1;
        RBus_UInt32  rme_2:1;
        RBus_UInt32  rme_3:1;
        RBus_UInt32  rme_4:1;
        RBus_UInt32  rme_5:1;
        RBus_UInt32  rme_6:1;
        RBus_UInt32  rme_7:1;
    };
}lg_m_plus_m_plus_tp_bist0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_0:4;
        RBus_UInt32  rm_1:4;
        RBus_UInt32  rm_2:4;
        RBus_UInt32  rm_3:4;
        RBus_UInt32  rm_4:4;
        RBus_UInt32  rm_5:4;
        RBus_UInt32  rm_6:4;
        RBus_UInt32  rm_7:4;
    };
}lg_m_plus_m_plus_tp_bist1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  testrwm_8:1;
        RBus_UInt32  testrwm_9:1;
        RBus_UInt32  testrwm_10:1;
        RBus_UInt32  testrwm_11:1;
        RBus_UInt32  testrwm_12:1;
        RBus_UInt32  testrwm_13:1;
        RBus_UInt32  testrwm_14:1;
        RBus_UInt32  testrwm_15:1;
        RBus_UInt32  bist_fail_8:1;
        RBus_UInt32  bist_fail_9:1;
        RBus_UInt32  bist_fail_10:1;
        RBus_UInt32  bist_fail_11:1;
        RBus_UInt32  bist_fail_12:1;
        RBus_UInt32  bist_fail_13:1;
        RBus_UInt32  bist_fail_14:1;
        RBus_UInt32  bist_fail_15:1;
        RBus_UInt32  drf_bist_fail_8:1;
        RBus_UInt32  drf_bist_fail_9:1;
        RBus_UInt32  drf_bist_fail_10:1;
        RBus_UInt32  drf_bist_fail_11:1;
        RBus_UInt32  drf_bist_fail_12:1;
        RBus_UInt32  drf_bist_fail_13:1;
        RBus_UInt32  drf_bist_fail_14:1;
        RBus_UInt32  drf_bist_fail_15:1;
        RBus_UInt32  rme_8:1;
        RBus_UInt32  rme_9:1;
        RBus_UInt32  rme_10:1;
        RBus_UInt32  rme_11:1;
        RBus_UInt32  rme_12:1;
        RBus_UInt32  rme_13:1;
        RBus_UInt32  rme_14:1;
        RBus_UInt32  rme_15:1;
    };
}lg_m_plus_m_plus_tp_bist2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_8:4;
        RBus_UInt32  rm_9:4;
        RBus_UInt32  rm_10:4;
        RBus_UInt32  rm_11:4;
        RBus_UInt32  rm_12:4;
        RBus_UInt32  rm_13:4;
        RBus_UInt32  rm_14:4;
        RBus_UInt32  rm_15:4;
    };
}lg_m_plus_m_plus_tp_bist3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  testrwm_16:1;
        RBus_UInt32  testrwm_17:1;
        RBus_UInt32  testrwm_18:1;
        RBus_UInt32  testrwm_19:1;
        RBus_UInt32  testrwm_20:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  bist_fail_16:1;
        RBus_UInt32  bist_fail_17:1;
        RBus_UInt32  bist_fail_18:1;
        RBus_UInt32  bist_fail_19:1;
        RBus_UInt32  bist_fail_20:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  drf_bist_fail_16:1;
        RBus_UInt32  drf_bist_fail_17:1;
        RBus_UInt32  drf_bist_fail_18:1;
        RBus_UInt32  drf_bist_fail_19:1;
        RBus_UInt32  drf_bist_fail_20:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  rme_16:1;
        RBus_UInt32  rme_17:1;
        RBus_UInt32  rme_18:1;
        RBus_UInt32  rme_19:1;
        RBus_UInt32  rme_20:1;
        RBus_UInt32  res4:3;
    };
}lg_m_plus_m_plus_tp_bist4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_16:4;
        RBus_UInt32  rm_17:4;
        RBus_UInt32  rm_18:4;
        RBus_UInt32  rm_19:4;
        RBus_UInt32  rm_20:4;
        RBus_UInt32  res1:11;
        RBus_UInt32  ls:1;
    };
}lg_m_plus_m_plus_tp_bist5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test1_0:1;
        RBus_UInt32  test1_1:1;
        RBus_UInt32  test1_2:1;
        RBus_UInt32  test1_3:1;
        RBus_UInt32  test1_4:1;
        RBus_UInt32  test1_5:1;
        RBus_UInt32  test1_6:1;
        RBus_UInt32  test1_7:1;
        RBus_UInt32  test1_8:1;
        RBus_UInt32  test1_9:1;
        RBus_UInt32  test1_10:1;
        RBus_UInt32  test1_11:1;
        RBus_UInt32  test1_12:1;
        RBus_UInt32  test1_13:1;
        RBus_UInt32  test1_14:1;
        RBus_UInt32  test1_15:1;
        RBus_UInt32  test1_16:1;
        RBus_UInt32  test1_17:1;
        RBus_UInt32  test1_18:1;
        RBus_UInt32  test1_19:1;
        RBus_UInt32  test1_20:1;
        RBus_UInt32  res1:11;
    };
}lg_m_plus_m_plus_tp_bist6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_b1:4;
        RBus_UInt32  rm_g1:4;
        RBus_UInt32  rm_r1:4;
        RBus_UInt32  rm_b2:4;
        RBus_UInt32  rm_g2:4;
        RBus_UInt32  rm_r2:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  rme_b1:1;
        RBus_UInt32  rme_g1:1;
        RBus_UInt32  rme_r1:1;
        RBus_UInt32  rme_b2:1;
        RBus_UInt32  rme_g2:1;
        RBus_UInt32  rme_r2:1;
        RBus_UInt32  res2:1;
    };
}lg_m_plus_m_plus_rom_bist0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_2_b1:4;
        RBus_UInt32  rm_2_g1:4;
        RBus_UInt32  rm_2_r1:4;
        RBus_UInt32  rm_2_b2:4;
        RBus_UInt32  rm_2_g2:4;
        RBus_UInt32  rm_2_r2:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  rme_2_b1:1;
        RBus_UInt32  rme_2_g1:1;
        RBus_UInt32  rme_2_r1:1;
        RBus_UInt32  rme_2_b2:1;
        RBus_UInt32  rme_2_g2:1;
        RBus_UInt32  rme_2_r2:1;
        RBus_UInt32  res2:1;
    };
}lg_m_plus_m_plus_rom_bist1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test2_0:1;
        RBus_UInt32  test2_1:1;
        RBus_UInt32  test2_2:1;
        RBus_UInt32  test2_3:1;
        RBus_UInt32  test2_4:1;
        RBus_UInt32  test2_5:1;
        RBus_UInt32  test2_6:1;
        RBus_UInt32  test2_7:1;
        RBus_UInt32  test2_8:1;
        RBus_UInt32  test2_9:1;
        RBus_UInt32  test2_10:1;
        RBus_UInt32  test2_11:1;
        RBus_UInt32  res1:20;
    };
}lg_m_plus_m_plus_rom_bist2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg03:8;
        RBus_UInt32  wpr_reg02:8;
        RBus_UInt32  wpr_reg01:8;
        RBus_UInt32  wpr_reg00:8;
    };
}lg_m_plus_m_plus_reg000_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg07:8;
        RBus_UInt32  wpr_reg06:8;
        RBus_UInt32  wpr_reg05:8;
        RBus_UInt32  wpr_reg04:8;
    };
}lg_m_plus_m_plus_reg004_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg0b:8;
        RBus_UInt32  wpr_reg0a:8;
        RBus_UInt32  wpr_reg09:8;
        RBus_UInt32  wpr_reg08:8;
    };
}lg_m_plus_m_plus_reg008_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg0f:8;
        RBus_UInt32  wpr_reg0e:8;
        RBus_UInt32  wpr_reg0d:8;
        RBus_UInt32  wpr_reg0c:8;
    };
}lg_m_plus_m_plus_reg00c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg13:8;
        RBus_UInt32  wpr_reg12:8;
        RBus_UInt32  wpr_reg11:8;
        RBus_UInt32  wpr_reg10:8;
    };
}lg_m_plus_m_plus_reg010_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg17:8;
        RBus_UInt32  wpr_reg16:8;
        RBus_UInt32  wpr_reg15:8;
        RBus_UInt32  wpr_reg14:8;
    };
}lg_m_plus_m_plus_reg014_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1b:8;
        RBus_UInt32  wpr_reg1a:8;
        RBus_UInt32  wpr_reg19:8;
        RBus_UInt32  wpr_reg18:8;
    };
}lg_m_plus_m_plus_reg018_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1f:8;
        RBus_UInt32  wpr_reg1e:8;
        RBus_UInt32  wpr_reg1d:8;
        RBus_UInt32  wpr_reg1c:8;
    };
}lg_m_plus_m_plus_reg01c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg23:8;
        RBus_UInt32  wpr_reg22:8;
        RBus_UInt32  wpr_reg21:8;
        RBus_UInt32  wpr_reg20:8;
    };
}lg_m_plus_m_plus_reg020_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg27:8;
        RBus_UInt32  wpr_reg26:8;
        RBus_UInt32  wpr_reg25:8;
        RBus_UInt32  wpr_reg24:8;
    };
}lg_m_plus_m_plus_reg024_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2b:8;
        RBus_UInt32  wpr_reg2a:8;
        RBus_UInt32  wpr_reg29:8;
        RBus_UInt32  wpr_reg28:8;
    };
}lg_m_plus_m_plus_reg028_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2f:8;
        RBus_UInt32  wpr_reg2e:8;
        RBus_UInt32  wpr_reg2d:8;
        RBus_UInt32  wpr_reg2c:8;
    };
}lg_m_plus_m_plus_reg02c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg33:8;
        RBus_UInt32  wpr_reg32:8;
        RBus_UInt32  wpr_reg31:8;
        RBus_UInt32  wpr_reg30:8;
    };
}lg_m_plus_m_plus_reg030_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg37:8;
        RBus_UInt32  wpr_reg36:8;
        RBus_UInt32  wpr_reg35:8;
        RBus_UInt32  wpr_reg34:8;
    };
}lg_m_plus_m_plus_reg034_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3b:8;
        RBus_UInt32  wpr_reg3a:8;
        RBus_UInt32  wpr_reg39:8;
        RBus_UInt32  wpr_reg38:8;
    };
}lg_m_plus_m_plus_reg038_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3f:8;
        RBus_UInt32  wpr_reg3e:8;
        RBus_UInt32  wpr_reg3d:8;
        RBus_UInt32  wpr_reg3c:8;
    };
}lg_m_plus_m_plus_reg03c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg43:8;
        RBus_UInt32  wpr_reg42:8;
        RBus_UInt32  wpr_reg41:8;
        RBus_UInt32  wpr_reg40:8;
    };
}lg_m_plus_m_plus_reg040_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg47:8;
        RBus_UInt32  wpr_reg46:8;
        RBus_UInt32  wpr_reg45:8;
        RBus_UInt32  wpr_reg44:8;
    };
}lg_m_plus_m_plus_reg044_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg4b:8;
        RBus_UInt32  wpr_reg4a:8;
        RBus_UInt32  wpr_reg49:8;
        RBus_UInt32  wpr_reg48:8;
    };
}lg_m_plus_m_plus_reg048_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg4f:8;
        RBus_UInt32  wpr_reg4e:8;
        RBus_UInt32  wpr_reg4d:8;
        RBus_UInt32  wpr_reg4c:8;
    };
}lg_m_plus_m_plus_reg04c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg53:8;
        RBus_UInt32  wpr_reg52:8;
        RBus_UInt32  wpr_reg51:8;
        RBus_UInt32  wpr_reg50:8;
    };
}lg_m_plus_m_plus_reg050_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg57:8;
        RBus_UInt32  wpr_reg56:8;
        RBus_UInt32  wpr_reg55:8;
        RBus_UInt32  wpr_reg54:8;
    };
}lg_m_plus_m_plus_reg054_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg5b:8;
        RBus_UInt32  wpr_reg5a:8;
        RBus_UInt32  wpr_reg59:8;
        RBus_UInt32  wpr_reg58:8;
    };
}lg_m_plus_m_plus_reg058_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg5f:8;
        RBus_UInt32  wpr_reg5e:8;
        RBus_UInt32  wpr_reg5d:8;
        RBus_UInt32  wpr_reg5c:8;
    };
}lg_m_plus_m_plus_reg05c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg63:8;
        RBus_UInt32  wpr_reg62:8;
        RBus_UInt32  wpr_reg61:8;
        RBus_UInt32  wpr_reg60:8;
    };
}lg_m_plus_m_plus_reg060_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg67:8;
        RBus_UInt32  wpr_reg66:8;
        RBus_UInt32  wpr_reg65:8;
        RBus_UInt32  wpr_reg64:8;
    };
}lg_m_plus_m_plus_reg064_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg6b:8;
        RBus_UInt32  wpr_reg6a:8;
        RBus_UInt32  wpr_reg69:8;
        RBus_UInt32  wpr_reg68:8;
    };
}lg_m_plus_m_plus_reg068_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg6f:8;
        RBus_UInt32  wpr_reg6e:8;
        RBus_UInt32  wpr_reg6d:8;
        RBus_UInt32  wpr_reg6c:8;
    };
}lg_m_plus_m_plus_reg06c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg73:8;
        RBus_UInt32  wpr_reg72:8;
        RBus_UInt32  wpr_reg71:8;
        RBus_UInt32  wpr_reg70:8;
    };
}lg_m_plus_m_plus_reg070_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg77:8;
        RBus_UInt32  wpr_reg76:8;
        RBus_UInt32  wpr_reg75:8;
        RBus_UInt32  wpr_reg74:8;
    };
}lg_m_plus_m_plus_reg074_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg7b:8;
        RBus_UInt32  wpr_reg7a:8;
        RBus_UInt32  wpr_reg79:8;
        RBus_UInt32  wpr_reg78:8;
    };
}lg_m_plus_m_plus_reg078_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg7f:8;
        RBus_UInt32  wpr_reg7e:8;
        RBus_UInt32  wpr_reg7d:8;
        RBus_UInt32  wpr_reg7c:8;
    };
}lg_m_plus_m_plus_reg07c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg83:8;
        RBus_UInt32  wpr_reg82:8;
        RBus_UInt32  wpr_reg81:8;
        RBus_UInt32  wpr_reg80:8;
    };
}lg_m_plus_m_plus_reg080_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg87:8;
        RBus_UInt32  wpr_reg86:8;
        RBus_UInt32  wpr_reg85:8;
        RBus_UInt32  wpr_reg84:8;
    };
}lg_m_plus_m_plus_reg084_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg8b:8;
        RBus_UInt32  wpr_reg8a:8;
        RBus_UInt32  wpr_reg89:8;
        RBus_UInt32  wpr_reg88:8;
    };
}lg_m_plus_m_plus_reg088_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg8f:8;
        RBus_UInt32  wpr_reg8e:8;
        RBus_UInt32  wpr_reg8d:8;
        RBus_UInt32  wpr_reg8c:8;
    };
}lg_m_plus_m_plus_reg08c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg93:8;
        RBus_UInt32  wpr_reg92:8;
        RBus_UInt32  wpr_reg91:8;
        RBus_UInt32  wpr_reg90:8;
    };
}lg_m_plus_m_plus_reg090_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg97:8;
        RBus_UInt32  wpr_reg96:8;
        RBus_UInt32  wpr_reg95:8;
        RBus_UInt32  wpr_reg94:8;
    };
}lg_m_plus_m_plus_reg094_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg9b:8;
        RBus_UInt32  wpr_reg9a:8;
        RBus_UInt32  wpr_reg99:8;
        RBus_UInt32  wpr_reg98:8;
    };
}lg_m_plus_m_plus_reg098_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg9f:8;
        RBus_UInt32  wpr_reg9e:8;
        RBus_UInt32  wpr_reg9d:8;
        RBus_UInt32  wpr_reg9c:8;
    };
}lg_m_plus_m_plus_reg09c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_rega3:8;
        RBus_UInt32  wpr_rega2:8;
        RBus_UInt32  wpr_rega1:8;
        RBus_UInt32  wpr_rega0:8;
    };
}lg_m_plus_m_plus_reg0a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_rega7:8;
        RBus_UInt32  wpr_rega6:8;
        RBus_UInt32  wpr_rega5:8;
        RBus_UInt32  wpr_rega4:8;
    };
}lg_m_plus_m_plus_reg0a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regab:8;
        RBus_UInt32  wpr_regaa:8;
        RBus_UInt32  wpr_rega9:8;
        RBus_UInt32  wpr_rega8:8;
    };
}lg_m_plus_m_plus_reg0a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regaf:8;
        RBus_UInt32  wpr_regae:8;
        RBus_UInt32  wpr_regad:8;
        RBus_UInt32  wpr_regac:8;
    };
}lg_m_plus_m_plus_reg0ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regb3:8;
        RBus_UInt32  wpr_regb2:8;
        RBus_UInt32  wpr_regb1:8;
        RBus_UInt32  wpr_regb0:8;
    };
}lg_m_plus_m_plus_reg0b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regb7:8;
        RBus_UInt32  wpr_regb6:8;
        RBus_UInt32  wpr_regb5:8;
        RBus_UInt32  wpr_regb4:8;
    };
}lg_m_plus_m_plus_reg0b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regbb:8;
        RBus_UInt32  wpr_regba:8;
        RBus_UInt32  wpr_regb9:8;
        RBus_UInt32  wpr_regb8:8;
    };
}lg_m_plus_m_plus_reg0b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regbf:8;
        RBus_UInt32  wpr_regbe:8;
        RBus_UInt32  wpr_regbd:8;
        RBus_UInt32  wpr_regbc:8;
    };
}lg_m_plus_m_plus_reg0bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regc3:8;
        RBus_UInt32  wpr_regc2:8;
        RBus_UInt32  wpr_regc1:8;
        RBus_UInt32  wpr_regc0:8;
    };
}lg_m_plus_m_plus_reg0c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regc7:8;
        RBus_UInt32  wpr_regc6:8;
        RBus_UInt32  wpr_regc5:8;
        RBus_UInt32  wpr_regc4:8;
    };
}lg_m_plus_m_plus_reg0c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regcb:8;
        RBus_UInt32  wpr_regca:8;
        RBus_UInt32  wpr_regc9:8;
        RBus_UInt32  wpr_regc8:8;
    };
}lg_m_plus_m_plus_reg0c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regcf:8;
        RBus_UInt32  wpr_regce:8;
        RBus_UInt32  wpr_regcd:8;
        RBus_UInt32  wpr_regcc:8;
    };
}lg_m_plus_m_plus_reg0cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regd3:8;
        RBus_UInt32  wpr_regd2:8;
        RBus_UInt32  wpr_regd1:8;
        RBus_UInt32  wpr_regd0:8;
    };
}lg_m_plus_m_plus_reg0d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regd7:8;
        RBus_UInt32  wpr_regd6:8;
        RBus_UInt32  wpr_regd5:8;
        RBus_UInt32  wpr_regd4:8;
    };
}lg_m_plus_m_plus_reg0d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regdb:8;
        RBus_UInt32  wpr_regda:8;
        RBus_UInt32  wpr_regd9:8;
        RBus_UInt32  wpr_regd8:8;
    };
}lg_m_plus_m_plus_reg0d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regdf:8;
        RBus_UInt32  wpr_regde:8;
        RBus_UInt32  wpr_regdd:8;
        RBus_UInt32  wpr_regdc:8;
    };
}lg_m_plus_m_plus_reg0dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_rege3:8;
        RBus_UInt32  wpr_rege2:8;
        RBus_UInt32  wpr_rege1:8;
        RBus_UInt32  wpr_rege0:8;
    };
}lg_m_plus_m_plus_reg0e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_rege7:8;
        RBus_UInt32  wpr_rege6:8;
        RBus_UInt32  wpr_rege5:8;
        RBus_UInt32  wpr_rege4:8;
    };
}lg_m_plus_m_plus_reg0e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regeb:8;
        RBus_UInt32  wpr_regea:8;
        RBus_UInt32  wpr_rege9:8;
        RBus_UInt32  wpr_rege8:8;
    };
}lg_m_plus_m_plus_reg0e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regef:8;
        RBus_UInt32  wpr_regee:8;
        RBus_UInt32  wpr_reged:8;
        RBus_UInt32  wpr_regec:8;
    };
}lg_m_plus_m_plus_reg0ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regf3:8;
        RBus_UInt32  wpr_regf2:8;
        RBus_UInt32  wpr_regf1:8;
        RBus_UInt32  wpr_regf0:8;
    };
}lg_m_plus_m_plus_reg0f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regf7:8;
        RBus_UInt32  wpr_regf6:8;
        RBus_UInt32  wpr_regf5:8;
        RBus_UInt32  wpr_regf4:8;
    };
}lg_m_plus_m_plus_reg0f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regfb:8;
        RBus_UInt32  wpr_regfa:8;
        RBus_UInt32  wpr_regf9:8;
        RBus_UInt32  wpr_regf8:8;
    };
}lg_m_plus_m_plus_reg0f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_regff:8;
        RBus_UInt32  wpr_regfe:8;
        RBus_UInt32  wpr_regfd:8;
        RBus_UInt32  wpr_regfc:8;
    };
}lg_m_plus_m_plus_reg0fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg103:8;
        RBus_UInt32  wpr_reg102:8;
        RBus_UInt32  wpr_reg101:8;
        RBus_UInt32  wpr_reg100:8;
    };
}lg_m_plus_m_plus_reg100_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg107:8;
        RBus_UInt32  wpr_reg106:8;
        RBus_UInt32  wpr_reg105:8;
        RBus_UInt32  wpr_reg104:8;
    };
}lg_m_plus_m_plus_reg104_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg10b:8;
        RBus_UInt32  wpr_reg10a:8;
        RBus_UInt32  wpr_reg109:8;
        RBus_UInt32  wpr_reg108:8;
    };
}lg_m_plus_m_plus_reg108_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg10f:8;
        RBus_UInt32  wpr_reg10e:8;
        RBus_UInt32  wpr_reg10d:8;
        RBus_UInt32  wpr_reg10c:8;
    };
}lg_m_plus_m_plus_reg10c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg113:8;
        RBus_UInt32  wpr_reg112:8;
        RBus_UInt32  wpr_reg111:8;
        RBus_UInt32  wpr_reg110:8;
    };
}lg_m_plus_m_plus_reg110_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg117:8;
        RBus_UInt32  wpr_reg116:8;
        RBus_UInt32  wpr_reg115:8;
        RBus_UInt32  wpr_reg114:8;
    };
}lg_m_plus_m_plus_reg114_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg11b:8;
        RBus_UInt32  wpr_reg11a:8;
        RBus_UInt32  wpr_reg119:8;
        RBus_UInt32  wpr_reg118:8;
    };
}lg_m_plus_m_plus_reg118_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg11f:8;
        RBus_UInt32  wpr_reg11e:8;
        RBus_UInt32  wpr_reg11d:8;
        RBus_UInt32  wpr_reg11c:8;
    };
}lg_m_plus_m_plus_reg11c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg123:8;
        RBus_UInt32  wpr_reg122:8;
        RBus_UInt32  wpr_reg121:8;
        RBus_UInt32  wpr_reg120:8;
    };
}lg_m_plus_m_plus_reg120_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg127:8;
        RBus_UInt32  wpr_reg126:8;
        RBus_UInt32  wpr_reg125:8;
        RBus_UInt32  wpr_reg124:8;
    };
}lg_m_plus_m_plus_reg124_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg12b:8;
        RBus_UInt32  wpr_reg12a:8;
        RBus_UInt32  wpr_reg129:8;
        RBus_UInt32  wpr_reg128:8;
    };
}lg_m_plus_m_plus_reg128_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg12f:8;
        RBus_UInt32  wpr_reg12e:8;
        RBus_UInt32  wpr_reg12d:8;
        RBus_UInt32  wpr_reg12c:8;
    };
}lg_m_plus_m_plus_reg12c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg133:8;
        RBus_UInt32  wpr_reg132:8;
        RBus_UInt32  wpr_reg131:8;
        RBus_UInt32  wpr_reg130:8;
    };
}lg_m_plus_m_plus_reg130_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg137:8;
        RBus_UInt32  wpr_reg136:8;
        RBus_UInt32  wpr_reg135:8;
        RBus_UInt32  wpr_reg134:8;
    };
}lg_m_plus_m_plus_reg134_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg13b:8;
        RBus_UInt32  wpr_reg13a:8;
        RBus_UInt32  wpr_reg139:8;
        RBus_UInt32  wpr_reg138:8;
    };
}lg_m_plus_m_plus_reg138_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg13f:8;
        RBus_UInt32  wpr_reg13e:8;
        RBus_UInt32  wpr_reg13d:8;
        RBus_UInt32  wpr_reg13c:8;
    };
}lg_m_plus_m_plus_reg13c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg143:8;
        RBus_UInt32  wpr_reg142:8;
        RBus_UInt32  wpr_reg141:8;
        RBus_UInt32  wpr_reg140:8;
    };
}lg_m_plus_m_plus_reg140_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg147:8;
        RBus_UInt32  wpr_reg146:8;
        RBus_UInt32  wpr_reg145:8;
        RBus_UInt32  wpr_reg144:8;
    };
}lg_m_plus_m_plus_reg144_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg14b:8;
        RBus_UInt32  wpr_reg14a:8;
        RBus_UInt32  wpr_reg149:8;
        RBus_UInt32  wpr_reg148:8;
    };
}lg_m_plus_m_plus_reg148_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg14f:8;
        RBus_UInt32  wpr_reg14e:8;
        RBus_UInt32  wpr_reg14d:8;
        RBus_UInt32  wpr_reg14c:8;
    };
}lg_m_plus_m_plus_reg14c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg153:8;
        RBus_UInt32  wpr_reg152:8;
        RBus_UInt32  wpr_reg151:8;
        RBus_UInt32  wpr_reg150:8;
    };
}lg_m_plus_m_plus_reg150_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg157:8;
        RBus_UInt32  wpr_reg156:8;
        RBus_UInt32  wpr_reg155:8;
        RBus_UInt32  wpr_reg154:8;
    };
}lg_m_plus_m_plus_reg154_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg15b:8;
        RBus_UInt32  wpr_reg15a:8;
        RBus_UInt32  wpr_reg159:8;
        RBus_UInt32  wpr_reg158:8;
    };
}lg_m_plus_m_plus_reg158_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg15f:8;
        RBus_UInt32  wpr_reg15e:8;
        RBus_UInt32  wpr_reg15d:8;
        RBus_UInt32  wpr_reg15c:8;
    };
}lg_m_plus_m_plus_reg15c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg163:8;
        RBus_UInt32  wpr_reg162:8;
        RBus_UInt32  wpr_reg161:8;
        RBus_UInt32  wpr_reg160:8;
    };
}lg_m_plus_m_plus_reg160_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg167:8;
        RBus_UInt32  wpr_reg166:8;
        RBus_UInt32  wpr_reg165:8;
        RBus_UInt32  wpr_reg164:8;
    };
}lg_m_plus_m_plus_reg164_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg16b:8;
        RBus_UInt32  wpr_reg16a:8;
        RBus_UInt32  wpr_reg169:8;
        RBus_UInt32  wpr_reg168:8;
    };
}lg_m_plus_m_plus_reg168_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg16f:8;
        RBus_UInt32  wpr_reg16e:8;
        RBus_UInt32  wpr_reg16d:8;
        RBus_UInt32  wpr_reg16c:8;
    };
}lg_m_plus_m_plus_reg16c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg173:8;
        RBus_UInt32  wpr_reg172:8;
        RBus_UInt32  wpr_reg171:8;
        RBus_UInt32  wpr_reg170:8;
    };
}lg_m_plus_m_plus_reg170_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg177:8;
        RBus_UInt32  wpr_reg176:8;
        RBus_UInt32  wpr_reg175:8;
        RBus_UInt32  wpr_reg174:8;
    };
}lg_m_plus_m_plus_reg174_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg17b:8;
        RBus_UInt32  wpr_reg17a:8;
        RBus_UInt32  wpr_reg179:8;
        RBus_UInt32  wpr_reg178:8;
    };
}lg_m_plus_m_plus_reg178_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg17f:8;
        RBus_UInt32  wpr_reg17e:8;
        RBus_UInt32  wpr_reg17d:8;
        RBus_UInt32  wpr_reg17c:8;
    };
}lg_m_plus_m_plus_reg17c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg183:8;
        RBus_UInt32  wpr_reg182:8;
        RBus_UInt32  wpr_reg181:8;
        RBus_UInt32  wpr_reg180:8;
    };
}lg_m_plus_m_plus_reg180_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg187:8;
        RBus_UInt32  wpr_reg186:8;
        RBus_UInt32  wpr_reg185:8;
        RBus_UInt32  wpr_reg184:8;
    };
}lg_m_plus_m_plus_reg184_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg18b:8;
        RBus_UInt32  wpr_reg18a:8;
        RBus_UInt32  wpr_reg189:8;
        RBus_UInt32  wpr_reg188:8;
    };
}lg_m_plus_m_plus_reg188_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg18f:8;
        RBus_UInt32  wpr_reg18e:8;
        RBus_UInt32  wpr_reg18d:8;
        RBus_UInt32  wpr_reg18c:8;
    };
}lg_m_plus_m_plus_reg18c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg193:8;
        RBus_UInt32  wpr_reg192:8;
        RBus_UInt32  wpr_reg191:8;
        RBus_UInt32  wpr_reg190:8;
    };
}lg_m_plus_m_plus_reg190_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg197:8;
        RBus_UInt32  wpr_reg196:8;
        RBus_UInt32  wpr_reg195:8;
        RBus_UInt32  wpr_reg194:8;
    };
}lg_m_plus_m_plus_reg194_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg19b:8;
        RBus_UInt32  wpr_reg19a:8;
        RBus_UInt32  wpr_reg199:8;
        RBus_UInt32  wpr_reg198:8;
    };
}lg_m_plus_m_plus_reg198_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg19f:8;
        RBus_UInt32  wpr_reg19e:8;
        RBus_UInt32  wpr_reg19d:8;
        RBus_UInt32  wpr_reg19c:8;
    };
}lg_m_plus_m_plus_reg19c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1a3:8;
        RBus_UInt32  wpr_reg1a2:8;
        RBus_UInt32  wpr_reg1a1:8;
        RBus_UInt32  wpr_reg1a0:8;
    };
}lg_m_plus_m_plus_reg1a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1a7:8;
        RBus_UInt32  wpr_reg1a6:8;
        RBus_UInt32  wpr_reg1a5:8;
        RBus_UInt32  wpr_reg1a4:8;
    };
}lg_m_plus_m_plus_reg1a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1ab:8;
        RBus_UInt32  wpr_reg1aa:8;
        RBus_UInt32  wpr_reg1a9:8;
        RBus_UInt32  wpr_reg1a8:8;
    };
}lg_m_plus_m_plus_reg1a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1af:8;
        RBus_UInt32  wpr_reg1ae:8;
        RBus_UInt32  wpr_reg1ad:8;
        RBus_UInt32  wpr_reg1ac:8;
    };
}lg_m_plus_m_plus_reg1ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1b3:8;
        RBus_UInt32  wpr_reg1b2:8;
        RBus_UInt32  wpr_reg1b1:8;
        RBus_UInt32  wpr_reg1b0:8;
    };
}lg_m_plus_m_plus_reg1b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1b7:8;
        RBus_UInt32  wpr_reg1b6:8;
        RBus_UInt32  wpr_reg1b5:8;
        RBus_UInt32  wpr_reg1b4:8;
    };
}lg_m_plus_m_plus_reg1b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1bb:8;
        RBus_UInt32  wpr_reg1ba:8;
        RBus_UInt32  wpr_reg1b9:8;
        RBus_UInt32  wpr_reg1b8:8;
    };
}lg_m_plus_m_plus_reg1b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1bf:8;
        RBus_UInt32  wpr_reg1be:8;
        RBus_UInt32  wpr_reg1bd:8;
        RBus_UInt32  wpr_reg1bc:8;
    };
}lg_m_plus_m_plus_reg1bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1c3:8;
        RBus_UInt32  wpr_reg1c2:8;
        RBus_UInt32  wpr_reg1c1:8;
        RBus_UInt32  wpr_reg1c0:8;
    };
}lg_m_plus_m_plus_reg1c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1c7:8;
        RBus_UInt32  wpr_reg1c6:8;
        RBus_UInt32  wpr_reg1c5:8;
        RBus_UInt32  wpr_reg1c4:8;
    };
}lg_m_plus_m_plus_reg1c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1cb:8;
        RBus_UInt32  wpr_reg1ca:8;
        RBus_UInt32  wpr_reg1c9:8;
        RBus_UInt32  wpr_reg1c8:8;
    };
}lg_m_plus_m_plus_reg1c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1cf:8;
        RBus_UInt32  wpr_reg1ce:8;
        RBus_UInt32  wpr_reg1cd:8;
        RBus_UInt32  wpr_reg1cc:8;
    };
}lg_m_plus_m_plus_reg1cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1d3:8;
        RBus_UInt32  wpr_reg1d2:8;
        RBus_UInt32  wpr_reg1d1:8;
        RBus_UInt32  wpr_reg1d0:8;
    };
}lg_m_plus_m_plus_reg1d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1d7:8;
        RBus_UInt32  wpr_reg1d6:8;
        RBus_UInt32  wpr_reg1d5:8;
        RBus_UInt32  wpr_reg1d4:8;
    };
}lg_m_plus_m_plus_reg1d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1db:8;
        RBus_UInt32  wpr_reg1da:8;
        RBus_UInt32  wpr_reg1d9:8;
        RBus_UInt32  wpr_reg1d8:8;
    };
}lg_m_plus_m_plus_reg1d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1df:8;
        RBus_UInt32  wpr_reg1de:8;
        RBus_UInt32  wpr_reg1dd:8;
        RBus_UInt32  wpr_reg1dc:8;
    };
}lg_m_plus_m_plus_reg1dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1e3:8;
        RBus_UInt32  wpr_reg1e2:8;
        RBus_UInt32  wpr_reg1e1:8;
        RBus_UInt32  wpr_reg1e0:8;
    };
}lg_m_plus_m_plus_reg1e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1e7:8;
        RBus_UInt32  wpr_reg1e6:8;
        RBus_UInt32  wpr_reg1e5:8;
        RBus_UInt32  wpr_reg1e4:8;
    };
}lg_m_plus_m_plus_reg1e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1eb:8;
        RBus_UInt32  wpr_reg1ea:8;
        RBus_UInt32  wpr_reg1e9:8;
        RBus_UInt32  wpr_reg1e8:8;
    };
}lg_m_plus_m_plus_reg1e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1ef:8;
        RBus_UInt32  wpr_reg1ee:8;
        RBus_UInt32  wpr_reg1ed:8;
        RBus_UInt32  wpr_reg1ec:8;
    };
}lg_m_plus_m_plus_reg1ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1f3:8;
        RBus_UInt32  wpr_reg1f2:8;
        RBus_UInt32  wpr_reg1f1:8;
        RBus_UInt32  wpr_reg1f0:8;
    };
}lg_m_plus_m_plus_reg1f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1f7:8;
        RBus_UInt32  wpr_reg1f6:8;
        RBus_UInt32  wpr_reg1f5:8;
        RBus_UInt32  wpr_reg1f4:8;
    };
}lg_m_plus_m_plus_reg1f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1fb:8;
        RBus_UInt32  wpr_reg1fa:8;
        RBus_UInt32  wpr_reg1f9:8;
        RBus_UInt32  wpr_reg1f8:8;
    };
}lg_m_plus_m_plus_reg1f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg1ff:8;
        RBus_UInt32  wpr_reg1fe:8;
        RBus_UInt32  wpr_reg1fd:8;
        RBus_UInt32  wpr_reg1fc:8;
    };
}lg_m_plus_m_plus_reg1fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg203:8;
        RBus_UInt32  wpr_reg202:8;
        RBus_UInt32  wpr_reg201:8;
        RBus_UInt32  wpr_reg200:8;
    };
}lg_m_plus_m_plus_reg200_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg207:8;
        RBus_UInt32  wpr_reg206:8;
        RBus_UInt32  wpr_reg205:8;
        RBus_UInt32  wpr_reg204:8;
    };
}lg_m_plus_m_plus_reg204_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg20b:8;
        RBus_UInt32  wpr_reg20a:8;
        RBus_UInt32  wpr_reg209:8;
        RBus_UInt32  wpr_reg208:8;
    };
}lg_m_plus_m_plus_reg208_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg20f:8;
        RBus_UInt32  wpr_reg20e:8;
        RBus_UInt32  wpr_reg20d:8;
        RBus_UInt32  wpr_reg20c:8;
    };
}lg_m_plus_m_plus_reg20c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg213:8;
        RBus_UInt32  wpr_reg212:8;
        RBus_UInt32  wpr_reg211:8;
        RBus_UInt32  wpr_reg210:8;
    };
}lg_m_plus_m_plus_reg210_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg217:8;
        RBus_UInt32  wpr_reg216:8;
        RBus_UInt32  wpr_reg215:8;
        RBus_UInt32  wpr_reg214:8;
    };
}lg_m_plus_m_plus_reg214_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg21b:8;
        RBus_UInt32  wpr_reg21a:8;
        RBus_UInt32  wpr_reg219:8;
        RBus_UInt32  wpr_reg218:8;
    };
}lg_m_plus_m_plus_reg218_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg21f:8;
        RBus_UInt32  wpr_reg21e:8;
        RBus_UInt32  wpr_reg21d:8;
        RBus_UInt32  wpr_reg21c:8;
    };
}lg_m_plus_m_plus_reg21c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg223:8;
        RBus_UInt32  wpr_reg222:8;
        RBus_UInt32  wpr_reg221:8;
        RBus_UInt32  wpr_reg220:8;
    };
}lg_m_plus_m_plus_reg220_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg227:8;
        RBus_UInt32  wpr_reg226:8;
        RBus_UInt32  wpr_reg225:8;
        RBus_UInt32  wpr_reg224:8;
    };
}lg_m_plus_m_plus_reg224_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg22b:8;
        RBus_UInt32  wpr_reg22a:8;
        RBus_UInt32  wpr_reg229:8;
        RBus_UInt32  wpr_reg228:8;
    };
}lg_m_plus_m_plus_reg228_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg22f:8;
        RBus_UInt32  wpr_reg22e:8;
        RBus_UInt32  wpr_reg22d:8;
        RBus_UInt32  wpr_reg22c:8;
    };
}lg_m_plus_m_plus_reg22c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg233:8;
        RBus_UInt32  wpr_reg232:8;
        RBus_UInt32  wpr_reg231:8;
        RBus_UInt32  wpr_reg230:8;
    };
}lg_m_plus_m_plus_reg230_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg237:8;
        RBus_UInt32  wpr_reg236:8;
        RBus_UInt32  wpr_reg235:8;
        RBus_UInt32  wpr_reg234:8;
    };
}lg_m_plus_m_plus_reg234_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg23b:8;
        RBus_UInt32  wpr_reg23a:8;
        RBus_UInt32  wpr_reg239:8;
        RBus_UInt32  wpr_reg238:8;
    };
}lg_m_plus_m_plus_reg238_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg23f:8;
        RBus_UInt32  wpr_reg23e:8;
        RBus_UInt32  wpr_reg23d:8;
        RBus_UInt32  wpr_reg23c:8;
    };
}lg_m_plus_m_plus_reg23c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg243:8;
        RBus_UInt32  wpr_reg242:8;
        RBus_UInt32  wpr_reg241:8;
        RBus_UInt32  wpr_reg240:8;
    };
}lg_m_plus_m_plus_reg240_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg247:8;
        RBus_UInt32  wpr_reg246:8;
        RBus_UInt32  wpr_reg245:8;
        RBus_UInt32  wpr_reg244:8;
    };
}lg_m_plus_m_plus_reg244_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg24b:8;
        RBus_UInt32  wpr_reg24a:8;
        RBus_UInt32  wpr_reg249:8;
        RBus_UInt32  wpr_reg248:8;
    };
}lg_m_plus_m_plus_reg248_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg24f:8;
        RBus_UInt32  wpr_reg24e:8;
        RBus_UInt32  wpr_reg24d:8;
        RBus_UInt32  wpr_reg24c:8;
    };
}lg_m_plus_m_plus_reg24c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg253:8;
        RBus_UInt32  wpr_reg252:8;
        RBus_UInt32  wpr_reg251:8;
        RBus_UInt32  wpr_reg250:8;
    };
}lg_m_plus_m_plus_reg250_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg257:8;
        RBus_UInt32  wpr_reg256:8;
        RBus_UInt32  wpr_reg255:8;
        RBus_UInt32  wpr_reg254:8;
    };
}lg_m_plus_m_plus_reg254_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg25b:8;
        RBus_UInt32  wpr_reg25a:8;
        RBus_UInt32  wpr_reg259:8;
        RBus_UInt32  wpr_reg258:8;
    };
}lg_m_plus_m_plus_reg258_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg25f:8;
        RBus_UInt32  wpr_reg25e:8;
        RBus_UInt32  wpr_reg25d:8;
        RBus_UInt32  wpr_reg25c:8;
    };
}lg_m_plus_m_plus_reg25c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg263:8;
        RBus_UInt32  wpr_reg262:8;
        RBus_UInt32  wpr_reg261:8;
        RBus_UInt32  wpr_reg260:8;
    };
}lg_m_plus_m_plus_reg260_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg267:8;
        RBus_UInt32  wpr_reg266:8;
        RBus_UInt32  wpr_reg265:8;
        RBus_UInt32  wpr_reg264:8;
    };
}lg_m_plus_m_plus_reg264_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg26b:8;
        RBus_UInt32  wpr_reg26a:8;
        RBus_UInt32  wpr_reg269:8;
        RBus_UInt32  wpr_reg268:8;
    };
}lg_m_plus_m_plus_reg268_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg26f:8;
        RBus_UInt32  wpr_reg26e:8;
        RBus_UInt32  wpr_reg26d:8;
        RBus_UInt32  wpr_reg26c:8;
    };
}lg_m_plus_m_plus_reg26c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg273:8;
        RBus_UInt32  wpr_reg272:8;
        RBus_UInt32  wpr_reg271:8;
        RBus_UInt32  wpr_reg270:8;
    };
}lg_m_plus_m_plus_reg270_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg277:8;
        RBus_UInt32  wpr_reg276:8;
        RBus_UInt32  wpr_reg275:8;
        RBus_UInt32  wpr_reg274:8;
    };
}lg_m_plus_m_plus_reg274_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg27b:8;
        RBus_UInt32  wpr_reg27a:8;
        RBus_UInt32  wpr_reg279:8;
        RBus_UInt32  wpr_reg278:8;
    };
}lg_m_plus_m_plus_reg278_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg27f:8;
        RBus_UInt32  wpr_reg27e:8;
        RBus_UInt32  wpr_reg27d:8;
        RBus_UInt32  wpr_reg27c:8;
    };
}lg_m_plus_m_plus_reg27c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg283:8;
        RBus_UInt32  wpr_reg282:8;
        RBus_UInt32  wpr_reg281:8;
        RBus_UInt32  wpr_reg280:8;
    };
}lg_m_plus_m_plus_reg280_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg287:8;
        RBus_UInt32  wpr_reg286:8;
        RBus_UInt32  wpr_reg285:8;
        RBus_UInt32  wpr_reg284:8;
    };
}lg_m_plus_m_plus_reg284_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg28b:8;
        RBus_UInt32  wpr_reg28a:8;
        RBus_UInt32  wpr_reg289:8;
        RBus_UInt32  wpr_reg288:8;
    };
}lg_m_plus_m_plus_reg288_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg28f:8;
        RBus_UInt32  wpr_reg28e:8;
        RBus_UInt32  wpr_reg28d:8;
        RBus_UInt32  wpr_reg28c:8;
    };
}lg_m_plus_m_plus_reg28c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg293:8;
        RBus_UInt32  wpr_reg292:8;
        RBus_UInt32  wpr_reg291:8;
        RBus_UInt32  wpr_reg290:8;
    };
}lg_m_plus_m_plus_reg290_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg297:8;
        RBus_UInt32  wpr_reg296:8;
        RBus_UInt32  wpr_reg295:8;
        RBus_UInt32  wpr_reg294:8;
    };
}lg_m_plus_m_plus_reg294_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg29b:8;
        RBus_UInt32  wpr_reg29a:8;
        RBus_UInt32  wpr_reg299:8;
        RBus_UInt32  wpr_reg298:8;
    };
}lg_m_plus_m_plus_reg298_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg29f:8;
        RBus_UInt32  wpr_reg29e:8;
        RBus_UInt32  wpr_reg29d:8;
        RBus_UInt32  wpr_reg29c:8;
    };
}lg_m_plus_m_plus_reg29c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2a3:8;
        RBus_UInt32  wpr_reg2a2:8;
        RBus_UInt32  wpr_reg2a1:8;
        RBus_UInt32  wpr_reg2a0:8;
    };
}lg_m_plus_m_plus_reg2a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2a7:8;
        RBus_UInt32  wpr_reg2a6:8;
        RBus_UInt32  wpr_reg2a5:8;
        RBus_UInt32  wpr_reg2a4:8;
    };
}lg_m_plus_m_plus_reg2a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2ab:8;
        RBus_UInt32  wpr_reg2aa:8;
        RBus_UInt32  wpr_reg2a9:8;
        RBus_UInt32  wpr_reg2a8:8;
    };
}lg_m_plus_m_plus_reg2a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2af:8;
        RBus_UInt32  wpr_reg2ae:8;
        RBus_UInt32  wpr_reg2ad:8;
        RBus_UInt32  wpr_reg2ac:8;
    };
}lg_m_plus_m_plus_reg2ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2b3:8;
        RBus_UInt32  wpr_reg2b2:8;
        RBus_UInt32  wpr_reg2b1:8;
        RBus_UInt32  wpr_reg2b0:8;
    };
}lg_m_plus_m_plus_reg2b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2b7:8;
        RBus_UInt32  wpr_reg2b6:8;
        RBus_UInt32  wpr_reg2b5:8;
        RBus_UInt32  wpr_reg2b4:8;
    };
}lg_m_plus_m_plus_reg2b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2bb:8;
        RBus_UInt32  wpr_reg2ba:8;
        RBus_UInt32  wpr_reg2b9:8;
        RBus_UInt32  wpr_reg2b8:8;
    };
}lg_m_plus_m_plus_reg2b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2bf:8;
        RBus_UInt32  wpr_reg2be:8;
        RBus_UInt32  wpr_reg2bd:8;
        RBus_UInt32  wpr_reg2bc:8;
    };
}lg_m_plus_m_plus_reg2bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2c3:8;
        RBus_UInt32  wpr_reg2c2:8;
        RBus_UInt32  wpr_reg2c1:8;
        RBus_UInt32  wpr_reg2c0:8;
    };
}lg_m_plus_m_plus_reg2c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2c7:8;
        RBus_UInt32  wpr_reg2c6:8;
        RBus_UInt32  wpr_reg2c5:8;
        RBus_UInt32  wpr_reg2c4:8;
    };
}lg_m_plus_m_plus_reg2c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2cb:8;
        RBus_UInt32  wpr_reg2ca:8;
        RBus_UInt32  wpr_reg2c9:8;
        RBus_UInt32  wpr_reg2c8:8;
    };
}lg_m_plus_m_plus_reg2c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2cf:8;
        RBus_UInt32  wpr_reg2ce:8;
        RBus_UInt32  wpr_reg2cd:8;
        RBus_UInt32  wpr_reg2cc:8;
    };
}lg_m_plus_m_plus_reg2cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2d3:8;
        RBus_UInt32  wpr_reg2d2:8;
        RBus_UInt32  wpr_reg2d1:8;
        RBus_UInt32  wpr_reg2d0:8;
    };
}lg_m_plus_m_plus_reg2d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2d7:8;
        RBus_UInt32  wpr_reg2d6:8;
        RBus_UInt32  wpr_reg2d5:8;
        RBus_UInt32  wpr_reg2d4:8;
    };
}lg_m_plus_m_plus_reg2d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2db:8;
        RBus_UInt32  wpr_reg2da:8;
        RBus_UInt32  wpr_reg2d9:8;
        RBus_UInt32  wpr_reg2d8:8;
    };
}lg_m_plus_m_plus_reg2d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2df:8;
        RBus_UInt32  wpr_reg2de:8;
        RBus_UInt32  wpr_reg2dd:8;
        RBus_UInt32  wpr_reg2dc:8;
    };
}lg_m_plus_m_plus_reg2dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2e3:8;
        RBus_UInt32  wpr_reg2e2:8;
        RBus_UInt32  wpr_reg2e1:8;
        RBus_UInt32  wpr_reg2e0:8;
    };
}lg_m_plus_m_plus_reg2e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2e7:8;
        RBus_UInt32  wpr_reg2e6:8;
        RBus_UInt32  wpr_reg2e5:8;
        RBus_UInt32  wpr_reg2e4:8;
    };
}lg_m_plus_m_plus_reg2e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2eb:8;
        RBus_UInt32  wpr_reg2ea:8;
        RBus_UInt32  wpr_reg2e9:8;
        RBus_UInt32  wpr_reg2e8:8;
    };
}lg_m_plus_m_plus_reg2e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2ef:8;
        RBus_UInt32  wpr_reg2ee:8;
        RBus_UInt32  wpr_reg2ed:8;
        RBus_UInt32  wpr_reg2ec:8;
    };
}lg_m_plus_m_plus_reg2ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2f3:8;
        RBus_UInt32  wpr_reg2f2:8;
        RBus_UInt32  wpr_reg2f1:8;
        RBus_UInt32  wpr_reg2f0:8;
    };
}lg_m_plus_m_plus_reg2f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2f7:8;
        RBus_UInt32  wpr_reg2f6:8;
        RBus_UInt32  wpr_reg2f5:8;
        RBus_UInt32  wpr_reg2f4:8;
    };
}lg_m_plus_m_plus_reg2f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2fb:8;
        RBus_UInt32  wpr_reg2fa:8;
        RBus_UInt32  wpr_reg2f9:8;
        RBus_UInt32  wpr_reg2f8:8;
    };
}lg_m_plus_m_plus_reg2f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg2ff:8;
        RBus_UInt32  wpr_reg2fe:8;
        RBus_UInt32  wpr_reg2fd:8;
        RBus_UInt32  wpr_reg2fc:8;
    };
}lg_m_plus_m_plus_reg2fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg303:8;
        RBus_UInt32  wpr_reg302:8;
        RBus_UInt32  wpr_reg301:8;
        RBus_UInt32  wpr_reg300:8;
    };
}lg_m_plus_m_plus_reg300_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg307:8;
        RBus_UInt32  wpr_reg306:8;
        RBus_UInt32  wpr_reg305:8;
        RBus_UInt32  wpr_reg304:8;
    };
}lg_m_plus_m_plus_reg304_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg30b:8;
        RBus_UInt32  wpr_reg30a:8;
        RBus_UInt32  wpr_reg309:8;
        RBus_UInt32  wpr_reg308:8;
    };
}lg_m_plus_m_plus_reg308_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg30f:8;
        RBus_UInt32  wpr_reg30e:8;
        RBus_UInt32  wpr_reg30d:8;
        RBus_UInt32  wpr_reg30c:8;
    };
}lg_m_plus_m_plus_reg30c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg313:8;
        RBus_UInt32  wpr_reg312:8;
        RBus_UInt32  wpr_reg311:8;
        RBus_UInt32  wpr_reg310:8;
    };
}lg_m_plus_m_plus_reg310_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg317:8;
        RBus_UInt32  wpr_reg316:8;
        RBus_UInt32  wpr_reg315:8;
        RBus_UInt32  wpr_reg314:8;
    };
}lg_m_plus_m_plus_reg314_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg31b:8;
        RBus_UInt32  wpr_reg31a:8;
        RBus_UInt32  wpr_reg319:8;
        RBus_UInt32  wpr_reg318:8;
    };
}lg_m_plus_m_plus_reg318_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg31f:8;
        RBus_UInt32  wpr_reg31e:8;
        RBus_UInt32  wpr_reg31d:8;
        RBus_UInt32  wpr_reg31c:8;
    };
}lg_m_plus_m_plus_reg31c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg323:8;
        RBus_UInt32  wpr_reg322:8;
        RBus_UInt32  wpr_reg321:8;
        RBus_UInt32  wpr_reg320:8;
    };
}lg_m_plus_m_plus_reg320_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg327:8;
        RBus_UInt32  wpr_reg326:8;
        RBus_UInt32  wpr_reg325:8;
        RBus_UInt32  wpr_reg324:8;
    };
}lg_m_plus_m_plus_reg324_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg32b:8;
        RBus_UInt32  wpr_reg32a:8;
        RBus_UInt32  wpr_reg329:8;
        RBus_UInt32  wpr_reg328:8;
    };
}lg_m_plus_m_plus_reg328_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg32f:8;
        RBus_UInt32  wpr_reg32e:8;
        RBus_UInt32  wpr_reg32d:8;
        RBus_UInt32  wpr_reg32c:8;
    };
}lg_m_plus_m_plus_reg32c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg333:8;
        RBus_UInt32  wpr_reg332:8;
        RBus_UInt32  wpr_reg331:8;
        RBus_UInt32  wpr_reg330:8;
    };
}lg_m_plus_m_plus_reg330_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg337:8;
        RBus_UInt32  wpr_reg336:8;
        RBus_UInt32  wpr_reg335:8;
        RBus_UInt32  wpr_reg334:8;
    };
}lg_m_plus_m_plus_reg334_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg33b:8;
        RBus_UInt32  wpr_reg33a:8;
        RBus_UInt32  wpr_reg339:8;
        RBus_UInt32  wpr_reg338:8;
    };
}lg_m_plus_m_plus_reg338_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg33f:8;
        RBus_UInt32  wpr_reg33e:8;
        RBus_UInt32  wpr_reg33d:8;
        RBus_UInt32  wpr_reg33c:8;
    };
}lg_m_plus_m_plus_reg33c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg343:8;
        RBus_UInt32  wpr_reg342:8;
        RBus_UInt32  wpr_reg341:8;
        RBus_UInt32  wpr_reg340:8;
    };
}lg_m_plus_m_plus_reg340_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg347:8;
        RBus_UInt32  wpr_reg346:8;
        RBus_UInt32  wpr_reg345:8;
        RBus_UInt32  wpr_reg344:8;
    };
}lg_m_plus_m_plus_reg344_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg34b:8;
        RBus_UInt32  wpr_reg34a:8;
        RBus_UInt32  wpr_reg349:8;
        RBus_UInt32  wpr_reg348:8;
    };
}lg_m_plus_m_plus_reg348_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg34f:8;
        RBus_UInt32  wpr_reg34e:8;
        RBus_UInt32  wpr_reg34d:8;
        RBus_UInt32  wpr_reg34c:8;
    };
}lg_m_plus_m_plus_reg34c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg353:8;
        RBus_UInt32  wpr_reg352:8;
        RBus_UInt32  wpr_reg351:8;
        RBus_UInt32  wpr_reg350:8;
    };
}lg_m_plus_m_plus_reg350_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg357:8;
        RBus_UInt32  wpr_reg356:8;
        RBus_UInt32  wpr_reg355:8;
        RBus_UInt32  wpr_reg354:8;
    };
}lg_m_plus_m_plus_reg354_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg35b:8;
        RBus_UInt32  wpr_reg35a:8;
        RBus_UInt32  wpr_reg359:8;
        RBus_UInt32  wpr_reg358:8;
    };
}lg_m_plus_m_plus_reg358_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg35f:8;
        RBus_UInt32  wpr_reg35e:8;
        RBus_UInt32  wpr_reg35d:8;
        RBus_UInt32  wpr_reg35c:8;
    };
}lg_m_plus_m_plus_reg35c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg363:8;
        RBus_UInt32  wpr_reg362:8;
        RBus_UInt32  wpr_reg361:8;
        RBus_UInt32  wpr_reg360:8;
    };
}lg_m_plus_m_plus_reg360_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg367:8;
        RBus_UInt32  wpr_reg366:8;
        RBus_UInt32  wpr_reg365:8;
        RBus_UInt32  wpr_reg364:8;
    };
}lg_m_plus_m_plus_reg364_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg36b:8;
        RBus_UInt32  wpr_reg36a:8;
        RBus_UInt32  wpr_reg369:8;
        RBus_UInt32  wpr_reg368:8;
    };
}lg_m_plus_m_plus_reg368_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg36f:8;
        RBus_UInt32  wpr_reg36e:8;
        RBus_UInt32  wpr_reg36d:8;
        RBus_UInt32  wpr_reg36c:8;
    };
}lg_m_plus_m_plus_reg36c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg373:8;
        RBus_UInt32  wpr_reg372:8;
        RBus_UInt32  wpr_reg371:8;
        RBus_UInt32  wpr_reg370:8;
    };
}lg_m_plus_m_plus_reg370_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg377:8;
        RBus_UInt32  wpr_reg376:8;
        RBus_UInt32  wpr_reg375:8;
        RBus_UInt32  wpr_reg374:8;
    };
}lg_m_plus_m_plus_reg374_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg37b:8;
        RBus_UInt32  wpr_reg37a:8;
        RBus_UInt32  wpr_reg379:8;
        RBus_UInt32  wpr_reg378:8;
    };
}lg_m_plus_m_plus_reg378_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg37f:8;
        RBus_UInt32  wpr_reg37e:8;
        RBus_UInt32  wpr_reg37d:8;
        RBus_UInt32  wpr_reg37c:8;
    };
}lg_m_plus_m_plus_reg37c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg383:8;
        RBus_UInt32  wpr_reg382:8;
        RBus_UInt32  wpr_reg381:8;
        RBus_UInt32  wpr_reg380:8;
    };
}lg_m_plus_m_plus_reg380_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg387:8;
        RBus_UInt32  wpr_reg386:8;
        RBus_UInt32  wpr_reg385:8;
        RBus_UInt32  wpr_reg384:8;
    };
}lg_m_plus_m_plus_reg384_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg38b:8;
        RBus_UInt32  wpr_reg38a:8;
        RBus_UInt32  wpr_reg389:8;
        RBus_UInt32  wpr_reg388:8;
    };
}lg_m_plus_m_plus_reg388_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg38f:8;
        RBus_UInt32  wpr_reg38e:8;
        RBus_UInt32  wpr_reg38d:8;
        RBus_UInt32  wpr_reg38c:8;
    };
}lg_m_plus_m_plus_reg38c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg393:8;
        RBus_UInt32  wpr_reg392:8;
        RBus_UInt32  wpr_reg391:8;
        RBus_UInt32  wpr_reg390:8;
    };
}lg_m_plus_m_plus_reg390_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg397:8;
        RBus_UInt32  wpr_reg396:8;
        RBus_UInt32  wpr_reg395:8;
        RBus_UInt32  wpr_reg394:8;
    };
}lg_m_plus_m_plus_reg394_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg39b:8;
        RBus_UInt32  wpr_reg39a:8;
        RBus_UInt32  wpr_reg399:8;
        RBus_UInt32  wpr_reg398:8;
    };
}lg_m_plus_m_plus_reg398_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg39f:8;
        RBus_UInt32  wpr_reg39e:8;
        RBus_UInt32  wpr_reg39d:8;
        RBus_UInt32  wpr_reg39c:8;
    };
}lg_m_plus_m_plus_reg39c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3a3:8;
        RBus_UInt32  wpr_reg3a2:8;
        RBus_UInt32  wpr_reg3a1:8;
        RBus_UInt32  wpr_reg3a0:8;
    };
}lg_m_plus_m_plus_reg3a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3a7:8;
        RBus_UInt32  wpr_reg3a6:8;
        RBus_UInt32  wpr_reg3a5:8;
        RBus_UInt32  wpr_reg3a4:8;
    };
}lg_m_plus_m_plus_reg3a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3ab:8;
        RBus_UInt32  wpr_reg3aa:8;
        RBus_UInt32  wpr_reg3a9:8;
        RBus_UInt32  wpr_reg3a8:8;
    };
}lg_m_plus_m_plus_reg3a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3af:8;
        RBus_UInt32  wpr_reg3ae:8;
        RBus_UInt32  wpr_reg3ad:8;
        RBus_UInt32  wpr_reg3ac:8;
    };
}lg_m_plus_m_plus_reg3ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3b3:8;
        RBus_UInt32  wpr_reg3b2:8;
        RBus_UInt32  wpr_reg3b1:8;
        RBus_UInt32  wpr_reg3b0:8;
    };
}lg_m_plus_m_plus_reg3b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3b7:8;
        RBus_UInt32  wpr_reg3b6:8;
        RBus_UInt32  wpr_reg3b5:8;
        RBus_UInt32  wpr_reg3b4:8;
    };
}lg_m_plus_m_plus_reg3b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3bb:8;
        RBus_UInt32  wpr_reg3ba:8;
        RBus_UInt32  wpr_reg3b9:8;
        RBus_UInt32  wpr_reg3b8:8;
    };
}lg_m_plus_m_plus_reg3b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3bf:8;
        RBus_UInt32  wpr_reg3be:8;
        RBus_UInt32  wpr_reg3bd:8;
        RBus_UInt32  wpr_reg3bc:8;
    };
}lg_m_plus_m_plus_reg3bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3c3:8;
        RBus_UInt32  wpr_reg3c2:8;
        RBus_UInt32  wpr_reg3c1:8;
        RBus_UInt32  wpr_reg3c0:8;
    };
}lg_m_plus_m_plus_reg3c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3c7:8;
        RBus_UInt32  wpr_reg3c6:8;
        RBus_UInt32  wpr_reg3c5:8;
        RBus_UInt32  wpr_reg3c4:8;
    };
}lg_m_plus_m_plus_reg3c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3cb:8;
        RBus_UInt32  wpr_reg3ca:8;
        RBus_UInt32  wpr_reg3c9:8;
        RBus_UInt32  wpr_reg3c8:8;
    };
}lg_m_plus_m_plus_reg3c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3cf:8;
        RBus_UInt32  wpr_reg3ce:8;
        RBus_UInt32  wpr_reg3cd:8;
        RBus_UInt32  wpr_reg3cc:8;
    };
}lg_m_plus_m_plus_reg3cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3d3:8;
        RBus_UInt32  wpr_reg3d2:8;
        RBus_UInt32  wpr_reg3d1:8;
        RBus_UInt32  wpr_reg3d0:8;
    };
}lg_m_plus_m_plus_reg3d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3d7:8;
        RBus_UInt32  wpr_reg3d6:8;
        RBus_UInt32  wpr_reg3d5:8;
        RBus_UInt32  wpr_reg3d4:8;
    };
}lg_m_plus_m_plus_reg3d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3db:8;
        RBus_UInt32  wpr_reg3da:8;
        RBus_UInt32  wpr_reg3d9:8;
        RBus_UInt32  wpr_reg3d8:8;
    };
}lg_m_plus_m_plus_reg3d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3df:8;
        RBus_UInt32  wpr_reg3de:8;
        RBus_UInt32  wpr_reg3dd:8;
        RBus_UInt32  wpr_reg3dc:8;
    };
}lg_m_plus_m_plus_reg3dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3e3:8;
        RBus_UInt32  wpr_reg3e2:8;
        RBus_UInt32  wpr_reg3e1:8;
        RBus_UInt32  wpr_reg3e0:8;
    };
}lg_m_plus_m_plus_reg3e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3e7:8;
        RBus_UInt32  wpr_reg3e6:8;
        RBus_UInt32  wpr_reg3e5:8;
        RBus_UInt32  wpr_reg3e4:8;
    };
}lg_m_plus_m_plus_reg3e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3eb:8;
        RBus_UInt32  wpr_reg3ea:8;
        RBus_UInt32  wpr_reg3e9:8;
        RBus_UInt32  wpr_reg3e8:8;
    };
}lg_m_plus_m_plus_reg3e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3ef:8;
        RBus_UInt32  wpr_reg3ee:8;
        RBus_UInt32  wpr_reg3ed:8;
        RBus_UInt32  wpr_reg3ec:8;
    };
}lg_m_plus_m_plus_reg3ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3f3:8;
        RBus_UInt32  wpr_reg3f2:8;
        RBus_UInt32  wpr_reg3f1:8;
        RBus_UInt32  wpr_reg3f0:8;
    };
}lg_m_plus_m_plus_reg3f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3f7:8;
        RBus_UInt32  wpr_reg3f6:8;
        RBus_UInt32  wpr_reg3f5:8;
        RBus_UInt32  wpr_reg3f4:8;
    };
}lg_m_plus_m_plus_reg3f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3fb:8;
        RBus_UInt32  wpr_reg3fa:8;
        RBus_UInt32  wpr_reg3f9:8;
        RBus_UInt32  wpr_reg3f8:8;
    };
}lg_m_plus_m_plus_reg3f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg3ff:8;
        RBus_UInt32  wpr_reg3fe:8;
        RBus_UInt32  wpr_reg3fd:8;
        RBus_UInt32  wpr_reg3fc:8;
    };
}lg_m_plus_m_plus_reg3fc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg403:8;
        RBus_UInt32  wpr_reg402:8;
        RBus_UInt32  wpr_reg401:8;
        RBus_UInt32  wpr_reg400:8;
    };
}lg_m_plus_m_plus_reg400_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg407:8;
        RBus_UInt32  wpr_reg406:8;
        RBus_UInt32  wpr_reg405:8;
        RBus_UInt32  wpr_reg404:8;
    };
}lg_m_plus_m_plus_reg404_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg40b:8;
        RBus_UInt32  wpr_reg40a:8;
        RBus_UInt32  wpr_reg409:8;
        RBus_UInt32  wpr_reg408:8;
    };
}lg_m_plus_m_plus_reg408_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg40f:8;
        RBus_UInt32  wpr_reg40e:8;
        RBus_UInt32  wpr_reg40d:8;
        RBus_UInt32  wpr_reg40c:8;
    };
}lg_m_plus_m_plus_reg40c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg413:8;
        RBus_UInt32  wpr_reg412:8;
        RBus_UInt32  wpr_reg411:8;
        RBus_UInt32  wpr_reg410:8;
    };
}lg_m_plus_m_plus_reg410_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg417:8;
        RBus_UInt32  wpr_reg416:8;
        RBus_UInt32  wpr_reg415:8;
        RBus_UInt32  wpr_reg414:8;
    };
}lg_m_plus_m_plus_reg414_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg41b:8;
        RBus_UInt32  wpr_reg41a:8;
        RBus_UInt32  wpr_reg419:8;
        RBus_UInt32  wpr_reg418:8;
    };
}lg_m_plus_m_plus_reg418_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg41f:8;
        RBus_UInt32  wpr_reg41e:8;
        RBus_UInt32  wpr_reg41d:8;
        RBus_UInt32  wpr_reg41c:8;
    };
}lg_m_plus_m_plus_reg41c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg423:8;
        RBus_UInt32  wpr_reg422:8;
        RBus_UInt32  wpr_reg421:8;
        RBus_UInt32  wpr_reg420:8;
    };
}lg_m_plus_m_plus_reg420_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg427:8;
        RBus_UInt32  wpr_reg426:8;
        RBus_UInt32  wpr_reg425:8;
        RBus_UInt32  wpr_reg424:8;
    };
}lg_m_plus_m_plus_reg424_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg42b:8;
        RBus_UInt32  wpr_reg42a:8;
        RBus_UInt32  wpr_reg429:8;
        RBus_UInt32  wpr_reg428:8;
    };
}lg_m_plus_m_plus_reg428_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg42f:8;
        RBus_UInt32  wpr_reg42e:8;
        RBus_UInt32  wpr_reg42d:8;
        RBus_UInt32  wpr_reg42c:8;
    };
}lg_m_plus_m_plus_reg42c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg433:8;
        RBus_UInt32  wpr_reg432:8;
        RBus_UInt32  wpr_reg431:8;
        RBus_UInt32  wpr_reg430:8;
    };
}lg_m_plus_m_plus_reg430_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg437:8;
        RBus_UInt32  wpr_reg436:8;
        RBus_UInt32  wpr_reg435:8;
        RBus_UInt32  wpr_reg434:8;
    };
}lg_m_plus_m_plus_reg434_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg43b:8;
        RBus_UInt32  wpr_reg43a:8;
        RBus_UInt32  wpr_reg439:8;
        RBus_UInt32  wpr_reg438:8;
    };
}lg_m_plus_m_plus_reg438_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg43f:8;
        RBus_UInt32  wpr_reg43e:8;
        RBus_UInt32  wpr_reg43d:8;
        RBus_UInt32  wpr_reg43c:8;
    };
}lg_m_plus_m_plus_reg43c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg443:8;
        RBus_UInt32  wpr_reg442:8;
        RBus_UInt32  wpr_reg441:8;
        RBus_UInt32  wpr_reg440:8;
    };
}lg_m_plus_m_plus_reg440_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg447:8;
        RBus_UInt32  wpr_reg446:8;
        RBus_UInt32  wpr_reg445:8;
        RBus_UInt32  wpr_reg444:8;
    };
}lg_m_plus_m_plus_reg444_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg44b:8;
        RBus_UInt32  wpr_reg44a:8;
        RBus_UInt32  wpr_reg449:8;
        RBus_UInt32  wpr_reg448:8;
    };
}lg_m_plus_m_plus_reg448_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg44f:8;
        RBus_UInt32  wpr_reg44e:8;
        RBus_UInt32  wpr_reg44d:8;
        RBus_UInt32  wpr_reg44c:8;
    };
}lg_m_plus_m_plus_reg44c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg453:8;
        RBus_UInt32  wpr_reg452:8;
        RBus_UInt32  wpr_reg451:8;
        RBus_UInt32  wpr_reg450:8;
    };
}lg_m_plus_m_plus_reg450_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg457:8;
        RBus_UInt32  wpr_reg456:8;
        RBus_UInt32  wpr_reg455:8;
        RBus_UInt32  wpr_reg454:8;
    };
}lg_m_plus_m_plus_reg454_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg45b:8;
        RBus_UInt32  wpr_reg45a:8;
        RBus_UInt32  wpr_reg459:8;
        RBus_UInt32  wpr_reg458:8;
    };
}lg_m_plus_m_plus_reg458_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg45f:8;
        RBus_UInt32  wpr_reg45e:8;
        RBus_UInt32  wpr_reg45d:8;
        RBus_UInt32  wpr_reg45c:8;
    };
}lg_m_plus_m_plus_reg45c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg463:8;
        RBus_UInt32  wpr_reg462:8;
        RBus_UInt32  wpr_reg461:8;
        RBus_UInt32  wpr_reg460:8;
    };
}lg_m_plus_m_plus_reg460_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg467:8;
        RBus_UInt32  wpr_reg466:8;
        RBus_UInt32  wpr_reg465:8;
        RBus_UInt32  wpr_reg464:8;
    };
}lg_m_plus_m_plus_reg464_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg46b:8;
        RBus_UInt32  wpr_reg46a:8;
        RBus_UInt32  wpr_reg469:8;
        RBus_UInt32  wpr_reg468:8;
    };
}lg_m_plus_m_plus_reg468_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg46f:8;
        RBus_UInt32  wpr_reg46e:8;
        RBus_UInt32  wpr_reg46d:8;
        RBus_UInt32  wpr_reg46c:8;
    };
}lg_m_plus_m_plus_reg46c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg473:8;
        RBus_UInt32  wpr_reg472:8;
        RBus_UInt32  wpr_reg471:8;
        RBus_UInt32  wpr_reg470:8;
    };
}lg_m_plus_m_plus_reg470_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg477:8;
        RBus_UInt32  wpr_reg476:8;
        RBus_UInt32  wpr_reg475:8;
        RBus_UInt32  wpr_reg474:8;
    };
}lg_m_plus_m_plus_reg474_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg47b:8;
        RBus_UInt32  wpr_reg47a:8;
        RBus_UInt32  wpr_reg479:8;
        RBus_UInt32  wpr_reg478:8;
    };
}lg_m_plus_m_plus_reg478_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wpr_reg47f:8;
        RBus_UInt32  wpr_reg47e:8;
        RBus_UInt32  wpr_reg47d:8;
        RBus_UInt32  wpr_reg47c:8;
    };
}lg_m_plus_m_plus_reg47c_RBUS;




#endif 


#endif 
