/**
* @file Merlin5-DesignSpec-D-Domain_Demura
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DEMURA_REG_H_
#define _RBUS_DEMURA_REG_H_

#include "rbus_types.h"



//  DEMURA Register Address
#define  DEMURA_DEMURA_CONTROL                                                  0x1802EB00
#define  DEMURA_DEMURA_CONTROL_reg_addr                                          "0xB802EB00"
#define  DEMURA_DEMURA_CONTROL_reg                                               0xB802EB00
#define  DEMURA_DEMURA_CONTROL_inst_addr                                         "0x0000"
#define  set_DEMURA_DEMURA_CONTROL_reg(data)                                     (*((volatile unsigned int*)DEMURA_DEMURA_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_CONTROL_reg                                           (*((volatile unsigned int*)DEMURA_DEMURA_CONTROL_reg))
#define  DEMURA_DEMURA_CONTROL_dummy_31_14_shift                                 (14)
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_h_shift                        (12)
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_m_shift                        (10)
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_l_shift                        (8)
#define  DEMURA_DEMURA_CONTROL_dummy_7_shift                                     (7)
#define  DEMURA_DEMURA_CONTROL_demura_location_swap_shift                        (6)
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_shift                          (4)
#define  DEMURA_DEMURA_CONTROL_demura_block_size_shift                           (2)
#define  DEMURA_DEMURA_CONTROL_demura_rgb_table_seperate_shift                   (1)
#define  DEMURA_DEMURA_CONTROL_demura_en_shift                                   (0)
#define  DEMURA_DEMURA_CONTROL_dummy_31_14_mask                                  (0xFFFFC000)
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_h_mask                         (0x00003000)
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_m_mask                         (0x00000C00)
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_l_mask                         (0x00000300)
#define  DEMURA_DEMURA_CONTROL_dummy_7_mask                                      (0x00000080)
#define  DEMURA_DEMURA_CONTROL_demura_location_swap_mask                         (0x00000040)
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_mask                           (0x00000030)
#define  DEMURA_DEMURA_CONTROL_demura_block_size_mask                            (0x0000000C)
#define  DEMURA_DEMURA_CONTROL_demura_rgb_table_seperate_mask                    (0x00000002)
#define  DEMURA_DEMURA_CONTROL_demura_en_mask                                    (0x00000001)
#define  DEMURA_DEMURA_CONTROL_dummy_31_14(data)                                 (0xFFFFC000&((data)<<14))
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_h(data)                        (0x00003000&((data)<<12))
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_m(data)                        (0x00000C00&((data)<<10))
#define  DEMURA_DEMURA_CONTROL_demura_table_scale_l(data)                        (0x00000300&((data)<<8))
#define  DEMURA_DEMURA_CONTROL_dummy_7(data)                                     (0x00000080&((data)<<7))
#define  DEMURA_DEMURA_CONTROL_demura_location_swap(data)                        (0x00000040&((data)<<6))
#define  DEMURA_DEMURA_CONTROL_demura_table_scale(data)                          (0x00000030&((data)<<4))
#define  DEMURA_DEMURA_CONTROL_demura_block_size(data)                           (0x0000000C&((data)<<2))
#define  DEMURA_DEMURA_CONTROL_demura_rgb_table_seperate(data)                   (0x00000002&((data)<<1))
#define  DEMURA_DEMURA_CONTROL_demura_en(data)                                   (0x00000001&(data))
#define  DEMURA_DEMURA_CONTROL_get_dummy_31_14(data)                             ((0xFFFFC000&(data))>>14)
#define  DEMURA_DEMURA_CONTROL_get_demura_table_scale_h(data)                    ((0x00003000&(data))>>12)
#define  DEMURA_DEMURA_CONTROL_get_demura_table_scale_m(data)                    ((0x00000C00&(data))>>10)
#define  DEMURA_DEMURA_CONTROL_get_demura_table_scale_l(data)                    ((0x00000300&(data))>>8)
#define  DEMURA_DEMURA_CONTROL_get_dummy_7(data)                                 ((0x00000080&(data))>>7)
#define  DEMURA_DEMURA_CONTROL_get_demura_location_swap(data)                    ((0x00000040&(data))>>6)
#define  DEMURA_DEMURA_CONTROL_get_demura_table_scale(data)                      ((0x00000030&(data))>>4)
#define  DEMURA_DEMURA_CONTROL_get_demura_block_size(data)                       ((0x0000000C&(data))>>2)
#define  DEMURA_DEMURA_CONTROL_get_demura_rgb_table_seperate(data)               ((0x00000002&(data))>>1)
#define  DEMURA_DEMURA_CONTROL_get_demura_en(data)                               (0x00000001&(data))

#define  DEMURA_DEMURA_R_PLANE_1_CONTROL                                        0x1802EB04
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_reg_addr                                "0xB802EB04"
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_reg                                     0xB802EB04
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_inst_addr                               "0x0001"
#define  set_DEMURA_DEMURA_R_PLANE_1_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_R_PLANE_1_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_R_PLANE_1_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_R_PLANE_1_CONTROL_reg))
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_demura_r_upper_cutoff_shift             (16)
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_demura_r_lower_cutoff_shift             (0)
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_demura_r_upper_cutoff_mask              (0x07FF0000)
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_demura_r_lower_cutoff_mask              (0x000003FF)
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_demura_r_upper_cutoff(data)             (0x07FF0000&((data)<<16))
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_demura_r_lower_cutoff(data)             (0x000003FF&(data))
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_get_demura_r_upper_cutoff(data)         ((0x07FF0000&(data))>>16)
#define  DEMURA_DEMURA_R_PLANE_1_CONTROL_get_demura_r_lower_cutoff(data)         (0x000003FF&(data))

#define  DEMURA_DEMURA_R_PLANE_2_CONTROL                                        0x1802EB08
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_reg_addr                                "0xB802EB08"
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_reg                                     0xB802EB08
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_inst_addr                               "0x0002"
#define  set_DEMURA_DEMURA_R_PLANE_2_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_R_PLANE_2_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_R_PLANE_2_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_R_PLANE_2_CONTROL_reg))
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_demura_r_m_level_shift                  (16)
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_demura_r_l_level_shift                  (0)
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_demura_r_m_level_mask                   (0x03FF0000)
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_demura_r_l_level_mask                   (0x000003FF)
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_demura_r_m_level(data)                  (0x03FF0000&((data)<<16))
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_demura_r_l_level(data)                  (0x000003FF&(data))
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_get_demura_r_m_level(data)              ((0x03FF0000&(data))>>16)
#define  DEMURA_DEMURA_R_PLANE_2_CONTROL_get_demura_r_l_level(data)              (0x000003FF&(data))

#define  DEMURA_DEMURA_R_PLANE_3_CONTROL                                        0x1802EB0C
#define  DEMURA_DEMURA_R_PLANE_3_CONTROL_reg_addr                                "0xB802EB0C"
#define  DEMURA_DEMURA_R_PLANE_3_CONTROL_reg                                     0xB802EB0C
#define  DEMURA_DEMURA_R_PLANE_3_CONTROL_inst_addr                               "0x0003"
#define  set_DEMURA_DEMURA_R_PLANE_3_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_R_PLANE_3_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_R_PLANE_3_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_R_PLANE_3_CONTROL_reg))
#define  DEMURA_DEMURA_R_PLANE_3_CONTROL_demura_r_h_level_shift                  (0)
#define  DEMURA_DEMURA_R_PLANE_3_CONTROL_demura_r_h_level_mask                   (0x000007FF)
#define  DEMURA_DEMURA_R_PLANE_3_CONTROL_demura_r_h_level(data)                  (0x000007FF&(data))
#define  DEMURA_DEMURA_R_PLANE_3_CONTROL_get_demura_r_h_level(data)              (0x000007FF&(data))

#define  DEMURA_DEMURA_R_PLANE_4_CONTROL                                        0x1802EB10
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_reg_addr                                "0xB802EB10"
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_reg                                     0xB802EB10
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_inst_addr                               "0x0004"
#define  set_DEMURA_DEMURA_R_PLANE_4_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_R_PLANE_4_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_R_PLANE_4_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_R_PLANE_4_CONTROL_reg))
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_r_div_factor_l_m_shift                  (16)
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_r_div_factor_l_shift                    (0)
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_r_div_factor_l_m_mask                   (0xFFFF0000)
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_r_div_factor_l_mask                     (0x0000FFFF)
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_r_div_factor_l_m(data)                  (0xFFFF0000&((data)<<16))
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_r_div_factor_l(data)                    (0x0000FFFF&(data))
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_get_r_div_factor_l_m(data)              ((0xFFFF0000&(data))>>16)
#define  DEMURA_DEMURA_R_PLANE_4_CONTROL_get_r_div_factor_l(data)                (0x0000FFFF&(data))

#define  DEMURA_DEMURA_R_PLANE_5_CONTROL                                        0x1802EB14
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_reg_addr                                "0xB802EB14"
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_reg                                     0xB802EB14
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_inst_addr                               "0x0005"
#define  set_DEMURA_DEMURA_R_PLANE_5_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_R_PLANE_5_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_R_PLANE_5_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_R_PLANE_5_CONTROL_reg))
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_r_div_factor_h_shift                    (16)
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_r_div_factor_m_h_shift                  (0)
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_r_div_factor_h_mask                     (0xFFFF0000)
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_r_div_factor_m_h_mask                   (0x0000FFFF)
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_r_div_factor_h(data)                    (0xFFFF0000&((data)<<16))
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_r_div_factor_m_h(data)                  (0x0000FFFF&(data))
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_get_r_div_factor_h(data)                ((0xFFFF0000&(data))>>16)
#define  DEMURA_DEMURA_R_PLANE_5_CONTROL_get_r_div_factor_m_h(data)              (0x0000FFFF&(data))

#define  DEMURA_DEMURA_G_PLANE_1_CONTROL                                        0x1802EB20
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_reg_addr                                "0xB802EB20"
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_reg                                     0xB802EB20
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_inst_addr                               "0x0006"
#define  set_DEMURA_DEMURA_G_PLANE_1_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_G_PLANE_1_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_G_PLANE_1_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_G_PLANE_1_CONTROL_reg))
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_demura_g_upper_cutoff_shift             (16)
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_demura_g_lower_cutoff_shift             (0)
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_demura_g_upper_cutoff_mask              (0x07FF0000)
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_demura_g_lower_cutoff_mask              (0x000003FF)
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_demura_g_upper_cutoff(data)             (0x07FF0000&((data)<<16))
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_demura_g_lower_cutoff(data)             (0x000003FF&(data))
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_get_demura_g_upper_cutoff(data)         ((0x07FF0000&(data))>>16)
#define  DEMURA_DEMURA_G_PLANE_1_CONTROL_get_demura_g_lower_cutoff(data)         (0x000003FF&(data))

#define  DEMURA_DEMURA_G_PLANE_2_CONTROL                                        0x1802EB24
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_reg_addr                                "0xB802EB24"
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_reg                                     0xB802EB24
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_inst_addr                               "0x0007"
#define  set_DEMURA_DEMURA_G_PLANE_2_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_G_PLANE_2_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_G_PLANE_2_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_G_PLANE_2_CONTROL_reg))
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_demura_g_m_level_shift                  (16)
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_demura_g_l_level_shift                  (0)
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_demura_g_m_level_mask                   (0x03FF0000)
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_demura_g_l_level_mask                   (0x000003FF)
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_demura_g_m_level(data)                  (0x03FF0000&((data)<<16))
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_demura_g_l_level(data)                  (0x000003FF&(data))
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_get_demura_g_m_level(data)              ((0x03FF0000&(data))>>16)
#define  DEMURA_DEMURA_G_PLANE_2_CONTROL_get_demura_g_l_level(data)              (0x000003FF&(data))

#define  DEMURA_DEMURA_G_PLANE_3_CONTROL                                        0x1802EB28
#define  DEMURA_DEMURA_G_PLANE_3_CONTROL_reg_addr                                "0xB802EB28"
#define  DEMURA_DEMURA_G_PLANE_3_CONTROL_reg                                     0xB802EB28
#define  DEMURA_DEMURA_G_PLANE_3_CONTROL_inst_addr                               "0x0008"
#define  set_DEMURA_DEMURA_G_PLANE_3_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_G_PLANE_3_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_G_PLANE_3_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_G_PLANE_3_CONTROL_reg))
#define  DEMURA_DEMURA_G_PLANE_3_CONTROL_demura_g_h_level_shift                  (0)
#define  DEMURA_DEMURA_G_PLANE_3_CONTROL_demura_g_h_level_mask                   (0x000007FF)
#define  DEMURA_DEMURA_G_PLANE_3_CONTROL_demura_g_h_level(data)                  (0x000007FF&(data))
#define  DEMURA_DEMURA_G_PLANE_3_CONTROL_get_demura_g_h_level(data)              (0x000007FF&(data))

#define  DEMURA_DEMURA_G_PLANE_4_CONTROL                                        0x1802EB2C
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_reg_addr                                "0xB802EB2C"
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_reg                                     0xB802EB2C
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_inst_addr                               "0x0009"
#define  set_DEMURA_DEMURA_G_PLANE_4_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_G_PLANE_4_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_G_PLANE_4_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_G_PLANE_4_CONTROL_reg))
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_g_div_factor_l_m_shift                  (16)
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_g_div_factor_l_shift                    (0)
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_g_div_factor_l_m_mask                   (0xFFFF0000)
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_g_div_factor_l_mask                     (0x0000FFFF)
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_g_div_factor_l_m(data)                  (0xFFFF0000&((data)<<16))
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_g_div_factor_l(data)                    (0x0000FFFF&(data))
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_get_g_div_factor_l_m(data)              ((0xFFFF0000&(data))>>16)
#define  DEMURA_DEMURA_G_PLANE_4_CONTROL_get_g_div_factor_l(data)                (0x0000FFFF&(data))

#define  DEMURA_DEMURA_G_PLANE_5_CONTROL                                        0x1802EB30
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_reg_addr                                "0xB802EB30"
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_reg                                     0xB802EB30
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_inst_addr                               "0x000A"
#define  set_DEMURA_DEMURA_G_PLANE_5_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_G_PLANE_5_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_G_PLANE_5_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_G_PLANE_5_CONTROL_reg))
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_g_div_factor_h_shift                    (16)
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_g_div_factor_m_h_shift                  (0)
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_g_div_factor_h_mask                     (0xFFFF0000)
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_g_div_factor_m_h_mask                   (0x0000FFFF)
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_g_div_factor_h(data)                    (0xFFFF0000&((data)<<16))
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_g_div_factor_m_h(data)                  (0x0000FFFF&(data))
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_get_g_div_factor_h(data)                ((0xFFFF0000&(data))>>16)
#define  DEMURA_DEMURA_G_PLANE_5_CONTROL_get_g_div_factor_m_h(data)              (0x0000FFFF&(data))

#define  DEMURA_DEMURA_B_PLANE_1_CONTROL                                        0x1802EB40
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_reg_addr                                "0xB802EB40"
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_reg                                     0xB802EB40
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_inst_addr                               "0x000B"
#define  set_DEMURA_DEMURA_B_PLANE_1_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_B_PLANE_1_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_B_PLANE_1_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_B_PLANE_1_CONTROL_reg))
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_demura_b_upper_cutoff_shift             (16)
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_demura_b_lower_cutoff_shift             (0)
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_demura_b_upper_cutoff_mask              (0x07FF0000)
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_demura_b_lower_cutoff_mask              (0x000003FF)
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_demura_b_upper_cutoff(data)             (0x07FF0000&((data)<<16))
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_demura_b_lower_cutoff(data)             (0x000003FF&(data))
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_get_demura_b_upper_cutoff(data)         ((0x07FF0000&(data))>>16)
#define  DEMURA_DEMURA_B_PLANE_1_CONTROL_get_demura_b_lower_cutoff(data)         (0x000003FF&(data))

#define  DEMURA_DEMURA_B_PLANE_2_CONTROL                                        0x1802EB44
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_reg_addr                                "0xB802EB44"
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_reg                                     0xB802EB44
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_inst_addr                               "0x000C"
#define  set_DEMURA_DEMURA_B_PLANE_2_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_B_PLANE_2_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_B_PLANE_2_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_B_PLANE_2_CONTROL_reg))
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_demura_b_m_level_shift                  (16)
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_demura_b_l_level_shift                  (0)
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_demura_b_m_level_mask                   (0x03FF0000)
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_demura_b_l_level_mask                   (0x000003FF)
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_demura_b_m_level(data)                  (0x03FF0000&((data)<<16))
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_demura_b_l_level(data)                  (0x000003FF&(data))
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_get_demura_b_m_level(data)              ((0x03FF0000&(data))>>16)
#define  DEMURA_DEMURA_B_PLANE_2_CONTROL_get_demura_b_l_level(data)              (0x000003FF&(data))

#define  DEMURA_DEMURA_B_PLANE_3_CONTROL                                        0x1802EB48
#define  DEMURA_DEMURA_B_PLANE_3_CONTROL_reg_addr                                "0xB802EB48"
#define  DEMURA_DEMURA_B_PLANE_3_CONTROL_reg                                     0xB802EB48
#define  DEMURA_DEMURA_B_PLANE_3_CONTROL_inst_addr                               "0x000D"
#define  set_DEMURA_DEMURA_B_PLANE_3_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_B_PLANE_3_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_B_PLANE_3_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_B_PLANE_3_CONTROL_reg))
#define  DEMURA_DEMURA_B_PLANE_3_CONTROL_demura_b_h_level_shift                  (0)
#define  DEMURA_DEMURA_B_PLANE_3_CONTROL_demura_b_h_level_mask                   (0x000007FF)
#define  DEMURA_DEMURA_B_PLANE_3_CONTROL_demura_b_h_level(data)                  (0x000007FF&(data))
#define  DEMURA_DEMURA_B_PLANE_3_CONTROL_get_demura_b_h_level(data)              (0x000007FF&(data))

#define  DEMURA_DEMURA_B_PLANE_4_CONTROL                                        0x1802EB4C
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_reg_addr                                "0xB802EB4C"
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_reg                                     0xB802EB4C
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_inst_addr                               "0x000E"
#define  set_DEMURA_DEMURA_B_PLANE_4_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_B_PLANE_4_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_B_PLANE_4_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_B_PLANE_4_CONTROL_reg))
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_b_div_factor_l_m_shift                  (16)
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_b_div_factor_l_shift                    (0)
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_b_div_factor_l_m_mask                   (0xFFFF0000)
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_b_div_factor_l_mask                     (0x0000FFFF)
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_b_div_factor_l_m(data)                  (0xFFFF0000&((data)<<16))
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_b_div_factor_l(data)                    (0x0000FFFF&(data))
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_get_b_div_factor_l_m(data)              ((0xFFFF0000&(data))>>16)
#define  DEMURA_DEMURA_B_PLANE_4_CONTROL_get_b_div_factor_l(data)                (0x0000FFFF&(data))

#define  DEMURA_DEMURA_B_PLANE_5_CONTROL                                        0x1802EB50
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_reg_addr                                "0xB802EB50"
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_reg                                     0xB802EB50
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_inst_addr                               "0x000F"
#define  set_DEMURA_DEMURA_B_PLANE_5_CONTROL_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_B_PLANE_5_CONTROL_reg)=data)
#define  get_DEMURA_DEMURA_B_PLANE_5_CONTROL_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_B_PLANE_5_CONTROL_reg))
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_b_div_factor_h_shift                    (16)
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_b_div_factor_m_h_shift                  (0)
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_b_div_factor_h_mask                     (0xFFFF0000)
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_b_div_factor_m_h_mask                   (0x0000FFFF)
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_b_div_factor_h(data)                    (0xFFFF0000&((data)<<16))
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_b_div_factor_m_h(data)                  (0x0000FFFF&(data))
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_get_b_div_factor_h(data)                ((0xFFFF0000&(data))>>16)
#define  DEMURA_DEMURA_B_PLANE_5_CONTROL_get_b_div_factor_m_h(data)              (0x0000FFFF&(data))

#define  DEMURA_DEMURA_KEEP_H_CONTROL0                                          0x1802EB34
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_reg_addr                                  "0xB802EB34"
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_reg                                       0xB802EB34
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_inst_addr                                 "0x0010"
#define  set_DEMURA_DEMURA_KEEP_H_CONTROL0_reg(data)                             (*((volatile unsigned int*)DEMURA_DEMURA_KEEP_H_CONTROL0_reg)=data)
#define  get_DEMURA_DEMURA_KEEP_H_CONTROL0_reg                                   (*((volatile unsigned int*)DEMURA_DEMURA_KEEP_H_CONTROL0_reg))
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_demura_r_h_keep_level_shift               (16)
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_demura_g_h_keep_level_shift               (0)
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_demura_r_h_keep_level_mask                (0x07FF0000)
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_demura_g_h_keep_level_mask                (0x000007FF)
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_demura_r_h_keep_level(data)               (0x07FF0000&((data)<<16))
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_demura_g_h_keep_level(data)               (0x000007FF&(data))
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_get_demura_r_h_keep_level(data)           ((0x07FF0000&(data))>>16)
#define  DEMURA_DEMURA_KEEP_H_CONTROL0_get_demura_g_h_keep_level(data)           (0x000007FF&(data))

#define  DEMURA_DEMURA_KEEP_H_CONTROL1                                          0x1802EB38
#define  DEMURA_DEMURA_KEEP_H_CONTROL1_reg_addr                                  "0xB802EB38"
#define  DEMURA_DEMURA_KEEP_H_CONTROL1_reg                                       0xB802EB38
#define  DEMURA_DEMURA_KEEP_H_CONTROL1_inst_addr                                 "0x0011"
#define  set_DEMURA_DEMURA_KEEP_H_CONTROL1_reg(data)                             (*((volatile unsigned int*)DEMURA_DEMURA_KEEP_H_CONTROL1_reg)=data)
#define  get_DEMURA_DEMURA_KEEP_H_CONTROL1_reg                                   (*((volatile unsigned int*)DEMURA_DEMURA_KEEP_H_CONTROL1_reg))
#define  DEMURA_DEMURA_KEEP_H_CONTROL1_demura_b_h_keep_level_shift               (0)
#define  DEMURA_DEMURA_KEEP_H_CONTROL1_demura_b_h_keep_level_mask                (0x000007FF)
#define  DEMURA_DEMURA_KEEP_H_CONTROL1_demura_b_h_keep_level(data)               (0x000007FF&(data))
#define  DEMURA_DEMURA_KEEP_H_CONTROL1_get_demura_b_h_keep_level(data)           (0x000007FF&(data))

#define  DEMURA_DEMURA_DMA_CTRL_1                                               0x1802EB60
#define  DEMURA_DEMURA_DMA_CTRL_1_reg_addr                                       "0xB802EB60"
#define  DEMURA_DEMURA_DMA_CTRL_1_reg                                            0xB802EB60
#define  DEMURA_DEMURA_DMA_CTRL_1_inst_addr                                      "0x0012"
#define  set_DEMURA_DEMURA_DMA_CTRL_1_reg(data)                                  (*((volatile unsigned int*)DEMURA_DEMURA_DMA_CTRL_1_reg)=data)
#define  get_DEMURA_DEMURA_DMA_CTRL_1_reg                                        (*((volatile unsigned int*)DEMURA_DEMURA_DMA_CTRL_1_reg))
#define  DEMURA_DEMURA_DMA_CTRL_1_table_width_shift                              (16)
#define  DEMURA_DEMURA_DMA_CTRL_1_table_height_shift                             (0)
#define  DEMURA_DEMURA_DMA_CTRL_1_table_width_mask                               (0x01FF0000)
#define  DEMURA_DEMURA_DMA_CTRL_1_table_height_mask                              (0x000001FF)
#define  DEMURA_DEMURA_DMA_CTRL_1_table_width(data)                              (0x01FF0000&((data)<<16))
#define  DEMURA_DEMURA_DMA_CTRL_1_table_height(data)                             (0x000001FF&(data))
#define  DEMURA_DEMURA_DMA_CTRL_1_get_table_width(data)                          ((0x01FF0000&(data))>>16)
#define  DEMURA_DEMURA_DMA_CTRL_1_get_table_height(data)                         (0x000001FF&(data))

#define  DEMURA_DEMURA_DMA_WRAP_ADDR                                            0x1802EB64
#define  DEMURA_DEMURA_DMA_WRAP_ADDR_reg_addr                                    "0xB802EB64"
#define  DEMURA_DEMURA_DMA_WRAP_ADDR_reg                                         0xB802EB64
#define  DEMURA_DEMURA_DMA_WRAP_ADDR_inst_addr                                   "0x0013"
#define  set_DEMURA_DEMURA_DMA_WRAP_ADDR_reg(data)                               (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_ADDR_reg)=data)
#define  get_DEMURA_DEMURA_DMA_WRAP_ADDR_reg                                     (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_ADDR_reg))
#define  DEMURA_DEMURA_DMA_WRAP_ADDR_sta_addr_shift                              (4)
#define  DEMURA_DEMURA_DMA_WRAP_ADDR_sta_addr_mask                               (0xFFFFFFF0)
#define  DEMURA_DEMURA_DMA_WRAP_ADDR_sta_addr(data)                              (0xFFFFFFF0&((data)<<4))
#define  DEMURA_DEMURA_DMA_WRAP_ADDR_get_sta_addr(data)                          ((0xFFFFFFF0&(data))>>4)

#define  DEMURA_DEMURA_DMA_WRAP_LINE_STEP                                       0x1802EB68
#define  DEMURA_DEMURA_DMA_WRAP_LINE_STEP_reg_addr                               "0xB802EB68"
#define  DEMURA_DEMURA_DMA_WRAP_LINE_STEP_reg                                    0xB802EB68
#define  DEMURA_DEMURA_DMA_WRAP_LINE_STEP_inst_addr                              "0x0014"
#define  set_DEMURA_DEMURA_DMA_WRAP_LINE_STEP_reg(data)                          (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_LINE_STEP_reg)=data)
#define  get_DEMURA_DEMURA_DMA_WRAP_LINE_STEP_reg                                (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_LINE_STEP_reg))
#define  DEMURA_DEMURA_DMA_WRAP_LINE_STEP_line_step_shift                        (4)
#define  DEMURA_DEMURA_DMA_WRAP_LINE_STEP_line_step_mask                         (0xFFFFFFF0)
#define  DEMURA_DEMURA_DMA_WRAP_LINE_STEP_line_step(data)                        (0xFFFFFFF0&((data)<<4))
#define  DEMURA_DEMURA_DMA_WRAP_LINE_STEP_get_line_step(data)                    ((0xFFFFFFF0&(data))>>4)

#define  DEMURA_DEMURA_DMA_WRAP_LEN                                             0x1802EB6C
#define  DEMURA_DEMURA_DMA_WRAP_LEN_reg_addr                                     "0xB802EB6C"
#define  DEMURA_DEMURA_DMA_WRAP_LEN_reg                                          0xB802EB6C
#define  DEMURA_DEMURA_DMA_WRAP_LEN_inst_addr                                    "0x0015"
#define  set_DEMURA_DEMURA_DMA_WRAP_LEN_reg(data)                                (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_LEN_reg)=data)
#define  get_DEMURA_DEMURA_DMA_WRAP_LEN_reg                                      (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_LEN_reg))
#define  DEMURA_DEMURA_DMA_WRAP_LEN_burst_len_shift                              (4)
#define  DEMURA_DEMURA_DMA_WRAP_LEN_burst_len_mask                               (0x000007F0)
#define  DEMURA_DEMURA_DMA_WRAP_LEN_burst_len(data)                              (0x000007F0&((data)<<4))
#define  DEMURA_DEMURA_DMA_WRAP_LEN_get_burst_len(data)                          ((0x000007F0&(data))>>4)

#define  DEMURA_DEMURA_DMA_WRAP_WORD                                            0x1802EB70
#define  DEMURA_DEMURA_DMA_WRAP_WORD_reg_addr                                    "0xB802EB70"
#define  DEMURA_DEMURA_DMA_WRAP_WORD_reg                                         0xB802EB70
#define  DEMURA_DEMURA_DMA_WRAP_WORD_inst_addr                                   "0x0016"
#define  set_DEMURA_DEMURA_DMA_WRAP_WORD_reg(data)                               (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_WORD_reg)=data)
#define  get_DEMURA_DEMURA_DMA_WRAP_WORD_reg                                     (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_WORD_reg))
#define  DEMURA_DEMURA_DMA_WRAP_WORD_line_128_num_shift                          (4)
#define  DEMURA_DEMURA_DMA_WRAP_WORD_line_128_num_mask                           (0x07FFFFF0)
#define  DEMURA_DEMURA_DMA_WRAP_WORD_line_128_num(data)                          (0x07FFFFF0&((data)<<4))
#define  DEMURA_DEMURA_DMA_WRAP_WORD_get_line_128_num(data)                      ((0x07FFFFF0&(data))>>4)

#define  DEMURA_DEMURA_DMA_RULE_CHECK_UP                                        0x1802EB74
#define  DEMURA_DEMURA_DMA_RULE_CHECK_UP_reg_addr                                "0xB802EB74"
#define  DEMURA_DEMURA_DMA_RULE_CHECK_UP_reg                                     0xB802EB74
#define  DEMURA_DEMURA_DMA_RULE_CHECK_UP_inst_addr                               "0x0017"
#define  set_DEMURA_DEMURA_DMA_RULE_CHECK_UP_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_DMA_RULE_CHECK_UP_reg)=data)
#define  get_DEMURA_DEMURA_DMA_RULE_CHECK_UP_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_DMA_RULE_CHECK_UP_reg))
#define  DEMURA_DEMURA_DMA_RULE_CHECK_UP_dma_up_limit_shift                      (4)
#define  DEMURA_DEMURA_DMA_RULE_CHECK_UP_dma_up_limit_mask                       (0xFFFFFFF0)
#define  DEMURA_DEMURA_DMA_RULE_CHECK_UP_dma_up_limit(data)                      (0xFFFFFFF0&((data)<<4))
#define  DEMURA_DEMURA_DMA_RULE_CHECK_UP_get_dma_up_limit(data)                  ((0xFFFFFFF0&(data))>>4)

#define  DEMURA_DEMURA_DMA_RULE_CHECK_LOW                                       0x1802EB78
#define  DEMURA_DEMURA_DMA_RULE_CHECK_LOW_reg_addr                               "0xB802EB78"
#define  DEMURA_DEMURA_DMA_RULE_CHECK_LOW_reg                                    0xB802EB78
#define  DEMURA_DEMURA_DMA_RULE_CHECK_LOW_inst_addr                              "0x0018"
#define  set_DEMURA_DEMURA_DMA_RULE_CHECK_LOW_reg(data)                          (*((volatile unsigned int*)DEMURA_DEMURA_DMA_RULE_CHECK_LOW_reg)=data)
#define  get_DEMURA_DEMURA_DMA_RULE_CHECK_LOW_reg                                (*((volatile unsigned int*)DEMURA_DEMURA_DMA_RULE_CHECK_LOW_reg))
#define  DEMURA_DEMURA_DMA_RULE_CHECK_LOW_dma_low_limit_shift                    (4)
#define  DEMURA_DEMURA_DMA_RULE_CHECK_LOW_dma_low_limit_mask                     (0xFFFFFFF0)
#define  DEMURA_DEMURA_DMA_RULE_CHECK_LOW_dma_low_limit(data)                    (0xFFFFFFF0&((data)<<4))
#define  DEMURA_DEMURA_DMA_RULE_CHECK_LOW_get_dma_low_limit(data)                ((0xFFFFFFF0&(data))>>4)

#define  DEMURA_DEMURA_DMA_CTRL                                                 0x1802EB7C
#define  DEMURA_DEMURA_DMA_CTRL_reg_addr                                         "0xB802EB7C"
#define  DEMURA_DEMURA_DMA_CTRL_reg                                              0xB802EB7C
#define  DEMURA_DEMURA_DMA_CTRL_inst_addr                                        "0x0019"
#define  set_DEMURA_DEMURA_DMA_CTRL_reg(data)                                    (*((volatile unsigned int*)DEMURA_DEMURA_DMA_CTRL_reg)=data)
#define  get_DEMURA_DEMURA_DMA_CTRL_reg                                          (*((volatile unsigned int*)DEMURA_DEMURA_DMA_CTRL_reg))
#define  DEMURA_DEMURA_DMA_CTRL_dma_8byte_swap_shift                             (13)
#define  DEMURA_DEMURA_DMA_CTRL_dma_4byte_swap_shift                             (12)
#define  DEMURA_DEMURA_DMA_CTRL_dma_2byte_swap_shift                             (11)
#define  DEMURA_DEMURA_DMA_CTRL_dma_1byte_swap_shift                             (10)
#define  DEMURA_DEMURA_DMA_CTRL_max_outstanding_shift                            (8)
#define  DEMURA_DEMURA_DMA_CTRL_force_all_rst_shift                              (1)
#define  DEMURA_DEMURA_DMA_CTRL_dma_8byte_swap_mask                              (0x00002000)
#define  DEMURA_DEMURA_DMA_CTRL_dma_4byte_swap_mask                              (0x00001000)
#define  DEMURA_DEMURA_DMA_CTRL_dma_2byte_swap_mask                              (0x00000800)
#define  DEMURA_DEMURA_DMA_CTRL_dma_1byte_swap_mask                              (0x00000400)
#define  DEMURA_DEMURA_DMA_CTRL_max_outstanding_mask                             (0x00000300)
#define  DEMURA_DEMURA_DMA_CTRL_force_all_rst_mask                               (0x00000002)
#define  DEMURA_DEMURA_DMA_CTRL_dma_8byte_swap(data)                             (0x00002000&((data)<<13))
#define  DEMURA_DEMURA_DMA_CTRL_dma_4byte_swap(data)                             (0x00001000&((data)<<12))
#define  DEMURA_DEMURA_DMA_CTRL_dma_2byte_swap(data)                             (0x00000800&((data)<<11))
#define  DEMURA_DEMURA_DMA_CTRL_dma_1byte_swap(data)                             (0x00000400&((data)<<10))
#define  DEMURA_DEMURA_DMA_CTRL_max_outstanding(data)                            (0x00000300&((data)<<8))
#define  DEMURA_DEMURA_DMA_CTRL_force_all_rst(data)                              (0x00000002&((data)<<1))
#define  DEMURA_DEMURA_DMA_CTRL_get_dma_8byte_swap(data)                         ((0x00002000&(data))>>13)
#define  DEMURA_DEMURA_DMA_CTRL_get_dma_4byte_swap(data)                         ((0x00001000&(data))>>12)
#define  DEMURA_DEMURA_DMA_CTRL_get_dma_2byte_swap(data)                         ((0x00000800&(data))>>11)
#define  DEMURA_DEMURA_DMA_CTRL_get_dma_1byte_swap(data)                         ((0x00000400&(data))>>10)
#define  DEMURA_DEMURA_DMA_CTRL_get_max_outstanding(data)                        ((0x00000300&(data))>>8)
#define  DEMURA_DEMURA_DMA_CTRL_get_force_all_rst(data)                          ((0x00000002&(data))>>1)

#define  DEMURA_DEMURA_DMA_WRAP_ST1                                             0x1802EB80
#define  DEMURA_DEMURA_DMA_WRAP_ST1_reg_addr                                     "0xB802EB80"
#define  DEMURA_DEMURA_DMA_WRAP_ST1_reg                                          0xB802EB80
#define  DEMURA_DEMURA_DMA_WRAP_ST1_inst_addr                                    "0x001A"
#define  set_DEMURA_DEMURA_DMA_WRAP_ST1_reg(data)                                (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_ST1_reg)=data)
#define  get_DEMURA_DEMURA_DMA_WRAP_ST1_reg                                      (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_ST1_reg))
#define  DEMURA_DEMURA_DMA_WRAP_ST1_soft_rst_before_finish_shift                 (31)
#define  DEMURA_DEMURA_DMA_WRAP_ST1_remain_line_num_shift                        (16)
#define  DEMURA_DEMURA_DMA_WRAP_ST1_soft_rst_before_finish_mask                  (0x80000000)
#define  DEMURA_DEMURA_DMA_WRAP_ST1_remain_line_num_mask                         (0x0FFF0000)
#define  DEMURA_DEMURA_DMA_WRAP_ST1_soft_rst_before_finish(data)                 (0x80000000&((data)<<31))
#define  DEMURA_DEMURA_DMA_WRAP_ST1_remain_line_num(data)                        (0x0FFF0000&((data)<<16))
#define  DEMURA_DEMURA_DMA_WRAP_ST1_get_soft_rst_before_finish(data)             ((0x80000000&(data))>>31)
#define  DEMURA_DEMURA_DMA_WRAP_ST1_get_remain_line_num(data)                    ((0x0FFF0000&(data))>>16)

#define  DEMURA_DEMURA_DMA_WRAP_ST2                                             0x1802EB84
#define  DEMURA_DEMURA_DMA_WRAP_ST2_reg_addr                                     "0xB802EB84"
#define  DEMURA_DEMURA_DMA_WRAP_ST2_reg                                          0xB802EB84
#define  DEMURA_DEMURA_DMA_WRAP_ST2_inst_addr                                    "0x001B"
#define  set_DEMURA_DEMURA_DMA_WRAP_ST2_reg(data)                                (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_ST2_reg)=data)
#define  get_DEMURA_DEMURA_DMA_WRAP_ST2_reg                                      (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WRAP_ST2_reg))
#define  DEMURA_DEMURA_DMA_WRAP_ST2_remain_128_num_shift                         (4)
#define  DEMURA_DEMURA_DMA_WRAP_ST2_finish_status_shift                          (0)
#define  DEMURA_DEMURA_DMA_WRAP_ST2_remain_128_num_mask                          (0x07FFFFF0)
#define  DEMURA_DEMURA_DMA_WRAP_ST2_finish_status_mask                           (0x00000003)
#define  DEMURA_DEMURA_DMA_WRAP_ST2_remain_128_num(data)                         (0x07FFFFF0&((data)<<4))
#define  DEMURA_DEMURA_DMA_WRAP_ST2_finish_status(data)                          (0x00000003&(data))
#define  DEMURA_DEMURA_DMA_WRAP_ST2_get_remain_128_num(data)                     ((0x07FFFFF0&(data))>>4)
#define  DEMURA_DEMURA_DMA_WRAP_ST2_get_finish_status(data)                      (0x00000003&(data))

#define  DEMURA_DEMURA_DMA_ST1                                                  0x1802EB88
#define  DEMURA_DEMURA_DMA_ST1_reg_addr                                          "0xB802EB88"
#define  DEMURA_DEMURA_DMA_ST1_reg                                               0xB802EB88
#define  DEMURA_DEMURA_DMA_ST1_inst_addr                                         "0x001C"
#define  set_DEMURA_DEMURA_DMA_ST1_reg(data)                                     (*((volatile unsigned int*)DEMURA_DEMURA_DMA_ST1_reg)=data)
#define  get_DEMURA_DEMURA_DMA_ST1_reg                                           (*((volatile unsigned int*)DEMURA_DEMURA_DMA_ST1_reg))
#define  DEMURA_DEMURA_DMA_ST1_dma_cmd_water_shift                               (28)
#define  DEMURA_DEMURA_DMA_ST1_dma_data_water_shift                              (16)
#define  DEMURA_DEMURA_DMA_ST1_cur_outstanding_shift                             (8)
#define  DEMURA_DEMURA_DMA_ST1_fifo_underflow_shift                              (5)
#define  DEMURA_DEMURA_DMA_ST1_soft_rst_before_cmd_finish_shift                  (4)
#define  DEMURA_DEMURA_DMA_ST1_soft_rst_with_data_left_shift                     (3)
#define  DEMURA_DEMURA_DMA_ST1_data_fifo_overflow_err_shift                      (2)
#define  DEMURA_DEMURA_DMA_ST1_exceed_range_err_shift                            (1)
#define  DEMURA_DEMURA_DMA_ST1_zero_length_err_shift                             (0)
#define  DEMURA_DEMURA_DMA_ST1_dma_cmd_water_mask                                (0x70000000)
#define  DEMURA_DEMURA_DMA_ST1_dma_data_water_mask                               (0x00FF0000)
#define  DEMURA_DEMURA_DMA_ST1_cur_outstanding_mask                              (0x00000700)
#define  DEMURA_DEMURA_DMA_ST1_fifo_underflow_mask                               (0x00000020)
#define  DEMURA_DEMURA_DMA_ST1_soft_rst_before_cmd_finish_mask                   (0x00000010)
#define  DEMURA_DEMURA_DMA_ST1_soft_rst_with_data_left_mask                      (0x00000008)
#define  DEMURA_DEMURA_DMA_ST1_data_fifo_overflow_err_mask                       (0x00000004)
#define  DEMURA_DEMURA_DMA_ST1_exceed_range_err_mask                             (0x00000002)
#define  DEMURA_DEMURA_DMA_ST1_zero_length_err_mask                              (0x00000001)
#define  DEMURA_DEMURA_DMA_ST1_dma_cmd_water(data)                               (0x70000000&((data)<<28))
#define  DEMURA_DEMURA_DMA_ST1_dma_data_water(data)                              (0x00FF0000&((data)<<16))
#define  DEMURA_DEMURA_DMA_ST1_cur_outstanding(data)                             (0x00000700&((data)<<8))
#define  DEMURA_DEMURA_DMA_ST1_fifo_underflow(data)                              (0x00000020&((data)<<5))
#define  DEMURA_DEMURA_DMA_ST1_soft_rst_before_cmd_finish(data)                  (0x00000010&((data)<<4))
#define  DEMURA_DEMURA_DMA_ST1_soft_rst_with_data_left(data)                     (0x00000008&((data)<<3))
#define  DEMURA_DEMURA_DMA_ST1_data_fifo_overflow_err(data)                      (0x00000004&((data)<<2))
#define  DEMURA_DEMURA_DMA_ST1_exceed_range_err(data)                            (0x00000002&((data)<<1))
#define  DEMURA_DEMURA_DMA_ST1_zero_length_err(data)                             (0x00000001&(data))
#define  DEMURA_DEMURA_DMA_ST1_get_dma_cmd_water(data)                           ((0x70000000&(data))>>28)
#define  DEMURA_DEMURA_DMA_ST1_get_dma_data_water(data)                          ((0x00FF0000&(data))>>16)
#define  DEMURA_DEMURA_DMA_ST1_get_cur_outstanding(data)                         ((0x00000700&(data))>>8)
#define  DEMURA_DEMURA_DMA_ST1_get_fifo_underflow(data)                          ((0x00000020&(data))>>5)
#define  DEMURA_DEMURA_DMA_ST1_get_soft_rst_before_cmd_finish(data)              ((0x00000010&(data))>>4)
#define  DEMURA_DEMURA_DMA_ST1_get_soft_rst_with_data_left(data)                 ((0x00000008&(data))>>3)
#define  DEMURA_DEMURA_DMA_ST1_get_data_fifo_overflow_err(data)                  ((0x00000004&(data))>>2)
#define  DEMURA_DEMURA_DMA_ST1_get_exceed_range_err(data)                        ((0x00000002&(data))>>1)
#define  DEMURA_DEMURA_DMA_ST1_get_zero_length_err(data)                         (0x00000001&(data))

#define  DEMURA_DEMURA_DMA_ST2                                                  0x1802EB8C
#define  DEMURA_DEMURA_DMA_ST2_reg_addr                                          "0xB802EB8C"
#define  DEMURA_DEMURA_DMA_ST2_reg                                               0xB802EB8C
#define  DEMURA_DEMURA_DMA_ST2_inst_addr                                         "0x001D"
#define  set_DEMURA_DEMURA_DMA_ST2_reg(data)                                     (*((volatile unsigned int*)DEMURA_DEMURA_DMA_ST2_reg)=data)
#define  get_DEMURA_DEMURA_DMA_ST2_reg                                           (*((volatile unsigned int*)DEMURA_DEMURA_DMA_ST2_reg))
#define  DEMURA_DEMURA_DMA_ST2_ack_num_error_shift                               (31)
#define  DEMURA_DEMURA_DMA_ST2_last_no_ack_error_shift                           (30)
#define  DEMURA_DEMURA_DMA_ST2_target_ack_num_shift                              (16)
#define  DEMURA_DEMURA_DMA_ST2_last_ack_num_shift                                (8)
#define  DEMURA_DEMURA_DMA_ST2_selected_bl_shift                                 (0)
#define  DEMURA_DEMURA_DMA_ST2_ack_num_error_mask                                (0x80000000)
#define  DEMURA_DEMURA_DMA_ST2_last_no_ack_error_mask                            (0x40000000)
#define  DEMURA_DEMURA_DMA_ST2_target_ack_num_mask                               (0x007F0000)
#define  DEMURA_DEMURA_DMA_ST2_last_ack_num_mask                                 (0x00007F00)
#define  DEMURA_DEMURA_DMA_ST2_selected_bl_mask                                  (0x0000007F)
#define  DEMURA_DEMURA_DMA_ST2_ack_num_error(data)                               (0x80000000&((data)<<31))
#define  DEMURA_DEMURA_DMA_ST2_last_no_ack_error(data)                           (0x40000000&((data)<<30))
#define  DEMURA_DEMURA_DMA_ST2_target_ack_num(data)                              (0x007F0000&((data)<<16))
#define  DEMURA_DEMURA_DMA_ST2_last_ack_num(data)                                (0x00007F00&((data)<<8))
#define  DEMURA_DEMURA_DMA_ST2_selected_bl(data)                                 (0x0000007F&(data))
#define  DEMURA_DEMURA_DMA_ST2_get_ack_num_error(data)                           ((0x80000000&(data))>>31)
#define  DEMURA_DEMURA_DMA_ST2_get_last_no_ack_error(data)                       ((0x40000000&(data))>>30)
#define  DEMURA_DEMURA_DMA_ST2_get_target_ack_num(data)                          ((0x007F0000&(data))>>16)
#define  DEMURA_DEMURA_DMA_ST2_get_last_ack_num(data)                            ((0x00007F00&(data))>>8)
#define  DEMURA_DEMURA_DMA_ST2_get_selected_bl(data)                             (0x0000007F&(data))

#define  DEMURA_DEMURA_DMA_ST3                                                  0x1802EB90
#define  DEMURA_DEMURA_DMA_ST3_reg_addr                                          "0xB802EB90"
#define  DEMURA_DEMURA_DMA_ST3_reg                                               0xB802EB90
#define  DEMURA_DEMURA_DMA_ST3_inst_addr                                         "0x001E"
#define  set_DEMURA_DEMURA_DMA_ST3_reg(data)                                     (*((volatile unsigned int*)DEMURA_DEMURA_DMA_ST3_reg)=data)
#define  get_DEMURA_DEMURA_DMA_ST3_reg                                           (*((volatile unsigned int*)DEMURA_DEMURA_DMA_ST3_reg))
#define  DEMURA_DEMURA_DMA_ST3_selected_addr_shift                               (4)
#define  DEMURA_DEMURA_DMA_ST3_addr_bl_sel_shift                                 (0)
#define  DEMURA_DEMURA_DMA_ST3_selected_addr_mask                                (0xFFFFFFF0)
#define  DEMURA_DEMURA_DMA_ST3_addr_bl_sel_mask                                  (0x00000003)
#define  DEMURA_DEMURA_DMA_ST3_selected_addr(data)                               (0xFFFFFFF0&((data)<<4))
#define  DEMURA_DEMURA_DMA_ST3_addr_bl_sel(data)                                 (0x00000003&(data))
#define  DEMURA_DEMURA_DMA_ST3_get_selected_addr(data)                           ((0xFFFFFFF0&(data))>>4)
#define  DEMURA_DEMURA_DMA_ST3_get_addr_bl_sel(data)                             (0x00000003&(data))

#define  DEMURA_DEMURA_DMA_WATER_MONITOR                                        0x1802EB94
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_reg_addr                                "0xB802EB94"
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_reg                                     0xB802EB94
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_inst_addr                               "0x001F"
#define  set_DEMURA_DEMURA_DMA_WATER_MONITOR_reg(data)                           (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WATER_MONITOR_reg)=data)
#define  get_DEMURA_DEMURA_DMA_WATER_MONITOR_reg                                 (*((volatile unsigned int*)DEMURA_DEMURA_DMA_WATER_MONITOR_reg))
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_monitor_en_shift                        (31)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_monitor_conti_shift                     (30)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_monitor_thd_shift                       (16)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_reach_thd_shift                         (8)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_lowest_water_level_shift                (0)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_monitor_en_mask                         (0x80000000)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_monitor_conti_mask                      (0x40000000)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_monitor_thd_mask                        (0x00FF0000)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_reach_thd_mask                          (0x00000100)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_lowest_water_level_mask                 (0x000000FF)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_monitor_en(data)                        (0x80000000&((data)<<31))
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_monitor_conti(data)                     (0x40000000&((data)<<30))
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_monitor_thd(data)                       (0x00FF0000&((data)<<16))
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_reach_thd(data)                         (0x00000100&((data)<<8))
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_lowest_water_level(data)                (0x000000FF&(data))
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_get_monitor_en(data)                    ((0x80000000&(data))>>31)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_get_monitor_conti(data)                 ((0x40000000&(data))>>30)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_get_monitor_thd(data)                   ((0x00FF0000&(data))>>16)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_get_reach_thd(data)                     ((0x00000100&(data))>>8)
#define  DEMURA_DEMURA_DMA_WATER_MONITOR_get_lowest_water_level(data)            (0x000000FF&(data))

#define  DEMURA_DEMURA_DMA_BIST_1                                               0x1802EBA0
#define  DEMURA_DEMURA_DMA_BIST_1_reg_addr                                       "0xB802EBA0"
#define  DEMURA_DEMURA_DMA_BIST_1_reg                                            0xB802EBA0
#define  DEMURA_DEMURA_DMA_BIST_1_inst_addr                                      "0x0020"
#define  set_DEMURA_DEMURA_DMA_BIST_1_reg(data)                                  (*((volatile unsigned int*)DEMURA_DEMURA_DMA_BIST_1_reg)=data)
#define  get_DEMURA_DEMURA_DMA_BIST_1_reg                                        (*((volatile unsigned int*)DEMURA_DEMURA_DMA_BIST_1_reg))
#define  DEMURA_DEMURA_DMA_BIST_1_ls_dma_fifo_shift                              (22)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_r1_shift                                    (21)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_g1_shift                                    (20)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_b1_shift                                    (19)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_r0_shift                                    (18)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_g0_shift                                    (17)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_b0_shift                                    (16)
#define  DEMURA_DEMURA_DMA_BIST_1_test_shift                                     (5)
#define  DEMURA_DEMURA_DMA_BIST_1_rme_shift                                      (4)
#define  DEMURA_DEMURA_DMA_BIST_1_rm_shift                                       (0)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_dma_fifo_mask                               (0x00400000)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_r1_mask                                     (0x00200000)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_g1_mask                                     (0x00100000)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_b1_mask                                     (0x00080000)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_r0_mask                                     (0x00040000)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_g0_mask                                     (0x00020000)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_b0_mask                                     (0x00010000)
#define  DEMURA_DEMURA_DMA_BIST_1_test_mask                                      (0x00000020)
#define  DEMURA_DEMURA_DMA_BIST_1_rme_mask                                       (0x00000010)
#define  DEMURA_DEMURA_DMA_BIST_1_rm_mask                                        (0x0000000F)
#define  DEMURA_DEMURA_DMA_BIST_1_ls_dma_fifo(data)                              (0x00400000&((data)<<22))
#define  DEMURA_DEMURA_DMA_BIST_1_ls_r1(data)                                    (0x00200000&((data)<<21))
#define  DEMURA_DEMURA_DMA_BIST_1_ls_g1(data)                                    (0x00100000&((data)<<20))
#define  DEMURA_DEMURA_DMA_BIST_1_ls_b1(data)                                    (0x00080000&((data)<<19))
#define  DEMURA_DEMURA_DMA_BIST_1_ls_r0(data)                                    (0x00040000&((data)<<18))
#define  DEMURA_DEMURA_DMA_BIST_1_ls_g0(data)                                    (0x00020000&((data)<<17))
#define  DEMURA_DEMURA_DMA_BIST_1_ls_b0(data)                                    (0x00010000&((data)<<16))
#define  DEMURA_DEMURA_DMA_BIST_1_test(data)                                     (0x00000020&((data)<<5))
#define  DEMURA_DEMURA_DMA_BIST_1_rme(data)                                      (0x00000010&((data)<<4))
#define  DEMURA_DEMURA_DMA_BIST_1_rm(data)                                       (0x0000000F&(data))
#define  DEMURA_DEMURA_DMA_BIST_1_get_ls_dma_fifo(data)                          ((0x00400000&(data))>>22)
#define  DEMURA_DEMURA_DMA_BIST_1_get_ls_r1(data)                                ((0x00200000&(data))>>21)
#define  DEMURA_DEMURA_DMA_BIST_1_get_ls_g1(data)                                ((0x00100000&(data))>>20)
#define  DEMURA_DEMURA_DMA_BIST_1_get_ls_b1(data)                                ((0x00080000&(data))>>19)
#define  DEMURA_DEMURA_DMA_BIST_1_get_ls_r0(data)                                ((0x00040000&(data))>>18)
#define  DEMURA_DEMURA_DMA_BIST_1_get_ls_g0(data)                                ((0x00020000&(data))>>17)
#define  DEMURA_DEMURA_DMA_BIST_1_get_ls_b0(data)                                ((0x00010000&(data))>>16)
#define  DEMURA_DEMURA_DMA_BIST_1_get_test(data)                                 ((0x00000020&(data))>>5)
#define  DEMURA_DEMURA_DMA_BIST_1_get_rme(data)                                  ((0x00000010&(data))>>4)
#define  DEMURA_DEMURA_DMA_BIST_1_get_rm(data)                                   (0x0000000F&(data))

#define  DEMURA_DEMURA_DMA_BIST_2                                               0x1802EBA4
#define  DEMURA_DEMURA_DMA_BIST_2_reg_addr                                       "0xB802EBA4"
#define  DEMURA_DEMURA_DMA_BIST_2_reg                                            0xB802EBA4
#define  DEMURA_DEMURA_DMA_BIST_2_inst_addr                                      "0x0021"
#define  set_DEMURA_DEMURA_DMA_BIST_2_reg(data)                                  (*((volatile unsigned int*)DEMURA_DEMURA_DMA_BIST_2_reg)=data)
#define  get_DEMURA_DEMURA_DMA_BIST_2_reg                                        (*((volatile unsigned int*)DEMURA_DEMURA_DMA_BIST_2_reg))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_dma_fifo_drf_bist_fail_shift            (22)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r1_drf_bist_fail_shift                  (21)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g1_drf_bist_fail_shift                  (20)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b1_drf_bist_fail_shift                  (19)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r0_drf_bist_fail_shift                  (18)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g0_drf_bist_fail_shift                  (17)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b0_drf_bist_fail_shift                  (16)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_dma_fifo_bist_fail_shift                (6)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r1_bist_fail_shift                      (5)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g1_bist_fail_shift                      (4)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b1_bist_fail_shift                      (3)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r0_bist_fail_shift                      (2)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g0_bist_fail_shift                      (1)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b0_bist_fail_shift                      (0)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_dma_fifo_drf_bist_fail_mask             (0x00400000)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r1_drf_bist_fail_mask                   (0x00200000)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g1_drf_bist_fail_mask                   (0x00100000)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b1_drf_bist_fail_mask                   (0x00080000)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r0_drf_bist_fail_mask                   (0x00040000)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g0_drf_bist_fail_mask                   (0x00020000)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b0_drf_bist_fail_mask                   (0x00010000)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_dma_fifo_bist_fail_mask                 (0x00000040)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r1_bist_fail_mask                       (0x00000020)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g1_bist_fail_mask                       (0x00000010)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b1_bist_fail_mask                       (0x00000008)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r0_bist_fail_mask                       (0x00000004)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g0_bist_fail_mask                       (0x00000002)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b0_bist_fail_mask                       (0x00000001)
#define  DEMURA_DEMURA_DMA_BIST_2_demura_dma_fifo_drf_bist_fail(data)            (0x00400000&((data)<<22))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r1_drf_bist_fail(data)                  (0x00200000&((data)<<21))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g1_drf_bist_fail(data)                  (0x00100000&((data)<<20))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b1_drf_bist_fail(data)                  (0x00080000&((data)<<19))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r0_drf_bist_fail(data)                  (0x00040000&((data)<<18))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g0_drf_bist_fail(data)                  (0x00020000&((data)<<17))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b0_drf_bist_fail(data)                  (0x00010000&((data)<<16))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_dma_fifo_bist_fail(data)                (0x00000040&((data)<<6))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r1_bist_fail(data)                      (0x00000020&((data)<<5))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g1_bist_fail(data)                      (0x00000010&((data)<<4))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b1_bist_fail(data)                      (0x00000008&((data)<<3))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_r0_bist_fail(data)                      (0x00000004&((data)<<2))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_g0_bist_fail(data)                      (0x00000002&((data)<<1))
#define  DEMURA_DEMURA_DMA_BIST_2_demura_b0_bist_fail(data)                      (0x00000001&(data))
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_dma_fifo_drf_bist_fail(data)        ((0x00400000&(data))>>22)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_r1_drf_bist_fail(data)              ((0x00200000&(data))>>21)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_g1_drf_bist_fail(data)              ((0x00100000&(data))>>20)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_b1_drf_bist_fail(data)              ((0x00080000&(data))>>19)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_r0_drf_bist_fail(data)              ((0x00040000&(data))>>18)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_g0_drf_bist_fail(data)              ((0x00020000&(data))>>17)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_b0_drf_bist_fail(data)              ((0x00010000&(data))>>16)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_dma_fifo_bist_fail(data)            ((0x00000040&(data))>>6)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_r1_bist_fail(data)                  ((0x00000020&(data))>>5)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_g1_bist_fail(data)                  ((0x00000010&(data))>>4)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_b1_bist_fail(data)                  ((0x00000008&(data))>>3)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_r0_bist_fail(data)                  ((0x00000004&(data))>>2)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_g0_bist_fail(data)                  ((0x00000002&(data))>>1)
#define  DEMURA_DEMURA_DMA_BIST_2_get_demura_b0_bist_fail(data)                  (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DEMURA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802eb00_31_14:18;
        RBus_UInt32  demura_table_scale_h:2;
        RBus_UInt32  demura_table_scale_m:2;
        RBus_UInt32  demura_table_scale_l:2;
        RBus_UInt32  dummy1802eb00_7:1;
        RBus_UInt32  demura_location_swap:1;
        RBus_UInt32  demura_table_scale:2;
        RBus_UInt32  demura_block_size:2;
        RBus_UInt32  demura_rgb_table_seperate:1;
        RBus_UInt32  demura_en:1;
    };
}demura_demura_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  demura_r_upper_cutoff:11;
        RBus_UInt32  res2:6;
        RBus_UInt32  demura_r_lower_cutoff:10;
    };
}demura_demura_r_plane_1_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  demura_r_m_level:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  demura_r_l_level:10;
    };
}demura_demura_r_plane_2_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  demura_r_h_level:11;
    };
}demura_demura_r_plane_3_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_div_factor_l_m:16;
        RBus_UInt32  r_div_factor_l:16;
    };
}demura_demura_r_plane_4_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_div_factor_h:16;
        RBus_UInt32  r_div_factor_m_h:16;
    };
}demura_demura_r_plane_5_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  demura_g_upper_cutoff:11;
        RBus_UInt32  res2:6;
        RBus_UInt32  demura_g_lower_cutoff:10;
    };
}demura_demura_g_plane_1_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  demura_g_m_level:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  demura_g_l_level:10;
    };
}demura_demura_g_plane_2_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  demura_g_h_level:11;
    };
}demura_demura_g_plane_3_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_div_factor_l_m:16;
        RBus_UInt32  g_div_factor_l:16;
    };
}demura_demura_g_plane_4_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_div_factor_h:16;
        RBus_UInt32  g_div_factor_m_h:16;
    };
}demura_demura_g_plane_5_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  demura_b_upper_cutoff:11;
        RBus_UInt32  res2:6;
        RBus_UInt32  demura_b_lower_cutoff:10;
    };
}demura_demura_b_plane_1_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  demura_b_m_level:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  demura_b_l_level:10;
    };
}demura_demura_b_plane_2_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  demura_b_h_level:11;
    };
}demura_demura_b_plane_3_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_div_factor_l_m:16;
        RBus_UInt32  b_div_factor_l:16;
    };
}demura_demura_b_plane_4_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_div_factor_h:16;
        RBus_UInt32  b_div_factor_m_h:16;
    };
}demura_demura_b_plane_5_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  demura_r_h_keep_level:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  demura_g_h_keep_level:11;
    };
}demura_demura_keep_h_control0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  demura_b_h_keep_level:11;
    };
}demura_demura_keep_h_control1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  table_width:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  table_height:9;
    };
}demura_demura_dma_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sta_addr:28;
        RBus_UInt32  res1:4;
    };
}demura_demura_dma_wrap_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_step:28;
        RBus_UInt32  res1:4;
    };
}demura_demura_dma_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  burst_len:7;
        RBus_UInt32  res2:4;
    };
}demura_demura_dma_wrap_len_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  line_128_num:23;
        RBus_UInt32  res2:4;
    };
}demura_demura_dma_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}demura_demura_dma_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}demura_demura_dma_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  dma_8byte_swap:1;
        RBus_UInt32  dma_4byte_swap:1;
        RBus_UInt32  dma_2byte_swap:1;
        RBus_UInt32  dma_1byte_swap:1;
        RBus_UInt32  max_outstanding:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res3:1;
    };
}demura_demura_dma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  soft_rst_before_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  remain_line_num:12;
        RBus_UInt32  res2:16;
    };
}demura_demura_dma_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  remain_128_num:23;
        RBus_UInt32  res2:2;
        RBus_UInt32  finish_status:2;
    };
}demura_demura_dma_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:4;
        RBus_UInt32  dma_data_water:8;
        RBus_UInt32  res3:5;
        RBus_UInt32  cur_outstanding:3;
        RBus_UInt32  res4:2;
        RBus_UInt32  fifo_underflow:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}demura_demura_dma_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}demura_demura_dma_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}demura_demura_dma_st3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  monitor_thd:8;
        RBus_UInt32  res2:7;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  lowest_water_level:8;
    };
}demura_demura_dma_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  ls_dma_fifo:1;
        RBus_UInt32  ls_r1:1;
        RBus_UInt32  ls_g1:1;
        RBus_UInt32  ls_b1:1;
        RBus_UInt32  ls_r0:1;
        RBus_UInt32  ls_g0:1;
        RBus_UInt32  ls_b0:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  test:1;
        RBus_UInt32  rme:1;
        RBus_UInt32  rm:4;
    };
}demura_demura_dma_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  demura_dma_fifo_drf_bist_fail:1;
        RBus_UInt32  demura_r1_drf_bist_fail:1;
        RBus_UInt32  demura_g1_drf_bist_fail:1;
        RBus_UInt32  demura_b1_drf_bist_fail:1;
        RBus_UInt32  demura_r0_drf_bist_fail:1;
        RBus_UInt32  demura_g0_drf_bist_fail:1;
        RBus_UInt32  demura_b0_drf_bist_fail:1;
        RBus_UInt32  res2:9;
        RBus_UInt32  demura_dma_fifo_bist_fail:1;
        RBus_UInt32  demura_r1_bist_fail:1;
        RBus_UInt32  demura_g1_bist_fail:1;
        RBus_UInt32  demura_b1_bist_fail:1;
        RBus_UInt32  demura_r0_bist_fail:1;
        RBus_UInt32  demura_g0_bist_fail:1;
        RBus_UInt32  demura_b0_bist_fail:1;
    };
}demura_demura_dma_bist_2_RBUS;

#else //apply LITTLE_ENDIAN

//======DEMURA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_en:1;
        RBus_UInt32  demura_rgb_table_seperate:1;
        RBus_UInt32  demura_block_size:2;
        RBus_UInt32  demura_table_scale:2;
        RBus_UInt32  demura_location_swap:1;
        RBus_UInt32  dummy1802eb00_7:1;
        RBus_UInt32  demura_table_scale_l:2;
        RBus_UInt32  demura_table_scale_m:2;
        RBus_UInt32  demura_table_scale_h:2;
        RBus_UInt32  dummy1802eb00_31_14:18;
    };
}demura_demura_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_r_lower_cutoff:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  demura_r_upper_cutoff:11;
        RBus_UInt32  res2:5;
    };
}demura_demura_r_plane_1_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_r_l_level:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  demura_r_m_level:10;
        RBus_UInt32  res2:6;
    };
}demura_demura_r_plane_2_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_r_h_level:11;
        RBus_UInt32  res1:21;
    };
}demura_demura_r_plane_3_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_div_factor_l:16;
        RBus_UInt32  r_div_factor_l_m:16;
    };
}demura_demura_r_plane_4_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  r_div_factor_m_h:16;
        RBus_UInt32  r_div_factor_h:16;
    };
}demura_demura_r_plane_5_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_g_lower_cutoff:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  demura_g_upper_cutoff:11;
        RBus_UInt32  res2:5;
    };
}demura_demura_g_plane_1_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_g_l_level:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  demura_g_m_level:10;
        RBus_UInt32  res2:6;
    };
}demura_demura_g_plane_2_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_g_h_level:11;
        RBus_UInt32  res1:21;
    };
}demura_demura_g_plane_3_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_div_factor_l:16;
        RBus_UInt32  g_div_factor_l_m:16;
    };
}demura_demura_g_plane_4_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  g_div_factor_m_h:16;
        RBus_UInt32  g_div_factor_h:16;
    };
}demura_demura_g_plane_5_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_b_lower_cutoff:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  demura_b_upper_cutoff:11;
        RBus_UInt32  res2:5;
    };
}demura_demura_b_plane_1_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_b_l_level:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  demura_b_m_level:10;
        RBus_UInt32  res2:6;
    };
}demura_demura_b_plane_2_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_b_h_level:11;
        RBus_UInt32  res1:21;
    };
}demura_demura_b_plane_3_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_div_factor_l:16;
        RBus_UInt32  b_div_factor_l_m:16;
    };
}demura_demura_b_plane_4_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b_div_factor_m_h:16;
        RBus_UInt32  b_div_factor_h:16;
    };
}demura_demura_b_plane_5_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_g_h_keep_level:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  demura_r_h_keep_level:11;
        RBus_UInt32  res2:5;
    };
}demura_demura_keep_h_control0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_b_h_keep_level:11;
        RBus_UInt32  res1:21;
    };
}demura_demura_keep_h_control1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  table_height:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  table_width:9;
        RBus_UInt32  res2:7;
    };
}demura_demura_dma_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  sta_addr:28;
    };
}demura_demura_dma_wrap_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  line_step:28;
    };
}demura_demura_dma_wrap_line_step_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  burst_len:7;
        RBus_UInt32  res2:21;
    };
}demura_demura_dma_wrap_len_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  line_128_num:23;
        RBus_UInt32  res2:5;
    };
}demura_demura_dma_wrap_word_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}demura_demura_dma_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}demura_demura_dma_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  max_outstanding:2;
        RBus_UInt32  dma_1byte_swap:1;
        RBus_UInt32  dma_2byte_swap:1;
        RBus_UInt32  dma_4byte_swap:1;
        RBus_UInt32  dma_8byte_swap:1;
        RBus_UInt32  res3:18;
    };
}demura_demura_dma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  remain_line_num:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  soft_rst_before_finish:1;
    };
}demura_demura_dma_wrap_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  finish_status:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  remain_128_num:23;
        RBus_UInt32  res2:5;
    };
}demura_demura_dma_wrap_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  fifo_underflow:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  dma_data_water:8;
        RBus_UInt32  res3:4;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}demura_demura_dma_st1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}demura_demura_dma_st2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}demura_demura_dma_st3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lowest_water_level:8;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  monitor_thd:8;
        RBus_UInt32  res2:6;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}demura_demura_dma_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm:4;
        RBus_UInt32  rme:1;
        RBus_UInt32  test:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  ls_b0:1;
        RBus_UInt32  ls_g0:1;
        RBus_UInt32  ls_r0:1;
        RBus_UInt32  ls_b1:1;
        RBus_UInt32  ls_g1:1;
        RBus_UInt32  ls_r1:1;
        RBus_UInt32  ls_dma_fifo:1;
        RBus_UInt32  res2:9;
    };
}demura_demura_dma_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  demura_b0_bist_fail:1;
        RBus_UInt32  demura_g0_bist_fail:1;
        RBus_UInt32  demura_r0_bist_fail:1;
        RBus_UInt32  demura_b1_bist_fail:1;
        RBus_UInt32  demura_g1_bist_fail:1;
        RBus_UInt32  demura_r1_bist_fail:1;
        RBus_UInt32  demura_dma_fifo_bist_fail:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  demura_b0_drf_bist_fail:1;
        RBus_UInt32  demura_g0_drf_bist_fail:1;
        RBus_UInt32  demura_r0_drf_bist_fail:1;
        RBus_UInt32  demura_b1_drf_bist_fail:1;
        RBus_UInt32  demura_g1_drf_bist_fail:1;
        RBus_UInt32  demura_r1_drf_bist_fail:1;
        RBus_UInt32  demura_dma_fifo_drf_bist_fail:1;
        RBus_UInt32  res2:9;
    };
}demura_demura_dma_bist_2_RBUS;




#endif 


#endif 
