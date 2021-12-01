/**
* @file Merlin5-DesignSpec-I-Domain_Multiband_Peaking
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_COLOR_MB_PEAKING_REG_H_
#define _RBUS_COLOR_MB_PEAKING_REG_H_

#include "rbus_types.h"



//  COLOR_MB_PEAKING Register Address
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL                                       0x18023C00
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_reg_addr                               "0xB8023C00"
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_reg                                    0xB8023C00
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_inst_addr                              "0x0000"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_CTRL_reg(data)                          (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_CTRL_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_CTRL_reg                                (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_CTRL_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_hvmin_en_shift              (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_bsmaxmin_shift              (9)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_h_en_shift                  (8)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_v_en_shift                  (7)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_snr_flag_en_shift                   (6)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_debug_mode_shift                    (4)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_v_en_shift                          (3)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_h_en_shift                          (2)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_ver_vfilter_data_shift              (1)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_peaking_en_shift                    (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_hvmin_en_mask               (0x00000C00)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_bsmaxmin_mask               (0x00000200)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_h_en_mask                   (0x00000100)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_v_en_mask                   (0x00000080)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_snr_flag_en_mask                    (0x00000040)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_debug_mode_mask                     (0x00000030)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_v_en_mask                           (0x00000008)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_h_en_mask                           (0x00000004)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_ver_vfilter_data_mask               (0x00000002)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_peaking_en_mask                     (0x00000001)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_hvmin_en(data)              (0x00000C00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_bsmaxmin(data)              (0x00000200&((data)<<9))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_h_en(data)                  (0x00000100&((data)<<8))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_de_over_v_en(data)                  (0x00000080&((data)<<7))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_snr_flag_en(data)                   (0x00000040&((data)<<6))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_debug_mode(data)                    (0x00000030&((data)<<4))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_v_en(data)                          (0x00000008&((data)<<3))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_h_en(data)                          (0x00000004&((data)<<2))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_ver_vfilter_data(data)              (0x00000002&((data)<<1))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_mb_peaking_en(data)                    (0x00000001&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_get_mb_de_over_hvmin_en(data)          ((0x00000C00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_get_mb_de_over_bsmaxmin(data)          ((0x00000200&(data))>>9)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_get_mb_de_over_h_en(data)              ((0x00000100&(data))>>8)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_get_mb_de_over_v_en(data)              ((0x00000080&(data))>>7)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_get_mb_snr_flag_en(data)               ((0x00000040&(data))>>6)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_get_mb_debug_mode(data)                ((0x00000030&(data))>>4)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_get_mb_v_en(data)                      ((0x00000008&(data))>>3)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_get_mb_h_en(data)                      ((0x00000004&(data))>>2)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_get_mb_ver_vfilter_data(data)          ((0x00000002&(data))>>1)
#define  COLOR_MB_PEAKING_MB_PEAKING_CTRL_get_mb_peaking_en(data)                (0x00000001&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0                               0x18023C04
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_reg_addr                       "0xB8023C04"
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_reg                            0xB8023C04
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_inst_addr                      "0x0001"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_reg(data)                  (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_reg                        (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_mb_hor_filter_c0_shift         (16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_mb_hor_filter_c1_shift         (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_mb_hor_filter_c0_mask          (0x01FF0000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_mb_hor_filter_c1_mask          (0x000001FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_mb_hor_filter_c0(data)         (0x01FF0000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_mb_hor_filter_c1(data)         (0x000001FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_get_mb_hor_filter_c0(data)     ((0x01FF0000&(data))>>16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_0_get_mb_hor_filter_c1(data)     (0x000001FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1                               0x18023C08
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_reg_addr                       "0xB8023C08"
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_reg                            0xB8023C08
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_inst_addr                      "0x0002"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_reg(data)                  (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_reg                        (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_mb_hor_filter_c2_shift         (24)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_mb_hor_filter_c3_shift         (16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_mb_hor_filter_c2_mask          (0xFF000000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_mb_hor_filter_c3_mask          (0x007F0000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_mb_hor_filter_c2(data)         (0xFF000000&((data)<<24))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_mb_hor_filter_c3(data)         (0x007F0000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_get_mb_hor_filter_c2(data)     ((0xFF000000&(data))>>24)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_FILTER_1_get_mb_hor_filter_c3(data)     ((0x007F0000&(data))>>16)

#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN                                   0x18023C10
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_reg_addr                           "0xB8023C10"
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_reg                                0xB8023C10
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_inst_addr                          "0x0003"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_reg(data)                      (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_reg                            (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_mb_gain_pos_shift                  (8)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_mb_gain_neg_shift                  (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_mb_gain_pos_mask                   (0x0000FF00)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_mb_gain_neg_mask                   (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_mb_gain_pos(data)                  (0x0000FF00&((data)<<8))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_mb_gain_neg(data)                  (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_get_mb_gain_pos(data)              ((0x0000FF00&(data))>>8)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_get_mb_gain_neg(data)              (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND                                  0x18023C14
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_reg_addr                          "0xB8023C14"
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_reg                               0xB8023C14
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_inst_addr                         "0x0004"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_reg(data)                     (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_reg                           (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_mb_hv_pos_shift                   (16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_mb_hv_neg_shift                   (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_mb_hv_pos_mask                    (0x03FF0000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_mb_hv_neg_mask                    (0x000003FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_mb_hv_pos(data)                   (0x03FF0000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_mb_hv_neg(data)                   (0x000003FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_get_mb_hv_pos(data)               ((0x03FF0000&(data))>>16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_BOUND_get_mb_hv_neg(data)               (0x000003FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2                                 0x18023C18
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_reg_addr                         "0xB8023C18"
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_reg                              0xB8023C18
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_inst_addr                        "0x0005"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_reg(data)                    (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_reg                          (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_lv_shift                      (24)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_lv2_shift                     (16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_gain_pos2_shift               (12)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_gain_neg2_shift               (8)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_d2_shift_bit_shift            (4)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_lv_mask                       (0xFF000000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_lv2_mask                      (0x00FF0000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_gain_pos2_mask                (0x00003000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_gain_neg2_mask                (0x00000300)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_d2_shift_bit_mask             (0x00000030)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_lv(data)                      (0xFF000000&((data)<<24))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_lv2(data)                     (0x00FF0000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_gain_pos2(data)               (0x00003000&((data)<<12))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_gain_neg2(data)               (0x00000300&((data)<<8))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_mb_d2_shift_bit(data)            (0x00000030&((data)<<4))
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_get_mb_lv(data)                  ((0xFF000000&(data))>>24)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_get_mb_lv2(data)                 ((0x00FF0000&(data))>>16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_get_mb_gain_pos2(data)           ((0x00003000&(data))>>12)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_get_mb_gain_neg2(data)           ((0x00000300&(data))>>8)
#define  COLOR_MB_PEAKING_MB_PEAKING_Hor_GAIN_2_get_mb_d2_shift_bit(data)        ((0x00000030&(data))>>4)

#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER                                 0x18023C1C
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_reg_addr                         "0xB8023C1C"
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_reg                              0xB8023C1C
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_inst_addr                        "0x0006"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_reg(data)                    (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_reg                          (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_mb_ver_filter_c0_shift           (23)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_mb_ver_filter_c1_shift           (8)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_mb_ver_filter_c2_shift           (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_mb_ver_filter_c0_mask            (0xFF800000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_mb_ver_filter_c1_mask            (0x0001FF00)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_mb_ver_filter_c2_mask            (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_mb_ver_filter_c0(data)           (0xFF800000&((data)<<23))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_mb_ver_filter_c1(data)           (0x0001FF00&((data)<<8))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_mb_ver_filter_c2(data)           (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_get_mb_ver_filter_c0(data)       ((0xFF800000&(data))>>23)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_get_mb_ver_filter_c1(data)       ((0x0001FF00&(data))>>8)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_FILTER_get_mb_ver_filter_c2(data)       (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN                                   0x18023C20
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_reg_addr                           "0xB8023C20"
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_reg                                0xB8023C20
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_inst_addr                          "0x0007"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_reg(data)                      (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_reg                            (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_mb_gain_pos_v_shift                (8)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_mb_gain_neg_v_shift                (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_mb_gain_pos_v_mask                 (0x0000FF00)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_mb_gain_neg_v_mask                 (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_mb_gain_pos_v(data)                (0x0000FF00&((data)<<8))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_mb_gain_neg_v(data)                (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_get_mb_gain_pos_v(data)            ((0x0000FF00&(data))>>8)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_get_mb_gain_neg_v(data)            (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND                                  0x18023C24
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_reg_addr                          "0xB8023C24"
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_reg                               0xB8023C24
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_inst_addr                         "0x0008"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_reg(data)                     (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_reg                           (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_mb_hv_pos_v_shift                 (16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_mb_hv_neg_v_shift                 (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_mb_hv_pos_v_mask                  (0x03FF0000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_mb_hv_neg_v_mask                  (0x000003FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_mb_hv_pos_v(data)                 (0x03FF0000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_mb_hv_neg_v(data)                 (0x000003FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_get_mb_hv_pos_v(data)             ((0x03FF0000&(data))>>16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_BOUND_get_mb_hv_neg_v(data)             (0x000003FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2                                 0x18023C28
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_reg_addr                         "0xB8023C28"
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_reg                              0xB8023C28
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_inst_addr                        "0x0009"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_reg(data)                    (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_reg                          (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_lv_v_shift                    (24)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_lv2_v_shift                   (16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_gain_pos2_v_shift             (12)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_gain_neg2_v_shift             (8)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_d2_shift_bit_v_shift          (4)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_lv_v_mask                     (0xFF000000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_lv2_v_mask                    (0x00FF0000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_gain_pos2_v_mask              (0x00003000)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_gain_neg2_v_mask              (0x00000300)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_d2_shift_bit_v_mask           (0x00000030)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_lv_v(data)                    (0xFF000000&((data)<<24))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_lv2_v(data)                   (0x00FF0000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_gain_pos2_v(data)             (0x00003000&((data)<<12))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_gain_neg2_v(data)             (0x00000300&((data)<<8))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_mb_d2_shift_bit_v(data)          (0x00000030&((data)<<4))
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_get_mb_lv_v(data)                ((0xFF000000&(data))>>24)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_get_mb_lv2_v(data)               ((0x00FF0000&(data))>>16)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_get_mb_gain_pos2_v(data)         ((0x00003000&(data))>>12)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_get_mb_gain_neg2_v(data)         ((0x00000300&(data))>>8)
#define  COLOR_MB_PEAKING_MB_PEAKING_Ver_GAIN_2_get_mb_d2_shift_bit_v(data)      ((0x00000030&(data))>>4)

#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL                                 0x18023C30
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_reg_addr                         "0xB8023C30"
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_reg                              0xB8023C30
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_inst_addr                        "0x000A"
#define  set_COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_reg(data)                    (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_reg                          (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_reg))
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_mb_db_en_shift                   (2)
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_mb_db_read_sel_shift             (1)
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_mb_db_apply_shift                (0)
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_mb_db_en_mask                    (0x00000004)
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_mb_db_read_sel_mask              (0x00000002)
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_mb_db_apply_mask                 (0x00000001)
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_mb_db_en(data)                   (0x00000004&((data)<<2))
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_mb_db_read_sel(data)             (0x00000002&((data)<<1))
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_mb_db_apply(data)                (0x00000001&(data))
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_get_mb_db_en(data)               ((0x00000004&(data))>>2)
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_get_mb_db_read_sel(data)         ((0x00000002&(data))>>1)
#define  COLOR_MB_PEAKING_MB_Double_Buffer_CTRL_get_mb_db_apply(data)            (0x00000001&(data))

#define  COLOR_MB_PEAKING_MB_dummy                                              0x18023C34
#define  COLOR_MB_PEAKING_MB_dummy_reg_addr                                      "0xB8023C34"
#define  COLOR_MB_PEAKING_MB_dummy_reg                                           0xB8023C34
#define  COLOR_MB_PEAKING_MB_dummy_inst_addr                                     "0x000B"
#define  set_COLOR_MB_PEAKING_MB_dummy_reg(data)                                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_dummy_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_dummy_reg                                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_dummy_reg))
#define  COLOR_MB_PEAKING_MB_dummy_dummy_7_0_shift                               (0)
#define  COLOR_MB_PEAKING_MB_dummy_dummy_7_0_mask                                (0x000000FF)
#define  COLOR_MB_PEAKING_MB_dummy_dummy_7_0(data)                               (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_dummy_get_dummy_7_0(data)                           (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN                             0x18023C38
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_reg_addr                     "0xB8023C38"
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_reg                          0xB8023C38
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_inst_addr                    "0x000C"
#define  set_COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_reg(data)                (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_reg                      (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_reg))
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_mb_de_over_h_b_range_shift   (16)
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_mb_de_over_h_s_range_shift   (0)
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_mb_de_over_h_b_range_mask    (0x00030000)
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_mb_de_over_h_s_range_mask    (0x00000003)
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_mb_de_over_h_b_range(data)   (0x00030000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_mb_de_over_h_s_range(data)   (0x00000003&(data))
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_get_mb_de_over_h_b_range(data) ((0x00030000&(data))>>16)
#define  COLOR_MB_PEAKING_MB_De_Over_Hor_RANGE_GAIN_get_mb_de_over_h_s_range(data) (0x00000003&(data))

#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN                             0x18023C3C
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_reg_addr                     "0xB8023C3C"
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_reg                          0xB8023C3C
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_inst_addr                    "0x000D"
#define  set_COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_reg(data)                (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_reg                      (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_reg))
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_mb_de_over_v_b_range_shift   (16)
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_mb_de_over_v_s_range_shift   (0)
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_mb_de_over_v_b_range_mask    (0x00030000)
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_mb_de_over_v_s_range_mask    (0x00000003)
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_mb_de_over_v_b_range(data)   (0x00030000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_mb_de_over_v_s_range(data)   (0x00000003&(data))
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_get_mb_de_over_v_b_range(data) ((0x00030000&(data))>>16)
#define  COLOR_MB_PEAKING_MB_De_Over_Ver_RANGE_GAIN_get_mb_de_over_v_s_range(data) (0x00000003&(data))

#define  COLOR_MB_PEAKING_MB_SNR_CORING                                         0x18023C40
#define  COLOR_MB_PEAKING_MB_SNR_CORING_reg_addr                                 "0xB8023C40"
#define  COLOR_MB_PEAKING_MB_SNR_CORING_reg                                      0xB8023C40
#define  COLOR_MB_PEAKING_MB_SNR_CORING_inst_addr                                "0x000E"
#define  set_COLOR_MB_PEAKING_MB_SNR_CORING_reg(data)                            (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_SNR_CORING_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_SNR_CORING_reg                                  (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_SNR_CORING_reg))
#define  COLOR_MB_PEAKING_MB_SNR_CORING_mb_mos_coring_shift                      (16)
#define  COLOR_MB_PEAKING_MB_SNR_CORING_mb_wei_coring0_shift                     (0)
#define  COLOR_MB_PEAKING_MB_SNR_CORING_mb_mos_coring_mask                       (0x003F0000)
#define  COLOR_MB_PEAKING_MB_SNR_CORING_mb_wei_coring0_mask                      (0x0000003F)
#define  COLOR_MB_PEAKING_MB_SNR_CORING_mb_mos_coring(data)                      (0x003F0000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_SNR_CORING_mb_wei_coring0(data)                     (0x0000003F&(data))
#define  COLOR_MB_PEAKING_MB_SNR_CORING_get_mb_mos_coring(data)                  ((0x003F0000&(data))>>16)
#define  COLOR_MB_PEAKING_MB_SNR_CORING_get_mb_wei_coring0(data)                 (0x0000003F&(data))

#define  COLOR_MB_PEAKING_MB_WEI_CORING1                                        0x18023C44
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_reg_addr                                "0xB8023C44"
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_reg                                     0xB8023C44
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_inst_addr                               "0x000F"
#define  set_COLOR_MB_PEAKING_MB_WEI_CORING1_reg(data)                           (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_WEI_CORING1_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_WEI_CORING1_reg                                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_WEI_CORING1_reg))
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring1_shift                    (24)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring2_shift                    (16)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring3_shift                    (8)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring4_shift                    (0)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring1_mask                     (0x3F000000)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring2_mask                     (0x003F0000)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring3_mask                     (0x00003F00)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring4_mask                     (0x0000003F)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring1(data)                    (0x3F000000&((data)<<24))
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring2(data)                    (0x003F0000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring3(data)                    (0x00003F00&((data)<<8))
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_mb_wei_coring4(data)                    (0x0000003F&(data))
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_get_mb_wei_coring1(data)                ((0x3F000000&(data))>>24)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_get_mb_wei_coring2(data)                ((0x003F0000&(data))>>16)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_get_mb_wei_coring3(data)                ((0x00003F00&(data))>>8)
#define  COLOR_MB_PEAKING_MB_WEI_CORING1_get_mb_wei_coring4(data)                (0x0000003F&(data))

#define  COLOR_MB_PEAKING_MB_WEI_CORING2                                        0x18023C48
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_reg_addr                                "0xB8023C48"
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_reg                                     0xB8023C48
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_inst_addr                               "0x0010"
#define  set_COLOR_MB_PEAKING_MB_WEI_CORING2_reg(data)                           (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_WEI_CORING2_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_WEI_CORING2_reg                                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_WEI_CORING2_reg))
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring5_shift                    (24)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring6_shift                    (16)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring7_shift                    (8)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring8_shift                    (0)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring5_mask                     (0x3F000000)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring6_mask                     (0x003F0000)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring7_mask                     (0x00003F00)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring8_mask                     (0x0000003F)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring5(data)                    (0x3F000000&((data)<<24))
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring6(data)                    (0x003F0000&((data)<<16))
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring7(data)                    (0x00003F00&((data)<<8))
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_mb_wei_coring8(data)                    (0x0000003F&(data))
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_get_mb_wei_coring5(data)                ((0x3F000000&(data))>>24)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_get_mb_wei_coring6(data)                ((0x003F0000&(data))>>16)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_get_mb_wei_coring7(data)                ((0x00003F00&(data))>>8)
#define  COLOR_MB_PEAKING_MB_WEI_CORING2_get_mb_wei_coring8(data)                (0x0000003F&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0                              0x18023C4C
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_reg_addr                      "0xB8023C4C"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_reg                           0xB8023C4C
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_inst_addr                     "0x0011"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_mb_de_over_h_s_x0_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_mb_de_over_h_s_y0_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_mb_de_over_h_s_a0_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_mb_de_over_h_s_x0_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_mb_de_over_h_s_y0_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_mb_de_over_h_s_a0_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_mb_de_over_h_s_x0(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_mb_de_over_h_s_y0(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_mb_de_over_h_s_a0(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_get_mb_de_over_h_s_x0(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_get_mb_de_over_h_s_y0(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_0_get_mb_de_over_h_s_a0(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1                              0x18023C50
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_reg_addr                      "0xB8023C50"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_reg                           0xB8023C50
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_inst_addr                     "0x0012"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_mb_de_over_h_s_x1_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_mb_de_over_h_s_y1_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_mb_de_over_h_s_a1_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_mb_de_over_h_s_x1_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_mb_de_over_h_s_y1_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_mb_de_over_h_s_a1_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_mb_de_over_h_s_x1(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_mb_de_over_h_s_y1(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_mb_de_over_h_s_a1(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_get_mb_de_over_h_s_x1(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_get_mb_de_over_h_s_y1(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_1_get_mb_de_over_h_s_a1(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2                              0x18023C54
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_reg_addr                      "0xB8023C54"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_reg                           0xB8023C54
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_inst_addr                     "0x0013"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_mb_de_over_h_s_x2_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_mb_de_over_h_s_y2_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_mb_de_over_h_s_a2_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_mb_de_over_h_s_x2_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_mb_de_over_h_s_y2_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_mb_de_over_h_s_a2_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_mb_de_over_h_s_x2(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_mb_de_over_h_s_y2(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_mb_de_over_h_s_a2(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_get_mb_de_over_h_s_x2(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_get_mb_de_over_h_s_y2(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_S_2_get_mb_de_over_h_s_a2(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0                              0x18023C58
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_reg_addr                      "0xB8023C58"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_reg                           0xB8023C58
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_inst_addr                     "0x0014"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_mb_de_over_h_b_x0_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_mb_de_over_h_b_y0_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_mb_de_over_h_b_a0_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_mb_de_over_h_b_x0_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_mb_de_over_h_b_y0_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_mb_de_over_h_b_a0_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_mb_de_over_h_b_x0(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_mb_de_over_h_b_y0(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_mb_de_over_h_b_a0(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_get_mb_de_over_h_b_x0(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_get_mb_de_over_h_b_y0(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_0_get_mb_de_over_h_b_a0(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1                              0x18023C5C
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_reg_addr                      "0xB8023C5C"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_reg                           0xB8023C5C
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_inst_addr                     "0x0015"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_mb_de_over_h_b_x1_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_mb_de_over_h_b_y1_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_mb_de_over_h_b_a1_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_mb_de_over_h_b_x1_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_mb_de_over_h_b_y1_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_mb_de_over_h_b_a1_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_mb_de_over_h_b_x1(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_mb_de_over_h_b_y1(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_mb_de_over_h_b_a1(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_get_mb_de_over_h_b_x1(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_get_mb_de_over_h_b_y1(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_1_get_mb_de_over_h_b_a1(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2                              0x18023C60
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_reg_addr                      "0xB8023C60"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_reg                           0xB8023C60
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_inst_addr                     "0x0016"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_mb_de_over_h_b_x2_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_mb_de_over_h_b_y2_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_mb_de_over_h_b_a2_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_mb_de_over_h_b_x2_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_mb_de_over_h_b_y2_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_mb_de_over_h_b_a2_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_mb_de_over_h_b_x2(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_mb_de_over_h_b_y2(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_mb_de_over_h_b_a2(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_get_mb_de_over_h_b_x2(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_get_mb_de_over_h_b_y2(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_H_B_2_get_mb_de_over_h_b_a2(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0                              0x18023C64
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_reg_addr                      "0xB8023C64"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_reg                           0xB8023C64
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_inst_addr                     "0x0017"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_mb_de_over_v_s_x0_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_mb_de_over_v_s_y0_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_mb_de_over_v_s_a0_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_mb_de_over_v_s_x0_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_mb_de_over_v_s_y0_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_mb_de_over_v_s_a0_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_mb_de_over_v_s_x0(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_mb_de_over_v_s_y0(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_mb_de_over_v_s_a0(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_get_mb_de_over_v_s_x0(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_get_mb_de_over_v_s_y0(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_0_get_mb_de_over_v_s_a0(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1                              0x18023C68
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_reg_addr                      "0xB8023C68"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_reg                           0xB8023C68
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_inst_addr                     "0x0018"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_mb_de_over_v_s_x1_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_mb_de_over_v_s_y1_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_mb_de_over_v_s_a1_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_mb_de_over_v_s_x1_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_mb_de_over_v_s_y1_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_mb_de_over_v_s_a1_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_mb_de_over_v_s_x1(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_mb_de_over_v_s_y1(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_mb_de_over_v_s_a1(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_get_mb_de_over_v_s_x1(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_get_mb_de_over_v_s_y1(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_1_get_mb_de_over_v_s_a1(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2                              0x18023C6C
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_reg_addr                      "0xB8023C6C"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_reg                           0xB8023C6C
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_inst_addr                     "0x0019"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_mb_de_over_v_s_x2_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_mb_de_over_v_s_y2_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_mb_de_over_v_s_a2_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_mb_de_over_v_s_x2_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_mb_de_over_v_s_y2_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_mb_de_over_v_s_a2_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_mb_de_over_v_s_x2(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_mb_de_over_v_s_y2(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_mb_de_over_v_s_a2(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_get_mb_de_over_v_s_x2(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_get_mb_de_over_v_s_y2(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_S_2_get_mb_de_over_v_s_a2(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0                              0x18023C70
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_reg_addr                      "0xB8023C70"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_reg                           0xB8023C70
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_inst_addr                     "0x001A"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_mb_de_over_v_b_x0_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_mb_de_over_v_b_y0_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_mb_de_over_v_b_a0_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_mb_de_over_v_b_x0_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_mb_de_over_v_b_y0_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_mb_de_over_v_b_a0_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_mb_de_over_v_b_x0(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_mb_de_over_v_b_y0(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_mb_de_over_v_b_a0(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_get_mb_de_over_v_b_x0(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_get_mb_de_over_v_b_y0(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_0_get_mb_de_over_v_b_a0(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1                              0x18023C74
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_reg_addr                      "0xB8023C74"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_reg                           0xB8023C74
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_inst_addr                     "0x001B"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_mb_de_over_v_b_x1_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_mb_de_over_v_b_y1_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_mb_de_over_v_b_a1_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_mb_de_over_v_b_x1_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_mb_de_over_v_b_y1_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_mb_de_over_v_b_a1_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_mb_de_over_v_b_x1(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_mb_de_over_v_b_y1(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_mb_de_over_v_b_a1(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_get_mb_de_over_v_b_x1(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_get_mb_de_over_v_b_y1(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_1_get_mb_de_over_v_b_a1(data)   (0x000000FF&(data))

#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2                              0x18023C78
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_reg_addr                      "0xB8023C78"
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_reg                           0xB8023C78
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_inst_addr                     "0x001C"
#define  set_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_reg(data)                 (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_reg)=data)
#define  get_COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_reg                       (*((volatile unsigned int*)COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_reg))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_mb_de_over_v_b_x2_shift       (20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_mb_de_over_v_b_y2_shift       (10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_mb_de_over_v_b_a2_shift       (0)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_mb_de_over_v_b_x2_mask        (0x3FF00000)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_mb_de_over_v_b_y2_mask        (0x000FFC00)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_mb_de_over_v_b_a2_mask        (0x000000FF)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_mb_de_over_v_b_x2(data)       (0x3FF00000&((data)<<20))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_mb_de_over_v_b_y2(data)       (0x000FFC00&((data)<<10))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_mb_de_over_v_b_a2(data)       (0x000000FF&(data))
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_get_mb_de_over_v_b_x2(data)   ((0x3FF00000&(data))>>20)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_get_mb_de_over_v_b_y2(data)   ((0x000FFC00&(data))>>10)
#define  COLOR_MB_PEAKING_MB_PEAKING_De_Over_V_B_2_get_mb_de_over_v_b_a2(data)   (0x000000FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======COLOR_MB_PEAKING register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  mb_de_over_hvmin_en:2;
        RBus_UInt32  mb_de_over_bsmaxmin:1;
        RBus_UInt32  mb_de_over_h_en:1;
        RBus_UInt32  mb_de_over_v_en:1;
        RBus_UInt32  mb_snr_flag_en:1;
        RBus_UInt32  mb_debug_mode:2;
        RBus_UInt32  mb_v_en:1;
        RBus_UInt32  mb_h_en:1;
        RBus_UInt32  mb_ver_vfilter_data:1;
        RBus_UInt32  mb_peaking_en:1;
    };
}color_mb_peaking_mb_peaking_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  mb_hor_filter_c0:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  mb_hor_filter_c1:9;
    };
}color_mb_peaking_mb_peaking_hor_filter_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_hor_filter_c2:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  mb_hor_filter_c3:7;
        RBus_UInt32  res2:16;
    };
}color_mb_peaking_mb_peaking_hor_filter_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}color_mb_peaking_mb_peaking_hor_filter_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  mb_gain_pos:8;
        RBus_UInt32  mb_gain_neg:8;
    };
}color_mb_peaking_mb_peaking_hor_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  mb_hv_pos:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  mb_hv_neg:10;
    };
}color_mb_peaking_mb_peaking_hor_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_lv:8;
        RBus_UInt32  mb_lv2:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_gain_pos2:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_gain_neg2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  mb_d2_shift_bit:2;
        RBus_UInt32  res4:4;
    };
}color_mb_peaking_mb_peaking_hor_gain_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_ver_filter_c0:9;
        RBus_UInt32  res1:6;
        RBus_UInt32  mb_ver_filter_c1:9;
        RBus_UInt32  mb_ver_filter_c2:8;
    };
}color_mb_peaking_mb_peaking_ver_filter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  mb_gain_pos_v:8;
        RBus_UInt32  mb_gain_neg_v:8;
    };
}color_mb_peaking_mb_peaking_ver_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  mb_hv_pos_v:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  mb_hv_neg_v:10;
    };
}color_mb_peaking_mb_peaking_ver_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_lv_v:8;
        RBus_UInt32  mb_lv2_v:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_gain_pos2_v:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_gain_neg2_v:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  mb_d2_shift_bit_v:2;
        RBus_UInt32  res4:4;
    };
}color_mb_peaking_mb_peaking_ver_gain_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  mb_db_en:1;
        RBus_UInt32  mb_db_read_sel:1;
        RBus_UInt32  mb_db_apply:1;
    };
}color_mb_peaking_mb_double_buffer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dummy18023c34_7_0:8;
    };
}color_mb_peaking_mb_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  mb_de_over_h_b_range:2;
        RBus_UInt32  res2:14;
        RBus_UInt32  mb_de_over_h_s_range:2;
    };
}color_mb_peaking_mb_de_over_hor_range_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  mb_de_over_v_b_range:2;
        RBus_UInt32  res2:14;
        RBus_UInt32  mb_de_over_v_s_range:2;
    };
}color_mb_peaking_mb_de_over_ver_range_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  mb_mos_coring:6;
        RBus_UInt32  res2:10;
        RBus_UInt32  mb_wei_coring0:6;
    };
}color_mb_peaking_mb_snr_coring_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_wei_coring1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_wei_coring2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  mb_wei_coring3:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  mb_wei_coring4:6;
    };
}color_mb_peaking_mb_wei_coring1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_wei_coring5:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_wei_coring6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  mb_wei_coring7:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  mb_wei_coring8:6;
    };
}color_mb_peaking_mb_wei_coring2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_s_x0:10;
        RBus_UInt32  mb_de_over_h_s_y0:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_h_s_a0:8;
    };
}color_mb_peaking_mb_peaking_de_over_h_s_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_s_x1:10;
        RBus_UInt32  mb_de_over_h_s_y1:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_h_s_a1:8;
    };
}color_mb_peaking_mb_peaking_de_over_h_s_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_s_x2:10;
        RBus_UInt32  mb_de_over_h_s_y2:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_h_s_a2:8;
    };
}color_mb_peaking_mb_peaking_de_over_h_s_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_b_x0:10;
        RBus_UInt32  mb_de_over_h_b_y0:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_h_b_a0:8;
    };
}color_mb_peaking_mb_peaking_de_over_h_b_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_b_x1:10;
        RBus_UInt32  mb_de_over_h_b_y1:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_h_b_a1:8;
    };
}color_mb_peaking_mb_peaking_de_over_h_b_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_b_x2:10;
        RBus_UInt32  mb_de_over_h_b_y2:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_h_b_a2:8;
    };
}color_mb_peaking_mb_peaking_de_over_h_b_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_s_x0:10;
        RBus_UInt32  mb_de_over_v_s_y0:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_v_s_a0:8;
    };
}color_mb_peaking_mb_peaking_de_over_v_s_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_s_x1:10;
        RBus_UInt32  mb_de_over_v_s_y1:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_v_s_a1:8;
    };
}color_mb_peaking_mb_peaking_de_over_v_s_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_s_x2:10;
        RBus_UInt32  mb_de_over_v_s_y2:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_v_s_a2:8;
    };
}color_mb_peaking_mb_peaking_de_over_v_s_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_b_x0:10;
        RBus_UInt32  mb_de_over_v_b_y0:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_v_b_a0:8;
    };
}color_mb_peaking_mb_peaking_de_over_v_b_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_b_x1:10;
        RBus_UInt32  mb_de_over_v_b_y1:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_v_b_a1:8;
    };
}color_mb_peaking_mb_peaking_de_over_v_b_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_b_x2:10;
        RBus_UInt32  mb_de_over_v_b_y2:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_de_over_v_b_a2:8;
    };
}color_mb_peaking_mb_peaking_de_over_v_b_2_RBUS;

#else //apply LITTLE_ENDIAN

//======COLOR_MB_PEAKING register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_peaking_en:1;
        RBus_UInt32  mb_ver_vfilter_data:1;
        RBus_UInt32  mb_h_en:1;
        RBus_UInt32  mb_v_en:1;
        RBus_UInt32  mb_debug_mode:2;
        RBus_UInt32  mb_snr_flag_en:1;
        RBus_UInt32  mb_de_over_v_en:1;
        RBus_UInt32  mb_de_over_h_en:1;
        RBus_UInt32  mb_de_over_bsmaxmin:1;
        RBus_UInt32  mb_de_over_hvmin_en:2;
        RBus_UInt32  res1:20;
    };
}color_mb_peaking_mb_peaking_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_hor_filter_c1:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  mb_hor_filter_c0:9;
        RBus_UInt32  res2:7;
    };
}color_mb_peaking_mb_peaking_hor_filter_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  mb_hor_filter_c3:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  mb_hor_filter_c2:8;
    };
}color_mb_peaking_mb_peaking_hor_filter_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}color_mb_peaking_mb_peaking_hor_filter_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_gain_neg:8;
        RBus_UInt32  mb_gain_pos:8;
        RBus_UInt32  res1:16;
    };
}color_mb_peaking_mb_peaking_hor_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_hv_neg:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  mb_hv_pos:10;
        RBus_UInt32  res2:6;
    };
}color_mb_peaking_mb_peaking_hor_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mb_d2_shift_bit:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_gain_neg2:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  mb_gain_pos2:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  mb_lv2:8;
        RBus_UInt32  mb_lv:8;
    };
}color_mb_peaking_mb_peaking_hor_gain_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_ver_filter_c2:8;
        RBus_UInt32  mb_ver_filter_c1:9;
        RBus_UInt32  res1:6;
        RBus_UInt32  mb_ver_filter_c0:9;
    };
}color_mb_peaking_mb_peaking_ver_filter_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_gain_neg_v:8;
        RBus_UInt32  mb_gain_pos_v:8;
        RBus_UInt32  res1:16;
    };
}color_mb_peaking_mb_peaking_ver_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_hv_neg_v:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  mb_hv_pos_v:10;
        RBus_UInt32  res2:6;
    };
}color_mb_peaking_mb_peaking_ver_bound_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  mb_d2_shift_bit_v:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_gain_neg2_v:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  mb_gain_pos2_v:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  mb_lv2_v:8;
        RBus_UInt32  mb_lv_v:8;
    };
}color_mb_peaking_mb_peaking_ver_gain_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_db_apply:1;
        RBus_UInt32  mb_db_read_sel:1;
        RBus_UInt32  mb_db_en:1;
        RBus_UInt32  res1:29;
    };
}color_mb_peaking_mb_double_buffer_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18023c34_7_0:8;
        RBus_UInt32  res1:24;
    };
}color_mb_peaking_mb_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_h_s_range:2;
        RBus_UInt32  res1:14;
        RBus_UInt32  mb_de_over_h_b_range:2;
        RBus_UInt32  res2:14;
    };
}color_mb_peaking_mb_de_over_hor_range_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_v_s_range:2;
        RBus_UInt32  res1:14;
        RBus_UInt32  mb_de_over_v_b_range:2;
        RBus_UInt32  res2:14;
    };
}color_mb_peaking_mb_de_over_ver_range_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_wei_coring0:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  mb_mos_coring:6;
        RBus_UInt32  res2:10;
    };
}color_mb_peaking_mb_snr_coring_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_wei_coring4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_wei_coring3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_wei_coring2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  mb_wei_coring1:6;
        RBus_UInt32  res4:2;
    };
}color_mb_peaking_mb_wei_coring1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_wei_coring8:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_wei_coring7:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  mb_wei_coring6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  mb_wei_coring5:6;
        RBus_UInt32  res4:2;
    };
}color_mb_peaking_mb_wei_coring2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_h_s_a0:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_s_y0:10;
        RBus_UInt32  mb_de_over_h_s_x0:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_h_s_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_h_s_a1:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_s_y1:10;
        RBus_UInt32  mb_de_over_h_s_x1:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_h_s_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_h_s_a2:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_s_y2:10;
        RBus_UInt32  mb_de_over_h_s_x2:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_h_s_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_h_b_a0:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_b_y0:10;
        RBus_UInt32  mb_de_over_h_b_x0:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_h_b_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_h_b_a1:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_b_y1:10;
        RBus_UInt32  mb_de_over_h_b_x1:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_h_b_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_h_b_a2:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_h_b_y2:10;
        RBus_UInt32  mb_de_over_h_b_x2:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_h_b_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_v_s_a0:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_s_y0:10;
        RBus_UInt32  mb_de_over_v_s_x0:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_v_s_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_v_s_a1:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_s_y1:10;
        RBus_UInt32  mb_de_over_v_s_x1:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_v_s_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_v_s_a2:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_s_y2:10;
        RBus_UInt32  mb_de_over_v_s_x2:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_v_s_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_v_b_a0:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_b_y0:10;
        RBus_UInt32  mb_de_over_v_b_x0:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_v_b_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_v_b_a1:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_b_y1:10;
        RBus_UInt32  mb_de_over_v_b_x1:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_v_b_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_de_over_v_b_a2:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  mb_de_over_v_b_y2:10;
        RBus_UInt32  mb_de_over_v_b_x2:10;
        RBus_UInt32  res2:2;
    };
}color_mb_peaking_mb_peaking_de_over_v_b_2_RBUS;




#endif 


#endif 
