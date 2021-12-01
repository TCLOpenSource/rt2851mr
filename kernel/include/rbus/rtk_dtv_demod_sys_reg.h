/**
* @file Merlin5_DesignSpec_rtk_dtv_demod_sys
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_RTK_DTV_DEMOD_SYS_REG_H_
#define _RBUS_RTK_DTV_DEMOD_SYS_REG_H_

#include "rbus_types.h"



//  RTK_DTV_DEMOD_SYS Register Address
#define  RTK_DTV_DEMOD_SYS_DEMOD_SEL                                            0x18159004
#define  RTK_DTV_DEMOD_SYS_DEMOD_SEL_reg_addr                                    "0xB8159004"
#define  RTK_DTV_DEMOD_SYS_DEMOD_SEL_reg                                         0xB8159004
#define  RTK_DTV_DEMOD_SYS_DEMOD_SEL_inst_addr                                   "0x0000"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_SEL_reg(data)                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_SEL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_SEL_reg                                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_SEL_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_SEL_demod_sel_shift                             (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_SEL_demod_sel_mask                              (0x00000003)
#define  RTK_DTV_DEMOD_SYS_DEMOD_SEL_demod_sel(data)                             (0x00000003&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_SEL_get_demod_sel(data)                         (0x00000003&(data))

#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU                                           0x18159008
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_reg_addr                                   "0xB8159008"
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_reg                                        0xB8159008
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_inst_addr                                  "0x0001"
#define  set_RTK_DTV_DEMOD_SYS_INT_TO_CPU_reg(data)                              (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_INT_TO_CPU_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_INT_TO_CPU_reg                                    (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_INT_TO_CPU_reg))
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_rtk_demod_int_polar_shift                  (1)
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_rtk_demod_int_en_shift                     (0)
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_rtk_demod_int_polar_mask                   (0x00000002)
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_rtk_demod_int_en_mask                      (0x00000001)
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_rtk_demod_int_polar(data)                  (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_rtk_demod_int_en(data)                     (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_get_rtk_demod_int_polar(data)              ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_INT_TO_CPU_get_rtk_demod_int_en(data)                 (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL                                        0x1815900C
#define  RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_reg_addr                                "0xB815900C"
#define  RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_reg                                     0xB815900C
#define  RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_inst_addr                               "0x0002"
#define  set_RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_reg))
#define  RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_debug_pin_sel_shift                     (0)
#define  RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_debug_pin_sel_mask                      (0x00000007)
#define  RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_debug_pin_sel(data)                     (0x00000007&(data))
#define  RTK_DTV_DEMOD_SYS_DEBUG_PIN_SEL_get_debug_pin_sel(data)                 (0x00000007&(data))

#define  RTK_DTV_DEMOD_SYS_EN_8051_ICE                                          0x18159010
#define  RTK_DTV_DEMOD_SYS_EN_8051_ICE_reg_addr                                  "0xB8159010"
#define  RTK_DTV_DEMOD_SYS_EN_8051_ICE_reg                                       0xB8159010
#define  RTK_DTV_DEMOD_SYS_EN_8051_ICE_inst_addr                                 "0x0003"
#define  set_RTK_DTV_DEMOD_SYS_EN_8051_ICE_reg(data)                             (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_EN_8051_ICE_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_EN_8051_ICE_reg                                   (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_EN_8051_ICE_reg))
#define  RTK_DTV_DEMOD_SYS_EN_8051_ICE_en_8051_ice_shift                         (0)
#define  RTK_DTV_DEMOD_SYS_EN_8051_ICE_en_8051_ice_mask                          (0x00000001)
#define  RTK_DTV_DEMOD_SYS_EN_8051_ICE_en_8051_ice(data)                         (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_EN_8051_ICE_get_en_8051_ice(data)                     (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O                                        0x18159014
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_reg_addr                                "0xB8159014"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_reg                                     0xB8159014
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_inst_addr                               "0x0004"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_demod_debug_o_7_0_shift                 (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_demod_debug_o_7_0_mask                  (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_demod_debug_o_7_0(data)                 (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_get_demod_debug_o_7_0(data)             (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1                                      0x18159018
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_reg_addr                              "0xB8159018"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_reg                                   0xB8159018
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_inst_addr                             "0x0005"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_demod_debug_o_15_8_shift              (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_demod_debug_o_15_8_mask               (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_demod_debug_o_15_8(data)              (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_1_get_demod_debug_o_15_8(data)          (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2                                      0x1815901C
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_reg_addr                              "0xB815901C"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_reg                                   0xB815901C
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_inst_addr                             "0x0006"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_demod_debug_o_23_16_shift             (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_demod_debug_o_23_16_mask              (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_demod_debug_o_23_16(data)             (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_2_get_demod_debug_o_23_16(data)         (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3                                      0x18159020
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_reg_addr                              "0xB8159020"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_reg                                   0xB8159020
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_inst_addr                             "0x0007"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_demod_debug_o_31_24_shift             (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_demod_debug_o_31_24_mask              (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_demod_debug_o_31_24(data)             (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_O_3_get_demod_debug_o_31_24(data)         (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE                                       0x18159024
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_reg_addr                               "0xB8159024"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_reg                                    0xB8159024
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_inst_addr                              "0x0008"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_demod_debug_oe_7_0_shift               (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_demod_debug_oe_7_0_mask                (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_demod_debug_oe_7_0(data)               (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_get_demod_debug_oe_7_0(data)           (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1                                     0x18159028
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_reg_addr                             "0xB8159028"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_reg                                  0xB8159028
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_inst_addr                            "0x0009"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_reg(data)                        (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_reg                              (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_demod_debug_oe_15_8_shift            (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_demod_debug_oe_15_8_mask             (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_demod_debug_oe_15_8(data)            (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_1_get_demod_debug_oe_15_8(data)        (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2                                     0x1815902C
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_reg_addr                             "0xB815902C"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_reg                                  0xB815902C
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_inst_addr                            "0x000A"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_reg(data)                        (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_reg                              (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_demod_debug_oe_23_16_shift           (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_demod_debug_oe_23_16_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_demod_debug_oe_23_16(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_2_get_demod_debug_oe_23_16(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3                                     0x18159030
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_reg_addr                             "0xB8159030"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_reg                                  0xB8159030
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_inst_addr                            "0x000B"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_reg(data)                        (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_reg                              (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_demod_debug_oe_31_24_shift           (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_demod_debug_oe_31_24_mask            (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_demod_debug_oe_31_24(data)           (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUG_OE_3_get_demod_debug_oe_31_24(data)       (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE                                    0x18159034
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_reg_addr                            "0xB8159034"
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_reg                                 0xB8159034
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_inst_addr                           "0x000C"
#define  set_RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_reg))
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_re_lock_adc_phase_shift             (1)
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_adc_edge_shift                      (0)
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_re_lock_adc_phase_mask              (0x00000002)
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_adc_edge_mask                       (0x00000001)
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_re_lock_adc_phase(data)             (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_adc_edge(data)                      (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_get_re_lock_adc_phase(data)         ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_RE_LOCK_ADC_PHASE_get_adc_edge(data)                  (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_IQADC_SEL                                            0x18159038
#define  RTK_DTV_DEMOD_SYS_IQADC_SEL_reg_addr                                    "0xB8159038"
#define  RTK_DTV_DEMOD_SYS_IQADC_SEL_reg                                         0xB8159038
#define  RTK_DTV_DEMOD_SYS_IQADC_SEL_inst_addr                                   "0x000D"
#define  set_RTK_DTV_DEMOD_SYS_IQADC_SEL_reg(data)                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_IQADC_SEL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_IQADC_SEL_reg                                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_IQADC_SEL_reg))
#define  RTK_DTV_DEMOD_SYS_IQADC_SEL_iqadc_sel_shift                             (0)
#define  RTK_DTV_DEMOD_SYS_IQADC_SEL_iqadc_sel_mask                              (0x00000001)
#define  RTK_DTV_DEMOD_SYS_IQADC_SEL_iqadc_sel(data)                             (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_IQADC_SEL_get_iqadc_sel(data)                         (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_AGC_IO_SEL                                           0x1815903C
#define  RTK_DTV_DEMOD_SYS_AGC_IO_SEL_reg_addr                                   "0xB815903C"
#define  RTK_DTV_DEMOD_SYS_AGC_IO_SEL_reg                                        0xB815903C
#define  RTK_DTV_DEMOD_SYS_AGC_IO_SEL_inst_addr                                  "0x000E"
#define  set_RTK_DTV_DEMOD_SYS_AGC_IO_SEL_reg(data)                              (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_AGC_IO_SEL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_AGC_IO_SEL_reg                                    (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_AGC_IO_SEL_reg))
#define  RTK_DTV_DEMOD_SYS_AGC_IO_SEL_agc_io_sel_shift                           (0)
#define  RTK_DTV_DEMOD_SYS_AGC_IO_SEL_agc_io_sel_mask                            (0x00000001)
#define  RTK_DTV_DEMOD_SYS_AGC_IO_SEL_agc_io_sel(data)                           (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_AGC_IO_SEL_get_agc_io_sel(data)                       (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_RFAGC_REG                                            0x18159040
#define  RTK_DTV_DEMOD_SYS_RFAGC_REG_reg_addr                                    "0xB8159040"
#define  RTK_DTV_DEMOD_SYS_RFAGC_REG_reg                                         0xB8159040
#define  RTK_DTV_DEMOD_SYS_RFAGC_REG_inst_addr                                   "0x000F"
#define  set_RTK_DTV_DEMOD_SYS_RFAGC_REG_reg(data)                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_RFAGC_REG_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_RFAGC_REG_reg                                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_RFAGC_REG_reg))
#define  RTK_DTV_DEMOD_SYS_RFAGC_REG_rfagc_reg_shift                             (0)
#define  RTK_DTV_DEMOD_SYS_RFAGC_REG_rfagc_reg_mask                              (0x00000003)
#define  RTK_DTV_DEMOD_SYS_RFAGC_REG_rfagc_reg(data)                             (0x00000003&(data))
#define  RTK_DTV_DEMOD_SYS_RFAGC_REG_get_rfagc_reg(data)                         (0x00000003&(data))

#define  RTK_DTV_DEMOD_SYS_IFAGC_REG                                            0x18159044
#define  RTK_DTV_DEMOD_SYS_IFAGC_REG_reg_addr                                    "0xB8159044"
#define  RTK_DTV_DEMOD_SYS_IFAGC_REG_reg                                         0xB8159044
#define  RTK_DTV_DEMOD_SYS_IFAGC_REG_inst_addr                                   "0x0010"
#define  set_RTK_DTV_DEMOD_SYS_IFAGC_REG_reg(data)                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_IFAGC_REG_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_IFAGC_REG_reg                                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_IFAGC_REG_reg))
#define  RTK_DTV_DEMOD_SYS_IFAGC_REG_ifagc_reg_shift                             (0)
#define  RTK_DTV_DEMOD_SYS_IFAGC_REG_ifagc_reg_mask                              (0x00000003)
#define  RTK_DTV_DEMOD_SYS_IFAGC_REG_ifagc_reg(data)                             (0x00000003&(data))
#define  RTK_DTV_DEMOD_SYS_IFAGC_REG_get_ifagc_reg(data)                         (0x00000003&(data))

#define  RTK_DTV_DEMOD_SYS_R_PSD_START                                          0x18159048
#define  RTK_DTV_DEMOD_SYS_R_PSD_START_reg_addr                                  "0xB8159048"
#define  RTK_DTV_DEMOD_SYS_R_PSD_START_reg                                       0xB8159048
#define  RTK_DTV_DEMOD_SYS_R_PSD_START_inst_addr                                 "0x0011"
#define  set_RTK_DTV_DEMOD_SYS_R_PSD_START_reg(data)                             (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_R_PSD_START_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_R_PSD_START_reg                                   (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_R_PSD_START_reg))
#define  RTK_DTV_DEMOD_SYS_R_PSD_START_r_psd_start_shift                         (0)
#define  RTK_DTV_DEMOD_SYS_R_PSD_START_r_psd_start_mask                          (0x00000001)
#define  RTK_DTV_DEMOD_SYS_R_PSD_START_r_psd_start(data)                         (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_R_PSD_START_get_r_psd_start(data)                     (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL                                             0x1815904C
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_reg_addr                                     "0xB815904C"
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_reg                                          0xB815904C
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_inst_addr                                    "0x0012"
#define  set_RTK_DTV_DEMOD_SYS_R_IQ_SEL_reg(data)                                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_R_IQ_SEL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_R_IQ_SEL_reg                                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_R_IQ_SEL_reg))
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_psd_sp_shift                               (6)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_psd_no_shift                               (4)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_iq_sel_shift                               (2)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_psd_dco_msb_shift                          (0)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_psd_sp_mask                                (0x000000C0)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_psd_no_mask                                (0x00000030)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_iq_sel_mask                                (0x0000000C)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_psd_dco_msb_mask                           (0x00000003)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_psd_sp(data)                               (0x000000C0&((data)<<6))
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_psd_no(data)                               (0x00000030&((data)<<4))
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_iq_sel(data)                               (0x0000000C&((data)<<2))
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_r_psd_dco_msb(data)                          (0x00000003&(data))
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_get_r_psd_sp(data)                           ((0x000000C0&(data))>>6)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_get_r_psd_no(data)                           ((0x00000030&(data))>>4)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_get_r_iq_sel(data)                           ((0x0000000C&(data))>>2)
#define  RTK_DTV_DEMOD_SYS_R_IQ_SEL_get_r_psd_dco_msb(data)                      (0x00000003&(data))

#define  RTK_DTV_DEMOD_SYS_R_PSD_CTRL2                                          0x18159050
#define  RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_reg_addr                                  "0xB8159050"
#define  RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_reg                                       0xB8159050
#define  RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_inst_addr                                 "0x0013"
#define  set_RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_reg(data)                             (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_reg                                   (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_reg))
#define  RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_r_psd_ctrl2_shift                         (0)
#define  RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_r_psd_ctrl2_mask                          (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_r_psd_ctrl2(data)                         (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_R_PSD_CTRL2_get_r_psd_ctrl2(data)                     (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_R_PSD_DCO                                            0x18159054
#define  RTK_DTV_DEMOD_SYS_R_PSD_DCO_reg_addr                                    "0xB8159054"
#define  RTK_DTV_DEMOD_SYS_R_PSD_DCO_reg                                         0xB8159054
#define  RTK_DTV_DEMOD_SYS_R_PSD_DCO_inst_addr                                   "0x0014"
#define  set_RTK_DTV_DEMOD_SYS_R_PSD_DCO_reg(data)                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_R_PSD_DCO_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_R_PSD_DCO_reg                                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_R_PSD_DCO_reg))
#define  RTK_DTV_DEMOD_SYS_R_PSD_DCO_r_psd_dco_shift                             (0)
#define  RTK_DTV_DEMOD_SYS_R_PSD_DCO_r_psd_dco_mask                              (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_R_PSD_DCO_r_psd_dco(data)                             (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_R_PSD_DCO_get_r_psd_dco(data)                         (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_R_SIN_SCALE                                          0x18159058
#define  RTK_DTV_DEMOD_SYS_R_SIN_SCALE_reg_addr                                  "0xB8159058"
#define  RTK_DTV_DEMOD_SYS_R_SIN_SCALE_reg                                       0xB8159058
#define  RTK_DTV_DEMOD_SYS_R_SIN_SCALE_inst_addr                                 "0x0015"
#define  set_RTK_DTV_DEMOD_SYS_R_SIN_SCALE_reg(data)                             (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_R_SIN_SCALE_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_R_SIN_SCALE_reg                                   (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_R_SIN_SCALE_reg))
#define  RTK_DTV_DEMOD_SYS_R_SIN_SCALE_r_sin_scale_shift                         (0)
#define  RTK_DTV_DEMOD_SYS_R_SIN_SCALE_r_sin_scale_mask                          (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_R_SIN_SCALE_r_sin_scale(data)                         (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_R_SIN_SCALE_get_r_sin_scale(data)                     (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_MB_RST_N                                             0x18159084
#define  RTK_DTV_DEMOD_SYS_MB_RST_N_reg_addr                                     "0xB8159084"
#define  RTK_DTV_DEMOD_SYS_MB_RST_N_reg                                          0xB8159084
#define  RTK_DTV_DEMOD_SYS_MB_RST_N_inst_addr                                    "0x0016"
#define  set_RTK_DTV_DEMOD_SYS_MB_RST_N_reg(data)                                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_MB_RST_N_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_MB_RST_N_reg                                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_MB_RST_N_reg))
#define  RTK_DTV_DEMOD_SYS_MB_RST_N_mb_rst_n_shift                               (0)
#define  RTK_DTV_DEMOD_SYS_MB_RST_N_mb_rst_n_mask                                (0x00000001)
#define  RTK_DTV_DEMOD_SYS_MB_RST_N_mb_rst_n(data)                               (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_MB_RST_N_get_mb_rst_n(data)                           (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_EXT_ADC_SEL                                          0x18159088
#define  RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_reg_addr                                  "0xB8159088"
#define  RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_reg                                       0xB8159088
#define  RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_inst_addr                                 "0x0017"
#define  set_RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_reg(data)                             (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_reg                                   (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_reg))
#define  RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_ext_adc_sel_shift                         (0)
#define  RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_ext_adc_sel_mask                          (0x00000001)
#define  RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_ext_adc_sel(data)                         (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_EXT_ADC_SEL_get_ext_adc_sel(data)                     (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_SECOND_RUN_EN                                        0x1815908C
#define  RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_reg_addr                                "0xB815908C"
#define  RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_reg                                     0xB815908C
#define  RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_inst_addr                               "0x0018"
#define  set_RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_reg))
#define  RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_second_run_en_shift                     (0)
#define  RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_second_run_en_mask                      (0x00000001)
#define  RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_second_run_en(data)                     (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_SECOND_RUN_EN_get_second_run_en(data)                 (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL                                        0x18159090
#define  RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_reg_addr                                "0xB8159090"
#define  RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_reg                                     0xB8159090
#define  RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_inst_addr                               "0x0019"
#define  set_RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_reg))
#define  RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_adc_phase_sel_shift                     (0)
#define  RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_adc_phase_sel_mask                      (0x00000003)
#define  RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_adc_phase_sel(data)                     (0x00000003&(data))
#define  RTK_DTV_DEMOD_SYS_ADC_PHASE_SEL_get_adc_phase_sel(data)                 (0x00000003&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_VERSION                                        0x18159094
#define  RTK_DTV_DEMOD_SYS_DEMOD_VERSION_reg_addr                                "0xB8159094"
#define  RTK_DTV_DEMOD_SYS_DEMOD_VERSION_reg                                     0xB8159094
#define  RTK_DTV_DEMOD_SYS_DEMOD_VERSION_inst_addr                               "0x001A"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_VERSION_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_VERSION_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_VERSION_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_VERSION_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_VERSION_demod_version_shift                     (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_VERSION_demod_version_mask                      (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_VERSION_demod_version(data)                     (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_VERSION_get_demod_version(data)                 (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR                               0x18159098
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_reg_addr                       "0xB8159098"
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_reg                            0xB8159098
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_inst_addr                      "0x001B"
#define  set_RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_reg(data)                  (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_reg                        (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_reg))
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_underflow_shift       (3)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_overflow_shift        (2)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_underflow_clr_shift   (1)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_overflow_clr_shift    (0)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_underflow_mask        (0x00000008)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_overflow_mask         (0x00000004)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_underflow_clr_mask    (0x00000002)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_overflow_clr_mask     (0x00000001)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_underflow(data)       (0x00000008&((data)<<3))
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_overflow(data)        (0x00000004&((data)<<2))
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_underflow_clr(data)   (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_debugdma_overflow_clr(data)    (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_get_debugdma_underflow(data)   ((0x00000008&(data))>>3)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_get_debugdma_overflow(data)    ((0x00000004&(data))>>2)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_get_debugdma_underflow_clr(data) ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_DEBUGDMA_UNDERFLOW_CLR_get_debugdma_overflow_clr(data) (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN                                  0x1815909C
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_reg_addr                          "0xB815909C"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_reg                               0xB815909C
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_inst_addr                         "0x001C"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_demod_debugdma_blen_shift         (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_demod_debugdma_blen_mask          (0x0000003F)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_demod_debugdma_blen(data)         (0x0000003F&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_BLEN_get_demod_debugdma_blen(data)     (0x0000003F&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM                          0x181590A0
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_reg_addr                  "0xB81590A0"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_reg                       0xB81590A0
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_inst_addr                 "0x001D"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_reg(data)             (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_reg                   (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_demod_debugdma_circular_num_shift (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_demod_debugdma_circular_num_mask (0x0000000F)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_demod_debugdma_circular_num(data) (0x0000000F&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_CIRCULAR_NUM_get_demod_debugdma_circular_num(data) (0x0000000F&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR                               0x181590A4
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_reg_addr                       "0xB81590A4"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_reg                            0xB81590A4
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_inst_addr                      "0x001E"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_reg(data)                  (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_reg                        (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_demod_debugdma_endaddr_7_0_shift (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_demod_debugdma_endaddr_7_0_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_demod_debugdma_endaddr_7_0(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_get_demod_debugdma_endaddr_7_0(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1                             0x181590A8
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_reg_addr                     "0xB81590A8"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_reg                          0xB81590A8
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_inst_addr                    "0x001F"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_reg(data)                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_reg                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_demod_debugdma_endaddr_15_8_shift (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_demod_debugdma_endaddr_15_8_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_demod_debugdma_endaddr_15_8(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_1_get_demod_debugdma_endaddr_15_8(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2                             0x181590AC
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_reg_addr                     "0xB81590AC"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_reg                          0xB81590AC
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_inst_addr                    "0x0020"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_reg(data)                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_reg                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_demod_debugdma_endaddr_23_16_shift (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_demod_debugdma_endaddr_23_16_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_demod_debugdma_endaddr_23_16(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_2_get_demod_debugdma_endaddr_23_16(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3                             0x181590B0
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_reg_addr                     "0xB81590B0"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_reg                          0xB81590B0
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_inst_addr                    "0x0021"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_reg(data)                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_reg                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_demod_debugdma_endaddr_28_24_shift (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_demod_debugdma_endaddr_28_24_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_demod_debugdma_endaddr_28_24(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_ENDADDR_3_get_demod_debugdma_endaddr_28_24(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR                             0x181590B4
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_reg_addr                     "0xB81590B4"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_reg                          0xB81590B4
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_inst_addr                    "0x0022"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_reg(data)                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_reg                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_demod_debugdma_startaddr_7_0_shift (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_demod_debugdma_startaddr_7_0_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_demod_debugdma_startaddr_7_0(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_get_demod_debugdma_startaddr_7_0(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1                           0x181590B8
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_reg_addr                   "0xB81590B8"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_reg                        0xB81590B8
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_inst_addr                  "0x0023"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_reg(data)              (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_reg                    (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_demod_debugdma_startaddr_15_8_shift (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_demod_debugdma_startaddr_15_8_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_demod_debugdma_startaddr_15_8(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_1_get_demod_debugdma_startaddr_15_8(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2                           0x181590BC
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_reg_addr                   "0xB81590BC"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_reg                        0xB81590BC
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_inst_addr                  "0x0024"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_reg(data)              (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_reg                    (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_demod_debugdma_startaddr_23_16_shift (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_demod_debugdma_startaddr_23_16_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_demod_debugdma_startaddr_23_16(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_2_get_demod_debugdma_startaddr_23_16(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3                           0x181590C0
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_reg_addr                   "0xB81590C0"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_reg                        0xB81590C0
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_inst_addr                  "0x0025"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_reg(data)              (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_reg                    (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_demod_debugdma_startaddr_28_24_shift (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_demod_debugdma_startaddr_28_24_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_demod_debugdma_startaddr_28_24(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_STARTADDR_3_get_demod_debugdma_startaddr_28_24(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL                              0x181590C4
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_reg_addr                      "0xB81590C4"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_reg                           0xB81590C4
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_inst_addr                     "0x0026"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_reg(data)                 (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_reg                       (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_demod_debugdma_waterlvl_shift (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_demod_debugdma_waterlvl_mask  (0x0000003F)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_demod_debugdma_waterlvl(data) (0x0000003F&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DEBUGDMA_WATERLVL_get_demod_debugdma_waterlvl(data) (0x0000003F&(data))

#define  RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN                                      0x181590C8
#define  RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_reg_addr                              "0xB81590C8"
#define  RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_reg                                   0xB81590C8
#define  RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_inst_addr                             "0x0027"
#define  set_RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_reg))
#define  RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_dtv_debugdma_en_shift                 (0)
#define  RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_dtv_debugdma_en_mask                  (0x00000001)
#define  RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_dtv_debugdma_en(data)                 (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_DTV_DEBUGDMA_EN_get_dtv_debugdma_en(data)             (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL                               0x181590DC
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_reg_addr                       "0xB81590DC"
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_reg                            0xB81590DC
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_inst_addr                      "0x0028"
#define  set_RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_reg(data)                  (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_reg                        (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_reg))
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_wrapper_dtmb_isdbt_sel_shift   (1)
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_demod_wrapper_arb_pri_shift    (0)
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_wrapper_dtmb_isdbt_sel_mask    (0x00000002)
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_demod_wrapper_arb_pri_mask     (0x00000001)
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_wrapper_dtmb_isdbt_sel(data)   (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_demod_wrapper_arb_pri(data)    (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_get_wrapper_dtmb_isdbt_sel(data) ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_WRAPPER_DTMB_ISDBT_SEL_get_demod_wrapper_arb_pri(data) (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL                                    0x181590E0
#define  RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_reg_addr                            "0xB81590E0"
#define  RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_reg                                 0xB81590E0
#define  RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_inst_addr                           "0x0029"
#define  set_RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_reg))
#define  RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_dump_adc_dagc_sel_shift             (0)
#define  RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_dump_adc_dagc_sel_mask              (0x00000001)
#define  RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_dump_adc_dagc_sel(data)             (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_DUMP_ADC_DAGC_SEL_get_dump_adc_dagc_sel(data)         (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL                               0x181590E4
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_reg_addr                       "0xB81590E4"
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_reg                            0xB81590E4
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_inst_addr                      "0x002A"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_reg(data)                  (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_reg                        (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_dtv_demod_multi_req_disable_shift (4)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_arb_bypass_sel_shift           (3)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_isdbt_max_read_cmd_sel_shift   (1)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_isdbt_max_read_cmd_en_shift    (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_dtv_demod_multi_req_disable_mask (0x00000010)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_arb_bypass_sel_mask            (0x00000008)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_isdbt_max_read_cmd_sel_mask    (0x00000006)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_isdbt_max_read_cmd_en_mask     (0x00000001)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_dtv_demod_multi_req_disable(data) (0x00000010&((data)<<4))
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_arb_bypass_sel(data)           (0x00000008&((data)<<3))
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_isdbt_max_read_cmd_sel(data)   (0x00000006&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_isdbt_max_read_cmd_en(data)    (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_get_dtv_demod_multi_req_disable(data) ((0x00000010&(data))>>4)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_get_arb_bypass_sel(data)       ((0x00000008&(data))>>3)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_get_isdbt_max_read_cmd_sel(data) ((0x00000006&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_ISDBT_MAX_READ_CMD_SEL_get_isdbt_max_read_cmd_en(data) (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1                                       0x181590F0
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_reg_addr                               "0xB81590F0"
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_reg                                    0xB81590F0
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_inst_addr                              "0x002B"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_fix_error_shift               (3)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_fix_sync_shift                (2)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_fix_val_shift                 (1)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_out_fix_en_shift              (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_fix_error_mask                (0x00000008)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_fix_sync_mask                 (0x00000004)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_fix_val_mask                  (0x00000002)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_out_fix_en_mask               (0x00000001)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_fix_error(data)               (0x00000008&((data)<<3))
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_fix_sync(data)                (0x00000004&((data)<<2))
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_fix_val(data)                 (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_demod_tp_out_fix_en(data)              (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_get_demod_tp_fix_error(data)           ((0x00000008&(data))>>3)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_get_demod_tp_fix_sync(data)            ((0x00000004&(data))>>2)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_get_demod_tp_fix_val(data)             ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_1_get_demod_tp_out_fix_en(data)          (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2                                       0x181590F4
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_reg_addr                               "0xB81590F4"
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_reg                                    0xB81590F4
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_inst_addr                              "0x002C"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_demod_tp_fix_dat_shift                 (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_demod_tp_fix_dat_mask                  (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_demod_tp_fix_dat(data)                 (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_TP_FIX_2_get_demod_tp_fix_dat(data)             (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1                                      0x181590F8
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_reg_addr                              "0xB81590F8"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_reg                                   0xB81590F8
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_inst_addr                             "0x002D"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_demod_data_7_0_shift                  (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_demod_data_7_0_mask                   (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_demod_data_7_0(data)                  (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_1_get_demod_data_7_0(data)              (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2                                      0x181590FC
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_reg_addr                              "0xB81590FC"
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_reg                                   0xB81590FC
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_inst_addr                             "0x002E"
#define  set_RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_reg))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_demod_data_valid_shift                (4)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_demod_data_10_8_shift                 (0)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_demod_data_valid_mask                 (0x00000010)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_demod_data_10_8_mask                  (0x00000007)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_demod_data_valid(data)                (0x00000010&((data)<<4))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_demod_data_10_8(data)                 (0x00000007&(data))
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_get_demod_data_valid(data)            ((0x00000010&(data))>>4)
#define  RTK_DTV_DEMOD_SYS_DEMOD_DATA_IN_2_get_demod_data_10_8(data)             (0x00000007&(data))

#define  RTK_DTV_DEMOD_SYS_PSD_DONE                                             0x18159404
#define  RTK_DTV_DEMOD_SYS_PSD_DONE_reg_addr                                     "0xB8159404"
#define  RTK_DTV_DEMOD_SYS_PSD_DONE_reg                                          0xB8159404
#define  RTK_DTV_DEMOD_SYS_PSD_DONE_inst_addr                                    "0x002F"
#define  set_RTK_DTV_DEMOD_SYS_PSD_DONE_reg(data)                                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_PSD_DONE_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_PSD_DONE_reg                                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_PSD_DONE_reg))
#define  RTK_DTV_DEMOD_SYS_PSD_DONE_psd_done_shift                               (0)
#define  RTK_DTV_DEMOD_SYS_PSD_DONE_psd_done_mask                                (0x00000001)
#define  RTK_DTV_DEMOD_SYS_PSD_DONE_psd_done(data)                               (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_PSD_DONE_get_psd_done(data)                           (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_PSD_PWR_15_08                                        0x18159408
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_reg_addr                                "0xB8159408"
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_reg                                     0xB8159408
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_inst_addr                               "0x0030"
#define  set_RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_reg))
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_psd_pwr_15_08_shift                     (0)
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_psd_pwr_15_08_mask                      (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_psd_pwr_15_08(data)                     (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_15_08_get_psd_pwr_15_08(data)                 (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_PSD_PWR_07_00                                        0x1815940C
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_reg_addr                                "0xB815940C"
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_reg                                     0xB815940C
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_inst_addr                               "0x0031"
#define  set_RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_reg))
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_psd_pwr_07_00_shift                     (0)
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_psd_pwr_07_00_mask                      (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_psd_pwr_07_00(data)                     (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_PSD_PWR_07_00_get_psd_pwr_07_00(data)                 (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1_                                      0x18159414
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__reg_addr                              "0xB8159414"
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__reg                                   0xB8159414
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__inst_addr                             "0x0032"
#define  set_RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__reg(data)                         (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__reg                               (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__reg))
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__bist_mode_ocp2_shift                  (1)
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__bist_mode_ocp1_shift                  (0)
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__bist_mode_ocp2_mask                   (0x00000002)
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__bist_mode_ocp1_mask                   (0x00000001)
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__bist_mode_ocp2(data)                  (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__bist_mode_ocp1(data)                  (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__get_bist_mode_ocp2(data)              ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_SYS1__get_bist_mode_ocp1(data)              (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1_                                  0x1815941C
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__reg_addr                          "0xB815941C"
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__reg                               0xB815941C
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__inst_addr                         "0x0033"
#define  set_RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__reg))
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__drf_bist_mode_ocp2_shift          (1)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__drf_bist_mode_ocp1_shift          (0)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__drf_bist_mode_ocp2_mask           (0x00000002)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__drf_bist_mode_ocp1_mask           (0x00000001)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__drf_bist_mode_ocp2(data)          (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__drf_bist_mode_ocp1(data)          (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__get_drf_bist_mode_ocp2(data)      ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_MODE_SYS1__get_drf_bist_mode_ocp1(data)      (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1_                                0x18159424
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__reg_addr                        "0xB8159424"
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__reg                             0xB8159424
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__inst_addr                       "0x0034"
#define  set_RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__reg(data)                   (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__reg                         (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__reg))
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__drf_test_resume_ocp2_shift      (1)
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__drf_test_resume_ocp1_shift      (0)
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__drf_test_resume_ocp2_mask       (0x00000002)
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__drf_test_resume_ocp1_mask       (0x00000001)
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__drf_test_resume_ocp2(data)      (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__drf_test_resume_ocp1(data)      (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__get_drf_test_resume_ocp2(data)  ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_DRF_TEST_RESUME_SYS1__get_drf_test_resume_ocp1(data)  (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1                                       0x18159438
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_reg_addr                               "0xB8159438"
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_reg                                    0xB8159438
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_inst_addr                              "0x0035"
#define  set_RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_reg))
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_bist_done_ocp2_shift                   (1)
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_bist_done_ocp1_shift                   (0)
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_bist_done_ocp2_mask                    (0x00000002)
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_bist_done_ocp1_mask                    (0x00000001)
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_bist_done_ocp2(data)                   (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_bist_done_ocp1(data)                   (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_get_bist_done_ocp2(data)               ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_SYS1_get_bist_done_ocp1(data)               (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1                                   0x18159440
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_reg_addr                           "0xB8159440"
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_reg                                0xB8159440
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_inst_addr                          "0x0036"
#define  set_RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_reg(data)                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_reg                            (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_reg))
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_drf_bist_done_ocp2_shift           (1)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_drf_bist_done_ocp1_shift           (0)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_drf_bist_done_ocp2_mask            (0x00000002)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_drf_bist_done_ocp1_mask            (0x00000001)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_drf_bist_done_ocp2(data)           (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_drf_bist_done_ocp1(data)           (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_get_drf_bist_done_ocp2(data)       ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_DONE_SYS1_get_drf_bist_done_ocp1(data)       (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1                                       0x18159448
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_reg_addr                               "0xB8159448"
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_reg                                    0xB8159448
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_inst_addr                              "0x0037"
#define  set_RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_reg))
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_bist_fail_ocp2_shift                   (1)
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_bist_fail_ocp1_shift                   (0)
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_bist_fail_ocp2_mask                    (0x00000002)
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_bist_fail_ocp1_mask                    (0x00000001)
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_bist_fail_ocp2(data)                   (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_bist_fail_ocp1(data)                   (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_get_bist_fail_ocp2(data)               ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_BIST_FAIL_SYS1_get_bist_fail_ocp1(data)               (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1                                   0x18159450
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_reg_addr                           "0xB8159450"
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_reg                                0xB8159450
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_inst_addr                          "0x0038"
#define  set_RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_reg(data)                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_reg                            (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_reg))
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_drf_bist_fail_ocp2_shift           (1)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_drf_bist_fail_ocp1_shift           (0)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_drf_bist_fail_ocp2_mask            (0x00000002)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_drf_bist_fail_ocp1_mask            (0x00000001)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_drf_bist_fail_ocp2(data)           (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_drf_bist_fail_ocp1(data)           (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_get_drf_bist_fail_ocp2(data)       ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_DRF_BIST_FAIL_SYS1_get_drf_bist_fail_ocp1(data)       (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1                                     0x18159454
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_reg_addr                             "0xB8159454"
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_reg                                  0xB8159454
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_inst_addr                            "0x0039"
#define  set_RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_reg(data)                        (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_reg                              (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_reg))
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_drf_start_pause_ocp2_shift           (1)
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_drf_start_pause_ocp1_shift           (0)
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_drf_start_pause_ocp2_mask            (0x00000002)
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_drf_start_pause_ocp1_mask            (0x00000001)
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_drf_start_pause_ocp2(data)           (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_drf_start_pause_ocp1(data)           (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_get_drf_start_pause_ocp2(data)       ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_START_PAUSE_SYS1_get_drf_start_pause_ocp1(data)       (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE                                  0x18159540
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_reg_addr                          "0xB8159540"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_reg                               0xB8159540
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_inst_addr                         "0x003A"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_mbist_isdbt_rom2_bist_mode_shift  (1)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_mbist_isdbt_rom1_bist_mode_shift  (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_mbist_isdbt_rom2_bist_mode_mask   (0x00000002)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_mbist_isdbt_rom1_bist_mode_mask   (0x00000001)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_mbist_isdbt_rom2_bist_mode(data)  (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_mbist_isdbt_rom1_bist_mode(data)  (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_get_mbist_isdbt_rom2_bist_mode(data) ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_MODE_get_mbist_isdbt_rom1_bist_mode(data) (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE                                  0x18159544
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_reg_addr                          "0xB8159544"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_reg                               0xB8159544
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_inst_addr                         "0x003B"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_mbist_isdbt_rom2_bist_done_shift  (1)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_mbist_isdbt_rom1_bist_done_shift  (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_mbist_isdbt_rom2_bist_done_mask   (0x00000002)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_mbist_isdbt_rom1_bist_done_mask   (0x00000001)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_mbist_isdbt_rom2_bist_done(data)  (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_mbist_isdbt_rom1_bist_done(data)  (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_get_mbist_isdbt_rom2_bist_done(data) ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_DONE_get_mbist_isdbt_rom1_bist_done(data) (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS                                        0x18159548
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_reg_addr                                "0xB8159548"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_reg                                     0xB8159548
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_inst_addr                               "0x003C"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_mbist_isdbt_rom2_dvs_shift              (4)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_mbist_isdbt_rom1_dvs_shift              (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_mbist_isdbt_rom2_dvs_mask               (0x000000F0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_mbist_isdbt_rom1_dvs_mask               (0x0000000F)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_mbist_isdbt_rom2_dvs(data)              (0x000000F0&((data)<<4))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_mbist_isdbt_rom1_dvs(data)              (0x0000000F&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_get_mbist_isdbt_rom2_dvs(data)          ((0x000000F0&(data))>>4)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVS_get_mbist_isdbt_rom1_dvs(data)          (0x0000000F&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE                                       0x1815954C
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_reg_addr                               "0xB815954C"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_reg                                    0xB815954C
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_inst_addr                              "0x003D"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_reg(data)                          (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_reg                                (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_mbist_isdbt_rom_te_shift               (2)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_mbist_isdbt_rom2_dvse_shift            (1)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_mbist_isdbt_rom1_dvse_shift            (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_mbist_isdbt_rom_te_mask                (0x00000004)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_mbist_isdbt_rom2_dvse_mask             (0x00000002)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_mbist_isdbt_rom1_dvse_mask             (0x00000001)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_mbist_isdbt_rom_te(data)               (0x00000004&((data)<<2))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_mbist_isdbt_rom2_dvse(data)            (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_mbist_isdbt_rom1_dvse(data)            (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_get_mbist_isdbt_rom_te(data)           ((0x00000004&(data))>>2)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_get_mbist_isdbt_rom2_dvse(data)        ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_DVSE_get_mbist_isdbt_rom1_dvse(data)        (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0                                  0x18159550
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_reg_addr                          "0xB8159550"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_reg                               0xB8159550
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_inst_addr                         "0x003E"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_mbist_isdbt_rom1_dataout_7_0_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_mbist_isdbt_rom1_dataout_7_0_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_mbist_isdbt_rom1_dataout_7_0(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT0_get_mbist_isdbt_rom1_dataout_7_0(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1                                  0x18159554
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_reg_addr                          "0xB8159554"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_reg                               0xB8159554
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_inst_addr                         "0x003F"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_mbist_isdbt_rom1_dataout_15_8_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_mbist_isdbt_rom1_dataout_15_8_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_mbist_isdbt_rom1_dataout_15_8(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT1_get_mbist_isdbt_rom1_dataout_15_8(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2                                  0x18159558
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_reg_addr                          "0xB8159558"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_reg                               0xB8159558
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_inst_addr                         "0x0040"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_mbist_isdbt_rom1_dataout_23_16_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_mbist_isdbt_rom1_dataout_23_16_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_mbist_isdbt_rom1_dataout_23_16(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT2_get_mbist_isdbt_rom1_dataout_23_16(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3                                  0x1815955C
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_reg_addr                          "0xB815955C"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_reg                               0xB815955C
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_inst_addr                         "0x0041"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_mbist_isdbt_rom1_dataout_31_24_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_mbist_isdbt_rom1_dataout_31_24_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_mbist_isdbt_rom1_dataout_31_24(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT3_get_mbist_isdbt_rom1_dataout_31_24(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4                                  0x18159560
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_reg_addr                          "0xB8159560"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_reg                               0xB8159560
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_inst_addr                         "0x0042"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_mbist_isdbt_rom1_dataout_39_32_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_mbist_isdbt_rom1_dataout_39_32_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_mbist_isdbt_rom1_dataout_39_32(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT4_get_mbist_isdbt_rom1_dataout_39_32(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5                                  0x18159564
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_reg_addr                          "0xB8159564"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_reg                               0xB8159564
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_inst_addr                         "0x0043"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_mbist_isdbt_rom1_dataout_47_40_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_mbist_isdbt_rom1_dataout_47_40_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_mbist_isdbt_rom1_dataout_47_40(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT5_get_mbist_isdbt_rom1_dataout_47_40(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6                                  0x18159568
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_reg_addr                          "0xB8159568"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_reg                               0xB8159568
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_inst_addr                         "0x0044"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_mbist_isdbt_rom1_dataout_51_48_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_mbist_isdbt_rom1_dataout_51_48_mask (0x0000000F)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_mbist_isdbt_rom1_dataout_51_48(data) (0x0000000F&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT6_get_mbist_isdbt_rom1_dataout_51_48(data) (0x0000000F&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7                                  0x1815956C
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_reg_addr                          "0xB815956C"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_reg                               0xB815956C
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_inst_addr                         "0x0045"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_mbist_isdbt_rom2_dataout_7_0_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_mbist_isdbt_rom2_dataout_7_0_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_mbist_isdbt_rom2_dataout_7_0(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT7_get_mbist_isdbt_rom2_dataout_7_0(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8                                  0x18159570
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_reg_addr                          "0xB8159570"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_reg                               0xB8159570
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_inst_addr                         "0x0046"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_mbist_isdbt_rom2_dataout_15_8_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_mbist_isdbt_rom2_dataout_15_8_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_mbist_isdbt_rom2_dataout_15_8(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT8_get_mbist_isdbt_rom2_dataout_15_8(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9                                  0x18159574
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_reg_addr                          "0xB8159574"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_reg                               0xB8159574
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_inst_addr                         "0x0047"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_reg(data)                     (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_reg                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_mbist_isdbt_rom2_dataout_23_16_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_mbist_isdbt_rom2_dataout_23_16_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_mbist_isdbt_rom2_dataout_23_16(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT9_get_mbist_isdbt_rom2_dataout_23_16(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10                                 0x18159578
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_reg_addr                         "0xB8159578"
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_reg                              0xB8159578
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_inst_addr                        "0x0048"
#define  set_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_reg(data)                    (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_reg                          (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_reg))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_mbist_isdbt_rom2_dataout_31_24_shift (0)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_mbist_isdbt_rom2_dataout_31_24_mask (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_mbist_isdbt_rom2_dataout_31_24(data) (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_ISDBT_ROM_BIST_OUT10_get_mbist_isdbt_rom2_dataout_31_24(data) (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA                                        0x18159580
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_reg_addr                                "0xB8159580"
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_reg                                     0xB8159580
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_inst_addr                               "0x0049"
#define  set_RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_reg(data)                           (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_reg                                 (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_reg))
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_bist_mode_debugdma_shift                (7)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_drf_bist_mode_debugdma_shift            (6)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_drf_test_resume_debugdma_shift          (5)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_mbist_deugdma_dvse_shift                (4)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_mbist_deugdma_dvs_shift                 (0)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_bist_mode_debugdma_mask                 (0x00000080)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_drf_bist_mode_debugdma_mask             (0x00000040)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_drf_test_resume_debugdma_mask           (0x00000020)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_mbist_deugdma_dvse_mask                 (0x00000010)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_mbist_deugdma_dvs_mask                  (0x0000000F)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_bist_mode_debugdma(data)                (0x00000080&((data)<<7))
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_drf_bist_mode_debugdma(data)            (0x00000040&((data)<<6))
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_drf_test_resume_debugdma(data)          (0x00000020&((data)<<5))
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_mbist_deugdma_dvse(data)                (0x00000010&((data)<<4))
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_mbist_deugdma_dvs(data)                 (0x0000000F&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_get_bist_mode_debugdma(data)            ((0x00000080&(data))>>7)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_get_drf_bist_mode_debugdma(data)        ((0x00000040&(data))>>6)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_get_drf_test_resume_debugdma(data)      ((0x00000020&(data))>>5)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_get_mbist_deugdma_dvse(data)            ((0x00000010&(data))>>4)
#define  RTK_DTV_DEMOD_SYS_BIST_DEBUGDMA_get_mbist_deugdma_dvs(data)             (0x0000000F&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA                                   0x18159584
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_reg_addr                           "0xB8159584"
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_reg                                0xB8159584
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_inst_addr                          "0x004A"
#define  set_RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_reg(data)                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_reg                            (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_reg))
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_mbist_debugdma_te_shift            (1)
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_bist_rstn_debugdma_shift           (0)
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_mbist_debugdma_te_mask             (0x00000002)
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_bist_rstn_debugdma_mask            (0x00000001)
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_mbist_debugdma_te(data)            (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_bist_rstn_debugdma(data)           (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_get_mbist_debugdma_te(data)        ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_BIST_RSTN_DEBUGDMA_get_bist_rstn_debugdma(data)       (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA                                    0x18159588
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_reg_addr                            "0xB8159588"
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_reg                                 0xB8159588
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_inst_addr                           "0x004B"
#define  set_RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_reg(data)                       (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_reg                             (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_reg))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_bist_done_debugdma_shift            (4)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_drf_bist_done_debugdma_shift        (3)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_bist_fail_debugdma_shift            (2)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_drf_bist_fail_debugdma_shift        (1)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_drf_start_pause_debugdma_shift      (0)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_bist_done_debugdma_mask             (0x00000010)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_drf_bist_done_debugdma_mask         (0x00000008)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_bist_fail_debugdma_mask             (0x00000004)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_drf_bist_fail_debugdma_mask         (0x00000002)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_drf_start_pause_debugdma_mask       (0x00000001)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_bist_done_debugdma(data)            (0x00000010&((data)<<4))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_drf_bist_done_debugdma(data)        (0x00000008&((data)<<3))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_bist_fail_debugdma(data)            (0x00000004&((data)<<2))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_drf_bist_fail_debugdma(data)        (0x00000002&((data)<<1))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_drf_start_pause_debugdma(data)      (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_get_bist_done_debugdma(data)        ((0x00000010&(data))>>4)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_get_drf_bist_done_debugdma(data)    ((0x00000008&(data))>>3)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_get_bist_fail_debugdma(data)        ((0x00000004&(data))>>2)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_get_drf_bist_fail_debugdma(data)    ((0x00000002&(data))>>1)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_DEBUGDMA_get_drf_start_pause_debugdma(data)  (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM_                                   0x18159598
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__reg_addr                           "0xB8159598"
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__reg                                0xB8159598
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__inst_addr                          "0x004C"
#define  set_RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__reg(data)                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__reg                            (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__reg))
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__ocp_rom_bist_mode_shift            (0)
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__ocp_rom_bist_mode_mask             (0x00000001)
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__ocp_rom_bist_mode(data)            (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_MODE_OCP_ROM__get_ocp_rom_bist_mode(data)        (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM_                                   0x1815959C
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__reg_addr                           "0xB815959C"
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__reg                                0xB815959C
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__inst_addr                          "0x004D"
#define  set_RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__reg(data)                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__reg                            (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__reg))
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__ocp_rom_bist_done_shift            (0)
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__ocp_rom_bist_done_mask             (0x00000001)
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__ocp_rom_bist_done(data)            (0x00000001&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_DONE_OCP_ROM__get_ocp_rom_bist_done(data)        (0x00000001&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0                                   0x181595A0
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_reg_addr                           "0xB81595A0"
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_reg                                0xB81595A0
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_inst_addr                          "0x004E"
#define  set_RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_reg(data)                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_reg                            (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_reg))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_ocp_rom_bist_out_7_0_shift         (0)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_ocp_rom_bist_out_7_0_mask          (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_ocp_rom_bist_out_7_0(data)         (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_0_get_ocp_rom_bist_out_7_0(data)     (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1                                   0x181595A4
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_reg_addr                           "0xB81595A4"
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_reg                                0xB81595A4
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_inst_addr                          "0x004F"
#define  set_RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_reg(data)                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_reg                            (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_reg))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_ocp_rom_bist_out_15_8_shift        (0)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_ocp_rom_bist_out_15_8_mask         (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_ocp_rom_bist_out_15_8(data)        (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_1_get_ocp_rom_bist_out_15_8(data)    (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2                                   0x181595A8
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_reg_addr                           "0xB81595A8"
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_reg                                0xB81595A8
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_inst_addr                          "0x0050"
#define  set_RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_reg(data)                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_reg                            (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_reg))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_ocp_rom_bist_out_23_16_shift       (0)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_ocp_rom_bist_out_23_16_mask        (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_ocp_rom_bist_out_23_16(data)       (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_2_get_ocp_rom_bist_out_23_16(data)   (0x000000FF&(data))

#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3                                   0x181595AC
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_reg_addr                           "0xB81595AC"
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_reg                                0xB81595AC
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_inst_addr                          "0x0051"
#define  set_RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_reg(data)                      (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_reg)=data)
#define  get_RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_reg                            (*((volatile unsigned int*)RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_reg))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_ocp_rom_bist_out_31_24_shift       (0)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_ocp_rom_bist_out_31_24_mask        (0x000000FF)
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_ocp_rom_bist_out_31_24(data)       (0x000000FF&(data))
#define  RTK_DTV_DEMOD_SYS_BIST_OUT_OCP_ROM_3_get_ocp_rom_bist_out_31_24(data)   (0x000000FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======RTK_DTV_DEMOD_SYS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  demod_sel:2;
    };
}rtk_dtv_demod_sys_demod_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  rtk_demod_int_polar:1;
        RBus_UInt32  rtk_demod_int_en:1;
    };
}rtk_dtv_demod_sys_int_to_cpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  debug_pin_sel:3;
    };
}rtk_dtv_demod_sys_debug_pin_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  en_8051_ice:1;
    };
}rtk_dtv_demod_sys_en_8051_ice_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debug_o_7_0:8;
    };
}rtk_dtv_demod_sys_demod_debug_o_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debug_o_15_8:8;
    };
}rtk_dtv_demod_sys_demod_debug_o_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debug_o_23_16:8;
    };
}rtk_dtv_demod_sys_demod_debug_o_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debug_o_31_24:8;
    };
}rtk_dtv_demod_sys_demod_debug_o_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debug_oe_7_0:8;
    };
}rtk_dtv_demod_sys_demod_debug_oe_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debug_oe_15_8:8;
    };
}rtk_dtv_demod_sys_demod_debug_oe_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debug_oe_23_16:8;
    };
}rtk_dtv_demod_sys_demod_debug_oe_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debug_oe_31_24:8;
    };
}rtk_dtv_demod_sys_demod_debug_oe_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  re_lock_adc_phase:1;
        RBus_UInt32  adc_edge:1;
    };
}rtk_dtv_demod_sys_re_lock_adc_phase_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  iqadc_sel:1;
    };
}rtk_dtv_demod_sys_iqadc_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  agc_io_sel:1;
    };
}rtk_dtv_demod_sys_agc_io_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  rfagc_reg:2;
    };
}rtk_dtv_demod_sys_rfagc_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ifagc_reg:2;
    };
}rtk_dtv_demod_sys_ifagc_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  r_psd_start:1;
    };
}rtk_dtv_demod_sys_r_psd_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  r_psd_sp:2;
        RBus_UInt32  r_psd_no:2;
        RBus_UInt32  r_iq_sel:2;
        RBus_UInt32  r_psd_dco_msb:2;
    };
}rtk_dtv_demod_sys_r_iq_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  r_psd_ctrl2:8;
    };
}rtk_dtv_demod_sys_r_psd_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  r_psd_dco:8;
    };
}rtk_dtv_demod_sys_r_psd_dco_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  r_sin_scale:8;
    };
}rtk_dtv_demod_sys_r_sin_scale_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  mb_rst_n:1;
    };
}rtk_dtv_demod_sys_mb_rst_n_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ext_adc_sel:1;
    };
}rtk_dtv_demod_sys_ext_adc_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  second_run_en:1;
    };
}rtk_dtv_demod_sys_second_run_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  adc_phase_sel:2;
    };
}rtk_dtv_demod_sys_adc_phase_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_version:8;
    };
}rtk_dtv_demod_sys_demod_version_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  debugdma_underflow:1;
        RBus_UInt32  debugdma_overflow:1;
        RBus_UInt32  debugdma_underflow_clr:1;
        RBus_UInt32  debugdma_overflow_clr:1;
    };
}rtk_dtv_demod_sys_debugdma_underflow_clr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  demod_debugdma_blen:6;
    };
}rtk_dtv_demod_sys_demod_debugdma_blen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  demod_debugdma_circular_num:4;
    };
}rtk_dtv_demod_sys_demod_debugdma_circular_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debugdma_endaddr_7_0:8;
    };
}rtk_dtv_demod_sys_demod_debugdma_endaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debugdma_endaddr_15_8:8;
    };
}rtk_dtv_demod_sys_demod_debugdma_endaddr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debugdma_endaddr_23_16:8;
    };
}rtk_dtv_demod_sys_demod_debugdma_endaddr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debugdma_endaddr_28_24:8;
    };
}rtk_dtv_demod_sys_demod_debugdma_endaddr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debugdma_startaddr_7_0:8;
    };
}rtk_dtv_demod_sys_demod_debugdma_startaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debugdma_startaddr_15_8:8;
    };
}rtk_dtv_demod_sys_demod_debugdma_startaddr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debugdma_startaddr_23_16:8;
    };
}rtk_dtv_demod_sys_demod_debugdma_startaddr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_debugdma_startaddr_28_24:8;
    };
}rtk_dtv_demod_sys_demod_debugdma_startaddr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  demod_debugdma_waterlvl:6;
    };
}rtk_dtv_demod_sys_demod_debugdma_waterlvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dtv_debugdma_en:1;
    };
}rtk_dtv_demod_sys_dtv_debugdma_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  wrapper_dtmb_isdbt_sel:1;
        RBus_UInt32  demod_wrapper_arb_pri:1;
    };
}rtk_dtv_demod_sys_wrapper_dtmb_isdbt_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  dump_adc_dagc_sel:1;
    };
}rtk_dtv_demod_sys_dump_adc_dagc_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  dtv_demod_multi_req_disable:1;
        RBus_UInt32  arb_bypass_sel:1;
        RBus_UInt32  isdbt_max_read_cmd_sel:2;
        RBus_UInt32  isdbt_max_read_cmd_en:1;
    };
}rtk_dtv_demod_sys_isdbt_max_read_cmd_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  demod_tp_fix_error:1;
        RBus_UInt32  demod_tp_fix_sync:1;
        RBus_UInt32  demod_tp_fix_val:1;
        RBus_UInt32  demod_tp_out_fix_en:1;
    };
}rtk_dtv_demod_sys_demod_tp_fix_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_tp_fix_dat:8;
    };
}rtk_dtv_demod_sys_demod_tp_fix_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  demod_data_7_0:8;
    };
}rtk_dtv_demod_sys_demod_data_in_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  demod_data_valid:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  demod_data_10_8:3;
    };
}rtk_dtv_demod_sys_demod_data_in_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  psd_done:1;
    };
}rtk_dtv_demod_sys_psd_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  psd_pwr_15_08:8;
    };
}rtk_dtv_demod_sys_psd_pwr_15_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  psd_pwr_07_00:8;
    };
}rtk_dtv_demod_sys_psd_pwr_07_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  bist_mode_ocp2:1;
        RBus_UInt32  bist_mode_ocp1:1;
    };
}rtk_dtv_demod_sys_bist_mode_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  drf_bist_mode_ocp2:1;
        RBus_UInt32  drf_bist_mode_ocp1:1;
    };
}rtk_dtv_demod_sys_drf_bist_mode_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  drf_test_resume_ocp2:1;
        RBus_UInt32  drf_test_resume_ocp1:1;
    };
}rtk_dtv_demod_sys_drf_test_resume_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  bist_done_ocp2:1;
        RBus_UInt32  bist_done_ocp1:1;
    };
}rtk_dtv_demod_sys_bist_done_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  drf_bist_done_ocp2:1;
        RBus_UInt32  drf_bist_done_ocp1:1;
    };
}rtk_dtv_demod_sys_drf_bist_done_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  bist_fail_ocp2:1;
        RBus_UInt32  bist_fail_ocp1:1;
    };
}rtk_dtv_demod_sys_bist_fail_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  drf_bist_fail_ocp2:1;
        RBus_UInt32  drf_bist_fail_ocp1:1;
    };
}rtk_dtv_demod_sys_drf_bist_fail_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  drf_start_pause_ocp2:1;
        RBus_UInt32  drf_start_pause_ocp1:1;
    };
}rtk_dtv_demod_sys_start_pause_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_isdbt_rom2_bist_mode:1;
        RBus_UInt32  mbist_isdbt_rom1_bist_mode:1;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_isdbt_rom2_bist_done:1;
        RBus_UInt32  mbist_isdbt_rom1_bist_done:1;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom2_dvs:4;
        RBus_UInt32  mbist_isdbt_rom1_dvs:4;
    };
}rtk_dtv_demod_sys_isdbt_rom_dvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  mbist_isdbt_rom_te:1;
        RBus_UInt32  mbist_isdbt_rom2_dvse:1;
        RBus_UInt32  mbist_isdbt_rom1_dvse:1;
    };
}rtk_dtv_demod_sys_isdbt_rom_dvse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom1_dataout_7_0:8;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom1_dataout_15_8:8;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom1_dataout_23_16:8;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom1_dataout_31_24:8;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom1_dataout_39_32:8;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom1_dataout_47_40:8;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  mbist_isdbt_rom1_dataout_51_48:4;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom2_dataout_7_0:8;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom2_dataout_15_8:8;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom2_dataout_23_16:8;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mbist_isdbt_rom2_dataout_31_24:8;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  bist_mode_debugdma:1;
        RBus_UInt32  drf_bist_mode_debugdma:1;
        RBus_UInt32  drf_test_resume_debugdma:1;
        RBus_UInt32  mbist_deugdma_dvse:1;
        RBus_UInt32  mbist_deugdma_dvs:4;
    };
}rtk_dtv_demod_sys_bist_debugdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  mbist_debugdma_te:1;
        RBus_UInt32  bist_rstn_debugdma:1;
    };
}rtk_dtv_demod_sys_bist_rstn_debugdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  bist_done_debugdma:1;
        RBus_UInt32  drf_bist_done_debugdma:1;
        RBus_UInt32  bist_fail_debugdma:1;
        RBus_UInt32  drf_bist_fail_debugdma:1;
        RBus_UInt32  drf_start_pause_debugdma:1;
    };
}rtk_dtv_demod_sys_bist_out_debugdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ocp_rom_bist_mode:1;
    };
}rtk_dtv_demod_sys_bist_mode_ocp_rom__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ocp_rom_bist_done:1;
    };
}rtk_dtv_demod_sys_bist_done_ocp_rom__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ocp_rom_bist_out_7_0:8;
    };
}rtk_dtv_demod_sys_bist_out_ocp_rom_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ocp_rom_bist_out_15_8:8;
    };
}rtk_dtv_demod_sys_bist_out_ocp_rom_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ocp_rom_bist_out_23_16:8;
    };
}rtk_dtv_demod_sys_bist_out_ocp_rom_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ocp_rom_bist_out_31_24:8;
    };
}rtk_dtv_demod_sys_bist_out_ocp_rom_3_RBUS;

#else //apply LITTLE_ENDIAN

//======RTK_DTV_DEMOD_SYS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_sel:2;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_demod_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rtk_demod_int_en:1;
        RBus_UInt32  rtk_demod_int_polar:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_int_to_cpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_pin_sel:3;
        RBus_UInt32  res1:29;
    };
}rtk_dtv_demod_sys_debug_pin_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en_8051_ice:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_en_8051_ice_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debug_o_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debug_o_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debug_o_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debug_o_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debug_o_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debug_o_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debug_o_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debug_o_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debug_oe_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debug_oe_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debug_oe_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debug_oe_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debug_oe_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debug_oe_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debug_oe_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debug_oe_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adc_edge:1;
        RBus_UInt32  re_lock_adc_phase:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_re_lock_adc_phase_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iqadc_sel:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_iqadc_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  agc_io_sel:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_agc_io_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rfagc_reg:2;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_rfagc_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ifagc_reg:2;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_ifagc_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_psd_start:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_r_psd_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_psd_dco_msb:2;
        RBus_UInt32  r_iq_sel:2;
        RBus_UInt32  r_psd_no:2;
        RBus_UInt32  r_psd_sp:2;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_r_iq_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_psd_ctrl2:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_r_psd_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_psd_dco:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_r_psd_dco_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_sin_scale:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_r_sin_scale_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_rst_n:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_mb_rst_n_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ext_adc_sel:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_ext_adc_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  second_run_en:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_second_run_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adc_phase_sel:2;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_adc_phase_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_version:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_version_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debugdma_overflow_clr:1;
        RBus_UInt32  debugdma_underflow_clr:1;
        RBus_UInt32  debugdma_overflow:1;
        RBus_UInt32  debugdma_underflow:1;
        RBus_UInt32  res1:28;
    };
}rtk_dtv_demod_sys_debugdma_underflow_clr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_blen:6;
        RBus_UInt32  res1:26;
    };
}rtk_dtv_demod_sys_demod_debugdma_blen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_circular_num:4;
        RBus_UInt32  res1:28;
    };
}rtk_dtv_demod_sys_demod_debugdma_circular_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_endaddr_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debugdma_endaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_endaddr_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debugdma_endaddr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_endaddr_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debugdma_endaddr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_endaddr_28_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debugdma_endaddr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_startaddr_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debugdma_startaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_startaddr_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debugdma_startaddr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_startaddr_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debugdma_startaddr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_startaddr_28_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_debugdma_startaddr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_debugdma_waterlvl:6;
        RBus_UInt32  res1:26;
    };
}rtk_dtv_demod_sys_demod_debugdma_waterlvl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dtv_debugdma_en:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_dtv_debugdma_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_wrapper_arb_pri:1;
        RBus_UInt32  wrapper_dtmb_isdbt_sel:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_wrapper_dtmb_isdbt_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dump_adc_dagc_sel:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_dump_adc_dagc_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  isdbt_max_read_cmd_en:1;
        RBus_UInt32  isdbt_max_read_cmd_sel:2;
        RBus_UInt32  arb_bypass_sel:1;
        RBus_UInt32  dtv_demod_multi_req_disable:1;
        RBus_UInt32  res1:27;
    };
}rtk_dtv_demod_sys_isdbt_max_read_cmd_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_tp_out_fix_en:1;
        RBus_UInt32  demod_tp_fix_val:1;
        RBus_UInt32  demod_tp_fix_sync:1;
        RBus_UInt32  demod_tp_fix_error:1;
        RBus_UInt32  res1:28;
    };
}rtk_dtv_demod_sys_demod_tp_fix_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_tp_fix_dat:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_tp_fix_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_data_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_demod_data_in_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demod_data_10_8:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  demod_data_valid:1;
        RBus_UInt32  res2:27;
    };
}rtk_dtv_demod_sys_demod_data_in_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  psd_done:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_psd_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  psd_pwr_15_08:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_psd_pwr_15_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  psd_pwr_07_00:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_psd_pwr_07_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_mode_ocp1:1;
        RBus_UInt32  bist_mode_ocp2:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_bist_mode_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_mode_ocp1:1;
        RBus_UInt32  drf_bist_mode_ocp2:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_drf_bist_mode_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_test_resume_ocp1:1;
        RBus_UInt32  drf_test_resume_ocp2:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_drf_test_resume_sys1__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_done_ocp1:1;
        RBus_UInt32  bist_done_ocp2:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_bist_done_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_done_ocp1:1;
        RBus_UInt32  drf_bist_done_ocp2:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_drf_bist_done_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_ocp1:1;
        RBus_UInt32  bist_fail_ocp2:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_bist_fail_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_ocp1:1;
        RBus_UInt32  drf_bist_fail_ocp2:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_drf_bist_fail_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_start_pause_ocp1:1;
        RBus_UInt32  drf_start_pause_ocp2:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_start_pause_sys1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_bist_mode:1;
        RBus_UInt32  mbist_isdbt_rom2_bist_mode:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_bist_done:1;
        RBus_UInt32  mbist_isdbt_rom2_bist_done:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_dvs:4;
        RBus_UInt32  mbist_isdbt_rom2_dvs:4;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_dvs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_dvse:1;
        RBus_UInt32  mbist_isdbt_rom2_dvse:1;
        RBus_UInt32  mbist_isdbt_rom_te:1;
        RBus_UInt32  res1:29;
    };
}rtk_dtv_demod_sys_isdbt_rom_dvse_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_dataout_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_dataout_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_dataout_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_dataout_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_dataout_39_32:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_dataout_47_40:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom1_dataout_51_48:4;
        RBus_UInt32  res1:28;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom2_dataout_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom2_dataout_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom2_dataout_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_isdbt_rom2_dataout_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_isdbt_rom_bist_out10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_deugdma_dvs:4;
        RBus_UInt32  mbist_deugdma_dvse:1;
        RBus_UInt32  drf_test_resume_debugdma:1;
        RBus_UInt32  drf_bist_mode_debugdma:1;
        RBus_UInt32  bist_mode_debugdma:1;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_bist_debugdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_rstn_debugdma:1;
        RBus_UInt32  mbist_debugdma_te:1;
        RBus_UInt32  res1:30;
    };
}rtk_dtv_demod_sys_bist_rstn_debugdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_start_pause_debugdma:1;
        RBus_UInt32  drf_bist_fail_debugdma:1;
        RBus_UInt32  bist_fail_debugdma:1;
        RBus_UInt32  drf_bist_done_debugdma:1;
        RBus_UInt32  bist_done_debugdma:1;
        RBus_UInt32  res1:27;
    };
}rtk_dtv_demod_sys_bist_out_debugdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ocp_rom_bist_mode:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_bist_mode_ocp_rom__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ocp_rom_bist_done:1;
        RBus_UInt32  res1:31;
    };
}rtk_dtv_demod_sys_bist_done_ocp_rom__RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ocp_rom_bist_out_7_0:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_bist_out_ocp_rom_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ocp_rom_bist_out_15_8:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_bist_out_ocp_rom_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ocp_rom_bist_out_23_16:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_bist_out_ocp_rom_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ocp_rom_bist_out_31_24:8;
        RBus_UInt32  res1:24;
    };
}rtk_dtv_demod_sys_bist_out_ocp_rom_3_RBUS;




#endif 


#endif 
