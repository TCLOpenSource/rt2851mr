/**
* @file Merlin5-DesignSpec-ISO_MISC_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_ISO_MISC_REG_H_
#define _RBUS_ISO_MISC_REG_H_

#include "rbus_types.h"



//  ISO_MISC Register Address
#define  ISO_MISC_ISR                                                           0x18061000
#define  ISO_MISC_ISR_reg_addr                                                   "0xB8061000"
#define  ISO_MISC_ISR_reg                                                        0xB8061000
#define  ISO_MISC_ISR_inst_addr                                                  "0x0000"
#define  set_ISO_MISC_ISR_reg(data)                                              (*((volatile unsigned int*)ISO_MISC_ISR_reg)=data)
#define  get_ISO_MISC_ISR_reg                                                    (*((volatile unsigned int*)ISO_MISC_ISR_reg))
#define  ISO_MISC_ISR_pwm0_int_shift                                             (23)
#define  ISO_MISC_ISR_pwm1_int_shift                                             (22)
#define  ISO_MISC_ISR_gpio_int_emcu_shift                                        (21)
#define  ISO_MISC_ISR_gpio_int_scpu_shift                                        (20)
#define  ISO_MISC_ISR_ddc0_int_shift                                             (18)
#define  ISO_MISC_ISR_ddc1_int_shift                                             (17)
#define  ISO_MISC_ISR_ddc2_int_shift                                             (16)
#define  ISO_MISC_ISR_ddc4_int_shift                                             (15)
#define  ISO_MISC_ISR_ddc3_int_shift                                             (14)
#define  ISO_MISC_ISR_lsadc_int_shift                                            (10)
#define  ISO_MISC_ISR_irda_int_shift                                             (5)
#define  ISO_MISC_ISR_drtc_int_shift                                             (1)
#define  ISO_MISC_ISR_pwm0_int_mask                                              (0x00800000)
#define  ISO_MISC_ISR_pwm1_int_mask                                              (0x00400000)
#define  ISO_MISC_ISR_gpio_int_emcu_mask                                         (0x00200000)
#define  ISO_MISC_ISR_gpio_int_scpu_mask                                         (0x00100000)
#define  ISO_MISC_ISR_ddc0_int_mask                                              (0x00040000)
#define  ISO_MISC_ISR_ddc1_int_mask                                              (0x00020000)
#define  ISO_MISC_ISR_ddc2_int_mask                                              (0x00010000)
#define  ISO_MISC_ISR_ddc4_int_mask                                              (0x00008000)
#define  ISO_MISC_ISR_ddc3_int_mask                                              (0x00004000)
#define  ISO_MISC_ISR_lsadc_int_mask                                             (0x00000400)
#define  ISO_MISC_ISR_irda_int_mask                                              (0x00000020)
#define  ISO_MISC_ISR_drtc_int_mask                                              (0x00000002)
#define  ISO_MISC_ISR_pwm0_int(data)                                             (0x00800000&((data)<<23))
#define  ISO_MISC_ISR_pwm1_int(data)                                             (0x00400000&((data)<<22))
#define  ISO_MISC_ISR_gpio_int_emcu(data)                                        (0x00200000&((data)<<21))
#define  ISO_MISC_ISR_gpio_int_scpu(data)                                        (0x00100000&((data)<<20))
#define  ISO_MISC_ISR_ddc0_int(data)                                             (0x00040000&((data)<<18))
#define  ISO_MISC_ISR_ddc1_int(data)                                             (0x00020000&((data)<<17))
#define  ISO_MISC_ISR_ddc2_int(data)                                             (0x00010000&((data)<<16))
#define  ISO_MISC_ISR_ddc4_int(data)                                             (0x00008000&((data)<<15))
#define  ISO_MISC_ISR_ddc3_int(data)                                             (0x00004000&((data)<<14))
#define  ISO_MISC_ISR_lsadc_int(data)                                            (0x00000400&((data)<<10))
#define  ISO_MISC_ISR_irda_int(data)                                             (0x00000020&((data)<<5))
#define  ISO_MISC_ISR_drtc_int(data)                                             (0x00000002&((data)<<1))
#define  ISO_MISC_ISR_get_pwm0_int(data)                                         ((0x00800000&(data))>>23)
#define  ISO_MISC_ISR_get_pwm1_int(data)                                         ((0x00400000&(data))>>22)
#define  ISO_MISC_ISR_get_gpio_int_emcu(data)                                    ((0x00200000&(data))>>21)
#define  ISO_MISC_ISR_get_gpio_int_scpu(data)                                    ((0x00100000&(data))>>20)
#define  ISO_MISC_ISR_get_ddc0_int(data)                                         ((0x00040000&(data))>>18)
#define  ISO_MISC_ISR_get_ddc1_int(data)                                         ((0x00020000&(data))>>17)
#define  ISO_MISC_ISR_get_ddc2_int(data)                                         ((0x00010000&(data))>>16)
#define  ISO_MISC_ISR_get_ddc4_int(data)                                         ((0x00008000&(data))>>15)
#define  ISO_MISC_ISR_get_ddc3_int(data)                                         ((0x00004000&(data))>>14)
#define  ISO_MISC_ISR_get_lsadc_int(data)                                        ((0x00000400&(data))>>10)
#define  ISO_MISC_ISR_get_irda_int(data)                                         ((0x00000020&(data))>>5)
#define  ISO_MISC_ISR_get_drtc_int(data)                                         ((0x00000002&(data))>>1)

#define  ISO_MISC_DBG                                                           0x18061008
#define  ISO_MISC_DBG_reg_addr                                                   "0xB8061008"
#define  ISO_MISC_DBG_reg                                                        0xB8061008
#define  ISO_MISC_DBG_inst_addr                                                  "0x0001"
#define  set_ISO_MISC_DBG_reg(data)                                              (*((volatile unsigned int*)ISO_MISC_DBG_reg)=data)
#define  get_ISO_MISC_DBG_reg                                                    (*((volatile unsigned int*)ISO_MISC_DBG_reg))
#define  ISO_MISC_DBG_lsadc_tme_shift                                            (11)
#define  ISO_MISC_DBG_rtc_test_shift                                             (10)
#define  ISO_MISC_DBG_iso_rtc_test_shift                                         (9)
#define  ISO_MISC_DBG_sel_shift                                                  (2)
#define  ISO_MISC_DBG_lsadc_tme_mask                                             (0x00000800)
#define  ISO_MISC_DBG_rtc_test_mask                                              (0x00000400)
#define  ISO_MISC_DBG_iso_rtc_test_mask                                          (0x00000200)
#define  ISO_MISC_DBG_sel_mask                                                   (0x0000003C)
#define  ISO_MISC_DBG_lsadc_tme(data)                                            (0x00000800&((data)<<11))
#define  ISO_MISC_DBG_rtc_test(data)                                             (0x00000400&((data)<<10))
#define  ISO_MISC_DBG_iso_rtc_test(data)                                         (0x00000200&((data)<<9))
#define  ISO_MISC_DBG_sel(data)                                                  (0x0000003C&((data)<<2))
#define  ISO_MISC_DBG_get_lsadc_tme(data)                                        ((0x00000800&(data))>>11)
#define  ISO_MISC_DBG_get_rtc_test(data)                                         ((0x00000400&(data))>>10)
#define  ISO_MISC_DBG_get_iso_rtc_test(data)                                     ((0x00000200&(data))>>9)
#define  ISO_MISC_DBG_get_sel(data)                                              ((0x0000003C&(data))>>2)

#define  ISO_MISC_SYSTEM                                                        0x1806100C
#define  ISO_MISC_SYSTEM_reg_addr                                                "0xB806100C"
#define  ISO_MISC_SYSTEM_reg                                                     0xB806100C
#define  ISO_MISC_SYSTEM_inst_addr                                               "0x0002"
#define  set_ISO_MISC_SYSTEM_reg(data)                                           (*((volatile unsigned int*)ISO_MISC_SYSTEM_reg)=data)
#define  get_ISO_MISC_SYSTEM_reg                                                 (*((volatile unsigned int*)ISO_MISC_SYSTEM_reg))
#define  ISO_MISC_SYSTEM_irdarxdetec_shift                                       (31)
#define  ISO_MISC_SYSTEM_ddc3_delay_sel_shift                                    (26)
#define  ISO_MISC_SYSTEM_ddc2_delay_sel_shift                                    (22)
#define  ISO_MISC_SYSTEM_ddc1_delay_sel_shift                                    (18)
#define  ISO_MISC_SYSTEM_ddc0_data_in_det_shift                                  (16)
#define  ISO_MISC_SYSTEM_ddc0_delay_sel_shift                                    (11)
#define  ISO_MISC_SYSTEM_ddc1_data_in_det_shift                                  (10)
#define  ISO_MISC_SYSTEM_ddc2_data_in_det_shift                                  (9)
#define  ISO_MISC_SYSTEM_ddc3_data_in_det_shift                                  (8)
#define  ISO_MISC_SYSTEM_ddc4_data_in_det_shift                                  (7)
#define  ISO_MISC_SYSTEM_ddc4_delay_sel_shift                                    (0)
#define  ISO_MISC_SYSTEM_irdarxdetec_mask                                        (0x80000000)
#define  ISO_MISC_SYSTEM_ddc3_delay_sel_mask                                     (0x3C000000)
#define  ISO_MISC_SYSTEM_ddc2_delay_sel_mask                                     (0x03C00000)
#define  ISO_MISC_SYSTEM_ddc1_delay_sel_mask                                     (0x003C0000)
#define  ISO_MISC_SYSTEM_ddc0_data_in_det_mask                                   (0x00010000)
#define  ISO_MISC_SYSTEM_ddc0_delay_sel_mask                                     (0x00007800)
#define  ISO_MISC_SYSTEM_ddc1_data_in_det_mask                                   (0x00000400)
#define  ISO_MISC_SYSTEM_ddc2_data_in_det_mask                                   (0x00000200)
#define  ISO_MISC_SYSTEM_ddc3_data_in_det_mask                                   (0x00000100)
#define  ISO_MISC_SYSTEM_ddc4_data_in_det_mask                                   (0x00000080)
#define  ISO_MISC_SYSTEM_ddc4_delay_sel_mask                                     (0x0000000F)
#define  ISO_MISC_SYSTEM_irdarxdetec(data)                                       (0x80000000&((data)<<31))
#define  ISO_MISC_SYSTEM_ddc3_delay_sel(data)                                    (0x3C000000&((data)<<26))
#define  ISO_MISC_SYSTEM_ddc2_delay_sel(data)                                    (0x03C00000&((data)<<22))
#define  ISO_MISC_SYSTEM_ddc1_delay_sel(data)                                    (0x003C0000&((data)<<18))
#define  ISO_MISC_SYSTEM_ddc0_data_in_det(data)                                  (0x00010000&((data)<<16))
#define  ISO_MISC_SYSTEM_ddc0_delay_sel(data)                                    (0x00007800&((data)<<11))
#define  ISO_MISC_SYSTEM_ddc1_data_in_det(data)                                  (0x00000400&((data)<<10))
#define  ISO_MISC_SYSTEM_ddc2_data_in_det(data)                                  (0x00000200&((data)<<9))
#define  ISO_MISC_SYSTEM_ddc3_data_in_det(data)                                  (0x00000100&((data)<<8))
#define  ISO_MISC_SYSTEM_ddc4_data_in_det(data)                                  (0x00000080&((data)<<7))
#define  ISO_MISC_SYSTEM_ddc4_delay_sel(data)                                    (0x0000000F&(data))
#define  ISO_MISC_SYSTEM_get_irdarxdetec(data)                                   ((0x80000000&(data))>>31)
#define  ISO_MISC_SYSTEM_get_ddc3_delay_sel(data)                                ((0x3C000000&(data))>>26)
#define  ISO_MISC_SYSTEM_get_ddc2_delay_sel(data)                                ((0x03C00000&(data))>>22)
#define  ISO_MISC_SYSTEM_get_ddc1_delay_sel(data)                                ((0x003C0000&(data))>>18)
#define  ISO_MISC_SYSTEM_get_ddc0_data_in_det(data)                              ((0x00010000&(data))>>16)
#define  ISO_MISC_SYSTEM_get_ddc0_delay_sel(data)                                ((0x00007800&(data))>>11)
#define  ISO_MISC_SYSTEM_get_ddc1_data_in_det(data)                              ((0x00000400&(data))>>10)
#define  ISO_MISC_SYSTEM_get_ddc2_data_in_det(data)                              ((0x00000200&(data))>>9)
#define  ISO_MISC_SYSTEM_get_ddc3_data_in_det(data)                              ((0x00000100&(data))>>8)
#define  ISO_MISC_SYSTEM_get_ddc4_data_in_det(data)                              ((0x00000080&(data))>>7)
#define  ISO_MISC_SYSTEM_get_ddc4_delay_sel(data)                                (0x0000000F&(data))

#define  ISO_MISC_DDC_CTRL                                                      0x18061010
#define  ISO_MISC_DDC_CTRL_reg_addr                                              "0xB8061010"
#define  ISO_MISC_DDC_CTRL_reg                                                   0xB8061010
#define  ISO_MISC_DDC_CTRL_inst_addr                                             "0x0003"
#define  set_ISO_MISC_DDC_CTRL_reg(data)                                         (*((volatile unsigned int*)ISO_MISC_DDC_CTRL_reg)=data)
#define  get_ISO_MISC_DDC_CTRL_reg                                               (*((volatile unsigned int*)ISO_MISC_DDC_CTRL_reg))
#define  ISO_MISC_DDC_CTRL_u2r_rbus_en_shift                                     (4)
#define  ISO_MISC_DDC_CTRL_ddc_u2r_pin_sel_shift                                 (3)
#define  ISO_MISC_DDC_CTRL_ddc_u2r_en_shift                                      (0)
#define  ISO_MISC_DDC_CTRL_u2r_rbus_en_mask                                      (0x00000010)
#define  ISO_MISC_DDC_CTRL_ddc_u2r_pin_sel_mask                                  (0x00000008)
#define  ISO_MISC_DDC_CTRL_ddc_u2r_en_mask                                       (0x00000007)
#define  ISO_MISC_DDC_CTRL_u2r_rbus_en(data)                                     (0x00000010&((data)<<4))
#define  ISO_MISC_DDC_CTRL_ddc_u2r_pin_sel(data)                                 (0x00000008&((data)<<3))
#define  ISO_MISC_DDC_CTRL_ddc_u2r_en(data)                                      (0x00000007&(data))
#define  ISO_MISC_DDC_CTRL_get_u2r_rbus_en(data)                                 ((0x00000010&(data))>>4)
#define  ISO_MISC_DDC_CTRL_get_ddc_u2r_pin_sel(data)                             ((0x00000008&(data))>>3)
#define  ISO_MISC_DDC_CTRL_get_ddc_u2r_en(data)                                  (0x00000007&(data))

#define  ISO_MISC_INT_CTRL                                                      0x1806101C
#define  ISO_MISC_INT_CTRL_reg_addr                                              "0xB806101C"
#define  ISO_MISC_INT_CTRL_reg                                                   0xB806101C
#define  ISO_MISC_INT_CTRL_inst_addr                                             "0x0004"
#define  set_ISO_MISC_INT_CTRL_reg(data)                                         (*((volatile unsigned int*)ISO_MISC_INT_CTRL_reg)=data)
#define  get_ISO_MISC_INT_CTRL_reg                                               (*((volatile unsigned int*)ISO_MISC_INT_CTRL_reg))
#define  ISO_MISC_INT_CTRL_ddc4_int_to_emcu_en_shift                             (15)
#define  ISO_MISC_INT_CTRL_ddc4_int_to_scpu_en_shift                             (14)
#define  ISO_MISC_INT_CTRL_ddc3_int_to_emcu_en_shift                             (13)
#define  ISO_MISC_INT_CTRL_ddc3_int_to_scpu_en_shift                             (12)
#define  ISO_MISC_INT_CTRL_ddc2_int_to_emcu_en_shift                             (11)
#define  ISO_MISC_INT_CTRL_ddc2_int_to_scpu_en_shift                             (10)
#define  ISO_MISC_INT_CTRL_ddc1_int_to_emcu_en_shift                             (9)
#define  ISO_MISC_INT_CTRL_ddc1_int_to_scpu_en_shift                             (8)
#define  ISO_MISC_INT_CTRL_pwm1_int_to_emcu_en_shift                             (7)
#define  ISO_MISC_INT_CTRL_pwm1_int_to_scpu_en_shift                             (6)
#define  ISO_MISC_INT_CTRL_pwm0_int_to_emcu_en_shift                             (5)
#define  ISO_MISC_INT_CTRL_pwm0_int_to_scpu_en_shift                             (4)
#define  ISO_MISC_INT_CTRL_ddc0_int_to_emcu_en_shift                             (3)
#define  ISO_MISC_INT_CTRL_ddc0_int_to_scpu_en_shift                             (2)
#define  ISO_MISC_INT_CTRL_lsadc_int_to_emcu_en_shift                            (1)
#define  ISO_MISC_INT_CTRL_lsadc_int_to_scpu_en_shift                            (0)
#define  ISO_MISC_INT_CTRL_ddc4_int_to_emcu_en_mask                              (0x00008000)
#define  ISO_MISC_INT_CTRL_ddc4_int_to_scpu_en_mask                              (0x00004000)
#define  ISO_MISC_INT_CTRL_ddc3_int_to_emcu_en_mask                              (0x00002000)
#define  ISO_MISC_INT_CTRL_ddc3_int_to_scpu_en_mask                              (0x00001000)
#define  ISO_MISC_INT_CTRL_ddc2_int_to_emcu_en_mask                              (0x00000800)
#define  ISO_MISC_INT_CTRL_ddc2_int_to_scpu_en_mask                              (0x00000400)
#define  ISO_MISC_INT_CTRL_ddc1_int_to_emcu_en_mask                              (0x00000200)
#define  ISO_MISC_INT_CTRL_ddc1_int_to_scpu_en_mask                              (0x00000100)
#define  ISO_MISC_INT_CTRL_pwm1_int_to_emcu_en_mask                              (0x00000080)
#define  ISO_MISC_INT_CTRL_pwm1_int_to_scpu_en_mask                              (0x00000040)
#define  ISO_MISC_INT_CTRL_pwm0_int_to_emcu_en_mask                              (0x00000020)
#define  ISO_MISC_INT_CTRL_pwm0_int_to_scpu_en_mask                              (0x00000010)
#define  ISO_MISC_INT_CTRL_ddc0_int_to_emcu_en_mask                              (0x00000008)
#define  ISO_MISC_INT_CTRL_ddc0_int_to_scpu_en_mask                              (0x00000004)
#define  ISO_MISC_INT_CTRL_lsadc_int_to_emcu_en_mask                             (0x00000002)
#define  ISO_MISC_INT_CTRL_lsadc_int_to_scpu_en_mask                             (0x00000001)
#define  ISO_MISC_INT_CTRL_ddc4_int_to_emcu_en(data)                             (0x00008000&((data)<<15))
#define  ISO_MISC_INT_CTRL_ddc4_int_to_scpu_en(data)                             (0x00004000&((data)<<14))
#define  ISO_MISC_INT_CTRL_ddc3_int_to_emcu_en(data)                             (0x00002000&((data)<<13))
#define  ISO_MISC_INT_CTRL_ddc3_int_to_scpu_en(data)                             (0x00001000&((data)<<12))
#define  ISO_MISC_INT_CTRL_ddc2_int_to_emcu_en(data)                             (0x00000800&((data)<<11))
#define  ISO_MISC_INT_CTRL_ddc2_int_to_scpu_en(data)                             (0x00000400&((data)<<10))
#define  ISO_MISC_INT_CTRL_ddc1_int_to_emcu_en(data)                             (0x00000200&((data)<<9))
#define  ISO_MISC_INT_CTRL_ddc1_int_to_scpu_en(data)                             (0x00000100&((data)<<8))
#define  ISO_MISC_INT_CTRL_pwm1_int_to_emcu_en(data)                             (0x00000080&((data)<<7))
#define  ISO_MISC_INT_CTRL_pwm1_int_to_scpu_en(data)                             (0x00000040&((data)<<6))
#define  ISO_MISC_INT_CTRL_pwm0_int_to_emcu_en(data)                             (0x00000020&((data)<<5))
#define  ISO_MISC_INT_CTRL_pwm0_int_to_scpu_en(data)                             (0x00000010&((data)<<4))
#define  ISO_MISC_INT_CTRL_ddc0_int_to_emcu_en(data)                             (0x00000008&((data)<<3))
#define  ISO_MISC_INT_CTRL_ddc0_int_to_scpu_en(data)                             (0x00000004&((data)<<2))
#define  ISO_MISC_INT_CTRL_lsadc_int_to_emcu_en(data)                            (0x00000002&((data)<<1))
#define  ISO_MISC_INT_CTRL_lsadc_int_to_scpu_en(data)                            (0x00000001&(data))
#define  ISO_MISC_INT_CTRL_get_ddc4_int_to_emcu_en(data)                         ((0x00008000&(data))>>15)
#define  ISO_MISC_INT_CTRL_get_ddc4_int_to_scpu_en(data)                         ((0x00004000&(data))>>14)
#define  ISO_MISC_INT_CTRL_get_ddc3_int_to_emcu_en(data)                         ((0x00002000&(data))>>13)
#define  ISO_MISC_INT_CTRL_get_ddc3_int_to_scpu_en(data)                         ((0x00001000&(data))>>12)
#define  ISO_MISC_INT_CTRL_get_ddc2_int_to_emcu_en(data)                         ((0x00000800&(data))>>11)
#define  ISO_MISC_INT_CTRL_get_ddc2_int_to_scpu_en(data)                         ((0x00000400&(data))>>10)
#define  ISO_MISC_INT_CTRL_get_ddc1_int_to_emcu_en(data)                         ((0x00000200&(data))>>9)
#define  ISO_MISC_INT_CTRL_get_ddc1_int_to_scpu_en(data)                         ((0x00000100&(data))>>8)
#define  ISO_MISC_INT_CTRL_get_pwm1_int_to_emcu_en(data)                         ((0x00000080&(data))>>7)
#define  ISO_MISC_INT_CTRL_get_pwm1_int_to_scpu_en(data)                         ((0x00000040&(data))>>6)
#define  ISO_MISC_INT_CTRL_get_pwm0_int_to_emcu_en(data)                         ((0x00000020&(data))>>5)
#define  ISO_MISC_INT_CTRL_get_pwm0_int_to_scpu_en(data)                         ((0x00000010&(data))>>4)
#define  ISO_MISC_INT_CTRL_get_ddc0_int_to_emcu_en(data)                         ((0x00000008&(data))>>3)
#define  ISO_MISC_INT_CTRL_get_ddc0_int_to_scpu_en(data)                         ((0x00000004&(data))>>2)
#define  ISO_MISC_INT_CTRL_get_lsadc_int_to_emcu_en(data)                        ((0x00000002&(data))>>1)
#define  ISO_MISC_INT_CTRL_get_lsadc_int_to_scpu_en(data)                        (0x00000001&(data))

#define  ISO_MISC_DUMMY1                                                        0x18061014
#define  ISO_MISC_DUMMY1_reg_addr                                                "0xB8061014"
#define  ISO_MISC_DUMMY1_reg                                                     0xB8061014
#define  ISO_MISC_DUMMY1_inst_addr                                               "0x0005"
#define  set_ISO_MISC_DUMMY1_reg(data)                                           (*((volatile unsigned int*)ISO_MISC_DUMMY1_reg)=data)
#define  get_ISO_MISC_DUMMY1_reg                                                 (*((volatile unsigned int*)ISO_MISC_DUMMY1_reg))
#define  ISO_MISC_DUMMY1_dummy1_shift                                            (0)
#define  ISO_MISC_DUMMY1_dummy1_mask                                             (0xFFFFFFFF)
#define  ISO_MISC_DUMMY1_dummy1(data)                                            (0xFFFFFFFF&(data))
#define  ISO_MISC_DUMMY1_get_dummy1(data)                                        (0xFFFFFFFF&(data))

#define  ISO_MISC_DUMMY2                                                        0x18061018
#define  ISO_MISC_DUMMY2_reg_addr                                                "0xB8061018"
#define  ISO_MISC_DUMMY2_reg                                                     0xB8061018
#define  ISO_MISC_DUMMY2_inst_addr                                               "0x0006"
#define  set_ISO_MISC_DUMMY2_reg(data)                                           (*((volatile unsigned int*)ISO_MISC_DUMMY2_reg)=data)
#define  get_ISO_MISC_DUMMY2_reg                                                 (*((volatile unsigned int*)ISO_MISC_DUMMY2_reg))
#define  ISO_MISC_DUMMY2_dummy2_shift                                            (0)
#define  ISO_MISC_DUMMY2_dummy2_mask                                             (0xFFFFFFFF)
#define  ISO_MISC_DUMMY2_dummy2(data)                                            (0xFFFFFFFF&(data))
#define  ISO_MISC_DUMMY2_get_dummy2(data)                                        (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======ISO_MISC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  pwm0_int:1;
        RBus_UInt32  pwm1_int:1;
        RBus_UInt32  gpio_int_emcu:1;
        RBus_UInt32  gpio_int_scpu:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  ddc0_int:1;
        RBus_UInt32  ddc1_int:1;
        RBus_UInt32  ddc2_int:1;
        RBus_UInt32  ddc4_int:1;
        RBus_UInt32  ddc3_int:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  lsadc_int:1;
        RBus_UInt32  res6:4;
        RBus_UInt32  irda_int:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  drtc_int:1;
        RBus_UInt32  res10:1;
    };
}iso_misc_isr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  lsadc_tme:1;
        RBus_UInt32  rtc_test:1;
        RBus_UInt32  iso_rtc_test:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  sel:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
    };
}iso_misc_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  irdarxdetec:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ddc3_delay_sel:4;
        RBus_UInt32  ddc2_delay_sel:4;
        RBus_UInt32  ddc1_delay_sel:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  ddc0_data_in_det:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  ddc0_delay_sel:4;
        RBus_UInt32  ddc1_data_in_det:1;
        RBus_UInt32  ddc2_data_in_det:1;
        RBus_UInt32  ddc3_data_in_det:1;
        RBus_UInt32  ddc4_data_in_det:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  ddc4_delay_sel:4;
    };
}iso_misc_system_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  u2r_rbus_en:1;
        RBus_UInt32  ddc_u2r_pin_sel:1;
        RBus_UInt32  ddc_u2r_en:3;
    };
}iso_misc_ddc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ddc4_int_to_emcu_en:1;
        RBus_UInt32  ddc4_int_to_scpu_en:1;
        RBus_UInt32  ddc3_int_to_emcu_en:1;
        RBus_UInt32  ddc3_int_to_scpu_en:1;
        RBus_UInt32  ddc2_int_to_emcu_en:1;
        RBus_UInt32  ddc2_int_to_scpu_en:1;
        RBus_UInt32  ddc1_int_to_emcu_en:1;
        RBus_UInt32  ddc1_int_to_scpu_en:1;
        RBus_UInt32  pwm1_int_to_emcu_en:1;
        RBus_UInt32  pwm1_int_to_scpu_en:1;
        RBus_UInt32  pwm0_int_to_emcu_en:1;
        RBus_UInt32  pwm0_int_to_scpu_en:1;
        RBus_UInt32  ddc0_int_to_emcu_en:1;
        RBus_UInt32  ddc0_int_to_scpu_en:1;
        RBus_UInt32  lsadc_int_to_emcu_en:1;
        RBus_UInt32  lsadc_int_to_scpu_en:1;
    };
}iso_misc_int_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1:32;
    };
}iso_misc_dummy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy2:32;
    };
}iso_misc_dummy2_RBUS;

#else //apply LITTLE_ENDIAN

//======ISO_MISC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  drtc_int:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  irda_int:1;
        RBus_UInt32  res5:4;
        RBus_UInt32  lsadc_int:1;
        RBus_UInt32  res6:1;
        RBus_UInt32  res7:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  ddc3_int:1;
        RBus_UInt32  ddc4_int:1;
        RBus_UInt32  ddc2_int:1;
        RBus_UInt32  ddc1_int:1;
        RBus_UInt32  ddc0_int:1;
        RBus_UInt32  res9:1;
        RBus_UInt32  gpio_int_scpu:1;
        RBus_UInt32  gpio_int_emcu:1;
        RBus_UInt32  pwm1_int:1;
        RBus_UInt32  pwm0_int:1;
        RBus_UInt32  res10:8;
    };
}iso_misc_isr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  sel:4;
        RBus_UInt32  res3:3;
        RBus_UInt32  iso_rtc_test:1;
        RBus_UInt32  rtc_test:1;
        RBus_UInt32  lsadc_tme:1;
        RBus_UInt32  res4:20;
    };
}iso_misc_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc4_delay_sel:4;
        RBus_UInt32  res1:3;
        RBus_UInt32  ddc4_data_in_det:1;
        RBus_UInt32  ddc3_data_in_det:1;
        RBus_UInt32  ddc2_data_in_det:1;
        RBus_UInt32  ddc1_data_in_det:1;
        RBus_UInt32  ddc0_delay_sel:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  ddc0_data_in_det:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  ddc1_delay_sel:4;
        RBus_UInt32  ddc2_delay_sel:4;
        RBus_UInt32  ddc3_delay_sel:4;
        RBus_UInt32  res4:1;
        RBus_UInt32  irdarxdetec:1;
    };
}iso_misc_system_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddc_u2r_en:3;
        RBus_UInt32  ddc_u2r_pin_sel:1;
        RBus_UInt32  u2r_rbus_en:1;
        RBus_UInt32  res1:27;
    };
}iso_misc_ddc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lsadc_int_to_scpu_en:1;
        RBus_UInt32  lsadc_int_to_emcu_en:1;
        RBus_UInt32  ddc0_int_to_scpu_en:1;
        RBus_UInt32  ddc0_int_to_emcu_en:1;
        RBus_UInt32  pwm0_int_to_scpu_en:1;
        RBus_UInt32  pwm0_int_to_emcu_en:1;
        RBus_UInt32  pwm1_int_to_scpu_en:1;
        RBus_UInt32  pwm1_int_to_emcu_en:1;
        RBus_UInt32  ddc1_int_to_scpu_en:1;
        RBus_UInt32  ddc1_int_to_emcu_en:1;
        RBus_UInt32  ddc2_int_to_scpu_en:1;
        RBus_UInt32  ddc2_int_to_emcu_en:1;
        RBus_UInt32  ddc3_int_to_scpu_en:1;
        RBus_UInt32  ddc3_int_to_emcu_en:1;
        RBus_UInt32  ddc4_int_to_scpu_en:1;
        RBus_UInt32  ddc4_int_to_emcu_en:1;
        RBus_UInt32  res1:16;
    };
}iso_misc_int_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1:32;
    };
}iso_misc_dummy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy2:32;
    };
}iso_misc_dummy2_RBUS;




#endif 


#endif 
