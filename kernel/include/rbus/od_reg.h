/**
* @file Merlin5-DesignSpec-D-Domain_Panel_Compensation_OverDrive
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_OD_REG_H_
#define _RBUS_OD_REG_H_

#include "rbus_types.h"



//  OD Register Address
#define  OD_OD_CTRL                                                             0x1802CA00
#define  OD_OD_CTRL_reg_addr                                                     "0xB802CA00"
#define  OD_OD_CTRL_reg                                                          0xB802CA00
#define  OD_OD_CTRL_inst_addr                                                    "0x0000"
#define  set_OD_OD_CTRL_reg(data)                                                (*((volatile unsigned int*)OD_OD_CTRL_reg)=data)
#define  get_OD_OD_CTRL_reg                                                      (*((volatile unsigned int*)OD_OD_CTRL_reg))
#define  OD_OD_CTRL_dummy_31_10_shift                                            (10)
#define  OD_OD_CTRL_oddma_clk_en_shift                                           (9)
#define  OD_OD_CTRL_oddma_clk_sel_shift                                          (8)
#define  OD_OD_CTRL_dma_1p_2p_mode_shift                                         (7)
#define  OD_OD_CTRL_od_scaling_filter_shift                                      (4)
#define  OD_OD_CTRL_od_scaling_en_shift                                          (1)
#define  OD_OD_CTRL_od_en_shift                                                  (0)
#define  OD_OD_CTRL_dummy_31_10_mask                                             (0xFFFFFC00)
#define  OD_OD_CTRL_oddma_clk_en_mask                                            (0x00000200)
#define  OD_OD_CTRL_oddma_clk_sel_mask                                           (0x00000100)
#define  OD_OD_CTRL_dma_1p_2p_mode_mask                                          (0x00000080)
#define  OD_OD_CTRL_od_scaling_filter_mask                                       (0x00000070)
#define  OD_OD_CTRL_od_scaling_en_mask                                           (0x00000002)
#define  OD_OD_CTRL_od_en_mask                                                   (0x00000001)
#define  OD_OD_CTRL_dummy_31_10(data)                                            (0xFFFFFC00&((data)<<10))
#define  OD_OD_CTRL_oddma_clk_en(data)                                           (0x00000200&((data)<<9))
#define  OD_OD_CTRL_oddma_clk_sel(data)                                          (0x00000100&((data)<<8))
#define  OD_OD_CTRL_dma_1p_2p_mode(data)                                         (0x00000080&((data)<<7))
#define  OD_OD_CTRL_od_scaling_filter(data)                                      (0x00000070&((data)<<4))
#define  OD_OD_CTRL_od_scaling_en(data)                                          (0x00000002&((data)<<1))
#define  OD_OD_CTRL_od_en(data)                                                  (0x00000001&(data))
#define  OD_OD_CTRL_get_dummy_31_10(data)                                        ((0xFFFFFC00&(data))>>10)
#define  OD_OD_CTRL_get_oddma_clk_en(data)                                       ((0x00000200&(data))>>9)
#define  OD_OD_CTRL_get_oddma_clk_sel(data)                                      ((0x00000100&(data))>>8)
#define  OD_OD_CTRL_get_dma_1p_2p_mode(data)                                     ((0x00000080&(data))>>7)
#define  OD_OD_CTRL_get_od_scaling_filter(data)                                  ((0x00000070&(data))>>4)
#define  OD_OD_CTRL_get_od_scaling_en(data)                                      ((0x00000002&(data))>>1)
#define  OD_OD_CTRL_get_od_en(data)                                              (0x00000001&(data))

#define  OD_OD_CTRL1                                                            0x1802CA04
#define  OD_OD_CTRL1_reg_addr                                                    "0xB802CA04"
#define  OD_OD_CTRL1_reg                                                         0xB802CA04
#define  OD_OD_CTRL1_inst_addr                                                   "0x0001"
#define  set_OD_OD_CTRL1_reg(data)                                               (*((volatile unsigned int*)OD_OD_CTRL1_reg)=data)
#define  get_OD_OD_CTRL1_reg                                                     (*((volatile unsigned int*)OD_OD_CTRL1_reg))
#define  OD_OD_CTRL1_db_apply_shift                                              (26)
#define  OD_OD_CTRL1_db_read_level_shift                                         (25)
#define  OD_OD_CTRL1_od_en_dbf_en_shift                                          (24)
#define  OD_OD_CTRL1_force_pre_out_shift                                         (20)
#define  OD_OD_CTRL1_od_pre_422_en_shift                                         (19)
#define  OD_OD_CTRL1_od_cur_422_en_shift                                         (18)
#define  OD_OD_CTRL1_rounding_en_shift                                           (16)
#define  OD_OD_CTRL1_od_disp_res_shift                                           (4)
#define  OD_OD_CTRL1_od_pdest_en_shift                                           (0)
#define  OD_OD_CTRL1_db_apply_mask                                               (0x04000000)
#define  OD_OD_CTRL1_db_read_level_mask                                          (0x02000000)
#define  OD_OD_CTRL1_od_en_dbf_en_mask                                           (0x01000000)
#define  OD_OD_CTRL1_force_pre_out_mask                                          (0x00100000)
#define  OD_OD_CTRL1_od_pre_422_en_mask                                          (0x00080000)
#define  OD_OD_CTRL1_od_cur_422_en_mask                                          (0x00040000)
#define  OD_OD_CTRL1_rounding_en_mask                                            (0x00010000)
#define  OD_OD_CTRL1_od_disp_res_mask                                            (0x00000030)
#define  OD_OD_CTRL1_od_pdest_en_mask                                            (0x00000001)
#define  OD_OD_CTRL1_db_apply(data)                                              (0x04000000&((data)<<26))
#define  OD_OD_CTRL1_db_read_level(data)                                         (0x02000000&((data)<<25))
#define  OD_OD_CTRL1_od_en_dbf_en(data)                                          (0x01000000&((data)<<24))
#define  OD_OD_CTRL1_force_pre_out(data)                                         (0x00100000&((data)<<20))
#define  OD_OD_CTRL1_od_pre_422_en(data)                                         (0x00080000&((data)<<19))
#define  OD_OD_CTRL1_od_cur_422_en(data)                                         (0x00040000&((data)<<18))
#define  OD_OD_CTRL1_rounding_en(data)                                           (0x00010000&((data)<<16))
#define  OD_OD_CTRL1_od_disp_res(data)                                           (0x00000030&((data)<<4))
#define  OD_OD_CTRL1_od_pdest_en(data)                                           (0x00000001&(data))
#define  OD_OD_CTRL1_get_db_apply(data)                                          ((0x04000000&(data))>>26)
#define  OD_OD_CTRL1_get_db_read_level(data)                                     ((0x02000000&(data))>>25)
#define  OD_OD_CTRL1_get_od_en_dbf_en(data)                                      ((0x01000000&(data))>>24)
#define  OD_OD_CTRL1_get_force_pre_out(data)                                     ((0x00100000&(data))>>20)
#define  OD_OD_CTRL1_get_od_pre_422_en(data)                                     ((0x00080000&(data))>>19)
#define  OD_OD_CTRL1_get_od_cur_422_en(data)                                     ((0x00040000&(data))>>18)
#define  OD_OD_CTRL1_get_rounding_en(data)                                       ((0x00010000&(data))>>16)
#define  OD_OD_CTRL1_get_od_disp_res(data)                                       ((0x00000030&(data))>>4)
#define  OD_OD_CTRL1_get_od_pdest_en(data)                                       (0x00000001&(data))

#define  OD_OD_CTRL2                                                            0x1802CA08
#define  OD_OD_CTRL2_reg_addr                                                    "0xB802CA08"
#define  OD_OD_CTRL2_reg                                                         0xB802CA08
#define  OD_OD_CTRL2_inst_addr                                                   "0x0002"
#define  set_OD_OD_CTRL2_reg(data)                                               (*((volatile unsigned int*)OD_OD_CTRL2_reg)=data)
#define  get_OD_OD_CTRL2_reg                                                     (*((volatile unsigned int*)OD_OD_CTRL2_reg))
#define  OD_OD_CTRL2_od_delta_gain_w_shift                                       (24)
#define  OD_OD_CTRL2_od_delta_gain_b_shift                                       (16)
#define  OD_OD_CTRL2_od_delta_gain_g_shift                                       (8)
#define  OD_OD_CTRL2_od_delta_gain_r_shift                                       (0)
#define  OD_OD_CTRL2_od_delta_gain_w_mask                                        (0x7F000000)
#define  OD_OD_CTRL2_od_delta_gain_b_mask                                        (0x007F0000)
#define  OD_OD_CTRL2_od_delta_gain_g_mask                                        (0x00007F00)
#define  OD_OD_CTRL2_od_delta_gain_r_mask                                        (0x0000007F)
#define  OD_OD_CTRL2_od_delta_gain_w(data)                                       (0x7F000000&((data)<<24))
#define  OD_OD_CTRL2_od_delta_gain_b(data)                                       (0x007F0000&((data)<<16))
#define  OD_OD_CTRL2_od_delta_gain_g(data)                                       (0x00007F00&((data)<<8))
#define  OD_OD_CTRL2_od_delta_gain_r(data)                                       (0x0000007F&(data))
#define  OD_OD_CTRL2_get_od_delta_gain_w(data)                                   ((0x7F000000&(data))>>24)
#define  OD_OD_CTRL2_get_od_delta_gain_b(data)                                   ((0x007F0000&(data))>>16)
#define  OD_OD_CTRL2_get_od_delta_gain_g(data)                                   ((0x00007F00&(data))>>8)
#define  OD_OD_CTRL2_get_od_delta_gain_r(data)                                   (0x0000007F&(data))

#define  OD_OD_LUT_ADDR                                                         0x1802CA0C
#define  OD_OD_LUT_ADDR_reg_addr                                                 "0xB802CA0C"
#define  OD_OD_LUT_ADDR_reg                                                      0xB802CA0C
#define  OD_OD_LUT_ADDR_inst_addr                                                "0x0003"
#define  set_OD_OD_LUT_ADDR_reg(data)                                            (*((volatile unsigned int*)OD_OD_LUT_ADDR_reg)=data)
#define  get_OD_OD_LUT_ADDR_reg                                                  (*((volatile unsigned int*)OD_OD_LUT_ADDR_reg))
#define  OD_OD_LUT_ADDR_od_lut_read_sel_shift                                    (20)
#define  OD_OD_LUT_ADDR_table_type_shift                                         (18)
#define  OD_OD_LUT_ADDR_od_lut_ax_en_shift                                       (16)
#define  OD_OD_LUT_ADDR_od_lut_ax_mode_shift                                     (15)
#define  OD_OD_LUT_ADDR_od_lut_adr_mode_shift                                    (14)
#define  OD_OD_LUT_ADDR_od_lut_sel_shift                                         (11)
#define  OD_OD_LUT_ADDR_od_lut_row_addr_shift                                    (6)
#define  OD_OD_LUT_ADDR_od_lut_column_addr_shift                                 (0)
#define  OD_OD_LUT_ADDR_od_lut_read_sel_mask                                     (0x00100000)
#define  OD_OD_LUT_ADDR_table_type_mask                                          (0x00040000)
#define  OD_OD_LUT_ADDR_od_lut_ax_en_mask                                        (0x00010000)
#define  OD_OD_LUT_ADDR_od_lut_ax_mode_mask                                      (0x00008000)
#define  OD_OD_LUT_ADDR_od_lut_adr_mode_mask                                     (0x00004000)
#define  OD_OD_LUT_ADDR_od_lut_sel_mask                                          (0x00003800)
#define  OD_OD_LUT_ADDR_od_lut_row_addr_mask                                     (0x000007C0)
#define  OD_OD_LUT_ADDR_od_lut_column_addr_mask                                  (0x0000001F)
#define  OD_OD_LUT_ADDR_od_lut_read_sel(data)                                    (0x00100000&((data)<<20))
#define  OD_OD_LUT_ADDR_table_type(data)                                         (0x00040000&((data)<<18))
#define  OD_OD_LUT_ADDR_od_lut_ax_en(data)                                       (0x00010000&((data)<<16))
#define  OD_OD_LUT_ADDR_od_lut_ax_mode(data)                                     (0x00008000&((data)<<15))
#define  OD_OD_LUT_ADDR_od_lut_adr_mode(data)                                    (0x00004000&((data)<<14))
#define  OD_OD_LUT_ADDR_od_lut_sel(data)                                         (0x00003800&((data)<<11))
#define  OD_OD_LUT_ADDR_od_lut_row_addr(data)                                    (0x000007C0&((data)<<6))
#define  OD_OD_LUT_ADDR_od_lut_column_addr(data)                                 (0x0000001F&(data))
#define  OD_OD_LUT_ADDR_get_od_lut_read_sel(data)                                ((0x00100000&(data))>>20)
#define  OD_OD_LUT_ADDR_get_table_type(data)                                     ((0x00040000&(data))>>18)
#define  OD_OD_LUT_ADDR_get_od_lut_ax_en(data)                                   ((0x00010000&(data))>>16)
#define  OD_OD_LUT_ADDR_get_od_lut_ax_mode(data)                                 ((0x00008000&(data))>>15)
#define  OD_OD_LUT_ADDR_get_od_lut_adr_mode(data)                                ((0x00004000&(data))>>14)
#define  OD_OD_LUT_ADDR_get_od_lut_sel(data)                                     ((0x00003800&(data))>>11)
#define  OD_OD_LUT_ADDR_get_od_lut_row_addr(data)                                ((0x000007C0&(data))>>6)
#define  OD_OD_LUT_ADDR_get_od_lut_column_addr(data)                             (0x0000001F&(data))

#define  OD_OD_LUT_DATA                                                         0x1802CA10
#define  OD_OD_LUT_DATA_reg_addr                                                 "0xB802CA10"
#define  OD_OD_LUT_DATA_reg                                                      0xB802CA10
#define  OD_OD_LUT_DATA_inst_addr                                                "0x0004"
#define  set_OD_OD_LUT_DATA_reg(data)                                            (*((volatile unsigned int*)OD_OD_LUT_DATA_reg)=data)
#define  get_OD_OD_LUT_DATA_reg                                                  (*((volatile unsigned int*)OD_OD_LUT_DATA_reg))
#define  OD_OD_LUT_DATA_od_lut_data_shift                                        (0)
#define  OD_OD_LUT_DATA_od_lut_data_mask                                         (0x0000FFFF)
#define  OD_OD_LUT_DATA_od_lut_data(data)                                        (0x0000FFFF&(data))
#define  OD_OD_LUT_DATA_get_od_lut_data(data)                                    (0x0000FFFF&(data))

#define  OD_od_Noise_reduction_ctrl                                             0x1802CA30
#define  OD_od_Noise_reduction_ctrl_reg_addr                                     "0xB802CA30"
#define  OD_od_Noise_reduction_ctrl_reg                                          0xB802CA30
#define  OD_od_Noise_reduction_ctrl_inst_addr                                    "0x0005"
#define  set_OD_od_Noise_reduction_ctrl_reg(data)                                (*((volatile unsigned int*)OD_od_Noise_reduction_ctrl_reg)=data)
#define  get_OD_od_Noise_reduction_ctrl_reg                                      (*((volatile unsigned int*)OD_od_Noise_reduction_ctrl_reg))
#define  OD_od_Noise_reduction_ctrl_od_nr_mode_shift                             (27)
#define  OD_od_Noise_reduction_ctrl_od_b_nr_en_shift                             (26)
#define  OD_od_Noise_reduction_ctrl_od_g_nr_en_shift                             (25)
#define  OD_od_Noise_reduction_ctrl_od_r_nr_en_shift                             (24)
#define  OD_od_Noise_reduction_ctrl_od_b_nr_thd_shift                            (16)
#define  OD_od_Noise_reduction_ctrl_od_g_nr_thd_shift                            (8)
#define  OD_od_Noise_reduction_ctrl_od_r_nr_thd_shift                            (0)
#define  OD_od_Noise_reduction_ctrl_od_nr_mode_mask                              (0x08000000)
#define  OD_od_Noise_reduction_ctrl_od_b_nr_en_mask                              (0x04000000)
#define  OD_od_Noise_reduction_ctrl_od_g_nr_en_mask                              (0x02000000)
#define  OD_od_Noise_reduction_ctrl_od_r_nr_en_mask                              (0x01000000)
#define  OD_od_Noise_reduction_ctrl_od_b_nr_thd_mask                             (0x003F0000)
#define  OD_od_Noise_reduction_ctrl_od_g_nr_thd_mask                             (0x00003F00)
#define  OD_od_Noise_reduction_ctrl_od_r_nr_thd_mask                             (0x0000003F)
#define  OD_od_Noise_reduction_ctrl_od_nr_mode(data)                             (0x08000000&((data)<<27))
#define  OD_od_Noise_reduction_ctrl_od_b_nr_en(data)                             (0x04000000&((data)<<26))
#define  OD_od_Noise_reduction_ctrl_od_g_nr_en(data)                             (0x02000000&((data)<<25))
#define  OD_od_Noise_reduction_ctrl_od_r_nr_en(data)                             (0x01000000&((data)<<24))
#define  OD_od_Noise_reduction_ctrl_od_b_nr_thd(data)                            (0x003F0000&((data)<<16))
#define  OD_od_Noise_reduction_ctrl_od_g_nr_thd(data)                            (0x00003F00&((data)<<8))
#define  OD_od_Noise_reduction_ctrl_od_r_nr_thd(data)                            (0x0000003F&(data))
#define  OD_od_Noise_reduction_ctrl_get_od_nr_mode(data)                         ((0x08000000&(data))>>27)
#define  OD_od_Noise_reduction_ctrl_get_od_b_nr_en(data)                         ((0x04000000&(data))>>26)
#define  OD_od_Noise_reduction_ctrl_get_od_g_nr_en(data)                         ((0x02000000&(data))>>25)
#define  OD_od_Noise_reduction_ctrl_get_od_r_nr_en(data)                         ((0x01000000&(data))>>24)
#define  OD_od_Noise_reduction_ctrl_get_od_b_nr_thd(data)                        ((0x003F0000&(data))>>16)
#define  OD_od_Noise_reduction_ctrl_get_od_g_nr_thd(data)                        ((0x00003F00&(data))>>8)
#define  OD_od_Noise_reduction_ctrl_get_od_r_nr_thd(data)                        (0x0000003F&(data))

#define  OD_od_Noise_reduction_ctrl_w                                           0x1802CA34
#define  OD_od_Noise_reduction_ctrl_w_reg_addr                                   "0xB802CA34"
#define  OD_od_Noise_reduction_ctrl_w_reg                                        0xB802CA34
#define  OD_od_Noise_reduction_ctrl_w_inst_addr                                  "0x0006"
#define  set_OD_od_Noise_reduction_ctrl_w_reg(data)                              (*((volatile unsigned int*)OD_od_Noise_reduction_ctrl_w_reg)=data)
#define  get_OD_od_Noise_reduction_ctrl_w_reg                                    (*((volatile unsigned int*)OD_od_Noise_reduction_ctrl_w_reg))
#define  OD_od_Noise_reduction_ctrl_w_od_w_nr_en_shift                           (31)
#define  OD_od_Noise_reduction_ctrl_w_od_w_nr_thd_shift                          (0)
#define  OD_od_Noise_reduction_ctrl_w_od_w_nr_en_mask                            (0x80000000)
#define  OD_od_Noise_reduction_ctrl_w_od_w_nr_thd_mask                           (0x0000003F)
#define  OD_od_Noise_reduction_ctrl_w_od_w_nr_en(data)                           (0x80000000&((data)<<31))
#define  OD_od_Noise_reduction_ctrl_w_od_w_nr_thd(data)                          (0x0000003F&(data))
#define  OD_od_Noise_reduction_ctrl_w_get_od_w_nr_en(data)                       ((0x80000000&(data))>>31)
#define  OD_od_Noise_reduction_ctrl_w_get_od_w_nr_thd(data)                      (0x0000003F&(data))

#define  OD_OD_CRC_Ctrl                                                         0x1802CB40
#define  OD_OD_CRC_Ctrl_reg_addr                                                 "0xB802CB40"
#define  OD_OD_CRC_Ctrl_reg                                                      0xB802CB40
#define  OD_OD_CRC_Ctrl_inst_addr                                                "0x0007"
#define  set_OD_OD_CRC_Ctrl_reg(data)                                            (*((volatile unsigned int*)OD_OD_CRC_Ctrl_reg)=data)
#define  get_OD_OD_CRC_Ctrl_reg                                                  (*((volatile unsigned int*)OD_OD_CRC_Ctrl_reg))
#define  OD_OD_CRC_Ctrl_crc_res_sel_shift                                        (4)
#define  OD_OD_CRC_Ctrl_crc_auto_cmp_en_shift                                    (2)
#define  OD_OD_CRC_Ctrl_crc_conti_shift                                          (1)
#define  OD_OD_CRC_Ctrl_crc_start_shift                                          (0)
#define  OD_OD_CRC_Ctrl_crc_res_sel_mask                                         (0x00000030)
#define  OD_OD_CRC_Ctrl_crc_auto_cmp_en_mask                                     (0x00000004)
#define  OD_OD_CRC_Ctrl_crc_conti_mask                                           (0x00000002)
#define  OD_OD_CRC_Ctrl_crc_start_mask                                           (0x00000001)
#define  OD_OD_CRC_Ctrl_crc_res_sel(data)                                        (0x00000030&((data)<<4))
#define  OD_OD_CRC_Ctrl_crc_auto_cmp_en(data)                                    (0x00000004&((data)<<2))
#define  OD_OD_CRC_Ctrl_crc_conti(data)                                          (0x00000002&((data)<<1))
#define  OD_OD_CRC_Ctrl_crc_start(data)                                          (0x00000001&(data))
#define  OD_OD_CRC_Ctrl_get_crc_res_sel(data)                                    ((0x00000030&(data))>>4)
#define  OD_OD_CRC_Ctrl_get_crc_auto_cmp_en(data)                                ((0x00000004&(data))>>2)
#define  OD_OD_CRC_Ctrl_get_crc_conti(data)                                      ((0x00000002&(data))>>1)
#define  OD_OD_CRC_Ctrl_get_crc_start(data)                                      (0x00000001&(data))

#define  OD_OD_CRC_Result                                                       0x1802CB44
#define  OD_OD_CRC_Result_reg_addr                                               "0xB802CB44"
#define  OD_OD_CRC_Result_reg                                                    0xB802CB44
#define  OD_OD_CRC_Result_inst_addr                                              "0x0008"
#define  set_OD_OD_CRC_Result_reg(data)                                          (*((volatile unsigned int*)OD_OD_CRC_Result_reg)=data)
#define  get_OD_OD_CRC_Result_reg                                                (*((volatile unsigned int*)OD_OD_CRC_Result_reg))
#define  OD_OD_CRC_Result_crc_result_shift                                       (0)
#define  OD_OD_CRC_Result_crc_result_mask                                        (0xFFFFFFFF)
#define  OD_OD_CRC_Result_crc_result(data)                                       (0xFFFFFFFF&(data))
#define  OD_OD_CRC_Result_get_crc_result(data)                                   (0xFFFFFFFF&(data))

#define  OD_OD_DES_CRC                                                          0x1802CB48
#define  OD_OD_DES_CRC_reg_addr                                                  "0xB802CB48"
#define  OD_OD_DES_CRC_reg                                                       0xB802CB48
#define  OD_OD_DES_CRC_inst_addr                                                 "0x0009"
#define  set_OD_OD_DES_CRC_reg(data)                                             (*((volatile unsigned int*)OD_OD_DES_CRC_reg)=data)
#define  get_OD_OD_DES_CRC_reg                                                   (*((volatile unsigned int*)OD_OD_DES_CRC_reg))
#define  OD_OD_DES_CRC_crc_des_shift                                             (0)
#define  OD_OD_DES_CRC_crc_des_mask                                              (0xFFFFFFFF)
#define  OD_OD_DES_CRC_crc_des(data)                                             (0xFFFFFFFF&(data))
#define  OD_OD_DES_CRC_get_crc_des(data)                                         (0xFFFFFFFF&(data))

#define  OD_OD_CRC_ERR_CNT0                                                     0x1802CB4C
#define  OD_OD_CRC_ERR_CNT0_reg_addr                                             "0xB802CB4C"
#define  OD_OD_CRC_ERR_CNT0_reg                                                  0xB802CB4C
#define  OD_OD_CRC_ERR_CNT0_inst_addr                                            "0x000A"
#define  set_OD_OD_CRC_ERR_CNT0_reg(data)                                        (*((volatile unsigned int*)OD_OD_CRC_ERR_CNT0_reg)=data)
#define  get_OD_OD_CRC_ERR_CNT0_reg                                              (*((volatile unsigned int*)OD_OD_CRC_ERR_CNT0_reg))
#define  OD_OD_CRC_ERR_CNT0_crc_err_cnt_shift                                    (0)
#define  OD_OD_CRC_ERR_CNT0_crc_err_cnt_mask                                     (0x0000FFFF)
#define  OD_OD_CRC_ERR_CNT0_crc_err_cnt(data)                                    (0x0000FFFF&(data))
#define  OD_OD_CRC_ERR_CNT0_get_crc_err_cnt(data)                                (0x0000FFFF&(data))

#define  OD_AccessData_CTRL_PC                                                  0x1802CB54
#define  OD_AccessData_CTRL_PC_reg_addr                                          "0xB802CB54"
#define  OD_AccessData_CTRL_PC_reg                                               0xB802CB54
#define  OD_AccessData_CTRL_PC_inst_addr                                         "0x000B"
#define  set_OD_AccessData_CTRL_PC_reg(data)                                     (*((volatile unsigned int*)OD_AccessData_CTRL_PC_reg)=data)
#define  get_OD_AccessData_CTRL_PC_reg                                           (*((volatile unsigned int*)OD_AccessData_CTRL_PC_reg))
#define  OD_AccessData_CTRL_PC_cross_bar_en_shift                                (31)
#define  OD_AccessData_CTRL_PC_access_read_rgbw_shift                            (30)
#define  OD_AccessData_CTRL_PC_l_flag_enable_shift                               (8)
#define  OD_AccessData_CTRL_PC_w_en_ctrl_shift                                   (4)
#define  OD_AccessData_CTRL_PC_access_write_en_shift                             (2)
#define  OD_AccessData_CTRL_PC_access_read_en_shift                              (0)
#define  OD_AccessData_CTRL_PC_cross_bar_en_mask                                 (0x80000000)
#define  OD_AccessData_CTRL_PC_access_read_rgbw_mask                             (0x40000000)
#define  OD_AccessData_CTRL_PC_l_flag_enable_mask                                (0x00000100)
#define  OD_AccessData_CTRL_PC_w_en_ctrl_mask                                    (0x000000F0)
#define  OD_AccessData_CTRL_PC_access_write_en_mask                              (0x00000004)
#define  OD_AccessData_CTRL_PC_access_read_en_mask                               (0x00000001)
#define  OD_AccessData_CTRL_PC_cross_bar_en(data)                                (0x80000000&((data)<<31))
#define  OD_AccessData_CTRL_PC_access_read_rgbw(data)                            (0x40000000&((data)<<30))
#define  OD_AccessData_CTRL_PC_l_flag_enable(data)                               (0x00000100&((data)<<8))
#define  OD_AccessData_CTRL_PC_w_en_ctrl(data)                                   (0x000000F0&((data)<<4))
#define  OD_AccessData_CTRL_PC_access_write_en(data)                             (0x00000004&((data)<<2))
#define  OD_AccessData_CTRL_PC_access_read_en(data)                              (0x00000001&(data))
#define  OD_AccessData_CTRL_PC_get_cross_bar_en(data)                            ((0x80000000&(data))>>31)
#define  OD_AccessData_CTRL_PC_get_access_read_rgbw(data)                        ((0x40000000&(data))>>30)
#define  OD_AccessData_CTRL_PC_get_l_flag_enable(data)                           ((0x00000100&(data))>>8)
#define  OD_AccessData_CTRL_PC_get_w_en_ctrl(data)                               ((0x000000F0&(data))>>4)
#define  OD_AccessData_CTRL_PC_get_access_write_en(data)                         ((0x00000004&(data))>>2)
#define  OD_AccessData_CTRL_PC_get_access_read_en(data)                          (0x00000001&(data))

#define  OD_AccessData_PosCtrl_PC                                               0x1802CB58
#define  OD_AccessData_PosCtrl_PC_reg_addr                                       "0xB802CB58"
#define  OD_AccessData_PosCtrl_PC_reg                                            0xB802CB58
#define  OD_AccessData_PosCtrl_PC_inst_addr                                      "0x000C"
#define  set_OD_AccessData_PosCtrl_PC_reg(data)                                  (*((volatile unsigned int*)OD_AccessData_PosCtrl_PC_reg)=data)
#define  get_OD_AccessData_PosCtrl_PC_reg                                        (*((volatile unsigned int*)OD_AccessData_PosCtrl_PC_reg))
#define  OD_AccessData_PosCtrl_PC_access_starty_shift                            (16)
#define  OD_AccessData_PosCtrl_PC_access_startx_shift                            (0)
#define  OD_AccessData_PosCtrl_PC_access_starty_mask                             (0x0FFF0000)
#define  OD_AccessData_PosCtrl_PC_access_startx_mask                             (0x00000FFF)
#define  OD_AccessData_PosCtrl_PC_access_starty(data)                            (0x0FFF0000&((data)<<16))
#define  OD_AccessData_PosCtrl_PC_access_startx(data)                            (0x00000FFF&(data))
#define  OD_AccessData_PosCtrl_PC_get_access_starty(data)                        ((0x0FFF0000&(data))>>16)
#define  OD_AccessData_PosCtrl_PC_get_access_startx(data)                        (0x00000FFF&(data))

#define  OD_WriteData_DATA_PC                                                   0x1802CB5C
#define  OD_WriteData_DATA_PC_reg_addr                                           "0xB802CB5C"
#define  OD_WriteData_DATA_PC_reg                                                0xB802CB5C
#define  OD_WriteData_DATA_PC_inst_addr                                          "0x000D"
#define  set_OD_WriteData_DATA_PC_reg(data)                                      (*((volatile unsigned int*)OD_WriteData_DATA_PC_reg)=data)
#define  get_OD_WriteData_DATA_PC_reg                                            (*((volatile unsigned int*)OD_WriteData_DATA_PC_reg))
#define  OD_WriteData_DATA_PC_access_v_wdat_shift                                (20)
#define  OD_WriteData_DATA_PC_access_u_wdat_shift                                (10)
#define  OD_WriteData_DATA_PC_access_y_wdat_shift                                (0)
#define  OD_WriteData_DATA_PC_access_v_wdat_mask                                 (0x3FF00000)
#define  OD_WriteData_DATA_PC_access_u_wdat_mask                                 (0x000FFC00)
#define  OD_WriteData_DATA_PC_access_y_wdat_mask                                 (0x000003FF)
#define  OD_WriteData_DATA_PC_access_v_wdat(data)                                (0x3FF00000&((data)<<20))
#define  OD_WriteData_DATA_PC_access_u_wdat(data)                                (0x000FFC00&((data)<<10))
#define  OD_WriteData_DATA_PC_access_y_wdat(data)                                (0x000003FF&(data))
#define  OD_WriteData_DATA_PC_get_access_v_wdat(data)                            ((0x3FF00000&(data))>>20)
#define  OD_WriteData_DATA_PC_get_access_u_wdat(data)                            ((0x000FFC00&(data))>>10)
#define  OD_WriteData_DATA_PC_get_access_y_wdat(data)                            (0x000003FF&(data))

#define  OD_WriteData_DATA_1_PC                                                 0x1802CB60
#define  OD_WriteData_DATA_1_PC_reg_addr                                         "0xB802CB60"
#define  OD_WriteData_DATA_1_PC_reg                                              0xB802CB60
#define  OD_WriteData_DATA_1_PC_inst_addr                                        "0x000E"
#define  set_OD_WriteData_DATA_1_PC_reg(data)                                    (*((volatile unsigned int*)OD_WriteData_DATA_1_PC_reg)=data)
#define  get_OD_WriteData_DATA_1_PC_reg                                          (*((volatile unsigned int*)OD_WriteData_DATA_1_PC_reg))
#define  OD_WriteData_DATA_1_PC_access_v1_wdat_shift                             (20)
#define  OD_WriteData_DATA_1_PC_access_u1_wdat_shift                             (10)
#define  OD_WriteData_DATA_1_PC_access_y1_wdat_shift                             (0)
#define  OD_WriteData_DATA_1_PC_access_v1_wdat_mask                              (0x3FF00000)
#define  OD_WriteData_DATA_1_PC_access_u1_wdat_mask                              (0x000FFC00)
#define  OD_WriteData_DATA_1_PC_access_y1_wdat_mask                              (0x000003FF)
#define  OD_WriteData_DATA_1_PC_access_v1_wdat(data)                             (0x3FF00000&((data)<<20))
#define  OD_WriteData_DATA_1_PC_access_u1_wdat(data)                             (0x000FFC00&((data)<<10))
#define  OD_WriteData_DATA_1_PC_access_y1_wdat(data)                             (0x000003FF&(data))
#define  OD_WriteData_DATA_1_PC_get_access_v1_wdat(data)                         ((0x3FF00000&(data))>>20)
#define  OD_WriteData_DATA_1_PC_get_access_u1_wdat(data)                         ((0x000FFC00&(data))>>10)
#define  OD_WriteData_DATA_1_PC_get_access_y1_wdat(data)                         (0x000003FF&(data))

#define  OD_WriteData_DATA_2_PC                                                 0x1802CB64
#define  OD_WriteData_DATA_2_PC_reg_addr                                         "0xB802CB64"
#define  OD_WriteData_DATA_2_PC_reg                                              0xB802CB64
#define  OD_WriteData_DATA_2_PC_inst_addr                                        "0x000F"
#define  set_OD_WriteData_DATA_2_PC_reg(data)                                    (*((volatile unsigned int*)OD_WriteData_DATA_2_PC_reg)=data)
#define  get_OD_WriteData_DATA_2_PC_reg                                          (*((volatile unsigned int*)OD_WriteData_DATA_2_PC_reg))
#define  OD_WriteData_DATA_2_PC_access_v2_wdat_shift                             (20)
#define  OD_WriteData_DATA_2_PC_access_u2_wdat_shift                             (10)
#define  OD_WriteData_DATA_2_PC_access_y2_wdat_shift                             (0)
#define  OD_WriteData_DATA_2_PC_access_v2_wdat_mask                              (0x3FF00000)
#define  OD_WriteData_DATA_2_PC_access_u2_wdat_mask                              (0x000FFC00)
#define  OD_WriteData_DATA_2_PC_access_y2_wdat_mask                              (0x000003FF)
#define  OD_WriteData_DATA_2_PC_access_v2_wdat(data)                             (0x3FF00000&((data)<<20))
#define  OD_WriteData_DATA_2_PC_access_u2_wdat(data)                             (0x000FFC00&((data)<<10))
#define  OD_WriteData_DATA_2_PC_access_y2_wdat(data)                             (0x000003FF&(data))
#define  OD_WriteData_DATA_2_PC_get_access_v2_wdat(data)                         ((0x3FF00000&(data))>>20)
#define  OD_WriteData_DATA_2_PC_get_access_u2_wdat(data)                         ((0x000FFC00&(data))>>10)
#define  OD_WriteData_DATA_2_PC_get_access_y2_wdat(data)                         (0x000003FF&(data))

#define  OD_WriteData_DATA_3_PC                                                 0x1802CB68
#define  OD_WriteData_DATA_3_PC_reg_addr                                         "0xB802CB68"
#define  OD_WriteData_DATA_3_PC_reg                                              0xB802CB68
#define  OD_WriteData_DATA_3_PC_inst_addr                                        "0x0010"
#define  set_OD_WriteData_DATA_3_PC_reg(data)                                    (*((volatile unsigned int*)OD_WriteData_DATA_3_PC_reg)=data)
#define  get_OD_WriteData_DATA_3_PC_reg                                          (*((volatile unsigned int*)OD_WriteData_DATA_3_PC_reg))
#define  OD_WriteData_DATA_3_PC_access_v3_wdat_shift                             (20)
#define  OD_WriteData_DATA_3_PC_access_u3_wdat_shift                             (10)
#define  OD_WriteData_DATA_3_PC_access_y3_wdat_shift                             (0)
#define  OD_WriteData_DATA_3_PC_access_v3_wdat_mask                              (0x3FF00000)
#define  OD_WriteData_DATA_3_PC_access_u3_wdat_mask                              (0x000FFC00)
#define  OD_WriteData_DATA_3_PC_access_y3_wdat_mask                              (0x000003FF)
#define  OD_WriteData_DATA_3_PC_access_v3_wdat(data)                             (0x3FF00000&((data)<<20))
#define  OD_WriteData_DATA_3_PC_access_u3_wdat(data)                             (0x000FFC00&((data)<<10))
#define  OD_WriteData_DATA_3_PC_access_y3_wdat(data)                             (0x000003FF&(data))
#define  OD_WriteData_DATA_3_PC_get_access_v3_wdat(data)                         ((0x3FF00000&(data))>>20)
#define  OD_WriteData_DATA_3_PC_get_access_u3_wdat(data)                         ((0x000FFC00&(data))>>10)
#define  OD_WriteData_DATA_3_PC_get_access_y3_wdat(data)                         (0x000003FF&(data))

#define  OD_WriteData_DATA_4_PC                                                 0x1802CB6C
#define  OD_WriteData_DATA_4_PC_reg_addr                                         "0xB802CB6C"
#define  OD_WriteData_DATA_4_PC_reg                                              0xB802CB6C
#define  OD_WriteData_DATA_4_PC_inst_addr                                        "0x0011"
#define  set_OD_WriteData_DATA_4_PC_reg(data)                                    (*((volatile unsigned int*)OD_WriteData_DATA_4_PC_reg)=data)
#define  get_OD_WriteData_DATA_4_PC_reg                                          (*((volatile unsigned int*)OD_WriteData_DATA_4_PC_reg))
#define  OD_WriteData_DATA_4_PC_access_v4_wdat_shift                             (20)
#define  OD_WriteData_DATA_4_PC_access_u4_wdat_shift                             (10)
#define  OD_WriteData_DATA_4_PC_access_y4_wdat_shift                             (0)
#define  OD_WriteData_DATA_4_PC_access_v4_wdat_mask                              (0x3FF00000)
#define  OD_WriteData_DATA_4_PC_access_u4_wdat_mask                              (0x000FFC00)
#define  OD_WriteData_DATA_4_PC_access_y4_wdat_mask                              (0x000003FF)
#define  OD_WriteData_DATA_4_PC_access_v4_wdat(data)                             (0x3FF00000&((data)<<20))
#define  OD_WriteData_DATA_4_PC_access_u4_wdat(data)                             (0x000FFC00&((data)<<10))
#define  OD_WriteData_DATA_4_PC_access_y4_wdat(data)                             (0x000003FF&(data))
#define  OD_WriteData_DATA_4_PC_get_access_v4_wdat(data)                         ((0x3FF00000&(data))>>20)
#define  OD_WriteData_DATA_4_PC_get_access_u4_wdat(data)                         ((0x000FFC00&(data))>>10)
#define  OD_WriteData_DATA_4_PC_get_access_y4_wdat(data)                         (0x000003FF&(data))

#define  OD_WriteData_DATA_5_PC                                                 0x1802CB70
#define  OD_WriteData_DATA_5_PC_reg_addr                                         "0xB802CB70"
#define  OD_WriteData_DATA_5_PC_reg                                              0xB802CB70
#define  OD_WriteData_DATA_5_PC_inst_addr                                        "0x0012"
#define  set_OD_WriteData_DATA_5_PC_reg(data)                                    (*((volatile unsigned int*)OD_WriteData_DATA_5_PC_reg)=data)
#define  get_OD_WriteData_DATA_5_PC_reg                                          (*((volatile unsigned int*)OD_WriteData_DATA_5_PC_reg))
#define  OD_WriteData_DATA_5_PC_access_v5_wdat_shift                             (20)
#define  OD_WriteData_DATA_5_PC_access_u5_wdat_shift                             (10)
#define  OD_WriteData_DATA_5_PC_access_y5_wdat_shift                             (0)
#define  OD_WriteData_DATA_5_PC_access_v5_wdat_mask                              (0x3FF00000)
#define  OD_WriteData_DATA_5_PC_access_u5_wdat_mask                              (0x000FFC00)
#define  OD_WriteData_DATA_5_PC_access_y5_wdat_mask                              (0x000003FF)
#define  OD_WriteData_DATA_5_PC_access_v5_wdat(data)                             (0x3FF00000&((data)<<20))
#define  OD_WriteData_DATA_5_PC_access_u5_wdat(data)                             (0x000FFC00&((data)<<10))
#define  OD_WriteData_DATA_5_PC_access_y5_wdat(data)                             (0x000003FF&(data))
#define  OD_WriteData_DATA_5_PC_get_access_v5_wdat(data)                         ((0x3FF00000&(data))>>20)
#define  OD_WriteData_DATA_5_PC_get_access_u5_wdat(data)                         ((0x000FFC00&(data))>>10)
#define  OD_WriteData_DATA_5_PC_get_access_y5_wdat(data)                         (0x000003FF&(data))

#define  OD_WriteData_DATA_6_PC                                                 0x1802CB74
#define  OD_WriteData_DATA_6_PC_reg_addr                                         "0xB802CB74"
#define  OD_WriteData_DATA_6_PC_reg                                              0xB802CB74
#define  OD_WriteData_DATA_6_PC_inst_addr                                        "0x0013"
#define  set_OD_WriteData_DATA_6_PC_reg(data)                                    (*((volatile unsigned int*)OD_WriteData_DATA_6_PC_reg)=data)
#define  get_OD_WriteData_DATA_6_PC_reg                                          (*((volatile unsigned int*)OD_WriteData_DATA_6_PC_reg))
#define  OD_WriteData_DATA_6_PC_access_v6_wdat_shift                             (20)
#define  OD_WriteData_DATA_6_PC_access_u6_wdat_shift                             (10)
#define  OD_WriteData_DATA_6_PC_access_y6_wdat_shift                             (0)
#define  OD_WriteData_DATA_6_PC_access_v6_wdat_mask                              (0x3FF00000)
#define  OD_WriteData_DATA_6_PC_access_u6_wdat_mask                              (0x000FFC00)
#define  OD_WriteData_DATA_6_PC_access_y6_wdat_mask                              (0x000003FF)
#define  OD_WriteData_DATA_6_PC_access_v6_wdat(data)                             (0x3FF00000&((data)<<20))
#define  OD_WriteData_DATA_6_PC_access_u6_wdat(data)                             (0x000FFC00&((data)<<10))
#define  OD_WriteData_DATA_6_PC_access_y6_wdat(data)                             (0x000003FF&(data))
#define  OD_WriteData_DATA_6_PC_get_access_v6_wdat(data)                         ((0x3FF00000&(data))>>20)
#define  OD_WriteData_DATA_6_PC_get_access_u6_wdat(data)                         ((0x000FFC00&(data))>>10)
#define  OD_WriteData_DATA_6_PC_get_access_y6_wdat(data)                         (0x000003FF&(data))

#define  OD_WriteData_DATA_7_PC                                                 0x1802CB78
#define  OD_WriteData_DATA_7_PC_reg_addr                                         "0xB802CB78"
#define  OD_WriteData_DATA_7_PC_reg                                              0xB802CB78
#define  OD_WriteData_DATA_7_PC_inst_addr                                        "0x0014"
#define  set_OD_WriteData_DATA_7_PC_reg(data)                                    (*((volatile unsigned int*)OD_WriteData_DATA_7_PC_reg)=data)
#define  get_OD_WriteData_DATA_7_PC_reg                                          (*((volatile unsigned int*)OD_WriteData_DATA_7_PC_reg))
#define  OD_WriteData_DATA_7_PC_access_v7_wdat_shift                             (20)
#define  OD_WriteData_DATA_7_PC_access_u7_wdat_shift                             (10)
#define  OD_WriteData_DATA_7_PC_access_y7_wdat_shift                             (0)
#define  OD_WriteData_DATA_7_PC_access_v7_wdat_mask                              (0x3FF00000)
#define  OD_WriteData_DATA_7_PC_access_u7_wdat_mask                              (0x000FFC00)
#define  OD_WriteData_DATA_7_PC_access_y7_wdat_mask                              (0x000003FF)
#define  OD_WriteData_DATA_7_PC_access_v7_wdat(data)                             (0x3FF00000&((data)<<20))
#define  OD_WriteData_DATA_7_PC_access_u7_wdat(data)                             (0x000FFC00&((data)<<10))
#define  OD_WriteData_DATA_7_PC_access_y7_wdat(data)                             (0x000003FF&(data))
#define  OD_WriteData_DATA_7_PC_get_access_v7_wdat(data)                         ((0x3FF00000&(data))>>20)
#define  OD_WriteData_DATA_7_PC_get_access_u7_wdat(data)                         ((0x000FFC00&(data))>>10)
#define  OD_WriteData_DATA_7_PC_get_access_y7_wdat(data)                         (0x000003FF&(data))

#define  OD_ReadData_DATA_Channel1_1_PC                                         0x1802CB94
#define  OD_ReadData_DATA_Channel1_1_PC_reg_addr                                 "0xB802CB94"
#define  OD_ReadData_DATA_Channel1_1_PC_reg                                      0xB802CB94
#define  OD_ReadData_DATA_Channel1_1_PC_inst_addr                                "0x0015"
#define  set_OD_ReadData_DATA_Channel1_1_PC_reg(data)                            (*((volatile unsigned int*)OD_ReadData_DATA_Channel1_1_PC_reg)=data)
#define  get_OD_ReadData_DATA_Channel1_1_PC_reg                                  (*((volatile unsigned int*)OD_ReadData_DATA_Channel1_1_PC_reg))
#define  OD_ReadData_DATA_Channel1_1_PC_access_y01_color_shift                   (28)
#define  OD_ReadData_DATA_Channel1_1_PC_access_y01_shift                         (16)
#define  OD_ReadData_DATA_Channel1_1_PC_access_y00_color_shift                   (12)
#define  OD_ReadData_DATA_Channel1_1_PC_access_y00_shift                         (0)
#define  OD_ReadData_DATA_Channel1_1_PC_access_y01_color_mask                    (0x30000000)
#define  OD_ReadData_DATA_Channel1_1_PC_access_y01_mask                          (0x0FFF0000)
#define  OD_ReadData_DATA_Channel1_1_PC_access_y00_color_mask                    (0x00003000)
#define  OD_ReadData_DATA_Channel1_1_PC_access_y00_mask                          (0x00000FFF)
#define  OD_ReadData_DATA_Channel1_1_PC_access_y01_color(data)                   (0x30000000&((data)<<28))
#define  OD_ReadData_DATA_Channel1_1_PC_access_y01(data)                         (0x0FFF0000&((data)<<16))
#define  OD_ReadData_DATA_Channel1_1_PC_access_y00_color(data)                   (0x00003000&((data)<<12))
#define  OD_ReadData_DATA_Channel1_1_PC_access_y00(data)                         (0x00000FFF&(data))
#define  OD_ReadData_DATA_Channel1_1_PC_get_access_y01_color(data)               ((0x30000000&(data))>>28)
#define  OD_ReadData_DATA_Channel1_1_PC_get_access_y01(data)                     ((0x0FFF0000&(data))>>16)
#define  OD_ReadData_DATA_Channel1_1_PC_get_access_y00_color(data)               ((0x00003000&(data))>>12)
#define  OD_ReadData_DATA_Channel1_1_PC_get_access_y00(data)                     (0x00000FFF&(data))

#define  OD_ReadData_DATA_Channel1_2_PC                                         0x1802CB98
#define  OD_ReadData_DATA_Channel1_2_PC_reg_addr                                 "0xB802CB98"
#define  OD_ReadData_DATA_Channel1_2_PC_reg                                      0xB802CB98
#define  OD_ReadData_DATA_Channel1_2_PC_inst_addr                                "0x0016"
#define  set_OD_ReadData_DATA_Channel1_2_PC_reg(data)                            (*((volatile unsigned int*)OD_ReadData_DATA_Channel1_2_PC_reg)=data)
#define  get_OD_ReadData_DATA_Channel1_2_PC_reg                                  (*((volatile unsigned int*)OD_ReadData_DATA_Channel1_2_PC_reg))
#define  OD_ReadData_DATA_Channel1_2_PC_access_y11_color_shift                   (28)
#define  OD_ReadData_DATA_Channel1_2_PC_access_y11_shift                         (16)
#define  OD_ReadData_DATA_Channel1_2_PC_access_y10_color_shift                   (12)
#define  OD_ReadData_DATA_Channel1_2_PC_access_y10_shift                         (0)
#define  OD_ReadData_DATA_Channel1_2_PC_access_y11_color_mask                    (0x30000000)
#define  OD_ReadData_DATA_Channel1_2_PC_access_y11_mask                          (0x0FFF0000)
#define  OD_ReadData_DATA_Channel1_2_PC_access_y10_color_mask                    (0x00003000)
#define  OD_ReadData_DATA_Channel1_2_PC_access_y10_mask                          (0x00000FFF)
#define  OD_ReadData_DATA_Channel1_2_PC_access_y11_color(data)                   (0x30000000&((data)<<28))
#define  OD_ReadData_DATA_Channel1_2_PC_access_y11(data)                         (0x0FFF0000&((data)<<16))
#define  OD_ReadData_DATA_Channel1_2_PC_access_y10_color(data)                   (0x00003000&((data)<<12))
#define  OD_ReadData_DATA_Channel1_2_PC_access_y10(data)                         (0x00000FFF&(data))
#define  OD_ReadData_DATA_Channel1_2_PC_get_access_y11_color(data)               ((0x30000000&(data))>>28)
#define  OD_ReadData_DATA_Channel1_2_PC_get_access_y11(data)                     ((0x0FFF0000&(data))>>16)
#define  OD_ReadData_DATA_Channel1_2_PC_get_access_y10_color(data)               ((0x00003000&(data))>>12)
#define  OD_ReadData_DATA_Channel1_2_PC_get_access_y10(data)                     (0x00000FFF&(data))

#define  OD_ReadData_DATA_Channel2_1_PC                                         0x1802CB9C
#define  OD_ReadData_DATA_Channel2_1_PC_reg_addr                                 "0xB802CB9C"
#define  OD_ReadData_DATA_Channel2_1_PC_reg                                      0xB802CB9C
#define  OD_ReadData_DATA_Channel2_1_PC_inst_addr                                "0x0017"
#define  set_OD_ReadData_DATA_Channel2_1_PC_reg(data)                            (*((volatile unsigned int*)OD_ReadData_DATA_Channel2_1_PC_reg)=data)
#define  get_OD_ReadData_DATA_Channel2_1_PC_reg                                  (*((volatile unsigned int*)OD_ReadData_DATA_Channel2_1_PC_reg))
#define  OD_ReadData_DATA_Channel2_1_PC_access_u01_color_shift                   (28)
#define  OD_ReadData_DATA_Channel2_1_PC_access_u01_shift                         (16)
#define  OD_ReadData_DATA_Channel2_1_PC_access_u00_color_shift                   (12)
#define  OD_ReadData_DATA_Channel2_1_PC_access_u00_shift                         (0)
#define  OD_ReadData_DATA_Channel2_1_PC_access_u01_color_mask                    (0x30000000)
#define  OD_ReadData_DATA_Channel2_1_PC_access_u01_mask                          (0x0FFF0000)
#define  OD_ReadData_DATA_Channel2_1_PC_access_u00_color_mask                    (0x00003000)
#define  OD_ReadData_DATA_Channel2_1_PC_access_u00_mask                          (0x00000FFF)
#define  OD_ReadData_DATA_Channel2_1_PC_access_u01_color(data)                   (0x30000000&((data)<<28))
#define  OD_ReadData_DATA_Channel2_1_PC_access_u01(data)                         (0x0FFF0000&((data)<<16))
#define  OD_ReadData_DATA_Channel2_1_PC_access_u00_color(data)                   (0x00003000&((data)<<12))
#define  OD_ReadData_DATA_Channel2_1_PC_access_u00(data)                         (0x00000FFF&(data))
#define  OD_ReadData_DATA_Channel2_1_PC_get_access_u01_color(data)               ((0x30000000&(data))>>28)
#define  OD_ReadData_DATA_Channel2_1_PC_get_access_u01(data)                     ((0x0FFF0000&(data))>>16)
#define  OD_ReadData_DATA_Channel2_1_PC_get_access_u00_color(data)               ((0x00003000&(data))>>12)
#define  OD_ReadData_DATA_Channel2_1_PC_get_access_u00(data)                     (0x00000FFF&(data))

#define  OD_ReadData_DATA_Channel2_2_PC                                         0x1802CBA0
#define  OD_ReadData_DATA_Channel2_2_PC_reg_addr                                 "0xB802CBA0"
#define  OD_ReadData_DATA_Channel2_2_PC_reg                                      0xB802CBA0
#define  OD_ReadData_DATA_Channel2_2_PC_inst_addr                                "0x0018"
#define  set_OD_ReadData_DATA_Channel2_2_PC_reg(data)                            (*((volatile unsigned int*)OD_ReadData_DATA_Channel2_2_PC_reg)=data)
#define  get_OD_ReadData_DATA_Channel2_2_PC_reg                                  (*((volatile unsigned int*)OD_ReadData_DATA_Channel2_2_PC_reg))
#define  OD_ReadData_DATA_Channel2_2_PC_access_u11_color_shift                   (28)
#define  OD_ReadData_DATA_Channel2_2_PC_access_u11_shift                         (16)
#define  OD_ReadData_DATA_Channel2_2_PC_access_u10_color_shift                   (12)
#define  OD_ReadData_DATA_Channel2_2_PC_access_u10_shift                         (0)
#define  OD_ReadData_DATA_Channel2_2_PC_access_u11_color_mask                    (0x30000000)
#define  OD_ReadData_DATA_Channel2_2_PC_access_u11_mask                          (0x0FFF0000)
#define  OD_ReadData_DATA_Channel2_2_PC_access_u10_color_mask                    (0x00003000)
#define  OD_ReadData_DATA_Channel2_2_PC_access_u10_mask                          (0x00000FFF)
#define  OD_ReadData_DATA_Channel2_2_PC_access_u11_color(data)                   (0x30000000&((data)<<28))
#define  OD_ReadData_DATA_Channel2_2_PC_access_u11(data)                         (0x0FFF0000&((data)<<16))
#define  OD_ReadData_DATA_Channel2_2_PC_access_u10_color(data)                   (0x00003000&((data)<<12))
#define  OD_ReadData_DATA_Channel2_2_PC_access_u10(data)                         (0x00000FFF&(data))
#define  OD_ReadData_DATA_Channel2_2_PC_get_access_u11_color(data)               ((0x30000000&(data))>>28)
#define  OD_ReadData_DATA_Channel2_2_PC_get_access_u11(data)                     ((0x0FFF0000&(data))>>16)
#define  OD_ReadData_DATA_Channel2_2_PC_get_access_u10_color(data)               ((0x00003000&(data))>>12)
#define  OD_ReadData_DATA_Channel2_2_PC_get_access_u10(data)                     (0x00000FFF&(data))

#define  OD_ReadData_DATA_Channel3_1_PC                                         0x1802CBA4
#define  OD_ReadData_DATA_Channel3_1_PC_reg_addr                                 "0xB802CBA4"
#define  OD_ReadData_DATA_Channel3_1_PC_reg                                      0xB802CBA4
#define  OD_ReadData_DATA_Channel3_1_PC_inst_addr                                "0x0019"
#define  set_OD_ReadData_DATA_Channel3_1_PC_reg(data)                            (*((volatile unsigned int*)OD_ReadData_DATA_Channel3_1_PC_reg)=data)
#define  get_OD_ReadData_DATA_Channel3_1_PC_reg                                  (*((volatile unsigned int*)OD_ReadData_DATA_Channel3_1_PC_reg))
#define  OD_ReadData_DATA_Channel3_1_PC_access_v01_color_shift                   (28)
#define  OD_ReadData_DATA_Channel3_1_PC_access_v01_shift                         (16)
#define  OD_ReadData_DATA_Channel3_1_PC_access_v00_color_shift                   (12)
#define  OD_ReadData_DATA_Channel3_1_PC_access_v00_shift                         (0)
#define  OD_ReadData_DATA_Channel3_1_PC_access_v01_color_mask                    (0x30000000)
#define  OD_ReadData_DATA_Channel3_1_PC_access_v01_mask                          (0x0FFF0000)
#define  OD_ReadData_DATA_Channel3_1_PC_access_v00_color_mask                    (0x00003000)
#define  OD_ReadData_DATA_Channel3_1_PC_access_v00_mask                          (0x00000FFF)
#define  OD_ReadData_DATA_Channel3_1_PC_access_v01_color(data)                   (0x30000000&((data)<<28))
#define  OD_ReadData_DATA_Channel3_1_PC_access_v01(data)                         (0x0FFF0000&((data)<<16))
#define  OD_ReadData_DATA_Channel3_1_PC_access_v00_color(data)                   (0x00003000&((data)<<12))
#define  OD_ReadData_DATA_Channel3_1_PC_access_v00(data)                         (0x00000FFF&(data))
#define  OD_ReadData_DATA_Channel3_1_PC_get_access_v01_color(data)               ((0x30000000&(data))>>28)
#define  OD_ReadData_DATA_Channel3_1_PC_get_access_v01(data)                     ((0x0FFF0000&(data))>>16)
#define  OD_ReadData_DATA_Channel3_1_PC_get_access_v00_color(data)               ((0x00003000&(data))>>12)
#define  OD_ReadData_DATA_Channel3_1_PC_get_access_v00(data)                     (0x00000FFF&(data))

#define  OD_ReadData_DATA_Channel3_2_PC                                         0x1802CBA8
#define  OD_ReadData_DATA_Channel3_2_PC_reg_addr                                 "0xB802CBA8"
#define  OD_ReadData_DATA_Channel3_2_PC_reg                                      0xB802CBA8
#define  OD_ReadData_DATA_Channel3_2_PC_inst_addr                                "0x001A"
#define  set_OD_ReadData_DATA_Channel3_2_PC_reg(data)                            (*((volatile unsigned int*)OD_ReadData_DATA_Channel3_2_PC_reg)=data)
#define  get_OD_ReadData_DATA_Channel3_2_PC_reg                                  (*((volatile unsigned int*)OD_ReadData_DATA_Channel3_2_PC_reg))
#define  OD_ReadData_DATA_Channel3_2_PC_access_v11_color_shift                   (28)
#define  OD_ReadData_DATA_Channel3_2_PC_access_v11_shift                         (16)
#define  OD_ReadData_DATA_Channel3_2_PC_access_v10_color_shift                   (12)
#define  OD_ReadData_DATA_Channel3_2_PC_access_v10_shift                         (0)
#define  OD_ReadData_DATA_Channel3_2_PC_access_v11_color_mask                    (0x30000000)
#define  OD_ReadData_DATA_Channel3_2_PC_access_v11_mask                          (0x0FFF0000)
#define  OD_ReadData_DATA_Channel3_2_PC_access_v10_color_mask                    (0x00003000)
#define  OD_ReadData_DATA_Channel3_2_PC_access_v10_mask                          (0x00000FFF)
#define  OD_ReadData_DATA_Channel3_2_PC_access_v11_color(data)                   (0x30000000&((data)<<28))
#define  OD_ReadData_DATA_Channel3_2_PC_access_v11(data)                         (0x0FFF0000&((data)<<16))
#define  OD_ReadData_DATA_Channel3_2_PC_access_v10_color(data)                   (0x00003000&((data)<<12))
#define  OD_ReadData_DATA_Channel3_2_PC_access_v10(data)                         (0x00000FFF&(data))
#define  OD_ReadData_DATA_Channel3_2_PC_get_access_v11_color(data)               ((0x30000000&(data))>>28)
#define  OD_ReadData_DATA_Channel3_2_PC_get_access_v11(data)                     ((0x0FFF0000&(data))>>16)
#define  OD_ReadData_DATA_Channel3_2_PC_get_access_v10_color(data)               ((0x00003000&(data))>>12)
#define  OD_ReadData_DATA_Channel3_2_PC_get_access_v10(data)                     (0x00000FFF&(data))

#define  OD_OD_BIST_4                                                           0x1802CBAC
#define  OD_OD_BIST_4_reg_addr                                                   "0xB802CBAC"
#define  OD_OD_BIST_4_reg                                                        0xB802CBAC
#define  OD_OD_BIST_4_inst_addr                                                  "0x001B"
#define  set_OD_OD_BIST_4_reg(data)                                              (*((volatile unsigned int*)OD_OD_BIST_4_reg)=data)
#define  get_OD_OD_BIST_4_reg                                                    (*((volatile unsigned int*)OD_OD_BIST_4_reg))
#define  OD_OD_BIST_4_od_test1_0_shift                                           (31)
#define  OD_OD_BIST_4_od_test1_1_shift                                           (30)
#define  OD_OD_BIST_4_od_test1_2_shift                                           (29)
#define  OD_OD_BIST_4_od_test1_3_shift                                           (28)
#define  OD_OD_BIST_4_od_test1_4_shift                                           (27)
#define  OD_OD_BIST_4_od_test1_5_shift                                           (26)
#define  OD_OD_BIST_4_od_test1_6_shift                                           (25)
#define  OD_OD_BIST_4_od_test1_7_shift                                           (24)
#define  OD_OD_BIST_4_od_1_test1_0_shift                                         (23)
#define  OD_OD_BIST_4_od_1_test1_1_shift                                         (22)
#define  OD_OD_BIST_4_od_1_test1_2_shift                                         (21)
#define  OD_OD_BIST_4_od_1_test1_3_shift                                         (20)
#define  OD_OD_BIST_4_od_1_test1_4_shift                                         (19)
#define  OD_OD_BIST_4_od_1_test1_5_shift                                         (18)
#define  OD_OD_BIST_4_od_1_test1_6_shift                                         (17)
#define  OD_OD_BIST_4_od_1_test1_7_shift                                         (16)
#define  OD_OD_BIST_4_od_1_drf_fail_7_shift                                      (15)
#define  OD_OD_BIST_4_od_1_bist_fail_7_shift                                     (14)
#define  OD_OD_BIST_4_od_1_drf_fail_6_shift                                      (13)
#define  OD_OD_BIST_4_od_1_bist_fail_6_shift                                     (12)
#define  OD_OD_BIST_4_od_1_drf_fail_5_shift                                      (11)
#define  OD_OD_BIST_4_od_1_bist_fail_5_shift                                     (10)
#define  OD_OD_BIST_4_od_1_drf_fail_4_shift                                      (9)
#define  OD_OD_BIST_4_od_1_bist_fail_4_shift                                     (8)
#define  OD_OD_BIST_4_od_1_drf_fail_3_shift                                      (7)
#define  OD_OD_BIST_4_od_1_bist_fail_3_shift                                     (6)
#define  OD_OD_BIST_4_od_1_drf_fail_2_shift                                      (5)
#define  OD_OD_BIST_4_od_1_bist_fail_2_shift                                     (4)
#define  OD_OD_BIST_4_od_1_drf_fail_1_shift                                      (3)
#define  OD_OD_BIST_4_od_1_bist_fail_1_shift                                     (2)
#define  OD_OD_BIST_4_od_1_drf_fail_0_shift                                      (1)
#define  OD_OD_BIST_4_od_1_bist_fail_0_shift                                     (0)
#define  OD_OD_BIST_4_od_test1_0_mask                                            (0x80000000)
#define  OD_OD_BIST_4_od_test1_1_mask                                            (0x40000000)
#define  OD_OD_BIST_4_od_test1_2_mask                                            (0x20000000)
#define  OD_OD_BIST_4_od_test1_3_mask                                            (0x10000000)
#define  OD_OD_BIST_4_od_test1_4_mask                                            (0x08000000)
#define  OD_OD_BIST_4_od_test1_5_mask                                            (0x04000000)
#define  OD_OD_BIST_4_od_test1_6_mask                                            (0x02000000)
#define  OD_OD_BIST_4_od_test1_7_mask                                            (0x01000000)
#define  OD_OD_BIST_4_od_1_test1_0_mask                                          (0x00800000)
#define  OD_OD_BIST_4_od_1_test1_1_mask                                          (0x00400000)
#define  OD_OD_BIST_4_od_1_test1_2_mask                                          (0x00200000)
#define  OD_OD_BIST_4_od_1_test1_3_mask                                          (0x00100000)
#define  OD_OD_BIST_4_od_1_test1_4_mask                                          (0x00080000)
#define  OD_OD_BIST_4_od_1_test1_5_mask                                          (0x00040000)
#define  OD_OD_BIST_4_od_1_test1_6_mask                                          (0x00020000)
#define  OD_OD_BIST_4_od_1_test1_7_mask                                          (0x00010000)
#define  OD_OD_BIST_4_od_1_drf_fail_7_mask                                       (0x00008000)
#define  OD_OD_BIST_4_od_1_bist_fail_7_mask                                      (0x00004000)
#define  OD_OD_BIST_4_od_1_drf_fail_6_mask                                       (0x00002000)
#define  OD_OD_BIST_4_od_1_bist_fail_6_mask                                      (0x00001000)
#define  OD_OD_BIST_4_od_1_drf_fail_5_mask                                       (0x00000800)
#define  OD_OD_BIST_4_od_1_bist_fail_5_mask                                      (0x00000400)
#define  OD_OD_BIST_4_od_1_drf_fail_4_mask                                       (0x00000200)
#define  OD_OD_BIST_4_od_1_bist_fail_4_mask                                      (0x00000100)
#define  OD_OD_BIST_4_od_1_drf_fail_3_mask                                       (0x00000080)
#define  OD_OD_BIST_4_od_1_bist_fail_3_mask                                      (0x00000040)
#define  OD_OD_BIST_4_od_1_drf_fail_2_mask                                       (0x00000020)
#define  OD_OD_BIST_4_od_1_bist_fail_2_mask                                      (0x00000010)
#define  OD_OD_BIST_4_od_1_drf_fail_1_mask                                       (0x00000008)
#define  OD_OD_BIST_4_od_1_bist_fail_1_mask                                      (0x00000004)
#define  OD_OD_BIST_4_od_1_drf_fail_0_mask                                       (0x00000002)
#define  OD_OD_BIST_4_od_1_bist_fail_0_mask                                      (0x00000001)
#define  OD_OD_BIST_4_od_test1_0(data)                                           (0x80000000&((data)<<31))
#define  OD_OD_BIST_4_od_test1_1(data)                                           (0x40000000&((data)<<30))
#define  OD_OD_BIST_4_od_test1_2(data)                                           (0x20000000&((data)<<29))
#define  OD_OD_BIST_4_od_test1_3(data)                                           (0x10000000&((data)<<28))
#define  OD_OD_BIST_4_od_test1_4(data)                                           (0x08000000&((data)<<27))
#define  OD_OD_BIST_4_od_test1_5(data)                                           (0x04000000&((data)<<26))
#define  OD_OD_BIST_4_od_test1_6(data)                                           (0x02000000&((data)<<25))
#define  OD_OD_BIST_4_od_test1_7(data)                                           (0x01000000&((data)<<24))
#define  OD_OD_BIST_4_od_1_test1_0(data)                                         (0x00800000&((data)<<23))
#define  OD_OD_BIST_4_od_1_test1_1(data)                                         (0x00400000&((data)<<22))
#define  OD_OD_BIST_4_od_1_test1_2(data)                                         (0x00200000&((data)<<21))
#define  OD_OD_BIST_4_od_1_test1_3(data)                                         (0x00100000&((data)<<20))
#define  OD_OD_BIST_4_od_1_test1_4(data)                                         (0x00080000&((data)<<19))
#define  OD_OD_BIST_4_od_1_test1_5(data)                                         (0x00040000&((data)<<18))
#define  OD_OD_BIST_4_od_1_test1_6(data)                                         (0x00020000&((data)<<17))
#define  OD_OD_BIST_4_od_1_test1_7(data)                                         (0x00010000&((data)<<16))
#define  OD_OD_BIST_4_od_1_drf_fail_7(data)                                      (0x00008000&((data)<<15))
#define  OD_OD_BIST_4_od_1_bist_fail_7(data)                                     (0x00004000&((data)<<14))
#define  OD_OD_BIST_4_od_1_drf_fail_6(data)                                      (0x00002000&((data)<<13))
#define  OD_OD_BIST_4_od_1_bist_fail_6(data)                                     (0x00001000&((data)<<12))
#define  OD_OD_BIST_4_od_1_drf_fail_5(data)                                      (0x00000800&((data)<<11))
#define  OD_OD_BIST_4_od_1_bist_fail_5(data)                                     (0x00000400&((data)<<10))
#define  OD_OD_BIST_4_od_1_drf_fail_4(data)                                      (0x00000200&((data)<<9))
#define  OD_OD_BIST_4_od_1_bist_fail_4(data)                                     (0x00000100&((data)<<8))
#define  OD_OD_BIST_4_od_1_drf_fail_3(data)                                      (0x00000080&((data)<<7))
#define  OD_OD_BIST_4_od_1_bist_fail_3(data)                                     (0x00000040&((data)<<6))
#define  OD_OD_BIST_4_od_1_drf_fail_2(data)                                      (0x00000020&((data)<<5))
#define  OD_OD_BIST_4_od_1_bist_fail_2(data)                                     (0x00000010&((data)<<4))
#define  OD_OD_BIST_4_od_1_drf_fail_1(data)                                      (0x00000008&((data)<<3))
#define  OD_OD_BIST_4_od_1_bist_fail_1(data)                                     (0x00000004&((data)<<2))
#define  OD_OD_BIST_4_od_1_drf_fail_0(data)                                      (0x00000002&((data)<<1))
#define  OD_OD_BIST_4_od_1_bist_fail_0(data)                                     (0x00000001&(data))
#define  OD_OD_BIST_4_get_od_test1_0(data)                                       ((0x80000000&(data))>>31)
#define  OD_OD_BIST_4_get_od_test1_1(data)                                       ((0x40000000&(data))>>30)
#define  OD_OD_BIST_4_get_od_test1_2(data)                                       ((0x20000000&(data))>>29)
#define  OD_OD_BIST_4_get_od_test1_3(data)                                       ((0x10000000&(data))>>28)
#define  OD_OD_BIST_4_get_od_test1_4(data)                                       ((0x08000000&(data))>>27)
#define  OD_OD_BIST_4_get_od_test1_5(data)                                       ((0x04000000&(data))>>26)
#define  OD_OD_BIST_4_get_od_test1_6(data)                                       ((0x02000000&(data))>>25)
#define  OD_OD_BIST_4_get_od_test1_7(data)                                       ((0x01000000&(data))>>24)
#define  OD_OD_BIST_4_get_od_1_test1_0(data)                                     ((0x00800000&(data))>>23)
#define  OD_OD_BIST_4_get_od_1_test1_1(data)                                     ((0x00400000&(data))>>22)
#define  OD_OD_BIST_4_get_od_1_test1_2(data)                                     ((0x00200000&(data))>>21)
#define  OD_OD_BIST_4_get_od_1_test1_3(data)                                     ((0x00100000&(data))>>20)
#define  OD_OD_BIST_4_get_od_1_test1_4(data)                                     ((0x00080000&(data))>>19)
#define  OD_OD_BIST_4_get_od_1_test1_5(data)                                     ((0x00040000&(data))>>18)
#define  OD_OD_BIST_4_get_od_1_test1_6(data)                                     ((0x00020000&(data))>>17)
#define  OD_OD_BIST_4_get_od_1_test1_7(data)                                     ((0x00010000&(data))>>16)
#define  OD_OD_BIST_4_get_od_1_drf_fail_7(data)                                  ((0x00008000&(data))>>15)
#define  OD_OD_BIST_4_get_od_1_bist_fail_7(data)                                 ((0x00004000&(data))>>14)
#define  OD_OD_BIST_4_get_od_1_drf_fail_6(data)                                  ((0x00002000&(data))>>13)
#define  OD_OD_BIST_4_get_od_1_bist_fail_6(data)                                 ((0x00001000&(data))>>12)
#define  OD_OD_BIST_4_get_od_1_drf_fail_5(data)                                  ((0x00000800&(data))>>11)
#define  OD_OD_BIST_4_get_od_1_bist_fail_5(data)                                 ((0x00000400&(data))>>10)
#define  OD_OD_BIST_4_get_od_1_drf_fail_4(data)                                  ((0x00000200&(data))>>9)
#define  OD_OD_BIST_4_get_od_1_bist_fail_4(data)                                 ((0x00000100&(data))>>8)
#define  OD_OD_BIST_4_get_od_1_drf_fail_3(data)                                  ((0x00000080&(data))>>7)
#define  OD_OD_BIST_4_get_od_1_bist_fail_3(data)                                 ((0x00000040&(data))>>6)
#define  OD_OD_BIST_4_get_od_1_drf_fail_2(data)                                  ((0x00000020&(data))>>5)
#define  OD_OD_BIST_4_get_od_1_bist_fail_2(data)                                 ((0x00000010&(data))>>4)
#define  OD_OD_BIST_4_get_od_1_drf_fail_1(data)                                  ((0x00000008&(data))>>3)
#define  OD_OD_BIST_4_get_od_1_bist_fail_1(data)                                 ((0x00000004&(data))>>2)
#define  OD_OD_BIST_4_get_od_1_drf_fail_0(data)                                  ((0x00000002&(data))>>1)
#define  OD_OD_BIST_4_get_od_1_bist_fail_0(data)                                 (0x00000001&(data))

#define  OD_OD_BIST                                                             0x1802CBB0
#define  OD_OD_BIST_reg_addr                                                     "0xB802CBB0"
#define  OD_OD_BIST_reg                                                          0xB802CBB0
#define  OD_OD_BIST_inst_addr                                                    "0x001C"
#define  set_OD_OD_BIST_reg(data)                                                (*((volatile unsigned int*)OD_OD_BIST_reg)=data)
#define  get_OD_OD_BIST_reg                                                      (*((volatile unsigned int*)OD_OD_BIST_reg))
#define  OD_OD_BIST_rm_3_shift                                                   (20)
#define  OD_OD_BIST_rm_2_shift                                                   (16)
#define  OD_OD_BIST_rm_1_shift                                                   (12)
#define  OD_OD_BIST_rm_0_shift                                                   (8)
#define  OD_OD_BIST_rme_3_shift                                                  (7)
#define  OD_OD_BIST_rme_2_shift                                                  (6)
#define  OD_OD_BIST_rme_1_shift                                                  (5)
#define  OD_OD_BIST_rme_0_shift                                                  (4)
#define  OD_OD_BIST_ls_3_shift                                                   (3)
#define  OD_OD_BIST_ls_2_shift                                                   (2)
#define  OD_OD_BIST_ls_1_shift                                                   (1)
#define  OD_OD_BIST_ls_0_shift                                                   (0)
#define  OD_OD_BIST_rm_3_mask                                                    (0x00F00000)
#define  OD_OD_BIST_rm_2_mask                                                    (0x000F0000)
#define  OD_OD_BIST_rm_1_mask                                                    (0x0000F000)
#define  OD_OD_BIST_rm_0_mask                                                    (0x00000F00)
#define  OD_OD_BIST_rme_3_mask                                                   (0x00000080)
#define  OD_OD_BIST_rme_2_mask                                                   (0x00000040)
#define  OD_OD_BIST_rme_1_mask                                                   (0x00000020)
#define  OD_OD_BIST_rme_0_mask                                                   (0x00000010)
#define  OD_OD_BIST_ls_3_mask                                                    (0x00000008)
#define  OD_OD_BIST_ls_2_mask                                                    (0x00000004)
#define  OD_OD_BIST_ls_1_mask                                                    (0x00000002)
#define  OD_OD_BIST_ls_0_mask                                                    (0x00000001)
#define  OD_OD_BIST_rm_3(data)                                                   (0x00F00000&((data)<<20))
#define  OD_OD_BIST_rm_2(data)                                                   (0x000F0000&((data)<<16))
#define  OD_OD_BIST_rm_1(data)                                                   (0x0000F000&((data)<<12))
#define  OD_OD_BIST_rm_0(data)                                                   (0x00000F00&((data)<<8))
#define  OD_OD_BIST_rme_3(data)                                                  (0x00000080&((data)<<7))
#define  OD_OD_BIST_rme_2(data)                                                  (0x00000040&((data)<<6))
#define  OD_OD_BIST_rme_1(data)                                                  (0x00000020&((data)<<5))
#define  OD_OD_BIST_rme_0(data)                                                  (0x00000010&((data)<<4))
#define  OD_OD_BIST_ls_3(data)                                                   (0x00000008&((data)<<3))
#define  OD_OD_BIST_ls_2(data)                                                   (0x00000004&((data)<<2))
#define  OD_OD_BIST_ls_1(data)                                                   (0x00000002&((data)<<1))
#define  OD_OD_BIST_ls_0(data)                                                   (0x00000001&(data))
#define  OD_OD_BIST_get_rm_3(data)                                               ((0x00F00000&(data))>>20)
#define  OD_OD_BIST_get_rm_2(data)                                               ((0x000F0000&(data))>>16)
#define  OD_OD_BIST_get_rm_1(data)                                               ((0x0000F000&(data))>>12)
#define  OD_OD_BIST_get_rm_0(data)                                               ((0x00000F00&(data))>>8)
#define  OD_OD_BIST_get_rme_3(data)                                              ((0x00000080&(data))>>7)
#define  OD_OD_BIST_get_rme_2(data)                                              ((0x00000040&(data))>>6)
#define  OD_OD_BIST_get_rme_1(data)                                              ((0x00000020&(data))>>5)
#define  OD_OD_BIST_get_rme_0(data)                                              ((0x00000010&(data))>>4)
#define  OD_OD_BIST_get_ls_3(data)                                               ((0x00000008&(data))>>3)
#define  OD_OD_BIST_get_ls_2(data)                                               ((0x00000004&(data))>>2)
#define  OD_OD_BIST_get_ls_1(data)                                               ((0x00000002&(data))>>1)
#define  OD_OD_BIST_get_ls_0(data)                                               (0x00000001&(data))

#define  OD_OD_BIST_1                                                           0x1802CBB4
#define  OD_OD_BIST_1_reg_addr                                                   "0xB802CBB4"
#define  OD_OD_BIST_1_reg                                                        0xB802CBB4
#define  OD_OD_BIST_1_inst_addr                                                  "0x001D"
#define  set_OD_OD_BIST_1_reg(data)                                              (*((volatile unsigned int*)OD_OD_BIST_1_reg)=data)
#define  get_OD_OD_BIST_1_reg                                                    (*((volatile unsigned int*)OD_OD_BIST_1_reg))
#define  OD_OD_BIST_1_od_mplus_shifter_drf_fail_shift                            (25)
#define  OD_OD_BIST_1_od_line_buf_drf_fail_1_shift                               (22)
#define  OD_OD_BIST_1_od_line_buf_drf_fail_0_shift                               (21)
#define  OD_OD_BIST_1_od_mplus_shifter_bist_fail_shift                           (20)
#define  OD_OD_BIST_1_od_line_buf_bist_fail_1_shift                              (17)
#define  OD_OD_BIST_1_od_line_buf_bist_fail_0_shift                              (16)
#define  OD_OD_BIST_1_od_drf_fail_7_shift                                        (15)
#define  OD_OD_BIST_1_od_bist_fail_7_shift                                       (14)
#define  OD_OD_BIST_1_od_drf_fail_6_shift                                        (13)
#define  OD_OD_BIST_1_od_bist_fail_6_shift                                       (12)
#define  OD_OD_BIST_1_od_drf_fail_5_shift                                        (11)
#define  OD_OD_BIST_1_od_bist_fail_5_shift                                       (10)
#define  OD_OD_BIST_1_od_drf_fail_4_shift                                        (9)
#define  OD_OD_BIST_1_od_bist_fail_4_shift                                       (8)
#define  OD_OD_BIST_1_od_drf_fail_3_shift                                        (7)
#define  OD_OD_BIST_1_od_bist_fail_3_shift                                       (6)
#define  OD_OD_BIST_1_od_drf_fail_2_shift                                        (5)
#define  OD_OD_BIST_1_od_bist_fail_2_shift                                       (4)
#define  OD_OD_BIST_1_od_drf_fail_1_shift                                        (3)
#define  OD_OD_BIST_1_od_bist_fail_1_shift                                       (2)
#define  OD_OD_BIST_1_od_drf_fail_0_shift                                        (1)
#define  OD_OD_BIST_1_od_bist_fail_0_shift                                       (0)
#define  OD_OD_BIST_1_od_mplus_shifter_drf_fail_mask                             (0x02000000)
#define  OD_OD_BIST_1_od_line_buf_drf_fail_1_mask                                (0x00400000)
#define  OD_OD_BIST_1_od_line_buf_drf_fail_0_mask                                (0x00200000)
#define  OD_OD_BIST_1_od_mplus_shifter_bist_fail_mask                            (0x00100000)
#define  OD_OD_BIST_1_od_line_buf_bist_fail_1_mask                               (0x00020000)
#define  OD_OD_BIST_1_od_line_buf_bist_fail_0_mask                               (0x00010000)
#define  OD_OD_BIST_1_od_drf_fail_7_mask                                         (0x00008000)
#define  OD_OD_BIST_1_od_bist_fail_7_mask                                        (0x00004000)
#define  OD_OD_BIST_1_od_drf_fail_6_mask                                         (0x00002000)
#define  OD_OD_BIST_1_od_bist_fail_6_mask                                        (0x00001000)
#define  OD_OD_BIST_1_od_drf_fail_5_mask                                         (0x00000800)
#define  OD_OD_BIST_1_od_bist_fail_5_mask                                        (0x00000400)
#define  OD_OD_BIST_1_od_drf_fail_4_mask                                         (0x00000200)
#define  OD_OD_BIST_1_od_bist_fail_4_mask                                        (0x00000100)
#define  OD_OD_BIST_1_od_drf_fail_3_mask                                         (0x00000080)
#define  OD_OD_BIST_1_od_bist_fail_3_mask                                        (0x00000040)
#define  OD_OD_BIST_1_od_drf_fail_2_mask                                         (0x00000020)
#define  OD_OD_BIST_1_od_bist_fail_2_mask                                        (0x00000010)
#define  OD_OD_BIST_1_od_drf_fail_1_mask                                         (0x00000008)
#define  OD_OD_BIST_1_od_bist_fail_1_mask                                        (0x00000004)
#define  OD_OD_BIST_1_od_drf_fail_0_mask                                         (0x00000002)
#define  OD_OD_BIST_1_od_bist_fail_0_mask                                        (0x00000001)
#define  OD_OD_BIST_1_od_mplus_shifter_drf_fail(data)                            (0x02000000&((data)<<25))
#define  OD_OD_BIST_1_od_line_buf_drf_fail_1(data)                               (0x00400000&((data)<<22))
#define  OD_OD_BIST_1_od_line_buf_drf_fail_0(data)                               (0x00200000&((data)<<21))
#define  OD_OD_BIST_1_od_mplus_shifter_bist_fail(data)                           (0x00100000&((data)<<20))
#define  OD_OD_BIST_1_od_line_buf_bist_fail_1(data)                              (0x00020000&((data)<<17))
#define  OD_OD_BIST_1_od_line_buf_bist_fail_0(data)                              (0x00010000&((data)<<16))
#define  OD_OD_BIST_1_od_drf_fail_7(data)                                        (0x00008000&((data)<<15))
#define  OD_OD_BIST_1_od_bist_fail_7(data)                                       (0x00004000&((data)<<14))
#define  OD_OD_BIST_1_od_drf_fail_6(data)                                        (0x00002000&((data)<<13))
#define  OD_OD_BIST_1_od_bist_fail_6(data)                                       (0x00001000&((data)<<12))
#define  OD_OD_BIST_1_od_drf_fail_5(data)                                        (0x00000800&((data)<<11))
#define  OD_OD_BIST_1_od_bist_fail_5(data)                                       (0x00000400&((data)<<10))
#define  OD_OD_BIST_1_od_drf_fail_4(data)                                        (0x00000200&((data)<<9))
#define  OD_OD_BIST_1_od_bist_fail_4(data)                                       (0x00000100&((data)<<8))
#define  OD_OD_BIST_1_od_drf_fail_3(data)                                        (0x00000080&((data)<<7))
#define  OD_OD_BIST_1_od_bist_fail_3(data)                                       (0x00000040&((data)<<6))
#define  OD_OD_BIST_1_od_drf_fail_2(data)                                        (0x00000020&((data)<<5))
#define  OD_OD_BIST_1_od_bist_fail_2(data)                                       (0x00000010&((data)<<4))
#define  OD_OD_BIST_1_od_drf_fail_1(data)                                        (0x00000008&((data)<<3))
#define  OD_OD_BIST_1_od_bist_fail_1(data)                                       (0x00000004&((data)<<2))
#define  OD_OD_BIST_1_od_drf_fail_0(data)                                        (0x00000002&((data)<<1))
#define  OD_OD_BIST_1_od_bist_fail_0(data)                                       (0x00000001&(data))
#define  OD_OD_BIST_1_get_od_mplus_shifter_drf_fail(data)                        ((0x02000000&(data))>>25)
#define  OD_OD_BIST_1_get_od_line_buf_drf_fail_1(data)                           ((0x00400000&(data))>>22)
#define  OD_OD_BIST_1_get_od_line_buf_drf_fail_0(data)                           ((0x00200000&(data))>>21)
#define  OD_OD_BIST_1_get_od_mplus_shifter_bist_fail(data)                       ((0x00100000&(data))>>20)
#define  OD_OD_BIST_1_get_od_line_buf_bist_fail_1(data)                          ((0x00020000&(data))>>17)
#define  OD_OD_BIST_1_get_od_line_buf_bist_fail_0(data)                          ((0x00010000&(data))>>16)
#define  OD_OD_BIST_1_get_od_drf_fail_7(data)                                    ((0x00008000&(data))>>15)
#define  OD_OD_BIST_1_get_od_bist_fail_7(data)                                   ((0x00004000&(data))>>14)
#define  OD_OD_BIST_1_get_od_drf_fail_6(data)                                    ((0x00002000&(data))>>13)
#define  OD_OD_BIST_1_get_od_bist_fail_6(data)                                   ((0x00001000&(data))>>12)
#define  OD_OD_BIST_1_get_od_drf_fail_5(data)                                    ((0x00000800&(data))>>11)
#define  OD_OD_BIST_1_get_od_bist_fail_5(data)                                   ((0x00000400&(data))>>10)
#define  OD_OD_BIST_1_get_od_drf_fail_4(data)                                    ((0x00000200&(data))>>9)
#define  OD_OD_BIST_1_get_od_bist_fail_4(data)                                   ((0x00000100&(data))>>8)
#define  OD_OD_BIST_1_get_od_drf_fail_3(data)                                    ((0x00000080&(data))>>7)
#define  OD_OD_BIST_1_get_od_bist_fail_3(data)                                   ((0x00000040&(data))>>6)
#define  OD_OD_BIST_1_get_od_drf_fail_2(data)                                    ((0x00000020&(data))>>5)
#define  OD_OD_BIST_1_get_od_bist_fail_2(data)                                   ((0x00000010&(data))>>4)
#define  OD_OD_BIST_1_get_od_drf_fail_1(data)                                    ((0x00000008&(data))>>3)
#define  OD_OD_BIST_1_get_od_bist_fail_1(data)                                   ((0x00000004&(data))>>2)
#define  OD_OD_BIST_1_get_od_drf_fail_0(data)                                    ((0x00000002&(data))>>1)
#define  OD_OD_BIST_1_get_od_bist_fail_0(data)                                   (0x00000001&(data))

#define  OD_OD_BIST_2                                                           0x1802CBB8
#define  OD_OD_BIST_2_reg_addr                                                   "0xB802CBB8"
#define  OD_OD_BIST_2_reg                                                        0xB802CBB8
#define  OD_OD_BIST_2_inst_addr                                                  "0x001E"
#define  set_OD_OD_BIST_2_reg(data)                                              (*((volatile unsigned int*)OD_OD_BIST_2_reg)=data)
#define  get_OD_OD_BIST_2_reg                                                    (*((volatile unsigned int*)OD_OD_BIST_2_reg))
#define  OD_OD_BIST_2_od_mplus_shifter_rm_shift                                  (26)
#define  OD_OD_BIST_2_od_mplus_shifter_test1_shift                               (20)
#define  OD_OD_BIST_2_od_line_buf_test1_1_shift                                  (19)
#define  OD_OD_BIST_2_od_line_buf_test1_0_shift                                  (18)
#define  OD_OD_BIST_2_od_line_buf_rm_1_shift                                     (14)
#define  OD_OD_BIST_2_od_line_buf_rm_0_shift                                     (10)
#define  OD_OD_BIST_2_od_mplus_shifter_rme_shift                                 (9)
#define  OD_OD_BIST_2_od_line_buf_rme_1_shift                                    (6)
#define  OD_OD_BIST_2_od_line_buf_rme_0_shift                                    (5)
#define  OD_OD_BIST_2_od_mplus_shifter_ls_shift                                  (4)
#define  OD_OD_BIST_2_od_line_buf_ls_1_shift                                     (1)
#define  OD_OD_BIST_2_od_line_buf_ls_0_shift                                     (0)
#define  OD_OD_BIST_2_od_mplus_shifter_rm_mask                                   (0x3C000000)
#define  OD_OD_BIST_2_od_mplus_shifter_test1_mask                                (0x00100000)
#define  OD_OD_BIST_2_od_line_buf_test1_1_mask                                   (0x00080000)
#define  OD_OD_BIST_2_od_line_buf_test1_0_mask                                   (0x00040000)
#define  OD_OD_BIST_2_od_line_buf_rm_1_mask                                      (0x0003C000)
#define  OD_OD_BIST_2_od_line_buf_rm_0_mask                                      (0x00003C00)
#define  OD_OD_BIST_2_od_mplus_shifter_rme_mask                                  (0x00000200)
#define  OD_OD_BIST_2_od_line_buf_rme_1_mask                                     (0x00000040)
#define  OD_OD_BIST_2_od_line_buf_rme_0_mask                                     (0x00000020)
#define  OD_OD_BIST_2_od_mplus_shifter_ls_mask                                   (0x00000010)
#define  OD_OD_BIST_2_od_line_buf_ls_1_mask                                      (0x00000002)
#define  OD_OD_BIST_2_od_line_buf_ls_0_mask                                      (0x00000001)
#define  OD_OD_BIST_2_od_mplus_shifter_rm(data)                                  (0x3C000000&((data)<<26))
#define  OD_OD_BIST_2_od_mplus_shifter_test1(data)                               (0x00100000&((data)<<20))
#define  OD_OD_BIST_2_od_line_buf_test1_1(data)                                  (0x00080000&((data)<<19))
#define  OD_OD_BIST_2_od_line_buf_test1_0(data)                                  (0x00040000&((data)<<18))
#define  OD_OD_BIST_2_od_line_buf_rm_1(data)                                     (0x0003C000&((data)<<14))
#define  OD_OD_BIST_2_od_line_buf_rm_0(data)                                     (0x00003C00&((data)<<10))
#define  OD_OD_BIST_2_od_mplus_shifter_rme(data)                                 (0x00000200&((data)<<9))
#define  OD_OD_BIST_2_od_line_buf_rme_1(data)                                    (0x00000040&((data)<<6))
#define  OD_OD_BIST_2_od_line_buf_rme_0(data)                                    (0x00000020&((data)<<5))
#define  OD_OD_BIST_2_od_mplus_shifter_ls(data)                                  (0x00000010&((data)<<4))
#define  OD_OD_BIST_2_od_line_buf_ls_1(data)                                     (0x00000002&((data)<<1))
#define  OD_OD_BIST_2_od_line_buf_ls_0(data)                                     (0x00000001&(data))
#define  OD_OD_BIST_2_get_od_mplus_shifter_rm(data)                              ((0x3C000000&(data))>>26)
#define  OD_OD_BIST_2_get_od_mplus_shifter_test1(data)                           ((0x00100000&(data))>>20)
#define  OD_OD_BIST_2_get_od_line_buf_test1_1(data)                              ((0x00080000&(data))>>19)
#define  OD_OD_BIST_2_get_od_line_buf_test1_0(data)                              ((0x00040000&(data))>>18)
#define  OD_OD_BIST_2_get_od_line_buf_rm_1(data)                                 ((0x0003C000&(data))>>14)
#define  OD_OD_BIST_2_get_od_line_buf_rm_0(data)                                 ((0x00003C00&(data))>>10)
#define  OD_OD_BIST_2_get_od_mplus_shifter_rme(data)                             ((0x00000200&(data))>>9)
#define  OD_OD_BIST_2_get_od_line_buf_rme_1(data)                                ((0x00000040&(data))>>6)
#define  OD_OD_BIST_2_get_od_line_buf_rme_0(data)                                ((0x00000020&(data))>>5)
#define  OD_OD_BIST_2_get_od_mplus_shifter_ls(data)                              ((0x00000010&(data))>>4)
#define  OD_OD_BIST_2_get_od_line_buf_ls_1(data)                                 ((0x00000002&(data))>>1)
#define  OD_OD_BIST_2_get_od_line_buf_ls_0(data)                                 (0x00000001&(data))

#define  OD_OD_BIST_3                                                           0x1802CBBC
#define  OD_OD_BIST_3_reg_addr                                                   "0xB802CBBC"
#define  OD_OD_BIST_3_reg                                                        0xB802CBBC
#define  OD_OD_BIST_3_inst_addr                                                  "0x001F"
#define  set_OD_OD_BIST_3_reg(data)                                              (*((volatile unsigned int*)OD_OD_BIST_3_reg)=data)
#define  get_OD_OD_BIST_3_reg                                                    (*((volatile unsigned int*)OD_OD_BIST_3_reg))
#define  OD_OD_BIST_3_rm_7_shift                                                 (20)
#define  OD_OD_BIST_3_rm_6_shift                                                 (16)
#define  OD_OD_BIST_3_rm_5_shift                                                 (12)
#define  OD_OD_BIST_3_rm_4_shift                                                 (8)
#define  OD_OD_BIST_3_rme_7_shift                                                (7)
#define  OD_OD_BIST_3_rme_6_shift                                                (6)
#define  OD_OD_BIST_3_rme_5_shift                                                (5)
#define  OD_OD_BIST_3_rme_4_shift                                                (4)
#define  OD_OD_BIST_3_ls_7_shift                                                 (3)
#define  OD_OD_BIST_3_ls_6_shift                                                 (2)
#define  OD_OD_BIST_3_ls_5_shift                                                 (1)
#define  OD_OD_BIST_3_ls_4_shift                                                 (0)
#define  OD_OD_BIST_3_rm_7_mask                                                  (0x00F00000)
#define  OD_OD_BIST_3_rm_6_mask                                                  (0x000F0000)
#define  OD_OD_BIST_3_rm_5_mask                                                  (0x0000F000)
#define  OD_OD_BIST_3_rm_4_mask                                                  (0x00000F00)
#define  OD_OD_BIST_3_rme_7_mask                                                 (0x00000080)
#define  OD_OD_BIST_3_rme_6_mask                                                 (0x00000040)
#define  OD_OD_BIST_3_rme_5_mask                                                 (0x00000020)
#define  OD_OD_BIST_3_rme_4_mask                                                 (0x00000010)
#define  OD_OD_BIST_3_ls_7_mask                                                  (0x00000008)
#define  OD_OD_BIST_3_ls_6_mask                                                  (0x00000004)
#define  OD_OD_BIST_3_ls_5_mask                                                  (0x00000002)
#define  OD_OD_BIST_3_ls_4_mask                                                  (0x00000001)
#define  OD_OD_BIST_3_rm_7(data)                                                 (0x00F00000&((data)<<20))
#define  OD_OD_BIST_3_rm_6(data)                                                 (0x000F0000&((data)<<16))
#define  OD_OD_BIST_3_rm_5(data)                                                 (0x0000F000&((data)<<12))
#define  OD_OD_BIST_3_rm_4(data)                                                 (0x00000F00&((data)<<8))
#define  OD_OD_BIST_3_rme_7(data)                                                (0x00000080&((data)<<7))
#define  OD_OD_BIST_3_rme_6(data)                                                (0x00000040&((data)<<6))
#define  OD_OD_BIST_3_rme_5(data)                                                (0x00000020&((data)<<5))
#define  OD_OD_BIST_3_rme_4(data)                                                (0x00000010&((data)<<4))
#define  OD_OD_BIST_3_ls_7(data)                                                 (0x00000008&((data)<<3))
#define  OD_OD_BIST_3_ls_6(data)                                                 (0x00000004&((data)<<2))
#define  OD_OD_BIST_3_ls_5(data)                                                 (0x00000002&((data)<<1))
#define  OD_OD_BIST_3_ls_4(data)                                                 (0x00000001&(data))
#define  OD_OD_BIST_3_get_rm_7(data)                                             ((0x00F00000&(data))>>20)
#define  OD_OD_BIST_3_get_rm_6(data)                                             ((0x000F0000&(data))>>16)
#define  OD_OD_BIST_3_get_rm_5(data)                                             ((0x0000F000&(data))>>12)
#define  OD_OD_BIST_3_get_rm_4(data)                                             ((0x00000F00&(data))>>8)
#define  OD_OD_BIST_3_get_rme_7(data)                                            ((0x00000080&(data))>>7)
#define  OD_OD_BIST_3_get_rme_6(data)                                            ((0x00000040&(data))>>6)
#define  OD_OD_BIST_3_get_rme_5(data)                                            ((0x00000020&(data))>>5)
#define  OD_OD_BIST_3_get_rme_4(data)                                            ((0x00000010&(data))>>4)
#define  OD_OD_BIST_3_get_ls_7(data)                                             ((0x00000008&(data))>>3)
#define  OD_OD_BIST_3_get_ls_6(data)                                             ((0x00000004&(data))>>2)
#define  OD_OD_BIST_3_get_ls_5(data)                                             ((0x00000002&(data))>>1)
#define  OD_OD_BIST_3_get_ls_4(data)                                             (0x00000001&(data))

#define  OD_YMODE_CTRL                                                          0x1802CBC0
#define  OD_YMODE_CTRL_reg_addr                                                  "0xB802CBC0"
#define  OD_YMODE_CTRL_reg                                                       0xB802CBC0
#define  OD_YMODE_CTRL_inst_addr                                                 "0x0020"
#define  set_OD_YMODE_CTRL_reg(data)                                             (*((volatile unsigned int*)OD_YMODE_CTRL_reg)=data)
#define  get_OD_YMODE_CTRL_reg                                                   (*((volatile unsigned int*)OD_YMODE_CTRL_reg))
#define  OD_YMODE_CTRL_b_coeff_shift                                             (20)
#define  OD_YMODE_CTRL_g_coeff_shift                                             (12)
#define  OD_YMODE_CTRL_r_coeff_shift                                             (4)
#define  OD_YMODE_CTRL_od_ymode_debug_en_shift                                   (2)
#define  OD_YMODE_CTRL_od_ymode_sat_en_shift                                     (1)
#define  OD_YMODE_CTRL_od_ymode_en_shift                                         (0)
#define  OD_YMODE_CTRL_b_coeff_mask                                              (0x0FF00000)
#define  OD_YMODE_CTRL_g_coeff_mask                                              (0x000FF000)
#define  OD_YMODE_CTRL_r_coeff_mask                                              (0x00000FF0)
#define  OD_YMODE_CTRL_od_ymode_debug_en_mask                                    (0x0000000C)
#define  OD_YMODE_CTRL_od_ymode_sat_en_mask                                      (0x00000002)
#define  OD_YMODE_CTRL_od_ymode_en_mask                                          (0x00000001)
#define  OD_YMODE_CTRL_b_coeff(data)                                             (0x0FF00000&((data)<<20))
#define  OD_YMODE_CTRL_g_coeff(data)                                             (0x000FF000&((data)<<12))
#define  OD_YMODE_CTRL_r_coeff(data)                                             (0x00000FF0&((data)<<4))
#define  OD_YMODE_CTRL_od_ymode_debug_en(data)                                   (0x0000000C&((data)<<2))
#define  OD_YMODE_CTRL_od_ymode_sat_en(data)                                     (0x00000002&((data)<<1))
#define  OD_YMODE_CTRL_od_ymode_en(data)                                         (0x00000001&(data))
#define  OD_YMODE_CTRL_get_b_coeff(data)                                         ((0x0FF00000&(data))>>20)
#define  OD_YMODE_CTRL_get_g_coeff(data)                                         ((0x000FF000&(data))>>12)
#define  OD_YMODE_CTRL_get_r_coeff(data)                                         ((0x00000FF0&(data))>>4)
#define  OD_YMODE_CTRL_get_od_ymode_debug_en(data)                               ((0x0000000C&(data))>>2)
#define  OD_YMODE_CTRL_get_od_ymode_sat_en(data)                                 ((0x00000002&(data))>>1)
#define  OD_YMODE_CTRL_get_od_ymode_en(data)                                     (0x00000001&(data))

#define  OD_YMODE_SAT                                                           0x1802CBC4
#define  OD_YMODE_SAT_reg_addr                                                   "0xB802CBC4"
#define  OD_YMODE_SAT_reg                                                        0xB802CBC4
#define  OD_YMODE_SAT_inst_addr                                                  "0x0021"
#define  set_OD_YMODE_SAT_reg(data)                                              (*((volatile unsigned int*)OD_YMODE_SAT_reg)=data)
#define  get_OD_YMODE_SAT_reg                                                    (*((volatile unsigned int*)OD_YMODE_SAT_reg))
#define  OD_YMODE_SAT_sat_b_diff_th_shift                                        (28)
#define  OD_YMODE_SAT_sat_g_diff_th_shift                                        (24)
#define  OD_YMODE_SAT_sat_r_diff_th_shift                                        (20)
#define  OD_YMODE_SAT_dummy_19_12_shift                                          (12)
#define  OD_YMODE_SAT_sat_offset_clamp_en_shift                                  (11)
#define  OD_YMODE_SAT_sat_y_en_shift                                             (10)
#define  OD_YMODE_SAT_sat_m_en_shift                                             (9)
#define  OD_YMODE_SAT_sat_c_en_shift                                             (8)
#define  OD_YMODE_SAT_sat_b_en_shift                                             (7)
#define  OD_YMODE_SAT_sat_g_en_shift                                             (6)
#define  OD_YMODE_SAT_sat_r_en_shift                                             (5)
#define  OD_YMODE_SAT_sat_y_diff_neg_en_shift                                    (4)
#define  OD_YMODE_SAT_sat_y_diff_pos_en_shift                                    (3)
#define  OD_YMODE_SAT_sat_color2gray_en_shift                                    (2)
#define  OD_YMODE_SAT_sat_gray2cmy_en_shift                                      (1)
#define  OD_YMODE_SAT_sat_gray2rgb_en_shift                                      (0)
#define  OD_YMODE_SAT_sat_b_diff_th_mask                                         (0xF0000000)
#define  OD_YMODE_SAT_sat_g_diff_th_mask                                         (0x0F000000)
#define  OD_YMODE_SAT_sat_r_diff_th_mask                                         (0x00F00000)
#define  OD_YMODE_SAT_dummy_19_12_mask                                           (0x000FF000)
#define  OD_YMODE_SAT_sat_offset_clamp_en_mask                                   (0x00000800)
#define  OD_YMODE_SAT_sat_y_en_mask                                              (0x00000400)
#define  OD_YMODE_SAT_sat_m_en_mask                                              (0x00000200)
#define  OD_YMODE_SAT_sat_c_en_mask                                              (0x00000100)
#define  OD_YMODE_SAT_sat_b_en_mask                                              (0x00000080)
#define  OD_YMODE_SAT_sat_g_en_mask                                              (0x00000040)
#define  OD_YMODE_SAT_sat_r_en_mask                                              (0x00000020)
#define  OD_YMODE_SAT_sat_y_diff_neg_en_mask                                     (0x00000010)
#define  OD_YMODE_SAT_sat_y_diff_pos_en_mask                                     (0x00000008)
#define  OD_YMODE_SAT_sat_color2gray_en_mask                                     (0x00000004)
#define  OD_YMODE_SAT_sat_gray2cmy_en_mask                                       (0x00000002)
#define  OD_YMODE_SAT_sat_gray2rgb_en_mask                                       (0x00000001)
#define  OD_YMODE_SAT_sat_b_diff_th(data)                                        (0xF0000000&((data)<<28))
#define  OD_YMODE_SAT_sat_g_diff_th(data)                                        (0x0F000000&((data)<<24))
#define  OD_YMODE_SAT_sat_r_diff_th(data)                                        (0x00F00000&((data)<<20))
#define  OD_YMODE_SAT_dummy_19_12(data)                                          (0x000FF000&((data)<<12))
#define  OD_YMODE_SAT_sat_offset_clamp_en(data)                                  (0x00000800&((data)<<11))
#define  OD_YMODE_SAT_sat_y_en(data)                                             (0x00000400&((data)<<10))
#define  OD_YMODE_SAT_sat_m_en(data)                                             (0x00000200&((data)<<9))
#define  OD_YMODE_SAT_sat_c_en(data)                                             (0x00000100&((data)<<8))
#define  OD_YMODE_SAT_sat_b_en(data)                                             (0x00000080&((data)<<7))
#define  OD_YMODE_SAT_sat_g_en(data)                                             (0x00000040&((data)<<6))
#define  OD_YMODE_SAT_sat_r_en(data)                                             (0x00000020&((data)<<5))
#define  OD_YMODE_SAT_sat_y_diff_neg_en(data)                                    (0x00000010&((data)<<4))
#define  OD_YMODE_SAT_sat_y_diff_pos_en(data)                                    (0x00000008&((data)<<3))
#define  OD_YMODE_SAT_sat_color2gray_en(data)                                    (0x00000004&((data)<<2))
#define  OD_YMODE_SAT_sat_gray2cmy_en(data)                                      (0x00000002&((data)<<1))
#define  OD_YMODE_SAT_sat_gray2rgb_en(data)                                      (0x00000001&(data))
#define  OD_YMODE_SAT_get_sat_b_diff_th(data)                                    ((0xF0000000&(data))>>28)
#define  OD_YMODE_SAT_get_sat_g_diff_th(data)                                    ((0x0F000000&(data))>>24)
#define  OD_YMODE_SAT_get_sat_r_diff_th(data)                                    ((0x00F00000&(data))>>20)
#define  OD_YMODE_SAT_get_dummy_19_12(data)                                      ((0x000FF000&(data))>>12)
#define  OD_YMODE_SAT_get_sat_offset_clamp_en(data)                              ((0x00000800&(data))>>11)
#define  OD_YMODE_SAT_get_sat_y_en(data)                                         ((0x00000400&(data))>>10)
#define  OD_YMODE_SAT_get_sat_m_en(data)                                         ((0x00000200&(data))>>9)
#define  OD_YMODE_SAT_get_sat_c_en(data)                                         ((0x00000100&(data))>>8)
#define  OD_YMODE_SAT_get_sat_b_en(data)                                         ((0x00000080&(data))>>7)
#define  OD_YMODE_SAT_get_sat_g_en(data)                                         ((0x00000040&(data))>>6)
#define  OD_YMODE_SAT_get_sat_r_en(data)                                         ((0x00000020&(data))>>5)
#define  OD_YMODE_SAT_get_sat_y_diff_neg_en(data)                                ((0x00000010&(data))>>4)
#define  OD_YMODE_SAT_get_sat_y_diff_pos_en(data)                                ((0x00000008&(data))>>3)
#define  OD_YMODE_SAT_get_sat_color2gray_en(data)                                ((0x00000004&(data))>>2)
#define  OD_YMODE_SAT_get_sat_gray2cmy_en(data)                                  ((0x00000002&(data))>>1)
#define  OD_YMODE_SAT_get_sat_gray2rgb_en(data)                                  (0x00000001&(data))

#define  OD_YMODE_SAT_TH                                                        0x1802CBC8
#define  OD_YMODE_SAT_TH_reg_addr                                                "0xB802CBC8"
#define  OD_YMODE_SAT_TH_reg                                                     0xB802CBC8
#define  OD_YMODE_SAT_TH_inst_addr                                               "0x0022"
#define  set_OD_YMODE_SAT_TH_reg(data)                                           (*((volatile unsigned int*)OD_YMODE_SAT_TH_reg)=data)
#define  get_OD_YMODE_SAT_TH_reg                                                 (*((volatile unsigned int*)OD_YMODE_SAT_TH_reg))
#define  OD_YMODE_SAT_TH_sat_color2gray_th_shift                                 (24)
#define  OD_YMODE_SAT_TH_sat_diff_th_factor_shift                                (18)
#define  OD_YMODE_SAT_TH_sat_br_diff_th_shift                                    (12)
#define  OD_YMODE_SAT_TH_sat_gb_diff_th_shift                                    (6)
#define  OD_YMODE_SAT_TH_sat_rg_diff_th_shift                                    (0)
#define  OD_YMODE_SAT_TH_sat_color2gray_th_mask                                  (0x3F000000)
#define  OD_YMODE_SAT_TH_sat_diff_th_factor_mask                                 (0x001C0000)
#define  OD_YMODE_SAT_TH_sat_br_diff_th_mask                                     (0x0003F000)
#define  OD_YMODE_SAT_TH_sat_gb_diff_th_mask                                     (0x00000FC0)
#define  OD_YMODE_SAT_TH_sat_rg_diff_th_mask                                     (0x0000003F)
#define  OD_YMODE_SAT_TH_sat_color2gray_th(data)                                 (0x3F000000&((data)<<24))
#define  OD_YMODE_SAT_TH_sat_diff_th_factor(data)                                (0x001C0000&((data)<<18))
#define  OD_YMODE_SAT_TH_sat_br_diff_th(data)                                    (0x0003F000&((data)<<12))
#define  OD_YMODE_SAT_TH_sat_gb_diff_th(data)                                    (0x00000FC0&((data)<<6))
#define  OD_YMODE_SAT_TH_sat_rg_diff_th(data)                                    (0x0000003F&(data))
#define  OD_YMODE_SAT_TH_get_sat_color2gray_th(data)                             ((0x3F000000&(data))>>24)
#define  OD_YMODE_SAT_TH_get_sat_diff_th_factor(data)                            ((0x001C0000&(data))>>18)
#define  OD_YMODE_SAT_TH_get_sat_br_diff_th(data)                                ((0x0003F000&(data))>>12)
#define  OD_YMODE_SAT_TH_get_sat_gb_diff_th(data)                                ((0x00000FC0&(data))>>6)
#define  OD_YMODE_SAT_TH_get_sat_rg_diff_th(data)                                (0x0000003F&(data))

#define  OD_YMODE_SAT_OFFSET_GAIN                                               0x1802CBCC
#define  OD_YMODE_SAT_OFFSET_GAIN_reg_addr                                       "0xB802CBCC"
#define  OD_YMODE_SAT_OFFSET_GAIN_reg                                            0xB802CBCC
#define  OD_YMODE_SAT_OFFSET_GAIN_inst_addr                                      "0x0023"
#define  set_OD_YMODE_SAT_OFFSET_GAIN_reg(data)                                  (*((volatile unsigned int*)OD_YMODE_SAT_OFFSET_GAIN_reg)=data)
#define  get_OD_YMODE_SAT_OFFSET_GAIN_reg                                        (*((volatile unsigned int*)OD_YMODE_SAT_OFFSET_GAIN_reg))
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_color2gray_offset_gain_shift               (24)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2y_offset_gain_shift                   (20)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2m_offset_gain_shift                   (16)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2c_offset_gain_shift                   (12)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2b_offset_gain_shift                   (8)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2g_offset_gain_shift                   (4)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2r_offset_gain_shift                   (0)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_color2gray_offset_gain_mask                (0x07000000)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2y_offset_gain_mask                    (0x00700000)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2m_offset_gain_mask                    (0x00070000)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2c_offset_gain_mask                    (0x00007000)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2b_offset_gain_mask                    (0x00000700)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2g_offset_gain_mask                    (0x00000070)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2r_offset_gain_mask                    (0x00000007)
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_color2gray_offset_gain(data)               (0x07000000&((data)<<24))
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2y_offset_gain(data)                   (0x00700000&((data)<<20))
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2m_offset_gain(data)                   (0x00070000&((data)<<16))
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2c_offset_gain(data)                   (0x00007000&((data)<<12))
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2b_offset_gain(data)                   (0x00000700&((data)<<8))
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2g_offset_gain(data)                   (0x00000070&((data)<<4))
#define  OD_YMODE_SAT_OFFSET_GAIN_sat_gray2r_offset_gain(data)                   (0x00000007&(data))
#define  OD_YMODE_SAT_OFFSET_GAIN_get_sat_color2gray_offset_gain(data)           ((0x07000000&(data))>>24)
#define  OD_YMODE_SAT_OFFSET_GAIN_get_sat_gray2y_offset_gain(data)               ((0x00700000&(data))>>20)
#define  OD_YMODE_SAT_OFFSET_GAIN_get_sat_gray2m_offset_gain(data)               ((0x00070000&(data))>>16)
#define  OD_YMODE_SAT_OFFSET_GAIN_get_sat_gray2c_offset_gain(data)               ((0x00007000&(data))>>12)
#define  OD_YMODE_SAT_OFFSET_GAIN_get_sat_gray2b_offset_gain(data)               ((0x00000700&(data))>>8)
#define  OD_YMODE_SAT_OFFSET_GAIN_get_sat_gray2g_offset_gain(data)               ((0x00000070&(data))>>4)
#define  OD_YMODE_SAT_OFFSET_GAIN_get_sat_gray2r_offset_gain(data)               (0x00000007&(data))

#define  OD_YMODE_SAT_Y                                                         0x1802CBD0
#define  OD_YMODE_SAT_Y_reg_addr                                                 "0xB802CBD0"
#define  OD_YMODE_SAT_Y_reg                                                      0xB802CBD0
#define  OD_YMODE_SAT_Y_inst_addr                                                "0x0024"
#define  set_OD_YMODE_SAT_Y_reg(data)                                            (*((volatile unsigned int*)OD_YMODE_SAT_Y_reg)=data)
#define  get_OD_YMODE_SAT_Y_reg                                                  (*((volatile unsigned int*)OD_YMODE_SAT_Y_reg))
#define  OD_YMODE_SAT_Y_offset_hi_th_shift                                       (24)
#define  OD_YMODE_SAT_Y_offset_lo_th_shift                                       (16)
#define  OD_YMODE_SAT_Y_y_diff_hi_th_shift                                       (8)
#define  OD_YMODE_SAT_Y_y_diff_lo_th_shift                                       (0)
#define  OD_YMODE_SAT_Y_offset_hi_th_mask                                        (0x3F000000)
#define  OD_YMODE_SAT_Y_offset_lo_th_mask                                        (0x003F0000)
#define  OD_YMODE_SAT_Y_y_diff_hi_th_mask                                        (0x0000FF00)
#define  OD_YMODE_SAT_Y_y_diff_lo_th_mask                                        (0x000000FF)
#define  OD_YMODE_SAT_Y_offset_hi_th(data)                                       (0x3F000000&((data)<<24))
#define  OD_YMODE_SAT_Y_offset_lo_th(data)                                       (0x003F0000&((data)<<16))
#define  OD_YMODE_SAT_Y_y_diff_hi_th(data)                                       (0x0000FF00&((data)<<8))
#define  OD_YMODE_SAT_Y_y_diff_lo_th(data)                                       (0x000000FF&(data))
#define  OD_YMODE_SAT_Y_get_offset_hi_th(data)                                   ((0x3F000000&(data))>>24)
#define  OD_YMODE_SAT_Y_get_offset_lo_th(data)                                   ((0x003F0000&(data))>>16)
#define  OD_YMODE_SAT_Y_get_y_diff_hi_th(data)                                   ((0x0000FF00&(data))>>8)
#define  OD_YMODE_SAT_Y_get_y_diff_lo_th(data)                                   (0x000000FF&(data))

#define  OD_YMODE_SAT_Y_COLOR2GRAY                                              0x1802CBD4
#define  OD_YMODE_SAT_Y_COLOR2GRAY_reg_addr                                      "0xB802CBD4"
#define  OD_YMODE_SAT_Y_COLOR2GRAY_reg                                           0xB802CBD4
#define  OD_YMODE_SAT_Y_COLOR2GRAY_inst_addr                                     "0x0025"
#define  set_OD_YMODE_SAT_Y_COLOR2GRAY_reg(data)                                 (*((volatile unsigned int*)OD_YMODE_SAT_Y_COLOR2GRAY_reg)=data)
#define  get_OD_YMODE_SAT_Y_COLOR2GRAY_reg                                       (*((volatile unsigned int*)OD_YMODE_SAT_Y_COLOR2GRAY_reg))
#define  OD_YMODE_SAT_Y_COLOR2GRAY_offset_hi_th_color2gray_shift                 (24)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_offset_lo_th_color2gray_shift                 (16)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_y_diff_hi_th_color2gray_shift                 (8)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_y_diff_lo_th_color2gray_shift                 (0)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_offset_hi_th_color2gray_mask                  (0x3F000000)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_offset_lo_th_color2gray_mask                  (0x003F0000)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_y_diff_hi_th_color2gray_mask                  (0x0000FF00)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_y_diff_lo_th_color2gray_mask                  (0x000000FF)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_offset_hi_th_color2gray(data)                 (0x3F000000&((data)<<24))
#define  OD_YMODE_SAT_Y_COLOR2GRAY_offset_lo_th_color2gray(data)                 (0x003F0000&((data)<<16))
#define  OD_YMODE_SAT_Y_COLOR2GRAY_y_diff_hi_th_color2gray(data)                 (0x0000FF00&((data)<<8))
#define  OD_YMODE_SAT_Y_COLOR2GRAY_y_diff_lo_th_color2gray(data)                 (0x000000FF&(data))
#define  OD_YMODE_SAT_Y_COLOR2GRAY_get_offset_hi_th_color2gray(data)             ((0x3F000000&(data))>>24)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_get_offset_lo_th_color2gray(data)             ((0x003F0000&(data))>>16)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_get_y_diff_hi_th_color2gray(data)             ((0x0000FF00&(data))>>8)
#define  OD_YMODE_SAT_Y_COLOR2GRAY_get_y_diff_lo_th_color2gray(data)             (0x000000FF&(data))

#define  OD_YMODE_SAT_Y_SLOPE                                                   0x1802CBD8
#define  OD_YMODE_SAT_Y_SLOPE_reg_addr                                           "0xB802CBD8"
#define  OD_YMODE_SAT_Y_SLOPE_reg                                                0xB802CBD8
#define  OD_YMODE_SAT_Y_SLOPE_inst_addr                                          "0x0026"
#define  set_OD_YMODE_SAT_Y_SLOPE_reg(data)                                      (*((volatile unsigned int*)OD_YMODE_SAT_Y_SLOPE_reg)=data)
#define  get_OD_YMODE_SAT_Y_SLOPE_reg                                            (*((volatile unsigned int*)OD_YMODE_SAT_Y_SLOPE_reg))
#define  OD_YMODE_SAT_Y_SLOPE_offset_slope_color2gray_shift                      (16)
#define  OD_YMODE_SAT_Y_SLOPE_offset_slope_shift                                 (0)
#define  OD_YMODE_SAT_Y_SLOPE_offset_slope_color2gray_mask                       (0x3FFF0000)
#define  OD_YMODE_SAT_Y_SLOPE_offset_slope_mask                                  (0x00003FFF)
#define  OD_YMODE_SAT_Y_SLOPE_offset_slope_color2gray(data)                      (0x3FFF0000&((data)<<16))
#define  OD_YMODE_SAT_Y_SLOPE_offset_slope(data)                                 (0x00003FFF&(data))
#define  OD_YMODE_SAT_Y_SLOPE_get_offset_slope_color2gray(data)                  ((0x3FFF0000&(data))>>16)
#define  OD_YMODE_SAT_Y_SLOPE_get_offset_slope(data)                             (0x00003FFF&(data))

#define  OD_YMODE_LPF                                                           0x1802CBDC
#define  OD_YMODE_LPF_reg_addr                                                   "0xB802CBDC"
#define  OD_YMODE_LPF_reg                                                        0xB802CBDC
#define  OD_YMODE_LPF_inst_addr                                                  "0x0027"
#define  set_OD_YMODE_LPF_reg(data)                                              (*((volatile unsigned int*)OD_YMODE_LPF_reg)=data)
#define  get_OD_YMODE_LPF_reg                                                    (*((volatile unsigned int*)OD_YMODE_LPF_reg))
#define  OD_YMODE_LPF_dummy_31_7_shift                                           (7)
#define  OD_YMODE_LPF_rgb2y_lpf_c1_shift                                         (4)
#define  OD_YMODE_LPF_rgb2y_lpf_c0_shift                                         (0)
#define  OD_YMODE_LPF_dummy_31_7_mask                                            (0xFFFFFF80)
#define  OD_YMODE_LPF_rgb2y_lpf_c1_mask                                          (0x00000070)
#define  OD_YMODE_LPF_rgb2y_lpf_c0_mask                                          (0x0000000F)
#define  OD_YMODE_LPF_dummy_31_7(data)                                           (0xFFFFFF80&((data)<<7))
#define  OD_YMODE_LPF_rgb2y_lpf_c1(data)                                         (0x00000070&((data)<<4))
#define  OD_YMODE_LPF_rgb2y_lpf_c0(data)                                         (0x0000000F&(data))
#define  OD_YMODE_LPF_get_dummy_31_7(data)                                       ((0xFFFFFF80&(data))>>7)
#define  OD_YMODE_LPF_get_rgb2y_lpf_c1(data)                                     ((0x00000070&(data))>>4)
#define  OD_YMODE_LPF_get_rgb2y_lpf_c0(data)                                     (0x0000000F&(data))

#define  OD_OD_RGBW_CTRL                                                        0x1802CBF0
#define  OD_OD_RGBW_CTRL_reg_addr                                                "0xB802CBF0"
#define  OD_OD_RGBW_CTRL_reg                                                     0xB802CBF0
#define  OD_OD_RGBW_CTRL_inst_addr                                               "0x0028"
#define  set_OD_OD_RGBW_CTRL_reg(data)                                           (*((volatile unsigned int*)OD_OD_RGBW_CTRL_reg)=data)
#define  get_OD_OD_RGBW_CTRL_reg                                                 (*((volatile unsigned int*)OD_OD_RGBW_CTRL_reg))
#define  OD_OD_RGBW_CTRL_od_input_format_shift                                   (16)
#define  OD_OD_RGBW_CTRL_even_ch_w_shift                                         (14)
#define  OD_OD_RGBW_CTRL_even_ch_b_shift                                         (12)
#define  OD_OD_RGBW_CTRL_even_ch_g_shift                                         (10)
#define  OD_OD_RGBW_CTRL_even_ch_r_shift                                         (8)
#define  OD_OD_RGBW_CTRL_odd_ch_w_shift                                          (6)
#define  OD_OD_RGBW_CTRL_odd_ch_b_shift                                          (4)
#define  OD_OD_RGBW_CTRL_odd_ch_g_shift                                          (2)
#define  OD_OD_RGBW_CTRL_odd_ch_r_shift                                          (0)
#define  OD_OD_RGBW_CTRL_od_input_format_mask                                    (0x00010000)
#define  OD_OD_RGBW_CTRL_even_ch_w_mask                                          (0x0000C000)
#define  OD_OD_RGBW_CTRL_even_ch_b_mask                                          (0x00003000)
#define  OD_OD_RGBW_CTRL_even_ch_g_mask                                          (0x00000C00)
#define  OD_OD_RGBW_CTRL_even_ch_r_mask                                          (0x00000300)
#define  OD_OD_RGBW_CTRL_odd_ch_w_mask                                           (0x000000C0)
#define  OD_OD_RGBW_CTRL_odd_ch_b_mask                                           (0x00000030)
#define  OD_OD_RGBW_CTRL_odd_ch_g_mask                                           (0x0000000C)
#define  OD_OD_RGBW_CTRL_odd_ch_r_mask                                           (0x00000003)
#define  OD_OD_RGBW_CTRL_od_input_format(data)                                   (0x00010000&((data)<<16))
#define  OD_OD_RGBW_CTRL_even_ch_w(data)                                         (0x0000C000&((data)<<14))
#define  OD_OD_RGBW_CTRL_even_ch_b(data)                                         (0x00003000&((data)<<12))
#define  OD_OD_RGBW_CTRL_even_ch_g(data)                                         (0x00000C00&((data)<<10))
#define  OD_OD_RGBW_CTRL_even_ch_r(data)                                         (0x00000300&((data)<<8))
#define  OD_OD_RGBW_CTRL_odd_ch_w(data)                                          (0x000000C0&((data)<<6))
#define  OD_OD_RGBW_CTRL_odd_ch_b(data)                                          (0x00000030&((data)<<4))
#define  OD_OD_RGBW_CTRL_odd_ch_g(data)                                          (0x0000000C&((data)<<2))
#define  OD_OD_RGBW_CTRL_odd_ch_r(data)                                          (0x00000003&(data))
#define  OD_OD_RGBW_CTRL_get_od_input_format(data)                               ((0x00010000&(data))>>16)
#define  OD_OD_RGBW_CTRL_get_even_ch_w(data)                                     ((0x0000C000&(data))>>14)
#define  OD_OD_RGBW_CTRL_get_even_ch_b(data)                                     ((0x00003000&(data))>>12)
#define  OD_OD_RGBW_CTRL_get_even_ch_g(data)                                     ((0x00000C00&(data))>>10)
#define  OD_OD_RGBW_CTRL_get_even_ch_r(data)                                     ((0x00000300&(data))>>8)
#define  OD_OD_RGBW_CTRL_get_odd_ch_w(data)                                      ((0x000000C0&(data))>>6)
#define  OD_OD_RGBW_CTRL_get_odd_ch_b(data)                                      ((0x00000030&(data))>>4)
#define  OD_OD_RGBW_CTRL_get_odd_ch_g(data)                                      ((0x0000000C&(data))>>2)
#define  OD_OD_RGBW_CTRL_get_odd_ch_r(data)                                      (0x00000003&(data))

#define  OD_OD_RGBW2Y_CTRL                                                      0x1802CBF4
#define  OD_OD_RGBW2Y_CTRL_reg_addr                                              "0xB802CBF4"
#define  OD_OD_RGBW2Y_CTRL_reg                                                   0xB802CBF4
#define  OD_OD_RGBW2Y_CTRL_inst_addr                                             "0x0029"
#define  set_OD_OD_RGBW2Y_CTRL_reg(data)                                         (*((volatile unsigned int*)OD_OD_RGBW2Y_CTRL_reg)=data)
#define  get_OD_OD_RGBW2Y_CTRL_reg                                               (*((volatile unsigned int*)OD_OD_RGBW2Y_CTRL_reg))
#define  OD_OD_RGBW2Y_CTRL_rgbw_c4_shift                                         (28)
#define  OD_OD_RGBW2Y_CTRL_rgbw_c3_shift                                         (24)
#define  OD_OD_RGBW2Y_CTRL_rgbw_c2_shift                                         (20)
#define  OD_OD_RGBW2Y_CTRL_rgbw_c1_shift                                         (16)
#define  OD_OD_RGBW2Y_CTRL_rgbw_c0_shift                                         (12)
#define  OD_OD_RGBW2Y_CTRL_w_coeff_shift                                         (4)
#define  OD_OD_RGBW2Y_CTRL_od_ymode_sat_rgbw2rgb_en_shift                        (1)
#define  OD_OD_RGBW2Y_CTRL_od_ymode_rgbw_en_shift                                (0)
#define  OD_OD_RGBW2Y_CTRL_rgbw_c4_mask                                          (0x70000000)
#define  OD_OD_RGBW2Y_CTRL_rgbw_c3_mask                                          (0x07000000)
#define  OD_OD_RGBW2Y_CTRL_rgbw_c2_mask                                          (0x00700000)
#define  OD_OD_RGBW2Y_CTRL_rgbw_c1_mask                                          (0x000F0000)
#define  OD_OD_RGBW2Y_CTRL_rgbw_c0_mask                                          (0x0000F000)
#define  OD_OD_RGBW2Y_CTRL_w_coeff_mask                                          (0x00000FF0)
#define  OD_OD_RGBW2Y_CTRL_od_ymode_sat_rgbw2rgb_en_mask                         (0x00000002)
#define  OD_OD_RGBW2Y_CTRL_od_ymode_rgbw_en_mask                                 (0x00000001)
#define  OD_OD_RGBW2Y_CTRL_rgbw_c4(data)                                         (0x70000000&((data)<<28))
#define  OD_OD_RGBW2Y_CTRL_rgbw_c3(data)                                         (0x07000000&((data)<<24))
#define  OD_OD_RGBW2Y_CTRL_rgbw_c2(data)                                         (0x00700000&((data)<<20))
#define  OD_OD_RGBW2Y_CTRL_rgbw_c1(data)                                         (0x000F0000&((data)<<16))
#define  OD_OD_RGBW2Y_CTRL_rgbw_c0(data)                                         (0x0000F000&((data)<<12))
#define  OD_OD_RGBW2Y_CTRL_w_coeff(data)                                         (0x00000FF0&((data)<<4))
#define  OD_OD_RGBW2Y_CTRL_od_ymode_sat_rgbw2rgb_en(data)                        (0x00000002&((data)<<1))
#define  OD_OD_RGBW2Y_CTRL_od_ymode_rgbw_en(data)                                (0x00000001&(data))
#define  OD_OD_RGBW2Y_CTRL_get_rgbw_c4(data)                                     ((0x70000000&(data))>>28)
#define  OD_OD_RGBW2Y_CTRL_get_rgbw_c3(data)                                     ((0x07000000&(data))>>24)
#define  OD_OD_RGBW2Y_CTRL_get_rgbw_c2(data)                                     ((0x00700000&(data))>>20)
#define  OD_OD_RGBW2Y_CTRL_get_rgbw_c1(data)                                     ((0x000F0000&(data))>>16)
#define  OD_OD_RGBW2Y_CTRL_get_rgbw_c0(data)                                     ((0x0000F000&(data))>>12)
#define  OD_OD_RGBW2Y_CTRL_get_w_coeff(data)                                     ((0x00000FF0&(data))>>4)
#define  OD_OD_RGBW2Y_CTRL_get_od_ymode_sat_rgbw2rgb_en(data)                    ((0x00000002&(data))>>1)
#define  OD_OD_RGBW2Y_CTRL_get_od_ymode_rgbw_en(data)                            (0x00000001&(data))

#define  OD_OD_HHF                                                              0x1802CBF8
#define  OD_OD_HHF_reg_addr                                                      "0xB802CBF8"
#define  OD_OD_HHF_reg                                                           0xB802CBF8
#define  OD_OD_HHF_inst_addr                                                     "0x002A"
#define  set_OD_OD_HHF_reg(data)                                                 (*((volatile unsigned int*)OD_OD_HHF_reg)=data)
#define  get_OD_OD_HHF_reg                                                       (*((volatile unsigned int*)OD_OD_HHF_reg))
#define  OD_OD_HHF_od_hhf_w2_shift                                               (27)
#define  OD_OD_HHF_od_hhf_w1_shift                                               (22)
#define  OD_OD_HHF_od_hhf_max_shift                                              (18)
#define  OD_OD_HHF_od_hhf_th2_shift                                              (15)
#define  OD_OD_HHF_od_hhf_th1_shift                                              (12)
#define  OD_OD_HHF_od_hhf_gain_shift                                             (4)
#define  OD_OD_HHF_od_hhf_en_shift                                               (0)
#define  OD_OD_HHF_od_hhf_w2_mask                                                (0xF8000000)
#define  OD_OD_HHF_od_hhf_w1_mask                                                (0x07C00000)
#define  OD_OD_HHF_od_hhf_max_mask                                               (0x001C0000)
#define  OD_OD_HHF_od_hhf_th2_mask                                               (0x00038000)
#define  OD_OD_HHF_od_hhf_th1_mask                                               (0x00007000)
#define  OD_OD_HHF_od_hhf_gain_mask                                              (0x000003F0)
#define  OD_OD_HHF_od_hhf_en_mask                                                (0x00000001)
#define  OD_OD_HHF_od_hhf_w2(data)                                               (0xF8000000&((data)<<27))
#define  OD_OD_HHF_od_hhf_w1(data)                                               (0x07C00000&((data)<<22))
#define  OD_OD_HHF_od_hhf_max(data)                                              (0x001C0000&((data)<<18))
#define  OD_OD_HHF_od_hhf_th2(data)                                              (0x00038000&((data)<<15))
#define  OD_OD_HHF_od_hhf_th1(data)                                              (0x00007000&((data)<<12))
#define  OD_OD_HHF_od_hhf_gain(data)                                             (0x000003F0&((data)<<4))
#define  OD_OD_HHF_od_hhf_en(data)                                               (0x00000001&(data))
#define  OD_OD_HHF_get_od_hhf_w2(data)                                           ((0xF8000000&(data))>>27)
#define  OD_OD_HHF_get_od_hhf_w1(data)                                           ((0x07C00000&(data))>>22)
#define  OD_OD_HHF_get_od_hhf_max(data)                                          ((0x001C0000&(data))>>18)
#define  OD_OD_HHF_get_od_hhf_th2(data)                                          ((0x00038000&(data))>>15)
#define  OD_OD_HHF_get_od_hhf_th1(data)                                          ((0x00007000&(data))>>12)
#define  OD_OD_HHF_get_od_hhf_gain(data)                                         ((0x000003F0&(data))>>4)
#define  OD_OD_HHF_get_od_hhf_en(data)                                           (0x00000001&(data))

#define  OD_OD_HHF_STAT                                                         0x1802CBFC
#define  OD_OD_HHF_STAT_reg_addr                                                 "0xB802CBFC"
#define  OD_OD_HHF_STAT_reg                                                      0xB802CBFC
#define  OD_OD_HHF_STAT_inst_addr                                                "0x002B"
#define  set_OD_OD_HHF_STAT_reg(data)                                            (*((volatile unsigned int*)OD_OD_HHF_STAT_reg)=data)
#define  get_OD_OD_HHF_STAT_reg                                                  (*((volatile unsigned int*)OD_OD_HHF_STAT_reg))
#define  OD_OD_HHF_STAT_od_hhf_statistic_shift                                   (0)
#define  OD_OD_HHF_STAT_od_hhf_statistic_mask                                    (0xFFFFFFFF)
#define  OD_OD_HHF_STAT_od_hhf_statistic(data)                                   (0xFFFFFFFF&(data))
#define  OD_OD_HHF_STAT_get_od_hhf_statistic(data)                               (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======OD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802ca00_31_10:22;
        RBus_UInt32  oddma_clk_en:1;
        RBus_UInt32  oddma_clk_sel:1;
        RBus_UInt32  dma_1p_2p_mode:1;
        RBus_UInt32  od_scaling_filter:3;
        RBus_UInt32  res1:2;
        RBus_UInt32  od_scaling_en:1;
        RBus_UInt32  od_en:1;
    };
}od_od_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  db_apply:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  od_en_dbf_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  force_pre_out:1;
        RBus_UInt32  od_pre_422_en:1;
        RBus_UInt32  od_cur_422_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  rounding_en:1;
        RBus_UInt32  res4:10;
        RBus_UInt32  od_disp_res:2;
        RBus_UInt32  res5:3;
        RBus_UInt32  od_pdest_en:1;
    };
}od_od_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  od_delta_gain_w:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  od_delta_gain_b:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  od_delta_gain_g:7;
        RBus_UInt32  res4:1;
        RBus_UInt32  od_delta_gain_r:7;
    };
}od_od_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  od_lut_read_sel:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  table_type:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  od_lut_ax_en:1;
        RBus_UInt32  od_lut_ax_mode:1;
        RBus_UInt32  od_lut_adr_mode:1;
        RBus_UInt32  od_lut_sel:3;
        RBus_UInt32  od_lut_row_addr:5;
        RBus_UInt32  res4:1;
        RBus_UInt32  od_lut_column_addr:5;
    };
}od_od_lut_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  od_lut_data:16;
    };
}od_od_lut_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  od_nr_mode:1;
        RBus_UInt32  od_b_nr_en:1;
        RBus_UInt32  od_g_nr_en:1;
        RBus_UInt32  od_r_nr_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  od_b_nr_thd:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  od_g_nr_thd:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  od_r_nr_thd:6;
    };
}od_od_noise_reduction_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_w_nr_en:1;
        RBus_UInt32  res1:25;
        RBus_UInt32  od_w_nr_thd:6;
    };
}od_od_noise_reduction_ctrl_w_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  crc_res_sel:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  crc_auto_cmp_en:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_start:1;
    };
}od_od_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}od_od_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_des:32;
    };
}od_od_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  crc_err_cnt:16;
    };
}od_od_crc_err_cnt0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cross_bar_en:1;
        RBus_UInt32  access_read_rgbw:1;
        RBus_UInt32  res1:21;
        RBus_UInt32  l_flag_enable:1;
        RBus_UInt32  w_en_ctrl:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  access_write_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  access_read_en:1;
    };
}od_accessdata_ctrl_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  access_starty:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  access_startx:12;
    };
}od_accessdata_posctrl_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v_wdat:10;
        RBus_UInt32  access_u_wdat:10;
        RBus_UInt32  access_y_wdat:10;
    };
}od_writedata_data_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v1_wdat:10;
        RBus_UInt32  access_u1_wdat:10;
        RBus_UInt32  access_y1_wdat:10;
    };
}od_writedata_data_1_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v2_wdat:10;
        RBus_UInt32  access_u2_wdat:10;
        RBus_UInt32  access_y2_wdat:10;
    };
}od_writedata_data_2_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v3_wdat:10;
        RBus_UInt32  access_u3_wdat:10;
        RBus_UInt32  access_y3_wdat:10;
    };
}od_writedata_data_3_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v4_wdat:10;
        RBus_UInt32  access_u4_wdat:10;
        RBus_UInt32  access_y4_wdat:10;
    };
}od_writedata_data_4_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v5_wdat:10;
        RBus_UInt32  access_u5_wdat:10;
        RBus_UInt32  access_y5_wdat:10;
    };
}od_writedata_data_5_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v6_wdat:10;
        RBus_UInt32  access_u6_wdat:10;
        RBus_UInt32  access_y6_wdat:10;
    };
}od_writedata_data_6_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v7_wdat:10;
        RBus_UInt32  access_u7_wdat:10;
        RBus_UInt32  access_y7_wdat:10;
    };
}od_writedata_data_7_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_y01_color:2;
        RBus_UInt32  access_y01:12;
        RBus_UInt32  res2:2;
        RBus_UInt32  access_y00_color:2;
        RBus_UInt32  access_y00:12;
    };
}od_readdata_data_channel1_1_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_y11_color:2;
        RBus_UInt32  access_y11:12;
        RBus_UInt32  res2:2;
        RBus_UInt32  access_y10_color:2;
        RBus_UInt32  access_y10:12;
    };
}od_readdata_data_channel1_2_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_u01_color:2;
        RBus_UInt32  access_u01:12;
        RBus_UInt32  res2:2;
        RBus_UInt32  access_u00_color:2;
        RBus_UInt32  access_u00:12;
    };
}od_readdata_data_channel2_1_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_u11_color:2;
        RBus_UInt32  access_u11:12;
        RBus_UInt32  res2:2;
        RBus_UInt32  access_u10_color:2;
        RBus_UInt32  access_u10:12;
    };
}od_readdata_data_channel2_2_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v01_color:2;
        RBus_UInt32  access_v01:12;
        RBus_UInt32  res2:2;
        RBus_UInt32  access_v00_color:2;
        RBus_UInt32  access_v00:12;
    };
}od_readdata_data_channel3_1_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v11_color:2;
        RBus_UInt32  access_v11:12;
        RBus_UInt32  res2:2;
        RBus_UInt32  access_v10_color:2;
        RBus_UInt32  access_v10:12;
    };
}od_readdata_data_channel3_2_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_test1_0:1;
        RBus_UInt32  od_test1_1:1;
        RBus_UInt32  od_test1_2:1;
        RBus_UInt32  od_test1_3:1;
        RBus_UInt32  od_test1_4:1;
        RBus_UInt32  od_test1_5:1;
        RBus_UInt32  od_test1_6:1;
        RBus_UInt32  od_test1_7:1;
        RBus_UInt32  od_1_test1_0:1;
        RBus_UInt32  od_1_test1_1:1;
        RBus_UInt32  od_1_test1_2:1;
        RBus_UInt32  od_1_test1_3:1;
        RBus_UInt32  od_1_test1_4:1;
        RBus_UInt32  od_1_test1_5:1;
        RBus_UInt32  od_1_test1_6:1;
        RBus_UInt32  od_1_test1_7:1;
        RBus_UInt32  od_1_drf_fail_7:1;
        RBus_UInt32  od_1_bist_fail_7:1;
        RBus_UInt32  od_1_drf_fail_6:1;
        RBus_UInt32  od_1_bist_fail_6:1;
        RBus_UInt32  od_1_drf_fail_5:1;
        RBus_UInt32  od_1_bist_fail_5:1;
        RBus_UInt32  od_1_drf_fail_4:1;
        RBus_UInt32  od_1_bist_fail_4:1;
        RBus_UInt32  od_1_drf_fail_3:1;
        RBus_UInt32  od_1_bist_fail_3:1;
        RBus_UInt32  od_1_drf_fail_2:1;
        RBus_UInt32  od_1_bist_fail_2:1;
        RBus_UInt32  od_1_drf_fail_1:1;
        RBus_UInt32  od_1_bist_fail_1:1;
        RBus_UInt32  od_1_drf_fail_0:1;
        RBus_UInt32  od_1_bist_fail_0:1;
    };
}od_od_bist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  rm_3:4;
        RBus_UInt32  rm_2:4;
        RBus_UInt32  rm_1:4;
        RBus_UInt32  rm_0:4;
        RBus_UInt32  rme_3:1;
        RBus_UInt32  rme_2:1;
        RBus_UInt32  rme_1:1;
        RBus_UInt32  rme_0:1;
        RBus_UInt32  ls_3:1;
        RBus_UInt32  ls_2:1;
        RBus_UInt32  ls_1:1;
        RBus_UInt32  ls_0:1;
    };
}od_od_bist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  od_mplus_shifter_drf_fail:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  od_line_buf_drf_fail_1:1;
        RBus_UInt32  od_line_buf_drf_fail_0:1;
        RBus_UInt32  od_mplus_shifter_bist_fail:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  od_line_buf_bist_fail_1:1;
        RBus_UInt32  od_line_buf_bist_fail_0:1;
        RBus_UInt32  od_drf_fail_7:1;
        RBus_UInt32  od_bist_fail_7:1;
        RBus_UInt32  od_drf_fail_6:1;
        RBus_UInt32  od_bist_fail_6:1;
        RBus_UInt32  od_drf_fail_5:1;
        RBus_UInt32  od_bist_fail_5:1;
        RBus_UInt32  od_drf_fail_4:1;
        RBus_UInt32  od_bist_fail_4:1;
        RBus_UInt32  od_drf_fail_3:1;
        RBus_UInt32  od_bist_fail_3:1;
        RBus_UInt32  od_drf_fail_2:1;
        RBus_UInt32  od_bist_fail_2:1;
        RBus_UInt32  od_drf_fail_1:1;
        RBus_UInt32  od_bist_fail_1:1;
        RBus_UInt32  od_drf_fail_0:1;
        RBus_UInt32  od_bist_fail_0:1;
    };
}od_od_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  od_mplus_shifter_rm:4;
        RBus_UInt32  res2:5;
        RBus_UInt32  od_mplus_shifter_test1:1;
        RBus_UInt32  od_line_buf_test1_1:1;
        RBus_UInt32  od_line_buf_test1_0:1;
        RBus_UInt32  od_line_buf_rm_1:4;
        RBus_UInt32  od_line_buf_rm_0:4;
        RBus_UInt32  od_mplus_shifter_rme:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  od_line_buf_rme_1:1;
        RBus_UInt32  od_line_buf_rme_0:1;
        RBus_UInt32  od_mplus_shifter_ls:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  od_line_buf_ls_1:1;
        RBus_UInt32  od_line_buf_ls_0:1;
    };
}od_od_bist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  rm_7:4;
        RBus_UInt32  rm_6:4;
        RBus_UInt32  rm_5:4;
        RBus_UInt32  rm_4:4;
        RBus_UInt32  rme_7:1;
        RBus_UInt32  rme_6:1;
        RBus_UInt32  rme_5:1;
        RBus_UInt32  rme_4:1;
        RBus_UInt32  ls_7:1;
        RBus_UInt32  ls_6:1;
        RBus_UInt32  ls_5:1;
        RBus_UInt32  ls_4:1;
    };
}od_od_bist_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  b_coeff:8;
        RBus_UInt32  g_coeff:8;
        RBus_UInt32  r_coeff:8;
        RBus_UInt32  od_ymode_debug_en:2;
        RBus_UInt32  od_ymode_sat_en:1;
        RBus_UInt32  od_ymode_en:1;
    };
}od_ymode_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sat_b_diff_th:4;
        RBus_UInt32  sat_g_diff_th:4;
        RBus_UInt32  sat_r_diff_th:4;
        RBus_UInt32  dummy1802cbc4_19_12:8;
        RBus_UInt32  sat_offset_clamp_en:1;
        RBus_UInt32  sat_y_en:1;
        RBus_UInt32  sat_m_en:1;
        RBus_UInt32  sat_c_en:1;
        RBus_UInt32  sat_b_en:1;
        RBus_UInt32  sat_g_en:1;
        RBus_UInt32  sat_r_en:1;
        RBus_UInt32  sat_y_diff_neg_en:1;
        RBus_UInt32  sat_y_diff_pos_en:1;
        RBus_UInt32  sat_color2gray_en:1;
        RBus_UInt32  sat_gray2cmy_en:1;
        RBus_UInt32  sat_gray2rgb_en:1;
    };
}od_ymode_sat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  sat_color2gray_th:6;
        RBus_UInt32  res2:3;
        RBus_UInt32  sat_diff_th_factor:3;
        RBus_UInt32  sat_br_diff_th:6;
        RBus_UInt32  sat_gb_diff_th:6;
        RBus_UInt32  sat_rg_diff_th:6;
    };
}od_ymode_sat_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  sat_color2gray_offset_gain:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  sat_gray2y_offset_gain:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  sat_gray2m_offset_gain:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  sat_gray2c_offset_gain:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  sat_gray2b_offset_gain:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  sat_gray2g_offset_gain:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  sat_gray2r_offset_gain:3;
    };
}od_ymode_sat_offset_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  offset_hi_th:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  offset_lo_th:6;
        RBus_UInt32  y_diff_hi_th:8;
        RBus_UInt32  y_diff_lo_th:8;
    };
}od_ymode_sat_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  offset_hi_th_color2gray:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  offset_lo_th_color2gray:6;
        RBus_UInt32  y_diff_hi_th_color2gray:8;
        RBus_UInt32  y_diff_lo_th_color2gray:8;
    };
}od_ymode_sat_y_color2gray_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  offset_slope_color2gray:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  offset_slope:14;
    };
}od_ymode_sat_y_slope_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802cbdc_31_7:25;
        RBus_UInt32  rgb2y_lpf_c1:3;
        RBus_UInt32  rgb2y_lpf_c0:4;
    };
}od_ymode_lpf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  od_input_format:1;
        RBus_UInt32  even_ch_w:2;
        RBus_UInt32  even_ch_b:2;
        RBus_UInt32  even_ch_g:2;
        RBus_UInt32  even_ch_r:2;
        RBus_UInt32  odd_ch_w:2;
        RBus_UInt32  odd_ch_b:2;
        RBus_UInt32  odd_ch_g:2;
        RBus_UInt32  odd_ch_r:2;
    };
}od_od_rgbw_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  rgbw_c4:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  rgbw_c3:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  rgbw_c2:3;
        RBus_UInt32  rgbw_c1:4;
        RBus_UInt32  rgbw_c0:4;
        RBus_UInt32  w_coeff:8;
        RBus_UInt32  res4:2;
        RBus_UInt32  od_ymode_sat_rgbw2rgb_en:1;
        RBus_UInt32  od_ymode_rgbw_en:1;
    };
}od_od_rgbw2y_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_hhf_w2:5;
        RBus_UInt32  od_hhf_w1:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  od_hhf_max:3;
        RBus_UInt32  od_hhf_th2:3;
        RBus_UInt32  od_hhf_th1:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  od_hhf_gain:6;
        RBus_UInt32  res3:3;
        RBus_UInt32  od_hhf_en:1;
    };
}od_od_hhf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_hhf_statistic:32;
    };
}od_od_hhf_stat_RBUS;

#else //apply LITTLE_ENDIAN

//======OD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_en:1;
        RBus_UInt32  od_scaling_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  od_scaling_filter:3;
        RBus_UInt32  dma_1p_2p_mode:1;
        RBus_UInt32  oddma_clk_sel:1;
        RBus_UInt32  oddma_clk_en:1;
        RBus_UInt32  dummy1802ca00_31_10:22;
    };
}od_od_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_pdest_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  od_disp_res:2;
        RBus_UInt32  res2:10;
        RBus_UInt32  rounding_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  od_cur_422_en:1;
        RBus_UInt32  od_pre_422_en:1;
        RBus_UInt32  force_pre_out:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  od_en_dbf_en:1;
        RBus_UInt32  db_read_level:1;
        RBus_UInt32  db_apply:1;
        RBus_UInt32  res5:5;
    };
}od_od_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_delta_gain_r:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  od_delta_gain_g:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  od_delta_gain_b:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  od_delta_gain_w:7;
        RBus_UInt32  res4:1;
    };
}od_od_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_lut_column_addr:5;
        RBus_UInt32  res1:1;
        RBus_UInt32  od_lut_row_addr:5;
        RBus_UInt32  od_lut_sel:3;
        RBus_UInt32  od_lut_adr_mode:1;
        RBus_UInt32  od_lut_ax_mode:1;
        RBus_UInt32  od_lut_ax_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  table_type:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  od_lut_read_sel:1;
        RBus_UInt32  res4:11;
    };
}od_od_lut_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_lut_data:16;
        RBus_UInt32  res1:16;
    };
}od_od_lut_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_r_nr_thd:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  od_g_nr_thd:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  od_b_nr_thd:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  od_r_nr_en:1;
        RBus_UInt32  od_g_nr_en:1;
        RBus_UInt32  od_b_nr_en:1;
        RBus_UInt32  od_nr_mode:1;
        RBus_UInt32  res4:4;
    };
}od_od_noise_reduction_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_w_nr_thd:6;
        RBus_UInt32  res1:25;
        RBus_UInt32  od_w_nr_en:1;
    };
}od_od_noise_reduction_ctrl_w_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_start:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_auto_cmp_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  crc_res_sel:2;
        RBus_UInt32  res2:26;
    };
}od_od_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}od_od_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_des:32;
    };
}od_od_des_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_err_cnt:16;
        RBus_UInt32  res1:16;
    };
}od_od_crc_err_cnt0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_read_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  access_write_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  w_en_ctrl:4;
        RBus_UInt32  l_flag_enable:1;
        RBus_UInt32  res3:21;
        RBus_UInt32  access_read_rgbw:1;
        RBus_UInt32  cross_bar_en:1;
    };
}od_accessdata_ctrl_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_startx:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  access_starty:12;
        RBus_UInt32  res2:4;
    };
}od_accessdata_posctrl_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y_wdat:10;
        RBus_UInt32  access_u_wdat:10;
        RBus_UInt32  access_v_wdat:10;
        RBus_UInt32  res1:2;
    };
}od_writedata_data_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y1_wdat:10;
        RBus_UInt32  access_u1_wdat:10;
        RBus_UInt32  access_v1_wdat:10;
        RBus_UInt32  res1:2;
    };
}od_writedata_data_1_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y2_wdat:10;
        RBus_UInt32  access_u2_wdat:10;
        RBus_UInt32  access_v2_wdat:10;
        RBus_UInt32  res1:2;
    };
}od_writedata_data_2_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y3_wdat:10;
        RBus_UInt32  access_u3_wdat:10;
        RBus_UInt32  access_v3_wdat:10;
        RBus_UInt32  res1:2;
    };
}od_writedata_data_3_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y4_wdat:10;
        RBus_UInt32  access_u4_wdat:10;
        RBus_UInt32  access_v4_wdat:10;
        RBus_UInt32  res1:2;
    };
}od_writedata_data_4_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y5_wdat:10;
        RBus_UInt32  access_u5_wdat:10;
        RBus_UInt32  access_v5_wdat:10;
        RBus_UInt32  res1:2;
    };
}od_writedata_data_5_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y6_wdat:10;
        RBus_UInt32  access_u6_wdat:10;
        RBus_UInt32  access_v6_wdat:10;
        RBus_UInt32  res1:2;
    };
}od_writedata_data_6_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y7_wdat:10;
        RBus_UInt32  access_u7_wdat:10;
        RBus_UInt32  access_v7_wdat:10;
        RBus_UInt32  res1:2;
    };
}od_writedata_data_7_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y00:12;
        RBus_UInt32  access_y00_color:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  access_y01:12;
        RBus_UInt32  access_y01_color:2;
        RBus_UInt32  res2:2;
    };
}od_readdata_data_channel1_1_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_y10:12;
        RBus_UInt32  access_y10_color:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  access_y11:12;
        RBus_UInt32  access_y11_color:2;
        RBus_UInt32  res2:2;
    };
}od_readdata_data_channel1_2_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_u00:12;
        RBus_UInt32  access_u00_color:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  access_u01:12;
        RBus_UInt32  access_u01_color:2;
        RBus_UInt32  res2:2;
    };
}od_readdata_data_channel2_1_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_u10:12;
        RBus_UInt32  access_u10_color:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  access_u11:12;
        RBus_UInt32  access_u11_color:2;
        RBus_UInt32  res2:2;
    };
}od_readdata_data_channel2_2_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_v00:12;
        RBus_UInt32  access_v00_color:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v01:12;
        RBus_UInt32  access_v01_color:2;
        RBus_UInt32  res2:2;
    };
}od_readdata_data_channel3_1_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  access_v10:12;
        RBus_UInt32  access_v10_color:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  access_v11:12;
        RBus_UInt32  access_v11_color:2;
        RBus_UInt32  res2:2;
    };
}od_readdata_data_channel3_2_pc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_1_bist_fail_0:1;
        RBus_UInt32  od_1_drf_fail_0:1;
        RBus_UInt32  od_1_bist_fail_1:1;
        RBus_UInt32  od_1_drf_fail_1:1;
        RBus_UInt32  od_1_bist_fail_2:1;
        RBus_UInt32  od_1_drf_fail_2:1;
        RBus_UInt32  od_1_bist_fail_3:1;
        RBus_UInt32  od_1_drf_fail_3:1;
        RBus_UInt32  od_1_bist_fail_4:1;
        RBus_UInt32  od_1_drf_fail_4:1;
        RBus_UInt32  od_1_bist_fail_5:1;
        RBus_UInt32  od_1_drf_fail_5:1;
        RBus_UInt32  od_1_bist_fail_6:1;
        RBus_UInt32  od_1_drf_fail_6:1;
        RBus_UInt32  od_1_bist_fail_7:1;
        RBus_UInt32  od_1_drf_fail_7:1;
        RBus_UInt32  od_1_test1_7:1;
        RBus_UInt32  od_1_test1_6:1;
        RBus_UInt32  od_1_test1_5:1;
        RBus_UInt32  od_1_test1_4:1;
        RBus_UInt32  od_1_test1_3:1;
        RBus_UInt32  od_1_test1_2:1;
        RBus_UInt32  od_1_test1_1:1;
        RBus_UInt32  od_1_test1_0:1;
        RBus_UInt32  od_test1_7:1;
        RBus_UInt32  od_test1_6:1;
        RBus_UInt32  od_test1_5:1;
        RBus_UInt32  od_test1_4:1;
        RBus_UInt32  od_test1_3:1;
        RBus_UInt32  od_test1_2:1;
        RBus_UInt32  od_test1_1:1;
        RBus_UInt32  od_test1_0:1;
    };
}od_od_bist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_0:1;
        RBus_UInt32  ls_1:1;
        RBus_UInt32  ls_2:1;
        RBus_UInt32  ls_3:1;
        RBus_UInt32  rme_0:1;
        RBus_UInt32  rme_1:1;
        RBus_UInt32  rme_2:1;
        RBus_UInt32  rme_3:1;
        RBus_UInt32  rm_0:4;
        RBus_UInt32  rm_1:4;
        RBus_UInt32  rm_2:4;
        RBus_UInt32  rm_3:4;
        RBus_UInt32  res1:8;
    };
}od_od_bist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_bist_fail_0:1;
        RBus_UInt32  od_drf_fail_0:1;
        RBus_UInt32  od_bist_fail_1:1;
        RBus_UInt32  od_drf_fail_1:1;
        RBus_UInt32  od_bist_fail_2:1;
        RBus_UInt32  od_drf_fail_2:1;
        RBus_UInt32  od_bist_fail_3:1;
        RBus_UInt32  od_drf_fail_3:1;
        RBus_UInt32  od_bist_fail_4:1;
        RBus_UInt32  od_drf_fail_4:1;
        RBus_UInt32  od_bist_fail_5:1;
        RBus_UInt32  od_drf_fail_5:1;
        RBus_UInt32  od_bist_fail_6:1;
        RBus_UInt32  od_drf_fail_6:1;
        RBus_UInt32  od_bist_fail_7:1;
        RBus_UInt32  od_drf_fail_7:1;
        RBus_UInt32  od_line_buf_bist_fail_0:1;
        RBus_UInt32  od_line_buf_bist_fail_1:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  od_mplus_shifter_bist_fail:1;
        RBus_UInt32  od_line_buf_drf_fail_0:1;
        RBus_UInt32  od_line_buf_drf_fail_1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  od_mplus_shifter_drf_fail:1;
        RBus_UInt32  res3:6;
    };
}od_od_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_line_buf_ls_0:1;
        RBus_UInt32  od_line_buf_ls_1:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  od_mplus_shifter_ls:1;
        RBus_UInt32  od_line_buf_rme_0:1;
        RBus_UInt32  od_line_buf_rme_1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  od_mplus_shifter_rme:1;
        RBus_UInt32  od_line_buf_rm_0:4;
        RBus_UInt32  od_line_buf_rm_1:4;
        RBus_UInt32  od_line_buf_test1_0:1;
        RBus_UInt32  od_line_buf_test1_1:1;
        RBus_UInt32  od_mplus_shifter_test1:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  od_mplus_shifter_rm:4;
        RBus_UInt32  res4:2;
    };
}od_od_bist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_4:1;
        RBus_UInt32  ls_5:1;
        RBus_UInt32  ls_6:1;
        RBus_UInt32  ls_7:1;
        RBus_UInt32  rme_4:1;
        RBus_UInt32  rme_5:1;
        RBus_UInt32  rme_6:1;
        RBus_UInt32  rme_7:1;
        RBus_UInt32  rm_4:4;
        RBus_UInt32  rm_5:4;
        RBus_UInt32  rm_6:4;
        RBus_UInt32  rm_7:4;
        RBus_UInt32  res1:8;
    };
}od_od_bist_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_ymode_en:1;
        RBus_UInt32  od_ymode_sat_en:1;
        RBus_UInt32  od_ymode_debug_en:2;
        RBus_UInt32  r_coeff:8;
        RBus_UInt32  g_coeff:8;
        RBus_UInt32  b_coeff:8;
        RBus_UInt32  res1:4;
    };
}od_ymode_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sat_gray2rgb_en:1;
        RBus_UInt32  sat_gray2cmy_en:1;
        RBus_UInt32  sat_color2gray_en:1;
        RBus_UInt32  sat_y_diff_pos_en:1;
        RBus_UInt32  sat_y_diff_neg_en:1;
        RBus_UInt32  sat_r_en:1;
        RBus_UInt32  sat_g_en:1;
        RBus_UInt32  sat_b_en:1;
        RBus_UInt32  sat_c_en:1;
        RBus_UInt32  sat_m_en:1;
        RBus_UInt32  sat_y_en:1;
        RBus_UInt32  sat_offset_clamp_en:1;
        RBus_UInt32  dummy1802cbc4_19_12:8;
        RBus_UInt32  sat_r_diff_th:4;
        RBus_UInt32  sat_g_diff_th:4;
        RBus_UInt32  sat_b_diff_th:4;
    };
}od_ymode_sat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sat_rg_diff_th:6;
        RBus_UInt32  sat_gb_diff_th:6;
        RBus_UInt32  sat_br_diff_th:6;
        RBus_UInt32  sat_diff_th_factor:3;
        RBus_UInt32  res1:3;
        RBus_UInt32  sat_color2gray_th:6;
        RBus_UInt32  res2:2;
    };
}od_ymode_sat_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sat_gray2r_offset_gain:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  sat_gray2g_offset_gain:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  sat_gray2b_offset_gain:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  sat_gray2c_offset_gain:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  sat_gray2m_offset_gain:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  sat_gray2y_offset_gain:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  sat_color2gray_offset_gain:3;
        RBus_UInt32  res7:5;
    };
}od_ymode_sat_offset_gain_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_diff_lo_th:8;
        RBus_UInt32  y_diff_hi_th:8;
        RBus_UInt32  offset_lo_th:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  offset_hi_th:6;
        RBus_UInt32  res2:2;
    };
}od_ymode_sat_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_diff_lo_th_color2gray:8;
        RBus_UInt32  y_diff_hi_th_color2gray:8;
        RBus_UInt32  offset_lo_th_color2gray:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  offset_hi_th_color2gray:6;
        RBus_UInt32  res2:2;
    };
}od_ymode_sat_y_color2gray_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  offset_slope:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  offset_slope_color2gray:14;
        RBus_UInt32  res2:2;
    };
}od_ymode_sat_y_slope_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rgb2y_lpf_c0:4;
        RBus_UInt32  rgb2y_lpf_c1:3;
        RBus_UInt32  dummy1802cbdc_31_7:25;
    };
}od_ymode_lpf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  odd_ch_r:2;
        RBus_UInt32  odd_ch_g:2;
        RBus_UInt32  odd_ch_b:2;
        RBus_UInt32  odd_ch_w:2;
        RBus_UInt32  even_ch_r:2;
        RBus_UInt32  even_ch_g:2;
        RBus_UInt32  even_ch_b:2;
        RBus_UInt32  even_ch_w:2;
        RBus_UInt32  od_input_format:1;
        RBus_UInt32  res1:15;
    };
}od_od_rgbw_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_ymode_rgbw_en:1;
        RBus_UInt32  od_ymode_sat_rgbw2rgb_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  w_coeff:8;
        RBus_UInt32  rgbw_c0:4;
        RBus_UInt32  rgbw_c1:4;
        RBus_UInt32  rgbw_c2:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  rgbw_c3:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  rgbw_c4:3;
        RBus_UInt32  res4:1;
    };
}od_od_rgbw2y_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_hhf_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  od_hhf_gain:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  od_hhf_th1:3;
        RBus_UInt32  od_hhf_th2:3;
        RBus_UInt32  od_hhf_max:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  od_hhf_w1:5;
        RBus_UInt32  od_hhf_w2:5;
    };
}od_od_hhf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  od_hhf_statistic:32;
    };
}od_od_hhf_stat_RBUS;




#endif 


#endif 
