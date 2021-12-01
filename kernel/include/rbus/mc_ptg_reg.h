/**
* @file Merlin5_DesignSpec-MC_PTG
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MC_PTG_REG_H_
#define _RBUS_MC_PTG_REG_H_

#include "rbus_types.h"



//  MC_PTG Register Address
#define  MC_PTG_PTG_ctl_0                                                       0x180B3000
#define  MC_PTG_PTG_ctl_0_reg_addr                                               "0xB80B3000"
#define  MC_PTG_PTG_ctl_0_reg                                                    0xB80B3000
#define  MC_PTG_PTG_ctl_0_inst_addr                                              "0x0000"
#define  set_MC_PTG_PTG_ctl_0_reg(data)                                          (*((volatile unsigned int*)MC_PTG_PTG_ctl_0_reg)=data)
#define  get_MC_PTG_PTG_ctl_0_reg                                                (*((volatile unsigned int*)MC_PTG_PTG_ctl_0_reg))
#define  MC_PTG_PTG_ctl_0_ptg_cmd_num_shift                                      (24)
#define  MC_PTG_PTG_ctl_0_ptg_crc_chk_time_shift                                 (16)
#define  MC_PTG_PTG_ctl_0_ptg_rept_num_shift                                     (8)
#define  MC_PTG_PTG_ctl_0_ptg_cont_err_stop_shift                                (5)
#define  MC_PTG_PTG_ctl_0_mc_rbus_write_lock_shift                               (4)
#define  MC_PTG_PTG_ctl_0_ptg_cont_run_shift                                     (3)
#define  MC_PTG_PTG_ctl_0_ptg_en_shift                                           (0)
#define  MC_PTG_PTG_ctl_0_ptg_cmd_num_mask                                       (0xFF000000)
#define  MC_PTG_PTG_ctl_0_ptg_crc_chk_time_mask                                  (0x00FF0000)
#define  MC_PTG_PTG_ctl_0_ptg_rept_num_mask                                      (0x0000FF00)
#define  MC_PTG_PTG_ctl_0_ptg_cont_err_stop_mask                                 (0x00000020)
#define  MC_PTG_PTG_ctl_0_mc_rbus_write_lock_mask                                (0x00000010)
#define  MC_PTG_PTG_ctl_0_ptg_cont_run_mask                                      (0x00000008)
#define  MC_PTG_PTG_ctl_0_ptg_en_mask                                            (0x00000001)
#define  MC_PTG_PTG_ctl_0_ptg_cmd_num(data)                                      (0xFF000000&((data)<<24))
#define  MC_PTG_PTG_ctl_0_ptg_crc_chk_time(data)                                 (0x00FF0000&((data)<<16))
#define  MC_PTG_PTG_ctl_0_ptg_rept_num(data)                                     (0x0000FF00&((data)<<8))
#define  MC_PTG_PTG_ctl_0_ptg_cont_err_stop(data)                                (0x00000020&((data)<<5))
#define  MC_PTG_PTG_ctl_0_mc_rbus_write_lock(data)                               (0x00000010&((data)<<4))
#define  MC_PTG_PTG_ctl_0_ptg_cont_run(data)                                     (0x00000008&((data)<<3))
#define  MC_PTG_PTG_ctl_0_ptg_en(data)                                           (0x00000001&(data))
#define  MC_PTG_PTG_ctl_0_get_ptg_cmd_num(data)                                  ((0xFF000000&(data))>>24)
#define  MC_PTG_PTG_ctl_0_get_ptg_crc_chk_time(data)                             ((0x00FF0000&(data))>>16)
#define  MC_PTG_PTG_ctl_0_get_ptg_rept_num(data)                                 ((0x0000FF00&(data))>>8)
#define  MC_PTG_PTG_ctl_0_get_ptg_cont_err_stop(data)                            ((0x00000020&(data))>>5)
#define  MC_PTG_PTG_ctl_0_get_mc_rbus_write_lock(data)                           ((0x00000010&(data))>>4)
#define  MC_PTG_PTG_ctl_0_get_ptg_cont_run(data)                                 ((0x00000008&(data))>>3)
#define  MC_PTG_PTG_ctl_0_get_ptg_en(data)                                       (0x00000001&(data))

#define  MC_PTG_PTG_ctl_1                                                       0x180B3004
#define  MC_PTG_PTG_ctl_1_reg_addr                                               "0xB80B3004"
#define  MC_PTG_PTG_ctl_1_reg                                                    0xB80B3004
#define  MC_PTG_PTG_ctl_1_inst_addr                                              "0x0001"
#define  set_MC_PTG_PTG_ctl_1_reg(data)                                          (*((volatile unsigned int*)MC_PTG_PTG_ctl_1_reg)=data)
#define  get_MC_PTG_PTG_ctl_1_reg                                                (*((volatile unsigned int*)MC_PTG_PTG_ctl_1_reg))
#define  MC_PTG_PTG_ctl_1_ptg_self_loop_back_shift                               (0)
#define  MC_PTG_PTG_ctl_1_ptg_self_loop_back_mask                                (0x00000001)
#define  MC_PTG_PTG_ctl_1_ptg_self_loop_back(data)                               (0x00000001&(data))
#define  MC_PTG_PTG_ctl_1_get_ptg_self_loop_back(data)                           (0x00000001&(data))

#define  MC_PTG_PTG_ctl_2                                                       0x180B3010
#define  MC_PTG_PTG_ctl_2_reg_addr                                               "0xB80B3010"
#define  MC_PTG_PTG_ctl_2_reg                                                    0xB80B3010
#define  MC_PTG_PTG_ctl_2_inst_addr                                              "0x0002"
#define  set_MC_PTG_PTG_ctl_2_reg(data)                                          (*((volatile unsigned int*)MC_PTG_PTG_ctl_2_reg)=data)
#define  get_MC_PTG_PTG_ctl_2_reg                                                (*((volatile unsigned int*)MC_PTG_PTG_ctl_2_reg))
#define  MC_PTG_PTG_ctl_2_ptg_trigger_start_shift                                (31)
#define  MC_PTG_PTG_ctl_2_ptg_crc_flag_shift                                     (30)
#define  MC_PTG_PTG_ctl_2_ptg_dbuf_boundary_shift                                (16)
#define  MC_PTG_PTG_ctl_2_ptg_addr_auto_inc_shift                                (2)
#define  MC_PTG_PTG_ctl_2_ptg_data_buf_dir_shift                                 (1)
#define  MC_PTG_PTG_ctl_2_ptg_buf_sel_shift                                      (0)
#define  MC_PTG_PTG_ctl_2_ptg_trigger_start_mask                                 (0x80000000)
#define  MC_PTG_PTG_ctl_2_ptg_crc_flag_mask                                      (0x40000000)
#define  MC_PTG_PTG_ctl_2_ptg_dbuf_boundary_mask                                 (0x00FF0000)
#define  MC_PTG_PTG_ctl_2_ptg_addr_auto_inc_mask                                 (0x00000004)
#define  MC_PTG_PTG_ctl_2_ptg_data_buf_dir_mask                                  (0x00000002)
#define  MC_PTG_PTG_ctl_2_ptg_buf_sel_mask                                       (0x00000001)
#define  MC_PTG_PTG_ctl_2_ptg_trigger_start(data)                                (0x80000000&((data)<<31))
#define  MC_PTG_PTG_ctl_2_ptg_crc_flag(data)                                     (0x40000000&((data)<<30))
#define  MC_PTG_PTG_ctl_2_ptg_dbuf_boundary(data)                                (0x00FF0000&((data)<<16))
#define  MC_PTG_PTG_ctl_2_ptg_addr_auto_inc(data)                                (0x00000004&((data)<<2))
#define  MC_PTG_PTG_ctl_2_ptg_data_buf_dir(data)                                 (0x00000002&((data)<<1))
#define  MC_PTG_PTG_ctl_2_ptg_buf_sel(data)                                      (0x00000001&(data))
#define  MC_PTG_PTG_ctl_2_get_ptg_trigger_start(data)                            ((0x80000000&(data))>>31)
#define  MC_PTG_PTG_ctl_2_get_ptg_crc_flag(data)                                 ((0x40000000&(data))>>30)
#define  MC_PTG_PTG_ctl_2_get_ptg_dbuf_boundary(data)                            ((0x00FF0000&(data))>>16)
#define  MC_PTG_PTG_ctl_2_get_ptg_addr_auto_inc(data)                            ((0x00000004&(data))>>2)
#define  MC_PTG_PTG_ctl_2_get_ptg_data_buf_dir(data)                             ((0x00000002&(data))>>1)
#define  MC_PTG_PTG_ctl_2_get_ptg_buf_sel(data)                                  (0x00000001&(data))

#define  MC_PTG_PTG_ctl_3                                                       0x180B3014
#define  MC_PTG_PTG_ctl_3_reg_addr                                               "0xB80B3014"
#define  MC_PTG_PTG_ctl_3_reg                                                    0xB80B3014
#define  MC_PTG_PTG_ctl_3_inst_addr                                              "0x0003"
#define  set_MC_PTG_PTG_ctl_3_reg(data)                                          (*((volatile unsigned int*)MC_PTG_PTG_ctl_3_reg)=data)
#define  get_MC_PTG_PTG_ctl_3_reg                                                (*((volatile unsigned int*)MC_PTG_PTG_ctl_3_reg))
#define  MC_PTG_PTG_ctl_3_ptg_addr_sync_shift                                    (16)
#define  MC_PTG_PTG_ctl_3_ptg_buff_addr_shift                                    (0)
#define  MC_PTG_PTG_ctl_3_ptg_addr_sync_mask                                     (0x00010000)
#define  MC_PTG_PTG_ctl_3_ptg_buff_addr_mask                                     (0x000000FF)
#define  MC_PTG_PTG_ctl_3_ptg_addr_sync(data)                                    (0x00010000&((data)<<16))
#define  MC_PTG_PTG_ctl_3_ptg_buff_addr(data)                                    (0x000000FF&(data))
#define  MC_PTG_PTG_ctl_3_get_ptg_addr_sync(data)                                ((0x00010000&(data))>>16)
#define  MC_PTG_PTG_ctl_3_get_ptg_buff_addr(data)                                (0x000000FF&(data))

#define  MC_PTG_PTG_ctl_4                                                       0x180B3018
#define  MC_PTG_PTG_ctl_4_reg_addr                                               "0xB80B3018"
#define  MC_PTG_PTG_ctl_4_reg                                                    0xB80B3018
#define  MC_PTG_PTG_ctl_4_inst_addr                                              "0x0004"
#define  set_MC_PTG_PTG_ctl_4_reg(data)                                          (*((volatile unsigned int*)MC_PTG_PTG_ctl_4_reg)=data)
#define  get_MC_PTG_PTG_ctl_4_reg                                                (*((volatile unsigned int*)MC_PTG_PTG_ctl_4_reg))
#define  MC_PTG_PTG_ctl_4_ptg_crc_byte_sel_shift                                 (24)
#define  MC_PTG_PTG_ctl_4_ptg_crc_bit_flag_0_shift                               (0)
#define  MC_PTG_PTG_ctl_4_ptg_crc_byte_sel_mask                                  (0x07000000)
#define  MC_PTG_PTG_ctl_4_ptg_crc_bit_flag_0_mask                                (0x000000FF)
#define  MC_PTG_PTG_ctl_4_ptg_crc_byte_sel(data)                                 (0x07000000&((data)<<24))
#define  MC_PTG_PTG_ctl_4_ptg_crc_bit_flag_0(data)                               (0x000000FF&(data))
#define  MC_PTG_PTG_ctl_4_get_ptg_crc_byte_sel(data)                             ((0x07000000&(data))>>24)
#define  MC_PTG_PTG_ctl_4_get_ptg_crc_bit_flag_0(data)                           (0x000000FF&(data))

#define  MC_PTG_PTG_ctl_5                                                       0x180B301C
#define  MC_PTG_PTG_ctl_5_reg_addr                                               "0xB80B301C"
#define  MC_PTG_PTG_ctl_5_reg                                                    0xB80B301C
#define  MC_PTG_PTG_ctl_5_inst_addr                                              "0x0005"
#define  set_MC_PTG_PTG_ctl_5_reg(data)                                          (*((volatile unsigned int*)MC_PTG_PTG_ctl_5_reg)=data)
#define  get_MC_PTG_PTG_ctl_5_reg                                                (*((volatile unsigned int*)MC_PTG_PTG_ctl_5_reg))
#define  MC_PTG_PTG_ctl_5_ptg_crc_error_cnt_shift                                (0)
#define  MC_PTG_PTG_ctl_5_ptg_crc_error_cnt_mask                                 (0x00FFFFFF)
#define  MC_PTG_PTG_ctl_5_ptg_crc_error_cnt(data)                                (0x00FFFFFF&(data))
#define  MC_PTG_PTG_ctl_5_get_ptg_crc_error_cnt(data)                            (0x00FFFFFF&(data))

#define  MC_PTG_PTG_wtmp_0                                                      0x180B3020
#define  MC_PTG_PTG_wtmp_0_reg_addr                                              "0xB80B3020"
#define  MC_PTG_PTG_wtmp_0_reg                                                   0xB80B3020
#define  MC_PTG_PTG_wtmp_0_inst_addr                                             "0x0006"
#define  set_MC_PTG_PTG_wtmp_0_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_wtmp_0_reg)=data)
#define  get_MC_PTG_PTG_wtmp_0_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_wtmp_0_reg))
#define  MC_PTG_PTG_wtmp_0_ptg_w_temp_0_shift                                    (0)
#define  MC_PTG_PTG_wtmp_0_ptg_w_temp_0_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_wtmp_0_ptg_w_temp_0(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_wtmp_0_get_ptg_w_temp_0(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_wtmp_1                                                      0x180B3024
#define  MC_PTG_PTG_wtmp_1_reg_addr                                              "0xB80B3024"
#define  MC_PTG_PTG_wtmp_1_reg                                                   0xB80B3024
#define  MC_PTG_PTG_wtmp_1_inst_addr                                             "0x0007"
#define  set_MC_PTG_PTG_wtmp_1_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_wtmp_1_reg)=data)
#define  get_MC_PTG_PTG_wtmp_1_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_wtmp_1_reg))
#define  MC_PTG_PTG_wtmp_1_ptg_w_temp_1_shift                                    (0)
#define  MC_PTG_PTG_wtmp_1_ptg_w_temp_1_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_wtmp_1_ptg_w_temp_1(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_wtmp_1_get_ptg_w_temp_1(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_wtmp_2                                                      0x180B3028
#define  MC_PTG_PTG_wtmp_2_reg_addr                                              "0xB80B3028"
#define  MC_PTG_PTG_wtmp_2_reg                                                   0xB80B3028
#define  MC_PTG_PTG_wtmp_2_inst_addr                                             "0x0008"
#define  set_MC_PTG_PTG_wtmp_2_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_wtmp_2_reg)=data)
#define  get_MC_PTG_PTG_wtmp_2_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_wtmp_2_reg))
#define  MC_PTG_PTG_wtmp_2_ptg_w_temp_2_shift                                    (0)
#define  MC_PTG_PTG_wtmp_2_ptg_w_temp_2_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_wtmp_2_ptg_w_temp_2(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_wtmp_2_get_ptg_w_temp_2(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_wtmp_3                                                      0x180B302C
#define  MC_PTG_PTG_wtmp_3_reg_addr                                              "0xB80B302C"
#define  MC_PTG_PTG_wtmp_3_reg                                                   0xB80B302C
#define  MC_PTG_PTG_wtmp_3_inst_addr                                             "0x0009"
#define  set_MC_PTG_PTG_wtmp_3_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_wtmp_3_reg)=data)
#define  get_MC_PTG_PTG_wtmp_3_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_wtmp_3_reg))
#define  MC_PTG_PTG_wtmp_3_ptg_w_temp_3_shift                                    (0)
#define  MC_PTG_PTG_wtmp_3_ptg_w_temp_3_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_wtmp_3_ptg_w_temp_3(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_wtmp_3_get_ptg_w_temp_3(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_wtmp_4                                                      0x180B3030
#define  MC_PTG_PTG_wtmp_4_reg_addr                                              "0xB80B3030"
#define  MC_PTG_PTG_wtmp_4_reg                                                   0xB80B3030
#define  MC_PTG_PTG_wtmp_4_inst_addr                                             "0x000A"
#define  set_MC_PTG_PTG_wtmp_4_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_wtmp_4_reg)=data)
#define  get_MC_PTG_PTG_wtmp_4_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_wtmp_4_reg))
#define  MC_PTG_PTG_wtmp_4_ptg_w_temp_4_shift                                    (0)
#define  MC_PTG_PTG_wtmp_4_ptg_w_temp_4_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_wtmp_4_ptg_w_temp_4(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_wtmp_4_get_ptg_w_temp_4(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_wtmp_5                                                      0x180B3034
#define  MC_PTG_PTG_wtmp_5_reg_addr                                              "0xB80B3034"
#define  MC_PTG_PTG_wtmp_5_reg                                                   0xB80B3034
#define  MC_PTG_PTG_wtmp_5_inst_addr                                             "0x000B"
#define  set_MC_PTG_PTG_wtmp_5_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_wtmp_5_reg)=data)
#define  get_MC_PTG_PTG_wtmp_5_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_wtmp_5_reg))
#define  MC_PTG_PTG_wtmp_5_ptg_w_temp_5_shift                                    (0)
#define  MC_PTG_PTG_wtmp_5_ptg_w_temp_5_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_wtmp_5_ptg_w_temp_5(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_wtmp_5_get_ptg_w_temp_5(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_wtmp_6                                                      0x180B3038
#define  MC_PTG_PTG_wtmp_6_reg_addr                                              "0xB80B3038"
#define  MC_PTG_PTG_wtmp_6_reg                                                   0xB80B3038
#define  MC_PTG_PTG_wtmp_6_inst_addr                                             "0x000C"
#define  set_MC_PTG_PTG_wtmp_6_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_wtmp_6_reg)=data)
#define  get_MC_PTG_PTG_wtmp_6_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_wtmp_6_reg))
#define  MC_PTG_PTG_wtmp_6_ptg_w_temp_6_shift                                    (0)
#define  MC_PTG_PTG_wtmp_6_ptg_w_temp_6_mask                                     (0x00FFFFFF)
#define  MC_PTG_PTG_wtmp_6_ptg_w_temp_6(data)                                    (0x00FFFFFF&(data))
#define  MC_PTG_PTG_wtmp_6_get_ptg_w_temp_6(data)                                (0x00FFFFFF&(data))

#define  MC_PTG_PTG_rtmp_0                                                      0x180B3040
#define  MC_PTG_PTG_rtmp_0_reg_addr                                              "0xB80B3040"
#define  MC_PTG_PTG_rtmp_0_reg                                                   0xB80B3040
#define  MC_PTG_PTG_rtmp_0_inst_addr                                             "0x000D"
#define  set_MC_PTG_PTG_rtmp_0_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_rtmp_0_reg)=data)
#define  get_MC_PTG_PTG_rtmp_0_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_rtmp_0_reg))
#define  MC_PTG_PTG_rtmp_0_ptg_r_temp_0_shift                                    (0)
#define  MC_PTG_PTG_rtmp_0_ptg_r_temp_0_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_rtmp_0_ptg_r_temp_0(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_rtmp_0_get_ptg_r_temp_0(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_rtmp_1                                                      0x180B3044
#define  MC_PTG_PTG_rtmp_1_reg_addr                                              "0xB80B3044"
#define  MC_PTG_PTG_rtmp_1_reg                                                   0xB80B3044
#define  MC_PTG_PTG_rtmp_1_inst_addr                                             "0x000E"
#define  set_MC_PTG_PTG_rtmp_1_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_rtmp_1_reg)=data)
#define  get_MC_PTG_PTG_rtmp_1_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_rtmp_1_reg))
#define  MC_PTG_PTG_rtmp_1_ptg_r_temp_1_shift                                    (0)
#define  MC_PTG_PTG_rtmp_1_ptg_r_temp_1_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_rtmp_1_ptg_r_temp_1(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_rtmp_1_get_ptg_r_temp_1(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_rtmp_2                                                      0x180B3048
#define  MC_PTG_PTG_rtmp_2_reg_addr                                              "0xB80B3048"
#define  MC_PTG_PTG_rtmp_2_reg                                                   0xB80B3048
#define  MC_PTG_PTG_rtmp_2_inst_addr                                             "0x000F"
#define  set_MC_PTG_PTG_rtmp_2_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_rtmp_2_reg)=data)
#define  get_MC_PTG_PTG_rtmp_2_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_rtmp_2_reg))
#define  MC_PTG_PTG_rtmp_2_ptg_r_temp_2_shift                                    (0)
#define  MC_PTG_PTG_rtmp_2_ptg_r_temp_2_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_rtmp_2_ptg_r_temp_2(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_rtmp_2_get_ptg_r_temp_2(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_rtmp_3                                                      0x180B304C
#define  MC_PTG_PTG_rtmp_3_reg_addr                                              "0xB80B304C"
#define  MC_PTG_PTG_rtmp_3_reg                                                   0xB80B304C
#define  MC_PTG_PTG_rtmp_3_inst_addr                                             "0x0010"
#define  set_MC_PTG_PTG_rtmp_3_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_rtmp_3_reg)=data)
#define  get_MC_PTG_PTG_rtmp_3_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_rtmp_3_reg))
#define  MC_PTG_PTG_rtmp_3_ptg_r_temp_3_shift                                    (0)
#define  MC_PTG_PTG_rtmp_3_ptg_r_temp_3_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_rtmp_3_ptg_r_temp_3(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_rtmp_3_get_ptg_r_temp_3(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_rtmp_4                                                      0x180B3050
#define  MC_PTG_PTG_rtmp_4_reg_addr                                              "0xB80B3050"
#define  MC_PTG_PTG_rtmp_4_reg                                                   0xB80B3050
#define  MC_PTG_PTG_rtmp_4_inst_addr                                             "0x0011"
#define  set_MC_PTG_PTG_rtmp_4_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_rtmp_4_reg)=data)
#define  get_MC_PTG_PTG_rtmp_4_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_rtmp_4_reg))
#define  MC_PTG_PTG_rtmp_4_ptg_r_temp_4_shift                                    (0)
#define  MC_PTG_PTG_rtmp_4_ptg_r_temp_4_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_rtmp_4_ptg_r_temp_4(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_rtmp_4_get_ptg_r_temp_4(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_rtmp_5                                                      0x180B3054
#define  MC_PTG_PTG_rtmp_5_reg_addr                                              "0xB80B3054"
#define  MC_PTG_PTG_rtmp_5_reg                                                   0xB80B3054
#define  MC_PTG_PTG_rtmp_5_inst_addr                                             "0x0012"
#define  set_MC_PTG_PTG_rtmp_5_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_rtmp_5_reg)=data)
#define  get_MC_PTG_PTG_rtmp_5_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_rtmp_5_reg))
#define  MC_PTG_PTG_rtmp_5_ptg_r_temp_5_shift                                    (0)
#define  MC_PTG_PTG_rtmp_5_ptg_r_temp_5_mask                                     (0xFFFFFFFF)
#define  MC_PTG_PTG_rtmp_5_ptg_r_temp_5(data)                                    (0xFFFFFFFF&(data))
#define  MC_PTG_PTG_rtmp_5_get_ptg_r_temp_5(data)                                (0xFFFFFFFF&(data))

#define  MC_PTG_PTG_crc_0                                                       0x180B3060
#define  MC_PTG_PTG_crc_0_reg_addr                                               "0xB80B3060"
#define  MC_PTG_PTG_crc_0_reg                                                    0xB80B3060
#define  MC_PTG_PTG_crc_0_inst_addr                                              "0x0013"
#define  set_MC_PTG_PTG_crc_0_reg(data)                                          (*((volatile unsigned int*)MC_PTG_PTG_crc_0_reg)=data)
#define  get_MC_PTG_PTG_crc_0_reg                                                (*((volatile unsigned int*)MC_PTG_PTG_crc_0_reg))
#define  MC_PTG_PTG_crc_0_ptg_crc_3_shift                                        (24)
#define  MC_PTG_PTG_crc_0_ptg_crc_2_shift                                        (16)
#define  MC_PTG_PTG_crc_0_ptg_crc_1_shift                                        (8)
#define  MC_PTG_PTG_crc_0_ptg_crc_0_shift                                        (0)
#define  MC_PTG_PTG_crc_0_ptg_crc_3_mask                                         (0xFF000000)
#define  MC_PTG_PTG_crc_0_ptg_crc_2_mask                                         (0x00FF0000)
#define  MC_PTG_PTG_crc_0_ptg_crc_1_mask                                         (0x0000FF00)
#define  MC_PTG_PTG_crc_0_ptg_crc_0_mask                                         (0x000000FF)
#define  MC_PTG_PTG_crc_0_ptg_crc_3(data)                                        (0xFF000000&((data)<<24))
#define  MC_PTG_PTG_crc_0_ptg_crc_2(data)                                        (0x00FF0000&((data)<<16))
#define  MC_PTG_PTG_crc_0_ptg_crc_1(data)                                        (0x0000FF00&((data)<<8))
#define  MC_PTG_PTG_crc_0_ptg_crc_0(data)                                        (0x000000FF&(data))
#define  MC_PTG_PTG_crc_0_get_ptg_crc_3(data)                                    ((0xFF000000&(data))>>24)
#define  MC_PTG_PTG_crc_0_get_ptg_crc_2(data)                                    ((0x00FF0000&(data))>>16)
#define  MC_PTG_PTG_crc_0_get_ptg_crc_1(data)                                    ((0x0000FF00&(data))>>8)
#define  MC_PTG_PTG_crc_0_get_ptg_crc_0(data)                                    (0x000000FF&(data))

#define  MC_PTG_PTG_crc_1                                                       0x180B3064
#define  MC_PTG_PTG_crc_1_reg_addr                                               "0xB80B3064"
#define  MC_PTG_PTG_crc_1_reg                                                    0xB80B3064
#define  MC_PTG_PTG_crc_1_inst_addr                                              "0x0014"
#define  set_MC_PTG_PTG_crc_1_reg(data)                                          (*((volatile unsigned int*)MC_PTG_PTG_crc_1_reg)=data)
#define  get_MC_PTG_PTG_crc_1_reg                                                (*((volatile unsigned int*)MC_PTG_PTG_crc_1_reg))
#define  MC_PTG_PTG_crc_1_ptg_crc_7_shift                                        (24)
#define  MC_PTG_PTG_crc_1_ptg_crc_6_shift                                        (16)
#define  MC_PTG_PTG_crc_1_ptg_crc_5_shift                                        (8)
#define  MC_PTG_PTG_crc_1_ptg_crc_4_shift                                        (0)
#define  MC_PTG_PTG_crc_1_ptg_crc_7_mask                                         (0xFF000000)
#define  MC_PTG_PTG_crc_1_ptg_crc_6_mask                                         (0x00FF0000)
#define  MC_PTG_PTG_crc_1_ptg_crc_5_mask                                         (0x0000FF00)
#define  MC_PTG_PTG_crc_1_ptg_crc_4_mask                                         (0x000000FF)
#define  MC_PTG_PTG_crc_1_ptg_crc_7(data)                                        (0xFF000000&((data)<<24))
#define  MC_PTG_PTG_crc_1_ptg_crc_6(data)                                        (0x00FF0000&((data)<<16))
#define  MC_PTG_PTG_crc_1_ptg_crc_5(data)                                        (0x0000FF00&((data)<<8))
#define  MC_PTG_PTG_crc_1_ptg_crc_4(data)                                        (0x000000FF&(data))
#define  MC_PTG_PTG_crc_1_get_ptg_crc_7(data)                                    ((0xFF000000&(data))>>24)
#define  MC_PTG_PTG_crc_1_get_ptg_crc_6(data)                                    ((0x00FF0000&(data))>>16)
#define  MC_PTG_PTG_crc_1_get_ptg_crc_5(data)                                    ((0x0000FF00&(data))>>8)
#define  MC_PTG_PTG_crc_1_get_ptg_crc_4(data)                                    (0x000000FF&(data))

#define  MC_PTG_PTG_crc_12                                                      0x180B3090
#define  MC_PTG_PTG_crc_12_reg_addr                                              "0xB80B3090"
#define  MC_PTG_PTG_crc_12_reg                                                   0xB80B3090
#define  MC_PTG_PTG_crc_12_inst_addr                                             "0x0015"
#define  set_MC_PTG_PTG_crc_12_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_crc_12_reg)=data)
#define  get_MC_PTG_PTG_crc_12_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_crc_12_reg))
#define  MC_PTG_PTG_crc_12_ptg_crc3_calculate_shift                              (24)
#define  MC_PTG_PTG_crc_12_ptg_crc2_calculate_shift                              (16)
#define  MC_PTG_PTG_crc_12_ptg_crc1_calculate_shift                              (8)
#define  MC_PTG_PTG_crc_12_ptg_crc0_calculate_shift                              (0)
#define  MC_PTG_PTG_crc_12_ptg_crc3_calculate_mask                               (0xFF000000)
#define  MC_PTG_PTG_crc_12_ptg_crc2_calculate_mask                               (0x00FF0000)
#define  MC_PTG_PTG_crc_12_ptg_crc1_calculate_mask                               (0x0000FF00)
#define  MC_PTG_PTG_crc_12_ptg_crc0_calculate_mask                               (0x000000FF)
#define  MC_PTG_PTG_crc_12_ptg_crc3_calculate(data)                              (0xFF000000&((data)<<24))
#define  MC_PTG_PTG_crc_12_ptg_crc2_calculate(data)                              (0x00FF0000&((data)<<16))
#define  MC_PTG_PTG_crc_12_ptg_crc1_calculate(data)                              (0x0000FF00&((data)<<8))
#define  MC_PTG_PTG_crc_12_ptg_crc0_calculate(data)                              (0x000000FF&(data))
#define  MC_PTG_PTG_crc_12_get_ptg_crc3_calculate(data)                          ((0xFF000000&(data))>>24)
#define  MC_PTG_PTG_crc_12_get_ptg_crc2_calculate(data)                          ((0x00FF0000&(data))>>16)
#define  MC_PTG_PTG_crc_12_get_ptg_crc1_calculate(data)                          ((0x0000FF00&(data))>>8)
#define  MC_PTG_PTG_crc_12_get_ptg_crc0_calculate(data)                          (0x000000FF&(data))

#define  MC_PTG_PTG_crc_13                                                      0x180B3094
#define  MC_PTG_PTG_crc_13_reg_addr                                              "0xB80B3094"
#define  MC_PTG_PTG_crc_13_reg                                                   0xB80B3094
#define  MC_PTG_PTG_crc_13_inst_addr                                             "0x0016"
#define  set_MC_PTG_PTG_crc_13_reg(data)                                         (*((volatile unsigned int*)MC_PTG_PTG_crc_13_reg)=data)
#define  get_MC_PTG_PTG_crc_13_reg                                               (*((volatile unsigned int*)MC_PTG_PTG_crc_13_reg))
#define  MC_PTG_PTG_crc_13_ptg_crc7_calculate_shift                              (24)
#define  MC_PTG_PTG_crc_13_ptg_crc6_calculate_shift                              (16)
#define  MC_PTG_PTG_crc_13_ptg_crc5_calculate_shift                              (8)
#define  MC_PTG_PTG_crc_13_ptg_crc4_calculate_shift                              (0)
#define  MC_PTG_PTG_crc_13_ptg_crc7_calculate_mask                               (0xFF000000)
#define  MC_PTG_PTG_crc_13_ptg_crc6_calculate_mask                               (0x00FF0000)
#define  MC_PTG_PTG_crc_13_ptg_crc5_calculate_mask                               (0x0000FF00)
#define  MC_PTG_PTG_crc_13_ptg_crc4_calculate_mask                               (0x000000FF)
#define  MC_PTG_PTG_crc_13_ptg_crc7_calculate(data)                              (0xFF000000&((data)<<24))
#define  MC_PTG_PTG_crc_13_ptg_crc6_calculate(data)                              (0x00FF0000&((data)<<16))
#define  MC_PTG_PTG_crc_13_ptg_crc5_calculate(data)                              (0x0000FF00&((data)<<8))
#define  MC_PTG_PTG_crc_13_ptg_crc4_calculate(data)                              (0x000000FF&(data))
#define  MC_PTG_PTG_crc_13_get_ptg_crc7_calculate(data)                          ((0xFF000000&(data))>>24)
#define  MC_PTG_PTG_crc_13_get_ptg_crc6_calculate(data)                          ((0x00FF0000&(data))>>16)
#define  MC_PTG_PTG_crc_13_get_ptg_crc5_calculate(data)                          ((0x0000FF00&(data))>>8)
#define  MC_PTG_PTG_crc_13_get_ptg_crc4_calculate(data)                          (0x000000FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MC_PTG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_cmd_num:8;
        RBus_UInt32  ptg_crc_chk_time:8;
        RBus_UInt32  ptg_rept_num:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  ptg_cont_err_stop:1;
        RBus_UInt32  mc_rbus_write_lock:1;
        RBus_UInt32  ptg_cont_run:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ptg_en:1;
    };
}mc_ptg_ptg_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ptg_self_loop_back:1;
    };
}mc_ptg_ptg_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_trigger_start:1;
        RBus_UInt32  ptg_crc_flag:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  ptg_dbuf_boundary:8;
        RBus_UInt32  res2:13;
        RBus_UInt32  ptg_addr_auto_inc:1;
        RBus_UInt32  ptg_data_buf_dir:1;
        RBus_UInt32  ptg_buf_sel:1;
    };
}mc_ptg_ptg_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  ptg_addr_sync:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  ptg_buff_addr:8;
    };
}mc_ptg_ptg_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ptg_crc_byte_sel:3;
        RBus_UInt32  res2:16;
        RBus_UInt32  ptg_crc_bit_flag_0:8;
    };
}mc_ptg_ptg_ctl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ptg_crc_error_cnt:24;
    };
}mc_ptg_ptg_ctl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_0:32;
    };
}mc_ptg_ptg_wtmp_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_1:32;
    };
}mc_ptg_ptg_wtmp_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_2:32;
    };
}mc_ptg_ptg_wtmp_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_3:32;
    };
}mc_ptg_ptg_wtmp_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_4:32;
    };
}mc_ptg_ptg_wtmp_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_5:32;
    };
}mc_ptg_ptg_wtmp_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ptg_w_temp_6:24;
    };
}mc_ptg_ptg_wtmp_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_0:32;
    };
}mc_ptg_ptg_rtmp_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_1:32;
    };
}mc_ptg_ptg_rtmp_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_2:32;
    };
}mc_ptg_ptg_rtmp_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_3:32;
    };
}mc_ptg_ptg_rtmp_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_4:32;
    };
}mc_ptg_ptg_rtmp_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_5:32;
    };
}mc_ptg_ptg_rtmp_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_crc_3:8;
        RBus_UInt32  ptg_crc_2:8;
        RBus_UInt32  ptg_crc_1:8;
        RBus_UInt32  ptg_crc_0:8;
    };
}mc_ptg_ptg_crc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_crc_7:8;
        RBus_UInt32  ptg_crc_6:8;
        RBus_UInt32  ptg_crc_5:8;
        RBus_UInt32  ptg_crc_4:8;
    };
}mc_ptg_ptg_crc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_crc3_calculate:8;
        RBus_UInt32  ptg_crc2_calculate:8;
        RBus_UInt32  ptg_crc1_calculate:8;
        RBus_UInt32  ptg_crc0_calculate:8;
    };
}mc_ptg_ptg_crc_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_crc7_calculate:8;
        RBus_UInt32  ptg_crc6_calculate:8;
        RBus_UInt32  ptg_crc5_calculate:8;
        RBus_UInt32  ptg_crc4_calculate:8;
    };
}mc_ptg_ptg_crc_13_RBUS;

#else //apply LITTLE_ENDIAN

//======MC_PTG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  ptg_cont_run:1;
        RBus_UInt32  mc_rbus_write_lock:1;
        RBus_UInt32  ptg_cont_err_stop:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ptg_rept_num:8;
        RBus_UInt32  ptg_crc_chk_time:8;
        RBus_UInt32  ptg_cmd_num:8;
    };
}mc_ptg_ptg_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_self_loop_back:1;
        RBus_UInt32  res1:31;
    };
}mc_ptg_ptg_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_buf_sel:1;
        RBus_UInt32  ptg_data_buf_dir:1;
        RBus_UInt32  ptg_addr_auto_inc:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  ptg_dbuf_boundary:8;
        RBus_UInt32  res2:6;
        RBus_UInt32  ptg_crc_flag:1;
        RBus_UInt32  ptg_trigger_start:1;
    };
}mc_ptg_ptg_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_buff_addr:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  ptg_addr_sync:1;
        RBus_UInt32  res2:15;
    };
}mc_ptg_ptg_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_crc_bit_flag_0:8;
        RBus_UInt32  res1:16;
        RBus_UInt32  ptg_crc_byte_sel:3;
        RBus_UInt32  res2:5;
    };
}mc_ptg_ptg_ctl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_crc_error_cnt:24;
        RBus_UInt32  res1:8;
    };
}mc_ptg_ptg_ctl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_0:32;
    };
}mc_ptg_ptg_wtmp_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_1:32;
    };
}mc_ptg_ptg_wtmp_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_2:32;
    };
}mc_ptg_ptg_wtmp_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_3:32;
    };
}mc_ptg_ptg_wtmp_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_4:32;
    };
}mc_ptg_ptg_wtmp_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_5:32;
    };
}mc_ptg_ptg_wtmp_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_w_temp_6:24;
        RBus_UInt32  res1:8;
    };
}mc_ptg_ptg_wtmp_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_0:32;
    };
}mc_ptg_ptg_rtmp_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_1:32;
    };
}mc_ptg_ptg_rtmp_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_2:32;
    };
}mc_ptg_ptg_rtmp_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_3:32;
    };
}mc_ptg_ptg_rtmp_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_4:32;
    };
}mc_ptg_ptg_rtmp_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_r_temp_5:32;
    };
}mc_ptg_ptg_rtmp_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_crc_0:8;
        RBus_UInt32  ptg_crc_1:8;
        RBus_UInt32  ptg_crc_2:8;
        RBus_UInt32  ptg_crc_3:8;
    };
}mc_ptg_ptg_crc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_crc_4:8;
        RBus_UInt32  ptg_crc_5:8;
        RBus_UInt32  ptg_crc_6:8;
        RBus_UInt32  ptg_crc_7:8;
    };
}mc_ptg_ptg_crc_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_crc0_calculate:8;
        RBus_UInt32  ptg_crc1_calculate:8;
        RBus_UInt32  ptg_crc2_calculate:8;
        RBus_UInt32  ptg_crc3_calculate:8;
    };
}mc_ptg_ptg_crc_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptg_crc4_calculate:8;
        RBus_UInt32  ptg_crc5_calculate:8;
        RBus_UInt32  ptg_crc6_calculate:8;
        RBus_UInt32  ptg_crc7_calculate:8;
    };
}mc_ptg_ptg_crc_13_RBUS;




#endif 


#endif 
