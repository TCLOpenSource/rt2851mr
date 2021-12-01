/**
* @file Merlin5-DesignSpec-earc_tx
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_EARC_REG_H_
#define _RBUS_EARC_REG_H_

#include "rbus_types.h"



//  EARC Register Address
#define  EARC_earc_tx_dmac_ctrl                                                 0x18006D00
#define  EARC_earc_tx_dmac_ctrl_reg_addr                                         "0xB8006D00"
#define  EARC_earc_tx_dmac_ctrl_reg                                              0xB8006D00
#define  EARC_earc_tx_dmac_ctrl_inst_addr                                        "0x0000"
#define  set_EARC_earc_tx_dmac_ctrl_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_ctrl_reg)=data)
#define  get_EARC_earc_tx_dmac_ctrl_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_ctrl_reg))
#define  EARC_earc_tx_dmac_ctrl_non_pcm_ecc_sel_shift                            (10)
#define  EARC_earc_tx_dmac_ctrl_crc_result_mode_shift                            (9)
#define  EARC_earc_tx_dmac_ctrl_nonpcm_layout_sel_shift                          (8)
#define  EARC_earc_tx_dmac_ctrl_c_bit_ready_flag_shift                           (7)
#define  EARC_earc_tx_dmac_ctrl_u_bit_ready_flag_shift                           (6)
#define  EARC_earc_tx_dmac_ctrl_valid_flag_shift                                 (5)
#define  EARC_earc_tx_dmac_ctrl_df_output_sel_shift                              (4)
#define  EARC_earc_tx_dmac_ctrl_channel_num_shift                                (2)
#define  EARC_earc_tx_dmac_ctrl_data_type_shift                                  (1)
#define  EARC_earc_tx_dmac_ctrl_earc_tx_df_en_shift                              (0)
#define  EARC_earc_tx_dmac_ctrl_non_pcm_ecc_sel_mask                             (0x00000400)
#define  EARC_earc_tx_dmac_ctrl_crc_result_mode_mask                             (0x00000200)
#define  EARC_earc_tx_dmac_ctrl_nonpcm_layout_sel_mask                           (0x00000100)
#define  EARC_earc_tx_dmac_ctrl_c_bit_ready_flag_mask                            (0x00000080)
#define  EARC_earc_tx_dmac_ctrl_u_bit_ready_flag_mask                            (0x00000040)
#define  EARC_earc_tx_dmac_ctrl_valid_flag_mask                                  (0x00000020)
#define  EARC_earc_tx_dmac_ctrl_df_output_sel_mask                               (0x00000010)
#define  EARC_earc_tx_dmac_ctrl_channel_num_mask                                 (0x0000000C)
#define  EARC_earc_tx_dmac_ctrl_data_type_mask                                   (0x00000002)
#define  EARC_earc_tx_dmac_ctrl_earc_tx_df_en_mask                               (0x00000001)
#define  EARC_earc_tx_dmac_ctrl_non_pcm_ecc_sel(data)                            (0x00000400&((data)<<10))
#define  EARC_earc_tx_dmac_ctrl_crc_result_mode(data)                            (0x00000200&((data)<<9))
#define  EARC_earc_tx_dmac_ctrl_nonpcm_layout_sel(data)                          (0x00000100&((data)<<8))
#define  EARC_earc_tx_dmac_ctrl_c_bit_ready_flag(data)                           (0x00000080&((data)<<7))
#define  EARC_earc_tx_dmac_ctrl_u_bit_ready_flag(data)                           (0x00000040&((data)<<6))
#define  EARC_earc_tx_dmac_ctrl_valid_flag(data)                                 (0x00000020&((data)<<5))
#define  EARC_earc_tx_dmac_ctrl_df_output_sel(data)                              (0x00000010&((data)<<4))
#define  EARC_earc_tx_dmac_ctrl_channel_num(data)                                (0x0000000C&((data)<<2))
#define  EARC_earc_tx_dmac_ctrl_data_type(data)                                  (0x00000002&((data)<<1))
#define  EARC_earc_tx_dmac_ctrl_earc_tx_df_en(data)                              (0x00000001&(data))
#define  EARC_earc_tx_dmac_ctrl_get_non_pcm_ecc_sel(data)                        ((0x00000400&(data))>>10)
#define  EARC_earc_tx_dmac_ctrl_get_crc_result_mode(data)                        ((0x00000200&(data))>>9)
#define  EARC_earc_tx_dmac_ctrl_get_nonpcm_layout_sel(data)                      ((0x00000100&(data))>>8)
#define  EARC_earc_tx_dmac_ctrl_get_c_bit_ready_flag(data)                       ((0x00000080&(data))>>7)
#define  EARC_earc_tx_dmac_ctrl_get_u_bit_ready_flag(data)                       ((0x00000040&(data))>>6)
#define  EARC_earc_tx_dmac_ctrl_get_valid_flag(data)                             ((0x00000020&(data))>>5)
#define  EARC_earc_tx_dmac_ctrl_get_df_output_sel(data)                          ((0x00000010&(data))>>4)
#define  EARC_earc_tx_dmac_ctrl_get_channel_num(data)                            ((0x0000000C&(data))>>2)
#define  EARC_earc_tx_dmac_ctrl_get_data_type(data)                              ((0x00000002&(data))>>1)
#define  EARC_earc_tx_dmac_ctrl_get_earc_tx_df_en(data)                          (0x00000001&(data))

#define  EARC_earc_tx_dmac_ctrl_2                                               0x18006D04
#define  EARC_earc_tx_dmac_ctrl_2_reg_addr                                       "0xB8006D04"
#define  EARC_earc_tx_dmac_ctrl_2_reg                                            0xB8006D04
#define  EARC_earc_tx_dmac_ctrl_2_inst_addr                                      "0x0001"
#define  set_EARC_earc_tx_dmac_ctrl_2_reg(data)                                  (*((volatile unsigned int*)EARC_earc_tx_dmac_ctrl_2_reg)=data)
#define  get_EARC_earc_tx_dmac_ctrl_2_reg                                        (*((volatile unsigned int*)EARC_earc_tx_dmac_ctrl_2_reg))
#define  EARC_earc_tx_dmac_ctrl_2_df_src_sel_ch67_shift                          (28)
#define  EARC_earc_tx_dmac_ctrl_2_df_src_sel_ch45_shift                          (26)
#define  EARC_earc_tx_dmac_ctrl_2_df_src_sel_ch23_shift                          (24)
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch67_shift                            (22)
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch45_shift                            (20)
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch23_shift                            (18)
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch01_shift                            (16)
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch67_shift                     (12)
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch45_shift                     (8)
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch23_shift                     (4)
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch01_shift                     (0)
#define  EARC_earc_tx_dmac_ctrl_2_df_src_sel_ch67_mask                           (0x30000000)
#define  EARC_earc_tx_dmac_ctrl_2_df_src_sel_ch45_mask                           (0x0C000000)
#define  EARC_earc_tx_dmac_ctrl_2_df_src_sel_ch23_mask                           (0x03000000)
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch67_mask                             (0x00C00000)
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch45_mask                             (0x00300000)
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch23_mask                             (0x000C0000)
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch01_mask                             (0x00030000)
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch67_mask                      (0x0000F000)
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch45_mask                      (0x00000F00)
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch23_mask                      (0x000000F0)
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch01_mask                      (0x0000000F)
#define  EARC_earc_tx_dmac_ctrl_2_df_src_sel_ch67(data)                          (0x30000000&((data)<<28))
#define  EARC_earc_tx_dmac_ctrl_2_df_src_sel_ch45(data)                          (0x0C000000&((data)<<26))
#define  EARC_earc_tx_dmac_ctrl_2_df_src_sel_ch23(data)                          (0x03000000&((data)<<24))
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch67(data)                            (0x00C00000&((data)<<22))
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch45(data)                            (0x00300000&((data)<<20))
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch23(data)                            (0x000C0000&((data)<<18))
#define  EARC_earc_tx_dmac_ctrl_2_swap_sel_ch01(data)                            (0x00030000&((data)<<16))
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch67(data)                     (0x0000F000&((data)<<12))
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch45(data)                     (0x00000F00&((data)<<8))
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch23(data)                     (0x000000F0&((data)<<4))
#define  EARC_earc_tx_dmac_ctrl_2_data_source_sel_ch01(data)                     (0x0000000F&(data))
#define  EARC_earc_tx_dmac_ctrl_2_get_df_src_sel_ch67(data)                      ((0x30000000&(data))>>28)
#define  EARC_earc_tx_dmac_ctrl_2_get_df_src_sel_ch45(data)                      ((0x0C000000&(data))>>26)
#define  EARC_earc_tx_dmac_ctrl_2_get_df_src_sel_ch23(data)                      ((0x03000000&(data))>>24)
#define  EARC_earc_tx_dmac_ctrl_2_get_swap_sel_ch67(data)                        ((0x00C00000&(data))>>22)
#define  EARC_earc_tx_dmac_ctrl_2_get_swap_sel_ch45(data)                        ((0x00300000&(data))>>20)
#define  EARC_earc_tx_dmac_ctrl_2_get_swap_sel_ch23(data)                        ((0x000C0000&(data))>>18)
#define  EARC_earc_tx_dmac_ctrl_2_get_swap_sel_ch01(data)                        ((0x00030000&(data))>>16)
#define  EARC_earc_tx_dmac_ctrl_2_get_data_source_sel_ch67(data)                 ((0x0000F000&(data))>>12)
#define  EARC_earc_tx_dmac_ctrl_2_get_data_source_sel_ch45(data)                 ((0x00000F00&(data))>>8)
#define  EARC_earc_tx_dmac_ctrl_2_get_data_source_sel_ch23(data)                 ((0x000000F0&(data))>>4)
#define  EARC_earc_tx_dmac_ctrl_2_get_data_source_sel_ch01(data)                 (0x0000000F&(data))

#define  EARC_earc_tx_dmac_cs_1                                                 0x18006D08
#define  EARC_earc_tx_dmac_cs_1_reg_addr                                         "0xB8006D08"
#define  EARC_earc_tx_dmac_cs_1_reg                                              0xB8006D08
#define  EARC_earc_tx_dmac_cs_1_inst_addr                                        "0x0002"
#define  set_EARC_earc_tx_dmac_cs_1_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_1_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_1_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_1_reg))
#define  EARC_earc_tx_dmac_cs_1_cs_lb3_31_30_shift                               (30)
#define  EARC_earc_tx_dmac_cs_1_clock_accuracy_l_shift                           (28)
#define  EARC_earc_tx_dmac_cs_1_sampling_freq_l_shift                            (24)
#define  EARC_earc_tx_dmac_cs_1_channel_number_l_shift                           (20)
#define  EARC_earc_tx_dmac_cs_1_source_number_l_shift                            (16)
#define  EARC_earc_tx_dmac_cs_1_category_code_l_shift                            (8)
#define  EARC_earc_tx_dmac_cs_1_mode_l_shift                                     (6)
#define  EARC_earc_tx_dmac_cs_1_pre_emphasis_l_shift                             (3)
#define  EARC_earc_tx_dmac_cs_1_copyright_l_shift                                (2)
#define  EARC_earc_tx_dmac_cs_1_data_type_l_shift                                (1)
#define  EARC_earc_tx_dmac_cs_1_professional_shift                               (0)
#define  EARC_earc_tx_dmac_cs_1_cs_lb3_31_30_mask                                (0xC0000000)
#define  EARC_earc_tx_dmac_cs_1_clock_accuracy_l_mask                            (0x30000000)
#define  EARC_earc_tx_dmac_cs_1_sampling_freq_l_mask                             (0x0F000000)
#define  EARC_earc_tx_dmac_cs_1_channel_number_l_mask                            (0x00F00000)
#define  EARC_earc_tx_dmac_cs_1_source_number_l_mask                             (0x000F0000)
#define  EARC_earc_tx_dmac_cs_1_category_code_l_mask                             (0x0000FF00)
#define  EARC_earc_tx_dmac_cs_1_mode_l_mask                                      (0x000000C0)
#define  EARC_earc_tx_dmac_cs_1_pre_emphasis_l_mask                              (0x00000038)
#define  EARC_earc_tx_dmac_cs_1_copyright_l_mask                                 (0x00000004)
#define  EARC_earc_tx_dmac_cs_1_data_type_l_mask                                 (0x00000002)
#define  EARC_earc_tx_dmac_cs_1_professional_mask                                (0x00000001)
#define  EARC_earc_tx_dmac_cs_1_cs_lb3_31_30(data)                               (0xC0000000&((data)<<30))
#define  EARC_earc_tx_dmac_cs_1_clock_accuracy_l(data)                           (0x30000000&((data)<<28))
#define  EARC_earc_tx_dmac_cs_1_sampling_freq_l(data)                            (0x0F000000&((data)<<24))
#define  EARC_earc_tx_dmac_cs_1_channel_number_l(data)                           (0x00F00000&((data)<<20))
#define  EARC_earc_tx_dmac_cs_1_source_number_l(data)                            (0x000F0000&((data)<<16))
#define  EARC_earc_tx_dmac_cs_1_category_code_l(data)                            (0x0000FF00&((data)<<8))
#define  EARC_earc_tx_dmac_cs_1_mode_l(data)                                     (0x000000C0&((data)<<6))
#define  EARC_earc_tx_dmac_cs_1_pre_emphasis_l(data)                             (0x00000038&((data)<<3))
#define  EARC_earc_tx_dmac_cs_1_copyright_l(data)                                (0x00000004&((data)<<2))
#define  EARC_earc_tx_dmac_cs_1_data_type_l(data)                                (0x00000002&((data)<<1))
#define  EARC_earc_tx_dmac_cs_1_professional(data)                               (0x00000001&(data))
#define  EARC_earc_tx_dmac_cs_1_get_cs_lb3_31_30(data)                           ((0xC0000000&(data))>>30)
#define  EARC_earc_tx_dmac_cs_1_get_clock_accuracy_l(data)                       ((0x30000000&(data))>>28)
#define  EARC_earc_tx_dmac_cs_1_get_sampling_freq_l(data)                        ((0x0F000000&(data))>>24)
#define  EARC_earc_tx_dmac_cs_1_get_channel_number_l(data)                       ((0x00F00000&(data))>>20)
#define  EARC_earc_tx_dmac_cs_1_get_source_number_l(data)                        ((0x000F0000&(data))>>16)
#define  EARC_earc_tx_dmac_cs_1_get_category_code_l(data)                        ((0x0000FF00&(data))>>8)
#define  EARC_earc_tx_dmac_cs_1_get_mode_l(data)                                 ((0x000000C0&(data))>>6)
#define  EARC_earc_tx_dmac_cs_1_get_pre_emphasis_l(data)                         ((0x00000038&(data))>>3)
#define  EARC_earc_tx_dmac_cs_1_get_copyright_l(data)                            ((0x00000004&(data))>>2)
#define  EARC_earc_tx_dmac_cs_1_get_data_type_l(data)                            ((0x00000002&(data))>>1)
#define  EARC_earc_tx_dmac_cs_1_get_professional(data)                           (0x00000001&(data))

#define  EARC_earc_tx_dmac_cs_2                                                 0x18006D0C
#define  EARC_earc_tx_dmac_cs_2_reg_addr                                         "0xB8006D0C"
#define  EARC_earc_tx_dmac_cs_2_reg                                              0xB8006D0C
#define  EARC_earc_tx_dmac_cs_2_inst_addr                                        "0x0003"
#define  set_EARC_earc_tx_dmac_cs_2_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_2_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_2_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_2_reg))
#define  EARC_earc_tx_dmac_cs_2_layout_channel_num_l_shift                       (12)
#define  EARC_earc_tx_dmac_cs_2_cs_lb5_43_shift                                  (11)
#define  EARC_earc_tx_dmac_cs_2_cs_lb5_42_shift                                  (10)
#define  EARC_earc_tx_dmac_cs_2_cgms_a_l_shift                                   (8)
#define  EARC_earc_tx_dmac_cs_2_original_sampling_freq_l_shift                   (4)
#define  EARC_earc_tx_dmac_cs_2_cs_lb4_35_32_shift                               (0)
#define  EARC_earc_tx_dmac_cs_2_layout_channel_num_l_mask                        (0x0000F000)
#define  EARC_earc_tx_dmac_cs_2_cs_lb5_43_mask                                   (0x00000800)
#define  EARC_earc_tx_dmac_cs_2_cs_lb5_42_mask                                   (0x00000400)
#define  EARC_earc_tx_dmac_cs_2_cgms_a_l_mask                                    (0x00000300)
#define  EARC_earc_tx_dmac_cs_2_original_sampling_freq_l_mask                    (0x000000F0)
#define  EARC_earc_tx_dmac_cs_2_cs_lb4_35_32_mask                                (0x0000000F)
#define  EARC_earc_tx_dmac_cs_2_layout_channel_num_l(data)                       (0x0000F000&((data)<<12))
#define  EARC_earc_tx_dmac_cs_2_cs_lb5_43(data)                                  (0x00000800&((data)<<11))
#define  EARC_earc_tx_dmac_cs_2_cs_lb5_42(data)                                  (0x00000400&((data)<<10))
#define  EARC_earc_tx_dmac_cs_2_cgms_a_l(data)                                   (0x00000300&((data)<<8))
#define  EARC_earc_tx_dmac_cs_2_original_sampling_freq_l(data)                   (0x000000F0&((data)<<4))
#define  EARC_earc_tx_dmac_cs_2_cs_lb4_35_32(data)                               (0x0000000F&(data))
#define  EARC_earc_tx_dmac_cs_2_get_layout_channel_num_l(data)                   ((0x0000F000&(data))>>12)
#define  EARC_earc_tx_dmac_cs_2_get_cs_lb5_43(data)                              ((0x00000800&(data))>>11)
#define  EARC_earc_tx_dmac_cs_2_get_cs_lb5_42(data)                              ((0x00000400&(data))>>10)
#define  EARC_earc_tx_dmac_cs_2_get_cgms_a_l(data)                               ((0x00000300&(data))>>8)
#define  EARC_earc_tx_dmac_cs_2_get_original_sampling_freq_l(data)               ((0x000000F0&(data))>>4)
#define  EARC_earc_tx_dmac_cs_2_get_cs_lb4_35_32(data)                           (0x0000000F&(data))

#define  EARC_earc_tx_dmac_cs_3                                                 0x18006D10
#define  EARC_earc_tx_dmac_cs_3_reg_addr                                         "0xB8006D10"
#define  EARC_earc_tx_dmac_cs_3_reg                                              0xB8006D10
#define  EARC_earc_tx_dmac_cs_3_inst_addr                                        "0x0004"
#define  set_EARC_earc_tx_dmac_cs_3_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_3_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_3_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_3_reg))
#define  EARC_earc_tx_dmac_cs_3_cs_byte_7_6_l_shift                              (0)
#define  EARC_earc_tx_dmac_cs_3_cs_byte_7_6_l_mask                               (0x0000FFFF)
#define  EARC_earc_tx_dmac_cs_3_cs_byte_7_6_l(data)                              (0x0000FFFF&(data))
#define  EARC_earc_tx_dmac_cs_3_get_cs_byte_7_6_l(data)                          (0x0000FFFF&(data))

#define  EARC_earc_tx_dmac_cs_4                                                 0x18006D14
#define  EARC_earc_tx_dmac_cs_4_reg_addr                                         "0xB8006D14"
#define  EARC_earc_tx_dmac_cs_4_reg                                              0xB8006D14
#define  EARC_earc_tx_dmac_cs_4_inst_addr                                        "0x0005"
#define  set_EARC_earc_tx_dmac_cs_4_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_4_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_4_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_4_reg))
#define  EARC_earc_tx_dmac_cs_4_cs_byte_11_8_l_shift                             (0)
#define  EARC_earc_tx_dmac_cs_4_cs_byte_11_8_l_mask                              (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_cs_4_cs_byte_11_8_l(data)                             (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_cs_4_get_cs_byte_11_8_l(data)                         (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_cs_5                                                 0x18006D18
#define  EARC_earc_tx_dmac_cs_5_reg_addr                                         "0xB8006D18"
#define  EARC_earc_tx_dmac_cs_5_reg                                              0xB8006D18
#define  EARC_earc_tx_dmac_cs_5_inst_addr                                        "0x0006"
#define  set_EARC_earc_tx_dmac_cs_5_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_5_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_5_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_5_reg))
#define  EARC_earc_tx_dmac_cs_5_cs_byte_15_12_l_shift                            (0)
#define  EARC_earc_tx_dmac_cs_5_cs_byte_15_12_l_mask                             (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_cs_5_cs_byte_15_12_l(data)                            (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_cs_5_get_cs_byte_15_12_l(data)                        (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_cs_6                                                 0x18006D1C
#define  EARC_earc_tx_dmac_cs_6_reg_addr                                         "0xB8006D1C"
#define  EARC_earc_tx_dmac_cs_6_reg                                              0xB8006D1C
#define  EARC_earc_tx_dmac_cs_6_inst_addr                                        "0x0007"
#define  set_EARC_earc_tx_dmac_cs_6_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_6_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_6_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_6_reg))
#define  EARC_earc_tx_dmac_cs_6_cs_byte_19_16_l_shift                            (0)
#define  EARC_earc_tx_dmac_cs_6_cs_byte_19_16_l_mask                             (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_cs_6_cs_byte_19_16_l(data)                            (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_cs_6_get_cs_byte_19_16_l(data)                        (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_cs_7                                                 0x18006D20
#define  EARC_earc_tx_dmac_cs_7_reg_addr                                         "0xB8006D20"
#define  EARC_earc_tx_dmac_cs_7_reg                                              0xB8006D20
#define  EARC_earc_tx_dmac_cs_7_inst_addr                                        "0x0008"
#define  set_EARC_earc_tx_dmac_cs_7_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_7_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_7_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_7_reg))
#define  EARC_earc_tx_dmac_cs_7_cs_byte_23_20_l_shift                            (0)
#define  EARC_earc_tx_dmac_cs_7_cs_byte_23_20_l_mask                             (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_cs_7_cs_byte_23_20_l(data)                            (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_cs_7_get_cs_byte_23_20_l(data)                        (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_cs_8                                                 0x18006D24
#define  EARC_earc_tx_dmac_cs_8_reg_addr                                         "0xB8006D24"
#define  EARC_earc_tx_dmac_cs_8_reg                                              0xB8006D24
#define  EARC_earc_tx_dmac_cs_8_inst_addr                                        "0x0009"
#define  set_EARC_earc_tx_dmac_cs_8_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_8_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_8_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_8_reg))
#define  EARC_earc_tx_dmac_cs_8_cs_rb3_31_30_shift                               (30)
#define  EARC_earc_tx_dmac_cs_8_clock_accuracy_r_shift                           (28)
#define  EARC_earc_tx_dmac_cs_8_sampling_freq_r_shift                            (24)
#define  EARC_earc_tx_dmac_cs_8_channel_number_r_shift                           (20)
#define  EARC_earc_tx_dmac_cs_8_source_number_r_shift                            (16)
#define  EARC_earc_tx_dmac_cs_8_category_code_r_shift                            (8)
#define  EARC_earc_tx_dmac_cs_8_mode_r_shift                                     (6)
#define  EARC_earc_tx_dmac_cs_8_pre_emphasis_r_shift                             (3)
#define  EARC_earc_tx_dmac_cs_8_copyright_r_shift                                (2)
#define  EARC_earc_tx_dmac_cs_8_data_type_r_shift                                (1)
#define  EARC_earc_tx_dmac_cs_8_professional_r_shift                             (0)
#define  EARC_earc_tx_dmac_cs_8_cs_rb3_31_30_mask                                (0xC0000000)
#define  EARC_earc_tx_dmac_cs_8_clock_accuracy_r_mask                            (0x30000000)
#define  EARC_earc_tx_dmac_cs_8_sampling_freq_r_mask                             (0x0F000000)
#define  EARC_earc_tx_dmac_cs_8_channel_number_r_mask                            (0x00F00000)
#define  EARC_earc_tx_dmac_cs_8_source_number_r_mask                             (0x000F0000)
#define  EARC_earc_tx_dmac_cs_8_category_code_r_mask                             (0x0000FF00)
#define  EARC_earc_tx_dmac_cs_8_mode_r_mask                                      (0x000000C0)
#define  EARC_earc_tx_dmac_cs_8_pre_emphasis_r_mask                              (0x00000038)
#define  EARC_earc_tx_dmac_cs_8_copyright_r_mask                                 (0x00000004)
#define  EARC_earc_tx_dmac_cs_8_data_type_r_mask                                 (0x00000002)
#define  EARC_earc_tx_dmac_cs_8_professional_r_mask                              (0x00000001)
#define  EARC_earc_tx_dmac_cs_8_cs_rb3_31_30(data)                               (0xC0000000&((data)<<30))
#define  EARC_earc_tx_dmac_cs_8_clock_accuracy_r(data)                           (0x30000000&((data)<<28))
#define  EARC_earc_tx_dmac_cs_8_sampling_freq_r(data)                            (0x0F000000&((data)<<24))
#define  EARC_earc_tx_dmac_cs_8_channel_number_r(data)                           (0x00F00000&((data)<<20))
#define  EARC_earc_tx_dmac_cs_8_source_number_r(data)                            (0x000F0000&((data)<<16))
#define  EARC_earc_tx_dmac_cs_8_category_code_r(data)                            (0x0000FF00&((data)<<8))
#define  EARC_earc_tx_dmac_cs_8_mode_r(data)                                     (0x000000C0&((data)<<6))
#define  EARC_earc_tx_dmac_cs_8_pre_emphasis_r(data)                             (0x00000038&((data)<<3))
#define  EARC_earc_tx_dmac_cs_8_copyright_r(data)                                (0x00000004&((data)<<2))
#define  EARC_earc_tx_dmac_cs_8_data_type_r(data)                                (0x00000002&((data)<<1))
#define  EARC_earc_tx_dmac_cs_8_professional_r(data)                             (0x00000001&(data))
#define  EARC_earc_tx_dmac_cs_8_get_cs_rb3_31_30(data)                           ((0xC0000000&(data))>>30)
#define  EARC_earc_tx_dmac_cs_8_get_clock_accuracy_r(data)                       ((0x30000000&(data))>>28)
#define  EARC_earc_tx_dmac_cs_8_get_sampling_freq_r(data)                        ((0x0F000000&(data))>>24)
#define  EARC_earc_tx_dmac_cs_8_get_channel_number_r(data)                       ((0x00F00000&(data))>>20)
#define  EARC_earc_tx_dmac_cs_8_get_source_number_r(data)                        ((0x000F0000&(data))>>16)
#define  EARC_earc_tx_dmac_cs_8_get_category_code_r(data)                        ((0x0000FF00&(data))>>8)
#define  EARC_earc_tx_dmac_cs_8_get_mode_r(data)                                 ((0x000000C0&(data))>>6)
#define  EARC_earc_tx_dmac_cs_8_get_pre_emphasis_r(data)                         ((0x00000038&(data))>>3)
#define  EARC_earc_tx_dmac_cs_8_get_copyright_r(data)                            ((0x00000004&(data))>>2)
#define  EARC_earc_tx_dmac_cs_8_get_data_type_r(data)                            ((0x00000002&(data))>>1)
#define  EARC_earc_tx_dmac_cs_8_get_professional_r(data)                         (0x00000001&(data))

#define  EARC_earc_tx_dmac_cs_9                                                 0x18006D28
#define  EARC_earc_tx_dmac_cs_9_reg_addr                                         "0xB8006D28"
#define  EARC_earc_tx_dmac_cs_9_reg                                              0xB8006D28
#define  EARC_earc_tx_dmac_cs_9_inst_addr                                        "0x000A"
#define  set_EARC_earc_tx_dmac_cs_9_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_9_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_9_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_9_reg))
#define  EARC_earc_tx_dmac_cs_9_layout_channel_num_r_shift                       (12)
#define  EARC_earc_tx_dmac_cs_9_cs_rb5_43_shift                                  (11)
#define  EARC_earc_tx_dmac_cs_9_cs_rb5_42_shift                                  (10)
#define  EARC_earc_tx_dmac_cs_9_cgms_a_r_shift                                   (8)
#define  EARC_earc_tx_dmac_cs_9_original_sampling_freq_r_shift                   (4)
#define  EARC_earc_tx_dmac_cs_9_cs_rb4_35_32_shift                               (0)
#define  EARC_earc_tx_dmac_cs_9_layout_channel_num_r_mask                        (0x0000F000)
#define  EARC_earc_tx_dmac_cs_9_cs_rb5_43_mask                                   (0x00000800)
#define  EARC_earc_tx_dmac_cs_9_cs_rb5_42_mask                                   (0x00000400)
#define  EARC_earc_tx_dmac_cs_9_cgms_a_r_mask                                    (0x00000300)
#define  EARC_earc_tx_dmac_cs_9_original_sampling_freq_r_mask                    (0x000000F0)
#define  EARC_earc_tx_dmac_cs_9_cs_rb4_35_32_mask                                (0x0000000F)
#define  EARC_earc_tx_dmac_cs_9_layout_channel_num_r(data)                       (0x0000F000&((data)<<12))
#define  EARC_earc_tx_dmac_cs_9_cs_rb5_43(data)                                  (0x00000800&((data)<<11))
#define  EARC_earc_tx_dmac_cs_9_cs_rb5_42(data)                                  (0x00000400&((data)<<10))
#define  EARC_earc_tx_dmac_cs_9_cgms_a_r(data)                                   (0x00000300&((data)<<8))
#define  EARC_earc_tx_dmac_cs_9_original_sampling_freq_r(data)                   (0x000000F0&((data)<<4))
#define  EARC_earc_tx_dmac_cs_9_cs_rb4_35_32(data)                               (0x0000000F&(data))
#define  EARC_earc_tx_dmac_cs_9_get_layout_channel_num_r(data)                   ((0x0000F000&(data))>>12)
#define  EARC_earc_tx_dmac_cs_9_get_cs_rb5_43(data)                              ((0x00000800&(data))>>11)
#define  EARC_earc_tx_dmac_cs_9_get_cs_rb5_42(data)                              ((0x00000400&(data))>>10)
#define  EARC_earc_tx_dmac_cs_9_get_cgms_a_r(data)                               ((0x00000300&(data))>>8)
#define  EARC_earc_tx_dmac_cs_9_get_original_sampling_freq_r(data)               ((0x000000F0&(data))>>4)
#define  EARC_earc_tx_dmac_cs_9_get_cs_rb4_35_32(data)                           (0x0000000F&(data))

#define  EARC_earc_tx_dmac_cs_10                                                0x18006D2C
#define  EARC_earc_tx_dmac_cs_10_reg_addr                                        "0xB8006D2C"
#define  EARC_earc_tx_dmac_cs_10_reg                                             0xB8006D2C
#define  EARC_earc_tx_dmac_cs_10_inst_addr                                       "0x000B"
#define  set_EARC_earc_tx_dmac_cs_10_reg(data)                                   (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_10_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_10_reg                                         (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_10_reg))
#define  EARC_earc_tx_dmac_cs_10_cs_byte_7_6_r_shift                             (0)
#define  EARC_earc_tx_dmac_cs_10_cs_byte_7_6_r_mask                              (0x0000FFFF)
#define  EARC_earc_tx_dmac_cs_10_cs_byte_7_6_r(data)                             (0x0000FFFF&(data))
#define  EARC_earc_tx_dmac_cs_10_get_cs_byte_7_6_r(data)                         (0x0000FFFF&(data))

#define  EARC_earc_tx_dmac_cs_11                                                0x18006D30
#define  EARC_earc_tx_dmac_cs_11_reg_addr                                        "0xB8006D30"
#define  EARC_earc_tx_dmac_cs_11_reg                                             0xB8006D30
#define  EARC_earc_tx_dmac_cs_11_inst_addr                                       "0x000C"
#define  set_EARC_earc_tx_dmac_cs_11_reg(data)                                   (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_11_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_11_reg                                         (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_11_reg))
#define  EARC_earc_tx_dmac_cs_11_cs_byte_11_8_r_shift                            (0)
#define  EARC_earc_tx_dmac_cs_11_cs_byte_11_8_r_mask                             (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_cs_11_cs_byte_11_8_r(data)                            (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_cs_11_get_cs_byte_11_8_r(data)                        (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_cs_12                                                0x18006D34
#define  EARC_earc_tx_dmac_cs_12_reg_addr                                        "0xB8006D34"
#define  EARC_earc_tx_dmac_cs_12_reg                                             0xB8006D34
#define  EARC_earc_tx_dmac_cs_12_inst_addr                                       "0x000D"
#define  set_EARC_earc_tx_dmac_cs_12_reg(data)                                   (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_12_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_12_reg                                         (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_12_reg))
#define  EARC_earc_tx_dmac_cs_12_cs_byte_15_12_r_shift                           (0)
#define  EARC_earc_tx_dmac_cs_12_cs_byte_15_12_r_mask                            (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_cs_12_cs_byte_15_12_r(data)                           (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_cs_12_get_cs_byte_15_12_r(data)                       (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_cs_13                                                0x18006D38
#define  EARC_earc_tx_dmac_cs_13_reg_addr                                        "0xB8006D38"
#define  EARC_earc_tx_dmac_cs_13_reg                                             0xB8006D38
#define  EARC_earc_tx_dmac_cs_13_inst_addr                                       "0x000E"
#define  set_EARC_earc_tx_dmac_cs_13_reg(data)                                   (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_13_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_13_reg                                         (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_13_reg))
#define  EARC_earc_tx_dmac_cs_13_cs_byte_19_16_r_shift                           (0)
#define  EARC_earc_tx_dmac_cs_13_cs_byte_19_16_r_mask                            (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_cs_13_cs_byte_19_16_r(data)                           (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_cs_13_get_cs_byte_19_16_r(data)                       (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_cs_14                                                0x18006D3C
#define  EARC_earc_tx_dmac_cs_14_reg_addr                                        "0xB8006D3C"
#define  EARC_earc_tx_dmac_cs_14_reg                                             0xB8006D3C
#define  EARC_earc_tx_dmac_cs_14_inst_addr                                       "0x000F"
#define  set_EARC_earc_tx_dmac_cs_14_reg(data)                                   (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_14_reg)=data)
#define  get_EARC_earc_tx_dmac_cs_14_reg                                         (*((volatile unsigned int*)EARC_earc_tx_dmac_cs_14_reg))
#define  EARC_earc_tx_dmac_cs_14_cs_byte_23_20_r_shift                           (0)
#define  EARC_earc_tx_dmac_cs_14_cs_byte_23_20_r_mask                            (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_cs_14_cs_byte_23_20_r(data)                           (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_cs_14_get_cs_byte_23_20_r(data)                       (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_1                                                  0x18006D40
#define  EARC_earc_tx_dmac_u_1_reg_addr                                          "0xB8006D40"
#define  EARC_earc_tx_dmac_u_1_reg                                               0xB8006D40
#define  EARC_earc_tx_dmac_u_1_inst_addr                                         "0x0010"
#define  set_EARC_earc_tx_dmac_u_1_reg(data)                                     (*((volatile unsigned int*)EARC_earc_tx_dmac_u_1_reg)=data)
#define  get_EARC_earc_tx_dmac_u_1_reg                                           (*((volatile unsigned int*)EARC_earc_tx_dmac_u_1_reg))
#define  EARC_earc_tx_dmac_u_1_iu_byte_3_0_shift                                 (0)
#define  EARC_earc_tx_dmac_u_1_iu_byte_3_0_mask                                  (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_1_iu_byte_3_0(data)                                 (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_1_get_iu_byte_3_0(data)                             (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_2                                                  0x18006D44
#define  EARC_earc_tx_dmac_u_2_reg_addr                                          "0xB8006D44"
#define  EARC_earc_tx_dmac_u_2_reg                                               0xB8006D44
#define  EARC_earc_tx_dmac_u_2_inst_addr                                         "0x0011"
#define  set_EARC_earc_tx_dmac_u_2_reg(data)                                     (*((volatile unsigned int*)EARC_earc_tx_dmac_u_2_reg)=data)
#define  get_EARC_earc_tx_dmac_u_2_reg                                           (*((volatile unsigned int*)EARC_earc_tx_dmac_u_2_reg))
#define  EARC_earc_tx_dmac_u_2_iu_byte_7_4_shift                                 (0)
#define  EARC_earc_tx_dmac_u_2_iu_byte_7_4_mask                                  (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_2_iu_byte_7_4(data)                                 (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_2_get_iu_byte_7_4(data)                             (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_3                                                  0x18006D48
#define  EARC_earc_tx_dmac_u_3_reg_addr                                          "0xB8006D48"
#define  EARC_earc_tx_dmac_u_3_reg                                               0xB8006D48
#define  EARC_earc_tx_dmac_u_3_inst_addr                                         "0x0012"
#define  set_EARC_earc_tx_dmac_u_3_reg(data)                                     (*((volatile unsigned int*)EARC_earc_tx_dmac_u_3_reg)=data)
#define  get_EARC_earc_tx_dmac_u_3_reg                                           (*((volatile unsigned int*)EARC_earc_tx_dmac_u_3_reg))
#define  EARC_earc_tx_dmac_u_3_iu_byte_11_8_shift                                (0)
#define  EARC_earc_tx_dmac_u_3_iu_byte_11_8_mask                                 (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_3_iu_byte_11_8(data)                                (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_3_get_iu_byte_11_8(data)                            (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_4                                                  0x18006D4C
#define  EARC_earc_tx_dmac_u_4_reg_addr                                          "0xB8006D4C"
#define  EARC_earc_tx_dmac_u_4_reg                                               0xB8006D4C
#define  EARC_earc_tx_dmac_u_4_inst_addr                                         "0x0013"
#define  set_EARC_earc_tx_dmac_u_4_reg(data)                                     (*((volatile unsigned int*)EARC_earc_tx_dmac_u_4_reg)=data)
#define  get_EARC_earc_tx_dmac_u_4_reg                                           (*((volatile unsigned int*)EARC_earc_tx_dmac_u_4_reg))
#define  EARC_earc_tx_dmac_u_4_iu_byte_15_12_shift                               (0)
#define  EARC_earc_tx_dmac_u_4_iu_byte_15_12_mask                                (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_4_iu_byte_15_12(data)                               (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_4_get_iu_byte_15_12(data)                           (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_5                                                  0x18006D50
#define  EARC_earc_tx_dmac_u_5_reg_addr                                          "0xB8006D50"
#define  EARC_earc_tx_dmac_u_5_reg                                               0xB8006D50
#define  EARC_earc_tx_dmac_u_5_inst_addr                                         "0x0014"
#define  set_EARC_earc_tx_dmac_u_5_reg(data)                                     (*((volatile unsigned int*)EARC_earc_tx_dmac_u_5_reg)=data)
#define  get_EARC_earc_tx_dmac_u_5_reg                                           (*((volatile unsigned int*)EARC_earc_tx_dmac_u_5_reg))
#define  EARC_earc_tx_dmac_u_5_iu_byte_19_16_shift                               (0)
#define  EARC_earc_tx_dmac_u_5_iu_byte_19_16_mask                                (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_5_iu_byte_19_16(data)                               (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_5_get_iu_byte_19_16(data)                           (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_6                                                  0x18006D54
#define  EARC_earc_tx_dmac_u_6_reg_addr                                          "0xB8006D54"
#define  EARC_earc_tx_dmac_u_6_reg                                               0xB8006D54
#define  EARC_earc_tx_dmac_u_6_inst_addr                                         "0x0015"
#define  set_EARC_earc_tx_dmac_u_6_reg(data)                                     (*((volatile unsigned int*)EARC_earc_tx_dmac_u_6_reg)=data)
#define  get_EARC_earc_tx_dmac_u_6_reg                                           (*((volatile unsigned int*)EARC_earc_tx_dmac_u_6_reg))
#define  EARC_earc_tx_dmac_u_6_iu_byte_23_20_shift                               (0)
#define  EARC_earc_tx_dmac_u_6_iu_byte_23_20_mask                                (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_6_iu_byte_23_20(data)                               (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_6_get_iu_byte_23_20(data)                           (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_7                                                  0x18006D58
#define  EARC_earc_tx_dmac_u_7_reg_addr                                          "0xB8006D58"
#define  EARC_earc_tx_dmac_u_7_reg                                               0xB8006D58
#define  EARC_earc_tx_dmac_u_7_inst_addr                                         "0x0016"
#define  set_EARC_earc_tx_dmac_u_7_reg(data)                                     (*((volatile unsigned int*)EARC_earc_tx_dmac_u_7_reg)=data)
#define  get_EARC_earc_tx_dmac_u_7_reg                                           (*((volatile unsigned int*)EARC_earc_tx_dmac_u_7_reg))
#define  EARC_earc_tx_dmac_u_7_iu_byte_27_24_shift                               (0)
#define  EARC_earc_tx_dmac_u_7_iu_byte_27_24_mask                                (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_7_iu_byte_27_24(data)                               (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_7_get_iu_byte_27_24(data)                           (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_8                                                  0x18006D5C
#define  EARC_earc_tx_dmac_u_8_reg_addr                                          "0xB8006D5C"
#define  EARC_earc_tx_dmac_u_8_reg                                               0xB8006D5C
#define  EARC_earc_tx_dmac_u_8_inst_addr                                         "0x0017"
#define  set_EARC_earc_tx_dmac_u_8_reg(data)                                     (*((volatile unsigned int*)EARC_earc_tx_dmac_u_8_reg)=data)
#define  get_EARC_earc_tx_dmac_u_8_reg                                           (*((volatile unsigned int*)EARC_earc_tx_dmac_u_8_reg))
#define  EARC_earc_tx_dmac_u_8_iu_byte_31_28_shift                               (0)
#define  EARC_earc_tx_dmac_u_8_iu_byte_31_28_mask                                (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_8_iu_byte_31_28(data)                               (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_8_get_iu_byte_31_28(data)                           (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_9                                                  0x18006D60
#define  EARC_earc_tx_dmac_u_9_reg_addr                                          "0xB8006D60"
#define  EARC_earc_tx_dmac_u_9_reg                                               0xB8006D60
#define  EARC_earc_tx_dmac_u_9_inst_addr                                         "0x0018"
#define  set_EARC_earc_tx_dmac_u_9_reg(data)                                     (*((volatile unsigned int*)EARC_earc_tx_dmac_u_9_reg)=data)
#define  get_EARC_earc_tx_dmac_u_9_reg                                           (*((volatile unsigned int*)EARC_earc_tx_dmac_u_9_reg))
#define  EARC_earc_tx_dmac_u_9_iu_byte_35_32_shift                               (0)
#define  EARC_earc_tx_dmac_u_9_iu_byte_35_32_mask                                (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_9_iu_byte_35_32(data)                               (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_9_get_iu_byte_35_32(data)                           (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_10                                                 0x18006D64
#define  EARC_earc_tx_dmac_u_10_reg_addr                                         "0xB8006D64"
#define  EARC_earc_tx_dmac_u_10_reg                                              0xB8006D64
#define  EARC_earc_tx_dmac_u_10_inst_addr                                        "0x0019"
#define  set_EARC_earc_tx_dmac_u_10_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_u_10_reg)=data)
#define  get_EARC_earc_tx_dmac_u_10_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_u_10_reg))
#define  EARC_earc_tx_dmac_u_10_iu_byte_39_36_shift                              (0)
#define  EARC_earc_tx_dmac_u_10_iu_byte_39_36_mask                               (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_10_iu_byte_39_36(data)                              (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_10_get_iu_byte_39_36(data)                          (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_11                                                 0x18006D68
#define  EARC_earc_tx_dmac_u_11_reg_addr                                         "0xB8006D68"
#define  EARC_earc_tx_dmac_u_11_reg                                              0xB8006D68
#define  EARC_earc_tx_dmac_u_11_inst_addr                                        "0x001A"
#define  set_EARC_earc_tx_dmac_u_11_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_u_11_reg)=data)
#define  get_EARC_earc_tx_dmac_u_11_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_u_11_reg))
#define  EARC_earc_tx_dmac_u_11_iu_byte_43_40_shift                              (0)
#define  EARC_earc_tx_dmac_u_11_iu_byte_43_40_mask                               (0xFFFFFFFF)
#define  EARC_earc_tx_dmac_u_11_iu_byte_43_40(data)                              (0xFFFFFFFF&(data))
#define  EARC_earc_tx_dmac_u_11_get_iu_byte_43_40(data)                          (0xFFFFFFFF&(data))

#define  EARC_earc_tx_dmac_u_12                                                 0x18006D6C
#define  EARC_earc_tx_dmac_u_12_reg_addr                                         "0xB8006D6C"
#define  EARC_earc_tx_dmac_u_12_reg                                              0xB8006D6C
#define  EARC_earc_tx_dmac_u_12_inst_addr                                        "0x001B"
#define  set_EARC_earc_tx_dmac_u_12_reg(data)                                    (*((volatile unsigned int*)EARC_earc_tx_dmac_u_12_reg)=data)
#define  get_EARC_earc_tx_dmac_u_12_reg                                          (*((volatile unsigned int*)EARC_earc_tx_dmac_u_12_reg))
#define  EARC_earc_tx_dmac_u_12_iu_byte_46_44_shift                              (0)
#define  EARC_earc_tx_dmac_u_12_iu_byte_46_44_mask                               (0x00FFFFFF)
#define  EARC_earc_tx_dmac_u_12_iu_byte_46_44(data)                              (0x00FFFFFF&(data))
#define  EARC_earc_tx_dmac_u_12_get_iu_byte_46_44(data)                          (0x00FFFFFF&(data))

#define  EARC_eARC_CMDC_TIMING0                                                 0x18006DC0
#define  EARC_eARC_CMDC_TIMING0_reg_addr                                         "0xB8006DC0"
#define  EARC_eARC_CMDC_TIMING0_reg                                              0xB8006DC0
#define  EARC_eARC_CMDC_TIMING0_inst_addr                                        "0x001C"
#define  set_EARC_eARC_CMDC_TIMING0_reg(data)                                    (*((volatile unsigned int*)EARC_eARC_CMDC_TIMING0_reg)=data)
#define  get_EARC_eARC_CMDC_TIMING0_reg                                          (*((volatile unsigned int*)EARC_eARC_CMDC_TIMING0_reg))
#define  EARC_eARC_CMDC_TIMING0_tx_disconn_shift                                 (26)
#define  EARC_eARC_CMDC_TIMING0_tx_timeout_shift                                 (23)
#define  EARC_eARC_CMDC_TIMING0_tx_connearc_valid_shift                          (19)
#define  EARC_eARC_CMDC_TIMING0_tx_conn_comma_count_shift                        (13)
#define  EARC_eARC_CMDC_TIMING0_tx_conn_comma_off_max_shift                      (9)
#define  EARC_eARC_CMDC_TIMING0_tx_conn_comma_off_min_shift                      (5)
#define  EARC_eARC_CMDC_TIMING0_tx_disconn_mask                                  (0xFC000000)
#define  EARC_eARC_CMDC_TIMING0_tx_timeout_mask                                  (0x03800000)
#define  EARC_eARC_CMDC_TIMING0_tx_connearc_valid_mask                           (0x00780000)
#define  EARC_eARC_CMDC_TIMING0_tx_conn_comma_count_mask                         (0x0003E000)
#define  EARC_eARC_CMDC_TIMING0_tx_conn_comma_off_max_mask                       (0x00001E00)
#define  EARC_eARC_CMDC_TIMING0_tx_conn_comma_off_min_mask                       (0x000001E0)
#define  EARC_eARC_CMDC_TIMING0_tx_disconn(data)                                 (0xFC000000&((data)<<26))
#define  EARC_eARC_CMDC_TIMING0_tx_timeout(data)                                 (0x03800000&((data)<<23))
#define  EARC_eARC_CMDC_TIMING0_tx_connearc_valid(data)                          (0x00780000&((data)<<19))
#define  EARC_eARC_CMDC_TIMING0_tx_conn_comma_count(data)                        (0x0003E000&((data)<<13))
#define  EARC_eARC_CMDC_TIMING0_tx_conn_comma_off_max(data)                      (0x00001E00&((data)<<9))
#define  EARC_eARC_CMDC_TIMING0_tx_conn_comma_off_min(data)                      (0x000001E0&((data)<<5))
#define  EARC_eARC_CMDC_TIMING0_get_tx_disconn(data)                             ((0xFC000000&(data))>>26)
#define  EARC_eARC_CMDC_TIMING0_get_tx_timeout(data)                             ((0x03800000&(data))>>23)
#define  EARC_eARC_CMDC_TIMING0_get_tx_connearc_valid(data)                      ((0x00780000&(data))>>19)
#define  EARC_eARC_CMDC_TIMING0_get_tx_conn_comma_count(data)                    ((0x0003E000&(data))>>13)
#define  EARC_eARC_CMDC_TIMING0_get_tx_conn_comma_off_max(data)                  ((0x00001E00&(data))>>9)
#define  EARC_eARC_CMDC_TIMING0_get_tx_conn_comma_off_min(data)                  ((0x000001E0&(data))>>5)

#define  EARC_eARC_CMDC_TIMING1                                                 0x18006DC4
#define  EARC_eARC_CMDC_TIMING1_reg_addr                                         "0xB8006DC4"
#define  EARC_eARC_CMDC_TIMING1_reg                                              0xB8006DC4
#define  EARC_eARC_CMDC_TIMING1_inst_addr                                        "0x001D"
#define  set_EARC_eARC_CMDC_TIMING1_reg(data)                                    (*((volatile unsigned int*)EARC_eARC_CMDC_TIMING1_reg)=data)
#define  get_EARC_eARC_CMDC_TIMING1_reg                                          (*((volatile unsigned int*)EARC_eARC_CMDC_TIMING1_reg))
#define  EARC_eARC_CMDC_TIMING1_tx_conn_comma_on_max_shift                       (24)
#define  EARC_eARC_CMDC_TIMING1_tx_conn_comma_on_min_shift                       (20)
#define  EARC_eARC_CMDC_TIMING1_tx_format_chg_shift                              (9)
#define  EARC_eARC_CMDC_TIMING1_lost_heartbeat_shift                             (4)
#define  EARC_eARC_CMDC_TIMING1_heartbeat_shift                                  (0)
#define  EARC_eARC_CMDC_TIMING1_tx_conn_comma_on_max_mask                        (0x0F000000)
#define  EARC_eARC_CMDC_TIMING1_tx_conn_comma_on_min_mask                        (0x00F00000)
#define  EARC_eARC_CMDC_TIMING1_tx_format_chg_mask                               (0x0001FE00)
#define  EARC_eARC_CMDC_TIMING1_lost_heartbeat_mask                              (0x000001F0)
#define  EARC_eARC_CMDC_TIMING1_heartbeat_mask                                   (0x0000000F)
#define  EARC_eARC_CMDC_TIMING1_tx_conn_comma_on_max(data)                       (0x0F000000&((data)<<24))
#define  EARC_eARC_CMDC_TIMING1_tx_conn_comma_on_min(data)                       (0x00F00000&((data)<<20))
#define  EARC_eARC_CMDC_TIMING1_tx_format_chg(data)                              (0x0001FE00&((data)<<9))
#define  EARC_eARC_CMDC_TIMING1_lost_heartbeat(data)                             (0x000001F0&((data)<<4))
#define  EARC_eARC_CMDC_TIMING1_heartbeat(data)                                  (0x0000000F&(data))
#define  EARC_eARC_CMDC_TIMING1_get_tx_conn_comma_on_max(data)                   ((0x0F000000&(data))>>24)
#define  EARC_eARC_CMDC_TIMING1_get_tx_conn_comma_on_min(data)                   ((0x00F00000&(data))>>20)
#define  EARC_eARC_CMDC_TIMING1_get_tx_format_chg(data)                          ((0x0001FE00&(data))>>9)
#define  EARC_eARC_CMDC_TIMING1_get_lost_heartbeat(data)                         ((0x000001F0&(data))>>4)
#define  EARC_eARC_CMDC_TIMING1_get_heartbeat(data)                              (0x0000000F&(data))

#define  EARC_eARC_CMDC_REQ                                                     0x18006DC8
#define  EARC_eARC_CMDC_REQ_reg_addr                                             "0xB8006DC8"
#define  EARC_eARC_CMDC_REQ_reg                                                  0xB8006DC8
#define  EARC_eARC_CMDC_REQ_inst_addr                                            "0x001E"
#define  set_EARC_eARC_CMDC_REQ_reg(data)                                        (*((volatile unsigned int*)EARC_eARC_CMDC_REQ_reg)=data)
#define  get_EARC_eARC_CMDC_REQ_reg                                              (*((volatile unsigned int*)EARC_eARC_CMDC_REQ_reg))
#define  EARC_eARC_CMDC_REQ_capability_mode_shift                                (31)
#define  EARC_eARC_CMDC_REQ_capability_stop_shift                                (30)
#define  EARC_eARC_CMDC_REQ_heartbeat_en_shift                                   (24)
#define  EARC_eARC_CMDC_REQ_force_trans_state_shift                              (22)
#define  EARC_eARC_CMDC_REQ_continue_status_shift                                (21)
#define  EARC_eARC_CMDC_REQ_rdata_len_shift                                      (13)
#define  EARC_eARC_CMDC_REQ_earc_hpd_status_shift                                (12)
#define  EARC_eARC_CMDC_REQ_trans_state_shift                                    (8)
#define  EARC_eARC_CMDC_REQ_disc_state_shift                                     (4)
#define  EARC_eARC_CMDC_REQ_request_case_shift                                   (3)
#define  EARC_eARC_CMDC_REQ_fw_req_shift                                         (2)
#define  EARC_eARC_CMDC_REQ_hdmi_hpd_shift                                       (1)
#define  EARC_eARC_CMDC_REQ_cmdc_tx_en_shift                                     (0)
#define  EARC_eARC_CMDC_REQ_capability_mode_mask                                 (0x80000000)
#define  EARC_eARC_CMDC_REQ_capability_stop_mask                                 (0x40000000)
#define  EARC_eARC_CMDC_REQ_heartbeat_en_mask                                    (0x01000000)
#define  EARC_eARC_CMDC_REQ_force_trans_state_mask                               (0x00C00000)
#define  EARC_eARC_CMDC_REQ_continue_status_mask                                 (0x00200000)
#define  EARC_eARC_CMDC_REQ_rdata_len_mask                                       (0x001FE000)
#define  EARC_eARC_CMDC_REQ_earc_hpd_status_mask                                 (0x00001000)
#define  EARC_eARC_CMDC_REQ_trans_state_mask                                     (0x00000F00)
#define  EARC_eARC_CMDC_REQ_disc_state_mask                                      (0x000000F0)
#define  EARC_eARC_CMDC_REQ_request_case_mask                                    (0x00000008)
#define  EARC_eARC_CMDC_REQ_fw_req_mask                                          (0x00000004)
#define  EARC_eARC_CMDC_REQ_hdmi_hpd_mask                                        (0x00000002)
#define  EARC_eARC_CMDC_REQ_cmdc_tx_en_mask                                      (0x00000001)
#define  EARC_eARC_CMDC_REQ_capability_mode(data)                                (0x80000000&((data)<<31))
#define  EARC_eARC_CMDC_REQ_capability_stop(data)                                (0x40000000&((data)<<30))
#define  EARC_eARC_CMDC_REQ_heartbeat_en(data)                                   (0x01000000&((data)<<24))
#define  EARC_eARC_CMDC_REQ_force_trans_state(data)                              (0x00C00000&((data)<<22))
#define  EARC_eARC_CMDC_REQ_continue_status(data)                                (0x00200000&((data)<<21))
#define  EARC_eARC_CMDC_REQ_rdata_len(data)                                      (0x001FE000&((data)<<13))
#define  EARC_eARC_CMDC_REQ_earc_hpd_status(data)                                (0x00001000&((data)<<12))
#define  EARC_eARC_CMDC_REQ_trans_state(data)                                    (0x00000F00&((data)<<8))
#define  EARC_eARC_CMDC_REQ_disc_state(data)                                     (0x000000F0&((data)<<4))
#define  EARC_eARC_CMDC_REQ_request_case(data)                                   (0x00000008&((data)<<3))
#define  EARC_eARC_CMDC_REQ_fw_req(data)                                         (0x00000004&((data)<<2))
#define  EARC_eARC_CMDC_REQ_hdmi_hpd(data)                                       (0x00000002&((data)<<1))
#define  EARC_eARC_CMDC_REQ_cmdc_tx_en(data)                                     (0x00000001&(data))
#define  EARC_eARC_CMDC_REQ_get_capability_mode(data)                            ((0x80000000&(data))>>31)
#define  EARC_eARC_CMDC_REQ_get_capability_stop(data)                            ((0x40000000&(data))>>30)
#define  EARC_eARC_CMDC_REQ_get_heartbeat_en(data)                               ((0x01000000&(data))>>24)
#define  EARC_eARC_CMDC_REQ_get_force_trans_state(data)                          ((0x00C00000&(data))>>22)
#define  EARC_eARC_CMDC_REQ_get_continue_status(data)                            ((0x00200000&(data))>>21)
#define  EARC_eARC_CMDC_REQ_get_rdata_len(data)                                  ((0x001FE000&(data))>>13)
#define  EARC_eARC_CMDC_REQ_get_earc_hpd_status(data)                            ((0x00001000&(data))>>12)
#define  EARC_eARC_CMDC_REQ_get_trans_state(data)                                ((0x00000F00&(data))>>8)
#define  EARC_eARC_CMDC_REQ_get_disc_state(data)                                 ((0x000000F0&(data))>>4)
#define  EARC_eARC_CMDC_REQ_get_request_case(data)                               ((0x00000008&(data))>>3)
#define  EARC_eARC_CMDC_REQ_get_fw_req(data)                                     ((0x00000004&(data))>>2)
#define  EARC_eARC_CMDC_REQ_get_hdmi_hpd(data)                                   ((0x00000002&(data))>>1)
#define  EARC_eARC_CMDC_REQ_get_cmdc_tx_en(data)                                 (0x00000001&(data))

#define  EARC_eARC_CMDC_PAYLOAD                                                 0x18006DCC
#define  EARC_eARC_CMDC_PAYLOAD_reg_addr                                         "0xB8006DCC"
#define  EARC_eARC_CMDC_PAYLOAD_reg                                              0xB8006DCC
#define  EARC_eARC_CMDC_PAYLOAD_inst_addr                                        "0x001F"
#define  set_EARC_eARC_CMDC_PAYLOAD_reg(data)                                    (*((volatile unsigned int*)EARC_eARC_CMDC_PAYLOAD_reg)=data)
#define  get_EARC_eARC_CMDC_PAYLOAD_reg                                          (*((volatile unsigned int*)EARC_eARC_CMDC_PAYLOAD_reg))
#define  EARC_eARC_CMDC_PAYLOAD_device_id_shift                                  (8)
#define  EARC_eARC_CMDC_PAYLOAD_offset_shift                                     (0)
#define  EARC_eARC_CMDC_PAYLOAD_device_id_mask                                   (0x0000FF00)
#define  EARC_eARC_CMDC_PAYLOAD_offset_mask                                      (0x000000FF)
#define  EARC_eARC_CMDC_PAYLOAD_device_id(data)                                  (0x0000FF00&((data)<<8))
#define  EARC_eARC_CMDC_PAYLOAD_offset(data)                                     (0x000000FF&(data))
#define  EARC_eARC_CMDC_PAYLOAD_get_device_id(data)                              ((0x0000FF00&(data))>>8)
#define  EARC_eARC_CMDC_PAYLOAD_get_offset(data)                                 (0x000000FF&(data))

#define  EARC_eARC_CMDC_WRITE                                                   0x18006DD0
#define  EARC_eARC_CMDC_WRITE_reg_addr                                           "0xB8006DD0"
#define  EARC_eARC_CMDC_WRITE_reg                                                0xB8006DD0
#define  EARC_eARC_CMDC_WRITE_inst_addr                                          "0x0020"
#define  set_EARC_eARC_CMDC_WRITE_reg(data)                                      (*((volatile unsigned int*)EARC_eARC_CMDC_WRITE_reg)=data)
#define  get_EARC_eARC_CMDC_WRITE_reg                                            (*((volatile unsigned int*)EARC_eARC_CMDC_WRITE_reg))
#define  EARC_eARC_CMDC_WRITE_write_data_shift                                   (0)
#define  EARC_eARC_CMDC_WRITE_write_data_mask                                    (0x000000FF)
#define  EARC_eARC_CMDC_WRITE_write_data(data)                                   (0x000000FF&(data))
#define  EARC_eARC_CMDC_WRITE_get_write_data(data)                               (0x000000FF&(data))

#define  EARC_eARC_CMDC_READ                                                    0x18006DD4
#define  EARC_eARC_CMDC_READ_reg_addr                                            "0xB8006DD4"
#define  EARC_eARC_CMDC_READ_reg                                                 0xB8006DD4
#define  EARC_eARC_CMDC_READ_inst_addr                                           "0x0021"
#define  set_EARC_eARC_CMDC_READ_reg(data)                                       (*((volatile unsigned int*)EARC_eARC_CMDC_READ_reg)=data)
#define  get_EARC_eARC_CMDC_READ_reg                                             (*((volatile unsigned int*)EARC_eARC_CMDC_READ_reg))
#define  EARC_eARC_CMDC_READ_read_data_shift                                     (0)
#define  EARC_eARC_CMDC_READ_read_data_mask                                      (0xFFFFFFFF)
#define  EARC_eARC_CMDC_READ_read_data(data)                                     (0xFFFFFFFF&(data))
#define  EARC_eARC_CMDC_READ_get_read_data(data)                                 (0xFFFFFFFF&(data))

#define  EARC_eARC_CMDC_NACK_UECC                                               0x18006DD8
#define  EARC_eARC_CMDC_NACK_UECC_reg_addr                                       "0xB8006DD8"
#define  EARC_eARC_CMDC_NACK_UECC_reg                                            0xB8006DD8
#define  EARC_eARC_CMDC_NACK_UECC_inst_addr                                      "0x0022"
#define  set_EARC_eARC_CMDC_NACK_UECC_reg(data)                                  (*((volatile unsigned int*)EARC_eARC_CMDC_NACK_UECC_reg)=data)
#define  get_EARC_eARC_CMDC_NACK_UECC_reg                                        (*((volatile unsigned int*)EARC_eARC_CMDC_NACK_UECC_reg))
#define  EARC_eARC_CMDC_NACK_UECC_write_nack_num_shift                           (16)
#define  EARC_eARC_CMDC_NACK_UECC_read_nack_num_shift                            (8)
#define  EARC_eARC_CMDC_NACK_UECC_read_uecc_num_shift                            (0)
#define  EARC_eARC_CMDC_NACK_UECC_write_nack_num_mask                            (0x00FF0000)
#define  EARC_eARC_CMDC_NACK_UECC_read_nack_num_mask                             (0x0000FF00)
#define  EARC_eARC_CMDC_NACK_UECC_read_uecc_num_mask                             (0x000000FF)
#define  EARC_eARC_CMDC_NACK_UECC_write_nack_num(data)                           (0x00FF0000&((data)<<16))
#define  EARC_eARC_CMDC_NACK_UECC_read_nack_num(data)                            (0x0000FF00&((data)<<8))
#define  EARC_eARC_CMDC_NACK_UECC_read_uecc_num(data)                            (0x000000FF&(data))
#define  EARC_eARC_CMDC_NACK_UECC_get_write_nack_num(data)                       ((0x00FF0000&(data))>>16)
#define  EARC_eARC_CMDC_NACK_UECC_get_read_nack_num(data)                        ((0x0000FF00&(data))>>8)
#define  EARC_eARC_CMDC_NACK_UECC_get_read_uecc_num(data)                        (0x000000FF&(data))

#define  EARC_eARC_CMDC_IRQ                                                     0x18006DDC
#define  EARC_eARC_CMDC_IRQ_reg_addr                                             "0xB8006DDC"
#define  EARC_eARC_CMDC_IRQ_reg                                                  0xB8006DDC
#define  EARC_eARC_CMDC_IRQ_inst_addr                                            "0x0023"
#define  set_EARC_eARC_CMDC_IRQ_reg(data)                                        (*((volatile unsigned int*)EARC_eARC_CMDC_IRQ_reg)=data)
#define  get_EARC_eARC_CMDC_IRQ_reg                                              (*((volatile unsigned int*)EARC_eARC_CMDC_IRQ_reg))
#define  EARC_eARC_CMDC_IRQ_write_nack_irq_shift                                 (13)
#define  EARC_eARC_CMDC_IRQ_read_nack_irq_shift                                  (12)
#define  EARC_eARC_CMDC_IRQ_read_uecc_irq_shift                                  (11)
#define  EARC_eARC_CMDC_IRQ_request_fin_irq_shift                                (10)
#define  EARC_eARC_CMDC_IRQ_rdata_valid_irq_shift                                (9)
#define  EARC_eARC_CMDC_IRQ_comma_timeout_irq_shift                              (8)
#define  EARC_eARC_CMDC_IRQ_heartbeat_ack_irq_shift                              (7)
#define  EARC_eARC_CMDC_IRQ_lost_heartbeat_irq_shift                             (6)
#define  EARC_eARC_CMDC_IRQ_err_uecc_irq_shift                                   (5)
#define  EARC_eARC_CMDC_IRQ_no_response_irq_shift                                (4)
#define  EARC_eARC_CMDC_IRQ_unexp_response_irq_shift                             (3)
#define  EARC_eARC_CMDC_IRQ_start_chng_irq_shift                                 (2)
#define  EARC_eARC_CMDC_IRQ_cap_chng_irq_shift                                   (1)
#define  EARC_eARC_CMDC_IRQ_earc_hpd_irq_shift                                   (0)
#define  EARC_eARC_CMDC_IRQ_write_nack_irq_mask                                  (0x00002000)
#define  EARC_eARC_CMDC_IRQ_read_nack_irq_mask                                   (0x00001000)
#define  EARC_eARC_CMDC_IRQ_read_uecc_irq_mask                                   (0x00000800)
#define  EARC_eARC_CMDC_IRQ_request_fin_irq_mask                                 (0x00000400)
#define  EARC_eARC_CMDC_IRQ_rdata_valid_irq_mask                                 (0x00000200)
#define  EARC_eARC_CMDC_IRQ_comma_timeout_irq_mask                               (0x00000100)
#define  EARC_eARC_CMDC_IRQ_heartbeat_ack_irq_mask                               (0x00000080)
#define  EARC_eARC_CMDC_IRQ_lost_heartbeat_irq_mask                              (0x00000040)
#define  EARC_eARC_CMDC_IRQ_err_uecc_irq_mask                                    (0x00000020)
#define  EARC_eARC_CMDC_IRQ_no_response_irq_mask                                 (0x00000010)
#define  EARC_eARC_CMDC_IRQ_unexp_response_irq_mask                              (0x00000008)
#define  EARC_eARC_CMDC_IRQ_start_chng_irq_mask                                  (0x00000004)
#define  EARC_eARC_CMDC_IRQ_cap_chng_irq_mask                                    (0x00000002)
#define  EARC_eARC_CMDC_IRQ_earc_hpd_irq_mask                                    (0x00000001)
#define  EARC_eARC_CMDC_IRQ_write_nack_irq(data)                                 (0x00002000&((data)<<13))
#define  EARC_eARC_CMDC_IRQ_read_nack_irq(data)                                  (0x00001000&((data)<<12))
#define  EARC_eARC_CMDC_IRQ_read_uecc_irq(data)                                  (0x00000800&((data)<<11))
#define  EARC_eARC_CMDC_IRQ_request_fin_irq(data)                                (0x00000400&((data)<<10))
#define  EARC_eARC_CMDC_IRQ_rdata_valid_irq(data)                                (0x00000200&((data)<<9))
#define  EARC_eARC_CMDC_IRQ_comma_timeout_irq(data)                              (0x00000100&((data)<<8))
#define  EARC_eARC_CMDC_IRQ_heartbeat_ack_irq(data)                              (0x00000080&((data)<<7))
#define  EARC_eARC_CMDC_IRQ_lost_heartbeat_irq(data)                             (0x00000040&((data)<<6))
#define  EARC_eARC_CMDC_IRQ_err_uecc_irq(data)                                   (0x00000020&((data)<<5))
#define  EARC_eARC_CMDC_IRQ_no_response_irq(data)                                (0x00000010&((data)<<4))
#define  EARC_eARC_CMDC_IRQ_unexp_response_irq(data)                             (0x00000008&((data)<<3))
#define  EARC_eARC_CMDC_IRQ_start_chng_irq(data)                                 (0x00000004&((data)<<2))
#define  EARC_eARC_CMDC_IRQ_cap_chng_irq(data)                                   (0x00000002&((data)<<1))
#define  EARC_eARC_CMDC_IRQ_earc_hpd_irq(data)                                   (0x00000001&(data))
#define  EARC_eARC_CMDC_IRQ_get_write_nack_irq(data)                             ((0x00002000&(data))>>13)
#define  EARC_eARC_CMDC_IRQ_get_read_nack_irq(data)                              ((0x00001000&(data))>>12)
#define  EARC_eARC_CMDC_IRQ_get_read_uecc_irq(data)                              ((0x00000800&(data))>>11)
#define  EARC_eARC_CMDC_IRQ_get_request_fin_irq(data)                            ((0x00000400&(data))>>10)
#define  EARC_eARC_CMDC_IRQ_get_rdata_valid_irq(data)                            ((0x00000200&(data))>>9)
#define  EARC_eARC_CMDC_IRQ_get_comma_timeout_irq(data)                          ((0x00000100&(data))>>8)
#define  EARC_eARC_CMDC_IRQ_get_heartbeat_ack_irq(data)                          ((0x00000080&(data))>>7)
#define  EARC_eARC_CMDC_IRQ_get_lost_heartbeat_irq(data)                         ((0x00000040&(data))>>6)
#define  EARC_eARC_CMDC_IRQ_get_err_uecc_irq(data)                               ((0x00000020&(data))>>5)
#define  EARC_eARC_CMDC_IRQ_get_no_response_irq(data)                            ((0x00000010&(data))>>4)
#define  EARC_eARC_CMDC_IRQ_get_unexp_response_irq(data)                         ((0x00000008&(data))>>3)
#define  EARC_eARC_CMDC_IRQ_get_start_chng_irq(data)                             ((0x00000004&(data))>>2)
#define  EARC_eARC_CMDC_IRQ_get_cap_chng_irq(data)                               ((0x00000002&(data))>>1)
#define  EARC_eARC_CMDC_IRQ_get_earc_hpd_irq(data)                               (0x00000001&(data))

#define  EARC_eARC_CMDC_IRQ_EN                                                  0x18006DE0
#define  EARC_eARC_CMDC_IRQ_EN_reg_addr                                          "0xB8006DE0"
#define  EARC_eARC_CMDC_IRQ_EN_reg                                               0xB8006DE0
#define  EARC_eARC_CMDC_IRQ_EN_inst_addr                                         "0x0024"
#define  set_EARC_eARC_CMDC_IRQ_EN_reg(data)                                     (*((volatile unsigned int*)EARC_eARC_CMDC_IRQ_EN_reg)=data)
#define  get_EARC_eARC_CMDC_IRQ_EN_reg                                           (*((volatile unsigned int*)EARC_eARC_CMDC_IRQ_EN_reg))
#define  EARC_eARC_CMDC_IRQ_EN_write_nack_irq_en_shift                           (13)
#define  EARC_eARC_CMDC_IRQ_EN_read_nack_irq_en_shift                            (12)
#define  EARC_eARC_CMDC_IRQ_EN_read_uecc_irq_en_shift                            (11)
#define  EARC_eARC_CMDC_IRQ_EN_request_fin_irq_en_shift                          (10)
#define  EARC_eARC_CMDC_IRQ_EN_rdata_valid_irq_en_shift                          (9)
#define  EARC_eARC_CMDC_IRQ_EN_comma_timeout_irq_en_shift                        (8)
#define  EARC_eARC_CMDC_IRQ_EN_heartbeat_ack_irq_en_shift                        (7)
#define  EARC_eARC_CMDC_IRQ_EN_lost_heartbeat_irq_en_shift                       (6)
#define  EARC_eARC_CMDC_IRQ_EN_err_uecc_irq_en_shift                             (5)
#define  EARC_eARC_CMDC_IRQ_EN_no_response_irq_en_shift                          (4)
#define  EARC_eARC_CMDC_IRQ_EN_unexp_response_irq_en_shift                       (3)
#define  EARC_eARC_CMDC_IRQ_EN_start_chng_irq_en_shift                           (2)
#define  EARC_eARC_CMDC_IRQ_EN_cap_chng_irq_en_shift                             (1)
#define  EARC_eARC_CMDC_IRQ_EN_earc_hpd_irq_en_shift                             (0)
#define  EARC_eARC_CMDC_IRQ_EN_write_nack_irq_en_mask                            (0x00002000)
#define  EARC_eARC_CMDC_IRQ_EN_read_nack_irq_en_mask                             (0x00001000)
#define  EARC_eARC_CMDC_IRQ_EN_read_uecc_irq_en_mask                             (0x00000800)
#define  EARC_eARC_CMDC_IRQ_EN_request_fin_irq_en_mask                           (0x00000400)
#define  EARC_eARC_CMDC_IRQ_EN_rdata_valid_irq_en_mask                           (0x00000200)
#define  EARC_eARC_CMDC_IRQ_EN_comma_timeout_irq_en_mask                         (0x00000100)
#define  EARC_eARC_CMDC_IRQ_EN_heartbeat_ack_irq_en_mask                         (0x00000080)
#define  EARC_eARC_CMDC_IRQ_EN_lost_heartbeat_irq_en_mask                        (0x00000040)
#define  EARC_eARC_CMDC_IRQ_EN_err_uecc_irq_en_mask                              (0x00000020)
#define  EARC_eARC_CMDC_IRQ_EN_no_response_irq_en_mask                           (0x00000010)
#define  EARC_eARC_CMDC_IRQ_EN_unexp_response_irq_en_mask                        (0x00000008)
#define  EARC_eARC_CMDC_IRQ_EN_start_chng_irq_en_mask                            (0x00000004)
#define  EARC_eARC_CMDC_IRQ_EN_cap_chng_irq_en_mask                              (0x00000002)
#define  EARC_eARC_CMDC_IRQ_EN_earc_hpd_irq_en_mask                              (0x00000001)
#define  EARC_eARC_CMDC_IRQ_EN_write_nack_irq_en(data)                           (0x00002000&((data)<<13))
#define  EARC_eARC_CMDC_IRQ_EN_read_nack_irq_en(data)                            (0x00001000&((data)<<12))
#define  EARC_eARC_CMDC_IRQ_EN_read_uecc_irq_en(data)                            (0x00000800&((data)<<11))
#define  EARC_eARC_CMDC_IRQ_EN_request_fin_irq_en(data)                          (0x00000400&((data)<<10))
#define  EARC_eARC_CMDC_IRQ_EN_rdata_valid_irq_en(data)                          (0x00000200&((data)<<9))
#define  EARC_eARC_CMDC_IRQ_EN_comma_timeout_irq_en(data)                        (0x00000100&((data)<<8))
#define  EARC_eARC_CMDC_IRQ_EN_heartbeat_ack_irq_en(data)                        (0x00000080&((data)<<7))
#define  EARC_eARC_CMDC_IRQ_EN_lost_heartbeat_irq_en(data)                       (0x00000040&((data)<<6))
#define  EARC_eARC_CMDC_IRQ_EN_err_uecc_irq_en(data)                             (0x00000020&((data)<<5))
#define  EARC_eARC_CMDC_IRQ_EN_no_response_irq_en(data)                          (0x00000010&((data)<<4))
#define  EARC_eARC_CMDC_IRQ_EN_unexp_response_irq_en(data)                       (0x00000008&((data)<<3))
#define  EARC_eARC_CMDC_IRQ_EN_start_chng_irq_en(data)                           (0x00000004&((data)<<2))
#define  EARC_eARC_CMDC_IRQ_EN_cap_chng_irq_en(data)                             (0x00000002&((data)<<1))
#define  EARC_eARC_CMDC_IRQ_EN_earc_hpd_irq_en(data)                             (0x00000001&(data))
#define  EARC_eARC_CMDC_IRQ_EN_get_write_nack_irq_en(data)                       ((0x00002000&(data))>>13)
#define  EARC_eARC_CMDC_IRQ_EN_get_read_nack_irq_en(data)                        ((0x00001000&(data))>>12)
#define  EARC_eARC_CMDC_IRQ_EN_get_read_uecc_irq_en(data)                        ((0x00000800&(data))>>11)
#define  EARC_eARC_CMDC_IRQ_EN_get_request_fin_irq_en(data)                      ((0x00000400&(data))>>10)
#define  EARC_eARC_CMDC_IRQ_EN_get_rdata_valid_irq_en(data)                      ((0x00000200&(data))>>9)
#define  EARC_eARC_CMDC_IRQ_EN_get_comma_timeout_irq_en(data)                    ((0x00000100&(data))>>8)
#define  EARC_eARC_CMDC_IRQ_EN_get_heartbeat_ack_irq_en(data)                    ((0x00000080&(data))>>7)
#define  EARC_eARC_CMDC_IRQ_EN_get_lost_heartbeat_irq_en(data)                   ((0x00000040&(data))>>6)
#define  EARC_eARC_CMDC_IRQ_EN_get_err_uecc_irq_en(data)                         ((0x00000020&(data))>>5)
#define  EARC_eARC_CMDC_IRQ_EN_get_no_response_irq_en(data)                      ((0x00000010&(data))>>4)
#define  EARC_eARC_CMDC_IRQ_EN_get_unexp_response_irq_en(data)                   ((0x00000008&(data))>>3)
#define  EARC_eARC_CMDC_IRQ_EN_get_start_chng_irq_en(data)                       ((0x00000004&(data))>>2)
#define  EARC_eARC_CMDC_IRQ_EN_get_cap_chng_irq_en(data)                         ((0x00000002&(data))>>1)
#define  EARC_eARC_CMDC_IRQ_EN_get_earc_hpd_irq_en(data)                         (0x00000001&(data))

#define  EARC_eARC_CMDC_DEBUG                                                   0x18006DE4
#define  EARC_eARC_CMDC_DEBUG_reg_addr                                           "0xB8006DE4"
#define  EARC_eARC_CMDC_DEBUG_reg                                                0xB8006DE4
#define  EARC_eARC_CMDC_DEBUG_inst_addr                                          "0x0025"
#define  set_EARC_eARC_CMDC_DEBUG_reg(data)                                      (*((volatile unsigned int*)EARC_eARC_CMDC_DEBUG_reg)=data)
#define  get_EARC_eARC_CMDC_DEBUG_reg                                            (*((volatile unsigned int*)EARC_eARC_CMDC_DEBUG_reg))
#define  EARC_eARC_CMDC_DEBUG_debug_rdata_shift                                  (16)
#define  EARC_eARC_CMDC_DEBUG_debug_trans_state_shift                            (8)
#define  EARC_eARC_CMDC_DEBUG_debug_disc_state_shift                             (0)
#define  EARC_eARC_CMDC_DEBUG_debug_rdata_mask                                   (0x00FF0000)
#define  EARC_eARC_CMDC_DEBUG_debug_trans_state_mask                             (0x00000F00)
#define  EARC_eARC_CMDC_DEBUG_debug_disc_state_mask                              (0x0000000F)
#define  EARC_eARC_CMDC_DEBUG_debug_rdata(data)                                  (0x00FF0000&((data)<<16))
#define  EARC_eARC_CMDC_DEBUG_debug_trans_state(data)                            (0x00000F00&((data)<<8))
#define  EARC_eARC_CMDC_DEBUG_debug_disc_state(data)                             (0x0000000F&(data))
#define  EARC_eARC_CMDC_DEBUG_get_debug_rdata(data)                              ((0x00FF0000&(data))>>16)
#define  EARC_eARC_CMDC_DEBUG_get_debug_trans_state(data)                        ((0x00000F00&(data))>>8)
#define  EARC_eARC_CMDC_DEBUG_get_debug_disc_state(data)                         (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======EARC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  non_pcm_ecc_sel:1;
        RBus_UInt32  crc_result_mode:1;
        RBus_UInt32  nonpcm_layout_sel:1;
        RBus_UInt32  c_bit_ready_flag:1;
        RBus_UInt32  u_bit_ready_flag:1;
        RBus_UInt32  valid_flag:1;
        RBus_UInt32  df_output_sel:1;
        RBus_UInt32  channel_num:2;
        RBus_UInt32  data_type:1;
        RBus_UInt32  earc_tx_df_en:1;
    };
}earc_earc_tx_dmac_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  df_src_sel_ch67:2;
        RBus_UInt32  df_src_sel_ch45:2;
        RBus_UInt32  df_src_sel_ch23:2;
        RBus_UInt32  swap_sel_ch67:2;
        RBus_UInt32  swap_sel_ch45:2;
        RBus_UInt32  swap_sel_ch23:2;
        RBus_UInt32  swap_sel_ch01:2;
        RBus_UInt32  data_source_sel_ch67:4;
        RBus_UInt32  data_source_sel_ch45:4;
        RBus_UInt32  data_source_sel_ch23:4;
        RBus_UInt32  data_source_sel_ch01:4;
    };
}earc_earc_tx_dmac_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_lb3_31_30:2;
        RBus_UInt32  clock_accuracy_l:2;
        RBus_UInt32  sampling_freq_l:4;
        RBus_UInt32  channel_number_l:4;
        RBus_UInt32  source_number_l:4;
        RBus_UInt32  category_code_l:8;
        RBus_UInt32  mode_l:2;
        RBus_UInt32  pre_emphasis_l:3;
        RBus_UInt32  copyright_l:1;
        RBus_UInt32  data_type_l:1;
        RBus_UInt32  professional:1;
    };
}earc_earc_tx_dmac_cs_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  layout_channel_num_l:4;
        RBus_UInt32  cs_lb5_43:1;
        RBus_UInt32  cs_lb5_42:1;
        RBus_UInt32  cgms_a_l:2;
        RBus_UInt32  original_sampling_freq_l:4;
        RBus_UInt32  cs_lb4_35_32:4;
    };
}earc_earc_tx_dmac_cs_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cs_byte_7_6_l:16;
    };
}earc_earc_tx_dmac_cs_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_11_8_l:32;
    };
}earc_earc_tx_dmac_cs_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_15_12_l:32;
    };
}earc_earc_tx_dmac_cs_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_19_16_l:32;
    };
}earc_earc_tx_dmac_cs_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_23_20_l:32;
    };
}earc_earc_tx_dmac_cs_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_rb3_31_30:2;
        RBus_UInt32  clock_accuracy_r:2;
        RBus_UInt32  sampling_freq_r:4;
        RBus_UInt32  channel_number_r:4;
        RBus_UInt32  source_number_r:4;
        RBus_UInt32  category_code_r:8;
        RBus_UInt32  mode_r:2;
        RBus_UInt32  pre_emphasis_r:3;
        RBus_UInt32  copyright_r:1;
        RBus_UInt32  data_type_r:1;
        RBus_UInt32  professional_r:1;
    };
}earc_earc_tx_dmac_cs_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  layout_channel_num_r:4;
        RBus_UInt32  cs_rb5_43:1;
        RBus_UInt32  cs_rb5_42:1;
        RBus_UInt32  cgms_a_r:2;
        RBus_UInt32  original_sampling_freq_r:4;
        RBus_UInt32  cs_rb4_35_32:4;
    };
}earc_earc_tx_dmac_cs_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  cs_byte_7_6_r:16;
    };
}earc_earc_tx_dmac_cs_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_11_8_r:32;
    };
}earc_earc_tx_dmac_cs_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_15_12_r:32;
    };
}earc_earc_tx_dmac_cs_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_19_16_r:32;
    };
}earc_earc_tx_dmac_cs_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_23_20_r:32;
    };
}earc_earc_tx_dmac_cs_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_3_0:32;
    };
}earc_earc_tx_dmac_u_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_7_4:32;
    };
}earc_earc_tx_dmac_u_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_11_8:32;
    };
}earc_earc_tx_dmac_u_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_15_12:32;
    };
}earc_earc_tx_dmac_u_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_19_16:32;
    };
}earc_earc_tx_dmac_u_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_23_20:32;
    };
}earc_earc_tx_dmac_u_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_27_24:32;
    };
}earc_earc_tx_dmac_u_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_31_28:32;
    };
}earc_earc_tx_dmac_u_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_35_32:32;
    };
}earc_earc_tx_dmac_u_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_39_36:32;
    };
}earc_earc_tx_dmac_u_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_43_40:32;
    };
}earc_earc_tx_dmac_u_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  iu_byte_46_44:24;
    };
}earc_earc_tx_dmac_u_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tx_disconn:6;
        RBus_UInt32  tx_timeout:3;
        RBus_UInt32  tx_connearc_valid:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  tx_conn_comma_count:5;
        RBus_UInt32  tx_conn_comma_off_max:4;
        RBus_UInt32  tx_conn_comma_off_min:4;
        RBus_UInt32  res2:5;
    };
}earc_earc_cmdc_timing0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tx_conn_comma_on_max:4;
        RBus_UInt32  tx_conn_comma_on_min:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  tx_format_chg:8;
        RBus_UInt32  lost_heartbeat:5;
        RBus_UInt32  heartbeat:4;
    };
}earc_earc_cmdc_timing1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  capability_mode:1;
        RBus_UInt32  capability_stop:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  heartbeat_en:1;
        RBus_UInt32  force_trans_state:2;
        RBus_UInt32  continue_status:1;
        RBus_UInt32  rdata_len:8;
        RBus_UInt32  earc_hpd_status:1;
        RBus_UInt32  trans_state:4;
        RBus_UInt32  disc_state:4;
        RBus_UInt32  request_case:1;
        RBus_UInt32  fw_req:1;
        RBus_UInt32  hdmi_hpd:1;
        RBus_UInt32  cmdc_tx_en:1;
    };
}earc_earc_cmdc_req_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  device_id:8;
        RBus_UInt32  offset:8;
    };
}earc_earc_cmdc_payload_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  write_data:8;
    };
}earc_earc_cmdc_write_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  read_data:32;
    };
}earc_earc_cmdc_read_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  write_nack_num:8;
        RBus_UInt32  read_nack_num:8;
        RBus_UInt32  read_uecc_num:8;
    };
}earc_earc_cmdc_nack_uecc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  write_nack_irq:1;
        RBus_UInt32  read_nack_irq:1;
        RBus_UInt32  read_uecc_irq:1;
        RBus_UInt32  request_fin_irq:1;
        RBus_UInt32  rdata_valid_irq:1;
        RBus_UInt32  comma_timeout_irq:1;
        RBus_UInt32  heartbeat_ack_irq:1;
        RBus_UInt32  lost_heartbeat_irq:1;
        RBus_UInt32  err_uecc_irq:1;
        RBus_UInt32  no_response_irq:1;
        RBus_UInt32  unexp_response_irq:1;
        RBus_UInt32  start_chng_irq:1;
        RBus_UInt32  cap_chng_irq:1;
        RBus_UInt32  earc_hpd_irq:1;
    };
}earc_earc_cmdc_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  write_nack_irq_en:1;
        RBus_UInt32  read_nack_irq_en:1;
        RBus_UInt32  read_uecc_irq_en:1;
        RBus_UInt32  request_fin_irq_en:1;
        RBus_UInt32  rdata_valid_irq_en:1;
        RBus_UInt32  comma_timeout_irq_en:1;
        RBus_UInt32  heartbeat_ack_irq_en:1;
        RBus_UInt32  lost_heartbeat_irq_en:1;
        RBus_UInt32  err_uecc_irq_en:1;
        RBus_UInt32  no_response_irq_en:1;
        RBus_UInt32  unexp_response_irq_en:1;
        RBus_UInt32  start_chng_irq_en:1;
        RBus_UInt32  cap_chng_irq_en:1;
        RBus_UInt32  earc_hpd_irq_en:1;
    };
}earc_earc_cmdc_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  debug_rdata:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  debug_trans_state:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  debug_disc_state:4;
    };
}earc_earc_cmdc_debug_RBUS;

#else //apply LITTLE_ENDIAN

//======EARC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  earc_tx_df_en:1;
        RBus_UInt32  data_type:1;
        RBus_UInt32  channel_num:2;
        RBus_UInt32  df_output_sel:1;
        RBus_UInt32  valid_flag:1;
        RBus_UInt32  u_bit_ready_flag:1;
        RBus_UInt32  c_bit_ready_flag:1;
        RBus_UInt32  nonpcm_layout_sel:1;
        RBus_UInt32  crc_result_mode:1;
        RBus_UInt32  non_pcm_ecc_sel:1;
        RBus_UInt32  res1:21;
    };
}earc_earc_tx_dmac_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_source_sel_ch01:4;
        RBus_UInt32  data_source_sel_ch23:4;
        RBus_UInt32  data_source_sel_ch45:4;
        RBus_UInt32  data_source_sel_ch67:4;
        RBus_UInt32  swap_sel_ch01:2;
        RBus_UInt32  swap_sel_ch23:2;
        RBus_UInt32  swap_sel_ch45:2;
        RBus_UInt32  swap_sel_ch67:2;
        RBus_UInt32  df_src_sel_ch23:2;
        RBus_UInt32  df_src_sel_ch45:2;
        RBus_UInt32  df_src_sel_ch67:2;
        RBus_UInt32  res1:2;
    };
}earc_earc_tx_dmac_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  professional:1;
        RBus_UInt32  data_type_l:1;
        RBus_UInt32  copyright_l:1;
        RBus_UInt32  pre_emphasis_l:3;
        RBus_UInt32  mode_l:2;
        RBus_UInt32  category_code_l:8;
        RBus_UInt32  source_number_l:4;
        RBus_UInt32  channel_number_l:4;
        RBus_UInt32  sampling_freq_l:4;
        RBus_UInt32  clock_accuracy_l:2;
        RBus_UInt32  cs_lb3_31_30:2;
    };
}earc_earc_tx_dmac_cs_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_lb4_35_32:4;
        RBus_UInt32  original_sampling_freq_l:4;
        RBus_UInt32  cgms_a_l:2;
        RBus_UInt32  cs_lb5_42:1;
        RBus_UInt32  cs_lb5_43:1;
        RBus_UInt32  layout_channel_num_l:4;
        RBus_UInt32  res1:16;
    };
}earc_earc_tx_dmac_cs_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_7_6_l:16;
        RBus_UInt32  res1:16;
    };
}earc_earc_tx_dmac_cs_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_11_8_l:32;
    };
}earc_earc_tx_dmac_cs_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_15_12_l:32;
    };
}earc_earc_tx_dmac_cs_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_19_16_l:32;
    };
}earc_earc_tx_dmac_cs_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_23_20_l:32;
    };
}earc_earc_tx_dmac_cs_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  professional_r:1;
        RBus_UInt32  data_type_r:1;
        RBus_UInt32  copyright_r:1;
        RBus_UInt32  pre_emphasis_r:3;
        RBus_UInt32  mode_r:2;
        RBus_UInt32  category_code_r:8;
        RBus_UInt32  source_number_r:4;
        RBus_UInt32  channel_number_r:4;
        RBus_UInt32  sampling_freq_r:4;
        RBus_UInt32  clock_accuracy_r:2;
        RBus_UInt32  cs_rb3_31_30:2;
    };
}earc_earc_tx_dmac_cs_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_rb4_35_32:4;
        RBus_UInt32  original_sampling_freq_r:4;
        RBus_UInt32  cgms_a_r:2;
        RBus_UInt32  cs_rb5_42:1;
        RBus_UInt32  cs_rb5_43:1;
        RBus_UInt32  layout_channel_num_r:4;
        RBus_UInt32  res1:16;
    };
}earc_earc_tx_dmac_cs_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_7_6_r:16;
        RBus_UInt32  res1:16;
    };
}earc_earc_tx_dmac_cs_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_11_8_r:32;
    };
}earc_earc_tx_dmac_cs_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_15_12_r:32;
    };
}earc_earc_tx_dmac_cs_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_19_16_r:32;
    };
}earc_earc_tx_dmac_cs_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_byte_23_20_r:32;
    };
}earc_earc_tx_dmac_cs_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_3_0:32;
    };
}earc_earc_tx_dmac_u_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_7_4:32;
    };
}earc_earc_tx_dmac_u_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_11_8:32;
    };
}earc_earc_tx_dmac_u_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_15_12:32;
    };
}earc_earc_tx_dmac_u_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_19_16:32;
    };
}earc_earc_tx_dmac_u_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_23_20:32;
    };
}earc_earc_tx_dmac_u_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_27_24:32;
    };
}earc_earc_tx_dmac_u_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_31_28:32;
    };
}earc_earc_tx_dmac_u_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_35_32:32;
    };
}earc_earc_tx_dmac_u_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_39_36:32;
    };
}earc_earc_tx_dmac_u_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_43_40:32;
    };
}earc_earc_tx_dmac_u_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iu_byte_46_44:24;
        RBus_UInt32  res1:8;
    };
}earc_earc_tx_dmac_u_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  tx_conn_comma_off_min:4;
        RBus_UInt32  tx_conn_comma_off_max:4;
        RBus_UInt32  tx_conn_comma_count:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  tx_connearc_valid:4;
        RBus_UInt32  tx_timeout:3;
        RBus_UInt32  tx_disconn:6;
    };
}earc_earc_cmdc_timing0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  heartbeat:4;
        RBus_UInt32  lost_heartbeat:5;
        RBus_UInt32  tx_format_chg:8;
        RBus_UInt32  res1:3;
        RBus_UInt32  tx_conn_comma_on_min:4;
        RBus_UInt32  tx_conn_comma_on_max:4;
        RBus_UInt32  res2:4;
    };
}earc_earc_cmdc_timing1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmdc_tx_en:1;
        RBus_UInt32  hdmi_hpd:1;
        RBus_UInt32  fw_req:1;
        RBus_UInt32  request_case:1;
        RBus_UInt32  disc_state:4;
        RBus_UInt32  trans_state:4;
        RBus_UInt32  earc_hpd_status:1;
        RBus_UInt32  rdata_len:8;
        RBus_UInt32  continue_status:1;
        RBus_UInt32  force_trans_state:2;
        RBus_UInt32  heartbeat_en:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  capability_stop:1;
        RBus_UInt32  capability_mode:1;
    };
}earc_earc_cmdc_req_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  offset:8;
        RBus_UInt32  device_id:8;
        RBus_UInt32  res1:16;
    };
}earc_earc_cmdc_payload_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:8;
        RBus_UInt32  res1:24;
    };
}earc_earc_cmdc_write_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  read_data:32;
    };
}earc_earc_cmdc_read_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  read_uecc_num:8;
        RBus_UInt32  read_nack_num:8;
        RBus_UInt32  write_nack_num:8;
        RBus_UInt32  res1:8;
    };
}earc_earc_cmdc_nack_uecc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  earc_hpd_irq:1;
        RBus_UInt32  cap_chng_irq:1;
        RBus_UInt32  start_chng_irq:1;
        RBus_UInt32  unexp_response_irq:1;
        RBus_UInt32  no_response_irq:1;
        RBus_UInt32  err_uecc_irq:1;
        RBus_UInt32  lost_heartbeat_irq:1;
        RBus_UInt32  heartbeat_ack_irq:1;
        RBus_UInt32  comma_timeout_irq:1;
        RBus_UInt32  rdata_valid_irq:1;
        RBus_UInt32  request_fin_irq:1;
        RBus_UInt32  read_uecc_irq:1;
        RBus_UInt32  read_nack_irq:1;
        RBus_UInt32  write_nack_irq:1;
        RBus_UInt32  res1:18;
    };
}earc_earc_cmdc_irq_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  earc_hpd_irq_en:1;
        RBus_UInt32  cap_chng_irq_en:1;
        RBus_UInt32  start_chng_irq_en:1;
        RBus_UInt32  unexp_response_irq_en:1;
        RBus_UInt32  no_response_irq_en:1;
        RBus_UInt32  err_uecc_irq_en:1;
        RBus_UInt32  lost_heartbeat_irq_en:1;
        RBus_UInt32  heartbeat_ack_irq_en:1;
        RBus_UInt32  comma_timeout_irq_en:1;
        RBus_UInt32  rdata_valid_irq_en:1;
        RBus_UInt32  request_fin_irq_en:1;
        RBus_UInt32  read_uecc_irq_en:1;
        RBus_UInt32  read_nack_irq_en:1;
        RBus_UInt32  write_nack_irq_en:1;
        RBus_UInt32  res1:18;
    };
}earc_earc_cmdc_irq_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_disc_state:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  debug_trans_state:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  debug_rdata:8;
        RBus_UInt32  res3:8;
    };
}earc_earc_cmdc_debug_RBUS;




#endif 


#endif 
