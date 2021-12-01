/**
* @file Merlin5-DesignSpec-CardReader_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SD_ALL_TOP_REG_H_
#define _RBUS_SD_ALL_TOP_REG_H_

#include "rbus_types.h"



//  SD_ALL_TOP Register Address
#define  SD_ALL_TOP_SD_CONFIGURE1                                               0x18010C00
#define  SD_ALL_TOP_SD_CONFIGURE1_reg_addr                                       "0xB8010C00"
#define  SD_ALL_TOP_SD_CONFIGURE1_reg                                            0xB8010C00
#define  SD_ALL_TOP_SD_CONFIGURE1_inst_addr                                      "0x0000"
#define  set_SD_ALL_TOP_SD_CONFIGURE1_reg(data)                                  (*((volatile unsigned int*)SD_ALL_TOP_SD_CONFIGURE1_reg)=data)
#define  get_SD_ALL_TOP_SD_CONFIGURE1_reg                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_CONFIGURE1_reg))
#define  SD_ALL_TOP_SD_CONFIGURE1_init_mode_1_shift                              (7)
#define  SD_ALL_TOP_SD_CONFIGURE1_clk_div_1_shift                                (6)
#define  SD_ALL_TOP_SD_CONFIGURE1_sd_async_fifo_rstn_shift                       (4)
#define  SD_ALL_TOP_SD_CONFIGURE1_mode_sel_1_shift                               (2)
#define  SD_ALL_TOP_SD_CONFIGURE1_bit_mode_1_shift                               (0)
#define  SD_ALL_TOP_SD_CONFIGURE1_init_mode_1_mask                               (0x00000080)
#define  SD_ALL_TOP_SD_CONFIGURE1_clk_div_1_mask                                 (0x00000040)
#define  SD_ALL_TOP_SD_CONFIGURE1_sd_async_fifo_rstn_mask                        (0x00000010)
#define  SD_ALL_TOP_SD_CONFIGURE1_mode_sel_1_mask                                (0x0000000C)
#define  SD_ALL_TOP_SD_CONFIGURE1_bit_mode_1_mask                                (0x00000003)
#define  SD_ALL_TOP_SD_CONFIGURE1_init_mode_1(data)                              (0x00000080&((data)<<7))
#define  SD_ALL_TOP_SD_CONFIGURE1_clk_div_1(data)                                (0x00000040&((data)<<6))
#define  SD_ALL_TOP_SD_CONFIGURE1_sd_async_fifo_rstn(data)                       (0x00000010&((data)<<4))
#define  SD_ALL_TOP_SD_CONFIGURE1_mode_sel_1(data)                               (0x0000000C&((data)<<2))
#define  SD_ALL_TOP_SD_CONFIGURE1_bit_mode_1(data)                               (0x00000003&(data))
#define  SD_ALL_TOP_SD_CONFIGURE1_get_init_mode_1(data)                          ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_SD_CONFIGURE1_get_clk_div_1(data)                            ((0x00000040&(data))>>6)
#define  SD_ALL_TOP_SD_CONFIGURE1_get_sd_async_fifo_rstn(data)                   ((0x00000010&(data))>>4)
#define  SD_ALL_TOP_SD_CONFIGURE1_get_mode_sel_1(data)                           ((0x0000000C&(data))>>2)
#define  SD_ALL_TOP_SD_CONFIGURE1_get_bit_mode_1(data)                           (0x00000003&(data))

#define  SD_ALL_TOP_SD_CONFIGURE2                                               0x18010C04
#define  SD_ALL_TOP_SD_CONFIGURE2_reg_addr                                       "0xB8010C04"
#define  SD_ALL_TOP_SD_CONFIGURE2_reg                                            0xB8010C04
#define  SD_ALL_TOP_SD_CONFIGURE2_inst_addr                                      "0x0001"
#define  set_SD_ALL_TOP_SD_CONFIGURE2_reg(data)                                  (*((volatile unsigned int*)SD_ALL_TOP_SD_CONFIGURE2_reg)=data)
#define  get_SD_ALL_TOP_SD_CONFIGURE2_reg                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_CONFIGURE2_reg))
#define  SD_ALL_TOP_SD_CONFIGURE2_no_crc7_shift                                  (7)
#define  SD_ALL_TOP_SD_CONFIGURE2_check_crc16_shift                              (6)
#define  SD_ALL_TOP_SD_CONFIGURE2_write_status_time_out_en_shift                 (5)
#define  SD_ALL_TOP_SD_CONFIGURE2_ignore_write_error_shift                       (4)
#define  SD_ALL_TOP_SD_CONFIGURE2_wait_busy_shift                                (3)
#define  SD_ALL_TOP_SD_CONFIGURE2_check_crc7_shift                               (2)
#define  SD_ALL_TOP_SD_CONFIGURE2_rsp_length_shift                               (0)
#define  SD_ALL_TOP_SD_CONFIGURE2_no_crc7_mask                                   (0x00000080)
#define  SD_ALL_TOP_SD_CONFIGURE2_check_crc16_mask                               (0x00000040)
#define  SD_ALL_TOP_SD_CONFIGURE2_write_status_time_out_en_mask                  (0x00000020)
#define  SD_ALL_TOP_SD_CONFIGURE2_ignore_write_error_mask                        (0x00000010)
#define  SD_ALL_TOP_SD_CONFIGURE2_wait_busy_mask                                 (0x00000008)
#define  SD_ALL_TOP_SD_CONFIGURE2_check_crc7_mask                                (0x00000004)
#define  SD_ALL_TOP_SD_CONFIGURE2_rsp_length_mask                                (0x00000003)
#define  SD_ALL_TOP_SD_CONFIGURE2_no_crc7(data)                                  (0x00000080&((data)<<7))
#define  SD_ALL_TOP_SD_CONFIGURE2_check_crc16(data)                              (0x00000040&((data)<<6))
#define  SD_ALL_TOP_SD_CONFIGURE2_write_status_time_out_en(data)                 (0x00000020&((data)<<5))
#define  SD_ALL_TOP_SD_CONFIGURE2_ignore_write_error(data)                       (0x00000010&((data)<<4))
#define  SD_ALL_TOP_SD_CONFIGURE2_wait_busy(data)                                (0x00000008&((data)<<3))
#define  SD_ALL_TOP_SD_CONFIGURE2_check_crc7(data)                               (0x00000004&((data)<<2))
#define  SD_ALL_TOP_SD_CONFIGURE2_rsp_length(data)                               (0x00000003&(data))
#define  SD_ALL_TOP_SD_CONFIGURE2_get_no_crc7(data)                              ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_SD_CONFIGURE2_get_check_crc16(data)                          ((0x00000040&(data))>>6)
#define  SD_ALL_TOP_SD_CONFIGURE2_get_write_status_time_out_en(data)             ((0x00000020&(data))>>5)
#define  SD_ALL_TOP_SD_CONFIGURE2_get_ignore_write_error(data)                   ((0x00000010&(data))>>4)
#define  SD_ALL_TOP_SD_CONFIGURE2_get_wait_busy(data)                            ((0x00000008&(data))>>3)
#define  SD_ALL_TOP_SD_CONFIGURE2_get_check_crc7(data)                           ((0x00000004&(data))>>2)
#define  SD_ALL_TOP_SD_CONFIGURE2_get_rsp_length(data)                           (0x00000003&(data))

#define  SD_ALL_TOP_SD_CONFIGURE3                                               0x18010C08
#define  SD_ALL_TOP_SD_CONFIGURE3_reg_addr                                       "0xB8010C08"
#define  SD_ALL_TOP_SD_CONFIGURE3_reg                                            0xB8010C08
#define  SD_ALL_TOP_SD_CONFIGURE3_inst_addr                                      "0x0002"
#define  set_SD_ALL_TOP_SD_CONFIGURE3_reg(data)                                  (*((volatile unsigned int*)SD_ALL_TOP_SD_CONFIGURE3_reg)=data)
#define  get_SD_ALL_TOP_SD_CONFIGURE3_reg                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_CONFIGURE3_reg))
#define  SD_ALL_TOP_SD_CONFIGURE3_sd_dummy_reg0_shift                            (1)
#define  SD_ALL_TOP_SD_CONFIGURE3_rsp_time_out_en_shift                          (0)
#define  SD_ALL_TOP_SD_CONFIGURE3_sd_dummy_reg0_mask                             (0x000000FE)
#define  SD_ALL_TOP_SD_CONFIGURE3_rsp_time_out_en_mask                           (0x00000001)
#define  SD_ALL_TOP_SD_CONFIGURE3_sd_dummy_reg0(data)                            (0x000000FE&((data)<<1))
#define  SD_ALL_TOP_SD_CONFIGURE3_rsp_time_out_en(data)                          (0x00000001&(data))
#define  SD_ALL_TOP_SD_CONFIGURE3_get_sd_dummy_reg0(data)                        ((0x000000FE&(data))>>1)
#define  SD_ALL_TOP_SD_CONFIGURE3_get_rsp_time_out_en(data)                      (0x00000001&(data))

#define  SD_ALL_TOP_SD_STATUS                                                   0x18010C0C
#define  SD_ALL_TOP_SD_STATUS_reg_addr                                           "0xB8010C0C"
#define  SD_ALL_TOP_SD_STATUS_reg                                                0xB8010C0C
#define  SD_ALL_TOP_SD_STATUS_inst_addr                                          "0x0003"
#define  set_SD_ALL_TOP_SD_STATUS_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_SD_STATUS_reg)=data)
#define  get_SD_ALL_TOP_SD_STATUS_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_SD_STATUS_reg))
#define  SD_ALL_TOP_SD_STATUS_crc7_error_shift                                   (7)
#define  SD_ALL_TOP_SD_STATUS_crc16_error_shift                                  (6)
#define  SD_ALL_TOP_SD_STATUS_write_error_shift                                  (5)
#define  SD_ALL_TOP_SD_STATUS_write_status_shift                                 (2)
#define  SD_ALL_TOP_SD_STATUS_write_status_time_out_shift                        (1)
#define  SD_ALL_TOP_SD_STATUS_tuning_cmp_error_shift                             (0)
#define  SD_ALL_TOP_SD_STATUS_crc7_error_mask                                    (0x00000080)
#define  SD_ALL_TOP_SD_STATUS_crc16_error_mask                                   (0x00000040)
#define  SD_ALL_TOP_SD_STATUS_write_error_mask                                   (0x00000020)
#define  SD_ALL_TOP_SD_STATUS_write_status_mask                                  (0x0000001C)
#define  SD_ALL_TOP_SD_STATUS_write_status_time_out_mask                         (0x00000002)
#define  SD_ALL_TOP_SD_STATUS_tuning_cmp_error_mask                              (0x00000001)
#define  SD_ALL_TOP_SD_STATUS_crc7_error(data)                                   (0x00000080&((data)<<7))
#define  SD_ALL_TOP_SD_STATUS_crc16_error(data)                                  (0x00000040&((data)<<6))
#define  SD_ALL_TOP_SD_STATUS_write_error(data)                                  (0x00000020&((data)<<5))
#define  SD_ALL_TOP_SD_STATUS_write_status(data)                                 (0x0000001C&((data)<<2))
#define  SD_ALL_TOP_SD_STATUS_write_status_time_out(data)                        (0x00000002&((data)<<1))
#define  SD_ALL_TOP_SD_STATUS_tuning_cmp_error(data)                             (0x00000001&(data))
#define  SD_ALL_TOP_SD_STATUS_get_crc7_error(data)                               ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_SD_STATUS_get_crc16_error(data)                              ((0x00000040&(data))>>6)
#define  SD_ALL_TOP_SD_STATUS_get_write_error(data)                              ((0x00000020&(data))>>5)
#define  SD_ALL_TOP_SD_STATUS_get_write_status(data)                             ((0x0000001C&(data))>>2)
#define  SD_ALL_TOP_SD_STATUS_get_write_status_time_out(data)                    ((0x00000002&(data))>>1)
#define  SD_ALL_TOP_SD_STATUS_get_tuning_cmp_error(data)                         (0x00000001&(data))

#define  SD_ALL_TOP_SD_STATUS2                                                  0x18010C10
#define  SD_ALL_TOP_SD_STATUS2_reg_addr                                          "0xB8010C10"
#define  SD_ALL_TOP_SD_STATUS2_reg                                               0xB8010C10
#define  SD_ALL_TOP_SD_STATUS2_inst_addr                                         "0x0004"
#define  set_SD_ALL_TOP_SD_STATUS2_reg(data)                                     (*((volatile unsigned int*)SD_ALL_TOP_SD_STATUS2_reg)=data)
#define  get_SD_ALL_TOP_SD_STATUS2_reg                                           (*((volatile unsigned int*)SD_ALL_TOP_SD_STATUS2_reg))
#define  SD_ALL_TOP_SD_STATUS2_rsp_time_out_shift                                (0)
#define  SD_ALL_TOP_SD_STATUS2_rsp_time_out_mask                                 (0x00000001)
#define  SD_ALL_TOP_SD_STATUS2_rsp_time_out(data)                                (0x00000001&(data))
#define  SD_ALL_TOP_SD_STATUS2_get_rsp_time_out(data)                            (0x00000001&(data))

#define  SD_ALL_TOP_SD_BUS_STATUS                                               0x18010C14
#define  SD_ALL_TOP_SD_BUS_STATUS_reg_addr                                       "0xB8010C14"
#define  SD_ALL_TOP_SD_BUS_STATUS_reg                                            0xB8010C14
#define  SD_ALL_TOP_SD_BUS_STATUS_inst_addr                                      "0x0005"
#define  set_SD_ALL_TOP_SD_BUS_STATUS_reg(data)                                  (*((volatile unsigned int*)SD_ALL_TOP_SD_BUS_STATUS_reg)=data)
#define  get_SD_ALL_TOP_SD_BUS_STATUS_reg                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_BUS_STATUS_reg))
#define  SD_ALL_TOP_SD_BUS_STATUS_toggle_clk_shift                               (7)
#define  SD_ALL_TOP_SD_BUS_STATUS_stop_clk_when_idle_shift                       (6)
#define  SD_ALL_TOP_SD_BUS_STATUS_sddati_d_shift                                 (1)
#define  SD_ALL_TOP_SD_BUS_STATUS_sdcmdi_d_shift                                 (0)
#define  SD_ALL_TOP_SD_BUS_STATUS_toggle_clk_mask                                (0x00000080)
#define  SD_ALL_TOP_SD_BUS_STATUS_stop_clk_when_idle_mask                        (0x00000040)
#define  SD_ALL_TOP_SD_BUS_STATUS_sddati_d_mask                                  (0x0000001E)
#define  SD_ALL_TOP_SD_BUS_STATUS_sdcmdi_d_mask                                  (0x00000001)
#define  SD_ALL_TOP_SD_BUS_STATUS_toggle_clk(data)                               (0x00000080&((data)<<7))
#define  SD_ALL_TOP_SD_BUS_STATUS_stop_clk_when_idle(data)                       (0x00000040&((data)<<6))
#define  SD_ALL_TOP_SD_BUS_STATUS_sddati_d(data)                                 (0x0000001E&((data)<<1))
#define  SD_ALL_TOP_SD_BUS_STATUS_sdcmdi_d(data)                                 (0x00000001&(data))
#define  SD_ALL_TOP_SD_BUS_STATUS_get_toggle_clk(data)                           ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_SD_BUS_STATUS_get_stop_clk_when_idle(data)                   ((0x00000040&(data))>>6)
#define  SD_ALL_TOP_SD_BUS_STATUS_get_sddati_d(data)                             ((0x0000001E&(data))>>1)
#define  SD_ALL_TOP_SD_BUS_STATUS_get_sdcmdi_d(data)                             (0x00000001&(data))

#define  SD_ALL_TOP_SD_CMD_CODE                                                 0x18010C18
#define  SD_ALL_TOP_SD_CMD_CODE_reg_addr                                         "0xB8010C18"
#define  SD_ALL_TOP_SD_CMD_CODE_reg                                              0xB8010C18
#define  SD_ALL_TOP_SD_CMD_CODE_inst_addr                                        "0x0006"
#define  set_SD_ALL_TOP_SD_CMD_CODE_reg(data)                                    (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD_CODE_reg)=data)
#define  get_SD_ALL_TOP_SD_CMD_CODE_reg                                          (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD_CODE_reg))
#define  SD_ALL_TOP_SD_CMD_CODE_sd_dummy_reg1_shift                              (0)
#define  SD_ALL_TOP_SD_CMD_CODE_sd_dummy_reg1_mask                               (0x0000007F)
#define  SD_ALL_TOP_SD_CMD_CODE_sd_dummy_reg1(data)                              (0x0000007F&(data))
#define  SD_ALL_TOP_SD_CMD_CODE_get_sd_dummy_reg1(data)                          (0x0000007F&(data))

#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL                                         0x18010C1C
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_reg_addr                                 "0xB8010C1C"
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_reg                                      0xB8010C1C
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_inst_addr                                "0x0007"
#define  set_SD_ALL_TOP_SD_SAMPLE_POINT_CTL_reg(data)                            (*((volatile unsigned int*)SD_ALL_TOP_SD_SAMPLE_POINT_CTL_reg)=data)
#define  get_SD_ALL_TOP_SD_SAMPLE_POINT_CTL_reg                                  (*((volatile unsigned int*)SD_ALL_TOP_SD_SAMPLE_POINT_CTL_reg))
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_dat_samp_type_1_shift                (7)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_dat_samp_point_1_shift               (6)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_cmd_samp_type_1_shift                (5)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_cmd_samp_point_1_shift               (4)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_sd20_samp_point_1_shift                  (3)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_dat_samp_type_1_mask                 (0x00000080)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_dat_samp_point_1_mask                (0x00000040)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_cmd_samp_type_1_mask                 (0x00000020)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_cmd_samp_point_1_mask                (0x00000010)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_sd20_samp_point_1_mask                   (0x00000008)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_dat_samp_type_1(data)                (0x00000080&((data)<<7))
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_dat_samp_point_1(data)               (0x00000040&((data)<<6))
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_cmd_samp_type_1(data)                (0x00000020&((data)<<5))
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_ddr_cmd_samp_point_1(data)               (0x00000010&((data)<<4))
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_sd20_samp_point_1(data)                  (0x00000008&((data)<<3))
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_get_ddr_dat_samp_type_1(data)            ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_get_ddr_dat_samp_point_1(data)           ((0x00000040&(data))>>6)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_get_ddr_cmd_samp_type_1(data)            ((0x00000020&(data))>>5)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_get_ddr_cmd_samp_point_1(data)           ((0x00000010&(data))>>4)
#define  SD_ALL_TOP_SD_SAMPLE_POINT_CTL_get_sd20_samp_point_1(data)              ((0x00000008&(data))>>3)

#define  SD_ALL_TOP_SD_PUSH_POINT_CTL                                           0x18010C20
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_reg_addr                                   "0xB8010C20"
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_reg                                        0xB8010C20
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_inst_addr                                  "0x0008"
#define  set_SD_ALL_TOP_SD_PUSH_POINT_CTL_reg(data)                              (*((volatile unsigned int*)SD_ALL_TOP_SD_PUSH_POINT_CTL_reg)=data)
#define  get_SD_ALL_TOP_SD_PUSH_POINT_CTL_reg                                    (*((volatile unsigned int*)SD_ALL_TOP_SD_PUSH_POINT_CTL_reg))
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_push_type_1_shift                      (7)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_dat_push_point_1_shift                 (6)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_cmd_push_point_1_shift                 (5)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_sd20_push_point_1_shift                    (4)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_dpclk_pos_samp_1_shift                     (3)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_fw_solution_1_shift                    (2)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_dig_solution_1_shift                   (1)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_sdclk_polarity_swap_1_shift                (0)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_push_type_1_mask                       (0x00000080)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_dat_push_point_1_mask                  (0x00000040)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_cmd_push_point_1_mask                  (0x00000020)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_sd20_push_point_1_mask                     (0x00000010)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_dpclk_pos_samp_1_mask                      (0x00000008)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_fw_solution_1_mask                     (0x00000004)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_dig_solution_1_mask                    (0x00000002)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_sdclk_polarity_swap_1_mask                 (0x00000001)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_push_type_1(data)                      (0x00000080&((data)<<7))
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_dat_push_point_1(data)                 (0x00000040&((data)<<6))
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_cmd_push_point_1(data)                 (0x00000020&((data)<<5))
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_sd20_push_point_1(data)                    (0x00000010&((data)<<4))
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_dpclk_pos_samp_1(data)                     (0x00000008&((data)<<3))
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_fw_solution_1(data)                    (0x00000004&((data)<<2))
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_ddr_dig_solution_1(data)                   (0x00000002&((data)<<1))
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_sdclk_polarity_swap_1(data)                (0x00000001&(data))
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_get_ddr_push_type_1(data)                  ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_get_ddr_dat_push_point_1(data)             ((0x00000040&(data))>>6)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_get_ddr_cmd_push_point_1(data)             ((0x00000020&(data))>>5)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_get_sd20_push_point_1(data)                ((0x00000010&(data))>>4)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_get_dpclk_pos_samp_1(data)                 ((0x00000008&(data))>>3)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_get_ddr_fw_solution_1(data)                ((0x00000004&(data))>>2)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_get_ddr_dig_solution_1(data)               ((0x00000002&(data))>>1)
#define  SD_ALL_TOP_SD_PUSH_POINT_CTL_get_sdclk_polarity_swap_1(data)            (0x00000001&(data))

#define  SD_ALL_TOP_SD_CMD0                                                     0x18010C24
#define  SD_ALL_TOP_SD_CMD0_reg_addr                                             "0xB8010C24"
#define  SD_ALL_TOP_SD_CMD0_reg                                                  0xB8010C24
#define  SD_ALL_TOP_SD_CMD0_inst_addr                                            "0x0009"
#define  set_SD_ALL_TOP_SD_CMD0_reg(data)                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD0_reg)=data)
#define  get_SD_ALL_TOP_SD_CMD0_reg                                              (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD0_reg))
#define  SD_ALL_TOP_SD_CMD0_sd_cmd0_shift                                        (0)
#define  SD_ALL_TOP_SD_CMD0_sd_cmd0_mask                                         (0x000000FF)
#define  SD_ALL_TOP_SD_CMD0_sd_cmd0(data)                                        (0x000000FF&(data))
#define  SD_ALL_TOP_SD_CMD0_get_sd_cmd0(data)                                    (0x000000FF&(data))

#define  SD_ALL_TOP_SD_CMD1                                                     0x18010C28
#define  SD_ALL_TOP_SD_CMD1_reg_addr                                             "0xB8010C28"
#define  SD_ALL_TOP_SD_CMD1_reg                                                  0xB8010C28
#define  SD_ALL_TOP_SD_CMD1_inst_addr                                            "0x000A"
#define  set_SD_ALL_TOP_SD_CMD1_reg(data)                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD1_reg)=data)
#define  get_SD_ALL_TOP_SD_CMD1_reg                                              (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD1_reg))
#define  SD_ALL_TOP_SD_CMD1_sd_cmd1_shift                                        (0)
#define  SD_ALL_TOP_SD_CMD1_sd_cmd1_mask                                         (0x000000FF)
#define  SD_ALL_TOP_SD_CMD1_sd_cmd1(data)                                        (0x000000FF&(data))
#define  SD_ALL_TOP_SD_CMD1_get_sd_cmd1(data)                                    (0x000000FF&(data))

#define  SD_ALL_TOP_SD_CMD2                                                     0x18010C2C
#define  SD_ALL_TOP_SD_CMD2_reg_addr                                             "0xB8010C2C"
#define  SD_ALL_TOP_SD_CMD2_reg                                                  0xB8010C2C
#define  SD_ALL_TOP_SD_CMD2_inst_addr                                            "0x000B"
#define  set_SD_ALL_TOP_SD_CMD2_reg(data)                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD2_reg)=data)
#define  get_SD_ALL_TOP_SD_CMD2_reg                                              (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD2_reg))
#define  SD_ALL_TOP_SD_CMD2_sd_cmd2_shift                                        (0)
#define  SD_ALL_TOP_SD_CMD2_sd_cmd2_mask                                         (0x000000FF)
#define  SD_ALL_TOP_SD_CMD2_sd_cmd2(data)                                        (0x000000FF&(data))
#define  SD_ALL_TOP_SD_CMD2_get_sd_cmd2(data)                                    (0x000000FF&(data))

#define  SD_ALL_TOP_SD_CMD3                                                     0x18010C30
#define  SD_ALL_TOP_SD_CMD3_reg_addr                                             "0xB8010C30"
#define  SD_ALL_TOP_SD_CMD3_reg                                                  0xB8010C30
#define  SD_ALL_TOP_SD_CMD3_inst_addr                                            "0x000C"
#define  set_SD_ALL_TOP_SD_CMD3_reg(data)                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD3_reg)=data)
#define  get_SD_ALL_TOP_SD_CMD3_reg                                              (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD3_reg))
#define  SD_ALL_TOP_SD_CMD3_sd_cmd3_shift                                        (0)
#define  SD_ALL_TOP_SD_CMD3_sd_cmd3_mask                                         (0x000000FF)
#define  SD_ALL_TOP_SD_CMD3_sd_cmd3(data)                                        (0x000000FF&(data))
#define  SD_ALL_TOP_SD_CMD3_get_sd_cmd3(data)                                    (0x000000FF&(data))

#define  SD_ALL_TOP_SD_CMD4                                                     0x18010C34
#define  SD_ALL_TOP_SD_CMD4_reg_addr                                             "0xB8010C34"
#define  SD_ALL_TOP_SD_CMD4_reg                                                  0xB8010C34
#define  SD_ALL_TOP_SD_CMD4_inst_addr                                            "0x000D"
#define  set_SD_ALL_TOP_SD_CMD4_reg(data)                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD4_reg)=data)
#define  get_SD_ALL_TOP_SD_CMD4_reg                                              (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD4_reg))
#define  SD_ALL_TOP_SD_CMD4_sd_cmd4_shift                                        (0)
#define  SD_ALL_TOP_SD_CMD4_sd_cmd4_mask                                         (0x000000FF)
#define  SD_ALL_TOP_SD_CMD4_sd_cmd4(data)                                        (0x000000FF&(data))
#define  SD_ALL_TOP_SD_CMD4_get_sd_cmd4(data)                                    (0x000000FF&(data))

#define  SD_ALL_TOP_SD_CMD5                                                     0x18010C38
#define  SD_ALL_TOP_SD_CMD5_reg_addr                                             "0xB8010C38"
#define  SD_ALL_TOP_SD_CMD5_reg                                                  0xB8010C38
#define  SD_ALL_TOP_SD_CMD5_inst_addr                                            "0x000E"
#define  set_SD_ALL_TOP_SD_CMD5_reg(data)                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD5_reg)=data)
#define  get_SD_ALL_TOP_SD_CMD5_reg                                              (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD5_reg))
#define  SD_ALL_TOP_SD_CMD5_sd_cmd5_shift                                        (0)
#define  SD_ALL_TOP_SD_CMD5_sd_cmd5_mask                                         (0x000000FF)
#define  SD_ALL_TOP_SD_CMD5_sd_cmd5(data)                                        (0x000000FF&(data))
#define  SD_ALL_TOP_SD_CMD5_get_sd_cmd5(data)                                    (0x000000FF&(data))

#define  SD_ALL_TOP_SD_BYTE_CNT_L                                               0x18010C3C
#define  SD_ALL_TOP_SD_BYTE_CNT_L_reg_addr                                       "0xB8010C3C"
#define  SD_ALL_TOP_SD_BYTE_CNT_L_reg                                            0xB8010C3C
#define  SD_ALL_TOP_SD_BYTE_CNT_L_inst_addr                                      "0x000F"
#define  set_SD_ALL_TOP_SD_BYTE_CNT_L_reg(data)                                  (*((volatile unsigned int*)SD_ALL_TOP_SD_BYTE_CNT_L_reg)=data)
#define  get_SD_ALL_TOP_SD_BYTE_CNT_L_reg                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_BYTE_CNT_L_reg))
#define  SD_ALL_TOP_SD_BYTE_CNT_L_sd_byte_cnt_l_shift                            (0)
#define  SD_ALL_TOP_SD_BYTE_CNT_L_sd_byte_cnt_l_mask                             (0x000000FF)
#define  SD_ALL_TOP_SD_BYTE_CNT_L_sd_byte_cnt_l(data)                            (0x000000FF&(data))
#define  SD_ALL_TOP_SD_BYTE_CNT_L_get_sd_byte_cnt_l(data)                        (0x000000FF&(data))

#define  SD_ALL_TOP_SD_BYTE_CNT_H                                               0x18010C40
#define  SD_ALL_TOP_SD_BYTE_CNT_H_reg_addr                                       "0xB8010C40"
#define  SD_ALL_TOP_SD_BYTE_CNT_H_reg                                            0xB8010C40
#define  SD_ALL_TOP_SD_BYTE_CNT_H_inst_addr                                      "0x0010"
#define  set_SD_ALL_TOP_SD_BYTE_CNT_H_reg(data)                                  (*((volatile unsigned int*)SD_ALL_TOP_SD_BYTE_CNT_H_reg)=data)
#define  get_SD_ALL_TOP_SD_BYTE_CNT_H_reg                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_BYTE_CNT_H_reg))
#define  SD_ALL_TOP_SD_BYTE_CNT_H_sd_byte_cnt_h_shift                            (0)
#define  SD_ALL_TOP_SD_BYTE_CNT_H_sd_byte_cnt_h_mask                             (0x00000007)
#define  SD_ALL_TOP_SD_BYTE_CNT_H_sd_byte_cnt_h(data)                            (0x00000007&(data))
#define  SD_ALL_TOP_SD_BYTE_CNT_H_get_sd_byte_cnt_h(data)                        (0x00000007&(data))

#define  SD_ALL_TOP_SD_BLOCK_CNT_L                                              0x18010C44
#define  SD_ALL_TOP_SD_BLOCK_CNT_L_reg_addr                                      "0xB8010C44"
#define  SD_ALL_TOP_SD_BLOCK_CNT_L_reg                                           0xB8010C44
#define  SD_ALL_TOP_SD_BLOCK_CNT_L_inst_addr                                     "0x0011"
#define  set_SD_ALL_TOP_SD_BLOCK_CNT_L_reg(data)                                 (*((volatile unsigned int*)SD_ALL_TOP_SD_BLOCK_CNT_L_reg)=data)
#define  get_SD_ALL_TOP_SD_BLOCK_CNT_L_reg                                       (*((volatile unsigned int*)SD_ALL_TOP_SD_BLOCK_CNT_L_reg))
#define  SD_ALL_TOP_SD_BLOCK_CNT_L_sd_block_cnt_l_shift                          (0)
#define  SD_ALL_TOP_SD_BLOCK_CNT_L_sd_block_cnt_l_mask                           (0x000000FF)
#define  SD_ALL_TOP_SD_BLOCK_CNT_L_sd_block_cnt_l(data)                          (0x000000FF&(data))
#define  SD_ALL_TOP_SD_BLOCK_CNT_L_get_sd_block_cnt_l(data)                      (0x000000FF&(data))

#define  SD_ALL_TOP_SD_BLOCK_CNT_H                                              0x18010C48
#define  SD_ALL_TOP_SD_BLOCK_CNT_H_reg_addr                                      "0xB8010C48"
#define  SD_ALL_TOP_SD_BLOCK_CNT_H_reg                                           0xB8010C48
#define  SD_ALL_TOP_SD_BLOCK_CNT_H_inst_addr                                     "0x0012"
#define  set_SD_ALL_TOP_SD_BLOCK_CNT_H_reg(data)                                 (*((volatile unsigned int*)SD_ALL_TOP_SD_BLOCK_CNT_H_reg)=data)
#define  get_SD_ALL_TOP_SD_BLOCK_CNT_H_reg                                       (*((volatile unsigned int*)SD_ALL_TOP_SD_BLOCK_CNT_H_reg))
#define  SD_ALL_TOP_SD_BLOCK_CNT_H_sd_block_cnt_h_shift                          (0)
#define  SD_ALL_TOP_SD_BLOCK_CNT_H_sd_block_cnt_h_mask                           (0x000000FF)
#define  SD_ALL_TOP_SD_BLOCK_CNT_H_sd_block_cnt_h(data)                          (0x000000FF&(data))
#define  SD_ALL_TOP_SD_BLOCK_CNT_H_get_sd_block_cnt_h(data)                      (0x000000FF&(data))

#define  SD_ALL_TOP_SD_TRANSFER                                                 0x18010C4C
#define  SD_ALL_TOP_SD_TRANSFER_reg_addr                                         "0xB8010C4C"
#define  SD_ALL_TOP_SD_TRANSFER_reg                                              0xB8010C4C
#define  SD_ALL_TOP_SD_TRANSFER_inst_addr                                        "0x0013"
#define  set_SD_ALL_TOP_SD_TRANSFER_reg(data)                                    (*((volatile unsigned int*)SD_ALL_TOP_SD_TRANSFER_reg)=data)
#define  get_SD_ALL_TOP_SD_TRANSFER_reg                                          (*((volatile unsigned int*)SD_ALL_TOP_SD_TRANSFER_reg))
#define  SD_ALL_TOP_SD_TRANSFER_start_shift                                      (7)
#define  SD_ALL_TOP_SD_TRANSFER_sd_end_shift                                     (6)
#define  SD_ALL_TOP_SD_TRANSFER_sd_error_shift                                   (4)
#define  SD_ALL_TOP_SD_TRANSFER_cmd_code_shift                                   (0)
#define  SD_ALL_TOP_SD_TRANSFER_start_mask                                       (0x00000080)
#define  SD_ALL_TOP_SD_TRANSFER_sd_end_mask                                      (0x00000040)
#define  SD_ALL_TOP_SD_TRANSFER_sd_error_mask                                    (0x00000010)
#define  SD_ALL_TOP_SD_TRANSFER_cmd_code_mask                                    (0x0000000F)
#define  SD_ALL_TOP_SD_TRANSFER_start(data)                                      (0x00000080&((data)<<7))
#define  SD_ALL_TOP_SD_TRANSFER_sd_end(data)                                     (0x00000040&((data)<<6))
#define  SD_ALL_TOP_SD_TRANSFER_sd_error(data)                                   (0x00000010&((data)<<4))
#define  SD_ALL_TOP_SD_TRANSFER_cmd_code(data)                                   (0x0000000F&(data))
#define  SD_ALL_TOP_SD_TRANSFER_get_start(data)                                  ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_SD_TRANSFER_get_sd_end(data)                                 ((0x00000040&(data))>>6)
#define  SD_ALL_TOP_SD_TRANSFER_get_sd_error(data)                               ((0x00000010&(data))>>4)
#define  SD_ALL_TOP_SD_TRANSFER_get_cmd_code(data)                               (0x0000000F&(data))

#define  SD_ALL_TOP_SD_DDR_CHK_START                                            0x18010C50
#define  SD_ALL_TOP_SD_DDR_CHK_START_reg_addr                                    "0xB8010C50"
#define  SD_ALL_TOP_SD_DDR_CHK_START_reg                                         0xB8010C50
#define  SD_ALL_TOP_SD_DDR_CHK_START_inst_addr                                   "0x0014"
#define  set_SD_ALL_TOP_SD_DDR_CHK_START_reg(data)                               (*((volatile unsigned int*)SD_ALL_TOP_SD_DDR_CHK_START_reg)=data)
#define  get_SD_ALL_TOP_SD_DDR_CHK_START_reg                                     (*((volatile unsigned int*)SD_ALL_TOP_SD_DDR_CHK_START_reg))
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_cmd_odd_start_bit_err_shift          (7)
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_cmd_odd_1_shift                       (6)
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_cmd_odd_0_shift                       (5)
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_cmd_odd_start_bit_reg_shift          (4)
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_data_odd_start_bit_err_shift         (3)
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_data_odd_1_shift                      (2)
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_data_odd_0_shift                      (1)
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_data_odd_start_bit_reg_shift         (0)
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_cmd_odd_start_bit_err_mask           (0x00000080)
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_cmd_odd_1_mask                        (0x00000040)
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_cmd_odd_0_mask                        (0x00000020)
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_cmd_odd_start_bit_reg_mask           (0x00000010)
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_data_odd_start_bit_err_mask          (0x00000008)
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_data_odd_1_mask                       (0x00000004)
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_data_odd_0_mask                       (0x00000002)
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_data_odd_start_bit_reg_mask          (0x00000001)
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_cmd_odd_start_bit_err(data)          (0x00000080&((data)<<7))
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_cmd_odd_1(data)                       (0x00000040&((data)<<6))
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_cmd_odd_0(data)                       (0x00000020&((data)<<5))
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_cmd_odd_start_bit_reg(data)          (0x00000010&((data)<<4))
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_data_odd_start_bit_err(data)         (0x00000008&((data)<<3))
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_data_odd_1(data)                      (0x00000004&((data)<<2))
#define  SD_ALL_TOP_SD_DDR_CHK_START_force_data_odd_0(data)                      (0x00000002&((data)<<1))
#define  SD_ALL_TOP_SD_DDR_CHK_START_detect_data_odd_start_bit_reg(data)         (0x00000001&(data))
#define  SD_ALL_TOP_SD_DDR_CHK_START_get_detect_cmd_odd_start_bit_err(data)      ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_SD_DDR_CHK_START_get_force_cmd_odd_1(data)                   ((0x00000040&(data))>>6)
#define  SD_ALL_TOP_SD_DDR_CHK_START_get_force_cmd_odd_0(data)                   ((0x00000020&(data))>>5)
#define  SD_ALL_TOP_SD_DDR_CHK_START_get_detect_cmd_odd_start_bit_reg(data)      ((0x00000010&(data))>>4)
#define  SD_ALL_TOP_SD_DDR_CHK_START_get_detect_data_odd_start_bit_err(data)     ((0x00000008&(data))>>3)
#define  SD_ALL_TOP_SD_DDR_CHK_START_get_force_data_odd_1(data)                  ((0x00000004&(data))>>2)
#define  SD_ALL_TOP_SD_DDR_CHK_START_get_force_data_odd_0(data)                  ((0x00000002&(data))>>1)
#define  SD_ALL_TOP_SD_DDR_CHK_START_get_detect_data_odd_start_bit_reg(data)     (0x00000001&(data))

#define  SD_ALL_TOP_SD_CMD_STATE                                                0x18010C54
#define  SD_ALL_TOP_SD_CMD_STATE_reg_addr                                        "0xB8010C54"
#define  SD_ALL_TOP_SD_CMD_STATE_reg                                             0xB8010C54
#define  SD_ALL_TOP_SD_CMD_STATE_inst_addr                                       "0x0015"
#define  set_SD_ALL_TOP_SD_CMD_STATE_reg(data)                                   (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD_STATE_reg)=data)
#define  get_SD_ALL_TOP_SD_CMD_STATE_reg                                         (*((volatile unsigned int*)SD_ALL_TOP_SD_CMD_STATE_reg))
#define  SD_ALL_TOP_SD_CMD_STATE_cmd_is_idle_shift                               (7)
#define  SD_ALL_TOP_SD_CMD_STATE_cmd_state_shift                                 (0)
#define  SD_ALL_TOP_SD_CMD_STATE_cmd_is_idle_mask                                (0x00000080)
#define  SD_ALL_TOP_SD_CMD_STATE_cmd_state_mask                                  (0x0000000F)
#define  SD_ALL_TOP_SD_CMD_STATE_cmd_is_idle(data)                               (0x00000080&((data)<<7))
#define  SD_ALL_TOP_SD_CMD_STATE_cmd_state(data)                                 (0x0000000F&(data))
#define  SD_ALL_TOP_SD_CMD_STATE_get_cmd_is_idle(data)                           ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_SD_CMD_STATE_get_cmd_state(data)                             (0x0000000F&(data))

#define  SD_ALL_TOP_SD_DATA_STATE                                               0x18010C58
#define  SD_ALL_TOP_SD_DATA_STATE_reg_addr                                       "0xB8010C58"
#define  SD_ALL_TOP_SD_DATA_STATE_reg                                            0xB8010C58
#define  SD_ALL_TOP_SD_DATA_STATE_inst_addr                                      "0x0016"
#define  set_SD_ALL_TOP_SD_DATA_STATE_reg(data)                                  (*((volatile unsigned int*)SD_ALL_TOP_SD_DATA_STATE_reg)=data)
#define  get_SD_ALL_TOP_SD_DATA_STATE_reg                                        (*((volatile unsigned int*)SD_ALL_TOP_SD_DATA_STATE_reg))
#define  SD_ALL_TOP_SD_DATA_STATE_data_is_idle_shift                             (7)
#define  SD_ALL_TOP_SD_DATA_STATE_data_state_shift                               (0)
#define  SD_ALL_TOP_SD_DATA_STATE_data_is_idle_mask                              (0x00000080)
#define  SD_ALL_TOP_SD_DATA_STATE_data_state_mask                                (0x0000001F)
#define  SD_ALL_TOP_SD_DATA_STATE_data_is_idle(data)                             (0x00000080&((data)<<7))
#define  SD_ALL_TOP_SD_DATA_STATE_data_state(data)                               (0x0000001F&(data))
#define  SD_ALL_TOP_SD_DATA_STATE_get_data_is_idle(data)                         ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_SD_DATA_STATE_get_data_state(data)                           (0x0000001F&(data))

#define  SD_ALL_TOP_SD_BUS_TA_TIME                                              0x18010C5C
#define  SD_ALL_TOP_SD_BUS_TA_TIME_reg_addr                                      "0xB8010C5C"
#define  SD_ALL_TOP_SD_BUS_TA_TIME_reg                                           0xB8010C5C
#define  SD_ALL_TOP_SD_BUS_TA_TIME_inst_addr                                     "0x0017"
#define  set_SD_ALL_TOP_SD_BUS_TA_TIME_reg(data)                                 (*((volatile unsigned int*)SD_ALL_TOP_SD_BUS_TA_TIME_reg)=data)
#define  get_SD_ALL_TOP_SD_BUS_TA_TIME_reg                                       (*((volatile unsigned int*)SD_ALL_TOP_SD_BUS_TA_TIME_reg))
#define  SD_ALL_TOP_SD_BUS_TA_TIME_bus_ta_time_set_shift                         (3)
#define  SD_ALL_TOP_SD_BUS_TA_TIME_bus_ta_time_cfg_shift                         (0)
#define  SD_ALL_TOP_SD_BUS_TA_TIME_bus_ta_time_set_mask                          (0x00000008)
#define  SD_ALL_TOP_SD_BUS_TA_TIME_bus_ta_time_cfg_mask                          (0x00000007)
#define  SD_ALL_TOP_SD_BUS_TA_TIME_bus_ta_time_set(data)                         (0x00000008&((data)<<3))
#define  SD_ALL_TOP_SD_BUS_TA_TIME_bus_ta_time_cfg(data)                         (0x00000007&(data))
#define  SD_ALL_TOP_SD_BUS_TA_TIME_get_bus_ta_time_set(data)                     ((0x00000008&(data))>>3)
#define  SD_ALL_TOP_SD_BUS_TA_TIME_get_bus_ta_time_cfg(data)                     (0x00000007&(data))

#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG                                           0x18010C60
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_reg_addr                                   "0xB8010C60"
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_reg                                        0xB8010C60
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_inst_addr                                  "0x0018"
#define  set_SD_ALL_TOP_SD_STOP_SDCLK_CFG_reg(data)                              (*((volatile unsigned int*)SD_ALL_TOP_SD_STOP_SDCLK_CFG_reg)=data)
#define  get_SD_ALL_TOP_SD_STOP_SDCLK_CFG_reg                                    (*((volatile unsigned int*)SD_ALL_TOP_SD_STOP_SDCLK_CFG_reg))
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sd20clk_set_shift                     (5)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sd20clk_cfg_shift                     (3)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sdclk_set_shift                       (2)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sdclk_cfg_shift                       (0)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sd20clk_set_mask                      (0x00000020)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sd20clk_cfg_mask                      (0x00000018)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sdclk_set_mask                        (0x00000004)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sdclk_cfg_mask                        (0x00000003)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sd20clk_set(data)                     (0x00000020&((data)<<5))
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sd20clk_cfg(data)                     (0x00000018&((data)<<3))
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sdclk_set(data)                       (0x00000004&((data)<<2))
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_stop_sdclk_cfg(data)                       (0x00000003&(data))
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_get_stop_sd20clk_set(data)                 ((0x00000020&(data))>>5)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_get_stop_sd20clk_cfg(data)                 ((0x00000018&(data))>>3)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_get_stop_sdclk_set(data)                   ((0x00000004&(data))>>2)
#define  SD_ALL_TOP_SD_STOP_SDCLK_CFG_get_stop_sdclk_cfg(data)                   (0x00000003&(data))

#define  SD_ALL_TOP_SD_AUTO_RST_FIFO                                            0x18010C64
#define  SD_ALL_TOP_SD_AUTO_RST_FIFO_reg_addr                                    "0xB8010C64"
#define  SD_ALL_TOP_SD_AUTO_RST_FIFO_reg                                         0xB8010C64
#define  SD_ALL_TOP_SD_AUTO_RST_FIFO_inst_addr                                   "0x0019"
#define  set_SD_ALL_TOP_SD_AUTO_RST_FIFO_reg(data)                               (*((volatile unsigned int*)SD_ALL_TOP_SD_AUTO_RST_FIFO_reg)=data)
#define  get_SD_ALL_TOP_SD_AUTO_RST_FIFO_reg                                     (*((volatile unsigned int*)SD_ALL_TOP_SD_AUTO_RST_FIFO_reg))
#define  SD_ALL_TOP_SD_AUTO_RST_FIFO_auto_reset_fifo_shift                       (0)
#define  SD_ALL_TOP_SD_AUTO_RST_FIFO_auto_reset_fifo_mask                        (0x00000001)
#define  SD_ALL_TOP_SD_AUTO_RST_FIFO_auto_reset_fifo(data)                       (0x00000001&(data))
#define  SD_ALL_TOP_SD_AUTO_RST_FIFO_get_auto_reset_fifo(data)                   (0x00000001&(data))

#define  SD_ALL_TOP_SD_RW_STOP_CTL                                              0x18010C78
#define  SD_ALL_TOP_SD_RW_STOP_CTL_reg_addr                                      "0xB8010C78"
#define  SD_ALL_TOP_SD_RW_STOP_CTL_reg                                           0xB8010C78
#define  SD_ALL_TOP_SD_RW_STOP_CTL_inst_addr                                     "0x001A"
#define  set_SD_ALL_TOP_SD_RW_STOP_CTL_reg(data)                                 (*((volatile unsigned int*)SD_ALL_TOP_SD_RW_STOP_CTL_reg)=data)
#define  get_SD_ALL_TOP_SD_RW_STOP_CTL_reg                                       (*((volatile unsigned int*)SD_ALL_TOP_SD_RW_STOP_CTL_reg))
#define  SD_ALL_TOP_SD_RW_STOP_CTL_sd30_infinite_mode_shift                      (2)
#define  SD_ALL_TOP_SD_RW_STOP_CTL_sd_busy_shift                                 (1)
#define  SD_ALL_TOP_SD_RW_STOP_CTL_sd_rw_stop_shift                              (0)
#define  SD_ALL_TOP_SD_RW_STOP_CTL_sd30_infinite_mode_mask                       (0x00000004)
#define  SD_ALL_TOP_SD_RW_STOP_CTL_sd_busy_mask                                  (0x00000002)
#define  SD_ALL_TOP_SD_RW_STOP_CTL_sd_rw_stop_mask                               (0x00000001)
#define  SD_ALL_TOP_SD_RW_STOP_CTL_sd30_infinite_mode(data)                      (0x00000004&((data)<<2))
#define  SD_ALL_TOP_SD_RW_STOP_CTL_sd_busy(data)                                 (0x00000002&((data)<<1))
#define  SD_ALL_TOP_SD_RW_STOP_CTL_sd_rw_stop(data)                              (0x00000001&(data))
#define  SD_ALL_TOP_SD_RW_STOP_CTL_get_sd30_infinite_mode(data)                  ((0x00000004&(data))>>2)
#define  SD_ALL_TOP_SD_RW_STOP_CTL_get_sd_busy(data)                             ((0x00000002&(data))>>1)
#define  SD_ALL_TOP_SD_RW_STOP_CTL_get_sd_rw_stop(data)                          (0x00000001&(data))

#define  SD_ALL_TOP_SD_DUMMY_3                                                  0x18010C7C
#define  SD_ALL_TOP_SD_DUMMY_3_reg_addr                                          "0xB8010C7C"
#define  SD_ALL_TOP_SD_DUMMY_3_reg                                               0xB8010C7C
#define  SD_ALL_TOP_SD_DUMMY_3_inst_addr                                         "0x001B"
#define  set_SD_ALL_TOP_SD_DUMMY_3_reg(data)                                     (*((volatile unsigned int*)SD_ALL_TOP_SD_DUMMY_3_reg)=data)
#define  get_SD_ALL_TOP_SD_DUMMY_3_reg                                           (*((volatile unsigned int*)SD_ALL_TOP_SD_DUMMY_3_reg))
#define  SD_ALL_TOP_SD_DUMMY_3_sd_dummy_reg3_shift                               (2)
#define  SD_ALL_TOP_SD_DUMMY_3_sd_dummy_reg3_mask                                (0x000000FC)
#define  SD_ALL_TOP_SD_DUMMY_3_sd_dummy_reg3(data)                               (0x000000FC&((data)<<2))
#define  SD_ALL_TOP_SD_DUMMY_3_get_sd_dummy_reg3(data)                           ((0x000000FC&(data))>>2)

#define  SD_ALL_TOP_SD_DUMMY_REG                                                0x18010CD0
#define  SD_ALL_TOP_SD_DUMMY_REG_reg_addr                                        "0xB8010CD0"
#define  SD_ALL_TOP_SD_DUMMY_REG_reg                                             0xB8010CD0
#define  SD_ALL_TOP_SD_DUMMY_REG_inst_addr                                       "0x001C"
#define  set_SD_ALL_TOP_SD_DUMMY_REG_reg(data)                                   (*((volatile unsigned int*)SD_ALL_TOP_SD_DUMMY_REG_reg)=data)
#define  get_SD_ALL_TOP_SD_DUMMY_REG_reg                                         (*((volatile unsigned int*)SD_ALL_TOP_SD_DUMMY_REG_reg))
#define  SD_ALL_TOP_SD_DUMMY_REG_sd_dummy_shift                                  (0)
#define  SD_ALL_TOP_SD_DUMMY_REG_sd_dummy_mask                                   (0xFFFFFFFF)
#define  SD_ALL_TOP_SD_DUMMY_REG_sd_dummy(data)                                  (0xFFFFFFFF&(data))
#define  SD_ALL_TOP_SD_DUMMY_REG_get_sd_dummy(data)                              (0xFFFFFFFF&(data))

#define  SD_ALL_TOP_cr_dma_in_addr                                              0x18010CD4
#define  SD_ALL_TOP_cr_dma_in_addr_reg_addr                                      "0xB8010CD4"
#define  SD_ALL_TOP_cr_dma_in_addr_reg                                           0xB8010CD4
#define  SD_ALL_TOP_cr_dma_in_addr_inst_addr                                     "0x001D"
#define  set_SD_ALL_TOP_cr_dma_in_addr_reg(data)                                 (*((volatile unsigned int*)SD_ALL_TOP_cr_dma_in_addr_reg)=data)
#define  get_SD_ALL_TOP_cr_dma_in_addr_reg                                       (*((volatile unsigned int*)SD_ALL_TOP_cr_dma_in_addr_reg))
#define  SD_ALL_TOP_cr_dma_in_addr_dma_in_addr_shift                             (3)
#define  SD_ALL_TOP_cr_dma_in_addr_dma_in_addr_mask                              (0xFFFFFFF8)
#define  SD_ALL_TOP_cr_dma_in_addr_dma_in_addr(data)                             (0xFFFFFFF8&((data)<<3))
#define  SD_ALL_TOP_cr_dma_in_addr_get_dma_in_addr(data)                         ((0xFFFFFFF8&(data))>>3)

#define  SD_ALL_TOP_cr_dma_out_addr                                             0x18010CD8
#define  SD_ALL_TOP_cr_dma_out_addr_reg_addr                                     "0xB8010CD8"
#define  SD_ALL_TOP_cr_dma_out_addr_reg                                          0xB8010CD8
#define  SD_ALL_TOP_cr_dma_out_addr_inst_addr                                    "0x001E"
#define  set_SD_ALL_TOP_cr_dma_out_addr_reg(data)                                (*((volatile unsigned int*)SD_ALL_TOP_cr_dma_out_addr_reg)=data)
#define  get_SD_ALL_TOP_cr_dma_out_addr_reg                                      (*((volatile unsigned int*)SD_ALL_TOP_cr_dma_out_addr_reg))
#define  SD_ALL_TOP_cr_dma_out_addr_dma_out_addr_shift                           (3)
#define  SD_ALL_TOP_cr_dma_out_addr_dma_out_addr_mask                            (0xFFFFFFF8)
#define  SD_ALL_TOP_cr_dma_out_addr_dma_out_addr(data)                           (0xFFFFFFF8&((data)<<3))
#define  SD_ALL_TOP_cr_dma_out_addr_get_dma_out_addr(data)                       ((0xFFFFFFF8&(data))>>3)

#define  SD_ALL_TOP_cr_int_status                                               0x18010CDC
#define  SD_ALL_TOP_cr_int_status_reg_addr                                       "0xB8010CDC"
#define  SD_ALL_TOP_cr_int_status_reg                                            0xB8010CDC
#define  SD_ALL_TOP_cr_int_status_inst_addr                                      "0x001F"
#define  set_SD_ALL_TOP_cr_int_status_reg(data)                                  (*((volatile unsigned int*)SD_ALL_TOP_cr_int_status_reg)=data)
#define  get_SD_ALL_TOP_cr_int_status_reg                                        (*((volatile unsigned int*)SD_ALL_TOP_cr_int_status_reg))
#define  SD_ALL_TOP_cr_int_status_write_protection_shift                         (5)
#define  SD_ALL_TOP_cr_int_status_card_detection_shift                           (4)
#define  SD_ALL_TOP_cr_int_status_decode_error_shift                             (2)
#define  SD_ALL_TOP_cr_int_status_decode_finish_shift                            (1)
#define  SD_ALL_TOP_cr_int_status_card_status_change_shift                       (0)
#define  SD_ALL_TOP_cr_int_status_write_protection_mask                          (0x00000020)
#define  SD_ALL_TOP_cr_int_status_card_detection_mask                            (0x00000010)
#define  SD_ALL_TOP_cr_int_status_decode_error_mask                              (0x00000004)
#define  SD_ALL_TOP_cr_int_status_decode_finish_mask                             (0x00000002)
#define  SD_ALL_TOP_cr_int_status_card_status_change_mask                        (0x00000001)
#define  SD_ALL_TOP_cr_int_status_write_protection(data)                         (0x00000020&((data)<<5))
#define  SD_ALL_TOP_cr_int_status_card_detection(data)                           (0x00000010&((data)<<4))
#define  SD_ALL_TOP_cr_int_status_decode_error(data)                             (0x00000004&((data)<<2))
#define  SD_ALL_TOP_cr_int_status_decode_finish(data)                            (0x00000002&((data)<<1))
#define  SD_ALL_TOP_cr_int_status_card_status_change(data)                       (0x00000001&(data))
#define  SD_ALL_TOP_cr_int_status_get_write_protection(data)                     ((0x00000020&(data))>>5)
#define  SD_ALL_TOP_cr_int_status_get_card_detection(data)                       ((0x00000010&(data))>>4)
#define  SD_ALL_TOP_cr_int_status_get_decode_error(data)                         ((0x00000004&(data))>>2)
#define  SD_ALL_TOP_cr_int_status_get_decode_finish(data)                        ((0x00000002&(data))>>1)
#define  SD_ALL_TOP_cr_int_status_get_card_status_change(data)                   (0x00000001&(data))

#define  SD_ALL_TOP_cr_int_mask                                                 0x18010CE0
#define  SD_ALL_TOP_cr_int_mask_reg_addr                                         "0xB8010CE0"
#define  SD_ALL_TOP_cr_int_mask_reg                                              0xB8010CE0
#define  SD_ALL_TOP_cr_int_mask_inst_addr                                        "0x0020"
#define  set_SD_ALL_TOP_cr_int_mask_reg(data)                                    (*((volatile unsigned int*)SD_ALL_TOP_cr_int_mask_reg)=data)
#define  get_SD_ALL_TOP_cr_int_mask_reg                                          (*((volatile unsigned int*)SD_ALL_TOP_cr_int_mask_reg))
#define  SD_ALL_TOP_cr_int_mask_card_detection_intmask_shift                     (3)
#define  SD_ALL_TOP_cr_int_mask_decode_error_mask_shift                          (2)
#define  SD_ALL_TOP_cr_int_mask_decode_finish_mask_shift                         (1)
#define  SD_ALL_TOP_cr_int_mask_card_status_change_mask_shift                    (0)
#define  SD_ALL_TOP_cr_int_mask_card_detection_intmask_mask                      (0x00000008)
#define  SD_ALL_TOP_cr_int_mask_decode_error_mask_mask                           (0x00000004)
#define  SD_ALL_TOP_cr_int_mask_decode_finish_mask_mask                          (0x00000002)
#define  SD_ALL_TOP_cr_int_mask_card_status_change_mask_mask                     (0x00000001)
#define  SD_ALL_TOP_cr_int_mask_card_detection_intmask(data)                     (0x00000008&((data)<<3))
#define  SD_ALL_TOP_cr_int_mask_decode_error_mask(data)                          (0x00000004&((data)<<2))
#define  SD_ALL_TOP_cr_int_mask_decode_finish_mask(data)                         (0x00000002&((data)<<1))
#define  SD_ALL_TOP_cr_int_mask_card_status_change_mask(data)                    (0x00000001&(data))
#define  SD_ALL_TOP_cr_int_mask_get_card_detection_intmask(data)                 ((0x00000008&(data))>>3)
#define  SD_ALL_TOP_cr_int_mask_get_decode_error_mask(data)                      ((0x00000004&(data))>>2)
#define  SD_ALL_TOP_cr_int_mask_get_decode_finish_mask(data)                     ((0x00000002&(data))>>1)
#define  SD_ALL_TOP_cr_int_mask_get_card_status_change_mask(data)                (0x00000001&(data))

#define  SD_ALL_TOP_sd_self_look_back                                           0x18010CF0
#define  SD_ALL_TOP_sd_self_look_back_reg_addr                                   "0xB8010CF0"
#define  SD_ALL_TOP_sd_self_look_back_reg                                        0xB8010CF0
#define  SD_ALL_TOP_sd_self_look_back_inst_addr                                  "0x0021"
#define  set_SD_ALL_TOP_sd_self_look_back_reg(data)                              (*((volatile unsigned int*)SD_ALL_TOP_sd_self_look_back_reg)=data)
#define  get_SD_ALL_TOP_sd_self_look_back_reg                                    (*((volatile unsigned int*)SD_ALL_TOP_sd_self_look_back_reg))
#define  SD_ALL_TOP_sd_self_look_back_data_in_sflb_shift                         (12)
#define  SD_ALL_TOP_sd_self_look_back_cmd_in_sflb_shift                          (11)
#define  SD_ALL_TOP_sd_self_look_back_data_oe_sflb_shift                         (7)
#define  SD_ALL_TOP_sd_self_look_back_data_out_sflb_shift                        (3)
#define  SD_ALL_TOP_sd_self_look_back_cmd_oe_sflb_shift                          (2)
#define  SD_ALL_TOP_sd_self_look_back_cmd_out_sflb_shift                         (1)
#define  SD_ALL_TOP_sd_self_look_back_self_look_back_mode_shift                  (0)
#define  SD_ALL_TOP_sd_self_look_back_data_in_sflb_mask                          (0x0000F000)
#define  SD_ALL_TOP_sd_self_look_back_cmd_in_sflb_mask                           (0x00000800)
#define  SD_ALL_TOP_sd_self_look_back_data_oe_sflb_mask                          (0x00000780)
#define  SD_ALL_TOP_sd_self_look_back_data_out_sflb_mask                         (0x00000078)
#define  SD_ALL_TOP_sd_self_look_back_cmd_oe_sflb_mask                           (0x00000004)
#define  SD_ALL_TOP_sd_self_look_back_cmd_out_sflb_mask                          (0x00000002)
#define  SD_ALL_TOP_sd_self_look_back_self_look_back_mode_mask                   (0x00000001)
#define  SD_ALL_TOP_sd_self_look_back_data_in_sflb(data)                         (0x0000F000&((data)<<12))
#define  SD_ALL_TOP_sd_self_look_back_cmd_in_sflb(data)                          (0x00000800&((data)<<11))
#define  SD_ALL_TOP_sd_self_look_back_data_oe_sflb(data)                         (0x00000780&((data)<<7))
#define  SD_ALL_TOP_sd_self_look_back_data_out_sflb(data)                        (0x00000078&((data)<<3))
#define  SD_ALL_TOP_sd_self_look_back_cmd_oe_sflb(data)                          (0x00000004&((data)<<2))
#define  SD_ALL_TOP_sd_self_look_back_cmd_out_sflb(data)                         (0x00000002&((data)<<1))
#define  SD_ALL_TOP_sd_self_look_back_self_look_back_mode(data)                  (0x00000001&(data))
#define  SD_ALL_TOP_sd_self_look_back_get_data_in_sflb(data)                     ((0x0000F000&(data))>>12)
#define  SD_ALL_TOP_sd_self_look_back_get_cmd_in_sflb(data)                      ((0x00000800&(data))>>11)
#define  SD_ALL_TOP_sd_self_look_back_get_data_oe_sflb(data)                     ((0x00000780&(data))>>7)
#define  SD_ALL_TOP_sd_self_look_back_get_data_out_sflb(data)                    ((0x00000078&(data))>>3)
#define  SD_ALL_TOP_sd_self_look_back_get_cmd_oe_sflb(data)                      ((0x00000004&(data))>>2)
#define  SD_ALL_TOP_sd_self_look_back_get_cmd_out_sflb(data)                     ((0x00000002&(data))>>1)
#define  SD_ALL_TOP_sd_self_look_back_get_self_look_back_mode(data)              (0x00000001&(data))

#define  SD_ALL_TOP_CR_BIST_1                                                   0x18010CF4
#define  SD_ALL_TOP_CR_BIST_1_reg_addr                                           "0xB8010CF4"
#define  SD_ALL_TOP_CR_BIST_1_reg                                                0xB8010CF4
#define  SD_ALL_TOP_CR_BIST_1_inst_addr                                          "0x0022"
#define  set_SD_ALL_TOP_CR_BIST_1_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_1_reg)=data)
#define  get_SD_ALL_TOP_CR_BIST_1_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_1_reg))
#define  SD_ALL_TOP_CR_BIST_1_rma_0_shift                                        (6)
#define  SD_ALL_TOP_CR_BIST_1_rmea_0_shift                                       (5)
#define  SD_ALL_TOP_CR_BIST_1_test1_0_shift                                      (4)
#define  SD_ALL_TOP_CR_BIST_1_rma_0_mask                                         (0x000003C0)
#define  SD_ALL_TOP_CR_BIST_1_rmea_0_mask                                        (0x00000020)
#define  SD_ALL_TOP_CR_BIST_1_test1_0_mask                                       (0x00000010)
#define  SD_ALL_TOP_CR_BIST_1_rma_0(data)                                        (0x000003C0&((data)<<6))
#define  SD_ALL_TOP_CR_BIST_1_rmea_0(data)                                       (0x00000020&((data)<<5))
#define  SD_ALL_TOP_CR_BIST_1_test1_0(data)                                      (0x00000010&((data)<<4))
#define  SD_ALL_TOP_CR_BIST_1_get_rma_0(data)                                    ((0x000003C0&(data))>>6)
#define  SD_ALL_TOP_CR_BIST_1_get_rmea_0(data)                                   ((0x00000020&(data))>>5)
#define  SD_ALL_TOP_CR_BIST_1_get_test1_0(data)                                  ((0x00000010&(data))>>4)

#define  SD_ALL_TOP_CR_BIST_MODE                                                0x18010CF8
#define  SD_ALL_TOP_CR_BIST_MODE_reg_addr                                        "0xB8010CF8"
#define  SD_ALL_TOP_CR_BIST_MODE_reg                                             0xB8010CF8
#define  SD_ALL_TOP_CR_BIST_MODE_inst_addr                                       "0x0023"
#define  set_SD_ALL_TOP_CR_BIST_MODE_reg(data)                                   (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_MODE_reg)=data)
#define  get_SD_ALL_TOP_CR_BIST_MODE_reg                                         (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_MODE_reg))
#define  SD_ALL_TOP_CR_BIST_MODE_bist_mode_0_shift                               (0)
#define  SD_ALL_TOP_CR_BIST_MODE_bist_mode_0_mask                                (0x00000001)
#define  SD_ALL_TOP_CR_BIST_MODE_bist_mode_0(data)                               (0x00000001&(data))
#define  SD_ALL_TOP_CR_BIST_MODE_get_bist_mode_0(data)                           (0x00000001&(data))

#define  SD_ALL_TOP_CR_BIST_DONE                                                0x18010CFC
#define  SD_ALL_TOP_CR_BIST_DONE_reg_addr                                        "0xB8010CFC"
#define  SD_ALL_TOP_CR_BIST_DONE_reg                                             0xB8010CFC
#define  SD_ALL_TOP_CR_BIST_DONE_inst_addr                                       "0x0024"
#define  set_SD_ALL_TOP_CR_BIST_DONE_reg(data)                                   (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DONE_reg)=data)
#define  get_SD_ALL_TOP_CR_BIST_DONE_reg                                         (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DONE_reg))
#define  SD_ALL_TOP_CR_BIST_DONE_bist_done_0_shift                               (0)
#define  SD_ALL_TOP_CR_BIST_DONE_bist_done_0_mask                                (0x00000001)
#define  SD_ALL_TOP_CR_BIST_DONE_bist_done_0(data)                               (0x00000001&(data))
#define  SD_ALL_TOP_CR_BIST_DONE_get_bist_done_0(data)                           (0x00000001&(data))

#define  SD_ALL_TOP_CR_BIST_FAIL                                                0x18010D00
#define  SD_ALL_TOP_CR_BIST_FAIL_reg_addr                                        "0xB8010D00"
#define  SD_ALL_TOP_CR_BIST_FAIL_reg                                             0xB8010D00
#define  SD_ALL_TOP_CR_BIST_FAIL_inst_addr                                       "0x0025"
#define  set_SD_ALL_TOP_CR_BIST_FAIL_reg(data)                                   (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_FAIL_reg)=data)
#define  get_SD_ALL_TOP_CR_BIST_FAIL_reg                                         (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_FAIL_reg))
#define  SD_ALL_TOP_CR_BIST_FAIL_bist_fail_0_shift                               (0)
#define  SD_ALL_TOP_CR_BIST_FAIL_bist_fail_0_mask                                (0x00000001)
#define  SD_ALL_TOP_CR_BIST_FAIL_bist_fail_0(data)                               (0x00000001&(data))
#define  SD_ALL_TOP_CR_BIST_FAIL_get_bist_fail_0(data)                           (0x00000001&(data))

#define  SD_ALL_TOP_CR_BIST_DRF_MODE                                            0x18010D04
#define  SD_ALL_TOP_CR_BIST_DRF_MODE_reg_addr                                    "0xB8010D04"
#define  SD_ALL_TOP_CR_BIST_DRF_MODE_reg                                         0xB8010D04
#define  SD_ALL_TOP_CR_BIST_DRF_MODE_inst_addr                                   "0x0026"
#define  set_SD_ALL_TOP_CR_BIST_DRF_MODE_reg(data)                               (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DRF_MODE_reg)=data)
#define  get_SD_ALL_TOP_CR_BIST_DRF_MODE_reg                                     (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DRF_MODE_reg))
#define  SD_ALL_TOP_CR_BIST_DRF_MODE_drf_modeofmbist_0_shift                     (0)
#define  SD_ALL_TOP_CR_BIST_DRF_MODE_drf_modeofmbist_0_mask                      (0x00000001)
#define  SD_ALL_TOP_CR_BIST_DRF_MODE_drf_modeofmbist_0(data)                     (0x00000001&(data))
#define  SD_ALL_TOP_CR_BIST_DRF_MODE_get_drf_modeofmbist_0(data)                 (0x00000001&(data))

#define  SD_ALL_TOP_CR_BIST_DRF_RESUME                                          0x18010D08
#define  SD_ALL_TOP_CR_BIST_DRF_RESUME_reg_addr                                  "0xB8010D08"
#define  SD_ALL_TOP_CR_BIST_DRF_RESUME_reg                                       0xB8010D08
#define  SD_ALL_TOP_CR_BIST_DRF_RESUME_inst_addr                                 "0x0027"
#define  set_SD_ALL_TOP_CR_BIST_DRF_RESUME_reg(data)                             (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DRF_RESUME_reg)=data)
#define  get_SD_ALL_TOP_CR_BIST_DRF_RESUME_reg                                   (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DRF_RESUME_reg))
#define  SD_ALL_TOP_CR_BIST_DRF_RESUME_drf_resumeofmbist_0_shift                 (0)
#define  SD_ALL_TOP_CR_BIST_DRF_RESUME_drf_resumeofmbist_0_mask                  (0x00000001)
#define  SD_ALL_TOP_CR_BIST_DRF_RESUME_drf_resumeofmbist_0(data)                 (0x00000001&(data))
#define  SD_ALL_TOP_CR_BIST_DRF_RESUME_get_drf_resumeofmbist_0(data)             (0x00000001&(data))

#define  SD_ALL_TOP_CR_BIST_DRF_DONE                                            0x18010D0C
#define  SD_ALL_TOP_CR_BIST_DRF_DONE_reg_addr                                    "0xB8010D0C"
#define  SD_ALL_TOP_CR_BIST_DRF_DONE_reg                                         0xB8010D0C
#define  SD_ALL_TOP_CR_BIST_DRF_DONE_inst_addr                                   "0x0028"
#define  set_SD_ALL_TOP_CR_BIST_DRF_DONE_reg(data)                               (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DRF_DONE_reg)=data)
#define  get_SD_ALL_TOP_CR_BIST_DRF_DONE_reg                                     (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DRF_DONE_reg))
#define  SD_ALL_TOP_CR_BIST_DRF_DONE_drf_doneofmbist_0_shift                     (0)
#define  SD_ALL_TOP_CR_BIST_DRF_DONE_drf_doneofmbist_0_mask                      (0x00000001)
#define  SD_ALL_TOP_CR_BIST_DRF_DONE_drf_doneofmbist_0(data)                     (0x00000001&(data))
#define  SD_ALL_TOP_CR_BIST_DRF_DONE_get_drf_doneofmbist_0(data)                 (0x00000001&(data))

#define  SD_ALL_TOP_CR_BIST_DRF_PAUSE                                           0x18010D10
#define  SD_ALL_TOP_CR_BIST_DRF_PAUSE_reg_addr                                   "0xB8010D10"
#define  SD_ALL_TOP_CR_BIST_DRF_PAUSE_reg                                        0xB8010D10
#define  SD_ALL_TOP_CR_BIST_DRF_PAUSE_inst_addr                                  "0x0029"
#define  set_SD_ALL_TOP_CR_BIST_DRF_PAUSE_reg(data)                              (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DRF_PAUSE_reg)=data)
#define  get_SD_ALL_TOP_CR_BIST_DRF_PAUSE_reg                                    (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DRF_PAUSE_reg))
#define  SD_ALL_TOP_CR_BIST_DRF_PAUSE_drf_pauseofmbist_0_shift                   (0)
#define  SD_ALL_TOP_CR_BIST_DRF_PAUSE_drf_pauseofmbist_0_mask                    (0x00000001)
#define  SD_ALL_TOP_CR_BIST_DRF_PAUSE_drf_pauseofmbist_0(data)                   (0x00000001&(data))
#define  SD_ALL_TOP_CR_BIST_DRF_PAUSE_get_drf_pauseofmbist_0(data)               (0x00000001&(data))

#define  SD_ALL_TOP_CR_BIST_DRF_FAIL                                            0x18010D14
#define  SD_ALL_TOP_CR_BIST_DRF_FAIL_reg_addr                                    "0xB8010D14"
#define  SD_ALL_TOP_CR_BIST_DRF_FAIL_reg                                         0xB8010D14
#define  SD_ALL_TOP_CR_BIST_DRF_FAIL_inst_addr                                   "0x002A"
#define  set_SD_ALL_TOP_CR_BIST_DRF_FAIL_reg(data)                               (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DRF_FAIL_reg)=data)
#define  get_SD_ALL_TOP_CR_BIST_DRF_FAIL_reg                                     (*((volatile unsigned int*)SD_ALL_TOP_CR_BIST_DRF_FAIL_reg))
#define  SD_ALL_TOP_CR_BIST_DRF_FAIL_drf_failofmbist_0_shift                     (0)
#define  SD_ALL_TOP_CR_BIST_DRF_FAIL_drf_failofmbist_0_mask                      (0x00000001)
#define  SD_ALL_TOP_CR_BIST_DRF_FAIL_drf_failofmbist_0(data)                     (0x00000001&(data))
#define  SD_ALL_TOP_CR_BIST_DRF_FAIL_get_drf_failofmbist_0(data)                 (0x00000001&(data))

#define  SD_ALL_TOP_CR_CTRL                                                     0x18010D18
#define  SD_ALL_TOP_CR_CTRL_reg_addr                                             "0xB8010D18"
#define  SD_ALL_TOP_CR_CTRL_reg                                                  0xB8010D18
#define  SD_ALL_TOP_CR_CTRL_inst_addr                                            "0x002B"
#define  set_SD_ALL_TOP_CR_CTRL_reg(data)                                        (*((volatile unsigned int*)SD_ALL_TOP_CR_CTRL_reg)=data)
#define  get_SD_ALL_TOP_CR_CTRL_reg                                              (*((volatile unsigned int*)SD_ALL_TOP_CR_CTRL_reg))
#define  SD_ALL_TOP_CR_CTRL_asic_dbg_sel_shift                                   (20)
#define  SD_ALL_TOP_CR_CTRL_dbg_sel_shift                                        (12)
#define  SD_ALL_TOP_CR_CTRL_wrap_dbg_sel_shift                                   (6)
#define  SD_ALL_TOP_CR_CTRL_map_sel_shift                                        (5)
#define  SD_ALL_TOP_CR_CTRL_xfer_dir_shift                                       (4)
#define  SD_ALL_TOP_CR_CTRL_boot_from_cr_shift                                   (3)
#define  SD_ALL_TOP_CR_CTRL_buff_timing_shift                                    (1)
#define  SD_ALL_TOP_CR_CTRL_cp_en_shift                                          (0)
#define  SD_ALL_TOP_CR_CTRL_asic_dbg_sel_mask                                    (0x00F00000)
#define  SD_ALL_TOP_CR_CTRL_dbg_sel_mask                                         (0x000FF000)
#define  SD_ALL_TOP_CR_CTRL_wrap_dbg_sel_mask                                    (0x00000FC0)
#define  SD_ALL_TOP_CR_CTRL_map_sel_mask                                         (0x00000020)
#define  SD_ALL_TOP_CR_CTRL_xfer_dir_mask                                        (0x00000010)
#define  SD_ALL_TOP_CR_CTRL_boot_from_cr_mask                                    (0x00000008)
#define  SD_ALL_TOP_CR_CTRL_buff_timing_mask                                     (0x00000006)
#define  SD_ALL_TOP_CR_CTRL_cp_en_mask                                           (0x00000001)
#define  SD_ALL_TOP_CR_CTRL_asic_dbg_sel(data)                                   (0x00F00000&((data)<<20))
#define  SD_ALL_TOP_CR_CTRL_dbg_sel(data)                                        (0x000FF000&((data)<<12))
#define  SD_ALL_TOP_CR_CTRL_wrap_dbg_sel(data)                                   (0x00000FC0&((data)<<6))
#define  SD_ALL_TOP_CR_CTRL_map_sel(data)                                        (0x00000020&((data)<<5))
#define  SD_ALL_TOP_CR_CTRL_xfer_dir(data)                                       (0x00000010&((data)<<4))
#define  SD_ALL_TOP_CR_CTRL_boot_from_cr(data)                                   (0x00000008&((data)<<3))
#define  SD_ALL_TOP_CR_CTRL_buff_timing(data)                                    (0x00000006&((data)<<1))
#define  SD_ALL_TOP_CR_CTRL_cp_en(data)                                          (0x00000001&(data))
#define  SD_ALL_TOP_CR_CTRL_get_asic_dbg_sel(data)                               ((0x00F00000&(data))>>20)
#define  SD_ALL_TOP_CR_CTRL_get_dbg_sel(data)                                    ((0x000FF000&(data))>>12)
#define  SD_ALL_TOP_CR_CTRL_get_wrap_dbg_sel(data)                               ((0x00000FC0&(data))>>6)
#define  SD_ALL_TOP_CR_CTRL_get_map_sel(data)                                    ((0x00000020&(data))>>5)
#define  SD_ALL_TOP_CR_CTRL_get_xfer_dir(data)                                   ((0x00000010&(data))>>4)
#define  SD_ALL_TOP_CR_CTRL_get_boot_from_cr(data)                               ((0x00000008&(data))>>3)
#define  SD_ALL_TOP_CR_CTRL_get_buff_timing(data)                                ((0x00000006&(data))>>1)
#define  SD_ALL_TOP_CR_CTRL_get_cp_en(data)                                      (0x00000001&(data))

#define  SD_ALL_TOP_ARB_STS                                                     0x18010D1C
#define  SD_ALL_TOP_ARB_STS_reg_addr                                             "0xB8010D1C"
#define  SD_ALL_TOP_ARB_STS_reg                                                  0xB8010D1C
#define  SD_ALL_TOP_ARB_STS_inst_addr                                            "0x002C"
#define  set_SD_ALL_TOP_ARB_STS_reg(data)                                        (*((volatile unsigned int*)SD_ALL_TOP_ARB_STS_reg)=data)
#define  get_SD_ALL_TOP_ARB_STS_reg                                              (*((volatile unsigned int*)SD_ALL_TOP_ARB_STS_reg))
#define  SD_ALL_TOP_ARB_STS_arb_sts_shift                                        (0)
#define  SD_ALL_TOP_ARB_STS_arb_sts_mask                                         (0x000000FF)
#define  SD_ALL_TOP_ARB_STS_arb_sts(data)                                        (0x000000FF&(data))
#define  SD_ALL_TOP_ARB_STS_get_arb_sts(data)                                    (0x000000FF&(data))

#define  SD_ALL_TOP_SRAM_DATA                                                   0x18010D20
#define  SD_ALL_TOP_SRAM_DATA_reg_addr                                           "0xB8010D20"
#define  SD_ALL_TOP_SRAM_DATA_reg                                                0xB8010D20
#define  SD_ALL_TOP_SRAM_DATA_inst_addr                                          "0x002D"
#define  set_SD_ALL_TOP_SRAM_DATA_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_SRAM_DATA_reg)=data)
#define  get_SD_ALL_TOP_SRAM_DATA_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_SRAM_DATA_reg))
#define  SD_ALL_TOP_SRAM_DATA_sram_data_shift                                    (0)
#define  SD_ALL_TOP_SRAM_DATA_sram_data_mask                                     (0xFFFFFFFF)
#define  SD_ALL_TOP_SRAM_DATA_sram_data(data)                                    (0xFFFFFFFF&(data))
#define  SD_ALL_TOP_SRAM_DATA_get_sram_data(data)                                (0xFFFFFFFF&(data))

#define  SD_ALL_TOP_RSP_17B_0                                                   0x18010D28
#define  SD_ALL_TOP_RSP_17B_0_reg_addr                                           "0xB8010D28"
#define  SD_ALL_TOP_RSP_17B_0_reg                                                0xB8010D28
#define  SD_ALL_TOP_RSP_17B_0_inst_addr                                          "0x002E"
#define  set_SD_ALL_TOP_RSP_17B_0_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_0_reg)=data)
#define  get_SD_ALL_TOP_RSP_17B_0_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_0_reg))
#define  SD_ALL_TOP_RSP_17B_0_rsp_buf_0_shift                                    (0)
#define  SD_ALL_TOP_RSP_17B_0_rsp_buf_0_mask                                     (0x0000FFFF)
#define  SD_ALL_TOP_RSP_17B_0_rsp_buf_0(data)                                    (0x0000FFFF&(data))
#define  SD_ALL_TOP_RSP_17B_0_get_rsp_buf_0(data)                                (0x0000FFFF&(data))

#define  SD_ALL_TOP_RSP_17B_1                                                   0x18010D2C
#define  SD_ALL_TOP_RSP_17B_1_reg_addr                                           "0xB8010D2C"
#define  SD_ALL_TOP_RSP_17B_1_reg                                                0xB8010D2C
#define  SD_ALL_TOP_RSP_17B_1_inst_addr                                          "0x002F"
#define  set_SD_ALL_TOP_RSP_17B_1_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_1_reg)=data)
#define  get_SD_ALL_TOP_RSP_17B_1_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_1_reg))
#define  SD_ALL_TOP_RSP_17B_1_rsp_buf_1_shift                                    (0)
#define  SD_ALL_TOP_RSP_17B_1_rsp_buf_1_mask                                     (0x0000FFFF)
#define  SD_ALL_TOP_RSP_17B_1_rsp_buf_1(data)                                    (0x0000FFFF&(data))
#define  SD_ALL_TOP_RSP_17B_1_get_rsp_buf_1(data)                                (0x0000FFFF&(data))

#define  SD_ALL_TOP_RSP_17B_2                                                   0x18010D30
#define  SD_ALL_TOP_RSP_17B_2_reg_addr                                           "0xB8010D30"
#define  SD_ALL_TOP_RSP_17B_2_reg                                                0xB8010D30
#define  SD_ALL_TOP_RSP_17B_2_inst_addr                                          "0x0030"
#define  set_SD_ALL_TOP_RSP_17B_2_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_2_reg)=data)
#define  get_SD_ALL_TOP_RSP_17B_2_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_2_reg))
#define  SD_ALL_TOP_RSP_17B_2_rsp_buf_2_shift                                    (0)
#define  SD_ALL_TOP_RSP_17B_2_rsp_buf_2_mask                                     (0x0000FFFF)
#define  SD_ALL_TOP_RSP_17B_2_rsp_buf_2(data)                                    (0x0000FFFF&(data))
#define  SD_ALL_TOP_RSP_17B_2_get_rsp_buf_2(data)                                (0x0000FFFF&(data))

#define  SD_ALL_TOP_RSP_17B_3                                                   0x18010D34
#define  SD_ALL_TOP_RSP_17B_3_reg_addr                                           "0xB8010D34"
#define  SD_ALL_TOP_RSP_17B_3_reg                                                0xB8010D34
#define  SD_ALL_TOP_RSP_17B_3_inst_addr                                          "0x0031"
#define  set_SD_ALL_TOP_RSP_17B_3_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_3_reg)=data)
#define  get_SD_ALL_TOP_RSP_17B_3_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_3_reg))
#define  SD_ALL_TOP_RSP_17B_3_rsp_buf_3_shift                                    (0)
#define  SD_ALL_TOP_RSP_17B_3_rsp_buf_3_mask                                     (0x0000FFFF)
#define  SD_ALL_TOP_RSP_17B_3_rsp_buf_3(data)                                    (0x0000FFFF&(data))
#define  SD_ALL_TOP_RSP_17B_3_get_rsp_buf_3(data)                                (0x0000FFFF&(data))

#define  SD_ALL_TOP_RSP_17B_4                                                   0x18010D38
#define  SD_ALL_TOP_RSP_17B_4_reg_addr                                           "0xB8010D38"
#define  SD_ALL_TOP_RSP_17B_4_reg                                                0xB8010D38
#define  SD_ALL_TOP_RSP_17B_4_inst_addr                                          "0x0032"
#define  set_SD_ALL_TOP_RSP_17B_4_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_4_reg)=data)
#define  get_SD_ALL_TOP_RSP_17B_4_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_4_reg))
#define  SD_ALL_TOP_RSP_17B_4_rsp_buf_4_shift                                    (0)
#define  SD_ALL_TOP_RSP_17B_4_rsp_buf_4_mask                                     (0x0000FFFF)
#define  SD_ALL_TOP_RSP_17B_4_rsp_buf_4(data)                                    (0x0000FFFF&(data))
#define  SD_ALL_TOP_RSP_17B_4_get_rsp_buf_4(data)                                (0x0000FFFF&(data))

#define  SD_ALL_TOP_RSP_17B_5                                                   0x18010D3C
#define  SD_ALL_TOP_RSP_17B_5_reg_addr                                           "0xB8010D3C"
#define  SD_ALL_TOP_RSP_17B_5_reg                                                0xB8010D3C
#define  SD_ALL_TOP_RSP_17B_5_inst_addr                                          "0x0033"
#define  set_SD_ALL_TOP_RSP_17B_5_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_5_reg)=data)
#define  get_SD_ALL_TOP_RSP_17B_5_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_5_reg))
#define  SD_ALL_TOP_RSP_17B_5_rsp_buf_5_shift                                    (0)
#define  SD_ALL_TOP_RSP_17B_5_rsp_buf_5_mask                                     (0x0000FFFF)
#define  SD_ALL_TOP_RSP_17B_5_rsp_buf_5(data)                                    (0x0000FFFF&(data))
#define  SD_ALL_TOP_RSP_17B_5_get_rsp_buf_5(data)                                (0x0000FFFF&(data))

#define  SD_ALL_TOP_RSP_17B_6                                                   0x18010D40
#define  SD_ALL_TOP_RSP_17B_6_reg_addr                                           "0xB8010D40"
#define  SD_ALL_TOP_RSP_17B_6_reg                                                0xB8010D40
#define  SD_ALL_TOP_RSP_17B_6_inst_addr                                          "0x0034"
#define  set_SD_ALL_TOP_RSP_17B_6_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_6_reg)=data)
#define  get_SD_ALL_TOP_RSP_17B_6_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_6_reg))
#define  SD_ALL_TOP_RSP_17B_6_rsp_buf_6_shift                                    (0)
#define  SD_ALL_TOP_RSP_17B_6_rsp_buf_6_mask                                     (0x0000FFFF)
#define  SD_ALL_TOP_RSP_17B_6_rsp_buf_6(data)                                    (0x0000FFFF&(data))
#define  SD_ALL_TOP_RSP_17B_6_get_rsp_buf_6(data)                                (0x0000FFFF&(data))

#define  SD_ALL_TOP_RSP_17B_7                                                   0x18010D44
#define  SD_ALL_TOP_RSP_17B_7_reg_addr                                           "0xB8010D44"
#define  SD_ALL_TOP_RSP_17B_7_reg                                                0xB8010D44
#define  SD_ALL_TOP_RSP_17B_7_inst_addr                                          "0x0035"
#define  set_SD_ALL_TOP_RSP_17B_7_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_7_reg)=data)
#define  get_SD_ALL_TOP_RSP_17B_7_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_RSP_17B_7_reg))
#define  SD_ALL_TOP_RSP_17B_7_rsp_buf_7_shift                                    (0)
#define  SD_ALL_TOP_RSP_17B_7_rsp_buf_7_mask                                     (0x0000FFFF)
#define  SD_ALL_TOP_RSP_17B_7_rsp_buf_7(data)                                    (0x0000FFFF&(data))
#define  SD_ALL_TOP_RSP_17B_7_get_rsp_buf_7(data)                                (0x0000FFFF&(data))

#define  SD_ALL_TOP_self_test                                                   0x18010D48
#define  SD_ALL_TOP_self_test_reg_addr                                           "0xB8010D48"
#define  SD_ALL_TOP_self_test_reg                                                0xB8010D48
#define  SD_ALL_TOP_self_test_inst_addr                                          "0x0036"
#define  set_SD_ALL_TOP_self_test_reg(data)                                      (*((volatile unsigned int*)SD_ALL_TOP_self_test_reg)=data)
#define  get_SD_ALL_TOP_self_test_reg                                            (*((volatile unsigned int*)SD_ALL_TOP_self_test_reg))
#define  SD_ALL_TOP_self_test_sf_rx_fail_bit_status_shift                        (16)
#define  SD_ALL_TOP_self_test_sf_rx_debug_bit_sel_shift                          (8)
#define  SD_ALL_TOP_self_test_sf_tx_mode_shift                                   (7)
#define  SD_ALL_TOP_self_test_sf_tx_start_shift                                  (6)
#define  SD_ALL_TOP_self_test_sf_tx_work_shift                                   (5)
#define  SD_ALL_TOP_self_test_sf_rx_mode_shift                                   (4)
#define  SD_ALL_TOP_self_test_sf_rx_start_shift                                  (3)
#define  SD_ALL_TOP_self_test_sf_rx_gated_shift                                  (2)
#define  SD_ALL_TOP_self_test_sf_rx_done_shift                                   (1)
#define  SD_ALL_TOP_self_test_sf_rx_err_shift                                    (0)
#define  SD_ALL_TOP_self_test_sf_rx_fail_bit_status_mask                         (0x00010000)
#define  SD_ALL_TOP_self_test_sf_rx_debug_bit_sel_mask                           (0x0000FF00)
#define  SD_ALL_TOP_self_test_sf_tx_mode_mask                                    (0x00000080)
#define  SD_ALL_TOP_self_test_sf_tx_start_mask                                   (0x00000040)
#define  SD_ALL_TOP_self_test_sf_tx_work_mask                                    (0x00000020)
#define  SD_ALL_TOP_self_test_sf_rx_mode_mask                                    (0x00000010)
#define  SD_ALL_TOP_self_test_sf_rx_start_mask                                   (0x00000008)
#define  SD_ALL_TOP_self_test_sf_rx_gated_mask                                   (0x00000004)
#define  SD_ALL_TOP_self_test_sf_rx_done_mask                                    (0x00000002)
#define  SD_ALL_TOP_self_test_sf_rx_err_mask                                     (0x00000001)
#define  SD_ALL_TOP_self_test_sf_rx_fail_bit_status(data)                        (0x00010000&((data)<<16))
#define  SD_ALL_TOP_self_test_sf_rx_debug_bit_sel(data)                          (0x0000FF00&((data)<<8))
#define  SD_ALL_TOP_self_test_sf_tx_mode(data)                                   (0x00000080&((data)<<7))
#define  SD_ALL_TOP_self_test_sf_tx_start(data)                                  (0x00000040&((data)<<6))
#define  SD_ALL_TOP_self_test_sf_tx_work(data)                                   (0x00000020&((data)<<5))
#define  SD_ALL_TOP_self_test_sf_rx_mode(data)                                   (0x00000010&((data)<<4))
#define  SD_ALL_TOP_self_test_sf_rx_start(data)                                  (0x00000008&((data)<<3))
#define  SD_ALL_TOP_self_test_sf_rx_gated(data)                                  (0x00000004&((data)<<2))
#define  SD_ALL_TOP_self_test_sf_rx_done(data)                                   (0x00000002&((data)<<1))
#define  SD_ALL_TOP_self_test_sf_rx_err(data)                                    (0x00000001&(data))
#define  SD_ALL_TOP_self_test_get_sf_rx_fail_bit_status(data)                    ((0x00010000&(data))>>16)
#define  SD_ALL_TOP_self_test_get_sf_rx_debug_bit_sel(data)                      ((0x0000FF00&(data))>>8)
#define  SD_ALL_TOP_self_test_get_sf_tx_mode(data)                               ((0x00000080&(data))>>7)
#define  SD_ALL_TOP_self_test_get_sf_tx_start(data)                              ((0x00000040&(data))>>6)
#define  SD_ALL_TOP_self_test_get_sf_tx_work(data)                               ((0x00000020&(data))>>5)
#define  SD_ALL_TOP_self_test_get_sf_rx_mode(data)                               ((0x00000010&(data))>>4)
#define  SD_ALL_TOP_self_test_get_sf_rx_start(data)                              ((0x00000008&(data))>>3)
#define  SD_ALL_TOP_self_test_get_sf_rx_gated(data)                              ((0x00000004&(data))>>2)
#define  SD_ALL_TOP_self_test_get_sf_rx_done(data)                               ((0x00000002&(data))>>1)
#define  SD_ALL_TOP_self_test_get_sf_rx_err(data)                                (0x00000001&(data))

#define  SD_ALL_TOP_rbus_mp_dummy0                                              0x18010D6C
#define  SD_ALL_TOP_rbus_mp_dummy0_reg_addr                                      "0xB8010D6C"
#define  SD_ALL_TOP_rbus_mp_dummy0_reg                                           0xB8010D6C
#define  SD_ALL_TOP_rbus_mp_dummy0_inst_addr                                     "0x0037"
#define  set_SD_ALL_TOP_rbus_mp_dummy0_reg(data)                                 (*((volatile unsigned int*)SD_ALL_TOP_rbus_mp_dummy0_reg)=data)
#define  get_SD_ALL_TOP_rbus_mp_dummy0_reg                                       (*((volatile unsigned int*)SD_ALL_TOP_rbus_mp_dummy0_reg))
#define  SD_ALL_TOP_rbus_mp_dummy0_rbus_mp_dummy0_shift                          (0)
#define  SD_ALL_TOP_rbus_mp_dummy0_rbus_mp_dummy0_mask                           (0xFFFFFFFF)
#define  SD_ALL_TOP_rbus_mp_dummy0_rbus_mp_dummy0(data)                          (0xFFFFFFFF&(data))
#define  SD_ALL_TOP_rbus_mp_dummy0_get_rbus_mp_dummy0(data)                      (0xFFFFFFFF&(data))

#define  SD_ALL_TOP_rbus_mp_dummy1                                              0x18010D80
#define  SD_ALL_TOP_rbus_mp_dummy1_reg_addr                                      "0xB8010D80"
#define  SD_ALL_TOP_rbus_mp_dummy1_reg                                           0xB8010D80
#define  SD_ALL_TOP_rbus_mp_dummy1_inst_addr                                     "0x0038"
#define  set_SD_ALL_TOP_rbus_mp_dummy1_reg(data)                                 (*((volatile unsigned int*)SD_ALL_TOP_rbus_mp_dummy1_reg)=data)
#define  get_SD_ALL_TOP_rbus_mp_dummy1_reg                                       (*((volatile unsigned int*)SD_ALL_TOP_rbus_mp_dummy1_reg))
#define  SD_ALL_TOP_rbus_mp_dummy1_rbus_mp_dummy1_shift                          (0)
#define  SD_ALL_TOP_rbus_mp_dummy1_rbus_mp_dummy1_mask                           (0xFFFFFFFF)
#define  SD_ALL_TOP_rbus_mp_dummy1_rbus_mp_dummy1(data)                          (0xFFFFFFFF&(data))
#define  SD_ALL_TOP_rbus_mp_dummy1_get_rbus_mp_dummy1(data)                      (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SD_ALL_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  init_mode_1:1;
        RBus_UInt32  clk_div_1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  sd_async_fifo_rstn:1;
        RBus_UInt32  mode_sel_1:2;
        RBus_UInt32  bit_mode_1:2;
    };
}sd_all_top_sd_configure1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  no_crc7:1;
        RBus_UInt32  check_crc16:1;
        RBus_UInt32  write_status_time_out_en:1;
        RBus_UInt32  ignore_write_error:1;
        RBus_UInt32  wait_busy:1;
        RBus_UInt32  check_crc7:1;
        RBus_UInt32  rsp_length:2;
    };
}sd_all_top_sd_configure2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_dummy_reg0:7;
        RBus_UInt32  rsp_time_out_en:1;
    };
}sd_all_top_sd_configure3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  crc7_error:1;
        RBus_UInt32  crc16_error:1;
        RBus_UInt32  write_error:1;
        RBus_UInt32  write_status:3;
        RBus_UInt32  write_status_time_out:1;
        RBus_UInt32  tuning_cmp_error:1;
    };
}sd_all_top_sd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  rsp_time_out:1;
    };
}sd_all_top_sd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  toggle_clk:1;
        RBus_UInt32  stop_clk_when_idle:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  sddati_d:4;
        RBus_UInt32  sdcmdi_d:1;
    };
}sd_all_top_sd_bus_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sd_dummy_reg1:7;
    };
}sd_all_top_sd_cmd_code_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ddr_dat_samp_type_1:1;
        RBus_UInt32  ddr_dat_samp_point_1:1;
        RBus_UInt32  ddr_cmd_samp_type_1:1;
        RBus_UInt32  ddr_cmd_samp_point_1:1;
        RBus_UInt32  sd20_samp_point_1:1;
        RBus_UInt32  res2:3;
    };
}sd_all_top_sd_sample_point_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  ddr_push_type_1:1;
        RBus_UInt32  ddr_dat_push_point_1:1;
        RBus_UInt32  ddr_cmd_push_point_1:1;
        RBus_UInt32  sd20_push_point_1:1;
        RBus_UInt32  dpclk_pos_samp_1:1;
        RBus_UInt32  ddr_fw_solution_1:1;
        RBus_UInt32  ddr_dig_solution_1:1;
        RBus_UInt32  sdclk_polarity_swap_1:1;
    };
}sd_all_top_sd_push_point_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_cmd0:8;
    };
}sd_all_top_sd_cmd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_cmd1:8;
    };
}sd_all_top_sd_cmd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_cmd2:8;
    };
}sd_all_top_sd_cmd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_cmd3:8;
    };
}sd_all_top_sd_cmd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_cmd4:8;
    };
}sd_all_top_sd_cmd4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_cmd5:8;
    };
}sd_all_top_sd_cmd5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_byte_cnt_l:8;
    };
}sd_all_top_sd_byte_cnt_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  sd_byte_cnt_h:3;
    };
}sd_all_top_sd_byte_cnt_h_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_block_cnt_l:8;
    };
}sd_all_top_sd_block_cnt_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_block_cnt_h:8;
    };
}sd_all_top_sd_block_cnt_h_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  start:1;
        RBus_UInt32  sd_end:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  sd_error:1;
        RBus_UInt32  cmd_code:4;
    };
}sd_all_top_sd_transfer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  detect_cmd_odd_start_bit_err:1;
        RBus_UInt32  force_cmd_odd_1:1;
        RBus_UInt32  force_cmd_odd_0:1;
        RBus_UInt32  detect_cmd_odd_start_bit_reg:1;
        RBus_UInt32  detect_data_odd_start_bit_err:1;
        RBus_UInt32  force_data_odd_1:1;
        RBus_UInt32  force_data_odd_0:1;
        RBus_UInt32  detect_data_odd_start_bit_reg:1;
    };
}sd_all_top_sd_ddr_chk_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cmd_is_idle:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  cmd_state:4;
    };
}sd_all_top_sd_cmd_state_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  data_is_idle:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  data_state:5;
    };
}sd_all_top_sd_data_state_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  bus_ta_time_set:1;
        RBus_UInt32  bus_ta_time_cfg:3;
    };
}sd_all_top_sd_bus_ta_time_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  stop_sd20clk_set:1;
        RBus_UInt32  stop_sd20clk_cfg:2;
        RBus_UInt32  stop_sdclk_set:1;
        RBus_UInt32  stop_sdclk_cfg:2;
    };
}sd_all_top_sd_stop_sdclk_cfg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  auto_reset_fifo:1;
    };
}sd_all_top_sd_auto_rst_fifo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  sd30_infinite_mode:1;
        RBus_UInt32  sd_busy:1;
        RBus_UInt32  sd_rw_stop:1;
    };
}sd_all_top_sd_rw_stop_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  sd_dummy_reg3:6;
        RBus_UInt32  res2:2;
    };
}sd_all_top_sd_dummy_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_dummy:32;
    };
}sd_all_top_sd_dummy_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_in_addr:29;
        RBus_UInt32  res1:3;
    };
}sd_all_top_cr_dma_in_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_out_addr:29;
        RBus_UInt32  res1:3;
    };
}sd_all_top_cr_dma_out_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  write_protection:1;
        RBus_UInt32  card_detection:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  decode_error:1;
        RBus_UInt32  decode_finish:1;
        RBus_UInt32  card_status_change:1;
    };
}sd_all_top_cr_int_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  card_detection_intmask:1;
        RBus_UInt32  decode_error_mask:1;
        RBus_UInt32  decode_finish_mask:1;
        RBus_UInt32  card_status_change_mask:1;
    };
}sd_all_top_cr_int_mask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  data_in_sflb:4;
        RBus_UInt32  cmd_in_sflb:1;
        RBus_UInt32  data_oe_sflb:4;
        RBus_UInt32  data_out_sflb:4;
        RBus_UInt32  cmd_oe_sflb:1;
        RBus_UInt32  cmd_out_sflb:1;
        RBus_UInt32  self_look_back_mode:1;
    };
}sd_all_top_sd_self_look_back_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  rma_0:4;
        RBus_UInt32  rmea_0:1;
        RBus_UInt32  test1_0:1;
        RBus_UInt32  res2:4;
    };
}sd_all_top_cr_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_mode_0:1;
    };
}sd_all_top_cr_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_done_0:1;
    };
}sd_all_top_cr_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_fail_0:1;
    };
}sd_all_top_cr_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_modeofmbist_0:1;
    };
}sd_all_top_cr_bist_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_resumeofmbist_0:1;
    };
}sd_all_top_cr_bist_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_doneofmbist_0:1;
    };
}sd_all_top_cr_bist_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_pauseofmbist_0:1;
    };
}sd_all_top_cr_bist_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_failofmbist_0:1;
    };
}sd_all_top_cr_bist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  asic_dbg_sel:4;
        RBus_UInt32  dbg_sel:8;
        RBus_UInt32  wrap_dbg_sel:6;
        RBus_UInt32  map_sel:1;
        RBus_UInt32  xfer_dir:1;
        RBus_UInt32  boot_from_cr:1;
        RBus_UInt32  buff_timing:2;
        RBus_UInt32  cp_en:1;
    };
}sd_all_top_cr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  arb_sts:8;
    };
}sd_all_top_arb_sts_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_data:32;
    };
}sd_all_top_sram_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  rsp_buf_0:16;
    };
}sd_all_top_rsp_17b_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  rsp_buf_1:16;
    };
}sd_all_top_rsp_17b_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  rsp_buf_2:16;
    };
}sd_all_top_rsp_17b_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  rsp_buf_3:16;
    };
}sd_all_top_rsp_17b_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  rsp_buf_4:16;
    };
}sd_all_top_rsp_17b_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  rsp_buf_5:16;
    };
}sd_all_top_rsp_17b_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  rsp_buf_6:16;
    };
}sd_all_top_rsp_17b_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  rsp_buf_7:16;
    };
}sd_all_top_rsp_17b_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  sf_rx_fail_bit_status:1;
        RBus_UInt32  sf_rx_debug_bit_sel:8;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_tx_work:1;
        RBus_UInt32  sf_rx_mode:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  sf_rx_done:1;
        RBus_UInt32  sf_rx_err:1;
    };
}sd_all_top_self_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbus_mp_dummy0:32;
    };
}sd_all_top_rbus_mp_dummy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbus_mp_dummy1:32;
    };
}sd_all_top_rbus_mp_dummy1_RBUS;

#else //apply LITTLE_ENDIAN

//======SD_ALL_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bit_mode_1:2;
        RBus_UInt32  mode_sel_1:2;
        RBus_UInt32  sd_async_fifo_rstn:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  clk_div_1:1;
        RBus_UInt32  init_mode_1:1;
        RBus_UInt32  res2:24;
    };
}sd_all_top_sd_configure1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_length:2;
        RBus_UInt32  check_crc7:1;
        RBus_UInt32  wait_busy:1;
        RBus_UInt32  ignore_write_error:1;
        RBus_UInt32  write_status_time_out_en:1;
        RBus_UInt32  check_crc16:1;
        RBus_UInt32  no_crc7:1;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_configure2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_time_out_en:1;
        RBus_UInt32  sd_dummy_reg0:7;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_configure3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tuning_cmp_error:1;
        RBus_UInt32  write_status_time_out:1;
        RBus_UInt32  write_status:3;
        RBus_UInt32  write_error:1;
        RBus_UInt32  crc16_error:1;
        RBus_UInt32  crc7_error:1;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_time_out:1;
        RBus_UInt32  res1:31;
    };
}sd_all_top_sd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sdcmdi_d:1;
        RBus_UInt32  sddati_d:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  stop_clk_when_idle:1;
        RBus_UInt32  toggle_clk:1;
        RBus_UInt32  res2:24;
    };
}sd_all_top_sd_bus_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_dummy_reg1:7;
        RBus_UInt32  res1:25;
    };
}sd_all_top_sd_cmd_code_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  sd20_samp_point_1:1;
        RBus_UInt32  ddr_cmd_samp_point_1:1;
        RBus_UInt32  ddr_cmd_samp_type_1:1;
        RBus_UInt32  ddr_dat_samp_point_1:1;
        RBus_UInt32  ddr_dat_samp_type_1:1;
        RBus_UInt32  res2:24;
    };
}sd_all_top_sd_sample_point_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sdclk_polarity_swap_1:1;
        RBus_UInt32  ddr_dig_solution_1:1;
        RBus_UInt32  ddr_fw_solution_1:1;
        RBus_UInt32  dpclk_pos_samp_1:1;
        RBus_UInt32  sd20_push_point_1:1;
        RBus_UInt32  ddr_cmd_push_point_1:1;
        RBus_UInt32  ddr_dat_push_point_1:1;
        RBus_UInt32  ddr_push_type_1:1;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_push_point_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_cmd0:8;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_cmd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_cmd1:8;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_cmd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_cmd2:8;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_cmd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_cmd3:8;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_cmd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_cmd4:8;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_cmd4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_cmd5:8;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_cmd5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_byte_cnt_l:8;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_byte_cnt_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_byte_cnt_h:3;
        RBus_UInt32  res1:29;
    };
}sd_all_top_sd_byte_cnt_h_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_block_cnt_l:8;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_block_cnt_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_block_cnt_h:8;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_block_cnt_h_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_code:4;
        RBus_UInt32  sd_error:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sd_end:1;
        RBus_UInt32  start:1;
        RBus_UInt32  res2:24;
    };
}sd_all_top_sd_transfer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  detect_data_odd_start_bit_reg:1;
        RBus_UInt32  force_data_odd_0:1;
        RBus_UInt32  force_data_odd_1:1;
        RBus_UInt32  detect_data_odd_start_bit_err:1;
        RBus_UInt32  detect_cmd_odd_start_bit_reg:1;
        RBus_UInt32  force_cmd_odd_0:1;
        RBus_UInt32  force_cmd_odd_1:1;
        RBus_UInt32  detect_cmd_odd_start_bit_err:1;
        RBus_UInt32  res1:24;
    };
}sd_all_top_sd_ddr_chk_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_state:4;
        RBus_UInt32  res1:3;
        RBus_UInt32  cmd_is_idle:1;
        RBus_UInt32  res2:24;
    };
}sd_all_top_sd_cmd_state_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_state:5;
        RBus_UInt32  res1:2;
        RBus_UInt32  data_is_idle:1;
        RBus_UInt32  res2:24;
    };
}sd_all_top_sd_data_state_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bus_ta_time_cfg:3;
        RBus_UInt32  bus_ta_time_set:1;
        RBus_UInt32  res1:28;
    };
}sd_all_top_sd_bus_ta_time_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stop_sdclk_cfg:2;
        RBus_UInt32  stop_sdclk_set:1;
        RBus_UInt32  stop_sd20clk_cfg:2;
        RBus_UInt32  stop_sd20clk_set:1;
        RBus_UInt32  res1:26;
    };
}sd_all_top_sd_stop_sdclk_cfg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  auto_reset_fifo:1;
        RBus_UInt32  res1:31;
    };
}sd_all_top_sd_auto_rst_fifo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_rw_stop:1;
        RBus_UInt32  sd_busy:1;
        RBus_UInt32  sd30_infinite_mode:1;
        RBus_UInt32  res1:29;
    };
}sd_all_top_sd_rw_stop_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  sd_dummy_reg3:6;
        RBus_UInt32  res2:24;
    };
}sd_all_top_sd_dummy_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_dummy:32;
    };
}sd_all_top_sd_dummy_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dma_in_addr:29;
    };
}sd_all_top_cr_dma_in_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  dma_out_addr:29;
    };
}sd_all_top_cr_dma_out_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  card_status_change:1;
        RBus_UInt32  decode_finish:1;
        RBus_UInt32  decode_error:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  card_detection:1;
        RBus_UInt32  write_protection:1;
        RBus_UInt32  res2:26;
    };
}sd_all_top_cr_int_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  card_status_change_mask:1;
        RBus_UInt32  decode_finish_mask:1;
        RBus_UInt32  decode_error_mask:1;
        RBus_UInt32  card_detection_intmask:1;
        RBus_UInt32  res1:28;
    };
}sd_all_top_cr_int_mask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  self_look_back_mode:1;
        RBus_UInt32  cmd_out_sflb:1;
        RBus_UInt32  cmd_oe_sflb:1;
        RBus_UInt32  data_out_sflb:4;
        RBus_UInt32  data_oe_sflb:4;
        RBus_UInt32  cmd_in_sflb:1;
        RBus_UInt32  data_in_sflb:4;
        RBus_UInt32  res1:16;
    };
}sd_all_top_sd_self_look_back_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  test1_0:1;
        RBus_UInt32  rmea_0:1;
        RBus_UInt32  rma_0:4;
        RBus_UInt32  res2:22;
    };
}sd_all_top_cr_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_mode_0:1;
        RBus_UInt32  res1:31;
    };
}sd_all_top_cr_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_done_0:1;
        RBus_UInt32  res1:31;
    };
}sd_all_top_cr_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  res1:31;
    };
}sd_all_top_cr_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_modeofmbist_0:1;
        RBus_UInt32  res1:31;
    };
}sd_all_top_cr_bist_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_resumeofmbist_0:1;
        RBus_UInt32  res1:31;
    };
}sd_all_top_cr_bist_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_doneofmbist_0:1;
        RBus_UInt32  res1:31;
    };
}sd_all_top_cr_bist_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_pauseofmbist_0:1;
        RBus_UInt32  res1:31;
    };
}sd_all_top_cr_bist_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_failofmbist_0:1;
        RBus_UInt32  res1:31;
    };
}sd_all_top_cr_bist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cp_en:1;
        RBus_UInt32  buff_timing:2;
        RBus_UInt32  boot_from_cr:1;
        RBus_UInt32  xfer_dir:1;
        RBus_UInt32  map_sel:1;
        RBus_UInt32  wrap_dbg_sel:6;
        RBus_UInt32  dbg_sel:8;
        RBus_UInt32  asic_dbg_sel:4;
        RBus_UInt32  res1:8;
    };
}sd_all_top_cr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  arb_sts:8;
        RBus_UInt32  res1:24;
    };
}sd_all_top_arb_sts_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_data:32;
    };
}sd_all_top_sram_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_buf_0:16;
        RBus_UInt32  res1:16;
    };
}sd_all_top_rsp_17b_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_buf_1:16;
        RBus_UInt32  res1:16;
    };
}sd_all_top_rsp_17b_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_buf_2:16;
        RBus_UInt32  res1:16;
    };
}sd_all_top_rsp_17b_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_buf_3:16;
        RBus_UInt32  res1:16;
    };
}sd_all_top_rsp_17b_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_buf_4:16;
        RBus_UInt32  res1:16;
    };
}sd_all_top_rsp_17b_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_buf_5:16;
        RBus_UInt32  res1:16;
    };
}sd_all_top_rsp_17b_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_buf_6:16;
        RBus_UInt32  res1:16;
    };
}sd_all_top_rsp_17b_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsp_buf_7:16;
        RBus_UInt32  res1:16;
    };
}sd_all_top_rsp_17b_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sf_rx_err:1;
        RBus_UInt32  sf_rx_done:1;
        RBus_UInt32  sf_rx_gated:1;
        RBus_UInt32  sf_rx_start:1;
        RBus_UInt32  sf_rx_mode:1;
        RBus_UInt32  sf_tx_work:1;
        RBus_UInt32  sf_tx_start:1;
        RBus_UInt32  sf_tx_mode:1;
        RBus_UInt32  sf_rx_debug_bit_sel:8;
        RBus_UInt32  sf_rx_fail_bit_status:1;
        RBus_UInt32  res1:15;
    };
}sd_all_top_self_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbus_mp_dummy0:32;
    };
}sd_all_top_rbus_mp_dummy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbus_mp_dummy1:32;
    };
}sd_all_top_rbus_mp_dummy1_RBUS;




#endif 


#endif 
