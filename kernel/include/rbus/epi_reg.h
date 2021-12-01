/**
* @file Merlin5-DesignSpec-EPI
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_EPI_REG_H_
#define _RBUS_EPI_REG_H_

#include "rbus_types.h"



//  EPI Register Address
#define  EPI_EPI_PACKET_CTR1_0_0                                                0x18026000
#define  EPI_EPI_PACKET_CTR1_0_0_reg_addr                                        "0xB8026000"
#define  EPI_EPI_PACKET_CTR1_0_0_reg                                             0xB8026000
#define  EPI_EPI_PACKET_CTR1_0_0_inst_addr                                       "0x0000"
#define  set_EPI_EPI_PACKET_CTR1_0_0_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_PACKET_CTR1_0_0_reg)=data)
#define  get_EPI_EPI_PACKET_CTR1_0_0_reg                                         (*((volatile unsigned int*)EPI_EPI_PACKET_CTR1_0_0_reg))
#define  EPI_EPI_PACKET_CTR1_0_0_phase2_preamble_num_0_shift                     (16)
#define  EPI_EPI_PACKET_CTR1_0_0_phase1_preamble_num_0_shift                     (0)
#define  EPI_EPI_PACKET_CTR1_0_0_phase2_preamble_num_0_mask                      (0x000F0000)
#define  EPI_EPI_PACKET_CTR1_0_0_phase1_preamble_num_0_mask                      (0x0000000F)
#define  EPI_EPI_PACKET_CTR1_0_0_phase2_preamble_num_0(data)                     (0x000F0000&((data)<<16))
#define  EPI_EPI_PACKET_CTR1_0_0_phase1_preamble_num_0(data)                     (0x0000000F&(data))
#define  EPI_EPI_PACKET_CTR1_0_0_get_phase2_preamble_num_0(data)                 ((0x000F0000&(data))>>16)
#define  EPI_EPI_PACKET_CTR1_0_0_get_phase1_preamble_num_0(data)                 (0x0000000F&(data))

#define  EPI_EPI_PACKET_CTRL                                                    0x18026060
#define  EPI_EPI_PACKET_CTRL_reg_addr                                            "0xB8026060"
#define  EPI_EPI_PACKET_CTRL_reg                                                 0xB8026060
#define  EPI_EPI_PACKET_CTRL_inst_addr                                           "0x0001"
#define  set_EPI_EPI_PACKET_CTRL_reg(data)                                       (*((volatile unsigned int*)EPI_EPI_PACKET_CTRL_reg)=data)
#define  get_EPI_EPI_PACKET_CTRL_reg                                             (*((volatile unsigned int*)EPI_EPI_PACKET_CTRL_reg))
#define  EPI_EPI_PACKET_CTRL_epi_data_unfl_shift                                 (31)
#define  EPI_EPI_PACKET_CTRL_epi_data_unfl_clr_shift                             (30)
#define  EPI_EPI_PACKET_CTRL_epi_bit_mode_shift                                  (27)
#define  EPI_EPI_PACKET_CTRL_data_mode_change_shift                              (23)
#define  EPI_EPI_PACKET_CTRL_lock_dmy_line_en_shift                              (3)
#define  EPI_EPI_PACKET_CTRL_epi_version_shift                                   (0)
#define  EPI_EPI_PACKET_CTRL_epi_data_unfl_mask                                  (0x80000000)
#define  EPI_EPI_PACKET_CTRL_epi_data_unfl_clr_mask                              (0x40000000)
#define  EPI_EPI_PACKET_CTRL_epi_bit_mode_mask                                   (0x18000000)
#define  EPI_EPI_PACKET_CTRL_data_mode_change_mask                               (0x00800000)
#define  EPI_EPI_PACKET_CTRL_lock_dmy_line_en_mask                               (0x00000008)
#define  EPI_EPI_PACKET_CTRL_epi_version_mask                                    (0x00000007)
#define  EPI_EPI_PACKET_CTRL_epi_data_unfl(data)                                 (0x80000000&((data)<<31))
#define  EPI_EPI_PACKET_CTRL_epi_data_unfl_clr(data)                             (0x40000000&((data)<<30))
#define  EPI_EPI_PACKET_CTRL_epi_bit_mode(data)                                  (0x18000000&((data)<<27))
#define  EPI_EPI_PACKET_CTRL_data_mode_change(data)                              (0x00800000&((data)<<23))
#define  EPI_EPI_PACKET_CTRL_lock_dmy_line_en(data)                              (0x00000008&((data)<<3))
#define  EPI_EPI_PACKET_CTRL_epi_version(data)                                   (0x00000007&(data))
#define  EPI_EPI_PACKET_CTRL_get_epi_data_unfl(data)                             ((0x80000000&(data))>>31)
#define  EPI_EPI_PACKET_CTRL_get_epi_data_unfl_clr(data)                         ((0x40000000&(data))>>30)
#define  EPI_EPI_PACKET_CTRL_get_epi_bit_mode(data)                              ((0x18000000&(data))>>27)
#define  EPI_EPI_PACKET_CTRL_get_data_mode_change(data)                          ((0x00800000&(data))>>23)
#define  EPI_EPI_PACKET_CTRL_get_lock_dmy_line_en(data)                          ((0x00000008&(data))>>3)
#define  EPI_EPI_PACKET_CTRL_get_epi_version(data)                               (0x00000007&(data))

#define  EPI_EPI_CLOCK_CTRL0                                                    0x18026064
#define  EPI_EPI_CLOCK_CTRL0_reg_addr                                            "0xB8026064"
#define  EPI_EPI_CLOCK_CTRL0_reg                                                 0xB8026064
#define  EPI_EPI_CLOCK_CTRL0_inst_addr                                           "0x0002"
#define  set_EPI_EPI_CLOCK_CTRL0_reg(data)                                       (*((volatile unsigned int*)EPI_EPI_CLOCK_CTRL0_reg)=data)
#define  get_EPI_EPI_CLOCK_CTRL0_reg                                             (*((volatile unsigned int*)EPI_EPI_CLOCK_CTRL0_reg))
#define  EPI_EPI_CLOCK_CTRL0_force_ctsfifo_rstn_epi_shift                        (31)
#define  EPI_EPI_CLOCK_CTRL0_ctrl5_en_shift                                      (30)
#define  EPI_EPI_CLOCK_CTRL0_ctrl4_en_shift                                      (29)
#define  EPI_EPI_CLOCK_CTRL0_epi_reset_shift                                     (28)
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_int_en_shift                               (27)
#define  EPI_EPI_CLOCK_CTRL0_ctrl_start_en_shift                                 (26)
#define  EPI_EPI_CLOCK_CTRL0_ctrl3_en_shift                                      (25)
#define  EPI_EPI_CLOCK_CTRL0_data_start_en_shift                                 (24)
#define  EPI_EPI_CLOCK_CTRL0_lock_wait_vs_en_shift                               (4)
#define  EPI_EPI_CLOCK_CTRL0_hw_lock_shift                                       (3)
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_shift                                      (2)
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_sel_shift                                  (1)
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_change_shift                               (0)
#define  EPI_EPI_CLOCK_CTRL0_force_ctsfifo_rstn_epi_mask                         (0x80000000)
#define  EPI_EPI_CLOCK_CTRL0_ctrl5_en_mask                                       (0x40000000)
#define  EPI_EPI_CLOCK_CTRL0_ctrl4_en_mask                                       (0x20000000)
#define  EPI_EPI_CLOCK_CTRL0_epi_reset_mask                                      (0x10000000)
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_int_en_mask                                (0x08000000)
#define  EPI_EPI_CLOCK_CTRL0_ctrl_start_en_mask                                  (0x04000000)
#define  EPI_EPI_CLOCK_CTRL0_ctrl3_en_mask                                       (0x02000000)
#define  EPI_EPI_CLOCK_CTRL0_data_start_en_mask                                  (0x01000000)
#define  EPI_EPI_CLOCK_CTRL0_lock_wait_vs_en_mask                                (0x00000010)
#define  EPI_EPI_CLOCK_CTRL0_hw_lock_mask                                        (0x00000008)
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_mask                                       (0x00000004)
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_sel_mask                                   (0x00000002)
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_change_mask                                (0x00000001)
#define  EPI_EPI_CLOCK_CTRL0_force_ctsfifo_rstn_epi(data)                        (0x80000000&((data)<<31))
#define  EPI_EPI_CLOCK_CTRL0_ctrl5_en(data)                                      (0x40000000&((data)<<30))
#define  EPI_EPI_CLOCK_CTRL0_ctrl4_en(data)                                      (0x20000000&((data)<<29))
#define  EPI_EPI_CLOCK_CTRL0_epi_reset(data)                                     (0x10000000&((data)<<28))
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_int_en(data)                               (0x08000000&((data)<<27))
#define  EPI_EPI_CLOCK_CTRL0_ctrl_start_en(data)                                 (0x04000000&((data)<<26))
#define  EPI_EPI_CLOCK_CTRL0_ctrl3_en(data)                                      (0x02000000&((data)<<25))
#define  EPI_EPI_CLOCK_CTRL0_data_start_en(data)                                 (0x01000000&((data)<<24))
#define  EPI_EPI_CLOCK_CTRL0_lock_wait_vs_en(data)                               (0x00000010&((data)<<4))
#define  EPI_EPI_CLOCK_CTRL0_hw_lock(data)                                       (0x00000008&((data)<<3))
#define  EPI_EPI_CLOCK_CTRL0_epi_lock(data)                                      (0x00000004&((data)<<2))
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_sel(data)                                  (0x00000002&((data)<<1))
#define  EPI_EPI_CLOCK_CTRL0_epi_lock_change(data)                               (0x00000001&(data))
#define  EPI_EPI_CLOCK_CTRL0_get_force_ctsfifo_rstn_epi(data)                    ((0x80000000&(data))>>31)
#define  EPI_EPI_CLOCK_CTRL0_get_ctrl5_en(data)                                  ((0x40000000&(data))>>30)
#define  EPI_EPI_CLOCK_CTRL0_get_ctrl4_en(data)                                  ((0x20000000&(data))>>29)
#define  EPI_EPI_CLOCK_CTRL0_get_epi_reset(data)                                 ((0x10000000&(data))>>28)
#define  EPI_EPI_CLOCK_CTRL0_get_epi_lock_int_en(data)                           ((0x08000000&(data))>>27)
#define  EPI_EPI_CLOCK_CTRL0_get_ctrl_start_en(data)                             ((0x04000000&(data))>>26)
#define  EPI_EPI_CLOCK_CTRL0_get_ctrl3_en(data)                                  ((0x02000000&(data))>>25)
#define  EPI_EPI_CLOCK_CTRL0_get_data_start_en(data)                             ((0x01000000&(data))>>24)
#define  EPI_EPI_CLOCK_CTRL0_get_lock_wait_vs_en(data)                           ((0x00000010&(data))>>4)
#define  EPI_EPI_CLOCK_CTRL0_get_hw_lock(data)                                   ((0x00000008&(data))>>3)
#define  EPI_EPI_CLOCK_CTRL0_get_epi_lock(data)                                  ((0x00000004&(data))>>2)
#define  EPI_EPI_CLOCK_CTRL0_get_epi_lock_sel(data)                              ((0x00000002&(data))>>1)
#define  EPI_EPI_CLOCK_CTRL0_get_epi_lock_change(data)                           (0x00000001&(data))

#define  EPI_EPI_DGB_READ                                                       0x18026068
#define  EPI_EPI_DGB_READ_reg_addr                                               "0xB8026068"
#define  EPI_EPI_DGB_READ_reg                                                    0xB8026068
#define  EPI_EPI_DGB_READ_inst_addr                                              "0x0003"
#define  set_EPI_EPI_DGB_READ_reg(data)                                          (*((volatile unsigned int*)EPI_EPI_DGB_READ_reg)=data)
#define  get_EPI_EPI_DGB_READ_reg                                                (*((volatile unsigned int*)EPI_EPI_DGB_READ_reg))
#define  EPI_EPI_DGB_READ_epi_tst_out_shift                                      (0)
#define  EPI_EPI_DGB_READ_epi_tst_out_mask                                       (0xFFFFFFFF)
#define  EPI_EPI_DGB_READ_epi_tst_out(data)                                      (0xFFFFFFFF&(data))
#define  EPI_EPI_DGB_READ_get_epi_tst_out(data)                                  (0xFFFFFFFF&(data))

#define  EPI_EPI_PORT_OPTION_CTRL                                               0x1802606C
#define  EPI_EPI_PORT_OPTION_CTRL_reg_addr                                       "0xB802606C"
#define  EPI_EPI_PORT_OPTION_CTRL_reg                                            0xB802606C
#define  EPI_EPI_PORT_OPTION_CTRL_inst_addr                                      "0x0004"
#define  set_EPI_EPI_PORT_OPTION_CTRL_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_PORT_OPTION_CTRL_reg)=data)
#define  get_EPI_EPI_PORT_OPTION_CTRL_reg                                        (*((volatile unsigned int*)EPI_EPI_PORT_OPTION_CTRL_reg))
#define  EPI_EPI_PORT_OPTION_CTRL_two_pixel_mode_shift                           (31)
#define  EPI_EPI_PORT_OPTION_CTRL_ext_subpixel_mode_shift                        (30)
#define  EPI_EPI_PORT_OPTION_CTRL_port_num_shift                                 (20)
#define  EPI_EPI_PORT_OPTION_CTRL_epi_enable_shift                               (16)
#define  EPI_EPI_PORT_OPTION_CTRL_back_value_shift                               (14)
#define  EPI_EPI_PORT_OPTION_CTRL_front_value_shift                              (12)
#define  EPI_EPI_PORT_OPTION_CTRL_ceds_28s_soe_sel_en_shift                      (9)
#define  EPI_EPI_PORT_OPTION_CTRL_two_pixel_mode_mask                            (0x80000000)
#define  EPI_EPI_PORT_OPTION_CTRL_ext_subpixel_mode_mask                         (0x40000000)
#define  EPI_EPI_PORT_OPTION_CTRL_port_num_mask                                  (0x01F00000)
#define  EPI_EPI_PORT_OPTION_CTRL_epi_enable_mask                                (0x00010000)
#define  EPI_EPI_PORT_OPTION_CTRL_back_value_mask                                (0x0000C000)
#define  EPI_EPI_PORT_OPTION_CTRL_front_value_mask                               (0x00003000)
#define  EPI_EPI_PORT_OPTION_CTRL_ceds_28s_soe_sel_en_mask                       (0x00000200)
#define  EPI_EPI_PORT_OPTION_CTRL_two_pixel_mode(data)                           (0x80000000&((data)<<31))
#define  EPI_EPI_PORT_OPTION_CTRL_ext_subpixel_mode(data)                        (0x40000000&((data)<<30))
#define  EPI_EPI_PORT_OPTION_CTRL_port_num(data)                                 (0x01F00000&((data)<<20))
#define  EPI_EPI_PORT_OPTION_CTRL_epi_enable(data)                               (0x00010000&((data)<<16))
#define  EPI_EPI_PORT_OPTION_CTRL_back_value(data)                               (0x0000C000&((data)<<14))
#define  EPI_EPI_PORT_OPTION_CTRL_front_value(data)                              (0x00003000&((data)<<12))
#define  EPI_EPI_PORT_OPTION_CTRL_ceds_28s_soe_sel_en(data)                      (0x00000200&((data)<<9))
#define  EPI_EPI_PORT_OPTION_CTRL_get_two_pixel_mode(data)                       ((0x80000000&(data))>>31)
#define  EPI_EPI_PORT_OPTION_CTRL_get_ext_subpixel_mode(data)                    ((0x40000000&(data))>>30)
#define  EPI_EPI_PORT_OPTION_CTRL_get_port_num(data)                             ((0x01F00000&(data))>>20)
#define  EPI_EPI_PORT_OPTION_CTRL_get_epi_enable(data)                           ((0x00010000&(data))>>16)
#define  EPI_EPI_PORT_OPTION_CTRL_get_back_value(data)                           ((0x0000C000&(data))>>14)
#define  EPI_EPI_PORT_OPTION_CTRL_get_front_value(data)                          ((0x00003000&(data))>>12)
#define  EPI_EPI_PORT_OPTION_CTRL_get_ceds_28s_soe_sel_en(data)                  ((0x00000200&(data))>>9)

#define  EPI_EPI_CMPI_FRONT                                                     0x18026070
#define  EPI_EPI_CMPI_FRONT_reg_addr                                             "0xB8026070"
#define  EPI_EPI_CMPI_FRONT_reg                                                  0xB8026070
#define  EPI_EPI_CMPI_FRONT_inst_addr                                            "0x0005"
#define  set_EPI_EPI_CMPI_FRONT_reg(data)                                        (*((volatile unsigned int*)EPI_EPI_CMPI_FRONT_reg)=data)
#define  get_EPI_EPI_CMPI_FRONT_reg                                              (*((volatile unsigned int*)EPI_EPI_CMPI_FRONT_reg))
#define  EPI_EPI_CMPI_FRONT_epi_dbg_en_shift                                     (31)
#define  EPI_EPI_CMPI_FRONT_epi_otpin_ver_sel_shift                              (28)
#define  EPI_EPI_CMPI_FRONT_dummy_24_20_shift                                    (20)
#define  EPI_EPI_CMPI_FRONT_epi_otpin_port_sel_shift                             (12)
#define  EPI_EPI_CMPI_FRONT_front_cmd_shift                                      (8)
#define  EPI_EPI_CMPI_FRONT_front_data_shift                                     (4)
#define  EPI_EPI_CMPI_FRONT_front_rlc_shift                                      (0)
#define  EPI_EPI_CMPI_FRONT_epi_dbg_en_mask                                      (0x80000000)
#define  EPI_EPI_CMPI_FRONT_epi_otpin_ver_sel_mask                               (0x10000000)
#define  EPI_EPI_CMPI_FRONT_dummy_24_20_mask                                     (0x01F00000)
#define  EPI_EPI_CMPI_FRONT_epi_otpin_port_sel_mask                              (0x0001F000)
#define  EPI_EPI_CMPI_FRONT_front_cmd_mask                                       (0x00000700)
#define  EPI_EPI_CMPI_FRONT_front_data_mask                                      (0x00000070)
#define  EPI_EPI_CMPI_FRONT_front_rlc_mask                                       (0x00000007)
#define  EPI_EPI_CMPI_FRONT_epi_dbg_en(data)                                     (0x80000000&((data)<<31))
#define  EPI_EPI_CMPI_FRONT_epi_otpin_ver_sel(data)                              (0x10000000&((data)<<28))
#define  EPI_EPI_CMPI_FRONT_dummy_24_20(data)                                    (0x01F00000&((data)<<20))
#define  EPI_EPI_CMPI_FRONT_epi_otpin_port_sel(data)                             (0x0001F000&((data)<<12))
#define  EPI_EPI_CMPI_FRONT_front_cmd(data)                                      (0x00000700&((data)<<8))
#define  EPI_EPI_CMPI_FRONT_front_data(data)                                     (0x00000070&((data)<<4))
#define  EPI_EPI_CMPI_FRONT_front_rlc(data)                                      (0x00000007&(data))
#define  EPI_EPI_CMPI_FRONT_get_epi_dbg_en(data)                                 ((0x80000000&(data))>>31)
#define  EPI_EPI_CMPI_FRONT_get_epi_otpin_ver_sel(data)                          ((0x10000000&(data))>>28)
#define  EPI_EPI_CMPI_FRONT_get_dummy_24_20(data)                                ((0x01F00000&(data))>>20)
#define  EPI_EPI_CMPI_FRONT_get_epi_otpin_port_sel(data)                         ((0x0001F000&(data))>>12)
#define  EPI_EPI_CMPI_FRONT_get_front_cmd(data)                                  ((0x00000700&(data))>>8)
#define  EPI_EPI_CMPI_FRONT_get_front_data(data)                                 ((0x00000070&(data))>>4)
#define  EPI_EPI_CMPI_FRONT_get_front_rlc(data)                                  (0x00000007&(data))

#define  EPI_CMPI_DUMMY_COLOR_0                                                 0x18026080
#define  EPI_CMPI_DUMMY_COLOR_0_reg_addr                                         "0xB8026080"
#define  EPI_CMPI_DUMMY_COLOR_0_reg                                              0xB8026080
#define  EPI_CMPI_DUMMY_COLOR_0_inst_addr                                        "0x0006"
#define  set_EPI_CMPI_DUMMY_COLOR_0_reg(data)                                    (*((volatile unsigned int*)EPI_CMPI_DUMMY_COLOR_0_reg)=data)
#define  get_EPI_CMPI_DUMMY_COLOR_0_reg                                          (*((volatile unsigned int*)EPI_CMPI_DUMMY_COLOR_0_reg))
#define  EPI_CMPI_DUMMY_COLOR_0_dummy_color_0_shift                              (0)
#define  EPI_CMPI_DUMMY_COLOR_0_dummy_color_0_mask                               (0x3FFFFFFF)
#define  EPI_CMPI_DUMMY_COLOR_0_dummy_color_0(data)                              (0x3FFFFFFF&(data))
#define  EPI_CMPI_DUMMY_COLOR_0_get_dummy_color_0(data)                          (0x3FFFFFFF&(data))

#define  EPI_CMPI_DUMMY_COLOR_1                                                 0x18026084
#define  EPI_CMPI_DUMMY_COLOR_1_reg_addr                                         "0xB8026084"
#define  EPI_CMPI_DUMMY_COLOR_1_reg                                              0xB8026084
#define  EPI_CMPI_DUMMY_COLOR_1_inst_addr                                        "0x0007"
#define  set_EPI_CMPI_DUMMY_COLOR_1_reg(data)                                    (*((volatile unsigned int*)EPI_CMPI_DUMMY_COLOR_1_reg)=data)
#define  get_EPI_CMPI_DUMMY_COLOR_1_reg                                          (*((volatile unsigned int*)EPI_CMPI_DUMMY_COLOR_1_reg))
#define  EPI_CMPI_DUMMY_COLOR_1_dummy_color_1_shift                              (0)
#define  EPI_CMPI_DUMMY_COLOR_1_dummy_color_1_mask                               (0x3FFFFFFF)
#define  EPI_CMPI_DUMMY_COLOR_1_dummy_color_1(data)                              (0x3FFFFFFF&(data))
#define  EPI_CMPI_DUMMY_COLOR_1_get_dummy_color_1(data)                          (0x3FFFFFFF&(data))

#define  EPI_CMPI_DUMMY_COLOR_2                                                 0x18026088
#define  EPI_CMPI_DUMMY_COLOR_2_reg_addr                                         "0xB8026088"
#define  EPI_CMPI_DUMMY_COLOR_2_reg                                              0xB8026088
#define  EPI_CMPI_DUMMY_COLOR_2_inst_addr                                        "0x0008"
#define  set_EPI_CMPI_DUMMY_COLOR_2_reg(data)                                    (*((volatile unsigned int*)EPI_CMPI_DUMMY_COLOR_2_reg)=data)
#define  get_EPI_CMPI_DUMMY_COLOR_2_reg                                          (*((volatile unsigned int*)EPI_CMPI_DUMMY_COLOR_2_reg))
#define  EPI_CMPI_DUMMY_COLOR_2_dummy_color_2_shift                              (0)
#define  EPI_CMPI_DUMMY_COLOR_2_dummy_color_2_mask                               (0x3FFFFFFF)
#define  EPI_CMPI_DUMMY_COLOR_2_dummy_color_2(data)                              (0x3FFFFFFF&(data))
#define  EPI_CMPI_DUMMY_COLOR_2_get_dummy_color_2(data)                          (0x3FFFFFFF&(data))

#define  EPI_CMPI_DUMMY_COLOR_3                                                 0x1802608C
#define  EPI_CMPI_DUMMY_COLOR_3_reg_addr                                         "0xB802608C"
#define  EPI_CMPI_DUMMY_COLOR_3_reg                                              0xB802608C
#define  EPI_CMPI_DUMMY_COLOR_3_inst_addr                                        "0x0009"
#define  set_EPI_CMPI_DUMMY_COLOR_3_reg(data)                                    (*((volatile unsigned int*)EPI_CMPI_DUMMY_COLOR_3_reg)=data)
#define  get_EPI_CMPI_DUMMY_COLOR_3_reg                                          (*((volatile unsigned int*)EPI_CMPI_DUMMY_COLOR_3_reg))
#define  EPI_CMPI_DUMMY_COLOR_3_dummy_color_3_shift                              (0)
#define  EPI_CMPI_DUMMY_COLOR_3_dummy_color_3_mask                               (0x3FFFFFFF)
#define  EPI_CMPI_DUMMY_COLOR_3_dummy_color_3(data)                              (0x3FFFFFFF&(data))
#define  EPI_CMPI_DUMMY_COLOR_3_get_dummy_color_3(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_CRC_CTRL_0                                                     0x18026090
#define  EPI_EPI_CRC_CTRL_0_reg_addr                                             "0xB8026090"
#define  EPI_EPI_CRC_CTRL_0_reg                                                  0xB8026090
#define  EPI_EPI_CRC_CTRL_0_inst_addr                                            "0x000A"
#define  set_EPI_EPI_CRC_CTRL_0_reg(data)                                        (*((volatile unsigned int*)EPI_EPI_CRC_CTRL_0_reg)=data)
#define  get_EPI_EPI_CRC_CTRL_0_reg                                              (*((volatile unsigned int*)EPI_EPI_CRC_CTRL_0_reg))
#define  EPI_EPI_CRC_CTRL_0_crc_mismatch_count_shift                             (20)
#define  EPI_EPI_CRC_CTRL_0_crc_port_sel_shift                                   (4)
#define  EPI_EPI_CRC_CTRL_0_dummy_3_shift                                        (3)
#define  EPI_EPI_CRC_CTRL_0_crc_mismatch_clear_shift                             (2)
#define  EPI_EPI_CRC_CTRL_0_crc_conti_shift                                      (1)
#define  EPI_EPI_CRC_CTRL_0_crc_start_shift                                      (0)
#define  EPI_EPI_CRC_CTRL_0_crc_mismatch_count_mask                              (0xFFF00000)
#define  EPI_EPI_CRC_CTRL_0_crc_port_sel_mask                                    (0x000FFFF0)
#define  EPI_EPI_CRC_CTRL_0_dummy_3_mask                                         (0x00000008)
#define  EPI_EPI_CRC_CTRL_0_crc_mismatch_clear_mask                              (0x00000004)
#define  EPI_EPI_CRC_CTRL_0_crc_conti_mask                                       (0x00000002)
#define  EPI_EPI_CRC_CTRL_0_crc_start_mask                                       (0x00000001)
#define  EPI_EPI_CRC_CTRL_0_crc_mismatch_count(data)                             (0xFFF00000&((data)<<20))
#define  EPI_EPI_CRC_CTRL_0_crc_port_sel(data)                                   (0x000FFFF0&((data)<<4))
#define  EPI_EPI_CRC_CTRL_0_dummy_3(data)                                        (0x00000008&((data)<<3))
#define  EPI_EPI_CRC_CTRL_0_crc_mismatch_clear(data)                             (0x00000004&((data)<<2))
#define  EPI_EPI_CRC_CTRL_0_crc_conti(data)                                      (0x00000002&((data)<<1))
#define  EPI_EPI_CRC_CTRL_0_crc_start(data)                                      (0x00000001&(data))
#define  EPI_EPI_CRC_CTRL_0_get_crc_mismatch_count(data)                         ((0xFFF00000&(data))>>20)
#define  EPI_EPI_CRC_CTRL_0_get_crc_port_sel(data)                               ((0x000FFFF0&(data))>>4)
#define  EPI_EPI_CRC_CTRL_0_get_dummy_3(data)                                    ((0x00000008&(data))>>3)
#define  EPI_EPI_CRC_CTRL_0_get_crc_mismatch_clear(data)                         ((0x00000004&(data))>>2)
#define  EPI_EPI_CRC_CTRL_0_get_crc_conti(data)                                  ((0x00000002&(data))>>1)
#define  EPI_EPI_CRC_CTRL_0_get_crc_start(data)                                  (0x00000001&(data))

#define  EPI_EPI_CRC_CTRL_1                                                     0x18026094
#define  EPI_EPI_CRC_CTRL_1_reg_addr                                             "0xB8026094"
#define  EPI_EPI_CRC_CTRL_1_reg                                                  0xB8026094
#define  EPI_EPI_CRC_CTRL_1_inst_addr                                            "0x000B"
#define  set_EPI_EPI_CRC_CTRL_1_reg(data)                                        (*((volatile unsigned int*)EPI_EPI_CRC_CTRL_1_reg)=data)
#define  get_EPI_EPI_CRC_CTRL_1_reg                                              (*((volatile unsigned int*)EPI_EPI_CRC_CTRL_1_reg))
#define  EPI_EPI_CRC_CTRL_1_crc_result_shift                                     (0)
#define  EPI_EPI_CRC_CTRL_1_crc_result_mask                                      (0xFFFFFFFF)
#define  EPI_EPI_CRC_CTRL_1_crc_result(data)                                     (0xFFFFFFFF&(data))
#define  EPI_EPI_CRC_CTRL_1_get_crc_result(data)                                 (0xFFFFFFFF&(data))

#define  EPI_EPI_CRC_CTRL_2                                                     0x18026098
#define  EPI_EPI_CRC_CTRL_2_reg_addr                                             "0xB8026098"
#define  EPI_EPI_CRC_CTRL_2_reg                                                  0xB8026098
#define  EPI_EPI_CRC_CTRL_2_inst_addr                                            "0x000C"
#define  set_EPI_EPI_CRC_CTRL_2_reg(data)                                        (*((volatile unsigned int*)EPI_EPI_CRC_CTRL_2_reg)=data)
#define  get_EPI_EPI_CRC_CTRL_2_reg                                              (*((volatile unsigned int*)EPI_EPI_CRC_CTRL_2_reg))
#define  EPI_EPI_CRC_CTRL_2_crc_golden_shift                                     (0)
#define  EPI_EPI_CRC_CTRL_2_crc_golden_mask                                      (0xFFFFFFFF)
#define  EPI_EPI_CRC_CTRL_2_crc_golden(data)                                     (0xFFFFFFFF&(data))
#define  EPI_EPI_CRC_CTRL_2_get_crc_golden(data)                                 (0xFFFFFFFF&(data))

#define  EPI_EPI_DATA_SRC                                                       0x1802609C
#define  EPI_EPI_DATA_SRC_reg_addr                                               "0xB802609C"
#define  EPI_EPI_DATA_SRC_reg                                                    0xB802609C
#define  EPI_EPI_DATA_SRC_inst_addr                                              "0x000D"
#define  set_EPI_EPI_DATA_SRC_reg(data)                                          (*((volatile unsigned int*)EPI_EPI_DATA_SRC_reg)=data)
#define  get_EPI_EPI_DATA_SRC_reg                                                (*((volatile unsigned int*)EPI_EPI_DATA_SRC_reg))
#define  EPI_EPI_DATA_SRC_epi_src_sel_shift                                      (30)
#define  EPI_EPI_DATA_SRC_epi_src_data_shift                                     (0)
#define  EPI_EPI_DATA_SRC_epi_src_sel_mask                                       (0x40000000)
#define  EPI_EPI_DATA_SRC_epi_src_data_mask                                      (0x3FFFFFFF)
#define  EPI_EPI_DATA_SRC_epi_src_sel(data)                                      (0x40000000&((data)<<30))
#define  EPI_EPI_DATA_SRC_epi_src_data(data)                                     (0x3FFFFFFF&(data))
#define  EPI_EPI_DATA_SRC_get_epi_src_sel(data)                                  ((0x40000000&(data))>>30)
#define  EPI_EPI_DATA_SRC_get_epi_src_data(data)                                 (0x3FFFFFFF&(data))

#define  EPI_EPI_PACKET_CTR1_INV                                                0x180260A4
#define  EPI_EPI_PACKET_CTR1_INV_reg_addr                                        "0xB80260A4"
#define  EPI_EPI_PACKET_CTR1_INV_reg                                             0xB80260A4
#define  EPI_EPI_PACKET_CTR1_INV_inst_addr                                       "0x000E"
#define  set_EPI_EPI_PACKET_CTR1_INV_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_PACKET_CTR1_INV_reg)=data)
#define  get_EPI_EPI_PACKET_CTR1_INV_reg                                         (*((volatile unsigned int*)EPI_EPI_PACKET_CTR1_INV_reg))
#define  EPI_EPI_PACKET_CTR1_INV_inv_table_line_cycle_shift                      (4)
#define  EPI_EPI_PACKET_CTR1_INV_pod2_inv_phase_bypass_shift                     (0)
#define  EPI_EPI_PACKET_CTR1_INV_inv_table_line_cycle_mask                       (0x000001F0)
#define  EPI_EPI_PACKET_CTR1_INV_pod2_inv_phase_bypass_mask                      (0x00000001)
#define  EPI_EPI_PACKET_CTR1_INV_inv_table_line_cycle(data)                      (0x000001F0&((data)<<4))
#define  EPI_EPI_PACKET_CTR1_INV_pod2_inv_phase_bypass(data)                     (0x00000001&(data))
#define  EPI_EPI_PACKET_CTR1_INV_get_inv_table_line_cycle(data)                  ((0x000001F0&(data))>>4)
#define  EPI_EPI_PACKET_CTR1_INV_get_pod2_inv_phase_bypass(data)                 (0x00000001&(data))

#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1                                        0x180260A8
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_reg_addr                                "0xB80260A8"
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_reg                                     0xB80260A8
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inst_addr                               "0x000F"
#define  set_EPI_EPI_PACKET_CTR1_INV_TABLE_1_reg(data)                           (*((volatile unsigned int*)EPI_EPI_PACKET_CTR1_INV_TABLE_1_reg)=data)
#define  get_EPI_EPI_PACKET_CTR1_INV_TABLE_1_reg                                 (*((volatile unsigned int*)EPI_EPI_PACKET_CTR1_INV_TABLE_1_reg))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_1_shift                        (28)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_2_shift                        (24)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_3_shift                        (20)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_4_shift                        (16)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_5_shift                        (12)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_6_shift                        (8)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_7_shift                        (4)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_8_shift                        (0)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_1_mask                         (0xF0000000)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_2_mask                         (0x0F000000)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_3_mask                         (0x00F00000)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_4_mask                         (0x000F0000)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_5_mask                         (0x0000F000)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_6_mask                         (0x00000F00)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_7_mask                         (0x000000F0)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_8_mask                         (0x0000000F)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_1(data)                        (0xF0000000&((data)<<28))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_2(data)                        (0x0F000000&((data)<<24))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_3(data)                        (0x00F00000&((data)<<20))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_4(data)                        (0x000F0000&((data)<<16))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_5(data)                        (0x0000F000&((data)<<12))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_6(data)                        (0x00000F00&((data)<<8))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_7(data)                        (0x000000F0&((data)<<4))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_inv_line_8(data)                        (0x0000000F&(data))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_get_inv_line_1(data)                    ((0xF0000000&(data))>>28)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_get_inv_line_2(data)                    ((0x0F000000&(data))>>24)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_get_inv_line_3(data)                    ((0x00F00000&(data))>>20)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_get_inv_line_4(data)                    ((0x000F0000&(data))>>16)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_get_inv_line_5(data)                    ((0x0000F000&(data))>>12)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_get_inv_line_6(data)                    ((0x00000F00&(data))>>8)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_get_inv_line_7(data)                    ((0x000000F0&(data))>>4)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_1_get_inv_line_8(data)                    (0x0000000F&(data))

#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2                                        0x180260AC
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_reg_addr                                "0xB80260AC"
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_reg                                     0xB80260AC
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inst_addr                               "0x0010"
#define  set_EPI_EPI_PACKET_CTR1_INV_TABLE_2_reg(data)                           (*((volatile unsigned int*)EPI_EPI_PACKET_CTR1_INV_TABLE_2_reg)=data)
#define  get_EPI_EPI_PACKET_CTR1_INV_TABLE_2_reg                                 (*((volatile unsigned int*)EPI_EPI_PACKET_CTR1_INV_TABLE_2_reg))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_9_shift                        (28)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_10_shift                       (24)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_11_shift                       (20)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_12_shift                       (16)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_13_shift                       (12)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_14_shift                       (8)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_15_shift                       (4)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_16_shift                       (0)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_9_mask                         (0xF0000000)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_10_mask                        (0x0F000000)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_11_mask                        (0x00F00000)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_12_mask                        (0x000F0000)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_13_mask                        (0x0000F000)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_14_mask                        (0x00000F00)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_15_mask                        (0x000000F0)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_16_mask                        (0x0000000F)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_9(data)                        (0xF0000000&((data)<<28))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_10(data)                       (0x0F000000&((data)<<24))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_11(data)                       (0x00F00000&((data)<<20))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_12(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_13(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_14(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_15(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_inv_line_16(data)                       (0x0000000F&(data))
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_get_inv_line_9(data)                    ((0xF0000000&(data))>>28)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_get_inv_line_10(data)                   ((0x0F000000&(data))>>24)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_get_inv_line_11(data)                   ((0x00F00000&(data))>>20)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_get_inv_line_12(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_get_inv_line_13(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_get_inv_line_14(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_get_inv_line_15(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_PACKET_CTR1_INV_TABLE_2_get_inv_line_16(data)                   (0x0000000F&(data))

#define  EPI_EPI_CMPI_RLC                                                       0x18026110
#define  EPI_EPI_CMPI_RLC_reg_addr                                               "0xB8026110"
#define  EPI_EPI_CMPI_RLC_reg                                                    0xB8026110
#define  EPI_EPI_CMPI_RLC_inst_addr                                              "0x0011"
#define  set_EPI_EPI_CMPI_RLC_reg(data)                                          (*((volatile unsigned int*)EPI_EPI_CMPI_RLC_reg)=data)
#define  get_EPI_EPI_CMPI_RLC_reg                                                (*((volatile unsigned int*)EPI_EPI_CMPI_RLC_reg))
#define  EPI_EPI_CMPI_RLC_rlc_en_shift                                           (0)
#define  EPI_EPI_CMPI_RLC_rlc_en_mask                                            (0x00000001)
#define  EPI_EPI_CMPI_RLC_rlc_en(data)                                           (0x00000001&(data))
#define  EPI_EPI_CMPI_RLC_get_rlc_en(data)                                       (0x00000001&(data))

#define  EPI_EPI_CMPI_VBT                                                       0x18026114
#define  EPI_EPI_CMPI_VBT_reg_addr                                               "0xB8026114"
#define  EPI_EPI_CMPI_VBT_reg                                                    0xB8026114
#define  EPI_EPI_CMPI_VBT_inst_addr                                              "0x0012"
#define  set_EPI_EPI_CMPI_VBT_reg(data)                                          (*((volatile unsigned int*)EPI_EPI_CMPI_VBT_reg)=data)
#define  get_EPI_EPI_CMPI_VBT_reg                                                (*((volatile unsigned int*)EPI_EPI_CMPI_VBT_reg))
#define  EPI_EPI_CMPI_VBT_clk_training1_sel_shift                                (4)
#define  EPI_EPI_CMPI_VBT_vbt_type_sel_shift                                     (0)
#define  EPI_EPI_CMPI_VBT_clk_training1_sel_mask                                 (0x00000010)
#define  EPI_EPI_CMPI_VBT_vbt_type_sel_mask                                      (0x00000007)
#define  EPI_EPI_CMPI_VBT_clk_training1_sel(data)                                (0x00000010&((data)<<4))
#define  EPI_EPI_CMPI_VBT_vbt_type_sel(data)                                     (0x00000007&(data))
#define  EPI_EPI_CMPI_VBT_get_clk_training1_sel(data)                            ((0x00000010&(data))>>4)
#define  EPI_EPI_CMPI_VBT_get_vbt_type_sel(data)                                 (0x00000007&(data))

#define  EPI_EPI_CMPI_VBT_OPT                                                   0x18026118
#define  EPI_EPI_CMPI_VBT_OPT_reg_addr                                           "0xB8026118"
#define  EPI_EPI_CMPI_VBT_OPT_reg                                                0xB8026118
#define  EPI_EPI_CMPI_VBT_OPT_inst_addr                                          "0x0013"
#define  set_EPI_EPI_CMPI_VBT_OPT_reg(data)                                      (*((volatile unsigned int*)EPI_EPI_CMPI_VBT_OPT_reg)=data)
#define  get_EPI_EPI_CMPI_VBT_OPT_reg                                            (*((volatile unsigned int*)EPI_EPI_CMPI_VBT_OPT_reg))
#define  EPI_EPI_CMPI_VBT_OPT_dummy_1_shift                                      (1)
#define  EPI_EPI_CMPI_VBT_OPT_between_s3_to_ct1_shift                            (0)
#define  EPI_EPI_CMPI_VBT_OPT_dummy_1_mask                                       (0x00000002)
#define  EPI_EPI_CMPI_VBT_OPT_between_s3_to_ct1_mask                             (0x00000001)
#define  EPI_EPI_CMPI_VBT_OPT_dummy_1(data)                                      (0x00000002&((data)<<1))
#define  EPI_EPI_CMPI_VBT_OPT_between_s3_to_ct1(data)                            (0x00000001&(data))
#define  EPI_EPI_CMPI_VBT_OPT_get_dummy_1(data)                                  ((0x00000002&(data))>>1)
#define  EPI_EPI_CMPI_VBT_OPT_get_between_s3_to_ct1(data)                        (0x00000001&(data))

#define  EPI_EPI_SCR_TCON_RST                                                   0x1802617C
#define  EPI_EPI_SCR_TCON_RST_reg_addr                                           "0xB802617C"
#define  EPI_EPI_SCR_TCON_RST_reg                                                0xB802617C
#define  EPI_EPI_SCR_TCON_RST_inst_addr                                          "0x0014"
#define  set_EPI_EPI_SCR_TCON_RST_reg(data)                                      (*((volatile unsigned int*)EPI_EPI_SCR_TCON_RST_reg)=data)
#define  get_EPI_EPI_SCR_TCON_RST_reg                                            (*((volatile unsigned int*)EPI_EPI_SCR_TCON_RST_reg))
#define  EPI_EPI_SCR_TCON_RST_scr_every_line_rst_shift                           (8)
#define  EPI_EPI_SCR_TCON_RST_scr_tcon_source2_shift                             (4)
#define  EPI_EPI_SCR_TCON_RST_scr_tcon_source_shift                              (0)
#define  EPI_EPI_SCR_TCON_RST_scr_every_line_rst_mask                            (0x00000100)
#define  EPI_EPI_SCR_TCON_RST_scr_tcon_source2_mask                              (0x000000F0)
#define  EPI_EPI_SCR_TCON_RST_scr_tcon_source_mask                               (0x0000000F)
#define  EPI_EPI_SCR_TCON_RST_scr_every_line_rst(data)                           (0x00000100&((data)<<8))
#define  EPI_EPI_SCR_TCON_RST_scr_tcon_source2(data)                             (0x000000F0&((data)<<4))
#define  EPI_EPI_SCR_TCON_RST_scr_tcon_source(data)                              (0x0000000F&(data))
#define  EPI_EPI_SCR_TCON_RST_get_scr_every_line_rst(data)                       ((0x00000100&(data))>>8)
#define  EPI_EPI_SCR_TCON_RST_get_scr_tcon_source2(data)                         ((0x000000F0&(data))>>4)
#define  EPI_EPI_SCR_TCON_RST_get_scr_tcon_source(data)                          (0x0000000F&(data))

#define  EPI_EPI_SCR8_CTRL                                                      0x18026180
#define  EPI_EPI_SCR8_CTRL_reg_addr                                              "0xB8026180"
#define  EPI_EPI_SCR8_CTRL_reg                                                   0xB8026180
#define  EPI_EPI_SCR8_CTRL_inst_addr                                             "0x0015"
#define  set_EPI_EPI_SCR8_CTRL_reg(data)                                         (*((volatile unsigned int*)EPI_EPI_SCR8_CTRL_reg)=data)
#define  get_EPI_EPI_SCR8_CTRL_reg                                               (*((volatile unsigned int*)EPI_EPI_SCR8_CTRL_reg))
#define  EPI_EPI_SCR8_CTRL_clk_edge_mode_sel_shift                               (8)
#define  EPI_EPI_SCR8_CTRL_clk_edge_scramble_en_shift                            (5)
#define  EPI_EPI_SCR8_CTRL_hvbp_scramble_en_shift                                (4)
#define  EPI_EPI_SCR8_CTRL_ini_scr8_en_shift                                     (1)
#define  EPI_EPI_SCR8_CTRL_scr8_enable_shift                                     (0)
#define  EPI_EPI_SCR8_CTRL_clk_edge_mode_sel_mask                                (0x00000700)
#define  EPI_EPI_SCR8_CTRL_clk_edge_scramble_en_mask                             (0x00000020)
#define  EPI_EPI_SCR8_CTRL_hvbp_scramble_en_mask                                 (0x00000010)
#define  EPI_EPI_SCR8_CTRL_ini_scr8_en_mask                                      (0x00000002)
#define  EPI_EPI_SCR8_CTRL_scr8_enable_mask                                      (0x00000001)
#define  EPI_EPI_SCR8_CTRL_clk_edge_mode_sel(data)                               (0x00000700&((data)<<8))
#define  EPI_EPI_SCR8_CTRL_clk_edge_scramble_en(data)                            (0x00000020&((data)<<5))
#define  EPI_EPI_SCR8_CTRL_hvbp_scramble_en(data)                                (0x00000010&((data)<<4))
#define  EPI_EPI_SCR8_CTRL_ini_scr8_en(data)                                     (0x00000002&((data)<<1))
#define  EPI_EPI_SCR8_CTRL_scr8_enable(data)                                     (0x00000001&(data))
#define  EPI_EPI_SCR8_CTRL_get_clk_edge_mode_sel(data)                           ((0x00000700&(data))>>8)
#define  EPI_EPI_SCR8_CTRL_get_clk_edge_scramble_en(data)                        ((0x00000020&(data))>>5)
#define  EPI_EPI_SCR8_CTRL_get_hvbp_scramble_en(data)                            ((0x00000010&(data))>>4)
#define  EPI_EPI_SCR8_CTRL_get_ini_scr8_en(data)                                 ((0x00000002&(data))>>1)
#define  EPI_EPI_SCR8_CTRL_get_scr8_enable(data)                                 (0x00000001&(data))

#define  EPI_EPI_SCR8_INI_VAL                                                   0x18026184
#define  EPI_EPI_SCR8_INI_VAL_reg_addr                                           "0xB8026184"
#define  EPI_EPI_SCR8_INI_VAL_reg                                                0xB8026184
#define  EPI_EPI_SCR8_INI_VAL_inst_addr                                          "0x0016"
#define  set_EPI_EPI_SCR8_INI_VAL_reg(data)                                      (*((volatile unsigned int*)EPI_EPI_SCR8_INI_VAL_reg)=data)
#define  get_EPI_EPI_SCR8_INI_VAL_reg                                            (*((volatile unsigned int*)EPI_EPI_SCR8_INI_VAL_reg))
#define  EPI_EPI_SCR8_INI_VAL_scr8_ini_val_shift                                 (0)
#define  EPI_EPI_SCR8_INI_VAL_scr8_ini_val_mask                                  (0x00FFFFFF)
#define  EPI_EPI_SCR8_INI_VAL_scr8_ini_val(data)                                 (0x00FFFFFF&(data))
#define  EPI_EPI_SCR8_INI_VAL_get_scr8_ini_val(data)                             (0x00FFFFFF&(data))

#define  EPI_EPI_SCR10_CTRL                                                     0x18026188
#define  EPI_EPI_SCR10_CTRL_reg_addr                                             "0xB8026188"
#define  EPI_EPI_SCR10_CTRL_reg                                                  0xB8026188
#define  EPI_EPI_SCR10_CTRL_inst_addr                                            "0x0017"
#define  set_EPI_EPI_SCR10_CTRL_reg(data)                                        (*((volatile unsigned int*)EPI_EPI_SCR10_CTRL_reg)=data)
#define  get_EPI_EPI_SCR10_CTRL_reg                                              (*((volatile unsigned int*)EPI_EPI_SCR10_CTRL_reg))
#define  EPI_EPI_SCR10_CTRL_ini_scr10_en_shift                                   (1)
#define  EPI_EPI_SCR10_CTRL_scr10_enable_shift                                   (0)
#define  EPI_EPI_SCR10_CTRL_ini_scr10_en_mask                                    (0x00000002)
#define  EPI_EPI_SCR10_CTRL_scr10_enable_mask                                    (0x00000001)
#define  EPI_EPI_SCR10_CTRL_ini_scr10_en(data)                                   (0x00000002&((data)<<1))
#define  EPI_EPI_SCR10_CTRL_scr10_enable(data)                                   (0x00000001&(data))
#define  EPI_EPI_SCR10_CTRL_get_ini_scr10_en(data)                               ((0x00000002&(data))>>1)
#define  EPI_EPI_SCR10_CTRL_get_scr10_enable(data)                               (0x00000001&(data))

#define  EPI_EPI_SCR10_INI_VAL                                                  0x1802618C
#define  EPI_EPI_SCR10_INI_VAL_reg_addr                                          "0xB802618C"
#define  EPI_EPI_SCR10_INI_VAL_reg                                               0xB802618C
#define  EPI_EPI_SCR10_INI_VAL_inst_addr                                         "0x0018"
#define  set_EPI_EPI_SCR10_INI_VAL_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_SCR10_INI_VAL_reg)=data)
#define  get_EPI_EPI_SCR10_INI_VAL_reg                                           (*((volatile unsigned int*)EPI_EPI_SCR10_INI_VAL_reg))
#define  EPI_EPI_SCR10_INI_VAL_scr10_ini_val_shift                               (0)
#define  EPI_EPI_SCR10_INI_VAL_scr10_ini_val_mask                                (0x000FFFFF)
#define  EPI_EPI_SCR10_INI_VAL_scr10_ini_val(data)                               (0x000FFFFF&(data))
#define  EPI_EPI_SCR10_INI_VAL_get_scr10_ini_val(data)                           (0x000FFFFF&(data))

#define  EPI_EPI_SCR8CM_CTRL                                                    0x18026190
#define  EPI_EPI_SCR8CM_CTRL_reg_addr                                            "0xB8026190"
#define  EPI_EPI_SCR8CM_CTRL_reg                                                 0xB8026190
#define  EPI_EPI_SCR8CM_CTRL_inst_addr                                           "0x0019"
#define  set_EPI_EPI_SCR8CM_CTRL_reg(data)                                       (*((volatile unsigned int*)EPI_EPI_SCR8CM_CTRL_reg)=data)
#define  get_EPI_EPI_SCR8CM_CTRL_reg                                             (*((volatile unsigned int*)EPI_EPI_SCR8CM_CTRL_reg))
#define  EPI_EPI_SCR8CM_CTRL_scr8_cm_enable_shift                                (0)
#define  EPI_EPI_SCR8CM_CTRL_scr8_cm_enable_mask                                 (0x00000001)
#define  EPI_EPI_SCR8CM_CTRL_scr8_cm_enable(data)                                (0x00000001&(data))
#define  EPI_EPI_SCR8CM_CTRL_get_scr8_cm_enable(data)                            (0x00000001&(data))

#define  EPI_EPI_SCR8CM_INI_VAL                                                 0x18026194
#define  EPI_EPI_SCR8CM_INI_VAL_reg_addr                                         "0xB8026194"
#define  EPI_EPI_SCR8CM_INI_VAL_reg                                              0xB8026194
#define  EPI_EPI_SCR8CM_INI_VAL_inst_addr                                        "0x001A"
#define  set_EPI_EPI_SCR8CM_INI_VAL_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_SCR8CM_INI_VAL_reg)=data)
#define  get_EPI_EPI_SCR8CM_INI_VAL_reg                                          (*((volatile unsigned int*)EPI_EPI_SCR8CM_INI_VAL_reg))
#define  EPI_EPI_SCR8CM_INI_VAL_scr8_cm_ini_val_shift                            (0)
#define  EPI_EPI_SCR8CM_INI_VAL_scr8_cm_ini_val_mask                             (0x00000FFF)
#define  EPI_EPI_SCR8CM_INI_VAL_scr8_cm_ini_val(data)                            (0x00000FFF&(data))
#define  EPI_EPI_SCR8CM_INI_VAL_get_scr8_cm_ini_val(data)                        (0x00000FFF&(data))

#define  EPI_EPI_SCR10CM_CTRL                                                   0x18026198
#define  EPI_EPI_SCR10CM_CTRL_reg_addr                                           "0xB8026198"
#define  EPI_EPI_SCR10CM_CTRL_reg                                                0xB8026198
#define  EPI_EPI_SCR10CM_CTRL_inst_addr                                          "0x001B"
#define  set_EPI_EPI_SCR10CM_CTRL_reg(data)                                      (*((volatile unsigned int*)EPI_EPI_SCR10CM_CTRL_reg)=data)
#define  get_EPI_EPI_SCR10CM_CTRL_reg                                            (*((volatile unsigned int*)EPI_EPI_SCR10CM_CTRL_reg))
#define  EPI_EPI_SCR10CM_CTRL_scr10_cm_enable_shift                              (0)
#define  EPI_EPI_SCR10CM_CTRL_scr10_cm_enable_mask                               (0x00000001)
#define  EPI_EPI_SCR10CM_CTRL_scr10_cm_enable(data)                              (0x00000001&(data))
#define  EPI_EPI_SCR10CM_CTRL_get_scr10_cm_enable(data)                          (0x00000001&(data))

#define  EPI_EPI_SCR10CM_INI_VAL                                                0x1802619C
#define  EPI_EPI_SCR10CM_INI_VAL_reg_addr                                        "0xB802619C"
#define  EPI_EPI_SCR10CM_INI_VAL_reg                                             0xB802619C
#define  EPI_EPI_SCR10CM_INI_VAL_inst_addr                                       "0x001C"
#define  set_EPI_EPI_SCR10CM_INI_VAL_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SCR10CM_INI_VAL_reg)=data)
#define  get_EPI_EPI_SCR10CM_INI_VAL_reg                                         (*((volatile unsigned int*)EPI_EPI_SCR10CM_INI_VAL_reg))
#define  EPI_EPI_SCR10CM_INI_VAL_scr10_cm_ini_val_shift                          (0)
#define  EPI_EPI_SCR10CM_INI_VAL_scr10_cm_ini_val_mask                           (0x000003FF)
#define  EPI_EPI_SCR10CM_INI_VAL_scr10_cm_ini_val(data)                          (0x000003FF&(data))
#define  EPI_EPI_SCR10CM_INI_VAL_get_scr10_cm_ini_val(data)                      (0x000003FF&(data))

#define  EPI_EPI_CMPI_PG_CTRL                                                   0x180261A0
#define  EPI_EPI_CMPI_PG_CTRL_reg_addr                                           "0xB80261A0"
#define  EPI_EPI_CMPI_PG_CTRL_reg                                                0xB80261A0
#define  EPI_EPI_CMPI_PG_CTRL_inst_addr                                          "0x001D"
#define  set_EPI_EPI_CMPI_PG_CTRL_reg(data)                                      (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CTRL_reg)=data)
#define  get_EPI_EPI_CMPI_PG_CTRL_reg                                            (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CTRL_reg))
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_pgamma_en_shift                               (16)
#define  EPI_EPI_CMPI_PG_CTRL_dummy_15_12_shift                                  (12)
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_back_color_sel_shift                          (8)
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_middle_color_sel_shift                        (4)
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_front_color_sel_shift                         (0)
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_pgamma_en_mask                                (0x00010000)
#define  EPI_EPI_CMPI_PG_CTRL_dummy_15_12_mask                                   (0x0000F000)
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_back_color_sel_mask                           (0x00000300)
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_middle_color_sel_mask                         (0x00000030)
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_front_color_sel_mask                          (0x00000003)
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_pgamma_en(data)                               (0x00010000&((data)<<16))
#define  EPI_EPI_CMPI_PG_CTRL_dummy_15_12(data)                                  (0x0000F000&((data)<<12))
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_back_color_sel(data)                          (0x00000300&((data)<<8))
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_middle_color_sel(data)                        (0x00000030&((data)<<4))
#define  EPI_EPI_CMPI_PG_CTRL_cmpi_front_color_sel(data)                         (0x00000003&(data))
#define  EPI_EPI_CMPI_PG_CTRL_get_cmpi_pgamma_en(data)                           ((0x00010000&(data))>>16)
#define  EPI_EPI_CMPI_PG_CTRL_get_dummy_15_12(data)                              ((0x0000F000&(data))>>12)
#define  EPI_EPI_CMPI_PG_CTRL_get_cmpi_back_color_sel(data)                      ((0x00000300&(data))>>8)
#define  EPI_EPI_CMPI_PG_CTRL_get_cmpi_middle_color_sel(data)                    ((0x00000030&(data))>>4)
#define  EPI_EPI_CMPI_PG_CTRL_get_cmpi_front_color_sel(data)                     (0x00000003&(data))

#define  EPI_EPI_CMPI_PG_CMD_ST                                                 0x180261A4
#define  EPI_EPI_CMPI_PG_CMD_ST_reg_addr                                         "0xB80261A4"
#define  EPI_EPI_CMPI_PG_CMD_ST_reg                                              0xB80261A4
#define  EPI_EPI_CMPI_PG_CMD_ST_inst_addr                                        "0x001E"
#define  set_EPI_EPI_CMPI_PG_CMD_ST_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_ST_reg)=data)
#define  get_EPI_EPI_CMPI_PG_CMD_ST_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_ST_reg))
#define  EPI_EPI_CMPI_PG_CMD_ST_cmpi_pg_cmd_st_shift                             (0)
#define  EPI_EPI_CMPI_PG_CMD_ST_cmpi_pg_cmd_st_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_CMD_ST_cmpi_pg_cmd_st(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_CMD_ST_get_cmpi_pg_cmd_st(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_CMD_CMD1                                               0x180261A8
#define  EPI_EPI_CMPI_PG_CMD_CMD1_reg_addr                                       "0xB80261A8"
#define  EPI_EPI_CMPI_PG_CMD_CMD1_reg                                            0xB80261A8
#define  EPI_EPI_CMPI_PG_CMD_CMD1_inst_addr                                      "0x001F"
#define  set_EPI_EPI_CMPI_PG_CMD_CMD1_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_CMD1_reg)=data)
#define  get_EPI_EPI_CMPI_PG_CMD_CMD1_reg                                        (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_CMD1_reg))
#define  EPI_EPI_CMPI_PG_CMD_CMD1_cmpi_pg_cmd_cmd1_shift                         (0)
#define  EPI_EPI_CMPI_PG_CMD_CMD1_cmpi_pg_cmd_cmd1_mask                          (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_CMD_CMD1_cmpi_pg_cmd_cmd1(data)                         (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_CMD_CMD1_get_cmpi_pg_cmd_cmd1(data)                     (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_CMD_CMD2                                               0x180261AC
#define  EPI_EPI_CMPI_PG_CMD_CMD2_reg_addr                                       "0xB80261AC"
#define  EPI_EPI_CMPI_PG_CMD_CMD2_reg                                            0xB80261AC
#define  EPI_EPI_CMPI_PG_CMD_CMD2_inst_addr                                      "0x0020"
#define  set_EPI_EPI_CMPI_PG_CMD_CMD2_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_CMD2_reg)=data)
#define  get_EPI_EPI_CMPI_PG_CMD_CMD2_reg                                        (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_CMD2_reg))
#define  EPI_EPI_CMPI_PG_CMD_CMD2_cmpi_pg_cmd_cmd2_shift                         (0)
#define  EPI_EPI_CMPI_PG_CMD_CMD2_cmpi_pg_cmd_cmd2_mask                          (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_CMD_CMD2_cmpi_pg_cmd_cmd2(data)                         (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_CMD_CMD2_get_cmpi_pg_cmd_cmd2(data)                     (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_CMD_CMD3                                               0x180261B0
#define  EPI_EPI_CMPI_PG_CMD_CMD3_reg_addr                                       "0xB80261B0"
#define  EPI_EPI_CMPI_PG_CMD_CMD3_reg                                            0xB80261B0
#define  EPI_EPI_CMPI_PG_CMD_CMD3_inst_addr                                      "0x0021"
#define  set_EPI_EPI_CMPI_PG_CMD_CMD3_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_CMD3_reg)=data)
#define  get_EPI_EPI_CMPI_PG_CMD_CMD3_reg                                        (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_CMD3_reg))
#define  EPI_EPI_CMPI_PG_CMD_CMD3_cmpi_pg_cmd_cmd3_shift                         (0)
#define  EPI_EPI_CMPI_PG_CMD_CMD3_cmpi_pg_cmd_cmd3_mask                          (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_CMD_CMD3_cmpi_pg_cmd_cmd3(data)                         (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_CMD_CMD3_get_cmpi_pg_cmd_cmd3(data)                     (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_CMD_CMD4                                               0x18026300
#define  EPI_EPI_CMPI_PG_CMD_CMD4_reg_addr                                       "0xB8026300"
#define  EPI_EPI_CMPI_PG_CMD_CMD4_reg                                            0xB8026300
#define  EPI_EPI_CMPI_PG_CMD_CMD4_inst_addr                                      "0x0022"
#define  set_EPI_EPI_CMPI_PG_CMD_CMD4_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_CMD4_reg)=data)
#define  get_EPI_EPI_CMPI_PG_CMD_CMD4_reg                                        (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_CMD4_reg))
#define  EPI_EPI_CMPI_PG_CMD_CMD4_cmpi_pg_cmd_cmd4_shift                         (0)
#define  EPI_EPI_CMPI_PG_CMD_CMD4_cmpi_pg_cmd_cmd4_mask                          (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_CMD_CMD4_cmpi_pg_cmd_cmd4(data)                         (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_CMD_CMD4_get_cmpi_pg_cmd_cmd4(data)                     (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_CMD_CMD5                                               0x18026304
#define  EPI_EPI_CMPI_PG_CMD_CMD5_reg_addr                                       "0xB8026304"
#define  EPI_EPI_CMPI_PG_CMD_CMD5_reg                                            0xB8026304
#define  EPI_EPI_CMPI_PG_CMD_CMD5_inst_addr                                      "0x0023"
#define  set_EPI_EPI_CMPI_PG_CMD_CMD5_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_CMD5_reg)=data)
#define  get_EPI_EPI_CMPI_PG_CMD_CMD5_reg                                        (*((volatile unsigned int*)EPI_EPI_CMPI_PG_CMD_CMD5_reg))
#define  EPI_EPI_CMPI_PG_CMD_CMD5_cmpi_pg_cmd_cmd5_shift                         (0)
#define  EPI_EPI_CMPI_PG_CMD_CMD5_cmpi_pg_cmd_cmd5_mask                          (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_CMD_CMD5_cmpi_pg_cmd_cmd5(data)                         (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_CMD_CMD5_get_cmpi_pg_cmd_cmd5(data)                     (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_START                                                  0x180261B4
#define  EPI_EPI_CMPI_PG_START_reg_addr                                          "0xB80261B4"
#define  EPI_EPI_CMPI_PG_START_reg                                               0xB80261B4
#define  EPI_EPI_CMPI_PG_START_inst_addr                                         "0x0024"
#define  set_EPI_EPI_CMPI_PG_START_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_START_reg)=data)
#define  get_EPI_EPI_CMPI_PG_START_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_START_reg))
#define  EPI_EPI_CMPI_PG_START_cmpi_pg_start_shift                               (0)
#define  EPI_EPI_CMPI_PG_START_cmpi_pg_start_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_START_cmpi_pg_start(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_START_get_cmpi_pg_start(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA0                                                  0x180261B8
#define  EPI_EPI_CMPI_PG_DATA0_reg_addr                                          "0xB80261B8"
#define  EPI_EPI_CMPI_PG_DATA0_reg                                               0xB80261B8
#define  EPI_EPI_CMPI_PG_DATA0_inst_addr                                         "0x0025"
#define  set_EPI_EPI_CMPI_PG_DATA0_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA0_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA0_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA0_reg))
#define  EPI_EPI_CMPI_PG_DATA0_cmpi_pg_data0_shift                               (0)
#define  EPI_EPI_CMPI_PG_DATA0_cmpi_pg_data0_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA0_cmpi_pg_data0(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA0_get_cmpi_pg_data0(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA1                                                  0x180261BC
#define  EPI_EPI_CMPI_PG_DATA1_reg_addr                                          "0xB80261BC"
#define  EPI_EPI_CMPI_PG_DATA1_reg                                               0xB80261BC
#define  EPI_EPI_CMPI_PG_DATA1_inst_addr                                         "0x0026"
#define  set_EPI_EPI_CMPI_PG_DATA1_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA1_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA1_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA1_reg))
#define  EPI_EPI_CMPI_PG_DATA1_cmpi_pg_data1_shift                               (0)
#define  EPI_EPI_CMPI_PG_DATA1_cmpi_pg_data1_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA1_cmpi_pg_data1(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA1_get_cmpi_pg_data1(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA2                                                  0x180261C0
#define  EPI_EPI_CMPI_PG_DATA2_reg_addr                                          "0xB80261C0"
#define  EPI_EPI_CMPI_PG_DATA2_reg                                               0xB80261C0
#define  EPI_EPI_CMPI_PG_DATA2_inst_addr                                         "0x0027"
#define  set_EPI_EPI_CMPI_PG_DATA2_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA2_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA2_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA2_reg))
#define  EPI_EPI_CMPI_PG_DATA2_cmpi_pg_data2_shift                               (0)
#define  EPI_EPI_CMPI_PG_DATA2_cmpi_pg_data2_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA2_cmpi_pg_data2(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA2_get_cmpi_pg_data2(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA3                                                  0x180261C4
#define  EPI_EPI_CMPI_PG_DATA3_reg_addr                                          "0xB80261C4"
#define  EPI_EPI_CMPI_PG_DATA3_reg                                               0xB80261C4
#define  EPI_EPI_CMPI_PG_DATA3_inst_addr                                         "0x0028"
#define  set_EPI_EPI_CMPI_PG_DATA3_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA3_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA3_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA3_reg))
#define  EPI_EPI_CMPI_PG_DATA3_cmpi_pg_data3_shift                               (0)
#define  EPI_EPI_CMPI_PG_DATA3_cmpi_pg_data3_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA3_cmpi_pg_data3(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA3_get_cmpi_pg_data3(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA4                                                  0x180261C8
#define  EPI_EPI_CMPI_PG_DATA4_reg_addr                                          "0xB80261C8"
#define  EPI_EPI_CMPI_PG_DATA4_reg                                               0xB80261C8
#define  EPI_EPI_CMPI_PG_DATA4_inst_addr                                         "0x0029"
#define  set_EPI_EPI_CMPI_PG_DATA4_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA4_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA4_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA4_reg))
#define  EPI_EPI_CMPI_PG_DATA4_cmpi_pg_data4_shift                               (0)
#define  EPI_EPI_CMPI_PG_DATA4_cmpi_pg_data4_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA4_cmpi_pg_data4(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA4_get_cmpi_pg_data4(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA5                                                  0x180261CC
#define  EPI_EPI_CMPI_PG_DATA5_reg_addr                                          "0xB80261CC"
#define  EPI_EPI_CMPI_PG_DATA5_reg                                               0xB80261CC
#define  EPI_EPI_CMPI_PG_DATA5_inst_addr                                         "0x002A"
#define  set_EPI_EPI_CMPI_PG_DATA5_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA5_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA5_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA5_reg))
#define  EPI_EPI_CMPI_PG_DATA5_cmpi_pg_data5_shift                               (0)
#define  EPI_EPI_CMPI_PG_DATA5_cmpi_pg_data5_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA5_cmpi_pg_data5(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA5_get_cmpi_pg_data5(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA6                                                  0x180261D0
#define  EPI_EPI_CMPI_PG_DATA6_reg_addr                                          "0xB80261D0"
#define  EPI_EPI_CMPI_PG_DATA6_reg                                               0xB80261D0
#define  EPI_EPI_CMPI_PG_DATA6_inst_addr                                         "0x002B"
#define  set_EPI_EPI_CMPI_PG_DATA6_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA6_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA6_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA6_reg))
#define  EPI_EPI_CMPI_PG_DATA6_cmpi_pg_data6_shift                               (0)
#define  EPI_EPI_CMPI_PG_DATA6_cmpi_pg_data6_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA6_cmpi_pg_data6(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA6_get_cmpi_pg_data6(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA7                                                  0x180261D4
#define  EPI_EPI_CMPI_PG_DATA7_reg_addr                                          "0xB80261D4"
#define  EPI_EPI_CMPI_PG_DATA7_reg                                               0xB80261D4
#define  EPI_EPI_CMPI_PG_DATA7_inst_addr                                         "0x002C"
#define  set_EPI_EPI_CMPI_PG_DATA7_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA7_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA7_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA7_reg))
#define  EPI_EPI_CMPI_PG_DATA7_cmpi_pg_data7_shift                               (0)
#define  EPI_EPI_CMPI_PG_DATA7_cmpi_pg_data7_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA7_cmpi_pg_data7(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA7_get_cmpi_pg_data7(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA8                                                  0x180261D8
#define  EPI_EPI_CMPI_PG_DATA8_reg_addr                                          "0xB80261D8"
#define  EPI_EPI_CMPI_PG_DATA8_reg                                               0xB80261D8
#define  EPI_EPI_CMPI_PG_DATA8_inst_addr                                         "0x002D"
#define  set_EPI_EPI_CMPI_PG_DATA8_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA8_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA8_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA8_reg))
#define  EPI_EPI_CMPI_PG_DATA8_cmpi_pg_data8_shift                               (0)
#define  EPI_EPI_CMPI_PG_DATA8_cmpi_pg_data8_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA8_cmpi_pg_data8(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA8_get_cmpi_pg_data8(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA9                                                  0x180261DC
#define  EPI_EPI_CMPI_PG_DATA9_reg_addr                                          "0xB80261DC"
#define  EPI_EPI_CMPI_PG_DATA9_reg                                               0xB80261DC
#define  EPI_EPI_CMPI_PG_DATA9_inst_addr                                         "0x002E"
#define  set_EPI_EPI_CMPI_PG_DATA9_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA9_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA9_reg                                           (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA9_reg))
#define  EPI_EPI_CMPI_PG_DATA9_cmpi_pg_data9_shift                               (0)
#define  EPI_EPI_CMPI_PG_DATA9_cmpi_pg_data9_mask                                (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA9_cmpi_pg_data9(data)                               (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA9_get_cmpi_pg_data9(data)                           (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA10                                                 0x18026308
#define  EPI_EPI_CMPI_PG_DATA10_reg_addr                                         "0xB8026308"
#define  EPI_EPI_CMPI_PG_DATA10_reg                                              0xB8026308
#define  EPI_EPI_CMPI_PG_DATA10_inst_addr                                        "0x002F"
#define  set_EPI_EPI_CMPI_PG_DATA10_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA10_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA10_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA10_reg))
#define  EPI_EPI_CMPI_PG_DATA10_cmpi_pg_data10_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA10_cmpi_pg_data10_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA10_cmpi_pg_data10(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA10_get_cmpi_pg_data10(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA11                                                 0x1802630C
#define  EPI_EPI_CMPI_PG_DATA11_reg_addr                                         "0xB802630C"
#define  EPI_EPI_CMPI_PG_DATA11_reg                                              0xB802630C
#define  EPI_EPI_CMPI_PG_DATA11_inst_addr                                        "0x0030"
#define  set_EPI_EPI_CMPI_PG_DATA11_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA11_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA11_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA11_reg))
#define  EPI_EPI_CMPI_PG_DATA11_cmpi_pg_data11_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA11_cmpi_pg_data11_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA11_cmpi_pg_data11(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA11_get_cmpi_pg_data11(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA12                                                 0x18026310
#define  EPI_EPI_CMPI_PG_DATA12_reg_addr                                         "0xB8026310"
#define  EPI_EPI_CMPI_PG_DATA12_reg                                              0xB8026310
#define  EPI_EPI_CMPI_PG_DATA12_inst_addr                                        "0x0031"
#define  set_EPI_EPI_CMPI_PG_DATA12_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA12_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA12_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA12_reg))
#define  EPI_EPI_CMPI_PG_DATA12_cmpi_pg_data12_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA12_cmpi_pg_data12_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA12_cmpi_pg_data12(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA12_get_cmpi_pg_data12(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA13                                                 0x18026314
#define  EPI_EPI_CMPI_PG_DATA13_reg_addr                                         "0xB8026314"
#define  EPI_EPI_CMPI_PG_DATA13_reg                                              0xB8026314
#define  EPI_EPI_CMPI_PG_DATA13_inst_addr                                        "0x0032"
#define  set_EPI_EPI_CMPI_PG_DATA13_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA13_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA13_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA13_reg))
#define  EPI_EPI_CMPI_PG_DATA13_cmpi_pg_data13_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA13_cmpi_pg_data13_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA13_cmpi_pg_data13(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA13_get_cmpi_pg_data13(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA14                                                 0x18026318
#define  EPI_EPI_CMPI_PG_DATA14_reg_addr                                         "0xB8026318"
#define  EPI_EPI_CMPI_PG_DATA14_reg                                              0xB8026318
#define  EPI_EPI_CMPI_PG_DATA14_inst_addr                                        "0x0033"
#define  set_EPI_EPI_CMPI_PG_DATA14_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA14_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA14_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA14_reg))
#define  EPI_EPI_CMPI_PG_DATA14_cmpi_pg_data14_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA14_cmpi_pg_data14_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA14_cmpi_pg_data14(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA14_get_cmpi_pg_data14(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA15                                                 0x1802631C
#define  EPI_EPI_CMPI_PG_DATA15_reg_addr                                         "0xB802631C"
#define  EPI_EPI_CMPI_PG_DATA15_reg                                              0xB802631C
#define  EPI_EPI_CMPI_PG_DATA15_inst_addr                                        "0x0034"
#define  set_EPI_EPI_CMPI_PG_DATA15_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA15_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA15_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA15_reg))
#define  EPI_EPI_CMPI_PG_DATA15_cmpi_pg_data15_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA15_cmpi_pg_data15_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA15_cmpi_pg_data15(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA15_get_cmpi_pg_data15(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA16                                                 0x18026320
#define  EPI_EPI_CMPI_PG_DATA16_reg_addr                                         "0xB8026320"
#define  EPI_EPI_CMPI_PG_DATA16_reg                                              0xB8026320
#define  EPI_EPI_CMPI_PG_DATA16_inst_addr                                        "0x0035"
#define  set_EPI_EPI_CMPI_PG_DATA16_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA16_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA16_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA16_reg))
#define  EPI_EPI_CMPI_PG_DATA16_cmpi_pg_data16_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA16_cmpi_pg_data16_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA16_cmpi_pg_data16(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA16_get_cmpi_pg_data16(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA17                                                 0x18026324
#define  EPI_EPI_CMPI_PG_DATA17_reg_addr                                         "0xB8026324"
#define  EPI_EPI_CMPI_PG_DATA17_reg                                              0xB8026324
#define  EPI_EPI_CMPI_PG_DATA17_inst_addr                                        "0x0036"
#define  set_EPI_EPI_CMPI_PG_DATA17_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA17_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA17_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA17_reg))
#define  EPI_EPI_CMPI_PG_DATA17_cmpi_pg_data17_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA17_cmpi_pg_data17_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA17_cmpi_pg_data17(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA17_get_cmpi_pg_data17(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA18                                                 0x18026328
#define  EPI_EPI_CMPI_PG_DATA18_reg_addr                                         "0xB8026328"
#define  EPI_EPI_CMPI_PG_DATA18_reg                                              0xB8026328
#define  EPI_EPI_CMPI_PG_DATA18_inst_addr                                        "0x0037"
#define  set_EPI_EPI_CMPI_PG_DATA18_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA18_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA18_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA18_reg))
#define  EPI_EPI_CMPI_PG_DATA18_cmpi_pg_data18_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA18_cmpi_pg_data18_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA18_cmpi_pg_data18(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA18_get_cmpi_pg_data18(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA19                                                 0x1802632C
#define  EPI_EPI_CMPI_PG_DATA19_reg_addr                                         "0xB802632C"
#define  EPI_EPI_CMPI_PG_DATA19_reg                                              0xB802632C
#define  EPI_EPI_CMPI_PG_DATA19_inst_addr                                        "0x0038"
#define  set_EPI_EPI_CMPI_PG_DATA19_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA19_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA19_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA19_reg))
#define  EPI_EPI_CMPI_PG_DATA19_cmpi_pg_data19_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA19_cmpi_pg_data19_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA19_cmpi_pg_data19(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA19_get_cmpi_pg_data19(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA20                                                 0x18026330
#define  EPI_EPI_CMPI_PG_DATA20_reg_addr                                         "0xB8026330"
#define  EPI_EPI_CMPI_PG_DATA20_reg                                              0xB8026330
#define  EPI_EPI_CMPI_PG_DATA20_inst_addr                                        "0x0039"
#define  set_EPI_EPI_CMPI_PG_DATA20_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA20_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA20_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA20_reg))
#define  EPI_EPI_CMPI_PG_DATA20_cmpi_pg_data20_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA20_cmpi_pg_data20_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA20_cmpi_pg_data20(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA20_get_cmpi_pg_data20(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA21                                                 0x18026334
#define  EPI_EPI_CMPI_PG_DATA21_reg_addr                                         "0xB8026334"
#define  EPI_EPI_CMPI_PG_DATA21_reg                                              0xB8026334
#define  EPI_EPI_CMPI_PG_DATA21_inst_addr                                        "0x003A"
#define  set_EPI_EPI_CMPI_PG_DATA21_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA21_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA21_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA21_reg))
#define  EPI_EPI_CMPI_PG_DATA21_cmpi_pg_data21_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA21_cmpi_pg_data21_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA21_cmpi_pg_data21(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA21_get_cmpi_pg_data21(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA22                                                 0x18026338
#define  EPI_EPI_CMPI_PG_DATA22_reg_addr                                         "0xB8026338"
#define  EPI_EPI_CMPI_PG_DATA22_reg                                              0xB8026338
#define  EPI_EPI_CMPI_PG_DATA22_inst_addr                                        "0x003B"
#define  set_EPI_EPI_CMPI_PG_DATA22_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA22_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA22_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA22_reg))
#define  EPI_EPI_CMPI_PG_DATA22_cmpi_pg_data22_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA22_cmpi_pg_data22_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA22_cmpi_pg_data22(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA22_get_cmpi_pg_data22(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA23                                                 0x1802633C
#define  EPI_EPI_CMPI_PG_DATA23_reg_addr                                         "0xB802633C"
#define  EPI_EPI_CMPI_PG_DATA23_reg                                              0xB802633C
#define  EPI_EPI_CMPI_PG_DATA23_inst_addr                                        "0x003C"
#define  set_EPI_EPI_CMPI_PG_DATA23_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA23_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA23_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA23_reg))
#define  EPI_EPI_CMPI_PG_DATA23_cmpi_pg_data23_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA23_cmpi_pg_data23_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA23_cmpi_pg_data23(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA23_get_cmpi_pg_data23(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA24                                                 0x18026340
#define  EPI_EPI_CMPI_PG_DATA24_reg_addr                                         "0xB8026340"
#define  EPI_EPI_CMPI_PG_DATA24_reg                                              0xB8026340
#define  EPI_EPI_CMPI_PG_DATA24_inst_addr                                        "0x003D"
#define  set_EPI_EPI_CMPI_PG_DATA24_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA24_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA24_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA24_reg))
#define  EPI_EPI_CMPI_PG_DATA24_cmpi_pg_data24_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA24_cmpi_pg_data24_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA24_cmpi_pg_data24(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA24_get_cmpi_pg_data24(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA25                                                 0x18026344
#define  EPI_EPI_CMPI_PG_DATA25_reg_addr                                         "0xB8026344"
#define  EPI_EPI_CMPI_PG_DATA25_reg                                              0xB8026344
#define  EPI_EPI_CMPI_PG_DATA25_inst_addr                                        "0x003E"
#define  set_EPI_EPI_CMPI_PG_DATA25_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA25_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA25_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA25_reg))
#define  EPI_EPI_CMPI_PG_DATA25_cmpi_pg_data25_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA25_cmpi_pg_data25_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA25_cmpi_pg_data25(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA25_get_cmpi_pg_data25(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA26                                                 0x18026348
#define  EPI_EPI_CMPI_PG_DATA26_reg_addr                                         "0xB8026348"
#define  EPI_EPI_CMPI_PG_DATA26_reg                                              0xB8026348
#define  EPI_EPI_CMPI_PG_DATA26_inst_addr                                        "0x003F"
#define  set_EPI_EPI_CMPI_PG_DATA26_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA26_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA26_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA26_reg))
#define  EPI_EPI_CMPI_PG_DATA26_cmpi_pg_data26_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA26_cmpi_pg_data26_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA26_cmpi_pg_data26(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA26_get_cmpi_pg_data26(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA27                                                 0x1802634C
#define  EPI_EPI_CMPI_PG_DATA27_reg_addr                                         "0xB802634C"
#define  EPI_EPI_CMPI_PG_DATA27_reg                                              0xB802634C
#define  EPI_EPI_CMPI_PG_DATA27_inst_addr                                        "0x0040"
#define  set_EPI_EPI_CMPI_PG_DATA27_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA27_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA27_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA27_reg))
#define  EPI_EPI_CMPI_PG_DATA27_cmpi_pg_data27_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA27_cmpi_pg_data27_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA27_cmpi_pg_data27(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA27_get_cmpi_pg_data27(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA28                                                 0x18026350
#define  EPI_EPI_CMPI_PG_DATA28_reg_addr                                         "0xB8026350"
#define  EPI_EPI_CMPI_PG_DATA28_reg                                              0xB8026350
#define  EPI_EPI_CMPI_PG_DATA28_inst_addr                                        "0x0041"
#define  set_EPI_EPI_CMPI_PG_DATA28_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA28_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA28_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA28_reg))
#define  EPI_EPI_CMPI_PG_DATA28_cmpi_pg_data28_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA28_cmpi_pg_data28_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA28_cmpi_pg_data28(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA28_get_cmpi_pg_data28(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA29                                                 0x18026354
#define  EPI_EPI_CMPI_PG_DATA29_reg_addr                                         "0xB8026354"
#define  EPI_EPI_CMPI_PG_DATA29_reg                                              0xB8026354
#define  EPI_EPI_CMPI_PG_DATA29_inst_addr                                        "0x0042"
#define  set_EPI_EPI_CMPI_PG_DATA29_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA29_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA29_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA29_reg))
#define  EPI_EPI_CMPI_PG_DATA29_cmpi_pg_data29_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA29_cmpi_pg_data29_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA29_cmpi_pg_data29(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA29_get_cmpi_pg_data29(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA30                                                 0x18026358
#define  EPI_EPI_CMPI_PG_DATA30_reg_addr                                         "0xB8026358"
#define  EPI_EPI_CMPI_PG_DATA30_reg                                              0xB8026358
#define  EPI_EPI_CMPI_PG_DATA30_inst_addr                                        "0x0043"
#define  set_EPI_EPI_CMPI_PG_DATA30_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA30_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA30_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA30_reg))
#define  EPI_EPI_CMPI_PG_DATA30_cmpi_pg_data30_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA30_cmpi_pg_data30_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA30_cmpi_pg_data30(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA30_get_cmpi_pg_data30(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA31                                                 0x1802635C
#define  EPI_EPI_CMPI_PG_DATA31_reg_addr                                         "0xB802635C"
#define  EPI_EPI_CMPI_PG_DATA31_reg                                              0xB802635C
#define  EPI_EPI_CMPI_PG_DATA31_inst_addr                                        "0x0044"
#define  set_EPI_EPI_CMPI_PG_DATA31_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA31_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA31_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA31_reg))
#define  EPI_EPI_CMPI_PG_DATA31_cmpi_pg_data31_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA31_cmpi_pg_data31_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA31_cmpi_pg_data31(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA31_get_cmpi_pg_data31(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA32                                                 0x18026360
#define  EPI_EPI_CMPI_PG_DATA32_reg_addr                                         "0xB8026360"
#define  EPI_EPI_CMPI_PG_DATA32_reg                                              0xB8026360
#define  EPI_EPI_CMPI_PG_DATA32_inst_addr                                        "0x0045"
#define  set_EPI_EPI_CMPI_PG_DATA32_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA32_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA32_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA32_reg))
#define  EPI_EPI_CMPI_PG_DATA32_cmpi_pg_data32_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA32_cmpi_pg_data32_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA32_cmpi_pg_data32(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA32_get_cmpi_pg_data32(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA33                                                 0x18026364
#define  EPI_EPI_CMPI_PG_DATA33_reg_addr                                         "0xB8026364"
#define  EPI_EPI_CMPI_PG_DATA33_reg                                              0xB8026364
#define  EPI_EPI_CMPI_PG_DATA33_inst_addr                                        "0x0046"
#define  set_EPI_EPI_CMPI_PG_DATA33_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA33_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA33_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA33_reg))
#define  EPI_EPI_CMPI_PG_DATA33_cmpi_pg_data33_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA33_cmpi_pg_data33_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA33_cmpi_pg_data33(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA33_get_cmpi_pg_data33(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA34                                                 0x18026368
#define  EPI_EPI_CMPI_PG_DATA34_reg_addr                                         "0xB8026368"
#define  EPI_EPI_CMPI_PG_DATA34_reg                                              0xB8026368
#define  EPI_EPI_CMPI_PG_DATA34_inst_addr                                        "0x0047"
#define  set_EPI_EPI_CMPI_PG_DATA34_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA34_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA34_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA34_reg))
#define  EPI_EPI_CMPI_PG_DATA34_cmpi_pg_data34_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA34_cmpi_pg_data34_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA34_cmpi_pg_data34(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA34_get_cmpi_pg_data34(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA35                                                 0x1802636C
#define  EPI_EPI_CMPI_PG_DATA35_reg_addr                                         "0xB802636C"
#define  EPI_EPI_CMPI_PG_DATA35_reg                                              0xB802636C
#define  EPI_EPI_CMPI_PG_DATA35_inst_addr                                        "0x0048"
#define  set_EPI_EPI_CMPI_PG_DATA35_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA35_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA35_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA35_reg))
#define  EPI_EPI_CMPI_PG_DATA35_cmpi_pg_data35_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA35_cmpi_pg_data35_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA35_cmpi_pg_data35(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA35_get_cmpi_pg_data35(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA36                                                 0x18026370
#define  EPI_EPI_CMPI_PG_DATA36_reg_addr                                         "0xB8026370"
#define  EPI_EPI_CMPI_PG_DATA36_reg                                              0xB8026370
#define  EPI_EPI_CMPI_PG_DATA36_inst_addr                                        "0x0049"
#define  set_EPI_EPI_CMPI_PG_DATA36_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA36_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA36_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA36_reg))
#define  EPI_EPI_CMPI_PG_DATA36_cmpi_pg_data36_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA36_cmpi_pg_data36_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA36_cmpi_pg_data36(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA36_get_cmpi_pg_data36(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA37                                                 0x18026374
#define  EPI_EPI_CMPI_PG_DATA37_reg_addr                                         "0xB8026374"
#define  EPI_EPI_CMPI_PG_DATA37_reg                                              0xB8026374
#define  EPI_EPI_CMPI_PG_DATA37_inst_addr                                        "0x004A"
#define  set_EPI_EPI_CMPI_PG_DATA37_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA37_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA37_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA37_reg))
#define  EPI_EPI_CMPI_PG_DATA37_cmpi_pg_data37_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA37_cmpi_pg_data37_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA37_cmpi_pg_data37(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA37_get_cmpi_pg_data37(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA38                                                 0x18026378
#define  EPI_EPI_CMPI_PG_DATA38_reg_addr                                         "0xB8026378"
#define  EPI_EPI_CMPI_PG_DATA38_reg                                              0xB8026378
#define  EPI_EPI_CMPI_PG_DATA38_inst_addr                                        "0x004B"
#define  set_EPI_EPI_CMPI_PG_DATA38_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA38_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA38_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA38_reg))
#define  EPI_EPI_CMPI_PG_DATA38_cmpi_pg_data38_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA38_cmpi_pg_data38_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA38_cmpi_pg_data38(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA38_get_cmpi_pg_data38(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA39                                                 0x1802637C
#define  EPI_EPI_CMPI_PG_DATA39_reg_addr                                         "0xB802637C"
#define  EPI_EPI_CMPI_PG_DATA39_reg                                              0xB802637C
#define  EPI_EPI_CMPI_PG_DATA39_inst_addr                                        "0x004C"
#define  set_EPI_EPI_CMPI_PG_DATA39_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA39_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA39_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA39_reg))
#define  EPI_EPI_CMPI_PG_DATA39_cmpi_pg_data39_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA39_cmpi_pg_data39_mask                              (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_DATA39_cmpi_pg_data39(data)                             (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA39_get_cmpi_pg_data39(data)                         (0x00FFFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA40                                                 0x18026400
#define  EPI_EPI_CMPI_PG_DATA40_reg_addr                                         "0xB8026400"
#define  EPI_EPI_CMPI_PG_DATA40_reg                                              0xB8026400
#define  EPI_EPI_CMPI_PG_DATA40_inst_addr                                        "0x004D"
#define  set_EPI_EPI_CMPI_PG_DATA40_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA40_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA40_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA40_reg))
#define  EPI_EPI_CMPI_PG_DATA40_cmpi_pg_data40_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA40_cmpi_pg_data40_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA40_cmpi_pg_data40(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA40_get_cmpi_pg_data40(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA41                                                 0x18026404
#define  EPI_EPI_CMPI_PG_DATA41_reg_addr                                         "0xB8026404"
#define  EPI_EPI_CMPI_PG_DATA41_reg                                              0xB8026404
#define  EPI_EPI_CMPI_PG_DATA41_inst_addr                                        "0x004E"
#define  set_EPI_EPI_CMPI_PG_DATA41_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA41_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA41_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA41_reg))
#define  EPI_EPI_CMPI_PG_DATA41_cmpi_pg_data41_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA41_cmpi_pg_data41_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA41_cmpi_pg_data41(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA41_get_cmpi_pg_data41(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA42                                                 0x18026408
#define  EPI_EPI_CMPI_PG_DATA42_reg_addr                                         "0xB8026408"
#define  EPI_EPI_CMPI_PG_DATA42_reg                                              0xB8026408
#define  EPI_EPI_CMPI_PG_DATA42_inst_addr                                        "0x004F"
#define  set_EPI_EPI_CMPI_PG_DATA42_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA42_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA42_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA42_reg))
#define  EPI_EPI_CMPI_PG_DATA42_cmpi_pg_data42_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA42_cmpi_pg_data42_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA42_cmpi_pg_data42(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA42_get_cmpi_pg_data42(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA43                                                 0x1802640C
#define  EPI_EPI_CMPI_PG_DATA43_reg_addr                                         "0xB802640C"
#define  EPI_EPI_CMPI_PG_DATA43_reg                                              0xB802640C
#define  EPI_EPI_CMPI_PG_DATA43_inst_addr                                        "0x0050"
#define  set_EPI_EPI_CMPI_PG_DATA43_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA43_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA43_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA43_reg))
#define  EPI_EPI_CMPI_PG_DATA43_cmpi_pg_data43_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA43_cmpi_pg_data43_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA43_cmpi_pg_data43(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA43_get_cmpi_pg_data43(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA44                                                 0x18026410
#define  EPI_EPI_CMPI_PG_DATA44_reg_addr                                         "0xB8026410"
#define  EPI_EPI_CMPI_PG_DATA44_reg                                              0xB8026410
#define  EPI_EPI_CMPI_PG_DATA44_inst_addr                                        "0x0051"
#define  set_EPI_EPI_CMPI_PG_DATA44_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA44_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA44_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA44_reg))
#define  EPI_EPI_CMPI_PG_DATA44_cmpi_pg_data44_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA44_cmpi_pg_data44_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA44_cmpi_pg_data44(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA44_get_cmpi_pg_data44(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA45                                                 0x18026414
#define  EPI_EPI_CMPI_PG_DATA45_reg_addr                                         "0xB8026414"
#define  EPI_EPI_CMPI_PG_DATA45_reg                                              0xB8026414
#define  EPI_EPI_CMPI_PG_DATA45_inst_addr                                        "0x0052"
#define  set_EPI_EPI_CMPI_PG_DATA45_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA45_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA45_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA45_reg))
#define  EPI_EPI_CMPI_PG_DATA45_cmpi_pg_data45_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA45_cmpi_pg_data45_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA45_cmpi_pg_data45(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA45_get_cmpi_pg_data45(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA46                                                 0x18026418
#define  EPI_EPI_CMPI_PG_DATA46_reg_addr                                         "0xB8026418"
#define  EPI_EPI_CMPI_PG_DATA46_reg                                              0xB8026418
#define  EPI_EPI_CMPI_PG_DATA46_inst_addr                                        "0x0053"
#define  set_EPI_EPI_CMPI_PG_DATA46_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA46_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA46_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA46_reg))
#define  EPI_EPI_CMPI_PG_DATA46_cmpi_pg_data46_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA46_cmpi_pg_data46_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA46_cmpi_pg_data46(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA46_get_cmpi_pg_data46(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA47                                                 0x1802641C
#define  EPI_EPI_CMPI_PG_DATA47_reg_addr                                         "0xB802641C"
#define  EPI_EPI_CMPI_PG_DATA47_reg                                              0xB802641C
#define  EPI_EPI_CMPI_PG_DATA47_inst_addr                                        "0x0054"
#define  set_EPI_EPI_CMPI_PG_DATA47_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA47_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA47_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA47_reg))
#define  EPI_EPI_CMPI_PG_DATA47_cmpi_pg_data47_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA47_cmpi_pg_data47_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA47_cmpi_pg_data47(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA47_get_cmpi_pg_data47(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA48                                                 0x18026420
#define  EPI_EPI_CMPI_PG_DATA48_reg_addr                                         "0xB8026420"
#define  EPI_EPI_CMPI_PG_DATA48_reg                                              0xB8026420
#define  EPI_EPI_CMPI_PG_DATA48_inst_addr                                        "0x0055"
#define  set_EPI_EPI_CMPI_PG_DATA48_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA48_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA48_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA48_reg))
#define  EPI_EPI_CMPI_PG_DATA48_cmpi_pg_data48_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA48_cmpi_pg_data48_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA48_cmpi_pg_data48(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA48_get_cmpi_pg_data48(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA49                                                 0x18026424
#define  EPI_EPI_CMPI_PG_DATA49_reg_addr                                         "0xB8026424"
#define  EPI_EPI_CMPI_PG_DATA49_reg                                              0xB8026424
#define  EPI_EPI_CMPI_PG_DATA49_inst_addr                                        "0x0056"
#define  set_EPI_EPI_CMPI_PG_DATA49_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA49_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA49_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA49_reg))
#define  EPI_EPI_CMPI_PG_DATA49_cmpi_pg_data49_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA49_cmpi_pg_data49_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA49_cmpi_pg_data49(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA49_get_cmpi_pg_data49(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA50                                                 0x18026428
#define  EPI_EPI_CMPI_PG_DATA50_reg_addr                                         "0xB8026428"
#define  EPI_EPI_CMPI_PG_DATA50_reg                                              0xB8026428
#define  EPI_EPI_CMPI_PG_DATA50_inst_addr                                        "0x0057"
#define  set_EPI_EPI_CMPI_PG_DATA50_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA50_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA50_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA50_reg))
#define  EPI_EPI_CMPI_PG_DATA50_cmpi_pg_data50_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA50_cmpi_pg_data50_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA50_cmpi_pg_data50(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA50_get_cmpi_pg_data50(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA51                                                 0x1802642C
#define  EPI_EPI_CMPI_PG_DATA51_reg_addr                                         "0xB802642C"
#define  EPI_EPI_CMPI_PG_DATA51_reg                                              0xB802642C
#define  EPI_EPI_CMPI_PG_DATA51_inst_addr                                        "0x0058"
#define  set_EPI_EPI_CMPI_PG_DATA51_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA51_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA51_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA51_reg))
#define  EPI_EPI_CMPI_PG_DATA51_cmpi_pg_data51_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA51_cmpi_pg_data51_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA51_cmpi_pg_data51(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA51_get_cmpi_pg_data51(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA52                                                 0x18026430
#define  EPI_EPI_CMPI_PG_DATA52_reg_addr                                         "0xB8026430"
#define  EPI_EPI_CMPI_PG_DATA52_reg                                              0xB8026430
#define  EPI_EPI_CMPI_PG_DATA52_inst_addr                                        "0x0059"
#define  set_EPI_EPI_CMPI_PG_DATA52_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA52_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA52_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA52_reg))
#define  EPI_EPI_CMPI_PG_DATA52_cmpi_pg_data52_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA52_cmpi_pg_data52_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA52_cmpi_pg_data52(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA52_get_cmpi_pg_data52(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA53                                                 0x18026434
#define  EPI_EPI_CMPI_PG_DATA53_reg_addr                                         "0xB8026434"
#define  EPI_EPI_CMPI_PG_DATA53_reg                                              0xB8026434
#define  EPI_EPI_CMPI_PG_DATA53_inst_addr                                        "0x005A"
#define  set_EPI_EPI_CMPI_PG_DATA53_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA53_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA53_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA53_reg))
#define  EPI_EPI_CMPI_PG_DATA53_cmpi_pg_data53_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA53_cmpi_pg_data53_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA53_cmpi_pg_data53(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA53_get_cmpi_pg_data53(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA54                                                 0x18026438
#define  EPI_EPI_CMPI_PG_DATA54_reg_addr                                         "0xB8026438"
#define  EPI_EPI_CMPI_PG_DATA54_reg                                              0xB8026438
#define  EPI_EPI_CMPI_PG_DATA54_inst_addr                                        "0x005B"
#define  set_EPI_EPI_CMPI_PG_DATA54_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA54_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA54_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA54_reg))
#define  EPI_EPI_CMPI_PG_DATA54_cmpi_pg_data54_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA54_cmpi_pg_data54_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA54_cmpi_pg_data54(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA54_get_cmpi_pg_data54(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA55                                                 0x1802643C
#define  EPI_EPI_CMPI_PG_DATA55_reg_addr                                         "0xB802643C"
#define  EPI_EPI_CMPI_PG_DATA55_reg                                              0xB802643C
#define  EPI_EPI_CMPI_PG_DATA55_inst_addr                                        "0x005C"
#define  set_EPI_EPI_CMPI_PG_DATA55_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA55_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA55_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA55_reg))
#define  EPI_EPI_CMPI_PG_DATA55_cmpi_pg_data55_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA55_cmpi_pg_data55_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA55_cmpi_pg_data55(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA55_get_cmpi_pg_data55(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA56                                                 0x18026440
#define  EPI_EPI_CMPI_PG_DATA56_reg_addr                                         "0xB8026440"
#define  EPI_EPI_CMPI_PG_DATA56_reg                                              0xB8026440
#define  EPI_EPI_CMPI_PG_DATA56_inst_addr                                        "0x005D"
#define  set_EPI_EPI_CMPI_PG_DATA56_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA56_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA56_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA56_reg))
#define  EPI_EPI_CMPI_PG_DATA56_cmpi_pg_data56_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA56_cmpi_pg_data56_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA56_cmpi_pg_data56(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA56_get_cmpi_pg_data56(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA57                                                 0x18026444
#define  EPI_EPI_CMPI_PG_DATA57_reg_addr                                         "0xB8026444"
#define  EPI_EPI_CMPI_PG_DATA57_reg                                              0xB8026444
#define  EPI_EPI_CMPI_PG_DATA57_inst_addr                                        "0x005E"
#define  set_EPI_EPI_CMPI_PG_DATA57_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA57_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA57_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA57_reg))
#define  EPI_EPI_CMPI_PG_DATA57_cmpi_pg_data57_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA57_cmpi_pg_data57_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA57_cmpi_pg_data57(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA57_get_cmpi_pg_data57(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA58                                                 0x18026448
#define  EPI_EPI_CMPI_PG_DATA58_reg_addr                                         "0xB8026448"
#define  EPI_EPI_CMPI_PG_DATA58_reg                                              0xB8026448
#define  EPI_EPI_CMPI_PG_DATA58_inst_addr                                        "0x005F"
#define  set_EPI_EPI_CMPI_PG_DATA58_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA58_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA58_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA58_reg))
#define  EPI_EPI_CMPI_PG_DATA58_cmpi_pg_data58_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA58_cmpi_pg_data58_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA58_cmpi_pg_data58(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA58_get_cmpi_pg_data58(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_DATA59                                                 0x1802644C
#define  EPI_EPI_CMPI_PG_DATA59_reg_addr                                         "0xB802644C"
#define  EPI_EPI_CMPI_PG_DATA59_reg                                              0xB802644C
#define  EPI_EPI_CMPI_PG_DATA59_inst_addr                                        "0x0060"
#define  set_EPI_EPI_CMPI_PG_DATA59_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA59_reg)=data)
#define  get_EPI_EPI_CMPI_PG_DATA59_reg                                          (*((volatile unsigned int*)EPI_EPI_CMPI_PG_DATA59_reg))
#define  EPI_EPI_CMPI_PG_DATA59_cmpi_pg_data59_shift                             (0)
#define  EPI_EPI_CMPI_PG_DATA59_cmpi_pg_data59_mask                              (0x001FFFFF)
#define  EPI_EPI_CMPI_PG_DATA59_cmpi_pg_data59(data)                             (0x001FFFFF&(data))
#define  EPI_EPI_CMPI_PG_DATA59_get_cmpi_pg_data59(data)                         (0x001FFFFF&(data))

#define  EPI_EPI_CMPI_PG_END                                                    0x180261E0
#define  EPI_EPI_CMPI_PG_END_reg_addr                                            "0xB80261E0"
#define  EPI_EPI_CMPI_PG_END_reg                                                 0xB80261E0
#define  EPI_EPI_CMPI_PG_END_inst_addr                                           "0x0061"
#define  set_EPI_EPI_CMPI_PG_END_reg(data)                                       (*((volatile unsigned int*)EPI_EPI_CMPI_PG_END_reg)=data)
#define  get_EPI_EPI_CMPI_PG_END_reg                                             (*((volatile unsigned int*)EPI_EPI_CMPI_PG_END_reg))
#define  EPI_EPI_CMPI_PG_END_cmpi_pg_end_shift                                   (0)
#define  EPI_EPI_CMPI_PG_END_cmpi_pg_end_mask                                    (0x00FFFFFF)
#define  EPI_EPI_CMPI_PG_END_cmpi_pg_end(data)                                   (0x00FFFFFF&(data))
#define  EPI_EPI_CMPI_PG_END_get_cmpi_pg_end(data)                               (0x00FFFFFF&(data))

#define  EPI_EPI_LS_PORT_EN                                                     0x180261E4
#define  EPI_EPI_LS_PORT_EN_reg_addr                                             "0xB80261E4"
#define  EPI_EPI_LS_PORT_EN_reg                                                  0xB80261E4
#define  EPI_EPI_LS_PORT_EN_inst_addr                                            "0x0062"
#define  set_EPI_EPI_LS_PORT_EN_reg(data)                                        (*((volatile unsigned int*)EPI_EPI_LS_PORT_EN_reg)=data)
#define  get_EPI_EPI_LS_PORT_EN_reg                                              (*((volatile unsigned int*)EPI_EPI_LS_PORT_EN_reg))
#define  EPI_EPI_LS_PORT_EN_ls_port_en_shift                                     (0)
#define  EPI_EPI_LS_PORT_EN_ls_port_en_mask                                      (0x0000FFFF)
#define  EPI_EPI_LS_PORT_EN_ls_port_en(data)                                     (0x0000FFFF&(data))
#define  EPI_EPI_LS_PORT_EN_get_ls_port_en(data)                                 (0x0000FFFF&(data))

#define  EPI_EPI_FSM_SEL                                                        0x180261E8
#define  EPI_EPI_FSM_SEL_reg_addr                                                "0xB80261E8"
#define  EPI_EPI_FSM_SEL_reg                                                     0xB80261E8
#define  EPI_EPI_FSM_SEL_inst_addr                                               "0x0063"
#define  set_EPI_EPI_FSM_SEL_reg(data)                                           (*((volatile unsigned int*)EPI_EPI_FSM_SEL_reg)=data)
#define  get_EPI_EPI_FSM_SEL_reg                                                 (*((volatile unsigned int*)EPI_EPI_FSM_SEL_reg))
#define  EPI_EPI_FSM_SEL_ss_fsm_sel_shift                                        (0)
#define  EPI_EPI_FSM_SEL_ss_fsm_sel_mask                                         (0x0000FFFF)
#define  EPI_EPI_FSM_SEL_ss_fsm_sel(data)                                        (0x0000FFFF&(data))
#define  EPI_EPI_FSM_SEL_get_ss_fsm_sel(data)                                    (0x0000FFFF&(data))

#define  EPI_EPI_DATA_PORT_EN                                                   0x180261EC
#define  EPI_EPI_DATA_PORT_EN_reg_addr                                           "0xB80261EC"
#define  EPI_EPI_DATA_PORT_EN_reg                                                0xB80261EC
#define  EPI_EPI_DATA_PORT_EN_inst_addr                                          "0x0064"
#define  set_EPI_EPI_DATA_PORT_EN_reg(data)                                      (*((volatile unsigned int*)EPI_EPI_DATA_PORT_EN_reg)=data)
#define  get_EPI_EPI_DATA_PORT_EN_reg                                            (*((volatile unsigned int*)EPI_EPI_DATA_PORT_EN_reg))
#define  EPI_EPI_DATA_PORT_EN_constant_update_mode_shift                         (31)
#define  EPI_EPI_DATA_PORT_EN_data_port_en_shift                                 (0)
#define  EPI_EPI_DATA_PORT_EN_constant_update_mode_mask                          (0x80000000)
#define  EPI_EPI_DATA_PORT_EN_data_port_en_mask                                  (0x0000FFFF)
#define  EPI_EPI_DATA_PORT_EN_constant_update_mode(data)                         (0x80000000&((data)<<31))
#define  EPI_EPI_DATA_PORT_EN_data_port_en(data)                                 (0x0000FFFF&(data))
#define  EPI_EPI_DATA_PORT_EN_get_constant_update_mode(data)                     ((0x80000000&(data))>>31)
#define  EPI_EPI_DATA_PORT_EN_get_data_port_en(data)                             (0x0000FFFF&(data))

#define  EPI_EPI_DEN_FALL_LOCA                                                  0x180263F8
#define  EPI_EPI_DEN_FALL_LOCA_reg_addr                                          "0xB80263F8"
#define  EPI_EPI_DEN_FALL_LOCA_reg                                               0xB80263F8
#define  EPI_EPI_DEN_FALL_LOCA_inst_addr                                         "0x0065"
#define  set_EPI_EPI_DEN_FALL_LOCA_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_DEN_FALL_LOCA_reg)=data)
#define  get_EPI_EPI_DEN_FALL_LOCA_reg                                           (*((volatile unsigned int*)EPI_EPI_DEN_FALL_LOCA_reg))
#define  EPI_EPI_DEN_FALL_LOCA_sw_cal_shift                                      (31)
#define  EPI_EPI_DEN_FALL_LOCA_sw_cal_value_shift                                (0)
#define  EPI_EPI_DEN_FALL_LOCA_sw_cal_mask                                       (0x80000000)
#define  EPI_EPI_DEN_FALL_LOCA_sw_cal_value_mask                                 (0x00003FFF)
#define  EPI_EPI_DEN_FALL_LOCA_sw_cal(data)                                      (0x80000000&((data)<<31))
#define  EPI_EPI_DEN_FALL_LOCA_sw_cal_value(data)                                (0x00003FFF&(data))
#define  EPI_EPI_DEN_FALL_LOCA_get_sw_cal(data)                                  ((0x80000000&(data))>>31)
#define  EPI_EPI_DEN_FALL_LOCA_get_sw_cal_value(data)                            (0x00003FFF&(data))

#define  EPI_EPI_LOCK_DEBOUNCE_CTL                                              0x180263FC
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_reg_addr                                      "0xB80263FC"
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_reg                                           0xB80263FC
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_inst_addr                                     "0x0066"
#define  set_EPI_EPI_LOCK_DEBOUNCE_CTL_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LOCK_DEBOUNCE_CTL_reg)=data)
#define  get_EPI_EPI_LOCK_DEBOUNCE_CTL_reg                                       (*((volatile unsigned int*)EPI_EPI_LOCK_DEBOUNCE_CTL_reg))
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_debounce_hi_window_shift                      (16)
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_debounce_low_window_shift                     (1)
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_debounce_en_shift                             (0)
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_debounce_hi_window_mask                       (0x0FFF0000)
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_debounce_low_window_mask                      (0x00001FFE)
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_debounce_en_mask                              (0x00000001)
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_debounce_hi_window(data)                      (0x0FFF0000&((data)<<16))
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_debounce_low_window(data)                     (0x00001FFE&((data)<<1))
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_debounce_en(data)                             (0x00000001&(data))
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_get_debounce_hi_window(data)                  ((0x0FFF0000&(data))>>16)
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_get_debounce_low_window(data)                 ((0x00001FFE&(data))>>1)
#define  EPI_EPI_LOCK_DEBOUNCE_CTL_get_debounce_en(data)                         (0x00000001&(data))

#define  EPI_EPI_DBG_REG_FLAG                                                   0x180261F0
#define  EPI_EPI_DBG_REG_FLAG_reg_addr                                           "0xB80261F0"
#define  EPI_EPI_DBG_REG_FLAG_reg                                                0xB80261F0
#define  EPI_EPI_DBG_REG_FLAG_inst_addr                                          "0x0067"
#define  set_EPI_EPI_DBG_REG_FLAG_reg(data)                                      (*((volatile unsigned int*)EPI_EPI_DBG_REG_FLAG_reg)=data)
#define  get_EPI_EPI_DBG_REG_FLAG_reg                                            (*((volatile unsigned int*)EPI_EPI_DBG_REG_FLAG_reg))
#define  EPI_EPI_DBG_REG_FLAG_hs_distance_flag_shift                             (3)
#define  EPI_EPI_DBG_REG_FLAG_hs_den_length_flag_shift                           (2)
#define  EPI_EPI_DBG_REG_FLAG_den_length_flag_shift                              (1)
#define  EPI_EPI_DBG_REG_FLAG_den_num_flag_shift                                 (0)
#define  EPI_EPI_DBG_REG_FLAG_hs_distance_flag_mask                              (0x00000008)
#define  EPI_EPI_DBG_REG_FLAG_hs_den_length_flag_mask                            (0x00000004)
#define  EPI_EPI_DBG_REG_FLAG_den_length_flag_mask                               (0x00000002)
#define  EPI_EPI_DBG_REG_FLAG_den_num_flag_mask                                  (0x00000001)
#define  EPI_EPI_DBG_REG_FLAG_hs_distance_flag(data)                             (0x00000008&((data)<<3))
#define  EPI_EPI_DBG_REG_FLAG_hs_den_length_flag(data)                           (0x00000004&((data)<<2))
#define  EPI_EPI_DBG_REG_FLAG_den_length_flag(data)                              (0x00000002&((data)<<1))
#define  EPI_EPI_DBG_REG_FLAG_den_num_flag(data)                                 (0x00000001&(data))
#define  EPI_EPI_DBG_REG_FLAG_get_hs_distance_flag(data)                         ((0x00000008&(data))>>3)
#define  EPI_EPI_DBG_REG_FLAG_get_hs_den_length_flag(data)                       ((0x00000004&(data))>>2)
#define  EPI_EPI_DBG_REG_FLAG_get_den_length_flag(data)                          ((0x00000002&(data))>>1)
#define  EPI_EPI_DBG_REG_FLAG_get_den_num_flag(data)                             (0x00000001&(data))

#define  EPI_EPI_DBG_REG_CTL                                                    0x180261F4
#define  EPI_EPI_DBG_REG_CTL_reg_addr                                            "0xB80261F4"
#define  EPI_EPI_DBG_REG_CTL_reg                                                 0xB80261F4
#define  EPI_EPI_DBG_REG_CTL_inst_addr                                           "0x0068"
#define  set_EPI_EPI_DBG_REG_CTL_reg(data)                                       (*((volatile unsigned int*)EPI_EPI_DBG_REG_CTL_reg)=data)
#define  get_EPI_EPI_DBG_REG_CTL_reg                                             (*((volatile unsigned int*)EPI_EPI_DBG_REG_CTL_reg))
#define  EPI_EPI_DBG_REG_CTL_hs_distance_det_en_shift                            (3)
#define  EPI_EPI_DBG_REG_CTL_hs_den_length_det_en_shift                          (2)
#define  EPI_EPI_DBG_REG_CTL_den_length_det_en_shift                             (1)
#define  EPI_EPI_DBG_REG_CTL_den_num_det_en_shift                                (0)
#define  EPI_EPI_DBG_REG_CTL_hs_distance_det_en_mask                             (0x00000008)
#define  EPI_EPI_DBG_REG_CTL_hs_den_length_det_en_mask                           (0x00000004)
#define  EPI_EPI_DBG_REG_CTL_den_length_det_en_mask                              (0x00000002)
#define  EPI_EPI_DBG_REG_CTL_den_num_det_en_mask                                 (0x00000001)
#define  EPI_EPI_DBG_REG_CTL_hs_distance_det_en(data)                            (0x00000008&((data)<<3))
#define  EPI_EPI_DBG_REG_CTL_hs_den_length_det_en(data)                          (0x00000004&((data)<<2))
#define  EPI_EPI_DBG_REG_CTL_den_length_det_en(data)                             (0x00000002&((data)<<1))
#define  EPI_EPI_DBG_REG_CTL_den_num_det_en(data)                                (0x00000001&(data))
#define  EPI_EPI_DBG_REG_CTL_get_hs_distance_det_en(data)                        ((0x00000008&(data))>>3)
#define  EPI_EPI_DBG_REG_CTL_get_hs_den_length_det_en(data)                      ((0x00000004&(data))>>2)
#define  EPI_EPI_DBG_REG_CTL_get_den_length_det_en(data)                         ((0x00000002&(data))>>1)
#define  EPI_EPI_DBG_REG_CTL_get_den_num_det_en(data)                            (0x00000001&(data))

#define  EPI_EPI_SOE_CONTROL                                                    0x180261FC
#define  EPI_EPI_SOE_CONTROL_reg_addr                                            "0xB80261FC"
#define  EPI_EPI_SOE_CONTROL_reg                                                 0xB80261FC
#define  EPI_EPI_SOE_CONTROL_inst_addr                                           "0x0069"
#define  set_EPI_EPI_SOE_CONTROL_reg(data)                                       (*((volatile unsigned int*)EPI_EPI_SOE_CONTROL_reg)=data)
#define  get_EPI_EPI_SOE_CONTROL_reg                                             (*((volatile unsigned int*)EPI_EPI_SOE_CONTROL_reg))
#define  EPI_EPI_SOE_CONTROL_soe_table_line_cycle_shift                          (2)
#define  EPI_EPI_SOE_CONTROL_ctr12_ref_soe_shift                                 (0)
#define  EPI_EPI_SOE_CONTROL_soe_table_line_cycle_mask                           (0x0000000C)
#define  EPI_EPI_SOE_CONTROL_ctr12_ref_soe_mask                                  (0x00000003)
#define  EPI_EPI_SOE_CONTROL_soe_table_line_cycle(data)                          (0x0000000C&((data)<<2))
#define  EPI_EPI_SOE_CONTROL_ctr12_ref_soe(data)                                 (0x00000003&(data))
#define  EPI_EPI_SOE_CONTROL_get_soe_table_line_cycle(data)                      ((0x0000000C&(data))>>2)
#define  EPI_EPI_SOE_CONTROL_get_ctr12_ref_soe(data)                             (0x00000003&(data))

#define  EPI_EPI_SOE_LINE0_LANE0                                                0x18026200
#define  EPI_EPI_SOE_LINE0_LANE0_reg_addr                                        "0xB8026200"
#define  EPI_EPI_SOE_LINE0_LANE0_reg                                             0xB8026200
#define  EPI_EPI_SOE_LINE0_LANE0_inst_addr                                       "0x006A"
#define  set_EPI_EPI_SOE_LINE0_LANE0_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE0_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE0_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE0_reg))
#define  EPI_EPI_SOE_LINE0_LANE0_lane0_soe0_shift                                (0)
#define  EPI_EPI_SOE_LINE0_LANE0_lane0_soe0_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE0_lane0_soe0(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE0_get_lane0_soe0(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE0                                                0x18026204
#define  EPI_EPI_SOE_LINE1_LANE0_reg_addr                                        "0xB8026204"
#define  EPI_EPI_SOE_LINE1_LANE0_reg                                             0xB8026204
#define  EPI_EPI_SOE_LINE1_LANE0_inst_addr                                       "0x006B"
#define  set_EPI_EPI_SOE_LINE1_LANE0_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE0_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE0_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE0_reg))
#define  EPI_EPI_SOE_LINE1_LANE0_lane0_soe1_shift                                (0)
#define  EPI_EPI_SOE_LINE1_LANE0_lane0_soe1_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE0_lane0_soe1(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE0_get_lane0_soe1(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE0                                                0x18026208
#define  EPI_EPI_SOE_LINE2_LANE0_reg_addr                                        "0xB8026208"
#define  EPI_EPI_SOE_LINE2_LANE0_reg                                             0xB8026208
#define  EPI_EPI_SOE_LINE2_LANE0_inst_addr                                       "0x006C"
#define  set_EPI_EPI_SOE_LINE2_LANE0_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE0_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE0_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE0_reg))
#define  EPI_EPI_SOE_LINE2_LANE0_lane0_soe2_shift                                (0)
#define  EPI_EPI_SOE_LINE2_LANE0_lane0_soe2_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE0_lane0_soe2(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE0_get_lane0_soe2(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE0                                                0x1802620C
#define  EPI_EPI_SOE_LINE3_LANE0_reg_addr                                        "0xB802620C"
#define  EPI_EPI_SOE_LINE3_LANE0_reg                                             0xB802620C
#define  EPI_EPI_SOE_LINE3_LANE0_inst_addr                                       "0x006D"
#define  set_EPI_EPI_SOE_LINE3_LANE0_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE0_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE0_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE0_reg))
#define  EPI_EPI_SOE_LINE3_LANE0_lane0_soe3_shift                                (0)
#define  EPI_EPI_SOE_LINE3_LANE0_lane0_soe3_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE0_lane0_soe3(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE0_get_lane0_soe3(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE1                                                0x18026210
#define  EPI_EPI_SOE_LINE0_LANE1_reg_addr                                        "0xB8026210"
#define  EPI_EPI_SOE_LINE0_LANE1_reg                                             0xB8026210
#define  EPI_EPI_SOE_LINE0_LANE1_inst_addr                                       "0x006E"
#define  set_EPI_EPI_SOE_LINE0_LANE1_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE1_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE1_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE1_reg))
#define  EPI_EPI_SOE_LINE0_LANE1_lane1_soe0_shift                                (0)
#define  EPI_EPI_SOE_LINE0_LANE1_lane1_soe0_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE1_lane1_soe0(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE1_get_lane1_soe0(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE1                                                0x18026214
#define  EPI_EPI_SOE_LINE1_LANE1_reg_addr                                        "0xB8026214"
#define  EPI_EPI_SOE_LINE1_LANE1_reg                                             0xB8026214
#define  EPI_EPI_SOE_LINE1_LANE1_inst_addr                                       "0x006F"
#define  set_EPI_EPI_SOE_LINE1_LANE1_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE1_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE1_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE1_reg))
#define  EPI_EPI_SOE_LINE1_LANE1_lane1_soe1_shift                                (0)
#define  EPI_EPI_SOE_LINE1_LANE1_lane1_soe1_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE1_lane1_soe1(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE1_get_lane1_soe1(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE1                                                0x18026218
#define  EPI_EPI_SOE_LINE2_LANE1_reg_addr                                        "0xB8026218"
#define  EPI_EPI_SOE_LINE2_LANE1_reg                                             0xB8026218
#define  EPI_EPI_SOE_LINE2_LANE1_inst_addr                                       "0x0070"
#define  set_EPI_EPI_SOE_LINE2_LANE1_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE1_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE1_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE1_reg))
#define  EPI_EPI_SOE_LINE2_LANE1_lane1_soe2_shift                                (0)
#define  EPI_EPI_SOE_LINE2_LANE1_lane1_soe2_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE1_lane1_soe2(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE1_get_lane1_soe2(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE1                                                0x1802621C
#define  EPI_EPI_SOE_LINE3_LANE1_reg_addr                                        "0xB802621C"
#define  EPI_EPI_SOE_LINE3_LANE1_reg                                             0xB802621C
#define  EPI_EPI_SOE_LINE3_LANE1_inst_addr                                       "0x0071"
#define  set_EPI_EPI_SOE_LINE3_LANE1_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE1_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE1_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE1_reg))
#define  EPI_EPI_SOE_LINE3_LANE1_lane1_soe3_shift                                (0)
#define  EPI_EPI_SOE_LINE3_LANE1_lane1_soe3_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE1_lane1_soe3(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE1_get_lane1_soe3(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE2                                                0x18026220
#define  EPI_EPI_SOE_LINE0_LANE2_reg_addr                                        "0xB8026220"
#define  EPI_EPI_SOE_LINE0_LANE2_reg                                             0xB8026220
#define  EPI_EPI_SOE_LINE0_LANE2_inst_addr                                       "0x0072"
#define  set_EPI_EPI_SOE_LINE0_LANE2_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE2_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE2_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE2_reg))
#define  EPI_EPI_SOE_LINE0_LANE2_lane2_soe0_shift                                (0)
#define  EPI_EPI_SOE_LINE0_LANE2_lane2_soe0_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE2_lane2_soe0(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE2_get_lane2_soe0(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE2                                                0x18026224
#define  EPI_EPI_SOE_LINE1_LANE2_reg_addr                                        "0xB8026224"
#define  EPI_EPI_SOE_LINE1_LANE2_reg                                             0xB8026224
#define  EPI_EPI_SOE_LINE1_LANE2_inst_addr                                       "0x0073"
#define  set_EPI_EPI_SOE_LINE1_LANE2_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE2_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE2_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE2_reg))
#define  EPI_EPI_SOE_LINE1_LANE2_lane2_soe1_shift                                (0)
#define  EPI_EPI_SOE_LINE1_LANE2_lane2_soe1_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE2_lane2_soe1(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE2_get_lane2_soe1(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE2                                                0x18026228
#define  EPI_EPI_SOE_LINE2_LANE2_reg_addr                                        "0xB8026228"
#define  EPI_EPI_SOE_LINE2_LANE2_reg                                             0xB8026228
#define  EPI_EPI_SOE_LINE2_LANE2_inst_addr                                       "0x0074"
#define  set_EPI_EPI_SOE_LINE2_LANE2_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE2_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE2_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE2_reg))
#define  EPI_EPI_SOE_LINE2_LANE2_lane2_soe2_shift                                (0)
#define  EPI_EPI_SOE_LINE2_LANE2_lane2_soe2_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE2_lane2_soe2(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE2_get_lane2_soe2(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE2                                                0x1802622C
#define  EPI_EPI_SOE_LINE3_LANE2_reg_addr                                        "0xB802622C"
#define  EPI_EPI_SOE_LINE3_LANE2_reg                                             0xB802622C
#define  EPI_EPI_SOE_LINE3_LANE2_inst_addr                                       "0x0075"
#define  set_EPI_EPI_SOE_LINE3_LANE2_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE2_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE2_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE2_reg))
#define  EPI_EPI_SOE_LINE3_LANE2_lane2_soe3_shift                                (0)
#define  EPI_EPI_SOE_LINE3_LANE2_lane2_soe3_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE2_lane2_soe3(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE2_get_lane2_soe3(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE3                                                0x18026230
#define  EPI_EPI_SOE_LINE0_LANE3_reg_addr                                        "0xB8026230"
#define  EPI_EPI_SOE_LINE0_LANE3_reg                                             0xB8026230
#define  EPI_EPI_SOE_LINE0_LANE3_inst_addr                                       "0x0076"
#define  set_EPI_EPI_SOE_LINE0_LANE3_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE3_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE3_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE3_reg))
#define  EPI_EPI_SOE_LINE0_LANE3_lane3_soe0_shift                                (0)
#define  EPI_EPI_SOE_LINE0_LANE3_lane3_soe0_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE3_lane3_soe0(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE3_get_lane3_soe0(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE3                                                0x18026234
#define  EPI_EPI_SOE_LINE1_LANE3_reg_addr                                        "0xB8026234"
#define  EPI_EPI_SOE_LINE1_LANE3_reg                                             0xB8026234
#define  EPI_EPI_SOE_LINE1_LANE3_inst_addr                                       "0x0077"
#define  set_EPI_EPI_SOE_LINE1_LANE3_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE3_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE3_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE3_reg))
#define  EPI_EPI_SOE_LINE1_LANE3_lane3_soe1_shift                                (0)
#define  EPI_EPI_SOE_LINE1_LANE3_lane3_soe1_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE3_lane3_soe1(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE3_get_lane3_soe1(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE3                                                0x18026238
#define  EPI_EPI_SOE_LINE2_LANE3_reg_addr                                        "0xB8026238"
#define  EPI_EPI_SOE_LINE2_LANE3_reg                                             0xB8026238
#define  EPI_EPI_SOE_LINE2_LANE3_inst_addr                                       "0x0078"
#define  set_EPI_EPI_SOE_LINE2_LANE3_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE3_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE3_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE3_reg))
#define  EPI_EPI_SOE_LINE2_LANE3_lane3_soe2_shift                                (0)
#define  EPI_EPI_SOE_LINE2_LANE3_lane3_soe2_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE3_lane3_soe2(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE3_get_lane3_soe2(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE3                                                0x1802623C
#define  EPI_EPI_SOE_LINE3_LANE3_reg_addr                                        "0xB802623C"
#define  EPI_EPI_SOE_LINE3_LANE3_reg                                             0xB802623C
#define  EPI_EPI_SOE_LINE3_LANE3_inst_addr                                       "0x0079"
#define  set_EPI_EPI_SOE_LINE3_LANE3_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE3_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE3_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE3_reg))
#define  EPI_EPI_SOE_LINE3_LANE3_lane3_soe3_shift                                (0)
#define  EPI_EPI_SOE_LINE3_LANE3_lane3_soe3_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE3_lane3_soe3(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE3_get_lane3_soe3(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE4                                                0x18026240
#define  EPI_EPI_SOE_LINE0_LANE4_reg_addr                                        "0xB8026240"
#define  EPI_EPI_SOE_LINE0_LANE4_reg                                             0xB8026240
#define  EPI_EPI_SOE_LINE0_LANE4_inst_addr                                       "0x007A"
#define  set_EPI_EPI_SOE_LINE0_LANE4_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE4_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE4_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE4_reg))
#define  EPI_EPI_SOE_LINE0_LANE4_lane4_soe0_shift                                (0)
#define  EPI_EPI_SOE_LINE0_LANE4_lane4_soe0_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE4_lane4_soe0(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE4_get_lane4_soe0(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE4                                                0x18026244
#define  EPI_EPI_SOE_LINE1_LANE4_reg_addr                                        "0xB8026244"
#define  EPI_EPI_SOE_LINE1_LANE4_reg                                             0xB8026244
#define  EPI_EPI_SOE_LINE1_LANE4_inst_addr                                       "0x007B"
#define  set_EPI_EPI_SOE_LINE1_LANE4_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE4_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE4_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE4_reg))
#define  EPI_EPI_SOE_LINE1_LANE4_lane4_soe1_shift                                (0)
#define  EPI_EPI_SOE_LINE1_LANE4_lane4_soe1_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE4_lane4_soe1(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE4_get_lane4_soe1(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE4                                                0x18026248
#define  EPI_EPI_SOE_LINE2_LANE4_reg_addr                                        "0xB8026248"
#define  EPI_EPI_SOE_LINE2_LANE4_reg                                             0xB8026248
#define  EPI_EPI_SOE_LINE2_LANE4_inst_addr                                       "0x007C"
#define  set_EPI_EPI_SOE_LINE2_LANE4_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE4_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE4_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE4_reg))
#define  EPI_EPI_SOE_LINE2_LANE4_lane4_soe2_shift                                (0)
#define  EPI_EPI_SOE_LINE2_LANE4_lane4_soe2_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE4_lane4_soe2(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE4_get_lane4_soe2(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE4                                                0x1802624C
#define  EPI_EPI_SOE_LINE3_LANE4_reg_addr                                        "0xB802624C"
#define  EPI_EPI_SOE_LINE3_LANE4_reg                                             0xB802624C
#define  EPI_EPI_SOE_LINE3_LANE4_inst_addr                                       "0x007D"
#define  set_EPI_EPI_SOE_LINE3_LANE4_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE4_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE4_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE4_reg))
#define  EPI_EPI_SOE_LINE3_LANE4_lane4_soe3_shift                                (0)
#define  EPI_EPI_SOE_LINE3_LANE4_lane4_soe3_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE4_lane4_soe3(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE4_get_lane4_soe3(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE5                                                0x18026250
#define  EPI_EPI_SOE_LINE0_LANE5_reg_addr                                        "0xB8026250"
#define  EPI_EPI_SOE_LINE0_LANE5_reg                                             0xB8026250
#define  EPI_EPI_SOE_LINE0_LANE5_inst_addr                                       "0x007E"
#define  set_EPI_EPI_SOE_LINE0_LANE5_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE5_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE5_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE5_reg))
#define  EPI_EPI_SOE_LINE0_LANE5_lane5_soe0_shift                                (0)
#define  EPI_EPI_SOE_LINE0_LANE5_lane5_soe0_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE5_lane5_soe0(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE5_get_lane5_soe0(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE5                                                0x18026254
#define  EPI_EPI_SOE_LINE1_LANE5_reg_addr                                        "0xB8026254"
#define  EPI_EPI_SOE_LINE1_LANE5_reg                                             0xB8026254
#define  EPI_EPI_SOE_LINE1_LANE5_inst_addr                                       "0x007F"
#define  set_EPI_EPI_SOE_LINE1_LANE5_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE5_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE5_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE5_reg))
#define  EPI_EPI_SOE_LINE1_LANE5_lane5_soe1_shift                                (0)
#define  EPI_EPI_SOE_LINE1_LANE5_lane5_soe1_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE5_lane5_soe1(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE5_get_lane5_soe1(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE5                                                0x18026258
#define  EPI_EPI_SOE_LINE2_LANE5_reg_addr                                        "0xB8026258"
#define  EPI_EPI_SOE_LINE2_LANE5_reg                                             0xB8026258
#define  EPI_EPI_SOE_LINE2_LANE5_inst_addr                                       "0x0080"
#define  set_EPI_EPI_SOE_LINE2_LANE5_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE5_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE5_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE5_reg))
#define  EPI_EPI_SOE_LINE2_LANE5_lane5_soe2_shift                                (0)
#define  EPI_EPI_SOE_LINE2_LANE5_lane5_soe2_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE5_lane5_soe2(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE5_get_lane5_soe2(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE5                                                0x1802625C
#define  EPI_EPI_SOE_LINE3_LANE5_reg_addr                                        "0xB802625C"
#define  EPI_EPI_SOE_LINE3_LANE5_reg                                             0xB802625C
#define  EPI_EPI_SOE_LINE3_LANE5_inst_addr                                       "0x0081"
#define  set_EPI_EPI_SOE_LINE3_LANE5_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE5_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE5_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE5_reg))
#define  EPI_EPI_SOE_LINE3_LANE5_lane5_soe3_shift                                (0)
#define  EPI_EPI_SOE_LINE3_LANE5_lane5_soe3_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE5_lane5_soe3(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE5_get_lane5_soe3(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE6                                                0x18026260
#define  EPI_EPI_SOE_LINE0_LANE6_reg_addr                                        "0xB8026260"
#define  EPI_EPI_SOE_LINE0_LANE6_reg                                             0xB8026260
#define  EPI_EPI_SOE_LINE0_LANE6_inst_addr                                       "0x0082"
#define  set_EPI_EPI_SOE_LINE0_LANE6_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE6_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE6_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE6_reg))
#define  EPI_EPI_SOE_LINE0_LANE6_lane6_soe0_shift                                (0)
#define  EPI_EPI_SOE_LINE0_LANE6_lane6_soe0_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE6_lane6_soe0(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE6_get_lane6_soe0(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE6                                                0x18026264
#define  EPI_EPI_SOE_LINE1_LANE6_reg_addr                                        "0xB8026264"
#define  EPI_EPI_SOE_LINE1_LANE6_reg                                             0xB8026264
#define  EPI_EPI_SOE_LINE1_LANE6_inst_addr                                       "0x0083"
#define  set_EPI_EPI_SOE_LINE1_LANE6_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE6_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE6_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE6_reg))
#define  EPI_EPI_SOE_LINE1_LANE6_lane6_soe1_shift                                (0)
#define  EPI_EPI_SOE_LINE1_LANE6_lane6_soe1_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE6_lane6_soe1(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE6_get_lane6_soe1(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE6                                                0x18026268
#define  EPI_EPI_SOE_LINE2_LANE6_reg_addr                                        "0xB8026268"
#define  EPI_EPI_SOE_LINE2_LANE6_reg                                             0xB8026268
#define  EPI_EPI_SOE_LINE2_LANE6_inst_addr                                       "0x0084"
#define  set_EPI_EPI_SOE_LINE2_LANE6_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE6_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE6_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE6_reg))
#define  EPI_EPI_SOE_LINE2_LANE6_lane6_soe2_shift                                (0)
#define  EPI_EPI_SOE_LINE2_LANE6_lane6_soe2_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE6_lane6_soe2(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE6_get_lane6_soe2(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE6                                                0x1802626C
#define  EPI_EPI_SOE_LINE3_LANE6_reg_addr                                        "0xB802626C"
#define  EPI_EPI_SOE_LINE3_LANE6_reg                                             0xB802626C
#define  EPI_EPI_SOE_LINE3_LANE6_inst_addr                                       "0x0085"
#define  set_EPI_EPI_SOE_LINE3_LANE6_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE6_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE6_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE6_reg))
#define  EPI_EPI_SOE_LINE3_LANE6_lane6_soe3_shift                                (0)
#define  EPI_EPI_SOE_LINE3_LANE6_lane6_soe3_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE6_lane6_soe3(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE6_get_lane6_soe3(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE7                                                0x18026270
#define  EPI_EPI_SOE_LINE0_LANE7_reg_addr                                        "0xB8026270"
#define  EPI_EPI_SOE_LINE0_LANE7_reg                                             0xB8026270
#define  EPI_EPI_SOE_LINE0_LANE7_inst_addr                                       "0x0086"
#define  set_EPI_EPI_SOE_LINE0_LANE7_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE7_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE7_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE7_reg))
#define  EPI_EPI_SOE_LINE0_LANE7_lane7_soe0_shift                                (0)
#define  EPI_EPI_SOE_LINE0_LANE7_lane7_soe0_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE7_lane7_soe0(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE7_get_lane7_soe0(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE7                                                0x18026274
#define  EPI_EPI_SOE_LINE1_LANE7_reg_addr                                        "0xB8026274"
#define  EPI_EPI_SOE_LINE1_LANE7_reg                                             0xB8026274
#define  EPI_EPI_SOE_LINE1_LANE7_inst_addr                                       "0x0087"
#define  set_EPI_EPI_SOE_LINE1_LANE7_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE7_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE7_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE7_reg))
#define  EPI_EPI_SOE_LINE1_LANE7_lane7_soe1_shift                                (0)
#define  EPI_EPI_SOE_LINE1_LANE7_lane7_soe1_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE7_lane7_soe1(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE7_get_lane7_soe1(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE7                                                0x18026278
#define  EPI_EPI_SOE_LINE2_LANE7_reg_addr                                        "0xB8026278"
#define  EPI_EPI_SOE_LINE2_LANE7_reg                                             0xB8026278
#define  EPI_EPI_SOE_LINE2_LANE7_inst_addr                                       "0x0088"
#define  set_EPI_EPI_SOE_LINE2_LANE7_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE7_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE7_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE7_reg))
#define  EPI_EPI_SOE_LINE2_LANE7_lane7_soe2_shift                                (0)
#define  EPI_EPI_SOE_LINE2_LANE7_lane7_soe2_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE7_lane7_soe2(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE7_get_lane7_soe2(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE7                                                0x1802627C
#define  EPI_EPI_SOE_LINE3_LANE7_reg_addr                                        "0xB802627C"
#define  EPI_EPI_SOE_LINE3_LANE7_reg                                             0xB802627C
#define  EPI_EPI_SOE_LINE3_LANE7_inst_addr                                       "0x0089"
#define  set_EPI_EPI_SOE_LINE3_LANE7_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE7_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE7_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE7_reg))
#define  EPI_EPI_SOE_LINE3_LANE7_lane7_soe3_shift                                (0)
#define  EPI_EPI_SOE_LINE3_LANE7_lane7_soe3_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE7_lane7_soe3(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE7_get_lane7_soe3(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE8                                                0x18026280
#define  EPI_EPI_SOE_LINE0_LANE8_reg_addr                                        "0xB8026280"
#define  EPI_EPI_SOE_LINE0_LANE8_reg                                             0xB8026280
#define  EPI_EPI_SOE_LINE0_LANE8_inst_addr                                       "0x008A"
#define  set_EPI_EPI_SOE_LINE0_LANE8_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE8_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE8_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE8_reg))
#define  EPI_EPI_SOE_LINE0_LANE8_lane8_soe0_shift                                (0)
#define  EPI_EPI_SOE_LINE0_LANE8_lane8_soe0_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE8_lane8_soe0(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE8_get_lane8_soe0(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE8                                                0x18026284
#define  EPI_EPI_SOE_LINE1_LANE8_reg_addr                                        "0xB8026284"
#define  EPI_EPI_SOE_LINE1_LANE8_reg                                             0xB8026284
#define  EPI_EPI_SOE_LINE1_LANE8_inst_addr                                       "0x008B"
#define  set_EPI_EPI_SOE_LINE1_LANE8_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE8_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE8_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE8_reg))
#define  EPI_EPI_SOE_LINE1_LANE8_lane8_soe1_shift                                (0)
#define  EPI_EPI_SOE_LINE1_LANE8_lane8_soe1_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE8_lane8_soe1(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE8_get_lane8_soe1(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE8                                                0x18026288
#define  EPI_EPI_SOE_LINE2_LANE8_reg_addr                                        "0xB8026288"
#define  EPI_EPI_SOE_LINE2_LANE8_reg                                             0xB8026288
#define  EPI_EPI_SOE_LINE2_LANE8_inst_addr                                       "0x008C"
#define  set_EPI_EPI_SOE_LINE2_LANE8_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE8_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE8_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE8_reg))
#define  EPI_EPI_SOE_LINE2_LANE8_lane8_soe2_shift                                (0)
#define  EPI_EPI_SOE_LINE2_LANE8_lane8_soe2_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE8_lane8_soe2(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE8_get_lane8_soe2(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE8                                                0x1802628C
#define  EPI_EPI_SOE_LINE3_LANE8_reg_addr                                        "0xB802628C"
#define  EPI_EPI_SOE_LINE3_LANE8_reg                                             0xB802628C
#define  EPI_EPI_SOE_LINE3_LANE8_inst_addr                                       "0x008D"
#define  set_EPI_EPI_SOE_LINE3_LANE8_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE8_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE8_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE8_reg))
#define  EPI_EPI_SOE_LINE3_LANE8_lane8_soe3_shift                                (0)
#define  EPI_EPI_SOE_LINE3_LANE8_lane8_soe3_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE8_lane8_soe3(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE8_get_lane8_soe3(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE9                                                0x18026290
#define  EPI_EPI_SOE_LINE0_LANE9_reg_addr                                        "0xB8026290"
#define  EPI_EPI_SOE_LINE0_LANE9_reg                                             0xB8026290
#define  EPI_EPI_SOE_LINE0_LANE9_inst_addr                                       "0x008E"
#define  set_EPI_EPI_SOE_LINE0_LANE9_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE9_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE9_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE9_reg))
#define  EPI_EPI_SOE_LINE0_LANE9_lane9_soe0_shift                                (0)
#define  EPI_EPI_SOE_LINE0_LANE9_lane9_soe0_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE9_lane9_soe0(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE9_get_lane9_soe0(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE9                                                0x18026294
#define  EPI_EPI_SOE_LINE1_LANE9_reg_addr                                        "0xB8026294"
#define  EPI_EPI_SOE_LINE1_LANE9_reg                                             0xB8026294
#define  EPI_EPI_SOE_LINE1_LANE9_inst_addr                                       "0x008F"
#define  set_EPI_EPI_SOE_LINE1_LANE9_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE9_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE9_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE9_reg))
#define  EPI_EPI_SOE_LINE1_LANE9_lane9_soe1_shift                                (0)
#define  EPI_EPI_SOE_LINE1_LANE9_lane9_soe1_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE9_lane9_soe1(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE9_get_lane9_soe1(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE9                                                0x18026298
#define  EPI_EPI_SOE_LINE2_LANE9_reg_addr                                        "0xB8026298"
#define  EPI_EPI_SOE_LINE2_LANE9_reg                                             0xB8026298
#define  EPI_EPI_SOE_LINE2_LANE9_inst_addr                                       "0x0090"
#define  set_EPI_EPI_SOE_LINE2_LANE9_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE9_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE9_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE9_reg))
#define  EPI_EPI_SOE_LINE2_LANE9_lane9_soe2_shift                                (0)
#define  EPI_EPI_SOE_LINE2_LANE9_lane9_soe2_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE9_lane9_soe2(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE9_get_lane9_soe2(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE9                                                0x1802629C
#define  EPI_EPI_SOE_LINE3_LANE9_reg_addr                                        "0xB802629C"
#define  EPI_EPI_SOE_LINE3_LANE9_reg                                             0xB802629C
#define  EPI_EPI_SOE_LINE3_LANE9_inst_addr                                       "0x0091"
#define  set_EPI_EPI_SOE_LINE3_LANE9_reg(data)                                   (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE9_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE9_reg                                         (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE9_reg))
#define  EPI_EPI_SOE_LINE3_LANE9_lane9_soe3_shift                                (0)
#define  EPI_EPI_SOE_LINE3_LANE9_lane9_soe3_mask                                 (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE9_lane9_soe3(data)                                (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE9_get_lane9_soe3(data)                            (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE10                                               0x180262A0
#define  EPI_EPI_SOE_LINE0_LANE10_reg_addr                                       "0xB80262A0"
#define  EPI_EPI_SOE_LINE0_LANE10_reg                                            0xB80262A0
#define  EPI_EPI_SOE_LINE0_LANE10_inst_addr                                      "0x0092"
#define  set_EPI_EPI_SOE_LINE0_LANE10_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE10_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE10_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE10_reg))
#define  EPI_EPI_SOE_LINE0_LANE10_lane10_soe0_shift                              (0)
#define  EPI_EPI_SOE_LINE0_LANE10_lane10_soe0_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE10_lane10_soe0(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE10_get_lane10_soe0(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE10                                               0x180262A4
#define  EPI_EPI_SOE_LINE1_LANE10_reg_addr                                       "0xB80262A4"
#define  EPI_EPI_SOE_LINE1_LANE10_reg                                            0xB80262A4
#define  EPI_EPI_SOE_LINE1_LANE10_inst_addr                                      "0x0093"
#define  set_EPI_EPI_SOE_LINE1_LANE10_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE10_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE10_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE10_reg))
#define  EPI_EPI_SOE_LINE1_LANE10_lane10_soe1_shift                              (0)
#define  EPI_EPI_SOE_LINE1_LANE10_lane10_soe1_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE10_lane10_soe1(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE10_get_lane10_soe1(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE10                                               0x180262A8
#define  EPI_EPI_SOE_LINE2_LANE10_reg_addr                                       "0xB80262A8"
#define  EPI_EPI_SOE_LINE2_LANE10_reg                                            0xB80262A8
#define  EPI_EPI_SOE_LINE2_LANE10_inst_addr                                      "0x0094"
#define  set_EPI_EPI_SOE_LINE2_LANE10_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE10_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE10_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE10_reg))
#define  EPI_EPI_SOE_LINE2_LANE10_lane10_soe2_shift                              (0)
#define  EPI_EPI_SOE_LINE2_LANE10_lane10_soe2_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE10_lane10_soe2(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE10_get_lane10_soe2(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE10                                               0x180262AC
#define  EPI_EPI_SOE_LINE3_LANE10_reg_addr                                       "0xB80262AC"
#define  EPI_EPI_SOE_LINE3_LANE10_reg                                            0xB80262AC
#define  EPI_EPI_SOE_LINE3_LANE10_inst_addr                                      "0x0095"
#define  set_EPI_EPI_SOE_LINE3_LANE10_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE10_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE10_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE10_reg))
#define  EPI_EPI_SOE_LINE3_LANE10_lane10_soe3_shift                              (0)
#define  EPI_EPI_SOE_LINE3_LANE10_lane10_soe3_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE10_lane10_soe3(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE10_get_lane10_soe3(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE11                                               0x180262B0
#define  EPI_EPI_SOE_LINE0_LANE11_reg_addr                                       "0xB80262B0"
#define  EPI_EPI_SOE_LINE0_LANE11_reg                                            0xB80262B0
#define  EPI_EPI_SOE_LINE0_LANE11_inst_addr                                      "0x0096"
#define  set_EPI_EPI_SOE_LINE0_LANE11_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE11_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE11_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE11_reg))
#define  EPI_EPI_SOE_LINE0_LANE11_lane11_soe0_shift                              (0)
#define  EPI_EPI_SOE_LINE0_LANE11_lane11_soe0_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE11_lane11_soe0(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE11_get_lane11_soe0(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE11                                               0x180262B4
#define  EPI_EPI_SOE_LINE1_LANE11_reg_addr                                       "0xB80262B4"
#define  EPI_EPI_SOE_LINE1_LANE11_reg                                            0xB80262B4
#define  EPI_EPI_SOE_LINE1_LANE11_inst_addr                                      "0x0097"
#define  set_EPI_EPI_SOE_LINE1_LANE11_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE11_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE11_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE11_reg))
#define  EPI_EPI_SOE_LINE1_LANE11_lane11_soe1_shift                              (0)
#define  EPI_EPI_SOE_LINE1_LANE11_lane11_soe1_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE11_lane11_soe1(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE11_get_lane11_soe1(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE11                                               0x180262B8
#define  EPI_EPI_SOE_LINE2_LANE11_reg_addr                                       "0xB80262B8"
#define  EPI_EPI_SOE_LINE2_LANE11_reg                                            0xB80262B8
#define  EPI_EPI_SOE_LINE2_LANE11_inst_addr                                      "0x0098"
#define  set_EPI_EPI_SOE_LINE2_LANE11_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE11_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE11_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE11_reg))
#define  EPI_EPI_SOE_LINE2_LANE11_lane11_soe2_shift                              (0)
#define  EPI_EPI_SOE_LINE2_LANE11_lane11_soe2_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE11_lane11_soe2(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE11_get_lane11_soe2(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE11                                               0x180262BC
#define  EPI_EPI_SOE_LINE3_LANE11_reg_addr                                       "0xB80262BC"
#define  EPI_EPI_SOE_LINE3_LANE11_reg                                            0xB80262BC
#define  EPI_EPI_SOE_LINE3_LANE11_inst_addr                                      "0x0099"
#define  set_EPI_EPI_SOE_LINE3_LANE11_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE11_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE11_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE11_reg))
#define  EPI_EPI_SOE_LINE3_LANE11_lane11_soe3_shift                              (0)
#define  EPI_EPI_SOE_LINE3_LANE11_lane11_soe3_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE11_lane11_soe3(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE11_get_lane11_soe3(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE12                                               0x180262C0
#define  EPI_EPI_SOE_LINE0_LANE12_reg_addr                                       "0xB80262C0"
#define  EPI_EPI_SOE_LINE0_LANE12_reg                                            0xB80262C0
#define  EPI_EPI_SOE_LINE0_LANE12_inst_addr                                      "0x009A"
#define  set_EPI_EPI_SOE_LINE0_LANE12_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE12_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE12_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE12_reg))
#define  EPI_EPI_SOE_LINE0_LANE12_lane12_soe0_shift                              (0)
#define  EPI_EPI_SOE_LINE0_LANE12_lane12_soe0_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE12_lane12_soe0(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE12_get_lane12_soe0(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE12                                               0x180262C4
#define  EPI_EPI_SOE_LINE1_LANE12_reg_addr                                       "0xB80262C4"
#define  EPI_EPI_SOE_LINE1_LANE12_reg                                            0xB80262C4
#define  EPI_EPI_SOE_LINE1_LANE12_inst_addr                                      "0x009B"
#define  set_EPI_EPI_SOE_LINE1_LANE12_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE12_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE12_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE12_reg))
#define  EPI_EPI_SOE_LINE1_LANE12_lane12_soe1_shift                              (0)
#define  EPI_EPI_SOE_LINE1_LANE12_lane12_soe1_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE12_lane12_soe1(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE12_get_lane12_soe1(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE12                                               0x180262C8
#define  EPI_EPI_SOE_LINE2_LANE12_reg_addr                                       "0xB80262C8"
#define  EPI_EPI_SOE_LINE2_LANE12_reg                                            0xB80262C8
#define  EPI_EPI_SOE_LINE2_LANE12_inst_addr                                      "0x009C"
#define  set_EPI_EPI_SOE_LINE2_LANE12_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE12_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE12_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE12_reg))
#define  EPI_EPI_SOE_LINE2_LANE12_lane12_soe2_shift                              (0)
#define  EPI_EPI_SOE_LINE2_LANE12_lane12_soe2_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE12_lane12_soe2(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE12_get_lane12_soe2(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE12                                               0x180262CC
#define  EPI_EPI_SOE_LINE3_LANE12_reg_addr                                       "0xB80262CC"
#define  EPI_EPI_SOE_LINE3_LANE12_reg                                            0xB80262CC
#define  EPI_EPI_SOE_LINE3_LANE12_inst_addr                                      "0x009D"
#define  set_EPI_EPI_SOE_LINE3_LANE12_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE12_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE12_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE12_reg))
#define  EPI_EPI_SOE_LINE3_LANE12_lane12_soe3_shift                              (0)
#define  EPI_EPI_SOE_LINE3_LANE12_lane12_soe3_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE12_lane12_soe3(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE12_get_lane12_soe3(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE13                                               0x180262D0
#define  EPI_EPI_SOE_LINE0_LANE13_reg_addr                                       "0xB80262D0"
#define  EPI_EPI_SOE_LINE0_LANE13_reg                                            0xB80262D0
#define  EPI_EPI_SOE_LINE0_LANE13_inst_addr                                      "0x009E"
#define  set_EPI_EPI_SOE_LINE0_LANE13_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE13_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE13_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE13_reg))
#define  EPI_EPI_SOE_LINE0_LANE13_lane13_soe0_shift                              (0)
#define  EPI_EPI_SOE_LINE0_LANE13_lane13_soe0_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE13_lane13_soe0(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE13_get_lane13_soe0(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE13                                               0x180262D4
#define  EPI_EPI_SOE_LINE1_LANE13_reg_addr                                       "0xB80262D4"
#define  EPI_EPI_SOE_LINE1_LANE13_reg                                            0xB80262D4
#define  EPI_EPI_SOE_LINE1_LANE13_inst_addr                                      "0x009F"
#define  set_EPI_EPI_SOE_LINE1_LANE13_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE13_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE13_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE13_reg))
#define  EPI_EPI_SOE_LINE1_LANE13_lane13_soe1_shift                              (0)
#define  EPI_EPI_SOE_LINE1_LANE13_lane13_soe1_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE13_lane13_soe1(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE13_get_lane13_soe1(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE13                                               0x180262D8
#define  EPI_EPI_SOE_LINE2_LANE13_reg_addr                                       "0xB80262D8"
#define  EPI_EPI_SOE_LINE2_LANE13_reg                                            0xB80262D8
#define  EPI_EPI_SOE_LINE2_LANE13_inst_addr                                      "0x00A0"
#define  set_EPI_EPI_SOE_LINE2_LANE13_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE13_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE13_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE13_reg))
#define  EPI_EPI_SOE_LINE2_LANE13_lane13_soe2_shift                              (0)
#define  EPI_EPI_SOE_LINE2_LANE13_lane13_soe2_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE13_lane13_soe2(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE13_get_lane13_soe2(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE13                                               0x180262DC
#define  EPI_EPI_SOE_LINE3_LANE13_reg_addr                                       "0xB80262DC"
#define  EPI_EPI_SOE_LINE3_LANE13_reg                                            0xB80262DC
#define  EPI_EPI_SOE_LINE3_LANE13_inst_addr                                      "0x00A1"
#define  set_EPI_EPI_SOE_LINE3_LANE13_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE13_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE13_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE13_reg))
#define  EPI_EPI_SOE_LINE3_LANE13_lane13_soe3_shift                              (0)
#define  EPI_EPI_SOE_LINE3_LANE13_lane13_soe3_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE13_lane13_soe3(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE13_get_lane13_soe3(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE14                                               0x180262E0
#define  EPI_EPI_SOE_LINE0_LANE14_reg_addr                                       "0xB80262E0"
#define  EPI_EPI_SOE_LINE0_LANE14_reg                                            0xB80262E0
#define  EPI_EPI_SOE_LINE0_LANE14_inst_addr                                      "0x00A2"
#define  set_EPI_EPI_SOE_LINE0_LANE14_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE14_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE14_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE14_reg))
#define  EPI_EPI_SOE_LINE0_LANE14_lane14_soe0_shift                              (0)
#define  EPI_EPI_SOE_LINE0_LANE14_lane14_soe0_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE14_lane14_soe0(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE14_get_lane14_soe0(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE14                                               0x180262E4
#define  EPI_EPI_SOE_LINE1_LANE14_reg_addr                                       "0xB80262E4"
#define  EPI_EPI_SOE_LINE1_LANE14_reg                                            0xB80262E4
#define  EPI_EPI_SOE_LINE1_LANE14_inst_addr                                      "0x00A3"
#define  set_EPI_EPI_SOE_LINE1_LANE14_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE14_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE14_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE14_reg))
#define  EPI_EPI_SOE_LINE1_LANE14_lane14_soe1_shift                              (0)
#define  EPI_EPI_SOE_LINE1_LANE14_lane14_soe1_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE14_lane14_soe1(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE14_get_lane14_soe1(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE14                                               0x180262E8
#define  EPI_EPI_SOE_LINE2_LANE14_reg_addr                                       "0xB80262E8"
#define  EPI_EPI_SOE_LINE2_LANE14_reg                                            0xB80262E8
#define  EPI_EPI_SOE_LINE2_LANE14_inst_addr                                      "0x00A4"
#define  set_EPI_EPI_SOE_LINE2_LANE14_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE14_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE14_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE14_reg))
#define  EPI_EPI_SOE_LINE2_LANE14_lane14_soe2_shift                              (0)
#define  EPI_EPI_SOE_LINE2_LANE14_lane14_soe2_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE14_lane14_soe2(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE14_get_lane14_soe2(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE14                                               0x180262EC
#define  EPI_EPI_SOE_LINE3_LANE14_reg_addr                                       "0xB80262EC"
#define  EPI_EPI_SOE_LINE3_LANE14_reg                                            0xB80262EC
#define  EPI_EPI_SOE_LINE3_LANE14_inst_addr                                      "0x00A5"
#define  set_EPI_EPI_SOE_LINE3_LANE14_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE14_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE14_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE14_reg))
#define  EPI_EPI_SOE_LINE3_LANE14_lane14_soe3_shift                              (0)
#define  EPI_EPI_SOE_LINE3_LANE14_lane14_soe3_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE14_lane14_soe3(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE14_get_lane14_soe3(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE0_LANE15                                               0x180262F0
#define  EPI_EPI_SOE_LINE0_LANE15_reg_addr                                       "0xB80262F0"
#define  EPI_EPI_SOE_LINE0_LANE15_reg                                            0xB80262F0
#define  EPI_EPI_SOE_LINE0_LANE15_inst_addr                                      "0x00A6"
#define  set_EPI_EPI_SOE_LINE0_LANE15_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE15_reg)=data)
#define  get_EPI_EPI_SOE_LINE0_LANE15_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE0_LANE15_reg))
#define  EPI_EPI_SOE_LINE0_LANE15_lane15_soe0_shift                              (0)
#define  EPI_EPI_SOE_LINE0_LANE15_lane15_soe0_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE0_LANE15_lane15_soe0(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE0_LANE15_get_lane15_soe0(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE1_LANE15                                               0x180262F4
#define  EPI_EPI_SOE_LINE1_LANE15_reg_addr                                       "0xB80262F4"
#define  EPI_EPI_SOE_LINE1_LANE15_reg                                            0xB80262F4
#define  EPI_EPI_SOE_LINE1_LANE15_inst_addr                                      "0x00A7"
#define  set_EPI_EPI_SOE_LINE1_LANE15_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE15_reg)=data)
#define  get_EPI_EPI_SOE_LINE1_LANE15_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE1_LANE15_reg))
#define  EPI_EPI_SOE_LINE1_LANE15_lane15_soe1_shift                              (0)
#define  EPI_EPI_SOE_LINE1_LANE15_lane15_soe1_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE1_LANE15_lane15_soe1(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE1_LANE15_get_lane15_soe1(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE2_LANE15                                               0x180262F8
#define  EPI_EPI_SOE_LINE2_LANE15_reg_addr                                       "0xB80262F8"
#define  EPI_EPI_SOE_LINE2_LANE15_reg                                            0xB80262F8
#define  EPI_EPI_SOE_LINE2_LANE15_inst_addr                                      "0x00A8"
#define  set_EPI_EPI_SOE_LINE2_LANE15_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE15_reg)=data)
#define  get_EPI_EPI_SOE_LINE2_LANE15_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE2_LANE15_reg))
#define  EPI_EPI_SOE_LINE2_LANE15_lane15_soe2_shift                              (0)
#define  EPI_EPI_SOE_LINE2_LANE15_lane15_soe2_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE2_LANE15_lane15_soe2(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE2_LANE15_get_lane15_soe2(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_SOE_LINE3_LANE15                                               0x180262FC
#define  EPI_EPI_SOE_LINE3_LANE15_reg_addr                                       "0xB80262FC"
#define  EPI_EPI_SOE_LINE3_LANE15_reg                                            0xB80262FC
#define  EPI_EPI_SOE_LINE3_LANE15_inst_addr                                      "0x00A9"
#define  set_EPI_EPI_SOE_LINE3_LANE15_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE15_reg)=data)
#define  get_EPI_EPI_SOE_LINE3_LANE15_reg                                        (*((volatile unsigned int*)EPI_EPI_SOE_LINE3_LANE15_reg))
#define  EPI_EPI_SOE_LINE3_LANE15_lane15_soe3_shift                              (0)
#define  EPI_EPI_SOE_LINE3_LANE15_lane15_soe3_mask                               (0x3FFFFFFF)
#define  EPI_EPI_SOE_LINE3_LANE15_lane15_soe3(data)                              (0x3FFFFFFF&(data))
#define  EPI_EPI_SOE_LINE3_LANE15_get_lane15_soe3(data)                          (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE_DST_MUX0                                                  0x18026380
#define  EPI_EPI_LANE_DST_MUX0_reg_addr                                          "0xB8026380"
#define  EPI_EPI_LANE_DST_MUX0_reg                                               0xB8026380
#define  EPI_EPI_LANE_DST_MUX0_inst_addr                                         "0x00AA"
#define  set_EPI_EPI_LANE_DST_MUX0_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX0_reg)=data)
#define  get_EPI_EPI_LANE_DST_MUX0_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX0_reg))
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c4_mux_sel_shift                        (16)
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c3_mux_sel_shift                        (12)
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c2_mux_sel_shift                        (8)
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c1_mux_sel_shift                        (4)
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c0_mux_sel_shift                        (0)
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c4_mux_sel_mask                         (0x000F0000)
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c3_mux_sel_mask                         (0x0000F000)
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c2_mux_sel_mask                         (0x00000F00)
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c1_mux_sel_mask                         (0x000000F0)
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c0_mux_sel_mask                         (0x0000000F)
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c4_mux_sel(data)                        (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c3_mux_sel(data)                        (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c2_mux_sel(data)                        (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c1_mux_sel(data)                        (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_DST_MUX0_lane_d_st_c0_mux_sel(data)                        (0x0000000F&(data))
#define  EPI_EPI_LANE_DST_MUX0_get_lane_d_st_c4_mux_sel(data)                    ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_DST_MUX0_get_lane_d_st_c3_mux_sel(data)                    ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_DST_MUX0_get_lane_d_st_c2_mux_sel(data)                    ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_DST_MUX0_get_lane_d_st_c1_mux_sel(data)                    ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_DST_MUX0_get_lane_d_st_c0_mux_sel(data)                    (0x0000000F&(data))

#define  EPI_EPI_LANE_DST_MUX1                                                  0x18026384
#define  EPI_EPI_LANE_DST_MUX1_reg_addr                                          "0xB8026384"
#define  EPI_EPI_LANE_DST_MUX1_reg                                               0xB8026384
#define  EPI_EPI_LANE_DST_MUX1_inst_addr                                         "0x00AB"
#define  set_EPI_EPI_LANE_DST_MUX1_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX1_reg)=data)
#define  get_EPI_EPI_LANE_DST_MUX1_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX1_reg))
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c9_mux_sel_shift                        (16)
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c8_mux_sel_shift                        (12)
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c7_mux_sel_shift                        (8)
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c6_mux_sel_shift                        (4)
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c5_mux_sel_shift                        (0)
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c9_mux_sel_mask                         (0x000F0000)
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c8_mux_sel_mask                         (0x0000F000)
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c7_mux_sel_mask                         (0x00000F00)
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c6_mux_sel_mask                         (0x000000F0)
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c5_mux_sel_mask                         (0x0000000F)
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c9_mux_sel(data)                        (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c8_mux_sel(data)                        (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c7_mux_sel(data)                        (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c6_mux_sel(data)                        (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_DST_MUX1_lane_d_st_c5_mux_sel(data)                        (0x0000000F&(data))
#define  EPI_EPI_LANE_DST_MUX1_get_lane_d_st_c9_mux_sel(data)                    ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_DST_MUX1_get_lane_d_st_c8_mux_sel(data)                    ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_DST_MUX1_get_lane_d_st_c7_mux_sel(data)                    ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_DST_MUX1_get_lane_d_st_c6_mux_sel(data)                    ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_DST_MUX1_get_lane_d_st_c5_mux_sel(data)                    (0x0000000F&(data))

#define  EPI_EPI_LANE_DST_MUX2                                                  0x18026388
#define  EPI_EPI_LANE_DST_MUX2_reg_addr                                          "0xB8026388"
#define  EPI_EPI_LANE_DST_MUX2_reg                                               0xB8026388
#define  EPI_EPI_LANE_DST_MUX2_inst_addr                                         "0x00AC"
#define  set_EPI_EPI_LANE_DST_MUX2_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX2_reg)=data)
#define  get_EPI_EPI_LANE_DST_MUX2_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX2_reg))
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c14_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c13_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c12_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c11_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c10_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c14_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c13_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c12_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c11_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c10_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c14_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c13_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c12_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c11_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_DST_MUX2_lane_d_st_c10_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_DST_MUX2_get_lane_d_st_c14_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_DST_MUX2_get_lane_d_st_c13_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_DST_MUX2_get_lane_d_st_c12_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_DST_MUX2_get_lane_d_st_c11_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_DST_MUX2_get_lane_d_st_c10_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_DST_MUX3                                                  0x1802638C
#define  EPI_EPI_LANE_DST_MUX3_reg_addr                                          "0xB802638C"
#define  EPI_EPI_LANE_DST_MUX3_reg                                               0xB802638C
#define  EPI_EPI_LANE_DST_MUX3_inst_addr                                         "0x00AD"
#define  set_EPI_EPI_LANE_DST_MUX3_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX3_reg)=data)
#define  get_EPI_EPI_LANE_DST_MUX3_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX3_reg))
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c19_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c18_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c17_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c16_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c15_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c19_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c18_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c17_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c16_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c15_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c19_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c18_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c17_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c16_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_DST_MUX3_lane_d_st_c15_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_DST_MUX3_get_lane_d_st_c19_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_DST_MUX3_get_lane_d_st_c18_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_DST_MUX3_get_lane_d_st_c17_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_DST_MUX3_get_lane_d_st_c16_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_DST_MUX3_get_lane_d_st_c15_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_DST_MUX4                                                  0x18026390
#define  EPI_EPI_LANE_DST_MUX4_reg_addr                                          "0xB8026390"
#define  EPI_EPI_LANE_DST_MUX4_reg                                               0xB8026390
#define  EPI_EPI_LANE_DST_MUX4_inst_addr                                         "0x00AE"
#define  set_EPI_EPI_LANE_DST_MUX4_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX4_reg)=data)
#define  get_EPI_EPI_LANE_DST_MUX4_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX4_reg))
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c24_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c23_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c22_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c21_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c20_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c24_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c23_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c22_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c21_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c20_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c24_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c23_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c22_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c21_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_DST_MUX4_lane_d_st_c20_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_DST_MUX4_get_lane_d_st_c24_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_DST_MUX4_get_lane_d_st_c23_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_DST_MUX4_get_lane_d_st_c22_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_DST_MUX4_get_lane_d_st_c21_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_DST_MUX4_get_lane_d_st_c20_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_DST_MUX5                                                  0x18026394
#define  EPI_EPI_LANE_DST_MUX5_reg_addr                                          "0xB8026394"
#define  EPI_EPI_LANE_DST_MUX5_reg                                               0xB8026394
#define  EPI_EPI_LANE_DST_MUX5_inst_addr                                         "0x00AF"
#define  set_EPI_EPI_LANE_DST_MUX5_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX5_reg)=data)
#define  get_EPI_EPI_LANE_DST_MUX5_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_DST_MUX5_reg))
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c29_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c28_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c27_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c26_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c25_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c29_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c28_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c27_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c26_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c25_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c29_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c28_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c27_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c26_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_DST_MUX5_lane_d_st_c25_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_DST_MUX5_get_lane_d_st_c29_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_DST_MUX5_get_lane_d_st_c28_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_DST_MUX5_get_lane_d_st_c27_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_DST_MUX5_get_lane_d_st_c26_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_DST_MUX5_get_lane_d_st_c25_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CST_MUX0                                                  0x18026398
#define  EPI_EPI_LANE_CST_MUX0_reg_addr                                          "0xB8026398"
#define  EPI_EPI_LANE_CST_MUX0_reg                                               0xB8026398
#define  EPI_EPI_LANE_CST_MUX0_inst_addr                                         "0x00B0"
#define  set_EPI_EPI_LANE_CST_MUX0_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX0_reg)=data)
#define  get_EPI_EPI_LANE_CST_MUX0_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX0_reg))
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c4_mux_sel_shift                        (16)
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c3_mux_sel_shift                        (12)
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c2_mux_sel_shift                        (8)
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c1_mux_sel_shift                        (4)
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c0_mux_sel_shift                        (0)
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c4_mux_sel_mask                         (0x000F0000)
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c3_mux_sel_mask                         (0x0000F000)
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c2_mux_sel_mask                         (0x00000F00)
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c1_mux_sel_mask                         (0x000000F0)
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c0_mux_sel_mask                         (0x0000000F)
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c4_mux_sel(data)                        (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c3_mux_sel(data)                        (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c2_mux_sel(data)                        (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c1_mux_sel(data)                        (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CST_MUX0_lane_c_st_c0_mux_sel(data)                        (0x0000000F&(data))
#define  EPI_EPI_LANE_CST_MUX0_get_lane_c_st_c4_mux_sel(data)                    ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CST_MUX0_get_lane_c_st_c3_mux_sel(data)                    ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CST_MUX0_get_lane_c_st_c2_mux_sel(data)                    ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CST_MUX0_get_lane_c_st_c1_mux_sel(data)                    ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CST_MUX0_get_lane_c_st_c0_mux_sel(data)                    (0x0000000F&(data))

#define  EPI_EPI_LANE_CST_MUX1                                                  0x1802639C
#define  EPI_EPI_LANE_CST_MUX1_reg_addr                                          "0xB802639C"
#define  EPI_EPI_LANE_CST_MUX1_reg                                               0xB802639C
#define  EPI_EPI_LANE_CST_MUX1_inst_addr                                         "0x00B1"
#define  set_EPI_EPI_LANE_CST_MUX1_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX1_reg)=data)
#define  get_EPI_EPI_LANE_CST_MUX1_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX1_reg))
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c9_mux_sel_shift                        (16)
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c8_mux_sel_shift                        (12)
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c7_mux_sel_shift                        (8)
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c6_mux_sel_shift                        (4)
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c5_mux_sel_shift                        (0)
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c9_mux_sel_mask                         (0x000F0000)
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c8_mux_sel_mask                         (0x0000F000)
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c7_mux_sel_mask                         (0x00000F00)
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c6_mux_sel_mask                         (0x000000F0)
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c5_mux_sel_mask                         (0x0000000F)
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c9_mux_sel(data)                        (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c8_mux_sel(data)                        (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c7_mux_sel(data)                        (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c6_mux_sel(data)                        (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CST_MUX1_lane_c_st_c5_mux_sel(data)                        (0x0000000F&(data))
#define  EPI_EPI_LANE_CST_MUX1_get_lane_c_st_c9_mux_sel(data)                    ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CST_MUX1_get_lane_c_st_c8_mux_sel(data)                    ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CST_MUX1_get_lane_c_st_c7_mux_sel(data)                    ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CST_MUX1_get_lane_c_st_c6_mux_sel(data)                    ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CST_MUX1_get_lane_c_st_c5_mux_sel(data)                    (0x0000000F&(data))

#define  EPI_EPI_LANE_CST_MUX2                                                  0x180263A0
#define  EPI_EPI_LANE_CST_MUX2_reg_addr                                          "0xB80263A0"
#define  EPI_EPI_LANE_CST_MUX2_reg                                               0xB80263A0
#define  EPI_EPI_LANE_CST_MUX2_inst_addr                                         "0x00B2"
#define  set_EPI_EPI_LANE_CST_MUX2_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX2_reg)=data)
#define  get_EPI_EPI_LANE_CST_MUX2_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX2_reg))
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c14_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c13_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c12_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c11_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c10_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c14_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c13_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c12_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c11_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c10_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c14_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c13_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c12_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c11_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CST_MUX2_lane_c_st_c10_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_CST_MUX2_get_lane_c_st_c14_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CST_MUX2_get_lane_c_st_c13_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CST_MUX2_get_lane_c_st_c12_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CST_MUX2_get_lane_c_st_c11_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CST_MUX2_get_lane_c_st_c10_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CST_MUX3                                                  0x180263A4
#define  EPI_EPI_LANE_CST_MUX3_reg_addr                                          "0xB80263A4"
#define  EPI_EPI_LANE_CST_MUX3_reg                                               0xB80263A4
#define  EPI_EPI_LANE_CST_MUX3_inst_addr                                         "0x00B3"
#define  set_EPI_EPI_LANE_CST_MUX3_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX3_reg)=data)
#define  get_EPI_EPI_LANE_CST_MUX3_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX3_reg))
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c19_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c18_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c17_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c16_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c15_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c19_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c18_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c17_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c16_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c15_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c19_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c18_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c17_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c16_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CST_MUX3_lane_c_st_c15_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_CST_MUX3_get_lane_c_st_c19_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CST_MUX3_get_lane_c_st_c18_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CST_MUX3_get_lane_c_st_c17_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CST_MUX3_get_lane_c_st_c16_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CST_MUX3_get_lane_c_st_c15_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CST_MUX4                                                  0x180263A8
#define  EPI_EPI_LANE_CST_MUX4_reg_addr                                          "0xB80263A8"
#define  EPI_EPI_LANE_CST_MUX4_reg                                               0xB80263A8
#define  EPI_EPI_LANE_CST_MUX4_inst_addr                                         "0x00B4"
#define  set_EPI_EPI_LANE_CST_MUX4_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX4_reg)=data)
#define  get_EPI_EPI_LANE_CST_MUX4_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX4_reg))
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c24_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c23_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c22_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c21_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c20_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c24_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c23_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c22_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c21_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c20_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c24_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c23_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c22_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c21_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CST_MUX4_lane_c_st_c20_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_CST_MUX4_get_lane_c_st_c24_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CST_MUX4_get_lane_c_st_c23_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CST_MUX4_get_lane_c_st_c22_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CST_MUX4_get_lane_c_st_c21_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CST_MUX4_get_lane_c_st_c20_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CST_MUX5                                                  0x180263AC
#define  EPI_EPI_LANE_CST_MUX5_reg_addr                                          "0xB80263AC"
#define  EPI_EPI_LANE_CST_MUX5_reg                                               0xB80263AC
#define  EPI_EPI_LANE_CST_MUX5_inst_addr                                         "0x00B5"
#define  set_EPI_EPI_LANE_CST_MUX5_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX5_reg)=data)
#define  get_EPI_EPI_LANE_CST_MUX5_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_CST_MUX5_reg))
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c29_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c28_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c27_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c26_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c25_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c29_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c28_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c27_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c26_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c25_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c29_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c28_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c27_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c26_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CST_MUX5_lane_c_st_c25_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_CST_MUX5_get_lane_c_st_c29_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CST_MUX5_get_lane_c_st_c28_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CST_MUX5_get_lane_c_st_c27_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CST_MUX5_get_lane_c_st_c26_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CST_MUX5_get_lane_c_st_c25_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR1_MUX0                                                 0x180263B0
#define  EPI_EPI_LANE_CTR1_MUX0_reg_addr                                         "0xB80263B0"
#define  EPI_EPI_LANE_CTR1_MUX0_reg                                              0xB80263B0
#define  EPI_EPI_LANE_CTR1_MUX0_inst_addr                                        "0x00B6"
#define  set_EPI_EPI_LANE_CTR1_MUX0_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX0_reg)=data)
#define  get_EPI_EPI_LANE_CTR1_MUX0_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX0_reg))
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c4_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c3_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c2_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c1_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c0_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c4_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c3_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c2_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c1_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c0_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c4_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c3_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c2_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c1_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR1_MUX0_lane_ctr1_c0_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR1_MUX0_get_lane_ctr1_c4_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR1_MUX0_get_lane_ctr1_c3_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR1_MUX0_get_lane_ctr1_c2_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR1_MUX0_get_lane_ctr1_c1_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR1_MUX0_get_lane_ctr1_c0_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR1_MUX1                                                 0x180263B4
#define  EPI_EPI_LANE_CTR1_MUX1_reg_addr                                         "0xB80263B4"
#define  EPI_EPI_LANE_CTR1_MUX1_reg                                              0xB80263B4
#define  EPI_EPI_LANE_CTR1_MUX1_inst_addr                                        "0x00B7"
#define  set_EPI_EPI_LANE_CTR1_MUX1_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX1_reg)=data)
#define  get_EPI_EPI_LANE_CTR1_MUX1_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX1_reg))
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c9_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c8_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c7_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c6_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c5_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c9_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c8_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c7_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c6_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c5_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c9_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c8_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c7_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c6_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR1_MUX1_lane_ctr1_c5_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR1_MUX1_get_lane_ctr1_c9_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR1_MUX1_get_lane_ctr1_c8_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR1_MUX1_get_lane_ctr1_c7_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR1_MUX1_get_lane_ctr1_c6_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR1_MUX1_get_lane_ctr1_c5_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR1_MUX2                                                 0x180263B8
#define  EPI_EPI_LANE_CTR1_MUX2_reg_addr                                         "0xB80263B8"
#define  EPI_EPI_LANE_CTR1_MUX2_reg                                              0xB80263B8
#define  EPI_EPI_LANE_CTR1_MUX2_inst_addr                                        "0x00B8"
#define  set_EPI_EPI_LANE_CTR1_MUX2_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX2_reg)=data)
#define  get_EPI_EPI_LANE_CTR1_MUX2_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX2_reg))
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c14_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c13_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c12_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c11_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c10_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c14_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c13_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c12_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c11_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c10_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c14_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c13_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c12_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c11_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR1_MUX2_lane_ctr1_c10_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR1_MUX2_get_lane_ctr1_c14_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR1_MUX2_get_lane_ctr1_c13_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR1_MUX2_get_lane_ctr1_c12_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR1_MUX2_get_lane_ctr1_c11_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR1_MUX2_get_lane_ctr1_c10_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR1_MUX3                                                 0x180263BC
#define  EPI_EPI_LANE_CTR1_MUX3_reg_addr                                         "0xB80263BC"
#define  EPI_EPI_LANE_CTR1_MUX3_reg                                              0xB80263BC
#define  EPI_EPI_LANE_CTR1_MUX3_inst_addr                                        "0x00B9"
#define  set_EPI_EPI_LANE_CTR1_MUX3_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX3_reg)=data)
#define  get_EPI_EPI_LANE_CTR1_MUX3_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX3_reg))
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c19_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c18_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c17_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c16_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c15_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c19_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c18_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c17_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c16_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c15_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c19_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c18_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c17_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c16_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR1_MUX3_lane_ctr1_c15_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR1_MUX3_get_lane_ctr1_c19_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR1_MUX3_get_lane_ctr1_c18_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR1_MUX3_get_lane_ctr1_c17_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR1_MUX3_get_lane_ctr1_c16_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR1_MUX3_get_lane_ctr1_c15_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR1_MUX4                                                 0x180263C0
#define  EPI_EPI_LANE_CTR1_MUX4_reg_addr                                         "0xB80263C0"
#define  EPI_EPI_LANE_CTR1_MUX4_reg                                              0xB80263C0
#define  EPI_EPI_LANE_CTR1_MUX4_inst_addr                                        "0x00BA"
#define  set_EPI_EPI_LANE_CTR1_MUX4_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX4_reg)=data)
#define  get_EPI_EPI_LANE_CTR1_MUX4_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX4_reg))
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c24_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c23_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c22_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c21_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c20_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c24_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c23_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c22_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c21_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c20_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c24_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c23_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c22_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c21_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR1_MUX4_lane_ctr1_c20_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR1_MUX4_get_lane_ctr1_c24_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR1_MUX4_get_lane_ctr1_c23_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR1_MUX4_get_lane_ctr1_c22_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR1_MUX4_get_lane_ctr1_c21_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR1_MUX4_get_lane_ctr1_c20_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR1_MUX5                                                 0x180263C4
#define  EPI_EPI_LANE_CTR1_MUX5_reg_addr                                         "0xB80263C4"
#define  EPI_EPI_LANE_CTR1_MUX5_reg                                              0xB80263C4
#define  EPI_EPI_LANE_CTR1_MUX5_inst_addr                                        "0x00BB"
#define  set_EPI_EPI_LANE_CTR1_MUX5_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX5_reg)=data)
#define  get_EPI_EPI_LANE_CTR1_MUX5_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR1_MUX5_reg))
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c29_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c28_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c27_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c26_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c25_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c29_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c28_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c27_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c26_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c25_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c29_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c28_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c27_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c26_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR1_MUX5_lane_ctr1_c25_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR1_MUX5_get_lane_ctr1_c29_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR1_MUX5_get_lane_ctr1_c28_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR1_MUX5_get_lane_ctr1_c27_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR1_MUX5_get_lane_ctr1_c26_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR1_MUX5_get_lane_ctr1_c25_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR2_MUX0                                                 0x180263C8
#define  EPI_EPI_LANE_CTR2_MUX0_reg_addr                                         "0xB80263C8"
#define  EPI_EPI_LANE_CTR2_MUX0_reg                                              0xB80263C8
#define  EPI_EPI_LANE_CTR2_MUX0_inst_addr                                        "0x00BC"
#define  set_EPI_EPI_LANE_CTR2_MUX0_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX0_reg)=data)
#define  get_EPI_EPI_LANE_CTR2_MUX0_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX0_reg))
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c4_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c3_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c2_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c1_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c0_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c4_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c3_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c2_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c1_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c0_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c4_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c3_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c2_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c1_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR2_MUX0_lane_ctr2_c0_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR2_MUX0_get_lane_ctr2_c4_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR2_MUX0_get_lane_ctr2_c3_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR2_MUX0_get_lane_ctr2_c2_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR2_MUX0_get_lane_ctr2_c1_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR2_MUX0_get_lane_ctr2_c0_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR2_MUX1                                                 0x180263CC
#define  EPI_EPI_LANE_CTR2_MUX1_reg_addr                                         "0xB80263CC"
#define  EPI_EPI_LANE_CTR2_MUX1_reg                                              0xB80263CC
#define  EPI_EPI_LANE_CTR2_MUX1_inst_addr                                        "0x00BD"
#define  set_EPI_EPI_LANE_CTR2_MUX1_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX1_reg)=data)
#define  get_EPI_EPI_LANE_CTR2_MUX1_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX1_reg))
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c9_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c8_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c7_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c6_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c5_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c9_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c8_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c7_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c6_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c5_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c9_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c8_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c7_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c6_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR2_MUX1_lane_ctr2_c5_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR2_MUX1_get_lane_ctr2_c9_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR2_MUX1_get_lane_ctr2_c8_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR2_MUX1_get_lane_ctr2_c7_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR2_MUX1_get_lane_ctr2_c6_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR2_MUX1_get_lane_ctr2_c5_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR2_MUX2                                                 0x180263D0
#define  EPI_EPI_LANE_CTR2_MUX2_reg_addr                                         "0xB80263D0"
#define  EPI_EPI_LANE_CTR2_MUX2_reg                                              0xB80263D0
#define  EPI_EPI_LANE_CTR2_MUX2_inst_addr                                        "0x00BE"
#define  set_EPI_EPI_LANE_CTR2_MUX2_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX2_reg)=data)
#define  get_EPI_EPI_LANE_CTR2_MUX2_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX2_reg))
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c14_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c13_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c12_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c11_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c10_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c14_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c13_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c12_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c11_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c10_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c14_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c13_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c12_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c11_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR2_MUX2_lane_ctr2_c10_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR2_MUX2_get_lane_ctr2_c14_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR2_MUX2_get_lane_ctr2_c13_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR2_MUX2_get_lane_ctr2_c12_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR2_MUX2_get_lane_ctr2_c11_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR2_MUX2_get_lane_ctr2_c10_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR2_MUX3                                                 0x180263D4
#define  EPI_EPI_LANE_CTR2_MUX3_reg_addr                                         "0xB80263D4"
#define  EPI_EPI_LANE_CTR2_MUX3_reg                                              0xB80263D4
#define  EPI_EPI_LANE_CTR2_MUX3_inst_addr                                        "0x00BF"
#define  set_EPI_EPI_LANE_CTR2_MUX3_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX3_reg)=data)
#define  get_EPI_EPI_LANE_CTR2_MUX3_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX3_reg))
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c19_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c18_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c17_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c16_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c15_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c19_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c18_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c17_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c16_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c15_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c19_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c18_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c17_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c16_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR2_MUX3_lane_ctr2_c15_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR2_MUX3_get_lane_ctr2_c19_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR2_MUX3_get_lane_ctr2_c18_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR2_MUX3_get_lane_ctr2_c17_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR2_MUX3_get_lane_ctr2_c16_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR2_MUX3_get_lane_ctr2_c15_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR2_MUX4                                                 0x180263D8
#define  EPI_EPI_LANE_CTR2_MUX4_reg_addr                                         "0xB80263D8"
#define  EPI_EPI_LANE_CTR2_MUX4_reg                                              0xB80263D8
#define  EPI_EPI_LANE_CTR2_MUX4_inst_addr                                        "0x00C0"
#define  set_EPI_EPI_LANE_CTR2_MUX4_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX4_reg)=data)
#define  get_EPI_EPI_LANE_CTR2_MUX4_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX4_reg))
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c24_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c23_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c22_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c21_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c20_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c24_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c23_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c22_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c21_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c20_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c24_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c23_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c22_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c21_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR2_MUX4_lane_ctr2_c20_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR2_MUX4_get_lane_ctr2_c24_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR2_MUX4_get_lane_ctr2_c23_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR2_MUX4_get_lane_ctr2_c22_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR2_MUX4_get_lane_ctr2_c21_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR2_MUX4_get_lane_ctr2_c20_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR2_MUX5                                                 0x180263DC
#define  EPI_EPI_LANE_CTR2_MUX5_reg_addr                                         "0xB80263DC"
#define  EPI_EPI_LANE_CTR2_MUX5_reg                                              0xB80263DC
#define  EPI_EPI_LANE_CTR2_MUX5_inst_addr                                        "0x00C1"
#define  set_EPI_EPI_LANE_CTR2_MUX5_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX5_reg)=data)
#define  get_EPI_EPI_LANE_CTR2_MUX5_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR2_MUX5_reg))
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c29_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c28_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c27_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c26_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c25_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c29_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c28_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c27_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c26_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c25_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c29_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c28_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c27_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c26_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR2_MUX5_lane_ctr2_c25_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR2_MUX5_get_lane_ctr2_c29_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR2_MUX5_get_lane_ctr2_c28_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR2_MUX5_get_lane_ctr2_c27_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR2_MUX5_get_lane_ctr2_c26_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR2_MUX5_get_lane_ctr2_c25_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR3_MUX0                                                 0x180263E0
#define  EPI_EPI_LANE_CTR3_MUX0_reg_addr                                         "0xB80263E0"
#define  EPI_EPI_LANE_CTR3_MUX0_reg                                              0xB80263E0
#define  EPI_EPI_LANE_CTR3_MUX0_inst_addr                                        "0x00C2"
#define  set_EPI_EPI_LANE_CTR3_MUX0_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX0_reg)=data)
#define  get_EPI_EPI_LANE_CTR3_MUX0_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX0_reg))
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c4_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c3_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c2_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c1_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c0_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c4_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c3_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c2_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c1_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c0_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c4_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c3_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c2_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c1_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR3_MUX0_lane_ctr3_c0_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR3_MUX0_get_lane_ctr3_c4_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR3_MUX0_get_lane_ctr3_c3_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR3_MUX0_get_lane_ctr3_c2_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR3_MUX0_get_lane_ctr3_c1_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR3_MUX0_get_lane_ctr3_c0_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR3_MUX1                                                 0x180263E4
#define  EPI_EPI_LANE_CTR3_MUX1_reg_addr                                         "0xB80263E4"
#define  EPI_EPI_LANE_CTR3_MUX1_reg                                              0xB80263E4
#define  EPI_EPI_LANE_CTR3_MUX1_inst_addr                                        "0x00C3"
#define  set_EPI_EPI_LANE_CTR3_MUX1_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX1_reg)=data)
#define  get_EPI_EPI_LANE_CTR3_MUX1_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX1_reg))
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c9_mux_sel_shift                       (16)
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c8_mux_sel_shift                       (12)
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c7_mux_sel_shift                       (8)
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c6_mux_sel_shift                       (4)
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c5_mux_sel_shift                       (0)
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c9_mux_sel_mask                        (0x000F0000)
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c8_mux_sel_mask                        (0x0000F000)
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c7_mux_sel_mask                        (0x00000F00)
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c6_mux_sel_mask                        (0x000000F0)
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c5_mux_sel_mask                        (0x0000000F)
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c9_mux_sel(data)                       (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c8_mux_sel(data)                       (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c7_mux_sel(data)                       (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c6_mux_sel(data)                       (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR3_MUX1_lane_ctr3_c5_mux_sel(data)                       (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR3_MUX1_get_lane_ctr3_c9_mux_sel(data)                   ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR3_MUX1_get_lane_ctr3_c8_mux_sel(data)                   ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR3_MUX1_get_lane_ctr3_c7_mux_sel(data)                   ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR3_MUX1_get_lane_ctr3_c6_mux_sel(data)                   ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR3_MUX1_get_lane_ctr3_c5_mux_sel(data)                   (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR3_MUX2                                                 0x180263E8
#define  EPI_EPI_LANE_CTR3_MUX2_reg_addr                                         "0xB80263E8"
#define  EPI_EPI_LANE_CTR3_MUX2_reg                                              0xB80263E8
#define  EPI_EPI_LANE_CTR3_MUX2_inst_addr                                        "0x00C4"
#define  set_EPI_EPI_LANE_CTR3_MUX2_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX2_reg)=data)
#define  get_EPI_EPI_LANE_CTR3_MUX2_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX2_reg))
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c14_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c13_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c12_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c11_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c10_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c14_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c13_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c12_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c11_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c10_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c14_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c13_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c12_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c11_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR3_MUX2_lane_ctr3_c10_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR3_MUX2_get_lane_ctr3_c14_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR3_MUX2_get_lane_ctr3_c13_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR3_MUX2_get_lane_ctr3_c12_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR3_MUX2_get_lane_ctr3_c11_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR3_MUX2_get_lane_ctr3_c10_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR3_MUX3                                                 0x180263EC
#define  EPI_EPI_LANE_CTR3_MUX3_reg_addr                                         "0xB80263EC"
#define  EPI_EPI_LANE_CTR3_MUX3_reg                                              0xB80263EC
#define  EPI_EPI_LANE_CTR3_MUX3_inst_addr                                        "0x00C5"
#define  set_EPI_EPI_LANE_CTR3_MUX3_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX3_reg)=data)
#define  get_EPI_EPI_LANE_CTR3_MUX3_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX3_reg))
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c19_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c18_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c17_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c16_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c15_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c19_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c18_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c17_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c16_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c15_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c19_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c18_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c17_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c16_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR3_MUX3_lane_ctr3_c15_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR3_MUX3_get_lane_ctr3_c19_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR3_MUX3_get_lane_ctr3_c18_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR3_MUX3_get_lane_ctr3_c17_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR3_MUX3_get_lane_ctr3_c16_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR3_MUX3_get_lane_ctr3_c15_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR3_MUX4                                                 0x180263F0
#define  EPI_EPI_LANE_CTR3_MUX4_reg_addr                                         "0xB80263F0"
#define  EPI_EPI_LANE_CTR3_MUX4_reg                                              0xB80263F0
#define  EPI_EPI_LANE_CTR3_MUX4_inst_addr                                        "0x00C6"
#define  set_EPI_EPI_LANE_CTR3_MUX4_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX4_reg)=data)
#define  get_EPI_EPI_LANE_CTR3_MUX4_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX4_reg))
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c24_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c23_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c22_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c21_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c20_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c24_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c23_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c22_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c21_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c20_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c24_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c23_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c22_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c21_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR3_MUX4_lane_ctr3_c20_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR3_MUX4_get_lane_ctr3_c24_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR3_MUX4_get_lane_ctr3_c23_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR3_MUX4_get_lane_ctr3_c22_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR3_MUX4_get_lane_ctr3_c21_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR3_MUX4_get_lane_ctr3_c20_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_LANE_CTR3_MUX5                                                 0x180263F4
#define  EPI_EPI_LANE_CTR3_MUX5_reg_addr                                         "0xB80263F4"
#define  EPI_EPI_LANE_CTR3_MUX5_reg                                              0xB80263F4
#define  EPI_EPI_LANE_CTR3_MUX5_inst_addr                                        "0x00C7"
#define  set_EPI_EPI_LANE_CTR3_MUX5_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX5_reg)=data)
#define  get_EPI_EPI_LANE_CTR3_MUX5_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR3_MUX5_reg))
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c29_mux_sel_shift                      (16)
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c28_mux_sel_shift                      (12)
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c27_mux_sel_shift                      (8)
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c26_mux_sel_shift                      (4)
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c25_mux_sel_shift                      (0)
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c29_mux_sel_mask                       (0x000F0000)
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c28_mux_sel_mask                       (0x0000F000)
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c27_mux_sel_mask                       (0x00000F00)
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c26_mux_sel_mask                       (0x000000F0)
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c25_mux_sel_mask                       (0x0000000F)
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c29_mux_sel(data)                      (0x000F0000&((data)<<16))
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c28_mux_sel(data)                      (0x0000F000&((data)<<12))
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c27_mux_sel(data)                      (0x00000F00&((data)<<8))
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c26_mux_sel(data)                      (0x000000F0&((data)<<4))
#define  EPI_EPI_LANE_CTR3_MUX5_lane_ctr3_c25_mux_sel(data)                      (0x0000000F&(data))
#define  EPI_EPI_LANE_CTR3_MUX5_get_lane_ctr3_c29_mux_sel(data)                  ((0x000F0000&(data))>>16)
#define  EPI_EPI_LANE_CTR3_MUX5_get_lane_ctr3_c28_mux_sel(data)                  ((0x0000F000&(data))>>12)
#define  EPI_EPI_LANE_CTR3_MUX5_get_lane_ctr3_c27_mux_sel(data)                  ((0x00000F00&(data))>>8)
#define  EPI_EPI_LANE_CTR3_MUX5_get_lane_ctr3_c26_mux_sel(data)                  ((0x000000F0&(data))>>4)
#define  EPI_EPI_LANE_CTR3_MUX5_get_lane_ctr3_c25_mux_sel(data)                  (0x0000000F&(data))

#define  EPI_EPI_TCON_MUX                                                       0x18026500
#define  EPI_EPI_TCON_MUX_reg_addr                                               "0xB8026500"
#define  EPI_EPI_TCON_MUX_reg                                                    0xB8026500
#define  EPI_EPI_TCON_MUX_inst_addr                                              "0x00C8"
#define  set_EPI_EPI_TCON_MUX_reg(data)                                          (*((volatile unsigned int*)EPI_EPI_TCON_MUX_reg)=data)
#define  get_EPI_EPI_TCON_MUX_reg                                                (*((volatile unsigned int*)EPI_EPI_TCON_MUX_reg))
#define  EPI_EPI_TCON_MUX_tcon_c_sel_shift                                       (16)
#define  EPI_EPI_TCON_MUX_tcon_b_sel_shift                                       (8)
#define  EPI_EPI_TCON_MUX_tcon_a_sel_shift                                       (0)
#define  EPI_EPI_TCON_MUX_tcon_c_sel_mask                                        (0x003F0000)
#define  EPI_EPI_TCON_MUX_tcon_b_sel_mask                                        (0x00003F00)
#define  EPI_EPI_TCON_MUX_tcon_a_sel_mask                                        (0x0000003F)
#define  EPI_EPI_TCON_MUX_tcon_c_sel(data)                                       (0x003F0000&((data)<<16))
#define  EPI_EPI_TCON_MUX_tcon_b_sel(data)                                       (0x00003F00&((data)<<8))
#define  EPI_EPI_TCON_MUX_tcon_a_sel(data)                                       (0x0000003F&(data))
#define  EPI_EPI_TCON_MUX_get_tcon_c_sel(data)                                   ((0x003F0000&(data))>>16)
#define  EPI_EPI_TCON_MUX_get_tcon_b_sel(data)                                   ((0x00003F00&(data))>>8)
#define  EPI_EPI_TCON_MUX_get_tcon_a_sel(data)                                   (0x0000003F&(data))

#define  EPI_EPI_TCON_MUX1                                                      0x18026504
#define  EPI_EPI_TCON_MUX1_reg_addr                                              "0xB8026504"
#define  EPI_EPI_TCON_MUX1_reg                                                   0xB8026504
#define  EPI_EPI_TCON_MUX1_inst_addr                                             "0x00C9"
#define  set_EPI_EPI_TCON_MUX1_reg(data)                                         (*((volatile unsigned int*)EPI_EPI_TCON_MUX1_reg)=data)
#define  get_EPI_EPI_TCON_MUX1_reg                                               (*((volatile unsigned int*)EPI_EPI_TCON_MUX1_reg))
#define  EPI_EPI_TCON_MUX1_tcon_f_sel_shift                                      (16)
#define  EPI_EPI_TCON_MUX1_tcon_e_sel_shift                                      (8)
#define  EPI_EPI_TCON_MUX1_tcon_d_sel_shift                                      (0)
#define  EPI_EPI_TCON_MUX1_tcon_f_sel_mask                                       (0x003F0000)
#define  EPI_EPI_TCON_MUX1_tcon_e_sel_mask                                       (0x00003F00)
#define  EPI_EPI_TCON_MUX1_tcon_d_sel_mask                                       (0x0000003F)
#define  EPI_EPI_TCON_MUX1_tcon_f_sel(data)                                      (0x003F0000&((data)<<16))
#define  EPI_EPI_TCON_MUX1_tcon_e_sel(data)                                      (0x00003F00&((data)<<8))
#define  EPI_EPI_TCON_MUX1_tcon_d_sel(data)                                      (0x0000003F&(data))
#define  EPI_EPI_TCON_MUX1_get_tcon_f_sel(data)                                  ((0x003F0000&(data))>>16)
#define  EPI_EPI_TCON_MUX1_get_tcon_e_sel(data)                                  ((0x00003F00&(data))>>8)
#define  EPI_EPI_TCON_MUX1_get_tcon_d_sel(data)                                  (0x0000003F&(data))

#define  EPI_EPI_TCON_MUX2                                                      0x18026508
#define  EPI_EPI_TCON_MUX2_reg_addr                                              "0xB8026508"
#define  EPI_EPI_TCON_MUX2_reg                                                   0xB8026508
#define  EPI_EPI_TCON_MUX2_inst_addr                                             "0x00CA"
#define  set_EPI_EPI_TCON_MUX2_reg(data)                                         (*((volatile unsigned int*)EPI_EPI_TCON_MUX2_reg)=data)
#define  get_EPI_EPI_TCON_MUX2_reg                                               (*((volatile unsigned int*)EPI_EPI_TCON_MUX2_reg))
#define  EPI_EPI_TCON_MUX2_tcon_i_sel_shift                                      (16)
#define  EPI_EPI_TCON_MUX2_tcon_h_sel_shift                                      (8)
#define  EPI_EPI_TCON_MUX2_tcon_g_sel_shift                                      (0)
#define  EPI_EPI_TCON_MUX2_tcon_i_sel_mask                                       (0x003F0000)
#define  EPI_EPI_TCON_MUX2_tcon_h_sel_mask                                       (0x00003F00)
#define  EPI_EPI_TCON_MUX2_tcon_g_sel_mask                                       (0x0000003F)
#define  EPI_EPI_TCON_MUX2_tcon_i_sel(data)                                      (0x003F0000&((data)<<16))
#define  EPI_EPI_TCON_MUX2_tcon_h_sel(data)                                      (0x00003F00&((data)<<8))
#define  EPI_EPI_TCON_MUX2_tcon_g_sel(data)                                      (0x0000003F&(data))
#define  EPI_EPI_TCON_MUX2_get_tcon_i_sel(data)                                  ((0x003F0000&(data))>>16)
#define  EPI_EPI_TCON_MUX2_get_tcon_h_sel(data)                                  ((0x00003F00&(data))>>8)
#define  EPI_EPI_TCON_MUX2_get_tcon_g_sel(data)                                  (0x0000003F&(data))

#define  EPI_EPI_TCON_MUX3                                                      0x1802650C
#define  EPI_EPI_TCON_MUX3_reg_addr                                              "0xB802650C"
#define  EPI_EPI_TCON_MUX3_reg                                                   0xB802650C
#define  EPI_EPI_TCON_MUX3_inst_addr                                             "0x00CB"
#define  set_EPI_EPI_TCON_MUX3_reg(data)                                         (*((volatile unsigned int*)EPI_EPI_TCON_MUX3_reg)=data)
#define  get_EPI_EPI_TCON_MUX3_reg                                               (*((volatile unsigned int*)EPI_EPI_TCON_MUX3_reg))
#define  EPI_EPI_TCON_MUX3_tcon_k_sel_shift                                      (8)
#define  EPI_EPI_TCON_MUX3_tcon_j_sel_shift                                      (0)
#define  EPI_EPI_TCON_MUX3_tcon_k_sel_mask                                       (0x00003F00)
#define  EPI_EPI_TCON_MUX3_tcon_j_sel_mask                                       (0x0000003F)
#define  EPI_EPI_TCON_MUX3_tcon_k_sel(data)                                      (0x00003F00&((data)<<8))
#define  EPI_EPI_TCON_MUX3_tcon_j_sel(data)                                      (0x0000003F&(data))
#define  EPI_EPI_TCON_MUX3_get_tcon_k_sel(data)                                  ((0x00003F00&(data))>>8)
#define  EPI_EPI_TCON_MUX3_get_tcon_j_sel(data)                                  (0x0000003F&(data))

#define  EPI_EPI_DUMMY_REG                                                      0x18026510
#define  EPI_EPI_DUMMY_REG_reg_addr                                              "0xB8026510"
#define  EPI_EPI_DUMMY_REG_reg                                                   0xB8026510
#define  EPI_EPI_DUMMY_REG_inst_addr                                             "0x00CC"
#define  set_EPI_EPI_DUMMY_REG_reg(data)                                         (*((volatile unsigned int*)EPI_EPI_DUMMY_REG_reg)=data)
#define  get_EPI_EPI_DUMMY_REG_reg                                               (*((volatile unsigned int*)EPI_EPI_DUMMY_REG_reg))
#define  EPI_EPI_DUMMY_REG_dummy_31_0_shift                                      (0)
#define  EPI_EPI_DUMMY_REG_dummy_31_0_mask                                       (0xFFFFFFFF)
#define  EPI_EPI_DUMMY_REG_dummy_31_0(data)                                      (0xFFFFFFFF&(data))
#define  EPI_EPI_DUMMY_REG_get_dummy_31_0(data)                                  (0xFFFFFFFF&(data))

#define  EPI_EPI_HW_DUMMY0_REG                                                  0x18026514
#define  EPI_EPI_HW_DUMMY0_REG_reg_addr                                          "0xB8026514"
#define  EPI_EPI_HW_DUMMY0_REG_reg                                               0xB8026514
#define  EPI_EPI_HW_DUMMY0_REG_inst_addr                                         "0x00CD"
#define  set_EPI_EPI_HW_DUMMY0_REG_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_HW_DUMMY0_REG_reg)=data)
#define  get_EPI_EPI_HW_DUMMY0_REG_reg                                           (*((volatile unsigned int*)EPI_EPI_HW_DUMMY0_REG_reg))
#define  EPI_EPI_HW_DUMMY0_REG_dummy_hw0_shift                                   (0)
#define  EPI_EPI_HW_DUMMY0_REG_dummy_hw0_mask                                    (0xFFFFFFFF)
#define  EPI_EPI_HW_DUMMY0_REG_dummy_hw0(data)                                   (0xFFFFFFFF&(data))
#define  EPI_EPI_HW_DUMMY0_REG_get_dummy_hw0(data)                               (0xFFFFFFFF&(data))

#define  EPI_EPI_HW_DUMMY1_REG                                                  0x18026518
#define  EPI_EPI_HW_DUMMY1_REG_reg_addr                                          "0xB8026518"
#define  EPI_EPI_HW_DUMMY1_REG_reg                                               0xB8026518
#define  EPI_EPI_HW_DUMMY1_REG_inst_addr                                         "0x00CE"
#define  set_EPI_EPI_HW_DUMMY1_REG_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_HW_DUMMY1_REG_reg)=data)
#define  get_EPI_EPI_HW_DUMMY1_REG_reg                                           (*((volatile unsigned int*)EPI_EPI_HW_DUMMY1_REG_reg))
#define  EPI_EPI_HW_DUMMY1_REG_dummy_hw1_shift                                   (0)
#define  EPI_EPI_HW_DUMMY1_REG_dummy_hw1_mask                                    (0xFFFFFFFF)
#define  EPI_EPI_HW_DUMMY1_REG_dummy_hw1(data)                                   (0xFFFFFFFF&(data))
#define  EPI_EPI_HW_DUMMY1_REG_get_dummy_hw1(data)                               (0xFFFFFFFF&(data))

#define  EPI_EPI_HW_DUMMY2_REG                                                  0x1802651C
#define  EPI_EPI_HW_DUMMY2_REG_reg_addr                                          "0xB802651C"
#define  EPI_EPI_HW_DUMMY2_REG_reg                                               0xB802651C
#define  EPI_EPI_HW_DUMMY2_REG_inst_addr                                         "0x00CF"
#define  set_EPI_EPI_HW_DUMMY2_REG_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_HW_DUMMY2_REG_reg)=data)
#define  get_EPI_EPI_HW_DUMMY2_REG_reg                                           (*((volatile unsigned int*)EPI_EPI_HW_DUMMY2_REG_reg))
#define  EPI_EPI_HW_DUMMY2_REG_dummy_hw2_shift                                   (0)
#define  EPI_EPI_HW_DUMMY2_REG_dummy_hw2_mask                                    (0xFFFFFFFF)
#define  EPI_EPI_HW_DUMMY2_REG_dummy_hw2(data)                                   (0xFFFFFFFF&(data))
#define  EPI_EPI_HW_DUMMY2_REG_get_dummy_hw2(data)                               (0xFFFFFFFF&(data))

#define  EPI_EPI_HW_DUMMY3_REG                                                  0x18026520
#define  EPI_EPI_HW_DUMMY3_REG_reg_addr                                          "0xB8026520"
#define  EPI_EPI_HW_DUMMY3_REG_reg                                               0xB8026520
#define  EPI_EPI_HW_DUMMY3_REG_inst_addr                                         "0x00D0"
#define  set_EPI_EPI_HW_DUMMY3_REG_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_HW_DUMMY3_REG_reg)=data)
#define  get_EPI_EPI_HW_DUMMY3_REG_reg                                           (*((volatile unsigned int*)EPI_EPI_HW_DUMMY3_REG_reg))
#define  EPI_EPI_HW_DUMMY3_REG_dummy_hw3_shift                                   (0)
#define  EPI_EPI_HW_DUMMY3_REG_dummy_hw3_mask                                    (0xFFFFFFFF)
#define  EPI_EPI_HW_DUMMY3_REG_dummy_hw3(data)                                   (0xFFFFFFFF&(data))
#define  EPI_EPI_HW_DUMMY3_REG_get_dummy_hw3(data)                               (0xFFFFFFFF&(data))

#define  EPI_EPI_CEDS_POL_REG                                                   0x18026524
#define  EPI_EPI_CEDS_POL_REG_reg_addr                                           "0xB8026524"
#define  EPI_EPI_CEDS_POL_REG_reg                                                0xB8026524
#define  EPI_EPI_CEDS_POL_REG_inst_addr                                          "0x00D1"
#define  set_EPI_EPI_CEDS_POL_REG_reg(data)                                      (*((volatile unsigned int*)EPI_EPI_CEDS_POL_REG_reg)=data)
#define  get_EPI_EPI_CEDS_POL_REG_reg                                            (*((volatile unsigned int*)EPI_EPI_CEDS_POL_REG_reg))
#define  EPI_EPI_CEDS_POL_REG_ceds_pol2_inv_shift                                (16)
#define  EPI_EPI_CEDS_POL_REG_ceds_pol_inv_shift                                 (0)
#define  EPI_EPI_CEDS_POL_REG_ceds_pol2_inv_mask                                 (0xFFFF0000)
#define  EPI_EPI_CEDS_POL_REG_ceds_pol_inv_mask                                  (0x0000FFFF)
#define  EPI_EPI_CEDS_POL_REG_ceds_pol2_inv(data)                                (0xFFFF0000&((data)<<16))
#define  EPI_EPI_CEDS_POL_REG_ceds_pol_inv(data)                                 (0x0000FFFF&(data))
#define  EPI_EPI_CEDS_POL_REG_get_ceds_pol2_inv(data)                            ((0xFFFF0000&(data))>>16)
#define  EPI_EPI_CEDS_POL_REG_get_ceds_pol_inv(data)                             (0x0000FFFF&(data))

#define  EPI_EPI_LANE_DST_DATA                                                  0x18026528
#define  EPI_EPI_LANE_DST_DATA_reg_addr                                          "0xB8026528"
#define  EPI_EPI_LANE_DST_DATA_reg                                               0xB8026528
#define  EPI_EPI_LANE_DST_DATA_inst_addr                                         "0x00D2"
#define  set_EPI_EPI_LANE_DST_DATA_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_DST_DATA_reg)=data)
#define  get_EPI_EPI_LANE_DST_DATA_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_DST_DATA_reg))
#define  EPI_EPI_LANE_DST_DATA_d_st_shift                                        (0)
#define  EPI_EPI_LANE_DST_DATA_d_st_mask                                         (0x3FFFFFFF)
#define  EPI_EPI_LANE_DST_DATA_d_st(data)                                        (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE_DST_DATA_get_d_st(data)                                    (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE_CST_DATA                                                  0x1802653C
#define  EPI_EPI_LANE_CST_DATA_reg_addr                                          "0xB802653C"
#define  EPI_EPI_LANE_CST_DATA_reg                                               0xB802653C
#define  EPI_EPI_LANE_CST_DATA_inst_addr                                         "0x00D3"
#define  set_EPI_EPI_LANE_CST_DATA_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_LANE_CST_DATA_reg)=data)
#define  get_EPI_EPI_LANE_CST_DATA_reg                                           (*((volatile unsigned int*)EPI_EPI_LANE_CST_DATA_reg))
#define  EPI_EPI_LANE_CST_DATA_c_st_shift                                        (0)
#define  EPI_EPI_LANE_CST_DATA_c_st_mask                                         (0x3FFFFFFF)
#define  EPI_EPI_LANE_CST_DATA_c_st(data)                                        (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE_CST_DATA_get_c_st(data)                                    (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE_CTR4_DATA                                                 0x18026A60
#define  EPI_EPI_LANE_CTR4_DATA_reg_addr                                         "0xB8026A60"
#define  EPI_EPI_LANE_CTR4_DATA_reg                                              0xB8026A60
#define  EPI_EPI_LANE_CTR4_DATA_inst_addr                                        "0x00D4"
#define  set_EPI_EPI_LANE_CTR4_DATA_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR4_DATA_reg)=data)
#define  get_EPI_EPI_LANE_CTR4_DATA_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR4_DATA_reg))
#define  EPI_EPI_LANE_CTR4_DATA_lane_ctr4_shift                                  (0)
#define  EPI_EPI_LANE_CTR4_DATA_lane_ctr4_mask                                   (0x3FFFFFFF)
#define  EPI_EPI_LANE_CTR4_DATA_lane_ctr4(data)                                  (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE_CTR4_DATA_get_lane_ctr4(data)                              (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE_CTR5_DATA                                                 0x18026AA0
#define  EPI_EPI_LANE_CTR5_DATA_reg_addr                                         "0xB8026AA0"
#define  EPI_EPI_LANE_CTR5_DATA_reg                                              0xB8026AA0
#define  EPI_EPI_LANE_CTR5_DATA_inst_addr                                        "0x00D5"
#define  set_EPI_EPI_LANE_CTR5_DATA_reg(data)                                    (*((volatile unsigned int*)EPI_EPI_LANE_CTR5_DATA_reg)=data)
#define  get_EPI_EPI_LANE_CTR5_DATA_reg                                          (*((volatile unsigned int*)EPI_EPI_LANE_CTR5_DATA_reg))
#define  EPI_EPI_LANE_CTR5_DATA_lane_ctr5_shift                                  (0)
#define  EPI_EPI_LANE_CTR5_DATA_lane_ctr5_mask                                   (0x3FFFFFFF)
#define  EPI_EPI_LANE_CTR5_DATA_lane_ctr5(data)                                  (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE_CTR5_DATA_get_lane_ctr5(data)                              (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE0_CTR1_ODATA                                               0x18026554
#define  EPI_EPI_LANE0_CTR1_ODATA_reg_addr                                       "0xB8026554"
#define  EPI_EPI_LANE0_CTR1_ODATA_reg                                            0xB8026554
#define  EPI_EPI_LANE0_CTR1_ODATA_inst_addr                                      "0x00D6"
#define  set_EPI_EPI_LANE0_CTR1_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE0_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE0_CTR1_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE0_CTR1_ODATA_reg))
#define  EPI_EPI_LANE0_CTR1_ODATA_lane0_ctr1_odd_shift                           (0)
#define  EPI_EPI_LANE0_CTR1_ODATA_lane0_ctr1_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE0_CTR1_ODATA_lane0_ctr1_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE0_CTR1_ODATA_get_lane0_ctr1_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE1_CTR1_ODATA                                               0x1802655C
#define  EPI_EPI_LANE1_CTR1_ODATA_reg_addr                                       "0xB802655C"
#define  EPI_EPI_LANE1_CTR1_ODATA_reg                                            0xB802655C
#define  EPI_EPI_LANE1_CTR1_ODATA_inst_addr                                      "0x00D7"
#define  set_EPI_EPI_LANE1_CTR1_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE1_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE1_CTR1_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE1_CTR1_ODATA_reg))
#define  EPI_EPI_LANE1_CTR1_ODATA_lane1_ctr1_odd_shift                           (0)
#define  EPI_EPI_LANE1_CTR1_ODATA_lane1_ctr1_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE1_CTR1_ODATA_lane1_ctr1_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE1_CTR1_ODATA_get_lane1_ctr1_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE2_CTR1_ODATA                                               0x18026564
#define  EPI_EPI_LANE2_CTR1_ODATA_reg_addr                                       "0xB8026564"
#define  EPI_EPI_LANE2_CTR1_ODATA_reg                                            0xB8026564
#define  EPI_EPI_LANE2_CTR1_ODATA_inst_addr                                      "0x00D8"
#define  set_EPI_EPI_LANE2_CTR1_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE2_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE2_CTR1_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE2_CTR1_ODATA_reg))
#define  EPI_EPI_LANE2_CTR1_ODATA_lane2_ctr1_odd_shift                           (0)
#define  EPI_EPI_LANE2_CTR1_ODATA_lane2_ctr1_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE2_CTR1_ODATA_lane2_ctr1_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE2_CTR1_ODATA_get_lane2_ctr1_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE3_CTR1_ODATA                                               0x1802656C
#define  EPI_EPI_LANE3_CTR1_ODATA_reg_addr                                       "0xB802656C"
#define  EPI_EPI_LANE3_CTR1_ODATA_reg                                            0xB802656C
#define  EPI_EPI_LANE3_CTR1_ODATA_inst_addr                                      "0x00D9"
#define  set_EPI_EPI_LANE3_CTR1_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE3_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE3_CTR1_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE3_CTR1_ODATA_reg))
#define  EPI_EPI_LANE3_CTR1_ODATA_lane3_ctr1_odd_shift                           (0)
#define  EPI_EPI_LANE3_CTR1_ODATA_lane3_ctr1_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE3_CTR1_ODATA_lane3_ctr1_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE3_CTR1_ODATA_get_lane3_ctr1_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE4_CTR1_ODATA                                               0x18026574
#define  EPI_EPI_LANE4_CTR1_ODATA_reg_addr                                       "0xB8026574"
#define  EPI_EPI_LANE4_CTR1_ODATA_reg                                            0xB8026574
#define  EPI_EPI_LANE4_CTR1_ODATA_inst_addr                                      "0x00DA"
#define  set_EPI_EPI_LANE4_CTR1_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE4_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE4_CTR1_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE4_CTR1_ODATA_reg))
#define  EPI_EPI_LANE4_CTR1_ODATA_lane4_ctr1_odd_shift                           (0)
#define  EPI_EPI_LANE4_CTR1_ODATA_lane4_ctr1_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE4_CTR1_ODATA_lane4_ctr1_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE4_CTR1_ODATA_get_lane4_ctr1_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE5_CTR1_ODATA                                               0x1802657C
#define  EPI_EPI_LANE5_CTR1_ODATA_reg_addr                                       "0xB802657C"
#define  EPI_EPI_LANE5_CTR1_ODATA_reg                                            0xB802657C
#define  EPI_EPI_LANE5_CTR1_ODATA_inst_addr                                      "0x00DB"
#define  set_EPI_EPI_LANE5_CTR1_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE5_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE5_CTR1_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE5_CTR1_ODATA_reg))
#define  EPI_EPI_LANE5_CTR1_ODATA_lane5_ctr1_odd_shift                           (0)
#define  EPI_EPI_LANE5_CTR1_ODATA_lane5_ctr1_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE5_CTR1_ODATA_lane5_ctr1_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE5_CTR1_ODATA_get_lane5_ctr1_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE6_CTR1_ODATA                                               0x18026584
#define  EPI_EPI_LANE6_CTR1_ODATA_reg_addr                                       "0xB8026584"
#define  EPI_EPI_LANE6_CTR1_ODATA_reg                                            0xB8026584
#define  EPI_EPI_LANE6_CTR1_ODATA_inst_addr                                      "0x00DC"
#define  set_EPI_EPI_LANE6_CTR1_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE6_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE6_CTR1_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE6_CTR1_ODATA_reg))
#define  EPI_EPI_LANE6_CTR1_ODATA_lane6_ctr1_odd_shift                           (0)
#define  EPI_EPI_LANE6_CTR1_ODATA_lane6_ctr1_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE6_CTR1_ODATA_lane6_ctr1_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE6_CTR1_ODATA_get_lane6_ctr1_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE7_CTR1_ODATA                                               0x1802658C
#define  EPI_EPI_LANE7_CTR1_ODATA_reg_addr                                       "0xB802658C"
#define  EPI_EPI_LANE7_CTR1_ODATA_reg                                            0xB802658C
#define  EPI_EPI_LANE7_CTR1_ODATA_inst_addr                                      "0x00DD"
#define  set_EPI_EPI_LANE7_CTR1_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE7_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE7_CTR1_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE7_CTR1_ODATA_reg))
#define  EPI_EPI_LANE7_CTR1_ODATA_lane7_ctr1_odd_shift                           (0)
#define  EPI_EPI_LANE7_CTR1_ODATA_lane7_ctr1_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE7_CTR1_ODATA_lane7_ctr1_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE7_CTR1_ODATA_get_lane7_ctr1_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE8_CTR1_ODATA                                               0x18026594
#define  EPI_EPI_LANE8_CTR1_ODATA_reg_addr                                       "0xB8026594"
#define  EPI_EPI_LANE8_CTR1_ODATA_reg                                            0xB8026594
#define  EPI_EPI_LANE8_CTR1_ODATA_inst_addr                                      "0x00DE"
#define  set_EPI_EPI_LANE8_CTR1_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE8_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE8_CTR1_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE8_CTR1_ODATA_reg))
#define  EPI_EPI_LANE8_CTR1_ODATA_lane8_ctr1_odd_shift                           (0)
#define  EPI_EPI_LANE8_CTR1_ODATA_lane8_ctr1_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE8_CTR1_ODATA_lane8_ctr1_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE8_CTR1_ODATA_get_lane8_ctr1_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE9_CTR1_ODATA                                               0x1802659C
#define  EPI_EPI_LANE9_CTR1_ODATA_reg_addr                                       "0xB802659C"
#define  EPI_EPI_LANE9_CTR1_ODATA_reg                                            0xB802659C
#define  EPI_EPI_LANE9_CTR1_ODATA_inst_addr                                      "0x00DF"
#define  set_EPI_EPI_LANE9_CTR1_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE9_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE9_CTR1_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE9_CTR1_ODATA_reg))
#define  EPI_EPI_LANE9_CTR1_ODATA_lane9_ctr1_odd_shift                           (0)
#define  EPI_EPI_LANE9_CTR1_ODATA_lane9_ctr1_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE9_CTR1_ODATA_lane9_ctr1_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE9_CTR1_ODATA_get_lane9_ctr1_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE10_CTR1_ODATA                                              0x180265A4
#define  EPI_EPI_LANE10_CTR1_ODATA_reg_addr                                      "0xB80265A4"
#define  EPI_EPI_LANE10_CTR1_ODATA_reg                                           0xB80265A4
#define  EPI_EPI_LANE10_CTR1_ODATA_inst_addr                                     "0x00E0"
#define  set_EPI_EPI_LANE10_CTR1_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE10_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE10_CTR1_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE10_CTR1_ODATA_reg))
#define  EPI_EPI_LANE10_CTR1_ODATA_lane10_ctr1_odd_shift                         (0)
#define  EPI_EPI_LANE10_CTR1_ODATA_lane10_ctr1_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE10_CTR1_ODATA_lane10_ctr1_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE10_CTR1_ODATA_get_lane10_ctr1_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE11_CTR1_ODATA                                              0x180265AC
#define  EPI_EPI_LANE11_CTR1_ODATA_reg_addr                                      "0xB80265AC"
#define  EPI_EPI_LANE11_CTR1_ODATA_reg                                           0xB80265AC
#define  EPI_EPI_LANE11_CTR1_ODATA_inst_addr                                     "0x00E1"
#define  set_EPI_EPI_LANE11_CTR1_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE11_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE11_CTR1_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE11_CTR1_ODATA_reg))
#define  EPI_EPI_LANE11_CTR1_ODATA_lane11_ctr1_odd_shift                         (0)
#define  EPI_EPI_LANE11_CTR1_ODATA_lane11_ctr1_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE11_CTR1_ODATA_lane11_ctr1_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE11_CTR1_ODATA_get_lane11_ctr1_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE12_CTR1_ODATA                                              0x180265B4
#define  EPI_EPI_LANE12_CTR1_ODATA_reg_addr                                      "0xB80265B4"
#define  EPI_EPI_LANE12_CTR1_ODATA_reg                                           0xB80265B4
#define  EPI_EPI_LANE12_CTR1_ODATA_inst_addr                                     "0x00E2"
#define  set_EPI_EPI_LANE12_CTR1_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE12_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE12_CTR1_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE12_CTR1_ODATA_reg))
#define  EPI_EPI_LANE12_CTR1_ODATA_lane12_ctr1_odd_shift                         (0)
#define  EPI_EPI_LANE12_CTR1_ODATA_lane12_ctr1_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE12_CTR1_ODATA_lane12_ctr1_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE12_CTR1_ODATA_get_lane12_ctr1_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE13_CTR1_ODATA                                              0x180265BC
#define  EPI_EPI_LANE13_CTR1_ODATA_reg_addr                                      "0xB80265BC"
#define  EPI_EPI_LANE13_CTR1_ODATA_reg                                           0xB80265BC
#define  EPI_EPI_LANE13_CTR1_ODATA_inst_addr                                     "0x00E3"
#define  set_EPI_EPI_LANE13_CTR1_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE13_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE13_CTR1_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE13_CTR1_ODATA_reg))
#define  EPI_EPI_LANE13_CTR1_ODATA_lane13_ctr1_odd_shift                         (0)
#define  EPI_EPI_LANE13_CTR1_ODATA_lane13_ctr1_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE13_CTR1_ODATA_lane13_ctr1_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE13_CTR1_ODATA_get_lane13_ctr1_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE14_CTR1_ODATA                                              0x180265C4
#define  EPI_EPI_LANE14_CTR1_ODATA_reg_addr                                      "0xB80265C4"
#define  EPI_EPI_LANE14_CTR1_ODATA_reg                                           0xB80265C4
#define  EPI_EPI_LANE14_CTR1_ODATA_inst_addr                                     "0x00E4"
#define  set_EPI_EPI_LANE14_CTR1_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE14_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE14_CTR1_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE14_CTR1_ODATA_reg))
#define  EPI_EPI_LANE14_CTR1_ODATA_lane14_ctr1_odd_shift                         (0)
#define  EPI_EPI_LANE14_CTR1_ODATA_lane14_ctr1_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE14_CTR1_ODATA_lane14_ctr1_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE14_CTR1_ODATA_get_lane14_ctr1_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE15_CTR1_ODATA                                              0x180265CC
#define  EPI_EPI_LANE15_CTR1_ODATA_reg_addr                                      "0xB80265CC"
#define  EPI_EPI_LANE15_CTR1_ODATA_reg                                           0xB80265CC
#define  EPI_EPI_LANE15_CTR1_ODATA_inst_addr                                     "0x00E5"
#define  set_EPI_EPI_LANE15_CTR1_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE15_CTR1_ODATA_reg)=data)
#define  get_EPI_EPI_LANE15_CTR1_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE15_CTR1_ODATA_reg))
#define  EPI_EPI_LANE15_CTR1_ODATA_lane15_ctr1_odd_shift                         (0)
#define  EPI_EPI_LANE15_CTR1_ODATA_lane15_ctr1_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE15_CTR1_ODATA_lane15_ctr1_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE15_CTR1_ODATA_get_lane15_ctr1_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE0_CTR2_ODATA                                               0x18026624
#define  EPI_EPI_LANE0_CTR2_ODATA_reg_addr                                       "0xB8026624"
#define  EPI_EPI_LANE0_CTR2_ODATA_reg                                            0xB8026624
#define  EPI_EPI_LANE0_CTR2_ODATA_inst_addr                                      "0x00E6"
#define  set_EPI_EPI_LANE0_CTR2_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE0_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE0_CTR2_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE0_CTR2_ODATA_reg))
#define  EPI_EPI_LANE0_CTR2_ODATA_lane0_ctr2_odd_shift                           (0)
#define  EPI_EPI_LANE0_CTR2_ODATA_lane0_ctr2_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE0_CTR2_ODATA_lane0_ctr2_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE0_CTR2_ODATA_get_lane0_ctr2_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE1_CTR2_ODATA                                               0x1802662C
#define  EPI_EPI_LANE1_CTR2_ODATA_reg_addr                                       "0xB802662C"
#define  EPI_EPI_LANE1_CTR2_ODATA_reg                                            0xB802662C
#define  EPI_EPI_LANE1_CTR2_ODATA_inst_addr                                      "0x00E7"
#define  set_EPI_EPI_LANE1_CTR2_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE1_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE1_CTR2_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE1_CTR2_ODATA_reg))
#define  EPI_EPI_LANE1_CTR2_ODATA_lane1_ctr2_odd_shift                           (0)
#define  EPI_EPI_LANE1_CTR2_ODATA_lane1_ctr2_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE1_CTR2_ODATA_lane1_ctr2_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE1_CTR2_ODATA_get_lane1_ctr2_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE2_CTR2_ODATA                                               0x18026634
#define  EPI_EPI_LANE2_CTR2_ODATA_reg_addr                                       "0xB8026634"
#define  EPI_EPI_LANE2_CTR2_ODATA_reg                                            0xB8026634
#define  EPI_EPI_LANE2_CTR2_ODATA_inst_addr                                      "0x00E8"
#define  set_EPI_EPI_LANE2_CTR2_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE2_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE2_CTR2_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE2_CTR2_ODATA_reg))
#define  EPI_EPI_LANE2_CTR2_ODATA_lane2_ctr2_odd_shift                           (0)
#define  EPI_EPI_LANE2_CTR2_ODATA_lane2_ctr2_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE2_CTR2_ODATA_lane2_ctr2_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE2_CTR2_ODATA_get_lane2_ctr2_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE3_CTR2_ODATA                                               0x1802663C
#define  EPI_EPI_LANE3_CTR2_ODATA_reg_addr                                       "0xB802663C"
#define  EPI_EPI_LANE3_CTR2_ODATA_reg                                            0xB802663C
#define  EPI_EPI_LANE3_CTR2_ODATA_inst_addr                                      "0x00E9"
#define  set_EPI_EPI_LANE3_CTR2_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE3_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE3_CTR2_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE3_CTR2_ODATA_reg))
#define  EPI_EPI_LANE3_CTR2_ODATA_lane3_ctr2_odd_shift                           (0)
#define  EPI_EPI_LANE3_CTR2_ODATA_lane3_ctr2_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE3_CTR2_ODATA_lane3_ctr2_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE3_CTR2_ODATA_get_lane3_ctr2_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE4_CTR2_ODATA                                               0x18026644
#define  EPI_EPI_LANE4_CTR2_ODATA_reg_addr                                       "0xB8026644"
#define  EPI_EPI_LANE4_CTR2_ODATA_reg                                            0xB8026644
#define  EPI_EPI_LANE4_CTR2_ODATA_inst_addr                                      "0x00EA"
#define  set_EPI_EPI_LANE4_CTR2_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE4_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE4_CTR2_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE4_CTR2_ODATA_reg))
#define  EPI_EPI_LANE4_CTR2_ODATA_lane4_ctr2_odd_shift                           (0)
#define  EPI_EPI_LANE4_CTR2_ODATA_lane4_ctr2_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE4_CTR2_ODATA_lane4_ctr2_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE4_CTR2_ODATA_get_lane4_ctr2_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE5_CTR2_ODATA                                               0x1802664C
#define  EPI_EPI_LANE5_CTR2_ODATA_reg_addr                                       "0xB802664C"
#define  EPI_EPI_LANE5_CTR2_ODATA_reg                                            0xB802664C
#define  EPI_EPI_LANE5_CTR2_ODATA_inst_addr                                      "0x00EB"
#define  set_EPI_EPI_LANE5_CTR2_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE5_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE5_CTR2_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE5_CTR2_ODATA_reg))
#define  EPI_EPI_LANE5_CTR2_ODATA_lane5_ctr2_odd_shift                           (0)
#define  EPI_EPI_LANE5_CTR2_ODATA_lane5_ctr2_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE5_CTR2_ODATA_lane5_ctr2_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE5_CTR2_ODATA_get_lane5_ctr2_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE6_CTR2_ODATA                                               0x18026654
#define  EPI_EPI_LANE6_CTR2_ODATA_reg_addr                                       "0xB8026654"
#define  EPI_EPI_LANE6_CTR2_ODATA_reg                                            0xB8026654
#define  EPI_EPI_LANE6_CTR2_ODATA_inst_addr                                      "0x00EC"
#define  set_EPI_EPI_LANE6_CTR2_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE6_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE6_CTR2_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE6_CTR2_ODATA_reg))
#define  EPI_EPI_LANE6_CTR2_ODATA_lane6_ctr2_odd_shift                           (0)
#define  EPI_EPI_LANE6_CTR2_ODATA_lane6_ctr2_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE6_CTR2_ODATA_lane6_ctr2_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE6_CTR2_ODATA_get_lane6_ctr2_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE7_CTR2_ODATA                                               0x1802665C
#define  EPI_EPI_LANE7_CTR2_ODATA_reg_addr                                       "0xB802665C"
#define  EPI_EPI_LANE7_CTR2_ODATA_reg                                            0xB802665C
#define  EPI_EPI_LANE7_CTR2_ODATA_inst_addr                                      "0x00ED"
#define  set_EPI_EPI_LANE7_CTR2_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE7_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE7_CTR2_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE7_CTR2_ODATA_reg))
#define  EPI_EPI_LANE7_CTR2_ODATA_lane7_ctr2_odd_shift                           (0)
#define  EPI_EPI_LANE7_CTR2_ODATA_lane7_ctr2_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE7_CTR2_ODATA_lane7_ctr2_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE7_CTR2_ODATA_get_lane7_ctr2_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE8_CTR2_ODATA                                               0x18026664
#define  EPI_EPI_LANE8_CTR2_ODATA_reg_addr                                       "0xB8026664"
#define  EPI_EPI_LANE8_CTR2_ODATA_reg                                            0xB8026664
#define  EPI_EPI_LANE8_CTR2_ODATA_inst_addr                                      "0x00EE"
#define  set_EPI_EPI_LANE8_CTR2_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE8_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE8_CTR2_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE8_CTR2_ODATA_reg))
#define  EPI_EPI_LANE8_CTR2_ODATA_lane8_ctr2_odd_shift                           (0)
#define  EPI_EPI_LANE8_CTR2_ODATA_lane8_ctr2_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE8_CTR2_ODATA_lane8_ctr2_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE8_CTR2_ODATA_get_lane8_ctr2_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE9_CTR2_ODATA                                               0x1802666C
#define  EPI_EPI_LANE9_CTR2_ODATA_reg_addr                                       "0xB802666C"
#define  EPI_EPI_LANE9_CTR2_ODATA_reg                                            0xB802666C
#define  EPI_EPI_LANE9_CTR2_ODATA_inst_addr                                      "0x00EF"
#define  set_EPI_EPI_LANE9_CTR2_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE9_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE9_CTR2_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE9_CTR2_ODATA_reg))
#define  EPI_EPI_LANE9_CTR2_ODATA_lane9_ctr2_odd_shift                           (0)
#define  EPI_EPI_LANE9_CTR2_ODATA_lane9_ctr2_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE9_CTR2_ODATA_lane9_ctr2_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE9_CTR2_ODATA_get_lane9_ctr2_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE10_CTR2_ODATA                                              0x18026674
#define  EPI_EPI_LANE10_CTR2_ODATA_reg_addr                                      "0xB8026674"
#define  EPI_EPI_LANE10_CTR2_ODATA_reg                                           0xB8026674
#define  EPI_EPI_LANE10_CTR2_ODATA_inst_addr                                     "0x00F0"
#define  set_EPI_EPI_LANE10_CTR2_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE10_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE10_CTR2_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE10_CTR2_ODATA_reg))
#define  EPI_EPI_LANE10_CTR2_ODATA_lane10_ctr2_odd_shift                         (0)
#define  EPI_EPI_LANE10_CTR2_ODATA_lane10_ctr2_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE10_CTR2_ODATA_lane10_ctr2_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE10_CTR2_ODATA_get_lane10_ctr2_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE11_CTR2_ODATA                                              0x1802667C
#define  EPI_EPI_LANE11_CTR2_ODATA_reg_addr                                      "0xB802667C"
#define  EPI_EPI_LANE11_CTR2_ODATA_reg                                           0xB802667C
#define  EPI_EPI_LANE11_CTR2_ODATA_inst_addr                                     "0x00F1"
#define  set_EPI_EPI_LANE11_CTR2_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE11_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE11_CTR2_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE11_CTR2_ODATA_reg))
#define  EPI_EPI_LANE11_CTR2_ODATA_lane11_ctr2_odd_shift                         (0)
#define  EPI_EPI_LANE11_CTR2_ODATA_lane11_ctr2_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE11_CTR2_ODATA_lane11_ctr2_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE11_CTR2_ODATA_get_lane11_ctr2_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE12_CTR2_ODATA                                              0x18026684
#define  EPI_EPI_LANE12_CTR2_ODATA_reg_addr                                      "0xB8026684"
#define  EPI_EPI_LANE12_CTR2_ODATA_reg                                           0xB8026684
#define  EPI_EPI_LANE12_CTR2_ODATA_inst_addr                                     "0x00F2"
#define  set_EPI_EPI_LANE12_CTR2_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE12_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE12_CTR2_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE12_CTR2_ODATA_reg))
#define  EPI_EPI_LANE12_CTR2_ODATA_lane12_ctr2_odd_shift                         (0)
#define  EPI_EPI_LANE12_CTR2_ODATA_lane12_ctr2_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE12_CTR2_ODATA_lane12_ctr2_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE12_CTR2_ODATA_get_lane12_ctr2_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE13_CTR2_ODATA                                              0x1802668C
#define  EPI_EPI_LANE13_CTR2_ODATA_reg_addr                                      "0xB802668C"
#define  EPI_EPI_LANE13_CTR2_ODATA_reg                                           0xB802668C
#define  EPI_EPI_LANE13_CTR2_ODATA_inst_addr                                     "0x00F3"
#define  set_EPI_EPI_LANE13_CTR2_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE13_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE13_CTR2_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE13_CTR2_ODATA_reg))
#define  EPI_EPI_LANE13_CTR2_ODATA_lane13_ctr2_odd_shift                         (0)
#define  EPI_EPI_LANE13_CTR2_ODATA_lane13_ctr2_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE13_CTR2_ODATA_lane13_ctr2_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE13_CTR2_ODATA_get_lane13_ctr2_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE14_CTR2_ODATA                                              0x18026694
#define  EPI_EPI_LANE14_CTR2_ODATA_reg_addr                                      "0xB8026694"
#define  EPI_EPI_LANE14_CTR2_ODATA_reg                                           0xB8026694
#define  EPI_EPI_LANE14_CTR2_ODATA_inst_addr                                     "0x00F4"
#define  set_EPI_EPI_LANE14_CTR2_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE14_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE14_CTR2_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE14_CTR2_ODATA_reg))
#define  EPI_EPI_LANE14_CTR2_ODATA_lane14_ctr2_odd_shift                         (0)
#define  EPI_EPI_LANE14_CTR2_ODATA_lane14_ctr2_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE14_CTR2_ODATA_lane14_ctr2_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE14_CTR2_ODATA_get_lane14_ctr2_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE15_CTR2_ODATA                                              0x1802669C
#define  EPI_EPI_LANE15_CTR2_ODATA_reg_addr                                      "0xB802669C"
#define  EPI_EPI_LANE15_CTR2_ODATA_reg                                           0xB802669C
#define  EPI_EPI_LANE15_CTR2_ODATA_inst_addr                                     "0x00F5"
#define  set_EPI_EPI_LANE15_CTR2_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE15_CTR2_ODATA_reg)=data)
#define  get_EPI_EPI_LANE15_CTR2_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE15_CTR2_ODATA_reg))
#define  EPI_EPI_LANE15_CTR2_ODATA_lane15_ctr2_odd_shift                         (0)
#define  EPI_EPI_LANE15_CTR2_ODATA_lane15_ctr2_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE15_CTR2_ODATA_lane15_ctr2_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE15_CTR2_ODATA_get_lane15_ctr2_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE0_CTR3_ODATA                                               0x180266F4
#define  EPI_EPI_LANE0_CTR3_ODATA_reg_addr                                       "0xB80266F4"
#define  EPI_EPI_LANE0_CTR3_ODATA_reg                                            0xB80266F4
#define  EPI_EPI_LANE0_CTR3_ODATA_inst_addr                                      "0x00F6"
#define  set_EPI_EPI_LANE0_CTR3_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE0_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE0_CTR3_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE0_CTR3_ODATA_reg))
#define  EPI_EPI_LANE0_CTR3_ODATA_lane0_ctr3_odd_shift                           (0)
#define  EPI_EPI_LANE0_CTR3_ODATA_lane0_ctr3_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE0_CTR3_ODATA_lane0_ctr3_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE0_CTR3_ODATA_get_lane0_ctr3_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE1_CTR3_ODATA                                               0x180266FC
#define  EPI_EPI_LANE1_CTR3_ODATA_reg_addr                                       "0xB80266FC"
#define  EPI_EPI_LANE1_CTR3_ODATA_reg                                            0xB80266FC
#define  EPI_EPI_LANE1_CTR3_ODATA_inst_addr                                      "0x00F7"
#define  set_EPI_EPI_LANE1_CTR3_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE1_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE1_CTR3_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE1_CTR3_ODATA_reg))
#define  EPI_EPI_LANE1_CTR3_ODATA_lane1_ctr3_odd_shift                           (0)
#define  EPI_EPI_LANE1_CTR3_ODATA_lane1_ctr3_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE1_CTR3_ODATA_lane1_ctr3_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE1_CTR3_ODATA_get_lane1_ctr3_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE2_CTR3_ODATA                                               0x18026704
#define  EPI_EPI_LANE2_CTR3_ODATA_reg_addr                                       "0xB8026704"
#define  EPI_EPI_LANE2_CTR3_ODATA_reg                                            0xB8026704
#define  EPI_EPI_LANE2_CTR3_ODATA_inst_addr                                      "0x00F8"
#define  set_EPI_EPI_LANE2_CTR3_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE2_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE2_CTR3_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE2_CTR3_ODATA_reg))
#define  EPI_EPI_LANE2_CTR3_ODATA_lane2_ctr3_odd_shift                           (0)
#define  EPI_EPI_LANE2_CTR3_ODATA_lane2_ctr3_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE2_CTR3_ODATA_lane2_ctr3_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE2_CTR3_ODATA_get_lane2_ctr3_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE3_CTR3_ODATA                                               0x1802670C
#define  EPI_EPI_LANE3_CTR3_ODATA_reg_addr                                       "0xB802670C"
#define  EPI_EPI_LANE3_CTR3_ODATA_reg                                            0xB802670C
#define  EPI_EPI_LANE3_CTR3_ODATA_inst_addr                                      "0x00F9"
#define  set_EPI_EPI_LANE3_CTR3_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE3_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE3_CTR3_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE3_CTR3_ODATA_reg))
#define  EPI_EPI_LANE3_CTR3_ODATA_lane3_ctr3_odd_shift                           (0)
#define  EPI_EPI_LANE3_CTR3_ODATA_lane3_ctr3_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE3_CTR3_ODATA_lane3_ctr3_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE3_CTR3_ODATA_get_lane3_ctr3_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE4_CTR3_ODATA                                               0x18026714
#define  EPI_EPI_LANE4_CTR3_ODATA_reg_addr                                       "0xB8026714"
#define  EPI_EPI_LANE4_CTR3_ODATA_reg                                            0xB8026714
#define  EPI_EPI_LANE4_CTR3_ODATA_inst_addr                                      "0x00FA"
#define  set_EPI_EPI_LANE4_CTR3_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE4_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE4_CTR3_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE4_CTR3_ODATA_reg))
#define  EPI_EPI_LANE4_CTR3_ODATA_lane4_ctr3_odd_shift                           (0)
#define  EPI_EPI_LANE4_CTR3_ODATA_lane4_ctr3_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE4_CTR3_ODATA_lane4_ctr3_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE4_CTR3_ODATA_get_lane4_ctr3_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE5_CTR3_ODATA                                               0x1802671C
#define  EPI_EPI_LANE5_CTR3_ODATA_reg_addr                                       "0xB802671C"
#define  EPI_EPI_LANE5_CTR3_ODATA_reg                                            0xB802671C
#define  EPI_EPI_LANE5_CTR3_ODATA_inst_addr                                      "0x00FB"
#define  set_EPI_EPI_LANE5_CTR3_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE5_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE5_CTR3_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE5_CTR3_ODATA_reg))
#define  EPI_EPI_LANE5_CTR3_ODATA_lane5_ctr3_odd_shift                           (0)
#define  EPI_EPI_LANE5_CTR3_ODATA_lane5_ctr3_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE5_CTR3_ODATA_lane5_ctr3_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE5_CTR3_ODATA_get_lane5_ctr3_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE6_CTR3_ODATA                                               0x18026724
#define  EPI_EPI_LANE6_CTR3_ODATA_reg_addr                                       "0xB8026724"
#define  EPI_EPI_LANE6_CTR3_ODATA_reg                                            0xB8026724
#define  EPI_EPI_LANE6_CTR3_ODATA_inst_addr                                      "0x00FC"
#define  set_EPI_EPI_LANE6_CTR3_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE6_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE6_CTR3_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE6_CTR3_ODATA_reg))
#define  EPI_EPI_LANE6_CTR3_ODATA_lane6_ctr3_odd_shift                           (0)
#define  EPI_EPI_LANE6_CTR3_ODATA_lane6_ctr3_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE6_CTR3_ODATA_lane6_ctr3_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE6_CTR3_ODATA_get_lane6_ctr3_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE7_CTR3_ODATA                                               0x1802672C
#define  EPI_EPI_LANE7_CTR3_ODATA_reg_addr                                       "0xB802672C"
#define  EPI_EPI_LANE7_CTR3_ODATA_reg                                            0xB802672C
#define  EPI_EPI_LANE7_CTR3_ODATA_inst_addr                                      "0x00FD"
#define  set_EPI_EPI_LANE7_CTR3_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE7_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE7_CTR3_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE7_CTR3_ODATA_reg))
#define  EPI_EPI_LANE7_CTR3_ODATA_lane7_ctr3_odd_shift                           (0)
#define  EPI_EPI_LANE7_CTR3_ODATA_lane7_ctr3_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE7_CTR3_ODATA_lane7_ctr3_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE7_CTR3_ODATA_get_lane7_ctr3_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE8_CTR3_ODATA                                               0x18026734
#define  EPI_EPI_LANE8_CTR3_ODATA_reg_addr                                       "0xB8026734"
#define  EPI_EPI_LANE8_CTR3_ODATA_reg                                            0xB8026734
#define  EPI_EPI_LANE8_CTR3_ODATA_inst_addr                                      "0x00FE"
#define  set_EPI_EPI_LANE8_CTR3_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE8_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE8_CTR3_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE8_CTR3_ODATA_reg))
#define  EPI_EPI_LANE8_CTR3_ODATA_lane8_ctr3_odd_shift                           (0)
#define  EPI_EPI_LANE8_CTR3_ODATA_lane8_ctr3_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE8_CTR3_ODATA_lane8_ctr3_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE8_CTR3_ODATA_get_lane8_ctr3_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE9_CTR3_ODATA                                               0x1802673C
#define  EPI_EPI_LANE9_CTR3_ODATA_reg_addr                                       "0xB802673C"
#define  EPI_EPI_LANE9_CTR3_ODATA_reg                                            0xB802673C
#define  EPI_EPI_LANE9_CTR3_ODATA_inst_addr                                      "0x00FF"
#define  set_EPI_EPI_LANE9_CTR3_ODATA_reg(data)                                  (*((volatile unsigned int*)EPI_EPI_LANE9_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE9_CTR3_ODATA_reg                                        (*((volatile unsigned int*)EPI_EPI_LANE9_CTR3_ODATA_reg))
#define  EPI_EPI_LANE9_CTR3_ODATA_lane9_ctr3_odd_shift                           (0)
#define  EPI_EPI_LANE9_CTR3_ODATA_lane9_ctr3_odd_mask                            (0x3FFFFFFF)
#define  EPI_EPI_LANE9_CTR3_ODATA_lane9_ctr3_odd(data)                           (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE9_CTR3_ODATA_get_lane9_ctr3_odd(data)                       (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE10_CTR3_ODATA                                              0x18026744
#define  EPI_EPI_LANE10_CTR3_ODATA_reg_addr                                      "0xB8026744"
#define  EPI_EPI_LANE10_CTR3_ODATA_reg                                           0xB8026744
#define  EPI_EPI_LANE10_CTR3_ODATA_inst_addr                                     "0x0100"
#define  set_EPI_EPI_LANE10_CTR3_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE10_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE10_CTR3_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE10_CTR3_ODATA_reg))
#define  EPI_EPI_LANE10_CTR3_ODATA_lane10_ctr3_odd_shift                         (0)
#define  EPI_EPI_LANE10_CTR3_ODATA_lane10_ctr3_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE10_CTR3_ODATA_lane10_ctr3_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE10_CTR3_ODATA_get_lane10_ctr3_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE11_CTR3_ODATA                                              0x1802674C
#define  EPI_EPI_LANE11_CTR3_ODATA_reg_addr                                      "0xB802674C"
#define  EPI_EPI_LANE11_CTR3_ODATA_reg                                           0xB802674C
#define  EPI_EPI_LANE11_CTR3_ODATA_inst_addr                                     "0x0101"
#define  set_EPI_EPI_LANE11_CTR3_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE11_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE11_CTR3_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE11_CTR3_ODATA_reg))
#define  EPI_EPI_LANE11_CTR3_ODATA_lane11_ctr3_odd_shift                         (0)
#define  EPI_EPI_LANE11_CTR3_ODATA_lane11_ctr3_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE11_CTR3_ODATA_lane11_ctr3_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE11_CTR3_ODATA_get_lane11_ctr3_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE12_CTR3_ODATA                                              0x18026754
#define  EPI_EPI_LANE12_CTR3_ODATA_reg_addr                                      "0xB8026754"
#define  EPI_EPI_LANE12_CTR3_ODATA_reg                                           0xB8026754
#define  EPI_EPI_LANE12_CTR3_ODATA_inst_addr                                     "0x0102"
#define  set_EPI_EPI_LANE12_CTR3_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE12_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE12_CTR3_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE12_CTR3_ODATA_reg))
#define  EPI_EPI_LANE12_CTR3_ODATA_lane12_ctr3_odd_shift                         (0)
#define  EPI_EPI_LANE12_CTR3_ODATA_lane12_ctr3_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE12_CTR3_ODATA_lane12_ctr3_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE12_CTR3_ODATA_get_lane12_ctr3_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE13_CTR3_ODATA                                              0x1802675C
#define  EPI_EPI_LANE13_CTR3_ODATA_reg_addr                                      "0xB802675C"
#define  EPI_EPI_LANE13_CTR3_ODATA_reg                                           0xB802675C
#define  EPI_EPI_LANE13_CTR3_ODATA_inst_addr                                     "0x0103"
#define  set_EPI_EPI_LANE13_CTR3_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE13_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE13_CTR3_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE13_CTR3_ODATA_reg))
#define  EPI_EPI_LANE13_CTR3_ODATA_lane13_ctr3_odd_shift                         (0)
#define  EPI_EPI_LANE13_CTR3_ODATA_lane13_ctr3_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE13_CTR3_ODATA_lane13_ctr3_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE13_CTR3_ODATA_get_lane13_ctr3_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE14_CTR3_ODATA                                              0x18026764
#define  EPI_EPI_LANE14_CTR3_ODATA_reg_addr                                      "0xB8026764"
#define  EPI_EPI_LANE14_CTR3_ODATA_reg                                           0xB8026764
#define  EPI_EPI_LANE14_CTR3_ODATA_inst_addr                                     "0x0104"
#define  set_EPI_EPI_LANE14_CTR3_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE14_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE14_CTR3_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE14_CTR3_ODATA_reg))
#define  EPI_EPI_LANE14_CTR3_ODATA_lane14_ctr3_odd_shift                         (0)
#define  EPI_EPI_LANE14_CTR3_ODATA_lane14_ctr3_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE14_CTR3_ODATA_lane14_ctr3_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE14_CTR3_ODATA_get_lane14_ctr3_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_LANE15_CTR3_ODATA                                              0x1802676C
#define  EPI_EPI_LANE15_CTR3_ODATA_reg_addr                                      "0xB802676C"
#define  EPI_EPI_LANE15_CTR3_ODATA_reg                                           0xB802676C
#define  EPI_EPI_LANE15_CTR3_ODATA_inst_addr                                     "0x0105"
#define  set_EPI_EPI_LANE15_CTR3_ODATA_reg(data)                                 (*((volatile unsigned int*)EPI_EPI_LANE15_CTR3_ODATA_reg)=data)
#define  get_EPI_EPI_LANE15_CTR3_ODATA_reg                                       (*((volatile unsigned int*)EPI_EPI_LANE15_CTR3_ODATA_reg))
#define  EPI_EPI_LANE15_CTR3_ODATA_lane15_ctr3_odd_shift                         (0)
#define  EPI_EPI_LANE15_CTR3_ODATA_lane15_ctr3_odd_mask                          (0x3FFFFFFF)
#define  EPI_EPI_LANE15_CTR3_ODATA_lane15_ctr3_odd(data)                         (0x3FFFFFFF&(data))
#define  EPI_EPI_LANE15_CTR3_ODATA_get_lane15_ctr3_odd(data)                     (0x3FFFFFFF&(data))

#define  EPI_EPI_GPLUT_CONTROL                                                  0x18026450
#define  EPI_EPI_GPLUT_CONTROL_reg_addr                                          "0xB8026450"
#define  EPI_EPI_GPLUT_CONTROL_reg                                               0xB8026450
#define  EPI_EPI_GPLUT_CONTROL_inst_addr                                         "0x0106"
#define  set_EPI_EPI_GPLUT_CONTROL_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_GPLUT_CONTROL_reg)=data)
#define  get_EPI_EPI_GPLUT_CONTROL_reg                                           (*((volatile unsigned int*)EPI_EPI_GPLUT_CONTROL_reg))
#define  EPI_EPI_GPLUT_CONTROL_gp_table_line_cycle_shift                         (0)
#define  EPI_EPI_GPLUT_CONTROL_gp_table_line_cycle_mask                          (0x0000000F)
#define  EPI_EPI_GPLUT_CONTROL_gp_table_line_cycle(data)                         (0x0000000F&(data))
#define  EPI_EPI_GPLUT_CONTROL_get_gp_table_line_cycle(data)                     (0x0000000F&(data))

#define  EPI_EPI_GPLUT_LINE_01                                                  0x18026454
#define  EPI_EPI_GPLUT_LINE_01_reg_addr                                          "0xB8026454"
#define  EPI_EPI_GPLUT_LINE_01_reg                                               0xB8026454
#define  EPI_EPI_GPLUT_LINE_01_inst_addr                                         "0x0107"
#define  set_EPI_EPI_GPLUT_LINE_01_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_GPLUT_LINE_01_reg)=data)
#define  get_EPI_EPI_GPLUT_LINE_01_reg                                           (*((volatile unsigned int*)EPI_EPI_GPLUT_LINE_01_reg))
#define  EPI_EPI_GPLUT_LINE_01_gp_table_line_1_shift                             (8)
#define  EPI_EPI_GPLUT_LINE_01_gp_table_line_0_shift                             (0)
#define  EPI_EPI_GPLUT_LINE_01_gp_table_line_1_mask                              (0x00001F00)
#define  EPI_EPI_GPLUT_LINE_01_gp_table_line_0_mask                              (0x0000001F)
#define  EPI_EPI_GPLUT_LINE_01_gp_table_line_1(data)                             (0x00001F00&((data)<<8))
#define  EPI_EPI_GPLUT_LINE_01_gp_table_line_0(data)                             (0x0000001F&(data))
#define  EPI_EPI_GPLUT_LINE_01_get_gp_table_line_1(data)                         ((0x00001F00&(data))>>8)
#define  EPI_EPI_GPLUT_LINE_01_get_gp_table_line_0(data)                         (0x0000001F&(data))

#define  EPI_EPI_GPLUT_LINE_23                                                  0x18026458
#define  EPI_EPI_GPLUT_LINE_23_reg_addr                                          "0xB8026458"
#define  EPI_EPI_GPLUT_LINE_23_reg                                               0xB8026458
#define  EPI_EPI_GPLUT_LINE_23_inst_addr                                         "0x0108"
#define  set_EPI_EPI_GPLUT_LINE_23_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_GPLUT_LINE_23_reg)=data)
#define  get_EPI_EPI_GPLUT_LINE_23_reg                                           (*((volatile unsigned int*)EPI_EPI_GPLUT_LINE_23_reg))
#define  EPI_EPI_GPLUT_LINE_23_gp_table_line_3_shift                             (8)
#define  EPI_EPI_GPLUT_LINE_23_gp_table_line_2_shift                             (0)
#define  EPI_EPI_GPLUT_LINE_23_gp_table_line_3_mask                              (0x00001F00)
#define  EPI_EPI_GPLUT_LINE_23_gp_table_line_2_mask                              (0x0000001F)
#define  EPI_EPI_GPLUT_LINE_23_gp_table_line_3(data)                             (0x00001F00&((data)<<8))
#define  EPI_EPI_GPLUT_LINE_23_gp_table_line_2(data)                             (0x0000001F&(data))
#define  EPI_EPI_GPLUT_LINE_23_get_gp_table_line_3(data)                         ((0x00001F00&(data))>>8)
#define  EPI_EPI_GPLUT_LINE_23_get_gp_table_line_2(data)                         (0x0000001F&(data))

#define  EPI_EPI_GPLUT_LINE_45                                                  0x1802645C
#define  EPI_EPI_GPLUT_LINE_45_reg_addr                                          "0xB802645C"
#define  EPI_EPI_GPLUT_LINE_45_reg                                               0xB802645C
#define  EPI_EPI_GPLUT_LINE_45_inst_addr                                         "0x0109"
#define  set_EPI_EPI_GPLUT_LINE_45_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_GPLUT_LINE_45_reg)=data)
#define  get_EPI_EPI_GPLUT_LINE_45_reg                                           (*((volatile unsigned int*)EPI_EPI_GPLUT_LINE_45_reg))
#define  EPI_EPI_GPLUT_LINE_45_gp_table_line_5_shift                             (8)
#define  EPI_EPI_GPLUT_LINE_45_gp_table_line_4_shift                             (0)
#define  EPI_EPI_GPLUT_LINE_45_gp_table_line_5_mask                              (0x00001F00)
#define  EPI_EPI_GPLUT_LINE_45_gp_table_line_4_mask                              (0x0000001F)
#define  EPI_EPI_GPLUT_LINE_45_gp_table_line_5(data)                             (0x00001F00&((data)<<8))
#define  EPI_EPI_GPLUT_LINE_45_gp_table_line_4(data)                             (0x0000001F&(data))
#define  EPI_EPI_GPLUT_LINE_45_get_gp_table_line_5(data)                         ((0x00001F00&(data))>>8)
#define  EPI_EPI_GPLUT_LINE_45_get_gp_table_line_4(data)                         (0x0000001F&(data))

#define  EPI_EPI_GPLUT_LINE_67                                                  0x18026460
#define  EPI_EPI_GPLUT_LINE_67_reg_addr                                          "0xB8026460"
#define  EPI_EPI_GPLUT_LINE_67_reg                                               0xB8026460
#define  EPI_EPI_GPLUT_LINE_67_inst_addr                                         "0x010A"
#define  set_EPI_EPI_GPLUT_LINE_67_reg(data)                                     (*((volatile unsigned int*)EPI_EPI_GPLUT_LINE_67_reg)=data)
#define  get_EPI_EPI_GPLUT_LINE_67_reg                                           (*((volatile unsigned int*)EPI_EPI_GPLUT_LINE_67_reg))
#define  EPI_EPI_GPLUT_LINE_67_gp_table_line_7_shift                             (8)
#define  EPI_EPI_GPLUT_LINE_67_gp_table_line_6_shift                             (0)
#define  EPI_EPI_GPLUT_LINE_67_gp_table_line_7_mask                              (0x00001F00)
#define  EPI_EPI_GPLUT_LINE_67_gp_table_line_6_mask                              (0x0000001F)
#define  EPI_EPI_GPLUT_LINE_67_gp_table_line_7(data)                             (0x00001F00&((data)<<8))
#define  EPI_EPI_GPLUT_LINE_67_gp_table_line_6(data)                             (0x0000001F&(data))
#define  EPI_EPI_GPLUT_LINE_67_get_gp_table_line_7(data)                         ((0x00001F00&(data))>>8)
#define  EPI_EPI_GPLUT_LINE_67_get_gp_table_line_6(data)                         (0x0000001F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======EPI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  phase2_preamble_num_0:4;
        RBus_UInt32  res2:12;
        RBus_UInt32  phase1_preamble_num_0:4;
    };
}epi_epi_packet_ctr1_0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  epi_data_unfl:1;
        RBus_UInt32  epi_data_unfl_clr:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  epi_bit_mode:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  data_mode_change:1;
        RBus_UInt32  res3:19;
        RBus_UInt32  lock_dmy_line_en:1;
        RBus_UInt32  epi_version:3;
    };
}epi_epi_packet_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  force_ctsfifo_rstn_epi:1;
        RBus_UInt32  ctrl5_en:1;
        RBus_UInt32  ctrl4_en:1;
        RBus_UInt32  epi_reset:1;
        RBus_UInt32  epi_lock_int_en:1;
        RBus_UInt32  ctrl_start_en:1;
        RBus_UInt32  ctrl3_en:1;
        RBus_UInt32  data_start_en:1;
        RBus_UInt32  res1:19;
        RBus_UInt32  lock_wait_vs_en:1;
        RBus_UInt32  hw_lock:1;
        RBus_UInt32  epi_lock:1;
        RBus_UInt32  epi_lock_sel:1;
        RBus_UInt32  epi_lock_change:1;
    };
}epi_epi_clock_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  epi_tst_out:32;
    };
}epi_epi_dgb_read_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  two_pixel_mode:1;
        RBus_UInt32  ext_subpixel_mode:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  port_num:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  epi_enable:1;
        RBus_UInt32  back_value:2;
        RBus_UInt32  front_value:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  ceds_28s_soe_sel_en:1;
        RBus_UInt32  res4:9;
    };
}epi_epi_port_option_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  epi_dbg_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  epi_otpin_ver_sel:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  dummy18026070_24_20:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  epi_otpin_port_sel:5;
        RBus_UInt32  res4:1;
        RBus_UInt32  front_cmd:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  front_data:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  front_rlc:3;
    };
}epi_epi_cmpi_front_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dummy_color_0:30;
    };
}epi_cmpi_dummy_color_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dummy_color_1:30;
    };
}epi_cmpi_dummy_color_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dummy_color_2:30;
    };
}epi_cmpi_dummy_color_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dummy_color_3:30;
    };
}epi_cmpi_dummy_color_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_mismatch_count:12;
        RBus_UInt32  crc_port_sel:16;
        RBus_UInt32  dummy18026090_3:1;
        RBus_UInt32  crc_mismatch_clear:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_start:1;
    };
}epi_epi_crc_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}epi_epi_crc_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_golden:32;
    };
}epi_epi_crc_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  epi_src_sel:1;
        RBus_UInt32  epi_src_data:30;
    };
}epi_epi_data_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  inv_table_line_cycle:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  pod2_inv_phase_bypass:1;
    };
}epi_epi_packet_ctr1_inv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inv_line_1:4;
        RBus_UInt32  inv_line_2:4;
        RBus_UInt32  inv_line_3:4;
        RBus_UInt32  inv_line_4:4;
        RBus_UInt32  inv_line_5:4;
        RBus_UInt32  inv_line_6:4;
        RBus_UInt32  inv_line_7:4;
        RBus_UInt32  inv_line_8:4;
    };
}epi_epi_packet_ctr1_inv_table_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inv_line_9:4;
        RBus_UInt32  inv_line_10:4;
        RBus_UInt32  inv_line_11:4;
        RBus_UInt32  inv_line_12:4;
        RBus_UInt32  inv_line_13:4;
        RBus_UInt32  inv_line_14:4;
        RBus_UInt32  inv_line_15:4;
        RBus_UInt32  inv_line_16:4;
    };
}epi_epi_packet_ctr1_inv_table_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  rlc_en:1;
    };
}epi_epi_cmpi_rlc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  clk_training1_sel:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  vbt_type_sel:3;
    };
}epi_epi_cmpi_vbt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  dummy18026118_1:1;
        RBus_UInt32  between_s3_to_ct1:1;
    };
}epi_epi_cmpi_vbt_opt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  scr_every_line_rst:1;
        RBus_UInt32  scr_tcon_source2:4;
        RBus_UInt32  scr_tcon_source:4;
    };
}epi_epi_scr_tcon_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  clk_edge_mode_sel:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  clk_edge_scramble_en:1;
        RBus_UInt32  hvbp_scramble_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ini_scr8_en:1;
        RBus_UInt32  scr8_enable:1;
    };
}epi_epi_scr8_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  scr8_ini_val:24;
    };
}epi_epi_scr8_ini_val_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ini_scr10_en:1;
        RBus_UInt32  scr10_enable:1;
    };
}epi_epi_scr10_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  scr10_ini_val:20;
    };
}epi_epi_scr10_ini_val_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  scr8_cm_enable:1;
    };
}epi_epi_scr8cm_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  scr8_cm_ini_val:12;
    };
}epi_epi_scr8cm_ini_val_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  scr10_cm_enable:1;
    };
}epi_epi_scr10cm_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  scr10_cm_ini_val:10;
    };
}epi_epi_scr10cm_ini_val_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  cmpi_pgamma_en:1;
        RBus_UInt32  dummy180261a0_15_12:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  cmpi_back_color_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  cmpi_middle_color_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  cmpi_front_color_sel:2;
    };
}epi_epi_cmpi_pg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_cmd_st:24;
    };
}epi_epi_cmpi_pg_cmd_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_cmd_cmd1:24;
    };
}epi_epi_cmpi_pg_cmd_cmd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_cmd_cmd2:24;
    };
}epi_epi_cmpi_pg_cmd_cmd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_cmd_cmd3:24;
    };
}epi_epi_cmpi_pg_cmd_cmd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_cmd_cmd4:24;
    };
}epi_epi_cmpi_pg_cmd_cmd4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_cmd_cmd5:24;
    };
}epi_epi_cmpi_pg_cmd_cmd5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_start:24;
    };
}epi_epi_cmpi_pg_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data0:24;
    };
}epi_epi_cmpi_pg_data0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data1:24;
    };
}epi_epi_cmpi_pg_data1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data2:24;
    };
}epi_epi_cmpi_pg_data2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data3:24;
    };
}epi_epi_cmpi_pg_data3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data4:24;
    };
}epi_epi_cmpi_pg_data4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data5:24;
    };
}epi_epi_cmpi_pg_data5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data6:24;
    };
}epi_epi_cmpi_pg_data6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data7:24;
    };
}epi_epi_cmpi_pg_data7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data8:24;
    };
}epi_epi_cmpi_pg_data8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data9:24;
    };
}epi_epi_cmpi_pg_data9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data10:24;
    };
}epi_epi_cmpi_pg_data10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data11:24;
    };
}epi_epi_cmpi_pg_data11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data12:24;
    };
}epi_epi_cmpi_pg_data12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data13:24;
    };
}epi_epi_cmpi_pg_data13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data14:24;
    };
}epi_epi_cmpi_pg_data14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data15:24;
    };
}epi_epi_cmpi_pg_data15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data16:24;
    };
}epi_epi_cmpi_pg_data16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data17:24;
    };
}epi_epi_cmpi_pg_data17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data18:24;
    };
}epi_epi_cmpi_pg_data18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data19:24;
    };
}epi_epi_cmpi_pg_data19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data20:24;
    };
}epi_epi_cmpi_pg_data20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data21:24;
    };
}epi_epi_cmpi_pg_data21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data22:24;
    };
}epi_epi_cmpi_pg_data22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data23:24;
    };
}epi_epi_cmpi_pg_data23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data24:24;
    };
}epi_epi_cmpi_pg_data24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data25:24;
    };
}epi_epi_cmpi_pg_data25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data26:24;
    };
}epi_epi_cmpi_pg_data26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data27:24;
    };
}epi_epi_cmpi_pg_data27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data28:24;
    };
}epi_epi_cmpi_pg_data28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data29:24;
    };
}epi_epi_cmpi_pg_data29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data30:24;
    };
}epi_epi_cmpi_pg_data30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data31:24;
    };
}epi_epi_cmpi_pg_data31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data32:24;
    };
}epi_epi_cmpi_pg_data32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data33:24;
    };
}epi_epi_cmpi_pg_data33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data34:24;
    };
}epi_epi_cmpi_pg_data34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data35:24;
    };
}epi_epi_cmpi_pg_data35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data36:24;
    };
}epi_epi_cmpi_pg_data36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data37:24;
    };
}epi_epi_cmpi_pg_data37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data38:24;
    };
}epi_epi_cmpi_pg_data38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_data39:24;
    };
}epi_epi_cmpi_pg_data39_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data40:21;
    };
}epi_epi_cmpi_pg_data40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data41:21;
    };
}epi_epi_cmpi_pg_data41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data42:21;
    };
}epi_epi_cmpi_pg_data42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data43:21;
    };
}epi_epi_cmpi_pg_data43_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data44:21;
    };
}epi_epi_cmpi_pg_data44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data45:21;
    };
}epi_epi_cmpi_pg_data45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data46:21;
    };
}epi_epi_cmpi_pg_data46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data47:21;
    };
}epi_epi_cmpi_pg_data47_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data48:21;
    };
}epi_epi_cmpi_pg_data48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data49:21;
    };
}epi_epi_cmpi_pg_data49_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data50:21;
    };
}epi_epi_cmpi_pg_data50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data51:21;
    };
}epi_epi_cmpi_pg_data51_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data52:21;
    };
}epi_epi_cmpi_pg_data52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data53:21;
    };
}epi_epi_cmpi_pg_data53_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data54:21;
    };
}epi_epi_cmpi_pg_data54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data55:21;
    };
}epi_epi_cmpi_pg_data55_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data56:21;
    };
}epi_epi_cmpi_pg_data56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data57:21;
    };
}epi_epi_cmpi_pg_data57_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data58:21;
    };
}epi_epi_cmpi_pg_data58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  cmpi_pg_data59:21;
    };
}epi_epi_cmpi_pg_data59_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmpi_pg_end:24;
    };
}epi_epi_cmpi_pg_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ls_port_en:16;
    };
}epi_epi_ls_port_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ss_fsm_sel:16;
    };
}epi_epi_fsm_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  constant_update_mode:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  data_port_en:16;
    };
}epi_epi_data_port_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sw_cal:1;
        RBus_UInt32  res1:17;
        RBus_UInt32  sw_cal_value:14;
    };
}epi_epi_den_fall_loca_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  debounce_hi_window:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  debounce_low_window:12;
        RBus_UInt32  debounce_en:1;
    };
}epi_epi_lock_debounce_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  hs_distance_flag:1;
        RBus_UInt32  hs_den_length_flag:1;
        RBus_UInt32  den_length_flag:1;
        RBus_UInt32  den_num_flag:1;
    };
}epi_epi_dbg_reg_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  hs_distance_det_en:1;
        RBus_UInt32  hs_den_length_det_en:1;
        RBus_UInt32  den_length_det_en:1;
        RBus_UInt32  den_num_det_en:1;
    };
}epi_epi_dbg_reg_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  soe_table_line_cycle:2;
        RBus_UInt32  ctr12_ref_soe:2;
    };
}epi_epi_soe_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane0_soe0:30;
    };
}epi_epi_soe_line0_lane0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane0_soe1:30;
    };
}epi_epi_soe_line1_lane0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane0_soe2:30;
    };
}epi_epi_soe_line2_lane0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane0_soe3:30;
    };
}epi_epi_soe_line3_lane0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane1_soe0:30;
    };
}epi_epi_soe_line0_lane1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane1_soe1:30;
    };
}epi_epi_soe_line1_lane1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane1_soe2:30;
    };
}epi_epi_soe_line2_lane1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane1_soe3:30;
    };
}epi_epi_soe_line3_lane1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane2_soe0:30;
    };
}epi_epi_soe_line0_lane2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane2_soe1:30;
    };
}epi_epi_soe_line1_lane2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane2_soe2:30;
    };
}epi_epi_soe_line2_lane2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane2_soe3:30;
    };
}epi_epi_soe_line3_lane2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane3_soe0:30;
    };
}epi_epi_soe_line0_lane3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane3_soe1:30;
    };
}epi_epi_soe_line1_lane3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane3_soe2:30;
    };
}epi_epi_soe_line2_lane3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane3_soe3:30;
    };
}epi_epi_soe_line3_lane3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane4_soe0:30;
    };
}epi_epi_soe_line0_lane4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane4_soe1:30;
    };
}epi_epi_soe_line1_lane4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane4_soe2:30;
    };
}epi_epi_soe_line2_lane4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane4_soe3:30;
    };
}epi_epi_soe_line3_lane4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane5_soe0:30;
    };
}epi_epi_soe_line0_lane5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane5_soe1:30;
    };
}epi_epi_soe_line1_lane5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane5_soe2:30;
    };
}epi_epi_soe_line2_lane5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane5_soe3:30;
    };
}epi_epi_soe_line3_lane5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane6_soe0:30;
    };
}epi_epi_soe_line0_lane6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane6_soe1:30;
    };
}epi_epi_soe_line1_lane6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane6_soe2:30;
    };
}epi_epi_soe_line2_lane6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane6_soe3:30;
    };
}epi_epi_soe_line3_lane6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane7_soe0:30;
    };
}epi_epi_soe_line0_lane7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane7_soe1:30;
    };
}epi_epi_soe_line1_lane7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane7_soe2:30;
    };
}epi_epi_soe_line2_lane7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane7_soe3:30;
    };
}epi_epi_soe_line3_lane7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane8_soe0:30;
    };
}epi_epi_soe_line0_lane8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane8_soe1:30;
    };
}epi_epi_soe_line1_lane8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane8_soe2:30;
    };
}epi_epi_soe_line2_lane8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane8_soe3:30;
    };
}epi_epi_soe_line3_lane8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane9_soe0:30;
    };
}epi_epi_soe_line0_lane9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane9_soe1:30;
    };
}epi_epi_soe_line1_lane9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane9_soe2:30;
    };
}epi_epi_soe_line2_lane9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane9_soe3:30;
    };
}epi_epi_soe_line3_lane9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane10_soe0:30;
    };
}epi_epi_soe_line0_lane10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane10_soe1:30;
    };
}epi_epi_soe_line1_lane10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane10_soe2:30;
    };
}epi_epi_soe_line2_lane10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane10_soe3:30;
    };
}epi_epi_soe_line3_lane10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane11_soe0:30;
    };
}epi_epi_soe_line0_lane11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane11_soe1:30;
    };
}epi_epi_soe_line1_lane11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane11_soe2:30;
    };
}epi_epi_soe_line2_lane11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane11_soe3:30;
    };
}epi_epi_soe_line3_lane11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane12_soe0:30;
    };
}epi_epi_soe_line0_lane12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane12_soe1:30;
    };
}epi_epi_soe_line1_lane12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane12_soe2:30;
    };
}epi_epi_soe_line2_lane12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane12_soe3:30;
    };
}epi_epi_soe_line3_lane12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane13_soe0:30;
    };
}epi_epi_soe_line0_lane13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane13_soe1:30;
    };
}epi_epi_soe_line1_lane13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane13_soe2:30;
    };
}epi_epi_soe_line2_lane13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane13_soe3:30;
    };
}epi_epi_soe_line3_lane13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane14_soe0:30;
    };
}epi_epi_soe_line0_lane14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane14_soe1:30;
    };
}epi_epi_soe_line1_lane14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane14_soe2:30;
    };
}epi_epi_soe_line2_lane14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane14_soe3:30;
    };
}epi_epi_soe_line3_lane14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane15_soe0:30;
    };
}epi_epi_soe_line0_lane15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane15_soe1:30;
    };
}epi_epi_soe_line1_lane15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane15_soe2:30;
    };
}epi_epi_soe_line2_lane15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane15_soe3:30;
    };
}epi_epi_soe_line3_lane15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_d_st_c4_mux_sel:4;
        RBus_UInt32  lane_d_st_c3_mux_sel:4;
        RBus_UInt32  lane_d_st_c2_mux_sel:4;
        RBus_UInt32  lane_d_st_c1_mux_sel:4;
        RBus_UInt32  lane_d_st_c0_mux_sel:4;
    };
}epi_epi_lane_dst_mux0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_d_st_c9_mux_sel:4;
        RBus_UInt32  lane_d_st_c8_mux_sel:4;
        RBus_UInt32  lane_d_st_c7_mux_sel:4;
        RBus_UInt32  lane_d_st_c6_mux_sel:4;
        RBus_UInt32  lane_d_st_c5_mux_sel:4;
    };
}epi_epi_lane_dst_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_d_st_c14_mux_sel:4;
        RBus_UInt32  lane_d_st_c13_mux_sel:4;
        RBus_UInt32  lane_d_st_c12_mux_sel:4;
        RBus_UInt32  lane_d_st_c11_mux_sel:4;
        RBus_UInt32  lane_d_st_c10_mux_sel:4;
    };
}epi_epi_lane_dst_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_d_st_c19_mux_sel:4;
        RBus_UInt32  lane_d_st_c18_mux_sel:4;
        RBus_UInt32  lane_d_st_c17_mux_sel:4;
        RBus_UInt32  lane_d_st_c16_mux_sel:4;
        RBus_UInt32  lane_d_st_c15_mux_sel:4;
    };
}epi_epi_lane_dst_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_d_st_c24_mux_sel:4;
        RBus_UInt32  lane_d_st_c23_mux_sel:4;
        RBus_UInt32  lane_d_st_c22_mux_sel:4;
        RBus_UInt32  lane_d_st_c21_mux_sel:4;
        RBus_UInt32  lane_d_st_c20_mux_sel:4;
    };
}epi_epi_lane_dst_mux4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_d_st_c29_mux_sel:4;
        RBus_UInt32  lane_d_st_c28_mux_sel:4;
        RBus_UInt32  lane_d_st_c27_mux_sel:4;
        RBus_UInt32  lane_d_st_c26_mux_sel:4;
        RBus_UInt32  lane_d_st_c25_mux_sel:4;
    };
}epi_epi_lane_dst_mux5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_c_st_c4_mux_sel:4;
        RBus_UInt32  lane_c_st_c3_mux_sel:4;
        RBus_UInt32  lane_c_st_c2_mux_sel:4;
        RBus_UInt32  lane_c_st_c1_mux_sel:4;
        RBus_UInt32  lane_c_st_c0_mux_sel:4;
    };
}epi_epi_lane_cst_mux0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_c_st_c9_mux_sel:4;
        RBus_UInt32  lane_c_st_c8_mux_sel:4;
        RBus_UInt32  lane_c_st_c7_mux_sel:4;
        RBus_UInt32  lane_c_st_c6_mux_sel:4;
        RBus_UInt32  lane_c_st_c5_mux_sel:4;
    };
}epi_epi_lane_cst_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_c_st_c14_mux_sel:4;
        RBus_UInt32  lane_c_st_c13_mux_sel:4;
        RBus_UInt32  lane_c_st_c12_mux_sel:4;
        RBus_UInt32  lane_c_st_c11_mux_sel:4;
        RBus_UInt32  lane_c_st_c10_mux_sel:4;
    };
}epi_epi_lane_cst_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_c_st_c19_mux_sel:4;
        RBus_UInt32  lane_c_st_c18_mux_sel:4;
        RBus_UInt32  lane_c_st_c17_mux_sel:4;
        RBus_UInt32  lane_c_st_c16_mux_sel:4;
        RBus_UInt32  lane_c_st_c15_mux_sel:4;
    };
}epi_epi_lane_cst_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_c_st_c24_mux_sel:4;
        RBus_UInt32  lane_c_st_c23_mux_sel:4;
        RBus_UInt32  lane_c_st_c22_mux_sel:4;
        RBus_UInt32  lane_c_st_c21_mux_sel:4;
        RBus_UInt32  lane_c_st_c20_mux_sel:4;
    };
}epi_epi_lane_cst_mux4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_c_st_c29_mux_sel:4;
        RBus_UInt32  lane_c_st_c28_mux_sel:4;
        RBus_UInt32  lane_c_st_c27_mux_sel:4;
        RBus_UInt32  lane_c_st_c26_mux_sel:4;
        RBus_UInt32  lane_c_st_c25_mux_sel:4;
    };
}epi_epi_lane_cst_mux5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr1_c4_mux_sel:4;
        RBus_UInt32  lane_ctr1_c3_mux_sel:4;
        RBus_UInt32  lane_ctr1_c2_mux_sel:4;
        RBus_UInt32  lane_ctr1_c1_mux_sel:4;
        RBus_UInt32  lane_ctr1_c0_mux_sel:4;
    };
}epi_epi_lane_ctr1_mux0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr1_c9_mux_sel:4;
        RBus_UInt32  lane_ctr1_c8_mux_sel:4;
        RBus_UInt32  lane_ctr1_c7_mux_sel:4;
        RBus_UInt32  lane_ctr1_c6_mux_sel:4;
        RBus_UInt32  lane_ctr1_c5_mux_sel:4;
    };
}epi_epi_lane_ctr1_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr1_c14_mux_sel:4;
        RBus_UInt32  lane_ctr1_c13_mux_sel:4;
        RBus_UInt32  lane_ctr1_c12_mux_sel:4;
        RBus_UInt32  lane_ctr1_c11_mux_sel:4;
        RBus_UInt32  lane_ctr1_c10_mux_sel:4;
    };
}epi_epi_lane_ctr1_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr1_c19_mux_sel:4;
        RBus_UInt32  lane_ctr1_c18_mux_sel:4;
        RBus_UInt32  lane_ctr1_c17_mux_sel:4;
        RBus_UInt32  lane_ctr1_c16_mux_sel:4;
        RBus_UInt32  lane_ctr1_c15_mux_sel:4;
    };
}epi_epi_lane_ctr1_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr1_c24_mux_sel:4;
        RBus_UInt32  lane_ctr1_c23_mux_sel:4;
        RBus_UInt32  lane_ctr1_c22_mux_sel:4;
        RBus_UInt32  lane_ctr1_c21_mux_sel:4;
        RBus_UInt32  lane_ctr1_c20_mux_sel:4;
    };
}epi_epi_lane_ctr1_mux4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr1_c29_mux_sel:4;
        RBus_UInt32  lane_ctr1_c28_mux_sel:4;
        RBus_UInt32  lane_ctr1_c27_mux_sel:4;
        RBus_UInt32  lane_ctr1_c26_mux_sel:4;
        RBus_UInt32  lane_ctr1_c25_mux_sel:4;
    };
}epi_epi_lane_ctr1_mux5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr2_c4_mux_sel:4;
        RBus_UInt32  lane_ctr2_c3_mux_sel:4;
        RBus_UInt32  lane_ctr2_c2_mux_sel:4;
        RBus_UInt32  lane_ctr2_c1_mux_sel:4;
        RBus_UInt32  lane_ctr2_c0_mux_sel:4;
    };
}epi_epi_lane_ctr2_mux0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr2_c9_mux_sel:4;
        RBus_UInt32  lane_ctr2_c8_mux_sel:4;
        RBus_UInt32  lane_ctr2_c7_mux_sel:4;
        RBus_UInt32  lane_ctr2_c6_mux_sel:4;
        RBus_UInt32  lane_ctr2_c5_mux_sel:4;
    };
}epi_epi_lane_ctr2_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr2_c14_mux_sel:4;
        RBus_UInt32  lane_ctr2_c13_mux_sel:4;
        RBus_UInt32  lane_ctr2_c12_mux_sel:4;
        RBus_UInt32  lane_ctr2_c11_mux_sel:4;
        RBus_UInt32  lane_ctr2_c10_mux_sel:4;
    };
}epi_epi_lane_ctr2_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr2_c19_mux_sel:4;
        RBus_UInt32  lane_ctr2_c18_mux_sel:4;
        RBus_UInt32  lane_ctr2_c17_mux_sel:4;
        RBus_UInt32  lane_ctr2_c16_mux_sel:4;
        RBus_UInt32  lane_ctr2_c15_mux_sel:4;
    };
}epi_epi_lane_ctr2_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr2_c24_mux_sel:4;
        RBus_UInt32  lane_ctr2_c23_mux_sel:4;
        RBus_UInt32  lane_ctr2_c22_mux_sel:4;
        RBus_UInt32  lane_ctr2_c21_mux_sel:4;
        RBus_UInt32  lane_ctr2_c20_mux_sel:4;
    };
}epi_epi_lane_ctr2_mux4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr2_c29_mux_sel:4;
        RBus_UInt32  lane_ctr2_c28_mux_sel:4;
        RBus_UInt32  lane_ctr2_c27_mux_sel:4;
        RBus_UInt32  lane_ctr2_c26_mux_sel:4;
        RBus_UInt32  lane_ctr2_c25_mux_sel:4;
    };
}epi_epi_lane_ctr2_mux5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr3_c4_mux_sel:4;
        RBus_UInt32  lane_ctr3_c3_mux_sel:4;
        RBus_UInt32  lane_ctr3_c2_mux_sel:4;
        RBus_UInt32  lane_ctr3_c1_mux_sel:4;
        RBus_UInt32  lane_ctr3_c0_mux_sel:4;
    };
}epi_epi_lane_ctr3_mux0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr3_c9_mux_sel:4;
        RBus_UInt32  lane_ctr3_c8_mux_sel:4;
        RBus_UInt32  lane_ctr3_c7_mux_sel:4;
        RBus_UInt32  lane_ctr3_c6_mux_sel:4;
        RBus_UInt32  lane_ctr3_c5_mux_sel:4;
    };
}epi_epi_lane_ctr3_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr3_c14_mux_sel:4;
        RBus_UInt32  lane_ctr3_c13_mux_sel:4;
        RBus_UInt32  lane_ctr3_c12_mux_sel:4;
        RBus_UInt32  lane_ctr3_c11_mux_sel:4;
        RBus_UInt32  lane_ctr3_c10_mux_sel:4;
    };
}epi_epi_lane_ctr3_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr3_c19_mux_sel:4;
        RBus_UInt32  lane_ctr3_c18_mux_sel:4;
        RBus_UInt32  lane_ctr3_c17_mux_sel:4;
        RBus_UInt32  lane_ctr3_c16_mux_sel:4;
        RBus_UInt32  lane_ctr3_c15_mux_sel:4;
    };
}epi_epi_lane_ctr3_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr3_c24_mux_sel:4;
        RBus_UInt32  lane_ctr3_c23_mux_sel:4;
        RBus_UInt32  lane_ctr3_c22_mux_sel:4;
        RBus_UInt32  lane_ctr3_c21_mux_sel:4;
        RBus_UInt32  lane_ctr3_c20_mux_sel:4;
    };
}epi_epi_lane_ctr3_mux4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  lane_ctr3_c29_mux_sel:4;
        RBus_UInt32  lane_ctr3_c28_mux_sel:4;
        RBus_UInt32  lane_ctr3_c27_mux_sel:4;
        RBus_UInt32  lane_ctr3_c26_mux_sel:4;
        RBus_UInt32  lane_ctr3_c25_mux_sel:4;
    };
}epi_epi_lane_ctr3_mux5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  tcon_c_sel:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tcon_b_sel:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  tcon_a_sel:6;
    };
}epi_epi_tcon_mux_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  tcon_f_sel:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tcon_e_sel:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  tcon_d_sel:6;
    };
}epi_epi_tcon_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  tcon_i_sel:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tcon_h_sel:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  tcon_g_sel:6;
    };
}epi_epi_tcon_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  tcon_k_sel:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tcon_j_sel:6;
    };
}epi_epi_tcon_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18026510_31_0:32;
    };
}epi_epi_dummy_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_hw0:32;
    };
}epi_epi_hw_dummy0_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_hw1:32;
    };
}epi_epi_hw_dummy1_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_hw2:32;
    };
}epi_epi_hw_dummy2_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_hw3:32;
    };
}epi_epi_hw_dummy3_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ceds_pol2_inv:16;
        RBus_UInt32  ceds_pol_inv:16;
    };
}epi_epi_ceds_pol_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  d_st:30;
    };
}epi_epi_lane_dst_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  c_st:30;
    };
}epi_epi_lane_cst_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane_ctr4:30;
    };
}epi_epi_lane_ctr4_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane_ctr5:30;
    };
}epi_epi_lane_ctr5_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane0_ctr1_odd:30;
    };
}epi_epi_lane0_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane1_ctr1_odd:30;
    };
}epi_epi_lane1_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane2_ctr1_odd:30;
    };
}epi_epi_lane2_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane3_ctr1_odd:30;
    };
}epi_epi_lane3_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane4_ctr1_odd:30;
    };
}epi_epi_lane4_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane5_ctr1_odd:30;
    };
}epi_epi_lane5_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane6_ctr1_odd:30;
    };
}epi_epi_lane6_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane7_ctr1_odd:30;
    };
}epi_epi_lane7_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane8_ctr1_odd:30;
    };
}epi_epi_lane8_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane9_ctr1_odd:30;
    };
}epi_epi_lane9_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane10_ctr1_odd:30;
    };
}epi_epi_lane10_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane11_ctr1_odd:30;
    };
}epi_epi_lane11_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane12_ctr1_odd:30;
    };
}epi_epi_lane12_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane13_ctr1_odd:30;
    };
}epi_epi_lane13_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane14_ctr1_odd:30;
    };
}epi_epi_lane14_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane15_ctr1_odd:30;
    };
}epi_epi_lane15_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane0_ctr2_odd:30;
    };
}epi_epi_lane0_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane1_ctr2_odd:30;
    };
}epi_epi_lane1_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane2_ctr2_odd:30;
    };
}epi_epi_lane2_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane3_ctr2_odd:30;
    };
}epi_epi_lane3_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane4_ctr2_odd:30;
    };
}epi_epi_lane4_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane5_ctr2_odd:30;
    };
}epi_epi_lane5_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane6_ctr2_odd:30;
    };
}epi_epi_lane6_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane7_ctr2_odd:30;
    };
}epi_epi_lane7_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane8_ctr2_odd:30;
    };
}epi_epi_lane8_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane9_ctr2_odd:30;
    };
}epi_epi_lane9_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane10_ctr2_odd:30;
    };
}epi_epi_lane10_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane11_ctr2_odd:30;
    };
}epi_epi_lane11_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane12_ctr2_odd:30;
    };
}epi_epi_lane12_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane13_ctr2_odd:30;
    };
}epi_epi_lane13_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane14_ctr2_odd:30;
    };
}epi_epi_lane14_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane15_ctr2_odd:30;
    };
}epi_epi_lane15_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane0_ctr3_odd:30;
    };
}epi_epi_lane0_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane1_ctr3_odd:30;
    };
}epi_epi_lane1_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane2_ctr3_odd:30;
    };
}epi_epi_lane2_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane3_ctr3_odd:30;
    };
}epi_epi_lane3_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane4_ctr3_odd:30;
    };
}epi_epi_lane4_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane5_ctr3_odd:30;
    };
}epi_epi_lane5_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane6_ctr3_odd:30;
    };
}epi_epi_lane6_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane7_ctr3_odd:30;
    };
}epi_epi_lane7_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane8_ctr3_odd:30;
    };
}epi_epi_lane8_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane9_ctr3_odd:30;
    };
}epi_epi_lane9_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane10_ctr3_odd:30;
    };
}epi_epi_lane10_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane11_ctr3_odd:30;
    };
}epi_epi_lane11_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane12_ctr3_odd:30;
    };
}epi_epi_lane12_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane13_ctr3_odd:30;
    };
}epi_epi_lane13_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane14_ctr3_odd:30;
    };
}epi_epi_lane14_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lane15_ctr3_odd:30;
    };
}epi_epi_lane15_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  gp_table_line_cycle:4;
    };
}epi_epi_gplut_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  gp_table_line_1:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  gp_table_line_0:5;
    };
}epi_epi_gplut_line_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  gp_table_line_3:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  gp_table_line_2:5;
    };
}epi_epi_gplut_line_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  gp_table_line_5:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  gp_table_line_4:5;
    };
}epi_epi_gplut_line_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  gp_table_line_7:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  gp_table_line_6:5;
    };
}epi_epi_gplut_line_67_RBUS;

#else //apply LITTLE_ENDIAN

//======EPI register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  phase1_preamble_num_0:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  phase2_preamble_num_0:4;
        RBus_UInt32  res2:12;
    };
}epi_epi_packet_ctr1_0_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  epi_version:3;
        RBus_UInt32  lock_dmy_line_en:1;
        RBus_UInt32  res1:19;
        RBus_UInt32  data_mode_change:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  epi_bit_mode:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  epi_data_unfl_clr:1;
        RBus_UInt32  epi_data_unfl:1;
    };
}epi_epi_packet_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  epi_lock_change:1;
        RBus_UInt32  epi_lock_sel:1;
        RBus_UInt32  epi_lock:1;
        RBus_UInt32  hw_lock:1;
        RBus_UInt32  lock_wait_vs_en:1;
        RBus_UInt32  res1:19;
        RBus_UInt32  data_start_en:1;
        RBus_UInt32  ctrl3_en:1;
        RBus_UInt32  ctrl_start_en:1;
        RBus_UInt32  epi_lock_int_en:1;
        RBus_UInt32  epi_reset:1;
        RBus_UInt32  ctrl4_en:1;
        RBus_UInt32  ctrl5_en:1;
        RBus_UInt32  force_ctsfifo_rstn_epi:1;
    };
}epi_epi_clock_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  epi_tst_out:32;
    };
}epi_epi_dgb_read_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  ceds_28s_soe_sel_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  front_value:2;
        RBus_UInt32  back_value:2;
        RBus_UInt32  epi_enable:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  port_num:5;
        RBus_UInt32  res4:5;
        RBus_UInt32  ext_subpixel_mode:1;
        RBus_UInt32  two_pixel_mode:1;
    };
}epi_epi_port_option_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  front_rlc:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  front_data:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  front_cmd:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  epi_otpin_port_sel:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  dummy18026070_24_20:5;
        RBus_UInt32  res5:3;
        RBus_UInt32  epi_otpin_ver_sel:1;
        RBus_UInt32  res6:2;
        RBus_UInt32  epi_dbg_en:1;
    };
}epi_epi_cmpi_front_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_color_0:30;
        RBus_UInt32  res1:2;
    };
}epi_cmpi_dummy_color_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_color_1:30;
        RBus_UInt32  res1:2;
    };
}epi_cmpi_dummy_color_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_color_2:30;
        RBus_UInt32  res1:2;
    };
}epi_cmpi_dummy_color_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_color_3:30;
        RBus_UInt32  res1:2;
    };
}epi_cmpi_dummy_color_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_start:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_mismatch_clear:1;
        RBus_UInt32  dummy18026090_3:1;
        RBus_UInt32  crc_port_sel:16;
        RBus_UInt32  crc_mismatch_count:12;
    };
}epi_epi_crc_ctrl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}epi_epi_crc_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_golden:32;
    };
}epi_epi_crc_ctrl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  epi_src_data:30;
        RBus_UInt32  epi_src_sel:1;
        RBus_UInt32  res1:1;
    };
}epi_epi_data_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pod2_inv_phase_bypass:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  inv_table_line_cycle:5;
        RBus_UInt32  res2:23;
    };
}epi_epi_packet_ctr1_inv_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inv_line_8:4;
        RBus_UInt32  inv_line_7:4;
        RBus_UInt32  inv_line_6:4;
        RBus_UInt32  inv_line_5:4;
        RBus_UInt32  inv_line_4:4;
        RBus_UInt32  inv_line_3:4;
        RBus_UInt32  inv_line_2:4;
        RBus_UInt32  inv_line_1:4;
    };
}epi_epi_packet_ctr1_inv_table_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inv_line_16:4;
        RBus_UInt32  inv_line_15:4;
        RBus_UInt32  inv_line_14:4;
        RBus_UInt32  inv_line_13:4;
        RBus_UInt32  inv_line_12:4;
        RBus_UInt32  inv_line_11:4;
        RBus_UInt32  inv_line_10:4;
        RBus_UInt32  inv_line_9:4;
    };
}epi_epi_packet_ctr1_inv_table_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rlc_en:1;
        RBus_UInt32  res1:31;
    };
}epi_epi_cmpi_rlc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbt_type_sel:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  clk_training1_sel:1;
        RBus_UInt32  res2:27;
    };
}epi_epi_cmpi_vbt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  between_s3_to_ct1:1;
        RBus_UInt32  dummy18026118_1:1;
        RBus_UInt32  res1:30;
    };
}epi_epi_cmpi_vbt_opt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr_tcon_source:4;
        RBus_UInt32  scr_tcon_source2:4;
        RBus_UInt32  scr_every_line_rst:1;
        RBus_UInt32  res1:23;
    };
}epi_epi_scr_tcon_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr8_enable:1;
        RBus_UInt32  ini_scr8_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  hvbp_scramble_en:1;
        RBus_UInt32  clk_edge_scramble_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  clk_edge_mode_sel:3;
        RBus_UInt32  res3:21;
    };
}epi_epi_scr8_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr8_ini_val:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_scr8_ini_val_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr10_enable:1;
        RBus_UInt32  ini_scr10_en:1;
        RBus_UInt32  res1:30;
    };
}epi_epi_scr10_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr10_ini_val:20;
        RBus_UInt32  res1:12;
    };
}epi_epi_scr10_ini_val_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr8_cm_enable:1;
        RBus_UInt32  res1:31;
    };
}epi_epi_scr8cm_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr8_cm_ini_val:12;
        RBus_UInt32  res1:20;
    };
}epi_epi_scr8cm_ini_val_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr10_cm_enable:1;
        RBus_UInt32  res1:31;
    };
}epi_epi_scr10cm_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scr10_cm_ini_val:10;
        RBus_UInt32  res1:22;
    };
}epi_epi_scr10cm_ini_val_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_front_color_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  cmpi_middle_color_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  cmpi_back_color_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  dummy180261a0_15_12:4;
        RBus_UInt32  cmpi_pgamma_en:1;
        RBus_UInt32  res4:15;
    };
}epi_epi_cmpi_pg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_cmd_st:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_cmd_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_cmd_cmd1:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_cmd_cmd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_cmd_cmd2:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_cmd_cmd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_cmd_cmd3:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_cmd_cmd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_cmd_cmd4:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_cmd_cmd4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_cmd_cmd5:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_cmd_cmd5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_start:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data0:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data1:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data2:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data3:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data4:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data5:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data6:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data7:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data8:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data9:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data10:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data11:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data12:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data13:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data14:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data15:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data16:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data17:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data18:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data19:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data20:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data21:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data22:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data23:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data24:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data25:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data26:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data27:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data28:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data29:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data30:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data31:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data32:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data33:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data33_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data34:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data35:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data35_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data36:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data37:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data37_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data38:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data39:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_data39_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data40:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data41:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data41_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data42:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data42_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data43:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data43_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data44:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data45:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data46:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data46_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data47:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data47_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data48:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data49:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data49_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data50:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data51:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data51_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data52:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data53:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data53_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data54:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data55:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data55_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data56:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data57:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data57_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data58:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_data59:21;
        RBus_UInt32  res1:11;
    };
}epi_epi_cmpi_pg_data59_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmpi_pg_end:24;
        RBus_UInt32  res1:8;
    };
}epi_epi_cmpi_pg_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_port_en:16;
        RBus_UInt32  res1:16;
    };
}epi_epi_ls_port_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ss_fsm_sel:16;
        RBus_UInt32  res1:16;
    };
}epi_epi_fsm_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data_port_en:16;
        RBus_UInt32  res1:15;
        RBus_UInt32  constant_update_mode:1;
    };
}epi_epi_data_port_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sw_cal_value:14;
        RBus_UInt32  res1:17;
        RBus_UInt32  sw_cal:1;
    };
}epi_epi_den_fall_loca_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debounce_en:1;
        RBus_UInt32  debounce_low_window:12;
        RBus_UInt32  res1:3;
        RBus_UInt32  debounce_hi_window:12;
        RBus_UInt32  res2:4;
    };
}epi_epi_lock_debounce_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  den_num_flag:1;
        RBus_UInt32  den_length_flag:1;
        RBus_UInt32  hs_den_length_flag:1;
        RBus_UInt32  hs_distance_flag:1;
        RBus_UInt32  res1:28;
    };
}epi_epi_dbg_reg_flag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  den_num_det_en:1;
        RBus_UInt32  den_length_det_en:1;
        RBus_UInt32  hs_den_length_det_en:1;
        RBus_UInt32  hs_distance_det_en:1;
        RBus_UInt32  res1:28;
    };
}epi_epi_dbg_reg_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ctr12_ref_soe:2;
        RBus_UInt32  soe_table_line_cycle:2;
        RBus_UInt32  res1:28;
    };
}epi_epi_soe_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane0_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane0_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane0_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane0_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane1_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane1_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane1_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane1_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane2_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane2_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane2_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane2_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane3_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane3_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane3_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane3_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane4_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane4_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane4_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane4_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane5_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane5_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane5_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane5_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane6_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane6_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane6_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane6_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane7_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane7_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane7_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane7_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane8_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane8_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane8_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane8_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane9_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane9_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane9_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane9_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane10_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane10_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane10_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane10_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane11_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane11_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane11_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane11_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane12_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane12_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane12_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane12_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane13_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane13_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane13_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane13_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane14_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane14_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane14_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane14_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane15_soe0:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line0_lane15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane15_soe1:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line1_lane15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane15_soe2:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line2_lane15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane15_soe3:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_soe_line3_lane15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_d_st_c0_mux_sel:4;
        RBus_UInt32  lane_d_st_c1_mux_sel:4;
        RBus_UInt32  lane_d_st_c2_mux_sel:4;
        RBus_UInt32  lane_d_st_c3_mux_sel:4;
        RBus_UInt32  lane_d_st_c4_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_dst_mux0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_d_st_c5_mux_sel:4;
        RBus_UInt32  lane_d_st_c6_mux_sel:4;
        RBus_UInt32  lane_d_st_c7_mux_sel:4;
        RBus_UInt32  lane_d_st_c8_mux_sel:4;
        RBus_UInt32  lane_d_st_c9_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_dst_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_d_st_c10_mux_sel:4;
        RBus_UInt32  lane_d_st_c11_mux_sel:4;
        RBus_UInt32  lane_d_st_c12_mux_sel:4;
        RBus_UInt32  lane_d_st_c13_mux_sel:4;
        RBus_UInt32  lane_d_st_c14_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_dst_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_d_st_c15_mux_sel:4;
        RBus_UInt32  lane_d_st_c16_mux_sel:4;
        RBus_UInt32  lane_d_st_c17_mux_sel:4;
        RBus_UInt32  lane_d_st_c18_mux_sel:4;
        RBus_UInt32  lane_d_st_c19_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_dst_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_d_st_c20_mux_sel:4;
        RBus_UInt32  lane_d_st_c21_mux_sel:4;
        RBus_UInt32  lane_d_st_c22_mux_sel:4;
        RBus_UInt32  lane_d_st_c23_mux_sel:4;
        RBus_UInt32  lane_d_st_c24_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_dst_mux4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_d_st_c25_mux_sel:4;
        RBus_UInt32  lane_d_st_c26_mux_sel:4;
        RBus_UInt32  lane_d_st_c27_mux_sel:4;
        RBus_UInt32  lane_d_st_c28_mux_sel:4;
        RBus_UInt32  lane_d_st_c29_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_dst_mux5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_c_st_c0_mux_sel:4;
        RBus_UInt32  lane_c_st_c1_mux_sel:4;
        RBus_UInt32  lane_c_st_c2_mux_sel:4;
        RBus_UInt32  lane_c_st_c3_mux_sel:4;
        RBus_UInt32  lane_c_st_c4_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_cst_mux0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_c_st_c5_mux_sel:4;
        RBus_UInt32  lane_c_st_c6_mux_sel:4;
        RBus_UInt32  lane_c_st_c7_mux_sel:4;
        RBus_UInt32  lane_c_st_c8_mux_sel:4;
        RBus_UInt32  lane_c_st_c9_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_cst_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_c_st_c10_mux_sel:4;
        RBus_UInt32  lane_c_st_c11_mux_sel:4;
        RBus_UInt32  lane_c_st_c12_mux_sel:4;
        RBus_UInt32  lane_c_st_c13_mux_sel:4;
        RBus_UInt32  lane_c_st_c14_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_cst_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_c_st_c15_mux_sel:4;
        RBus_UInt32  lane_c_st_c16_mux_sel:4;
        RBus_UInt32  lane_c_st_c17_mux_sel:4;
        RBus_UInt32  lane_c_st_c18_mux_sel:4;
        RBus_UInt32  lane_c_st_c19_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_cst_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_c_st_c20_mux_sel:4;
        RBus_UInt32  lane_c_st_c21_mux_sel:4;
        RBus_UInt32  lane_c_st_c22_mux_sel:4;
        RBus_UInt32  lane_c_st_c23_mux_sel:4;
        RBus_UInt32  lane_c_st_c24_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_cst_mux4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_c_st_c25_mux_sel:4;
        RBus_UInt32  lane_c_st_c26_mux_sel:4;
        RBus_UInt32  lane_c_st_c27_mux_sel:4;
        RBus_UInt32  lane_c_st_c28_mux_sel:4;
        RBus_UInt32  lane_c_st_c29_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_cst_mux5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr1_c0_mux_sel:4;
        RBus_UInt32  lane_ctr1_c1_mux_sel:4;
        RBus_UInt32  lane_ctr1_c2_mux_sel:4;
        RBus_UInt32  lane_ctr1_c3_mux_sel:4;
        RBus_UInt32  lane_ctr1_c4_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr1_mux0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr1_c5_mux_sel:4;
        RBus_UInt32  lane_ctr1_c6_mux_sel:4;
        RBus_UInt32  lane_ctr1_c7_mux_sel:4;
        RBus_UInt32  lane_ctr1_c8_mux_sel:4;
        RBus_UInt32  lane_ctr1_c9_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr1_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr1_c10_mux_sel:4;
        RBus_UInt32  lane_ctr1_c11_mux_sel:4;
        RBus_UInt32  lane_ctr1_c12_mux_sel:4;
        RBus_UInt32  lane_ctr1_c13_mux_sel:4;
        RBus_UInt32  lane_ctr1_c14_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr1_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr1_c15_mux_sel:4;
        RBus_UInt32  lane_ctr1_c16_mux_sel:4;
        RBus_UInt32  lane_ctr1_c17_mux_sel:4;
        RBus_UInt32  lane_ctr1_c18_mux_sel:4;
        RBus_UInt32  lane_ctr1_c19_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr1_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr1_c20_mux_sel:4;
        RBus_UInt32  lane_ctr1_c21_mux_sel:4;
        RBus_UInt32  lane_ctr1_c22_mux_sel:4;
        RBus_UInt32  lane_ctr1_c23_mux_sel:4;
        RBus_UInt32  lane_ctr1_c24_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr1_mux4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr1_c25_mux_sel:4;
        RBus_UInt32  lane_ctr1_c26_mux_sel:4;
        RBus_UInt32  lane_ctr1_c27_mux_sel:4;
        RBus_UInt32  lane_ctr1_c28_mux_sel:4;
        RBus_UInt32  lane_ctr1_c29_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr1_mux5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr2_c0_mux_sel:4;
        RBus_UInt32  lane_ctr2_c1_mux_sel:4;
        RBus_UInt32  lane_ctr2_c2_mux_sel:4;
        RBus_UInt32  lane_ctr2_c3_mux_sel:4;
        RBus_UInt32  lane_ctr2_c4_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr2_mux0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr2_c5_mux_sel:4;
        RBus_UInt32  lane_ctr2_c6_mux_sel:4;
        RBus_UInt32  lane_ctr2_c7_mux_sel:4;
        RBus_UInt32  lane_ctr2_c8_mux_sel:4;
        RBus_UInt32  lane_ctr2_c9_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr2_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr2_c10_mux_sel:4;
        RBus_UInt32  lane_ctr2_c11_mux_sel:4;
        RBus_UInt32  lane_ctr2_c12_mux_sel:4;
        RBus_UInt32  lane_ctr2_c13_mux_sel:4;
        RBus_UInt32  lane_ctr2_c14_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr2_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr2_c15_mux_sel:4;
        RBus_UInt32  lane_ctr2_c16_mux_sel:4;
        RBus_UInt32  lane_ctr2_c17_mux_sel:4;
        RBus_UInt32  lane_ctr2_c18_mux_sel:4;
        RBus_UInt32  lane_ctr2_c19_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr2_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr2_c20_mux_sel:4;
        RBus_UInt32  lane_ctr2_c21_mux_sel:4;
        RBus_UInt32  lane_ctr2_c22_mux_sel:4;
        RBus_UInt32  lane_ctr2_c23_mux_sel:4;
        RBus_UInt32  lane_ctr2_c24_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr2_mux4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr2_c25_mux_sel:4;
        RBus_UInt32  lane_ctr2_c26_mux_sel:4;
        RBus_UInt32  lane_ctr2_c27_mux_sel:4;
        RBus_UInt32  lane_ctr2_c28_mux_sel:4;
        RBus_UInt32  lane_ctr2_c29_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr2_mux5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr3_c0_mux_sel:4;
        RBus_UInt32  lane_ctr3_c1_mux_sel:4;
        RBus_UInt32  lane_ctr3_c2_mux_sel:4;
        RBus_UInt32  lane_ctr3_c3_mux_sel:4;
        RBus_UInt32  lane_ctr3_c4_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr3_mux0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr3_c5_mux_sel:4;
        RBus_UInt32  lane_ctr3_c6_mux_sel:4;
        RBus_UInt32  lane_ctr3_c7_mux_sel:4;
        RBus_UInt32  lane_ctr3_c8_mux_sel:4;
        RBus_UInt32  lane_ctr3_c9_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr3_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr3_c10_mux_sel:4;
        RBus_UInt32  lane_ctr3_c11_mux_sel:4;
        RBus_UInt32  lane_ctr3_c12_mux_sel:4;
        RBus_UInt32  lane_ctr3_c13_mux_sel:4;
        RBus_UInt32  lane_ctr3_c14_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr3_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr3_c15_mux_sel:4;
        RBus_UInt32  lane_ctr3_c16_mux_sel:4;
        RBus_UInt32  lane_ctr3_c17_mux_sel:4;
        RBus_UInt32  lane_ctr3_c18_mux_sel:4;
        RBus_UInt32  lane_ctr3_c19_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr3_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr3_c20_mux_sel:4;
        RBus_UInt32  lane_ctr3_c21_mux_sel:4;
        RBus_UInt32  lane_ctr3_c22_mux_sel:4;
        RBus_UInt32  lane_ctr3_c23_mux_sel:4;
        RBus_UInt32  lane_ctr3_c24_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr3_mux4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr3_c25_mux_sel:4;
        RBus_UInt32  lane_ctr3_c26_mux_sel:4;
        RBus_UInt32  lane_ctr3_c27_mux_sel:4;
        RBus_UInt32  lane_ctr3_c28_mux_sel:4;
        RBus_UInt32  lane_ctr3_c29_mux_sel:4;
        RBus_UInt32  res1:12;
    };
}epi_epi_lane_ctr3_mux5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon_a_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  tcon_b_sel:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tcon_c_sel:6;
        RBus_UInt32  res3:10;
    };
}epi_epi_tcon_mux_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon_d_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  tcon_e_sel:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tcon_f_sel:6;
        RBus_UInt32  res3:10;
    };
}epi_epi_tcon_mux1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon_g_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  tcon_h_sel:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tcon_i_sel:6;
        RBus_UInt32  res3:10;
    };
}epi_epi_tcon_mux2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcon_j_sel:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  tcon_k_sel:6;
        RBus_UInt32  res2:18;
    };
}epi_epi_tcon_mux3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy18026510_31_0:32;
    };
}epi_epi_dummy_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_hw0:32;
    };
}epi_epi_hw_dummy0_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_hw1:32;
    };
}epi_epi_hw_dummy1_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_hw2:32;
    };
}epi_epi_hw_dummy2_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_hw3:32;
    };
}epi_epi_hw_dummy3_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ceds_pol_inv:16;
        RBus_UInt32  ceds_pol2_inv:16;
    };
}epi_epi_ceds_pol_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  d_st:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane_dst_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  c_st:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane_cst_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr4:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane_ctr4_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane_ctr5:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane_ctr5_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane0_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane0_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane1_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane1_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane2_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane2_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane3_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane3_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane4_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane4_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane5_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane5_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane6_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane6_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane7_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane7_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane8_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane8_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane9_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane9_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane10_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane10_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane11_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane11_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane12_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane12_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane13_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane13_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane14_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane14_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane15_ctr1_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane15_ctr1_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane0_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane0_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane1_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane1_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane2_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane2_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane3_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane3_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane4_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane4_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane5_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane5_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane6_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane6_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane7_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane7_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane8_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane8_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane9_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane9_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane10_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane10_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane11_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane11_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane12_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane12_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane13_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane13_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane14_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane14_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane15_ctr2_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane15_ctr2_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane0_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane0_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane1_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane1_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane2_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane2_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane3_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane3_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane4_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane4_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane5_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane5_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane6_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane6_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane7_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane7_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane8_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane8_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane9_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane9_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane10_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane10_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane11_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane11_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane12_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane12_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane13_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane13_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane14_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane14_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lane15_ctr3_odd:30;
        RBus_UInt32  res1:2;
    };
}epi_epi_lane15_ctr3_odata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp_table_line_cycle:4;
        RBus_UInt32  res1:28;
    };
}epi_epi_gplut_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp_table_line_0:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  gp_table_line_1:5;
        RBus_UInt32  res2:19;
    };
}epi_epi_gplut_line_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp_table_line_2:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  gp_table_line_3:5;
        RBus_UInt32  res2:19;
    };
}epi_epi_gplut_line_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp_table_line_4:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  gp_table_line_5:5;
        RBus_UInt32  res2:19;
    };
}epi_epi_gplut_line_45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gp_table_line_6:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  gp_table_line_7:5;
        RBus_UInt32  res2:19;
    };
}epi_epi_gplut_line_67_RBUS;




#endif 


#endif 
