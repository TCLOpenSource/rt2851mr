/**
* @file Merlin5-DesignSpec-D-domain_Local_Dimming_interface
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_LDSPI_REG_H_
#define _RBUS_LDSPI_REG_H_

#include "rbus_types.h"



//  LDSPI Register Address
#define  LDSPI_LD_CTRL                                                          0x1802C900
#define  LDSPI_LD_CTRL_reg_addr                                                  "0xB802C900"
#define  LDSPI_LD_CTRL_reg                                                       0xB802C900
#define  LDSPI_LD_CTRL_inst_addr                                                 "0x0000"
#define  set_LDSPI_LD_CTRL_reg(data)                                             (*((volatile unsigned int*)LDSPI_LD_CTRL_reg)=data)
#define  get_LDSPI_LD_CTRL_reg                                                   (*((volatile unsigned int*)LDSPI_LD_CTRL_reg))
#define  LDSPI_LD_CTRL_ld_mode_shift                                             (30)
#define  LDSPI_LD_CTRL_tx_add_1t_shift                                           (29)
#define  LDSPI_LD_CTRL_ld_spi_en_shift                                           (28)
#define  LDSPI_LD_CTRL_as_led_reset_shift                                        (27)
#define  LDSPI_LD_CTRL_rx_clk_sample_mode_shift                                  (26)
#define  LDSPI_LD_CTRL_rx_clk_shift_shift                                        (16)
#define  LDSPI_LD_CTRL_rx_sdi_inv_shift                                          (15)
#define  LDSPI_LD_CTRL_tx_sdo_inv_shift                                          (14)
#define  LDSPI_LD_CTRL_tx_vsync_inv_shift                                        (13)
#define  LDSPI_LD_CTRL_tx_hsync_inv_shift                                        (12)
#define  LDSPI_LD_CTRL_tx_cs_inv_shift                                           (11)
#define  LDSPI_LD_CTRL_tx_clk_inv_shift                                          (10)
#define  LDSPI_LD_CTRL_out_data_align_shift                                      (9)
#define  LDSPI_LD_CTRL_in_data_align_shift                                       (8)
#define  LDSPI_LD_CTRL_as_led_with_cs_shift                                      (7)
#define  LDSPI_LD_CTRL_m_plus_round_enable_shift                                 (6)
#define  LDSPI_LD_CTRL_m_plus_rgbw_enable_shift                                  (5)
#define  LDSPI_LD_CTRL_ld_pin_port_sel_shift                                     (4)
#define  LDSPI_LD_CTRL_separate_two_block_shift                                  (3)
#define  LDSPI_LD_CTRL_send_follow_vsync_shift                                   (2)
#define  LDSPI_LD_CTRL_send_trigger_shift                                        (1)
#define  LDSPI_LD_CTRL_start_enable_shift                                        (0)
#define  LDSPI_LD_CTRL_ld_mode_mask                                              (0xC0000000)
#define  LDSPI_LD_CTRL_tx_add_1t_mask                                            (0x20000000)
#define  LDSPI_LD_CTRL_ld_spi_en_mask                                            (0x10000000)
#define  LDSPI_LD_CTRL_as_led_reset_mask                                         (0x08000000)
#define  LDSPI_LD_CTRL_rx_clk_sample_mode_mask                                   (0x04000000)
#define  LDSPI_LD_CTRL_rx_clk_shift_mask                                         (0x03FF0000)
#define  LDSPI_LD_CTRL_rx_sdi_inv_mask                                           (0x00008000)
#define  LDSPI_LD_CTRL_tx_sdo_inv_mask                                           (0x00004000)
#define  LDSPI_LD_CTRL_tx_vsync_inv_mask                                         (0x00002000)
#define  LDSPI_LD_CTRL_tx_hsync_inv_mask                                         (0x00001000)
#define  LDSPI_LD_CTRL_tx_cs_inv_mask                                            (0x00000800)
#define  LDSPI_LD_CTRL_tx_clk_inv_mask                                           (0x00000400)
#define  LDSPI_LD_CTRL_out_data_align_mask                                       (0x00000200)
#define  LDSPI_LD_CTRL_in_data_align_mask                                        (0x00000100)
#define  LDSPI_LD_CTRL_as_led_with_cs_mask                                       (0x00000080)
#define  LDSPI_LD_CTRL_m_plus_round_enable_mask                                  (0x00000040)
#define  LDSPI_LD_CTRL_m_plus_rgbw_enable_mask                                   (0x00000020)
#define  LDSPI_LD_CTRL_ld_pin_port_sel_mask                                      (0x00000010)
#define  LDSPI_LD_CTRL_separate_two_block_mask                                   (0x00000008)
#define  LDSPI_LD_CTRL_send_follow_vsync_mask                                    (0x00000004)
#define  LDSPI_LD_CTRL_send_trigger_mask                                         (0x00000002)
#define  LDSPI_LD_CTRL_start_enable_mask                                         (0x00000001)
#define  LDSPI_LD_CTRL_ld_mode(data)                                             (0xC0000000&((data)<<30))
#define  LDSPI_LD_CTRL_tx_add_1t(data)                                           (0x20000000&((data)<<29))
#define  LDSPI_LD_CTRL_ld_spi_en(data)                                           (0x10000000&((data)<<28))
#define  LDSPI_LD_CTRL_as_led_reset(data)                                        (0x08000000&((data)<<27))
#define  LDSPI_LD_CTRL_rx_clk_sample_mode(data)                                  (0x04000000&((data)<<26))
#define  LDSPI_LD_CTRL_rx_clk_shift(data)                                        (0x03FF0000&((data)<<16))
#define  LDSPI_LD_CTRL_rx_sdi_inv(data)                                          (0x00008000&((data)<<15))
#define  LDSPI_LD_CTRL_tx_sdo_inv(data)                                          (0x00004000&((data)<<14))
#define  LDSPI_LD_CTRL_tx_vsync_inv(data)                                        (0x00002000&((data)<<13))
#define  LDSPI_LD_CTRL_tx_hsync_inv(data)                                        (0x00001000&((data)<<12))
#define  LDSPI_LD_CTRL_tx_cs_inv(data)                                           (0x00000800&((data)<<11))
#define  LDSPI_LD_CTRL_tx_clk_inv(data)                                          (0x00000400&((data)<<10))
#define  LDSPI_LD_CTRL_out_data_align(data)                                      (0x00000200&((data)<<9))
#define  LDSPI_LD_CTRL_in_data_align(data)                                       (0x00000100&((data)<<8))
#define  LDSPI_LD_CTRL_as_led_with_cs(data)                                      (0x00000080&((data)<<7))
#define  LDSPI_LD_CTRL_m_plus_round_enable(data)                                 (0x00000040&((data)<<6))
#define  LDSPI_LD_CTRL_m_plus_rgbw_enable(data)                                  (0x00000020&((data)<<5))
#define  LDSPI_LD_CTRL_ld_pin_port_sel(data)                                     (0x00000010&((data)<<4))
#define  LDSPI_LD_CTRL_separate_two_block(data)                                  (0x00000008&((data)<<3))
#define  LDSPI_LD_CTRL_send_follow_vsync(data)                                   (0x00000004&((data)<<2))
#define  LDSPI_LD_CTRL_send_trigger(data)                                        (0x00000002&((data)<<1))
#define  LDSPI_LD_CTRL_start_enable(data)                                        (0x00000001&(data))
#define  LDSPI_LD_CTRL_get_ld_mode(data)                                         ((0xC0000000&(data))>>30)
#define  LDSPI_LD_CTRL_get_tx_add_1t(data)                                       ((0x20000000&(data))>>29)
#define  LDSPI_LD_CTRL_get_ld_spi_en(data)                                       ((0x10000000&(data))>>28)
#define  LDSPI_LD_CTRL_get_as_led_reset(data)                                    ((0x08000000&(data))>>27)
#define  LDSPI_LD_CTRL_get_rx_clk_sample_mode(data)                              ((0x04000000&(data))>>26)
#define  LDSPI_LD_CTRL_get_rx_clk_shift(data)                                    ((0x03FF0000&(data))>>16)
#define  LDSPI_LD_CTRL_get_rx_sdi_inv(data)                                      ((0x00008000&(data))>>15)
#define  LDSPI_LD_CTRL_get_tx_sdo_inv(data)                                      ((0x00004000&(data))>>14)
#define  LDSPI_LD_CTRL_get_tx_vsync_inv(data)                                    ((0x00002000&(data))>>13)
#define  LDSPI_LD_CTRL_get_tx_hsync_inv(data)                                    ((0x00001000&(data))>>12)
#define  LDSPI_LD_CTRL_get_tx_cs_inv(data)                                       ((0x00000800&(data))>>11)
#define  LDSPI_LD_CTRL_get_tx_clk_inv(data)                                      ((0x00000400&(data))>>10)
#define  LDSPI_LD_CTRL_get_out_data_align(data)                                  ((0x00000200&(data))>>9)
#define  LDSPI_LD_CTRL_get_in_data_align(data)                                   ((0x00000100&(data))>>8)
#define  LDSPI_LD_CTRL_get_as_led_with_cs(data)                                  ((0x00000080&(data))>>7)
#define  LDSPI_LD_CTRL_get_m_plus_round_enable(data)                             ((0x00000040&(data))>>6)
#define  LDSPI_LD_CTRL_get_m_plus_rgbw_enable(data)                              ((0x00000020&(data))>>5)
#define  LDSPI_LD_CTRL_get_ld_pin_port_sel(data)                                 ((0x00000010&(data))>>4)
#define  LDSPI_LD_CTRL_get_separate_two_block(data)                              ((0x00000008&(data))>>3)
#define  LDSPI_LD_CTRL_get_send_follow_vsync(data)                               ((0x00000004&(data))>>2)
#define  LDSPI_LD_CTRL_get_send_trigger(data)                                    ((0x00000002&(data))>>1)
#define  LDSPI_LD_CTRL_get_start_enable(data)                                    (0x00000001&(data))

#define  LDSPI_Rx_timing_ctrl                                                   0x1802C994
#define  LDSPI_Rx_timing_ctrl_reg_addr                                           "0xB802C994"
#define  LDSPI_Rx_timing_ctrl_reg                                                0xB802C994
#define  LDSPI_Rx_timing_ctrl_inst_addr                                          "0x0001"
#define  set_LDSPI_Rx_timing_ctrl_reg(data)                                      (*((volatile unsigned int*)LDSPI_Rx_timing_ctrl_reg)=data)
#define  get_LDSPI_Rx_timing_ctrl_reg                                            (*((volatile unsigned int*)LDSPI_Rx_timing_ctrl_reg))
#define  LDSPI_Rx_timing_ctrl_rx_data_shift_shift                                (0)
#define  LDSPI_Rx_timing_ctrl_rx_data_shift_mask                                 (0x000003FF)
#define  LDSPI_Rx_timing_ctrl_rx_data_shift(data)                                (0x000003FF&(data))
#define  LDSPI_Rx_timing_ctrl_get_rx_data_shift(data)                            (0x000003FF&(data))

#define  LDSPI_Cs_hold_time                                                     0x1802C958
#define  LDSPI_Cs_hold_time_reg_addr                                             "0xB802C958"
#define  LDSPI_Cs_hold_time_reg                                                  0xB802C958
#define  LDSPI_Cs_hold_time_inst_addr                                            "0x0002"
#define  set_LDSPI_Cs_hold_time_reg(data)                                        (*((volatile unsigned int*)LDSPI_Cs_hold_time_reg)=data)
#define  get_LDSPI_Cs_hold_time_reg                                              (*((volatile unsigned int*)LDSPI_Cs_hold_time_reg))
#define  LDSPI_Cs_hold_time_cs_hold_time_shift                                   (8)
#define  LDSPI_Cs_hold_time_cs_hold_time_mask                                    (0xFFFFFF00)
#define  LDSPI_Cs_hold_time_cs_hold_time(data)                                   (0xFFFFFF00&((data)<<8))
#define  LDSPI_Cs_hold_time_get_cs_hold_time(data)                               ((0xFFFFFF00&(data))>>8)

#define  LDSPI_sck_hold_time                                                    0x1802C988
#define  LDSPI_sck_hold_time_reg_addr                                            "0xB802C988"
#define  LDSPI_sck_hold_time_reg                                                 0xB802C988
#define  LDSPI_sck_hold_time_inst_addr                                           "0x0003"
#define  set_LDSPI_sck_hold_time_reg(data)                                       (*((volatile unsigned int*)LDSPI_sck_hold_time_reg)=data)
#define  get_LDSPI_sck_hold_time_reg                                             (*((volatile unsigned int*)LDSPI_sck_hold_time_reg))
#define  LDSPI_sck_hold_time_sck_hold_time_shift                                 (8)
#define  LDSPI_sck_hold_time_sck_hold_time_mask                                  (0xFFFFFF00)
#define  LDSPI_sck_hold_time_sck_hold_time(data)                                 (0xFFFFFF00&((data)<<8))
#define  LDSPI_sck_hold_time_get_sck_hold_time(data)                             ((0xFFFFFF00&(data))>>8)

#define  LDSPI_DB_CTRL                                                          0x1802C95C
#define  LDSPI_DB_CTRL_reg_addr                                                  "0xB802C95C"
#define  LDSPI_DB_CTRL_reg                                                       0xB802C95C
#define  LDSPI_DB_CTRL_inst_addr                                                 "0x0004"
#define  set_LDSPI_DB_CTRL_reg(data)                                             (*((volatile unsigned int*)LDSPI_DB_CTRL_reg)=data)
#define  get_LDSPI_DB_CTRL_reg                                                   (*((volatile unsigned int*)LDSPI_DB_CTRL_reg))
#define  LDSPI_DB_CTRL_double_buf_en_shift                                       (31)
#define  LDSPI_DB_CTRL_double_buf_set_shift                                      (30)
#define  LDSPI_DB_CTRL_double_buf_read_level_shift                               (29)
#define  LDSPI_DB_CTRL_double_buf_en_mask                                        (0x80000000)
#define  LDSPI_DB_CTRL_double_buf_set_mask                                       (0x40000000)
#define  LDSPI_DB_CTRL_double_buf_read_level_mask                                (0x20000000)
#define  LDSPI_DB_CTRL_double_buf_en(data)                                       (0x80000000&((data)<<31))
#define  LDSPI_DB_CTRL_double_buf_set(data)                                      (0x40000000&((data)<<30))
#define  LDSPI_DB_CTRL_double_buf_read_level(data)                               (0x20000000&((data)<<29))
#define  LDSPI_DB_CTRL_get_double_buf_en(data)                                   ((0x80000000&(data))>>31)
#define  LDSPI_DB_CTRL_get_double_buf_set(data)                                  ((0x40000000&(data))>>30)
#define  LDSPI_DB_CTRL_get_double_buf_read_level(data)                           ((0x20000000&(data))>>29)

#define  LDSPI_Out_data_CTRL                                                    0x1802C904
#define  LDSPI_Out_data_CTRL_reg_addr                                            "0xB802C904"
#define  LDSPI_Out_data_CTRL_reg                                                 0xB802C904
#define  LDSPI_Out_data_CTRL_inst_addr                                           "0x0005"
#define  set_LDSPI_Out_data_CTRL_reg(data)                                       (*((volatile unsigned int*)LDSPI_Out_data_CTRL_reg)=data)
#define  get_LDSPI_Out_data_CTRL_reg                                             (*((volatile unsigned int*)LDSPI_Out_data_CTRL_reg))
#define  LDSPI_Out_data_CTRL_data_endian_shift                                   (31)
#define  LDSPI_Out_data_CTRL_tailer_format_shift                                 (24)
#define  LDSPI_Out_data_CTRL_header_format_shift                                 (20)
#define  LDSPI_Out_data_CTRL_output_units_shift                                  (4)
#define  LDSPI_Out_data_CTRL_output_data_format_shift                            (0)
#define  LDSPI_Out_data_CTRL_data_endian_mask                                    (0x80000000)
#define  LDSPI_Out_data_CTRL_tailer_format_mask                                  (0x03000000)
#define  LDSPI_Out_data_CTRL_header_format_mask                                  (0x00300000)
#define  LDSPI_Out_data_CTRL_output_units_mask                                   (0x0001FFF0)
#define  LDSPI_Out_data_CTRL_output_data_format_mask                             (0x00000003)
#define  LDSPI_Out_data_CTRL_data_endian(data)                                   (0x80000000&((data)<<31))
#define  LDSPI_Out_data_CTRL_tailer_format(data)                                 (0x03000000&((data)<<24))
#define  LDSPI_Out_data_CTRL_header_format(data)                                 (0x00300000&((data)<<20))
#define  LDSPI_Out_data_CTRL_output_units(data)                                  (0x0001FFF0&((data)<<4))
#define  LDSPI_Out_data_CTRL_output_data_format(data)                            (0x00000003&(data))
#define  LDSPI_Out_data_CTRL_get_data_endian(data)                               ((0x80000000&(data))>>31)
#define  LDSPI_Out_data_CTRL_get_tailer_format(data)                             ((0x03000000&(data))>>24)
#define  LDSPI_Out_data_CTRL_get_header_format(data)                             ((0x00300000&(data))>>20)
#define  LDSPI_Out_data_CTRL_get_output_units(data)                              ((0x0001FFF0&(data))>>4)
#define  LDSPI_Out_data_CTRL_get_output_data_format(data)                        (0x00000003&(data))

#define  LDSPI_Out_data_form                                                    0x1802C98C
#define  LDSPI_Out_data_form_reg_addr                                            "0xB802C98C"
#define  LDSPI_Out_data_form_reg                                                 0xB802C98C
#define  LDSPI_Out_data_form_inst_addr                                           "0x0006"
#define  set_LDSPI_Out_data_form_reg(data)                                       (*((volatile unsigned int*)LDSPI_Out_data_form_reg)=data)
#define  get_LDSPI_Out_data_form_reg                                             (*((volatile unsigned int*)LDSPI_Out_data_form_reg))
#define  LDSPI_Out_data_form_tailer_units_shift                                  (20)
#define  LDSPI_Out_data_form_header_units_shift                                  (12)
#define  LDSPI_Out_data_form_data_sram_separate_shift                            (0)
#define  LDSPI_Out_data_form_tailer_units_mask                                   (0x03F00000)
#define  LDSPI_Out_data_form_header_units_mask                                   (0x000FF000)
#define  LDSPI_Out_data_form_data_sram_separate_mask                             (0x000007FF)
#define  LDSPI_Out_data_form_tailer_units(data)                                  (0x03F00000&((data)<<20))
#define  LDSPI_Out_data_form_header_units(data)                                  (0x000FF000&((data)<<12))
#define  LDSPI_Out_data_form_data_sram_separate(data)                            (0x000007FF&(data))
#define  LDSPI_Out_data_form_get_tailer_units(data)                              ((0x03F00000&(data))>>20)
#define  LDSPI_Out_data_form_get_header_units(data)                              ((0x000FF000&(data))>>12)
#define  LDSPI_Out_data_form_get_data_sram_separate(data)                        (0x000007FF&(data))

#define  LDSPI_Timing_CTRL                                                      0x1802C908
#define  LDSPI_Timing_CTRL_reg_addr                                              "0xB802C908"
#define  LDSPI_Timing_CTRL_reg                                                   0xB802C908
#define  LDSPI_Timing_CTRL_inst_addr                                             "0x0007"
#define  set_LDSPI_Timing_CTRL_reg(data)                                         (*((volatile unsigned int*)LDSPI_Timing_CTRL_reg)=data)
#define  get_LDSPI_Timing_CTRL_reg                                               (*((volatile unsigned int*)LDSPI_Timing_CTRL_reg))
#define  LDSPI_Timing_CTRL_sck_h_shift                                           (16)
#define  LDSPI_Timing_CTRL_sck_l_shift                                           (0)
#define  LDSPI_Timing_CTRL_sck_h_mask                                            (0x00FF0000)
#define  LDSPI_Timing_CTRL_sck_l_mask                                            (0x000000FF)
#define  LDSPI_Timing_CTRL_sck_h(data)                                           (0x00FF0000&((data)<<16))
#define  LDSPI_Timing_CTRL_sck_l(data)                                           (0x000000FF&(data))
#define  LDSPI_Timing_CTRL_get_sck_h(data)                                       ((0x00FF0000&(data))>>16)
#define  LDSPI_Timing_CTRL_get_sck_l(data)                                       (0x000000FF&(data))

#define  LDSPI_Send_delay                                                       0x1802C90C
#define  LDSPI_Send_delay_reg_addr                                               "0xB802C90C"
#define  LDSPI_Send_delay_reg                                                    0xB802C90C
#define  LDSPI_Send_delay_inst_addr                                              "0x0008"
#define  set_LDSPI_Send_delay_reg(data)                                          (*((volatile unsigned int*)LDSPI_Send_delay_reg)=data)
#define  get_LDSPI_Send_delay_reg                                                (*((volatile unsigned int*)LDSPI_Send_delay_reg))
#define  LDSPI_Send_delay_data_send_delay_shift                                  (8)
#define  LDSPI_Send_delay_data_send_delay_mask                                   (0xFFFFFF00)
#define  LDSPI_Send_delay_data_send_delay(data)                                  (0xFFFFFF00&((data)<<8))
#define  LDSPI_Send_delay_get_data_send_delay(data)                              ((0xFFFFFF00&(data))>>8)

#define  LDSPI_Data_unit_delay                                                  0x1802C910
#define  LDSPI_Data_unit_delay_reg_addr                                          "0xB802C910"
#define  LDSPI_Data_unit_delay_reg                                               0xB802C910
#define  LDSPI_Data_unit_delay_inst_addr                                         "0x0009"
#define  set_LDSPI_Data_unit_delay_reg(data)                                     (*((volatile unsigned int*)LDSPI_Data_unit_delay_reg)=data)
#define  get_LDSPI_Data_unit_delay_reg                                           (*((volatile unsigned int*)LDSPI_Data_unit_delay_reg))
#define  LDSPI_Data_unit_delay_each_unit_delay_shift                             (8)
#define  LDSPI_Data_unit_delay_each_unit_delay_mask                              (0xFFFFFF00)
#define  LDSPI_Data_unit_delay_each_unit_delay(data)                             (0xFFFFFF00&((data)<<8))
#define  LDSPI_Data_unit_delay_get_each_unit_delay(data)                         ((0xFFFFFF00&(data))>>8)

#define  LDSPI_Multi_format_unit_delay                                          0x1802C990
#define  LDSPI_Multi_format_unit_delay_reg_addr                                  "0xB802C990"
#define  LDSPI_Multi_format_unit_delay_reg                                       0xB802C990
#define  LDSPI_Multi_format_unit_delay_inst_addr                                 "0x000A"
#define  set_LDSPI_Multi_format_unit_delay_reg(data)                             (*((volatile unsigned int*)LDSPI_Multi_format_unit_delay_reg)=data)
#define  get_LDSPI_Multi_format_unit_delay_reg                                   (*((volatile unsigned int*)LDSPI_Multi_format_unit_delay_reg))
#define  LDSPI_Multi_format_unit_delay_multi_unit_delay_shift                    (8)
#define  LDSPI_Multi_format_unit_delay_delay_format_shift                        (0)
#define  LDSPI_Multi_format_unit_delay_multi_unit_delay_mask                     (0xFFFFFF00)
#define  LDSPI_Multi_format_unit_delay_delay_format_mask                         (0x00000003)
#define  LDSPI_Multi_format_unit_delay_multi_unit_delay(data)                    (0xFFFFFF00&((data)<<8))
#define  LDSPI_Multi_format_unit_delay_delay_format(data)                        (0x00000003&(data))
#define  LDSPI_Multi_format_unit_delay_get_multi_unit_delay(data)                ((0xFFFFFF00&(data))>>8)
#define  LDSPI_Multi_format_unit_delay_get_delay_format(data)                    (0x00000003&(data))

#define  LDSPI_V_sync_duty                                                      0x1802C914
#define  LDSPI_V_sync_duty_reg_addr                                              "0xB802C914"
#define  LDSPI_V_sync_duty_reg                                                   0xB802C914
#define  LDSPI_V_sync_duty_inst_addr                                             "0x000B"
#define  set_LDSPI_V_sync_duty_reg(data)                                         (*((volatile unsigned int*)LDSPI_V_sync_duty_reg)=data)
#define  get_LDSPI_V_sync_duty_reg                                               (*((volatile unsigned int*)LDSPI_V_sync_duty_reg))
#define  LDSPI_V_sync_duty_vsync_d_shift                                         (24)
#define  LDSPI_V_sync_duty_hsync_d_shift                                         (16)
#define  LDSPI_V_sync_duty_vsync_d_mask                                          (0xFF000000)
#define  LDSPI_V_sync_duty_hsync_d_mask                                          (0x00FF0000)
#define  LDSPI_V_sync_duty_vsync_d(data)                                         (0xFF000000&((data)<<24))
#define  LDSPI_V_sync_duty_hsync_d(data)                                         (0x00FF0000&((data)<<16))
#define  LDSPI_V_sync_duty_get_vsync_d(data)                                     ((0xFF000000&(data))>>24)
#define  LDSPI_V_sync_duty_get_hsync_d(data)                                     ((0x00FF0000&(data))>>16)

#define  LDSPI_Data_h_time                                                      0x1802C918
#define  LDSPI_Data_h_time_reg_addr                                              "0xB802C918"
#define  LDSPI_Data_h_time_reg                                                   0xB802C918
#define  LDSPI_Data_h_time_inst_addr                                             "0x000C"
#define  set_LDSPI_Data_h_time_reg(data)                                         (*((volatile unsigned int*)LDSPI_Data_h_time_reg)=data)
#define  get_LDSPI_Data_h_time_reg                                               (*((volatile unsigned int*)LDSPI_Data_h_time_reg))
#define  LDSPI_Data_h_time_cs_end_delay_time_shift                               (0)
#define  LDSPI_Data_h_time_cs_end_delay_time_mask                                (0x000003FF)
#define  LDSPI_Data_h_time_cs_end_delay_time(data)                               (0x000003FF&(data))
#define  LDSPI_Data_h_time_get_cs_end_delay_time(data)                           (0x000003FF&(data))

#define  LDSPI_ld_spi_V_sync_delay                                              0x1802C964
#define  LDSPI_ld_spi_V_sync_delay_reg_addr                                      "0xB802C964"
#define  LDSPI_ld_spi_V_sync_delay_reg                                           0xB802C964
#define  LDSPI_ld_spi_V_sync_delay_inst_addr                                     "0x000D"
#define  set_LDSPI_ld_spi_V_sync_delay_reg(data)                                 (*((volatile unsigned int*)LDSPI_ld_spi_V_sync_delay_reg)=data)
#define  get_LDSPI_ld_spi_V_sync_delay_reg                                       (*((volatile unsigned int*)LDSPI_ld_spi_V_sync_delay_reg))
#define  LDSPI_ld_spi_V_sync_delay_vsync_delay_shift                             (8)
#define  LDSPI_ld_spi_V_sync_delay_vsync_delay_mask                              (0xFFFFFF00)
#define  LDSPI_ld_spi_V_sync_delay_vsync_delay(data)                             (0xFFFFFF00&((data)<<8))
#define  LDSPI_ld_spi_V_sync_delay_get_vsync_delay(data)                         ((0xFFFFFF00&(data))>>8)

#define  LDSPI_ld_spi_h_total                                                   0x1802C968
#define  LDSPI_ld_spi_h_total_reg_addr                                           "0xB802C968"
#define  LDSPI_ld_spi_h_total_reg                                                0xB802C968
#define  LDSPI_ld_spi_h_total_inst_addr                                          "0x000E"
#define  set_LDSPI_ld_spi_h_total_reg(data)                                      (*((volatile unsigned int*)LDSPI_ld_spi_h_total_reg)=data)
#define  get_LDSPI_ld_spi_h_total_reg                                            (*((volatile unsigned int*)LDSPI_ld_spi_h_total_reg))
#define  LDSPI_ld_spi_h_total_ld_spi_dh_total_shift                              (19)
#define  LDSPI_ld_spi_h_total_ld_spi_dh_total_mask                               (0xFFF80000)
#define  LDSPI_ld_spi_h_total_ld_spi_dh_total(data)                              (0xFFF80000&((data)<<19))
#define  LDSPI_ld_spi_h_total_get_ld_spi_dh_total(data)                          ((0xFFF80000&(data))>>19)

#define  LDSPI_ld_spi_v_total                                                   0x1802C96C
#define  LDSPI_ld_spi_v_total_reg_addr                                           "0xB802C96C"
#define  LDSPI_ld_spi_v_total_reg                                                0xB802C96C
#define  LDSPI_ld_spi_v_total_inst_addr                                          "0x000F"
#define  set_LDSPI_ld_spi_v_total_reg(data)                                      (*((volatile unsigned int*)LDSPI_ld_spi_v_total_reg)=data)
#define  get_LDSPI_ld_spi_v_total_reg                                            (*((volatile unsigned int*)LDSPI_ld_spi_v_total_reg))
#define  LDSPI_ld_spi_v_total_ld_spi_dv_total_shift                              (19)
#define  LDSPI_ld_spi_v_total_dv_total_src_sel_shift                             (13)
#define  LDSPI_ld_spi_v_total_dv_total_sync_dtg_shift                            (0)
#define  LDSPI_ld_spi_v_total_ld_spi_dv_total_mask                               (0xFFF80000)
#define  LDSPI_ld_spi_v_total_dv_total_src_sel_mask                              (0x00002000)
#define  LDSPI_ld_spi_v_total_dv_total_sync_dtg_mask                             (0x00001FFF)
#define  LDSPI_ld_spi_v_total_ld_spi_dv_total(data)                              (0xFFF80000&((data)<<19))
#define  LDSPI_ld_spi_v_total_dv_total_src_sel(data)                             (0x00002000&((data)<<13))
#define  LDSPI_ld_spi_v_total_dv_total_sync_dtg(data)                            (0x00001FFF&(data))
#define  LDSPI_ld_spi_v_total_get_ld_spi_dv_total(data)                          ((0xFFF80000&(data))>>19)
#define  LDSPI_ld_spi_v_total_get_dv_total_src_sel(data)                         ((0x00002000&(data))>>13)
#define  LDSPI_ld_spi_v_total_get_dv_total_sync_dtg(data)                        (0x00001FFF&(data))

#define  LDSPI_ld_spi_reproduce_mode                                            0x1802C970
#define  LDSPI_ld_spi_reproduce_mode_reg_addr                                    "0xB802C970"
#define  LDSPI_ld_spi_reproduce_mode_reg                                         0xB802C970
#define  LDSPI_ld_spi_reproduce_mode_inst_addr                                   "0x0010"
#define  set_LDSPI_ld_spi_reproduce_mode_reg(data)                               (*((volatile unsigned int*)LDSPI_ld_spi_reproduce_mode_reg)=data)
#define  get_LDSPI_ld_spi_reproduce_mode_reg                                     (*((volatile unsigned int*)LDSPI_ld_spi_reproduce_mode_reg))
#define  LDSPI_ld_spi_reproduce_mode_dv_reproduce_mode_shift                     (0)
#define  LDSPI_ld_spi_reproduce_mode_dv_reproduce_mode_mask                      (0x00000007)
#define  LDSPI_ld_spi_reproduce_mode_dv_reproduce_mode(data)                     (0x00000007&(data))
#define  LDSPI_ld_spi_reproduce_mode_get_dv_reproduce_mode(data)                 (0x00000007&(data))

#define  LDSPI_ld_spi_dummy                                                     0x1802C974
#define  LDSPI_ld_spi_dummy_reg_addr                                             "0xB802C974"
#define  LDSPI_ld_spi_dummy_reg                                                  0xB802C974
#define  LDSPI_ld_spi_dummy_inst_addr                                            "0x0011"
#define  set_LDSPI_ld_spi_dummy_reg(data)                                        (*((volatile unsigned int*)LDSPI_ld_spi_dummy_reg)=data)
#define  get_LDSPI_ld_spi_dummy_reg                                              (*((volatile unsigned int*)LDSPI_ld_spi_dummy_reg))
#define  LDSPI_ld_spi_dummy_dummy_31_0_shift                                     (0)
#define  LDSPI_ld_spi_dummy_dummy_31_0_mask                                      (0xFFFFFFFF)
#define  LDSPI_ld_spi_dummy_dummy_31_0(data)                                     (0xFFFFFFFF&(data))
#define  LDSPI_ld_spi_dummy_get_dummy_31_0(data)                                 (0xFFFFFFFF&(data))

#define  LDSPI_ld_spi_LD_timing_fune_tune                                       0x1802C978
#define  LDSPI_ld_spi_LD_timing_fune_tune_reg_addr                               "0xB802C978"
#define  LDSPI_ld_spi_LD_timing_fune_tune_reg                                    0xB802C978
#define  LDSPI_ld_spi_LD_timing_fune_tune_inst_addr                              "0x0012"
#define  set_LDSPI_ld_spi_LD_timing_fune_tune_reg(data)                          (*((volatile unsigned int*)LDSPI_ld_spi_LD_timing_fune_tune_reg)=data)
#define  get_LDSPI_ld_spi_LD_timing_fune_tune_reg                                (*((volatile unsigned int*)LDSPI_ld_spi_LD_timing_fune_tune_reg))
#define  LDSPI_ld_spi_LD_timing_fune_tune_ld_backlight_timing_delay_shift        (0)
#define  LDSPI_ld_spi_LD_timing_fune_tune_ld_backlight_timing_delay_mask         (0x00FFFFFF)
#define  LDSPI_ld_spi_LD_timing_fune_tune_ld_backlight_timing_delay(data)        (0x00FFFFFF&(data))
#define  LDSPI_ld_spi_LD_timing_fune_tune_get_ld_backlight_timing_delay(data)    (0x00FFFFFF&(data))

#define  LDSPI_ld_spi_LD_Timing_Error                                           0x1802C97C
#define  LDSPI_ld_spi_LD_Timing_Error_reg_addr                                   "0xB802C97C"
#define  LDSPI_ld_spi_LD_Timing_Error_reg                                        0xB802C97C
#define  LDSPI_ld_spi_LD_Timing_Error_inst_addr                                  "0x0013"
#define  set_LDSPI_ld_spi_LD_Timing_Error_reg(data)                              (*((volatile unsigned int*)LDSPI_ld_spi_LD_Timing_Error_reg)=data)
#define  get_LDSPI_ld_spi_LD_Timing_Error_reg                                    (*((volatile unsigned int*)LDSPI_ld_spi_LD_Timing_Error_reg))
#define  LDSPI_ld_spi_LD_Timing_Error_ld_timing_error_shift                      (0)
#define  LDSPI_ld_spi_LD_Timing_Error_ld_timing_error_mask                       (0x00000001)
#define  LDSPI_ld_spi_LD_Timing_Error_ld_timing_error(data)                      (0x00000001&(data))
#define  LDSPI_ld_spi_LD_Timing_Error_get_ld_timing_error(data)                  (0x00000001&(data))

#define  LDSPI_ld_spi_LD_SPI_Timing_Error                                       0x1802C980
#define  LDSPI_ld_spi_LD_SPI_Timing_Error_reg_addr                               "0xB802C980"
#define  LDSPI_ld_spi_LD_SPI_Timing_Error_reg                                    0xB802C980
#define  LDSPI_ld_spi_LD_SPI_Timing_Error_inst_addr                              "0x0014"
#define  set_LDSPI_ld_spi_LD_SPI_Timing_Error_reg(data)                          (*((volatile unsigned int*)LDSPI_ld_spi_LD_SPI_Timing_Error_reg)=data)
#define  get_LDSPI_ld_spi_LD_SPI_Timing_Error_reg                                (*((volatile unsigned int*)LDSPI_ld_spi_LD_SPI_Timing_Error_reg))
#define  LDSPI_ld_spi_LD_SPI_Timing_Error_ld_spi_timing_error_shift              (0)
#define  LDSPI_ld_spi_LD_SPI_Timing_Error_ld_spi_timing_error_mask               (0x00000001)
#define  LDSPI_ld_spi_LD_SPI_Timing_Error_ld_spi_timing_error(data)              (0x00000001&(data))
#define  LDSPI_ld_spi_LD_SPI_Timing_Error_get_ld_spi_timing_error(data)          (0x00000001&(data))

#define  LDSPI_Outindex_Addr_CTRL                                               0x1802C91C
#define  LDSPI_Outindex_Addr_CTRL_reg_addr                                       "0xB802C91C"
#define  LDSPI_Outindex_Addr_CTRL_reg                                            0xB802C91C
#define  LDSPI_Outindex_Addr_CTRL_inst_addr                                      "0x0015"
#define  set_LDSPI_Outindex_Addr_CTRL_reg(data)                                  (*((volatile unsigned int*)LDSPI_Outindex_Addr_CTRL_reg)=data)
#define  get_LDSPI_Outindex_Addr_CTRL_reg                                        (*((volatile unsigned int*)LDSPI_Outindex_Addr_CTRL_reg))
#define  LDSPI_Outindex_Addr_CTRL_outindex_rw_pointer_set_shift                  (16)
#define  LDSPI_Outindex_Addr_CTRL_outindex_rw_pointer_shift                      (0)
#define  LDSPI_Outindex_Addr_CTRL_outindex_rw_pointer_set_mask                   (0x07FF0000)
#define  LDSPI_Outindex_Addr_CTRL_outindex_rw_pointer_mask                       (0x000007FF)
#define  LDSPI_Outindex_Addr_CTRL_outindex_rw_pointer_set(data)                  (0x07FF0000&((data)<<16))
#define  LDSPI_Outindex_Addr_CTRL_outindex_rw_pointer(data)                      (0x000007FF&(data))
#define  LDSPI_Outindex_Addr_CTRL_get_outindex_rw_pointer_set(data)              ((0x07FF0000&(data))>>16)
#define  LDSPI_Outindex_Addr_CTRL_get_outindex_rw_pointer(data)                  (0x000007FF&(data))

#define  LDSPI_Outindex_Rwport                                                  0x1802C920
#define  LDSPI_Outindex_Rwport_reg_addr                                          "0xB802C920"
#define  LDSPI_Outindex_Rwport_reg                                               0xB802C920
#define  LDSPI_Outindex_Rwport_inst_addr                                         "0x0016"
#define  set_LDSPI_Outindex_Rwport_reg(data)                                     (*((volatile unsigned int*)LDSPI_Outindex_Rwport_reg)=data)
#define  get_LDSPI_Outindex_Rwport_reg                                           (*((volatile unsigned int*)LDSPI_Outindex_Rwport_reg))
#define  LDSPI_Outindex_Rwport_outindex_rw_data_port_shift                       (0)
#define  LDSPI_Outindex_Rwport_outindex_rw_data_port_mask                        (0x00000FFF)
#define  LDSPI_Outindex_Rwport_outindex_rw_data_port(data)                       (0x00000FFF&(data))
#define  LDSPI_Outindex_Rwport_get_outindex_rw_data_port(data)                   (0x00000FFF&(data))

#define  LDSPI_Data_Addr_CTRL                                                   0x1802C924
#define  LDSPI_Data_Addr_CTRL_reg_addr                                           "0xB802C924"
#define  LDSPI_Data_Addr_CTRL_reg                                                0xB802C924
#define  LDSPI_Data_Addr_CTRL_inst_addr                                          "0x0017"
#define  set_LDSPI_Data_Addr_CTRL_reg(data)                                      (*((volatile unsigned int*)LDSPI_Data_Addr_CTRL_reg)=data)
#define  get_LDSPI_Data_Addr_CTRL_reg                                            (*((volatile unsigned int*)LDSPI_Data_Addr_CTRL_reg))
#define  LDSPI_Data_Addr_CTRL_data_rw_pointer_set_shift                          (16)
#define  LDSPI_Data_Addr_CTRL_data_rw_pointer_shift                              (0)
#define  LDSPI_Data_Addr_CTRL_data_rw_pointer_set_mask                           (0x0FFF0000)
#define  LDSPI_Data_Addr_CTRL_data_rw_pointer_mask                               (0x00000FFF)
#define  LDSPI_Data_Addr_CTRL_data_rw_pointer_set(data)                          (0x0FFF0000&((data)<<16))
#define  LDSPI_Data_Addr_CTRL_data_rw_pointer(data)                              (0x00000FFF&(data))
#define  LDSPI_Data_Addr_CTRL_get_data_rw_pointer_set(data)                      ((0x0FFF0000&(data))>>16)
#define  LDSPI_Data_Addr_CTRL_get_data_rw_pointer(data)                          (0x00000FFF&(data))

#define  LDSPI_Data_Rwport                                                      0x1802C928
#define  LDSPI_Data_Rwport_reg_addr                                              "0xB802C928"
#define  LDSPI_Data_Rwport_reg                                                   0xB802C928
#define  LDSPI_Data_Rwport_inst_addr                                             "0x0018"
#define  set_LDSPI_Data_Rwport_reg(data)                                         (*((volatile unsigned int*)LDSPI_Data_Rwport_reg)=data)
#define  get_LDSPI_Data_Rwport_reg                                               (*((volatile unsigned int*)LDSPI_Data_Rwport_reg))
#define  LDSPI_Data_Rwport_data_rw_data_port_shift                               (0)
#define  LDSPI_Data_Rwport_data_rw_data_port_mask                                (0x00000FFF)
#define  LDSPI_Data_Rwport_data_rw_data_port(data)                               (0x00000FFF&(data))
#define  LDSPI_Data_Rwport_get_data_rw_data_port(data)                           (0x00000FFF&(data))

#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0                                         0x1802C984
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_reg_addr                                 "0xB802C984"
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_reg                                      0xB802C984
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_inst_addr                                "0x0019"
#define  set_LDSPI_Data_SRAM_SPECIAL_CTRL_0_reg(data)                            (*((volatile unsigned int*)LDSPI_Data_SRAM_SPECIAL_CTRL_0_reg)=data)
#define  get_LDSPI_Data_SRAM_SPECIAL_CTRL_0_reg                                  (*((volatile unsigned int*)LDSPI_Data_SRAM_SPECIAL_CTRL_0_reg))
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_vrepeat_width_shift                      (20)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_vrepeat_shift                            (16)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_hrepeat_shift                            (12)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_data_sram_byte_sel_mode_shift            (8)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_data_sram_sft_ctrl_shift                 (0)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_vrepeat_width_mask                       (0x7FF00000)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_vrepeat_mask                             (0x000F0000)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_hrepeat_mask                             (0x0000F000)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_data_sram_byte_sel_mode_mask             (0x00000100)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_data_sram_sft_ctrl_mask                  (0x0000001F)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_vrepeat_width(data)                      (0x7FF00000&((data)<<20))
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_vrepeat(data)                            (0x000F0000&((data)<<16))
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_hrepeat(data)                            (0x0000F000&((data)<<12))
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_data_sram_byte_sel_mode(data)            (0x00000100&((data)<<8))
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_data_sram_sft_ctrl(data)                 (0x0000001F&(data))
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_get_vrepeat_width(data)                  ((0x7FF00000&(data))>>20)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_get_vrepeat(data)                        ((0x000F0000&(data))>>16)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_get_hrepeat(data)                        ((0x0000F000&(data))>>12)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_get_data_sram_byte_sel_mode(data)        ((0x00000100&(data))>>8)
#define  LDSPI_Data_SRAM_SPECIAL_CTRL_0_get_data_sram_sft_ctrl(data)             (0x0000001F&(data))

#define  LDSPI_AS_WR_CTRL                                                       0x1802C92C
#define  LDSPI_AS_WR_CTRL_reg_addr                                               "0xB802C92C"
#define  LDSPI_AS_WR_CTRL_reg                                                    0xB802C92C
#define  LDSPI_AS_WR_CTRL_inst_addr                                              "0x001A"
#define  set_LDSPI_AS_WR_CTRL_reg(data)                                          (*((volatile unsigned int*)LDSPI_AS_WR_CTRL_reg)=data)
#define  get_LDSPI_AS_WR_CTRL_reg                                                (*((volatile unsigned int*)LDSPI_AS_WR_CTRL_reg))
#define  LDSPI_AS_WR_CTRL_as_read_after_n_byte_shift                             (20)
#define  LDSPI_AS_WR_CTRL_swap_of_16_bit_shift                                   (16)
#define  LDSPI_AS_WR_CTRL_as_force_txorrx_mode_en_shift                          (8)
#define  LDSPI_AS_WR_CTRL_as_force_txorrx_mode_shift                             (7)
#define  LDSPI_AS_WR_CTRL_rw_bit_sent_sel_shift                                  (6)
#define  LDSPI_AS_WR_CTRL_rw_cmd_sel_shift                                       (5)
#define  LDSPI_AS_WR_CTRL_rwcmd_shift                                            (4)
#define  LDSPI_AS_WR_CTRL_w_package_repeater_shift                               (0)
#define  LDSPI_AS_WR_CTRL_as_read_after_n_byte_mask                              (0x3FF00000)
#define  LDSPI_AS_WR_CTRL_swap_of_16_bit_mask                                    (0x00010000)
#define  LDSPI_AS_WR_CTRL_as_force_txorrx_mode_en_mask                           (0x00000100)
#define  LDSPI_AS_WR_CTRL_as_force_txorrx_mode_mask                              (0x00000080)
#define  LDSPI_AS_WR_CTRL_rw_bit_sent_sel_mask                                   (0x00000040)
#define  LDSPI_AS_WR_CTRL_rw_cmd_sel_mask                                        (0x00000020)
#define  LDSPI_AS_WR_CTRL_rwcmd_mask                                             (0x00000010)
#define  LDSPI_AS_WR_CTRL_w_package_repeater_mask                                (0x0000000F)
#define  LDSPI_AS_WR_CTRL_as_read_after_n_byte(data)                             (0x3FF00000&((data)<<20))
#define  LDSPI_AS_WR_CTRL_swap_of_16_bit(data)                                   (0x00010000&((data)<<16))
#define  LDSPI_AS_WR_CTRL_as_force_txorrx_mode_en(data)                          (0x00000100&((data)<<8))
#define  LDSPI_AS_WR_CTRL_as_force_txorrx_mode(data)                             (0x00000080&((data)<<7))
#define  LDSPI_AS_WR_CTRL_rw_bit_sent_sel(data)                                  (0x00000040&((data)<<6))
#define  LDSPI_AS_WR_CTRL_rw_cmd_sel(data)                                       (0x00000020&((data)<<5))
#define  LDSPI_AS_WR_CTRL_rwcmd(data)                                            (0x00000010&((data)<<4))
#define  LDSPI_AS_WR_CTRL_w_package_repeater(data)                               (0x0000000F&(data))
#define  LDSPI_AS_WR_CTRL_get_as_read_after_n_byte(data)                         ((0x3FF00000&(data))>>20)
#define  LDSPI_AS_WR_CTRL_get_swap_of_16_bit(data)                               ((0x00010000&(data))>>16)
#define  LDSPI_AS_WR_CTRL_get_as_force_txorrx_mode_en(data)                      ((0x00000100&(data))>>8)
#define  LDSPI_AS_WR_CTRL_get_as_force_txorrx_mode(data)                         ((0x00000080&(data))>>7)
#define  LDSPI_AS_WR_CTRL_get_rw_bit_sent_sel(data)                              ((0x00000040&(data))>>6)
#define  LDSPI_AS_WR_CTRL_get_rw_cmd_sel(data)                                   ((0x00000020&(data))>>5)
#define  LDSPI_AS_WR_CTRL_get_rwcmd(data)                                        ((0x00000010&(data))>>4)
#define  LDSPI_AS_WR_CTRL_get_w_package_repeater(data)                           (0x0000000F&(data))

#define  LDSPI_WCLR_CTRL                                                        0x1802C960
#define  LDSPI_WCLR_CTRL_reg_addr                                                "0xB802C960"
#define  LDSPI_WCLR_CTRL_reg                                                     0xB802C960
#define  LDSPI_WCLR_CTRL_inst_addr                                               "0x001B"
#define  set_LDSPI_WCLR_CTRL_reg(data)                                           (*((volatile unsigned int*)LDSPI_WCLR_CTRL_reg)=data)
#define  get_LDSPI_WCLR_CTRL_reg                                                 (*((volatile unsigned int*)LDSPI_WCLR_CTRL_reg))
#define  LDSPI_WCLR_CTRL_rx_done_shift                                           (31)
#define  LDSPI_WCLR_CTRL_rx_done_ld_spi1_shift                                   (30)
#define  LDSPI_WCLR_CTRL_rx_time_out_pending_shift                               (29)
#define  LDSPI_WCLR_CTRL_rx_ld_spi1_pending_shift                                (28)
#define  LDSPI_WCLR_CTRL_tx_done_shift                                           (27)
#define  LDSPI_WCLR_CTRL_tx_done_1_shift                                         (26)
#define  LDSPI_WCLR_CTRL_cmd_error_status_shift                                  (11)
#define  LDSPI_WCLR_CTRL_rx_done_mask                                            (0x80000000)
#define  LDSPI_WCLR_CTRL_rx_done_ld_spi1_mask                                    (0x40000000)
#define  LDSPI_WCLR_CTRL_rx_time_out_pending_mask                                (0x20000000)
#define  LDSPI_WCLR_CTRL_rx_ld_spi1_pending_mask                                 (0x10000000)
#define  LDSPI_WCLR_CTRL_tx_done_mask                                            (0x08000000)
#define  LDSPI_WCLR_CTRL_tx_done_1_mask                                          (0x04000000)
#define  LDSPI_WCLR_CTRL_cmd_error_status_mask                                   (0x00000800)
#define  LDSPI_WCLR_CTRL_rx_done(data)                                           (0x80000000&((data)<<31))
#define  LDSPI_WCLR_CTRL_rx_done_ld_spi1(data)                                   (0x40000000&((data)<<30))
#define  LDSPI_WCLR_CTRL_rx_time_out_pending(data)                               (0x20000000&((data)<<29))
#define  LDSPI_WCLR_CTRL_rx_ld_spi1_pending(data)                                (0x10000000&((data)<<28))
#define  LDSPI_WCLR_CTRL_tx_done(data)                                           (0x08000000&((data)<<27))
#define  LDSPI_WCLR_CTRL_tx_done_1(data)                                         (0x04000000&((data)<<26))
#define  LDSPI_WCLR_CTRL_cmd_error_status(data)                                  (0x00000800&((data)<<11))
#define  LDSPI_WCLR_CTRL_get_rx_done(data)                                       ((0x80000000&(data))>>31)
#define  LDSPI_WCLR_CTRL_get_rx_done_ld_spi1(data)                               ((0x40000000&(data))>>30)
#define  LDSPI_WCLR_CTRL_get_rx_time_out_pending(data)                           ((0x20000000&(data))>>29)
#define  LDSPI_WCLR_CTRL_get_rx_ld_spi1_pending(data)                            ((0x10000000&(data))>>28)
#define  LDSPI_WCLR_CTRL_get_tx_done(data)                                       ((0x08000000&(data))>>27)
#define  LDSPI_WCLR_CTRL_get_tx_done_1(data)                                     ((0x04000000&(data))>>26)
#define  LDSPI_WCLR_CTRL_get_cmd_error_status(data)                              ((0x00000800&(data))>>11)

#define  LDSPI_RX_data_CTRL                                                     0x1802C930
#define  LDSPI_RX_data_CTRL_reg_addr                                             "0xB802C930"
#define  LDSPI_RX_data_CTRL_reg                                                  0xB802C930
#define  LDSPI_RX_data_CTRL_inst_addr                                            "0x001C"
#define  set_LDSPI_RX_data_CTRL_reg(data)                                        (*((volatile unsigned int*)LDSPI_RX_data_CTRL_reg)=data)
#define  get_LDSPI_RX_data_CTRL_reg                                              (*((volatile unsigned int*)LDSPI_RX_data_CTRL_reg))
#define  LDSPI_RX_data_CTRL_rx_done_int_en_shift                                 (31)
#define  LDSPI_RX_data_CTRL_tx_done_int_en_shift                                 (27)
#define  LDSPI_RX_data_CTRL_time_out_period_shift                                (16)
#define  LDSPI_RX_data_CTRL_rx_units_shift                                       (4)
#define  LDSPI_RX_data_CTRL_rx1_timeout_int_en_shift                             (2)
#define  LDSPI_RX_data_CTRL_rx0_timeout_int_en_shift                             (1)
#define  LDSPI_RX_data_CTRL_rx_data_format_shift                                 (0)
#define  LDSPI_RX_data_CTRL_rx_done_int_en_mask                                  (0x80000000)
#define  LDSPI_RX_data_CTRL_tx_done_int_en_mask                                  (0x08000000)
#define  LDSPI_RX_data_CTRL_time_out_period_mask                                 (0x00FF0000)
#define  LDSPI_RX_data_CTRL_rx_units_mask                                        (0x000001F0)
#define  LDSPI_RX_data_CTRL_rx1_timeout_int_en_mask                              (0x00000004)
#define  LDSPI_RX_data_CTRL_rx0_timeout_int_en_mask                              (0x00000002)
#define  LDSPI_RX_data_CTRL_rx_data_format_mask                                  (0x00000001)
#define  LDSPI_RX_data_CTRL_rx_done_int_en(data)                                 (0x80000000&((data)<<31))
#define  LDSPI_RX_data_CTRL_tx_done_int_en(data)                                 (0x08000000&((data)<<27))
#define  LDSPI_RX_data_CTRL_time_out_period(data)                                (0x00FF0000&((data)<<16))
#define  LDSPI_RX_data_CTRL_rx_units(data)                                       (0x000001F0&((data)<<4))
#define  LDSPI_RX_data_CTRL_rx1_timeout_int_en(data)                             (0x00000004&((data)<<2))
#define  LDSPI_RX_data_CTRL_rx0_timeout_int_en(data)                             (0x00000002&((data)<<1))
#define  LDSPI_RX_data_CTRL_rx_data_format(data)                                 (0x00000001&(data))
#define  LDSPI_RX_data_CTRL_get_rx_done_int_en(data)                             ((0x80000000&(data))>>31)
#define  LDSPI_RX_data_CTRL_get_tx_done_int_en(data)                             ((0x08000000&(data))>>27)
#define  LDSPI_RX_data_CTRL_get_time_out_period(data)                            ((0x00FF0000&(data))>>16)
#define  LDSPI_RX_data_CTRL_get_rx_units(data)                                   ((0x000001F0&(data))>>4)
#define  LDSPI_RX_data_CTRL_get_rx1_timeout_int_en(data)                         ((0x00000004&(data))>>2)
#define  LDSPI_RX_data_CTRL_get_rx0_timeout_int_en(data)                         ((0x00000002&(data))>>1)
#define  LDSPI_RX_data_CTRL_get_rx_data_format(data)                             (0x00000001&(data))

#define  LDSPI_RX_dataW0                                                        0x1802C934
#define  LDSPI_RX_dataW0_reg_addr                                                "0xB802C934"
#define  LDSPI_RX_dataW0_reg                                                     0xB802C934
#define  LDSPI_RX_dataW0_inst_addr                                               "0x001D"
#define  set_LDSPI_RX_dataW0_reg(data)                                           (*((volatile unsigned int*)LDSPI_RX_dataW0_reg)=data)
#define  get_LDSPI_RX_dataW0_reg                                                 (*((volatile unsigned int*)LDSPI_RX_dataW0_reg))
#define  LDSPI_RX_dataW0_input_data_byte0_shift                                  (24)
#define  LDSPI_RX_dataW0_input_data_byte1_shift                                  (16)
#define  LDSPI_RX_dataW0_input_data_byte2_shift                                  (8)
#define  LDSPI_RX_dataW0_input_data_byte3_shift                                  (0)
#define  LDSPI_RX_dataW0_input_data_byte0_mask                                   (0xFF000000)
#define  LDSPI_RX_dataW0_input_data_byte1_mask                                   (0x00FF0000)
#define  LDSPI_RX_dataW0_input_data_byte2_mask                                   (0x0000FF00)
#define  LDSPI_RX_dataW0_input_data_byte3_mask                                   (0x000000FF)
#define  LDSPI_RX_dataW0_input_data_byte0(data)                                  (0xFF000000&((data)<<24))
#define  LDSPI_RX_dataW0_input_data_byte1(data)                                  (0x00FF0000&((data)<<16))
#define  LDSPI_RX_dataW0_input_data_byte2(data)                                  (0x0000FF00&((data)<<8))
#define  LDSPI_RX_dataW0_input_data_byte3(data)                                  (0x000000FF&(data))
#define  LDSPI_RX_dataW0_get_input_data_byte0(data)                              ((0xFF000000&(data))>>24)
#define  LDSPI_RX_dataW0_get_input_data_byte1(data)                              ((0x00FF0000&(data))>>16)
#define  LDSPI_RX_dataW0_get_input_data_byte2(data)                              ((0x0000FF00&(data))>>8)
#define  LDSPI_RX_dataW0_get_input_data_byte3(data)                              (0x000000FF&(data))

#define  LDSPI_RX_dataW1                                                        0x1802C938
#define  LDSPI_RX_dataW1_reg_addr                                                "0xB802C938"
#define  LDSPI_RX_dataW1_reg                                                     0xB802C938
#define  LDSPI_RX_dataW1_inst_addr                                               "0x001E"
#define  set_LDSPI_RX_dataW1_reg(data)                                           (*((volatile unsigned int*)LDSPI_RX_dataW1_reg)=data)
#define  get_LDSPI_RX_dataW1_reg                                                 (*((volatile unsigned int*)LDSPI_RX_dataW1_reg))
#define  LDSPI_RX_dataW1_input_data_byte4_shift                                  (24)
#define  LDSPI_RX_dataW1_input_data_byte5_shift                                  (16)
#define  LDSPI_RX_dataW1_input_data_byte6_shift                                  (8)
#define  LDSPI_RX_dataW1_input_data_byte7_shift                                  (0)
#define  LDSPI_RX_dataW1_input_data_byte4_mask                                   (0xFF000000)
#define  LDSPI_RX_dataW1_input_data_byte5_mask                                   (0x00FF0000)
#define  LDSPI_RX_dataW1_input_data_byte6_mask                                   (0x0000FF00)
#define  LDSPI_RX_dataW1_input_data_byte7_mask                                   (0x000000FF)
#define  LDSPI_RX_dataW1_input_data_byte4(data)                                  (0xFF000000&((data)<<24))
#define  LDSPI_RX_dataW1_input_data_byte5(data)                                  (0x00FF0000&((data)<<16))
#define  LDSPI_RX_dataW1_input_data_byte6(data)                                  (0x0000FF00&((data)<<8))
#define  LDSPI_RX_dataW1_input_data_byte7(data)                                  (0x000000FF&(data))
#define  LDSPI_RX_dataW1_get_input_data_byte4(data)                              ((0xFF000000&(data))>>24)
#define  LDSPI_RX_dataW1_get_input_data_byte5(data)                              ((0x00FF0000&(data))>>16)
#define  LDSPI_RX_dataW1_get_input_data_byte6(data)                              ((0x0000FF00&(data))>>8)
#define  LDSPI_RX_dataW1_get_input_data_byte7(data)                              (0x000000FF&(data))

#define  LDSPI_RX_dataW2                                                        0x1802C93C
#define  LDSPI_RX_dataW2_reg_addr                                                "0xB802C93C"
#define  LDSPI_RX_dataW2_reg                                                     0xB802C93C
#define  LDSPI_RX_dataW2_inst_addr                                               "0x001F"
#define  set_LDSPI_RX_dataW2_reg(data)                                           (*((volatile unsigned int*)LDSPI_RX_dataW2_reg)=data)
#define  get_LDSPI_RX_dataW2_reg                                                 (*((volatile unsigned int*)LDSPI_RX_dataW2_reg))
#define  LDSPI_RX_dataW2_input_data_byte8_shift                                  (24)
#define  LDSPI_RX_dataW2_input_data_byte9_shift                                  (16)
#define  LDSPI_RX_dataW2_input_data_byte10_shift                                 (8)
#define  LDSPI_RX_dataW2_input_data_byte11_shift                                 (0)
#define  LDSPI_RX_dataW2_input_data_byte8_mask                                   (0xFF000000)
#define  LDSPI_RX_dataW2_input_data_byte9_mask                                   (0x00FF0000)
#define  LDSPI_RX_dataW2_input_data_byte10_mask                                  (0x0000FF00)
#define  LDSPI_RX_dataW2_input_data_byte11_mask                                  (0x000000FF)
#define  LDSPI_RX_dataW2_input_data_byte8(data)                                  (0xFF000000&((data)<<24))
#define  LDSPI_RX_dataW2_input_data_byte9(data)                                  (0x00FF0000&((data)<<16))
#define  LDSPI_RX_dataW2_input_data_byte10(data)                                 (0x0000FF00&((data)<<8))
#define  LDSPI_RX_dataW2_input_data_byte11(data)                                 (0x000000FF&(data))
#define  LDSPI_RX_dataW2_get_input_data_byte8(data)                              ((0xFF000000&(data))>>24)
#define  LDSPI_RX_dataW2_get_input_data_byte9(data)                              ((0x00FF0000&(data))>>16)
#define  LDSPI_RX_dataW2_get_input_data_byte10(data)                             ((0x0000FF00&(data))>>8)
#define  LDSPI_RX_dataW2_get_input_data_byte11(data)                             (0x000000FF&(data))

#define  LDSPI_RX_dataW3                                                        0x1802C940
#define  LDSPI_RX_dataW3_reg_addr                                                "0xB802C940"
#define  LDSPI_RX_dataW3_reg                                                     0xB802C940
#define  LDSPI_RX_dataW3_inst_addr                                               "0x0020"
#define  set_LDSPI_RX_dataW3_reg(data)                                           (*((volatile unsigned int*)LDSPI_RX_dataW3_reg)=data)
#define  get_LDSPI_RX_dataW3_reg                                                 (*((volatile unsigned int*)LDSPI_RX_dataW3_reg))
#define  LDSPI_RX_dataW3_input_data_byte12_shift                                 (24)
#define  LDSPI_RX_dataW3_input_data_byte13_shift                                 (16)
#define  LDSPI_RX_dataW3_input_data_byte14_shift                                 (8)
#define  LDSPI_RX_dataW3_input_data_byte15_shift                                 (0)
#define  LDSPI_RX_dataW3_input_data_byte12_mask                                  (0xFF000000)
#define  LDSPI_RX_dataW3_input_data_byte13_mask                                  (0x00FF0000)
#define  LDSPI_RX_dataW3_input_data_byte14_mask                                  (0x0000FF00)
#define  LDSPI_RX_dataW3_input_data_byte15_mask                                  (0x000000FF)
#define  LDSPI_RX_dataW3_input_data_byte12(data)                                 (0xFF000000&((data)<<24))
#define  LDSPI_RX_dataW3_input_data_byte13(data)                                 (0x00FF0000&((data)<<16))
#define  LDSPI_RX_dataW3_input_data_byte14(data)                                 (0x0000FF00&((data)<<8))
#define  LDSPI_RX_dataW3_input_data_byte15(data)                                 (0x000000FF&(data))
#define  LDSPI_RX_dataW3_get_input_data_byte12(data)                             ((0xFF000000&(data))>>24)
#define  LDSPI_RX_dataW3_get_input_data_byte13(data)                             ((0x00FF0000&(data))>>16)
#define  LDSPI_RX_dataW3_get_input_data_byte14(data)                             ((0x0000FF00&(data))>>8)
#define  LDSPI_RX_dataW3_get_input_data_byte15(data)                             (0x000000FF&(data))

#define  LDSPI_RX_dataW4                                                        0x1802C944
#define  LDSPI_RX_dataW4_reg_addr                                                "0xB802C944"
#define  LDSPI_RX_dataW4_reg                                                     0xB802C944
#define  LDSPI_RX_dataW4_inst_addr                                               "0x0021"
#define  set_LDSPI_RX_dataW4_reg(data)                                           (*((volatile unsigned int*)LDSPI_RX_dataW4_reg)=data)
#define  get_LDSPI_RX_dataW4_reg                                                 (*((volatile unsigned int*)LDSPI_RX_dataW4_reg))
#define  LDSPI_RX_dataW4_input_data_byte16_shift                                 (24)
#define  LDSPI_RX_dataW4_input_data_byte17_shift                                 (16)
#define  LDSPI_RX_dataW4_input_data_byte18_shift                                 (8)
#define  LDSPI_RX_dataW4_input_data_byte19_shift                                 (0)
#define  LDSPI_RX_dataW4_input_data_byte16_mask                                  (0xFF000000)
#define  LDSPI_RX_dataW4_input_data_byte17_mask                                  (0x00FF0000)
#define  LDSPI_RX_dataW4_input_data_byte18_mask                                  (0x0000FF00)
#define  LDSPI_RX_dataW4_input_data_byte19_mask                                  (0x000000FF)
#define  LDSPI_RX_dataW4_input_data_byte16(data)                                 (0xFF000000&((data)<<24))
#define  LDSPI_RX_dataW4_input_data_byte17(data)                                 (0x00FF0000&((data)<<16))
#define  LDSPI_RX_dataW4_input_data_byte18(data)                                 (0x0000FF00&((data)<<8))
#define  LDSPI_RX_dataW4_input_data_byte19(data)                                 (0x000000FF&(data))
#define  LDSPI_RX_dataW4_get_input_data_byte16(data)                             ((0xFF000000&(data))>>24)
#define  LDSPI_RX_dataW4_get_input_data_byte17(data)                             ((0x00FF0000&(data))>>16)
#define  LDSPI_RX_dataW4_get_input_data_byte18(data)                             ((0x0000FF00&(data))>>8)
#define  LDSPI_RX_dataW4_get_input_data_byte19(data)                             (0x000000FF&(data))

#define  LDSPI_RX_dataW5                                                        0x1802C948
#define  LDSPI_RX_dataW5_reg_addr                                                "0xB802C948"
#define  LDSPI_RX_dataW5_reg                                                     0xB802C948
#define  LDSPI_RX_dataW5_inst_addr                                               "0x0022"
#define  set_LDSPI_RX_dataW5_reg(data)                                           (*((volatile unsigned int*)LDSPI_RX_dataW5_reg)=data)
#define  get_LDSPI_RX_dataW5_reg                                                 (*((volatile unsigned int*)LDSPI_RX_dataW5_reg))
#define  LDSPI_RX_dataW5_input_data_byte20_shift                                 (24)
#define  LDSPI_RX_dataW5_input_data_byte21_shift                                 (16)
#define  LDSPI_RX_dataW5_input_data_byte22_shift                                 (8)
#define  LDSPI_RX_dataW5_input_data_byte23_shift                                 (0)
#define  LDSPI_RX_dataW5_input_data_byte20_mask                                  (0xFF000000)
#define  LDSPI_RX_dataW5_input_data_byte21_mask                                  (0x00FF0000)
#define  LDSPI_RX_dataW5_input_data_byte22_mask                                  (0x0000FF00)
#define  LDSPI_RX_dataW5_input_data_byte23_mask                                  (0x000000FF)
#define  LDSPI_RX_dataW5_input_data_byte20(data)                                 (0xFF000000&((data)<<24))
#define  LDSPI_RX_dataW5_input_data_byte21(data)                                 (0x00FF0000&((data)<<16))
#define  LDSPI_RX_dataW5_input_data_byte22(data)                                 (0x0000FF00&((data)<<8))
#define  LDSPI_RX_dataW5_input_data_byte23(data)                                 (0x000000FF&(data))
#define  LDSPI_RX_dataW5_get_input_data_byte20(data)                             ((0xFF000000&(data))>>24)
#define  LDSPI_RX_dataW5_get_input_data_byte21(data)                             ((0x00FF0000&(data))>>16)
#define  LDSPI_RX_dataW5_get_input_data_byte22(data)                             ((0x0000FF00&(data))>>8)
#define  LDSPI_RX_dataW5_get_input_data_byte23(data)                             (0x000000FF&(data))

#define  LDSPI_RX_dataW6                                                        0x1802C94C
#define  LDSPI_RX_dataW6_reg_addr                                                "0xB802C94C"
#define  LDSPI_RX_dataW6_reg                                                     0xB802C94C
#define  LDSPI_RX_dataW6_inst_addr                                               "0x0023"
#define  set_LDSPI_RX_dataW6_reg(data)                                           (*((volatile unsigned int*)LDSPI_RX_dataW6_reg)=data)
#define  get_LDSPI_RX_dataW6_reg                                                 (*((volatile unsigned int*)LDSPI_RX_dataW6_reg))
#define  LDSPI_RX_dataW6_input_data_byte24_shift                                 (24)
#define  LDSPI_RX_dataW6_input_data_byte25_shift                                 (16)
#define  LDSPI_RX_dataW6_input_data_byte26_shift                                 (8)
#define  LDSPI_RX_dataW6_input_data_byte27_shift                                 (0)
#define  LDSPI_RX_dataW6_input_data_byte24_mask                                  (0xFF000000)
#define  LDSPI_RX_dataW6_input_data_byte25_mask                                  (0x00FF0000)
#define  LDSPI_RX_dataW6_input_data_byte26_mask                                  (0x0000FF00)
#define  LDSPI_RX_dataW6_input_data_byte27_mask                                  (0x000000FF)
#define  LDSPI_RX_dataW6_input_data_byte24(data)                                 (0xFF000000&((data)<<24))
#define  LDSPI_RX_dataW6_input_data_byte25(data)                                 (0x00FF0000&((data)<<16))
#define  LDSPI_RX_dataW6_input_data_byte26(data)                                 (0x0000FF00&((data)<<8))
#define  LDSPI_RX_dataW6_input_data_byte27(data)                                 (0x000000FF&(data))
#define  LDSPI_RX_dataW6_get_input_data_byte24(data)                             ((0xFF000000&(data))>>24)
#define  LDSPI_RX_dataW6_get_input_data_byte25(data)                             ((0x00FF0000&(data))>>16)
#define  LDSPI_RX_dataW6_get_input_data_byte26(data)                             ((0x0000FF00&(data))>>8)
#define  LDSPI_RX_dataW6_get_input_data_byte27(data)                             (0x000000FF&(data))

#define  LDSPI_RX_dataW7                                                        0x1802C950
#define  LDSPI_RX_dataW7_reg_addr                                                "0xB802C950"
#define  LDSPI_RX_dataW7_reg                                                     0xB802C950
#define  LDSPI_RX_dataW7_inst_addr                                               "0x0024"
#define  set_LDSPI_RX_dataW7_reg(data)                                           (*((volatile unsigned int*)LDSPI_RX_dataW7_reg)=data)
#define  get_LDSPI_RX_dataW7_reg                                                 (*((volatile unsigned int*)LDSPI_RX_dataW7_reg))
#define  LDSPI_RX_dataW7_input_data_byte28_shift                                 (24)
#define  LDSPI_RX_dataW7_input_data_byte29_shift                                 (16)
#define  LDSPI_RX_dataW7_input_data_byte30_shift                                 (8)
#define  LDSPI_RX_dataW7_input_data_byte31_shift                                 (0)
#define  LDSPI_RX_dataW7_input_data_byte28_mask                                  (0xFF000000)
#define  LDSPI_RX_dataW7_input_data_byte29_mask                                  (0x00FF0000)
#define  LDSPI_RX_dataW7_input_data_byte30_mask                                  (0x0000FF00)
#define  LDSPI_RX_dataW7_input_data_byte31_mask                                  (0x000000FF)
#define  LDSPI_RX_dataW7_input_data_byte28(data)                                 (0xFF000000&((data)<<24))
#define  LDSPI_RX_dataW7_input_data_byte29(data)                                 (0x00FF0000&((data)<<16))
#define  LDSPI_RX_dataW7_input_data_byte30(data)                                 (0x0000FF00&((data)<<8))
#define  LDSPI_RX_dataW7_input_data_byte31(data)                                 (0x000000FF&(data))
#define  LDSPI_RX_dataW7_get_input_data_byte28(data)                             ((0xFF000000&(data))>>24)
#define  LDSPI_RX_dataW7_get_input_data_byte29(data)                             ((0x00FF0000&(data))>>16)
#define  LDSPI_RX_dataW7_get_input_data_byte30(data)                             ((0x0000FF00&(data))>>8)
#define  LDSPI_RX_dataW7_get_input_data_byte31(data)                             (0x000000FF&(data))

#define  LDSPI_BIST_CTRL0                                                       0x1802C954
#define  LDSPI_BIST_CTRL0_reg_addr                                               "0xB802C954"
#define  LDSPI_BIST_CTRL0_reg                                                    0xB802C954
#define  LDSPI_BIST_CTRL0_inst_addr                                              "0x0025"
#define  set_LDSPI_BIST_CTRL0_reg(data)                                          (*((volatile unsigned int*)LDSPI_BIST_CTRL0_reg)=data)
#define  get_LDSPI_BIST_CTRL0_reg                                                (*((volatile unsigned int*)LDSPI_BIST_CTRL0_reg))
#define  LDSPI_BIST_CTRL0_ld_spi_rme_1_shift                                     (25)
#define  LDSPI_BIST_CTRL0_ld_spi_rm_1_shift                                      (21)
#define  LDSPI_BIST_CTRL0_ld_spi_ls_1_shift                                      (20)
#define  LDSPI_BIST_CTRL0_ld_spi_rme_0_shift                                     (19)
#define  LDSPI_BIST_CTRL0_ld_spi_rm_0_shift                                      (15)
#define  LDSPI_BIST_CTRL0_ld_spi_ls_0_shift                                      (14)
#define  LDSPI_BIST_CTRL0_ld_spi_drf_bist_fail_1_shift                           (3)
#define  LDSPI_BIST_CTRL0_ld_spi_drf_bist_fail_0_shift                           (2)
#define  LDSPI_BIST_CTRL0_ld_spi_bist_fail_1_shift                               (1)
#define  LDSPI_BIST_CTRL0_ld_spi_bist_fail_0_shift                               (0)
#define  LDSPI_BIST_CTRL0_ld_spi_rme_1_mask                                      (0x02000000)
#define  LDSPI_BIST_CTRL0_ld_spi_rm_1_mask                                       (0x01E00000)
#define  LDSPI_BIST_CTRL0_ld_spi_ls_1_mask                                       (0x00100000)
#define  LDSPI_BIST_CTRL0_ld_spi_rme_0_mask                                      (0x00080000)
#define  LDSPI_BIST_CTRL0_ld_spi_rm_0_mask                                       (0x00078000)
#define  LDSPI_BIST_CTRL0_ld_spi_ls_0_mask                                       (0x00004000)
#define  LDSPI_BIST_CTRL0_ld_spi_drf_bist_fail_1_mask                            (0x00000008)
#define  LDSPI_BIST_CTRL0_ld_spi_drf_bist_fail_0_mask                            (0x00000004)
#define  LDSPI_BIST_CTRL0_ld_spi_bist_fail_1_mask                                (0x00000002)
#define  LDSPI_BIST_CTRL0_ld_spi_bist_fail_0_mask                                (0x00000001)
#define  LDSPI_BIST_CTRL0_ld_spi_rme_1(data)                                     (0x02000000&((data)<<25))
#define  LDSPI_BIST_CTRL0_ld_spi_rm_1(data)                                      (0x01E00000&((data)<<21))
#define  LDSPI_BIST_CTRL0_ld_spi_ls_1(data)                                      (0x00100000&((data)<<20))
#define  LDSPI_BIST_CTRL0_ld_spi_rme_0(data)                                     (0x00080000&((data)<<19))
#define  LDSPI_BIST_CTRL0_ld_spi_rm_0(data)                                      (0x00078000&((data)<<15))
#define  LDSPI_BIST_CTRL0_ld_spi_ls_0(data)                                      (0x00004000&((data)<<14))
#define  LDSPI_BIST_CTRL0_ld_spi_drf_bist_fail_1(data)                           (0x00000008&((data)<<3))
#define  LDSPI_BIST_CTRL0_ld_spi_drf_bist_fail_0(data)                           (0x00000004&((data)<<2))
#define  LDSPI_BIST_CTRL0_ld_spi_bist_fail_1(data)                               (0x00000002&((data)<<1))
#define  LDSPI_BIST_CTRL0_ld_spi_bist_fail_0(data)                               (0x00000001&(data))
#define  LDSPI_BIST_CTRL0_get_ld_spi_rme_1(data)                                 ((0x02000000&(data))>>25)
#define  LDSPI_BIST_CTRL0_get_ld_spi_rm_1(data)                                  ((0x01E00000&(data))>>21)
#define  LDSPI_BIST_CTRL0_get_ld_spi_ls_1(data)                                  ((0x00100000&(data))>>20)
#define  LDSPI_BIST_CTRL0_get_ld_spi_rme_0(data)                                 ((0x00080000&(data))>>19)
#define  LDSPI_BIST_CTRL0_get_ld_spi_rm_0(data)                                  ((0x00078000&(data))>>15)
#define  LDSPI_BIST_CTRL0_get_ld_spi_ls_0(data)                                  ((0x00004000&(data))>>14)
#define  LDSPI_BIST_CTRL0_get_ld_spi_drf_bist_fail_1(data)                       ((0x00000008&(data))>>3)
#define  LDSPI_BIST_CTRL0_get_ld_spi_drf_bist_fail_0(data)                       ((0x00000004&(data))>>2)
#define  LDSPI_BIST_CTRL0_get_ld_spi_bist_fail_1(data)                           ((0x00000002&(data))>>1)
#define  LDSPI_BIST_CTRL0_get_ld_spi_bist_fail_0(data)                           (0x00000001&(data))

#define  LDSPI_SCAN_LOSS_IF                                                     0x1802C998
#define  LDSPI_SCAN_LOSS_IF_reg_addr                                             "0xB802C998"
#define  LDSPI_SCAN_LOSS_IF_reg                                                  0xB802C998
#define  LDSPI_SCAN_LOSS_IF_inst_addr                                            "0x0026"
#define  set_LDSPI_SCAN_LOSS_IF_reg(data)                                        (*((volatile unsigned int*)LDSPI_SCAN_LOSS_IF_reg)=data)
#define  get_LDSPI_SCAN_LOSS_IF_reg                                              (*((volatile unsigned int*)LDSPI_SCAN_LOSS_IF_reg))
#define  LDSPI_SCAN_LOSS_IF_scan_loss_outen_shift                                (10)
#define  LDSPI_SCAN_LOSS_IF_scan_loss_value_shift                                (9)
#define  LDSPI_SCAN_LOSS_IF_scan_loss_mode_shift                                 (8)
#define  LDSPI_SCAN_LOSS_IF_ld_spi1_p4_sdi_shift                                 (6)
#define  LDSPI_SCAN_LOSS_IF_ld_spi1_p3_sdo_in_shift                              (5)
#define  LDSPI_SCAN_LOSS_IF_ld_spi1_p2_sck_in_shift                              (4)
#define  LDSPI_SCAN_LOSS_IF_ld_spi0_p4_sdi_shift                                 (2)
#define  LDSPI_SCAN_LOSS_IF_ld_spi0_p3_sdo_in_shift                              (1)
#define  LDSPI_SCAN_LOSS_IF_ld_spi0_p2_sck_in_shift                              (0)
#define  LDSPI_SCAN_LOSS_IF_scan_loss_outen_mask                                 (0x00000400)
#define  LDSPI_SCAN_LOSS_IF_scan_loss_value_mask                                 (0x00000200)
#define  LDSPI_SCAN_LOSS_IF_scan_loss_mode_mask                                  (0x00000100)
#define  LDSPI_SCAN_LOSS_IF_ld_spi1_p4_sdi_mask                                  (0x00000040)
#define  LDSPI_SCAN_LOSS_IF_ld_spi1_p3_sdo_in_mask                               (0x00000020)
#define  LDSPI_SCAN_LOSS_IF_ld_spi1_p2_sck_in_mask                               (0x00000010)
#define  LDSPI_SCAN_LOSS_IF_ld_spi0_p4_sdi_mask                                  (0x00000004)
#define  LDSPI_SCAN_LOSS_IF_ld_spi0_p3_sdo_in_mask                               (0x00000002)
#define  LDSPI_SCAN_LOSS_IF_ld_spi0_p2_sck_in_mask                               (0x00000001)
#define  LDSPI_SCAN_LOSS_IF_scan_loss_outen(data)                                (0x00000400&((data)<<10))
#define  LDSPI_SCAN_LOSS_IF_scan_loss_value(data)                                (0x00000200&((data)<<9))
#define  LDSPI_SCAN_LOSS_IF_scan_loss_mode(data)                                 (0x00000100&((data)<<8))
#define  LDSPI_SCAN_LOSS_IF_ld_spi1_p4_sdi(data)                                 (0x00000040&((data)<<6))
#define  LDSPI_SCAN_LOSS_IF_ld_spi1_p3_sdo_in(data)                              (0x00000020&((data)<<5))
#define  LDSPI_SCAN_LOSS_IF_ld_spi1_p2_sck_in(data)                              (0x00000010&((data)<<4))
#define  LDSPI_SCAN_LOSS_IF_ld_spi0_p4_sdi(data)                                 (0x00000004&((data)<<2))
#define  LDSPI_SCAN_LOSS_IF_ld_spi0_p3_sdo_in(data)                              (0x00000002&((data)<<1))
#define  LDSPI_SCAN_LOSS_IF_ld_spi0_p2_sck_in(data)                              (0x00000001&(data))
#define  LDSPI_SCAN_LOSS_IF_get_scan_loss_outen(data)                            ((0x00000400&(data))>>10)
#define  LDSPI_SCAN_LOSS_IF_get_scan_loss_value(data)                            ((0x00000200&(data))>>9)
#define  LDSPI_SCAN_LOSS_IF_get_scan_loss_mode(data)                             ((0x00000100&(data))>>8)
#define  LDSPI_SCAN_LOSS_IF_get_ld_spi1_p4_sdi(data)                             ((0x00000040&(data))>>6)
#define  LDSPI_SCAN_LOSS_IF_get_ld_spi1_p3_sdo_in(data)                          ((0x00000020&(data))>>5)
#define  LDSPI_SCAN_LOSS_IF_get_ld_spi1_p2_sck_in(data)                          ((0x00000010&(data))>>4)
#define  LDSPI_SCAN_LOSS_IF_get_ld_spi0_p4_sdi(data)                             ((0x00000004&(data))>>2)
#define  LDSPI_SCAN_LOSS_IF_get_ld_spi0_p3_sdo_in(data)                          ((0x00000002&(data))>>1)
#define  LDSPI_SCAN_LOSS_IF_get_ld_spi0_p2_sck_in(data)                          (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======LDSPI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_mode:2;
        RBus_UInt32  tx_add_1t:1;
        RBus_UInt32  ld_spi_en:1;
        RBus_UInt32  as_led_reset:1;
        RBus_UInt32  rx_clk_sample_mode:1;
        RBus_UInt32  rx_clk_shift:10;
        RBus_UInt32  rx_sdi_inv:1;
        RBus_UInt32  tx_sdo_inv:1;
        RBus_UInt32  tx_vsync_inv:1;
        RBus_UInt32  tx_hsync_inv:1;
        RBus_UInt32  tx_cs_inv:1;
        RBus_UInt32  tx_clk_inv:1;
        RBus_UInt32  out_data_align:1;
        RBus_UInt32  in_data_align:1;
        RBus_UInt32  as_led_with_cs:1;
        RBus_UInt32  m_plus_round_enable:1;
        RBus_UInt32  m_plus_rgbw_enable:1;
        RBus_UInt32  ld_pin_port_sel:1;
        RBus_UInt32  separate_two_block:1;
        RBus_UInt32  send_follow_vsync:1;
        RBus_UInt32  send_trigger:1;
        RBus_UInt32  start_enable:1;
    };
}ldspi_ld_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  rx_data_shift:10;
    };
}ldspi_rx_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_hold_time:24;
        RBus_UInt32  res1:8;
    };
}ldspi_cs_hold_time_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sck_hold_time:24;
        RBus_UInt32  res1:8;
    };
}ldspi_sck_hold_time_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  double_buf_en:1;
        RBus_UInt32  double_buf_set:1;
        RBus_UInt32  double_buf_read_level:1;
        RBus_UInt32  res1:29;
    };
}ldspi_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_endian:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  tailer_format:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  header_format:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  output_units:13;
        RBus_UInt32  res4:2;
        RBus_UInt32  output_data_format:2;
    };
}ldspi_out_data_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  tailer_units:6;
        RBus_UInt32  header_units:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  data_sram_separate:11;
    };
}ldspi_out_data_form_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sck_h:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  sck_l:8;
    };
}ldspi_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_send_delay:24;
        RBus_UInt32  res1:8;
    };
}ldspi_send_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  each_unit_delay:24;
        RBus_UInt32  res1:8;
    };
}ldspi_data_unit_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  multi_unit_delay:24;
        RBus_UInt32  res1:6;
        RBus_UInt32  delay_format:2;
    };
}ldspi_multi_format_unit_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_d:8;
        RBus_UInt32  hsync_d:8;
        RBus_UInt32  res1:16;
    };
}ldspi_v_sync_duty_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  cs_end_delay_time:10;
    };
}ldspi_data_h_time_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_delay:24;
        RBus_UInt32  res1:8;
    };
}ldspi_ld_spi_v_sync_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_dh_total:13;
        RBus_UInt32  res1:19;
    };
}ldspi_ld_spi_h_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_dv_total:13;
        RBus_UInt32  res1:5;
        RBus_UInt32  dv_total_src_sel:1;
        RBus_UInt32  dv_total_sync_dtg:13;
    };
}ldspi_ld_spi_v_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  dv_reproduce_mode:3;
    };
}ldspi_ld_spi_reproduce_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802c974_31_0:32;
    };
}ldspi_ld_spi_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ld_backlight_timing_delay:24;
    };
}ldspi_ld_spi_ld_timing_fune_tune_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ld_timing_error:1;
    };
}ldspi_ld_spi_ld_timing_error_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ld_spi_timing_error:1;
    };
}ldspi_ld_spi_ld_spi_timing_error_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  outindex_rw_pointer_set:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  outindex_rw_pointer:11;
    };
}ldspi_outindex_addr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  outindex_rw_data_port:12;
    };
}ldspi_outindex_rwport_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  data_rw_pointer_set:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  data_rw_pointer:12;
    };
}ldspi_data_addr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  data_rw_data_port:12;
    };
}ldspi_data_rwport_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  vrepeat_width:11;
        RBus_UInt32  vrepeat:4;
        RBus_UInt32  hrepeat:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  data_sram_byte_sel_mode:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  data_sram_sft_ctrl:5;
    };
}ldspi_data_sram_special_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  as_read_after_n_byte:10;
        RBus_UInt32  res2:3;
        RBus_UInt32  swap_of_16_bit:1;
        RBus_UInt32  res3:7;
        RBus_UInt32  as_force_txorrx_mode_en:1;
        RBus_UInt32  as_force_txorrx_mode:1;
        RBus_UInt32  rw_bit_sent_sel:1;
        RBus_UInt32  rw_cmd_sel:1;
        RBus_UInt32  rwcmd:1;
        RBus_UInt32  w_package_repeater:4;
    };
}ldspi_as_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_done:1;
        RBus_UInt32  rx_done_ld_spi1:1;
        RBus_UInt32  rx_time_out_pending:1;
        RBus_UInt32  rx_ld_spi1_pending:1;
        RBus_UInt32  tx_done:1;
        RBus_UInt32  tx_done_1:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  cmd_error_status:1;
        RBus_UInt32  res2:11;
    };
}ldspi_wclr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_done_int_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  tx_done_int_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  time_out_period:8;
        RBus_UInt32  res3:7;
        RBus_UInt32  rx_units:5;
        RBus_UInt32  res4:1;
        RBus_UInt32  rx1_timeout_int_en:1;
        RBus_UInt32  rx0_timeout_int_en:1;
        RBus_UInt32  rx_data_format:1;
    };
}ldspi_rx_data_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte0:8;
        RBus_UInt32  input_data_byte1:8;
        RBus_UInt32  input_data_byte2:8;
        RBus_UInt32  input_data_byte3:8;
    };
}ldspi_rx_dataw0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte4:8;
        RBus_UInt32  input_data_byte5:8;
        RBus_UInt32  input_data_byte6:8;
        RBus_UInt32  input_data_byte7:8;
    };
}ldspi_rx_dataw1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte8:8;
        RBus_UInt32  input_data_byte9:8;
        RBus_UInt32  input_data_byte10:8;
        RBus_UInt32  input_data_byte11:8;
    };
}ldspi_rx_dataw2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte12:8;
        RBus_UInt32  input_data_byte13:8;
        RBus_UInt32  input_data_byte14:8;
        RBus_UInt32  input_data_byte15:8;
    };
}ldspi_rx_dataw3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte16:8;
        RBus_UInt32  input_data_byte17:8;
        RBus_UInt32  input_data_byte18:8;
        RBus_UInt32  input_data_byte19:8;
    };
}ldspi_rx_dataw4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte20:8;
        RBus_UInt32  input_data_byte21:8;
        RBus_UInt32  input_data_byte22:8;
        RBus_UInt32  input_data_byte23:8;
    };
}ldspi_rx_dataw5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte24:8;
        RBus_UInt32  input_data_byte25:8;
        RBus_UInt32  input_data_byte26:8;
        RBus_UInt32  input_data_byte27:8;
    };
}ldspi_rx_dataw6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte28:8;
        RBus_UInt32  input_data_byte29:8;
        RBus_UInt32  input_data_byte30:8;
        RBus_UInt32  input_data_byte31:8;
    };
}ldspi_rx_dataw7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  ld_spi_rme_1:1;
        RBus_UInt32  ld_spi_rm_1:4;
        RBus_UInt32  ld_spi_ls_1:1;
        RBus_UInt32  ld_spi_rme_0:1;
        RBus_UInt32  ld_spi_rm_0:4;
        RBus_UInt32  ld_spi_ls_0:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  ld_spi_drf_bist_fail_1:1;
        RBus_UInt32  ld_spi_drf_bist_fail_0:1;
        RBus_UInt32  ld_spi_bist_fail_1:1;
        RBus_UInt32  ld_spi_bist_fail_0:1;
    };
}ldspi_bist_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  scan_loss_outen:1;
        RBus_UInt32  scan_loss_value:1;
        RBus_UInt32  scan_loss_mode:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  ld_spi1_p4_sdi:1;
        RBus_UInt32  ld_spi1_p3_sdo_in:1;
        RBus_UInt32  ld_spi1_p2_sck_in:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  ld_spi0_p4_sdi:1;
        RBus_UInt32  ld_spi0_p3_sdo_in:1;
        RBus_UInt32  ld_spi0_p2_sck_in:1;
    };
}ldspi_scan_loss_if_RBUS;

#else //apply LITTLE_ENDIAN

//======LDSPI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_enable:1;
        RBus_UInt32  send_trigger:1;
        RBus_UInt32  send_follow_vsync:1;
        RBus_UInt32  separate_two_block:1;
        RBus_UInt32  ld_pin_port_sel:1;
        RBus_UInt32  m_plus_rgbw_enable:1;
        RBus_UInt32  m_plus_round_enable:1;
        RBus_UInt32  as_led_with_cs:1;
        RBus_UInt32  in_data_align:1;
        RBus_UInt32  out_data_align:1;
        RBus_UInt32  tx_clk_inv:1;
        RBus_UInt32  tx_cs_inv:1;
        RBus_UInt32  tx_hsync_inv:1;
        RBus_UInt32  tx_vsync_inv:1;
        RBus_UInt32  tx_sdo_inv:1;
        RBus_UInt32  rx_sdi_inv:1;
        RBus_UInt32  rx_clk_shift:10;
        RBus_UInt32  rx_clk_sample_mode:1;
        RBus_UInt32  as_led_reset:1;
        RBus_UInt32  ld_spi_en:1;
        RBus_UInt32  tx_add_1t:1;
        RBus_UInt32  ld_mode:2;
    };
}ldspi_ld_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_data_shift:10;
        RBus_UInt32  res1:22;
    };
}ldspi_rx_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cs_hold_time:24;
    };
}ldspi_cs_hold_time_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  sck_hold_time:24;
    };
}ldspi_sck_hold_time_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  double_buf_read_level:1;
        RBus_UInt32  double_buf_set:1;
        RBus_UInt32  double_buf_en:1;
    };
}ldspi_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  output_data_format:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  output_units:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  header_format:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  tailer_format:2;
        RBus_UInt32  res4:5;
        RBus_UInt32  data_endian:1;
    };
}ldspi_out_data_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_sram_separate:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  header_units:8;
        RBus_UInt32  tailer_units:6;
        RBus_UInt32  res2:6;
    };
}ldspi_out_data_form_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sck_l:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  sck_h:8;
        RBus_UInt32  res2:8;
    };
}ldspi_timing_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  data_send_delay:24;
    };
}ldspi_send_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  each_unit_delay:24;
    };
}ldspi_data_unit_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  delay_format:2;
        RBus_UInt32  res1:6;
        RBus_UInt32  multi_unit_delay:24;
    };
}ldspi_multi_format_unit_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hsync_d:8;
        RBus_UInt32  vsync_d:8;
    };
}ldspi_v_sync_duty_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_end_delay_time:10;
        RBus_UInt32  res1:22;
    };
}ldspi_data_h_time_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  vsync_delay:24;
    };
}ldspi_ld_spi_v_sync_delay_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  ld_spi_dh_total:13;
    };
}ldspi_ld_spi_h_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dv_total_sync_dtg:13;
        RBus_UInt32  dv_total_src_sel:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  ld_spi_dv_total:13;
    };
}ldspi_ld_spi_v_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dv_reproduce_mode:3;
        RBus_UInt32  res1:29;
    };
}ldspi_ld_spi_reproduce_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802c974_31_0:32;
    };
}ldspi_ld_spi_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_backlight_timing_delay:24;
        RBus_UInt32  res1:8;
    };
}ldspi_ld_spi_ld_timing_fune_tune_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_timing_error:1;
        RBus_UInt32  res1:31;
    };
}ldspi_ld_spi_ld_timing_error_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_timing_error:1;
        RBus_UInt32  res1:31;
    };
}ldspi_ld_spi_ld_spi_timing_error_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  outindex_rw_pointer:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  outindex_rw_pointer_set:11;
        RBus_UInt32  res2:5;
    };
}ldspi_outindex_addr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  outindex_rw_data_port:12;
        RBus_UInt32  res1:20;
    };
}ldspi_outindex_rwport_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_rw_pointer:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  data_rw_pointer_set:12;
        RBus_UInt32  res2:4;
    };
}ldspi_data_addr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_rw_data_port:12;
        RBus_UInt32  res1:20;
    };
}ldspi_data_rwport_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_sram_sft_ctrl:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  data_sram_byte_sel_mode:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  hrepeat:4;
        RBus_UInt32  vrepeat:4;
        RBus_UInt32  vrepeat_width:11;
        RBus_UInt32  res3:1;
    };
}ldspi_data_sram_special_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  w_package_repeater:4;
        RBus_UInt32  rwcmd:1;
        RBus_UInt32  rw_cmd_sel:1;
        RBus_UInt32  rw_bit_sent_sel:1;
        RBus_UInt32  as_force_txorrx_mode:1;
        RBus_UInt32  as_force_txorrx_mode_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  swap_of_16_bit:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  as_read_after_n_byte:10;
        RBus_UInt32  res3:2;
    };
}ldspi_as_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmd_error_status:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  tx_done_1:1;
        RBus_UInt32  tx_done:1;
        RBus_UInt32  rx_ld_spi1_pending:1;
        RBus_UInt32  rx_time_out_pending:1;
        RBus_UInt32  rx_done_ld_spi1:1;
        RBus_UInt32  rx_done:1;
    };
}ldspi_wclr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rx_data_format:1;
        RBus_UInt32  rx0_timeout_int_en:1;
        RBus_UInt32  rx1_timeout_int_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  rx_units:5;
        RBus_UInt32  res2:7;
        RBus_UInt32  time_out_period:8;
        RBus_UInt32  res3:3;
        RBus_UInt32  tx_done_int_en:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  rx_done_int_en:1;
    };
}ldspi_rx_data_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte3:8;
        RBus_UInt32  input_data_byte2:8;
        RBus_UInt32  input_data_byte1:8;
        RBus_UInt32  input_data_byte0:8;
    };
}ldspi_rx_dataw0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte7:8;
        RBus_UInt32  input_data_byte6:8;
        RBus_UInt32  input_data_byte5:8;
        RBus_UInt32  input_data_byte4:8;
    };
}ldspi_rx_dataw1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte11:8;
        RBus_UInt32  input_data_byte10:8;
        RBus_UInt32  input_data_byte9:8;
        RBus_UInt32  input_data_byte8:8;
    };
}ldspi_rx_dataw2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte15:8;
        RBus_UInt32  input_data_byte14:8;
        RBus_UInt32  input_data_byte13:8;
        RBus_UInt32  input_data_byte12:8;
    };
}ldspi_rx_dataw3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte19:8;
        RBus_UInt32  input_data_byte18:8;
        RBus_UInt32  input_data_byte17:8;
        RBus_UInt32  input_data_byte16:8;
    };
}ldspi_rx_dataw4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte23:8;
        RBus_UInt32  input_data_byte22:8;
        RBus_UInt32  input_data_byte21:8;
        RBus_UInt32  input_data_byte20:8;
    };
}ldspi_rx_dataw5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte27:8;
        RBus_UInt32  input_data_byte26:8;
        RBus_UInt32  input_data_byte25:8;
        RBus_UInt32  input_data_byte24:8;
    };
}ldspi_rx_dataw6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  input_data_byte31:8;
        RBus_UInt32  input_data_byte30:8;
        RBus_UInt32  input_data_byte29:8;
        RBus_UInt32  input_data_byte28:8;
    };
}ldspi_rx_dataw7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi_bist_fail_0:1;
        RBus_UInt32  ld_spi_bist_fail_1:1;
        RBus_UInt32  ld_spi_drf_bist_fail_0:1;
        RBus_UInt32  ld_spi_drf_bist_fail_1:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  ld_spi_ls_0:1;
        RBus_UInt32  ld_spi_rm_0:4;
        RBus_UInt32  ld_spi_rme_0:1;
        RBus_UInt32  ld_spi_ls_1:1;
        RBus_UInt32  ld_spi_rm_1:4;
        RBus_UInt32  ld_spi_rme_1:1;
        RBus_UInt32  res2:6;
    };
}ldspi_bist_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi0_p2_sck_in:1;
        RBus_UInt32  ld_spi0_p3_sdo_in:1;
        RBus_UInt32  ld_spi0_p4_sdi:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ld_spi1_p2_sck_in:1;
        RBus_UInt32  ld_spi1_p3_sdo_in:1;
        RBus_UInt32  ld_spi1_p4_sdi:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  scan_loss_mode:1;
        RBus_UInt32  scan_loss_value:1;
        RBus_UInt32  scan_loss_outen:1;
        RBus_UInt32  res3:21;
    };
}ldspi_scan_loss_if_RBUS;




#endif 


#endif 
